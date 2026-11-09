// mpi_enc_test — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00012ab8 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::_mpp_err @ 00012adc size=12 ===== */

void _mpp_err(void)

{
  (*(code *)PTR__mpp_err_0003400c)();
  return;
}



/* ===== <EXTERNAL>::tolower @ 00012ae8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tolower(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_tolower_00034010)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::rewind @ 00012af4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rewind(FILE *__stream)

{
  (*(code *)PTR_rewind_00034014)(__stream);
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00012b00 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00034018)();
  return;
}



/* ===== <EXTERNAL>::mpp_env_get_u32 @ 00012b0c size=12 ===== */

void mpp_env_get_u32(void)

{
  (*(code *)PTR_mpp_env_get_u32_0003401c)();
  return;
}



/* ===== <EXTERNAL>::calloc @ 00012b18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00034020)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00012b24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00034024)();
  return piVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00012b30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00034028)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00012b3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0003402c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::mpp_frame_get_ver_stride @ 00012b54 size=12 ===== */

void mpp_frame_get_ver_stride(void)

{
  (*(code *)PTR_mpp_frame_get_ver_stride_00034034)();
  return;
}



/* ===== <EXTERNAL>::mpp_enc_cfg_set_u32 @ 00012b60 size=12 ===== */

void mpp_enc_cfg_set_u32(void)

{
  (*(code *)PTR_mpp_enc_cfg_set_u32_00034038)();
  return;
}



/* ===== <EXTERNAL>::mpp_enc_cfg_set_s32 @ 00012b6c size=12 ===== */

void mpp_enc_cfg_set_s32(void)

{
  (*(code *)PTR_mpp_enc_cfg_set_s32_0003403c)();
  return;
}



/* ===== <EXTERNAL>::mpp_buffer_get_size_with_caller @ 00012b78 size=12 ===== */

void mpp_buffer_get_size_with_caller(void)

{
  (*(code *)PTR_mpp_buffer_get_size_with_caller_00034040)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 00012b84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_00034044)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::vfprintf @ 00012b90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vfprintf_00034048)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::gettimeofday @ 00012b9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_0003404c)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::feof @ 00012ba8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int feof(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_feof_00034050)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::mpp_frame_set_eos @ 00012bb4 size=12 ===== */

void mpp_frame_set_eos(void)

{
  (*(code *)PTR_mpp_frame_set_eos_00034054)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00012bc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00034058)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00012bcc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0003405c)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen64 @ 00012be4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_00034064)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::mpp_frame_get_height @ 00012bf0 size=12 ===== */

void mpp_frame_get_height(void)

{
  (*(code *)PTR_mpp_frame_get_height_00034068)();
  return;
}



/* ===== <EXTERNAL>::ioctl @ 00012bfc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_0003406c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 00012c08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00034070)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 00012c14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_00034074)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::mpp_osal_malloc @ 00012c20 size=12 ===== */

void mpp_osal_malloc(void)

{
  (*(code *)PTR_mpp_osal_malloc_00034078)();
  return;
}



/* ===== <EXTERNAL>::mpp_frame_set_height @ 00012c38 size=12 ===== */

void mpp_frame_set_height(void)

{
  (*(code *)PTR_mpp_frame_set_height_00034080)();
  return;
}



/* ===== <EXTERNAL>::snprintf @ 00012c44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00034084)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::mpp_frame_set_pts @ 00012c50 size=12 ===== */

void mpp_frame_set_pts(void)

{
  (*(code *)PTR_mpp_frame_set_pts_00034088)();
  return;
}



/* ===== <EXTERNAL>::mpp_frame_deinit @ 00012c5c size=12 ===== */

void mpp_frame_deinit(void)

{
  (*(code *)PTR_mpp_frame_deinit_0003408c)();
  return;
}



/* ===== <EXTERNAL>::getpid @ 00012c68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_00034090)();
  return _Var1;
}



/* ===== <EXTERNAL>::mpp_frame_set_ver_stride @ 00012c74 size=12 ===== */

void mpp_frame_set_ver_stride(void)

{
  (*(code *)PTR_mpp_frame_set_ver_stride_00034094)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 00012c80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_00034098)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::__fgetc_unlocked @ 00012c8c size=12 ===== */

void __fgetc_unlocked(void)

{
  (*(code *)PTR___fgetc_unlocked_0003409c)();
  return;
}



/* ===== <EXTERNAL>::mpp_show_support_format @ 00012c98 size=12 ===== */

void mpp_show_support_format(void)

{
  (*(code *)PTR_mpp_show_support_format_000340a0)();
  return;
}



/* ===== <EXTERNAL>::memmove @ 00012ca4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_000340a4)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::fclose @ 00012cb0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_000340a8)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::fread @ 00012cbc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_000340ac)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::mpp_frame_set_width @ 00012cc8 size=12 ===== */

void mpp_frame_set_width(void)

{
  (*(code *)PTR_mpp_frame_set_width_000340b0)();
  return;
}



/* ===== <EXTERNAL>::mpp_time @ 00012cd4 size=12 ===== */

void mpp_time(void)

{
  (*(code *)PTR_mpp_time_000340b4)();
  return;
}



/* ===== <EXTERNAL>::mpp_frame_set_fmt @ 00012ce0 size=12 ===== */

void mpp_frame_set_fmt(void)

{
  (*(code *)PTR_mpp_frame_set_fmt_000340b8)();
  return;
}



/* ===== <EXTERNAL>::mpp_check_support_format @ 00012cec size=12 ===== */

void mpp_check_support_format(void)

{
  (*(code *)PTR_mpp_check_support_format_000340bc)();
  return;
}



/* ===== <EXTERNAL>::mpp_buffer_put_with_caller @ 00012cf8 size=12 ===== */

void mpp_buffer_put_with_caller(void)

{
  (*(code *)PTR_mpp_buffer_put_with_caller_000340c0)();
  return;
}



/* ===== <EXTERNAL>::fgetc @ 00012d04 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fgetc(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fgetc_000340c4)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_create @ 00012d10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_000340c8)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::_mpp_log @ 00012d1c size=12 ===== */

void _mpp_log(void)

{
  (*(code *)PTR__mpp_log_000340cc)();
  return;
}



/* ===== <EXTERNAL>::mpp_frame_set_hor_stride @ 00012d28 size=12 ===== */

void mpp_frame_set_hor_stride(void)

{
  (*(code *)PTR_mpp_frame_set_hor_stride_000340d0)();
  return;
}



/* ===== <EXTERNAL>::pthread_cond_signal @ 00012d34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_signal(pthread_cond_t *__cond)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_signal_000340d4)(__cond);
  return iVar1;
}



/* ===== <EXTERNAL>::mpp_destroy @ 00012d40 size=12 ===== */

void mpp_destroy(void)

{
  (*(code *)PTR_mpp_destroy_000340d8)();
  return;
}



/* ===== <EXTERNAL>::mpp_enc_cfg_deinit @ 00012d4c size=12 ===== */

void mpp_enc_cfg_deinit(void)

{
  (*(code *)PTR_mpp_enc_cfg_deinit_000340dc)();
  return;
}



/* ===== <EXTERNAL>::close @ 00012d58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_000340e0)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::fputc @ 00012d64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_000340e4)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::mpp_init_ext @ 00012d70 size=12 ===== */

void mpp_init_ext(void)

{
  (*(code *)PTR_mpp_init_ext_000340e8)();
  return;
}



/* ===== <EXTERNAL>::__aeabi_uidiv @ 00012d7c size=12 ===== */

void __aeabi_uidiv(void)

{
  (*(code *)PTR___aeabi_uidiv_000340ec)();
  return;
}



/* ===== <EXTERNAL>::fgets @ 00012d88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_000340f0)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::sscanf @ 00012d94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_000340f4)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 00012da0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_000340f8)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::pthread_cond_timedwait @ 00012dac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_timedwait(pthread_cond_t *__cond,pthread_mutex_t *__mutex,timespec *__abstime)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_timedwait_000340fc)(__cond);
  return iVar1;
}



/* ===== <EXTERNAL>::mmap64 @ 00012db8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap64(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off64_t __offset)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_mmap64_00034100)(__addr);
  return pvVar1;
}



/* ===== <EXTERNAL>::pthread_cond_init @ 00012dc4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_init(pthread_cond_t *__cond,pthread_condattr_t *__cond_attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_init_00034104)(__cond);
  return iVar1;
}



/* ===== <EXTERNAL>::mpp_frame_get_width @ 00012ddc size=12 ===== */

void mpp_frame_get_width(void)

{
  (*(code *)PTR_mpp_frame_get_width_0003410c)();
  return;
}



/* ===== <EXTERNAL>::__aeabi_uidivmod @ 00012de8 size=12 ===== */

void __aeabi_uidivmod(void)

{
  (*(code *)PTR___aeabi_uidivmod_00034110)();
  return;
}



/* ===== <EXTERNAL>::fflush @ 00012df4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00034114)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00012e00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00034118)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::munmap @ 00012e0c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_munmap_0003411c)(__addr);
  return iVar1;
}



/* ===== <EXTERNAL>::mpp_osal_calloc @ 00012e18 size=12 ===== */

void mpp_osal_calloc(void)

{
  (*(code *)PTR_mpp_osal_calloc_00034120)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00012e24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00034124)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::nanosleep @ 00012e30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int nanosleep(timespec *__requested_time,timespec *__remaining)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_nanosleep_00034128)(__requested_time);
  return iVar1;
}



/* ===== <EXTERNAL>::__aeabi_uldivmod @ 00012e3c size=12 ===== */

void __aeabi_uldivmod(void)

{
  (*(code *)PTR___aeabi_uldivmod_0003412c)();
  return;
}



/* ===== <EXTERNAL>::abort @ 00012e48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00034130)();
  return;
}



/* ===== <EXTERNAL>::sprintf @ 00012e54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_00034134)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::clearerr @ 00012e60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void clearerr(FILE *__stream)

{
  (*(code *)PTR_clearerr_00034138)(__stream);
  return;
}



/* ===== <EXTERNAL>::mpp_buffer_import_with_tag @ 00012e6c size=12 ===== */

void mpp_buffer_import_with_tag(void)

{
  (*(code *)PTR_mpp_buffer_import_with_tag_0003413c)();
  return;
}



/* ===== <EXTERNAL>::mpp_osal_free @ 00012e78 size=12 ===== */

void mpp_osal_free(void)

{
  (*(code *)PTR_mpp_osal_free_00034140)();
  return;
}



/* ===== <EXTERNAL>::strnlen @ 00012e84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strnlen(char *__string,size_t __maxlen)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strnlen_00034144)(__string);
  return sVar1;
}



/* ===== <EXTERNAL>::mpp_frame_set_buffer @ 00012e90 size=12 ===== */

void mpp_frame_set_buffer(void)

{
  (*(code *)PTR_mpp_frame_set_buffer_00034148)();
  return;
}



/* ===== <EXTERNAL>::mpp_frame_get_fmt @ 00012e9c size=12 ===== */

void mpp_frame_get_fmt(void)

{
  (*(code *)PTR_mpp_frame_get_fmt_0003414c)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 00012ea8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_00034150)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::__aeabi_idiv @ 00012eb4 size=12 ===== */

void __aeabi_idiv(void)

{
  (*(code *)PTR___aeabi_idiv_00034154)();
  return;
}



/* ===== <EXTERNAL>::pthread_cond_destroy @ 00012ec0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_destroy(pthread_cond_t *__cond)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_destroy_00034158)(__cond);
  return iVar1;
}



/* ===== <EXTERNAL>::open64 @ 00012ecc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open64_0003415c)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00012ed8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00034160)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::__aeabi_idivmod @ 00012ee4 size=12 ===== */

void __aeabi_idivmod(void)

{
  (*(code *)PTR___aeabi_idivmod_00034164)();
  return;
}



/* ===== <EXTERNAL>::mpp_buffer_get_fd_with_caller @ 00012ef0 size=12 ===== */

void mpp_buffer_get_fd_with_caller(void)

{
  (*(code *)PTR_mpp_buffer_get_fd_with_caller_00034168)();
  return;
}



/* ===== <EXTERNAL>::mpp_enc_cfg_init @ 00012efc size=12 ===== */

void mpp_enc_cfg_init(void)

{
  (*(code *)PTR_mpp_enc_cfg_init_0003416c)();
  return;
}



/* ===== <EXTERNAL>::free @ 00012f08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00034170)(__ptr);
  return;
}



/* ===== <EXTERNAL>::atoi @ 00012f14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_00034174)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::strchr @ 00012f20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_00034178)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::mpp_buffer_get_ptr_with_caller @ 00012f2c size=12 ===== */

void mpp_buffer_get_ptr_with_caller(void)

{
  (*(code *)PTR_mpp_buffer_get_ptr_with_caller_0003417c)();
  return;
}



/* ===== <EXTERNAL>::mpp_buffer_get_with_tag @ 00012f38 size=12 ===== */

void mpp_buffer_get_with_tag(void)

{
  (*(code *)PTR_mpp_buffer_get_with_tag_00034180)();
  return;
}



/* ===== <EXTERNAL>::fscanf @ 00012f44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fscanf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fscanf_00034184)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::mpp_frame_get_buffer @ 00012f50 size=12 ===== */

void mpp_frame_get_buffer(void)

{
  (*(code *)PTR_mpp_frame_get_buffer_00034188)();
  return;
}



/* ===== <EXTERNAL>::mpp_create @ 00012f5c size=12 ===== */

void mpp_create(void)

{
  (*(code *)PTR_mpp_create_0003418c)();
  return;
}



/* ===== <EXTERNAL>::mpp_frame_set_jpege_chan_id @ 00012f68 size=12 ===== */

void mpp_frame_set_jpege_chan_id(void)

{
  (*(code *)PTR_mpp_frame_set_jpege_chan_id_00034190)();
  return;
}



/* ===== <EXTERNAL>::mpp_frame_init @ 00012f74 size=12 ===== */

void mpp_frame_init(void)

{
  (*(code *)PTR_mpp_frame_init_00034194)();
  return;
}



/* ===== <EXTERNAL>::mpp_frame_get_hor_stride @ 00012f80 size=12 ===== */

void mpp_frame_get_hor_stride(void)

{
  (*(code *)PTR_mpp_frame_get_hor_stride_00034198)();
  return;
}



/* ===== <EXTERNAL>::strcpy @ 00012f8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_0003419c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00012f98 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_000341a0)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 00012fa4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_000341a4)(__th);
  return iVar1;
}



/* ===== main @ 00012fb0 size=116 ===== */

int main(int param_1,undefined4 param_2)

{
  void *__s;
  int iVar1;
  
  __s = (void *)mpi_enc_test_cmd_get();
  memset(__s,0,0x78);
  if (param_1 < 2) {
    iVar1 = -1;
  }
  else {
    iVar1 = mpi_enc_test_cmd_update_by_args(__s,param_1,param_2);
    if (iVar1 == 0) {
      mpi_enc_test_cmd_show_opt(__s);
      iVar1 = mpi_enc_test(__s);
      goto LAB_00012ff4;
    }
  }
  mpi_enc_test_help();
LAB_00012ff4:
  mpi_enc_test_cmd_put(__s);
  return iVar1;
}



/* ===== _start @ 00013024 size=56 ===== */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00034060)
            (DAT_00013058,param_2,&stack0x00000004,DAT_0001305c,DAT_00013054,param_1);
  return;
}



/* ===== FUN_00013060 @ 00013060 size=32 ===== */

void FUN_00013060(void)

{
  if (DAT_00013084 == DAT_00013080) {
    return;
  }
  if (DAT_00013088 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001307c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00013088)();
  return;
}



/* ===== _FINI_0 @ 000130c4 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00013100;
  if (*DAT_00013100 != '\0') {
    return;
  }
  FUN_00013060();
  if (DAT_00013104 != 0) {
    __deregister_frame_info(DAT_00013108);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 0001310c size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00013130 != 0) {
    __register_frame_info(DAT_00013138,DAT_00013134);
  }
  if ((DAT_000130bc - DAT_000130b8 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_000130c0 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000130b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000130c0)();
  return;
}



/* ===== test_ctx_init @ 00013140 size=992 ===== */

undefined4 test_ctx_init(int *param_1,undefined4 *param_2)

{
  int iVar1;
  FILE *pFVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  char *__s1;
  int iVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_2 == (undefined4 *)0x0 || param_1 == (int *)0x0) {
    _mpp_err(DAT_00013580 + 0x134f8,DAT_0001357c + 0x134f4,DAT_00013578 + 0x134f0,param_1,param_2);
    return 0xfffffffd;
  }
  iVar7 = DAT_00013530 + 0x1316c;
  iVar1 = mpp_osal_calloc(iVar7,0x650);
  if (iVar1 == 0) {
    _mpp_err(DAT_00013574 + 0x134cc,DAT_00013570 + 0x134c8,iVar7);
    uVar3 = 0xfffffffc;
    goto LAB_00013370;
  }
  iVar8 = param_2[8];
  iVar7 = param_2[9];
  *(undefined8 *)(iVar1 + 0x5c4) = *(undefined8 *)(param_2 + 8);
  uVar4 = param_2[10];
  uVar5 = param_2[0xb];
  uVar3 = param_2[5];
  if (uVar4 == 0) {
    uVar4 = iVar8 + 0xfU & 0xfffffff0;
  }
  *(uint *)(iVar1 + 0x5cc) = uVar4;
  if (uVar5 == 0) {
    uVar5 = iVar7 + 0xfU & 0xfffffff0;
  }
  *(uint *)(iVar1 + 0x5d0) = uVar5;
  uVar10 = *(undefined8 *)(param_2 + 0xc);
  uVar11 = *(undefined8 *)(param_2 + 0xe);
  iVar7 = param_2[4];
  *(undefined4 *)(iVar1 + 0x5d4) = uVar3;
  *(int *)(iVar1 + 0x5d8) = iVar7;
  *(undefined8 *)(iVar1 + 0x624) = uVar10;
  *(undefined8 *)(iVar1 + 0x62c) = uVar11;
  iVar8 = param_2[6];
  *(int *)(iVar1 + 0x5dc) = iVar8;
  if (iVar7 == 8 && iVar8 == 0) {
    _mpp_log(DAT_0001356c + 0x134a8,DAT_00013568 + 0x134a4,0);
    *(undefined4 *)(iVar1 + 0x5dc) = 1;
  }
  uVar6 = param_2[0x17];
  uVar3 = param_2[0x18];
  *(undefined4 *)(iVar1 + 0x634) = param_2[0x16];
  *(undefined4 *)(iVar1 + 0x638) = uVar6;
  *(undefined4 *)(iVar1 + 0x63c) = uVar3;
  iVar7 = VectorTableLookup(iVar1,param_2 + 0x10,2);
  iVar8 = VectorTableLookup(param_2,param_2 + 0x10,2);
  *(undefined8 *)(iVar1 + 0x60c) = uVar10;
  *(undefined8 *)(iVar1 + 0x614) = uVar11;
  uVar3 = param_2[0x14];
  uVar6 = param_2[0x19];
  *(undefined4 *)(iVar1 + 0x61c) = param_2[0x15];
  *(undefined4 *)(iVar1 + 0x620) = uVar3;
  *(undefined4 *)(iVar1 + 0x64c) = uVar6;
  iVar7 = open64((char *)(iVar7 + 0x1323c),iVar8);
  *(int *)(iVar1 + 0x640) = iVar7;
  if (iVar7 < 0) {
    _mpp_err(DAT_00013588 + 0x13518,DAT_00013584 + 0x13514,0);
    return 0xffffffff;
  }
  __s1 = (char *)*param_2;
  if (__s1 != (char *)0x0) {
    iVar7 = strncmp(__s1,(char *)(DAT_00013538 + 0x13288),10);
    if (iVar7 == 0) {
      iVar8 = DAT_0001353c + 0x132a4;
      _mpp_log(iVar8,DAT_00013540 + 0x132a8,0);
      uVar3 = camera_source_init(*param_2,4,*(undefined4 *)(iVar1 + 0x5c4),
                                 *(undefined4 *)(iVar1 + 0x5c8),*(undefined4 *)(iVar1 + 0x5d4));
      iVar7 = DAT_00013544 + 0x132d8;
      *(undefined4 *)(iVar1 + 0x5e4) = uVar3;
      _mpp_log(iVar8,iVar7,0);
      if (*(int *)(iVar1 + 0x5e4) == 0) {
        _mpp_err(iVar8,DAT_00013564 + 0x1348c,0,*param_2);
      }
    }
    else {
      pFVar2 = fopen64(__s1,(char *)(DAT_0001354c + 0x133f0));
      *(FILE **)(iVar1 + 0x20) = pFVar2;
      if (pFVar2 == (FILE *)0x0) {
        iVar7 = DAT_00013550 + 0x13414;
        _mpp_err(iVar7,DAT_00013554 + 0x1341c,0,*param_2);
        _mpp_err(iVar7,DAT_00013558 + 0x13434,0);
      }
    }
  }
  if ((char *)param_2[1] == (char *)0x0) {
LAB_00013310:
    uVar3 = 0;
  }
  else {
    pFVar2 = fopen64((char *)param_2[1],(char *)(DAT_00013548 + 0x13304));
    *(FILE **)(iVar1 + 0x24) = pFVar2;
    if (pFVar2 != (FILE *)0x0) goto LAB_00013310;
    _mpp_err(DAT_00013560 + 0x13470,DAT_0001355c + 0x1346c,0,param_2[1]);
    uVar3 = 0xfffffffb;
  }
  uVar4 = *(uint *)(iVar1 + 0x5d4);
  uVar5 = uVar4 & 0xfffff;
  iVar7 = (*(int *)(iVar1 + 0x5d0) + 0x3fU & 0xffffffc0) *
          (*(int *)(iVar1 + 0x5cc) + 0x3fU & 0xffffffc0);
  if (uVar5 == 6) {
LAB_00013398:
    bVar9 = (uVar4 & 0xf00000) == 0;
    if (bVar9) {
      *(undefined4 *)(iVar1 + 0x5e8) = 0;
    }
    *(int *)(iVar1 + 0x5ec) = iVar7 * 2;
joined_r0x000133a8:
    if (bVar9) goto LAB_00013370;
  }
  else {
    if (6 < uVar5) {
      if ((7 < uVar5) && ((uVar5 < 0xc || (uVar5 - 0x10000 < 6)))) goto LAB_00013398;
LAB_0001335c:
      bVar9 = (uVar4 & 0xf00000) == 0;
      if (bVar9) {
        *(undefined4 *)(iVar1 + 0x5e8) = 0;
      }
      *(int *)(iVar1 + 0x5ec) = iVar7 * 4;
      goto joined_r0x000133a8;
    }
    if (uVar5 == 2) goto LAB_00013398;
    if ((uVar5 != 4) && (uVar5 != 0)) goto LAB_0001335c;
    bVar9 = (uVar4 & 0xf00000) == 0;
    if (bVar9) {
      *(undefined4 *)(iVar1 + 0x5e8) = 0;
    }
    *(uint *)(iVar1 + 0x5ec) = (uint)(iVar7 * 3) >> 1;
    if (bVar9) goto LAB_00013370;
  }
  *(uint *)(iVar1 + 0x5e8) =
       ((*(int *)(iVar1 + 0x5c8) + 0xfU & 0xfffffff0) *
        (*(int *)(iVar1 + 0x5c4) + 0xfU & 0xfffffff0) >> 4) + 0xfff & 0xfffff000;
LAB_00013370:
  *param_1 = iVar1;
  return uVar3;
}



/* ===== test_ctx_deinit @ 0001358c size=180 ===== */

undefined4 test_ctx_deinit(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0x640) != 0) {
      close(*(int *)(iVar1 + 0x640));
    }
    if (*(int *)(iVar1 + 0x5e4) != 0) {
      camera_source_deinit();
      *(undefined4 *)(iVar1 + 0x5e4) = 0;
    }
    if (*(FILE **)(iVar1 + 0x20) != (FILE *)0x0) {
      fclose(*(FILE **)(iVar1 + 0x20));
      *(undefined4 *)(iVar1 + 0x20) = 0;
    }
    if (*(FILE **)(iVar1 + 0x24) != (FILE *)0x0) {
      fclose(*(FILE **)(iVar1 + 0x24));
      *(undefined4 *)(iVar1 + 0x24) = 0;
    }
    mpp_osal_free(DAT_00013640 + 0x13600,iVar1);
    *param_1 = 0;
    return 0;
  }
  _mpp_err(DAT_0001364c + 0x13638,DAT_00013648 + 0x13634,DAT_00013644 + 0x13630,0);
  return 0xfffffffd;
}



/* ===== test_mpp_enc_cfg_setup @ 00013650 size=2560 ===== */

int test_mpp_enc_cfg_setup(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  
  local_44 = 0;
  local_40 = 0;
  if (param_1 == 0) {
    return -3;
  }
  iVar7 = *(int *)(param_1 + 0x2c);
  uVar6 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  if ((*(int *)(param_1 + 0x5d8) == 8) && (*(int *)(param_1 + 0x644) != 0)) {
    iVar7 = *(int *)(param_1 + 0x38);
    uVar6 = *(undefined4 *)(param_1 + 0x34);
    uVar4 = *(undefined4 *)(param_1 + 0x3c);
  }
  iVar1 = *(int *)(param_1 + 0x620);
  if (*(int *)(param_1 + 0x610) == 0) {
    *(undefined4 *)(param_1 + 0x610) = 1;
  }
  if (*(int *)(param_1 + 0x614) == 0) {
    *(undefined4 *)(param_1 + 0x614) = 0x1e;
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
  }
  if (iVar1 == 0) {
    iVar1 = 0x1e;
    *(undefined4 *)(param_1 + 0x620) = 0x1e;
  }
  if (*(int *)(param_1 + 0x624) == 0) {
    iVar3 = *(int *)(param_1 + 0x5c4);
    iVar5 = *(int *)(param_1 + 0x5c8);
    iVar1 = __aeabi_idiv(iVar1,*(undefined4 *)(param_1 + 0x61c));
    *(uint *)(param_1 + 0x624) = iVar1 * ((uint)(iVar5 * iVar3) >> 3);
  }
  iVar1 = (**(code **)(iVar7 + 0x3c))(uVar6,0x320002,uVar4);
  if (iVar1 != 0) {
    _mpp_err(DAT_00014108 + 0x13c78,DAT_00014104 + 0x13c74,0,iVar1);
    return iVar1;
  }
  mpp_enc_cfg_set_s32(uVar4,DAT_00014050 + 0x13718,*(undefined4 *)(param_1 + 0x5c4));
  mpp_enc_cfg_set_s32(uVar4,DAT_00014054 + 0x1372c,*(undefined4 *)(param_1 + 0x5c8));
  mpp_enc_cfg_set_s32(uVar4,DAT_00014058 + 0x13740,*(undefined4 *)(param_1 + 0x5cc));
  mpp_enc_cfg_set_s32(uVar4,DAT_0001405c + 0x13754,*(undefined4 *)(param_1 + 0x5d0));
  mpp_enc_cfg_set_s32(uVar4,DAT_00014060 + 0x13768,*(undefined4 *)(param_1 + 0x5d4));
  mpp_enc_cfg_set_s32(uVar4,DAT_00014064 + 0x1377c,0);
  mpp_enc_cfg_set_s32(uVar4,DAT_00014068 + 0x13790,0);
  mpp_enc_cfg_set_s32(uVar4,DAT_0001406c + 0x137a4,*(undefined4 *)(param_1 + 0x630));
  mpp_enc_cfg_set_s32(uVar4,DAT_00014070 + 0x137b8,*(undefined4 *)(param_1 + 0x60c));
  mpp_enc_cfg_set_s32(uVar4,DAT_00014074 + 0x137cc,*(undefined4 *)(param_1 + 0x614));
  mpp_enc_cfg_set_s32(uVar4,DAT_00014078 + 0x137e0,*(undefined4 *)(param_1 + 0x610));
  mpp_enc_cfg_set_s32(uVar4,DAT_0001407c + 0x137f4,*(undefined4 *)(param_1 + 0x618));
  mpp_enc_cfg_set_s32(uVar4,DAT_00014080 + 0x13808,*(undefined4 *)(param_1 + 0x620));
  mpp_enc_cfg_set_s32(uVar4,DAT_00014084 + 0x1381c,*(undefined4 *)(param_1 + 0x61c));
  iVar1 = *(int *)(param_1 + 0x638);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x620) << 1;
  }
  mpp_enc_cfg_set_s32(uVar4,DAT_00014088 + 0x13834,iVar1);
  mpp_enc_cfg_set_u32(uVar4,DAT_0001408c + 0x13850,0);
  mpp_enc_cfg_set_u32(uVar4,DAT_00014090 + 0x13864,0x14);
  mpp_enc_cfg_set_u32(uVar4,DAT_00014094 + 0x13878,1);
  if (*(int *)(param_1 + 0x5d8) != 8) {
    mpp_env_get_u32(DAT_000140ec + 0x13bf0,&local_44,0);
    mpp_env_get_u32(DAT_000140f0 + 0x13c04,&local_40);
  }
  mpp_enc_cfg_set_u32(uVar4,DAT_00014098 + 0x13898,local_44);
  mpp_enc_cfg_set_u32(uVar4,DAT_0001409c + 0x138ac,local_40);
  mpp_enc_cfg_set_s32(uVar4,DAT_000140a0 + 0x138c0,*(undefined4 *)(param_1 + 0x624));
  switch(*(undefined4 *)(param_1 + 0x630)) {
  case 0:
    goto LAB_00013d04;
  case 1:
    iVar1 = *(int *)(param_1 + 0x628);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x624) * 0x11;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xf;
      }
      iVar1 = iVar1 >> 4;
    }
    mpp_enc_cfg_set_s32(uVar4,DAT_000140a4 + 0x13914,iVar1);
    iVar1 = *(int *)(param_1 + 0x62c);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x624) * 0xf;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xf;
      }
      iVar1 = iVar1 >> 4;
    }
    mpp_enc_cfg_set_s32(uVar4,DAT_000140a8 + 0x13948,iVar1);
    break;
  case 2:
    break;
  case 3:
LAB_00013d04:
    iVar1 = *(int *)(param_1 + 0x628);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x624) * 0x11;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xf;
      }
      iVar1 = iVar1 >> 4;
    }
    mpp_enc_cfg_set_s32(uVar4,DAT_00014124 + 0x13d38,iVar1);
    iVar1 = *(int *)(param_1 + 0x62c);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x624);
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xf;
      }
      iVar1 = iVar1 >> 4;
    }
    mpp_enc_cfg_set_s32(uVar4,DAT_00014128 + 0x13d68,iVar1);
    uVar2 = *(uint *)(param_1 + 0x5d8);
    bVar8 = uVar2 == 8;
    if (!bVar8) goto LAB_00013954;
    goto LAB_00013dfc;
  default:
    iVar1 = *(int *)(param_1 + 0x628);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x624) * 0x11;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xf;
      }
      iVar1 = iVar1 >> 4;
    }
    mpp_enc_cfg_set_s32(uVar4,DAT_00014198 + 0x13ff8,iVar1);
    iVar1 = *(int *)(param_1 + 0x62c);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x624) * 0xf;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xf;
      }
      iVar1 = iVar1 >> 4;
    }
    mpp_enc_cfg_set_s32(uVar4,DAT_0001419c + 0x14014,iVar1);
  }
  uVar2 = *(uint *)(param_1 + 0x5d8);
  bVar8 = false;
  if (uVar2 == 8) {
LAB_00013dfc:
    mpp_enc_cfg_set_s32(uVar4,DAT_00014138 + 0x13e10,0x50);
    mpp_enc_cfg_set_s32(uVar4,DAT_0001413c + 0x13e24,99);
    mpp_enc_cfg_set_s32(uVar4,DAT_00014140 + 0x13e38,1);
    uVar2 = *(uint *)(param_1 + 0x5d8);
    goto LAB_00013970;
  }
LAB_00013954:
  if (7 < uVar2 && !bVar8) {
    if (uVar2 == 9) {
      mpp_enc_cfg_set_s32(uVar4,DAT_0001410c + 0x13c98,0x28);
      mpp_enc_cfg_set_s32(uVar4,DAT_00014110 + 0x13cac,0x7f);
      mpp_enc_cfg_set_s32(uVar4,DAT_00014114 + 0x13cc0,0);
      mpp_enc_cfg_set_s32(uVar4,DAT_00014118 + 0x13cd4,0x7f);
      mpp_enc_cfg_set_s32(uVar4,DAT_0001411c + 0x13ce8,0);
      mpp_enc_cfg_set_s32(uVar4,DAT_00014120 + 0x13cfc,6);
      uVar2 = *(uint *)(param_1 + 0x5d8);
    }
    else if (uVar2 == 0x1000004) goto LAB_00013b68;
    goto LAB_00013970;
  }
  if (uVar2 != 7) goto LAB_00013970;
LAB_00013b68:
  switch(*(undefined4 *)(param_1 + 0x630)) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    mpp_enc_cfg_set_s32(uVar4,DAT_0001414c + 0x13e7c,0x14);
    mpp_enc_cfg_set_s32(uVar4,DAT_00014150 + 0x13e90,0x14);
    mpp_enc_cfg_set_s32(uVar4,DAT_00014154 + 0x13ea4,0x14);
    mpp_enc_cfg_set_s32(uVar4,DAT_00014158 + 0x13eb8,0x14);
    mpp_enc_cfg_set_s32(uVar4,DAT_0001415c + 0x13ecc,0x14);
    mpp_enc_cfg_set_s32(uVar4,DAT_00014160 + 0x13ee0,2);
    uVar2 = *(uint *)(param_1 + 0x5d8);
    goto LAB_00013970;
  case 3:
    break;
  default:
    _mpp_err(DAT_00014194 + 0x13fd4,DAT_00014190 + 0x13fd0,DAT_0001418c + 0x13fcc);
    uVar2 = *(uint *)(param_1 + 0x5d8);
    goto LAB_00013970;
  }
  mpp_enc_cfg_set_s32(uVar4,DAT_00014164 + 0x13efc,0x1a);
  mpp_enc_cfg_set_s32(uVar4,DAT_00014168 + 0x13f10,0x33);
  mpp_enc_cfg_set_s32(uVar4,DAT_0001416c + 0x13f24,10);
  mpp_enc_cfg_set_s32(uVar4,DAT_00014170 + 0x13f38,0x33);
  mpp_enc_cfg_set_s32(uVar4,DAT_00014174 + 0x13f4c,10);
  mpp_enc_cfg_set_s32(uVar4,DAT_00014178 + 0x13f60,2);
  uVar2 = *(uint *)(param_1 + 0x5d8);
LAB_00013970:
  mpp_enc_cfg_set_s32(uVar4,DAT_000140ac + 0x13980,uVar2);
  uVar2 = *(uint *)(param_1 + 0x5d8);
  if (uVar2 < 10) {
    if (7 < uVar2) goto LAB_00013a00;
    if (uVar2 == 7) {
      mpp_enc_cfg_set_s32(uVar4,DAT_000140b0 + 0x139b0,100);
      mpp_enc_cfg_set_s32(uVar4,DAT_000140b4 + 0x139c4,0x28);
      mpp_enc_cfg_set_s32(uVar4,DAT_000140b8 + 0x139d8,1);
      mpp_enc_cfg_set_s32(uVar4,DAT_000140bc + 0x139ec,0);
      mpp_enc_cfg_set_s32(uVar4,DAT_000140c0 + 0x13a00,1);
      goto LAB_00013a00;
    }
  }
  else if (uVar2 == 0x1000004) goto LAB_00013a00;
  _mpp_err(DAT_000140e8 + 0x13bb4,DAT_000140e4 + 0x13bb0,DAT_000140e0 + 0x13bac);
LAB_00013a00:
  iVar1 = DAT_000140c4;
  *(undefined8 *)(param_1 + 0x5fc) = 0;
  mpp_env_get_u32(iVar1 + 0x13a20,(undefined8 *)(param_1 + 0x5fc),0);
  mpp_env_get_u32(DAT_000140c8 + 0x13a34,param_1 + 0x600,0);
  if (*(int *)(param_1 + 0x5fc) != 0) {
    _mpp_log(DAT_000140f8 + 0x13c30,DAT_000140f4 + 0x13c28,0,uVar6,*(int *)(param_1 + 0x5fc),
             *(undefined4 *)(param_1 + 0x600));
    mpp_enc_cfg_set_s32(uVar4,DAT_000140fc + 0x13c44,*(undefined4 *)(param_1 + 0x5fc));
    mpp_enc_cfg_set_s32(uVar4,DAT_00014100 + 0x13c58,*(undefined4 *)(param_1 + 0x600));
  }
  iVar1 = (**(code **)(iVar7 + 0x3c))(uVar6,0x320001,uVar4);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x5bc) = 2;
    iVar1 = (**(code **)(iVar7 + 0x3c))(uVar6,0x32000f,param_1 + 0x5bc);
    if (iVar1 != 0) {
      _mpp_err(DAT_00014148 + 0x13e5c,DAT_00014144 + 0x13e58,0,iVar1);
      return iVar1;
    }
    if (*(int *)(param_1 + 0x5d8) == 0x1000004 || *(int *)(param_1 + 0x5d8) == 7) {
      *(undefined4 *)(param_1 + 0x5c0) = 1;
      iVar1 = (**(code **)(iVar7 + 0x3c))(uVar6,0x328001);
      if (iVar1 != 0) {
        _mpp_err(DAT_00014188 + 0x13fac,DAT_00014184 + 0x13fa8,0);
        return iVar1;
      }
    }
    local_3c = *(int *)(param_1 + 0x634);
    mpp_env_get_u32(DAT_000140cc + 0x13ae4,&local_3c,local_3c);
    if (local_3c != 0) {
      iVar1 = DAT_0001412c + 0x13d90;
      _mpp_log(iVar1,DAT_00014130 + 0x13d94);
      local_38 = *(undefined4 *)(param_1 + 0x634);
      local_34 = *(undefined8 *)(param_1 + 0x638);
      local_2c = 0;
      local_24 = 0;
      iVar7 = (**(code **)(iVar7 + 0x3c))(uVar6,0x328201,&local_38);
      if (iVar7 != 0) {
        _mpp_err(iVar1,DAT_00014134 + 0x13df8,0);
        return iVar7;
      }
    }
    mpp_env_get_u32(DAT_000140d0 + 0x13b0c,param_1 + 0x5f4,0);
    mpp_env_get_u32(DAT_000140d4 + 0x13b24,param_1 + 0x5f8,0);
    mpp_env_get_u32(DAT_000140d8 + 0x13b3c,param_1 + 0x608,0);
    mpp_env_get_u32(DAT_000140dc + 0x13b54,param_1 + 0x604,0);
    return 0;
  }
  _mpp_err(DAT_00014180 + 0x13f84,DAT_0001417c + 0x13f80,0,iVar1);
  return iVar1;
}



/* ===== save_to_file @ 000141a0 size=100 ===== */

void save_to_file(char *param_1,void *param_2,size_t param_3)

{
  FILE *__s;
  
  __s = fopen64(param_1,(char *)(DAT_00014204 + 0x141bc));
  if (__s != (FILE *)0x0) {
    fwrite(param_2,1,param_3,__s);
    fclose(__s);
    return;
  }
  _mpp_err(DAT_0001420c + 0x14200,DAT_00014208 + 0x141fc,0,param_1);
  return;
}



/* ===== jpeg_comb_get_packet @ 00014210 size=416 ===== */

undefined4 jpeg_comb_get_packet(int param_1)

{
  int iVar1;
  __pid_t _Var2;
  undefined4 uVar3;
  void *__addr;
  int iVar4;
  char *__format;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *local_180;
  undefined4 local_17c;
  undefined4 uStack_178;
  int local_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  char acStack_160 [128];
  undefined4 local_e0 [4];
  int local_d0;
  size_t local_cc;
  
  local_180 = (undefined4 *)0x0;
  memset(local_e0,0,0xb8);
  _Var2 = getpid();
  if (param_1 == 0) {
    uVar3 = 0xfffffffd;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x38);
    uVar6 = *(undefined4 *)(param_1 + 0x34);
    local_180 = local_e0;
    uVar3 = (**(code **)(iVar7 + 0x1c))(uVar6,&local_180);
    iVar1 = local_d0;
    if (local_d0 != 0) {
      uStack_16c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      local_174 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_164 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_17c = 0;
      uStack_178 = local_e0[0];
      iVar5 = DAT_000143b0 + 0x142d0;
      local_170 = 0x1c;
      iStack_168 = local_174;
      ioctl(*(int *)(param_1 + 0x640),0xc01c6101,&local_17c);
      _mpp_log(iVar5,DAT_000143b4 + 0x14300,0,local_cc,local_174,local_d0);
      __addr = mmap64((void *)0x0,local_cc,1,1,local_174,0);
      iVar4 = *(int *)(param_1 + 0x10);
      __format = (char *)(DAT_000143b8 + 0x14344);
      *(int *)(param_1 + 0x10) = iVar4 + 1;
      snprintf(acStack_160,0x7f,__format,_Var2,iVar4);
      _mpp_log(iVar5,DAT_000143bc + 0x14370,0,iVar1,acStack_160);
      save_to_file(acStack_160,__addr,iVar1);
      if (__addr != (void *)0x0) {
        munmap(__addr,local_cc);
      }
      close(local_174);
    }
    (**(code **)(iVar7 + 0x40))(uVar6,&local_180);
  }
  return uVar3;
}



/* ===== test_mpp_run @ 000143c0 size=2276 ===== */

int test_mpp_run(int *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  size_t __n;
  size_t sVar5;
  undefined4 uVar6;
  int iVar7;
  void *__ptr;
  undefined4 extraout_r1;
  int iVar8;
  int iVar9;
  FILE *__s;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  int local_148;
  uint local_140;
  undefined4 local_124;
  uint *local_120;
  undefined8 local_11c;
  int local_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  uint local_100 [4];
  size_t local_f0;
  size_t local_ec;
  undefined4 local_d4;
  int local_d0;
  
  uVar4 = DAT_00014728;
  uVar3 = DAT_00014720;
  uVar2 = DAT_00014718;
  iVar9 = DAT_00014738 + 0x143d8;
  if (param_1 == (int *)0x0) {
    iVar7 = -3;
  }
  else {
    iVar10 = param_1[0xb];
    iVar13 = param_1[10];
    if (param_1[1] == 0) {
      uVar14 = 0;
      iVar7 = 0;
      local_140 = 0;
      do {
        while( true ) {
          iVar11 = DAT_0001473c + 0x14648;
          local_124 = 0;
          local_120 = (uint *)0x0;
          memset(local_100,0,0xb8);
          uVar6 = mpp_buffer_get_ptr_with_caller(param_1[0x16d],iVar11);
          local_120 = local_100;
          if (param_1[8] != 0) break;
          if (param_1[0x179] == 0) {
            iVar7 = fill_image(uVar6,param_1[0x171],param_1[0x172],param_1[0x173],param_1[0x174],
                               param_1[0x175],param_1[3]);
            if (iVar7 != 0) {
              return iVar7;
            }
LAB_00014480:
            iVar7 = 0;
            local_148 = -1;
LAB_00014488:
            iVar11 = mpp_frame_init(&local_124);
            if (iVar11 != 0) {
              _mpp_err(DAT_000147a0 + 0x14cd0,DAT_0001479c + 0x14ccc,DAT_00014798 + 0x14cc8);
              return iVar11;
            }
            mpp_frame_set_width(local_124,param_1[0x171]);
            mpp_frame_set_height(local_124,param_1[0x172]);
            mpp_frame_set_hor_stride(local_124,param_1[0x173]);
            mpp_frame_set_ver_stride(local_124,param_1[0x174]);
            mpp_frame_set_fmt(local_124,param_1[0x175]);
            mpp_frame_set_pts(local_124,extraout_r1,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
            mpp_frame_set_eos(local_124,*param_1);
            mpp_frame_set_jpege_chan_id(local_124,0xffffffff);
            uVar14 = VectorAdd(uVar14,DAT_00014730,8);
            if (param_1[3] % 10 == 0) {
              if (param_1[0x191] == 0) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
                mpp_frame_set_jpege_chan_id(local_124,param_1[0x192]);
              }
            }
            else {
              bVar1 = false;
            }
            if (((FILE *)param_1[8] == (FILE *)0x0) ||
               (iVar11 = feof((FILE *)param_1[8]), iVar11 == 0)) {
              if (iVar7 == 0) {
                iVar7 = param_1[0x16d];
              }
              mpp_frame_set_buffer(local_124,iVar7);
            }
            else {
              mpp_frame_set_buffer(local_124,0);
            }
            iVar7 = param_1[0x17d];
            if (iVar7 == 0) {
              if (param_1[0x181] != 0) {
LAB_000148e8:
                if ((param_1[3] & 10U) == 0) {
                  local_11c = CONCAT44(DAT_00014748 + 0x1490c,0x13);
                  (**(code **)(iVar10 + 0x3c))(iVar13,0x328500,&local_11c);
                  iVar7 = param_1[0x17d];
                }
                if (iVar7 != 0) goto LAB_000147bc;
                goto LAB_0001483c;
              }
              iVar7 = param_1[0x182];
              if (iVar7 != 0) goto joined_r0x00014844;
            }
            else {
              if (param_1[0x181] != 0) goto LAB_000148e8;
LAB_000147bc:
              iVar7 = param_1[0x13a];
              param_1[0x10] = 1;
              if (iVar7 == 0) {
                param_1[0x13b] = 0x80;
                param_1[0x13c] = 0x80;
                gen_smpte_bar_argb(param_1 + 0x13a,0x80,0x10);
                iVar7 = param_1[0x13a];
              }
              osd3_get_test_case(param_1 + 0x10,param_1 + 0x12a,param_1 + 0x132,iVar7,param_1[0x13b]
                                 ,param_1[0x13c],(uint)param_1[3] % 0x1f);
              (**(code **)(iVar10 + 0x3c))(iVar13,0x328403,param_1 + 0x10);
LAB_0001483c:
              iVar7 = param_1[0x182];
joined_r0x00014844:
              if (iVar7 != 0) {
                *(undefined8 *)(param_1 + 0x13e) = uVar2;
                param_1[0x141] = 0x1010000;
                param_1[0x140] = 0x180000;
                *(undefined8 *)(param_1 + 0x142) = uVar3;
                param_1[0x145] = 0x1010001;
                param_1[0x144] = 0xa0001;
                *(undefined8 *)(param_1 + 0x14a) = uVar4;
                param_1[0x14c] = param_1[0x13e];
                param_1[0x14d] = param_1[0x13f];
                param_1[0x14e] = param_1[0x140];
                param_1[0x14f] = param_1[0x141];
                param_1[0x150] = param_1[0x142];
                param_1[0x151] = param_1[0x143];
                param_1[0x152] = param_1[0x144];
                param_1[0x153] = param_1[0x145];
                (**(code **)(iVar10 + 0x3c))(iVar13,0x320013,param_1 + 0x14a);
              }
            }
            iVar7 = (**(code **)(iVar10 + 0x18))(iVar13,local_124);
            if (iVar7 != 0) {
              _mpp_err(DAT_000147a8 + 0x14cf8,DAT_000147a4 + 0x14cf4,0);
              mpp_frame_deinit(&local_124);
              return iVar7;
            }
            mpp_frame_deinit(&local_124);
            iVar7 = (**(code **)(iVar10 + 0x1c))(iVar13,&local_120);
            __n = local_f0;
            if (iVar7 != 0) {
              return iVar7;
            }
            iVar7 = 0;
            if (local_f0 != 0) {
              uStack_108 = 0;
              local_114 = 0;
              local_11c = (ulonglong)local_100[0] << 0x20;
              uStack_10c = 0;
              local_110 = 0x1c;
              ioctl(param_1[400],0xc01c6101,&local_11c);
              uVar6 = local_d4;
              _mpp_log(DAT_00014758 + 0x149e4,DAT_00014754 + 0x149dc,0,param_1[3],local_f0,local_d4)
              ;
              iVar7 = local_114;
              __ptr = mmap64((void *)0x0,local_ec,1,1,local_114,0);
              sVar5 = local_ec;
              __s = (FILE *)param_1[9];
              param_1[1] = 0;
              if (__s == (FILE *)0x0) {
                if (__ptr != (void *)0x0) goto LAB_00014a58;
              }
              else if (__ptr != (void *)0x0) {
                uVar12 = __n + local_d0;
                if (uVar12 < local_ec) {
                  fwrite((void *)((int)__ptr + local_d0),1,__n,__s);
                  fflush((FILE *)param_1[9]);
                }
                else {
                  fwrite((void *)((int)__ptr + local_d0),1,local_ec - local_d0,__s);
                  fwrite(__ptr,1,uVar12 - sVar5,(FILE *)param_1[9]);
                  fflush((FILE *)param_1[9]);
                }
LAB_00014a58:
                munmap(__ptr,local_ec);
              }
              close(local_114);
              uVar12 = param_1[6];
              param_1[6] = uVar12 + __n;
              param_1[7] = param_1[7] + (uint)CARRY4(uVar12,__n);
              param_1[3] = param_1[3] + 1;
              if (param_1[1] != 0) {
                iVar11 = DAT_00014770 + 0x14ba0;
                _mpp_log(iVar11,DAT_00014774 + 0x14ba4,0,iVar13,iVar7,uVar6);
                if ((*param_1 == 0) &&
                   (_mpp_err(iVar11,DAT_0001477c + 0x14bdc,0,DAT_00014780 + 0x14be0,
                             DAT_00014778 + 0x14bcc,0x313),
                   (**(uint **)(iVar9 + DAT_00014794) & 0x10000000) != 0)) {
LAB_00014b84:
                    /* WARNING: Subroutine does not return */
                  abort();
                }
              }
              iVar7 = (**(code **)(iVar10 + 0x40))(iVar13,&local_120);
            }
            if (param_1[0x191] == 0) {
              bVar1 = false;
            }
            if (bVar1) {
              _mpp_log(DAT_00014760 + 0x14b34,DAT_0001475c + 0x14b30,0);
              jpeg_comb_get_packet(param_1);
            }
            if (-1 < local_148) {
              camera_source_put_frame(param_1[0x179],local_148);
            }
            if ((0 < param_1[0x177]) && (param_1[0x177] <= param_1[3])) {
              _mpp_log(DAT_000147b0 + 0x14d30,DAT_000147ac + 0x14d28,0,iVar13,param_1[3]);
              return iVar7;
            }
          }
          else {
            local_148 = camera_source_get_frame(param_1[0x179]);
            if ((local_148 < 0) &&
               (_mpp_err(DAT_0001476c + 0x14b6c,DAT_00014768 + 0x14b68,0,DAT_00014764 + 0x14b5c,
                         iVar11,0x277), (**(uint **)(iVar9 + DAT_00014794) & 0x10000000) != 0))
            goto LAB_00014b84;
            uVar12 = local_140 + 1;
            if (0x31 < local_140) {
              iVar7 = camera_frame_to_buf();
              local_140 = uVar12;
              if ((iVar7 == 0) &&
                 (_mpp_err(DAT_00014790 + 0x14c98,DAT_0001478c + 0x14c94,0,DAT_00014788 + 0x14c88,
                           DAT_00014784 + 0x14c7c,0x280),
                 (**(uint **)(iVar9 + DAT_00014794) & 0x10000000) != 0)) goto LAB_00014b84;
              goto LAB_00014488;
            }
            camera_source_put_frame(param_1[0x179],local_148);
            local_140 = uVar12;
          }
          if (param_1[1] != 0) {
            return iVar7;
          }
        }
        iVar7 = read_image(uVar6,param_1[8],param_1[0x171],param_1[0x172],param_1[0x173],
                           param_1[0x174],param_1[0x175]);
        if ((iVar7 != -1) && (iVar11 = feof((FILE *)param_1[8]), iVar11 == 0)) {
          if (iVar7 == -6) {
            return -6;
          }
          goto LAB_00014480;
        }
        *param_1 = 1;
        if ((-1 < param_1[0x177]) && (param_1[0x177] <= param_1[3])) {
          iVar11 = feof((FILE *)param_1[8]);
          iVar7 = 0;
          local_148 = -1;
          _mpp_log(DAT_00014744 + 0x14710,DAT_00014740 + 0x146fc,0,iVar13,iVar11);
          goto LAB_00014488;
        }
        clearerr((FILE *)param_1[8]);
        rewind((FILE *)param_1[8]);
        iVar11 = DAT_0001474c;
        iVar8 = param_1[0x178];
        *param_1 = 0;
        param_1[0x178] = iVar8 + 1;
        _mpp_log(iVar11 + 0x14964,DAT_00014750 + 0x1496c,0,iVar13,iVar8 + 1);
      } while (param_1[1] == 0);
    }
    else {
      iVar7 = 0;
    }
  }
  return iVar7;
}



/* ===== mpi_enc_create_jpegcomb @ 00014d48 size=360 ===== */

int mpi_enc_create_jpegcomb(int param_1)

{
  int iVar1;
  int iVar2;
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  uint uStack_44;
  undefined4 local_40;
  uint uStack_3c;
  undefined4 local_38;
  uint uStack_34;
  undefined4 local_30;
  uint uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  uint uStack_20;
  
  uStack_44 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_28 = 0;
  local_58 = (ulonglong)uStack_44 << 0x20;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_24 = 0;
  uStack_3c = uStack_44;
  uStack_34 = uStack_44;
  uStack_2c = uStack_44;
  uStack_20 = uStack_44;
  iVar1 = mpp_create(param_1 + 0x34,param_1 + 0x38);
  if (iVar1 != 0) {
    _mpp_err(DAT_00014ec8 + 0x14e5c,DAT_00014ec4 + 0x14e58,0,iVar1);
    return iVar1;
  }
  iVar2 = DAT_00014eb8 + 0x14da8;
  _mpp_log(iVar2,DAT_00014ebc + 0x14dbc,0,*(undefined4 *)(param_1 + 0x28),
           *(undefined4 *)(param_1 + 0x5c4),*(undefined4 *)(param_1 + 0x5c8),
           *(undefined4 *)(param_1 + 0x5d8));
  local_58 = DAT_00014eb0;
  *(undefined4 *)(param_1 + 0x648) = 6;
  *(undefined4 *)(param_1 + 0x5d8) = 8;
  local_50 = 6;
  iVar1 = mpp_init_ext(*(undefined4 *)(param_1 + 0x34),&local_58);
  if (iVar1 == 0) {
    iVar1 = mpp_enc_cfg_init(param_1 + 0x3c);
    if (iVar1 == 0) {
      iVar1 = test_mpp_enc_cfg_setup(param_1);
      if (iVar1 != 0) {
        _mpp_err(iVar2,DAT_00014ed8 + 0x14eac,DAT_00014ed4 + 0x14ea8,iVar1);
      }
      return iVar1;
    }
    _mpp_err(iVar2,DAT_00014ed0 + 0x14e84,DAT_00014ecc + 0x14e80,iVar1);
    return iVar1;
  }
  _mpp_err(iVar2,DAT_00014ec0 + 0x14e34,0,iVar1);
  return iVar1;
}



/* ===== mpi_enc_test @ 00014edc size=1332 ===== */

/* WARNING: Type propagation algorithm not settling */

int mpi_enc_test(undefined4 param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  int local_68 [3];
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_68[2] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar7 = DAT_00015410 + 0x14efc;
  local_34 = 0;
  local_68[1] = 0;
  local_68[0] = 0;
  local_54 = 0;
  local_4c = 0;
  local_44 = 0;
  local_3c = 0;
  uStack_30 = 0;
  uStack_50 = local_68[2];
  uStack_48 = local_68[2];
  uStack_40 = local_68[2];
  uStack_38 = local_68[2];
  uStack_2c = local_68[2];
  _mpp_log(iVar7,DAT_00015414 + 0x14f1c,0);
  iVar2 = test_ctx_init(local_68,param_1);
  mpp_env_get_u32(DAT_00015418 + 0x14f60,local_68[0] + 0x644,0);
  if (iVar2 == 0) {
    iVar10 = DAT_0001541c + 0x14f84;
    iVar2 = mpp_buffer_get_with_tag
                      (*(undefined4 *)(local_68[0] + 0x5b0),local_68[0] + 0x5b4,
                       *(int *)(local_68[0] + 0x5ec) + *(int *)(local_68[0] + 0x5e8),iVar7,iVar10);
    if (iVar2 == 0) {
      iVar2 = mpp_buffer_get_with_tag
                        (*(undefined4 *)(local_68[0] + 0x5b0),local_68[0] + 0x5b8,
                         *(undefined4 *)(local_68[0] + 0x5ec),iVar7,iVar10);
      if (iVar2 == 0) {
        iVar2 = mpp_create(local_68[0] + 0x28,local_68[0] + 0x2c);
        if (iVar2 == 0) {
          uVar13 = *(undefined4 *)(local_68[0] + 0x5c8);
          _mpp_log(iVar7,DAT_00015420 + 0x14ffc,0,*(undefined4 *)(local_68[0] + 0x28),
                   *(undefined4 *)(local_68[0] + 0x5c4),uVar13,*(undefined4 *)(local_68[0] + 0x5d8))
          ;
          local_68[1] = 1;
          local_5c = *(undefined4 *)(local_68[0] + 0x64c);
          local_68[2] = *(undefined4 *)(local_68[0] + 0x5d8);
          iVar2 = mpp_init_ext(*(undefined4 *)(local_68[0] + 0x28),local_68 + 1);
          if (iVar2 == 0) {
            iVar2 = mpp_enc_cfg_init(local_68[0] + 0x30);
            if (iVar2 == 0) {
              iVar2 = test_mpp_enc_cfg_setup(local_68[0]);
              if (iVar2 == 0) {
                if ((*(int *)(local_68[0] + 0x644) == 0) ||
                   (iVar2 = mpi_enc_create_jpegcomb(), iVar2 == 0)) {
                  iVar2 = test_mpp_run(local_68[0]);
                  if (iVar2 == 0) {
                    iVar2 = (**(code **)(*(int *)(local_68[0] + 0x2c) + 0x38))
                                      (*(undefined4 *)(local_68[0] + 0x28));
                    if (iVar2 == 0) {
                      if ((*(int *)(local_68[0] + 0x34) == 0) ||
                         (iVar7 = (**(code **)(*(int *)(local_68[0] + 0x2c) + 0x38))(), iVar7 == 0))
                      {
                        iVar7 = local_68[0];
                        uVar3 = __aeabi_idiv(*(undefined4 *)(local_68[0] + 0x620),
                                             *(undefined4 *)(local_68[0] + 0x61c));
                        iVar10 = *(int *)(iVar7 + 0xc);
                        uVar6 = *(undefined4 *)(iVar7 + 0x28);
                        iVar9 = DAT_00015424 + 0x15104;
                        lVar1 = (ulonglong)uVar3 * (ulonglong)*(uint *)(iVar7 + 0x18);
                        uVar4 = (uint)lVar1;
                        uVar14 = __aeabi_uldivmod(uVar4 << 3,
                                                  (*(uint *)(iVar7 + 0x18) * ((int)uVar3 >> 0x1f) +
                                                   uVar3 * *(int *)(iVar7 + 0x1c) +
                                                  (int)((ulonglong)lVar1 >> 0x20)) * 8 |
                                                  uVar4 >> 0x1d,iVar10,iVar10 >> 0x1f);
                        _mpp_log(DAT_00015428 + 0x1513c,iVar9,0,uVar6,iVar10,uVar13,uVar14);
                        goto LAB_0001518c;
                      }
                      _mpp_err(DAT_00015480 + 0x1540c,DAT_0001547c + 0x15408,0);
                      iVar2 = iVar7;
                    }
                    else {
                      _mpp_err(DAT_00015474 + 0x153d0,DAT_00015470 + 0x153cc,0);
                    }
                  }
                  else {
                    _mpp_err(DAT_00015464 + 0x1537c,DAT_00015460 + 0x15378,DAT_0001545c + 0x15374,
                             iVar2);
                  }
                }
                else {
                  _mpp_err(iVar7,DAT_00015478 + 0x153ec,iVar10,iVar2);
                }
              }
              else {
                _mpp_err(iVar7,DAT_0001546c + 0x153b4,iVar10,iVar2);
              }
            }
            else {
              _mpp_err(iVar7,DAT_00015468 + 0x15398,iVar10,iVar2);
            }
          }
          else {
            _mpp_err(iVar7,DAT_00015458 + 0x15358,0,iVar2);
          }
        }
        else {
          _mpp_err(iVar7,DAT_00015450 + 0x15320,0,iVar2);
        }
      }
      else {
        _mpp_err(iVar7,DAT_00015454 + 0x1533c,iVar10,iVar2);
      }
    }
    else {
      _mpp_err(iVar7,DAT_0001542c + 0x15168,iVar10,iVar2);
    }
  }
  else {
    _mpp_err(iVar7,DAT_0001544c + 0x15304,DAT_00015448 + 0x15300,iVar2);
  }
  _mpp_err(DAT_00015434 + 0x15188,DAT_00015430 + 0x15184,0,*(undefined4 *)(local_68[0] + 0x28),iVar2
          );
LAB_0001518c:
  if (*(int *)(local_68[0] + 0x28) != 0) {
    mpp_destroy();
    *(undefined4 *)(local_68[0] + 0x28) = 0;
  }
  if (*(int *)(local_68[0] + 0x30) != 0) {
    mpp_enc_cfg_deinit();
    *(undefined4 *)(local_68[0] + 0x30) = 0;
  }
  if (*(int *)(local_68[0] + 0x34) != 0) {
    mpp_destroy();
    *(undefined4 *)(local_68[0] + 0x34) = 0;
  }
  if (*(int *)(local_68[0] + 0x3c) != 0) {
    mpp_enc_cfg_deinit();
    *(undefined4 *)(local_68[0] + 0x3c) = 0;
  }
  if (*(int *)(local_68[0] + 0x5b4) != 0) {
    mpp_buffer_put_with_caller(*(int *)(local_68[0] + 0x5b4),DAT_00015438 + 0x15218);
    *(undefined4 *)(local_68[0] + 0x5b4) = 0;
  }
  if (*(int *)(local_68[0] + 0x5b8) != 0) {
    mpp_buffer_put_with_caller(*(int *)(local_68[0] + 0x5b8),DAT_0001543c + 0x1523c);
    *(undefined4 *)(local_68[0] + 0x5b8) = 0;
  }
  iVar10 = 0;
  iVar11 = DAT_00015440 + 0x15260;
  iVar9 = DAT_00015444 + 0x15264;
  iVar7 = local_68[0];
  do {
    iVar12 = iVar10 + 0x12a;
    iVar8 = iVar10 + 0x132;
    iVar5 = *(int *)(iVar7 + iVar12 * 4);
    iVar10 = iVar10 + 1;
    if (iVar5 != 0) {
      mpp_buffer_put_with_caller(iVar5,iVar11);
      *(undefined4 *)(local_68[0] + iVar12 * 4) = 0;
      iVar7 = local_68[0];
    }
    iVar5 = *(int *)(iVar7 + iVar8 * 4);
    if (iVar5 != 0) {
      mpp_buffer_put_with_caller(iVar5,iVar9);
      *(undefined4 *)(local_68[0] + iVar8 * 4) = 0;
      iVar7 = local_68[0];
    }
  } while (iVar10 != 8);
  if (*(void **)(iVar7 + 0x4e8) != (void *)0x0) {
    free(*(void **)(iVar7 + 0x4e8));
    *(undefined4 *)(local_68[0] + 0x4e8) = 0;
  }
  test_ctx_deinit(local_68);
  return iVar2;
}



/* ===== FUN_00015484 @ 00015484 size=844 ===== */

undefined4 FUN_00015484(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int iVar4;
  pthread_cond_t *__cond;
  undefined4 *puVar5;
  pthread_mutex_t *__mutex;
  undefined4 uVar6;
  timeval local_40;
  timespec local_38;
  timeval local_30;
  
  __cond = (pthread_cond_t *)(param_1 + 8);
  gettimeofday(&local_40,(__timezone_ptr_t)0x0);
  __mutex = (pthread_mutex_t *)(param_1 + 0x38);
  iVar2 = local_40.tv_usec / 1000;
  iVar1 = local_40.tv_sec * 1000;
  iVar3 = pthread_cond_init(__cond,(pthread_condattr_t *)0x0);
  if ((iVar3 == 0) && (iVar3 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0), iVar3 == 0))
  {
    iVar4 = DAT_000157d0 + 0x15514;
    iVar3 = DAT_000157d4 + 0x15518;
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(*(int *)(param_1 + 0x5c) + 8);
    _mpp_log(0,iVar3,iVar4);
  }
  do {
    iVar3 = *(int *)(param_1 + 0x50);
    gettimeofday(&local_30,(__timezone_ptr_t)0x0);
    iVar3 = iVar3 * 10000000 + local_30.tv_usec;
    local_38.tv_sec = local_30.tv_sec + iVar3 / 1000000;
    local_38.tv_nsec = (iVar3 % 1000000) * 1000;
    pthread_mutex_lock(__mutex);
    if (*(int *)(param_1 + 0x50) == 0) {
      *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
      pthread_mutex_unlock(__mutex);
      iVar3 = *(int *)(param_1 + 0x58);
joined_r0x000157c8:
      if (iVar3 == 0) goto LAB_00015718;
    }
    else {
      do {
        while (iVar3 = pthread_cond_timedwait(__cond,__mutex,&local_38), iVar3 == 0) {
          if (*(int *)(param_1 + 0x50) == 0) {
            *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
            pthread_mutex_unlock(__mutex);
            iVar3 = *(int *)(param_1 + 0x58);
            goto joined_r0x000157c8;
          }
        }
        iVar4 = *(int *)(param_1 + 0x50) + -1;
        *(int *)(param_1 + 0x50) = iVar4;
      } while (iVar4 != 0);
      *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
      pthread_mutex_unlock(__mutex);
      if (*(int *)(param_1 + 0x58) == 0) goto LAB_00015718;
      if (iVar3 == 0x6e) {
        _mpp_err(0,DAT_000157f4 + 0x1579c,0);
        goto LAB_00015718;
      }
    }
    gettimeofday(&local_40,(__timezone_ptr_t)0x0);
    _mpp_log(0,DAT_000157d8 + 0x15618,0,
             (local_40.tv_sec * 1000 + local_40.tv_usec / 1000) - (iVar1 + iVar2),
             *(undefined4 *)(param_1 + 0x60));
    _mpp_log(0,DAT_000157dc + 0x15644,0,**(undefined4 **)(param_1 + 0x5c));
    puVar5 = *(undefined4 **)(param_1 + 0x5c);
    __aeabi_idivmod(*(undefined4 *)(param_1 + 0x60),*puVar5);
    (**(code **)(param_1 + 4))(*(undefined4 *)(param_1 + 100),puVar5[extraout_r1 * 2 + 3]);
    pthread_mutex_lock(__mutex);
    puVar5 = *(undefined4 **)(param_1 + 0x5c);
    iVar3 = *(int *)(param_1 + 0x60);
    uVar6 = *puVar5;
    iVar4 = iVar3 + 1;
    *(int *)(param_1 + 0x60) = iVar4;
    __aeabi_idivmod(iVar3,uVar6);
    __aeabi_idivmod(iVar4,uVar6);
    uVar6 = puVar5[extraout_r1_01 * 2 + 2];
    _mpp_log(0,DAT_000157e0 + 0x156bc,0,puVar5[extraout_r1_00 * 2 + 2],uVar6);
    iVar3 = puVar5[extraout_r1_01 * 2 + 2];
    if ((int)puVar5[extraout_r1_00 * 2 + 2] < iVar3) {
LAB_000156e4:
      iVar3 = iVar3 - puVar5[extraout_r1_00 * 2 + 2];
      *(int *)(param_1 + 0x50) = iVar3;
    }
    else {
      iVar4 = *(int *)(*(int *)(param_1 + 0x5c) + 4);
      if (0 < iVar4) {
        iVar3 = iVar3 + iVar4;
        goto LAB_000156e4;
      }
      iVar3 = *(int *)(param_1 + 0x50);
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    _mpp_log(0,DAT_000157e8 + 0x15704,DAT_000157e4 + 0x15700,iVar3,uVar6);
    pthread_mutex_unlock(__mutex);
    if (*(int *)(param_1 + 0x58) == 0) {
LAB_00015718:
      pthread_cond_destroy(__cond);
      pthread_mutex_destroy(__mutex);
      _mpp_log(0,DAT_000157f0 + 0x15740,DAT_000157ec + 0x1573c);
      return 0;
    }
  } while( true );
}



/* ===== FUN_0001580c @ 0001580c size=56 ===== */

undefined4 FUN_0001580c(int param_1)

{
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x38));
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
  pthread_cond_signal((pthread_cond_t *)(param_1 + 8));
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38));
  return 0;
}



/* ===== event_ctx_create @ 00015844 size=124 ===== */

int * event_ctx_create(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *__arg;
  
  __arg = malloc(0x68);
  iVar1 = DAT_000158c0;
  if (__arg == (int *)0x0) {
    _mpp_err(0,DAT_000158c8 + 0x158bc,0);
  }
  else {
    __arg[0x16] = 1;
    iVar2 = DAT_000158c4;
    __arg[0x17] = param_1;
    *__arg = iVar1 + 0x15880;
    __arg[1] = param_2;
    __arg[0x19] = param_3;
    __arg[0x18] = 0;
    pthread_create((pthread_t *)(__arg + 0x15),(pthread_attr_t *)0x0,
                   (__start_routine *)(iVar2 + 0x158a0),__arg);
  }
  return __arg;
}



/* ===== event_ctx_release @ 000158cc size=76 ===== */

void event_ctx_release(void *param_1)

{
  void *pvStack_c;
  
  if (*(int *)((int)param_1 + 0x58) != 0) {
    *(undefined4 *)((int)param_1 + 0x58) = 0;
    *(undefined4 *)((int)param_1 + 0x50) = 0;
    pthread_cond_signal((pthread_cond_t *)((int)param_1 + 8));
  }
  pthread_join(*(pthread_t *)((int)param_1 + 0x54),&pvStack_c);
  free(param_1);
  return;
}



/* ===== FUN_00015918 @ 00015918 size=312 ===== */

char * FUN_00015918(undefined4 *param_1)

{
  int iVar1;
  FILE *__stream;
  uint uVar2;
  char *pcVar3;
  char cVar4;
  byte *pbVar5;
  char *pcVar6;
  char *__s;
  int iVar7;
  undefined1 *puVar8;
  
LAB_00015924:
  if (param_1[0x21] == 0) {
    puVar8 = (undefined1 *)((int)param_1 + 3);
    iVar7 = 0;
    do {
      __stream = (FILE *)*param_1;
      if (__stream->_chain == (_IO_FILE *)0x0) {
        uVar2 = fgetc(__stream);
        if (iVar7 == 0 && uVar2 == 0xffffffff) {
          return (char *)0x0;
        }
LAB_0001599c:
        if (uVar2 == 0xffffffff) goto LAB_000159cc;
        __stream = (FILE *)*param_1;
      }
      else {
        pbVar5 = (byte *)__stream->_IO_write_base;
        if (__stream->_IO_write_end <= pbVar5) {
          uVar2 = __fgetc_unlocked();
          if (iVar7 == 0 && uVar2 == 0xffffffff) {
            return (char *)0x0;
          }
          goto LAB_0001599c;
        }
        __stream->_IO_write_base = (char *)(pbVar5 + 1);
        uVar2 = (uint)*pbVar5;
      }
      iVar1 = feof(__stream);
      if (uVar2 == 10 || iVar1 != 0) goto LAB_000159cc;
      iVar7 = iVar7 + 1;
      puVar8 = puVar8 + 1;
      *puVar8 = (char)uVar2;
    } while( true );
  }
  cVar4 = *(char *)(param_1 + 1);
  goto LAB_000159e0;
LAB_000159cc:
  *(undefined1 *)((int)param_1 + iVar7 + 4) = 0;
  cVar4 = *(char *)(param_1 + 1);
  if (cVar4 != '#') {
LAB_000159e0:
    __s = (char *)(param_1 + 1);
    param_1[0x21] = 1;
    while (cVar4 == ' ') {
      __s = __s + 1;
      cVar4 = *__s;
    }
    pcVar3 = (char *)strlen(__s);
    if ((__s + (int)pcVar3)[-1] == ' ') {
      pcVar6 = __s + (int)(pcVar3 + -2);
      do {
        pcVar3 = pcVar6 + (1 - (int)__s);
        cVar4 = *pcVar6;
        pcVar6 = pcVar6 + -1;
      } while (cVar4 == ' ');
    }
    __s[(int)pcVar3] = '\0';
    return __s;
  }
  goto LAB_00015924;
}



/* ===== mpp_parse_config @ 00015a50 size=1792 ===== */

undefined4 mpp_parse_config(char *param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  char *__s1;
  char *__s1_00;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *__format;
  int iVar10;
  int iVar11;
  char *pcVar12;
  bool bVar13;
  FILE *local_b0 [33];
  undefined4 local_2c;
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    _mpp_err(0,DAT_000161c8 + 0x16130);
    uVar7 = 0xffffffff;
  }
  else {
    local_b0[0] = fopen64(param_1,(char *)(DAT_00016150 + 0x15a7c));
    if (local_b0[0] == (FILE *)0x0) {
      _mpp_err(0,DAT_000161cc + 0x16148,0,param_1);
      uVar7 = 0xffffffff;
    }
    else {
      __s1 = (char *)(DAT_00016154 + 0x15aa4);
      __format = (char *)(DAT_00016158 + 0x15aa8);
      iVar10 = DAT_0001615c + 0x15ab0;
      __s1_00 = (char *)(DAT_00016160 + 0x15ab8);
      local_2c = 0;
LAB_00015ad8:
      pcVar2 = (char *)FUN_00015918(local_b0);
      if (pcVar2 != (char *)0x0) {
        local_2c = 0;
        if (*pcVar2 == '[') {
          iVar3 = strncmp(__s1,pcVar2,8);
          if (iVar3 == 0) {
            iVar3 = 0;
            pcVar9 = __s1;
          }
          else {
            iVar3 = strncmp(__s1_00,pcVar2,7);
            if (iVar3 == 0) {
              iVar3 = 1;
              pcVar9 = __s1_00;
            }
            else {
              pcVar9 = (char *)(DAT_00016164 + 0x15b48);
              iVar3 = strncmp(pcVar9,pcVar2,5);
              if (iVar3 == 0) {
                iVar3 = 2;
              }
              else {
                pcVar9 = (char *)(DAT_00016168 + 0x15b68);
                iVar3 = strncmp(pcVar9,pcVar2,4);
                if (iVar3 == 0) {
                  iVar3 = 3;
                }
                else {
                  pcVar9 = (char *)(DAT_0001616c + 0x15b88);
                  iVar3 = strncmp(pcVar9,pcVar2,3);
                  if (iVar3 == 0) {
                    iVar3 = 4;
                  }
                  else {
                    pcVar9 = (char *)(DAT_00016170 + 89000);
                    iVar3 = strncmp(pcVar9,pcVar2,4);
                    if (iVar3 != 0) goto LAB_00015bb4;
                    iVar3 = 5;
                  }
                }
              }
            }
          }
          _mpp_log(0,DAT_00016178 + 0x15bf8,0,pcVar9);
          iVar3 = *(int *)(DAT_0001617c + 0x15c04 + iVar3 * 8);
          if (iVar3 == 0) {
            iVar3 = DAT_00016180 + 0x15c20;
            pcVar2 = (char *)(DAT_00016184 + 0x15c28);
            iVar11 = DAT_00016188 + 0x15c2c;
            while ((pcVar9 = (char *)FUN_00015918(local_b0), pcVar9 != (char *)0x0 &&
                   (*pcVar9 != '\n' && *pcVar9 != '['))) {
              iVar4 = strncmp(pcVar2,pcVar9,8);
              if (iVar4 == 0) {
                iVar4 = 0;
LAB_00015d28:
                _mpp_log(0,iVar11);
                iVar4 = *(int *)(iVar3 + iVar4 * 8);
                if (iVar4 == 2) {
                  sVar5 = strlen(pcVar9);
                  pcVar6 = (char *)0x0;
                  if (sVar5 != 0) {
                    if (*pcVar9 == ':') {
                      pcVar12 = (char *)0x1;
                    }
                    else {
                      pcVar6 = pcVar9;
                      do {
                        bVar13 = pcVar6 == pcVar9 + (sVar5 - 1);
                        pcVar6 = pcVar6 + 1;
                        pcVar12 = pcVar6 + (1 - (int)pcVar9);
                        if (bVar13) {
                          pcVar6 = (char *)0x0;
                          goto LAB_00015d94;
                        }
                      } while (*pcVar6 != ':');
                    }
                    pcVar6 = pcVar9 + (int)pcVar12;
                    if (pcVar6 != (char *)0x0) {
                      cVar1 = pcVar9[(int)pcVar12];
                      while (cVar1 == ' ') {
                        pcVar6 = pcVar6 + 1;
                        cVar1 = *pcVar6;
                      }
                      pcVar9 = (char *)strlen(pcVar6);
                      if ((pcVar6 + (int)pcVar9)[-1] == ' ') {
                        pcVar12 = pcVar6 + (int)(pcVar9 + -2);
                        do {
                          pcVar9 = pcVar12 + (1 - (int)pcVar6);
                          cVar1 = *pcVar12;
                          pcVar12 = pcVar12 + -1;
                        } while (cVar1 == ' ');
                      }
                      pcVar6[(int)pcVar9] = '\0';
                    }
                  }
LAB_00015d94:
                  iVar4 = strncmp((char *)(DAT_000161a0 + 0x15da8),pcVar6,8);
                  if (iVar4 == 0) {
                    iVar4 = 0;
LAB_0001605c:
                    _mpp_log(0,DAT_000161c0 + 0x16070);
                    uVar7 = *(undefined4 *)(DAT_000161c4 + 0x1607c + iVar4 * 8);
                  }
                  else {
                    iVar4 = strncmp((char *)(DAT_000161a4 + 0x15dc8),pcVar6,7);
                    if (iVar4 == 0) {
                      iVar4 = 1;
                      goto LAB_0001605c;
                    }
                    iVar4 = strncmp((char *)(DAT_000161a8 + 0x15de8),pcVar6,5);
                    if (iVar4 == 0) {
                      iVar4 = 2;
                      goto LAB_0001605c;
                    }
                    iVar4 = strncmp((char *)(DAT_000161ac + 0x15e08),pcVar6,4);
                    if (iVar4 == 0) {
                      iVar4 = 3;
                      goto LAB_0001605c;
                    }
                    iVar4 = strncmp((char *)(DAT_000161b0 + 0x15e28),pcVar6,3);
                    if (iVar4 == 0) {
                      iVar4 = 4;
                      goto LAB_0001605c;
                    }
                    iVar4 = strncmp((char *)(DAT_000161b4 + 0x15e48),pcVar6,4);
                    if (iVar4 == 0) {
                      iVar4 = 5;
                      goto LAB_0001605c;
                    }
                    uVar7 = 0xffffffff;
                  }
                  *param_2 = uVar7;
                }
                else if (iVar4 == 3) {
                  sVar5 = strlen(pcVar9);
                  pcVar6 = (char *)0x0;
                  if (sVar5 != 0) {
                    if (*pcVar9 == ':') {
                      pcVar12 = (char *)0x1;
                    }
                    else {
                      pcVar6 = pcVar9;
                      do {
                        bVar13 = pcVar6 == pcVar9 + (sVar5 - 1);
                        pcVar6 = pcVar6 + 1;
                        pcVar12 = pcVar6 + (1 - (int)pcVar9);
                        if (bVar13) {
                          pcVar6 = (char *)0x0;
                          goto LAB_00015ec0;
                        }
                      } while (*pcVar6 != ':');
                    }
                    pcVar6 = pcVar9 + (int)pcVar12;
                    if (pcVar6 != (char *)0x0) {
                      cVar1 = pcVar9[(int)pcVar12];
                      while (cVar1 == ' ') {
                        pcVar6 = pcVar6 + 1;
                        cVar1 = *pcVar6;
                      }
                      pcVar9 = (char *)strlen(pcVar6);
                      if ((pcVar6 + (int)pcVar9)[-1] == ' ') {
                        pcVar12 = pcVar6 + (int)(pcVar9 + -2);
                        do {
                          pcVar9 = pcVar12 + (1 - (int)pcVar6);
                          cVar1 = *pcVar12;
                          pcVar12 = pcVar12 + -1;
                        } while (cVar1 == ' ');
                      }
                      pcVar6[(int)pcVar9] = '\0';
                    }
                  }
LAB_00015ec0:
                  sscanf(pcVar6,(char *)(DAT_000161b8 + 0x15ed4),param_2 + 1);
                  _mpp_log(0,DAT_000161bc + 0x15eec,0,param_2[1]);
                }
              }
              else {
                iVar4 = strncmp((char *)(DAT_0001618c + 0x15c5c),pcVar9,7);
                if (iVar4 == 0) {
                  iVar4 = 1;
                  goto LAB_00015d28;
                }
                iVar4 = strncmp((char *)(DAT_00016190 + 0x15c7c),pcVar9,5);
                if (iVar4 == 0) {
                  iVar4 = 2;
                  goto LAB_00015d28;
                }
                iVar4 = strncmp((char *)(DAT_00016194 + 0x15c9c),pcVar9,4);
                if (iVar4 == 0) {
                  iVar4 = 3;
                  goto LAB_00015d28;
                }
                iVar4 = strncmp((char *)(DAT_00016198 + 0x15cbc),pcVar9,3);
                if (iVar4 == 0) {
                  iVar4 = 4;
                  goto LAB_00015d28;
                }
                iVar4 = strncmp((char *)(DAT_0001619c + 0x15cdc),pcVar9,4);
                if (iVar4 == 0) {
                  iVar4 = 5;
                  goto LAB_00015d28;
                }
              }
              local_2c = 0;
            }
          }
          else {
            if (iVar3 != 1) {
LAB_00015bb4:
              _mpp_err(0,DAT_00016174 + 0x15bc8);
              fclose(local_b0[0]);
              return 0xffffffff;
            }
            iVar3 = 0;
            puVar8 = param_2;
            do {
              pcVar2 = (char *)FUN_00015918(local_b0);
              if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\n' || *pcVar2 == '[')) {
                param_2[0x182] = iVar3;
                break;
              }
              iVar3 = iVar3 + 1;
              sscanf(pcVar2,__format,puVar8 + 2,puVar8 + 4,puVar8 + 3);
              _mpp_log(0,iVar10,0,puVar8[2],puVar8[4]);
              local_2c = 0;
              puVar8 = puVar8 + 3;
            } while (iVar3 != 0x80);
          }
        }
        goto LAB_00015ad8;
      }
      fclose(local_b0[0]);
      uVar7 = 0;
    }
  }
  return uVar7;
}



/* ===== mpi_enc_width_default_stride @ 000161d0 size=220 ===== */

uint mpi_enc_width_default_stride(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 0xfffff;
  if (uVar1 < 0xc) {
    if (7 < uVar1) {
LAB_00016224:
      return (param_1 + 7U & 0xfffffff8) << 1;
    }
    if (uVar1 == 4) {
      return param_1 + 0xfU & 0xfffffff0;
    }
    if (((4 < uVar1) || (uVar1 == 0)) || (uVar1 == 2)) {
      return param_1 + 7U & 0xfffffff8;
    }
  }
  else if (uVar1 < 0x10008) {
    if (0x10005 < uVar1) {
      return (param_1 + 7U & 0xfffffff8) * 3;
    }
    if (0xffff < uVar1) goto LAB_00016224;
  }
  else if (uVar1 < 0x1000e) {
    return (param_1 + 7U & 0xfffffff8) << 2;
  }
  _mpp_err(DAT_000162b4 + 0x16268,DAT_000162b0 + 0x16264,DAT_000162ac + 0x1625c,param_2);
  return 0;
}



/* ===== mpi_enc_test_cmd_get @ 000162b8 size=16 ===== */

void mpi_enc_test_cmd_get(void)

{
  mpp_osal_calloc((int)&DAT_000162c8 + DAT_000162c8,0x78);
  return;
}



/* ===== mpi_enc_test_cmd_update_by_args @ 000162d0 size=2224 ===== */

int mpi_enc_test_cmd_update_by_args(undefined4 *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  size_t sVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char *__string;
  int iVar12;
  bool bVar13;
  
  uVar1 = DAT_000166f0;
  bVar13 = param_1 != (undefined4 *)0x0;
  iVar11 = 0;
  if (bVar13) {
    iVar11 = param_2 + -1;
  }
  if ((!bVar13 || param_2 == 1) || iVar11 < 0 != (bVar13 && SBORROW4(param_2,1))) {
    return -1;
  }
  iVar9 = 1;
  iVar7 = DAT_000166f8 + 0x16300;
  iVar12 = DAT_000166fc + 0x16310;
  iVar10 = -1;
  iVar11 = 1;
LAB_00016328:
  do {
    iVar5 = iVar11 + 1;
    if (iVar9 == 0) {
LAB_000163ec:
      if (iVar5 < param_2) goto code_r0x000163f4;
      break;
    }
    pcVar2 = *(char **)(param_3 + iVar11 * 4);
    if ((*pcVar2 != '-') || (cVar6 = pcVar2[1], cVar6 == '\0')) goto LAB_00016320;
    if (cVar6 == '-') {
      cVar6 = pcVar2[2];
      if (cVar6 == '\0') {
        if (iVar5 < param_2) {
          iVar5 = iVar11 + 2;
          goto LAB_000163ec;
        }
        break;
      }
      pcVar2 = pcVar2 + 1;
    }
    __string = *(char **)(param_3 + iVar11 * 4 + 4);
    switch(cVar6) {
    case 'b':
      if ((__string == (char *)0x0) ||
         (iVar5 = sscanf(__string,(char *)(DAT_00016724 + 0x16864),param_1 + 0xc,param_1 + 0xe,
                         param_1 + 0xd,param_1 + 0xf), iVar5 == 0)) {
        iVar11 = DAT_00016728 + 0x16880;
        _mpp_err(iVar11,DAT_0001672c + 0x16884,0);
        _mpp_err(iVar11,DAT_00016730 + 0x1689c,0);
        return iVar10;
      }
      break;
    case 'c':
      if (__string == (char *)0x0) {
        _mpp_log(DAT_0001679c + 0x16c08,DAT_00016798 + 0x16c04,0);
        return iVar10;
      }
      iVar5 = atoi(__string);
      param_1[0x19] = iVar5;
      break;
    case 'd':
    default:
switchD_0001636c_default:
      _mpp_err(iVar12,iVar7,0);
      break;
    case 'e':
      goto switchD_0001636c_default;
    case 'f':
      if (__string == (char *)0x0) {
        uVar8 = param_1[5];
LAB_000168f4:
        _mpp_err(DAT_00016740 + 0x16910,DAT_0001673c + 0x1690c,0,uVar8);
        return iVar10;
      }
      pcVar2 = strchr(__string,0x78);
      if ((pcVar2 == (char *)0x0) && (pcVar2 = strchr(__string,0x58), pcVar2 == (char *)0x0)) {
        pcVar2 = strchr(__string,0x61);
        if ((((((pcVar2 == (char *)0x0) && (pcVar2 = strchr(__string,0x41), pcVar2 == (char *)0x0))
              && (pcVar2 = strchr(__string,0x62), pcVar2 == (char *)0x0)) &&
             (((pcVar2 = strchr(__string,0x42), pcVar2 == (char *)0x0 &&
               (pcVar2 = strchr(__string,99), pcVar2 == (char *)0x0)) &&
              ((pcVar2 = strchr(__string,0x43), pcVar2 == (char *)0x0 &&
               ((pcVar2 = strchr(__string,100), pcVar2 == (char *)0x0 &&
                (pcVar2 = strchr(__string,0x44), pcVar2 == (char *)0x0)))))))) &&
            (pcVar2 = strchr(__string,0x65), pcVar2 == (char *)0x0)) &&
           (((pcVar2 = strchr(__string,0x45), pcVar2 == (char *)0x0 &&
             (pcVar2 = strchr(__string,0x66), pcVar2 == (char *)0x0)) &&
            (pcVar2 = strchr(__string,0x46), pcVar2 == (char *)0x0)))) {
          iVar10 = atoi(__string);
          param_1[5] = iVar10;
        }
        else {
          sscanf(__string,(char *)(DAT_00016744 + 0x16950),param_1 + 5);
        }
      }
      else {
        sscanf(__string,(char *)(DAT_00016720 + 0x167e0),param_1 + 5);
      }
      uVar8 = param_1[5];
      if (((uVar8 & 0x1000000) == 0) && (iVar10 = iVar9, uVar8 - 0x12 < 0xffee || 0x1000f < uVar8))
      goto LAB_000168f4;
      goto LAB_0001652c;
    case 'g':
      if ((__string == (char *)0x0) ||
         (iVar5 = sscanf(__string,(char *)(DAT_00016714 + 0x166c8),param_1 + 0x16,param_1 + 0x17,
                         param_1 + 0x18), iVar5 == 0)) {
        _mpp_err(DAT_0001671c + 0x166e8,DAT_00016718 + 0x166e4,0);
        return iVar10;
      }
      break;
    case 'h':
      if (__string == (char *)0x0) {
        return iVar10;
      }
      if ((pcVar2[2] != '\0') &&
         (iVar5 = strncmp(pcVar2 + 1,(char *)(DAT_00016710 + 0x16688),4), iVar5 == 0)) {
        return iVar10;
      }
      iVar5 = atoi(__string);
      param_1[9] = iVar5;
      break;
    case 'i':
      if (__string == (char *)0x0) {
        _mpp_err(DAT_0001677c + 0x16b98,DAT_00016778 + 0x16b94,0);
        return iVar10;
      }
      sVar3 = strnlen(__string,0x100);
      if (sVar3 != 0) {
        pcVar2 = (char *)mpp_osal_calloc(DAT_0001670c + 0x16644,sVar3 + 1);
        *param_1 = pcVar2;
        strcpy(pcVar2,__string);
        name_to_frame_format(*param_1,param_1 + 5);
      }
      break;
    case 'j':
      goto switchD_0001636c_default;
    case 'k':
      goto switchD_0001636c_default;
    case 'l':
      if (__string == (char *)0x0) {
        _mpp_err(DAT_00016774 + 0x16b7c,DAT_00016770 + 0x16b78,0);
        return iVar10;
      }
      iVar5 = atoi(__string);
      param_1[7] = iVar5;
      break;
    case 'm':
      goto switchD_0001636c_default;
    case 'n':
      if (__string == (char *)0x0) {
        _mpp_err(DAT_0001676c + 0x16b60,DAT_00016768 + 0x16b5c,0);
        return iVar10;
      }
      iVar5 = atoi(__string);
      param_1[6] = iVar5;
      break;
    case 'o':
      if (__string == (char *)0x0) {
        _mpp_log(DAT_0001675c + 0x16b28,DAT_00016758 + 0x16b24,0);
        return iVar10;
      }
      sVar3 = strnlen(__string,0x100);
      if (sVar3 != 0) {
        pcVar2 = (char *)mpp_osal_calloc(DAT_00016708 + 0x165cc,sVar3 + 1);
        param_1[1] = pcVar2;
        strcpy(pcVar2,__string);
        name_to_coding_type(param_1[1],param_1 + 4);
      }
      break;
    case 'p':
      goto switchD_0001636c_default;
    case 'q':
      goto switchD_0001636c_default;
    case 'r':
      if (__string == (char *)0x0) {
        _mpp_err(DAT_00016784 + 0x16bb4,DAT_00016780 + 0x16bb0,0);
        return iVar10;
      }
      iVar5 = sscanf(__string,(char *)(DAT_00016704 + 0x16574),param_1 + 0x11,param_1 + 0x12,
                     param_1 + 0x10,param_1 + 0x14,param_1 + 0x15,param_1 + 0x13);
      switch(iVar5) {
      case 1:
        param_1[0x15] = 1;
        param_1[0x10] = 0;
        param_1[0x14] = param_1[0x11];
        *(undefined8 *)(param_1 + 0x12) = uVar1;
        break;
      case 2:
        param_1[0x10] = 0;
        param_1[0x14] = param_1[0x11];
        param_1[0x15] = param_1[0x12];
        param_1[0x13] = 0;
        break;
      case 3:
        param_1[0x15] = param_1[0x12];
        *(undefined8 *)(param_1 + 0x13) = *(undefined8 *)(param_1 + 0x10);
        break;
      case 4:
        param_1[0x15] = 1;
        param_1[0x13] = 0;
        break;
      case 5:
        param_1[0x13] = 0;
        break;
      case 6:
        break;
      default:
        _mpp_err(DAT_000167ac + 0x16c40,DAT_000167a8 + 0x16c3c,0);
        return iVar10;
      }
      break;
    case 's':
      goto switchD_0001636c_default;
    case 't':
      if (__string == (char *)0x0) {
LAB_00016954:
        _mpp_err(DAT_0001674c + 0x1696c,DAT_00016748 + 0x16968,0);
        return iVar10;
      }
      iVar10 = atoi(__string);
      param_1[4] = iVar10;
      iVar10 = mpp_check_support_format(1,iVar10);
      if (iVar10 != 0) goto LAB_00016954;
LAB_0001652c:
      iVar10 = 0;
      break;
    case 'u':
      if (__string == (char *)0x0) {
        _mpp_err(DAT_00016794 + 0x16bec,DAT_00016790 + 0x16be8,0);
        return iVar10;
      }
      iVar5 = atoi(__string);
      param_1[10] = iVar5;
      break;
    case 'v':
      if (__string == (char *)0x0) {
        _mpp_log(DAT_0001678c + 0x16bd0,DAT_00016788 + 0x16bcc,0);
        return iVar10;
      }
      iVar5 = atoi(__string);
      param_1[0xb] = iVar5;
      break;
    case 'w':
      if (__string == (char *)0x0) {
        _mpp_err(DAT_000167a4 + 0x16c24,DAT_000167a0 + 0x16c20,0);
        return iVar10;
      }
      iVar5 = atoi(__string);
      param_1[8] = iVar5;
      break;
    case 'x':
      if (__string == (char *)0x0) {
        _mpp_err(DAT_00016764 + 0x16b44,DAT_00016760 + 0x16b40,0);
        return iVar10;
      }
      sVar3 = strnlen(__string,0x100);
      if (sVar3 != 0) {
        pcVar2 = (char *)mpp_osal_calloc(DAT_00016700 + 0x16498,sVar3 + 1);
        param_1[2] = pcVar2;
        strncpy(pcVar2,__string,sVar3);
        uVar4 = iniparser_load(param_1[2]);
        param_1[3] = uVar4;
      }
    }
    iVar5 = iVar11 + 2;
LAB_00016320:
    iVar11 = iVar5;
  } while (iVar5 < param_2);
  goto LAB_00016404;
code_r0x000163f4:
  iVar11 = iVar5 + 1;
  iVar9 = 0;
  if (param_2 <= iVar11) {
LAB_00016404:
    if ((uint)param_1[4] < 2) {
      iVar11 = -1;
      _mpp_err(DAT_00016738 + 0x168e8,DAT_00016734 + 0x168e4,0);
    }
    else {
      iVar11 = 0;
    }
    iVar7 = param_1[10];
    iVar10 = param_1[8];
    if (iVar7 == 0) {
      iVar7 = mpi_enc_width_default_stride(iVar10,param_1[5]);
      iVar10 = param_1[8];
      param_1[10] = iVar7;
    }
    iVar12 = param_1[9];
    iVar9 = param_1[0xb];
    if (param_1[0xb] == 0) {
      param_1[0xb] = iVar12;
      iVar9 = iVar12;
    }
    if ((((0 < iVar10) && (0 < iVar12)) && (0 < iVar7)) && (0 < iVar9)) {
      return iVar11;
    }
    _mpp_err(DAT_00016754 + 0x16a18,DAT_00016750 + 0x16a0c,0,iVar10,iVar12,iVar7,iVar9);
    return -1;
  }
  goto LAB_00016328;
}



/* ===== mpi_enc_test_cmd_put @ 00016c44 size=156 ===== */

undefined4 mpi_enc_test_cmd_put(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    if (param_1[3] != 0) {
      iniparser_freedict();
      param_1[3] = 0;
    }
    if (*param_1 != 0) {
      mpp_osal_free(DAT_00016ce0 + 0x16c80);
    }
    *param_1 = 0;
    if (param_1[1] != 0) {
      mpp_osal_free(DAT_00016ce4 + 0x16ca0);
    }
    param_1[1] = 0;
    if (param_1[2] != 0) {
      mpp_osal_free(DAT_00016ce8 + 0x16cc0);
    }
    iVar1 = DAT_00016cec;
    param_1[2] = 0;
    mpp_osal_free(iVar1 + 0x16cd8,param_1);
  }
  return 0;
}



/* ===== mpi_enc_gen_osd_plt @ 00016cf0 size=60 ===== */

undefined4 mpi_enc_gen_osd_plt(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (param_1 != 0) {
    param_2 = param_2 & 7;
    puVar3 = (undefined4 *)(param_1 + -4);
    uVar1 = param_2 + 0x100;
    iVar4 = DAT_00016d2c + 0x16d10;
    do {
      uVar2 = param_2 & 7;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *(undefined4 *)(iVar4 + uVar2 * 4);
    } while (param_2 != uVar1);
  }
  return 0;
}



/* ===== mpi_enc_gen_osd_data @ 00016d30 size=832 ===== */

undefined4 mpi_enc_gen_osd_data(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int local_24 [2];
  
  uVar1 = param_3 + 0xfU >> 4;
  uVar2 = param_4 + 0xfU >> 4;
  __aeabi_uidivmod(param_5 * 3,uVar1);
  __aeabi_uidivmod(param_5 * 2,uVar2);
  local_24[0] = *param_1;
  if (local_24[0] == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = mpp_buffer_get_size_with_caller(local_24[0],DAT_00017070 + 0x16d98);
  }
  uVar13 = extraout_r1 + 3;
  uVar7 = extraout_r1_00 + 2;
  if (uVar1 <= uVar13) {
    uVar13 = uVar13 - uVar1;
  }
  if (uVar2 <= uVar7) {
    uVar7 = uVar7 - uVar2;
  }
  param_1[1] = 8;
  param_1[6] = 2;
  param_1[7] = 2;
  uVar8 = uVar13 + 3;
  param_1[0xc] = uVar7;
  uVar7 = uVar7 + 2;
  if (uVar1 <= uVar8) {
    uVar8 = uVar8 - uVar1;
  }
  param_1[0xb] = uVar13;
  if (uVar2 <= uVar7) {
    uVar7 = uVar7 - uVar2;
  }
  param_1[0xd] = 2;
  param_1[0xe] = 2;
  uVar13 = uVar8 + 3;
  param_1[0x13] = uVar7;
  uVar7 = uVar7 + 2;
  if (uVar1 <= uVar13) {
    uVar13 = uVar13 - uVar1;
  }
  param_1[0x12] = uVar8;
  if (uVar2 <= uVar7) {
    uVar7 = uVar7 - uVar2;
  }
  param_1[0x14] = 2;
  param_1[0x15] = 2;
  uVar8 = uVar13 + 3;
  param_1[0x1a] = uVar7;
  uVar7 = uVar7 + 2;
  if (uVar1 <= uVar8) {
    uVar8 = uVar8 - uVar1;
  }
  param_1[0x19] = uVar13;
  if (uVar2 <= uVar7) {
    uVar7 = uVar7 - uVar2;
  }
  param_1[0x1b] = 2;
  param_1[0x1c] = 2;
  uVar13 = uVar8 + 3;
  param_1[0x21] = uVar7;
  uVar7 = uVar7 + 2;
  if (uVar1 <= uVar13) {
    uVar13 = uVar13 - uVar1;
  }
  param_1[5] = extraout_r1_00;
  if (uVar2 <= uVar7) {
    uVar7 = uVar7 - uVar2;
  }
  param_1[3] = 1;
  param_1[2] = 1;
  param_1[0x20] = uVar8;
  param_1[8] = 0;
  param_1[4] = extraout_r1;
  piVar9 = param_1 + 2;
  param_1[10] = 1;
  param_1[9] = 1;
  param_1[0xf] = 0x400;
  param_1[0x11] = 1;
  param_1[0x10] = 1;
  param_1[0x16] = 0x800;
  param_1[0x18] = 1;
  param_1[0x17] = 1;
  param_1[0x1d] = 0xc00;
  param_1[0x1f] = 1;
  param_1[0x1e] = 1;
  param_1[0x22] = 2;
  param_1[0x23] = 2;
  uVar8 = uVar13 + 3;
  param_1[0x28] = uVar7;
  uVar7 = uVar7 + 2;
  if (uVar1 <= uVar8) {
    uVar8 = uVar8 - uVar1;
  }
  param_1[0x27] = uVar13;
  if (uVar2 <= uVar7) {
    uVar7 = uVar7 - uVar2;
  }
  param_1[0x29] = 2;
  param_1[0x2a] = 2;
  uVar13 = uVar8 + 3;
  param_1[0x2f] = uVar7;
  uVar7 = uVar7 + 2;
  if (uVar1 <= uVar13) {
    uVar13 = uVar13 - uVar1;
  }
  param_1[0x24] = 0x1000;
  if (uVar2 <= uVar7) {
    uVar7 = uVar7 - uVar2;
  }
  param_1[0x26] = 1;
  param_1[0x25] = 1;
  param_1[0x2e] = uVar8;
  param_1[0x2b] = 0x1400;
  param_1[0x30] = 2;
  param_1[0x2d] = 1;
  param_1[0x2c] = 1;
  param_1[0x31] = 2;
  param_1[0x32] = 0x1800;
  param_1[0x34] = 1;
  param_1[0x33] = 1;
  param_1[0x35] = uVar13;
  param_1[0x36] = uVar7;
  param_1[0x37] = 2;
  param_1[0x38] = 2;
  param_1[0x39] = 0x1c00;
  if (uVar6 < 0x2000) {
    if (local_24[0] != 0) {
      mpp_buffer_put_with_caller(local_24[0],DAT_00017074 + 0x16fb0);
    }
    iVar12 = DAT_00017078 + 0x16fc8;
    iVar10 = DAT_0001707c + 0x16fd0;
    mpp_buffer_get_with_tag(param_2,local_24,0x2000,iVar12,iVar10);
    if (local_24[0] != 0) goto LAB_00016fe4;
    _mpp_err(iVar12,DAT_00017084 + 0x17054,iVar10,0x2000);
  }
  if (local_24[0] == 0) {
    *param_1 = 0;
    return 0;
  }
LAB_00016fe4:
  iVar12 = mpp_buffer_get_ptr_with_caller(local_24[0],DAT_00017080 + 0x16ff4);
  iVar10 = 0;
  do {
    piVar3 = piVar9 + 4;
    piVar4 = piVar9 + 5;
    iVar11 = iVar10 + 1;
    piVar5 = piVar9 + 6;
    piVar9 = piVar9 + 7;
    memset((void *)(iVar12 + *piVar5),iVar10,*piVar4 * *piVar3 * 0x100);
    iVar10 = iVar11;
  } while (iVar11 != 8);
  *param_1 = local_24[0];
  return 0;
}



/* ===== mpi_enc_gen_osd_data3 @ 00017088 size=612 ===== */

undefined4 mpi_enc_gen_osd_data3(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *__ptr;
  FILE *__stream;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_4c [2];
  
  local_4c[0] = *param_2;
  iVar11 = DAT_00017310 + 0x170b4;
  if (local_4c[0] == 0) {
    iVar10 = DAT_0001733c + 0x17274;
    iVar12 = DAT_00017340 + 0x1727c;
    mpp_buffer_get_with_tag(0,local_4c,0x10000,iVar10,iVar12);
    if ((local_4c[0] == 0) &&
       (_mpp_err(iVar10,DAT_00017348 + 0x172d0,0,DAT_00017344 + 0x172c4,iVar12,0x1ef),
       (**(uint **)(iVar11 + DAT_00017330) & 0x10000000) != 0)) goto LAB_00017238;
    *param_2 = local_4c[0];
    *(undefined4 *)(param_1 + 4) = 8;
    if (local_4c[0] == 0) goto LAB_00017118;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 8;
  }
  iVar10 = DAT_00017314 + 0x170d0;
  __ptr = (void *)mpp_buffer_get_ptr_with_caller(local_4c[0],iVar10);
  if ((__ptr != (void *)0x0) ||
     (_mpp_err(DAT_0001732c + 0x17224,DAT_00017328 + 0x17220,0,DAT_00017324 + 0x17214,iVar10,0x1fa),
     (**(uint **)(iVar11 + DAT_00017330) & 0x10000000) == 0)) {
    __stream = fopen64((char *)(DAT_0001731c + 0x170f0),(char *)(DAT_00017318 + 0x170ec));
    if (__stream == (FILE *)0x0) {
      _mpp_log(DAT_00017338 + 0x17254,DAT_00017334 + 0x17250,0);
    }
    else {
      fread(__ptr,1,0x10000,__stream);
      fclose(__stream);
    }
LAB_00017118:
    uVar4 = DAT_00017308;
    uVar3 = DAT_00017300;
    uVar2 = DAT_000172f8;
    uVar1 = DAT_000172f0;
    uVar8 = param_5 << 7;
    uVar9 = uVar8;
    if (param_3 - 0x80U < uVar8) {
      uVar9 = 0;
    }
    puVar6 = (undefined8 *)(param_1 + 0xc);
    if (param_4 - 0x80U < uVar8) {
      uVar8 = 0;
    }
    do {
      *(uint *)(puVar6 + 2) = uVar9;
      iVar11 = uVar9 + 0x7f;
      uVar9 = uVar9 + 0x80;
      *(uint *)((int)puVar6 + 0x14) = uVar8;
      *(int *)(puVar6 + 3) = iVar11;
      *(undefined4 *)((int)puVar6 + -4) = 1;
      *(uint *)((int)puVar6 + 0x1c) = uVar8 + 0x7f;
      *puVar6 = uVar1;
      puVar6[1] = uVar2;
      *(undefined4 *)(puVar6 + 4) = 0x200;
      uVar8 = uVar8 + 0x80;
      puVar6[10] = uVar3;
      puVar6[0xb] = uVar4;
      if (param_3 - 0x80U < uVar9) {
        uVar9 = 0;
      }
      *(undefined4 *)(puVar6 + 0xe) = 10;
      iVar11 = DAT_00017320;
      *(undefined4 *)(puVar6 + 0xc) = 1;
      *(undefined4 *)((int)puVar6 + 100) = 0;
      *(undefined4 *)((int)puVar6 + 0x6c) = 0x33;
      if (param_4 - 0x80U < uVar8) {
        uVar8 = 0;
      }
      *(undefined4 *)(puVar6 + 0xd) = 0xfffffff6;
      puVar7 = (undefined8 *)((int)puVar6 + 0x8c);
      uVar5 = mpp_buffer_get_fd_with_caller(local_4c[0],iVar11 + 0x171cc);
      *(undefined4 *)(puVar6 + 0xf) = uVar5;
      puVar6 = puVar7;
    } while (puVar7 != (undefined8 *)(param_1 + 0x46c));
    return 0;
  }
LAB_00017238:
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== mpi_enc_test_cmd_show_opt @ 0001734c size=188 ===== */

undefined4 mpi_enc_test_cmd_show_opt(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00017408 + 0x17368;
  _mpp_log(iVar1,DAT_0001740c + 0x1736c,0);
  _mpp_log(iVar1,DAT_00017410 + 0x17388,0,*param_1);
  _mpp_log(iVar1,DAT_00017414 + 0x173a0,0,param_1[1]);
  _mpp_log(iVar1,DAT_00017418 + 0x173b8,0,param_1[8]);
  _mpp_log(iVar1,DAT_0001741c + 0x173d0,0,param_1[9]);
  _mpp_log(iVar1,DAT_00017420 + 0x173e8,0,param_1[5]);
  _mpp_log(iVar1,DAT_00017424 + 0x17400,0,param_1[4]);
  return 0;
}



/* ===== mpi_enc_test_help @ 00017428 size=68 ===== */

void mpi_enc_test_help(void)

{
  _mpp_log(DAT_00017464 + 0x17444,DAT_00017460 + 0x17440,0);
  _show_options(0xc,DAT_00017468 + 0x17454);
  mpp_show_support_format();
  (*(code *)PTR_mpp_show_color_format_00034030)();
  return;
}



/* ===== FUN_00017964 @ 00017964 size=284 ===== */

void FUN_00017964(int *param_1,int *param_2,int *param_3,int param_4,int param_5,uint param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  if (param_6 == 0) {
    *param_1 = 0xff;
    *param_2 = 0;
    *param_3 = 0;
    return;
  }
  if (param_6 == 1) {
    *param_1 = 0;
    *param_2 = 0xff;
    *param_3 = 0;
    return;
  }
  if (param_6 == 2) {
    *param_1 = 0;
    *param_2 = 0;
    *param_3 = 0xff;
    return;
  }
  iVar2 = (int)(char)((char)param_6 * '\x02' + (char)(param_5 / 2));
  iVar3 = (param_4 / 2 + 0x40 + (param_6 & 0xff) * 5 & 0xff) - 0x80;
  uVar4 = param_4 + param_5 + (param_6 & 0xff) * 3 & 0xff;
  iVar1 = uVar4 + (iVar3 * 0x168 >> 8);
  bVar5 = iVar1 < 0;
  if (bVar5) {
    iVar1 = 0;
  }
  iVar3 = uVar4 - (iVar2 * 0x58 + iVar3 * 0xb8 >> 8);
  iVar2 = uVar4 + (iVar2 * 0x1c7 >> 8);
  if ((!bVar5) && (0xfe < iVar1)) {
    iVar1 = 0xff;
  }
  *param_1 = iVar1;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0xfe < iVar3) {
    iVar3 = 0xff;
  }
  *param_2 = iVar3;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0xfe < iVar2) {
    iVar2 = 0xff;
  }
  *param_3 = iVar2;
  return;
}



/* ===== _show_options @ 00017a80 size=108 ===== */

void _show_options(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (0 < param_1) {
    piVar1 = param_2 + param_1 * 3;
    iVar3 = DAT_00017aec + 0x17aa8;
    iVar2 = DAT_00017af0 + 0x17ab0;
    do {
      if (*param_2 != 0) {
        _mpp_log(iVar2,iVar3,0,*param_2,param_2[1],param_2[2]);
      }
      param_2 = param_2 + 3;
    } while (param_2 != piVar1);
  }
  return;
}



/* ===== dump_mpp_frame_to_file @ 00017af4 size=3396 ===== */

void dump_mpp_frame_to_file(int param_1,FILE *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  void *pvVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  int *piVar21;
  int *piVar22;
  int *piVar23;
  undefined8 *puVar24;
  bool bVar25;
  undefined1 *puVar26;
  longlong lVar28;
  undefined8 in_d16;
  undefined8 in_d17;
  undefined8 in_d18;
  undefined8 in_d19;
  int local_f0;
  int local_ec;
  uint local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  undefined8 *local_7c;
  undefined8 *local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  FILE *local_30;
  FILE *local_2c;
  undefined8 *puVar27;
  
  if (param_1 == 0 || param_2 == (FILE *)0x0) {
    return;
  }
  piVar21 = &local_f0;
  piVar22 = &local_f0;
  uVar1 = mpp_frame_get_width();
  uVar2 = mpp_frame_get_height(param_1);
  uVar3 = mpp_frame_get_hor_stride(param_1);
  iVar4 = mpp_frame_get_ver_stride(param_1);
  uVar5 = mpp_frame_get_fmt(param_1);
  iVar6 = mpp_frame_get_buffer(param_1);
  if (iVar6 == 0) {
    return;
  }
  pvVar7 = (void *)mpp_buffer_get_ptr_with_caller(iVar6,DAT_00018838 + 0x17b64);
  if ((((uVar5 & 0xf0000) == 0x10000) && ((uVar5 & 0xfffff) < 0x10010)) &&
     ((uVar5 & 0x1000000) != 0)) {
    uVar5 = uVar5 & 0xfffff;
  }
  if (uVar5 == 0xf) {
    puVar14 = (undefined8 *)(iVar4 * uVar3 + (int)pvVar7);
    local_44 = uVar2 * uVar1;
    local_78 = (undefined8 *)mpp_osal_malloc(DAT_00018854 + 0x17e1c,uVar3 * uVar2 * 2);
    puVar16 = (undefined8 *)((int)local_78 + uVar2 * uVar1);
    piVar23 = &local_f0;
    if (uVar2 != 0) {
      uVar5 = 0;
      do {
        uVar10 = uVar5;
        fwrite(pvVar7,1,uVar1,param_2);
        uVar5 = uVar10 + 1;
        pvVar7 = (void *)((int)pvVar7 + uVar3);
      } while (uVar2 != uVar5);
      local_f0 = uVar3 << 1;
      piVar23 = &local_f0;
      if (uVar1 != 0) {
        uVar3 = uVar1 & 0xfffffff0;
        uVar2 = uVar3 + 1;
        local_dc = uVar3 * 2;
        local_d0 = uVar3 + 2;
        local_c4 = uVar3 + 3;
        local_e0 = local_dc + 1;
        local_d8 = local_dc + 2;
        local_d4 = local_dc + 3;
        local_cc = local_dc + 4;
        local_c8 = local_dc + 5;
        local_c0 = local_dc + 6;
        local_bc = local_dc + 7;
        local_b4 = local_dc + 8;
        local_b0 = local_dc + 9;
        local_a8 = local_dc + 10;
        local_a4 = local_dc + 0xb;
        local_9c = local_dc + 0xc;
        local_98 = local_dc + 0xd;
        local_90 = local_dc + 0xe;
        local_8c = local_dc + 0xf;
        local_84 = local_dc + 0x10;
        local_80 = local_dc + 0x11;
        local_74 = local_dc + 0x12;
        local_70 = local_dc + 0x13;
        local_68 = local_dc + 0x14;
        local_64 = local_dc + 0x15;
        local_5c = local_dc + 0x16;
        local_58 = local_dc + 0x17;
        local_50 = local_dc + 0x18;
        local_4c = local_dc + 0x19;
        local_40 = local_dc + 0x1a;
        local_3c = local_dc + 0x1b;
        local_34 = local_dc + 0x1c;
        local_30 = (FILE *)(local_dc + 0x1d);
        local_b8 = uVar3 + 4;
        local_ac = uVar3 + 5;
        puVar24 = (undefined8 *)((int)puVar14 + uVar1 * 2);
        local_e4 = (uVar1 >> 4) << 5;
        iVar4 = 0;
        local_a0 = uVar3 + 6;
        local_94 = uVar3 + 7;
        local_88 = uVar3 + 8;
        local_7c = (undefined8 *)(uVar3 + 9);
        local_6c = uVar3 + 10;
        local_60 = uVar3 + 0xb;
        local_54 = uVar3 + 0xc;
        local_48 = uVar3 + 0xd;
        local_38 = uVar3 + 0xe;
        local_ec = uVar1 - 1;
        local_e8 = uVar10;
        local_2c = param_2;
        puVar9 = local_78;
        do {
          puVar19 = (undefined8 *)(uVar1 + (int)puVar9);
          puVar20 = (undefined8 *)(uVar1 + (int)puVar16);
          if ((*(uint *)((int)piVar21 + 4) < 0xf ||
              (puVar9 < puVar24 && puVar14 < puVar19 || puVar16 < puVar24 && puVar14 < puVar20)) ||
              puVar16 < puVar9 + 2 && puVar9 < puVar16 + 2) {
            puVar13 = (undefined1 *)((int)puVar9 + -1);
            puVar18 = (undefined1 *)((int)puVar16 + -1);
            puVar11 = puVar14;
            do {
              puVar12 = (undefined8 *)((int)puVar11 + 2);
              puVar13 = puVar13 + 1;
              *puVar13 = *(undefined1 *)puVar11;
              puVar18 = puVar18 + 1;
              *puVar18 = *(undefined1 *)((int)puVar11 + 1);
              puVar11 = puVar12;
              puVar9 = puVar19;
              puVar16 = puVar20;
            } while (puVar12 != puVar24);
          }
          else {
            puVar15 = (undefined8 *)(*(int *)((int)piVar21 + 0xc) + (int)puVar14);
            puVar11 = puVar9;
            puVar12 = puVar14;
            puVar17 = puVar16;
            do {
              puVar13 = (undefined1 *)0x380;
              puVar18 = (undefined1 *)0x390;
              lVar28 = 8;
              puVar27 = puVar14;
              while( true ) {
                *puVar13 = *(undefined1 *)puVar27;
                puVar26 = (undefined1 *)((int)puVar27 + 1);
                *puVar18 = *puVar26;
                puVar27 = (undefined8 *)(puVar26 + 1);
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar13 = puVar13 + 1;
                puVar18 = puVar18 + 1;
              }
              puVar13 = (undefined1 *)0x388;
              puVar18 = (undefined1 *)0x398;
              lVar28 = 8;
              while( true ) {
                *puVar13 = *(undefined1 *)puVar27;
                puVar26 = (undefined1 *)((int)puVar27 + 1);
                *puVar18 = *puVar26;
                puVar27 = (undefined8 *)(puVar26 + 1);
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar13 = puVar13 + 1;
                puVar18 = puVar18 + 1;
              }
              puVar14 = puVar14 + 4;
              *puVar9 = in_d16;
              puVar9[1] = in_d17;
              puVar9 = puVar9 + 2;
              *puVar16 = in_d18;
              puVar16[1] = in_d19;
              puVar16 = puVar16 + 2;
            } while (puVar14 != puVar15);
            puVar14 = puVar12;
            puVar9 = puVar19;
            puVar16 = puVar20;
            if (uVar1 != uVar3) {
              *(undefined1 *)((int)puVar11 + uVar3) =
                   *(undefined1 *)((int)puVar12 + *(int *)((int)piVar21 + 0x14));
              *(undefined1 *)((int)puVar17 + uVar3) =
                   *(undefined1 *)((int)puVar12 + *(int *)((int)piVar21 + 0x10));
              if (uVar2 < uVar1) {
                uVar5 = *(uint *)((int)piVar21 + 0x20);
                *(undefined1 *)((int)puVar11 + uVar2) =
                     *(undefined1 *)((int)puVar12 + *(int *)((int)piVar21 + 0x18));
                *(undefined1 *)((int)puVar17 + uVar2) =
                     *(undefined1 *)((int)puVar12 + *(int *)((int)piVar21 + 0x1c));
                if (uVar5 < uVar1) {
                  uVar10 = *(uint *)((int)piVar21 + 0x2c);
                  *(undefined1 *)((int)puVar11 + uVar5) =
                       *(undefined1 *)((int)puVar12 + *(int *)((int)piVar21 + 0x24));
                  *(undefined1 *)((int)puVar17 + uVar5) =
                       *(undefined1 *)((int)puVar12 + *(int *)((int)piVar21 + 0x28));
                  if (uVar10 < uVar1) {
                    uVar5 = *(uint *)((int)piVar21 + 0x38);
                    *(undefined1 *)((int)puVar11 + uVar10) =
                         *(undefined1 *)((int)puVar12 + *(int *)((int)piVar21 + 0x30));
                    *(undefined1 *)((int)puVar17 + uVar10) =
                         *(undefined1 *)((int)puVar12 + *(int *)((int)piVar21 + 0x34));
                    if (uVar5 < uVar1) {
                      uVar10 = *(uint *)((int)piVar21 + 0x44);
                      *(undefined1 *)((int)puVar11 + uVar5) =
                           *(undefined1 *)((int)puVar12 + *(int *)((int)piVar21 + 0x3c));
                      *(undefined1 *)((int)puVar17 + uVar5) =
                           *(undefined1 *)((int)puVar12 + *(int *)((int)piVar21 + 0x40));
                      if (uVar10 < uVar1) {
                        uVar5 = *(uint *)((int)piVar21 + 0x50);
                        *(undefined1 *)((int)puVar11 + uVar10) =
                             *(undefined1 *)((int)puVar12 + *(int *)((int)piVar21 + 0x48));
                        *(undefined1 *)((int)puVar17 + uVar10) =
                             *(undefined1 *)((int)puVar12 + *(int *)((int)piVar21 + 0x4c));
                        if (uVar5 < uVar1) {
                          uVar10 = *(uint *)((int)piVar21 + 0x5c);
                          *(undefined1 *)((int)puVar11 + uVar5) =
                               *(undefined1 *)((int)puVar12 + *(int *)((int)piVar21 + 0x54));
                          *(undefined1 *)((int)puVar17 + uVar5) =
                               *(undefined1 *)((int)puVar12 + *(int *)((int)piVar21 + 0x58));
                          if (uVar10 < uVar1) {
                            uVar5 = *(uint *)((int)piVar21 + 0x68);
                            *(undefined1 *)((int)puVar11 + uVar10) =
                                 *(undefined1 *)((int)puVar12 + *(int *)((int)piVar21 + 0x60));
                            *(undefined1 *)((int)puVar17 + uVar10) =
                                 *(undefined1 *)((int)puVar12 + *(int *)((int)piVar21 + 100));
                            if (uVar5 < uVar1) {
                              uVar10 = *(uint *)((int)piVar21 + 0x74);
                              *(undefined1 *)((int)puVar11 + uVar5) =
                                   *(undefined1 *)((int)puVar12 + *(int *)((int)piVar21 + 0x6c));
                              *(undefined1 *)((int)puVar17 + uVar5) =
                                   *(undefined1 *)((int)puVar12 + *(int *)((int)piVar21 + 0x70));
                              if (uVar10 < uVar1) {
                                uVar5 = *(uint *)((int)piVar21 + 0x84);
                                *(undefined1 *)((int)puVar11 + uVar10) =
                                     *(undefined1 *)((int)puVar12 + *(int *)((int)piVar21 + 0x7c));
                                *(undefined1 *)((int)puVar17 + uVar10) =
                                     *(undefined1 *)((int)puVar12 + *(int *)((int)piVar21 + 0x80));
                                if (uVar5 < uVar1) {
                                  uVar10 = *(uint *)((int)piVar21 + 0x90);
                                  *(undefined1 *)((int)puVar11 + uVar5) =
                                       *(undefined1 *)((int)puVar12 + *(int *)((int)piVar21 + 0x88))
                                  ;
                                  *(undefined1 *)((int)puVar17 + uVar5) =
                                       *(undefined1 *)((int)puVar12 + *(int *)((int)piVar21 + 0x8c))
                                  ;
                                  if (uVar10 < uVar1) {
                                    uVar5 = *(uint *)((int)piVar21 + 0x9c);
                                    *(undefined1 *)((int)puVar11 + uVar10) =
                                         *(undefined1 *)
                                          ((int)puVar12 + *(int *)((int)piVar21 + 0x94));
                                    *(undefined1 *)((int)puVar17 + uVar10) =
                                         *(undefined1 *)
                                          ((int)puVar12 + *(int *)((int)piVar21 + 0x98));
                                    if (uVar5 < uVar1) {
                                      uVar10 = *(uint *)((int)piVar21 + 0xa8);
                                      *(undefined1 *)((int)puVar11 + uVar5) =
                                           *(undefined1 *)
                                            ((int)puVar12 + *(int *)((int)piVar21 + 0xa0));
                                      *(undefined1 *)((int)puVar17 + uVar5) =
                                           *(undefined1 *)
                                            ((int)puVar12 + *(int *)((int)piVar21 + 0xa4));
                                      if (uVar10 < uVar1) {
                                        uVar5 = *(uint *)((int)piVar21 + 0xb8);
                                        *(undefined1 *)((int)puVar11 + uVar10) =
                                             *(undefined1 *)
                                              ((int)puVar12 + *(int *)((int)piVar21 + 0xb0));
                                        *(undefined1 *)((int)puVar17 + uVar10) =
                                             *(undefined1 *)
                                              ((int)puVar12 + *(int *)((int)piVar21 + 0xb4));
                                        if (uVar5 < uVar1) {
                                          *(undefined1 *)((int)puVar11 + uVar5) =
                                               *(undefined1 *)
                                                ((int)puVar12 + *(int *)((int)piVar21 + 0xbc));
                                          *(undefined1 *)((int)puVar17 + uVar5) =
                                               *(undefined1 *)
                                                ((int)puVar12 + *(int *)((int)piVar21 + 0xc0));
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
          bVar25 = piVar21[2] != iVar4;
          iVar4 = iVar4 + 1;
          puVar14 = (undefined8 *)((int)puVar14 + *piVar21);
          puVar24 = (undefined8 *)((int)puVar24 + *piVar21);
        } while (bVar25);
        param_2 = (FILE *)piVar21[0x31];
        piVar23 = piVar21;
      }
    }
    pvVar8 = *(void **)((int)piVar23 + 0x78);
    fwrite(pvVar8,1,*(int *)((int)piVar23 + 0xac) << 1,param_2);
    iVar4 = DAT_00018858 + 0x182ec;
  }
  else if (uVar5 < 0x10) {
    if (uVar5 != 2) {
      if (uVar5 < 3) {
        if (uVar5 != 0) goto LAB_00018814;
        if (uVar2 != 0) {
          uVar5 = 0;
          pvVar8 = pvVar7;
          do {
            uVar5 = uVar5 + 1;
            fwrite(pvVar8,1,uVar1,param_2);
            pvVar8 = (void *)((int)pvVar8 + uVar3);
          } while (uVar2 != uVar5);
          uVar5 = 0;
          pvVar7 = (void *)(iVar4 * uVar3 + (int)pvVar7);
          if (uVar2 >> 1 != 0) {
            do {
              uVar5 = uVar5 + 1;
              fwrite(pvVar7,1,uVar1,param_2);
              pvVar7 = (void *)((int)pvVar7 + uVar3);
            } while (uVar5 != uVar2 >> 1);
          }
        }
      }
      else {
        if (uVar5 != 4) {
          if (uVar5 != 0xc) goto LAB_00018814;
          pvVar8 = (void *)mpp_osal_malloc(DAT_0001883c + 0x17bac,uVar3 * uVar2);
          if (uVar2 != 0) {
            uVar5 = 0;
            do {
              uVar5 = uVar5 + 1;
              fwrite(pvVar7,1,uVar1,param_2);
              pvVar7 = (void *)((int)pvVar7 + uVar3);
            } while (uVar2 != uVar5);
          }
          iVar4 = DAT_00018840 + 0x17bf0;
          goto LAB_00017ce0;
        }
        pvVar8 = (void *)(iVar4 * uVar3 + (int)pvVar7);
        if (uVar2 != 0) {
          uVar5 = 0;
          do {
            uVar5 = uVar5 + 1;
            fwrite(pvVar7,1,uVar1,param_2);
            pvVar7 = (void *)((int)pvVar7 + uVar3);
          } while (uVar2 != uVar5);
          uVar2 = uVar2 >> 1;
          if (uVar2 != 0) {
            uVar3 = uVar3 >> 1;
            uVar5 = 0;
            pvVar7 = pvVar8;
            do {
              uVar5 = uVar5 + 1;
              fwrite(pvVar7,1,uVar1 >> 1,param_2);
              pvVar7 = (void *)((int)pvVar7 + uVar3);
            } while (uVar5 != uVar2);
            uVar5 = 0;
            pvVar7 = (void *)(uVar2 * uVar3 + (int)pvVar8);
            do {
              uVar5 = uVar5 + 1;
              fwrite(pvVar7,1,uVar1 >> 1,param_2);
              pvVar7 = (void *)((int)pvVar7 + uVar3);
            } while (uVar5 != uVar2);
          }
        }
      }
      return;
    }
    puVar14 = (undefined8 *)(iVar4 * uVar3 + (int)pvVar7);
    local_48 = uVar2 * uVar1;
    local_7c = (undefined8 *)mpp_osal_malloc(DAT_0001885c + 0x1832c,uVar3 * uVar2 * 2);
    puVar16 = (undefined8 *)((int)local_7c + (uVar2 * uVar1 >> 1));
    piVar23 = &local_f0;
    if (uVar2 != 0) {
      uVar5 = 0;
      do {
        uVar10 = uVar5;
        fwrite(pvVar7,1,uVar1,param_2);
        uVar5 = uVar10 + 1;
        pvVar7 = (void *)((int)pvVar7 + uVar3);
      } while (uVar2 != uVar5);
      uVar2 = uVar1 >> 1;
      piVar23 = &local_f0;
      if (uVar2 != 0) {
        puVar24 = (undefined8 *)((int)puVar14 + uVar2 * 2);
        iVar4 = 0;
        local_f0 = (uVar1 >> 5) * 0x20;
        uVar5 = (uVar1 >> 5) * 0x10;
        local_e4 = local_f0 + 1;
        local_e0 = uVar5 + 1;
        local_dc = local_f0 + 2;
        local_d8 = local_f0 + 3;
        local_d4 = uVar5 + 2;
        local_d0 = local_f0 + 4;
        local_cc = local_f0 + 5;
        local_c8 = uVar5 + 3;
        local_c4 = local_f0 + 6;
        local_c0 = local_f0 + 7;
        local_bc = uVar5 + 4;
        local_b8 = local_f0 + 8;
        local_b4 = local_f0 + 9;
        local_b0 = uVar5 + 5;
        local_ac = local_f0 + 10;
        local_a8 = local_f0 + 0xb;
        local_a4 = uVar5 + 6;
        local_a0 = local_f0 + 0xc;
        local_9c = local_f0 + 0xd;
        local_98 = uVar5 + 7;
        local_94 = local_f0 + 0xe;
        local_90 = local_f0 + 0xf;
        local_8c = uVar5 + 8;
        local_88 = local_f0 + 0x10;
        local_84 = local_f0 + 0x11;
        local_80 = uVar5 + 9;
        local_78 = (undefined8 *)(local_f0 + 0x12);
        local_74 = local_f0 + 0x13;
        local_70 = uVar5 + 10;
        local_6c = local_f0 + 0x14;
        local_68 = local_f0 + 0x15;
        local_64 = uVar5 + 0xb;
        local_60 = local_f0 + 0x16;
        local_30 = param_2;
        local_5c = local_f0 + 0x17;
        local_58 = uVar5 + 0xc;
        local_54 = local_f0 + 0x18;
        local_50 = local_f0 + 0x19;
        local_4c = uVar5 + 0xd;
        local_44 = local_f0 + 0x1a;
        local_40 = local_f0 + 0x1b;
        local_3c = uVar5 + 0xe;
        local_38 = local_f0 + 0x1c;
        local_34 = local_f0 + 0x1d;
        local_ec = uVar2 - 1;
        local_e8 = uVar10;
        puVar9 = local_7c;
        do {
          puVar19 = (undefined8 *)(uVar2 + (int)puVar9);
          puVar20 = (undefined8 *)(uVar2 + (int)puVar16);
          if (((uint)piVar22[1] < 0xf ||
              (puVar9 < puVar24 && puVar14 < puVar19 || puVar16 < puVar24 && puVar14 < puVar20)) ||
              puVar9 < puVar16 + 2 && puVar16 < puVar9 + 2) {
            puVar13 = (undefined1 *)((int)puVar9 + -1);
            puVar18 = (undefined1 *)((int)puVar16 + -1);
            puVar11 = puVar14;
            do {
              puVar12 = (undefined8 *)((int)puVar11 + 2);
              puVar13 = puVar13 + 1;
              *puVar13 = *(undefined1 *)puVar11;
              puVar18 = puVar18 + 1;
              *puVar18 = *(undefined1 *)((int)puVar11 + 1);
              puVar11 = puVar12;
              puVar9 = puVar19;
              puVar16 = puVar20;
            } while (puVar12 != puVar24);
          }
          else {
            puVar15 = (undefined8 *)(*piVar22 + (int)puVar14);
            puVar11 = puVar9;
            puVar12 = puVar14;
            puVar17 = puVar16;
            do {
              puVar13 = (undefined1 *)0x380;
              puVar18 = (undefined1 *)0x390;
              lVar28 = 8;
              puVar27 = puVar14;
              while( true ) {
                *puVar13 = *(undefined1 *)puVar27;
                puVar26 = (undefined1 *)((int)puVar27 + 1);
                *puVar18 = *puVar26;
                puVar27 = (undefined8 *)(puVar26 + 1);
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar13 = puVar13 + 1;
                puVar18 = puVar18 + 1;
              }
              puVar13 = (undefined1 *)0x388;
              puVar18 = (undefined1 *)0x398;
              lVar28 = 8;
              while( true ) {
                *puVar13 = *(undefined1 *)puVar27;
                puVar26 = (undefined1 *)((int)puVar27 + 1);
                *puVar18 = *puVar26;
                puVar27 = (undefined8 *)(puVar26 + 1);
                lVar28 = lVar28 + -1;
                if (lVar28 == 0) break;
                puVar13 = puVar13 + 1;
                puVar18 = puVar18 + 1;
              }
              puVar14 = puVar14 + 4;
              *puVar9 = in_d16;
              puVar9[1] = in_d17;
              puVar9 = puVar9 + 2;
              *puVar16 = in_d18;
              puVar16[1] = in_d19;
              puVar16 = puVar16 + 2;
            } while (puVar14 != puVar15);
            puVar14 = puVar12;
            puVar9 = puVar19;
            puVar16 = puVar20;
            if (uVar5 != uVar2) {
              uVar1 = piVar22[4];
              *(undefined1 *)((int)puVar11 + uVar5) = *(undefined1 *)((int)puVar12 + *piVar22);
              *(undefined1 *)((int)puVar17 + uVar5) = *(undefined1 *)((int)puVar12 + piVar22[3]);
              if (uVar1 < uVar2) {
                uVar10 = piVar22[7];
                *(undefined1 *)((int)puVar11 + uVar1) = *(undefined1 *)((int)puVar12 + piVar22[5]);
                *(undefined1 *)((int)puVar17 + uVar1) = *(undefined1 *)((int)puVar12 + piVar22[6]);
                if (uVar10 < uVar2) {
                  uVar1 = piVar22[10];
                  *(undefined1 *)((int)puVar11 + uVar10) =
                       *(undefined1 *)((int)puVar12 + piVar22[8]);
                  *(undefined1 *)((int)puVar17 + uVar10) =
                       *(undefined1 *)((int)puVar12 + piVar22[9]);
                  if (uVar1 < uVar2) {
                    uVar10 = piVar22[0xd];
                    *(undefined1 *)((int)puVar11 + uVar1) =
                         *(undefined1 *)((int)puVar12 + piVar22[0xb]);
                    *(undefined1 *)((int)puVar17 + uVar1) =
                         *(undefined1 *)((int)puVar12 + piVar22[0xc]);
                    if (uVar10 < uVar2) {
                      uVar1 = piVar22[0x10];
                      *(undefined1 *)((int)puVar11 + uVar10) =
                           *(undefined1 *)((int)puVar12 + piVar22[0xe]);
                      *(undefined1 *)((int)puVar17 + uVar10) =
                           *(undefined1 *)((int)puVar12 + piVar22[0xf]);
                      if (uVar1 < uVar2) {
                        uVar10 = piVar22[0x13];
                        *(undefined1 *)((int)puVar11 + uVar1) =
                             *(undefined1 *)((int)puVar12 + piVar22[0x11]);
                        *(undefined1 *)((int)puVar17 + uVar1) =
                             *(undefined1 *)((int)puVar12 + piVar22[0x12]);
                        if (uVar10 < uVar2) {
                          uVar1 = piVar22[0x16];
                          *(undefined1 *)((int)puVar11 + uVar10) =
                               *(undefined1 *)((int)puVar12 + piVar22[0x14]);
                          *(undefined1 *)((int)puVar17 + uVar10) =
                               *(undefined1 *)((int)puVar12 + piVar22[0x15]);
                          if (uVar1 < uVar2) {
                            uVar10 = piVar22[0x19];
                            *(undefined1 *)((int)puVar11 + uVar1) =
                                 *(undefined1 *)((int)puVar12 + piVar22[0x17]);
                            *(undefined1 *)((int)puVar17 + uVar1) =
                                 *(undefined1 *)((int)puVar12 + piVar22[0x18]);
                            if (uVar10 < uVar2) {
                              uVar1 = piVar22[0x1c];
                              *(undefined1 *)((int)puVar11 + uVar10) =
                                   *(undefined1 *)((int)puVar12 + piVar22[0x1a]);
                              *(undefined1 *)((int)puVar17 + uVar10) =
                                   *(undefined1 *)((int)puVar12 + piVar22[0x1b]);
                              if (uVar1 < uVar2) {
                                uVar10 = piVar22[0x20];
                                *(undefined1 *)((int)puVar11 + uVar1) =
                                     *(undefined1 *)((int)puVar12 + piVar22[0x1e]);
                                *(undefined1 *)((int)puVar17 + uVar1) =
                                     *(undefined1 *)((int)puVar12 + piVar22[0x1f]);
                                if (uVar10 < uVar2) {
                                  uVar1 = piVar22[0x23];
                                  *(undefined1 *)((int)puVar11 + uVar10) =
                                       *(undefined1 *)((int)puVar12 + piVar22[0x21]);
                                  *(undefined1 *)((int)puVar17 + uVar10) =
                                       *(undefined1 *)((int)puVar12 + piVar22[0x22]);
                                  if (uVar1 < uVar2) {
                                    uVar10 = piVar22[0x26];
                                    *(undefined1 *)((int)puVar11 + uVar1) =
                                         *(undefined1 *)((int)puVar12 + piVar22[0x24]);
                                    *(undefined1 *)((int)puVar17 + uVar1) =
                                         *(undefined1 *)((int)puVar12 + piVar22[0x25]);
                                    if (uVar10 < uVar2) {
                                      uVar1 = piVar22[0x29];
                                      *(undefined1 *)((int)puVar11 + uVar10) =
                                           *(undefined1 *)((int)puVar12 + piVar22[0x27]);
                                      *(undefined1 *)((int)puVar17 + uVar10) =
                                           *(undefined1 *)((int)puVar12 + piVar22[0x28]);
                                      if (uVar1 < uVar2) {
                                        uVar10 = piVar22[0x2d];
                                        *(undefined1 *)((int)puVar11 + uVar1) =
                                             *(undefined1 *)((int)puVar12 + piVar22[0x2b]);
                                        *(undefined1 *)((int)puVar17 + uVar1) =
                                             *(undefined1 *)((int)puVar12 + piVar22[0x2c]);
                                        if (uVar10 < uVar2) {
                                          *(undefined1 *)((int)puVar11 + uVar10) =
                                               *(undefined1 *)((int)puVar12 + piVar22[0x2e]);
                                          *(undefined1 *)((int)puVar17 + uVar10) =
                                               *(undefined1 *)((int)puVar12 + piVar22[0x2f]);
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
          puVar14 = (undefined8 *)((int)puVar14 + uVar3);
          puVar24 = (undefined8 *)((int)puVar24 + uVar3);
          bVar25 = *(int *)((int)piVar22 + 8) != iVar4;
          iVar4 = iVar4 + 1;
        } while (bVar25);
        param_2 = *(FILE **)((int)piVar22 + 0xc0);
        piVar23 = piVar22;
      }
    }
    pvVar8 = *(void **)((int)piVar23 + 0x74);
    fwrite(pvVar8,1,*(size_t *)((int)piVar23 + 0xa8),param_2);
    iVar4 = DAT_00018860 + 0x187e8;
  }
  else {
    if (uVar5 < 0x10000) {
LAB_00018814:
      _mpp_err(DAT_00018868 + 0x18830,DAT_00018864 + 0x1882c,0,uVar5);
      return;
    }
    if (uVar5 < 0x10006) {
      pvVar8 = (void *)mpp_osal_malloc(DAT_0001884c + 0x17d1c,uVar2 * uVar1 * 2);
      if (uVar2 != 0) {
        uVar5 = 0;
        do {
          uVar5 = uVar5 + 1;
          fwrite(pvVar7,1,uVar1 << 1,param_2);
          pvVar7 = (void *)((int)pvVar7 + uVar3);
        } while (uVar2 != uVar5);
      }
      iVar4 = DAT_00018850 + 0x17d68;
    }
    else {
      if (3 < uVar5 - 0x1000a) goto LAB_00018814;
      pvVar8 = (void *)mpp_osal_malloc(DAT_00018844 + 0x17c98,uVar2 * uVar1 * 4);
      if (uVar2 != 0) {
        uVar5 = 0;
        do {
          uVar5 = uVar5 + 1;
          fwrite(pvVar7,1,uVar1 << 2,param_2);
          pvVar7 = (void *)((int)pvVar7 + uVar3);
        } while (uVar2 != uVar5);
      }
      iVar4 = DAT_00018848 + 0x17ce4;
    }
  }
LAB_00017ce0:
  mpp_osal_free(iVar4,pvVar8);
  return;
}



/* ===== calc_data_crc @ 0001886c size=732 ===== */

void calc_data_crc(undefined1 (*param_1) [16],uint param_2,uint *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 (*pauVar3) [16];
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint local_1c [2];
  
  if (param_2 == 0) {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    return;
  }
  if (param_2 - 1 < 0xf) {
    uVar2 = 0;
    uVar7 = uVar2;
LAB_000188d8:
    uVar7 = uVar7 + (byte)(*param_1)[uVar2];
    if (uVar2 + 1 < param_2) {
      uVar7 = uVar7 + (byte)(*param_1)[uVar2 + 1];
      if (uVar2 + 2 < param_2) {
        uVar7 = uVar7 + (byte)(*param_1)[uVar2 + 2];
        if (uVar2 + 3 < param_2) {
          uVar7 = uVar7 + (byte)(*param_1)[uVar2 + 3];
          if (uVar2 + 4 < param_2) {
            uVar7 = uVar7 + (byte)(*param_1)[uVar2 + 4];
            if (uVar2 + 5 < param_2) {
              uVar7 = uVar7 + (byte)(*param_1)[uVar2 + 5];
              if (uVar2 + 6 < param_2) {
                uVar7 = uVar7 + (byte)(*param_1)[uVar2 + 6];
                if (uVar2 + 7 < param_2) {
                  uVar7 = uVar7 + (byte)(*param_1)[uVar2 + 7];
                  if (uVar2 + 8 < param_2) {
                    uVar7 = uVar7 + (byte)(*param_1)[uVar2 + 8];
                    if (uVar2 + 9 < param_2) {
                      uVar7 = uVar7 + (byte)(*param_1)[uVar2 + 9];
                      if (uVar2 + 10 < param_2) {
                        uVar7 = uVar7 + (byte)(*param_1)[uVar2 + 10];
                        if (uVar2 + 0xb < param_2) {
                          uVar7 = uVar7 + (byte)(*param_1)[uVar2 + 0xb];
                          if (uVar2 + 0xc < param_2) {
                            uVar7 = uVar7 + (byte)(*param_1)[uVar2 + 0xc];
                            if (uVar2 + 0xd < param_2) {
                              uVar7 = uVar7 + (byte)(*param_1)[uVar2 + 0xd];
                              if (uVar2 + 0xe < param_2) {
                                uVar7 = uVar7 + (byte)(*param_1)[uVar2 + 0xe];
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_000189f8;
            }
          }
        }
      }
    }
    if (param_2 >> 2 == 0) {
      uVar2 = 0;
      goto LAB_00018ab0;
    }
  }
  else {
    auVar11 = (undefined1  [16])0x0;
    pauVar3 = param_1;
    do {
      auVar8 = *pauVar3;
      pauVar3 = pauVar3 + 1;
      auVar12 = VectorCopyLong(auVar8._0_8_,1,1);
      auVar9 = VectorCopyLong(auVar8._8_8_,1,1);
      auVar8 = VectorCopyLong(auVar12._8_8_,2,1);
      auVar8 = VectorAdd(auVar8,auVar12._0_8_,2,1);
      auVar8 = VectorAdd(auVar8,auVar9._0_8_,2,1);
      auVar8 = VectorAdd(auVar8,auVar9._8_8_,2,1);
      auVar11 = VectorAdd(auVar11,auVar8,4);
    } while (pauVar3 != (undefined1 (*) [16])(*param_1 + (param_2 & 0xfffffff0)));
    uVar10 = VectorAdd(auVar11._0_8_,auVar11._8_8_,4);
    uVar2 = param_2 & 0xfffffff0;
    uVar10 = VectorPairwiseAdd(uVar10,uVar10,4);
    uVar7 = (uint)uVar10;
    if (param_2 != uVar2) goto LAB_000188d8;
  }
LAB_000189f8:
  uVar6 = param_2 >> 2;
  if (uVar6 - 1 < 6) {
    uVar4 = 0;
    uVar2 = uVar4;
  }
  else {
    auVar11 = (undefined1  [16])0x0;
    pauVar3 = param_1;
    do {
      auVar8 = *pauVar3;
      pauVar3 = pauVar3 + 1;
      auVar11 = auVar11 ^ auVar8;
    } while (pauVar3 != (undefined1 (*) [16])(*param_1 + (param_2 & 0xfffffff0)));
    uVar4 = uVar6 & 0xfffffffc;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = auVar11._8_8_;
    uVar2 = SUB164(auVar8 ^ auVar11,4) ^ SUB164(auVar8 ^ auVar11,0);
    if (uVar4 == uVar6) goto LAB_00018ab0;
  }
  uVar2 = uVar2 ^ *(uint *)(*param_1 + uVar4 * 4);
  if (uVar4 + 1 < uVar6) {
    uVar2 = uVar2 ^ *(uint *)(*param_1 + uVar4 * 4 + 4);
    if (uVar4 + 2 < uVar6) {
      uVar2 = uVar2 ^ *(uint *)(*param_1 + uVar4 * 4 + 8);
      if (uVar4 + 3 < uVar6) {
        uVar2 = uVar2 ^ *(uint *)(*param_1 + uVar4 * 4 + 0xc);
        if (uVar4 + 4 < uVar6) {
          uVar2 = uVar2 ^ *(uint *)(param_1[1] + uVar4 * 4);
          if (uVar4 + 5 < uVar6) {
            uVar2 = uVar2 ^ *(uint *)(param_1[1] + uVar4 * 4 + 4);
          }
        }
      }
    }
  }
LAB_00018ab0:
  if ((param_2 & 3) != 0) {
    local_1c[0] = 0;
    if ((param_2 & 0xfffffffc) < param_2) {
      puVar5 = param_1[-1] + (param_2 & 0xfffffffc) + 0xf;
      do {
        puVar1 = puVar5 + (1 - (int)param_1);
        puVar5 = puVar5 + 1;
        *(undefined1 *)((int)local_1c + ((uint)puVar1 & 3)) = *puVar5;
      } while (puVar5 != param_1[-1] + param_2 + 0xf);
      uVar2 = uVar2 ^ local_1c[0];
    }
  }
  *param_3 = param_2;
  param_3[1] = uVar7;
  param_3[2] = uVar2;
  return;
}



/* ===== write_data_crc @ 00018b48 size=56 ===== */

void write_data_crc(FILE *param_1,undefined4 *param_2)

{
  if (param_1 == (FILE *)0x0) {
    return;
  }
  fprintf(param_1,(char *)(DAT_00018b80 + 0x18b6c),*param_2,param_2[1],param_2[2]);
  fflush(param_1);
  return;
}



/* ===== read_data_crc @ 00018b84 size=96 ===== */

void read_data_crc(FILE *param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == (FILE *)0x0) {
    return;
  }
  iVar1 = fscanf(param_1,(char *)(DAT_00018be4 + 0x18bb0),param_2,param_2 + 4,param_2 + 8);
  if (iVar1 != -1) {
    return;
  }
  _mpp_err(DAT_00018bf0 + 0x18bdc,DAT_00018bec + 0x18bd8,DAT_00018be8 + 0x18bd4);
  return;
}



/* ===== calc_frm_crc @ 00018bf4 size=1792 ===== */

/* WARNING: Type propagation algorithm not settling */

void calc_frm_crc(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 (*pauVar7) [16];
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined1 (*pauVar12) [16];
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint uVar18;
  undefined1 (*pauVar19) [16];
  undefined1 *puVar20;
  undefined1 *puVar21;
  int iVar22;
  bool bVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  uint local_50;
  
  puVar2 = (undefined1 *)mpp_frame_get_width();
  uVar3 = mpp_frame_get_height(param_1);
  iVar4 = mpp_frame_get_hor_stride(param_1);
  uVar5 = mpp_frame_get_buffer(param_1);
  iVar6 = mpp_buffer_get_ptr_with_caller(uVar5,DAT_000192f4 + 0x18c3c);
  if (uVar3 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    uVar3 = 0;
    uVar13 = 0;
    local_50 = 0;
  }
  else {
    iVar11 = 0;
    uVar1 = (uint)puVar2 >> 4;
    puVar17 = (undefined1 *)((uint)puVar2 & 0xfffffff0);
    uVar13 = 0;
    uVar16 = 0;
    do {
      uVar18 = uVar16;
      if (puVar2 != (undefined1 *)0x0) {
        if ((int)puVar2 - 1U < 0xf) {
          puVar8 = (undefined1 *)0x0;
        }
        else {
          pauVar7 = (undefined1 (*) [16])(iVar6 + iVar11);
          auVar27 = (undefined1  [16])0x0;
          pauVar19 = pauVar7 + uVar1;
          do {
            auVar24 = *pauVar7;
            pauVar7 = pauVar7 + 1;
            auVar28 = VectorCopyLong(auVar24._0_8_,1,1);
            auVar25 = VectorCopyLong(auVar24._8_8_,1,1);
            auVar24 = VectorCopyLong(auVar28._8_8_,2,1);
            auVar24 = VectorAdd(auVar24,auVar28._0_8_,2,1);
            auVar24 = VectorAdd(auVar24,auVar25._0_8_,2,1);
            auVar24 = VectorAdd(auVar24,auVar25._8_8_,2,1);
            auVar27 = VectorAdd(auVar27,auVar24,4);
          } while (pauVar7 != pauVar19);
          uVar26 = VectorAdd(auVar27._0_8_,auVar27._8_8_,4);
          uVar26 = VectorPairwiseAdd(uVar26,uVar26,4);
          uVar13 = uVar13 + (int)uVar26;
          puVar8 = puVar17;
          if (puVar2 == puVar17) goto LAB_00018e24;
        }
        uVar13 = uVar13 + (byte)puVar8[iVar11 + iVar6];
        if (puVar8 + 1 < puVar2) {
          uVar13 = uVar13 + (byte)(puVar8 + 1)[iVar11 + iVar6];
          if (puVar8 + 2 < puVar2) {
            uVar13 = uVar13 + (byte)(puVar8 + 2)[iVar11 + iVar6];
            if (puVar8 + 3 < puVar2) {
              uVar13 = uVar13 + (byte)(puVar8 + 3)[iVar11 + iVar6];
              if (puVar8 + 4 < puVar2) {
                uVar13 = uVar13 + (byte)(puVar8 + 4)[iVar11 + iVar6];
                if (puVar8 + 5 < puVar2) {
                  uVar13 = uVar13 + (byte)(puVar8 + 5)[iVar11 + iVar6];
                  if (puVar8 + 6 < puVar2) {
                    uVar13 = uVar13 + (byte)(puVar8 + 6)[iVar11 + iVar6];
                    if (puVar8 + 7 < puVar2) {
                      uVar13 = uVar13 + (byte)(puVar8 + 7)[iVar11 + iVar6];
                      if (puVar8 + 8 < puVar2) {
                        uVar13 = uVar13 + (byte)(puVar8 + 8)[iVar11 + iVar6];
                        if (puVar8 + 9 < puVar2) {
                          uVar13 = uVar13 + (byte)(puVar8 + 9)[iVar11 + iVar6];
                          if (puVar8 + 10 < puVar2) {
                            uVar13 = uVar13 + (byte)(puVar8 + 10)[iVar11 + iVar6];
                            if (puVar8 + 0xb < puVar2) {
                              uVar13 = uVar13 + (byte)(puVar8 + 0xb)[iVar11 + iVar6];
                              if (puVar8 + 0xc < puVar2) {
                                uVar13 = uVar13 + (byte)(puVar8 + 0xc)[iVar11 + iVar6];
                                if (puVar8 + 0xd < puVar2) {
                                  puVar9 = puVar8 + 0xe;
                                  puVar10 = puVar9;
                                  if (puVar9 < puVar2) {
                                    puVar10 = puVar9 + iVar6;
                                  }
                                  if (puVar9 < puVar2) {
                                    puVar10 = (undefined1 *)(uint)(byte)puVar10[iVar11];
                                  }
                                  uVar13 = uVar13 + (byte)(puVar8 + 0xd)[iVar11 + iVar6];
                                  if (puVar9 < puVar2) {
                                    uVar13 = uVar13 + (int)puVar10;
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
LAB_00018e24:
      uVar16 = uVar18 + 1;
      iVar11 = iVar11 + iVar4;
    } while (uVar3 != uVar16);
    puVar8 = (undefined1 *)(uVar1 * 4);
    iVar11 = 0;
    puVar10 = (undefined1 *)((uint)puVar2 >> 2);
    uVar3 = 0;
    uVar14 = 0;
    do {
      if (puVar10 != (undefined1 *)0x0) {
        if ((int)puVar10 - 1U < 6) {
          puVar9 = (undefined1 *)0x0;
        }
        else {
          pauVar19 = (undefined1 (*) [16])(iVar6 + iVar11);
          auVar27 = (undefined1  [16])0x0;
          pauVar7 = pauVar19 + uVar1;
          do {
            auVar24 = *pauVar19;
            pauVar19 = pauVar19 + 1;
            auVar27 = auVar27 ^ auVar24;
          } while (pauVar19 != pauVar7);
          auVar24._8_8_ = 0;
          auVar24._0_8_ = auVar27._8_8_;
          uVar3 = uVar3 ^ SUB164(auVar27 ^ auVar24,0) ^ SUB164(auVar27 ^ auVar24,4);
          puVar9 = puVar8;
          if (puVar10 == puVar8) goto LAB_00018f48;
        }
        uVar3 = uVar3 ^ *(uint *)(iVar6 + (int)puVar9 * 4 + iVar11);
        if (puVar9 + 1 < puVar10) {
          uVar3 = uVar3 ^ *(uint *)(iVar6 + (int)(puVar9 + 1) * 4 + iVar11);
          if (puVar9 + 2 < puVar10) {
            uVar3 = uVar3 ^ *(uint *)(iVar6 + (int)(puVar9 + 2) * 4 + iVar11);
            if (puVar9 + 3 < puVar10) {
              uVar3 = uVar3 ^ *(uint *)(iVar6 + (int)(puVar9 + 3) * 4 + iVar11);
              if (puVar9 + 4 < puVar10) {
                puVar20 = puVar9 + 5;
                puVar21 = puVar20;
                if (puVar20 < puVar10) {
                  puVar21 = (undefined1 *)(iVar6 + (int)puVar20 * 4);
                }
                if (puVar20 < puVar10) {
                  puVar21 = *(undefined1 **)(puVar21 + iVar11);
                }
                uVar3 = uVar3 ^ *(uint *)(iVar6 + (int)(puVar9 + 4) * 4 + iVar11);
                if (puVar20 < puVar10) {
                  uVar3 = uVar3 ^ (uint)puVar21;
                }
              }
            }
          }
        }
      }
LAB_00018f48:
      bVar23 = uVar18 != uVar14;
      iVar11 = iVar11 + iVar4;
      uVar14 = uVar14 + 1;
    } while (bVar23);
    uVar18 = uVar16 >> 1;
    local_50 = uVar16 * (int)puVar2;
    param_2[2] = uVar3;
    iVar11 = uVar16 * iVar4;
    param_2[1] = uVar13;
    *param_2 = local_50;
    pauVar7 = (undefined1 (*) [16])(iVar6 + iVar11);
    if (uVar18 != 0) {
      uVar16 = 0;
      pauVar19 = pauVar7;
      do {
        if (puVar2 != (undefined1 *)0x0) {
          if ((int)puVar2 - 1U < 0xf) {
            puVar9 = (undefined1 *)0x0;
          }
          else {
            auVar27 = (undefined1  [16])0x0;
            pauVar12 = pauVar19;
            do {
              auVar24 = *pauVar12;
              pauVar12 = pauVar12 + 1;
              auVar28 = VectorCopyLong(auVar24._0_8_,1,1);
              auVar25 = VectorCopyLong(auVar24._8_8_,1,1);
              auVar24 = VectorCopyLong(auVar28._0_8_,2,1);
              auVar24 = VectorAdd(auVar24,auVar28._8_8_,2,1);
              auVar24 = VectorAdd(auVar24,auVar25._0_8_,2,1);
              auVar24 = VectorAdd(auVar24,auVar25._8_8_,2,1);
              auVar27 = VectorAdd(auVar27,auVar24,4);
            } while (pauVar12 != pauVar19 + uVar1);
            uVar26 = VectorAdd(auVar27._0_8_,auVar27._8_8_,4);
            uVar26 = VectorPairwiseAdd(uVar26,uVar26,4);
            uVar13 = uVar13 + (int)uVar26;
            puVar9 = puVar17;
            if (puVar2 == puVar17) goto LAB_0001916c;
          }
          uVar13 = uVar13 + (byte)puVar9[(int)*pauVar19];
          if (puVar9 + 1 < puVar2) {
            uVar13 = uVar13 + (byte)(puVar9 + 1)[(int)*pauVar19];
            if (puVar9 + 2 < puVar2) {
              uVar13 = uVar13 + (byte)(puVar9 + 2)[(int)*pauVar19];
              if (puVar9 + 3 < puVar2) {
                uVar13 = uVar13 + (byte)(puVar9 + 3)[(int)*pauVar19];
                if (puVar9 + 4 < puVar2) {
                  uVar13 = uVar13 + (byte)(puVar9 + 4)[(int)*pauVar19];
                  if (puVar9 + 5 < puVar2) {
                    uVar13 = uVar13 + (byte)(puVar9 + 5)[(int)*pauVar19];
                    if (puVar9 + 6 < puVar2) {
                      uVar13 = uVar13 + (byte)(puVar9 + 6)[(int)*pauVar19];
                      if (puVar9 + 7 < puVar2) {
                        uVar13 = uVar13 + (byte)(puVar9 + 7)[(int)*pauVar19];
                        if (puVar9 + 8 < puVar2) {
                          uVar13 = uVar13 + (byte)(puVar9 + 8)[(int)*pauVar19];
                          if (puVar9 + 9 < puVar2) {
                            uVar13 = uVar13 + (byte)(puVar9 + 9)[(int)*pauVar19];
                            if (puVar9 + 10 < puVar2) {
                              uVar13 = uVar13 + (byte)(puVar9 + 10)[(int)*pauVar19];
                              if (puVar9 + 0xb < puVar2) {
                                uVar13 = uVar13 + (byte)(puVar9 + 0xb)[(int)*pauVar19];
                                if (puVar9 + 0xc < puVar2) {
                                  uVar13 = uVar13 + (byte)(puVar9 + 0xc)[(int)*pauVar19];
                                  if (puVar9 + 0xd < puVar2) {
                                    puVar20 = puVar9 + 0xe;
                                    puVar21 = puVar20;
                                    if (puVar20 < puVar2) {
                                      puVar21 = *pauVar7 + (int)puVar20;
                                    }
                                    if (puVar20 < puVar2) {
                                      puVar21 = (undefined1 *)
                                                (uint)*(byte *)((int)pauVar19 +
                                                               ((int)puVar21 - (int)pauVar7));
                                    }
                                    uVar13 = uVar13 + (byte)(puVar9 + 0xd)[(int)*pauVar19];
                                    if (puVar20 < puVar2) {
                                      uVar13 = uVar13 + (int)puVar21;
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
LAB_0001916c:
        uVar16 = uVar16 + 1;
        pauVar19 = (undefined1 (*) [16])(*pauVar19 + iVar4);
      } while (uVar18 != uVar16);
      uVar16 = 0;
      iVar15 = iVar11;
      do {
        iVar22 = iVar15 - iVar11;
        if (puVar10 != (undefined1 *)0x0) {
          if ((int)puVar10 - 1U < 6) {
            puVar2 = (undefined1 *)0x0;
          }
          else {
            pauVar19 = (undefined1 (*) [16])(iVar6 + iVar15);
            auVar27 = (undefined1  [16])0x0;
            pauVar12 = pauVar19 + uVar1;
            do {
              auVar24 = *pauVar19;
              pauVar19 = pauVar19 + 1;
              auVar27 = auVar27 ^ auVar24;
            } while (pauVar12 != pauVar19);
            auVar25._8_8_ = 0;
            auVar25._0_8_ = auVar27._8_8_;
            uVar3 = uVar3 ^ SUB164(auVar25 ^ auVar27,4) ^ SUB164(auVar25 ^ auVar27,0);
            puVar2 = puVar8;
            if (puVar10 == puVar8) goto LAB_00019280;
          }
          uVar3 = uVar3 ^ *(uint *)((int)pauVar7 + iVar22 + (int)puVar2 * 4);
          if (puVar2 + 1 < puVar10) {
            uVar3 = uVar3 ^ *(uint *)((int)pauVar7 + iVar22 + (int)(puVar2 + 1) * 4);
            if (puVar2 + 2 < puVar10) {
              uVar3 = uVar3 ^ *(uint *)((int)pauVar7 + iVar22 + (int)(puVar2 + 2) * 4);
              if (puVar2 + 3 < puVar10) {
                uVar3 = uVar3 ^ *(uint *)((int)pauVar7 + iVar22 + (int)(puVar2 + 3) * 4);
                if (puVar2 + 4 < puVar10) {
                  puVar9 = puVar2 + 5;
                  puVar17 = puVar9;
                  if (puVar9 < puVar10) {
                    puVar17 = pauVar7[1] + (int)puVar2 * 4 + 4;
                  }
                  if (puVar9 < puVar10) {
                    puVar17 = *(undefined1 **)(puVar17 + iVar22);
                  }
                  uVar3 = uVar3 ^ *(uint *)((int)pauVar7 + iVar22 + (int)(puVar2 + 4) * 4);
                  if (puVar9 < puVar10) {
                    uVar3 = uVar3 ^ (uint)puVar17;
                  }
                }
              }
            }
          }
        }
LAB_00019280:
        uVar16 = uVar16 + 1;
        iVar15 = iVar15 + iVar4;
      } while (uVar18 != uVar16);
    }
  }
  param_2[4] = uVar13;
  param_2[5] = uVar3;
  param_2[3] = local_50 >> 1;
  return;
}



/* ===== write_frm_crc @ 000192f8 size=72 ===== */

void write_frm_crc(FILE *param_1,undefined4 *param_2)

{
  if (param_1 == (FILE *)0x0) {
    return;
  }
  fprintf(param_1,(char *)(DAT_00019340 + 0x19330),*param_2,param_2[1],param_2[2],param_2[3],
          param_2[4],param_2[5]);
  fflush(param_1);
  return;
}



/* ===== read_frm_crc @ 00019344 size=120 ===== */

void read_frm_crc(FILE *param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == (FILE *)0x0) {
    return;
  }
  iVar1 = fscanf(param_1,(char *)(DAT_000193bc + 0x19380),param_2,param_2 + 4,param_2 + 8,
                 param_2 + 0xc,param_2 + 0x10,param_2 + 0x14);
  if (iVar1 != -1) {
    return;
  }
  _mpp_err(DAT_000193c8 + 0x193b4,DAT_000193c4 + 0x193b0,DAT_000193c0 + 0x193ac);
  return;
}



/* ===== read_image @ 000193cc size=1296 ===== */

undefined4
read_image(void *param_1,FILE *param_2,uint param_3,uint param_4,size_t param_5,int param_6,
          uint param_7)

{
  size_t sVar1;
  size_t sVar2;
  void *__ptr;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_2c;
  
  sVar2 = param_5;
  if ((param_7 & 0xf00000) != 0) {
    uVar4 = (param_4 + 0xf & 0xfffffff0) * (param_3 + 0xf & 0xfffffff0);
    uVar5 = (uVar4 >> 4) + 0xfff & 0xfffff000;
    sVar2 = fread(param_1,1,uVar5,param_2);
    if (uVar5 != sVar2) {
      _mpp_err(DAT_000197f4 + 0x197b4,DAT_000197f0 + 0x197b0,DAT_000197ec + 0x197a8,sVar2,uVar5);
      return 0xffffffff;
    }
    if ((param_7 & 0xfffff) == 0) {
      uVar4 = uVar4 * 3 >> 1;
      sVar2 = fread((void *)((int)param_1 + uVar5),1,uVar4,param_2);
      if (uVar4 == sVar2) {
        return 0;
      }
      _mpp_err(DAT_000197e8 + 0x19740,DAT_000197e4 + 0x1973c,DAT_000197e0 + 0x19734,sVar2,uVar4);
      return 0xffffffff;
    }
    if ((param_7 & 0xfffff) != 2) {
      _mpp_err(DAT_000197d0 + 0x19618,DAT_000197cc + 0x19614,DAT_000197c8 + 0x19610,param_7);
      return 0;
    }
    sVar2 = uVar4 * 2;
    sVar3 = fread((void *)((int)param_1 + uVar5),1,sVar2,param_2);
    if (sVar2 - sVar3 == 0) {
      return 0;
    }
    _mpp_err(DAT_000197dc + 0x19688,DAT_000197d8 + 0x19684,DAT_000197d4 + 0x1967c,sVar3,sVar2);
    return 0xffffffff;
  }
  uVar4 = param_7 & 0xfffff;
  __ptr = (void *)((int)param_1 + param_6 * param_5);
  if (uVar4 < 0xc) {
    if ((uVar4 < 8) && (uVar4 != 2)) {
      if (uVar4 < 3) {
        if (uVar4 == 0) {
          if (param_4 != 0) {
            uVar4 = 0;
            do {
              sVar2 = fread(param_1,1,param_3,param_2);
              uVar4 = uVar4 + 1;
              param_1 = (void *)((int)param_1 + param_5);
              if (param_3 != sVar2) {
                return 0xffffffff;
              }
            } while (param_4 != uVar4);
            if (param_4 >> 1 != 0) {
              uVar4 = 0;
              do {
                sVar2 = fread(__ptr,1,param_3,param_2);
                uVar4 = uVar4 + 1;
                __ptr = (void *)((int)__ptr + param_5);
                if (param_3 != sVar2) {
                  return 0xffffffff;
                }
              } while (uVar4 != param_4 >> 1);
            }
          }
          return 0;
        }
LAB_000194a0:
        _mpp_err(DAT_000197c4 + 0x194c0,DAT_000197c0 + 0x194bc,DAT_000197bc + 0x194b8,param_7);
        return 0xfffffffa;
      }
      if (uVar4 == 4) {
        if (param_4 == 0) {
          return 0;
        }
        uVar4 = 0;
        do {
          sVar2 = fread(param_1,1,param_3,param_2);
          uVar4 = uVar4 + 1;
          param_1 = (void *)((int)param_1 + param_5);
          if (param_3 != sVar2) {
            return 0xffffffff;
          }
        } while (param_4 != uVar4);
        param_4 = param_4 >> 1;
        if (param_4 == 0) {
          return 0;
        }
        uVar4 = 0;
        param_3 = param_3 >> 1;
        uVar5 = 0;
        do {
          sVar2 = fread((void *)((int)__ptr + (uVar4 >> 1)),1,param_3,param_2);
          uVar5 = uVar5 + 1;
          uVar4 = uVar4 + param_5;
          if (param_3 != sVar2) {
            return 0xffffffff;
          }
        } while (uVar5 != param_4);
        uVar5 = 0;
        uVar4 = 0;
        do {
          uVar4 = uVar4 + 1;
          sVar2 = fread((void *)((int)__ptr + (param_6 * param_5 >> 2) + (uVar5 >> 1)),1,param_3,
                        param_2);
          uVar5 = uVar5 + param_5;
          if (param_3 != sVar2) {
            return 0xffffffff;
          }
        } while (uVar4 != param_4);
        return 0;
      }
      if (uVar4 != 6) goto LAB_000194a0;
    }
  }
  else {
    if (0x10007 < uVar4) {
      if (0x1000d < uVar4) goto LAB_000194a0;
      param_5 = 4;
      goto LAB_00017824;
    }
    if (0x10005 < uVar4) {
      param_5 = 3;
      goto LAB_00017824;
    }
    if (uVar4 < 0x10000) goto LAB_000194a0;
  }
  param_5 = 2;
LAB_00017824:
  sVar3 = param_5 * param_3;
  if (sVar3 - sVar2 != 0 && (int)sVar2 <= (int)sVar3) {
    iVar7 = DAT_00017950 + 0x178e4;
    iVar6 = DAT_00017954 + 0x178e8;
    _mpp_err(iVar6,DAT_00017958 + 0x178fc,iVar7,param_5 << 3,sVar2,param_3,param_5);
    _mpp_err(iVar6,DAT_0001795c + 0x17910,iVar7);
    _mpp_err(iVar6,DAT_00017960 + 0x17928,iVar7);
    sVar2 = sVar3;
  }
  if ((int)param_4 < 1) {
    return 0;
  }
  uVar4 = 0;
  iVar8 = DAT_00017944 + 0x17868;
  iVar7 = DAT_00017948 + 0x1786c;
  local_2c = 0;
  iVar6 = DAT_0001794c + 0x17874;
  do {
    uVar4 = uVar4 + 1;
    sVar1 = fread(param_1,1,sVar3,param_2);
    param_1 = (void *)((int)param_1 + sVar2);
    if (sVar3 - sVar1 != 0) {
      local_2c = 0xffffffff;
      _mpp_err(iVar6,iVar7,iVar8,sVar3,sVar1);
    }
  } while (param_4 != uVar4);
  return local_2c;
}



/* ===== fill_image @ 000197f8 size=13316 ===== */

undefined4
fill_image(undefined8 *param_1,uint param_2,uint param_3,uint param_4,int param_5,uint param_6,
          uint param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined8 uVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 *puVar86;
  undefined1 *puVar87;
  undefined1 *puVar88;
  undefined1 *puVar89;
  undefined4 uVar90;
  char cVar91;
  char cVar92;
  char cVar93;
  undefined4 uVar94;
  char cVar95;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  char cVar99;
  int iVar100;
  uint uVar101;
  uint uVar102;
  code *pcVar103;
  uint uVar104;
  undefined8 *puVar105;
  uint uVar106;
  uint uVar107;
  uint uVar108;
  int iVar109;
  undefined8 *puVar110;
  undefined8 *puVar111;
  longlong lVar112;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  uint local_10c;
  undefined8 *local_c8;
  undefined8 *local_84;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c [18];
  
  iVar100 = DAT_00019cb8 + 0x19814;
  uVar107 = param_5 * param_4;
  uVar102 = param_6 & 0xfffff;
  puVar105 = (undefined8 *)((int)param_1 + uVar107);
  cVar95 = (char)param_7;
  if (uVar102 == 10) {
    if (param_3 == 0) {
      return 0;
    }
    uVar102 = param_2 >> 1;
    cVar92 = cVar95 * '\x05' + '@';
    if (uVar102 == 0) {
      return 0;
    }
    auVar132._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
    auVar132._0_8_ = 0x1000000010;
    auVar135._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
    auVar135._0_8_ = 0x400000004;
    auVar149._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
    auVar149._0_8_ = 0x800000008;
    auVar184._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
    auVar184._0_8_ = 0xc0000000c;
    uVar90 = CONCAT22(CONCAT11(cVar92,cVar92),CONCAT11(cVar92,cVar92));
    uVar67 = CONCAT44(uVar90,uVar90);
    auVar71._8_8_ = uVar67;
    auVar71._0_8_ = uVar67;
    auVar64._8_8_ = SUB158(SUB1615((undefined1  [16])0x0,1),7);
    auVar64._0_8_ = 0x101010101010101;
    uVar107 = (param_2 >> 5) * 0x10;
    auVar123._8_8_ = DAT_0001a6b8;
    auVar123._0_8_ = DAT_0001a6b0;
    uVar104 = 0;
    do {
      cVar99 = cVar95 * '\x03' + (char)uVar104;
      cVar93 = cVar95 * '\x02' + -0x80 + (char)(uVar104 >> 1);
      if (uVar102 - 1 < 0xf) {
        uVar101 = 0;
LAB_0001a394:
        uVar106 = uVar101 + 1;
        cVar91 = cVar99 + (char)uVar101 * '\x02';
        *(char *)((int)param_1 + uVar101 * 4 + 1) = cVar91;
        *(char *)((int)param_1 + uVar101 * 4 + 3) = cVar91 + '\x01';
        *(char *)((int)param_1 + uVar101 * 4) = cVar93;
        *(char *)((int)param_1 + uVar101 * 4 + 2) = cVar92 + (char)uVar101;
        if (uVar106 < uVar102) {
          uVar108 = uVar101 + 2;
          cVar91 = cVar99 + (char)uVar106 * '\x02';
          *(char *)((int)param_1 + uVar106 * 4 + 1) = cVar91;
          *(char *)((int)param_1 + uVar106 * 4 + 3) = cVar91 + '\x01';
          *(char *)((int)param_1 + uVar106 * 4) = cVar93;
          *(char *)((int)param_1 + uVar106 * 4 + 2) = cVar92 + (char)uVar106;
          if (uVar108 < uVar102) {
            uVar106 = uVar101 + 3;
            cVar91 = cVar99 + (char)uVar108 * '\x02';
            *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar91;
            *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar91 + '\x01';
            *(char *)((int)param_1 + uVar108 * 4) = cVar93;
            *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + (char)uVar108;
            if (uVar106 < uVar102) {
              uVar108 = uVar101 + 4;
              cVar91 = cVar99 + (char)uVar106 * '\x02';
              *(char *)((int)param_1 + uVar106 * 4 + 1) = cVar91;
              *(char *)((int)param_1 + uVar106 * 4 + 3) = cVar91 + '\x01';
              *(char *)((int)param_1 + uVar106 * 4) = cVar93;
              *(char *)((int)param_1 + uVar106 * 4 + 2) = cVar92 + (char)uVar106;
              if (uVar108 < uVar102) {
                uVar106 = uVar101 + 5;
                cVar91 = cVar99 + (char)uVar108 * '\x02';
                *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar91;
                *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar91 + '\x01';
                *(char *)((int)param_1 + uVar108 * 4) = cVar93;
                *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + (char)uVar108;
                if (uVar106 < uVar102) {
                  uVar108 = uVar101 + 6;
                  cVar91 = cVar99 + (char)uVar106 * '\x02';
                  *(char *)((int)param_1 + uVar106 * 4 + 1) = cVar91;
                  *(char *)((int)param_1 + uVar106 * 4 + 3) = cVar91 + '\x01';
                  *(char *)((int)param_1 + uVar106 * 4) = cVar93;
                  *(char *)((int)param_1 + uVar106 * 4 + 2) = cVar92 + (char)uVar106;
                  if (uVar108 < uVar102) {
                    uVar106 = uVar101 + 7;
                    cVar91 = cVar99 + (char)uVar108 * '\x02';
                    *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar91;
                    *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar91 + '\x01';
                    *(char *)((int)param_1 + uVar108 * 4) = cVar93;
                    *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + (char)uVar108;
                    if (uVar106 < uVar102) {
                      uVar108 = uVar101 + 8;
                      cVar91 = cVar99 + (char)uVar106 * '\x02';
                      *(char *)((int)param_1 + uVar106 * 4 + 1) = cVar91;
                      *(char *)((int)param_1 + uVar106 * 4 + 3) = cVar91 + '\x01';
                      *(char *)((int)param_1 + uVar106 * 4) = cVar93;
                      *(char *)((int)param_1 + uVar106 * 4 + 2) = cVar92 + (char)uVar106;
                      if (uVar108 < uVar102) {
                        uVar106 = uVar101 + 9;
                        cVar91 = cVar99 + (char)uVar108 * '\x02';
                        *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar91;
                        *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar91 + '\x01';
                        *(char *)((int)param_1 + uVar108 * 4) = cVar93;
                        *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + (char)uVar108;
                        if (uVar106 < uVar102) {
                          uVar108 = uVar101 + 10;
                          cVar91 = cVar99 + (char)uVar106 * '\x02';
                          *(char *)((int)param_1 + uVar106 * 4 + 1) = cVar91;
                          *(char *)((int)param_1 + uVar106 * 4 + 3) = cVar91 + '\x01';
                          *(char *)((int)param_1 + uVar106 * 4) = cVar93;
                          *(char *)((int)param_1 + uVar106 * 4 + 2) = cVar92 + (char)uVar106;
                          if (uVar108 < uVar102) {
                            uVar106 = uVar101 + 0xb;
                            cVar91 = cVar99 + (char)uVar108 * '\x02';
                            *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar91;
                            *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar91 + '\x01';
                            *(char *)((int)param_1 + uVar108 * 4) = cVar93;
                            *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + (char)uVar108;
                            if (uVar106 < uVar102) {
                              uVar108 = uVar101 + 0xc;
                              cVar91 = cVar99 + (char)uVar106 * '\x02';
                              *(char *)((int)param_1 + uVar106 * 4 + 1) = cVar91;
                              *(char *)((int)param_1 + uVar106 * 4 + 3) = cVar91 + '\x01';
                              *(char *)((int)param_1 + uVar106 * 4) = cVar93;
                              *(char *)((int)param_1 + uVar106 * 4 + 2) = cVar92 + (char)uVar106;
                              if (uVar108 < uVar102) {
                                uVar106 = uVar101 + 0xd;
                                cVar91 = cVar99 + (char)uVar108 * '\x02';
                                *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar91;
                                *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar91 + '\x01';
                                *(char *)((int)param_1 + uVar108 * 4) = cVar93;
                                *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + (char)uVar108;
                                if (uVar106 < uVar102) {
                                  uVar101 = uVar101 + 0xe;
                                  cVar91 = cVar99 + (char)uVar106 * '\x02';
                                  *(char *)((int)param_1 + uVar106 * 4 + 1) = cVar91;
                                  *(char *)((int)param_1 + uVar106 * 4 + 3) = cVar91 + '\x01';
                                  *(char *)((int)param_1 + uVar106 * 4) = cVar93;
                                  *(char *)((int)param_1 + uVar106 * 4 + 2) = cVar92 + (char)uVar106
                                  ;
                                  if (uVar101 < uVar102) {
                                    cVar99 = cVar99 + (char)uVar101 * '\x02';
                                    *(char *)((int)param_1 + uVar101 * 4 + 1) = cVar99;
                                    *(char *)((int)param_1 + uVar101 * 4 + 3) = cVar99 + '\x01';
                                    *(char *)((int)param_1 + uVar101 * 4) = cVar93;
                                    *(char *)((int)param_1 + uVar101 * 4 + 2) =
                                         cVar92 + (char)uVar101;
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
      else {
        uVar90 = CONCAT22(CONCAT11(cVar99,cVar99),CONCAT11(cVar99,cVar99));
        auVar96._12_4_ = uVar90;
        auVar96._8_4_ = uVar90;
        puVar105 = param_1;
        auVar133 = auVar123;
        do {
          auVar178 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar135 << 0x40 | auVar135),4);
          auVar129 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar184 << 0x40 | auVar184),4);
          puVar111 = puVar105 + 8;
          auVar131 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar149 << 0x40 | auVar149),4);
          auVar185._0_8_ = VectorCopyNarrow(auVar133,4);
          auVar185._8_8_ = VectorCopyNarrow(auVar178,4);
          auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar132 << 0x40 | auVar132),4);
          auVar131._0_8_ = VectorCopyNarrow(auVar131,4);
          auVar131._8_8_ = VectorCopyNarrow(auVar129,4);
          auVar129._0_8_ = VectorCopyNarrow(auVar185,2);
          auVar129._8_8_ = VectorCopyNarrow(auVar131,2);
          auVar96._4_4_ = uVar90;
          auVar96._0_4_ = uVar90;
          auVar131 = VectorAdd(auVar129,auVar129,1);
          VectorAdd(auVar129,auVar71,1);
          auVar129 = VectorAdd(auVar131,auVar96,1);
          VectorAdd(auVar129,*(undefined1 (*) [16])(auVar64 << 0x40 | auVar64),1);
          puVar86 = (undefined1 *)0x380;
          puVar87 = (undefined1 *)0x390;
          puVar88 = (undefined1 *)0x3a0;
          puVar89 = (undefined1 *)0x3b0;
          lVar112 = 8;
          puVar110 = puVar105;
          while( true ) {
            *(undefined1 *)puVar110 = *puVar86;
            *(undefined1 *)((int)puVar110 + 1) = *puVar87;
            *(undefined1 *)((int)puVar110 + 2) = *puVar88;
            *(undefined1 *)((int)puVar110 + 3) = *puVar89;
            puVar110 = (undefined8 *)((int)puVar110 + 4);
            lVar112 = lVar112 + -1;
            if (lVar112 == 0) break;
            puVar86 = puVar86 + 1;
            puVar87 = puVar87 + 1;
            puVar88 = puVar88 + 1;
            puVar89 = puVar89 + 1;
          }
          puVar105 = puVar105 + 4;
          puVar86 = (undefined1 *)0x388;
          puVar87 = (undefined1 *)0x398;
          puVar88 = (undefined1 *)0x3a8;
          puVar89 = (undefined1 *)0x3b8;
          lVar112 = 8;
          while( true ) {
            *(undefined1 *)puVar105 = *puVar86;
            *(undefined1 *)((int)puVar105 + 1) = *puVar87;
            *(undefined1 *)((int)puVar105 + 2) = *puVar88;
            *(undefined1 *)((int)puVar105 + 3) = *puVar89;
            puVar105 = (undefined8 *)((int)puVar105 + 4);
            lVar112 = lVar112 + -1;
            if (lVar112 == 0) break;
            puVar86 = puVar86 + 1;
            puVar87 = puVar87 + 1;
            puVar88 = puVar88 + 1;
            puVar89 = puVar89 + 1;
          }
          puVar105 = puVar111;
        } while (puVar111 != param_1 + (param_2 >> 5) * 8);
        uVar101 = uVar107;
        if (uVar102 != uVar107) goto LAB_0001a394;
      }
      uVar104 = uVar104 + 1;
      param_1 = (undefined8 *)((int)param_1 + param_4);
      if (param_3 == uVar104) {
        return 0;
      }
    } while( true );
  }
  if (uVar102 < 0xb) {
    if (uVar102 == 5) {
      if (param_3 == 0) {
        return 0;
      }
      if (param_2 == 0) {
        return 0;
      }
      uVar107 = param_2 & 0xfffffff0;
      auVar133._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
      auVar133._0_8_ = 0x1000000010;
      auVar178._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
      auVar178._0_8_ = 0x400000004;
      auVar118._8_8_ = DAT_0001a6b8;
      auVar118._0_8_ = DAT_0001a6b0;
      auVar9._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
      auVar9._0_8_ = 0x800000008;
      auVar10._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
      auVar10._0_8_ = 0xc0000000c;
      uVar102 = 0;
      do {
        cVar92 = cVar95 * '\x03' + (char)uVar102;
        if (param_2 - 1 < 0xf) {
          uVar104 = 0;
LAB_0001a788:
          uVar101 = uVar104 + 1;
          *(char *)((int)param_1 + uVar104) = cVar92 + (char)uVar104;
          if (uVar101 < param_2) {
            uVar106 = uVar104 + 2;
            *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
            if (uVar106 < param_2) {
              uVar101 = uVar104 + 3;
              *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
              if (uVar101 < param_2) {
                uVar106 = uVar104 + 4;
                *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
                if (uVar106 < param_2) {
                  uVar101 = uVar104 + 5;
                  *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                  if (uVar101 < param_2) {
                    uVar106 = uVar104 + 6;
                    *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
                    if (uVar106 < param_2) {
                      uVar101 = uVar104 + 7;
                      *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                      if (uVar101 < param_2) {
                        uVar106 = uVar104 + 8;
                        *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
                        if (uVar106 < param_2) {
                          uVar101 = uVar104 + 9;
                          *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                          if (uVar101 < param_2) {
                            uVar106 = uVar104 + 10;
                            *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
                            if (uVar106 < param_2) {
                              uVar101 = uVar104 + 0xb;
                              *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                              if (uVar101 < param_2) {
                                uVar106 = uVar104 + 0xc;
                                *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
                                if (uVar106 < param_2) {
                                  uVar101 = uVar104 + 0xd;
                                  *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                                  if (uVar101 < param_2) {
                                    uVar104 = uVar104 + 0xe;
                                    *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
                                    if (uVar104 < param_2) {
                                      *(char *)((int)param_1 + uVar104) = cVar92 + (char)uVar104;
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
        else {
          uVar90 = CONCAT22(CONCAT11(cVar92,cVar92),CONCAT11(cVar92,cVar92));
          uVar67 = CONCAT44(uVar90,uVar90);
          auVar72._8_8_ = uVar67;
          auVar72._0_8_ = uVar67;
          puVar110 = param_1;
          auVar132 = auVar118;
          do {
            auVar149 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar178 << 0x40 | auVar178),4);
            auVar135 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar10 << 0x40 | auVar10),4);
            auVar184 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar9 << 0x40 | auVar9),4);
            auVar179._0_8_ = VectorCopyNarrow(auVar132,4);
            auVar179._8_8_ = VectorCopyNarrow(auVar149,4);
            auVar132 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar133 << 0x40 | auVar133),4);
            auVar173._0_8_ = VectorCopyNarrow(auVar184,4);
            auVar173._8_8_ = VectorCopyNarrow(auVar135,4);
            auVar138._0_8_ = VectorCopyNarrow(auVar179,2);
            auVar138._8_8_ = VectorCopyNarrow(auVar173,2);
            auVar135 = VectorAdd(auVar138,auVar72,1);
            *puVar110 = auVar135._0_8_;
            puVar110[1] = auVar135._8_8_;
            puVar110 = puVar110 + 2;
          } while (puVar110 != (undefined8 *)(uVar107 + (int)param_1));
          uVar104 = uVar107;
          if (uVar107 != param_2) goto LAB_0001a788;
        }
        uVar102 = uVar102 + 1;
        param_1 = (undefined8 *)((int)param_1 + param_4);
      } while (param_3 != uVar102);
      if (param_3 >> 1 == 0) {
        return 0;
      }
      cVar92 = cVar95 * '\x05' + '@';
      uVar102 = param_2 >> 1;
      if (uVar102 == 0) {
        return 0;
      }
      auVar11._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
      auVar11._0_8_ = 0x1000000010;
      auVar12._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
      auVar12._0_8_ = 0x400000004;
      auVar13._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
      auVar13._0_8_ = 0x800000008;
      auVar14._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
      auVar14._0_8_ = 0xc0000000c;
      uVar90 = CONCAT22(CONCAT11(cVar92,cVar92),CONCAT11(cVar92,cVar92));
      uVar67 = CONCAT44(uVar90,uVar90);
      auVar73._8_8_ = uVar67;
      auVar73._0_8_ = uVar67;
      uVar107 = (param_2 >> 5) * 0x10;
      uVar104 = 0;
      auVar124._8_8_ = DAT_0001a6b8;
      auVar124._0_8_ = DAT_0001a6b0;
      do {
        cVar99 = cVar95 * '\x02' + -0x80 + (char)uVar104;
        if (uVar102 - 1 < 0xf) {
          uVar101 = 0;
LAB_0001a988:
          uVar106 = uVar101 + 1;
          *(char *)((int)puVar105 + uVar101 * 2 + 1) = cVar99;
          *(char *)((int)puVar105 + uVar101 * 2) = cVar92 + (char)uVar101;
          if (uVar106 < uVar102) {
            uVar108 = uVar101 + 2;
            *(char *)((int)puVar105 + uVar106 * 2 + 1) = cVar99;
            *(char *)((int)puVar105 + uVar106 * 2) = cVar92 + (char)uVar106;
            if (uVar108 < uVar102) {
              uVar106 = uVar101 + 3;
              *(char *)((int)puVar105 + uVar108 * 2 + 1) = cVar99;
              *(char *)((int)puVar105 + uVar108 * 2) = cVar92 + (char)uVar108;
              if (uVar106 < uVar102) {
                uVar108 = uVar101 + 4;
                *(char *)((int)puVar105 + uVar106 * 2 + 1) = cVar99;
                *(char *)((int)puVar105 + uVar106 * 2) = cVar92 + (char)uVar106;
                if (uVar108 < uVar102) {
                  uVar106 = uVar101 + 5;
                  *(char *)((int)puVar105 + uVar108 * 2 + 1) = cVar99;
                  *(char *)((int)puVar105 + uVar108 * 2) = cVar92 + (char)uVar108;
                  if (uVar106 < uVar102) {
                    uVar108 = uVar101 + 6;
                    *(char *)((int)puVar105 + uVar106 * 2 + 1) = cVar99;
                    *(char *)((int)puVar105 + uVar106 * 2) = cVar92 + (char)uVar106;
                    if (uVar108 < uVar102) {
                      uVar106 = uVar101 + 7;
                      *(char *)((int)puVar105 + uVar108 * 2 + 1) = cVar99;
                      *(char *)((int)puVar105 + uVar108 * 2) = cVar92 + (char)uVar108;
                      if (uVar106 < uVar102) {
                        uVar108 = uVar101 + 8;
                        *(char *)((int)puVar105 + uVar106 * 2 + 1) = cVar99;
                        *(char *)((int)puVar105 + uVar106 * 2) = cVar92 + (char)uVar106;
                        if (uVar108 < uVar102) {
                          uVar106 = uVar101 + 9;
                          *(char *)((int)puVar105 + uVar108 * 2 + 1) = cVar99;
                          *(char *)((int)puVar105 + uVar108 * 2) = cVar92 + (char)uVar108;
                          if (uVar106 < uVar102) {
                            uVar108 = uVar101 + 10;
                            *(char *)((int)puVar105 + uVar106 * 2 + 1) = cVar99;
                            *(char *)((int)puVar105 + uVar106 * 2) = cVar92 + (char)uVar106;
                            if (uVar108 < uVar102) {
                              uVar106 = uVar101 + 0xb;
                              *(char *)((int)puVar105 + uVar108 * 2 + 1) = cVar99;
                              *(char *)((int)puVar105 + uVar108 * 2) = cVar92 + (char)uVar108;
                              if (uVar106 < uVar102) {
                                uVar108 = uVar101 + 0xc;
                                *(char *)((int)puVar105 + uVar106 * 2 + 1) = cVar99;
                                *(char *)((int)puVar105 + uVar106 * 2) = cVar92 + (char)uVar106;
                                if (uVar108 < uVar102) {
                                  uVar106 = uVar101 + 0xd;
                                  *(char *)((int)puVar105 + uVar108 * 2 + 1) = cVar99;
                                  *(char *)((int)puVar105 + uVar108 * 2) = cVar92 + (char)uVar108;
                                  if (uVar106 < uVar102) {
                                    uVar101 = uVar101 + 0xe;
                                    *(char *)((int)puVar105 + uVar106 * 2 + 1) = cVar99;
                                    *(char *)((int)puVar105 + uVar106 * 2) = cVar92 + (char)uVar106;
                                    if (uVar101 < uVar102) {
                                      *(char *)((int)puVar105 + uVar101 * 2 + 1) = cVar99;
                                      *(char *)((int)puVar105 + uVar101 * 2) =
                                           cVar92 + (char)uVar101;
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
        else {
          puVar110 = puVar105;
          auVar132 = auVar124;
          do {
            auVar149 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar12 << 0x40 | auVar12),4);
            auVar135 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar14 << 0x40 | auVar14),4);
            auVar184 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar13 << 0x40 | auVar13),4);
            auVar180._0_8_ = VectorCopyNarrow(auVar132,4);
            auVar180._8_8_ = VectorCopyNarrow(auVar149,4);
            auVar132 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar11 << 0x40 | auVar11),4);
            auVar174._0_8_ = VectorCopyNarrow(auVar184,4);
            auVar174._8_8_ = VectorCopyNarrow(auVar135,4);
            auVar139._0_8_ = VectorCopyNarrow(auVar180,2);
            auVar139._8_8_ = VectorCopyNarrow(auVar174,2);
            VectorAdd(auVar139,auVar73,1);
            puVar86 = (undefined1 *)0x3a0;
            puVar87 = (undefined1 *)0x3b0;
            lVar112 = 8;
            puVar111 = puVar110;
            while( true ) {
              *(undefined1 *)puVar111 = *puVar86;
              *(undefined1 *)((int)puVar111 + 1) = *puVar87;
              puVar111 = (undefined8 *)((int)puVar111 + 2);
              lVar112 = lVar112 + -1;
              if (lVar112 == 0) break;
              puVar86 = puVar86 + 1;
              puVar87 = puVar87 + 1;
            }
            puVar86 = (undefined1 *)0x3a8;
            puVar87 = (undefined1 *)0x3b8;
            lVar112 = 8;
            while( true ) {
              *(undefined1 *)puVar111 = *puVar86;
              *(undefined1 *)((int)puVar111 + 1) = *puVar87;
              puVar111 = (undefined8 *)((int)puVar111 + 2);
              lVar112 = lVar112 + -1;
              if (lVar112 == 0) break;
              puVar86 = puVar86 + 1;
              puVar87 = puVar87 + 1;
            }
            puVar110 = puVar110 + 4;
          } while (puVar110 != puVar105 + (param_2 >> 5) * 4);
          uVar101 = uVar107;
          if (uVar107 != uVar102) goto LAB_0001a988;
        }
        uVar104 = uVar104 + 1;
        puVar105 = (undefined8 *)((int)puVar105 + param_4);
        if (uVar104 == param_3 >> 1) {
          return 0;
        }
      } while( true );
    }
    if (uVar102 < 6) {
      if (uVar102 == 2) {
        if (param_3 == 0) {
          return 0;
        }
        if (param_2 == 0) {
          return 0;
        }
        uVar107 = param_2 & 0xfffffff0;
        auVar55._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar55._0_8_ = 0x1000000010;
        auVar56._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar56._0_8_ = 0x400000004;
        auVar121._8_8_ = DAT_0001c988;
        auVar121._0_8_ = DAT_0001c980;
        auVar57._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar57._0_8_ = 0x800000008;
        auVar58._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar58._0_8_ = 0xc0000000c;
        uVar102 = 0;
        do {
          cVar92 = cVar95 * '\x03' + (char)uVar102;
          if (param_2 - 1 < 0xf) {
            uVar104 = 0;
LAB_0001c788:
            uVar101 = uVar104 + 1;
            *(char *)((int)param_1 + uVar104) = cVar92 + (char)uVar104;
            if (uVar101 < param_2) {
              uVar106 = uVar104 + 2;
              *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
              if (uVar106 < param_2) {
                uVar101 = uVar104 + 3;
                *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                if (uVar101 < param_2) {
                  uVar106 = uVar104 + 4;
                  *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
                  if (uVar106 < param_2) {
                    uVar101 = uVar104 + 5;
                    *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                    if (uVar101 < param_2) {
                      uVar106 = uVar104 + 6;
                      *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
                      if (uVar106 < param_2) {
                        uVar101 = uVar104 + 7;
                        *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                        if (uVar101 < param_2) {
                          uVar106 = uVar104 + 8;
                          *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
                          if (uVar106 < param_2) {
                            uVar101 = uVar104 + 9;
                            *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                            if (uVar101 < param_2) {
                              uVar106 = uVar104 + 10;
                              *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
                              if (uVar106 < param_2) {
                                uVar101 = uVar104 + 0xb;
                                *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                                if (uVar101 < param_2) {
                                  uVar106 = uVar104 + 0xc;
                                  *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
                                  if (uVar106 < param_2) {
                                    uVar101 = uVar104 + 0xd;
                                    *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                                    if (uVar101 < param_2) {
                                      uVar104 = uVar104 + 0xe;
                                      *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
                                      if (uVar104 < param_2) {
                                        *(char *)((int)param_1 + uVar104) = cVar92 + (char)uVar104;
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
          else {
            uVar90 = CONCAT22(CONCAT11(cVar92,cVar92),CONCAT11(cVar92,cVar92));
            uVar67 = CONCAT44(uVar90,uVar90);
            auVar84._8_8_ = uVar67;
            auVar84._0_8_ = uVar67;
            puVar110 = param_1;
            auVar132 = auVar121;
            do {
              auVar149 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar56 << 0x40 | auVar56),4);
              auVar135 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar58 << 0x40 | auVar58),4);
              auVar184 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar57 << 0x40 | auVar57),4);
              auVar171._0_8_ = VectorCopyNarrow(auVar132,4);
              auVar171._8_8_ = VectorCopyNarrow(auVar149,4);
              auVar132 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar55 << 0x40 | auVar55),4);
              auVar159._0_8_ = VectorCopyNarrow(auVar184,4);
              auVar159._8_8_ = VectorCopyNarrow(auVar135,4);
              auVar147._0_8_ = VectorCopyNarrow(auVar171,2);
              auVar147._8_8_ = VectorCopyNarrow(auVar159,2);
              auVar135 = VectorAdd(auVar147,auVar84,1);
              *puVar110 = auVar135._0_8_;
              puVar110[1] = auVar135._8_8_;
              puVar110 = puVar110 + 2;
            } while ((undefined8 *)((int)param_1 + uVar107) != puVar110);
            uVar104 = uVar107;
            if (uVar107 != param_2) goto LAB_0001c788;
          }
          uVar102 = uVar102 + 1;
          param_1 = (undefined8 *)((int)param_1 + param_4);
        } while (param_3 != uVar102);
        uVar102 = param_2 >> 1;
        cVar92 = cVar95 * '\x05' + '@';
        if (uVar102 == 0) {
          return 0;
        }
        auVar59._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar59._0_8_ = 0x1000000010;
        auVar60._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar60._0_8_ = 0x400000004;
        auVar61._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar61._0_8_ = 0x800000008;
        auVar62._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar62._0_8_ = 0xc0000000c;
        uVar90 = CONCAT22(CONCAT11(cVar92,cVar92),CONCAT11(cVar92,cVar92));
        uVar67 = CONCAT44(uVar90,uVar90);
        auVar85._8_8_ = uVar67;
        auVar85._0_8_ = uVar67;
        uVar107 = (param_2 >> 5) * 0x10;
        uVar104 = 0;
        auVar128._8_8_ = DAT_0001c988;
        auVar128._0_8_ = DAT_0001c980;
        do {
          cVar99 = cVar95 * '\x02' + -0x80 + (char)(uVar104 >> 1);
          if (uVar102 - 1 < 0xf) {
            uVar101 = 0;
LAB_0001c9b8:
            uVar106 = uVar101 + 1;
            *(char *)((int)puVar105 + uVar101 * 2) = cVar99;
            *(char *)((int)puVar105 + uVar101 * 2 + 1) = cVar92 + (char)uVar101;
            if (uVar106 < uVar102) {
              uVar108 = uVar101 + 2;
              *(char *)((int)puVar105 + uVar106 * 2) = cVar99;
              *(char *)((int)puVar105 + uVar106 * 2 + 1) = cVar92 + (char)uVar106;
              if (uVar108 < uVar102) {
                uVar106 = uVar101 + 3;
                *(char *)((int)puVar105 + uVar108 * 2) = cVar99;
                *(char *)((int)puVar105 + uVar108 * 2 + 1) = cVar92 + (char)uVar108;
                if (uVar106 < uVar102) {
                  uVar108 = uVar101 + 4;
                  *(char *)((int)puVar105 + uVar106 * 2) = cVar99;
                  *(char *)((int)puVar105 + uVar106 * 2 + 1) = cVar92 + (char)uVar106;
                  if (uVar108 < uVar102) {
                    uVar106 = uVar101 + 5;
                    *(char *)((int)puVar105 + uVar108 * 2) = cVar99;
                    *(char *)((int)puVar105 + uVar108 * 2 + 1) = cVar92 + (char)uVar108;
                    if (uVar106 < uVar102) {
                      uVar108 = uVar101 + 6;
                      *(char *)((int)puVar105 + uVar106 * 2) = cVar99;
                      *(char *)((int)puVar105 + uVar106 * 2 + 1) = cVar92 + (char)uVar106;
                      if (uVar108 < uVar102) {
                        uVar106 = uVar101 + 7;
                        *(char *)((int)puVar105 + uVar108 * 2) = cVar99;
                        *(char *)((int)puVar105 + uVar108 * 2 + 1) = cVar92 + (char)uVar108;
                        if (uVar106 < uVar102) {
                          uVar108 = uVar101 + 8;
                          *(char *)((int)puVar105 + uVar106 * 2) = cVar99;
                          *(char *)((int)puVar105 + uVar106 * 2 + 1) = cVar92 + (char)uVar106;
                          if (uVar108 < uVar102) {
                            uVar106 = uVar101 + 9;
                            *(char *)((int)puVar105 + uVar108 * 2) = cVar99;
                            *(char *)((int)puVar105 + uVar108 * 2 + 1) = cVar92 + (char)uVar108;
                            if (uVar106 < uVar102) {
                              uVar108 = uVar101 + 10;
                              *(char *)((int)puVar105 + uVar106 * 2) = cVar99;
                              *(char *)((int)puVar105 + uVar106 * 2 + 1) = cVar92 + (char)uVar106;
                              if (uVar108 < uVar102) {
                                uVar106 = uVar101 + 0xb;
                                *(char *)((int)puVar105 + uVar108 * 2) = cVar99;
                                *(char *)((int)puVar105 + uVar108 * 2 + 1) = cVar92 + (char)uVar108;
                                if (uVar106 < uVar102) {
                                  uVar108 = uVar101 + 0xc;
                                  *(char *)((int)puVar105 + uVar106 * 2) = cVar99;
                                  *(char *)((int)puVar105 + uVar106 * 2 + 1) =
                                       cVar92 + (char)uVar106;
                                  if (uVar108 < uVar102) {
                                    uVar106 = uVar101 + 0xd;
                                    *(char *)((int)puVar105 + uVar108 * 2) = cVar99;
                                    *(char *)((int)puVar105 + uVar108 * 2 + 1) =
                                         cVar92 + (char)uVar108;
                                    if (uVar106 < uVar102) {
                                      uVar101 = uVar101 + 0xe;
                                      *(char *)((int)puVar105 + uVar106 * 2) = cVar99;
                                      *(char *)((int)puVar105 + uVar106 * 2 + 1) =
                                           cVar92 + (char)uVar106;
                                      if (uVar101 < uVar102) {
                                        *(char *)((int)puVar105 + uVar101 * 2) = cVar99;
                                        *(char *)((int)puVar105 + uVar101 * 2 + 1) =
                                             cVar92 + (char)uVar101;
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
          else {
            puVar110 = puVar105;
            auVar132 = auVar128;
            do {
              auVar149 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar60 << 0x40 | auVar60),4);
              auVar135 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar62 << 0x40 | auVar62),4);
              auVar184 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar61 << 0x40 | auVar61),4);
              auVar172._0_8_ = VectorCopyNarrow(auVar132,4);
              auVar172._8_8_ = VectorCopyNarrow(auVar149,4);
              auVar132 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar59 << 0x40 | auVar59),4);
              auVar160._0_8_ = VectorCopyNarrow(auVar184,4);
              auVar160._8_8_ = VectorCopyNarrow(auVar135,4);
              auVar148._0_8_ = VectorCopyNarrow(auVar172,2);
              auVar148._8_8_ = VectorCopyNarrow(auVar160,2);
              VectorAdd(auVar148,auVar85,1);
              puVar86 = (undefined1 *)0x3c0;
              puVar87 = (undefined1 *)0x3d0;
              lVar112 = 8;
              puVar111 = puVar110;
              while( true ) {
                *(undefined1 *)puVar111 = *puVar86;
                *(undefined1 *)((int)puVar111 + 1) = *puVar87;
                puVar111 = (undefined8 *)((int)puVar111 + 2);
                lVar112 = lVar112 + -1;
                if (lVar112 == 0) break;
                puVar86 = puVar86 + 1;
                puVar87 = puVar87 + 1;
              }
              puVar86 = (undefined1 *)0x3c8;
              puVar87 = (undefined1 *)0x3d8;
              lVar112 = 8;
              while( true ) {
                *(undefined1 *)puVar111 = *puVar86;
                *(undefined1 *)((int)puVar111 + 1) = *puVar87;
                puVar111 = (undefined8 *)((int)puVar111 + 2);
                lVar112 = lVar112 + -1;
                if (lVar112 == 0) break;
                puVar86 = puVar86 + 1;
                puVar87 = puVar87 + 1;
              }
              puVar110 = puVar110 + 4;
            } while (puVar105 + (param_2 >> 5) * 4 != puVar110);
            uVar101 = uVar107;
            if (uVar107 != uVar102) goto LAB_0001c9b8;
          }
          uVar104 = uVar104 + 1;
          puVar105 = (undefined8 *)((int)puVar105 + param_4);
          if (param_3 == uVar104) {
            return 0;
          }
        } while( true );
      }
      if (uVar102 == 4) {
        if (param_3 == 0) {
          return 0;
        }
        if (param_2 != 0) {
          uVar104 = param_2 & 0xfffffff0;
          auVar31._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar31._0_8_ = 0x1000000010;
          auVar32._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar32._0_8_ = 0x400000004;
          auVar33._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar33._0_8_ = 0x800000008;
          auVar116._8_8_ = DAT_0001b3d8;
          auVar116._0_8_ = DAT_0001b3d0;
          auVar34._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar34._0_8_ = 0xc0000000c;
          uVar102 = 0;
          do {
            cVar92 = cVar95 * '\x03' + (char)uVar102;
            if (param_2 - 1 < 0xf) {
              uVar101 = 0;
LAB_0001b4ac:
              uVar106 = uVar101 + 1;
              *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
              if (uVar106 < param_2) {
                uVar108 = uVar101 + 2;
                *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                if (uVar108 < param_2) {
                  uVar106 = uVar101 + 3;
                  *(char *)((int)param_1 + uVar108) = cVar92 + (char)uVar108;
                  if (uVar106 < param_2) {
                    uVar108 = uVar101 + 4;
                    *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                    if (uVar108 < param_2) {
                      uVar106 = uVar101 + 5;
                      *(char *)((int)param_1 + uVar108) = cVar92 + (char)uVar108;
                      if (uVar106 < param_2) {
                        uVar108 = uVar101 + 6;
                        *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                        if (uVar108 < param_2) {
                          uVar106 = uVar101 + 7;
                          *(char *)((int)param_1 + uVar108) = cVar92 + (char)uVar108;
                          if (uVar106 < param_2) {
                            uVar108 = uVar101 + 8;
                            *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                            if (uVar108 < param_2) {
                              uVar106 = uVar101 + 9;
                              *(char *)((int)param_1 + uVar108) = cVar92 + (char)uVar108;
                              if (uVar106 < param_2) {
                                uVar108 = uVar101 + 10;
                                *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                                if (uVar108 < param_2) {
                                  uVar106 = uVar101 + 0xb;
                                  *(char *)((int)param_1 + uVar108) = cVar92 + (char)uVar108;
                                  if (uVar106 < param_2) {
                                    uVar108 = uVar101 + 0xc;
                                    *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                                    if (uVar108 < param_2) {
                                      uVar106 = uVar101 + 0xd;
                                      *(char *)((int)param_1 + uVar108) = cVar92 + (char)uVar108;
                                      if (uVar106 < param_2) {
                                        uVar101 = uVar101 + 0xe;
                                        *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                                        if (uVar101 < param_2) {
                                          *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101
                                          ;
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
            else {
              uVar90 = CONCAT22(CONCAT11(cVar92,cVar92),CONCAT11(cVar92,cVar92));
              uVar67 = CONCAT44(uVar90,uVar90);
              auVar78._8_8_ = uVar67;
              auVar78._0_8_ = uVar67;
              puVar110 = param_1;
              auVar132 = auVar116;
              do {
                auVar149 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar32 << 0x40 | auVar32),4);
                auVar135 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar34 << 0x40 | auVar34),4);
                auVar184 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar33 << 0x40 | auVar33),4);
                auVar166._0_8_ = VectorCopyNarrow(auVar132,4);
                auVar166._8_8_ = VectorCopyNarrow(auVar149,4);
                auVar132 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar31 << 0x40 | auVar31),4);
                auVar154._0_8_ = VectorCopyNarrow(auVar184,4);
                auVar154._8_8_ = VectorCopyNarrow(auVar135,4);
                auVar142._0_8_ = VectorCopyNarrow(auVar166,2);
                auVar142._8_8_ = VectorCopyNarrow(auVar154,2);
                auVar135 = VectorAdd(auVar142,auVar78,1);
                *puVar110 = auVar135._0_8_;
                puVar110[1] = auVar135._8_8_;
                puVar110 = puVar110 + 2;
              } while (puVar110 != (undefined8 *)(uVar104 + (int)param_1));
              uVar101 = uVar104;
              if (param_2 != uVar104) goto LAB_0001b4ac;
            }
            uVar102 = uVar102 + 1;
            param_1 = (undefined8 *)((int)param_1 + param_4);
          } while (param_3 != uVar102);
        }
        param_3 = param_3 >> 1;
        if (param_3 == 0) {
          return 0;
        }
        uVar102 = param_2 >> 1;
        if (uVar102 == 0) {
          return 0;
        }
        uVar104 = 0;
        puVar110 = puVar105;
        do {
          uVar101 = ((param_7 & 0xff) * 2 - 0x80 & 0xff) + uVar104;
          uVar104 = uVar104 + 1;
          memset(puVar110,uVar101 & 0xff,uVar102);
          puVar110 = (undefined8 *)((int)puVar110 + (param_4 >> 1));
        } while (uVar104 != param_3);
        auVar35._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar35._0_8_ = 0x1000000010;
        auVar36._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar36._0_8_ = 0x400000004;
        uVar104 = (param_2 >> 5) * 0x10;
        auVar37._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar37._0_8_ = 0x800000008;
        cVar95 = cVar95 * '\x05' + '@';
        auVar38._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar38._0_8_ = 0xc0000000c;
        puVar105 = (undefined8 *)((int)puVar105 + (uVar107 >> 2));
        auVar117._8_8_ = DAT_0001b3d8;
        auVar117._0_8_ = DAT_0001b3d0;
        uVar107 = 0;
        uVar90 = CONCAT22(CONCAT11(cVar95,cVar95),CONCAT11(cVar95,cVar95));
        uVar67 = CONCAT44(uVar90,uVar90);
        auVar79._8_8_ = uVar67;
        auVar79._0_8_ = uVar67;
        do {
          puVar110 = puVar105;
          auVar132 = auVar117;
          if (uVar102 - 1 < 0xf) {
            uVar101 = 0;
LAB_0001b6d4:
            uVar106 = uVar101 + 1;
            *(char *)((int)puVar105 + uVar101) = cVar95 + (char)uVar101;
            if (uVar106 < uVar102) {
              uVar108 = uVar101 + 2;
              *(char *)((int)puVar105 + uVar106) = cVar95 + (char)uVar106;
              if (uVar108 < uVar102) {
                uVar106 = uVar101 + 3;
                *(char *)((int)puVar105 + uVar108) = cVar95 + (char)uVar108;
                if (uVar106 < uVar102) {
                  uVar108 = uVar101 + 4;
                  *(char *)((int)puVar105 + uVar106) = cVar95 + (char)uVar106;
                  if (uVar108 < uVar102) {
                    uVar106 = uVar101 + 5;
                    *(char *)((int)puVar105 + uVar108) = cVar95 + (char)uVar108;
                    if (uVar106 < uVar102) {
                      uVar108 = uVar101 + 6;
                      *(char *)((int)puVar105 + uVar106) = cVar95 + (char)uVar106;
                      if (uVar108 < uVar102) {
                        uVar106 = uVar101 + 7;
                        *(char *)((int)puVar105 + uVar108) = cVar95 + (char)uVar108;
                        if (uVar106 < uVar102) {
                          uVar108 = uVar101 + 8;
                          *(char *)((int)puVar105 + uVar106) = cVar95 + (char)uVar106;
                          if (uVar108 < uVar102) {
                            uVar106 = uVar101 + 9;
                            *(char *)((int)puVar105 + uVar108) = cVar95 + (char)uVar108;
                            if (uVar106 < uVar102) {
                              uVar108 = uVar101 + 10;
                              *(char *)((int)puVar105 + uVar106) = cVar95 + (char)uVar106;
                              if (uVar108 < uVar102) {
                                uVar106 = uVar101 + 0xb;
                                *(char *)((int)puVar105 + uVar108) = cVar95 + (char)uVar108;
                                if (uVar106 < uVar102) {
                                  uVar108 = uVar101 + 0xc;
                                  *(char *)((int)puVar105 + uVar106) = cVar95 + (char)uVar106;
                                  if (uVar108 < uVar102) {
                                    uVar106 = uVar101 + 0xd;
                                    *(char *)((int)puVar105 + uVar108) = cVar95 + (char)uVar108;
                                    if (uVar106 < uVar102) {
                                      uVar101 = uVar101 + 0xe;
                                      *(char *)((int)puVar105 + uVar106) = cVar95 + (char)uVar106;
                                      if (uVar101 < uVar102) {
                                        *(char *)((int)puVar105 + uVar101) = cVar95 + (char)uVar101;
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
          else {
            do {
              auVar149 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar36 << 0x40 | auVar36),4);
              auVar135 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar38 << 0x40 | auVar38),4);
              auVar184 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar37 << 0x40 | auVar37),4);
              auVar167._0_8_ = VectorCopyNarrow(auVar132,4);
              auVar167._8_8_ = VectorCopyNarrow(auVar149,4);
              auVar132 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar35 << 0x40 | auVar35),4);
              auVar155._0_8_ = VectorCopyNarrow(auVar184,4);
              auVar155._8_8_ = VectorCopyNarrow(auVar135,4);
              auVar143._0_8_ = VectorCopyNarrow(auVar167,2);
              auVar143._8_8_ = VectorCopyNarrow(auVar155,2);
              auVar135 = VectorAdd(auVar143,auVar79,1);
              *puVar110 = auVar135._0_8_;
              puVar110[1] = auVar135._8_8_;
              puVar110 = puVar110 + 2;
            } while (puVar105 + (param_2 >> 5) * 2 != puVar110);
            uVar101 = uVar104;
            if (uVar102 != uVar104) goto LAB_0001b6d4;
          }
          uVar107 = uVar107 + 1;
          puVar105 = (undefined8 *)((int)puVar105 + (param_4 >> 1));
          if (uVar107 == param_3) {
            return 0;
          }
        } while( true );
      }
      if (uVar102 == 0) {
        if (param_3 == 0) {
          return 0;
        }
        if (param_2 == 0) {
          return 0;
        }
        uVar107 = param_2 & 0xfffffff0;
        auVar39._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar39._0_8_ = 0x1000000010;
        auVar40._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar40._0_8_ = 0x400000004;
        auVar41._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar41._0_8_ = 0x800000008;
        auVar120._8_8_ = DAT_0001bad0;
        auVar120._0_8_ = DAT_0001bac8;
        auVar42._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar42._0_8_ = 0xc0000000c;
        uVar102 = 0;
        do {
          cVar92 = cVar95 * '\x03' + (char)uVar102;
          if (param_2 - 1 < 0xf) {
            uVar104 = 0;
LAB_0001b8cc:
            uVar101 = uVar104 + 1;
            *(char *)((int)param_1 + uVar104) = cVar92 + (char)uVar104;
            if (uVar101 < param_2) {
              uVar106 = uVar104 + 2;
              *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
              if (uVar106 < param_2) {
                uVar101 = uVar104 + 3;
                *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                if (uVar101 < param_2) {
                  uVar106 = uVar104 + 4;
                  *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
                  if (uVar106 < param_2) {
                    uVar101 = uVar104 + 5;
                    *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                    if (uVar101 < param_2) {
                      uVar106 = uVar104 + 6;
                      *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
                      if (uVar106 < param_2) {
                        uVar101 = uVar104 + 7;
                        *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                        if (uVar101 < param_2) {
                          uVar106 = uVar104 + 8;
                          *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
                          if (uVar106 < param_2) {
                            uVar101 = uVar104 + 9;
                            *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                            if (uVar101 < param_2) {
                              uVar106 = uVar104 + 10;
                              *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
                              if (uVar106 < param_2) {
                                uVar101 = uVar104 + 0xb;
                                *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                                if (uVar101 < param_2) {
                                  uVar106 = uVar104 + 0xc;
                                  *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
                                  if (uVar106 < param_2) {
                                    uVar101 = uVar104 + 0xd;
                                    *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                                    if (uVar101 < param_2) {
                                      uVar104 = uVar104 + 0xe;
                                      *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
                                      if (uVar104 < param_2) {
                                        *(char *)((int)param_1 + uVar104) = cVar92 + (char)uVar104;
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
          else {
            uVar90 = CONCAT22(CONCAT11(cVar92,cVar92),CONCAT11(cVar92,cVar92));
            uVar67 = CONCAT44(uVar90,uVar90);
            auVar80._8_8_ = uVar67;
            auVar80._0_8_ = uVar67;
            puVar110 = param_1;
            auVar132 = auVar120;
            do {
              auVar149 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar40 << 0x40 | auVar40),4);
              auVar135 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar42 << 0x40 | auVar42),4);
              auVar184 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar41 << 0x40 | auVar41),4);
              auVar168._0_8_ = VectorCopyNarrow(auVar132,4);
              auVar168._8_8_ = VectorCopyNarrow(auVar149,4);
              auVar132 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar39 << 0x40 | auVar39),4);
              auVar156._0_8_ = VectorCopyNarrow(auVar184,4);
              auVar156._8_8_ = VectorCopyNarrow(auVar135,4);
              auVar144._0_8_ = VectorCopyNarrow(auVar168,2);
              auVar144._8_8_ = VectorCopyNarrow(auVar156,2);
              auVar135 = VectorAdd(auVar144,auVar80,1);
              *puVar110 = auVar135._0_8_;
              puVar110[1] = auVar135._8_8_;
              puVar110 = puVar110 + 2;
            } while ((undefined8 *)((int)param_1 + uVar107) != puVar110);
            uVar104 = uVar107;
            if (param_2 != uVar107) goto LAB_0001b8cc;
          }
          uVar102 = uVar102 + 1;
          param_1 = (undefined8 *)((int)param_1 + param_4);
        } while (param_3 != uVar102);
        if (param_3 >> 1 == 0) {
          return 0;
        }
        cVar92 = cVar95 * '\x05' + '@';
        uVar102 = param_2 >> 1;
        if (uVar102 == 0) {
          return 0;
        }
        auVar43._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar43._0_8_ = 0x1000000010;
        auVar44._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar44._0_8_ = 0x400000004;
        auVar45._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar45._0_8_ = 0x800000008;
        auVar46._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar46._0_8_ = 0xc0000000c;
        uVar90 = CONCAT22(CONCAT11(cVar92,cVar92),CONCAT11(cVar92,cVar92));
        uVar67 = CONCAT44(uVar90,uVar90);
        auVar81._8_8_ = uVar67;
        auVar81._0_8_ = uVar67;
        uVar107 = (param_2 >> 5) * 0x10;
        uVar104 = 0;
        auVar126._8_8_ = DAT_0001bad0;
        auVar126._0_8_ = DAT_0001bac8;
        do {
          cVar99 = cVar95 * '\x02' + -0x80 + (char)uVar104;
          if (uVar102 - 1 < 0xf) {
            uVar101 = 0;
LAB_0001bafc:
            uVar106 = uVar101 + 1;
            *(char *)((int)puVar105 + uVar101 * 2) = cVar99;
            *(char *)((int)puVar105 + uVar101 * 2 + 1) = cVar92 + (char)uVar101;
            if (uVar106 < uVar102) {
              uVar108 = uVar101 + 2;
              *(char *)((int)puVar105 + uVar106 * 2) = cVar99;
              *(char *)((int)puVar105 + uVar106 * 2 + 1) = cVar92 + (char)uVar106;
              if (uVar108 < uVar102) {
                uVar106 = uVar101 + 3;
                *(char *)((int)puVar105 + uVar108 * 2) = cVar99;
                *(char *)((int)puVar105 + uVar108 * 2 + 1) = cVar92 + (char)uVar108;
                if (uVar106 < uVar102) {
                  uVar108 = uVar101 + 4;
                  *(char *)((int)puVar105 + uVar106 * 2) = cVar99;
                  *(char *)((int)puVar105 + uVar106 * 2 + 1) = cVar92 + (char)uVar106;
                  if (uVar108 < uVar102) {
                    uVar106 = uVar101 + 5;
                    *(char *)((int)puVar105 + uVar108 * 2) = cVar99;
                    *(char *)((int)puVar105 + uVar108 * 2 + 1) = cVar92 + (char)uVar108;
                    if (uVar106 < uVar102) {
                      uVar108 = uVar101 + 6;
                      *(char *)((int)puVar105 + uVar106 * 2) = cVar99;
                      *(char *)((int)puVar105 + uVar106 * 2 + 1) = cVar92 + (char)uVar106;
                      if (uVar108 < uVar102) {
                        uVar106 = uVar101 + 7;
                        *(char *)((int)puVar105 + uVar108 * 2) = cVar99;
                        *(char *)((int)puVar105 + uVar108 * 2 + 1) = cVar92 + (char)uVar108;
                        if (uVar106 < uVar102) {
                          uVar108 = uVar101 + 8;
                          *(char *)((int)puVar105 + uVar106 * 2) = cVar99;
                          *(char *)((int)puVar105 + uVar106 * 2 + 1) = cVar92 + (char)uVar106;
                          if (uVar108 < uVar102) {
                            uVar106 = uVar101 + 9;
                            *(char *)((int)puVar105 + uVar108 * 2) = cVar99;
                            *(char *)((int)puVar105 + uVar108 * 2 + 1) = cVar92 + (char)uVar108;
                            if (uVar106 < uVar102) {
                              uVar108 = uVar101 + 10;
                              *(char *)((int)puVar105 + uVar106 * 2) = cVar99;
                              *(char *)((int)puVar105 + uVar106 * 2 + 1) = cVar92 + (char)uVar106;
                              if (uVar108 < uVar102) {
                                uVar106 = uVar101 + 0xb;
                                *(char *)((int)puVar105 + uVar108 * 2) = cVar99;
                                *(char *)((int)puVar105 + uVar108 * 2 + 1) = cVar92 + (char)uVar108;
                                if (uVar106 < uVar102) {
                                  uVar108 = uVar101 + 0xc;
                                  *(char *)((int)puVar105 + uVar106 * 2) = cVar99;
                                  *(char *)((int)puVar105 + uVar106 * 2 + 1) =
                                       cVar92 + (char)uVar106;
                                  if (uVar108 < uVar102) {
                                    uVar106 = uVar101 + 0xd;
                                    *(char *)((int)puVar105 + uVar108 * 2) = cVar99;
                                    *(char *)((int)puVar105 + uVar108 * 2 + 1) =
                                         cVar92 + (char)uVar108;
                                    if (uVar106 < uVar102) {
                                      uVar101 = uVar101 + 0xe;
                                      *(char *)((int)puVar105 + uVar106 * 2) = cVar99;
                                      *(char *)((int)puVar105 + uVar106 * 2 + 1) =
                                           cVar92 + (char)uVar106;
                                      if (uVar101 < uVar102) {
                                        *(char *)((int)puVar105 + uVar101 * 2) = cVar99;
                                        *(char *)((int)puVar105 + uVar101 * 2 + 1) =
                                             cVar92 + (char)uVar101;
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
          else {
            puVar110 = puVar105;
            auVar132 = auVar126;
            do {
              auVar149 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar44 << 0x40 | auVar44),4);
              auVar135 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar46 << 0x40 | auVar46),4);
              auVar184 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar45 << 0x40 | auVar45),4);
              auVar169._0_8_ = VectorCopyNarrow(auVar132,4);
              auVar169._8_8_ = VectorCopyNarrow(auVar149,4);
              auVar132 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar43 << 0x40 | auVar43),4);
              auVar157._0_8_ = VectorCopyNarrow(auVar184,4);
              auVar157._8_8_ = VectorCopyNarrow(auVar135,4);
              auVar145._0_8_ = VectorCopyNarrow(auVar169,2);
              auVar145._8_8_ = VectorCopyNarrow(auVar157,2);
              VectorAdd(auVar145,auVar81,1);
              puVar86 = (undefined1 *)0x3e0;
              puVar87 = (undefined1 *)0x3f0;
              lVar112 = 8;
              puVar111 = puVar110;
              while( true ) {
                *(undefined1 *)puVar111 = *puVar86;
                *(undefined1 *)((int)puVar111 + 1) = *puVar87;
                puVar111 = (undefined8 *)((int)puVar111 + 2);
                lVar112 = lVar112 + -1;
                if (lVar112 == 0) break;
                puVar86 = puVar86 + 1;
                puVar87 = puVar87 + 1;
              }
              puVar86 = (undefined1 *)0x3e8;
              puVar87 = (undefined1 *)0x3f8;
              lVar112 = 8;
              while( true ) {
                *(undefined1 *)puVar111 = *puVar86;
                *(undefined1 *)((int)puVar111 + 1) = *puVar87;
                puVar111 = (undefined8 *)((int)puVar111 + 2);
                lVar112 = lVar112 + -1;
                if (lVar112 == 0) break;
                puVar86 = puVar86 + 1;
                puVar87 = puVar87 + 1;
              }
              puVar110 = puVar110 + 4;
            } while (puVar105 + (param_2 >> 5) * 4 != puVar110);
            uVar101 = uVar107;
            if (uVar102 != uVar107) goto LAB_0001bafc;
          }
          uVar104 = uVar104 + 1;
          puVar105 = (undefined8 *)((int)puVar105 + param_4);
          if (uVar104 == param_3 >> 1) {
            return 0;
          }
        } while( true );
      }
    }
    else {
      if (uVar102 == 7) {
        if (param_3 == 0) {
          return 0;
        }
        if (param_2 == 0) {
          return 0;
        }
        uVar107 = param_2 & 0xfffffff0;
        auVar15._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar15._0_8_ = 0x1000000010;
        auVar16._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar16._0_8_ = 0x400000004;
        auVar119._8_8_ = DAT_0001adf8;
        auVar119._0_8_ = DAT_0001adf0;
        auVar17._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar17._0_8_ = 0x800000008;
        auVar18._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar18._0_8_ = 0xc0000000c;
        uVar102 = 0;
        do {
          cVar92 = cVar95 * '\x03' + (char)uVar102;
          if (param_2 - 1 < 0xf) {
            uVar104 = 0;
LAB_0001abfc:
            uVar101 = uVar104 + 1;
            *(char *)((int)param_1 + uVar104) = cVar92 + (char)uVar104;
            if (uVar101 < param_2) {
              uVar106 = uVar104 + 2;
              *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
              if (uVar106 < param_2) {
                uVar101 = uVar104 + 3;
                *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                if (uVar101 < param_2) {
                  uVar106 = uVar104 + 4;
                  *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
                  if (uVar106 < param_2) {
                    uVar101 = uVar104 + 5;
                    *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                    if (uVar101 < param_2) {
                      uVar106 = uVar104 + 6;
                      *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
                      if (uVar106 < param_2) {
                        uVar101 = uVar104 + 7;
                        *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                        if (uVar101 < param_2) {
                          uVar106 = uVar104 + 8;
                          *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
                          if (uVar106 < param_2) {
                            uVar101 = uVar104 + 9;
                            *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                            if (uVar101 < param_2) {
                              uVar106 = uVar104 + 10;
                              *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
                              if (uVar106 < param_2) {
                                uVar101 = uVar104 + 0xb;
                                *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                                if (uVar101 < param_2) {
                                  uVar106 = uVar104 + 0xc;
                                  *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
                                  if (uVar106 < param_2) {
                                    uVar101 = uVar104 + 0xd;
                                    *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                                    if (uVar101 < param_2) {
                                      uVar104 = uVar104 + 0xe;
                                      *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
                                      if (uVar104 < param_2) {
                                        *(char *)((int)param_1 + uVar104) = cVar92 + (char)uVar104;
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
          else {
            uVar90 = CONCAT22(CONCAT11(cVar92,cVar92),CONCAT11(cVar92,cVar92));
            uVar67 = CONCAT44(uVar90,uVar90);
            auVar74._8_8_ = uVar67;
            auVar74._0_8_ = uVar67;
            puVar110 = param_1;
            auVar132 = auVar119;
            do {
              auVar149 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar16 << 0x40 | auVar16),4);
              auVar135 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar18 << 0x40 | auVar18),4);
              auVar184 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar17 << 0x40 | auVar17),4);
              auVar181._0_8_ = VectorCopyNarrow(auVar132,4);
              auVar181._8_8_ = VectorCopyNarrow(auVar149,4);
              auVar132 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar15 << 0x40 | auVar15),4);
              auVar175._0_8_ = VectorCopyNarrow(auVar184,4);
              auVar175._8_8_ = VectorCopyNarrow(auVar135,4);
              auVar162._0_8_ = VectorCopyNarrow(auVar181,2);
              auVar162._8_8_ = VectorCopyNarrow(auVar175,2);
              auVar135 = VectorAdd(auVar162,auVar74,1);
              *puVar110 = auVar135._0_8_;
              puVar110[1] = auVar135._8_8_;
              puVar110 = puVar110 + 2;
            } while (puVar110 != (undefined8 *)(uVar107 + (int)param_1));
            uVar104 = uVar107;
            if (param_2 != uVar107) goto LAB_0001abfc;
          }
          uVar102 = uVar102 + 1;
          param_1 = (undefined8 *)((int)param_1 + param_4);
        } while (param_3 != uVar102);
        uVar102 = param_2 >> 1;
        cVar92 = cVar95 * '\x05' + '@';
        if (uVar102 == 0) {
          return 0;
        }
        auVar19._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar19._0_8_ = 0x1000000010;
        auVar20._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar20._0_8_ = 0x400000004;
        auVar21._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar21._0_8_ = 0x800000008;
        auVar22._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar22._0_8_ = 0xc0000000c;
        uVar90 = CONCAT22(CONCAT11(cVar92,cVar92),CONCAT11(cVar92,cVar92));
        uVar67 = CONCAT44(uVar90,uVar90);
        auVar75._8_8_ = uVar67;
        auVar75._0_8_ = uVar67;
        uVar107 = (param_2 >> 5) * 0x10;
        uVar104 = 0;
        auVar125._8_8_ = DAT_0001adf8;
        auVar125._0_8_ = DAT_0001adf0;
        do {
          cVar99 = cVar95 * '\x02' + -0x80 + (char)(uVar104 >> 1);
          if (uVar102 - 1 < 0xf) {
            uVar101 = 0;
LAB_0001ae00:
            uVar106 = uVar101 + 1;
            *(char *)((int)puVar105 + uVar101 * 2 + 1) = cVar99;
            *(char *)((int)puVar105 + uVar101 * 2) = cVar92 + (char)uVar101;
            if (uVar106 < uVar102) {
              uVar108 = uVar101 + 2;
              *(char *)((int)puVar105 + uVar106 * 2 + 1) = cVar99;
              *(char *)((int)puVar105 + uVar106 * 2) = cVar92 + (char)uVar106;
              if (uVar108 < uVar102) {
                uVar106 = uVar101 + 3;
                *(char *)((int)puVar105 + uVar108 * 2 + 1) = cVar99;
                *(char *)((int)puVar105 + uVar108 * 2) = cVar92 + (char)uVar108;
                if (uVar106 < uVar102) {
                  uVar108 = uVar101 + 4;
                  *(char *)((int)puVar105 + uVar106 * 2 + 1) = cVar99;
                  *(char *)((int)puVar105 + uVar106 * 2) = cVar92 + (char)uVar106;
                  if (uVar108 < uVar102) {
                    uVar106 = uVar101 + 5;
                    *(char *)((int)puVar105 + uVar108 * 2 + 1) = cVar99;
                    *(char *)((int)puVar105 + uVar108 * 2) = cVar92 + (char)uVar108;
                    if (uVar106 < uVar102) {
                      uVar108 = uVar101 + 6;
                      *(char *)((int)puVar105 + uVar106 * 2 + 1) = cVar99;
                      *(char *)((int)puVar105 + uVar106 * 2) = cVar92 + (char)uVar106;
                      if (uVar108 < uVar102) {
                        uVar106 = uVar101 + 7;
                        *(char *)((int)puVar105 + uVar108 * 2 + 1) = cVar99;
                        *(char *)((int)puVar105 + uVar108 * 2) = cVar92 + (char)uVar108;
                        if (uVar106 < uVar102) {
                          uVar108 = uVar101 + 8;
                          *(char *)((int)puVar105 + uVar106 * 2 + 1) = cVar99;
                          *(char *)((int)puVar105 + uVar106 * 2) = cVar92 + (char)uVar106;
                          if (uVar108 < uVar102) {
                            uVar106 = uVar101 + 9;
                            *(char *)((int)puVar105 + uVar108 * 2 + 1) = cVar99;
                            *(char *)((int)puVar105 + uVar108 * 2) = cVar92 + (char)uVar108;
                            if (uVar106 < uVar102) {
                              uVar108 = uVar101 + 10;
                              *(char *)((int)puVar105 + uVar106 * 2 + 1) = cVar99;
                              *(char *)((int)puVar105 + uVar106 * 2) = cVar92 + (char)uVar106;
                              if (uVar108 < uVar102) {
                                uVar106 = uVar101 + 0xb;
                                *(char *)((int)puVar105 + uVar108 * 2 + 1) = cVar99;
                                *(char *)((int)puVar105 + uVar108 * 2) = cVar92 + (char)uVar108;
                                if (uVar106 < uVar102) {
                                  uVar108 = uVar101 + 0xc;
                                  *(char *)((int)puVar105 + uVar106 * 2 + 1) = cVar99;
                                  *(char *)((int)puVar105 + uVar106 * 2) = cVar92 + (char)uVar106;
                                  if (uVar108 < uVar102) {
                                    uVar106 = uVar101 + 0xd;
                                    *(char *)((int)puVar105 + uVar108 * 2 + 1) = cVar99;
                                    *(char *)((int)puVar105 + uVar108 * 2) = cVar92 + (char)uVar108;
                                    if (uVar106 < uVar102) {
                                      uVar101 = uVar101 + 0xe;
                                      *(char *)((int)puVar105 + uVar106 * 2 + 1) = cVar99;
                                      *(char *)((int)puVar105 + uVar106 * 2) =
                                           cVar92 + (char)uVar106;
                                      if (uVar101 < uVar102) {
                                        *(char *)((int)puVar105 + uVar101 * 2 + 1) = cVar99;
                                        *(char *)((int)puVar105 + uVar101 * 2) =
                                             cVar92 + (char)uVar101;
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
          else {
            puVar110 = puVar105;
            auVar132 = auVar125;
            do {
              auVar149 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar20 << 0x40 | auVar20),4);
              auVar135 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar22 << 0x40 | auVar22),4);
              auVar184 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar21 << 0x40 | auVar21),4);
              auVar182._0_8_ = VectorCopyNarrow(auVar132,4);
              auVar182._8_8_ = VectorCopyNarrow(auVar149,4);
              auVar132 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar19 << 0x40 | auVar19),4);
              auVar176._0_8_ = VectorCopyNarrow(auVar184,4);
              auVar176._8_8_ = VectorCopyNarrow(auVar135,4);
              auVar163._0_8_ = VectorCopyNarrow(auVar182,2);
              auVar163._8_8_ = VectorCopyNarrow(auVar176,2);
              VectorAdd(auVar163,auVar75,1);
              puVar86 = (undefined1 *)0x380;
              puVar87 = (undefined1 *)0x390;
              lVar112 = 8;
              puVar111 = puVar110;
              while( true ) {
                *(undefined1 *)puVar111 = *puVar86;
                *(undefined1 *)((int)puVar111 + 1) = *puVar87;
                puVar111 = (undefined8 *)((int)puVar111 + 2);
                lVar112 = lVar112 + -1;
                if (lVar112 == 0) break;
                puVar86 = puVar86 + 1;
                puVar87 = puVar87 + 1;
              }
              puVar86 = (undefined1 *)0x388;
              puVar87 = (undefined1 *)0x398;
              lVar112 = 8;
              while( true ) {
                *(undefined1 *)puVar111 = *puVar86;
                *(undefined1 *)((int)puVar111 + 1) = *puVar87;
                puVar111 = (undefined8 *)((int)puVar111 + 2);
                lVar112 = lVar112 + -1;
                if (lVar112 == 0) break;
                puVar86 = puVar86 + 1;
                puVar87 = puVar87 + 1;
              }
              puVar110 = puVar110 + 4;
            } while (puVar110 != puVar105 + (param_2 >> 5) * 4);
            uVar101 = uVar107;
            if (uVar102 != uVar107) goto LAB_0001ae00;
          }
          uVar104 = uVar104 + 1;
          puVar105 = (undefined8 *)((int)puVar105 + param_4);
          if (param_3 == uVar104) {
            return 0;
          }
        } while( true );
      }
      if (uVar102 < 7) {
        if (param_3 == 0) {
          return 0;
        }
        if (param_2 == 0) {
          return 0;
        }
        uVar104 = param_2 & 0xfffffff0;
        auVar23._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar23._0_8_ = 0x1000000010;
        auVar24._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar24._0_8_ = 0x400000004;
        auVar25._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar25._0_8_ = 0x800000008;
        auVar26._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar26._0_8_ = 0xc0000000c;
        auVar114._8_8_ = DAT_0001adf8;
        auVar114._0_8_ = DAT_0001adf0;
        uVar102 = 0;
        do {
          cVar92 = cVar95 * '\x03' + (char)uVar102;
          if (param_2 - 1 < 0xf) {
            uVar101 = 0;
LAB_0001b07c:
            uVar106 = uVar101 + 1;
            *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
            if (uVar106 < param_2) {
              uVar108 = uVar101 + 2;
              *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
              if (uVar108 < param_2) {
                uVar106 = uVar101 + 3;
                *(char *)((int)param_1 + uVar108) = cVar92 + (char)uVar108;
                if (uVar106 < param_2) {
                  uVar108 = uVar101 + 4;
                  *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                  if (uVar108 < param_2) {
                    uVar106 = uVar101 + 5;
                    *(char *)((int)param_1 + uVar108) = cVar92 + (char)uVar108;
                    if (uVar106 < param_2) {
                      uVar108 = uVar101 + 6;
                      *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                      if (uVar108 < param_2) {
                        uVar106 = uVar101 + 7;
                        *(char *)((int)param_1 + uVar108) = cVar92 + (char)uVar108;
                        if (uVar106 < param_2) {
                          uVar108 = uVar101 + 8;
                          *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                          if (uVar108 < param_2) {
                            uVar106 = uVar101 + 9;
                            *(char *)((int)param_1 + uVar108) = cVar92 + (char)uVar108;
                            if (uVar106 < param_2) {
                              uVar108 = uVar101 + 10;
                              *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                              if (uVar108 < param_2) {
                                uVar106 = uVar101 + 0xb;
                                *(char *)((int)param_1 + uVar108) = cVar92 + (char)uVar108;
                                if (uVar106 < param_2) {
                                  uVar108 = uVar101 + 0xc;
                                  *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                                  if (uVar108 < param_2) {
                                    uVar106 = uVar101 + 0xd;
                                    *(char *)((int)param_1 + uVar108) = cVar92 + (char)uVar108;
                                    if (uVar106 < param_2) {
                                      uVar101 = uVar101 + 0xe;
                                      *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                                      if (uVar101 < param_2) {
                                        *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
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
          else {
            uVar90 = CONCAT22(CONCAT11(cVar92,cVar92),CONCAT11(cVar92,cVar92));
            uVar67 = CONCAT44(uVar90,uVar90);
            auVar76._8_8_ = uVar67;
            auVar76._0_8_ = uVar67;
            puVar110 = param_1;
            auVar132 = auVar114;
            do {
              auVar149 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar24 << 0x40 | auVar24),4);
              auVar135 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar26 << 0x40 | auVar26),4);
              auVar184 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar25 << 0x40 | auVar25),4);
              auVar164._0_8_ = VectorCopyNarrow(auVar132,4);
              auVar164._8_8_ = VectorCopyNarrow(auVar149,4);
              auVar132 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar23 << 0x40 | auVar23),4);
              auVar152._0_8_ = VectorCopyNarrow(auVar184,4);
              auVar152._8_8_ = VectorCopyNarrow(auVar135,4);
              auVar140._0_8_ = VectorCopyNarrow(auVar164,2);
              auVar140._8_8_ = VectorCopyNarrow(auVar152,2);
              auVar135 = VectorAdd(auVar140,auVar76,1);
              *puVar110 = auVar135._0_8_;
              puVar110[1] = auVar135._8_8_;
              puVar110 = puVar110 + 2;
            } while (puVar110 != (undefined8 *)(uVar104 + (int)param_1));
            uVar101 = uVar104;
            if (param_2 != uVar104) goto LAB_0001b07c;
          }
          uVar102 = uVar102 + 1;
          param_1 = (undefined8 *)((int)param_1 + param_4);
        } while (param_3 != uVar102);
        uVar102 = param_2 >> 1;
        if (uVar102 == 0) {
          return 0;
        }
        uVar104 = 0;
        puVar110 = puVar105;
        do {
          uVar101 = uVar104 >> 1;
          uVar104 = uVar104 + 1;
          memset(puVar110,((param_7 & 0xff) * 2 - 0x80 & 0xff) + uVar101 & 0xff,uVar102);
          puVar110 = (undefined8 *)((int)puVar110 + (param_4 >> 1));
        } while (param_3 != uVar104);
        auVar27._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar27._0_8_ = 0x1000000010;
        auVar28._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar28._0_8_ = 0x400000004;
        auVar29._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar29._0_8_ = 0x800000008;
        cVar95 = cVar95 * '\x05' + '@';
        puVar105 = (undefined8 *)((int)puVar105 + (uVar107 >> 1));
        auVar30._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar30._0_8_ = 0xc0000000c;
        uVar107 = (param_2 >> 5) * 0x10;
        auVar115._8_8_ = DAT_0001b3d8;
        auVar115._0_8_ = DAT_0001b3d0;
        uVar104 = 0;
        uVar90 = CONCAT22(CONCAT11(cVar95,cVar95),CONCAT11(cVar95,cVar95));
        uVar67 = CONCAT44(uVar90,uVar90);
        auVar77._8_8_ = uVar67;
        auVar77._0_8_ = uVar67;
        do {
          puVar110 = puVar105;
          auVar132 = auVar115;
          if (uVar102 - 1 < 0xf) {
            uVar101 = 0;
LAB_0001b29c:
            uVar106 = uVar101 + 1;
            *(char *)((int)puVar105 + uVar101) = cVar95 + (char)uVar101;
            if (uVar106 < uVar102) {
              uVar108 = uVar101 + 2;
              *(char *)((int)puVar105 + uVar106) = cVar95 + (char)uVar106;
              if (uVar108 < uVar102) {
                uVar106 = uVar101 + 3;
                *(char *)((int)puVar105 + uVar108) = cVar95 + (char)uVar108;
                if (uVar106 < uVar102) {
                  uVar108 = uVar101 + 4;
                  *(char *)((int)puVar105 + uVar106) = cVar95 + (char)uVar106;
                  if (uVar108 < uVar102) {
                    uVar106 = uVar101 + 5;
                    *(char *)((int)puVar105 + uVar108) = cVar95 + (char)uVar108;
                    if (uVar106 < uVar102) {
                      uVar108 = uVar101 + 6;
                      *(char *)((int)puVar105 + uVar106) = cVar95 + (char)uVar106;
                      if (uVar108 < uVar102) {
                        uVar106 = uVar101 + 7;
                        *(char *)((int)puVar105 + uVar108) = cVar95 + (char)uVar108;
                        if (uVar106 < uVar102) {
                          uVar108 = uVar101 + 8;
                          *(char *)((int)puVar105 + uVar106) = cVar95 + (char)uVar106;
                          if (uVar108 < uVar102) {
                            uVar106 = uVar101 + 9;
                            *(char *)((int)puVar105 + uVar108) = cVar95 + (char)uVar108;
                            if (uVar106 < uVar102) {
                              uVar108 = uVar101 + 10;
                              *(char *)((int)puVar105 + uVar106) = cVar95 + (char)uVar106;
                              if (uVar108 < uVar102) {
                                uVar106 = uVar101 + 0xb;
                                *(char *)((int)puVar105 + uVar108) = cVar95 + (char)uVar108;
                                if (uVar106 < uVar102) {
                                  uVar108 = uVar101 + 0xc;
                                  *(char *)((int)puVar105 + uVar106) = cVar95 + (char)uVar106;
                                  if (uVar108 < uVar102) {
                                    uVar106 = uVar101 + 0xd;
                                    *(char *)((int)puVar105 + uVar108) = cVar95 + (char)uVar108;
                                    if (uVar106 < uVar102) {
                                      uVar101 = uVar101 + 0xe;
                                      *(char *)((int)puVar105 + uVar106) = cVar95 + (char)uVar106;
                                      if (uVar101 < uVar102) {
                                        *(char *)((int)puVar105 + uVar101) = cVar95 + (char)uVar101;
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
          else {
            do {
              auVar149 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar28 << 0x40 | auVar28),4);
              auVar135 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar30 << 0x40 | auVar30),4);
              auVar184 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar29 << 0x40 | auVar29),4);
              auVar165._0_8_ = VectorCopyNarrow(auVar132,4);
              auVar165._8_8_ = VectorCopyNarrow(auVar149,4);
              auVar132 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar27 << 0x40 | auVar27),4);
              auVar153._0_8_ = VectorCopyNarrow(auVar184,4);
              auVar153._8_8_ = VectorCopyNarrow(auVar135,4);
              auVar141._0_8_ = VectorCopyNarrow(auVar165,2);
              auVar141._8_8_ = VectorCopyNarrow(auVar153,2);
              auVar135 = VectorAdd(auVar141,auVar77,1);
              *puVar110 = auVar135._0_8_;
              puVar110[1] = auVar135._8_8_;
              puVar110 = puVar110 + 2;
            } while (puVar110 != puVar105 + (param_2 >> 5) * 2);
            uVar101 = uVar107;
            if (uVar102 != uVar107) goto LAB_0001b29c;
          }
          uVar104 = uVar104 + 1;
          puVar105 = (undefined8 *)((int)puVar105 + (param_4 >> 1));
          if (param_3 == uVar104) {
            return 0;
          }
        } while( true );
      }
      if (uVar102 == 8) {
        if (param_3 == 0) {
          return 0;
        }
        uVar102 = param_2 >> 1;
        cVar92 = cVar95 * '\x05' + '@';
        if (uVar102 == 0) {
          return 0;
        }
        auVar51._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar51._0_8_ = 0x1000000010;
        auVar52._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar52._0_8_ = 0x400000004;
        uVar90 = CONCAT22(CONCAT11(cVar92,cVar92),CONCAT11(cVar92,cVar92));
        auVar98._12_4_ = uVar90;
        auVar98._8_4_ = uVar90;
        auVar53._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar53._0_8_ = 0x800000008;
        auVar54._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar54._0_8_ = 0xc0000000c;
        auVar66._8_8_ = SUB158(SUB1615((undefined1  [16])0x0,1),7);
        auVar66._0_8_ = 0x101010101010101;
        uVar107 = (param_2 >> 5) * 0x10;
        uVar104 = 0;
        do {
          cVar99 = cVar95 * '\x03' + (char)uVar104;
          cVar93 = cVar95 * '\x02' + -0x80 + (char)(uVar104 >> 1);
          if (uVar102 - 1 < 0xf) {
            uVar101 = 0;
LAB_0001c3a4:
            uVar106 = uVar101 + 1;
            cVar91 = cVar99 + (char)uVar101 * '\x02';
            *(char *)((int)param_1 + uVar101 * 4) = cVar91;
            *(char *)((int)param_1 + uVar101 * 4 + 3) = cVar92 + (char)uVar101;
            *(char *)((int)param_1 + uVar101 * 4 + 2) = cVar91 + '\x01';
            *(char *)((int)param_1 + uVar101 * 4 + 1) = cVar93;
            if (uVar106 < uVar102) {
              uVar108 = uVar101 + 2;
              cVar91 = cVar99 + (char)uVar106 * '\x02';
              *(char *)((int)param_1 + uVar106 * 4) = cVar91;
              *(char *)((int)param_1 + uVar106 * 4 + 3) = cVar92 + (char)uVar106;
              *(char *)((int)param_1 + uVar106 * 4 + 2) = cVar91 + '\x01';
              *(char *)((int)param_1 + uVar106 * 4 + 1) = cVar93;
              if (uVar108 < uVar102) {
                uVar106 = uVar101 + 3;
                cVar91 = cVar99 + (char)uVar108 * '\x02';
                *(char *)((int)param_1 + uVar108 * 4) = cVar91;
                *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + (char)uVar108;
                *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar91 + '\x01';
                *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar93;
                if (uVar106 < uVar102) {
                  uVar108 = uVar101 + 4;
                  cVar91 = cVar99 + (char)uVar106 * '\x02';
                  *(char *)((int)param_1 + uVar106 * 4) = cVar91;
                  *(char *)((int)param_1 + uVar106 * 4 + 3) = cVar92 + (char)uVar106;
                  *(char *)((int)param_1 + uVar106 * 4 + 2) = cVar91 + '\x01';
                  *(char *)((int)param_1 + uVar106 * 4 + 1) = cVar93;
                  if (uVar108 < uVar102) {
                    uVar106 = uVar101 + 5;
                    cVar91 = cVar99 + (char)uVar108 * '\x02';
                    *(char *)((int)param_1 + uVar108 * 4) = cVar91;
                    *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + (char)uVar108;
                    *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar91 + '\x01';
                    *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar93;
                    if (uVar106 < uVar102) {
                      uVar108 = uVar101 + 6;
                      cVar91 = cVar99 + (char)uVar106 * '\x02';
                      *(char *)((int)param_1 + uVar106 * 4) = cVar91;
                      *(char *)((int)param_1 + uVar106 * 4 + 3) = cVar92 + (char)uVar106;
                      *(char *)((int)param_1 + uVar106 * 4 + 2) = cVar91 + '\x01';
                      *(char *)((int)param_1 + uVar106 * 4 + 1) = cVar93;
                      if (uVar108 < uVar102) {
                        uVar106 = uVar101 + 7;
                        cVar91 = cVar99 + (char)uVar108 * '\x02';
                        *(char *)((int)param_1 + uVar108 * 4) = cVar91;
                        *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + (char)uVar108;
                        *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar91 + '\x01';
                        *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar93;
                        if (uVar106 < uVar102) {
                          uVar108 = uVar101 + 8;
                          cVar91 = cVar99 + (char)uVar106 * '\x02';
                          *(char *)((int)param_1 + uVar106 * 4) = cVar91;
                          *(char *)((int)param_1 + uVar106 * 4 + 3) = cVar92 + (char)uVar106;
                          *(char *)((int)param_1 + uVar106 * 4 + 2) = cVar91 + '\x01';
                          *(char *)((int)param_1 + uVar106 * 4 + 1) = cVar93;
                          if (uVar108 < uVar102) {
                            uVar106 = uVar101 + 9;
                            cVar91 = cVar99 + (char)uVar108 * '\x02';
                            *(char *)((int)param_1 + uVar108 * 4) = cVar91;
                            *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + (char)uVar108;
                            *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar91 + '\x01';
                            *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar93;
                            if (uVar106 < uVar102) {
                              uVar108 = uVar101 + 10;
                              cVar91 = cVar99 + (char)uVar106 * '\x02';
                              *(char *)((int)param_1 + uVar106 * 4) = cVar91;
                              *(char *)((int)param_1 + uVar106 * 4 + 3) = cVar92 + (char)uVar106;
                              *(char *)((int)param_1 + uVar106 * 4 + 2) = cVar91 + '\x01';
                              *(char *)((int)param_1 + uVar106 * 4 + 1) = cVar93;
                              if (uVar108 < uVar102) {
                                uVar106 = uVar101 + 0xb;
                                cVar91 = cVar99 + (char)uVar108 * '\x02';
                                *(char *)((int)param_1 + uVar108 * 4) = cVar91;
                                *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + (char)uVar108;
                                *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar91 + '\x01';
                                *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar93;
                                if (uVar106 < uVar102) {
                                  uVar108 = uVar101 + 0xc;
                                  cVar91 = cVar99 + (char)uVar106 * '\x02';
                                  *(char *)((int)param_1 + uVar106 * 4) = cVar91;
                                  *(char *)((int)param_1 + uVar106 * 4 + 3) = cVar92 + (char)uVar106
                                  ;
                                  *(char *)((int)param_1 + uVar106 * 4 + 2) = cVar91 + '\x01';
                                  *(char *)((int)param_1 + uVar106 * 4 + 1) = cVar93;
                                  if (uVar108 < uVar102) {
                                    uVar106 = uVar101 + 0xd;
                                    cVar91 = cVar99 + (char)uVar108 * '\x02';
                                    *(char *)((int)param_1 + uVar108 * 4) = cVar91;
                                    *(char *)((int)param_1 + uVar108 * 4 + 3) =
                                         cVar92 + (char)uVar108;
                                    *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar91 + '\x01';
                                    *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar93;
                                    if (uVar106 < uVar102) {
                                      uVar101 = uVar101 + 0xe;
                                      cVar91 = cVar99 + (char)uVar106 * '\x02';
                                      *(char *)((int)param_1 + uVar106 * 4) = cVar91;
                                      *(char *)((int)param_1 + uVar106 * 4 + 3) =
                                           cVar92 + (char)uVar106;
                                      *(char *)((int)param_1 + uVar106 * 4 + 2) = cVar91 + '\x01';
                                      *(char *)((int)param_1 + uVar106 * 4 + 1) = cVar93;
                                      if (uVar101 < uVar102) {
                                        cVar99 = cVar99 + (char)uVar101 * '\x02';
                                        *(char *)((int)param_1 + uVar101 * 4) = cVar99;
                                        *(char *)((int)param_1 + uVar101 * 4 + 3) =
                                             cVar92 + (char)uVar101;
                                        *(char *)((int)param_1 + uVar101 * 4 + 2) = cVar99 + '\x01';
                                        *(char *)((int)param_1 + uVar101 * 4 + 1) = cVar93;
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
          else {
            uVar94 = CONCAT22(CONCAT11(cVar99,cVar99),CONCAT11(cVar99,cVar99));
            uVar67 = CONCAT44(uVar94,uVar94);
            auVar83._8_8_ = uVar67;
            auVar83._0_8_ = uVar67;
            auVar134._8_8_ = DAT_0001c278;
            auVar134._0_8_ = DAT_0001c270;
            puVar105 = param_1;
            do {
              auVar132 = VectorAdd(auVar134,*(undefined1 (*) [16])(auVar52 << 0x40 | auVar52),4);
              auVar135 = VectorAdd(auVar134,*(undefined1 (*) [16])(auVar54 << 0x40 | auVar54),4);
              puVar111 = puVar105 + 8;
              auVar149 = VectorAdd(auVar134,*(undefined1 (*) [16])(auVar53 << 0x40 | auVar53),4);
              auVar158._0_8_ = VectorCopyNarrow(auVar134,4);
              auVar158._8_8_ = VectorCopyNarrow(auVar132,4);
              auVar134 = VectorAdd(auVar134,*(undefined1 (*) [16])(auVar51 << 0x40 | auVar51),4);
              auVar146._0_8_ = VectorCopyNarrow(auVar149,4);
              auVar146._8_8_ = VectorCopyNarrow(auVar135,4);
              auVar170._0_8_ = VectorCopyNarrow(auVar158,2);
              auVar170._8_8_ = VectorCopyNarrow(auVar146,2);
              auVar132 = VectorAdd(auVar170,auVar170,1);
              auVar132 = VectorAdd(auVar132,auVar83,1);
              VectorAdd(auVar132,*(undefined1 (*) [16])(auVar66 << 0x40 | auVar66),1);
              auVar98._4_4_ = uVar90;
              auVar98._0_4_ = uVar90;
              VectorAdd(auVar170,auVar98,1);
              puVar86 = (undefined1 *)0x330;
              puVar87 = (undefined1 *)0x340;
              puVar88 = (undefined1 *)0x350;
              puVar89 = (undefined1 *)0x360;
              lVar112 = 8;
              puVar110 = puVar105;
              while( true ) {
                *(undefined1 *)puVar110 = *puVar86;
                *(undefined1 *)((int)puVar110 + 1) = *puVar87;
                *(undefined1 *)((int)puVar110 + 2) = *puVar88;
                *(undefined1 *)((int)puVar110 + 3) = *puVar89;
                puVar110 = (undefined8 *)((int)puVar110 + 4);
                lVar112 = lVar112 + -1;
                if (lVar112 == 0) break;
                puVar86 = puVar86 + 1;
                puVar87 = puVar87 + 1;
                puVar88 = puVar88 + 1;
                puVar89 = puVar89 + 1;
              }
              puVar105 = puVar105 + 4;
              puVar86 = (undefined1 *)0x338;
              puVar87 = (undefined1 *)0x348;
              puVar88 = (undefined1 *)0x358;
              puVar89 = (undefined1 *)0x368;
              lVar112 = 8;
              while( true ) {
                *(undefined1 *)puVar105 = *puVar86;
                *(undefined1 *)((int)puVar105 + 1) = *puVar87;
                *(undefined1 *)((int)puVar105 + 2) = *puVar88;
                *(undefined1 *)((int)puVar105 + 3) = *puVar89;
                puVar105 = (undefined8 *)((int)puVar105 + 4);
                lVar112 = lVar112 + -1;
                if (lVar112 == 0) break;
                puVar86 = puVar86 + 1;
                puVar87 = puVar87 + 1;
                puVar88 = puVar88 + 1;
                puVar89 = puVar89 + 1;
              }
              puVar105 = puVar111;
            } while (puVar111 != param_1 + (param_2 >> 5) * 8);
            uVar101 = uVar107;
            if (uVar102 != uVar107) goto LAB_0001c3a4;
          }
          uVar104 = uVar104 + 1;
          param_1 = (undefined8 *)((int)param_1 + param_4);
          if (param_3 == uVar104) {
            return 0;
          }
        } while( true );
      }
      if (uVar102 == 9) {
        if (param_3 == 0) {
          return 0;
        }
        uVar102 = param_2 >> 1;
        cVar92 = cVar95 * '\x05' + '@';
        if (uVar102 == 0) {
          return 0;
        }
        auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar1._0_8_ = 0x800000008;
        auVar2._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar2._0_8_ = 0xc0000000c;
        auVar63._8_8_ = SUB158(SUB1615((undefined1  [16])0x0,1),7);
        auVar63._0_8_ = 0x101010101010101;
        uVar90 = CONCAT22(CONCAT11(cVar92,cVar92),CONCAT11(cVar92,cVar92));
        uVar67 = CONCAT44(uVar90,uVar90);
        auVar68._8_8_ = uVar67;
        auVar68._0_8_ = uVar67;
        uVar107 = (param_2 >> 5) * 0x10;
        uVar104 = 0;
        auVar122._8_8_ = DAT_00019cb0;
        auVar122._0_8_ = DAT_00019ca8;
        do {
          cVar99 = cVar95 * '\x03' + (char)uVar104;
          cVar93 = cVar95 * '\x02' + -0x80 + (char)(uVar104 >> 1);
          if (uVar102 - 1 < 0xf) {
            uVar101 = 0;
LAB_00019980:
            uVar106 = uVar101 + 1;
            cVar91 = cVar99 + (char)uVar101 * '\x02';
            *(char *)((int)param_1 + uVar101 * 4) = cVar91;
            *(char *)((int)param_1 + uVar101 * 4 + 1) = cVar92 + (char)uVar101;
            *(char *)((int)param_1 + uVar101 * 4 + 2) = cVar91 + '\x01';
            *(char *)((int)param_1 + uVar101 * 4 + 3) = cVar93;
            if (uVar106 < uVar102) {
              uVar108 = uVar101 + 2;
              cVar91 = cVar99 + (char)uVar106 * '\x02';
              *(char *)((int)param_1 + uVar106 * 4) = cVar91;
              *(char *)((int)param_1 + uVar106 * 4 + 1) = cVar92 + (char)uVar106;
              *(char *)((int)param_1 + uVar106 * 4 + 2) = cVar91 + '\x01';
              *(char *)((int)param_1 + uVar106 * 4 + 3) = cVar93;
              if (uVar108 < uVar102) {
                uVar106 = uVar101 + 3;
                cVar91 = cVar99 + (char)uVar108 * '\x02';
                *(char *)((int)param_1 + uVar108 * 4) = cVar91;
                *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92 + (char)uVar108;
                *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar91 + '\x01';
                *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar93;
                if (uVar106 < uVar102) {
                  uVar108 = uVar101 + 4;
                  cVar91 = cVar99 + (char)uVar106 * '\x02';
                  *(char *)((int)param_1 + uVar106 * 4) = cVar91;
                  *(char *)((int)param_1 + uVar106 * 4 + 1) = cVar92 + (char)uVar106;
                  *(char *)((int)param_1 + uVar106 * 4 + 2) = cVar91 + '\x01';
                  *(char *)((int)param_1 + uVar106 * 4 + 3) = cVar93;
                  if (uVar108 < uVar102) {
                    uVar106 = uVar101 + 5;
                    cVar91 = cVar99 + (char)uVar108 * '\x02';
                    *(char *)((int)param_1 + uVar108 * 4) = cVar91;
                    *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92 + (char)uVar108;
                    *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar91 + '\x01';
                    *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar93;
                    if (uVar106 < uVar102) {
                      uVar108 = uVar101 + 6;
                      cVar91 = cVar99 + (char)uVar106 * '\x02';
                      *(char *)((int)param_1 + uVar106 * 4) = cVar91;
                      *(char *)((int)param_1 + uVar106 * 4 + 1) = cVar92 + (char)uVar106;
                      *(char *)((int)param_1 + uVar106 * 4 + 2) = cVar91 + '\x01';
                      *(char *)((int)param_1 + uVar106 * 4 + 3) = cVar93;
                      if (uVar108 < uVar102) {
                        uVar106 = uVar101 + 7;
                        cVar91 = cVar99 + (char)uVar108 * '\x02';
                        *(char *)((int)param_1 + uVar108 * 4) = cVar91;
                        *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92 + (char)uVar108;
                        *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar91 + '\x01';
                        *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar93;
                        if (uVar106 < uVar102) {
                          uVar108 = uVar101 + 8;
                          cVar91 = cVar99 + (char)uVar106 * '\x02';
                          *(char *)((int)param_1 + uVar106 * 4) = cVar91;
                          *(char *)((int)param_1 + uVar106 * 4 + 1) = cVar92 + (char)uVar106;
                          *(char *)((int)param_1 + uVar106 * 4 + 2) = cVar91 + '\x01';
                          *(char *)((int)param_1 + uVar106 * 4 + 3) = cVar93;
                          if (uVar108 < uVar102) {
                            uVar106 = uVar101 + 9;
                            cVar91 = cVar99 + (char)uVar108 * '\x02';
                            *(char *)((int)param_1 + uVar108 * 4) = cVar91;
                            *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92 + (char)uVar108;
                            *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar91 + '\x01';
                            *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar93;
                            if (uVar106 < uVar102) {
                              uVar108 = uVar101 + 10;
                              cVar91 = cVar99 + (char)uVar106 * '\x02';
                              *(char *)((int)param_1 + uVar106 * 4) = cVar91;
                              *(char *)((int)param_1 + uVar106 * 4 + 1) = cVar92 + (char)uVar106;
                              *(char *)((int)param_1 + uVar106 * 4 + 2) = cVar91 + '\x01';
                              *(char *)((int)param_1 + uVar106 * 4 + 3) = cVar93;
                              if (uVar108 < uVar102) {
                                uVar106 = uVar101 + 0xb;
                                cVar91 = cVar99 + (char)uVar108 * '\x02';
                                *(char *)((int)param_1 + uVar108 * 4) = cVar91;
                                *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92 + (char)uVar108;
                                *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar91 + '\x01';
                                *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar93;
                                if (uVar106 < uVar102) {
                                  uVar108 = uVar101 + 0xc;
                                  cVar91 = cVar99 + (char)uVar106 * '\x02';
                                  *(char *)((int)param_1 + uVar106 * 4) = cVar91;
                                  *(char *)((int)param_1 + uVar106 * 4 + 1) = cVar92 + (char)uVar106
                                  ;
                                  *(char *)((int)param_1 + uVar106 * 4 + 2) = cVar91 + '\x01';
                                  *(char *)((int)param_1 + uVar106 * 4 + 3) = cVar93;
                                  if (uVar108 < uVar102) {
                                    uVar106 = uVar101 + 0xd;
                                    cVar91 = cVar99 + (char)uVar108 * '\x02';
                                    *(char *)((int)param_1 + uVar108 * 4) = cVar91;
                                    *(char *)((int)param_1 + uVar108 * 4 + 1) =
                                         cVar92 + (char)uVar108;
                                    *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar91 + '\x01';
                                    *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar93;
                                    if (uVar106 < uVar102) {
                                      uVar101 = uVar101 + 0xe;
                                      cVar91 = cVar99 + (char)uVar106 * '\x02';
                                      *(char *)((int)param_1 + uVar106 * 4) = cVar91;
                                      *(char *)((int)param_1 + uVar106 * 4 + 1) =
                                           cVar92 + (char)uVar106;
                                      *(char *)((int)param_1 + uVar106 * 4 + 2) = cVar91 + '\x01';
                                      *(char *)((int)param_1 + uVar106 * 4 + 3) = cVar93;
                                      if (uVar101 < uVar102) {
                                        cVar99 = cVar99 + (char)uVar101 * '\x02';
                                        *(char *)((int)param_1 + uVar101 * 4) = cVar99;
                                        *(char *)((int)param_1 + uVar101 * 4 + 1) =
                                             cVar92 + (char)uVar101;
                                        *(char *)((int)param_1 + uVar101 * 4 + 2) = cVar99 + '\x01';
                                        *(char *)((int)param_1 + uVar101 * 4 + 3) = cVar93;
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
          else {
            uVar90 = CONCAT22(CONCAT11(cVar99,cVar99),CONCAT11(cVar99,cVar99));
            uVar67 = CONCAT44(uVar90,uVar90);
            auVar69._8_8_ = uVar67;
            auVar69._0_8_ = uVar67;
            puVar105 = param_1;
            auVar132 = auVar122;
            do {
              auVar3._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
              auVar3._0_8_ = 0x400000004;
              auVar149 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar2 << 0x40 | auVar2),4);
              puVar111 = puVar105 + 8;
              auVar184 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar1 << 0x40 | auVar1),4);
              auVar135 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar3 << 0x40 | auVar3),4);
              auVar177._0_8_ = VectorCopyNarrow(auVar132,4);
              auVar177._8_8_ = VectorCopyNarrow(auVar135,4);
              auVar4._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
              auVar4._0_8_ = 0x1000000010;
              auVar132 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar4 << 0x40 | auVar4),4);
              auVar136._0_8_ = VectorCopyNarrow(auVar184,4);
              auVar136._8_8_ = VectorCopyNarrow(auVar149,4);
              auVar150._0_8_ = VectorCopyNarrow(auVar177,2);
              auVar150._8_8_ = VectorCopyNarrow(auVar136,2);
              auVar135 = VectorAdd(auVar150,auVar150,1);
              VectorAdd(auVar150,auVar68,1);
              auVar135 = VectorAdd(auVar135,auVar69,1);
              VectorAdd(auVar135,*(undefined1 (*) [16])(auVar63 << 0x40 | auVar63),1);
              puVar86 = (undefined1 *)0x3f0;
              puVar87 = (undefined1 *)0x400;
              puVar88 = (undefined1 *)0x410;
              puVar89 = (undefined1 *)0x420;
              lVar112 = 8;
              puVar110 = puVar105;
              while( true ) {
                *(undefined1 *)puVar110 = *puVar86;
                *(undefined1 *)((int)puVar110 + 1) = *puVar87;
                *(undefined1 *)((int)puVar110 + 2) = *puVar88;
                *(undefined1 *)((int)puVar110 + 3) = *puVar89;
                puVar110 = (undefined8 *)((int)puVar110 + 4);
                lVar112 = lVar112 + -1;
                if (lVar112 == 0) break;
                puVar86 = puVar86 + 1;
                puVar87 = puVar87 + 1;
                puVar88 = puVar88 + 1;
                puVar89 = puVar89 + 1;
              }
              puVar105 = puVar105 + 4;
              puVar86 = (undefined1 *)0x3f8;
              puVar87 = (undefined1 *)0x408;
              puVar88 = (undefined1 *)0x418;
              puVar89 = (undefined1 *)0x428;
              lVar112 = 8;
              while( true ) {
                *(undefined1 *)puVar105 = *puVar86;
                *(undefined1 *)((int)puVar105 + 1) = *puVar87;
                *(undefined1 *)((int)puVar105 + 2) = *puVar88;
                *(undefined1 *)((int)puVar105 + 3) = *puVar89;
                puVar105 = (undefined8 *)((int)puVar105 + 4);
                lVar112 = lVar112 + -1;
                if (lVar112 == 0) break;
                puVar86 = puVar86 + 1;
                puVar87 = puVar87 + 1;
                puVar88 = puVar88 + 1;
                puVar89 = puVar89 + 1;
              }
              puVar105 = puVar111;
            } while (puVar111 != param_1 + (param_2 >> 5) * 8);
            uVar101 = uVar107;
            if (uVar102 != uVar107) goto LAB_00019980;
          }
          uVar104 = uVar104 + 1;
          param_1 = (undefined8 *)((int)param_1 + param_4);
          if (param_3 == uVar104) {
            return 0;
          }
        } while( true );
      }
    }
LAB_00019ce0:
    _mpp_err(DAT_00019cc4 + 0x19d00,DAT_00019cc0 + 0x19cfc,DAT_00019cbc + 0x19cf8,param_6);
    return 0xffffffff;
  }
  local_10c = param_4;
  local_84 = param_1;
  if (0x10005 < uVar102) {
    if (0x10007 < uVar102) {
      if (0x1000d < uVar102) goto LAB_00019ce0;
      pcVar103 = *(code **)(*(int *)(iVar100 + DAT_0001a0c4) + (param_6 - 0x10000) * 4);
      if (*(int *)(DAT_0001a0a8 + 0x19f48) == 0) {
        if ((int)param_4 < (int)(param_2 * 4)) {
          iVar100 = DAT_0001c9ac + 0x1ccf0;
          _mpp_log(iVar100,DAT_0001c9b0 + 0x1ccfc,0,param_4,param_2,4);
          _mpp_log(iVar100,DAT_0001c9b4 + 0x1cd28,0,param_4,4,param_4 << 2);
          goto LAB_0001cc38;
        }
      }
      else {
LAB_0001cc38:
        local_10c = param_4 << 2;
        *(undefined4 *)(DAT_0001c9a8 + 0x1cc4c) = 1;
      }
      if (*(int *)(DAT_0001a0ac + 0x19f70) == 0) {
        uVar102 = local_10c + 0x1f & 0xffffffe0;
        if (local_10c == uVar102) goto LAB_00019fe4;
        iVar100 = DAT_0001a0b0 + 0x19fa0;
        _mpp_log(iVar100,DAT_0001a0b8 + 0x19fb4,0,DAT_0001a0b4 + 0x19fac,4);
        _mpp_log(iVar100,DAT_0001a0bc + 0x19fcc,0,uVar102);
      }
      local_10c = local_10c + 0x1f & 0xffffffe0;
      *(undefined4 *)(DAT_0001a0c0 + 0x19fe4) = 1;
LAB_00019fe4:
      if (param_3 == 0) {
        return 0;
      }
      if (param_2 == 0) {
        return 0;
      }
      uVar102 = 0;
      do {
        uVar107 = 0;
        puVar105 = local_84;
        do {
          uVar104 = uVar107 + 1;
          FUN_00017964(&local_74,&local_70,local_6c,uVar107,uVar102,param_7);
          (*pcVar103)(puVar105,local_74,local_70,local_6c[0],
                      ((param_6 ^ 0x1000000) & 0x1ffffff) >> 0x18);
          uVar107 = uVar104;
          puVar105 = (undefined8 *)((int)puVar105 + 4);
        } while (param_2 != uVar104);
        uVar102 = uVar102 + 1;
        local_84 = (undefined8 *)((int)local_84 + local_10c);
      } while (param_3 != uVar102);
      return 0;
    }
    pcVar103 = *(code **)(*(int *)(iVar100 + DAT_0001a0c4) + (param_6 - 0x10000) * 4);
    if (*(int *)(DAT_0001a0c8 + 0x1a100) == 0) {
      if ((int)param_4 < (int)(param_2 * 3)) {
        iVar100 = param_4 * 2;
        iVar109 = DAT_0001c99c + 0x1cbec;
        _mpp_log(iVar109,DAT_0001c9a0 + 0x1cbf8,0,param_4,param_2,3);
        _mpp_log(iVar109,DAT_0001c9a4 + 0x1cc28,0,param_4,3,param_4 * 3);
        goto LAB_0001a11c;
      }
    }
    else {
      iVar100 = param_4 << 1;
LAB_0001a11c:
      local_10c = iVar100 + param_4;
      *(undefined4 *)(DAT_0001a0cc + 0x1a134) = 1;
    }
    if (*(int *)(DAT_0001a0d0 + 0x1a140) == 0) {
      uVar102 = local_10c + 0x17 & 0xffffffe8;
      if (local_10c == uVar102) goto LAB_0001a1b4;
      iVar100 = DAT_0001a0d4 + 0x1a170;
      _mpp_log(iVar100,DAT_0001a0dc + 0x1a184,0,DAT_0001a0d8 + 0x1a17c,3);
      _mpp_log(iVar100,DAT_0001a0e0 + 0x1a19c,0,uVar102);
    }
    local_10c = local_10c + 0x17 & 0xffffffe8;
    *(undefined4 *)(DAT_0001a0e4 + 0x1a1b4) = 1;
LAB_0001a1b4:
    if (param_3 == 0) {
      return 0;
    }
    if (param_2 == 0) {
      return 0;
    }
    uVar102 = 0;
    local_c8 = param_1;
    do {
      uVar107 = 0;
      puVar105 = local_c8;
      do {
        FUN_00017964(&local_74,&local_70,local_6c,uVar107,uVar102,param_7);
        uVar107 = uVar107 + 1;
        (*pcVar103)(puVar105,local_74,local_70,local_6c[0],
                    ((param_6 ^ 0x1000000) & 0x1ffffff) >> 0x18);
        puVar105 = (undefined8 *)((int)puVar105 + 3);
      } while (param_2 != uVar107);
      uVar102 = uVar102 + 1;
      local_c8 = (undefined8 *)((int)local_c8 + local_10c);
    } while (param_3 != uVar102);
    return 0;
  }
  if (uVar102 < 0x10000) {
    if (uVar102 == 0xb) {
      if (param_3 == 0) {
        return 0;
      }
      uVar102 = param_2 >> 1;
      cVar92 = cVar95 * '\x05' + '@';
      if (uVar102 == 0) {
        return 0;
      }
      auVar47._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
      auVar47._0_8_ = 0x1000000010;
      auVar48._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
      auVar48._0_8_ = 0x400000004;
      auVar49._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
      auVar49._0_8_ = 0x800000008;
      auVar50._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
      auVar50._0_8_ = 0xc0000000c;
      uVar90 = CONCAT22(CONCAT11(cVar92,cVar92),CONCAT11(cVar92,cVar92));
      uVar67 = CONCAT44(uVar90,uVar90);
      auVar82._8_8_ = uVar67;
      auVar82._0_8_ = uVar67;
      auVar65._8_8_ = SUB158(SUB1615((undefined1  [16])0x0,1),7);
      auVar65._0_8_ = 0x101010101010101;
      uVar107 = (param_2 >> 5) * 0x10;
      auVar127._8_8_ = DAT_0001c278;
      auVar127._0_8_ = DAT_0001c270;
      uVar104 = 0;
      do {
        cVar99 = cVar95 * '\x03' + (char)uVar104;
        cVar93 = cVar95 * '\x02' + -0x80 + (char)(uVar104 >> 1);
        if (uVar102 - 1 < 0xf) {
          uVar101 = 0;
LAB_0001bf50:
          uVar106 = uVar101 + 1;
          cVar91 = cVar99 + (char)uVar101 * '\x02';
          *(char *)((int)param_1 + uVar101 * 4 + 2) = cVar93;
          *(char *)((int)param_1 + uVar101 * 4 + 1) = cVar91;
          *(char *)((int)param_1 + uVar101 * 4 + 3) = cVar91 + '\x01';
          *(char *)((int)param_1 + uVar101 * 4) = cVar92 + (char)uVar101;
          if (uVar106 < uVar102) {
            uVar108 = uVar101 + 2;
            cVar91 = cVar99 + (char)uVar106 * '\x02';
            *(char *)((int)param_1 + uVar106 * 4 + 2) = cVar93;
            *(char *)((int)param_1 + uVar106 * 4 + 1) = cVar91;
            *(char *)((int)param_1 + uVar106 * 4 + 3) = cVar91 + '\x01';
            *(char *)((int)param_1 + uVar106 * 4) = cVar92 + (char)uVar106;
            if (uVar108 < uVar102) {
              uVar106 = uVar101 + 3;
              cVar91 = cVar99 + (char)uVar108 * '\x02';
              *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar93;
              *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar91;
              *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar91 + '\x01';
              *(char *)((int)param_1 + uVar108 * 4) = cVar92 + (char)uVar108;
              if (uVar106 < uVar102) {
                uVar108 = uVar101 + 4;
                cVar91 = cVar99 + (char)uVar106 * '\x02';
                *(char *)((int)param_1 + uVar106 * 4 + 2) = cVar93;
                *(char *)((int)param_1 + uVar106 * 4 + 1) = cVar91;
                *(char *)((int)param_1 + uVar106 * 4 + 3) = cVar91 + '\x01';
                *(char *)((int)param_1 + uVar106 * 4) = cVar92 + (char)uVar106;
                if (uVar108 < uVar102) {
                  uVar106 = uVar101 + 5;
                  cVar91 = cVar99 + (char)uVar108 * '\x02';
                  *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar93;
                  *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar91;
                  *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar91 + '\x01';
                  *(char *)((int)param_1 + uVar108 * 4) = cVar92 + (char)uVar108;
                  if (uVar106 < uVar102) {
                    uVar108 = uVar101 + 6;
                    cVar91 = cVar99 + (char)uVar106 * '\x02';
                    *(char *)((int)param_1 + uVar106 * 4 + 2) = cVar93;
                    *(char *)((int)param_1 + uVar106 * 4 + 1) = cVar91;
                    *(char *)((int)param_1 + uVar106 * 4 + 3) = cVar91 + '\x01';
                    *(char *)((int)param_1 + uVar106 * 4) = cVar92 + (char)uVar106;
                    if (uVar108 < uVar102) {
                      uVar106 = uVar101 + 7;
                      cVar91 = cVar99 + (char)uVar108 * '\x02';
                      *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar93;
                      *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar91;
                      *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar91 + '\x01';
                      *(char *)((int)param_1 + uVar108 * 4) = cVar92 + (char)uVar108;
                      if (uVar106 < uVar102) {
                        uVar108 = uVar101 + 8;
                        cVar91 = cVar99 + (char)uVar106 * '\x02';
                        *(char *)((int)param_1 + uVar106 * 4 + 2) = cVar93;
                        *(char *)((int)param_1 + uVar106 * 4 + 1) = cVar91;
                        *(char *)((int)param_1 + uVar106 * 4 + 3) = cVar91 + '\x01';
                        *(char *)((int)param_1 + uVar106 * 4) = cVar92 + (char)uVar106;
                        if (uVar108 < uVar102) {
                          uVar106 = uVar101 + 9;
                          cVar91 = cVar99 + (char)uVar108 * '\x02';
                          *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar93;
                          *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar91;
                          *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar91 + '\x01';
                          *(char *)((int)param_1 + uVar108 * 4) = cVar92 + (char)uVar108;
                          if (uVar106 < uVar102) {
                            uVar108 = uVar101 + 10;
                            cVar91 = cVar99 + (char)uVar106 * '\x02';
                            *(char *)((int)param_1 + uVar106 * 4 + 2) = cVar93;
                            *(char *)((int)param_1 + uVar106 * 4 + 1) = cVar91;
                            *(char *)((int)param_1 + uVar106 * 4 + 3) = cVar91 + '\x01';
                            *(char *)((int)param_1 + uVar106 * 4) = cVar92 + (char)uVar106;
                            if (uVar108 < uVar102) {
                              uVar106 = uVar101 + 0xb;
                              cVar91 = cVar99 + (char)uVar108 * '\x02';
                              *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar93;
                              *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar91;
                              *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar91 + '\x01';
                              *(char *)((int)param_1 + uVar108 * 4) = cVar92 + (char)uVar108;
                              if (uVar106 < uVar102) {
                                uVar108 = uVar101 + 0xc;
                                cVar91 = cVar99 + (char)uVar106 * '\x02';
                                *(char *)((int)param_1 + uVar106 * 4 + 2) = cVar93;
                                *(char *)((int)param_1 + uVar106 * 4 + 1) = cVar91;
                                *(char *)((int)param_1 + uVar106 * 4 + 3) = cVar91 + '\x01';
                                *(char *)((int)param_1 + uVar106 * 4) = cVar92 + (char)uVar106;
                                if (uVar108 < uVar102) {
                                  uVar106 = uVar101 + 0xd;
                                  cVar91 = cVar99 + (char)uVar108 * '\x02';
                                  *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar93;
                                  *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar91;
                                  *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar91 + '\x01';
                                  *(char *)((int)param_1 + uVar108 * 4) = cVar92 + (char)uVar108;
                                  if (uVar106 < uVar102) {
                                    uVar101 = uVar101 + 0xe;
                                    cVar91 = cVar99 + (char)uVar106 * '\x02';
                                    *(char *)((int)param_1 + uVar106 * 4 + 2) = cVar93;
                                    *(char *)((int)param_1 + uVar106 * 4 + 1) = cVar91;
                                    *(char *)((int)param_1 + uVar106 * 4 + 3) = cVar91 + '\x01';
                                    *(char *)((int)param_1 + uVar106 * 4) = cVar92 + (char)uVar106;
                                    if (uVar101 < uVar102) {
                                      cVar99 = cVar99 + (char)uVar101 * '\x02';
                                      *(char *)((int)param_1 + uVar101 * 4 + 2) = cVar93;
                                      *(char *)((int)param_1 + uVar101 * 4 + 1) = cVar99;
                                      *(char *)((int)param_1 + uVar101 * 4 + 3) = cVar99 + '\x01';
                                      *(char *)((int)param_1 + uVar101 * 4) = cVar92 + (char)uVar101
                                      ;
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
        else {
          uVar90 = CONCAT22(CONCAT11(cVar99,cVar99),CONCAT11(cVar99,cVar99));
          auVar97._12_4_ = uVar90;
          auVar97._8_4_ = uVar90;
          puVar105 = param_1;
          auVar132 = auVar127;
          do {
            auVar184 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar48 << 0x40 | auVar48),4);
            auVar135 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar50 << 0x40 | auVar50),4);
            puVar111 = puVar105 + 8;
            auVar149 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar49 << 0x40 | auVar49),4);
            auVar186._0_8_ = VectorCopyNarrow(auVar132,4);
            auVar186._8_8_ = VectorCopyNarrow(auVar184,4);
            auVar132 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar47 << 0x40 | auVar47),4);
            auVar183._0_8_ = VectorCopyNarrow(auVar149,4);
            auVar183._8_8_ = VectorCopyNarrow(auVar135,4);
            auVar130._0_8_ = VectorCopyNarrow(auVar186,2);
            auVar130._8_8_ = VectorCopyNarrow(auVar183,2);
            auVar97._4_4_ = uVar90;
            auVar97._0_4_ = uVar90;
            auVar135 = VectorAdd(auVar130,auVar130,1);
            VectorAdd(auVar130,auVar82,1);
            auVar135 = VectorAdd(auVar135,auVar97,1);
            VectorAdd(auVar135,*(undefined1 (*) [16])(auVar65 << 0x40 | auVar65),1);
            puVar86 = (undefined1 *)0x380;
            puVar87 = (undefined1 *)0x390;
            puVar88 = (undefined1 *)0x3a0;
            puVar89 = (undefined1 *)0x3b0;
            lVar112 = 8;
            puVar110 = puVar105;
            while( true ) {
              *(undefined1 *)puVar110 = *puVar86;
              *(undefined1 *)((int)puVar110 + 1) = *puVar87;
              *(undefined1 *)((int)puVar110 + 2) = *puVar88;
              *(undefined1 *)((int)puVar110 + 3) = *puVar89;
              puVar110 = (undefined8 *)((int)puVar110 + 4);
              lVar112 = lVar112 + -1;
              if (lVar112 == 0) break;
              puVar86 = puVar86 + 1;
              puVar87 = puVar87 + 1;
              puVar88 = puVar88 + 1;
              puVar89 = puVar89 + 1;
            }
            puVar105 = puVar105 + 4;
            puVar86 = (undefined1 *)0x388;
            puVar87 = (undefined1 *)0x398;
            puVar88 = (undefined1 *)0x3a8;
            puVar89 = (undefined1 *)0x3b8;
            lVar112 = 8;
            while( true ) {
              *(undefined1 *)puVar105 = *puVar86;
              *(undefined1 *)((int)puVar105 + 1) = *puVar87;
              *(undefined1 *)((int)puVar105 + 2) = *puVar88;
              *(undefined1 *)((int)puVar105 + 3) = *puVar89;
              puVar105 = (undefined8 *)((int)puVar105 + 4);
              lVar112 = lVar112 + -1;
              if (lVar112 == 0) break;
              puVar86 = puVar86 + 1;
              puVar87 = puVar87 + 1;
              puVar88 = puVar88 + 1;
              puVar89 = puVar89 + 1;
            }
            puVar105 = puVar111;
          } while (puVar111 != param_1 + (param_2 >> 5) * 8);
          uVar101 = uVar107;
          if (uVar102 != uVar107) goto LAB_0001bf50;
        }
        uVar104 = uVar104 + 1;
        param_1 = (undefined8 *)((int)param_1 + param_4);
        if (param_3 == uVar104) {
          return 0;
        }
      } while( true );
    }
    if (uVar102 == 0xc) {
      if (param_3 == 0) {
        return 0;
      }
      if (param_2 == 0) {
        return 0;
      }
      uVar107 = param_2 & 0xfffffff0;
      auVar5._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
      auVar5._0_8_ = 0x1000000010;
      auVar6._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
      auVar6._0_8_ = 0x400000004;
      auVar7._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
      auVar7._0_8_ = 0x800000008;
      auVar113._8_8_ = DAT_0001a0a0;
      auVar113._0_8_ = DAT_0001a098;
      auVar8._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
      auVar8._0_8_ = 0xc0000000c;
      uVar102 = 0;
      do {
        cVar92 = cVar95 * '\x03' + (char)uVar102;
        if (param_2 - 1 < 0xf) {
          uVar104 = 0;
LAB_00019de0:
          uVar101 = uVar104 + 1;
          *(char *)((int)param_1 + uVar104) = cVar92 + (char)uVar104;
          if (uVar101 < param_2) {
            uVar106 = uVar104 + 2;
            *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
            if (uVar106 < param_2) {
              uVar101 = uVar104 + 3;
              *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
              if (uVar101 < param_2) {
                uVar106 = uVar104 + 4;
                *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
                if (uVar106 < param_2) {
                  uVar101 = uVar104 + 5;
                  *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                  if (uVar101 < param_2) {
                    uVar106 = uVar104 + 6;
                    *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
                    if (uVar106 < param_2) {
                      uVar101 = uVar104 + 7;
                      *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                      if (uVar101 < param_2) {
                        uVar106 = uVar104 + 8;
                        *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
                        if (uVar106 < param_2) {
                          uVar101 = uVar104 + 9;
                          *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                          if (uVar101 < param_2) {
                            uVar106 = uVar104 + 10;
                            *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
                            if (uVar106 < param_2) {
                              uVar101 = uVar104 + 0xb;
                              *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                              if (uVar101 < param_2) {
                                uVar106 = uVar104 + 0xc;
                                *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
                                if (uVar106 < param_2) {
                                  uVar101 = uVar104 + 0xd;
                                  *(char *)((int)param_1 + uVar106) = cVar92 + (char)uVar106;
                                  if (uVar101 < param_2) {
                                    uVar104 = uVar104 + 0xe;
                                    *(char *)((int)param_1 + uVar101) = cVar92 + (char)uVar101;
                                    if (uVar104 < param_2) {
                                      *(char *)((int)param_1 + uVar104) = cVar92 + (char)uVar104;
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
        else {
          uVar90 = CONCAT22(CONCAT11(cVar92,cVar92),CONCAT11(cVar92,cVar92));
          uVar67 = CONCAT44(uVar90,uVar90);
          auVar70._8_8_ = uVar67;
          auVar70._0_8_ = uVar67;
          puVar105 = param_1;
          auVar132 = auVar113;
          do {
            auVar149 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar6 << 0x40 | auVar6),4);
            auVar135 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar8 << 0x40 | auVar8),4);
            auVar184 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar7 << 0x40 | auVar7),4);
            auVar161._0_8_ = VectorCopyNarrow(auVar132,4);
            auVar161._8_8_ = VectorCopyNarrow(auVar149,4);
            auVar132 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar5 << 0x40 | auVar5),4);
            auVar151._0_8_ = VectorCopyNarrow(auVar184,4);
            auVar151._8_8_ = VectorCopyNarrow(auVar135,4);
            auVar137._0_8_ = VectorCopyNarrow(auVar161,2);
            auVar137._8_8_ = VectorCopyNarrow(auVar151,2);
            auVar135 = VectorAdd(auVar137,auVar70,1);
            *puVar105 = auVar135._0_8_;
            puVar105[1] = auVar135._8_8_;
            puVar105 = puVar105 + 2;
          } while (puVar105 != (undefined8 *)(uVar107 + (int)param_1));
          uVar104 = uVar107;
          if (param_2 != uVar107) goto LAB_00019de0;
        }
        uVar102 = uVar102 + 1;
        param_1 = (undefined8 *)((int)param_1 + param_4);
        if (param_3 == uVar102) {
          return 0;
        }
      } while( true );
    }
    goto LAB_00019ce0;
  }
  pcVar103 = *(code **)(*(int *)(iVar100 + DAT_0001bad8) + (param_6 - 0x10000) * 4);
  if (*(int *)(DAT_0001badc + 0x1bcc0) == 0) {
    if ((int)param_4 < (int)(param_2 * 2)) {
      iVar100 = DAT_0001c990 + 0x1cb88;
      _mpp_log(iVar100,DAT_0001c994 + 0x1cb94,0,param_4,param_2,2);
      _mpp_log(iVar100,DAT_0001c998 + 0x1cbc0,0,param_4,2,param_4 << 1);
      goto LAB_0001bcd8;
    }
  }
  else {
LAB_0001bcd8:
    local_10c = param_4 << 1;
    *(undefined4 *)(DAT_0001bae0 + 0x1bcec) = 1;
  }
  if (*(int *)(DAT_0001bae4 + 0x1bcf8) == 0) {
    uVar102 = local_10c + 0xf & 0xfffffff0;
    if (local_10c == uVar102) goto LAB_0001bd6c;
    iVar100 = DAT_0001bae8 + 0x1bd28;
    _mpp_log(iVar100,DAT_0001baf0 + 0x1bd3c,0,DAT_0001baec + 0x1bd34,2);
    _mpp_log(iVar100,DAT_0001baf4 + 0x1bd54,0,uVar102);
  }
  local_10c = local_10c + 0xf & 0xfffffff0;
  *(undefined4 *)(DAT_0001baf8 + 0x1bd6c) = 1;
LAB_0001bd6c:
  if ((param_3 != 0) && (param_2 != 0)) {
    uVar102 = 0;
    do {
      uVar107 = 0;
      puVar105 = local_84;
      do {
        uVar104 = uVar107 + 1;
        FUN_00017964(&local_74,&local_70,local_6c,uVar107,uVar102,param_7);
        (*pcVar103)(puVar105,local_74,local_70,local_6c[0],
                    ((param_6 ^ 0x1000000) & 0x1ffffff) >> 0x18);
        uVar107 = uVar104;
        puVar105 = (undefined8 *)((int)puVar105 + 2);
      } while (param_2 != uVar104);
      uVar102 = uVar102 + 1;
      local_84 = (undefined8 *)((int)local_84 + local_10c);
    } while (param_3 != uVar102);
  }
  return 0;
}



/* ===== parse_config_line @ 0001cd2c size=52 ===== */

void parse_config_line(char *param_1,int param_2)

{
  sscanf(param_1,(char *)(DAT_0001cd60 + 0x1cd50),param_2,param_2 + 4,param_2 + 0x10,param_2 + 0x18)
  ;
  return;
}



/* ===== name_to_frame_format @ 0001cd64 size=688 ===== */

undefined4 name_to_frame_format(byte *param_1,undefined4 *param_2)

{
  size_t sVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  undefined1 uStack_4d;
  byte local_4c [56];
  
  sVar1 = strlen((char *)param_1);
  uVar2 = sVar1 - 1;
  if (CARRY4((uint)param_1,uVar2)) {
LAB_0001cdc0:
    local_4c[0] = 0;
    goto LAB_0001cdcc;
  }
  pbVar5 = param_1 + uVar2;
  if (param_1[uVar2] == 0x2e) {
LAB_0001d008:
    pbVar3 = local_4c;
  }
  else {
    do {
      pbVar6 = pbVar5;
      pbVar3 = param_1 + uVar2 + (1 - (int)pbVar6);
      pbVar5 = pbVar6 + -1;
      if (param_1 == pbVar6) goto LAB_0001cdc0;
    } while (pbVar6[-1] != 0x2e);
    if (pbVar3 == (byte *)0x0) goto LAB_0001d008;
    puVar9 = &uStack_4d;
    iVar4 = **(int **)(DAT_0001d014 + 0x1cd84 + DAT_0001d01c);
    do {
      pbVar5 = pbVar5 + 1;
      puVar9 = puVar9 + 1;
      *puVar9 = (char)*(undefined2 *)(iVar4 + (uint)*pbVar5 * 2);
    } while (pbVar5 != pbVar6 + (int)(pbVar3 + -1));
    pbVar3 = local_4c + (int)pbVar3;
  }
  *pbVar3 = 0;
LAB_0001cdcc:
  puVar7 = *(undefined4 **)(DAT_0001d014 + 0x1cd84 + DAT_0001d018);
  iVar4 = strcmp((char *)local_4c,(char *)*puVar7);
  if (iVar4 == 0) {
    *param_2 = puVar7[1];
    uVar8 = 0;
  }
  else {
    uVar8 = 0xffffffff;
  }
  iVar4 = strcmp((char *)local_4c,(char *)puVar7[2]);
  if (iVar4 == 0) {
    *param_2 = puVar7[3];
    uVar8 = 0;
  }
  iVar4 = strcmp((char *)local_4c,(char *)puVar7[4]);
  if (iVar4 == 0) {
    *param_2 = puVar7[5];
    uVar8 = 0;
  }
  iVar4 = strcmp((char *)local_4c,(char *)puVar7[6]);
  if (iVar4 == 0) {
    *param_2 = puVar7[7];
    uVar8 = 0;
  }
  iVar4 = strcmp((char *)local_4c,(char *)puVar7[8]);
  if (iVar4 == 0) {
    *param_2 = puVar7[9];
    uVar8 = 0;
  }
  iVar4 = strcmp((char *)local_4c,(char *)puVar7[10]);
  if (iVar4 == 0) {
    *param_2 = puVar7[0xb];
    uVar8 = 0;
  }
  iVar4 = strcmp((char *)local_4c,(char *)puVar7[0xc]);
  if (iVar4 == 0) {
    *param_2 = puVar7[0xd];
    uVar8 = 0;
  }
  iVar4 = strcmp((char *)local_4c,(char *)puVar7[0xe]);
  if (iVar4 == 0) {
    *param_2 = puVar7[0xf];
    uVar8 = 0;
  }
  iVar4 = strcmp((char *)local_4c,(char *)puVar7[0x10]);
  if (iVar4 == 0) {
    *param_2 = puVar7[0x11];
    uVar8 = 0;
  }
  iVar4 = strcmp((char *)local_4c,(char *)puVar7[0x12]);
  if (iVar4 == 0) {
    *param_2 = puVar7[0x13];
    uVar8 = 0;
  }
  iVar4 = strcmp((char *)local_4c,(char *)puVar7[0x14]);
  if (iVar4 == 0) {
    *param_2 = puVar7[0x15];
    uVar8 = 0;
  }
  iVar4 = strcmp((char *)local_4c,(char *)puVar7[0x16]);
  if (iVar4 == 0) {
    *param_2 = puVar7[0x17];
    uVar8 = 0;
  }
  iVar4 = strcmp((char *)local_4c,(char *)puVar7[0x18]);
  if (iVar4 == 0) {
    *param_2 = puVar7[0x19];
    uVar8 = 0;
  }
  iVar4 = strcmp((char *)local_4c,(char *)puVar7[0x1a]);
  if (iVar4 == 0) {
    *param_2 = puVar7[0x1b];
    uVar8 = 0;
  }
  iVar4 = strcmp((char *)local_4c,(char *)puVar7[0x1c]);
  if (iVar4 == 0) {
    *param_2 = puVar7[0x1d];
    uVar8 = 0;
  }
  iVar4 = strcmp((char *)local_4c,(char *)puVar7[0x1e]);
  if (iVar4 == 0) {
    *param_2 = puVar7[0x1f];
    uVar8 = 0;
  }
  iVar4 = strcmp((char *)local_4c,(char *)puVar7[0x20]);
  if (iVar4 == 0) {
    *param_2 = puVar7[0x21];
    uVar8 = 0;
  }
  return uVar8;
}



/* ===== name_to_coding_type @ 0001d020 size=464 ===== */

undefined4 name_to_coding_type(byte *param_1,undefined4 *param_2)

{
  size_t sVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  undefined1 uStack_4d;
  byte local_4c [56];
  
  sVar1 = strlen((char *)param_1);
  uVar2 = sVar1 - 1;
  if (CARRY4((uint)param_1,uVar2)) {
LAB_0001d07c:
    local_4c[0] = 0;
    goto LAB_0001d088;
  }
  pbVar5 = param_1 + uVar2;
  if (param_1[uVar2] == 0x2e) {
LAB_0001d1e4:
    pbVar3 = local_4c;
  }
  else {
    do {
      pbVar6 = pbVar5;
      pbVar3 = param_1 + uVar2 + (1 - (int)pbVar6);
      pbVar5 = pbVar6 + -1;
      if (param_1 == pbVar6) goto LAB_0001d07c;
    } while (pbVar6[-1] != 0x2e);
    if (pbVar3 == (byte *)0x0) goto LAB_0001d1e4;
    puVar9 = &uStack_4d;
    iVar4 = **(int **)(DAT_0001d1f0 + 0x1d040 + DAT_0001d1f8);
    do {
      pbVar5 = pbVar5 + 1;
      puVar9 = puVar9 + 1;
      *puVar9 = (char)*(undefined2 *)(iVar4 + (uint)*pbVar5 * 2);
    } while (pbVar5 != pbVar6 + (int)(pbVar3 + -1));
    pbVar3 = local_4c + (int)pbVar3;
  }
  *pbVar3 = 0;
LAB_0001d088:
  puVar7 = *(undefined4 **)(DAT_0001d1f0 + 0x1d040 + DAT_0001d1f4);
  iVar4 = strcmp((char *)local_4c,(char *)*puVar7);
  if (iVar4 == 0) {
    *param_2 = puVar7[1];
    uVar8 = 0;
  }
  else {
    uVar8 = 0xffffffff;
  }
  iVar4 = strcmp((char *)local_4c,(char *)puVar7[2]);
  if (iVar4 == 0) {
    *param_2 = puVar7[3];
    uVar8 = 0;
  }
  iVar4 = strcmp((char *)local_4c,(char *)puVar7[4]);
  if (iVar4 == 0) {
    *param_2 = puVar7[5];
    uVar8 = 0;
  }
  iVar4 = strcmp((char *)local_4c,(char *)puVar7[6]);
  if (iVar4 == 0) {
    *param_2 = puVar7[7];
    uVar8 = 0;
  }
  iVar4 = strcmp((char *)local_4c,(char *)puVar7[8]);
  if (iVar4 == 0) {
    *param_2 = puVar7[9];
    uVar8 = 0;
  }
  iVar4 = strcmp((char *)local_4c,(char *)puVar7[10]);
  if (iVar4 == 0) {
    *param_2 = puVar7[0xb];
    uVar8 = 0;
  }
  iVar4 = strcmp((char *)local_4c,(char *)puVar7[0xc]);
  if (iVar4 == 0) {
    *param_2 = puVar7[0xd];
    uVar8 = 0;
  }
  iVar4 = strcmp((char *)local_4c,(char *)puVar7[0xe]);
  if (iVar4 == 0) {
    *param_2 = puVar7[0xf];
    uVar8 = 0;
  }
  iVar4 = strcmp((char *)local_4c,(char *)puVar7[0x10]);
  if (iVar4 == 0) {
    *param_2 = puVar7[0x11];
    uVar8 = 0;
  }
  return uVar8;
}



/* ===== fps_calc_init @ 0001d1fc size=56 ===== */

undefined4 fps_calc_init(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = mpp_osal_calloc(DAT_0001d234 + 0x1d214,0x28);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    mpp_spinlock_init();
    uVar2 = 0;
  }
  *param_1 = iVar1;
  return uVar2;
}



/* ===== fps_calc_deinit @ 0001d238 size=40 ===== */

undefined4 fps_calc_deinit(int param_1)

{
  if (param_1 != 0) {
    mpp_osal_free(DAT_0001d260 + 0x1d250);
    return 0;
  }
  return 0;
}



/* ===== fps_calc_set_cb @ 0001d264 size=16 ===== */

undefined4 fps_calc_set_cb(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = param_2;
  }
  return 0;
}



/* ===== fps_calc_inc @ 0001d278 size=288 ===== */

undefined4 fps_calc_inc(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  
  if (param_1 != 0) {
    mpp_spinlock_lock();
    uVar11 = mpp_time();
    iVar10 = (int)((ulonglong)uVar11 >> 0x20);
    uVar4 = (uint)uVar11;
    uVar7 = *(uint *)(param_1 + 0x10);
    iVar8 = *(int *)(param_1 + 0x14);
    if (uVar7 == 0 && iVar8 == 0) {
      iVar1 = 1;
      iVar2 = 0;
      *(undefined8 *)(param_1 + 8) = uVar11;
      *(undefined8 *)(param_1 + 0x18) = uVar11;
    }
    else {
      iVar1 = uVar7 + 1;
      iVar2 = iVar8 + (uint)(0xfffffffe < uVar7);
      uVar3 = uVar4 - *(uint *)(param_1 + 0x18);
      iVar5 = iVar10 - (*(int *)(param_1 + 0x1c) + (uint)(uVar4 < *(uint *)(param_1 + 0x18)));
      if ((int)(DAT_0001d39c - (iVar5 + (uint)(DAT_0001d398 < uVar3))) < 0 !=
          (SBORROW4(DAT_0001d39c,iVar5) !=
          SBORROW4(DAT_0001d39c - iVar5,(uint)(DAT_0001d398 < uVar3)))) {
        *(undefined8 *)(param_1 + 0x18) = uVar11;
        iVar9 = uVar4 - *(uint *)(param_1 + 8);
        iVar10 = iVar10 - (*(int *)(param_1 + 0xc) + (uint)(uVar4 < *(uint *)(param_1 + 8)));
        uVar4 = *(uint *)(param_1 + 0x20);
        iVar6 = *(int *)(param_1 + 0x24);
        *(int *)(param_1 + 0x10) = iVar1;
        *(int *)(param_1 + 0x14) = iVar2;
        *(uint *)(param_1 + 0x20) = uVar7;
        *(int *)(param_1 + 0x24) = iVar8;
        mpp_spinlock_unlock(param_1);
        if (*(code **)(param_1 + 4) == (code *)0x0 || iVar9 == 0 && iVar10 == 0) {
          return 0;
        }
        (**(code **)(param_1 + 4))
                  (iVar9,iVar10,uVar7,iVar8,uVar3,iVar5,uVar7 - uVar4,
                   iVar8 - (iVar6 + (uint)(uVar7 < uVar4)));
        return 0;
      }
    }
    *(int *)(param_1 + 0x10) = iVar1;
    *(int *)(param_1 + 0x14) = iVar2;
    mpp_spinlock_unlock(param_1);
  }
  return 0;
}



/* ===== FUN_0001d3a0 @ 0001d3a0 size=64 ===== */

void FUN_0001d3a0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  vfprintf((FILE *)**(undefined4 **)(DAT_0001d3e0 + 0x1d3b8 + DAT_0001d3e4),param_1,&uStack_c);
  return;
}



/* ===== FUN_0001d3e8 @ 0001d3e8 size=208 ===== */

int FUN_0001d3e8(byte *param_1)

{
  byte *pbVar1;
  size_t sVar2;
  byte *__src;
  ushort uVar3;
  int iVar4;
  byte *pbVar5;
  
  iVar4 = DAT_0001d4b8 + 0x1d3fc;
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  sVar2 = strlen((char *)param_1);
  iVar4 = **(int **)(iVar4 + DAT_0001d4bc);
  pbVar5 = param_1 + sVar2;
  uVar3 = (ushort)(*param_1 != 0) & *(ushort *)(iVar4 + (uint)*param_1 * 2) >> 5;
  __src = param_1;
  while (uVar3 != 0) {
    __src = __src + 1;
    uVar3 = (ushort)(*__src != 0) & *(ushort *)(iVar4 + (uint)*__src * 2) >> 5;
  }
  if ((__src < pbVar5) && ((*(ushort *)(iVar4 + (uint)pbVar5[-1] * 2) & 0x20) != 0)) {
    pbVar1 = pbVar5 + -1;
    do {
      pbVar5 = pbVar1;
      if (__src == pbVar5) break;
      pbVar1 = pbVar5 + -1;
    } while ((*(ushort *)(iVar4 + (uint)pbVar5[-1] * 2) & 0x20) != 0);
  }
  *pbVar5 = 0;
  memmove(param_1,__src,((int)pbVar5 - (int)__src) + 1);
  return (int)pbVar5 - (int)__src;
}



/* ===== iniparser_set_error_callback @ 0001d658 size=36 ===== */

void iniparser_set_error_callback(int param_1)

{
  if (param_1 == 0) {
    param_1 = (int)&DAT_0001d67c + DAT_0001d680;
  }
  *(int *)(DAT_0001d67c + 0x1d66c) = param_1;
  return;
}



/* ===== iniparser_getnsec @ 0001d684 size=100 ===== */

int iniparser_getnsec(int param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar5;
  int iVar6;
  undefined4 *puVar4;
  
  if (param_1 == 0) {
    iVar6 = -1;
  }
  else {
    iVar5 = *(int *)(param_1 + 4);
    if (iVar5 < 1) {
      return 0;
    }
    puVar2 = *(undefined4 **)(param_1 + 0xc);
    iVar6 = 0;
    puVar3 = puVar2;
    do {
      puVar4 = puVar3 + 1;
      if (((char *)*puVar3 != (char *)0x0) &&
         (pcVar1 = strchr((char *)*puVar3,0x3a), pcVar1 == (char *)0x0)) {
        iVar6 = iVar6 + 1;
      }
      puVar3 = puVar4;
    } while (puVar4 != puVar2 + iVar5);
  }
  return iVar6;
}



/* ===== iniparser_getsecname @ 0001d6e8 size=152 ===== */

char * iniparser_getsecname(int param_1,uint param_2)

{
  char *pcVar1;
  char *__s;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_1 == 0) {
    uVar4 = 1;
  }
  else {
    uVar4 = param_2 >> 0x1f;
  }
  if ((uVar4 == 0) && (iVar6 = *(int *)(param_1 + 4), 0 < iVar6)) {
    iVar7 = *(int *)(param_1 + 0xc);
    puVar3 = (undefined4 *)(iVar7 + -4);
    iVar2 = 0;
    iVar5 = 0;
    do {
      puVar3 = puVar3 + 1;
      __s = (char *)*puVar3;
      iVar2 = iVar2 + 1;
      if (((__s != (char *)0x0) && (pcVar1 = strchr(__s,0x3a), pcVar1 == (char *)0x0)) &&
         (iVar5 = iVar5 + 1, (int)param_2 < iVar5)) {
        return __s;
      }
    } while (iVar6 != iVar2);
    if ((int)param_2 < iVar5) {
      return *(char **)(iVar7 + iVar6 * 4);
    }
  }
  return (char *)0x0;
}



/* ===== iniparser_dump @ 0001d780 size=148 ===== */

void iniparser_dump(int param_1,FILE *param_2)

{
  int iVar1;
  int iVar2;
  char *__format;
  char *__format_00;
  int iVar3;
  
  if (param_1 == 0 || param_2 == (FILE *)0x0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 < 1) {
    return;
  }
  __format_00 = (char *)(DAT_0001d814 + 0x1d7c0);
  __format = (char *)(DAT_0001d818 + 0x1d7c4);
  iVar2 = 0;
  do {
    iVar3 = *(int *)(*(int *)(param_1 + 0xc) + iVar2 * 4);
    if (iVar3 != 0) {
      if (*(int *)(*(int *)(param_1 + 8) + iVar2 * 4) == 0) {
        fprintf(param_2,__format_00,iVar3);
        iVar1 = *(int *)(param_1 + 4);
      }
      else {
        fprintf(param_2,__format,iVar3);
        iVar1 = *(int *)(param_1 + 4);
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < iVar1);
  return;
}



/* ===== iniparser_getstring @ 0001d81c size=172 ===== */

undefined4 iniparser_getstring(int param_1,byte *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint __c;
  int iVar3;
  undefined1 *puVar4;
  undefined1 local_424 [1032];
  
  if (param_2 == (byte *)0x0 || param_1 == 0) {
    return param_3;
  }
  __c = (uint)*param_2;
  if (__c == 0) {
    puVar4 = local_424;
  }
  else {
    iVar3 = 0;
    do {
      iVar1 = tolower(__c);
      param_2 = param_2 + 1;
      __c = (uint)*param_2;
      local_424[iVar3] = (char)iVar1;
      iVar1 = iVar3 + 1;
      if (__c == 0) {
        puVar4 = local_424 + iVar3 + 1;
        goto LAB_0001d620;
      }
      iVar3 = iVar1;
    } while (iVar1 != 0x400);
    puVar4 = local_424 + 0x400;
  }
LAB_0001d620:
  *puVar4 = 0;
  uVar2 = dictionary_get(param_1,local_424,param_3);
  return uVar2;
}



/* ===== iniparser_getlongint @ 0001d834 size=60 ===== */

undefined4 iniparser_getlongint(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = iniparser_getstring(param_1,param_2,0xffffffff);
  if (iVar2 != -1) {
    uVar1 = (*(code *)PTR_strtol_0003407c)(iVar2,0);
    return uVar1;
  }
  return param_3;
}



/* ===== iniparser_getint @ 0001d864 size=4 ===== */

undefined4 iniparser_getint(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = iniparser_getstring(param_1,param_2,0xffffffff);
  if (iVar2 != -1) {
    uVar1 = (*(code *)PTR_strtol_0003407c)(iVar2,0);
    return uVar1;
  }
  return param_3;
}



/* ===== iniparser_getdouble @ 0001d868 size=64 ===== */

void iniparser_getdouble(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = iniparser_getstring(param_1,param_2,0xffffffff);
  if (iVar1 != -1) {
    (*(code *)PTR_atof_00034108)();
    return;
  }
  return;
}



/* ===== iniparser_getboolean @ 0001d89c size=104 ===== */

undefined4 iniparser_getboolean(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)iniparser_getstring(param_1,param_2,0xffffffff);
  if (pbVar2 == (byte *)0xffffffff) {
    return param_3;
  }
  bVar1 = *pbVar2;
  if (bVar1 != 0x31 && ((bVar1 & 0xdf) != 0x59 && (bVar1 & 0xdf) != 0x54)) {
    if (bVar1 == 0x30 || (bVar1 & 0xd7) == 0x46) {
      param_3 = 0;
    }
    return param_3;
  }
  return 1;
}



/* ===== iniparser_find_entry @ 0001d904 size=24 ===== */

bool iniparser_find_entry(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = iniparser_getstring(param_1,param_2,0xffffffff);
  return iVar1 != -1;
}



/* ===== iniparser_dumpsection_ini @ 0001d91c size=304 ===== */

void iniparser_dumpsection_ini(int param_1,char *param_2,FILE *param_3)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  char *__format;
  int iVar5;
  int iVar6;
  char *__s1;
  char acStack_42c [1044];
  
  if (param_3 == (FILE *)0x0 || param_1 == 0) {
    return;
  }
  iVar4 = iniparser_find_entry();
  if (iVar4 == 0) {
    return;
  }
  sVar2 = strlen(param_2);
  fprintf(param_3,(char *)(DAT_0001d5b4 + 0x1d4f4),param_2);
  sprintf(acStack_42c,(char *)(DAT_0001d5b8 + 0x1d510),param_2);
  iVar4 = *(int *)(param_1 + 4);
  if (0 < iVar4) {
    iVar6 = 0;
    __format = (char *)(DAT_0001d5bc + 0x1d530);
    iVar5 = DAT_0001d5c0 + 0x1d53c;
    do {
      iVar1 = iVar6 * 4;
      __s1 = *(char **)(*(int *)(param_1 + 0xc) + iVar6 * 4);
      iVar6 = iVar6 + 1;
      if (__s1 != (char *)0x0) {
        iVar3 = strncmp(__s1,acStack_42c,sVar2 + 1);
        if (iVar3 == 0) {
          iVar4 = *(int *)(*(int *)(param_1 + 8) + iVar1);
          if (iVar4 == 0) {
            iVar4 = iVar5;
          }
          fprintf(param_3,__format,__s1 + sVar2 + 1,iVar4);
          iVar4 = *(int *)(param_1 + 4);
        }
      }
    } while (iVar6 < iVar4);
  }
  fputc(10,param_3);
  return;
}



/* ===== iniparser_dump_ini @ 0001d958 size=200 ===== */

void iniparser_dump_ini(int param_1,FILE *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *__format;
  int iVar5;
  
  if (param_1 == 0 || param_2 == (FILE *)0x0) {
    return;
  }
  iVar1 = iniparser_getnsec();
  iVar4 = 0;
  if (iVar1 < 1) {
    iVar4 = *(int *)(param_1 + 4);
    if (iVar4 < 1) {
      return;
    }
    iVar5 = *(int *)(param_1 + 0xc);
    __format = (char *)(DAT_0001da20 + 0x1d9dc);
    iVar1 = 0;
    while( true ) {
      while (iVar3 = *(int *)(iVar5 + iVar1 * 4), iVar3 == 0) {
        iVar1 = iVar1 + 1;
        if (iVar4 <= iVar1) {
          return;
        }
      }
      iVar4 = iVar1 * 4;
      iVar1 = iVar1 + 1;
      fprintf(param_2,__format,iVar3,*(undefined4 *)(*(int *)(param_1 + 8) + iVar4));
      iVar4 = *(int *)(param_1 + 4);
      if (iVar4 <= iVar1) break;
      iVar5 = *(int *)(param_1 + 0xc);
    }
    return;
  }
  do {
    uVar2 = iniparser_getsecname(param_1,iVar4);
    iVar4 = iVar4 + 1;
    iniparser_dumpsection_ini(param_1,uVar2,param_2);
  } while (iVar1 != iVar4);
  fputc(10,param_2);
  return;
}



/* ===== iniparser_getsecnkeys @ 0001da24 size=264 ===== */

int iniparser_getsecnkeys(int param_1,byte *param_2)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  uint __c;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char local_424 [1032];
  undefined4 *puVar8;
  
  if ((param_1 != 0) && (iVar1 = iniparser_find_entry(), iVar1 != 0)) {
    sVar2 = strlen((char *)param_2);
    __c = (uint)*param_2;
    if (__c == 0) {
      pcVar5 = local_424;
    }
    else {
      iVar1 = 0;
      do {
        iVar3 = tolower(__c);
        param_2 = param_2 + 1;
        __c = (uint)*param_2;
        local_424[iVar1] = (char)iVar3;
        iVar3 = iVar1 + 1;
        if (__c == 0) {
          pcVar5 = local_424 + iVar1 + 1;
          goto LAB_0001daac;
        }
        iVar1 = iVar3;
      } while (iVar3 != 0x400);
      pcVar5 = local_424 + 0x400;
    }
LAB_0001daac:
    iVar1 = *(int *)(param_1 + 4);
    iVar3 = 0;
    *pcVar5 = '\0';
    local_424[sVar2] = ':';
    if (0 < iVar1) {
      puVar6 = *(undefined4 **)(param_1 + 0xc);
      puVar7 = puVar6;
      do {
        puVar8 = puVar7 + 1;
        if (((char *)*puVar7 != (char *)0x0) &&
           (iVar4 = strncmp((char *)*puVar7,local_424,sVar2 + 1), iVar4 == 0)) {
          iVar3 = iVar3 + 1;
        }
        puVar7 = puVar8;
      } while (puVar6 + iVar1 != puVar8);
      return iVar3;
    }
  }
  return 0;
}



/* ===== iniparser_getseckeys @ 0001db2c size=288 ===== */

int iniparser_getseckeys(int param_1,byte *param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  uint __c;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char acStack_424 [1024];
  char acStack_24 [4];
  undefined4 *puVar8;
  
  if ((param_1 == 0 || param_3 == 0) || (iVar1 = iniparser_find_entry(), iVar1 == 0)) {
    return 0;
  }
  sVar2 = strlen((char *)param_2);
  __c = (uint)*param_2;
  if (__c == 0) {
    pcVar5 = acStack_424;
  }
  else {
    iVar1 = 0;
    do {
      iVar3 = tolower(__c);
      param_2 = param_2 + 1;
      __c = (uint)*param_2;
      acStack_424[iVar1] = (char)iVar3;
      iVar3 = iVar1 + 1;
      if (__c == 0) {
        pcVar5 = acStack_424 + iVar1 + 1;
        goto LAB_0001dbb4;
      }
      iVar1 = iVar3;
    } while (iVar3 != 0x400);
    pcVar5 = acStack_24;
  }
LAB_0001dbb4:
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = 0;
  *pcVar5 = '\0';
  acStack_424[sVar2] = ':';
  if (0 < iVar1) {
    puVar6 = *(undefined4 **)(param_1 + 0xc);
    puVar7 = puVar6;
    do {
      puVar8 = puVar7 + 1;
      pcVar5 = (char *)*puVar7;
      if ((pcVar5 != (char *)0x0) && (iVar4 = strncmp(pcVar5,acStack_424,sVar2 + 1), iVar4 == 0)) {
        *(char **)(param_3 + iVar3 * 4) = pcVar5;
        iVar3 = iVar3 + 1;
      }
      puVar7 = puVar8;
    } while (puVar6 + iVar1 != puVar8);
  }
  return param_3;
}



/* ===== iniparser_set @ 0001dc4c size=156 ===== */

void iniparser_set(undefined4 param_1,byte *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  uint __c;
  int iVar3;
  undefined1 *puVar4;
  undefined1 local_424 [1032];
  
  puVar2 = (undefined1 *)0x0;
  if (param_2 != (byte *)0x0) {
    __c = (uint)*param_2;
    if (__c == 0) {
      puVar4 = local_424;
    }
    else {
      iVar3 = 0;
      do {
        iVar1 = tolower(__c);
        param_2 = param_2 + 1;
        __c = (uint)*param_2;
        local_424[iVar3] = (char)iVar1;
        iVar1 = iVar3 + 1;
        if (__c == 0) {
          puVar4 = local_424 + iVar3 + 1;
          goto LAB_0001dcb0;
        }
        iVar3 = iVar1;
      } while (iVar1 != 0x400);
      puVar4 = local_424 + 0x400;
    }
LAB_0001dcb0:
    puVar2 = local_424;
    *puVar4 = 0;
  }
  dictionary_set(param_1,puVar2,param_3);
  return;
}



/* ===== iniparser_unset @ 0001dce8 size=148 ===== */

void iniparser_unset(undefined4 param_1,byte *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  uint __c;
  int iVar3;
  undefined1 *puVar4;
  undefined1 local_41c [1028];
  
  puVar2 = (undefined1 *)0x0;
  if (param_2 != (byte *)0x0) {
    __c = (uint)*param_2;
    if (__c == 0) {
      puVar4 = local_41c;
    }
    else {
      iVar3 = 0;
      do {
        iVar1 = tolower(__c);
        param_2 = param_2 + 1;
        __c = (uint)*param_2;
        local_41c[iVar3] = (char)iVar1;
        iVar1 = iVar3 + 1;
        if (__c == 0) {
          puVar4 = local_41c + iVar3 + 1;
          goto LAB_0001dd48;
        }
        iVar3 = iVar1;
      } while (iVar1 != 0x400);
      puVar4 = local_41c + 0x400;
    }
LAB_0001dd48:
    puVar2 = local_41c;
    *puVar4 = 0;
  }
  dictionary_unset(param_1,puVar2);
  return;
}



/* ===== iniparser_load @ 0001dd7c size=1644 ===== */

int iniparser_load(char *param_1)

{
  char cVar1;
  int iVar2;
  FILE *__stream;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  int iVar6;
  byte *pbVar7;
  uint __c;
  uint uVar8;
  uint uVar9;
  char *__format;
  char *__format_00;
  char *__format_01;
  int iVar10;
  char *__s;
  int iVar11;
  byte *__s_00;
  int iVar12;
  int local_185c;
  int local_1858;
  char acStack_183d [1029];
  byte local_1438 [1027];
  byte abStack_1035 [1029];
  char local_c30 [1028];
  char acStack_82c [2056];
  
  iVar2 = DAT_0001e3ec;
  __stream = fopen64(param_1,(char *)(DAT_0001e3e8 + 0x1dd98));
  if (__stream == (FILE *)0x0) {
    (**(code **)(DAT_0001e424 + 0x1e2b8))(DAT_0001e428 + 0x1e2c0,param_1);
    return 0;
  }
  iVar3 = dictionary_new(0);
  local_185c = iVar3;
  if (iVar3 != 0) {
    __s = acStack_183d + 1;
    __s_00 = abStack_1035 + 1;
    memset(__s,0,0x400);
    memset(local_1438,0,0x400);
    iVar12 = 0x400;
    memset(__s_00,0,0x400);
    local_1858 = 0;
    iVar11 = 0;
    memset(local_c30,0,0x400);
    __format = (char *)(DAT_0001e3f0 + 0x1de3c);
    __format_00 = (char *)(DAT_0001e3f4 + 0x1de48);
    __format_01 = (char *)(DAT_0001e3f8 + 0x1de54);
    iVar6 = 0;
    while (pcVar4 = fgets(__s + iVar6,iVar12,__stream), pcVar4 != (char *)0x0) {
      iVar11 = iVar11 + 1;
      sVar5 = strlen(__s);
      iVar10 = sVar5 - 1;
      if (0 < iVar10) {
        if ((acStack_183d[sVar5] != '\n') && (iVar6 = feof(__stream), iVar6 == 0)) {
          (**(code **)(DAT_0001e42c + 0x1e2f0))(DAT_0001e430 + 0x1e2f8,param_1,iVar11);
          dictionary_del(iVar3);
          fclose(__stream);
          return 0;
        }
        pbVar7 = (byte *)(__s + sVar5);
        iVar6 = **(int **)(iVar2 + 0x1dda4 + DAT_0001e3fc);
        do {
          pbVar7 = pbVar7 + -1;
          uVar8 = (uint)*pbVar7;
          if ((uVar8 != 10) && ((*(ushort *)(iVar6 + uVar8 * 2) & 0x20) == 0)) goto LAB_0001df00;
          iVar10 = iVar10 + -1;
          *pbVar7 = 0;
        } while (iVar10 != -1);
        uVar8 = (uint)(byte)acStack_183d[1];
        iVar10 = 0;
LAB_0001df00:
        if (uVar8 == 0x5c) {
          iVar12 = 0x400 - iVar10;
          iVar6 = iVar10;
        }
        else {
          sVar5 = strlen(__s);
          pcVar4 = malloc(sVar5 + 1);
          if (pcVar4 != (char *)0x0) {
            memcpy(pcVar4,__s,sVar5 + 1);
          }
          iVar6 = FUN_0001d3e8(pcVar4);
          if ((iVar6 == 0) || (cVar1 = *pcVar4, cVar1 == ';' || cVar1 == '#')) {
            free(pcVar4);
LAB_0001e038:
            iVar12 = 0x400;
            memset(__s,0,0x400);
            iVar6 = 0;
          }
          else {
            if ((cVar1 == '[') && (uVar8 = iVar6 - 1, pcVar4[uVar8] == ']')) {
              sscanf(pcVar4,(char *)(DAT_0001e434 + 0x1e33c),local_1438);
              FUN_0001d3e8(local_1438);
              __c = (uint)local_1438[0];
              pbVar7 = local_1438;
              if (__c != 0 && uVar8 != 0) {
                do {
                  iVar6 = tolower(__c);
                  *pbVar7 = (byte)iVar6;
                  pbVar7 = pbVar7 + 1;
                  __c = (uint)*pbVar7;
                  uVar9 = (int)pbVar7 - (int)local_1438;
                } while ((__c == 0 || uVar9 <= uVar8) && (__c != 0 && uVar8 != uVar9));
              }
              *pbVar7 = 0;
              free(pcVar4);
              iVar6 = dictionary_set(iVar3,local_1438,0);
            }
            else {
              iVar12 = sscanf(pcVar4,__format,__s_00,local_c30);
              if ((iVar12 == 2) ||
                 (iVar12 = sscanf(pcVar4,__format_01,__s_00,local_c30), iVar12 == 2)) {
                FUN_0001d3e8(__s_00);
                uVar8 = (uint)abStack_1035[1];
                pbVar7 = __s_00;
                if ((uVar8 != 0) && (iVar6 + -1 != 0)) {
                  do {
                    iVar12 = tolower(uVar8);
                    *pbVar7 = (byte)iVar12;
                    pbVar7 = pbVar7 + 1;
                    uVar8 = (uint)*pbVar7;
                    if (uVar8 == 0) break;
                  } while (__s_00 + iVar6 + -1 != pbVar7);
                }
                *pbVar7 = 0;
                free(pcVar4);
              }
              else {
                iVar12 = sscanf(pcVar4,(char *)(DAT_0001e400 + 0x1dfb8),__s_00,local_c30);
                if (iVar12 == 2) {
                  FUN_0001d3e8(__s_00);
                  uVar8 = (uint)abStack_1035[1];
                  pbVar7 = __s_00;
                  if ((uVar8 != 0) && (iVar6 + -1 != 0)) {
                    do {
                      iVar12 = tolower(uVar8);
                      *pbVar7 = (byte)iVar12;
                      pbVar7 = pbVar7 + 1;
                      uVar8 = (uint)*pbVar7;
                      if (uVar8 == 0) break;
                    } while (__s_00 + iVar6 + -1 != pbVar7);
                  }
                  *pbVar7 = 0;
                  FUN_0001d3e8(local_c30);
                  iVar6 = strcmp(local_c30,(char *)(DAT_0001e41c + 0x1e268));
                  if ((iVar6 == 0) ||
                     (iVar6 = strcmp(local_c30,(char *)(DAT_0001e420 + 0x1e280)), iVar6 == 0)) {
                    local_c30[0] = '\0';
                    free(pcVar4);
                  }
                  else {
                    free(pcVar4);
                  }
                }
                else {
                  iVar12 = sscanf(pcVar4,(char *)(DAT_0001e404 + 0x1dfd8),__s_00,local_c30);
                  if ((iVar12 != 2) &&
                     (iVar12 = sscanf(pcVar4,(char *)(DAT_0001e408 + 0x1dff8),__s_00,local_c30),
                     iVar12 != 2)) {
                    local_1858 = local_1858 + 1;
                    free(pcVar4);
                    (**(code **)(DAT_0001e40c + 0x1e028))(DAT_0001e410 + 0x1e034,param_1,iVar11,__s)
                    ;
                    goto LAB_0001e038;
                  }
                  FUN_0001d3e8(__s_00);
                  uVar8 = (uint)abStack_1035[1];
                  pbVar7 = __s_00;
                  if ((uVar8 != 0) && (iVar6 + -1 != 0)) {
                    do {
                      iVar12 = tolower(uVar8);
                      *pbVar7 = (byte)iVar12;
                      pbVar7 = pbVar7 + 1;
                      uVar8 = (uint)*pbVar7;
                      if (uVar8 == 0) break;
                    } while (__s_00 + iVar6 + -1 != pbVar7);
                  }
                  *pbVar7 = 0;
                  local_c30[0] = '\0';
                  free(pcVar4);
                }
              }
              sprintf(acStack_82c,__format_00,local_1438,__s_00);
              iVar6 = dictionary_set(iVar3,acStack_82c,local_c30);
            }
            memset(__s,0,0x400);
            if (iVar6 < 0) {
              (**(code **)(DAT_0001e414 + 0x1e138))(DAT_0001e418 + 0x1e13c);
              break;
            }
            iVar12 = 0x400;
            iVar6 = 0;
          }
        }
      }
    }
    if (local_1858 != 0) {
      local_185c = 0;
      dictionary_del(iVar3);
    }
  }
  fclose(__stream);
  return local_185c;
}



/* ===== iniparser_freedict @ 0001e438 size=4 ===== */

void iniparser_freedict(void *param_1)

{
  void *pvVar1;
  void *__ptr;
  int iVar2;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  if (*(int *)((int)param_1 + 4) < 1) {
LAB_0001e54c:
    __ptr = *(void **)((int)param_1 + 8);
  }
  else {
    iVar2 = 0;
    do {
      while( true ) {
        pvVar1 = *(void **)(*(int *)((int)param_1 + 0xc) + iVar2 * 4);
        if (pvVar1 != (void *)0x0) {
          free(pvVar1);
        }
        __ptr = *(void **)((int)param_1 + 8);
        pvVar1 = *(void **)((int)__ptr + iVar2 * 4);
        if (pvVar1 == (void *)0x0) break;
        free(pvVar1);
        iVar2 = iVar2 + 1;
        if (*(int *)((int)param_1 + 4) <= iVar2) goto LAB_0001e54c;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)param_1 + 4));
  }
  free(__ptr);
  free(*(void **)((int)param_1 + 0xc));
  free(*(void **)((int)param_1 + 0x10));
  free(param_1);
  return;
}



/* ===== dictionary_hash @ 0001e43c size=88 ===== */

int dictionary_hash(char *param_1)

{
  size_t sVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  sVar1 = strlen(param_1);
  if (sVar1 == 0) {
    return 0;
  }
  pbVar3 = (byte *)(param_1 + -1);
  uVar4 = 0;
  pbVar2 = pbVar3 + sVar1;
  do {
    pbVar3 = pbVar3 + 1;
    uVar4 = (*pbVar3 + uVar4) * 0x401;
    uVar4 = uVar4 ^ uVar4 >> 6;
  } while (pbVar2 != pbVar3);
  return (uVar4 * 9 ^ uVar4 * 9 >> 0xb) * 0x8001;
}



/* ===== dictionary_new @ 0001e494 size=96 ===== */

void * dictionary_new(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = calloc(1,0x14);
  if (pvVar1 != (void *)0x0) {
    if (param_1 < 0x80) {
      param_1 = 0x80;
    }
    *(uint *)((int)pvVar1 + 4) = param_1;
    pvVar2 = calloc(param_1,4);
    *(void **)((int)pvVar1 + 8) = pvVar2;
    pvVar2 = calloc(param_1,4);
    *(void **)((int)pvVar1 + 0xc) = pvVar2;
    pvVar2 = calloc(param_1,4);
    *(void **)((int)pvVar1 + 0x10) = pvVar2;
  }
  return pvVar1;
}



/* ===== dictionary_del @ 0001e4f4 size=148 ===== */

void dictionary_del(void *param_1)

{
  void *pvVar1;
  void *__ptr;
  int iVar2;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  if (*(int *)((int)param_1 + 4) < 1) {
LAB_0001e54c:
    __ptr = *(void **)((int)param_1 + 8);
  }
  else {
    iVar2 = 0;
    do {
      while( true ) {
        pvVar1 = *(void **)(*(int *)((int)param_1 + 0xc) + iVar2 * 4);
        if (pvVar1 != (void *)0x0) {
          free(pvVar1);
        }
        __ptr = *(void **)((int)param_1 + 8);
        pvVar1 = *(void **)((int)__ptr + iVar2 * 4);
        if (pvVar1 == (void *)0x0) break;
        free(pvVar1);
        iVar2 = iVar2 + 1;
        if (*(int *)((int)param_1 + 4) <= iVar2) goto LAB_0001e54c;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)param_1 + 4));
  }
  free(__ptr);
  free(*(void **)((int)param_1 + 0xc));
  free(*(void **)((int)param_1 + 0x10));
  free(param_1);
  return;
}



/* ===== dictionary_get @ 0001e588 size=132 ===== */

undefined4 dictionary_get(int param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar1 = dictionary_hash(param_2);
  iVar5 = *(int *)(param_1 + 4);
  if (0 < iVar5) {
    iVar3 = 0;
    puVar4 = (undefined4 *)(*(int *)(param_1 + 0xc) + -4);
    do {
      puVar4 = puVar4 + 1;
      if ((((char *)*puVar4 != (char *)0x0) &&
          (*(int *)(*(int *)(param_1 + 0x10) + iVar3 * 4) == iVar1)) &&
         (iVar2 = strcmp(param_2,(char *)*puVar4), iVar2 == 0)) {
        return *(undefined4 *)(*(int *)(param_1 + 8) + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != iVar5);
  }
  return param_3;
}



/* ===== dictionary_set @ 0001e60c size=780 ===== */

undefined4 dictionary_set(int *param_1,char *param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  size_t sVar4;
  int *piVar5;
  void *pvVar6;
  int iVar7;
  void *__src;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  char *local_30;
  void *local_2c;
  
  if (param_1 == (int *)0x0 || param_2 == (char *)0x0) {
    return 0xffffffff;
  }
  iVar1 = dictionary_hash(param_2);
  iVar7 = *param_1;
  iVar9 = param_1[1];
  local_30 = param_3;
  if (iVar7 < 1) {
LAB_0001e714:
    if (iVar7 == iVar9) {
      sVar4 = iVar7 << 1;
      pvVar3 = calloc(sVar4,4);
      pvVar6 = calloc(sVar4,4);
      local_2c = calloc(sVar4,4);
      if (pvVar6 == (void *)0x0 || pvVar3 == (void *)0x0) {
        if (pvVar3 == (void *)0x0) goto LAB_0001e8ec;
      }
      else if (local_2c != (void *)0x0) {
        __src = (void *)param_1[2];
        sVar4 = iVar7 << 2;
        memcpy(pvVar3,__src,sVar4);
        memcpy(pvVar6,(void *)param_1[3],sVar4);
        memcpy(local_2c,(void *)param_1[4],sVar4);
        free(__src);
        free((void *)param_1[3]);
        free((void *)param_1[4]);
        param_1[4] = (int)local_2c;
        iVar9 = param_1[1] << 1;
        param_1[2] = (int)pvVar3;
        param_1[3] = (int)pvVar6;
        iVar7 = *param_1;
        param_1[1] = iVar9;
        goto LAB_0001e72c;
      }
      free(pvVar3);
LAB_0001e8ec:
      if (pvVar6 != (void *)0x0) {
        free(pvVar6);
      }
      if (local_2c == (void *)0x0) {
        return 0xffffffff;
      }
      free(local_2c);
      return 0xffffffff;
    }
  }
  else if (0 < iVar9) {
    puVar10 = (undefined4 *)(param_1[3] + -4);
    iVar8 = 0;
    do {
      puVar10 = puVar10 + 1;
      if ((((char *)*puVar10 != (char *)0x0) && (*(int *)(param_1[4] + iVar8 * 4) == iVar1)) &&
         (iVar2 = strcmp(param_2,(char *)*puVar10), iVar2 == 0)) {
        iVar9 = param_1[2];
        pvVar3 = *(void **)(iVar9 + iVar8 * 4);
        if (pvVar3 != (void *)0x0) {
          free(pvVar3);
          iVar9 = param_1[2];
        }
        if (param_3 != (char *)0x0) {
          sVar4 = strlen(param_3);
          local_30 = malloc(sVar4 + 1);
          if (local_30 != (char *)0x0) {
            memcpy(local_30,param_3,sVar4 + 1);
          }
        }
        *(char **)(iVar9 + iVar8 * 4) = local_30;
        return 0;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != iVar9);
    goto LAB_0001e714;
  }
  local_2c = (void *)param_1[4];
  pvVar6 = (void *)param_1[3];
  pvVar3 = (void *)param_1[2];
LAB_0001e72c:
  do {
    iVar8 = iVar7 * 4;
    piVar5 = (int *)((int)pvVar6 + iVar8);
    do {
      iVar7 = iVar7 + 1;
      if (*piVar5 == 0) {
        sVar4 = strlen(param_2);
        pvVar6 = malloc(sVar4 + 1);
        if (pvVar6 != (void *)0x0) {
          memcpy(pvVar6,param_2,sVar4 + 1);
        }
        *piVar5 = (int)pvVar6;
        if (param_3 != (char *)0x0) {
          sVar4 = strlen(param_3);
          local_30 = malloc(sVar4 + 1);
          if (local_30 != (char *)0x0) {
            memcpy(local_30,param_3,sVar4 + 1);
          }
        }
        *(char **)((int)pvVar3 + iVar8) = local_30;
        *(int *)((int)local_2c + iVar8) = iVar1;
        *param_1 = *param_1 + 1;
        return 0;
      }
      iVar8 = iVar7 * 4;
      piVar5 = piVar5 + 1;
    } while (iVar9 != iVar7);
    iVar7 = 0;
  } while( true );
}



/* ===== dictionary_unset @ 0001e918 size=240 ===== */

void dictionary_unset(int *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *__s2;
  undefined4 *puVar5;
  int iVar6;
  
  if (param_2 != (char *)0x0 && param_1 != (int *)0x0) {
    iVar2 = dictionary_hash(param_2);
    iVar6 = param_1[1];
    if (0 < iVar6) {
      puVar5 = (undefined4 *)(param_1[3] + -4);
      iVar4 = 0;
      do {
        puVar5 = puVar5 + 1;
        __s2 = (char *)*puVar5;
        iVar1 = iVar4 * 4;
        if (((__s2 != (char *)0x0) && (*(int *)(param_1[4] + iVar4 * 4) == iVar2)) &&
           (iVar3 = strcmp(param_2,__s2), iVar3 == 0)) {
          free(__s2);
          iVar2 = param_1[2];
          *(undefined4 *)(param_1[3] + iVar1) = 0;
          if (*(void **)(iVar2 + iVar1) != (void *)0x0) {
            free(*(void **)(iVar2 + iVar1));
            *(undefined4 *)(param_1[2] + iVar1) = 0;
          }
          *(undefined4 *)(param_1[4] + iVar1) = 0;
          *param_1 = *param_1 + -1;
          return;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != iVar6);
    }
  }
  return;
}



/* ===== dictionary_dump @ 0001ea08 size=168 ===== */

void dictionary_dump(int *param_1,FILE *param_2)

{
  int iVar1;
  int iVar2;
  char *__format;
  int iVar3;
  int iVar4;
  
  if (param_1 == (int *)0x0 || param_2 == (FILE *)0x0) {
    return;
  }
  if (0 < *param_1) {
    iVar4 = param_1[1];
    if (iVar4 < 1) {
      return;
    }
    __format = (char *)(DAT_0001eab0 + 0x1ea54);
    iVar3 = DAT_0001eab4 + 0x1ea58;
    iVar2 = 0;
    do {
      iVar1 = *(int *)(param_1[3] + iVar2 * 4);
      if (iVar1 != 0) {
        iVar4 = *(int *)(param_1[2] + iVar2 * 4);
        if (iVar4 == 0) {
          iVar4 = iVar3;
        }
        fprintf(param_2,__format,iVar1,iVar4);
        iVar4 = param_1[1];
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar4);
    return;
  }
  fwrite((void *)(DAT_0001eab8 + 0x1eaac),1,0x11,param_2);
  return;
}



/* ===== camera_source_deinit @ 0001eac0 size=448 ===== */

undefined4 camera_source_deinit(int *param_1)

{
  timespec tVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int local_94;
  timespec local_90;
  timespec local_88;
  size_t local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  size_t local_70;
  undefined4 uStack_6c;
  size_t local_68;
  undefined4 uStack_64;
  size_t local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  size_t local_50;
  size_t sStack_4c;
  undefined4 uStack_48;
  
  if ((param_1 != (int *)0x0) && (iVar4 = *param_1, -1 < iVar4)) {
    local_94 = param_1[2];
    uVar5 = (uint)DAT_0001ec80;
    iVar6 = DAT_0001ec80._4_4_;
    while ((iVar2 = ioctl(iVar4,0x40045613,&local_94), iVar2 != 0 &&
           ((iVar2 != -1 || (piVar3 = __errno_location(), *piVar3 == 4 || *piVar3 == 0xb))))) {
      local_88.tv_sec = uVar5;
      local_88.tv_nsec = iVar6;
      nanosleep(&local_88,(timespec *)0x0);
    }
    if (param_1[1] != 0) {
      sVar7 = 0;
      uVar8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uVar9 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uVar10 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      iVar4 = DAT_0001ec88 + 0x1eb68;
      tVar1.tv_nsec = DAT_0001ec80._4_4_;
      tVar1.tv_sec = (uint)DAT_0001ec80;
      uVar5 = 0;
      do {
        while( true ) {
          iVar6 = *param_1;
          local_88.tv_nsec = local_94;
          local_58 = 1;
          local_88.tv_sec = uVar5;
          local_80 = sVar7;
          uStack_7c = uVar8;
          uStack_78 = uVar9;
          uStack_74 = uVar10;
          local_70 = sVar7;
          uStack_6c = uVar8;
          local_68 = sVar7;
          uStack_64 = uVar8;
          local_60 = sVar7;
          uStack_5c = uVar8;
          uStack_54 = uVar8;
          local_50 = sVar7;
          sStack_4c = sVar7;
          uStack_48 = uVar8;
          while ((iVar2 = ioctl(iVar6,0xc0445609,&local_88), iVar2 != 0 &&
                 ((iVar2 != -1 || (piVar3 = __errno_location(), *piVar3 == 4 || *piVar3 == 0xb)))))
          {
            local_90 = tVar1;
            nanosleep(&local_90,(timespec *)0x0);
          }
          if (param_1[local_88.tv_sec * 5 + 8] == 0) break;
          uVar5 = uVar5 + 1;
          mpp_buffer_put_with_caller(param_1[local_88.tv_sec * 5 + 8],iVar4);
          munmap((void *)param_1[local_88.tv_sec * 5 + 4],local_50);
          if ((uint)param_1[1] <= uVar5) goto LAB_0001ec38;
        }
        uVar5 = uVar5 + 1;
        munmap((void *)param_1[local_88.tv_sec * 5 + 4],local_50);
      } while (uVar5 < (uint)param_1[1]);
    }
LAB_0001ec38:
    close(*param_1);
    mpp_osal_free(DAT_0001ec8c + 0x1ec50,param_1);
  }
  return 0;
}



/* ===== camera_source_get_frame @ 0001ec90 size=260 ===== */

uint camera_source_get_frame(int *param_1)

{
  timespec tVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  int __fd;
  timespec local_b0;
  undefined1 auStack_a8 [60];
  uint local_6c;
  int local_68;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined4 local_34;
  
  tVar1 = DAT_0001ed98;
  iVar4 = param_1[2];
  memset(&local_6c,0,0x44);
  puVar3 = (undefined1 *)0x1;
  local_3c = 1;
  if (iVar4 == 9) {
    local_34 = 1;
    puVar3 = auStack_a8;
  }
  __fd = *param_1;
  local_68 = iVar4;
  if (iVar4 == 9) {
    local_38 = puVar3;
  }
  while( true ) {
    iVar4 = ioctl(__fd,0xc0445611,&local_6c);
    if (iVar4 == 0) {
      uVar5 = local_6c;
      if ((uint)param_1[1] < local_6c) {
        uVar5 = 0xffffffff;
        _mpp_err(DAT_0001eda8 + 0x1ed70,DAT_0001eda4 + 0x1ed6c,DAT_0001eda0 + 0x1ed68);
      }
      return uVar5;
    }
    if ((iVar4 == -1) && (piVar2 = __errno_location(), *piVar2 != 4 && *piVar2 != 0xb)) break;
    local_b0 = tVar1;
    nanosleep(&local_b0,(timespec *)0x0);
  }
  _mpp_err(DAT_0001edb4 + 0x1ed90,DAT_0001edb0 + 0x1ed8c,DAT_0001edac + 0x1ed88);
  return 0xffffffff;
}



/* ===== camera_source_put_frame @ 0001edb8 size=244 ===== */

undefined4 camera_source_put_frame(int *param_1,int param_2)

{
  timespec tVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int __fd;
  bool bVar5;
  timespec local_a8;
  undefined4 auStack_a0 [15];
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 *puStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 *puStack_48;
  undefined4 local_44;
  undefined4 *puStack_40;
  undefined4 local_3c;
  undefined4 *puStack_38;
  undefined4 local_34;
  undefined4 *puStack_30;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  
  tVar1 = DAT_0001eeb0;
  if (param_2 < 0) {
    return 0;
  }
  puStack_58 = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_60 = param_1[2];
  __fd = *param_1;
  bVar5 = local_60 == 9;
  puVar4 = &local_5c;
  local_34 = 1;
  local_5c = 0;
  if (bVar5) {
    puVar4 = auStack_a0;
  }
  local_2c = (uint)bVar5;
  local_4c = 0;
  puStack_30 = puStack_58;
  if (bVar5) {
    puStack_30 = puVar4;
  }
  local_44 = 0;
  local_3c = 0;
  uStack_28 = 0;
  local_64 = param_2;
  puStack_48 = puStack_58;
  puStack_40 = puStack_58;
  puStack_38 = puStack_58;
  puStack_24 = puStack_58;
  while( true ) {
    iVar3 = ioctl(__fd,0xc044560f,&local_64);
    if (iVar3 == 0) {
      return 0;
    }
    if ((iVar3 == -1) && (piVar2 = __errno_location(), *piVar2 != 4 && *piVar2 != 0xb)) break;
    local_a8 = tVar1;
    nanosleep(&local_a8,(timespec *)0x0);
  }
  _mpp_err(DAT_0001eec0 + 0x1eea8,DAT_0001eebc + 0x1eea4,DAT_0001eeb8 + 0x1eea0);
  return 0;
}



/* ===== camera_source_init @ 0001eec8 size=2200 ===== */

int * camera_source_init(char *param_1,int param_2,long param_3,undefined4 param_4,uint param_5)

{
  timespec tVar1;
  timespec tVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  int *piVar7;
  int *piVar8;
  timespec *ptVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint __len;
  uint uVar13;
  __time_t _Var14;
  timespec tVar15;
  timespec tVar16;
  timespec tVar17;
  timespec *ptVar18;
  long lVar19;
  undefined4 uVar20;
  timespec *local_270;
  int local_26c;
  timespec *local_268;
  undefined4 local_264;
  undefined8 local_260;
  timespec local_258;
  undefined8 local_250;
  int local_248;
  uint local_244;
  timespec local_240 [8];
  timespec local_200;
  uint local_1f8;
  undefined4 uStack_1f4;
  int local_1f0;
  undefined4 uStack_1ec;
  uint local_1e8;
  timespec *ptStack_1e4;
  uint local_1e0;
  timespec *ptStack_1dc;
  uint local_1d8;
  timespec *ptStack_1d4;
  uint local_1d0;
  timespec *ptStack_1cc;
  uint local_1c8;
  timespec *ptStack_1c4;
  timespec local_1c0;
  uint local_1b8;
  timespec *ptStack_1b4;
  int iStack_1b0;
  undefined4 uStack_1ac;
  uint local_1a8;
  timespec *ptStack_1a4;
  uint local_1a0;
  timespec *ptStack_19c;
  uint local_198;
  timespec *ptStack_194;
  undefined4 local_190;
  timespec *ptStack_18c;
  uint local_188;
  uint uStack_184;
  timespec *ptStack_180;
  undefined1 auStack_178 [84];
  uint local_124;
  timespec local_110;
  undefined4 local_108;
  int local_104;
  
  iVar11 = DAT_0001f2e0 + 0x1eef0;
  piVar3 = (int *)mpp_osal_calloc(iVar11,0xd8);
  if (piVar3 == (int *)0x0) {
    return (int *)0x0;
  }
  piVar3[1] = param_2;
  iVar4 = open64(param_1,2,0);
  *piVar3 = iVar4;
  if (iVar4 < 0) {
    _mpp_err(DAT_0001f794 + 0x1f5b8,DAT_0001f790 + 0x1f5b4,iVar11);
    goto LAB_0001f5b8;
  }
  tVar15.tv_nsec = DAT_0001f2d8._4_4_;
  tVar15.tv_sec = (__time_t)DAT_0001f2d8;
  while (iVar11 = ioctl(iVar4,0x80685600,auStack_178), iVar11 != 0) {
    if ((iVar11 == -1) && (piVar8 = __errno_location(), *piVar8 != 4 && *piVar8 != 0xb)) {
      _mpp_err(DAT_0001f7d0 + 0x1f670,DAT_0001f7cc + 0x1f66c,DAT_0001f7c8 + 0x1f668);
      goto LAB_0001f5b8;
    }
    local_110 = tVar15;
    nanosleep(&local_110,(timespec *)0x0);
  }
  if ((local_124 & 0x1001) == 0) {
    _mpp_err(DAT_0001f7dc + 0x1f690,DAT_0001f7d8 + 0x1f68c,DAT_0001f7d4 + 0x1f688);
    goto LAB_0001f5b8;
  }
  if ((local_124 & 0x4000000) == 0) {
    _mpp_err(DAT_0001f7e8 + 0x1f6b0,DAT_0001f7e4 + 0x1f6ac,DAT_0001f7e0 + 0x1f6a8);
    goto LAB_0001f5b8;
  }
  memset(&local_110.tv_nsec,0,200);
  if ((local_124 & 0x1000) == 0) {
    local_270 = (timespec *)0x1;
  }
  else {
    local_270 = (timespec *)0x9;
  }
  local_110.tv_nsec = param_3;
  local_110.tv_sec = (__time_t)local_270;
  if ((param_5 & 0xf0000) == 0) {
    if (0x11 < (param_5 & 0xfffff)) goto LAB_0001efd8;
    local_104 = *(int *)(DAT_0001f78c + 0x1f598 + param_5 * 4);
LAB_0001f580:
    if (local_104 == 0) goto LAB_0001efd8;
  }
  else {
    if (((param_5 & 0xf0000) == 0x10000) && ((param_5 & 0xfffff) < 0x10010)) {
      local_104 = *(int *)(DAT_0001f788 + 0x1f57c + (param_5 - 0x10000) * 4);
      goto LAB_0001f580;
    }
LAB_0001efd8:
    local_104 = 0x3231564e;
  }
  piVar3[2] = (int)local_270;
  iVar11 = *piVar3;
  tVar16.tv_nsec = DAT_0001f2d8._4_4_;
  tVar16.tv_sec = (__time_t)DAT_0001f2d8;
  local_108 = param_4;
  while (iVar4 = ioctl(iVar11,0xc0cc5605,&local_110), iVar4 != 0) {
    if ((iVar4 == -1) && (piVar8 = __errno_location(), *piVar8 != 4 && *piVar8 != 0xb)) {
      _mpp_err(DAT_0001f7f4 + 0x1f6d0,DAT_0001f7f0 + 0x1f6cc,DAT_0001f7ec + 0x1f6c8);
      goto LAB_0001f5b8;
    }
    local_1c0 = tVar16;
    nanosleep(&local_1c0,(timespec *)0x0);
  }
  iVar11 = *piVar3;
  tVar17.tv_nsec = DAT_0001f2d8._4_4_;
  tVar17.tv_sec = (__time_t)DAT_0001f2d8;
  while (iVar4 = ioctl(iVar11,0xc0cc5604,&local_110), iVar4 != 0) {
    if ((iVar4 == -1) && (piVar8 = __errno_location(), *piVar8 != 4 && *piVar8 != 0xb)) {
      _mpp_err(DAT_0001f800 + 0x1f708,DAT_0001f7fc + 0x1f704,DAT_0001f7f8 + 0x1f700);
      goto LAB_0001f5b8;
    }
    local_1c0 = tVar17;
    nanosleep(&local_1c0,(timespec *)0x0);
  }
  _Var14 = (__time_t)DAT_0001f2d8;
  lVar19 = DAT_0001f2d8._4_4_;
  _mpp_log(DAT_0001f2e8 + 0x1f0e0,DAT_0001f2e4 + 0x1f0cc,0,local_110.tv_nsec,local_108);
  local_26c = piVar3[1];
  iVar11 = *piVar3;
  local_264 = 1;
  local_260 = 0;
  local_268 = local_270;
  while (iVar4 = ioctl(iVar11,0xc0145608,&local_26c), iVar4 != 0) {
    if ((iVar4 == -1) && (piVar8 = __errno_location(), *piVar8 != 4 && *piVar8 != 0xb)) {
      _mpp_err(DAT_0001f818 + 0x1f754,DAT_0001f814 + 0x1f750,DAT_0001f810 + 0x1f74c);
      goto LAB_0001f5b8;
    }
    local_1c0.tv_nsec = lVar19;
    local_1c0.tv_sec = _Var14;
    nanosleep(&local_1c0,(timespec *)0x0);
  }
  if (local_26c == piVar3[1]) {
    if (local_26c != 0) {
      uVar10 = 0;
      ptVar18 = *(timespec **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      iVar11 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uVar20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      tVar1.tv_nsec = DAT_0001f2d8._4_4_;
      tVar1.tv_sec = (__time_t)DAT_0001f2d8;
      uVar13 = 0;
      piVar8 = piVar3 + 8;
      do {
        iVar4 = *piVar3;
        local_1c0.tv_nsec = (long)local_270;
        local_1c0.tv_sec = uVar13;
        ptVar9 = local_270;
        if (local_270 == (timespec *)0x9) {
          ptVar9 = local_240;
        }
        local_190 = 1;
        local_1b8 = uVar10;
        ptStack_1b4 = ptVar18;
        iStack_1b0 = iVar11;
        uStack_1ac = uVar20;
        local_1a8 = uVar10;
        ptStack_1a4 = ptVar18;
        local_1a0 = uVar10;
        ptStack_19c = ptVar18;
        local_198 = uVar10;
        ptStack_194 = ptVar18;
        ptStack_18c = ptVar18;
        local_188 = uVar10;
        uStack_184 = uVar10;
        ptStack_180 = ptVar18;
        if (local_270 == (timespec *)0x9) {
          local_188 = 1;
          ptStack_18c = ptVar9;
        }
        while (iVar5 = ioctl(iVar4,0xc0445609,&local_1c0), iVar5 != 0) {
          if ((iVar5 == -1) && (piVar7 = __errno_location(), *piVar7 != 4 && *piVar7 != 0xb)) {
            _mpp_err(DAT_0001f7a0 + 0x1f5f0,DAT_0001f79c + 0x1f5ec,DAT_0001f798 + 0x1f5e8);
            goto LAB_0001f5b8;
          }
          local_200 = tVar1;
          nanosleep(&local_200,(timespec *)0x0);
        }
        pvVar6 = mmap64((void *)0x0,local_188,3,1,*piVar3,ZEXT48(ptStack_18c));
        piVar8[-4] = (int)pvVar6;
        __len = local_188;
        ptVar9 = ptStack_18c;
        if (local_1c0.tv_nsec == 9) {
          __len = ptStack_18c->tv_nsec;
          ptVar9 = (timespec *)ptStack_18c[1].tv_sec;
        }
        pvVar6 = mmap64((void *)0x0,__len,3,1,*piVar3,ZEXT48(ptVar9));
        piVar8[-4] = (int)pvVar6;
        if (pvVar6 == (void *)0xffffffff) {
          _mpp_err(DAT_0001f7ac + 0x1f610,DAT_0001f7a8 + 0x1f60c,DAT_0001f7a4 + 0x1f608);
          goto LAB_0001f5b8;
        }
        uStack_1f4 = 0x80000;
        iVar4 = *piVar3;
        local_200.tv_nsec = uVar13;
        local_200.tv_sec = (__time_t)local_270;
        local_1f8 = uVar10;
        local_1f0 = iVar11;
        uStack_1ec = uVar20;
        local_1e8 = uVar10;
        ptStack_1e4 = ptVar18;
        local_1e0 = uVar10;
        ptStack_1dc = ptVar18;
        local_1d8 = uVar10;
        ptStack_1d4 = ptVar18;
        local_1d0 = uVar10;
        ptStack_1cc = ptVar18;
        local_1c8 = uVar10;
        ptStack_1c4 = ptVar18;
        while (iVar5 = ioctl(iVar4,0xc0405610,&local_200), iVar5 != 0) {
          if ((iVar5 == -1) && (piVar7 = __errno_location(), *piVar7 != 4 && *piVar7 != 0xb)) {
            _mpp_err(DAT_0001f7b8 + 0x1f630,DAT_0001f7b4 + 0x1f62c,DAT_0001f7b0 + 0x1f628);
            goto LAB_0001f5b8;
          }
          local_258 = tVar1;
          nanosleep(&local_258,(timespec *)0x0);
        }
        iVar4 = DAT_0001f2ec + 0x1f354;
        uVar12 = uVar13 + 1;
        _mpp_log(iVar4,DAT_0001f2f0 + 0x1f364,0,uVar13,local_1f0);
        local_248 = local_1f0;
        local_250 = 0;
        local_244 = __len >> 0x1b;
        local_258 = (timespec)(CONCAT44(__len,2) & 0x7ffffffffffffff);
        mpp_buffer_import_with_tag(0,&local_258,piVar8,iVar4,DAT_0001f2f4 + 0x1f388);
        piVar8[-2] = local_1f0;
        uVar13 = uVar12;
        piVar8 = piVar8 + 5;
      } while (uVar12 < (uint)piVar3[1]);
      if (piVar3[1] != 0) {
        uVar10 = 0;
        ptVar18 = *(timespec **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        iVar11 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uVar20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        tVar2.tv_nsec = DAT_0001f780._4_4_;
        tVar2.tv_sec = (__time_t)DAT_0001f780;
        uVar13 = 0;
        do {
          local_190 = 1;
          local_1c0.tv_nsec = (long)local_270;
          local_1c0.tv_sec = uVar13;
          ptVar9 = local_270;
          if (local_270 == (timespec *)0x9) {
            ptVar9 = &local_200;
          }
          iVar4 = *piVar3;
          local_1b8 = uVar10;
          ptStack_1b4 = ptVar18;
          iStack_1b0 = iVar11;
          uStack_1ac = uVar20;
          local_1a8 = uVar10;
          ptStack_1a4 = ptVar18;
          local_1a0 = uVar10;
          ptStack_19c = ptVar18;
          local_198 = uVar10;
          ptStack_194 = ptVar18;
          ptStack_18c = ptVar18;
          local_188 = uVar10;
          uStack_184 = uVar10;
          ptStack_180 = ptVar18;
          if (local_270 == (timespec *)0x9) {
            local_188 = 1;
            ptStack_18c = ptVar9;
          }
          while (iVar5 = ioctl(iVar4,0xc044560f,&local_1c0), iVar5 != 0) {
            if ((iVar5 == -1) && (piVar8 = __errno_location(), *piVar8 != 4 && *piVar8 != 0xb)) {
              _mpp_err(DAT_0001f80c + 0x1f72c,DAT_0001f808 + 0x1f728,DAT_0001f804 + 0x1f724,uVar13);
              camera_source_deinit(piVar3);
              goto LAB_0001f5b8;
            }
            local_240[0] = tVar2;
            nanosleep(local_240,(timespec *)0x0);
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < (uint)piVar3[1]);
      }
    }
    iVar11 = *piVar3;
    _Var14 = (__time_t)DAT_0001f780;
    lVar19 = DAT_0001f780._4_4_;
    while( true ) {
      iVar4 = ioctl(iVar11,0x40045612,&local_270);
      if (iVar4 == 0) {
        if (piVar3[1] != 0) {
          uVar10 = 0;
          do {
            while (iVar11 = camera_source_get_frame(piVar3), -1 < iVar11) {
              camera_source_put_frame(piVar3);
              uVar10 = uVar10 + 1;
              if ((uint)piVar3[1] <= uVar10) {
                return piVar3;
              }
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < (uint)piVar3[1]);
        }
        return piVar3;
      }
      if ((iVar4 == -1) && (piVar8 = __errno_location(), *piVar8 != 4 && *piVar8 != 0xb)) break;
      local_200.tv_nsec = lVar19;
      local_200.tv_sec = _Var14;
      nanosleep(&local_200,(timespec *)0x0);
    }
    _mpp_err(DAT_0001f824 + 0x1f774,DAT_0001f820 + 0x1f770,DAT_0001f81c + 0x1f76c);
    camera_source_deinit(piVar3);
  }
  else {
    _mpp_err(DAT_0001f7c4 + 0x1f650,DAT_0001f7c0 + 0x1f64c,DAT_0001f7bc + 0x1f648);
  }
LAB_0001f5b8:
  camera_source_deinit(piVar3);
  return (int *)0x0;
}



/* ===== camera_frame_to_buf @ 0001f828 size=24 ===== */

undefined4 camera_frame_to_buf(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 * 0x14 + param_1 + 0x20);
  }
  return uVar1;
}



/* ===== gen_smpte_bar_argb @ 0001f840 size=856 ===== */

undefined4 gen_smpte_bar_argb(undefined4 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  FILE *__stream;
  char *__modes;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  longlong lVar14;
  undefined1 *local_8c;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 auStack_68 [17];
  
  local_80 = *(undefined4 *)(DAT_0001fb98 + 0x1f860);
  uStack_7c = *(undefined4 *)(DAT_0001fb98 + 0x1f864);
  uStack_78 = *(undefined4 *)(DAT_0001fb98 + 0x1f868);
  uStack_74 = *(undefined4 *)(DAT_0001fb98 + 0x1f86c);
  puVar11 = &local_80;
  local_70 = *(undefined4 *)(DAT_0001fb98 + 0x1f870);
  uStack_6c = *(undefined4 *)(DAT_0001fb98 + 0x1f874);
  local_8c = malloc(param_3 * (int)param_2 * 0x20);
  __modes = (char *)(DAT_0001fb9c + 0x1f890);
  *param_1 = local_8c;
  __stream = fopen64((char *)(DAT_0001fba0 + 0x1f8a0),__modes);
  if (__stream == (FILE *)0x0) {
    if (param_3 != 0) {
      do {
        iVar10 = 0;
        puVar6 = local_8c;
        do {
          if (param_2 != (undefined1 *)0x0) {
            uVar3 = *(undefined1 *)puVar11;
            uVar4 = *(undefined1 *)((int)puVar11 + 1);
            uVar5 = *(undefined1 *)((int)puVar11 + 2);
            if (param_2 + -1 < (undefined1 *)0xf) {
              puVar7 = (undefined1 *)0x0;
            }
            else {
              puVar7 = puVar6;
              do {
                puVar9 = puVar7 + 0x40;
                puVar8 = (undefined1 *)0x330;
                puVar12 = (undefined1 *)0x340;
                puVar1 = (undefined1 *)0x350;
                puVar2 = (undefined1 *)0x360;
                lVar14 = 8;
                puVar13 = puVar7;
                while( true ) {
                  *puVar13 = *puVar8;
                  puVar13[1] = *puVar12;
                  puVar13[2] = *puVar1;
                  puVar13[3] = *puVar2;
                  puVar13 = puVar13 + 4;
                  lVar14 = lVar14 + -1;
                  if (lVar14 == 0) break;
                  puVar8 = puVar8 + 1;
                  puVar12 = puVar12 + 1;
                  puVar1 = puVar1 + 1;
                  puVar2 = puVar2 + 1;
                }
                puVar7 = puVar7 + 0x20;
                puVar8 = (undefined1 *)0x338;
                puVar12 = (undefined1 *)0x348;
                puVar1 = (undefined1 *)0x358;
                puVar2 = (undefined1 *)0x368;
                lVar14 = 8;
                while( true ) {
                  *puVar7 = *puVar8;
                  puVar7[1] = *puVar12;
                  puVar7[2] = *puVar1;
                  puVar7[3] = *puVar2;
                  puVar7 = puVar7 + 4;
                  lVar14 = lVar14 + -1;
                  if (lVar14 == 0) break;
                  puVar8 = puVar8 + 1;
                  puVar12 = puVar12 + 1;
                  puVar1 = puVar1 + 1;
                  puVar2 = puVar2 + 1;
                }
                puVar7 = puVar9;
              } while (puVar9 != puVar6 + ((uint)param_2 >> 4) * 0x40);
              puVar7 = (undefined1 *)((uint)param_2 & 0xfffffff0);
              if (param_2 == (undefined1 *)((uint)param_2 & 0xfffffff0)) goto LAB_0001fb54;
            }
            puVar8 = puVar7 + 1;
            puVar6[(int)puVar7 * 4] = 0xff;
            puVar6[(int)puVar7 * 4 + 1] = uVar3;
            puVar6[(int)puVar7 * 4 + 2] = uVar4;
            puVar6[(int)puVar7 * 4 + 3] = uVar5;
            if (puVar8 < param_2) {
              puVar12 = puVar7 + 2;
              puVar6[(int)puVar8 * 4] = 0xff;
              puVar6[(int)puVar8 * 4 + 1] = uVar3;
              puVar6[(int)puVar8 * 4 + 2] = uVar4;
              puVar6[(int)puVar8 * 4 + 3] = uVar5;
              if (puVar12 < param_2) {
                puVar8 = puVar7 + 3;
                puVar6[(int)puVar12 * 4] = 0xff;
                puVar6[(int)puVar12 * 4 + 1] = uVar3;
                puVar6[(int)puVar12 * 4 + 2] = uVar4;
                puVar6[(int)puVar12 * 4 + 3] = uVar5;
                if (puVar8 < param_2) {
                  puVar12 = puVar7 + 4;
                  puVar6[(int)puVar8 * 4] = 0xff;
                  puVar6[(int)puVar8 * 4 + 1] = uVar3;
                  puVar6[(int)puVar8 * 4 + 2] = uVar4;
                  puVar6[(int)puVar8 * 4 + 3] = uVar5;
                  if (puVar12 < param_2) {
                    puVar8 = puVar7 + 5;
                    puVar6[(int)puVar12 * 4] = 0xff;
                    puVar6[(int)puVar12 * 4 + 1] = uVar3;
                    puVar6[(int)puVar12 * 4 + 2] = uVar4;
                    puVar6[(int)puVar12 * 4 + 3] = uVar5;
                    if (puVar8 < param_2) {
                      puVar12 = puVar7 + 6;
                      puVar6[(int)puVar8 * 4] = 0xff;
                      puVar6[(int)puVar8 * 4 + 1] = uVar3;
                      puVar6[(int)puVar8 * 4 + 2] = uVar4;
                      puVar6[(int)puVar8 * 4 + 3] = uVar5;
                      if (puVar12 < param_2) {
                        puVar8 = puVar7 + 7;
                        puVar6[(int)puVar12 * 4] = 0xff;
                        puVar6[(int)puVar12 * 4 + 1] = uVar3;
                        puVar6[(int)puVar12 * 4 + 2] = uVar4;
                        puVar6[(int)puVar12 * 4 + 3] = uVar5;
                        if (puVar8 < param_2) {
                          puVar12 = puVar7 + 8;
                          puVar6[(int)puVar8 * 4] = 0xff;
                          puVar6[(int)puVar8 * 4 + 1] = uVar3;
                          puVar6[(int)puVar8 * 4 + 2] = uVar4;
                          puVar6[(int)puVar8 * 4 + 3] = uVar5;
                          if (puVar12 < param_2) {
                            puVar8 = puVar7 + 9;
                            puVar6[(int)puVar12 * 4] = 0xff;
                            puVar6[(int)puVar12 * 4 + 1] = uVar3;
                            puVar6[(int)puVar12 * 4 + 2] = uVar4;
                            puVar6[(int)puVar12 * 4 + 3] = uVar5;
                            if (puVar8 < param_2) {
                              puVar12 = puVar7 + 10;
                              puVar6[(int)puVar8 * 4] = 0xff;
                              puVar6[(int)puVar8 * 4 + 1] = uVar3;
                              puVar6[(int)puVar8 * 4 + 2] = uVar4;
                              puVar6[(int)puVar8 * 4 + 3] = uVar5;
                              if (puVar12 < param_2) {
                                puVar8 = puVar7 + 0xb;
                                puVar6[(int)puVar12 * 4] = 0xff;
                                puVar6[(int)puVar12 * 4 + 1] = uVar3;
                                puVar6[(int)puVar12 * 4 + 2] = uVar4;
                                puVar6[(int)puVar12 * 4 + 3] = uVar5;
                                if (puVar8 < param_2) {
                                  puVar12 = puVar7 + 0xc;
                                  puVar6[(int)puVar8 * 4] = 0xff;
                                  puVar6[(int)puVar8 * 4 + 1] = uVar3;
                                  puVar6[(int)puVar8 * 4 + 2] = uVar4;
                                  puVar6[(int)puVar8 * 4 + 3] = uVar5;
                                  if (puVar12 < param_2) {
                                    puVar8 = puVar7 + 0xd;
                                    puVar6[(int)puVar12 * 4] = 0xff;
                                    puVar6[(int)puVar12 * 4 + 1] = uVar3;
                                    puVar6[(int)puVar12 * 4 + 2] = uVar4;
                                    puVar6[(int)puVar12 * 4 + 3] = uVar5;
                                    if (puVar8 < param_2) {
                                      puVar7 = puVar7 + 0xe;
                                      puVar6[(int)puVar8 * 4] = 0xff;
                                      puVar12 = puVar8;
                                      if (puVar7 < param_2) {
                                        puVar12 = puVar6 + (int)puVar7 * 4;
                                      }
                                      puVar6[(int)puVar8 * 4 + 1] = uVar3;
                                      puVar6[(int)puVar8 * 4 + 2] = uVar4;
                                      puVar6[(int)puVar8 * 4 + 3] = uVar5;
                                      if (puVar7 < param_2) {
                                        puVar6[(int)puVar7 * 4] = 0xff;
                                        puVar12[1] = uVar3;
                                        puVar12[2] = uVar4;
                                        puVar12[3] = uVar5;
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
LAB_0001fb54:
          iVar10 = iVar10 + 1;
          puVar6 = puVar6 + (int)param_2 * 4;
        } while (param_3 != iVar10);
        puVar11 = (undefined4 *)((int)puVar11 + 3);
        local_8c = local_8c + param_3 * (int)param_2 * 4;
        if (puVar11 == auStack_68) {
          return 0;
        }
      } while( true );
    }
  }
  else {
    fread(local_8c,1,0x10000,__stream);
    fclose(__stream);
  }
  return 0;
}



/* ===== translate_argb @ 0001fba8 size=5444 ===== */

undefined4
translate_argb(undefined1 *param_1,undefined1 *param_2,uint param_3,int param_4,int param_5,
              int param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  uint uVar25;
  short *psVar26;
  uint uVar27;
  undefined1 *puVar28;
  int iVar29;
  int iVar30;
  undefined1 *puVar31;
  short *psVar32;
  short *psVar33;
  int iVar34;
  int iVar35;
  undefined4 uVar36;
  short *psVar37;
  undefined1 *puVar38;
  short *psVar39;
  int iVar40;
  uint uVar41;
  undefined1 *puVar42;
  undefined1 *puVar43;
  short *psVar44;
  int *piVar45;
  int *piVar46;
  int *piVar47;
  int *piVar48;
  int *piVar49;
  int *piVar50;
  int *piVar51;
  int *piVar52;
  int *piVar53;
  int *piVar54;
  int *piVar55;
  bool bVar56;
  undefined1 uVar57;
  bool bVar58;
  undefined1 *puVar59;
  undefined1 *puVar60;
  undefined1 *puVar61;
  short *psVar62;
  longlong lVar63;
  undefined1 in_q8 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 in_q9 [16];
  undefined1 auVar69 [16];
  undefined1 in_q10 [16];
  undefined1 auVar70 [16];
  undefined1 in_q12 [16];
  undefined1 in_q13 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 in_q14 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  int local_80;
  undefined1 *local_7c;
  int local_78;
  uint local_74;
  int local_70;
  int local_6c;
  
  uVar24 = DAT_00021138;
  uVar23 = DAT_00020948;
  uVar22 = DAT_00020940;
  uVar21 = DAT_00020938;
  uVar20 = DAT_00020930;
  uVar19 = DAT_00020048;
  uVar18 = DAT_00020040;
  uVar17 = DAT_00020038;
  uVar16 = DAT_00020030;
  piVar45 = &local_80;
  piVar47 = &local_80;
  piVar46 = &local_80;
  piVar48 = &local_80;
  piVar50 = &local_80;
  piVar51 = &local_80;
  piVar49 = &local_80;
  piVar52 = &local_80;
  piVar53 = &local_80;
  piVar54 = &local_80;
  piVar55 = &local_80;
  local_7c = param_1;
  local_80 = param_4;
  auVar65._8_8_ = in_q8._8_8_;
  if (param_5 == 0) {
    *(undefined4 *)(param_6 + 0x54) = 1;
    *(undefined8 *)(param_6 + 0xc) = uVar16;
    *(uint *)(param_6 + 0x24) = param_3 << 2;
    memcpy(param_2,param_1,param_4 * param_3 * 4);
    return 0;
  }
  if (param_5 == 1) {
    *(undefined4 *)(param_6 + 0x54) = 1;
    iVar34 = param_3 * 4;
    *(undefined8 *)(param_6 + 0xc) = uVar17;
    *(int *)(param_6 + 0x24) = iVar34;
    if ((param_4 != 0) && (param_3 != 0)) {
      iVar40 = 0;
      puVar38 = param_1 + iVar34;
      uVar41 = param_3 & 0xfffffff0;
      iVar30 = 0;
      local_74 = (param_3 >> 4) << 6;
      local_78 = param_3 - 1;
      puVar42 = param_2;
      do {
        puVar28 = puVar42;
        puVar43 = param_1;
        if (*(uint *)((int)piVar45 + 8) < 0xf ||
            puVar42 < param_1 + 0x40 && param_1 < puVar42 + 0x40) {
          do {
            puVar61 = puVar43 + 4;
            *puVar28 = *puVar43;
            puVar28[1] = puVar43[3];
            puVar28[2] = puVar43[2];
            puVar28[3] = puVar43[1];
            puVar28 = puVar28 + 4;
            puVar43 = puVar61;
          } while (puVar38 != puVar61);
        }
        else {
          puVar61 = puVar42 + *(int *)((int)piVar45 + 0xc);
          do {
            puVar12 = (undefined1 *)0x370;
            puVar13 = (undefined1 *)0x380;
            puVar14 = (undefined1 *)0x390;
            puVar15 = (undefined1 *)0x3a0;
            lVar63 = 8;
            puVar31 = puVar28;
            puVar60 = puVar43;
            puVar59 = puVar43;
            while( true ) {
              *puVar12 = *puVar59;
              puVar59 = puVar59 + 1;
              *puVar13 = *puVar59;
              puVar59 = puVar59 + 1;
              *puVar14 = *puVar59;
              puVar59 = puVar59 + 1;
              *puVar15 = *puVar59;
              puVar59 = puVar59 + 1;
              lVar63 = lVar63 + -1;
              if (lVar63 == 0) break;
              puVar12 = puVar12 + 1;
              puVar13 = puVar13 + 1;
              puVar14 = puVar14 + 1;
              puVar15 = puVar15 + 1;
            }
            puVar59 = puVar43 + 0x20;
            puVar31 = puVar31 + 0x40;
            uVar57 = puVar31 == puVar61;
            puVar43 = puVar60 + 0x40;
            puVar12 = (undefined1 *)0x378;
            puVar13 = (undefined1 *)0x388;
            puVar14 = (undefined1 *)0x398;
            puVar15 = (undefined1 *)0x3a8;
            lVar63 = 8;
            while( true ) {
              *puVar12 = *puVar59;
              puVar59 = puVar59 + 1;
              *puVar13 = *puVar59;
              puVar59 = puVar59 + 1;
              *puVar14 = *puVar59;
              puVar59 = puVar59 + 1;
              *puVar15 = *puVar59;
              puVar59 = puVar59 + 1;
              lVar63 = lVar63 + -1;
              if (lVar63 == 0) break;
              puVar12 = puVar12 + 1;
              puVar13 = puVar13 + 1;
              puVar14 = puVar14 + 1;
              puVar15 = puVar15 + 1;
            }
            puVar12 = (undefined1 *)0x3b0;
            puVar13 = (undefined1 *)0x3c0;
            puVar14 = (undefined1 *)0x3d0;
            puVar15 = (undefined1 *)0x3e0;
            lVar63 = 8;
            puVar60 = puVar28;
            while( true ) {
              *puVar60 = *puVar12;
              puVar60[1] = *puVar13;
              puVar60[2] = *puVar14;
              puVar60[3] = *puVar15;
              puVar60 = puVar60 + 4;
              lVar63 = lVar63 + -1;
              if (lVar63 == 0) break;
              puVar12 = puVar12 + 1;
              puVar13 = puVar13 + 1;
              puVar14 = puVar14 + 1;
              puVar15 = puVar15 + 1;
            }
            puVar28 = puVar28 + 0x20;
            puVar12 = (undefined1 *)0x3b8;
            puVar13 = (undefined1 *)0x3c8;
            puVar14 = (undefined1 *)0x3d8;
            puVar15 = (undefined1 *)0x3e8;
            lVar63 = 8;
            while( true ) {
              *puVar28 = *puVar12;
              puVar28[1] = *puVar13;
              puVar28[2] = *puVar14;
              puVar28[3] = *puVar15;
              puVar28 = puVar28 + 4;
              lVar63 = lVar63 + -1;
              if (lVar63 == 0) break;
              puVar12 = puVar12 + 1;
              puVar13 = puVar13 + 1;
              puVar14 = puVar14 + 1;
              puVar15 = puVar15 + 1;
            }
            puVar28 = puVar31;
          } while (!(bool)uVar57);
          if (param_3 != uVar41) {
            iVar35 = (iVar40 + uVar41) * 4;
            uVar25 = uVar41;
            puVar28 = (undefined1 *)(*(int *)((int)piVar45 + 4) + iVar35);
            puVar43 = param_2 + iVar35;
            do {
              uVar25 = uVar25 + 1;
              *puVar43 = *puVar28;
              puVar43[1] = puVar28[3];
              puVar43[2] = puVar28[2];
              puVar43[3] = puVar28[1];
              puVar28 = puVar28 + 4;
              puVar43 = puVar43 + 4;
            } while (uVar25 < param_3);
          }
        }
        iVar30 = iVar30 + 1;
        param_1 = param_1 + iVar34;
        puVar42 = puVar42 + iVar34;
        puVar38 = puVar38 + iVar34;
        iVar40 = iVar40 + param_3;
      } while (*piVar45 != iVar30);
    }
  }
  else if (param_5 == 2) {
    iVar30 = 0;
    iVar34 = param_3 * 4;
    *(undefined4 *)(param_6 + 0x54) = 0;
    *(undefined8 *)(param_6 + 0xc) = uVar17;
    *(int *)(param_6 + 0x24) = iVar34;
    if ((param_4 != 0) && (param_3 != 0)) {
      puVar38 = param_1 + iVar34;
      uVar41 = param_3 & 0xfffffff0;
      iVar40 = 0;
      local_74 = (param_3 >> 4) << 6;
      local_78 = param_3 - 1;
      puVar42 = param_2;
      do {
        puVar28 = puVar42;
        puVar43 = param_1;
        if (*(uint *)((int)piVar47 + 8) < 0xf ||
            param_1 < puVar42 + 0x40 && puVar42 < param_1 + 0x40) {
          do {
            *puVar28 = puVar43[3];
            puVar28[1] = puVar43[2];
            puVar28[2] = puVar43[1];
            puVar61 = puVar43 + 4;
            puVar28[3] = *puVar43;
            puVar28 = puVar28 + 4;
            puVar43 = puVar61;
          } while (puVar38 != puVar61);
        }
        else {
          puVar61 = puVar42 + *(int *)((int)piVar47 + 0xc);
          do {
            puVar12 = (undefined1 *)0x370;
            puVar13 = (undefined1 *)0x380;
            puVar14 = (undefined1 *)0x390;
            puVar15 = (undefined1 *)0x3a0;
            lVar63 = 8;
            puVar31 = puVar28;
            puVar60 = puVar43;
            puVar59 = puVar43;
            while( true ) {
              *puVar12 = *puVar59;
              puVar59 = puVar59 + 1;
              *puVar13 = *puVar59;
              puVar59 = puVar59 + 1;
              *puVar14 = *puVar59;
              puVar59 = puVar59 + 1;
              *puVar15 = *puVar59;
              puVar59 = puVar59 + 1;
              lVar63 = lVar63 + -1;
              if (lVar63 == 0) break;
              puVar12 = puVar12 + 1;
              puVar13 = puVar13 + 1;
              puVar14 = puVar14 + 1;
              puVar15 = puVar15 + 1;
            }
            puVar59 = puVar43 + 0x20;
            puVar31 = puVar31 + 0x40;
            uVar57 = puVar31 == puVar61;
            puVar43 = puVar60 + 0x40;
            puVar12 = (undefined1 *)0x378;
            puVar13 = (undefined1 *)0x388;
            puVar14 = (undefined1 *)0x398;
            puVar15 = (undefined1 *)0x3a8;
            lVar63 = 8;
            while( true ) {
              *puVar12 = *puVar59;
              puVar59 = puVar59 + 1;
              *puVar13 = *puVar59;
              puVar59 = puVar59 + 1;
              *puVar14 = *puVar59;
              puVar59 = puVar59 + 1;
              *puVar15 = *puVar59;
              puVar59 = puVar59 + 1;
              lVar63 = lVar63 + -1;
              if (lVar63 == 0) break;
              puVar12 = puVar12 + 1;
              puVar13 = puVar13 + 1;
              puVar14 = puVar14 + 1;
              puVar15 = puVar15 + 1;
            }
            puVar12 = (undefined1 *)0x3f0;
            puVar13 = (undefined1 *)0x400;
            puVar14 = (undefined1 *)0x410;
            puVar15 = (undefined1 *)0x420;
            lVar63 = 8;
            puVar60 = puVar28;
            while( true ) {
              *puVar60 = *puVar12;
              puVar60[1] = *puVar13;
              puVar60[2] = *puVar14;
              puVar60[3] = *puVar15;
              puVar60 = puVar60 + 4;
              lVar63 = lVar63 + -1;
              if (lVar63 == 0) break;
              puVar12 = puVar12 + 1;
              puVar13 = puVar13 + 1;
              puVar14 = puVar14 + 1;
              puVar15 = puVar15 + 1;
            }
            puVar28 = puVar28 + 0x20;
            puVar12 = (undefined1 *)0x3f8;
            puVar13 = (undefined1 *)0x408;
            puVar14 = (undefined1 *)0x418;
            puVar15 = (undefined1 *)0x428;
            lVar63 = 8;
            while( true ) {
              *puVar28 = *puVar12;
              puVar28[1] = *puVar13;
              puVar28[2] = *puVar14;
              puVar28[3] = *puVar15;
              puVar28 = puVar28 + 4;
              lVar63 = lVar63 + -1;
              if (lVar63 == 0) break;
              puVar12 = puVar12 + 1;
              puVar13 = puVar13 + 1;
              puVar14 = puVar14 + 1;
              puVar15 = puVar15 + 1;
            }
            puVar28 = puVar31;
          } while (!(bool)uVar57);
          if (param_3 != uVar41) {
            iVar35 = (iVar30 + uVar41) * 4;
            uVar25 = uVar41;
            puVar28 = (undefined1 *)(*(int *)((int)piVar47 + 4) + iVar35);
            puVar43 = param_2 + iVar35;
            do {
              uVar25 = uVar25 + 1;
              *puVar43 = puVar28[3];
              puVar43[1] = puVar28[2];
              puVar43[2] = puVar28[1];
              puVar43[3] = *puVar28;
              puVar28 = puVar28 + 4;
              puVar43 = puVar43 + 4;
            } while (uVar25 < param_3);
          }
        }
        iVar40 = iVar40 + 1;
        param_1 = param_1 + iVar34;
        puVar42 = puVar42 + iVar34;
        puVar38 = puVar38 + iVar34;
        iVar30 = iVar30 + param_3;
      } while (*piVar47 != iVar40);
    }
  }
  else if (param_5 == 3) {
    iVar30 = 0;
    iVar34 = param_3 * 4;
    *(undefined4 *)(param_6 + 0x54) = 0;
    *(undefined8 *)(param_6 + 0xc) = uVar16;
    *(int *)(param_6 + 0x24) = iVar34;
    if ((param_4 != 0) && (param_3 != 0)) {
      puVar38 = param_1 + iVar34;
      uVar41 = param_3 & 0xfffffff0;
      iVar40 = 0;
      local_74 = (param_3 >> 4) << 6;
      local_78 = param_3 - 1;
      puVar42 = param_2;
      do {
        puVar28 = puVar42;
        puVar43 = param_1;
        if (*(uint *)((int)piVar46 + 8) < 0xf ||
            param_1 < puVar42 + 0x40 && puVar42 < param_1 + 0x40) {
          do {
            *puVar28 = puVar43[1];
            puVar28[1] = puVar43[2];
            puVar28[2] = puVar43[3];
            puVar61 = puVar43 + 4;
            puVar28[3] = *puVar43;
            puVar28 = puVar28 + 4;
            puVar43 = puVar61;
          } while (puVar61 != puVar38);
        }
        else {
          puVar61 = puVar42 + *(int *)((int)piVar46 + 0xc);
          do {
            puVar12 = (undefined1 *)0x370;
            puVar13 = (undefined1 *)0x380;
            puVar14 = (undefined1 *)0x390;
            puVar15 = (undefined1 *)0x3a0;
            lVar63 = 8;
            puVar31 = puVar28;
            puVar60 = puVar43;
            puVar59 = puVar43;
            while( true ) {
              *puVar12 = *puVar59;
              puVar59 = puVar59 + 1;
              *puVar13 = *puVar59;
              puVar59 = puVar59 + 1;
              *puVar14 = *puVar59;
              puVar59 = puVar59 + 1;
              *puVar15 = *puVar59;
              puVar59 = puVar59 + 1;
              lVar63 = lVar63 + -1;
              if (lVar63 == 0) break;
              puVar12 = puVar12 + 1;
              puVar13 = puVar13 + 1;
              puVar14 = puVar14 + 1;
              puVar15 = puVar15 + 1;
            }
            puVar59 = puVar43 + 0x20;
            puVar31 = puVar31 + 0x40;
            uVar57 = puVar31 == puVar61;
            puVar43 = puVar60 + 0x40;
            puVar12 = (undefined1 *)0x378;
            puVar13 = (undefined1 *)0x388;
            puVar14 = (undefined1 *)0x398;
            puVar15 = (undefined1 *)0x3a8;
            lVar63 = 8;
            while( true ) {
              *puVar12 = *puVar59;
              puVar59 = puVar59 + 1;
              *puVar13 = *puVar59;
              puVar59 = puVar59 + 1;
              *puVar14 = *puVar59;
              puVar59 = puVar59 + 1;
              *puVar15 = *puVar59;
              puVar59 = puVar59 + 1;
              lVar63 = lVar63 + -1;
              if (lVar63 == 0) break;
              puVar12 = puVar12 + 1;
              puVar13 = puVar13 + 1;
              puVar14 = puVar14 + 1;
              puVar15 = puVar15 + 1;
            }
            puVar12 = (undefined1 *)0x330;
            puVar13 = (undefined1 *)0x340;
            puVar14 = (undefined1 *)0x350;
            puVar15 = (undefined1 *)0x360;
            lVar63 = 8;
            puVar60 = puVar28;
            while( true ) {
              *puVar60 = *puVar12;
              puVar60[1] = *puVar13;
              puVar60[2] = *puVar14;
              puVar60[3] = *puVar15;
              puVar60 = puVar60 + 4;
              lVar63 = lVar63 + -1;
              if (lVar63 == 0) break;
              puVar12 = puVar12 + 1;
              puVar13 = puVar13 + 1;
              puVar14 = puVar14 + 1;
              puVar15 = puVar15 + 1;
            }
            puVar28 = puVar28 + 0x20;
            puVar12 = (undefined1 *)0x338;
            puVar13 = (undefined1 *)0x348;
            puVar14 = (undefined1 *)0x358;
            puVar15 = (undefined1 *)0x368;
            lVar63 = 8;
            while( true ) {
              *puVar28 = *puVar12;
              puVar28[1] = *puVar13;
              puVar28[2] = *puVar14;
              puVar28[3] = *puVar15;
              puVar28 = puVar28 + 4;
              lVar63 = lVar63 + -1;
              if (lVar63 == 0) break;
              puVar12 = puVar12 + 1;
              puVar13 = puVar13 + 1;
              puVar14 = puVar14 + 1;
              puVar15 = puVar15 + 1;
            }
            puVar28 = puVar31;
          } while (!(bool)uVar57);
          if (param_3 != uVar41) {
            iVar35 = (iVar30 + uVar41) * 4;
            uVar25 = uVar41;
            puVar28 = (undefined1 *)(*(int *)((int)piVar46 + 4) + iVar35);
            puVar43 = param_2 + iVar35;
            do {
              uVar25 = uVar25 + 1;
              *puVar43 = puVar28[1];
              puVar43[1] = puVar28[2];
              puVar43[2] = puVar28[3];
              puVar43[3] = *puVar28;
              puVar28 = puVar28 + 4;
              puVar43 = puVar43 + 4;
            } while (uVar25 < param_3);
          }
        }
        iVar40 = iVar40 + 1;
        param_1 = param_1 + iVar34;
        puVar42 = puVar42 + iVar34;
        puVar38 = puVar38 + iVar34;
        iVar30 = iVar30 + param_3;
      } while (*piVar46 != iVar40);
    }
  }
  else if (param_5 == 4) {
    *(undefined4 *)(param_6 + 0x54) = 0;
    *(undefined8 *)(param_6 + 0xc) = uVar18;
    *(uint *)(param_6 + 0x24) = param_3 << 1;
    if ((param_4 != 0) && (param_3 != 0)) {
      local_74 = param_3 - 1;
      uVar41 = local_74 & 0xfffffff0;
      iVar40 = param_3 * 4 + -1;
      uVar36 = 0xffff8000;
      local_70 = (local_74 >> 4) << 5;
      iVar30 = 0;
      psVar37 = (short *)(param_1 + 1);
      local_78 = param_3 * 4;
      local_6c = uVar41 + 0x7fffffff;
      iVar34 = 0;
      do {
        iVar35 = param_3 + iVar34;
        psVar33 = (short *)(param_2 + iVar34 * 2);
        if (*(uint *)((int)piVar48 + 0xc) < 0x10 ||
            psVar33 < (short *)(iVar40 + (int)psVar37) && psVar37 < param_2 + iVar35 * 2) {
          puVar42 = (undefined1 *)((int)psVar37 + -1);
          do {
            psVar44 = psVar33 + 1;
            *psVar33 = (ushort)((byte)puVar42[1] >> 3) * 0x400 +
                       (ushort)((byte)puVar42[2] >> 3) * 0x20 +
                       ((ushort)uVar36 | (ushort)((byte)puVar42[3] >> 3));
            puVar42 = puVar42 + 4;
            psVar33 = psVar44;
          } while (psVar44 != (short *)(param_2 + iVar35 * 2));
        }
        else {
          psVar39 = (short *)(*(int *)((int)piVar48 + 0x10) + (int)psVar33);
          psVar44 = psVar37;
          do {
            puVar42 = (undefined1 *)0x3b0;
            puVar38 = (undefined1 *)0x3c0;
            puVar28 = (undefined1 *)0x3d0;
            puVar43 = (undefined1 *)0x3e0;
            lVar63 = 8;
            psVar32 = psVar33;
            psVar26 = psVar44;
            psVar62 = psVar44;
            while( true ) {
              *puVar42 = (char)*psVar62;
              puVar61 = (undefined1 *)((int)psVar62 + 1);
              *puVar38 = *puVar61;
              puVar61 = puVar61 + 1;
              *puVar28 = *puVar61;
              puVar61 = puVar61 + 1;
              *puVar43 = *puVar61;
              psVar62 = (short *)(puVar61 + 1);
              lVar63 = lVar63 + -1;
              if (lVar63 == 0) break;
              puVar42 = puVar42 + 1;
              puVar38 = puVar38 + 1;
              puVar28 = puVar28 + 1;
              puVar43 = puVar43 + 1;
            }
            psVar62 = psVar44 + 0x10;
            psVar32 = psVar32 + 0x10;
            uVar57 = psVar32 == psVar39;
            psVar44 = psVar26 + 0x20;
            puVar42 = (undefined1 *)0x3b8;
            puVar38 = (undefined1 *)0x3c8;
            puVar28 = (undefined1 *)0x3d8;
            puVar43 = (undefined1 *)0x3e8;
            lVar63 = 8;
            while( true ) {
              *puVar42 = (char)*psVar62;
              puVar61 = (undefined1 *)((int)psVar62 + 1);
              *puVar38 = *puVar61;
              puVar61 = puVar61 + 1;
              *puVar28 = *puVar61;
              puVar61 = puVar61 + 1;
              *puVar43 = *puVar61;
              psVar62 = (short *)(puVar61 + 1);
              lVar63 = lVar63 + -1;
              if (lVar63 == 0) break;
              puVar42 = puVar42 + 1;
              puVar38 = puVar38 + 1;
              puVar28 = puVar28 + 1;
              puVar43 = puVar43 + 1;
            }
            auVar65 = VectorShiftRight(in_q12,3);
            auVar70 = VectorShiftRight(in_q13,3);
            auVar69 = VectorShiftRight(in_q14,3);
            auVar73 = VectorCopyLong(auVar65._0_8_,1,1);
            auVar65 = VectorCopyLong(auVar65._8_8_,1,1);
            in_q13 = VectorShiftLongLeft(auVar70._0_8_,5);
            in_q12 = VectorShiftLongLeft(auVar70._8_8_,5);
            auVar73 = VectorShiftLeft(auVar73,10,0x10,0);
            auVar72 = VectorCopyLong(auVar69._0_8_,1,1);
            auVar65 = VectorShiftLeft(auVar65,10,0x10,0);
            auVar71 = VectorCopyLong(auVar69._8_8_,1,1);
            auVar70 = VectorAdd(auVar73,in_q13,2);
            auVar65 = VectorAdd(auVar65,in_q12,2);
            auVar73._8_8_ = SUB148(SUB1614((undefined1  [16])0x0,2),6);
            auVar73._0_8_ = 0x8000800080008000;
            auVar69._8_8_ = SUB148(SUB1614((undefined1  [16])0x0,2),6);
            auVar69._0_8_ = 0x8000800080008000;
            auVar73 = VectorAdd(auVar70,auVar72 | *(undefined1 (*) [16])(auVar73 << 0x40 | auVar73),
                                2);
            auVar65 = VectorAdd(auVar65,auVar71 | *(undefined1 (*) [16])(auVar69 << 0x40 | auVar69),
                                2);
            *(longlong *)psVar33 = auVar73._0_8_;
            *(longlong *)(psVar33 + 4) = auVar73._8_8_;
            *(longlong *)(psVar33 + 8) = auVar65._0_8_;
            *(longlong *)(psVar33 + 0xc) = auVar65._8_8_;
            psVar33 = psVar32;
          } while (!(bool)uVar57);
          iVar29 = *(int *)((int)piVar48 + 4) + (iVar34 + uVar41) * 4;
          psVar33 = (short *)(param_2 + (*(int *)((int)piVar48 + 0x14) + iVar34) * 2);
          uVar25 = uVar41;
          do {
            pbVar1 = (byte *)(iVar29 + 1);
            uVar25 = uVar25 + 1;
            pbVar2 = (byte *)(iVar29 + 2);
            pbVar3 = (byte *)(iVar29 + 3);
            iVar29 = iVar29 + 4;
            psVar33 = psVar33 + 1;
            *psVar33 = (ushort)(*pbVar1 >> 3) * 0x400 + (ushort)(*pbVar2 >> 3) * 0x20 +
                       ((ushort)uVar36 | (ushort)(*pbVar3 >> 3));
          } while (uVar25 < param_3);
        }
        iVar30 = iVar30 + 1;
        psVar37 = (short *)((int)psVar37 + piVar48[2]);
        iVar34 = iVar35;
      } while (*piVar48 != iVar30);
    }
  }
  else if (param_5 == 5) {
    auVar70._8_8_ = auVar65._8_8_;
    auVar70._0_8_ = DAT_00020930;
    *(undefined4 *)(param_6 + 0x54) = 0;
    *(undefined8 *)(param_6 + 0xc) = uVar20;
    *(uint *)(param_6 + 0x24) = param_3 << 1;
    if ((param_4 != 0) && (param_3 != 0)) {
      uVar25 = param_3 - 1;
      uVar36 = 0x8000;
      uVar41 = uVar25 & 0xfffffff0;
      iVar30 = 0;
      local_78 = param_3 * 4;
      local_70 = (uVar25 >> 4) << 5;
      local_6c = uVar41 + 0x7fffffff;
      psVar37 = (short *)(param_1 + 1);
      local_74 = param_3 * 4 + -1;
      iVar34 = 0;
      do {
        iVar40 = param_3 + iVar34;
        psVar33 = (short *)(param_2 + iVar34 * 2);
        if (uVar25 < 0x10 ||
            psVar37 < param_2 + iVar40 * 2 &&
            psVar33 < (short *)(*(int *)((int)piVar50 + 0xc) + (int)psVar37)) {
          puVar42 = (undefined1 *)((int)psVar37 + -1);
          do {
            psVar44 = psVar33 + 1;
            *psVar33 = (ushort)((byte)puVar42[3] >> 3) * 0x400 +
                       (ushort)((byte)puVar42[2] >> 3) * 0x20 +
                       ((ushort)uVar36 | (ushort)((byte)puVar42[1] >> 3));
            puVar42 = puVar42 + 4;
            psVar33 = psVar44;
          } while (psVar44 != (short *)(param_2 + iVar40 * 2));
        }
        else {
          psVar39 = (short *)(*(int *)((int)piVar50 + 0x10) + (int)psVar33);
          psVar44 = psVar37;
          do {
            puVar42 = (undefined1 *)0x370;
            puVar38 = (undefined1 *)0x380;
            puVar28 = (undefined1 *)0x390;
            puVar43 = (undefined1 *)0x3a0;
            lVar63 = 8;
            psVar32 = psVar33;
            psVar26 = psVar44;
            psVar62 = psVar44;
            while( true ) {
              *puVar42 = (char)*psVar62;
              puVar61 = (undefined1 *)((int)psVar62 + 1);
              *puVar38 = *puVar61;
              puVar61 = puVar61 + 1;
              *puVar28 = *puVar61;
              puVar61 = puVar61 + 1;
              *puVar43 = *puVar61;
              psVar62 = (short *)(puVar61 + 1);
              lVar63 = lVar63 + -1;
              if (lVar63 == 0) break;
              puVar42 = puVar42 + 1;
              puVar38 = puVar38 + 1;
              puVar28 = puVar28 + 1;
              puVar43 = puVar43 + 1;
            }
            psVar62 = psVar44 + 0x10;
            psVar32 = psVar32 + 0x10;
            uVar57 = psVar32 == psVar39;
            psVar44 = psVar26 + 0x20;
            puVar42 = (undefined1 *)0x378;
            puVar38 = (undefined1 *)0x388;
            puVar28 = (undefined1 *)0x398;
            puVar43 = (undefined1 *)0x3a8;
            lVar63 = 8;
            while( true ) {
              *puVar42 = (char)*psVar62;
              puVar61 = (undefined1 *)((int)psVar62 + 1);
              *puVar38 = *puVar61;
              puVar61 = puVar61 + 1;
              *puVar28 = *puVar61;
              puVar61 = puVar61 + 1;
              *puVar43 = *puVar61;
              psVar62 = (short *)(puVar61 + 1);
              lVar63 = lVar63 + -1;
              if (lVar63 == 0) break;
              puVar42 = puVar42 + 1;
              puVar38 = puVar38 + 1;
              puVar28 = puVar28 + 1;
              puVar43 = puVar43 + 1;
            }
            auVar69 = VectorShiftRight(in_q10,3);
            auVar72 = VectorShiftRight(in_q9,3);
            auVar65 = VectorShiftRight(auVar70,3);
            auVar73 = VectorCopyLong(auVar69._0_8_,1,1);
            auVar70 = VectorCopyLong(auVar69._8_8_,1,1);
            auVar69 = VectorCopyLong(auVar65._0_8_,1,1);
            auVar74 = VectorShiftLongLeft(auVar72._0_8_,5);
            auVar73 = VectorShiftLeft(auVar73,10,0x10,0);
            auVar71 = VectorShiftLeft(auVar70,10,0x10,0);
            auVar70 = VectorShiftLongLeft(auVar72._8_8_,5);
            auVar65 = VectorCopyLong(auVar65._8_8_,1,1);
            auVar73 = VectorAdd(auVar73,auVar74,2);
            auVar70 = VectorAdd(auVar71,auVar70,2);
            auVar71._8_8_ = SUB148(SUB1614((undefined1  [16])0x0,2),6);
            auVar71._0_8_ = 0x8000800080008000;
            in_q10 = auVar69 | *(undefined1 (*) [16])(auVar71 << 0x40 | auVar71);
            auVar72._8_8_ = SUB148(SUB1614((undefined1  [16])0x0,2),6);
            auVar72._0_8_ = 0x8000800080008000;
            in_q9 = VectorAdd(auVar73,in_q10,2);
            auVar70 = VectorAdd(auVar70,auVar65 | *(undefined1 (*) [16])(auVar72 << 0x40 | auVar72),
                                2);
            *(longlong *)psVar33 = in_q9._0_8_;
            *(longlong *)(psVar33 + 4) = in_q9._8_8_;
            *(longlong *)(psVar33 + 8) = auVar70._0_8_;
            *(longlong *)(psVar33 + 0xc) = auVar70._8_8_;
            psVar33 = psVar32;
          } while (!(bool)uVar57);
          iVar35 = *(int *)((int)piVar50 + 4) + (uVar41 + iVar34) * 4;
          psVar33 = (short *)(param_2 + (*(int *)((int)piVar50 + 0x14) + iVar34) * 2);
          uVar27 = uVar41;
          do {
            pbVar1 = (byte *)(iVar35 + 3);
            uVar27 = uVar27 + 1;
            pbVar2 = (byte *)(iVar35 + 2);
            pbVar3 = (byte *)(iVar35 + 1);
            iVar35 = iVar35 + 4;
            psVar33 = psVar33 + 1;
            *psVar33 = (ushort)(*pbVar1 >> 3) * 0x400 + (ushort)(*pbVar2 >> 3) * 0x20 +
                       ((ushort)uVar36 | (ushort)(*pbVar3 >> 3));
          } while (uVar27 < param_3);
        }
        iVar30 = iVar30 + 1;
        psVar37 = (short *)((int)psVar37 + piVar50[2]);
        iVar34 = iVar40;
      } while (*piVar50 != iVar30);
    }
  }
  else if (param_5 == 6) {
    auVar74._8_8_ = auVar65._8_8_;
    auVar74._0_8_ = DAT_00020938;
    *(undefined4 *)(param_6 + 0x54) = 1;
    *(undefined8 *)(param_6 + 0xc) = uVar21;
    *(uint *)(param_6 + 0x24) = param_3 << 1;
    if ((param_4 != 0) && (param_3 != 0)) {
      uVar25 = param_3 - 1;
      auVar5._8_8_ = SUB148(SUB1614((undefined1  [16])0x0,2),6);
      auVar5._0_8_ = 0x1000100010001;
      auVar65 = *(undefined1 (*) [16])(auVar5 << 0x40 | auVar5);
      iVar34 = param_3 * 4;
      uVar41 = uVar25 & 0xfffffff0;
      iVar40 = 0;
      local_74 = (uVar25 >> 4) << 5;
      local_70 = uVar41 + 0x7fffffff;
      psVar37 = (short *)(param_1 + 1);
      local_78 = iVar34 + -1;
      iVar30 = 0;
      do {
        iVar35 = param_3 + iVar30;
        psVar33 = (short *)(param_2 + iVar30 * 2);
        if (uVar25 < 0x10 ||
            psVar37 < param_2 + iVar35 * 2 &&
            psVar33 < (short *)(*(int *)((int)piVar51 + 8) + (int)psVar37)) {
          puVar42 = (undefined1 *)((int)psVar37 + -1);
          do {
            psVar44 = psVar33 + 1;
            *psVar33 = (ushort)((byte)puVar42[1] >> 3) * 0x800 +
                       (ushort)((byte)puVar42[2] >> 3) * 0x40 + 1 +
                       (ushort)((byte)puVar42[3] >> 3) * 2;
            puVar42 = puVar42 + 4;
            psVar33 = psVar44;
          } while (psVar44 != (short *)(param_2 + iVar35 * 2));
        }
        else {
          psVar39 = (short *)(*(int *)((int)piVar51 + 0xc) + (int)psVar33);
          psVar44 = psVar37;
          do {
            puVar42 = (undefined1 *)0x370;
            puVar38 = (undefined1 *)0x380;
            puVar28 = (undefined1 *)0x390;
            puVar43 = (undefined1 *)0x3a0;
            lVar63 = 8;
            psVar32 = psVar33;
            psVar26 = psVar44;
            psVar62 = psVar44;
            while( true ) {
              *puVar42 = (char)*psVar62;
              puVar61 = (undefined1 *)((int)psVar62 + 1);
              *puVar38 = *puVar61;
              puVar61 = puVar61 + 1;
              *puVar28 = *puVar61;
              puVar61 = puVar61 + 1;
              *puVar43 = *puVar61;
              psVar62 = (short *)(puVar61 + 1);
              lVar63 = lVar63 + -1;
              if (lVar63 == 0) break;
              puVar42 = puVar42 + 1;
              puVar38 = puVar38 + 1;
              puVar28 = puVar28 + 1;
              puVar43 = puVar43 + 1;
            }
            psVar62 = psVar44 + 0x10;
            psVar32 = psVar32 + 0x10;
            uVar57 = psVar32 == psVar39;
            psVar44 = psVar26 + 0x20;
            puVar42 = (undefined1 *)0x378;
            puVar38 = (undefined1 *)0x388;
            puVar28 = (undefined1 *)0x398;
            puVar43 = (undefined1 *)0x3a8;
            lVar63 = 8;
            while( true ) {
              *puVar42 = (char)*psVar62;
              puVar61 = (undefined1 *)((int)psVar62 + 1);
              *puVar38 = *puVar61;
              puVar61 = puVar61 + 1;
              *puVar28 = *puVar61;
              puVar61 = puVar61 + 1;
              *puVar43 = *puVar61;
              psVar62 = (short *)(puVar61 + 1);
              lVar63 = lVar63 + -1;
              if (lVar63 == 0) break;
              puVar42 = puVar42 + 1;
              puVar38 = puVar38 + 1;
              puVar28 = puVar28 + 1;
              puVar43 = puVar43 + 1;
            }
            auVar71 = VectorShiftRight(in_q9,3);
            auVar69 = VectorShiftRight(in_q10,3);
            auVar73 = VectorShiftRight(auVar74,3);
            auVar74 = VectorShiftLongLeft(auVar71._0_8_,6);
            auVar70 = VectorShiftLongLeft(auVar69._0_8_,1);
            auVar72 = VectorShiftLongLeft(auVar71._8_8_,6);
            auVar69 = VectorShiftLongLeft(auVar69._8_8_,1);
            auVar71 = VectorCopyLong(auVar73._0_8_,1,1);
            auVar73 = VectorCopyLong(auVar73._8_8_,1,1);
            auVar70 = VectorAdd(auVar70,auVar74,2);
            auVar69 = VectorAdd(auVar69,auVar72,2);
            auVar70 = VectorAdd(auVar70,auVar65,2);
            in_q9 = VectorAdd(auVar69,auVar65,2);
            auVar69 = VectorShiftLeft(auVar71,0xb,0x10,0);
            auVar73 = VectorShiftLeft(auVar73,0xb,0x10,0);
            in_q10 = VectorAdd(auVar70,auVar69,2);
            auVar74 = VectorAdd(in_q9,auVar73,2);
            *(longlong *)psVar33 = in_q10._0_8_;
            *(longlong *)(psVar33 + 4) = in_q10._8_8_;
            *(longlong *)(psVar33 + 8) = auVar74._0_8_;
            *(longlong *)(psVar33 + 0xc) = auVar74._8_8_;
            psVar33 = psVar32;
          } while (!(bool)uVar57);
          iVar29 = *(int *)((int)piVar51 + 4) + (uVar41 + iVar30) * 4;
          psVar33 = (short *)(param_2 + (*(int *)((int)piVar51 + 0x10) + iVar30) * 2);
          uVar27 = uVar41;
          do {
            pbVar1 = (byte *)(iVar29 + 1);
            uVar27 = uVar27 + 1;
            pbVar2 = (byte *)(iVar29 + 2);
            pbVar3 = (byte *)(iVar29 + 3);
            iVar29 = iVar29 + 4;
            psVar33 = psVar33 + 1;
            *psVar33 = (ushort)(*pbVar1 >> 3) * 0x800 + (ushort)(*pbVar2 >> 3) * 0x40 + 1 +
                       (ushort)(*pbVar3 >> 3) * 2;
          } while (uVar27 < param_3);
        }
        iVar40 = iVar40 + 1;
        psVar37 = (short *)((int)psVar37 + iVar34);
        iVar30 = iVar35;
      } while (*piVar51 != iVar40);
    }
  }
  else if (param_5 == 7) {
    auVar65._0_8_ = DAT_00020048;
    *(undefined4 *)(param_6 + 0x54) = 1;
    *(undefined8 *)(param_6 + 0xc) = uVar19;
    *(uint *)(param_6 + 0x24) = param_3 << 1;
    if ((param_4 != 0) && (param_3 != 0)) {
      uVar25 = param_3 - 1;
      auVar4._8_8_ = SUB148(SUB1614((undefined1  [16])0x0,2),6);
      auVar4._0_8_ = 0x1000100010001;
      auVar73 = *(undefined1 (*) [16])(auVar4 << 0x40 | auVar4);
      iVar34 = param_3 * 4;
      uVar41 = uVar25 & 0xfffffff0;
      iVar40 = 0;
      local_74 = (uVar25 >> 4) << 5;
      local_70 = uVar41 + 0x7fffffff;
      psVar37 = (short *)(param_1 + 1);
      local_78 = iVar34 + -1;
      iVar30 = 0;
      do {
        iVar35 = param_3 + iVar30;
        psVar33 = (short *)(param_2 + iVar30 * 2);
        if (uVar25 < 0x10 ||
            psVar37 < param_2 + iVar35 * 2 &&
            psVar33 < (short *)(*(int *)((int)piVar49 + 8) + (int)psVar37)) {
          puVar42 = (undefined1 *)((int)psVar37 + -1);
          do {
            psVar44 = psVar33 + 1;
            *psVar33 = (ushort)((byte)puVar42[3] >> 3) * 0x800 +
                       (ushort)((byte)puVar42[2] >> 3) * 0x40 + 1 +
                       (ushort)((byte)puVar42[1] >> 3) * 2;
            puVar42 = puVar42 + 4;
            psVar33 = psVar44;
          } while (psVar44 != (short *)(param_2 + iVar35 * 2));
        }
        else {
          psVar39 = (short *)(*(int *)((int)piVar49 + 0xc) + (int)psVar33);
          psVar44 = psVar37;
          do {
            puVar42 = (undefined1 *)0x370;
            puVar38 = (undefined1 *)0x380;
            puVar28 = (undefined1 *)0x390;
            puVar43 = (undefined1 *)0x3a0;
            lVar63 = 8;
            psVar32 = psVar33;
            psVar26 = psVar44;
            psVar62 = psVar44;
            while( true ) {
              *puVar42 = (char)*psVar62;
              puVar61 = (undefined1 *)((int)psVar62 + 1);
              *puVar38 = *puVar61;
              puVar61 = puVar61 + 1;
              *puVar28 = *puVar61;
              puVar61 = puVar61 + 1;
              *puVar43 = *puVar61;
              psVar62 = (short *)(puVar61 + 1);
              lVar63 = lVar63 + -1;
              if (lVar63 == 0) break;
              puVar42 = puVar42 + 1;
              puVar38 = puVar38 + 1;
              puVar28 = puVar28 + 1;
              puVar43 = puVar43 + 1;
            }
            psVar62 = psVar44 + 0x10;
            psVar32 = psVar32 + 0x10;
            uVar57 = psVar32 == psVar39;
            psVar44 = psVar26 + 0x20;
            puVar42 = (undefined1 *)0x378;
            puVar38 = (undefined1 *)0x388;
            puVar28 = (undefined1 *)0x398;
            puVar43 = (undefined1 *)0x3a8;
            lVar63 = 8;
            while( true ) {
              *puVar42 = (char)*psVar62;
              puVar61 = (undefined1 *)((int)psVar62 + 1);
              *puVar38 = *puVar61;
              puVar61 = puVar61 + 1;
              *puVar28 = *puVar61;
              puVar61 = puVar61 + 1;
              *puVar43 = *puVar61;
              psVar62 = (short *)(puVar61 + 1);
              lVar63 = lVar63 + -1;
              if (lVar63 == 0) break;
              puVar42 = puVar42 + 1;
              puVar38 = puVar38 + 1;
              puVar28 = puVar28 + 1;
              puVar43 = puVar43 + 1;
            }
            auVar71 = VectorShiftRight(in_q9,3);
            auVar65 = VectorShiftRight(auVar65,3);
            auVar70 = VectorShiftRight(in_q10,3);
            auVar74 = VectorShiftLongLeft(auVar71._0_8_,6);
            auVar69 = VectorShiftLongLeft(auVar65._0_8_,1);
            auVar72 = VectorShiftLongLeft(auVar71._8_8_,6);
            auVar65 = VectorShiftLongLeft(auVar65._8_8_,1);
            auVar71 = VectorCopyLong(auVar70._0_8_,1,1);
            auVar70 = VectorCopyLong(auVar70._8_8_,1,1);
            auVar69 = VectorAdd(auVar69,auVar74,2);
            auVar65 = VectorAdd(auVar65,auVar72,2);
            auVar69 = VectorAdd(auVar69,auVar73,2);
            auVar65 = VectorAdd(auVar65,auVar73,2);
            auVar71 = VectorShiftLeft(auVar71,0xb,0x10,0);
            in_q10 = VectorShiftLeft(auVar70,0xb,0x10,0);
            in_q9 = VectorAdd(auVar69,auVar71,2);
            auVar65 = VectorAdd(auVar65,in_q10,2);
            *(longlong *)psVar33 = in_q9._0_8_;
            *(longlong *)(psVar33 + 4) = in_q9._8_8_;
            *(longlong *)(psVar33 + 8) = auVar65._0_8_;
            *(longlong *)(psVar33 + 0xc) = auVar65._8_8_;
            psVar33 = psVar32;
          } while (!(bool)uVar57);
          iVar29 = *(int *)((int)piVar49 + 4) + (uVar41 + iVar30) * 4;
          psVar33 = (short *)(param_2 + (*(int *)((int)piVar49 + 0x10) + iVar30) * 2);
          uVar27 = uVar41;
          do {
            pbVar1 = (byte *)(iVar29 + 3);
            uVar27 = uVar27 + 1;
            pbVar2 = (byte *)(iVar29 + 2);
            pbVar3 = (byte *)(iVar29 + 1);
            iVar29 = iVar29 + 4;
            psVar33 = psVar33 + 1;
            *psVar33 = (ushort)(*pbVar1 >> 3) * 0x800 + (ushort)(*pbVar2 >> 3) * 0x40 + 1 +
                       (ushort)(*pbVar3 >> 3) * 2;
          } while (uVar27 < param_3);
        }
        iVar40 = iVar40 + 1;
        psVar37 = (short *)((int)psVar37 + iVar34);
        iVar30 = iVar35;
      } while (*piVar49 != iVar40);
    }
  }
  else if (param_5 == 8) {
    auVar64._8_8_ = auVar65._8_8_;
    auVar64._0_8_ = DAT_00020948;
    *(undefined4 *)(param_6 + 0x54) = 0;
    *(undefined8 *)(param_6 + 0xc) = uVar23;
    *(uint *)(param_6 + 0x24) = param_3 << 1;
    if ((param_4 != 0) && (param_3 != 0)) {
      uVar25 = param_3 - 1;
      uVar36 = 0xf000;
      uVar41 = uVar25 & 0xfffffff0;
      iVar30 = 0;
      local_70 = (uVar25 >> 4) << 6;
      local_78 = param_3 * 4;
      psVar37 = (short *)(param_1 + 1);
      local_6c = uVar41 + 0x7fffffff;
      local_74 = param_3 * 4 + -1;
      iVar34 = 0;
      do {
        iVar40 = param_3 + iVar34;
        psVar33 = (short *)(param_2 + iVar34 * 2);
        if (uVar25 < 0x10 ||
            psVar37 < param_2 + iVar40 * 2 &&
            psVar33 < (short *)(*(int *)((int)piVar52 + 0xc) + (int)psVar37)) {
          puVar42 = (undefined1 *)((int)psVar37 + -1);
          do {
            psVar44 = psVar33 + 1;
            *psVar33 = ((byte)puVar42[2] & 0xf0) + (ushort)((byte)puVar42[1] >> 4) * 0x100 +
                       ((ushort)uVar36 | (ushort)((byte)puVar42[3] >> 4));
            puVar42 = puVar42 + 4;
            psVar33 = psVar44;
          } while (psVar44 != (short *)(param_2 + iVar40 * 2));
        }
        else {
          psVar39 = (short *)(*(int *)((int)piVar52 + 0x10) + (int)psVar37);
          psVar44 = psVar37;
          do {
            puVar42 = (undefined1 *)0x370;
            puVar38 = (undefined1 *)0x380;
            puVar28 = (undefined1 *)0x390;
            puVar43 = (undefined1 *)0x3a0;
            lVar63 = 8;
            psVar32 = psVar37 + 0x20;
            psVar26 = psVar33;
            psVar62 = psVar37;
            psVar33 = psVar37;
            while( true ) {
              psVar37 = psVar32;
              *puVar42 = (char)*psVar33;
              puVar61 = (undefined1 *)((int)psVar33 + 1);
              *puVar38 = *puVar61;
              puVar61 = puVar61 + 1;
              *puVar28 = *puVar61;
              puVar61 = puVar61 + 1;
              *puVar43 = *puVar61;
              psVar33 = (short *)(puVar61 + 1);
              lVar63 = lVar63 + -1;
              if (lVar63 == 0) break;
              puVar42 = puVar42 + 1;
              puVar38 = puVar38 + 1;
              puVar28 = puVar28 + 1;
              puVar43 = puVar43 + 1;
              psVar32 = psVar37;
            }
            psVar62 = psVar62 + 0x10;
            uVar57 = psVar37 == psVar39;
            psVar33 = psVar26 + 0x10;
            puVar42 = (undefined1 *)0x378;
            puVar38 = (undefined1 *)0x388;
            puVar28 = (undefined1 *)0x398;
            puVar43 = (undefined1 *)0x3a8;
            lVar63 = 8;
            while( true ) {
              *puVar42 = (char)*psVar62;
              puVar61 = (undefined1 *)((int)psVar62 + 1);
              *puVar38 = *puVar61;
              puVar61 = puVar61 + 1;
              *puVar28 = *puVar61;
              puVar61 = puVar61 + 1;
              *puVar43 = *puVar61;
              psVar62 = (short *)(puVar61 + 1);
              lVar63 = lVar63 + -1;
              if (lVar63 == 0) break;
              puVar42 = puVar42 + 1;
              puVar38 = puVar38 + 1;
              puVar28 = puVar28 + 1;
              puVar43 = puVar43 + 1;
            }
            auVar71 = VectorShiftRight(auVar64,4);
            auVar73 = VectorShiftRight(in_q9,4);
            auVar65 = VectorShiftRight(in_q10,4);
            auVar72 = VectorShiftLongLeft(auVar71._0_8_,1);
            auVar69 = VectorShiftLongLeft(auVar73._0_8_,4);
            auVar70 = VectorCopyLong(auVar65._0_8_,1,1);
            auVar71 = VectorShiftLongLeft(auVar71._8_8_,1);
            auVar73 = VectorShiftLongLeft(auVar73._8_8_,4);
            auVar65 = VectorCopyLong(auVar65._8_8_,1,1);
            auVar69 = VectorAdd(auVar69,auVar72,2);
            in_q9 = VectorAdd(auVar73,auVar71,2);
            auVar6._8_8_ = SUB148(SUB1614((undefined1  [16])0x0,2),6);
            auVar6._0_8_ = 0xf000f000f000f000;
            auVar7._8_8_ = SUB148(SUB1614((undefined1  [16])0x0,2),6);
            auVar7._0_8_ = 0xf000f000f000f000;
            in_q10 = VectorAdd(auVar69,auVar70 | *(undefined1 (*) [16])(auVar6 << 0x40 | auVar6),2);
            auVar64 = VectorAdd(in_q9,auVar65 | *(undefined1 (*) [16])(auVar7 << 0x40 | auVar7),2);
            *(longlong *)psVar26 = in_q10._0_8_;
            *(longlong *)(psVar26 + 4) = in_q10._8_8_;
            *(longlong *)(psVar26 + 8) = auVar64._0_8_;
            *(longlong *)(psVar26 + 0xc) = auVar64._8_8_;
          } while (!(bool)uVar57);
          iVar35 = *(int *)((int)piVar52 + 4) + (uVar41 + iVar34) * 4;
          psVar33 = (short *)(param_2 + (*(int *)((int)piVar52 + 0x14) + iVar34) * 2);
          uVar27 = uVar41;
          do {
            pbVar1 = (byte *)(iVar35 + 1);
            uVar27 = uVar27 + 1;
            pbVar2 = (byte *)(iVar35 + 2);
            pbVar3 = (byte *)(iVar35 + 3);
            iVar35 = iVar35 + 4;
            psVar33 = psVar33 + 1;
            *psVar33 = (*pbVar2 & 0xf0) + (ushort)(*pbVar1 >> 4) * 0x100 +
                       ((ushort)uVar36 | (ushort)(*pbVar3 >> 4));
            psVar37 = psVar44;
          } while (uVar27 < param_3);
        }
        iVar30 = iVar30 + 1;
        psVar37 = (short *)((int)psVar37 + piVar52[2]);
        iVar34 = iVar40;
      } while (*piVar52 != iVar30);
    }
  }
  else if (param_5 == 9) {
    auVar66._8_8_ = auVar65._8_8_;
    auVar66._0_8_ = DAT_00020940;
    *(undefined4 *)(param_6 + 0x54) = 0;
    *(undefined8 *)(param_6 + 0xc) = uVar22;
    *(uint *)(param_6 + 0x24) = param_3 << 1;
    if ((param_4 != 0) && (param_3 != 0)) {
      uVar41 = param_3 - 1;
      uVar36 = 0xf000;
      uVar25 = uVar41 & 0xfffffff0;
      iVar30 = 0;
      local_78 = param_3 * 4;
      local_70 = (uVar41 >> 4) << 6;
      local_6c = uVar25 + 0x7fffffff;
      psVar37 = (short *)(param_1 + 1);
      local_74 = param_3 * 4 + -1;
      iVar34 = 0;
      do {
        iVar40 = param_3 + iVar34;
        psVar33 = (short *)(param_2 + iVar34 * 2);
        psVar44 = (short *)(param_2 + iVar40 * 2);
        bVar58 = psVar37 <= psVar44;
        bVar56 = psVar44 == psVar37;
        if (bVar58 && !bVar56) {
          bVar58 = psVar33 <= (short *)(*(int *)((int)piVar53 + 0xc) + (int)psVar37);
          bVar56 = (short *)(*(int *)((int)piVar53 + 0xc) + (int)psVar37) == psVar33;
        }
        if (uVar41 < 0x10 || bVar58 && !bVar56) {
          puVar42 = (undefined1 *)((int)psVar37 + -1);
          do {
            psVar39 = psVar33 + 1;
            *psVar33 = ((byte)puVar42[2] & 0xf0) + (ushort)((byte)puVar42[3] >> 4) * 0x100 +
                       ((ushort)uVar36 | (ushort)((byte)puVar42[1] >> 4));
            puVar42 = puVar42 + 4;
            psVar33 = psVar39;
          } while (psVar39 != psVar44);
        }
        else {
          psVar39 = (short *)(*(int *)((int)piVar53 + 0x10) + (int)psVar37);
          psVar44 = psVar37;
          do {
            puVar42 = (undefined1 *)0x370;
            puVar38 = (undefined1 *)0x380;
            puVar28 = (undefined1 *)0x390;
            puVar43 = (undefined1 *)0x3a0;
            lVar63 = 8;
            psVar32 = psVar37 + 0x20;
            psVar26 = psVar33;
            psVar62 = psVar37;
            psVar33 = psVar37;
            while( true ) {
              psVar37 = psVar32;
              *puVar42 = (char)*psVar33;
              puVar61 = (undefined1 *)((int)psVar33 + 1);
              *puVar38 = *puVar61;
              puVar61 = puVar61 + 1;
              *puVar28 = *puVar61;
              puVar61 = puVar61 + 1;
              *puVar43 = *puVar61;
              psVar33 = (short *)(puVar61 + 1);
              lVar63 = lVar63 + -1;
              if (lVar63 == 0) break;
              puVar42 = puVar42 + 1;
              puVar38 = puVar38 + 1;
              puVar28 = puVar28 + 1;
              puVar43 = puVar43 + 1;
              psVar32 = psVar37;
            }
            psVar62 = psVar62 + 0x10;
            uVar57 = psVar37 == psVar39;
            psVar33 = psVar26 + 0x10;
            puVar42 = (undefined1 *)0x378;
            puVar38 = (undefined1 *)0x388;
            puVar28 = (undefined1 *)0x398;
            puVar43 = (undefined1 *)0x3a8;
            lVar63 = 8;
            while( true ) {
              *puVar42 = (char)*psVar62;
              puVar61 = (undefined1 *)((int)psVar62 + 1);
              *puVar38 = *puVar61;
              puVar61 = puVar61 + 1;
              *puVar28 = *puVar61;
              puVar61 = puVar61 + 1;
              *puVar43 = *puVar61;
              psVar62 = (short *)(puVar61 + 1);
              lVar63 = lVar63 + -1;
              if (lVar63 == 0) break;
              puVar42 = puVar42 + 1;
              puVar38 = puVar38 + 1;
              puVar28 = puVar28 + 1;
              puVar43 = puVar43 + 1;
            }
            auVar73 = VectorShiftRight(in_q10,4);
            auVar71 = VectorShiftRight(in_q9,4);
            auVar65 = VectorShiftRight(auVar66,4);
            auVar69 = VectorShiftLongLeft(auVar73._0_8_,1);
            auVar73 = VectorShiftLongLeft(auVar73._8_8_,1);
            auVar70 = VectorCopyLong(auVar65._0_8_,1,1);
            auVar72 = VectorShiftLongLeft(auVar71._0_8_,4);
            auVar65 = VectorCopyLong(auVar65._8_8_,1,1);
            auVar71 = VectorShiftLongLeft(auVar71._8_8_,4);
            auVar69 = VectorAdd(auVar69,auVar72,2);
            in_q9 = VectorAdd(auVar73,auVar71,2);
            auVar8._8_8_ = SUB148(SUB1614((undefined1  [16])0x0,2),6);
            auVar8._0_8_ = 0xf000f000f000f000;
            auVar9._8_8_ = SUB148(SUB1614((undefined1  [16])0x0,2),6);
            auVar9._0_8_ = 0xf000f000f000f000;
            in_q10 = VectorAdd(auVar69,auVar70 | *(undefined1 (*) [16])(auVar8 << 0x40 | auVar8),2);
            auVar66 = VectorAdd(in_q9,auVar65 | *(undefined1 (*) [16])(auVar9 << 0x40 | auVar9),2);
            *(longlong *)psVar26 = in_q10._0_8_;
            *(longlong *)(psVar26 + 4) = in_q10._8_8_;
            *(longlong *)(psVar26 + 8) = auVar66._0_8_;
            *(longlong *)(psVar26 + 0xc) = auVar66._8_8_;
          } while (!(bool)uVar57);
          iVar35 = *(int *)((int)piVar53 + 4) + (uVar25 + iVar34) * 4;
          psVar33 = (short *)(param_2 + (*(int *)((int)piVar53 + 0x14) + iVar34) * 2);
          uVar27 = uVar25;
          do {
            pbVar1 = (byte *)(iVar35 + 3);
            uVar27 = uVar27 + 1;
            pbVar2 = (byte *)(iVar35 + 2);
            pbVar3 = (byte *)(iVar35 + 1);
            iVar35 = iVar35 + 4;
            psVar33 = psVar33 + 1;
            *psVar33 = (*pbVar2 & 0xf0) + (ushort)(*pbVar1 >> 4) * 0x100 +
                       ((ushort)uVar36 | (ushort)(*pbVar3 >> 4));
            psVar37 = psVar44;
          } while (uVar27 < param_3);
        }
        iVar30 = iVar30 + 1;
        psVar37 = (short *)((int)psVar37 + piVar53[2]);
        iVar34 = iVar40;
      } while (*piVar53 != iVar30);
    }
  }
  else if (param_5 == 10) {
    auVar67._8_8_ = auVar65._8_8_;
    auVar67._0_8_ = DAT_00020948;
    *(undefined4 *)(param_6 + 0x54) = 1;
    *(undefined8 *)(param_6 + 0xc) = uVar23;
    *(uint *)(param_6 + 0x24) = param_3 << 1;
    if ((param_4 != 0) && (param_3 != 0)) {
      uVar41 = param_3 - 1;
      auVar10._8_8_ = SUB148(SUB1614((undefined1  [16])0x0,2),6);
      auVar10._0_8_ = 0xf000f000f000f;
      auVar65 = *(undefined1 (*) [16])(auVar10 << 0x40 | auVar10);
      iVar34 = param_3 * 4;
      uVar25 = uVar41 & 0xfffffff0;
      iVar40 = 0;
      local_74 = (uVar41 >> 4) << 6;
      local_70 = uVar25 + 0x7fffffff;
      psVar37 = (short *)(param_1 + 1);
      local_78 = iVar34 + -1;
      iVar30 = 0;
      do {
        iVar35 = param_3 + iVar30;
        psVar33 = (short *)(param_2 + iVar30 * 2);
        psVar44 = (short *)(param_2 + iVar35 * 2);
        bVar58 = psVar37 <= psVar44;
        bVar56 = psVar44 == psVar37;
        if (bVar58 && !bVar56) {
          bVar58 = psVar33 <= (short *)(*(int *)((int)piVar54 + 8) + (int)psVar37);
          bVar56 = (short *)(*(int *)((int)piVar54 + 8) + (int)psVar37) == psVar33;
        }
        if (uVar41 < 0x10 || bVar58 && !bVar56) {
          puVar42 = (undefined1 *)((int)psVar37 + -1);
          do {
            psVar39 = psVar33 + 1;
            *psVar33 = (ushort)((byte)puVar42[2] >> 4) * 0x100 +
                       (ushort)((byte)puVar42[1] >> 4) * 0x1000 + 0xf + ((byte)puVar42[3] & 0xf0);
            puVar42 = puVar42 + 4;
            psVar33 = psVar39;
          } while (psVar39 != psVar44);
        }
        else {
          psVar39 = (short *)(*(int *)((int)piVar54 + 0xc) + (int)psVar37);
          psVar44 = psVar37;
          do {
            puVar42 = (undefined1 *)0x370;
            puVar38 = (undefined1 *)0x380;
            puVar28 = (undefined1 *)0x390;
            puVar43 = (undefined1 *)0x3a0;
            lVar63 = 8;
            psVar32 = psVar37 + 0x20;
            psVar26 = psVar33;
            psVar62 = psVar37;
            psVar33 = psVar37;
            while( true ) {
              psVar37 = psVar32;
              *puVar42 = (char)*psVar33;
              puVar61 = (undefined1 *)((int)psVar33 + 1);
              *puVar38 = *puVar61;
              puVar61 = puVar61 + 1;
              *puVar28 = *puVar61;
              puVar61 = puVar61 + 1;
              *puVar43 = *puVar61;
              psVar33 = (short *)(puVar61 + 1);
              lVar63 = lVar63 + -1;
              if (lVar63 == 0) break;
              puVar42 = puVar42 + 1;
              puVar38 = puVar38 + 1;
              puVar28 = puVar28 + 1;
              puVar43 = puVar43 + 1;
              psVar32 = psVar37;
            }
            psVar62 = psVar62 + 0x10;
            uVar57 = psVar37 == psVar39;
            psVar33 = psVar26 + 0x10;
            puVar42 = (undefined1 *)0x378;
            puVar38 = (undefined1 *)0x388;
            puVar28 = (undefined1 *)0x398;
            puVar43 = (undefined1 *)0x3a8;
            lVar63 = 8;
            while( true ) {
              *puVar42 = (char)*psVar62;
              puVar61 = (undefined1 *)((int)psVar62 + 1);
              *puVar38 = *puVar61;
              puVar61 = puVar61 + 1;
              *puVar28 = *puVar61;
              puVar61 = puVar61 + 1;
              *puVar43 = *puVar61;
              psVar62 = (short *)(puVar61 + 1);
              lVar63 = lVar63 + -1;
              if (lVar63 == 0) break;
              puVar42 = puVar42 + 1;
              puVar38 = puVar38 + 1;
              puVar28 = puVar28 + 1;
              puVar43 = puVar43 + 1;
            }
            auVar69 = VectorShiftRight(in_q9,4);
            auVar71 = VectorShiftRight(in_q10,4);
            auVar73 = VectorShiftRight(auVar67,4);
            auVar70 = VectorShiftLongLeft(auVar69._0_8_,1);
            auVar69 = VectorShiftLongLeft(auVar69._8_8_,1);
            auVar74 = VectorShiftLongLeft(auVar71._0_8_,4);
            auVar72 = VectorShiftLongLeft(auVar71._8_8_,4);
            auVar71 = VectorCopyLong(auVar73._0_8_,1,1);
            auVar73 = VectorCopyLong(auVar73._8_8_,1,1);
            auVar70 = VectorAdd(auVar70,auVar74,2);
            auVar69 = VectorAdd(auVar69,auVar72,2);
            auVar70 = VectorAdd(auVar70,auVar65,2);
            in_q9 = VectorAdd(auVar69,auVar65,2);
            auVar69 = VectorShiftLeft(auVar71,0xc,0x10,0);
            auVar73 = VectorShiftLeft(auVar73,0xc,0x10,0);
            in_q10 = VectorAdd(auVar70,auVar69,2);
            auVar67 = VectorAdd(in_q9,auVar73,2);
            *(longlong *)psVar26 = in_q10._0_8_;
            *(longlong *)(psVar26 + 4) = in_q10._8_8_;
            *(longlong *)(psVar26 + 8) = auVar67._0_8_;
            *(longlong *)(psVar26 + 0xc) = auVar67._8_8_;
          } while (!(bool)uVar57);
          iVar29 = *(int *)((int)piVar54 + 4) + (uVar25 + iVar30) * 4;
          psVar33 = (short *)(param_2 + (*(int *)((int)piVar54 + 0x10) + iVar30) * 2);
          uVar27 = uVar25;
          do {
            pbVar1 = (byte *)(iVar29 + 2);
            uVar27 = uVar27 + 1;
            pbVar2 = (byte *)(iVar29 + 1);
            pbVar3 = (byte *)(iVar29 + 3);
            iVar29 = iVar29 + 4;
            psVar33 = psVar33 + 1;
            *psVar33 = (ushort)(*pbVar1 >> 4) * 0x100 + (ushort)(*pbVar2 >> 4) * 0x1000 + 0xf +
                       (*pbVar3 & 0xf0);
            psVar37 = psVar44;
          } while (uVar27 < param_3);
        }
        iVar40 = iVar40 + 1;
        psVar37 = (short *)((int)psVar37 + iVar34);
        iVar30 = iVar35;
      } while (*piVar54 != iVar40);
    }
  }
  else if (param_5 == 0xb) {
    auVar68._8_8_ = auVar65._8_8_;
    auVar68._0_8_ = DAT_00021138;
    *(undefined4 *)(param_6 + 0x54) = 1;
    *(undefined8 *)(param_6 + 0xc) = uVar24;
    *(uint *)(param_6 + 0x24) = param_3 << 1;
    if ((param_4 != 0) && (param_3 != 0)) {
      uVar25 = param_3 - 1;
      auVar11._8_8_ = SUB148(SUB1614((undefined1  [16])0x0,2),6);
      auVar11._0_8_ = 0xf000f000f000f;
      auVar65 = *(undefined1 (*) [16])(auVar11 << 0x40 | auVar11);
      iVar34 = param_3 * 4;
      uVar41 = uVar25 & 0xfffffff0;
      iVar40 = 0;
      local_78 = (uVar25 >> 4) << 6;
      local_70 = uVar41 + 0x7fffffff;
      psVar37 = (short *)(param_1 + 1);
      local_74 = iVar34 + -1;
      iVar30 = 0;
      do {
        iVar35 = param_3 + iVar30;
        psVar33 = (short *)(param_2 + iVar30 * 2);
        psVar44 = (short *)(param_2 + iVar35 * 2);
        bVar58 = psVar37 <= psVar44;
        bVar56 = psVar44 == psVar37;
        if (bVar58 && !bVar56) {
          bVar58 = psVar33 <= (short *)(*(int *)((int)piVar55 + 0xc) + (int)psVar37);
          bVar56 = (short *)(*(int *)((int)piVar55 + 0xc) + (int)psVar37) == psVar33;
        }
        if (uVar25 < 0x10 || bVar58 && !bVar56) {
          puVar42 = (undefined1 *)((int)psVar37 + -1);
          do {
            psVar39 = psVar33 + 1;
            *psVar33 = (ushort)((byte)puVar42[2] >> 4) * 0x100 +
                       (ushort)((byte)puVar42[3] >> 4) * 0x1000 + 0xf + ((byte)puVar42[1] & 0xf0);
            puVar42 = puVar42 + 4;
            psVar33 = psVar39;
          } while (psVar39 != psVar44);
        }
        else {
          psVar39 = (short *)(*(int *)((int)piVar55 + 8) + (int)psVar37);
          psVar44 = psVar37;
          do {
            puVar42 = (undefined1 *)0x370;
            puVar38 = (undefined1 *)0x380;
            puVar28 = (undefined1 *)0x390;
            puVar43 = (undefined1 *)0x3a0;
            lVar63 = 8;
            psVar32 = psVar37 + 0x20;
            psVar26 = psVar33;
            psVar62 = psVar37;
            psVar33 = psVar37;
            while( true ) {
              psVar37 = psVar32;
              *puVar42 = (char)*psVar33;
              puVar61 = (undefined1 *)((int)psVar33 + 1);
              *puVar38 = *puVar61;
              puVar61 = puVar61 + 1;
              *puVar28 = *puVar61;
              puVar61 = puVar61 + 1;
              *puVar43 = *puVar61;
              psVar33 = (short *)(puVar61 + 1);
              lVar63 = lVar63 + -1;
              if (lVar63 == 0) break;
              puVar42 = puVar42 + 1;
              puVar38 = puVar38 + 1;
              puVar28 = puVar28 + 1;
              puVar43 = puVar43 + 1;
              psVar32 = psVar37;
            }
            psVar62 = psVar62 + 0x10;
            uVar57 = psVar37 == psVar39;
            psVar33 = psVar26 + 0x10;
            puVar42 = (undefined1 *)0x378;
            puVar38 = (undefined1 *)0x388;
            puVar28 = (undefined1 *)0x398;
            puVar43 = (undefined1 *)0x3a8;
            lVar63 = 8;
            while( true ) {
              *puVar42 = (char)*psVar62;
              puVar61 = (undefined1 *)((int)psVar62 + 1);
              *puVar38 = *puVar61;
              puVar61 = puVar61 + 1;
              *puVar28 = *puVar61;
              puVar61 = puVar61 + 1;
              *puVar43 = *puVar61;
              psVar62 = (short *)(puVar61 + 1);
              lVar63 = lVar63 + -1;
              if (lVar63 == 0) break;
              puVar42 = puVar42 + 1;
              puVar38 = puVar38 + 1;
              puVar28 = puVar28 + 1;
              puVar43 = puVar43 + 1;
            }
            auVar73 = VectorShiftRight(in_q9,4);
            auVar71 = VectorShiftRight(auVar68,4);
            auVar70 = VectorShiftRight(in_q10,4);
            auVar69 = VectorShiftLongLeft(auVar73._0_8_,1);
            auVar73 = VectorShiftLongLeft(auVar73._8_8_,1);
            auVar74 = VectorShiftLongLeft(auVar71._0_8_,4);
            auVar72 = VectorShiftLongLeft(auVar71._8_8_,4);
            auVar71 = VectorCopyLong(auVar70._0_8_,1,1);
            auVar70 = VectorCopyLong(auVar70._8_8_,1,1);
            auVar69 = VectorAdd(auVar69,auVar74,2);
            auVar73 = VectorAdd(auVar73,auVar72,2);
            auVar69 = VectorAdd(auVar69,auVar65,2);
            auVar73 = VectorAdd(auVar73,auVar65,2);
            auVar71 = VectorShiftLeft(auVar71,0xc,0x10,0);
            in_q10 = VectorShiftLeft(auVar70,0xc,0x10,0);
            in_q9 = VectorAdd(auVar69,auVar71,2);
            auVar68 = VectorAdd(auVar73,in_q10,2);
            *(longlong *)psVar26 = in_q9._0_8_;
            *(longlong *)(psVar26 + 4) = in_q9._8_8_;
            *(longlong *)(psVar26 + 8) = auVar68._0_8_;
            *(longlong *)(psVar26 + 0xc) = auVar68._8_8_;
          } while (!(bool)uVar57);
          psVar33 = (short *)(param_2 + (*(int *)((int)piVar55 + 0x10) + iVar30) * 2);
          iVar30 = *(int *)((int)piVar55 + 4) + (uVar41 + iVar30) * 4;
          uVar27 = uVar41;
          do {
            pbVar1 = (byte *)(iVar30 + 2);
            uVar27 = uVar27 + 1;
            pbVar2 = (byte *)(iVar30 + 3);
            pbVar3 = (byte *)(iVar30 + 1);
            iVar30 = iVar30 + 4;
            psVar33 = psVar33 + 1;
            *psVar33 = (ushort)(*pbVar1 >> 4) * 0x100 + (ushort)(*pbVar2 >> 4) * 0x1000 + 0xf +
                       (*pbVar3 & 0xf0);
            psVar37 = psVar44;
          } while (uVar27 < param_3);
        }
        iVar40 = iVar40 + 1;
        psVar37 = (short *)((int)psVar37 + iVar34);
        iVar30 = iVar35;
      } while (*piVar55 != iVar40);
    }
  }
  else if (param_5 == 0xc) {
    uVar41 = 0;
    *(undefined8 *)(param_6 + 0xc) = DAT_00021140;
    *(undefined4 *)(param_6 + 0x54) = 0;
    *(uint *)(param_6 + 0x24) = param_3 >> 2;
    if ((param_4 != 0) && (param_3 != 0)) {
      local_78 = 0;
      do {
        uVar25 = 0;
        puVar42 = local_7c;
        do {
          pbVar1 = puVar42 + 2;
          iVar34 = (uVar41 >> 2) + (uVar25 >> 2);
          pbVar2 = puVar42 + 1;
          uVar27 = ~uVar25;
          uVar25 = uVar25 + 1;
          pbVar3 = puVar42 + 3;
          puVar42 = puVar42 + 4;
          if ((short)(ushort)*pbVar3 * 0x12 +
              (short)(ushort)*pbVar2 * 0x36 + (short)(ushort)*pbVar1 * 0xb7 + 0x80U < 0x1100) {
            iVar30 = 2;
          }
          else {
            iVar30 = 3;
          }
          param_2[iVar34] = param_2[iVar34] | (byte)(iVar30 << ((uVar27 & 3) << 1));
        } while (param_3 != uVar25);
        uVar41 = uVar41 + param_3;
        local_78 = local_78 + 1;
        local_7c = local_7c + param_3 * 4;
      } while (param_4 != local_78);
    }
  }
  else if (param_5 == 0xd) {
    *(undefined8 *)(param_6 + 0xc) = DAT_00020028;
    *(undefined4 *)(param_6 + 0x54) = 1;
    *(uint *)(param_6 + 0x24) = param_3 >> 2;
    if ((param_4 != 0) && (param_3 != 0)) {
      uVar41 = 0;
      local_78 = 0;
      do {
        uVar25 = 0;
        puVar42 = local_7c;
        do {
          pbVar1 = puVar42 + 2;
          iVar34 = (uVar41 >> 2) + (uVar25 >> 2);
          pbVar2 = puVar42 + 1;
          uVar27 = ~uVar25;
          uVar25 = uVar25 + 1;
          pbVar3 = puVar42 + 3;
          puVar42 = puVar42 + 4;
          if ((short)(ushort)*pbVar3 * 0x12 +
              (short)(ushort)*pbVar2 * 0x36 + (short)(ushort)*pbVar1 * 0xb7 + 0x80U < 0x1100) {
            iVar30 = 1;
          }
          else {
            iVar30 = 3;
          }
          param_2[iVar34] = param_2[iVar34] | (byte)(iVar30 << ((uVar27 & 3) << 1));
        } while (param_3 != uVar25);
        uVar41 = uVar41 + param_3;
        local_78 = local_78 + 1;
        local_7c = local_7c + param_3 * 4;
      } while (param_4 != local_78);
    }
  }
  return 0;
}



/* ===== osd3_get_test_case @ 00021148 size=2624 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4
osd3_get_test_case(int param_1,int *param_2,int *param_3,undefined4 param_4,int param_5,int param_6,
                  uint param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  undefined1 *puVar19;
  uint uVar20;
  void *__s;
  int iVar21;
  uint uVar22;
  bool bVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint auStack_e0 [4];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [132];
  
  puVar19 = auStack_a8;
  auStack_e0[0] = *(uint *)(DAT_00021930 + 0x21180);
  auStack_e0[1] = *(undefined4 *)(DAT_00021930 + 0x21184);
  auStack_e0[2] = *(undefined4 *)(DAT_00021930 + 0x21188);
  auStack_e0[3] = *(undefined4 *)(DAT_00021930 + 0x2118c);
  uStack_d0 = *(undefined4 *)(DAT_00021930 + 0x21190);
  uStack_cc = *(undefined4 *)(DAT_00021930 + 0x21194);
  uStack_c8 = *(undefined4 *)(DAT_00021930 + 0x21198);
  uStack_c4 = *(undefined4 *)(DAT_00021930 + 0x2119c);
  uStack_c0 = *(undefined4 *)(DAT_00021930 + 0x211a0);
  uStack_bc = *(undefined4 *)(DAT_00021930 + 0x211a4);
  uStack_b8 = *(undefined4 *)(DAT_00021930 + 0x211a8);
  uStack_b4 = *(undefined4 *)(DAT_00021930 + 0x211ac);
  local_b0 = *(undefined4 *)(DAT_00021930 + 0x211b0);
  uStack_ac = *(undefined4 *)(DAT_00021930 + 0x211b4);
  iVar14 = DAT_00021934 + 0x211a4;
  memcpy(puVar19,(void *)(DAT_00021930 + 0x211b8),0x7e);
  if (param_1 == 0) {
    return 0xfffffc12;
  }
  __s = (void *)(param_1 + 8);
  memset(__s,0,0x8c);
  uVar9 = DAT_00021bf8;
  uVar8 = DAT_00021bf0;
  uVar7 = DAT_00021be8;
  uVar25 = DAT_00021be0;
  uVar24 = DAT_00021928;
  if (param_7 < 0xe) {
    uVar15 = param_7;
    if (param_7 < 0xc) {
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x68) = 1;
      *(undefined8 *)(param_1 + 0x8c) = uVar24;
    }
  }
  else if (param_7 == 0xe) {
    *(undefined4 *)(param_1 + 0x68) = 2;
    uVar15 = 0;
  }
  else if (param_7 == 0xf) {
    *(undefined4 *)(param_1 + 0x68) = 2;
    uVar15 = 4;
  }
  else if (param_7 == 0x10) {
    uVar15 = 4;
    *(undefined4 *)(param_1 + 0x68) = 1;
    *(undefined8 *)(param_1 + 0x8c) = uVar24;
  }
  else if (param_7 == 0x11) {
    *(undefined4 *)(param_1 + 0x68) = 2;
    uVar15 = 8;
  }
  else if (param_7 == 0x12) {
    uVar15 = 0xc;
    *(undefined4 *)(param_1 + 0x68) = 2;
    *(undefined8 *)(param_1 + 0x8c) = uVar25;
  }
  else if (param_7 == 0x13) {
    uVar15 = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  else if (param_7 == 0x14) {
    uVar15 = 0xc;
    *(undefined4 *)(param_1 + 0x68) = 1;
    *(undefined8 *)(param_1 + 0xc) = uVar7;
    *(undefined8 *)(param_1 + 0x8c) = uVar8;
  }
  else if (param_7 == 0x15) {
    uVar15 = 0xc;
    *(undefined4 *)(param_1 + 0x68) = 1;
    *(undefined8 *)(param_1 + 0xc) = 0x100000001;
    *(undefined8 *)(param_1 + 0x8c) = uVar9;
  }
  else if (param_7 == 0x16) {
    uVar15 = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0xc) = uVar7;
  }
  else if (param_7 == 0x17) {
    uVar15 = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0x100000001;
  }
  else if (param_7 < 0x1e) {
    uVar22 = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    uVar24 = DAT_00021bf0;
    if (param_7 == 0x18) {
      uVar15 = 0;
      *(undefined8 *)(param_1 + 0x38) = DAT_00021be8;
      puVar19 = (undefined1 *)0x10;
    }
    else if (param_7 == 0x19) {
      uVar15 = 0;
      *(undefined8 *)(param_1 + 0x38) = DAT_00021c00;
      puVar19 = (undefined1 *)0x10;
    }
    else if (param_7 == 0x1d) {
      puVar19 = (undefined1 *)0x10;
      *(undefined8 *)(param_1 + 0x38) = DAT_00021be8;
      uVar15 = 0xc;
      *(undefined4 *)(param_1 + 0x68) = 1;
      *(undefined8 *)(param_1 + 0x8c) = uVar24;
    }
    else {
      *(undefined8 *)(param_1 + 0x38) = 0x100000001;
      if (param_7 == 0x1a) {
        puVar19 = (undefined1 *)0x10;
        uVar15 = uVar22;
      }
      else {
        bVar23 = param_7 == 0x1b;
        if (bVar23) {
          puVar19 = (undefined1 *)0x20;
        }
        uVar22 = (uint)bVar23;
        uVar15 = 0;
        if (!bVar23) {
          uVar22 = 3;
          puVar19 = (undefined1 *)0x40;
        }
      }
    }
    *(undefined8 *)(param_1 + 0x44) = 0;
    iVar18 = __aeabi_uidiv(param_5,puVar19);
    iVar21 = __aeabi_uidiv(param_6,puVar19);
    iVar16 = *param_3;
    *(uint *)(param_1 + 0x4c) = uVar22;
    uVar22 = iVar18 + 7U >> 3;
    *(uint *)(param_1 + 0x50) = uVar22;
    uVar12 = iVar21 + 7;
    uVar13 = uVar12 & 0xfffffff8;
    if (iVar16 != 0) {
      mpp_buffer_put_with_caller(iVar16,DAT_0002194c + 0x21494);
    }
    iVar21 = DAT_00021950 + 0x214b0;
    mpp_buffer_get_with_tag(0,param_3,uVar13 * uVar22 + 0xf & 0xfffffff0,DAT_00021954 + 0x214b4);
    uVar11 = mpp_buffer_get_fd_with_caller(*param_3,iVar21);
    *(undefined4 *)(param_1 + 0x54) = uVar11;
    iVar21 = mpp_buffer_get_ptr_with_caller(*param_3,iVar21);
    if (uVar13 != 0) {
      if (uVar13 - 1 < 0xf) {
        uVar12 = 0;
      }
      else {
        auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar1._0_8_ = 0x1000000010;
        auVar5._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar5._0_8_ = 0x700000007;
        auVar5 = *(undefined1 (*) [16])(auVar5 << 0x40 | auVar5);
        auVar6._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar6._0_8_ = 0x100000001;
        auVar6 = *(undefined1 (*) [16])(auVar6 << 0x40 | auVar6);
        auVar2._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar2._0_8_ = 0x400000004;
        iVar16 = iVar21 + uVar22 * 8;
        auVar3._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar3._0_8_ = 0x800000008;
        auVar27._8_8_ = DAT_00021920;
        auVar27._0_8_ = DAT_00021918;
        auVar4._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar4._0_8_ = 0xc0000000c;
        puVar19 = (undefined1 *)(iVar21 + uVar22);
        uVar20 = 0;
        do {
          auVar29 = VectorAdd(auVar27,*(undefined1 (*) [16])(auVar2 << 0x40 | auVar2),4);
          auVar28 = VectorAdd(auVar27,*(undefined1 (*) [16])(auVar3 << 0x40 | auVar3),4);
          uVar20 = uVar20 + 1;
          auVar26 = VectorAdd(auVar27,*(undefined1 (*) [16])(auVar4 << 0x40 | auVar4),4);
          auVar30 = VectorShiftLeft(auVar6,auVar29 & auVar5,4,0);
          auVar29 = VectorShiftLeft(auVar6,auVar26 & auVar5,4,0);
          auVar26 = VectorShiftLeft(auVar6,auVar27 & auVar5,4,0);
          auVar28 = VectorShiftLeft(auVar6,auVar28 & auVar5,4,0);
          uVar24 = VectorCopyNarrow(auVar26,4);
          uVar25 = VectorCopyNarrow(auVar30,4);
          auVar27 = VectorAdd(auVar27,*(undefined1 (*) [16])(auVar1 << 0x40 | auVar1),4);
          auVar28._0_8_ = VectorCopyNarrow(auVar28,4);
          auVar28._8_8_ = VectorCopyNarrow(auVar29,4);
          auVar26._8_8_ = uVar25;
          auVar26._0_8_ = uVar24;
          uVar24 = VectorCopyNarrow(auVar26,2);
          uVar25 = VectorCopyNarrow(auVar28,2);
          puVar19[-uVar22] = (char)uVar24;
          *puVar19 = (char)((ulonglong)uVar24 >> 8);
          puVar19[uVar22] = (char)((ulonglong)uVar24 >> 0x10);
          puVar19[uVar22 * 2] = (char)((ulonglong)uVar24 >> 0x18);
          puVar19[uVar22 * 3] = (char)((ulonglong)uVar24 >> 0x20);
          puVar19[uVar22 * 4] = (char)((ulonglong)uVar24 >> 0x28);
          puVar19[uVar22 * 5] = (char)((ulonglong)uVar24 >> 0x30);
          puVar19[uVar22 * 6] = (char)((ulonglong)uVar24 >> 0x38);
          puVar17 = puVar19 + uVar22 * 7;
          puVar19 = puVar19 + uVar22 * 0x10;
          *puVar17 = (char)uVar25;
          *(char *)(iVar16 + uVar22) = (char)((ulonglong)uVar25 >> 8);
          *(char *)(iVar16 + uVar22 * 2) = (char)((ulonglong)uVar25 >> 0x10);
          *(char *)(iVar16 + uVar22 * 3) = (char)((ulonglong)uVar25 >> 0x18);
          *(char *)(iVar16 + uVar22 * 4) = (char)((ulonglong)uVar25 >> 0x20);
          *(char *)(iVar16 + uVar22 * 5) = (char)((ulonglong)uVar25 >> 0x28);
          *(char *)(iVar16 + uVar22 * 6) = (char)((ulonglong)uVar25 >> 0x30);
          puVar17 = (undefined1 *)(iVar16 + uVar22 * 7);
          iVar16 = iVar16 + uVar22 * 0x10;
          *puVar17 = (char)((ulonglong)uVar25 >> 0x38);
        } while (uVar20 != uVar12 >> 4);
        uVar12 = uVar12 & 0xfffffff0;
        if (uVar13 == uVar12) goto LAB_000211fc;
      }
      *(undefined1 *)(iVar21 + uVar12 * uVar22) = 1;
      if (uVar12 + 1 < uVar13) {
        iVar16 = uVar12 * uVar22 + uVar22;
        *(char *)(iVar21 + iVar16) = (char)(1 << (uVar12 + 1 & 7));
        if (uVar12 + 2 < uVar13) {
          iVar16 = uVar22 + iVar16;
          *(char *)(iVar21 + iVar16) = (char)(1 << (uVar12 + 2 & 7));
          if (uVar12 + 3 < uVar13) {
            iVar16 = uVar22 + iVar16;
            *(char *)(iVar21 + iVar16) = (char)(1 << (uVar12 + 3 & 7));
            if (uVar12 + 4 < uVar13) {
              iVar16 = uVar22 + iVar16;
              *(char *)(iVar21 + iVar16) = (char)(1 << (uVar12 + 4 & 7));
              if (uVar12 + 5 < uVar13) {
                iVar16 = uVar22 + iVar16;
                *(char *)(iVar21 + iVar16) = (char)(1 << (uVar12 + 5 & 7));
                if (uVar12 + 6 < uVar13) {
                  iVar16 = iVar16 + uVar22;
                  *(char *)(iVar21 + iVar16) = (char)(1 << (uVar12 + 6 & 7));
                  if (uVar12 + 7 < uVar13) {
                    iVar16 = uVar22 + iVar16;
                    *(char *)(iVar21 + iVar16) = (char)(1 << (uVar12 + 7 & 7));
                    if (uVar12 + 8 < uVar13) {
                      iVar16 = uVar22 + iVar16;
                      *(undefined1 *)(iVar21 + iVar16) = 1;
                      if (uVar12 + 9 < uVar13) {
                        iVar16 = uVar22 + iVar16;
                        *(char *)(iVar21 + iVar16) = (char)(1 << (uVar12 + 9 & 7));
                        if (uVar12 + 10 < uVar13) {
                          iVar16 = uVar22 + iVar16;
                          uVar10 = 1;
                          *(char *)(iVar21 + iVar16) = (char)(1 << (uVar12 + 10 & 7));
                          if (uVar12 + 0xb < uVar13) {
                            iVar16 = iVar16 + uVar22;
                            *(char *)(iVar21 + iVar16) = (char)(1 << (uVar12 + 0xb & 7));
                            if (uVar12 + 0xc < uVar13) {
                              iVar16 = iVar16 + uVar22;
                              *(char *)(iVar21 + iVar16) = (char)(1 << (uVar12 + 0xc & 7));
                              if (uVar12 + 0xd < uVar13) {
                                uVar20 = uVar12 + 0xe;
                                iVar16 = iVar16 + uVar22;
                                uVar22 = uVar20;
                                if (uVar20 < uVar13) {
                                  uVar22 = uVar20 & 7;
                                }
                                if (uVar20 < uVar13) {
                                  uVar10 = (undefined1)(1 << (uVar22 & 0xff));
                                  uVar22 = iVar18 + 7U;
                                }
                                *(char *)(iVar21 + iVar16) = (char)(1 << (uVar12 + 0xd & 7));
                                if (uVar20 < uVar13) {
                                  *(undefined1 *)(iVar21 + iVar16 + (uVar22 >> 3)) = uVar10;
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
  else {
    uVar15 = 0;
  }
LAB_000211fc:
  if (*param_2 != 0) {
    mpp_buffer_put_with_caller(*param_2,DAT_00021938 + 0x21214);
  }
  uVar15 = auStack_e0[uVar15];
  if (uVar15 < 0x10006) {
    if (0xffff < uVar15) {
LAB_00021878:
      uVar15 = param_6 * param_5 * 2 + 0xfU & 0xfffffff0;
      goto LAB_00021274;
    }
    if (uVar15 == 0xc) {
      uVar15 = param_6 * param_5 + 0xfU & 0xfffffff0;
      goto LAB_00021274;
    }
    if (uVar15 < 0xd) {
      if ((uVar15 == 2) || ((1 < uVar15 && (5 < uVar15)))) goto LAB_00021878;
    }
    else if (0xe < uVar15) {
      if (uVar15 < 0x11) goto LAB_0002184c;
      if (uVar15 == 0x11) {
        uVar15 = ((uint)(param_6 * param_5) >> 2) + 0xf & 0xfffffff0;
        goto LAB_00021274;
      }
    }
  }
  else if (uVar15 < 0x1000e) {
    if (0x10009 < uVar15) {
      uVar15 = param_6 * param_5 * 4 + 0xfU & 0xfffffff0;
      goto LAB_00021274;
    }
    if (uVar15 < 0x10008) {
LAB_0002184c:
      uVar15 = param_6 * param_5 * 3 + 0xfU & 0xfffffff0;
      goto LAB_00021274;
    }
  }
  else if (uVar15 < 0x10010) goto LAB_00021878;
  uVar15 = 0;
LAB_00021274:
  iVar21 = DAT_0002193c + 0x2128c;
  iVar18 = DAT_00021940 + 0x21290;
  mpp_buffer_get_with_tag(0,param_2,uVar15,iVar21);
  _mpp_log(iVar21,DAT_00021944 + 0x212b8,iVar18,param_7);
  if (*param_2 == 0) {
    return 0xfffffc12;
  }
  iVar18 = mpp_buffer_get_ptr_with_caller(*param_2,iVar18);
  if ((iVar18 == 0) &&
     (_mpp_err(iVar21,DAT_0002195c + 0x218bc,0,DAT_00021958 + 0x218ac),
     (**(uint **)(iVar14 + DAT_00021960) & 0x10000000) != 0)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar14 = param_5 + -1;
  uVar11 = mpp_buffer_get_fd_with_caller(*param_2,DAT_00021948 + 0x212ec);
  *(undefined4 *)(param_1 + 0x84) = uVar11;
  uVar11 = translate_argb(param_4,iVar18,param_5,param_6);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(int *)(param_1 + 0x24) = iVar14;
  *(undefined4 *)(param_1 + 0x60) = 0xff;
  *(undefined4 *)(param_1 + 100) = 0xff;
  *(undefined4 *)(param_1 + 0x7c) = 10;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(int *)(param_1 + 0x28) = param_6 + -1;
  *(undefined4 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined4 *)(param_1 + 0x6c) = 1;
  *(undefined4 *)(param_1 + 0x78) = 0x33;
  if (param_7 == 0x1e) {
    memcpy((void *)(param_1 + 0x94),__s,0x8c);
    *(int *)(param_1 + 0xa8) = param_5 + -0x10;
    *(int *)(param_1 + 0xb0) = iVar14 + param_5 + -0x10;
    *(undefined4 *)(param_1 + 0xac) = 0x10;
    *(int *)(param_1 + 0xb4) = param_6 + 0xf;
    memcpy((void *)(param_1 + 0x120),__s,0x8c);
    uVar24 = DAT_00021bd8;
    *(undefined4 *)(param_1 + 0x138) = 0x20;
    iVar18 = (param_5 + 0x7ffffff0) * 2;
    *(int *)(param_1 + 0x134) = iVar18;
    *(int *)(param_1 + 0x13c) = iVar14 + iVar18;
    *(int *)(param_1 + 0x140) = param_6 + 0x1f;
    *(undefined8 *)(param_1 + 0x17c) = uVar24;
    *(undefined4 *)(param_1 + 4) = 3;
    return uVar11;
  }
  return uVar11;
}



/* ===== mpp_spinlock_init @ 00021c08 size=28 ===== */

void mpp_spinlock_init(undefined4 *param_1)

{
  bool bVar1;
  
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = 0;
  DataMemoryBarrier(0xb);
  return;
}



/* ===== mpp_spinlock_lock @ 00021c24 size=52 ===== */

void mpp_spinlock_lock(int *param_1)

{
  bool bVar1;
  
  do {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = *param_1 == 0;
      if (!bVar1) goto LAB_00021c44;
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = 1;
    bVar1 = true;
LAB_00021c44:
    DataMemoryBarrier(0xb);
    if (bVar1) {
      return;
    }
  } while( true );
}



/* ===== mpp_spinlock_unlock @ 00021c58 size=56 ===== */

void mpp_spinlock_unlock(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = 0;
  DataMemoryBarrier(0xb);
  if (iVar2 == 0) {
    _mpp_err((int)&DAT_00021c90 + DAT_00021c94,DAT_00021c90 + 0x21c8c,0,param_1);
    return;
  }
  return;
}



/* ===== mpp_spinlock_trylock @ 00021c98 size=48 ===== */

bool mpp_spinlock_trylock(int *param_1)

{
  bool bVar1;
  
  DataMemoryBarrier(0xb);
  do {
    bVar1 = *param_1 == 0;
    if (!bVar1) goto LAB_00021cb8;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = 1;
  bVar1 = true;
LAB_00021cb8:
  DataMemoryBarrier(0xb);
  return bVar1;
}



/* ===== _fini @ 00021cc8 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00035000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0003501c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_mpp_log @ 00035020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _mpp_log(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_osal_malloc @ 00035024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_osal_malloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00035028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0003502c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 00035030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::nanosleep @ 00035034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int nanosleep(timespec *__requested_time,timespec *__remaining)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 00035038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_frame_get_ver_stride @ 0003503c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_frame_get_ver_stride(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 00035040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00035044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 00035048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 0003504c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgetc @ 00035050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fgetc(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 00035054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_check_support_format @ 00035058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_check_support_format(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_buffer_get_with_tag @ 0003505c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_buffer_get_with_tag(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 00035060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00035064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_show_color_format @ 00035068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_show_color_format(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_enc_cfg_set_s32 @ 0003506c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_enc_cfg_set_s32(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 00035070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00035074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_buffer_get_fd_with_caller @ 00035078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_buffer_get_fd_with_caller(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vfprintf @ 0003507c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 00035080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strnlen @ 00035084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strnlen(char *__string,size_t __maxlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00035088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_frame_get_hor_stride @ 0003508c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_frame_get_hor_stride(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 00035090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_buffer_import_with_tag @ 00035094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_buffer_import_with_tag(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 00035098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::feof @ 0003509c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int feof(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_show_support_format @ 000350a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_show_support_format(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atof @ 000350a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double atof(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 000350a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_frame_get_height @ 000350ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_frame_get_height(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 000350b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_frame_init @ 000350b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_frame_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_osal_free @ 000350b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_osal_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_frame_set_ver_stride @ 000350bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_frame_set_ver_stride(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_frame_set_pts @ 000350c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_frame_set_pts(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_enc_cfg_deinit @ 000350c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_enc_cfg_deinit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_cond_signal @ 000350c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_signal(pthread_cond_t *__cond)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 000350cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 000350d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_osal_calloc @ 000350d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_osal_calloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 000350d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 000350dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_frame_set_height @ 000350e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_frame_set_height(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_enc_cfg_init @ 000350e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_enc_cfg_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_time @ 000350e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_time(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_frame_set_fmt @ 000350ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_frame_set_fmt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_cond_timedwait @ 000350f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_timedwait(pthread_cond_t *__cond,pthread_mutex_t *__mutex,timespec *__abstime)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uidivmod @ 000350f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uidivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 000350f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_idivmod @ 000350fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_idivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpid @ 00035100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_frame_get_width @ 00035104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_frame_get_width(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_buffer_get_ptr_with_caller @ 00035108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_buffer_get_ptr_with_caller(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fgetc_unlocked @ 0003510c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fgetc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_frame_set_hor_stride @ 00035110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_frame_set_hor_stride(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_cond_init @ 00035114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_init(pthread_cond_t *__cond,pthread_condattr_t *__cond_attr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 00035118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clearerr @ 0003511c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void clearerr(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_mpp_err @ 00035120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _mpp_err(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_frame_set_jpege_chan_id @ 00035124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_frame_set_jpege_chan_id(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mmap64 @ 00035128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap64(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off64_t __offset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_cond_destroy @ 0003512c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_destroy(pthread_cond_t *__cond)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_idiv @ 00035130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_idiv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_frame_set_eos @ 00035134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_frame_set_eos(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_frame_get_fmt @ 00035138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_frame_get_fmt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_env_get_u32 @ 0003513c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_env_get_u32(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 00035140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 00035144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_enc_cfg_set_u32 @ 00035148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_enc_cfg_set_u32(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0003514c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_create @ 00035150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open64 @ 00035154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 00035158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0003515c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fscanf @ 00035160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fscanf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rewind @ 00035164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rewind(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 00035168 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_frame_get_buffer @ 0003516c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_frame_get_buffer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tolower @ 00035170 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tolower(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_init_ext @ 00035174 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_init_ext(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 00035178 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 0003517c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 00035180 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 00035184 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 00035188 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 0003518c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_buffer_get_size_with_caller @ 00035190 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_buffer_get_size_with_caller(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_frame_set_width @ 00035194 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_frame_set_width(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::munmap @ 00035198 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uidiv @ 0003519c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uidiv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uldivmod @ 000351a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uldivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_frame_deinit @ 000351a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_frame_deinit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_destroy @ 000351a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_buffer_put_with_caller @ 000351ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_buffer_put_with_caller(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mpp_frame_set_buffer @ 000351b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_frame_set_buffer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


