// libwpa_client.so — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00011f20 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::putchar @ 00011f48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0002500c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::clock_gettime @ 00011f54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_00025010)(__clock_id);
  return iVar1;
}



/* ===== <EXTERNAL>::unsetenv @ 00011f60 size=2 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unsetenv(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unsetenv_00025014)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::unsetenv @ 00011f64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unsetenv(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unsetenv_00025014)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::waitpid @ 00011f70 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_waitpid_00025018)(__pid);
  return _Var1;
}



/* ===== <EXTERNAL>::printf @ 00011f80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0002501c)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::random @ 00011f8c size=2 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long random(void)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_random_00025020)();
  return lVar1;
}



/* ===== <EXTERNAL>::random @ 00011f90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long random(void)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_random_00025020)();
  return lVar1;
}



/* ===== bin_clear_free @ 00011f9c size=12 ===== */

void bin_clear_free(void)

{
  (*(code *)PTR_bin_clear_free_00025024)();
  return;
}



/* ===== <EXTERNAL>::recv @ 00011fa8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recv_00025028)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::connect @ 00011fb4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_connect_0002502c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00011fc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00025030)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::getpid @ 00011fdc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_00025038)();
  return _Var1;
}



/* ===== <EXTERNAL>::qsort @ 00011fe8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  (*(code *)PTR_qsort_0002503c)(__base);
  return;
}



/* ===== <EXTERNAL>::fcntl64 @ 00011ff4 size=12 ===== */

void fcntl64(void)

{
  (*(code *)PTR_fcntl64_00025040)();
  return;
}



/* ===== <EXTERNAL>::memcpy @ 00012000 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00025044)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::setvbuf @ 00012010 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setvbuf(FILE *__stream,char *__buf,int __modes,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setvbuf_00025048)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::perror @ 0001202c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_00025050)(__s);
  return;
}



/* ===== hexstr2bin @ 00012038 size=12 ===== */

void hexstr2bin(void)

{
  (*(code *)PTR_hexstr2bin_00025054)();
  return;
}



/* ===== <EXTERNAL>::puts @ 00012044 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00025058)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00012050 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_0002505c)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 0001205c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00025060)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::sleep @ 00012068 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_00025064)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::vsnprintf @ 00012074 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsnprintf_00025068)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::socket @ 00012080 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_0002506c)(__domain);
  return iVar1;
}



/* ===== <EXTERNAL>::select @ 0001208c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_select_00025070)(__nfds);
  return iVar1;
}



/* ===== <EXTERNAL>::fflush @ 00012098 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00025074)(__stream);
  return iVar1;
}



/* ===== int_array_len @ 000120a4 size=12 ===== */

void int_array_len(void)

{
  (*(code *)PTR_int_array_len_00025078)();
  return;
}



/* ===== <EXTERNAL>::send @ 000120b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_send_0002507c)(__fd);
  return sVar1;
}



/* ===== wpa_debug_close_file @ 000120bc size=12 ===== */

void wpa_debug_close_file(void)

{
  (*(code *)PTR_wpa_debug_close_file_00025080)();
  return;
}



/* ===== wpa_config_parse_string @ 000120c8 size=12 ===== */

void wpa_config_parse_string(void)

{
  (*(code *)PTR_wpa_config_parse_string_00025084)();
  return;
}



/* ===== <EXTERNAL>::strrchr @ 000120d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_00025088)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00012104 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00025094)(__stream);
  return iVar1;
}



/* ===== os_strlcpy @ 00012110 size=12 ===== */

void os_strlcpy(void)

{
  (*(code *)PTR_os_strlcpy_00025098)();
  return;
}



/* ===== <EXTERNAL>::bind @ 0001211c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_bind_0002509c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::vprintf @ 00012128 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vprintf(char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vprintf_000250a0)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00012134 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_000250a4)();
  return;
}



/* ===== os_zalloc @ 00012140 size=12 ===== */

void os_zalloc(void)

{
  (*(code *)PTR_os_zalloc_000250a8)();
  return;
}



/* ===== <EXTERNAL>::fseek @ 0001214c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_000250ac)(__stream);
  return iVar1;
}



/* ===== hex2byte @ 00012158 size=12 ===== */

void hex2byte(void)

{
  (*(code *)PTR_hex2byte_000250b0)();
  return;
}



/* ===== <EXTERNAL>::mktime @ 00012164 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_mktime_000250b4)(__tp);
  return tVar1;
}



/* ===== cstr_token @ 00012170 size=12 ===== */

void cstr_token(void)

{
  (*(code *)PTR_cstr_token_000250b8)();
  return;
}



/* ===== <EXTERNAL>::strncmp @ 0001217c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_000250bc)(__s1);
  return iVar1;
}



/* ===== wpa_debug_open_file @ 00012188 size=12 ===== */

void wpa_debug_open_file(void)

{
  (*(code *)PTR_wpa_debug_open_file_000250c0)();
  return;
}



/* ===== <EXTERNAL>::unlink @ 00012198 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unlink_000250c4)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::setenv @ 000121a4 size=2 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setenv_000250c8)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::setenv @ 000121a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setenv_000250c8)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::strcasecmp @ 000121b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcasecmp_000250cc)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::realloc @ 000121c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_000250d0)(__ptr);
  return pvVar1;
}



/* ===== <EXTERNAL>::memcmp @ 000121cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_000250d4)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fork @ 000121d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_fork_000250d8)();
  return _Var1;
}



/* ===== <EXTERNAL>::execv @ 000121e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execv(char *__path,char **__argv)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_execv_000250dc)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::fread @ 000121f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_000250e0)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::strdup @ 00012200 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strdup_000250e4)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::gettimeofday @ 0001220c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_000250e8)(__tv);
  return iVar1;
}



/* ===== wpa_debug_print_timestamp @ 00012218 size=12 ===== */

void wpa_debug_print_timestamp(void)

{
  (*(code *)PTR_wpa_debug_print_timestamp_000250ec)();
  return;
}



/* ===== <EXTERNAL>::localtime @ 00012224 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_localtime_000250f0)(__timer);
  return ptVar1;
}



/* ===== <EXTERNAL>::memset @ 00012230 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_000250f4)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::ftell @ 0001223c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long ftell(FILE *__stream)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_ftell_000250f8)(__stream);
  return lVar1;
}



/* ===== dup_binstr @ 0001224c size=12 ===== */

void dup_binstr(void)

{
  (*(code *)PTR_dup_binstr_000250fc)();
  return;
}



/* ===== <EXTERNAL>::fclose @ 00012258 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00025100)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00012264 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00025104)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::getcwd @ 00012270 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getcwd(char *__buf,size_t __size)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getcwd_00025108)(__buf);
  return pcVar1;
}



/* ===== os_get_reltime @ 0001227c size=12 ===== */

void os_get_reltime(void)

{
  (*(code *)PTR_os_get_reltime_0002510c)();
  return;
}



/* ===== <EXTERNAL>::fputc @ 0001228c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_00025110)(__c);
  return iVar1;
}



/* ===== os_get_random @ 00012298 size=12 ===== */

void os_get_random(void)

{
  (*(code *)PTR_os_get_random_00025114)();
  return;
}



/* ===== printf_encode @ 000122a4 size=12 ===== */

void printf_encode(void)

{
  (*(code *)PTR_printf_encode_00025118)();
  return;
}



/* ===== printf_decode @ 000122b0 size=12 ===== */

void printf_decode(void)

{
  (*(code *)PTR_printf_decode_0002511c)();
  return;
}



/* ===== <EXTERNAL>::access @ 000122bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_00025120)(__name);
  return iVar1;
}



/* ===== os_sleep @ 000122c8 size=12 ===== */

void os_sleep(void)

{
  (*(code *)PTR_os_sleep_00025124)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 000122d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00025128)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 000122e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0002512c)(__status);
  return;
}



/* ===== <EXTERNAL>::atoi @ 000122ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_00025130)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::fileno @ 000122f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fileno_00025134)(__stream);
  return iVar1;
}



/* ===== wpa_printf @ 00012304 size=12 ===== */

void wpa_printf(void)

{
  (*(code *)PTR_wpa_printf_00025138)();
  return;
}



/* ===== <EXTERNAL>::gmtime @ 00012310 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * gmtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_gmtime_0002513c)(__timer);
  return ptVar1;
}



/* ===== wpa_ctrl_request @ 0001231c size=12 ===== */

void wpa_ctrl_request(void)

{
  (*(code *)PTR_wpa_ctrl_request_00025140)();
  return;
}



/* ===== <EXTERNAL>::daemon @ 00012328 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int daemon(int __nochdir,int __noclose)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_daemon_00025144)(__nochdir);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 00012334 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00025148)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strchr @ 00012340 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_0002514c)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fputs @ 0001234c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_00025150)(__s);
  return iVar1;
}



/* ===== os_get_time @ 00012358 size=12 ===== */

void os_get_time(void)

{
  (*(code *)PTR_os_get_time_00025154)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00012364 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00025158)();
  return;
}



/* ===== <EXTERNAL>::close @ 00012370 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0002515c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::vfprintf @ 0001237c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vfprintf_00025160)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 0001238c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00025164)(__ptr);
  return;
}



/* ===== <EXTERNAL>::fopen64 @ 00012398 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_00025168)(__filename);
  return pFVar1;
}



/* ===== entry @ 000123a4 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_000123f0 + 0x123bc == DAT_000123ec + 0x123b4) {
    return;
  }
  pcVar1 = *(code **)(DAT_000123f4 + 0x123c4 + DAT_000123f8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 00012460 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_000124d4 + 0x1247c;
  if (*(char *)(DAT_000124d0 + 0x12470) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_000124d8) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_000124dc + 0x1249c));
  }
  entry();
  if (*(int *)(iVar1 + DAT_000124e0) != 0) {
    __deregister_frame_info(DAT_000124e4 + 0x124bc);
  }
  *(undefined1 *)(DAT_000124e8 + 0x124cc) = 1;
  return;
}



/* ===== _INIT_0 @ 000124ec size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00012524 + 0x124fc + DAT_00012528) != 0) {
    __register_frame_info(DAT_00012530 + 0x1251c,DAT_0001252c + 0x12518);
  }
  if (((DAT_00012454 + 0x12414) - (DAT_00012450 + 0x1240c) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00012458 + 0x1241c + DAT_0001245c);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== wpa_ctrl_open2 @ 00012534 size=334 ===== */

int * wpa_ctrl_open2(char *param_1,char *param_2)

{
  int *__ptr;
  int iVar1;
  __pid_t _Var2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  char *__s;
  int iVar7;
  char *__format;
  char *__format_00;
  
  if ((param_1 != (char *)0x0) && (__ptr = (int *)os_zalloc(0xe0), __ptr != (int *)0x0)) {
    iVar1 = socket(1,2,0);
    *__ptr = iVar1;
    if (-1 < iVar1) {
      *(undefined2 *)(__ptr + 1) = 1;
      iVar1 = 2;
      piVar6 = (int *)(DAT_00012684 + 0x12580);
      __format = (char *)(DAT_00012688 + 0x12586);
      __format_00 = (char *)(DAT_0001268c + 0x1258c);
      *piVar6 = *piVar6 + 1;
      while( true ) {
        __s = (char *)((int)__ptr + 6);
        iVar7 = *piVar6;
        if ((param_2 == (char *)0x0) || (*param_2 != '/')) {
          _Var2 = getpid();
          uVar3 = snprintf(__s,0x6c,__format,_Var2,iVar7);
        }
        else {
          _Var2 = getpid();
          uVar3 = snprintf(__s,0x6c,__format_00,param_2,_Var2,iVar7);
        }
        iVar7 = *__ptr;
        if (0x6b < uVar3) goto LAB_00012622;
        iVar4 = bind(iVar7,(sockaddr *)(__ptr + 1),0x6e);
        iVar7 = DAT_00012690;
        if (-1 < iVar4) break;
        piVar5 = __errno_location();
        if ((*piVar5 != 0x62) || (iVar1 == 1)) goto LAB_00012654;
        iVar1 = 1;
        unlink(__s);
      }
      *(undefined2 *)((int)__ptr + 0x72) = 1;
      iVar1 = strncmp(param_1,(char *)(iVar7 + 0x125d4),10);
      if (iVar1 == 0) {
        *(undefined1 *)(__ptr + 0x1d) = 0;
        os_strlcpy((int)__ptr + 0x75,param_1 + 10,0x6b);
LAB_000125ec:
        iVar1 = connect(*__ptr,(sockaddr *)((int)__ptr + 0x72),0x6e);
        if (-1 < iVar1) {
          uVar3 = fcntl64(*__ptr,3);
          if ((int)uVar3 < 0) {
            return __ptr;
          }
          iVar1 = fcntl64(*__ptr,4,uVar3 | 0x800);
          if (-1 < iVar1) {
            return __ptr;
          }
          perror((char *)(DAT_00012694 + 0x1267e));
          return __ptr;
        }
        close(*__ptr);
        unlink(__s);
        goto LAB_00012566;
      }
      uVar3 = os_strlcpy(__ptr + 0x1d,param_1,0x6c);
      if (uVar3 < 0x6c) goto LAB_000125ec;
LAB_00012654:
      iVar7 = *__ptr;
LAB_00012622:
      close(iVar7);
    }
LAB_00012566:
    free(__ptr);
  }
  return (int *)0x0;
}



/* ===== wpa_ctrl_open @ 00012698 size=8 ===== */

void wpa_ctrl_open(undefined4 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00012028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_wpa_ctrl_open2_0002504c)(param_1,0);
  return;
}



/* ===== wpa_ctrl_close @ 0001269e size=34 ===== */

void wpa_ctrl_close(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  unlink((char *)((int)param_1 + 6));
  if (-1 < *param_1) {
    close(*param_1);
  }
  (*(code *)PTR_free_00025164)(param_1);
  return;
}



/* ===== wpa_ctrl_request @ 000126c0 size=314 ===== */

size_t wpa_ctrl_request(uint *param_1,void *param_2,size_t param_3,char *param_4,size_t *param_5,
                       code *param_6)

{
  int *piVar1;
  ssize_t sVar2;
  uint uVar3;
  size_t sVar4;
  __fd_mask *p_Var5;
  int iVar6;
  int iVar7;
  timeval local_b8;
  int local_b0;
  int local_ac;
  uint local_a8 [33];
  
  piVar1 = __errno_location();
  local_b0 = 0;
  local_ac = 0;
  *piVar1 = 0;
  while( true ) {
    sVar2 = send(*param_1,param_2,param_3,0);
    if (-1 < sVar2) {
      while( true ) {
        while( true ) {
          iVar6 = 0;
          local_b8.tv_sec = 10;
          local_b8.tv_usec = 0;
          p_Var5 = (__fd_mask *)local_a8;
          do {
            iVar6 = iVar6 + 1;
            *p_Var5 = 0;
            p_Var5 = p_Var5 + 1;
          } while (iVar6 != 0x20);
          uVar3 = *param_1;
          local_a8[uVar3 >> 5] = 1 << (uVar3 & 0x1f) | local_a8[uVar3 >> 5];
          sVar4 = select(uVar3 + 1,(fd_set *)local_a8,(fd_set *)0x0,(fd_set *)0x0,&local_b8);
          if (-1 < (int)sVar4) break;
          if (*piVar1 != 4) {
            return sVar4;
          }
        }
        uVar3 = *param_1;
        if (-1 < ((int)local_a8[uVar3 >> 5] >> (uVar3 & 0x1f)) << 0x1f) {
          return 0xfffffffe;
        }
        sVar4 = recv(uVar3,param_4,*param_5,0);
        if ((int)sVar4 < 0) break;
        if ((sVar4 == 0) || (*param_4 != '<')) {
          *param_5 = sVar4;
          return 0;
        }
        if (param_6 != (code *)0x0) {
          if (*param_5 == sVar4) {
            sVar4 = sVar4 - 1;
          }
          param_4[sVar4] = '\0';
          (*param_6)(param_4,sVar4);
        }
      }
      return sVar4;
    }
    if ((*piVar1 != 0xb) && (*piVar1 != 0x10)) break;
    if (local_b0 == 0) {
      os_get_reltime(&local_b0);
    }
    else {
      os_get_reltime(local_a8);
      iVar6 = local_a8[0] - local_b0;
      iVar7 = local_a8[1] - local_ac;
      if (iVar7 < 0) {
        iVar6 = iVar6 + -1;
        iVar7 = iVar7 + 1000000;
      }
      if (5 < iVar6) {
        return 0xffffffff;
      }
      if ((iVar6 == 5) && (0 < iVar7)) {
        return 0xffffffff;
      }
    }
    os_sleep(1,0);
  }
  return 0xffffffff;
}



/* ===== wpa_ctrl_attach @ 00012854 size=4 ===== */

/* WARNING: Removing unreachable block (ram,0x00012804) */

int wpa_ctrl_attach(undefined4 param_1)

{
  int iVar1;
  int iStack_18;
  undefined1 auStack_14 [12];
  
  iStack_18 = 10;
  iVar1 = wpa_ctrl_request(param_1,DAT_00012850 + 0x12840,6,auStack_14,&iStack_18,0);
  if (-1 < iVar1) {
    if (iStack_18 == 3) {
      iVar1 = memcmp(auStack_14,(void *)(DAT_0001284c + 0x1282c),3);
      iVar1 = -(uint)(iVar1 != 0);
    }
    else {
      iVar1 = -1;
    }
  }
  return iVar1;
}



/* ===== wpa_ctrl_detach @ 00012858 size=80 ===== */

/* WARNING: Removing unreachable block (ram,0x0001283a) */

int wpa_ctrl_detach(undefined4 param_1)

{
  int iVar1;
  int local_18;
  undefined1 auStack_14 [12];
  
  local_18 = 10;
  iVar1 = wpa_ctrl_request(param_1,DAT_00012848 + 0x1280a,6,auStack_14,&local_18,0);
  if (-1 < iVar1) {
    if (local_18 == 3) {
      iVar1 = memcmp(auStack_14,(void *)(DAT_0001284c + 0x1282c),3);
      iVar1 = -(uint)(iVar1 != 0);
    }
    else {
      iVar1 = -1;
    }
  }
  return iVar1;
}



/* ===== wpa_ctrl_recv @ 0001285c size=24 ===== */

size_t wpa_ctrl_recv(int *param_1,void *param_2,size_t *param_3)

{
  size_t sVar1;
  
  sVar1 = recv(*param_1,param_2,*param_3,0);
  if (-1 < (int)sVar1) {
    *param_3 = sVar1;
    sVar1 = 0;
  }
  return sVar1;
}



/* ===== wpa_ctrl_pending @ 00012874 size=100 ===== */

uint wpa_ctrl_pending(uint *param_1)

{
  uint uVar1;
  __fd_mask *p_Var2;
  int iVar3;
  timeval local_98;
  uint auStack_90 [33];
  
  iVar3 = 0;
  local_98.tv_sec = 0;
  local_98.tv_usec = 0;
  p_Var2 = (__fd_mask *)auStack_90;
  do {
    iVar3 = iVar3 + 1;
    *p_Var2 = 0;
    p_Var2 = p_Var2 + 1;
  } while (iVar3 != 0x20);
  uVar1 = *param_1;
  auStack_90[uVar1 >> 5] = 1 << (uVar1 & 0x1f) | auStack_90[uVar1 >> 5];
  select(uVar1 + 1,(fd_set *)auStack_90,(fd_set *)0x0,(fd_set *)0x0,&local_98);
  return (int)auStack_90[*param_1 >> 5] >> (*param_1 & 0x1f) & 1;
}



/* ===== wpa_ctrl_get_fd @ 000128d8 size=4 ===== */

undefined4 wpa_ctrl_get_fd(undefined4 *param_1)

{
  return *param_1;
}



/* ===== os_sleep @ 000128dc size=26 ===== */

void os_sleep(uint param_1,int param_2)

{
  if (param_1 != 0) {
    sleep(param_1);
  }
  if (param_2 == 0) {
    return;
  }
  (*(code *)PTR_usleep_00025034)(param_2);
  return;
}



/* ===== os_get_time @ 000128f4 size=24 ===== */

void os_get_time(int *param_1,int param_2)

{
  timeval local_10;
  
  local_10.tv_sec = (__time_t)param_1;
  local_10.tv_usec = param_2;
  gettimeofday(&local_10,(__timezone_ptr_t)0x0);
  *param_1 = local_10.tv_sec;
  param_1[1] = local_10.tv_usec;
  return;
}



/* ===== os_get_reltime @ 0001290c size=80 ===== */

undefined4 os_get_reltime(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int __clock_id;
  int *piVar3;
  timespec local_20;
  
  piVar3 = (int *)(DAT_00012960 + 0x1291c);
  local_20.tv_sec = (__time_t)param_1;
  local_20.tv_nsec = param_2;
  do {
    while( true ) {
      while( true ) {
        __clock_id = *piVar3;
        iVar2 = clock_gettime(__clock_id,&local_20);
        iVar1 = DAT_0001295c;
        if (iVar2 == 0) {
          *param_1 = local_20.tv_sec;
          param_1[1] = (int)((longlong)local_20.tv_nsec * (longlong)iVar1 >> 0x26) -
                       (local_20.tv_nsec >> 0x1f);
          return 0;
        }
        if (__clock_id != 1) break;
        *piVar3 = 0;
      }
      if (__clock_id != 7) break;
      *piVar3 = 1;
    }
  } while (__clock_id != 0);
  return 0xffffffff;
}



/* ===== os_mktime @ 00012964 size=134 ===== */

undefined4
os_mktime(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,int *param_7)

{
  tm *ptVar1;
  int iVar2;
  time_t tVar3;
  time_t tVar4;
  time_t local_40;
  tm local_3c;
  
  if ((((param_1 < 0x7b2) || (local_3c.tm_mon = param_2 - 1, 0xb < (uint)local_3c.tm_mon)) ||
      (0x1e < param_3 - 1U)) || (((0x17 < param_4 || (0x3b < param_5)) || (0x3c < param_6)))) {
    return 0xffffffff;
  }
  local_3c.tm_yday = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_3c.tm_isdst = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_3c.tm_year = param_1 + -0x76c;
  local_3c.tm_sec = param_6;
  local_3c.tm_min = param_5;
  local_3c.tm_wday = 0;
  local_3c.tm_gmtoff = 0;
  local_3c.tm_hour = param_4;
  local_3c.tm_mday = param_3;
  local_3c.tm_zone = (char *)local_3c.tm_yday;
  local_40 = mktime(&local_3c);
  ptVar1 = localtime(&local_40);
  if (ptVar1 != (tm *)0x0) {
    tVar3 = mktime(ptVar1);
    ptVar1 = gmtime(&local_40);
    if (ptVar1 != (tm *)0x0) {
      tVar4 = mktime(ptVar1);
      iVar2 = tVar4 - tVar3;
      goto LAB_000129be;
    }
  }
  iVar2 = 0;
LAB_000129be:
  *param_7 = local_40 - iVar2;
  return 0;
}



/* ===== os_gmtime @ 000129ea size=56 ===== */

undefined4 os_gmtime(time_t param_1,int *param_2)

{
  tm *ptVar1;
  undefined4 uVar2;
  time_t local_c;
  
  local_c = param_1;
  ptVar1 = gmtime(&local_c);
  if (ptVar1 == (tm *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    *param_2 = ptVar1->tm_sec;
    param_2[1] = ptVar1->tm_min;
    param_2[2] = ptVar1->tm_hour;
    param_2[3] = ptVar1->tm_mday;
    param_2[4] = ptVar1->tm_mon + 1;
    uVar2 = 0;
    param_2[5] = ptVar1->tm_year + 0x76c;
  }
  return uVar2;
}



/* ===== os_daemonize @ 00012a22 size=76 ===== */

undefined4 os_daemonize(char *param_1)

{
  int iVar1;
  FILE *__stream;
  __pid_t _Var2;
  undefined4 uVar3;
  
  iVar1 = daemon(0,0);
  if (iVar1 == 0) {
    uVar3 = 0;
    if ((param_1 != (char *)0x0) &&
       (__stream = fopen64(param_1,(char *)(DAT_00012a74 + 0x12a4e)), __stream != (FILE *)0x0)) {
      _Var2 = getpid();
      fprintf(__stream,(char *)(DAT_00012a78 + 0x12a60),_Var2);
      fclose(__stream);
    }
  }
  else {
    uVar3 = 0xffffffff;
    perror((char *)(DAT_00012a70 + 0x12a3c));
  }
  return uVar3;
}



/* ===== os_daemonize_terminate @ 00012a7c size=10 ===== */

void os_daemonize_terminate(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  (*(code *)PTR_unlink_000250c4)();
  return;
}



/* ===== os_get_random @ 00012a84 size=66 ===== */

undefined4 os_get_random(void *param_1,size_t param_2)

{
  FILE *__stream;
  undefined4 uVar1;
  size_t sVar2;
  
  __stream = fopen64((char *)(DAT_00012ac8 + 0x12a92),(char *)(DAT_00012acc + 0x12a94));
  if (__stream == (FILE *)0x0) {
    puts((char *)(DAT_00012ad0 + 0x12aa0));
    uVar1 = 0xffffffff;
  }
  else {
    sVar2 = fread(param_1,1,param_2,__stream);
    fclose(__stream);
    uVar1 = 0;
    if (param_2 != sVar2) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== os_random @ 00012ad4 size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long os_random(void)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_random_00025020)();
  return lVar1;
}



/* ===== os_rel2abs_path @ 00012ad8 size=158 ===== */

void * os_rel2abs_path(char *param_1)

{
  char *__buf;
  char *__s;
  int *piVar1;
  size_t __n;
  void *pvVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 != (char *)0x0) {
    if (*param_1 == '/') {
      pvVar2 = (void *)(*(code *)PTR_strdup_000250e4)();
      return pvVar2;
    }
    iVar4 = 4;
    sVar3 = 0x80;
    do {
      __buf = malloc(sVar3);
      if (__buf == (char *)0x0) {
        return (void *)0x0;
      }
      __s = getcwd(__buf,sVar3);
      if (__s != (char *)0x0) {
        __buf[sVar3 - 1] = '\0';
        sVar3 = strlen(__s);
        __n = strlen(param_1);
        pvVar2 = malloc(sVar3 + __n + 2);
        if (pvVar2 != (void *)0x0) {
          memcpy(pvVar2,__s,sVar3);
          *(undefined1 *)((int)pvVar2 + sVar3) = 0x2f;
          memcpy((void *)(sVar3 + 1 + (int)pvVar2),param_1,__n);
          *(undefined1 *)((int)pvVar2 + sVar3 + __n + 1) = 0;
        }
        free(__buf);
        return pvVar2;
      }
      piVar1 = __errno_location();
      iVar5 = *piVar1;
      free(__buf);
      if (iVar5 != 0x22) {
        return (void *)0x0;
      }
      iVar4 = iVar4 + -1;
      sVar3 = sVar3 << 1;
    } while (iVar4 != 0);
  }
  return (void *)0x0;
}



/* ===== os_program_init @ 00012b74 size=4 ===== */

undefined4 os_program_init(void)

{
  return 0;
}



/* ===== os_program_deinit @ 00012b78 size=2 ===== */

void os_program_deinit(void)

{
  return;
}



/* ===== os_setenv @ 00012b7a size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int os_setenv(char *__name,char *__value,int __replace)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setenv_000250c8)(__name);
  return iVar1;
}



/* ===== os_unsetenv @ 00012b7e size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int os_unsetenv(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unsetenv_00025014)(__name);
  return iVar1;
}



/* ===== os_readfile @ 00012b82 size=120 ===== */

void * os_readfile(char *param_1,size_t *param_2)

{
  FILE *__stream;
  int iVar1;
  size_t sVar2;
  void *__ptr;
  
  __stream = fopen64(param_1,(char *)(DAT_00012bfc + 0x12b8c));
  if (__stream == (FILE *)0x0) {
    return (void *)0x0;
  }
  iVar1 = fseek(__stream,0,2);
  if ((-1 < iVar1) && (sVar2 = ftell(__stream), -1 < (int)sVar2)) {
    *param_2 = sVar2;
    iVar1 = fseek(__stream,0,0);
    if (-1 < iVar1) {
      sVar2 = *param_2;
      __ptr = malloc(sVar2);
      if ((__ptr != (void *)0x0) && (sVar2 = fread(__ptr,1,sVar2,__stream), sVar2 != *param_2)) {
        fclose(__stream);
        free(__ptr);
        return (void *)0x0;
      }
      fclose(__stream);
      return __ptr;
    }
  }
  fclose(__stream);
  return (void *)0x0;
}



/* ===== os_file_exists @ 00012c00 size=16 ===== */

bool os_file_exists(char *param_1)

{
  int iVar1;
  
  iVar1 = access(param_1,0);
  return iVar1 == 0;
}



/* ===== os_fdatasync @ 00012c10 size=32 ===== */

undefined4 os_fdatasync(FILE *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = fflush(param_1);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  fileno(param_1);
  uVar1 = (*(code *)PTR_fdatasync_00025090)();
  return uVar1;
}



/* ===== os_zalloc @ 00012c2e size=10 ===== */

void os_zalloc(undefined4 param_1)

{
  (*(code *)PTR_calloc_0002508c)(1,param_1);
  return;
}



/* ===== os_strlcpy @ 00012c36 size=54 ===== */

char * os_strlcpy(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = param_2;
  if (param_3 == 0) {
LAB_00012c62:
    do {
      pcVar2 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar2;
    } while (cVar1 != '\0');
  }
  else {
    do {
      pcVar2 = pcVar3 + 1;
      if (pcVar2 == param_2 + param_3) {
        *param_1 = '\0';
        goto LAB_00012c62;
      }
      cVar1 = *pcVar3;
      *param_1 = cVar1;
      param_1 = param_1 + 1;
      pcVar3 = pcVar2;
    } while (cVar1 != '\0');
  }
  return pcVar2 + (-1 - (int)param_2);
}



/* ===== os_memcmp_const @ 00012c6c size=26 ===== */

byte os_memcmp_const(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = 0;
  for (iVar2 = 0; iVar2 != param_3; iVar2 = iVar2 + 1) {
    bVar1 = bVar1 | *(byte *)(param_1 + iVar2) ^ *(byte *)(param_2 + iVar2);
  }
  return bVar1;
}



/* ===== os_exec @ 00012c86 size=174 ===== */

undefined4 os_exec(char *param_1,char *param_2,int param_3)

{
  __pid_t __pid;
  char *__ptr;
  char *__ptr_00;
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *local_a8 [33];
  int iStack_24;
  
  __pid = fork();
  if (__pid < 0) {
    uVar3 = 0xffffffff;
    perror((char *)(DAT_00012d34 + 0x12ca8));
  }
  else {
    if (__pid == 0) {
      __ptr = strdup(param_1);
      iVar4 = 1;
      __ptr_00 = strdup(param_2);
      pcVar2 = __ptr_00;
      local_a8[0] = __ptr;
      do {
        if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) break;
        do {
          pcVar1 = pcVar2;
          pcVar2 = pcVar1 + 1;
        } while (*pcVar1 == ' ');
        if (*pcVar1 == '\0') break;
        local_a8[iVar4] = pcVar1;
        pcVar1 = strchr(pcVar1,0x20);
        pcVar2 = pcVar1;
        if (pcVar1 != (char *)0x0) {
          pcVar2 = pcVar1 + 1;
          *pcVar1 = '\0';
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0x1e);
      local_a8[iVar4] = (char *)0x0;
      execv(param_1,local_a8);
      perror((char *)(DAT_00012d38 + 0x12d10));
      free(__ptr);
      free(__ptr_00);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    uVar3 = 0;
    if (param_3 != 0) {
      waitpid(__pid,&iStack_24,0);
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* ===== FUN_00012d52 @ 00012d52 size=86 ===== */

int FUN_00012d52(char *param_1,int param_2,byte *param_3,int param_4,int param_5)

{
  int iVar1;
  char *pcVar2;
  char *__s;
  char *__format;
  byte *pbVar3;
  
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    pbVar3 = param_3 + param_4;
    __s = param_1;
    __format = (char *)(DAT_00012da8 + 0x12d6a);
    if (param_5 == 0) {
      __format = (char *)(DAT_00012dac + 0x12d6c);
    }
    while (param_3 != pbVar3) {
      pcVar2 = (char *)snprintf(__s,(size_t)(param_1 + (param_2 - (int)__s)),__format,(uint)*param_3
                               );
      if (((int)pcVar2 < 0) || (param_1 + (param_2 - (int)__s) <= pcVar2)) break;
      __s = __s + (int)pcVar2;
      param_3 = param_3 + 1;
    }
    iVar1 = (int)__s - (int)param_1;
    param_1[param_2 + -1] = '\0';
  }
  return iVar1;
}



/* ===== FUN_00012db0 @ 00012db0 size=42 ===== */

uint FUN_00012db0(int param_1)

{
  uint uVar1;
  
  if ((param_1 - 0x30U & 0xff) < 10) {
    return param_1 - 0x30U;
  }
  if (5 < param_1 - 0x61U) {
    if (param_1 - 0x41U < 6) {
      uVar1 = param_1 - 0x37;
    }
    else {
      uVar1 = 0xffffffff;
    }
    return uVar1;
  }
  return param_1 - 0x57;
}



/* ===== hex2byte @ 00012dda size=36 ===== */

uint hex2byte(undefined1 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00012db0(*param_1,param_1);
  if (((int)uVar2 < 0) ||
     (uVar1 = FUN_00012db0(*(undefined1 *)((int)((ulonglong)uVar2 >> 0x20) + 1)), (int)uVar1 < 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = uVar1 | (int)uVar2 * 0x10;
  }
  return uVar1;
}



/* ===== FUN_00012dfe @ 00012dfe size=52 ===== */

int FUN_00012dfe(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar2 = hex2byte(param_1);
    if (iVar2 < 0) {
      return 0;
    }
    *(char *)(param_2 + iVar3) = (char)iVar2;
    if (iVar3 == 5) {
      param_1 = param_1 + 2;
    }
    else {
      pcVar1 = (char *)(param_1 + 2);
      param_1 = param_1 + 3;
      if (*pcVar1 != ':') {
        return 0;
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 6);
  return param_1;
}



/* ===== hwaddr_aton @ 00012e32 size=16 ===== */

int hwaddr_aton(void)

{
  int iVar1;
  
  iVar1 = FUN_00012dfe();
  return -(uint)(iVar1 == 0);
}



/* ===== hwaddr_masked_aton @ 00012e42 size=76 ===== */

int hwaddr_masked_aton(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = DAT_00012e90 + 0x12e4e;
  pbVar1 = (byte *)FUN_00012dfe();
  if (pbVar1 != (byte *)0x0) {
    uVar2 = (uint)*pbVar1;
    if ((uVar2 == 0) ||
       ((int)((uint)*(ushort *)(**(int **)(iVar3 + DAT_00012e94) + uVar2 * 2) << 0x1a) < 0)) {
      *param_3 = 0xffffffff;
      *(undefined2 *)(param_3 + 1) = 0xffff;
      return 0;
    }
    if ((param_4 != 0) && (uVar2 == 0x2f)) {
      iVar3 = FUN_00012dfe(pbVar1 + 1,param_3);
      return -(uint)(iVar3 == 0);
    }
  }
  return -1;
}



/* ===== hwaddr_compact_aton @ 00012e98 size=56 ===== */

undefined4 hwaddr_compact_aton(int param_1,byte *param_2)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = param_1 + 2;
  while( true ) {
    iVar1 = FUN_00012db0(*(undefined1 *)(iVar3 + -2),param_2);
    if (iVar1 < 0) {
      return 0xffffffff;
    }
    uVar4 = FUN_00012db0(*(undefined1 *)(iVar3 + -1));
    pbVar2 = (byte *)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar4 < 0) break;
    iVar3 = iVar3 + 2;
    param_2 = pbVar2 + 1;
    *pbVar2 = (byte)uVar4 | (char)iVar1 * '\x10';
    if (param_1 + 0xe == iVar3) {
      return 0;
    }
  }
  return 0xffffffff;
}



/* ===== hwaddr_aton2 @ 00012ed0 size=74 ===== */

int hwaddr_aton2(byte *param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined8 uVar5;
  
  pbVar1 = param_1;
  do {
    do {
      do {
        pbVar4 = pbVar1;
        pbVar1 = pbVar4 + 1;
      } while (*pbVar4 == 0x3a);
    } while (*pbVar4 - 0x2d < 2);
    iVar2 = FUN_00012db0();
    if (iVar2 < 0) {
      return -1;
    }
    uVar5 = FUN_00012db0(pbVar4[1]);
    pbVar3 = (byte *)((ulonglong)uVar5 >> 0x20);
    if ((int)uVar5 < 0) {
      return -1;
    }
    *pbVar3 = (byte)uVar5 | (char)iVar2 * '\x10';
    pbVar1 = pbVar4 + 2;
  } while ((byte *)(param_2 + 6) != pbVar3 + 1);
  return (int)(pbVar4 + 2) - (int)param_1;
}



/* ===== hexstr2bin @ 00012f1a size=40 ===== */

undefined4 hexstr2bin(int param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = param_2;
  while( true ) {
    if (puVar2 == param_2 + param_3) {
      return 0;
    }
    iVar1 = hex2byte(param_1);
    if (iVar1 < 0) break;
    *puVar2 = (char)iVar1;
    param_1 = param_1 + 2;
    puVar2 = puVar2 + 1;
  }
  return 0xffffffff;
}



/* ===== hwaddr_mask_txt @ 00012f42 size=128 ===== */

uint hwaddr_mask_txt(char *param_1,uint param_2,byte *param_3,byte *param_4)

{
  uint uVar1;
  byte *pbVar2;
  
  pbVar2 = param_4 + -1;
  do {
    pbVar2 = pbVar2 + 1;
    if (*pbVar2 != 0xff) {
      snprintf(param_1,param_2,(char *)(DAT_00012fc8 + 0x12fb2),(uint)*param_3,(uint)param_3[1],
               (uint)param_3[2],(uint)param_3[3],(uint)param_3[4],(uint)param_3[5],(uint)*param_4,
               (uint)param_4[1],(uint)param_4[2],(uint)param_4[3],(uint)param_4[4],(uint)param_4[5])
      ;
      uVar1 = 0x23;
      goto LAB_00012fb6;
    }
  } while (param_4 + 5 != pbVar2);
  snprintf(param_1,param_2,(char *)(DAT_00012fc4 + 0x12f76),(uint)*param_3,(uint)param_3[1],
           (uint)param_3[2],(uint)param_3[3],(uint)param_3[4],(uint)param_3[5]);
  uVar1 = 0x11;
LAB_00012fb6:
  if (param_2 <= uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== inc_byte_array @ 00012fcc size=24 ===== */

void inc_byte_array(uint param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_2 + param_1);
  do {
    if ((int)(pcVar2 + ~param_1) < 0) {
      return;
    }
    pcVar2 = pcVar2 + -1;
    cVar1 = *pcVar2;
    *pcVar2 = cVar1 + '\x01';
  } while ((char)(cVar1 + '\x01') == '\0');
  return;
}



/* ===== wpa_get_ntp_timestamp @ 00012fe4 size=44 ===== */

void wpa_get_ntp_timestamp(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint *local_10;
  uint local_c;
  
  local_10 = param_1;
  local_c = param_2;
  os_get_time(&local_10);
  uVar2 = local_c * 0x10c7 - ((local_c >> 9) + (local_c >> 5));
  uVar1 = DAT_00013010 + (int)local_10;
  *param_1 = uVar1 * 0x1000000 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
             uVar1 >> 0x18;
  param_1[1] = uVar2 * 0x1000000 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
               uVar2 >> 0x18;
  return;
}



/* ===== wpa_scnprintf @ 00013014 size=44 ===== */

uint wpa_scnprintf(char *param_1,size_t param_2,char *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uStack_4;
  
  if ((param_2 == 0) ||
     (uStack_4 = param_4, uVar1 = vsnprintf(param_1,param_2,param_3,&uStack_4), (int)uVar1 < 0)) {
    uVar1 = 0;
  }
  else if (param_2 <= uVar1) {
    uVar1 = param_2 - 1;
  }
  return uVar1;
}



/* ===== wpa_snprintf_hex_sep @ 00013040 size=90 ===== */

int wpa_snprintf_hex_sep(char *param_1,int param_2,byte *param_3,int param_4,byte param_5)

{
  int iVar1;
  char *__s;
  byte *pbVar2;
  byte *pbVar3;
  char *__format;
  
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    pbVar3 = param_3 + param_4;
    __format = (char *)(DAT_0001309c + 0x1305e);
    __s = param_1;
    pbVar2 = param_3;
    iVar1 = param_2;
    while (pbVar2 != pbVar3) {
      snprintf(__s,(size_t)(param_1 + (param_2 - (int)__s)),__format,(uint)*pbVar2,(uint)param_5,
               iVar1,param_3);
      if (param_1 + (param_2 - (int)__s) < (char *)0x4) {
        param_1[param_2 + -1] = '\0';
        goto LAB_0001308a;
      }
      __s = __s + 3;
      pbVar2 = pbVar2 + 1;
    }
    __s[-1] = '\0';
LAB_0001308a:
    iVar1 = (int)__s - (int)param_1;
  }
  return iVar1;
}



/* ===== wpa_snprintf_hex @ 000130a0 size=14 ===== */

void wpa_snprintf_hex(void)

{
  FUN_00012d52();
  return;
}



/* ===== wpa_snprintf_hex_uppercase @ 000130ae size=14 ===== */

void wpa_snprintf_hex_uppercase(void)

{
  FUN_00012d52();
  return;
}



/* ===== printf_encode @ 000130bc size=160 ===== */

void printf_encode(byte *param_1,int param_2,byte *param_3,int param_4)

{
  byte *__s;
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  char *__format;
  
  __format = (char *)(DAT_0001315c + 0x130d2);
  __s = param_1;
  pbVar3 = param_3;
  do {
    while( true ) {
      while( true ) {
        if ((param_3 + param_4 == pbVar3) || (param_1 + param_2 <= __s + 4)) {
          *__s = 0;
          return;
        }
        pbVar4 = pbVar3 + 1;
        bVar1 = *pbVar3;
        uVar2 = (uint)bVar1;
        pbVar3 = pbVar4;
        if (uVar2 != 0xd) break;
        *__s = 0x5c;
        __s[1] = 0x72;
        __s = __s + 2;
      }
      if (uVar2 < 0xe) break;
      if (uVar2 == 0x22) {
        *__s = 0x5c;
      }
      else if (uVar2 == 0x5c) {
        *__s = bVar1;
      }
      else {
        if (uVar2 != 0x1b) goto LAB_000130f8;
        bVar1 = 0x65;
        *__s = 0x5c;
      }
LAB_00013124:
      __s[1] = bVar1;
      __s = __s + 2;
    }
    if (uVar2 == 9) {
      bVar1 = 0x74;
      *__s = 0x5c;
      goto LAB_00013124;
    }
    if (uVar2 == 10) {
      bVar1 = 0x6e;
      *__s = 0x5c;
      goto LAB_00013124;
    }
LAB_000130f8:
    if (uVar2 - 0x20 < 0x5f) {
      *__s = bVar1;
      __s = __s + 1;
    }
    else {
      snprintf((char *)__s,(int)(param_1 + param_2) - (int)__s,__format);
      __s = __s + 4;
    }
  } while( true );
}



/* ===== printf_decode @ 00013160 size=228 ===== */

uint printf_decode(int param_1,uint param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  
  uVar5 = 0;
LAB_00013174:
  while( true ) {
    pcVar6 = param_3;
    cVar4 = *pcVar6;
    if ((cVar4 == '\0') || (uVar7 = uVar5 + 1, param_2 <= uVar7)) {
      if (uVar5 < param_2) {
        *(undefined1 *)(param_1 + uVar5) = 0;
      }
      return uVar5;
    }
    param_3 = pcVar6 + 1;
    if (cVar4 == '\\') break;
LAB_0001323e:
    *(char *)(param_1 + uVar5) = cVar4;
    uVar5 = uVar7;
  }
  bVar3 = pcVar6[1];
  if (bVar3 == 0x65) {
    bVar3 = 0x1b;
LAB_000131be:
    *(byte *)(param_1 + uVar5) = bVar3;
  }
  else {
    if (bVar3 < 0x66) {
      if (bVar3 < 0x38) {
        if (0x2f < bVar3) {
          cVar4 = bVar3 - 0x30;
          if ((byte)(pcVar6[2] - 0x30U) < 8) {
            param_3 = pcVar6 + 3;
            cVar4 = (pcVar6[2] - 0x30U) + cVar4 * '\b';
          }
          else {
            param_3 = pcVar6 + 2;
          }
          cVar1 = *param_3;
          if ((byte)(cVar1 - 0x30U) < 8) {
            param_3 = param_3 + 1;
            cVar4 = cVar1 + -0x30 + cVar4 * '\b';
          }
          goto LAB_0001323e;
        }
        bVar8 = bVar3 == 0x22;
      }
      else {
        bVar8 = bVar3 == 0x5c;
      }
      if (bVar8) goto LAB_000131be;
      goto LAB_00013174;
    }
    if (bVar3 == 0x72) {
      *(undefined1 *)(param_1 + uVar5) = 0xd;
    }
    else {
      if (bVar3 < 0x73) {
        if (bVar3 == 0x6e) {
          bVar3 = 10;
          goto LAB_000131be;
        }
        goto LAB_00013174;
      }
      if (bVar3 != 0x74) {
        if (bVar3 == 0x78) {
          iVar2 = hex2byte(pcVar6 + 2);
          if (iVar2 < 0) {
            iVar2 = FUN_00012db0(pcVar6[2]);
            param_3 = pcVar6 + 2;
            if (-1 < iVar2) {
              *(char *)(param_1 + uVar5) = (char)iVar2;
              uVar5 = uVar7;
              param_3 = pcVar6 + 3;
            }
          }
          else {
            *(char *)(param_1 + uVar5) = (char)iVar2;
            uVar5 = uVar7;
            param_3 = pcVar6 + 4;
          }
        }
        goto LAB_00013174;
      }
      *(undefined1 *)(param_1 + uVar5) = 9;
    }
  }
  uVar5 = uVar7;
  param_3 = pcVar6 + 2;
  goto LAB_00013174;
}



/* ===== wpa_ssid_txt @ 00013244 size=32 ===== */

int wpa_ssid_txt(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == 0) {
    *(undefined1 *)(DAT_00013264 + 0x13252) = 0;
  }
  else {
    printf_encode(DAT_0001326c + 0x13260,0x81,param_1,param_2,param_4);
  }
  return DAT_00013268 + 0x13258;
}



/* ===== __hide_aliasing_typecast @ 00013270 size=2 ===== */

void __hide_aliasing_typecast(void)

{
  return;
}



/* ===== is_hex @ 00013272 size=24 ===== */

undefined4 is_hex(byte *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = param_1;
  do {
    if (pbVar2 == param_1 + param_2) {
      return 0;
    }
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 1;
  } while (bVar1 - 0x20 < 0x5f);
  return 1;
}



/* ===== has_ctrl_char @ 0001328a size=26 ===== */

undefined4 has_ctrl_char(byte *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = param_1;
  do {
    if (pbVar2 == param_1 + param_2) {
      return 0;
    }
    bVar1 = *pbVar2;
  } while ((0x1f < bVar1) && (pbVar2 = pbVar2 + 1, bVar1 != 0x7f));
  return 1;
}



/* ===== has_newline @ 000132a4 size=22 ===== */

undefined4 has_newline(int param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_1 + -1);
  do {
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
    if (cVar1 == '\0') {
      return 0;
    }
  } while ((cVar1 != '\n') && (cVar1 != '\r'));
  return 1;
}



/* ===== merge_byte_arrays @ 000132ba size=98 ===== */

uint merge_byte_arrays(void *param_1,uint param_2,void *param_3,uint param_4,void *param_5,
                      size_t param_6)

{
  size_t __n;
  
  memset(param_1,0,param_2);
  if (param_3 == (void *)0x0) {
    param_4 = 0;
  }
  else {
    __n = param_2;
    if (param_2 <= param_4) goto LAB_000132de;
    memcpy(param_1,param_3,param_4);
  }
  if (param_5 == (void *)0x0) {
    return param_4;
  }
  param_1 = (void *)((int)param_1 + param_4);
  if (param_4 + param_6 < param_2) {
    memcpy(param_1,param_5,param_6);
    return param_4 + param_6;
  }
  param_3 = param_5;
  __n = param_2 - param_4;
LAB_000132de:
  memcpy(param_1,param_3,__n);
  return param_2;
}



/* ===== dup_binstr @ 0001331c size=38 ===== */

void * dup_binstr(void *param_1,size_t param_2)

{
  void *__dest;
  
  if (param_1 == (void *)0x0) {
    __dest = (void *)0x0;
  }
  else {
    __dest = malloc(param_2 + 1);
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_1,param_2);
      *(undefined1 *)((int)__dest + param_2) = 0;
    }
  }
  return __dest;
}



/* ===== wpa_config_parse_string @ 00013342 size=182 ===== */

void * wpa_config_parse_string(char *param_1,uint *param_2)

{
  char *pcVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  size_t sVar6;
  
  if (*param_1 == '\"') {
    param_1 = param_1 + 1;
    pcVar1 = strrchr(param_1,0x22);
    if ((pcVar1 != (char *)0x0) && (pcVar1[1] == '\0')) {
      *param_2 = (int)pcVar1 - (int)param_1;
      pvVar2 = (void *)(*(code *)PTR_dup_binstr_000250fc)(param_1);
      return pvVar2;
    }
  }
  else if ((*param_1 == 'P') && (param_1[1] == '\"')) {
    param_1 = param_1 + 2;
    pcVar1 = strrchr(param_1,0x22);
    if ((pcVar1 != (char *)0x0) && (pcVar1[1] == '\0')) {
      pvVar2 = (void *)dup_binstr(param_1,(int)pcVar1 - (int)param_1);
      if (pvVar2 != (void *)0x0) {
        sVar6 = ((int)pcVar1 - (int)param_1) + 1;
        pvVar3 = malloc(sVar6);
        if (pvVar3 != (void *)0x0) {
          uVar4 = printf_decode(pvVar3,sVar6,pvVar2);
          *param_2 = uVar4;
        }
        free(pvVar2);
        return pvVar3;
      }
    }
  }
  else {
    sVar6 = strlen(param_1);
    if ((sVar6 & 1) == 0) {
      uVar4 = sVar6 >> 1;
      pvVar2 = malloc(uVar4 + 1);
      if (pvVar2 != (void *)0x0) {
        iVar5 = hexstr2bin(param_1,pvVar2,uVar4);
        if (iVar5 == 0) {
          *(undefined1 *)((int)pvVar2 + uVar4) = 0;
          *param_2 = uVar4;
          return pvVar2;
        }
        free(pvVar2);
      }
    }
  }
  return (void *)0x0;
}



/* ===== freq_range_list_parse @ 000133f6 size=134 ===== */

undefined4 freq_range_list_parse(undefined4 *param_1,char *param_2)

{
  void *pvVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  size_t __size;
  void *__ptr;
  
  uVar4 = 0;
  __ptr = (void *)0x0;
  while( true ) {
    if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
      free((void *)*param_1);
      *param_1 = __ptr;
      param_1[1] = uVar4;
      return 0;
    }
    uVar4 = uVar4 + 1;
    if (uVar4 >> 0x1d != 0) break;
    __size = uVar4 * 8;
    pvVar1 = realloc(__ptr,__size);
    if (pvVar1 == (void *)0x0) break;
    iVar2 = atoi(param_2);
    *(int *)((int)pvVar1 + (__size - 8)) = iVar2;
    pcVar3 = strchr(param_2,0x2d);
    param_2 = strchr(param_2,0x2c);
    if ((pcVar3 != (char *)0x0) && ((param_2 == (char *)0x0 || (pcVar3 < param_2)))) {
      iVar2 = atoi(pcVar3 + 1);
    }
    *(int *)((int)pvVar1 + (__size - 4)) = iVar2;
    __ptr = pvVar1;
    if (param_2 != (char *)0x0) {
      param_2 = param_2 + 1;
    }
  }
  free(__ptr);
  return 0xffffffff;
}



/* ===== freq_range_list_includes @ 0001347c size=44 ===== */

undefined4 freq_range_list_includes(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    for (iVar1 = 0; param_1[1] != iVar1; iVar1 = iVar1 + 1) {
      if ((*(uint *)(*param_1 + iVar1 * 8) <= param_2) &&
         (param_2 <= *(uint *)(*param_1 + iVar1 * 8 + 4))) {
        return 1;
      }
    }
  }
  return 0;
}



/* ===== freq_range_list_str @ 000134a8 size=160 ===== */

char * freq_range_list_str(int *param_1)

{
  char *__ptr;
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  size_t __size;
  uint uVar5;
  char *__s;
  char *__maxlen;
  char *__format;
  int iVar6;
  int iVar7;
  
  if (param_1[1] != 0) {
    __size = param_1[1] * 0x1e;
    __ptr = malloc(__size);
    if (__ptr != (char *)0x0) {
      __format = (char *)(DAT_00013548 + 0x134e2);
      iVar6 = DAT_0001354c + 0x134e4;
      uVar5 = 0;
      iVar7 = DAT_00013550 + 0x134e8;
      __s = __ptr;
      while( true ) {
        if ((uint)param_1[1] <= uVar5) {
          return __ptr;
        }
        iVar3 = *(int *)(*param_1 + uVar5 * 8);
        iVar2 = *(int *)(*param_1 + uVar5 * 8 + 4);
        __maxlen = __ptr + (__size - (int)__s);
        if (iVar3 == iVar2) {
          if (uVar5 == 0) {
            iVar2 = DAT_0001355c + 0x13528;
          }
          else {
            iVar2 = DAT_00013554 + 0x1350c;
          }
          pcVar1 = (char *)snprintf(__s,(size_t)__maxlen,(char *)(DAT_00013558 + 0x13516),iVar2,
                                    iVar3);
        }
        else {
          iVar4 = iVar6;
          if (uVar5 != 0) {
            iVar4 = iVar7;
          }
          pcVar1 = (char *)snprintf(__s,(size_t)__maxlen,__format,iVar4,iVar3,iVar2);
        }
        if (__maxlen <= pcVar1) break;
        __s = __s + (int)pcVar1;
        uVar5 = uVar5 + 1;
      }
      free(__ptr);
    }
  }
  return (char *)0x0;
}



/* ===== int_array_len @ 00013560 size=18 ===== */

int int_array_len(int param_1)

{
  int iVar1;
  
  for (iVar1 = 0; (param_1 != 0 && (*(int *)(param_1 + iVar1 * 4) != 0)); iVar1 = iVar1 + 1) {
  }
  return iVar1;
}



/* ===== int_array_concat @ 00013572 size=84 ===== */

void int_array_concat(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar1 = int_array_len(*param_1);
  iVar2 = int_array_len(param_2);
  uVar4 = iVar1 + iVar2 + 1;
  if ((uVar4 >> 0x1e == 0) && (pvVar3 = realloc((void *)*param_1,uVar4 * 4), pvVar3 != (void *)0x0))
  {
    puVar6 = (undefined4 *)((int)pvVar3 + iVar1 * 4);
    for (iVar5 = 0; iVar5 <= iVar2; iVar5 = iVar5 + 1) {
      *puVar6 = *(undefined4 *)(param_2 + iVar5 * 4);
      puVar6 = puVar6 + 1;
    }
    *param_1 = pvVar3;
  }
  else {
    free((void *)*param_1);
    *param_1 = 0;
  }
  return;
}



/* ===== int_array_sort_unique @ 000135c6 size=64 ===== */

void int_array_sort_unique(int *param_1)

{
  size_t __nmemb;
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 != (int *)0x0) {
    __nmemb = int_array_len();
    qsort(param_1,__nmemb,4,(__compar_fn_t)(DAT_00013608 + 0x135d8));
    iVar4 = 0;
    piVar1 = param_1;
    while( true ) {
      iVar5 = param_1[iVar4];
      piVar2 = (int *)(iVar4 * 4);
      if (iVar5 == 0) break;
      piVar1 = piVar1 + 1;
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        iVar4 = iVar4 + 1;
        break;
      }
      if (iVar5 != iVar3) {
        piVar2 = (int *)((int)piVar2 + (int)param_1);
        iVar4 = iVar4 + 1;
      }
      if (iVar5 != iVar3) {
        piVar2[1] = iVar3;
      }
    }
    param_1[iVar4] = 0;
  }
  return;
}



/* ===== int_array_add_unique @ 0001360c size=64 ===== */

void int_array_add_unique(undefined4 *param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  size_t __size;
  
  pvVar1 = (void *)*param_1;
  for (iVar2 = 0; (pvVar1 != (void *)0x0 && (iVar3 = *(int *)((int)pvVar1 + iVar2 * 4), iVar3 != 0))
      ; iVar2 = iVar2 + 1) {
    if (iVar3 == param_2) {
      return;
    }
  }
  if (iVar2 + 2U >> 0x1e == 0) {
    __size = (iVar2 + 2U) * 4;
    pvVar1 = realloc(pvVar1,__size);
    if (pvVar1 != (void *)0x0) {
      *(int *)((int)pvVar1 + (__size - 8)) = param_2;
      *(undefined4 *)((int)pvVar1 + (__size - 4)) = 0;
      *param_1 = pvVar1;
      return;
    }
  }
  free((void *)*param_1);
  *param_1 = 0;
  return;
}



/* ===== str_clear_free @ 0001364c size=8 ===== */

void str_clear_free(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_00025164)();
  return;
}



/* ===== bin_clear_free @ 00013654 size=10 ===== */

void bin_clear_free(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_00025164)();
  return;
}



/* ===== random_mac_addr @ 0001365c size=36 ===== */

undefined4 random_mac_addr(byte *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = os_get_random(param_1,6);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    *param_1 = *param_1 & 0xfe | 2;
  }
  return uVar2;
}



/* ===== random_mac_addr_keep_oui @ 00013680 size=38 ===== */

undefined4 random_mac_addr_keep_oui(byte *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = os_get_random(param_1 + 3);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    *param_1 = *param_1 & 0xfe | 2;
  }
  return uVar2;
}



/* ===== cstr_token @ 000136a6 size=82 ===== */

byte * cstr_token(byte *param_1,char *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  char *pcVar2;
  byte *pbVar3;
  
  if (param_1 != (byte *)0x0) {
    if (param_2 == (char *)0x0) {
      param_1 = (byte *)0x0;
    }
    else if (param_3 == (undefined4 *)0x0) {
      param_1 = (byte *)0x0;
    }
    else {
      pbVar1 = (byte *)*param_3;
      if ((byte *)*param_3 == (byte *)0x0) {
        pbVar1 = param_1;
      }
      do {
        param_1 = pbVar1;
        if (*param_1 == 0) {
          return (byte *)0x0;
        }
        pcVar2 = strchr(param_2,(uint)*param_1);
        pbVar1 = param_1 + 1;
      } while (pcVar2 != (char *)0x0);
      do {
        pbVar3 = pbVar1;
        if (*pbVar3 == 0) break;
        pcVar2 = strchr(param_2,(uint)*pbVar3);
        pbVar1 = pbVar3 + 1;
      } while (pcVar2 == (char *)0x0);
      *param_3 = pbVar3;
    }
  }
  return param_1;
}



/* ===== str_token @ 000136f8 size=26 ===== */

void str_token(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = cstr_token();
  if ((iVar1 != 0) && (pcVar2 = (char *)*param_3, *pcVar2 != '\0')) {
    *param_3 = pcVar2 + 1;
    *pcVar2 = '\0';
  }
  return;
}



/* ===== utf8_unescape @ 00013712 size=98 ===== */

uint utf8_unescape(char *param_1,size_t param_2,char *param_3,uint param_4)

{
  size_t sVar1;
  uint uVar2;
  
  if ((param_1 == (char *)0x0) || (param_3 == (char *)0x0)) {
LAB_0001371c:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      param_2 = strlen(param_1);
    }
    if ((*param_1 == '\'') && (param_2 != 0)) {
      param_1 = param_1 + 1;
      param_2 = param_2 - 1;
    }
    uVar2 = 0;
    while (param_2 != 0) {
      if (uVar2 == param_4) goto LAB_0001371c;
      if (*param_1 == '\'') {
        *param_3 = '\0';
        return uVar2;
      }
      sVar1 = param_2 - 1;
      if (*param_1 == '\\') {
        if (param_2 - 1 == 0) goto LAB_0001371c;
        param_1 = param_1 + 1;
        sVar1 = param_2 - 2;
      }
      param_2 = sVar1;
      uVar2 = uVar2 + 1;
      *param_3 = *param_1;
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
    }
    if (uVar2 < param_4) {
      *param_3 = '\0';
    }
  }
  return uVar2;
}



/* ===== utf8_escape @ 00013774 size=90 ===== */

uint utf8_escape(char *param_1,size_t param_2,char *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  
  if ((param_1 == (char *)0x0) || (param_3 == (char *)0x0)) {
LAB_0001377e:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      param_2 = strlen(param_1);
    }
    pcVar3 = param_1 + param_2;
    uVar2 = 0;
    for (; pcVar3 != param_1; param_1 = param_1 + 1) {
      if (param_4 <= uVar2) goto LAB_0001377e;
      if ((*param_1 == '\'') || (pcVar4 = param_3, uVar1 = uVar2 + 1, *param_1 == '\\')) {
        if (param_4 <= uVar2 + 1) goto LAB_0001377e;
        pcVar4 = param_3 + 1;
        *param_3 = '\\';
        uVar1 = uVar2 + 2;
      }
      uVar2 = uVar1;
      param_3 = pcVar4 + 1;
      *pcVar4 = *param_1;
    }
    if (uVar2 < param_4) {
      *param_3 = '\0';
    }
  }
  return uVar2;
}



/* ===== is_ctrl_char @ 000137ce size=12 ===== */

bool is_ctrl_char(int param_1)

{
  return param_1 - 1U < 0x1f;
}



/* ===== ssid_parse @ 000137da size=110 ===== */

int ssid_parse(char *param_1,void *param_2)

{
  char *__s;
  char *pcVar1;
  void *__src;
  int iVar2;
  void *local_14;
  
  *(undefined4 *)((int)param_2 + 0x20) = 0;
  local_14 = param_2;
  __s = strdup(param_1);
  if (__s == (char *)0x0) {
LAB_0001383e:
    iVar2 = -1;
  }
  else {
    if (*__s == '\"') {
      pcVar1 = strchr(__s + 1,0x22);
      if (pcVar1 == (char *)0x0) {
        free(__s);
        goto LAB_0001383e;
      }
      pcVar1[1] = '\0';
    }
    else {
      pcVar1 = strchr(__s,0x20);
      if (pcVar1 != (char *)0x0) {
        *pcVar1 = '\0';
      }
    }
    __src = (void *)wpa_config_parse_string(__s,&local_14);
    if ((__src != (void *)0x0) && (local_14 < (void *)0x21)) {
      *(void **)((int)param_2 + 0x20) = local_14;
      memcpy(param_2,__src,(size_t)local_14);
    }
    free(__s);
    free(__src);
    iVar2 = -(uint)(*(int *)((int)param_2 + 0x20) == 0);
  }
  return iVar2;
}



/* ===== str_starts @ 00013848 size=30 ===== */

bool str_starts(char *param_1,char *param_2)

{
  size_t __n;
  int iVar1;
  
  __n = strlen(param_2);
  iVar1 = strncmp(param_1,param_2,__n);
  return iVar1 == 0;
}



/* ===== wpa_debug_print_timestamp @ 00013868 size=60 ===== */

void wpa_debug_print_timestamp(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (**(int **)(DAT_000138a4 + 0x13870 + DAT_000138a8) != 0) {
    local_10 = param_1;
    uStack_c = param_2;
    uStack_8 = param_3;
    os_get_time(&local_10);
    if (*(FILE **)(DAT_000138ac + 0x13882) == (FILE *)0x0) {
      printf((char *)(DAT_000138b4 + 0x138a0),local_10,uStack_c);
    }
    else {
      fprintf(*(FILE **)(DAT_000138ac + 0x13882),(char *)(DAT_000138b0 + 0x1388e),local_10,uStack_c)
      ;
    }
  }
  return;
}



/* ===== wpa_printf @ 00013b98 size=80 ===== */

void wpa_printf(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  FILE *__s;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = DAT_00013bf0;
  if (**(int **)(DAT_00013be8 + 0x13ba8 + DAT_00013bec) <= param_1) {
    uStack_8 = param_3;
    uStack_4 = param_4;
    wpa_debug_print_timestamp();
    __s = *(FILE **)(iVar1 + 0x13bbc);
    if (__s == (FILE *)0x0) {
      vprintf(param_2,&uStack_8);
      putchar(10);
    }
    else {
      vfprintf(__s,param_2,&uStack_8);
      fputc(10,*(FILE **)(iVar1 + 0x13bbc));
    }
  }
  return;
}



/* ===== wpa_hexdump @ 00013bf4 size=34 ===== */

/* WARNING: Removing unreachable block (ram,0x00013914) */
/* WARNING: Removing unreachable block (ram,0x00013956) */

void wpa_hexdump(int param_1,undefined4 param_2,byte *param_3,int param_4)

{
  byte *pbVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  if (param_1 < **(int **)(DAT_00013c18 + 0x13c04 + DAT_00013c1c)) {
    return;
  }
  puVar2 = (undefined4 *)(DAT_0001395c + 0x138ca);
  wpa_debug_print_timestamp();
  if ((FILE *)*puVar2 == (FILE *)0x0) {
    printf((char *)(DAT_00013974 + 0x13926),param_2,param_4);
    if (param_3 == (byte *)0x0) {
      printf((char *)(DAT_00013978 + 0x13930));
    }
    else {
      pbVar1 = param_3 + param_4;
      pcVar3 = (char *)(DAT_0001397c + 0x1393e);
      for (; param_3 != pbVar1; param_3 = param_3 + 1) {
        printf(pcVar3,(uint)*param_3);
      }
    }
    (*(code *)PTR_putchar_0002500c)(10);
    return;
  }
  fprintf((FILE *)*puVar2,(char *)(DAT_00013960 + 0x138da),param_2,param_4);
  if (param_3 == (byte *)0x0) {
    fputs((char *)(DAT_00013964 + 0x138e6),(FILE *)*puVar2);
  }
  else {
    pbVar1 = param_3 + param_4;
    pcVar3 = (char *)(DAT_00013968 + 0x138f4);
    for (; param_3 != pbVar1; param_3 = param_3 + 1) {
      fprintf((FILE *)*puVar2,pcVar3,(uint)*param_3);
    }
  }
  (*(code *)PTR_fputc_00025110)(10,*(undefined4 *)(DAT_0001396c + 0x13904));
  return;
}



/* ===== wpa_hexdump_key @ 00013c20 size=206 ===== */

void wpa_hexdump_key(int param_1,undefined4 param_2,byte *param_3,int param_4)

{
  char *pcVar1;
  FILE *__stream;
  int iVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  
  if (param_1 < **(int **)(DAT_00013c48 + 0x13c30 + DAT_00013c4c)) {
    return;
  }
  iVar2 = **(int **)(DAT_00013c48 + 0x13c30 + DAT_00013c50);
  puVar4 = (undefined4 *)(DAT_0001395c + 0x138ca);
  wpa_debug_print_timestamp();
  if ((FILE *)*puVar4 == (FILE *)0x0) {
    printf((char *)(DAT_00013974 + 0x13926),param_2,param_4);
    if (param_3 == (byte *)0x0) {
      pcVar1 = (char *)(DAT_00013978 + 0x13930);
    }
    else {
      if (iVar2 != 0) {
        pbVar3 = param_3 + param_4;
        pcVar1 = (char *)(DAT_0001397c + 0x1393e);
        for (; param_3 != pbVar3; param_3 = param_3 + 1) {
          printf(pcVar1,(uint)*param_3);
        }
        goto LAB_00011f44;
      }
      pcVar1 = (char *)((int)&DAT_0001395c + DAT_00013980);
    }
    printf(pcVar1);
LAB_00011f44:
    (*(code *)PTR_putchar_0002500c)(10);
    return;
  }
  fprintf((FILE *)*puVar4,(char *)(DAT_00013960 + 0x138da),param_2,param_4);
  if (param_3 == (byte *)0x0) {
    __stream = (FILE *)*puVar4;
    pcVar1 = (char *)(DAT_00013964 + 0x138e6);
  }
  else {
    if (iVar2 != 0) {
      pbVar3 = param_3 + param_4;
      pcVar1 = (char *)(DAT_00013968 + 0x138f4);
      for (; param_3 != pbVar3; param_3 = param_3 + 1) {
        fprintf((FILE *)*puVar4,pcVar1,(uint)*param_3);
      }
      goto LAB_00012288;
    }
    __stream = (FILE *)*puVar4;
    pcVar1 = (char *)(DAT_00013970 + 0x1391c);
  }
  fputs(pcVar1,__stream);
LAB_00012288:
  (*(code *)PTR_fputc_00025110)(10,*(undefined4 *)(DAT_0001396c + 0x13904));
  return;
}



/* ===== wpa_hexdump_ascii @ 00013c54 size=480 ===== */

/* WARNING: Removing unreachable block (ram,0x00013a90) */
/* WARNING: Removing unreachable block (ram,0x000139aa) */

void wpa_hexdump_ascii(int param_1,undefined4 param_2,byte *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FILE *__stream;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined4 uVar14;
  
  if (param_1 < **(int **)(DAT_00013c78 + 0x13c64 + DAT_00013c7c)) {
    return;
  }
  uVar14 = param_2;
  pbVar8 = param_3;
  uVar9 = param_4;
  wpa_debug_print_timestamp();
  iVar3 = DAT_00013b8c;
  iVar2 = DAT_00013b88;
  iVar1 = DAT_00013b54;
  iVar10 = DAT_00013b44 + 0x139a0;
  __stream = *(FILE **)(DAT_00013b40 + 0x1399e);
  if (__stream == (FILE *)0x0) {
    if (param_3 == (byte *)0x0) {
      (*(code *)PTR_printf_0002501c)(DAT_00013b80 + 0x13aa6);
      return;
    }
    printf((char *)(DAT_00013b84 + 0x13ab0),param_2,param_4,(undefined4 *)(DAT_00013b40 + 0x1399e),
           uVar14,pbVar8,uVar9);
    for (; param_4 != 0; param_4 = param_4 - uVar9) {
      uVar9 = param_4;
      if (0xf < param_4) {
        uVar9 = 0x10;
      }
      printf((char *)(iVar2 + 0x13aba));
      pbVar7 = param_3 + uVar9;
      pcVar6 = (char *)(DAT_00013b90 + 0x13ad6);
      pbVar8 = param_3;
      do {
        pbVar11 = pbVar8 + 1;
        printf(pcVar6,(uint)*pbVar8);
        uVar4 = uVar9;
        pbVar8 = pbVar11;
      } while (pbVar7 != pbVar11);
      for (; uVar4 != 0x10; uVar4 = uVar4 + 1) {
        printf((char *)(iVar3 + 0x13abc));
      }
      printf((char *)(DAT_00013b94 + 0x13af4));
      piVar13 = *(int **)(iVar10 + DAT_00013b74);
      do {
        pbVar8 = param_3 + 1;
        uVar4 = (uint)*param_3;
        if (-1 < (int)((uint)*(ushort *)(*piVar13 + uVar4 * 2) << 0x19)) {
          uVar4 = 0x5f;
        }
        putchar(uVar4);
        uVar4 = uVar9;
        param_3 = pbVar8;
      } while (pbVar7 != pbVar8);
      for (; uVar4 != 0x10; uVar4 = uVar4 + 1) {
        putchar(0x20);
      }
      putchar(10);
      param_3 = pbVar7;
    }
  }
  else {
    if (param_3 == (byte *)0x0) {
      (*(code *)PTR_fprintf_00025094)(__stream,DAT_00013b4c + 0x139c0);
      return;
    }
    fprintf(__stream,(char *)(DAT_00013b50 + 0x139ca),param_2,param_4);
    puVar5 = (undefined4 *)(DAT_00013b58 + 0x139d4);
    for (; iVar2 = DAT_00013b60, param_4 != 0; param_4 = param_4 - uVar9) {
      uVar9 = param_4;
      if (0xf < param_4) {
        uVar9 = 0x10;
      }
      fputs((char *)(DAT_00013b5c + 0x139f2),(FILE *)*puVar5);
      pbVar7 = param_3 + uVar9;
      pcVar6 = (char *)(DAT_00013b64 + 0x13a00);
      pbVar8 = param_3;
      do {
        pbVar11 = pbVar8 + 1;
        fprintf(*(FILE **)(iVar2 + 0x139fc),pcVar6,(uint)*pbVar8);
        pbVar8 = pbVar11;
      } while (pbVar7 != pbVar11);
      puVar12 = (undefined4 *)(DAT_00013b68 + 0x13a20);
      for (uVar4 = uVar9; iVar2 = DAT_00013b70, uVar4 != 0x10; uVar4 = uVar4 + 1) {
        fputs((char *)(iVar1 + 0x139d0),(FILE *)*puVar12);
      }
      fputs((char *)(DAT_00013b6c + 0x13a32),(FILE *)*puVar12);
      piVar13 = *(int **)(iVar10 + DAT_00013b74);
      do {
        pbVar8 = param_3 + 1;
        uVar4 = (uint)*param_3;
        if (-1 < (int)((uint)*(ushort *)(*piVar13 + uVar4 * 2) << 0x19)) {
          uVar4 = 0x5f;
        }
        fputc(uVar4,*(FILE **)(iVar2 + 0x13a3a));
        param_3 = pbVar8;
      } while (pbVar7 != pbVar8);
      puVar12 = (undefined4 *)(DAT_00013b78 + 0x13a64);
      for (uVar4 = uVar9; uVar4 != 0x10; uVar4 = uVar4 + 1) {
        fputc(0x20,(FILE *)*puVar12);
      }
      fputc(10,(FILE *)*puVar12);
      param_3 = pbVar7;
    }
  }
  return;
}



/* ===== wpa_hexdump_ascii_key @ 00013c80 size=38 ===== */

void wpa_hexdump_ascii_key(int param_1,undefined4 param_2,byte *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  FILE *__stream;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  int *piVar14;
  undefined4 uVar15;
  
  if (param_1 < **(int **)(DAT_00013ca8 + 0x13c90 + DAT_00013cac)) {
    return;
  }
  iVar7 = **(int **)(DAT_00013ca8 + 0x13c90 + DAT_00013cb0);
  uVar15 = param_2;
  pbVar9 = param_3;
  uVar10 = param_4;
  wpa_debug_print_timestamp();
  iVar2 = DAT_00013b8c;
  iVar1 = DAT_00013b88;
  iVar4 = DAT_00013b54;
  iVar11 = DAT_00013b44 + 0x139a0;
  __stream = *(FILE **)(DAT_00013b40 + 0x1399e);
  if (__stream != (FILE *)0x0) {
    if (iVar7 == 0) {
      iVar4 = DAT_00013b48 + 0x139b0;
    }
    else {
      if (param_3 != (byte *)0x0) {
        fprintf(__stream,(char *)(DAT_00013b50 + 0x139ca),param_2,param_4);
        puVar5 = (undefined4 *)(DAT_00013b58 + 0x139d4);
        for (; iVar1 = DAT_00013b60, param_4 != 0; param_4 = param_4 - uVar10) {
          uVar10 = param_4;
          if (0xf < param_4) {
            uVar10 = 0x10;
          }
          fputs((char *)(DAT_00013b5c + 0x139f2),(FILE *)*puVar5);
          pbVar8 = param_3 + uVar10;
          pcVar6 = (char *)(DAT_00013b64 + 0x13a00);
          pbVar9 = param_3;
          do {
            pbVar12 = pbVar9 + 1;
            fprintf(*(FILE **)(iVar1 + 0x139fc),pcVar6,(uint)*pbVar9);
            pbVar9 = pbVar12;
          } while (pbVar8 != pbVar12);
          puVar13 = (undefined4 *)(DAT_00013b68 + 0x13a20);
          for (uVar3 = uVar10; iVar1 = DAT_00013b70, uVar3 != 0x10; uVar3 = uVar3 + 1) {
            fputs((char *)(iVar4 + 0x139d0),(FILE *)*puVar13);
          }
          fputs((char *)(DAT_00013b6c + 0x13a32),(FILE *)*puVar13);
          piVar14 = *(int **)(iVar11 + DAT_00013b74);
          do {
            pbVar9 = param_3 + 1;
            uVar3 = (uint)*param_3;
            if (-1 < (int)((uint)*(ushort *)(*piVar14 + uVar3 * 2) << 0x19)) {
              uVar3 = 0x5f;
            }
            fputc(uVar3,*(FILE **)(iVar1 + 0x13a3a));
            param_3 = pbVar9;
          } while (pbVar8 != pbVar9);
          puVar13 = (undefined4 *)(DAT_00013b78 + 0x13a64);
          for (uVar3 = uVar10; uVar3 != 0x10; uVar3 = uVar3 + 1) {
            fputc(0x20,(FILE *)*puVar13);
          }
          fputc(10,(FILE *)*puVar13);
          param_3 = pbVar8;
        }
        return;
      }
      iVar4 = DAT_00013b4c + 0x139c0;
    }
    (*(code *)PTR_fprintf_00025094)(__stream,iVar4);
    return;
  }
  if (iVar7 == 0) {
    iVar4 = DAT_00013b7c + 0x13a96;
  }
  else {
    if (param_3 != (byte *)0x0) {
      printf((char *)(DAT_00013b84 + 0x13ab0),param_2,param_4,(undefined4 *)(DAT_00013b40 + 0x1399e)
             ,uVar15,pbVar9,uVar10);
      for (; param_4 != 0; param_4 = param_4 - uVar10) {
        uVar10 = param_4;
        if (0xf < param_4) {
          uVar10 = 0x10;
        }
        printf((char *)(iVar1 + 0x13aba));
        pbVar8 = param_3 + uVar10;
        pcVar6 = (char *)(DAT_00013b90 + 0x13ad6);
        pbVar9 = param_3;
        do {
          pbVar12 = pbVar9 + 1;
          printf(pcVar6,(uint)*pbVar9);
          uVar3 = uVar10;
          pbVar9 = pbVar12;
        } while (pbVar8 != pbVar12);
        for (; uVar3 != 0x10; uVar3 = uVar3 + 1) {
          printf((char *)(iVar2 + 0x13abc));
        }
        printf((char *)(DAT_00013b94 + 0x13af4));
        piVar14 = *(int **)(iVar11 + DAT_00013b74);
        do {
          pbVar9 = param_3 + 1;
          uVar3 = (uint)*param_3;
          if (-1 < (int)((uint)*(ushort *)(*piVar14 + uVar3 * 2) << 0x19)) {
            uVar3 = 0x5f;
          }
          putchar(uVar3);
          uVar3 = uVar10;
          param_3 = pbVar9;
        } while (pbVar8 != pbVar9);
        for (; uVar3 != 0x10; uVar3 = uVar3 + 1) {
          putchar(0x20);
        }
        putchar(10);
        param_3 = pbVar8;
      }
      return;
    }
    iVar4 = DAT_00013b80 + 0x13aa6;
  }
  (*(code *)PTR_printf_0002501c)(iVar4);
  return;
}



/* ===== wpa_debug_open_file @ 00013cb4 size=90 ===== */

undefined4 wpa_debug_open_file(char *param_1)

{
  int iVar1;
  FILE *__stream;
  undefined4 uVar2;
  char *pcVar3;
  
  uVar2 = 0;
  if (param_1 != (char *)0x0) {
    pcVar3 = *(char **)(DAT_00013d10 + 0x13cc4);
    if ((pcVar3 == (char *)0x0) || (iVar1 = strcmp(pcVar3,param_1), iVar1 != 0)) {
      free(pcVar3);
      pcVar3 = strdup(param_1);
      *(char **)(DAT_00013d14 + 0x13ce2) = pcVar3;
    }
    __stream = fopen64(param_1,(char *)(DAT_00013d18 + 0x13ce6));
    *(FILE **)(DAT_00013d1c + 0x13cee) = __stream;
    if (__stream == (FILE *)0x0) {
      wpa_printf(5,DAT_00013d20 + 0x13cf8);
      uVar2 = 0xffffffff;
    }
    else {
      setvbuf(__stream,(char *)0x0,1,0);
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* ===== wpa_debug_close_file @ 00013d24 size=28 ===== */

void wpa_debug_close_file(void)

{
  int iVar1;
  FILE *__stream;
  void *__ptr;
  undefined4 *puVar2;
  
  iVar1 = DAT_00013d40;
  puVar2 = (undefined4 *)(DAT_00013d40 + 0x13d2c);
  __stream = (FILE *)*puVar2;
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
    __ptr = *(void **)(iVar1 + 0x13d30);
    *puVar2 = 0;
    free(__ptr);
    *(undefined4 *)(iVar1 + 0x13d30) = 0;
  }
  return;
}



/* ===== wpa_debug_reopen_file @ 00013d44 size=50 ===== */

undefined4 wpa_debug_reopen_file(void)

{
  char *__ptr;
  undefined4 uVar1;
  
  if (*(char **)(DAT_00013d78 + 0x13d50) == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    __ptr = strdup(*(char **)(DAT_00013d78 + 0x13d50));
    if (__ptr == (char *)0x0) {
      uVar1 = 0xffffffff;
    }
    else {
      wpa_debug_close_file();
      uVar1 = wpa_debug_open_file(__ptr);
      free(__ptr);
    }
  }
  return uVar1;
}



/* ===== wpa_debug_setup_stdout @ 00013d7c size=22 ===== */

void wpa_debug_setup_stdout(void)

{
  (*(code *)PTR_setvbuf_00025048)(**(undefined4 **)(DAT_00013d90 + 0x13d84 + DAT_00013d94),0,1);
  return;
}



/* ===== wpa_msg_register_cb @ 00013d98 size=8 ===== */

void wpa_msg_register_cb(undefined4 param_1)

{
  *(undefined4 *)(wpa_msg_register_ifname_cb + DAT_00013da0 + 2) = param_1;
  return;
}



/* ===== wpa_msg_register_ifname_cb @ 00013da4 size=8 ===== */

void wpa_msg_register_ifname_cb(undefined4 param_1)

{
  *(undefined4 *)(wpa_msg + DAT_00013dac + 6) = param_1;
  return;
}



/* ===== wpa_msg @ 00013db0 size=172 ===== */

void wpa_msg(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  char *__s;
  uint uVar2;
  size_t __size;
  char local_ac [132];
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  iVar1 = vsnprintf((char *)0x0,0,param_3,&uStack_4);
  __size = iVar1 + 1;
  __s = malloc(__size);
  if (__s == (char *)0x0) {
    wpa_printf(5,DAT_00013e5c + 0x13de4);
  }
  else {
    local_ac[0] = '\0';
    if (((*(code **)(DAT_00013e60 + 0x13e0a) != (code *)0x0) &&
        (iVar1 = (**(code **)(DAT_00013e60 + 0x13e0a))(param_1), iVar1 != 0)) &&
       (uVar2 = snprintf(local_ac,0x82,(char *)(DAT_00013e64 + 0x13e16),iVar1), 0x81 < uVar2)) {
      local_ac[0] = '\0';
    }
    iVar1 = vsnprintf(__s,__size,param_3,&uStack_4);
    wpa_printf(param_2,DAT_00013e68 + 0x13e36,local_ac,__s);
    if (*(code **)(DAT_00013e6c + 0x13e4a) != (code *)0x0) {
      (**(code **)(DAT_00013e6c + 0x13e4a))(param_1,param_2,0,__s,iVar1);
    }
    bin_clear_free(__s,__size);
  }
  return;
}



/* ===== wpa_msg_ctrl @ 00013e70 size=104 ===== */

void wpa_msg_ctrl(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  char *__s;
  size_t __size;
  undefined4 uStack_4;
  
  iVar1 = DAT_00013ed8;
  if (*(int *)(DAT_00013ed8 + 0x13e8a) != 0) {
    uStack_4 = param_4;
    iVar2 = vsnprintf((char *)0x0,0,param_3,&uStack_4);
    __size = iVar2 + 1;
    __s = malloc(__size);
    if (__s == (char *)0x0) {
      wpa_printf(5,DAT_00013edc + 0x13ea8);
    }
    else {
      iVar2 = vsnprintf(__s,__size,param_3,&uStack_4);
      (**(code **)(iVar1 + 0x13e8a))(param_1,param_2,0,__s,iVar2);
      bin_clear_free(__s,__size);
    }
  }
  return;
}



/* ===== wpa_msg_global @ 00013ee0 size=122 ===== */

void wpa_msg_global(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  char *__s;
  size_t __size;
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  iVar1 = vsnprintf((char *)0x0,0,param_3,&uStack_4);
  __size = iVar1 + 1;
  __s = malloc(__size);
  if (__s == (char *)0x0) {
    wpa_printf(5,DAT_00013f5c + 0x13f14);
  }
  else {
    iVar1 = vsnprintf(__s,__size,param_3,&uStack_4);
    wpa_printf(param_2,DAT_00013f60 + 0x13f34,__s);
    if (*(code **)(DAT_00013f64 + 0x13f48) != (code *)0x0) {
      (**(code **)(DAT_00013f64 + 0x13f48))(param_1,param_2,1,__s,iVar1);
    }
    bin_clear_free(__s,__size);
  }
  return;
}



/* ===== wpa_msg_global_ctrl @ 00013f68 size=104 ===== */

void wpa_msg_global_ctrl(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  char *__s;
  size_t __size;
  undefined4 uStack_4;
  
  iVar1 = DAT_00013fd0;
  if (*(int *)(DAT_00013fd0 + 0x13f82) != 0) {
    uStack_4 = param_4;
    iVar2 = vsnprintf((char *)0x0,0,param_3,&uStack_4);
    __size = iVar2 + 1;
    __s = malloc(__size);
    if (__s == (char *)0x0) {
      wpa_printf(5,DAT_00013fd4 + 0x13fa0);
    }
    else {
      iVar2 = vsnprintf(__s,__size,param_3,&uStack_4);
      (**(code **)(iVar1 + 0x13f82))(param_1,param_2,1,__s,iVar2);
      bin_clear_free(__s,__size);
    }
  }
  return;
}



/* ===== wpa_msg_no_global @ 00013fd8 size=122 ===== */

void wpa_msg_no_global(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  char *__s;
  size_t __size;
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  iVar1 = vsnprintf((char *)0x0,0,param_3,&uStack_4);
  __size = iVar1 + 1;
  __s = malloc(__size);
  if (__s == (char *)0x0) {
    wpa_printf(5,DAT_00014054 + 0x1400c);
  }
  else {
    iVar1 = vsnprintf(__s,__size,param_3,&uStack_4);
    wpa_printf(param_2,DAT_00014058 + 0x1402c,__s);
    if (*(code **)(DAT_0001405c + 0x14040) != (code *)0x0) {
      (**(code **)(DAT_0001405c + 0x14040))(param_1,param_2,2,__s,iVar1);
    }
    bin_clear_free(__s,__size);
  }
  return;
}



/* ===== wpa_msg_global_only @ 00014060 size=122 ===== */

void wpa_msg_global_only(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  char *__s;
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  iVar1 = vsnprintf((char *)0x0,0,param_3,&uStack_4);
  __s = malloc(iVar1 + 1U);
  if (__s == (char *)0x0) {
    wpa_printf(5,DAT_000140e0 + 0x14098,DAT_000140dc + 0x14096);
  }
  else {
    iVar1 = vsnprintf(__s,iVar1 + 1U,param_3,&uStack_4);
    wpa_printf(param_2,DAT_000140e4 + 0x140b8,__s);
    if (*(code **)(DAT_000140e8 + 0x140cc) != (code *)0x0) {
      (**(code **)(DAT_000140e8 + 0x140cc))(param_1,param_2,3,__s,iVar1);
    }
    free(__s);
  }
  return;
}



/* ===== hostapd_logger_register_cb @ 000140ec size=8 ===== */

void hostapd_logger_register_cb(undefined4 param_1)

{
  *(undefined4 *)(DAT_000140f4 + 0x14102) = param_1;
  return;
}



/* ===== hostapd_logger @ 000140f8 size=156 ===== */

void hostapd_logger(undefined4 param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4,
                   char *param_5)

{
  int iVar1;
  char *__s;
  size_t __size;
  
  iVar1 = vsnprintf((char *)0x0,0,param_5,&stack0x00000004);
  __size = iVar1 + 1;
  __s = malloc(__size);
  if (__s == (char *)0x0) {
    wpa_printf(5,DAT_00014194 + 0x1412e);
  }
  else {
    iVar1 = vsnprintf(__s,__size,param_5,&stack0x00000004);
    if (*(code **)(DAT_00014198 + 0x14158) == (code *)0x0) {
      if (param_2 == (undefined1 *)0x0) {
        wpa_printf(2,DAT_000141a0 + 0x14190,__s);
      }
      else {
        wpa_printf(2,DAT_0001419c + 0x14172,*param_2,param_2[1],param_2[2],param_2[3],param_2[4],
                   param_2[5],__s);
      }
    }
    else {
      (**(code **)(DAT_00014198 + 0x14158))(param_1,param_2,param_3,param_4,__s,iVar1);
    }
    bin_clear_free(__s,__size);
  }
  return;
}



/* ===== debug_level_str @ 000141a4 size=50 ===== */

int debug_level_str(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return (int)&DAT_000141dc + DAT_000141f4;
  case 1:
    return DAT_000141dc + 0x141b8;
  case 2:
    return DAT_000141e0 + 0x141be;
  case 3:
    return DAT_000141e4 + 0x141c4;
  case 4:
    return DAT_000141e8 + 0x141ca;
  case 5:
    return DAT_000141ec + 0x141d0;
  default:
    return DAT_000141f0 + 0x141d6;
  }
}



/* ===== str_to_debug_level @ 000141f8 size=100 ===== */

undefined4 str_to_debug_level(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcasecmp(param_1,(char *)(DAT_0001425c + 0x14200));
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = strcasecmp(param_1,(char *)(DAT_00014260 + 0x1420e));
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      iVar1 = strcasecmp(param_1,(char *)(DAT_00014264 + 0x1421a));
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        iVar1 = strcasecmp(param_1,(char *)(DAT_00014268 + 0x14226));
        if (iVar1 == 0) {
          uVar2 = 3;
        }
        else {
          iVar1 = strcasecmp(param_1,(char *)(DAT_0001426c + 0x14232));
          if (iVar1 == 0) {
            uVar2 = 4;
          }
          else {
            iVar1 = strcasecmp(param_1,(char *)(DAT_00014270 + 0x1423e));
            if (iVar1 == 0) {
              uVar2 = 5;
            }
            else {
              uVar2 = 0xffffffff;
            }
          }
        }
      }
    }
  }
  return uVar2;
}



/* ===== _fini @ 00014274 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::putchar @ 00026000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clock_gettime @ 00026004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unsetenv @ 00026008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unsetenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::waitpid @ 0002600c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00026010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::random @ 00026018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long random(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::recv @ 0002601c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::connect @ 00026020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 00026024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 0002602c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpid @ 00026030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::qsort @ 00026034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fcntl64 @ 00026038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void fcntl64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0002603c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setvbuf @ 00026040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setvbuf(FILE *__stream,char *__buf,int __modes,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 00026044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00026048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 0002604c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00026050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 00026054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vsnprintf @ 00026058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::socket @ 0002605c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::select @ 00026060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 00026064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::send @ 00026068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 0002606c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 00026070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fdatasync @ 00026074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fdatasync(int __fildes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00026078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::bind @ 0002607c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vprintf @ 00026080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vprintf(char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00026084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fseek @ 00026088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 0002608c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mktime @ 00026090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00026094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unlink @ 00026098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setenv @ 0002609c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcasecmp @ 000260a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 000260a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 000260a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fork @ 000260ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::execv @ 000260b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execv(char *__path,char **__argv)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 000260b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 000260b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strdup @ 000260bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 000260c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::localtime @ 000260c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 000260c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ftell @ 000260cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long ftell(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 000260d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 000260d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getcwd @ 000260d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getcwd(char *__buf,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 000260dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::access @ 000260e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 000260e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 000260e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 000260ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fileno @ 000260f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gmtime @ 000260f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * gmtime(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::daemon @ 000260f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int daemon(int __nochdir,int __noclose)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 000260fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 00026100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 00026104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00026108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0002610c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vfprintf @ 00026110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00026114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 00026118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


