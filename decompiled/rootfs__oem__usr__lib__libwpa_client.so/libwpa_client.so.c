// libwpa_client.so — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00011f20 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::putchar @ 00011f44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0002600c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::clock_gettime @ 00011f50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_00026010)(__clock_id);
  return iVar1;
}



/* ===== <EXTERNAL>::unsetenv @ 00011f5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unsetenv(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unsetenv_00026014)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::waitpid @ 00011f68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_waitpid_00026018)(__pid);
  return _Var1;
}



/* ===== <EXTERNAL>::printf @ 00011f74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0002601c)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::random @ 00011f80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long random(void)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_random_00026020)();
  return lVar1;
}



/* ===== bin_clear_free @ 00011f8c size=12 ===== */

void bin_clear_free(void)

{
  (*(code *)PTR_bin_clear_free_00026024)();
  return;
}



/* ===== <EXTERNAL>::recv @ 00011f98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recv_00026028)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::connect @ 00011fa4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_connect_0002602c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00011fb0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00026030)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::getpid @ 00011fc8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_00026038)();
  return _Var1;
}



/* ===== <EXTERNAL>::qsort @ 00011fd4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  (*(code *)PTR_qsort_0002603c)(__base);
  return;
}



/* ===== <EXTERNAL>::fcntl64 @ 00011fe0 size=12 ===== */

void fcntl64(void)

{
  (*(code *)PTR_fcntl64_00026040)();
  return;
}



/* ===== <EXTERNAL>::memcpy @ 00011fec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00026044)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::setvbuf @ 00011ff8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setvbuf(FILE *__stream,char *__buf,int __modes,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setvbuf_00026048)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::perror @ 00012010 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_00026050)(__s);
  return;
}



/* ===== hexstr2bin @ 0001201c size=12 ===== */

void hexstr2bin(void)

{
  (*(code *)PTR_hexstr2bin_00026054)();
  return;
}



/* ===== <EXTERNAL>::puts @ 00012028 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00026058)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00012034 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_0002605c)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00012040 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00026060)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::sleep @ 0001204c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_00026064)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::vsnprintf @ 00012058 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsnprintf_00026068)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::socket @ 00012064 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_0002606c)(__domain);
  return iVar1;
}



/* ===== <EXTERNAL>::select @ 00012070 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_select_00026070)(__nfds);
  return iVar1;
}



/* ===== <EXTERNAL>::fflush @ 0001207c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00026074)(__stream);
  return iVar1;
}



/* ===== int_array_len @ 00012088 size=12 ===== */

void int_array_len(void)

{
  (*(code *)PTR_int_array_len_00026078)();
  return;
}



/* ===== <EXTERNAL>::send @ 00012094 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_send_0002607c)(__fd);
  return sVar1;
}



/* ===== wpa_debug_close_file @ 000120a0 size=12 ===== */

void wpa_debug_close_file(void)

{
  (*(code *)PTR_wpa_debug_close_file_00026080)();
  return;
}



/* ===== wpa_config_parse_string @ 000120ac size=12 ===== */

void wpa_config_parse_string(void)

{
  (*(code *)PTR_wpa_config_parse_string_00026084)();
  return;
}



/* ===== <EXTERNAL>::strrchr @ 000120b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_00026088)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fprintf @ 000120dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00026094)(__stream);
  return iVar1;
}



/* ===== os_strlcpy @ 000120e8 size=12 ===== */

void os_strlcpy(void)

{
  (*(code *)PTR_os_strlcpy_00026098)();
  return;
}



/* ===== <EXTERNAL>::bind @ 000120f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_bind_0002609c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::vprintf @ 00012100 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vprintf(char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vprintf_000260a0)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0001210c size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_000260a4)();
  return;
}



/* ===== os_zalloc @ 00012118 size=12 ===== */

void os_zalloc(void)

{
  (*(code *)PTR_os_zalloc_000260a8)();
  return;
}



/* ===== <EXTERNAL>::fseek @ 00012124 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_000260ac)(__stream);
  return iVar1;
}



/* ===== hex2byte @ 00012130 size=12 ===== */

void hex2byte(void)

{
  (*(code *)PTR_hex2byte_000260b0)();
  return;
}



/* ===== <EXTERNAL>::mktime @ 0001213c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_mktime_000260b4)(__tp);
  return tVar1;
}



/* ===== cstr_token @ 00012148 size=12 ===== */

void cstr_token(void)

{
  (*(code *)PTR_cstr_token_000260b8)();
  return;
}



/* ===== <EXTERNAL>::strncmp @ 00012154 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_000260bc)(__s1);
  return iVar1;
}



/* ===== wpa_debug_open_file @ 00012160 size=12 ===== */

void wpa_debug_open_file(void)

{
  (*(code *)PTR_wpa_debug_open_file_000260c0)();
  return;
}



/* ===== <EXTERNAL>::unlink @ 0001216c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unlink_000260c4)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::setenv @ 00012178 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setenv_000260c8)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::strcasecmp @ 00012184 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcasecmp_000260cc)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::realloc @ 00012190 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_000260d0)(__ptr);
  return pvVar1;
}



/* ===== <EXTERNAL>::memcmp @ 0001219c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_000260d4)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fork @ 000121a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_fork_000260d8)();
  return _Var1;
}



/* ===== <EXTERNAL>::execv @ 000121b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execv(char *__path,char **__argv)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_execv_000260dc)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::fread @ 000121c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_000260e0)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::strdup @ 000121cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strdup_000260e4)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::gettimeofday @ 000121d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_000260e8)(__tv);
  return iVar1;
}



/* ===== wpa_debug_print_timestamp @ 000121e4 size=12 ===== */

void wpa_debug_print_timestamp(void)

{
  (*(code *)PTR_wpa_debug_print_timestamp_000260ec)();
  return;
}



/* ===== <EXTERNAL>::localtime @ 000121f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_localtime_000260f0)(__timer);
  return ptVar1;
}



/* ===== <EXTERNAL>::memset @ 000121fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_000260f4)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::ftell @ 00012208 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long ftell(FILE *__stream)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_ftell_000260f8)(__stream);
  return lVar1;
}



/* ===== dup_binstr @ 00012214 size=12 ===== */

void dup_binstr(void)

{
  (*(code *)PTR_dup_binstr_000260fc)();
  return;
}



/* ===== <EXTERNAL>::fclose @ 00012220 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00026100)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strcmp @ 0001222c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00026104)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::getcwd @ 00012238 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getcwd(char *__buf,size_t __size)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getcwd_00026108)(__buf);
  return pcVar1;
}



/* ===== os_get_reltime @ 00012244 size=12 ===== */

void os_get_reltime(void)

{
  (*(code *)PTR_os_get_reltime_0002610c)();
  return;
}



/* ===== <EXTERNAL>::fputc @ 00012250 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_00026110)(__c);
  return iVar1;
}



/* ===== os_get_random @ 0001225c size=12 ===== */

void os_get_random(void)

{
  (*(code *)PTR_os_get_random_00026114)();
  return;
}



/* ===== printf_encode @ 00012268 size=12 ===== */

void printf_encode(void)

{
  (*(code *)PTR_printf_encode_00026118)();
  return;
}



/* ===== printf_decode @ 00012274 size=12 ===== */

void printf_decode(void)

{
  (*(code *)PTR_printf_decode_0002611c)();
  return;
}



/* ===== <EXTERNAL>::access @ 00012280 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_00026120)(__name);
  return iVar1;
}



/* ===== os_sleep @ 0001228c size=12 ===== */

void os_sleep(void)

{
  (*(code *)PTR_os_sleep_00026124)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 00012298 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00026128)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 000122a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0002612c)(__status);
  return;
}



/* ===== <EXTERNAL>::atoi @ 000122b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_00026130)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::fileno @ 000122bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fileno_00026134)(__stream);
  return iVar1;
}



/* ===== wpa_printf @ 000122c8 size=12 ===== */

void wpa_printf(void)

{
  (*(code *)PTR_wpa_printf_00026138)();
  return;
}



/* ===== <EXTERNAL>::gmtime @ 000122d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * gmtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_gmtime_0002613c)(__timer);
  return ptVar1;
}



/* ===== wpa_ctrl_request @ 000122e0 size=12 ===== */

void wpa_ctrl_request(void)

{
  (*(code *)PTR_wpa_ctrl_request_00026140)();
  return;
}



/* ===== <EXTERNAL>::daemon @ 000122ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int daemon(int __nochdir,int __noclose)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_daemon_00026144)(__nochdir);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 000122f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00026148)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strchr @ 00012304 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_0002614c)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fputs @ 00012310 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_00026150)(__s);
  return iVar1;
}



/* ===== os_get_time @ 0001231c size=12 ===== */

void os_get_time(void)

{
  (*(code *)PTR_os_get_time_00026154)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00012328 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00026158)();
  return;
}



/* ===== <EXTERNAL>::close @ 00012334 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0002615c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::vfprintf @ 00012340 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vfprintf_00026160)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 0001234c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00026164)(__ptr);
  return;
}



/* ===== <EXTERNAL>::fopen64 @ 00012358 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_00026168)(__filename);
  return pFVar1;
}



/* ===== entry @ 00012364 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_000123b0 + 0x1237c == DAT_000123ac + 0x12374) {
    return;
  }
  pcVar1 = *(code **)(DAT_000123b4 + 0x12384 + DAT_000123b8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 00012420 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00012494 + 0x1243c;
  if (*(char *)(DAT_00012490 + 0x12430) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_00012498) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_0001249c + 0x1245c));
  }
  entry();
  if (*(int *)(iVar1 + DAT_000124a0) != 0) {
    __deregister_frame_info(DAT_000124a4 + 0x1247c);
  }
  *(undefined1 *)(DAT_000124a8 + 0x1248c) = 1;
  return;
}



/* ===== _INIT_0 @ 000124ac size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_000124e4 + 0x124bc + DAT_000124e8) != 0) {
    __register_frame_info(DAT_000124f0 + 0x124dc,DAT_000124ec + 0x124d8);
  }
  if (((DAT_00012414 + 0x123d4) - (DAT_00012410 + 0x123cc) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00012418 + 0x123dc + DAT_0001241c);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== wpa_ctrl_open2 @ 000124f4 size=524 ===== */

int * wpa_ctrl_open2(char *param_1,char *param_2)

{
  bool bVar1;
  byte bVar2;
  int *__ptr;
  int iVar3;
  __pid_t _Var4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  char *__s;
  char *__format;
  
  if ((param_1 != (char *)0x0) && (__ptr = (int *)os_zalloc(0xe0), __ptr != (int *)0x0)) {
    iVar3 = socket(1,2,0);
    *__ptr = iVar3;
    iVar8 = DAT_00012700;
    if (-1 < iVar3) {
      *(undefined2 *)(__ptr + 1) = 1;
      bVar2 = 0;
      piVar9 = (int *)(DAT_00012704 + 0x12570);
      __format = (char *)(DAT_00012708 + 0x1257c);
      *piVar9 = *piVar9 + 1;
      while( true ) {
        __s = (char *)((int)__ptr + 6);
        iVar3 = *piVar9;
        if ((param_2 == (char *)0x0) || (*param_2 != '/')) {
          _Var4 = getpid();
          uVar5 = snprintf(__s,0x6c,(char *)(iVar8 + 0x12574),_Var4,iVar3);
        }
        else {
          _Var4 = getpid();
          uVar5 = snprintf(__s,0x6c,__format,param_2,_Var4,iVar3);
        }
        iVar3 = *__ptr;
        if (0x6b < uVar5) goto LAB_000125d0;
        iVar6 = bind(iVar3,(sockaddr *)(__ptr + 1),0x6e);
        iVar3 = DAT_0001270c;
        if (-1 < iVar6) break;
        bVar1 = (bool)(bVar2 ^ 1);
        piVar7 = __errno_location();
        if (*piVar7 != 0x62) {
          bVar1 = false;
        }
        if (!bVar1) goto LAB_000126bc;
        bVar2 = 1;
        unlink(__s);
      }
      *(undefined2 *)((int)__ptr + 0x72) = 1;
      iVar8 = strncmp(param_1,(char *)(iVar3 + 0x12658),10);
      if (iVar8 == 0) {
        *(undefined1 *)(__ptr + 0x1d) = 0;
        os_strlcpy((int)__ptr + 0x75,param_1 + 10,0x6b);
LAB_00012678:
        iVar8 = connect(*__ptr,(sockaddr *)((int)__ptr + 0x72),0x6e);
        if (-1 < iVar8) {
          uVar5 = fcntl64(*__ptr,3);
          if ((int)uVar5 < 0) {
            return __ptr;
          }
          iVar8 = fcntl64(*__ptr,4,uVar5 | 0x800);
          if (-1 < iVar8) {
            return __ptr;
          }
          perror((char *)(DAT_00012710 + 0x126fc));
          return __ptr;
        }
        close(*__ptr);
        unlink(__s);
        goto LAB_00012544;
      }
      uVar5 = os_strlcpy(__ptr + 0x1d,param_1,0x6c);
      if (uVar5 < 0x6c) goto LAB_00012678;
LAB_000126bc:
      iVar3 = *__ptr;
LAB_000125d0:
      close(iVar3);
    }
LAB_00012544:
    free(__ptr);
  }
  return (int *)0x0;
}



/* ===== wpa_ctrl_open @ 00012714 size=20 ===== */

void wpa_ctrl_open(undefined4 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001200c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_wpa_ctrl_open2_0002604c)(param_1,0);
  return;
}



/* ===== wpa_ctrl_close @ 0001271c size=48 ===== */

void wpa_ctrl_close(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  unlink((char *)((int)param_1 + 6));
  if (-1 < *param_1) {
    close(*param_1);
  }
  free(param_1);
  return;
}



/* ===== wpa_ctrl_request @ 0001274c size=492 ===== */

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
  *piVar1 = 0;
  local_b0 = 0;
  local_ac = 0;
  do {
    sVar2 = send(*param_1,param_2,param_3,0);
    if (-1 < sVar2) {
      while( true ) {
        while( true ) {
          local_b8.tv_sec = 10;
          local_b8.tv_usec = 0;
          iVar6 = 0;
          p_Var5 = (__fd_mask *)local_a8;
          do {
            *p_Var5 = 0;
            iVar6 = iVar6 + 1;
            p_Var5 = p_Var5 + 1;
          } while (iVar6 != 0x20);
          uVar3 = *param_1;
          local_a8[uVar3 >> 5] = local_a8[uVar3 >> 5] | 1 << (uVar3 & 0x1f);
          sVar4 = select(uVar3 + 1,(fd_set *)local_a8,(fd_set *)0x0,(fd_set *)0x0,&local_b8);
          if (-1 < (int)sVar4) break;
          if (*piVar1 != 4) {
            return sVar4;
          }
        }
        uVar3 = *param_1;
        if (((int)local_a8[uVar3 >> 5] >> (uVar3 & 0x1f) & 1U) == 0) {
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
    if (*piVar1 != 0x10 && *piVar1 != 0xb) {
      return 0xffffffff;
    }
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
  } while( true );
}



/* ===== wpa_ctrl_attach @ 000129cc size=8 ===== */

/* WARNING: Removing unreachable block (ram,0x00012950) */

int wpa_ctrl_attach(undefined4 param_1)

{
  int iVar1;
  int iStack_18;
  undefined1 auStack_14 [12];
  
  iStack_18 = 10;
  iVar1 = wpa_ctrl_request(param_1,(int)&DAT_000129c0 + DAT_000129c8,6,auStack_14,&iStack_18,0);
  if (-1 < iVar1) {
    if (iStack_18 == 3) {
      iVar1 = memcmp(auStack_14,(void *)(DAT_000129c4 + 0x129a0),3);
      iVar1 = -(uint)(iVar1 != 0);
    }
    else {
      iVar1 = -1;
    }
  }
  return iVar1;
}



/* ===== wpa_ctrl_detach @ 000129d4 size=144 ===== */

/* WARNING: Removing unreachable block (ram,0x000129b4) */

int wpa_ctrl_detach(undefined4 param_1)

{
  int iVar1;
  int local_18;
  undefined1 auStack_14 [12];
  
  local_18 = 10;
  iVar1 = wpa_ctrl_request(param_1,DAT_000129c0 + 0x1295c,6,auStack_14,&local_18,0);
  if (-1 < iVar1) {
    if (local_18 == 3) {
      iVar1 = memcmp(auStack_14,(void *)(DAT_000129c4 + 0x129a0),3);
      iVar1 = -(uint)(iVar1 != 0);
    }
    else {
      iVar1 = -1;
    }
  }
  return iVar1;
}



/* ===== wpa_ctrl_recv @ 000129dc size=40 ===== */

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



/* ===== wpa_ctrl_pending @ 00012a04 size=152 ===== */

uint wpa_ctrl_pending(uint *param_1)

{
  uint uVar1;
  __fd_mask *p_Var2;
  int iVar3;
  timeval local_90;
  uint auStack_88 [32];
  
  iVar3 = 0;
  local_90.tv_sec = 0;
  local_90.tv_usec = 0;
  p_Var2 = (__fd_mask *)auStack_88;
  do {
    *p_Var2 = 0;
    iVar3 = iVar3 + 1;
    p_Var2 = p_Var2 + 1;
  } while (iVar3 != 0x20);
  uVar1 = *param_1;
  auStack_88[uVar1 >> 5] = auStack_88[uVar1 >> 5] | 1 << (uVar1 & 0x1f);
  select(uVar1 + 1,(fd_set *)auStack_88,(fd_set *)0x0,(fd_set *)0x0,&local_90);
  return (int)auStack_88[*param_1 >> 5] >> (*param_1 & 0x1f) & 1;
}



/* ===== wpa_ctrl_get_fd @ 00012a9c size=8 ===== */

undefined4 wpa_ctrl_get_fd(undefined4 *param_1)

{
  return *param_1;
}



/* ===== os_sleep @ 00012aa4 size=52 ===== */

void os_sleep(uint param_1,int param_2)

{
  if (param_1 != 0) {
    sleep(param_1);
  }
  if (param_2 == 0) {
    return;
  }
  (*(code *)PTR_usleep_00026034)(param_2);
  return;
}



/* ===== os_get_time @ 00012acc size=44 ===== */

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



/* ===== os_get_reltime @ 00012af8 size=132 ===== */

undefined4 os_get_reltime(int *param_1,int param_2)

{
  int iVar1;
  clockid_t __clock_id;
  clockid_t *pcVar2;
  timespec local_20;
  
  pcVar2 = (clockid_t *)(DAT_00012b7c + 0x12b14);
  local_20.tv_sec = (__time_t)param_1;
  local_20.tv_nsec = param_2;
  do {
    while( true ) {
      while( true ) {
        __clock_id = *pcVar2;
        iVar1 = clock_gettime(__clock_id,&local_20);
        if (iVar1 == 0) {
          *param_1 = local_20.tv_sec;
          param_1[1] = local_20.tv_nsec / 1000;
          return 0;
        }
        if (__clock_id != 1) break;
        *pcVar2 = 0;
      }
      if (__clock_id != 7) break;
      *pcVar2 = 1;
    }
  } while (__clock_id != 0);
  return 0xffffffff;
}



/* ===== os_mktime @ 00012b80 size=240 ===== */

undefined4
os_mktime(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,int *param_7)

{
  tm *ptVar1;
  int iVar2;
  time_t tVar3;
  time_t tVar4;
  bool bVar5;
  bool bVar6;
  time_t local_40;
  tm local_3c;
  
  local_3c.tm_mon = param_2 - 1;
  if (((0xb < (uint)local_3c.tm_mon || param_1 < 0x7b2) || (0x1e < param_3 - 1U)) ||
     (0x17 < param_4)) {
    return 0xffffffff;
  }
  bVar6 = 0x3b < param_6;
  bVar5 = param_6 == 0x3c;
  if (param_6 < 0x3d) {
    bVar6 = 0x3a < param_5;
    bVar5 = param_5 == 0x3b;
  }
  if (bVar6 && !bVar5) {
    return 0xffffffff;
  }
  local_3c.tm_yday = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_3c.tm_isdst = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_3c.tm_year = param_1 + -0x76c;
  local_3c.tm_wday = 0;
  local_3c.tm_gmtoff = 0;
  local_3c.tm_sec = param_6;
  local_3c.tm_min = param_5;
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
      goto LAB_00012c28;
    }
  }
  iVar2 = 0;
LAB_00012c28:
  *param_7 = local_40 - iVar2;
  return 0;
}



/* ===== os_gmtime @ 00012c70 size=104 ===== */

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



/* ===== os_daemonize @ 00012cd8 size=120 ===== */

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
       (__stream = fopen64(param_1,(char *)(DAT_00012d54 + 0x12d24)), __stream != (FILE *)0x0)) {
      _Var2 = getpid();
      fprintf(__stream,(char *)(DAT_00012d58 + 0x12d44),_Var2);
      fclose(__stream);
    }
  }
  else {
    uVar3 = 0xffffffff;
    perror((char *)(DAT_00012d50 + 0x12d04));
  }
  return uVar3;
}



/* ===== os_daemonize_terminate @ 00012d5c size=12 ===== */

void os_daemonize_terminate(char *param_1)

{
  if (param_1 == (char *)0x0) {
    return;
  }
  unlink(param_1);
  return;
}



/* ===== os_get_random @ 00012d68 size=104 ===== */

undefined4 os_get_random(void *param_1,size_t param_2)

{
  FILE *__stream;
  size_t sVar1;
  undefined4 uVar2;
  
  __stream = fopen64((char *)(DAT_00012dd0 + 0x12d84),(char *)(DAT_00012dd4 + 0x12d88));
  if (__stream == (FILE *)0x0) {
    puts((char *)(DAT_00012dd8 + 0x12d9c));
    return 0xffffffff;
  }
  sVar1 = fread(param_1,1,param_2,__stream);
  fclose(__stream);
  uVar2 = 0;
  if (param_2 != sVar1) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== os_random @ 00012ddc size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long os_random(void)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_random_00026020)();
  return lVar1;
}



/* ===== os_rel2abs_path @ 00012de0 size=236 ===== */

char * os_rel2abs_path(char *param_1)

{
  char *pcVar1;
  char *__s;
  int *piVar2;
  size_t __n;
  char *__dest;
  size_t sVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 != (char *)0x0) {
    if (*param_1 == '/') {
      pcVar1 = strdup(param_1);
      return pcVar1;
    }
    iVar4 = 4;
    sVar3 = 0x80;
    do {
      pcVar1 = malloc(sVar3);
      if (pcVar1 == (char *)0x0) {
        return (char *)0x0;
      }
      __s = getcwd(pcVar1,sVar3);
      if (__s != (char *)0x0) {
        pcVar1[sVar3 - 1] = '\0';
        sVar3 = strlen(__s);
        __n = strlen(param_1);
        __dest = malloc(sVar3 + __n + 2);
        if (__dest != (char *)0x0) {
          memcpy(__dest,__s,sVar3);
          __dest[sVar3] = '/';
          memcpy(__dest + sVar3 + 1,param_1,__n);
          __dest[sVar3 + __n + 1] = '\0';
        }
        free(pcVar1);
        return __dest;
      }
      piVar2 = __errno_location();
      iVar5 = *piVar2;
      free(pcVar1);
      if (iVar5 != 0x22) {
        return (char *)0x0;
      }
      sVar3 = sVar3 << 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return (char *)0x0;
}



/* ===== os_program_init @ 00012ecc size=8 ===== */

undefined4 os_program_init(void)

{
  return 0;
}



/* ===== os_program_deinit @ 00012ed4 size=4 ===== */

void os_program_deinit(void)

{
  return;
}



/* ===== os_setenv @ 00012ed8 size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int os_setenv(char *__name,char *__value,int __replace)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setenv_000260c8)(__name);
  return iVar1;
}



/* ===== os_unsetenv @ 00012edc size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int os_unsetenv(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unsetenv_00026014)(__name);
  return iVar1;
}



/* ===== os_readfile @ 00012ee0 size=196 ===== */

void * os_readfile(char *param_1,size_t *param_2)

{
  FILE *__stream;
  int iVar1;
  size_t sVar2;
  void *__ptr;
  
  __stream = fopen64(param_1,(char *)(DAT_00012fa4 + 0x12ef4));
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



/* ===== os_file_exists @ 00012fa8 size=24 ===== */

bool os_file_exists(char *param_1)

{
  int iVar1;
  
  iVar1 = access(param_1,0);
  return iVar1 == 0;
}



/* ===== os_fdatasync @ 00012fc0 size=56 ===== */

undefined4 os_fdatasync(FILE *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = fflush(param_1);
  if (iVar2 == 0) {
    fileno(param_1);
    uVar1 = (*(code *)PTR_fdatasync_00026090)();
    return uVar1;
  }
  return 0xffffffff;
}



/* ===== os_zalloc @ 00012fec size=24 ===== */

void os_zalloc(undefined4 param_1)

{
  (*(code *)PTR_calloc_0002608c)(1,param_1);
  return;
}



/* ===== os_strlcpy @ 00012ff8 size=144 ===== */

char * os_strlcpy(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = param_2;
  if (param_3 != 0) {
    pcVar4 = param_2 + 1;
    if (param_2 + 1 != param_2 + param_3) {
      do {
        pcVar3 = pcVar4;
        cVar1 = pcVar3[-1];
        pcVar2 = param_1 + 1;
        *param_1 = cVar1;
        if (cVar1 == '\0') goto LAB_0001307c;
        param_1 = pcVar2;
        pcVar4 = pcVar3 + 1;
      } while (pcVar3 + 1 != param_2 + param_3);
      *pcVar2 = '\0';
      pcVar4 = pcVar3;
      do {
        pcVar3 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar3;
      } while (cVar1 != '\0');
LAB_0001307c:
      return pcVar3 + (-1 - (int)param_2);
    }
    *param_1 = '\0';
    pcVar4 = param_2;
  }
  do {
    pcVar2 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar2;
  } while (cVar1 != '\0');
  return pcVar2 + (-1 - (int)param_2);
}



/* ===== os_memcmp_const @ 00013088 size=48 ===== */

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



/* ===== os_exec @ 000130b8 size=288 ===== */

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
    perror((char *)(DAT_000131d8 + 0x130ec));
  }
  else {
    if (__pid == 0) {
      __ptr = strdup(param_1);
      iVar4 = 1;
      __ptr_00 = strdup(param_2);
      pcVar2 = __ptr_00;
      local_a8[0] = __ptr;
      while ((pcVar2 != (char *)0x0 && iVar4 < 0x1e && (*pcVar2 != '\0'))) {
        do {
          pcVar1 = pcVar2;
          pcVar2 = pcVar1 + 1;
        } while (*pcVar1 == ' ');
        if (*pcVar1 == '\0') break;
        local_a8[iVar4] = pcVar1;
        iVar4 = iVar4 + 1;
        pcVar1 = strchr(pcVar1,0x20);
        pcVar2 = pcVar1;
        if (pcVar1 != (char *)0x0) {
          pcVar2 = pcVar1 + 1;
          *pcVar1 = '\0';
        }
      }
      local_a8[iVar4] = (char *)0x0;
      execv(param_1,local_a8);
      perror((char *)(DAT_000131dc + 0x131a4));
      free(__ptr);
      free(__ptr_00);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    uVar3 = 0;
    if (param_3 != 0) {
      uVar3 = 0;
      waitpid(__pid,&iStack_24,0);
    }
  }
  return uVar3;
}



/* ===== FUN_00013210 @ 00013210 size=144 ===== */

int FUN_00013210(char *param_1,int param_2,byte *param_3,int param_4,int param_5)

{
  char *pcVar1;
  char *__s;
  byte *pbVar2;
  char *__format;
  
  if (param_2 == 0) {
    return 0;
  }
  __format = (char *)(DAT_000132a4 + 0x13248);
  if (param_5 == 0) {
    __format = (char *)(DAT_000132a0 + 0x13240);
  }
  __s = param_1;
  pbVar2 = param_3;
  while (pbVar2 != param_3 + param_4) {
    pcVar1 = (char *)snprintf(__s,(size_t)(param_1 + (param_2 - (int)__s)),__format,(uint)*pbVar2);
    if (param_1 + (param_2 - (int)__s) <= pcVar1 || (int)pcVar1 < 0) break;
    __s = __s + (int)pcVar1;
    pbVar2 = pbVar2 + 1;
  }
  param_1[param_2 + -1] = '\0';
  return (int)__s - (int)param_1;
}



/* ===== FUN_000132a8 @ 000132a8 size=64 ===== */

uint FUN_000132a8(int param_1)

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



/* ===== hex2byte @ 000132e8 size=56 ===== */

uint hex2byte(undefined1 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_000132a8(*param_1,param_1);
  if ((-1 < (int)uVar2) &&
     (uVar1 = FUN_000132a8(*(undefined1 *)((int)((ulonglong)uVar2 >> 0x20) + 1)), -1 < (int)uVar1))
  {
    return uVar1 | (int)uVar2 * 0x10;
  }
  return 0xffffffff;
}



/* ===== FUN_00013320 @ 00013320 size=96 ===== */

int FUN_00013320(int param_1,int param_2)

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



/* ===== hwaddr_aton @ 00013380 size=24 ===== */

int hwaddr_aton(void)

{
  int iVar1;
  
  iVar1 = FUN_00013320();
  return -(uint)(iVar1 == 0);
}



/* ===== hwaddr_masked_aton @ 00013398 size=156 ===== */

int hwaddr_masked_aton(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = DAT_00013434;
  pbVar1 = (byte *)FUN_00013320();
  if (pbVar1 != (byte *)0x0) {
    uVar3 = (uint)*pbVar1;
    if ((uVar3 == 0) ||
       ((*(ushort *)(**(int **)(iVar2 + 0x133b4 + DAT_00013438) + uVar3 * 2) & 0x20) != 0)) {
      *param_3 = 0xffffffff;
      *(undefined2 *)(param_3 + 1) = 0xffff;
      return 0;
    }
    if (param_4 != 0 && uVar3 == 0x2f) {
      iVar2 = FUN_00013320(pbVar1 + 1,param_3);
      return -(uint)(iVar2 == 0);
    }
  }
  return -1;
}



/* ===== hwaddr_compact_aton @ 0001343c size=80 ===== */

undefined4 hwaddr_compact_aton(int param_1,byte *param_2)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = param_1 + 2;
  while ((iVar1 = FUN_000132a8(*(undefined1 *)(iVar3 + -2),param_2), -1 < iVar1 &&
         (uVar4 = FUN_000132a8(*(undefined1 *)(iVar3 + -1)),
         pbVar2 = (byte *)((ulonglong)uVar4 >> 0x20), -1 < (int)uVar4))) {
    iVar3 = iVar3 + 2;
    param_2 = pbVar2 + 1;
    *pbVar2 = (byte)uVar4 | (char)iVar1 * '\x10';
    if (param_1 + 0xe == iVar3) {
      return 0;
    }
  }
  return 0xffffffff;
}



/* ===== hwaddr_aton2 @ 0001348c size=104 ===== */

int hwaddr_aton2(byte *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  undefined8 uVar7;
  
  pbVar2 = param_1;
  do {
    do {
      pbVar5 = pbVar2;
      bVar1 = *pbVar5;
      bVar6 = 0x39 < bVar1;
      if (bVar1 != 0x3a) {
        bVar6 = bVar1 != 0x2d;
      }
      pbVar2 = pbVar5 + 1;
    } while (!bVar6 || (bVar1 == 0x3a || bVar1 == 0x2e));
    iVar3 = FUN_000132a8();
    if (iVar3 < 0) {
      return -1;
    }
    uVar7 = FUN_000132a8(pbVar5[1]);
    pbVar4 = (byte *)((ulonglong)uVar7 >> 0x20);
    if ((int)uVar7 < 0) {
      return -1;
    }
    *pbVar4 = (byte)uVar7 | (char)iVar3 * '\x10';
    pbVar2 = pbVar5 + 2;
  } while (pbVar4 + 1 != (byte *)(param_2 + 6));
  return (int)(pbVar5 + 2) - (int)param_1;
}



/* ===== hexstr2bin @ 000134f4 size=64 ===== */

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



/* ===== hwaddr_mask_txt @ 00013534 size=236 ===== */

uint hwaddr_mask_txt(char *param_1,uint param_2,byte *param_3,byte *param_4)

{
  uint uVar1;
  byte *pbVar2;
  
  pbVar2 = param_4 + -1;
  do {
    pbVar2 = pbVar2 + 1;
    if (*pbVar2 != 0xff) {
      snprintf(param_1,param_2,(char *)(DAT_00013624 + 0x1360c),(uint)*param_3,(uint)param_3[1],
               (uint)param_3[2],(uint)param_3[3],(uint)param_3[4],(uint)param_3[5],(uint)*param_4,
               (uint)param_4[1],(uint)param_4[2],(uint)param_4[3],(uint)param_4[4],(uint)param_4[5])
      ;
      uVar1 = 0x23;
      goto LAB_00013610;
    }
  } while (param_4 + 5 != pbVar2);
  snprintf(param_1,param_2,(char *)(DAT_00013620 + 0x13598),(uint)*param_3,(uint)param_3[1],
           (uint)param_3[2],(uint)param_3[3],(uint)param_3[4],(uint)param_3[5]);
  uVar1 = 0x11;
LAB_00013610:
  if (param_2 <= uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== inc_byte_array @ 00013628 size=44 ===== */

void inc_byte_array(uint param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_1 + param_2);
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



/* ===== wpa_get_ntp_timestamp @ 00013654 size=76 ===== */

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
  uVar1 = (int)local_10 + DAT_000136a0;
  *param_1 = uVar1 * 0x1000000 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
             uVar1 >> 0x18;
  param_1[1] = uVar2 * 0x1000000 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
               uVar2 >> 0x18;
  return;
}



/* ===== wpa_scnprintf @ 000136a4 size=72 ===== */

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



/* ===== wpa_snprintf_hex_sep @ 000136ec size=128 ===== */

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
    __format = (char *)(DAT_0001376c + 0x13720);
    __s = param_1;
    pbVar2 = param_3;
    iVar1 = param_2;
    while (pbVar2 != pbVar3) {
      snprintf(__s,(size_t)(param_1 + (param_2 - (int)__s)),__format,(uint)*pbVar2,(uint)param_5,
               iVar1,param_3);
      if (param_1 + (param_2 - (int)__s) < (char *)0x4) {
        param_1[param_2 + -1] = '\0';
        goto LAB_00013758;
      }
      __s = __s + 3;
      pbVar2 = pbVar2 + 1;
    }
    __s[-1] = '\0';
LAB_00013758:
    iVar1 = (int)__s - (int)param_1;
  }
  return iVar1;
}



/* ===== wpa_snprintf_hex @ 00013770 size=24 ===== */

void wpa_snprintf_hex(void)

{
  FUN_00013210();
  return;
}



/* ===== wpa_snprintf_hex_uppercase @ 00013788 size=24 ===== */

void wpa_snprintf_hex_uppercase(void)

{
  FUN_00013210();
  return;
}



/* ===== printf_encode @ 000137a0 size=244 ===== */

void printf_encode(byte *param_1,int param_2,byte *param_3,int param_4)

{
  byte *__s;
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  char *__format;
  
  __format = (char *)(DAT_00013894 + 0x137c4);
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
        if (uVar2 != 0x1b) goto LAB_00013818;
        bVar1 = 0x65;
        *__s = 0x5c;
      }
LAB_0001386c:
      __s[1] = bVar1;
      __s = __s + 2;
    }
    if (uVar2 == 9) {
      bVar1 = 0x74;
      *__s = 0x5c;
      goto LAB_0001386c;
    }
    if (uVar2 == 10) {
      bVar1 = 0x6e;
      *__s = 0x5c;
      goto LAB_0001386c;
    }
LAB_00013818:
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



/* ===== printf_decode @ 00013898 size=344 ===== */

uint printf_decode(int param_1,uint param_2,char *param_3)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  
  uVar4 = 0;
LAB_000138b4:
  while( true ) {
    pcVar5 = param_3;
    cVar3 = *pcVar5;
    if ((cVar3 == '\0') || (uVar6 = uVar4 + 1, param_2 <= uVar6)) {
      if (uVar4 < param_2) {
        *(undefined1 *)(param_1 + uVar4) = 0;
      }
      return uVar4;
    }
    param_3 = pcVar5 + 1;
    if (cVar3 == '\\') break;
LAB_000139e8:
    *(char *)(param_1 + uVar4) = cVar3;
    uVar4 = uVar6;
  }
  bVar2 = pcVar5[1];
  if (bVar2 == 0x65) {
    bVar2 = 0x1b;
LAB_0001393c:
    *(byte *)(param_1 + uVar4) = bVar2;
  }
  else {
    if (bVar2 < 0x66) {
      if (bVar2 < 0x38) {
        if (0x2f < bVar2) {
          cVar3 = bVar2 - 0x30;
          if ((byte)(pcVar5[2] - 0x30U) < 8) {
            param_3 = pcVar5 + 3;
            cVar3 = (pcVar5[2] - 0x30U) + cVar3 * '\b';
          }
          else {
            param_3 = pcVar5 + 2;
          }
          if ((byte)(*param_3 - 0x30U) < 8) {
            cVar3 = *param_3 + -0x30 + cVar3 * '\b';
            param_3 = param_3 + 1;
          }
          goto LAB_000139e8;
        }
        bVar7 = bVar2 == 0x22;
      }
      else {
        bVar7 = bVar2 == 0x5c;
      }
      if (bVar7) goto LAB_0001393c;
      goto LAB_000138b4;
    }
    if (bVar2 == 0x72) {
      *(undefined1 *)(param_1 + uVar4) = 0xd;
    }
    else {
      if (bVar2 < 0x73) {
        if (bVar2 == 0x6e) {
          bVar2 = 10;
          goto LAB_0001393c;
        }
        goto LAB_000138b4;
      }
      if (bVar2 != 0x74) {
        if (bVar2 == 0x78) {
          iVar1 = hex2byte(pcVar5 + 2);
          if (iVar1 < 0) {
            iVar1 = FUN_000132a8(pcVar5[2]);
            param_3 = pcVar5 + 2;
            if (-1 < iVar1) {
              *(char *)(param_1 + uVar4) = (char)iVar1;
              uVar4 = uVar6;
              param_3 = pcVar5 + 3;
            }
          }
          else {
            *(char *)(param_1 + uVar4) = (char)iVar1;
            uVar4 = uVar6;
            param_3 = pcVar5 + 4;
          }
        }
        goto LAB_000138b4;
      }
      *(undefined1 *)(param_1 + uVar4) = 9;
    }
  }
  uVar4 = uVar6;
  param_3 = pcVar5 + 2;
  goto LAB_000138b4;
}



/* ===== wpa_ssid_txt @ 000139f0 size=60 ===== */

int wpa_ssid_txt(int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
    *(undefined1 *)(DAT_00013a2c + 0x13a08) = 0;
  }
  else {
    printf_encode(DAT_00013a34 + 0x13a28,0x81,param_1,param_2);
  }
  return DAT_00013a30 + 0x13a14;
}



/* ===== __hide_aliasing_typecast @ 00013a38 size=4 ===== */

void __hide_aliasing_typecast(void)

{
  return;
}



/* ===== is_hex @ 00013a3c size=44 ===== */

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



/* ===== has_ctrl_char @ 00013a68 size=44 ===== */

undefined4 has_ctrl_char(byte *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  
  pbVar2 = param_1;
  do {
    if (pbVar2 == param_1 + param_2) {
      return 0;
    }
    bVar1 = *pbVar2;
    bVar3 = 0x7e < bVar1;
    if (bVar1 != 0x7f) {
      bVar3 = 0x1e < bVar1;
    }
    pbVar2 = pbVar2 + 1;
  } while (bVar3 && (bVar1 != 0x7f && bVar1 != 0x1f));
  return 1;
}



/* ===== has_newline @ 00013a94 size=36 ===== */

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
  } while (cVar1 != '\r' && cVar1 != '\n');
  return 1;
}



/* ===== merge_byte_arrays @ 00013ab8 size=160 ===== */

uint merge_byte_arrays(void *param_1,uint param_2,void *param_3,size_t param_4,void *param_5,
                      size_t param_6)

{
  size_t __n;
  
  memset(param_1,0,param_2);
  if (param_3 == (void *)0x0) {
    param_4 = 0;
  }
  else {
    __n = param_2;
    if (param_2 <= param_4) goto LAB_00013b2c;
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
LAB_00013b2c:
  memcpy(param_1,param_3,__n);
  return param_2;
}



/* ===== dup_binstr @ 00013b58 size=64 ===== */

void * dup_binstr(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)0x0;
  if ((param_1 != (void *)0x0) && (__dest = malloc(param_2 + 1), __dest != (void *)0x0)) {
    memcpy(__dest,param_1,param_2);
    *(undefined1 *)((int)__dest + param_2) = 0;
  }
  return __dest;
}



/* ===== wpa_config_parse_string @ 00013b98 size=300 ===== */

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
      pvVar2 = (void *)dup_binstr(param_1);
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
          *(undefined1 *)((int)pvVar2 + (sVar6 >> 1)) = 0;
          *param_2 = uVar4;
          return pvVar2;
        }
        free(pvVar2);
      }
    }
  }
  return (void *)0x0;
}



/* ===== freq_range_list_parse @ 00013cc4 size=240 ===== */

undefined4 freq_range_list_parse(undefined4 *param_1,char *param_2)

{
  size_t __size;
  void *pvVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
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
    if ((pcVar3 != (char *)0x0) && (param_2 == (char *)0x0 || pcVar3 < param_2)) {
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



/* ===== freq_range_list_includes @ 00013db4 size=96 ===== */

undefined4 freq_range_list_includes(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = 0;
  if (param_1[1] != 0) {
    while ((param_2 < *(uint *)(*param_1 + iVar1 * 8) ||
           (*(uint *)(*param_1 + iVar1 * 8 + 4) < param_2))) {
      iVar1 = iVar1 + 1;
      if (param_1[1] == iVar1) {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}



/* ===== freq_range_list_str @ 00013e14 size=272 ===== */

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
      uVar5 = 0;
      __format = (char *)(DAT_00013f24 + 0x13e74);
      iVar6 = DAT_00013f28 + 0x13e78;
      iVar7 = DAT_00013f2c + 0x13e7c;
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
            iVar2 = DAT_00013f38 + 0x13ef0;
          }
          else {
            iVar2 = DAT_00013f30 + 0x13ebc;
          }
          pcVar1 = (char *)snprintf(__s,(size_t)__maxlen,(char *)(DAT_00013f34 + 0x13ed0),iVar2,
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



/* ===== int_array_len @ 00013f3c size=40 ===== */

int int_array_len(int param_1)

{
  int iVar1;
  
  for (iVar1 = 0; (param_1 != 0 && (*(int *)(param_1 + iVar1 * 4) != 0)); iVar1 = iVar1 + 1) {
  }
  return iVar1;
}



/* ===== int_array_concat @ 00013f64 size=128 ===== */

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
    return;
  }
  free((void *)*param_1);
  *param_1 = 0;
  return;
}



/* ===== int_array_sort_unique @ 00013fe4 size=112 ===== */

void int_array_sort_unique(int *param_1)

{
  size_t __nmemb;
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  __nmemb = int_array_len();
  qsort(param_1,__nmemb,4,(__compar_fn_t)(DAT_00014054 + 0x1400c));
  piVar1 = param_1;
  iVar3 = 0;
  do {
    if (param_1[iVar3] == 0) {
LAB_00014034:
      param_1[iVar3] = 0;
      return;
    }
    piVar1 = piVar1 + 1;
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      iVar3 = iVar3 + 1;
      goto LAB_00014034;
    }
    if (param_1[iVar3] != iVar2) {
      param_1[iVar3 + 1] = iVar2;
      iVar3 = iVar3 + 1;
    }
  } while( true );
}



/* ===== int_array_add_unique @ 00014058 size=124 ===== */

void int_array_add_unique(undefined4 *param_1,int param_2)

{
  size_t __size;
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  pvVar1 = (void *)*param_1;
  for (iVar3 = 0; (pvVar1 != (void *)0x0 && (iVar2 = *(int *)((int)pvVar1 + iVar3 * 4), iVar2 != 0))
      ; iVar3 = iVar3 + 1) {
    if (iVar2 == param_2) {
      return;
    }
  }
  if (iVar3 + 2U >> 0x1e == 0) {
    __size = (iVar3 + 2U) * 4;
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



/* ===== str_clear_free @ 000140d4 size=12 ===== */

void str_clear_free(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  free(param_1);
  return;
}



/* ===== bin_clear_free @ 000140e0 size=12 ===== */

void bin_clear_free(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  free(param_1);
  return;
}



/* ===== random_mac_addr @ 000140ec size=48 ===== */

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



/* ===== random_mac_addr_keep_oui @ 0001411c size=52 ===== */

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



/* ===== cstr_token @ 00014150 size=144 ===== */

byte * cstr_token(byte *param_1,char *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  char *pcVar2;
  byte *pbVar3;
  byte *unaff_r7;
  
  if (param_1 == (byte *)0x0 || (param_2 == (char *)0x0 || param_3 == (undefined4 *)0x0)) {
    unaff_r7 = (byte *)0x0;
  }
  if (param_1 != (byte *)0x0 && (param_2 != (char *)0x0 && param_3 != (undefined4 *)0x0)) {
    pbVar1 = (byte *)*param_3;
    if ((byte *)*param_3 == (byte *)0x0) {
      pbVar1 = param_1;
    }
    do {
      unaff_r7 = pbVar1;
      if (*unaff_r7 == 0) {
        return (byte *)0x0;
      }
      pcVar2 = strchr(param_2,(uint)*unaff_r7);
      pbVar1 = unaff_r7 + 1;
    } while (pcVar2 != (char *)0x0);
    do {
      pbVar3 = pbVar1;
      if (*pbVar3 == 0) break;
      pcVar2 = strchr(param_2,(uint)*pbVar3);
      pbVar1 = pbVar3 + 1;
    } while (pcVar2 == (char *)0x0);
    *param_3 = pbVar3;
  }
  return unaff_r7;
}



/* ===== str_token @ 000141e0 size=52 ===== */

void str_token(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = cstr_token();
  if (iVar1 != 0) {
    pcVar2 = (char *)*param_3;
    if (*pcVar2 != '\0') {
      *param_3 = pcVar2 + 1;
      *pcVar2 = '\0';
    }
    return;
  }
  return;
}



/* ===== utf8_unescape @ 00014214 size=196 ===== */

uint utf8_unescape(char *param_1,size_t param_2,char *param_3,uint param_4)

{
  size_t sVar1;
  uint uVar2;
  
  if (param_3 == (char *)0x0 || param_1 == (char *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    param_2 = strlen(param_1);
  }
  if ((*param_1 == '\'') && (param_2 != 0)) {
    param_1 = param_1 + 1;
    param_2 = param_2 - 1;
  }
  uVar2 = 0;
  while( true ) {
    if (param_2 == 0) {
      if (uVar2 < param_4) {
        *param_3 = '\0';
      }
      return uVar2;
    }
    if (uVar2 == param_4) break;
    if (*param_1 == '\'') {
      *param_3 = '\0';
      return uVar2;
    }
    sVar1 = param_2 - 1;
    if (*param_1 == '\\') {
      if (param_2 - 1 == 0) {
        return 0;
      }
      param_1 = param_1 + 1;
      sVar1 = param_2 - 2;
    }
    param_2 = sVar1;
    uVar2 = uVar2 + 1;
    *param_3 = *param_1;
    param_1 = param_1 + 1;
    param_3 = param_3 + 1;
  }
  return 0;
}



/* ===== utf8_escape @ 000142d8 size=164 ===== */

uint utf8_escape(char *param_1,size_t param_2,char *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (param_3 == (char *)0x0 || param_1 == (char *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    param_2 = strlen(param_1);
  }
  uVar2 = 0;
  pcVar4 = param_1;
  while( true ) {
    if (param_1 + param_2 == pcVar4) {
      if (uVar2 < param_4) {
        *param_3 = '\0';
      }
      return uVar2;
    }
    if (param_4 <= uVar2) break;
    if ((*pcVar4 == '\'') || (uVar1 = uVar2 + 1, pcVar3 = param_3, *pcVar4 == '\\')) {
      if (param_4 <= uVar2 + 1) {
        return 0;
      }
      pcVar3 = param_3 + 1;
      *param_3 = '\\';
      uVar1 = uVar2 + 2;
    }
    uVar2 = uVar1;
    param_3 = pcVar3 + 1;
    *pcVar3 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  }
  return 0;
}



/* ===== is_ctrl_char @ 0001437c size=20 ===== */

bool is_ctrl_char(int param_1)

{
  return param_1 - 1U < 0x1f;
}



/* ===== ssid_parse @ 00014390 size=180 ===== */

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
LAB_0001443c:
    iVar2 = -1;
  }
  else {
    if (*__s == '\"') {
      pcVar1 = strchr(__s + 1,0x22);
      if (pcVar1 == (char *)0x0) {
        free(__s);
        goto LAB_0001443c;
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



/* ===== str_starts @ 00014444 size=48 ===== */

bool str_starts(char *param_1,char *param_2)

{
  size_t __n;
  int iVar1;
  
  __n = strlen(param_2);
  iVar1 = strncmp(param_1,param_2,__n);
  return iVar1 == 0;
}



/* ===== wpa_debug_print_timestamp @ 00014474 size=100 ===== */

void wpa_debug_print_timestamp(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (**(int **)(DAT_000144d8 + 0x14484 + DAT_000144dc) != 0) {
    local_10 = param_1;
    uStack_c = param_2;
    uStack_8 = param_3;
    os_get_time(&local_10);
    if (*(FILE **)(DAT_000144e0 + 0x144a8) == (FILE *)0x0) {
      printf((char *)(DAT_000144e8 + 0x144d4),local_10,uStack_c);
    }
    else {
      fprintf(*(FILE **)(DAT_000144e0 + 0x144a8),(char *)(DAT_000144e4 + 0x144bc),local_10,uStack_c)
      ;
    }
  }
  return;
}



/* ===== wpa_printf @ 0001493c size=132 ===== */

void wpa_printf(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  FILE *__s;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = DAT_000149c8;
  if (**(int **)(DAT_000149c0 + 0x14954 + DAT_000149c4) <= param_1) {
    uStack_8 = param_3;
    uStack_4 = param_4;
    wpa_debug_print_timestamp();
    __s = *(FILE **)(iVar1 + 0x14978);
    if (__s == (FILE *)0x0) {
      vprintf(param_2,&uStack_8);
      putchar(10);
    }
    else {
      vfprintf(__s,param_2,&uStack_8);
      fputc(10,*(FILE **)(iVar1 + 0x14978));
    }
  }
  return;
}



/* ===== wpa_hexdump @ 000149cc size=60 ===== */

/* WARNING: Removing unreachable block (ram,0x0001458c) */
/* WARNING: Removing unreachable block (ram,0x00014600) */

void wpa_hexdump(int param_1,undefined4 param_2,byte *param_3,int param_4)

{
  byte *pbVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  if (param_1 < **(int **)(DAT_00014a08 + 0x149e8 + DAT_00014a0c)) {
    return;
  }
  puVar2 = (undefined4 *)(DAT_0001460c + 0x1450c);
  wpa_debug_print_timestamp();
  if ((FILE *)*puVar2 != (FILE *)0x0) {
    fprintf((FILE *)*puVar2,(char *)(DAT_00014610 + 0x1452c),param_2,param_4);
    if (param_3 == (byte *)0x0) {
      fputs((char *)(DAT_00014614 + 0x14544),(FILE *)*puVar2);
    }
    else {
      pbVar1 = param_3 + param_4;
      pcVar3 = (char *)(DAT_00014618 + 0x14560);
      for (; param_3 != pbVar1; param_3 = param_3 + 1) {
        fprintf((FILE *)*puVar2,pcVar3,(uint)*param_3);
      }
    }
    fputc(10,*(FILE **)(&LAB_0001457c + DAT_0001461c));
    return;
  }
  printf((char *)(DAT_00014624 + 0x145b0),param_2,param_4);
  if (param_3 == (byte *)0x0) {
    printf((char *)(DAT_00014628 + 0x145c4));
  }
  else {
    pbVar1 = param_3 + param_4;
    pcVar3 = (char *)(DAT_0001462c + 0x145e0);
    for (; param_3 != pbVar1; param_3 = param_3 + 1) {
      printf(pcVar3,(uint)*param_3);
    }
  }
  putchar(10);
  return;
}



/* ===== wpa_hexdump_key @ 00014a10 size=68 ===== */

void wpa_hexdump_key(int param_1,undefined4 param_2,byte *param_3,int param_4)

{
  char *pcVar1;
  FILE *__stream;
  int iVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  
  if (param_1 < **(int **)(DAT_00014a54 + 0x14a2c + DAT_00014a58)) {
    return;
  }
  iVar2 = **(int **)(DAT_00014a54 + 0x14a2c + DAT_00014a5c);
  puVar4 = (undefined4 *)(DAT_0001460c + 0x1450c);
  wpa_debug_print_timestamp();
  if ((FILE *)*puVar4 == (FILE *)0x0) {
    printf((char *)(DAT_00014624 + 0x145b0),param_2,param_4);
    if (param_3 == (byte *)0x0) {
      pcVar1 = (char *)(DAT_00014628 + 0x145c4);
    }
    else {
      if (iVar2 != 0) {
        pbVar3 = param_3 + param_4;
        pcVar1 = (char *)(DAT_0001462c + 0x145e0);
        for (; param_3 != pbVar3; param_3 = param_3 + 1) {
          printf(pcVar1,(uint)*param_3);
        }
        goto LAB_000145e4;
      }
      pcVar1 = (char *)((int)&DAT_0001460c + DAT_00014630);
    }
    printf(pcVar1);
LAB_000145e4:
    putchar(10);
    return;
  }
  fprintf((FILE *)*puVar4,(char *)(DAT_00014610 + 0x1452c),param_2,param_4);
  if (param_3 == (byte *)0x0) {
    __stream = (FILE *)*puVar4;
    pcVar1 = (char *)(DAT_00014614 + 0x14544);
  }
  else {
    if (iVar2 != 0) {
      pbVar3 = param_3 + param_4;
      pcVar1 = (char *)(DAT_00014618 + 0x14560);
      for (; param_3 != pbVar3; param_3 = param_3 + 1) {
        fprintf((FILE *)*puVar4,pcVar1,(uint)*param_3);
      }
      goto LAB_00014568;
    }
    __stream = (FILE *)*puVar4;
    pcVar1 = &LAB_0001459c + DAT_00014620;
  }
  fputs(pcVar1,__stream);
LAB_00014568:
  fputc(10,*(FILE **)(&LAB_0001457c + DAT_0001461c));
  return;
}



/* ===== wpa_hexdump_ascii @ 00014a60 size=60 ===== */

/* WARNING: Removing unreachable block (ram,0x00014674) */
/* WARNING: Removing unreachable block (ram,0x000147d8) */

void wpa_hexdump_ascii(int param_1,undefined4 param_2,byte *param_3,uint param_4)

{
  int iVar1;
  FILE *__stream;
  uint uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined4 uVar14;
  
  if (param_1 < **(int **)(DAT_00014a9c + 0x14a7c + DAT_00014aa0)) {
    return;
  }
  uVar7 = 1;
  iVar8 = DAT_000148e4 + 0x14654;
  uVar14 = param_2;
  pbVar6 = param_3;
  uVar2 = param_4;
  wpa_debug_print_timestamp();
  iVar1 = DAT_00014930;
  __stream = *(FILE **)(DAT_000148e8 + 0x14660);
  if (__stream == (FILE *)0x0) {
    if (param_3 == (byte *)0x0) {
      printf((char *)(DAT_00014924 + 0x147fc),param_2,param_4);
      return;
    }
    pcVar11 = (char *)(DAT_0001492c + 0x14814);
    printf((char *)(DAT_00014928 + 0x14810),param_2,param_4,DAT_000148e8,uVar14,pbVar6,uVar2);
    for (; param_4 != 0; param_4 = param_4 - uVar7) {
      uVar7 = param_4;
      if (0xf < param_4) {
        uVar7 = 0x10;
      }
      pbVar5 = param_3 + uVar7;
      printf(pcVar11);
      pcVar4 = (char *)(DAT_00014934 + 0x14848);
      pbVar6 = param_3;
      do {
        pbVar9 = pbVar6 + 1;
        printf(pcVar4,(uint)*pbVar6);
        uVar2 = uVar7;
        pbVar6 = pbVar9;
      } while (pbVar5 != pbVar9);
      for (; uVar2 != 0x10; uVar2 = uVar2 + 1) {
        printf((char *)(iVar1 + 0x1481c));
      }
      printf((char *)(DAT_00014938 + 0x14878));
      piVar13 = *(int **)(iVar8 + DAT_00014918);
      do {
        pbVar6 = param_3 + 1;
        uVar2 = (uint)*param_3;
        if ((*(ushort *)(*piVar13 + uVar2 * 2) & 0x40) == 0) {
          uVar2 = 0x5f;
        }
        putchar(uVar2);
        uVar2 = uVar7;
        param_3 = pbVar6;
      } while (pbVar5 != pbVar6);
      for (; uVar2 != 0x10; uVar2 = uVar2 + 1) {
        putchar(0x20);
      }
      putchar(10);
      param_3 = pbVar5;
    }
  }
  else {
    if (param_3 == (byte *)0x0) {
      fprintf(__stream,(char *)(DAT_000148f0 + 0x14698),param_2,param_4);
      return;
    }
    pcVar11 = (char *)(DAT_000148f8 + 0x146ac);
    fprintf(__stream,(char *)(DAT_000148f4 + 0x146a8),param_2,param_4);
    puVar3 = (undefined4 *)(&LAB_000146b8 + DAT_000148fc);
    for (; iVar1 = DAT_00014904, param_4 != 0; param_4 = param_4 - uVar7) {
      if (param_4 < 0x10) {
        uVar7 = param_4;
      }
      if (param_4 >= 0x10) {
        uVar7 = 0x10;
      }
      fputs((char *)(DAT_00014900 + 0x146e8),(FILE *)*puVar3);
      pbVar5 = param_3 + uVar7;
      pcVar4 = &LAB_00014704 + DAT_00014908;
      pbVar6 = param_3;
      do {
        pbVar9 = pbVar6 + 1;
        fprintf(*(FILE **)(iVar1 + 0x14708),pcVar4,(uint)*pbVar6);
        pbVar6 = pbVar9;
      } while (pbVar5 != pbVar9);
      puVar12 = (undefined4 *)(DAT_0001490c + 0x14734);
      for (uVar2 = uVar7; uVar2 != 0x10; uVar2 = uVar2 + 1) {
        fputs(pcVar11,(FILE *)*puVar12);
      }
      puVar10 = (undefined4 *)(DAT_00014914 + 0x14750);
      fputs((char *)(DAT_00014910 + 0x1474c),(FILE *)*puVar12);
      piVar13 = *(int **)(iVar8 + DAT_00014918);
      do {
        pbVar6 = param_3 + 1;
        uVar2 = (uint)*param_3;
        if ((*(ushort *)(*piVar13 + uVar2 * 2) & 0x40) == 0) {
          uVar2 = 0x5f;
        }
        fputc(uVar2,(FILE *)*puVar10);
        param_3 = pbVar6;
      } while (pbVar5 != pbVar6);
      puVar12 = (undefined4 *)(DAT_0001491c + 0x14790);
      for (uVar2 = uVar7; uVar2 != 0x10; uVar2 = uVar2 + 1) {
        fputc(0x20,(FILE *)*puVar12);
      }
      fputc(10,(FILE *)*puVar12);
      param_3 = pbVar5;
    }
  }
  return;
}



/* ===== wpa_hexdump_ascii_key @ 00014aa4 size=68 ===== */

void wpa_hexdump_ascii_key(int param_1,undefined4 param_2,byte *param_3,uint param_4)

{
  int iVar1;
  FILE *__stream;
  uint uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  char *pcVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined4 uVar14;
  
  if (param_1 < **(int **)(DAT_00014ae8 + 0x14ac0 + DAT_00014aec)) {
    return;
  }
  uVar6 = **(uint **)(DAT_00014ae8 + 0x14ac0 + DAT_00014af0);
  iVar9 = DAT_000148e4 + 0x14654;
  uVar14 = param_2;
  pbVar8 = param_3;
  uVar2 = param_4;
  wpa_debug_print_timestamp();
  iVar1 = DAT_00014930;
  __stream = *(FILE **)(DAT_000148e8 + 0x14660);
  if (__stream == (FILE *)0x0) {
    if (uVar6 == 0) {
      pcVar3 = (char *)(DAT_00014920 + 0x147e4);
    }
    else {
      if (param_3 != (byte *)0x0) {
        pcVar3 = (char *)(DAT_0001492c + 0x14814);
        printf((char *)(DAT_00014928 + 0x14810),param_2,param_4,DAT_000148e8,uVar14,pbVar8,uVar2);
        for (; param_4 != 0; param_4 = param_4 - uVar6) {
          uVar6 = param_4;
          if (0xf < param_4) {
            uVar6 = 0x10;
          }
          pbVar7 = param_3 + uVar6;
          printf(pcVar3);
          pcVar5 = (char *)(DAT_00014934 + 0x14848);
          pbVar8 = param_3;
          do {
            pbVar10 = pbVar8 + 1;
            printf(pcVar5,(uint)*pbVar8);
            uVar2 = uVar6;
            pbVar8 = pbVar10;
          } while (pbVar7 != pbVar10);
          for (; uVar2 != 0x10; uVar2 = uVar2 + 1) {
            printf((char *)(iVar1 + 0x1481c));
          }
          printf((char *)(DAT_00014938 + 0x14878));
          piVar13 = *(int **)(iVar9 + DAT_00014918);
          do {
            pbVar8 = param_3 + 1;
            uVar2 = (uint)*param_3;
            if ((*(ushort *)(*piVar13 + uVar2 * 2) & 0x40) == 0) {
              uVar2 = 0x5f;
            }
            putchar(uVar2);
            uVar2 = uVar6;
            param_3 = pbVar8;
          } while (pbVar7 != pbVar8);
          for (; uVar2 != 0x10; uVar2 = uVar2 + 1) {
            putchar(0x20);
          }
          putchar(10);
          param_3 = pbVar7;
        }
        return;
      }
      pcVar3 = (char *)(DAT_00014924 + 0x147fc);
    }
    printf(pcVar3,param_2,param_4);
    return;
  }
  if (uVar6 == 0) {
    pcVar3 = (char *)(DAT_000148ec + 0x14680);
  }
  else {
    if (param_3 != (byte *)0x0) {
      pcVar3 = (char *)(DAT_000148f8 + 0x146ac);
      fprintf(__stream,(char *)(DAT_000148f4 + 0x146a8),param_2,param_4);
      puVar4 = (undefined4 *)(&LAB_000146b8 + DAT_000148fc);
      for (; iVar1 = DAT_00014904, param_4 != 0; param_4 = param_4 - uVar6) {
        if (param_4 < 0x10) {
          uVar6 = param_4;
        }
        if (param_4 >= 0x10) {
          uVar6 = 0x10;
        }
        fputs((char *)(DAT_00014900 + 0x146e8),(FILE *)*puVar4);
        pbVar7 = param_3 + uVar6;
        pcVar5 = &LAB_00014704 + DAT_00014908;
        pbVar8 = param_3;
        do {
          pbVar10 = pbVar8 + 1;
          fprintf(*(FILE **)(iVar1 + 0x14708),pcVar5,(uint)*pbVar8);
          pbVar8 = pbVar10;
        } while (pbVar7 != pbVar10);
        puVar12 = (undefined4 *)(DAT_0001490c + 0x14734);
        for (uVar2 = uVar6; uVar2 != 0x10; uVar2 = uVar2 + 1) {
          fputs(pcVar3,(FILE *)*puVar12);
        }
        puVar11 = (undefined4 *)(DAT_00014914 + 0x14750);
        fputs((char *)(DAT_00014910 + 0x1474c),(FILE *)*puVar12);
        piVar13 = *(int **)(iVar9 + DAT_00014918);
        do {
          pbVar8 = param_3 + 1;
          uVar2 = (uint)*param_3;
          if ((*(ushort *)(*piVar13 + uVar2 * 2) & 0x40) == 0) {
            uVar2 = 0x5f;
          }
          fputc(uVar2,(FILE *)*puVar11);
          param_3 = pbVar8;
        } while (pbVar7 != pbVar8);
        puVar12 = (undefined4 *)(DAT_0001491c + 0x14790);
        for (uVar2 = uVar6; uVar2 != 0x10; uVar2 = uVar2 + 1) {
          fputc(0x20,(FILE *)*puVar12);
        }
        fputc(10,(FILE *)*puVar12);
        param_3 = pbVar7;
      }
      return;
    }
    pcVar3 = (char *)(DAT_000148f0 + 0x14698);
  }
  fprintf(__stream,pcVar3,param_2,param_4);
  return;
}



/* ===== wpa_debug_open_file @ 00014af4 size=168 ===== */

undefined4 wpa_debug_open_file(char *param_1)

{
  int iVar1;
  FILE *__stream;
  char *pcVar2;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  pcVar2 = *(char **)(DAT_00014b9c + 0x14b14);
  if ((pcVar2 == (char *)0x0) || (iVar1 = strcmp(pcVar2,param_1), iVar1 != 0)) {
    free(pcVar2);
    pcVar2 = strdup(param_1);
    *(char **)(DAT_00014ba0 + 0x14b4c) = pcVar2;
  }
  __stream = fopen64(param_1,(char *)(DAT_00014ba4 + 0x14b58));
  *(FILE **)(DAT_00014ba8 + 0x14b68) = __stream;
  if (__stream == (FILE *)0x0) {
    wpa_printf(5,DAT_00014bac + 0x14b7c);
    return 0xffffffff;
  }
  setvbuf(__stream,(char *)0x0,1,0);
  return 0;
}



/* ===== wpa_debug_close_file @ 00014bb0 size=52 ===== */

void wpa_debug_close_file(void)

{
  int iVar1;
  FILE *__stream;
  void *__ptr;
  undefined4 *puVar2;
  
  iVar1 = DAT_00014be4;
  puVar2 = (undefined4 *)(DAT_00014be4 + 0x14bc0);
  __stream = (FILE *)*puVar2;
  if (__stream == (FILE *)0x0) {
    return;
  }
  fclose(__stream);
  __ptr = *(void **)(iVar1 + 0x14bc4);
  *puVar2 = 0;
  free(__ptr);
  *(undefined4 *)(iVar1 + 0x14bc4) = 0;
  return;
}



/* ===== wpa_debug_reopen_file @ 00014be8 size=76 ===== */

undefined4 wpa_debug_reopen_file(void)

{
  char *__ptr;
  undefined4 uVar1;
  
  if (*(char **)(DAT_00014c34 + 0x14bfc) == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    __ptr = strdup(*(char **)(DAT_00014c34 + 0x14bfc));
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



/* ===== wpa_debug_setup_stdout @ 00014c38 size=36 ===== */

void wpa_debug_setup_stdout(void)

{
  setvbuf((FILE *)**(undefined4 **)(DAT_00014c5c + 0x14c48 + DAT_00014c60),(char *)0x0,1,0);
  return;
}



/* ===== wpa_msg_register_cb @ 00014c64 size=16 ===== */

void wpa_msg_register_cb(undefined4 param_1)

{
  *(undefined4 *)(wpa_msg_register_ifname_cb + DAT_00014c74) = param_1;
  return;
}



/* ===== wpa_msg_register_ifname_cb @ 00014c78 size=16 ===== */

void wpa_msg_register_ifname_cb(undefined4 param_1)

{
  *(undefined4 *)(wpa_msg + DAT_00014c88 + 4) = param_1;
  return;
}



/* ===== wpa_msg @ 00014c8c size=288 ===== */

void wpa_msg(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  char *__s;
  uint uVar2;
  size_t __size;
  char local_ac [136];
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  iVar1 = vsnprintf((char *)0x0,0,param_3,&uStack_4);
  __size = iVar1 + 1;
  __s = malloc(__size);
  if (__s == (char *)0x0) {
    wpa_printf(5,DAT_00014dac + 0x14ce0);
  }
  else {
    local_ac[0] = '\0';
    if (((*(code **)(DAT_00014db0 + 0x14d14) != (code *)0x0) &&
        (iVar1 = (**(code **)(DAT_00014db0 + 0x14d14))(param_1), iVar1 != 0)) &&
       (uVar2 = snprintf(local_ac,0x82,(char *)(DAT_00014db4 + 0x14d38)), 0x81 < uVar2)) {
      local_ac[0] = '\0';
    }
    iVar1 = vsnprintf(__s,__size,param_3,&uStack_4);
    wpa_printf(param_2,DAT_00014db8 + 0x14d6c,local_ac,__s);
    if (*(code **)(DAT_00014dbc + 0x14d84) != (code *)0x0) {
      (**(code **)(DAT_00014dbc + 0x14d84))(param_1,param_2,0,__s,iVar1);
    }
    bin_clear_free(__s,__size);
  }
  return;
}



/* ===== wpa_msg_ctrl @ 00014dc0 size=184 ===== */

void wpa_msg_ctrl(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  char *__s;
  size_t __size;
  undefined4 uStack_4;
  
  iVar1 = DAT_00014e78;
  if (*(int *)(DAT_00014e78 + 0x14de0) != 0) {
    uStack_4 = param_4;
    iVar2 = vsnprintf((char *)0x0,0,param_3,&uStack_4);
    __size = iVar2 + 1;
    __s = malloc(__size);
    if (__s == (char *)0x0) {
      wpa_printf(5,DAT_00014e7c + 0x14e28);
    }
    else {
      iVar2 = vsnprintf(__s,__size,param_3,&uStack_4);
      (**(code **)(iVar1 + 0x14de0))(param_1,param_2,0,__s,iVar2);
      bin_clear_free(__s,__size);
    }
  }
  return;
}



/* ===== wpa_msg_global @ 00014e80 size=204 ===== */

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
    wpa_printf(5,DAT_00014f4c + 0x14ed4);
  }
  else {
    iVar1 = vsnprintf(__s,__size,param_3,&uStack_4);
    wpa_printf(param_2,DAT_00014f50 + 0x14f10,__s);
    if (*(code **)(DAT_00014f54 + 0x14f24) != (code *)0x0) {
      (**(code **)(DAT_00014f54 + 0x14f24))(param_1,param_2,1,__s,iVar1);
    }
    bin_clear_free(__s,__size);
  }
  return;
}



/* ===== wpa_msg_global_ctrl @ 00014f58 size=184 ===== */

void wpa_msg_global_ctrl(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  char *__s;
  size_t __size;
  undefined4 uStack_4;
  
  iVar1 = DAT_00015010;
  if (*(int *)(DAT_00015010 + 0x14f78) != 0) {
    uStack_4 = param_4;
    iVar2 = vsnprintf((char *)0x0,0,param_3,&uStack_4);
    __size = iVar2 + 1;
    __s = malloc(__size);
    if (__s == (char *)0x0) {
      wpa_printf(5,DAT_00015014 + 0x14fc0);
    }
    else {
      iVar2 = vsnprintf(__s,__size,param_3,&uStack_4);
      (**(code **)(iVar1 + 0x14f78))(param_1,param_2,1,__s,iVar2);
      bin_clear_free(__s,__size);
    }
  }
  return;
}



/* ===== wpa_msg_no_global @ 00015018 size=204 ===== */

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
    wpa_printf(5,DAT_000150e4 + 0x1506c);
  }
  else {
    iVar1 = vsnprintf(__s,__size,param_3,&uStack_4);
    wpa_printf(param_2,DAT_000150e8 + 0x150a8,__s);
    if (*(code **)(DAT_000150ec + 0x150bc) != (code *)0x0) {
      (**(code **)(DAT_000150ec + 0x150bc))(param_1,param_2,2,__s,iVar1);
    }
    bin_clear_free(__s,__size);
  }
  return;
}



/* ===== wpa_msg_global_only @ 000150f0 size=204 ===== */

void wpa_msg_global_only(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  char *__s;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *__arg;
  undefined4 uStack_4;
  
  __arg = &uStack_4;
  uVar2 = param_2;
  pcVar3 = param_3;
  uStack_4 = param_4;
  iVar1 = vsnprintf((char *)0x0,0,param_3,__arg);
  __s = malloc(iVar1 + 1U);
  if (__s == (char *)0x0) {
    wpa_printf(5,DAT_000151c0 + 0x15148,DAT_000151bc + 0x15144);
  }
  else {
    iVar1 = vsnprintf(__s,iVar1 + 1U,param_3,__arg);
    wpa_printf(param_2,DAT_000151c4 + 0x15184,__s);
    if (*(code **)(DAT_000151c8 + 0x15198) != (code *)0x0) {
      (**(code **)(DAT_000151c8 + 0x15198))(param_1,param_2,3,__s,iVar1,uVar2,pcVar3,__arg);
    }
    free(__s);
  }
  return;
}



/* ===== hostapd_logger_register_cb @ 000151cc size=16 ===== */

void hostapd_logger_register_cb(undefined4 param_1)

{
  *(undefined4 *)(DAT_000151dc + 0x151e8) = param_1;
  return;
}



/* ===== hostapd_logger @ 000151e0 size=276 ===== */

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
    wpa_printf(5,DAT_000152f4 + 0x15238);
  }
  else {
    iVar1 = vsnprintf(__s,__size,param_5,&stack0x00000004);
    if (*(code **)(DAT_000152f8 + 0x15270) == (code *)0x0) {
      if (param_2 == (undefined1 *)0x0) {
        wpa_printf(2,DAT_00015300 + 0x152f0,__s);
      }
      else {
        wpa_printf(2,DAT_000152fc + 0x152d0,*param_2,param_2[1],param_2[2],param_2[3],param_2[4],
                   param_2[5],__s);
      }
    }
    else {
      (**(code **)(DAT_000152f8 + 0x15270))(param_1,param_2,param_3,param_4,__s,iVar1);
    }
    bin_clear_free(__s,__size);
  }
  return;
}



/* ===== debug_level_str @ 00015304 size=120 ===== */

int debug_level_str(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return (int)&DAT_0001537c + DAT_00015394;
  case 1:
    return DAT_0001537c + 0x15334;
  case 2:
    return DAT_00015380 + 0x15340;
  case 3:
    return DAT_00015384 + 0x1534c;
  case 4:
    return DAT_00015388 + 0x15358;
  case 5:
    return DAT_0001538c + 0x15364;
  default:
    return DAT_00015390 + 0x15370;
  }
}



/* ===== str_to_debug_level @ 00015398 size=188 ===== */

undefined4 str_to_debug_level(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcasecmp(param_1,(char *)(DAT_00015454 + 0x153ac));
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = strcasecmp(param_1,(char *)(DAT_00015458 + 0x153c4));
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = strcasecmp(param_1,(char *)(DAT_0001545c + 0x153dc));
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = strcasecmp(param_1,(char *)(DAT_00015460 + 0x153f4));
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = strcasecmp(param_1,(char *)(DAT_00015464 + 0x1540c));
  if (iVar1 == 0) {
    return 4;
  }
  iVar1 = strcasecmp(param_1,(char *)(DAT_00015468 + 0x15424));
  if (iVar1 == 0) {
    uVar2 = 5;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== _fini @ 0001546c size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::putchar @ 00027000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clock_gettime @ 00027004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unsetenv @ 00027008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unsetenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::waitpid @ 0002700c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00027010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::random @ 00027018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long random(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::recv @ 0002701c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::connect @ 00027020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 00027024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 0002702c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpid @ 00027030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::qsort @ 00027034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fcntl64 @ 00027038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void fcntl64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0002703c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setvbuf @ 00027040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setvbuf(FILE *__stream,char *__buf,int __modes,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 00027044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00027048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 0002704c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00027050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 00027054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vsnprintf @ 00027058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::socket @ 0002705c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::select @ 00027060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 00027064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::send @ 00027068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 0002706c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 00027070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fdatasync @ 00027074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fdatasync(int __fildes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00027078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::bind @ 0002707c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vprintf @ 00027080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vprintf(char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00027084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fseek @ 00027088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 0002708c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mktime @ 00027090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00027094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unlink @ 00027098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setenv @ 0002709c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcasecmp @ 000270a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 000270a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 000270a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fork @ 000270ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::execv @ 000270b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execv(char *__path,char **__argv)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 000270b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 000270b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strdup @ 000270bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 000270c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::localtime @ 000270c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 000270c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ftell @ 000270cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long ftell(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 000270d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 000270d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getcwd @ 000270d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getcwd(char *__buf,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 000270dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::access @ 000270e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 000270e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 000270e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 000270ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fileno @ 000270f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gmtime @ 000270f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * gmtime(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::daemon @ 000270f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int daemon(int __nochdir,int __noclose)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 000270fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 00027100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 00027104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00027108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0002710c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vfprintf @ 00027110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00027114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 00027118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


