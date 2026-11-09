// v4l2-ctl — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00011f60 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::std::__cxx11::string::_M_construct @ 00011f84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_construct(uint param_1,char param_2)

{
  (*(code *)PTR__M_construct_0006200c)(param_1,(int)param_2);
  return;
}



/* ===== <EXTERNAL>::tolower @ 00011f90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tolower(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_tolower_00062010)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::std::__throw_length_error @ 00011f9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_length_error(char *param_1)

{
  (*(code *)PTR___throw_length_error_00062014)(param_1);
  return;
}



/* ===== <EXTERNAL>::bind @ 00011fa8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_bind_00062018)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00011fb4 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0006201c)();
  return;
}



/* ===== <EXTERNAL>::gethostbyname @ 00011fc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

hostent * gethostbyname(char *__name)

{
  hostent *phVar1;
  
  phVar1 = (hostent *)(*(code *)PTR_gethostbyname_00062020)(__name);
  return phVar1;
}



/* ===== <EXTERNAL>::calloc @ 00011fcc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00062024)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00011fd8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00062028)();
  return piVar1;
}



/* ===== <EXTERNAL>::std::__cxx11::string::_M_replace @ 00011fe4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_replace(uint param_1,uint param_2,char *param_3,uint param_4)

{
  (*(code *)PTR__M_replace_0006202c)(param_1);
  return;
}



/* ===== <EXTERNAL>::std::__throw_out_of_range_fmt @ 00011ff0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_out_of_range_fmt(char *param_1,...)

{
  (*(code *)PTR___throw_out_of_range_fmt_00062030)(param_1);
  return;
}



/* ===== <EXTERNAL>::clock_gettime @ 00011ffc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_00062034)(__clock_id);
  return iVar1;
}



/* ===== <EXTERNAL>::open @ 00012008 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_00062038)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::v4l2_open @ 00012014 size=12 ===== */

void v4l2_open(void)

{
  (*(code *)PTR_v4l2_open_0006203c)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 00012020 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00062040)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::__aeabi_ldivmod @ 0001202c size=12 ===== */

void __aeabi_ldivmod(void)

{
  (*(code *)PTR___aeabi_ldivmod_00062044)();
  return;
}



/* ===== <EXTERNAL>::memcpy @ 00012038 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00062048)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::connect @ 00012044 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_connect_0006204c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::sleep @ 00012050 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_00062050)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::realloc @ 0001205c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_00062054)(__ptr);
  return pvVar1;
}



/* ===== <EXTERNAL>::operator.delete @ 00012068 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00062058)(param_1);
  return;
}



/* ===== <EXTERNAL>::putchar @ 00012074 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0006205c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::readlink @ 00012080 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_readlink_00062060)(__path);
  return sVar1;
}



/* ===== <EXTERNAL>::__cxa_rethrow @ 0001208c size=12 ===== */

void __cxa_rethrow(void)

{
  (*(code *)PTR___cxa_rethrow_00062064)();
  return;
}



/* ===== <EXTERNAL>::strtoul @ 000120a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_0006206c)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::std::_Rb_tree_decrement @ 000120b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_decrement(_Rb_tree_node_base *param_1)

{
  (*(code *)PTR__Rb_tree_decrement_00062070)(param_1);
  return;
}



/* ===== <EXTERNAL>::atol @ 000120bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long atol(char *__nptr)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_atol_00062074)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::malloc @ 000120c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00062078)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::klogctl @ 000120d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int klogctl(int __type,char *__bufp,int __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_klogctl_0006207c)(__type);
  return iVar1;
}



/* ===== <EXTERNAL>::std::__cxx11::string::append @ 000120e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::append(char *param_1)

{
  (*(code *)PTR_append_00062080)(param_1);
  return;
}



/* ===== <EXTERNAL>::strrchr @ 000120ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_00062084)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::std::__cxx11::string::_M_mutate @ 000120f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_mutate(uint param_1,uint param_2,char *param_3,uint param_4)

{
  (*(code *)PTR__M_mutate_00062088)(param_1);
  return;
}



/* ===== <EXTERNAL>::strncmp @ 00012104 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0006208c)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::__cxa_end_cleanup @ 0001211c size=12 ===== */

void __cxa_end_cleanup(void)

{
  (*(code *)PTR___cxa_end_cleanup_00062094)();
  return;
}



/* ===== <EXTERNAL>::ioctl @ 00012128 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_00062098)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 00012134 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0006209c)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::opendir @ 00012140 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*(code *)PTR_opendir_000620a0)(__name);
  return pDVar1;
}



/* ===== <EXTERNAL>::strtod @ 0001214c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double strtod(char *__nptr,char **__endptr)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_strtod_000620a4)(__nptr);
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== <EXTERNAL>::strtol @ 00012158 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_000620a8)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::fcntl @ 00012164 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fcntl_000620ac)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::isalnum @ 00012170 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isalnum(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_isalnum_000620b0)(param_1);
  return iVar1;
}



/* ===== <EXTERNAL>::snprintf @ 0001217c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_000620b4)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::htonl @ 00012188 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint32_t htonl(uint32_t __hostlong)

{
  uint32_t uVar1;
  
  uVar1 = (*(code *)PTR_htonl_000620b8)(__hostlong);
  return uVar1;
}



/* ===== <EXTERNAL>::getsubopt @ 00012194 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getsubopt(char **__optionp,char **__tokens,char **__valuep)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getsubopt_000620bc)(__optionp);
  return iVar1;
}



/* ===== <EXTERNAL>::select @ 000121a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_select_000620c0)(__nfds);
  return iVar1;
}



/* ===== <EXTERNAL>::strncasecmp @ 000121ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncasecmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncasecmp_000620c4)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fdopen @ 000121b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fdopen(int __fd,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fdopen_000620c8)(__fd);
  return pFVar1;
}



/* ===== <EXTERNAL>::strtoull @ 000121c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong strtoull(char *__nptr,char **__endptr,int __base)

{
  ulonglong uVar1;
  
  uVar1 = (*(code *)PTR_strtoull_000620cc)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::std::__cxx11::string::_M_assign @ 000121d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_assign(string *param_1)

{
  (*(code *)PTR__M_assign_000620d0)(param_1);
  return;
}



/* ===== <EXTERNAL>::mmap @ 000121dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_mmap_000620d4)(__addr);
  return pvVar1;
}



/* ===== <EXTERNAL>::memmove @ 000121e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_000620d8)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::fclose @ 000121f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_000620dc)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::fread @ 00012200 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_000620e0)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::fopen @ 0001220c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_000620e4)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::v4l2_munmap @ 00012218 size=12 ===== */

void v4l2_munmap(void)

{
  (*(code *)PTR_v4l2_munmap_000620e8)();
  return;
}



/* ===== <EXTERNAL>::fgetc @ 00012224 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fgetc(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fgetc_000620ec)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::closedir @ 00012230 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_closedir_000620f0)(__dirp);
  return iVar1;
}



/* ===== <EXTERNAL>::close @ 0001223c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_000620f4)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::fputc @ 00012248 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_000620f8)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::__aeabi_uidiv @ 00012254 size=12 ===== */

void __aeabi_uidiv(void)

{
  (*(code *)PTR___aeabi_uidiv_000620fc)();
  return;
}



/* ===== <EXTERNAL>::std::__cxx11::string::swap @ 00012260 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::swap(string *param_1)

{
  (*(code *)PTR_swap_00062100)(param_1);
  return;
}



/* ===== <EXTERNAL>::sscanf @ 0001226c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_00062104)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::std::__detail::_List_node_base::_M_hook @ 00012278 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__detail::_List_node_base::_M_hook(_List_node_base *param_1)

{
  (*(code *)PTR__M_hook_00062108)(param_1);
  return;
}



/* ===== <EXTERNAL>::strncpy @ 00012284 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_0006210c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::operator.new @ 00012290 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00062110)(param_1);
  return pvVar1;
}



/* ===== <EXTERNAL>::std::__cxx11::string::_M_append @ 0001229c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_append(char *param_1,uint param_2)

{
  (*(code *)PTR__M_append_00062114)(param_1);
  return;
}



/* ===== <EXTERNAL>::__aeabi_uidivmod @ 000122a8 size=12 ===== */

void __aeabi_uidivmod(void)

{
  (*(code *)PTR___aeabi_uidivmod_00062118)();
  return;
}



/* ===== <EXTERNAL>::std::__cxx11::string::_M_erase @ 000122b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_erase(uint param_1,uint param_2)

{
  (*(code *)PTR__M_erase_0006211c)(param_1);
  return;
}



/* ===== <EXTERNAL>::fflush @ 000122c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00062120)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 000122cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00062124)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::std::_Rb_tree_insert_and_rebalance @ 000122d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_insert_and_rebalance
               (bool param_1,_Rb_tree_node_base *param_2,_Rb_tree_node_base *param_3,
               _Rb_tree_node_base *param_4)

{
  (*(code *)PTR__Rb_tree_insert_and_rebalance_00062128)(param_1);
  return;
}



/* ===== <EXTERNAL>::perror @ 000122e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_0006212c)(__s);
  return;
}



/* ===== <EXTERNAL>::munmap @ 000122f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_munmap_00062130)(__addr);
  return iVar1;
}



/* ===== <EXTERNAL>::fprintf @ 000122fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00062134)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::std::__cxx11::string::reserve @ 00012308 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::reserve(uint param_1)

{
  (*(code *)PTR_reserve_00062138)(param_1);
  return;
}



/* ===== <EXTERNAL>::__aeabi_uldivmod @ 00012314 size=12 ===== */

void __aeabi_uldivmod(void)

{
  (*(code *)PTR___aeabi_uldivmod_0006213c)();
  return;
}



/* ===== <EXTERNAL>::abort @ 00012320 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00062140)();
  return;
}



/* ===== <EXTERNAL>::memcmp @ 0001232c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_00062144)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00012338 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_00062148)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::std::__throw_logic_error @ 00012344 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_logic_error(char *param_1)

{
  (*(code *)PTR___throw_logic_error_0006214c)(param_1);
  return;
}



/* ===== <EXTERNAL>::socket @ 00012350 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_00062150)(__domain);
  return iVar1;
}



/* ===== <EXTERNAL>::fseek @ 0001235c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_00062154)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::__aeabi_atexit @ 00012368 size=12 ===== */

void __aeabi_atexit(void)

{
  (*(code *)PTR___aeabi_atexit_00062158)();
  return;
}



/* ===== <EXTERNAL>::rand @ 00012374 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_0006215c)();
  return iVar1;
}



/* ===== <EXTERNAL>::isalpha @ 00012380 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isalpha(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_isalpha_00062160)(param_1);
  return iVar1;
}



/* ===== <EXTERNAL>::exit @ 0001238c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00062164)(__status);
  return;
}



/* ===== <EXTERNAL>::std::__cxx11::string::_M_create @ 00012398 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_create(uint *param_1,uint param_2)

{
  (*(code *)PTR__M_create_00062168)(param_1);
  return;
}



/* ===== <EXTERNAL>::std::_Rb_tree_increment @ 000123a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_increment(_Rb_tree_node_base *param_1)

{
  (*(code *)PTR__Rb_tree_increment_0006216c)(param_1);
  return;
}



/* ===== <EXTERNAL>::__cxa_end_catch @ 000123b0 size=12 ===== */

void __cxa_end_catch(void)

{
  (*(code *)PTR___cxa_end_catch_00062170)();
  return;
}



/* ===== <EXTERNAL>::__aeabi_idiv @ 000123bc size=12 ===== */

void __aeabi_idiv(void)

{
  (*(code *)PTR___aeabi_idiv_00062174)();
  return;
}



/* ===== <EXTERNAL>::strstr @ 000123c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_00062178)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::strcmp @ 000123d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0006217c)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::__aeabi_idivmod @ 000123e0 size=12 ===== */

void __aeabi_idivmod(void)

{
  (*(code *)PTR___aeabi_idivmod_00062180)();
  return;
}



/* ===== <EXTERNAL>::__cxa_begin_catch @ 000123ec size=12 ===== */

void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_00062184)();
  return;
}



/* ===== <EXTERNAL>::accept @ 000123f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_accept_00062188)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00012404 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0006218c)(__ptr);
  return;
}



/* ===== <EXTERNAL>::readdir @ 00012410 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent * readdir(DIR *__dirp)

{
  dirent *pdVar1;
  
  pdVar1 = (dirent *)(*(code *)PTR_readdir_00062190)(__dirp);
  return pdVar1;
}



/* ===== <EXTERNAL>::strchr @ 0001241c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_00062194)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::__gxx_personality_v0 @ 00012434 size=12 ===== */

void __gxx_personality_v0(void)

{
  (*(code *)PTR___gxx_personality_v0_0006219c)();
  return;
}



/* ===== <EXTERNAL>::strerror @ 00012440 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_000621a0)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::listen @ 0001244c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int listen(int __fd,int __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_listen_000621a4)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00012458 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_000621a8)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 00012464 size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_000621ac)();
  return;
}



/* ===== <EXTERNAL>::__aeabi_ul2d @ 00012470 size=12 ===== */

void __aeabi_ul2d(void)

{
  (*(code *)PTR___aeabi_ul2d_000621b0)();
  return;
}



/* ===== <EXTERNAL>::puts @ 0001247c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_000621b4)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::ntohl @ 00012488 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint32_t ntohl(uint32_t __netlong)

{
  uint32_t uVar1;
  
  uVar1 = (*(code *)PTR_ntohl_000621b8)(__netlong);
  return uVar1;
}



/* ===== <EXTERNAL>::isxdigit @ 00012494 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isxdigit(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_isxdigit_000621bc)(param_1);
  return iVar1;
}



/* ===== <EXTERNAL>::v4l2_mmap @ 000124a0 size=12 ===== */

void v4l2_mmap(void)

{
  (*(code *)PTR_v4l2_mmap_000621c0)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000124ac size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_000621c4)();
  return;
}



/* ===== FUN_000124b8 @ 000124b8 size=3404 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_000124b8(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  uint __fd;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined *puVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  int iVar11;
  FILE *__stream;
  int *piVar12;
  ulong __seconds;
  byte *local_270;
  uint local_26c;
  int local_268;
  char *local_258;
  char *local_254;
  int local_250;
  ulong local_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [32];
  undefined1 auStack_200 [32];
  uint local_1e0;
  uint local_1dc;
  uint local_1d8;
  int local_1c8;
  ulong local_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  uint local_17c;
  undefined4 uStack_14c;
  fd_set local_148;
  undefined1 local_c8 [164];
  
  local_258 = (char *)0x0;
  local_254 = (char *)0x0;
  memset(auStack_230,0,0x68);
  if (param_1 == 1) {
    FUN_00017584();
    return 0;
  }
  if (DAT_00062248 == 0) {
    iVar5 = 0;
  }
  else {
    piVar12 = &DAT_00062248;
    iVar3 = 0;
    do {
      while( true ) {
        iVar11 = piVar12[3];
        iVar2 = isalpha(iVar11);
        iVar5 = iVar3;
        if (iVar2 != 0) break;
LAB_00012530:
        piVar12 = piVar12 + 4;
        iVar3 = iVar5;
        if (*piVar12 == 0) goto LAB_00012588;
      }
      iVar2 = piVar12[1];
      iVar5 = iVar3 + 1;
      local_c8[iVar3] = (char)iVar11;
      if (iVar2 != 1) {
        if (iVar2 == 2) {
          iVar5 = iVar3 + 3;
          local_c8[iVar3 + 1] = 0x3a;
          local_c8[iVar3 + 2] = 0x3a;
        }
        goto LAB_00012530;
      }
      iVar5 = iVar3 + 2;
      piVar12 = piVar12 + 4;
      iVar2 = *piVar12;
      local_c8[iVar3 + 1] = 0x3a;
      iVar3 = iVar5;
    } while (iVar2 != 0);
  }
LAB_00012588:
  __seconds = 0;
  local_268 = 0;
  local_26c = 0;
  local_270 = (byte *)0x0;
  pbVar9 = (byte *)"/dev/video0";
LAB_000125b8:
  local_c8[iVar5] = 0;
  local_148.fds_bits[0] = 0;
  iVar3 = getopt_long(param_1,param_2,local_c8,DAT_0001322c,&local_148);
  if (iVar3 == -1) {
    if (param_1 <= optind) {
      if (DAT_00063377 == '\0') {
        __fd = open((char *)pbVar9,2);
      }
      else {
        __fd = v4l2_open();
      }
      __stream = stderr;
      if ((int)__fd < 0) {
        piVar12 = __errno_location();
        pcVar7 = strerror(*piVar12);
LAB_000131c8:
        fprintf(__stream,"Failed to open %s: %s\n",pbVar9,pcVar7);
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      DAT_00063504 = (uint)DAT_000633a9;
      iVar3 = FUN_00013938(__fd,0x80685600,auStack_230,"VIDIOC_QUERYCAP");
      if (iVar3 != 0) {
LAB_00013190:
        fprintf(stderr,"%s: not a v4l2 node\n",pbVar9);
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      DAT_00063530 = local_1dc;
      if ((int)local_1dc < 0) {
        DAT_00063530 = local_1d8;
      }
      DAT_00063534 = 0;
      if ((DAT_00063530 & 0x200000) != 0) {
        DAT_00063534 = 0xfeedcafe;
      }
      DAT_00063538 = (DAT_00063530 & 0x7000) != 0;
      if ((bool)DAT_00063538) {
        DAT_0006353c = 9;
        DAT_00063540 = 10;
      }
      else {
        DAT_0006353c = 1;
        DAT_00063540 = 2;
      }
      iVar3 = -1;
      if (local_270 != (byte *)0x0) {
        if (DAT_00063377 == '\0') {
          iVar3 = open((char *)local_270,2);
        }
        else {
          iVar3 = v4l2_open(local_270);
        }
        __stream = stderr;
        pbVar9 = local_270;
        if (iVar3 < 0) {
          piVar12 = __errno_location();
          pcVar7 = strerror(*piVar12);
          goto LAB_000131c8;
        }
        iVar5 = FUN_00013938(iVar3,0x80685600,auStack_230,"VIDIOC_QUERYCAP");
        if (iVar5 != 0) goto LAB_00013190;
        DAT_00063544 = local_1dc;
        if ((int)local_1dc < 0) {
          DAT_00063544 = local_1d8;
        }
        DAT_00063548 = 0;
        if ((DAT_00063544 & 0x200000) != 0) {
          DAT_00063548 = 0xfeedcafe;
        }
      }
      FUN_00017870(__fd);
      if ((((local_26c == 3) && (local_258 != (char *)0x0)) &&
          (iVar5 = FUN_000176cc(), pcVar7 = local_258, iVar5 == 0)) ||
         (((local_268 == 3 && (local_254 != (char *)0x0)) &&
          (iVar5 = FUN_000176cc(), pcVar7 = local_254, iVar5 == 0)))) {
        fprintf(stderr,"unknown control \'%s\'\n",pcVar7);
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      if (DAT_00063397 == '\0') {
        if (DAT_00063344 == '\0') goto LAB_00012c74;
      }
      else {
        DAT_00063384 = 0x101;
        _DAT_00063380 = 0x1010101;
        DAT_00063356 = 1;
        DAT_000633af = 1;
        DAT_00063344 = '\x01';
        DAT_00063349 = 1;
        DAT_0006334f = 1;
        DAT_000633bb = 1;
        DAT_000633bd = 1;
        DAT_00063353 = 1;
        DAT_00063350 = 1;
        DAT_000633cd = 1;
        DAT_00063346 = 1;
        DAT_00063354 = 1;
        DAT_000633c9 = 1;
        DAT_00063342 = 1;
        DAT_00063386 = 1;
        DAT_000633ad = 1;
        DAT_000633c1 = 1;
        DAT_000633c2 = 1;
        DAT_000633c7 = 1;
        DAT_000633d6 = 1;
        DAT_000633d8 = 1;
        DAT_000633d2 = 1;
        DAT_000633b7 = 1;
        DAT_000633b9 = 1;
        DAT_0006336c = 1;
        DAT_000633aa = 1;
      }
      puVar8 = &DAT_00042954;
      if (DAT_00063377 == '\0') {
        puVar8 = &DAT_0003cb10;
      }
      printf("Driver Info (%susing libv4l2):\n",puVar8);
      printf("\tDriver name   : %s\n",auStack_230);
      printf("\tCard type     : %s\n",auStack_220);
      printf("\tBus info      : %s\n",auStack_200);
      printf("\tDriver version: %d.%d.%d\n",local_1e0 >> 0x10,(local_1e0 & 0xffff) >> 8,
             local_1e0 & 0xff);
      printf("\tCapabilities  : 0x%08X\n",local_1dc);
      FUN_000134a0(&local_148,local_1dc);
      printf("%s",local_148.fds_bits[0]);
      if ((__fd_mask *)local_148.fds_bits[0] != local_148.fds_bits + 2) {
        operator_delete((void *)local_148.fds_bits[0]);
      }
      if ((int)local_1dc < 0) {
        printf("\tDevice Caps   : 0x%08X\n",local_1d8);
        FUN_000134a0(&local_148,local_1d8);
        printf("%s",local_148.fds_bits[0]);
        if ((__fd_mask *)local_148.fds_bits[0] != local_148.fds_bits + 2) {
          operator_delete((void *)local_148.fds_bits[0]);
        }
      }
LAB_00012c74:
      FUN_00018690(__fd);
      FUN_0001e8a0(__fd);
      FUN_0001f6c4(__fd);
      FUN_00020ec0(__fd);
      FUN_00021c24(__fd);
      FUN_00022b80(__fd);
      FUN_000234b0(__fd);
      FUN_00024c9c(__fd);
      FUN_0002d59c(__fd);
      FUN_00025820(__fd);
      FUN_0002d238(__fd,iVar3);
      FUN_00026374(__fd);
      FUN_0002ee90(__fd);
      FUN_000190bc(__fd);
      FUN_0001ee3c(__fd);
      FUN_0001f8c8(__fd);
      FUN_00021444(__fd);
      FUN_00021e58(__fd);
      FUN_00022e14(__fd);
      FUN_00023cb8(__fd);
      FUN_00024f50(__fd);
      FUN_0002d7dc(__fd);
      FUN_00025a14(__fd);
      FUN_000267fc(__fd);
      FUN_0002f5f0(__fd);
      FUN_00017590(__fd);
      FUN_0001fae8(__fd);
      FUN_00021704(__fd);
      FUN_00022670(__fd);
      FUN_00022ea0(__fd);
      FUN_00023dfc(__fd);
      FUN_0002508c(__fd);
      FUN_0002d880(__fd);
      FUN_0002d344(__fd,iVar3);
      if (DAT_000633d1 != '\0') {
        uStack_1c0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_1bc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_1ac = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        local_1c8 = local_26c;
        local_1c4 = 0;
        local_1b8 = 0;
        uStack_1b4 = uStack_1c0;
        uStack_1b0 = uStack_1bc;
        if (local_26c == 3) {
          local_1c4 = FUN_000176cc(local_258);
        }
        else if (local_26c == 5) {
          local_1c4 = strtoul(local_258,(char **)0x0,0);
        }
        iVar5 = FUN_00013938(__fd,0x4020565a,&local_1c8,"VIDIOC_SUBSCRIBE_EVENT");
        if ((iVar5 == 0) &&
           (iVar5 = FUN_00013938(__fd,0x80805659,&local_148,"VIDIOC_DQEVENT"), iVar5 == 0)) {
          FUN_00015600(&local_148);
        }
      }
      if (DAT_000633d0 != '\0') {
        uStack_23c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_244 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_234 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        local_250 = local_268;
        local_24c = 0;
        uStack_248 = 1;
        local_240 = 0;
        uStack_238 = uStack_244;
        if (local_268 == 3) {
          local_24c = FUN_000176cc(local_254);
        }
        else if (local_268 == 5) {
          local_24c = strtoul(local_254,(char **)0x0,0);
        }
        iVar5 = FUN_00013938(__fd,0x4020565a,&local_250,"VIDIOC_SUBSCRIBE_EVENT");
        if (iVar5 == 0) {
          uVar6 = fcntl(__fd,3);
          fcntl(__fd,4,uVar6 | 0x800);
          local_26c = 0;
          while( true ) {
            puVar10 = &uStack_14c;
            do {
              puVar10 = puVar10 + 1;
              *puVar10 = 0;
            } while (puVar10 != local_148.fds_bits + 0x1f);
            local_148.fds_bits[__fd >> 5] = local_148.fds_bits[__fd >> 5] | 1 << (__fd & 0x1f);
            iVar5 = select(__fd + 1,(fd_set *)0x0,(fd_set *)0x0,&local_148,(timeval *)0x0);
            if (iVar5 < 1) break;
            iVar5 = FUN_00013938(__fd,0x80805659,&local_1c8,"VIDIOC_DQEVENT");
            if (iVar5 == 0) {
              FUN_00015600(&local_1c8);
              if (local_26c < local_17c) {
                printf("\tMissed %d events\n",local_17c - local_26c);
              }
              local_26c = local_17c + 1;
            }
          }
        }
      }
      if (DAT_000633c6 != '\0') {
        sleep(__seconds);
        puts("Test VIDIOC_QUERYCAP:");
        iVar5 = FUN_0001391c(__fd,0x80685600,auStack_230);
        if (iVar5 == 0) {
          printf("\tDriver name   : %s\n",auStack_230);
        }
        else {
          perror("VIDIOC_QUERYCAP");
        }
      }
      FUN_00013900(__fd);
      if (local_270 != (byte *)0x0) {
        FUN_00013900(iVar3);
      }
                    /* WARNING: Subroutine does not return */
      exit(DAT_00063500);
    }
    printf("unknown arguments: ");
    while (optind < param_1) {
      iVar3 = optind * 4;
      optind = optind + 1;
      printf("%s ",*(undefined4 *)(param_2 + iVar3));
    }
    putchar(10);
LAB_0001296c:
    FUN_00017584();
    return 1;
  }
  (&DAT_00063300)[iVar3] = 1;
  pbVar1 = optarg;
  if (iVar3 == 0x10b) {
    FUN_000208d4();
    return 0;
  }
  if (iVar3 < 0x10c) {
    if (iVar3 == 0x68) {
      FUN_00017584();
      return 0;
    }
    if (iVar3 < 0x69) {
      if (iVar3 == 0x3f) {
        if (*(int *)(param_2 + optind * 4) != 0) {
          fprintf(stderr,"Unknown argument \'%s\'\n");
        }
        goto LAB_0001296c;
      }
      if (iVar3 < 0x40) {
        if (iVar3 == 0x3a) {
          fprintf(stderr,"Option \'%s\' requires a value\n",*(undefined4 *)(param_2 + optind * 4));
          FUN_00017584();
          return 1;
        }
        goto LAB_00012874;
      }
      if (iVar3 == 100) {
        pbVar9 = pbVar1;
        if ((*optarg - 0x30 < 10) && (sVar4 = strlen((char *)optarg), sVar4 < 4)) {
          sprintf((char *)DAT_00013234,"/dev/video%s",pbVar1);
          pbVar9 = DAT_00013234;
        }
        goto LAB_000125b8;
      }
      if (iVar3 == 0x65) {
        local_270 = optarg;
        if ((*optarg - 0x30 < 10) && (sVar4 = strlen((char *)optarg), sVar4 < 4)) {
          sprintf((char *)DAT_00013230,"/dev/video%s",pbVar1);
          local_270 = DAT_00013230;
        }
        goto LAB_000125b8;
      }
    }
    else {
      if (iVar3 == 0xd1) {
        local_26c = FUN_000137cc(optarg,&local_258);
        iVar3 = local_26c;
joined_r0x0001286c:
        if (iVar3 == 0) {
          return 1;
        }
        goto LAB_000125b8;
      }
      if (0xd1 < iVar3) {
        if (iVar3 == 0x109) {
          FUN_0001e52c();
          return 0;
        }
        if (iVar3 == 0x10a) {
          FUN_0001f5c8();
          return 0;
        }
        goto LAB_00012874;
      }
      if (iVar3 == 0xc6) {
        __seconds = strtoul((char *)optarg,(char **)0x0,0);
        goto LAB_000125b8;
      }
      if (iVar3 == 0xd0) {
        local_268 = FUN_000137cc(optarg,&local_254);
        iVar3 = local_268;
        goto joined_r0x0001286c;
      }
    }
  }
  else {
    if (iVar3 == 0x110) {
      FUN_0002d508();
      return 0;
    }
    if (iVar3 < 0x111) {
      if (iVar3 == 0x10d) {
        FUN_00022aec();
        return 0;
      }
      if (iVar3 < 0x10d) {
        FUN_000219d8();
        return 0;
      }
      if (iVar3 == 0x10e) {
        FUN_000234a4();
        return 0;
      }
      if (iVar3 == 0x10f) {
        FUN_000248b4();
        return 0;
      }
    }
    else {
      if (iVar3 == 0x113) {
        FUN_00029370();
        return 0;
      }
      if (iVar3 < 0x114) {
        if (iVar3 == 0x111) {
          FUN_000256c4();
          return 0;
        }
        if (iVar3 == 0x112) {
          FUN_00025f54();
          return 0;
        }
      }
      else {
        if (iVar3 == 0x114) {
LAB_000126d8:
          FUN_0002e4d4();
          return 0;
        }
        if (iVar3 == 0x115) {
          FUN_00017584();
          FUN_0001e52c();
          FUN_0001f5c8();
          FUN_000208d4();
          FUN_000219d8();
          FUN_00022aec();
          FUN_000234a4();
          FUN_000248b4();
          FUN_0002d508();
          FUN_000256c4();
          FUN_00025f54();
          FUN_00029370();
          goto LAB_000126d8;
        }
      }
    }
  }
LAB_00012874:
  FUN_00019c64(iVar3,optarg);
  FUN_0001e538(iVar3,optarg);
  FUN_0001f5d4(iVar3,optarg);
  FUN_000208e0(iVar3,optarg);
  FUN_000219e4(iVar3,optarg);
  FUN_00022af8(iVar3,optarg);
  FUN_00023f58(iVar3,optarg);
  FUN_000248c0(iVar3,optarg);
  FUN_0002d514(iVar3,optarg);
  FUN_000256d0(iVar3,optarg);
  FUN_00025f60(iVar3,optarg);
  FUN_00029384(iVar3,optarg);
  FUN_0002e4e0(iVar3,optarg);
  goto LAB_000125b8;
}



/* ===== _INIT_1 @ 00013238 size=244 ===== */

void _INIT_1(void)

{
  DAT_00063554 = 0;
  DAT_0006355c = &DAT_00063554;
  DAT_00063560 = &DAT_00063554;
  DAT_00063558 = 0;
  DAT_00063564 = 0;
  __aeabi_atexit(&DAT_00063550,FUN_0001b894,&DAT_000621cc);
  DAT_0006356c = 0;
  DAT_00063574 = &DAT_0006356c;
  DAT_00063578 = &DAT_0006356c;
  DAT_00063570 = 0;
  DAT_0006357c = 0;
  __aeabi_atexit(&DAT_00063568,FUN_0001b8f4,&DAT_000621cc);
  DAT_000635a8 = 0;
  DAT_000635b0 = &DAT_000635a8;
  DAT_000635b4 = &DAT_000635a8;
  DAT_000635ac = 0;
  DAT_000635b8 = 0;
  __aeabi_atexit(&DAT_000635a4,FUN_0001b954,&DAT_000621cc);
  DAT_00063584 = &DAT_00063580;
  DAT_00063580 = &DAT_00063580;
  DAT_00063588 = 0;
  __aeabi_atexit(&DAT_00063580,FUN_0001b75c,&DAT_000621cc);
  DAT_00063590 = 0;
  DAT_00063594 = 0;
  DAT_000635a0 = 0;
  DAT_00063598 = &DAT_00063590;
  DAT_0006359c = &DAT_00063590;
  __aeabi_atexit(&DAT_0006358c,FUN_0001b9c8,&DAT_000621cc);
  return;
}



/* ===== _INIT_2 @ 0001332c size=92 ===== */

void _INIT_2(void)

{
  DAT_0006d8d0 = 0;
  DAT_0006d8d4 = 0;
  DAT_0006d8d8 = 0;
  __aeabi_atexit(&DAT_0006d8d0,FUN_000244d8,&DAT_000621cc);
  DAT_0006d8c4 = 0;
  DAT_0006d8c8 = 0;
  DAT_0006d8cc = 0;
  __aeabi_atexit(&DAT_0006d8c4,&LAB_000244b8,&DAT_000621cc);
  return;
}



/* ===== entry @ 00013388 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00062090)
            (DAT_000133bc,param_2,&stack0x00000004,DAT_000133c0,DAT_000133b8,param_1);
  return;
}



/* ===== FUN_000133c4 @ 000133c4 size=32 ===== */

void FUN_000133c4(void)

{
  if (DAT_000133e8 == DAT_000133e4) {
    return;
  }
  if (DAT_000133ec == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000133e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000133ec)();
  return;
}



/* ===== _FINI_0 @ 00013428 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00013464;
  if (*DAT_00013464 != '\0') {
    return;
  }
  FUN_000133c4();
  if (DAT_00013468 != 0) {
    __deregister_frame_info(DAT_0001346c);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00013470 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00013494 != 0) {
    __register_frame_info(DAT_0001349c,DAT_00013498);
  }
  if ((DAT_00013420 - DAT_0001341c >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00013424 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00013418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00013424)();
  return;
}



/* ===== FUN_000134a0 @ 000134a0 size=792 ===== */

char * FUN_000134a0(char *param_1,uint param_2)

{
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  *(char **)param_1 = param_1 + 8;
  param_1[8] = '\0';
  if ((param_2 & 1) != 0) {
    std::__cxx11::string::append(param_1);
  }
  if ((param_2 & 0x1000) != 0) {
    std::__cxx11::string::append(param_1);
  }
  if ((param_2 & 2) != 0) {
    std::__cxx11::string::append(param_1);
  }
  if ((param_2 & 0x2000) != 0) {
    std::__cxx11::string::append(param_1);
  }
  if ((param_2 & 0x8000) != 0) {
    std::__cxx11::string::append(param_1);
  }
  if ((param_2 & 0x4000) != 0) {
    std::__cxx11::string::append(param_1);
  }
  if ((param_2 & 4) != 0) {
    std::__cxx11::string::append(param_1);
  }
  if ((param_2 & 0x200) != 0) {
    std::__cxx11::string::append(param_1);
  }
  if ((param_2 & 0x10) != 0) {
    std::__cxx11::string::append(param_1);
  }
  if ((param_2 & 0x20) != 0) {
    std::__cxx11::string::append(param_1);
  }
  if ((param_2 & 0x40) != 0) {
    std::__cxx11::string::append(param_1);
  }
  if ((param_2 & 0x80) != 0) {
    std::__cxx11::string::append(param_1);
  }
  if ((param_2 & 0x100) != 0) {
    std::__cxx11::string::append(param_1);
  }
  if ((param_2 & 0x800) != 0) {
    std::__cxx11::string::append(param_1);
  }
  if ((param_2 & 0x100000) != 0) {
    std::__cxx11::string::append(param_1);
  }
  if ((param_2 & 0x400000) != 0) {
    std::__cxx11::string::append(param_1);
  }
  if ((param_2 & 0x10000) != 0) {
    std::__cxx11::string::append(param_1);
  }
  if ((param_2 & 0x10000000) != 0) {
    std::__cxx11::string::append(param_1);
  }
  if ((param_2 & 0x400) != 0) {
    std::__cxx11::string::append(param_1);
  }
  if ((param_2 & 0x80000) != 0) {
    std::__cxx11::string::append(param_1);
  }
  if ((param_2 & 0x20000) != 0) {
    std::__cxx11::string::append(param_1);
  }
  if ((param_2 & 0x40000) != 0) {
    std::__cxx11::string::append(param_1);
  }
  if ((param_2 & 0x1000000) != 0) {
    std::__cxx11::string::append(param_1);
  }
  if ((param_2 & 0x2000000) != 0) {
    std::__cxx11::string::append(param_1);
  }
  if ((param_2 & 0x4000000) != 0) {
    std::__cxx11::string::append(param_1);
  }
  if ((param_2 & 0x200000) != 0) {
    std::__cxx11::string::append(param_1);
  }
  if ((int)param_2 < 0) {
    std::__cxx11::string::append(param_1);
  }
  return param_1;
}



/* ===== FUN_000137cc @ 000137cc size=308 ===== */

ulong FUN_000137cc(byte *param_1,undefined4 *param_2)

{
  int iVar1;
  ulong uVar2;
  
  *param_2 = 0;
  if (*param_1 - 0x30 < 10) {
    uVar2 = strtoul((char *)param_1,(char **)0x0,0);
    if (uVar2 != 0) {
      return uVar2;
    }
  }
  else {
    iVar1 = strcmp((char *)param_1,"eos");
    if (iVar1 == 0) {
      return 2;
    }
    iVar1 = strcmp((char *)param_1,"vsync");
    if (iVar1 == 0) {
      return 1;
    }
    iVar1 = strcmp((char *)param_1,"frame_sync");
    if (iVar1 == 0) {
      return 4;
    }
    iVar1 = strcmp((char *)param_1,"motion_det");
    if (iVar1 == 0) {
      return 6;
    }
    iVar1 = strncmp((char *)param_1,"ctrl=",5);
    if (iVar1 == 0) {
      *param_2 = param_1 + 5;
      return 3;
    }
    iVar1 = strncmp((char *)param_1,"source_change=",0xe);
    if (iVar1 == 0) {
      *param_2 = param_1 + 0xe;
      return 5;
    }
  }
  fwrite("Unknown event\n",1,0xe,stderr);
  FUN_00025f54();
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00013900 @ 00013900 size=40 ===== */

void FUN_00013900(int param_1)

{
  if (DAT_00063377 != '\0') {
    (*(code *)PTR_v4l2_close_00062198)();
    return;
  }
  close(param_1);
  return;
}



/* ===== FUN_0001391c @ 0001391c size=40 ===== */

void FUN_0001391c(int param_1,ulong param_2)

{
  if (DAT_00063377 != '\0') {
    (*(code *)PTR_v4l2_ioctl_00062068)();
    return;
  }
  ioctl(param_1,param_2);
  return;
}



/* ===== FUN_00013938 @ 00013938 size=144 ===== */

int FUN_00013938(void)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 in_r3;
  
  iVar1 = FUN_0001391c();
  if (iVar1 < 0) {
    DAT_00063500 = 0xffffffff;
    if (DAT_000633aa == '\0') {
      piVar2 = __errno_location();
      pcVar3 = strerror(*piVar2);
      printf("%s: failed: %s\n",in_r3,pcVar3);
      return iVar1;
    }
  }
  else if ((DAT_000633aa == '\0') && (DAT_00063504 != 0)) {
    printf("%s: ok\n",in_r3);
    return iVar1;
  }
  return iVar1;
}



/* ===== FUN_000139c8 @ 000139c8 size=324 ===== */

/* WARNING: Removing unreachable block (ram,0x00013a78) */

int * FUN_000139c8(int *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  piVar3 = param_1 + 2;
  param_1[1] = 2;
  *(byte *)(param_1 + 2) = (byte)param_2 & 0x7f;
  *param_1 = (int)piVar3;
  *(byte *)((int)param_1 + 9) = (byte)((uint)(param_2 << 0x11) >> 0x19);
  *(char *)((int)param_1 + 10) = '\0';
  *(byte *)((int)param_1 + 10) = (byte)((uint)(param_2 << 9) >> 0x19);
  param_1[1] = 3;
  *(undefined1 *)(*param_1 + 3) = 0;
  piVar2 = (int *)*param_1;
  uVar5 = param_1[1];
  uVar4 = uVar5 + 1;
  if (piVar3 == piVar2) {
    uVar1 = 0xf;
  }
  else {
    uVar1 = param_1[2];
  }
  if (uVar1 < uVar4) {
    std::__cxx11::string::_M_mutate((uint)param_1,uVar5,(char *)0x0,0);
    piVar2 = (int *)*param_1;
  }
  *(byte *)((int)piVar2 + uVar5) = (byte)((uint)(param_2 << 1) >> 0x19);
  param_1[1] = uVar4;
  *(undefined1 *)(*param_1 + uVar4) = 0;
  if (param_2 < 0) {
    if (0x7fffffffU - param_1[1] < 3) {
      std::__throw_length_error("basic_string::append");
      if (piVar3 != (int *)*param_1) {
        operator_delete((int *)*param_1);
      }
                    /* WARNING: Subroutine does not return */
      __cxa_end_cleanup();
    }
    std::__cxx11::string::_M_append((char *)param_1,0x3c6e8);
    return param_1;
  }
  return param_1;
}



/* ===== FUN_00013b0c @ 00013b0c size=120 ===== */

int FUN_00013b0c(char **param_1,char **param_2,char **param_3)

{
  int iVar1;
  
  iVar1 = getsubopt(param_1,param_2,param_3);
  if (iVar1 == -1) {
    fwrite("Invalid suboptions specified\n",1,0x1d,stderr);
  }
  else if (*param_3 == (char *)0x0) {
    fprintf(stderr,"No value given to suboption <%s>\n",param_2[iVar1]);
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== FUN_00013b84 @ 00013b84 size=316 ===== */

undefined4 FUN_00013b84(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp(param_1,"any");
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = strcmp(param_1,"none");
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = strcmp(param_1,"top");
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = strcmp(param_1,"bottom");
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = strcmp(param_1,"interlaced");
  if (iVar1 == 0) {
    return 4;
  }
  iVar1 = strcmp(param_1,"seq_tb");
  if (iVar1 == 0) {
    return 5;
  }
  iVar1 = strcmp(param_1,"seq_bt");
  if (iVar1 == 0) {
    return 6;
  }
  iVar1 = strcmp(param_1,"alternate");
  if (iVar1 == 0) {
    return 7;
  }
  iVar1 = strcmp(param_1,"interlaced_tb");
  if (iVar1 == 0) {
    return 8;
  }
  iVar1 = strcmp(param_1,"interlaced_bt");
  if (iVar1 == 0) {
    uVar2 = 9;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00013cc0 @ 00013cc0 size=1508 ===== */

uint FUN_00013cc0(char *param_1,ulong *param_2,ulong *param_3,uint *param_4,undefined4 *param_5,
                 undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,undefined4 *param_9,
                 uint *param_10,int param_11)

{
  char cVar1;
  FILE *__stream;
  uint *__s1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  size_t sVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *local_30;
  char *local_2c [2];
  
  *param_5 = 0;
  iVar8 = 0;
  *param_10 = 0;
  uVar7 = 0;
  cVar1 = *param_1;
  local_2c[0] = param_1;
  do {
    if (cVar1 == '\0') {
      return uVar7;
    }
    uVar2 = FUN_00013b0c(local_2c,&PTR_s_width_0003c390,&local_30);
    __s1 = local_30;
    switch(uVar2) {
    case 0:
      uVar7 = uVar7 | 1;
      uVar4 = strtoul((char *)local_30,(char **)0x0,0);
      *param_2 = uVar4;
      break;
    case 1:
      uVar7 = uVar7 | 2;
      uVar4 = strtoul((char *)local_30,(char **)0x0,0);
      *param_3 = uVar4;
      break;
    case 2:
      sVar5 = strlen((char *)local_30);
      if (sVar5 == 7) {
        if ((((char)__s1[1] == '-') && (*(char *)((int)__s1 + 5) == 'B')) &&
           (*(char *)((int)__s1 + 6) == 'E')) {
          *(undefined1 *)(__s1 + 1) = 0;
          sVar5 = strlen((char *)__s1);
          if (sVar5 == 4) {
            *param_4 = *__s1 | 0x80000000;
            goto LAB_00014124;
          }
        }
LAB_000141a4:
        uVar6 = strtol((char *)__s1,(char **)0x0,0);
        *param_4 = uVar6;
      }
      else {
        if (sVar5 != 4) goto LAB_000141a4;
        *param_4 = *__s1;
      }
LAB_00014124:
      uVar7 = uVar7 | 0x10;
      break;
    case 3:
      uVar7 = uVar7 | 0x80;
      uVar2 = FUN_00013b84(local_30);
      *param_5 = uVar2;
      break;
    case 4:
      iVar3 = strcmp((char *)local_30,"smpte170m");
      if (iVar3 == 0) {
        *param_6 = 1;
      }
      else {
        iVar3 = strcmp((char *)__s1,"smpte240m");
        if (iVar3 == 0) {
          *param_6 = 2;
        }
        else {
          iVar3 = strcmp((char *)__s1,"rec709");
          if (iVar3 == 0) {
            *param_6 = 3;
          }
          else {
            iVar3 = strcmp((char *)__s1,"470m");
            if (iVar3 == 0) {
              *param_6 = 5;
            }
            else {
              iVar3 = strcmp((char *)__s1,"470bg");
              if (iVar3 == 0) {
                *param_6 = 6;
              }
              else {
                iVar3 = strcmp((char *)__s1,"jpeg");
                if (iVar3 == 0) {
                  *param_6 = 7;
                }
                else {
                  iVar3 = strcmp((char *)__s1,"srgb");
                  if (iVar3 == 0) {
                    *param_6 = 8;
                  }
                  else {
                    iVar3 = strcmp((char *)__s1,"adobergb");
                    if (iVar3 == 0) {
                      *param_6 = 9;
                    }
                    else {
                      iVar3 = strcmp((char *)__s1,"bt2020");
                      if (iVar3 == 0) {
                        *param_6 = 10;
                      }
                      else {
                        iVar3 = strcmp((char *)__s1,"dcip3");
                        __stream = stderr;
                        if (iVar3 != 0) {
                          *param_6 = 0;
                          fprintf(__stream,"unknown colorspace %s\n",__s1);
                          break;
                        }
                        *param_6 = 0xc;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar7 = uVar7 | 0x100;
      break;
    case 5:
      iVar3 = strcmp((char *)local_30,"default");
      uVar2 = 0;
      if (iVar3 != 0) {
        iVar3 = strcmp((char *)__s1,"601");
        if (iVar3 == 0) {
          uVar2 = 1;
        }
        else {
          iVar3 = strcmp((char *)__s1,"709");
          if (iVar3 == 0) {
            uVar2 = 2;
          }
          else {
            iVar3 = strcmp((char *)__s1,"xv601");
            if (iVar3 == 0) {
              uVar2 = 3;
            }
            else {
              iVar3 = strcmp((char *)__s1,"xv709");
              if (iVar3 == 0) {
                uVar2 = 4;
              }
              else {
                iVar3 = strcmp((char *)__s1,"bt2020");
                if (iVar3 == 0) {
                  uVar2 = 6;
                }
                else {
                  iVar3 = strcmp((char *)__s1,"bt2020c");
                  if (iVar3 == 0) {
                    uVar2 = 7;
                  }
                  else {
                    iVar3 = strcmp((char *)__s1,"smpte240m");
                    if (iVar3 == 0) {
                      uVar2 = 8;
                    }
                    else {
                      uVar2 = 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar7 = uVar7 | 0x200;
      *param_8 = uVar2;
      break;
    case 6:
      uVar4 = strtoul((char *)local_30,(char **)0x0,0);
      *(ulong *)(param_11 + iVar8 * 4) = uVar4;
      if (uVar4 < 0x10000) {
        iVar8 = iVar8 + 1;
        uVar7 = uVar7 | 0x1000;
      }
      else {
        uVar7 = uVar7 | 0x1000;
        fwrite("bytesperline can\'t be more than 65535\n",1,0x26,stderr);
        *(undefined4 *)(param_11 + iVar8 * 4) = 0;
        iVar8 = iVar8 + 1;
      }
      break;
    case 7:
      uVar7 = uVar7 | 0x800;
      *param_10 = *param_10 | 1;
      break;
    case 8:
      iVar3 = strcmp((char *)local_30,"default");
      uVar2 = 0;
      if (iVar3 != 0) {
        iVar3 = strcmp((char *)__s1,"full-range");
        if (iVar3 == 0) {
          uVar2 = 1;
        }
        else {
          iVar3 = strcmp((char *)__s1,"lim-range");
          if (iVar3 == 0) {
            uVar2 = 2;
          }
          else {
            uVar2 = 0;
          }
        }
      }
      uVar7 = uVar7 | 0x400;
      *param_9 = uVar2;
      break;
    case 9:
      iVar3 = strcmp((char *)local_30,"default");
      uVar2 = 0;
      if (iVar3 != 0) {
        iVar3 = strcmp((char *)__s1,"smpte240m");
        if (iVar3 == 0) {
          uVar2 = 4;
        }
        else {
          iVar3 = strcmp((char *)__s1,"rec709");
          if (iVar3 == 0) {
            uVar2 = 1;
          }
          else {
            iVar3 = strcmp((char *)__s1,"srgb");
            if (iVar3 == 0) {
              uVar2 = 2;
            }
            else {
              iVar3 = strcmp((char *)__s1,"adobergb");
              if (iVar3 == 0) {
                uVar2 = 3;
              }
              else {
                iVar3 = strcmp((char *)__s1,"dcip3");
                if (iVar3 == 0) {
                  uVar2 = 6;
                }
                else {
                  iVar3 = strcmp((char *)__s1,"smpte2084");
                  if (iVar3 == 0) {
                    uVar2 = 7;
                  }
                  else {
                    iVar3 = strcmp((char *)__s1,"none");
                    if (iVar3 == 0) {
                      uVar2 = 5;
                    }
                    else {
                      uVar2 = 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar7 = uVar7 | 0x2000;
      *param_7 = uVar2;
      break;
    default:
      return 0;
    }
    cVar1 = *local_2c[0];
  } while( true );
}



/* ===== FUN_000142cc @ 000142cc size=100 ===== */

undefined4 FUN_000142cc(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_1c;
  
  if (param_3 == 0) {
    if (param_4 == 0) {
      local_44 = 1;
    }
    else {
      local_44 = 9;
    }
  }
  else if (param_4 == 0) {
    local_44 = 2;
  }
  else {
    local_44 = 10;
  }
  local_48 = param_2;
  iVar1 = FUN_00013938(param_1,0xc0405602,&local_48,"VIDIOC_ENUM_FMT");
  if (iVar1 != 0) {
    local_1c = 0;
  }
  return local_1c;
}



/* ===== FUN_00014330 @ 00014330 size=444 ===== */

int * FUN_00014330(int *param_1,char *param_2,int *param_3,undefined4 param_4,uint param_5,
                  uint param_6)

{
  bool bVar1;
  size_t sVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  char *__s;
  int iVar7;
  int *local_44;
  undefined1 *local_40;
  int local_3c;
  undefined1 auStack_38 [20];
  
  local_40 = auStack_38;
  sVar2 = strlen(param_2);
  std::__cxx11::string::_M_construct<char_const*>(&local_40,param_2,param_2 + sVar2,0);
  if (local_3c == 0x7fffffff) {
LAB_000144c8:
    std::__throw_length_error("basic_string::append");
    if ((int *)*param_1 != local_44) {
      operator_delete((int *)*param_1);
    }
                    /* WARNING: Subroutine does not return */
    __cxa_end_cleanup();
  }
  puVar3 = (undefined4 *)std::__cxx11::string::_M_append((char *)&local_40,0x3c880);
  local_44 = param_1 + 2;
  *param_1 = (int)local_44;
  piVar5 = puVar3 + 2;
  if ((int *)*puVar3 == piVar5) {
    iVar7 = puVar3[3];
    iVar6 = puVar3[4];
    iVar4 = puVar3[5];
    param_1[2] = *piVar5;
    param_1[3] = iVar7;
    param_1[4] = iVar6;
    param_1[5] = iVar4;
  }
  else {
    *param_1 = (int)*puVar3;
    param_1[2] = puVar3[2];
  }
  param_1[1] = puVar3[1];
  *puVar3 = piVar5;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 0;
  if (local_40 != auStack_38) {
    operator_delete(local_40);
  }
  if (*param_3 != 0) {
    bVar1 = true;
    do {
      if ((param_5 & 1) != 0) {
        iVar6 = param_1[1];
        if (bVar1) {
LAB_00014438:
          __s = (char *)*param_3;
          sVar2 = strlen(__s);
          if (sVar2 <= 0x7fffffffU - iVar6) {
            std::__cxx11::string::_M_append((char *)param_1,(uint)__s);
            bVar1 = false;
            goto LAB_00014464;
          }
          std::__throw_length_error("basic_string::append");
        }
        else if (iVar6 != 0x7fffffff) {
          std::__cxx11::string::_M_append((char *)param_1,0x3ee44);
          iVar6 = param_1[1];
          goto LAB_00014438;
        }
        std::__throw_length_error("basic_string::append");
        goto LAB_000144c8;
      }
LAB_00014464:
      param_3 = param_3 + 1;
      param_5 = param_5 >> 1 | param_6 << 0x1f;
      param_6 = param_6 >> 1;
    } while (*param_3 != 0);
  }
  return param_1;
}



/* ===== FUN_000144fc @ 000144fc size=432 ===== */

void FUN_000144fc(uint param_1,uint param_2)

{
  undefined1 *local_28 [2];
  undefined1 auStack_20 [20];
  
  if ((param_1 & 0xfff) != 0) {
    FUN_00014330(local_28,&DAT_0003c884,&PTR_DAT_000621d0,param_1 & 0xfff,param_1,param_2);
    printf("\t%s\n",local_28[0]);
    if (local_28[0] != auStack_20) {
      operator_delete(local_28[0]);
    }
  }
  if ((param_1 & 0xf000) != 0) {
    FUN_00014330(local_28,&DAT_0003c890,DAT_000146d0,param_2 >> 0xc,param_1 >> 0xc | param_2 << 0x14
                 ,param_2 >> 0xc);
    printf("\t%s\n",local_28[0]);
    if (local_28[0] != auStack_20) {
      operator_delete(local_28[0]);
    }
  }
  if ((param_1 & 0xff0000) != 0) {
    FUN_00014330(local_28,"SECAM",DAT_000146d4,param_2 >> 0x10,param_1 >> 0x10 | param_2 << 0x10,
                 param_2 >> 0x10);
    printf("\t%s\n",local_28[0]);
    if (local_28[0] != auStack_20) {
      operator_delete(local_28[0]);
    }
  }
  if ((param_1 & 0xf000000) != 0) {
    FUN_00014330(local_28,&DAT_0003c8a0,DAT_000146d8,param_1 & 0xf000000,
                 param_1 >> 0x18 | param_2 << 8,param_2 >> 0x18);
    printf("\t%s\n",local_28[0]);
    if (local_28[0] != auStack_20) {
      operator_delete(local_28[0]);
      return;
    }
  }
  return;
}



/* ===== FUN_000146dc @ 000146dc size=608 ===== */

char * FUN_000146dc(char *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined4 extraout_r3;
  undefined4 uVar1;
  undefined1 *local_38 [2];
  undefined1 auStack_30 [20];
  
  *(char **)param_1 = param_1 + 8;
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  if ((param_3 & 0xfff) != 0) {
    FUN_00014330(local_38,&DAT_0003c884,&PTR_DAT_000621d0,0,param_3,param_4);
    std::__cxx11::string::_M_append(param_1,(uint)local_38[0]);
    if (local_38[0] != auStack_30) {
      operator_delete(local_38[0]);
    }
  }
  if ((param_3 & 0xf000) == 0) {
LAB_00014780:
    if ((param_3 & 0xff0000) != 0) {
      if (*(int *)(param_1 + 4) != 0) {
        if (*(int *)(param_1 + 4) == 0x7fffffff) goto LAB_00014908;
        std::__cxx11::string::_M_append(param_1,0x40fa0);
      }
      FUN_00014330(local_38,"SECAM",DAT_00014950,param_4 >> 0x10,param_3 >> 0x10 | param_4 << 0x10,
                   param_4 >> 0x10);
      std::__cxx11::string::_M_append(param_1,(uint)local_38[0]);
      if (local_38[0] != auStack_30) {
        operator_delete(local_38[0]);
      }
    }
    if ((param_3 & 0xf000000) == 0) {
      return param_1;
    }
    uVar1 = 0;
    if (*(int *)(param_1 + 4) == 0) {
LAB_00014838:
      FUN_00014330(local_38,&DAT_0003c8a0,DAT_00014954,uVar1,param_3 >> 0x18 | param_4 << 8,
                   param_4 >> 0x18);
      std::__cxx11::string::_M_append(param_1,(uint)local_38[0]);
      if (local_38[0] != auStack_30) {
        operator_delete(local_38[0]);
      }
      return param_1;
    }
    if (*(int *)(param_1 + 4) != 0x7fffffff) {
      std::__cxx11::string::_M_append(param_1,0x40fa0);
      uVar1 = extraout_r3;
      goto LAB_00014838;
    }
  }
  else {
    if (*(int *)(param_1 + 4) == 0) {
LAB_00014738:
      FUN_00014330(local_38,&DAT_0003c890,DAT_0001494c,param_4 >> 0xc,
                   param_3 >> 0xc | param_4 << 0x14,param_4 >> 0xc);
      std::__cxx11::string::_M_append(param_1,(uint)local_38[0]);
      if (local_38[0] != auStack_30) {
        operator_delete(local_38[0]);
      }
      goto LAB_00014780;
    }
    if (*(int *)(param_1 + 4) != 0x7fffffff) {
      std::__cxx11::string::_M_append(param_1,0x40fa0);
      goto LAB_00014738;
    }
    std::__throw_length_error("basic_string::append");
  }
  std::__throw_length_error("basic_string::append");
LAB_00014908:
  std::__throw_length_error("basic_string::append");
  if (local_38[0] != auStack_30) {
    operator_delete(local_38[0]);
  }
  if (param_1 + 8 != *(char **)param_1) {
    operator_delete(*(char **)param_1);
  }
                    /* WARNING: Subroutine does not return */
  __cxa_end_cleanup();
}



/* ===== FUN_00014958 @ 00014958 size=428 ===== */

char * FUN_00014958(char *param_1,uint param_2,uint *param_3)

{
  size_t sVar1;
  uint uVar2;
  uint *unaff_r4;
  char *__s;
  char acStack_44 [12];
  uint *local_38 [2];
  uint auStack_30 [4];
  
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  uVar2 = *param_3;
  *(char **)param_1 = param_1 + 8;
  while (uVar2 != 0) {
    if ((uVar2 & param_2) != 0) {
      if (*(int *)(param_1 + 4) != 0) {
        if (1 < 0x7fffffffU - *(int *)(param_1 + 4)) {
          std::__cxx11::string::_M_append(param_1,0x40f78);
          __s = (char *)param_3[1];
          sVar1 = strlen(__s);
          if (sVar1 <= 0x7fffffffU - *(int *)(param_1 + 4)) goto LAB_000149d8;
          std::__throw_length_error("basic_string::append");
        }
        std::__throw_length_error("basic_string::append");
        goto LAB_00014ad4;
      }
      __s = (char *)param_3[1];
      strlen(__s);
LAB_000149d8:
      std::__cxx11::string::_M_append(param_1,(uint)__s);
      param_2 = param_2 & ~*param_3;
    }
    unaff_r4 = param_3 + 2;
    param_3 = unaff_r4;
    uVar2 = *unaff_r4;
  }
  if (param_2 != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      param_3 = unaff_r4;
      if (0x7fffffffU - *(int *)(param_1 + 4) < 2) {
LAB_00014ad4:
        std::__throw_length_error("basic_string::append");
        if (local_38[0] != param_3) {
          operator_delete(local_38[0]);
        }
        if (param_1 + 8 != *(char **)param_1) {
          operator_delete(*(char **)param_1);
        }
                    /* WARNING: Subroutine does not return */
        __cxa_end_cleanup();
      }
      std::__cxx11::string::_M_append(param_1,0x40f78);
    }
    sprintf(acStack_44,"%08x",param_2);
    local_38[0] = auStack_30;
    sVar1 = strlen(acStack_44);
    std::__cxx11::string::_M_construct<char_const*>(local_38,acStack_44,acStack_44 + sVar1,0);
    std::__cxx11::string::_M_append(param_1,(uint)local_38[0]);
    if (local_38[0] != auStack_30) {
      operator_delete(local_38[0]);
    }
  }
  return param_1;
}



/* ===== FUN_00014b08 @ 00014b08 size=24 ===== */

undefined4 FUN_00014b08(undefined4 param_1,undefined4 param_2)

{
  FUN_00014958(param_1,param_2,DAT_00014b20);
  return param_1;
}



/* ===== FUN_00014b24 @ 00014b24 size=24 ===== */

undefined4 FUN_00014b24(undefined4 param_1,undefined4 param_2)

{
  FUN_00014958(param_1,param_2,DAT_00014b3c);
  return param_1;
}



/* ===== FUN_00014b40 @ 00014b40 size=24 ===== */

undefined4 FUN_00014b40(undefined4 param_1,undefined4 param_2)

{
  FUN_00014958(param_1,param_2,DAT_00014b58);
  return param_1;
}



/* ===== FUN_00014b5c @ 00014b5c size=500 ===== */

int * FUN_00014b5c(int *param_1,int param_2)

{
  size_t sVar1;
  undefined4 *puVar2;
  int iVar3;
  int *extraout_r3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 *local_48 [2];
  undefined1 auStack_40 [16];
  undefined4 *local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar7 = DAT_00014d80;
  iVar5 = DAT_00014d7c;
  iVar3 = DAT_00014d78;
  if (param_2 == 1) {
    *param_1 = (int)(param_1 + 2);
    std::__cxx11::string::_M_construct<char_const*>(param_1,iVar7 + -10,iVar7,0);
    return param_1;
  }
  if (param_2 == 2) {
    *param_1 = (int)(param_1 + 2);
    std::__cxx11::string::_M_construct<char_const*>(param_1,iVar5 + -0xd,iVar5,0);
    return param_1;
  }
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 2);
    std::__cxx11::string::_M_construct<char_const*>(param_1,iVar3 + -7,iVar3,0);
    return param_1;
  }
  sprintf((char *)&local_30,"%08x",param_2);
  local_48[0] = auStack_40;
  sVar1 = strlen((char *)&local_30);
  std::__cxx11::string::_M_construct<char_const*>(local_48,&local_30,(int)&local_30 + sVar1,0);
  puVar2 = (undefined4 *)std::__cxx11::string::_M_replace((uint)local_48,0,(char *)0x0,0x3c8d4);
  puVar6 = puVar2 + 2;
  local_30 = (undefined4 *)*puVar2;
  if (local_30 == puVar6) {
    uStack_20 = puVar2[4];
    uStack_1c = puVar2[5];
    local_28 = *puVar6;
    uStack_24 = puVar2[3];
    local_30 = &local_28;
  }
  else {
    local_28 = puVar2[2];
  }
  local_2c = puVar2[1];
  *puVar2 = puVar6;
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 2) = 0;
  if (local_2c == 0x7fffffff) {
    puVar2 = (undefined4 *)std::__throw_length_error("basic_string::append");
    piVar4 = extraout_r3;
  }
  else {
    puVar2 = (undefined4 *)std::__cxx11::string::_M_append((char *)&local_30,0x41120);
    *param_1 = (int)(param_1 + 2);
    piVar4 = puVar2 + 2;
    if ((int *)*puVar2 != piVar4) {
      *param_1 = (int)*puVar2;
      param_1[2] = puVar2[2];
      goto LAB_00014c70;
    }
  }
  iVar7 = piVar4[1];
  iVar5 = piVar4[2];
  iVar3 = piVar4[3];
  param_1[2] = *piVar4;
  param_1[3] = iVar7;
  param_1[4] = iVar5;
  param_1[5] = iVar3;
LAB_00014c70:
  param_1[1] = puVar2[1];
  *puVar2 = piVar4;
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 2) = 0;
  if (local_30 != &local_28) {
    operator_delete(local_30);
  }
  if (local_48[0] != auStack_40) {
    operator_delete(local_48[0]);
  }
  return param_1;
}



/* ===== FUN_00014d84 @ 00014d84 size=588 ===== */

int * FUN_00014d84(int *param_1,undefined4 param_2)

{
  size_t sVar1;
  undefined4 *puVar2;
  int iVar3;
  int *extraout_r3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined1 *local_48 [2];
  undefined1 auStack_40 [16];
  undefined4 *local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar6 = DAT_00015034;
  iVar3 = DAT_0001501c;
  switch(param_2) {
  case 0:
    *param_1 = (int)(param_1 + 2);
    std::__cxx11::string::_M_construct<char_const*>(param_1,iVar3 + -7,iVar3,0);
    return param_1;
  case 1:
    iVar3 = DAT_00015020;
    break;
  case 2:
    iVar3 = DAT_00015024;
    goto LAB_00014e34;
  case 3:
    iVar3 = DAT_00015028;
    break;
  case 4:
    iVar3 = DAT_0001502c;
    goto LAB_00014dc0;
  case 5:
    iVar3 = DAT_00015030;
LAB_00014e34:
    *param_1 = (int)(param_1 + 2);
    std::__cxx11::string::_M_construct<char_const*>(param_1,iVar3 + -4,iVar3,0);
    return param_1;
  case 6:
    *param_1 = (int)(param_1 + 2);
    std::__cxx11::string::_M_construct<char_const*>(param_1,iVar6 + -6,iVar6,0);
    return param_1;
  case 7:
    iVar3 = DAT_00015018;
LAB_00014dc0:
    *param_1 = (int)(param_1 + 2);
    std::__cxx11::string::_M_construct<char_const*>(param_1,iVar3 + -10,iVar3,0);
    return param_1;
  default:
    sprintf((char *)&local_30,"%08x",param_2);
    local_48[0] = auStack_40;
    sVar1 = strlen((char *)&local_30);
    std::__cxx11::string::_M_construct<char_const*>(local_48,&local_30,(int)&local_30 + sVar1,0);
    puVar2 = (undefined4 *)std::__cxx11::string::_M_replace((uint)local_48,0,(char *)0x0,0x3c8d4);
    puVar5 = puVar2 + 2;
    local_30 = (undefined4 *)*puVar2;
    if (local_30 == puVar5) {
      uStack_20 = puVar2[4];
      uStack_1c = puVar2[5];
      local_28 = *puVar5;
      uStack_24 = puVar2[3];
      local_30 = &local_28;
    }
    else {
      local_28 = puVar2[2];
    }
    local_2c = puVar2[1];
    *puVar2 = puVar5;
    puVar2[1] = 0;
    *(undefined1 *)(puVar2 + 2) = 0;
    if (local_2c == 0x7fffffff) {
      puVar2 = (undefined4 *)std::__throw_length_error("basic_string::append");
      piVar4 = extraout_r3;
    }
    else {
      puVar2 = (undefined4 *)std::__cxx11::string::_M_append((char *)&local_30,0x41120);
      *param_1 = (int)(param_1 + 2);
      piVar4 = puVar2 + 2;
      if ((int *)*puVar2 != piVar4) {
        *param_1 = (int)*puVar2;
        param_1[2] = puVar2[2];
        goto LAB_00014f84;
      }
    }
    iVar7 = piVar4[1];
    iVar6 = piVar4[2];
    iVar3 = piVar4[3];
    param_1[2] = *piVar4;
    param_1[3] = iVar7;
    param_1[4] = iVar6;
    param_1[5] = iVar3;
LAB_00014f84:
    param_1[1] = puVar2[1];
    *puVar2 = piVar4;
    puVar2[1] = 0;
    *(undefined1 *)(puVar2 + 2) = 0;
    if (local_30 != &local_28) {
      operator_delete(local_30);
    }
    if (local_48[0] == auStack_40) {
      return param_1;
    }
    operator_delete(local_48[0]);
    return param_1;
  }
  *param_1 = (int)(param_1 + 2);
  std::__cxx11::string::_M_construct<char_const*>(param_1,iVar3 + -8,iVar3,0);
  return param_1;
}



/* ===== FUN_00015038 @ 00015038 size=720 ===== */

int * FUN_00015038(int *param_1,int param_2)

{
  size_t sVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined1 *local_48 [2];
  undefined1 auStack_40 [16];
  undefined4 *local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar8 = DAT_0001532c;
  iVar6 = DAT_00015320;
  iVar4 = DAT_0001530c;
  iVar3 = DAT_0001531c;
  if (param_2 != 4) {
    if (param_2 < 5) {
      iVar3 = DAT_00015328;
      if (param_2 == 1) goto LAB_000150b0;
      if (param_2 < 2) {
        iVar6 = DAT_00015318;
        if (param_2 == 0) goto LAB_00015110;
      }
      else {
        if (param_2 == 2) {
          *param_1 = (int)(param_1 + 2);
          std::__cxx11::string::_M_construct<char_const*>(param_1,iVar8 + -8,iVar8,0);
          return param_1;
        }
        iVar3 = DAT_00015310;
        if (param_2 == 3) goto LAB_000150b0;
      }
    }
    else {
      if (param_2 == 8) {
        *param_1 = (int)(param_1 + 2);
        std::__cxx11::string::_M_construct<char_const*>(param_1,iVar6 + -10,iVar6,0);
        return param_1;
      }
      if (param_2 < 9) {
        iVar6 = DAT_00015324;
        if (param_2 == 6) {
LAB_00015110:
          *param_1 = (int)(param_1 + 2);
          std::__cxx11::string::_M_construct<char_const*>(param_1,iVar6 + -7,iVar6,0);
          return param_1;
        }
        if (param_2 == 7) {
          *param_1 = (int)(param_1 + 2);
          std::__cxx11::string::_M_construct<char_const*>(param_1,iVar4 + -0x1a,iVar4,0);
          return param_1;
        }
      }
      else {
        iVar4 = DAT_00015330;
        if ((param_2 == 0x80) || (iVar4 = DAT_00015314, param_2 == 0x81)) {
          *param_1 = (int)(param_1 + 2);
          std::__cxx11::string::_M_construct<char_const*>(param_1,iVar4 + -0x12,iVar4,0);
          return param_1;
        }
      }
    }
    sprintf((char *)&local_30,"%08x",param_2);
    local_48[0] = auStack_40;
    sVar1 = strlen((char *)&local_30);
    std::__cxx11::string::_M_construct<char_const*>(local_48,&local_30,(int)&local_30 + sVar1,0);
    puVar2 = (undefined4 *)std::__cxx11::string::_M_replace((uint)local_48,0,(char *)0x0,0x3c8d4);
    puVar7 = puVar2 + 2;
    local_30 = (undefined4 *)*puVar2;
    if (local_30 == puVar7) {
      uStack_20 = puVar2[4];
      uStack_1c = puVar2[5];
      local_28 = *puVar7;
      uStack_24 = puVar2[3];
      local_30 = &local_28;
    }
    else {
      local_28 = puVar2[2];
    }
    local_2c = puVar2[1];
    *puVar2 = puVar7;
    puVar2[1] = 0;
    *(undefined1 *)(puVar2 + 2) = 0;
    if (local_2c != 0x7fffffff) {
      puVar2 = (undefined4 *)std::__cxx11::string::_M_append((char *)&local_30,0x41120);
      *param_1 = (int)(param_1 + 2);
      piVar5 = puVar2 + 2;
      if ((int *)*puVar2 == piVar5) {
        iVar8 = puVar2[3];
        iVar6 = puVar2[4];
        iVar4 = puVar2[5];
        param_1[2] = *piVar5;
        param_1[3] = iVar8;
        param_1[4] = iVar6;
        param_1[5] = iVar4;
      }
      else {
        *param_1 = (int)*puVar2;
        param_1[2] = puVar2[2];
      }
      param_1[1] = puVar2[1];
      *puVar2 = piVar5;
      puVar2[1] = 0;
      *(undefined1 *)(puVar2 + 2) = 0;
      if (local_30 != &local_28) {
        operator_delete(local_30);
      }
      if (local_48[0] != auStack_40) {
        operator_delete(local_48[0]);
      }
      return param_1;
    }
    std::__throw_length_error("basic_string::append");
    if (local_30 != &local_28) {
      operator_delete(local_30);
    }
    if (local_48[0] != auStack_40) {
      operator_delete(local_48[0]);
    }
                    /* WARNING: Subroutine does not return */
    __cxa_end_cleanup();
  }
LAB_000150b0:
  *param_1 = (int)(param_1 + 2);
  std::__cxx11::string::_M_construct<char_const*>(param_1,iVar3 + -9,iVar3,0);
  return param_1;
}



/* ===== FUN_00015334 @ 00015334 size=596 ===== */

int * FUN_00015334(int *param_1,undefined4 param_2)

{
  int iVar1;
  size_t sVar2;
  undefined4 *puVar3;
  int iVar4;
  int *extraout_r3;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined1 *local_48 [2];
  undefined1 auStack_40 [16];
  undefined4 *local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = DAT_000155f8;
  iVar8 = DAT_000155ec;
  iVar7 = DAT_000155e8;
  iVar4 = DAT_000155e0;
  switch(param_2) {
  case 0:
    iVar4 = DAT_000155dc;
    goto LAB_000153a0;
  case 1:
    *param_1 = (int)(param_1 + 2);
    std::__cxx11::string::_M_construct<char_const*>(param_1,iVar4 + -4,iVar4,0);
    break;
  case 2:
    iVar4 = DAT_000155e4;
LAB_000153a0:
    *param_1 = (int)(param_1 + 2);
    std::__cxx11::string::_M_construct<char_const*>(param_1,iVar4 + -3,iVar4,0);
    return param_1;
  case 3:
    *param_1 = (int)(param_1 + 2);
    std::__cxx11::string::_M_construct<char_const*>(param_1,iVar7 + -6,iVar7,0);
    break;
  case 4:
    *param_1 = (int)(param_1 + 2);
    std::__cxx11::string::_M_construct<char_const*>(param_1,iVar8 + -10,iVar8,0);
    break;
  case 5:
    iVar4 = DAT_000155f0;
    goto LAB_00015378;
  case 6:
    iVar4 = DAT_000155f4;
    goto LAB_00015378;
  case 7:
    *param_1 = (int)(param_1 + 2);
    std::__cxx11::string::_M_construct<char_const*>(param_1,iVar1 + -0xb,iVar1,0);
    break;
  case 8:
    iVar4 = DAT_000155fc;
    goto LAB_00015378;
  case 9:
    iVar4 = DAT_000155d8;
LAB_00015378:
    *param_1 = (int)(param_1 + 2);
    std::__cxx11::string::_M_construct<char_const*>(param_1,iVar4 + -0x15,iVar4,0);
    break;
  default:
    sprintf((char *)&local_30,"%08x",param_2);
    local_48[0] = auStack_40;
    sVar2 = strlen((char *)&local_30);
    std::__cxx11::string::_M_construct<char_const*>(local_48,&local_30,(int)&local_30 + sVar2,0);
    puVar3 = (undefined4 *)std::__cxx11::string::_M_replace((uint)local_48,0,(char *)0x0,0x3c8d4);
    puVar6 = puVar3 + 2;
    local_30 = (undefined4 *)*puVar3;
    if (local_30 == puVar6) {
      uStack_20 = puVar3[4];
      uStack_1c = puVar3[5];
      local_28 = *puVar6;
      uStack_24 = puVar3[3];
      local_30 = &local_28;
    }
    else {
      local_28 = puVar3[2];
    }
    local_2c = puVar3[1];
    *puVar3 = puVar6;
    puVar3[1] = 0;
    *(undefined1 *)(puVar3 + 2) = 0;
    if (local_2c == 0x7fffffff) {
      puVar3 = (undefined4 *)std::__throw_length_error("basic_string::append");
      piVar5 = extraout_r3;
LAB_000155a0:
      iVar8 = piVar5[1];
      iVar7 = piVar5[2];
      iVar4 = piVar5[3];
      param_1[2] = *piVar5;
      param_1[3] = iVar8;
      param_1[4] = iVar7;
      param_1[5] = iVar4;
    }
    else {
      puVar3 = (undefined4 *)std::__cxx11::string::_M_append((char *)&local_30,0x41120);
      *param_1 = (int)(param_1 + 2);
      piVar5 = puVar3 + 2;
      if ((int *)*puVar3 == piVar5) goto LAB_000155a0;
      *param_1 = (int)*puVar3;
      param_1[2] = puVar3[2];
    }
    param_1[1] = puVar3[1];
    *puVar3 = piVar5;
    puVar3[1] = 0;
    *(undefined1 *)(puVar3 + 2) = 0;
    if (local_30 != &local_28) {
      operator_delete(local_30);
    }
    if (local_48[0] != auStack_40) {
      operator_delete(local_48[0]);
    }
  }
  return param_1;
}



/* ===== FUN_00015600 @ 00015600 size=312 ===== */

void FUN_00015600(uint *param_1)

{
  char *__format;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *local_20 [2];
  undefined1 auStack_18 [16];
  
  uVar4 = param_1[0x12];
  printf("%ld.%06ld: event %u, pending %u: ",param_1[0x14],(int)param_1[0x15] / 1000,param_1[0x13],
         uVar4);
  iVar2 = *param_1 - 1;
  switch(iVar2) {
  case 0:
    FUN_00015334(local_20,(char)param_1[2]);
    printf("vsync %s\n",local_20[0]);
    if (local_20[0] != auStack_18) {
      operator_delete(local_20[0]);
    }
    break;
  case 1:
    puts("eos");
    return;
  case 2:
    FUN_000181bc(param_1);
    return;
  case 3:
    printf("frame_sync %d\n",param_1[2]);
    return;
  case 4:
    printf("source_change: pad/input=%d changes: %x\n",param_1[0x16],param_1[2],iVar2,uVar4);
    return;
  case 5:
    uVar3 = param_1[2];
    uVar1 = param_1[4];
    if ((uVar3 & 1) == 0) {
      printf("motion_det regions 0x%x\n",uVar1,uVar1,uVar3,uVar4);
    }
    else {
      printf("motion_det frame %d, regions 0x%x\n",param_1[3],uVar1,uVar3,uVar4);
    }
    break;
  default:
    if (*param_1 < 0x8000000) {
      __format = "unknown event (%08x)\n";
    }
    else {
      __format = "unknown private event (%08x)\n";
    }
    printf(__format);
  }
  return;
}



/* ===== FUN_00015768 @ 00015768 size=704 ===== */

int * FUN_00015768(int *param_1,undefined4 param_2)

{
  size_t sVar1;
  undefined4 *puVar2;
  int iVar3;
  int *extraout_r3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined1 *local_48 [2];
  undefined1 auStack_40 [16];
  undefined4 *local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar7 = DAT_00015ab4;
  iVar6 = DAT_00015aa0;
  iVar3 = DAT_00015a84;
  switch(param_2) {
  case 0:
    iVar3 = DAT_00015a88;
    goto LAB_000157dc;
  case 1:
    iVar3 = DAT_00015a8c;
    goto LAB_00015804;
  case 2:
    iVar3 = DAT_00015a90;
LAB_00015804:
    *param_1 = (int)(param_1 + 2);
    std::__cxx11::string::_M_construct<char_const*>(param_1,iVar3 + -10,iVar3,0);
    return param_1;
  case 3:
    iVar3 = DAT_00015a94;
    goto LAB_00015834;
  case 4:
    iVar3 = DAT_00015a98;
    goto LAB_0001585c;
  case 5:
    iVar3 = DAT_00015a9c;
LAB_0001585c:
    *param_1 = (int)(param_1 + 2);
    std::__cxx11::string::_M_construct<char_const*>(param_1,iVar3 + -0xc,iVar3,0);
    return param_1;
  case 6:
    *param_1 = (int)(param_1 + 2);
    std::__cxx11::string::_M_construct<char_const*>(param_1,iVar6 + -0xd,iVar6,0);
    break;
  case 7:
    iVar3 = DAT_00015aa4;
    goto LAB_000158a8;
  case 8:
    iVar3 = DAT_00015aa8;
LAB_000158a8:
    *param_1 = (int)(param_1 + 2);
    std::__cxx11::string::_M_construct<char_const*>(param_1,iVar3 + -4,iVar3,0);
    return param_1;
  case 9:
    iVar3 = DAT_00015aac;
LAB_00015834:
    *param_1 = (int)(param_1 + 2);
    std::__cxx11::string::_M_construct<char_const*>(param_1,iVar3 + -8,iVar3,0);
    return param_1;
  case 10:
    iVar3 = DAT_00015ab0;
LAB_000157dc:
    *param_1 = (int)(param_1 + 2);
    std::__cxx11::string::_M_construct<char_const*>(param_1,iVar3 + -7,iVar3,0);
    return param_1;
  case 0xb:
    *param_1 = (int)(param_1 + 2);
    std::__cxx11::string::_M_construct<char_const*>(param_1,iVar7 + -3,iVar7,0);
    break;
  case 0xc:
    *param_1 = (int)(param_1 + 2);
    std::__cxx11::string::_M_construct<char_const*>(param_1,iVar3 + -6,iVar3,0);
    break;
  default:
    sprintf((char *)&local_30,"%08x",param_2);
    local_48[0] = auStack_40;
    sVar1 = strlen((char *)&local_30);
    std::__cxx11::string::_M_construct<char_const*>(local_48,&local_30,(int)&local_30 + sVar1,0);
    puVar2 = (undefined4 *)std::__cxx11::string::_M_replace((uint)local_48,0,(char *)0x0,0x3c8d4);
    puVar5 = puVar2 + 2;
    local_30 = (undefined4 *)*puVar2;
    if (local_30 == puVar5) {
      uStack_20 = puVar2[4];
      uStack_1c = puVar2[5];
      local_28 = *puVar5;
      uStack_24 = puVar2[3];
      local_30 = &local_28;
    }
    else {
      local_28 = puVar2[2];
    }
    local_2c = puVar2[1];
    *puVar2 = puVar5;
    puVar2[1] = 0;
    *(undefined1 *)(puVar2 + 2) = 0;
    if (local_2c == 0x7fffffff) {
      puVar2 = (undefined4 *)std::__throw_length_error("basic_string::append");
      piVar4 = extraout_r3;
LAB_00015a4c:
      iVar7 = piVar4[1];
      iVar6 = piVar4[2];
      iVar3 = piVar4[3];
      param_1[2] = *piVar4;
      param_1[3] = iVar7;
      param_1[4] = iVar6;
      param_1[5] = iVar3;
    }
    else {
      puVar2 = (undefined4 *)std::__cxx11::string::_M_append((char *)&local_30,0x41120);
      *param_1 = (int)(param_1 + 2);
      piVar4 = puVar2 + 2;
      if ((int *)*puVar2 == piVar4) goto LAB_00015a4c;
      *param_1 = (int)*puVar2;
      param_1[2] = puVar2[2];
    }
    param_1[1] = puVar2[1];
    *puVar2 = piVar4;
    puVar2[1] = 0;
    *(undefined1 *)(puVar2 + 2) = 0;
    if (local_30 != &local_28) {
      operator_delete(local_30);
    }
    if (local_48[0] != auStack_40) {
      operator_delete(local_48[0]);
    }
  }
  return param_1;
}



/* ===== FUN_00015ab8 @ 00015ab8 size=712 ===== */

int * FUN_00015ab8(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  undefined4 *puVar6;
  int iVar7;
  int *extraout_r3;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined1 *local_48 [2];
  undefined1 auStack_40 [16];
  undefined4 *local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar4 = DAT_00015e08;
  iVar3 = DAT_00015e04;
  iVar2 = DAT_00015e00;
  iVar1 = DAT_00015dfc;
  iVar11 = DAT_00015df8;
  iVar10 = DAT_00015de8;
  iVar7 = DAT_00015de0;
  switch(param_2) {
  case 0:
    *param_1 = (int)(param_1 + 2);
    std::__cxx11::string::_M_construct<char_const*>(param_1,iVar7 + -7,iVar7,0);
    break;
  case 1:
    iVar7 = DAT_00015de4;
    goto LAB_00015b4c;
  case 2:
    *param_1 = (int)(param_1 + 2);
    std::__cxx11::string::_M_construct<char_const*>(param_1,iVar10 + -0xc,iVar10,0);
    break;
  case 3:
    iVar7 = DAT_00015dec;
LAB_00015b4c:
    *param_1 = (int)(param_1 + 2);
    std::__cxx11::string::_M_construct<char_const*>(param_1,iVar7 + -0xd,iVar7,0);
    return param_1;
  case 4:
    iVar7 = DAT_00015df0;
    goto LAB_00015b98;
  case 5:
    iVar7 = DAT_00015df4;
    goto LAB_00015b08;
  case 6:
    *param_1 = (int)(param_1 + 2);
    std::__cxx11::string::_M_construct<char_const*>(param_1,iVar11 + -0x12,iVar11,0);
    break;
  case 7:
    *param_1 = (int)(param_1 + 2);
    std::__cxx11::string::_M_construct<char_const*>(param_1,iVar1 + -0x11,iVar1,0);
    break;
  case 8:
    *param_1 = (int)(param_1 + 2);
    std::__cxx11::string::_M_construct<char_const*>(param_1,iVar2 + -0x14,iVar2,0);
    break;
  case 9:
    *param_1 = (int)(param_1 + 2);
    std::__cxx11::string::_M_construct<char_const*>(param_1,iVar3 + -0x19,iVar3,0);
    break;
  case 10:
    *param_1 = (int)(param_1 + 2);
    std::__cxx11::string::_M_construct<char_const*>(param_1,iVar4 + -0x18,iVar4,0);
    break;
  case 0xb:
    iVar7 = DAT_00015e0c;
LAB_00015b98:
    *param_1 = (int)(param_1 + 2);
    std::__cxx11::string::_M_construct<char_const*>(param_1,iVar7 + -0xb,iVar7,0);
    return param_1;
  case 0xc:
    iVar7 = DAT_00015ddc;
LAB_00015b08:
    *param_1 = (int)(param_1 + 2);
    std::__cxx11::string::_M_construct<char_const*>(param_1,iVar7 + -10,iVar7,0);
    break;
  default:
    sprintf((char *)&local_30,"%08x",param_2);
    local_48[0] = auStack_40;
    sVar5 = strlen((char *)&local_30);
    std::__cxx11::string::_M_construct<char_const*>(local_48,&local_30,(int)&local_30 + sVar5,0);
    puVar6 = (undefined4 *)std::__cxx11::string::_M_replace((uint)local_48,0,(char *)0x0,0x3c8d4);
    puVar9 = puVar6 + 2;
    local_30 = (undefined4 *)*puVar6;
    if (local_30 == puVar9) {
      uStack_20 = puVar6[4];
      uStack_1c = puVar6[5];
      local_28 = *puVar9;
      uStack_24 = puVar6[3];
      local_30 = &local_28;
    }
    else {
      local_28 = puVar6[2];
    }
    local_2c = puVar6[1];
    *puVar6 = puVar9;
    puVar6[1] = 0;
    *(undefined1 *)(puVar6 + 2) = 0;
    if (local_2c == 0x7fffffff) {
      puVar6 = (undefined4 *)std::__throw_length_error("basic_string::append");
      piVar8 = extraout_r3;
LAB_00015da4:
      iVar11 = piVar8[1];
      iVar10 = piVar8[2];
      iVar7 = piVar8[3];
      param_1[2] = *piVar8;
      param_1[3] = iVar11;
      param_1[4] = iVar10;
      param_1[5] = iVar7;
    }
    else {
      puVar6 = (undefined4 *)std::__cxx11::string::_M_append((char *)&local_30,0x41120);
      *param_1 = (int)(param_1 + 2);
      piVar8 = puVar6 + 2;
      if ((int *)*puVar6 == piVar8) goto LAB_00015da4;
      *param_1 = (int)*puVar6;
      param_1[2] = puVar6[2];
    }
    param_1[1] = puVar6[1];
    *puVar6 = piVar8;
    puVar6[1] = 0;
    *(undefined1 *)(puVar6 + 2) = 0;
    if (local_30 != &local_28) {
      operator_delete(local_30);
    }
    if (local_48[0] != auStack_40) {
      operator_delete(local_48[0]);
    }
  }
  return param_1;
}



/* ===== FUN_00015e10 @ 00015e10 size=1864 ===== */

void FUN_00015e10(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  uint in_fpscr;
  double dVar15;
  double dVar16;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined1 *local_58 [2];
  undefined1 auStack_50 [16];
  undefined1 *local_40 [2];
  undefined1 auStack_38 [20];
  
  uStack_70 = *DAT_0001661c;
  uStack_6c = DAT_0001661c[1];
  uStack_68 = DAT_0001661c[2];
  uStack_64 = DAT_0001661c[3];
  local_60 = DAT_0001661c[4];
  uStack_5c = DAT_0001661c[5];
  FUN_00015ab8(local_40,*param_1);
  printf("Format %s:\n",local_40[0]);
  if (local_40[0] != auStack_38) {
    operator_delete(local_40[0]);
  }
  switch(*param_1) {
  case 1:
  case 2:
    printf("\tWidth/Height      : %u/%u\n",param_1[1],param_1[2]);
    FUN_000139c8(local_40,param_1[3]);
    printf("\tPixel Format      : \'%s\'\n",local_40[0]);
    if (local_40[0] != auStack_38) {
      operator_delete(local_40[0]);
    }
    FUN_00015334(local_40,param_1[4]);
    printf("\tField             : %s\n",local_40[0]);
    if (local_40[0] != auStack_38) {
      operator_delete(local_40[0]);
    }
    printf("\tBytes per Line    : %u\n",param_1[5]);
    printf("\tSize Image        : %u\n",param_1[6]);
    FUN_00015768(local_40,param_1[7]);
    printf("\tColorspace        : %s\n",local_40[0]);
    if (local_40[0] != auStack_38) {
      operator_delete(local_40[0]);
    }
    FUN_00014d84(local_40,param_1[0xc]);
    printf("\tTransfer Function : %s\n",local_40[0]);
    if (local_40[0] != auStack_38) {
      operator_delete(local_40[0]);
    }
    FUN_00015038(local_40,param_1[10]);
    printf("\tYCbCr/HSV Encoding: %s\n",local_40[0]);
    if (local_40[0] != auStack_38) {
      operator_delete(local_40[0]);
    }
    FUN_00014b5c(local_40,param_1[0xb]);
    printf("\tQuantization      : %s\n",local_40[0]);
    if (local_40[0] != auStack_38) {
      operator_delete(local_40[0]);
    }
    if (param_1[8] != -0x1123502) {
      return;
    }
    FUN_00014958(local_40,param_1[9],DAT_00016620);
    printf("\tFlags             : %s\n",local_40[0]);
    goto LAB_000162dc;
  case 3:
  case 8:
    printf("\tLeft/Top    : %d/%d\n",param_1[1],param_1[2]);
    printf("\tWidth/Height: %d/%d\n",param_1[3],param_1[4]);
    FUN_00015334(local_40,param_1[5]);
    printf("\tField       : %s\n",local_40[0]);
    if (local_40[0] != auStack_38) {
      operator_delete(local_40[0]);
    }
    printf("\tChroma Key  : 0x%08x\n",param_1[6]);
    printf("\tGlobal Alpha: 0x%02x\n",(uint)*(byte *)(param_1 + 10));
    printf("\tClip Count  : %u\n",param_1[8]);
    iVar11 = param_1[7];
    if ((iVar11 != 0) && (param_1[8] != 0)) {
      uVar13 = 0;
      while( true ) {
        iVar4 = iVar11 + uVar13 * 0x14;
        printf("\t\tClip %2d: %ux%u@%ux%u\n",uVar13,*(undefined4 *)(iVar4 + 8),
               *(undefined4 *)(iVar4 + 0xc),*(undefined4 *)(iVar11 + uVar13 * 0x14),
               *(undefined4 *)(iVar4 + 4));
        if ((uint)param_1[8] <= uVar13 + 1) break;
        iVar11 = param_1[7];
        uVar13 = uVar13 + 1;
      }
    }
    pcVar5 = "Yes, ";
    if (param_1[9] == 0) {
      pcVar5 = "No\n";
    }
    printf("\tClip Bitmap : %s",pcVar5);
    if (param_1[9] != 0) {
      uVar13 = param_1[3];
      iVar11 = param_1[4];
      if (iVar11 == 0) {
        iVar4 = 0;
        iVar11 = 0;
      }
      else {
        iVar8 = 0;
        iVar9 = 0;
        iVar4 = 0;
        do {
          if (uVar13 != 0) {
            uVar6 = 0;
            do {
              uVar7 = uVar6 >> 3;
              uVar12 = uVar6 & 7;
              uVar6 = uVar6 + 1;
              if (((int)(uint)*(byte *)(param_1[9] + iVar8 + uVar7) >> uVar12 & 1U) != 0) {
                iVar4 = iVar4 + 1;
              }
            } while (uVar13 != uVar6);
          }
          iVar9 = iVar9 + 1;
          iVar8 = iVar8 + (uVar13 + 7 >> 3);
        } while (iVar9 != iVar11);
        iVar11 = uVar13 * iVar11;
      }
      printf("%u bits of %u are set\n",iVar4,iVar11);
      return;
    }
    break;
  case 4:
  case 5:
    printf("\tSampling Rate   : %u Hz\n",param_1[1]);
    dVar16 = (double)VectorUnsignedToFloat(param_1[2],(byte)(in_fpscr >> 0x16) & 3);
    dVar15 = (double)VectorUnsignedToFloat(param_1[1],(byte)(in_fpscr >> 0x16) & 3);
    printf("\tOffset          : %u samples (%g secs after leading edge)\n",param_1[2],
           SUB84(dVar16 / dVar15,0),(int)((ulonglong)(dVar16 / dVar15) >> 0x20));
    printf("\tSamples per Line: %u\n",param_1[3]);
    FUN_000139c8(local_40,param_1[4]);
    printf("\tSample Format   : %s\n",local_40[0]);
    if (local_40[0] != auStack_38) {
      operator_delete(local_40[0]);
    }
    printf("\tStart 1st Field : %u\n",param_1[5]);
    printf("\tCount 1st Field : %u\n",param_1[7]);
    printf("\tStart 2nd Field : %u\n",param_1[6]);
    printf("\tCount 2nd Field : %u\n",param_1[8]);
    if (param_1[9] == 0) {
      return;
    }
    FUN_00014958(local_40,param_1[9],&uStack_70);
    printf("\tFlags           : %s\n",local_40[0]);
LAB_000162dc:
    if (local_40[0] != auStack_38) {
      operator_delete(local_40[0]);
    }
    break;
  case 6:
  case 7:
    FUN_00014958(local_40,*(undefined2 *)(param_1 + 1),DAT_00016624);
    printf("\tService Set    : %s\n",local_40[0]);
    if (local_40[0] != auStack_38) {
      operator_delete(local_40[0]);
    }
    uVar2 = DAT_00016624;
    puVar10 = param_1 + 0xd;
    iVar11 = 0;
    do {
      FUN_00014958(local_58,*(undefined2 *)((int)puVar10 + -0x2e),uVar2);
      puVar3 = local_58[0];
      puVar10 = (undefined4 *)((int)puVar10 + 2);
      FUN_00014958(local_40,*(undefined2 *)puVar10,uVar2);
      printf("\tService Line %2d: %8s / %-8s\n",iVar11,puVar3,local_40[0]);
      if (local_40[0] != auStack_38) {
        operator_delete(local_40[0]);
      }
      if (local_58[0] != auStack_50) {
        operator_delete(local_58[0]);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 != 0x18);
    printf("\tI/O Size       : %u\n",param_1[0x1a]);
    return;
  case 9:
  case 10:
    printf("\tWidth/Height      : %u/%u\n",param_1[1],param_1[2]);
    FUN_000139c8(local_40,param_1[3]);
    printf("\tPixel Format      : \'%s\'\n",local_40[0]);
    if (local_40[0] != auStack_38) {
      operator_delete(local_40[0]);
    }
    FUN_00015334(local_40,param_1[4]);
    printf("\tField             : %s\n",local_40[0]);
    if (local_40[0] != auStack_38) {
      operator_delete(local_40[0]);
    }
    printf("\tNumber of planes  : %u\n",(uint)*(byte *)(param_1 + 0x2e));
    FUN_00014958(local_40,*(undefined1 *)((int)param_1 + 0xb9),DAT_00016620);
    printf("\tFlags             : %s\n",local_40[0]);
    if (local_40[0] != auStack_38) {
      operator_delete(local_40[0]);
    }
    FUN_00015768(local_40,param_1[5]);
    printf("\tColorspace        : %s\n",local_40[0]);
    if (local_40[0] != auStack_38) {
      operator_delete(local_40[0]);
    }
    FUN_00014d84(local_40,*(undefined1 *)(param_1 + 0x2f));
    printf("\tTransfer Function : %s\n",local_40[0]);
    if (local_40[0] != auStack_38) {
      operator_delete(local_40[0]);
    }
    FUN_00015038(local_40,*(undefined1 *)((int)param_1 + 0xba));
    printf("\tYCbCr Encoding    : %s\n",local_40[0]);
    if (local_40[0] != auStack_38) {
      operator_delete(local_40[0]);
    }
    FUN_00014b5c(local_40,*(undefined1 *)((int)param_1 + 0xbb));
    printf("\tQuantization      : %s\n",local_40[0]);
    if (local_40[0] != auStack_38) {
      operator_delete(local_40[0]);
    }
    if (*(char *)(param_1 + 0x2e) != '\0') {
      uVar13 = 0;
      puVar10 = param_1;
      do {
        printf("\tPlane %d           :\n",uVar13);
        uVar7 = uVar13 + 1;
        printf("\t   Bytes per Line : %u\n",puVar10[7]);
        puVar1 = puVar10 + 6;
        puVar10 = puVar10 + 5;
        printf("\t   Size Image     : %u\n",*puVar1);
        uVar6 = (uint)*(byte *)(param_1 + 0x2e);
        bVar14 = SBORROW4(uVar7,8);
        iVar11 = uVar13 - 7;
        if (uVar7 != 8) {
          bVar14 = SBORROW4(uVar6,uVar7);
          iVar11 = uVar6 - uVar7;
        }
        uVar13 = uVar7;
      } while ((uVar7 != 8 && uVar6 != uVar7) && iVar11 < 0 == bVar14);
      return;
    }
    break;
  case 0xb:
  case 0xc:
    FUN_000139c8(local_40,param_1[1]);
    printf("\tSample Format   : %s\n",local_40[0]);
    if (local_40[0] != auStack_38) {
      operator_delete(local_40[0]);
    }
    printf("\tBuffer Size     : %u\n",param_1[2]);
  }
  return;
}



/* ===== FUN_00016628 @ 00016628 size=316 ===== */

void FUN_00016628(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *local_78 [2];
  undefined1 auStack_70 [16];
  int local_60;
  undefined4 uStack_5c;
  int local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_58 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  uStack_5c = param_2;
  uStack_44 = uStack_4c;
  uStack_3c = uStack_4c;
  uStack_34 = uStack_4c;
  uStack_2c = uStack_4c;
  uStack_24 = uStack_4c;
  while (iVar1 = FUN_0001391c(param_1,0xc0405602,&local_60), -1 < iVar1) {
    printf("\tIndex       : %d\n",local_60);
    FUN_00015ab8(local_78,param_2);
    printf("\tType        : %s\n",local_78[0]);
    if (local_78[0] != auStack_70) {
      operator_delete(local_78[0]);
    }
    FUN_000139c8(local_78,uStack_34);
    printf("\tPixel Format: \'%s\'",local_78[0]);
    if (local_78[0] != auStack_70) {
      operator_delete(local_78[0]);
    }
    if (local_58 != 0) {
      FUN_00014958(local_78,local_58,DAT_00016790);
      printf(" (%s)",local_78[0]);
      if (local_78[0] != auStack_70) {
        operator_delete(local_78[0]);
      }
    }
    putchar(10);
    printf("\tName        : %s\n",&uStack_54);
    putchar(10);
    local_60 = local_60 + 1;
  }
  return;
}



/* ===== std::__cxx11::string::_M_construct<char_const*> @ 00016794 size=176 ===== */

/* void std::__cxx11::string::_M_construct<char const*>(char const*, char const*,
   std::forward_iterator_tag) */

void std::__cxx11::string::_M_construct<char_const*>(uint *param_1,undefined1 *param_2,int param_3)

{
  undefined1 *__dest;
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint __n;
  undefined8 uVar4;
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  uint local_14;
  
  if (param_2 == (undefined1 *)0x0 && param_3 != 0) {
    uVar4 = std::__throw_logic_error("basic_string::_M_construct null not valid");
    puVar3 = (undefined4 *)((ulonglong)uVar4 >> 0x20);
    if (DAT_0006354c != '\0') {
      FUN_0001391c((int)uVar4,0xc0e85667,puVar3);
      piVar1 = __errno_location();
      if (*piVar1 != 0x19) {
        return;
      }
    }
    uStack_7c = *puVar3;
    iVar2 = FUN_0001391c((int)uVar4,0xc0445624,&uStack_7c);
    if (iVar2 != 0) goto LAB_00016960;
    puVar3[1] = iStack_78;
    puVar3[2] = uStack_74;
    puVar3[3] = uStack_70;
    puVar3[4] = uStack_6c;
    puVar3[5] = uStack_68;
    puVar3[6] = uStack_64;
    puVar3[7] = uStack_60;
    puVar3[8] = uStack_5c;
    puVar3[9] = uStack_58;
    puVar3[10] = iStack_54;
    puVar3[0xb] = iStack_54 >> 0x1f;
    if (iStack_78 == 8) {
      puVar3[0xc] = iStack_50;
      puVar3[0xd] = 0;
      puVar3[0x10] = iStack_48;
      puVar3[0x11] = 0;
      puVar3[0xe] = iStack_4c;
      puVar3[0xf] = iStack_4c >> 0x1f;
      puVar3[0x12] = uStack_44;
      puVar3[0x15] = 0;
      puVar3[0x14] = 1;
      puVar3[0x16] = 0;
      puVar3[0x17] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      puVar3[0x18] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      puVar3[0x19] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    }
    else {
      puVar3[0xe] = iStack_4c;
      puVar3[0xf] = iStack_4c >> 0x1f;
      iVar2 = iStack_48 >> 0x1f;
      uVar4 = VectorShiftRight(CONCAT44(iStack_50,iStack_50),0x20);
      puVar3[0x12] = uStack_44;
      puVar3[0x10] = iStack_48;
      puVar3[0x11] = iVar2;
      if (iStack_78 == 5) {
        iVar2 = 8;
      }
      puVar3[0x15] = 0;
      *(undefined8 *)(puVar3 + 0xc) = uVar4;
      puVar3[0x14] = 1;
      puVar3[0x16] = 0;
      puVar3[0x17] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      puVar3[0x18] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      puVar3[0x19] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      if (iStack_78 == 5) {
        puVar3[0x13] = iVar2;
        memset(puVar3 + 0x1a,0,0x80);
        goto LAB_00016960;
      }
      if (iStack_78 == 7) {
        puVar3[0x13] = iStack_50 + 1;
        memset(puVar3 + 0x1a,0,0x80);
        goto LAB_00016960;
      }
    }
    puVar3[0x13] = 4;
    memset(puVar3 + 0x1a,0,0x80);
LAB_00016960:
    *puVar3 = uStack_7c;
    return;
  }
  __n = param_3 - (int)param_2;
  local_14 = __n;
  if (__n < 0x10) {
    __dest = (undefined1 *)*param_1;
    if (__n == 1) {
      *__dest = *param_2;
      __dest = (undefined1 *)*param_1;
      goto LAB_000167e8;
    }
    if (__n == 0) goto LAB_000167e8;
  }
  else {
    __dest = (undefined1 *)std::__cxx11::string::_M_create(param_1,(uint)&local_14);
    param_1[2] = local_14;
    *param_1 = (uint)__dest;
  }
  memcpy(__dest,param_2,__n);
  __dest = (undefined1 *)*param_1;
LAB_000167e8:
  param_1[1] = local_14;
  __dest[local_14] = 0;
  return;
}



/* ===== FUN_00016844 @ 00016844 size=408 ===== */

int FUN_00016844(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  
  if (DAT_0006354c != '\0') {
    iVar1 = FUN_0001391c(param_1,0xc0e85667,param_2);
    piVar2 = __errno_location();
    if (*piVar2 != 0x19) {
      return iVar1;
    }
  }
  local_64 = *param_2;
  iVar1 = FUN_0001391c(param_1,0xc0445624,&local_64);
  if (iVar1 != 0) goto LAB_00016960;
  param_2[1] = local_60;
  param_2[2] = local_5c;
  param_2[3] = uStack_58;
  param_2[4] = uStack_54;
  param_2[5] = uStack_50;
  param_2[6] = local_4c;
  param_2[7] = uStack_48;
  param_2[8] = uStack_44;
  param_2[9] = uStack_40;
  param_2[10] = local_3c;
  param_2[0xb] = local_3c >> 0x1f;
  if (local_60 == 8) {
    param_2[0xc] = local_38;
    param_2[0xd] = 0;
    param_2[0x10] = local_30;
    param_2[0x11] = 0;
    param_2[0xe] = local_34;
    param_2[0xf] = local_34 >> 0x1f;
    param_2[0x12] = local_2c;
    param_2[0x15] = 0;
    param_2[0x14] = 1;
    param_2[0x16] = 0;
    param_2[0x17] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    param_2[0x18] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    param_2[0x19] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  }
  else {
    param_2[0xe] = local_34;
    param_2[0xf] = local_34 >> 0x1f;
    iVar3 = local_30 >> 0x1f;
    uVar4 = VectorShiftRight(CONCAT44(local_38,local_38),0x20);
    param_2[0x12] = local_2c;
    param_2[0x10] = local_30;
    param_2[0x11] = iVar3;
    if (local_60 == 5) {
      iVar3 = 8;
    }
    param_2[0x15] = 0;
    *(undefined8 *)(param_2 + 0xc) = uVar4;
    param_2[0x14] = 1;
    param_2[0x16] = 0;
    param_2[0x17] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    param_2[0x18] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    param_2[0x19] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    if (local_60 == 5) {
      param_2[0x13] = iVar3;
      memset(param_2 + 0x1a,0,0x80);
      goto LAB_00016960;
    }
    if (local_60 == 7) {
      param_2[0x13] = local_38 + 1;
      memset(param_2 + 0x1a,0,0x80);
      goto LAB_00016960;
    }
  }
  param_2[0x13] = 4;
  memset(param_2 + 0x1a,0,0x80);
LAB_00016960:
  *param_2 = local_64;
  return iVar1;
}



/* ===== FUN_000169dc @ 000169dc size=116 ===== */

int FUN_000169dc(char *param_1)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  char *__s;
  undefined4 *puVar4;
  int iVar5;
  size_t __n;
  
  pcVar1 = strrchr(param_1,0x2f);
  puVar4 = (undefined4 *)&UNK_0003de68;
  __s = "video";
  __n = 5;
  iVar5 = 0;
  while( true ) {
    iVar2 = memcmp(pcVar1 + 1,__s,__n);
    if (iVar2 == 0) {
      lVar3 = atol(pcVar1 + 1 + __n);
      return lVar3 + iVar5 * 0x100;
    }
    puVar4 = puVar4 + 1;
    __s = (char *)*puVar4;
    iVar5 = iVar5 + 1;
    if (__s == (char *)0x0) break;
    __n = strlen(__s);
  }
  return 0;
}



/* ===== FUN_00016a50 @ 00016a50 size=44 ===== */

bool FUN_00016a50(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_000169dc(*param_1);
  iVar2 = FUN_000169dc(*param_2);
  return iVar1 < iVar2;
}



/* ===== FUN_00016a7c @ 00016a7c size=80 ===== */

undefined4 FUN_00016a7c(char **param_1,char **param_2)

{
  int iVar1;
  
  iVar1 = getsubopt(param_1,DAT_00016acc,param_2);
  if ((-1 < iVar1) && (*param_2 == (char *)0x0)) {
    fprintf(stderr,"No value given to suboption <%s>\n");
    return 1;
  }
  return 0;
}



/* ===== FUN_00016ad0 @ 00016ad0 size=276 ===== */

int * FUN_00016ad0(int *param_1,byte *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  undefined1 *local_38 [2];
  undefined1 auStack_30 [16];
  
  bVar1 = false;
  *param_1 = (int)(param_1 + 2);
  param_1[1] = 0;
  *(char *)(param_1 + 2) = '\0';
  uVar2 = (uint)*param_2;
  if (uVar2 != 0) {
    do {
      while (iVar3 = isalnum(uVar2), iVar3 != 0) {
        if (bVar1) {
          piVar5 = (int *)*param_1;
          uVar6 = param_1[1];
          uVar2 = uVar6 + 1;
          if (param_1 + 2 == piVar5) {
            uVar4 = 0xf;
          }
          else {
            uVar4 = param_1[2];
          }
          if (uVar4 < uVar2) {
            std::__cxx11::string::_M_mutate((uint)param_1,uVar6,(char *)0x0,0);
            piVar5 = (int *)*param_1;
          }
          *(char *)((int)piVar5 + uVar6) = '_';
          param_1[1] = uVar2;
          *(undefined1 *)(*param_1 + uVar2) = 0;
        }
        tolower((uint)*param_2);
        local_38[0] = auStack_30;
        std::__cxx11::string::_M_construct((uint)local_38,'\x01');
        std::__cxx11::string::_M_append((char *)param_1,(uint)local_38[0]);
        if (local_38[0] != auStack_30) {
          operator_delete(local_38[0]);
        }
        param_2 = param_2 + 1;
        uVar2 = (uint)*param_2;
        bVar1 = false;
        if (uVar2 == 0) {
          return param_1;
        }
      }
      param_2 = param_2 + 1;
      uVar2 = (uint)*param_2;
      if (param_1[1] != 0) {
        bVar1 = true;
      }
    } while (uVar2 != 0);
  }
  return param_1;
}



/* ===== FUN_00016c0c @ 00016c0c size=604 ===== */

int * FUN_00016c0c(int *param_1,byte *param_2)

{
  byte bVar1;
  size_t sVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  char acStack_2c [8];
  
  piVar7 = param_1 + 2;
  param_1[1] = 0;
  *param_1 = (int)piVar7;
  *(char *)(param_1 + 2) = '\0';
  bVar1 = *param_2;
  do {
    while( true ) {
      uVar5 = (uint)bVar1;
      if (uVar5 == 0) {
        return param_1;
      }
      if (uVar5 != 10) break;
      if (0x7fffffffU - param_1[1] < 2) {
LAB_00016e24:
        std::__throw_length_error("basic_string::append");
LAB_00016e30:
        std::__throw_length_error("basic_string::append");
LAB_00016e3c:
        std::__throw_length_error("basic_string::append");
LAB_00016e48:
        std::__throw_length_error("basic_string::append");
        if (piVar7 != (int *)*param_1) {
          operator_delete((int *)*param_1);
        }
                    /* WARNING: Subroutine does not return */
        __cxa_end_cleanup();
      }
      std::__cxx11::string::_M_append((char *)param_1,0x3dee0);
      param_2 = param_2 + 1;
      bVar1 = *param_2;
    }
    if (uVar5 == 0xd) {
      if (1 < 0x7fffffffU - param_1[1]) {
        std::__cxx11::string::_M_append((char *)param_1,0x3dee4);
        goto LAB_00016ce0;
      }
LAB_00016e18:
      std::__throw_length_error("basic_string::append");
      goto LAB_00016e24;
    }
    if (uVar5 != 0xc) {
      if (uVar5 != 0x5c) {
        if ((bVar1 & 0x60) != 0) {
          piVar4 = (int *)*param_1;
          uVar6 = param_1[1];
          uVar5 = uVar6 + 1;
          if (piVar7 == piVar4) {
            uVar3 = 0xf;
          }
          else {
            uVar3 = param_1[2];
          }
          if (uVar3 < uVar5) {
            std::__cxx11::string::_M_mutate((uint)param_1,uVar6,(char *)0x0,0);
            piVar4 = (int *)*param_1;
          }
          *(byte *)((int)piVar4 + uVar6) = bVar1;
          param_1[1] = uVar5;
          *(undefined1 *)(*param_1 + uVar5) = 0;
          goto LAB_00016ce0;
        }
        sprintf(acStack_2c,"%02x",uVar5);
        if (0x7fffffffU - param_1[1] < 2) {
          std::__throw_length_error("basic_string::append");
          goto LAB_00016e18;
        }
        std::__cxx11::string::_M_append((char *)param_1,0x3def8);
        sVar2 = strlen(acStack_2c);
        if (sVar2 <= 0x7fffffffU - param_1[1]) {
          std::__cxx11::string::_M_append((char *)param_1,(uint)acStack_2c);
          goto LAB_00016ce0;
        }
        goto LAB_00016e30;
      }
      if (1 < 0x7fffffffU - param_1[1]) {
        std::__cxx11::string::_M_append((char *)param_1,0x3deec);
        goto LAB_00016ce0;
      }
      goto LAB_00016e3c;
    }
    if (0x7fffffffU - param_1[1] < 2) goto LAB_00016e48;
    std::__cxx11::string::_M_append((char *)param_1,0x3dee8);
LAB_00016ce0:
    param_2 = param_2 + 1;
    bVar1 = *param_2;
  } while( true );
}



/* ===== FUN_00016e68 @ 00016e68 size=1000 ===== */

void FUN_00016e68(undefined4 param_1,undefined4 *param_2,int param_3,byte param_4)

{
  char *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined1 *local_84 [2];
  undefined1 auStack_7c [16];
  undefined1 *local_6c [2];
  undefined1 auStack_64 [16];
  undefined4 local_54;
  uint local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  FUN_00016ad0(local_84,param_2 + 2);
  local_54 = *param_2;
  uVar2 = param_2[1];
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_50 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_3c = uStack_4c;
  uStack_34 = uStack_4c;
  uStack_2c = uStack_4c;
  if (uVar2 == 7) {
    uVar7 = param_2[0xe];
    uVar8 = param_2[0xf];
    uVar3 = param_2[0xc];
    uVar4 = param_2[0xd];
    pcVar1 = "%31s (str)    : min=%lld max=%lld step=%lld";
LAB_00016ee8:
    printf(pcVar1,local_84[0],param_2[10],param_2[0xb],uVar3,uVar4,uVar7,uVar8);
    iVar5 = param_2[0x15];
  }
  else {
    if (7 < uVar2) {
      if (uVar2 == 0x100) {
        uVar9 = *(undefined8 *)(param_2 + 0x10);
        uVar3 = param_2[0xe];
        uVar4 = param_2[0xf];
        pcVar1 = "%31s (u8)     : min=%lld max=%lld step=%lld default=%lld";
      }
      else {
        if (uVar2 < 0x101) {
          if (uVar2 == 8) {
            printf("%31s (bitmask): max=0x%08llx default=0x%08llx",local_84[0],param_2[0xc],
                   param_2[0xd],param_2[0x10],param_2[0x11]);
            goto LAB_00016ff4;
          }
          if (uVar2 == 9) {
            uVar7 = param_2[0x10];
            uVar8 = param_2[0x11];
            uVar3 = param_2[0xc];
            uVar4 = param_2[0xd];
            pcVar1 = "%31s (intmenu): min=%lld max=%lld default=%lld";
            goto LAB_00016ee8;
          }
LAB_000171fc:
          printf("%31s (unknown): type=%x",local_84[0]);
          goto LAB_00016ff4;
        }
        if (uVar2 == 0x101) {
          uVar9 = *(undefined8 *)(param_2 + 0x10);
          uVar3 = param_2[0xe];
          uVar4 = param_2[0xf];
          pcVar1 = "%31s (u16)    : min=%lld max=%lld step=%lld default=%lld";
        }
        else {
          if (uVar2 != 0x102) goto LAB_000171fc;
          uVar9 = *(undefined8 *)(param_2 + 0x10);
          uVar3 = param_2[0xe];
          uVar4 = param_2[0xf];
          pcVar1 = "%31s (u32)    : min=%lld max=%lld step=%lld default=%lld";
        }
      }
      goto LAB_00017060;
    }
    if (uVar2 == 3) {
      uVar7 = param_2[0x10];
      uVar8 = param_2[0x11];
      uVar3 = param_2[0xc];
      uVar4 = param_2[0xd];
      pcVar1 = "%31s (menu)   : min=%lld max=%lld default=%lld";
      goto LAB_00016ee8;
    }
    if (uVar2 < 4) {
      if (uVar2 == 1) {
        uVar9 = *(undefined8 *)(param_2 + 0x10);
        uVar3 = param_2[0xe];
        uVar4 = param_2[0xf];
        pcVar1 = "%31s (int)    : min=%lld max=%lld step=%lld default=%lld";
LAB_00017060:
        printf(pcVar1,local_84[0],param_2[10],param_2[0xb],param_2[0xc],param_2[0xd],uVar3,uVar4,
               uVar9);
      }
      else {
        if (uVar2 != 2) goto LAB_000171fc;
        printf("%31s (bool)   : default=%lld",local_84[0],param_2[0x10],param_2[0x11]);
      }
    }
    else {
      if (uVar2 != 4) {
        if (uVar2 != 5) goto LAB_000171fc;
        uVar9 = *(undefined8 *)(param_2 + 0x10);
        uVar3 = param_2[0xe];
        uVar4 = param_2[0xf];
        pcVar1 = "%31s (int64)  : min=%lld max=%lld step=%lld default=%lld";
        goto LAB_00017060;
      }
      printf("%31s (button) :",local_84[0]);
    }
LAB_00016ff4:
    iVar5 = param_2[0x15];
  }
  if (iVar5 == 0) {
    switch(param_2[1]) {
    case 1:
    case 2:
    case 3:
    case 9:
      printf(" value=%d",*(undefined4 *)(param_3 + 0xc));
      break;
    default:
      goto switchD_0001700c_caseD_4;
    case 5:
      printf(" value=%lld");
      break;
    case 7:
      FUN_00016c0c(local_6c,*(undefined4 *)(param_3 + 0xc));
      printf(" value=\'%s\'",local_6c[0]);
      if (local_6c[0] != auStack_64) {
        operator_delete(local_6c[0]);
      }
      break;
    case 8:
      printf(" value=0x%08x",*(undefined4 *)(param_3 + 0xc));
    }
    if (param_2[0x15] == 0) goto switchD_0001700c_caseD_4;
  }
  putchar(0x20);
  if (param_2[0x15] != 0) {
    uVar2 = 0;
    puVar6 = param_2 + 0x16;
    do {
      printf("[%u]",*puVar6);
      uVar2 = uVar2 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar2 < (uint)param_2[0x15]);
  }
switchD_0001700c_caseD_4:
  if (param_2[0x12] != 0) {
    FUN_00014958(local_6c,param_2[0x12],DAT_000172a8);
    printf(" flags=%s",local_6c[0]);
    if (local_6c[0] != auStack_64) {
      operator_delete(local_6c[0]);
    }
  }
  putchar(10);
  if (((param_4 & (param_2[1] == 9 || param_2[1] == 3)) != 0) &&
     (uVar2 = param_2[10], (int)(uint)((uint)param_2[0xc] < uVar2) <= (int)param_2[0xd])) {
    do {
      local_50 = uVar2;
      iVar5 = FUN_0001391c(param_1,0xc02c5625,&local_54);
      if (iVar5 == 0) {
        if (param_2[1] == 3) {
          printf("\t\t\t\t%d: %s\n",uVar2,&uStack_4c);
        }
        else {
          printf("\t\t\t\t%d: %lld (0x%llx)\n",uVar2,uStack_4c,local_48,uStack_4c,local_48);
        }
      }
      uVar2 = uVar2 + 1;
    } while ((int)(uint)((uint)param_2[0xc] < uVar2) <= (int)param_2[0xd]);
  }
  if (local_84[0] != auStack_7c) {
    operator_delete(local_84[0]);
  }
  return;
}



/* ===== FUN_000172ac @ 000172ac size=476 ===== */

undefined4 FUN_000172ac(undefined4 param_1,uint *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint local_4c;
  undefined4 uStack_48;
  uint local_44;
  size_t sStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  uint local_30;
  size_t sStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  longlong local_20;
  
  sStack_40 = *(size_t *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_44 = 0;
  local_4c = 0;
  uStack_48 = 0;
  local_30 = 0;
  local_38 = 0;
  local_20 = 0;
  if ((param_2[0x12] & 1) != 0) {
    return 1;
  }
  uVar4 = param_2[1];
  sStack_2c = sStack_40;
  uStack_28 = uStack_3c;
  if (uVar4 == 6) {
    printf("\n%s\n\n",param_2 + 2);
    return 1;
  }
  uVar5 = (param_2[0x12] & 0x7f) >> 6;
  local_44 = *param_2;
  if (uVar4 == 4) {
    uVar5 = 1;
  }
  if (uVar5 != 0) {
    FUN_00016e68(param_1,param_2,&local_44,param_3);
    return 1;
  }
  if (0xff < uVar4) {
    FUN_00016e68(param_1,param_2,0,param_3);
    return 1;
  }
  local_30 = local_44 & 0xfff0000;
  local_20 = ZEXT48(&local_44) << 0x20;
  sStack_2c = 1;
  if ((uVar4 & 0xfffffffd) == 5) {
    if (uVar4 == 7) {
      sStack_40 = param_2[0xc] + 1;
      puVar2 = malloc(sStack_40);
      *puVar2 = 0;
      local_38 = CONCAT44(local_38._4_4_,puVar2);
    }
  }
  else if (0x7ffffff < local_44 || local_30 == 0x980000) {
    uStack_48 = 0;
    local_4c = local_44;
    iVar1 = FUN_0001391c(param_1,0xc008561b,&local_4c);
    if (iVar1 != 0) {
      piVar3 = __errno_location();
      printf("error %d getting ctrl %s\n",*piVar3,param_2 + 2);
      return 0;
    }
    local_38 = CONCAT44(local_38._4_4_,uStack_48);
    goto LAB_0001738c;
  }
  iVar1 = FUN_0001391c(param_1,0xc0185647,&local_30);
  if (iVar1 != 0) {
    piVar3 = __errno_location();
    printf("error %d getting ext_ctrl %s\n",*piVar3,param_2 + 2);
    return 0;
  }
LAB_0001738c:
  FUN_00016e68(param_1,param_2,&local_44,param_3);
  if (param_2[1] == 7) {
    free((void *)local_38);
  }
  return 1;
}



/* ===== FUN_00017488 @ 00017488 size=252 ===== */

void FUN_00017488(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint local_100;
  undefined1 auStack_fc [232];
  
  memset(auStack_fc,0,0xe4);
  local_100 = 0xc0000000;
  while (iVar1 = FUN_00016844(param_1,&local_100), iVar1 == 0) {
    FUN_000172ac(param_1,&local_100,param_2);
    local_100 = local_100 | 0xc0000000;
  }
  if (local_100 == 0xc0000000) {
    uVar2 = 0x980900;
    do {
      while( true ) {
        local_100 = uVar2;
        iVar1 = FUN_00016844(param_1,&local_100);
        uVar2 = uVar2 + 1;
        if (iVar1 != 0) break;
        FUN_000172ac(param_1,&local_100,param_2);
        if (uVar2 == 0x98092b) goto LAB_00017540;
      }
    } while (uVar2 != 0x98092b);
LAB_00017540:
    local_100 = 0x8000000;
    while (iVar1 = FUN_00016844(param_1,&local_100), iVar1 == 0) {
      FUN_000172ac(param_1,&local_100,param_2);
      local_100 = local_100 + 1;
    }
  }
  return;
}



/* ===== FUN_00017584 @ 00017584 size=12 ===== */

void FUN_00017584(void)

{
  puts(
      "\nGeneral/Common options:\n  --all              display all information available\n  -C, --get-ctrl=<ctrl>[,<ctrl>...]\n                     get the value of the controls [VIDIOC_G_EXT_CTRLS]\n  -c, --set-ctrl=<ctrl>=<val>[,<ctrl>=<val>...]\n                     set the value of the controls [VIDIOC_S_EXT_CTRLS]\n  -D, --info         show driver info [VIDIOC_QUERYCAP]\n  -d, --device=<dev> use device <dev> instead of /dev/video0\n                     if <dev> starts with a digit, then /dev/video<dev> is used\n  -e, --out-device=<dev> use device <dev> for output streams instead of the\n                     default device as set with --device\n                     if <dev> starts with a digit, then /dev/video<dev> is used\n  -h, --help         display this help message\n  --help-all         all options\n  --help-io          input/output options\n  --help-misc        miscellaneous options\n  --help-overlay     overlay format options\n  --help-sdr         SDR format options\n  --help-selection   crop/selection options\n  --help-stds        standards and other video timings options\n  --help-streaming   streaming options\n  --help-tuner       tuner/modulator options\n  --help-vbi         VBI format options\n  --help-vidcap      video capture format options\n  --help-vidout      vidout output format options\n  --help-edid        edid handling options\n  -k, --concise      be more concise if possible.\n  -l, --list-ctrls   display all controls and their values [VIDIOC_QUERYCTRL]\n  -L, --list-ctrls-menus\n\t\t     display all controls and their menus [VIDIOC_QUERYMENU]\n  -r, --subset=<ctrl>[,<offset>,<size>]+\n                     the subset of the N-dimensional array to get/set for control <ctrl>,\n                     for every dimension an (<offset>, <size>) tuple is given.\n  -w, --wrapper      use the libv4l2 wrapper library.\n  --list-devices     list all v4l devices\n  --log-status       log the board status in the kernel log [VIDIOC_LOG_STATUS]\n  --get-priority     query the current access priority [VIDIOC_G_PRIORITY]\n  --set-priority=<prio>\n      ..." /* TRUNCATED STRING LITERAL */
      );
  return;
}



/* ===== FUN_00017590 @ 00017590 size=68 ===== */

void FUN_00017590(undefined4 param_1)

{
  if (DAT_0006334c != '\0') {
    FUN_00017488(param_1,1);
  }
  if (DAT_0006336c == '\0') {
    return;
  }
  FUN_00017488(param_1,0);
  return;
}



/* ===== FUN_000175d4 @ 000175d4 size=396 ===== */

_Rb_tree_node_base * FUN_000175d4(int param_1,undefined4 param_2,undefined4 *param_3)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node_base *p_Var2;
  bool bVar3;
  _Rb_tree_node_base *p_Var4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint __n;
  int iVar8;
  _Rb_tree_node_base *p_Var9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  _Rb_tree_node_base *local_20;
  _Rb_tree_node_base *local_1c;
  
  p_Var4 = operator_new(0x110);
  piVar12 = (int *)*param_3;
  *(_Rb_tree_node_base **)(p_Var4 + 0x10) = p_Var4 + 0x18;
  piVar5 = piVar12 + 2;
  if ((int *)*piVar12 == piVar5) {
    iVar6 = piVar12[3];
    iVar7 = piVar12[4];
    iVar8 = piVar12[5];
    *(int *)(p_Var4 + 0x18) = *piVar5;
    *(int *)(p_Var4 + 0x1c) = iVar6;
    *(int *)(p_Var4 + 0x20) = iVar7;
    *(int *)(p_Var4 + 0x24) = iVar8;
  }
  else {
    *(int **)(p_Var4 + 0x10) = (int *)*piVar12;
    *(int *)(p_Var4 + 0x18) = piVar12[2];
  }
  *(int *)(p_Var4 + 0x14) = piVar12[1];
  *piVar12 = (int)piVar5;
  piVar12[1] = 0;
  *(undefined1 *)(piVar12 + 2) = 0;
  memset(p_Var4 + 0x28,0,0xe8);
  FUN_0001c66c(&local_20,param_1,param_2,p_Var4 + 0x10);
  p_Var2 = local_1c;
  if (local_1c == (_Rb_tree_node_base *)0x0) {
    if (p_Var4 + 0x18 != *(_Rb_tree_node_base **)(p_Var4 + 0x10)) {
      operator_delete(*(_Rb_tree_node_base **)(p_Var4 + 0x10));
    }
    operator_delete(p_Var4);
    return local_20;
  }
  p_Var9 = (_Rb_tree_node_base *)(param_1 + 4);
  if ((local_20 == (_Rb_tree_node_base *)0x0) && (local_1c != p_Var9)) {
    uVar10 = *(uint *)(local_1c + 0x14);
    uVar11 = *(uint *)(p_Var4 + 0x14);
    __n = uVar11;
    if (uVar10 <= uVar11) {
      __n = uVar10;
    }
    if ((__n == 0) ||
       (p_Var1 = local_1c + 0x10, local_1c = p_Var9,
       iVar6 = memcmp(*(void **)(p_Var4 + 0x10),*(void **)p_Var1,__n), p_Var9 = local_1c, iVar6 == 0
       )) {
      iVar6 = uVar11 - uVar10;
    }
    bVar3 = SUB41((uint)iVar6 >> 0x1f,0);
  }
  else {
    bVar3 = true;
  }
  std::_Rb_tree_insert_and_rebalance(bVar3,p_Var4,p_Var2,p_Var9);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return p_Var4;
}



/* ===== FUN_000176cc @ 000176cc size=392 ===== */

undefined4 FUN_000176cc(char *param_1)

{
  undefined4 *puVar1;
  size_t sVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined1 *__s2;
  undefined1 **local_3c;
  undefined1 *local_38;
  uint local_34;
  undefined1 auStack_30 [16];
  
  local_38 = auStack_30;
  if (param_1 == (char *)0x0) {
    pcVar5 = (char *)0xffffffff;
  }
  else {
    sVar2 = strlen(param_1);
    pcVar5 = param_1 + sVar2;
  }
  std::__cxx11::string::_M_construct<char_const*>(&local_38,param_1,pcVar5,0);
  puVar3 = (undefined4 *)FUN_0001b9e0(DAT_00017868,&local_38);
  if (local_38 != auStack_30) {
    operator_delete(local_38);
  }
  puVar1 = DAT_0001786c;
  if (puVar3 == DAT_0001786c) {
    return 0;
  }
  if (param_1 == (char *)0x0) {
    pcVar5 = (char *)0xffffffff;
    local_38 = auStack_30;
  }
  else {
    local_38 = auStack_30;
    sVar2 = strlen(param_1);
    pcVar5 = param_1 + sVar2;
  }
  puVar3 = &DAT_00063554;
  std::__cxx11::string::_M_construct<char_const*>(&local_38,param_1,pcVar5,0);
  __s2 = local_38;
  puVar7 = DAT_00063558;
  if (DAT_00063558 != (undefined4 *)0x0) {
    do {
      uVar10 = puVar7[5];
      uVar6 = uVar10;
      if (local_34 <= uVar10) {
        uVar6 = local_34;
      }
      if ((uVar6 == 0) || (iVar4 = memcmp((void *)puVar7[4],__s2,uVar6), iVar4 == 0)) {
        iVar4 = uVar10 - local_34;
      }
      if (iVar4 < 0) {
        puVar8 = (undefined4 *)puVar7[3];
      }
      else {
        puVar8 = (undefined4 *)puVar7[2];
        puVar3 = puVar7;
      }
      puVar7 = puVar8;
    } while (puVar8 != (undefined4 *)0x0);
    if (puVar3 != puVar1) {
      uVar10 = puVar3[5];
      uVar6 = local_34;
      if (uVar10 <= local_34) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) || (iVar4 = memcmp(__s2,(void *)puVar3[4],uVar6), iVar4 == 0)) {
        iVar4 = local_34 - uVar10;
      }
      if (-1 < iVar4) goto LAB_00017800;
    }
  }
  local_3c = &local_38;
  puVar3 = (undefined4 *)FUN_000175d4(DAT_00017868,puVar3,&local_3c);
  __s2 = local_38;
LAB_00017800:
  uVar9 = puVar3[10];
  if (__s2 != auStack_30) {
    operator_delete(__s2);
  }
  return uVar9;
}



/* ===== FUN_00017870 @ 00017870 size=2320 ===== */

void FUN_00017870(undefined4 param_1)

{
  int *piVar1;
  _Rb_tree_node_base *p_Var2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  _Rb_tree_node_base *p_Var8;
  _Rb_tree_node_base *p_Var9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  _Rb_tree_node_base *p_Var15;
  uint uVar16;
  int *piVar17;
  _Rb_tree_node_base *p_Var18;
  uint **local_214;
  uint *local_210;
  uint local_20c;
  uint local_208 [4];
  undefined4 local_1f8;
  undefined1 auStack_1f4 [228];
  uint local_110;
  int local_10c;
  undefined1 auStack_108 [64];
  uint local_c8;
  
  memset(auStack_1f4,0,0xe4);
  local_1f8 = 0xc0000000;
  iVar3 = FUN_0001391c(param_1,0xc0e85667,&local_1f8);
  DAT_0006354c = iVar3 == 0;
  memset(&local_10c,0,0xe4);
  local_110 = 0xc0000000;
  while (iVar3 = FUN_00016844(param_1,&local_110), iVar3 == 0) {
    if ((local_10c != 6) && ((local_c8 & 1) == 0)) {
      FUN_00016ad0(&local_210,auStack_108);
      uVar10 = local_20c;
      puVar6 = local_210;
      iVar5 = DAT_00063558;
      iVar3 = DAT_000181a0;
      if (DAT_00063558 == 0) {
LAB_00017af0:
        local_214 = &local_210;
        iVar3 = FUN_000175d4(DAT_000181ac,iVar3,&local_214);
        puVar6 = local_210;
      }
      else {
        do {
          uVar13 = *(uint *)(iVar5 + 0x14);
          uVar11 = uVar13;
          if (uVar10 <= uVar13) {
            uVar11 = uVar10;
          }
          if ((uVar11 == 0) || (iVar4 = memcmp(*(void **)(iVar5 + 0x10),puVar6,uVar11), iVar4 == 0))
          {
            iVar4 = uVar13 - uVar10;
          }
          if (iVar4 < 0) {
            iVar4 = *(int *)(iVar5 + 0xc);
          }
          else {
            iVar4 = *(int *)(iVar5 + 8);
            iVar3 = iVar5;
          }
          iVar5 = iVar4;
        } while (iVar4 != 0);
        if (iVar3 == DAT_000181a0) goto LAB_00017af0;
        uVar13 = *(uint *)(iVar3 + 0x14);
        uVar11 = uVar10;
        if (uVar13 <= uVar10) {
          uVar11 = uVar13;
        }
        if ((uVar11 == 0) || (iVar5 = memcmp(puVar6,*(void **)(iVar3 + 0x10),uVar11), iVar5 == 0)) {
          iVar5 = uVar10 - uVar13;
        }
        if (iVar5 < 0) goto LAB_00017af0;
      }
      memcpy((void *)(iVar3 + 0x28),&local_110,0xe8);
      if (puVar6 != local_208) {
        operator_delete(puVar6);
      }
      iVar5 = DAT_00063570;
      iVar3 = DAT_000181a4;
      if (DAT_00063570 == 0) {
LAB_00017a44:
        local_210 = &local_110;
        iVar3 = FUN_0001c938(&DAT_00063568,iVar3,DAT_000181a8,&local_210,&local_214);
      }
      else {
        do {
          if (*(uint *)(iVar5 + 0x10) < local_110) {
            iVar4 = *(int *)(iVar5 + 0xc);
          }
          else {
            iVar4 = *(int *)(iVar5 + 8);
            iVar3 = iVar5;
          }
          iVar5 = iVar4;
        } while (iVar4 != 0);
        if ((iVar3 == DAT_000181a4) || (local_110 < *(uint *)(iVar3 + 0x10))) goto LAB_00017a44;
      }
      FUN_00016ad0(&local_210,auStack_108);
      puVar6 = *(uint **)(iVar3 + 0x14);
      if (local_210 == local_208) {
        if (local_20c != 0) {
          if (local_20c == 1) {
            *(undefined1 *)puVar6 = (undefined1)local_208[0];
            puVar6 = *(uint **)(iVar3 + 0x14);
          }
          else {
            memcpy(puVar6,local_208,local_20c);
            puVar6 = *(uint **)(iVar3 + 0x14);
          }
        }
        *(uint *)(iVar3 + 0x18) = local_20c;
        *(undefined1 *)((int)puVar6 + local_20c) = 0;
        uVar10 = local_208[0];
      }
      else {
        if (puVar6 == (uint *)(iVar3 + 0x1c)) {
          *(uint **)(iVar3 + 0x14) = local_210;
          *(uint *)(iVar3 + 0x18) = local_20c;
          *(uint *)(iVar3 + 0x1c) = local_208[0];
        }
        else {
          *(uint **)(iVar3 + 0x14) = local_210;
          *(uint *)(iVar3 + 0x18) = local_20c;
          uVar10 = *(uint *)(iVar3 + 0x1c);
          *(uint *)(iVar3 + 0x1c) = local_208[0];
          local_210 = puVar6;
          if (puVar6 != (uint *)0x0) goto LAB_00017ac4;
        }
        local_210 = local_208;
        uVar10 = local_208[0];
      }
LAB_00017ac4:
      local_208[0] = uVar10;
      local_20c = 0;
      *(undefined1 *)local_210 = 0;
      if (local_210 != local_208) {
        operator_delete(local_210);
      }
    }
    local_110 = local_110 | 0xc0000000;
  }
  if (local_110 == 0xc0000000) {
    uVar10 = 0x980900;
    do {
      while (local_110 = uVar10, iVar3 = FUN_00016844(param_1,&local_110),
            (local_c8 & 1) != 0 || iVar3 != 0) {
LAB_00017bf4:
        uVar10 = uVar10 + 1;
        if (uVar10 == 0x98092b) goto LAB_00017df4;
      }
      FUN_00016ad0(&local_210,auStack_108);
      uVar11 = local_20c;
      puVar6 = local_210;
      iVar5 = DAT_00063558;
      iVar3 = DAT_000181a0;
      if (DAT_00063558 == 0) {
LAB_00017ff8:
        local_214 = &local_210;
        iVar3 = FUN_000175d4(DAT_000181ac,iVar3,&local_214);
        puVar6 = local_210;
      }
      else {
        do {
          uVar16 = *(uint *)(iVar5 + 0x14);
          uVar13 = uVar16;
          if (uVar11 <= uVar16) {
            uVar13 = uVar11;
          }
          if ((uVar13 == 0) || (iVar4 = memcmp(*(void **)(iVar5 + 0x10),puVar6,uVar13), iVar4 == 0))
          {
            iVar4 = uVar16 - uVar11;
          }
          if (iVar4 < 0) {
            iVar4 = *(int *)(iVar5 + 0xc);
          }
          else {
            iVar4 = *(int *)(iVar5 + 8);
            iVar3 = iVar5;
          }
          iVar5 = iVar4;
        } while (iVar4 != 0);
        if (iVar3 == DAT_000181a0) goto LAB_00017ff8;
        uVar16 = *(uint *)(iVar3 + 0x14);
        uVar13 = uVar11;
        if (uVar16 <= uVar11) {
          uVar13 = uVar16;
        }
        if ((uVar13 == 0) || (iVar5 = memcmp(puVar6,*(void **)(iVar3 + 0x10),uVar13), iVar5 == 0)) {
          iVar5 = uVar11 - uVar16;
        }
        if (iVar5 < 0) goto LAB_00017ff8;
      }
      memcpy((void *)(iVar3 + 0x28),&local_110,0xe8);
      if (puVar6 != local_208) {
        operator_delete(puVar6);
      }
      iVar5 = DAT_00063570;
      iVar3 = DAT_000181a4;
      if (DAT_00063570 == 0) {
LAB_00017d54:
        local_210 = &local_110;
        iVar3 = FUN_0001c938(DAT_000181b8,iVar3,DAT_000181a8,&local_210,&local_214);
      }
      else {
        do {
          if (*(uint *)(iVar5 + 0x10) < local_110) {
            iVar4 = *(int *)(iVar5 + 0xc);
          }
          else {
            iVar4 = *(int *)(iVar5 + 8);
            iVar3 = iVar5;
          }
          iVar5 = iVar4;
        } while (iVar4 != 0);
        if ((iVar3 == DAT_000181a4) || (local_110 < *(uint *)(iVar3 + 0x10))) goto LAB_00017d54;
      }
      FUN_00016ad0(&local_210,auStack_108);
      puVar6 = *(uint **)(iVar3 + 0x14);
      if (local_210 == local_208) {
        if (local_20c != 0) {
          if (local_20c == 1) {
            *(undefined1 *)puVar6 = (undefined1)local_208[0];
            *(undefined4 *)(iVar3 + 0x18) = 1;
            *(undefined1 *)(*(int *)(iVar3 + 0x14) + 1) = 0;
            uVar11 = local_208[0];
            goto LAB_00017dc8;
          }
          memcpy(puVar6,local_208,local_20c);
          puVar6 = *(uint **)(iVar3 + 0x14);
        }
        *(uint *)(iVar3 + 0x18) = local_20c;
        *(undefined1 *)((int)puVar6 + local_20c) = 0;
        uVar11 = local_208[0];
      }
      else {
        if (puVar6 == (uint *)(iVar3 + 0x1c)) {
          *(uint *)(iVar3 + 0x1c) = local_208[0];
          *(uint **)(iVar3 + 0x14) = local_210;
          *(uint *)(iVar3 + 0x18) = local_20c;
        }
        else {
          *(uint **)(iVar3 + 0x14) = local_210;
          *(uint *)(iVar3 + 0x18) = local_20c;
          uVar11 = *(uint *)(iVar3 + 0x1c);
          *(uint *)(iVar3 + 0x1c) = local_208[0];
          local_210 = puVar6;
          if (puVar6 != (uint *)0x0) goto LAB_00017dc8;
        }
        local_210 = local_208;
        uVar11 = local_208[0];
      }
LAB_00017dc8:
      local_208[0] = uVar11;
      local_20c = 0;
      *(undefined1 *)local_210 = 0;
      if (local_210 == local_208) goto LAB_00017bf4;
      operator_delete(local_210);
      uVar10 = uVar10 + 1;
    } while (uVar10 != 0x98092b);
LAB_00017df4:
    local_110 = 0x8000000;
    while (iVar3 = FUN_00016844(param_1,&local_110), iVar3 == 0) {
      if ((local_c8 & 1) == 0) {
        FUN_00016ad0(&local_210,auStack_108);
        uVar10 = local_20c;
        puVar6 = local_210;
        iVar5 = DAT_00063558;
        iVar3 = DAT_000181a0;
        if (DAT_00063558 == 0) {
LAB_00018068:
          local_214 = &local_210;
          iVar3 = FUN_000175d4(DAT_000181ac,iVar3,&local_214);
          puVar6 = local_210;
        }
        else {
          do {
            uVar13 = *(uint *)(iVar5 + 0x14);
            uVar11 = uVar13;
            if (uVar10 <= uVar13) {
              uVar11 = uVar10;
            }
            if ((uVar11 == 0) ||
               (iVar4 = memcmp(*(void **)(iVar5 + 0x10),puVar6,uVar11), iVar4 == 0)) {
              iVar4 = uVar13 - uVar10;
            }
            if (iVar4 < 0) {
              iVar4 = *(int *)(iVar5 + 0xc);
            }
            else {
              iVar4 = *(int *)(iVar5 + 8);
              iVar3 = iVar5;
            }
            iVar5 = iVar4;
          } while (iVar4 != 0);
          if (iVar3 == DAT_000181a0) goto LAB_00018068;
          uVar13 = *(uint *)(iVar3 + 0x14);
          uVar11 = uVar10;
          if (uVar13 <= uVar10) {
            uVar11 = uVar13;
          }
          if ((uVar11 == 0) || (iVar5 = memcmp(puVar6,*(void **)(iVar3 + 0x10),uVar11), iVar5 == 0))
          {
            iVar5 = uVar10 - uVar13;
          }
          if (iVar5 < 0) goto LAB_00018068;
        }
        memcpy((void *)(iVar3 + 0x28),&local_110,0xe8);
        if (puVar6 != local_208) {
          operator_delete(puVar6);
        }
        iVar5 = DAT_00063570;
        iVar3 = DAT_000181a4;
        if (DAT_00063570 == 0) {
LAB_00017f5c:
          local_210 = &local_110;
          iVar3 = FUN_0001c938(DAT_000181b8,iVar3,DAT_000181a8,&local_210,&local_214);
        }
        else {
          do {
            if (*(uint *)(iVar5 + 0x10) < local_110) {
              iVar4 = *(int *)(iVar5 + 0xc);
            }
            else {
              iVar4 = *(int *)(iVar5 + 8);
              iVar3 = iVar5;
            }
            iVar5 = iVar4;
          } while (iVar4 != 0);
          if ((iVar3 == DAT_000181a4) || (local_110 < *(uint *)(iVar3 + 0x10))) goto LAB_00017f5c;
        }
        FUN_00016ad0(&local_210,auStack_108);
        puVar6 = *(uint **)(iVar3 + 0x14);
        if (local_210 == local_208) {
          if (local_20c != 0) {
            if (local_20c == 1) {
              *(undefined1 *)puVar6 = (undefined1)local_208[0];
              puVar6 = *(uint **)(iVar3 + 0x14);
            }
            else {
              memcpy(puVar6,local_208,local_20c);
              puVar6 = *(uint **)(iVar3 + 0x14);
            }
          }
          *(uint *)(iVar3 + 0x18) = local_20c;
          *(undefined1 *)((int)puVar6 + local_20c) = 0;
          uVar10 = local_208[0];
        }
        else {
          if (puVar6 == (uint *)(iVar3 + 0x1c)) {
            *(uint *)(iVar3 + 0x1c) = local_208[0];
            *(uint **)(iVar3 + 0x14) = local_210;
            *(uint *)(iVar3 + 0x18) = local_20c;
          }
          else {
            *(uint **)(iVar3 + 0x14) = local_210;
            *(uint *)(iVar3 + 0x18) = local_20c;
            uVar10 = *(uint *)(iVar3 + 0x1c);
            *(uint *)(iVar3 + 0x1c) = local_208[0];
            local_210 = puVar6;
            if (puVar6 != (uint *)0x0) goto LAB_00017fd4;
          }
          local_210 = local_208;
          uVar10 = local_208[0];
        }
LAB_00017fd4:
        local_208[0] = uVar10;
        local_20c = 0;
        *(undefined1 *)local_210 = 0;
        if (local_210 != local_208) {
          operator_delete(local_210);
        }
      }
      local_110 = local_110 + 1;
    }
  }
  piVar1 = DAT_000181b0;
  if (DAT_00063580 != DAT_000181b0) {
    piVar14 = DAT_000181b0 + -0xb;
    piVar17 = DAT_000181b0 + -0xc;
    piVar12 = DAT_00063580;
    do {
      piVar7 = (int *)FUN_0001b9e0(piVar17,piVar12 + 2);
      if (piVar14 == piVar7) {
        iVar3 = piVar12[2];
        goto LAB_00018158;
      }
      piVar12 = (int *)*piVar12;
    } while (piVar12 != piVar1);
  }
  p_Var2 = DAT_000181b4;
  if (DAT_00063598 != DAT_000181b4) {
    p_Var15 = DAT_000181b4 + -0x3c;
    p_Var18 = DAT_000181b4 + -0x40;
    p_Var9 = DAT_00063598;
    do {
      p_Var8 = (_Rb_tree_node_base *)FUN_0001b9e0(p_Var18,p_Var9 + 0x10);
      if (p_Var15 == p_Var8) {
        iVar3 = *(int *)(p_Var9 + 0x10);
LAB_00018158:
        fprintf(stderr,"unknown control \'%s\'\n",iVar3);
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      p_Var9 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var9);
    } while (p_Var9 != p_Var2);
  }
  return;
}



/* ===== FUN_000181bc @ 000181bc size=400 ===== */

void FUN_000181bc(int param_1)

{
  char *__format;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 auStack_2c [4];
  undefined1 *local_28 [2];
  undefined1 auStack_20 [16];
  
  if (DAT_00063570 == (undefined4 *)0x0) {
    puVar1 = &DAT_0006356c;
  }
  else {
    puVar1 = &DAT_0006356c;
    puVar2 = DAT_00063570;
    do {
      if ((uint)puVar2[4] < *(uint *)(param_1 + 0x58)) {
        puVar3 = (undefined4 *)puVar2[3];
      }
      else {
        puVar3 = (undefined4 *)puVar2[2];
        puVar1 = puVar2;
      }
      puVar2 = puVar3;
    } while (puVar3 != (undefined4 *)0x0);
    if ((puVar1 != &DAT_0006356c) && ((uint)puVar1[4] <= *(uint *)(param_1 + 0x58)))
    goto LAB_00018218;
  }
  local_28[0] = (undefined1 *)(param_1 + 0x58);
  puVar1 = (undefined4 *)FUN_0001c938(DAT_00018368,puVar1,DAT_00018364,local_28,auStack_2c);
LAB_00018218:
  printf("ctrl: %s\n",puVar1[5]);
  uVar4 = *(uint *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(param_1 + 0xc) == 5) {
      printf("\tvalue: %lld 0x%llx\n");
      uVar4 = *(uint *)(param_1 + 8);
    }
    else {
      if (*(int *)(param_1 + 0xc) == 8) {
        __format = "\tvalue: %u 0x%08x\n";
      }
      else {
        __format = "\tvalue: %d 0x%x\n";
      }
      printf(__format,*(undefined4 *)(param_1 + 0x10));
      uVar4 = *(uint *)(param_1 + 8);
    }
  }
  if ((uVar4 & 2) != 0) {
    FUN_00014958(local_28,*(undefined4 *)(param_1 + 0x18),DAT_0001836c);
    printf("\tflags: %s\n",local_28[0]);
    if (local_28[0] != auStack_20) {
      operator_delete(local_28[0]);
    }
    uVar4 = *(uint *)(param_1 + 8);
  }
  if ((uVar4 & 4) != 0) {
    if (*(int *)(param_1 + 0xc) == 8) {
      printf("\trange: max=0x%08x default=0x%08x\n");
      return;
    }
    printf("\trange: min=%d max=%d step=%d default=%d\n",*(undefined4 *)(param_1 + 0x1c),
           *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
           *(undefined4 *)(param_1 + 0x28));
  }
  return;
}



/* ===== FUN_00018370 @ 00018370 size=764 ===== */

undefined4 FUN_00018370(int param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  undefined1 auStack_48 [4];
  undefined1 **local_44;
  undefined1 *local_40;
  uint local_3c;
  undefined1 auStack_38 [20];
  
  if (*(int *)(param_1 + 0x54) == 0) {
    return 0;
  }
  uVar5 = 0;
  piVar3 = param_2 + -1;
  piVar14 = (int *)(param_1 + 0x58);
  do {
    piVar3[1] = 0;
    uVar5 = uVar5 + 1;
    piVar3[5] = *piVar14;
    piVar3 = piVar3 + 1;
    piVar14 = piVar14 + 1;
  } while (uVar5 < *(uint *)(param_1 + 0x54));
  FUN_00016ad0(&local_40,param_1 + 8);
  puVar1 = local_40;
  puVar10 = DAT_000635ac;
  if (DAT_000635ac != (undefined4 *)0x0) {
    puVar6 = &DAT_000635a8;
    puVar11 = DAT_000635ac;
    do {
      uVar13 = puVar11[5];
      uVar5 = uVar13;
      if (local_3c <= uVar13) {
        uVar5 = local_3c;
      }
      if ((uVar5 == 0) || (iVar2 = memcmp((void *)puVar11[4],puVar1,uVar5), iVar2 == 0)) {
        iVar2 = uVar13 - local_3c;
      }
      if (iVar2 < 0) {
        puVar8 = (undefined4 *)puVar11[3];
      }
      else {
        puVar8 = (undefined4 *)puVar11[2];
        puVar6 = puVar11;
      }
      puVar11 = puVar8;
    } while (puVar8 != (undefined4 *)0x0);
    if (puVar6 != &DAT_000635a8) {
      uVar13 = puVar6[5];
      uVar5 = local_3c;
      if (uVar13 <= local_3c) {
        uVar5 = uVar13;
      }
      if ((uVar5 == 0) || (iVar2 = memcmp(puVar1,(void *)puVar6[4],uVar5), iVar2 == 0)) {
        iVar2 = local_3c - uVar13;
      }
      puVar6 = DAT_00018684;
      if (-1 < iVar2) {
        do {
          uVar13 = puVar10[5];
          uVar5 = local_3c;
          if (uVar13 <= local_3c) {
            uVar5 = uVar13;
          }
          if ((uVar5 == 0) || (iVar2 = memcmp((void *)puVar10[4],puVar1,uVar5), iVar2 == 0)) {
            iVar2 = uVar13 - local_3c;
          }
          if (iVar2 < 0) {
            puVar11 = (undefined4 *)puVar10[3];
          }
          else {
            puVar11 = (undefined4 *)puVar10[2];
            puVar6 = puVar10;
          }
          puVar10 = puVar11;
        } while (puVar11 != (undefined4 *)0x0);
        if (puVar6 == &DAT_000635a8) {
LAB_000185d8:
          local_44 = &local_40;
          puVar6 = (undefined4 *)FUN_0001ceb4(DAT_0001868c,puVar6,DAT_00018688,&local_44,auStack_48)
          ;
        }
        else {
          uVar13 = puVar6[5];
          uVar5 = local_3c;
          if (uVar13 <= local_3c) {
            uVar5 = uVar13;
          }
          if ((uVar5 == 0) || (iVar2 = memcmp(puVar1,(void *)puVar6[4],uVar5), iVar2 == 0)) {
            iVar2 = local_3c - uVar13;
          }
          if (iVar2 < 0) goto LAB_000185d8;
        }
        iVar2 = puVar6[0xb];
        iVar4 = puVar6[0xc];
        iVar7 = puVar6[0xd];
        *param_2 = puVar6[10];
        param_2[1] = iVar2;
        param_2[2] = iVar4;
        param_2[3] = iVar7;
        iVar2 = puVar6[0xf];
        iVar4 = puVar6[0x10];
        iVar7 = puVar6[0x11];
        param_2[4] = puVar6[0xe];
        param_2[5] = iVar2;
        param_2[6] = iVar4;
        param_2[7] = iVar7;
        piVar3 = param_2 + 4;
        uVar5 = 0;
        do {
          puVar1 = local_40;
          if (*piVar3 == 0) {
            uVar13 = *(uint *)(param_1 + 0x54);
            uVar15 = uVar5;
            if (uVar13 != uVar5) goto LAB_00018610;
            if (uVar5 != 0) goto LAB_0001854c;
            goto LAB_0001859c;
          }
          uVar15 = uVar5 + 1;
          piVar3 = piVar3 + 1;
          uVar5 = uVar15;
        } while (uVar15 != 4);
        uVar5 = *(uint *)(param_1 + 0x54);
        uVar13 = uVar5;
        if (uVar5 == 4) {
LAB_0001854c:
          if (*(uint *)(param_1 + 0x58) < (uint)(*param_2 + param_2[4])) {
            uVar13 = 0;
          }
          else {
            uVar13 = 0;
            puVar12 = (uint *)(param_1 + 0x5c);
            do {
              piVar3 = param_2 + 1;
              uVar13 = uVar13 + 1;
              if (uVar5 <= uVar13) goto LAB_0001859c;
              uVar15 = *puVar12;
              piVar14 = param_2 + 5;
              puVar12 = puVar12 + 1;
              param_2 = piVar3;
            } while ((uint)(*piVar3 + *piVar14) <= uVar15);
          }
          fprintf(stderr,"the subset offset+size for dimension %d is out of range\n",uVar13);
        }
        else {
LAB_00018610:
          fprintf(stderr,"expected %d dimensions but --subset specified %d\n",uVar13,uVar15);
        }
        uVar9 = 1;
        goto LAB_000185a0;
      }
    }
  }
LAB_0001859c:
  local_40 = puVar1;
  uVar9 = 0;
LAB_000185a0:
  if (local_40 != auStack_38) {
    operator_delete(local_40);
  }
  return uVar9;
}



/* ===== FUN_00018690 @ 00018690 size=2564 ===== */

void FUN_00018690(int param_1)

{
  uint *puVar1;
  FILE *pFVar2;
  undefined4 *****pppppuVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  _Rb_tree_node_base *p_Var7;
  int iVar8;
  ulong uVar9;
  int *piVar10;
  char *pcVar11;
  undefined4 ******extraout_r1;
  uint extraout_r1_00;
  undefined4 ******extraout_r1_01;
  uint extraout_r1_02;
  undefined4 ******extraout_r1_03;
  uint extraout_r1_04;
  undefined4 *****pppppuVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  undefined4 ******ppppppuVar17;
  undefined4 ******ppppppuVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  undefined4 uVar22;
  void *__s2;
  undefined4 ******ppppppuVar23;
  uint *puVar24;
  int *piVar25;
  uint local_f0;
  undefined1 *local_e8;
  undefined1 auStack_c4 [4];
  undefined1 auStack_c0 [4];
  undefined1 auStack_bc [4];
  undefined1 auStack_b8 [4];
  undefined4 *****local_b4 [3];
  uint uStack_a8;
  _Rb_tree_node_base *local_a4;
  size_t local_a0;
  uint uStack_9c;
  char *local_98;
  uint local_94;
  undefined4 local_90;
  uint uStack_8c;
  uint local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  uint uStack_7c;
  undefined1 auStack_78 [4];
  undefined4 local_74;
  undefined4 *local_70;
  _Rb_tree_node_base *local_6c;
  _Rb_tree_node_base *local_68;
  undefined4 local_64;
  undefined4 *****local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  uint uStack_50;
  _Rb_tree_node_base **local_4c;
  undefined4 *****local_48;
  uint local_44 [4];
  uint local_34 [4];
  
  if ((DAT_000633d3 != '\0') &&
     (iVar8 = FUN_00013938(param_1,0x40045644,&DAT_000635bc,"VIDIOC_S_PRIORITY"), -1 < iVar8)) {
    printf("Priority set: %d\n",DAT_000635bc);
  }
  if ((DAT_00063363 == '\0') || (DAT_000635a0 == 0)) {
    return;
  }
  uStack_8c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_88 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_84 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  bVar21 = false;
  local_74 = 0;
  local_70 = (undefined4 *)0x0;
  local_64 = 0;
  local_90 = 0;
  local_6c = (_Rb_tree_node_base *)&local_74;
  local_80 = 0;
  uStack_7c = uStack_8c;
  local_68 = local_6c;
  if (DAT_00063598 != DAT_000190a4) {
    p_Var7 = DAT_00063598;
    do {
      iVar8 = DAT_000190a8;
      if (DAT_00063558 == 0) {
LAB_00018a8c:
        local_a4 = p_Var7 + 0x10;
        iVar8 = FUN_0001d2a4(DAT_000190b0,iVar8,DAT_000190ac,&local_a4,auStack_c4);
      }
      else {
        uVar19 = *(uint *)(p_Var7 + 0x14);
        __s2 = *(void **)(p_Var7 + 0x10);
        iVar5 = DAT_00063558;
        do {
          uVar20 = *(uint *)(iVar5 + 0x14);
          uVar16 = uVar20;
          if (uVar19 <= uVar20) {
            uVar16 = uVar19;
          }
          if ((uVar16 == 0) || (iVar4 = memcmp(*(void **)(iVar5 + 0x10),__s2,uVar16), iVar4 == 0)) {
            iVar4 = uVar20 - uVar19;
          }
          if (iVar4 < 0) {
            iVar4 = *(int *)(iVar5 + 0xc);
          }
          else {
            iVar4 = *(int *)(iVar5 + 8);
            iVar8 = iVar5;
          }
          iVar5 = iVar4;
        } while (iVar4 != 0);
        if (iVar8 == DAT_000190a8) goto LAB_00018a8c;
        uVar20 = *(uint *)(iVar8 + 0x14);
        uVar16 = uVar19;
        if (uVar20 <= uVar19) {
          uVar16 = uVar20;
        }
        if ((uVar16 == 0) || (iVar5 = memcmp(__s2,*(void **)(iVar8 + 0x10),uVar16), iVar5 == 0)) {
          iVar5 = uVar19 - uVar20;
        }
        if (iVar5 < 0) goto LAB_00018a8c;
      }
      uStack_9c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      local_98 = *(char **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      local_94 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_a0 = 0;
      local_a4 = *(_Rb_tree_node_base **)(iVar8 + 0x28);
      if (*(int *)(iVar8 + 0x2c) == 5) {
        bVar21 = true;
      }
      if ((*(uint *)(iVar8 + 0x70) & 0x100) == 0) {
        if (((uint)local_a4 & 0xf000) != 0) {
          bVar21 = true;
        }
        local_98 = (char *)strtol(*(char **)(p_Var7 + 0x28),(char **)0x0,0);
      }
      else {
        local_60 = (undefined4 ******)0x0;
        uStack_5c = 1;
        local_54 = 0;
        local_b4[0] = (undefined4 ******)0x0;
        local_a0 = *(int *)(iVar8 + 0x74) * *(int *)(iVar8 + 0x78);
        local_b4[1] = (undefined4 *****)uStack_9c;
        local_b4[2] = (undefined4 *****)local_98;
        uStack_a8 = local_94;
        uStack_58 = local_98;
        uStack_50 = uStack_9c;
        local_98 = malloc(local_a0);
        local_4c = &local_a4;
        ioctl(param_1,0xc0185647,&local_60);
        iVar5 = FUN_00018370(iVar8 + 0x28,&local_48);
        if (iVar5 != 0) {
          FUN_0001ba9c(auStack_78,local_70);
          return;
        }
        iVar5 = *(int *)(iVar8 + 0x7c);
        iVar4 = iVar5 + -1;
        local_b4[iVar4] = (undefined4 *****)0x1;
        if (iVar4 != 0) {
          local_b4[0] = *(undefined4 *******)(iVar8 + 0x84);
          piVar10 = (int *)(iVar8 + 0x88);
          ppppppuVar18 = local_b4;
          while (ppppppuVar23 = ppppppuVar18, (int *)(iVar8 + 0x80 + iVar5 * 4) != piVar10) {
            piVar25 = piVar10 + 1;
            pppppuVar12 = (undefined4 *****)*piVar10;
            ppppppuVar23[1] = pppppuVar12;
            ppppppuVar17 = local_b4;
            while( true ) {
              *ppppppuVar17 = (undefined4 *****)((int)pppppuVar12 * (int)*ppppppuVar17);
              piVar10 = piVar25;
              ppppppuVar18 = ppppppuVar23 + 1;
              if (ppppppuVar17 == ppppppuVar23) break;
              pppppuVar12 = ppppppuVar23[1];
              ppppppuVar17 = ppppppuVar17 + 1;
            }
          }
        }
        uVar19 = *(uint *)(iVar8 + 0x2c);
        if (uVar19 == 0x100) {
          uVar9 = strtoul(*(char **)(p_Var7 + 0x28),(char **)0x0,0);
          pppppuVar12 = local_b4[0];
          local_f0 = *(uint *)(iVar8 + 0x78);
          if (local_f0 != 0) {
            uVar19 = 0;
            do {
              iVar5 = *(int *)(iVar8 + 0x7c);
              if (iVar5 == 0) {
LAB_00018e70:
                local_98[uVar19] = (char)uVar9;
                local_f0 = *(uint *)(iVar8 + 0x78);
              }
              else {
                uVar13 = __aeabi_uidiv(uVar19,pppppuVar12);
                __aeabi_uidivmod(uVar13,*(undefined4 *)(iVar8 + 0x80));
                if ((local_48 <= extraout_r1_01) &&
                   (extraout_r1_01 < (undefined4 ******)((int)local_48 + local_44[3]))) {
                  ppppppuVar18 = local_b4;
                  iVar4 = 0;
                  puVar24 = local_44;
                  puVar6 = (undefined4 *)(iVar8 + 0x84);
                  do {
                    iVar4 = iVar4 + 1;
                    if (iVar4 == iVar5) goto LAB_00018e70;
                    uVar22 = *puVar6;
                    ppppppuVar18 = ppppppuVar18 + 1;
                    uVar13 = __aeabi_uidiv(uVar19,*ppppppuVar18);
                    __aeabi_uidivmod(uVar13,uVar22);
                    uVar16 = *puVar24;
                  } while ((uVar16 <= extraout_r1_02) &&
                          (puVar1 = puVar24 + 4, puVar24 = puVar24 + 1, puVar6 = puVar6 + 1,
                          extraout_r1_02 < uVar16 + *puVar1));
                }
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < local_f0);
          }
        }
        else if (uVar19 < 0x101) {
          if (uVar19 == 7) {
            strncpy(local_98,*(char **)(p_Var7 + 0x28),*(size_t *)(iVar8 + 0x58));
            local_98[*(int *)(iVar8 + 0x58)] = '\0';
          }
          else {
LAB_00018e98:
            fprintf(stderr,"%s: unsupported payload type\n",iVar8 + 0x30);
          }
        }
        else if (uVar19 == 0x101) {
          uVar9 = strtoul(*(char **)(p_Var7 + 0x28),(char **)0x0,0);
          pppppuVar3 = local_48;
          pcVar11 = local_98;
          pppppuVar12 = local_b4[0];
          local_f0 = *(uint *)(iVar8 + 0x78);
          if (local_f0 != 0) {
            uVar19 = 0;
            ppppppuVar18 = (undefined4 ******)((int)local_48 + local_44[3]);
            do {
              iVar5 = *(int *)(iVar8 + 0x7c);
              if (iVar5 == 0) {
LAB_00018f94:
                *(short *)(pcVar11 + uVar19 * 2) = (short)uVar9;
                local_f0 = *(uint *)(iVar8 + 0x78);
              }
              else {
                uVar13 = __aeabi_uidiv(uVar19,pppppuVar12);
                __aeabi_uidivmod(uVar13,*(undefined4 *)(iVar8 + 0x80));
                if ((pppppuVar3 <= extraout_r1_03) && (extraout_r1_03 < ppppppuVar18)) {
                  ppppppuVar23 = local_b4;
                  iVar4 = 0;
                  puVar24 = local_44;
                  puVar6 = (undefined4 *)(iVar8 + 0x84);
                  do {
                    iVar4 = iVar4 + 1;
                    if (iVar4 == iVar5) goto LAB_00018f94;
                    uVar22 = *puVar6;
                    ppppppuVar23 = ppppppuVar23 + 1;
                    uVar13 = __aeabi_uidiv(uVar19,*ppppppuVar23);
                    __aeabi_uidivmod(uVar13,uVar22);
                    uVar16 = *puVar24;
                  } while ((uVar16 <= extraout_r1_04) &&
                          (puVar1 = puVar24 + 4, puVar24 = puVar24 + 1, puVar6 = puVar6 + 1,
                          extraout_r1_04 < uVar16 + *puVar1));
                }
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < local_f0);
          }
        }
        else {
          if (uVar19 != 0x102) goto LAB_00018e98;
          uVar9 = strtoul(*(char **)(p_Var7 + 0x28),(char **)0x0,0);
          pppppuVar12 = local_b4[0];
          local_f0 = *(uint *)(iVar8 + 0x78);
          if (local_f0 != 0) {
            uVar19 = 0;
            do {
              iVar5 = *(int *)(iVar8 + 0x7c);
              if (iVar5 == 0) {
LAB_00018c90:
                *(ulong *)(local_98 + uVar19 * 4) = uVar9;
                local_f0 = *(uint *)(iVar8 + 0x78);
              }
              else {
                uVar13 = __aeabi_uidiv(uVar19,pppppuVar12);
                __aeabi_uidivmod(uVar13,*(undefined4 *)(iVar8 + 0x80));
                if ((local_48 <= extraout_r1) &&
                   (extraout_r1 < (undefined4 ******)((int)local_48 + local_44[3]))) {
                  ppppppuVar18 = local_b4;
                  iVar4 = 0;
                  puVar24 = local_44;
                  puVar6 = (undefined4 *)(iVar8 + 0x84);
                  do {
                    iVar4 = iVar4 + 1;
                    if (iVar4 == iVar5) goto LAB_00018c90;
                    uVar22 = *puVar6;
                    ppppppuVar18 = ppppppuVar18 + 1;
                    uVar13 = __aeabi_uidiv(uVar19,*ppppppuVar18);
                    __aeabi_uidivmod(uVar13,uVar22);
                    uVar16 = *puVar24;
                  } while ((uVar16 <= extraout_r1_00) &&
                          (puVar1 = puVar24 + 4, puVar24 = puVar24 + 1, puVar6 = puVar6 + 1,
                          extraout_r1_00 < uVar16 + *puVar1));
                }
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < local_f0);
          }
        }
        bVar21 = true;
      }
      puVar6 = &local_74;
      local_48 = (undefined4 *****)((uint)local_a4 & 0xfff0000);
      puVar14 = local_70;
      if (local_70 == (undefined4 *)0x0) {
LAB_000188b0:
        local_b4[0] = &local_48;
        puVar6 = (undefined4 *)FUN_0001cc90(auStack_78,puVar6,DAT_000190ac,local_b4,auStack_c0);
      }
      else {
        do {
          if ((undefined4 ******)puVar14[4] < local_48) {
            puVar15 = (undefined4 *)puVar14[3];
          }
          else {
            puVar15 = (undefined4 *)puVar14[2];
            puVar6 = puVar14;
          }
          puVar14 = puVar15;
        } while (puVar15 != (undefined4 *)0x0);
        if ((puVar6 == &local_74) || (local_48 < (undefined4 ******)puVar6[4])) goto LAB_000188b0;
      }
      puVar24 = (uint *)puVar6[6];
      if (puVar24 == (uint *)puVar6[7]) {
        FUN_0001bae0(puVar6 + 5,puVar24,&local_a4);
      }
      else {
        *puVar24 = (uint)local_a4;
        puVar24[1] = local_a0;
        puVar24[2] = uStack_9c;
        puVar24[3] = (uint)local_98;
        puVar24[4] = local_94;
        puVar6[6] = puVar24 + 5;
      }
      p_Var7 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var7);
    } while (p_Var7 != DAT_000190a4);
    p_Var7 = local_6c;
    if (local_6c != (_Rb_tree_node_base *)&local_74) {
      do {
        uVar19 = *(uint *)(p_Var7 + 0x14);
        uVar16 = *(uint *)(p_Var7 + 0x18);
        if ((bVar21) ||
           (*(int *)(p_Var7 + 0x10) != 0x980000 && *(int *)(p_Var7 + 0x10) != 0x8000000)) {
          if (uVar19 != uVar16) {
            local_90 = *(undefined4 *)(p_Var7 + 0x10);
            uStack_8c = ((int)(uVar16 - uVar19) >> 2) * -0x33333333;
            uStack_7c = uVar19;
            iVar8 = FUN_00013938(param_1,0xc0185648,&local_90,"VIDIOC_S_EXT_CTRLS");
            pFVar2 = stderr;
            if (iVar8 != 0) {
              if (local_88 < uStack_8c) {
                local_60 = *(undefined4 ******)(local_88 * 0x14 + *(int *)(p_Var7 + 0x14));
                iVar8 = DAT_000190b4;
                iVar5 = DAT_00063570;
                if (DAT_00063570 == 0) {
LAB_00018d5c:
                  local_48 = &local_60;
                  iVar8 = FUN_0001c938(DAT_000190b8,iVar8,DAT_000190ac,&local_48,auStack_b8);
                }
                else {
                  do {
                    if (*(undefined4 *******)(iVar5 + 0x10) < local_60) {
                      iVar4 = *(int *)(iVar5 + 0xc);
                    }
                    else {
                      iVar4 = *(int *)(iVar5 + 8);
                      iVar8 = iVar5;
                    }
                    iVar5 = iVar4;
                  } while (iVar4 != 0);
                  if ((iVar8 == DAT_000190b4) || (local_60 < *(undefined4 *******)(iVar8 + 0x10)))
                  goto LAB_00018d5c;
                }
                uVar13 = *(undefined4 *)(iVar8 + 0x14);
                piVar10 = __errno_location();
                pcVar11 = strerror(*piVar10);
                fprintf(pFVar2,"%s: %s\n",uVar13,pcVar11);
              }
              else {
                piVar10 = __errno_location();
                pcVar11 = strerror(*piVar10);
                fprintf(pFVar2,"Error setting controls: %s\n",pcVar11);
              }
            }
          }
        }
        else if (uVar19 != uVar16) {
          uVar16 = 0;
          do {
            puVar6 = (undefined4 *)(uVar16 * 0x14 + uVar19);
            local_48 = (undefined4 *****)*puVar6;
            local_44[0] = puVar6[3];
            iVar8 = FUN_00013938(param_1,0xc008561c,&local_48,"VIDIOC_S_CTRL");
            pFVar2 = stderr;
            if (iVar8 != 0) {
              iVar8 = DAT_000190b4;
              iVar5 = DAT_00063570;
              if (DAT_00063570 == 0) {
LAB_0001901c:
                local_60 = &local_48;
                iVar8 = FUN_0001c938(DAT_000190b8,iVar8,DAT_000190ac,&local_60,auStack_bc);
              }
              else {
                do {
                  if (*(undefined4 *******)(iVar5 + 0x10) < local_48) {
                    iVar4 = *(int *)(iVar5 + 0xc);
                  }
                  else {
                    iVar4 = *(int *)(iVar5 + 8);
                    iVar8 = iVar5;
                  }
                  iVar5 = iVar4;
                } while (iVar4 != 0);
                if ((iVar8 == DAT_000190b4) || (local_48 < *(undefined4 *******)(iVar8 + 0x10)))
                goto LAB_0001901c;
              }
              uVar13 = *(undefined4 *)(iVar8 + 0x14);
              piVar10 = __errno_location();
              pcVar11 = strerror(*piVar10);
              fprintf(pFVar2,"%s: %s\n",uVar13,pcVar11);
            }
            uVar19 = *(uint *)(p_Var7 + 0x14);
            uVar16 = uVar16 + 1;
          } while (uVar16 < (uint)(((int)(*(int *)(p_Var7 + 0x18) - uVar19) >> 2) * -0x33333333));
        }
        p_Var7 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var7);
      } while (p_Var7 != (_Rb_tree_node_base *)&local_74);
    }
  }
  local_e8 = auStack_78;
  FUN_0001ba9c(local_e8,local_70);
  return;
}



/* ===== FUN_000190bc @ 000190bc size=2924 ===== */

void FUN_000190bc(undefined4 param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  _Rb_tree_node_base *p_Var6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  char *pcVar10;
  uint *extraout_r1;
  uint extraout_r1_00;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  uint *puVar16;
  uint *puVar17;
  char *__haystack;
  uint uVar18;
  uint *puVar19;
  undefined4 *puVar20;
  uint *puVar21;
  void *pvVar22;
  uint uVar23;
  ushort *puVar24;
  undefined4 uVar25;
  uint uVar26;
  uint *puVar27;
  undefined4 *local_f0;
  uint local_d4;
  undefined1 auStack_b0 [4];
  undefined1 auStack_ac [4];
  undefined1 auStack_a8 [4];
  undefined1 auStack_a4 [4];
  undefined1 auStack_a0 [4];
  int *local_9c;
  uint *local_98;
  uint **local_94;
  uint **local_90;
  int local_8c;
  uint local_88 [6];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  int iStack_64;
  undefined1 auStack_60 [4];
  undefined4 local_5c;
  undefined4 *local_58;
  _Rb_tree_node_base *local_54;
  _Rb_tree_node_base *local_50;
  undefined4 local_4c;
  uint *local_48;
  uint local_44 [2];
  void *local_3c;
  uint local_38 [5];
  
  uVar8 = DAT_00019c50;
  if ((DAT_00063343 != '\0') && ((undefined4 **)DAT_00063580 != &DAT_00063580)) {
    bVar2 = false;
    local_88[4] = 0;
    local_88[5] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_70 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_6c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_5c = 0;
    local_58 = (undefined4 *)0x0;
    local_4c = 0;
    local_68 = 0;
    iStack_64 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    local_54 = (_Rb_tree_node_base *)&local_5c;
    local_50 = (_Rb_tree_node_base *)&local_5c;
    puVar20 = DAT_00063580;
    do {
      iVar11 = DAT_00019c54;
      if (DAT_00063558 == 0) {
LAB_00019828:
        local_9c = puVar20 + 2;
        iVar11 = FUN_0001d2a4(DAT_00019c60,iVar11,uVar8,&local_9c,auStack_b0);
      }
      else {
        uVar18 = puVar20[3];
        pvVar22 = (void *)puVar20[2];
        iVar4 = DAT_00063558;
        do {
          uVar26 = *(uint *)(iVar4 + 0x14);
          uVar12 = uVar26;
          if (uVar18 <= uVar26) {
            uVar12 = uVar18;
          }
          if ((uVar12 == 0) || (iVar3 = memcmp(*(void **)(iVar4 + 0x10),pvVar22,uVar12), iVar3 == 0)
             ) {
            iVar3 = uVar26 - uVar18;
          }
          if (iVar3 < 0) {
            iVar3 = *(int *)(iVar4 + 0xc);
          }
          else {
            iVar3 = *(int *)(iVar4 + 8);
            iVar11 = iVar4;
          }
          iVar4 = iVar3;
        } while (iVar3 != 0);
        if (iVar11 == DAT_00019c54) goto LAB_00019828;
        uVar26 = *(uint *)(iVar11 + 0x14);
        uVar12 = uVar18;
        if (uVar26 <= uVar18) {
          uVar12 = uVar26;
        }
        if ((uVar12 == 0) || (iVar4 = memcmp(pvVar22,*(void **)(iVar11 + 0x10),uVar12), iVar4 == 0))
        {
          iVar4 = uVar18 - uVar26;
        }
        if (iVar4 < 0) goto LAB_00019828;
      }
      local_44[0] = 0;
      local_44[1] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      local_3c = *(void **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      local_38[0] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      puVar17 = *(uint **)(iVar11 + 0x28);
      local_48 = puVar17;
      if (*(int *)(iVar11 + 0x2c) == 5) {
        bVar2 = true;
      }
      if ((*(uint *)(iVar11 + 0x70) & 0x100) != 0) {
        bVar2 = true;
        local_44[0] = *(int *)(iVar11 + 0x74) * *(int *)(iVar11 + 0x78);
        local_3c = calloc(1,local_44[0]);
      }
      if (((uint)puVar17 & 0xf000) != 0) {
        bVar2 = true;
      }
      puVar5 = &local_5c;
      local_88[0] = (uint)puVar17 & 0xfff0000;
      puVar14 = local_58;
      if (local_58 == (undefined4 *)0x0) {
LAB_00019270:
        local_98 = local_88;
        puVar5 = (undefined4 *)FUN_0001cc90(auStack_60,puVar5,uVar8,&local_98,auStack_ac);
      }
      else {
        do {
          if ((uint)puVar14[4] < local_88[0]) {
            puVar15 = (undefined4 *)puVar14[3];
          }
          else {
            puVar15 = (undefined4 *)puVar14[2];
            puVar5 = puVar14;
          }
          puVar14 = puVar15;
        } while (puVar15 != (undefined4 *)0x0);
        if ((puVar5 == &local_5c) || (local_88[0] < (uint)puVar5[4])) goto LAB_00019270;
      }
      puVar17 = (uint *)puVar5[6];
      if (puVar17 == (uint *)puVar5[7]) {
        FUN_0001bae0(puVar5 + 5,puVar17,&local_48);
      }
      else {
        *puVar17 = (uint)local_48;
        puVar17[1] = local_44[0];
        puVar17[2] = local_44[1];
        puVar17[3] = (uint)local_3c;
        puVar17[4] = local_38[0];
        puVar5[6] = puVar17 + 5;
      }
      puVar20 = (undefined4 *)*puVar20;
    } while ((undefined4 **)puVar20 != &DAT_00063580);
    p_Var6 = local_54;
    if (local_54 != (_Rb_tree_node_base *)&local_5c) {
      do {
        iVar11 = DAT_00019c58;
        uVar8 = DAT_00019c50;
        iVar4 = *(int *)(p_Var6 + 0x14);
        iVar3 = *(int *)(p_Var6 + 0x18);
        if ((bVar2) || (*(int *)(p_Var6 + 0x10) != 0x8000000 && *(int *)(p_Var6 + 0x10) != 0x980000)
           ) {
          if (iVar4 != iVar3) {
            local_88[4] = *(uint *)(p_Var6 + 0x10);
            local_88[5] = (iVar3 - iVar4 >> 2) * -0x33333333;
            iStack_64 = iVar4;
            FUN_00013938(param_1,0xc0185647,local_88 + 4,"VIDIOC_G_EXT_CTRLS");
            iVar11 = *(int *)(p_Var6 + 0x14);
            if (*(int *)(p_Var6 + 0x18) != iVar11) {
              uVar18 = 0;
              do {
                puVar17 = (uint *)(uVar18 * 0x14 + iVar11);
                local_48 = (uint *)*puVar17;
                uVar12 = puVar17[3];
                iVar4 = DAT_00063570;
                iVar11 = DAT_00019c58;
                if (DAT_00063570 == 0) {
LAB_00019404:
                  local_90 = &local_48;
                  iVar11 = FUN_0001c938(DAT_00019c5c,iVar11,DAT_00019c50,&local_90,auStack_a4);
                }
                else {
                  do {
                    if (*(uint **)(iVar4 + 0x10) < local_48) {
                      iVar3 = *(int *)(iVar4 + 0xc);
                    }
                    else {
                      iVar3 = *(int *)(iVar4 + 8);
                      iVar11 = iVar4;
                    }
                    iVar4 = iVar3;
                  } while (iVar3 != 0);
                  if ((iVar11 == DAT_00019c58) || (local_48 < *(uint **)(iVar11 + 0x10)))
                  goto LAB_00019404;
                }
                iVar4 = DAT_00019c54;
                if (DAT_00063558 == 0) {
LAB_00019624:
                  local_8c = iVar11 + 0x14;
                  iVar4 = FUN_0001d2a4(DAT_00019c60,iVar4,DAT_00019c50,&local_8c,auStack_a0);
                  if ((*(uint *)(iVar4 + 0x70) & 0x100) != 0) goto LAB_000194e0;
LAB_00019658:
                  printf("%s: %d\n",*(undefined4 *)(iVar11 + 0x14),uVar12);
                }
                else {
                  uVar26 = *(uint *)(iVar11 + 0x18);
                  pvVar22 = *(void **)(iVar11 + 0x14);
                  iVar3 = DAT_00063558;
                  do {
                    uVar23 = *(uint *)(iVar3 + 0x14);
                    uVar13 = uVar23;
                    if (uVar26 <= uVar23) {
                      uVar13 = uVar26;
                    }
                    if ((uVar13 == 0) ||
                       (iVar7 = memcmp(*(void **)(iVar3 + 0x10),pvVar22,uVar13), iVar7 == 0)) {
                      iVar7 = uVar23 - uVar26;
                    }
                    if (iVar7 < 0) {
                      iVar7 = *(int *)(iVar3 + 0xc);
                    }
                    else {
                      iVar7 = *(int *)(iVar3 + 8);
                      iVar4 = iVar3;
                    }
                    iVar3 = iVar7;
                  } while (iVar7 != 0);
                  if (iVar4 == DAT_00019c54) goto LAB_00019624;
                  uVar23 = *(uint *)(iVar4 + 0x14);
                  uVar13 = uVar26;
                  if (uVar23 <= uVar26) {
                    uVar13 = uVar23;
                  }
                  if ((uVar13 == 0) ||
                     (iVar3 = memcmp(pvVar22,*(void **)(iVar4 + 0x10),uVar13), iVar3 == 0)) {
                    iVar3 = uVar26 - uVar23;
                  }
                  if (iVar3 < 0) goto LAB_00019624;
                  if ((*(uint *)(iVar4 + 0x70) & 0x100) == 0) goto LAB_00019658;
LAB_000194e0:
                  uVar26 = *(uint *)(iVar4 + 0x2c);
                  if (uVar26 == 7) {
                    uVar8 = *(undefined4 *)(iVar11 + 0x14);
                    FUN_00016c0c(&local_48,uVar12);
                    printf("%s: \'%s\'\n",uVar8,local_48);
                    if (local_48 != local_44 + 1) {
                      operator_delete(local_48);
                    }
                  }
                  else if ((uVar26 < 7) || (2 < uVar26 - 0x100)) {
                    fprintf(stderr,"%s: unsupported payload type\n",iVar4 + 0x30);
                  }
                  else {
                    local_88[1] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                    local_88[2] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                    local_88[3] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                    local_88[0] = 0;
                    iVar11 = FUN_00018370(iVar4 + 0x28,&local_48);
                    if (iVar11 == 0) {
                      iVar11 = *(int *)(iVar4 + 0x7c);
                      uVar26 = iVar11 - 1;
                      local_88[uVar26] = 1;
                      if (uVar26 != 0) {
                        local_88[0] = *(uint *)(iVar4 + 0x84);
                        puVar17 = (uint *)(iVar4 + 0x88);
                        puVar19 = local_88;
                        while (puVar21 = puVar19, (uint *)(iVar4 + 0x80 + iVar11 * 4) != puVar17) {
                          puVar27 = puVar17 + 1;
                          uVar13 = *puVar17;
                          puVar21[1] = uVar13;
                          puVar16 = local_88;
                          while( true ) {
                            *puVar16 = uVar13 * *puVar16;
                            puVar17 = puVar27;
                            puVar19 = puVar21 + 1;
                            if (puVar21 == puVar16) break;
                            uVar13 = puVar21[1];
                            puVar16 = puVar16 + 1;
                          }
                        }
                      }
                      local_d4 = *(uint *)(iVar4 + 0x78);
                      puVar17 = (&local_48)[uVar26];
                      puVar19 = (uint *)((int)puVar17 + (local_38[uVar26] - 1));
                      if (local_d4 != 0) {
                        uVar13 = 0;
                        do {
                          if (uVar26 == 0) {
LAB_00019778:
                            printf("%s",iVar4 + 0x30);
                            if (*(int *)(iVar4 + 0x7c) != 1) {
                              uVar26 = 0;
                              puVar20 = (undefined4 *)(iVar4 + 0x80);
                              do {
                                uVar25 = *puVar20;
                                uVar8 = __aeabi_uidiv(uVar13,local_88[uVar26]);
                                __aeabi_uidivmod(uVar8,uVar25);
                                printf("[%u]");
                                uVar26 = uVar26 + 1;
                                puVar20 = puVar20 + 1;
                              } while (uVar26 < *(int *)(iVar4 + 0x7c) - 1U);
                            }
                            printf(": ");
                            iVar11 = *(int *)(iVar4 + 0x2c);
                            if (iVar11 == 0x101) {
                              if (puVar17 <= puVar19) {
                                puVar24 = (ushort *)(uVar12 + ((int)puVar17 + uVar13) * 2);
                                puVar21 = puVar17;
                                do {
                                  printf("%6d",(uint)*puVar24);
                                  if (puVar21 < puVar19) {
                                    printf(", ");
                                  }
                                  puVar21 = (uint *)((int)puVar21 + 1);
                                  puVar24 = puVar24 + 1;
                                } while (puVar21 <= puVar19);
                              }
LAB_0001992c:
                              putchar(10);
                            }
                            else {
                              if (iVar11 == 0x102) {
                                if (puVar17 <= puVar19) {
                                  puVar20 = (undefined4 *)(uVar12 + ((int)puVar17 + uVar13) * 4);
                                  puVar21 = puVar17;
                                  do {
                                    while (printf("%6d",*puVar20), puVar19 <= puVar21) {
                                      puVar21 = (uint *)((int)puVar21 + 1);
                                      puVar20 = puVar20 + 1;
                                      if (puVar19 < puVar21) goto LAB_0001992c;
                                    }
                                    printf(", ");
                                    puVar21 = (uint *)((int)puVar21 + 1);
                                    puVar20 = puVar20 + 1;
                                  } while (puVar21 <= puVar19);
                                }
                                goto LAB_0001992c;
                              }
                              puVar21 = puVar17;
                              if (iVar11 == 0x100) {
                                for (; puVar21 <= puVar19; puVar21 = (uint *)((int)puVar21 + 1)) {
                                  printf("%4d",(uint)*(byte *)((int)puVar21 + uVar13 + uVar12));
                                  if (puVar21 < puVar19) {
                                    printf(", ");
                                  }
                                }
                                goto LAB_0001992c;
                              }
                            }
                            local_d4 = *(uint *)(iVar4 + 0x78);
                            uVar26 = *(int *)(iVar4 + 0x7c) - 1;
                          }
                          else {
                            uVar8 = __aeabi_uidiv(uVar13,local_88[0]);
                            __aeabi_uidivmod(uVar8,*(undefined4 *)(iVar4 + 0x80));
                            if ((local_48 <= extraout_r1) &&
                               (extraout_r1 < (uint *)((int)local_48 + local_38[0]))) {
                              puVar21 = local_88;
                              uVar23 = 0;
                              puVar16 = local_44;
                              local_f0 = (undefined4 *)(iVar4 + 0x84);
                              do {
                                puVar21 = puVar21 + 1;
                                uVar23 = uVar23 + 1;
                                if (uVar26 <= uVar23) goto LAB_00019778;
                                uVar25 = *local_f0;
                                uVar8 = __aeabi_uidiv(uVar13,*puVar21);
                                __aeabi_uidivmod(uVar8,uVar25);
                                uVar9 = *puVar16;
                              } while ((uVar9 <= extraout_r1_00) &&
                                      (puVar27 = puVar16 + 4, puVar16 = puVar16 + 1,
                                      local_f0 = local_f0 + 1, extraout_r1_00 < uVar9 + *puVar27));
                            }
                          }
                          uVar13 = uVar13 + *(int *)(iVar4 + uVar26 * 4 + 0x80);
                        } while (uVar13 < local_d4);
                      }
                    }
                  }
                }
                iVar11 = *(int *)(p_Var6 + 0x14);
                uVar18 = uVar18 + 1;
              } while (uVar18 < (uint)((*(int *)(p_Var6 + 0x18) - iVar11 >> 2) * -0x33333333));
            }
          }
        }
        else if (iVar4 != iVar3) {
          uVar18 = 0;
          do {
            local_48 = *(uint **)(uVar18 * 0x14 + iVar4);
            FUN_00013938(param_1,0xc008561b,&local_48,"VIDIOC_G_CTRL");
            iVar4 = iVar11;
            iVar3 = DAT_00063570;
            if (DAT_00063570 == 0) {
LAB_00019bc0:
              local_94 = &local_48;
              iVar4 = FUN_0001c938(DAT_00019c5c,iVar4,uVar8,&local_94,auStack_a8);
            }
            else {
              do {
                if (*(uint **)(iVar3 + 0x10) < local_48) {
                  iVar7 = *(int *)(iVar3 + 0xc);
                }
                else {
                  iVar7 = *(int *)(iVar3 + 8);
                  iVar4 = iVar3;
                }
                iVar3 = iVar7;
              } while (iVar7 != 0);
              if ((iVar4 == iVar11) || (local_48 < *(uint **)(iVar4 + 0x10))) goto LAB_00019bc0;
            }
            printf("%s: %d\n",*(undefined4 *)(iVar4 + 0x14),local_44[0]);
            iVar4 = *(int *)(p_Var6 + 0x14);
            uVar18 = uVar18 + 1;
          } while (uVar18 < (uint)((*(int *)(p_Var6 + 0x18) - iVar4 >> 2) * -0x33333333));
        }
        p_Var6 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var6);
      } while (p_Var6 != (_Rb_tree_node_base *)&local_5c);
    }
    FUN_0001ba9c(auStack_60,local_58);
  }
  if ((DAT_000633d2 != '\0') &&
     (iVar11 = FUN_00013938(param_1,0x80045643,&DAT_000635bc,"VIDIOC_G_PRIORITY"), iVar11 == 0)) {
    printf("Priority: %d\n",DAT_000635bc);
  }
  if ((DAT_000633a8 != '\0') &&
     (iVar11 = FUN_00013938(param_1,0x5646,0,"VIDIOC_LOG_STATUS"), iVar11 == 0)) {
    __haystack = &DAT_000635c0;
    puts("\nStatus Log:\n");
    iVar11 = klogctl(3,&DAT_000635c0,0x9fff);
    if (-1 < iVar11) {
      (&DAT_000635c0)[iVar11] = 0;
      while (pcVar10 = strstr(__haystack,"START STATUS"), pcVar10 != (char *)0x0) {
        __haystack = pcVar10 + 1;
      }
      pcVar10 = __haystack;
      if (&DAT_000635c0 < __haystack) {
        cVar1 = *__haystack;
        while ((pcVar10 = __haystack, cVar1 != '<' &&
               (__haystack = __haystack + -1, pcVar10 = __haystack, __haystack != &DAT_000635c0))) {
          cVar1 = *__haystack;
        }
      }
      while (__haystack = strstr(__haystack,"<6>"), cVar1 = DAT_0003ed82, __haystack != (char *)0x0)
      {
        *(undefined2 *)__haystack = DAT_0003ed80;
        __haystack[2] = cVar1;
      }
      printf("%s",pcVar10);
    }
  }
  return;
}



/* ===== FUN_00019c64 @ 00019c64 size=6632 ===== */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00019c64(int param_1,uint ***********param_2)

{
  uint **********ppppppppppuVar1;
  uint *puVar2;
  ulong uVar3;
  DIR *__dirp;
  dirent *pdVar4;
  int iVar5;
  _List_node_base *p_Var6;
  ssize_t sVar7;
  char *pcVar8;
  _Rb_tree_node_base *p_Var9;
  undefined4 *puVar10;
  uint **********ppppppppppuVar11;
  uint uVar12;
  undefined4 uVar13;
  uint ***********pppppppppppuVar14;
  uint ***********pppppppppppuVar15;
  char *pcVar16;
  undefined4 *puVar17;
  int iVar18;
  uint uVar19;
  char *pcVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  uint ***********pppppppppppuVar23;
  uint **********ppppppppppuVar24;
  size_t sVar25;
  uint ************ppppppppppppuVar26;
  char unaff_r10;
  void *pvVar27;
  char *pcVar28;
  uint uVar29;
  bool bVar30;
  undefined1 *local_19c;
  undefined1 auStack_184 [4];
  undefined1 auStack_180 [4];
  undefined1 auStack_17c [4];
  undefined1 auStack_178 [4];
  undefined1 auStack_174 [4];
  undefined1 auStack_170 [4];
  undefined1 auStack_16c [4];
  undefined1 auStack_168 [4];
  undefined1 auStack_164 [4];
  undefined1 auStack_160 [4];
  uint ************local_15c;
  uint ************local_158;
  uint *************local_154;
  uint *************local_150;
  uint *************local_14c;
  char *local_148;
  char *local_144;
  char *local_140;
  char *local_13c;
  undefined1 auStack_138 [4];
  undefined4 local_134;
  undefined4 *local_130;
  undefined4 *local_12c;
  undefined4 *local_128;
  undefined4 local_124;
  uint **********ppppppppppuStack_120;
  undefined4 local_11c;
  undefined4 *local_118;
  _Rb_tree_node_base *local_114;
  _Rb_tree_node_base *local_110;
  undefined4 local_10c;
  uint ************local_108;
  char *local_104;
  undefined1 local_100 [16];
  uint ***********local_f0;
  int local_ec;
  uint **********appppppppppuStack_e8 [4];
  char *local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  uint ***********local_c0;
  char *local_bc;
  uint **********local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint ***********local_a8;
  char *local_a4;
  uint **********local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint *local_90;
  uint **********ppppppppppuStack_8c;
  uint local_88;
  ulong local_84;
  uint ******local_80;
  uint **********ppppppppppuStack_7c;
  undefined4 local_78;
  uint **********ppppppppppuStack_74;
  char acStack_60 [60];
  
  if (param_1 != 0x72) {
    if (0x72 < param_1) {
      if (param_1 != 0xcc) {
        if (param_1 != 0xd3) {
          return;
        }
        DAT_000635bc = strtoul((char *)param_2,(char **)0x0,0);
        return;
      }
      local_144 = (char *)0x0;
      local_140 = (char *)0x0;
      local_13c = (char *)0x0;
      local_134 = 0;
      local_130 = (undefined4 *)0x0;
      local_124 = 0;
      local_11c = 0;
      local_118 = (undefined4 *)0x0;
      local_10c = 0;
      local_12c = &local_134;
      local_114 = (_Rb_tree_node_base *)&local_11c;
      local_128 = local_12c;
      local_110 = local_114;
      __dirp = opendir("/dev");
      if (__dirp == (DIR *)0x0) {
        perror("Couldn\'t open the directory");
        FUN_0001b96c(&ppppppppppuStack_120,local_118);
        FUN_0001b96c(auStack_138,local_130);
        pcVar20 = local_140;
        pcVar16 = local_140;
        if (local_144 != local_140) {
          pcVar28 = local_144 + 8;
          pcVar8 = local_144;
          do {
            if (*(char **)(pcVar28 + -8) != pcVar28) {
              operator_delete(*(char **)(pcVar28 + -8));
            }
            pcVar8 = pcVar8 + 0x18;
            pcVar28 = pcVar28 + 0x18;
            pcVar16 = local_144;
          } while (pcVar20 != pcVar8);
        }
      }
      else {
LAB_0001a06c:
        pdVar4 = readdir(__dirp);
        if (pdVar4 != (dirent *)0x0) {
          pcVar16 = pdVar4->d_name;
          puVar22 = (undefined4 *)&UNK_0003de68;
          sVar25 = 5;
          pcVar20 = "video";
          while ((iVar5 = memcmp(pcVar16,pcVar20,sVar25), iVar5 != 0 ||
                 (9 < (byte)pcVar16[sVar25] - 0x30))) {
            puVar22 = puVar22 + 1;
            pcVar20 = (char *)*puVar22;
            if (pcVar20 == (char *)0x0) goto LAB_0001a06c;
            sVar25 = strlen(pcVar20);
          }
          pppppppppppuVar23 = &ppppppppppuStack_120;
          local_a8 = &local_a0;
          std::__cxx11::string::_M_construct<char_const*>
                    (&local_a8,DAT_0001a6a4 + -5,DAT_0001a6a4,0);
          sVar25 = strlen(pcVar16);
          if (0x7fffffffU - (int)local_a4 < sVar25) goto LAB_0001b5c8;
          puVar22 = (undefined4 *)std::__cxx11::string::_M_append((char *)&local_a8,(uint)pcVar16);
          puVar2 = puVar22 + 2;
          local_90 = (uint *)*puVar22;
          if (local_90 == puVar2) {
            local_80 = (uint ******)puVar22[4];
            ppppppppppuStack_7c = (uint **********)puVar22[5];
            local_88 = *puVar2;
            local_84 = puVar22[3];
            local_90 = &local_88;
          }
          else {
            local_88 = puVar22[2];
          }
          ppppppppppuStack_8c = (uint **********)puVar22[1];
          *(undefined1 *)(puVar22 + 2) = 0;
          *puVar22 = puVar2;
          puVar22[1] = 0;
          if (local_140 == local_13c) {
            FUN_0001bc18(&local_144,local_140,&local_90);
            if (local_90 != &local_88) {
              operator_delete(local_90);
            }
          }
          else {
            *(char **)local_140 = local_140 + 8;
            if (local_90 == &local_88) {
              *(uint ***********)(local_140 + 0x14) = ppppppppppuStack_7c;
              *(uint *)(local_140 + 8) = local_88;
              *(ulong *)(local_140 + 0xc) = local_84;
              *(uint *******)(local_140 + 0x10) = local_80;
            }
            else {
              *(uint **)local_140 = local_90;
              *(uint *)(local_140 + 8) = local_88;
            }
            *(uint ***********)(local_140 + 4) = ppppppppppuStack_8c;
            local_140 = local_140 + 0x18;
          }
          if (local_a8 != &local_a0) {
            operator_delete(local_a8);
          }
          goto LAB_0001a06c;
        }
        pppppppppppuVar23 = &ppppppppppuStack_120;
        closedir(__dirp);
        pcVar20 = local_144;
LAB_0001a344:
        if (local_140 != pcVar20) {
LAB_0001a350:
          local_bc = (char *)0x0;
          local_b8 = (uint **********)((uint)local_b8 & 0xffffff00);
          local_c0 = &local_b8;
          sVar7 = readlink(*(char **)pcVar20,(char *)&local_90,0x40);
          if (-1 < sVar7) {
            *(undefined1 *)((int)&local_90 + sVar7) = 0;
            if ((char)local_90 != '/') {
              local_a8 = &local_a0;
              std::__cxx11::string::_M_construct<char_const*>
                        (&local_a8,DAT_0001a6a4 + -5,DAT_0001a6a4,0);
              ppppppppppuVar1 = local_b8;
              pppppppppppuVar14 = local_c0;
              if (local_a8 == &local_a0) {
                if (local_a4 != (char *)0x0) {
                  if (local_a4 == (char *)0x1) {
                    *(char *)local_c0 = (char)local_a0;
                  }
                  else {
                    memcpy(local_c0,&local_a0,(size_t)local_a4);
                  }
                }
                *(char *)((int)local_c0 + (int)local_a4) = '\0';
              }
              else {
                if (local_c0 != &local_b8) {
                  bVar30 = local_c0 != (uint ***********)0x0;
                  local_c0 = local_a8;
                  local_b8 = local_a0;
                  if (bVar30) {
                    local_a8 = pppppppppppuVar14;
                    local_a0 = ppppppppppuVar1;
                    goto LAB_0001a400;
                  }
                }
                local_b8 = local_a0;
                local_c0 = local_a8;
                local_a8 = &local_a0;
              }
LAB_0001a400:
              local_bc = local_a4;
              local_a4 = (char *)0x0;
              *(char *)local_a8 = '\0';
              if (local_a8 != &local_a0) {
                operator_delete(local_a8);
              }
            }
            sVar25 = strlen((char *)&local_90);
            if (sVar25 <= 0x7fffffffU - (int)local_bc) {
              std::__cxx11::string::_M_append((char *)&local_c0,(uint)&local_90);
              pcVar8 = (char *)FUN_0001bec0(local_144,local_140,&local_c0,0);
              pcVar16 = local_bc;
              pppppppppppuVar14 = local_c0;
              puVar22 = local_130;
              if (local_140 == pcVar8) goto LAB_0001af00;
              if (local_130 == (undefined4 *)0x0) {
                puVar10 = &local_134;
LAB_0001af0c:
                local_15c = &local_c0;
                iVar5 = FUN_0001d1d0(auStack_138,puVar10,DAT_0001a6a8,&local_15c,auStack_184);
                puVar22 = local_130;
                pppppppppppuVar14 = local_c0;
                pcVar16 = local_bc;
                if (*(int *)(iVar5 + 0x2c) == 0) {
                  if (local_130 != (undefined4 *)0x0) goto LAB_0001a528;
                  puVar10 = &local_134;
                  goto LAB_0001b0ac;
                }
                if (local_130 == (undefined4 *)0x0) {
                  puVar10 = &local_134;
LAB_0001b07c:
                  local_108 = &local_c0;
                  puVar10 = (undefined4 *)
                            FUN_0001d1d0(auStack_138,puVar10,DAT_0001a6a8,&local_108,auStack_17c);
                }
                else {
LAB_0001af64:
                  puVar10 = &local_134;
                  do {
                    pcVar28 = (char *)puVar22[5];
                    pcVar8 = pcVar28;
                    if (pcVar16 <= pcVar28) {
                      pcVar8 = pcVar16;
                    }
                    if ((pcVar8 == (char *)0x0) ||
                       (iVar5 = memcmp((void *)puVar22[4],pppppppppppuVar14,(size_t)pcVar8),
                       iVar5 == 0)) {
                      iVar5 = (int)pcVar28 - (int)pcVar16;
                    }
                    if (iVar5 < 0) {
                      puVar17 = (undefined4 *)puVar22[3];
                    }
                    else {
                      puVar17 = (undefined4 *)puVar22[2];
                      puVar10 = puVar22;
                    }
                    puVar22 = puVar17;
                  } while (puVar17 != (undefined4 *)0x0);
                  pppppppppppuVar23 = pppppppppppuVar14;
                  if (puVar10 == &local_134) goto LAB_0001b07c;
                  pcVar28 = (char *)puVar10[5];
                  pcVar8 = pcVar16;
                  if (pcVar28 <= pcVar16) {
                    pcVar8 = pcVar28;
                  }
                  if ((pcVar8 == (char *)0x0) ||
                     (iVar5 = memcmp(pppppppppppuVar14,(void *)puVar10[4],(size_t)pcVar8),
                     iVar5 == 0)) {
                    iVar5 = (int)pcVar16 - (int)pcVar28;
                  }
                  if (iVar5 < 0) goto LAB_0001b07c;
                }
                std::operator+((char *)&local_a8,(string *)0x40f78);
                std::__cxx11::string::_M_append((char *)(puVar10 + 10),(uint)local_a8);
                if (local_a8 != &local_a0) {
                  operator_delete(local_a8);
                }
              }
              else {
                puVar10 = &local_134;
                puVar17 = local_130;
                do {
                  pcVar28 = (char *)puVar17[5];
                  pcVar8 = pcVar28;
                  if (pcVar16 <= pcVar28) {
                    pcVar8 = pcVar16;
                  }
                  if ((pcVar8 == (char *)0x0) ||
                     (iVar5 = memcmp((void *)puVar17[4],pppppppppppuVar14,(size_t)pcVar8),
                     iVar5 == 0)) {
                    iVar5 = (int)pcVar28 - (int)pcVar16;
                  }
                  if (iVar5 < 0) {
                    puVar21 = (undefined4 *)puVar17[3];
                  }
                  else {
                    puVar21 = (undefined4 *)puVar17[2];
                    puVar10 = puVar17;
                  }
                  puVar17 = puVar21;
                } while (puVar21 != (undefined4 *)0x0);
                pppppppppppuVar23 = pppppppppppuVar14;
                if (puVar10 == &local_134) goto LAB_0001af0c;
                pcVar28 = (char *)puVar10[5];
                pcVar8 = pcVar16;
                if (pcVar28 <= pcVar16) {
                  pcVar8 = pcVar28;
                }
                if ((pcVar8 == (char *)0x0) ||
                   (iVar5 = memcmp(pppppppppppuVar14,(void *)puVar10[4],(size_t)pcVar8), iVar5 == 0)
                   ) {
                  iVar5 = (int)pcVar16 - (int)pcVar28;
                }
                if (iVar5 < 0) goto LAB_0001af0c;
                if (puVar10[0xb] != 0) goto LAB_0001af64;
LAB_0001a528:
                puVar10 = &local_134;
                do {
                  pcVar28 = (char *)puVar22[5];
                  pcVar8 = pcVar28;
                  if (pcVar16 <= pcVar28) {
                    pcVar8 = pcVar16;
                  }
                  if ((pcVar8 == (char *)0x0) ||
                     (iVar5 = memcmp((void *)puVar22[4],pppppppppppuVar14,(size_t)pcVar8),
                     iVar5 == 0)) {
                    iVar5 = (int)pcVar28 - (int)pcVar16;
                  }
                  if (iVar5 < 0) {
                    puVar17 = (undefined4 *)puVar22[3];
                  }
                  else {
                    puVar17 = (undefined4 *)puVar22[2];
                    puVar10 = puVar22;
                  }
                  puVar22 = puVar17;
                } while (puVar17 != (undefined4 *)0x0);
                pppppppppppuVar23 = pppppppppppuVar14;
                if (puVar10 == &local_134) {
LAB_0001b0ac:
                  local_158 = &local_c0;
                  puVar10 = (undefined4 *)
                            FUN_0001d1d0(auStack_138,puVar10,DAT_0001a6a8,&local_158,auStack_180);
                }
                else {
                  pcVar28 = (char *)puVar10[5];
                  pcVar8 = pcVar16;
                  if (pcVar28 <= pcVar16) {
                    pcVar8 = pcVar28;
                  }
                  if ((pcVar8 == (char *)0x0) ||
                     (iVar5 = memcmp(pppppppppppuVar14,(void *)puVar10[4],(size_t)pcVar8),
                     iVar5 == 0)) {
                    iVar5 = (int)pcVar16 - (int)pcVar28;
                  }
                  if (iVar5 < 0) goto LAB_0001b0ac;
                }
                std::__cxx11::string::_M_assign((string *)(puVar10 + 10));
              }
              if ((pcVar20 + 0x18 != local_140) &&
                 (iVar5 = (int)local_140 - (int)(pcVar20 + 0x18),
                 iVar18 = (iVar5 >> 3) * -0x55555555, 0 < iVar5)) {
                pcVar16 = pcVar20 + 0x20;
                pppppppppppuVar23 = (uint ***********)0x0;
                do {
                  pcVar28 = *(char **)(pcVar16 + -8);
                  pcVar8 = *(char **)(pcVar16 + -0x20);
                  if (pcVar16 == pcVar28) {
                    sVar25 = *(size_t *)(pcVar16 + -4);
                    iVar5 = 0;
                    if (sVar25 != 0) {
                      if (sVar25 == 1) {
                        *pcVar8 = *pcVar16;
                        iVar5 = *(int *)(pcVar16 + -4);
                        pcVar8 = *(char **)(pcVar16 + -0x20);
                      }
                      else {
                        memcpy(pcVar8,pcVar16,sVar25);
                        iVar5 = *(int *)(pcVar16 + -4);
                        pcVar8 = *(char **)(pcVar16 + -0x20);
                      }
                    }
                    *(int *)(pcVar28 + -0x1c) = iVar5;
                    pcVar8[iVar5] = '\0';
                    pcVar8 = *(char **)(pcVar28 + -8);
                  }
                  else {
                    if (pcVar8 == pcVar16 + -0x18) {
                      *(char **)(pcVar16 + -0x20) = pcVar28;
                      *(undefined4 *)(pcVar16 + -0x1c) = *(undefined4 *)(pcVar16 + -4);
                      *(undefined4 *)(pcVar16 + -0x18) = *(undefined4 *)pcVar16;
                    }
                    else {
                      *(char **)(pcVar16 + -0x20) = pcVar28;
                      *(undefined4 *)(pcVar16 + -0x1c) = *(undefined4 *)(pcVar16 + -4);
                      uVar13 = *(undefined4 *)(pcVar16 + -0x18);
                      *(undefined4 *)(pcVar16 + -0x18) = *(undefined4 *)pcVar16;
                      if (pcVar8 != (char *)0x0) {
                        *(char **)(pcVar16 + -8) = pcVar8;
                        *(undefined4 *)pcVar16 = uVar13;
                        goto LAB_0001a62c;
                      }
                    }
                    *(char **)(pcVar16 + -8) = pcVar16;
                    pcVar8 = pcVar16;
                  }
LAB_0001a62c:
                  iVar18 = iVar18 + -1;
                  pcVar16[-0xffffffff00000004] = '\0';
                  pcVar16[-0xffffffff00000003] = '\0';
                  pcVar16[-0xffffffff00000002] = '\0';
                  pcVar16[-0xffffffff00000001] = '\0';
                  *pcVar8 = '\0';
                  pcVar16 = pcVar16 + 0x18;
                } while (iVar18 != 0);
              }
              pcVar8 = local_140 + -0x18;
              pcVar16 = local_140 + -0x18;
              pcVar28 = local_140 + -0x10;
              local_140 = pcVar8;
              if (*(char **)pcVar16 != pcVar28) {
                operator_delete(*(char **)pcVar16);
              }
              goto LAB_0001a6d0;
            }
            std::__throw_length_error("basic_string::append");
LAB_0001b5c8:
            std::__throw_length_error("basic_string::append");
            goto LAB_0001b5d4;
          }
LAB_0001af00:
          pcVar20 = pcVar20 + 0x18;
LAB_0001a6d0:
          if (local_c0 != &local_b8) goto code_r0x0001a6dc;
          goto LAB_0001a344;
        }
LAB_0001a6ec:
        pcVar16 = local_144;
        if (pcVar20 != local_144) {
          iVar5 = (int)pcVar20 - (int)local_144;
          FUN_0001de60(local_144,pcVar20,(0x1f - LZCOUNT((iVar5 >> 3) * -0x55555555)) * 2,
                       FUN_00016a50);
          if (iVar5 < 0x181) {
            FUN_0001d590(pcVar16,pcVar20,FUN_00016a50);
          }
          else {
            pcVar8 = pcVar16 + 0x180;
            FUN_0001d590(pcVar16,pcVar8,FUN_00016a50);
            for (; pcVar20 != pcVar8; pcVar8 = pcVar8 + 0x18) {
              FUN_0001d374(pcVar8,FUN_00016a50);
            }
          }
          if (local_144 != local_140) {
            pppppppppppuVar23 = &ppppppppppuStack_120;
            pcVar20 = local_144;
            do {
              iVar5 = open(*(char **)pcVar20,2);
              local_108 = (uint ************)local_100;
              local_100[0] = 0;
              local_104 = (char *)0x0;
              if (-1 < iVar5) {
                iVar18 = ioctl(iVar5,0x80685600,&local_90);
                close(iVar5);
                if (iVar18 == 0) {
                  strlen(acStack_60);
                  std::__cxx11::string::_M_replace((uint)&local_108,0,local_104,(uint)acStack_60);
                  pcVar16 = local_104;
                  ppppppppppppuVar26 = local_108;
                  puVar22 = local_118;
                  if (local_118 == (undefined4 *)0x0) {
                    puVar10 = &local_11c;
LAB_0001b214:
                    local_154 = &local_108;
                    iVar5 = FUN_0001d1d0(pppppppppppuVar23,puVar10,DAT_0001a6a8,&local_154,
                                         auStack_178);
                    if (*(int *)(iVar5 + 0x2c) == 0) {
                      puVar22 = local_118;
                      pcVar16 = local_104;
                      ppppppppppppuVar26 = local_108;
                      if (local_118 == (undefined4 *)0x0) {
                        puVar10 = &local_11c;
LAB_0001b348:
                        local_150 = &local_108;
                        puVar10 = (undefined4 *)
                                  FUN_0001d1d0(pppppppppppuVar23,puVar10,DAT_0001a6a8,&local_150,
                                               auStack_174);
                      }
                      else {
LAB_0001a8a0:
                        puVar10 = &local_11c;
                        do {
                          pcVar28 = (char *)puVar22[5];
                          pcVar8 = pcVar28;
                          if (pcVar16 <= pcVar28) {
                            pcVar8 = pcVar16;
                          }
                          if ((pcVar8 == (char *)0x0) ||
                             (iVar5 = memcmp((void *)puVar22[4],ppppppppppppuVar26,(size_t)pcVar8),
                             iVar5 == 0)) {
                            iVar5 = (int)pcVar28 - (int)pcVar16;
                          }
                          if (iVar5 < 0) {
                            puVar17 = (undefined4 *)puVar22[3];
                          }
                          else {
                            puVar17 = (undefined4 *)puVar22[2];
                            puVar10 = puVar22;
                          }
                          puVar22 = puVar17;
                        } while (puVar17 != (undefined4 *)0x0);
                        if (puVar10 == &local_11c) goto LAB_0001b348;
                        pcVar28 = (char *)puVar10[5];
                        pcVar8 = pcVar16;
                        if (pcVar28 <= pcVar16) {
                          pcVar8 = pcVar28;
                        }
                        if ((pcVar8 == (char *)0x0) ||
                           (iVar5 = memcmp(ppppppppppppuVar26,(void *)puVar10[4],(size_t)pcVar8),
                           iVar5 == 0)) {
                          iVar5 = (int)pcVar16 - (int)pcVar28;
                        }
                        if (iVar5 < 0) goto LAB_0001b348;
                      }
                      local_f0 = appppppppppuStack_e8;
                      sVar25 = strlen((char *)&local_80);
                      std::__cxx11::string::_M_construct<char_const*>
                                (&local_f0,&local_80,(int)&local_80 + sVar25,0);
                      if (0x7fffffffU - local_ec < 2) goto LAB_0001b5e0;
                      puVar22 = (undefined4 *)
                                std::__cxx11::string::_M_append((char *)&local_f0,0x3ee48);
                      pcVar16 = (char *)(puVar22 + 2);
                      local_d8 = (char *)*puVar22;
                      if (local_d8 == pcVar16) {
                        local_d0 = *(undefined4 *)pcVar16;
                        uStack_cc = puVar22[3];
                        uStack_c8 = puVar22[4];
                        uStack_c4 = puVar22[5];
                        local_d8 = (char *)&local_d0;
                      }
                      else {
                        local_d0 = puVar22[2];
                      }
                      local_d4 = puVar22[1];
                      *puVar22 = pcVar16;
                      puVar22[1] = 0;
                      *(undefined1 *)(puVar22 + 2) = 0;
                      puVar22 = (undefined4 *)
                                std::__cxx11::string::_M_append((char *)&local_d8,(uint)local_108);
                      pppppppppppuVar14 = (uint ***********)(puVar22 + 2);
                      local_c0 = (uint ***********)*puVar22;
                      if (local_c0 == pppppppppppuVar14) {
                        uStack_b4 = puVar22[3];
                        uStack_b0 = puVar22[4];
                        uStack_ac = puVar22[5];
                        local_b8 = *pppppppppppuVar14;
                        local_c0 = &local_b8;
                      }
                      else {
                        local_b8 = (uint **********)puVar22[2];
                      }
                      local_bc = (char *)puVar22[1];
                      *puVar22 = pppppppppppuVar14;
                      puVar22[1] = 0;
                      *(undefined1 *)(puVar22 + 2) = 0;
                      if (0x7fffffffU - (int)local_bc < 3) goto LAB_0001b5d4;
                      puVar22 = (undefined4 *)
                                std::__cxx11::string::_M_append((char *)&local_c0,0x3cbec);
                      pppppppppppuVar14 = (uint ***********)(puVar22 + 2);
                      local_a8 = (uint ***********)*puVar22;
                      if (local_a8 == pppppppppppuVar14) {
                        local_a0 = *pppppppppppuVar14;
                        uStack_9c = puVar22[3];
                        uStack_98 = puVar22[4];
                        uStack_94 = puVar22[5];
                        local_a8 = &local_a0;
                      }
                      else {
                        local_a0 = (uint **********)puVar22[2];
                      }
                      local_a4 = (char *)puVar22[1];
                      *puVar22 = pppppppppppuVar14;
                      puVar22[1] = 0;
                      *(undefined1 *)(puVar22 + 2) = 0;
                      std::__cxx11::string::_M_append((char *)(puVar10 + 10),(uint)local_a8);
                      if (local_a8 != &local_a0) {
                        operator_delete(local_a8);
                      }
                      if (local_c0 != &local_b8) {
                        operator_delete(local_c0);
                      }
                      if (local_d8 != (char *)&local_d0) {
                        operator_delete(local_d8);
                      }
                      if (local_f0 != appppppppppuStack_e8) {
                        operator_delete(local_f0);
                      }
                    }
                    puVar22 = local_118;
                    pcVar16 = local_104;
                    ppppppppppppuVar26 = local_108;
                    if (local_118 != (undefined4 *)0x0) goto LAB_0001ab18;
                    puVar10 = &local_11c;
LAB_0001b2bc:
                    local_14c = &local_108;
                    puVar10 = (undefined4 *)
                              FUN_0001d1d0(pppppppppppuVar23,puVar10,DAT_0001a6a8,&local_14c,
                                           auStack_170);
                  }
                  else {
                    puVar10 = &local_11c;
                    puVar17 = local_118;
                    do {
                      pcVar28 = (char *)puVar17[5];
                      pcVar8 = pcVar28;
                      if (pcVar16 <= pcVar28) {
                        pcVar8 = pcVar16;
                      }
                      if ((pcVar8 == (char *)0x0) ||
                         (iVar5 = memcmp((void *)puVar17[4],ppppppppppppuVar26,(size_t)pcVar8),
                         iVar5 == 0)) {
                        iVar5 = (int)pcVar28 - (int)pcVar16;
                      }
                      if (iVar5 < 0) {
                        puVar21 = (undefined4 *)puVar17[3];
                      }
                      else {
                        puVar21 = (undefined4 *)puVar17[2];
                        puVar10 = puVar17;
                      }
                      puVar17 = puVar21;
                    } while (puVar21 != (undefined4 *)0x0);
                    if (puVar10 == &local_11c) goto LAB_0001b214;
                    pcVar28 = (char *)puVar10[5];
                    pcVar8 = pcVar16;
                    if (pcVar28 <= pcVar16) {
                      pcVar8 = pcVar28;
                    }
                    if ((pcVar8 == (char *)0x0) ||
                       (iVar5 = memcmp(ppppppppppppuVar26,(void *)puVar10[4],(size_t)pcVar8),
                       iVar5 == 0)) {
                      iVar5 = (int)pcVar16 - (int)pcVar28;
                    }
                    if (iVar5 < 0) goto LAB_0001b214;
                    if (puVar10[0xb] == 0) goto LAB_0001a8a0;
LAB_0001ab18:
                    puVar10 = &local_11c;
                    do {
                      pcVar28 = (char *)puVar22[5];
                      pcVar8 = pcVar28;
                      if (pcVar16 <= pcVar28) {
                        pcVar8 = pcVar16;
                      }
                      if ((pcVar8 == (char *)0x0) ||
                         (iVar5 = memcmp((void *)puVar22[4],ppppppppppppuVar26,(size_t)pcVar8),
                         iVar5 == 0)) {
                        iVar5 = (int)pcVar28 - (int)pcVar16;
                      }
                      if (iVar5 < 0) {
                        puVar17 = (undefined4 *)puVar22[3];
                      }
                      else {
                        puVar17 = (undefined4 *)puVar22[2];
                        puVar10 = puVar22;
                      }
                      puVar22 = puVar17;
                    } while (puVar17 != (undefined4 *)0x0);
                    if (puVar10 == &local_11c) goto LAB_0001b2bc;
                    pcVar28 = (char *)puVar10[5];
                    pcVar8 = pcVar16;
                    if (pcVar28 <= pcVar16) {
                      pcVar8 = pcVar28;
                    }
                    if ((pcVar8 == (char *)0x0) ||
                       (iVar5 = memcmp(ppppppppppppuVar26,(void *)puVar10[4],(size_t)pcVar8),
                       iVar5 == 0)) {
                      iVar5 = (int)pcVar16 - (int)pcVar28;
                    }
                    if (iVar5 < 0) goto LAB_0001b2bc;
                  }
                  std::operator+((char *)&local_a8,(string *)&DAT_0003ee4c);
                  std::__cxx11::string::_M_append((char *)(puVar10 + 10),(uint)local_a8);
                  if (local_a8 != &local_a0) {
                    operator_delete(local_a8);
                  }
                  if (local_130 == (undefined4 *)0x0) {
                    puVar22 = &local_134;
LAB_0001b290:
                    local_148 = pcVar20;
                    puVar22 = (undefined4 *)
                              FUN_0001d1d0(auStack_138,puVar22,DAT_0001a6a8,&local_148,auStack_16c);
                  }
                  else {
                    uVar29 = *(uint *)(pcVar20 + 4);
                    puVar22 = &local_134;
                    pvVar27 = *(void **)pcVar20;
                    puVar10 = local_130;
                    do {
                      uVar19 = puVar10[5];
                      uVar12 = uVar19;
                      if (uVar29 <= uVar19) {
                        uVar12 = uVar29;
                      }
                      if ((uVar12 == 0) ||
                         (iVar5 = memcmp((void *)puVar10[4],pvVar27,uVar12), iVar5 == 0)) {
                        iVar5 = uVar19 - uVar29;
                      }
                      if (iVar5 < 0) {
                        puVar17 = (undefined4 *)puVar10[3];
                      }
                      else {
                        puVar17 = (undefined4 *)puVar10[2];
                        puVar22 = puVar10;
                      }
                      puVar10 = puVar17;
                    } while (puVar17 != (undefined4 *)0x0);
                    if (puVar22 == &local_134) goto LAB_0001b290;
                    uVar19 = puVar22[5];
                    uVar12 = uVar29;
                    if (uVar19 <= uVar29) {
                      uVar12 = uVar19;
                    }
                    if ((uVar12 == 0) ||
                       (iVar5 = memcmp(pvVar27,(void *)puVar22[4],uVar12), iVar5 == 0)) {
                      iVar5 = uVar29 - uVar19;
                    }
                    if (iVar5 < 0) goto LAB_0001b290;
                  }
                  pcVar16 = local_104;
                  ppppppppppppuVar26 = local_108;
                  if (puVar22[0xb] != 0) {
                    if (local_118 == (undefined4 *)0x0) {
                      puVar22 = &local_11c;
LAB_0001b318:
                      local_f0 = (uint ***********)&local_108;
                      puVar22 = (undefined4 *)
                                FUN_0001d1d0(pppppppppppuVar23,puVar22,DAT_0001a6a8,&local_f0,
                                             auStack_168);
                    }
                    else {
                      puVar22 = &local_11c;
                      puVar10 = local_118;
                      do {
                        pcVar28 = (char *)puVar10[5];
                        pcVar8 = pcVar28;
                        if (pcVar16 <= pcVar28) {
                          pcVar8 = pcVar16;
                        }
                        if ((pcVar8 == (char *)0x0) ||
                           (iVar5 = memcmp((void *)puVar10[4],ppppppppppppuVar26,(size_t)pcVar8),
                           iVar5 == 0)) {
                          iVar5 = (int)pcVar28 - (int)pcVar16;
                        }
                        if (iVar5 < 0) {
                          puVar17 = (undefined4 *)puVar10[3];
                        }
                        else {
                          puVar17 = (undefined4 *)puVar10[2];
                          puVar22 = puVar10;
                        }
                        puVar10 = puVar17;
                      } while (puVar17 != (undefined4 *)0x0);
                      if (puVar22 == &local_11c) goto LAB_0001b318;
                      pcVar28 = (char *)puVar22[5];
                      pcVar8 = pcVar16;
                      if (pcVar28 <= pcVar16) {
                        pcVar8 = pcVar28;
                      }
                      if ((pcVar8 == (char *)0x0) ||
                         (iVar5 = memcmp(ppppppppppppuVar26,(void *)puVar22[4],(size_t)pcVar8),
                         iVar5 == 0)) {
                        iVar5 = (int)pcVar16 - (int)pcVar28;
                      }
                      if (iVar5 < 0) goto LAB_0001b318;
                    }
                    if (local_130 == (undefined4 *)0x0) {
                      puVar10 = &local_134;
LAB_0001b2ec:
                      local_d8 = pcVar20;
                      FUN_0001d1d0(auStack_138,puVar10,DAT_0001a6a8,&local_d8,auStack_164);
                    }
                    else {
                      uVar29 = *(uint *)(pcVar20 + 4);
                      puVar10 = &local_134;
                      pvVar27 = *(void **)pcVar20;
                      puVar17 = local_130;
                      do {
                        uVar19 = puVar17[5];
                        uVar12 = uVar19;
                        if (uVar29 <= uVar19) {
                          uVar12 = uVar29;
                        }
                        if ((uVar12 == 0) ||
                           (iVar5 = memcmp((void *)puVar17[4],pvVar27,uVar12), iVar5 == 0)) {
                          iVar5 = uVar19 - uVar29;
                        }
                        if (iVar5 < 0) {
                          puVar21 = (undefined4 *)puVar17[3];
                        }
                        else {
                          puVar21 = (undefined4 *)puVar17[2];
                          puVar10 = puVar17;
                        }
                        puVar17 = puVar21;
                      } while (puVar21 != (undefined4 *)0x0);
                      if (puVar10 == &local_134) goto LAB_0001b2ec;
                      uVar19 = puVar10[5];
                      uVar12 = uVar29;
                      if (uVar19 <= uVar29) {
                        uVar12 = uVar19;
                      }
                      if ((uVar12 == 0) ||
                         (iVar5 = memcmp(pvVar27,(void *)puVar10[4],uVar12), iVar5 == 0)) {
                        iVar5 = uVar29 - uVar19;
                      }
                      if (iVar5 < 0) goto LAB_0001b2ec;
                    }
                    std::operator+((char *)&local_a8,(string *)&DAT_0003ee50);
                    std::__cxx11::string::_M_append((char *)(puVar22 + 10),(uint)local_a8);
                    if (local_a8 != &local_a0) {
                      operator_delete(local_a8);
                    }
                  }
                  pcVar16 = local_104;
                  ppppppppppppuVar26 = local_108;
                  if (local_118 == (undefined4 *)0x0) {
                    puVar22 = &local_11c;
LAB_0001b260:
                    local_c0 = (uint ***********)&local_108;
                    puVar22 = (undefined4 *)
                              FUN_0001d1d0(pppppppppppuVar23,puVar22,DAT_0001a6a8,&local_c0,
                                           auStack_160);
                  }
                  else {
                    puVar22 = &local_11c;
                    puVar10 = local_118;
                    do {
                      pcVar28 = (char *)puVar10[5];
                      pcVar8 = pcVar28;
                      if (pcVar16 <= pcVar28) {
                        pcVar8 = pcVar16;
                      }
                      if ((pcVar8 == (char *)0x0) ||
                         (iVar5 = memcmp((void *)puVar10[4],ppppppppppppuVar26,(size_t)pcVar8),
                         iVar5 == 0)) {
                        iVar5 = (int)pcVar28 - (int)pcVar16;
                      }
                      if (iVar5 < 0) {
                        puVar17 = (undefined4 *)puVar10[3];
                      }
                      else {
                        puVar17 = (undefined4 *)puVar10[2];
                        puVar22 = puVar10;
                      }
                      puVar10 = puVar17;
                    } while (puVar17 != (undefined4 *)0x0);
                    if (puVar22 == &local_11c) goto LAB_0001b260;
                    pcVar28 = (char *)puVar22[5];
                    pcVar8 = pcVar16;
                    if (pcVar28 <= pcVar16) {
                      pcVar8 = pcVar28;
                    }
                    if ((pcVar8 == (char *)0x0) ||
                       (iVar5 = memcmp(ppppppppppppuVar26,(void *)puVar22[4],(size_t)pcVar8),
                       iVar5 == 0)) {
                      iVar5 = (int)pcVar16 - (int)pcVar28;
                    }
                    if (iVar5 < 0) goto LAB_0001b260;
                  }
                  if (puVar22[0xb] == 0x7fffffff) goto LAB_0001b5ec;
                  std::__cxx11::string::_M_append((char *)(puVar22 + 10),0x3e19c);
                }
                if (local_108 != (uint ************)local_100) {
                  operator_delete(local_108);
                }
              }
              pcVar20 = pcVar20 + 0x18;
            } while (local_140 != pcVar20);
          }
        }
        p_Var9 = local_114;
        if (local_114 != (_Rb_tree_node_base *)&local_11c) {
          do {
            puts(*(char **)(p_Var9 + 0x28));
            p_Var9 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var9);
          } while (p_Var9 != (_Rb_tree_node_base *)&local_11c);
        }
        FUN_0001b96c(&ppppppppppuStack_120,local_118);
        FUN_0001b96c(auStack_138,local_130);
        pcVar20 = local_140;
        pcVar16 = local_140;
        if (local_144 != local_140) {
          pcVar28 = local_144 + 8;
          pcVar8 = local_144;
          do {
            if (*(char **)(pcVar28 + -8) != pcVar28) {
              operator_delete(*(char **)(pcVar28 + -8));
            }
            pcVar8 = pcVar8 + 0x18;
            pcVar28 = pcVar28 + 0x18;
            pcVar16 = local_144;
          } while (pcVar20 != pcVar8);
        }
      }
      if (pcVar16 == (char *)0x0) {
        return;
      }
      operator_delete(pcVar16);
      return;
    }
    local_c0 = param_2;
    if (param_1 == 0x43) {
      if (*(char *)param_2 == '\0') {
        return;
      }
      while ((iVar5 = FUN_00016a7c(&local_c0,&local_d8), pcVar20 = local_d8, iVar5 == 0 &&
             (pcVar16 = strchr(local_d8,0x3d), pcVar16 == (char *)0x0))) {
        local_90 = &local_88;
        sVar25 = strlen(pcVar20);
        std::__cxx11::string::_M_construct<char_const*>(&local_90,pcVar20,pcVar20 + sVar25,0);
        p_Var6 = operator_new(0x20);
        *(_List_node_base **)(p_Var6 + 8) = p_Var6 + 0x10;
        if (local_90 == &local_88) {
          *(uint *)(p_Var6 + 0x10) = local_88;
          *(ulong *)(p_Var6 + 0x14) = local_84;
          *(uint *******)(p_Var6 + 0x18) = local_80;
          *(uint ***********)(p_Var6 + 0x1c) = ppppppppppuStack_7c;
        }
        else {
          *(uint **)(p_Var6 + 8) = local_90;
          *(uint *)(p_Var6 + 0x10) = local_88;
        }
        *(uint ***********)(p_Var6 + 0xc) = ppppppppppuStack_8c;
        ppppppppppuStack_8c = (uint **********)0x0;
        local_88 = local_88 & 0xffffff00;
        local_90 = &local_88;
        std::__detail::_List_node_base::_M_hook(p_Var6);
        DAT_00063588 = DAT_00063588 + 1;
        if (local_90 != &local_88) {
          operator_delete(local_90);
        }
        if (*(char *)local_c0 == '\0') {
          return;
        }
      }
    }
    else {
      if (param_1 != 99) {
        return;
      }
      if (*(char *)param_2 == '\0') {
        return;
      }
      while (iVar5 = FUN_00016a7c(&local_c0,&local_d8), pcVar20 = local_d8, iVar5 == 0) {
        pcVar16 = strchr(local_d8,0x3d);
        if (pcVar16 == (char *)0x0) {
          fprintf(stderr,"control \'%s\' without \'=\'\n",pcVar20);
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        local_90 = &local_88;
        std::__cxx11::string::_M_construct<char_const*>(&local_90,pcVar20,pcVar16,0);
        ppppppppppuVar1 = ppppppppppuStack_8c;
        puVar2 = local_90;
        pppppppppppuVar14 = (uint ***********)DAT_00063594;
        pppppppppppuVar23 = (uint ***********)DAT_0001a69c;
        if (DAT_00063594 == (uint *******)0x0) {
LAB_00019e28:
          pvVar27 = operator_new(0x40);
          *(void **)((int)pvVar27 + 0x10) = (void *)((int)pvVar27 + 0x18);
          if (local_90 == &local_88) {
            *(uint *)((int)pvVar27 + 0x18) = local_88;
            *(ulong *)((int)pvVar27 + 0x1c) = local_84;
            *(uint *******)((int)pvVar27 + 0x20) = local_80;
            *(uint ***********)((int)pvVar27 + 0x24) = ppppppppppuStack_7c;
          }
          else {
            *(uint **)((int)pvVar27 + 0x10) = local_90;
            *(uint *)((int)pvVar27 + 0x18) = local_88;
          }
          *(uint ***********)((int)pvVar27 + 0x14) = ppppppppppuStack_8c;
          uVar13 = DAT_0001a6a0;
          *(undefined4 *)((int)pvVar27 + 0x2c) = 0;
          *(undefined1 *)((int)pvVar27 + 0x30) = 0;
          *(int *)((int)pvVar27 + 0x28) = (int)pvVar27 + 0x30;
          ppppppppppuStack_8c = (uint **********)0x0;
          local_88 = local_88 & 0xffffff00;
          local_90 = &local_88;
          FUN_0001c318(&local_a8,uVar13,pppppppppppuVar23,(int)pvVar27 + 0x10);
          pppppppppppuVar23 = local_a8;
          if (local_a4 == (char *)0x0) {
            if ((void *)((int)pvVar27 + 0x18) != *(void **)((int)pvVar27 + 0x10)) {
              operator_delete(*(void **)((int)pvVar27 + 0x10));
            }
            operator_delete(pvVar27);
          }
          else {
            pppppppppppuVar23 =
                 (uint ***********)FUN_0001c0bc(DAT_0001a6a0,local_a8,local_a4,pvVar27);
          }
        }
        else {
          do {
            ppppppppppuVar24 = pppppppppppuVar14[5];
            ppppppppppuVar11 = ppppppppppuVar24;
            if (ppppppppppuVar1 <= ppppppppppuVar24) {
              ppppppppppuVar11 = ppppppppppuVar1;
            }
            if ((ppppppppppuVar11 == (uint **********)0x0) ||
               (iVar5 = memcmp(pppppppppppuVar14[4],puVar2,(size_t)ppppppppppuVar11), iVar5 == 0)) {
              iVar5 = (int)ppppppppppuVar24 - (int)ppppppppppuVar1;
            }
            if (iVar5 < 0) {
              pppppppppppuVar15 = (uint ***********)pppppppppppuVar14[3];
            }
            else {
              pppppppppppuVar15 = (uint ***********)pppppppppppuVar14[2];
              pppppppppppuVar23 = pppppppppppuVar14;
            }
            pppppppppppuVar14 = pppppppppppuVar15;
          } while (pppppppppppuVar15 != (uint ***********)0x0);
          if (pppppppppppuVar23 == (uint ***********)DAT_0001a69c) goto LAB_00019e28;
          ppppppppppuVar24 = pppppppppppuVar23[5];
          ppppppppppuVar11 = ppppppppppuVar1;
          if (ppppppppppuVar24 <= ppppppppppuVar1) {
            ppppppppppuVar11 = ppppppppppuVar24;
          }
          if ((ppppppppppuVar11 == (uint **********)0x0) ||
             (iVar5 = memcmp(puVar2,pppppppppppuVar23[4],(size_t)ppppppppppuVar11), iVar5 == 0)) {
            iVar5 = (int)ppppppppppuVar1 - (int)ppppppppppuVar24;
          }
          if (iVar5 < 0) goto LAB_00019e28;
        }
        strlen(pcVar16 + 1);
        std::__cxx11::string::_M_replace
                  ((uint)(pppppppppppuVar23 + 10),0,(char *)pppppppppppuVar23[0xb],
                   (uint)(pcVar16 + 1));
        if (local_90 != &local_88) {
          operator_delete(local_90);
        }
        if (*(char *)local_c0 == '\0') {
          return;
        }
      }
    }
    goto LAB_0001b118;
  }
  ppppppppppuStack_8c = *(uint ***********)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_88 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_84 = *(ulong *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar29 = 0;
  local_90 = (uint *)0x0;
  if (*(char *)param_2 != '\0') {
    unaff_r10 = '\0';
  }
  local_a4 = (char *)0x0;
  local_80 = (uint ******)0x0;
  local_a0 = (uint **********)((uint)local_a0 & 0xffffff00);
  local_78 = 0;
  local_a8 = &local_a0;
  ppppppppppuStack_7c = ppppppppppuStack_8c;
  ppppppppppuStack_74 = ppppppppppuStack_8c;
  if (*(char *)param_2 != '\0') {
    do {
      pcVar20 = strchr((char *)param_2,0x2c);
      if (pcVar20 != (char *)0x0) {
        *pcVar20 = unaff_r10;
      }
      if (*(char *)param_2 == '\0') {
        fwrite("empty string\n",1,0xd,stderr);
        goto LAB_0001b108;
      }
      if (uVar29 == 0) {
        strlen((char *)param_2);
        std::__cxx11::string::_M_replace((uint)&local_a8,0,local_a4,(uint)param_2);
      }
      else {
        if (8 < uVar29) {
          fwrite("too many dimensions\n",1,0x14,stderr);
          goto LAB_0001b108;
        }
        if ((uVar29 & 1) == 0) {
          uVar3 = strtoul((char *)param_2,(char **)0x0,0);
          (&local_84)[uVar29 >> 1] = uVar3;
          if (uVar3 == 0) {
            fwrite("<size> cannot be 0\n",1,0x13,stderr);
            goto LAB_0001b108;
          }
        }
        else {
          puVar2 = (uint *)strtoul((char *)param_2,(char **)0x0,0);
          (&local_90)[uVar29 >> 1] = puVar2;
        }
      }
      pcVar16 = local_a4;
      pppppppppppuVar23 = local_a8;
      uVar29 = uVar29 + 1;
    } while ((pcVar20 != (char *)0x0) &&
            (param_2 = (uint ***********)(pcVar20 + 1), pcVar20[1] != '\0'));
    if (uVar29 != 1) {
      if ((uVar29 & 1) != 0) {
        if (DAT_000635ac == (undefined4 *)0x0) {
          puVar22 = &DAT_000635a8;
        }
        else {
          puVar22 = &DAT_000635a8;
          puVar10 = DAT_000635ac;
          do {
            pcVar8 = (char *)puVar10[5];
            pcVar20 = pcVar8;
            if (pcVar16 <= pcVar8) {
              pcVar20 = pcVar16;
            }
            if ((pcVar20 == (char *)0x0) ||
               (iVar5 = memcmp((void *)puVar10[4],pppppppppppuVar23,(size_t)pcVar20), iVar5 == 0)) {
              iVar5 = (int)pcVar8 - (int)pcVar16;
            }
            if (iVar5 < 0) {
              puVar17 = (undefined4 *)puVar10[3];
            }
            else {
              puVar17 = (undefined4 *)puVar10[2];
              puVar22 = puVar10;
            }
            puVar10 = puVar17;
          } while (puVar17 != (undefined4 *)0x0);
          if (puVar22 != &DAT_000635a8) {
            pcVar8 = (char *)puVar22[5];
            pcVar20 = pcVar16;
            if (pcVar8 <= pcVar16) {
              pcVar20 = pcVar8;
            }
            if ((pcVar20 == (char *)0x0) ||
               (iVar5 = memcmp(pppppppppppuVar23,(void *)puVar22[4],(size_t)pcVar20), iVar5 == 0)) {
              iVar5 = (int)pcVar16 - (int)pcVar8;
            }
            if (-1 < iVar5) goto LAB_0001b430;
          }
        }
        local_c0 = (uint ***********)&local_a8;
        puVar22 = (undefined4 *)FUN_0001ceb4(DAT_0001a6ac,puVar22,DAT_0001a6a8,&local_c0,&local_d8);
        pppppppppppuVar23 = local_a8;
LAB_0001b430:
        puVar22[10] = local_90;
        puVar22[0xb] = ppppppppppuStack_8c;
        puVar22[0xc] = local_88;
        puVar22[0xd] = local_84;
        puVar22[0xe] = local_80;
        puVar22[0xf] = ppppppppppuStack_7c;
        puVar22[0x10] = local_78;
        puVar22[0x11] = ppppppppppuStack_74;
        if (pppppppppppuVar23 != &local_a0) {
          operator_delete(pppppppppppuVar23);
        }
        return;
      }
      goto LAB_0001b51c;
    }
    fwrite("no <offset>, <size> tuples given\n",1,0x21,stderr);
  }
  else {
LAB_0001b51c:
    fwrite("<offset> without <size>\n",1,0x18,stderr);
  }
LAB_0001b108:
  if (local_a8 != &local_a0) {
    operator_delete(local_a8);
  }
LAB_0001b118:
  puts(
      "\nGeneral/Common options:\n  --all              display all information available\n  -C, --get-ctrl=<ctrl>[,<ctrl>...]\n                     get the value of the controls [VIDIOC_G_EXT_CTRLS]\n  -c, --set-ctrl=<ctrl>=<val>[,<ctrl>=<val>...]\n                     set the value of the controls [VIDIOC_S_EXT_CTRLS]\n  -D, --info         show driver info [VIDIOC_QUERYCAP]\n  -d, --device=<dev> use device <dev> instead of /dev/video0\n                     if <dev> starts with a digit, then /dev/video<dev> is used\n  -e, --out-device=<dev> use device <dev> for output streams instead of the\n                     default device as set with --device\n                     if <dev> starts with a digit, then /dev/video<dev> is used\n  -h, --help         display this help message\n  --help-all         all options\n  --help-io          input/output options\n  --help-misc        miscellaneous options\n  --help-overlay     overlay format options\n  --help-sdr         SDR format options\n  --help-selection   crop/selection options\n  --help-stds        standards and other video timings options\n  --help-streaming   streaming options\n  --help-tuner       tuner/modulator options\n  --help-vbi         VBI format options\n  --help-vidcap      video capture format options\n  --help-vidout      vidout output format options\n  --help-edid        edid handling options\n  -k, --concise      be more concise if possible.\n  -l, --list-ctrls   display all controls and their values [VIDIOC_QUERYCTRL]\n  -L, --list-ctrls-menus\n\t\t     display all controls and their menus [VIDIOC_QUERYMENU]\n  -r, --subset=<ctrl>[,<offset>,<size>]+\n                     the subset of the N-dimensional array to get/set for control <ctrl>,\n                     for every dimension an (<offset>, <size>) tuple is given.\n  -w, --wrapper      use the libv4l2 wrapper library.\n  --list-devices     list all v4l devices\n  --log-status       log the board status in the kernel log [VIDIOC_LOG_STATUS]\n  --get-priority     query the current access priority [VIDIOC_G_PRIORITY]\n  --set-priority=<prio>\n      ..." /* TRUNCATED STRING LITERAL */
      );
                    /* WARNING: Subroutine does not return */
  exit(1);
code_r0x0001a6dc:
  operator_delete(local_c0);
  if (local_140 == pcVar20) goto LAB_0001a6ec;
  goto LAB_0001a350;
LAB_0001b5d4:
  std::__throw_length_error("basic_string::append");
LAB_0001b5e0:
  std::__throw_length_error("basic_string::append");
LAB_0001b5ec:
  local_19c = auStack_138;
  std::__throw_length_error("basic_string::append");
  if (local_108 != (uint ************)local_100) {
    operator_delete(local_108);
  }
  FUN_0001b96c(pppppppppppuVar23,local_118);
  FUN_0001b96c(local_19c,local_130);
  pcVar20 = local_140;
  for (pcVar16 = local_144; pcVar20 != pcVar16; pcVar16 = pcVar16 + 0x18) {
    if (*(char **)pcVar16 != pcVar16 + 8) {
      operator_delete(*(char **)pcVar16);
    }
  }
  if (local_144 != (char *)0x0) {
    operator_delete(local_144);
  }
                    /* WARNING: Subroutine does not return */
  __cxa_end_cleanup();
}



/* ===== FUN_0001b75c @ 0001b75c size=80 ===== */

undefined4 * FUN_0001b75c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (void *)*param_1;
  while (param_1 != puVar1) {
    puVar2 = (undefined4 *)*puVar1;
    if ((void *)puVar1[2] != puVar1 + 4) {
      operator_delete((void *)puVar1[2]);
    }
    operator_delete(puVar1);
    puVar1 = puVar2;
  }
  return param_1;
}



/* ===== std::operator+ @ 0001b7ac size=160 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__cxx11::string std::TEMPNAMEPLACEHOLDERVALUE(char const*, std::__cxx11::string const&) */

char * std::operator+(char *param_1,string *param_2)

{
  size_t sVar1;
  uint *in_r2;
  
  sVar1 = strlen((char *)param_2);
  *(char **)param_1 = param_1 + 8;
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  std::__cxx11::string::reserve((uint)param_1);
  if (sVar1 <= 0x7fffffffU - *(int *)(param_1 + 4)) {
    std::__cxx11::string::_M_append(param_1,(uint)param_2);
    std::__cxx11::string::_M_append(param_1,*in_r2);
    return param_1;
  }
  std::__throw_length_error("basic_string::append");
  if (param_1 + 8 != *(char **)param_1) {
    operator_delete(*(char **)param_1);
  }
                    /* WARNING: Subroutine does not return */
  __cxa_end_cleanup();
}



/* ===== FUN_0001b84c @ 0001b84c size=72 ===== */

void FUN_0001b84c(undefined4 param_1,void *param_2)

{
  void *pvVar1;
  
  if (param_2 != (void *)0x0) {
    do {
      FUN_0001b84c(param_1,*(undefined4 *)((int)param_2 + 0xc));
      pvVar1 = *(void **)((int)param_2 + 8);
      if (*(void **)((int)param_2 + 0x10) != (void *)((int)param_2 + 0x18)) {
        operator_delete(*(void **)((int)param_2 + 0x10));
      }
      operator_delete(param_2);
      param_2 = pvVar1;
    } while (pvVar1 != (void *)0x0);
    return;
  }
  return;
}



/* ===== FUN_0001b894 @ 0001b894 size=24 ===== */

int FUN_0001b894(int param_1)

{
  FUN_0001b84c(param_1,*(undefined4 *)(param_1 + 8));
  return param_1;
}



/* ===== FUN_0001b8ac @ 0001b8ac size=72 ===== */

void FUN_0001b8ac(undefined4 param_1,void *param_2)

{
  void *pvVar1;
  
  if (param_2 != (void *)0x0) {
    do {
      FUN_0001b8ac(param_1,*(undefined4 *)((int)param_2 + 0xc));
      pvVar1 = *(void **)((int)param_2 + 8);
      if (*(void **)((int)param_2 + 0x14) != (void *)((int)param_2 + 0x1c)) {
        operator_delete(*(void **)((int)param_2 + 0x14));
      }
      operator_delete(param_2);
      param_2 = pvVar1;
    } while (pvVar1 != (void *)0x0);
    return;
  }
  return;
}



/* ===== FUN_0001b8f4 @ 0001b8f4 size=24 ===== */

int FUN_0001b8f4(int param_1)

{
  FUN_0001b8ac(param_1,*(undefined4 *)(param_1 + 8));
  return param_1;
}



/* ===== FUN_0001b90c @ 0001b90c size=72 ===== */

void FUN_0001b90c(undefined4 param_1,void *param_2)

{
  void *pvVar1;
  
  if (param_2 != (void *)0x0) {
    do {
      FUN_0001b90c(param_1,*(undefined4 *)((int)param_2 + 0xc));
      pvVar1 = *(void **)((int)param_2 + 8);
      if (*(void **)((int)param_2 + 0x10) != (void *)((int)param_2 + 0x18)) {
        operator_delete(*(void **)((int)param_2 + 0x10));
      }
      operator_delete(param_2);
      param_2 = pvVar1;
    } while (pvVar1 != (void *)0x0);
    return;
  }
  return;
}



/* ===== FUN_0001b954 @ 0001b954 size=24 ===== */

int FUN_0001b954(int param_1)

{
  FUN_0001b90c(param_1,*(undefined4 *)(param_1 + 8));
  return param_1;
}



/* ===== FUN_0001b96c @ 0001b96c size=92 ===== */

void FUN_0001b96c(undefined4 param_1,void *param_2)

{
  void *pvVar1;
  
  if (param_2 != (void *)0x0) {
    do {
      FUN_0001b96c(param_1,*(undefined4 *)((int)param_2 + 0xc));
      pvVar1 = *(void **)((int)param_2 + 8);
      if (*(void **)((int)param_2 + 0x28) != (void *)((int)param_2 + 0x30)) {
        operator_delete(*(void **)((int)param_2 + 0x28));
      }
      if (*(void **)((int)param_2 + 0x10) != (void *)((int)param_2 + 0x18)) {
        operator_delete(*(void **)((int)param_2 + 0x10));
      }
      operator_delete(param_2);
      param_2 = pvVar1;
    } while (pvVar1 != (void *)0x0);
    return;
  }
  return;
}



/* ===== FUN_0001b9c8 @ 0001b9c8 size=24 ===== */

int FUN_0001b9c8(int param_1)

{
  FUN_0001b96c(param_1,*(undefined4 *)(param_1 + 8));
  return param_1;
}



/* ===== FUN_0001b9e0 @ 0001b9e0 size=188 ===== */

int FUN_0001b9e0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  void *__s2;
  int iVar7;
  
  iVar7 = param_1 + 4;
  if (*(int *)(param_1 + 8) != 0) {
    uVar5 = param_2[1];
    __s2 = (void *)*param_2;
    iVar2 = *(int *)(param_1 + 8);
    iVar6 = iVar7;
    do {
      uVar4 = *(uint *)(iVar2 + 0x14);
      uVar3 = uVar4;
      if (uVar5 <= uVar4) {
        uVar3 = uVar5;
      }
      if ((uVar3 == 0) || (iVar1 = memcmp(*(void **)(iVar2 + 0x10),__s2,uVar3), iVar1 == 0)) {
        iVar1 = uVar4 - uVar5;
      }
      if (iVar1 < 0) {
        iVar1 = *(int *)(iVar2 + 0xc);
      }
      else {
        iVar1 = *(int *)(iVar2 + 8);
        iVar6 = iVar2;
      }
      iVar2 = iVar1;
    } while (iVar1 != 0);
    if (iVar7 != iVar6) {
      uVar4 = *(uint *)(iVar6 + 0x14);
      uVar3 = uVar5;
      if (uVar4 <= uVar5) {
        uVar3 = uVar4;
      }
      if ((uVar3 == 0) || (iVar2 = memcmp(__s2,*(void **)(iVar6 + 0x10),uVar3), iVar2 == 0)) {
        iVar2 = uVar5 - uVar4;
      }
      if (iVar2 < 0) {
        iVar6 = iVar7;
      }
    }
    return iVar6;
  }
  return iVar7;
}



/* ===== FUN_0001ba9c @ 0001ba9c size=68 ===== */

void FUN_0001ba9c(undefined4 param_1,void *param_2)

{
  void *pvVar1;
  
  if (param_2 != (void *)0x0) {
    do {
      FUN_0001ba9c(param_1,*(undefined4 *)((int)param_2 + 0xc));
      pvVar1 = *(void **)((int)param_2 + 8);
      if (*(void **)((int)param_2 + 0x14) != (void *)0x0) {
        operator_delete(*(void **)((int)param_2 + 0x14));
      }
      operator_delete(param_2);
      param_2 = pvVar1;
    } while (pvVar1 != (void *)0x0);
    return;
  }
  return;
}



/* ===== FUN_0001bae0 @ 0001bae0 size=312 ===== */

void FUN_0001bae0(undefined4 *param_1,void *param_2,undefined4 *param_3)

{
  int iVar1;
  void *__dest;
  undefined4 uVar2;
  undefined4 uVar3;
  size_t __n;
  uint uVar4;
  uint uVar5;
  void *__dest_00;
  void *__src;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_30;
  
  __src = (void *)*param_1;
  pvVar6 = (void *)param_1[1];
  __n = (int)param_2 - (int)__src;
  iVar1 = (int)pvVar6 - (int)__src >> 2;
  uVar4 = iVar1 * -0x33333333;
  if (uVar4 == 0) {
    uVar5 = 1;
LAB_0001bc0c:
    uVar5 = uVar5 * 0x14;
LAB_0001bb2c:
    __dest = operator_new(uVar5);
    local_30 = (int)__dest + uVar5;
  }
  else {
    uVar5 = iVar1 * -0x66666666;
    if ((uVar5 <= uVar4 && uVar4 != 0) || (0xccccccc < uVar5)) {
      uVar5 = 0xfffffff0;
      goto LAB_0001bb2c;
    }
    if (uVar5 != 0) goto LAB_0001bc0c;
    __dest = (void *)0x0;
    local_30 = 0;
  }
  uVar8 = param_3[1];
  uVar7 = param_3[2];
  *(undefined4 *)((int)__dest + __n) = *param_3;
  __dest_00 = (void *)((int)__dest + __n + 0x14);
  uVar2 = param_3[3];
  uVar3 = param_3[4];
  *(undefined4 *)((int)__dest + __n + 4) = uVar8;
  *(undefined4 *)((int)__dest + __n + 8) = uVar7;
  *(undefined4 *)((int)__dest + __n + 0xc) = uVar2;
  *(undefined4 *)((int)__dest + __n + 0x10) = uVar3;
  if (param_2 == __src) {
    if (param_2 != pvVar6) goto LAB_0001bba0;
LAB_0001bbb0:
    if (__src == (void *)0x0) goto LAB_0001bbb8;
  }
  else {
    memmove(__dest,__src,__n);
    if (param_2 != pvVar6) {
LAB_0001bba0:
      memcpy(__dest_00,param_2,(int)pvVar6 - (int)param_2);
      goto LAB_0001bbb0;
    }
  }
  operator_delete(__src);
LAB_0001bbb8:
  *param_1 = __dest;
  param_1[1] = (int)__dest_00 + ((int)pvVar6 - (int)param_2);
  param_1[2] = local_30;
  return;
}



/* ===== FUN_0001bc18 @ 0001bc18 size=680 ===== */

void FUN_0001bc18(undefined4 *param_1,void *param_2,int *param_3)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  void *pvVar9;
  void *pvVar10;
  void *pvVar11;
  uint uVar12;
  void *pvVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  void *pvVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  int iVar20;
  bool bVar21;
  int local_2c;
  
  pvVar10 = (void *)*param_1;
  pvVar11 = (void *)param_1[1];
  iVar17 = (int)param_2 - (int)pvVar10;
  iVar2 = (int)pvVar11 - (int)pvVar10 >> 3;
  uVar6 = iVar2 * -0x55555555;
  if (uVar6 == 0) {
    uVar12 = 1;
LAB_0001be90:
    uVar12 = uVar12 * 0x18;
  }
  else {
    uVar12 = iVar2 * 0x55555556;
    if ((uVar6 < uVar12 || uVar6 == 0) && (uVar12 < 0xaaaaaab)) {
      if (uVar12 == 0) {
        pvVar13 = (void *)0x18;
        pvVar1 = (void *)0x0;
        local_2c = 0;
        goto LAB_0001bc7c;
      }
      goto LAB_0001be90;
    }
    uVar12 = 0xfffffff0;
  }
  pvVar1 = operator_new(uVar12);
  local_2c = (int)pvVar1 + uVar12;
  pvVar13 = (void *)((int)pvVar1 + 0x18);
LAB_0001bc7c:
  piVar7 = param_3 + 2;
  piVar3 = (int *)*param_3;
  *(int *)((int)pvVar1 + iVar17) = (int)pvVar1 + iVar17 + 8;
  if (piVar3 == piVar7) {
    iVar20 = param_3[3];
    iVar18 = param_3[4];
    *(int *)((int)pvVar1 + iVar17 + 8) = *piVar7;
    iVar2 = param_3[5];
    *(int *)((int)pvVar1 + iVar17 + 0xc) = iVar20;
    *(int *)((int)pvVar1 + iVar17 + 0x10) = iVar18;
    *(int *)((int)pvVar1 + iVar17 + 0x14) = iVar2;
  }
  else {
    iVar2 = param_3[2];
    *(int **)((int)pvVar1 + iVar17) = piVar3;
    *(int *)((int)pvVar1 + iVar17 + 8) = iVar2;
  }
  iVar2 = param_3[1];
  *param_3 = (int)piVar7;
  param_3[1] = 0;
  *(int *)((int)pvVar1 + iVar17 + 4) = iVar2;
  *(undefined1 *)(param_3 + 2) = 0;
  if (param_2 != pvVar10) {
    uVar6 = ((uint)((int)param_2 + (-0x18 - (int)pvVar10)) >> 3) * 0xaaaaaab & 0x1fffffff;
    puVar4 = (undefined4 *)((int)pvVar1 + 8);
    puVar8 = (undefined4 *)((int)pvVar10 + 8);
    do {
      puVar4[-2] = puVar4;
      if ((undefined4 *)puVar8[-2] == puVar8) {
        uVar15 = puVar8[1];
        uVar14 = puVar8[2];
        uVar19 = puVar8[3];
        *puVar4 = *puVar8;
        puVar4[1] = uVar15;
        puVar4[2] = uVar14;
        puVar4[3] = uVar19;
      }
      else {
        puVar4[-2] = (undefined4 *)puVar8[-2];
        *puVar4 = *puVar8;
      }
      puVar5 = puVar4 + 6;
      puVar4[-1] = puVar8[-1];
      puVar8[-2] = puVar8;
      puVar8[-1] = 0;
      *(undefined1 *)puVar8 = 0;
      puVar4 = puVar5;
      puVar8 = puVar8 + 6;
    } while (puVar5 != (undefined4 *)((int)pvVar1 + uVar6 * 0x18 + 0x20));
    pvVar13 = (void *)((uVar6 + 2) * 0x18 + (int)pvVar1);
  }
  if (param_2 != pvVar11) {
    uVar6 = ((uint)((int)pvVar11 + (-0x18 - (int)param_2)) >> 3) * 0xaaaaaab & 0x1fffffff;
    puVar4 = (undefined4 *)((int)pvVar13 + 8);
    puVar8 = (undefined4 *)((int)param_2 + 8);
    do {
      puVar5 = (undefined4 *)puVar8[-2];
      puVar4[-2] = puVar4;
      if (puVar5 == puVar8) {
        uVar19 = puVar8[1];
        uVar14 = puVar8[2];
        *puVar4 = *puVar8;
        uVar15 = puVar8[3];
        puVar4[1] = uVar19;
        puVar4[2] = uVar14;
        puVar4[3] = uVar15;
      }
      else {
        uVar14 = *puVar8;
        puVar4[-2] = puVar5;
        *puVar4 = uVar14;
      }
      uVar14 = puVar8[-1];
      puVar5 = puVar4 + 6;
      puVar8[-2] = puVar8;
      puVar8[-1] = 0;
      puVar4[-1] = uVar14;
      *(undefined1 *)puVar8 = 0;
      puVar4 = puVar5;
      puVar8 = puVar8 + 6;
    } while (puVar5 != (undefined4 *)((int)pvVar13 + uVar6 * 0x18 + 0x20));
    pvVar13 = (void *)((int)pvVar13 + uVar6 * 0x18 + 0x18);
  }
  if (pvVar10 != pvVar11) {
    pvVar9 = (void *)((int)pvVar10 + 8);
    pvVar16 = pvVar10;
    do {
      puVar4 = (undefined4 *)((int)pvVar9 + -8);
      pvVar16 = (void *)((int)pvVar16 + 0x18);
      bVar21 = pvVar9 != (void *)*puVar4;
      pvVar9 = (void *)((int)pvVar9 + 0x18);
      if (bVar21) {
        operator_delete((void *)*puVar4);
      }
    } while (pvVar16 != pvVar11);
  }
  if (pvVar10 != (void *)0x0) {
    operator_delete(pvVar10);
  }
  *param_1 = pvVar1;
  param_1[1] = pvVar13;
  param_1[2] = local_2c;
  return;
}



/* ===== FUN_0001bec0 @ 0001bec0 size=508 ===== */

undefined4 * FUN_0001bec0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  size_t sVar2;
  undefined4 *puVar3;
  
  iVar1 = ((int)param_2 - (int)param_1 >> 3) * -0x55555555;
  if (0 < iVar1 >> 2) {
    sVar2 = param_3[1];
    puVar3 = param_1 + (iVar1 >> 2) * 0x18;
    do {
      if (param_1[1] == sVar2) {
        if (sVar2 == 0) {
          return param_1;
        }
        iVar1 = memcmp((void *)*param_1,(void *)*param_3,sVar2);
        if (iVar1 == 0) {
          return param_1;
        }
      }
      if ((sVar2 == param_1[7]) &&
         ((sVar2 == 0 || (iVar1 = memcmp((void *)param_1[6],(void *)*param_3,sVar2), iVar1 == 0))))
      {
        return param_1 + 6;
      }
      if ((sVar2 == param_1[0xd]) &&
         ((sVar2 == 0 || (iVar1 = memcmp((void *)param_1[0xc],(void *)*param_3,sVar2), iVar1 == 0)))
         ) {
        return param_1 + 0xc;
      }
      if ((sVar2 == param_1[0x13]) &&
         ((sVar2 == 0 || (iVar1 = memcmp((void *)param_1[0x12],(void *)*param_3,sVar2), iVar1 == 0))
         )) {
        return param_1 + 0x12;
      }
      param_1 = param_1 + 0x18;
    } while (puVar3 != param_1);
    iVar1 = ((int)param_2 - (int)param_1 >> 3) * -0x55555555;
  }
  if (iVar1 == 2) {
    sVar2 = param_3[1];
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 != 1) {
        return param_2;
      }
      sVar2 = param_3[1];
      goto LAB_0001c02c;
    }
    sVar2 = param_3[1];
    if (param_1[1] == sVar2) {
      if (sVar2 == 0) {
        return param_1;
      }
      iVar1 = memcmp((void *)*param_1,(void *)*param_3,sVar2);
      if (iVar1 == 0) {
        return param_1;
      }
    }
    param_1 = param_1 + 6;
  }
  if (param_1[1] == sVar2) {
    if (sVar2 == 0) {
      return param_1;
    }
    iVar1 = memcmp((void *)*param_1,(void *)*param_3,sVar2);
    if (iVar1 == 0) {
      return param_1;
    }
  }
  param_1 = param_1 + 6;
LAB_0001c02c:
  if ((param_1[1] == sVar2) &&
     ((sVar2 == 0 || (iVar1 = memcmp((void *)*param_1,(void *)*param_3,sVar2), iVar1 == 0)))) {
    return param_1;
  }
  return param_2;
}



/* ===== FUN_0001c0bc @ 0001c0bc size=148 ===== */

_Rb_tree_node_base *
FUN_0001c0bc(int param_1,int param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

{
  bool bVar1;
  int iVar2;
  uint __n;
  uint uVar3;
  uint uVar4;
  
  if ((param_2 == 0) && (param_3 != (_Rb_tree_node_base *)(param_1 + 4))) {
    uVar3 = *(uint *)(param_3 + 0x14);
    uVar4 = *(uint *)(param_4 + 0x14);
    __n = uVar4;
    if (uVar3 <= uVar4) {
      __n = uVar3;
    }
    if ((__n == 0) ||
       (iVar2 = memcmp(*(void **)(param_4 + 0x10),*(void **)(param_3 + 0x10),__n), iVar2 == 0)) {
      iVar2 = uVar4 - uVar3;
    }
    bVar1 = SUB41((uint)iVar2 >> 0x1f,0);
  }
  else {
    bVar1 = true;
  }
  std::_Rb_tree_insert_and_rebalance(bVar1,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 4));
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return param_4;
}



/* ===== FUN_0001c1e4 @ 0001c1e4 size=308 ===== */

int * FUN_0001c1e4(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  uint uVar4;
  uint __n;
  uint uVar5;
  void *__s1;
  void *__s2;
  
  if (*(_Rb_tree_node_base **)(param_2 + 8) == (_Rb_tree_node_base *)0x0) {
    p_Var3 = (_Rb_tree_node_base *)(param_2 + 4);
  }
  else {
    uVar5 = param_3[1];
    __s1 = (void *)*param_3;
    p_Var3 = *(_Rb_tree_node_base **)(param_2 + 8);
    do {
      p_Var2 = p_Var3;
      uVar4 = *(uint *)(p_Var2 + 0x14);
      __s2 = *(void **)(p_Var2 + 0x10);
      __n = uVar5;
      if (uVar4 <= uVar5) {
        __n = uVar4;
      }
      if ((__n == 0) || (iVar1 = memcmp(__s1,__s2,__n), iVar1 == 0)) {
        iVar1 = uVar5 - uVar4;
      }
      if (iVar1 < 0) {
        p_Var3 = *(_Rb_tree_node_base **)(p_Var2 + 8);
      }
      else {
        p_Var3 = *(_Rb_tree_node_base **)(p_Var2 + 0xc);
      }
    } while (p_Var3 != (_Rb_tree_node_base *)0x0);
    p_Var3 = p_Var2;
    if (iVar1 >= 0) goto LAB_0001c27c;
  }
  if (*(_Rb_tree_node_base **)(param_2 + 0xc) == p_Var3) {
    param_1[1] = (int)p_Var3;
    *param_1 = 0;
    return param_1;
  }
  p_Var2 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var3);
  uVar5 = param_3[1];
  __s1 = (void *)*param_3;
  uVar4 = *(uint *)(p_Var2 + 0x14);
  __s2 = *(void **)(p_Var2 + 0x10);
  __n = uVar5;
  if (uVar4 <= uVar5) {
    __n = uVar4;
  }
LAB_0001c27c:
  if ((__n == 0) || (iVar1 = memcmp(__s2,__s1,__n), iVar1 == 0)) {
    iVar1 = uVar4 - uVar5;
  }
  if (iVar1 < 0) {
    param_1[1] = (int)p_Var3;
    *param_1 = 0;
  }
  else {
    *param_1 = (int)p_Var2;
    param_1[1] = 0;
  }
  return param_1;
}



/* ===== FUN_0001c318 @ 0001c318 size=544 ===== */

int * FUN_0001c318(int *param_1,int param_2,_Rb_tree_node_base *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *__s2;
  uint uVar4;
  uint uVar5;
  void *__s1;
  
  if (param_3 == (_Rb_tree_node_base *)(param_2 + 4)) {
    if (*(int *)(param_2 + 0x14) != 0) {
      iVar1 = *(int *)(param_2 + 0x10);
      uVar4 = param_4[1];
      uVar5 = *(uint *)(iVar1 + 0x14);
      uVar3 = uVar5;
      if (uVar4 <= uVar5) {
        uVar3 = uVar4;
      }
      if ((uVar3 == 0) ||
         (iVar2 = memcmp(*(void **)(iVar1 + 0x10),(void *)*param_4,uVar3), iVar2 == 0)) {
        iVar2 = uVar5 - uVar4;
      }
      if (iVar2 < 0) {
        param_1[1] = iVar1;
        *param_1 = 0;
        return param_1;
      }
    }
    goto LAB_0001c49c;
  }
  uVar4 = param_4[1];
  uVar5 = *(uint *)(param_3 + 0x14);
  __s1 = (void *)*param_4;
  __s2 = *(void **)(param_3 + 0x10);
  uVar3 = uVar4;
  if (uVar5 <= uVar4) {
    uVar3 = uVar5;
  }
  if (uVar3 == 0) {
    if ((int)(uVar4 - uVar5) < 0) goto LAB_0001c3d4;
LAB_0001c3a4:
    iVar1 = uVar5 - uVar4;
  }
  else {
    iVar1 = memcmp(__s1,__s2,uVar3);
    if (iVar1 == 0) {
      iVar1 = uVar4 - uVar5;
    }
    if (iVar1 < 0) {
LAB_0001c3d4:
      if (*(_Rb_tree_node_base **)(param_2 + 0xc) == param_3) {
LAB_0001c430:
        *param_1 = (int)param_3;
        param_1[1] = (int)param_3;
        return param_1;
      }
      iVar1 = std::_Rb_tree_decrement(param_3);
      uVar5 = *(uint *)(iVar1 + 0x14);
      uVar3 = uVar4;
      if (uVar5 <= uVar4) {
        uVar3 = uVar5;
      }
      if ((uVar3 == 0) || (iVar2 = memcmp(*(void **)(iVar1 + 0x10),__s1,uVar3), iVar2 == 0)) {
        iVar2 = uVar5 - uVar4;
      }
      if (iVar2 < 0) {
        if (*(int *)(iVar1 + 0xc) == 0) {
          *param_1 = 0;
          param_1[1] = iVar1;
          return param_1;
        }
        goto LAB_0001c430;
      }
      goto LAB_0001c49c;
    }
    iVar1 = memcmp(__s2,__s1,uVar3);
    if (iVar1 == 0) goto LAB_0001c3a4;
  }
  if (iVar1 < 0) {
    if (*(_Rb_tree_node_base **)(param_2 + 0x10) == param_3) {
      param_1[1] = (int)param_3;
      *param_1 = 0;
    }
    else {
      iVar1 = std::_Rb_tree_increment(param_3);
      uVar5 = *(uint *)(iVar1 + 0x14);
      uVar3 = uVar4;
      if (uVar5 <= uVar4) {
        uVar3 = uVar5;
      }
      if ((uVar3 == 0) || (iVar2 = memcmp(__s1,*(void **)(iVar1 + 0x10),uVar3), iVar2 == 0)) {
        iVar2 = uVar4 - uVar5;
      }
      if (-1 < iVar2) {
LAB_0001c49c:
        FUN_0001c1e4(param_1,param_2,param_4);
        return param_1;
      }
      if (*(int *)(param_3 + 0xc) == 0) {
        *param_1 = 0;
        param_1[1] = (int)param_3;
      }
      else {
        *param_1 = iVar1;
        param_1[1] = iVar1;
      }
    }
  }
  else {
    *param_1 = (int)param_3;
    param_1[1] = 0;
  }
  return param_1;
}



/* ===== FUN_0001c538 @ 0001c538 size=308 ===== */

int * FUN_0001c538(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  uint uVar4;
  uint __n;
  uint uVar5;
  void *__s1;
  void *__s2;
  
  if (*(_Rb_tree_node_base **)(param_2 + 8) == (_Rb_tree_node_base *)0x0) {
    p_Var3 = (_Rb_tree_node_base *)(param_2 + 4);
  }
  else {
    uVar5 = param_3[1];
    __s1 = (void *)*param_3;
    p_Var3 = *(_Rb_tree_node_base **)(param_2 + 8);
    do {
      p_Var2 = p_Var3;
      uVar4 = *(uint *)(p_Var2 + 0x14);
      __s2 = *(void **)(p_Var2 + 0x10);
      __n = uVar5;
      if (uVar4 <= uVar5) {
        __n = uVar4;
      }
      if ((__n == 0) || (iVar1 = memcmp(__s1,__s2,__n), iVar1 == 0)) {
        iVar1 = uVar5 - uVar4;
      }
      if (iVar1 < 0) {
        p_Var3 = *(_Rb_tree_node_base **)(p_Var2 + 8);
      }
      else {
        p_Var3 = *(_Rb_tree_node_base **)(p_Var2 + 0xc);
      }
    } while (p_Var3 != (_Rb_tree_node_base *)0x0);
    p_Var3 = p_Var2;
    if (iVar1 >= 0) goto LAB_0001c5d0;
  }
  if (*(_Rb_tree_node_base **)(param_2 + 0xc) == p_Var3) {
    param_1[1] = (int)p_Var3;
    *param_1 = 0;
    return param_1;
  }
  p_Var2 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var3);
  uVar5 = param_3[1];
  __s1 = (void *)*param_3;
  uVar4 = *(uint *)(p_Var2 + 0x14);
  __s2 = *(void **)(p_Var2 + 0x10);
  __n = uVar5;
  if (uVar4 <= uVar5) {
    __n = uVar4;
  }
LAB_0001c5d0:
  if ((__n == 0) || (iVar1 = memcmp(__s2,__s1,__n), iVar1 == 0)) {
    iVar1 = uVar4 - uVar5;
  }
  if (iVar1 < 0) {
    param_1[1] = (int)p_Var3;
    *param_1 = 0;
  }
  else {
    *param_1 = (int)p_Var2;
    param_1[1] = 0;
  }
  return param_1;
}



/* ===== FUN_0001c66c @ 0001c66c size=544 ===== */

int * FUN_0001c66c(int *param_1,int param_2,_Rb_tree_node_base *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *__s2;
  uint uVar4;
  uint uVar5;
  void *__s1;
  
  if (param_3 == (_Rb_tree_node_base *)(param_2 + 4)) {
    if (*(int *)(param_2 + 0x14) != 0) {
      iVar1 = *(int *)(param_2 + 0x10);
      uVar4 = param_4[1];
      uVar5 = *(uint *)(iVar1 + 0x14);
      uVar3 = uVar5;
      if (uVar4 <= uVar5) {
        uVar3 = uVar4;
      }
      if ((uVar3 == 0) ||
         (iVar2 = memcmp(*(void **)(iVar1 + 0x10),(void *)*param_4,uVar3), iVar2 == 0)) {
        iVar2 = uVar5 - uVar4;
      }
      if (iVar2 < 0) {
        param_1[1] = iVar1;
        *param_1 = 0;
        return param_1;
      }
    }
    goto LAB_0001c7f0;
  }
  uVar4 = param_4[1];
  uVar5 = *(uint *)(param_3 + 0x14);
  __s1 = (void *)*param_4;
  __s2 = *(void **)(param_3 + 0x10);
  uVar3 = uVar4;
  if (uVar5 <= uVar4) {
    uVar3 = uVar5;
  }
  if (uVar3 == 0) {
    if ((int)(uVar4 - uVar5) < 0) goto LAB_0001c728;
LAB_0001c6f8:
    iVar1 = uVar5 - uVar4;
  }
  else {
    iVar1 = memcmp(__s1,__s2,uVar3);
    if (iVar1 == 0) {
      iVar1 = uVar4 - uVar5;
    }
    if (iVar1 < 0) {
LAB_0001c728:
      if (*(_Rb_tree_node_base **)(param_2 + 0xc) == param_3) {
LAB_0001c784:
        *param_1 = (int)param_3;
        param_1[1] = (int)param_3;
        return param_1;
      }
      iVar1 = std::_Rb_tree_decrement(param_3);
      uVar5 = *(uint *)(iVar1 + 0x14);
      uVar3 = uVar4;
      if (uVar5 <= uVar4) {
        uVar3 = uVar5;
      }
      if ((uVar3 == 0) || (iVar2 = memcmp(*(void **)(iVar1 + 0x10),__s1,uVar3), iVar2 == 0)) {
        iVar2 = uVar5 - uVar4;
      }
      if (iVar2 < 0) {
        if (*(int *)(iVar1 + 0xc) == 0) {
          *param_1 = 0;
          param_1[1] = iVar1;
          return param_1;
        }
        goto LAB_0001c784;
      }
      goto LAB_0001c7f0;
    }
    iVar1 = memcmp(__s2,__s1,uVar3);
    if (iVar1 == 0) goto LAB_0001c6f8;
  }
  if (iVar1 < 0) {
    if (*(_Rb_tree_node_base **)(param_2 + 0x10) == param_3) {
      param_1[1] = (int)param_3;
      *param_1 = 0;
    }
    else {
      iVar1 = std::_Rb_tree_increment(param_3);
      uVar5 = *(uint *)(iVar1 + 0x14);
      uVar3 = uVar4;
      if (uVar5 <= uVar4) {
        uVar3 = uVar5;
      }
      if ((uVar3 == 0) || (iVar2 = memcmp(__s1,*(void **)(iVar1 + 0x10),uVar3), iVar2 == 0)) {
        iVar2 = uVar4 - uVar5;
      }
      if (-1 < iVar2) {
LAB_0001c7f0:
        FUN_0001c538(param_1,param_2,param_4);
        return param_1;
      }
      if (*(int *)(param_3 + 0xc) == 0) {
        *param_1 = 0;
        param_1[1] = (int)param_3;
      }
      else {
        *param_1 = iVar1;
        param_1[1] = iVar1;
      }
    }
  }
  else {
    *param_1 = (int)param_3;
    param_1[1] = 0;
  }
  return param_1;
}



/* ===== FUN_0001c88c @ 0001c88c size=172 ===== */

int * FUN_0001c88c(int *param_1,int param_2,uint *param_3)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node_base *p_Var2;
  uint uVar3;
  uint uVar4;
  
  if (*(_Rb_tree_node_base **)(param_2 + 8) == (_Rb_tree_node_base *)0x0) {
    p_Var2 = (_Rb_tree_node_base *)(param_2 + 4);
  }
  else {
    uVar4 = *param_3;
    p_Var1 = *(_Rb_tree_node_base **)(param_2 + 8);
    do {
      p_Var2 = p_Var1;
      uVar3 = *(uint *)(p_Var2 + 0x10);
      if (uVar4 < uVar3) {
        p_Var1 = *(_Rb_tree_node_base **)(p_Var2 + 8);
      }
      else {
        p_Var1 = *(_Rb_tree_node_base **)(p_Var2 + 0xc);
      }
    } while (p_Var1 != (_Rb_tree_node_base *)0x0);
    p_Var1 = p_Var2;
    if (uVar4 >= uVar3) goto LAB_0001c8e0;
  }
  if (*(_Rb_tree_node_base **)(param_2 + 0xc) == p_Var2) {
    param_1[1] = (int)p_Var2;
    *param_1 = 0;
    return param_1;
  }
  p_Var1 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var2);
  uVar4 = *param_3;
  uVar3 = *(uint *)(p_Var1 + 0x10);
LAB_0001c8e0:
  if (uVar3 < uVar4) {
    param_1[1] = (int)p_Var2;
    *param_1 = 0;
  }
  else {
    *param_1 = (int)p_Var1;
    param_1[1] = 0;
  }
  return param_1;
}



/* ===== FUN_0001c938 @ 0001c938 size=376 ===== */

_Rb_tree_node_base *
FUN_0001c938(int param_1,_Rb_tree_node_base *param_2,undefined4 param_3,undefined4 *param_4)

{
  bool bVar1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *p_Var4;
  uint uVar5;
  _Rb_tree_node_base *p_Var6;
  bool bVar7;
  _Rb_tree_node_base *local_28;
  _Rb_tree_node_base *p_Stack_24;
  
  p_Var3 = operator_new(0x2c);
  p_Var6 = (_Rb_tree_node_base *)(param_1 + 4);
  uVar5 = *(uint *)*param_4;
  *(_Rb_tree_node_base **)(p_Var3 + 0x14) = p_Var3 + 0x1c;
  *(undefined4 *)(p_Var3 + 0x18) = 0;
  *(uint *)(p_Var3 + 0x10) = uVar5;
  p_Var3[0x1c] = (_Rb_tree_node_base)0x0;
  if (p_Var6 == param_2) {
    if ((*(int *)(param_1 + 0x14) == 0) ||
       (p_Var4 = *(_Rb_tree_node_base **)(param_1 + 0x10), uVar5 <= *(uint *)(p_Var4 + 0x10))) {
LAB_0001ca40:
      FUN_0001c88c(&local_28,param_1,p_Var3 + 0x10);
      param_2 = local_28;
      p_Var2 = p_Stack_24;
      if (p_Stack_24 == (_Rb_tree_node_base *)0x0) {
LAB_0001ca10:
        operator_delete(p_Var3);
        return param_2;
      }
      goto LAB_0001ca5c;
    }
LAB_0001c9c8:
    bVar1 = false;
LAB_0001ca64:
    if (p_Var6 == p_Var4) {
      bVar1 = true;
    }
    bVar7 = true;
    param_2 = p_Var4;
    if (bVar1) goto LAB_0001ca74;
  }
  else {
    if (uVar5 < *(uint *)(param_2 + 0x10)) {
      p_Var2 = param_2;
      if (*(_Rb_tree_node_base **)(param_1 + 0xc) != param_2) {
        p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_2);
        if (uVar5 <= *(uint *)(p_Var4 + 0x10)) goto LAB_0001ca40;
        if (*(int *)(p_Var4 + 0xc) == 0) goto LAB_0001c9c8;
      }
LAB_0001ca5c:
      p_Var4 = p_Var2;
      bVar1 = false;
      if (param_2 != (_Rb_tree_node_base *)0x0) {
        bVar1 = true;
      }
      goto LAB_0001ca64;
    }
    if (uVar5 == *(uint *)(param_2 + 0x10)) goto LAB_0001ca10;
    if (*(_Rb_tree_node_base **)(param_1 + 0x10) != param_2) {
      p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_2);
      if (*(uint *)(p_Var4 + 0x10) <= uVar5) goto LAB_0001ca40;
      if (*(int *)(param_2 + 0xc) != 0) {
        bVar7 = true;
        goto LAB_0001ca74;
      }
    }
  }
  p_Var4 = param_2;
  bVar7 = uVar5 < *(uint *)(p_Var4 + 0x10);
LAB_0001ca74:
  std::_Rb_tree_insert_and_rebalance(bVar7,p_Var3,p_Var4,p_Var6);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return p_Var3;
}



/* ===== FUN_0001cab0 @ 0001cab0 size=308 ===== */

int * FUN_0001cab0(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  uint uVar4;
  uint __n;
  uint uVar5;
  void *__s1;
  void *__s2;
  
  if (*(_Rb_tree_node_base **)(param_2 + 8) == (_Rb_tree_node_base *)0x0) {
    p_Var3 = (_Rb_tree_node_base *)(param_2 + 4);
  }
  else {
    uVar5 = param_3[1];
    __s1 = (void *)*param_3;
    p_Var3 = *(_Rb_tree_node_base **)(param_2 + 8);
    do {
      p_Var2 = p_Var3;
      uVar4 = *(uint *)(p_Var2 + 0x14);
      __s2 = *(void **)(p_Var2 + 0x10);
      __n = uVar5;
      if (uVar4 <= uVar5) {
        __n = uVar4;
      }
      if ((__n == 0) || (iVar1 = memcmp(__s1,__s2,__n), iVar1 == 0)) {
        iVar1 = uVar5 - uVar4;
      }
      if (iVar1 < 0) {
        p_Var3 = *(_Rb_tree_node_base **)(p_Var2 + 8);
      }
      else {
        p_Var3 = *(_Rb_tree_node_base **)(p_Var2 + 0xc);
      }
    } while (p_Var3 != (_Rb_tree_node_base *)0x0);
    p_Var3 = p_Var2;
    if (iVar1 >= 0) goto LAB_0001cb48;
  }
  if (*(_Rb_tree_node_base **)(param_2 + 0xc) == p_Var3) {
    param_1[1] = (int)p_Var3;
    *param_1 = 0;
    return param_1;
  }
  p_Var2 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var3);
  uVar5 = param_3[1];
  __s1 = (void *)*param_3;
  uVar4 = *(uint *)(p_Var2 + 0x14);
  __s2 = *(void **)(p_Var2 + 0x10);
  __n = uVar5;
  if (uVar4 <= uVar5) {
    __n = uVar4;
  }
LAB_0001cb48:
  if ((__n == 0) || (iVar1 = memcmp(__s2,__s1,__n), iVar1 == 0)) {
    iVar1 = uVar4 - uVar5;
  }
  if (iVar1 < 0) {
    param_1[1] = (int)p_Var3;
    *param_1 = 0;
  }
  else {
    *param_1 = (int)p_Var2;
    param_1[1] = 0;
  }
  return param_1;
}



/* ===== FUN_0001cbe4 @ 0001cbe4 size=172 ===== */

int * FUN_0001cbe4(int *param_1,int param_2,uint *param_3)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node_base *p_Var2;
  uint uVar3;
  uint uVar4;
  
  if (*(_Rb_tree_node_base **)(param_2 + 8) == (_Rb_tree_node_base *)0x0) {
    p_Var2 = (_Rb_tree_node_base *)(param_2 + 4);
  }
  else {
    uVar4 = *param_3;
    p_Var1 = *(_Rb_tree_node_base **)(param_2 + 8);
    do {
      p_Var2 = p_Var1;
      uVar3 = *(uint *)(p_Var2 + 0x10);
      if (uVar4 < uVar3) {
        p_Var1 = *(_Rb_tree_node_base **)(p_Var2 + 8);
      }
      else {
        p_Var1 = *(_Rb_tree_node_base **)(p_Var2 + 0xc);
      }
    } while (p_Var1 != (_Rb_tree_node_base *)0x0);
    p_Var1 = p_Var2;
    if (uVar4 >= uVar3) goto LAB_0001cc38;
  }
  if (*(_Rb_tree_node_base **)(param_2 + 0xc) == p_Var2) {
    param_1[1] = (int)p_Var2;
    *param_1 = 0;
    return param_1;
  }
  p_Var1 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var2);
  uVar4 = *param_3;
  uVar3 = *(uint *)(p_Var1 + 0x10);
LAB_0001cc38:
  if (uVar3 < uVar4) {
    param_1[1] = (int)p_Var2;
    *param_1 = 0;
  }
  else {
    *param_1 = (int)p_Var1;
    param_1[1] = 0;
  }
  return param_1;
}



/* ===== FUN_0001cc90 @ 0001cc90 size=372 ===== */

_Rb_tree_node_base *
FUN_0001cc90(int param_1,_Rb_tree_node_base *param_2,undefined4 param_3,undefined4 *param_4)

{
  bool bVar1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *p_Var4;
  uint uVar5;
  _Rb_tree_node_base *p_Var6;
  bool bVar7;
  _Rb_tree_node_base *local_28;
  _Rb_tree_node_base *p_Stack_24;
  
  p_Var3 = operator_new(0x20);
  p_Var6 = (_Rb_tree_node_base *)(param_1 + 4);
  uVar5 = *(uint *)*param_4;
  *(undefined4 *)(p_Var3 + 0x14) = 0;
  *(undefined4 *)(p_Var3 + 0x18) = 0;
  *(uint *)(p_Var3 + 0x10) = uVar5;
  *(undefined4 *)(p_Var3 + 0x1c) = 0;
  if (p_Var6 == param_2) {
    if ((*(int *)(param_1 + 0x14) == 0) ||
       (p_Var4 = *(_Rb_tree_node_base **)(param_1 + 0x10), uVar5 <= *(uint *)(p_Var4 + 0x10))) {
LAB_0001cd94:
      FUN_0001cbe4(&local_28,param_1,p_Var3 + 0x10);
      param_2 = local_28;
      p_Var2 = p_Stack_24;
      if (p_Stack_24 == (_Rb_tree_node_base *)0x0) {
LAB_0001cd64:
        operator_delete(p_Var3);
        return param_2;
      }
      goto LAB_0001cdb0;
    }
LAB_0001cd1c:
    bVar1 = false;
LAB_0001cdb8:
    if (p_Var6 == p_Var4) {
      bVar1 = true;
    }
    bVar7 = true;
    param_2 = p_Var4;
    if (bVar1) goto LAB_0001cdc8;
  }
  else {
    if (uVar5 < *(uint *)(param_2 + 0x10)) {
      p_Var2 = param_2;
      if (*(_Rb_tree_node_base **)(param_1 + 0xc) != param_2) {
        p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_2);
        if (uVar5 <= *(uint *)(p_Var4 + 0x10)) goto LAB_0001cd94;
        if (*(int *)(p_Var4 + 0xc) == 0) goto LAB_0001cd1c;
      }
LAB_0001cdb0:
      p_Var4 = p_Var2;
      bVar1 = false;
      if (param_2 != (_Rb_tree_node_base *)0x0) {
        bVar1 = true;
      }
      goto LAB_0001cdb8;
    }
    if (uVar5 == *(uint *)(param_2 + 0x10)) goto LAB_0001cd64;
    if (*(_Rb_tree_node_base **)(param_1 + 0x10) != param_2) {
      p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_2);
      if (*(uint *)(p_Var4 + 0x10) <= uVar5) goto LAB_0001cd94;
      if (*(int *)(param_2 + 0xc) != 0) {
        bVar7 = true;
        goto LAB_0001cdc8;
      }
    }
  }
  p_Var4 = param_2;
  bVar7 = uVar5 < *(uint *)(p_Var4 + 0x10);
LAB_0001cdc8:
  std::_Rb_tree_insert_and_rebalance(bVar7,p_Var3,p_Var4,p_Var6);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return p_Var3;
}



/* ===== std::__cxx11::string::_M_construct<char*> @ 0001ce04 size=176 ===== */

/* void std::__cxx11::string::_M_construct<char*>(char*, char*, std::forward_iterator_tag) */

void std::__cxx11::string::_M_construct<char*>(uint *param_1,undefined1 *param_2,int param_3)

{
  undefined4 uVar1;
  bool bVar2;
  _Rb_tree_node_base *p_Var3;
  bool bVar4;
  undefined1 *__dest;
  int iVar5;
  _Rb_tree_node_base *p_Var6;
  _Rb_tree_node_base *p_Var7;
  int iVar8;
  void *__s2;
  int *piVar9;
  undefined4 *extraout_r3;
  uint uVar10;
  _Rb_tree_node_base *p_Var11;
  uint uVar12;
  _Rb_tree_node_base *p_Var13;
  uint uVar14;
  undefined8 uVar15;
  _Rb_tree_node_base *p_Stack_58;
  _Rb_tree_node_base *p_Stack_48;
  _Rb_tree_node_base *p_Stack_44;
  uint local_14;
  
  if (param_2 != (undefined1 *)0x0 || param_3 == 0) {
    uVar10 = param_3 - (int)param_2;
    local_14 = uVar10;
    if (uVar10 < 0x10) {
      __dest = (undefined1 *)*param_1;
      if (uVar10 == 1) {
        *__dest = *param_2;
        __dest = (undefined1 *)*param_1;
        goto LAB_0001ce58;
      }
      if (uVar10 == 0) goto LAB_0001ce58;
    }
    else {
      __dest = (undefined1 *)std::__cxx11::string::_M_create(param_1,(uint)&local_14);
      param_1[2] = local_14;
      *param_1 = (uint)__dest;
    }
    memcpy(__dest,param_2,uVar10);
    __dest = (undefined1 *)*param_1;
LAB_0001ce58:
    param_1[1] = local_14;
    __dest[local_14] = 0;
    return;
  }
  uVar15 = std::__throw_logic_error("basic_string::_M_construct null not valid");
  p_Var11 = (_Rb_tree_node_base *)((ulonglong)uVar15 >> 0x20);
  iVar5 = (int)uVar15;
  p_Var6 = operator_new(0x48);
  piVar9 = (int *)*extraout_r3;
  *(_Rb_tree_node_base **)(p_Var6 + 0x10) = p_Var6 + 0x18;
  iVar8 = *piVar9;
  _M_construct<char*>(p_Var6 + 0x10,iVar8,iVar8 + piVar9[1],0);
  uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  p_Var13 = (_Rb_tree_node_base *)(iVar5 + 4);
  *(undefined4 *)(p_Var6 + 0x28) = 0;
  *(undefined4 *)(p_Var6 + 0x2c) = uVar1;
  *(undefined4 *)(p_Var6 + 0x30) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(p_Var6 + 0x34) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(p_Var6 + 0x38) = 0;
  *(undefined4 *)(p_Var6 + 0x3c) = uVar1;
  *(undefined4 *)(p_Var6 + 0x40) = 0;
  *(undefined4 *)(p_Var6 + 0x44) = uVar1;
  if (p_Var13 == p_Var11) {
    if (*(int *)(iVar5 + 0x14) == 0) {
LAB_0001d0c8:
      FUN_0001cab0(&p_Stack_48,iVar5,p_Var6 + 0x10);
      p_Var11 = p_Stack_48;
      p_Var3 = p_Stack_44;
      if (p_Stack_44 == (_Rb_tree_node_base *)0x0) {
        p_Stack_58 = *(_Rb_tree_node_base **)(p_Var6 + 0x10);
LAB_0001cf98:
        if (p_Var6 + 0x18 != p_Stack_58) {
          operator_delete(p_Stack_58);
        }
        operator_delete(p_Var6);
        return;
      }
      goto LAB_0001d034;
    }
    p_Var7 = *(_Rb_tree_node_base **)(iVar5 + 0x10);
    uVar12 = *(uint *)(p_Var6 + 0x14);
    uVar14 = *(uint *)(p_Var7 + 0x14);
    uVar10 = uVar14;
    if (uVar12 <= uVar14) {
      uVar10 = uVar12;
    }
    if ((uVar10 == 0) ||
       (iVar8 = memcmp(*(void **)(p_Var7 + 0x10),*(void **)(p_Var6 + 0x10),uVar10), iVar8 == 0)) {
      iVar8 = uVar14 - uVar12;
    }
    if (-1 < iVar8) goto LAB_0001d0c8;
LAB_0001d0c0:
    bVar2 = false;
LAB_0001d03c:
    if (p_Var13 == p_Var7) {
      bVar2 = true;
    }
    bVar4 = true;
    if (bVar2) goto LAB_0001d04c;
    p_Stack_58 = *(_Rb_tree_node_base **)(p_Var6 + 0x10);
    uVar12 = *(uint *)(p_Var6 + 0x14);
    p_Var11 = p_Var7;
  }
  else {
    uVar12 = *(uint *)(p_Var6 + 0x14);
    uVar14 = *(uint *)(p_Var11 + 0x14);
    p_Stack_58 = *(_Rb_tree_node_base **)(p_Var6 + 0x10);
    __s2 = *(void **)(p_Var11 + 0x10);
    uVar10 = uVar12;
    if (uVar14 <= uVar12) {
      uVar10 = uVar14;
    }
    if (uVar10 == 0) {
      if (-1 < (int)(uVar12 - uVar14)) {
LAB_0001cf8c:
        iVar8 = uVar14 - uVar12;
        goto LAB_0001cf90;
      }
LAB_0001cfd0:
      p_Var3 = p_Var11;
      if (*(_Rb_tree_node_base **)(iVar5 + 0xc) != p_Var11) {
        p_Var7 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var11);
        uVar14 = *(uint *)(p_Var7 + 0x14);
        uVar10 = uVar12;
        if (uVar14 <= uVar12) {
          uVar10 = uVar14;
        }
        if ((uVar10 == 0) ||
           (iVar8 = memcmp(*(void **)(p_Var7 + 0x10),p_Stack_58,uVar10), iVar8 == 0)) {
          iVar8 = uVar14 - uVar12;
        }
        if (-1 < iVar8) goto LAB_0001d0c8;
        if (*(int *)(p_Var7 + 0xc) == 0) goto LAB_0001d0c0;
      }
LAB_0001d034:
      p_Var7 = p_Var3;
      bVar2 = false;
      if (p_Var11 != (_Rb_tree_node_base *)0x0) {
        bVar2 = true;
      }
      goto LAB_0001d03c;
    }
    iVar8 = memcmp(p_Stack_58,__s2,uVar10);
    if (iVar8 == 0) {
      iVar8 = uVar12 - uVar14;
    }
    if (iVar8 < 0) goto LAB_0001cfd0;
    iVar8 = memcmp(__s2,p_Stack_58,uVar10);
    if (iVar8 == 0) goto LAB_0001cf8c;
LAB_0001cf90:
    if (-1 < iVar8) goto LAB_0001cf98;
    if (*(_Rb_tree_node_base **)(iVar5 + 0x10) != p_Var11) {
      p_Var7 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var11);
      uVar14 = *(uint *)(p_Var7 + 0x14);
      uVar10 = uVar12;
      if (uVar14 <= uVar12) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) || (iVar8 = memcmp(p_Stack_58,*(void **)(p_Var7 + 0x10),uVar10), iVar8 == 0)
         ) {
        iVar8 = uVar12 - uVar14;
      }
      if (-1 < iVar8) goto LAB_0001d0c8;
      if (*(int *)(p_Var11 + 0xc) != 0) {
        bVar4 = true;
        goto LAB_0001d04c;
      }
    }
  }
  p_Var7 = p_Var11;
  uVar14 = *(uint *)(p_Var7 + 0x14);
  uVar10 = uVar14;
  if (uVar12 <= uVar14) {
    uVar10 = uVar12;
  }
  if ((uVar10 == 0) || (iVar8 = memcmp(p_Stack_58,*(void **)(p_Var7 + 0x10),uVar10), iVar8 == 0)) {
    iVar8 = uVar12 - uVar14;
  }
  bVar4 = SUB41((uint)iVar8 >> 0x1f,0);
LAB_0001d04c:
  std::_Rb_tree_insert_and_rebalance(bVar4,p_Var6,p_Var7,p_Var13);
  *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 1;
  return;
}



/* ===== FUN_0001ceb4 @ 0001ceb4 size=772 ===== */

_Rb_tree_node_base *
FUN_0001ceb4(int param_1,_Rb_tree_node_base *param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  bool bVar2;
  _Rb_tree_node_base *p_Var3;
  bool bVar4;
  _Rb_tree_node_base *p_Var5;
  _Rb_tree_node_base *p_Var6;
  int iVar7;
  void *__s2;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  _Rb_tree_node_base *p_Var11;
  uint uVar12;
  _Rb_tree_node_base *local_40;
  _Rb_tree_node_base *local_30;
  _Rb_tree_node_base *local_2c;
  
  p_Var5 = operator_new(0x48);
  piVar8 = (int *)*param_4;
  *(_Rb_tree_node_base **)(p_Var5 + 0x10) = p_Var5 + 0x18;
  iVar7 = *piVar8;
  std::__cxx11::string::_M_construct<char*>(p_Var5 + 0x10,iVar7,iVar7 + piVar8[1],0);
  uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  p_Var11 = (_Rb_tree_node_base *)(param_1 + 4);
  *(undefined4 *)(p_Var5 + 0x28) = 0;
  *(undefined4 *)(p_Var5 + 0x2c) = uVar1;
  *(undefined4 *)(p_Var5 + 0x30) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(p_Var5 + 0x34) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(p_Var5 + 0x38) = 0;
  *(undefined4 *)(p_Var5 + 0x3c) = uVar1;
  *(undefined4 *)(p_Var5 + 0x40) = 0;
  *(undefined4 *)(p_Var5 + 0x44) = uVar1;
  if (p_Var11 == param_2) {
    if (*(int *)(param_1 + 0x14) == 0) {
LAB_0001d0c8:
      FUN_0001cab0(&local_30,param_1,p_Var5 + 0x10);
      param_2 = local_30;
      p_Var3 = local_2c;
      if (local_2c == (_Rb_tree_node_base *)0x0) {
        local_40 = *(_Rb_tree_node_base **)(p_Var5 + 0x10);
LAB_0001cf98:
        if (p_Var5 + 0x18 != local_40) {
          operator_delete(local_40);
        }
        operator_delete(p_Var5);
        return param_2;
      }
      goto LAB_0001d034;
    }
    p_Var6 = *(_Rb_tree_node_base **)(param_1 + 0x10);
    uVar10 = *(uint *)(p_Var5 + 0x14);
    uVar12 = *(uint *)(p_Var6 + 0x14);
    uVar9 = uVar12;
    if (uVar10 <= uVar12) {
      uVar9 = uVar10;
    }
    if ((uVar9 == 0) ||
       (iVar7 = memcmp(*(void **)(p_Var6 + 0x10),*(void **)(p_Var5 + 0x10),uVar9), iVar7 == 0)) {
      iVar7 = uVar12 - uVar10;
    }
    if (-1 < iVar7) goto LAB_0001d0c8;
LAB_0001d0c0:
    bVar2 = false;
LAB_0001d03c:
    if (p_Var11 == p_Var6) {
      bVar2 = true;
    }
    bVar4 = true;
    if (bVar2) goto LAB_0001d04c;
    local_40 = *(_Rb_tree_node_base **)(p_Var5 + 0x10);
    uVar10 = *(uint *)(p_Var5 + 0x14);
    param_2 = p_Var6;
  }
  else {
    uVar10 = *(uint *)(p_Var5 + 0x14);
    uVar12 = *(uint *)(param_2 + 0x14);
    local_40 = *(_Rb_tree_node_base **)(p_Var5 + 0x10);
    __s2 = *(void **)(param_2 + 0x10);
    uVar9 = uVar10;
    if (uVar12 <= uVar10) {
      uVar9 = uVar12;
    }
    if (uVar9 != 0) {
      iVar7 = memcmp(local_40,__s2,uVar9);
      if (iVar7 == 0) {
        iVar7 = uVar10 - uVar12;
      }
      if (-1 < iVar7) {
        iVar7 = memcmp(__s2,local_40,uVar9);
        if (iVar7 == 0) goto LAB_0001cf8c;
        goto LAB_0001cf90;
      }
LAB_0001cfd0:
      p_Var3 = param_2;
      if (*(_Rb_tree_node_base **)(param_1 + 0xc) != param_2) {
        p_Var6 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_2);
        uVar12 = *(uint *)(p_Var6 + 0x14);
        uVar9 = uVar10;
        if (uVar12 <= uVar10) {
          uVar9 = uVar12;
        }
        if ((uVar9 == 0) || (iVar7 = memcmp(*(void **)(p_Var6 + 0x10),local_40,uVar9), iVar7 == 0))
        {
          iVar7 = uVar12 - uVar10;
        }
        if (-1 < iVar7) goto LAB_0001d0c8;
        p_Var3 = param_2;
        if (*(int *)(p_Var6 + 0xc) == 0) goto LAB_0001d0c0;
      }
LAB_0001d034:
      p_Var6 = p_Var3;
      bVar2 = false;
      if (param_2 != (_Rb_tree_node_base *)0x0) {
        bVar2 = true;
      }
      goto LAB_0001d03c;
    }
    if ((int)(uVar10 - uVar12) < 0) goto LAB_0001cfd0;
LAB_0001cf8c:
    iVar7 = uVar12 - uVar10;
LAB_0001cf90:
    if (-1 < iVar7) goto LAB_0001cf98;
    if (*(_Rb_tree_node_base **)(param_1 + 0x10) != param_2) {
      p_Var6 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_2);
      uVar12 = *(uint *)(p_Var6 + 0x14);
      uVar9 = uVar10;
      if (uVar12 <= uVar10) {
        uVar9 = uVar12;
      }
      if ((uVar9 == 0) || (iVar7 = memcmp(local_40,*(void **)(p_Var6 + 0x10),uVar9), iVar7 == 0)) {
        iVar7 = uVar10 - uVar12;
      }
      if (-1 < iVar7) goto LAB_0001d0c8;
      if (*(int *)(param_2 + 0xc) != 0) {
        bVar4 = true;
        goto LAB_0001d04c;
      }
    }
  }
  p_Var6 = param_2;
  uVar12 = *(uint *)(p_Var6 + 0x14);
  uVar9 = uVar12;
  if (uVar10 <= uVar12) {
    uVar9 = uVar10;
  }
  if ((uVar9 == 0) || (iVar7 = memcmp(local_40,*(void **)(p_Var6 + 0x10),uVar9), iVar7 == 0)) {
    iVar7 = uVar10 - uVar12;
  }
  bVar4 = SUB41((uint)iVar7 >> 0x1f,0);
LAB_0001d04c:
  std::_Rb_tree_insert_and_rebalance(bVar4,p_Var5,p_Var6,p_Var11);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return p_Var5;
}



/* ===== FUN_0001d1d0 @ 0001d1d0 size=188 ===== */

undefined4
FUN_0001d1d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_20;
  int local_1c;
  
  pvVar1 = operator_new(0x40);
  piVar4 = (int *)*param_4;
  *(void **)((int)pvVar1 + 0x10) = (void *)((int)pvVar1 + 0x18);
  iVar3 = *piVar4;
  std::__cxx11::string::_M_construct<char*>((int)pvVar1 + 0x10,iVar3,iVar3 + piVar4[1],0);
  *(int *)((int)pvVar1 + 0x28) = (int)pvVar1 + 0x30;
  *(undefined4 *)((int)pvVar1 + 0x2c) = 0;
  *(undefined1 *)((int)pvVar1 + 0x30) = 0;
  FUN_0001c318(&local_20,param_1,param_2,(int)pvVar1 + 0x10);
  if (local_1c != 0) {
    uVar2 = FUN_0001c0bc(param_1,local_20,local_1c,pvVar1);
    return uVar2;
  }
  if ((void *)((int)pvVar1 + 0x18) != *(void **)((int)pvVar1 + 0x10)) {
    operator_delete(*(void **)((int)pvVar1 + 0x10));
  }
  operator_delete(pvVar1);
  return local_20;
}



/* ===== FUN_0001d2a4 @ 0001d2a4 size=184 ===== */

_Rb_tree_node_base *
FUN_0001d2a4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node_base *p_Var2;
  bool bVar3;
  _Rb_tree_node_base *p_Var4;
  int iVar5;
  uint __n;
  int *piVar6;
  _Rb_tree_node_base *p_Var7;
  uint uVar8;
  uint uVar9;
  _Rb_tree_node_base *local_20;
  _Rb_tree_node_base *local_1c;
  
  p_Var4 = operator_new(0x110);
  piVar6 = (int *)*param_4;
  *(_Rb_tree_node_base **)(p_Var4 + 0x10) = p_Var4 + 0x18;
  iVar5 = *piVar6;
  std::__cxx11::string::_M_construct<char*>(p_Var4 + 0x10,iVar5,iVar5 + piVar6[1],0);
  memset(p_Var4 + 0x28,0,0xe8);
  FUN_0001c66c(&local_20,param_1,param_2,p_Var4 + 0x10);
  p_Var2 = local_1c;
  if (local_1c == (_Rb_tree_node_base *)0x0) {
    if (p_Var4 + 0x18 != *(_Rb_tree_node_base **)(p_Var4 + 0x10)) {
      operator_delete(*(_Rb_tree_node_base **)(p_Var4 + 0x10));
    }
    operator_delete(p_Var4);
    return local_20;
  }
  p_Var7 = (_Rb_tree_node_base *)(param_1 + 4);
  if ((local_20 == (_Rb_tree_node_base *)0x0) && (local_1c != p_Var7)) {
    uVar8 = *(uint *)(local_1c + 0x14);
    uVar9 = *(uint *)(p_Var4 + 0x14);
    __n = uVar9;
    if (uVar8 <= uVar9) {
      __n = uVar8;
    }
    if ((__n == 0) ||
       (p_Var1 = local_1c + 0x10, local_1c = p_Var7,
       iVar5 = memcmp(*(void **)(p_Var4 + 0x10),*(void **)p_Var1,__n), p_Var7 = local_1c, iVar5 == 0
       )) {
      iVar5 = uVar9 - uVar8;
    }
    bVar3 = SUB41((uint)iVar5 >> 0x1f,0);
  }
  else {
    bVar3 = true;
  }
  std::_Rb_tree_insert_and_rebalance(bVar3,p_Var4,p_Var2,p_Var7);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return p_Var4;
}



/* ===== FUN_0001d374 @ 0001d374 size=520 ===== */

void FUN_0001d374(undefined4 *param_1,code *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  size_t __n;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *__src;
  undefined4 *local_30;
  size_t local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  puVar2 = param_1 + 2;
  local_30 = (undefined4 *)*param_1;
  if (local_30 == puVar2) {
    uStack_20 = param_1[4];
    uStack_1c = param_1[5];
    local_28 = *puVar2;
    uStack_24 = param_1[3];
    local_30 = &local_28;
  }
  else {
    local_28 = param_1[2];
  }
  __src = param_1 + -4;
  local_2c = param_1[1];
  *param_1 = puVar2;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  while( true ) {
    puVar4 = __src + 4;
    iVar1 = (*param_2)(&local_30,__src + -2);
    puVar2 = (undefined4 *)__src[4];
    if (iVar1 == 0) break;
    puVar4 = (undefined4 *)__src[-2];
    if (puVar4 == __src) {
      __n = __src[-1];
      iVar1 = 0;
      if (__n != 0) {
        if (__n == 1) {
          *(undefined1 *)puVar2 = *(undefined1 *)__src;
          __src[5] = __src[-1];
          *(undefined1 *)(__src[4] + __src[-1]) = 0;
          puVar2 = (undefined4 *)__src[-2];
          goto LAB_0001d410;
        }
        memcpy(puVar2,__src,__n);
        iVar1 = __src[-1];
        puVar2 = (undefined4 *)__src[4];
      }
      __src[5] = iVar1;
      *(undefined1 *)((int)puVar2 + iVar1) = 0;
      puVar2 = (undefined4 *)__src[-2];
    }
    else {
      if (puVar2 == __src + 6) {
        __src[4] = puVar4;
        __src[5] = __src[-1];
        __src[6] = *__src;
      }
      else {
        __src[4] = puVar4;
        __src[5] = __src[-1];
        uVar3 = __src[6];
        __src[6] = *__src;
        if (puVar2 != (undefined4 *)0x0) {
          __src[-2] = puVar2;
          *__src = uVar3;
          goto LAB_0001d410;
        }
      }
      __src[-2] = __src;
      puVar2 = __src;
    }
LAB_0001d410:
    __src[-1] = 0;
    __src = __src + -6;
    *(undefined1 *)puVar2 = 0;
  }
  if (local_30 == &local_28) {
    if (local_2c != 0) {
      if (local_2c == 1) {
        *(undefined1 *)puVar2 = (undefined1)local_28;
        puVar2 = (undefined4 *)*puVar4;
      }
      else {
        memcpy(puVar2,&local_28,local_2c);
        puVar2 = (undefined4 *)*puVar4;
      }
    }
    __src[5] = local_2c;
    *(undefined1 *)((int)puVar2 + local_2c) = 0;
    uVar3 = local_28;
  }
  else {
    if (puVar2 == __src + 6) {
      *puVar4 = local_30;
      __src[5] = local_2c;
      __src[6] = local_28;
    }
    else {
      *puVar4 = local_30;
      __src[5] = local_2c;
      uVar3 = __src[6];
      __src[6] = local_28;
      local_30 = puVar2;
      if (puVar2 != (undefined4 *)0x0) goto LAB_0001d4e0;
    }
    local_30 = &local_28;
    uVar3 = local_28;
  }
LAB_0001d4e0:
  local_28 = uVar3;
  local_2c = 0;
  *(undefined1 *)local_30 = 0;
  if (local_30 != &local_28) {
    operator_delete(local_30);
  }
  return;
}



/* ===== FUN_0001d590 @ 0001d590 size=588 ===== */

void FUN_0001d590(undefined4 *param_1,undefined4 *param_2,code *param_3)

{
  int iVar1;
  size_t __n;
  undefined4 uVar2;
  undefined4 *puVar3;
  size_t __n_00;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *__dest;
  int *piVar8;
  bool bVar9;
  undefined8 uVar10;
  int *local_40;
  int local_38 [5];
  
  if (param_1 == param_2) {
    return;
  }
  if (param_1 + 6 != param_2) {
    puVar6 = param_1 + 6;
    do {
      piVar8 = (int *)0x1d5f0;
      uVar10 = (*param_3)(puVar6,param_1);
      puVar7 = puVar6 + 6;
      if ((int)uVar10 == 0) {
        FUN_0001d374(puVar6,param_3);
      }
      else {
        piVar5 = (int *)*puVar6;
        __dest = puVar6 + 2;
        bVar9 = piVar5 != __dest;
        if (bVar9) {
          iVar1 = puVar6[2];
          local_40 = piVar5;
        }
        else {
          iVar1 = puVar6[4];
          piVar5 = (int *)puVar6[5];
          uVar10 = *(undefined8 *)__dest;
          piVar8 = local_38;
          local_40 = local_38;
        }
        *puVar6 = __dest;
        if (!bVar9) {
          *(undefined8 *)piVar8 = uVar10;
          piVar8[2] = iVar1;
          piVar8[3] = (int)piVar5;
          iVar1 = local_38[0];
        }
        local_38[0] = iVar1;
        __n = puVar6[1];
        *(undefined1 *)(puVar6 + 2) = 0;
        iVar1 = ((int)puVar6 - (int)param_1 >> 3) * -0x55555555;
        puVar6[1] = 0;
        if (0 < (int)puVar6 - (int)param_1) {
          puVar6 = puVar6 + -4;
          do {
            puVar3 = (undefined4 *)puVar6[-2];
            if (puVar3 == puVar6) {
              __n_00 = puVar6[-1];
              iVar4 = 0;
              if (__n_00 != 0) {
                if (__n_00 == 1) {
                  *(undefined1 *)__dest = *(undefined1 *)puVar6;
                  iVar4 = puVar6[-1];
                }
                else {
                  memcpy(__dest,puVar6,__n_00);
                  iVar4 = puVar6[-1];
                }
              }
              puVar6[5] = iVar4;
              *(undefined1 *)(puVar6[4] + iVar4) = 0;
            }
            else {
              if (__dest == puVar6 + 6) {
                puVar6[4] = puVar3;
                puVar6[5] = puVar6[-1];
                puVar6[6] = *puVar6;
              }
              else {
                puVar6[4] = puVar3;
                puVar6[5] = puVar6[-1];
                uVar2 = puVar6[6];
                puVar6[6] = *puVar6;
                if (__dest != (int *)0x0) {
                  puVar6[-2] = __dest;
                  *puVar6 = uVar2;
                  goto LAB_0001d694;
                }
              }
              puVar6[-2] = puVar6;
            }
LAB_0001d694:
            iVar1 = iVar1 + -1;
            puVar6[-1] = 0;
            *(undefined1 *)puVar6[-2] = 0;
            if (iVar1 == 0) break;
            __dest = (int *)puVar6[-2];
            puVar6 = puVar6 + -6;
          } while( true );
        }
        piVar8 = (int *)*param_1;
        if (local_40 == local_38) {
          if (__n != 0) {
            if (__n == 1) {
              *(undefined1 *)piVar8 = (undefined1)local_38[0];
              piVar8 = (int *)*param_1;
            }
            else {
              memcpy(piVar8,local_38,__n);
              piVar8 = (int *)*param_1;
            }
          }
          param_1[1] = __n;
          *(undefined1 *)((int)piVar8 + __n) = 0;
          iVar1 = local_38[0];
        }
        else {
          if (piVar8 == param_1 + 2) {
            *param_1 = local_40;
            param_1[1] = __n;
            param_1[2] = local_38[0];
          }
          else {
            iVar1 = param_1[2];
            *param_1 = local_40;
            param_1[1] = __n;
            param_1[2] = local_38[0];
            local_40 = piVar8;
            if (piVar8 != (int *)0x0) goto LAB_0001d74c;
          }
          local_40 = local_38;
          iVar1 = local_38[0];
        }
LAB_0001d74c:
        local_38[0] = iVar1;
        *(undefined1 *)local_40 = 0;
        if (local_40 != local_38) {
          operator_delete(local_40);
        }
      }
      puVar6 = puVar7;
    } while (param_2 != puVar7);
  }
  return;
}



/* ===== FUN_0001d7dc @ 0001d7dc size=1296 ===== */

void FUN_0001d7dc(int param_1,int param_2,uint param_3,undefined4 *param_4,code *param_5)

{
  int iVar1;
  int iVar2;
  undefined1 *__dest;
  undefined4 *puVar3;
  undefined1 *__src;
  size_t sVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined4 *__src_00;
  undefined4 *local_58;
  undefined4 *local_54;
  undefined4 *local_40;
  size_t local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar2 = (int)(param_3 - 1) / 2;
  iVar10 = param_2;
  if (param_2 < iVar2) {
    local_54 = (undefined4 *)(param_2 * 0x18 + param_1 + 8);
    do {
      iVar8 = iVar10 * 0x18;
      iVar5 = (iVar10 + 1) * 2;
      iVar11 = iVar5 + -1;
      puVar14 = (undefined4 *)((iVar10 + 1) * 0x30 + param_1);
      iVar15 = param_1 + iVar8;
      puVar12 = (undefined4 *)(iVar11 * 0x18 + param_1);
      iVar1 = (*param_5)(puVar14,puVar12);
      puVar3 = *(undefined4 **)(param_1 + iVar8);
      iVar10 = iVar11;
      if (iVar1 == 0) {
        iVar10 = iVar5;
        puVar12 = puVar14;
      }
      puVar13 = puVar12 + 2;
      puVar14 = (undefined4 *)*puVar12;
      if (puVar14 == puVar13) {
        sVar4 = puVar12[1];
        iVar5 = 0;
        if (sVar4 != 0) {
          if (sVar4 == 1) {
            *(undefined1 *)puVar3 = *(undefined1 *)(puVar12 + 2);
            iVar5 = *(int *)(param_1 + iVar8);
            iVar1 = puVar12[1];
            *(int *)(iVar15 + 4) = iVar1;
            *(undefined1 *)(iVar5 + iVar1) = 0;
            puVar3 = (undefined4 *)*puVar12;
            goto LAB_0001d85c;
          }
          memcpy(puVar3,puVar13,sVar4);
          iVar5 = puVar12[1];
          puVar3 = *(undefined4 **)(param_1 + iVar8);
        }
        *(int *)(iVar15 + 4) = iVar5;
        *(undefined1 *)((int)puVar3 + iVar5) = 0;
        puVar3 = (undefined4 *)*puVar12;
      }
      else {
        if (puVar3 == local_54) {
          *(undefined4 **)(param_1 + iVar8) = puVar14;
          *(undefined4 *)(iVar15 + 4) = puVar12[1];
          *(undefined4 *)(iVar15 + 8) = puVar12[2];
        }
        else {
          uVar7 = *(undefined4 *)(iVar15 + 8);
          *(undefined4 **)(param_1 + iVar8) = puVar14;
          *(undefined4 *)(iVar15 + 4) = puVar12[1];
          *(undefined4 *)(iVar15 + 8) = puVar12[2];
          if (puVar3 != (undefined4 *)0x0) {
            *puVar12 = puVar3;
            puVar12[2] = uVar7;
            goto LAB_0001d85c;
          }
        }
        *puVar12 = puVar13;
        puVar3 = puVar13;
      }
LAB_0001d85c:
      puVar12[1] = 0;
      *(undefined1 *)puVar3 = 0;
      local_54 = puVar13;
    } while (iVar10 < iVar2);
  }
  if (((param_3 & 1) == 0) && (iVar10 == (int)(param_3 - 2) / 2)) {
    iVar1 = iVar10 * 0x18;
    iVar10 = iVar10 * 2 + 1;
    iVar2 = iVar10 * 0x18;
    iVar8 = param_1 + iVar1;
    __dest = *(undefined1 **)(param_1 + iVar1);
    iVar5 = param_1 + iVar2;
    puVar9 = (undefined1 *)(iVar5 + 8);
    __src = *(undefined1 **)(param_1 + iVar2);
    if (__src == puVar9) {
      sVar4 = *(size_t *)(iVar5 + 4);
      iVar11 = 0;
      if (sVar4 != 0) {
        if (sVar4 == 1) {
          *__dest = *(undefined1 *)(iVar5 + 8);
          __dest = *(undefined1 **)(param_1 + iVar1);
          iVar11 = *(int *)(iVar5 + 4);
        }
        else {
          memcpy(__dest,__src,sVar4);
          __dest = *(undefined1 **)(param_1 + iVar1);
          iVar11 = *(int *)(iVar5 + 4);
        }
      }
      *(int *)(iVar8 + 4) = iVar11;
      __dest[iVar11] = 0;
      puVar9 = *(undefined1 **)(param_1 + iVar2);
    }
    else {
      if (__dest == (undefined1 *)(iVar8 + 8)) {
        *(undefined1 **)(param_1 + iVar1) = __src;
        *(undefined4 *)(iVar8 + 4) = *(undefined4 *)(iVar5 + 4);
        *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar5 + 8);
      }
      else {
        uVar7 = *(undefined4 *)(iVar8 + 8);
        *(undefined1 **)(param_1 + iVar1) = __src;
        *(undefined4 *)(iVar8 + 4) = *(undefined4 *)(iVar5 + 4);
        *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar5 + 8);
        if (__dest != (undefined1 *)0x0) {
          *(undefined1 **)(param_1 + iVar2) = __dest;
          *(undefined4 *)(iVar5 + 8) = uVar7;
          puVar9 = __dest;
          goto LAB_0001db20;
        }
      }
      *(undefined1 **)(param_1 + iVar2) = puVar9;
    }
LAB_0001db20:
    *(undefined4 *)(iVar5 + 4) = 0;
    *puVar9 = 0;
  }
  puVar12 = param_4 + 2;
  local_40 = (undefined4 *)*param_4;
  if (local_40 == puVar12) {
    uStack_34 = param_4[3];
    uStack_2c = param_4[5];
    uStack_30 = param_4[4];
    local_38 = *puVar12;
    local_40 = &local_38;
  }
  else {
    local_38 = param_4[2];
  }
  local_3c = param_4[1];
  *param_4 = puVar12;
  param_4[1] = 0;
  *(undefined1 *)(param_4 + 2) = 0;
  if (param_2 < iVar10) {
    do {
      iVar5 = (iVar10 + -1) / 2;
      iVar1 = iVar5 * 0x18;
      puVar13 = (undefined4 *)(param_1 + iVar1);
      iVar2 = (*param_5)(puVar13,&local_40);
      iVar10 = iVar10 * 0x18;
      puVar14 = (undefined4 *)(param_1 + iVar10);
      puVar3 = puVar14 + 2;
      puVar12 = *(undefined4 **)(param_1 + iVar10);
      if (iVar2 == 0) goto joined_r0x0001db40;
      puVar6 = *(undefined4 **)(param_1 + iVar1);
      __src_00 = puVar13 + 2;
      if (puVar6 == __src_00) {
        sVar4 = puVar13[1];
        iVar2 = 0;
        if (sVar4 != 0) {
          if (sVar4 == 1) {
            *(undefined1 *)puVar12 = *(undefined1 *)(puVar13 + 2);
            iVar2 = *(int *)(param_1 + iVar10);
            iVar10 = puVar13[1];
            puVar14[1] = iVar10;
            *(undefined1 *)(iVar2 + iVar10) = 0;
            puVar12 = *(undefined4 **)(param_1 + iVar1);
            goto LAB_0001d9ec;
          }
          memcpy(puVar12,__src_00,sVar4);
          puVar12 = *(undefined4 **)(param_1 + iVar10);
          iVar2 = puVar13[1];
        }
        puVar14[1] = iVar2;
        *(undefined1 *)((int)puVar12 + iVar2) = 0;
        puVar12 = *(undefined4 **)(param_1 + iVar1);
      }
      else {
        if (puVar3 == puVar12) {
          *(undefined4 **)(param_1 + iVar10) = puVar6;
          puVar14[1] = puVar13[1];
          puVar14[2] = puVar13[2];
        }
        else {
          uVar7 = puVar14[2];
          *(undefined4 **)(param_1 + iVar10) = puVar6;
          puVar14[1] = puVar13[1];
          puVar14[2] = puVar13[2];
          if (puVar12 != (undefined4 *)0x0) {
            *(undefined4 **)(param_1 + iVar1) = puVar12;
            puVar13[2] = uVar7;
            goto LAB_0001d9ec;
          }
        }
        *(undefined4 **)(param_1 + iVar1) = __src_00;
        puVar12 = __src_00;
      }
LAB_0001d9ec:
      puVar13[1] = 0;
      *(undefined1 *)puVar12 = 0;
      iVar10 = iVar5;
    } while (param_2 < iVar5);
    puVar12 = (undefined4 *)*puVar13;
    puVar3 = __src_00;
    puVar14 = puVar13;
  }
  else {
    puVar14 = (undefined4 *)(param_1 + iVar10 * 0x18);
    puVar3 = puVar14 + 2;
    puVar12 = *(undefined4 **)(param_1 + iVar10 * 0x18);
  }
joined_r0x0001db40:
  if (local_40 == &local_38) {
    local_58 = &local_38;
    if (local_3c != 0) {
      if (local_3c == 1) {
        *(undefined1 *)puVar12 = (undefined1)local_38;
        puVar12 = (undefined4 *)*puVar14;
      }
      else {
        memcpy(puVar12,local_58,local_3c);
        puVar12 = (undefined4 *)*puVar14;
      }
    }
    puVar14[1] = local_3c;
    *(undefined1 *)((int)puVar12 + local_3c) = 0;
    uVar7 = local_38;
  }
  else {
    if (puVar12 == puVar3) {
      *puVar14 = local_40;
      puVar14[1] = local_3c;
      puVar14[2] = local_38;
    }
    else {
      puVar14[1] = local_3c;
      *puVar14 = local_40;
      uVar7 = puVar14[2];
      puVar14[2] = local_38;
      local_40 = puVar12;
      if (puVar12 != (undefined4 *)0x0) goto LAB_0001db7c;
    }
    local_40 = &local_38;
    uVar7 = local_38;
  }
LAB_0001db7c:
  local_38 = uVar7;
  local_58 = &local_38;
  local_3c = 0;
  *(undefined1 *)local_40 = 0;
  if (local_40 != local_58) {
    operator_delete(local_40);
  }
  return;
}



/* ===== FUN_0001dd04 @ 0001dd04 size=312 ===== */

/* WARNING: Removing unreachable block (ram,0x0001dddc) */
/* WARNING: Removing unreachable block (ram,0x0001de30) */

void FUN_0001dd04(int param_1,int param_2,undefined4 *param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint *local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  if (param_2 - param_1 < 0x19) {
    return;
  }
  iVar3 = (param_2 - param_1 >> 3) * -0x55555555;
  iVar2 = (iVar3 + -2) / 2;
  puVar1 = (uint *)(iVar2 * 0x18 + param_1 + 8);
  do {
    local_40 = (uint *)puVar1[-2];
    if (puVar1 == local_40) {
      local_50 = *puVar1;
      uStack_4c = puVar1[1];
      uStack_48 = puVar1[2];
      uStack_44 = puVar1[3];
      *(undefined1 *)puVar1 = 0;
      local_3c = puVar1[-1];
      puVar1[-1] = 0;
LAB_0001de1c:
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      local_40 = &local_38;
    }
    else {
      local_50 = *puVar1;
      local_3c = puVar1[-1];
      puVar1[-2] = (uint)puVar1;
      *(undefined1 *)puVar1 = 0;
      puVar1[-1] = 0;
      if (local_40 == &local_50) goto LAB_0001de1c;
    }
    local_38 = local_50;
    local_50 = local_50 & 0xffffff00;
    FUN_0001d7dc(param_1,iVar2,iVar3,&local_40,*param_3);
    if (local_40 != &local_38) {
      operator_delete(local_40);
    }
    if (iVar2 == 0) {
      return;
    }
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -6;
  } while( true );
}



/* ===== FUN_0001de60 @ 0001de60 size=816 ===== */

/* WARNING: Removing unreachable block (ram,0x0001e078) */

void FUN_0001de60(string *param_1,string *param_2,int param_3,string *param_4)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  uint uVar2;
  undefined4 uVar3;
  size_t __n;
  string *psVar4;
  string *psVar5;
  string *psVar6;
  string *psVar7;
  string *extraout_r12;
  string *extraout_r12_00;
  string *extraout_r12_01;
  bool bVar8;
  undefined8 uVar9;
  string *local_60;
  string *local_58;
  uint local_50 [4];
  string *local_40;
  undefined4 local_3c;
  uint local_38 [5];
  
  if (0x180 < (int)param_2 - (int)param_1) {
    local_60 = param_2;
    if (param_3 != 0) {
      psVar5 = param_1 + 0x18;
LAB_0001de9c:
      psVar6 = param_2 + -0x18;
      param_3 = param_3 + -1;
      psVar4 = param_1 + ((((int)param_2 - (int)param_1 >> 3) * -0x55555555) / 2) * 0x18;
      iVar1 = (*(code *)param_4)(psVar5,psVar4);
      local_60 = psVar5;
      psVar7 = param_2;
      if (iVar1 == 0) {
        iVar1 = (*(code *)param_4)(psVar5,psVar6);
        if (iVar1 == 0) {
          iVar1 = (*(code *)param_4)(psVar4,psVar6);
          if (iVar1 != 0) goto LAB_0001df00;
          goto LAB_0001e140;
        }
      }
      else {
        iVar1 = (*(code *)param_4)(psVar4);
        if (iVar1 != 0) {
LAB_0001e140:
          std::__cxx11::string::swap(param_1);
          goto LAB_0001df14;
        }
        iVar1 = (*(code *)param_4)(psVar5,psVar6);
        if (iVar1 != 0) {
LAB_0001df00:
          std::__cxx11::string::swap(param_1);
          goto LAB_0001df14;
        }
      }
      std::__cxx11::string::swap(param_1);
LAB_0001df14:
      do {
        iVar1 = (*(code *)param_4)(local_60,param_1);
        if (iVar1 == 0) {
          do {
            psVar7 = psVar7 + -0x18;
            iVar1 = (*(code *)param_4)(param_1,psVar7);
          } while (iVar1 != 0);
          if (psVar7 <= local_60) goto LAB_0001df68;
          std::__cxx11::string::swap(local_60);
        }
        local_60 = local_60 + 0x18;
      } while( true );
    }
LAB_0001df94:
    local_40 = param_4;
    uVar9 = FUN_0001dd04(param_1,local_60,&local_40);
    psVar7 = param_1 + 8;
    psVar4 = local_60 + -0x10;
    psVar5 = extraout_r12;
    do {
      psVar6 = *(string **)(local_60 + -0x18);
      bVar8 = psVar6 != psVar4;
      if (bVar8) {
        uVar2 = *(uint *)(local_60 + -0x10);
        local_58 = psVar6;
        local_50[0] = uVar2;
      }
      else {
        uVar2 = *(uint *)(local_60 + -8);
        uVar9 = *(undefined8 *)(local_60 + -0x10);
        psVar6 = *(string **)(local_60 + -4);
        psVar5 = (string *)local_50;
        local_58 = (string *)local_50;
      }
      *(string **)(local_60 + -0x18) = psVar4;
      local_60[-0x10] = (string)0x0;
      if (!bVar8) {
        *(undefined8 *)psVar5 = uVar9;
        *(uint *)(psVar5 + 8) = uVar2;
        *(string **)(psVar5 + 0xc) = psVar6;
      }
      uVar3 = *(undefined4 *)(local_60 + -0x14);
      *(undefined4 *)(local_60 + -0x14) = 0;
      if (*(string **)param_1 == psVar7) {
        __n = *(size_t *)(param_1 + 4);
        iVar1 = 0;
        if (__n != 0) {
          if (__n == 1) {
            local_60[-0x10] = param_1[8];
            iVar1 = *(int *)(param_1 + 4);
            *(int *)(local_60 + -0x14) = iVar1;
            *(undefined1 *)(*(int *)(local_60 + -0x18) + iVar1) = 0;
            psVar5 = *(string **)param_1;
            goto LAB_0001dff4;
          }
          memcpy(psVar4,psVar7,__n);
          iVar1 = *(int *)(param_1 + 4);
        }
        *(int *)(local_60 + -0x14) = iVar1;
        *(undefined1 *)(*(int *)(local_60 + -0x18) + iVar1) = 0;
        psVar5 = *(string **)param_1;
      }
      else {
        *(string **)(local_60 + -0x18) = *(string **)param_1;
        *(undefined4 *)(local_60 + -0x14) = *(undefined4 *)(param_1 + 4);
        *(undefined4 *)(local_60 + -0x10) = *(undefined4 *)(param_1 + 8);
        *(string **)param_1 = psVar7;
        psVar5 = psVar7;
      }
LAB_0001dff4:
      local_38[0] = local_50[0];
      *(undefined4 *)(param_1 + 4) = 0;
      iVar1 = (int)(local_60 + -0x18) - (int)param_1;
      *psVar5 = (string)0x0;
      local_40 = (string *)local_38;
      if (local_58 != (string *)local_50) {
        local_40 = local_58;
      }
      local_50[0] = local_50[0] & 0xffffff00;
      local_3c = uVar3;
      FUN_0001d7dc(param_1,0,(iVar1 >> 3) * -0x55555555,&local_40,param_4);
      uVar3 = extraout_r1;
      psVar5 = extraout_r12_00;
      if (local_40 != (string *)local_38) {
        operator_delete(local_40);
        uVar3 = extraout_r1_00;
        psVar5 = extraout_r12_01;
      }
      uVar9 = CONCAT44(uVar3,(string *)local_50);
      psVar4 = psVar4 + -0x18;
      local_60 = local_60 + -0x18;
    } while (0x18 < iVar1);
  }
  return;
LAB_0001df68:
  FUN_0001de60(local_60,param_2,param_3,param_4);
  if ((int)local_60 - (int)param_1 < 0x181) {
    return;
  }
  param_2 = local_60;
  if (param_3 == 0) goto LAB_0001df94;
  goto LAB_0001de9c;
}



/* ===== FUN_0001e1b8 @ 0001e1b8 size=884 ===== */

char * FUN_0001e1b8(char *param_1,uint param_2)

{
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  *(char **)param_1 = param_1 + 8;
  param_1[8] = '\0';
  if ((param_2 & 1) == 0) {
    if ((param_2 & 0x1000) == 0) {
      std::__cxx11::string::_M_append(param_1,0x3ef3c);
      goto LAB_0001e1f8;
    }
    std::__cxx11::string::_M_append(param_1,0x3ef34);
    if ((param_2 & 2) != 0) goto LAB_0001e270;
joined_r0x0001e204:
    if ((param_2 & 4) != 0) {
      if (0x7fffffffU - *(int *)(param_1 + 4) < 0xf) goto LAB_0001e4a0;
      std::__cxx11::string::_M_append(param_1,0x3ef58);
    }
    if ((param_2 & 8) != 0) {
      if (0x7fffffffU - *(int *)(param_1 + 4) < 0xc) goto LAB_0001e4ac;
      std::__cxx11::string::_M_append(param_1,0x3ef68);
    }
    if ((param_2 & 0x10) != 0) {
      if (0x7fffffffU - *(int *)(param_1 + 4) < 7) goto LAB_0001e4b8;
      std::__cxx11::string::_M_append(param_1,0x3ef78);
    }
    if ((param_2 & 0x40) != 0) {
      if (5 < 0x7fffffffU - *(int *)(param_1 + 4)) {
        std::__cxx11::string::_M_append(param_1,0x3ef80);
        goto joined_r0x0001e35c;
      }
      goto LAB_0001e4d0;
    }
joined_r0x0001e35c:
    if ((param_2 & 0x20) == 0) {
      if ((param_2 & 0x80) == 0) goto joined_r0x0001e3bc;
LAB_0001e390:
      if (3 < 0x7fffffffU - *(int *)(param_1 + 4)) {
        std::__cxx11::string::_M_append(param_1,0x3ef90);
        goto joined_r0x0001e3bc;
      }
      goto LAB_0001e4e8;
    }
    if (0x7fffffffU - *(int *)(param_1 + 4) < 6) goto LAB_0001e4c4;
    std::__cxx11::string::_M_append(param_1,0x3ef88);
    if ((param_2 & 0x80) != 0) goto LAB_0001e390;
joined_r0x0001e3bc:
    if ((param_2 & 0x100) != 0) {
      if (0xd < 0x7fffffffU - *(int *)(param_1 + 4)) {
        std::__cxx11::string::_M_append(param_1,0x3ef98);
        goto joined_r0x0001e3ec;
      }
      goto LAB_0001e4dc;
    }
joined_r0x0001e3ec:
    if ((param_2 & 0x200) == 0) {
joined_r0x0001e244:
      if ((param_2 & 0x400) == 0) {
joined_r0x0001e24c:
        if ((param_2 & 0x800) == 0) {
          return param_1;
        }
        if (0xf < 0x7fffffffU - *(int *)(param_1 + 4)) {
          std::__cxx11::string::_M_append(param_1,0x3efc4);
          return param_1;
        }
        goto LAB_0001e50c;
      }
      if (10 < 0x7fffffffU - *(int *)(param_1 + 4)) {
        std::__cxx11::string::_M_append(param_1,0x3efb8);
        goto joined_r0x0001e24c;
      }
      goto LAB_0001e4f4;
    }
    if (0xc < 0x7fffffffU - *(int *)(param_1 + 4)) {
      std::__cxx11::string::_M_append(param_1,0x3efa8);
      goto joined_r0x0001e244;
    }
  }
  else {
    std::__cxx11::string::_M_append(param_1,0x3ef28);
LAB_0001e1f8:
    if ((param_2 & 2) == 0) goto joined_r0x0001e204;
LAB_0001e270:
    if (0xe < 0x7fffffffU - *(int *)(param_1 + 4)) {
      std::__cxx11::string::_M_append(param_1,0x3ef48);
      goto joined_r0x0001e204;
    }
    std::__throw_length_error("basic_string::append");
LAB_0001e4a0:
    std::__throw_length_error("basic_string::append");
LAB_0001e4ac:
    std::__throw_length_error("basic_string::append");
LAB_0001e4b8:
    std::__throw_length_error("basic_string::append");
LAB_0001e4c4:
    std::__throw_length_error("basic_string::append");
LAB_0001e4d0:
    std::__throw_length_error("basic_string::append");
LAB_0001e4dc:
    std::__throw_length_error("basic_string::append");
LAB_0001e4e8:
    std::__throw_length_error("basic_string::append");
LAB_0001e4f4:
    std::__throw_length_error("basic_string::append");
  }
  std::__throw_length_error("basic_string::append");
LAB_0001e50c:
  std::__throw_length_error("basic_string::append");
  if (param_1 + 8 != *(char **)param_1) {
    operator_delete(*(char **)param_1);
  }
                    /* WARNING: Subroutine does not return */
  __cxa_end_cleanup();
}



/* ===== FUN_0001e52c @ 0001e52c size=12 ===== */

void FUN_0001e52c(void)

{
  puts(
      "\nTuner/Modulator options:\n  -F, --get-freq     query the frequency [VIDIOC_G_FREQUENCY]\n  -f, --set-freq=<freq>\n                     set the frequency to <freq> MHz [VIDIOC_S_FREQUENCY]\n  -T, --get-tuner    query the tuner settings [VIDIOC_G_TUNER]\n  -t, --set-tuner=<mode>\n                     set the audio mode of the tuner [VIDIOC_S_TUNER]\n                     Possible values: mono, stereo, lang2, lang1, bilingual\n  --tuner-index=<idx> Use idx as tuner idx for tuner/modulator commands\n  --list-freq-bands  display all frequency bands for the tuner/modulator\n                     [VIDIOC_ENUM_FREQ_BANDS]\n  --get-modulator    query the modulator settings [VIDIOC_G_MODULATOR]\n  --set-modulator=<txsubchans>\n                     set the sub-carrier modulation [VIDIOC_S_MODULATOR]\n                     <txsubchans> is one of:\n                     mono:\t Modulate as mono\n                     mono-rds:\t Modulate as mono with RDS (radio only)\n                     stereo:\t Modulate as stereo\n                     stereo-rds: Modulate as stereo with RDS (radio only)\n                     bilingual:\t Modulate as bilingual\n                     mono-sap:\t Modulate as mono with Second Audio Program\n                     stereo-sap: Modulate as stereo with Second Audio Program\n  --freq-seek=dir=<0/1>,wrap=<0/1>,spacing=<hz>,low=<freq>,high=<freq>\n                     perform a hardware frequency seek [VIDIOC_S_HW_FREQ_SEEK]\n                     dir is 0 (seek downward) or 1 (seek upward)\n                     wrap is 0 (do not wrap around) or 1 (wrap around)\n                     spacing sets the seek resolution (use 0 for default)\n                     low and high set the low and high seek frequency range in MHz"
      );
  return;
}



/* ===== FUN_0001e538 @ 0001e538 size=852 ===== */

void FUN_0001e538(int param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *__ptr;
  size_t __n;
  char *local_18;
  char *local_14;
  
  if (param_1 == 0xca) {
    DAT_0006d5c8 = strtol(param_2,(char **)0x0,0);
    iVar1 = strcmp(param_2,"stereo");
    if (iVar1 == 0) {
      DAT_0006d5c8 = 2;
    }
    else {
      iVar1 = strcmp(param_2,"stereo-sap");
      if (iVar1 == 0) {
        DAT_0006d5c8 = 6;
      }
      else {
        iVar1 = strcmp(param_2,"bilingual");
        if (iVar1 == 0) {
          DAT_0006d5c8 = 8;
        }
        else {
          iVar1 = strcmp(param_2,"mono");
          if (iVar1 == 0) {
            DAT_0006d5c8 = 1;
          }
          else {
            iVar1 = strcmp(param_2,"mono-sap");
            if (iVar1 == 0) {
              DAT_0006d5c8 = 5;
            }
            else {
              iVar1 = strcmp(param_2,"stereo-rds");
              if (iVar1 == 0) {
                DAT_0006d5c8 = 0x12;
              }
              else {
                iVar1 = strcmp(param_2,"mono-rds");
                if (iVar1 != 0) {
                  __ptr = "Unknown txsubchans value\n";
                  __n = 0x19;
                  goto LAB_0001e868;
                }
                DAT_0006d5c8 = 0x11;
              }
            }
          }
        }
      }
    }
  }
  else if (param_1 < 0xcb) {
    if (param_1 == 0x66) {
      DAT_0006d5c0 = strtod(param_2,(char **)0x0);
      return;
    }
    if (param_1 == 0x74) {
      iVar1 = strcmp(param_2,"stereo");
      if (iVar1 == 0) {
        DAT_00062d88 = 1;
      }
      else {
        iVar1 = strcmp(param_2,"lang1");
        if (iVar1 == 0) {
          DAT_00062d88 = 3;
        }
        else {
          iVar1 = strcmp(param_2,"lang2");
          if (iVar1 == 0) {
            DAT_00062d88 = 2;
          }
          else {
            iVar1 = strcmp(param_2,"bilingual");
            if (iVar1 == 0) {
              DAT_00062d88 = 4;
            }
            else {
              iVar1 = strcmp(param_2,"mono");
              if (iVar1 != 0) {
                __n = 0x13;
                __ptr = "Unknown audio mode\n";
LAB_0001e868:
                fwrite(__ptr,1,__n,stderr);
switchD_0001e758_default:
                puts(
                    "\nTuner/Modulator options:\n  -F, --get-freq     query the frequency [VIDIOC_G_FREQUENCY]\n  -f, --set-freq=<freq>\n                     set the frequency to <freq> MHz [VIDIOC_S_FREQUENCY]\n  -T, --get-tuner    query the tuner settings [VIDIOC_G_TUNER]\n  -t, --set-tuner=<mode>\n                     set the audio mode of the tuner [VIDIOC_S_TUNER]\n                     Possible values: mono, stereo, lang2, lang1, bilingual\n  --tuner-index=<idx> Use idx as tuner idx for tuner/modulator commands\n  --list-freq-bands  display all frequency bands for the tuner/modulator\n                     [VIDIOC_ENUM_FREQ_BANDS]\n  --get-modulator    query the modulator settings [VIDIOC_G_MODULATOR]\n  --set-modulator=<txsubchans>\n                     set the sub-carrier modulation [VIDIOC_S_MODULATOR]\n                     <txsubchans> is one of:\n                     mono:\t Modulate as mono\n                     mono-rds:\t Modulate as mono with RDS (radio only)\n                     stereo:\t Modulate as stereo\n                     stereo-rds: Modulate as stereo with RDS (radio only)\n                     bilingual:\t Modulate as bilingual\n                     mono-sap:\t Modulate as mono with Second Audio Program\n                     stereo-sap: Modulate as stereo with Second Audio Program\n  --freq-seek=dir=<0/1>,wrap=<0/1>,spacing=<hz>,low=<freq>,high=<freq>\n                     perform a hardware frequency seek [VIDIOC_S_HW_FREQ_SEEK]\n                     dir is 0 (seek downward) or 1 (seek upward)\n                     wrap is 0 (do not wrap around) or 1 (wrap around)\n                     spacing sets the seek resolution (use 0 for default)\n                     low and high set the low and high seek frequency range in MHz"
                    );
                    /* WARNING: Subroutine does not return */
                exit(1);
              }
              DAT_00062d88 = 0;
            }
          }
        }
      }
    }
  }
  else {
    local_14 = param_2;
    if (param_1 == 0xde) {
      while (*local_14 != '\0') {
        uVar2 = FUN_00013b0c(&local_14,&PTR_DAT_0003eee8,&local_18);
        switch(uVar2) {
        case 0:
          DAT_0006d5d4 = strtol(local_18,(char **)0x0,0);
          break;
        case 1:
          DAT_0006d5d8 = strtol(local_18,(char **)0x0,0);
          break;
        case 2:
          DAT_0006d5dc = strtol(local_18,(char **)0x0,0);
          break;
        case 3:
          DAT_0006d600 = strtod(local_18,(char **)0x0);
          break;
        case 4:
          DAT_0006d608 = strtod(local_18,(char **)0x0);
          break;
        default:
          goto switchD_0001e758_default;
        }
      }
    }
    else if (param_1 == 0xe3) {
      DAT_0006d610 = strtoul(param_2,(char **)0x0,0);
    }
  }
  return;
}



/* ===== FUN_0001e8a0 @ 0001e8a0 size=1384 ===== */

void FUN_0001e8a0(undefined4 param_1)

{
  double dVar1;
  char *__format;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  uint in_fpscr;
  uint *local_9c;
  undefined4 local_98;
  uint local_94;
  undefined2 local_90;
  char local_8e;
  undefined1 local_8d;
  undefined4 local_84;
  uint local_80;
  int iStack_7c;
  uint local_78;
  undefined4 local_74;
  undefined4 local_70;
  int iStack_6c;
  uint local_68;
  int iStack_64;
  uint local_60;
  int iStack_5c;
  uint local_58;
  int iStack_54;
  uint local_50;
  int iStack_4c;
  uint local_48;
  int iStack_44;
  
  if ((DAT_00063530 & 0x40000) == 0) {
    uVar4 = 2;
  }
  else {
    uVar4 = 1;
  }
  if ((((DAT_00063366 != '\0' || DAT_00063374 != '\0') || DAT_000633cb != '\0') ||
      DAT_000633ca != '\0') || DAT_000633de != '\0') {
    if ((DAT_00063530 & 0x80000) == 0) {
      if ((DAT_00063530 & 0x10000) == 0) {
        dVar1 = 16.0;
      }
      else {
        DAT_0006d658 = DAT_0006d610;
        iVar2 = FUN_00013938(param_1,0xc054561d,&DAT_0006d658,"VIDIOC_G_TUNER");
        if (iVar2 == 0) {
          uVar4 = DAT_0006d67c;
          dVar1 = DAT_0001edb0;
          if (((DAT_0006d680 & 1) == 0) && (dVar1 = DAT_0001edb8, (DAT_0006d680 & 0x1000) == 0)) {
            dVar1 = 16.0;
          }
        }
        else {
          dVar1 = 16.0;
        }
      }
    }
    else {
      DAT_0006d614 = DAT_0006d610;
      iVar2 = FUN_00013938(param_1,0xc0445636,&DAT_0006d614,"VIDIOC_G_MODULATOR");
      if (iVar2 == 0) {
        uVar4 = DAT_0006d638 & 1;
        dVar1 = DAT_0001edb0;
        if (((DAT_0006d638 & 1) == 0) &&
           (uVar4 = 1, dVar1 = DAT_0001edb8, (DAT_0006d638 & 0x1000) == 0)) {
          dVar1 = 16.0;
        }
      }
      else {
        uVar4 = 1;
        dVar1 = 16.0;
      }
    }
    if (DAT_00063366 != '\0') {
      DAT_0006d6b4 = (uint)(0.0 < dVar1 * DAT_0006d5c0) * (int)(longlong)(dVar1 * DAT_0006d5c0);
      DAT_0006d6ac = DAT_0006d610;
      DAT_0006d6b0 = uVar4;
      iVar2 = FUN_00013938(param_1,0x402c5639,&DAT_0006d6ac,"VIDIOC_S_FREQUENCY");
      if (iVar2 == 0) {
        VectorUnsignedToFloat(DAT_0006d6b4,(byte)(in_fpscr >> 0x16) & 3);
        printf("Frequency for tuner %d set to %d (%f MHz)\n",DAT_0006d6ac);
      }
    }
    if (DAT_00063374 != '\0') {
      memset(&local_80,0,0x50);
      local_84 = DAT_0006d610;
      iVar2 = FUN_00013938(param_1,0xc054561d,&local_84,"VIDIOC_G_TUNER");
      if (iVar2 == 0) {
        iStack_4c = DAT_00062d88;
        FUN_00013938(param_1,0x4054561e,&local_84,"VIDIOC_S_TUNER");
      }
    }
    if (DAT_000633cb != '\0') {
      local_78 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      local_74 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      local_70 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      iStack_7c = 0;
      iStack_6c = 0;
      iStack_64 = 0;
      iStack_5c = 0;
      iStack_54 = 0;
      iStack_4c = 0;
      local_84 = DAT_0006d610;
      local_80 = uVar4;
      local_68 = local_78;
      local_60 = local_78;
      local_58 = local_78;
      local_50 = local_78;
      local_48 = local_78;
      puts("ioctl: VIDIOC_ENUM_FREQ_BANDS");
      while (iVar2 = FUN_0001391c(param_1,0xc0405665,&local_84), -1 < iVar2) {
        if (iStack_7c != 0) {
          putchar(10);
        }
        printf("\tIndex          : %d\n",iStack_7c);
        if (iStack_6c == 4) {
          uVar3 = 0x4d46;
LAB_0001ed90:
          local_98 = 2;
          local_94._0_3_ = (uint3)uVar3;
        }
        else {
          if (iStack_6c == 8) {
            uVar3 = 0x4d41;
            goto LAB_0001ed90;
          }
          if (iStack_6c == 2) {
            local_98 = 3;
            local_94 = DAT_0003f7cc & 0xffffff;
          }
          else {
            local_98 = 7;
            local_94._0_1_ = s_Unknown_0003f7d0[0];
            local_94._1_1_ = s_Unknown_0003f7d0[1];
            local_94._2_1_ = s_Unknown_0003f7d0[2];
            local_94._3_1_ = s_Unknown_0003f7d0[3];
            local_90 = (undefined2)s_Unknown_0003f7d0._4_4_;
            local_8e = SUB41(s_Unknown_0003f7d0._4_4_,2);
            local_8d = 0;
          }
        }
        local_9c = &local_94;
        printf("\tModulation     : %s\n",&local_94);
        if (local_9c != &local_94) {
          operator_delete(local_9c);
        }
        FUN_0001e1b8(&local_9c,local_78);
        printf("\tCapability     : %s\n",local_9c);
        if (local_9c != &local_94) {
          operator_delete(local_9c);
        }
        VectorUnsignedToFloat(local_74,(byte)(in_fpscr >> 0x16) & 3);
        VectorUnsignedToFloat(local_70,(byte)(in_fpscr >> 0x16) & 3);
        if ((local_78 & 1) == 0) {
          if ((local_78 & 0x1000) != 0) {
            __format = "\tFrequency Range: %.6f MHz - %.6f MHz\n";
            goto LAB_0001eb64;
          }
          printf("\tFrequency Range: %.3f MHz - %.3f MHz\n");
        }
        else {
          __format = "\tFrequency Range: %.3f MHz - %.3f MHz\n";
LAB_0001eb64:
          printf(__format);
        }
        iStack_7c = iStack_7c + 1;
      }
    }
    if (DAT_000633ca != '\0') {
      iStack_7c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      local_78 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      local_74 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_84 = DAT_0006d610;
      local_80 = 0;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      iStack_6c = iStack_7c;
      iStack_64 = iStack_7c;
      iStack_5c = iStack_7c;
      iStack_54 = iStack_7c;
      iStack_4c = iStack_7c;
      iStack_44 = iStack_7c;
      iVar2 = FUN_00013938(param_1,0xc0445636,&local_84,"VIDIOC_G_MODULATOR");
      if (iVar2 == 0) {
        iStack_54 = DAT_0006d5c8;
        FUN_00013938(param_1,0x40445637,&local_84,"VIDIOC_S_MODULATOR");
      }
    }
    if (DAT_000633de != '\0') {
      DAT_0006d5cc = DAT_0006d610;
      DAT_0006d5e0 = (uint)(0.0 < dVar1 * DAT_0006d600) * (int)(longlong)(dVar1 * DAT_0006d600);
      DAT_0006d5e4 = (uint)(0.0 < dVar1 * DAT_0006d608) * (int)(longlong)(dVar1 * DAT_0006d608);
      DAT_0006d5d0 = uVar4;
      FUN_00013938(param_1,0x40305652,&DAT_0006d5cc,"VIDIOC_S_HW_FREQ_SEEK");
    }
  }
  return;
}



/* ===== FUN_0001ee3c @ 0001ee3c size=1852 ===== */

void FUN_0001ee3c(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined **extraout_r3;
  undefined **ppuVar4;
  uint in_fpscr;
  double dVar5;
  double dVar6;
  undefined1 *local_8c;
  int local_88;
  undefined1 local_84 [16];
  undefined4 local_74;
  undefined1 auStack_70 [32];
  uint local_50;
  uint local_4c;
  undefined4 local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  if (DAT_00063346 != '\0') {
    if ((DAT_00063530 & 0x80000) == 0) {
      DAT_0006d658 = DAT_0006d610;
      DAT_0006d6b0 = 2;
      iVar2 = FUN_00013938(param_1,0xc054561d,&DAT_0006d658,"VIDIOC_G_TUNER");
      if (iVar2 != 0) goto LAB_0001eeac;
      dVar5 = DAT_0001f350;
      if (((DAT_0006d680 & 1) == 0) && (dVar5 = DAT_0001f358, (DAT_0006d680 & 0x1000) == 0)) {
        dVar5 = 16.0;
      }
      DAT_0006d6b0 = DAT_0006d67c;
    }
    else {
      DAT_0006d614 = DAT_0006d610;
      DAT_0006d6b0 = 1;
      iVar2 = FUN_00013938(param_1,0xc0445636,&DAT_0006d614,"VIDIOC_G_MODULATOR");
      if ((iVar2 != 0) ||
         ((dVar5 = DAT_0001f350, (DAT_0006d638 & 1) == 0 &&
          (dVar5 = DAT_0001f358, (DAT_0006d638 & 0x1000) == 0)))) {
LAB_0001eeac:
        dVar5 = 16.0;
      }
    }
    DAT_0006d6ac = DAT_0006d610;
    iVar2 = FUN_00013938(param_1,0xc02c5638,DAT_0001f370,"VIDIOC_G_FREQUENCY");
    if (iVar2 == 0) {
      dVar6 = (double)VectorUnsignedToFloat(DAT_0006d6b4,(byte)(in_fpscr >> 0x16) & 3);
      pcVar3 = "get-tuner";
      if ((DAT_00063530 & 0x80000) != 0) {
        pcVar3 = "get-modulator";
      }
      printf("Frequency for %s %d: %d (%f MHz)\n",pcVar3 + 4,DAT_0006d6ac,DAT_0006d6b4,dVar6 / dVar5
            );
    }
  }
  if (DAT_00063354 != '\0') {
    memset(auStack_70,0,0x50);
    local_74 = DAT_0006d610;
    iVar2 = FUN_00013938(param_1,0xc054561d,&local_74,"VIDIOC_G_TUNER");
    if (iVar2 != 0) goto LAB_0001ef28;
    printf("Tuner %d:\n",local_74);
    printf("\tName                 : %s\n",auStack_70);
    if (local_50 - 1 < 5) {
      pcVar3 = (&PTR_s_radio_0003ef00)[local_50 - 1];
    }
    else {
      pcVar3 = "unknown";
    }
    printf("\tType                 : %s\n",pcVar3);
    FUN_0001e1b8(&local_8c,local_4c);
    printf("\tCapabilities         : %s\n",local_8c);
    if (local_8c != local_84) {
      operator_delete(local_8c);
    }
    VectorUnsignedToFloat(local_48,(byte)(in_fpscr >> 0x16) & 3);
    dVar5 = (double)VectorUnsignedToFloat(local_44,(byte)(in_fpscr >> 0x16) & 3);
    if ((local_4c & 1) == 0) {
      if ((local_4c & 0x1000) != 0) {
        pcVar3 = "\tFrequency range      : %.6f MHz - %.6f MHz\n";
        dVar6 = DAT_0001f358;
        goto LAB_0001f328;
      }
      dVar5 = dVar5 * DAT_0001f360;
      printf("\tFrequency range      : %.3f MHz - %.3f MHz\n");
    }
    else {
      pcVar3 = "\tFrequency range      : %.3f MHz - %.3f MHz\n";
      dVar6 = DAT_0001f350;
LAB_0001f328:
      dVar5 = dVar5 / dVar6;
      printf(pcVar3);
    }
    if (local_50 - 4 < 2) goto LAB_0001ef28;
    dVar6 = (double)VectorSignedToFloat(local_38,(byte)(in_fpscr >> 0x16) & 3);
    printf("\tSignal strength/AFC  : %d%%/%d\n",(int)(longlong)(dVar6 / DAT_0001f368 + 0.5),local_34
           ,local_50 - 4,dVar5);
    if (local_3c < 5) {
      ppuVar4 = &PTR_DAT_0003eee8 + local_3c;
      pcVar3 = (&PTR_DAT_0003ef14)[local_3c];
    }
    else {
      pcVar3 = "unknown";
      ppuVar4 = extraout_r3;
    }
    printf("\tCurrent audio mode   : %s\n",pcVar3,local_3c,ppuVar4,dVar5);
    uVar1 = local_40;
    local_88 = 0;
    local_84[0] = 0;
    local_8c = local_84;
    if ((local_40 & 1) != 0) goto LAB_0001f518;
    if ((local_40 & 2) != 0) {
      do {
        std::__cxx11::string::_M_append((char *)&local_8c,0x3ef78);
        do {
          if ((uVar1 & 8) == 0) goto LAB_0001f2a4;
          if (5 < 0x7fffffffU - local_88) goto LAB_0001f4c4;
          std::__throw_length_error("basic_string::append");
LAB_0001f518:
          std::__cxx11::string::_M_append((char *)&local_8c,0x3f9c4);
        } while ((uVar1 & 2) == 0);
      } while (6 < 0x7fffffffU - local_88);
      std::__throw_length_error("basic_string::append");
      goto LAB_0001f554;
    }
    if ((local_40 & 8) != 0) {
LAB_0001f4c4:
      std::__cxx11::string::_M_append((char *)&local_8c,0x3ef80);
    }
LAB_0001f2a4:
    if ((uVar1 & 4) == 0) {
LAB_0001f2ac:
      if ((uVar1 & 0x10) == 0) {
LAB_0001f2b4:
        printf("\tAvailable subchannels: %s\n",local_8c);
        if (local_8c != local_84) {
          operator_delete(local_8c);
        }
        goto LAB_0001ef28;
      }
      if (3 < 0x7fffffffU - local_88) {
        std::__cxx11::string::_M_append((char *)&local_8c,0x3ef90);
        goto LAB_0001f2b4;
      }
      goto LAB_0001f560;
    }
    if (5 < 0x7fffffffU - local_88) {
      std::__cxx11::string::_M_append((char *)&local_8c,0x3ef88);
      goto LAB_0001f2ac;
    }
LAB_0001f56c:
    std::__throw_length_error("basic_string::append");
LAB_0001f578:
    std::__throw_length_error("basic_string::append");
    if (local_8c != local_84) {
      operator_delete(local_8c);
    }
                    /* WARNING: Subroutine does not return */
    __cxa_end_cleanup();
  }
LAB_0001ef28:
  if (DAT_000633c9 == '\0') {
    return;
  }
  memset(&local_74,0,0x44);
  DAT_0006d614 = DAT_0006d610;
  iVar2 = FUN_00013938(param_1,0xc0445636,&local_74,"VIDIOC_G_MODULATOR");
  if (iVar2 != 0) {
    return;
  }
  printf("Modulator %d:\n",DAT_0006d614);
  printf("\tName                 : %s\n",auStack_70);
  if (local_40 - 1 < 5) {
    pcVar3 = (&PTR_s_radio_0003ef00)[local_40 - 1];
  }
  else {
    pcVar3 = "unknown";
  }
  printf("\tType                 : %s\n",pcVar3);
  FUN_0001e1b8(&local_8c,local_50);
  printf("\tCapabilities         : %s\n",local_8c);
  if (local_8c != local_84) {
    operator_delete(local_8c);
  }
  VectorUnsignedToFloat(local_4c,(byte)(in_fpscr >> 0x16) & 3);
  VectorUnsignedToFloat(local_48,(byte)(in_fpscr >> 0x16) & 3);
  if ((local_50 & 1) != 0) goto LAB_0001f45c;
  if ((local_50 & 0x1000) != 0) {
    pcVar3 = "\tFrequency range      : %.6f MHz - %.6f MHz\n";
    goto LAB_0001f304;
  }
  printf("\tFrequency range      : %.1f MHz - %.1f MHz\n");
  while( true ) {
    uVar1 = local_44;
    local_88 = 0;
    local_84[0] = 0;
    local_8c = local_84;
    if ((local_44 & 1) != 0) goto LAB_0001f420;
    if ((local_44 & 2) == 0) break;
    do {
      std::__cxx11::string::_M_append((char *)&local_8c,0x3ef78);
      do {
        if ((uVar1 & 8) == 0) goto LAB_0001f0cc;
        if (9 < 0x7fffffffU - local_88) goto LAB_0001f3cc;
        std::__throw_length_error("basic_string::append");
LAB_0001f420:
        std::__cxx11::string::_M_append((char *)&local_8c,0x3f9c4);
      } while ((uVar1 & 2) == 0);
    } while (6 < 0x7fffffffU - local_88);
    std::__throw_length_error("basic_string::append");
LAB_0001f45c:
    pcVar3 = "\tFrequency range      : %.1f MHz - %.1f MHz\n";
LAB_0001f304:
    printf(pcVar3);
  }
  if ((local_44 & 8) != 0) {
LAB_0001f3cc:
    std::__cxx11::string::_M_append((char *)&local_8c,0x3fa28);
  }
LAB_0001f0cc:
  if ((uVar1 & 4) != 0) {
    if (0x7fffffffU - local_88 < 4) {
LAB_0001f554:
      std::__throw_length_error("basic_string::append");
LAB_0001f560:
      std::__throw_length_error("basic_string::append");
      goto LAB_0001f56c;
    }
    std::__cxx11::string::_M_append((char *)&local_8c,0x3fa34);
  }
  if ((uVar1 & 0x10) != 0) {
    if (0x7fffffffU - local_88 < 4) goto LAB_0001f578;
    std::__cxx11::string::_M_append((char *)&local_8c,0x3ef90);
  }
  printf("\tSubchannel modulation: %s\n",local_8c);
  if (local_8c != local_84) {
    operator_delete(local_8c);
  }
  return;
}



/* ===== FUN_0001f5c8 @ 0001f5c8 size=12 ===== */

void FUN_0001f5c8(void)

{
  puts(
      "\nInput/Output options:\n  -I, --get-input    query the video input [VIDIOC_G_INPUT]\n  -i, --set-input=<num>\n                     set the video input to <num> [VIDIOC_S_INPUT]\n  -N, --list-outputs display video outputs [VIDIOC_ENUMOUTPUT]\n  -n, --list-inputs  display video inputs [VIDIOC_ENUMINPUT]\n  -O, --get-output   query the video output [VIDIOC_G_OUTPUT]\n  -o, --set-output=<num>\n                     set the video output to <num> [VIDIOC_S_OUTPUT]\n  --set-audio-output=<num>\n                     set the audio output to <num> [VIDIOC_S_AUDOUT]\n  --get-audio-input  query the audio input [VIDIOC_G_AUDIO]\n  --set-audio-input=<num>\n                     set the audio input to <num> [VIDIOC_S_AUDIO]\n  --get-audio-output query the audio output [VIDIOC_G_AUDOUT]\n  --set-audio-output=<num>\n                     set the audio output to <num> [VIDIOC_S_AUDOUT]\n  --list-audio-outputs\n                     display audio outputs [VIDIOC_ENUMAUDOUT]\n  --list-audio-inputs\n                     display audio inputs [VIDIOC_ENUMAUDIO]"
      );
  return;
}



/* ===== FUN_0001f5d4 @ 0001f5d4 size=168 ===== */

void FUN_0001f5d4(int param_1,char *param_2)

{
  if (param_1 == 0x6f) {
    DAT_0006d6dc = strtol(param_2,(char **)0x0,0);
    return;
  }
  if (param_1 < 0x70) {
    if (param_1 != 0x69) {
      return;
    }
    DAT_0006d6d8 = strtol(param_2,(char **)0x0,0);
    return;
  }
  if (param_1 == 0xbc) {
    DAT_0006d6e0 = strtol(param_2,(char **)0x0,0);
    return;
  }
  if (param_1 != 0xbe) {
    return;
  }
  DAT_0006d714 = strtol(param_2,(char **)0x0,0);
  return;
}



/* ===== FUN_0001f67c @ 0001f67c size=68 ===== */

int * FUN_0001f67c(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_0001f6c0;
  if (param_2 != 0) {
    FUN_00014958(param_1,param_2,&DAT_0003fa98);
    return param_1;
  }
  *param_1 = (int)(param_1 + 2);
  std::__cxx11::string::_M_construct<char_const*>(param_1,iVar1 + -2,iVar1,0);
  return param_1;
}



/* ===== FUN_0001f6c4 @ 0001f6c4 size=492 ===== */

void FUN_0001f6c4(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  undefined1 *local_78 [2];
  undefined1 auStack_70 [16];
  undefined4 local_60;
  undefined1 auStack_5c [32];
  int local_3c;
  undefined4 local_28;
  
  if ((DAT_00063369 != '\0') &&
     (iVar1 = FUN_00013938(param_1,0xc0045627,&DAT_0006d6d8,"VIDIOC_S_INPUT"), iVar1 == 0)) {
    printf("Video input set to %d",DAT_0006d6d8);
    local_60 = DAT_0006d6d8;
    iVar1 = FUN_0001391c(param_1,0xc050561a,&local_60);
    if (-1 < iVar1) {
      if (local_3c - 1U < 3) {
        pcVar2 = (&PTR_s_Tuner_0003fb18)[local_3c - 1U];
      }
      else {
        pcVar2 = "Unknown";
      }
      FUN_0001f67c(local_78,local_28);
      printf(" (%s: %s, %s)",auStack_5c,pcVar2,local_78[0]);
      if (local_78[0] != auStack_70) {
        operator_delete(local_78[0]);
      }
    }
    putchar(10);
  }
  if ((DAT_0006336f != '\0') &&
     (iVar1 = FUN_00013938(param_1,0xc004562f,&DAT_0006d6dc,"VIDIOC_S_OUTPUT"), iVar1 == 0)) {
    printf("Output set to %d\n",DAT_0006d6dc);
  }
  if ((DAT_000633bc != '\0') &&
     (iVar1 = FUN_00013938(param_1,0x40345622,&DAT_0006d6e0,"VIDIOC_S_AUDIO"), iVar1 == 0)) {
    printf("Audio input set to %d\n",DAT_0006d6e0);
  }
  if ((DAT_000633be != '\0') &&
     (iVar1 = FUN_00013938(param_1,0x40345632,&DAT_0006d714,0x40000), iVar1 == 0)) {
    printf("Audio output set to %d\n",DAT_0006d714);
    return;
  }
  return;
}



/* ===== FUN_0001f8c8 @ 0001f8c8 size=520 ===== */

void FUN_0001f8c8(undefined4 param_1)

{
  int iVar1;
  undefined1 *local_78 [2];
  undefined1 auStack_70 [16];
  undefined4 local_60;
  undefined1 auStack_5c [52];
  undefined4 local_28;
  
  if ((DAT_00063349 != '\0') &&
     (iVar1 = FUN_00013938(param_1,0x80045626,&DAT_0006d6d8,"VIDIOC_G_INPUT"), iVar1 == 0)) {
    printf("Video input : %d",DAT_0006d6d8);
    local_60 = DAT_0006d6d8;
    iVar1 = FUN_0001391c(param_1,0xc050561a,&local_60);
    if (-1 < iVar1) {
      FUN_0001f67c(local_78,local_28);
      printf(" (%s: %s)",auStack_5c,local_78[0]);
      if (local_78[0] != auStack_70) {
        operator_delete(local_78[0]);
      }
    }
    putchar(10);
  }
  if ((DAT_0006334f != '\0') &&
     (iVar1 = FUN_00013938(param_1,0x8004562e,&DAT_0006d6dc,"VIDIOC_G_OUTPUT"), iVar1 == 0)) {
    printf("Video output: %d",DAT_0006d6dc);
    local_60 = DAT_0006d6dc;
    iVar1 = FUN_0001391c(param_1,0xc0485630,&local_60);
    if (-1 < iVar1) {
      printf(" (%s)",auStack_5c);
    }
    putchar(10);
  }
  if ((DAT_000633bb != '\0') &&
     (iVar1 = FUN_00013938(param_1,0x80345621,&DAT_0006d6e0,"VIDIOC_G_AUDIO"), iVar1 == 0)) {
    printf("Audio input : %d (%s)\n",DAT_0006d6e0,&DAT_0006d6e4);
  }
  if ((DAT_000633bd != '\0') &&
     (iVar1 = FUN_00013938(param_1,0x80345631,&DAT_0006d714,"VIDIOC_G_AUDOUT"), iVar1 == 0)) {
    printf("Audio output: %d (%s)\n",DAT_0006d714,&DAT_0006d718);
    return;
  }
  return;
}



/* ===== FUN_0001fae8 @ 0001fae8 size=1144 ===== */

void FUN_0001fae8(undefined4 param_1)

{
  ulonglong uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined1 *local_98 [2];
  undefined1 auStack_90 [16];
  int local_80;
  undefined1 auStack_7c [32];
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  int local_48;
  int local_44;
  
  if (DAT_0006336e != '\0') {
    local_80 = 0;
    puts("ioctl: VIDIOC_ENUMINPUT");
    while (iVar2 = FUN_0001391c(param_1,0xc050561a,&local_80), -1 < iVar2) {
      if (local_80 != 0) {
        putchar(10);
      }
      printf("\tInput       : %d\n",local_80);
      printf("\tName        : %s\n",auStack_7c);
      if (local_5c - 1U < 3) {
        pcVar3 = (&PTR_s_Tuner_0003fb18)[local_5c - 1U];
      }
      else {
        pcVar3 = "Unknown";
      }
      printf("\tType        : 0x%08X (%s)\n",local_5c,pcVar3);
      printf("\tAudioset    : 0x%08X\n",local_58);
      printf("\tTuner       : 0x%08X\n",local_54);
      uVar1 = (ulonglong)local_50 >> 0x20;
      uVar4 = (undefined4)local_50;
      FUN_000146dc(local_98);
      printf("\tStandard    : 0x%016llX (%s)\n",local_98[0],uVar4,(int)uVar1,local_98[0]);
      if (local_98[0] != auStack_90) {
        operator_delete(local_98[0]);
      }
      iVar2 = local_48;
      FUN_0001f67c(local_98,local_48);
      printf("\tStatus      : 0x%08X (%s)\n",iVar2,local_98[0]);
      if (local_98[0] != auStack_90) {
        operator_delete(local_98[0]);
      }
      iVar2 = local_44;
      if (local_44 == 0) {
        local_98[0] = auStack_90;
        std::__cxx11::string::_M_construct<char_const*>(local_98,DAT_0001ff98 + -0xb,DAT_0001ff98,0)
        ;
      }
      else {
        FUN_00014958(local_98,local_44,DAT_0001ff94);
      }
      printf("\tCapabilities: 0x%08X (%s)\n",iVar2,local_98[0]);
      if (local_98[0] != auStack_90) {
        operator_delete(local_98[0]);
      }
      local_80 = local_80 + 1;
    }
  }
  if (DAT_0006334e != '\0') {
    local_80 = 0;
    puts("ioctl: VIDIOC_ENUMOUTPUT");
    while (iVar2 = FUN_0001391c(param_1,0xc0485630,&local_80), -1 < iVar2) {
      if (local_80 != 0) {
        putchar(10);
      }
      printf("\tOutput      : %d\n",local_80);
      printf("\tName        : %s\n",auStack_7c);
      if (local_5c - 1U < 3) {
        pcVar3 = (&PTR_s_Modulator_0003fb44)[local_5c - 1U];
      }
      else {
        pcVar3 = "Unknown";
      }
      printf("\tType        : 0x%08X (%s)\n",local_5c,pcVar3);
      printf("\tAudioset    : 0x%08X\n",local_58);
      uVar1 = (ulonglong)local_50 >> 0x20;
      uVar4 = (undefined4)local_50;
      FUN_000146dc(local_98);
      printf("\tStandard    : 0x%016llX (%s)\n",local_98[0],uVar4,(int)uVar1,local_98[0]);
      if (local_98[0] != auStack_90) {
        operator_delete(local_98[0]);
      }
      iVar2 = local_48;
      if (local_48 == 0) {
        local_98[0] = auStack_90;
        std::__cxx11::string::_M_construct<char_const*>(local_98,DAT_0001ff98 + -0xb,DAT_0001ff98,0)
        ;
      }
      else {
        FUN_00014958(local_98,local_48,DAT_0001ff9c);
      }
      printf("\tCapabilities: 0x%08X (%s)\n",iVar2,local_98[0]);
      if (local_98[0] != auStack_90) {
        operator_delete(local_98[0]);
      }
      local_80 = local_80 + 1;
    }
  }
  if (DAT_000633c0 != '\0') {
    local_80 = 0;
    puts("ioctl: VIDIOC_ENUMAUDIO");
    while (iVar2 = FUN_0001391c(param_1,0xc0345641,&local_80), -1 < iVar2) {
      if (local_80 != 0) {
        putchar(10);
      }
      printf("\tInput   : %d\n",local_80);
      printf("\tName    : %s\n",auStack_7c);
      local_80 = local_80 + 1;
    }
  }
  if (DAT_000633bf != '\0') {
    local_80 = 0;
    puts("ioctl: VIDIOC_ENUMAUDOUT");
    while (iVar2 = FUN_0001391c(param_1,0xc0345642,&local_80), -1 < iVar2) {
      if (local_80 != 0) {
        putchar(10);
      }
      printf("\tOutput  : %d\n",local_80);
      printf("\tName    : %s\n",auStack_7c);
      local_80 = local_80 + 1;
    }
  }
  return;
}



/* ===== FUN_0001ffa0 @ 0001ffa0 size=184 ===== */

uint FUN_0001ffa0(char **param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  char *local_14;
  
  uVar1 = getsubopt(param_1,&PTR_s_width_00040378,&local_14);
  if (uVar1 == 0xffffffff) {
    fwrite("Invalid suboptions specified\n",1,0x1d,stderr);
LAB_00020020:
    puts(
        "\nStandards/Timings options:\n  --list-standards   display supported video standards [VIDIOC_ENUMSTD]\n  -S, --get-standard\n                     query the video standard [VIDIOC_G_STD]\n  -s, --set-standard=<num>\n                     set the video standard to <num> [VIDIOC_S_STD]\n                     <num> a numerical v4l2_std value, or one of:\n                     pal or pal-X (X = B/G/H/N/Nc/I/D/K/M/60) (V4L2_STD_PAL)\n                     ntsc or ntsc-X (X = M/J/K) (V4L2_STD_NTSC)\n                     secam or secam-X (X = B/G/H/D/K/L/Lc) (V4L2_STD_SECAM)\n  --get-detected-standard\n                     display detected input video standard [VIDIOC_QUERYSTD]\n  --list-dv-timings  list supp. standard dv timings [VIDIOC_ENUM_DV_TIMINGS]\n  --set-dv-bt-timings\n                     query: use the output of VIDIOC_QUERY_DV_TIMINGS\n                     index=<index>: use the index as provided by --list-dv-timings\n                     or specify timings using cvt/gtf options as follows:\n                     cvt/gtf,width=<width>,height=<height>,fps=<frames per sec>\n                     interlaced=<0/1>,reduced-blanking=<0/1/2>,reduced-fps=<0/1>\n                     The value of reduced-blanking, if greater than 0, indicates\n                     that reduced blanking is to be used and the value indicate the\n                     version. For gtf, there is no version 2 for reduced blanking, and\n\t\t     the value 1 or 2 will give same results.\n\t\t     reduced-fps = 1, slows down pixel clock by factor of 1000 / 1001, allowing\n\t\t     to support NTSC frame rates like 29.97 or 59.94.\n\t\t     Reduced fps flag takes effect only with reduced blanking version 2 and,\n\t\t     when refresh rate is an integer multiple of 6, say, fps = 24,30,60 etc.\n                     or update all or part of the current timings fields:\n                     width=<width>,height=<height>,interlaced=<0/1>,\n                     polarities=<polarities mask>,pixelclock=<pixelclock Hz>,\n                     hfp=<horizontal front porch>,hs=<horizontal sync>,\n         ..." /* TRUNCATED STRING LITERAL */
        );
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (local_14 == (char *)0x0) {
    bVar3 = 0x13 < uVar1;
    if (uVar1 != 0x14) {
      bVar3 = uVar1 != 0xf;
    }
    if (bVar3 && (uVar1 != 0x14 && uVar1 != 0x10)) {
      fprintf(stderr,"No value given to suboption <%s>\n",(&PTR_s_width_00040378)[uVar1]);
      goto LAB_00020020;
    }
  }
  else {
    lVar2 = strtol(local_14,(char **)0x0,0);
    *param_2 = lVar2;
  }
  return uVar1;
}



/* ===== FUN_00020058 @ 00020058 size=292 ===== */

void FUN_00020058(char *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  char *local_28;
  int local_24;
  
  local_28 = param_1;
  if (*param_1 == '\0') {
    iVar2 = 0;
    bVar7 = false;
    iVar3 = 0;
    iVar4 = 0;
    iVar5 = 0;
    iVar6 = 0;
  }
  else {
    iVar2 = 0;
    bVar7 = false;
    iVar6 = 0;
    iVar5 = 0;
    iVar4 = 0;
    iVar3 = 0;
    do {
      uVar1 = FUN_0001ffa0(&local_28,&local_24);
      switch(uVar1) {
      case 0:
        iVar3 = local_24;
        break;
      case 1:
        iVar4 = local_24;
        break;
      case 2:
        bVar7 = local_24 != 0;
        break;
      case 0x11:
        iVar5 = local_24;
        break;
      case 0x12:
        iVar6 = local_24;
        break;
      case 0x13:
        iVar2 = local_24;
        if (local_24 != 0) {
          iVar2 = 1;
        }
      }
    } while (*local_28 != '\0');
  }
  if (param_2 == 4) {
    iVar2 = FUN_0002fb94(iVar3,iVar4,iVar5,iVar6,bVar7,iVar2,DAT_000201cc);
  }
  else {
    iVar2 = FUN_0003018c(iVar3,iVar4,iVar5,iVar6 != 0,bVar7,DAT_000201cc);
  }
  if (iVar2 != 0) {
    return;
  }
  puts(
      "\nStandards/Timings options:\n  --list-standards   display supported video standards [VIDIOC_ENUMSTD]\n  -S, --get-standard\n                     query the video standard [VIDIOC_G_STD]\n  -s, --set-standard=<num>\n                     set the video standard to <num> [VIDIOC_S_STD]\n                     <num> a numerical v4l2_std value, or one of:\n                     pal or pal-X (X = B/G/H/N/Nc/I/D/K/M/60) (V4L2_STD_PAL)\n                     ntsc or ntsc-X (X = M/J/K) (V4L2_STD_NTSC)\n                     secam or secam-X (X = B/G/H/D/K/L/Lc) (V4L2_STD_SECAM)\n  --get-detected-standard\n                     display detected input video standard [VIDIOC_QUERYSTD]\n  --list-dv-timings  list supp. standard dv timings [VIDIOC_ENUM_DV_TIMINGS]\n  --set-dv-bt-timings\n                     query: use the output of VIDIOC_QUERY_DV_TIMINGS\n                     index=<index>: use the index as provided by --list-dv-timings\n                     or specify timings using cvt/gtf options as follows:\n                     cvt/gtf,width=<width>,height=<height>,fps=<frames per sec>\n                     interlaced=<0/1>,reduced-blanking=<0/1/2>,reduced-fps=<0/1>\n                     The value of reduced-blanking, if greater than 0, indicates\n                     that reduced blanking is to be used and the value indicate the\n                     version. For gtf, there is no version 2 for reduced blanking, and\n\t\t     the value 1 or 2 will give same results.\n\t\t     reduced-fps = 1, slows down pixel clock by factor of 1000 / 1001, allowing\n\t\t     to support NTSC frame rates like 29.97 or 59.94.\n\t\t     Reduced fps flag takes effect only with reduced blanking version 2 and,\n\t\t     when refresh rate is an integer multiple of 6, say, fps = 24,30,60 etc.\n                     or update all or part of the current timings fields:\n                     width=<width>,height=<height>,interlaced=<0/1>,\n                     polarities=<polarities mask>,pixelclock=<pixelclock Hz>,\n                     hfp=<horizontal front porch>,hs=<horizontal sync>,\n         ..." /* TRUNCATED STRING LITERAL */
      );
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_000201d0 @ 000201d0 size=800 ===== */

uint * FUN_000201d0(uint *param_1,int param_2,uint param_3)

{
  uint *__src;
  uint *__dest;
  char *pcVar1;
  uint extraout_r3;
  uint uVar2;
  uint local_34;
  uint *local_30;
  uint local_2c;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  local_2c = 0;
  local_28 = local_28 & 0xffffff00;
  local_30 = &local_28;
  if ((param_3 & 1) == 0) {
    if ((param_3 & 2) != 0) goto LAB_00020424;
    if ((param_3 & 4) != 0) goto LAB_000203d8;
    if ((param_3 & 8) == 0) goto LAB_00020244;
LAB_00020304:
    std::__cxx11::string::_M_append((char *)&local_30,0x40fc8);
    if ((param_3 & 0x10) != 0) goto LAB_00020324;
joined_r0x00020350:
    if ((param_3 & 0x20) != 0) {
      if (0x7fffffff - local_2c < 0x1c) goto LAB_000204d0;
      std::__cxx11::string::_M_append((char *)&local_30,0x40fe0);
    }
    if (local_2c == 0) {
      *param_1 = (uint)(param_1 + 2);
      if (local_30 == &local_28) {
        param_1[5] = uStack_1c;
        param_1[2] = local_28;
        param_1[3] = uStack_24;
        param_1[4] = uStack_20;
      }
      else {
        *param_1 = (uint)local_30;
        param_1[2] = local_28;
      }
      param_1[1] = 0;
      return param_1;
    }
    if (local_2c < local_2c - 2) {
LAB_00020490:
      std::__throw_out_of_range_fmt
                ("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::erase",
                 0xffffffff,1);
      goto LAB_000204ac;
    }
    std::__cxx11::string::_M_erase((uint)&local_30,local_2c - 2);
    uVar2 = local_2c;
    __src = local_30;
    __dest = param_1 + 2;
    *param_1 = (uint)__dest;
    if (local_30 != (uint *)0x0 || local_2c == 0) {
      local_34 = local_2c;
      if (local_2c < 0x10) {
        if (local_2c == 1) {
          *(char *)(param_1 + 2) = (char)*local_30;
          goto LAB_000202b8;
        }
        if (local_2c == 0) goto LAB_000202b8;
      }
      else {
        __dest = (uint *)std::__cxx11::string::_M_create(param_1,(uint)&local_34);
        *param_1 = (uint)__dest;
        param_1[2] = local_34;
      }
      memcpy(__dest,__src,uVar2);
      __dest = (uint *)*param_1;
LAB_000202b8:
      param_1[1] = local_34;
      *(undefined1 *)((int)__dest + local_34) = 0;
      if (local_30 == &local_28) {
        return param_1;
      }
      operator_delete(local_30);
      return param_1;
    }
  }
  else {
    pcVar1 = "reduced blanking v2, ";
    if (param_2 != 8) {
      pcVar1 = "reduced blanking, ";
    }
    std::__cxx11::string::_M_append((char *)&local_30,(uint)pcVar1);
    uVar2 = local_2c;
    if ((param_3 & 2) != 0) goto LAB_00020414;
    if ((param_3 & 4) != 0) goto LAB_000203c8;
    while ((param_3 & 8) != 0) {
      while( true ) {
        if (10 < 0x7fffffff - local_2c) goto LAB_00020304;
        std::__throw_length_error("basic_string::append");
        uVar2 = extraout_r3;
LAB_00020414:
        if (0x7fffffff - uVar2 < 0x25) {
          std::__throw_length_error("basic_string::append");
          goto LAB_00020490;
        }
LAB_00020424:
        std::__cxx11::string::_M_append((char *)&local_30,0x40f7c);
        if ((param_3 & 4) == 0) break;
LAB_000203c8:
        if (0x7fffffff - local_2c < 0x21) goto LAB_000204c4;
LAB_000203d8:
        std::__cxx11::string::_M_append((char *)&local_30,0x40fa4);
        if ((param_3 & 8) == 0) goto LAB_00020244;
      }
    }
LAB_00020244:
    if ((param_3 & 0x10) == 0) goto joined_r0x00020350;
LAB_00020324:
    if (9 < 0x7fffffff - local_2c) {
      std::__cxx11::string::_M_append((char *)&local_30,0x40fd4);
      goto joined_r0x00020350;
    }
LAB_000204ac:
    std::__throw_length_error("basic_string::append");
  }
  std::__throw_logic_error("basic_string::_M_construct null not valid");
LAB_000204c4:
  std::__throw_length_error("basic_string::append");
LAB_000204d0:
  std::__throw_length_error("basic_string::append");
  if (local_30 != &local_28) {
    operator_delete(local_30);
  }
                    /* WARNING: Subroutine does not return */
  __cxa_end_cleanup();
}



/* ===== FUN_000204f0 @ 000204f0 size=948 ===== */

void FUN_000204f0(int *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint in_fpscr;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 *local_40 [2];
  undefined1 auStack_38 [16];
  
  if (*param_1 != 0) {
    puts("Timing type not defined");
    return;
  }
  iVar3 = param_1[2];
  iVar4 = param_1[0xb];
  iVar5 = param_1[1];
  dVar7 = (double)VectorUnsignedToFloat
                            (iVar3 + param_1[10] + iVar4 + param_1[0xc] + param_1[0xd] +
                             param_1[0xe] + param_1[0xf],(byte)(in_fpscr >> 0x16) & 3);
  dVar8 = (double)VectorUnsignedToFloat
                            (iVar5 + param_1[7] + param_1[8] + param_1[9],
                             (byte)(in_fpscr >> 0x16) & 3);
  if (DAT_0006336b == '\0') {
    printf("\tActive width: %d\n",iVar5);
    printf("\tActive height: %d\n",param_1[2]);
    printf("\tTotal width: %d\n",param_1[1] + param_1[7] + param_1[8] + param_1[9]);
    printf("\tTotal height: %d\n",
           param_1[2] + param_1[10] + param_1[0xb] + param_1[0xc] + param_1[0xd] + param_1[0xe] +
           param_1[0xf]);
    pcVar1 = "interlaced";
    if (param_1[3] == 0) {
      pcVar1 = "progressive";
    }
    printf("\tFrame format: %s\n",pcVar1);
    if ((param_1[4] & 1U) == 0) {
      uVar6 = 0x2d;
    }
    else {
      uVar6 = 0x2b;
    }
    if ((param_1[4] & 2U) == 0) {
      uVar2 = 0x2d;
    }
    else {
      uVar2 = 0x2b;
    }
    printf("\tPolarities: %cvsync %chsync\n",uVar6,uVar2);
    printf("\tPixelclock: %lld Hz");
    if ((param_1[1] != 0) && (param_1[2] != 0)) {
      dVar9 = (double)__aeabi_ul2d(param_1[5],param_1[6]);
      if (param_1[3] == 0) {
        pcVar1 = " (%.2f frames per second)";
      }
      else {
        dVar7 = dVar7 * 0.5;
        pcVar1 = " (%.2f fields per second)";
      }
      dVar7 = dVar9 / (dVar7 * dVar8);
      printf(pcVar1,(int)((ulonglong)dVar9 >> 0x20),SUB84(dVar7,0),(int)((ulonglong)dVar7 >> 0x20));
    }
    putchar(10);
    printf("\tHorizontal frontporch: %d\n",param_1[7]);
    printf("\tHorizontal sync: %d\n",param_1[8]);
    printf("\tHorizontal backporch: %d\n",param_1[9]);
    if (param_1[3] != 0) {
      puts("\tField 1:");
    }
    printf("\tVertical frontporch: %d\n",param_1[10]);
    printf("\tVertical sync: %d\n",param_1[0xb]);
    printf("\tVertical backporch: %d\n",param_1[0xc]);
    if (param_1[3] != 0) {
      puts("\tField 2:");
      printf("\tVertical frontporch: %d\n",param_1[0xd]);
      printf("\tVertical sync: %d\n",param_1[0xe]);
      printf("\tVertical backporch: %d\n",param_1[0xf]);
    }
    FUN_00014958(local_40,param_1[0x10],DAT_000208d0);
    printf("\tStandards: %s\n",local_40[0]);
    if (local_40[0] != auStack_38) {
      operator_delete(local_40[0]);
    }
    FUN_000201d0(local_40,param_1[0xb],param_1[0x11]);
    printf("\tFlags: %s\n",local_40[0]);
    if (local_40[0] == auStack_38) {
      return;
    }
  }
  else {
    dVar9 = (double)__aeabi_ul2d(param_1[5],param_1[6]);
    if (param_1[3] == 0) {
      uVar6 = 0x70;
    }
    else {
      uVar6 = 0x69;
      dVar7 = dVar7 * 0.5;
    }
    FUN_000201d0(local_40,iVar4,param_1[0x11]);
    printf("\t%dx%d%c%.2f %s\n",iVar5,iVar3,uVar6,dVar9 / (dVar8 * dVar7),local_40[0]);
    if (local_40[0] == auStack_38) {
      return;
    }
  }
  operator_delete(local_40[0]);
  return;
}



/* ===== FUN_000208d4 @ 000208d4 size=12 ===== */

void FUN_000208d4(void)

{
  puts(
      "\nStandards/Timings options:\n  --list-standards   display supported video standards [VIDIOC_ENUMSTD]\n  -S, --get-standard\n                     query the video standard [VIDIOC_G_STD]\n  -s, --set-standard=<num>\n                     set the video standard to <num> [VIDIOC_S_STD]\n                     <num> a numerical v4l2_std value, or one of:\n                     pal or pal-X (X = B/G/H/N/Nc/I/D/K/M/60) (V4L2_STD_PAL)\n                     ntsc or ntsc-X (X = M/J/K) (V4L2_STD_NTSC)\n                     secam or secam-X (X = B/G/H/D/K/L/Lc) (V4L2_STD_SECAM)\n  --get-detected-standard\n                     display detected input video standard [VIDIOC_QUERYSTD]\n  --list-dv-timings  list supp. standard dv timings [VIDIOC_ENUM_DV_TIMINGS]\n  --set-dv-bt-timings\n                     query: use the output of VIDIOC_QUERY_DV_TIMINGS\n                     index=<index>: use the index as provided by --list-dv-timings\n                     or specify timings using cvt/gtf options as follows:\n                     cvt/gtf,width=<width>,height=<height>,fps=<frames per sec>\n                     interlaced=<0/1>,reduced-blanking=<0/1/2>,reduced-fps=<0/1>\n                     The value of reduced-blanking, if greater than 0, indicates\n                     that reduced blanking is to be used and the value indicate the\n                     version. For gtf, there is no version 2 for reduced blanking, and\n\t\t     the value 1 or 2 will give same results.\n\t\t     reduced-fps = 1, slows down pixel clock by factor of 1000 / 1001, allowing\n\t\t     to support NTSC frame rates like 29.97 or 59.94.\n\t\t     Reduced fps flag takes effect only with reduced blanking version 2 and,\n\t\t     when refresh rate is an integer multiple of 6, say, fps = 24,30,60 etc.\n                     or update all or part of the current timings fields:\n                     width=<width>,height=<height>,interlaced=<0/1>,\n                     polarities=<polarities mask>,pixelclock=<pixelclock Hz>,\n                     hfp=<horizontal front porch>,hs=<horizontal sync>,\n         ..." /* TRUNCATED STRING LITERAL */
      );
  return;
}



/* ===== FUN_000208e0 @ 000208e0 size=1192 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000208e0(int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  char *__ptr;
  size_t __n;
  byte *local_20;
  int local_1c [2];
  
  if (param_1 != 0x73) {
    if (param_1 != 0xd7) {
      return;
    }
    DAT_0006d748 = 0;
    local_20 = param_2;
    iVar2 = strcmp((char *)param_2,"query");
    if (iVar2 == 0) {
      DAT_0006d7d8 = 1;
      return;
    }
    bVar1 = *param_2;
    do {
      if (bVar1 == 0) {
        return;
      }
      uVar3 = FUN_0001ffa0(&local_20,local_1c);
      switch(uVar3) {
      case 0:
        DAT_0006d74c = local_1c[0];
        break;
      case 1:
        DAT_0006d750 = local_1c[0];
        break;
      case 2:
        DAT_0006d754 = local_1c[0];
        break;
      case 3:
        DAT_0006d758 = local_1c[0];
        break;
      case 4:
        DAT_0006d75c = local_1c[0];
        DAT_0006d760 = local_1c[0] >> 0x1f;
        break;
      case 5:
        DAT_0006d764 = local_1c[0];
        break;
      case 6:
        DAT_0006d768 = local_1c[0];
        break;
      case 7:
        DAT_0006d76c = local_1c[0];
        break;
      case 8:
        DAT_0006d770 = local_1c[0];
        break;
      case 9:
        DAT_0006d774 = local_1c[0];
        break;
      case 10:
        DAT_0006d778 = local_1c[0];
        break;
      case 0xb:
        DAT_0006d77c = local_1c[0];
        break;
      case 0xc:
        DAT_0006d780 = local_1c[0];
        break;
      case 0xd:
        DAT_0006d784 = local_1c[0];
        break;
      case 0xe:
        DAT_00062d8c = local_1c[0];
        break;
      case 0xf:
        DAT_0006d7d9 = 1;
        FUN_00020058(local_20,4);
        goto LAB_00020a74;
      case 0x10:
        DAT_0006d7d9 = 1;
        FUN_00020058(local_20,8);
LAB_00020a74:
        DAT_0006d7dc = DAT_0006d7dc | 1 << (uVar3 & 0xff);
        return;
      default:
        goto switchD_0002095c_caseD_11;
      case 0x13:
        if (local_1c[0] != 0) {
          DAT_0006d78c = DAT_0006d78c | 4;
        }
        break;
      case 0x14:
        DAT_0006d7d9 = 1;
      }
      bVar1 = *local_20;
      DAT_0006d7dc = DAT_0006d7dc | 1 << (uVar3 & 0xff);
    } while( true );
  }
  iVar2 = strncasecmp((char *)param_2,"pal",3);
  if (iVar2 == 0) {
    if (param_2[3] == 0) {
      _DAT_0006d7d0 = 0xff;
      return;
    }
    if (param_2[3] == 0x2d) {
      iVar2 = tolower((uint)param_2[4]);
      switch(iVar2) {
      case 0x36:
        uVar3 = 0x800;
        break;
      default:
        goto switchD_00020bcc_caseD_37;
      case 0x62:
      case 0x67:
        uVar3 = 7;
        break;
      case 100:
      case 0x6b:
        uVar3 = 0xe0;
        break;
      case 0x68:
        uVar3 = 8;
        break;
      case 0x69:
        uVar3 = 0x10;
        break;
      case 0x6d:
        uVar3 = 0x100;
        break;
      case 0x6e:
        iVar2 = tolower((uint)param_2[5]);
        if (iVar2 == 99) {
          uVar3 = 0x400;
        }
        else {
          uVar3 = 0x200;
        }
      }
LAB_00020d08:
      _DAT_0006d7d0 = (ulonglong)uVar3;
      return;
    }
switchD_00020bcc_caseD_37:
    __n = 0x1d;
    __ptr = "pal specifier not recognised\n";
  }
  else {
    iVar2 = strncasecmp((char *)param_2,"ntsc",4);
    if (iVar2 == 0) {
      if (param_2[4] == 0) {
        _DAT_0006d7d0 = 0xb000;
        return;
      }
      if (param_2[4] == 0x2d) {
        iVar2 = tolower((uint)param_2[5]);
        if (iVar2 == 0x6b) {
          uVar3 = 0x8000;
          goto LAB_00020d08;
        }
        if (iVar2 == 0x6d) {
          uVar3 = 0x1000;
          goto LAB_00020d08;
        }
        if (iVar2 == 0x6a) {
          uVar3 = 0x2000;
          goto LAB_00020d08;
        }
      }
      __ptr = "ntsc specifier not recognised\n";
      __n = 0x1e;
    }
    else {
      iVar2 = strncasecmp((char *)param_2,"secam",5);
      if (iVar2 != 0) {
        if (*param_2 - 0x30 < 10) {
          lVar4 = strtol((char *)param_2,(char **)0x0,0);
          _DAT_0006d7d0 = (longlong)lVar4 | 0x8000000000000000;
          return;
        }
        fprintf(stderr,"Unknown standard \'%s\'\n",param_2);
        goto switchD_0002095c_caseD_11;
      }
      if (param_2[5] == 0) {
        _DAT_0006d7d0 = 0xff0000;
        return;
      }
      if (param_2[5] == 0x2d) {
        iVar2 = tolower((uint)param_2[6]);
        if (iVar2 - 0x62U < 0xb) {
          uVar3 = 1 << (iVar2 - 0x62U & 0xff);
          if ((uVar3 & 0x204) != 0) {
            uVar3 = 0x320000;
            goto LAB_00020d08;
          }
          if ((uVar3 & 0x61) != 0) {
            uVar3 = 0xd0000;
            goto LAB_00020d08;
          }
          if ((uVar3 & 0x400) != 0) {
            iVar2 = tolower((uint)param_2[7]);
            if (iVar2 == 99) {
              uVar3 = 0x800000;
            }
            else {
              uVar3 = 0x400000;
            }
            goto LAB_00020d08;
          }
        }
      }
      __n = 0x1f;
      __ptr = "secam specifier not recognised\n";
    }
  }
  fwrite(__ptr,1,__n,stderr);
switchD_0002095c_caseD_11:
  puts(
      "\nStandards/Timings options:\n  --list-standards   display supported video standards [VIDIOC_ENUMSTD]\n  -S, --get-standard\n                     query the video standard [VIDIOC_G_STD]\n  -s, --set-standard=<num>\n                     set the video standard to <num> [VIDIOC_S_STD]\n                     <num> a numerical v4l2_std value, or one of:\n                     pal or pal-X (X = B/G/H/N/Nc/I/D/K/M/60) (V4L2_STD_PAL)\n                     ntsc or ntsc-X (X = M/J/K) (V4L2_STD_NTSC)\n                     secam or secam-X (X = B/G/H/D/K/L/Lc) (V4L2_STD_SECAM)\n  --get-detected-standard\n                     display detected input video standard [VIDIOC_QUERYSTD]\n  --list-dv-timings  list supp. standard dv timings [VIDIOC_ENUM_DV_TIMINGS]\n  --set-dv-bt-timings\n                     query: use the output of VIDIOC_QUERY_DV_TIMINGS\n                     index=<index>: use the index as provided by --list-dv-timings\n                     or specify timings using cvt/gtf options as follows:\n                     cvt/gtf,width=<width>,height=<height>,fps=<frames per sec>\n                     interlaced=<0/1>,reduced-blanking=<0/1/2>,reduced-fps=<0/1>\n                     The value of reduced-blanking, if greater than 0, indicates\n                     that reduced blanking is to be used and the value indicate the\n                     version. For gtf, there is no version 2 for reduced blanking, and\n\t\t     the value 1 or 2 will give same results.\n\t\t     reduced-fps = 1, slows down pixel clock by factor of 1000 / 1001, allowing\n\t\t     to support NTSC frame rates like 29.97 or 59.94.\n\t\t     Reduced fps flag takes effect only with reduced blanking version 2 and,\n\t\t     when refresh rate is an integer multiple of 6, say, fps = 24,30,60 etc.\n                     or update all or part of the current timings fields:\n                     width=<width>,height=<height>,interlaced=<0/1>,\n                     polarities=<polarities mask>,pixelclock=<pixelclock Hz>,\n                     hfp=<horizontal front porch>,hs=<horizontal sync>,\n         ..." /* TRUNCATED STRING LITERAL */
      );
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00020ec0 @ 00020ec0 size=1328 ===== */

void FUN_00020ec0(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1c8;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined4 local_190;
  undefined1 auStack_144 [4];
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  uint local_100;
  uint local_c0 [2];
  uint local_b8;
  int iStack_b4;
  undefined1 auStack_b0 [68];
  uint local_6c;
  
  if (DAT_00063373 != '\0') {
    if (DAT_0006d7d4 < 0) {
      local_c0[0] = DAT_0006d7d0 & 0xffff;
      iVar16 = FUN_0001391c(param_1,0xc0485619,local_c0);
      if (-1 < iVar16) {
        DAT_0006d7d0 = local_b8;
        DAT_0006d7d4 = iStack_b4;
      }
    }
    uVar24 = FUN_00013938(param_1,0x40085618,DAT_00021440,"VIDIOC_S_STD");
    if ((int)uVar24 == 0) {
      printf("Standard set to %08llx\n",(int)((ulonglong)uVar24 >> 0x20),DAT_0006d7d0,DAT_0006d7d4);
    }
  }
  if (DAT_000633d7 == '\0') {
    return;
  }
  memset(local_c0,0,0x94);
  memset(auStack_144,0,0x84);
  uVar17 = DAT_0006d78c;
  if (DAT_0006d7d8 == '\0') {
    if ((int)DAT_00062d8c < 0) {
      if (DAT_0006d7d9 == '\0') {
        FUN_00013938(param_1,0xc0845658,auStack_144,"VIDIOC_G_DV_TIMINGS");
        uVar18 = DAT_0006d7dc & 1;
        uVar17 = 0;
        bVar2 = false;
        bVar1 = false;
        bVar3 = false;
        bVar4 = false;
        bVar5 = false;
        bVar6 = false;
        bVar7 = false;
        bVar8 = false;
        bVar9 = false;
        bVar10 = false;
        bVar11 = false;
        bVar12 = false;
        bVar13 = false;
        bVar14 = false;
        bVar15 = false;
        local_190 = local_108;
        local_198 = local_10c;
        local_1a0 = local_110;
        local_1a8 = local_114;
        local_1b0 = local_118;
        local_1c8 = local_124;
        local_1b8 = local_11c;
        local_1d0 = local_128;
        local_1bc = local_120;
        local_1d8 = local_130;
        local_1d4 = local_12c;
        uVar22 = local_140;
        uVar23 = local_13c;
        uVar19 = local_138;
        uVar20 = local_134;
        uVar21 = local_100;
        do {
          if (uVar18 == 0) {
switchD_000211e8_caseD_e:
            if (uVar17 == 0x14) goto code_r0x0002125c;
          }
          else {
            switch(uVar17) {
            case 0:
              bVar1 = true;
              uVar22 = DAT_0006d74c;
              break;
            case 1:
              bVar2 = true;
              uVar23 = DAT_0006d750;
              break;
            case 2:
              bVar3 = true;
              uVar19 = DAT_0006d754;
              break;
            case 3:
              bVar4 = true;
              uVar20 = DAT_0006d758;
              break;
            case 4:
              local_1d8 = DAT_0006d75c;
              local_1d4 = DAT_0006d760;
              bVar5 = true;
              break;
            case 5:
              local_1d0 = DAT_0006d764;
              bVar6 = true;
              break;
            case 6:
              local_1c8 = DAT_0006d768;
              bVar7 = true;
              break;
            case 7:
              local_1bc = DAT_0006d76c;
              bVar8 = true;
              break;
            case 8:
              local_1b8 = DAT_0006d770;
              bVar9 = true;
              break;
            case 9:
              local_1b0 = DAT_0006d774;
              bVar10 = true;
              break;
            case 10:
              local_1a8 = DAT_0006d778;
              bVar11 = true;
              break;
            case 0xb:
              local_1a0 = DAT_0006d77c;
              bVar12 = true;
              break;
            case 0xc:
              local_198 = DAT_0006d780;
              bVar13 = true;
              break;
            case 0xd:
              local_190 = DAT_0006d784;
              bVar14 = true;
              break;
            default:
              goto switchD_000211e8_caseD_e;
            case 0x13:
              bVar15 = true;
              uVar21 = uVar21 & 0xfffffffb | DAT_0006d78c & 4;
            }
          }
          uVar17 = uVar17 + 1;
          uVar18 = DAT_0006d7dc & 1 << (uVar17 & 0xff);
        } while( true );
      }
      memcpy(auStack_144,&DAT_0006d748,0x84);
    }
    else {
      local_c0[0] = DAT_00062d8c;
      FUN_00013938(param_1,0xc0945662,local_c0,"VIDIOC_ENUM_DV_TIMINGS");
      local_6c = local_6c | uVar17 & 4;
      memcpy(auStack_144,auStack_b0,0x84);
    }
  }
  else {
    FUN_00013938(param_1,0x80845663,auStack_144,"VIDIOC_QUERY_DV_TIMINGS");
  }
LAB_00020f8c:
  if (DAT_00063504 != 0) {
    FUN_000204f0(auStack_144);
  }
  iVar16 = FUN_00013938(param_1,0xc0845657,auStack_144,"VIDIOC_S_DV_TIMINGS");
  if (-1 < iVar16) {
    puts("BT timings set");
  }
  return;
code_r0x0002125c:
  if (bVar1) {
    local_140 = uVar22;
  }
  if (bVar2) {
    local_13c = uVar23;
  }
  if (bVar3) {
    local_138 = uVar19;
  }
  if (bVar4) {
    local_134 = uVar20;
  }
  if (bVar5) {
    local_130 = local_1d8;
    local_12c = local_1d4;
  }
  if (bVar6) {
    local_128 = local_1d0;
  }
  if (bVar7) {
    local_124 = local_1c8;
  }
  if (bVar8) {
    local_120 = local_1bc;
  }
  if (bVar9) {
    local_11c = local_1b8;
  }
  if (bVar10) {
    local_118 = local_1b0;
  }
  if (bVar11) {
    local_114 = local_1a8;
  }
  if (bVar12) {
    local_110 = local_1a0;
  }
  if (bVar13) {
    local_10c = local_198;
  }
  if (bVar14) {
    local_108 = local_190;
  }
  if (bVar15) {
    local_100 = uVar21;
  }
  goto LAB_00020f8c;
}



/* ===== FUN_00021444 @ 00021444 size=656 ===== */

void FUN_00021444(undefined4 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *local_b8 [2];
  undefined1 auStack_b0 [16];
  int local_a0 [4];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_70;
  undefined4 local_6c;
  
  if (DAT_00063353 != '\0') {
    uVar2 = FUN_00013938(param_1,0x80085617,&DAT_0006d7d0,"VIDIOC_G_STD");
    if ((int)uVar2 == 0) {
      printf("Video Standard = 0x%08llx\n",(int)((ulonglong)uVar2 >> 0x20),DAT_0006d7d0,DAT_0006d7d4
            );
      FUN_000144fc(DAT_0006d7d0,DAT_0006d7d4);
    }
  }
  if ((DAT_000633d6 != '\0') &&
     (iVar1 = FUN_00013938(param_1,0xc0845658,&DAT_0006d748,"VIDIOC_G_DV_TIMINGS"), -1 < iVar1)) {
    puts("DV timings:");
    FUN_000204f0(&DAT_0006d748);
  }
  if (DAT_000633d8 != '\0') {
    memset(local_a0,0,0x90);
    iVar1 = FUN_00013938(param_1,0xc0905664,local_a0,"VIDIOC_DV_TIMINGS_CAP");
    if (-1 < iVar1) {
      puts("DV timings capabilities:");
      if (local_a0[0] == 0) {
        printf("\tMinimum Width: %u\n",local_90);
        printf("\tMaximum Width: %u\n",local_8c);
        printf("\tMinimum Height: %u\n",local_88);
        printf("\tMaximum Height: %u\n",local_84);
        printf("\tMinimum PClock: %llu\n");
        printf("\tMaximum PClock: %llu\n");
        FUN_00014958(local_b8,local_70,DAT_000216fc);
        printf("\tStandards: %s\n",local_b8[0]);
        if (local_b8[0] != auStack_b0) {
          operator_delete(local_b8[0]);
        }
        FUN_00014958(local_b8,local_6c,DAT_00021700);
        printf("\tCapabilities: %s\n",local_b8[0]);
        if (local_b8[0] != auStack_b0) {
          operator_delete(local_b8[0]);
        }
      }
      else {
        puts("\tUnknown type");
      }
    }
  }
  if (DAT_000633cf != '\0') {
    uVar2 = FUN_00013938(param_1,0x8008563f,&DAT_0006d7d0,"VIDIOC_QUERYSTD");
    if ((int)uVar2 == 0) {
      printf("Video Standard = 0x%08llx\n",(int)((ulonglong)uVar2 >> 0x20),DAT_0006d7d0,DAT_0006d7d4
            );
      FUN_000144fc(DAT_0006d7d0,DAT_0006d7d4);
    }
  }
  if (DAT_000633d5 != '\0') {
    FUN_00013938(param_1,0x80845663,&DAT_0006d748,"VIDIOC_QUERY_DV_TIMINGS");
    FUN_000204f0(&DAT_0006d748);
    return;
  }
  return;
}



/* ===== FUN_00021704 @ 00021704 size=444 ===== */

void FUN_00021704(undefined4 param_1)

{
  int iVar1;
  int local_b8 [2];
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [24];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  
  if (DAT_00063398 != '\0') {
    puts("ioctl: VIDIOC_ENUMSTD");
    local_b8[0] = 0;
    while (iVar1 = FUN_0001391c(param_1,0xc0485619,local_b8), -1 < iVar1) {
      if (DAT_0006336b == '\0') {
        if (local_b8[0] != 0) {
          putchar(10);
        }
        printf("\tIndex       : %d\n",local_b8[0]);
        printf("\tID          : 0x%016llX\n");
        printf("\tName        : %s\n",auStack_a8);
        printf("\tFrame period: %d/%d\n",local_90,local_8c);
        printf("\tFrame lines : %d\n",local_88);
      }
      else {
        printf("\t%2d: 0x%016llX %s\n",local_b8[0],local_b0,uStack_ac,auStack_a8);
      }
      local_b8[0] = local_b8[0] + 1;
    }
  }
  if (DAT_000633d4 != '\0') {
    memset(local_b8,0,0x94);
    puts("ioctl: VIDIOC_ENUM_DV_TIMINGS");
    while (iVar1 = FUN_0001391c(param_1,0xc0945662,local_b8), -1 < iVar1) {
      if (DAT_0006336b == '\0') {
        if (local_b8[0] != 0) {
          putchar(10);
        }
        printf("\tIndex: %d\n",local_b8[0]);
      }
      else {
        printf("\t%d:");
      }
      FUN_000204f0(auStack_a8);
      local_b8[0] = local_b8[0] + 1;
    }
  }
  return;
}



/* ===== FUN_000218c0 @ 000218c0 size=256 ===== */

void FUN_000218c0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *local_1c8 [2];
  undefined1 auStack_1c0 [16];
  undefined4 local_1b0;
  undefined1 auStack_1ac [28];
  undefined4 local_190;
  undefined1 auStack_e4 [16];
  int local_d4;
  
  memset(auStack_1ac,0,200);
  local_190 = DAT_00063534;
  local_1b0 = DAT_0006353c;
  iVar1 = FUN_0001391c(param_1,0xc0cc5604,&local_1b0);
  if (-1 < iVar1) {
    puts("Supported Video Fields:");
    iVar1 = 1;
    do {
      while( true ) {
        memcpy(auStack_e4,&local_1b0,0xcc);
        local_d4 = iVar1;
        iVar2 = FUN_0001391c(param_1,0xc0cc5640,auStack_e4);
        if ((iVar2 < 0) || (local_d4 != iVar1)) break;
        FUN_00015334(local_1c8,iVar1);
        printf("\t%s\n",local_1c8[0]);
        if (local_1c8[0] == auStack_1c0) break;
        iVar1 = iVar1 + 1;
        operator_delete(local_1c8[0]);
        if (iVar1 == 10) {
          return;
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 10);
  }
  return;
}



/* ===== FUN_000219d8 @ 000219d8 size=12 ===== */

void FUN_000219d8(void)

{
  puts(
      "\nVideo Capture Formats options:\n  --list-formats     display supported video formats [VIDIOC_ENUM_FMT]\n  --list-formats-ext display supported video formats including frame sizes\n                     and intervals\n  --list-framesizes=<f>\n                     list supported framesizes for pixelformat <f>\n                     [VIDIOC_ENUM_FRAMESIZES]\n                     pixelformat is the fourcc value as a string\n  --list-frameintervals=width=<w>,height=<h>,pixelformat=<f>\n                     list supported frame intervals for pixelformat <f> and\n                     the given width and height [VIDIOC_ENUM_FRAMEINTERVALS]\n                     pixelformat is the fourcc value as a string\n  --list-fields      list supported fields for the current format\n  -V, --get-fmt-video\n     \t\t     query the video capture format [VIDIOC_G_FMT]\n  -v, --set-fmt-video\n  --try-fmt-video=width=<w>,height=<h>,pixelformat=<pf>,field=<f>,colorspace=<c>,\n                  xfer=<xf>,ycbcr=<y>,quantization=<q>,premul-alpha,bytesperline=<bpl>\n                     set/try the video capture format [VIDIOC_S/TRY_FMT]\n                     pixelformat is either the format index as reported by\n                       --list-formats, or the fourcc value as a string.\n                     The bytesperline option can be used multiple times, once for each plane.\n                     premul-alpha sets V4L2_PIX_FMT_FLAG_PREMUL_ALPHA.\n                     <f> can be one of the following field layouts:\n                       any, none, top, bottom, interlaced, seq_tb, seq_bt,\n                       alternate, interlaced_tb, interlaced_bt\n                     <c> can be one of the following colorspaces:\n                       smpte170m, smpte240m, rec709, 470m, 470bg, jpeg, srgb,\n                       adobergb, bt2020, dcip3\n                     <xf> can be one of the following transfer functions:\n                       default, 709, srgb, adobergb, smpte240m, smpte2084, dcip3, none\n                     <y> can be one of the following Y\'CbCr encodings:\n   ..." /* TRUNCATED STRING LITERAL */
      );
  return;
}



/* ===== FUN_000219e4 @ 000219e4 size=416 ===== */

void FUN_000219e4(undefined4 param_1,char *param_2)

{
  long *__nptr;
  size_t sVar1;
  int iVar2;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  long *local_18;
  char *local_14;
  
  switch(param_1) {
  case 0x76:
  case 0x91:
    DAT_0006d814 = FUN_00013cc0(param_2,&DAT_0006d7e8,&DAT_0006d7e4,&DAT_0006d7e0,&DAT_0006d810,
                                auStack_20,auStack_1c,&local_18,&local_14,&DAT_0006d80c,
                                &DAT_0006d7ec);
    if ((DAT_0006d814 != 0) && ((DAT_0006d814 & 0x2700) == 0)) {
      return;
    }
LAB_00021b34:
    puts(
        "\nVideo Capture Formats options:\n  --list-formats     display supported video formats [VIDIOC_ENUM_FMT]\n  --list-formats-ext display supported video formats including frame sizes\n                     and intervals\n  --list-framesizes=<f>\n                     list supported framesizes for pixelformat <f>\n                     [VIDIOC_ENUM_FRAMESIZES]\n                     pixelformat is the fourcc value as a string\n  --list-frameintervals=width=<w>,height=<h>,pixelformat=<f>\n                     list supported frame intervals for pixelformat <f> and\n                     the given width and height [VIDIOC_ENUM_FRAMEINTERVALS]\n                     pixelformat is the fourcc value as a string\n  --list-fields      list supported fields for the current format\n  -V, --get-fmt-video\n     \t\t     query the video capture format [VIDIOC_G_FMT]\n  -v, --set-fmt-video\n  --try-fmt-video=width=<w>,height=<h>,pixelformat=<pf>,field=<f>,colorspace=<c>,\n                  xfer=<xf>,ycbcr=<y>,quantization=<q>,premul-alpha,bytesperline=<bpl>\n                     set/try the video capture format [VIDIOC_S/TRY_FMT]\n                     pixelformat is either the format index as reported by\n                       --list-formats, or the fourcc value as a string.\n                     The bytesperline option can be used multiple times, once for each plane.\n                     premul-alpha sets V4L2_PIX_FMT_FLAG_PREMUL_ALPHA.\n                     <f> can be one of the following field layouts:\n                       any, none, top, bottom, interlaced, seq_tb, seq_bt,\n                       alternate, interlaced_tb, interlaced_bt\n                     <c> can be one of the following colorspaces:\n                       smpte170m, smpte240m, rec709, 470m, 470bg, jpeg, srgb,\n                       adobergb, bt2020, dcip3\n                     <xf> can be one of the following transfer functions:\n                       default, 709, srgb, adobergb, smpte240m, smpte2084, dcip3, none\n                     <y> can be one of the following Y\'CbCr encodings:\n   ..." /* TRUNCATED STRING LITERAL */
        );
                    /* WARNING: Subroutine does not return */
    exit(1);
  case 0x9c:
    sVar1 = strlen(param_2);
    if (sVar1 != 4) {
      DAT_0006d81c = strtol(param_2,(char **)0x0,0);
      return;
    }
    DAT_0006d81c = *(long *)param_2;
    break;
  case 0x9d:
    local_14 = param_2;
    while (*local_14 != '\0') {
      iVar2 = FUN_00013b0c(&local_14,&PTR_s_width_000415e4,&local_18);
      __nptr = local_18;
      if (iVar2 == 1) {
        DAT_0006d850 = strtol((char *)local_18,(char **)0x0,0);
      }
      else if (iVar2 == 2) {
        sVar1 = strlen((char *)local_18);
        if (sVar1 == 4) {
          DAT_0006d848 = *__nptr;
        }
        else {
          DAT_0006d848 = strtol((char *)__nptr,(char **)0x0,0);
        }
      }
      else {
        if (iVar2 != 0) goto LAB_00021b34;
        DAT_0006d84c = strtol((char *)local_18,(char **)0x0,0);
      }
    }
  }
  return;
}



/* ===== FUN_00021c24 @ 00021c24 size=560 ===== */

/* WARNING: Type propagation algorithm not settling */

void FUN_00021c24(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  char *pcVar5;
  uint local_dc [4];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_bc;
  undefined4 local_b8;
  byte local_24;
  undefined1 local_23;
  
  if (DAT_00063376 != '\0' || DAT_00063391 != '\0') {
    memset(local_dc + 1,0,200);
    local_bc = DAT_00063534;
    local_dc[0] = DAT_0006353c;
    iVar1 = FUN_00013938(param_1,0xc0cc5604,local_dc,"VIDIOC_G_FMT");
    if (iVar1 == 0) {
      if (DAT_00063538 == '\0') {
        if ((DAT_0006d814 & 1) != 0) {
          local_dc[1] = DAT_0006d7e8;
        }
        if ((DAT_0006d814 & 2) != 0) {
          local_dc[2] = DAT_0006d7e4;
        }
        if (((DAT_0006d814 & 0x10) != 0) && (local_dc[3] = DAT_0006d7e0, DAT_0006d7e0 < 0x100)) {
          local_dc[3] = FUN_000142cc(param_1,DAT_0006d7e0,0);
        }
        if ((DAT_0006d814 & 0x80) != 0) {
          local_cc = DAT_0006d810;
        }
        if ((DAT_0006d814 & 0x800) != 0) {
          local_b8 = DAT_0006d80c;
        }
        local_c8 = 0;
        if ((DAT_0006d814 & 0x1000) != 0) {
          local_c8 = DAT_0006d7ec;
        }
      }
      else {
        if ((DAT_0006d814 & 1) != 0) {
          local_dc[1] = DAT_0006d7e8;
        }
        if ((DAT_0006d814 & 2) != 0) {
          local_dc[2] = DAT_0006d7e4;
        }
        if (((DAT_0006d814 & 0x10) != 0) && (local_dc[3] = DAT_0006d7e0, DAT_0006d7e0 < 0x100)) {
          local_dc[3] = FUN_000142cc(param_1,DAT_0006d7e0,0,1);
        }
        if ((DAT_0006d814 & 0x80) != 0) {
          local_cc = DAT_0006d810;
        }
        if ((DAT_0006d814 & 0x800) != 0) {
          local_23 = (undefined1)DAT_0006d80c;
        }
        if ((DAT_0006d814 & 0x1000) == 0) {
          if (local_24 != 0) {
            puVar4 = local_dc;
            puVar3 = puVar4 + (uint)local_24 * 5;
            do {
              puVar4[7] = 0;
              puVar4 = puVar4 + 5;
            } while (puVar3 != puVar4);
          }
        }
        else {
          puVar3 = local_dc;
          puVar4 = DAT_00021e54;
          do {
            puVar4 = puVar4 + 1;
            puVar3[7] = *puVar4;
            puVar3 = puVar3 + 5;
          } while (DAT_00021e54 + 8 != puVar4);
        }
      }
      if (DAT_00063376 == '\0') {
        uVar2 = 0x5640;
        pcVar5 = "VIDIOC_TRY_FMT";
      }
      else {
        uVar2 = 0x5605;
        pcVar5 = "VIDIOC_S_FMT";
      }
      iVar1 = FUN_00013938(param_1,uVar2 | 0xc0cc0000,local_dc,pcVar5);
      if ((iVar1 == 0) && ((DAT_00063504 != 0 || (DAT_00063391 != '\0')))) {
        FUN_00015e10(local_dc);
      }
    }
  }
  return;
}



/* ===== FUN_00021e58 @ 00021e58 size=140 ===== */

void FUN_00021e58(undefined4 param_1)

{
  int iVar1;
  undefined4 local_d4;
  undefined1 auStack_d0 [28];
  undefined4 local_b4;
  
  if (DAT_00063356 == '\0') {
    return;
  }
  memset(auStack_d0,0,200);
  local_b4 = DAT_00063534;
  local_d4 = DAT_0006353c;
  iVar1 = FUN_00013938(param_1,0xc0cc5604,&local_d4,"VIDIOC_G_FMT");
  if (iVar1 != 0) {
    return;
  }
  FUN_00015e10(&local_d4);
  return;
}



/* ===== FUN_00021ee4 @ 00021ee4 size=296 ===== */

void FUN_00021ee4(int param_1,undefined4 param_2)

{
  size_t sVar1;
  char *__s;
  char *pcVar2;
  undefined1 *local_28 [2];
  undefined1 auStack_20 [16];
  
  if (*(uint *)(param_1 + 8) < 4) {
    local_28[0] = auStack_20;
    __s = (&PTR_s_Unknown_000415f4)[*(uint *)(param_1 + 8)];
    if (__s == (char *)0x0) {
      pcVar2 = (char *)0xffffffff;
      goto LAB_00021f24;
    }
    sVar1 = strlen(__s);
  }
  else {
    local_28[0] = auStack_20;
    __s = "Unknown";
    sVar1 = 7;
  }
  pcVar2 = __s + sVar1;
LAB_00021f24:
  std::__cxx11::string::_M_construct<char_const*>(local_28,__s,pcVar2,0);
  printf("%s\tSize: %s ",param_2,local_28[0]);
  if (local_28[0] != auStack_20) {
    operator_delete(local_28[0]);
  }
  if (*(int *)(param_1 + 8) == 1) {
    printf("%dx%d",*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    putchar(10);
    return;
  }
  if (*(int *)(param_1 + 8) == 3) {
    printf("%dx%d - %dx%d with step %d/%d",*(undefined4 *)(param_1 + 0xc),
           *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x10),
           *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x14),
           *(undefined4 *)(param_1 + 0x20));
    putchar(10);
    return;
  }
  putchar(10);
  return;
}



/* ===== FUN_00022020 @ 00022020 size=1388 ===== */

void FUN_00022020(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  size_t sVar5;
  char *__s;
  char *pcVar6;
  int iVar7;
  uint in_fpscr;
  double dVar8;
  double dVar9;
  undefined1 *local_1e8 [2];
  undefined1 auStack_1e0 [16];
  undefined1 *local_1d0 [2];
  undefined1 auStack_1c8 [16];
  undefined1 *local_1b8 [2];
  undefined1 auStack_1b0 [92];
  undefined1 *local_154 [2];
  undefined1 auStack_14c [92];
  undefined1 *local_f0 [2];
  undefined1 auStack_e8 [92];
  undefined1 *local_8c [2];
  undefined1 auStack_84 [96];
  
  if (*(uint *)(param_1 + 0x10) < 4) {
    local_8c[0] = auStack_84;
    __s = (&PTR_s_Unknown_000415f4)[*(uint *)(param_1 + 0x10)];
    if (__s != (char *)0x0) {
      sVar5 = strlen(__s);
      goto LAB_000220c4;
    }
    pcVar6 = (char *)0xffffffff;
  }
  else {
    local_8c[0] = auStack_84;
    __s = "Unknown";
    sVar5 = 7;
LAB_000220c4:
    pcVar6 = __s + sVar5;
  }
  std::__cxx11::string::_M_construct<char_const*>(local_8c,__s,pcVar6,0);
  printf("%s\tInterval: %s ",param_2,local_8c[0]);
  if (local_8c[0] != auStack_84) {
    operator_delete(local_8c[0]);
  }
  iVar7 = *(int *)(param_1 + 0x10);
  if (iVar7 == 1) {
    dVar9 = (double)VectorUnsignedToFloat
                              (*(undefined4 *)(param_1 + 0x14),(byte)(in_fpscr >> 0x16) & 3);
    dVar8 = (double)VectorUnsignedToFloat
                              (*(undefined4 *)(param_1 + 0x18),(byte)(in_fpscr >> 0x16) & 3);
    sprintf((char *)local_8c,"%.3f",SUB84(dVar9 / dVar8,0),(int)((ulonglong)(dVar9 / dVar8) >> 0x20)
           );
    local_154[0] = auStack_14c;
    sVar5 = strlen((char *)local_8c);
    std::__cxx11::string::_M_construct<char_const*>(local_154,local_8c,(int)local_8c + sVar5,0);
    puVar4 = local_154[0];
    dVar9 = (double)VectorUnsignedToFloat
                              (*(undefined4 *)(param_1 + 0x18),(byte)(in_fpscr >> 0x16) & 3);
    dVar8 = (double)VectorUnsignedToFloat
                              (*(undefined4 *)(param_1 + 0x14),(byte)(in_fpscr >> 0x16) & 3);
    sprintf((char *)local_8c,"%.3f",SUB84(dVar9 / dVar8,0),(int)((ulonglong)(dVar9 / dVar8) >> 0x20)
           );
    local_f0[0] = auStack_e8;
    sVar5 = strlen((char *)local_8c);
    std::__cxx11::string::_M_construct<char_const*>(local_f0,local_8c,(int)local_8c + sVar5,0);
    printf("%ss (%s fps)\n",puVar4,local_f0[0]);
    if (local_f0[0] != auStack_e8) {
      operator_delete(local_f0[0]);
    }
    puVar4 = local_154[0];
    if (local_154[0] != auStack_14c) {
LAB_000221b8:
      operator_delete(puVar4);
      return;
    }
  }
  else if (iVar7 == 2) {
    dVar9 = (double)VectorUnsignedToFloat
                              (*(undefined4 *)(param_1 + 0x14),(byte)(in_fpscr >> 0x16) & 3);
    dVar8 = (double)VectorUnsignedToFloat
                              (*(undefined4 *)(param_1 + 0x18),(byte)(in_fpscr >> 0x16) & 3);
    sprintf((char *)local_8c,"%.3f",SUB84(dVar9 / dVar8,0),(int)((ulonglong)(dVar9 / dVar8) >> 0x20)
           );
    local_1d0[0] = auStack_1c8;
    sVar5 = strlen((char *)local_8c);
    std::__cxx11::string::_M_construct<char_const*>(local_1d0,local_8c,(int)local_8c + sVar5,0);
    puVar4 = local_1d0[0];
    dVar9 = (double)VectorUnsignedToFloat
                              (*(undefined4 *)(param_1 + 0x1c),(byte)(in_fpscr >> 0x16) & 3);
    dVar8 = (double)VectorUnsignedToFloat
                              (*(undefined4 *)(param_1 + 0x20),(byte)(in_fpscr >> 0x16) & 3);
    sprintf((char *)local_154,"%.3f",SUB84(dVar9 / dVar8,0),
            (int)((ulonglong)(dVar9 / dVar8) >> 0x20));
    local_1b8[0] = auStack_1b0;
    sVar5 = strlen((char *)local_154);
    std::__cxx11::string::_M_construct<char_const*>
              (local_1b8,local_154,(char *)((int)local_154 + sVar5),0);
    puVar1 = local_1b8[0];
    dVar9 = (double)VectorUnsignedToFloat
                              (*(undefined4 *)(param_1 + 0x20),(byte)(in_fpscr >> 0x16) & 3);
    dVar8 = (double)VectorUnsignedToFloat
                              (*(undefined4 *)(param_1 + 0x1c),(byte)(in_fpscr >> 0x16) & 3);
    sprintf((char *)local_f0,"%.3f",SUB84(dVar9 / dVar8,0),(int)((ulonglong)(dVar9 / dVar8) >> 0x20)
           );
    local_154[0] = auStack_14c;
    sVar5 = strlen((char *)local_f0);
    std::__cxx11::string::_M_construct<char_const*>
              (local_154,local_f0,(char *)((int)local_f0 + sVar5),0);
    puVar2 = local_154[0];
    dVar9 = (double)VectorUnsignedToFloat
                              (*(undefined4 *)(param_1 + 0x18),(byte)(in_fpscr >> 0x16) & 3);
    dVar8 = (double)VectorUnsignedToFloat
                              (*(undefined4 *)(param_1 + 0x14),(byte)(in_fpscr >> 0x16) & 3);
    sprintf((char *)local_8c,"%.3f",SUB84(dVar9 / dVar8,0),(int)((ulonglong)(dVar9 / dVar8) >> 0x20)
           );
    local_f0[0] = auStack_e8;
    sVar5 = strlen((char *)local_8c);
    std::__cxx11::string::_M_construct<char_const*>(local_f0,local_8c,(int)local_8c + sVar5,0);
    printf("%ss - %ss (%s-%s fps)\n",puVar4,puVar1,puVar2,local_f0[0]);
    if (local_f0[0] != auStack_e8) {
      operator_delete(local_f0[0]);
    }
    if (local_154[0] != auStack_14c) {
      operator_delete(local_154[0]);
    }
    if (local_1b8[0] != auStack_1b0) {
      operator_delete(local_1b8[0]);
    }
    puVar4 = local_1d0[0];
    if (local_1d0[0] != auStack_1c8) goto LAB_000221b8;
  }
  else if (iVar7 == 3) {
    dVar9 = (double)VectorUnsignedToFloat
                              (*(undefined4 *)(param_1 + 0x14),(byte)(in_fpscr >> 0x16) & 3);
    dVar8 = (double)VectorUnsignedToFloat
                              (*(undefined4 *)(param_1 + 0x18),(byte)(in_fpscr >> 0x16) & 3);
    sprintf((char *)local_8c,"%.3f",SUB84(dVar9 / dVar8,0),(int)((ulonglong)(dVar9 / dVar8) >> 0x20)
           );
    local_1e8[0] = auStack_1e0;
    sVar5 = strlen((char *)local_8c);
    std::__cxx11::string::_M_construct<char_const*>(local_1e8,local_8c,(int)local_8c + sVar5,0);
    puVar4 = local_1e8[0];
    dVar9 = (double)VectorUnsignedToFloat
                              (*(undefined4 *)(param_1 + 0x1c),(byte)(in_fpscr >> 0x16) & 3);
    dVar8 = (double)VectorUnsignedToFloat
                              (*(undefined4 *)(param_1 + 0x20),(byte)(in_fpscr >> 0x16) & 3);
    sprintf((char *)local_1b8,"%.3f",SUB84(dVar9 / dVar8,0),
            (int)((ulonglong)(dVar9 / dVar8) >> 0x20));
    local_1d0[0] = auStack_1c8;
    sVar5 = strlen((char *)local_1b8);
    std::__cxx11::string::_M_construct<char_const*>(local_1d0,local_1b8,(int)local_1b8 + sVar5,0);
    puVar1 = local_1d0[0];
    dVar9 = (double)VectorUnsignedToFloat
                              (*(undefined4 *)(param_1 + 0x24),(byte)(in_fpscr >> 0x16) & 3);
    dVar8 = (double)VectorUnsignedToFloat
                              (*(undefined4 *)(param_1 + 0x28),(byte)(in_fpscr >> 0x16) & 3);
    sprintf((char *)local_154,"%.3f",SUB84(dVar9 / dVar8,0),
            (int)((ulonglong)(dVar9 / dVar8) >> 0x20));
    local_1b8[0] = auStack_1b0;
    sVar5 = strlen((char *)local_154);
    std::__cxx11::string::_M_construct<char_const*>
              (local_1b8,local_154,(char *)((int)local_154 + sVar5),0);
    puVar2 = local_1b8[0];
    dVar9 = (double)VectorUnsignedToFloat
                              (*(undefined4 *)(param_1 + 0x20),(byte)(in_fpscr >> 0x16) & 3);
    dVar8 = (double)VectorUnsignedToFloat
                              (*(undefined4 *)(param_1 + 0x1c),(byte)(in_fpscr >> 0x16) & 3);
    sprintf((char *)local_f0,"%.3f",SUB84(dVar9 / dVar8,0),(int)((ulonglong)(dVar9 / dVar8) >> 0x20)
           );
    local_154[0] = auStack_14c;
    sVar5 = strlen((char *)local_f0);
    std::__cxx11::string::_M_construct<char_const*>
              (local_154,local_f0,(char *)((int)local_f0 + sVar5),0);
    puVar3 = local_154[0];
    dVar9 = (double)VectorUnsignedToFloat
                              (*(undefined4 *)(param_1 + 0x18),(byte)(in_fpscr >> 0x16) & 3);
    dVar8 = (double)VectorUnsignedToFloat
                              (*(undefined4 *)(param_1 + 0x14),(byte)(in_fpscr >> 0x16) & 3);
    sprintf((char *)local_8c,"%.3f",SUB84(dVar9 / dVar8,0),(int)((ulonglong)(dVar9 / dVar8) >> 0x20)
           );
    local_f0[0] = auStack_e8;
    sVar5 = strlen((char *)local_8c);
    std::__cxx11::string::_M_construct<char_const*>(local_f0,local_8c,(int)local_8c + sVar5,0);
    printf("%ss - %ss with step %ss (%s-%s fps)\n",puVar4,puVar1,puVar2,puVar3,local_f0[0]);
    if (local_f0[0] != auStack_e8) {
      operator_delete(local_f0[0]);
    }
    if (local_154[0] != auStack_14c) {
      operator_delete(local_154[0]);
    }
    if (local_1b8[0] != auStack_1b0) {
      operator_delete(local_1b8[0]);
    }
    if (local_1d0[0] != auStack_1c8) {
      operator_delete(local_1d0[0]);
    }
    puVar4 = local_1e8[0];
    if (local_1e8[0] != auStack_1e0) goto LAB_000221b8;
  }
  return;
}



/* ===== FUN_00022670 @ 00022670 size=824 ===== */

void FUN_00022670(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *local_d8 [2];
  undefined1 auStack_d0 [16];
  int local_c0;
  undefined4 uStack_bc;
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_60;
  undefined4 local_5c;
  int local_58;
  undefined1 auStack_54 [32];
  undefined4 local_34;
  
  if (DAT_00063399 != '\0') {
    puts("ioctl: VIDIOC_ENUM_FMT");
    FUN_00016628(param_1,DAT_0006353c);
  }
  if (DAT_0006339a != '\0') {
    puts("ioctl: VIDIOC_ENUM_FMT");
    uVar1 = DAT_0006353c;
    local_60 = 0;
    local_5c = DAT_0006353c;
    while (iVar2 = FUN_0001391c(param_1,0xc0405602,&local_60), -1 < iVar2) {
      printf("\tIndex       : %d\n",local_60);
      FUN_00015ab8(local_d8,uVar1);
      printf("\tType        : %s\n",local_d8[0]);
      if (local_d8[0] != auStack_d0) {
        operator_delete(local_d8[0]);
      }
      FUN_000139c8(local_d8,local_34);
      printf("\tPixel Format: \'%s\'",local_d8[0]);
      if (local_d8[0] != auStack_d0) {
        operator_delete(local_d8[0]);
      }
      if (local_58 != 0) {
        FUN_00014b40(local_d8);
        printf(" (%s)",local_d8[0]);
        if (local_d8[0] != auStack_d0) {
          operator_delete(local_d8[0]);
        }
      }
      putchar(10);
      printf("\tName        : %s\n",auStack_54);
      local_c0 = 0;
      uStack_bc = local_34;
      while (iVar2 = FUN_0001391c(param_1,0xc02c564a,&local_c0), -1 < iVar2) {
        FUN_00021ee4(&local_c0,&DAT_0003ee4c);
        if (local_b8 == 1) {
          local_8c = local_b4;
          local_90 = local_34;
          local_88 = local_b0;
          local_94 = 0;
          while (iVar2 = FUN_0001391c(param_1,0xc034564b,&local_94), -1 < iVar2) {
            FUN_00022020(&local_94,&DAT_00041fdc);
            local_94 = local_94 + 1;
          }
        }
        local_c0 = local_c0 + 1;
      }
      putchar(10);
      local_60 = local_60 + 1;
    }
  }
  if (DAT_0006339b != '\0') {
    FUN_000218c0(param_1);
  }
  if (DAT_0006339c != '\0') {
    puts("ioctl: VIDIOC_ENUM_FRAMESIZES");
    DAT_0006d818 = 0;
    while (iVar2 = FUN_0001391c(param_1,0xc02c564a,&DAT_0006d818), -1 < iVar2) {
      FUN_00021ee4(&DAT_0006d818,&DAT_00042954);
      DAT_0006d818 = DAT_0006d818 + 1;
    }
  }
  if (DAT_0006339d == '\0') {
    return;
  }
  puts("ioctl: VIDIOC_ENUM_FRAMEINTERVALS");
  DAT_0006d844 = 0;
  while (iVar2 = FUN_0001391c(param_1,0xc034564b,&DAT_0006d844), -1 < iVar2) {
    FUN_00022020(&DAT_0006d844,&DAT_00042954);
    DAT_0006d844 = DAT_0006d844 + 1;
  }
  return;
}



/* ===== FUN_00022aec @ 00022aec size=12 ===== */

void FUN_00022aec(void)

{
  puts(
      "\nVideo Output Formats options:\n  --list-formats-out display supported video output formats [VIDIOC_ENUM_FMT]\n  --list-fields-out  list supported fields for the current output format\n  --get-fmt-video-out\n     \t\t     query the video output format [VIDIOC_G_FMT]\n  --set-fmt-video-out\n  --try-fmt-video-out=width=<w>,height=<h>,pixelformat=<pf>,field=<f>,colorspace=<c>,\n                      xfer=<xf>,ycbcr=<y>,quantization=<q>,premul-alpha,bytesperline=<bpl>\n                     set/try the video output format [VIDIOC_S/TRY_FMT]\n                     pixelformat is either the format index as reported by\n                       --list-formats-out, or the fourcc value as a string.\n                     premul-alpha sets V4L2_PIX_FMT_FLAG_PREMUL_ALPHA.\n                     The bytesperline option can be used multiple times, once for each plane.\n                     <f> can be one of the following field layouts:\n                       any, none, top, bottom, interlaced, seq_tb, seq_bt,\n                       alternate, interlaced_tb, interlaced_bt\n                     <c> can be one of the following colorspaces:\n                       smpte170m, smpte240m, rec709, 470m, 470bg, jpeg, srgb,\n                       adobergb, bt2020, dcip3\n                     <xf> can be one of the following transfer functions:\n                       default, 709, srgb, adobergb, smpte240m, smpte2084, dcip3, none\n                     <y> can be one of the following Y\'CbCr encodings:\n                       default, 601, 709, xv601, xv709, bt2020, bt2020c, smpte240m\n                     <q> can be one of the following quantization methods:\n                       default, full-range, lim-range"
      );
  return;
}



/* ===== FUN_00022af8 @ 00022af8 size=136 ===== */

void FUN_00022af8(int param_1,undefined4 param_2)

{
  if (1 < param_1 - 0x8dU) {
    return;
  }
  DAT_0006d8bc = FUN_00013cc0(param_2,&DAT_0006d880,&DAT_0006d87c,&DAT_0006d878,&DAT_0006d8b8,
                              &DAT_0006d8b4,&DAT_0006d8b0,&DAT_0006d8ac,&DAT_0006d8a8,&DAT_0006d8a4,
                              &DAT_0006d884);
  if (DAT_0006d8bc != 0) {
    return;
  }
  FUN_000219d8();
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00022b80 @ 00022b80 size=656 ===== */

/* WARNING: Type propagation algorithm not settling */

void FUN_00022b80(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  char *pcVar5;
  uint local_dc [4];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  byte local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  
  if (DAT_0006338d != '\0' || DAT_0006338e != '\0') {
    memset(local_dc + 1,0,200);
    local_bc = DAT_00063534;
    local_dc[0] = DAT_00063540;
    iVar1 = FUN_00013938(param_1,0xc0cc5604,local_dc,"VIDIOC_G_FMT");
    if (iVar1 == 0) {
      if (DAT_00063538 == '\0') {
        if ((DAT_0006d8bc & 1) != 0) {
          local_dc[1] = DAT_0006d880;
        }
        if ((DAT_0006d8bc & 2) != 0) {
          local_dc[2] = DAT_0006d87c;
        }
        if (((DAT_0006d8bc & 0x10) != 0) && (local_dc[3] = DAT_0006d878, DAT_0006d878 < 0x100)) {
          local_dc[3] = FUN_000142cc(param_1,DAT_0006d878,1,0);
        }
        if ((DAT_0006d8bc & 0x80) != 0) {
          local_cc = DAT_0006d8b8;
        }
        if ((DAT_0006d8bc & 0x100) != 0) {
          local_c0 = DAT_0006d8b4;
        }
        if ((DAT_0006d8bc & 0x2000) != 0) {
          local_ac = DAT_0006d8b0;
        }
        if ((DAT_0006d8bc & 0x200) != 0) {
          local_b4 = DAT_0006d8ac;
        }
        if ((DAT_0006d8bc & 0x400) != 0) {
          local_b0 = DAT_0006d8a8;
        }
        if ((DAT_0006d8bc & 0x800) != 0) {
          local_b8 = DAT_0006d8a4;
        }
        local_c8 = 0;
        if ((DAT_0006d8bc & 0x1000) != 0) {
          local_c8 = DAT_0006d884;
        }
      }
      else {
        if ((DAT_0006d8bc & 1) != 0) {
          local_dc[1] = DAT_0006d880;
        }
        if ((DAT_0006d8bc & 2) != 0) {
          local_dc[2] = DAT_0006d87c;
        }
        if (((DAT_0006d8bc & 0x10) != 0) && (local_dc[3] = DAT_0006d878, DAT_0006d878 < 0x100)) {
          local_dc[3] = FUN_000142cc(param_1,DAT_0006d878,1);
        }
        if ((DAT_0006d8bc & 0x80) != 0) {
          local_cc = DAT_0006d8b8;
        }
        if ((DAT_0006d8bc & 0x100) != 0) {
          local_c8 = DAT_0006d8b4;
        }
        if ((DAT_0006d8bc & 0x2000) != 0) {
          local_20 = (undefined1)DAT_0006d8b0;
        }
        if ((DAT_0006d8bc & 0x200) != 0) {
          local_22 = (undefined1)DAT_0006d8ac;
        }
        if ((DAT_0006d8bc & 0x400) != 0) {
          local_21 = (undefined1)DAT_0006d8a8;
        }
        if ((DAT_0006d8bc & 0x800) != 0) {
          local_23 = (undefined1)DAT_0006d8a4;
        }
        if ((DAT_0006d8bc & 0x1000) == 0) {
          if (local_24 != 0) {
            puVar4 = local_dc;
            puVar3 = puVar4 + (uint)local_24 * 5;
            do {
              puVar4[7] = 0;
              puVar4 = puVar4 + 5;
            } while (puVar3 != puVar4);
          }
        }
        else {
          puVar3 = local_dc;
          puVar4 = DAT_00022e10;
          do {
            puVar4 = puVar4 + 1;
            puVar3[7] = *puVar4;
            puVar3 = puVar3 + 5;
          } while (DAT_00022e10 + 8 != puVar4);
        }
      }
      if (DAT_0006338d == '\0') {
        uVar2 = 0x5640;
        pcVar5 = "VIDIOC_TRY_FMT";
      }
      else {
        uVar2 = 0x5605;
        pcVar5 = "VIDIOC_S_FMT";
      }
      iVar1 = FUN_00013938(param_1,uVar2 | 0xc0cc0000,local_dc,pcVar5);
      if ((iVar1 == 0) && ((DAT_00063504 != 0 || (DAT_0006338e != '\0')))) {
        FUN_00015e10(local_dc);
      }
    }
  }
  return;
}



/* ===== FUN_00022e14 @ 00022e14 size=140 ===== */

void FUN_00022e14(undefined4 param_1)

{
  int iVar1;
  undefined4 local_d4;
  undefined1 auStack_d0 [28];
  undefined4 local_b4;
  
  if (DAT_00063386 == '\0') {
    return;
  }
  memset(auStack_d0,0,200);
  local_b4 = DAT_00063534;
  local_d4 = DAT_00063540;
  iVar1 = FUN_00013938(param_1,0xc0cc5604,&local_d4,"VIDIOC_G_FMT");
  if (iVar1 != 0) {
    return;
  }
  FUN_00015e10(&local_d4);
  return;
}



/* ===== FUN_00022ea0 @ 00022ea0 size=344 ===== */

void FUN_00022ea0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *apuStack_1c8 [2];
  undefined1 auStack_1c0 [16];
  undefined4 uStack_1b0;
  undefined1 auStack_1ac [28];
  undefined4 uStack_190;
  undefined1 auStack_e4 [16];
  int iStack_d4;
  
  if (DAT_000633a1 != '\0') {
    puts("ioctl: VIDIOC_ENUM_FMT");
    FUN_00016628(param_1,DAT_00063540);
  }
  if (DAT_000633a2 == '\0') {
    return;
  }
  memset(auStack_1ac,0,200);
  uStack_190 = DAT_00063534;
  uStack_1b0 = DAT_00063540;
  iVar1 = FUN_0001391c(param_1,0xc0cc5604,&uStack_1b0);
  if (-1 < iVar1) {
    puts("Supported Video Output Fields:");
    iVar1 = 1;
    do {
      while( true ) {
        memcpy(auStack_e4,&uStack_1b0,0xcc);
        iStack_d4 = iVar1;
        iVar2 = FUN_0001391c(param_1,0xc0cc5640,auStack_e4);
        if ((iVar2 < 0) || (iStack_d4 != iVar1)) break;
        FUN_00015334(apuStack_1c8,iVar1);
        printf("\t%s\n",apuStack_1c8[0]);
        if (apuStack_1c8[0] == auStack_1c0) break;
        iVar1 = iVar1 + 1;
        operator_delete(apuStack_1c8[0]);
        if (iVar1 == 10) {
          return;
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 10);
  }
  return;
}



/* ===== FUN_00022ef8 @ 00022ef8 size=1432 ===== */

void FUN_00022ef8(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 *local_30;
  int local_2c;
  undefined1 local_28 [20];
  
  uVar2 = *param_1;
  puts("Framebuffer Format:");
  uVar1 = *param_1;
  local_2c = 0;
  local_28[0] = 0;
  local_30 = local_28;
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 2) != 0) {
LAB_000230b8:
      std::__cxx11::string::_M_append((char *)&local_30,0x428c0);
LAB_000230d0:
      if ((uVar1 & 0x80) == 0) goto LAB_000230d8;
      if (0x13 < 0x7fffffffU - local_2c) goto LAB_000231f8;
LAB_000233f8:
      std::__throw_length_error("basic_string::append");
      goto LAB_00023404;
    }
    if ((uVar1 & 0x80) != 0) {
LAB_000231f8:
      std::__cxx11::string::_M_append((char *)&local_30,0x428d0);
LAB_000230d8:
      if ((uVar1 & 0x20) == 0) goto LAB_00022f50;
      if (0xf < 0x7fffffffU - local_2c) goto LAB_000230f0;
      goto LAB_00023434;
    }
    if ((uVar1 & 0x20) != 0) {
LAB_000230f0:
      std::__cxx11::string::_M_append((char *)&local_30,0x428e8);
      if ((uVar1 & 0x10) == 0) goto joined_r0x0002313c;
LAB_00023110:
      if (0xe < 0x7fffffffU - local_2c) {
        std::__cxx11::string::_M_append((char *)&local_30,0x428fc);
        goto joined_r0x0002313c;
      }
      goto LAB_0002344c;
    }
LAB_00022f50:
    if ((uVar1 & 0x10) != 0) goto LAB_00023110;
joined_r0x0002313c:
    if ((uVar1 & 0x40) != 0) {
      if (0x17 < 0x7fffffffU - local_2c) {
        std::__cxx11::string::_M_append((char *)&local_30,0x4290c);
        goto joined_r0x0002316c;
      }
      goto LAB_00023440;
    }
joined_r0x0002316c:
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 8) == 0) {
joined_r0x000231cc:
        if (local_2c == 0) {
          std::__cxx11::string::_M_append((char *)&local_30,0x42950);
        }
        printf("\tCapability    : %s",local_30 + 3);
        if (local_30 != local_28) {
          operator_delete(local_30);
        }
        uVar1 = param_1[1];
        local_2c = 0;
        local_28[0] = 0;
        if ((uVar1 & 1) != 0) {
          local_30 = local_28;
          std::__cxx11::string::_M_append((char *)&local_30,0x4296c);
          if ((uVar1 & 2) == 0) goto LAB_00023234;
          if (0x26 < 0x7fffffffU - local_2c) goto LAB_00023358;
          std::__throw_length_error("basic_string::append");
LAB_000233ec:
          std::__throw_length_error("basic_string::append");
          goto LAB_000233f8;
        }
        local_30 = local_28;
        if ((uVar1 & 2) == 0) {
          if ((uVar1 & 4) != 0) goto LAB_0002332c;
          if ((uVar1 & 0x40) == 0) goto LAB_00022fd0;
LAB_00023254:
          std::__cxx11::string::_M_append((char *)&local_30,0x428d0);
          if ((uVar1 & 0x10) == 0) goto joined_r0x000232a0;
LAB_00023274:
          if (0xf < 0x7fffffffU - local_2c) {
            std::__cxx11::string::_M_append((char *)&local_30,0x428e8);
            goto joined_r0x000232a0;
          }
          goto LAB_0002341c;
        }
LAB_00023358:
        std::__cxx11::string::_M_append((char *)&local_30,0x4298c);
LAB_00023234:
        if ((uVar1 & 4) != 0) {
          if (0x7fffffffU - local_2c < 0xd) goto LAB_000233ec;
LAB_0002332c:
          std::__cxx11::string::_M_append((char *)&local_30,0x428c0);
        }
        if ((uVar1 & 0x40) != 0) {
          if (0x7fffffffU - local_2c < 0x14) goto LAB_00023470;
          goto LAB_00023254;
        }
LAB_00022fd0:
        if ((uVar1 & 0x10) != 0) goto LAB_00023274;
joined_r0x000232a0:
        if ((uVar1 & 8) != 0) {
          if (0xe < 0x7fffffffU - local_2c) {
            std::__cxx11::string::_M_append((char *)&local_30,0x428fc);
            goto joined_r0x000232d0;
          }
          goto LAB_00023410;
        }
joined_r0x000232d0:
        if ((uVar1 & 0x20) == 0) {
joined_r0x00022fec:
          if (local_2c == 0) {
            std::__cxx11::string::_M_append((char *)&local_30,0x42950);
          }
          printf("\tFlags         : %s",local_30 + 3);
          if (local_30 != local_28) {
            operator_delete(local_30);
          }
          if (param_1[2] != 0) {
            printf("\tBase          : %p\n");
          }
          printf("\tWidth         : %d\n",param_1[3]);
          printf("\tHeight        : %d\n",param_1[4]);
          FUN_000139c8(&local_30,param_1[5]);
          printf("\tPixel Format  : \'%s\'\n",local_30);
          if (local_30 != local_28) {
            operator_delete(local_30);
          }
          if ((uVar2 & 1) == 0) {
            printf("\tBytes per Line: %d\n",param_1[7]);
            printf("\tSize image    : %d\n",param_1[8]);
            FUN_00015768(&local_30,param_1[9]);
            printf("\tColorspace    : %s\n",local_30);
            if (local_30 != local_28) {
              operator_delete(local_30);
            }
            if (param_1[10] != 0) {
              printf("\tCustom Info   : %08x\n");
              return;
            }
          }
          return;
        }
        if (0x17 < 0x7fffffffU - local_2c) {
          std::__cxx11::string::_M_append((char *)&local_30,0x4290c);
          goto joined_r0x00022fec;
        }
        goto LAB_00023428;
      }
LAB_000231a0:
      if (0x12 < 0x7fffffffU - local_2c) {
        std::__cxx11::string::_M_append((char *)&local_30,0x4293c);
        goto joined_r0x000231cc;
      }
      goto LAB_00023458;
    }
    if (0x10 < 0x7fffffffU - local_2c) {
      std::__cxx11::string::_M_append((char *)&local_30,0x42928);
      if ((uVar1 & 8) != 0) goto LAB_000231a0;
      goto joined_r0x000231cc;
    }
  }
  else {
    std::__cxx11::string::_M_append((char *)&local_30,0x428ac);
    if ((uVar1 & 2) == 0) goto LAB_000230d0;
    if (0xc < 0x7fffffffU - local_2c) goto LAB_000230b8;
LAB_00023404:
    std::__throw_length_error("basic_string::append");
LAB_00023410:
    std::__throw_length_error("basic_string::append");
LAB_0002341c:
    std::__throw_length_error("basic_string::append");
LAB_00023428:
    std::__throw_length_error("basic_string::append");
LAB_00023434:
    std::__throw_length_error("basic_string::append");
LAB_00023440:
    std::__throw_length_error("basic_string::append");
LAB_0002344c:
    std::__throw_length_error("basic_string::append");
LAB_00023458:
    std::__throw_length_error("basic_string::append");
  }
  std::__throw_length_error("basic_string::append");
LAB_00023470:
  std::__throw_length_error("basic_string::append");
  if (local_30 != local_28) {
    operator_delete(local_30);
  }
                    /* WARNING: Subroutine does not return */
  __cxa_end_cleanup();
}



/* ===== FUN_000234a4 @ 000234a4 size=12 ===== */

void FUN_000234a4(void)

{
  puts(
      "\nVideo Overlay options:\n  --list-formats-overlay\n                     display supported overlay formats [VIDIOC_ENUM_FMT]\n  --find-fb          find the fb device corresponding with the overlay\n  --overlay=<on>     turn overlay on (1) or off (0) (VIDIOC_OVERLAY)\n  --get-fmt-overlay  query the video or video output overlay format [VIDIOC_G_FMT]\n  --set-fmt-overlay\n  --try-fmt-overlay=chromakey=<key>,global_alpha=<alpha>,\n                           top=<t>,left=<l>,width=<w>,height=<h>,field=<f>\n     \t\t     set/try the video or video output overlay format [VIDIOC_TRY/S_FMT]\n                     <f> can be one of:\n                     any, none, top, bottom, interlaced, seq_tb, seq_bt,\n                     alternate, interlaced_tb, interlaced_bt\n                     If the width or height changed then the old clip list and bitmap will\n                     be invalidated.\n  --clear-clips      clear any old clips, to be used in combination with --try/set-fmt-overlay\n  --clear-bitmap     clear any old bitmap, to be used in combination with --try/set-fmt-overlay\n  --add-clip=top=<t>,left=<l>,width=<w>,height=<h>\n                     Add an entry to the clip list. May be used multiple times.\n                     This clip list will be passed to --try/set-fmt-overlay\n  --add-bitmap=top=<t>,left=<l>,width=<w>,height=<h>\n                     Set the bits in the given rectangle in the bitmap to 1. May be\n                     used multiple times.\n                     The bitmap will be passed to --try/set-fmt-overlay\n  --get-fbuf         query the overlay framebuffer data [VIDIOC_G_FBUF]\n  --set-fbuf=chromakey=<b>,src_chromakey=<b>,global_alpha=<b>,local_alpha=<b>,local_inv_alpha=<b>,fb=<fb>\n\t\t     set the overlay framebuffer [VIDIOC_S_FBUF]\n                     <b> is 0 or 1\n                     <fb> is the framebuffer device (/dev/fbX)\n                     if <fb> starts with a digit, then /dev/fb<fb> is used"
      );
  return;
}



/* ===== FUN_000234b0 @ 000234b0 size=2052 ===== */

void FUN_000234b0(undefined4 param_1)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  void *pvVar12;
  undefined4 *puVar13;
  char *pcVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  void *local_178;
  undefined1 auStack_164 [4];
  uint local_160;
  undefined4 local_15c;
  undefined4 local_158;
  int local_154;
  void *local_150;
  int local_148;
  uint uStack_144;
  undefined4 local_140;
  undefined1 auStack_138 [16];
  undefined4 local_128;
  uint local_124;
  int local_10c;
  ushort local_fc;
  undefined4 local_f4;
  int local_f0;
  undefined4 local_ec;
  uint local_e8;
  uint local_e4;
  undefined4 local_e0;
  int local_dc;
  void *local_d8;
  void *local_d4;
  void *local_d0;
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
  undefined4 local_68;
  
  if ((DAT_00063388 != '\0' || DAT_00063392 != '\0') &&
     ((((DAT_0006d8c0 != 0 || (DAT_000633a3 != 0 || DAT_000633a4 != '\0')) ||
       (DAT_0006d8c4 != DAT_0006d8c8)) || (DAT_0006d8d0 != DAT_0006d8d4)))) {
    memset(&local_f0,0,200);
    if ((DAT_00063530 & 4) == 0) {
      local_f4 = 8;
    }
    else {
      local_f4 = 3;
    }
    iVar5 = FUN_00013938(param_1,0xc0cc5604,&local_f4,"VIDIOC_G_FMT");
    if (iVar5 == 0) {
      uVar15 = DAT_0006d8c0 & 1;
      if ((uVar15 == 0) || (bVar2 = false, local_e8 == DAT_0006d8e8)) {
        if ((DAT_0006d8c0 & 2) == 0) {
          bVar2 = true;
        }
        else {
          bVar2 = local_e4 == DAT_0006d8ec;
        }
      }
      pvVar12 = (void *)(uint)DAT_000633a3;
      local_d0 = pvVar12;
      if ((DAT_000633a4 == '\0') && (DAT_0006d8c4 == DAT_0006d8c8)) {
        if (pvVar12 == (void *)0x0) {
          if (DAT_0006d8d0 == DAT_0006d8d4) {
            if (bVar2) {
              pvVar12 = calloc(1,local_e4 * (local_e8 + 7 >> 3));
LAB_00023b88:
              local_d0 = pvVar12;
              if (local_d4 == (void *)0x0) {
                local_178 = local_d4;
              }
              else {
                local_178 = malloc((int)local_d4 * 0x14);
              }
              local_d8 = local_178;
              goto LAB_00023b40;
            }
          }
          else if (bVar2) goto LAB_00023b18;
LAB_00023bd4:
          pvVar12 = (void *)0x0;
          local_178 = (void *)0x0;
          goto LAB_000235d8;
        }
        local_d0 = (void *)0x0;
        if (!bVar2) goto LAB_00023bd4;
LAB_00023b18:
        local_d0 = (void *)0x0;
        local_178 = (void *)0x0;
        pvVar12 = calloc(1,local_e4 * (local_e8 + 7 >> 3));
        local_d0 = pvVar12;
LAB_00023b40:
        iVar5 = FUN_00013938(param_1,0xc0cc5604,&local_f4,"VIDIOC_G_FMT");
        if (iVar5 == 0) {
          uVar15 = DAT_0006d8c0 & 1;
          goto LAB_000235d8;
        }
      }
      else {
        if (pvVar12 == (void *)0x0) {
          if (DAT_0006d8d0 == DAT_0006d8d4) {
            if (bVar2) goto LAB_00023b88;
            goto LAB_00023bd4;
          }
          pvVar12 = (void *)0x0;
          local_178 = (void *)0x0;
        }
        else {
          pvVar12 = (void *)0x0;
          local_d0 = (void *)0x0;
          local_178 = (void *)0x0;
        }
LAB_000235d8:
        puVar1 = DAT_0006d8c4;
        if ((DAT_0006d8c0 & 4) != 0) {
          local_dc = DAT_0006d8f4;
        }
        if ((DAT_0006d8c0 & 8) != 0) {
          local_cc = CONCAT31(local_cc._1_3_,DAT_0006d904);
        }
        if ((DAT_0006d8c0 & 0x20) != 0) {
          local_f0 = DAT_0006d8e0;
        }
        if ((DAT_0006d8c0 & 0x40) != 0) {
          local_ec = DAT_0006d8e4;
        }
        if (uVar15 != 0) {
          local_e8 = DAT_0006d8e8;
        }
        if ((DAT_0006d8c0 & 2) != 0) {
          local_e4 = DAT_0006d8ec;
        }
        if ((DAT_0006d8c0 & 0x80) != 0) {
          local_e0 = DAT_0006d8f0;
        }
        if (DAT_0006d8d0 != DAT_0006d8d4) {
          local_d4 = (void *)(((int)DAT_0006d8d4 - (int)DAT_0006d8d0 >> 2) * -0x33333333);
          local_d8 = DAT_0006d8d0;
        }
        if (DAT_0006d8c4 != DAT_0006d8c8) {
          iVar5 = (int)DAT_0006d8c8 - (int)DAT_0006d8c4;
          free(pvVar12);
          uVar4 = local_e4;
          uVar3 = local_e8;
          uVar15 = local_e8 + 7 >> 3;
          pvVar12 = calloc(1,local_e4 * uVar15);
          local_d0 = pvVar12;
          if (puVar1[2] + *puVar1 <= uVar3) {
            uVar11 = puVar1[1];
            uVar7 = uVar11 + puVar1[3];
            if (uVar7 <= uVar4) {
              iVar6 = 0;
              do {
                if (uVar11 < uVar7) {
                  iVar10 = uVar11 * uVar15;
                  uVar7 = *puVar1;
                  uVar16 = puVar1[2];
                  do {
                    uVar8 = uVar7;
                    if (uVar7 < uVar7 + uVar16) {
                      do {
                        iVar17 = iVar10 + (uVar8 >> 3);
                        uVar9 = uVar8 + 1;
                        *(byte *)((int)pvVar12 + iVar17) =
                             *(byte *)((int)pvVar12 + iVar17) | (byte)(1 << (uVar8 & 7));
                        uVar7 = *puVar1;
                        uVar16 = puVar1[2];
                        uVar8 = uVar9;
                      } while (uVar9 < uVar7 + uVar16);
                    }
                    uVar11 = uVar11 + 1;
                    iVar10 = iVar10 + uVar15;
                  } while (uVar11 < puVar1[1] + puVar1[3]);
                }
                iVar6 = iVar6 + 1;
                if (iVar5 >> 4 == iVar6) goto LAB_00023a54;
                if (uVar3 < puVar1[4] + puVar1[6]) break;
                uVar11 = puVar1[5];
                uVar7 = uVar11 + puVar1[7];
                puVar1 = puVar1 + 4;
              } while (uVar7 <= uVar4);
            }
          }
          fwrite("rectangle is out of range\n",1,0x1a,stderr);
          goto LAB_00023548;
        }
LAB_00023a54:
        if (DAT_00063388 == '\0') {
          uVar15 = 0x5640;
          pcVar14 = "VIDIOC_TRY_FMT";
        }
        else {
          uVar15 = 0x5605;
          pcVar14 = "VIDIOC_S_FMT";
        }
        iVar5 = FUN_00013938(param_1,uVar15 | 0xc0cc0000,&local_f4,pcVar14);
        if ((iVar5 == 0) && ((DAT_00063504 != 0 || (DAT_00063392 != '\0')))) {
          FUN_00015e10(&local_f4);
        }
      }
      if (pvVar12 != (void *)0x0) {
        free(pvVar12);
      }
      if (local_178 != (void *)0x0) {
        free(local_178);
      }
    }
  }
LAB_00023548:
  if ((DAT_000633ae == '\0') ||
     (iVar5 = FUN_00013938(param_1,0x802c560a,auStack_164,"VIDIOC_G_FBUF"), pcVar14 = DAT_0006d9d8,
     iVar5 != 0)) goto LAB_00023554;
  local_160 = local_160 & ~DAT_0006d9a8 | DAT_0006d9b0;
  if (DAT_0006d9d8 != (char *)0x0) {
    iVar5 = open(DAT_0006d9d8,2);
    if (iVar5 == -1) {
      fprintf(stderr,"cannot open %s\n",pcVar14);
      goto LAB_00023554;
    }
    iVar6 = ioctl(iVar5,0x4602,auStack_138);
    if (iVar6 != 0) {
      fprintf(stderr,"could not obtain fscreeninfo from %s\n",pcVar14);
      close(iVar5);
      goto LAB_00023554;
    }
    iVar6 = ioctl(iVar5,0x4600,&local_f4);
    if (iVar6 != 0) {
      fprintf(stderr,"could not obtain vscreeninfo from %s\n",pcVar14);
      close(iVar5);
      goto LAB_00023554;
    }
    local_148 = local_10c;
    uStack_144 = local_124;
    local_154 = local_f0;
    local_15c = local_128;
    local_158 = local_f4;
    if (local_124 < (uint)(local_10c * local_f0)) {
      fwrite("height * bytesperline > sizeimage?!\n",1,0x24,stderr);
      close(iVar5);
      goto LAB_00023554;
    }
    if (((local_fc & 1) == 0) || (local_d8 < (void *)0x2)) {
      if (local_d8 == (void *)0x1) {
        local_150 = (void *)0x0;
        if (local_dc == 8) {
          local_150 = (void *)0x59455247;
        }
      }
      else {
        pvVar12 = (void *)0x35315241;
        iVar6 = 0;
        iVar10 = 5;
        puVar13 = &DAT_00042704;
        while (((((((local_b4 != 0 || (local_b8 != iVar10)) ||
                   ((local_b8 != 0 && (local_bc != iVar6)))) ||
                  ((local_c0 != 0 || (puVar13[3] != local_c4)))) ||
                 ((local_c4 != 0 && (puVar13[2] != local_c8)))) ||
                ((((local_cc != 0 || ((void *)puVar13[1] != local_d0)) ||
                  ((local_d0 != (void *)0x0 && ((void *)*puVar13 != local_d4)))) ||
                 ((local_a8 != 0 || (puVar13[7] != local_ac)))))) ||
               ((local_150 = pvVar12, local_ac != 0 && (puVar13[6] != local_b0))))) {
          pvVar12 = (void *)puVar13[0x11];
          local_150 = (void *)0x0;
          if (pvVar12 == (void *)0x0) break;
          iVar6 = puVar13[0xd];
          iVar10 = puVar13[0xe];
          puVar13 = puVar13 + 9;
        }
      }
      local_140 = 8;
    }
    else {
      local_150 = local_d8;
      local_140 = local_68;
    }
    FUN_00022ef8(auStack_164);
    close(iVar5);
  }
  FUN_00013938(param_1,0x402c560b,auStack_164,"VIDIOC_S_FBUF");
LAB_00023554:
  if (DAT_000633c5 == '\0') {
    return;
  }
  FUN_00013938(param_1,0x4004560e,DAT_00023cb4,"VIDIOC_OVERLAY");
  return;
}



/* ===== FUN_00023cb8 @ 00023cb8 size=324 ===== */

void FUN_00023cb8(undefined4 param_1)

{
  void *__ptr;
  int iVar1;
  undefined4 local_dc;
  undefined1 auStack_d8 [8];
  int local_d0;
  int local_cc;
  void *local_c0;
  int local_bc;
  void *local_b8;
  
  if (DAT_00063381 != '\0') {
    memset(auStack_d8,0,200);
    if ((DAT_00063530 & 4) == 0) {
      local_dc = 8;
    }
    else {
      local_dc = 3;
    }
    iVar1 = FUN_00013938(param_1,0xc0cc5604,&local_dc,"VIDIOC_G_FMT");
    if (iVar1 == 0) {
      if (local_bc != 0) {
        local_c0 = malloc(local_bc * 0x14);
      }
      __ptr = calloc(1,local_cc * (local_d0 + 7U >> 3));
      local_b8 = __ptr;
      FUN_00013938(param_1,0xc0cc5604,&local_dc,"VIDIOC_G_FMT");
      FUN_00015e10(&local_dc);
      if (local_c0 != (void *)0x0) {
        free(local_c0);
      }
      if (__ptr != (void *)0x0) {
        free(__ptr);
      }
    }
  }
  if ((DAT_000633ad != '\0') &&
     (iVar1 = FUN_00013938(param_1,0x802c560a,&local_dc,"VIDIOC_G_FBUF"), iVar1 == 0)) {
    FUN_00022ef8(&local_dc);
    return;
  }
  return;
}



/* ===== FUN_00023dfc @ 00023dfc size=348 ===== */

void FUN_00023dfc(undefined4 param_1)

{
  int iVar1;
  int __fd;
  int *piVar2;
  int iVar3;
  char acStack_90 [16];
  undefined1 auStack_80 [8];
  int local_78;
  undefined1 auStack_54 [16];
  int local_44;
  
  if (DAT_0006339e != '\0') {
    puts("ioctl: VIDIOC_ENUM_FMT");
    FUN_00016628(param_1,3);
  }
  if ((DAT_000633a7 != '\0') &&
     (iVar1 = FUN_00013938(param_1,0x802c560a,auStack_80,"VIDIOC_G_FBUF"), iVar1 == 0)) {
    if (local_78 == 0) {
      puts("No framebuffer base address was defined");
    }
    else {
      iVar1 = 0;
      do {
        while( true ) {
          snprintf(acStack_90,0x10,"/dev/fb%u",iVar1);
          __fd = open(acStack_90,2);
          if (__fd != -1) break;
          piVar2 = __errno_location();
          if ((*piVar2 != 2) && (*piVar2 != 6)) {
            return;
          }
          iVar1 = iVar1 + 1;
          if (iVar1 == 0x1e) goto LAB_00023ee4;
        }
        iVar3 = ioctl(__fd,0x4602,auStack_54);
        if ((iVar3 == 0) && (local_78 == local_44)) {
          printf("%s is the framebuffer associated with base address %p\n",acStack_90);
          close(__fd);
          return;
        }
        iVar1 = iVar1 + 1;
        close(__fd);
      } while (iVar1 != 0x1e);
LAB_00023ee4:
      printf("No matching framebuffer found for base address %p\n",local_78);
    }
  }
  return;
}



/* ===== FUN_00023f58 @ 00023f58 size=1292 ===== */

void FUN_00023f58(int param_1,byte *param_2)

{
  undefined4 uVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  size_t sVar7;
  long lVar8;
  uint uVar9;
  ulong *puVar10;
  byte *local_44;
  byte *local_40;
  ulong local_3c;
  ulong uStack_38;
  ulong local_34;
  ulong local_30;
  ulong local_2c;
  ulong uStack_28;
  ulong uStack_24;
  ulong uStack_20;
  uint local_1c;
  
  uVar1 = DAT_000244b0;
  uVar4 = DAT_000244ac;
  uVar6 = DAT_000244a8;
  local_40 = param_2;
  if (param_1 < 0xa7) {
    if (param_1 < 0xa5) {
      if ((param_1 == 0x88) || (param_1 == 0x92)) {
        while ((local_40 != (byte *)0x0 && (*local_40 != 0))) {
          uVar4 = FUN_00013b0c(&local_40,uVar6,&local_44);
          switch(uVar4) {
          case 0:
            DAT_0006d8f4 = strtoul((char *)local_44,(char **)0x0,0);
            DAT_0006d8c0 = DAT_0006d8c0 | 4;
            break;
          case 1:
            uVar5 = strtoul((char *)local_44,(char **)0x0,0);
            DAT_0006d8c0 = DAT_0006d8c0 | 8;
            DAT_0006d904 = (undefined1)uVar5;
            break;
          case 2:
            DAT_0006d8e0 = strtol((char *)local_44,(char **)0x0,0);
            DAT_0006d8c0 = DAT_0006d8c0 | 0x20;
            break;
          case 3:
            DAT_0006d8e4 = strtol((char *)local_44,(char **)0x0,0);
            DAT_0006d8c0 = DAT_0006d8c0 | 0x40;
            break;
          case 4:
            DAT_0006d8e8 = strtoul((char *)local_44,(char **)0x0,0);
            DAT_0006d8c0 = DAT_0006d8c0 | 1;
            break;
          case 5:
            DAT_0006d8ec = strtoul((char *)local_44,(char **)0x0,0);
            DAT_0006d8c0 = DAT_0006d8c0 | 2;
            break;
          case 6:
            DAT_0006d8f0 = FUN_00013b84(local_44);
            DAT_0006d8c0 = DAT_0006d8c0 | 0x80;
            break;
          default:
            puts(
                "\nVideo Overlay options:\n  --list-formats-overlay\n                     display supported overlay formats [VIDIOC_ENUM_FMT]\n  --find-fb          find the fb device corresponding with the overlay\n  --overlay=<on>     turn overlay on (1) or off (0) (VIDIOC_OVERLAY)\n  --get-fmt-overlay  query the video or video output overlay format [VIDIOC_G_FMT]\n  --set-fmt-overlay\n  --try-fmt-overlay=chromakey=<key>,global_alpha=<alpha>,\n                           top=<t>,left=<l>,width=<w>,height=<h>,field=<f>\n     \t\t     set/try the video or video output overlay format [VIDIOC_TRY/S_FMT]\n                     <f> can be one of:\n                     any, none, top, bottom, interlaced, seq_tb, seq_bt,\n                     alternate, interlaced_tb, interlaced_bt\n                     If the width or height changed then the old clip list and bitmap will\n                     be invalidated.\n  --clear-clips      clear any old clips, to be used in combination with --try/set-fmt-overlay\n  --clear-bitmap     clear any old bitmap, to be used in combination with --try/set-fmt-overlay\n  --add-clip=top=<t>,left=<l>,width=<w>,height=<h>\n                     Add an entry to the clip list. May be used multiple times.\n                     This clip list will be passed to --try/set-fmt-overlay\n  --add-bitmap=top=<t>,left=<l>,width=<w>,height=<h>\n                     Set the bits in the given rectangle in the bitmap to 1. May be\n                     used multiple times.\n                     The bitmap will be passed to --try/set-fmt-overlay\n  --get-fbuf         query the overlay framebuffer data [VIDIOC_G_FBUF]\n  --set-fbuf=chromakey=<b>,src_chromakey=<b>,global_alpha=<b>,local_alpha=<b>,local_inv_alpha=<b>,fb=<fb>\n\t\t     set the overlay framebuffer [VIDIOC_S_FBUF]\n                     <b> is 0 or 1\n                     <fb> is the framebuffer device (/dev/fbX)\n                     if <fb> starts with a digit, then /dev/fb<fb> is used"
                );
          }
        }
      }
    }
    else {
      uStack_38 = *(ulong *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      local_34 = *(ulong *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      local_30 = *(ulong *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_3c = 0;
      while( true ) {
        local_1c = (uint)*local_40;
        if (local_1c == 0) break;
        uVar6 = FUN_00013b0c(&local_40,uVar4,&local_44);
        switch(uVar6) {
        case 0:
          local_3c = strtoul((char *)local_44,(char **)0x0,0);
          break;
        case 1:
          uStack_38 = strtoul((char *)local_44,(char **)0x0,0);
          break;
        case 2:
          local_34 = strtoul((char *)local_44,(char **)0x0,0);
          break;
        case 3:
          local_30 = strtoul((char *)local_44,(char **)0x0,0);
          break;
        default:
          goto switchD_0002414c_default;
        }
      }
      if ((local_34 == 0) || (local_30 == 0)) {
switchD_0002414c_default:
        puts(
            "\nVideo Overlay options:\n  --list-formats-overlay\n                     display supported overlay formats [VIDIOC_ENUM_FMT]\n  --find-fb          find the fb device corresponding with the overlay\n  --overlay=<on>     turn overlay on (1) or off (0) (VIDIOC_OVERLAY)\n  --get-fmt-overlay  query the video or video output overlay format [VIDIOC_G_FMT]\n  --set-fmt-overlay\n  --try-fmt-overlay=chromakey=<key>,global_alpha=<alpha>,\n                           top=<t>,left=<l>,width=<w>,height=<h>,field=<f>\n     \t\t     set/try the video or video output overlay format [VIDIOC_TRY/S_FMT]\n                     <f> can be one of:\n                     any, none, top, bottom, interlaced, seq_tb, seq_bt,\n                     alternate, interlaced_tb, interlaced_bt\n                     If the width or height changed then the old clip list and bitmap will\n                     be invalidated.\n  --clear-clips      clear any old clips, to be used in combination with --try/set-fmt-overlay\n  --clear-bitmap     clear any old bitmap, to be used in combination with --try/set-fmt-overlay\n  --add-clip=top=<t>,left=<l>,width=<w>,height=<h>\n                     Add an entry to the clip list. May be used multiple times.\n                     This clip list will be passed to --try/set-fmt-overlay\n  --add-bitmap=top=<t>,left=<l>,width=<w>,height=<h>\n                     Set the bits in the given rectangle in the bitmap to 1. May be\n                     used multiple times.\n                     The bitmap will be passed to --try/set-fmt-overlay\n  --get-fbuf         query the overlay framebuffer data [VIDIOC_G_FBUF]\n  --set-fbuf=chromakey=<b>,src_chromakey=<b>,global_alpha=<b>,local_alpha=<b>,local_inv_alpha=<b>,fb=<fb>\n\t\t     set the overlay framebuffer [VIDIOC_S_FBUF]\n                     <b> is 0 or 1\n                     <fb> is the framebuffer device (/dev/fbX)\n                     if <fb> starts with a digit, then /dev/fb<fb> is used"
            );
      }
      else if (param_1 == 0xa6) {
        if (DAT_0006d8c8 == DAT_0006d8cc) {
          FUN_000244f8(&DAT_0006d8c4,DAT_0006d8c8,&local_3c);
        }
        else {
          *DAT_0006d8c8 = local_3c;
          DAT_0006d8c8[1] = uStack_38;
          DAT_0006d8c8[2] = local_34;
          DAT_0006d8c8[3] = local_30;
          DAT_0006d8c8 = DAT_0006d8c8 + 4;
        }
      }
      else {
        local_2c = local_3c;
        uStack_28 = uStack_38;
        uStack_24 = local_34;
        uStack_20 = local_30;
        if (DAT_0006d8d4 == DAT_0006d8d8) {
          FUN_000245fc(&DAT_0006d8d0,DAT_0006d8d4,&local_2c);
        }
        else {
          *DAT_0006d8d4 = local_3c;
          DAT_0006d8d4[1] = uStack_38;
          DAT_0006d8d4[2] = local_34;
          DAT_0006d8d4[3] = local_30;
          puVar10 = DAT_0006d8d4 + 4;
          DAT_0006d8d4 = DAT_0006d8d4 + 5;
          *puVar10 = 0;
        }
      }
    }
  }
  else if (param_1 == 0xae) {
    while (*local_40 != 0) {
      uVar6 = FUN_00013b0c(&local_40,uVar1,&local_44);
      pbVar3 = local_44;
      switch(uVar6) {
      case 0:
        DAT_0006d9b0 = DAT_0006d9b0 & 0xffffffbb;
        lVar8 = strtol((char *)local_44,(char **)0x0,0);
        DAT_0006d9a8 = DAT_0006d9a8 | 0x44;
        if (lVar8 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = 4;
        }
        DAT_0006d9b0 = DAT_0006d9b0 | uVar9;
        break;
      case 1:
        DAT_0006d9b0 = DAT_0006d9b0 & 0xffffffbb;
        lVar8 = strtol((char *)local_44,(char **)0x0,0);
        DAT_0006d9a8 = DAT_0006d9a8 | 0x44;
        if (lVar8 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = 0x40;
        }
        DAT_0006d9b0 = DAT_0006d9b0 | uVar9;
        break;
      case 2:
        DAT_0006d9b0 = DAT_0006d9b0 & 0xffffffc7;
        lVar8 = strtol((char *)local_44,(char **)0x0,0);
        DAT_0006d9a8 = DAT_0006d9a8 | 0x38;
        if (lVar8 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = 0x10;
        }
        DAT_0006d9b0 = DAT_0006d9b0 | uVar9;
        break;
      case 3:
        DAT_0006d9b0 = DAT_0006d9b0 & 0xffffffc7;
        lVar8 = strtol((char *)local_44,(char **)0x0,0);
        DAT_0006d9a8 = DAT_0006d9a8 | 0x38;
        if (lVar8 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = 8;
        }
        DAT_0006d9b0 = DAT_0006d9b0 | uVar9;
        break;
      case 4:
        DAT_0006d9b0 = DAT_0006d9b0 & 0xffffffc7;
        lVar8 = strtol((char *)local_44,(char **)0x0,0);
        DAT_0006d9a8 = DAT_0006d9a8 | 0x38;
        if (lVar8 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = 0x20;
        }
        DAT_0006d9b0 = DAT_0006d9b0 | uVar9;
        break;
      case 5:
        DAT_0006d9d8 = local_44;
        if ((*local_44 - 0x30 < 10) &&
           (sVar7 = strlen((char *)local_44), pbVar2 = DAT_000244b4, sVar7 < 4)) {
          sprintf((char *)DAT_000244b4,"/dev/fb%s",pbVar3);
          DAT_0006d9d8 = pbVar2;
        }
        break;
      default:
        puts(
            "\nVideo Overlay options:\n  --list-formats-overlay\n                     display supported overlay formats [VIDIOC_ENUM_FMT]\n  --find-fb          find the fb device corresponding with the overlay\n  --overlay=<on>     turn overlay on (1) or off (0) (VIDIOC_OVERLAY)\n  --get-fmt-overlay  query the video or video output overlay format [VIDIOC_G_FMT]\n  --set-fmt-overlay\n  --try-fmt-overlay=chromakey=<key>,global_alpha=<alpha>,\n                           top=<t>,left=<l>,width=<w>,height=<h>,field=<f>\n     \t\t     set/try the video or video output overlay format [VIDIOC_TRY/S_FMT]\n                     <f> can be one of:\n                     any, none, top, bottom, interlaced, seq_tb, seq_bt,\n                     alternate, interlaced_tb, interlaced_bt\n                     If the width or height changed then the old clip list and bitmap will\n                     be invalidated.\n  --clear-clips      clear any old clips, to be used in combination with --try/set-fmt-overlay\n  --clear-bitmap     clear any old bitmap, to be used in combination with --try/set-fmt-overlay\n  --add-clip=top=<t>,left=<l>,width=<w>,height=<h>\n                     Add an entry to the clip list. May be used multiple times.\n                     This clip list will be passed to --try/set-fmt-overlay\n  --add-bitmap=top=<t>,left=<l>,width=<w>,height=<h>\n                     Set the bits in the given rectangle in the bitmap to 1. May be\n                     used multiple times.\n                     The bitmap will be passed to --try/set-fmt-overlay\n  --get-fbuf         query the overlay framebuffer data [VIDIOC_G_FBUF]\n  --set-fbuf=chromakey=<b>,src_chromakey=<b>,global_alpha=<b>,local_alpha=<b>,local_inv_alpha=<b>,fb=<fb>\n\t\t     set the overlay framebuffer [VIDIOC_S_FBUF]\n                     <b> is 0 or 1\n                     <fb> is the framebuffer device (/dev/fbX)\n                     if <fb> starts with a digit, then /dev/fb<fb> is used"
            );
      }
    }
  }
  else if (param_1 == 0xc5) {
    DAT_0006d9dc = strtol((char *)param_2,(char **)0x0,0);
  }
  return;
}



/* ===== FUN_000244d8 @ 000244d8 size=32 ===== */

undefined4 * FUN_000244d8(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
  }
  return param_1;
}



/* ===== FUN_000244f8 @ 000244f8 size=260 ===== */

void FUN_000244f8(undefined4 *param_1,void *param_2,undefined4 *param_3)

{
  uint uVar1;
  void *__dest;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *__dest_00;
  void *__src;
  void *pvVar5;
  size_t __n;
  uint uVar6;
  undefined4 *puVar7;
  int local_2c;
  
  __src = (void *)*param_1;
  pvVar5 = (void *)param_1[1];
  __n = (int)param_2 - (int)__src;
  uVar1 = (int)pvVar5 - (int)__src >> 4;
  if (uVar1 == 0) {
    uVar6 = 1;
LAB_000245f4:
    uVar6 = uVar6 << 4;
LAB_00024534:
    __dest = operator_new(uVar6);
    local_2c = (int)__dest + uVar6;
  }
  else {
    uVar6 = uVar1 * 2;
    if ((uVar6 < uVar1) || (0xfffffff < uVar6)) {
      uVar6 = 0xfffffff0;
      goto LAB_00024534;
    }
    if (uVar6 != 0) goto LAB_000245f4;
    __dest = (void *)0x0;
    local_2c = 0;
  }
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  puVar7 = (undefined4 *)((int)__dest + __n);
  __dest_00 = (void *)((int)__dest + __n + 0x10);
  *puVar7 = *param_3;
  puVar7[1] = uVar2;
  puVar7[2] = uVar3;
  puVar7[3] = uVar4;
  if (param_2 == __src) {
    if (param_2 != pvVar5) goto LAB_00024588;
LAB_00024598:
    if (__src == (void *)0x0) goto LAB_000245a0;
  }
  else {
    memmove(__dest,__src,__n);
    if (param_2 != pvVar5) {
LAB_00024588:
      memcpy(__dest_00,param_2,(int)pvVar5 - (int)param_2);
      goto LAB_00024598;
    }
  }
  operator_delete(__src);
LAB_000245a0:
  *param_1 = __dest;
  param_1[1] = (int)__dest_00 + ((int)pvVar5 - (int)param_2);
  param_1[2] = local_2c;
  return;
}



/* ===== FUN_000245fc @ 000245fc size=300 ===== */

void FUN_000245fc(undefined4 *param_1,void *param_2,undefined4 *param_3)

{
  int iVar1;
  void *__dest;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  void *__dest_00;
  void *__src;
  void *pvVar6;
  size_t __n;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int local_2c;
  
  __src = (void *)*param_1;
  pvVar6 = (void *)param_1[1];
  __n = (int)param_2 - (int)__src;
  iVar1 = (int)pvVar6 - (int)__src >> 2;
  uVar4 = iVar1 * -0x33333333;
  if (uVar4 == 0) {
    uVar7 = 1;
LAB_0002471c:
    uVar7 = uVar7 * 0x14;
LAB_00024648:
    __dest = operator_new(uVar7);
    local_2c = (int)__dest + uVar7;
  }
  else {
    uVar7 = iVar1 * -0x66666666;
    if ((uVar7 <= uVar4 && uVar4 != 0) || (0xccccccc < uVar7)) {
      uVar7 = 0xfffffff0;
      goto LAB_00024648;
    }
    if (uVar7 != 0) goto LAB_0002471c;
    __dest = (void *)0x0;
    local_2c = 0;
  }
  puVar9 = (undefined4 *)((int)__dest + __n);
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar5 = param_3[3];
  __dest_00 = (void *)((int)__dest + __n + 0x14);
  uVar8 = param_3[4];
  *puVar9 = *param_3;
  puVar9[1] = uVar2;
  puVar9[2] = uVar3;
  puVar9[3] = uVar5;
  puVar9[4] = uVar8;
  if (param_2 == __src) {
    if (param_2 != pvVar6) goto LAB_000246a8;
LAB_000246b8:
    if (__src == (void *)0x0) goto LAB_000246c0;
  }
  else {
    memmove(__dest,__src,__n);
    if (param_2 != pvVar6) {
LAB_000246a8:
      memcpy(__dest_00,param_2,(int)pvVar6 - (int)param_2);
      goto LAB_000246b8;
    }
  }
  operator_delete(__src);
LAB_000246c0:
  *param_1 = __dest;
  param_1[1] = (int)__dest_00 + ((int)pvVar6 - (int)param_2);
  param_1[2] = local_2c;
  return;
}



/* ===== FUN_00024728 @ 00024728 size=224 ===== */

void FUN_00024728(undefined2 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *local_50 [2];
  undefined1 auStack_48 [16];
  undefined1 *local_38 [2];
  undefined1 auStack_30 [20];
  
  FUN_00015ab8(local_38,*(undefined4 *)(param_1 + 0x32));
  printf("\tType           : %s\n",local_38[0]);
  if (local_38[0] != auStack_30) {
    operator_delete(local_38[0]);
  }
  FUN_00014b24(local_38,*param_1);
  printf("\tService Set    : %s\n",local_38[0]);
  if (local_38[0] != auStack_30) {
    operator_delete(local_38[0]);
  }
  param_1 = param_1 + 0x18;
  iVar2 = 0;
  do {
    FUN_00014b24(local_50,param_1[-0x17]);
    puVar1 = local_50[0];
    param_1 = param_1 + 1;
    FUN_00014b24(local_38,*param_1);
    printf("\tService Line %2d: %8s / %-8s\n",iVar2,puVar1,local_38[0]);
    if (local_38[0] != auStack_30) {
      operator_delete(local_38[0]);
    }
    if (local_50[0] != auStack_48) {
      operator_delete(local_50[0]);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x18);
  return;
}



/* ===== FUN_00024854 @ 00024854 size=96 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00024854(int *param_1)

{
  if (_DAT_0006d9f8 != 0) {
    *param_1 = _DAT_0006d9f8;
  }
  if (DAT_0006d9fc != 0) {
    param_1[1] = DAT_0006d9fc;
  }
  if ((int)DAT_0006da00 != 0) {
    param_1[2] = (int)DAT_0006da00;
  }
  if (_DAT_0006da08 != 0) {
    param_1[4] = _DAT_0006da08;
  }
  if (DAT_0006da0c != 0) {
    param_1[5] = DAT_0006da0c;
  }
  if (_DAT_0006da10 != 0) {
    param_1[6] = _DAT_0006da10;
  }
  if (DAT_0006da14 != 0) {
    param_1[7] = DAT_0006da14;
  }
  return;
}



/* ===== FUN_000248b4 @ 000248b4 size=12 ===== */

void FUN_000248b4(void)

{
  puts(
      "\nVBI Formats options:\n  --get-sliced-vbi-cap\n\t\t     query the sliced VBI capture capabilities\n                     [VIDIOC_G_SLICED_VBI_CAP]\n  --get-sliced-vbi-out-cap\n\t\t     query the sliced VBI output capabilities\n                     [VIDIOC_G_SLICED_VBI_CAP]\n  -B, --get-fmt-sliced-vbi\n\t\t     query the sliced VBI capture format [VIDIOC_G_FMT]\n  --get-fmt-sliced-vbi-out\n\t\t     query the sliced VBI output format [VIDIOC_G_FMT]\n  -b, --set-fmt-sliced-vbi\n  --try-fmt-sliced-vbi\n  --set-fmt-sliced-vbi-out\n  --try-fmt-sliced-vbi-out=<mode>\n                     set/try the sliced VBI capture/output format to <mode>\n                     [VIDIOC_S/TRY_FMT], <mode> is a comma separated list of:\n                     off:      turn off sliced VBI (cannot be combined with\n                               other modes)\n                     teletext: teletext (PAL/SECAM)\n                     cc:       closed caption (NTSC)\n                     wss:      widescreen signal (PAL/SECAM)\n                     vps:      VPS (PAL/SECAM)\n  --get-fmt-vbi      query the VBI capture format [VIDIOC_G_FMT]\n  --get-fmt-vbi-out  query the VBI output format [VIDIOC_G_FMT]\n  --set-fmt-vbi\n  --try-fmt-vbi\n  --set-fmt-vbi-out\n  --try-fmt-vbi-out=samplingrate=<r>,offset=<o>,samplesperline=<spl>,\n                     start0=<s0>,count0=<c0>,start1=<s1>,count1=<c1>\n                     set/try the raw VBI capture/output format [VIDIOC_S/TRY_FMT]\n                     samplingrate: samples per second\n                     offset: horizontal offset in samples\n                     samplesperline: samples per line\n                     start0: start line number of the first field\n                     count0: number of lines in the first field\n                     start1: start line number of the second field\n                     count1: number of lines in the second field"
      );
  return;
}



/* ===== FUN_000248c0 @ 000248c0 size=744 ===== */

void FUN_000248c0(undefined4 param_1,char *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  ulong uVar3;
  int iVar4;
  char *__ptr;
  size_t __n;
  undefined4 *puVar5;
  int iVar6;
  char *local_28;
  char *local_24 [2];
  
  switch(param_1) {
  case 0x62:
  case 0x90:
    iVar6 = DAT_00024c90;
    break;
  default:
    goto switchD_000248d4_caseD_63;
  case 0x87:
  case 0x8f:
    iVar6 = DAT_00024c94;
    break;
  case 0x89:
  case 0x93:
    puVar5 = &DAT_0006d9f4;
    goto LAB_000249cc;
  case 0x8a:
  case 0x94:
    puVar5 = DAT_00024c98;
LAB_000249cc:
    uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    puVar5[9] = 0;
    puVar5[10] = uVar2;
    puVar5[1] = 0;
    puVar5[2] = uVar2;
    puVar5[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    puVar5[4] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    puVar5[5] = 0;
    puVar5[6] = uVar2;
    puVar5[7] = 0;
    puVar5[8] = uVar2;
    puVar5[10] = 0;
    puVar5[0xb] = uVar2;
    local_24[0] = param_2;
    while (*local_24[0] != '\0') {
      uVar2 = FUN_00013b0c(local_24,&PTR_s_samplingrate_000433dc,&local_28);
      switch(uVar2) {
      case 0:
        uVar3 = strtoul(local_28,(char **)0x0,0);
        puVar5[1] = uVar3;
        break;
      case 1:
        uVar3 = strtoul(local_28,(char **)0x0,0);
        puVar5[2] = uVar3;
        break;
      case 2:
        uVar3 = strtoul(local_28,(char **)0x0,0);
        puVar5[3] = uVar3;
        break;
      case 3:
        uVar3 = strtoul(local_28,(char **)0x0,0);
        puVar5[5] = uVar3;
        break;
      case 4:
        uVar3 = strtoul(local_28,(char **)0x0,0);
        puVar5[6] = uVar3;
        break;
      case 5:
        uVar3 = strtoul(local_28,(char **)0x0,0);
        puVar5[7] = uVar3;
        break;
      case 6:
        uVar3 = strtoul(local_28,(char **)0x0,0);
        puVar5[8] = uVar3;
        break;
      default:
        puts(
            "\nVBI Formats options:\n  --get-sliced-vbi-cap\n\t\t     query the sliced VBI capture capabilities\n                     [VIDIOC_G_SLICED_VBI_CAP]\n  --get-sliced-vbi-out-cap\n\t\t     query the sliced VBI output capabilities\n                     [VIDIOC_G_SLICED_VBI_CAP]\n  -B, --get-fmt-sliced-vbi\n\t\t     query the sliced VBI capture format [VIDIOC_G_FMT]\n  --get-fmt-sliced-vbi-out\n\t\t     query the sliced VBI output format [VIDIOC_G_FMT]\n  -b, --set-fmt-sliced-vbi\n  --try-fmt-sliced-vbi\n  --set-fmt-sliced-vbi-out\n  --try-fmt-sliced-vbi-out=<mode>\n                     set/try the sliced VBI capture/output format to <mode>\n                     [VIDIOC_S/TRY_FMT], <mode> is a comma separated list of:\n                     off:      turn off sliced VBI (cannot be combined with\n                               other modes)\n                     teletext: teletext (PAL/SECAM)\n                     cc:       closed caption (NTSC)\n                     wss:      widescreen signal (PAL/SECAM)\n                     vps:      VPS (PAL/SECAM)\n  --get-fmt-vbi      query the VBI capture format [VIDIOC_G_FMT]\n  --get-fmt-vbi-out  query the VBI output format [VIDIOC_G_FMT]\n  --set-fmt-vbi\n  --try-fmt-vbi\n  --set-fmt-vbi-out\n  --try-fmt-vbi-out=samplingrate=<r>,offset=<o>,samplesperline=<spl>,\n                     start0=<s0>,count0=<c0>,start1=<s1>,count1=<c1>\n                     set/try the raw VBI capture/output format [VIDIOC_S/TRY_FMT]\n                     samplingrate: samples per second\n                     offset: horizontal offset in samples\n                     samplesperline: samples per line\n                     start0: start line number of the first field\n                     count0: number of lines in the first field\n                     start1: start line number of the second field\n                     count1: number of lines in the second field"
            );
      }
    }
    goto switchD_000248d4_caseD_63;
  }
  bVar1 = false;
  *(undefined2 *)(iVar6 + 4) = 0;
  if (*param_2 == '\0') {
    __n = 0xd;
    __ptr = "empty string\n";
LAB_00024c4c:
    fwrite(__ptr,1,__n,stderr);
    puts(
        "\nVBI Formats options:\n  --get-sliced-vbi-cap\n\t\t     query the sliced VBI capture capabilities\n                     [VIDIOC_G_SLICED_VBI_CAP]\n  --get-sliced-vbi-out-cap\n\t\t     query the sliced VBI output capabilities\n                     [VIDIOC_G_SLICED_VBI_CAP]\n  -B, --get-fmt-sliced-vbi\n\t\t     query the sliced VBI capture format [VIDIOC_G_FMT]\n  --get-fmt-sliced-vbi-out\n\t\t     query the sliced VBI output format [VIDIOC_G_FMT]\n  -b, --set-fmt-sliced-vbi\n  --try-fmt-sliced-vbi\n  --set-fmt-sliced-vbi-out\n  --try-fmt-sliced-vbi-out=<mode>\n                     set/try the sliced VBI capture/output format to <mode>\n                     [VIDIOC_S/TRY_FMT], <mode> is a comma separated list of:\n                     off:      turn off sliced VBI (cannot be combined with\n                               other modes)\n                     teletext: teletext (PAL/SECAM)\n                     cc:       closed caption (NTSC)\n                     wss:      widescreen signal (PAL/SECAM)\n                     vps:      VPS (PAL/SECAM)\n  --get-fmt-vbi      query the VBI capture format [VIDIOC_G_FMT]\n  --get-fmt-vbi-out  query the VBI output format [VIDIOC_G_FMT]\n  --set-fmt-vbi\n  --try-fmt-vbi\n  --set-fmt-vbi-out\n  --try-fmt-vbi-out=samplingrate=<r>,offset=<o>,samplesperline=<spl>,\n                     start0=<s0>,count0=<c0>,start1=<s1>,count1=<c1>\n                     set/try the raw VBI capture/output format [VIDIOC_S/TRY_FMT]\n                     samplingrate: samples per second\n                     offset: horizontal offset in samples\n                     samplesperline: samples per line\n                     start0: start line number of the first field\n                     count0: number of lines in the first field\n                     start1: start line number of the second field\n                     count1: number of lines in the second field"
        );
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  do {
    local_24[0] = strchr(param_2,0x2c);
    if (local_24[0] == (char *)0x0) {
      iVar4 = strcmp(param_2,"off");
      if (iVar4 == 0) goto LAB_000249b0;
LAB_00024b88:
      iVar4 = strcmp(param_2,"teletext");
      if (iVar4 == 0) {
        *(ushort *)(iVar6 + 4) = *(ushort *)(iVar6 + 4) | 1;
      }
      else {
        iVar4 = strcmp(param_2,"cc");
        if (iVar4 == 0) {
          *(ushort *)(iVar6 + 4) = *(ushort *)(iVar6 + 4) | 0x1000;
        }
        else {
          iVar4 = strcmp(param_2,"wss");
          if (iVar4 == 0) {
            *(ushort *)(iVar6 + 4) = *(ushort *)(iVar6 + 4) | 0x4000;
          }
          else {
            iVar4 = strcmp(param_2,"vps");
            if (iVar4 == 0) {
              *(ushort *)(iVar6 + 4) = *(ushort *)(iVar6 + 4) | 0x400;
            }
            else {
              puts(
                  "\nVBI Formats options:\n  --get-sliced-vbi-cap\n\t\t     query the sliced VBI capture capabilities\n                     [VIDIOC_G_SLICED_VBI_CAP]\n  --get-sliced-vbi-out-cap\n\t\t     query the sliced VBI output capabilities\n                     [VIDIOC_G_SLICED_VBI_CAP]\n  -B, --get-fmt-sliced-vbi\n\t\t     query the sliced VBI capture format [VIDIOC_G_FMT]\n  --get-fmt-sliced-vbi-out\n\t\t     query the sliced VBI output format [VIDIOC_G_FMT]\n  -b, --set-fmt-sliced-vbi\n  --try-fmt-sliced-vbi\n  --set-fmt-sliced-vbi-out\n  --try-fmt-sliced-vbi-out=<mode>\n                     set/try the sliced VBI capture/output format to <mode>\n                     [VIDIOC_S/TRY_FMT], <mode> is a comma separated list of:\n                     off:      turn off sliced VBI (cannot be combined with\n                               other modes)\n                     teletext: teletext (PAL/SECAM)\n                     cc:       closed caption (NTSC)\n                     wss:      widescreen signal (PAL/SECAM)\n                     vps:      VPS (PAL/SECAM)\n  --get-fmt-vbi      query the VBI capture format [VIDIOC_G_FMT]\n  --get-fmt-vbi-out  query the VBI output format [VIDIOC_G_FMT]\n  --set-fmt-vbi\n  --try-fmt-vbi\n  --set-fmt-vbi-out\n  --try-fmt-vbi-out=samplingrate=<r>,offset=<o>,samplesperline=<spl>,\n                     start0=<s0>,count0=<c0>,start1=<s1>,count1=<c1>\n                     set/try the raw VBI capture/output format [VIDIOC_S/TRY_FMT]\n                     samplingrate: samples per second\n                     offset: horizontal offset in samples\n                     samplesperline: samples per line\n                     start0: start line number of the first field\n                     count0: number of lines in the first field\n                     start1: start line number of the second field\n                     count1: number of lines in the second field"
                  );
            }
          }
        }
      }
    }
    else {
      *local_24[0] = '\0';
      iVar4 = strcmp(param_2,"off");
      if (iVar4 != 0) goto LAB_00024b88;
      bVar1 = true;
    }
  } while ((local_24[0] != (char *)0x0) && (param_2 = local_24[0] + 1, local_24[0][1] != '\0'));
  if (bVar1) {
LAB_000249b0:
    if (*(short *)(iVar6 + 4) != 0) {
      __ptr = "Sliced VBI mode \'off\' cannot be combined with other modes\n";
      __n = 0x3a;
      goto LAB_00024c4c;
    }
  }
switchD_000248d4_caseD_63:
  return;
}



/* ===== FUN_00024c9c @ 00024c9c size=684 ===== */

void FUN_00024c9c(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 local_dc;
  undefined1 auStack_d8 [200];
  
  if (DAT_00063362 == '\0') {
    if (DAT_00063390 != '\0') {
      DAT_0006dac0 = 6;
      iVar1 = FUN_00013938(param_1,0xc0cc5640,&DAT_0006dac0,"VIDIOC_TRY_FMT");
      goto LAB_00024ce0;
    }
LAB_00024ce8:
    if (DAT_00063387 != '\0') goto LAB_00024cf4;
LAB_00024ed0:
    if (DAT_0006338f == '\0') goto LAB_00024d44;
    DAT_0006db8c = 7;
    iVar1 = FUN_00013938(param_1,0xc0cc5640,&DAT_0006db8c,"VIDIOC_TRY_FMT");
  }
  else {
    DAT_0006dac0 = 6;
    iVar1 = FUN_00013938(param_1,0xc0cc5605,&DAT_0006dac0,"VIDIOC_S_FMT");
LAB_00024ce0:
    if ((iVar1 != 0) || ((DAT_00063504 == 0 && (DAT_00063390 == '\0')))) goto LAB_00024ce8;
    FUN_00015e10(DAT_00024f48);
    if (DAT_00063387 == '\0') goto LAB_00024ed0;
LAB_00024cf4:
    DAT_0006db8c = 7;
    iVar1 = FUN_00013938(param_1,0xc0cc5605,&DAT_0006db8c,"VIDIOC_S_FMT");
  }
  if ((iVar1 == 0) && ((DAT_00063504 != 0 || (DAT_0006338f != '\0')))) {
    FUN_00015e10(DAT_00024f4c);
  }
LAB_00024d44:
  if (DAT_00063389 != '\0' || DAT_00063393 != '\0') {
    DAT_0006dac0 = 4;
    local_dc = 4;
    FUN_00013938(param_1,0xc0cc5604,&local_dc,"VIDIOC_G_FMT");
    FUN_00024854(auStack_d8);
    if (DAT_00063389 == '\0') {
      uVar2 = 0x5640;
      pcVar3 = "VIDIOC_TRY_FMT";
    }
    else {
      uVar2 = 0x5605;
      pcVar3 = "VIDIOC_S_FMT";
    }
    iVar1 = FUN_00013938(param_1,uVar2 | 0xc0cc0000,&DAT_0006d9f4,pcVar3);
    if ((iVar1 == 0) && ((DAT_00063504 != 0 || (DAT_00063393 != '\0')))) {
      FUN_00015e10(DAT_00024f48);
    }
  }
  if (DAT_0006338a != '\0' || DAT_00063394 != '\0') {
    DAT_0006dac0 = 5;
    local_dc = 5;
    FUN_00013938(param_1,0xc0cc5604,&local_dc,"VIDIOC_G_FMT");
    FUN_00024854(auStack_d8);
    if (DAT_0006338a == '\0') {
      uVar2 = 0x5640;
      pcVar3 = "VIDIOC_TRY_FMT";
    }
    else {
      uVar2 = 0x5605;
      pcVar3 = "VIDIOC_S_FMT";
    }
    iVar1 = FUN_00013938(param_1,uVar2 | 0xc0cc0000,&DAT_0006d9f4,pcVar3);
    if ((iVar1 == 0) && ((DAT_00063504 != 0 || (DAT_00063394 != '\0')))) {
      FUN_00015e10(DAT_00024f48);
    }
  }
  return;
}



/* ===== FUN_00024f50 @ 00024f50 size=316 ===== */

void FUN_00024f50(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_00063342 != '\0') {
    DAT_0006dac0 = 6;
    iVar1 = FUN_00013938(param_1,0xc0cc5604,&DAT_0006dac0,"VIDIOC_G_FMT");
    if (iVar1 == 0) {
      FUN_00015e10(&DAT_0006dac0);
    }
  }
  if (DAT_00063380 != '\0') {
    DAT_0006db8c = 7;
    iVar1 = FUN_00013938(param_1,0xc0cc5604,&DAT_0006db8c,"VIDIOC_G_FMT");
    if (iVar1 == 0) {
      FUN_00015e10(&DAT_0006db8c);
    }
  }
  if (DAT_00063382 != '\0') {
    DAT_0006d9f4 = 4;
    iVar1 = FUN_00013938(param_1,0xc0cc5604,&DAT_0006d9f4,"VIDIOC_G_FMT");
    if (iVar1 == 0) {
      FUN_00015e10(&DAT_0006d9f4);
    }
  }
  if (DAT_00063383 == '\0') {
    return;
  }
  DAT_0006dc58 = 5;
  iVar1 = FUN_00013938(param_1,0xc0cc5604,&DAT_0006dc58,"VIDIOC_G_FMT");
  if (iVar1 != 0) {
    return;
  }
  FUN_00015e10(&DAT_0006dc58);
  return;
}



/* ===== FUN_0002508c @ 0002508c size=172 ===== */

void FUN_0002508c(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_84 [100];
  undefined4 local_20;
  
  if (DAT_000633ab != '\0') {
    local_20 = 6;
    iVar1 = FUN_00013938(param_1,0xc0745645,auStack_84,"VIDIOC_G_SLICED_VBI_CAP");
    if (iVar1 == 0) {
      FUN_00024728(auStack_84);
    }
  }
  if (DAT_000633ac != '\0') {
    local_20 = 7;
    iVar1 = FUN_00013938(param_1,0xc0745645,auStack_84,"VIDIOC_G_SLICED_VBI_CAP");
    if (iVar1 == 0) {
      FUN_00024728(auStack_84);
      return;
    }
  }
  return;
}



/* ===== FUN_00025138 @ 00025138 size=252 ===== */

void FUN_00025138(char *param_1,uint *param_2,long *param_3)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  char *local_18;
  char *local_14;
  
  cVar1 = *param_1;
  local_14 = param_1;
  while (cVar1 != '\0') {
    uVar2 = FUN_00013b0c(&local_14,&PTR_DAT_00043bf8,&local_18);
    switch(uVar2) {
    case 0:
      lVar3 = strtol(local_18,(char **)0x0,0);
      *param_3 = lVar3;
      *param_2 = *param_2 | 4;
      break;
    case 1:
      lVar3 = strtol(local_18,(char **)0x0,0);
      param_3[1] = lVar3;
      *param_2 = *param_2 | 8;
      break;
    case 2:
      lVar3 = strtol(local_18,(char **)0x0,0);
      param_3[2] = lVar3;
      *param_2 = *param_2 | 1;
      break;
    case 3:
      lVar3 = strtol(local_18,(char **)0x0,0);
      param_3[3] = lVar3;
      *param_2 = *param_2 | 2;
      break;
    default:
      puts(
          "\nSelection/Cropping options:\n  --get-cropcap      query the crop capabilities [VIDIOC_CROPCAP]\n  --get-crop\t     query the video capture crop window [VIDIOC_G_CROP]\n  --set-crop=top=<x>,left=<y>,width=<w>,height=<h>\n                     set the video capture crop window [VIDIOC_S_CROP]\n  --get-cropcap-output\n                     query crop capabilities for video output [VIDIOC_CROPCAP]\n  --get-crop-output  query the video output crop window [VIDIOC_G_CROP]\n  --set-crop-output=top=<x>,left=<y>,width=<w>,height=<h>\n                     set the video output crop window [VIDIOC_S_CROP]\n  --get-cropcap-overlay\n                     query crop capabilities for video overlay [VIDIOC_CROPCAP]\n  --get-crop-overlay query the video overlay crop window [VIDIOC_G_CROP]\n  --set-crop-overlay=top=<x>,left=<y>,width=<w>,height=<h>\n                     set the video overlay crop window [VIDIOC_S_CROP]\n  --get-cropcap-output-overlay\n                     query the crop capabilities for video output overlays\n                     [VIDIOC_CROPCAP]\n  --get-crop-output-overlay\n                     query the video output overlay crop window [VIDIOC_G_CROP]\n  --set-crop-output-overlay=top=<x>,left=<y>,width=<w>,height=<h>\n                     set the video output overlay crop window [VIDIOC_S_CROP]\n  --get-selection=target=<target>\n                     query the video capture selection rectangle [VIDIOC_G_SELECTION]\n                     See --set-selection command for the valid <target> values.\n  --set-selection=target=<target>,flags=<flags>,top=<x>,left=<y>,width=<w>,height=<h>\n                     set the video capture selection rectangle [VIDIOC_S_SELECTION]\n                     target=crop|crop_bounds|crop_default|compose|compose_bounds|\n                            compose_default|compose_padded|native_size\n                     flags=le|ge\n  --get-selection-output=target=<target>\n                     query the video output selection rectangle [VIDIOC_G_SELECTION]\n                     See --set-selection command for the valid <target> va..." /* TRUNCATED STRING LITERAL */
          );
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    cVar1 = *local_14;
  }
  return;
}



/* ===== FUN_00025244 @ 00025244 size=648 ===== */

void FUN_00025244(char *param_1,uint *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  size_t __n;
  char *local_28;
  char *local_24 [2];
  
  uVar2 = DAT_000254e4;
  cVar1 = *param_1;
  local_24[0] = param_1;
  do {
    if (cVar1 == '\0') {
      return;
    }
    uVar3 = FUN_00013b0c(local_24,uVar2,&local_28);
    pcVar7 = local_28;
    switch(uVar3) {
    case 0:
      iVar5 = strcmp(local_28,"crop");
      if (iVar5 == 0) {
        *(undefined4 *)(param_3 + 4) = 0;
      }
      else {
        iVar5 = strcmp(pcVar7,"crop_default");
        if (iVar5 == 0) {
          *(undefined4 *)(param_3 + 4) = 1;
        }
        else {
          iVar5 = strcmp(pcVar7,"crop_bounds");
          if (iVar5 == 0) {
            *(undefined4 *)(param_3 + 4) = 2;
          }
          else {
            iVar5 = strcmp(pcVar7,"compose");
            if (iVar5 == 0) {
              *(undefined4 *)(param_3 + 4) = 0x100;
            }
            else {
              iVar5 = strcmp(pcVar7,"compose_default");
              if (iVar5 == 0) {
                *(undefined4 *)(param_3 + 4) = 0x101;
              }
              else {
                iVar5 = strcmp(pcVar7,"compose_bounds");
                if (iVar5 == 0) {
                  *(undefined4 *)(param_3 + 4) = 0x102;
                }
                else {
                  iVar5 = strcmp(pcVar7,"compose_padded");
                  if (iVar5 == 0) {
                    *(undefined4 *)(param_3 + 4) = 0x103;
                  }
                  else {
                    iVar5 = strcmp(pcVar7,"native_size");
                    if (iVar5 != 0) {
                      pcVar7 = "Unknown selection target\n";
                      __n = 0x19;
                      goto LAB_000254ac;
                    }
                    *(undefined4 *)(param_3 + 4) = 3;
                  }
                }
              }
            }
          }
        }
      }
      break;
    case 1:
      iVar5 = strcmp(local_28,"le");
      if (iVar5 == 0) {
        uVar6 = 2;
      }
      else {
        iVar5 = strcmp(pcVar7,"ge");
        uVar6 = (uint)(iVar5 == 0);
      }
      *(uint *)(param_3 + 8) = uVar6;
      *param_2 = *param_2 | 0x10;
      break;
    case 2:
      lVar4 = strtol(local_28,(char **)0x0,0);
      *(long *)(param_3 + 0xc) = lVar4;
      *param_2 = *param_2 | 4;
      break;
    case 3:
      lVar4 = strtol(local_28,(char **)0x0,0);
      *(long *)(param_3 + 0x10) = lVar4;
      *param_2 = *param_2 | 8;
      break;
    case 4:
      lVar4 = strtol(local_28,(char **)0x0,0);
      *(long *)(param_3 + 0x14) = lVar4;
      *param_2 = *param_2 | 1;
      break;
    case 5:
      lVar4 = strtol(local_28,(char **)0x0,0);
      *(long *)(param_3 + 0x18) = lVar4;
      *param_2 = *param_2 | 2;
      break;
    default:
      __n = 0xf;
      pcVar7 = "Unknown option\n";
LAB_000254ac:
      fwrite(pcVar7,1,__n,stderr);
      puts(
          "\nSelection/Cropping options:\n  --get-cropcap      query the crop capabilities [VIDIOC_CROPCAP]\n  --get-crop\t     query the video capture crop window [VIDIOC_G_CROP]\n  --set-crop=top=<x>,left=<y>,width=<w>,height=<h>\n                     set the video capture crop window [VIDIOC_S_CROP]\n  --get-cropcap-output\n                     query crop capabilities for video output [VIDIOC_CROPCAP]\n  --get-crop-output  query the video output crop window [VIDIOC_G_CROP]\n  --set-crop-output=top=<x>,left=<y>,width=<w>,height=<h>\n                     set the video output crop window [VIDIOC_S_CROP]\n  --get-cropcap-overlay\n                     query crop capabilities for video overlay [VIDIOC_CROPCAP]\n  --get-crop-overlay query the video overlay crop window [VIDIOC_G_CROP]\n  --set-crop-overlay=top=<x>,left=<y>,width=<w>,height=<h>\n                     set the video overlay crop window [VIDIOC_S_CROP]\n  --get-cropcap-output-overlay\n                     query the crop capabilities for video output overlays\n                     [VIDIOC_CROPCAP]\n  --get-crop-output-overlay\n                     query the video output overlay crop window [VIDIOC_G_CROP]\n  --set-crop-output-overlay=top=<x>,left=<y>,width=<w>,height=<h>\n                     set the video output overlay crop window [VIDIOC_S_CROP]\n  --get-selection=target=<target>\n                     query the video capture selection rectangle [VIDIOC_G_SELECTION]\n                     See --set-selection command for the valid <target> values.\n  --set-selection=target=<target>,flags=<flags>,top=<x>,left=<y>,width=<w>,height=<h>\n                     set the video capture selection rectangle [VIDIOC_S_SELECTION]\n                     target=crop|crop_bounds|crop_default|compose|compose_bounds|\n                            compose_default|compose_padded|native_size\n                     flags=le|ge\n  --get-selection-output=target=<target>\n                     query the video output selection rectangle [VIDIOC_G_SELECTION]\n                     See --set-selection command for the valid <target> va..." /* TRUNCATED STRING LITERAL */
          );
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    cVar1 = *local_24[0];
  } while( true );
}



/* ===== FUN_000254e8 @ 000254e8 size=140 ===== */

void FUN_000254e8(undefined4 param_1,uint param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_24 = param_4;
  iVar1 = FUN_00013938(param_1,0xc014563b,&local_24,"VIDIOC_G_CROP");
  if (iVar1 == 0) {
    if ((param_2 & 1) != 0) {
      local_18 = param_3[2];
    }
    if ((param_2 & 2) != 0) {
      local_14 = param_3[3];
    }
    if ((param_2 & 4) != 0) {
      local_20 = *param_3;
    }
    if ((param_2 & 8) != 0) {
      local_1c = param_3[1];
    }
    FUN_00013938(param_1,0x4014563c,&local_24,"VIDIOC_S_CROP");
  }
  return;
}



/* ===== FUN_00025574 @ 00025574 size=160 ===== */

void FUN_00025574(undefined4 param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  local_4c = *(undefined4 *)(param_3 + 4);
  local_50 = param_4;
  iVar1 = FUN_00013938(param_1,0xc040565e,&local_50,"VIDIOC_G_SELECTION");
  if (iVar1 == 0) {
    if ((param_2 & 1) != 0) {
      local_3c = *(undefined4 *)(param_3 + 0x14);
    }
    if ((param_2 & 2) != 0) {
      local_38 = *(undefined4 *)(param_3 + 0x18);
    }
    if ((param_2 & 4) != 0) {
      local_44 = *(undefined4 *)(param_3 + 0xc);
    }
    if ((param_2 & 8) != 0) {
      local_40 = *(undefined4 *)(param_3 + 0x10);
    }
    local_48 = 0;
    if ((param_2 & 0x10) != 0) {
      local_48 = *(undefined4 *)(param_3 + 8);
    }
    FUN_00013938(param_1,0xc040565f,&local_50,"VIDIOC_S_SELECTION");
  }
  return;
}



/* ===== FUN_00025614 @ 00025614 size=152 ===== */

void FUN_00025614(undefined4 *param_1)

{
  undefined1 *local_20 [2];
  undefined1 auStack_18 [16];
  
  FUN_00015ab8(local_20,*param_1);
  printf("Crop Capability %s:\n",local_20[0]);
  if (local_20[0] != auStack_18) {
    operator_delete(local_20[0]);
  }
  printf("\tBounds      : Left %d, Top %d, Width %d, Height %d\n",param_1[1],param_1[2],param_1[3],
         param_1[4]);
  printf("\tDefault     : Left %d, Top %d, Width %d, Height %d\n",param_1[5],param_1[6],param_1[7],
         param_1[8]);
  printf("\tPixel Aspect: %u/%u\n",param_1[9],param_1[10]);
  return;
}



/* ===== FUN_000256c4 @ 000256c4 size=12 ===== */

void FUN_000256c4(void)

{
  puts(
      "\nSelection/Cropping options:\n  --get-cropcap      query the crop capabilities [VIDIOC_CROPCAP]\n  --get-crop\t     query the video capture crop window [VIDIOC_G_CROP]\n  --set-crop=top=<x>,left=<y>,width=<w>,height=<h>\n                     set the video capture crop window [VIDIOC_S_CROP]\n  --get-cropcap-output\n                     query crop capabilities for video output [VIDIOC_CROPCAP]\n  --get-crop-output  query the video output crop window [VIDIOC_G_CROP]\n  --set-crop-output=top=<x>,left=<y>,width=<w>,height=<h>\n                     set the video output crop window [VIDIOC_S_CROP]\n  --get-cropcap-overlay\n                     query crop capabilities for video overlay [VIDIOC_CROPCAP]\n  --get-crop-overlay query the video overlay crop window [VIDIOC_G_CROP]\n  --set-crop-overlay=top=<x>,left=<y>,width=<w>,height=<h>\n                     set the video overlay crop window [VIDIOC_S_CROP]\n  --get-cropcap-output-overlay\n                     query the crop capabilities for video output overlays\n                     [VIDIOC_CROPCAP]\n  --get-crop-output-overlay\n                     query the video output overlay crop window [VIDIOC_G_CROP]\n  --set-crop-output-overlay=top=<x>,left=<y>,width=<w>,height=<h>\n                     set the video output overlay crop window [VIDIOC_S_CROP]\n  --get-selection=target=<target>\n                     query the video capture selection rectangle [VIDIOC_G_SELECTION]\n                     See --set-selection command for the valid <target> values.\n  --set-selection=target=<target>,flags=<flags>,top=<x>,left=<y>,width=<w>,height=<h>\n                     set the video capture selection rectangle [VIDIOC_S_SELECTION]\n                     target=crop|crop_bounds|crop_default|compose|compose_bounds|\n                            compose_default|compose_padded|native_size\n                     flags=le|ge\n  --get-selection-output=target=<target>\n                     query the video output selection rectangle [VIDIOC_G_SELECTION]\n                     See --set-selection command for the valid <target> va..." /* TRUNCATED STRING LITERAL */
      );
  return;
}



/* ===== FUN_000256d0 @ 000256d0 size=272 ===== */

void FUN_000256d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined4 local_44;
  
  switch(param_1) {
  case 0xb0:
    FUN_00025138(param_2,&DAT_0006dd34);
    return;
  case 0xb2:
    FUN_00025138(param_2,DAT_00025810 + 0x10);
    return;
  case 0xb4:
    FUN_00025138(param_2,DAT_00025814 + 0x10);
    return;
  case 0xb6:
    FUN_00025138(param_2,DAT_00025818 + 0x10);
    return;
  case 0xb7:
  case 0xb9:
    iVar1 = FUN_00025244(param_2,auStack_4c,auStack_48);
    if (iVar1 != 0) {
      fwrite("Unknown selection target\n",1,0x19,stderr);
      puts(
          "\nSelection/Cropping options:\n  --get-cropcap      query the crop capabilities [VIDIOC_CROPCAP]\n  --get-crop\t     query the video capture crop window [VIDIOC_G_CROP]\n  --set-crop=top=<x>,left=<y>,width=<w>,height=<h>\n                     set the video capture crop window [VIDIOC_S_CROP]\n  --get-cropcap-output\n                     query crop capabilities for video output [VIDIOC_CROPCAP]\n  --get-crop-output  query the video output crop window [VIDIOC_G_CROP]\n  --set-crop-output=top=<x>,left=<y>,width=<w>,height=<h>\n                     set the video output crop window [VIDIOC_S_CROP]\n  --get-cropcap-overlay\n                     query crop capabilities for video overlay [VIDIOC_CROPCAP]\n  --get-crop-overlay query the video overlay crop window [VIDIOC_G_CROP]\n  --set-crop-overlay=top=<x>,left=<y>,width=<w>,height=<h>\n                     set the video overlay crop window [VIDIOC_S_CROP]\n  --get-cropcap-output-overlay\n                     query the crop capabilities for video output overlays\n                     [VIDIOC_CROPCAP]\n  --get-crop-output-overlay\n                     query the video output overlay crop window [VIDIOC_G_CROP]\n  --set-crop-output-overlay=top=<x>,left=<y>,width=<w>,height=<h>\n                     set the video output overlay crop window [VIDIOC_S_CROP]\n  --get-selection=target=<target>\n                     query the video capture selection rectangle [VIDIOC_G_SELECTION]\n                     See --set-selection command for the valid <target> values.\n  --set-selection=target=<target>,flags=<flags>,top=<x>,left=<y>,width=<w>,height=<h>\n                     set the video capture selection rectangle [VIDIOC_S_SELECTION]\n                     target=crop|crop_bounds|crop_default|compose|compose_bounds|\n                            compose_default|compose_padded|native_size\n                     flags=le|ge\n  --get-selection-output=target=<target>\n                     query the video output selection rectangle [VIDIOC_G_SELECTION]\n                     See --set-selection command for the valid <target> va..." /* TRUNCATED STRING LITERAL */
          );
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    DAT_0006ddfc = local_44;
    break;
  case 0xb8:
    FUN_00025244(param_2,DAT_0002581c + 0x40);
    return;
  case 0xba:
    FUN_00025244(param_2,DAT_0002580c + 0x40);
    return;
  }
  return;
}



/* ===== FUN_00025820 @ 00025820 size=272 ===== */

void FUN_00025820(undefined4 param_1)

{
  if (DAT_000633b0 != '\0') {
    FUN_000254e8(param_1,DAT_0006dd34,&DAT_0006dd24,1);
  }
  if (DAT_000633b2 != '\0') {
    FUN_000254e8(param_1,DAT_0006dd48,&DAT_0006dd38,2);
  }
  if (DAT_000633b4 != '\0') {
    FUN_000254e8(param_1,DAT_0006dd5c,&DAT_0006dd4c,3);
  }
  if (DAT_000633b6 != '\0') {
    FUN_000254e8(param_1,DAT_0006dd70,&DAT_0006dd60,8);
  }
  if (DAT_000633b8 != '\0') {
    FUN_00025574(param_1,DAT_0006ddb4,&DAT_0006dd74,1);
  }
  if (DAT_000633ba == '\0') {
    return;
  }
  FUN_00025574(param_1,DAT_0006ddf8,&DAT_0006ddb8,2);
  return;
}



/* ===== FUN_00025930 @ 00025930 size=200 ===== */

void FUN_00025930(int param_1)

{
  size_t sVar1;
  int *piVar2;
  char *__s;
  undefined1 *local_28 [2];
  undefined1 auStack_20 [16];
  
  if (*(int *)(param_1 + 4) == 0) {
    __s = "crop";
LAB_000259d0:
    local_28[0] = auStack_20;
    sVar1 = strlen(__s);
    std::__cxx11::string::_M_construct<char_const*>(local_28,__s,__s + sVar1,0);
  }
  else {
    __s = "crop_default";
    piVar2 = DAT_00025a0c;
    do {
      if (*(int *)(param_1 + 4) == piVar2[2]) goto LAB_000259d0;
      __s = (char *)piVar2[5];
      piVar2 = piVar2 + 2;
    } while (__s != (char *)0x0);
    local_28[0] = auStack_20;
    std::__cxx11::string::_M_construct<char_const*>(local_28,DAT_00025a10 + -7,DAT_00025a10,0);
  }
  printf("Selection: %s, Left %d, Top %d, Width %d, Height %d\n",local_28[0],
         *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
         *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
  if (local_28[0] != auStack_20) {
    operator_delete(local_28[0]);
  }
  return;
}



/* ===== FUN_00025a14 @ 00025a14 size=1216 ===== */

/* WARNING: Type propagation algorithm not settling */

void FUN_00025a14(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 local_60;
  int local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (DAT_000633c1 != '\0') {
    local_60 = 1;
    iVar1 = FUN_00013938(param_1,0xc02c563a,&local_60,"VIDIOC_CROPCAP");
    if (iVar1 == 0) {
      FUN_00025614(&local_60);
    }
  }
  if (DAT_000633c2 != '\0') {
    local_60 = 2;
    iVar1 = FUN_00013938(param_1,0xc02c563a,&local_60,"VIDIOC_CROPCAP");
    if (iVar1 == 0) {
      FUN_00025614(&local_60);
    }
  }
  if (DAT_000633c3 != '\0') {
    local_60 = 3;
    iVar1 = FUN_00013938(param_1,0xc02c563a,&local_60,"VIDIOC_CROPCAP");
    if (iVar1 == 0) {
      FUN_00025614(&local_60);
    }
  }
  if (DAT_000633c4 != '\0') {
    local_60 = 8;
    iVar1 = FUN_00013938(param_1,0xc02c563a,&local_60,"VIDIOC_CROPCAP");
    if (iVar1 == 0) {
      FUN_00025614(&local_60);
    }
  }
  if (DAT_000633af != '\0') {
    local_60 = 1;
    iVar1 = FUN_00013938(param_1,0xc014563b,&local_60,"VIDIOC_G_CROP");
    if (iVar1 == 0) {
      printf("Crop: Left %d, Top %d, Width %d, Height %d\n",local_5c,uStack_58,local_54,local_50);
    }
  }
  if (DAT_000633b1 != '\0') {
    local_60 = 2;
    iVar1 = FUN_00013938(param_1,0xc014563b,&local_60,"VIDIOC_G_CROP");
    if (iVar1 == 0) {
      printf("Crop: Left %d, Top %d, Width %d, Height %d\n",local_5c,uStack_58,local_54,local_50);
    }
  }
  if (DAT_000633b3 != '\0') {
    local_60 = 3;
    iVar1 = FUN_00013938(param_1,0xc014563b,&local_60,"VIDIOC_G_CROP");
    if (iVar1 == 0) {
      printf("Crop: Left %d, Top %d, Width %d, Height %d\n",local_5c,uStack_58,local_54,local_50);
    }
  }
  if (DAT_000633b5 != '\0') {
    local_60 = 8;
    iVar1 = FUN_00013938(param_1,0xc014563b,&local_60,"VIDIOC_G_CROP");
    if (iVar1 == 0) {
      printf("Crop: Left %d, Top %d, Width %d, Height %d\n",local_5c,uStack_58,local_54,local_50);
    }
  }
  if (DAT_000633b7 != '\0') {
    uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    local_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    local_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_60 = 1;
    local_2c = 0;
    local_4c = 0;
    local_44 = 0;
    local_3c = 0;
    local_34 = 0;
    uStack_28 = 0;
    uStack_48 = uStack_58;
    uStack_40 = uStack_58;
    uStack_38 = uStack_58;
    uStack_30 = uStack_58;
    uStack_24 = uStack_58;
    if ((DAT_00063397 == '\0') && (DAT_0006ddfc != -1)) {
      local_5c = DAT_0006ddfc;
      iVar1 = FUN_00013938(param_1,0xc040565e,&local_60,"VIDIOC_G_SELECTION");
      if (iVar1 == 0) {
        FUN_00025930(&local_60);
      }
    }
    else {
      pcVar3 = "crop_default";
      local_5c = 0;
      puVar2 = DAT_00025ed4;
      while( true ) {
        iVar1 = FUN_00013938(param_1,0xc040565e,&local_60,"VIDIOC_G_SELECTION");
        if (iVar1 == 0) {
          FUN_00025930(&local_60);
        }
        if (pcVar3 == (char *)0x0) break;
        pcVar3 = (char *)puVar2[3];
        local_5c = *puVar2;
        puVar2 = puVar2 + 2;
      }
    }
  }
  if (DAT_000633b9 != '\0') {
    uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    local_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    local_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_60 = 2;
    local_2c = 0;
    local_4c = 0;
    local_44 = 0;
    local_3c = 0;
    local_34 = 0;
    uStack_28 = 0;
    uStack_48 = uStack_58;
    uStack_40 = uStack_58;
    uStack_38 = uStack_58;
    uStack_30 = uStack_58;
    uStack_24 = uStack_58;
    if ((DAT_00063397 == '\0') && (DAT_0006ddfc != -1)) {
      local_5c = DAT_0006ddfc;
      iVar1 = FUN_00013938(param_1,0xc040565e,&local_60,"VIDIOC_G_SELECTION");
      if (iVar1 == 0) {
        FUN_00025930(&local_60);
      }
    }
    else {
      pcVar3 = "crop_default";
      local_5c = 0;
      puVar2 = DAT_00025ed4;
      while( true ) {
        iVar1 = FUN_00013938(param_1,0xc040565e,&local_60,"VIDIOC_G_SELECTION");
        if (iVar1 == 0) {
          FUN_00025930(&local_60);
        }
        if (pcVar3 == (char *)0x0) break;
        pcVar3 = (char *)puVar2[3];
        local_5c = *puVar2;
        puVar2 = puVar2 + 2;
      }
    }
  }
  return;
}



/* ===== FUN_00025ed8 @ 00025ed8 size=124 ===== */

undefined4 FUN_00025ed8(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp(param_1,"start");
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = strcmp(param_1,"stop");
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = strcmp(param_1,"pause");
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = strcmp(param_1,"resume");
  if (iVar1 == 0) {
    uVar2 = 3;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00025f54 @ 00025f54 size=12 ===== */

void FUN_00025f54(void)

{
  puts(
      "\nMiscellaneous options:\n  --wait-for-event=<event>\n                     wait for an event [VIDIOC_DQEVENT]\n                     <event> is the event number or one of:\n                     eos, vsync, ctrl=<id>, frame_sync, source_change=<pad>,\n                     motion_det\n                     where <id> is the name of the control\n                     and where <pad> is the index of the pad or input\n  --poll-for-event=<event>\n                     poll for an event [VIDIOC_DQEVENT]\n                     see --wait-for-event for possible events\n  -P, --get-parm     display video parameters [VIDIOC_G_PARM]\n  -p, --set-parm=<fps>\n                     set video framerate in <fps> [VIDIOC_S_PARM]\n  --get-output-parm  display output video parameters [VIDIOC_G_PARM]\n  --set-output-parm=<fps>\n                     set output video framerate in <fps> [VIDIOC_S_PARM]\n  --get-jpeg-comp    query the JPEG compression [VIDIOC_G_JPEGCOMP]\n  --set-jpeg-comp=quality=<q>,markers=<markers>,comment=<c>,app<n>=<a>\n                     set the JPEG compression [VIDIOC_S_JPEGCOMP]\n                     <n> is the app segment: 0-9/a-f, <a> is the actual string.\n                     <markers> is a colon separated list of:\n                     dht:      Define Huffman Tables\n                     dqt:      Define Quantization Tables\n                     dri:      Define Restart Interval\n  --encoder-cmd=cmd=<cmd>,flags=<flags>\n                     Send a command to the encoder [VIDIOC_ENCODER_CMD]\n                     cmd=start|stop|pause|resume\n                     flags=stop_at_gop_end\n  --try-encoder-cmd=cmd=<cmd>,flags=<flags>\n                     Try an encoder command [VIDIOC_TRY_ENCODER_CMD]\n                     See --encoder-cmd for the arguments.\n  --decoder-cmd=cmd=<cmd>,flags=<flags>,stop_pts=<pts>,start_speed=<speed>,\n                     start_format=<none|gop>\n                     Send a command to the decoder [VIDIOC_DECODER_CMD]\n                     cmd=start|stop|pause|resume\n                     flags=start_mute_audio|pause_..." /* TRUNCATED STRING LITERAL */
      );
  return;
}



/* ===== FUN_00025f60 @ 00025f60 size=1012 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00025f60(int param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  char *pcVar7;
  char *pcVar8;
  char *local_28;
  char *local_24 [2];
  
  uVar2 = DAT_0002636c;
  uVar1 = DAT_00026368;
  local_24[0] = param_2;
  if (param_1 < 0xe1) {
    if (param_1 < 0xdf) {
      if (param_1 == 200) {
        while (*local_24[0] != '\0') {
          uVar5 = FUN_00013b0c(local_24,&PTR_DAT_00044768,&local_28);
          pcVar8 = local_28;
          if (uVar5 == 0x11) {
            pcVar7 = strstr(local_28,"dht");
            if (pcVar7 != (char *)0x0) {
              DAT_0006de98 = DAT_0006de98 | 8;
            }
            pcVar7 = strstr(pcVar8,"dqt");
            if (pcVar7 != (char *)0x0) {
              DAT_0006de98 = DAT_0006de98 | 0x10;
            }
            pcVar8 = strstr(pcVar8,"dri");
            if (pcVar8 != (char *)0x0) {
              DAT_0006de98 = DAT_0006de98 | 0x20;
            }
          }
          else if (uVar5 == 0x12) {
            sVar6 = strlen(local_28);
            if (0x3a < sVar6) {
              sVar6 = 0x3b;
            }
            DAT_0006de58 = sVar6;
            memcpy(&DAT_0006de5c,pcVar8,sVar6);
            (&DAT_0006de5c)[sVar6] = 0;
          }
          else if (uVar5 == 0x10) {
            DAT_0006de10 = strtol(local_28,(char **)0x0,0);
          }
          else {
            if (0xf < uVar5) {
switchD_00025fd8_default:
              puts(
                  "\nMiscellaneous options:\n  --wait-for-event=<event>\n                     wait for an event [VIDIOC_DQEVENT]\n                     <event> is the event number or one of:\n                     eos, vsync, ctrl=<id>, frame_sync, source_change=<pad>,\n                     motion_det\n                     where <id> is the name of the control\n                     and where <pad> is the index of the pad or input\n  --poll-for-event=<event>\n                     poll for an event [VIDIOC_DQEVENT]\n                     see --wait-for-event for possible events\n  -P, --get-parm     display video parameters [VIDIOC_G_PARM]\n  -p, --set-parm=<fps>\n                     set video framerate in <fps> [VIDIOC_S_PARM]\n  --get-output-parm  display output video parameters [VIDIOC_G_PARM]\n  --set-output-parm=<fps>\n                     set output video framerate in <fps> [VIDIOC_S_PARM]\n  --get-jpeg-comp    query the JPEG compression [VIDIOC_G_JPEGCOMP]\n  --set-jpeg-comp=quality=<q>,markers=<markers>,comment=<c>,app<n>=<a>\n                     set the JPEG compression [VIDIOC_S_JPEGCOMP]\n                     <n> is the app segment: 0-9/a-f, <a> is the actual string.\n                     <markers> is a colon separated list of:\n                     dht:      Define Huffman Tables\n                     dqt:      Define Quantization Tables\n                     dri:      Define Restart Interval\n  --encoder-cmd=cmd=<cmd>,flags=<flags>\n                     Send a command to the encoder [VIDIOC_ENCODER_CMD]\n                     cmd=start|stop|pause|resume\n                     flags=stop_at_gop_end\n  --try-encoder-cmd=cmd=<cmd>,flags=<flags>\n                     Try an encoder command [VIDIOC_TRY_ENCODER_CMD]\n                     See --encoder-cmd for the arguments.\n  --decoder-cmd=cmd=<cmd>,flags=<flags>,stop_pts=<pts>,start_speed=<speed>,\n                     start_format=<none|gop>\n                     Send a command to the decoder [VIDIOC_DECODER_CMD]\n                     cmd=start|stop|pause|resume\n                     flags=start_mute_audio|pause_..." /* TRUNCATED STRING LITERAL */
                  );
                    /* WARNING: Subroutine does not return */
              exit(1);
            }
            if (DAT_0006de18 == 0) {
              sVar6 = strlen(local_28);
              if (0x3a < sVar6) {
                sVar6 = 0x3b;
              }
              DAT_0006de18 = sVar6;
              memcpy(DAT_00026370,pcVar8,sVar6);
              DAT_0006de14 = uVar5;
              (&DAT_0006de1c)[sVar6] = 0;
            }
            else {
              fwrite("Only one APP segment can be set\n",1,0x20,stderr);
            }
          }
        }
      }
      else {
        if (param_1 == 0xce) {
          DAT_0006de08 = strtod(param_2,(char **)0x0);
          return;
        }
        if (param_1 == 0x70) {
          DAT_0006de00 = strtod(param_2,(char **)0x0);
          return;
        }
      }
    }
    else {
      while (*local_24[0] != '\0') {
        iVar4 = FUN_00013b0c(local_24,uVar2,&local_28);
        if (iVar4 == 0) {
          DAT_0006de9c = FUN_00025ed8(local_28);
        }
        else {
          if (iVar4 != 1) goto switchD_00025fd8_default;
          iVar4 = strcmp(local_28,"stop_at_gop_end");
          DAT_0006dea0 = (uint)(iVar4 == 0);
        }
      }
    }
  }
  else if (param_1 < 0xe3) {
    while (*local_24[0] != '\0') {
      uVar2 = FUN_00013b0c(local_24,uVar1,&local_28);
      pcVar8 = local_28;
      switch(uVar2) {
      case 0:
        DAT_0006dec8 = FUN_00025ed8(local_28);
        break;
      case 1:
        iVar4 = strcmp(local_28,"start_mute_audio");
        if (((iVar4 == 0) || (iVar4 = strcmp(pcVar8,"pause_to_black"), iVar4 == 0)) ||
           (iVar4 = strcmp(pcVar8,"stop_to_black"), iVar4 == 0)) {
          DAT_0006decc = 1;
        }
        else {
          iVar4 = strcmp(pcVar8,"stop_immediately");
          if (iVar4 == 0) {
            DAT_0006decc = 2;
          }
          else {
            DAT_0006decc = 0;
          }
        }
        break;
      case 2:
        _DAT_0006ded0 = strtoull(local_28,(char **)0x0,0);
        break;
      case 3:
        lVar3 = strtol(local_28,(char **)0x0,0);
        _DAT_0006ded0 = CONCAT44(DAT_0006ded4,lVar3);
        break;
      case 4:
        iVar4 = strcmp(local_28,"gop");
        if (iVar4 == 0) {
          _DAT_0006ded0 = CONCAT44(1,DAT_0006ded0);
        }
        else {
          iVar4 = strcmp(pcVar8,"none");
          if (iVar4 == 0) {
                    /* WARNING: Ignoring partial resolution of indirect */
            DAT_0006ded4 = 0;
          }
        }
        break;
      default:
        goto switchD_00025fd8_default;
      }
    }
  }
  return;
}



/* ===== FUN_00026374 @ 00026374 size=1108 ===== */

void FUN_00026374(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint in_fpscr;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  
  if (DAT_00063370 != '\0') {
    memset(&DAT_0006df14,0,200);
    DAT_0006df10 = 1;
    DAT_0006df1c = 1000;
    DAT_0006df20 = (uint)(0.0 < DAT_0006de00 * DAT_000267e8) *
                   (int)(longlong)(DAT_0006de00 * DAT_000267e8);
    uVar7 = FUN_00013938(param_1,0xc0cc5616,&DAT_0006df10,"VIDIOC_S_PARM");
    if ((int)uVar7 == 0) {
      if ((DAT_0006df20 == 0) || (DAT_0006df1c == 0)) {
        puts("Invalid frame rate");
      }
      else {
        dVar5 = (double)VectorUnsignedToFloat(DAT_0006df20,(byte)(in_fpscr >> 0x16) & 3);
        dVar6 = (double)VectorUnsignedToFloat(DAT_0006df1c,(byte)(in_fpscr >> 0x16) & 3);
        printf("Frame rate set to %.3f fps\n",(int)((ulonglong)uVar7 >> 0x20),SUB84(dVar5 / dVar6,0)
               ,(int)((ulonglong)(dVar5 / dVar6) >> 0x20));
      }
    }
  }
  if (DAT_000633ce != '\0') {
    memset(&DAT_0006df14,0,200);
    DAT_0006df10 = 2;
    DAT_0006df1c = 1000;
    DAT_0006df20 = (uint)(0.0 < DAT_0006de08 * DAT_000267e8) *
                   (int)(longlong)(DAT_0006de08 * DAT_000267e8);
    uVar7 = FUN_00013938(param_1,0xc0cc5616,&DAT_0006df10,"VIDIOC_S_PARM");
    if ((int)uVar7 == 0) {
      if ((DAT_0006df20 == 0) || (DAT_0006df1c == 0)) {
        puts("Invalid frame rate");
      }
      else {
        dVar5 = (double)VectorUnsignedToFloat(DAT_0006df20,(byte)(in_fpscr >> 0x16) & 3);
        dVar6 = (double)VectorUnsignedToFloat(DAT_0006df1c,(byte)(in_fpscr >> 0x16) & 3);
        printf("Frame rate set to %.3f fps\n",(int)((ulonglong)uVar7 >> 0x20),SUB84(dVar5 / dVar6,0)
               ,(int)((ulonglong)(dVar5 / dVar6) >> 0x20));
      }
    }
  }
  if (DAT_000633c8 != '\0') {
    FUN_00013938(param_1,0x408c563e,DAT_000267f8,"VIDIOC_S_JPEGCOMP");
  }
  if (DAT_000633df != '\0') {
    FUN_00013938(param_1,0xc028564d,DAT_000267f4,"VIDIOC_ENCODER_CMD");
  }
  if ((DAT_000633e0 != '\0') &&
     (iVar2 = FUN_00013938(param_1,0xc028564e,&DAT_0006de9c,"VIDIOC_TRY_ENCODER_CMD"), iVar2 == 0))
  {
    switch(DAT_0006de9c) {
    case 0:
      puts("\tstart");
      break;
    case 1:
      pcVar4 = " at gop end";
      if ((DAT_0006dea0 & 1) == 0) {
        pcVar4 = "";
      }
      printf("\tstop%s\n",pcVar4);
      break;
    case 2:
      puts("\tpause");
      break;
    case 3:
      puts("\tresume");
    }
  }
  if (DAT_000633e1 != '\0') {
    FUN_00013938(param_1,0xc0485660,DAT_000267f0,"VIDIOC_DECODER_CMD");
  }
  if (DAT_000633e2 != '\0') {
    iVar1 = FUN_00013938(param_1,0xc0485661,&DAT_0006dec8,"VIDIOC_TRY_DECODER_CMD");
    iVar2 = DAT_0006ded0;
    if (iVar1 == 0) {
      switch(DAT_0006dec8) {
      case 0:
        goto switchD_0002640c_caseD_0;
      case 1:
        pcVar4 = " to black";
        if ((DAT_0006decc & 1) == 0) {
          pcVar4 = "";
        }
        pcVar3 = " immediately";
        if ((DAT_0006decc & 2) == 0) {
          pcVar3 = "";
        }
        printf("\tstop%s%s\n",pcVar4,pcVar3);
        return;
      case 2:
        pcVar4 = " to black";
        if ((DAT_0006decc & 1) == 0) {
          pcVar4 = "";
        }
        printf("\tpause%s\n",pcVar4);
        return;
      case 3:
        puts("\tresume");
        return;
      default:
        return;
      }
    }
    return;
  }
  return;
switchD_0002640c_caseD_0:
  if (DAT_0006ded0 == 0) {
    pcVar4 = " (GOP aligned)";
    if (DAT_0006ded4 != 1) {
      pcVar4 = "";
    }
  }
  else {
    pcVar4 = " (GOP aligned)";
    if (DAT_0006ded4 != 1) {
      pcVar4 = "";
    }
    if (DAT_0006ded0 != 1000) {
      pcVar3 = "";
      if ((DAT_0006decc & 1) != 0) {
        pcVar3 = " (mute audio)";
      }
      printf("\tstart%s%s, ",pcVar4,pcVar3);
      if ((iVar2 + 1U & 0xfffffffd) == 0) {
        pcVar4 = "forward";
        if (iVar2 != 1) {
          pcVar4 = "backward";
        }
        printf("single step %s\n",pcVar4);
        return;
      }
      goto LAB_000267c4;
    }
  }
  iVar2 = 1000;
  printf("\tstart%s%s, ",pcVar4,&DAT_00042954);
LAB_000267c4:
  VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
  printf("speed %.3fx\n");
  return;
}



/* ===== FUN_000267fc @ 000267fc size=1132 ===== */

void FUN_000267fc(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint in_fpscr;
  double dVar3;
  double dVar4;
  undefined1 *local_bc;
  int local_b8;
  undefined1 local_b4 [16];
  int *local_a4;
  undefined4 local_a0;
  int local_9c;
  undefined1 auStack_98 [60];
  int local_5c;
  undefined1 auStack_58 [60];
  uint local_1c;
  
  if ((DAT_000633c7 == '\0') ||
     (iVar2 = FUN_00013938(param_1,0x808c563d,&local_a4,"VIDIOC_G_JPEGCOMP"), iVar2 != 0))
  goto LAB_0002681c;
  puts("JPEG compression:");
  printf("\tQuality: %d\n",local_a4);
  if (local_5c != 0) {
    printf("\tComment: \'%s\'\n",auStack_58);
  }
  if (local_9c != 0) goto LAB_00026bac;
  while( true ) {
    printf("\tMarkers: 0x%08x\n",local_1c);
    uVar1 = local_1c;
    local_b8 = 0;
    local_b4[0] = 0;
    local_bc = local_b4;
    if ((local_1c & 8) == 0) break;
    std::__cxx11::string::_M_append((char *)&local_bc,0x4535c);
    if ((uVar1 & 0x10) == 0) goto LAB_00026aa4;
    if (0x1c < 0x7fffffffU - local_b8) goto LAB_00026a90;
    std::__throw_length_error("basic_string::append");
LAB_00026bac:
    printf("\tAPP%x   : \'%s\'\n",local_a0,auStack_98);
  }
  if ((local_1c & 0x10) == 0) {
    if ((local_1c & 0x20) != 0) {
LAB_00026ac0:
      std::__cxx11::string::_M_append((char *)&local_bc,0x45398);
    }
  }
  else {
LAB_00026a90:
    std::__cxx11::string::_M_append((char *)&local_bc,0x45378);
LAB_00026aa4:
    if ((uVar1 & 0x20) != 0) {
      if (0x7fffffffU - local_b8 < 0x1a) goto LAB_00026c48;
      goto LAB_00026ac0;
    }
  }
  if ((uVar1 & 0x40) == 0) {
LAB_000268d8:
    if ((uVar1 & 0x80) != 0) {
      if (0x7fffffffU - local_b8 < 0x15) {
        std::__throw_length_error("basic_string::append");
        goto LAB_00026c3c;
      }
      std::__cxx11::string::_M_append((char *)&local_bc,0x453c8);
    }
    printf("%s",local_bc);
    if (local_bc != local_b4) {
      operator_delete(local_bc);
    }
LAB_0002681c:
    if (DAT_00063350 != '\0') {
      memset(&DAT_0006df14,0,200);
      DAT_0006df10 = 1;
      iVar2 = FUN_00013938(param_1,0xc0cc5615,&DAT_0006df10,"VIDIOC_G_PARM");
      if (iVar2 == 0) {
        FUN_00015ab8(&local_a4,DAT_0006df10);
        printf("Streaming Parameters %s:\n",local_a4);
        if (local_a4 != &local_9c) {
          operator_delete(local_a4);
        }
        if ((DAT_0006df14 & 0x1000) != 0) {
          puts("\tCapabilities     : timeperframe");
        }
        if ((DAT_0006df18 & 1) != 0) {
          puts("\tCapture mode     : high quality");
        }
        if ((DAT_0006df20 == 0) || (DAT_0006df1c == 0)) {
          printf("\tFrames per second: invalid (%d/%d)\n");
        }
        else {
          dVar4 = (double)VectorUnsignedToFloat(DAT_0006df20,(byte)(in_fpscr >> 0x16) & 3);
          dVar3 = (double)VectorUnsignedToFloat(DAT_0006df1c,(byte)(in_fpscr >> 0x16) & 3);
          printf("\tFrames per second: %.3f (%d/%d)\n",DAT_0006df20,SUB84(dVar4 / dVar3,0),
                 (int)((ulonglong)(dVar4 / dVar3) >> 0x20),DAT_0006df20,DAT_0006df1c);
        }
        printf("\tRead buffers     : %d\n",DAT_0006df28);
      }
    }
    if (DAT_000633cd != '\0') {
      memset(&DAT_0006df14,0,200);
      DAT_0006df10 = 2;
      iVar2 = FUN_00013938(param_1,0xc0cc5615,&DAT_0006df10,"VIDIOC_G_PARM");
      if (iVar2 == 0) {
        FUN_00015ab8(&local_a4,DAT_0006df10);
        printf("Streaming Parameters %s:\n",local_a4);
        if (local_a4 != &local_9c) {
          operator_delete(local_a4);
        }
        if ((DAT_0006df14 & 0x1000) != 0) {
          puts("\tCapabilities     : timeperframe");
        }
        if ((DAT_0006df18 & 1) != 0) {
          puts("\tOutput mode      : high quality");
        }
        if ((DAT_0006df20 == 0) || (DAT_0006df1c == 0)) {
          printf("\tFrames per second: invalid (%d/%d)\n");
        }
        else {
          dVar4 = (double)VectorUnsignedToFloat(DAT_0006df20,(byte)(in_fpscr >> 0x16) & 3);
          dVar3 = (double)VectorUnsignedToFloat(DAT_0006df1c,(byte)(in_fpscr >> 0x16) & 3);
          printf("\tFrames per second: %.3f (%d/%d)\n",DAT_0006df20,SUB84(dVar4 / dVar3,0),
                 (int)((ulonglong)(dVar4 / dVar3) >> 0x20),DAT_0006df20,DAT_0006df1c);
        }
        printf("\tWrite buffers    : %d\n",DAT_0006df28);
        return;
      }
    }
    return;
  }
  if (0x10 < 0x7fffffffU - local_b8) {
    std::__cxx11::string::_M_append((char *)&local_bc,0x453b4);
    goto LAB_000268d8;
  }
LAB_00026c3c:
  std::__throw_length_error("basic_string::append");
LAB_00026c48:
  std::__throw_length_error("basic_string::append");
  if (local_bc != local_b4) {
    operator_delete(local_bc);
  }
                    /* WARNING: Subroutine does not return */
  __cxa_end_cleanup();
}



/* ===== FUN_00026c88 @ 00026c88 size=1016 ===== */

undefined4 FUN_00026c88(int param_1,int param_2,FILE *param_3)

{
  size_t sVar1;
  size_t sVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  void *__ptr;
  int iVar6;
  uint uVar7;
  int *piVar8;
  bool bVar9;
  int local_434;
  undefined4 *local_430;
  uint local_42c;
  uint local_428 [257];
  
  if (DAT_00062d90 < 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar5 = param_2 * 0x1e0 + param_1;
      uVar7 = 0;
      puVar4 = (undefined4 *)(param_1 + param_2 * 0x20 + 0x3c14);
      iVar6 = iVar5;
      do {
        __ptr = (void *)*puVar4;
        sVar1 = fread(__ptr,1,*(size_t *)(iVar6 + 0x18),param_3);
        if ((sVar1 == 0 && uVar7 == 0) && (sVar1 = 0, DAT_0006dfe0 != '\0')) {
          fseek(param_3,0,0);
          sVar1 = fread(__ptr,1,*(size_t *)(iVar5 + 0x18),param_3);
        }
        if (*(size_t *)(iVar6 + 0x18) != sVar1) {
          if (sVar1 != 0) {
            fprintf(stderr,"%u != %u\n",sVar1);
            return 0;
          }
          return 0;
        }
        uVar7 = uVar7 + 1;
        iVar6 = iVar6 + 0x3c;
        puVar4 = puVar4 + 1;
      } while (uVar7 < *(uint *)(param_1 + 0x10));
    }
    return 1;
  }
  while( true ) {
    fread(local_428,1,4,param_3);
    uVar7 = local_428[0] << 0x18 | (local_428[0] >> 8 & 0xff) << 0x10 |
            (local_428[0] >> 0x10 & 0xff) << 8 | local_428[0] >> 0x18;
    if (uVar7 == 0x20646e65) {
      fwrite("END packet read\n",1,0x10,stderr);
      return 0;
    }
    fread(local_428,1,4,param_3);
    uVar3 = local_428[0] << 0x18 | (local_428[0] >> 8 & 0xff) << 0x10 |
            (local_428[0] >> 0x10 & 0xff) << 8 | local_428[0] >> 0x18;
    if (uVar7 == 0x766d7266) break;
    fprintf(stderr,"expected FRAME_VIDEO, got 0x%08x\n",uVar7);
    for (; uVar3 != 0; uVar3 = uVar3 - sVar1) {
      sVar1 = uVar3;
      if (0x3ff < uVar3) {
        sVar1 = 0x400;
      }
      sVar1 = fread(local_428,1,sVar1,param_3);
      if ((int)sVar1 < 0) {
        fprintf(stderr,"error reading %d bytes\n",uVar3);
        return 0;
      }
    }
  }
  fread(local_428,1,4,param_3);
  if (local_428[0] != 0x20000000) {
    fwrite("unsupported FRAME_VIDEO size\n",1,0x1d,stderr);
    return 0;
  }
  fread(local_428,1,4,param_3);
  fread(local_428,1,4,param_3);
  if (*(int *)(param_1 + 0x10) == 0) {
    return 1;
  }
  local_434 = param_2 * 0x1e0 + param_1;
  local_42c = 0;
  piVar8 = (int *)(param_1 + param_2 * 0x20 + 0x3c14);
  local_430 = (undefined4 *)(param_1 + 0x4414);
  do {
    iVar6 = *piVar8;
    fread(local_428,1,4,param_3);
    if (local_428[0] != 0x20000000) {
      fwrite("unsupported FRAME_VIDEO plane size\n",1,0x23,stderr);
      return 0;
    }
    fread(local_428,1,4,param_3);
    uVar7 = local_428[0];
    fread(local_428,1,4,param_3);
    uVar3 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
            uVar7 >> 0x18;
    uVar7 = local_428[0] << 0x18 | (local_428[0] >> 8 & 0xff) << 0x10 |
            (local_428[0] >> 0x10 & 0xff) << 8 | local_428[0] >> 0x18;
    iVar5 = uVar3 - uVar7;
    if (*(uint *)(local_434 + 0x18) < uVar3) {
      fprintf(stderr,"plane size is too large (%u > %u)\n",uVar3);
      return 0;
    }
    sVar1 = uVar7;
    if (uVar7 != 0) {
      do {
        sVar2 = fread((void *)(iVar6 + iVar5),1,sVar1,param_3);
        iVar5 = iVar5 + sVar2;
        if ((int)sVar2 < 0) {
          fprintf(stderr,"error reading %d bytes\n",sVar1);
          return 0;
        }
        bVar9 = sVar2 != sVar1;
        sVar1 = sVar1 - sVar2;
      } while (bVar9);
    }
    FUN_0003bd38(iVar6,uVar3,uVar7,*local_430);
    local_42c = local_42c + 1;
    local_434 = local_434 + 0x3c;
    piVar8 = piVar8 + 1;
    local_430 = local_430 + 1;
  } while (local_42c < *(uint *)(param_1 + 0x10));
  return 1;
}



/* ===== FUN_00027080 @ 00027080 size=704 ===== */

void FUN_00027080(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if (uVar1 != 0) {
    uVar2 = *(uint *)(param_1 + 0x10);
    puVar4 = (undefined4 *)(param_1 + 0x3c14);
    uVar5 = 0;
    iVar6 = param_1;
    do {
      if (uVar2 != 0) {
        uVar1 = 0;
        iVar3 = iVar6;
        puVar7 = puVar4;
        do {
          if (*(int *)(param_1 + 4) == 2) {
            free((void *)*puVar7);
          }
          else if ((*(int *)(param_1 + 4) == 4) || (DAT_00063377 == '\0')) {
            munmap((void *)*puVar7,*(size_t *)(iVar3 + 0x18));
          }
          else {
            v4l2_munmap();
          }
          uVar2 = *(uint *)(param_1 + 0x10);
          uVar1 = uVar1 + 1;
          iVar3 = iVar3 + 0x3c;
          puVar7 = puVar7 + 1;
        } while (uVar1 < uVar2);
        uVar1 = *(uint *)(param_1 + 0xc);
      }
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 8;
      iVar6 = iVar6 + 0x1e0;
    } while (uVar5 < uVar1);
  }
  iVar6 = DAT_00027150;
  for (uVar1 = 0; uVar1 < 8; uVar1 = uVar1 + 1) {
    for (uVar2 = 0; uVar2 < 3; uVar2 = uVar2 + 1) {
      FUN_00030508(*(undefined4 *)(iVar6 + (uVar1 * 3 + uVar2 + 0x122) * 4));
      *(undefined4 *)(iVar6 + (uVar1 * 3 + uVar2 + 0x122) * 4) = 0;
      if (uVar2 != 0) {
        FUN_00030508(*(undefined4 *)(iVar6 + (uVar1 * 3 + uVar2 + 0x13a) * 4));
        *(undefined4 *)(iVar6 + (uVar1 * 3 + uVar2 + 0x13a) * 4) = 0;
      }
    }
  }
  for (uVar1 = 0; uVar1 < 3; uVar1 = uVar1 + 1) {
    FUN_00030508(*(undefined4 *)(iVar6 + (uVar1 + 0x154) * 4 + 4));
    FUN_00030508(*(undefined4 *)(iVar6 + (uVar1 + 0x158) * 4));
    FUN_00030508(*(undefined4 *)(iVar6 + (uVar1 + 0x152) * 4));
    *(undefined4 *)(iVar6 + (uVar1 + 0x154) * 4 + 4) = 0;
    *(undefined4 *)(iVar6 + (uVar1 + 0x158) * 4) = 0;
    *(undefined4 *)(iVar6 + (uVar1 + 0x152) * 4) = 0;
  }
  return;
}



/* ===== FUN_00027154 @ 00027154 size=1460 ===== */

int FUN_00027154(undefined4 param_1,int *param_2,int param_3,int *param_4,uint *param_5,
                timespec *param_6)

{
  longlong lVar1;
  FILE *pFVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int *piVar7;
  int extraout_r1;
  undefined4 uVar8;
  int *piVar9;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  int iVar10;
  uint uVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  timespec local_254;
  int local_24c;
  int local_248;
  uint local_244;
  uint local_240;
  int local_23c;
  int local_234;
  int local_21c;
  int *local_218;
  uint local_214;
  int local_208 [121];
  
  memset(&local_24c,0,0x44);
  memset(local_208,0,0x1e0);
  local_248 = *param_2;
  local_21c = param_2[1];
  if ((char)param_2[2] != '\0') {
    local_218 = local_208;
    local_214 = 8;
  }
  if (param_4 == (int *)0x0) {
    iVar3 = FUN_0001391c(param_1,0xc0445611,&local_24c);
    if ((iVar3 < 0) && (piVar7 = __errno_location(), *piVar7 == 0xb)) {
      return 0;
    }
    cVar12 = (char)param_2[2];
    if (cVar12 == '\0') {
      local_244 = local_214;
    }
    else if (local_214 != 0) {
      iVar13 = 0;
      uVar11 = 0;
      do {
        uVar11 = uVar11 + 1;
        *(undefined4 *)((int)local_218 + iVar13) = *(undefined4 *)((int)local_218 + iVar13 + 4);
        iVar13 = iVar13 + 0x3c;
      } while (uVar11 < local_214);
    }
  }
  else {
    local_24c = *param_4;
    iVar3 = FUN_0001391c(param_1,0xc0445609,&local_24c);
    cVar12 = (char)param_2[2];
    if (cVar12 == '\0') {
      local_244 = param_4[2];
      if (param_2[1] == 2) {
        local_218 = (int *)param_4[0xd];
      }
      else if (param_2[1] == 4) {
        local_218 = (int *)param_2[*param_4 * 8 + 0x1005];
      }
    }
    else {
      iVar13 = param_2[4];
      if (iVar13 != 0) {
        iVar10 = param_2[1];
        iVar4 = 0;
        piVar7 = (int *)param_4[0xd];
        piVar9 = local_208;
        do {
          iVar14 = piVar7[3];
          if (iVar10 == 2) {
            iVar15 = piVar7[2];
            *piVar9 = *piVar7 - iVar14;
            piVar9[3] = 0;
            piVar9[2] = iVar15 + iVar14;
          }
          else if (iVar10 == 4) {
            iVar15 = *param_4;
            *piVar9 = *piVar7;
            piVar9[3] = iVar14;
            piVar9[2] = param_2[iVar4 + iVar15 * 8 + 0x1005];
          }
          iVar4 = iVar4 + 1;
          piVar7 = piVar7 + 0xf;
          piVar9 = piVar9 + 0xf;
        } while (iVar4 != iVar13);
      }
    }
  }
  pFVar2 = stderr;
  uVar8 = DAT_00027714;
  iVar13 = DAT_00027710;
  if (iVar3 < 0) {
    piVar7 = __errno_location();
    pcVar6 = strerror(*piVar7);
    fprintf(pFVar2,"%s: failed: %s\n","VIDIOC_DQBUF",pcVar6);
    iVar3 = -1;
  }
  else {
    DAT_0006dff8 = DAT_0006e550;
    local_23c = DAT_00062d94;
    DAT_0006dff4 = DAT_00062d94;
    if (DAT_0006e550 != '\0') {
      if (DAT_00062d94 == 2) {
        DAT_00062d94 = 3;
      }
      else if (DAT_00062d94 == 3) {
        DAT_00062d94 = 2;
      }
    }
    if (param_3 == 0) {
      if (DAT_0006e568 != '\0') {
        if (cVar12 == '\0') {
          FUN_0003b9dc(DAT_00027714,param_2[local_24c * 8 + 0xf05],
                       *(undefined4 *)(DAT_00027710 + -8),*(undefined4 *)(DAT_00027710 + -4),0,
                       param_2[local_24c * 8 + 0xf05]);
        }
        else if (param_2[4] != 0) {
          uVar11 = 0;
          do {
            uVar5 = uVar11 + 1;
            FUN_0003b9dc(uVar8,param_2[uVar11 + local_24c * 8 + 0xf05],*(undefined4 *)(iVar13 + -8),
                         *(undefined4 *)(iVar13 + -4),uVar11,param_2[uVar11 + local_24c * 8 + 0xf05]
                        );
            uVar11 = uVar5;
          } while (uVar5 < (uint)param_2[4]);
        }
      }
    }
    else {
      iVar3 = FUN_00026c88(param_2,local_24c,param_3);
      if (iVar3 == 0) {
        return -1;
      }
    }
    if (((local_248 - 2U < 0xb) && ((~(0x56bU >> (local_248 - 2U & 0xff)) & 1) == 0)) &&
       ((local_240 & 0xe000) == 0x4000)) {
      clock_gettime(1,&local_254);
      local_234 = local_254.tv_nsec / 1000;
    }
    iVar3 = FUN_0001391c(param_1,0xc044560f,&local_24c);
    pFVar2 = stderr;
    if (iVar3 == 0) {
      if ((DAT_00062d94 - 2U < 2) || (DAT_00062d94 == 7)) {
        iVar13 = 1;
        iVar3 = DAT_0006e454;
      }
      else {
        iVar13 = 2;
        iVar3 = DAT_0006e454 << 1;
      }
      DAT_0006e450 = iVar3 + DAT_0006e450;
      DAT_0006e45c = DAT_0006e460 * iVar13 + DAT_0006e45c;
      fputc(0x3e,stderr);
      fflush(stderr);
      if (*param_5 == 0) {
        clock_gettime(1,param_6);
        uVar5 = *param_5;
        DAT_0006e560 = 0;
      }
      else {
        clock_gettime(1,&local_254);
        iVar3 = local_254.tv_nsec - param_6->tv_nsec;
        uVar11 = local_254.tv_sec - param_6->tv_sec;
        if (iVar3 < 0) {
          uVar11 = uVar11 - 1;
          iVar3 = iVar3 + 1000000000;
        }
        uVar5 = *param_5;
        if (DAT_0006e560 < uVar11) {
          lVar1 = __aeabi_uldivmod(iVar3,iVar3 >> 0x1f,DAT_00027708,DAT_0002770c);
          lVar1 = (longlong)(int)uVar11 * 100 + lVar1;
          uVar16 = __aeabi_uldivmod((int)((ulonglong)uVar5 * 10000),
                                    (int)((ulonglong)uVar5 * 10000 >> 0x20),(int)lVar1,
                                    (int)((ulonglong)lVar1 >> 0x20));
          uVar8 = (undefined4)((ulonglong)uVar16 >> 0x20);
          DAT_0006e560 = uVar11;
          uVar17 = __aeabi_uldivmod((int)uVar16,uVar8,100,0);
          __aeabi_uldivmod((int)uVar16,uVar8,100,0);
          fprintf(stderr," %llu.%02llu fps\n",(int)uVar17,(int)((ulonglong)uVar17 >> 0x20),
                  extraout_r2,extraout_r3);
          uVar5 = *param_5;
        }
      }
      iVar3 = DAT_00062d98;
      *param_5 = uVar5 + 1;
      if ((0 < iVar3) && (__aeabi_uidivmod(), extraout_r1 == 0)) {
        sleep(1);
      }
      if (DAT_0006e564 == 0) {
        return 0;
      }
      DAT_0006e564 = DAT_0006e564 + -1;
      iVar3 = -(uint)(DAT_0006e564 == 0);
    }
    else {
      piVar7 = __errno_location();
      pcVar6 = strerror(*piVar7);
      fprintf(pFVar2,"%s: failed: %s\n","VIDIOC_QBUF",pcVar6);
      iVar3 = -1;
    }
  }
  return iVar3;
}



/* ===== FUN_00027718 @ 00027718 size=108 ===== */

void FUN_00027718(size_t param_1,int param_2,__off_t param_3)

{
  if (DAT_00063377 != '\0') {
    v4l2_mmap(0,param_1,3,1,param_2);
    return;
  }
  mmap((void *)0x0,param_1,3,1,param_2,param_3);
  return;
}



/* ===== FUN_00027784 @ 00027784 size=780 ===== */

undefined4 FUN_00027784(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  size_t __size;
  undefined1 *puVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  size_t sVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *local_274;
  uint local_25c;
  undefined4 local_258;
  size_t local_254;
  undefined1 *puStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  size_t local_244;
  undefined1 *puStack_240;
  size_t local_23c;
  undefined1 *puStack_238;
  size_t local_234;
  undefined1 *puStack_230;
  size_t local_22c;
  undefined1 *puStack_228;
  size_t local_224;
  size_t sStack_220;
  undefined1 *puStack_21c;
  undefined1 auStack_218 [500];
  
  if (param_2[3] == 0) {
    return 0;
  }
  sVar9 = 0;
  puVar10 = *(undefined1 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar11 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar12 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piVar8 = param_2 + 0xf05;
  uVar7 = 0;
  local_274 = param_2;
  while( true ) {
    local_254 = sVar9;
    puStack_250 = puVar10;
    uStack_24c = uVar11;
    uStack_248 = uVar12;
    local_244 = sVar9;
    puStack_240 = puVar10;
    local_23c = sVar9;
    puStack_238 = puVar10;
    local_234 = sVar9;
    puStack_230 = puVar10;
    local_22c = sVar9;
    puStack_228 = puVar10;
    local_224 = sVar9;
    sStack_220 = sVar9;
    puStack_21c = puVar10;
    memset(auStack_218,0,0x1e0);
    local_258 = *param_2;
    local_22c = param_2[1];
    if (*(char *)(param_2 + 2) != '\0') {
      puStack_228 = auStack_218;
      local_224 = 8;
    }
    local_25c = uVar7;
    iVar1 = FUN_00013938(param_1,0xc0445609,&local_25c,"VIDIOC_QUERYBUF");
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    if (*(char *)(param_2 + 2) == '\0') {
      local_274[6] = local_224;
      if (param_2[1] == 1) {
        iVar1 = FUN_00027718(local_224,param_1,puStack_228);
        *piVar8 = iVar1;
        if (iVar1 == -1) {
          fwrite("mmap failed\n",1,0xc,stderr);
          return 0xffffffff;
        }
      }
      else if (param_2[1] == 4) {
        pvVar2 = mmap((void *)0x0,local_224,3,1,piVar8[0x100],0);
        *piVar8 = (int)pvVar2;
        if (pvVar2 == (void *)0xffffffff) {
          fwrite("dmabuf mmap failed\n",1,0x13,stderr);
          return 0xffffffff;
        }
        puStack_228 = (undefined1 *)piVar8[0x100];
      }
      else {
        puStack_228 = calloc(1,local_224);
        *piVar8 = (int)puStack_228;
      }
    }
    else if (param_2[4] != 0) {
      puVar3 = auStack_218;
      uVar5 = 0;
      piVar4 = piVar8;
      puVar6 = local_274;
      do {
        __size = *(size_t *)(puVar3 + 4);
        puVar6[6] = __size;
        if (param_2[1] == 1) {
          iVar1 = FUN_00027718(__size,param_1,*(undefined4 *)(puVar3 + 8),0);
          *piVar4 = iVar1;
          if (iVar1 == -1) {
            fprintf(stderr,"mmap plane %u failed\n",uVar5);
            return 0xffffffff;
          }
        }
        else if (param_2[1] == 4) {
          pvVar2 = mmap((void *)0x0,__size,3,1,piVar4[0x100],0);
          *piVar4 = (int)pvVar2;
          if (pvVar2 == (void *)0xffffffff) {
            fprintf(stderr,"dmabuf mmap plane %u failed\n",uVar5);
            return 0xffffffff;
          }
          *(int *)(puVar3 + 8) = piVar4[0x100];
        }
        else {
          pvVar2 = calloc(1,__size);
          *piVar4 = (int)pvVar2;
          *(void **)(puVar3 + 8) = pvVar2;
        }
        uVar5 = uVar5 + 1;
        puVar3 = puVar3 + 0x3c;
        puVar6 = puVar6 + 0xf;
        piVar4 = piVar4 + 1;
      } while (uVar5 < (uint)param_2[4]);
    }
    iVar1 = FUN_00013938(param_1,0xc044560f,&local_25c,"VIDIOC_QBUF");
    if (iVar1 != 0) break;
    uVar7 = uVar7 + 1;
    piVar8 = piVar8 + 8;
    local_274 = local_274 + 0x78;
    if ((uint)param_2[3] <= uVar7) {
      return 0;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00027a90 @ 00027a90 size=2716 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_00027a90(int param_1,int *param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  void *pvVar7;
  size_t __len;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  size_t *psVar14;
  undefined1 *puVar15;
  bool bVar16;
  size_t sVar17;
  undefined4 uVar18;
  __time_t _Var19;
  int *local_364;
  uint local_360;
  uint local_35c;
  timespec local_330;
  uint local_328;
  int local_324;
  size_t local_320;
  undefined1 *puStack_31c;
  uint local_318;
  __time_t local_314;
  size_t local_310;
  undefined1 *puStack_30c;
  size_t local_308;
  undefined1 *puStack_304;
  size_t local_300;
  undefined1 *puStack_2fc;
  undefined1 *local_2f8;
  undefined1 *puStack_2f4;
  size_t local_2f0;
  size_t sStack_2ec;
  undefined1 *puStack_2e8;
  int local_2e4;
  undefined4 local_2e0;
  int local_2dc;
  undefined4 local_2d8;
  uint local_2d4;
  int local_2d0;
  int local_2c8;
  undefined4 local_2c4;
  uint local_2bc;
  uint local_2b8;
  uint local_2b4;
  byte local_22c;
  byte local_22a;
  byte local_229;
  byte local_228;
  undefined1 local_218 [4];
  int local_214;
  int local_210;
  
  memset(&local_2e0,0,200);
  local_2e4 = *param_2;
  local_2c4 = DAT_00063548;
  FUN_00013938(param_1,0xc0cc5604,&local_2e4,"VIDIOC_G_FMT");
  iVar4 = FUN_0001391c(param_1,0x80085617,DAT_0002852c + -8);
  if (iVar4 == 0) {
    if ((*(uint *)(DAT_0002852c + -8) & 0xf900) == 0) {
      if ((*(uint *)(DAT_0002852c + -8) & 0xff06ff) == 0) {
        local_360 = 0;
      }
      else {
        local_360 = 2;
      }
      goto LAB_00027b34;
    }
  }
  else {
    *(undefined8 *)(DAT_0002852c + -8) = 0;
    iVar4 = FUN_0001391c(param_1,0xc0845658,local_218);
    if (iVar4 != 0) {
      local_360 = 0;
      goto LAB_00027b34;
    }
    if (local_214 != 0x2d0) {
      local_360 = 0;
      goto LAB_00027b34;
    }
    if (local_210 != 0x1e0) {
      if (local_210 == 0x240) {
        local_360 = 2;
      }
      else {
        local_360 = 0;
      }
      goto LAB_00027b34;
    }
  }
  local_360 = 1;
LAB_00027b34:
  iVar4 = DAT_00028530;
  DAT_0006e550 = local_2d4 == 7;
  DAT_00062d94 = local_2d4;
  if (local_2d4 - 2 < 2 || (bool)DAT_0006e550) {
    iVar9 = 2;
    if ((DAT_0006e558 & 0xf900) == 0) {
      DAT_00062d94 = 2;
    }
    else {
      DAT_00062d94 = 3;
    }
  }
  else {
    iVar9 = 1;
  }
  FUN_000307f4(DAT_00028530,0x280,0x168);
  if ((char)param_2[2] == '\0') {
    FUN_00030938(iVar4,local_2e0);
    iVar5 = FUN_00030df0(iVar4,local_2d8);
    FUN_00032014(iVar4,local_2e0,local_2dc * iVar9,local_2d4);
    uVar18 = DAT_0006e420;
    cVar3 = DAT_0006e090;
    if (local_2c8 != DAT_0006e054) {
      DAT_0006e054 = local_2c8;
      DAT_0006e464 = 1;
    }
    if (local_2b4 != DAT_0006e058) {
      DAT_0006e058 = local_2b4;
      DAT_0006e464 = 1;
    }
    if (local_2bc != DAT_0006e05c) {
      DAT_0006e05c = local_2bc;
      DAT_0006e464 = 1;
    }
    if (local_2b8 != DAT_0006e070) {
      DAT_0006e070 = local_2b8;
      DAT_0006e464 = 1;
    }
    iVar9 = local_2d0;
    if (DAT_0006e088 < 2) {
      iVar9 = DAT_0006e08c;
      if (DAT_0006e090 != '\0') {
        iVar9 = 1;
      }
      puVar15 = DAT_00028534 + iVar9;
      puVar2 = (undefined4 *)(iVar4 + 0x448);
      for (puVar10 = DAT_00028534; puVar10 != puVar15; puVar10 = puVar10 + 1) {
        uVar1 = *puVar10;
        uVar6 = __aeabi_uidiv(puVar2[-3] * local_2d0,uVar18);
        uVar6 = __aeabi_uidiv(uVar6,uVar1);
        *puVar2 = uVar6;
        puVar2 = puVar2 + 1;
      }
      iVar9 = DAT_0006e42c;
      if (cVar3 != '\0') {
        DAT_0006e430 = DAT_0006e42c;
      }
    }
  }
  else {
    FUN_00030938(iVar4,local_2e0);
    iVar5 = FUN_00030df0(iVar4,local_2d8);
    FUN_00032014(iVar4,local_2e0,local_2dc * iVar9,local_2d4);
    uVar18 = DAT_0006e420;
    cVar3 = DAT_0006e090;
    uVar12 = DAT_0006e088;
    if (local_2d0 != DAT_0006e054) {
      DAT_0006e054 = local_2d0;
      DAT_0006e464 = 1;
    }
    if (local_228 != DAT_0006e058) {
      DAT_0006e464 = 1;
      DAT_0006e058 = (uint)local_228;
    }
    if (local_22a != DAT_0006e05c) {
      DAT_0006e464 = 1;
      DAT_0006e05c = (uint)local_22a;
    }
    if (local_229 != DAT_0006e070) {
      DAT_0006e464 = 1;
      DAT_0006e070 = (uint)local_229;
    }
    iVar9 = DAT_0006e42c;
    if ((iVar5 != 0) && (local_22c != 0)) {
      piVar11 = &local_2e4;
      uVar13 = 0;
      iVar8 = DAT_0006e08c;
      if (DAT_0006e090 != '\0') {
        iVar8 = 1;
      }
      do {
        iVar9 = piVar11[7];
        if (uVar12 < 2) {
          puVar15 = DAT_00028534 + iVar8;
          puVar2 = (undefined4 *)(iVar4 + 0x448);
          for (puVar10 = DAT_00028534; puVar15 != puVar10; puVar10 = puVar10 + 1) {
            uVar1 = *puVar10;
            uVar6 = __aeabi_uidiv(puVar2[-3] * iVar9,uVar18);
            uVar6 = __aeabi_uidiv(uVar6,uVar1);
            *puVar2 = uVar6;
            puVar2 = puVar2 + 1;
          }
          if (cVar3 != '\0') {
            DAT_0006e430 = DAT_0006e42c;
          }
        }
        else {
          *(int *)(iVar4 + uVar13 * 4 + 0x448) = iVar9;
        }
        uVar13 = uVar13 + 1;
        piVar11 = piVar11 + 5;
        iVar9 = DAT_0006e42c;
      } while (uVar13 < local_22c);
    }
  }
  DAT_0006e42c = iVar9;
  if (DAT_0006e56c != DAT_0006e438) {
    DAT_0006e438 = DAT_0006e56c;
    DAT_0006e464 = 1;
  }
  DAT_0006e44c = DAT_00062d9c;
  FUN_00039840(DAT_00028530);
  DAT_0006e458 = DAT_00062da0;
  FUN_00039840(DAT_00028530);
  DAT_0006e446 = DAT_0006e570;
  DAT_0006e445 = DAT_0006e571;
  DAT_0006e447 = DAT_0006e572;
  DAT_0006e448 = DAT_0006e573;
  DAT_0006e440 = DAT_00062da4;
  if ((DAT_0006e574 != '\0') && (DAT_0006e084 != 1)) {
    DAT_0006e084 = 1;
    DAT_0006e464 = 1;
  }
  if (DAT_0006e044 != DAT_0006e575) {
    DAT_0006e044 = DAT_0006e575;
    DAT_0006e464 = 1;
  }
  if (DAT_0006e045 != DAT_0006e576) {
    DAT_0006e045 = DAT_0006e576;
    DAT_0006e464 = 1;
  }
  if (DAT_0006e578 != DAT_0006e078) {
    DAT_0006e078 = DAT_0006e578;
    DAT_0006e466 = 1;
  }
  if (DAT_00062da8 != -1) {
    local_360 = DAT_00062da8;
  }
  if (local_360 != DAT_0006e07c) {
    DAT_0006e466 = 1;
    DAT_0006e07c = local_360;
  }
  local_35c = DAT_00062d94;
  if (iVar5 != 0) {
    bVar16 = 6 < DAT_00062d94;
    if (DAT_00062d94 != 7) {
      bVar16 = DAT_00062d94 != 2;
    }
    if ((((!bVar16 || (DAT_00062d94 == 7 || DAT_00062d94 == 3)) && ((DAT_0006e564 & 1) != 0)) ||
        (DAT_0006e438 == 0x15)) || ((DAT_0006e44c != 3 || (DAT_0006e458 != 3)))) {
      DAT_0006e568 = 1;
    }
  }
  if (param_2[3] != 0) {
    local_364 = param_2 + 0x1005;
    sVar17 = 0;
    puVar10 = *(undefined1 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uVar18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    _Var19 = *(__time_t *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    psVar14 = (size_t *)(param_2 + 6);
    local_360 = 0;
    do {
      local_320 = sVar17;
      puStack_31c = puVar10;
      local_318 = uVar18;
      local_314 = _Var19;
      local_310 = sVar17;
      puStack_30c = puVar10;
      local_308 = sVar17;
      puStack_304 = puVar10;
      local_300 = sVar17;
      puStack_2fc = puVar10;
      local_2f8 = (undefined1 *)sVar17;
      puStack_2f4 = puVar10;
      local_2f0 = sVar17;
      sStack_2ec = sVar17;
      puStack_2e8 = puVar10;
      memset(local_218,0,0x1e0);
      local_324 = *param_2;
      local_2f8 = (undefined1 *)param_2[1];
      bVar16 = (char)param_2[2] != '\0';
      puVar15 = local_2f8;
      if (bVar16) {
        puVar15 = local_218;
      }
      local_328 = local_360;
      if (bVar16) {
        local_2f0 = 8;
        puStack_2f4 = puVar15;
      }
      iVar4 = FUN_00013938(param_1,0xc0445609,&local_328,"VIDIOC_QUERYBUF");
      if (iVar4 != 0) {
        return 0xffffffff;
      }
      DAT_0006dff8 = DAT_0006e550;
      local_318 = local_35c;
      DAT_0006dff4 = local_35c;
      if (DAT_0006e550 != '\0') {
        if (local_35c == 2) {
          local_35c = 3;
        }
        else if (local_35c == 3) {
          local_35c = 2;
        }
      }
      if ((char)param_2[2] == '\0') {
        *psVar14 = local_2f0;
        local_320 = local_2f0;
        if (param_2[1] == 1) {
          iVar4 = FUN_00027718(local_2f0,param_1,puStack_2f4,0);
          local_364[-0x100] = iVar4;
          if (iVar4 == -1) {
            fwrite("mmap output failed\n",1,0x13,stderr);
            return 0xffffffff;
          }
        }
        else if (param_2[1] == 4) {
          pvVar7 = mmap((void *)0x0,local_2f0,3,1,*local_364,0);
          local_364[-0x100] = (int)pvVar7;
          if (pvVar7 == (void *)0xffffffff) {
            fwrite("dmabuf mmap output failed\n",1,0x1a,stderr);
            return 0xffffffff;
          }
          puStack_2f4 = (undefined1 *)*local_364;
        }
        else {
          puStack_2f4 = calloc(1,local_2f0);
          local_364[-0x100] = (int)puStack_2f4;
        }
        if (((param_3 == 0) || (iVar4 = FUN_00026c88(param_2,local_328,param_3), iVar4 == 0)) &&
           (iVar5 != 0)) {
          FUN_0003b9dc(DAT_00028530);
        }
      }
      else {
        if (param_2[4] != 0) {
          iVar4 = 0;
          uVar12 = 0;
          piVar11 = local_364 + -0x100;
          puVar15 = local_218;
          do {
            __len = *(size_t *)(puVar15 + 4);
            *(size_t *)((int)psVar14 + iVar4) = __len;
            *(size_t *)(puStack_2f4 + iVar4) = __len;
            if (param_2[1] == 1) {
              pvVar7 = mmap((void *)0x0,__len,3,1,param_1,*(__off_t *)(puVar15 + 8));
              *piVar11 = (int)pvVar7;
              if (pvVar7 == (void *)0xffffffff) {
                fprintf(stderr,"mmap output plane %u failed\n",uVar12);
                return 0xffffffff;
              }
            }
            else if (param_2[1] == 4) {
              pvVar7 = mmap((void *)0x0,__len,3,1,piVar11[0x100],0);
              *piVar11 = (int)pvVar7;
              if (pvVar7 == (void *)0xffffffff) {
                fprintf(stderr,"dmabuf mmap output plane %u failed\n",uVar12);
                return 0xffffffff;
              }
              *(int *)(puVar15 + 8) = piVar11[0x100];
            }
            else {
              pvVar7 = calloc(1,__len);
              *piVar11 = (int)pvVar7;
              *(void **)(puVar15 + 8) = pvVar7;
            }
            puVar15 = puVar15 + 0x3c;
            iVar4 = iVar4 + 0x3c;
            if (iVar5 != 0) {
              FUN_0003b9dc(DAT_00028530,*piVar11,*(undefined4 *)(DAT_0002852c + -8),
                           *(undefined4 *)(DAT_0002852c + -4),uVar12,*piVar11);
            }
            uVar12 = uVar12 + 1;
            piVar11 = piVar11 + 1;
          } while (uVar12 < (uint)param_2[4]);
        }
        if (param_3 != 0) {
          FUN_00026c88(param_2,local_328,param_3);
        }
      }
      if (param_4 != 0) {
        if (((local_324 - 2U < 0xb) && ((~(0x56bU >> (local_324 - 2U & 0xff)) & 1) == 0)) &&
           (((uint)puStack_31c & 0xe000) == 0x4000)) {
          clock_gettime(1,&local_330);
          local_314 = local_330.tv_sec;
          local_310 = local_330.tv_nsec / 1000;
        }
        iVar4 = FUN_00013938(param_1,0xc044560f,&local_328,"VIDIOC_QBUF");
        if (iVar4 != 0) {
          return 0xffffffff;
        }
        if ((local_35c - 2 < 2) || (local_35c == 7)) {
          iVar9 = 1;
          iVar4 = DAT_0006e454;
        }
        else {
          iVar9 = 2;
          iVar4 = DAT_0006e454 << 1;
        }
        DAT_0006e450 = DAT_0006e450 + iVar4;
        DAT_0006e45c = DAT_0006e460 * iVar9 + DAT_0006e45c;
      }
      psVar14 = psVar14 + 0x78;
      local_360 = local_360 + 1;
      local_364 = local_364 + 8;
    } while (local_360 < (uint)param_2[3]);
  }
  if (param_4 != 0) {
    DAT_00062d94 = local_35c;
  }
  return 0;
}



/* ===== FUN_00028538 @ 00028538 size=1344 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00028538(FILE *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  size_t sVar5;
  size_t *psVar6;
  size_t *__dest;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  size_t local_74;
  size_t local_70;
  size_t local_6c [5];
  size_t *local_58;
  size_t local_54;
  size_t local_50;
  uint local_4c;
  undefined1 local_48;
  undefined1 local_47;
  size_t *local_40;
  size_t local_3c;
  size_t local_38;
  char acStack_34 [4];
  char acStack_30 [4];
  undefined1 local_2c;
  
  fprintf(param_1,"\tIndex    : %d\n",*param_2);
  FUN_00015ab8(&local_40,param_2[1]);
  fprintf(param_1,"\tType     : %s\n",local_40);
  __dest = &local_38;
  if (local_40 != __dest) {
    operator_delete(local_40);
  }
  FUN_00014958(&local_40,param_2[3] & 0xfff81fff,&DAT_000455b4);
  fprintf(param_1,"\tFlags    : %s\n",local_40);
  if (local_40 != __dest) {
    operator_delete(local_40);
  }
  FUN_00015334(&local_40,param_2[4]);
  fprintf(param_1,"\tField    : %s\n",local_40);
  if (local_40 != __dest) {
    operator_delete(local_40);
  }
  fprintf(param_1,"\tSequence : %u\n",param_2[0xb]);
  fprintf(param_1,"\tLength   : %u\n",param_2[0xe]);
  fprintf(param_1,"\tBytesused: %u\n",param_2[2]);
  uVar8 = param_2[3];
  uVar10 = param_2[5];
  uVar7 = uVar8 & 0xe000;
  uVar13 = param_2[6];
  if (uVar7 == 0x2000) {
    local_50._0_1_ = s_Monotonic_000458a8[0];
    local_50._1_1_ = s_Monotonic_000458a8[1];
    local_50._2_1_ = s_Monotonic_000458a8[2];
    local_50._3_1_ = s_Monotonic_000458a8[3];
    local_4c._0_1_ = s_Monotonic_000458a8[4];
    local_4c._1_1_ = s_Monotonic_000458a8[5];
    local_4c._2_1_ = s_Monotonic_000458a8[6];
    local_4c._3_1_ = s_Monotonic_000458a8[7];
    local_54 = 9;
    local_48 = (undefined1)ram0x000458b0;
    local_47 = 0;
LAB_0002881c:
    psVar6 = &local_50;
  }
  else {
    if (uVar7 == 0x4000) {
      local_50 = 0x79706f43;
      local_54 = 4;
      local_4c = local_4c & 0xffffff00;
      goto LAB_0002881c;
    }
    if (uVar7 == 0) {
      local_54 = 7;
      local_50._0_1_ = s_Unknown_0003f7d0[0];
      local_50._1_1_ = s_Unknown_0003f7d0[1];
      local_50._2_1_ = s_Unknown_0003f7d0[2];
      local_50._3_1_ = s_Unknown_0003f7d0[3];
      local_4c = s_Unknown_0003f7d0._4_4_ & 0xffffff;
      goto LAB_0002881c;
    }
    sprintf((char *)&local_40,"Type %d",(uVar8 & 0xffff) >> 0xd);
    psVar6 = &local_50;
    local_58 = psVar6;
    sVar5 = strlen((char *)&local_40);
    local_6c[0] = sVar5;
    if (sVar5 < 0x10) {
      if (sVar5 == 1) {
        local_50 = CONCAT31(local_50._1_3_,(char)local_40);
      }
      else if (sVar5 != 0) goto LAB_00028a18;
    }
    else {
      psVar6 = (size_t *)std::__cxx11::string::_M_create((uint *)&local_58,(uint)local_6c);
      local_50 = local_6c[0];
      local_58 = psVar6;
LAB_00028a18:
      memcpy(psVar6,&local_40,sVar5);
      psVar6 = local_58;
    }
    *(undefined1 *)((int)psVar6 + local_6c[0]) = 0;
    uVar8 = param_2[3];
    psVar6 = local_58;
    local_54 = local_6c[0];
  }
  local_58 = psVar6;
  local_40 = __dest;
  if ((uVar8 & 0x70000) == 0) {
    local_2c = 0;
    local_3c = 0xc;
    local_38 = s_End_of_Frame_000458bc._0_4_;
    acStack_34 = (char  [4])s_End_of_Frame_000458bc._4_4_;
    acStack_30 = (char  [4])s_End_of_Frame_000458bc._8_4_;
    goto LAB_000286e8;
  }
  if ((uVar8 & 0x70000) == 0x10000) {
    local_74 = 0x11;
    local_40 = (size_t *)std::__cxx11::string::_M_create((uint *)&local_40,(uint)&local_74);
    cVar4 = s_Start_of_Exposure_000458cc[0x10];
    uVar3 = s_Start_of_Exposure_000458cc._12_4_;
    uVar2 = s_Start_of_Exposure_000458cc._8_4_;
    uVar1 = s_Start_of_Exposure_000458cc._4_4_;
    local_38 = local_74;
    *local_40 = s_Start_of_Exposure_000458cc._0_4_;
    local_40[1] = uVar1;
    local_40[3] = uVar3;
    *(char *)(local_40 + 4) = cVar4;
    local_40[2] = uVar2;
    local_3c = local_74;
    *(char *)((int)local_40 + local_74) = '\0';
    goto LAB_000286e8;
  }
  sprintf((char *)local_6c,"Source %d",(uVar8 & 0x7ffff) >> 0x10);
  sVar5 = strlen((char *)local_6c);
  local_70 = sVar5;
  if (sVar5 < 0x10) {
    if (sVar5 == 1) {
      local_38 = CONCAT31(local_38._1_3_,(char)local_6c[0]);
    }
    else if (sVar5 != 0) goto LAB_00028a4c;
  }
  else {
    __dest = (size_t *)std::__cxx11::string::_M_create((uint *)&local_40,(uint)&local_70);
    local_38 = local_70;
    local_40 = __dest;
LAB_00028a4c:
    memcpy(__dest,local_6c,sVar5);
    __dest = local_40;
  }
  *(char *)((int)__dest + local_70) = '\0';
  local_3c = local_70;
LAB_000286e8:
  fprintf(param_1,"\tTimestamp: %lu.%06lus (%s, %s)\n",uVar10,uVar13,psVar6,local_40);
  if (local_40 != &local_38) {
    operator_delete(local_40);
  }
  if (local_58 != &local_50) {
    operator_delete(local_58);
  }
  if ((param_2[3] & 0x100) != 0) {
    if ((int)param_2[7] < 6) {
      uVar10 = (&DAT_0004561c)[param_2[7]];
    }
    else {
      uVar10 = 0;
    }
    FUN_00014958(&local_40,param_2[8],DAT_00028acc);
    fprintf(param_1,"\tTimecode : %dfps %s %dh %dm %ds %df (0x%02x 0x%02x 0x%02x 0x%02x)\n",uVar10,
            local_40,(uint)*(byte *)((int)param_2 + 0x27),(uint)*(byte *)((int)param_2 + 0x26),
            (uint)*(byte *)((int)param_2 + 0x25),(uint)*(byte *)(param_2 + 9),
            (uint)*(byte *)(param_2 + 10),(uint)*(byte *)((int)param_2 + 0x29),
            (uint)*(byte *)((int)param_2 + 0x2a),(uint)*(byte *)((int)param_2 + 0x2b));
    if (local_40 != &local_38) {
      operator_delete(local_40);
    }
  }
  if ((param_2[1] - 9 < 2) && (param_2[0xe] != 0)) {
    iVar9 = 0;
    uVar8 = 0;
    do {
      iVar12 = param_2[0xd];
      iVar11 = iVar12 + iVar9;
      fprintf(param_1,"\tPlane    : %d\n",uVar8);
      uVar8 = uVar8 + 1;
      fprintf(param_1,"\t\tLength     : %u\n",*(undefined4 *)(iVar11 + 4));
      fprintf(param_1,"\t\tBytesused  : %u\n",*(undefined4 *)(iVar12 + iVar9));
      iVar9 = iVar9 + 0x3c;
      fprintf(param_1,"\t\tData Offset: %u\n",*(undefined4 *)(iVar11 + 0xc));
    } while (uVar8 < (uint)param_2[0xe]);
  }
  fputc(10,param_1);
  return;
}



/* ===== FUN_00028ad0 @ 00028ad0 size=1960 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

int FUN_00028ad0(undefined4 param_1,undefined4 *param_2,FILE *param_3,int *param_4,uint *param_5,
                timespec *param_6)

{
  code *pcVar1;
  longlong lVar2;
  FILE *__stream;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  uint uVar6;
  size_t sVar7;
  int extraout_r1;
  undefined4 uVar8;
  uint uVar9;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  uint local_270;
  timespec local_26c [4];
  int local_24c;
  undefined4 local_248;
  uint local_244;
  uint local_240;
  uint local_23c;
  undefined4 local_21c;
  uint *local_218;
  undefined4 local_214;
  uint local_208 [121];
  
  memset(&local_24c,0,0x44);
  memset(local_208,0,0x1e0);
  uVar17 = DAT_00063530;
  local_248 = *param_2;
  local_21c = param_2[1];
  if (*(char *)(param_2 + 2) != '\0') {
    local_218 = local_208;
    local_214 = 8;
  }
  while( true ) {
    iVar3 = FUN_0001391c(param_1,0xc0445611,&local_24c);
    if (iVar3 < 0) {
      piVar4 = __errno_location();
      __stream = stderr;
      if (*piVar4 != 0xb) {
        pcVar5 = strerror(*piVar4);
        fprintf(__stream,"%s: failed: %s\n","VIDIOC_DQBUF",pcVar5);
        return -1;
      }
      return 0;
    }
    if ((local_240 & 0x40) == 0) break;
    if (DAT_00063504 != 0) {
      FUN_00028538(stderr,&local_24c);
    }
    FUN_0001391c(param_1,0xc044560f,&local_24c);
  }
  if ((param_3 == (FILE *)0x0) || (DAT_0006e57c != 0 && (uVar17 & 0xc000) == 0)) goto LAB_00028f04;
  if (DAT_00062dac < 0) {
    if (param_2[4] == 0) goto LAB_00028f04;
LAB_00028dc4:
    puVar14 = local_208;
    uVar11 = 0;
    do {
      if (*(char *)(param_2 + 2) == '\0') {
        uVar6 = local_244;
        uVar9 = 0;
      }
      else {
        uVar6 = *puVar14;
        uVar12 = puVar14[3];
        if (uVar6 < uVar12) {
          uVar9 = 0;
          fprintf(stderr,"offset %d > used %d!\n",uVar12,uVar6);
        }
        else {
          uVar6 = uVar6 - uVar12;
          uVar9 = uVar12;
        }
      }
      if (-1 < DAT_00062dac) {
        local_270 = 0x20000000;
        fwrite(&local_270,1,4,param_3);
        local_270 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                    uVar6 >> 0x18;
        fwrite(&local_270,1,4,param_3);
        uVar6 = (&local_26c[0].tv_sec)[uVar11];
        local_270 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                    uVar6 >> 0x18;
        fwrite(&local_270,1,4,param_3);
      }
      sVar7 = fwrite((void *)(param_2[uVar11 + local_24c * 8 + 0xf05] + uVar9),1,uVar6,param_3);
      if (uVar6 != sVar7) {
        fprintf(stderr,"%u != %u\n",sVar7,uVar6);
      }
      uVar11 = uVar11 + 1;
      puVar14 = puVar14 + 0xf;
    } while (uVar11 < (uint)param_2[4]);
  }
  else {
    if (param_2[4] == 0) {
      local_270 = 0x66726d76;
      fwrite(&local_270,1,4,param_3);
      uVar17 = param_2[4] * 0x24 + 0x24;
      local_270 = uVar17 * 0x1000000 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
                  uVar17 >> 0x18;
      fwrite(&local_270,1,4,param_3);
      local_270 = 0x20000000;
      fwrite(&local_270,1,4,param_3);
      local_270 = local_23c << 0x18 | (local_23c >> 8 & 0xff) << 0x10 |
                  (local_23c >> 0x10 & 0xff) << 8 | local_23c >> 0x18;
      fwrite(&local_270,1,4,param_3);
      local_270 = local_240 << 0x18 | (local_240 >> 8 & 0xff) << 0x10 |
                  (local_240 >> 0x10 & 0xff) << 8 | local_240 >> 0x18;
      fwrite(&local_270,1,4,param_3);
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0,0x29274);
      (*pcVar1)();
    }
    puVar10 = &local_270;
    uVar11 = 0;
    iVar3 = 0;
    iVar15 = 0;
    puVar13 = param_2 + 0x1105;
    puVar14 = local_208;
    do {
      iVar16 = uVar11 + local_24c * 8;
      uVar11 = uVar11 + 1;
      uVar6 = 0;
      uVar9 = local_244;
      if (*(char *)(param_2 + 2) != '\0') {
        uVar6 = puVar14[3];
        uVar9 = *puVar14 - uVar6;
      }
      iVar3 = iVar3 + uVar9;
      uVar6 = FUN_0003bf88(param_2[iVar16 + 0xf05] + uVar6,uVar9,*puVar13);
      uVar9 = param_2[4];
      iVar15 = iVar15 + uVar6;
      puVar10 = puVar10 + 1;
      *puVar10 = uVar6;
      puVar13 = puVar13 + 1;
      puVar14 = puVar14 + 0xf;
    } while (uVar11 < uVar9);
    local_270 = 0x66726d76;
    fwrite(&local_270,1,4,param_3);
    uVar11 = param_2[4] * 0x24 + 0x24 + iVar15;
    local_270 = uVar11 * 0x1000000 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
                uVar11 >> 0x18;
    fwrite(&local_270,1,4,param_3);
    local_270 = 0x20000000;
    fwrite(&local_270,1,4,param_3);
    local_270 = local_23c << 0x18 | (local_23c >> 8 & 0xff) << 0x10 |
                (local_23c >> 0x10 & 0xff) << 8 | local_23c >> 0x18;
    fwrite(&local_270,1,4,param_3);
    local_270 = local_240 << 0x18 | (local_240 >> 8 & 0xff) << 0x10 |
                (local_240 >> 0x10 & 0xff) << 8 | local_240 >> 0x18;
    fwrite(&local_270,1,4,param_3);
    iVar3 = __aeabi_uidiv(iVar15 * 100,iVar3);
    DAT_0006e584 = DAT_0006e584 + 1;
    DAT_0006e580 = iVar3 + DAT_0006e580;
    if (param_2[4] != 0) goto LAB_00028dc4;
  }
  if (-1 < DAT_00062dac) {
    fflush(param_3);
  }
LAB_00028f04:
  if ((local_240 & 8) == 0) {
    if ((local_240 & 0x10) == 0) {
      if ((local_240 & 0x20) == 0) {
        iVar3 = 0x3c;
      }
      else {
        iVar3 = 0x42;
      }
    }
    else {
      iVar3 = 0x50;
    }
  }
  else {
    iVar3 = 0x4b;
  }
  if (DAT_00063504 != 0) {
    FUN_00028538(stderr,&local_24c);
  }
  if (param_4 == (int *)0x0) {
    iVar15 = FUN_0001391c(param_1,0xc044560f,&local_24c);
    if (iVar15 != 0) {
      return -1;
    }
  }
  else {
    *param_4 = local_24c;
  }
  if (DAT_00063504 == 0) {
    fputc(iVar3,stderr);
    fflush(stderr);
  }
  if (*param_5 == 0) {
    clock_gettime(1,param_6);
    uVar6 = *param_5;
    DAT_0006e588 = 0;
  }
  else {
    clock_gettime(1,local_26c);
    iVar3 = local_26c[0].tv_nsec - param_6->tv_nsec;
    bVar18 = iVar3 < 0;
    if (bVar18) {
      iVar3 = iVar3 + 0x3b9ac000;
    }
    if (bVar18) {
      iVar3 = iVar3 + 0xa00;
    }
    uVar11 = local_26c[0].tv_sec - param_6->tv_sec;
    if (bVar18) {
      uVar11 = uVar11 - 1;
    }
    uVar6 = *param_5;
    if (DAT_0006e588 < uVar11) {
      lVar2 = __aeabi_uldivmod(iVar3,iVar3 >> 0x1f,DAT_00029278,DAT_0002927c);
      lVar2 = (longlong)(int)uVar11 * 100 + lVar2;
      uVar19 = __aeabi_uldivmod((int)((ulonglong)uVar6 * 10000),
                                (int)((ulonglong)uVar6 * 10000 >> 0x20),(int)lVar2,
                                (int)((ulonglong)lVar2 >> 0x20));
      uVar8 = (undefined4)((ulonglong)uVar19 >> 0x20);
      DAT_0006e588 = uVar11;
      uVar20 = __aeabi_uldivmod((int)uVar19,uVar8,100,0);
      __aeabi_uldivmod((int)uVar19,uVar8,100,0);
      fprintf(stderr," %llu.%02llu fps",(int)uVar20,(int)((ulonglong)uVar20 >> 0x20),extraout_r2,
              extraout_r3);
      if (-1 < DAT_00062dac) {
        iVar3 = __aeabi_uidiv(DAT_0006e580,DAT_0006e584);
        fprintf(stderr," %d%% compression",100 - iVar3);
      }
      DAT_0006e580 = 0;
      DAT_0006e584 = 0;
      fputc(10,stderr);
      uVar6 = *param_5;
    }
  }
  *param_5 = uVar6 + 1;
  if ((uVar17 & 0xc000) != 0) {
    return 0;
  }
  if (DAT_0006e57c != 0) {
    DAT_0006e57c = DAT_0006e57c + -1;
    return 0;
  }
  if ((0 < DAT_00062d98) && (__aeabi_uidivmod(), extraout_r1 == 0)) {
    sleep(1);
  }
  if (DAT_0006e564 == 0) {
    return 0;
  }
  DAT_0006e564 = DAT_0006e564 + -1;
  return -(uint)(DAT_0006e564 == 0);
}



/* ===== FUN_00029280 @ 00029280 size=240 ===== */

void FUN_00029280(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_254;
  int local_250;
  undefined4 local_24c;
  undefined1 *puStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 local_23c;
  undefined1 *puStack_238;
  undefined4 local_234;
  undefined1 *puStack_230;
  undefined4 local_22c;
  undefined1 *puStack_228;
  undefined4 local_224;
  undefined1 *puStack_220;
  undefined4 local_21c;
  undefined4 uStack_218;
  undefined1 *puStack_214;
  undefined1 auStack_210 [500];
  
  uVar4 = 0;
  puVar5 = *(undefined1 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar6 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar7 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar2 = 0;
  while( true ) {
    iVar3 = iVar2 + 1;
    local_254 = iVar2;
    local_250 = param_2;
    local_24c = uVar4;
    puStack_248 = puVar5;
    uStack_244 = uVar6;
    uStack_240 = uVar7;
    local_23c = uVar4;
    puStack_238 = puVar5;
    local_234 = uVar4;
    puStack_230 = puVar5;
    local_22c = uVar4;
    puStack_228 = puVar5;
    local_224 = uVar4;
    puStack_220 = puVar5;
    local_21c = uVar4;
    uStack_218 = uVar4;
    puStack_214 = puVar5;
    if (param_2 - 9U < 2) {
      puStack_220 = auStack_210;
      local_21c = 8;
      memset(puStack_220,0,0x1e0);
    }
    iVar1 = FUN_0001391c(param_1,0xc0445609,&local_254);
    if (iVar1 != 0) break;
    if (iVar2 == 0) {
      puts("VIDIOC_QUERYBUF:");
      FUN_00028538(stdout,&local_254);
      iVar2 = iVar3;
    }
    else {
      FUN_00028538(stdout,&local_254);
      iVar2 = iVar3;
      if (iVar3 == 0x20) {
        return;
      }
    }
  }
  return;
}



/* ===== FUN_00029370 @ 00029370 size=20 ===== */

void FUN_00029370(void)

{
  printf("\nVideo Streaming options:\n  --stream-count=<count>\n                     stream <count> buffers. The default is to keep streaming\n                     forever. This count does not include the number of initial\n                     skipped buffers as is passed by --stream-skip.\n  --stream-skip=<count>\n                     skip the first <count> buffers. The default is 0.\n  --stream-sleep=<count>\n                     sleep for 1 second every <count> buffers. If <count> is 0,\n                     then sleep forever right after streaming starts. The default\n                     is -1 (never sleep).\n  --stream-to=<file> stream to this file. The default is to discard the\n                     data. If <file> is \'-\', then the data is written to stdout\n                     and the --silent option is turned on automatically.\n  --stream-to-host=<hostname[:port]> stream to this host. The default port is %d.\n  --stream-poll      use non-blocking mode and select() to stream.\n  --stream-mmap=<count>\n                     capture video using mmap() [VIDIOC_(D)QBUF]\n                     count: the number of buffers to allocate. The default is 3.\n  --stream-user=<count>\n                     capture video using user pointers [VIDIOC_(D)QBUF]\n                     count: the number of buffers to allocate. The default is 3.\n  --stream-dmabuf    capture video using dmabuf [VIDIOC_(D)QBUF]\n                     Requires a corresponding --stream-out-mmap option.\n  --stream-from=<file> stream from this file. The default is to generate a pattern.\n                     If <file> is \'-\', then the data is read from stdin.\n  --stream-from-host=<hostname[:port]> stream from this host. The default port is %d.\n  --stream-loop      loop when the end of the file we are streaming from is reached.\n                     The default is to stop.\n  --stream-out-pattern=<count>\n                     choose output test pattern. The default is 0.\n  --stream-out-square\n                     show a square in the middle of the output test pattern.\n  --stream-out-bord..." /* TRUNCATED STRING LITERAL */
         ,0x20aa);
  return;
}



/* ===== FUN_00029384 @ 00029384 size=1052 ===== */

void FUN_00029384(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  int *piVar5;
  
  switch(param_1) {
  case 0xec:
    DAT_0006e564 = strtoul(param_2,(char **)0x0,0);
    return;
  case 0xed:
    DAT_0006e57c = strtoul(param_2,(char **)0x0,0);
    return;
  case 0xee:
    DAT_0006dfe0 = 1;
    return;
  case 0xef:
    DAT_00062d98 = strtol(param_2,(char **)0x0,0);
    return;
  default:
    return;
  case 0xf1:
    DAT_0006e58c = param_2;
    iVar2 = strcmp(param_2,"-");
    if (iVar2 == 0) {
      DAT_000633aa = 1;
    }
    return;
  case 0xf2:
    DAT_0006e590 = param_2;
    return;
  case 0xf3:
  case 0xf4:
    if (param_2 == (char *)0x0) {
      return;
    }
    DAT_00062db0 = strtoul(param_2,(char **)0x0,0);
    if (DAT_00062db0 == 0) {
      DAT_00062db0 = 3;
    }
    return;
  case 0xf6:
    DAT_0006e594 = param_2;
    return;
  case 0xf7:
    DAT_0006e598 = param_2;
    return;
  case 0xf8:
    DAT_0006e56c = strtoul(param_2,(char **)0x0,0);
    piVar5 = &DAT_000504e8;
    if (DAT_000504e8 != 0) {
      uVar4 = 0;
      do {
        piVar5 = piVar5 + 1;
        uVar4 = uVar4 + 1;
      } while (*piVar5 != 0);
      if (DAT_0006e56c < uVar4) {
        return;
      }
    }
    DAT_0006e56c = 0;
    return;
  case 0xf9:
    DAT_0006e570 = 1;
    return;
  case 0xfa:
    DAT_0006e571 = 1;
    return;
  case 0xfb:
    DAT_0006e572 = 1;
    return;
  case 0xfc:
    DAT_0006e573 = 1;
    return;
  case 0xfd:
  case 0xfe:
    iVar2 = strtol(param_2,(char **)0x0,0);
    if (2 < iVar2) {
      iVar2 = 3;
    }
    if (iVar2 < -3) {
      iVar2 = -3;
    }
    iVar1 = iVar2 + 3;
    if (param_1 != 0xfd) {
      iVar1 = DAT_00062d9c;
      DAT_00062da0 = iVar2 + 3;
    }
    DAT_00062d9c = iVar1;
    return;
  case 0xff:
    DAT_00062da4 = strtoul(param_2,(char **)0x0,0);
    if (100 < DAT_00062da4) {
      DAT_00062da4 = 100;
      return;
    }
    if (DAT_00062da4 == 0) {
      DAT_00062da4 = 1;
    }
    return;
  case 0x100:
    uVar3 = strtoul(param_2,(char **)0x0,0);
    DAT_0006e575 = (char)uVar3;
    return;
  case 0x101:
    DAT_0006e576 = 1;
    return;
  case 0x102:
    DAT_0006e574 = 1;
    return;
  case 0x103:
    iVar2 = strcmp(param_2,"square");
    if (iVar2 == 0) {
      DAT_00062da8 = iVar2;
      return;
    }
    iVar2 = strcmp(param_2,"ntsc");
    if (iVar2 == 0) {
      DAT_00062da8 = 1;
      return;
    }
    iVar2 = strcmp(param_2,"pal");
    if (iVar2 == 0) {
      DAT_00062da8 = 2;
      return;
    }
    break;
  case 0x104:
    iVar2 = strcmp(param_2,"4x3");
    if (iVar2 == 0) {
      DAT_0006e578 = 1;
      return;
    }
    iVar2 = strcmp(param_2,"14x9");
    if (iVar2 == 0) {
      DAT_0006e578 = 2;
      return;
    }
    iVar2 = strcmp(param_2,"16x9");
    if (iVar2 == 0) {
      DAT_0006e578 = 3;
      return;
    }
    iVar2 = strcmp(param_2,"anamorphic");
    if (iVar2 == 0) {
      DAT_0006e578 = 4;
      return;
    }
    break;
  case 0x105:
  case 0x106:
    if (param_2 == (char *)0x0) {
      return;
    }
    DAT_00062db4 = strtoul(param_2,(char **)0x0,0);
    if (DAT_00062db4 == 0) {
      DAT_00062db4 = 3;
      return;
    }
    return;
  }
  printf("\nVideo Streaming options:\n  --stream-count=<count>\n                     stream <count> buffers. The default is to keep streaming\n                     forever. This count does not include the number of initial\n                     skipped buffers as is passed by --stream-skip.\n  --stream-skip=<count>\n                     skip the first <count> buffers. The default is 0.\n  --stream-sleep=<count>\n                     sleep for 1 second every <count> buffers. If <count> is 0,\n                     then sleep forever right after streaming starts. The default\n                     is -1 (never sleep).\n  --stream-to=<file> stream to this file. The default is to discard the\n                     data. If <file> is \'-\', then the data is written to stdout\n                     and the --silent option is turned on automatically.\n  --stream-to-host=<hostname[:port]> stream to this host. The default port is %d.\n  --stream-poll      use non-blocking mode and select() to stream.\n  --stream-mmap=<count>\n                     capture video using mmap() [VIDIOC_(D)QBUF]\n                     count: the number of buffers to allocate. The default is 3.\n  --stream-user=<count>\n                     capture video using user pointers [VIDIOC_(D)QBUF]\n                     count: the number of buffers to allocate. The default is 3.\n  --stream-dmabuf    capture video using dmabuf [VIDIOC_(D)QBUF]\n                     Requires a corresponding --stream-out-mmap option.\n  --stream-from=<file> stream from this file. The default is to generate a pattern.\n                     If <file> is \'-\', then the data is read from stdin.\n  --stream-from-host=<hostname[:port]> stream from this host. The default port is %d.\n  --stream-loop      loop when the end of the file we are streaming from is reached.\n                     The default is to stop.\n  --stream-out-pattern=<count>\n                     choose output test pattern. The default is 0.\n  --stream-out-square\n                     show a square in the middle of the output test pattern.\n  --stream-out-bord..." /* TRUNCATED STRING LITERAL */
         ,0x20aa);
  return;
}



/* ===== FUN_0002d238 @ 0002d238 size=14400 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0002d238(uint param_1,uint param_2)

{
  bool bVar1;
  ushort uVar2;
  FILE *pFVar3;
  byte bVar4;
  undefined6 uVar5;
  int iVar6;
  size_t sVar7;
  void *__s;
  undefined4 uVar8;
  int iVar9;
  FILE *pFVar10;
  FILE *pFVar11;
  int *piVar12;
  char *pcVar13;
  hostent *phVar14;
  __suseconds_t _Var15;
  fd_set *__readfds;
  sockaddr *psVar16;
  fd_set *__writefds;
  uint uVar17;
  __suseconds_t *p_Var18;
  __suseconds_t *p_Var19;
  __fd_mask *p_Var20;
  fd_set *pfVar21;
  undefined4 *puVar22;
  sockaddr **ppsVar23;
  uint uVar24;
  int *piVar25;
  __fd_mask *p_Var26;
  int *piVar27;
  __fd_mask *p_Var28;
  uint uVar29;
  __time_t _Var30;
  uint uVar31;
  fd_set *pfVar32;
  sockaddr *psVar33;
  fd_set *local_905c;
  uint local_904c;
  int *local_9048;
  undefined4 local_903c;
  undefined4 local_9038;
  undefined1 auStack_9034 [8];
  undefined1 auStack_902c [8];
  fd_set *local_9024;
  fd_set *local_9020;
  __fd_mask local_901c;
  undefined8 local_9018;
  fd_set *local_9010;
  fd_set *local_900c;
  __fd_mask local_9008;
  undefined8 local_9004;
  fd_set *local_8ffc;
  fd_set *pfStack_8ff8;
  uint local_8ff4;
  undefined4 local_8ff0;
  undefined4 local_8fec;
  fd_set *pfStack_8fe8;
  undefined4 local_8fe4;
  fd_set *pfStack_8fe0;
  undefined4 local_8fdc;
  fd_set *pfStack_8fd8;
  undefined4 local_8fd4;
  fd_set *pfStack_8fd0;
  undefined4 local_8fcc;
  fd_set *pfStack_8fc8;
  undefined4 local_8fc4;
  fd_set *pfStack_8fc0;
  fd_set *local_8fbc;
  fd_set *pfStack_8fb8;
  uint local_8fb4;
  undefined4 local_8fb0;
  int local_8fac;
  fd_set *pfStack_8fa8;
  undefined4 local_8fa4;
  fd_set *pfStack_8fa0;
  undefined4 local_8f9c;
  fd_set *pfStack_8f98;
  undefined4 local_8f94;
  fd_set *pfStack_8f90;
  undefined4 local_8f8c;
  fd_set *pfStack_8f88;
  undefined4 local_8f84;
  fd_set *pfStack_8f80;
  undefined1 auStack_8f7c [4];
  fd_set *local_8f78;
  __fd_mask local_8f4c;
  timeval *local_8f48;
  uint local_8f44;
  __time_t local_8f38;
  fd_set *local_8f34;
  __fd_mask local_8f08;
  timeval *local_8f04;
  uint local_8f00;
  undefined1 auStack_8ef4 [4];
  fd_set *local_8ef0;
  FILE *local_8ee0;
  fd_set *local_8edc;
  undefined4 local_8eb4;
  fd_set local_8eb0;
  timeval local_8e30;
  __fd_mask local_8e28;
  timeval *local_8e24;
  uint local_8e20;
  undefined1 auStack_8e14 [4];
  fd_set *local_8e10;
  __fd_mask local_8de4;
  int *local_8de0;
  uint local_8ddc;
  fd_set local_8dd0;
  fd_set local_8d50;
  fd_set local_8cd0;
  timeval local_8c50;
  undefined4 local_8c48;
  int *piStack_8c44;
  undefined4 uStack_8c40;
  undefined4 uStack_8c3c;
  undefined4 local_8c38;
  int *piStack_8c34;
  undefined4 local_8c30;
  int *piStack_8c2c;
  undefined4 local_8c28;
  int *piStack_8c24;
  undefined4 local_8c20;
  int *piStack_8c1c;
  undefined4 local_8c18;
  undefined4 uStack_8c14;
  int *piStack_8c10;
  int local_8a70 [120];
  fd_set *local_8890;
  __fd_mask local_888c;
  char local_8888;
  fd_set *local_8884;
  uint local_8880;
  __fd_mask *p_Stack_4920;
  int local_4910;
  int local_490c;
  uint uStack_4908;
  uint local_4904;
  undefined1 local_4900 [4];
  int local_48fc;
  undefined4 local_48f8;
  uint local_48f4;
  uint uStack_48f0;
  uint local_48ec;
  uint local_48e8;
  uint local_48e4;
  undefined1 local_48e0 [4];
  undefined1 local_48dc [4];
  undefined1 local_48d8 [4];
  undefined1 local_48d4 [4];
  undefined1 local_48d0 [4];
  undefined1 local_48cc [4];
  int local_48c8;
  uint local_48c4;
  uint uStack_48c0;
  socklen_t asStack_48bc [2];
  undefined1 local_48b4 [4];
  fd_set *local_48b0;
  __fd_mask local_48ac;
  undefined8 uStack_48a8;
  undefined1 auStack_48a0 [4];
  fd_set *local_489c;
  undefined4 uStack_4880;
  __fd_mask local_487c [4];
  fd_set *local_486c;
  undefined1 *local_4864;
  __fd_mask local_4860;
  fd_set local_485c;
  undefined4 local_47dc;
  uint local_47d8;
  uint local_47d4;
  undefined1 auStack_47d0 [8];
  sockaddr local_47c8;
  undefined4 local_47b8;
  undefined4 local_47b4;
  uint uStack_47b0;
  undefined4 uStack_47ac;
  undefined4 local_47a8;
  uint uStack_47a4;
  undefined4 uStack_47a0;
  undefined4 uStack_479c;
  fd_set *local_4798;
  fd_set *local_4794;
  uint uStack_4790;
  undefined8 local_478c;
  uint local_4784;
  uint uStack_4780;
  uint local_477c;
  uint uStack_4778;
  uint local_4774;
  uint uStack_4770;
  undefined1 local_4718 [48];
  undefined4 local_46e8;
  undefined1 *local_46e4;
  undefined4 local_46e0;
  undefined1 local_464c [8];
  uint local_4644;
  sockaddr *local_4640;
  sockaddr *local_463c;
  sockaddr *local_4638;
  uint local_4634;
  uint local_4630;
  int local_462c;
  uint local_4628;
  uint local_4624;
  uint local_4620;
  uint local_461c;
  uint local_45e4;
  byte local_4594;
  byte local_4593;
  byte local_4592;
  byte local_4591;
  byte local_4590;
  __fd_mask a_Stack_447c [4];
  fd_set *local_446c;
  undefined4 local_4468;
  char local_4464;
  fd_set *local_4460;
  fd_set *local_445c;
  __fd_mask local_4458;
  char local_4454;
  fd_set *local_4450;
  uint local_444c;
  int local_458 [255];
  timeval atStack_5c [2];
  undefined4 uStack_4c;
  int aiStack_48 [4];
  int local_38 [4];
  int iStack_28;
  
  uVar17 = (uint)DAT_000633f3 + (uint)DAT_000633f4 + (uint)DAT_000633f5;
  if ((int)param_2 < 0) {
    DAT_00063544 = DAT_00063530;
    DAT_00063548 = DAT_00063534;
    param_2 = param_1;
  }
  if (1 < uVar17) {
    fwrite("only one of --stream-mmap/user/dmabuf is allowed\n",1,0x31,stderr);
    return;
  }
  uVar24 = (uint)DAT_00063405 + (uint)DAT_00063406 + (uint)DAT_00063407;
  if (1 < uVar24) {
    fwrite("only one of --stream-out-mmap/user/dmabuf is allowed\n",1,0x35,stderr);
    return;
  }
  if ((uVar17 & uVar24) == 0) {
    if (uVar17 == 0) {
      if (uVar24 == 0) {
        return;
      }
      if ((DAT_00063530 & 0x100000) == 0) {
        local_445c = DAT_00063540;
        if ((DAT_00063530 & 0x400000) != 0) {
          local_445c = (fd_set *)&DAT_0000000c;
        }
      }
      else {
        local_445c = (fd_set *)0xb;
      }
      if (DAT_00063405 == 0) {
        if (DAT_00063406 == 0) {
          if (DAT_00063407 != 0) {
            local_4458 = 4;
          }
        }
        else {
          local_4458 = 2;
        }
      }
      else {
        local_4458 = 1;
      }
      local_4454 = (DAT_00063544 & 0x6000) != 0;
      piVar12 = local_458 + 4;
      do {
        *piVar12 = -1;
        piVar27 = piVar12 + 8;
        piVar12[1] = -1;
        piVar12[2] = -1;
        piVar12[3] = -1;
        piVar12[4] = -1;
        piVar12[5] = -1;
        piVar12[6] = -1;
        piVar12[7] = -1;
        piVar12 = piVar27;
      } while (piVar27 != aiStack_48);
      local_444c = (uint)((DAT_00063544 & 0x6000) == 0);
      uVar17 = fcntl(param_1,3);
      pcVar13 = DAT_0006e594;
      bVar4 = DAT_000633f0;
      if ((DAT_00063530 & 0x40e002) == 0) {
        fwrite("unsupported stream type\n",1,0x18,stderr);
LAB_00029c4c:
        piVar12 = local_458 + 0xc;
        do {
          piVar27 = piVar12 + -8;
          do {
            piVar25 = piVar27 + 1;
            if (*piVar27 != -1) {
              close(*piVar27);
            }
            piVar27 = piVar25;
          } while (piVar12 != piVar25);
          piVar12 = piVar12 + 8;
        } while (&iStack_28 != piVar12);
        return;
      }
      if (DAT_00063407 != 0) {
        fwrite("--stream-out-dmabuf can only work in combination with --stream-mmap\n",1,0x44,stderr
              );
        goto LAB_00029c4c;
      }
      if (DAT_0006e594 == (char *)0x0) {
        pFVar10 = (FILE *)0x0;
        if (DAT_0006e598 != (char *)0x0) {
          pcVar13 = strchr(DAT_0006e598,0x3a);
          local_48b0 = *(fd_set **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          local_48ac = *(__fd_mask *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          local_48b4 = (undefined1  [4])0x0;
                    /* WARNING: Ignoring partial resolution of indirect */
          uStack_48a8._0_4_ = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          if (pcVar13 != (char *)0x0) {
            DAT_00062db8 = strtoul(pcVar13 + 1,(char **)0x0,0);
            *pcVar13 = '\0';
          }
          iVar9 = socket(2,1,0);
          if (iVar9 < 0) {
            fwrite("could not opening socket\n",1,0x19,stderr);
          }
          else {
            local_48b4._2_2_ =
                 (ushort)((DAT_00062db8 & 0xff) << 8) | (ushort)(DAT_00062db8 >> 8) & 0xff;
            local_48b4._0_2_ = 2;
            local_48b0 = (fd_set *)0x0;
            iVar6 = bind(iVar9,(sockaddr *)local_48b4,0x10);
            if (iVar6 < 0) {
              fwrite("could not bind\n",1,0xf,stderr);
            }
            else {
              listen(iVar9,1);
              asStack_48bc[0] = 0x10;
              DAT_00062d90 = accept(iVar9,(sockaddr *)auStack_48a0,asStack_48bc);
              if (-1 < DAT_00062d90) {
                pFVar10 = fdopen(DAT_00062d90,"r");
                fread(&local_4910,1,4,pFVar10);
                if (local_4910 == 0x56344c32) {
                  fread(&local_490c,1,4,pFVar10);
                  if (local_490c == 0x1000000) {
                    while( true ) {
                      fread(&uStack_4908,1,4,pFVar10);
                      uVar24 = uStack_4908 << 0x18 | (uStack_4908 >> 8 & 0xff) << 0x10 |
                               (uStack_4908 >> 0x10 & 0xff) << 8 | uStack_4908 >> 0x18;
                      if (uVar24 == 0x20646e65) break;
                      if (uVar24 == 0x76746d66) {
                        fread(local_4900,1,4,pFVar10);
                        __s = memset(local_485c.fds_bits + 1,0,200);
                        if ((DAT_00063530 & 0x6000) == 0) {
                          memset(__s,0,200);
                          local_485c.fds_bits[0] = 2;
                        }
                        else {
                          memset(__s,0,200);
                          local_485c.fds_bits[0] = 10;
                        }
                        fread(&local_48fc,1,4,pFVar10);
                        if (local_48fc != 0x30000000) {
                          fwrite("unsupported FMT_VIDEO size\n",1,0x1b,stderr);
                          uVar24 = local_444c;
                          goto LAB_00029b0c;
                        }
                        fread(&local_48f8,1,4,pFVar10);
                        if (local_485c.fds_bits[0] - 9U < 2) {
                    /* WARNING: Ignoring partial resolution of indirect */
                          uStack_47a4._0_1_ = local_48f8._3_1_;
                        }
                        fread(&local_48f4,1,4,pFVar10);
                        p_Var18 = (__suseconds_t *)
                                  (local_48f4 << 0x18 | (local_48f4 >> 8 & 0xff) << 0x10 |
                                   (local_48f4 >> 0x10 & 0xff) << 8 | local_48f4 >> 0x18);
                    /* WARNING: Could not find normalized switch variable to match jumptable */
                        switch(local_485c.fds_bits[0]) {
                        case 3:
                        case 0xb:
                          local_485c.fds_bits[3] = (__fd_mask)p_Var18;
                          break;
                        case 5:
                          local_485c.fds_bits[4] = (__fd_mask)p_Var18;
                          break;
                        case 0xd:
                          local_485c.fds_bits[1] = (__fd_mask)p_Var18;
                    /* WARNING: This code block may not be properly labeled as switch case */
                        }
                        fread(&uStack_48f0,1,4,pFVar10);
                        p_Var18 = (__suseconds_t *)local_485c.fds_bits[3];
                        if ((uint)local_485c.fds_bits[0] < 0xb) {
                          p_Var19 = (__suseconds_t *)
                                    (uStack_48f0 << 0x18 | (uStack_48f0 >> 8 & 0xff) << 0x10 |
                                     (uStack_48f0 >> 0x10 & 0xff) << 8 | uStack_48f0 >> 0x18);
                          uVar24 = 1 << (local_485c.fds_bits[0] & 0xffU);
                          p_Var18 = p_Var19;
                          if (((uVar24 & 0x108) == 0) &&
                             (((uVar24 & 0x600) != 0 ||
                              (p_Var18 = (__suseconds_t *)local_485c.fds_bits[3], (uVar24 & 6) != 0)
                              ))) {
                            local_485c.fds_bits[1] = (__fd_mask)p_Var19;
                            p_Var18 = (__suseconds_t *)local_485c.fds_bits[3];
                          }
                        }
                        local_485c.fds_bits[3] = (__fd_mask)p_Var18;
                        fread(&local_48ec,1,4,pFVar10);
                        p_Var18 = (__suseconds_t *)local_485c.fds_bits[4];
                        if (((uint)local_485c.fds_bits[0] < 0xb) &&
                           (p_Var18 = (__suseconds_t *)
                                      (local_48ec << 0x18 | (local_48ec >> 8 & 0xff) << 0x10 |
                                       (local_48ec >> 0x10 & 0xff) << 8 | local_48ec >> 0x18),
                           (1 << (local_485c.fds_bits[0] & 0xffU) & 0x108U) == 0)) {
                          p_Var18 = (__suseconds_t *)local_485c.fds_bits[4];
                        }
                        local_485c.fds_bits[4] = (__fd_mask)p_Var18;
                        fread(&local_48e8,1,4,pFVar10);
                        if ((uint)local_485c.fds_bits[0] < 0xb) {
                          uVar24 = 1 << (local_485c.fds_bits[0] & 0xffU);
                          if (((uVar24 & 0x108) == 0) &&
                             (((uVar24 & 0x600) != 0 || ((uVar24 & 6) != 0)))) {
                            local_485c.fds_bits[4] =
                                 (__fd_mask)
                                 (local_48e8 << 0x18 | (local_48e8 >> 8 & 0xff) << 0x10 |
                                  (local_48e8 >> 0x10 & 0xff) << 8 | local_48e8 >> 0x18);
                          }
                        }
                        fread(&local_48e4,1,4,pFVar10);
                    /* WARNING: Could not find normalized switch variable to match jumptable */
                        switch(local_485c.fds_bits[0]) {
                        case 3:
                          break;
                        case 0xb:
                        }
                        fread(local_48e0,1,4,pFVar10);
                    /* WARNING: Could not find normalized switch variable to match jumptable */
                        switch(local_485c.fds_bits[0]) {
                        case 3:
                          break;
                        case 0xb:
                        }
                        fread(local_48dc,1,4,pFVar10);
                    /* WARNING: Could not find normalized switch variable to match jumptable */
                        switch(local_485c.fds_bits[0]) {
                        case 3:
                          break;
                        case 0xb:
                        }
                        fread(local_48d8,1,4,pFVar10);
                    /* WARNING: Could not find normalized switch variable to match jumptable */
                        switch(local_485c.fds_bits[0]) {
                        case 3:
                          break;
                        case 0xb:
                        }
                        fread(local_48d4,1,4,pFVar10);
                    /* WARNING: Could not find normalized switch variable to match jumptable */
                        switch(local_485c.fds_bits[0]) {
                        case 3:
                          break;
                        case 0xb:
                        }
                        fread(local_48d0,1,4,pFVar10);
                        fread(local_48cc,1,4,pFVar10);
                        uVar24 = 0;
                        p_Stack_4920 = local_485c.fds_bits + 7;
                        puVar22 = &uStack_4c;
                        goto LAB_0002a440;
                      }
                      fread(&local_4904,1,4,pFVar10);
                      for (uVar24 = local_4904 << 0x18 | (local_4904 >> 8 & 0xff) << 0x10 |
                                    (local_4904 >> 0x10 & 0xff) << 8 | local_4904 >> 0x18;
                          uVar24 != 0; uVar24 = uVar24 - sVar7) {
                        sVar7 = uVar24;
                        if (0x3ff < uVar24) {
                          sVar7 = 0x400;
                        }
                        sVar7 = fread(&local_485c,1,sVar7,pFVar10);
                        if ((int)sVar7 < 0) {
                          fprintf(stderr,"error reading %d bytes\n",uVar24);
                          uVar24 = local_444c;
                          goto LAB_00029b0c;
                        }
                      }
                    }
                    fwrite("END packet read\n",1,0x10,stderr);
                    uVar24 = local_444c;
                  }
                  else {
                    fwrite("unknown protocol version\n",1,0x19,stderr);
                    uVar24 = local_444c;
                  }
                }
                else {
                  fwrite("unknown protocol ID\n",1,0x14,stderr);
                  uVar24 = local_444c;
                }
                goto LAB_00029b0c;
              }
              fwrite("could not accept\n",1,0x11,stderr);
            }
          }
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
      }
      else {
        iVar9 = strcmp(DAT_0006e594,"-");
        pFVar10 = stdin;
        if (iVar9 != 0) {
          pFVar10 = fopen(pcVar13,"r");
        }
      }
LAB_00029970:
      uStack_48a8 = 0;
      local_48b4 = (undefined1  [4])DAT_00062db4;
      local_48b0 = local_445c;
      local_48ac = local_4458;
      iVar9 = FUN_00013938(param_1,0xc0145608,local_48b4,"VIDIOC_REQBUFS");
      uVar24 = local_444c;
      if (iVar9 < 0) {
        if (local_4454 == '\0') goto LAB_00029b0c;
LAB_00029bbc:
        memset(auStack_48a0,0,0x44);
        memset(&local_485c,0,0x1e0);
        local_489c = local_445c;
        local_487c[3] = local_4458;
        uVar31 = 8;
        local_486c = &local_485c;
        iVar9 = FUN_00013938(param_1,0xc0445609,auStack_48a0,"VIDIOC_QUERYBUF");
        uVar24 = local_444c;
      }
      else {
        local_4450 = (fd_set *)local_48b4;
        uVar31 = local_444c;
        if (local_4454 != '\0') goto LAB_00029bbc;
      }
      local_444c = uVar31;
      if (((iVar9 == 0) &&
          (iVar9 = FUN_00027a90(param_1,&local_445c,pFVar10,1), uVar24 = local_444c, iVar9 == 0)) &&
         (iVar9 = FUN_00013938(param_1,0x40045612,&local_445c,"VIDIOC_STREAMON"),
         uVar24 = local_444c, iVar9 == 0)) {
        while (DAT_00062d98 == 0) {
          sleep(100);
        }
        if (bVar4 != 0) {
          fcntl(param_1,4,uVar17 | 0x800);
        }
LAB_00029a84:
        do {
          if (bVar4 != 0) {
            p_Var20 = &local_4860;
            do {
              p_Var20 = p_Var20 + 1;
              *p_Var20 = 0;
            } while (p_Var20 != local_485c.fds_bits + 0x1f);
            local_489c = (fd_set *)0x0;
            local_485c.fds_bits[param_1 >> 5] =
                 local_485c.fds_bits[param_1 >> 5] | 1 << (param_1 & 0x1f);
            auStack_48a0 = (undefined1  [4])0x2;
            iVar9 = select(param_1 + 1,(fd_set *)0x0,&local_485c,(fd_set *)0x0,
                           (timeval *)auStack_48a0);
            if (iVar9 == -1) {
              piVar12 = __errno_location();
              pFVar11 = stderr;
              if (*piVar12 != 4) {
                pcVar13 = strerror(*piVar12);
                fprintf(pFVar11,"select error: %s\n",pcVar13);
                uVar24 = local_444c;
                goto LAB_00029b0c;
              }
              goto LAB_00029a84;
            }
            if (iVar9 == 0) {
              fwrite("select timeout\n",1,0xf,stderr);
              uVar24 = local_444c;
              goto LAB_00029b0c;
            }
          }
          iVar9 = FUN_00027154(param_1,&local_445c,pFVar10,0);
        } while (iVar9 != -1);
        if (DAT_000633e1 != '\0') {
          FUN_00013938(param_1,0xc0485660,&DAT_0006dec8,"VIDIOC_DECODER_CMD");
          DAT_000633e1 = '\0';
        }
        FUN_00013938(param_1,0x40045613,&local_445c,"VIDIOC_STREAMOFF");
        fcntl(param_1,4,uVar17);
        fputc(10,stderr);
        FUN_00027080(&local_445c);
        uVar24 = local_444c;
      }
LAB_00029b0c:
      local_444c = uVar24;
      if ((pFVar10 != (FILE *)0x0) && (stdin != pFVar10)) {
        fclose(pFVar10);
      }
      piVar12 = local_458 + 0xc;
      do {
        piVar27 = piVar12 + -8;
        do {
          piVar25 = piVar27 + 1;
          if (*piVar27 != -1) {
            close(*piVar27);
          }
          piVar27 = piVar25;
        } while (piVar12 != piVar25);
        piVar12 = piVar12 + 8;
      } while (piVar12 != &iStack_28);
      return;
    }
    local_485c.fds_bits[2] = fcntl(param_1,3);
    if ((DAT_00063530 & 0x100000) == 0) {
      local_446c = DAT_0006353c;
      if ((DAT_00063530 & 0x400000) != 0) {
        local_446c = (fd_set *)&DAT_0000000c;
      }
    }
    else {
      local_446c = (fd_set *)0xb;
    }
    if (DAT_000633f3 == 0) {
      if (DAT_000633f4 == 0) {
        if (DAT_000633f5 != 0) {
          local_4468 = 4;
        }
      }
      else {
        local_4468 = 2;
      }
    }
    else {
      local_4468 = 1;
    }
    local_4464 = (DAT_00063530 & 0x5000) != 0;
    piVar12 = local_458;
    do {
      *piVar12 = -1;
      piVar27 = piVar12 + 8;
      piVar12[1] = -1;
      piVar12[2] = -1;
      piVar12[3] = -1;
      piVar12[4] = -1;
      piVar12[5] = -1;
      piVar12[6] = -1;
      piVar12[7] = -1;
      piVar12 = piVar27;
    } while (&atStack_5c[0].tv_usec != piVar27);
    local_485c.fds_bits[0xe] = 0;
    local_485c.fds_bits[0] = (__fd_mask)DAT_000633f0;
    if ((DAT_00063530 & 0x10d001) == 0) {
      fwrite("unsupported stream type\n",1,0x18,stderr);
LAB_0002c6c0:
      piVar12 = local_458 + 8;
      do {
        piVar27 = piVar12 + -8;
        do {
          piVar25 = piVar27 + 1;
          if (*piVar27 != -1) {
            close(*piVar27);
          }
          piVar27 = piVar25;
        } while (piVar25 != piVar12);
        piVar12 = piVar12 + 8;
      } while (local_38 != piVar12);
      return;
    }
    if (DAT_000633f5 != 0) {
      fwrite("--stream-dmabuf can only work in combination with --stream-out-mmap\n",1,0x44,stderr);
      goto LAB_0002c6c0;
    }
    uVar17 = 0;
    uVar24 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_47ac = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_479c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_47b4 = 0;
    local_47a8 = 0;
    local_47b8 = 2;
    uStack_47b0 = uVar24;
    uStack_47a4 = uVar24;
    uStack_47a0 = uStack_47ac;
    ioctl(param_1,0x4020565a,&local_47b8);
    local_4798 = local_446c;
    pFVar10 = DAT_0006e58c;
    if (DAT_0006e58c == (FILE *)0x0) {
      if (DAT_0006e590 == (char *)0x0) {
        local_485c.fds_bits[1] = (__fd_mask)&local_4798;
        pFVar10 = (FILE *)0x0;
      }
      else {
        pcVar13 = strchr(DAT_0006e590,0x3a);
        memset(local_4718 + 4,0,200);
        local_485c.fds_bits[3] = (__fd_mask)&local_4638;
        local_4718._0_4_ = local_4798;
        local_485c.fds_bits[1] = (__fd_mask)&local_4798;
        local_4794 = (fd_set *)uVar17;
        uStack_4790 = uVar24;
        local_4784 = uVar17;
        uStack_4780 = uVar24;
        local_477c = uVar17;
        uStack_4778 = uVar24;
        local_4774 = uVar17;
        uStack_4770 = uVar24;
        ioctl(param_1,0xc0cc5604,local_4718);
        memcpy(local_464c,local_4718,0xcc);
        local_485c.fds_bits[8] = local_464c._4_4_;
        local_485c.fds_bits[10] = local_4644;
        local_485c.fds_bits[5] = (__fd_mask)local_4640;
        local_485c.fds_bits[7] = (__fd_mask)local_463c;
        local_485c.fds_bits[9] = (__fd_mask)local_4638;
        local_485c.fds_bits[4] = (__fd_mask)(uint)local_4594;
        local_485c.fds_bits[0xc] = (uint)local_4593;
        local_485c.fds_bits[0xb] = (uint)local_4591;
        local_485c.fds_bits[6] = (__fd_mask)local_4590;
        iVar9 = ioctl(param_1,0xc02c563a,&local_4798);
        if (((iVar9 != 0) || (local_4774 == 0)) || (uStack_4770 == 0)) {
          local_4774 = 1;
          uStack_4770 = 1;
        }
        if (pcVar13 != (char *)0x0) {
          DAT_00062dbc = strtoul(pcVar13 + 1,(char **)0x0,0);
          *pcVar13 = '\0';
        }
        DAT_00062dac = socket(2,1,0);
        if (DAT_00062dac < 0) {
          fwrite("cannot open socket",1,0x12,stderr);
LAB_0002cb88:
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        phVar14 = gethostbyname(DAT_0006e590);
        if (phVar14 == (hostent *)0x0) {
          fprintf(stderr,"no such host %s\n",DAT_0006e590);
          goto LAB_0002cb88;
        }
        local_47c8.sa_data[0] = '\0';
        local_47c8.sa_data[1] = '\0';
        local_47c8.sa_data[2] = '\0';
        local_47c8.sa_data[3] = '\0';
        local_47c8.sa_data[4] = '\0';
        local_47c8.sa_data[5] = '\0';
        local_47c8.sa_data[6] = '\0';
        local_47c8.sa_data[7] = '\0';
        local_47c8.sa_data[8] = '\0';
        local_47c8.sa_data[9] = '\0';
        local_47c8.sa_data[10] = '\0';
        local_47c8.sa_data[0xb] = '\0';
        local_47c8.sa_data[0xc] = '\0';
        local_47c8.sa_data[0xd] = '\0';
        memcpy(local_47c8.sa_data + 2,*phVar14->h_addr_list,phVar14->h_length);
        uVar5 = local_47c8.sa_data._0_6_;
                    /* WARNING: Ignoring partial resolution of indirect */
        uVar2 = (ushort)((DAT_00062dbc & 0xff) << 8) | (ushort)(DAT_00062dbc >> 8) & 0xff;
        local_47c8.sa_data[0] = (char)uVar2;
        local_47c8.sa_data[1] = (char)(uVar2 >> 8);
        local_47c8.sa_data._0_6_ = uVar5;
        iVar9 = connect(DAT_00062dac,&local_47c8,0x10);
        if (iVar9 < 0) {
          fwrite("could not connect\n",1,0x12,stderr);
          goto LAB_0002cb88;
        }
        pFVar10 = fdopen(DAT_00062dac,"a");
        local_485c.fds_bits[0xf] = 0x56344c32;
        fwrite(local_485c.fds_bits + 0xf,1,4,pFVar10);
        local_485c.fds_bits[0x10] = 0x1000000;
        fwrite(local_485c.fds_bits + 0x10,1,4,pFVar10);
        local_485c.fds_bits[0x11] = 0x666d7476;
        fwrite(local_485c.fds_bits + 0x11,1,4,pFVar10);
        if (local_464c._0_4_ - 9 < 2) {
          uVar17 = (short)local_485c.fds_bits[4] * 0xc + 0x34;
          local_485c.fds_bits[0x12] =
               uVar17 * 0x1000000 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
               uVar17 >> 0x18;
        }
        else {
          local_485c.fds_bits[4] = 1;
          local_485c.fds_bits[0x12] = 0x40000000;
        }
        fwrite(local_485c.fds_bits + 0x12,1,4,pFVar10);
        local_485c.fds_bits[0x13] = 0x30000000;
        fwrite(local_485c.fds_bits + 0x13,1,4,pFVar10);
        local_485c.fds_bits[0x14] =
             local_485c.fds_bits[4] << 0x18 | ((uint)local_485c.fds_bits[4] >> 8 & 0xff) << 0x10 |
             ((uint)local_485c.fds_bits[4] >> 0x10 & 0xff) << 8 |
             (uint)local_485c.fds_bits[4] >> 0x18;
        fwrite(local_485c.fds_bits + 0x14,1,4,pFVar10);
        iVar9 = local_464c._0_4_ - 1;
        switch(iVar9) {
        case 0:
        case 1:
        case 8:
        case 9:
          local_485c.fds_bits[0x15] =
               local_485c.fds_bits[5] << 0x18 | ((uint)local_485c.fds_bits[5] >> 8 & 0xff) << 0x10 |
               ((uint)local_485c.fds_bits[5] >> 0x10 & 0xff) << 8 |
               (uint)local_485c.fds_bits[5] >> 0x18;
          break;
        default:
          local_485c.fds_bits[0x15] = 0;
          break;
        case 3:
        case 4:
          local_485c.fds_bits[0x15] =
               local_485c.fds_bits[7] << 0x18 | ((uint)local_485c.fds_bits[7] >> 8 & 0xff) << 0x10 |
               ((uint)local_485c.fds_bits[7] >> 0x10 & 0xff) << 8 |
               (uint)local_485c.fds_bits[7] >> 0x18;
          break;
        case 10:
        case 0xb:
          local_485c.fds_bits[0x15] =
               local_485c.fds_bits[8] << 0x18 | ((uint)local_485c.fds_bits[8] >> 8 & 0xff) << 0x10 |
               ((uint)local_485c.fds_bits[8] >> 0x10 & 0xff) << 8 |
               (uint)local_485c.fds_bits[8] >> 0x18;
        }
        fwrite(local_485c.fds_bits + 0x15,1,4,pFVar10);
        if ((uint)local_464c._0_4_ < 0xb) {
          uVar17 = 1 << (local_464c._0_4_ & 0xff);
          if ((uVar17 & 0x108) == 0) {
            if (((uVar17 & 0x600) != 0) || (local_485c.fds_bits[0x16] = 0, (uVar17 & 6) != 0)) {
              local_485c.fds_bits[0x16] =
                   local_485c.fds_bits[8] << 0x18 |
                   ((uint)local_485c.fds_bits[8] >> 8 & 0xff) << 0x10 |
                   ((uint)local_485c.fds_bits[8] >> 0x10 & 0xff) << 8 |
                   (uint)local_485c.fds_bits[8] >> 0x18;
            }
          }
          else {
            local_485c.fds_bits[0x16] =
                 local_485c.fds_bits[5] << 0x18 | ((uint)local_485c.fds_bits[5] >> 8 & 0xff) << 0x10
                 | ((uint)local_485c.fds_bits[5] >> 0x10 & 0xff) << 8 |
                 (uint)local_485c.fds_bits[5] >> 0x18;
          }
        }
        else {
          local_485c.fds_bits[0x16] = 0;
        }
        fwrite(local_485c.fds_bits + 0x16,1,4,pFVar10);
        if ((uint)local_464c._0_4_ < 0xb) {
          uVar17 = 1 << (local_464c._0_4_ & 0xff);
          if ((uVar17 & 0x108) == 0) {
            if (((uVar17 & 0x600) != 0) || (local_485c.fds_bits[0x17] = 0, (uVar17 & 6) != 0)) {
              local_485c.fds_bits[0x17] =
                   local_485c.fds_bits[10] << 0x18 |
                   ((uint)local_485c.fds_bits[10] >> 8 & 0xff) << 0x10 |
                   ((uint)local_485c.fds_bits[10] >> 0x10 & 0xff) << 8 |
                   (uint)local_485c.fds_bits[10] >> 0x18;
            }
          }
          else {
            local_485c.fds_bits[0x17] =
                 local_485c.fds_bits[7] << 0x18 | ((uint)local_485c.fds_bits[7] >> 8 & 0xff) << 0x10
                 | ((uint)local_485c.fds_bits[7] >> 0x10 & 0xff) << 8 |
                 (uint)local_485c.fds_bits[7] >> 0x18;
          }
        }
        else {
          local_485c.fds_bits[0x17] = 0;
        }
        fwrite(local_485c.fds_bits + 0x17,1,4,pFVar10);
        if ((uint)local_464c._0_4_ < 0xb) {
          uVar17 = 1 << (local_464c._0_4_ & 0xff);
          if ((uVar17 & 0x108) == 0) {
            if (((uVar17 & 0x600) == 0) && ((uVar17 & 6) == 0)) goto LAB_0002d1ac;
            local_485c.fds_bits[0x18] =
                 local_485c.fds_bits[7] << 0x18 | ((uint)local_485c.fds_bits[7] >> 8 & 0xff) << 0x10
                 | ((uint)local_485c.fds_bits[7] >> 0x10 & 0xff) << 8 |
                 (uint)local_485c.fds_bits[7] >> 0x18;
          }
          else {
            local_485c.fds_bits[0x18] =
                 local_485c.fds_bits[9] << 0x18 | ((uint)local_485c.fds_bits[9] >> 8 & 0xff) << 0x10
                 | ((uint)local_485c.fds_bits[9] >> 0x10 & 0xff) << 8 |
                 (uint)local_485c.fds_bits[9] >> 0x18;
          }
        }
        else {
LAB_0002d1ac:
          local_485c.fds_bits[0x18] = 0x1000000;
        }
        fwrite(local_485c.fds_bits + 0x18,1,4,pFVar10);
        switch(iVar9) {
        case 0:
        case 1:
          local_485c.fds_bits[0x19] =
               local_4630 << 0x18 | (local_4630 >> 8 & 0xff) << 0x10 |
               (local_4630 >> 0x10 & 0xff) << 8 | local_4630 >> 0x18;
          break;
        default:
          local_485c.fds_bits[0x19] = 0;
          break;
        case 8:
        case 9:
          local_485c.fds_bits[0x19] =
               local_485c.fds_bits[9] << 0x18 | ((uint)local_485c.fds_bits[9] >> 8 & 0xff) << 0x10 |
               ((uint)local_485c.fds_bits[9] >> 0x10 & 0xff) << 8 |
               (uint)local_485c.fds_bits[9] >> 0x18;
        }
        fwrite(local_485c.fds_bits + 0x19,1,4,pFVar10);
        switch(iVar9) {
        case 0:
        case 1:
          local_485c.fds_bits[0x1a] =
               local_4624 << 0x18 | (local_4624 >> 8 & 0xff) << 0x10 |
               (local_4624 >> 0x10 & 0xff) << 8 | local_4624 >> 0x18;
          break;
        default:
          local_485c.fds_bits[0x1a] = 0;
          break;
        case 8:
        case 9:
          local_485c.fds_bits[0x1a] = (uint)local_4592 << 0x18;
        }
        fwrite(local_485c.fds_bits + 0x1a,1,4,pFVar10);
        switch(iVar9) {
        case 0:
        case 1:
          local_485c.fds_bits[0x1b] =
               local_4620 << 0x18 | (local_4620 >> 8 & 0xff) << 0x10 |
               (local_4620 >> 0x10 & 0xff) << 8 | local_4620 >> 0x18;
          break;
        default:
          local_485c.fds_bits[0x1b] = 0;
          break;
        case 8:
        case 9:
          local_485c.fds_bits[0x1b] =
               local_485c.fds_bits[0xb] << 0x18 |
               ((uint)local_485c.fds_bits[0xb] >> 8 & 0xff) << 0x10 |
               ((uint)local_485c.fds_bits[0xb] >> 0x10 & 0xff) << 8 |
               (uint)local_485c.fds_bits[0xb] >> 0x18;
        }
        fwrite(local_485c.fds_bits + 0x1b,1,4,pFVar10);
        switch(iVar9) {
        case 0:
        case 1:
          local_485c.fds_bits[0x1c] =
               local_461c << 0x18 | (local_461c >> 8 & 0xff) << 0x10 |
               (local_461c >> 0x10 & 0xff) << 8 | local_461c >> 0x18;
          break;
        default:
          local_485c.fds_bits[0x1c] = 0;
          break;
        case 8:
        case 9:
          local_485c.fds_bits[0x1c] =
               local_485c.fds_bits[6] << 0x18 | ((uint)local_485c.fds_bits[6] >> 8 & 0xff) << 0x10 |
               ((uint)local_485c.fds_bits[6] >> 0x10 & 0xff) << 8 |
               (uint)local_485c.fds_bits[6] >> 0x18;
        }
        fwrite(local_485c.fds_bits + 0x1c,1,4,pFVar10);
        switch(iVar9) {
        case 0:
        case 1:
          local_485c.fds_bits[0x1d] =
               local_4628 << 0x18 | (local_4628 >> 8 & 0xff) << 0x10 |
               (local_4628 >> 0x10 & 0xff) << 8 | local_4628 >> 0x18;
          break;
        default:
          local_485c.fds_bits[0x1d] = 0;
          break;
        case 8:
        case 9:
          local_485c.fds_bits[0x1d] =
               local_485c.fds_bits[0xc] << 0x18 |
               ((uint)local_485c.fds_bits[0xc] >> 8 & 0xff) << 0x10 |
               ((uint)local_485c.fds_bits[0xc] >> 0x10 & 0xff) << 8 |
               (uint)local_485c.fds_bits[0xc] >> 0x18;
        }
        fwrite(local_485c.fds_bits + 0x1d,1,4,pFVar10);
        local_485c.fds_bits[0x1e] =
             local_4774 << 0x18 | (local_4774 >> 8 & 0xff) << 0x10 |
             (local_4774 >> 0x10 & 0xff) << 8 | local_4774 >> 0x18;
        fwrite(local_485c.fds_bits + 0x1e,1,4,pFVar10);
        local_485c.fds_bits[0x1f] =
             uStack_4770 << 0x18 | (uStack_4770 >> 8 & 0xff) << 0x10 |
             (uStack_4770 >> 0x10 & 0xff) << 8 | uStack_4770 >> 0x18;
        fwrite(local_485c.fds_bits + 0x1f,1,4,pFVar10);
        if ((__suseconds_t *)local_485c.fds_bits[4] != (__suseconds_t *)0x0) {
          uVar17 = 1 << (local_464c._0_4_ & 0xff);
          iVar6 = 0;
          ppsVar23 = (sockaddr **)(local_485c.fds_bits[3] + 8);
          local_485c.fds_bits[6] = uVar17 & 0x30;
          local_485c.fds_bits[0xb] = uVar17 & 0x600;
          local_485c.fds_bits[0xc] = (__fd_mask)((uVar17 & 6) != 0);
          local_485c.fds_bits[3] = (__fd_mask)atStack_5c;
          do {
            local_47dc = 0x8000000;
            fwrite(&local_47dc,1,4,pFVar10);
            switch(iVar9) {
            case 0:
            case 1:
              if (iVar6 != 0) goto switchD_0002cec8_caseD_2;
              local_47d8 = local_4634 << 0x18 | (local_4634 >> 8 & 0xff) << 0x10 |
                           (local_4634 >> 0x10 & 0xff) << 8 | local_4634 >> 0x18;
              break;
            default:
switchD_0002cec8_caseD_2:
              local_47d8 = 0;
              break;
            case 3:
            case 4:
              if (iVar6 != 0) goto switchD_0002cec8_caseD_2;
              uVar17 = local_485c.fds_bits[5] * (local_4630 + local_462c);
              local_47d8 = uVar17 * 0x1000000 | (uVar17 >> 8 & 0xff) << 0x10 |
                           (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18;
              break;
            case 5:
            case 6:
              if (iVar6 != 0) goto switchD_0002cec8_caseD_2;
              local_47d8 = local_45e4 << 0x18 | (local_45e4 >> 8 & 0xff) << 0x10 |
                           (local_45e4 >> 0x10 & 0xff) << 8 | local_45e4 >> 0x18;
              break;
            case 8:
            case 9:
              psVar33 = ppsVar23[-1];
              local_47d8 = (int)psVar33 << 0x18 | ((uint)psVar33 >> 8 & 0xff) << 0x10 |
                           ((uint)psVar33 >> 0x10 & 0xff) << 8 | (uint)psVar33 >> 0x18;
              break;
            case 10:
            case 0xb:
              if (iVar6 != 0) goto switchD_0002cec8_caseD_2;
              local_47d8 = local_485c.fds_bits[10] << 0x18 |
                           ((uint)local_485c.fds_bits[10] >> 8 & 0xff) << 0x10 |
                           ((uint)local_485c.fds_bits[10] >> 0x10 & 0xff) << 8 |
                           (uint)local_485c.fds_bits[10] >> 0x18;
            }
            fwrite(&local_47d8,1,4,pFVar10);
            if ((uint)local_464c._0_4_ < 0xb) {
              if (local_485c.fds_bits[6] == 0) {
                if (local_485c.fds_bits[0xb] == 0) {
                  uVar17 = local_485c.fds_bits[0xc];
                  if (iVar6 != 0) {
                    uVar17 = 0;
                  }
                  if (uVar17 == 0) goto LAB_0002cf64;
                  local_47d4 = local_485c.fds_bits[9] << 0x18 |
                               ((uint)local_485c.fds_bits[9] >> 8 & 0xff) << 0x10 |
                               ((uint)local_485c.fds_bits[9] >> 0x10 & 0xff) << 8 |
                               (uint)local_485c.fds_bits[9] >> 0x18;
                }
                else {
                  psVar33 = *ppsVar23;
                  local_47d4 = (int)psVar33 << 0x18 | ((uint)psVar33 >> 8 & 0xff) << 0x10 |
                               ((uint)psVar33 >> 0x10 & 0xff) << 8 | (uint)psVar33 >> 0x18;
                }
              }
              else {
                if (iVar6 != 0) goto LAB_0002cf64;
                local_47d4 = local_485c.fds_bits[5] << 0x18 |
                             ((uint)local_485c.fds_bits[5] >> 8 & 0xff) << 0x10 |
                             ((uint)local_485c.fds_bits[5] >> 0x10 & 0xff) << 8 |
                             (uint)local_485c.fds_bits[5] >> 0x18;
              }
            }
            else {
LAB_0002cf64:
              local_47d4 = 0;
            }
            fwrite(&local_47d4,1,4,pFVar10);
            if ((uint)local_464c._0_4_ < 0xb) {
              if (local_485c.fds_bits[6] == 0) {
                if (local_485c.fds_bits[0xb] == 0) {
                  uVar17 = local_485c.fds_bits[0xc];
                  if (iVar6 != 0) {
                    uVar17 = 0;
                  }
                  psVar33 = (sockaddr *)local_485c.fds_bits[9];
                  if (uVar17 == 0) {
                    psVar33 = (sockaddr *)0x0;
                  }
                }
                else {
                  psVar33 = *ppsVar23;
                }
              }
              else {
                psVar33 = (sockaddr *)local_485c.fds_bits[5];
                if (iVar6 != 0) {
                  psVar33 = (sockaddr *)0x0;
                }
              }
            }
            else {
              psVar33 = (sockaddr *)0x0;
            }
            switch(iVar9) {
            case 0:
            case 1:
            case 8:
            case 9:
              psVar16 = (sockaddr *)local_485c.fds_bits[5];
              break;
            default:
              psVar16 = (sockaddr *)0x0;
              break;
            case 3:
            case 4:
              psVar16 = (sockaddr *)local_485c.fds_bits[7];
              break;
            case 10:
            case 0xb:
              psVar16 = (sockaddr *)local_485c.fds_bits[8];
            }
            _Var15 = FUN_0003baa0(psVar33,psVar16);
            iVar6 = iVar6 + 1;
            ppsVar23 = ppsVar23 + 5;
            local_485c.fds_bits[3] = local_485c.fds_bits[3] + 4;
            *(__suseconds_t *)local_485c.fds_bits[3] = _Var15;
          } while (local_485c.fds_bits[4] != iVar6);
        }
        fflush(pFVar10);
      }
    }
    else {
      iVar9 = strcmp((char *)DAT_0006e58c,"-");
      if (iVar9 == 0) {
        local_485c.fds_bits[1] = (__fd_mask)&local_4798;
        pFVar10 = stdout;
      }
      else {
        pFVar10 = fopen((char *)pFVar10,"w+");
        local_485c.fds_bits[1] = (__fd_mask)&local_4798;
      }
    }
    local_478c = 0;
    local_4798 = DAT_00062db0;
    uStack_4790 = local_4468;
    local_4794 = local_446c;
    iVar9 = FUN_00013938(param_1,0xc0145608,local_485c.fds_bits[1],"VIDIOC_REQBUFS");
    if (iVar9 < 0) {
      if (local_4464 == '\0') goto LAB_0002c5cc;
LAB_0002ca28:
      memset(local_4718,0,0x44);
      memset(local_464c,0,0x1e0);
      local_4718._4_4_ = local_446c;
      local_46e8 = local_4468;
      local_46e0 = 8;
      local_46e4 = local_464c;
      iVar9 = FUN_00013938(param_1,0xc0445609,local_4718,"VIDIOC_QUERYBUF");
    }
    else {
      local_4460 = local_4798;
      if (local_4464 != '\0') goto LAB_0002ca28;
    }
    if (((iVar9 == 0) && (iVar9 = FUN_00027784(param_1,&local_446c), iVar9 == 0)) &&
       (iVar9 = FUN_00013938(param_1,0x40045612,&local_446c,"VIDIOC_STREAMON"), iVar9 == 0)) {
      while (DAT_00062d98 == 0) {
        sleep(100);
      }
      if (local_485c.fds_bits[0] != 0) {
        fcntl(param_1,4,local_485c.fds_bits[2] | 0x800);
      }
      iVar9 = (param_1 >> 5) * 4;
      local_485c.fds_bits[3] = (__fd_mask)&local_4638;
      if (local_485c.fds_bits[0] == 0) {
        local_485c.fds_bits[5] = 0;
        local_485c.fds_bits[4] = 0;
      }
      else {
        local_485c.fds_bits[4] = 2;
        local_485c.fds_bits[5] = (__fd_mask)local_4718;
      }
      uVar17 = 1 << (param_1 & 0x1f);
      local_485c.fds_bits[6] = param_1 + 1;
      local_485c.fds_bits[9] = -0x7f7fa9a7;
      local_485c.fds_bits[8] = (__fd_mask)&local_47c8;
      local_485c.fds_bits[7] = (__fd_mask)local_464c;
LAB_0002c4a4:
      do {
        while( true ) {
          ppsVar23 = (sockaddr **)(local_485c.fds_bits[3] + -0x18);
          do {
            ppsVar23 = ppsVar23 + 1;
            *ppsVar23 = (sockaddr *)0x0;
          } while ((sockaddr **)(local_485c.fds_bits[3] + 0x68) != ppsVar23);
          ppsVar23 = (sockaddr **)(local_485c.fds_bits[3] + -0xe4);
          *(uint *)(local_464c + iVar9) = *(uint *)(local_464c + iVar9) | uVar17;
          do {
            ppsVar23 = ppsVar23 + 1;
            *ppsVar23 = (sockaddr *)0x0;
          } while ((sockaddr **)(local_485c.fds_bits[3] + -100) != ppsVar23);
          *(uint *)(local_4718 + iVar9) = *(uint *)(local_4718 + iVar9) | uVar17;
          iVar6 = select(local_485c.fds_bits[6],(fd_set *)local_485c.fds_bits[5],(fd_set *)0x0,
                         (fd_set *)local_485c.fds_bits[7],(timeval *)local_485c.fds_bits[8]);
          if (iVar6 != -1) break;
          piVar12 = __errno_location();
          pFVar11 = stderr;
          if (*piVar12 != 4) {
            pcVar13 = strerror(*piVar12);
            fprintf(pFVar11,"select error: %s\n",pcVar13);
            goto LAB_0002c5cc;
          }
        }
        if (iVar6 == 0 && local_485c.fds_bits[0] != 0) {
          fwrite("select timeout\n",1,0xf,stderr);
          break;
        }
        if ((uVar17 & *(uint *)(local_464c + iVar9)) == 0) {
LAB_0002c544:
          bVar1 = false;
          if ((uVar17 & *(uint *)(local_4718 + iVar9)) == 0) goto LAB_0002c4a4;
        }
        else {
          do {
            iVar6 = ioctl(param_1,local_485c.fds_bits[9],local_485c.fds_bits[1]);
            if (iVar6 != 0) goto LAB_0002c544;
          } while (local_4798 != (fd_set *)0x2);
          if ((uVar17 & *(uint *)(local_4718 + iVar9)) == 0) goto LAB_0002c584;
          bVar1 = true;
        }
        local_4864 = auStack_47d0;
        iVar6 = FUN_00028ad0(param_1,&local_446c,pFVar10,0);
        if ((iVar6 == -1) || (bVar1)) goto LAB_0002c584;
      } while( true );
    }
LAB_0002c5cc:
    if ((pFVar10 != (FILE *)0x0) && (stdout != pFVar10)) {
      if (-1 < DAT_00062dac) {
        fwrite(&local_47c8,1,4,pFVar10);
      }
      fclose(pFVar10);
    }
    piVar12 = local_458 + 8;
    do {
      piVar27 = piVar12 + -8;
      do {
        piVar25 = piVar27 + 1;
        if (*piVar27 != -1) {
          close(*piVar27);
        }
        piVar27 = piVar25;
      } while (piVar12 != piVar25);
      piVar12 = piVar12 + 8;
    } while (piVar12 != local_38);
    return;
  }
  if (param_2 == param_1) {
    uVar17 = fcntl(param_2,3);
    bVar4 = DAT_000633f0;
    if ((DAT_00063530 & 0x100000) == 0) {
      local_8890 = DAT_0006353c;
      if ((DAT_00063530 & 0x400000) != 0) {
        local_8890 = (fd_set *)&DAT_0000000c;
      }
    }
    else {
      local_8890 = (fd_set *)0xb;
    }
    if (DAT_000633f3 == 0) {
      if (DAT_000633f4 == 0) {
        if (DAT_000633f5 != 0) {
          local_888c = 4;
        }
      }
      else {
        local_888c = 2;
      }
    }
    else {
      local_888c = 1;
    }
    local_8888 = (DAT_00063530 & 0x5000) != 0;
    p_Var20 = local_487c;
    do {
      *p_Var20 = -1;
      p_Var28 = p_Var20 + 8;
      p_Var20[1] = -1;
      p_Var20[2] = -1;
      p_Var20[3] = -1;
      p_Var20[4] = -1;
      p_Var20[5] = -1;
      p_Var20[6] = -1;
      p_Var20[7] = -1;
      p_Var20 = p_Var28;
    } while (p_Var28 != a_Stack_447c);
    local_8880 = (uint)((DAT_00063530 & 0x5000) == 0);
    if ((DAT_00063530 & 0x100000) == 0) {
      local_445c = DAT_00063540;
      if ((DAT_00063530 & 0x400000) != 0) {
        local_445c = (fd_set *)&DAT_0000000c;
      }
    }
    else {
      local_445c = (fd_set *)0xb;
    }
    if (DAT_00063405 == 0) {
      if (DAT_00063406 == 0) {
        if (DAT_00063407 != 0) {
          local_4458 = 4;
        }
      }
      else {
        local_4458 = 2;
      }
    }
    else {
      local_4458 = 1;
    }
    local_4454 = (DAT_00063544 & 0x6000) != 0;
    piVar12 = local_458 + 4;
    do {
      *piVar12 = -1;
      piVar27 = piVar12 + 8;
      piVar12[1] = -1;
      piVar12[2] = -1;
      piVar12[3] = -1;
      piVar12[4] = -1;
      piVar12[5] = -1;
      piVar12[6] = -1;
      piVar12[7] = -1;
      piVar12 = piVar27;
    } while (piVar27 != aiStack_48);
    local_444c = (uint)((DAT_00063544 & 0x6000) == 0);
    local_8eb4 = 0;
    if ((DAT_00063530 & 0xc000) == 0) {
      fwrite("unsupported m2m stream type\n",1,0x1c,stderr);
LAB_0002a934:
      piVar12 = local_458 + 0xc;
      do {
        piVar27 = piVar12 + -8;
        do {
          piVar25 = piVar27 + 1;
          if (*piVar27 != -1) {
            close(*piVar27);
          }
          piVar27 = piVar25;
        } while (piVar12 != piVar25);
        piVar12 = piVar12 + 8;
      } while (piVar12 != &iStack_28);
      p_Var20 = local_485c.fds_bits;
      do {
        p_Var28 = p_Var20 + -8;
        do {
          p_Var26 = p_Var28 + 1;
          if (*p_Var28 != -1) {
            close(*p_Var28);
          }
          p_Var28 = p_Var26;
        } while (p_Var20 != p_Var26);
        p_Var20 = p_Var20 + 8;
      } while (&local_445c != (fd_set **)p_Var20);
      return;
    }
    if (DAT_000633f5 != 0 || DAT_00063407 != 0) {
      fwrite("--stream-dmabuf or --stream-out-dmabuf not supported for m2m devices\n",1,0x45,stderr)
      ;
      goto LAB_0002a934;
    }
    if (DAT_000633f2 != '\0' || DAT_000633f7 != '\0') {
      fwrite("--stream-to-host or --stream-from-host not supported for m2m devices\n",1,0x45,stderr)
      ;
      goto LAB_0002a934;
    }
    local_8eb0.fds_bits[0x10] = *(__fd_mask *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    local_8eb0.fds_bits[0x11] = *(__fd_mask *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    local_8eb0.fds_bits[0x15] = *(__fd_mask *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_8eb0.fds_bits[0xf] = 0;
    local_8eb0.fds_bits[0x12] = 0;
    local_8eb0.fds_bits[0xe] = 2;
    local_8eb0.fds_bits[0x13] = local_8eb0.fds_bits[0x10];
    local_8eb0.fds_bits[0x14] = local_8eb0.fds_bits[0x11];
    ioctl(param_2,0x4020565a,local_8eb0.fds_bits + 0xe);
    pFVar10 = DAT_0006e58c;
    local_8ee0 = DAT_0006e58c;
    if (DAT_0006e58c != (FILE *)0x0) {
      iVar9 = strcmp((char *)DAT_0006e58c,"-");
      if (iVar9 == 0) {
        local_8ee0 = stdout;
      }
      else {
        local_8ee0 = fopen((char *)pFVar10,"w+");
      }
    }
    pcVar13 = DAT_0006e594;
    pFVar10 = (FILE *)0x0;
    if ((DAT_0006e594 != (char *)0x0) &&
       (iVar9 = strcmp(DAT_0006e594,"-"), pFVar10 = stdin, iVar9 != 0)) {
      pFVar10 = fopen(pcVar13,"r");
    }
    local_8eb0.fds_bits[4] = (__fd_mask)DAT_00062db0;
    local_8eb0.fds_bits[7] = 0;
    local_8eb0.fds_bits[8] = 0;
    local_8eb0.fds_bits[5] = (__fd_mask)local_8890;
    local_8eb0.fds_bits[6] = local_888c;
    iVar9 = FUN_00013938(param_2,0xc0145608,local_8eb0.fds_bits + 4,"VIDIOC_REQBUFS");
    if (iVar9 < 0) {
      if (local_8888 == '\0') goto LAB_0002ae84;
LAB_0002af64:
      memset(local_8eb0.fds_bits + 0x16,0,0x44);
      memset(&local_8c50,0,0x1e0);
      local_8e24 = &local_8c50;
      local_8eb0.fds_bits[0x17] = (__fd_mask)local_8890;
      local_8e28 = local_888c;
      local_8e20 = 8;
      iVar9 = FUN_00013938(param_2,0xc0445609,local_8eb0.fds_bits + 0x16,"VIDIOC_QUERYBUF");
      if (iVar9 != 0) goto LAB_0002ae84;
      local_8880 = local_8e20;
    }
    else {
      local_8884 = (fd_set *)local_8eb0.fds_bits[4];
      if (local_8888 != '\0') goto LAB_0002af64;
      if (iVar9 != 0) goto LAB_0002ae84;
    }
    local_8eb0.fds_bits[9] = (__fd_mask)DAT_00062db4;
    local_8eb0.fds_bits[0xc] = 0;
    local_8eb0.fds_bits[0xd] = 0;
    local_8eb0.fds_bits[10] = (__fd_mask)local_445c;
    local_8eb0.fds_bits[0xb] = local_4458;
    iVar9 = FUN_00013938(param_2,0xc0145608,local_8eb0.fds_bits + 9,"VIDIOC_REQBUFS");
    if (iVar9 < 0) {
      if (local_4454 == '\0') goto LAB_0002ae84;
LAB_0002afdc:
      memset(auStack_8e14,0,0x44);
      memset(local_8a70,0,0x1e0);
      local_8de0 = local_8a70;
      local_8e10 = local_445c;
      local_8de4 = local_4458;
      local_8ddc = 8;
      iVar9 = FUN_00013938(param_2,0xc0445609,auStack_8e14,"VIDIOC_QUERYBUF");
      if (iVar9 != 0) goto LAB_0002ae84;
      local_444c = local_8ddc;
    }
    else {
      local_4450 = (fd_set *)local_8eb0.fds_bits[9];
      if (local_4454 != '\0') goto LAB_0002afdc;
      if (iVar9 != 0) goto LAB_0002ae84;
    }
    iVar9 = FUN_00027784(param_2,&local_8890);
    if ((((iVar9 == 0) && (iVar9 = FUN_00027a90(param_2,&local_445c,pFVar10,1), iVar9 == 0)) &&
        (iVar9 = FUN_00013938(param_2,0x40045612,&local_8890,"VIDIOC_STREAMON"), iVar9 == 0)) &&
       (iVar9 = FUN_00013938(param_2,0x40045612,&local_445c,"VIDIOC_STREAMON"), iVar9 == 0)) {
      while (DAT_00062d98 == 0) {
        sleep(100);
      }
      if (bVar4 != 0) {
        fcntl(param_2,4,uVar17 | 0x800);
      }
      uVar24 = param_2 >> 5;
      pfVar21 = &local_8d50;
      pfVar32 = &local_8dd0;
      uVar31 = 1 << (param_2 & 0x1f);
      local_8edc = &local_8cd0;
      if (bVar4 == 0) {
        _Var30 = 0;
      }
      else {
        _Var30 = 2;
      }
LAB_0002acfc:
      p_Var20 = pfVar32[-1].fds_bits + 0x1f;
      local_8c50.tv_usec = 0;
      local_8c50.tv_sec = _Var30;
      do {
        p_Var20 = p_Var20 + 1;
        *p_Var20 = 0;
      } while (pfVar32->fds_bits + 0x1f != p_Var20);
      pfVar32->fds_bits[uVar24] = pfVar32->fds_bits[uVar24] | uVar31;
      do {
        if (pfVar21 != (fd_set *)0x0) {
          p_Var20 = pfVar21[-1].fds_bits + 0x1f;
          do {
            p_Var20 = p_Var20 + 1;
            *p_Var20 = 0;
          } while (p_Var20 != pfVar21->fds_bits + 0x1f);
          pfVar21->fds_bits[uVar24] = pfVar21->fds_bits[uVar24] | uVar31;
        }
LAB_0002ad78:
        if (local_8edc != (fd_set *)0x0) {
          p_Var20 = local_8edc[-1].fds_bits + 0x1f;
          do {
            p_Var20 = p_Var20 + 1;
            *p_Var20 = 0;
          } while (local_8edc->fds_bits + 0x1f != p_Var20);
          local_8edc->fds_bits[uVar24] = local_8edc->fds_bits[uVar24] | uVar31;
        }
        __readfds = pfVar32;
        __writefds = local_8edc;
        if (bVar4 == 0) {
          if (pfVar21 != (fd_set *)0x0) {
            __readfds = (fd_set *)0x0;
            __writefds = (fd_set *)0x0;
            goto LAB_0002ad98;
          }
LAB_0002adc8:
          if (((pfVar32 != (fd_set *)0x0) && ((uVar31 & pfVar32->fds_bits[uVar24]) != 0)) &&
             (iVar9 = FUN_00028ad0(param_2,&local_8890,local_8ee0,0), iVar9 < 0)) {
            FUN_00013938(param_2,0x40045613,&local_8890,"VIDIOC_STREAMOFF");
            pfVar21 = (fd_set *)0x0;
            pfVar32 = pfVar21;
          }
          if (local_8edc == (fd_set *)0x0) {
LAB_0002b180:
            local_8edc = (fd_set *)0x0;
          }
          else if (((uVar31 & local_8edc->fds_bits[uVar24]) != 0) &&
                  (iVar9 = FUN_00027154(param_2,&local_445c,pFVar10,0), iVar9 < 0)) {
            if (DAT_000633e1 != '\0') {
              FUN_00013938(param_2,0xc0485660,&DAT_0006dec8,"VIDIOC_DECODER_CMD");
              DAT_000633e1 = '\0';
            }
            FUN_00013938(param_2,0x40045613,&local_445c,"VIDIOC_STREAMOFF");
            goto LAB_0002b180;
          }
          if (pfVar21 == (fd_set *)0x0) {
            if (pfVar32 != (fd_set *)0x0) goto LAB_0002acfc;
            if (local_8edc == (fd_set *)0x0) goto LAB_0002ae48;
            local_8c50.tv_usec = 0;
            local_8c50.tv_sec = _Var30;
            goto LAB_0002ae40;
          }
          if ((uVar31 & pfVar21->fds_bits[uVar24]) == 0) goto LAB_0002ae20;
          do {
            iVar9 = ioctl(param_2,0x80805659,local_8a70);
            if (iVar9 != 0) goto LAB_0002ae20;
          } while (local_8a70[0] != 2);
          FUN_00013938(param_2,0x40045613,&local_8890,"VIDIOC_STREAMOFF");
          if (local_8edc == (fd_set *)0x0) goto LAB_0002ae48;
          pfVar21 = (fd_set *)0x0;
          local_8c50.tv_sec = _Var30;
          local_8c50.tv_usec = 0;
          pfVar32 = pfVar21;
          goto LAB_0002ad78;
        }
LAB_0002ad98:
        iVar9 = select(param_2 + 1,__readfds,__writefds,pfVar21,&local_8c50);
        if (iVar9 != -1) {
          if (iVar9 == 0 && bVar4 != 0) {
            fwrite("select timeout\n",1,0xf,stderr);
            break;
          }
          goto LAB_0002adc8;
        }
        piVar12 = __errno_location();
        pFVar11 = stderr;
        if (*piVar12 != 4) {
          pcVar13 = strerror(*piVar12);
          fprintf(pFVar11,"select error: %s\n",pcVar13);
          break;
        }
LAB_0002ae20:
        if (pfVar32 != (fd_set *)0x0) goto LAB_0002acfc;
        if (local_8edc == (fd_set *)0x0) {
          if (pfVar21 == (fd_set *)0x0) {
LAB_0002ae48:
            fcntl(param_2,4,uVar17);
            fputc(10,stderr);
            FUN_00027080(&local_8890);
            FUN_00027080(&local_445c);
            break;
          }
          local_8c50.tv_usec = (__suseconds_t)local_8edc;
          local_8c50.tv_sec = _Var30;
        }
        else {
          local_8c50.tv_usec = 0;
          local_8c50.tv_sec = _Var30;
        }
LAB_0002ae40:
        pfVar32 = (fd_set *)0x0;
        local_8c50.tv_sec = _Var30;
      } while( true );
    }
LAB_0002ae84:
    if ((local_8ee0 != (FILE *)0x0) && (stdout != local_8ee0)) {
      fclose(local_8ee0);
    }
    if ((pFVar10 != (FILE *)0x0) && (stdin != pFVar10)) {
      fclose(pFVar10);
    }
    piVar12 = local_458 + 0xc;
    do {
      piVar27 = piVar12 + -8;
      do {
        piVar25 = piVar27 + 1;
        if (*piVar27 != -1) {
          close(*piVar27);
        }
        piVar27 = piVar25;
      } while (piVar12 != piVar25);
      piVar12 = piVar12 + 8;
    } while (&iStack_28 != piVar12);
    p_Var20 = local_485c.fds_bits;
    do {
      p_Var28 = p_Var20 + -8;
      do {
        p_Var26 = p_Var28 + 1;
        if (*p_Var28 != -1) {
          close(*p_Var28);
        }
        p_Var28 = p_Var26;
      } while (p_Var26 != p_Var20);
      p_Var20 = p_Var20 + 8;
    } while ((fd_set **)p_Var20 != &local_445c);
    return;
  }
  uVar17 = fcntl(param_1,3);
  pFVar10 = DAT_0006e58c;
  bVar4 = DAT_000633f0;
  if ((DAT_00063530 & 0x100000) == 0) {
    local_8890 = DAT_0006353c;
    if ((DAT_00063530 & 0x400000) != 0) {
      local_8890 = (fd_set *)&DAT_0000000c;
    }
  }
  else {
    local_8890 = (fd_set *)0xb;
  }
  if (DAT_000633f3 == 0) {
    if (DAT_000633f4 == 0) {
      if (DAT_000633f5 != 0) {
        local_888c = 4;
      }
    }
    else {
      local_888c = 2;
    }
  }
  else {
    local_888c = 1;
  }
  local_8888 = (DAT_00063530 & 0x5000) != 0;
  p_Var20 = local_487c;
  do {
    *p_Var20 = -1;
    p_Var28 = p_Var20 + 8;
    p_Var20[1] = -1;
    p_Var20[2] = -1;
    p_Var20[3] = -1;
    p_Var20[4] = -1;
    p_Var20[5] = -1;
    p_Var20[6] = -1;
    p_Var20[7] = -1;
    p_Var20 = p_Var28;
  } while (p_Var28 != a_Stack_447c);
  local_8880 = (uint)((DAT_00063530 & 0x5000) == 0);
  if ((DAT_00063530 & 0x100000) == 0) {
    local_445c = DAT_00063540;
    if ((DAT_00063530 & 0x400000) != 0) {
      local_445c = (fd_set *)&DAT_0000000c;
    }
  }
  else {
    local_445c = (fd_set *)0xb;
  }
  if (DAT_00063405 == 0) {
    if (DAT_00063406 == 0) {
      if (DAT_00063407 != 0) {
        local_4458 = 4;
      }
    }
    else {
      local_4458 = 2;
    }
  }
  else {
    local_4458 = 1;
  }
  local_4454 = (DAT_00063544 & 0x6000) != 0;
  piVar12 = local_458 + 4;
  do {
    *piVar12 = -1;
    piVar27 = piVar12 + 8;
    piVar12[1] = -1;
    piVar12[2] = -1;
    piVar12[3] = -1;
    piVar12[4] = -1;
    piVar12[5] = -1;
    piVar12[6] = -1;
    piVar12[7] = -1;
    piVar12 = piVar27;
  } while (piVar27 != aiStack_48);
  local_444c = (uint)((DAT_00063544 & 0x6000) == 0);
  local_903c = 0;
  local_9038 = 0;
  if ((DAT_00063530 & 0xd001) == 0) {
    fwrite("unsupported capture stream type\n",1,0x20,stderr);
LAB_0002b840:
    piVar12 = local_458 + 0xc;
    do {
      piVar27 = piVar12 + -8;
      do {
        piVar25 = piVar27 + 1;
        if (*piVar27 != -1) {
          close(*piVar27);
        }
        piVar27 = piVar25;
      } while (piVar12 != piVar25);
      piVar12 = piVar12 + 8;
    } while (piVar12 != &iStack_28);
    p_Var20 = local_485c.fds_bits;
    do {
      p_Var28 = p_Var20 + -8;
      do {
        p_Var26 = p_Var28 + 1;
        if (*p_Var28 != -1) {
          close(*p_Var28);
        }
        p_Var28 = p_Var26;
      } while (p_Var20 != p_Var26);
      p_Var20 = p_Var20 + 8;
    } while ((fd_set **)p_Var20 != &local_445c);
    return;
  }
  if ((DAT_00063544 & 0xe002) == 0) {
    fwrite("unsupported output stream type\n",1,0x1f,stderr);
    goto LAB_0002b840;
  }
  if (DAT_00063405 == 0 && DAT_000633f5 != 0) {
    fwrite("--stream-dmabuf can only work in combination with --stream-out-mmap\n",1,0x44,stderr);
    goto LAB_0002b840;
  }
  pfVar32 = DAT_00062db4;
  if (DAT_00063407 == 0) {
    if (DAT_000633f5 == 0) {
      if (DAT_000633f4 == 0 || DAT_00063406 == 0) {
        fwrite("Allowed combinations (for now):\n",1,0x20,stderr);
        fwrite("\t--stream-mmap and --stream-out-dmabuf\n",1,0x27,stderr);
        fwrite("\t--stream-dmabuf and --stream-out-mmap\n",1,0x27,stderr);
        fwrite("\t--stream-user and --stream-out-user\n",1,0x25,stderr);
        goto LAB_0002b840;
      }
    }
    else {
      DAT_00062db0 = DAT_00062db4;
    }
  }
  else {
    if (DAT_000633f3 == 0) {
      fwrite("--stream-out-dmabuf can only work in combination with --stream-mmap\n",1,0x44,stderr);
      goto LAB_0002b840;
    }
    pfVar32 = DAT_00062db0;
    if (DAT_000633f5 != 0) {
      DAT_00062db0 = DAT_00062db4;
      pfVar32 = DAT_00062db4;
    }
  }
  DAT_00062db4 = pfVar32;
  pFVar11 = (FILE *)0x0;
  if ((DAT_0006e58c != (FILE *)0x0) &&
     (iVar9 = strcmp((char *)DAT_0006e58c,"-"), pFVar11 = stdout, iVar9 != 0)) {
    pFVar11 = fopen((char *)pFVar10,"w+");
  }
  pcVar13 = DAT_0006e594;
  pFVar10 = (FILE *)0x0;
  if ((DAT_0006e594 != (char *)0x0) &&
     (iVar9 = strcmp(DAT_0006e594,"-"), pFVar10 = stdin, iVar9 != 0)) {
    pFVar10 = fopen(pcVar13,"r");
  }
  local_9020 = local_8890;
  local_9024 = DAT_00062db0;
  local_9018 = 0;
  local_901c = local_888c;
  iVar9 = FUN_00013938(param_1,0xc0145608,&local_9024,"VIDIOC_REQBUFS");
  if (iVar9 < 0) {
    if (local_8888 == '\0') goto LAB_0002b704;
LAB_0002b95c:
    memset(auStack_8f7c,0,0x44);
    memset(&local_8e30,0,0x1e0);
    local_8f78 = local_8890;
    local_8f4c = local_888c;
    local_8f44 = 8;
    local_8f48 = &local_8e30;
    iVar9 = FUN_00013938(param_1,0xc0445609,auStack_8f7c,"VIDIOC_QUERYBUF");
    if (iVar9 != 0) goto LAB_0002b704;
    local_8880 = local_8f44;
  }
  else {
    local_8884 = local_9024;
    if (local_8888 != '\0') goto LAB_0002b95c;
    if (iVar9 != 0) goto LAB_0002b704;
  }
  local_9010 = DAT_00062db4;
  local_9004 = 0;
  local_900c = local_445c;
  local_9008 = local_4458;
  iVar9 = FUN_00013938(param_2,0xc0145608,&local_9010,"VIDIOC_REQBUFS");
  if (iVar9 < 0) {
    if (local_4454 == '\0') goto LAB_0002b704;
LAB_0002ba28:
    memset(&local_8f38,0,0x44);
    memset(&local_8c50,0,0x1e0);
    local_8f34 = local_445c;
    local_8f08 = local_4458;
    local_8f00 = 8;
    local_8f04 = &local_8c50;
    iVar9 = FUN_00013938(param_2,0xc0445609,&local_8f38,"VIDIOC_QUERYBUF");
    if (iVar9 != 0) goto LAB_0002b704;
    local_444c = local_8f00;
  }
  else {
    local_4450 = local_9010;
    if (local_4454 != '\0') goto LAB_0002ba28;
    if (iVar9 != 0) goto LAB_0002b704;
  }
  pfVar21 = local_445c;
  pfVar32 = local_8890;
  uVar24 = local_444c;
  uVar31 = local_8880;
  if (DAT_000633f5 == 0) {
    if (DAT_00063407 != 0) {
      pfStack_8fb8 = *(fd_set **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      local_8fbc = (fd_set *)0x0;
      local_8fb4 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      local_8fb0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_8fac = 0;
      pfStack_8fa8 = pfStack_8fb8;
      local_8fa4 = 0;
      pfStack_8fa0 = pfStack_8fb8;
      local_8f9c = 0;
      pfStack_8f98 = pfStack_8fb8;
      local_8f94 = 0;
      pfStack_8f90 = pfStack_8fb8;
      local_8f8c = 0;
      pfStack_8f88 = pfStack_8fb8;
      local_8f84 = 0;
      pfStack_8f80 = pfStack_8fb8;
      if (local_4450 != (fd_set *)0x0) {
        local_9048 = local_458 + 3;
        pfVar21 = (fd_set *)0x0;
        do {
          if (uVar24 != 0) {
            uVar31 = 0;
            piVar12 = local_9048;
            do {
              local_8fbc = pfVar32;
              local_8fb0 = 2;
              pfStack_8fb8 = pfVar21;
              local_8fb4 = uVar31;
              iVar9 = FUN_00013938(param_1,0xc0405610,&local_8fbc,"VIDIOC_EXPBUF");
              if (iVar9 < 0) goto LAB_0002b704;
              uVar31 = uVar31 + 1;
              piVar12 = piVar12 + 1;
              *piVar12 = local_8fac;
              uVar24 = local_444c;
            } while (uVar31 < local_444c);
          }
          pfVar21 = (fd_set *)((int)pfVar21->fds_bits + 1);
          local_9048 = local_9048 + 8;
          uVar31 = local_8880;
        } while (pfVar21 < local_4450);
      }
    }
  }
  else {
    pfStack_8ff8 = *(fd_set **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    local_8ffc = (fd_set *)0x0;
    local_8ff4 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    local_8ff0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_8fec = 0;
    pfStack_8fe8 = pfStack_8ff8;
    local_8fe4 = 0;
    pfStack_8fe0 = pfStack_8ff8;
    local_8fdc = 0;
    pfStack_8fd8 = pfStack_8ff8;
    local_8fd4 = 0;
    pfStack_8fd0 = pfStack_8ff8;
    local_8fcc = 0;
    pfStack_8fc8 = pfStack_8ff8;
    local_8fc4 = 0;
    pfStack_8fc0 = pfStack_8ff8;
    if (local_8884 != (fd_set *)0x0) {
      local_9048 = &uStack_4880;
      local_905c = (fd_set *)0x0;
      do {
        if (uVar31 != 0) {
          uVar24 = 0;
          piVar12 = local_9048;
          do {
            local_8ffc = pfVar21;
            pfStack_8ff8 = local_905c;
            local_8ff0 = 2;
            local_8ff4 = uVar24;
            iVar9 = FUN_00013938(param_2,0xc0405610,&local_8ffc,"VIDIOC_EXPBUF");
            if (iVar9 < 0) goto LAB_0002b704;
            uVar24 = uVar24 + 1;
            piVar12 = piVar12 + 1;
            *piVar12 = local_8fec;
            uVar31 = local_8880;
          } while (uVar24 < local_8880);
        }
        local_905c = (fd_set *)((int)local_905c->fds_bits + 1);
        local_9048 = local_9048 + 8;
        uVar24 = local_444c;
      } while (local_905c < local_8884);
    }
  }
  if ((uVar24 == uVar31) && (local_8888 == local_4454)) {
    iVar9 = FUN_00027784(param_1,&local_8890);
    if ((((iVar9 == 0) && (iVar9 = FUN_00027a90(param_2,&local_445c,pFVar10), iVar9 == 0)) &&
        (iVar9 = FUN_00013938(param_1,0x40045612,&local_8890,"VIDIOC_STREAMON"), iVar9 == 0)) &&
       (iVar9 = FUN_00013938(param_2,0x40045612,&local_445c,"VIDIOC_STREAMON"), iVar9 == 0)) {
      while (DAT_00062d98 == 0) {
        sleep(100);
      }
      if (bVar4 != 0) {
        fcntl(param_1,4,uVar17 | 0x800);
      }
      uVar24 = param_1 >> 5;
      if (bVar4 == 0) {
        _Var30 = 0;
      }
      else {
        _Var30 = 2;
      }
      uVar31 = 1 << (param_1 & 0x1f);
      local_904c = 0;
LAB_0002bbdc:
      do {
        puVar22 = &local_8eb4;
        local_8e30.tv_sec = _Var30;
        local_8e30.tv_usec = 0;
        do {
          puVar22 = puVar22 + 1;
          *puVar22 = 0;
        } while (local_8eb0.fds_bits + 0x1f != puVar22);
        local_8eb0.fds_bits[uVar24] = local_8eb0.fds_bits[uVar24] | uVar31;
        uVar29 = uVar31;
        if (bVar4 == 0) {
LAB_0002bc20:
          if (uVar29 != 0) {
            local_8f38 = -1;
            local_905c = (fd_set *)
                         FUN_00028ad0(param_1,&local_8890,pFVar11,&local_8f38,&local_903c,
                                      auStack_9034);
            if (local_905c == (fd_set *)0x0) {
              piStack_8c44 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
              uStack_8c40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
              uStack_8c3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
              local_8c18 = 0;
              local_8c48 = 0;
              local_8c38 = 0;
              local_8c30 = 0;
              local_8c28 = 0;
              local_8c20 = 0;
              uStack_8c14 = 0;
              local_8c50.tv_usec = (__suseconds_t)local_8890;
              local_8c50.tv_sec = local_8f38;
              piStack_8c34 = piStack_8c44;
              piStack_8c2c = piStack_8c44;
              piStack_8c24 = piStack_8c44;
              piStack_8c1c = piStack_8c44;
              piStack_8c10 = piStack_8c44;
              if (local_8888 != '\0') {
                piStack_8c1c = local_8a70;
                local_8c18 = 8;
                memset(piStack_8c1c,0,0x1e0);
              }
              iVar9 = FUN_0001391c(param_1,0xc0445609,&local_8c50);
              if (iVar9 == 0) {
                local_905c = (fd_set *)
                             FUN_00027154(param_2,&local_445c,pFVar10,&local_8c50,&local_9038,
                                          auStack_902c);
                if (local_905c != (fd_set *)0x0) goto LAB_0002bf88;
                uVar29 = local_904c + 1;
                bVar1 = 1 < local_904c;
                local_904c = uVar29;
                if (bVar1) {
                  memset(auStack_8ef4,0,0x44);
                  memset(local_8a70,0,0x1e0);
                  local_8ef0 = local_445c;
                  while (iVar9 = FUN_0001391c(param_2,0xc0445611,auStack_8ef4), iVar9 < 0) {
                    piVar12 = __errno_location();
                    pFVar3 = stderr;
                    if (*piVar12 != 0xb) {
                      pcVar13 = strerror(*piVar12);
                      fprintf(pFVar3,"%s: failed: %s\n","VIDIOC_DQBUF",pcVar13);
                      goto LAB_0002c0c4;
                    }
                  }
                  memset(local_8a70,0,0x1e0);
                  local_8ef0 = local_8890;
                  iVar9 = FUN_0001391c(param_1,0xc0445609,auStack_8ef4);
                  if (iVar9 == 0) {
                    iVar9 = FUN_0001391c(param_1,0xc044560f,auStack_8ef4);
                  }
                  if (iVar9 < 0) {
                    piVar12 = __errno_location();
                    pFVar3 = stderr;
                    pcVar13 = strerror(*piVar12);
                    fprintf(pFVar3,"%s: failed: %s\n","VIDIOC_QBUF",pcVar13);
LAB_0002c0c4:
                    fprintf(stderr,"handle out2in %d\n",0xffffffff);
                    goto LAB_0002c0d8;
                  }
                }
                goto LAB_0002bbdc;
              }
            }
            else {
              fprintf(stderr,"handle cap %d\n",local_905c);
LAB_0002bf88:
              fprintf(stderr,"handle out %d\n",local_905c);
              fprintf(stderr,"handle out2in %d\n",local_905c);
              if (-1 < (int)local_905c) goto LAB_0002bbdc;
LAB_0002c0d8:
              FUN_00013938(param_1,0x40045613,&local_8890,"VIDIOC_STREAMOFF");
              FUN_00013938(param_2,0x40045613,&local_445c,"VIDIOC_STREAMOFF");
            }
            fcntl(param_1,4,uVar17);
            fputc(10,stderr);
            FUN_00027080(&local_8890);
            FUN_00027080(&local_445c);
            goto LAB_0002b704;
          }
          goto LAB_0002bbdc;
        }
        iVar9 = select(param_1 + 1,&local_8eb0,(fd_set *)0x0,(fd_set *)0x0,&local_8e30);
        if (iVar9 != -1) {
          if (iVar9 != 0) {
            uVar29 = local_8eb0.fds_bits[uVar24] & uVar31;
            goto LAB_0002bc20;
          }
          fwrite("select timeout\n",1,0xf,stderr);
          goto LAB_0002b704;
        }
        piVar12 = __errno_location();
        pFVar3 = stderr;
      } while (*piVar12 == 4);
      pcVar13 = strerror(*piVar12);
      fprintf(pFVar3,"select error: %s\n",pcVar13);
    }
  }
  else {
    fwrite("mismatch between number of planes\n",1,0x22,stderr);
  }
LAB_0002b704:
  if ((pFVar11 != (FILE *)0x0) && (stdout != pFVar11)) {
    fclose(pFVar11);
  }
  if ((pFVar10 != (FILE *)0x0) && (stdin != pFVar10)) {
    fclose(pFVar10);
  }
  piVar12 = local_458 + 0xc;
  do {
    piVar27 = piVar12 + -8;
    do {
      piVar25 = piVar27;
      if (*piVar25 != -1) {
        close(*piVar25);
      }
      piVar27 = piVar25 + 1;
    } while (piVar25 + 1 != piVar12);
    piVar12 = piVar25 + 9;
  } while (&iStack_28 != piVar12);
  p_Var20 = local_485c.fds_bits;
  do {
    p_Var28 = p_Var20 + -8;
    do {
      p_Var26 = p_Var28 + 1;
      if (*p_Var28 != -1) {
        close(*p_Var28);
      }
      p_Var28 = p_Var26;
    } while (p_Var26 != p_Var20);
    p_Var20 = p_Var20 + 8;
  } while ((fd_set **)p_Var20 != &local_445c);
  return;
LAB_0002a440:
  if (local_485c.fds_bits[0] - 9U < 2) {
    uVar31 = uStack_47a4 & 0xff;
  }
  else {
    uVar31 = 1;
  }
  if (uVar31 <= uVar24) {
    iVar9 = FUN_00013938(param_1,0xc0cc5605,&local_485c,"VIDIOC_S_FMT");
    if (iVar9 == 0) goto LAB_00029970;
    fwrite("failed to set new format\n",1,0x19,stderr);
    uVar24 = local_444c;
    goto LAB_00029b0c;
  }
  fread(&local_48c8,1,4,pFVar10);
  if (local_48c8 != 0x8000000) goto LAB_0002a648;
  fread(&local_48c4,1,4,pFVar10);
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(local_485c.fds_bits[0]) {
  case 3:
    break;
  case 0xb:
                    /* WARNING: This code block may not be properly labeled as switch case */
    p_Stack_4920[-1] =
         local_48c4 << 0x18 | (local_48c4 >> 8 & 0xff) << 0x10 | (local_48c4 >> 0x10 & 0xff) << 8 |
         local_48c4 >> 0x18;
  }
  fread(&uStack_48c0,1,4,pFVar10);
  p_Var18 = (__suseconds_t *)local_485c.fds_bits[3];
  if ((uint)local_485c.fds_bits[0] < 0xb) {
    p_Var19 = (__suseconds_t *)
              (uStack_48c0 << 0x18 | (uStack_48c0 >> 8 & 0xff) << 0x10 |
               (uStack_48c0 >> 0x10 & 0xff) << 8 | uStack_48c0 >> 0x18);
    uVar31 = 1 << (local_485c.fds_bits[0] & 0xffU);
    if ((uVar31 & 0x30) == 0) {
      if ((uVar31 & 0x600) == 0) {
        if (uVar24 != 0 || (uVar31 & 6) == 0) goto LAB_0002a554;
      }
      else {
        *p_Stack_4920 = (__fd_mask)p_Var19;
      }
    }
    else {
      p_Var18 = p_Var19;
      if (uVar24 != 0) goto LAB_0002a554;
    }
  }
  else {
LAB_0002a554:
    p_Var19 = (__suseconds_t *)0x0;
    p_Var18 = (__suseconds_t *)local_485c.fds_bits[3];
  }
  local_485c.fds_bits[3] = (__fd_mask)p_Var18;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(local_485c.fds_bits[0]) {
  case 3:
  case 0xb:
    p_Var18 = (__suseconds_t *)local_485c.fds_bits[3];
    break;
  case 5:
    p_Var18 = (__suseconds_t *)local_485c.fds_bits[4];
    break;
  default:
    p_Var18 = (__suseconds_t *)0x0;
    break;
  case 0xd:
    p_Var18 = (__suseconds_t *)local_485c.fds_bits[1];
                    /* WARNING: This code block may not be properly labeled as switch case */
  }
  uVar8 = FUN_0003baa0(p_Var19,p_Var18);
  uVar24 = uVar24 + 1;
  puVar22 = puVar22 + 1;
  *puVar22 = uVar8;
  p_Stack_4920 = p_Stack_4920 + 5;
  goto LAB_0002a440;
LAB_0002a648:
  fwrite("unsupported FMT_VIDEO plane size\n",1,0x21,stderr);
  uVar24 = local_444c;
  goto LAB_00029b0c;
LAB_0002c584:
  FUN_00013938(param_1,0x40045613,&local_446c,"VIDIOC_STREAMOFF");
  fcntl(param_1,4,local_485c.fds_bits[2]);
  fputc(10,stderr);
  FUN_00027080(&local_446c);
  goto LAB_0002c5cc;
}



/* ===== FUN_0002d344 @ 0002d344 size=380 ===== */

void FUN_0002d344(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 < 0) {
    DAT_00063544 = DAT_00063530;
    param_2 = param_1;
  }
  if (DAT_000633e4 != '\0') {
    FUN_00029280(param_1,DAT_0006353c);
  }
  if (DAT_000633e5 != '\0') {
    FUN_00029280(param_2,DAT_00063540);
  }
  if (DAT_000633e6 != '\0') {
    FUN_00029280(param_1,4);
  }
  if (DAT_000633e7 != '\0') {
    FUN_00029280(param_1,6);
  }
  if (DAT_000633e8 != '\0') {
    FUN_00029280(param_2,5);
  }
  if (DAT_000633e9 != '\0') {
    FUN_00029280(param_2,7);
  }
  if (DAT_000633ea != '\0') {
    FUN_00029280(param_1,0xb);
  }
  if (DAT_000633eb != '\0') {
    FUN_00029280(param_1,0xc);
  }
  if (DAT_00063408 == '\0') {
    return;
  }
  piVar2 = &DAT_000504e8;
  puts("List of available patterns:");
  if (DAT_000504e8 == 0) {
    return;
  }
  iVar1 = 0;
  do {
    printf("\t%2d: %s\n",iVar1);
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + 1;
  } while (*piVar2 != 0);
  return;
}



/* ===== FUN_0002d4c0 @ 0002d4c0 size=72 ===== */

int FUN_0002d4c0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x4034);
  do {
    piVar1 = piVar3 + -8;
    do {
      piVar2 = piVar1;
      if (*piVar2 != -1) {
        close(*piVar2);
      }
      piVar1 = piVar2 + 1;
    } while (piVar2 + 1 != piVar3);
    piVar3 = piVar2 + 9;
  } while (piVar3 != (int *)(param_1 + 0x4434));
  return param_1;
}



/* ===== FUN_0002d508 @ 0002d508 size=12 ===== */

void FUN_0002d508(void)

{
  puts(
      "\nSDR Formats options:\n  --list-formats-sdr display supported SDR capture formats [VIDIOC_ENUM_FMT]\n  --get-fmt-sdr      query the SDR capture format [VIDIOC_G_FMT]\n  --set-fmt-sdr=<f>  set the SDR capture format [VIDIOC_S_FMT]\n                     parameter is either the format index as reported by\n                     --list-formats-sdr-cap, or the fourcc value as a string\n  --try-fmt-sdr=<f>  try the SDR capture format [VIDIOC_TRY_FMT]\n                     parameter is either the format index as reported by\n                     --list-formats-sdr-cap, or the fourcc value as a string\n  --list-formats-sdr-out\n                     display supported SDR output formats [VIDIOC_ENUM_FMT]\n  --get-fmt-sdr-out  query the SDR output format [VIDIOC_G_FMT]\n  --set-fmt-sdr-out=<f>\n                     set the SDR output format [VIDIOC_S_FMT]\n                     parameter is either the format index as reported by\n                     --list-formats-sdr-out, or the fourcc value as a string\n  --try-fmt-sdr-out=<f>\n                     try the SDR output format [VIDIOC_TRY_FMT]\n                     parameter is either the format index as reported by\n                     --list-formats-sdr-out, or the fourcc value as a string"
      );
  return;
}



/* ===== FUN_0002d514 @ 0002d514 size=136 ===== */

void FUN_0002d514(int param_1,char *param_2)

{
  size_t sVar1;
  
  if (0xb < param_1 - 0x8bU) {
    return;
  }
  if ((1 << (param_1 - 0x8bU & 0xff) & 0xc03U) == 0) {
    return;
  }
  if (*param_2 == '\0') {
    puts(
        "\nSDR Formats options:\n  --list-formats-sdr display supported SDR capture formats [VIDIOC_ENUM_FMT]\n  --get-fmt-sdr      query the SDR capture format [VIDIOC_G_FMT]\n  --set-fmt-sdr=<f>  set the SDR capture format [VIDIOC_S_FMT]\n                     parameter is either the format index as reported by\n                     --list-formats-sdr-cap, or the fourcc value as a string\n  --try-fmt-sdr=<f>  try the SDR capture format [VIDIOC_TRY_FMT]\n                     parameter is either the format index as reported by\n                     --list-formats-sdr-cap, or the fourcc value as a string\n  --list-formats-sdr-out\n                     display supported SDR output formats [VIDIOC_ENUM_FMT]\n  --get-fmt-sdr-out  query the SDR output format [VIDIOC_G_FMT]\n  --set-fmt-sdr-out=<f>\n                     set the SDR output format [VIDIOC_S_FMT]\n                     parameter is either the format index as reported by\n                     --list-formats-sdr-out, or the fourcc value as a string\n  --try-fmt-sdr-out=<f>\n                     try the SDR output format [VIDIOC_TRY_FMT]\n                     parameter is either the format index as reported by\n                     --list-formats-sdr-out, or the fourcc value as a string"
        );
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  sVar1 = strlen(param_2);
  if (sVar1 == 4) {
    DAT_0006e5a0 = *(undefined4 *)param_2;
    return;
  }
  DAT_0006e5a0 = strtol(param_2,(char **)0x0,0);
  return;
}



/* ===== FUN_0002d59c @ 0002d59c size=576 ===== */

void FUN_0002d59c(undefined4 param_1)

{
  int iVar1;
  uint local_11c [11];
  uint local_f0;
  undefined4 local_dc;
  uint local_d8;
  
  if (DAT_0006338b == '\0') {
    if (DAT_00063395 != '\0') {
      local_dc = 0xb;
      local_d8 = DAT_0006e5a0;
      if (DAT_0006e5a0 < 0x100) goto LAB_0002d72c;
LAB_0002d5e8:
      iVar1 = FUN_00013938(param_1,0xc0cc5640,&local_dc,"VIDIOC_TRY_FMT");
      goto LAB_0002d608;
    }
  }
  else {
    local_dc = 0xb;
    local_d8 = DAT_0006e5a0;
    if (DAT_0006e5a0 < 0x100) {
LAB_0002d72c:
      local_dc = 0xb;
      local_d8 = DAT_0006e5a0;
      local_11c[0] = DAT_0006e5a0;
      local_11c[1] = 0xb;
      iVar1 = FUN_00013938(param_1,0xc0405602,local_11c,"VIDIOC_ENUM_FMT");
      local_d8 = local_f0;
      if (iVar1 != 0) {
        local_d8 = 0;
      }
      if (DAT_0006338b == '\0') goto LAB_0002d5e8;
    }
    iVar1 = FUN_00013938(param_1,0xc0cc5605,&local_dc,"VIDIOC_S_FMT");
LAB_0002d608:
    if ((iVar1 == 0) && ((DAT_00063504 != 0 || (DAT_00063395 != '\0')))) {
      FUN_00015e10(&local_dc);
    }
  }
  if (DAT_0006338c == '\0') {
    if (DAT_00063396 == '\0') {
      return;
    }
    local_dc = 0xc;
    local_d8 = DAT_0006e5a0;
    if (DAT_0006e5a0 < 0x100) goto LAB_0002d794;
LAB_0002d6e8:
    iVar1 = FUN_00013938(param_1,0xc0cc5640,&local_dc,"VIDIOC_TRY_FMT");
  }
  else {
    local_dc = 0xc;
    local_d8 = DAT_0006e5a0;
    if (DAT_0006e5a0 < 0x100) {
LAB_0002d794:
      local_dc = 0xc;
      local_d8 = DAT_0006e5a0;
      local_11c[0] = DAT_0006e5a0;
      local_11c[1] = 0xc;
      iVar1 = FUN_00013938(param_1,0xc0405602,local_11c,"VIDIOC_ENUM_FMT");
      if (iVar1 != 0) {
        local_f0 = 0;
      }
      local_d8 = local_f0;
      if (DAT_0006338c == '\0') goto LAB_0002d6e8;
    }
    iVar1 = FUN_00013938(param_1,0xc0cc5605,&local_dc,"VIDIOC_S_FMT");
  }
  if ((iVar1 == 0) && ((DAT_00063504 != 0 || (DAT_00063396 != '\0')))) {
    FUN_00015e10(&local_dc);
  }
  return;
}



/* ===== FUN_0002d7dc @ 0002d7dc size=164 ===== */

void FUN_0002d7dc(undefined4 param_1)

{
  int iVar1;
  
  if ((char)DAT_00063384 != '\0') {
    DAT_0006e59c = 0xb;
    iVar1 = FUN_00013938(param_1,0xc0cc5604,&DAT_0006e59c,"VIDIOC_G_FMT");
    if (iVar1 == 0) {
      FUN_00015e10(&DAT_0006e59c);
    }
  }
  if (DAT_00063384._1_1_ == '\0') {
    return;
  }
  DAT_0006e59c = 0xc;
  iVar1 = FUN_00013938(param_1,0xc0cc5604,&DAT_0006e59c,"VIDIOC_G_FMT");
  if (iVar1 != 0) {
    return;
  }
  FUN_00015e10(&DAT_0006e59c);
  return;
}



/* ===== FUN_0002d880 @ 0002d880 size=96 ===== */

void FUN_0002d880(undefined4 param_1)

{
  if (DAT_0006339f != '\0') {
    puts("ioctl: VIDIOC_ENUM_FMT");
    FUN_00016628(param_1,0xb);
  }
  if (DAT_000633a0 == '\0') {
    return;
  }
  puts("ioctl: VIDIOC_ENUM_FMT");
  FUN_00016628(param_1,0xc);
  return;
}



/* ===== FUN_0002d8e0 @ 0002d8e0 size=312 ===== */

int FUN_0002d8e0(int param_1,uint param_2,uint param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (param_2 < 0x100) {
    return -1;
  }
  if ((((*(char *)(param_1 + 0x7e) == '\x01') && (*(char *)(param_1 + 0x80) == '\x02')) &&
      (*(char *)(param_1 + 0x81) == '\x03')) &&
     (uVar4 = *(byte *)(param_1 + 0x82) & 0x7f, 4 < uVar4)) {
    iVar5 = uVar4 + 0x80;
    iVar2 = 0x84;
    do {
      while( true ) {
        bVar1 = *(byte *)(param_1 + iVar2);
        uVar4 = bVar1 & 0x1f;
        if ((param_3 == bVar1 >> 5) && ((int)(iVar2 + uVar4) <= iVar5)) break;
LAB_0002d94c:
        iVar2 = iVar2 + uVar4 + 1;
        if (iVar5 <= iVar2) {
          return -1;
        }
      }
      if (2 < uVar4 && param_3 == 3) {
        iVar3 = param_1 + iVar2;
        if ((((uint)*(byte *)(iVar3 + 1) == (param_4 & 0xff)) &&
            ((uint)*(byte *)(iVar3 + 2) == (param_4 & 0xffff) >> 8)) &&
           ((uint)*(byte *)(iVar3 + 3) == param_4 >> 0x10)) {
          return iVar2;
        }
        goto LAB_0002d94c;
      }
      if (param_3 != 3 && (param_3 < 7 || param_3 < 7 && (2 < uVar4 && param_3 == 3))) {
        return iVar2;
      }
      if ((bVar1 & 0x1f) == 0 || param_3 != 7) goto LAB_0002d94c;
      if (*(byte *)(param_1 + iVar2 + 1) == param_4) {
        return iVar2;
      }
      iVar2 = iVar2 + uVar4 + 1;
    } while (iVar2 < iVar5);
  }
  return -1;
}



/* ===== FUN_0002da18 @ 0002da18 size=52 ===== */

int FUN_0002da18(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0002d8e0(param_1,param_2,3,0xc03);
  if (-1 < iVar1) {
    if ((*(byte *)(param_1 + iVar1) & 0x1f) < 5) {
      iVar1 = -1;
    }
    else {
      iVar1 = iVar1 + 4;
    }
    return iVar1;
  }
  return iVar1;
}



/* ===== FUN_0002da4c @ 0002da4c size=48 ===== */

int FUN_0002da4c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0002d8e0(param_1,param_2,3,0xc03);
  if (iVar1 < 0) {
    return iVar1;
  }
  if ((*(byte *)(param_1 + iVar1) & 0x1f) < 5) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== FUN_0002da7c @ 0002da7c size=56 ===== */

int FUN_0002da7c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0002d8e0(param_1,param_2,3,0xc45dd8);
  if (-1 < iVar1) {
    if ((*(byte *)(param_1 + iVar1) & 0x1f) < 6) {
      iVar1 = -1;
    }
    else {
      iVar1 = iVar1 + 5;
    }
    return iVar1;
  }
  return iVar1;
}



/* ===== FUN_0002dab4 @ 0002dab4 size=52 ===== */

int FUN_0002dab4(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0002d8e0(param_1,param_2,4,0);
  if (-1 < iVar1) {
    if ((*(byte *)(param_1 + iVar1) & 0x1f) < 3) {
      iVar1 = -1;
    }
    else {
      iVar1 = iVar1 + 1;
    }
    return iVar1;
  }
  return iVar1;
}



/* ===== FUN_0002dae8 @ 0002dae8 size=48 ===== */

int FUN_0002dae8(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0002d8e0(param_1,param_2,7,0);
  if (-1 < iVar1) {
    if ((*(byte *)(param_1 + iVar1) & 0x1e) == 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = iVar1 + 2;
    }
    return iVar1;
  }
  return iVar1;
}



/* ===== FUN_0002db18 @ 0002db18 size=52 ===== */

int FUN_0002db18(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0002d8e0(param_1,param_2,7,5);
  if (-1 < iVar1) {
    if ((*(byte *)(param_1 + iVar1) & 0x1f) < 3) {
      iVar1 = -1;
    }
    else {
      iVar1 = iVar1 + 2;
    }
    return iVar1;
  }
  return iVar1;
}



/* ===== FUN_0002db4c @ 0002db4c size=52 ===== */

int FUN_0002db4c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0002d8e0(param_1,param_2,7,6);
  if (-1 < iVar1) {
    if ((*(byte *)(param_1 + iVar1) & 0x1f) < 3) {
      iVar1 = -1;
    }
    else {
      iVar1 = iVar1 + 2;
    }
    return iVar1;
  }
  return iVar1;
}



/* ===== FUN_0002db80 @ 0002db80 size=140 ===== */

void FUN_0002db80(uint *param_1,int *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  
  uVar6 = *param_1;
  if (uVar6 == 0) {
    return;
  }
  uVar4 = 0;
  do {
    cVar2 = '\0';
    iVar3 = *param_2 + uVar4 * 0x80;
    pcVar5 = (char *)(iVar3 + -1);
    pcVar1 = pcVar5;
    do {
      pcVar1 = pcVar1 + 1;
      cVar2 = cVar2 + *pcVar1;
    } while (pcVar1 != (char *)(iVar3 + 0x7e));
    if (*(char *)(iVar3 + 0x7f) != -cVar2) {
      cVar2 = '\0';
      do {
        pcVar5 = pcVar5 + 1;
        cVar2 = cVar2 + *pcVar5;
      } while (pcVar5 != (char *)(iVar3 + 0x7e));
      *(char *)(iVar3 + 0x7f) = -cVar2;
      uVar6 = *param_1;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < uVar6);
  return;
}



/* ===== FUN_0002dc0c @ 0002dc0c size=104 ===== */

void FUN_0002dc0c(uint *param_1,undefined4 *param_2)

{
  void *pvVar1;
  uint uVar2;
  
  uVar2 = *param_1 + 1;
  *param_1 = uVar2;
  if (uVar2 < 0x101) {
    pvVar1 = realloc((void *)*param_2,uVar2 * 0x80);
    *param_2 = pvVar1;
    return;
  }
  fwrite("edid file error: too long\n",1,0x1a,stderr);
  free((void *)*param_2);
  *param_2 = 0;
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_0002dc74 @ 0002dc74 size=2144 ===== */

void FUN_0002dc74(int *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  undefined *puVar11;
  int iVar12;
  uint uVar13;
  
  iVar12 = *param_2;
  uVar5 = *param_1 * 0x80;
  iVar3 = FUN_0002da18(iVar12,uVar5);
  if (iVar3 < 0) {
    uVar9 = 0xffff;
  }
  else {
    uVar9 = (uint)CONCAT11(*(undefined1 *)(iVar12 + iVar3),((undefined1 *)(iVar12 + iVar3))[1]);
  }
  if ((((0xff < uVar5) && (*(char *)(iVar12 + 0x7e) == '\x01')) &&
      (*(char *)(iVar12 + 0x80) == '\x02')) && (*(char *)(iVar12 + 0x81) == '\x03')) {
    bVar1 = *(byte *)(iVar12 + 0x83);
    puts("\nCEA-861 Header");
    puVar11 = &DAT_000477c8;
    puVar4 = puVar11;
    if ((bVar1 & 0x40) == 0) {
      puVar4 = &DAT_000477cc;
    }
    printf("  IT Formats Underscanned: %s\n",puVar4);
    printf("  Audio:                   %s\n",puVar4);
    puVar4 = puVar11;
    if ((bVar1 & 0x20) == 0) {
      puVar4 = &DAT_000477cc;
    }
    printf("  YCbCr 4:4:4:             %s\n",puVar4);
    if ((bVar1 & 0x10) == 0) {
      puVar11 = &DAT_000477cc;
    }
    printf("  YCbCr 4:2:2:             %s\n",puVar11);
    iVar12 = *param_2;
    uVar5 = *param_1 << 7;
  }
  iVar3 = FUN_0002dab4(iVar12,uVar5);
  if (-1 < iVar3) {
    bVar1 = *(byte *)(iVar12 + iVar3);
    puts("\nSpeaker Allocation Data Block");
    puVar11 = &DAT_000477c8;
    puVar4 = puVar11;
    if ((bVar1 & 1) == 0) {
      puVar4 = &DAT_000477cc;
    }
    printf("  FL/FR:                   %s\n",puVar4);
    puVar4 = puVar11;
    if ((bVar1 & 2) == 0) {
      puVar4 = &DAT_000477cc;
    }
    printf("  LFE:                     %s\n",puVar4);
    puVar4 = puVar11;
    if ((bVar1 & 4) == 0) {
      puVar4 = &DAT_000477cc;
    }
    printf("  FC:                      %s\n",puVar4);
    puVar4 = puVar11;
    if ((bVar1 & 8) == 0) {
      puVar4 = &DAT_000477cc;
    }
    printf("  RL/RR:                   %s\n",puVar4);
    puVar4 = puVar11;
    if ((bVar1 & 0x10) == 0) {
      puVar4 = &DAT_000477cc;
    }
    printf("  RC:                      %s\n",puVar4);
    puVar4 = puVar11;
    if ((bVar1 & 0x20) == 0) {
      puVar4 = &DAT_000477cc;
    }
    printf("  FLC/FRC:                 %s\n",puVar4);
    puVar4 = puVar11;
    if ((bVar1 & 0x40) == 0) {
      puVar4 = &DAT_000477cc;
    }
    printf("  RLC/RRC:                 %s\n",puVar4);
    puVar4 = puVar11;
    if ((bVar1 & 0x80) == 0) {
      puVar4 = &DAT_000477cc;
    }
    printf("  FLW/FRW:                 %s\n",puVar4);
    bVar1 = *(byte *)(*param_2 + iVar3 + 1);
    puVar4 = puVar11;
    if ((bVar1 & 1) == 0) {
      puVar4 = &DAT_000477cc;
    }
    printf("  FLH/FRH:                 %s\n",puVar4);
    puVar4 = puVar11;
    if ((bVar1 & 2) == 0) {
      puVar4 = &DAT_000477cc;
    }
    printf("  TC:                      %s\n",puVar4);
    if ((bVar1 & 4) == 0) {
      puVar11 = &DAT_000477cc;
    }
    printf("  FCH:                     %s\n",puVar11);
    iVar12 = *param_2;
    uVar5 = *param_1 << 7;
  }
  iVar3 = FUN_0002da4c(iVar12,uVar5);
  if (iVar3 < 0) goto LAB_0002e058;
  bVar1 = *(byte *)(iVar12 + iVar3);
  uVar8 = (uVar9 & 0xfff) >> 8;
  uVar5 = (uVar9 & 0xff) >> 4;
  bVar10 = bVar1 & 0x1f;
  if (bVar10 < 7) {
    puts("\nHDMI Vendor-Specific Data Block");
    printf("  Physical Address:        %x.%x.%x.%x\n",(int)uVar9 >> 0xc,uVar8,uVar5,uVar9 & 0xf);
    if (bVar10 == 6) goto LAB_0002e28c;
  }
  else {
    uVar13 = (uint)*(byte *)(iVar12 + iVar3 + 7);
    puts("\nHDMI Vendor-Specific Data Block");
    if (uVar13 != 0) {
      printf("  Max TMDS Clock:          %u MHz\n",uVar13 * 5);
    }
    printf("  Physical Address:        %x.%x.%x.%x\n",(int)uVar9 >> 0xc,uVar8,uVar5,uVar9 & 0xf);
LAB_0002e28c:
    puVar11 = &DAT_000477c8;
    bVar2 = *(byte *)(*param_2 + iVar3 + 6);
    puVar4 = puVar11;
    if ((bVar2 & 8) == 0) {
      puVar4 = &DAT_000477cc;
    }
    printf("  YCbCr 4:4:4 Deep Color:  %s\n",puVar4);
    puVar4 = puVar11;
    if ((bVar2 & 0x10) == 0) {
      puVar4 = &DAT_000477cc;
    }
    printf("  30-bit:                  %s\n",puVar4);
    puVar4 = puVar11;
    if ((bVar2 & 0x20) == 0) {
      puVar4 = &DAT_000477cc;
    }
    printf("  36-bit:                  %s\n",puVar4);
    if ((bVar2 & 0x40) == 0) {
      puVar11 = &DAT_000477cc;
    }
    printf("  48-bit:                  %s\n",puVar11);
  }
  iVar12 = *param_2;
  if ((bVar1 & 0x18) != 0) {
    puVar11 = &DAT_000477c8;
    bVar1 = *(byte *)(iVar12 + iVar3 + 8);
    puVar4 = puVar11;
    if ((bVar1 & 1) == 0) {
      puVar4 = &DAT_000477cc;
    }
    printf("  Graphics:                %s\n",puVar4);
    puVar4 = puVar11;
    if ((bVar1 & 2) == 0) {
      puVar4 = &DAT_000477cc;
    }
    printf("  Photo:                   %s\n",puVar4);
    puVar4 = puVar11;
    if ((bVar1 & 4) == 0) {
      puVar4 = &DAT_000477cc;
    }
    printf("  Cinema:                  %s\n",puVar4);
    if ((bVar1 & 8) == 0) {
      puVar11 = &DAT_000477cc;
    }
    printf("  Game:                    %s\n",puVar11);
    iVar12 = *param_2;
    if ((9 < bVar10 & bVar1 >> 7) != 0) {
      iVar6 = iVar12 + iVar3;
      uVar5 = (uint)*(byte *)(iVar6 + 9);
      if (uVar5 == 0xff) {
        puts("  Video Latency:           unsupported");
        iVar12 = *param_2;
        iVar6 = iVar12 + iVar3;
      }
      else if (uVar5 != 0) {
        if ((uVar5 - 1 & 1) == 0) {
          uVar7 = 5;
        }
        else {
          uVar7 = 0;
        }
        printf("  Video Latency:           %u.%ums\n",(int)(uVar5 - 1) >> 1,uVar7);
        iVar12 = *param_2;
        iVar6 = iVar12 + iVar3;
      }
      uVar5 = (uint)*(byte *)(iVar6 + 10);
      if (uVar5 == 0xff) {
        puts("  Audio Latency:           unsupported");
        iVar12 = *param_2;
      }
      else if (uVar5 != 0) {
        if ((uVar5 - 1 & 1) == 0) {
          uVar7 = 5;
        }
        else {
          uVar7 = 0;
        }
        printf("  Audio Latency:           %u.%ums\n",(int)(uVar5 - 1) >> 1,uVar7);
        iVar12 = *param_2;
      }
    }
    if ((0xb < bVar10 & bVar1 >> 6) != 0) {
      iVar6 = iVar12 + iVar3;
      uVar5 = (uint)*(byte *)(iVar6 + 0xb);
      if (uVar5 == 0xff) {
        puts("  IL Video Latency:        unsupported");
        iVar12 = *param_2;
        iVar6 = iVar12 + iVar3;
      }
      else if (uVar5 != 0) {
        if ((uVar5 - 1 & 1) == 0) {
          uVar7 = 5;
        }
        else {
          uVar7 = 0;
        }
        printf("  IL Video Latency:        %u.%ums\n",(int)(uVar5 - 1) >> 1,uVar7);
        iVar12 = *param_2;
        iVar6 = iVar12 + iVar3;
      }
      uVar5 = (uint)*(byte *)(iVar6 + 0xc);
      if (uVar5 == 0xff) {
        puts("  IL Audio Latency:        unsupported");
        iVar12 = *param_2;
        uVar5 = *param_1 << 7;
        goto LAB_0002e058;
      }
      if (uVar5 != 0) {
        if ((uVar5 - 1 & 1) == 0) {
          uVar7 = 5;
        }
        else {
          uVar7 = 0;
        }
        printf("  IL Audio Latency:        %u.%ums\n",(int)(uVar5 - 1) >> 1,uVar7);
        iVar12 = *param_2;
        uVar5 = *param_1 << 7;
        goto LAB_0002e058;
      }
    }
  }
  uVar5 = *param_1 << 7;
LAB_0002e058:
  iVar3 = FUN_0002da7c(iVar12,uVar5);
  if (-1 < iVar3) {
    bVar1 = *(byte *)(iVar12 + iVar3);
    puts("\nHDMI Forum Vendor-Specific Data Block");
    if (bVar1 != 0) {
      printf("  Max TMDS Character Rate: %u MHz\n",(uint)bVar1 * 5);
    }
    puVar11 = &DAT_000477c8;
    if (-1 < *(char *)(*param_2 + iVar3 + 1)) {
      puVar11 = &DAT_000477cc;
    }
    printf("  SCDC Present:            %s\n",puVar11);
    iVar12 = *param_2;
    uVar5 = *param_1 << 7;
  }
  iVar3 = FUN_0002dae8(iVar12,uVar5);
  if (-1 < iVar3) {
    bVar1 = *(byte *)(iVar12 + iVar3);
    uVar5 = (uint)bVar1;
    puts("\nCEA-861 Video Capability Descriptor");
    puVar11 = &DAT_000477c8;
    puVar4 = puVar11;
    if ((bVar1 & 0x40) == 0) {
      puVar4 = &DAT_000477cc;
    }
    printf("  RGB Quantization Range:  %s\n",puVar4);
    if ((bVar1 & 0x80) == 0) {
      puVar11 = &DAT_000477cc;
    }
    printf("  YCC Quantization Range:  %s\n",puVar11);
    printf("  PT:                      %s\n",(&PTR_s_No_Data_000476a8)[(uVar5 & 0x3f) >> 4]);
    printf("  IT:                      %s\n",
           *(undefined4 *)((int)&PTR_s_IT_Formats_not_supported_000476b8 + (uVar5 & 0xc)));
    printf("  CE:                      %s\n",(&PTR_s_CE_Formats_not_supported_000476c8)[uVar5 & 3]);
    iVar12 = *param_2;
    uVar5 = *param_1 << 7;
  }
  iVar3 = FUN_0002db18(iVar12,uVar5);
  if (-1 < iVar3) {
    bVar1 = *(byte *)(iVar12 + iVar3);
    puts("\nCEA-861 Colorimetry Data Block");
    puVar11 = &DAT_000477c8;
    puVar4 = puVar11;
    if ((bVar1 & 1) == 0) {
      puVar4 = &DAT_000477cc;
    }
    printf("  xvYCC 601:               %s\n",puVar4);
    puVar4 = puVar11;
    if ((bVar1 & 2) == 0) {
      puVar4 = &DAT_000477cc;
    }
    printf("  xvYCC 709:               %s\n",puVar4);
    puVar4 = puVar11;
    if ((bVar1 & 4) == 0) {
      puVar4 = &DAT_000477cc;
    }
    printf("  sYCC:                    %s\n",puVar4);
    puVar4 = puVar11;
    if ((bVar1 & 0x10) == 0) {
      puVar4 = &DAT_000477cc;
    }
    printf("  AdobeRGB:                %s\n",puVar4);
    puVar4 = puVar11;
    if ((bVar1 & 8) == 0) {
      puVar4 = &DAT_000477cc;
    }
    printf("  AdobeYCC:                %s\n",puVar4);
    puVar4 = puVar11;
    if ((bVar1 & 0x80) == 0) {
      puVar4 = &DAT_000477cc;
    }
    printf("  BT.2020 RGB:             %s\n",puVar4);
    puVar4 = puVar11;
    if ((bVar1 & 0x40) == 0) {
      puVar4 = &DAT_000477cc;
    }
    printf("  BT.2020 YCC:             %s\n",puVar4);
    if ((bVar1 & 0x20) == 0) {
      puVar11 = &DAT_000477cc;
    }
    printf("  BT.2020 cYCC:            %s\n",puVar11);
    iVar12 = *param_2;
    uVar5 = *param_1 << 7;
  }
  iVar3 = FUN_0002db4c(iVar12,uVar5);
  if (-1 < iVar3) {
    bVar1 = *(byte *)(iVar12 + iVar3);
    puts("\nCEA-861 HDR Static Metadata Data Block");
    puVar11 = &DAT_000477c8;
    puVar4 = puVar11;
    if ((bVar1 & 1) == 0) {
      puVar4 = &DAT_000477cc;
    }
    printf("  SDR (Traditional Gamma): %s\n",puVar4);
    puVar4 = puVar11;
    if ((bVar1 & 2) == 0) {
      puVar4 = &DAT_000477cc;
    }
    printf("  HDR (Traditional Gamma): %s\n",puVar4);
    if ((bVar1 & 4) == 0) {
      puVar11 = &DAT_000477cc;
    }
    printf("  SMPTE 2084:              %s\n",puVar11);
    return;
  }
  return;
}



/* ===== FUN_0002e4d4 @ 0002e4d4 size=12 ===== */

void FUN_0002e4d4(void)

{
  puts(
      "\nEDID options:\n  --set-edid=pad=<pad>[,type=<type>|file=<file>][,format=<fmt>][modifiers]\n                     <pad> is the input or output index for which to set the EDID.\n                     <type> can be \'hdmi\', \'hdmi-4k-170mhz\', \'hdmi-4k-300mhz\', \'hdmi-4k-600mhz\',\n                     \'dvid\' or \'vga\'. A predefined EDID suitable for that connector type will be\n                     set. It has a 1920x1080p60 native resolution for the non-4k variants and a\n                     3840x2160 resolution for the 4k variants (4kp30 YCbCr 4:2:0 for 170mhz, 4kp30\n                     for 300 mhz and 4kp60 for 600 mhz).\n                     If <file> is \'-\', then the data is read from stdin, otherwise it is\n                     read from the given file. The file format must be in hex as in get-edid.\n                     The \'type\' or \'file\' arguments are mutually exclusive. One of the two\n                     must be specified.\n                     <fmt> is one of:\n                     hex:    hex numbers in ascii text (default)\n                     raw:    raw binary EDID content\n\n                     [modifiers] is a comma-separate list of EDID modifiers:\n\n                     CEA-861 Header modifiers:\n                     underscan: toggle the underscan bit.\n                     audio: toggle the audio bit.\n                     ycbcr444: toggle the YCbCr 4:4:4 bit.\n                     ycbcr422: toggle the YCbCr 4:2:2 bit.\n\n                     Speaker Allocation Data Block modifiers:\n                     fl-fr: Front Left and Front Right.\n                     lfe: Low Frequence Effects.\n                     fc: Front Center.\n                     rl-rr: Rear Left and Rear Right.\n                     rc: Rear Center.\n                     flc-frc: Front Left Center and Front Right Center.\n                     rlc-rrc: Rear Left Center and Rear Right Center.\n                     flw-frw: Front Left Wide and Front Right Wide.\n                     flh-frh: Front Left High and Front Right High.\n                     tc: Top C..." /* TRUNCATED STRING LITERAL */
      );
  return;
}



/* ===== FUN_0002e4e0 @ 0002e4e0 size=2088 ===== */

void FUN_0002e4e0(undefined4 param_1,char *param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  ulong uVar15;
  char *pcVar16;
  char *local_30;
  char *local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  uVar3 = DAT_0002ee78;
  uVar1 = (ulong)DAT_0006e668;
  uVar4 = (ulong)DAT_0006e678;
  uVar5 = (ulong)DAT_0006e680;
  uVar6 = DAT_0006e680._4_4_;
  uVar15 = (ulong)DAT_0006e6a4;
  uVar7 = (ulong)DAT_0006e6b4;
  uVar8 = (ulong)DAT_0006e6bc;
  uVar9 = DAT_0006e6bc._4_4_;
  uVar13 = (ulong)DAT_0006e6d0;
  uVar10 = (undefined4)DAT_0006e6e0;
  uVar11 = (undefined4)DAT_0006e6e8;
  uVar12 = DAT_0006e6e8._4_4_;
  local_2c = param_2;
  switch(param_1) {
  case 0xd9:
    uVar1 = 0;
    DAT_0006e668._4_4_ = *(char **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    DAT_0006e670._0_4_ = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    DAT_0006e670._4_4_ = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    DAT_0006e680._0_4_ = 0;
    DAT_0006e68c = (char *)0x0;
    DAT_0006e668._0_4_ = 0;
    DAT_0006e678._0_4_ = 0;
    DAT_0006e680._4_4_ = 0;
    uVar4 = uVar1;
    DAT_0006e678._4_4_ = DAT_0006e668._4_4_;
    uVar5 = uVar1;
    uVar6 = uVar1;
    DAT_0006e688 = DAT_0006e668._4_4_;
    if (param_2 != (char *)0x0) {
LAB_0002e668:
      do {
        if (*local_2c == '\0') {
          return;
        }
        iVar14 = getsubopt(&local_2c,&PTR_DAT_000476d8,&local_30);
        pcVar2 = local_30;
        if (iVar14 == -1) {
          fwrite("Invalid suboptions specified\n",1,0x1d,stderr);
switchD_0002e5dc_default:
          puts(
              "\nEDID options:\n  --set-edid=pad=<pad>[,type=<type>|file=<file>][,format=<fmt>][modifiers]\n                     <pad> is the input or output index for which to set the EDID.\n                     <type> can be \'hdmi\', \'hdmi-4k-170mhz\', \'hdmi-4k-300mhz\', \'hdmi-4k-600mhz\',\n                     \'dvid\' or \'vga\'. A predefined EDID suitable for that connector type will be\n                     set. It has a 1920x1080p60 native resolution for the non-4k variants and a\n                     3840x2160 resolution for the 4k variants (4kp30 YCbCr 4:2:0 for 170mhz, 4kp30\n                     for 300 mhz and 4kp60 for 600 mhz).\n                     If <file> is \'-\', then the data is read from stdin, otherwise it is\n                     read from the given file. The file format must be in hex as in get-edid.\n                     The \'type\' or \'file\' arguments are mutually exclusive. One of the two\n                     must be specified.\n                     <fmt> is one of:\n                     hex:    hex numbers in ascii text (default)\n                     raw:    raw binary EDID content\n\n                     [modifiers] is a comma-separate list of EDID modifiers:\n\n                     CEA-861 Header modifiers:\n                     underscan: toggle the underscan bit.\n                     audio: toggle the audio bit.\n                     ycbcr444: toggle the YCbCr 4:4:4 bit.\n                     ycbcr422: toggle the YCbCr 4:2:2 bit.\n\n                     Speaker Allocation Data Block modifiers:\n                     fl-fr: Front Left and Front Right.\n                     lfe: Low Frequence Effects.\n                     fc: Front Center.\n                     rl-rr: Rear Left and Rear Right.\n                     rc: Rear Center.\n                     flc-frc: Front Left Center and Front Right Center.\n                     rlc-rrc: Rear Left Center and Rear Right Center.\n                     flw-frw: Front Left Wide and Front Right Wide.\n                     flh-frh: Front Left High and Front Right High.\n                     tc: Top C..." /* TRUNCATED STRING LITERAL */
              );
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        if (local_30 == (char *)0x0) {
          if (iVar14 < 9) {
            fprintf(stderr,"No value given to suboption <%s>\n",(&PTR_DAT_000476d8)[iVar14]);
            goto switchD_0002e5dc_default;
          }
          switch(iVar14) {
          case 9:
switchD_0002e69c_caseD_9:
            DAT_0006e694 = DAT_0006e694 | 8;
            break;
          case 10:
            goto switchD_0002e69c_caseD_a;
          case 0xb:
            goto switchD_0002e69c_caseD_b;
          case 0xc:
            goto switchD_0002e69c_caseD_c;
          case 0xd:
            goto switchD_0002e69c_caseD_d;
          case 0xe:
            goto switchD_0002e69c_caseD_e;
          case 0xf:
            goto switchD_0002e69c_caseD_f;
          case 0x10:
            goto switchD_0002e69c_caseD_10;
          case 0x11:
            goto switchD_0002e69c_caseD_11;
          case 0x12:
          case 0x13:
            goto switchD_0002e69c_caseD_12;
          case 0x14:
            goto switchD_0002e69c_caseD_14;
          case 0x15:
            goto switchD_0002e69c_caseD_15;
          case 0x16:
            goto switchD_0002e69c_caseD_16;
          case 0x17:
            goto switchD_0002e69c_caseD_17;
          case 0x18:
            goto switchD_0002e69c_caseD_18;
          case 0x19:
            goto switchD_0002e69c_caseD_19;
          case 0x1a:
            goto switchD_0002e69c_caseD_1a;
          case 0x1b:
            goto switchD_0002e69c_caseD_1b;
          case 0x1c:
            goto switchD_0002e69c_caseD_1c;
          case 0x1d:
            goto switchD_0002e69c_caseD_1d;
          case 0x1e:
            goto switchD_0002e69c_caseD_1e;
          case 0x1f:
            goto switchD_0002e69c_caseD_1f;
          case 0x20:
            goto switchD_0002e69c_caseD_20;
          case 0x21:
            goto switchD_0002e69c_caseD_21;
          case 0x22:
            goto switchD_0002e69c_caseD_22;
          case 0x23:
            goto switchD_0002e69c_caseD_23;
          case 0x24:
            goto switchD_0002e69c_caseD_24;
          case 0x25:
            goto switchD_0002e69c_caseD_25;
          case 0x26:
            goto switchD_0002e69c_caseD_26;
          case 0x27:
            goto switchD_0002e69c_caseD_27;
          case 0x28:
            goto switchD_0002e69c_caseD_28;
          case 0x29:
            goto switchD_0002e69c_caseD_29;
          case 0x2a:
            goto switchD_0002e69c_caseD_2a;
          case 0x2b:
            goto switchD_0002e69c_caseD_2b;
          case 0x2c:
            goto switchD_0002e69c_caseD_2c;
          case 0x2d:
            goto switchD_0002e69c_caseD_2d;
          default:
            goto switchD_0002e5dc_default;
          }
          goto LAB_0002e668;
        }
        switch(iVar14) {
        case 0:
          DAT_0006e668._0_4_ = strtoul(local_30,(char **)0x0,0);
          goto LAB_0002e668;
        case 1:
        case 2:
          iVar14 = strcmp(local_30,"dvid");
          if (iVar14 == 0) {
            DAT_0006e688 = &DAT_00062dc0;
            DAT_0006e670._0_4_ = 1;
            pcVar2 = DAT_0006e68c;
          }
          else {
            iVar14 = strcmp(pcVar2,"vga");
            if (iVar14 == 0) {
              DAT_0006e670._0_4_ = 1;
              DAT_0006e688 = DAT_0002ee80;
              pcVar2 = DAT_0006e68c;
            }
            else {
              iVar14 = strcmp(pcVar2,"hdmi-4k-170mhz");
              if (iVar14 == 0) {
                DAT_0006e670._0_4_ = 2;
                DAT_0006e688 = DAT_0002ee7c;
                pcVar2 = DAT_0006e68c;
              }
              else {
                iVar14 = strcmp(pcVar2,"hdmi-4k-300mhz");
                if (iVar14 == 0) {
                  DAT_0006e670._0_4_ = 2;
                  DAT_0006e688 = DAT_0002ee84;
                  pcVar2 = DAT_0006e68c;
                }
                else {
                  iVar14 = strcmp(pcVar2,"hdmi-4k-600mhz");
                  if (iVar14 == 0) {
                    DAT_0006e670._0_4_ = 2;
                    DAT_0006e688 = DAT_0002ee88;
                    pcVar2 = DAT_0006e68c;
                  }
                  else {
                    iVar14 = strcmp(pcVar2,"hdmi");
                    if (iVar14 != 0) goto switchD_0002e5dc_default;
                    DAT_0006e670._0_4_ = 2;
                    DAT_0006e688 = DAT_0002ee8c;
                    pcVar2 = DAT_0006e68c;
                  }
                }
              }
            }
          }
          break;
        case 3:
          DAT_0006e68c = local_30;
          pcVar2 = DAT_0006e688;
          break;
        case 4:
          iVar14 = strcmp(local_30,"hex");
          if (iVar14 == 0) {
            DAT_0006e690 = 0;
          }
          else {
            iVar14 = strcmp(pcVar2,"raw");
            if (iVar14 != 0) goto switchD_0002e5dc_default;
            DAT_0006e690 = 1;
          }
          goto LAB_0002e668;
        case 5:
          pcVar16 = strchr(local_30,0x2e);
          if (pcVar16 == (char *)0x0) {
            uVar15 = strtoul(pcVar2,(char **)0x0,0);
            DAT_000632c0 = uVar15 & 0xffff;
          }
          else {
            iVar14 = sscanf(pcVar2,"%x.%x.%x.%x",&local_28,&local_24,&local_20,&local_1c);
            if (iVar14 == 4) {
              if ((((local_28 < 0x10) && (local_24 < 0x10)) && (local_20 < 0x10)) &&
                 (local_1c < 0x10)) {
                DAT_000632c0 = (local_24 << 8 | local_28 << 0xc | local_1c | local_20 << 4) & 0xffff
                ;
              }
              else {
                fwrite("Physical address components should never be larger than 0xf\n",1,0x3c,stderr
                      );
                DAT_000632c0 = 0xffff;
              }
            }
            else {
              fwrite("Expected a physical address of the form x.x.x.x\n",1,0x30,stderr);
              DAT_000632c0 = 0xffff;
            }
          }
          goto LAB_0002e668;
        case 6:
          uVar15 = strtoul(local_30,(char **)0x0,0);
          DAT_000632c4 = uVar15 & 3;
          goto LAB_0002e668;
        case 7:
          uVar15 = strtoul(local_30,(char **)0x0,0);
          DAT_000632c8 = uVar15 & 3;
          goto LAB_0002e668;
        case 8:
          uVar15 = strtoul(local_30,(char **)0x0,0);
          DAT_000632cc = uVar15 & 3;
          goto LAB_0002e668;
        case 9:
          goto switchD_0002e69c_caseD_9;
        case 10:
switchD_0002e69c_caseD_a:
          DAT_0006e694 = DAT_0006e694 | 0x10;
          goto LAB_0002e668;
        case 0xb:
switchD_0002e69c_caseD_b:
          DAT_0006e694 = DAT_0006e694 | 0x20;
          goto LAB_0002e668;
        case 0xc:
switchD_0002e69c_caseD_c:
          DAT_0006e694 = DAT_0006e694 | 0x40;
          goto LAB_0002e668;
        case 0xd:
switchD_0002e69c_caseD_d:
          DAT_0006e695 = DAT_0006e695 | 1;
          goto LAB_0002e668;
        case 0xe:
switchD_0002e69c_caseD_e:
          DAT_0006e695 = DAT_0006e695 | 2;
          goto LAB_0002e668;
        case 0xf:
switchD_0002e69c_caseD_f:
          DAT_0006e695 = DAT_0006e695 | 4;
          goto LAB_0002e668;
        case 0x10:
switchD_0002e69c_caseD_10:
          DAT_0006e695 = DAT_0006e695 | 8;
          goto LAB_0002e668;
        case 0x11:
switchD_0002e69c_caseD_11:
          DAT_0006e696 = ~((byte)~(byte)(((uint)DAT_0006e696 << 0x19) >> 0x18) >> 1);
          goto LAB_0002e668;
        case 0x12:
        case 0x13:
switchD_0002e69c_caseD_12:
          DAT_0006e697 = DAT_0006e697 | 0x40;
          goto LAB_0002e668;
        case 0x14:
switchD_0002e69c_caseD_14:
          DAT_0006e697 = DAT_0006e697 | 0x20;
          goto LAB_0002e668;
        case 0x15:
switchD_0002e69c_caseD_15:
          DAT_0006e697 = DAT_0006e697 | 0x10;
          goto LAB_0002e668;
        case 0x16:
switchD_0002e69c_caseD_16:
          DAT_0006e698 = ~((byte)~(byte)(((uint)DAT_0006e698 << 0x19) >> 0x18) >> 1);
          goto LAB_0002e668;
        case 0x17:
switchD_0002e69c_caseD_17:
          DAT_0006e698 = DAT_0006e698 | 0x40;
          goto LAB_0002e668;
        case 0x18:
switchD_0002e69c_caseD_18:
          DAT_0006e699 = DAT_0006e699 | 1;
          goto LAB_0002e668;
        case 0x19:
switchD_0002e69c_caseD_19:
          DAT_0006e699 = DAT_0006e699 | 2;
          goto LAB_0002e668;
        case 0x1a:
switchD_0002e69c_caseD_1a:
          DAT_0006e699 = DAT_0006e699 | 4;
          goto LAB_0002e668;
        case 0x1b:
switchD_0002e69c_caseD_1b:
          DAT_0006e699 = DAT_0006e699 | 8;
          goto LAB_0002e668;
        case 0x1c:
switchD_0002e69c_caseD_1c:
          DAT_0006e699 = DAT_0006e699 | 0x10;
          goto LAB_0002e668;
        case 0x1d:
switchD_0002e69c_caseD_1d:
          DAT_0006e699 = ~((byte)~(byte)(((uint)DAT_0006e699 << 0x19) >> 0x18) >> 1);
          goto LAB_0002e668;
        case 0x1e:
switchD_0002e69c_caseD_1e:
          DAT_0006e699 = DAT_0006e699 | 0x40;
          goto LAB_0002e668;
        case 0x1f:
switchD_0002e69c_caseD_1f:
          DAT_0006e699 = DAT_0006e699 | 0x20;
          goto LAB_0002e668;
        case 0x20:
switchD_0002e69c_caseD_20:
          DAT_0006e69a = DAT_0006e69a | 1;
          goto LAB_0002e668;
        case 0x21:
switchD_0002e69c_caseD_21:
          DAT_0006e69a = DAT_0006e69a | 2;
          goto LAB_0002e668;
        case 0x22:
switchD_0002e69c_caseD_22:
          DAT_0006e69a = DAT_0006e69a | 4;
          goto LAB_0002e668;
        case 0x23:
switchD_0002e69c_caseD_23:
          DAT_0006e69b = DAT_0006e69b | 1;
          goto LAB_0002e668;
        case 0x24:
switchD_0002e69c_caseD_24:
          DAT_0006e69b = DAT_0006e69b | 2;
          goto LAB_0002e668;
        case 0x25:
switchD_0002e69c_caseD_25:
          DAT_0006e69b = DAT_0006e69b | 4;
          goto LAB_0002e668;
        case 0x26:
switchD_0002e69c_caseD_26:
          DAT_0006e69b = DAT_0006e69b | 8;
          goto LAB_0002e668;
        case 0x27:
switchD_0002e69c_caseD_27:
          DAT_0006e69b = DAT_0006e69b | 0x10;
          goto LAB_0002e668;
        case 0x28:
switchD_0002e69c_caseD_28:
          DAT_0006e69b = DAT_0006e69b | 0x20;
          goto LAB_0002e668;
        case 0x29:
switchD_0002e69c_caseD_29:
          DAT_0006e69b = DAT_0006e69b | 0x40;
          goto LAB_0002e668;
        case 0x2a:
switchD_0002e69c_caseD_2a:
          DAT_0006e69b = ~((byte)~(byte)(((uint)DAT_0006e69b << 0x19) >> 0x18) >> 1);
          goto LAB_0002e668;
        case 0x2b:
switchD_0002e69c_caseD_2b:
          DAT_0006e69c = DAT_0006e69c | 1;
          goto LAB_0002e668;
        case 0x2c:
switchD_0002e69c_caseD_2c:
          DAT_0006e69c = DAT_0006e69c | 2;
          goto LAB_0002e668;
        case 0x2d:
switchD_0002e69c_caseD_2d:
          DAT_0006e69c = DAT_0006e69c | 4;
          goto LAB_0002e668;
        default:
          goto switchD_0002e5dc_default;
        }
        if (pcVar2 != (char *)0x0) {
          fwrite("The edid and file options can\'t be used together.\n",1,0x32,stderr);
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
      } while( true );
    }
    break;
  case 0xda:
    if (param_2 != (char *)0x0) {
      DAT_0006e6a0 = strtoul(param_2,(char **)0x0,0);
      return;
    }
    break;
  case 0xdb:
    uVar15 = 0;
    DAT_0006e6a4._4_4_ = *(ulong *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    DAT_0006e6ac._4_4_ = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    DAT_0006e6c8 = 0;
    DAT_0006e6a4._0_4_ = 0;
    DAT_0006e6cc = (char *)0x0;
    DAT_0006e6bc._0_4_ = 0;
    DAT_0006e6ac._0_4_ = 0x100;
    DAT_0006e6b4._0_4_ = 0;
    DAT_0006e6bc._4_4_ = 0;
    uVar7 = uVar15;
    DAT_0006e6b4._4_4_ = DAT_0006e6a4._4_4_;
    uVar8 = uVar15;
    uVar9 = uVar15;
    DAT_0006e6c4 = DAT_0006e6a4._4_4_;
    if (param_2 != (char *)0x0) {
      while (*local_2c != '\0') {
        uVar13 = FUN_00013b0c(&local_2c,uVar3,&local_30);
        pcVar2 = local_30;
        switch(uVar13) {
        case 0:
          DAT_0006e6a4._0_4_ = strtoul(local_30,(char **)0x0,0);
          break;
        case 1:
          DAT_0006e6a4._4_4_ = strtoul(local_30,(char **)0x0,0);
          if (0xff < DAT_0006e6a4._4_4_) {
            fprintf(stderr,"startblock %d too large, max 255\n",DAT_0006e6a4._4_4_);
                    /* WARNING: Subroutine does not return */
            exit(1);
          }
          break;
        case 2:
          DAT_0006e6ac._0_4_ = strtoul(local_30,(char **)0x0,0);
          break;
        case 3:
          iVar14 = strcmp(local_30,"hex");
          if (iVar14 == 0) {
            DAT_0006e6c8 = 0;
          }
          else {
            iVar14 = strcmp(pcVar2,"raw");
            if (iVar14 == 0) {
              DAT_0006e6c8 = 1;
            }
            else {
              iVar14 = strcmp(pcVar2,"carray");
              if (iVar14 != 0) goto switchD_0002e5dc_default;
              DAT_0006e6c8 = 2;
            }
          }
          break;
        case 4:
          if (local_30 != (char *)0x0) {
            DAT_0006e6cc = local_30;
          }
          break;
        default:
          goto switchD_0002e5dc_default;
        }
      }
      uVar1 = (ulong)DAT_0006e668;
      uVar4 = (ulong)DAT_0006e678;
      uVar5 = (ulong)DAT_0006e680;
      uVar6 = DAT_0006e680._4_4_;
      uVar15 = (ulong)DAT_0006e6a4;
      uVar7 = (ulong)DAT_0006e6b4;
      uVar8 = (ulong)DAT_0006e6bc;
      uVar9 = DAT_0006e6bc._4_4_;
      uVar13 = (ulong)DAT_0006e6d0;
      uVar10 = (undefined4)DAT_0006e6e0;
      uVar11 = (undefined4)DAT_0006e6e8;
      uVar12 = DAT_0006e6e8._4_4_;
      if (0x100 < DAT_0006e6a4._4_4_ + (ulong)DAT_0006e6ac) {
        DAT_0006e6ac._0_4_ = 0x100 - DAT_0006e6a4._4_4_;
      }
    }
    break;
  case 0xdc:
    uVar13 = 0;
    DAT_0006e6d0._4_4_ = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    DAT_0006e6d8._0_4_ = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    DAT_0006e6d8._4_4_ = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    DAT_0006e6e8._0_4_ = 0;
    DAT_0006e6d0._0_4_ = 0;
    DAT_0006e6e0._0_4_ = 0;
    DAT_0006e6e8._4_4_ = 0;
    uVar10 = uVar13;
    DAT_0006e6e0._4_4_ = DAT_0006e6d0._4_4_;
    uVar11 = uVar13;
    uVar12 = uVar13;
    DAT_0006e6f0 = DAT_0006e6d0._4_4_;
    if (param_2 != (char *)0x0) {
      DAT_0006e6d0._0_4_ = strtoul(param_2,(char **)0x0,0);
      return;
    }
  }
  DAT_0006e6e8._4_4_ = uVar12;
  DAT_0006e6e8._0_4_ = uVar11;
  DAT_0006e6e0._0_4_ = uVar10;
  DAT_0006e6d0._0_4_ = uVar13;
  DAT_0006e6bc._4_4_ = uVar9;
  DAT_0006e6bc._0_4_ = uVar8;
  DAT_0006e6b4._0_4_ = uVar7;
  DAT_0006e6a4._0_4_ = uVar15;
  DAT_0006e680._4_4_ = uVar6;
  DAT_0006e680._0_4_ = uVar5;
  DAT_0006e678._0_4_ = uVar4;
  DAT_0006e668._0_4_ = uVar1;
  return;
}



/* ===== FUN_0002ee90 @ 0002ee90 size=1880 ===== */

void FUN_0002ee90(undefined4 param_1)

{
  undefined1 uVar1;
  FILE *__stream;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  FILE *__stream_00;
  int *piVar9;
  char *pcVar10;
  byte *pbVar11;
  byte *pbVar12;
  char *pcVar13;
  char cVar14;
  uint uVar15;
  void *pvVar16;
  int iVar17;
  uint uVar18;
  byte *pbVar19;
  bool bVar20;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  if (DAT_000633da != '\0') {
    uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_48 = 0;
    local_4c = DAT_0006e6a0;
    local_38 = 0;
    local_30 = 0;
    uStack_34 = uStack_44;
    uStack_2c = uStack_44;
    FUN_00013938(param_1,0xc0245629,&local_4c,"VIDIOC_S_EDID");
  }
  pcVar13 = DAT_0006e68c;
  if (DAT_000633d9 == '\0') {
    return;
  }
  bVar20 = DAT_000633dd != '\0';
  __stream_00 = (FILE *)0x0;
  if (DAT_0006e68c != (char *)0x0) {
    iVar4 = strcmp(DAT_0006e68c,"-");
    __stream_00 = stdin;
    if (iVar4 != 0) {
      __stream_00 = fopen(pcVar13,"r");
    }
    pcVar13 = DAT_0006e68c;
    __stream = stderr;
    iVar4 = DAT_0002f5e8;
    if (__stream_00 == (FILE *)0x0) {
      piVar9 = __errno_location();
      pcVar10 = strerror(*piVar9);
      fprintf(__stream,"Failed to open %s: %s\n",pcVar13,pcVar10);
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_4c = local_4c & 0xff000000;
    fseek(__stream_00,0,0);
    DAT_0006e688 = (void *)0x0;
    DAT_0006e670._0_4_ = 0;
    uVar18 = 0;
LAB_0002ef34:
    while (uVar15 = uVar18, uVar5 = fgetc(__stream_00), uVar5 != 0xffffffff) {
      uVar1 = (undefined1)uVar5;
      if (DAT_0006e690 == 1) {
        if ((uVar15 & 0xff) == 0) {
          FUN_0002dc0c(DAT_0002f5ec,iVar4);
        }
        *(undefined1 *)((int)DAT_0006e688 + (uVar15 >> 1)) = uVar1;
        uVar18 = uVar15 + 2;
      }
      else {
        iVar6 = isxdigit(uVar5);
        uVar18 = uVar15;
        if ((uVar15 & 1) == 0) goto LAB_0002f318;
        if (((char)local_4c == '0') && ((uVar5 & 0xffffffdf) == 0x58)) {
          uVar18 = uVar15 - 1;
          if (iVar6 != 0) {
            if ((uVar18 & 1) != 0) goto LAB_0002ef7c;
            goto LAB_0002f320;
          }
        }
        else if (iVar6 != 0) {
          uVar15 = uVar15 + 1;
LAB_0002ef7c:
          local_4c._0_2_ = CONCAT11(uVar1,(char)local_4c);
          if ((uVar18 & 0xff) == 1) {
            FUN_0002dc0c(DAT_0002f5ec,iVar4);
          }
          uVar7 = strtoul((char *)&local_4c,(char **)0x0,0x10);
          *(char *)((int)DAT_0006e688 + (uVar18 >> 1)) = (char)uVar7;
          uVar18 = uVar15;
        }
      }
    }
    if ((uint)DAT_0006e670 == 0) {
      pcVar13 = DAT_0006e68c;
      if (DAT_0006e68c == (char *)0x0) {
        pcVar13 = "stdin";
      }
      fprintf(stderr,"%s contained an empty EDID, ignoring.\n",pcVar13);
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  }
  pvVar16 = DAT_0006e688;
  iVar4 = DAT_000632c0;
  if (((((DAT_0006e697 != 0) || (-1 < DAT_000632c0)) && (0xff < (uint)DAT_0006e670 * 0x80)) &&
      ((*(char *)((int)DAT_0006e688 + 0x7e) == '\x01' &&
       (*(char *)((int)DAT_0006e688 + 0x80) == '\x02')))) &&
     (*(char *)((int)DAT_0006e688 + 0x81) == '\x03')) {
    *(byte *)((int)DAT_0006e688 + 0x83) = DAT_0006e697 ^ *(byte *)((int)DAT_0006e688 + 0x83);
    if ((iVar4 < 0) || (uVar18 = FUN_0002da18(pvVar16), (int)uVar18 < 0)) {
      bVar20 = true;
    }
    else {
      uVar15 = uVar18 & 0xffffff80;
      pcVar13 = (char *)((int)pvVar16 + (uVar15 - 1));
      *(undefined1 *)((int)pvVar16 + uVar18) = (char)((uint)iVar4 >> 8);
      cVar14 = '\0';
      ((undefined1 *)((int)pvVar16 + uVar18))[1] = (char)iVar4;
      do {
        pcVar13 = pcVar13 + 1;
        cVar14 = cVar14 + *pcVar13;
      } while ((char *)((int)pvVar16 + uVar15 + 0x7e) != pcVar13);
      bVar20 = true;
      *(char *)((int)pvVar16 + uVar15 + 0x7f) = -cVar14;
    }
  }
  bVar3 = DAT_0006e69c;
  bVar2 = DAT_0006e69b;
  pvVar16 = DAT_0006e688;
  if ((DAT_0006e69b != 0 || DAT_0006e69c != 0) &&
     (iVar4 = FUN_0002dab4(DAT_0006e688,(uint)DAT_0006e670 << 7), -1 < iVar4)) {
    bVar20 = true;
    *(byte *)((int)pvVar16 + iVar4) = bVar2 ^ *(byte *)((int)pvVar16 + iVar4);
    *(byte *)((int)DAT_0006e688 + iVar4 + 1) = bVar3 ^ *(byte *)((int)DAT_0006e688 + iVar4 + 1);
  }
  bVar3 = DAT_0006e695;
  bVar2 = DAT_0006e694;
  pvVar16 = DAT_0006e688;
  if ((DAT_0006e694 != 0 || DAT_0006e695 != 0) &&
     (iVar4 = FUN_0002da4c(DAT_0006e688,(uint)DAT_0006e670 << 7), -1 < iVar4)) {
    if (5 < (*(byte *)((int)pvVar16 + iVar4) & 0x1f)) {
      bVar20 = true;
      *(byte *)((int)pvVar16 + iVar4 + 6) = bVar2 ^ *(byte *)((int)pvVar16 + iVar4 + 6);
    }
    if ((*(byte *)((int)pvVar16 + iVar4) & 0x18) != 0) {
      bVar20 = true;
      *(byte *)((int)DAT_0006e688 + iVar4 + 8) = bVar3 ^ *(byte *)((int)DAT_0006e688 + iVar4 + 8);
    }
  }
  bVar2 = DAT_0006e696;
  pvVar16 = DAT_0006e688;
  if ((DAT_0006e696 != 0) &&
     (iVar4 = FUN_0002da7c(DAT_0006e688,(uint)DAT_0006e670 << 7), -1 < iVar4)) {
    bVar20 = true;
    *(byte *)((int)pvVar16 + iVar4 + 1) = bVar2 ^ *(byte *)((int)pvVar16 + iVar4 + 1);
  }
  bVar2 = DAT_0006e698;
  pvVar16 = DAT_0006e688;
  iVar17 = DAT_000632cc;
  iVar6 = DAT_000632c8;
  iVar4 = DAT_000632c4;
  if ((DAT_0006e698 == 0) && (DAT_000632c4 < 0)) {
    if (DAT_000632cc < 0) {
      if ((-1 < DAT_000632c8) &&
         (iVar8 = FUN_0002dae8(DAT_0006e688,(uint)DAT_0006e670 << 7), -1 < iVar8))
      goto LAB_0002f1f0;
    }
    else {
      iVar8 = FUN_0002dae8(DAT_0006e688,(uint)DAT_0006e670 << 7);
      if (-1 < iVar8) {
LAB_0002f1c8:
        iVar6 = DAT_000632c8;
        *(byte *)((int)DAT_0006e688 + iVar8) = *(byte *)((int)DAT_0006e688 + iVar8) & 0xfc;
        *(byte *)((int)DAT_0006e688 + iVar8) = *(byte *)((int)DAT_0006e688 + iVar8) | (byte)iVar17;
        goto LAB_0002f1e8;
      }
    }
  }
  else {
    iVar8 = FUN_0002dae8(DAT_0006e688,(uint)DAT_0006e670 << 7);
    iVar17 = DAT_000632cc;
    iVar4 = DAT_000632c4;
    if (-1 < iVar8) {
      bVar20 = -1 < DAT_000632cc;
      *(byte *)((int)pvVar16 + iVar8) = bVar2 ^ *(byte *)((int)pvVar16 + iVar8);
      iVar6 = DAT_000632c8;
      if (bVar20) goto LAB_0002f1c8;
LAB_0002f1e8:
      if (-1 < iVar6) {
LAB_0002f1f0:
        *(byte *)((int)DAT_0006e688 + iVar8) = *(byte *)((int)DAT_0006e688 + iVar8) & 0xf3;
        *(byte *)((int)DAT_0006e688 + iVar8) =
             *(byte *)((int)DAT_0006e688 + iVar8) | (byte)(iVar6 << 2);
      }
      if (iVar4 < 0) {
        bVar20 = true;
      }
      else {
        bVar20 = true;
        *(byte *)((int)DAT_0006e688 + iVar8) = *(byte *)((int)DAT_0006e688 + iVar8) & 0xcf;
        *(byte *)((int)DAT_0006e688 + iVar8) =
             *(byte *)((int)DAT_0006e688 + iVar8) | (byte)(iVar4 << 4);
      }
    }
  }
  bVar3 = DAT_0006e69a;
  bVar2 = DAT_0006e699;
  pvVar16 = DAT_0006e688;
  if ((DAT_0006e699 == 0) || (iVar4 = FUN_0002db18(DAT_0006e688,(uint)DAT_0006e670 << 7), iVar4 < 0)
     ) {
    pvVar16 = DAT_0006e688;
    if ((bVar3 != 0) && (iVar4 = FUN_0002db4c(DAT_0006e688,(uint)DAT_0006e670 << 7), -1 < iVar4))
    goto LAB_0002f3cc;
    if (bVar20) goto LAB_0002f3d8;
  }
  else {
    *(byte *)((int)pvVar16 + iVar4) = bVar2 ^ *(byte *)((int)pvVar16 + iVar4);
    pvVar16 = DAT_0006e688;
    if ((bVar3 != 0) && (iVar4 = FUN_0002db4c(DAT_0006e688,(uint)DAT_0006e670 << 7), -1 < iVar4)) {
LAB_0002f3cc:
      *(byte *)((int)pvVar16 + iVar4) = bVar3 ^ *(byte *)((int)pvVar16 + iVar4);
    }
LAB_0002f3d8:
    FUN_0002db80(DAT_0002f5e8 + -0x18);
  }
  FUN_0002dc74(DAT_0002f5e8 + -0x18);
  if ((uint)DAT_0006e670 != 0) {
    bVar20 = true;
    uVar18 = 0;
    do {
      cVar14 = '\0';
      pbVar12 = (byte *)((int)DAT_0006e688 + uVar18 * 0x80 + -1);
      pbVar11 = (byte *)((int)DAT_0006e688 + uVar18 * 0x80 + 0x7e);
      pbVar19 = pbVar12;
      do {
        pbVar19 = pbVar19 + 1;
        cVar14 = cVar14 + *pbVar19;
      } while (pbVar11 != pbVar19);
      if (*(char *)((int)DAT_0006e688 + uVar18 * 0x80 + 0x7f) != -cVar14) {
        uVar15 = 0;
        do {
          pbVar12 = pbVar12 + 1;
          uVar15 = uVar15 + *pbVar12 & 0xff;
        } while (pbVar11 != pbVar12);
        fprintf(stderr,"Block %u has a checksum error (should be 0x%02x)\n",uVar18,-uVar15 & 0xff);
        bVar20 = false;
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < (uint)DAT_0006e670);
    if (!bVar20) {
      fwrite("EDID not set due to checksum errors\n",1,0x24,stderr);
      goto LAB_0002efd0;
    }
  }
  FUN_00013938(param_1,0xc0245629,&DAT_0006e668,"VIDIOC_S_EDID");
LAB_0002efd0:
  if (__stream_00 != (FILE *)0x0) {
    if (DAT_0006e688 != (void *)0x0) {
      free(DAT_0006e688);
      DAT_0006e688 = (void *)0x0;
    }
    if (stdin != __stream_00) {
      fclose(__stream_00);
    }
  }
  return;
LAB_0002f318:
  if (iVar6 != 0) {
LAB_0002f320:
    local_4c = CONCAT31(local_4c._1_3_,uVar1);
    uVar18 = uVar18 + 1;
  }
  goto LAB_0002ef34;
}



/* ===== FUN_0002f5f0 @ 0002f5f0 size=1292 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0002f5f0(undefined4 param_1)

{
  FILE *__stream;
  char *pcVar1;
  int iVar2;
  FILE *__stream_00;
  int *piVar3;
  char *pcVar4;
  char cVar5;
  uint uVar6;
  byte *pbVar7;
  void *pvVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  pcVar1 = DAT_0006e6cc;
  __stream_00 = stdout;
  if (DAT_000633db != '\0') {
    if (DAT_0006e6cc != (char *)0x0) {
      iVar2 = strcmp(DAT_0006e6cc,"-");
      if (iVar2 != 0) {
        __stream_00 = fopen(pcVar1,"w+");
      }
      pcVar1 = DAT_0006e6cc;
      __stream = stderr;
      if (__stream_00 == (FILE *)0x0) {
        piVar3 = __errno_location();
        pcVar4 = strerror(*piVar3);
        fprintf(__stream,"Failed to open %s: %s\n",pcVar1,pcVar4);
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
    }
    DAT_0006e6c4 = malloc((uint)DAT_0006e6ac << 7);
    iVar2 = FUN_00013938(param_1,0xc0245628,DAT_0002fafc,"VIDIOC_G_EDID");
    if (iVar2 == 0) {
      if (DAT_000633dd != '\0') {
        FUN_0002db80(DAT_0002fb00 + -0x18);
      }
      if (DAT_0006e6c8 == 1) {
        if ((uint)DAT_0006e6ac != 0) {
          uVar9 = 0;
          do {
            pvVar8 = DAT_0006e6c4;
            pbVar10 = (byte *)((int)DAT_0006e6c4 + uVar9 * 0x80 + -1);
            pbVar11 = (byte *)((int)DAT_0006e6c4 + uVar9 * 0x80 + 0x7f);
            pbVar7 = pbVar10;
            do {
              pbVar7 = pbVar7 + 1;
              fputc((uint)*pbVar7,__stream_00);
            } while (pbVar11 != pbVar7);
            pbVar11 = (byte *)((int)pvVar8 + uVar9 * 0x80 + 0x7e);
            cVar5 = '\0';
            pbVar7 = pbVar10;
            do {
              pbVar7 = pbVar7 + 1;
              cVar5 = cVar5 + *pbVar7;
            } while (pbVar11 != pbVar7);
            if (*(char *)((int)pvVar8 + uVar9 * 0x80 + 0x7f) != -cVar5) {
              uVar6 = 0;
              do {
                pbVar10 = pbVar10 + 1;
                uVar6 = uVar6 + *pbVar10 & 0xff;
              } while (pbVar11 != pbVar10);
              fprintf(stderr,"Block %u has a checksum error (should be %02x)\n",uVar9,-uVar6 & 0xff)
              ;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < (uint)DAT_0006e6ac);
        }
      }
      else if (DAT_0006e6c8 == 2) {
        fwrite("unsigned char edid[] = {\n",1,0x19,__stream_00);
        if ((uint)DAT_0006e6ac != 0) {
          uVar9 = 0;
          pvVar8 = DAT_0006e6c4;
          while( true ) {
            pbVar7 = (byte *)((int)pvVar8 + 7);
            do {
              pbVar10 = pbVar7 + -7;
              fprintf(__stream_00,"\t0x%02x,",(uint)*pbVar10);
              do {
                pbVar10 = pbVar10 + 1;
                fprintf(__stream_00," 0x%02x,",(uint)*pbVar10);
              } while (pbVar7 != pbVar10);
              pbVar7 = pbVar7 + 8;
              fputc(10,__stream_00);
            } while (pbVar7 != (byte *)((int)pvVar8 + 0x87));
            pbVar10 = (byte *)((int)pvVar8 + -1);
            cVar5 = '\0';
            pbVar7 = pbVar10;
            do {
              pbVar7 = pbVar7 + 1;
              cVar5 = cVar5 + *pbVar7;
            } while ((byte *)((int)pvVar8 + 0x7e) != pbVar7);
            if (*(char *)((int)pvVar8 + 0x7f) != -cVar5) {
              uVar6 = 0;
              do {
                pbVar10 = pbVar10 + 1;
                uVar6 = uVar6 + *pbVar10 & 0xff;
              } while ((byte *)((int)pvVar8 + 0x7e) != pbVar10);
              fprintf(__stream_00,"\t/* Block %u has a checksum error (should be 0x%02x) */\n",uVar9
                      ,-uVar6 & 0xff);
            }
            uVar9 = uVar9 + 1;
            if ((uint)DAT_0006e6ac <= uVar9) break;
            pvVar8 = (void *)((int)DAT_0006e6c4 + uVar9 * 0x80);
            if (uVar9 != 0) {
              fputc(10,__stream_00);
            }
          }
        }
        fwrite(&DAT_000495ac,1,3,__stream_00);
      }
      else if ((uint)DAT_0006e6ac != 0) {
        uVar9 = 0;
        pvVar8 = DAT_0006e6c4;
        while( true ) {
          pbVar7 = (byte *)((int)pvVar8 + 0xf);
          do {
            pbVar10 = pbVar7 + -0xf;
            fprintf(__stream_00,"%02x",(uint)*pbVar10);
            do {
              pbVar10 = pbVar10 + 1;
              fprintf(__stream_00," %02x",(uint)*pbVar10);
            } while (pbVar7 != pbVar10);
            pbVar7 = pbVar7 + 0x10;
            fputc(10,__stream_00);
          } while ((byte *)((int)pvVar8 + 0x8f) != pbVar7);
          pbVar10 = (byte *)((int)pvVar8 + -1);
          cVar5 = '\0';
          pbVar7 = pbVar10;
          do {
            pbVar7 = pbVar7 + 1;
            cVar5 = cVar5 + *pbVar7;
          } while ((byte *)((int)pvVar8 + 0x7e) != pbVar7);
          if (*(char *)((int)pvVar8 + 0x7f) != -cVar5) {
            uVar6 = 0;
            do {
              pbVar10 = pbVar10 + 1;
              uVar6 = uVar6 + *pbVar10 & 0xff;
            } while ((byte *)((int)pvVar8 + 0x7e) != pbVar10);
            fprintf(__stream_00,"Block %u has a checksum error (should be 0x%02x)\n",uVar9,
                    -uVar6 & 0xff);
          }
          uVar9 = uVar9 + 1;
          if ((uint)DAT_0006e6ac <= uVar9) break;
          pvVar8 = (void *)((int)DAT_0006e6c4 + uVar9 * 0x80);
          if (uVar9 != 0) {
            fputc(10,__stream_00);
          }
        }
      }
    }
    if ((DAT_0006e6cc != (char *)0x0) && (stdout != __stream_00)) {
      fclose(__stream_00);
    }
    free(DAT_0006e6c4);
  }
  if (DAT_000633dc == '\0') {
    return;
  }
  DAT_0006e6d8._0_4_ = 2;
  DAT_0006e6f0 = malloc(0x100);
  iVar2 = FUN_00013938(param_1,0xc0245628,&DAT_0006e6d0,"VIDIOC_G_EDID");
  if (iVar2 == 0) {
    FUN_0002dc74(&DAT_0006e6d8,&DAT_0006e6f0);
    free(DAT_0006e6f0);
    return;
  }
  free(DAT_0006e6f0);
  return;
}



/* ===== FUN_0002fb08 @ 0002fb08 size=140 ===== */

undefined4 FUN_0002fb08(int param_1,int param_2,int param_3)

{
  if (param_1 < 1) {
    fprintf(stderr,"Invalid value %d for width\n",param_1);
    return 0;
  }
  if (0 < param_2) {
    if (0 < param_3) {
      return 1;
    }
    fprintf(stderr,"Invalid value %d for refresh rate\n");
    return 0;
  }
  fprintf(stderr,"Invalid value %d for height\n",param_2);
  return 0;
}



/* ===== FUN_0002fb94 @ 0002fb94 size=1528 ===== */

/* WARNING: Type propagation algorithm not settling */

uint FUN_0002fb94(uint param_1,uint param_2,int param_3,int param_4,char param_5,byte param_6,
                 uint *param_7)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int extraout_r1;
  int extraout_r1_00;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint local_48;
  uint local_44;
  uint local_38;
  uint local_34;
  uint local_2c;
  
  local_48 = FUN_0002fb08();
  if (local_48 == 0) {
    return 0;
  }
  pcVar7 = "t\n";
  if (param_4 == 2) {
    pcVar7 = (char *)0x3e8;
  }
  if (param_3 == 0) {
    param_3 = 0x3c;
  }
  else if (param_3 - 0x32U < 0x1a) {
    if ((~(0x2000401U >> (param_3 - 0x32U & 0xff)) & 1) != 0) goto LAB_0002fe08;
  }
  else if (param_3 != 0x55) {
LAB_0002fe08:
    fwrite("Warning!  Refresh rate is not CVT standard\n",1,0x2b,stderr);
  }
  iVar11 = 0;
  local_44 = param_2;
  if (param_5 != '\0') {
    param_3 = param_3 << 1;
    local_44 = (int)param_2 / 2;
    if (param_2 == local_44 * 2) {
      iVar11 = 1;
    }
    else {
      iVar11 = 1;
      fwrite("Warning!  Vertical lines rounded to nearest integer\n",1,0x34,stderr);
    }
  }
  uVar2 = param_1 & 7;
  if (-1 < (int)-param_1) {
    uVar2 = -(-param_1 & 7);
  }
  uVar2 = param_1 - uVar2;
  if (param_1 == uVar2) {
    if (param_4 != 2) goto LAB_0002fe68;
LAB_0002fc50:
    uVar9 = 8;
    local_2c = 8;
    uVar3 = __aeabi_idiv(param_3 * -460000 + 1000000000,param_3 * local_44);
    iVar4 = __aeabi_idiv(460000,uVar3);
    local_38 = 6;
    uVar8 = 0x28;
    iVar6 = uVar2 + 0x50;
    iVar4 = iVar4 + 1;
    if (iVar4 < 0xf) {
      iVar4 = 0xf;
    }
    local_34 = iVar4 - 0xe;
  }
  else {
    fwrite("Warning!  Horizontal pixels rounded to nearest character cell\n",1,0x3e,stderr);
    if (param_4 == 2) goto LAB_0002fc50;
LAB_0002fe68:
    if (param_1 == ((int)param_2 / 6) * 8) {
      local_2c = 4;
      iVar10 = 4;
    }
    else if (param_1 == ((int)(param_2 * 0x10) / 0x48) * 8) {
      local_2c = 5;
      iVar10 = 5;
    }
    else if (param_1 == ((int)param_2 / 5) * 8) {
      local_2c = 6;
      iVar10 = 6;
    }
    else {
      iVar4 = param_2 * 5;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0x1f;
      }
      if ((param_1 == (iVar4 >> 5) * 8) || (param_1 == ((int)(param_2 * 0xf) / 0x48) * 8)) {
        iVar10 = 7;
        local_2c = 7;
      }
      else {
        iVar10 = 10;
        local_2c = 10;
        fwrite("Warning!  Aspect ratio is not CVT Standard\n",1,0x2b,stderr);
      }
    }
    if (param_4 < 1) {
      iVar11 = __aeabi_idiv((param_3 * -550000 + 1000000000) * 2,
                            param_3 * (iVar11 + (local_44 + 3) * 2));
      iVar4 = __aeabi_idiv(550000,iVar11);
      if (iVar10 + 2 < iVar4 + 1) {
        local_38 = (iVar4 + 1) - iVar10;
      }
      else {
        local_38 = 3;
      }
      local_34 = 3;
      iVar4 = 30000 - (iVar11 * 300) / 1000;
      if (iVar4 < 20000) {
        iVar4 = 20000;
      }
      uVar9 = __aeabi_ldivmod((int)((longlong)(int)uVar2 * (longlong)iVar4),
                              (int)((ulonglong)((longlong)(int)uVar2 * (longlong)iVar4) >> 0x20),
                              100000 - iVar4,100000 - iVar4 >> 0x1f);
      uVar8 = uVar9 & 0xf;
      if (-1 < (int)-uVar9) {
        uVar8 = -(-uVar9 & 0xf);
      }
      iVar4 = uVar9 - uVar8;
      lVar1 = (longlong)(int)(uVar2 + iVar4) * 1000000000;
      uVar8 = iVar4 / 2;
      uVar2 = (int)((uVar2 + iVar4) * 8) / 100;
      uVar9 = uVar2 & 7;
      if (-1 < (int)-uVar2) {
        uVar9 = -(-uVar2 & 7);
      }
      uVar2 = uVar2 - uVar9;
      iVar11 = __aeabi_ldivmod((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),iVar11,iVar11 >> 0x1f);
      __aeabi_idivmod(iVar11,pcVar7);
      uVar9 = (iVar4 - uVar8) - uVar2;
      uVar12 = iVar11 - extraout_r1_00;
      goto LAB_0002fce8;
    }
    local_34 = 3;
    uVar3 = __aeabi_idiv(param_3 * -460000 + 1000000000,param_3 * local_44);
    iVar5 = __aeabi_idiv(460000,uVar3);
    iVar6 = uVar2 + 0xa0;
    uVar8 = 0x50;
    uVar9 = 0x30;
    iVar4 = iVar10 + 10;
    if (iVar10 + 10 < iVar5 + 1) {
      iVar4 = iVar5 + 1;
    }
    local_38 = (iVar4 + -3) - iVar10;
  }
  uVar2 = 0x20;
  iVar11 = (int)(iVar6 * param_3 * (iVar11 + (local_44 + iVar4) * 2)) / 2;
  __aeabi_idivmod(iVar11,pcVar7);
  uVar12 = iVar11 - extraout_r1;
LAB_0002fce8:
  *param_7 = param_1;
  param_7[6] = uVar9;
  param_7[7] = uVar2;
  param_7[8] = uVar8;
  param_7[1] = param_2;
  param_7[9] = local_34;
  param_7[10] = local_2c;
  param_7[0xb] = local_38;
  param_7[4] = uVar12;
  *(undefined1 *)((int)param_7 + 0x3d) = 0;
  *(undefined1 *)((int)param_7 + 0x3e) = 0;
  *(undefined1 *)((int)param_7 + 0x3f) = 0;
  *(undefined1 *)(param_7 + 0xf) = 4;
  param_7[5] = (int)uVar12 >> 0x1f;
  if (param_5 == '\0') {
    *(undefined1 *)(param_7 + 2) = 0;
    *(undefined1 *)((int)param_7 + 9) = 0;
    *(undefined1 *)((int)param_7 + 10) = 0;
    *(undefined1 *)((int)param_7 + 0xb) = 0;
  }
  else {
    *(undefined1 *)((int)param_7 + 9) = 0;
    param_7[0x10] = param_7[0x10] | 8;
    param_7[0xe] = local_38 + 1;
    *(undefined1 *)((int)param_7 + 10) = 0;
    *(undefined1 *)((int)param_7 + 0xb) = 0;
    param_7[0xc] = local_34;
    param_7[0xd] = local_2c;
    *(undefined1 *)(param_7 + 2) = 1;
  }
  if (param_4 < 1) {
    *(undefined1 *)((int)param_7 + 0xd) = 0;
    *(undefined1 *)((int)param_7 + 0xe) = 0;
    *(undefined1 *)((int)param_7 + 0xf) = 0;
    *(undefined1 *)(param_7 + 3) = 1;
  }
  else {
    *(undefined1 *)((int)param_7 + 0xd) = 0;
    *(undefined1 *)((int)param_7 + 0xe) = 0;
    param_7[0x10] = param_7[0x10] | 1;
    *(undefined1 *)((int)param_7 + 0xf) = 0;
    *(undefined1 *)(param_7 + 3) = 2;
  }
  uVar2 = (uint)(param_4 == 2 & param_6);
  if ((uVar2 != 0) && (local_48 = uVar2, param_3 % 6 == 0)) {
    param_7[0x10] = param_7[0x10] | 4;
  }
  return local_48;
}



/* ===== FUN_0003018c @ 0003018c size=884 ===== */

int FUN_0003018c(int param_1,int param_2,int param_3,int param_4,char param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int extraout_r2;
  int extraout_r3;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 local_40;
  undefined4 uStack_3c;
  
  if (param_6 == (int *)0x0) {
    fwrite("Null pointer to gtf modeline structure\n",1,0x27,stderr);
    return 0;
  }
  iVar1 = FUN_0002fb08();
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = param_2 + 1;
    if (param_3 == 0) {
      param_3 = 0x3c;
    }
    iVar2 = extraout_r2;
    iVar5 = extraout_r3;
    iVar4 = iVar3;
    if (param_5 != '\0') {
      iVar4 = iVar3 - (iVar3 >> 0x1f);
      param_3 = param_3 << 1;
      iVar5 = 1;
      iVar2 = iVar3 / 2;
    }
    if (param_5 != '\0') {
      iVar4 = iVar2 + iVar5;
    }
    else {
      iVar5 = 0;
      iVar2 = param_2;
    }
    uVar7 = param_1 + 4;
    uVar8 = uVar7 & 7;
    if (-1 < (int)-uVar7) {
      uVar8 = -(-uVar7 & 7);
    }
    iVar4 = __aeabi_idiv((param_3 * -550000 + 1000000000) * 2,param_3 * (iVar5 + iVar4 * 2));
    iVar3 = __aeabi_idiv(55000000,iVar4);
    iVar3 = (iVar3 + 0x32) / 100;
    iVar2 = (iVar4 * (iVar5 + (iVar3 + 1 + iVar2) * 2)) / 1000;
    lVar10 = __aeabi_ldivmod(DAT_00030500,DAT_00030504,iVar2,iVar2 >> 0x1f);
    uVar9 = VectorShiftRight(CONCAT44(iVar4,iVar4),0x20);
    uStack_3c = (undefined4)((ulonglong)uVar9 >> 0x20);
    lVar10 = lVar10 * CONCAT44(uStack_3c,iVar4);
    local_40 = (undefined4)lVar10;
    iVar2 = __aeabi_ldivmod(local_40,(int)((ulonglong)lVar10 >> 0x20),param_3 * 1000,
                            param_3 * 1000 >> 0x1f);
    if (param_4 == 0) {
      iVar5 = 30000 - (iVar2 * 300) / 1000;
    }
    else {
      iVar5 = 37000 - (iVar2 * 0x708) / 1000;
    }
    lVar10 = (longlong)(int)(uVar7 - uVar8) * (longlong)iVar5;
    iVar5 = __aeabi_ldivmod((int)lVar10,(int)((ulonglong)lVar10 >> 0x20),100000 - iVar5,
                            100000 - iVar5 >> 0x1f);
    param_6[1] = param_2;
    *param_6 = param_1;
    *(undefined1 *)((int)param_6 + 0x3d) = 0;
    *(undefined1 *)((int)param_6 + 0x3e) = 0;
    param_6[0xb] = iVar3 + -3;
    *(undefined1 *)((int)param_6 + 0x3f) = 0;
    *(undefined1 *)((int)param_6 + 0x25) = 0;
    *(undefined1 *)((int)param_6 + 0x26) = 0;
    *(undefined1 *)((int)param_6 + 0x27) = 0;
    *(undefined1 *)((int)param_6 + 0x29) = 0;
    *(undefined1 *)((int)param_6 + 0x2a) = 0;
    *(undefined1 *)((int)param_6 + 0x2b) = 0;
    *(undefined1 *)(param_6 + 0xf) = 8;
    uVar6 = iVar5 + 8;
    if ((int)uVar6 < 0) {
      uVar6 = iVar5 + 0x17;
    }
    iVar4 = (uVar7 - uVar8) + (uVar6 & 0xfffffff0);
    iVar5 = (int)(uVar6 & 0xfffffff0) >> 1;
    *(undefined1 *)(param_6 + 10) = 3;
    param_6[8] = iVar5;
    lVar10 = (longlong)iVar4 * 1000000000;
    *(undefined1 *)(param_6 + 9) = 1;
    iVar4 = (iVar4 * 8) / 100;
    uVar8 = iVar4 + 4;
    if ((int)uVar8 < 0) {
      uVar8 = iVar4 + 0xb;
    }
    param_6[7] = uVar8 & 0xfffffff8;
    param_6[6] = iVar5 - (uVar8 & 0xfffffff8);
    iVar2 = __aeabi_ldivmod((int)lVar10,(int)((ulonglong)lVar10 >> 0x20),iVar2,iVar2 >> 0x1f);
    param_6[4] = iVar2;
    param_6[5] = iVar2 >> 0x1f;
    if (param_5 == '\0') {
      *(undefined1 *)(param_6 + 2) = 0;
      *(undefined1 *)((int)param_6 + 9) = 0;
      *(undefined1 *)((int)param_6 + 10) = 0;
      *(undefined1 *)((int)param_6 + 0xb) = 0;
    }
    else {
      *(undefined1 *)(param_6 + 2) = 1;
      *(undefined1 *)((int)param_6 + 9) = 0;
      param_6[0xe] = iVar3 + -2;
      *(undefined1 *)((int)param_6 + 10) = 0;
      *(undefined1 *)((int)param_6 + 0xb) = 0;
      *(undefined1 *)(param_6 + 0xc) = 1;
      *(undefined1 *)((int)param_6 + 0x31) = 0;
      *(undefined1 *)((int)param_6 + 0x32) = 0;
      *(undefined1 *)((int)param_6 + 0x33) = 0;
      *(undefined1 *)(param_6 + 0xd) = 3;
      *(undefined1 *)((int)param_6 + 0x35) = 0;
      *(undefined1 *)((int)param_6 + 0x36) = 0;
      *(undefined1 *)((int)param_6 + 0x37) = 0;
      param_6[0x10] = param_6[0x10] | 8;
    }
    if (param_4 == 0) {
      *(undefined1 *)((int)param_6 + 0xd) = 0;
      *(undefined1 *)((int)param_6 + 0xe) = 0;
      *(undefined1 *)((int)param_6 + 0xf) = 0;
      *(undefined1 *)(param_6 + 3) = 1;
      return iVar1;
    }
    *(undefined1 *)((int)param_6 + 0xd) = 0;
    param_6[0x10] = param_6[0x10] | 1;
    *(undefined1 *)((int)param_6 + 0xe) = 0;
    *(undefined1 *)((int)param_6 + 0xf) = 0;
    *(undefined1 *)(param_6 + 3) = 2;
    iVar3 = param_4;
  }
  return iVar3;
}



/* ===== FUN_00030508 @ 00030508 size=36 ===== */

void FUN_00030508(void *param_1)

{
  free(param_1);
  return;
}



/* ===== FUN_0003052c @ 0003052c size=44 ===== */

void * FUN_0003052c(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,param_1);
  return pvVar1;
}



/* ===== FUN_00030558 @ 00030558 size=52 ===== */

undefined4 FUN_00030558(undefined4 param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  
  iVar1 = rand();
  __aeabi_uidivmod(iVar1,param_1);
  return extraout_r1;
}



/* ===== FUN_0003058c @ 0003058c size=64 ===== */

undefined4 FUN_0003058c(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0xac) == '\0') {
    uVar1 = *(undefined4 *)(param_1 + 0xa8);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* ===== FUN_000305cc @ 000305cc size=40 ===== */

undefined1 FUN_000305cc(int param_1)

{
  return *(undefined1 *)(param_1 + 0xac);
}



/* ===== FUN_000305f4 @ 000305f4 size=140 ===== */

uint FUN_000305f4(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = __aeabi_uidiv(param_3,*(undefined1 *)(param_1 + param_2 + 0xb0));
  return *(int *)(param_1 + (param_2 + 0x10e) * 4 + 4) *
         (uVar1 & *(uint *)(param_1 + (param_2 + 0x2c) * 4 + 4)) >> 1;
}



/* ===== FUN_00030680 @ 00030680 size=72 ===== */

undefined4 FUN_00030680(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = __aeabi_uidiv(param_2 * param_1[3],*param_1);
  return uVar1;
}



/* ===== FUN_000306c8 @ 000306c8 size=72 ===== */

undefined4 FUN_000306c8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00030680(param_1,param_3);
  uVar1 = FUN_000305f4(param_1,param_2,uVar1);
  return uVar1;
}



/* ===== FUN_00030710 @ 00030710 size=56 ===== */

undefined4 FUN_00030710(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + (param_2 + 0x112) * 4);
}



/* ===== FUN_00030748 @ 00030748 size=124 ===== */

undefined4 FUN_00030748(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_0003058c(param_1);
  if (param_2 < uVar1) {
    iVar2 = FUN_00030710(param_1,param_2);
    uVar3 = __aeabi_uidiv(*(int *)(param_1 + 8) * iVar2,*(undefined1 *)(param_1 + param_2 + 0xad));
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_000307f4 @ 000307f4 size=324 ===== */

void FUN_000307f4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  memset(param_1,0,0x56c);
  *param_1 = param_2;
  param_1[3] = *param_1;
  param_1[2] = param_3;
  param_1[1] = param_1[2];
  param_1[0xc] = param_2;
  param_1[8] = param_1[0xc];
  param_1[0xd] = param_3;
  param_1[9] = param_1[0xd];
  *(undefined1 *)(param_1 + 0x120) = 1;
  *(undefined1 *)((int)param_1 + 0x482) = 1;
  *(undefined1 *)((int)param_1 + 0x62) = 0x80;
  *(undefined1 *)((int)param_1 + 99) = 0x80;
  *(undefined1 *)(param_1 + 0x19) = 0x80;
  *(undefined2 *)((int)param_1 + 0x66) = 0;
  param_1[0x11a] = 3;
  param_1[0x11d] = 3;
  param_1[4] = 1;
  FUN_00030df0(param_1,0x33424752);
  param_1[0x1c] = 8;
  param_1[0x117] = 100;
  param_1[0x1f] = 0x80;
  return;
}



/* ===== FUN_00030938 @ 00030938 size=712 ===== */

undefined4 FUN_00030938(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_10;
  uint local_c;
  
  *(int *)(param_1 + 0x484) = param_2;
  for (local_c = 0; local_c < 8; local_c = local_c + 1) {
    for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
      if (local_10 == 0) {
        iVar2 = 4;
      }
      else {
        iVar2 = 2;
      }
      uVar1 = FUN_0003052c(iVar2 * param_2 * 2);
      *(undefined4 *)(param_1 + (local_c * 3 + local_10 + 0x122) * 4) = uVar1;
      if (*(int *)(param_1 + (local_c * 3 + local_10 + 0x122) * 4) == 0) {
        return 0xfffffff4;
      }
      if (local_10 != 0) {
        uVar1 = FUN_0003052c(iVar2 * param_2 * 2);
        *(undefined4 *)(param_1 + (local_c * 3 + local_10 + 0x13a) * 4) = uVar1;
        if (*(int *)(param_1 + (local_c * 3 + local_10 + 0x13a) * 4) == 0) {
          return 0xfffffff4;
        }
      }
    }
  }
  local_10 = 0;
  while( true ) {
    if (2 < local_10) {
      return 0;
    }
    if (local_10 == 0) {
      iVar2 = 4;
    }
    else {
      iVar2 = 2;
    }
    uVar1 = FUN_0003052c(iVar2 * param_2);
    *(undefined4 *)(param_1 + (local_10 + 0x154) * 4 + 4) = uVar1;
    if (*(int *)(param_1 + (local_10 + 0x154) * 4 + 4) == 0) {
      return 0xfffffff4;
    }
    uVar1 = FUN_0003052c(iVar2 * param_2);
    *(undefined4 *)(param_1 + (local_10 + 0x158) * 4) = uVar1;
    if (*(int *)(param_1 + (local_10 + 0x158) * 4) == 0) {
      return 0xfffffff4;
    }
    uVar1 = FUN_0003052c(iVar2 * param_2 * 2);
    *(undefined4 *)(param_1 + (local_10 + 0x152) * 4) = uVar1;
    if (*(int *)(param_1 + (local_10 + 0x152) * 4) == 0) break;
    local_10 = local_10 + 1;
  }
  return 0xfffffff4;
}



/* ===== FUN_00030df0 @ 00030df0 size=4388 ===== */

undefined4 FUN_00030df0(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x68) = param_2;
  *(undefined4 *)(param_1 + 0xa8) = 1;
  *(undefined4 *)(param_1 + 0xa4) = 1;
  *(undefined1 *)(param_1 + 0x480) = 1;
  *(undefined1 *)(param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0xad) = 1;
  *(undefined1 *)(param_1 + 0xb0) = 1;
  *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
  if (param_2 == 0x34325258) goto LAB_0003155c;
  if (param_2 < 0x34325259) {
    if (param_2 != 0x32314742) {
      if (0x32314742 < param_2) {
        if (param_2 == 0x32315659) {
LAB_00031598:
          *(undefined1 *)(param_1 + 0xae) = 2;
          *(undefined1 *)(param_1 + 0xaf) = 2;
          *(undefined1 *)(param_1 + 0xb1) = 2;
          *(undefined1 *)(param_1 + 0xb2) = 2;
          *(undefined4 *)(param_1 + 0xa8) = 3;
          *(undefined4 *)(param_1 + 0x6c) = 1;
          goto LAB_00031794;
        }
        if (param_2 < 0x3231565a) {
          if (param_2 != 0x32315241) {
            if (param_2 < 0x32315242) {
              if (param_2 == 0x32314d4e) goto LAB_00031688;
              if (param_2 == 0x32314d59) goto LAB_0003158c;
              if (param_2 != 0x32314752) {
                return 0;
              }
              goto LAB_0003152c;
            }
            if (param_2 == 0x32315559) goto LAB_00031598;
            if (param_2 == 0x3231564e) goto LAB_00031694;
            if (param_2 != 0x32315258) {
              return 0;
            }
          }
        }
        else if (param_2 != 0x33524742) {
          if (param_2 < 0x33524743) {
            if (param_2 == 0x3234564e) {
LAB_0003172c:
              *(undefined1 *)(param_1 + 0xae) = 1;
              *(undefined1 *)(param_1 + 0xb1) = 1;
              *(undefined4 *)(param_1 + 0xa8) = 2;
              *(undefined4 *)(param_1 + 0x6c) = 1;
            }
            else {
              if (param_2 == 0x33424752) goto LAB_0003155c;
              if (param_2 != 0x32344d59) {
                return 0;
              }
LAB_000316d4:
              *(undefined4 *)(param_1 + 0xa4) = 3;
              *(undefined4 *)(param_1 + 0xa8) = 3;
              *(undefined1 *)(param_1 + 0xae) = 1;
              *(undefined1 *)(param_1 + 0xaf) = 1;
              *(undefined1 *)(param_1 + 0xb1) = 1;
              *(undefined1 *)(param_1 + 0xb2) = 1;
              *(undefined4 *)(param_1 + 0x6c) = 1;
            }
            goto LAB_00031794;
          }
          if (param_2 != 0x34324142) {
            if (param_2 < 0x34324143) {
              if (param_2 != 0x33565348) {
                return 0;
              }
LAB_0003177c:
              *(undefined4 *)(param_1 + 0x6c) = 2;
              goto LAB_00031794;
            }
            if (param_2 == 0x34324d59) goto LAB_000316d4;
            if (param_2 != 0x34325241) {
              return 0;
            }
          }
        }
        goto LAB_0003155c;
      }
      if (param_2 == 0x3132564e) {
LAB_00031694:
        *(undefined1 *)(param_1 + 0xae) = 2;
        *(undefined1 *)(param_1 + 0xb1) = 1;
        *(undefined4 *)(param_1 + 0xb8) = 0xfffffffe;
        *(undefined4 *)(param_1 + 0xa8) = 2;
        *(undefined4 *)(param_1 + 0x6c) = 1;
        goto LAB_00031794;
      }
      if (param_2 < 0x3132564f) {
        if (param_2 != 0x30314742) {
          if (param_2 < 0x30314743) {
            if ((param_2 != 0x30314142) && (param_2 != 0x30314247)) {
              if (param_2 != 0x20363159) {
                return 0;
              }
              goto LAB_0003156c;
            }
          }
          else {
            if (param_2 == 0x31324d4e) {
LAB_00031688:
              *(undefined4 *)(param_1 + 0xa4) = 2;
              goto LAB_00031694;
            }
            if (param_2 == 0x31324d59) {
LAB_0003158c:
              *(undefined4 *)(param_1 + 0xa4) = 3;
              goto LAB_00031598;
            }
            if (param_2 != 0x30314752) {
              return 0;
            }
          }
        }
      }
      else if (param_2 != 0x31384142) {
        if (param_2 < 0x31384143) {
          if (param_2 == 0x31364d59) goto LAB_000315e4;
          if (param_2 != 0x3136564e) {
            if (param_2 != 0x31364d4e) {
              return 0;
            }
LAB_0003163c:
            *(undefined4 *)(param_1 + 0xa4) = 2;
          }
LAB_00031648:
          *(undefined1 *)(param_1 + 0xae) = 1;
          *(undefined1 *)(param_1 + 0xb1) = 1;
          *(undefined4 *)(param_1 + 0xb8) = 0xfffffffe;
          *(undefined4 *)(param_1 + 0xa8) = 2;
          *(undefined4 *)(param_1 + 0x6c) = 1;
          goto LAB_00031794;
        }
        if ((param_2 != 0x32314142) && (param_2 != 0x32314247)) {
          if (param_2 != 0x31424752) {
            return 0;
          }
          goto LAB_0003155c;
        }
      }
    }
LAB_0003152c:
    *(undefined1 *)(param_1 + 0xac) = 1;
    *(undefined1 *)(param_1 + 0xae) = 1;
    *(undefined1 *)(param_1 + 0xb1) = 1;
    *(undefined4 *)(param_1 + 0xa8) = 2;
LAB_0003155c:
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  else {
    if (param_2 == 0x47524247) goto LAB_0003152c;
    if (0x47524247 < param_2) {
      if (param_2 != 0x52424752) {
        if (0x52424752 < param_2) {
          if (param_2 != 0x59555956) {
            if (param_2 < 0x59555957) {
              if (param_2 != 0x56595559) {
                if (param_2 == 0x59455247) goto LAB_0003156c;
                if (param_2 != 0x55595659) {
                  return 0;
                }
              }
            }
            else {
              if (param_2 == 0xa0363159) {
LAB_0003156c:
                *(undefined4 *)(param_1 + 0x6c) = 3;
                goto LAB_00031794;
              }
              if (0xa0363159 < param_2) {
                if ((param_2 != 0xb5315241) && (param_2 != 0xb5315258)) {
                  return 0;
                }
                goto LAB_0003155c;
              }
              if (param_2 != 0x59565955) {
                return 0;
              }
            }
          }
          *(undefined4 *)(param_1 + 0xb4) = 0xfffffffe;
          *(undefined4 *)(param_1 + 0x6c) = 1;
          goto LAB_00031794;
        }
        if (param_2 == 0x50323234) goto LAB_000315f0;
        if (param_2 < 0x50323235) {
          if (param_2 != 0x4f424752) {
            if (param_2 == 0x4f565559) goto LAB_0003157c;
            if (param_2 != 0x48524742) {
              return 0;
            }
          }
        }
        else {
          if (param_2 == 0x50565559) goto LAB_0003157c;
          if ((param_2 != 0x51424752) && (param_2 != 0x50424752)) {
            return 0;
          }
        }
      }
      goto LAB_0003155c;
    }
    if (param_2 != 0x34565559) {
      if (param_2 < 0x3456555a) {
        if (param_2 == 0x34343459) goto LAB_0003157c;
        if (param_2 < 0x3434345a) {
          if ((param_2 != 0x34325842) && (param_2 != 0x34343452)) {
            if (param_2 != 0x3432564e) {
              return 0;
            }
            goto LAB_0003172c;
          }
        }
        else if (param_2 != 0x34524742) {
          if (param_2 == 0x34565348) goto LAB_0003177c;
          if (param_2 != 0x34424752) {
            return 0;
          }
        }
      }
      else {
        if (param_2 == 0x36314d59) {
LAB_000315e4:
          *(undefined4 *)(param_1 + 0xa4) = 3;
LAB_000315f0:
          *(undefined1 *)(param_1 + 0xae) = 1;
          *(undefined1 *)(param_1 + 0xaf) = 1;
          *(undefined1 *)(param_1 + 0xb1) = 2;
          *(undefined1 *)(param_1 + 0xb2) = 2;
          *(undefined4 *)(param_1 + 0xa8) = 3;
          *(undefined4 *)(param_1 + 0x6c) = 1;
          goto LAB_00031794;
        }
        if (0x36314d59 < param_2) {
          if ((param_2 != 0x42474752) && (param_2 != 0x47425247)) {
            if (param_2 != 0x3631564e) {
              return 0;
            }
            goto LAB_00031648;
          }
          goto LAB_0003152c;
        }
        if (param_2 != 0x35315258) {
          if (param_2 == 0x36314d4e) goto LAB_0003163c;
          if (param_2 != 0x35315241) {
            return 0;
          }
        }
      }
      goto LAB_0003155c;
    }
LAB_0003157c:
    *(undefined4 *)(param_1 + 0x6c) = 1;
  }
LAB_00031794:
  if (param_2 == 0x34325258) goto LAB_00031e74;
  if (0x34325258 < param_2) {
    if (param_2 == 0x47524247) goto LAB_00031e84;
    if (0x47524247 < param_2) {
      if (param_2 != 0x52424752) {
        if (param_2 < 0x52424753) {
          if (param_2 == 0x50323234) goto LAB_00031ebc;
          if (param_2 < 0x50323235) {
            if ((param_2 != 0x4f424752) && (param_2 != 0x4f565559)) {
              if (param_2 != 0x48524742) {
                return 1;
              }
              goto LAB_00031e74;
            }
          }
          else if (((param_2 != 0x50565559) && (param_2 != 0x51424752)) && (param_2 != 0x50424752))
          {
            return 1;
          }
        }
        else if (param_2 != 0x59555956) {
          if (param_2 < 0x59555957) {
            if (param_2 != 0x56595559) {
              if (param_2 == 0x59455247) goto LAB_00031e44;
              if (param_2 != 0x55595659) {
                return 1;
              }
            }
          }
          else if (param_2 != 0xa0363159) {
            if (param_2 < 0xa036315a) {
              if (param_2 != 0x59565955) {
                return 1;
              }
            }
            else if ((param_2 != 0xb5315241) && (param_2 != 0xb5315258)) {
              return 1;
            }
          }
        }
      }
      goto LAB_00031e54;
    }
    if (param_2 == 0x34565559) goto LAB_00031e74;
    if (param_2 < 0x3456555a) {
      if (param_2 != 0x34343459) {
        if (param_2 < 0x3434345a) {
          if (param_2 != 0x34325842) {
            if (param_2 != 0x34343452) {
              if (param_2 != 0x3432564e) {
                return 1;
              }
              goto LAB_00031ee4;
            }
            goto LAB_00031e54;
          }
        }
        else if (((param_2 != 0x34524742) && (param_2 != 0x34565348)) && (param_2 != 0x34424752)) {
          return 1;
        }
LAB_00031e74:
        *(undefined4 *)(param_1 + 0x43c) = 8;
        return 1;
      }
    }
    else {
      if (param_2 == 0x36314d59) goto LAB_00031ebc;
      if (0x36314d59 < param_2) {
        if (((param_2 != 0x42474752) && (param_2 != 0x47425247)) && (param_2 != 0x3631564e)) {
          return 1;
        }
        goto LAB_00031e84;
      }
      if (param_2 != 0x35315258) {
        if (param_2 == 0x36314d4e) goto LAB_00031e84;
        if (param_2 != 0x35315241) {
          return 1;
        }
      }
    }
LAB_00031e54:
    *(undefined4 *)(param_1 + 0x43c) = 4;
    return 1;
  }
  if (param_2 == 0x32314742) goto LAB_00031ea0;
  if (param_2 < 0x32314743) {
    if (param_2 != 0x3132564e) {
      if (param_2 < 0x3132564f) {
        if (param_2 != 0x30314742) {
          if (param_2 < 0x30314743) {
            if ((param_2 != 0x30314142) && (param_2 != 0x30314247)) {
              if (param_2 != 0x20363159) {
                return 1;
              }
              goto LAB_00031e54;
            }
          }
          else {
            if (param_2 == 0x31324d4e) goto LAB_00031e84;
            if (param_2 == 0x31324d59) goto LAB_00031ebc;
            if (param_2 != 0x30314752) {
              return 1;
            }
          }
        }
LAB_00031ea0:
        *(undefined4 *)(param_1 + 0x43c) = 4;
        *(undefined4 *)(param_1 + 0x440) = 4;
        return 1;
      }
      if (param_2 != 0x31384142) {
        if (0x31384142 < param_2) {
          if ((param_2 != 0x32314142) && (param_2 != 0x32314247)) {
            if (param_2 != 0x31424752) {
              return 1;
            }
LAB_00031e44:
            *(undefined4 *)(param_1 + 0x43c) = 2;
            return 1;
          }
          goto LAB_00031ea0;
        }
        if (param_2 == 0x31364d59) goto LAB_00031ebc;
        if ((param_2 != 0x3136564e) && (param_2 != 0x31364d4e)) {
          return 1;
        }
      }
    }
  }
  else {
    if (param_2 == 0x32315659) goto LAB_00031ebc;
    if (0x32315659 < param_2) {
      if (param_2 != 0x33524742) {
        if (0x33524742 < param_2) {
          if (param_2 != 0x34324142) {
            if (param_2 < 0x34324143) {
              if (param_2 != 0x33565348) {
                return 1;
              }
              goto LAB_00031e64;
            }
            if (param_2 == 0x34324d59) goto LAB_00031ebc;
            if (param_2 != 0x34325241) {
              return 1;
            }
          }
          goto LAB_00031e74;
        }
        if (param_2 == 0x3234564e) {
LAB_00031ee4:
          *(undefined4 *)(param_1 + 0x43c) = 2;
          *(undefined4 *)(param_1 + 0x440) = 4;
          return 1;
        }
        if (param_2 != 0x33424752) {
          if (param_2 != 0x32344d59) {
            return 1;
          }
          goto LAB_00031ebc;
        }
      }
LAB_00031e64:
      *(undefined4 *)(param_1 + 0x43c) = 6;
      return 1;
    }
    if (param_2 == 0x32315241) goto LAB_00031e54;
    if (param_2 < 0x32315242) {
      if (param_2 != 0x32314d4e) {
        if (param_2 != 0x32314d59) {
          if (param_2 != 0x32314752) {
            return 1;
          }
          goto LAB_00031ea0;
        }
LAB_00031ebc:
        *(undefined4 *)(param_1 + 0x43c) = 2;
        *(undefined4 *)(param_1 + 0x440) = 2;
        *(undefined4 *)(param_1 + 0x444) = 2;
        return 1;
      }
    }
    else {
      if (param_2 == 0x32315559) goto LAB_00031ebc;
      if (param_2 != 0x3231564e) {
        if (param_2 != 0x32315258) {
          return 1;
        }
        goto LAB_00031e54;
      }
    }
  }
LAB_00031e84:
  *(undefined4 *)(param_1 + 0x43c) = 2;
  *(undefined4 *)(param_1 + 0x440) = 2;
  return 1;
}



/* ===== FUN_00031f14 @ 00031f14 size=256 ===== */

void FUN_00031f14(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  param_1[6] = *param_2;
  param_1[7] = iVar1;
  param_1[8] = iVar2;
  param_1[9] = iVar3;
  iVar1 = param_3[1];
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  param_1[10] = *param_3;
  param_1[0xb] = iVar1;
  param_1[0xc] = iVar2;
  param_1[0xd] = iVar3;
  iVar1 = __aeabi_uidiv(param_1[0xc] * *param_1 + param_1[8] + -1,param_1[8]);
  param_1[3] = iVar1;
  param_1[3] = param_1[3] & 0xfffffffe;
  if ((uint)param_1[0x121] < (uint)param_1[3]) {
    param_1[3] = param_1[0x121];
  }
  if ((uint)param_1[3] < 2) {
    param_1[3] = 2;
  }
  *(undefined1 *)((int)param_1 + 0x481) = 1;
  return;
}



/* ===== FUN_00032014 @ 00032014 size=416 ===== */

void FUN_00032014(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint local_c;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[4] = param_4;
  param_1[2] = param_3;
  if (((param_4 == 3) || (param_4 == 2)) || (param_4 == 7)) {
    param_1[2] = (uint)param_1[2] >> 1;
  }
  param_1[3] = param_2;
  param_1[6] = 0;
  param_1[7] = param_1[6];
  param_1[8] = param_2;
  param_1[9] = param_3;
  param_1[10] = 0;
  param_1[0xb] = param_1[10];
  param_1[0xc] = param_2;
  param_1[0xd] = param_1[2];
  for (local_c = 0; local_c < (uint)param_1[0x2a]; local_c = local_c + 1) {
    iVar1 = __aeabi_uidiv(param_2 * param_1[local_c + 0x10f],
                          (uint)*(byte *)((int)param_1 + local_c + 0xb0) << 1);
    param_1[local_c + 0x112] = iVar1;
  }
  *(undefined1 *)((int)param_1 + 0x482) = 1;
  return;
}



/* ===== FUN_000321b4 @ 000321b4 size=76 ===== */

undefined4 FUN_000321b4(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x454) == 2) {
    uVar1 = 7;
  }
  else if (*(int *)(param_1 + 0x454) == 5) {
    uVar1 = 0xe;
  }
  else {
    uVar1 = 0x15;
  }
  return uVar1;
}



/* ===== FUN_00032200 @ 00032200 size=84 ===== */

undefined4 FUN_00032200(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x454);
  if (iVar1 != 2) {
    if (iVar1 == 5) {
      return 0x15;
    }
    if (iVar1 != 0) {
      return 0xe;
    }
  }
  return 0;
}



/* ===== FUN_00032254 @ 00032254 size=128 ===== */

undefined2 FUN_00032254(int param_1)

{
  if (param_1 < 0) {
    param_1 = 0;
  }
  if (0xfef < param_1) {
    param_1 = 0xff0;
  }
  return *(undefined2 *)(&DAT_00049c98 + param_1 * 2);
}



/* ===== FUN_000322d4 @ 000322d4 size=128 ===== */

undefined2 FUN_000322d4(int param_1)

{
  if (param_1 < 0) {
    param_1 = 0;
  }
  if (0xfef < param_1) {
    param_1 = 0xff0;
  }
  return *(undefined2 *)(&DAT_0004bc7c + param_1 * 2);
}



/* ===== FUN_00032354 @ 00032354 size=676 ===== */

void FUN_00032354(int param_1,int param_2,int param_3,int param_4,uint *param_5,int *param_6,
                 int *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint local_10;
  uint local_c;
  
  param_2 = param_2 >> 4;
  param_3 = param_3 >> 4;
  param_4 = param_4 >> 4;
  iVar2 = param_3;
  if (param_3 < param_2) {
    iVar2 = param_2;
  }
  iVar1 = param_4;
  if (param_4 < iVar2) {
    iVar1 = iVar2;
  }
  *param_7 = iVar1;
  if (iVar1 == 0) {
    *param_5 = 0;
    *param_6 = 0;
  }
  else {
    iVar2 = param_3;
    if (param_2 <= param_3) {
      iVar2 = param_2;
    }
    iVar3 = param_4;
    if (iVar2 <= param_4) {
      iVar3 = iVar2;
    }
    iVar3 = iVar1 - iVar3;
    iVar2 = __aeabi_idiv(iVar3 * 0xff + iVar1 / 2,iVar1);
    *param_6 = iVar2;
    if (iVar2 == 0) {
      *param_5 = 0;
    }
    else {
      if (*(int *)(param_1 + 0x84) == 0x80) {
        uVar4 = 0x3c;
      }
      else {
        uVar4 = 0x55;
      }
      if (iVar1 == param_2) {
        local_c = param_3 - param_4;
        local_10 = 0;
      }
      else if (iVar1 == param_3) {
        local_c = param_4 - param_2;
        local_10 = uVar4;
      }
      else {
        local_c = param_2 - param_3;
        local_10 = uVar4 << 1;
      }
      iVar2 = __aeabi_idiv((uVar4 / 2) * local_c + iVar3 / 2,iVar3);
      local_c = iVar2 + local_10;
      if (*(int *)(param_1 + 0x84) == 0x80) {
        if ((int)local_c < 0) {
          local_c = local_c + 0xb4;
        }
        else if (0xb4 < (int)local_c) {
          local_c = local_c - 0xb4;
        }
      }
      else {
        local_c = local_c & 0xff;
      }
      *param_5 = local_c;
    }
  }
  return;
}



/* ===== FUN_000325f8 @ 000325f8 size=292 ===== */

void FUN_000325f8(int *param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,
                 int *param_7,int *param_8)

{
  *param_6 = (param_2 * *param_1 + param_3 * param_1[1] + param_4 * param_1[2] >> 0x10) +
             param_5 * 0x10;
  *param_7 = (param_2 * param_1[3] + param_3 * param_1[4] + param_4 * param_1[5] >> 0x10) + 0x800;
  *param_8 = (param_2 * param_1[6] + param_3 * param_1[7] + param_4 * param_1[8] >> 0x10) + 0x800;
  return;
}



/* ===== FUN_0003271c @ 0003271c size=1064 ===== */

void FUN_0003271c(int param_1,int param_2,undefined4 param_3,int param_4,int *param_5,int *param_6,
                 int *param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  
  bVar6 = *(int *)(param_1 + 0x90) == 1;
  if (bVar6) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0x10;
  }
  switch(*(undefined4 *)(param_1 + 0x88)) {
  case 1:
    if (bVar6) {
      uVar1 = 0x7b8;
    }
    else {
      uVar1 = 0x7dc;
    }
    FUN_000325f8(uVar1 | 0x50000,param_2,param_3,param_4,uVar5,param_5,param_6,param_7);
    break;
  default:
    if (bVar6) {
      uVar1 = 0x8d4;
    }
    else {
      uVar1 = 0x800;
    }
    FUN_000325f8(uVar1 | 0x50000,param_2,param_3,param_4,uVar5,param_5,param_6,param_7);
    break;
  case 3:
    FUN_000325f8(&DAT_000507dc,param_2,param_3,param_4,0x10,param_5,param_6,param_7);
    break;
  case 4:
    FUN_000325f8(&DAT_00050800,param_2,param_3,param_4,0x10,param_5,param_6,param_7);
    break;
  case 6:
    if (bVar6) {
      uVar1 = 0x824;
    }
    else {
      uVar1 = 0x848;
    }
    FUN_000325f8(uVar1 | 0x50000,param_2,param_3,param_4,uVar5,param_5,param_6,param_7);
    break;
  case 7:
    iVar2 = FUN_00032254(param_2);
    iVar3 = FUN_00032254(param_3);
    iVar4 = FUN_00032254(param_4);
    iVar3 = FUN_000322d4(iVar2 * 0x42fd + iVar3 * 0xace4 + iVar4 * 0xf1f >> 0x10);
    iVar2 = iVar3;
    if (!bVar6) {
      iVar2 = (iVar3 * 0xdb) / 0xff + 0x100;
    }
    *param_5 = iVar2;
    if (iVar3 < param_4) {
      iVar2 = DAT_00050880;
      if (bVar6) {
        iVar2 = DAT_00050870;
      }
      *param_6 = ((param_4 - iVar3) * iVar2 >> 0x10) + 0x800;
    }
    else {
      iVar2 = DAT_0005087c;
      if (bVar6) {
        iVar2 = DAT_0005086c;
      }
      *param_6 = ((param_4 - iVar3) * iVar2 >> 0x10) + 0x800;
    }
    if (iVar3 < param_2) {
      iVar2 = DAT_00050888;
      if (bVar6) {
        iVar2 = DAT_00050878;
      }
      *param_7 = ((param_2 - iVar3) * iVar2 >> 0x10) + 0x800;
    }
    else {
      iVar2 = DAT_00050884;
      if (bVar6) {
        iVar2 = DAT_00050874;
      }
      *param_7 = ((param_2 - iVar3) * iVar2 >> 0x10) + 0x800;
    }
    break;
  case 8:
    if (bVar6) {
      uVar1 = 0x88c;
    }
    else {
      uVar1 = 0x8b0;
    }
    FUN_000325f8(uVar1 | 0x50000,param_2,param_3,param_4,uVar5,param_5,param_6,param_7);
  }
  return;
}



/* ===== FUN_00032b64 @ 00032b64 size=556 ===== */

void FUN_00032b64(int *param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,
                 int *param_7,int *param_8)

{
  int iVar1;
  
  param_2 = param_2 + param_5 * -0x10;
  param_3 = param_3 + -0x800;
  param_4 = param_4 + -0x800;
  *param_6 = param_2 * *param_1 + param_3 * param_1[1] + param_4 * param_1[2];
  *param_7 = param_2 * param_1[3] + param_3 * param_1[4] + param_4 * param_1[5];
  *param_8 = param_2 * param_1[6] + param_3 * param_1[7] + param_4 * param_1[8];
  iVar1 = *param_6 >> 0xc;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (0xfef < iVar1) {
    iVar1 = 0xff0;
  }
  *param_6 = iVar1;
  iVar1 = *param_7 >> 0xc;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (0xfef < iVar1) {
    iVar1 = 0xff0;
  }
  *param_7 = iVar1;
  iVar1 = *param_8 >> 0xc;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (0xfef < iVar1) {
    iVar1 = 0xff0;
  }
  *param_8 = iVar1;
  return;
}



/* ===== FUN_00032d90 @ 00032d90 size=1212 ===== */

void FUN_00032d90(int param_1,int param_2,int param_3,int param_4,int *param_5,undefined4 *param_6,
                 int *param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  bVar6 = *(int *)(param_1 + 0x90) == 1;
  if (bVar6) {
    uVar3 = 0;
    iVar4 = 0xff0;
  }
  else {
    uVar3 = 0x10;
    iVar4 = 0x128f;
  }
  switch(*(undefined4 *)(param_1 + 0x88)) {
  case 1:
    if (bVar6) {
      uVar1 = 0x8f8;
    }
    else {
      uVar1 = 0x91c;
    }
    FUN_00032b64(uVar1 | 0x50000,param_2,param_3,param_4,uVar3,param_5,param_6,param_7);
    break;
  default:
    if (bVar6) {
      uVar1 = 0xa14;
    }
    else {
      uVar1 = 0x940;
    }
    FUN_00032b64(uVar1 | 0x50000,param_2,param_3,param_4,uVar3,param_5,param_6,param_7);
    break;
  case 3:
    FUN_00032b64(&DAT_0005091c,param_2,param_3,param_4,0x10,param_5,param_6,param_7);
    break;
  case 4:
    FUN_00032b64(&DAT_00050940,param_2,param_3,param_4,0x10,param_5,param_6,param_7);
    break;
  case 6:
    if (bVar6) {
      uVar1 = 0x964;
    }
    else {
      uVar1 = 0x988;
    }
    FUN_00032b64(uVar1 | 0x50000,param_2,param_3,param_4,uVar3,param_5,param_6,param_7);
    break;
  case 7:
    if (bVar6) {
      iVar5 = 0;
    }
    else {
      iVar5 = 0x100;
    }
    param_2 = param_2 - iVar5;
    param_3 = param_3 + -0x800;
    param_4 = param_4 + -0x800;
    if (param_3 < 1) {
      iVar5 = DAT_000509bc;
      if (bVar6) {
        iVar5 = DAT_000509ac;
      }
      *param_7 = param_2 * iVar4 + param_3 * iVar5;
    }
    else {
      iVar5 = DAT_000509c0;
      if (bVar6) {
        iVar5 = DAT_000509b0;
      }
      *param_7 = param_2 * iVar4 + param_3 * iVar5;
    }
    *param_7 = *param_7 >> 0xc;
    if (param_4 < 1) {
      iVar5 = DAT_000509c4;
      if (bVar6) {
        iVar5 = DAT_000509b4;
      }
      *param_5 = param_2 * iVar4 + param_4 * iVar5;
    }
    else {
      iVar5 = DAT_000509c8;
      if (bVar6) {
        iVar5 = DAT_000509b8;
      }
      *param_5 = param_2 * iVar4 + param_4 * iVar5;
    }
    *param_5 = *param_5 >> 0xc;
    iVar4 = FUN_00032254(*param_5);
    iVar5 = FUN_00032254(*param_7);
    if (bVar6) {
      uVar3 = 0xff;
    }
    else {
      uVar3 = 0xdb;
    }
    uVar3 = __aeabi_idiv(param_2 * 0xff,uVar3);
    iVar2 = FUN_00032254(uVar3);
    uVar3 = FUN_000322d4(iVar2 * 0x1782 + iVar4 * -0x62d + iVar5 * -0x165 >> 0xc);
    *param_6 = uVar3;
    break;
  case 8:
    if (bVar6) {
      uVar1 = 0x9cc;
    }
    else {
      uVar1 = 0x9f0;
    }
    FUN_00032b64(uVar1 | 0x50000,param_2,param_3,param_4,uVar3,param_5,param_6,param_7);
  }
  return;
}



/* ===== FUN_0003326c @ 0003326c size=4468 ===== */

uint FUN_0003326c(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint local_68;
  undefined1 local_64 [4];
  undefined1 local_60 [4];
  undefined4 local_5c;
  undefined4 local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  char local_15;
  uint local_14;
  
  local_24 = (uint)(byte)(&DAT_0004994c)[param_2 * 3];
  local_28 = (uint)(byte)(&DAT_0004994d)[param_2 * 3];
  local_2c = (uint)(byte)(&DAT_0004994e)[param_2 * 3];
  local_15 = '\0';
  local_14 = param_2;
  if (param_2 == 0x17) {
    local_14 = FUN_000321b4(param_1);
    local_24 = (uint)(byte)(&DAT_0004994c)[local_14 * 3];
    local_28 = (uint)(byte)(&DAT_0004994d)[local_14 * 3];
    local_2c = (uint)(byte)(&DAT_0004994e)[local_14 * 3];
    uVar3 = local_14;
  }
  else if (param_2 == 0x16) {
    local_14 = FUN_00032200(param_1);
    local_24 = (uint)(byte)(&DAT_0004994c)[local_14 * 3];
    local_28 = (uint)(byte)(&DAT_0004994d)[local_14 * 3];
    local_2c = (uint)(byte)(&DAT_0004994e)[local_14 * 3];
    uVar3 = local_14;
  }
  else if (*(int *)(param_1 + 0x454) == 0x15) {
    local_2c = FUN_00030558(0x100);
    uVar3 = local_2c;
    local_28 = local_2c;
    local_24 = local_2c;
  }
  else if (param_2 == 0x18) {
    iVar4 = *(int *)(param_1 + 0x5c);
    uVar3 = FUN_00030558(0xc4);
    local_2c = iVar4 + uVar3;
    local_28 = local_2c;
    local_24 = local_2c;
  }
  else {
    uVar3 = param_1;
    if (0x18 < (int)param_2) {
      local_2c = param_2 - 0x19;
      local_28 = local_2c;
      local_24 = local_2c;
    }
  }
  if ((*(int *)(param_1 + 0x454) == 2) && ((int)local_14 < 8)) {
    local_24 = *(uint *)(&DAT_0004dc60 +
                        local_14 * 0xc + *(int *)(param_1 + 0x80) * 0x60 +
                        *(int *)(param_1 + 0x70) * 0x300);
    local_28 = *(uint *)(&DAT_0004dc64 +
                        local_14 * 0xc + *(int *)(param_1 + 0x80) * 0x60 +
                        *(int *)(param_1 + 0x70) * 0x300);
    uVar3 = 0x60;
    local_2c = *(uint *)(&DAT_0004dc68 +
                        local_14 * 0xc + *(int *)(param_1 + 0x70) * 0x300 +
                        *(int *)(param_1 + 0x80) * 0x60);
  }
  else {
    local_24 = local_24 << 4;
    local_28 = local_28 << 4;
    local_2c = local_2c << 4;
  }
  if ((*(int *)(param_1 + 0x58) == 1) || (*(int *)(param_1 + 0x6c) == 3)) {
    local_2c = (int)(local_24 * 0x3637 + local_28 * 0xb660 + local_2c * 0x1269) >> 0x10;
    local_28 = local_2c;
    local_24 = local_2c;
  }
  if (((*(int *)(param_1 + 0xa0) == 1) && (*(int *)(param_1 + 0x9c) == 2)) &&
     (*(int *)(param_1 + 0x6c) == 0)) {
    local_2c = (int)(local_2c * 0xdb) / 0xff + 0x100;
    local_28 = (int)(local_28 * 0xdb) / 0xff + 0x100;
    local_24 = (int)(local_24 * 0xdb) / 0xff + 0x100;
  }
  else if (((*(int *)(param_1 + 0xa0) != 1) && (*(int *)(param_1 + 0x9c) == 1)) &&
          (*(int *)(param_1 + 0x6c) == 0)) {
    local_40 = 0x100;
    local_44 = 0xeb0;
    if ((int)local_24 < 0x100) {
      local_24 = 0x100;
    }
    uVar1 = local_24;
    if (0xeaf < (int)local_24) {
      uVar1 = 0xeb0;
    }
    local_4c = 0x100;
    local_50 = 0xeb0;
    if ((int)local_28 < 0x100) {
      local_28 = 0x100;
    }
    uVar6 = local_28;
    if (0xeaf < (int)local_28) {
      uVar6 = 0xeb0;
    }
    local_58 = 0x100;
    local_5c = 0xeb0;
    if ((int)local_2c < 0x100) {
      local_2c = 0x100;
    }
    uVar2 = local_2c;
    if (0xeaf < (int)local_2c) {
      uVar2 = 0xeb0;
    }
    local_54 = local_2c;
    local_48 = local_28;
    local_3c = local_24;
    local_2c = (int)((uVar2 - 0x100) * 0xff) / 0xdb;
    local_28 = (int)((uVar6 - 0x100) * 0xff) / 0xdb;
    local_24 = (int)((uVar1 - 0x100) * 0xff) / 0xdb;
  }
  if ((((*(char *)(param_1 + 0x62) == -0x80) && (*(char *)(param_1 + 99) == -0x80)) &&
      ((*(char *)(param_1 + 100) == -0x80 && (*(short *)(param_1 + 0x66) == 0)))) ||
     (*(int *)(param_1 + 0x6c) == 3)) {
    if (((*(char *)(param_1 + 0x62) != -0x80) || (*(char *)(param_1 + 99) != -0x80)) &&
       (*(int *)(param_1 + 0x6c) == 3)) {
      iVar5 = (uint)*(byte *)(param_1 + 99) * (local_24 - 0x100);
      iVar4 = iVar5 + 0x7f;
      if (-1 < iVar5) {
        iVar4 = iVar5;
      }
      local_24 = (uint)*(byte *)(param_1 + 0x62) * 0x10 + (iVar4 >> 7) + -0x700;
    }
  }
  else {
    FUN_0003271c(param_1,local_24,local_28,local_2c,&local_30,&local_34,&local_38);
    iVar5 = (uint)*(byte *)(param_1 + 99) * (local_30 + -0x100);
    iVar4 = iVar5 + 0x7f;
    if (-1 < iVar5) {
      iVar4 = iVar5;
    }
    local_30 = (uint)*(byte *)(param_1 + 0x62) * 0x10 + (iVar4 >> 7) + -0x700;
    local_1c = ((local_34 + -0x800) *
               (int)(char)(&DAT_00050598)[((int)*(short *)(param_1 + 0x66) + 0xc0U) % 0x101]) / 0x7f
               + (int)((local_38 - 0x800) * (int)(char)(&DAT_00050618)[*(short *)(param_1 + 0x66)])
                 / 0x7f;
    iVar4 = (local_34 + -0x800) * (int)(char)(&DAT_00050618)[*(short *)(param_1 + 0x66)];
    uVar3 = iVar4 * -0x7efdfbf7;
    local_20 = (int)((local_38 - 0x800) *
                    (int)(char)(&DAT_00050598)[((int)*(short *)(param_1 + 0x66) + 0xc0U) % 0x101]) /
               0x7f - iVar4 / 0x7f;
    iVar5 = (uint)*(byte *)(param_1 + 100) * local_1c * (uint)*(byte *)(param_1 + 99);
    iVar4 = iVar5 + 0x3fff;
    if (-1 < iVar5) {
      iVar4 = iVar5;
    }
    local_34 = (iVar4 >> 0xe) + 0x800;
    iVar5 = (uint)*(byte *)(param_1 + 100) * local_20 * (uint)*(byte *)(param_1 + 99);
    iVar4 = iVar5 + 0x3fff;
    if (-1 < iVar5) {
      iVar4 = iVar5;
    }
    local_38 = (iVar4 >> 0xe) + 0x800;
    if (*(int *)(param_1 + 0x6c) == 1) {
      local_15 = '\x01';
    }
    else {
      uVar3 = FUN_00032d90(param_1,local_30,local_34,local_38,&local_24,&local_28,&local_2c);
    }
  }
  switch(*(undefined4 *)(param_1 + 0x6c)) {
  case 0:
    if (*(int *)(param_1 + 0x90) == 2) {
      local_24 = (int)(local_24 * 0xdb) / 0xff + 0x100;
      local_28 = (int)(local_28 * 0xdb) / 0xff + 0x100;
      local_2c = (int)(local_2c * 0xdb) / 0xff + 0x100;
    }
    uVar1 = local_24;
    uVar3 = local_28;
    uVar6 = *(uint *)(param_1 + 0x68);
    local_28._0_1_ = (undefined1)((int)local_28 >> 6);
    if (uVar6 == 0x48524742) {
      local_24._0_1_ = (undefined1)((int)local_24 >> 6);
      uVar2 = (int)local_2c >> 6;
      goto LAB_0003435c;
    }
    uVar2 = (int)local_2c >> 7;
    local_24._0_1_ = (undefined1)((int)local_24 >> 7);
    if (uVar6 < 0x48524743) {
      if (uVar6 != 0x32315258) {
        if (uVar6 < 0x32315259) {
          if (uVar6 == 0x31424752) {
            local_24._0_1_ = (undefined1)((int)uVar1 >> 9);
            local_28._0_1_ = (undefined1)((int)uVar3 >> 9);
            uVar2 = (int)local_2c >> 10;
          }
          else {
            if (uVar6 == 0x32315241) goto LAB_000342bc;
LAB_00034334:
            local_24._0_1_ = (undefined1)((int)uVar1 >> 4);
            local_28._0_1_ = (undefined1)((int)uVar3 >> 4);
            uVar2 = (int)local_2c >> 4;
          }
          goto LAB_0003435c;
        }
        if ((uVar6 == 0x35315241) || (uVar6 == 0x35315258)) goto LAB_000342e4;
        if (uVar6 != 0x34343452) goto LAB_00034334;
      }
LAB_000342bc:
      local_24._0_1_ = (undefined1)(uVar1 >> 8);
      local_28._0_1_ = (undefined1)(uVar3 >> 8);
      uVar2 = (int)local_2c >> 8;
      goto LAB_0003435c;
    }
    if (uVar6 == 0x51424752) {
LAB_000342e4:
      local_28._0_1_ = (undefined1)((int)uVar3 >> 7);
    }
    else if (uVar6 < 0x51424753) {
      if (uVar6 == 0x4f424752) goto LAB_000342e4;
      if (uVar6 != 0x50424752) goto LAB_00034334;
    }
    else {
      if ((uVar6 == 0xb5315241) || (uVar6 == 0xb5315258)) goto LAB_000342e4;
      if (uVar6 != 0x52424752) goto LAB_00034334;
    }
LAB_0003435c:
    local_2c = uVar2;
    *(undefined1 *)(param_1 + param_2 * 3 + 0xc0) = (undefined1)local_24;
    *(undefined1 *)(param_1 + param_2 * 3 + 0xc1) = (undefined1)local_28;
    uVar3 = local_2c & 0xff;
    *(char *)(param_1 + param_2 * 3 + 0xc2) = (char)local_2c;
    break;
  case 1:
    if (local_15 != '\x01') {
      FUN_0003271c(param_1,local_24,local_28,local_2c,&local_30,&local_34,&local_38);
    }
    local_30 = local_30 >> 4;
    local_34 = local_34 >> 4;
    local_38 = (int)local_38 >> 4;
    if (*(int *)(param_1 + 0x90) == 2) {
      if (local_30 < 0x10) {
        local_30 = 0x10;
      }
      if (0xea < local_30) {
        local_30 = 0xeb;
      }
      if (local_34 < 0x10) {
        local_34 = 0x10;
      }
      if (0xef < local_34) {
        local_34 = 0xf0;
      }
      if ((int)local_38 < 0x10) {
        local_38 = 0x10;
      }
      if (0xef < (int)local_38) {
        local_38 = 0xf0;
      }
    }
    else {
      if (local_30 < 1) {
        local_30 = 1;
      }
      if (0xfd < local_30) {
        local_30 = 0xfe;
      }
      if (local_34 < 1) {
        local_34 = 1;
      }
      if (0xfd < local_34) {
        local_34 = 0xfe;
      }
      if ((int)local_38 < 1) {
        local_38 = 1;
      }
      if (0xfd < (int)local_38) {
        local_38 = 0xfe;
      }
    }
    iVar4 = *(int *)(param_1 + 0x68);
    if (iVar4 == 0x4f565559) {
      local_34 = local_34 >> 3;
      local_38 = (int)local_38 >> 3;
      local_30 = local_30 >> 3;
    }
    else if (iVar4 == 0x50565559) {
      local_34 = local_34 >> 2;
      local_38 = (int)local_38 >> 3;
      local_30 = local_30 >> 3;
    }
    else if (iVar4 == 0x34343459) {
      local_34 = local_34 >> 4;
      local_38 = (int)local_38 >> 4;
      local_30 = local_30 >> 4;
    }
    *(char *)(param_1 + param_2 * 3 + 0xc0) = (char)local_30;
    *(char *)(param_1 + param_2 * 3 + 0xc1) = (char)local_34;
    uVar3 = local_38 & 0xff;
    *(char *)(param_1 + param_2 * 3 + 0xc2) = (char)local_38;
    break;
  case 2:
    FUN_00032354(param_1,local_24,local_28,local_2c,local_60,local_64,&local_68);
    *(undefined1 *)(param_1 + param_2 * 3 + 0xc0) = local_60[0];
    *(undefined1 *)(param_1 + param_2 * 3 + 0xc1) = local_64[0];
    uVar3 = local_68 & 0xff;
    *(char *)(param_1 + param_2 * 3 + 0xc2) = (char)local_68;
    break;
  case 3:
    uVar3 = (int)local_24 >> 4 & 0xff;
    *(char *)(param_1 + param_2 * 3 + 0xc0) = (char)((int)local_24 >> 4);
  }
  return uVar3;
}



/* ===== FUN_000343f0 @ 000343f0 size=76 ===== */

void FUN_000343f0(undefined4 param_1)

{
  undefined4 local_c;
  
  for (local_c = 0; local_c < 0x119; local_c = local_c + 1) {
    FUN_0003326c(param_1,local_c);
  }
  return;
}



/* ===== FUN_0003443c @ 0003443c size=8376 ===== */

void FUN_0003443c(int param_1,byte *param_2,int param_3,byte param_4)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  byte local_9;
  
  uVar1 = *(int *)(param_1 + 0x43c) * (uint)param_4 >> 1;
  local_9 = *(byte *)(param_1 + 0x60);
  if ((((*(char *)(param_1 + 0x61) != '\0') && (param_3 != 5)) && (param_3 != 0x13)) &&
     (param_3 != 0xc)) {
    local_9 = 0;
  }
  if (param_3 == 0x18) {
    FUN_0003326c(param_1,0x18);
  }
  bVar5 = *(byte *)(param_1 + param_3 * 3 + 0xc0);
  bVar3 = *(byte *)(param_1 + param_3 * 3 + 0xc1);
  bVar2 = *(byte *)(param_1 + param_3 * 3 + 0xc2);
  uVar6 = *(uint *)(param_1 + 0x68);
  if (uVar6 == 0x34325258) {
LAB_0003562c:
    local_9 = 0;
LAB_00035634:
    param_2[uVar1] = bVar2;
    param_2[uVar1 + 1] = bVar3;
    param_2[uVar1 + 2] = bVar5;
    param_2[uVar1 + 3] = local_9;
    return;
  }
  if (uVar6 < 0x34325259) {
    if (uVar6 == 0x32314742) {
      bVar4 = bVar2;
      if (param_4 != 0) {
        bVar4 = bVar3;
      }
      param_2[uVar1] = bVar4 << 4;
      if (param_4 != 0) {
        bVar2 = bVar3;
      }
      param_2[uVar1 + 1] = bVar2 >> 4;
      bVar2 = bVar3;
      if (param_4 != 0) {
        bVar2 = bVar5;
      }
      param_2[uVar1 + 8] = bVar2 << 4;
      if (param_4 != 0) {
        bVar3 = bVar5;
      }
      param_2[uVar1 + 9] = bVar3 >> 4;
      param_2[uVar1] = param_2[uVar1] | param_2[uVar1] >> 4;
      param_2[uVar1 + 8] = param_2[uVar1 + 8] | param_2[uVar1 + 8] >> 4;
      return;
    }
    if (uVar6 < 0x32314743) {
      if (uVar6 == 0x3132564e) {
LAB_00034dd0:
        param_2[uVar1] = bVar5;
        if (param_4 != 0) {
          param_2[8] = (byte)(((uint)param_2[8] + (uint)bVar2) / 2);
          param_2[9] = (byte)(((uint)param_2[9] + (uint)bVar3) / 2);
          return;
        }
        param_2[8] = bVar2;
        param_2[9] = bVar3;
        return;
      }
      if (uVar6 < 0x3132564f) {
        if (uVar6 == 0x30314742) {
          bVar4 = bVar2;
          if (param_4 != 0) {
            bVar4 = bVar3;
          }
          param_2[uVar1] = bVar4 << 2;
          if (param_4 != 0) {
            bVar2 = bVar3;
          }
          param_2[uVar1 + 1] = bVar2 >> 6;
          bVar2 = bVar3;
          if (param_4 != 0) {
            bVar2 = bVar5;
          }
          param_2[uVar1 + 8] = bVar2 << 2;
          if (param_4 != 0) {
            bVar3 = bVar5;
          }
          param_2[uVar1 + 9] = bVar3 >> 6;
          param_2[uVar1] = param_2[uVar1] | param_2[uVar1] >> 2 & 3;
          param_2[uVar1 + 8] = param_2[uVar1 + 8] | param_2[uVar1 + 8] >> 2 & 3;
          return;
        }
        if (uVar6 < 0x30314743) {
          if (uVar6 == 0x30314142) {
            bVar4 = bVar3;
            if (param_4 != 0) {
              bVar4 = bVar5;
            }
            param_2[uVar1] = bVar4 << 2;
            bVar4 = bVar3;
            if (param_4 != 0) {
              bVar4 = bVar5;
            }
            param_2[uVar1 + 1] = bVar4 >> 6;
            bVar5 = bVar2;
            if (param_4 != 0) {
              bVar5 = bVar3;
            }
            param_2[uVar1 + 8] = bVar5 << 2;
            if (param_4 != 0) {
              bVar2 = bVar3;
            }
            param_2[uVar1 + 9] = bVar2 >> 6;
            param_2[uVar1] = param_2[uVar1] | param_2[uVar1] >> 2 & 3;
            param_2[uVar1 + 8] = param_2[uVar1 + 8] | param_2[uVar1 + 8] >> 2 & 3;
            return;
          }
          if (uVar6 != 0x30314247) {
            if (uVar6 != 0x20363159) {
              return;
            }
            if (bVar5 == 0xff) {
              bVar2 = 0xff;
            }
            else {
              bVar2 = 0;
            }
            param_2[uVar1] = bVar2;
            param_2[uVar1 + 1] = bVar5;
            return;
          }
          bVar4 = bVar3;
          if (param_4 != 0) {
            bVar4 = bVar2;
          }
          param_2[uVar1] = bVar4 << 2;
          bVar4 = bVar3;
          if (param_4 != 0) {
            bVar4 = bVar2;
          }
          param_2[uVar1 + 1] = bVar4 >> 6;
          bVar2 = bVar5;
          if (param_4 != 0) {
            bVar2 = bVar3;
          }
          param_2[uVar1 + 8] = bVar2 << 2;
          if (param_4 != 0) {
            bVar5 = bVar3;
          }
          param_2[uVar1 + 9] = bVar5 >> 6;
          param_2[uVar1] = param_2[uVar1] | param_2[uVar1] >> 2 & 3;
          param_2[uVar1 + 8] = param_2[uVar1 + 8] | param_2[uVar1 + 8] >> 2 & 3;
          return;
        }
        if (uVar6 == 0x31324d4e) goto LAB_00034dd0;
        if (uVar6 != 0x31324d59) {
          if (uVar6 != 0x30314752) {
            return;
          }
          bVar4 = bVar5;
          if (param_4 != 0) {
            bVar4 = bVar3;
          }
          param_2[uVar1] = bVar4 << 2;
          if (param_4 != 0) {
            bVar5 = bVar3;
          }
          param_2[uVar1 + 1] = bVar5 >> 6;
          bVar5 = bVar3;
          if (param_4 != 0) {
            bVar5 = bVar2;
          }
          param_2[uVar1 + 8] = bVar5 << 2;
          if (param_4 != 0) {
            bVar3 = bVar2;
          }
          param_2[uVar1 + 9] = bVar3 >> 6;
          param_2[uVar1] = param_2[uVar1] | param_2[uVar1] >> 2 & 3;
          param_2[uVar1 + 8] = param_2[uVar1 + 8] | param_2[uVar1 + 8] >> 2 & 3;
          return;
        }
      }
      else {
        if (uVar6 == 0x31384142) {
          if (param_4 != 0) {
            bVar2 = bVar3;
          }
          param_2[uVar1] = bVar2;
          if (param_4 != 0) {
            bVar3 = bVar5;
          }
          param_2[uVar1 + 8] = bVar3;
          return;
        }
        if (0x31384142 < uVar6) {
          if (uVar6 == 0x32314142) {
            bVar4 = bVar3;
            if (param_4 != 0) {
              bVar4 = bVar5;
            }
            param_2[uVar1] = bVar4 << 4;
            bVar4 = bVar3;
            if (param_4 != 0) {
              bVar4 = bVar5;
            }
            param_2[uVar1 + 1] = bVar4 >> 4;
            bVar5 = bVar2;
            if (param_4 != 0) {
              bVar5 = bVar3;
            }
            param_2[uVar1 + 8] = bVar5 << 4;
            if (param_4 != 0) {
              bVar2 = bVar3;
            }
            param_2[uVar1 + 9] = bVar2 >> 4;
            param_2[uVar1] = param_2[uVar1] | param_2[uVar1] >> 4;
            param_2[uVar1 + 8] = param_2[uVar1 + 8] | param_2[uVar1 + 8] >> 4;
            return;
          }
          if (uVar6 != 0x32314247) {
            if (uVar6 != 0x31424752) {
              return;
            }
            param_2[uVar1] = bVar5 << 5 | bVar3 << 2 | bVar2;
            return;
          }
          bVar4 = bVar3;
          if (param_4 != 0) {
            bVar4 = bVar2;
          }
          param_2[uVar1] = bVar4 << 4;
          bVar4 = bVar3;
          if (param_4 != 0) {
            bVar4 = bVar2;
          }
          param_2[uVar1 + 1] = bVar4 >> 4;
          bVar2 = bVar5;
          if (param_4 != 0) {
            bVar2 = bVar3;
          }
          param_2[uVar1 + 8] = bVar2 << 4;
          if (param_4 != 0) {
            bVar5 = bVar3;
          }
          param_2[uVar1 + 9] = bVar5 >> 4;
          param_2[uVar1] = param_2[uVar1] | param_2[uVar1] >> 4;
          param_2[uVar1 + 8] = param_2[uVar1 + 8] | param_2[uVar1 + 8] >> 4;
          return;
        }
        if (uVar6 != 0x31364d59) {
          if ((uVar6 != 0x3136564e) && (uVar6 != 0x31364d4e)) {
            return;
          }
          goto LAB_00034dd0;
        }
      }
LAB_00034c30:
      param_2[uVar1] = bVar5;
      if (param_4 != 0) {
        param_2[8] = (byte)(((uint)param_2[8] + (uint)bVar2) / 2);
        param_2[0x10] = (byte)(((uint)param_2[0x10] + (uint)bVar3) / 2);
        param_2[9] = param_2[8];
        param_2[0x11] = param_2[0x10];
        return;
      }
      param_2[8] = bVar2;
      param_2[0x10] = bVar3;
      return;
    }
    if (uVar6 == 0x32315659) goto LAB_00034c30;
    if (0x32315659 < uVar6) {
      if (uVar6 == 0x33524742) {
        param_2[uVar1] = bVar2;
        param_2[uVar1 + 1] = bVar3;
        param_2[uVar1 + 2] = bVar5;
        return;
      }
      if (uVar6 < 0x33524743) {
        if (uVar6 == 0x3234564e) {
          param_2[uVar1] = bVar5;
          param_2[uVar1 * 2 + 8] = bVar2;
          param_2[uVar1 * 2 + 9] = bVar3;
          return;
        }
        if (uVar6 != 0x33424752) {
          if (uVar6 != 0x32344d59) {
            return;
          }
          param_2[uVar1] = bVar5;
          param_2[uVar1 + 8] = bVar2;
          param_2[uVar1 + 0x10] = bVar3;
          return;
        }
LAB_000354a8:
        param_2[uVar1] = bVar5;
        param_2[uVar1 + 1] = bVar3;
        param_2[uVar1 + 2] = bVar2;
        return;
      }
      if (uVar6 == 0x34324142) goto LAB_000355d8;
      if (uVar6 < 0x34324143) {
        if (uVar6 != 0x33565348) {
          return;
        }
        goto LAB_000354a8;
      }
      if (uVar6 == 0x34324d59) {
        param_2[uVar1] = bVar5;
        param_2[uVar1 + 8] = bVar3;
        param_2[uVar1 + 0x10] = bVar2;
        return;
      }
      if (uVar6 != 0x34325241) {
        return;
      }
      goto LAB_00035634;
    }
    if (uVar6 == 0x32315241) goto LAB_00035338;
    if (uVar6 < 0x32315242) {
      if (uVar6 == 0x32314d4e) goto LAB_00034d18;
      if (uVar6 != 0x32314d59) {
        if (uVar6 != 0x32314752) {
          return;
        }
        bVar4 = bVar5;
        if (param_4 != 0) {
          bVar4 = bVar3;
        }
        param_2[uVar1] = bVar4 << 4;
        if (param_4 != 0) {
          bVar5 = bVar3;
        }
        param_2[uVar1 + 1] = bVar5 >> 4;
        bVar5 = bVar3;
        if (param_4 != 0) {
          bVar5 = bVar2;
        }
        param_2[uVar1 + 8] = bVar5 << 4;
        if (param_4 != 0) {
          bVar3 = bVar2;
        }
        param_2[uVar1 + 9] = bVar3 >> 4;
        param_2[uVar1] = param_2[uVar1] | param_2[uVar1] >> 4;
        param_2[uVar1 + 8] = param_2[uVar1 + 8] | param_2[uVar1 + 8] >> 4;
        return;
      }
LAB_00034b48:
      param_2[uVar1] = bVar5;
      if (param_4 == 0) {
        param_2[8] = bVar3;
        param_2[0x10] = bVar2;
      }
      else {
        param_2[8] = (byte)(((uint)param_2[8] + (uint)bVar3) / 2);
        param_2[0x10] = (byte)(((uint)param_2[0x10] + (uint)bVar2) / 2);
        param_2[9] = param_2[8];
        param_2[0x11] = param_2[0x10];
      }
      return;
    }
    if (uVar6 == 0x32315559) goto LAB_00034b48;
    if (uVar6 == 0x3231564e) goto LAB_00034d18;
    if (uVar6 != 0x32315258) {
      return;
    }
LAB_00035330:
    local_9 = 0;
LAB_00035338:
    param_2[uVar1] = bVar3 << 4 | bVar2;
    param_2[uVar1 + 1] = local_9 & 0xf0 | bVar5;
    return;
  }
  if (uVar6 == 0x47524247) {
    bVar4 = bVar3;
    if (param_4 != 0) {
      bVar4 = bVar2;
    }
    param_2[uVar1] = bVar4;
    if (param_4 != 0) {
      bVar5 = bVar3;
    }
    param_2[uVar1 + 8] = bVar5;
    return;
  }
  if (uVar6 < 0x47524248) {
    if (uVar6 == 0x34565559) goto LAB_000355d8;
    if (uVar6 < 0x3456555a) {
      if (uVar6 == 0x34343459) goto LAB_00035338;
      if (uVar6 < 0x3434345a) {
        if (uVar6 != 0x34325842) {
          if (uVar6 != 0x34343452) {
            if (uVar6 != 0x3432564e) {
              return;
            }
            param_2[uVar1] = bVar5;
            param_2[uVar1 * 2 + 8] = bVar3;
            param_2[uVar1 * 2 + 9] = bVar2;
            return;
          }
          goto LAB_00035330;
        }
      }
      else {
        if (uVar6 == 0x34524742) goto LAB_0003562c;
        if ((uVar6 != 0x34565348) && (uVar6 != 0x34424752)) {
          return;
        }
      }
      local_9 = 0;
LAB_000355d8:
      param_2[uVar1] = local_9;
      param_2[uVar1 + 1] = bVar5;
      param_2[uVar1 + 2] = bVar3;
      param_2[uVar1 + 3] = bVar2;
      return;
    }
    if (uVar6 == 0x36314d59) goto LAB_00034b48;
    if (0x36314d59 < uVar6) {
      if (uVar6 == 0x42474752) {
        if (param_4 != 0) {
          bVar5 = bVar3;
        }
        param_2[uVar1] = bVar5;
        if (param_4 != 0) {
          bVar3 = bVar2;
        }
        param_2[uVar1 + 8] = bVar3;
        return;
      }
      if (uVar6 == 0x47425247) {
        bVar4 = bVar3;
        if (param_4 != 0) {
          bVar4 = bVar5;
        }
        param_2[uVar1] = bVar4;
        if (param_4 != 0) {
          bVar2 = bVar3;
        }
        param_2[uVar1 + 8] = bVar2;
        return;
      }
      if (uVar6 != 0x3631564e) {
        return;
      }
LAB_00034d18:
      param_2[uVar1] = bVar5;
      if (param_4 != 0) {
        param_2[8] = (byte)(((uint)param_2[8] + (uint)bVar3) / 2);
        param_2[9] = (byte)(((uint)param_2[9] + (uint)bVar2) / 2);
        return;
      }
      param_2[8] = bVar3;
      param_2[9] = bVar2;
      return;
    }
    if (uVar6 != 0x35315258) {
      if (uVar6 != 0x36314d4e) {
        if (uVar6 != 0x35315241) {
          return;
        }
        goto LAB_000353a0;
      }
      goto LAB_00034d18;
    }
LAB_00035398:
    local_9 = 0;
LAB_000353a0:
    param_2[uVar1] = bVar3 << 5 | bVar2;
    param_2[uVar1 + 1] = local_9 & 0x80 | bVar5 << 2 | bVar3 >> 3;
    return;
  }
  if (uVar6 == 0x52424752) {
    param_2[uVar1] = bVar5 << 3 | bVar3 >> 3;
    param_2[uVar1 + 1] = bVar3 << 5 | bVar2;
    return;
  }
  if (uVar6 < 0x52424753) {
    if (uVar6 == 0x50323234) goto LAB_00034b48;
    if (uVar6 < 0x50323235) {
      if (uVar6 != 0x4f424752) {
        if (uVar6 != 0x4f565559) {
          if (uVar6 != 0x48524742) {
            return;
          }
          param_2[uVar1] = bVar2 << 2 | bVar3 >> 4;
          param_2[uVar1 + 1] = bVar3 << 4 | bVar5 >> 2;
          param_2[uVar1 + 2] = bVar5 << 6;
          param_2[uVar1 + 3] = 0;
          return;
        }
        goto LAB_000353a0;
      }
      goto LAB_00035398;
    }
    if (uVar6 == 0x50565559) {
LAB_00035258:
      param_2[uVar1] = bVar3 << 5 | bVar2;
      param_2[uVar1 + 1] = bVar5 << 3 | bVar3 >> 3;
      return;
    }
    if (uVar6 != 0x51424752) {
      if (uVar6 != 0x50424752) {
        return;
      }
      goto LAB_00035258;
    }
  }
  else {
    if (uVar6 == 0x59555956) {
      param_2[uVar1 + 1] = bVar5;
      if (param_4 != 0) {
        *param_2 = (byte)(((uint)*param_2 + (uint)bVar2) / 2);
        param_2[2] = (byte)(((uint)param_2[2] + (uint)bVar3) / 2);
        return;
      }
      *param_2 = bVar2;
      param_2[2] = bVar3;
      return;
    }
    if (uVar6 < 0x59555957) {
      if (uVar6 == 0x56595559) {
        param_2[uVar1] = bVar5;
        if (param_4 != 0) {
          param_2[1] = (byte)(((uint)param_2[1] + (uint)bVar3) / 2);
          param_2[3] = (byte)(((uint)param_2[3] + (uint)bVar2) / 2);
          return;
        }
        param_2[1] = bVar3;
        param_2[3] = bVar2;
        return;
      }
      if (uVar6 == 0x59455247) {
        param_2[uVar1] = bVar5;
        return;
      }
      if (uVar6 != 0x55595659) {
        return;
      }
      param_2[uVar1] = bVar5;
      if (param_4 != 0) {
        param_2[1] = (byte)(((uint)param_2[1] + (uint)bVar2) / 2);
        param_2[3] = (byte)(((uint)param_2[3] + (uint)bVar3) / 2);
        return;
      }
      param_2[1] = bVar2;
      param_2[3] = bVar3;
      return;
    }
    if (uVar6 == 0xa0363159) {
      param_2[uVar1] = bVar5;
      if (bVar5 == 0xff) {
        bVar2 = 0xff;
      }
      else {
        bVar2 = 0;
      }
      param_2[uVar1 + 1] = bVar2;
      return;
    }
    if (uVar6 < 0xa036315a) {
      if (uVar6 != 0x59565955) {
        return;
      }
      param_2[uVar1 + 1] = bVar5;
      if (param_4 != 0) {
        *param_2 = (byte)(((uint)*param_2 + (uint)bVar3) / 2);
        param_2[2] = (byte)(((uint)param_2[2] + (uint)bVar2) / 2);
        return;
      }
      *param_2 = bVar3;
      param_2[2] = bVar2;
      return;
    }
    if (uVar6 == 0xb5315241) goto LAB_00035428;
    if (uVar6 != 0xb5315258) {
      return;
    }
  }
  local_9 = 0;
LAB_00035428:
  param_2[uVar1] = local_9 & 0x80 | bVar5 << 2 | bVar3 >> 3;
  param_2[uVar1 + 1] = bVar3 << 5 | bVar2;
  return;
}



/* ===== FUN_000364f4 @ 000364f4 size=312 ===== */

uint FUN_000364f4(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x68);
  if (uVar1 != 0x32314142) {
    if (uVar1 < 0x32314143) {
      if (uVar1 != 0x30314742) {
        if (uVar1 < 0x30314743) {
          if ((uVar1 != 0x30314142) && (uVar1 != 0x30314247)) {
            return 0;
          }
        }
        else if ((uVar1 != 0x30314752) && (uVar1 != 0x31384142)) {
          return 0;
        }
      }
    }
    else if (uVar1 != 0x32314752) {
      if (uVar1 < 0x32314753) {
        if ((uVar1 != 0x32314247) && (uVar1 != 0x32314742)) {
          return 0;
        }
      }
      else if (((uVar1 != 0x47425247) && (uVar1 != 0x47524247)) && (uVar1 != 0x42474752)) {
        return 0;
      }
    }
  }
  return param_2 & 1;
}



/* ===== FUN_0003662c @ 0003662c size=76 ===== */

undefined4 FUN_0003662c(int param_1)

{
  undefined4 uVar1;
  
  switch(*(undefined4 *)(param_1 + 0x454)) {
  case 3:
  case 4:
    uVar1 = 8;
    break;
  default:
    uVar1 = 1;
    break;
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x11:
  case 0x12:
  case 0x13:
    uVar1 = 2;
  }
  return uVar1;
}



/* ===== FUN_000366bc @ 000366bc size=288 ===== */

uint FUN_000366bc(int param_1,uint param_2)

{
  switch(*(undefined4 *)(param_1 + 0x454)) {
  case 3:
  case 4:
    param_2 = __aeabi_uidiv(param_2 << 3,*(undefined4 *)(param_1 + 4));
    break;
  default:
    param_2 = 0;
    break;
  case 10:
    param_2 = param_2 >> 4 & 1;
    break;
  case 0xb:
  case 0xd:
    param_2 = param_2 >> 1 & 1;
    break;
  case 0xc:
  case 0xe:
  case 0xf:
    param_2 = param_2 & 1;
    break;
  case 0x11:
    param_2 = (uint)(param_2 == *(uint *)(param_1 + 4) >> 1);
    break;
  case 0x12:
    param_2 = (uint)(param_2 + 1 >> 1 == *(uint *)(param_1 + 4) >> 2);
    break;
  case 0x13:
    param_2 = (uint)((param_2 + 10) / 0x14 == *(uint *)(param_1 + 4) / 0x28);
  }
  return param_2;
}



/* ===== FUN_00036820 @ 00036820 size=868 ===== */

int FUN_00036820(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int iVar2;
  uint uVar3;
  
  switch(param_1[0x115]) {
  case 0:
  case 1:
  case 2:
    uVar3 = param_1[0x115];
    uVar1 = __aeabi_uidiv(param_3 << 3,*param_1);
    iVar2 = *(int *)(&DAT_00050a38 + (uVar3 * 8 + (uVar1 & 7)) * 4);
    break;
  case 3:
    iVar2 = *(int *)(&DAT_00050a38 + (param_2 + 8) * 4);
    break;
  case 4:
    iVar2 = __aeabi_uidiv(param_3 << 3,*param_1);
    iVar2 = *(int *)(&DAT_00050a38 + ((iVar2 + param_2 & 7) + 8) * 4);
    break;
  case 5:
    iVar2 = 0x15;
    break;
  case 6:
    iVar2 = 0xe;
    break;
  case 7:
    iVar2 = 0x13;
    break;
  case 8:
    iVar2 = 0x11;
    break;
  case 9:
    iVar2 = 0x14;
    break;
  case 10:
    if (((param_2 ^ param_3 >> 4) & 1) == 0) {
      iVar2 = 0xe;
    }
    else {
      iVar2 = 0x15;
    }
    break;
  case 0xb:
    if (((param_2 ^ param_3 >> 1) & 1) == 0) {
      iVar2 = 0x15;
    }
    else {
      iVar2 = 0xe;
    }
    break;
  case 0xc:
    if (((param_2 ^ param_3) & 1) == 0) {
      iVar2 = 0x15;
    }
    else {
      iVar2 = 0xe;
    }
    break;
  case 0xd:
    if (((param_2 ^ param_3 >> 1) & 1) == 0) {
      iVar2 = 0x14;
    }
    else {
      iVar2 = 0x13;
    }
    break;
  case 0xe:
    if (((param_2 ^ param_3) & 1) == 0) {
      iVar2 = 0x14;
    }
    else {
      iVar2 = 0x13;
    }
    break;
  case 0xf:
    if (param_2 == 0) {
      iVar2 = 0x15;
    }
    else {
      iVar2 = 0xe;
    }
    break;
  case 0x10:
    if ((param_3 & 1) == 0) {
      iVar2 = 0x15;
    }
    else {
      iVar2 = 0xe;
    }
    break;
  case 0x11:
    if ((param_2 == 0) && (__aeabi_uidivmod(param_3,*param_1), extraout_r1 != *param_1 >> 1)) {
      iVar2 = 0xe;
    }
    else {
      iVar2 = 0x15;
    }
    break;
  case 0x12:
    if ((param_2 == 0) &&
       (__aeabi_uidivmod(param_3,*param_1), extraout_r1_00 + 1U >> 1 != *param_1 >> 2)) {
      iVar2 = 0xe;
    }
    else {
      iVar2 = 0x15;
    }
    break;
  case 0x13:
    if ((param_2 == 0) &&
       (__aeabi_uidivmod(param_3,*param_1), (extraout_r1_01 + 10U) / 0x14 != *param_1 / 0x28)) {
      iVar2 = 0xe;
    }
    else {
      iVar2 = 0x15;
    }
    break;
  case 0x14:
    __aeabi_uidivmod(param_3,*param_1);
    iVar2 = __aeabi_uidiv(extraout_r1_02 << 8,*param_1);
    iVar2 = iVar2 + 0x19;
    break;
  default:
    iVar2 = 0x13;
  }
  return iVar2;
}



/* ===== FUN_00036bd8 @ 00036bd8 size=1392 ===== */

void FUN_00036bd8(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_14;
  uint local_10;
  uint local_c;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  local_c = (uint)(iVar1 << 1) / 5 & 0xfffffffe;
  if ((iVar1 - local_c >> 1 & 1) != 0) {
    local_c = local_c + 2;
  }
  local_10 = local_c;
  param_1[0x14] = local_c;
  if (param_1[0x25] == 4) {
    local_14 = (local_c >> 2) * 3;
    if ((iVar1 + (local_c >> 2) * -3 >> 1 & 1) != 0) {
      local_14 = local_14 + 2;
    }
    param_1[0x14] = local_14;
  }
  param_1[0x12] = (uint)(iVar1 - param_1[0x14]) >> 1;
  if (param_1[0x26] == 1) {
    local_10 = (local_c * 10) / 0xb;
  }
  else if (param_1[0x26] == 2) {
    local_10 = (local_c * 0x3b) / 0x36;
  }
  param_1[0x15] = local_10;
  param_1[0x13] = iVar2 - local_10 >> 1;
  param_1[0xe] = 0;
  param_1[0x10] = iVar1;
  param_1[0xf] = 0;
  param_1[0x11] = iVar2;
  iVar3 = param_1[0x25];
  if (iVar3 == 2) {
    if (param_1[0x26] == 0) {
      if ((uint)(iVar1 * 9) < (uint)(iVar2 * 0xe)) {
        param_1[0x11] = (uint)(iVar1 * 9) / 0xe & 0xfffffffe;
        param_1[0xf] = (uint)(iVar2 - param_1[0x11]) >> 1;
      }
      else {
        param_1[0x10] = (uint)(iVar2 * 0xe) / 9 & 0xfffffffe;
        if (((uint)(iVar1 - param_1[0x10]) >> 1 & 0xfffffffe) != 0) {
          param_1[0x10] = param_1[0x10] + -2;
        }
        param_1[0xe] = (uint)(iVar1 - param_1[0x10]) >> 1;
      }
    }
    else {
      if (param_1[0x26] == 1) {
        iVar1 = 0x1a4;
      }
      else {
        iVar1 = 0x1fa;
      }
      param_1[0x11] = iVar1;
      param_1[0xf] = (uint)(iVar2 - param_1[0x11]) >> 1;
    }
  }
  else if (iVar3 == 3) {
    if (param_1[0x26] == 0) {
      if ((uint)(iVar1 * 9) < (uint)(iVar2 << 4)) {
        param_1[0x11] = (uint)(iVar1 * 9) >> 4 & 0xfffffffe;
        param_1[0xf] = (uint)(iVar2 - param_1[0x11]) >> 1;
      }
      else {
        param_1[0x10] = (uint)(iVar2 << 4) / 9 & 0xfffffffe;
        if (((uint)(iVar1 - param_1[0x10]) >> 1 & 0xfffffffe) != 0) {
          param_1[0x10] = param_1[0x10] + -2;
        }
        param_1[0xe] = (uint)(iVar1 - param_1[0x10]) >> 1;
      }
    }
    else {
      if (param_1[0x26] == 1) {
        iVar1 = 0x170;
      }
      else {
        iVar1 = 0x1ba;
      }
      param_1[0x11] = iVar1;
      param_1[0xf] = (uint)(iVar2 - param_1[0x11]) >> 1;
    }
  }
  else if ((iVar3 == 1) && (param_1[0x26] == 0)) {
    if ((uint)(iVar1 * 3) < (uint)(iVar2 << 2)) {
      param_1[0x11] = (uint)(iVar1 * 3) >> 2 & 0xfffffffe;
      param_1[0xf] = (uint)(iVar2 - param_1[0x11]) >> 1;
    }
    else {
      param_1[0x10] = (uint)(iVar2 << 2) / 3 & 0xfffffffe;
      if (((uint)(iVar1 - param_1[0x10]) >> 1 & 0xfffffffe) != 0) {
        param_1[0x10] = param_1[0x10] + -2;
      }
      param_1[0xe] = (uint)(iVar1 - param_1[0x10]) >> 1;
    }
  }
  return;
}



/* ===== FUN_00037148 @ 00037148 size=2164 ===== */

void FUN_00037148(int *param_1)

{
  int iVar1;
  size_t __n;
  uint uVar2;
  int extraout_r1;
  int extraout_r1_00;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_90 [24];
  void *local_78;
  size_t local_74;
  size_t local_70;
  size_t local_6c;
  uint local_68;
  int local_64;
  uint local_60;
  void *local_5c;
  uint local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  void *local_3c;
  void *local_38;
  undefined1 *local_34;
  byte *local_30;
  byte *local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  undefined4 local_14;
  
  if (param_1[0x115] == 2) {
    local_14 = 3;
  }
  else if (param_1[0x115] == 8) {
    local_14 = 0x13;
  }
  else {
    local_14 = 0x11;
  }
  local_18 = 0;
  while (uVar2 = FUN_0003662c(param_1), local_18 < uVar2) {
    local_40 = __aeabi_uidiv(*param_1,param_1[3]);
    __aeabi_uidivmod(*param_1,param_1[3]);
    local_24 = 0;
    local_28 = 0;
    local_44 = extraout_r1;
    for (local_20 = 0; local_20 < (uint)(param_1[3] << 1); local_20 = local_20 + 2) {
      local_48 = local_24;
      if ((char)param_1[0x116] != '\0') {
        local_48 = (*param_1 * 2 - local_24) + -2;
      }
      local_4c = FUN_00036820(param_1,local_18,local_48);
      local_24 = local_24 + local_40;
      local_28 = local_28 + local_44;
      if ((uint)param_1[3] <= local_28) {
        local_28 = local_28 - param_1[3];
        local_24 = local_24 + 1;
      }
      local_48 = local_24;
      if ((char)param_1[0x116] != '\0') {
        local_48 = (*param_1 * 2 - local_24) + -2;
      }
      local_50 = FUN_00036820(param_1,local_18,local_48);
      local_24 = local_24 + local_40;
      local_28 = local_28 + local_44;
      if ((uint)param_1[3] <= local_28) {
        local_28 = local_28 - param_1[3];
        local_24 = local_24 + 1;
      }
      uVar3 = local_4c;
      if ((char)param_1[0x116] != '\0') {
        uVar3 = local_50;
      }
      FUN_0003443c(param_1,auStack_90,uVar3,0);
      uVar3 = local_50;
      if ((char)param_1[0x116] != '\0') {
        uVar3 = local_4c;
      }
      FUN_0003443c(param_1,auStack_90,uVar3,1);
      for (local_1c = 0; local_1c < (uint)param_1[0x2a]; local_1c = local_1c + 1) {
        local_54 = param_1[local_1c + 0x10f];
        local_58 = (uint)*(byte *)((int)param_1 + local_1c + 0xb0);
        iVar4 = param_1[local_18 * 3 + local_1c + 0x122];
        iVar1 = FUN_000305f4(param_1,local_1c,local_20);
        local_5c = (void *)(iVar4 + iVar1);
        iVar1 = local_1c * 8;
        __n = __aeabi_uidiv(local_54,local_58);
        memcpy(local_5c,auStack_90 + iVar1,__n);
      }
    }
    local_18 = local_18 + 1;
  }
  if (1 < *(byte *)((int)param_1 + param_1[0x2a] + 0xac)) {
    local_60 = FUN_0003662c(param_1);
    for (local_18 = 0; local_18 < local_60; local_18 = local_18 + 1) {
      __aeabi_uidivmod(local_18 + 1,local_60);
      local_64 = extraout_r1_00;
      for (local_1c = 1; local_1c < (uint)param_1[0x2a]; local_1c = local_1c + 1) {
        local_68 = FUN_000305f4(param_1,local_1c,param_1[3] << 1);
        local_2c = (byte *)param_1[local_18 * 3 + local_1c + 0x122];
        local_30 = (byte *)param_1[local_64 * 3 + local_1c + 0x122];
        local_34 = (undefined1 *)param_1[local_18 * 3 + local_1c + 0x13a];
        for (local_20 = 0; local_20 < local_68; local_20 = local_20 + 1) {
          *local_34 = (char)(((uint)*local_2c + (uint)*local_30) / 2);
          local_2c = local_2c + 1;
          local_30 = local_30 + 1;
          local_34 = local_34 + 1;
        }
      }
    }
  }
  FUN_0003443c(param_1,auStack_90,local_14,0);
  FUN_0003443c(param_1,auStack_90,local_14,1);
  for (local_1c = 0; local_1c < (uint)param_1[0x2a]; local_1c = local_1c + 1) {
    local_6c = param_1[local_1c + 0x10f];
    local_38 = (void *)param_1[local_1c + 0x155];
    for (local_20 = 0; local_20 < (uint)param_1[3]; local_20 = local_20 + 2) {
      memcpy(local_38,auStack_90 + local_1c * 8,local_6c);
      local_38 = (void *)((int)local_38 + local_6c);
    }
  }
  FUN_0003443c(param_1,auStack_90,0x15,0);
  FUN_0003443c(param_1,auStack_90,0x15,1);
  for (local_1c = 0; local_1c < (uint)param_1[0x2a]; local_1c = local_1c + 1) {
    local_70 = param_1[local_1c + 0x10f];
    local_3c = (void *)param_1[local_1c + 0x158];
    for (local_20 = 0; local_20 < (uint)param_1[3]; local_20 = local_20 + 2) {
      memcpy(local_3c,auStack_90 + local_1c * 8,local_70);
      local_3c = (void *)((int)local_3c + local_70);
    }
  }
  for (local_20 = 0; local_20 < (uint)(param_1[3] << 1); local_20 = local_20 + 2) {
    FUN_0003443c(param_1,auStack_90,0x18,0);
    FUN_0003443c(param_1,auStack_90,0x18,1);
    for (local_1c = 0; local_1c < (uint)param_1[0x2a]; local_1c = local_1c + 1) {
      local_74 = param_1[local_1c + 0x10f];
      local_78 = (void *)(param_1[local_1c + 0x152] + (local_74 * local_20 >> 1));
      memcpy(local_78,auStack_90 + local_1c * 8,local_74);
    }
  }
  FUN_0003443c(param_1,(int)param_1 + 0x423,0x17,0);
  FUN_0003443c(param_1,(int)param_1 + 0x423,0x17,1);
  FUN_0003443c(param_1,(int)param_1 + 0x40b,0x16,0);
  FUN_0003443c(param_1,(int)param_1 + 0x40b,0x16,1);
  return;
}



/* ===== FUN_000379bc @ 000379bc size=1536 ===== */

void FUN_000379bc(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,undefined4 param_8,int param_9,uint param_10)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  uint local_1c;
  undefined1 *local_18;
  int local_14;
  
  uVar9 = (uint)*(byte *)(param_1 + param_3 + 0xad);
  cVar1 = *(char *)(param_1 + param_3 + 0xb0);
  uVar2 = *(undefined1 *)(param_1 + (param_3 + 0x81) * 8 + 3);
  uVar3 = *(undefined1 *)(param_1 + (param_3 + 0x84) * 8 + 3);
  for (local_14 = param_4; local_14 < 0x10; local_14 = param_6 * uVar9 + local_14) {
    iVar6 = local_14;
    if (*(char *)(param_1 + 0x459) != '\0') {
      iVar6 = 0xf - local_14;
    }
    uVar5 = __aeabi_uidiv(local_14,uVar9);
    iVar12 = *(int *)(param_2 + param_3 * 8 + (uVar5 & 1) * 4);
    iVar6 = __aeabi_uidiv(param_6 * param_7 + iVar6,param_5 * uVar9);
    iVar10 = *(int *)(param_1 + (param_3 + 0x112) * 4);
    iVar7 = __aeabi_uidiv(param_8,cVar1);
    local_18 = (undefined1 *)(iVar12 + iVar10 * iVar6 + iVar7);
    for (local_1c = 0; local_1c < param_10; local_1c = local_1c + 1) {
      bVar4 = *(byte *)(DAT_0006e6f4 + (uint)*(byte *)(param_9 + local_1c) * 0x10 + local_14);
      if ((cVar1 == '\x02') && (*(char *)(param_1 + 0x458) != '\0')) {
        uVar8 = uVar3;
        if ((bVar4 & 0x40) != 0) {
          uVar8 = uVar2;
        }
        local_18[3] = uVar8;
        uVar8 = uVar3;
        if ((bVar4 & 0x10) != 0) {
          uVar8 = uVar2;
        }
        local_18[2] = uVar8;
        uVar8 = uVar3;
        if ((bVar4 & 4) != 0) {
          uVar8 = uVar2;
        }
        local_18[1] = uVar8;
        uVar8 = uVar3;
        if ((bVar4 & 1) != 0) {
          uVar8 = uVar2;
        }
        *local_18 = uVar8;
      }
      else if (cVar1 == '\x02') {
        uVar8 = uVar3;
        if ((char)bVar4 < '\0') {
          uVar8 = uVar2;
        }
        *local_18 = uVar8;
        uVar8 = uVar3;
        if ((bVar4 & 0x20) != 0) {
          uVar8 = uVar2;
        }
        local_18[1] = uVar8;
        uVar8 = uVar3;
        if ((bVar4 & 8) != 0) {
          uVar8 = uVar2;
        }
        local_18[2] = uVar8;
        uVar8 = uVar3;
        if ((bVar4 & 2) != 0) {
          uVar8 = uVar2;
        }
        local_18[3] = uVar8;
      }
      else if (*(char *)(param_1 + 0x458) == '\0') {
        uVar8 = uVar3;
        if ((char)bVar4 < '\0') {
          uVar8 = uVar2;
        }
        *local_18 = uVar8;
        uVar8 = uVar3;
        if ((bVar4 & 0x40) != 0) {
          uVar8 = uVar2;
        }
        local_18[1] = uVar8;
        uVar8 = uVar3;
        if ((bVar4 & 0x20) != 0) {
          uVar8 = uVar2;
        }
        local_18[2] = uVar8;
        uVar8 = uVar3;
        if ((bVar4 & 0x10) != 0) {
          uVar8 = uVar2;
        }
        local_18[3] = uVar8;
        uVar8 = uVar3;
        if ((bVar4 & 8) != 0) {
          uVar8 = uVar2;
        }
        local_18[4] = uVar8;
        uVar8 = uVar3;
        if ((bVar4 & 4) != 0) {
          uVar8 = uVar2;
        }
        local_18[5] = uVar8;
        uVar8 = uVar3;
        if ((bVar4 & 2) != 0) {
          uVar8 = uVar2;
        }
        local_18[6] = uVar8;
        uVar8 = uVar3;
        if ((bVar4 & 1) != 0) {
          uVar8 = uVar2;
        }
        local_18[7] = uVar8;
      }
      else {
        uVar8 = uVar3;
        if ((char)bVar4 < '\0') {
          uVar8 = uVar2;
        }
        local_18[7] = uVar8;
        uVar8 = uVar3;
        if ((bVar4 & 0x40) != 0) {
          uVar8 = uVar2;
        }
        local_18[6] = uVar8;
        uVar8 = uVar3;
        if ((bVar4 & 0x20) != 0) {
          uVar8 = uVar2;
        }
        local_18[5] = uVar8;
        uVar8 = uVar3;
        if ((bVar4 & 0x10) != 0) {
          uVar8 = uVar2;
        }
        local_18[4] = uVar8;
        uVar8 = uVar3;
        if ((bVar4 & 8) != 0) {
          uVar8 = uVar2;
        }
        local_18[3] = uVar8;
        uVar8 = uVar3;
        if ((bVar4 & 4) != 0) {
          uVar8 = uVar2;
        }
        local_18[2] = uVar8;
        uVar8 = uVar3;
        if ((bVar4 & 2) != 0) {
          uVar8 = uVar2;
        }
        local_18[1] = uVar8;
        uVar8 = uVar3;
        if ((bVar4 & 1) != 0) {
          uVar8 = uVar2;
        }
        *local_18 = uVar8;
      }
      if (*(char *)(param_1 + 0x458) == '\0') {
        uVar11 = 8;
      }
      else {
        uVar11 = 0xfffffff8;
      }
      iVar6 = __aeabi_uidiv(uVar11,cVar1);
      local_18 = local_18 + iVar6;
    }
  }
  return;
}



/* ===== FUN_00037fbc @ 00037fbc size=1548 ===== */

void FUN_00037fbc(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,undefined4 param_8,int param_9,uint param_10)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  uint local_1c;
  undefined2 *local_18;
  int local_14;
  
  uVar9 = (uint)*(byte *)(param_1 + param_3 + 0xad);
  cVar1 = *(char *)(param_1 + param_3 + 0xb0);
  uVar3 = *(undefined2 *)(param_1 + (param_3 + 0x81) * 8 + 3);
  uVar4 = *(undefined2 *)(param_1 + (param_3 + 0x84) * 8 + 3);
  for (local_14 = param_4; local_14 < 0x10; local_14 = param_6 * uVar9 + local_14) {
    iVar6 = local_14;
    if (*(char *)(param_1 + 0x459) != '\0') {
      iVar6 = 0xf - local_14;
    }
    uVar5 = __aeabi_uidiv(local_14,uVar9);
    iVar12 = *(int *)(param_2 + param_3 * 8 + (uVar5 & 1) * 4);
    iVar6 = __aeabi_uidiv(param_6 * param_7 + iVar6,param_5 * uVar9);
    iVar10 = *(int *)(param_1 + (param_3 + 0x112) * 4);
    iVar7 = __aeabi_uidiv(param_8,cVar1);
    local_18 = (undefined2 *)(iVar12 + iVar10 * iVar6 + iVar7 * 2);
    for (local_1c = 0; local_1c < param_10; local_1c = local_1c + 1) {
      bVar2 = *(byte *)(DAT_0006e6f4 + (uint)*(byte *)(param_9 + local_1c) * 0x10 + local_14);
      if ((cVar1 == '\x02') && (*(char *)(param_1 + 0x458) != '\0')) {
        uVar8 = uVar4;
        if ((bVar2 & 0x40) != 0) {
          uVar8 = uVar3;
        }
        local_18[3] = uVar8;
        uVar8 = uVar4;
        if ((bVar2 & 0x10) != 0) {
          uVar8 = uVar3;
        }
        local_18[2] = uVar8;
        uVar8 = uVar4;
        if ((bVar2 & 4) != 0) {
          uVar8 = uVar3;
        }
        local_18[1] = uVar8;
        uVar8 = uVar4;
        if ((bVar2 & 1) != 0) {
          uVar8 = uVar3;
        }
        *local_18 = uVar8;
      }
      else if (cVar1 == '\x02') {
        uVar8 = uVar4;
        if ((char)bVar2 < '\0') {
          uVar8 = uVar3;
        }
        *local_18 = uVar8;
        uVar8 = uVar4;
        if ((bVar2 & 0x20) != 0) {
          uVar8 = uVar3;
        }
        local_18[1] = uVar8;
        uVar8 = uVar4;
        if ((bVar2 & 8) != 0) {
          uVar8 = uVar3;
        }
        local_18[2] = uVar8;
        uVar8 = uVar4;
        if ((bVar2 & 2) != 0) {
          uVar8 = uVar3;
        }
        local_18[3] = uVar8;
      }
      else if (*(char *)(param_1 + 0x458) == '\0') {
        uVar8 = uVar4;
        if ((char)bVar2 < '\0') {
          uVar8 = uVar3;
        }
        *local_18 = uVar8;
        uVar8 = uVar4;
        if ((bVar2 & 0x40) != 0) {
          uVar8 = uVar3;
        }
        local_18[1] = uVar8;
        uVar8 = uVar4;
        if ((bVar2 & 0x20) != 0) {
          uVar8 = uVar3;
        }
        local_18[2] = uVar8;
        uVar8 = uVar4;
        if ((bVar2 & 0x10) != 0) {
          uVar8 = uVar3;
        }
        local_18[3] = uVar8;
        uVar8 = uVar4;
        if ((bVar2 & 8) != 0) {
          uVar8 = uVar3;
        }
        local_18[4] = uVar8;
        uVar8 = uVar4;
        if ((bVar2 & 4) != 0) {
          uVar8 = uVar3;
        }
        local_18[5] = uVar8;
        uVar8 = uVar4;
        if ((bVar2 & 2) != 0) {
          uVar8 = uVar3;
        }
        local_18[6] = uVar8;
        uVar8 = uVar4;
        if ((bVar2 & 1) != 0) {
          uVar8 = uVar3;
        }
        local_18[7] = uVar8;
      }
      else {
        uVar8 = uVar4;
        if ((char)bVar2 < '\0') {
          uVar8 = uVar3;
        }
        local_18[7] = uVar8;
        uVar8 = uVar4;
        if ((bVar2 & 0x40) != 0) {
          uVar8 = uVar3;
        }
        local_18[6] = uVar8;
        uVar8 = uVar4;
        if ((bVar2 & 0x20) != 0) {
          uVar8 = uVar3;
        }
        local_18[5] = uVar8;
        uVar8 = uVar4;
        if ((bVar2 & 0x10) != 0) {
          uVar8 = uVar3;
        }
        local_18[4] = uVar8;
        uVar8 = uVar4;
        if ((bVar2 & 8) != 0) {
          uVar8 = uVar3;
        }
        local_18[3] = uVar8;
        uVar8 = uVar4;
        if ((bVar2 & 4) != 0) {
          uVar8 = uVar3;
        }
        local_18[2] = uVar8;
        uVar8 = uVar4;
        if ((bVar2 & 2) != 0) {
          uVar8 = uVar3;
        }
        local_18[1] = uVar8;
        uVar8 = uVar4;
        if ((bVar2 & 1) != 0) {
          uVar8 = uVar3;
        }
        *local_18 = uVar8;
      }
      if (*(char *)(param_1 + 0x458) == '\0') {
        uVar11 = 8;
      }
      else {
        uVar11 = 0xfffffff8;
      }
      iVar6 = __aeabi_uidiv(uVar11,cVar1);
      local_18 = local_18 + iVar6;
    }
  }
  return;
}



/* ===== FUN_000385c8 @ 000385c8 size=2308 ===== */

void FUN_000385c8(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,undefined4 param_8,int param_9,uint param_10)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  uint local_1c;
  undefined2 *local_18;
  int local_14;
  
  uVar9 = (uint)*(byte *)(param_1 + param_3 + 0xad);
  cVar1 = *(char *)(param_1 + param_3 + 0xb0);
  iVar10 = param_1 + (param_3 + 0x81) * 8;
  uVar5 = *(undefined2 *)(iVar10 + 3);
  uVar2 = *(undefined1 *)(iVar10 + 5);
  iVar10 = param_1 + (param_3 + 0x84) * 8;
  uVar6 = *(undefined2 *)(iVar10 + 3);
  uVar3 = *(undefined1 *)(iVar10 + 5);
  for (local_14 = param_4; local_14 < 0x10; local_14 = param_6 * uVar9 + local_14) {
    iVar10 = local_14;
    if (*(char *)(param_1 + 0x459) != '\0') {
      iVar10 = 0xf - local_14;
    }
    uVar7 = __aeabi_uidiv(local_14,uVar9);
    iVar13 = *(int *)(param_2 + param_3 * 8 + (uVar7 & 1) * 4);
    iVar10 = __aeabi_uidiv(param_6 * param_7 + iVar10,param_5 * uVar9);
    iVar11 = *(int *)(param_1 + (param_3 + 0x112) * 4);
    iVar8 = __aeabi_uidiv(param_8,cVar1);
    local_18 = (undefined2 *)(iVar13 + iVar11 * iVar10 + iVar8 * 3);
    for (local_1c = 0; local_1c < param_10; local_1c = local_1c + 1) {
      bVar4 = *(byte *)(DAT_0006e6f4 + (uint)*(byte *)(param_9 + local_1c) * 0x10 + local_14);
      if ((cVar1 == '\x02') && (*(char *)(param_1 + 0x458) != '\0')) {
        if ((bVar4 & 0x40) == 0) {
          *(undefined2 *)((int)local_18 + 9) = uVar6;
          *(undefined1 *)((int)local_18 + 0xb) = uVar3;
        }
        else {
          *(undefined2 *)((int)local_18 + 9) = uVar5;
          *(undefined1 *)((int)local_18 + 0xb) = uVar2;
        }
        if ((bVar4 & 0x10) == 0) {
          local_18[3] = uVar6;
          *(undefined1 *)(local_18 + 4) = uVar3;
        }
        else {
          local_18[3] = uVar5;
          *(undefined1 *)(local_18 + 4) = uVar2;
        }
        if ((bVar4 & 4) == 0) {
          *(undefined2 *)((int)local_18 + 3) = uVar6;
          *(undefined1 *)((int)local_18 + 5) = uVar3;
        }
        else {
          *(undefined2 *)((int)local_18 + 3) = uVar5;
          *(undefined1 *)((int)local_18 + 5) = uVar2;
        }
        if ((bVar4 & 1) == 0) {
          *local_18 = uVar6;
          *(undefined1 *)(local_18 + 1) = uVar3;
        }
        else {
          *local_18 = uVar5;
          *(undefined1 *)(local_18 + 1) = uVar2;
        }
      }
      else if (cVar1 == '\x02') {
        if ((char)bVar4 < '\0') {
          *local_18 = uVar5;
          *(undefined1 *)(local_18 + 1) = uVar2;
        }
        else {
          *local_18 = uVar6;
          *(undefined1 *)(local_18 + 1) = uVar3;
        }
        if ((bVar4 & 0x20) == 0) {
          *(undefined2 *)((int)local_18 + 3) = uVar6;
          *(undefined1 *)((int)local_18 + 5) = uVar3;
        }
        else {
          *(undefined2 *)((int)local_18 + 3) = uVar5;
          *(undefined1 *)((int)local_18 + 5) = uVar2;
        }
        if ((bVar4 & 8) == 0) {
          local_18[3] = uVar6;
          *(undefined1 *)(local_18 + 4) = uVar3;
        }
        else {
          local_18[3] = uVar5;
          *(undefined1 *)(local_18 + 4) = uVar2;
        }
        if ((bVar4 & 2) == 0) {
          *(undefined2 *)((int)local_18 + 9) = uVar6;
          *(undefined1 *)((int)local_18 + 0xb) = uVar3;
        }
        else {
          *(undefined2 *)((int)local_18 + 9) = uVar5;
          *(undefined1 *)((int)local_18 + 0xb) = uVar2;
        }
      }
      else if (*(char *)(param_1 + 0x458) == '\0') {
        if ((char)bVar4 < '\0') {
          *local_18 = uVar5;
          *(undefined1 *)(local_18 + 1) = uVar2;
        }
        else {
          *local_18 = uVar6;
          *(undefined1 *)(local_18 + 1) = uVar3;
        }
        if ((bVar4 & 0x40) == 0) {
          *(undefined2 *)((int)local_18 + 3) = uVar6;
          *(undefined1 *)((int)local_18 + 5) = uVar3;
        }
        else {
          *(undefined2 *)((int)local_18 + 3) = uVar5;
          *(undefined1 *)((int)local_18 + 5) = uVar2;
        }
        if ((bVar4 & 0x20) == 0) {
          local_18[3] = uVar6;
          *(undefined1 *)(local_18 + 4) = uVar3;
        }
        else {
          local_18[3] = uVar5;
          *(undefined1 *)(local_18 + 4) = uVar2;
        }
        if ((bVar4 & 0x10) == 0) {
          *(undefined2 *)((int)local_18 + 9) = uVar6;
          *(undefined1 *)((int)local_18 + 0xb) = uVar3;
        }
        else {
          *(undefined2 *)((int)local_18 + 9) = uVar5;
          *(undefined1 *)((int)local_18 + 0xb) = uVar2;
        }
        if ((bVar4 & 8) == 0) {
          local_18[6] = uVar6;
          *(undefined1 *)(local_18 + 7) = uVar3;
        }
        else {
          local_18[6] = uVar5;
          *(undefined1 *)(local_18 + 7) = uVar2;
        }
        if ((bVar4 & 4) == 0) {
          *(undefined2 *)((int)local_18 + 0xf) = uVar6;
          *(undefined1 *)((int)local_18 + 0x11) = uVar3;
        }
        else {
          *(undefined2 *)((int)local_18 + 0xf) = uVar5;
          *(undefined1 *)((int)local_18 + 0x11) = uVar2;
        }
        if ((bVar4 & 2) == 0) {
          local_18[9] = uVar6;
          *(undefined1 *)(local_18 + 10) = uVar3;
        }
        else {
          local_18[9] = uVar5;
          *(undefined1 *)(local_18 + 10) = uVar2;
        }
        if ((bVar4 & 1) == 0) {
          *(undefined2 *)((int)local_18 + 0x15) = uVar6;
          *(undefined1 *)((int)local_18 + 0x17) = uVar3;
        }
        else {
          *(undefined2 *)((int)local_18 + 0x15) = uVar5;
          *(undefined1 *)((int)local_18 + 0x17) = uVar2;
        }
      }
      else {
        if ((char)bVar4 < '\0') {
          *(undefined2 *)((int)local_18 + 0x15) = uVar5;
          *(undefined1 *)((int)local_18 + 0x17) = uVar2;
        }
        else {
          *(undefined2 *)((int)local_18 + 0x15) = uVar6;
          *(undefined1 *)((int)local_18 + 0x17) = uVar3;
        }
        if ((bVar4 & 0x40) == 0) {
          local_18[9] = uVar6;
          *(undefined1 *)(local_18 + 10) = uVar3;
        }
        else {
          local_18[9] = uVar5;
          *(undefined1 *)(local_18 + 10) = uVar2;
        }
        if ((bVar4 & 0x20) == 0) {
          *(undefined2 *)((int)local_18 + 0xf) = uVar6;
          *(undefined1 *)((int)local_18 + 0x11) = uVar3;
        }
        else {
          *(undefined2 *)((int)local_18 + 0xf) = uVar5;
          *(undefined1 *)((int)local_18 + 0x11) = uVar2;
        }
        if ((bVar4 & 0x10) == 0) {
          local_18[6] = uVar6;
          *(undefined1 *)(local_18 + 7) = uVar3;
        }
        else {
          local_18[6] = uVar5;
          *(undefined1 *)(local_18 + 7) = uVar2;
        }
        if ((bVar4 & 8) == 0) {
          *(undefined2 *)((int)local_18 + 9) = uVar6;
          *(undefined1 *)((int)local_18 + 0xb) = uVar3;
        }
        else {
          *(undefined2 *)((int)local_18 + 9) = uVar5;
          *(undefined1 *)((int)local_18 + 0xb) = uVar2;
        }
        if ((bVar4 & 4) == 0) {
          local_18[3] = uVar6;
          *(undefined1 *)(local_18 + 4) = uVar3;
        }
        else {
          local_18[3] = uVar5;
          *(undefined1 *)(local_18 + 4) = uVar2;
        }
        if ((bVar4 & 2) == 0) {
          *(undefined2 *)((int)local_18 + 3) = uVar6;
          *(undefined1 *)((int)local_18 + 5) = uVar3;
        }
        else {
          *(undefined2 *)((int)local_18 + 3) = uVar5;
          *(undefined1 *)((int)local_18 + 5) = uVar2;
        }
        if ((bVar4 & 1) == 0) {
          *local_18 = uVar6;
          *(undefined1 *)(local_18 + 1) = uVar3;
        }
        else {
          *local_18 = uVar5;
          *(undefined1 *)(local_18 + 1) = uVar2;
        }
      }
      if (*(char *)(param_1 + 0x458) == '\0') {
        uVar12 = 8;
      }
      else {
        uVar12 = 0xfffffff8;
      }
      iVar10 = __aeabi_uidiv(uVar12,cVar1);
      local_18 = (undefined2 *)((int)local_18 + iVar10 * 3);
    }
  }
  return;
}



/* ===== FUN_00038ecc @ 00038ecc size=1540 ===== */

void FUN_00038ecc(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,undefined4 param_8,int param_9,uint param_10)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint local_1c;
  undefined4 *local_18;
  int local_14;
  
  uVar6 = (uint)*(byte *)(param_1 + param_3 + 0xad);
  cVar1 = *(char *)(param_1 + param_3 + 0xb0);
  uVar7 = *(undefined4 *)(param_1 + (param_3 + 0x81) * 8 + 3);
  uVar8 = *(undefined4 *)(param_1 + (param_3 + 0x84) * 8 + 3);
  for (local_14 = param_4; local_14 < 0x10; local_14 = param_6 * uVar6 + local_14) {
    iVar4 = local_14;
    if (*(char *)(param_1 + 0x459) != '\0') {
      iVar4 = 0xf - local_14;
    }
    uVar3 = __aeabi_uidiv(local_14,uVar6);
    iVar11 = *(int *)(param_2 + param_3 * 8 + (uVar3 & 1) * 4);
    iVar4 = __aeabi_uidiv(param_6 * param_7 + iVar4,param_5 * uVar6);
    iVar9 = *(int *)(param_1 + (param_3 + 0x112) * 4);
    iVar5 = __aeabi_uidiv(param_8,cVar1);
    local_18 = (undefined4 *)(iVar11 + iVar9 * iVar4 + iVar5 * 4);
    for (local_1c = 0; local_1c < param_10; local_1c = local_1c + 1) {
      bVar2 = *(byte *)(DAT_0006e6f4 + (uint)*(byte *)(param_9 + local_1c) * 0x10 + local_14);
      if ((cVar1 == '\x02') && (*(char *)(param_1 + 0x458) != '\0')) {
        uVar10 = uVar8;
        if ((bVar2 & 0x40) != 0) {
          uVar10 = uVar7;
        }
        local_18[3] = uVar10;
        uVar10 = uVar8;
        if ((bVar2 & 0x10) != 0) {
          uVar10 = uVar7;
        }
        local_18[2] = uVar10;
        uVar10 = uVar8;
        if ((bVar2 & 4) != 0) {
          uVar10 = uVar7;
        }
        local_18[1] = uVar10;
        uVar10 = uVar8;
        if ((bVar2 & 1) != 0) {
          uVar10 = uVar7;
        }
        *local_18 = uVar10;
      }
      else if (cVar1 == '\x02') {
        uVar10 = uVar8;
        if ((char)bVar2 < '\0') {
          uVar10 = uVar7;
        }
        *local_18 = uVar10;
        uVar10 = uVar8;
        if ((bVar2 & 0x20) != 0) {
          uVar10 = uVar7;
        }
        local_18[1] = uVar10;
        uVar10 = uVar8;
        if ((bVar2 & 8) != 0) {
          uVar10 = uVar7;
        }
        local_18[2] = uVar10;
        uVar10 = uVar8;
        if ((bVar2 & 2) != 0) {
          uVar10 = uVar7;
        }
        local_18[3] = uVar10;
      }
      else if (*(char *)(param_1 + 0x458) == '\0') {
        uVar10 = uVar8;
        if ((char)bVar2 < '\0') {
          uVar10 = uVar7;
        }
        *local_18 = uVar10;
        uVar10 = uVar8;
        if ((bVar2 & 0x40) != 0) {
          uVar10 = uVar7;
        }
        local_18[1] = uVar10;
        uVar10 = uVar8;
        if ((bVar2 & 0x20) != 0) {
          uVar10 = uVar7;
        }
        local_18[2] = uVar10;
        uVar10 = uVar8;
        if ((bVar2 & 0x10) != 0) {
          uVar10 = uVar7;
        }
        local_18[3] = uVar10;
        uVar10 = uVar8;
        if ((bVar2 & 8) != 0) {
          uVar10 = uVar7;
        }
        local_18[4] = uVar10;
        uVar10 = uVar8;
        if ((bVar2 & 4) != 0) {
          uVar10 = uVar7;
        }
        local_18[5] = uVar10;
        uVar10 = uVar8;
        if ((bVar2 & 2) != 0) {
          uVar10 = uVar7;
        }
        local_18[6] = uVar10;
        uVar10 = uVar8;
        if ((bVar2 & 1) != 0) {
          uVar10 = uVar7;
        }
        local_18[7] = uVar10;
      }
      else {
        uVar10 = uVar8;
        if ((char)bVar2 < '\0') {
          uVar10 = uVar7;
        }
        local_18[7] = uVar10;
        uVar10 = uVar8;
        if ((bVar2 & 0x40) != 0) {
          uVar10 = uVar7;
        }
        local_18[6] = uVar10;
        uVar10 = uVar8;
        if ((bVar2 & 0x20) != 0) {
          uVar10 = uVar7;
        }
        local_18[5] = uVar10;
        uVar10 = uVar8;
        if ((bVar2 & 0x10) != 0) {
          uVar10 = uVar7;
        }
        local_18[4] = uVar10;
        uVar10 = uVar8;
        if ((bVar2 & 8) != 0) {
          uVar10 = uVar7;
        }
        local_18[3] = uVar10;
        uVar10 = uVar8;
        if ((bVar2 & 4) != 0) {
          uVar10 = uVar7;
        }
        local_18[2] = uVar10;
        uVar10 = uVar8;
        if ((bVar2 & 2) != 0) {
          uVar10 = uVar7;
        }
        local_18[1] = uVar10;
        uVar10 = uVar8;
        if ((bVar2 & 1) != 0) {
          uVar10 = uVar7;
        }
        *local_18 = uVar10;
      }
      if (*(char *)(param_1 + 0x458) == '\0') {
        uVar10 = 8;
      }
      else {
        uVar10 = 0xfffffff8;
      }
      iVar4 = __aeabi_uidiv(uVar10,cVar1);
      local_18 = local_18 + iVar4;
    }
  }
  return;
}



/* ===== FUN_000394d0 @ 000394d0 size=852 ===== */

void FUN_000394d0(int param_1,int param_2,int param_3,int param_4,char *param_5)

{
  undefined4 uVar1;
  int local_30;
  int local_2c;
  uint local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (((*(int *)(param_1 + 0x10) == 3) || (*(int *)(param_1 + 0x10) == 2)) ||
     (*(int *)(param_1 + 0x10) == 7)) {
    uVar1 = 2;
  }
  else {
    uVar1 = 1;
  }
  local_10 = 0;
  local_14 = strlen(param_5);
  if (((DAT_0006e6f4 != 0) && (param_2 != 0)) &&
     ((param_3 + 0x10U < *(uint *)(param_1 + 0x34) && (param_4 + 8U < *(uint *)(param_1 + 0x30)))))
  {
    if ((uint)(*(int *)(param_1 + 0x30) - param_4) >> 3 < local_14) {
      local_14 = (uint)(*(int *)(param_1 + 0x30) - param_4) >> 3;
    }
    local_2c = param_3;
    if (*(char *)(param_1 + 0x459) != '\0') {
      local_2c = (*(int *)(param_1 + 0x34) - param_3) + -0x10;
    }
    local_30 = param_4;
    if (*(char *)(param_1 + 0x458) != '\0') {
      local_30 = (*(int *)(param_1 + 0x30) - param_4) + -8;
    }
    local_2c = local_2c + *(int *)(param_1 + 0x2c);
    local_30 = local_30 + *(int *)(param_1 + 0x28);
    local_c = uVar1;
    if (*(int *)(param_1 + 0x10) == 3) {
      local_10 = 1;
    }
    else if ((*(int *)(param_1 + 0x10) == 5) || (*(int *)(param_1 + 0x10) == 6)) {
      local_c = 2;
    }
    for (local_18 = 0; local_18 < *(uint *)(param_1 + 0xa8); local_18 = local_18 + 1) {
      switch(*(undefined4 *)(param_1 + (local_18 + 0x10e) * 4 + 4)) {
      case 2:
        FUN_000379bc(param_1,param_2,local_18,local_10,local_c,uVar1,local_2c,local_30,param_5,
                     local_14);
        break;
      case 4:
        FUN_00037fbc(param_1,param_2,local_18,local_10,local_c,uVar1,local_2c,local_30,param_5,
                     local_14);
        break;
      case 6:
        FUN_000385c8(param_1,param_2,local_18,local_10,local_c,uVar1,local_2c,local_30,param_5,
                     local_14);
        break;
      case 8:
        FUN_00038ecc(param_1,param_2,local_18,local_10,local_c,uVar1,local_2c,local_30,param_5,
                     local_14);
      }
    }
  }
  return;
}



/* ===== FUN_00039840 @ 00039840 size=524 ===== */

void FUN_00039840(int *param_1)

{
  int iVar1;
  int local_c;
  
  if ((uint)param_1[0x11a] < 4) {
    local_c = 1;
  }
  else {
    local_c = -1;
  }
  if ((char)param_1[0x116] != '\0') {
    local_c = -local_c;
  }
  switch(param_1[0x11a]) {
  case 0:
  case 6:
    param_1[0x11c] = (*param_1 + 0x13fU) / 0x140 << 2;
    break;
  case 1:
  case 5:
    param_1[0x11c] = (*param_1 + 0x27fU) / 0x280 << 2;
    break;
  case 2:
  case 4:
    param_1[0x11c] = 2;
    break;
  case 3:
    param_1[0x11c] = 0;
  }
  if (local_c < 0) {
    param_1[0x11c] = *param_1 - param_1[0x11c];
  }
  if ((uint)param_1[0x11d] < 4) {
    iVar1 = 1;
  }
  else {
    iVar1 = -1;
  }
  switch(param_1[0x11d]) {
  case 0:
  case 6:
    param_1[0x11f] = (*param_1 + 0x13fU) / 0x140 << 2;
    break;
  case 1:
  case 5:
    param_1[0x11f] = (*param_1 + 0x27fU) / 0x280 << 2;
    break;
  case 2:
  case 4:
    param_1[0x11f] = 1;
    break;
  case 3:
    param_1[0x11f] = 0;
  }
  if (iVar1 < 0) {
    param_1[0x11f] = param_1[1] - param_1[0x11f];
  }
  return;
}



/* ===== FUN_00039a84 @ 00039a84 size=148 ===== */

int FUN_00039a84(int param_1,int param_2,int param_3)

{
  if (param_3 == 2) {
    param_2 = *(int *)(param_1 + 0x1c) + param_2 * 2;
  }
  else if (param_3 == 3) {
    param_2 = *(int *)(param_1 + 0x1c) + param_2 * 2 + 1;
  }
  else {
    param_2 = *(int *)(param_1 + 0x1c) + param_2;
  }
  return param_2;
}



/* ===== FUN_00039b18 @ 00039b18 size=208 ===== */

uint FUN_00039b18(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_2 + *(int *)(param_1 + 0x2c);
  if (param_3 == 5) {
    if ((uVar1 & 1) == 0) {
      uVar1 = uVar1 >> 1;
    }
    else {
      uVar1 = (*(uint *)(param_1 + 8) >> 1) + (uVar1 >> 1);
    }
  }
  else if (param_3 == 6) {
    if ((uVar1 & 1) == 0) {
      uVar1 = (*(uint *)(param_1 + 8) >> 1) + (uVar1 >> 1);
    }
    else {
      uVar1 = uVar1 >> 1;
    }
  }
  return uVar1;
}



/* ===== FUN_00039be8 @ 00039be8 size=664 ===== */

void FUN_00039be8(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x480) != '\0') {
    *(undefined1 *)(param_1 + 0x480) = 0;
    *(undefined1 *)(param_1 + 0x481) = 1;
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x74);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x8c);
    if (*(int *)(param_1 + 0x74) == 0) {
      if (*(int *)(param_1 + 0x70) == 9) {
        uVar1 = 3;
      }
      else if (*(int *)(param_1 + 0x70) == 2) {
        uVar1 = 4;
      }
      else if (*(int *)(param_1 + 0x70) == 0xc) {
        uVar1 = 6;
      }
      else if (*(int *)(param_1 + 0x70) == 0xb) {
        uVar1 = 5;
      }
      else if ((*(int *)(param_1 + 0x70) == 8) || (*(int *)(param_1 + 0x70) == 7)) {
        uVar1 = 2;
      }
      else {
        uVar1 = 1;
      }
      *(undefined4 *)(param_1 + 0x80) = uVar1;
    }
    if (*(int *)(param_1 + 0x78) == 0) {
      if ((*(int *)(param_1 + 0x70) == 3) || (*(int *)(param_1 + 0x70) == 0xc)) {
        uVar1 = 2;
      }
      else if (*(int *)(param_1 + 0x70) == 10) {
        uVar1 = 6;
      }
      else if (*(int *)(param_1 + 0x70) == 2) {
        uVar1 = 8;
      }
      else {
        uVar1 = 1;
      }
      *(undefined4 *)(param_1 + 0x88) = uVar1;
    }
    if (*(int *)(param_1 + 0x8c) == 0) {
      if ((*(int *)(param_1 + 0x6c) == 1) || (*(int *)(param_1 + 0x70) != 10)) {
        if ((((*(int *)(param_1 + 0x6c) == 1) && (*(int *)(param_1 + 0x88) != 3)) &&
            (*(int *)(param_1 + 0x88) != 4)) &&
           (((*(int *)(param_1 + 0x70) != 7 && (*(int *)(param_1 + 0x70) != 9)) &&
            (*(int *)(param_1 + 0x70) != 8)))) {
          uVar1 = 2;
        }
        else {
          uVar1 = 1;
        }
      }
      else {
        uVar1 = 2;
      }
      *(undefined4 *)(param_1 + 0x90) = uVar1;
    }
    FUN_000343f0(param_1);
  }
  if (*(char *)(param_1 + 0x482) != '\0') {
    *(undefined1 *)(param_1 + 0x482) = 0;
    FUN_00036bd8(param_1);
  }
  if (*(char *)(param_1 + 0x481) != '\0') {
    *(undefined1 *)(param_1 + 0x481) = 0;
    FUN_00037148(param_1);
  }
  return;
}



/* ===== FUN_00039e80 @ 00039e80 size=376 ===== */

void FUN_00039e80(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(param_1 + (param_3 + 0x112) * 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  FUN_00039be8(param_1);
  *(undefined4 *)(param_2 + param_3 * 8) = param_4;
  *(undefined4 *)(param_2 + param_3 * 8 + 4) = param_4;
  iVar1 = __aeabi_uidiv(uVar3,*(undefined1 *)(param_1 + param_3 + 0xad));
  if (*(int *)(param_1 + 0x10) == 5) {
    *(uint *)(param_2 + param_3 * 8 + 4) =
         *(int *)(param_2 + param_3 * 8 + 4) + ((uint)(iVar2 * iVar1) >> 1);
  }
  else if (*(int *)(param_1 + 0x10) == 6) {
    *(uint *)(param_2 + param_3 * 8) =
         *(int *)(param_2 + param_3 * 8) + ((uint)(iVar2 * iVar1) >> 1);
  }
  if ((param_3 == 0) && (*(char *)(param_1 + 0xac) != '\0')) {
    FUN_00039e80(param_1,param_2,1,param_4);
  }
  return;
}



/* ===== FUN_00039ff8 @ 00039ff8 size=148 ===== */

int FUN_00039ff8(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int extraout_r1;
  int extraout_r1_00;
  bool bVar2;
  
  uVar1 = FUN_0003662c(param_1);
  __aeabi_uidivmod(param_3 + 1,uVar1);
  if ((param_2 != extraout_r1) &&
     (__aeabi_uidivmod(param_2 + 1,uVar1), bVar2 = param_3 != extraout_r1_00, param_3 = param_2,
     bVar2)) {
    param_3 = -1;
  }
  return param_3;
}



/* ===== FUN_0003a08c @ 0003a08c size=116 ===== */

char * FUN_0003a08c(int param_1)

{
  char *pcVar1;
  
  if (param_1 == 2) {
    pcVar1 = "HSV";
  }
  else if (param_1 == 3) {
    pcVar1 = "Luma";
  }
  else if (param_1 == 1) {
    pcVar1 = "Y\'CbCr";
  }
  else {
    pcVar1 = "R\'G\'B";
  }
  return pcVar1;
}



/* ===== FUN_0003a100 @ 0003a100 size=396 ===== */

void FUN_0003a100(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar1 = FUN_0003a08c(param_1[0x1b]);
  printf("tpg source WxH: %ux%u (%s)\n",uVar2,uVar3,uVar1);
  printf("tpg field: %u\n",param_1[4]);
  printf("tpg crop: %ux%u@%dx%d\n",param_1[8],param_1[9],param_1[6],param_1[7]);
  printf("tpg compose: %ux%u@%dx%d\n",param_1[0xc],param_1[0xd],param_1[10],param_1[0xb]);
  printf("tpg colorspace: %d\n",param_1[0x1c]);
  printf("tpg transfer function: %d/%d\n",param_1[0x1d],param_1[0x20]);
  printf("tpg Y\'CbCr encoding: %d/%d\n",param_1[0x1e],param_1[0x22]);
  printf("tpg HSV encoding: %d/%d\n",param_1[0x1f],param_1[0x21]);
  printf("tpg quantization: %d/%d\n",param_1[0x23],param_1[0x24]);
  printf("tpg RGB range: %d/%d\n",param_1[0x27],param_1[0x28]);
  return;
}



/* ===== FUN_0003a28c @ 0003a28c size=284 ===== */

void FUN_0003a28c(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  
  __aeabi_uidivmod(param_1[0x11b],*param_1);
  uVar1 = FUN_000306c8(param_1,param_2,extraout_r1);
  *(undefined4 *)(param_3 + 0x1c) = uVar1;
  __aeabi_uidivmod(param_1[0x11b] + param_1[0x11c],*param_1);
  uVar1 = FUN_000306c8(param_1,param_2,extraout_r1_00);
  *(undefined4 *)(param_3 + 0x20) = uVar1;
  __aeabi_uidivmod(param_1[0x11e],param_1[1]);
  *(undefined4 *)(param_3 + 0x24) = extraout_r1_01;
  __aeabi_uidivmod(param_1[0x11e] + param_1[0x11f],param_1[1]);
  *(undefined4 *)(param_3 + 0x28) = extraout_r1_02;
  return;
}



/* ===== FUN_0003a3a8 @ 0003a3a8 size=584 ===== */

void FUN_0003a3a8(uint *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint local_18;
  uint local_14;
  
  local_14 = 0;
  local_18 = *(uint *)(param_3 + 8);
  if (param_1[6] < *param_1 >> 1) {
    iVar3 = (*param_1 >> 1) - param_1[6];
  }
  else {
    iVar3 = 0;
  }
  *(int *)(param_3 + 0x2c) = iVar3;
  if (param_1[8] < *(uint *)(param_3 + 0x2c)) {
    *(uint *)(param_3 + 0x2c) = param_1[8];
  }
  uVar1 = FUN_000306c8(param_1,param_2,*(undefined4 *)(param_3 + 0x2c));
  *(undefined4 *)(param_3 + 0x2c) = uVar1;
  iVar4 = *(int *)(param_3 + 4);
  iVar3 = FUN_00030558(*param_1 >> 1);
  *(int *)(param_3 + 0x30) = iVar3 * iVar4;
  if ((int)param_1[6] < (int)param_1[0xe]) {
    local_14 = param_1[0xe] - param_1[6];
    if (param_1[8] < local_14) {
      local_14 = param_1[8];
    }
    local_14 = FUN_000306c8(param_1,param_2,local_14);
  }
  *(uint *)(param_3 + 0x38) = local_14;
  if ((param_1[0xe] + param_1[0x10] < param_1[6] + param_1[8]) &&
     (local_18 = FUN_000306c8(param_1,param_2,(param_1[0xe] + param_1[0x10]) - param_1[6]),
     *(uint *)(param_3 + 8) < local_18)) {
    local_18 = *(uint *)(param_3 + 8);
  }
  *(uint *)(param_3 + 0x3c) = local_18;
  if (*(char *)(param_3 + 1) == '\0') {
    uVar2 = 3;
  }
  else {
    uVar2 = 2;
  }
  *(uint *)(param_3 + 0x34) = (uint)(uVar2 == param_1[4]);
  return;
}



/* ===== FUN_0003a5f0 @ 0003a5f0 size=2236 ===== */

void FUN_0003a5f0(int param_1,char *param_2,int param_3,undefined4 param_4,void *param_5)

{
  size_t sVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  int local_10;
  uint local_c;
  
  sVar1 = *(size_t *)(param_2 + 4);
  iVar2 = *(int *)(param_2 + 8);
  uVar3 = *(uint *)(param_2 + 0x14);
  puVar4 = (uint *)(param_1 + 0x48);
  puVar5 = (uint *)(param_1 + 0x38);
  puVar6 = (uint *)(param_1 + 0x18);
  if ((((*param_2 != '\0') && (param_2[1] != '\x01')) && (uVar3 == 0)) &&
     (*(int *)(param_2 + 0x2c) != 0)) {
    memcpy(param_5,(void *)(*(int *)(param_1 + (param_3 + 0x152) * 4) + *(int *)(param_2 + 0x30)),
           *(size_t *)(param_2 + 0x2c));
  }
  if (((*(char *)(param_1 + 0x461) != '\0') && (*(uint *)(param_1 + 0x3c) <= uVar3)) &&
     (uVar3 < (uint)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x44)))) {
    iVar7 = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x44);
    iVar8 = *(int *)(param_2 + 0x38);
    iVar9 = *(int *)(param_2 + 0x3c);
    if (((uVar3 == *(uint *)(param_1 + 0x3c)) || (uVar3 == *(int *)(param_1 + 0x3c) + 1U)) ||
       ((uVar3 == iVar7 - 1U || (uVar3 == iVar7 - 2U)))) {
      memcpy((void *)((int)param_5 + iVar8),*(void **)(param_1 + (param_3 + 0x154) * 4 + 4),
             iVar9 - iVar8);
    }
    else {
      if (((int)*puVar6 <= (int)*puVar5) && (*puVar5 < *puVar6 + *(int *)(param_1 + 0x20))) {
        memcpy((void *)((int)param_5 + iVar8),*(void **)(param_1 + (param_3 + 0x154) * 4 + 4),sVar1)
        ;
      }
      if ((*puVar6 < *puVar5 + *(int *)(param_1 + 0x40)) &&
         (*puVar5 + *(int *)(param_1 + 0x40) <= *puVar6 + *(int *)(param_1 + 0x20))) {
        memcpy((void *)((int)param_5 + (iVar9 - sVar1)),
               *(void **)(param_1 + (param_3 + 0x154) * 4 + 4),sVar1);
      }
    }
  }
  if (((*(int *)(param_1 + 0x58) != 2) && (*(uint *)(param_1 + 0x3c) <= uVar3)) &&
     (uVar3 < (uint)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x44)))) {
    memcpy(param_5,*(void **)(param_1 + (param_3 + 0x158) * 4),*(size_t *)(param_2 + 0x38));
    memcpy((void *)((int)param_5 + *(int *)(param_2 + 0x3c)),
           *(void **)(param_1 + (param_3 + 0x158) * 4),iVar2 - *(int *)(param_2 + 0x3c));
  }
  if (((*(char *)(param_1 + 0x462) != '\0') && (*(uint *)(param_1 + 0x4c) <= uVar3)) &&
     ((uVar3 < (uint)(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54)) &&
      ((*puVar4 < *puVar6 + *(int *)(param_1 + 0x20) &&
       (*puVar6 <= *puVar4 + *(int *)(param_1 + 0x50))))))) {
    local_c = *puVar4;
    local_10 = *(int *)(param_1 + 0x50);
    if (local_c < *puVar6) {
      local_10 = local_10 + (local_c - *puVar6);
      local_c = *puVar6;
    }
    if (*puVar6 + *(int *)(param_1 + 0x20) < local_c + local_10) {
      local_10 = *(int *)(param_1 + 0x20) + (*puVar6 - local_c);
    }
    iVar2 = FUN_000306c8(param_1,param_3,local_c - *puVar6,local_c - *puVar6,param_4);
    sVar1 = FUN_000306c8(param_1,param_3,local_10);
    memcpy((void *)((int)param_5 + iVar2),*(void **)(param_1 + (param_3 + 0x154) * 4 + 4),sVar1);
  }
  if (*(char *)(param_1 + 0x463) != '\0') {
    iVar2 = FUN_000305f4(param_1,param_3,*(uint *)(param_1 + 0x30) / 3);
    puVar10 = (undefined1 *)((int)param_5 + iVar2);
    *puVar10 = 0xff;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10[3] = ~((byte)~(byte)((((*(uint *)(param_2 + 0x34) & 3) << 6 |
                                   (*(uint *)(param_2 + 0x34) & 0x3f) << 2 |
                                   (*(uint *)(param_2 + 0x34) & 0x7f) << 1 |
                                  *(uint *)(param_2 + 0x34) & 0xff) << 0x19) >> 0x18) >> 1);
  }
  if (*(char *)(param_1 + 0x464) != '\0') {
    iVar2 = FUN_000305f4(param_1,param_3,(uint)(*(int *)(param_1 + 0x30) << 1) / 3);
    puVar10 = (undefined1 *)((int)param_5 + iVar2);
    *puVar10 = 0xff;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10[3] = ~((byte)~(byte)((((*(uint *)(param_2 + 0x34) & 3) << 6 | 0x18 |
                                   ((*(uint *)(param_2 + 0x34) & 0xff ^ 1) & 0x3f) << 2 |
                                   (*(uint *)(param_2 + 0x34) & 0x7f) << 1 |
                                  *(uint *)(param_2 + 0x34) & 0xff ^ 1) << 0x19) >> 0x18) >> 1);
  }
  return;
}



/* ===== FUN_0003aeac @ 0003aeac size=1680 ===== */

void FUN_0003aeac(uint *param_1,int param_2,int param_3,uint param_4,void *param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  int iVar6;
  size_t __n;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  void *local_2c;
  void *local_28;
  void *local_24;
  void *local_20;
  uint local_18;
  uint local_14;
  
  iVar6 = *(int *)(param_2 + 4);
  __n = *(size_t *)(param_2 + 8);
  iVar7 = *(int *)(param_2 + 0x1c);
  iVar8 = *(int *)(param_2 + 0x20);
  iVar9 = *(int *)(param_2 + 0x24);
  iVar10 = *(int *)(param_2 + 0x28);
  local_14 = *(uint *)(param_2 + 0x14);
  local_18 = *(uint *)(param_2 + 0x18);
  iVar2 = FUN_000306c8(param_1,param_3,param_1[6]);
  bVar1 = false;
  bVar12 = (local_14 & 1) != 0;
  if (*(uint *)(param_2 + 0x10) <= param_4) {
    if (*(uint *)(param_2 + 0x10) == param_1[0xd]) {
      return;
    }
    if ((char)param_1[0x118] != '\x01') {
      return;
    }
    bVar1 = true;
  }
  if (*(char *)((int)param_1 + 0x459) != '\0') {
    local_14 = (param_1[1] - local_14) - 1;
    local_18 = (param_1[1] - local_18) - 1;
  }
  if (bVar1) {
    local_20 = (void *)param_1[param_3 + 0x155];
    local_24 = (void *)param_1[param_3 + 0x155];
  }
  else if ((param_1[0x16] == 2) ||
          ((param_1[0xf] <= local_14 && (local_14 < param_1[0xf] + param_1[0x11])))) {
    if ((param_1[0x115] == 0x15) || (param_1[0x16] == 2)) {
      uVar11 = param_1[param_3 + 0x152];
      iVar2 = FUN_00030558(*param_1 >> 1);
      local_20 = (void *)(uVar11 + iVar6 * iVar2);
      uVar11 = param_1[param_3 + 0x152];
      iVar2 = FUN_00030558(*param_1 >> 1);
      local_24 = (void *)(uVar11 + iVar6 * iVar2);
    }
    else {
      __aeabi_uidivmod(local_14 + iVar9,param_1[1]);
      __aeabi_uidivmod(local_14 + iVar10,param_1[1]);
      iVar6 = FUN_000366bc(param_1,extraout_r1);
      iVar3 = FUN_000366bc(param_1,extraout_r1_00);
      local_20 = (void *)(param_1[iVar6 * 3 + param_3 + 0x122] + iVar7);
      local_24 = (void *)(param_1[iVar3 * 3 + param_3 + 0x122] + iVar8);
      if ((1 < *(byte *)((int)param_1 + param_3 + 0xad)) && (local_14 != local_18)) {
        __aeabi_uidivmod(local_18 + iVar9,param_1[1]);
        uVar4 = FUN_000366bc(param_1,extraout_r1_01);
        __aeabi_uidivmod(local_18 + iVar10,param_1[1]);
        uVar5 = FUN_000366bc(param_1,extraout_r1_02);
        switch(param_1[4]) {
        case 1:
        case 2:
        case 3:
        case 5:
        case 6:
          iVar6 = FUN_00039ff8(param_1,iVar6,uVar4);
          if (-1 < iVar6) {
            local_20 = (void *)(param_1[iVar6 * 3 + param_3 + 0x13a] + iVar7);
          }
          iVar6 = FUN_00039ff8(param_1,iVar3,uVar5);
          if (-1 < iVar6) {
            local_24 = (void *)(param_1[iVar6 * 3 + param_3 + 0x13a] + iVar8);
          }
          break;
        case 4:
        case 8:
        case 9:
          iVar6 = FUN_00039ff8(param_1,iVar6,iVar3);
          if (-1 < iVar6) {
            local_24 = (void *)(param_1[iVar6 * 3 + param_3 + 0x13a] + iVar7);
            local_20 = local_24;
          }
        }
      }
      local_20 = (void *)((int)local_20 + iVar2);
      local_24 = (void *)((int)local_24 + iVar2);
    }
  }
  else {
    local_20 = (void *)param_1[param_3 + 0x158];
    local_24 = (void *)param_1[param_3 + 0x158];
  }
  if ((char)param_1[5] == '\0') {
    if (*(char *)(param_2 + 1) == '\0') {
      local_28 = local_20;
      local_2c = local_24;
    }
    else {
      local_28 = local_24;
      local_2c = local_20;
    }
  }
  else {
    local_2c = local_20;
    local_28 = local_20;
  }
  switch(param_1[4]) {
  case 2:
    memcpy(param_5,local_28,__n);
    break;
  case 3:
    memcpy(param_5,local_2c,__n);
    break;
  case 4:
  case 5:
  case 6:
  case 8:
    if (bVar12) {
      memcpy(param_5,local_2c,__n);
    }
    else {
      memcpy(param_5,local_28,__n);
    }
    break;
  default:
    memcpy(param_5,local_20,__n);
    break;
  case 9:
    if (bVar12) {
      memcpy(param_5,local_28,__n);
    }
    else {
      memcpy(param_5,local_2c,__n);
    }
  }
  return;
}



/* ===== FUN_0003b580 @ 0003b580 size=1116 ===== */

void FUN_0003b580(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  undefined1 local_70;
  undefined1 local_6f;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  
  if (((*(int *)(param_1 + 0x10) == 3) || (*(int *)(param_1 + 0x10) == 2)) ||
     (*(int *)(param_1 + 0x10) == 7)) {
    local_28 = 2;
  }
  else {
    local_28 = 1;
  }
  uVar1 = __aeabi_uidiv(*(undefined4 *)(param_1 + 0x24),local_28);
  local_2c = __aeabi_uidiv(uVar1,*(undefined4 *)(param_1 + 0x34));
  uVar1 = __aeabi_uidiv(*(undefined4 *)(param_1 + 0x24),local_28);
  __aeabi_uidivmod(uVar1,*(undefined4 *)(param_1 + 0x34));
  local_14 = 0;
  local_18 = 0;
  local_30 = extraout_r1;
  FUN_00039be8(param_1);
  local_70 = param_3 != 0 || param_4 != 0;
  local_6f = (param_3 & 0xf900) != 0;
  local_6c = *(undefined4 *)(param_1 + (param_5 + 0x10e) * 4 + 4);
  local_68 = FUN_000305f4(param_1,param_5,*(undefined4 *)(param_1 + 0x30));
  local_64 = *(int *)(param_1 + (param_5 + 0x112) * 4);
  local_60 = (uint)(*(int *)(param_1 + 0x45c) * *(int *)(param_1 + 0x34)) / 100;
  FUN_0003a28c(param_1,param_5,&local_70);
  FUN_0003a3a8(param_1,param_5,&local_70);
  iVar2 = FUN_000305f4(param_1,param_5,*(undefined4 *)(param_1 + 0x28));
  local_1c = 0;
  do {
    if (*(uint *)(param_1 + 0x34) <= local_1c) {
      return;
    }
    local_5c = FUN_00039a84(param_1,local_14,*(undefined4 *)(param_1 + 0x10));
    local_58 = local_5c;
    local_20 = FUN_00039b18(param_1,local_1c,*(undefined4 *)(param_1 + 0x10));
    local_14 = local_14 + local_2c;
    local_18 = local_18 + local_30;
    if (*(uint *)(param_1 + 0x34) <= local_18) {
      local_18 = local_18 - *(int *)(param_1 + 0x34);
      local_14 = local_14 + 1;
    }
    iVar3 = FUN_000305cc(param_1);
    if (iVar3 != 0) {
      param_5 = FUN_000364f4(param_1,local_20);
    }
    if (*(byte *)(param_1 + param_5 + 0xad) < 2) {
LAB_0003b948:
      FUN_0003aeac(param_1,&local_70,param_5,local_1c,param_6 + iVar2 + local_20 * local_64);
      FUN_0003a5f0(param_1,&local_70,param_5,local_1c,param_6 + iVar2 + local_20 * local_64);
    }
    else if ((*(int *)(param_1 + 0x10) == 6) || (*(int *)(param_1 + 0x10) == 5)) {
      local_24 = local_14;
      if ((local_1c & 2) == 0) {
        local_24 = local_14 + local_2c;
        if (*(uint *)(param_1 + 0x34) <= local_18 + local_30) {
          local_24 = local_24 + 1;
        }
        local_58 = FUN_00039a84(param_1,local_24,*(undefined4 *)(param_1 + 0x10));
        goto LAB_0003b920;
      }
    }
    else if ((local_1c & 1) == 0) {
      local_58 = FUN_00039a84(param_1,local_14,*(undefined4 *)(param_1 + 0x10));
LAB_0003b920:
      local_20 = __aeabi_uidiv(local_20,*(undefined1 *)(param_1 + param_5 + 0xad));
      goto LAB_0003b948;
    }
    local_1c = local_1c + 1;
  } while( true );
}



/* ===== FUN_0003b9dc @ 0003b9dc size=196 ===== */

void FUN_0003b9dc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = 0;
  if (*(uint *)(param_1 + 0xa4) < 2) {
    for (local_10 = 0; uVar2 = FUN_0003058c(param_1), local_10 < (uint)uVar2;
        local_10 = local_10 + 1) {
      FUN_0003b580(param_1,(int)((ulonglong)uVar2 >> 0x20),param_3,param_4,local_10,
                   param_6 + local_c);
      iVar1 = FUN_00030748(param_1,local_10);
      local_c = local_c + iVar1;
    }
  }
  else {
    FUN_0003b580(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}



/* ===== FUN_0003baa0 @ 0003baa0 size=664 ===== */

int FUN_0003baa0(int param_1,uint param_2)

{
  if (param_2 < 0x38414263) {
    if ((param_2 < 0x38414261) && (param_2 != 0x31384142)) {
      if (param_2 < 0x31384143) {
        if (param_2 != 0x30314442) {
          if (param_2 < 0x30314443) {
            if ((param_2 != 0x30314142) && (param_2 != 0x30314247)) {
              return param_1;
            }
          }
          else if ((param_2 != 0x30314742) && (param_2 != 0x30314752)) {
            return param_1;
          }
        }
      }
      else if (param_2 != 0x32314742) {
        if (param_2 < 0x32314743) {
          if ((param_2 != 0x32314142) && (param_2 != 0x32314247)) {
            return param_1;
          }
        }
        else if ((param_2 != 0x32314752) && (param_2 != 0x32525942)) {
          return param_1;
        }
      }
    }
  }
  else if (param_2 != 0x41414270) {
    if (param_2 < 0x41414271) {
      if (param_2 < 0x38415263) {
        if ((param_2 < 0x38415261) && (1 < param_2 + 0xc7beb89f)) {
          return param_1;
        }
      }
      else if (param_2 != 0x38416761) {
        return param_1;
      }
    }
    else if (param_2 != 0x41416770) {
      if (param_2 < 0x41416771) {
        if ((param_2 != 0x41414770) && (param_2 != 0x41415270)) {
          return param_1;
        }
      }
      else if (((param_2 != 0x47425247) && (param_2 != 0x47524247)) && (param_2 != 0x42474752)) {
        return param_1;
      }
    }
  }
  return param_1 << 1;
}



/* ===== FUN_0003bd38 @ 0003bd38 size=592 ===== */

void FUN_0003bd38(uint32_t *param_1,uint param_2,uint param_3,uint param_4)

{
  uint32_t uVar1;
  uint local_40;
  uint32_t local_28;
  uint32_t local_24;
  uint local_20;
  uint32_t local_1c;
  uint32_t *local_18;
  uint32_t *local_14;
  uint32_t *local_10;
  uint32_t local_c;
  
  uVar1 = ntohl(0x2dead43);
  local_c = ntohl(0x2dead41);
  local_14 = (uint32_t *)((int)param_1 + (param_2 - param_3));
  local_18 = (uint32_t *)0x0;
  local_1c = 0;
  if (param_2 != param_3) {
    local_40 = param_4;
    if ((param_4 & 3) != 0) {
      local_40 = 0;
    }
    if (local_40 == 0) {
      local_c = uVar1;
    }
    local_10 = param_1;
    for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 4) {
      local_24 = *local_14;
      local_28 = 1;
      if ((local_40 == 0) || (local_24 != local_c)) {
        if (local_24 == uVar1) {
          local_24 = local_14[1];
          local_14 = local_14 + 2;
          local_28 = ntohl(*local_14);
          local_20 = local_20 + 8;
        }
        while (local_28 != 0) {
          *local_10 = local_24;
          local_28 = local_28 - 1;
          local_10 = local_10 + 1;
        }
        if (local_10 == local_18) {
          while (local_1c != 0) {
            memcpy(local_10,(void *)((int)local_10 - (local_40 & 0xfffffffc)),local_40);
            local_10 = (uint32_t *)((int)local_10 + (local_40 & 0xfffffffc));
            local_1c = local_1c - 1;
          }
          local_18 = (uint32_t *)0x0;
          local_1c = local_1c - 1;
        }
      }
      else {
        local_14 = local_14 + 1;
        local_1c = ntohl(*local_14);
        local_20 = local_20 + 4;
        local_18 = (uint32_t *)((int)local_10 + (local_40 & 0xfffffffc));
      }
      local_14 = local_14 + 1;
    }
  }
  return;
}



/* ===== FUN_0003bf88 @ 0003bf88 size=1016 ===== */

uint FUN_0003bf88(uint32_t *param_1,uint param_2,uint param_3)

{
  uint32_t uVar1;
  uint32_t uVar2;
  int iVar3;
  uint32_t uVar4;
  int extraout_r1;
  uint32_t *puVar5;
  uint uVar6;
  uint local_44;
  uint32_t local_28;
  uint32_t local_24;
  uint local_20;
  uint32_t *local_1c;
  uint32_t *local_18;
  uint32_t local_14;
  
  uVar1 = ntohl(0x2dead43);
  local_14 = ntohl(0x2dead41);
  uVar2 = ntohl(0x2dead42);
  if ((((uint)param_1 & 3) == 0) && ((param_2 & 3) == 0)) {
    local_44 = param_3;
    if ((param_3 & 3) != 0) {
      local_44 = 0;
    }
    if (local_44 == 0) {
      local_14 = uVar1;
    }
    local_1c = param_1;
    local_18 = param_1;
    for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 4) {
      if ((local_44 == 0) || (__aeabi_uidivmod(local_20,local_44), extraout_r1 != 0)) {
LAB_0003c15c:
        if ((uVar1 == *local_18) || (local_14 == *local_18)) {
          *local_1c = uVar2;
          local_1c = local_1c + 1;
        }
        else {
          uVar6 = param_2;
          if (local_44 != 0) {
            iVar3 = __aeabi_uidiv(local_20,local_44);
            uVar6 = local_44 * (iVar3 + 1);
          }
          if (local_20 < uVar6 - 0x10) {
            if (((*local_18 == local_18[1]) && (*local_18 == local_18[2])) &&
               (*local_18 == local_18[3])) {
              for (local_24 = 4;
                  (local_24 * 4 + local_20 < uVar6 && (*local_18 == local_18[local_24]));
                  local_24 = local_24 + 1) {
              }
              *local_1c = uVar1;
              puVar5 = local_1c + 2;
              local_1c[1] = local_18[1];
              local_1c = local_1c + 3;
              uVar4 = htonl(local_24);
              *puVar5 = uVar4;
              local_18 = local_18 + local_24 + 0x3fffffff;
              local_20 = local_20 + (local_24 + 0x3fffffff) * 4;
            }
            else {
              *local_1c = *local_18;
              local_1c = local_1c + 1;
            }
          }
          else {
            *local_1c = *local_18;
            local_1c = local_1c + 1;
          }
        }
      }
      else {
        local_28 = 0;
        while ((local_44 * (local_28 + 2) + local_20 <= param_2 &&
               (iVar3 = memcmp(local_18,local_18 + (local_44 >> 2) * (local_28 + 1),local_44),
               iVar3 == 0))) {
          local_28 = local_28 + 1;
        }
        if (local_28 == 0) goto LAB_0003c15c;
        *local_1c = local_14;
        uVar4 = htonl(local_28);
        local_1c[1] = uVar4;
        local_20 = (local_44 * local_28 + local_20) - 4;
        local_18 = (uint32_t *)((int)local_18 + ((local_44 * local_28 & 0xfffffffc) - 4));
        local_1c = local_1c + 2;
      }
      local_18 = local_18 + 1;
    }
    param_2 = (int)local_1c - (int)param_1;
  }
  return param_2;
}



/* ===== _fini @ 0003c380 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 0006f000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_unwind_cpp_pr0 @ 0006f004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_unwind_cpp_pr1 @ 0006f010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0006f014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0006f018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::isxdigit @ 0006f01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isxdigit(int param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getsubopt @ 0006f020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getsubopt(char **__optionp,char **__tokens,char **__valuep)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 0006f024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uidiv @ 0006f028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uidiv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 0006f02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0006f030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__cxx11::string::_M_replace @ 0006f034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_replace(uint param_1,uint param_2,char *param_3,uint param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::_Rb_tree_insert_and_rebalance @ 0006f038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_insert_and_rebalance
               (bool param_1,_Rb_tree_node_base *param_2,_Rb_tree_node_base *param_3,
               _Rb_tree_node_base *param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::listen @ 0006f03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int listen(int __fd,int __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::isalpha @ 0006f040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isalpha(int param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0006f044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fcntl @ 0006f048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoull @ 0006f04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong strtoull(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0006f050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__cxx11::string::_M_construct @ 0006f054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_construct(uint param_1,char param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::closedir @ 0006f058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::_Rb_tree_increment @ 0006f05c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_increment(_Rb_tree_node_base *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__cxx11::string::_M_append @ 0006f060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_append(char *param_1,uint param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_end_catch @ 0006f064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_end_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::isalnum @ 0006f068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isalnum(int param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0006f06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 0006f070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 0006f074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 0006f078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 0006f07c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__cxx11::string::append @ 0006f080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::append(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_idiv @ 0006f084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_idiv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_close @ 0006f088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_close(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0006f08c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 0006f090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::munmap @ 0006f094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0006f098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen @ 0006f09c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0006f0a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__gxx_personality_v0 @ 0006f0a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __gxx_personality_v0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0006f0a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 0006f0ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_rethrow @ 0006f0b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_rethrow(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_ioctl @ 0006f0b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_ioctl(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::select @ 0006f0b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atol @ 0006f0bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long atol(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::klogctl @ 0006f0c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int klogctl(int __type,char *__bufp,int __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 0006f0c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 0006f0c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::connect @ 0006f0cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::_Rb_tree_decrement @ 0006f0d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_decrement(_Rb_tree_node_base *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 0006f0d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtod @ 0006f0d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double strtod(char *__nptr,char **__endptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ntohl @ 0006f0dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint32_t ntohl(uint32_t __netlong)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 0006f0e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clock_gettime @ 0006f0e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0006f0e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uldivmod @ 0006f0ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uldivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 0006f0f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uidivmod @ 0006f0f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uidivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::htonl @ 0006f0f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint32_t htonl(uint32_t __hostlong)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 0006f0fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_atexit @ 0006f100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__throw_length_error @ 0006f104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_length_error(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 0006f108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncasecmp @ 0006f10c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncasecmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 0006f110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__cxx11::string::reserve @ 0006f114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::reserve(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 0006f118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_end_cleanup @ 0006f11c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_end_cleanup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__cxx11::string::swap @ 0006f120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::swap(string *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_ldivmod @ 0006f124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_ldivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__cxx11::string::_M_create @ 0006f128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_create(uint *param_1,uint param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__throw_out_of_range_fmt @ 0006f12c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_out_of_range_fmt(char *param_1,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readdir @ 0006f130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent * readdir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 0006f134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__cxx11::string::_M_erase @ 0006f138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_erase(uint param_1,uint param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_idivmod @ 0006f13c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_idivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fdopen @ 0006f140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fdopen(int __fd,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 0006f144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fseek @ 0006f148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gethostbyname @ 0006f14c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

hostent * gethostbyname(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0006f150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0006f154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::opendir @ 0006f158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 0006f15c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__throw_logic_error @ 0006f160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_logic_error(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 0006f164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::operator.new @ 0006f168 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 0006f16c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_begin_catch @ 0006f170 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_begin_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 0006f174 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open @ 0006f178 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0006f17c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__cxx11::string::_M_assign @ 0006f180 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_assign(string *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mmap @ 0006f184 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rand @ 0006f188 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rand(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readlink @ 0006f18c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_open @ 0006f190 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_open(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__cxx11::string::_M_mutate @ 0006f194 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_mutate(uint param_1,uint param_2,char *param_3,uint param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0006f198 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::operator.delete @ 0006f19c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_mmap @ 0006f1a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_mmap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 0006f1a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__detail::_List_node_base::_M_hook @ 0006f1a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__detail::_List_node_base::_M_hook(_List_node_base *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::accept @ 0006f1ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::bind @ 0006f1b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0006f1b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgetc @ 0006f1b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fgetc(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::socket @ 0006f1bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tolower @ 0006f1c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tolower(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_munmap @ 0006f1c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_munmap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_ul2d @ 0006f1c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_ul2d(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


