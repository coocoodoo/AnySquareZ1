// librga.so — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00015dcc size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::poll @ 00015df0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_poll_0004600c)(__fds);
  return iVar1;
}



/* ===== rga_get_start_time_ms @ 00015dfc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rga_get_start_time_ms(void)

{
  (*(code *)PTR_rga_get_start_time_ms_00046010)();
  return;
}



/* ===== get_int_property @ 00015e08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void get_int_property(void)

{
  (*(code *)PTR_get_int_property_00046014)();
  return;
}



/* ===== RockchipRga::RkRgaFreeBuffer @ 00015e14 size=12 ===== */

void __thiscall RockchipRga::RkRgaFreeBuffer(RockchipRga *this,int param_1,bo *param_2)

{
  (*(code *)PTR_RkRgaFreeBuffer_00046018)(this);
  return;
}



/* ===== rga_check_limit @ 00015e20 size=12 ===== */

void rga_check_limit(void)

{
  (*(code *)PTR_rga_check_limit_0004601c)();
  return;
}



/* ===== rga_single_task_submit @ 00015e2c size=12 ===== */

void rga_single_task_submit(void)

{
  (*(code *)PTR_rga_single_task_submit_00046020)();
  return;
}



/* ===== rga_job_create @ 00015e38 size=12 ===== */

void rga_job_create(uint param_1)

{
  (*(code *)PTR_rga_job_create_00046024)(param_1);
  return;
}



/* ===== rga_task_submit @ 00015e44 size=12 ===== */

void rga_task_submit(void)

{
  (*(code *)PTR_rga_task_submit_00046028)();
  return;
}



/* ===== rga_error_msg_set @ 00015e50 size=12 ===== */

void rga_error_msg_set(char *param_1,...)

{
  (*(code *)PTR_rga_error_msg_set_0004602c)(param_1);
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00015e5c size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00046030)();
  return;
}



/* ===== NormalRgaFormatHasAlpha @ 00015e68 size=12 ===== */

void NormalRgaFormatHasAlpha(int param_1)

{
  (*(code *)PTR_NormalRgaFormatHasAlpha_00046034)(param_1);
  return;
}



/* ===== rga_check_align @ 00015e74 size=12 ===== */

void rga_check_align(void)

{
  (*(code *)PTR_rga_check_align_00046038)();
  return;
}



/* ===== rga_check_blend @ 00015e80 size=12 ===== */

void rga_check_blend(void)

{
  (*(code *)PTR_rga_check_blend_0004603c)();
  return;
}



/* ===== rga_is_buffer_valid @ 00015e8c size=12 ===== */

void rga_is_buffer_valid(void)

{
  (*(code *)PTR_rga_is_buffer_valid_00046040)();
  return;
}



/* ===== <EXTERNAL>::calloc @ 00015e98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00046044)(__nmemb);
  return pvVar1;
}



/* ===== RockchipRga::RkRgaCollorFill @ 00015ea4 size=12 ===== */

void __thiscall RockchipRga::RkRgaCollorFill(RockchipRga *this,rga_info *param_1)

{
  (*(code *)PTR_RkRgaCollorFill_00046048)(this);
  return;
}



/* ===== imflip @ 00015eb0 size=12 ===== */

void imflip(void)

{
  (*(code *)PTR_imflip_0004604c)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 00015ebc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00046050)();
  return piVar1;
}



/* ===== RgaInit @ 00015ec8 size=12 ===== */

void RgaInit(void **param_1)

{
  (*(code *)PTR_RgaInit_00046054)(param_1);
  return;
}



/* ===== rga_version_table_get_minimum_index @ 00015ed4 size=12 ===== */

void rga_version_table_get_minimum_index
               (rga_version_t *param_1,rga_version_bind_table_entry_t *param_2,int param_3)

{
  (*(code *)PTR_rga_version_table_get_minimum_index_00046058)(param_1);
  return;
}



/* ===== <EXTERNAL>::std::__cxx11::string::_M_replace @ 00015ee0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_replace(uint param_1,uint param_2,char *param_3,uint param_4)

{
  (*(code *)PTR__M_replace_0004605c)(param_1);
  return;
}



/* ===== <EXTERNAL>::std::__throw_bad_cast @ 00015eec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_cast(void)

{
  (*(code *)PTR___throw_bad_cast_00046060)();
  return;
}



/* ===== NormalRgaSetAlphaEnInfo @ 00015ef8 size=12 ===== */

void NormalRgaSetAlphaEnInfo
               (rga_req *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
               uint param_7)

{
  (*(code *)PTR_NormalRgaSetAlphaEnInfo_00046064)(param_1);
  return;
}



/* ===== impalette @ 00015f04 size=12 ===== */

void impalette(void)

{
  (*(code *)PTR_impalette_00046068)();
  return;
}



/* ===== <EXTERNAL>::getenv @ 00015f10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_0004606c)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00015f1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00046070)(__ptr);
  return sVar1;
}



/* ===== rga_sync_merge @ 00015f28 size=12 ===== */

void rga_sync_merge(char *param_1,int param_2,int param_3)

{
  (*(code *)PTR_rga_sync_merge_00046074)(param_1);
  return;
}



/* ===== rga_version_table_check_minimum_range @ 00015f34 size=12 ===== */

void rga_version_table_check_minimum_range
               (rga_version_t *param_1,rga_version_bind_table_entry_t *param_2,int param_3,
               int param_4)

{
  (*(code *)PTR_rga_version_table_check_minimum_range_00046078)(param_1);
  return;
}



/* ===== <EXTERNAL>::std::ios_base::ios_base @ 00015f40 size=12 ===== */

void __thiscall std::ios_base::ios_base(ios_base *this)

{
  (*(code *)PTR_ios_base_0004607c)(this);
  return;
}



/* ===== <EXTERNAL>::memcpy @ 00015f4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00046080)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::__cxa_guard_acquire @ 00015f58 size=12 ===== */

void __cxa_guard_acquire(void)

{
  (*(code *)PTR___cxa_guard_acquire_00046084)();
  return;
}



/* ===== RockchipRga::RkRgaAllocBuffer @ 00015f64 size=12 ===== */

void __thiscall
RockchipRga::RkRgaAllocBuffer
          (RockchipRga *this,int param_1,bo *param_2,int param_3,int param_4,int param_5,int param_6
          )

{
  (*(code *)PTR_RkRgaAllocBuffer_00046088)(this);
  return;
}



/* ===== rga_check_external @ 00015f70 size=12 ===== */

void rga_check_external(void)

{
  (*(code *)PTR_rga_check_external_0004608c)();
  return;
}



/* ===== NormalRgaSetPatVirtualInfo @ 00015f7c size=12 ===== */

void NormalRgaSetPatVirtualInfo
               (rga_req *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
               RECT *param_7,uint param_8,uchar param_9)

{
  (*(code *)PTR_NormalRgaSetPatVirtualInfo_00046090)(param_1);
  return;
}



/* ===== <EXTERNAL>::std::__throw_system_error @ 00015f88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_system_error(int param_1)

{
  (*(code *)PTR___throw_system_error_00046094)(param_1);
  return;
}



/* ===== NormalRgaSetColorFillMode @ 00015f94 size=12 ===== */

void NormalRgaSetColorFillMode
               (rga_req *param_1,COLOR_FILL *param_2,uchar param_3,uchar param_4,uint param_5,
               ushort param_6,ushort param_7,uchar param_8,uchar param_9,uchar param_10)

{
  (*(code *)PTR_NormalRgaSetColorFillMode_00046098)(param_1,param_2,param_3,param_4);
  return;
}



/* ===== imfillTaskArray @ 00015fa0 size=12 ===== */

void imfillTaskArray(void)

{
  (*(code *)PTR_imfillTaskArray_0004609c)();
  return;
}



/* ===== immosaic @ 00015fac size=12 ===== */

void immosaic(void)

{
  (*(code *)PTR_immosaic_000460a0)();
  return;
}



/* ===== imfillTask @ 00015fb8 size=12 ===== */

void imfillTask(void)

{
  (*(code *)PTR_imfillTask_000460a4)();
  return;
}



/* ===== <EXTERNAL>::operator.delete @ 00015fc4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_000460a8)(param_1);
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 00015fd0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_000460ac)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::std::ctype<char>::_M_widen_init @ 00015fdc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ctype<char>::_M_widen_init(void)

{
  (*(code *)PTR__M_widen_init_000460b0)();
  return;
}



/* ===== <EXTERNAL>::putchar @ 00015fe8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_000460b4)(__c);
  return iVar1;
}



/* ===== NormalRgaSetSrcActiveInfo @ 00015ff4 size=12 ===== */

void NormalRgaSetSrcActiveInfo(rga_req *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  (*(code *)PTR_NormalRgaSetSrcActiveInfo_000460b8)(param_1);
  return;
}



/* ===== <EXTERNAL>::gettimeofday @ 00016000 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_000460bc)(__tv);
  return iVar1;
}



/* ===== NormalRgaLogOutRgaReq @ 0001600c size=12 ===== */

void NormalRgaLogOutRgaReq(void)

{
  (*(code *)PTR_NormalRgaLogOutRgaReq_000460c0)();
  return;
}



/* ===== improcess @ 00016018 size=12 ===== */

void improcess(void)

{
  (*(code *)PTR_improcess_000460c4)();
  return;
}



/* ===== rga_version_compare @ 00016024 size=12 ===== */

void rga_version_compare(void)

{
  (*(code *)PTR_rga_version_compare_000460c8)();
  return;
}



/* ===== RockchipRga::RkRgaCollorPalette @ 00016030 size=12 ===== */

void __thiscall
RockchipRga::RkRgaCollorPalette
          (RockchipRga *this,rga_info *param_1,rga_info *param_2,rga_info *param_3)

{
  (*(code *)PTR_RkRgaCollorPalette_000460cc)(this);
  return;
}



/* ===== NormalRgaIsRgbFormat @ 0001603c size=12 ===== */

void NormalRgaIsRgbFormat(int param_1)

{
  (*(code *)PTR_NormalRgaIsRgbFormat_000460d0)(param_1);
  return;
}



/* ===== rga_job_cancel @ 00016048 size=12 ===== */

void rga_job_cancel(uint param_1)

{
  (*(code *)PTR_rga_job_cancel_000460d4)(param_1);
  return;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00016054 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_000460d8)();
  return;
}



/* ===== imfillArray @ 00016060 size=12 ===== */

void imfillArray(void)

{
  (*(code *)PTR_imfillArray_000460dc)();
  return;
}



/* ===== RockchipRga::RkRgaBlit @ 0001606c size=12 ===== */

void __thiscall
RockchipRga::RkRgaBlit(RockchipRga *this,rga_info *param_1,rga_info *param_2,rga_info *param_3)

{
  (*(code *)PTR_RkRgaBlit_000460e0)(this);
  return;
}



/* ===== <EXTERNAL>::std::_Rb_tree_decrement @ 00016078 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_decrement(_Rb_tree_node_base *param_1)

{
  (*(code *)PTR__Rb_tree_decrement_000460e4)(param_1);
  return;
}



/* ===== imquantize @ 00016084 size=12 ===== */

void imquantize(void)

{
  (*(code *)PTR_imquantize_000460e8)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00016090 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_000460ec)(__size);
  return pvVar1;
}



/* ===== imcvtcolor @ 0001609c size=12 ===== */

void imcvtcolor(void)

{
  (*(code *)PTR_imcvtcolor_000460f0)();
  return;
}



/* ===== querystring @ 000160a8 size=12 ===== */

void querystring(void)

{
  (*(code *)PTR_querystring_000460f4)();
  return;
}



/* ===== <EXTERNAL>::strncmp @ 000160b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_000460f8)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_mutexattr_setpshared @ 000160c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutexattr_setpshared(pthread_mutexattr_t *__attr,int __pshared)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutexattr_setpshared_000460fc)(__attr);
  return iVar1;
}



/* ===== get_perPixel_stride_from_format @ 000160cc size=12 ===== */

void get_perPixel_stride_from_format(int param_1)

{
  (*(code *)PTR_get_perPixel_stride_from_format_00046100)(param_1);
  return;
}



/* ===== <EXTERNAL>::__tls_get_addr @ 000160d8 size=12 ===== */

void __tls_get_addr(void)

{
  (*(code *)PTR___tls_get_addr_00046104)();
  return;
}



/* ===== <EXTERNAL>::fopen64 @ 000160e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_00046108)(__filename);
  return pFVar1;
}



/* ===== RgaDeInit @ 000160f0 size=12 ===== */

void RgaDeInit(void **param_1)

{
  (*(code *)PTR_RgaDeInit_0004610c)(param_1);
  return;
}



/* ===== imcompositeTask @ 000160fc size=12 ===== */

void imcompositeTask(void)

{
  (*(code *)PTR_imcompositeTask_00046110)();
  return;
}



/* ===== rga_version_table_get_current_index @ 00016108 size=12 ===== */

void rga_version_table_get_current_index
               (rga_version_t *param_1,rga_version_bind_table_entry_t *param_2,int param_3)

{
  (*(code *)PTR_rga_version_table_get_current_index_00046114)(param_1);
  return;
}



/* ===== NormalRgaDitherMode @ 00016114 size=12 ===== */

void NormalRgaDitherMode(rga_req *param_1,rga_info *param_2,int param_3)

{
  (*(code *)PTR_NormalRgaDitherMode_00046118)(param_1);
  return;
}



/* ===== <EXTERNAL>::ioctl @ 00016120 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_0004611c)(__fd);
  return iVar1;
}



/* ===== rga_set_buffer_info @ 00016138 size=12 ===== */

void rga_set_buffer_info(void)

{
  (*(code *)PTR_rga_set_buffer_info_00046124)();
  return;
}



/* ===== <EXTERNAL>::strlen @ 00016144 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00046128)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 00016150 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_0004612c)(__mutex);
  return iVar1;
}



/* ===== rga_check @ 0001615c size=12 ===== */

void rga_check(void)

{
  (*(code *)PTR_rga_check_00046130)();
  return;
}



/* ===== get_string_by_format @ 00016174 size=12 ===== */

void get_string_by_format(char *param_1,int param_2)

{
  (*(code *)PTR_get_string_by_format_00046138)(param_1);
  return;
}



/* ===== imosd @ 00016180 size=12 ===== */

void imosd(void)

{
  (*(code *)PTR_imosd_0004613c)();
  return;
}



/* ===== RockchipRga::RkRgaGetAllocBufferCache @ 0001618c size=12 ===== */

void __thiscall
RockchipRga::RkRgaGetAllocBufferCache
          (RockchipRga *this,bo *param_1,int param_2,int param_3,int param_4)

{
  (*(code *)PTR_RkRgaGetAllocBufferCache_00046140)(this);
  return;
}



/* ===== <EXTERNAL>::snprintf @ 00016198 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00046144)(__s);
  return iVar1;
}



/* ===== wrapbuffer_handle @ 000161a4 size=12 ===== */

void wrapbuffer_handle(uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  (*(code *)PTR_wrapbuffer_handle_00046148)(param_1);
  return;
}



/* ===== NormalRgaMmuFlag @ 000161b0 size=12 ===== */

void NormalRgaMmuFlag(rga_req *param_1,int param_2,int param_3)

{
  (*(code *)PTR_NormalRgaMmuFlag_0004614c)(param_1);
  return;
}



/* ===== is_debug_log @ 000161bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void is_debug_log(void)

{
  (*(code *)PTR_is_debug_log_00046150)();
  return;
}



/* ===== get_buf_size_by_w_h_f @ 000161c8 size=12 ===== */

void get_buf_size_by_w_h_f(int param_1,int param_2,int param_3)

{
  (*(code *)PTR_get_buf_size_by_w_h_f_00046154)(param_1);
  return;
}



/* ===== imtranslate @ 000161d4 size=12 ===== */

void imtranslate(void)

{
  (*(code *)PTR_imtranslate_00046158)();
  return;
}



/* ===== RgaFlush @ 000161ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RgaFlush(void)

{
  (*(code *)PTR_RgaFlush_00046160)();
  return;
}



/* ===== improcess @ 000161f8 size=12 ===== */

void improcess(void)

{
  (*(code *)PTR_improcess_00046164)();
  return;
}



/* ===== NormalRgaSetDstActiveInfo @ 00016204 size=12 ===== */

void NormalRgaSetDstActiveInfo(rga_req *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  (*(code *)PTR_NormalRgaSetDstActiveInfo_00046168)(param_1);
  return;
}



/* ===== RockchipRga::RkRgaLogOutUserPara @ 00016210 size=12 ===== */

void __thiscall RockchipRga::RkRgaLogOutUserPara(RockchipRga *this,rga_info *param_1)

{
  (*(code *)PTR_RkRgaLogOutUserPara_0004616c)(this);
  return;
}



/* ===== imrop @ 0001621c size=12 ===== */

void imrop(void)

{
  (*(code *)PTR_imrop_00046170)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 00016228 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_00046174)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::std::__cxx11::string::_M_assign @ 00016234 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_assign(string *param_1)

{
  (*(code *)PTR__M_assign_00046178)(param_1);
  return;
}



/* ===== rga_set_buffer_info @ 00016240 size=12 ===== */

void rga_set_buffer_info(void)

{
  (*(code *)PTR_rga_set_buffer_info_0004617c)();
  return;
}



/* ===== rga_check_info @ 0001624c size=12 ===== */

void rga_check_info(void)

{
  (*(code *)PTR_rga_check_info_00046180)();
  return;
}



/* ===== <EXTERNAL>::fclose @ 00016258 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00046184)(__stream);
  return iVar1;
}



/* ===== RockchipRga::RkRgaInit @ 00016264 size=12 ===== */

void __thiscall RockchipRga::RkRgaInit(RockchipRga *this)

{
  (*(code *)PTR_RkRgaInit_00046188)(this);
  return;
}



/* ===== <EXTERNAL>::fread @ 0001627c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_00046190)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::pthread_mutexattr_destroy @ 00016288 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutexattr_destroy(pthread_mutexattr_t *__attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutexattr_destroy_00046194)(__attr);
  return iVar1;
}



/* ===== RockchipRga::RockchipRga @ 00016294 size=12 ===== */

void __thiscall RockchipRga::RockchipRga(RockchipRga *this)

{
  (*(code *)PTR_RockchipRga_00046198)(this);
  return;
}



/* ===== <EXTERNAL>::__cxa_guard_release @ 000162a0 size=12 ===== */

void __cxa_guard_release(void)

{
  (*(code *)PTR___cxa_guard_release_0004619c)();
  return;
}



/* ===== NormalRgaIsYuvFormat @ 000162ac size=12 ===== */

void NormalRgaIsYuvFormat(int param_1)

{
  (*(code *)PTR_NormalRgaIsYuvFormat_000461a0)(param_1);
  return;
}



/* ===== <EXTERNAL>::log @ 000162c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double log(double __x)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_log_000461a8)(SUB84(__x,0));
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== rga_import_buffer @ 000162d0 size=12 ===== */

void rga_import_buffer(ulonglong param_1,int param_2,im_handle_param *param_3)

{
  (*(code *)PTR_rga_import_buffer_000461ac)((int)param_1,(int)(param_1 >> 0x20));
  return;
}



/* ===== convert_to_rga_format @ 000162dc size=12 ===== */

void convert_to_rga_format(int param_1)

{
  (*(code *)PTR_convert_to_rga_format_000461b0)(param_1);
  return;
}



/* ===== imcancelJob @ 000162e8 size=12 ===== */

void imcancelJob(uint param_1)

{
  (*(code *)PTR_imcancelJob_000461b4)(param_1);
  return;
}



/* ===== <EXTERNAL>::std::_Rb_tree_increment @ 000162f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_increment(_Rb_tree_node_base *param_1)

{
  (*(code *)PTR__Rb_tree_increment_000461b8)(param_1);
  return;
}



/* ===== isRectValid @ 00016300 size=12 ===== */

void isRectValid(void)

{
  (*(code *)PTR_isRectValid_000461bc)();
  return;
}



/* ===== std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>::erase @ 0001630c size=12 ===== */

void __thiscall
std::
_Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
::erase(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
        *this,uint *param_1)

{
  (*(code *)PTR_erase_000461c0)(this);
  return;
}



/* ===== NormalRgaSetSrcTransModeInfo @ 00016318 size=12 ===== */

void NormalRgaSetSrcTransModeInfo
               (rga_req *param_1,uchar param_2,uchar param_3,uchar param_4,uchar param_5,
               uchar param_6,uint param_7,uint param_8,uchar param_9)

{
  (*(code *)PTR_NormalRgaSetSrcTransModeInfo_000461c4)(param_1,param_2,param_3,param_4);
  return;
}



/* ===== rga_check_rotate @ 00016324 size=12 ===== */

void rga_check_rotate(int param_1,rga_info_table_entry *param_2)

{
  (*(code *)PTR_rga_check_rotate_000461c8)(param_1);
  return;
}



/* ===== NormalRgaCompatModeConvertRga2 @ 00016330 size=12 ===== */

void NormalRgaCompatModeConvertRga2(rga2_req *param_1,rga_req *param_2)

{
  (*(code *)PTR_NormalRgaCompatModeConvertRga2_000461cc)(param_1);
  return;
}



/* ===== <EXTERNAL>::close @ 0001633c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_000461d0)(__fd);
  return iVar1;
}



/* ===== NormalRgaSetPatActiveInfo @ 00016348 size=12 ===== */

void NormalRgaSetPatActiveInfo(rga_req *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  (*(code *)PTR_NormalRgaSetPatActiveInfo_000461d4)(param_1);
  return;
}



/* ===== rga_log_enable_get @ 00016354 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rga_log_enable_get(void)

{
  (*(code *)PTR_rga_log_enable_get_000461d8)();
  return;
}



/* ===== NormalRgaNNQuantizeMode @ 00016360 size=12 ===== */

void NormalRgaNNQuantizeMode(rga_req *param_1,rga_info *param_2)

{
  (*(code *)PTR_NormalRgaNNQuantizeMode_000461dc)(param_1);
  return;
}



/* ===== get_bpp_from_format @ 0001636c size=12 ===== */

void get_bpp_from_format(int param_1)

{
  (*(code *)PTR_get_bpp_from_format_000461e0)(param_1);
  return;
}



/* ===== imbeginJob @ 00016378 size=12 ===== */

void imbeginJob(ulonglong param_1)

{
  (*(code *)PTR_imbeginJob_000461e4)((int)param_1,(int)(param_1 >> 0x20));
  return;
}



/* ===== <EXTERNAL>::std::locale::locale @ 00016384 size=12 ===== */

void __thiscall std::locale::locale(locale *this)

{
  (*(code *)PTR_locale_000461e8)(this);
  return;
}



/* ===== <EXTERNAL>::pthread_mutexattr_init @ 00016390 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutexattr_init(pthread_mutexattr_t *__attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutexattr_init_000461ec)(__attr);
  return iVar1;
}



/* ===== imendJob @ 0001639c size=12 ===== */

void imendJob(uint param_1,int param_2,int param_3,int *param_4)

{
  (*(code *)PTR_imendJob_000461f0)(param_1);
  return;
}



/* ===== rga_get_current_time_ms @ 000163a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rga_get_current_time_ms(void)

{
  (*(code *)PTR_rga_get_current_time_ms_000461f4)();
  return;
}



/* ===== <EXTERNAL>::sscanf @ 000163b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_000461f8)(__s);
  return iVar1;
}



/* ===== RgaBlit @ 000163c0 size=12 ===== */

void RgaBlit(rga_info *param_1,rga_info *param_2,rga_info *param_3)

{
  (*(code *)PTR_RgaBlit_000461fc)(param_1);
  return;
}



/* ===== is_out_log @ 000163cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void is_out_log(void)

{
  (*(code *)PTR_is_out_log_00046200)();
  return;
}



/* ===== NormalRgaClose @ 000163d8 size=12 ===== */

void NormalRgaClose(void **param_1)

{
  (*(code *)PTR_NormalRgaClose_00046204)(param_1);
  return;
}



/* ===== <EXTERNAL>::mmap64 @ 000163e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap64(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off64_t __offset)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_mmap64_00046208)(__addr);
  return pvVar1;
}



/* ===== <EXTERNAL>::operator.new @ 000163f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_0004620c)(param_1);
  return pvVar1;
}



/* ===== <EXTERNAL>::atof @ 000163fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double atof(char *__nptr)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_atof_00046210)(__nptr);
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== imcolorkey @ 00016408 size=12 ===== */

void imcolorkey(void)

{
  (*(code *)PTR_imcolorkey_00046214)();
  return;
}



/* ===== RockchipRga::RkRgaGetAllocBuffer @ 00016414 size=12 ===== */

void __thiscall
RockchipRga::RkRgaGetAllocBuffer(RockchipRga *this,bo *param_1,int param_2,int param_3,int param_4)

{
  (*(code *)PTR_RkRgaGetAllocBuffer_00046218)(this);
  return;
}



/* ===== rga_job_submit @ 00016420 size=12 ===== */

void rga_job_submit(uint param_1,int param_2,int param_3,int *param_4)

{
  (*(code *)PTR_rga_job_submit_0004621c)(param_1);
  return;
}



/* ===== <EXTERNAL>::std::ios::init @ 0001642c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ios::init(streambuf *param_1)

{
  (*(code *)PTR_init_00046220)(param_1);
  return;
}



/* ===== translate_format_str @ 00016438 size=12 ===== */

void translate_format_str(int param_1)

{
  (*(code *)PTR_translate_format_str_00046224)(param_1);
  return;
}



/* ===== <EXTERNAL>::__aeabi_uidivmod @ 00016444 size=12 ===== */

void __aeabi_uidivmod(void)

{
  (*(code *)PTR___aeabi_uidivmod_00046228)();
  return;
}



/* ===== <EXTERNAL>::memset @ 00016450 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0004622c)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::std::_Rb_tree_insert_and_rebalance @ 0001645c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_insert_and_rebalance
               (bool param_1,_Rb_tree_node_base *param_2,_Rb_tree_node_base *param_3,
               _Rb_tree_node_base *param_4)

{
  (*(code *)PTR__Rb_tree_insert_and_rebalance_00046230)(param_1);
  return;
}



/* ===== imcheck_t @ 00016468 size=12 ===== */

void imcheck_t(void)

{
  (*(code *)PTR_imcheck_t_00046234)();
  return;
}



/* ===== <EXTERNAL>::std::ostream::flush @ 00016474 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ostream::flush(void)

{
  (*(code *)PTR_flush_00046238)();
  return;
}



/* ===== rga_check_driver @ 00016480 size=12 ===== */

void rga_check_driver(rga_version_t *param_1)

{
  (*(code *)PTR_rga_check_driver_0004623c)(param_1);
  return;
}



/* ===== imsync @ 0001648c size=12 ===== */

void imsync(void)

{
  (*(code *)PTR_imsync_00046240)();
  return;
}



/* ===== <EXTERNAL>::std::__detail::_Prime_rehash_policy::_M_need_rehash @ 000164a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__detail::_Prime_rehash_policy::_M_need_rehash(uint param_1,uint param_2,uint param_3)

{
  (*(code *)PTR__M_need_rehash_00046248)(param_1);
  return;
}



/* ===== NormalRgaSetFdsOffsets @ 000164b0 size=12 ===== */

void NormalRgaSetFdsOffsets
               (rga_req *param_1,ushort param_2,ushort param_3,uint param_4,uint param_5)

{
  (*(code *)PTR_NormalRgaSetFdsOffsets_0004624c)(param_1,param_2,param_3);
  return;
}



/* ===== <EXTERNAL>::munmap @ 000164bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_munmap_00046250)(__addr);
  return iVar1;
}



/* ===== <EXTERNAL>::std::ios_base::~ios_base @ 000164c8 size=12 ===== */

void __thiscall std::ios_base::~ios_base(ios_base *this)

{
  (*(code *)PTR__ios_base_00046254)(this);
  return;
}



/* ===== <EXTERNAL>::std::_Rb_tree_rebalance_for_erase @ 000164e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_rebalance_for_erase(_Rb_tree_node_base *param_1,_Rb_tree_node_base *param_2)

{
  (*(code *)PTR__Rb_tree_rebalance_for_erase_0004625c)(param_1);
  return;
}



/* ===== NormalRgaOpen @ 000164ec size=12 ===== */

void NormalRgaOpen(void **param_1)

{
  (*(code *)PTR_NormalRgaOpen_00046260)(param_1);
  return;
}



/* ===== Mutex::Mutex @ 000164f8 size=12 ===== */

void __thiscall Mutex::Mutex(Mutex *this,int param_1,char *param_2)

{
  (*(code *)PTR_Mutex_00046264)(this);
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00016504 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00046268)(__stream);
  return iVar1;
}



/* ===== RkRgaGetRgaFormat @ 00016510 size=12 ===== */

void RkRgaGetRgaFormat(int param_1)

{
  (*(code *)PTR_RkRgaGetRgaFormat_0004626c)(param_1);
  return;
}



/* ===== rga_check_header @ 0001651c size=12 ===== */

void rga_check_header(void)

{
  (*(code *)PTR_rga_check_header_00046270)();
  return;
}



/* ===== RgaCollorPalette @ 00016528 size=12 ===== */

void RgaCollorPalette(rga_info *param_1,rga_info *param_2,rga_info *param_3)

{
  (*(code *)PTR_RgaCollorPalette_00046274)(param_1);
  return;
}



/* ===== improcessTask @ 00016534 size=12 ===== */

void improcessTask(void)

{
  (*(code *)PTR_improcessTask_00046278)();
  return;
}



/* ===== <EXTERNAL>::vsnprintf @ 00016540 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsnprintf_0004627c)(__s);
  return iVar1;
}



/* ===== rga_check_format @ 00016558 size=12 ===== */

void rga_check_format(void)

{
  (*(code *)PTR_rga_check_format_00046284)();
  return;
}



/* ===== imrotate @ 00016564 size=12 ===== */

void imrotate(void)

{
  (*(code *)PTR_imrotate_00046288)();
  return;
}



/* ===== rga_get_info @ 00016570 size=12 ===== */

void rga_get_info(rga_info_table_entry *param_1)

{
  (*(code *)PTR_rga_get_info_0004628c)(param_1);
  return;
}



/* ===== <EXTERNAL>::std::__detail::_Prime_rehash_policy::_M_next_bkt @ 0001657c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__detail::_Prime_rehash_policy::_M_next_bkt(uint param_1)

{
  (*(code *)PTR__M_next_bkt_00046290)(param_1);
  return;
}



/* ===== rga_get_opt @ 00016588 size=12 ===== */

void rga_get_opt(im_opt *param_1,void *param_2)

{
  (*(code *)PTR_rga_get_opt_00046294)(param_1);
  return;
}



/* ===== <EXTERNAL>::__aeabi_atexit @ 00016594 size=12 ===== */

void __aeabi_atexit(void)

{
  (*(code *)PTR___aeabi_atexit_00046298)();
  return;
}



/* ===== immosaicTask @ 000165a0 size=12 ===== */

void immosaicTask(void)

{
  (*(code *)PTR_immosaicTask_0004629c)();
  return;
}



/* ===== NormalRgaMmuInfo @ 000165ac size=12 ===== */

void NormalRgaMmuInfo(rga_req *param_1,uchar param_2,uchar param_3,uchar param_4,uchar param_5,
                     uint param_6,uchar param_7)

{
  (*(code *)PTR_NormalRgaMmuInfo_000462a0)(param_1,param_2,param_3,param_4);
  return;
}



/* ===== rga_release_buffer @ 000165b8 size=12 ===== */

void rga_release_buffer(int param_1)

{
  (*(code *)PTR_rga_release_buffer_000462a4)(param_1);
  return;
}



/* ===== <EXTERNAL>::std::ostream::_M_insert<unsigned_long> @ 000165c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::ostream::_M_insert<unsigned_long>(ulong param_1)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR__M_insert<unsigned_long>_000462a8)(param_1);
  return poVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 000165d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_000462ac)(__mutex);
  return iVar1;
}



/* ===== imrectangleTask @ 000165dc size=12 ===== */

void imrectangleTask(void)

{
  (*(code *)PTR_imrectangleTask_000462b0)();
  return;
}



/* ===== <EXTERNAL>::std::_Rb_tree_increment @ 000165e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_increment(_Rb_tree_node_base *param_1)

{
  (*(code *)PTR__Rb_tree_increment_000462b4)(param_1);
  return;
}



/* ===== NormalRgaSetSrcVirtualInfo @ 000165f4 size=12 ===== */

void NormalRgaSetSrcVirtualInfo
               (rga_req *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
               uint param_7,uchar param_8)

{
  (*(code *)PTR_NormalRgaSetSrcVirtualInfo_000462b8)(param_1);
  return;
}



/* ===== <EXTERNAL>::std::__throw_bad_alloc @ 00016600 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_alloc(void)

{
  (*(code *)PTR___throw_bad_alloc_000462bc)();
  return;
}



/* ===== <EXTERNAL>::__aeabi_idiv @ 0001660c size=12 ===== */

void __aeabi_idiv(void)

{
  (*(code *)PTR___aeabi_idiv_000462c0)();
  return;
}



/* ===== <EXTERNAL>::open64 @ 00016618 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open64_000462c4)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00016624 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_000462c8)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::__aeabi_idivmod @ 00016630 size=12 ===== */

void __aeabi_idivmod(void)

{
  (*(code *)PTR___aeabi_idivmod_000462cc)();
  return;
}



/* ===== imresize @ 0001663c size=12 ===== */

void imresize(void)

{
  (*(code *)PTR_imresize_000462d0)();
  return;
}



/* ===== rga_release_buffers @ 00016648 size=12 ===== */

void rga_release_buffers(rga_buffer_pool *param_1)

{
  (*(code *)PTR_rga_release_buffers_000462d4)(param_1);
  return;
}



/* ===== imcrop @ 00016654 size=12 ===== */

void imcrop(void)

{
  (*(code *)PTR_imcrop_000462d8)();
  return;
}



/* ===== imcopy @ 00016660 size=12 ===== */

void imcopy(void)

{
  (*(code *)PTR_imcopy_000462dc)();
  return;
}



/* ===== <EXTERNAL>::free @ 0001666c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_000462e0)(__ptr);
  return;
}



/* ===== <EXTERNAL>::atoi @ 00016678 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_000462e4)(__nptr);
  return iVar1;
}



/* ===== NormalRgaSetDstVirtualInfo @ 00016684 size=12 ===== */

void NormalRgaSetDstVirtualInfo
               (rga_req *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
               RECT *param_7,uint param_8,uchar param_9)

{
  (*(code *)PTR_NormalRgaSetDstVirtualInfo_000462e8)(param_1);
  return;
}



/* ===== RkRgaCompatibleFormat @ 00016690 size=12 ===== */

void RkRgaCompatibleFormat(int param_1)

{
  (*(code *)PTR_RkRgaCompatibleFormat_000462ec)(param_1);
  return;
}



/* ===== checkRectForRga @ 0001669c size=12 ===== */

void checkRectForRga(void)

{
  (*(code *)PTR_checkRectForRga_000462f0)();
  return;
}



/* ===== imrectangle @ 000166b4 size=12 ===== */

void imrectangle(void)

{
  (*(code *)PTR_imrectangle_000462f8)();
  return;
}



/* ===== <EXTERNAL>::strerror @ 000166cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00046300)(__errnum);
  return pcVar1;
}



/* ===== imcomposite @ 000166d8 size=12 ===== */

void imcomposite(void)

{
  (*(code *)PTR_imcomposite_00046304)();
  return;
}



/* ===== rga_log_level_get @ 000166e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rga_log_level_get(void)

{
  (*(code *)PTR_rga_log_level_get_00046308)();
  return;
}



/* ===== <EXTERNAL>::printf @ 000166f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0004630c)(__format);
  return iVar1;
}



/* ===== rga_check_feature @ 000166fc size=12 ===== */

void rga_check_feature(void)

{
  (*(code *)PTR_rga_check_feature_00046310)();
  return;
}



/* ===== NormalRgaFullColorSpaceConvert @ 00016708 size=12 ===== */

void NormalRgaFullColorSpaceConvert(rga_req *param_1,int param_2)

{
  (*(code *)PTR_NormalRgaFullColorSpaceConvert_00046314)(param_1);
  return;
}



/* ===== imfill @ 00016714 size=12 ===== */

void imfill(void)

{
  (*(code *)PTR_imfill_00046318)();
  return;
}



/* ===== <EXTERNAL>::puts @ 00016720 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0004631c)(__s);
  return iVar1;
}



/* ===== RockchipRga::RkRgaGetAllocBufferExt @ 0001672c size=12 ===== */

void __thiscall
RockchipRga::RkRgaGetAllocBufferExt
          (RockchipRga *this,bo *param_1,int param_2,int param_3,int param_4,int param_5)

{
  (*(code *)PTR_RkRgaGetAllocBufferExt_00046320)(this);
  return;
}



/* ===== <EXTERNAL>::std::locale::~locale @ 00016738 size=12 ===== */

void __thiscall std::locale::~locale(locale *this)

{
  (*(code *)PTR__locale_00046324)(this);
  return;
}



/* ===== NormalRgaInitTables @ 00016744 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void NormalRgaInitTables(void)

{
  (*(code *)PTR_NormalRgaInitTables_00046328)();
  return;
}



/* ===== <EXTERNAL>::std::ostream::put @ 00016750 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ostream::put(char param_1)

{
  (*(code *)PTR_put_0004632c)((int)param_1);
  return;
}



/* ===== std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>::_M_erase @ 0001675c size=12 ===== */

void __thiscall
std::
_Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
::_M_erase(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
           *this,_Rb_tree_node *param_1)

{
  (*(code *)PTR__M_erase_00046330)(this);
  return;
}



/* ===== rga_sync_wait @ 00016768 size=12 ===== */

void rga_sync_wait(int param_1,int param_2)

{
  (*(code *)PTR_rga_sync_wait_00046334)(param_1);
  return;
}



/* ===== <EXTERNAL>::std::__ostream_insert<char,std::char_traits<char>> @ 00016774 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::__ostream_insert<char,std::char_traits<char>>
                    (ostream *param_1,char *param_2,int param_3)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR___ostream_insert<char,std_char_traits<char>>_00046338)(param_1);
  return poVar1;
}



/* ===== empty_structure @ 0001678c size=12 ===== */

void empty_structure(rga_buffer_t *param_1,rga_buffer_t *param_2,rga_buffer_t *param_3,
                    im_rect *param_4,im_rect *param_5,im_rect *param_6,im_opt *param_7)

{
  (*(code *)PTR_empty_structure_00046340)(param_1);
  return;
}



/* ===== NormalRgaSetBitbltMode @ 00016798 size=12 ===== */

void NormalRgaSetBitbltMode
               (rga_req *param_1,uchar param_2,uchar param_3,uint param_4,uint param_5,uint param_6,
               uint param_7)

{
  (*(code *)PTR_NormalRgaSetBitbltMode_00046344)(param_1,param_2,param_3);
  return;
}



/* ===== rga_import_buffers @ 000167a4 size=12 ===== */

void rga_import_buffers(rga_buffer_pool *param_1)

{
  (*(code *)PTR_rga_import_buffers_00046348)(param_1);
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000167b0 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0004634c)();
  return;
}



/* ===== entry @ 000167c0 size=92 ===== */

void processEntry entry(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar2 = DAT_00016824;
  iVar1 = DAT_0001681c;
  piVar5 = (int *)(DAT_0001681c + 0x167d4);
  iVar4 = DAT_00016820 + 0x167e0;
  *(undefined4 *)(DAT_0001681c + 0x167d8) = 1;
  *(undefined4 *)(iVar1 + 0x167dc) = 0;
  *(undefined4 *)(iVar1 + 0x167e0) = 0;
  *(undefined4 *)(iVar1 + 0x167e8) = 0;
  *(undefined4 *)(iVar1 + 0x167ec) = 0;
  iVar3 = DAT_00016828;
  *piVar5 = iVar1 + 0x167ec;
  *(undefined4 *)(iVar1 + 0x167e4) = 0x3f800000;
  __aeabi_atexit(piVar5,*(undefined4 *)(iVar4 + iVar2),iVar3 + 0x16814);
  return;
}



/* ===== _INIT_2 @ 0001682c size=1036 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00016c2c) */
/* WARNING: Removing unreachable block (ram,0x00016c24) */
/* WARNING: Removing unreachable block (ram,0x00016c18) */
/* WARNING: Removing unreachable block (ram,0x00016c1c) */
/* WARNING: Removing unreachable block (ram,0x00016c28) */
/* WARNING: Removing unreachable block (ram,0x00016c34) */
/* WARNING: Removing unreachable block (ram,0x00016c14) */

void _INIT_2(void)

{
  uint __n;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int iVar6;
  int extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  uint extraout_r2;
  int iVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  void *pvVar18;
  int iVar19;
  undefined4 uVar20;
  int *piVar21;
  bool bVar22;
  char local_30 [4];
  uint local_2c;
  
  iVar1 = iRam00016c10;
  puVar15 = (undefined4 *)(iRam00016c10 + 0x1684c);
  uVar4 = iRam00016c10 + 0x1685c;
  pvVar18 = (void *)(iRam00016c10 + 0x16864);
  *(undefined4 *)(iRam00016c10 + 0x16850) = 1;
  *(undefined4 *)(iVar1 + 0x1685c) = 0x3f800000;
  *puVar15 = pvVar18;
  *(undefined4 *)(iVar1 + 0x16854) = 0;
  *(undefined4 *)(iVar1 + 0x16858) = 0;
  *(undefined4 *)(iVar1 + 0x16860) = 0;
  *(undefined4 *)(iVar1 + 0x16864) = 0;
  uVar4 = std::__detail::_Prime_rehash_policy::_M_next_bkt(uVar4);
  iVar7 = iRam00016c14 + 0x16884;
  if (*(uint *)(iVar1 + 0x16850) < uVar4) {
    if (uVar4 == 1) {
      *(undefined4 *)(iVar1 + 0x16864) = 0;
    }
    else {
      if (0x3fffffff < uVar4) {
LAB_00016c0c:
        bVar22 = uVar4 == 0x3fffffff;
        uVar4 = std::__throw_bad_alloc();
                    /* WARNING: Could not recover jumptable at 0x00016c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        if (!bVar22) {
                    /* WARNING: Could not recover jumptable at 0x00016c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x00016c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x00016c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x00016c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x00016c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        (*(code *)(extraout_r2 & (uVar4 >> 0x19 | uVar4 << 7)))();
        return;
      }
      pvVar18 = operator_new(uVar4 << 2);
      memset(pvVar18,0,uVar4 << 2);
    }
    iVar1 = iRam00016c18;
    *(void **)(iRam00016c18 + 0x168cc) = pvVar18;
    *(uint *)(iVar1 + 0x168d0) = uVar4;
  }
  iVar3 = iRam00016c28;
  iVar2 = iRam00016c24;
  iVar1 = iRam00016c20;
  iVar16 = iRam00016c1c + 0x168ec;
  piVar8 = (int *)(iRam00016c28 + 0x168f8);
  iVar11 = iRam00016c1c + 0x169fc;
  uVar12 = iRam00016c20 + 0x168fc;
  iVar13 = iRam00016c24 + 0x168f8;
  do {
    iVar19 = *(int *)(iVar16 + -8);
    uVar20 = *(undefined4 *)(iVar3 + 0x168fc);
    __aeabi_uidivmod(iVar19,uVar20);
    piVar9 = *(int **)(*piVar8 + extraout_r1 * 4);
    if (piVar9 == (int *)0x0) {
LAB_00016a24:
      piVar9 = operator_new(0xc);
      uVar4 = *(uint *)(iVar1 + 0x168f0);
      iVar6 = *(int *)(iVar16 + -4);
      iVar17 = *(int *)(iVar16 + -8);
      *piVar9 = 0;
      piVar9[1] = iVar17;
      piVar9[2] = iVar6;
      uVar20 = 1;
      std::__detail::_Prime_rehash_policy::_M_need_rehash((uint)local_30,uVar12,uVar4);
      uVar4 = local_2c;
      iVar17 = extraout_r1;
      if (local_30[0] != '\0') {
        if (local_2c == 1) {
          *(undefined4 *)(iVar1 + 0x16904) = 0;
          pvVar18 = (void *)(iVar1 + 0x16904);
        }
        else {
          if (0x3fffffff < local_2c) goto LAB_00016c0c;
          __n = local_2c << 2;
          pvVar18 = operator_new(__n);
          memset(pvVar18,0,__n);
        }
        piVar14 = *(int **)(DAT_00016c40 + 0x16b08);
        *(undefined4 *)(DAT_00016c40 + 0x16b08) = 0;
        if (piVar14 != (int *)0x0) {
          iVar17 = 0;
          do {
            while( true ) {
              __aeabi_uidivmod(piVar14[1],uVar4);
              piVar21 = (int *)*piVar14;
              piVar5 = *(int **)((int)pvVar18 + extraout_r1_02 * 4);
              if (piVar5 == (int *)0x0) break;
              *piVar14 = *piVar5;
              **(undefined4 **)((int)pvVar18 + extraout_r1_02 * 4) = piVar14;
              iVar6 = iVar17;
LAB_00016b34:
              iVar17 = iVar6;
              piVar14 = piVar21;
              if (piVar21 == (int *)0x0) goto LAB_00016b9c;
            }
            *piVar14 = *(int *)(iVar2 + 0x168f8);
            *(int **)(iVar2 + 0x168f8) = piVar14;
            *(int *)((int)pvVar18 + extraout_r1_02 * 4) = iVar13;
            iVar6 = extraout_r1_02;
            if (*piVar14 == 0) goto LAB_00016b34;
            *(int **)((int)pvVar18 + iVar17 * 4) = piVar14;
            iVar17 = extraout_r1_02;
            piVar14 = piVar21;
          } while (piVar21 != (int *)0x0);
        }
LAB_00016b9c:
        if (*(void **)(DAT_00016c44 + 0x16ba8) != (void *)(DAT_00016c44 + 0x16bc0)) {
          operator_delete(*(void **)(DAT_00016c44 + 0x16ba8));
        }
        iVar17 = DAT_00016c48;
        *(void **)(DAT_00016c48 + 0x16bc8) = pvVar18;
        *(uint *)(iVar17 + 0x16bcc) = uVar4;
        __aeabi_uidivmod(iVar19,uVar4);
        iVar17 = extraout_r1_03;
      }
      iVar19 = DAT_00016c38;
      iVar17 = iVar17 * 4;
      piVar14 = (int *)(DAT_00016c38 + 0x16a78);
      iVar6 = *piVar14;
      if (*(int **)(iVar6 + iVar17) == (int *)0x0) {
        iVar10 = *(int *)(DAT_00016c38 + 0x16a80);
        *(int **)(DAT_00016c38 + 0x16a80) = piVar9;
        *piVar9 = iVar10;
        if (iVar10 != 0) {
          __aeabi_uidivmod(*(undefined4 *)(iVar10 + 4),*(undefined4 *)(iVar19 + 0x16a7c),iVar10,
                           piVar14,uVar20);
          *(int **)(iVar6 + extraout_r1_04 * 4) = piVar9;
        }
        *(int *)(iVar6 + iVar17) = DAT_00016c4c + 0x16c0c;
      }
      else {
        *piVar9 = **(int **)(iVar6 + iVar17);
        **(undefined4 **)(iVar6 + iVar17) = piVar9;
      }
      *(int *)(DAT_00016c3c + 0x16ab0) = *(int *)(DAT_00016c3c + 0x16ab0) + 1;
    }
    else {
      piVar9 = (int *)*piVar9;
      if (piVar9[1] != iVar19) {
        piVar9 = (int *)*piVar9;
        if (piVar9 != (int *)0x0) {
          iVar17 = piVar9[1];
          __aeabi_uidivmod(iVar17,uVar20);
          iVar6 = extraout_r1_00;
          while (extraout_r1 == iVar6) {
            if (iVar19 == iVar17) goto LAB_000169dc;
            piVar9 = (int *)*piVar9;
            if (piVar9 == (int *)0x0) break;
            iVar17 = piVar9[1];
            __aeabi_uidivmod(iVar17,uVar20);
            iVar6 = extraout_r1_01;
          }
        }
        goto LAB_00016a24;
      }
    }
LAB_000169dc:
    iVar16 = iVar16 + 8;
    if (iVar11 == iVar16) {
      __aeabi_atexit(iRam00016c34 + 0x16a0c,*(undefined4 *)(iVar7 + iRam00016c2c),
                     iRam00016c30 + 0x16a04);
      return;
    }
  } while( true );
}



/* ===== _INIT_3 @ 00016c50 size=64 ===== */

void _INIT_3(void)

{
  int iVar1;
  Mutex *this;
  
  iVar1 = DAT_00016c90 + 0x16c6c;
  this = *(Mutex **)(iVar1 + DAT_00016c94);
  Mutex::Mutex(this,0,(char *)0x0);
  __aeabi_atexit(this,*(undefined4 *)(iVar1 + DAT_00016c98),DAT_00016c9c + 0x16c8c);
  return;
}



/* ===== _INIT_4 @ 00016ca0 size=120 ===== */

void _INIT_4(void)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  pcVar1 = getenv((char *)(DAT_00016d18 + 0x16cb0));
  if (pcVar1 == (char *)0x0) {
    pcVar1 = (char *)(DAT_00016d2c + 0x16d0c);
  }
  iVar2 = atoi(pcVar1);
  *(int *)(DAT_00016d1c + 0x16cc8) = iVar2;
  pcVar1 = getenv((char *)(DAT_00016d20 + 0x16cd4));
  if (pcVar1 == (char *)0x0) {
    pcVar1 = (char *)((int)&DAT_00016d18 + DAT_00016d30);
  }
  iVar2 = atoi(pcVar1);
  *(int *)(DAT_00016d24 + 0x16cec) = iVar2;
  uVar3 = rga_get_current_time_ms();
  *(undefined4 *)(DAT_00016d28 + 0x16cfc) = uVar3;
  return;
}



/* ===== _INIT_5 @ 00016d34 size=92 ===== */

void _INIT_5(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = DAT_00016d9c;
  iVar1 = DAT_00016d98;
  iVar3 = DAT_00016d90 + 0x16d4c;
  iVar4 = *(int *)(iVar3 + DAT_00016d94);
  *(undefined4 *)(iVar4 + 4) = 0;
  *(undefined4 *)(iVar4 + 0x1c) = 0;
  *(undefined4 *)(iVar4 + 0x20) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(iVar4 + 0x24) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(iVar4 + 0x28) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(iVar4 + 8) = 0;
  *(undefined4 *)(iVar4 + 0x2c) = 0;
  *(undefined4 *)(iVar4 + 0x30) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(iVar4 + 0x14) = 0;
  *(int *)(iVar4 + 0xc) = iVar4 + 4;
  *(int *)(iVar4 + 0x10) = iVar4 + 4;
  __aeabi_atexit(iVar4,*(undefined4 *)(iVar3 + iVar1),iVar2 + 0x16d6c);
  return;
}



/* ===== FUN_00016da0 @ 00016da0 size=72 ===== */

void FUN_00016da0(void)

{
  code *pcVar1;
  
  if (DAT_00016dec + 0x16db8 == DAT_00016de8 + 0x16db0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00016df0 + 0x16dc0 + DAT_00016df4);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 00016e5c size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00016ed0 + 0x16e78;
  if (*(char *)(DAT_00016ecc + 0x16e6c) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_00016ed4) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_00016ed8 + 0x16e98));
  }
  FUN_00016da0();
  if (*(int *)(iVar1 + DAT_00016edc) != 0) {
    __deregister_frame_info(DAT_00016ee0 + 0x16eb8);
  }
  *(undefined1 *)(DAT_00016ee4 + 0x16ec8) = 1;
  return;
}



/* ===== _INIT_0 @ 00016ee8 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00016f20 + 0x16ef8 + DAT_00016f24) != 0) {
    __register_frame_info(DAT_00016f2c + 0x16f18,DAT_00016f28 + 0x16f14);
  }
  if (((DAT_00016e50 + 0x16e10) - (DAT_00016e4c + 0x16e08) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00016e54 + 0x16e18 + DAT_00016e58);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== std::unordered_map<unsigned_int,unsigned_int,std::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::~unordered_map @ 00016f30 size=96 ===== */

/* std::unordered_map<unsigned int, unsigned int, std::hash<unsigned int>, std::equal_to<unsigned
   int>, std::allocator<std::pair<unsigned int const, unsigned int> > >::~unordered_map() */

unordered_map<unsigned_int,unsigned_int,std::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
* __thiscall
std::
unordered_map<unsigned_int,unsigned_int,std::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
::~unordered_map(unordered_map<unsigned_int,unsigned_int,std::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                 *this)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  puVar1 = *(void **)(this + 8);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  memset(*(void **)this,0,*(int *)(this + 4) << 2);
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  if (*(unordered_map<unsigned_int,unsigned_int,std::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
        **)this != this + 0x18) {
    operator_delete(*(unordered_map<unsigned_int,unsigned_int,std::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                      **)this);
  }
  return this;
}



/* ===== get_format_from_android_hal @ 00016f90 size=164 ===== */

/* get_format_from_android_hal(unsigned int) */

int get_format_from_android_hal(uint param_1)

{
  int extraout_r1;
  int extraout_r1_00;
  int iVar1;
  int extraout_r1_01;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  
  piVar2 = (int *)(DAT_00017034 + 0x16fa4);
  uVar4 = *(undefined4 *)(DAT_00017034 + 0x16fa8);
  __aeabi_uidivmod(param_1,uVar4);
  piVar2 = *(int **)(*piVar2 + extraout_r1 * 4);
  if (piVar2 != (int *)0x0) {
    piVar2 = (int *)*piVar2;
    if (param_1 == piVar2[1]) {
LAB_00017024:
      return piVar2[2];
    }
    piVar2 = (int *)*piVar2;
    if (piVar2 != (int *)0x0) {
      uVar3 = piVar2[1];
      __aeabi_uidivmod(uVar3,uVar4);
      iVar1 = extraout_r1_00;
      while (extraout_r1 == iVar1) {
        if (param_1 == uVar3) goto LAB_00017024;
        piVar2 = (int *)*piVar2;
        if (piVar2 == (int *)0x0) {
          return 0x10000;
        }
        uVar3 = piVar2[1];
        __aeabi_uidivmod(uVar3,uVar4);
        iVar1 = extraout_r1_01;
      }
    }
  }
  return 0x10000;
}



/* ===== get_format_from_drm_fourcc @ 00017038 size=164 ===== */

/* get_format_from_drm_fourcc(unsigned int) */

int get_format_from_drm_fourcc(uint param_1)

{
  int extraout_r1;
  int extraout_r1_00;
  int iVar1;
  int extraout_r1_01;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  
  piVar2 = (int *)(DAT_000170dc + 0x1704c);
  uVar4 = *(undefined4 *)(DAT_000170dc + 0x17050);
  __aeabi_uidivmod(param_1,uVar4);
  piVar2 = *(int **)(*piVar2 + extraout_r1 * 4);
  if (piVar2 != (int *)0x0) {
    piVar2 = (int *)*piVar2;
    if (param_1 == piVar2[1]) {
LAB_000170cc:
      return piVar2[2];
    }
    piVar2 = (int *)*piVar2;
    if (piVar2 != (int *)0x0) {
      uVar3 = piVar2[1];
      __aeabi_uidivmod(uVar3,uVar4);
      iVar1 = extraout_r1_00;
      while (extraout_r1 == iVar1) {
        if (param_1 == uVar3) goto LAB_000170cc;
        piVar2 = (int *)*piVar2;
        if (piVar2 == (int *)0x0) {
          return 0x10000;
        }
        uVar3 = piVar2[1];
        __aeabi_uidivmod(uVar3,uVar4);
        iVar1 = extraout_r1_01;
      }
    }
  }
  return 0x10000;
}



/* ===== convert_to_rga_format @ 000170e0 size=136 ===== */

/* convert_to_rga_format(int) */

int convert_to_rga_format(int param_1)

{
  int iVar1;
  
  if ((((uint)param_1 >> 0x18 == 0) || ((param_1 & 0xff0000U) == 0)) || ((param_1 & 0xff00U) == 0))
  {
    if (param_1 == 0) {
      return 0;
    }
    if ((uint)param_1 >> 8 == 0) {
      return param_1 << 8;
    }
    if ((param_1 & 0xffU) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000161e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*(code *)PTR_get_format_from_android_hal_0004615c)(param_1);
      return iVar1;
    }
  }
  else {
    if ((param_1 & 0xffU) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000162c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*(code *)PTR_get_format_from_drm_fourcc_000461a4)();
      return iVar1;
    }
    if (param_1 == 0) {
      return 0;
    }
  }
  if ((param_1 & 0xff00U) == 0) {
    param_1 = 0x10000;
  }
  return param_1;
}



/* ===== Mutex::~Mutex @ 00017150 size=20 ===== */

/* Mutex::~Mutex() */

Mutex * __thiscall Mutex::~Mutex(Mutex *this)

{
  pthread_mutex_destroy((pthread_mutex_t *)this);
  return this;
}



/* ===== Mutex::Mutex @ 00017164 size=100 ===== */

/* Mutex::Mutex(int, char const*) */

Mutex * __thiscall Mutex::Mutex(Mutex *this,int param_1,char *param_2)

{
  pthread_mutexattr_t pStack_14;
  
  if (param_1 != 1) {
    pthread_mutex_init((pthread_mutex_t *)this,(pthread_mutexattr_t *)0x0);
    return this;
  }
  pthread_mutexattr_init(&pStack_14);
  pthread_mutexattr_setpshared(&pStack_14,1);
  pthread_mutex_init((pthread_mutex_t *)this,&pStack_14);
  pthread_mutexattr_destroy(&pStack_14);
  return this;
}



/* ===== Singleton<RockchipRga>::hasInstance @ 000171c8 size=64 ===== */

/* Singleton<RockchipRga>::hasInstance() */

bool Singleton<RockchipRga>::hasInstance(void)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  
  iVar1 = DAT_00017208 + 0x171dc;
  __mutex = *(pthread_mutex_t **)(iVar1 + DAT_0001720c);
  pthread_mutex_lock(__mutex);
  iVar1 = **(int **)(iVar1 + DAT_00017210);
  pthread_mutex_unlock(__mutex);
  return iVar1 != 0;
}



/* ===== Singleton<RockchipRga>::~Singleton @ 00017214 size=4 ===== */

/* Singleton<RockchipRga>::~Singleton() */

Singleton<RockchipRga> * __thiscall Singleton<RockchipRga>::~Singleton(Singleton<RockchipRga> *this)

{
  return this;
}



/* ===== Singleton<RockchipRga>::Singleton @ 00017218 size=4 ===== */

/* Singleton<RockchipRga>::Singleton() */

void Singleton<RockchipRga>::Singleton(void)

{
  return;
}



/* ===== RockchipRga::~RockchipRga @ 0001721c size=24 ===== */

/* RockchipRga::~RockchipRga() */

RockchipRga * __thiscall RockchipRga::~RockchipRga(RockchipRga *this)

{
  RgaDeInit((void **)(this + 0xc));
  return this;
}



/* ===== RockchipRga::RkRgaInit @ 00017234 size=56 ===== */

/* RockchipRga::RkRgaInit() */

int __thiscall RockchipRga::RkRgaInit(RockchipRga *this)

{
  int iVar1;
  
  if (*this == (RockchipRga)0x0) {
    iVar1 = RgaInit((void **)(this + 0xc));
    if (iVar1 == 0) {
      *this = (RockchipRga)0x1;
    }
    else {
      *this = (RockchipRga)0x0;
    }
    return iVar1;
  }
  return 0;
}



/* ===== RockchipRga::RockchipRga @ 0001726c size=72 ===== */

/* RockchipRga::RockchipRga() */

RockchipRga * __thiscall RockchipRga::RockchipRga(RockchipRga *this)

{
  *this = (RockchipRga)0x0;
  *(undefined8 *)(this + 4) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  RkRgaInit(this);
  printf((char *)(DAT_000172b8 + 0x172a4),DAT_000172b4 + 0x172a0);
  putchar(10);
  return this;
}



/* ===== Singleton<RockchipRga>::getInstance @ 000172bc size=88 ===== */

/* Singleton<RockchipRga>::getInstance() */

RockchipRga * Singleton<RockchipRga>::getInstance(void)

{
  int iVar1;
  RockchipRga *this;
  pthread_mutex_t *__mutex;
  undefined4 *puVar2;
  
  iVar1 = DAT_00017314 + 0x172d0;
  __mutex = *(pthread_mutex_t **)(iVar1 + DAT_00017318);
  pthread_mutex_lock(__mutex);
  puVar2 = *(undefined4 **)(iVar1 + DAT_0001731c);
  this = (RockchipRga *)*puVar2;
  if (this == (RockchipRga *)0x0) {
    this = operator_new(0x10);
    RockchipRga::RockchipRga(this);
    *puVar2 = this;
  }
  pthread_mutex_unlock(__mutex);
  return this;
}



/* ===== RockchipRga::RkRgaDeInit @ 00017320 size=44 ===== */

/* RockchipRga::RkRgaDeInit() */

void __thiscall RockchipRga::RkRgaDeInit(RockchipRga *this)

{
  if (*this != (RockchipRga)0x0) {
    RgaDeInit((void **)(this + 0xc));
  }
  *this = (RockchipRga)0x0;
  return;
}



/* ===== RockchipRga::RkRgaGetContext @ 0001734c size=12 ===== */

/* RockchipRga::RkRgaGetContext(void**) */

void __thiscall RockchipRga::RkRgaGetContext(RockchipRga *this,void **param_1)

{
  *param_1 = *(void **)(this + 0xc);
  return;
}



/* ===== RockchipRga::RkRgaAllocBuffer @ 00017358 size=228 ===== */

/* RockchipRga::RkRgaAllocBuffer(int, bo*, int, int, int, int) */

int __thiscall
RockchipRga::RkRgaAllocBuffer
          (RockchipRga *this,int param_1,bo *param_2,int param_3,int param_4,int param_5,int param_6
          )

{
  int iVar1;
  int *piVar2;
  int __errnum;
  char *pcVar3;
  FILE *__stream;
  int iVar4;
  undefined8 uVar5;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_40 = param_4;
  local_38 = param_5;
  local_34 = param_6;
  iVar4 = DAT_0001743c + 0x173a4;
  local_30 = 0;
  local_3c = param_3;
  do {
    iVar1 = ioctl(param_1,0xc02064b2,&local_40);
    if (iVar1 != -1) {
      if (iVar1 == 0) {
        uVar5 = vrev(CONCAT44(uStack_2c,local_30),4);
        *(undefined4 *)(param_2 + 8) = local_28;
        *(undefined8 *)(param_2 + 0x10) = uVar5;
        return 0;
      }
      piVar2 = __errno_location();
      __errnum = *piVar2;
      break;
    }
    piVar2 = __errno_location();
    __errnum = *piVar2;
  } while (__errnum == 4 || __errnum == 0xb);
  __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_00017440);
  pcVar3 = strerror(__errnum);
  fprintf(__stream,(char *)(DAT_00017444 + 0x17428),pcVar3);
  return iVar1;
}



/* ===== RockchipRga::RkRgaFreeBuffer @ 00017448 size=196 ===== */

/* RockchipRga::RkRgaFreeBuffer(int, bo*) */

int __thiscall RockchipRga::RkRgaFreeBuffer(RockchipRga *this,int param_1,bo *param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  FILE *__stream;
  int iVar4;
  int local_24 [2];
  
  local_24[0] = *(int *)(param_2 + 0x14);
  iVar4 = DAT_0001750c + 0x17464;
  if (local_24[0] == 0) {
    return -0x16;
  }
  do {
    iVar1 = ioctl(param_1,0xc00464b4,local_24);
    if (iVar1 != -1) {
      if (iVar1 == 0) {
        *(undefined4 *)(param_2 + 0x14) = 0;
        return 0;
      }
      piVar2 = __errno_location();
      iVar1 = *piVar2;
      break;
    }
    piVar2 = __errno_location();
    iVar1 = *piVar2;
  } while (iVar1 == 0xb || iVar1 == 4);
  __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_00017510);
  pcVar3 = strerror(iVar1);
  fprintf(__stream,(char *)(DAT_00017514 + 0x174ec),pcVar3);
  return -*piVar2;
}



/* ===== RockchipRga::RkRgaGetAllocBufferExt @ 00017518 size=216 ===== */

/* RockchipRga::RkRgaGetAllocBufferExt(bo*, int, int, int, int) */

int __thiscall
RockchipRga::RkRgaGetAllocBufferExt
          (RockchipRga *this,bo *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int __fd;
  int iVar1;
  int *piVar2;
  
  iVar1 = DAT_000175f0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)param_1 = 0xffffffff;
  __fd = open64((char *)(iVar1 + 0x17538),0x80002);
  if (__fd < 0) {
    fprintf((FILE *)**(undefined4 **)(DAT_000175f4 + 0x17564 + DAT_000175f8),
            (char *)(DAT_000175fc + 0x175c0),(char *)(iVar1 + 0x17538));
    piVar2 = __errno_location();
    return -*piVar2;
  }
  iVar1 = RkRgaAllocBuffer(this,__fd,param_1,param_2,param_3,param_4,param_5);
  if (iVar1 != 0) {
    close(__fd);
    return iVar1;
  }
  *(int *)param_1 = __fd;
  return 0;
}



/* ===== RockchipRga::RkRgaGetAllocBuffer @ 00017600 size=32 ===== */

/* RockchipRga::RkRgaGetAllocBuffer(bo*, int, int, int) */

void __thiscall
RockchipRga::RkRgaGetAllocBuffer(RockchipRga *this,bo *param_1,int param_2,int param_3,int param_4)

{
  RkRgaGetAllocBufferExt(this,param_1,param_2,param_3,param_4,0);
  return;
}



/* ===== RockchipRga::RkRgaGetAllocBufferCache @ 00017620 size=32 ===== */

/* RockchipRga::RkRgaGetAllocBufferCache(bo*, int, int, int) */

void __thiscall
RockchipRga::RkRgaGetAllocBufferCache
          (RockchipRga *this,bo *param_1,int param_2,int param_3,int param_4)

{
  RkRgaGetAllocBufferExt(this,param_1,param_2,param_3,param_4,2);
  return;
}



/* ===== RockchipRga::RkRgaGetMmap @ 00017640 size=164 ===== */

/* RockchipRga::RkRgaGetMmap(bo*) */

int __thiscall RockchipRga::RkRgaGetMmap(RockchipRga *this,bo *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int __fd;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_28 = *(undefined4 *)(param_1 + 0x14);
  local_24 = 0;
  __fd = *(int *)param_1;
  uStack_20 = 0;
  uStack_1c = 0;
  while (iVar2 = ioctl(__fd,0xc01064b3,&local_28), iVar2 == -1) {
    piVar1 = __errno_location();
    if (*piVar1 != 4 && *piVar1 != 0xb) {
      return -1;
    }
  }
  if (iVar2 != 0) {
    return iVar2;
  }
  pvVar3 = mmap64((void *)0x0,*(size_t *)(param_1 + 8),3,1,*(int *)param_1,
                  CONCAT44(uStack_1c,uStack_20));
  if (pvVar3 == (void *)0xffffffff) {
    return -0x16;
  }
  *(void **)(param_1 + 4) = pvVar3;
  return 0;
}



/* ===== RockchipRga::RkRgaUnmap @ 000176e4 size=32 ===== */

/* RockchipRga::RkRgaUnmap(bo*) */

undefined4 __thiscall RockchipRga::RkRgaUnmap(RockchipRga *this,bo *param_1)

{
  munmap(*(void **)(param_1 + 4),*(size_t *)(param_1 + 8));
  *(undefined4 *)(param_1 + 4) = 0;
  return 0;
}



/* ===== RockchipRga::RkRgaFree @ 00017704 size=64 ===== */

/* RockchipRga::RkRgaFree(bo*) */

undefined4 __thiscall RockchipRga::RkRgaFree(RockchipRga *this,bo *param_1)

{
  undefined4 uVar1;
  
  if (*(int *)param_1 < 0) {
    uVar1 = 0xffffffea;
  }
  else {
    uVar1 = RkRgaFreeBuffer(this,*(int *)param_1,param_1);
    close(*(int *)param_1);
    *(undefined4 *)param_1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== RockchipRga::RkRgaGetBufferFd @ 00017744 size=132 ===== */

/* RockchipRga::RkRgaGetBufferFd(bo*, int*) */

int __thiscall RockchipRga::RkRgaGetBufferFd(RockchipRga *this,bo *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int __fd;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  
  local_24 = *(undefined4 *)(param_1 + 0x14);
  local_20 = 0x80002;
  __fd = *(int *)param_1;
  local_1c = -1;
  do {
    iVar2 = ioctl(__fd,0xc00c642d,&local_24);
    if (iVar2 != -1) {
      if (iVar2 != 0) {
        return iVar2;
      }
      *param_2 = local_1c;
      return 0;
    }
    piVar1 = __errno_location();
  } while (*piVar1 == 4 || *piVar1 == 0xb);
  return -1;
}



/* ===== RockchipRga::RkRgaFlush @ 000177c8 size=52 ===== */

/* RockchipRga::RkRgaFlush() */

int RockchipRga::RkRgaFlush(void)

{
  int iVar1;
  
  iVar1 = RgaFlush();
  if (iVar1 == 0) {
    return 0;
  }
  printf((char *)(DAT_000177fc + 0x177ec));
  putchar(10);
  return iVar1;
}



/* ===== RockchipRga::RkRgaCollorFill @ 00017800 size=20 ===== */

/* RockchipRga::RkRgaCollorFill(rga_info*) */

void __thiscall RockchipRga::RkRgaCollorFill(RockchipRga *this,rga_info *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000164dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_RgaCollorFill_00046258)(param_1);
  return;
}



/* ===== RockchipRga::RkRgaLogOutUserPara @ 00017808 size=216 ===== */

/* RockchipRga::RkRgaLogOutUserPara(rga_info*) */

undefined4 __thiscall RockchipRga::RkRgaLogOutUserPara(RockchipRga *this,rga_info *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (rga_info *)0x0) {
    uVar1 = 0xffffffea;
  }
  else {
    printf((char *)(DAT_000178e0 + 0x1782c),*(undefined4 *)(param_1 + 0xbc),*(undefined4 *)param_1,
           *(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
           *(undefined4 *)(param_1 + 0x10));
    putchar(10);
    printf((char *)(DAT_000178e4 + 0x17860),*(undefined4 *)(param_1 + 0x14),
           *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
           *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
           *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
           *(undefined4 *)(param_1 + 0x30));
    putchar(10);
    printf((char *)(DAT_000178e8 + 0x178a4),*(undefined4 *)(param_1 + 0x10),
           *(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),
           *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
           *(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48));
    putchar(10);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== RockchipRga::RkRgaBlit @ 000178ec size=116 ===== */

/* RockchipRga::RkRgaBlit(rga_info*, rga_info*, rga_info*) */

int __thiscall
RockchipRga::RkRgaBlit(RockchipRga *this,rga_info *param_1,rga_info *param_2,rga_info *param_3)

{
  int iVar1;
  
  iVar1 = RgaBlit(param_1,param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  RkRgaLogOutUserPara(this,param_1);
  RkRgaLogOutUserPara(this,param_2);
  RkRgaLogOutUserPara(this,param_3);
  printf((char *)(DAT_00017960 + 0x17950));
  putchar(10);
  return iVar1;
}



/* ===== RockchipRga::RkRgaCollorPalette @ 00017964 size=100 ===== */

/* RockchipRga::RkRgaCollorPalette(rga_info*, rga_info*, rga_info*) */

int __thiscall
RockchipRga::RkRgaCollorPalette
          (RockchipRga *this,rga_info *param_1,rga_info *param_2,rga_info *param_3)

{
  int iVar1;
  
  iVar1 = RgaCollorPalette(param_1,param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  RkRgaLogOutUserPara(this,param_1);
  RkRgaLogOutUserPara(this,param_2);
  printf((char *)(DAT_000179c8 + 0x179b8));
  putchar(10);
  return iVar1;
}



/* ===== FUN_000179cc @ 000179cc size=656 ===== */

_Rb_tree_node_base * FUN_000179cc(int param_1,_Rb_tree_node_base *param_2,undefined4 *param_3)

{
  bool bVar1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *p_Var4;
  uint uVar5;
  _Rb_tree_node_base *p_Var6;
  uint uVar7;
  _Rb_tree_node_base *p_Var8;
  _Rb_tree_node_base *p_Var9;
  bool bVar10;
  
  p_Var2 = operator_new(0x18);
  p_Var9 = (_Rb_tree_node_base *)(param_1 + 4);
  uVar7 = *(uint *)*param_3;
  *(undefined4 *)(p_Var2 + 0x14) = 0;
  *(uint *)(p_Var2 + 0x10) = uVar7;
  if (p_Var9 == param_2) {
    if ((*(int *)(param_1 + 0x14) == 0) ||
       (p_Var3 = *(_Rb_tree_node_base **)(param_1 + 0x10), uVar7 <= *(uint *)(p_Var3 + 0x10))) {
      p_Var3 = *(_Rb_tree_node_base **)(param_1 + 8);
      if (*(_Rb_tree_node_base **)(param_1 + 8) == (_Rb_tree_node_base *)0x0) {
LAB_00017bbc:
        p_Var4 = param_2;
        if (*(_Rb_tree_node_base **)(param_1 + 0xc) == param_2) goto LAB_00017ba8;
        p_Var3 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_2);
        uVar5 = *(uint *)(p_Var3 + 0x10);
        p_Var6 = param_2;
      }
      else {
        do {
          param_2 = p_Var3;
          uVar5 = *(uint *)(param_2 + 0x10);
          if (uVar7 < uVar5) {
            p_Var3 = *(_Rb_tree_node_base **)(param_2 + 8);
          }
          else {
            p_Var3 = *(_Rb_tree_node_base **)(param_2 + 0xc);
          }
        } while (p_Var3 != (_Rb_tree_node_base *)0x0);
        p_Var3 = param_2;
        p_Var6 = param_2;
        if (uVar7 < uVar5) goto LAB_00017bbc;
      }
joined_r0x00017b40:
      param_2 = p_Var3;
      p_Var4 = p_Var6;
      if (uVar7 <= uVar5) goto LAB_00017b48;
LAB_00017ba8:
      if (p_Var4 == (_Rb_tree_node_base *)0x0) {
        param_2 = (_Rb_tree_node_base *)0x0;
LAB_00017b48:
        operator_delete(p_Var2);
        return param_2;
      }
      p_Var8 = (_Rb_tree_node_base *)0x0;
      goto LAB_00017a50;
    }
LAB_00017b58:
    bVar1 = false;
LAB_00017a58:
    if (p_Var9 == p_Var3) {
      bVar1 = true;
    }
    bVar10 = true;
    p_Var4 = p_Var3;
    if (bVar1) goto LAB_00017a6c;
  }
  else {
    p_Var6 = p_Var9;
    if (uVar7 < *(uint *)(param_2 + 0x10)) {
      p_Var8 = *(_Rb_tree_node_base **)(param_1 + 0xc);
      p_Var4 = p_Var8;
      if (p_Var8 != param_2) {
        p_Var3 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_2);
        if (uVar7 <= *(uint *)(p_Var3 + 0x10)) {
          p_Var3 = *(_Rb_tree_node_base **)(param_1 + 8);
          if (*(_Rb_tree_node_base **)(param_1 + 8) != (_Rb_tree_node_base *)0x0) {
            do {
              p_Var6 = p_Var3;
              uVar5 = *(uint *)(p_Var6 + 0x10);
              if (uVar7 < uVar5) {
                p_Var3 = *(_Rb_tree_node_base **)(p_Var6 + 8);
              }
              else {
                p_Var3 = *(_Rb_tree_node_base **)(p_Var6 + 0xc);
              }
            } while (p_Var3 != (_Rb_tree_node_base *)0x0);
            p_Var3 = p_Var6;
            if (uVar7 >= uVar5) goto joined_r0x00017b40;
          }
          if (p_Var8 != p_Var6) {
LAB_00017be4:
            p_Var3 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var6);
            uVar5 = *(uint *)(p_Var3 + 0x10);
            goto joined_r0x00017b40;
          }
          goto LAB_00017ba8;
        }
        p_Var8 = param_2;
        p_Var4 = param_2;
        if (*(int *)(p_Var3 + 0xc) == 0) goto LAB_00017b58;
      }
LAB_00017a50:
      bVar1 = false;
      p_Var3 = p_Var4;
      if (p_Var8 != (_Rb_tree_node_base *)0x0) {
        bVar1 = true;
      }
      goto LAB_00017a58;
    }
    if (uVar7 == *(uint *)(param_2 + 0x10)) goto LAB_00017b48;
    p_Var3 = *(_Rb_tree_node_base **)(param_1 + 0x10);
    if (*(_Rb_tree_node_base **)(param_1 + 0x10) != param_2) {
      p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_2);
      if (*(uint *)(p_Var4 + 0x10) <= uVar7) {
        p_Var3 = *(_Rb_tree_node_base **)(param_1 + 8);
        if (*(_Rb_tree_node_base **)(param_1 + 8) != (_Rb_tree_node_base *)0x0) {
          do {
            p_Var6 = p_Var3;
            uVar5 = *(uint *)(p_Var6 + 0x10);
            if (uVar7 < uVar5) {
              p_Var3 = *(_Rb_tree_node_base **)(p_Var6 + 8);
            }
            else {
              p_Var3 = *(_Rb_tree_node_base **)(p_Var6 + 0xc);
            }
          } while (p_Var3 != (_Rb_tree_node_base *)0x0);
          p_Var3 = p_Var6;
          if (uVar7 >= uVar5) goto joined_r0x00017b40;
        }
        p_Var4 = p_Var6;
        if (*(_Rb_tree_node_base **)(param_1 + 0xc) != p_Var6) goto LAB_00017be4;
        goto LAB_00017ba8;
      }
      p_Var3 = param_2;
      if (*(int *)(param_2 + 0xc) != 0) {
        bVar10 = true;
        goto LAB_00017a6c;
      }
    }
  }
  bVar10 = uVar7 < *(uint *)(p_Var3 + 0x10);
  p_Var4 = p_Var3;
LAB_00017a6c:
  std::_Rb_tree_insert_and_rebalance(bVar10,p_Var2,p_Var4,p_Var9);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return p_Var2;
}



/* ===== NormalRgaSetLogOnceFlag @ 00017c5c size=12 ===== */

/* NormalRgaSetLogOnceFlag(int) */

void NormalRgaSetLogOnceFlag(int param_1)

{
  code *pcVar1;
  
  uRam00000008 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x17c64);
  (*pcVar1)();
}



/* ===== NormalRgaSetAlwaysLogFlag @ 00017c68 size=12 ===== */

/* NormalRgaSetAlwaysLogFlag(int) */

void NormalRgaSetAlwaysLogFlag(int param_1)

{
  code *pcVar1;
  
  uRam00000004 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x17c70);
  (*pcVar1)();
}



/* ===== is_out_log @ 00017c74 size=28 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* is_out_log() */

undefined4 is_out_log(void)

{
  return *(undefined4 *)(**(int **)(DAT_00017c90 + 0x17c84 + DAT_00017c94) + 0x10);
}



/* ===== get_int_property @ 00017c98 size=48 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* get_int_property() */

void get_int_property(void)

{
  char *__nptr;
  
  __nptr = getenv((char *)(DAT_00017cc8 + 0x17ca8));
  if (__nptr != (char *)0x0) {
    atoi(__nptr);
    return;
  }
  atoi((char *)((int)&DAT_00017cc8 + DAT_00017ccc));
  return;
}



/* ===== is_debug_log @ 00017cd0 size=36 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* is_debug_log() */

void is_debug_log(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = **(int **)(DAT_00017cf4 + 0x17ce0 + DAT_00017cf8);
  uVar1 = get_int_property();
  *(undefined4 *)(iVar2 + 0x10) = uVar1;
  return;
}



/* ===== NormalRgaOpen @ 00017cfc size=572 ===== */

/* NormalRgaOpen(void**) */

int NormalRgaOpen(void **param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  pthread_mutex_t *__mutex;
  double dVar8;
  
  iVar5 = DAT_00017f38 + 0x17d14;
  if (param_1 == (void **)0x0) {
    iVar6 = -0x16;
  }
  else {
    puVar7 = *(undefined4 **)(iVar5 + DAT_00017f3c);
    piVar4 = (int *)*puVar7;
    if (piVar4 == (int *)0x0) {
      piVar4 = malloc(0xc4);
      if (piVar4 == (int *)0x0) {
        piVar4 = __errno_location();
        pcVar3 = strerror(*piVar4);
        printf((char *)(DAT_00017f64 + 0x17f2c),pcVar3);
        putchar(10);
        return -0xc;
      }
      iVar1 = open64((char *)(DAT_00017f4c + 0x17da4),2,0);
      if (iVar1 < 0) {
        piVar2 = __errno_location();
        iVar6 = -0x13;
        pcVar3 = strerror(*piVar2);
        printf((char *)(DAT_00017f58 + 0x17e98),pcVar3);
        putchar(10);
LAB_00017ea0:
        free(piVar4);
        return iVar6;
      }
      *piVar4 = iVar1;
      iVar6 = ioctl(iVar1,0x801c7201,piVar4 + 0x29);
      if (iVar6 < 0) {
        piVar2 = piVar4 + 8;
        piVar4[0x28] = 1;
        iVar6 = ioctl(iVar1,0x601b,piVar2);
        if ((iVar6 < 0) && (iVar6 = ioctl(iVar1,0x501b,piVar2), iVar6 < 0)) {
          pcVar3 = strerror(iVar6);
          printf((char *)(DAT_00017f5c + 0x17ee0),pcVar3);
          putchar(10);
          goto LAB_00017ea0;
        }
        sscanf((char *)piVar2,(char *)(DAT_00017f50 + 0x17e40),piVar4 + 5,piVar4 + 6,piVar4 + 7);
        dVar8 = atof((char *)piVar2);
        iVar1 = DAT_00017f54;
        piVar4[0x30] = 1;
        piVar4[3] = (int)(float)dVar8;
        puts((char *)(iVar1 + 0x17e64));
        putchar(10);
      }
      else {
        iVar6 = ioctl(iVar1,0x80907202,piVar4 + 5);
        if (iVar6 < 0) {
          puts((char *)(DAT_00017f60 + 0x17ef8));
          putchar(10);
          goto LAB_00017ea0;
        }
        piVar4[0x30] = 2;
        piVar4[3] = 0x404ccccd;
      }
      NormalRgaInitTables();
      *puVar7 = piVar4;
    }
    else {
      iVar6 = 0;
      printf((char *)(DAT_00017f40 + 0x17d3c),piVar4);
      putchar(10);
    }
    __mutex = *(pthread_mutex_t **)(iVar5 + DAT_00017f44);
    pthread_mutex_lock(__mutex);
    **(int **)(iVar5 + DAT_00017f48) = **(int **)(iVar5 + DAT_00017f48) + 1;
    pthread_mutex_unlock(__mutex);
    *param_1 = piVar4;
  }
  return iVar6;
}



/* ===== NormalRgaClose @ 00017f68 size=324 ===== */

/* NormalRgaClose(void**) */

undefined4 NormalRgaClose(void **param_1)

{
  int *piVar1;
  int iVar2;
  int *__ptr;
  undefined4 *puVar3;
  pthread_mutex_t *__mutex;
  
  iVar2 = DAT_000180ac + 0x17f78;
  puVar3 = *(undefined4 **)(iVar2 + DAT_000180b0);
  piVar1 = (int *)*puVar3;
  if (piVar1 == (int *)0x0) {
    printf((char *)(DAT_000180c8 + 0x1809c));
    putchar(10);
    return 0xffffffed;
  }
  __ptr = *param_1;
  if (__ptr == (int *)0x0) {
    printf((char *)(DAT_000180c4 + 0x18080),0);
    putchar(10);
    return 0xffffffed;
  }
  if (__ptr != piVar1) {
    printf((char *)(DAT_000180c0 + 0x18060));
    putchar(10);
    return 0xffffffed;
  }
  piVar1 = *(int **)(iVar2 + DAT_000180b4);
  if (0 < *piVar1) {
    __mutex = *(pthread_mutex_t **)(iVar2 + DAT_000180b8);
    pthread_mutex_lock(__mutex);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      *piVar1 = 0;
      pthread_mutex_unlock(__mutex);
      return 0;
    }
    if (*piVar1 < 1) {
      pthread_mutex_unlock(__mutex);
      *puVar3 = 0;
      *param_1 = (void *)0x0;
      close(*__ptr);
      free(__ptr);
      return 0;
    }
    pthread_mutex_unlock(__mutex);
    return 0;
  }
  printf((char *)(DAT_000180bc + 0x1802c));
  putchar(10);
  return 0;
}



/* ===== RgaInit @ 000180cc size=48 ===== */

/* RgaInit(void**) */

int RgaInit(void **param_1)

{
  int iVar1;
  
  NormalRgaOpen(param_1);
  iVar1 = rga_check_driver((rga_version_t *)
                           (**(int **)(DAT_000180fc + 0x180e4 + DAT_00018100) + 0xa4));
  if (iVar1 == -5) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== RgaDeInit @ 00018104 size=4 ===== */

/* RgaDeInit(void**) */

void RgaDeInit(void **param_1)

{
  (*(code *)PTR_NormalRgaClose_00046204)(param_1);
  return;
}



/* ===== RgaBlit @ 00018108 size=7612 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* RgaBlit(rga_info*, rga_info*, rga_info*) */

int RgaBlit(rga_info *param_1,rga_info *param_2,rga_info *param_3)

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
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int *piVar18;
  char *pcVar19;
  uint uVar20;
  undefined4 uVar21;
  int iVar22;
  int *piVar23;
  uint uVar24;
  undefined4 uVar25;
  int iVar26;
  rga2_req *__s;
  uint uVar27;
  uint uVar28;
  undefined4 *puVar29;
  ulong __request;
  undefined4 uVar30;
  uint uVar31;
  rga_info *prVar32;
  rga_info *prVar33;
  bool bVar34;
  bool bVar35;
  uint in_fpscr;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  ulonglong uVar42;
  uint local_418;
  uint local_410;
  uint local_408;
  uint local_400;
  uint local_3fc;
  uint local_3e8;
  uint local_3e0;
  uint local_3dc;
  uint local_3d8;
  uint local_3d4;
  uint local_3c4;
  uint local_3b0;
  uint local_3ac;
  uint local_3a8;
  uchar local_3a4;
  uint local_398;
  undefined2 local_394;
  short local_392;
  undefined2 local_390;
  short local_38e;
  uint local_38c;
  uint local_388;
  uint local_384;
  uint local_380;
  uint local_37c;
  uint local_378;
  int local_374;
  undefined4 uStack_370;
  uint local_36c;
  uint local_368;
  uint local_364;
  uint local_360;
  uint local_35c;
  uint local_358;
  int local_354;
  undefined4 uStack_350;
  uint local_34c;
  uint local_348;
  uint local_344;
  uint local_340;
  uint local_33c;
  uint local_338;
  int local_334;
  undefined4 uStack_330;
  uint *local_32c [65];
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined1 auStack_218 [38];
  undefined2 local_1f2;
  undefined2 local_1ba;
  undefined2 local_182;
  ushort local_158;
  undefined2 local_11a;
  undefined1 local_118;
  uint local_100;
  undefined1 local_f8;
  undefined4 local_cc;
  undefined1 local_c8;
  undefined1 local_c7;
  undefined4 local_c4;
  byte local_c0;
  undefined2 local_bf;
  undefined4 local_b8 [14];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  iVar22 = DAT_000189a4 + 0x18120;
  piVar23 = (int *)**(undefined4 **)(iVar22 + DAT_000189a8);
  if (piVar23 == (int *)0x0) {
    printf((char *)(DAT_000193b0 + 0x19f3c),0);
    putchar(10);
    return -0x13;
  }
  __s = (rga2_req *)&local_228;
  memset(__s,0,0x1f8);
  is_debug_log();
  iVar14 = is_out_log();
  if (iVar14 != 0) {
    printf((char *)(DAT_000189c8 + 0x18770));
    putchar(10);
  }
  if (param_1 == (rga_info *)0x0 && param_2 == (rga_info *)0x0) {
    if (param_3 != (rga_info *)0x0) {
      printf((char *)(DAT_000189bc + 100000),0);
      putchar(10);
      return -0x16;
    }
    printf((char *)(DAT_000193bc + 0x19f88),0,0,0);
    putchar(10);
    return -0x16;
  }
  if (param_1 == (rga_info *)0x0) {
    uVar27 = 0;
    uVar31 = 0;
  }
  else {
    local_38c = *(uint *)(param_1 + 0x14);
    uVar31 = *(uint *)(param_1 + 0x3c);
    uVar27 = *(uint *)(param_1 + 0x34);
    local_388 = *(uint *)(param_1 + 0x18);
    local_384 = *(uint *)(param_1 + 0x1c);
    local_380 = *(uint *)(param_1 + 0x20);
    local_37c = *(uint *)(param_1 + 0x24);
    local_378 = *(uint *)(param_1 + 0x28);
    local_374 = *(int *)(param_1 + 0x2c);
    uStack_370 = *(undefined4 *)(param_1 + 0x30);
  }
  if (param_2 != (rga_info *)0x0) {
    local_36c = *(uint *)(param_2 + 0x14);
    local_368 = *(uint *)(param_2 + 0x18);
    local_364 = *(uint *)(param_2 + 0x1c);
    local_360 = *(uint *)(param_2 + 0x20);
    local_35c = *(uint *)(param_2 + 0x24);
    local_358 = *(uint *)(param_2 + 0x28);
    local_354 = *(int *)(param_2 + 0x2c);
    uStack_350 = *(undefined4 *)(param_2 + 0x30);
  }
  if (param_3 == (rga_info *)0x0) {
    iVar14 = is_out_log();
    if (iVar14 != 0) {
      printf((char *)(DAT_0001935c + 0x19288),*(undefined4 *)(param_1 + 0xc),
             *(undefined4 *)(param_2 + 0xc),0);
      putchar(10);
      printf((char *)(DAT_00019360 + 0x192a4),*(undefined4 *)(param_1 + 0xbc),*(undefined4 *)param_1
             ,*(undefined4 *)(param_1 + 8));
      putchar(10);
      printf((char *)(DAT_00019364 + 0x192c8),*(undefined4 *)(param_2 + 0xbc),*(undefined4 *)param_2
             ,*(undefined4 *)(param_2 + 8));
      putchar(10);
    }
    uVar28 = *(uint *)(param_1 + 0xbc);
    if ((int)uVar28 < 1) {
      if (0 < *(int *)(param_2 + 0xbc)) goto LAB_00018744;
      goto LAB_00018914;
    }
    if (*(int *)(param_2 + 0xbc) < 1) {
LAB_00018744:
      printf((char *)(DAT_000189c4 + 0x18758),uVar28);
      putchar(10);
      return -0x16;
    }
LAB_000182ec:
    local_c0 = local_c0 | 1;
LAB_000182f8:
    local_408 = 0;
  }
  else {
    local_34c = *(uint *)(param_3 + 0x14);
    local_348 = *(uint *)(param_3 + 0x18);
    local_344 = *(uint *)(param_3 + 0x1c);
    local_340 = *(uint *)(param_3 + 0x20);
    local_33c = *(uint *)(param_3 + 0x24);
    local_338 = *(uint *)(param_3 + 0x28);
    local_334 = *(int *)(param_3 + 0x2c);
    uStack_330 = *(undefined4 *)(param_3 + 0x30);
    iVar14 = is_out_log();
    if (iVar14 != 0) {
      printf((char *)(DAT_000189ac + 0x18250),*(undefined4 *)(param_1 + 0xc),
             *(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_3 + 0xc));
      putchar(10);
      printf((char *)(DAT_000189b0 + 0x18270),*(undefined4 *)(param_1 + 0xbc),*(undefined4 *)param_1
             ,*(undefined4 *)(param_1 + 8));
      putchar(10);
      printf((char *)(DAT_000189b4 + 0x18294),*(undefined4 *)(param_3 + 0xbc),*(undefined4 *)param_3
             ,*(undefined4 *)(param_3 + 8));
      putchar(10);
      printf((char *)(DAT_000189b8 + 99000),*(undefined4 *)(param_2 + 0xbc),*(undefined4 *)param_2,
             *(undefined4 *)(param_2 + 8));
      putchar(10);
    }
    uVar28 = *(uint *)(param_1 + 0xbc);
    if (0 < (int)uVar28) {
      if ((*(int *)(param_2 + 0xbc) < 1) || (*(int *)(param_3 + 0xbc) < 1)) {
LAB_000186cc:
        printf((char *)(DAT_000189c0 + 0x186e0),uVar28);
        putchar(10);
        return -0x16;
      }
      goto LAB_000182ec;
    }
    if ((0 < *(int *)(param_2 + 0xbc)) || (0 < *(int *)(param_3 + 0xbc))) goto LAB_000186cc;
LAB_00018914:
    if (uVar28 != 0) {
      if (uVar28 == 0xffffffff) {
LAB_00019060:
        printf((char *)(DAT_0001933c + 0x19074),0x223);
        putchar(10);
        return 0;
      }
      goto LAB_000182f8;
    }
    local_408 = *(uint *)(param_1 + 8);
    if (local_408 == 0) {
      uVar28 = *(uint *)param_1;
      if ((int)uVar28 < 1) {
        local_408 = *(uint *)(param_1 + 4);
        if (local_408 == 0) goto LAB_00019060;
        uVar28 = 0xffffffff;
        *(undefined4 *)(param_1 + 0x48) = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x48) = 1;
      }
    }
    else {
      uVar28 = 0xffffffff;
    }
  }
  if (param_3 == (rga_info *)0x0) {
    local_410 = 0xffffffff;
    local_3e8 = 0;
  }
  else {
    local_410 = *(uint *)(param_3 + 0xbc);
    if (local_410 == 0) {
      local_3e8 = *(uint *)(param_3 + 8);
      if (local_3e8 == 0) {
        local_410 = *(uint *)param_3;
        if ((int)local_410 < 1) {
          local_3e8 = *(uint *)(param_3 + 4);
          if (local_3e8 == 0) goto LAB_000187bc;
          *(undefined4 *)(param_3 + 0x48) = 1;
          local_410 = 0xffffffff;
        }
        else {
          *(undefined4 *)(param_3 + 0x48) = 1;
        }
      }
      else {
        local_410 = 0xffffffff;
      }
    }
    else {
      if (local_410 == 0xffffffff) {
LAB_000187bc:
        printf((char *)(DAT_000189d0 + 0x187d0),0x261);
        putchar(10);
        return 0;
      }
      local_3e8 = 0;
    }
  }
  if (param_2 == (rga_info *)0x0) {
LAB_0001878c:
    printf((char *)(DAT_000189cc + 0x187a0),0x2a0);
    putchar(10);
    return 0;
  }
  local_418 = *(uint *)(param_2 + 0xbc);
  if (local_418 == 0) {
    local_3fc = *(uint *)(param_2 + 8);
    if (local_3fc == 0) {
      local_418 = *(uint *)param_2;
      if ((int)local_418 < 1) {
        local_3fc = *(uint *)(param_2 + 4);
        if (local_3fc == 0) goto LAB_0001878c;
        *(undefined4 *)(param_2 + 0x48) = 1;
        local_418 = 0xffffffff;
      }
      else {
        *(undefined4 *)(param_2 + 0x48) = 1;
      }
    }
    else {
      local_418 = 0xffffffff;
    }
  }
  else {
    if (local_418 == 0xffffffff) goto LAB_0001878c;
    local_3fc = 0;
  }
  iVar14 = is_out_log();
  if (iVar14 != 0) {
    printf((char *)(DAT_00019344 + 0x190c4),(uint)local_c0);
    putchar(10);
    printf((char *)(DAT_00019348 + 0x190e4),uVar28,local_408,*(undefined4 *)(param_1 + 0x48));
    putchar(10);
    if (param_3 != (rga_info *)0x0) {
      printf((char *)(DAT_0001934c + 0x1910c),local_410,local_3e8,*(undefined4 *)(param_3 + 0x48));
      putchar(10);
    }
    printf((char *)(DAT_00019350 + 0x19134),local_418,local_3fc,*(undefined4 *)(param_2 + 0x48));
    putchar(10);
  }
  iVar14 = RkRgaCompatibleFormat(local_374);
  local_374 = iVar14;
  local_354 = RkRgaCompatibleFormat(local_354);
  iVar15 = isRectValid(local_34c,local_348,local_344,local_340);
  if (iVar15 != 0) {
    local_334 = RkRgaCompatibleFormat(local_334);
  }
  uVar24 = (uVar27 & 0xffffff) >> 0x10;
  iVar14 = RkRgaGetRgaFormat(iVar14);
  uVar16 = NormalRgaFormatHasAlpha(iVar14);
  iVar14 = is_out_log();
  if (iVar14 != 0) {
    printf((char *)(DAT_00019340 + 0x19094),uVar27,uVar16);
    putchar(10);
  }
  uVar20 = uVar27 & 0xffff;
  if (uVar20 == 0x105) {
    if (uVar24 < 0xff) {
      uVar27 = uVar16 & 1;
    }
    else {
      uVar27 = 0;
    }
    if (uVar27 == 0) {
      if (uVar16 == 0) {
        NormalRgaSetAlphaEnInfo((rga_req *)__s,1,0,uVar24,0,0,0);
      }
      else {
        NormalRgaSetAlphaEnInfo((rga_req *)__s,1,1,0,1,3,0);
      }
    }
    else {
      uVar27 = 9;
LAB_00019ea0:
      NormalRgaSetAlphaEnInfo((rga_req *)__s,1,2,uVar24,1,uVar27,0);
    }
  }
  else if (uVar20 < 0x106) {
    if (uVar20 == 1) {
      uVar42 = CONCAT44(uVar27,uVar27) & 0xffff0000ffff;
      NormalRgaSetAlphaEnInfo((rga_req *)__s,1,2,uVar24,(uint)uVar42,(uint)(uVar42 >> 0x20),0);
    }
    else if (uVar20 == 2) {
      NormalRgaSetAlphaEnInfo((rga_req *)__s,1,2,uVar24,1,uVar27 & 0xffff,0);
    }
  }
  else if (uVar20 == 0x501) {
    if (uVar24 < 0xff) {
      uVar27 = uVar16 & 1;
    }
    else {
      uVar27 = 0;
    }
    if (uVar27 != 0) {
      uVar27 = 4;
      goto LAB_00019ea0;
    }
    if (uVar16 == 0) {
      NormalRgaSetAlphaEnInfo((rga_req *)__s,1,3,uVar24,1,4,0);
    }
    else {
      NormalRgaSetAlphaEnInfo((rga_req *)__s,1,1,uVar24,1,4,0);
    }
  }
  else {
    if (uVar20 == 0x504) {
      if (uVar24 < 0xff) {
        uVar27 = uVar16 & 1;
      }
      else {
        uVar27 = 0;
      }
      if (uVar27 == 0) {
        if (uVar16 == 0) {
          NormalRgaSetAlphaEnInfo((rga_req *)__s,1,3,uVar24,1,4,0);
        }
        else {
          NormalRgaSetAlphaEnInfo((rga_req *)__s,1,1,uVar24,1,4,0);
        }
      }
      else {
        uVar27 = 4;
LAB_00019ee4:
        NormalRgaSetAlphaEnInfo((rga_req *)__s,1,2,uVar24,1,uVar27,0);
      }
    }
    else {
      if (uVar20 != 0x405) goto LAB_00018414;
      if (uVar24 < 0xff) {
        uVar27 = uVar16 & 1;
      }
      else {
        uVar27 = 0;
      }
      if (uVar27 != 0) {
        uVar27 = 9;
        goto LAB_00019ee4;
      }
      if (uVar16 == 0) {
        NormalRgaSetAlphaEnInfo((rga_req *)__s,1,0,uVar24,0,0,0);
      }
      else {
        NormalRgaSetAlphaEnInfo((rga_req *)__s,1,1,0,1,3,0);
      }
    }
    local_158 = local_158 | 0x200;
  }
LAB_00018414:
  if (local_378 == 0) {
    local_378 = local_380;
  }
  uVar27 = local_378;
  iVar14 = isRectValid(local_34c,local_348,local_344,local_340);
  if ((iVar14 != 0) && (local_338 == 0)) {
    local_338 = local_340;
  }
  if (local_358 == 0) {
    local_358 = local_360;
  }
  uVar16 = local_358;
  iVar14 = checkRectForRga(local_38c,local_388,local_384,local_380);
  if (iVar14 != 0) {
    puts((char *)(DAT_00019378 + 0x19a08));
    printf((char *)(DAT_00019380 + 0x19a20),DAT_0001937c + 0x19a1c,0x319);
    putchar(10);
    return iVar14;
  }
  if (param_3 == (rga_info *)0x0) {
    uVar41 = checkRectForRga(local_36c,local_368,local_364,local_360);
    uVar30 = (undefined4)((ulonglong)uVar41 >> 0x20);
    iVar14 = (int)uVar41;
    if (iVar14 != 0) {
LAB_00019b48:
      puts((char *)(DAT_0001939c + 0x19b58));
      printf((char *)(DAT_000193a4 + 0x19b70),DAT_000193a0 + 0x19b6c,0x32b);
      putchar(10);
      return iVar14;
    }
    fVar38 = (float)VectorSignedToFloat(local_364,(byte)(in_fpscr >> 0x16) & 3);
    fVar39 = (float)VectorSignedToFloat(local_380,(byte)(in_fpscr >> 0x16) & 3);
    fVar40 = (float)VectorSignedToFloat(local_384,(byte)(in_fpscr >> 0x16) & 3);
    fVar37 = (float)VectorSignedToFloat(local_360,(byte)(in_fpscr >> 0x16) & 3);
    fVar36 = fVar37;
    if (uVar31 == 7 || uVar31 == 4) {
      fVar36 = fVar38;
      fVar38 = fVar37;
    }
    fVar40 = fVar40 / fVar38;
    fVar39 = fVar39 / fVar36;
    if (((fVar40 < DAT_000189a0) || (16.0 < fVar40)) || ((fVar39 < DAT_000189a0 || (16.0 < fVar39)))
       ) {
      pcVar19 = (char *)(DAT_000193b4 + 0x19f5c);
LAB_000188e8:
      printf(pcVar19,uVar30,SUB84((double)fVar40,0),(int)((ulonglong)(double)fVar40 >> 0x20));
      putchar(10);
      return -0x16;
    }
    if (((float)piVar23[3] < 2.0) &&
       ((((fVar40 < 0.125 || (8.0 < fVar40)) || (fVar39 < 0.125)) || (8.0 < fVar39)))) {
      pcVar19 = (char *)(DAT_000189d4 + 0x188ec);
      goto LAB_000188e8;
    }
    if (((double)(float)piVar23[3] <= DAT_00019330) && ((fVar40 < 0.5 || (fVar39 < 0.5)))) {
      printf((char *)(DAT_00019338 + 0x19018),uVar30,SUB84((double)fVar40,0),
             (int)((ulonglong)(double)fVar40 >> 0x20));
      putchar(10);
      return -0x16;
    }
    bVar34 = false;
  }
  else {
    iVar14 = checkRectForRga(local_34c,local_348,local_344,local_340);
    if (iVar14 != 0) {
      puts((char *)(DAT_00019390 + 0x19b24));
      printf((char *)(DAT_00019398 + 0x19b3c),DAT_00019394 + 0x19b38,0x322);
      putchar(10);
      return iVar14;
    }
    uVar41 = checkRectForRga(local_36c,local_368,local_364,local_360);
    uVar30 = (undefined4)((ulonglong)uVar41 >> 0x20);
    iVar14 = (int)uVar41;
    if (iVar14 != 0) goto LAB_00019b48;
    bVar34 = uVar31 != 7;
    bVar35 = uVar31 != 4;
    fVar39 = (float)VectorSignedToFloat(local_384,(byte)(in_fpscr >> 0x16) & 3);
    fVar38 = (float)VectorSignedToFloat(local_344,(byte)(in_fpscr >> 0x16) & 3);
    fVar36 = (float)VectorSignedToFloat(local_340,(byte)(in_fpscr >> 0x16) & 3);
    fVar40 = fVar38;
    if (!bVar34 || !bVar35) {
      fVar40 = fVar36;
    }
    fVar40 = fVar39 / fVar40;
    fVar37 = (float)VectorSignedToFloat(local_380,(byte)(in_fpscr >> 0x16) & 3);
    if (bVar34 && bVar35) {
      fVar39 = fVar37 / fVar36;
    }
    if (!bVar34 || !bVar35) {
      fVar39 = fVar37 / fVar38;
    }
    if ((((fVar40 < 0.0) || (16.0 < fVar40)) || (fVar39 < 0.0)) || (16.0 < fVar39)) {
      pcVar19 = (char *)(DAT_000193ac + 0x19f28);
      goto LAB_000188e8;
    }
    if (((float)piVar23[3] <= 2.0) && ((8.0 < fVar40 || (8.0 < fVar39)))) {
      pcVar19 = (char *)(DAT_000193b8 + 0x19f70);
      goto LAB_000188e8;
    }
    bVar34 = true;
  }
  local_3a8 = local_340;
  uVar10 = local_344;
  uVar6 = local_360;
  local_3dc = local_364;
  iVar14 = local_374;
  uVar20 = local_380;
  uVar24 = local_384;
  local_400 = (uint)(fVar40 != 1.0);
  if (fVar39 != 1.0) {
    local_400 = 1;
  }
  if (((1.0 <= fVar40) && (1.0 <= fVar39)) || (local_374 == 0 || local_374 == 0x300)) {
    uVar30 = 0;
    local_3a4 = '\0';
  }
  else {
    uVar30 = 2;
    local_3a4 = '\x02';
  }
  iVar15 = is_out_log();
  if (iVar15 != 0) {
    printf((char *)(DAT_00019374 + 0x19754),uVar30,local_400);
    putchar(10);
  }
  uVar12 = local_338;
  uVar11 = local_33c;
  uVar9 = local_348;
  uVar8 = local_34c;
  uVar7 = local_35c;
  uVar5 = local_368;
  uVar4 = local_36c;
  uVar3 = local_37c;
  uVar2 = local_388;
  uVar1 = local_38c;
  local_3d8 = uVar6;
  local_3ac = uVar10;
  switch(uVar31 & 0xf) {
  case 1:
    local_3b0 = 0;
    local_400 = 2;
    break;
  case 2:
    local_3b0 = 0;
    local_400 = 3;
    break;
  case 3:
    local_3b0 = 0xb4;
    local_400 = 1;
    break;
  case 4:
    local_3ac = local_3a8;
    local_3a8 = uVar10;
    local_3d8 = local_3dc;
    local_3dc = uVar6;
    local_3b0 = 0x5a;
    local_400 = 1;
    break;
  case 5:
  default:
switchD_0001865c_default:
    local_3b0 = 0;
    break;
  case 6:
    goto switchD_0001865c_default;
  case 7:
    local_3ac = local_3a8;
    local_3d8 = local_3dc;
    local_3a8 = uVar10;
    local_3dc = uVar6;
    local_3b0 = 0x10e;
    local_400 = 1;
    break;
  case 8:
    local_3b0 = 0;
    local_400 = 4;
  }
  uVar31 = (uVar31 & 0xff) >> 4;
  if (uVar31 == 2) {
    local_400 = local_400 | 0x30;
  }
  else if (uVar31 == 8) {
    local_400 = local_400 | 0x40;
  }
  else if (uVar31 == 1) {
    local_400 = local_400 | 0x20;
  }
  local_392 = (short)local_35c + -1;
  local_38e = (short)uVar16 + -1;
  local_394 = 0;
  local_390 = 0;
  iVar15 = RkRgaGetRgaFormat(iVar14);
  iVar17 = NormalRgaIsRgbFormat(iVar15);
  iVar15 = local_354;
  if ((iVar17 == 0) ||
     ((iVar17 = RkRgaGetRgaFormat(iVar14), iVar17 == 0x400 &&
      (iVar17 = RkRgaGetRgaFormat(iVar14), iVar17 == 0x2400)))) {
    local_3c4 = 0;
  }
  else {
    iVar17 = RkRgaGetRgaFormat(iVar15);
    if (iVar17 == 0x400) {
      local_3c4 = 1;
    }
    else {
      iVar17 = RkRgaGetRgaFormat(iVar15);
      local_3c4 = (uint)(iVar17 == 0x2400);
    }
  }
  uVar41 = is_out_log();
  if ((int)uVar41 != 0) {
    printf((char *)(DAT_00019368 + 0x196a8),(int)((ulonglong)uVar41 >> 0x20),
           SUB84((double)(float)piVar23[3],0),(int)((ulonglong)(double)(float)piVar23[3] >> 0x20));
    putchar(10);
  }
  if ((float)piVar23[3] <= DAT_000189dc) {
    iVar17 = uVar27 * uVar3 * 5;
    if (iVar17 < 0) {
      iVar17 = iVar17 + 3;
    }
    uVar31 = RkRgaGetRgaFormat(iVar14);
    NormalRgaSetSrcVirtualInfo
              ((rga_req *)__s,local_408,uVar27 * uVar3 + local_408,local_408 + (iVar17 >> 2),uVar3,
               uVar27,uVar31,'\0');
    if (bVar34) {
      iVar17 = uVar11 * uVar12 * 5;
      if (iVar17 < 0) {
        iVar17 = iVar17 + 3;
      }
      uVar27 = RkRgaGetRgaFormat(local_334);
      NormalRgaSetPatVirtualInfo
                ((rga_req *)__s,local_3e8,uVar11 * uVar12 + local_3e8,local_3e8 + (iVar17 >> 2),
                 uVar11,uVar12,(RECT *)&local_394,uVar27,'\0');
    }
    uVar27 = 1;
    bVar35 = true;
    iVar17 = uVar16 * uVar7 * 5;
    if (iVar17 < 0) {
      iVar17 = iVar17 + 3;
    }
    uVar31 = RkRgaGetRgaFormat(iVar15);
    local_3d4 = 1;
    local_3e0 = 1;
    NormalRgaSetDstVirtualInfo
              ((rga_req *)__s,local_3fc,uVar16 * uVar7 + local_3fc,local_3fc + (iVar17 >> 2),uVar7,
               uVar16,(RECT *)&local_394,uVar31,'\0');
  }
  else {
    bVar35 = bVar34;
    if ((float)piVar23[3] < DAT_000189e0) {
      if (uVar28 == 0xffffffff) {
        if (*(uint *)(param_1 + 8) == local_408) {
          local_3e0 = 0;
        }
        else {
          local_3e0 = (uint)(*(uint *)(param_1 + 4) == local_408);
        }
        iVar17 = uVar27 * uVar3 * 5;
        if (iVar17 < 0) {
          iVar17 = iVar17 + 3;
        }
        uVar31 = RkRgaGetRgaFormat(iVar14);
        NormalRgaSetSrcVirtualInfo
                  ((rga_req *)__s,local_408,uVar27 * uVar3 + local_408,local_408 + (iVar17 >> 2),
                   uVar3,uVar27,uVar31,'\0');
      }
      else {
        if (*(uint *)param_1 == uVar28) {
          local_3e0 = (uint)(*(int *)(param_1 + 0x48) != 0);
        }
        else {
          local_3e0 = 0;
        }
        uVar31 = RkRgaGetRgaFormat(iVar14);
        NormalRgaSetSrcVirtualInfo((rga_req *)__s,0,0,0,uVar3,uVar27,uVar31,'\0');
        NormalRgaSetFdsOffsets((rga_req *)__s,(ushort)uVar28,0,0,0);
      }
      if (bVar34) {
        if (local_410 == 0xffffffff) {
          uVar27 = *(uint *)(param_3 + 4);
          uVar31 = *(uint *)(param_3 + 8);
          iVar17 = uVar11 * uVar12 * 5;
          if (iVar17 < 0) {
            iVar17 = iVar17 + 3;
          }
          uVar28 = RkRgaGetRgaFormat(local_334);
          NormalRgaSetPatVirtualInfo
                    ((rga_req *)__s,local_3e8,uVar11 * uVar12 + local_3e8,local_3e8 + (iVar17 >> 2),
                     uVar11,uVar12,(RECT *)&local_394,uVar28,'\0');
          bVar35 = uVar31 != local_3e8 && uVar27 == local_3e8;
        }
        else {
          if (*(uint *)param_3 == local_410) {
            bVar35 = *(int *)(param_3 + 0x48) != 0;
          }
          else {
            bVar35 = false;
          }
          uVar27 = RkRgaGetRgaFormat(local_334);
          NormalRgaSetPatVirtualInfo
                    ((rga_req *)__s,0,0,0,uVar11,uVar12,(RECT *)&local_394,uVar27,'\0');
          NormalRgaSetFdsOffsets((rga_req *)__s,0,(ushort)local_410,0,0);
        }
      }
      uVar27 = local_3e0;
      if (local_418 == 0xffffffff) {
        if (*(uint *)(param_2 + 8) == local_3fc) {
          local_3d4 = 0;
        }
        else {
          local_3d4 = (uint)(*(uint *)(param_2 + 4) == local_3fc);
          uVar27 = local_3e0 | local_3d4;
        }
        iVar17 = uVar16 * uVar7 * 5;
        if (iVar17 < 0) {
          iVar17 = iVar17 + 3;
        }
        uVar31 = RkRgaGetRgaFormat(iVar15);
        NormalRgaSetDstVirtualInfo
                  ((rga_req *)__s,local_3fc,uVar16 * uVar7 + local_3fc,local_3fc + (iVar17 >> 2),
                   uVar7,uVar16,(RECT *)&local_394,uVar31,'\0');
      }
      else {
        if (*(uint *)param_2 == local_418) {
          local_3d4 = (uint)(*(int *)(param_2 + 0x48) != 0);
          uVar27 = local_3e0 | local_3d4;
        }
        else {
          local_3d4 = 0;
        }
        uVar31 = RkRgaGetRgaFormat(iVar15);
        NormalRgaSetDstVirtualInfo((rga_req *)__s,0,0,0,uVar7,uVar16,(RECT *)&local_394,uVar31,'\0')
        ;
        NormalRgaSetFdsOffsets((rga_req *)__s,0,(ushort)local_418,0,0);
      }
    }
    else {
      if (*(uint *)(param_1 + 8) == local_408) {
        local_3e0 = 0;
      }
      else {
        local_3e0 = (uint)(*(uint *)(param_1 + 4) == local_408);
      }
      if (uVar28 != 0xffffffff) {
        local_3e0 = 0;
      }
      if (*(uint *)param_1 == uVar28) {
        local_3e0 = (uint)(*(int *)(param_1 + 0x48) != 0);
      }
      if ((bVar34) &&
         (bVar35 = local_410 == 0xffffffff &&
                   (*(uint *)(param_3 + 8) != local_3e8 && *(uint *)(param_3 + 4) == local_3e8),
         *(uint *)param_3 == local_410)) {
        bVar35 = *(int *)(param_3 + 0x48) != 0;
      }
      if (*(uint *)(param_2 + 8) == local_3fc) {
        local_3d4 = 0;
      }
      else {
        local_3d4 = (uint)(*(uint *)(param_2 + 4) == local_3fc);
      }
      if (local_418 != 0xffffffff) {
        local_3d4 = 0;
      }
      if (*(uint *)param_2 == local_418) {
        local_3d4 = (uint)(*(int *)(param_2 + 0x48) != 0);
      }
      if (uVar28 == 0xffffffff) {
        uVar28 = 0;
      }
      uVar31 = RkRgaGetRgaFormat(iVar14);
      NormalRgaSetSrcVirtualInfo
                ((rga_req *)__s,uVar28,local_408,uVar27 * uVar3 + local_408,uVar3,uVar27,uVar31,'\0'
                );
      if (bVar34) {
        if (local_410 == 0xffffffff) {
          local_410 = 0;
        }
        uVar27 = RkRgaGetRgaFormat(local_334);
        NormalRgaSetPatVirtualInfo
                  ((rga_req *)__s,local_410,local_3e8,uVar11 * uVar12 + local_3e8,uVar11,uVar12,
                   (RECT *)&local_394,uVar27,'\0');
      }
      if (local_418 == 0xffffffff) {
        local_418 = 0;
      }
      uVar31 = RkRgaGetRgaFormat(iVar15);
      uVar27 = local_3e0 | local_3d4;
      NormalRgaSetDstVirtualInfo
                ((rga_req *)__s,local_418,local_3fc,uVar16 * uVar7 + local_3fc,uVar7,uVar16,
                 (RECT *)&local_394,uVar31,'\0');
    }
  }
  NormalRgaSetSrcActiveInfo((rga_req *)__s,uVar24,uVar20,uVar1,uVar2);
  NormalRgaSetDstActiveInfo((rga_req *)__s,local_3dc,local_3d8,uVar4,uVar5);
  if (bVar34) {
    NormalRgaSetPatActiveInfo((rga_req *)__s,local_3ac,local_3a8,uVar8,uVar9);
    uVar31 = *(uint *)(param_2 + 0x60);
    if ((uVar31 & 0xf00) == 0) {
      iVar17 = RkRgaGetRgaFormat(iVar14);
      iVar17 = NormalRgaIsYuvFormat(iVar17);
      if (iVar17 == 0) {
LAB_00018d1c:
        uVar28 = 0;
      }
      else {
        iVar17 = RkRgaGetRgaFormat(local_334);
        iVar17 = NormalRgaIsRgbFormat(iVar17);
        if (iVar17 == 0) goto LAB_00018d1c;
        iVar17 = RkRgaGetRgaFormat(iVar15);
        uVar28 = NormalRgaIsRgbFormat(iVar17);
      }
      iVar17 = RkRgaGetRgaFormat(iVar14);
      iVar17 = NormalRgaIsYuvFormat(iVar17);
      if (iVar17 != 0) {
        iVar17 = RkRgaGetRgaFormat(local_334);
        iVar17 = NormalRgaIsRgbFormat(iVar17);
        if (iVar17 != 0) {
          iVar17 = RkRgaGetRgaFormat(iVar15);
          iVar17 = NormalRgaIsYuvFormat(iVar17);
          if (iVar17 != 0) {
            uVar28 = 9;
          }
        }
      }
      iVar14 = RkRgaGetRgaFormat(iVar14);
      iVar14 = NormalRgaIsRgbFormat(iVar14);
      if (iVar14 != 0) {
        iVar14 = RkRgaGetRgaFormat(local_334);
        iVar14 = NormalRgaIsRgbFormat(iVar14);
        goto joined_r0x000199b4;
      }
      goto LAB_00018d48;
    }
LAB_00019154:
    uVar28 = 0;
    NormalRgaFullColorSpaceConvert((rga_req *)__s,uVar31);
  }
  else {
    uVar31 = *(uint *)(param_2 + 0x60);
    if ((uVar31 & 0xf00) != 0) goto LAB_00019154;
    iVar17 = RkRgaGetRgaFormat(iVar14);
    iVar17 = NormalRgaIsYuvFormat(iVar17);
    if (iVar17 == 0) {
      uVar28 = 0;
    }
    else {
      iVar17 = RkRgaGetRgaFormat(iVar15);
      uVar28 = NormalRgaIsRgbFormat(iVar17);
    }
    iVar14 = RkRgaGetRgaFormat(iVar14);
    iVar14 = NormalRgaIsRgbFormat(iVar14);
joined_r0x000199b4:
    if (iVar14 != 0) {
      iVar14 = RkRgaGetRgaFormat(iVar15);
      iVar14 = NormalRgaIsYuvFormat(iVar14);
      if (iVar14 != 0) {
        uVar28 = uVar28 | 8;
      }
    }
LAB_00018d48:
    if (0 < (int)*(uint *)(param_2 + 0x60)) {
      uVar28 = *(uint *)(param_2 + 0x60);
    }
  }
  NormalRgaSetBitbltMode((rga_req *)__s,local_3a4,(uchar)local_400,local_3b0,local_3c4,0,uVar28);
  NormalRgaNNQuantizeMode((rga_req *)__s,param_2);
  NormalRgaDitherMode((rga_req *)__s,param_2,iVar15);
  if (uVar27 != 0) {
    NormalRgaMmuInfo((rga_req *)__s,'\x01','\0','\0','\0',0,'\x02');
    NormalRgaMmuFlag((rga_req *)__s,local_3e0,local_3d4);
  }
  if (bVar34) {
    if (bVar35) {
      local_100 = local_100 | 0xa00;
    }
    local_118 = 1;
  }
  if (0 < *(int *)(param_1 + 0x9c)) {
    local_11a = (undefined2)*(int *)(param_1 + 0x9c);
    local_158 = 3;
    local_f8 = 1;
  }
  if (*(int *)(param_1 + 0x4c) == 1) {
    local_158 = local_158 | 0x200;
    if (*(int *)(param_1 + 0x50) == 0) {
      NormalRgaSetSrcTransModeInfo
                ((rga_req *)__s,'\0','\x01','\x01','\x01','\x01',*(uint *)(param_1 + 0x58),
                 *(uint *)(param_1 + 0x54),'\x01');
    }
    else if (*(int *)(param_1 + 0x50) == 1) {
      NormalRgaSetSrcTransModeInfo
                ((rga_req *)__s,'\x01','\x01','\x01','\x01','\x01',*(uint *)(param_1 + 0x58),
                 *(uint *)(param_1 + 0x54),'\x01');
    }
  }
  local_bf = *(undefined2 *)(param_1 + 0xc0);
  puVar13 = local_b8;
  prVar33 = param_1 + 200;
  do {
    prVar32 = prVar33;
    puVar29 = puVar13;
    prVar33 = prVar32 + 0x10;
    uVar30 = *(undefined4 *)(prVar32 + 4);
    uVar21 = *(undefined4 *)(prVar32 + 8);
    uVar25 = *(undefined4 *)(prVar32 + 0xc);
    *puVar29 = *(undefined4 *)prVar32;
    puVar29[1] = uVar30;
    puVar29[2] = uVar21;
    puVar29[3] = uVar25;
    puVar13 = puVar29 + 4;
  } while (prVar33 != param_1 + 0xf8);
  uVar30 = *(undefined4 *)(prVar32 + 0x14);
  puVar29[4] = *(undefined4 *)prVar33;
  puVar29[5] = uVar30;
  local_80 = *(undefined4 *)(param_1 + 0x100);
  uStack_7c = *(undefined4 *)(param_1 + 0x104);
  uStack_78 = *(undefined4 *)(param_1 + 0x108);
  uStack_74 = *(undefined4 *)(param_1 + 0x10c);
  iVar14 = is_out_log();
  if (iVar14 != 0) {
    printf((char *)(DAT_0001936c + 0x19704),local_3e0,local_3d4,local_400);
    putchar(10);
    puts((char *)(DAT_00019370 + 0x1971c));
    putchar(10);
    memcpy(&stack0xfffff9f8,auStack_218,0x1e8);
    NormalRgaLogOutRgaReq(local_228,uStack_224,uStack_220,uStack_21c);
  }
  __request = *(ulong *)(param_1 + 100);
  if ((__request != 0x5018) && (__request = 0x5017, *(int *)(param_2 + 100) == 0x5018)) {
    __request = 0x5018;
  }
  iVar14 = *(int *)(param_1 + 0xa0);
  iVar15 = *(int *)(param_2 + 0xa0);
  if (iVar14 == 0) {
    iVar14 = 1;
  }
  local_1f2 = (undefined2)iVar14;
  if (iVar15 == 0) {
    iVar15 = 1;
  }
  local_1ba = (undefined2)iVar15;
  if (bVar34) {
    iVar14 = *(int *)(param_3 + 0xa0);
    if (iVar14 == 0) {
      iVar14 = 1;
    }
    local_182 = (undefined2)iVar14;
  }
  uVar27 = *(uint *)(param_2 + 0x114);
  local_cc = *(undefined4 *)(param_2 + 0xa8);
  local_c8 = (undefined1)*(undefined4 *)(param_2 + 0xb0);
  local_c7 = (undefined1)*(undefined4 *)(param_2 + 0xb4);
  if ((int)uVar27 < 1) {
    if (piVar23[0x30] == 1) {
      memset((rga2_req *)local_32c,0,0x104);
      NormalRgaCompatModeConvertRga2((rga2_req *)local_32c,(rga_req *)__s);
      __s = (rga2_req *)local_32c;
    }
    else if (piVar23[0x30] != 2) {
      printf((char *)(DAT_000189d8 + 0x18f1c));
      goto LAB_00018f1c;
    }
    do {
      iVar22 = ioctl(*piVar23,__request,__s);
      if (iVar22 != -1) {
        if (iVar22 == 0) {
          *(undefined4 *)(param_2 + 0xac) = local_c4;
          return 0;
        }
        piVar18 = __errno_location();
        iVar22 = *piVar18;
        break;
      }
      piVar18 = __errno_location();
      iVar22 = *piVar18;
    } while (iVar22 == 4 || iVar22 == 0x200);
    pcVar19 = strerror(iVar22);
    iVar22 = DAT_00019384 + 0x19ab4;
    printf((char *)(DAT_00019388 + 0x19ac4),iVar22,0x5cb,pcVar19);
    pcVar19 = strerror(*piVar18);
    printf((char *)(DAT_0001938c + 0x19ae4),iVar22,0x5cc,pcVar19);
    putchar(10);
    iVar22 = *piVar18;
  }
  else {
    iVar14 = *(int *)(iVar22 + DAT_00019354);
    iVar22 = *(int *)(iVar22 + DAT_00019358);
    if (iVar14 != 0) {
      iVar15 = pthread_mutex_lock((pthread_mutex_t *)(iVar22 + 0x1c));
      if (iVar15 != 0) {
                    /* WARNING: Subroutine does not return */
        std::__throw_system_error(iVar15);
      }
      uVar27 = *(uint *)(param_2 + 0x114);
    }
    iVar15 = iVar22 + 4;
    iVar17 = *(int *)(iVar22 + 8);
    local_398 = uVar27;
    if (*(int *)(iVar22 + 8) == 0) {
LAB_00019218:
      local_32c[0] = &local_398;
      iVar15 = FUN_000179cc(iVar22,iVar15,local_32c);
    }
    else {
      do {
        if (*(uint *)(iVar17 + 0x10) < uVar27) {
          iVar26 = *(int *)(iVar17 + 0xc);
        }
        else {
          iVar26 = *(int *)(iVar17 + 8);
          iVar15 = iVar17;
        }
        iVar17 = iVar26;
      } while (iVar26 != 0);
      if ((iVar15 == iVar22 + 4) || (uVar27 < *(uint *)(iVar15 + 0x10))) goto LAB_00019218;
    }
    iVar15 = *(int *)(iVar15 + 0x14);
    iVar17 = *(int *)(iVar15 + 0x6270);
    if (iVar17 < 0x32) {
      memcpy((void *)(iVar17 * 0x1f8 + iVar15),__s,0x1f8);
      *(int *)(iVar15 + 0x6270) = iVar17 + 1;
      if (iVar14 == 0) {
        return 0;
      }
      pthread_mutex_unlock((pthread_mutex_t *)(iVar22 + 0x1c));
      return 0;
    }
    printf((char *)(DAT_000193a8 + 0x19c80),*(undefined4 *)(param_2 + 0x114),iVar17);
    if (iVar14 != 0) {
      pthread_mutex_unlock((pthread_mutex_t *)(iVar22 + 0x1c));
    }
LAB_00018f1c:
    piVar23 = __errno_location();
    iVar22 = *piVar23;
  }
  return -iVar22;
}



/* ===== RgaFlush @ 00019f9c size=184 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* RgaFlush() */

int RgaFlush(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  char *__format;
  
  piVar3 = (int *)**(undefined4 **)(DAT_0001a054 + 0x19fac + DAT_0001a058);
  if (piVar3 == (int *)0x0) {
    printf((char *)(DAT_0001a064 + 0x1a044));
    putchar(10);
    return -0x13;
  }
  iVar1 = ioctl(*piVar3,0x5019,0);
  if (iVar1 == 0) {
    return 0;
  }
  piVar3 = __errno_location();
  iVar1 = DAT_0001a05c + 0x19fe8;
  __format = (char *)(DAT_0001a060 + 0x19fec);
  pcVar2 = strerror(*piVar3);
  printf(__format,iVar1,0x5e0,pcVar2);
  pcVar2 = strerror(*piVar3);
  printf(__format,iVar1,0x5e1,pcVar2);
  putchar(10);
  return -*piVar3;
}



/* ===== RgaCollorFill @ 0001a068 size=1832 ===== */

/* RgaCollorFill(rga_info*) */

int RgaCollorFill(rga_info *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ulong __request;
  int *piVar16;
  int iVar17;
  rga2_req *__s;
  uint uVar18;
  int iVar19;
  bool bVar20;
  uint local_360;
  undefined2 local_35c;
  short local_35a;
  undefined2 local_358;
  short local_356;
  undefined4 local_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  uint local_344;
  uint local_340;
  uint local_33c;
  uint local_338;
  uint local_334;
  uint local_330;
  int local_32c;
  undefined4 uStack_328;
  uint *local_324 [65];
  rga_req arStack_220 [110];
  undefined2 local_1b2;
  byte local_10e;
  undefined4 local_c4;
  undefined1 local_c0;
  undefined1 local_bf;
  undefined1 local_b8;
  
  iVar19 = DAT_0001a540 + 0x1a080;
  piVar16 = (int *)**(undefined4 **)(iVar19 + DAT_0001a544);
  if (piVar16 == (int *)0x0) {
    printf((char *)(DAT_0001a56c + 0x1a7a4),0);
    putchar(10);
    return -0x13;
  }
  __s = (rga2_req *)arStack_220;
  memset(__s,0,0x1f8);
  if (param_1 == (rga_info *)0x0) {
    printf((char *)(DAT_0001a570 + 0x1a7c4),0);
    putchar(10);
    return -0x16;
  }
  uVar13 = *(uint *)(param_1 + 0x40);
  local_344 = *(uint *)(param_1 + 0x14);
  uVar18 = *(uint *)(param_1 + 0xbc);
  local_340 = *(uint *)(param_1 + 0x18);
  local_33c = *(uint *)(param_1 + 0x1c);
  local_338 = *(uint *)(param_1 + 0x20);
  uVar15 = *(uint *)(param_1 + 8);
  local_334 = *(uint *)(param_1 + 0x24);
  local_330 = *(uint *)(param_1 + 0x28);
  local_32c = *(int *)(param_1 + 0x2c);
  uStack_328 = *(undefined4 *)(param_1 + 0x30);
  if (local_330 == 0) {
    local_330 = local_338;
  }
  uVar1 = local_330;
  if ((int)uVar18 < 1) {
    uVar18 = *(uint *)param_1;
    if ((uVar15 == 0) && (uVar15 = *(uint *)(param_1 + 4), uVar15 == 0)) {
      if (uVar18 == 0xffffffff) {
        printf((char *)(DAT_0001a568 + 0x1a6f0),0x636);
        putchar(10);
        return 0;
      }
      goto LAB_0001a5c4;
    }
    if (uVar18 != 0) goto LAB_0001a11c;
    local_32c = RkRgaCompatibleFormat(local_32c);
    uVar18 = 0xffffffff;
  }
  else {
    local_b8 = 1;
    if ((uVar15 == 0) && (uVar15 = *(uint *)(param_1 + 4), uVar15 == 0)) {
LAB_0001a5c4:
      if (uVar18 == 0) {
        printf((char *)(DAT_0001a554 + 0x1a5e4));
        putchar(10);
        return -0x16;
      }
      uVar15 = 0;
    }
LAB_0001a11c:
    local_32c = RkRgaCompatibleFormat(local_32c);
  }
  iVar7 = local_32c;
  uVar6 = local_334;
  uVar5 = local_338;
  uVar4 = local_33c;
  uVar3 = local_340;
  uVar2 = local_344;
  if (uVar1 == 0) {
    local_330 = local_338;
    uVar1 = local_338;
  }
  local_356 = (short)local_338 + -1;
  local_35a = (short)local_33c + -1;
  local_35c = 0;
  local_358 = 0;
  if ((double)(float)piVar16[3] <= DAT_0001a530) {
    bVar20 = false;
    iVar17 = uVar1 * local_334;
    iVar8 = iVar17 * 5;
    if (iVar8 < 0) {
      iVar8 = iVar8 + 3;
    }
    uVar18 = RkRgaGetRgaFormat(local_32c);
    NormalRgaSetDstVirtualInfo
              ((rga_req *)__s,uVar15,iVar17 + uVar15,uVar15 + (iVar8 >> 2),uVar6,uVar1,
               (RECT *)&local_35c,uVar18,'\0');
  }
  else {
    if (DAT_0001a538 <= (double)(float)piVar16[3]) {
      bVar20 = *(uint *)(param_1 + 8) != uVar15 && *(uint *)(param_1 + 4) == uVar15;
      if (uVar18 == 0xffffffff) {
        if (*(uint *)param_1 == 0xffffffff) {
          uVar18 = 0;
          bVar20 = *(int *)(param_1 + 0x48) != 0;
        }
        else {
          uVar18 = 0;
        }
      }
      else if (uVar18 == *(uint *)param_1) {
        bVar20 = *(int *)(param_1 + 0x48) != 0;
      }
      else {
        bVar20 = false;
      }
      uVar11 = RkRgaGetRgaFormat(local_32c);
      iVar8 = uVar1 * uVar6;
      uVar12 = uVar15;
    }
    else {
      if (uVar18 != 0xffffffff) {
        if (*(uint *)param_1 == uVar18) {
          bVar20 = *(int *)(param_1 + 0x48) != 0;
        }
        else {
          bVar20 = false;
        }
        uVar15 = RkRgaGetRgaFormat(local_32c);
        NormalRgaSetDstVirtualInfo((rga_req *)__s,0,0,0,uVar6,uVar1,(RECT *)&local_35c,uVar15,'\0');
        NormalRgaSetFdsOffsets((rga_req *)__s,0,(ushort)uVar18,0,0);
        goto LAB_0001a20c;
      }
      bVar20 = *(uint *)(param_1 + 8) != uVar15 && *(uint *)(param_1 + 4) == uVar15;
      iVar17 = uVar1 * local_334;
      iVar8 = iVar17 * 5;
      if (iVar8 < 0) {
        iVar8 = iVar8 + 3;
      }
      uVar11 = RkRgaGetRgaFormat(local_32c);
      iVar8 = iVar8 >> 2;
      uVar18 = uVar15;
      uVar12 = iVar17 + uVar15;
    }
    NormalRgaSetDstVirtualInfo
              ((rga_req *)__s,uVar18,uVar12,uVar15 + iVar8,uVar6,uVar1,(RECT *)&local_35c,uVar11,
               '\0');
  }
LAB_0001a20c:
  iVar7 = RkRgaGetRgaFormat(iVar7);
  iVar7 = NormalRgaIsYuvFormat(iVar7);
  if (iVar7 != 0) {
    local_10e = local_10e | 8;
  }
  if (0 < *(int *)(param_1 + 0x60)) {
    local_10e = (byte)*(int *)(param_1 + 0x60);
  }
  NormalRgaSetDstActiveInfo((rga_req *)__s,uVar4,uVar5,uVar2,uVar3);
  uStack_350 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_34c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_348 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_354 = 0;
  NormalRgaSetColorFillMode
            ((rga_req *)__s,(COLOR_FILL *)&local_354,'\0','\0',uVar13,0,0,'\0','\0','\0');
  if (bVar20) {
    NormalRgaMmuInfo((rga_req *)__s,'\x01','\0','\0','\0',0,'\x02');
    NormalRgaMmuFlag((rga_req *)__s,1,1);
  }
  __request = 0x5018;
  iVar7 = *(int *)(param_1 + 0xa0);
  uVar18 = *(uint *)(param_1 + 0x114);
  local_c4 = *(undefined4 *)(param_1 + 0xa8);
  if (*(int *)(param_1 + 100) != 0x5018) {
    __request = 0x5017;
  }
  if (iVar7 == 0) {
    iVar7 = 1;
  }
  local_1b2 = (undefined2)iVar7;
  local_c0 = (undefined1)*(undefined4 *)(param_1 + 0xb0);
  local_bf = (undefined1)*(undefined4 *)(param_1 + 0xb4);
  if ((int)uVar18 < 1) {
    if (piVar16[0x30] == 1) {
      memset((rga2_req *)local_324,0,0x104);
      NormalRgaCompatModeConvertRga2((rga2_req *)local_324,(rga_req *)__s);
      __s = (rga2_req *)local_324;
    }
    else if (piVar16[0x30] != 2) {
      printf((char *)(DAT_0001a548 + 0x1a304));
      goto LAB_0001a304;
    }
    do {
      iVar19 = ioctl(*piVar16,__request,__s);
      if (iVar19 != -1) {
        if (iVar19 == 0) {
          return 0;
        }
        piVar9 = __errno_location();
        iVar19 = *piVar9;
        break;
      }
      piVar9 = __errno_location();
      iVar19 = *piVar9;
    } while (iVar19 == 4 || iVar19 == 0x200);
    pcVar10 = strerror(iVar19);
    iVar19 = DAT_0001a558 + 0x1a660;
    printf((char *)(DAT_0001a55c + 0x1a670),iVar19,0x6f1,pcVar10);
    pcVar10 = strerror(*piVar9);
    printf((char *)(DAT_0001a560 + 0x1a690),iVar19,0x6f2,pcVar10);
    putchar(10);
    iVar19 = *piVar9;
  }
  else {
    iVar7 = *(int *)(iVar19 + DAT_0001a54c);
    iVar19 = *(int *)(iVar19 + DAT_0001a550);
    if (iVar7 != 0) {
      iVar8 = pthread_mutex_lock((pthread_mutex_t *)(iVar19 + 0x1c));
      if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
        std::__throw_system_error(iVar8);
      }
      uVar18 = *(uint *)(param_1 + 0x114);
    }
    iVar8 = iVar19 + 4;
    iVar17 = *(int *)(iVar19 + 8);
    local_360 = uVar18;
    if (*(int *)(iVar19 + 8) == 0) {
LAB_0001a400:
      local_324[0] = &local_360;
      iVar8 = FUN_000179cc(iVar19,iVar8,local_324);
    }
    else {
      do {
        if (*(uint *)(iVar17 + 0x10) < uVar18) {
          iVar14 = *(int *)(iVar17 + 0xc);
        }
        else {
          iVar14 = *(int *)(iVar17 + 8);
          iVar8 = iVar17;
        }
        iVar17 = iVar14;
      } while (iVar14 != 0);
      if ((iVar8 == iVar19 + 4) || (uVar18 < *(uint *)(iVar8 + 0x10))) goto LAB_0001a400;
    }
    iVar8 = *(int *)(iVar8 + 0x14);
    iVar17 = *(int *)(iVar8 + 0x6270);
    if (iVar17 < 0x32) {
      memcpy((void *)(iVar17 * 0x1f8 + iVar8),__s,0x1f8);
      *(int *)(iVar8 + 0x6270) = iVar17 + 1;
      if (iVar7 != 0) {
        pthread_mutex_unlock((pthread_mutex_t *)(iVar19 + 0x1c));
      }
      return 0;
    }
    printf((char *)(DAT_0001a564 + 0x1a6b8),*(undefined4 *)(param_1 + 0x114),iVar17);
    if (iVar7 != 0) {
      pthread_mutex_unlock((pthread_mutex_t *)(iVar19 + 0x1c));
    }
LAB_0001a304:
    piVar16 = __errno_location();
    iVar19 = *piVar16;
  }
  return -iVar19;
}



/* ===== RgaCollorPalette @ 0001a7d8 size=4184 ===== */

/* RgaCollorPalette(rga_info*, rga_info*, rga_info*) */

int RgaCollorPalette(rga_info *param_1,rga_info *param_2,rga_info *param_3)

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
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  rga2_req *prVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  int *piVar25;
  char *pcVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  int *piVar30;
  uint local_408;
  uint local_404;
  uint local_400;
  uint local_3f8;
  uint local_3d8;
  uint local_3d4;
  uint local_3d0;
  uint local_3c4;
  rga2_req *local_390;
  undefined2 local_38c;
  short local_38a;
  undefined2 local_388;
  short local_386;
  uint local_384;
  uint local_380;
  uint local_37c;
  uint local_378;
  uint local_374;
  uint local_370;
  int local_36c;
  undefined4 uStack_368;
  uint local_364;
  uint local_360;
  uint local_35c;
  uint local_358;
  uint local_354;
  uint local_350;
  int local_34c;
  undefined4 uStack_348;
  uint local_344;
  uint local_340;
  uint local_33c;
  uint local_338;
  uint local_334;
  uint local_330;
  int local_32c;
  undefined4 uStack_328;
  rga2_req arStack_324 [260];
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined1 auStack_210 [38];
  undefined2 local_1ea;
  undefined2 local_1b2;
  undefined2 local_17a;
  undefined1 local_117;
  undefined1 local_10f;
  undefined1 local_10d;
  uint local_f8;
  undefined4 local_c4;
  undefined1 local_c0;
  undefined1 local_bf;
  byte local_b8;
  
  piVar30 = (int *)**(undefined4 **)(DAT_0001aea4 + 0x1a7f0 + DAT_0001aea8);
  if (piVar30 == (int *)0x0) {
    printf((char *)(DAT_0001af0c + 0x1b898),0);
    putchar(10);
    return -0x13;
  }
  memset((rga_req *)&local_220,0,0x1f8);
  is_debug_log();
  iVar20 = is_out_log();
  if (iVar20 != 0) {
    printf((char *)(DAT_0001aec4 + 0x1addc));
    putchar(10);
  }
  if (param_1 == (rga_info *)0x0 && param_2 == (rga_info *)0x0) {
    printf((char *)(DAT_0001af08 + 0x1b878),0,0,param_3);
    putchar(10);
    return -0x16;
  }
  if (param_1 != (rga_info *)0x0) {
    local_384 = *(uint *)(param_1 + 0x14);
    local_380 = *(uint *)(param_1 + 0x18);
    local_37c = *(uint *)(param_1 + 0x1c);
    local_378 = *(uint *)(param_1 + 0x20);
    local_374 = *(uint *)(param_1 + 0x24);
    local_370 = *(uint *)(param_1 + 0x28);
    local_36c = *(int *)(param_1 + 0x2c);
    uStack_368 = *(undefined4 *)(param_1 + 0x30);
  }
  if (param_2 != (rga_info *)0x0) {
    local_364 = *(uint *)(param_2 + 0x14);
    local_360 = *(uint *)(param_2 + 0x18);
    local_35c = *(uint *)(param_2 + 0x1c);
    local_358 = *(uint *)(param_2 + 0x20);
    local_354 = *(uint *)(param_2 + 0x24);
    local_350 = *(uint *)(param_2 + 0x28);
    local_34c = *(int *)(param_2 + 0x2c);
    uStack_348 = *(undefined4 *)(param_2 + 0x30);
  }
  if (param_3 == (rga_info *)0x0) {
    iVar20 = is_out_log();
    if (iVar20 != 0) goto LAB_0001acd0;
    uVar28 = *(uint *)(param_1 + 0xbc);
    if (0 < (int)uVar28) {
      iVar20 = *(int *)(param_2 + 0xbc);
      goto joined_r0x0001ae94;
    }
LAB_0001a93c:
    if (uVar28 != 0) {
      if (uVar28 == 0xffffffff) {
LAB_0001ad68:
        printf((char *)(DAT_0001aebc + 0x1ad7c),0x779);
        putchar(10);
        return 0;
      }
      goto LAB_0001a91c;
    }
    uVar29 = *(uint *)(param_1 + 8);
    if (uVar29 == 0) {
      uVar28 = *(uint *)param_1;
      if ((int)uVar28 < 1) {
        uVar29 = *(uint *)(param_1 + 4);
        if (uVar29 == 0) goto LAB_0001ad68;
        uVar28 = 0xffffffff;
        *(undefined4 *)(param_1 + 0x48) = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x48) = 1;
      }
    }
    else {
      uVar28 = 0xffffffff;
    }
  }
  else {
    local_344 = *(uint *)(param_3 + 0x14);
    local_340 = *(uint *)(param_3 + 0x18);
    local_33c = *(uint *)(param_3 + 0x1c);
    local_338 = *(uint *)(param_3 + 0x20);
    local_334 = *(uint *)(param_3 + 0x24);
    local_330 = *(uint *)(param_3 + 0x28);
    local_32c = *(int *)(param_3 + 0x2c);
    uStack_328 = *(undefined4 *)(param_3 + 0x30);
    iVar20 = is_out_log();
    if (iVar20 == 0) {
      uVar28 = *(uint *)(param_1 + 0xbc);
    }
    else {
LAB_0001acd0:
      printf((char *)(DAT_0001aeac + 0x1ace4),*(undefined4 *)(param_1 + 0xc),
             *(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_3 + 0xc));
      putchar(10);
      printf((char *)(DAT_0001aeb0 + 0x1ad04),*(undefined4 *)param_1,*(undefined4 *)(param_1 + 8),
             *(undefined4 *)(param_1 + 4));
      putchar(10);
      printf((char *)(DAT_0001aeb4 + 0x1ad24),*(undefined4 *)param_2,*(undefined4 *)(param_2 + 8),
             *(undefined4 *)(param_2 + 4));
      putchar(10);
      printf((char *)(DAT_0001aeb8 + 0x1ad44),*(undefined4 *)param_3,*(undefined4 *)(param_3 + 8),
             *(undefined4 *)(param_3 + 4));
      putchar(10);
      uVar28 = *(uint *)(param_1 + 0xbc);
    }
    if ((int)uVar28 < 1) goto LAB_0001a93c;
    if (0 < *(int *)(param_2 + 0xbc)) {
      iVar20 = *(int *)(param_3 + 0xbc);
joined_r0x0001ae94:
      if (0 < iVar20) {
        local_b8 = local_b8 | 1;
      }
    }
LAB_0001a91c:
    uVar29 = 0;
  }
  if (param_2 == (rga_info *)0x0) {
LAB_0001ada4:
    printf((char *)(DAT_0001aec0 + 0x1adb8),0x7b2);
    putchar(10);
    return 0;
  }
  local_408 = *(uint *)(param_2 + 0xbc);
  if (local_408 == 0) {
    local_3f8 = *(uint *)(param_2 + 8);
    if (local_3f8 == 0) {
      local_408 = *(uint *)param_2;
      if ((int)local_408 < 1) {
        local_3f8 = *(uint *)(param_2 + 4);
        if (local_3f8 == 0) goto LAB_0001ada4;
        *(undefined4 *)(param_2 + 0x48) = 1;
        local_408 = 0xffffffff;
      }
      else {
        *(undefined4 *)(param_2 + 0x48) = 1;
      }
    }
    else {
      local_408 = 0xffffffff;
    }
  }
  else {
    if (local_408 == 0xffffffff) goto LAB_0001ada4;
    local_3f8 = 0;
  }
  if (param_3 == (rga_info *)0x0) {
    local_400 = 0xffffffff;
    local_404 = 0;
  }
  else {
    local_400 = *(uint *)(param_3 + 0xbc);
    if (local_400 == 0) {
      local_404 = *(uint *)(param_3 + 8);
      if (local_404 == 0) {
        local_400 = *(uint *)param_3;
        if (0 < (int)local_400) {
          *(undefined4 *)(param_3 + 0x48) = 1;
          goto LAB_0001a9bc;
        }
        local_404 = *(uint *)(param_3 + 4);
        if (local_404 != 0) {
          *(undefined4 *)(param_3 + 0x48) = 1;
          local_400 = 0xffffffff;
          goto LAB_0001a9bc;
        }
      }
      local_400 = 0xffffffff;
    }
    else {
      local_404 = 0;
    }
  }
LAB_0001a9bc:
  iVar20 = is_out_log();
  if (iVar20 != 0) {
    printf((char *)(DAT_0001aec8 + 0x1ae38),uVar28,uVar29,*(undefined4 *)(param_1 + 0x48));
    putchar(10);
    printf((char *)(DAT_0001aecc + 0x1ae54),local_408,local_3f8,*(undefined4 *)(param_2 + 0x48));
    putchar(10);
    printf((char *)(DAT_0001aed0 + 0x1ae78),local_400,local_404,*(undefined4 *)(param_3 + 0x48));
    putchar(10);
  }
  iVar20 = RkRgaCompatibleFormat(local_36c);
  local_36c = iVar20;
  iVar21 = RkRgaCompatibleFormat(local_34c);
  local_34c = iVar21;
  iVar22 = RkRgaCompatibleFormat(local_32c);
  if (local_370 == 0) {
    local_370 = local_378;
  }
  uVar6 = local_370;
  if (local_350 == 0) {
    local_350 = local_358;
  }
  uVar12 = local_350;
  local_32c = iVar22;
  iVar23 = checkRectForRga(local_384,local_380,local_37c,local_378);
  if (iVar23 == 0) {
    iVar23 = checkRectForRga(local_364,local_360,local_35c,local_358);
    uVar18 = local_330;
    uVar17 = local_334;
    uVar16 = local_338;
    uVar15 = local_33c;
    uVar14 = local_340;
    uVar13 = local_344;
    uVar11 = local_354;
    uVar10 = local_358;
    uVar9 = local_35c;
    uVar8 = local_360;
    uVar7 = local_364;
    uVar5 = local_374;
    uVar4 = local_378;
    uVar3 = local_37c;
    uVar2 = local_380;
    uVar1 = local_384;
    if (iVar23 == 0) {
      local_386 = (short)uVar12 + -1;
      local_38a = (short)local_354 + -1;
      local_38c = 0;
      local_388 = 0;
      if ((float)piVar30[3] <= DAT_0001ae9c) {
        local_3d0 = 1;
        iVar27 = uVar6 * local_374;
        local_3c4 = 1;
        iVar23 = iVar27 * 5;
        if (iVar23 < 0) {
          iVar23 = iVar23 + 3;
        }
        uVar28 = RkRgaGetRgaFormat(iVar20);
        local_3d4 = 1;
        local_3d8 = 1;
        NormalRgaSetSrcVirtualInfo
                  ((rga_req *)&local_220,uVar29,iVar27 + uVar29,uVar29 + (iVar23 >> 2),uVar5,uVar6,
                   uVar28,'\0');
        iVar23 = uVar12 * uVar11 * 5;
        if (iVar23 < 0) {
          iVar23 = iVar23 + 3;
        }
        uVar28 = RkRgaGetRgaFormat(iVar21);
        NormalRgaSetDstVirtualInfo
                  ((rga_req *)&local_220,local_3f8,uVar12 * uVar11 + local_3f8,
                   local_3f8 + (iVar23 >> 2),uVar11,uVar12,(RECT *)&local_38c,uVar28,'\0');
        iVar21 = uVar18 * uVar17 * 5;
        if (iVar21 < 0) {
          iVar21 = iVar21 + 3;
        }
        uVar28 = RkRgaGetRgaFormat(iVar22);
        NormalRgaSetPatVirtualInfo
                  ((rga_req *)&local_220,local_404,uVar18 * uVar17 + local_404,
                   local_404 + (iVar21 >> 2),uVar17,uVar18,(RECT *)&local_38c,uVar28,'\0');
      }
      else if (DAT_0001aea0 <= (float)piVar30[3]) {
        if (*(uint *)(param_1 + 8) == uVar29) {
          local_3d8 = 0;
        }
        else {
          local_3d8 = (uint)(*(uint *)(param_1 + 4) == uVar29);
        }
        if (uVar28 != 0xffffffff) {
          local_3d8 = 0;
        }
        if (*(uint *)param_1 == uVar28) {
          local_3d8 = (uint)(*(int *)(param_1 + 0x48) != 0);
        }
        if (*(uint *)(param_2 + 8) == local_3f8) {
          local_3d4 = 0;
        }
        else {
          local_3d4 = (uint)(*(uint *)(param_2 + 4) == local_3f8);
        }
        if (local_408 != 0xffffffff) {
          local_3d4 = 0;
        }
        if (*(uint *)param_2 == local_408) {
          local_3d4 = (uint)(*(int *)(param_2 + 0x48) != 0);
        }
        if (param_3 == (rga_info *)0x0) {
          local_3c4 = 0;
        }
        else {
          if ((*(uint *)(param_3 + 8) == local_404) || (local_400 != 0xffffffff)) {
            local_3c4 = 0;
          }
          else {
            local_3c4 = (uint)(*(uint *)(param_3 + 4) == local_404);
          }
          if (*(uint *)param_3 == local_400) {
            local_3c4 = (uint)(*(int *)(param_3 + 0x48) != 0);
          }
        }
        if (uVar28 == 0xffffffff) {
          uVar28 = 0;
        }
        iVar23 = uVar6 * local_374;
        uVar24 = RkRgaGetRgaFormat(iVar20);
        NormalRgaSetSrcVirtualInfo
                  ((rga_req *)&local_220,uVar28,uVar29,iVar23 + uVar29,uVar5,uVar6,uVar24,'\0');
        if (local_408 == 0xffffffff) {
          local_408 = 0;
        }
        uVar29 = RkRgaGetRgaFormat(iVar21);
        uVar28 = 0;
        if (local_400 != 0xffffffff) {
          uVar28 = local_400;
        }
        NormalRgaSetDstVirtualInfo
                  ((rga_req *)&local_220,local_408,local_3f8,uVar12 * uVar11 + local_3f8,uVar11,
                   uVar12,(RECT *)&local_38c,uVar29,'\0');
        uVar29 = RkRgaGetRgaFormat(iVar22);
        NormalRgaSetPatVirtualInfo
                  ((rga_req *)&local_220,uVar28,local_404,uVar18 * uVar17 + local_404,uVar17,uVar18,
                   (RECT *)&local_38c,uVar29,'\0');
        local_3d0 = local_3d8 | local_3d4 | local_3c4;
      }
      else {
        if (uVar28 == 0xffffffff) {
          if (*(uint *)(param_1 + 8) == uVar29) {
            local_3d8 = 0;
          }
          else {
            local_3d8 = (uint)(*(uint *)(param_1 + 4) == uVar29);
          }
          iVar27 = uVar6 * local_374;
          iVar23 = iVar27 * 5;
          if (iVar23 < 0) {
            iVar23 = iVar23 + 3;
          }
          uVar28 = RkRgaGetRgaFormat(iVar20);
          NormalRgaSetSrcVirtualInfo
                    ((rga_req *)&local_220,uVar29,iVar27 + uVar29,uVar29 + (iVar23 >> 2),uVar5,uVar6
                     ,uVar28,'\0');
        }
        else {
          if (*(uint *)param_1 == uVar28) {
            local_3d8 = (uint)(*(int *)(param_1 + 0x48) != 0);
          }
          else {
            local_3d8 = 0;
          }
          uVar29 = RkRgaGetRgaFormat(iVar20);
          NormalRgaSetSrcVirtualInfo((rga_req *)&local_220,0,0,0,uVar5,uVar6,uVar29,'\0');
          NormalRgaSetFdsOffsets((rga_req *)&local_220,(ushort)uVar28,0,0,0);
        }
        if (local_408 == 0xffffffff) {
          if (*(uint *)(param_2 + 8) == local_3f8) {
            local_3d0 = local_3d8;
            local_3d4 = 0;
          }
          else {
            local_3d4 = (uint)(*(uint *)(param_2 + 4) == local_3f8);
            local_3d0 = local_3d8 | local_3d4;
          }
          iVar23 = uVar12 * uVar11 * 5;
          if (iVar23 < 0) {
            iVar23 = iVar23 + 3;
          }
          uVar28 = RkRgaGetRgaFormat(iVar21);
          NormalRgaSetDstVirtualInfo
                    ((rga_req *)&local_220,local_3f8,uVar12 * uVar11 + local_3f8,
                     local_3f8 + (iVar23 >> 2),uVar11,uVar12,(RECT *)&local_38c,uVar28,'\0');
        }
        else {
          if (*(uint *)param_2 == local_408) {
            local_3d4 = (uint)(*(int *)(param_2 + 0x48) != 0);
            local_3d0 = local_3d8 | local_3d4;
          }
          else {
            local_3d0 = local_3d8;
            local_3d4 = 0;
          }
          uVar28 = RkRgaGetRgaFormat(iVar21);
          NormalRgaSetDstVirtualInfo
                    ((rga_req *)&local_220,0,0,0,uVar11,uVar12,(RECT *)&local_38c,uVar28,'\0');
          NormalRgaSetFdsOffsets((rga_req *)&local_220,0,(ushort)local_408,0,0);
        }
        local_3c4 = 0;
        if (local_400 == 0xffffffff) {
          if ((param_3 != (rga_info *)0x0) && (*(uint *)(param_3 + 8) != local_404)) {
            local_3c4 = (uint)(*(uint *)(param_3 + 4) == local_404);
            local_3d0 = local_3d0 | local_3c4;
          }
          iVar21 = uVar18 * uVar17 * 5;
          if (iVar21 < 0) {
            iVar21 = iVar21 + 3;
          }
          uVar28 = RkRgaGetRgaFormat(iVar22);
          NormalRgaSetPatVirtualInfo
                    ((rga_req *)&local_220,local_404,uVar18 * uVar17 + local_404,
                     local_404 + (iVar21 >> 2),uVar17,uVar18,(RECT *)&local_38c,uVar28,'\0');
        }
        else {
          if ((param_3 != (rga_info *)0x0) && (*(uint *)param_3 == local_400)) {
            local_3c4 = (uint)(*(int *)(param_3 + 0x48) != 0);
            local_3d0 = local_3d0 | local_3c4;
          }
          uVar28 = RkRgaGetRgaFormat(iVar22);
          NormalRgaSetPatVirtualInfo
                    ((rga_req *)&local_220,0,0,0,uVar17,uVar18,(RECT *)&local_38c,uVar28,'\0');
          NormalRgaSetFdsOffsets((rga_req *)&local_220,0,(ushort)local_400,0,0);
        }
      }
      NormalRgaSetSrcActiveInfo((rga_req *)&local_220,uVar3,uVar4,uVar1,uVar2);
      NormalRgaSetDstActiveInfo((rga_req *)&local_220,uVar9,uVar10,uVar7,uVar8);
      NormalRgaSetPatActiveInfo((rga_req *)&local_220,uVar15,uVar16,uVar13,uVar14);
      if (local_3d0 != 0) {
        NormalRgaMmuInfo((rga_req *)&local_220,'\x01','\0','\0','\0',0,'\x02');
        NormalRgaMmuFlag((rga_req *)&local_220,local_3d8,local_3d4);
        if (local_3c4 != 0) {
          local_f8 = local_f8 | 0xa00;
        }
      }
      iVar21 = is_out_log();
      if (iVar21 != 0) {
        printf((char *)(DAT_0001aed8 + 0x1b380),local_3d8,local_3d4,local_3c4);
        putchar(10);
        puts((char *)(DAT_0001aedc + 0x1b398));
        putchar(10);
        memcpy(&stack0xfffffa10,auStack_210,0x1e8);
        NormalRgaLogOutRgaReq(local_220,uStack_21c,uStack_218,uStack_214);
      }
      iVar20 = RkRgaGetRgaFormat(iVar20);
      if (iVar20 == 0x1100) {
        local_10f = 1;
      }
      else if (iVar20 < 0x1101) {
        if (iVar20 == 0x1000) {
          local_10f = 0;
        }
      }
      else if (iVar20 == 0x1200) {
        local_10f = 2;
      }
      else if (iVar20 == 0x1300) {
        local_10f = 3;
      }
      iVar20 = *(int *)(param_1 + 0xa0);
      iVar21 = *(int *)(param_2 + 0xa0);
      if (iVar20 == 0) {
        iVar20 = 1;
      }
      local_1ea = (undefined2)iVar20;
      if (iVar21 == 0) {
        iVar21 = 1;
      }
      local_1b2 = (undefined2)iVar21;
      if (param_3 != (rga_info *)0x0) {
        iVar20 = *(int *)(param_3 + 0xa0);
        if (iVar20 == 0) {
          iVar20 = 1;
        }
        local_17a = (undefined2)iVar20;
      }
      local_c4 = *(undefined4 *)(param_2 + 0xa8);
      local_c0 = (undefined1)*(undefined4 *)(param_2 + 0xb0);
      local_bf = (undefined1)*(undefined4 *)(param_2 + 0xb4);
      if (local_400 != 0xffffffff || local_404 != 0) {
        local_220 = CONCAT31(local_220._1_3_,6);
        local_117 = 0xff;
        iVar20 = ioctl(*piVar30,0x5017,(rga_req *)&local_220);
        if (iVar20 != 0) {
          puts((char *)(DAT_0001aee0 + 0x1b43c));
          return -1;
        }
      }
      local_10d = 1;
      iVar20 = piVar30[0x30];
      local_220 = CONCAT31(local_220._1_3_,1);
      local_390 = (rga2_req *)0x0;
      if (iVar20 == 1) {
        memset(arStack_324,0,0x104);
        NormalRgaCompatModeConvertRga2(arStack_324,(rga_req *)&local_220);
        prVar19 = arStack_324;
      }
      else {
        prVar19 = (rga2_req *)&local_220;
        if (iVar20 != 2) {
          printf((char *)(DAT_0001aed4 + 0x1b240),iVar20);
          piVar30 = __errno_location();
          return -*piVar30;
        }
      }
      local_390 = prVar19;
      do {
        iVar20 = ioctl(*piVar30,0x5017,&local_390);
        if (iVar20 != -1) {
          if (iVar20 == 0) {
            return 0;
          }
          piVar25 = __errno_location();
          iVar20 = *piVar25;
          break;
        }
        piVar25 = __errno_location();
        iVar20 = *piVar25;
      } while (iVar20 == 0x200 || iVar20 == 4);
      pcVar26 = strerror(iVar20);
      iVar20 = DAT_0001aee4 + 0x1b59c;
      printf((char *)(DAT_0001aee8 + 0x1b5ac),iVar20,0x95c,pcVar26);
      pcVar26 = strerror(*piVar25);
      printf((char *)(DAT_0001aeec + 0x1b5cc),iVar20,0x95d,pcVar26);
      putchar(10);
      iVar23 = -*piVar25;
    }
    else {
      puts((char *)(DAT_0001aefc + 0x1b628));
      printf((char *)(DAT_0001af04 + 0x1b640),DAT_0001af00 + 0x1b63c,0x816);
      putchar(10);
    }
  }
  else {
    puts((char *)(DAT_0001aef0 + 0x1b5f8));
    printf((char *)(DAT_0001aef8 + 0x1b610),DAT_0001aef4 + 0x1b60c,0x80d);
    putchar(10);
  }
  return iVar23;
}



/* ===== NormalRgaScale @ 0001b8a4 size=8 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* NormalRgaScale() */

undefined4 NormalRgaScale(void)

{
  return 1;
}



/* ===== NormalRgaRoate @ 0001b8ac size=8 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* NormalRgaRoate() */

undefined4 NormalRgaRoate(void)

{
  return 1;
}



/* ===== NormalRgaRoateScale @ 0001b8b4 size=8 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* NormalRgaRoateScale() */

undefined4 NormalRgaRoateScale(void)

{
  return 1;
}



/* ===== RkRgaCompatibleFormat @ 0001b8bc size=20 ===== */

/* RkRgaCompatibleFormat(int) */

int RkRgaCompatibleFormat(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  if ((uint)param_1 >> 8 == 0) {
    param_1 = param_1 << 8;
  }
  return param_1;
}



/* ===== RkRgaGetRgaFormat @ 0001b8d0 size=88 ===== */

/* RkRgaGetRgaFormat(int) */

uint RkRgaGetRgaFormat(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if (((((param_1 & 0xff00U) == 0) && (uVar2 = 0, param_1 != 0)) &&
      (uVar1 = RkRgaCompatibleFormat(param_1), uVar2 = uVar1, (uVar1 & 0xff00) == 0)) &&
     (uVar2 = 0, uVar1 != 0)) {
    printf((char *)(DAT_0001b928 + 0x1b91c),uVar1);
    putchar(10);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== bytesPerPixel @ 0001b92c size=656 ===== */

/* bytesPerPixel(int) */

undefined1 bytesPerPixel(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  if ((param_1 & 0xff00U) == 0) {
    if (param_1 == 0) {
      return 4;
    }
    iVar2 = RkRgaCompatibleFormat(param_1);
    if (iVar2 == 0x1300) {
      return true;
    }
    if (iVar2 < 0x1301) {
      if (iVar2 == 0x500) {
        return 2;
      }
      if (0x500 < iVar2) {
        if (iVar2 != 0x1000) {
          if (iVar2 < 0x1001) {
            if (iVar2 == 0x600) {
              return 2;
            }
            if (iVar2 == 0x700) {
              uVar1 = 3;
            }
            else {
              uVar1 = 0;
            }
            return uVar1;
          }
          if (iVar2 != 0x1100) {
            return iVar2 == 0x1200;
          }
        }
        return true;
      }
      if (iVar2 == 0x200) {
        return 3;
      }
      if (iVar2 < 0x201) {
        if (iVar2 != 0) {
          if (iVar2 == 0x100) {
            uVar1 = 4;
          }
          else {
            uVar1 = 0;
          }
          return uVar1;
        }
      }
      else if (iVar2 != 0x300) {
        if (iVar2 == 0x400) {
          uVar1 = 2;
        }
        else {
          uVar1 = 0;
        }
        return uVar1;
      }
    }
    else if (iVar2 != 0x2900) {
      if (iVar2 < 0x2901) {
        if (iVar2 != 0x2500) {
          if (iVar2 < 0x2501) {
            if (iVar2 == 0x1600) {
              return 4;
            }
            if (iVar2 == 0x2400) {
              uVar1 = 2;
            }
            else {
              uVar1 = 0;
            }
            return uVar1;
          }
          if (iVar2 != 0x2600) {
            if (iVar2 == 0x2800) {
              uVar1 = 4;
            }
            else {
              uVar1 = 0;
            }
            return uVar1;
          }
        }
      }
      else {
        if (iVar2 == 0x2c00) {
          return 4;
        }
        if (iVar2 < 0x2c01) {
          if (iVar2 != 0x2a00) {
            if (iVar2 == 0x2b00) {
              uVar1 = 2;
            }
            else {
              uVar1 = 0;
            }
            return uVar1;
          }
        }
        else if ((iVar2 != 0x2e00) && (iVar2 != 0x2f00)) {
          if (iVar2 == 0x2d00) {
            uVar1 = 4;
          }
          else {
            uVar1 = 0;
          }
          return uVar1;
        }
      }
      return 2;
    }
    return 4;
  }
  if (param_1 == 0x1300) {
    return true;
  }
  if (param_1 < 0x1301) {
    if (param_1 == 0x500) {
      return 2;
    }
    if (0x500 < param_1) {
      if (param_1 != 0x1000) {
        if (param_1 < 0x1001) {
          if (param_1 == 0x600) {
            return 2;
          }
          if (param_1 == 0x700) {
            uVar1 = 3;
          }
          else {
            uVar1 = 0;
          }
          return uVar1;
        }
        if (param_1 != 0x1100) {
          return param_1 == 0x1200;
        }
      }
      return true;
    }
    if (param_1 == 0x200) {
      return 3;
    }
    if (param_1 < 0x201) {
      if (param_1 != 0) {
        if (param_1 == 0x100) {
          uVar1 = 4;
        }
        else {
          uVar1 = 0;
        }
        return uVar1;
      }
    }
    else if (param_1 != 0x300) {
      if (param_1 == 0x400) {
        uVar1 = 2;
      }
      else {
        uVar1 = 0;
      }
      return uVar1;
    }
  }
  else if (param_1 != 0x2900) {
    if (param_1 < 0x2901) {
      if (param_1 != 0x2500) {
        if (param_1 < 0x2501) {
          if (param_1 == 0x1600) {
            return 4;
          }
          if (param_1 == 0x2400) {
            uVar1 = 2;
          }
          else {
            uVar1 = 0;
          }
          return uVar1;
        }
        if (param_1 != 0x2600) {
          if (param_1 == 0x2800) {
            uVar1 = 4;
          }
          else {
            uVar1 = 0;
          }
          return uVar1;
        }
      }
    }
    else {
      if (param_1 == 0x2c00) {
        return 4;
      }
      if (param_1 < 0x2c01) {
        if (param_1 != 0x2a00) {
          if (param_1 == 0x2b00) {
            uVar1 = 2;
          }
          else {
            uVar1 = 0;
          }
          return uVar1;
        }
      }
      else if ((param_1 != 0x2e00) && (param_1 != 0x2f00)) {
        if (param_1 == 0x2d00) {
          uVar1 = 4;
        }
        else {
          uVar1 = 0;
        }
        return uVar1;
      }
    }
    return 2;
  }
  return 4;
}



/* ===== isRectValid @ 0001bbbc size=52 ===== */

/* isRectValid(rga_rect) */

undefined4 isRectValid(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_3 < 1) {
    uVar1 = 0;
  }
  else if (param_4 < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* ===== NormalRgaSetRect @ 0001bbf0 size=72 ===== */

/* NormalRgaSetRect(rga_rect*, int, int, int, int, int, int) */

undefined4
NormalRgaSetRect(rga_rect *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                int param_7)

{
  if (param_1 != (rga_rect *)0x0) {
    *(int *)(param_1 + 0x10) = param_6;
    *(ulonglong *)param_1 = CONCAT44(param_3,param_2);
    *(ulonglong *)(param_1 + 8) = CONCAT44(param_5,param_4);
    *(int *)(param_1 + 0x18) = param_7;
    return 0;
  }
  return 0xffffffea;
}



/* ===== NormalRgaSetSrcActiveInfo @ 0001bc38 size=56 ===== */

/* NormalRgaSetSrcActiveInfo(rga_req*, unsigned int, unsigned int, unsigned int, unsigned int) */

undefined4
NormalRgaSetSrcActiveInfo(rga_req *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  
  auVar1._4_4_ = param_3;
  auVar1._0_4_ = param_2;
  auVar1._12_4_ = param_5;
  auVar1._8_4_ = param_4;
  uVar2 = VectorCopyNarrow(auVar1,4);
  *(undefined8 *)(param_1 + 0x24) = uVar2;
  return 1;
}



/* ===== NormalRgaSetFdsOffsets @ 0001bc70 size=36 ===== */

/* NormalRgaSetFdsOffsets(rga_req*, unsigned short, unsigned short, unsigned int, unsigned int) */

undefined4
NormalRgaSetFdsOffsets(rga_req *param_1,ushort param_2,ushort param_3,uint param_4,uint param_5)

{
  *(uint *)(param_1 + 0x100) = param_4;
  *(uint *)(param_1 + 0xfc) = CONCAT22(param_3,param_2);
  *(uint *)(param_1 + 0x104) = param_5;
  return 0;
}



/* ===== NormalRgaSetSrcVirtualInfo @ 0001bc94 size=92 ===== */

/* NormalRgaSetSrcVirtualInfo(rga_req*, unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, unsigned char) */

undefined4
NormalRgaSetSrcVirtualInfo
          (rga_req *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
          uint param_7,uchar param_8)

{
  *(uint *)(param_1 + 8) = param_2;
  *(uint *)(param_1 + 0x10) = param_3;
  *(uint *)(param_1 + 0x18) = param_4;
  *(uint *)(param_1 + 0x20) = param_7 >> 8;
  *(short *)(param_1 + 0x2c) = (short)param_5;
  *(short *)(param_1 + 0x2e) = (short)param_6;
  *(ushort *)(param_1 + 0x32) = param_8 & 1 | *(ushort *)(param_1 + 0x32);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return 1;
}



/* ===== NormalRgaSetDstActiveInfo @ 0001bcf0 size=56 ===== */

/* NormalRgaSetDstActiveInfo(rga_req*, unsigned int, unsigned int, unsigned int, unsigned int) */

undefined4
NormalRgaSetDstActiveInfo(rga_req *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  
  auVar1._4_4_ = param_3;
  auVar1._0_4_ = param_2;
  auVar1._12_4_ = param_5;
  auVar1._8_4_ = param_4;
  uVar2 = VectorCopyNarrow(auVar1,4);
  *(undefined8 *)(param_1 + 0x5c) = uVar2;
  return 1;
}



/* ===== NormalRgaSetDstVirtualInfo @ 0001bd28 size=128 ===== */

/* NormalRgaSetDstVirtualInfo(rga_req*, unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned int, RECT*, unsigned int, unsigned char) */

void NormalRgaSetDstVirtualInfo
               (rga_req *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
               RECT *param_7,uint param_8,uchar param_9)

{
  undefined2 uVar1;
  
  *(uint *)(param_1 + 0x40) = param_2;
  *(uint *)(param_1 + 0x48) = param_3;
  *(uint *)(param_1 + 0x50) = param_4;
  *(short *)(param_1 + 0x66) = (short)param_6;
  *(short *)(param_1 + 100) = (short)param_5;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(uint *)(param_1 + 0x58) = param_8 >> 8;
  *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)param_7;
  *(undefined2 *)(param_1 + 0xc2) = *(undefined2 *)(param_7 + 2);
  *(undefined2 *)(param_1 + 0xc4) = *(undefined2 *)(param_7 + 4);
  uVar1 = *(undefined2 *)(param_7 + 6);
  *(ushort *)(param_1 + 0x6a) = param_9 & 1 | *(ushort *)(param_1 + 0x6a);
  *(undefined2 *)(param_1 + 0xc6) = uVar1;
  return;
}



/* ===== NormalRgaSetPatActiveInfo @ 0001bda8 size=56 ===== */

/* NormalRgaSetPatActiveInfo(rga_req*, unsigned int, unsigned int, unsigned int, unsigned int) */

undefined4
NormalRgaSetPatActiveInfo(rga_req *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  
  auVar1._4_4_ = param_3;
  auVar1._0_4_ = param_2;
  auVar1._12_4_ = param_5;
  auVar1._8_4_ = param_4;
  uVar2 = VectorCopyNarrow(auVar1,4);
  *(undefined8 *)(param_1 + 0x94) = uVar2;
  return 1;
}



/* ===== NormalRgaSetPatVirtualInfo @ 0001bde0 size=128 ===== */

/* NormalRgaSetPatVirtualInfo(rga_req*, unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned int, RECT*, unsigned int, unsigned char) */

void NormalRgaSetPatVirtualInfo
               (rga_req *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
               RECT *param_7,uint param_8,uchar param_9)

{
  undefined2 uVar1;
  
  *(uint *)(param_1 + 0x78) = param_2;
  *(uint *)(param_1 + 0x80) = param_3;
  *(uint *)(param_1 + 0x88) = param_4;
  *(short *)(param_1 + 0x9e) = (short)param_6;
  *(short *)(param_1 + 0x9c) = (short)param_5;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(uint *)(param_1 + 0x90) = param_8 >> 8;
  *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)param_7;
  *(undefined2 *)(param_1 + 0xc2) = *(undefined2 *)(param_7 + 2);
  *(undefined2 *)(param_1 + 0xc4) = *(undefined2 *)(param_7 + 4);
  uVar1 = *(undefined2 *)(param_7 + 6);
  *(ushort *)(param_1 + 0xa2) = param_9 & 1 | *(ushort *)(param_1 + 0xa2);
  *(undefined2 *)(param_1 + 0xc6) = uVar1;
  return;
}



/* ===== NormalRgaSetPatInfo @ 0001be60 size=72 ===== */

/* NormalRgaSetPatInfo(rga_req*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned
   int) */

undefined4
NormalRgaSetPatInfo(rga_req *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                   uint param_6)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  
  auVar1._4_4_ = param_3;
  auVar1._0_4_ = param_2;
  auVar1._12_4_ = param_5;
  auVar1._8_4_ = param_4;
  uVar2 = VectorCopyNarrow(auVar1,4);
  *(undefined8 *)(param_1 + 0x94) = uVar2;
  *(uint *)(param_1 + 0x90) = param_6 >> 8;
  return 1;
}



/* ===== NormalRgaSetRopMaskInfo @ 0001bea8 size=28 ===== */

/* NormalRgaSetRopMaskInfo(rga_req*, unsigned int, unsigned int) */

undefined4 NormalRgaSetRopMaskInfo(rga_req *param_1,uint param_2,uint param_3)

{
  *(uint *)(param_1 + 0xb0) = param_2;
  param_1[0x113] = SUB41(param_3,0);
  *(undefined4 *)(param_1 + 0xb4) = 0;
  return 1;
}



/* ===== NormalRgaSetAlphaEnInfo @ 0001bec4 size=92 ===== */

/* NormalRgaSetAlphaEnInfo(rga_req*, unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int) */

undefined4
NormalRgaSetAlphaEnInfo
          (rga_req *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
          uint param_7)

{
  param_1[0x10d] = SUB41(param_4,0);
  *(ushort *)(param_1 + 0xd0) =
       (ushort)(param_2 << 4) & 0x10 | *(ushort *)(param_1 + 0xd0) | (ushort)(param_5 << 3) & 8 | 1;
  param_1[0x10c] = SUB41(param_6,0);
  param_1[0x130] = (rga_req)((byte)param_3 & 3 | (byte)(param_7 << 5) | (byte)param_1[0x130]);
  return 1;
}



/* ===== NormalRgaSetRopEnInfo @ 0001bf20 size=68 ===== */

/* NormalRgaSetRopEnInfo(rga_req*, unsigned int, unsigned int, unsigned int, unsigned int) */

undefined4
NormalRgaSetRopEnInfo(rga_req *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  param_1[0x115] = SUB41(param_4,0);
  param_1[0x130] = (rga_req)((byte)(param_2 << 2) & 0xc | (byte)param_1[0x130]);
  *(short *)(param_1 + 0x10e) = (short)param_3;
  *(ushort *)(param_1 + 0xd0) = *(ushort *)(param_1 + 0xd0) | 3;
  *(uint *)(param_1 + 0xdc) = param_5;
  return 1;
}



/* ===== NormalRgaSetFadingEnInfo @ 0001bf64 size=40 ===== */

/* NormalRgaSetFadingEnInfo(rga_req*, unsigned char, unsigned char, unsigned char) */

undefined4 NormalRgaSetFadingEnInfo(rga_req *param_1,uchar param_2,uchar param_3,uchar param_4)

{
  param_1[0x108] = (rga_req)param_4;
  param_1[0x109] = (rga_req)param_3;
  param_1[0x10a] = (rga_req)param_2;
  *(ushort *)(param_1 + 0xd0) = *(ushort *)(param_1 + 0xd0) | 4;
  return 1;
}



/* ===== NormalRgaSetSrcTransModeInfo @ 0001bf8c size=112 ===== */

/* NormalRgaSetSrcTransModeInfo(rga_req*, unsigned char, unsigned char, unsigned char, unsigned
   char, unsigned char, unsigned int, unsigned int, unsigned char) */

undefined4
NormalRgaSetSrcTransModeInfo
          (rga_req *param_1,uchar param_2,uchar param_3,uchar param_4,uchar param_5,uchar param_6,
          uint param_7,uint param_8,uchar param_9)

{
  param_1[0x131] =
       (rga_req)((param_6 & 1) << 1 | param_2 & 1 | (param_5 & 1) << 2 | (param_4 & 1) << 3 |
                (param_3 & 1) << 4);
  *(uint *)(param_1 + 0xd8) = param_7;
  *(uint *)(param_1 + 0xd4) = param_8;
  param_1[0x130] = (rga_req)((byte)param_1[0x130] | param_9 << 4);
  return 1;
}



/* ===== NormalRgaIsBppFormat @ 0001bffc size=60 ===== */

/* NormalRgaIsBppFormat(int) */

bool NormalRgaIsBppFormat(int param_1)

{
  if (param_1 != 0x1100) {
    if (param_1 < 0x1101) {
      return param_1 == 0x1000;
    }
    if (param_1 != 0x1200) {
      return param_1 == 0x1300;
    }
  }
  return true;
}



/* ===== NormalRgaIsYuvFormat @ 0001c038 size=276 ===== */

/* NormalRgaIsYuvFormat(int) */

bool NormalRgaIsYuvFormat(int param_1)

{
  if (param_1 != 0x1800) {
    if (param_1 < 0x1801) {
      if (param_1 != 0xc00) {
        if (param_1 < 0xc01) {
          if (param_1 != 0x900) {
            if (param_1 < 0x901) {
              return param_1 == 0x800;
            }
            if (param_1 != 0xa00) {
              return param_1 == 0xb00;
            }
          }
        }
        else if (param_1 != 0xf00) {
          if (param_1 < 0xf01) {
            if (param_1 != 0xd00) {
              return param_1 == 0xe00;
            }
          }
          else if (param_1 != 0x1400) {
            return param_1 == 0x1500;
          }
        }
      }
    }
    else if (param_1 != 0x1e00) {
      if (param_1 < 0x1e01) {
        if (param_1 != 0x1b00) {
          if (param_1 < 0x1b01) {
            if (param_1 != 0x1900) {
              return param_1 == 0x1a00;
            }
          }
          else if (param_1 != 0x1c00) {
            return param_1 == 0x1d00;
          }
        }
      }
      else if (param_1 != 0x2100) {
        if (param_1 < 0x2101) {
          if (param_1 != 0x1f00) {
            return param_1 == 0x2000;
          }
        }
        else if (param_1 != 0x2200) {
          return param_1 == 0x2300;
        }
      }
    }
  }
  return true;
}



/* ===== checkRectForRga @ 0001c14c size=324 ===== */

/* checkRectForRga(rga_rect) */

undefined4
checkRectForRga(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
               int param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((int)(param_1 | param_2) < 0) {
    printf((char *)(DAT_0001c294 + 0x1c20c),param_1,param_2);
    putchar(10);
    uVar3 = 0xffffffea;
  }
  else {
    uVar1 = param_4;
    if (1 < (int)param_4) {
      uVar1 = param_3;
    }
    if ((int)uVar1 < 2) {
      printf((char *)(DAT_0001c298 + 0x1c230),param_3,param_4);
      putchar(10);
      uVar3 = 0xffffffea;
    }
    else if ((int)param_5 < (int)(param_1 + param_3)) {
      printf((char *)(DAT_0001c2a0 + 0x1c280),param_1,param_3,param_5);
      putchar(10);
      uVar3 = 0xffffffea;
    }
    else if ((int)param_6 < (int)(param_2 + param_4)) {
      printf((char *)(DAT_0001c29c + 0x1c258),param_2,param_4,param_6);
      putchar(10);
      uVar3 = 0xffffffea;
    }
    else {
      iVar2 = RkRgaGetRgaFormat(param_7);
      iVar2 = NormalRgaIsYuvFormat(iVar2);
      uVar3 = 0;
      if ((iVar2 != 0) &&
         (uVar3 = 0,
         ((param_1 | param_3 | param_2 | param_4 | param_6) & 1) != 0 || (param_5 & 3) != 0)) {
        printf((char *)(DAT_0001c290 + 0x1c1e8));
        putchar(10);
        uVar3 = 0xffffffea;
      }
    }
  }
  return uVar3;
}



/* ===== NormalRgaIsRgbFormat @ 0001c2a4 size=256 ===== */

/* NormalRgaIsRgbFormat(int) */

bool NormalRgaIsRgbFormat(int param_1)

{
  if (param_1 != 0x2400) {
    if (param_1 < 0x2401) {
      if (param_1 != 0x400) {
        if (param_1 < 0x401) {
          if (param_1 != 0x100) {
            if (param_1 < 0x101) {
              return param_1 == 0;
            }
            if (param_1 != 0x200) {
              return param_1 == 0x300;
            }
          }
        }
        else if (param_1 != 0x600) {
          if (param_1 < 0x601) {
            return param_1 == 0x500;
          }
          if (param_1 != 0x700) {
            return param_1 == 0x1600;
          }
        }
      }
    }
    else if (param_1 != 0x2a00) {
      if (param_1 < 0x2a01) {
        if (param_1 != 0x2600) {
          if (param_1 < 0x2601) {
            return param_1 == 0x2500;
          }
          if (param_1 != 0x2800) {
            return param_1 == 0x2900;
          }
        }
      }
      else if (param_1 != 0x2d00) {
        if (param_1 < 0x2d01) {
          if (param_1 != 0x2b00) {
            return param_1 == 0x2c00;
          }
        }
        else if (param_1 != 0x2e00) {
          return param_1 == 0x2f00;
        }
      }
    }
  }
  return true;
}



/* ===== NormalRgaFormatHasAlpha @ 0001c3a4 size=156 ===== */

/* NormalRgaFormatHasAlpha(int) */

bool NormalRgaFormatHasAlpha(int param_1)

{
  if (param_1 != 0x2800) {
    if (param_1 < 0x2801) {
      if (param_1 != 0x500) {
        if (param_1 < 0x501) {
          if (param_1 != 0) {
            return param_1 == 0x300;
          }
        }
        else if ((param_1 != 0x2500) && (param_1 != 0x2600)) {
          return param_1 == 0x600;
        }
      }
    }
    else if (param_1 != 0x2c00) {
      if (param_1 < 0x2c01) {
        if (param_1 != 0x2a00) {
          return param_1 == 0x2b00;
        }
      }
      else if ((param_1 != 0x2f00) && (param_1 != 0x3000)) {
        return param_1 == 0x2e00;
      }
    }
  }
  return true;
}



/* ===== NormalRgaSetBitbltMode @ 0001c440 size=208 ===== */

/* NormalRgaSetBitbltMode(rga_req*, unsigned char, unsigned char, unsigned int, unsigned int,
   unsigned int, unsigned int) */

undefined4
NormalRgaSetBitbltMode
          (rga_req *param_1,uchar param_2,uchar param_3,uint param_4,uint param_5,uint param_6,
          uint param_7)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar3 = DAT_0001c514;
  iVar5 = DAT_0001c510 + 0x1c450;
  param_1[0xd2] = (rga_req)param_2;
  param_1[0x114] = (rga_req)param_3;
  *param_1 = (rga_req)0x0;
  iVar4 = DAT_0001c518;
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(*(int *)(iVar5 + iVar3) + param_4 * 4);
  uVar6 = *(undefined4 *)(*(int *)(iVar5 + iVar4) + param_4 * 4);
  uVar1 = *(ushort *)(param_1 + 0xd0);
  param_1[0x112] = SUB41(param_7,0);
  *(undefined4 *)(param_1 + 0xcc) = uVar6;
  uVar2 = (ushort)((param_5 & 1) << 5) | (ushort)((param_6 & 1) << 7) | uVar1;
  *(ushort *)(param_1 + 0xd0) = uVar2;
  if (param_3 == '\x01' && param_6 == 1) {
    if ((uVar1 & 3) == 1) {
      if (((byte)param_1[0x130] & 3) == 0) {
        param_1[0x130] = (rga_req)0x2;
      }
      else if (((byte)param_1[0x130] & 3) == 1) {
        param_1[0x130] = (rga_req)0x1;
      }
    }
    else {
      *(ushort *)(param_1 + 0xd0) = uVar2 | 1;
      param_1[0x130] = (rga_req)0x1;
    }
  }
  if (param_1[0x131] != (rga_req)0x0) {
    param_1[0xd2] = (rga_req)0x0;
  }
  return 0;
}



/* ===== NormalRgaSetColorPaletteMode @ 0001c51c size=44 ===== */

/* NormalRgaSetColorPaletteMode(rga_req*, unsigned char, unsigned char, unsigned int, unsigned int)
    */

undefined4
NormalRgaSetColorPaletteMode(rga_req *param_1,uchar param_2,uchar param_3,uint param_4,uint param_5)

{
  param_1[0x111] = (rga_req)param_2;
  param_1[0x113] = (rga_req)param_3;
  *(uint *)(param_1 + 0xdc) = param_4;
  *(uint *)(param_1 + 0xe0) = param_5;
  *param_1 = (rga_req)0x1;
  return 1;
}



/* ===== NormalRgaSetColorFillMode @ 0001c548 size=336 ===== */

/* NormalRgaSetColorFillMode(rga_req*, COLOR_FILL*, unsigned char, unsigned char, unsigned int,
   unsigned short, unsigned short, unsigned char, unsigned char, unsigned char) */

undefined4
NormalRgaSetColorFillMode
          (rga_req *param_1,COLOR_FILL *param_2,uchar param_3,uchar param_4,uint param_5,
          ushort param_6,ushort param_7,uchar param_8,uchar param_9,uchar param_10)

{
  short sVar1;
  double dVar2;
  ushort uVar3;
  bool bVar4;
  uint in_fpscr;
  double dVar5;
  
  *param_1 = (rga_req)0x2;
  dVar2 = DAT_0001c698;
  bVar4 = param_10 == '\0';
  dVar5 = (double)VectorSignedToFloat((int)*(short *)param_2,(byte)(in_fpscr >> 0x16) & 3);
  uVar3 = (param_3 & 1) << 6 | *(ushort *)(param_1 + 0xd0);
  if (!bVar4) {
    uVar3 = uVar3 | 1;
  }
  *(short *)(param_1 + 0xe4) = (short)(longlong)(dVar5 * DAT_0001c698);
  dVar5 = (double)VectorSignedToFloat((int)*(short *)(param_2 + 4),(byte)(in_fpscr >> 0x16) & 3);
  *(short *)(param_1 + 0xe8) = (short)(longlong)(dVar5 * dVar2);
  dVar5 = (double)VectorSignedToFloat((int)*(short *)(param_2 + 8),(byte)(in_fpscr >> 0x16) & 3);
  *(short *)(param_1 + 0xec) = (short)(longlong)(dVar5 * dVar2);
  dVar5 = (double)VectorSignedToFloat((int)*(short *)(param_2 + 0xc),(byte)(in_fpscr >> 0x16) & 3);
  *(short *)(param_1 + 0xf0) = (short)(longlong)(dVar5 * dVar2);
  dVar5 = (double)VectorSignedToFloat((int)*(short *)(param_2 + 2),(byte)(in_fpscr >> 0x16) & 3);
  *(short *)(param_1 + 0xe6) = (short)(longlong)(dVar5 * dVar2);
  dVar5 = (double)VectorSignedToFloat((int)*(short *)(param_2 + 6),(byte)(in_fpscr >> 0x16) & 3);
  *(short *)(param_1 + 0xea) = (short)(longlong)(dVar5 * dVar2);
  dVar5 = (double)VectorSignedToFloat((int)*(short *)(param_2 + 10),(byte)(in_fpscr >> 0x16) & 3);
  *(short *)(param_1 + 0xee) = (short)(longlong)(dVar5 * dVar2);
  sVar1 = *(short *)(param_2 + 0xe);
  param_1[0x115] = (rga_req)param_4;
  *(ushort *)(param_1 + 0x94) = param_6;
  *(ushort *)(param_1 + 0x96) = param_7;
  *(ushort *)(param_1 + 0x98) = (ushort)param_8;
  dVar5 = (double)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x16) & 3);
  *(ushort *)(param_1 + 0x9a) = (ushort)param_9;
  *(uint *)(param_1 + 0xdc) = param_5;
  if (bVar4) {
    *(ushort *)(param_1 + 0xd0) = uVar3;
  }
  *(short *)(param_1 + 0xf2) = (short)(longlong)(dVar5 * dVar2);
  if (!bVar4) {
    *(ushort *)(param_1 + 0xd0) = uVar3;
    param_1[0x130] = (rga_req)0x1;
  }
  return 1;
}



/* ===== NormalRgaSetLineDrawingMode @ 0001c6a0 size=112 ===== */

/* NormalRgaSetLineDrawingMode(rga_req*, POINT, POINT, unsigned int, unsigned int, unsigned char,
   unsigned char) */

undefined4
NormalRgaSetLineDrawingMode
          (undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,byte param_6,byte param_7)

{
  *(undefined4 *)(param_1 + 0xfc) = param_4;
  *(short *)(param_1 + 0xf4) = (short)param_2;
  *(short *)(param_1 + 0xf8) = (short)param_3;
  *(short *)(param_1 + 0xf6) = (short)((uint)param_2 >> 0x10);
  *(short *)(param_1 + 0xfa) = (short)((uint)param_3 >> 0x10);
  *(undefined4 *)(param_1 + 0x104) = param_5;
  *param_1 = 3;
  *(uint *)(param_1 + 0x100) = *(uint *)(param_1 + 0x100) | (param_7 & 1) << 1 | param_6 & 1;
  if (param_6 == 1) {
    *(ushort *)(param_1 + 0xd0) = (ushort)param_6;
    param_1[0x130] = param_6;
  }
  return 1;
}



/* ===== NormalRgaSetBlurSharpFilterMode @ 0001c710 size=72 ===== */

/* NormalRgaSetBlurSharpFilterMode(rga_req*, unsigned char, unsigned char, unsigned char) */

undefined4
NormalRgaSetBlurSharpFilterMode(rga_req *param_1,uchar param_2,uchar param_3,uchar param_4)

{
  *(ushort *)(param_1 + 0xd0) = (param_4 & 1) << 5 | *(ushort *)(param_1 + 0xd0);
  param_1[0x110] = (rga_req)((byte)param_1[0x110] | param_3 & 3 | (param_2 & 1) << 2);
  *param_1 = (rga_req)0x4;
  return 1;
}



/* ===== NormalRgaSetPreScalingMode @ 0001c758 size=40 ===== */

/* NormalRgaSetPreScalingMode(rga_req*, unsigned char) */

undefined4 NormalRgaSetPreScalingMode(rga_req *param_1,uchar param_2)

{
  *param_1 = (rga_req)0x5;
  *(ushort *)(param_1 + 0xd0) = (param_2 & 1) << 5 | *(ushort *)(param_1 + 0xd0);
  return 1;
}



/* ===== NormalRgaUpdatePaletteTableMode @ 0001c780 size=36 ===== */

/* NormalRgaUpdatePaletteTableMode(rga_req*, unsigned int, unsigned int) */

undefined4 NormalRgaUpdatePaletteTableMode(rga_req *param_1,uint param_2,uint param_3)

{
  *(uint *)(param_1 + 0xb8) = param_2;
  param_1[0x111] = SUB41(param_3,0);
  *param_1 = (rga_req)0x6;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  return 1;
}



/* ===== NormalRgaUpdatePattenBuffMode @ 0001c7a4 size=60 ===== */

/* NormalRgaUpdatePattenBuffMode(rga_req*, unsigned int, unsigned int, unsigned int, unsigned int)
    */

undefined4
NormalRgaUpdatePattenBuffMode(rga_req *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  *(uint *)(param_1 + 0x78) = param_2;
  *param_1 = (rga_req)0x7;
  *(uint *)(param_1 + 0x90) = param_5;
  *(short *)(param_1 + 0x94) = (short)param_3 * (short)param_4;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined2 *)(param_1 + 0x96) = 1;
  return 1;
}



/* ===== NormalRgaMmuInfo @ 0001c7e0 size=96 ===== */

/* NormalRgaMmuInfo(rga_req*, unsigned char, unsigned char, unsigned char, unsigned char, unsigned
   int, unsigned char) */

undefined4
NormalRgaMmuInfo(rga_req *param_1,uchar param_2,uchar param_3,uchar param_4,uchar param_5,
                uint param_6,uchar param_7)

{
  param_1[0x118] = (rga_req)param_2;
  *(uint *)(param_1 + 0x120) = param_6;
  *(uint *)(param_1 + 0x128) =
       (param_4 & 1) << 2 | (param_3 & 1) << 1 | (param_5 & 1) << 3 | (param_7 & 3) << 4 |
       (uint)param_2;
  *(undefined4 *)(param_1 + 0x124) = 0;
  return 1;
}



/* ===== NormalRgaMmuFlag @ 0001c840 size=48 ===== */

/* NormalRgaMmuFlag(rga_req*, int, int) */

undefined4 NormalRgaMmuFlag(rga_req *param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if (param_2 != 0 || param_3 != 0) {
    uVar1 = *(uint *)(param_1 + 0x128) | 0x80000000;
    if (param_2 != 0) {
      uVar1 = *(uint *)(param_1 + 0x128) | 0x80000100;
    }
    *(uint *)(param_1 + 0x128) = uVar1;
    if (param_3 != 0) {
      *(uint *)(param_1 + 0x128) = uVar1 | 0x400;
    }
  }
  return 1;
}



/* ===== NormalRgaNNQuantizeMode @ 0001c870 size=80 ===== */

/* NormalRgaNNQuantizeMode(rga_req*, rga_info*) */

undefined4 NormalRgaNNQuantizeMode(rga_req *param_1,rga_info *param_2)

{
  if (*(int *)(param_2 + 0x68) == 1) {
    *(ushort *)(param_1 + 0xd0) = *(ushort *)(param_1 + 0xd0) | 0x100;
    *(short *)(param_1 + 0xf0) = (short)*(undefined4 *)(param_2 + 0x6c);
    *(short *)(param_1 + 0xec) = (short)*(undefined4 *)(param_2 + 0x70);
    *(short *)(param_1 + 0xe8) = (short)*(undefined4 *)(param_2 + 0x74);
    *(short *)(param_1 + 0xf2) = (short)*(undefined4 *)(param_2 + 0x78);
    *(short *)(param_1 + 0xee) = (short)*(undefined4 *)(param_2 + 0x7c);
    *(short *)(param_1 + 0xea) = (short)*(undefined4 *)(param_2 + 0x80);
  }
  return 0;
}



/* ===== NormalRgaFullColorSpaceConvert @ 0001c8c0 size=612 ===== */

/* NormalRgaFullColorSpaceConvert(rga_req*, int) */

undefined4 NormalRgaFullColorSpaceConvert(rga_req *param_1,int param_2)

{
  undefined4 *puVar1;
  rga_req *prVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float *pfVar6;
  undefined4 *puVar7;
  rga_req *prVar8;
  undefined4 local_38;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30 [2];
  undefined4 local_2c;
  undefined2 local_28;
  undefined2 uStack_26;
  undefined2 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18 [2];
  undefined4 local_14;
  
  if (param_2 == 0x500) {
    pfVar6 = (float *)(DAT_0001cb40 + 0x1cbb0);
  }
  else if (param_2 < 0x501) {
    if (param_2 == 0x100) {
      pfVar6 = (float *)(DAT_0001cb30 + 0x1cae4);
    }
    else {
      if (param_2 != 0x200) {
LAB_0001c8ec:
        printf((char *)(DAT_0001cb28 + 0x1c8f8));
        return 0xffffffff;
      }
      pfVar6 = (float *)(DAT_0001cb2c + 0x1c954);
    }
  }
  else if (param_2 == 0x900) {
    pfVar6 = (float *)(DAT_0001cb3c + 0x1cbd0);
  }
  else if (param_2 == 0xa00) {
    pfVar6 = (float *)(DAT_0001cb38 + 0x1cbf0);
  }
  else {
    if (param_2 != 0x700) goto LAB_0001c8ec;
    pfVar6 = (float *)(DAT_0001cb34 + 0x1cb50);
  }
  local_38._0_1_ = 1;
  local_34 = (short)(longlong)(*pfVar6 * DAT_0001cb24 + 0.5);
  local_32 = (short)(longlong)(pfVar6[1] * DAT_0001cb24 + 0.5);
  local_30[0] = (short)(longlong)(pfVar6[2] * DAT_0001cb24 + 0.5);
  local_2c = (int)(longlong)(pfVar6[3] * DAT_0001cb24 + 0.5);
  local_28 = (short)(longlong)(pfVar6[4] * DAT_0001cb24 + 0.5);
  uStack_26 = (short)(longlong)(pfVar6[5] * DAT_0001cb24 + 0.5);
  local_24 = (short)(longlong)(pfVar6[6] * DAT_0001cb24 + 0.5);
  local_20 = (int)(longlong)(pfVar6[7] * DAT_0001cb24 + 0.5);
  local_1c = (short)(longlong)(pfVar6[8] * DAT_0001cb24 + 0.5);
  local_1a = (short)(longlong)(pfVar6[9] * DAT_0001cb24 + 0.5);
  local_14 = (int)(longlong)(pfVar6[0xb] * DAT_0001cb24 + 0.5);
  local_18[0] = (short)(longlong)(pfVar6[10] * DAT_0001cb24 + 0.5);
  if (param_2 >> 8 == 0) {
    return 0;
  }
  puVar1 = &local_38;
  prVar2 = param_1 + 0x134;
  do {
    prVar8 = prVar2;
    puVar7 = puVar1;
    uVar3 = puVar7[1];
    uVar4 = puVar7[2];
    uVar5 = puVar7[3];
    *(undefined4 *)prVar8 = *puVar7;
    *(undefined4 *)(prVar8 + 4) = uVar3;
    *(undefined4 *)(prVar8 + 8) = uVar4;
    *(undefined4 *)(prVar8 + 0xc) = uVar5;
    puVar1 = puVar7 + 4;
    prVar2 = prVar8 + 0x10;
  } while (puVar7 + 4 != (undefined4 *)local_18);
  uVar3 = puVar7[5];
  *(undefined4 *)(prVar8 + 0x10) = puVar7[4];
  *(undefined4 *)(prVar8 + 0x14) = uVar3;
  return 0;
}



/* ===== NormalRgaDitherMode @ 0001cb44 size=84 ===== */

/* NormalRgaDitherMode(rga_req*, rga_info*, int) */

undefined4 NormalRgaDitherMode(rga_req *param_1,rga_info *param_2,int param_3)

{
  if (*(int *)(param_2 + 0x84) == 1) {
    *(undefined2 *)(param_1 + 0xd0) = 1;
    *(ushort *)(param_1 + 0xd0) = (ushort)(*(int *)(param_2 + 0x84) << 5) | 1;
  }
  if (param_3 == 0x1400) {
    param_1[0x132] = SUB41(*(undefined4 *)(param_2 + 0x88),0);
    *(short *)(param_1 + 0xf0) = (short)*(undefined4 *)(param_2 + 0x8c);
    *(short *)(param_1 + 0xec) = (short)*(undefined4 *)(param_2 + 0x90);
    *(short *)(param_1 + 0xf2) = (short)*(undefined4 *)(param_2 + 0x94);
    *(short *)(param_1 + 0xee) = (short)*(undefined4 *)(param_2 + 0x98);
  }
  return 0;
}



/* ===== NormalRgaInitTables @ 0001cb98 size=128 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* NormalRgaInitTables() */

undefined4 NormalRgaInitTables(void)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_b58 [1440];
  undefined1 auStack_5b8 [1444];
  
  iVar1 = DAT_0001cc18;
  memcpy(auStack_b58,(void *)(DAT_0001cc18 + 0x1cbb8),0x5a0);
  iVar2 = DAT_0001cc1c;
  memcpy(auStack_5b8,(void *)(iVar1 + 0x1d158),0x5a0);
  memcpy(*(void **)(iVar2 + 0x1cbec + DAT_0001cc20),auStack_b58,0x5a0);
  memcpy(*(void **)(iVar2 + 0x1cbec + DAT_0001cc24),auStack_5b8,0x5a0);
  return 0;
}



/* ===== NormalRgaLogOutRgaReq @ 0001cc28 size=784 ===== */

/* NormalRgaLogOutRgaReq(rga_req) */

void NormalRgaLogOutRgaReq
               (uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined4 param_9,uint param_10,uint param_11,uint param_12,undefined4 param_13,
               uint param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
               undefined4 param_18,undefined4 param_19,undefined4 param_20,undefined4 param_21,
               undefined4 param_22,undefined4 param_23,uint param_24,uint param_25,uint param_26,
               undefined4 param_27,uint param_28,undefined4 param_29,undefined4 param_30,
               undefined4 param_31,undefined4 param_32,undefined4 param_33,undefined4 param_34,
               undefined4 param_35,undefined4 param_36,undefined4 param_37,uint param_38,
               uint param_39,uint param_40,undefined4 param_41,uint param_42,undefined4 param_43,
               undefined4 param_44,undefined4 param_45,undefined4 param_46,undefined4 param_47)

{
  int iVar1;
  uint in_stack_000000c0;
  undefined4 in_stack_000000c4;
  undefined4 in_stack_000000c8;
  undefined4 in_stack_000000cc;
  undefined4 in_stack_000000d0;
  short sStack000000d8;
  short sStack000000da;
  short sStack000000dc;
  short sStack000000de;
  short sStack000000e0;
  short sStack000000e2;
  uint in_stack_000000fc;
  uint in_stack_00000100;
  uint in_stack_00000104;
  byte in_stack_00000108;
  undefined4 in_stack_00000110;
  undefined4 in_stack_00000118;
  uint in_stack_00000120;
  byte in_stack_00000124;
  short sStack00000128;
  short sStack0000012a;
  short in_stack_0000012c;
  undefined4 in_stack_00000130;
  short sStack00000134;
  short sStack00000136;
  short in_stack_00000138;
  undefined4 in_stack_0000013c;
  short sStack00000140;
  short sStack00000142;
  short in_stack_00000144;
  undefined4 in_stack_00000148;
  undefined4 in_stack_0000014c;
  byte in_stack_00000158;
  
  printf((char *)(DAT_0001cf38 + 0x1cc58),param_1 & 0xff,in_stack_00000104 & 0xff,in_stack_0000014c,
         (uint)in_stack_00000158);
  putchar(10);
  printf((char *)(DAT_0001cf3c + 0x1cca8),param_3,param_5,param_7,param_11 & 0xffff,param_11 >> 0x10
         ,param_10 & 0xffff,param_10 >> 0x10,param_12 & 0xffff,param_12 >> 0x10,param_9,
         param_14 >> 0x10);
  putchar(10);
  printf((char *)(DAT_0001cf40 + 0x1cd08),param_17,param_19,param_21,param_25 & 0xffff,
         param_25 >> 0x10,param_24 & 0xffff,param_24 >> 0x10,param_26 & 0xffff,param_26 >> 0x10,
         param_23,param_28 >> 0x10);
  putchar(10);
  printf((char *)(DAT_0001cf44 + 0x1cd68),param_31,param_33,param_35,param_39 & 0xffff,
         param_39 >> 0x10,param_38 & 0xffff,param_38 >> 0x10,param_40 & 0xffff,param_40 >> 0x10,
         param_37,param_42 >> 0x10);
  putchar(10);
  printf((char *)(DAT_0001cf48 + 0x1cda4),param_45,in_stack_000000c0 & 0xffff,
         in_stack_000000fc >> 0x10,param_47);
  putchar(10);
  printf((char *)(DAT_0001cf4c + 0x1cdd4),in_stack_000000c4,in_stack_000000c8,in_stack_000000cc,
         in_stack_000000d0,in_stack_00000104 >> 8 & 0xff);
  putchar(10);
  printf((char *)(DAT_0001cf50 + 0x1cdfc),(uint)in_stack_00000108,in_stack_00000110,
         in_stack_00000118);
  putchar(10);
  printf((char *)(DAT_0001cf54 + 0x1ce24),in_stack_00000100 >> 8 & 0xff,
         in_stack_00000100 >> 0x10 & 0xff,in_stack_00000100 >> 0x18,in_stack_00000120 >> 8 & 0xff,
         in_stack_000000c0 >> 0x10 & 0xff);
  putchar(10);
  iVar1 = DAT_0001cf5c;
  printf((char *)(DAT_0001cf58 + 0x1ceb0),(uint)in_stack_00000124,(int)sStack00000128,
         (int)sStack0000012a,(int)in_stack_0000012c,in_stack_00000130,(int)sStack00000134,
         (int)sStack00000136,(int)in_stack_00000138,in_stack_0000013c,(int)sStack00000140,
         (int)sStack00000142,(int)in_stack_00000144,in_stack_00000148);
  putchar(10);
  printf((char *)(iVar1 + 0x1ced0),(int)sStack000000e0,(int)sStack000000dc,(int)sStack000000d8);
  putchar(10);
  printf((char *)(iVar1 + 0x1ced0),(int)sStack000000e2,(int)sStack000000de,(int)sStack000000da);
  putchar(10);
  return;
}



/* ===== NormalRgaCompatModeConvertRga2 @ 0001cf60 size=716 ===== */

/* NormalRgaCompatModeConvertRga2(rga2_req*, rga_req*) */

void NormalRgaCompatModeConvertRga2(rga2_req *param_1,rga_req *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  *param_1 = *(rga2_req *)param_2;
  uVar11 = *(undefined4 *)(param_2 + 0x10);
  uVar8 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 8);
  uVar10 = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 8) = uVar11;
  *(undefined4 *)(param_1 + 0xc) = uVar8;
  *(undefined4 *)(param_1 + 0x10) = uVar10;
  uVar14 = *(undefined8 *)(param_2 + 0x2c);
  uVar12 = *(undefined4 *)(param_2 + 0x40);
  uVar11 = *(undefined4 *)(param_2 + 0x48);
  uVar10 = *(undefined4 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x1c) = uVar14;
  uVar8 = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x24) = uVar12;
  *(undefined4 *)(param_1 + 0x28) = uVar11;
  *(undefined4 *)(param_1 + 0x2c) = uVar10;
  *(undefined4 *)(param_1 + 0x30) = uVar8;
  uVar14 = *(undefined8 *)(param_2 + 100);
  uVar10 = *(undefined4 *)(param_2 + 0x78);
  uVar8 = *(undefined4 *)(param_2 + 0x80);
  sVar1 = *(short *)(param_2 + 0x5c);
  sVar2 = *(short *)(param_2 + 0x5e);
  sVar3 = *(short *)(param_2 + 0x60);
  sVar4 = *(short *)(param_2 + 0x62);
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x5c);
  *(undefined8 *)(param_1 + 0x3c) = uVar14;
  *(undefined4 *)(param_1 + 0x44) = uVar10;
  uVar10 = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x48) = uVar8;
  *(undefined4 *)(param_1 + 0x4c) = uVar10;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x90);
  uVar14 = *(undefined8 *)(param_2 + 0x9c);
  *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_2 + 0x94);
  *(undefined8 *)(param_1 + 0x5c) = uVar14;
  uVar5 = *(undefined2 *)(param_2 + 0xc2);
  uVar6 = *(undefined2 *)(param_2 + 0xc6);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 0xb0);
  uVar8 = *(undefined4 *)(param_2 + 0xb8);
  *(undefined2 *)(param_1 + 0x6e) = uVar5;
  uVar5 = *(undefined2 *)(param_2 + 0xc0);
  *(undefined2 *)(param_1 + 0x72) = uVar6;
  *(undefined4 *)(param_1 + 0x68) = uVar8;
  *(undefined2 *)(param_1 + 0x6c) = uVar5;
  iVar13 = *(int *)(param_2 + 200);
  *(int *)(param_1 + 0x74) = iVar13;
  iVar9 = *(int *)(param_2 + 0xcc);
  *(int *)(param_1 + 0x78) = iVar9;
  *(undefined2 *)(param_1 + 0x7c) = *(undefined2 *)(param_2 + 0xd0);
  param_1[0x7e] = *(rga2_req *)(param_2 + 0xd2);
  uVar14 = *(undefined8 *)(param_2 + 0xe4);
  uVar15 = *(undefined8 *)(param_2 + 0xec);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0xd4);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0x90) = uVar14;
  *(undefined8 *)(param_1 + 0x98) = uVar15;
  uVar5 = *(undefined2 *)(param_2 + 0xf6);
  uVar6 = *(undefined2 *)(param_2 + 0xf8);
  *(undefined2 *)(param_1 + 0xa0) = *(undefined2 *)(param_2 + 0xf4);
  *(undefined2 *)(param_1 + 0xa2) = uVar5;
  uVar10 = *(undefined4 *)(param_2 + 0xfc);
  uVar5 = *(undefined2 *)(param_2 + 0xfa);
  *(undefined2 *)(param_1 + 0xa4) = uVar6;
  uVar8 = *(undefined4 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0xa8) = uVar10;
  uVar10 = *(undefined4 *)(param_2 + 0x104);
  *(undefined4 *)(param_1 + 0xac) = uVar8;
  *(undefined2 *)(param_1 + 0xa6) = uVar5;
  *(undefined4 *)(param_1 + 0xb0) = uVar10;
  param_1[0xb4] = *(rga2_req *)(param_2 + 0x108);
  param_1[0xb5] = *(rga2_req *)(param_2 + 0x109);
  param_1[0xb6] = *(rga2_req *)(param_2 + 0x10a);
  param_1[0xb7] = *(rga2_req *)(param_2 + 0x10b);
  param_1[0xb8] = *(rga2_req *)(param_2 + 0x10c);
  param_1[0xb9] = *(rga2_req *)(param_2 + 0x10d);
  *(undefined2 *)(param_1 + 0xba) = *(undefined2 *)(param_2 + 0x10e);
  param_1[0xbc] = *(rga2_req *)(param_2 + 0x110);
  param_1[0xbd] = *(rga2_req *)(param_2 + 0x111);
  param_1[0xbe] = *(rga2_req *)(param_2 + 0x112);
  param_1[0xbf] = *(rga2_req *)(param_2 + 0x113);
  param_1[0xc0] = *(rga2_req *)(param_2 + 0x114);
  param_1[0xc1] = *(rga2_req *)(param_2 + 0x115);
  param_1[0xc4] = *(rga2_req *)(param_2 + 0x118);
  uVar8 = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 0x120);
  *(undefined4 *)(param_1 + 0xcc) = uVar8;
  param_1[0xd0] = *(rga2_req *)(param_2 + 0x130);
  param_1[0xd1] = *(rga2_req *)(param_2 + 0x131);
  param_1[0xd2] = *(rga2_req *)(param_2 + 0x132);
  param_1[0xd4] = *(rga2_req *)(param_2 + 0x134);
  uVar5 = *(undefined2 *)(param_2 + 0x138);
  uVar6 = *(undefined2 *)(param_2 + 0x13c);
  *(undefined2 *)(param_1 + 0xda) = *(undefined2 *)(param_2 + 0x13a);
  uVar8 = *(undefined4 *)(param_2 + 0x140);
  *(undefined2 *)(param_1 + 0xdc) = uVar6;
  uVar6 = *(undefined2 *)(param_2 + 0x144);
  *(undefined2 *)(param_1 + 0xd8) = uVar5;
  *(undefined4 *)(param_1 + 0xe0) = uVar8;
  *(undefined2 *)(param_1 + 0xe4) = uVar6;
  uVar5 = *(undefined2 *)(param_2 + 0x148);
  uVar10 = *(undefined4 *)(param_2 + 0x14c);
  uVar8 = *(undefined4 *)(param_2 + 0x158);
  *(undefined2 *)(param_1 + 0xe6) = *(undefined2 *)(param_2 + 0x146);
  uVar6 = *(undefined2 *)(param_2 + 0x150);
  *(undefined2 *)(param_1 + 0xe8) = uVar5;
  uVar5 = *(undefined2 *)(param_2 + 0x152);
  uVar7 = *(undefined2 *)(param_2 + 0x154);
  *(undefined4 *)(param_1 + 0xec) = uVar10;
  *(undefined2 *)(param_1 + 0xf0) = uVar6;
  *(undefined4 *)(param_1 + 0xf8) = uVar8;
  *(undefined2 *)(param_1 + 0xf2) = uVar5;
  *(undefined2 *)(param_1 + 0xf4) = uVar7;
  if (iVar13 == 0x10000) {
    if (iVar9 == 0) {
      *(short *)(param_1 + 0x38) = sVar2 + sVar3 + -1;
    }
    return;
  }
  if (iVar13 != 0) {
    if (iVar9 == 0 && iVar13 == -0x10000) {
      *(short *)(param_1 + 0x3a) = sVar1 + sVar4 + -1;
    }
    return;
  }
  if (iVar9 == -0x10000) {
    *(short *)(param_1 + 0x38) = sVar1 + sVar3 + -1;
    *(short *)(param_1 + 0x3a) = sVar2 + sVar4 + -1;
    return;
  }
  return;
}



/* ===== translate_format_str @ 0001d22c size=72 ===== */

/* translate_format_str(int) */

int translate_format_str(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = RkRgaGetRgaFormat(param_1);
  iVar2 = 0;
  do {
    if (*(int *)(DAT_0001d274 + 0x1d244 + iVar2 * 8) == iVar1) {
      return *(int *)(DAT_0001d274 + 0x1d244 + iVar2 * 8 + 4);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x34);
  return (int)&DAT_0001d274 + DAT_0001d278;
}



/* ===== get_string_by_format @ 0001d27c size=104 ===== */

/* get_string_by_format(char*, int) */

undefined4 get_string_by_format(char *param_1,int param_2)

{
  char *__s1;
  int iVar1;
  size_t sVar2;
  
  if (param_1 == (char *)0x0) {
    return 0xffffffea;
  }
  __s1 = (char *)translate_format_str(param_2);
  iVar1 = strcmp(__s1,(char *)(DAT_0001d2e4 + 0x1d29c));
  if (iVar1 != 0) {
    sVar2 = strlen(__s1);
    memcpy(param_1,__s1,sVar2 + 1);
    return 0;
  }
  printf((char *)(DAT_0001d2e8 + 0x1d2d4));
  return 0xffffffea;
}



/* ===== get_bpp_from_format @ 0001d2ec size=616 ===== */

/* get_bpp_from_format(int) */

undefined4 get_bpp_from_format(int param_1)

{
  if ((param_1 & 0xff00U) == 0) {
    if (param_1 == 0) {
      return 0x40800000;
    }
    param_1 = RkRgaCompatibleFormat(param_1);
  }
  if (param_1 != 0x1800) {
    if (param_1 < 0x1801) {
      if (param_1 == 0xb00) {
        return 0x3fc00000;
      }
      if (param_1 < 0xb01) {
        if (param_1 == 0x500) {
          return 0x40000000;
        }
        if (param_1 < 0x501) {
          if (param_1 == 0x200) {
            return 0x40400000;
          }
          if (param_1 < 0x201) {
            if (param_1 == 0) {
              return 0x40800000;
            }
            if (param_1 == 0x100) {
              return 0x40800000;
            }
          }
          else {
            if (param_1 == 0x300) {
              return 0x40800000;
            }
            if (param_1 == 0x400) {
              return 0x40000000;
            }
          }
        }
        else {
          if (param_1 == 0x800) {
            return 0x40000000;
          }
          if (param_1 < 0x801) {
            if (param_1 == 0x600) {
              return 0x40000000;
            }
            if (param_1 == 0x700) {
              return 0x40400000;
            }
          }
          else {
            if (param_1 == 0x900) {
              return 0x40000000;
            }
            if (param_1 == 0xa00) {
              return 0x3fc00000;
            }
          }
        }
      }
      else {
        if (param_1 == 0x1100) {
          return 0x3f800000;
        }
        if (param_1 < 0x1101) {
          if (param_1 == 0xe00) {
            return 0x3fc00000;
          }
          if (param_1 < 0xe01) {
            if (param_1 == 0xc00) {
              return 0x40000000;
            }
            if (param_1 == 0xd00) {
              return 0x40000000;
            }
          }
          else {
            if (param_1 == 0xf00) {
              return 0x3fc00000;
            }
            if (param_1 == 0x1000) {
              return 0x3f800000;
            }
          }
        }
        else {
          if (param_1 == 0x1400) {
            return 0x3f000000;
          }
          if (param_1 < 0x1401) {
            if ((param_1 == 0x1200) || (param_1 == 0x1300)) {
              return 0x3f800000;
            }
          }
          else {
            if (param_1 == 0x1500) {
              return 0x3f800000;
            }
            if (param_1 == 0x1600) {
              return 0x40800000;
            }
          }
        }
      }
      goto LAB_0001d4a0;
    }
    if (param_1 != 0x2400) {
      if (param_1 < 0x2401) {
        if (param_1 != 0x1e00) {
          if (param_1 < 0x1e01) {
            if (param_1 != 0x1b00) {
              if (param_1 < 0x1b01) {
                if (param_1 != 0x1900) {
                  if (param_1 == 0x1a00) {
                    return 0x40000000;
                  }
LAB_0001d4a0:
                  puts((char *)(DAT_0001d558 + 0x1d4ac));
                  return DAT_0001d554;
                }
              }
              else if (param_1 != 0x1c00) {
                if (param_1 == 0x1d00) {
                  return 0x40000000;
                }
                goto LAB_0001d4a0;
              }
            }
          }
          else if (param_1 != 0x2100) {
            if (param_1 < 0x2101) {
              if (param_1 == 0x1f00) {
                return 0x40000000;
              }
              if (param_1 == 0x2000) {
                return 0x40000000;
              }
            }
            else if ((param_1 == 0x2200) || (param_1 == 0x2300)) {
              return 0x40200000;
            }
            goto LAB_0001d4a0;
          }
        }
      }
      else if (param_1 != 0x2b00) {
        if (param_1 < 0x2b01) {
          if (param_1 == 0x2800) {
            return 0x40800000;
          }
          if (param_1 < 0x2801) {
            if (param_1 == 0x2500) {
              return 0x40000000;
            }
            if (param_1 == 0x2600) {
              return 0x40000000;
            }
          }
          else {
            if (param_1 == 0x2900) {
              return 0x40800000;
            }
            if (param_1 == 0x2a00) {
              return 0x40000000;
            }
          }
        }
        else {
          if (param_1 == 0x2e00) {
            return 0x40000000;
          }
          if (param_1 < 0x2e01) {
            if (param_1 == 0x2c00) {
              return 0x40800000;
            }
            if (param_1 == 0x2d00) {
              return 0x40800000;
            }
          }
          else {
            if (param_1 == 0x2f00) {
              return 0x40000000;
            }
            if (param_1 == 0x3000) {
              return 0x3e800000;
            }
          }
        }
        goto LAB_0001d4a0;
      }
    }
  }
  return 0x40000000;
}



/* ===== get_perPixel_stride_from_format @ 0001d55c size=600 ===== */

/* get_perPixel_stride_from_format(int) */

undefined4 get_perPixel_stride_from_format(int param_1)

{
  if ((param_1 & 0xff00U) == 0) {
    if (param_1 == 0) {
      return 0x20;
    }
    param_1 = RkRgaCompatibleFormat(param_1);
  }
  if (param_1 != 0x1800) {
    if (param_1 < 0x1801) {
      if (param_1 == 0xb00) {
        return 8;
      }
      if (param_1 < 0xb01) {
        if (param_1 == 0x500) {
          return 0x10;
        }
        if (param_1 < 0x501) {
          if (param_1 == 0x200) {
            return 0x18;
          }
          if (param_1 < 0x201) {
            if (param_1 == 0) {
              return 0x20;
            }
            if (param_1 == 0x100) {
              return 0x20;
            }
          }
          else {
            if (param_1 == 0x300) {
              return 0x20;
            }
            if (param_1 == 0x400) {
              return 0x10;
            }
          }
        }
        else {
          if (param_1 == 0x800) {
            return 8;
          }
          if (param_1 < 0x801) {
            if (param_1 == 0x600) {
              return 0x10;
            }
            if (param_1 == 0x700) {
              return 0x18;
            }
          }
          else {
            if (param_1 == 0x900) {
              return 8;
            }
            if (param_1 == 0xa00) {
              return 8;
            }
          }
        }
      }
      else {
        if (param_1 == 0x1100) {
          return 8;
        }
        if (param_1 < 0x1101) {
          if (param_1 == 0xe00) {
            return 8;
          }
          if (param_1 < 0xe01) {
            if (param_1 == 0xc00) {
              return 8;
            }
            if (param_1 == 0xd00) {
              return 8;
            }
          }
          else {
            if (param_1 == 0xf00) {
              return 8;
            }
            if (param_1 == 0x1000) {
              return 8;
            }
          }
        }
        else {
          if (param_1 == 0x1400) {
            return 4;
          }
          if (param_1 < 0x1401) {
            if (param_1 == 0x1200) {
              return 8;
            }
            if (param_1 == 0x1300) {
              return 8;
            }
          }
          else {
            if (param_1 == 0x1500) {
              return 8;
            }
            if (param_1 == 0x1600) {
              return 0x20;
            }
          }
        }
      }
      goto LAB_0001d6e0;
    }
    if (param_1 != 0x2400) {
      if (param_1 < 0x2401) {
        if (param_1 != 0x1e00) {
          if (0x1e00 < param_1) {
            if (param_1 == 0x2100) {
              return 10;
            }
            if (param_1 < 0x2101) {
              if (param_1 == 0x1f00) {
                return 0x10;
              }
              if (param_1 == 0x2000) {
                return 10;
              }
            }
            else {
              if (param_1 == 0x2200) {
                return 10;
              }
              if (param_1 == 0x2300) {
                return 10;
              }
            }
            goto LAB_0001d6e0;
          }
          if (param_1 != 0x1b00) {
            if (param_1 < 0x1b01) {
              if ((param_1 != 0x1900) && (param_1 != 0x1a00)) goto LAB_0001d6e0;
            }
            else if ((param_1 != 0x1c00) && (param_1 != 0x1d00)) goto LAB_0001d6e0;
          }
        }
      }
      else if (param_1 != 0x2b00) {
        if (param_1 < 0x2b01) {
          if (param_1 == 0x2800) {
            return 0x20;
          }
          if (param_1 < 0x2801) {
            if ((param_1 != 0x2500) && (param_1 != 0x2600)) {
LAB_0001d6e0:
              puts((char *)(DAT_0001d7b4 + 0x1d6ec));
              return 0;
            }
          }
          else {
            if (param_1 == 0x2900) {
              return 0x20;
            }
            if (param_1 != 0x2a00) goto LAB_0001d6e0;
          }
        }
        else if (param_1 != 0x2e00) {
          if (param_1 < 0x2e01) {
            if (param_1 == 0x2c00) {
              return 0x20;
            }
            if (param_1 == 0x2d00) {
              return 0x20;
            }
          }
          else {
            if (param_1 == 0x2f00) {
              return 0x10;
            }
            if (param_1 == 0x3000) {
              return 2;
            }
          }
          goto LAB_0001d6e0;
        }
      }
    }
  }
  return 0x10;
}



/* ===== get_buf_size_by_w_h_f @ 0001d7b8 size=48 ===== */

/* get_buf_size_by_w_h_f(int, int, int) */

int get_buf_size_by_w_h_f(int param_1,int param_2,int param_3)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  
  fVar1 = (float)get_bpp_from_format(param_3);
  fVar2 = (float)VectorSignedToFloat(param_2 * param_1,(byte)(in_fpscr >> 0x16) & 3);
  return (int)(fVar2 * fVar1);
}



/* ===== get_buf_from_file @ 0001d7e8 size=196 ===== */

/* get_buf_from_file(void*, int, int, int, int) */

undefined4 get_buf_from_file(void *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  FILE *__stream;
  size_t __size;
  int iVar2;
  char acStack_84 [100];
  
  uVar1 = translate_format_str(param_2);
  iVar2 = DAT_0001d8b0 + 0x1d830;
  snprintf(acStack_84,100,(char *)(DAT_0001d8ac + 0x1d820),param_5,param_3,param_4,uVar1);
  __stream = fopen64(acStack_84,(char *)(DAT_0001d8b4 + 0x1d848));
  if (__stream == (FILE *)0x0) {
    fprintf((FILE *)**(undefined4 **)(iVar2 + DAT_0001d8b8),(char *)(DAT_0001d8bc + 0x1d8a0),
            acStack_84);
    uVar1 = 0xffffffea;
  }
  else {
    __size = get_buf_size_by_w_h_f(param_3,param_4,param_2);
    fread(param_1,__size,1,__stream);
    fclose(__stream);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== get_buf_from_file_FBC @ 0001d8c0 size=220 ===== */

/* get_buf_from_file_FBC(void*, int, int, int, int) */

undefined4 get_buf_from_file_FBC(void *param_1,int param_2,int param_3,int param_4,int param_5)

{
  FILE *__stream;
  undefined4 uVar1;
  uint in_fpscr;
  double dVar2;
  char acStack_a4 [32];
  char acStack_84 [104];
  
  get_string_by_format(acStack_a4,param_2);
  snprintf(acStack_84,100,(char *)(DAT_0001d99c + 0x1d904),param_5,param_3,param_4,acStack_a4);
  __stream = fopen64(acStack_84,(char *)(DAT_0001d9a0 + 0x1d91c));
  if (__stream == (FILE *)0x0) {
    fprintf((FILE *)**(undefined4 **)(DAT_0001d9a4 + 0x1d928 + DAT_0001d9a8),
            (char *)(DAT_0001d9ac + 0x1d990),acStack_84);
    uVar1 = 0xffffffea;
  }
  else {
    uVar1 = get_buf_size_by_w_h_f(param_3,param_4,param_2);
    dVar2 = (double)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
    fread(param_1,(uint)(0.0 < dVar2 * 1.5) * (int)(longlong)(dVar2 * 1.5),1,__stream);
    fclose(__stream);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== output_buf_data_to_file @ 0001d9b0 size=220 ===== */

/* output_buf_data_to_file(void*, int, int, int, int) */

undefined4 output_buf_data_to_file(void *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  FILE *__s;
  size_t __size;
  int iVar2;
  char acStack_84 [100];
  
  uVar1 = translate_format_str(param_2);
  iVar2 = DAT_0001da90 + 0x1d9f8;
  snprintf(acStack_84,100,(char *)(DAT_0001da8c + 0x1d9e8),param_5,param_3,param_4,uVar1);
  __s = fopen64(acStack_84,(char *)(DAT_0001da94 + 0x1da10));
  if (__s != (FILE *)0x0) {
    fprintf((FILE *)**(undefined4 **)(iVar2 + DAT_0001da98),(char *)(DAT_0001da9c + 0x1da34),
            acStack_84);
    __size = get_buf_size_by_w_h_f(param_3,param_4,param_2);
    fwrite(param_1,__size,1,__s);
    fclose(__s);
    return 0;
  }
  fprintf((FILE *)**(undefined4 **)(iVar2 + DAT_0001da98),(char *)(DAT_0001daa0 + 0x1da80),
          acStack_84);
  return 0;
}



/* ===== output_buf_data_to_file_FBC @ 0001daa4 size=244 ===== */

/* output_buf_data_to_file_FBC(void*, int, int, int, int) */

undefined4
output_buf_data_to_file_FBC(void *param_1,int param_2,int param_3,int param_4,int param_5)

{
  FILE *__s;
  undefined4 uVar1;
  uint in_fpscr;
  double dVar2;
  char acStack_a4 [32];
  char acStack_84 [104];
  
  get_string_by_format(acStack_a4,param_2);
  snprintf(acStack_84,100,(char *)(DAT_0001db98 + 0x1dae4),param_5,param_3,param_4,acStack_a4);
  __s = fopen64(acStack_84,(char *)(DAT_0001db9c + 0x1db00));
  if (__s != (FILE *)0x0) {
    fprintf((FILE *)**(undefined4 **)(DAT_0001dba0 + 0x1db14 + DAT_0001dba4),
            (char *)(DAT_0001dba8 + 0x1db2c),acStack_84);
    uVar1 = get_buf_size_by_w_h_f(param_3,param_4,param_2);
    dVar2 = (double)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
    fwrite(param_1,(uint)(0.0 < dVar2 * 1.5) * (int)(longlong)(dVar2 * 1.5),1,__s);
    fclose(__s);
    return 0;
  }
  fprintf((FILE *)**(undefined4 **)(DAT_0001dba0 + 0x1db14 + DAT_0001dba4),
          (char *)(DAT_0001dbac + 0x1db8c),acStack_84);
  return 0;
}



/* ===== c_RkRgaInit @ 0001dbb0 size=8 ===== */

undefined4 c_RkRgaInit(void)

{
  return 0;
}



/* ===== c_RkRgaDeInit @ 0001dbb8 size=4 ===== */

void c_RkRgaDeInit(void)

{
  return;
}



/* ===== c_RkRgaGetContext @ 0001dbbc size=112 ===== */

void c_RkRgaGetContext(undefined4 param_1)

{
  int iVar1;
  RockchipRga *this;
  pthread_mutex_t *__mutex;
  undefined4 *puVar2;
  
  iVar1 = DAT_0001dc20 + 0x1dbd4;
  __mutex = *(pthread_mutex_t **)(iVar1 + DAT_0001dc24);
  pthread_mutex_lock(__mutex);
  puVar2 = *(undefined4 **)(iVar1 + DAT_0001dc28);
  this = (RockchipRga *)*puVar2;
  if (this == (RockchipRga *)0x0) {
    this = operator_new(0x10);
    RockchipRga::RockchipRga(this);
    *puVar2 = this;
  }
  pthread_mutex_unlock(__mutex);
                    /* WARNING: Could not recover jumptable at 0x00016554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_RkRgaGetContext_00046280)(this,param_1);
  return;
}



/* ===== c_RkRgaBlit @ 0001dc2c size=116 ===== */

void c_RkRgaBlit(rga_info *param_1,rga_info *param_2,rga_info *param_3)

{
  int iVar1;
  RockchipRga *this;
  pthread_mutex_t *__mutex;
  int *piVar2;
  
  iVar1 = DAT_0001dca0 + 0x1dc4c;
  __mutex = *(pthread_mutex_t **)(iVar1 + DAT_0001dca4);
  pthread_mutex_lock(__mutex);
  piVar2 = *(int **)(iVar1 + DAT_0001dca8);
  this = (RockchipRga *)*piVar2;
  if (this == (RockchipRga *)0x0) {
    this = operator_new(0x10);
    RockchipRga::RockchipRga(this);
    *piVar2 = (int)this;
  }
  pthread_mutex_unlock(__mutex);
  RockchipRga::RkRgaBlit(this,param_1,param_2,param_3);
  return;
}



/* ===== c_RkRgaColorFill @ 0001dcac size=100 ===== */

void c_RkRgaColorFill(rga_info *param_1)

{
  int iVar1;
  RockchipRga *this;
  pthread_mutex_t *__mutex;
  int *piVar2;
  
  iVar1 = DAT_0001dd10 + 0x1dcc4;
  __mutex = *(pthread_mutex_t **)(iVar1 + DAT_0001dd14);
  pthread_mutex_lock(__mutex);
  piVar2 = *(int **)(iVar1 + DAT_0001dd18);
  this = (RockchipRga *)*piVar2;
  if (this == (RockchipRga *)0x0) {
    this = operator_new(0x10);
    RockchipRga::RockchipRga(this);
    *piVar2 = (int)this;
  }
  pthread_mutex_unlock(__mutex);
  RockchipRga::RkRgaCollorFill(this,param_1);
  return;
}



/* ===== c_RkRgaFlush @ 0001dd1c size=104 ===== */

void c_RkRgaFlush(void)

{
  int iVar1;
  RockchipRga *this;
  pthread_mutex_t *__mutex;
  undefined4 *puVar2;
  
  iVar1 = DAT_0001dd78 + 0x1dd30;
  __mutex = *(pthread_mutex_t **)(iVar1 + DAT_0001dd7c);
  pthread_mutex_lock(__mutex);
  puVar2 = *(undefined4 **)(iVar1 + DAT_0001dd80);
  this = (RockchipRga *)*puVar2;
  if (this == (RockchipRga *)0x0) {
    this = operator_new(0x10);
    RockchipRga::RockchipRga(this);
    *puVar2 = this;
  }
  pthread_mutex_unlock(__mutex);
                    /* WARNING: Could not recover jumptable at 0x00016788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_RkRgaFlush_0004633c)(this);
  return;
}



/* ===== c_RkRgaGetAllocBuffer @ 0001dd84 size=132 ===== */

void c_RkRgaGetAllocBuffer(bo *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  RockchipRga *this;
  pthread_mutex_t *__mutex;
  int *piVar2;
  
  iVar1 = DAT_0001de08 + 0x1dda4;
  __mutex = *(pthread_mutex_t **)(iVar1 + DAT_0001de0c);
  pthread_mutex_lock(__mutex);
  piVar2 = *(int **)(iVar1 + DAT_0001de10);
  this = (RockchipRga *)*piVar2;
  if (this == (RockchipRga *)0x0) {
    this = operator_new(0x10);
    RockchipRga::RockchipRga(this);
    *piVar2 = (int)this;
  }
  pthread_mutex_unlock(__mutex);
  RockchipRga::RkRgaGetAllocBuffer(this,param_1,param_2,param_3,param_4);
  return;
}



/* ===== c_RkRgaGetAllocBufferCache @ 0001de14 size=132 ===== */

void c_RkRgaGetAllocBufferCache(bo *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  RockchipRga *this;
  pthread_mutex_t *__mutex;
  int *piVar2;
  
  iVar1 = DAT_0001de98 + 0x1de34;
  __mutex = *(pthread_mutex_t **)(iVar1 + DAT_0001de9c);
  pthread_mutex_lock(__mutex);
  piVar2 = *(int **)(iVar1 + DAT_0001dea0);
  this = (RockchipRga *)*piVar2;
  if (this == (RockchipRga *)0x0) {
    this = operator_new(0x10);
    RockchipRga::RockchipRga(this);
    *piVar2 = (int)this;
  }
  pthread_mutex_unlock(__mutex);
  RockchipRga::RkRgaGetAllocBufferCache(this,param_1,param_2,param_3,param_4);
  return;
}



/* ===== c_RkRgaGetMmap @ 0001dea4 size=112 ===== */

void c_RkRgaGetMmap(undefined4 param_1)

{
  int iVar1;
  RockchipRga *this;
  pthread_mutex_t *__mutex;
  undefined4 *puVar2;
  
  iVar1 = DAT_0001df08 + 0x1debc;
  __mutex = *(pthread_mutex_t **)(iVar1 + DAT_0001df0c);
  pthread_mutex_lock(__mutex);
  puVar2 = *(undefined4 **)(iVar1 + DAT_0001df10);
  this = (RockchipRga *)*puVar2;
  if (this == (RockchipRga *)0x0) {
    this = operator_new(0x10);
    RockchipRga::RockchipRga(this);
    *puVar2 = this;
  }
  pthread_mutex_unlock(__mutex);
                    /* WARNING: Could not recover jumptable at 0x00016278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_RkRgaGetMmap_0004618c)(this,param_1);
  return;
}



/* ===== c_RkRgaUnmap @ 0001df14 size=112 ===== */

void c_RkRgaUnmap(undefined4 param_1)

{
  int iVar1;
  RockchipRga *this;
  pthread_mutex_t *__mutex;
  undefined4 *puVar2;
  
  iVar1 = DAT_0001df78 + 0x1df2c;
  __mutex = *(pthread_mutex_t **)(iVar1 + DAT_0001df7c);
  pthread_mutex_lock(__mutex);
  puVar2 = *(undefined4 **)(iVar1 + DAT_0001df80);
  this = (RockchipRga *)*puVar2;
  if (this == (RockchipRga *)0x0) {
    this = operator_new(0x10);
    RockchipRga::RockchipRga(this);
    *puVar2 = this;
  }
  pthread_mutex_unlock(__mutex);
                    /* WARNING: Could not recover jumptable at 0x00016170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_RkRgaUnmap_00046134)(this,param_1);
  return;
}



/* ===== c_RkRgaFree @ 0001df84 size=112 ===== */

void c_RkRgaFree(undefined4 param_1)

{
  int iVar1;
  RockchipRga *this;
  pthread_mutex_t *__mutex;
  undefined4 *puVar2;
  
  iVar1 = DAT_0001dfe8 + 0x1df9c;
  __mutex = *(pthread_mutex_t **)(iVar1 + DAT_0001dfec);
  pthread_mutex_lock(__mutex);
  puVar2 = *(undefined4 **)(iVar1 + DAT_0001dff0);
  this = (RockchipRga *)*puVar2;
  if (this == (RockchipRga *)0x0) {
    this = operator_new(0x10);
    RockchipRga::RockchipRga(this);
    *puVar2 = this;
  }
  pthread_mutex_unlock(__mutex);
                    /* WARNING: Could not recover jumptable at 0x000164a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_RkRgaFree_00046244)(this,param_1);
  return;
}



/* ===== c_RkRgaGetBufferFd @ 0001dff4 size=120 ===== */

void c_RkRgaGetBufferFd(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  RockchipRga *this;
  pthread_mutex_t *__mutex;
  undefined4 *puVar2;
  
  iVar1 = DAT_0001e060 + 0x1e010;
  __mutex = *(pthread_mutex_t **)(iVar1 + DAT_0001e064);
  pthread_mutex_lock(__mutex);
  puVar2 = *(undefined4 **)(iVar1 + DAT_0001e068);
  this = (RockchipRga *)*puVar2;
  if (this == (RockchipRga *)0x0) {
    this = operator_new(0x10);
    RockchipRga::RockchipRga(this);
    *puVar2 = this;
  }
  pthread_mutex_unlock(__mutex);
                    /* WARNING: Could not recover jumptable at 0x000166b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_RkRgaGetBufferFd_000462f4)(this,param_1,param_2);
  return;
}



/* ===== rga_sync_wait @ 0001e06c size=168 ===== */

/* rga_sync_wait(int, int) */

uint rga_sync_wait(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  pollfd local_18;
  
  if (-1 < param_1) {
    local_18.events = 1;
    local_18.fd = param_1;
    while( true ) {
      uVar1 = poll(&local_18,1,param_2);
      if (0 < (int)uVar1) break;
      if (uVar1 == 0) {
        piVar2 = __errno_location();
        *piVar2 = 0x3e;
        return 0xffffffff;
      }
      if (uVar1 != 0xffffffff) {
        return uVar1;
      }
      piVar2 = __errno_location();
      if (*piVar2 != 0xb && *piVar2 != 4) {
        return 0xffffffff;
      }
    }
    if ((local_18.revents & 0x28U) == 0) {
      return (ushort)local_18.revents & 0x28;
    }
  }
  piVar2 = __errno_location();
  *piVar2 = 0x16;
  return 0xffffffff;
}



/* ===== rga_sync_merge @ 0001e114 size=348 ===== */

/* rga_sync_merge(char const*, int, int) */

uint rga_sync_merge(char *param_1,int param_2,int param_3)

{
  uint uVar1;
  size_t sVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint *puVar6;
  int local_50;
  undefined1 auStack_4c [28];
  int local_30;
  uint local_2c;
  undefined8 local_28;
  
  puVar6 = (uint *)(DAT_0001e270 + 0x1e134);
  uVar5 = *puVar6;
  DataMemoryBarrier(0xb);
  if (uVar5 < 2) {
    local_30 = param_3;
    sVar2 = strlen(param_1);
    if (0x1e < sVar2) {
      sVar2 = 0x1f;
    }
    memcpy(&local_50,param_1,sVar2);
    auStack_4c[sVar2 - 4] = 0;
    local_28 = 0;
    uVar3 = ioctl(param_2,0xc0303e03,&local_50);
    if ((-1 < (int)uVar3) && (uVar3 = local_2c, -1 < (int)local_2c)) {
      if (uVar5 != 0) {
        return local_2c;
      }
      DataMemoryBarrier(0xb);
      *puVar6 = 1;
      return local_2c;
    }
    piVar4 = __errno_location();
    if (*piVar4 != 0x19) {
      return uVar3;
    }
  }
  local_50 = param_3;
  sVar2 = strlen(param_1);
  if (0x1e < sVar2) {
    sVar2 = 0x1f;
  }
  memcpy(auStack_4c,param_1,sVar2);
  auStack_4c[sVar2] = 0;
  uVar3 = ioctl(param_2,0xc0283e01,&local_50);
  if (-1 < (int)uVar3) {
    uVar1 = local_2c;
    if (-1 < (int)local_2c) {
      uVar1 = uVar5;
    }
    uVar3 = local_2c;
    if (uVar1 == 0) {
      DataMemoryBarrier(0xb);
      *(undefined4 *)(DAT_0001e274 + 0x1e1cc) = 2;
      return local_2c;
    }
  }
  return uVar3;
}



/* ===== rga_error_msg_set @ 0001e278 size=64 ===== */

/* rga_error_msg_set(char const*, ...) */

void rga_error_msg_set(char *param_1,...)

{
  char *__s;
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = in_r1;
  uStack_8 = in_r2;
  uStack_4 = in_r3;
  __s = (char *)__tls_get_addr(DAT_0001e2b8 + 0x1e294);
  vsnprintf(__s,0x200,param_1,&uStack_c);
  return;
}



/* ===== rga_log_level_get @ 0001e2bc size=24 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* rga_log_level_get() */

undefined4 rga_log_level_get(void)

{
  DataMemoryBarrier(0xb);
  DataMemoryBarrier(0xb);
  return *(undefined4 *)(DAT_0001e2d4 + 0x1e2cc);
}



/* ===== rga_log_level_init @ 0001e2d8 size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* rga_log_level_init() */

void rga_log_level_init(void)

{
  (*(code *)PTR_rga_log_level_get_00046308)();
  return;
}



/* ===== rga_log_level_update @ 0001e2dc size=32 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* rga_log_level_update() */

void rga_log_level_update(void)

{
  undefined4 uVar1;
  
  uVar1 = rga_log_level_get();
  DataMemoryBarrier(0xb);
  *(undefined4 *)(DAT_0001e2fc + 0x1e2f4) = uVar1;
  DataMemoryBarrier(0xb);
  return;
}



/* ===== rga_log_enable_get @ 0001e300 size=24 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* rga_log_enable_get() */

undefined4 rga_log_enable_get(void)

{
  DataMemoryBarrier(0xb);
  DataMemoryBarrier(0xb);
  return *(undefined4 *)(DAT_0001e318 + 0x1e310);
}



/* ===== rga_get_current_time_ms @ 0001e31c size=64 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* rga_get_current_time_ms() */

int rga_get_current_time_ms(void)

{
  timeval local_10;
  
  gettimeofday(&local_10,(__timezone_ptr_t)0x0);
  return local_10.tv_sec * 1000 + local_10.tv_usec / 1000;
}



/* ===== rga_get_start_time_ms @ 0001e35c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* rga_get_start_time_ms() */

undefined4 rga_get_start_time_ms(void)

{
  return *(undefined4 *)((int)&DAT_0001e368 + DAT_0001e368);
}



/* ===== FUN_0001e374 @ 0001e374 size=148 ===== */

undefined4 FUN_0001e374(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  FILE *__stream;
  
  rga_error_msg_set((char *)(DAT_0001e408 + 0x1e3a0),param_1 + 0xc,param_2 + 0xc,param_3 + 0x28);
  iVar2 = DAT_0001e40c;
  iVar1 = rga_log_enable_get();
  if (0 < iVar1) {
    rga_log_level_get();
  }
  __stream = (FILE *)**(undefined4 **)(iVar2 + 0x1e3b0 + DAT_0001e410);
  iVar2 = rga_get_current_time_ms();
  iVar1 = rga_get_start_time_ms();
  fprintf(__stream,(char *)(DAT_0001e414 + 0x1e3e8),iVar2 - iVar1,DAT_0001e418 + 0x1e3f4,0x10f,
          param_1 + 0xc,param_2 + 0xc,param_3 + 0x28);
  return 0xfffffffb;
}



/* ===== FUN_0001e41c @ 0001e41c size=148 ===== */

undefined4 FUN_0001e41c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  FILE *__stream;
  
  rga_error_msg_set((char *)(DAT_0001e4b0 + 0x1e448),param_2 + 0xc,param_1 + 0xc,param_3 + 0xc);
  iVar2 = DAT_0001e4b4;
  iVar1 = rga_log_enable_get();
  if (0 < iVar1) {
    rga_log_level_get();
  }
  __stream = (FILE *)**(undefined4 **)(iVar2 + 0x1e458 + DAT_0001e4b8);
  iVar2 = rga_get_current_time_ms();
  iVar1 = rga_get_start_time_ms();
  fprintf(__stream,(char *)(DAT_0001e4bc + 0x1e490),iVar2 - iVar1,DAT_0001e4c0 + 0x1e49c,0x104,
          param_2 + 0xc,param_1 + 0xc,param_3 + 0xc);
  return 0xfffffffb;
}



/* ===== FUN_0001e884 @ 0001e884 size=304 ===== */

undefined4
FUN_0001e884(undefined4 param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6,
            uint param_7,uint param_8,uint param_9,uint param_10)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  FILE *__stream;
  
  iVar3 = DAT_0001e9b4 + 0x1e8a0;
  if (((param_7 | param_8 | param_9 | param_10 | param_5 | param_4 | param_3 | param_2) & 1) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = translate_format_str(param_6);
    rga_error_msg_set((char *)(DAT_0001e9b8 + 0x1e920),param_1,param_7,param_8,param_2,param_3,
                      param_4,param_5,param_6,uVar1);
    iVar2 = rga_log_enable_get();
    if ((0 < iVar2) && (iVar2 = rga_log_level_get(), iVar2 < 6)) {
      __stream = (FILE *)**(undefined4 **)(iVar3 + DAT_0001e9bc);
      iVar3 = rga_get_current_time_ms();
      iVar2 = rga_get_start_time_ms();
      uVar1 = translate_format_str(param_6);
      fprintf(__stream,(char *)(DAT_0001e9c0 + 0x1e98c),iVar3 - iVar2,DAT_0001e9c4 + 0x1e99c,0x180,
              param_1,param_7,param_8,param_2,param_3,param_4,param_5,param_6,uVar1);
    }
    uVar1 = 0xfffffffd;
  }
  return uVar1;
}



/* ===== FUN_0001e9c8 @ 0001e9c8 size=272 ===== */

void FUN_0001e9c8(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  FILE *__stream;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  iVar1 = rga_log_enable_get();
  iVar7 = DAT_0001ead8 + 0x1e9ec;
  if (0 < iVar1) {
    rga_log_level_get();
  }
  __stream = (FILE *)**(undefined4 **)(iVar7 + DAT_0001eadc);
  iVar1 = rga_get_current_time_ms();
  iVar7 = rga_get_start_time_ms();
  uVar5 = param_2[3];
  uVar3 = param_3[3];
  uVar4 = param_3[5];
  uVar6 = param_3[4];
  uVar9 = *param_2;
  uVar10 = param_2[1];
  uVar11 = param_2[2];
  uVar8 = param_3[6];
  uVar2 = translate_format_str(param_3[7]);
  fprintf(__stream,(char *)(DAT_0001eae0 + 0x1ea70),iVar1 - iVar7,DAT_0001eae4 + 0x1eaa8,0x594,
          param_1,uVar9,uVar10,uVar11,uVar5,uVar3,uVar6,uVar4,uVar8,uVar2,param_3[0x15],param_3[2],
          *param_3,param_3[1],param_3[8],param_3[9],param_3[10]);
  return;
}



/* ===== FUN_0001eae8 @ 0001eae8 size=656 ===== */

_Rb_tree_node_base * FUN_0001eae8(int param_1,_Rb_tree_node_base *param_2,undefined4 *param_3)

{
  bool bVar1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *p_Var4;
  uint uVar5;
  _Rb_tree_node_base *p_Var6;
  uint uVar7;
  _Rb_tree_node_base *p_Var8;
  _Rb_tree_node_base *p_Var9;
  bool bVar10;
  
  p_Var2 = operator_new(0x18);
  p_Var9 = (_Rb_tree_node_base *)(param_1 + 4);
  uVar7 = *(uint *)*param_3;
  *(undefined4 *)(p_Var2 + 0x14) = 0;
  *(uint *)(p_Var2 + 0x10) = uVar7;
  if (p_Var9 == param_2) {
    if ((*(int *)(param_1 + 0x14) == 0) ||
       (p_Var3 = *(_Rb_tree_node_base **)(param_1 + 0x10), uVar7 <= *(uint *)(p_Var3 + 0x10))) {
      p_Var3 = *(_Rb_tree_node_base **)(param_1 + 8);
      if (*(_Rb_tree_node_base **)(param_1 + 8) == (_Rb_tree_node_base *)0x0) {
LAB_0001ecd8:
        p_Var4 = param_2;
        if (*(_Rb_tree_node_base **)(param_1 + 0xc) == param_2) goto LAB_0001ecc4;
        p_Var3 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_2);
        uVar5 = *(uint *)(p_Var3 + 0x10);
        p_Var6 = param_2;
      }
      else {
        do {
          param_2 = p_Var3;
          uVar5 = *(uint *)(param_2 + 0x10);
          if (uVar7 < uVar5) {
            p_Var3 = *(_Rb_tree_node_base **)(param_2 + 8);
          }
          else {
            p_Var3 = *(_Rb_tree_node_base **)(param_2 + 0xc);
          }
        } while (p_Var3 != (_Rb_tree_node_base *)0x0);
        p_Var3 = param_2;
        p_Var6 = param_2;
        if (uVar7 < uVar5) goto LAB_0001ecd8;
      }
joined_r0x0001ec5c:
      param_2 = p_Var3;
      p_Var4 = p_Var6;
      if (uVar7 <= uVar5) goto LAB_0001ec64;
LAB_0001ecc4:
      if (p_Var4 == (_Rb_tree_node_base *)0x0) {
        param_2 = (_Rb_tree_node_base *)0x0;
LAB_0001ec64:
        operator_delete(p_Var2);
        return param_2;
      }
      p_Var8 = (_Rb_tree_node_base *)0x0;
      goto LAB_0001eb6c;
    }
LAB_0001ec74:
    bVar1 = false;
LAB_0001eb74:
    if (p_Var9 == p_Var3) {
      bVar1 = true;
    }
    bVar10 = true;
    p_Var4 = p_Var3;
    if (bVar1) goto LAB_0001eb88;
  }
  else {
    p_Var6 = p_Var9;
    if (uVar7 < *(uint *)(param_2 + 0x10)) {
      p_Var8 = *(_Rb_tree_node_base **)(param_1 + 0xc);
      p_Var4 = p_Var8;
      if (p_Var8 != param_2) {
        p_Var3 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_2);
        if (uVar7 <= *(uint *)(p_Var3 + 0x10)) {
          p_Var3 = *(_Rb_tree_node_base **)(param_1 + 8);
          if (*(_Rb_tree_node_base **)(param_1 + 8) != (_Rb_tree_node_base *)0x0) {
            do {
              p_Var6 = p_Var3;
              uVar5 = *(uint *)(p_Var6 + 0x10);
              if (uVar7 < uVar5) {
                p_Var3 = *(_Rb_tree_node_base **)(p_Var6 + 8);
              }
              else {
                p_Var3 = *(_Rb_tree_node_base **)(p_Var6 + 0xc);
              }
            } while (p_Var3 != (_Rb_tree_node_base *)0x0);
            p_Var3 = p_Var6;
            if (uVar7 >= uVar5) goto joined_r0x0001ec5c;
          }
          if (p_Var8 != p_Var6) {
LAB_0001ed00:
            p_Var3 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var6);
            uVar5 = *(uint *)(p_Var3 + 0x10);
            goto joined_r0x0001ec5c;
          }
          goto LAB_0001ecc4;
        }
        p_Var8 = param_2;
        p_Var4 = param_2;
        if (*(int *)(p_Var3 + 0xc) == 0) goto LAB_0001ec74;
      }
LAB_0001eb6c:
      bVar1 = false;
      p_Var3 = p_Var4;
      if (p_Var8 != (_Rb_tree_node_base *)0x0) {
        bVar1 = true;
      }
      goto LAB_0001eb74;
    }
    if (uVar7 == *(uint *)(param_2 + 0x10)) goto LAB_0001ec64;
    p_Var3 = *(_Rb_tree_node_base **)(param_1 + 0x10);
    if (*(_Rb_tree_node_base **)(param_1 + 0x10) != param_2) {
      p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_2);
      if (*(uint *)(p_Var4 + 0x10) <= uVar7) {
        p_Var3 = *(_Rb_tree_node_base **)(param_1 + 8);
        if (*(_Rb_tree_node_base **)(param_1 + 8) != (_Rb_tree_node_base *)0x0) {
          do {
            p_Var6 = p_Var3;
            uVar5 = *(uint *)(p_Var6 + 0x10);
            if (uVar7 < uVar5) {
              p_Var3 = *(_Rb_tree_node_base **)(p_Var6 + 8);
            }
            else {
              p_Var3 = *(_Rb_tree_node_base **)(p_Var6 + 0xc);
            }
          } while (p_Var3 != (_Rb_tree_node_base *)0x0);
          p_Var3 = p_Var6;
          if (uVar7 >= uVar5) goto joined_r0x0001ec5c;
        }
        p_Var4 = p_Var6;
        if (*(_Rb_tree_node_base **)(param_1 + 0xc) != p_Var6) goto LAB_0001ed00;
        goto LAB_0001ecc4;
      }
      p_Var3 = param_2;
      if (*(int *)(param_2 + 0xc) != 0) {
        bVar10 = true;
        goto LAB_0001eb88;
      }
    }
  }
  bVar10 = uVar7 < *(uint *)(p_Var3 + 0x10);
  p_Var4 = p_Var3;
LAB_0001eb88:
  std::_Rb_tree_insert_and_rebalance(bVar10,p_Var2,p_Var4,p_Var9);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return p_Var2;
}



/* ===== rga_version_compare @ 0001ed78 size=144 ===== */

/* rga_version_compare(rga_version_t, rga_version_t) */

undefined4 rga_version_compare(uint param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  uint in_stack_00000014;
  
  if ((param_1 <= in_stack_0000000c) &&
     (param_2 <= in_stack_00000010 || param_1 != in_stack_0000000c)) {
    if ((param_1 == in_stack_0000000c) && (in_stack_00000010 == param_2)) {
      if (in_stack_00000014 < param_3) {
        return 1;
      }
      if (param_3 == in_stack_00000014) {
        uVar1 = 0;
      }
      else {
        uVar1 = 0xffffffff;
      }
    }
    else {
      uVar1 = 0xffffffff;
    }
    return uVar1;
  }
  return 1;
}



/* ===== rga_version_table_get_current_index @ 0001ee08 size=180 ===== */

/* rga_version_table_get_current_index(rga_version_t&, rga_version_bind_table_entry_t const*, int)
    */

int rga_version_table_get_current_index
              (rga_version_t *param_1,rga_version_bind_table_entry_t *param_2,int param_3)

{
  int iVar1;
  rga_version_bind_table_entry_t *prVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = param_3 + -1;
  if (-1 < iVar4) {
    prVar2 = param_2 + iVar4 * 0x38;
    iVar3 = iVar4;
    do {
      iVar1 = rga_version_compare(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),
                                  *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                                  *(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
                                  *(undefined4 *)(param_1 + 0x18),*(undefined4 *)prVar2,
                                  *(undefined4 *)(prVar2 + 4),*(undefined4 *)(prVar2 + 8),
                                  *(undefined4 *)(prVar2 + 0xc),*(undefined4 *)(prVar2 + 0x10),
                                  *(undefined4 *)(prVar2 + 0x14),*(undefined4 *)(prVar2 + 0x18));
      if (-1 < iVar1) {
        if (iVar4 == iVar3) {
          return iVar3;
        }
        iVar1 = rga_version_compare(*(undefined4 *)(prVar2 + 0x38),*(undefined4 *)(prVar2 + 0x3c),
                                    *(undefined4 *)(prVar2 + 0x40),*(undefined4 *)(prVar2 + 0x44),
                                    *(undefined4 *)(prVar2 + 0x48),*(undefined4 *)(prVar2 + 0x4c),
                                    *(undefined4 *)(prVar2 + 0x50),*(undefined4 *)param_1,
                                    *(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                                    *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                                    *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18))
        ;
        if (0 < iVar1) {
          return iVar3;
        }
      }
      bVar5 = iVar3 != 0;
      iVar3 = iVar3 + -1;
      prVar2 = prVar2 + -0x38;
    } while (bVar5);
  }
  return -1;
}



/* ===== rga_version_table_get_minimum_index @ 0001eebc size=180 ===== */

/* rga_version_table_get_minimum_index(rga_version_t&, rga_version_bind_table_entry_t const*, int)
    */

int rga_version_table_get_minimum_index
              (rga_version_t *param_1,rga_version_bind_table_entry_t *param_2,int param_3)

{
  int iVar1;
  rga_version_bind_table_entry_t *prVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = param_3 + -1;
  if (-1 < iVar4) {
    prVar2 = param_2 + iVar4 * 0x38;
    iVar3 = iVar4;
    do {
      iVar1 = rga_version_compare(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),
                                  *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                                  *(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
                                  *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(prVar2 + 0x1c),
                                  *(undefined4 *)(prVar2 + 0x20),*(undefined4 *)(prVar2 + 0x24),
                                  *(undefined4 *)(prVar2 + 0x28),*(undefined4 *)(prVar2 + 0x2c),
                                  *(undefined4 *)(prVar2 + 0x30),*(undefined4 *)(prVar2 + 0x34));
      if (-1 < iVar1) {
        if (iVar4 == iVar3) {
          return iVar3;
        }
        iVar1 = rga_version_compare(*(undefined4 *)(prVar2 + 0x54),*(undefined4 *)(prVar2 + 0x58),
                                    *(undefined4 *)(prVar2 + 0x5c),*(undefined4 *)(prVar2 + 0x60),
                                    *(undefined4 *)(prVar2 + 100),*(undefined4 *)(prVar2 + 0x68),
                                    *(undefined4 *)(prVar2 + 0x6c),*(undefined4 *)param_1,
                                    *(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                                    *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                                    *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18))
        ;
        if (0 < iVar1) {
          return iVar3;
        }
      }
      bVar5 = iVar3 != 0;
      iVar3 = iVar3 + -1;
      prVar2 = prVar2 + -0x38;
    } while (bVar5);
  }
  return -1;
}



/* ===== rga_version_table_check_minimum_range @ 0001ef70 size=160 ===== */

/* rga_version_table_check_minimum_range(rga_version_t&, rga_version_bind_table_entry_t const*, int,
   int) */

uint rga_version_table_check_minimum_range
               (rga_version_t *param_1,rga_version_bind_table_entry_t *param_2,int param_3,
               int param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = rga_version_compare(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),
                              *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                              *(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
                              *(undefined4 *)(param_1 + 0x18),
                              *(undefined4 *)(param_2 + param_4 * 0x38 + 0x1c),
                              *(undefined4 *)(param_2 + param_4 * 0x38 + 0x20),
                              *(undefined4 *)(param_2 + param_4 * 0x38 + 0x24),
                              *(undefined4 *)(param_2 + param_4 * 0x38 + 0x28),
                              *(undefined4 *)(param_2 + param_4 * 0x38 + 0x2c),
                              *(undefined4 *)(param_2 + param_4 * 0x38 + 0x30),
                              *(undefined4 *)(param_2 + param_4 * 0x38 + 0x34));
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else if (param_3 + -1 == param_4) {
    uVar2 = 0;
  }
  else {
    uVar2 = rga_version_compare(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),
                                *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                                *(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
                                *(undefined4 *)(param_1 + 0x18),
                                *(undefined4 *)(param_2 + param_4 * 0x38 + 0x54),
                                *(undefined4 *)(param_2 + param_4 * 0x38 + 0x58),
                                *(undefined4 *)(param_2 + param_4 * 0x38 + 0x5c),
                                *(undefined4 *)(param_2 + param_4 * 0x38 + 0x60),
                                *(undefined4 *)(param_2 + param_4 * 0x38 + 100),
                                *(undefined4 *)(param_2 + param_4 * 0x38 + 0x68),
                                *(undefined4 *)(param_2 + param_4 * 0x38 + 0x6c));
    uVar2 = ~uVar2 >> 0x1f;
  }
  return uVar2;
}



/* ===== rga_is_buffer_valid @ 0001f010 size=76 ===== */

/* rga_is_buffer_valid(rga_buffer_t) */

bool rga_is_buffer_valid(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int in_stack_00000044;
  
  if (((param_2 == 0) && (param_1 == 0)) && (param_3 < 1)) {
    bVar1 = in_stack_00000044 != 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* ===== rga_is_rect_valid @ 0001f05c size=84 ===== */

/* rga_is_rect_valid(im_rect) */

bool rga_is_rect_valid(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  
  if ((param_1 < 1) && (param_2 < 1)) {
    if (param_3 < 1) {
      bVar1 = false;
    }
    else {
      bVar1 = 0 < param_4;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* ===== empty_structure @ 0001f0b0 size=172 ===== */

/* empty_structure(rga_buffer_t*, rga_buffer_t*, rga_buffer_t*, im_rect*, im_rect*, im_rect*,
   im_opt*) */

void empty_structure(rga_buffer_t *param_1,rga_buffer_t *param_2,rga_buffer_t *param_3,
                    im_rect *param_4,im_rect *param_5,im_rect *param_6,im_opt *param_7)

{
  if (param_1 != (rga_buffer_t *)0x0) {
    memset(param_1,0,0x58);
  }
  if (param_2 != (rga_buffer_t *)0x0) {
    memset(param_2,0,0x58);
  }
  if (param_3 != (rga_buffer_t *)0x0) {
    memset(param_3,0,0x58);
  }
  if (param_4 != (im_rect *)0x0) {
    *(undefined4 *)param_4 = 0;
    *(undefined4 *)(param_4 + 4) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)(param_4 + 8) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)(param_4 + 0xc) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  }
  if (param_5 != (im_rect *)0x0) {
    *(undefined4 *)param_5 = 0;
    *(undefined4 *)(param_5 + 4) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)(param_5 + 8) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)(param_5 + 0xc) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  }
  if (param_6 != (im_rect *)0x0) {
    *(undefined4 *)param_6 = 0;
    *(undefined4 *)(param_6 + 4) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)(param_6 + 8) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)(param_6 + 0xc) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  }
  if (param_7 == (im_opt *)0x0) {
    return;
  }
  memset(param_7,0,0x130);
  return;
}



/* ===== rga_set_buffer_info @ 0001f15c size=368 ===== */

/* rga_set_buffer_info(rga_buffer_t, rga_info*) */

undefined4 rga_set_buffer_info(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  FILE *pFVar4;
  int in_stack_00000044;
  int *in_stack_00000048;
  
  iVar3 = DAT_0001f2cc + 0x1f184;
  if (in_stack_00000048 == (int *)0x0) {
    rga_error_msg_set((char *)(DAT_0001f2d0 + 0x1f1fc));
    iVar2 = rga_log_enable_get();
    if (0 < iVar2) {
      rga_log_level_get();
    }
    pFVar4 = (FILE *)**(undefined4 **)(iVar3 + DAT_0001f2d4);
    iVar3 = rga_get_current_time_ms();
    iVar2 = rga_get_start_time_ms();
    fprintf(pFVar4,(char *)(DAT_0001f2dc + 0x1f240),iVar3 - iVar2,DAT_0001f2d8 + 0x1f23c,0x1a3);
    uVar1 = 0xfffffffd;
  }
  else if (in_stack_00000044 == 0) {
    if (param_2 == 0) {
      if (param_3 < 1) {
        if (param_1 == 0) {
          rga_error_msg_set((char *)(DAT_0001f2e0 + 0x1f268),0,param_3,0,0);
          iVar2 = rga_log_enable_get();
          if (0 < iVar2) {
            rga_log_level_get();
          }
          pFVar4 = (FILE *)**(undefined4 **)(iVar3 + DAT_0001f2d4);
          iVar3 = rga_get_current_time_ms();
          iVar2 = rga_get_start_time_ms();
          fprintf(pFVar4,(char *)(DAT_0001f2e4 + 0x1f2b8),iVar3 - iVar2,DAT_0001f2e8 + 0x1f2bc,0x1b3
                  ,0,param_3,0,0);
          uVar1 = 0xfffffffd;
        }
        else {
          uVar1 = 1;
          in_stack_00000048[1] = param_1;
          in_stack_00000048[0x12] = 1;
        }
      }
      else {
        uVar1 = 1;
        *in_stack_00000048 = param_3;
        in_stack_00000048[0x12] = 1;
      }
    }
    else {
      uVar1 = 1;
      in_stack_00000048[2] = param_2;
    }
  }
  else {
    in_stack_00000048[0x2f] = in_stack_00000044;
    uVar1 = 1;
  }
  return uVar1;
}



/* ===== rga_set_buffer_info @ 0001f2ec size=692 ===== */

/* rga_set_buffer_info(rga_buffer_t, rga_buffer_t, rga_info*, rga_info*) */

undefined4 rga_set_buffer_info(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  FILE *pFVar4;
  int in_stack_00000044;
  int in_stack_00000048;
  int in_stack_0000004c;
  int in_stack_00000050;
  int in_stack_0000009c;
  int *in_stack_000000a0;
  int *in_stack_000000a4;
  
  iVar3 = DAT_0001f5a0 + 0x1f318;
  if (in_stack_000000a0 == (int *)0x0) {
    rga_error_msg_set((char *)(DAT_0001f5a4 + 0x1f3f0));
    iVar2 = rga_log_enable_get();
    if (0 < iVar2) {
      rga_log_level_get();
    }
    pFVar4 = (FILE *)**(undefined4 **)(iVar3 + DAT_0001f5a8);
    iVar3 = rga_get_current_time_ms();
    iVar2 = rga_get_start_time_ms();
    fprintf(pFVar4,(char *)(DAT_0001f5b0 + 0x1f434),iVar3 - iVar2,DAT_0001f5ac + 0x1f430,0x1bc);
    uVar1 = 0xfffffffd;
  }
  else if (in_stack_000000a4 == (int *)0x0) {
    rga_error_msg_set((char *)(DAT_0001f5b4 + 0x1f450));
    iVar2 = rga_log_enable_get();
    if (0 < iVar2) {
      rga_log_level_get();
    }
    pFVar4 = (FILE *)**(undefined4 **)(iVar3 + DAT_0001f5a8);
    iVar3 = rga_get_current_time_ms();
    iVar2 = rga_get_start_time_ms();
    fprintf(pFVar4,(char *)(DAT_0001f5bc + 0x1f494),iVar3 - iVar2,DAT_0001f5b8 + 0x1f490,0x1c0);
    uVar1 = 0xfffffffd;
  }
  else {
    if (in_stack_00000044 == 0) {
      if (param_2 == 0) {
        if (param_3 < 1) {
          if (param_1 == 0) {
            rga_error_msg_set((char *)(DAT_0001f5cc + 0x1f53c),0,param_3,0,0);
            iVar2 = rga_log_enable_get();
            if (0 < iVar2) {
              rga_log_level_get();
            }
            pFVar4 = (FILE *)**(undefined4 **)(iVar3 + DAT_0001f5a8);
            iVar3 = rga_get_current_time_ms();
            iVar2 = rga_get_start_time_ms();
            fprintf(pFVar4,(char *)(DAT_0001f5d0 + 0x1f58c),iVar3 - iVar2,DAT_0001f5d4 + 0x1f590,
                    0x1d0,0,param_3,0,0);
            return 0xfffffffd;
          }
          in_stack_000000a0[1] = param_1;
          in_stack_000000a0[0x12] = 1;
        }
        else {
          *in_stack_000000a0 = param_3;
          in_stack_000000a0[0x12] = 1;
        }
      }
      else {
        in_stack_000000a0[2] = param_2;
      }
    }
    else {
      in_stack_000000a0[0x2f] = in_stack_00000044;
    }
    if (in_stack_0000009c == 0) {
      if (in_stack_0000004c == 0) {
        if (in_stack_00000050 < 1) {
          if (in_stack_00000048 == 0) {
            rga_error_msg_set((char *)(DAT_0001f5c0 + 0x1f4bc),0,in_stack_00000050,0,0);
            iVar2 = rga_log_enable_get();
            if (0 < iVar2) {
              rga_log_level_get();
            }
            pFVar4 = (FILE *)**(undefined4 **)(iVar3 + DAT_0001f5a8);
            iVar3 = rga_get_current_time_ms();
            iVar2 = rga_get_start_time_ms();
            fprintf(pFVar4,(char *)(DAT_0001f5c4 + 0x1f50c),iVar3 - iVar2,DAT_0001f5c8 + 0x1f510,
                    0x1e0,0,in_stack_00000050,0,0);
            uVar1 = 0xfffffffd;
          }
          else {
            uVar1 = 1;
            in_stack_000000a4[1] = in_stack_00000048;
            in_stack_000000a4[0x12] = 1;
          }
        }
        else {
          uVar1 = 1;
          *in_stack_000000a4 = in_stack_00000050;
          in_stack_000000a4[0x12] = 1;
        }
      }
      else {
        uVar1 = 1;
        in_stack_000000a4[2] = in_stack_0000004c;
      }
    }
    else {
      in_stack_000000a4[0x2f] = in_stack_0000009c;
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* ===== rga_get_info @ 0001f5d8 size=2060 ===== */

/* rga_get_info(rga_info_table_entry*) */

undefined4 rga_get_info(rga_info_table_entry *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  RockchipRga *this;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  rga_info_table_entry *prVar14;
  FILE *pFVar15;
  uint uVar16;
  char *__s1;
  undefined4 *puVar17;
  pthread_mutex_t *__mutex;
  int *piVar18;
  int *piVar19;
  int iVar20;
  uint *puVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  uint local_4c;
  uint uStack_48;
  uint local_44;
  
  iVar20 = DAT_0001fde4 + 0x1f5f4;
  piVar19 = *(int **)(iVar20 + DAT_0001fde8);
  iVar4 = *piVar19;
  if (iVar4 == 0) {
    __mutex = *(pthread_mutex_t **)(iVar20 + DAT_0001fe3c);
    pthread_mutex_lock(__mutex);
    piVar18 = *(int **)(iVar20 + DAT_0001fe40);
    if (*piVar18 == 0) {
      this = operator_new(0x10);
      RockchipRga::RockchipRga(this);
      *piVar18 = (int)this;
    }
    pthread_mutex_unlock(__mutex);
    iVar4 = *piVar19;
    if (iVar4 == 0) {
      rga_error_msg_set((char *)(DAT_0001fe44 + 0x1fb84));
      iVar4 = rga_log_enable_get();
      if (0 < iVar4) {
        rga_log_level_get();
      }
      pFVar15 = (FILE *)**(undefined4 **)(iVar20 + DAT_0001fe08);
      iVar4 = rga_get_current_time_ms();
      iVar20 = rga_get_start_time_ms();
      fprintf(pFVar15,(char *)(DAT_0001fe4c + 0x1fbc8),iVar4 - iVar20,DAT_0001fe48 + 0x1fbc0,0x44);
      return 0;
    }
  }
  if (*(int *)(iVar4 + 0xa0) != 0) {
    uVar16 = 0;
    do {
      iVar12 = uVar16 * 0x1c + iVar4;
      iVar9 = *(int *)(iVar12 + 0x14);
      if (iVar9 == 2) {
        if ((*(int *)(iVar12 + 0x18) != 0) || (*(int *)(iVar12 + 0x1c) != 0)) goto LAB_0001f7c8;
        puVar21 = (uint *)(DAT_0001fe14 + 0x1fa50);
LAB_0001f6c8:
        uVar1 = *puVar21;
        uVar5 = puVar21[1];
        uVar8 = puVar21[2];
        uVar11 = puVar21[3];
        uVar2 = puVar21[4];
        uVar6 = puVar21[5];
        local_4c = puVar21[6];
        uStack_48 = puVar21[7];
        local_44 = puVar21[8];
      }
      else {
        if (iVar9 != 3) {
          if (iVar9 == 4) {
            if (*(int *)(iVar12 + 0x18) != 0) {
LAB_0001f7c8:
              __s1 = (char *)(iVar4 + 0x20);
              iVar4 = strncmp(__s1,(char *)(DAT_0001fdf0 + 0x1f7dc),3);
              if (iVar4 == 0) {
                puVar22 = (undefined4 *)(DAT_0001fdf4 + 0x1f830);
                puVar17 = (undefined4 *)(DAT_0001fdf4 + 0x1f860);
                do {
                  prVar14 = param_1 + 0x10;
                  uVar3 = *puVar22;
                  uVar7 = puVar22[1];
                  uVar10 = puVar22[2];
                  uVar13 = puVar22[3];
                  puVar23 = puVar22 + 4;
                  puVar22 = puVar22 + 4;
                  *(undefined4 *)param_1 = uVar3;
                  *(undefined4 *)(param_1 + 4) = uVar7;
                  *(undefined4 *)(param_1 + 8) = uVar10;
                  *(undefined4 *)(param_1 + 0xc) = uVar13;
                  param_1 = prVar14;
                } while (puVar23 != puVar17);
              }
              else {
                iVar4 = strncmp(__s1,(char *)(DAT_0001fe1c + 0x1fa04),3);
                if (iVar4 == 0) {
                  puVar22 = (undefined4 *)(DAT_0001fe54 + 0x1fc98);
                  puVar17 = (undefined4 *)(DAT_0001fe54 + 0x1fcc8);
                  do {
                    prVar14 = param_1 + 0x10;
                    uVar3 = *puVar22;
                    uVar7 = puVar22[1];
                    uVar10 = puVar22[2];
                    uVar13 = puVar22[3];
                    puVar23 = puVar22 + 4;
                    puVar22 = puVar22 + 4;
                    *(undefined4 *)param_1 = uVar3;
                    *(undefined4 *)(param_1 + 4) = uVar7;
                    *(undefined4 *)(param_1 + 8) = uVar10;
                    *(undefined4 *)(param_1 + 0xc) = uVar13;
                    param_1 = prVar14;
                  } while (puVar23 != puVar17);
                }
                else {
                  iVar4 = strncmp(__s1,(char *)(DAT_0001fe20 + 0x1fa20),4);
                  if ((iVar4 == 0) ||
                     (iVar4 = strncmp(__s1,(char *)(DAT_0001fe24 + 0x1fa3c),4), iVar4 == 0)) {
                    puVar22 = (undefined4 *)(DAT_0001fe34 + 0x1fb78);
                    puVar17 = (undefined4 *)(DAT_0001fe34 + 0x1fba8);
                    do {
                      prVar14 = param_1 + 0x10;
                      uVar3 = *puVar22;
                      uVar7 = puVar22[1];
                      uVar10 = puVar22[2];
                      uVar13 = puVar22[3];
                      puVar23 = puVar22 + 4;
                      puVar22 = puVar22 + 4;
                      *(undefined4 *)param_1 = uVar3;
                      *(undefined4 *)(param_1 + 4) = uVar7;
                      *(undefined4 *)(param_1 + 8) = uVar10;
                      *(undefined4 *)(param_1 + 0xc) = uVar13;
                      param_1 = prVar14;
                    } while (puVar23 != puVar17);
                  }
                  else {
                    iVar4 = strncmp(__s1,(char *)(DAT_0001fe28 + 0x1fa58),4);
                    if (iVar4 == 0) {
                      puVar22 = (undefined4 *)(DAT_0001fe70 + 0x1ff1c);
                      puVar17 = (undefined4 *)(DAT_0001fe70 + 0x1ff4c);
                      do {
                        prVar14 = param_1 + 0x10;
                        uVar3 = *puVar22;
                        uVar7 = puVar22[1];
                        uVar10 = puVar22[2];
                        uVar13 = puVar22[3];
                        puVar23 = puVar22 + 4;
                        puVar22 = puVar22 + 4;
                        *(undefined4 *)param_1 = uVar3;
                        *(undefined4 *)(param_1 + 4) = uVar7;
                        *(undefined4 *)(param_1 + 8) = uVar10;
                        *(undefined4 *)(param_1 + 0xc) = uVar13;
                        param_1 = prVar14;
                      } while (puVar23 != puVar17);
                    }
                    else {
                      iVar4 = strncmp(__s1,(char *)(DAT_0001fe2c + 0x1fa74),4);
                      if (iVar4 != 0) {
                        puVar22 = (undefined4 *)(DAT_0001fe60 + 0x1fd14);
                        puVar17 = (undefined4 *)(DAT_0001fe60 + 0x1fce4);
                        do {
                          puVar23 = puVar17;
                          prVar14 = param_1;
                          uVar3 = puVar23[1];
                          uVar7 = puVar23[2];
                          uVar10 = puVar23[3];
                          *(undefined4 *)prVar14 = *puVar23;
                          *(undefined4 *)(prVar14 + 4) = uVar3;
                          *(undefined4 *)(prVar14 + 8) = uVar7;
                          *(undefined4 *)(prVar14 + 0xc) = uVar10;
                          param_1 = prVar14 + 0x10;
                          puVar17 = puVar23 + 4;
                        } while (puVar23 + 4 != puVar22);
                        uVar3 = puVar23[5];
                        uVar7 = puVar23[6];
                        *(undefined4 *)(prVar14 + 0x10) = puVar23[4];
                        *(undefined4 *)(prVar14 + 0x18) = uVar7;
                        *(undefined4 *)(prVar14 + 0x14) = uVar3;
                        rga_error_msg_set((char *)(DAT_0001fe64 + 0x1fd2c),*piVar19 + 0x20);
                        iVar4 = rga_log_enable_get();
                        if (0 < iVar4) {
                          rga_log_level_get();
                        }
                        pFVar15 = (FILE *)**(undefined4 **)(iVar20 + DAT_0001fe08);
                        iVar4 = rga_get_current_time_ms();
                        iVar20 = rga_get_start_time_ms();
                        fprintf(pFVar15,(char *)(DAT_0001fe6c + 0x1fd80),iVar4 - iVar20,
                                DAT_0001fe68 + 0x1fd7c,0x2a3,*piVar19 + 0x20);
                        return 0;
                      }
                      puVar22 = (undefined4 *)(DAT_0001fe30 + 0x1fb78);
                      puVar17 = (undefined4 *)(DAT_0001fe30 + 0x1fba8);
                      do {
                        prVar14 = param_1 + 0x10;
                        uVar3 = *puVar22;
                        uVar7 = puVar22[1];
                        uVar10 = puVar22[2];
                        uVar13 = puVar22[3];
                        puVar23 = puVar22 + 4;
                        puVar22 = puVar22 + 4;
                        *(undefined4 *)param_1 = uVar3;
                        *(undefined4 *)(param_1 + 4) = uVar7;
                        *(undefined4 *)(param_1 + 8) = uVar10;
                        *(undefined4 *)(param_1 + 0xc) = uVar13;
                        param_1 = prVar14;
                      } while (puVar23 != puVar17);
                    }
                  }
                }
              }
              uVar3 = puVar22[1];
              uVar7 = puVar22[2];
              *(undefined4 *)prVar14 = *puVar22;
              *(undefined4 *)(prVar14 + 4) = uVar3;
              *(undefined4 *)(prVar14 + 8) = uVar7;
              return 1;
            }
            iVar9 = *(int *)(iVar12 + 0x1c);
            if ((iVar9 == 0x23998) || (iVar9 == 0x28610)) {
              uVar1 = *(uint *)(DAT_0001fe5c + 0x1fddc);
              uVar5 = *(uint *)(DAT_0001fe5c + 0x1fde0);
              uVar8 = *(uint *)((int)&DAT_0001fde4 + DAT_0001fe5c);
              uVar11 = *(uint *)((int)&DAT_0001fde8 + DAT_0001fe5c);
              uVar2 = *(uint *)((int)&DAT_0001fdec + DAT_0001fe5c);
              uVar6 = *(uint *)((int)&DAT_0001fdf0 + DAT_0001fe5c);
              local_4c = *(uint *)((int)&DAT_0001fdf4 + DAT_0001fe5c);
              uStack_48 = *(uint *)((int)&DAT_0001fdf8 + DAT_0001fe5c);
              local_44 = 0x26;
              goto joined_r0x0001f910;
            }
            if (iVar9 != 0x18632) goto LAB_0001f7c8;
            puVar21 = (uint *)(DAT_0001fe18 + 0x1fadc);
          }
          else {
            if (((iVar9 != 0x2a) || (*(int *)(iVar12 + 0x18) != 0)) ||
               (*(int *)(iVar12 + 0x1c) != 0x17760)) goto LAB_0001f7c8;
            puVar21 = (uint *)(DAT_0001fdec + 0x1f7f4);
          }
          goto LAB_0001f6c8;
        }
        iVar9 = *(int *)(iVar12 + 0x18);
        if (iVar9 == 0) {
          iVar9 = *(int *)(iVar12 + 0x1c);
          if (iVar9 == 0x22245) {
LAB_0001fb2c:
            puVar21 = (uint *)(DAT_0001fe38 + 0x1fca4);
          }
          else if (iVar9 == 0x76831) {
            puVar21 = (uint *)(DAT_0001fe50 + 0x1fdb4);
          }
          else {
            if (iVar9 != 0x16445) goto LAB_0001f7c8;
            puVar21 = (uint *)(DAT_0001fdf8 + 0x1f940);
          }
          goto LAB_0001f6c8;
        }
        if (iVar9 == 2) {
          iVar9 = *(int *)(iVar12 + 0x1c);
          if ((iVar9 != 0x56726) && (iVar9 != 0x63318)) {
            if (iVar9 != 0x18218) goto LAB_0001f7c8;
            goto LAB_0001fb2c;
          }
          uVar1 = *(uint *)(DAT_0001fe58 + 0x1fdd0);
          uVar5 = *(uint *)(DAT_0001fe58 + 0x1fdd4);
          uVar8 = *(uint *)(DAT_0001fe58 + 0x1fdd8);
          uVar11 = *(uint *)(DAT_0001fe58 + 0x1fddc);
          uVar2 = *(uint *)(DAT_0001fe58 + 0x1fde0);
          uVar6 = *(uint *)((int)&DAT_0001fde4 + DAT_0001fe58);
          local_4c = 0x6ff6;
          uStack_48 = 0xf556;
          local_44 = 0x7e;
        }
        else {
          if (iVar9 == 3) {
            if (*(int *)(iVar12 + 0x1c) != 0x87975) goto LAB_0001f7c8;
          }
          else if (iVar9 == 6) {
            if (*(int *)(iVar12 + 0x1c) != 0x92812) goto LAB_0001f7c8;
          }
          else if ((iVar9 != 7) || (*(int *)(iVar12 + 0x1c) != 0x93215)) goto LAB_0001f7c8;
          uVar1 = *(uint *)(DAT_0001fdfc + 0x1fa40);
          uVar5 = *(uint *)(DAT_0001fdfc + 0x1fa44);
          uVar8 = *(uint *)(DAT_0001fdfc + 0x1fa48);
          uVar11 = *(uint *)(DAT_0001fdfc + 0x1fa4c);
          uVar2 = *(uint *)(DAT_0001fdfc + 0x1fa50);
          uVar6 = *(uint *)(DAT_0001fdfc + 0x1fa54);
          local_4c = 0x16ff6;
          uStack_48 = 0xf556;
          local_44 = 0x1c7e;
        }
      }
joined_r0x0001f910:
      if (param_1 == (rga_info_table_entry *)0x0) {
        rga_error_msg_set((char *)(DAT_0001fe04 + 0x1f92c),DAT_0001fe00 + 0x1f928,0x4e);
        iVar4 = rga_log_enable_get();
        if (0 < iVar4) {
          rga_log_level_get();
        }
        pFVar15 = (FILE *)**(undefined4 **)(iVar20 + DAT_0001fe08);
        iVar4 = rga_get_current_time_ms();
        iVar9 = rga_get_start_time_ms();
        fprintf(pFVar15,(char *)(DAT_0001fe10 + 0x1f974),iVar4 - iVar9,DAT_0001fe0c + 0x1f968,0x4e,
                DAT_0001fe0c + 0x1f968,0x4e);
      }
      else {
        if (uVar5 <= *(uint *)(param_1 + 4)) {
          uVar5 = *(uint *)(param_1 + 4);
        }
        *(uint *)(param_1 + 4) = uVar5;
        if (uVar8 <= *(uint *)(param_1 + 8)) {
          uVar8 = *(uint *)(param_1 + 8);
        }
        *(uint *)(param_1 + 8) = uVar8;
        if (uVar11 <= *(uint *)(param_1 + 0xc)) {
          uVar11 = *(uint *)(param_1 + 0xc);
        }
        *(uint *)(param_1 + 0xc) = uVar11;
        uVar5 = *(uint *)(param_1 + 0x10);
        if (*(uint *)(param_1 + 0x10) < uVar2) {
          uVar5 = uVar2;
        }
        *(uint *)(param_1 + 0x10) = uVar5;
        uVar5 = *(uint *)(param_1 + 0x14);
        if (*(uint *)(param_1 + 0x14) < uVar6) {
          uVar5 = uVar6;
        }
        *(uint *)(param_1 + 0x14) = uVar5;
        *(uint *)param_1 = *(uint *)param_1 | uVar1;
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | local_4c;
        *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | uStack_48;
        *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | local_44;
      }
      iVar4 = *piVar19;
      uVar16 = uVar16 + 1;
    } while (uVar16 < *(uint *)(iVar4 + 0xa0));
  }
  return 1;
}



/* ===== rga_check_header @ 0001fe74 size=796 ===== */

/* rga_check_header(rga_version_t) */

undefined4
rga_check_header(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  FILE *pFVar5;
  rga_version_bind_table_entry_t *prVar6;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  prVar6 = (rga_version_bind_table_entry_t *)(DAT_00020194 + 0x1fea4);
  local_44 = *(undefined4 *)(DAT_00020190 + 0x1fe98);
  uStack_40 = *(undefined4 *)(DAT_00020190 + 0x1fe9c);
  uStack_3c = *(undefined4 *)(DAT_00020190 + 0x1fea0);
  uStack_38 = *(undefined4 *)(DAT_00020190 + 0x1fea4);
  iVar4 = DAT_00020198 + 0x1feac;
  local_34 = *(undefined4 *)(DAT_00020190 + 0x1fea8);
  uStack_30 = *(undefined4 *)(DAT_00020190 + 0x1feac);
  uStack_2c = *(undefined4 *)(DAT_00020190 + 0x1feb0);
  local_10 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  iVar1 = rga_version_table_get_current_index((rga_version_t *)&local_44,prVar6,3);
  if (iVar1 < 0) {
    rga_error_msg_set((char *)(DAT_0002019c + 0x1fee8),&uStack_38,&uStack_4);
    iVar1 = rga_log_enable_get();
    if (0 < iVar1) {
      rga_log_level_get();
    }
    pFVar5 = (FILE *)**(undefined4 **)(iVar4 + DAT_000201a0);
    iVar1 = rga_get_current_time_ms();
    iVar4 = rga_get_start_time_ms();
    fprintf(pFVar5,(char *)(DAT_000201a4 + 0x1ff24),iVar1 - iVar4,DAT_000201a8 + 0x1ff2c,0xf1,
            &uStack_38,&uStack_4);
    uVar2 = 0xfffffffb;
  }
  else {
    iVar3 = rga_version_table_check_minimum_range((rga_version_t *)&local_10,prVar6,3,iVar1);
    if (iVar3 == 0) {
      uVar2 = 1;
    }
    else if (iVar3 == 1) {
      iVar1 = rga_version_table_get_minimum_index((rga_version_t *)&local_10,prVar6,3);
      if (iVar1 < 0) {
        rga_error_msg_set((char *)(DAT_000201d0 + 0x20138),&uStack_38,&uStack_4);
        iVar1 = rga_log_enable_get();
        if (0 < iVar1) {
          rga_log_level_get();
        }
        pFVar5 = (FILE *)**(undefined4 **)(iVar4 + DAT_000201a0);
        iVar1 = rga_get_current_time_ms();
        iVar4 = rga_get_start_time_ms();
        fprintf(pFVar5,(char *)(DAT_000201d4 + 0x20178),iVar1 - iVar4,DAT_000201d8 + 0x20180,0xf9,
                &uStack_38,&uStack_4);
        uVar2 = 0xfffffffb;
      }
      else {
        rga_error_msg_set((char *)(DAT_000201b8 + 0x20028),&uStack_4,&uStack_38,
                          prVar6 + iVar1 * 0x38 + 0xc);
        iVar3 = rga_log_enable_get();
        if (0 < iVar3) {
          rga_log_level_get();
        }
        pFVar5 = (FILE *)**(undefined4 **)(iVar4 + DAT_000201a0);
        iVar4 = rga_get_current_time_ms();
        iVar3 = rga_get_start_time_ms();
        fprintf(pFVar5,(char *)(DAT_000201bc + 0x20064),iVar4 - iVar3,DAT_000201c0 + 0x20070,0x104,
                &uStack_4,&uStack_38,prVar6 + iVar1 * 0x38 + 0xc);
        uVar2 = 0xfffffffb;
      }
    }
    else {
      if (iVar3 != -1) {
        rga_error_msg_set((char *)(DAT_000201ac + 0x1ff8c));
        iVar1 = rga_log_enable_get();
        if (0 < iVar1) {
          rga_log_level_get();
        }
        pFVar5 = (FILE *)**(undefined4 **)(iVar4 + DAT_000201a0);
        iVar1 = rga_get_current_time_ms();
        iVar4 = rga_get_start_time_ms();
        fprintf(pFVar5,(char *)(DAT_000201b4 + 0x1ffcc),iVar1 - iVar4,DAT_000201b0 + 0x1ffc8,0x173);
        return 1;
      }
      rga_error_msg_set((char *)(DAT_000201c4 + 0x200a0),&uStack_38,&uStack_4,
                        prVar6 + iVar1 * 0x38 + 0x28);
      iVar3 = rga_log_enable_get();
      if (0 < iVar3) {
        rga_log_level_get();
      }
      pFVar5 = (FILE *)**(undefined4 **)(iVar4 + DAT_000201a0);
      iVar4 = rga_get_current_time_ms();
      iVar3 = rga_get_start_time_ms();
      fprintf(pFVar5,(char *)(DAT_000201c8 + 0x200e8),iVar4 - iVar3,DAT_000201cc + 0x200f4,0x10f,
              &uStack_38,&uStack_4,prVar6 + iVar1 * 0x38 + 0x28);
      uVar2 = 0xfffffffb;
    }
  }
  return uVar2;
}



/* ===== rga_check_driver @ 000201dc size=772 ===== */

/* rga_check_driver(rga_version_t&) */

undefined4 rga_check_driver(rga_version_t *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  rga_version_t *prVar4;
  int iVar5;
  FILE *pFVar6;
  rga_version_bind_table_entry_t *prVar7;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  prVar7 = (rga_version_bind_table_entry_t *)(DAT_000204e4 + 0x20204);
  local_34 = *(undefined4 *)(DAT_000204e0 + 0x201fc);
  uStack_30 = *(undefined4 *)(DAT_000204e0 + 0x20200);
  uStack_2c = *(undefined4 *)(DAT_000204e0 + 0x20204);
  uStack_28 = *(undefined4 *)(DAT_000204e0 + 0x20208);
  iVar5 = DAT_000204e8 + 0x2020c;
  local_24 = *(undefined4 *)(DAT_000204e0 + 0x2020c);
  uStack_20 = *(undefined4 *)(DAT_000204e0 + 0x20210);
  uStack_1c = *(undefined4 *)(DAT_000204e0 + 0x20214);
  iVar1 = rga_version_table_get_current_index((rga_version_t *)&local_34,prVar7,5);
  if (iVar1 < 0) {
    rga_error_msg_set((char *)(DAT_000204ec + 0x20248),&uStack_28,param_1 + 0xc);
    iVar1 = rga_log_enable_get();
    if (0 < iVar1) {
      rga_log_level_get();
    }
    pFVar6 = (FILE *)**(undefined4 **)(iVar5 + DAT_000204f0);
    iVar1 = rga_get_current_time_ms();
    iVar5 = rga_get_start_time_ms();
    fprintf(pFVar6,(char *)(DAT_000204f4 + 0x20284),iVar1 - iVar5,DAT_000204f8 + 0x2028c,0x117,
            &uStack_28,param_1 + 0xc);
    uVar2 = 0xfffffffb;
  }
  else {
    iVar3 = rga_version_table_check_minimum_range(param_1,prVar7,5,iVar1);
    if (iVar3 == 0) {
      uVar2 = 1;
    }
    else if (iVar3 == 1) {
      prVar4 = param_1 + 0xc;
      iVar1 = rga_version_table_get_minimum_index(param_1,prVar7,5);
      if (iVar1 < 0) {
        rga_error_msg_set((char *)(DAT_00020520 + 0x20488),&uStack_28,prVar4);
        iVar1 = rga_log_enable_get();
        if (0 < iVar1) {
          rga_log_level_get();
        }
        pFVar6 = (FILE *)**(undefined4 **)(iVar5 + DAT_000204f0);
        iVar1 = rga_get_current_time_ms();
        iVar5 = rga_get_start_time_ms();
        fprintf(pFVar6,(char *)(DAT_00020524 + 0x204c8),iVar1 - iVar5,DAT_00020528 + 0x204d0,0x11f,
                &uStack_28,prVar4);
        uVar2 = 0xfffffffb;
      }
      else {
        rga_error_msg_set((char *)(DAT_00020508 + 0x20374),prVar7 + iVar1 * 0x38 + 0xc,&uStack_28,
                          prVar4);
        iVar3 = rga_log_enable_get();
        if (0 < iVar3) {
          rga_log_level_get();
        }
        pFVar6 = (FILE *)**(undefined4 **)(iVar5 + DAT_000204f0);
        iVar5 = rga_get_current_time_ms();
        iVar3 = rga_get_start_time_ms();
        fprintf(pFVar6,(char *)(DAT_0002050c + 0x203b8),iVar5 - iVar3,DAT_00020510 + 0x203c4,0x12a,
                prVar7 + iVar1 * 0x38 + 0xc,&uStack_28,prVar4);
        uVar2 = 0xfffffffb;
      }
    }
    else {
      if (iVar3 != -1) {
        rga_error_msg_set((char *)(DAT_000204fc + 0x202e4));
        iVar1 = rga_log_enable_get();
        if (0 < iVar1) {
          rga_log_level_get();
        }
        pFVar6 = (FILE *)**(undefined4 **)(iVar5 + DAT_000204f0);
        iVar1 = rga_get_current_time_ms();
        iVar5 = rga_get_start_time_ms();
        fprintf(pFVar6,(char *)(DAT_00020504 + 0x20324),iVar1 - iVar5,DAT_00020500 + 0x20320,0x173);
        return 1;
      }
      rga_error_msg_set((char *)(DAT_00020514 + 0x203f4),prVar7 + iVar1 * 0x38 + 0x28,&uStack_28,
                        param_1 + 0xc);
      iVar3 = rga_log_enable_get();
      if (0 < iVar3) {
        rga_log_level_get();
      }
      pFVar6 = (FILE *)**(undefined4 **)(iVar5 + DAT_000204f0);
      iVar5 = rga_get_current_time_ms();
      iVar3 = rga_get_start_time_ms();
      fprintf(pFVar6,(char *)(DAT_00020518 + 0x2043c),iVar5 - iVar3,DAT_0002051c + 0x20448,0x136,
              prVar7 + iVar1 * 0x38 + 0x28,&uStack_28,param_1 + 0xc);
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* ===== rga_check_info @ 0002052c size=1496 ===== */

/* rga_check_info(char const*, rga_buffer_t, im_rect, int) */

uint rga_check_info(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  FILE *pFVar6;
  bool bVar7;
  bool bVar8;
  uint in_stack_00000000;
  uint in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  uint in_stack_0000004c;
  uint in_stack_00000050;
  uint in_stack_00000054;
  uint in_stack_00000058;
  uint in_stack_0000005c;
  
  iVar5 = DAT_00020b04 + 0x20550;
  uVar2 = in_stack_00000004;
  if (0 < (int)in_stack_00000004) {
    uVar2 = in_stack_00000000;
  }
  uVar2 = (uint)((int)uVar2 < 1);
  if (uVar2 == 0 && -1 < in_stack_00000010) {
    if (in_stack_00000004 != 1 && in_stack_00000000 != 1) {
      bVar8 = SBORROW4(in_stack_00000008,in_stack_00000000);
      iVar4 = in_stack_00000008 - in_stack_00000000;
      if ((int)in_stack_00000000 <= in_stack_00000008) {
        bVar8 = SBORROW4(in_stack_0000000c,in_stack_00000004);
        iVar4 = in_stack_0000000c - in_stack_00000004;
      }
      if (iVar4 < 0 == bVar8) {
        if ((int)(in_stack_00000054 | in_stack_00000058 | in_stack_0000004c | in_stack_00000050) < 0
           ) {
          rga_error_msg_set((char *)(DAT_00020b08 + 0x20648),param_1,in_stack_0000004c,
                            in_stack_00000050,in_stack_00000054,in_stack_00000058);
          iVar4 = rga_log_enable_get();
          if (iVar4 < 1) {
            return 0xfffffffc;
          }
          iVar4 = rga_log_level_get();
          if (5 < iVar4) {
            return 0xfffffffc;
          }
          pFVar6 = (FILE *)**(undefined4 **)(iVar5 + DAT_00020b10);
          iVar5 = rga_get_current_time_ms();
          iVar4 = rga_get_start_time_ms();
          fprintf(pFVar6,(char *)(DAT_00020b54 + 0x20a08),iVar5 - iVar4,DAT_00020b58 + 0x20a14,0x2e7
                  ,param_1,in_stack_0000004c,in_stack_00000050,in_stack_00000054,in_stack_00000058);
          return 0xfffffffc;
        }
        if (in_stack_00000050 == 1 ||
            (in_stack_0000004c == 1 || (in_stack_00000058 == 1 || in_stack_00000054 == 1))) {
          rga_error_msg_set((char *)(DAT_00020b20 + 0x20760),param_1,in_stack_0000004c,
                            in_stack_00000050,in_stack_00000054,in_stack_00000058);
          iVar4 = rga_log_enable_get();
          if ((0 < iVar4) && (iVar4 = rga_log_level_get(), iVar4 < 6)) {
            pFVar6 = (FILE *)**(undefined4 **)(iVar5 + DAT_00020b10);
            iVar5 = rga_get_current_time_ms();
            iVar4 = rga_get_start_time_ms();
            fprintf(pFVar6,(char *)(DAT_00020b64 + 0x20ae0),iVar5 - iVar4,DAT_00020b68 + 0x20aec,
                    0x2ef,param_1,in_stack_0000004c,in_stack_00000050,in_stack_00000054,
                    in_stack_00000058);
            return 0xfffffffd;
          }
        }
        else {
          if (((int)(in_stack_00000054 + in_stack_0000004c) <= in_stack_00000008) &&
             ((int)(in_stack_00000058 + in_stack_00000050) <= in_stack_0000000c)) {
            iVar4 = in_stack_00000000 - in_stack_0000005c;
            uVar1 = in_stack_00000000;
            if ((int)in_stack_00000000 <= (int)in_stack_0000005c) {
              iVar4 = in_stack_00000004 - in_stack_0000005c;
              uVar1 = in_stack_00000004;
            }
            if (uVar1 == in_stack_0000005c || iVar4 < 0 != SBORROW4(uVar1,in_stack_0000005c)) {
              bVar8 = in_stack_00000054 != 0;
              uVar1 = in_stack_00000054;
              if (bVar8) {
                uVar1 = in_stack_00000054 - in_stack_0000005c;
              }
              if ((!bVar8 || in_stack_00000054 == in_stack_0000005c) ||
                  (int)uVar1 < 0 != (bVar8 && SBORROW4(in_stack_00000054,in_stack_0000005c))) {
                bVar8 = in_stack_00000058 != 0;
                uVar1 = in_stack_00000058;
                if (bVar8) {
                  uVar1 = in_stack_00000058 - in_stack_0000005c;
                }
                bVar7 = bVar8 && SBORROW4(in_stack_00000058,in_stack_0000005c);
                if ((!bVar8 || in_stack_00000058 == in_stack_0000005c) || (int)uVar1 < 0 != bVar7) {
                  uVar2 = 2;
                }
                if ((!bVar8 || in_stack_00000058 == in_stack_0000005c) || (int)uVar1 < 0 != bVar7) {
                  return uVar2;
                }
              }
              rga_error_msg_set((char *)(DAT_00020b1c + 0x20724),param_1,in_stack_0000005c,
                                in_stack_0000004c,in_stack_00000050,in_stack_00000054,
                                in_stack_00000058);
              iVar4 = rga_log_enable_get();
              if ((0 < iVar4) && (iVar4 = rga_log_level_get(), iVar4 < 6)) {
                pFVar6 = (FILE *)**(undefined4 **)(iVar5 + DAT_00020b10);
                iVar5 = rga_get_current_time_ms();
                iVar4 = rga_get_start_time_ms();
                fprintf(pFVar6,(char *)(DAT_00020b5c + 0x20a70),iVar5 - iVar4,DAT_00020b60 + 0x20a84
                        ,0x303,param_1,in_stack_0000005c,in_stack_0000004c,in_stack_00000050,
                        in_stack_00000054,in_stack_00000058);
                return 0xffffffff;
              }
            }
            else {
              rga_error_msg_set((char *)(DAT_00020b3c + 0x208c8),param_1,in_stack_0000005c,
                                in_stack_00000000,in_stack_00000004);
              iVar4 = rga_log_enable_get();
              if ((0 < iVar4) && (iVar4 = rga_log_level_get(), iVar4 < 6)) {
                pFVar6 = (FILE *)**(undefined4 **)(iVar5 + DAT_00020b10);
                iVar5 = rga_get_current_time_ms();
                iVar4 = rga_get_start_time_ms();
                fprintf(pFVar6,(char *)(DAT_00020b40 + 0x20918),iVar5 - iVar4,DAT_00020b44 + 0x2092c
                        ,0x2fe,param_1,in_stack_0000005c,in_stack_00000000,in_stack_00000004);
              }
            }
            return 0xffffffff;
          }
          rga_error_msg_set((char *)(DAT_00020b30 + 0x20828),param_1,in_stack_0000004c,
                            in_stack_00000050,in_stack_00000054,in_stack_00000058,in_stack_00000008,
                            in_stack_0000000c);
          iVar4 = rga_log_enable_get();
          if ((0 < iVar4) && (iVar4 = rga_log_level_get(), iVar4 < 6)) {
            pFVar6 = (FILE *)**(undefined4 **)(iVar5 + DAT_00020b10);
            iVar5 = rga_get_current_time_ms();
            iVar4 = rga_get_start_time_ms();
            fprintf(pFVar6,(char *)(DAT_00020b34 + 0x20884),iVar5 - iVar4,DAT_00020b38 + 0x20890,
                    0x2f6,param_1,in_stack_0000004c,in_stack_00000050,in_stack_00000054,
                    in_stack_00000058,in_stack_00000008,in_stack_0000000c);
            return 0xfffffffd;
          }
        }
      }
      else {
        rga_error_msg_set((char *)(DAT_00020b24 + 0x20794),param_1,in_stack_00000008,
                          in_stack_00000000,in_stack_0000000c,in_stack_00000004);
        iVar4 = rga_log_enable_get();
        if ((0 < iVar4) && (iVar4 = rga_log_level_get(), iVar4 < 6)) {
          pFVar6 = (FILE *)**(undefined4 **)(iVar5 + DAT_00020b10);
          iVar5 = rga_get_current_time_ms();
          iVar4 = rga_get_start_time_ms();
          fprintf(pFVar6,(char *)(DAT_00020b28 + 0x207e8),iVar5 - iVar4,DAT_00020b2c + 0x207f4,0x2e0
                  ,param_1,in_stack_00000008,in_stack_00000000,in_stack_0000000c,in_stack_00000004);
        }
      }
      return 0xfffffffd;
    }
    rga_error_msg_set((char *)(DAT_00020b48 + 0x20954),param_1,in_stack_00000000,in_stack_00000004);
    iVar4 = rga_log_enable_get();
    if ((0 < iVar4) && (iVar4 = rga_log_level_get(), iVar4 < 6)) {
      pFVar6 = (FILE *)**(undefined4 **)(iVar5 + DAT_00020b10);
      iVar5 = rga_get_current_time_ms();
      iVar4 = rga_get_start_time_ms();
      fprintf(pFVar6,(char *)(DAT_00020b4c + 0x209a4),iVar5 - iVar4,DAT_00020b50 + 0x209b0,0x2d9,
              param_1,in_stack_00000000,in_stack_00000004);
      return 0xfffffffc;
    }
  }
  else {
    uVar3 = translate_format_str(in_stack_00000010);
    rga_error_msg_set((char *)(DAT_00020b0c + 0x2068c),param_1,in_stack_00000000,in_stack_00000004,
                      in_stack_00000010,uVar3);
    iVar4 = rga_log_enable_get();
    if ((0 < iVar4) && (iVar4 = rga_log_level_get(), iVar4 < 6)) {
      pFVar6 = (FILE *)**(undefined4 **)(iVar5 + DAT_00020b10);
      iVar5 = rga_get_current_time_ms();
      iVar4 = rga_get_start_time_ms();
      uVar3 = translate_format_str(in_stack_00000010);
      fprintf(pFVar6,(char *)(DAT_00020b18 + 0x20700),iVar5 - iVar4,DAT_00020b14 + 0x206f4,0x2d2,
              param_1,in_stack_00000000,in_stack_00000004,in_stack_00000010,uVar3);
    }
  }
  return 0xfffffffc;
}



/* ===== rga_check_limit @ 00020b70 size=524 ===== */

/* rga_check_limit(rga_buffer_t, rga_buffer_t, int, int) */

undefined4 rga_check_limit(void)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int in_r3;
  FILE *pFVar4;
  int iVar5;
  uint in_fpscr;
  double dVar6;
  double dVar7;
  int in_stack_00000000;
  int in_stack_00000054;
  int in_stack_00000058;
  undefined4 in_stack_000000a0;
  uint in_stack_000000a4;
  
  dVar1 = DAT_00020d80;
  iVar5 = DAT_00020d88 + 0x20b8c;
  dVar7 = (double)VectorSignedToFloat(in_stack_000000a0,(byte)(in_fpscr >> 0x16) & 3);
  iVar3 = in_stack_00000054;
  iVar2 = in_stack_00000058;
  if ((in_stack_000000a4 & 5) != 0) {
    iVar3 = in_stack_00000058;
    iVar2 = in_stack_00000054;
  }
  dVar6 = log(dVar7);
  if ((iVar3 < in_r3 >> ((uint)(longlong)(dVar6 / dVar1) & 0xff)) ||
     (dVar6 = log(dVar7), iVar2 < in_stack_00000000 >> ((uint)(longlong)(dVar6 / dVar1) & 0xff))) {
    rga_error_msg_set((char *)(DAT_00020d8c + 0x20c6c),in_stack_000000a0,in_stack_000000a0,in_r3,
                      in_stack_00000000,in_stack_00000054,in_stack_00000058);
    iVar2 = rga_log_enable_get();
    if ((0 < iVar2) && (iVar2 = rga_log_level_get(), iVar2 < 6)) {
      pFVar4 = (FILE *)**(undefined4 **)(iVar5 + DAT_00020d94);
      iVar2 = rga_get_current_time_ms();
      iVar3 = rga_get_start_time_ms();
      fprintf(pFVar4,(char *)(DAT_00020da0 + 0x20d54),iVar2 - iVar3,DAT_00020da4 + 0x20d60,0x31b,
              in_stack_000000a0,in_stack_000000a0,in_r3,in_stack_00000000,in_stack_00000054,
              in_stack_00000058);
      return 0xffffffff;
    }
  }
  else {
    dVar6 = log(dVar7);
    if ((iVar3 >> ((uint)(longlong)(dVar6 / dVar1) & 0xff) <= in_r3) &&
       (dVar7 = log(dVar7), iVar2 >> ((uint)(longlong)(dVar7 / dVar1) & 0xff) <= in_stack_00000000))
    {
      return 2;
    }
    rga_error_msg_set((char *)(DAT_00020d90 + 0x20ca4),in_stack_000000a0,in_stack_000000a0,in_r3,
                      in_stack_00000000,in_stack_00000054,in_stack_00000058);
    iVar2 = rga_log_enable_get();
    if ((0 < iVar2) && (iVar2 = rga_log_level_get(), iVar2 < 6)) {
      pFVar4 = (FILE *)**(undefined4 **)(iVar5 + DAT_00020d94);
      iVar2 = rga_get_current_time_ms();
      iVar3 = rga_get_start_time_ms();
      fprintf(pFVar4,(char *)(DAT_00020d98 + 0x20cf0),iVar2 - iVar3,DAT_00020d9c + 0x20cfc,0x321,
              in_stack_000000a0,in_stack_000000a0,in_r3,in_stack_00000000,in_stack_00000054,
              in_stack_00000058);
    }
  }
  return 0xffffffff;
}



/* ===== rga_check_format @ 00020da8 size=4168 ===== */

/* rga_check_format(char const*, rga_buffer_t, im_rect, int, int) */

int rga_check_format(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  FILE *pFVar16;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  uint in_stack_00000010;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined4 in_stack_00000058;
  uint in_stack_0000005c;
  uint in_stack_00000060;
  
  iVar8 = DAT_00021e10;
  iVar7 = DAT_00021dc4;
  iVar6 = DAT_00021db4;
  iVar5 = DAT_00021da4;
  iVar4 = DAT_00021d94;
  iVar3 = DAT_00021d6c;
  iVar2 = DAT_00021d5c;
  iVar1 = DAT_00021d4c;
  iVar12 = DAT_00021d34;
  iVar13 = DAT_00021d10;
  iVar10 = DAT_00021d08;
  iVar15 = DAT_00021d04 + 0x20dd4;
  if (((((in_stack_00000010 & 0xfffffcff) == 0) || (in_stack_00000010 == 0x1600)) ||
      ((in_stack_00000010 & 0xfffffaff) == 0x2800)) ||
     ((in_stack_00000010 == 0x700 || ((in_stack_00000010 & 0xffffdfff) == 0x400)))) {
    if ((in_stack_0000005c & 2) != 0) {
      return 2;
    }
    uVar9 = translate_format_str(in_stack_00000010);
    iVar10 = strcmp((char *)(iVar13 + 0x20f10),param_1);
    if (iVar10 == 0) {
      uVar11 = 7;
    }
    else {
      uVar11 = 6;
    }
    uVar11 = querystring(uVar11);
    rga_error_msg_set((char *)(DAT_00021d14 + 0x20f44),param_1,in_stack_00000010,uVar9,uVar11);
    iVar10 = rga_log_enable_get();
    if (iVar10 < 1) {
      return -1;
    }
    iVar10 = rga_log_level_get();
    if (5 < iVar10) {
      return -1;
    }
    pFVar16 = (FILE *)**(undefined4 **)(iVar15 + DAT_00021e18);
    iVar10 = rga_get_current_time_ms();
    iVar12 = rga_get_start_time_ms();
    uVar9 = translate_format_str(in_stack_00000010);
    iVar13 = strcmp((char *)(iVar13 + 0x20f10),param_1);
    if (iVar13 == 0) {
      uVar11 = 7;
    }
    else {
      uVar11 = 6;
    }
    uVar11 = querystring(uVar11);
    fprintf(pFVar16,(char *)(DAT_00021d1c + 0x20fc8),iVar10 - iVar12,DAT_00021d18 + 0x20fbc,0x335,
            param_1,in_stack_00000010,uVar9,uVar11);
    return -1;
  }
  if ((((in_stack_00000010 & 0xffffdfff) - 0x500 & 0xfffffeff) == 0) ||
     ((in_stack_00000010 & 0xfffffaff) == 0x2a00)) {
    if ((in_stack_0000005c & 4) != 0) {
      return 2;
    }
    uVar9 = translate_format_str(in_stack_00000010);
    iVar13 = strcmp((char *)(iVar10 + 0x20eb0),param_1);
    if (iVar13 == 0) {
      uVar11 = 7;
    }
    else {
      uVar11 = 6;
    }
    uVar11 = querystring(uVar11);
    rga_error_msg_set((char *)(DAT_00021d0c + 0x20ee4),param_1,in_stack_00000010,uVar9,uVar11);
    iVar13 = rga_log_enable_get();
    if ((0 < iVar13) && (iVar13 = rga_log_level_get(), iVar13 < 6)) {
      pFVar16 = (FILE *)**(undefined4 **)(iVar15 + DAT_00021e18);
      iVar13 = rga_get_current_time_ms();
      iVar12 = rga_get_start_time_ms();
      uVar9 = translate_format_str(in_stack_00000010);
      iVar10 = strcmp((char *)(iVar10 + 0x20eb0),param_1);
      if (iVar10 == 0) {
        uVar11 = 7;
      }
      else {
        uVar11 = 6;
      }
      uVar11 = querystring(uVar11);
      fprintf(pFVar16,(char *)(DAT_00021d48 + 0x21240),iVar13 - iVar12,DAT_00021d44 + 0x21234,0x33f,
              param_1,in_stack_00000010,uVar9,uVar11);
      return -1;
    }
  }
  else {
    if ((in_stack_00000010 & 0xfffffcff) != 0x1000) {
      uVar14 = in_stack_00000010 & 0xfffffbff;
      if (uVar14 == 0xa00) {
        if ((in_stack_0000005c & 0x10) == 0) {
          uVar9 = translate_format_str(in_stack_00000010);
          iVar10 = strcmp((char *)(iVar2 + 0x21360),param_1);
          if (iVar10 == 0) {
            uVar11 = 7;
          }
          else {
            uVar11 = 6;
          }
          uVar11 = querystring(uVar11);
          rga_error_msg_set((char *)(DAT_00021d60 + 0x21394),param_1,in_stack_00000010,uVar9,uVar11)
          ;
          iVar10 = rga_log_enable_get();
          if (iVar10 < 1) {
            return -1;
          }
          iVar10 = rga_log_level_get();
          if (5 < iVar10) {
            return -1;
          }
          pFVar16 = (FILE *)**(undefined4 **)(iVar15 + DAT_00021e18);
          iVar10 = rga_get_current_time_ms();
          iVar13 = rga_get_start_time_ms();
          uVar9 = translate_format_str(in_stack_00000010);
          iVar12 = strcmp((char *)(iVar2 + 0x21360),param_1);
          if (iVar12 == 0) {
            uVar11 = 7;
          }
          else {
            uVar11 = 6;
          }
          uVar11 = querystring(uVar11);
          fprintf(pFVar16,(char *)(DAT_00021d68 + 0x21418),iVar10 - iVar13,DAT_00021d64 + 0x2140c,
                  0x34e,param_1,in_stack_00000010,uVar9,uVar11);
          return -1;
        }
      }
      else if (uVar14 == 0xb00) {
        if ((in_stack_0000005c & 0x40) == 0) {
          uVar9 = translate_format_str(in_stack_00000010);
          iVar10 = strcmp((char *)(iVar12 + 0x210fc),param_1);
          if (iVar10 == 0) {
            uVar11 = 7;
          }
          else {
            uVar11 = 6;
          }
          uVar11 = querystring(uVar11);
          rga_error_msg_set((char *)(DAT_00021d38 + 0x21130),param_1,in_stack_00000010,uVar9,uVar11)
          ;
          iVar10 = rga_log_enable_get();
          if (iVar10 < 1) {
            return -1;
          }
          iVar10 = rga_log_level_get();
          if (5 < iVar10) {
            return -1;
          }
          pFVar16 = (FILE *)**(undefined4 **)(iVar15 + DAT_00021e18);
          iVar10 = rga_get_current_time_ms();
          iVar13 = rga_get_start_time_ms();
          uVar9 = translate_format_str(in_stack_00000010);
          iVar12 = strcmp((char *)(iVar12 + 0x210fc),param_1);
          if (iVar12 == 0) {
            uVar11 = 7;
          }
          else {
            uVar11 = 6;
          }
          uVar11 = querystring(uVar11);
          fprintf(pFVar16,(char *)(DAT_00021d40 + 0x211b4),iVar10 - iVar13,DAT_00021d3c + 0x211a8,
                  0x359,param_1,in_stack_00000010,uVar9,uVar11);
          return -1;
        }
      }
      else if (uVar14 == 0x800) {
        if ((in_stack_0000005c & 0x100) == 0) {
          uVar9 = translate_format_str(in_stack_00000010);
          iVar10 = strcmp((char *)(iVar1 + 0x2127c),param_1);
          if (iVar10 == 0) {
            uVar11 = 7;
          }
          else {
            uVar11 = 6;
          }
          uVar11 = querystring(uVar11);
          rga_error_msg_set((char *)(DAT_00021d50 + 0x212b0),param_1,in_stack_00000010,uVar9,uVar11)
          ;
          iVar10 = rga_log_enable_get();
          if (iVar10 < 1) {
            return -1;
          }
          iVar10 = rga_log_level_get();
          if (5 < iVar10) {
            return -1;
          }
          pFVar16 = (FILE *)**(undefined4 **)(iVar15 + DAT_00021e18);
          iVar10 = rga_get_current_time_ms();
          iVar13 = rga_get_start_time_ms();
          uVar9 = translate_format_str(in_stack_00000010);
          iVar12 = strcmp((char *)(iVar1 + 0x2127c),param_1);
          if (iVar12 == 0) {
            uVar11 = 7;
          }
          else {
            uVar11 = 6;
          }
          uVar11 = querystring(uVar11);
          fprintf(pFVar16,(char *)(DAT_00021d58 + 0x21334),iVar10 - iVar13,DAT_00021d54 + 0x21328,
                  0x364,param_1,in_stack_00000010,uVar9,uVar11);
          return -1;
        }
      }
      else if (uVar14 == 0x900) {
        if ((in_stack_0000005c & 0x400) == 0) {
          uVar9 = translate_format_str(in_stack_00000010);
          iVar10 = strcmp((char *)(iVar3 + 0x21454),param_1);
          if (iVar10 == 0) {
            uVar11 = 7;
          }
          else {
            uVar11 = 6;
          }
          uVar11 = querystring(uVar11);
          rga_error_msg_set((char *)(DAT_00021d70 + 0x21488),param_1,in_stack_00000010,uVar9,uVar11)
          ;
          iVar10 = rga_log_enable_get();
          if (iVar10 < 1) {
            return -1;
          }
          iVar10 = rga_log_level_get();
          if (5 < iVar10) {
            return -1;
          }
          pFVar16 = (FILE *)**(undefined4 **)(iVar15 + DAT_00021e18);
          iVar10 = rga_get_current_time_ms();
          iVar13 = rga_get_start_time_ms();
          uVar9 = translate_format_str(in_stack_00000010);
          iVar12 = strcmp((char *)(iVar3 + 0x21454),param_1);
          if (iVar12 == 0) {
            uVar11 = 7;
          }
          else {
            uVar11 = 6;
          }
          uVar11 = querystring(uVar11);
          fprintf(pFVar16,(char *)(DAT_00021d78 + 0x2150c),iVar10 - iVar13,DAT_00021d74 + 0x21500,
                  0x36f,param_1,in_stack_00000010,uVar9,uVar11);
          return -1;
        }
      }
      else {
        if ((in_stack_00000010 & 0xfffffeff) == 0x2000) {
          if ((in_stack_0000005c & 0x20) == 0) {
            uVar9 = translate_format_str(in_stack_00000010);
            iVar10 = strcmp((char *)(iVar4 + 0x21690),param_1);
            if (iVar10 == 0) {
              uVar11 = 7;
            }
            else {
              uVar11 = 6;
            }
            uVar11 = querystring(uVar11);
            rga_error_msg_set((char *)(DAT_00021d98 + 0x216c4),param_1,in_stack_00000010,uVar9,
                              uVar11);
            iVar10 = rga_log_enable_get();
            if (iVar10 < 1) {
              return -1;
            }
            iVar10 = rga_log_level_get();
            if (5 < iVar10) {
              return -1;
            }
            pFVar16 = (FILE *)**(undefined4 **)(iVar15 + DAT_00021e18);
            iVar10 = rga_get_current_time_ms();
            iVar13 = rga_get_start_time_ms();
            uVar9 = translate_format_str(in_stack_00000010);
            iVar12 = strcmp((char *)(iVar4 + 0x21690),param_1);
            if (iVar12 == 0) {
              uVar11 = 7;
            }
            else {
              uVar11 = 6;
            }
            uVar11 = querystring(uVar11);
            fprintf(pFVar16,(char *)(DAT_00021da0 + 0x21748),iVar10 - iVar13,DAT_00021d9c + 0x2173c,
                    0x37a,param_1,in_stack_00000010,uVar9,uVar11);
            return -1;
          }
          iVar10 = FUN_0001e884(param_1,in_stack_00000000,in_stack_00000004,in_stack_00000008,
                                in_stack_0000000c,in_stack_00000010,in_stack_0000004c,
                                in_stack_00000050,in_stack_00000054,in_stack_00000058);
          if (iVar10 != 1) {
            return iVar10;
          }
          rga_error_msg_set((char *)(DAT_00021d7c + 0x21574));
          iVar10 = rga_log_enable_get();
          if (iVar10 < 1) {
            return 2;
          }
          iVar10 = rga_log_level_get();
          if (5 < iVar10) {
            return 2;
          }
          pFVar16 = (FILE *)**(undefined4 **)(iVar15 + DAT_00021e18);
          iVar10 = rga_get_current_time_ms();
          iVar13 = rga_get_start_time_ms();
          fprintf(pFVar16,(char *)(DAT_00021d84 + 0x215c0),iVar10 - iVar13,DAT_00021d80 + 0x215bc,
                  0x381);
          return 2;
        }
        if ((in_stack_00000010 & 0xfffffeff) == 0x2200) {
          if ((in_stack_0000005c & 0x200) == 0) {
            uVar9 = translate_format_str(in_stack_00000010);
            iVar10 = strcmp((char *)(iVar5 + 0x21774),param_1);
            if (iVar10 == 0) {
              uVar11 = 7;
            }
            else {
              uVar11 = 6;
            }
            uVar11 = querystring(uVar11);
            rga_error_msg_set((char *)(DAT_00021da8 + 0x217a8),param_1,in_stack_00000010,uVar9,
                              uVar11);
            iVar10 = rga_log_enable_get();
            if (iVar10 < 1) {
              return -1;
            }
            iVar10 = rga_log_level_get();
            if (5 < iVar10) {
              return -1;
            }
            pFVar16 = (FILE *)**(undefined4 **)(iVar15 + DAT_00021e18);
            iVar10 = rga_get_current_time_ms();
            iVar13 = rga_get_start_time_ms();
            uVar9 = translate_format_str(in_stack_00000010);
            iVar12 = strcmp((char *)(iVar5 + 0x21774),param_1);
            if (iVar12 == 0) {
              uVar11 = 7;
            }
            else {
              uVar11 = 6;
            }
            uVar11 = querystring(uVar11);
            fprintf(pFVar16,(char *)(DAT_00021db0 + 0x2182c),iVar10 - iVar13,DAT_00021dac + 0x21820,
                    0x386,param_1,in_stack_00000010,uVar9,uVar11);
            return -1;
          }
          iVar10 = FUN_0001e884(param_1,in_stack_00000000,in_stack_00000004,in_stack_00000008,
                                in_stack_0000000c,in_stack_00000010,in_stack_0000004c,
                                in_stack_00000050,in_stack_00000054,in_stack_00000058);
          if (iVar10 != 1) {
            return iVar10;
          }
          rga_error_msg_set((char *)(DAT_00021d88 + 0x2161c));
          iVar10 = rga_log_enable_get();
          if (iVar10 < 1) {
            return 2;
          }
          iVar10 = rga_log_level_get();
          if (5 < iVar10) {
            return 2;
          }
          pFVar16 = (FILE *)**(undefined4 **)(iVar15 + DAT_00021e18);
          iVar10 = rga_get_current_time_ms();
          iVar13 = rga_get_start_time_ms();
          fprintf(pFVar16,(char *)(DAT_00021d90 + 0x21668),iVar10 - iVar13,DAT_00021d8c + 0x21664,
                  0x38d);
          return 2;
        }
        if ((in_stack_00000010 & 0xfffff9ff) == 0x1900) {
          if ((in_stack_0000005c & 0x1000) == 0) {
            uVar9 = translate_format_str(in_stack_00000010);
            iVar10 = strcmp((char *)(iVar7 + 0x2197c),param_1);
            if (iVar10 == 0) {
              uVar11 = 7;
            }
            else {
              uVar11 = 6;
            }
            uVar11 = querystring(uVar11);
            rga_error_msg_set((char *)(DAT_00021dc8 + 0x219b0),param_1,in_stack_00000010,uVar9,
                              uVar11);
            iVar10 = rga_log_enable_get();
            if (iVar10 < 1) {
              return -1;
            }
            iVar10 = rga_log_level_get();
            if (5 < iVar10) {
              return -1;
            }
            pFVar16 = (FILE *)**(undefined4 **)(iVar15 + DAT_00021e18);
            iVar10 = rga_get_current_time_ms();
            iVar13 = rga_get_start_time_ms();
            uVar9 = translate_format_str(in_stack_00000010);
            iVar12 = strcmp((char *)(iVar7 + 0x2197c),param_1);
            if (iVar12 == 0) {
              uVar11 = 7;
            }
            else {
              uVar11 = 6;
            }
            uVar11 = querystring(uVar11);
            fprintf(pFVar16,(char *)(DAT_00021dd0 + 0x21a34),iVar10 - iVar13,DAT_00021dcc + 0x21a28,
                    0x393,param_1,in_stack_00000010,uVar9,uVar11);
            return -1;
          }
        }
        else if ((in_stack_00000010 & 0xfffff9ff) == 0x1800) {
          if ((in_stack_0000005c & 0x2000) == 0) {
            uVar9 = translate_format_str(in_stack_00000010);
            iVar10 = strcmp((char *)(iVar8 + 0x21e44),param_1);
            if (iVar10 == 0) {
              uVar11 = 7;
            }
            else {
              uVar11 = 6;
            }
            uVar11 = querystring(uVar11);
            rga_error_msg_set((char *)(DAT_00021e14 + 0x21e78),param_1,in_stack_00000010,uVar9,
                              uVar11);
            iVar10 = rga_log_enable_get();
            if (iVar10 < 1) {
              return -1;
            }
            iVar10 = rga_log_level_get();
            if (5 < iVar10) {
              return -1;
            }
            pFVar16 = (FILE *)**(undefined4 **)(iVar15 + DAT_00021e18);
            iVar10 = rga_get_current_time_ms();
            iVar13 = rga_get_start_time_ms();
            uVar9 = translate_format_str(in_stack_00000010);
            iVar12 = strcmp((char *)(iVar8 + 0x21e44),param_1);
            if (iVar12 == 0) {
              uVar11 = 7;
            }
            else {
              uVar11 = 6;
            }
            uVar11 = querystring(uVar11);
            fprintf(pFVar16,(char *)(DAT_00021e20 + 0x21efc),iVar10 - iVar13,DAT_00021e1c + 0x21ef0,
                    0x39f,param_1,in_stack_00000010,uVar9,uVar11);
            return -1;
          }
        }
        else if (in_stack_00000010 == 0x1500) {
          if ((in_stack_0000005c & 0x4000) == 0) {
            uVar9 = translate_format_str(0x1500);
            iVar10 = strcmp((char *)(DAT_00021dfc + 0x21c38),param_1);
            if (iVar10 == 0) {
              uVar11 = 7;
            }
            else {
              uVar11 = 6;
            }
            uVar11 = querystring(uVar11);
            rga_error_msg_set((char *)(DAT_00021e00 + 0x21c64),param_1,0x1500,uVar9,uVar11);
            iVar10 = rga_log_enable_get();
            if (iVar10 < 1) {
              return -1;
            }
            iVar10 = rga_log_level_get();
            if (5 < iVar10) {
              return -1;
            }
            pFVar16 = (FILE *)**(undefined4 **)(iVar15 + DAT_00021e18);
            iVar10 = rga_get_current_time_ms();
            iVar13 = rga_get_start_time_ms();
            uVar9 = translate_format_str(0x1500);
            iVar12 = strcmp((char *)(DAT_00021e04 + 0x21cb4),param_1);
            if (iVar12 == 0) {
              uVar11 = 7;
            }
            else {
              uVar11 = 6;
            }
            uVar11 = querystring(uVar11);
            fprintf(pFVar16,(char *)(DAT_00021e0c + 0x21cf4),iVar10 - iVar13,DAT_00021e08 + 0x21cec,
                    0x3aa,param_1,0x1500,uVar9,uVar11);
            return -1;
          }
        }
        else {
          if (in_stack_00000010 != 0x1400) {
            if (in_stack_00000010 != 0x3000) {
              uVar9 = translate_format_str(in_stack_00000010);
              iVar10 = strcmp((char *)(DAT_00021dd4 + 0x21a64),param_1);
              if (iVar10 == 0) {
                uVar11 = 7;
              }
              else {
                uVar11 = 6;
              }
              uVar11 = querystring(uVar11);
              rga_error_msg_set((char *)(DAT_00021dd8 + 0x21a90),param_1,in_stack_00000010,uVar9,
                                uVar11);
              iVar10 = rga_log_enable_get();
              if (iVar10 < 1) {
                return -1;
              }
              iVar10 = rga_log_level_get();
              if (5 < iVar10) {
                return -1;
              }
              pFVar16 = (FILE *)**(undefined4 **)(iVar15 + DAT_00021e18);
              iVar10 = rga_get_current_time_ms();
              iVar13 = rga_get_start_time_ms();
              uVar9 = translate_format_str(in_stack_00000010);
              iVar12 = strcmp((char *)(DAT_00021ddc + 0x21ae0),param_1);
              if (iVar12 == 0) {
                uVar11 = 7;
              }
              else {
                uVar11 = 6;
              }
              uVar11 = querystring(uVar11);
              fprintf(pFVar16,(char *)(DAT_00021de0 + 0x21b0c),iVar10 - iVar13,
                      DAT_00021de4 + 0x21b18,0x3c6,param_1,in_stack_00000010,uVar9,uVar11);
              return -1;
            }
            if ((in_stack_0000005c & 0x10000) != 0) {
              return 2;
            }
            uVar9 = translate_format_str(0x3000);
            iVar10 = strcmp((char *)(iVar6 + 0x2188c),param_1);
            if (iVar10 == 0) {
              uVar11 = 7;
            }
            else {
              uVar11 = 6;
            }
            uVar11 = querystring(uVar11);
            rga_error_msg_set((char *)(DAT_00021db8 + 0x218c0),param_1,0x3000,uVar9,uVar11);
            iVar10 = rga_log_enable_get();
            if (iVar10 < 1) {
              return -1;
            }
            iVar10 = rga_log_level_get();
            if (5 < iVar10) {
              return -1;
            }
            pFVar16 = (FILE *)**(undefined4 **)(iVar15 + DAT_00021e18);
            iVar10 = rga_get_current_time_ms();
            iVar13 = rga_get_start_time_ms();
            uVar9 = translate_format_str(0x3000);
            iVar12 = strcmp((char *)(iVar6 + 0x2188c),param_1);
            if (iVar12 == 0) {
              uVar11 = 7;
            }
            else {
              uVar11 = 6;
            }
            uVar11 = querystring(uVar11);
            fprintf(pFVar16,(char *)(DAT_00021dc0 + 0x2194c),iVar10 - iVar13,DAT_00021dbc + 0x21944,
                    0x3c0,param_1,0x3000,uVar9,uVar11);
            return -1;
          }
          if ((in_stack_0000005c & 0x8000) == 0) {
            uVar9 = translate_format_str(0x1400);
            iVar10 = strcmp((char *)(DAT_00021de8 + 0x21b48),param_1);
            if (iVar10 == 0) {
              uVar11 = 7;
            }
            else {
              uVar11 = 6;
            }
            uVar11 = querystring(uVar11);
            rga_error_msg_set((char *)(DAT_00021dec + 0x21b74),param_1,0x1400,uVar9,uVar11);
            iVar10 = rga_log_enable_get();
            if (iVar10 < 1) {
              return -1;
            }
            iVar10 = rga_log_level_get();
            if (5 < iVar10) {
              return -1;
            }
            pFVar16 = (FILE *)**(undefined4 **)(iVar15 + DAT_00021e18);
            iVar10 = rga_get_current_time_ms();
            iVar13 = rga_get_start_time_ms();
            uVar9 = translate_format_str(0x1400);
            iVar12 = strcmp((char *)(DAT_00021df0 + 0x21bc4),param_1);
            if (iVar12 == 0) {
              uVar11 = 7;
            }
            else {
              uVar11 = 6;
            }
            uVar11 = querystring(uVar11);
            fprintf(pFVar16,(char *)(DAT_00021df8 + 0x21c04),iVar10 - iVar13,DAT_00021df4 + 0x21bfc,
                    0x3b5,param_1,0x1400,uVar9,uVar11);
            return -1;
          }
        }
      }
      iVar10 = FUN_0001e884(param_1,in_stack_00000000,in_stack_00000004,in_stack_00000008,
                            in_stack_0000000c,in_stack_00000010,in_stack_0000004c,in_stack_00000050,
                            in_stack_00000054,in_stack_00000058);
      if (iVar10 == 1) {
        return 2;
      }
      return iVar10;
    }
    if ((in_stack_0000005c & 8) != 0 || (in_stack_00000060 & 0x400000) != 0) {
      return 2;
    }
    uVar9 = translate_format_str(in_stack_00000010);
    iVar10 = strcmp((char *)(DAT_00021d20 + 0x2100c),param_1);
    if (iVar10 == 0) {
      uVar11 = 7;
    }
    else {
      uVar11 = 6;
    }
    uVar11 = querystring(uVar11);
    rga_error_msg_set((char *)(DAT_00021d24 + 0x21038),param_1,in_stack_00000010,uVar9,uVar11);
    iVar10 = rga_log_enable_get();
    if ((0 < iVar10) && (iVar10 = rga_log_level_get(), iVar10 < 6)) {
      pFVar16 = (FILE *)**(undefined4 **)(iVar15 + DAT_00021e18);
      iVar10 = rga_get_current_time_ms();
      iVar13 = rga_get_start_time_ms();
      uVar9 = translate_format_str(in_stack_00000010);
      iVar12 = strcmp((char *)(DAT_00021d28 + 0x21088),param_1);
      if (iVar12 == 0) {
        uVar11 = 7;
      }
      else {
        uVar11 = 6;
      }
      uVar11 = querystring(uVar11);
      fprintf(pFVar16,(char *)(DAT_00021d30 + 0x210c0),iVar10 - iVar13,DAT_00021d2c + 0x210b4,0x347,
              param_1,in_stack_00000010,uVar9,uVar11);
      return -1;
    }
  }
  return -1;
}



/* ===== rga_check_align @ 00021f10 size=1104 ===== */

/* rga_check_align(char const*, rga_buffer_t, int, bool) */

undefined4 rga_check_align(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int iVar7;
  int iVar8;
  FILE *pFVar9;
  int unaff_r9;
  uint in_stack_00000000;
  uint in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_0000001c;
  int in_stack_0000004c;
  char in_stack_00000050;
  
  iVar8 = DAT_00022360 + 0x21f3c;
  if (in_stack_0000001c == 2) {
    if ((in_stack_00000000 & 0xf) != 0) {
      rga_error_msg_set((char *)(DAT_000223a4 + 0x2229c),param_1,in_stack_00000000);
      iVar6 = rga_log_enable_get();
      if (0 < iVar6) {
        rga_log_level_get();
      }
      pFVar9 = (FILE *)**(undefined4 **)(iVar8 + DAT_00022368);
      iVar8 = rga_get_current_time_ms();
      iVar6 = rga_get_start_time_ms();
      fprintf(pFVar9,(char *)(DAT_000223a8 + 0x222dc),iVar8 - iVar6,DAT_000223ac + 0x222e4,0x3d6,
              param_1,in_stack_00000000);
      return 0xffffffff;
    }
    if ((in_stack_00000004 & 0xf) != 0) {
      rga_error_msg_set((char *)(DAT_00022364 + 0x21fe4),param_1,in_stack_00000004);
      iVar6 = rga_log_enable_get();
      if (0 < iVar6) {
        rga_log_level_get();
      }
      pFVar9 = (FILE *)**(undefined4 **)(iVar8 + DAT_00022368);
      iVar8 = rga_get_current_time_ms();
      iVar6 = rga_get_start_time_ms();
      fprintf(pFVar9,(char *)(DAT_0002236c + 0x22024),iVar8 - iVar6,DAT_00022370 + 0x2202c,0x3dc,
              param_1,in_stack_00000004);
      return 0xffffffff;
    }
  }
  else if (in_stack_0000001c == 4) {
    if ((in_stack_00000000 & 7) != 0) {
      rga_error_msg_set((char *)(DAT_00022374 + 0x22050),param_1,in_stack_00000000);
      iVar6 = rga_log_enable_get();
      if (0 < iVar6) {
        rga_log_level_get();
      }
      pFVar9 = (FILE *)**(undefined4 **)(iVar8 + DAT_00022368);
      iVar8 = rga_get_current_time_ms();
      iVar6 = rga_get_start_time_ms();
      fprintf(pFVar9,(char *)(DAT_00022378 + 0x22090),iVar8 - iVar6,DAT_0002237c + 0x22098,0x3e3,
              param_1,in_stack_00000000);
      return 0xffffffff;
    }
    if ((in_stack_00000004 & 7) != 0) {
      rga_error_msg_set((char *)(DAT_00022398 + 0x22230),param_1,in_stack_00000004);
      iVar6 = rga_log_enable_get();
      if (0 < iVar6) {
        rga_log_level_get();
      }
      pFVar9 = (FILE *)**(undefined4 **)(iVar8 + DAT_00022368);
      iVar8 = rga_get_current_time_ms();
      iVar6 = rga_get_start_time_ms();
      fprintf(pFVar9,(char *)(DAT_0002239c + 0x22270),iVar8 - iVar6,DAT_000223a0 + 0x22278,0x3e9,
              param_1,in_stack_00000004);
      return 0xffffffff;
    }
    if (in_stack_00000050 != '\0') {
      if ((in_stack_00000008 & 0xf) != 0) {
        rga_error_msg_set((char *)(DAT_000223b0 + 0x22308),param_1,in_stack_00000008);
        iVar6 = rga_log_enable_get();
        if (0 < iVar6) {
          rga_log_level_get();
        }
        pFVar9 = (FILE *)**(undefined4 **)(iVar8 + DAT_00022368);
        iVar8 = rga_get_current_time_ms();
        iVar6 = rga_get_start_time_ms();
        fprintf(pFVar9,(char *)(DAT_000223b4 + 0x22348),iVar8 - iVar6,DAT_000223b8 + 0x22350,0x3f0,
                param_1,in_stack_00000008);
        return 0xffffffff;
      }
      if ((in_stack_0000000c & 0xf) != 0) {
        rga_error_msg_set((char *)(DAT_00022380 + 0x220bc),param_1,in_stack_0000000c);
        iVar6 = rga_log_enable_get();
        if (0 < iVar6) {
          rga_log_level_get();
        }
        pFVar9 = (FILE *)**(undefined4 **)(iVar8 + DAT_00022368);
        iVar8 = rga_get_current_time_ms();
        iVar6 = rga_get_start_time_ms();
        fprintf(pFVar9,(char *)(DAT_00022384 + 0x220fc),iVar8 - iVar6,DAT_00022388 + 0x22104,0x3f6,
                param_1,in_stack_0000000c);
        return 0xffffffff;
      }
    }
  }
  iVar6 = in_stack_0000004c * 8;
  iVar3 = get_perPixel_stride_from_format(in_stack_00000010);
  __aeabi_idivmod(iVar3 * in_stack_00000008,iVar6);
  if (extraout_r1 == 0) {
    uVar4 = 2;
  }
  else {
    iVar7 = iVar3;
    if (0 < iVar3) {
      iVar7 = iVar6;
    }
    if (0 < iVar7) {
      iVar7 = 1;
      do {
        __aeabi_idivmod(iVar3,iVar7);
        if ((extraout_r1_00 == 0) && (__aeabi_idivmod(iVar6,iVar7), extraout_r1_01 == 0)) {
          unaff_r9 = iVar7;
        }
        iVar7 = iVar7 + 1;
        iVar1 = iVar3 - iVar7;
        iVar2 = iVar3;
        if (iVar7 <= iVar3) {
          iVar1 = iVar6 - iVar7;
          iVar2 = iVar6;
        }
      } while (iVar1 < 0 == SBORROW4(iVar2,iVar7));
    }
    uVar4 = __aeabi_idiv(in_stack_0000004c * iVar3 * 8,unaff_r9);
    uVar4 = __aeabi_idiv(uVar4,iVar3);
    uVar5 = translate_format_str(in_stack_00000010);
    rga_error_msg_set((char *)(DAT_0002238c + 0x221a0),param_1,in_stack_00000008,uVar5,uVar4);
    iVar6 = rga_log_enable_get();
    if ((0 < iVar6) && (iVar6 = rga_log_level_get(), iVar6 < 6)) {
      pFVar9 = (FILE *)**(undefined4 **)(iVar8 + DAT_00022368);
      iVar8 = rga_get_current_time_ms();
      iVar6 = rga_get_start_time_ms();
      uVar5 = translate_format_str(in_stack_00000010);
      fprintf(pFVar9,(char *)(DAT_00022394 + 0x2220c),iVar8 - iVar6,DAT_00022390 + 0x22200,0x408,
              param_1,in_stack_00000008,uVar5,uVar4);
    }
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



/* ===== rga_check_blend @ 000223bc size=1256 ===== */

/* rga_check_blend(rga_buffer_t, rga_buffer_t, rga_buffer_t, int, int) */

undefined4 rga_check_blend(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  FILE *pFVar6;
  int in_stack_0000000c;
  int in_stack_00000054;
  int in_stack_00000058;
  int in_stack_00000064;
  int in_stack_000000ac;
  int in_stack_000000b0;
  int in_stack_000000bc;
  int in_stack_000000f8;
  uint in_stack_000000fc;
  
  iVar5 = DAT_000228a4 + 0x223e0;
  NormalRgaIsRgbFormat(in_stack_0000000c);
  NormalRgaIsRgbFormat(in_stack_00000064);
  NormalRgaIsRgbFormat(in_stack_000000bc);
  in_stack_000000fc = in_stack_000000fc & 0x1ffc0;
  if (in_stack_000000fc == 0x80) {
LAB_00022540:
    if (in_stack_000000f8 != 0) {
LAB_0002254c:
      if (in_stack_000000b0 != in_stack_00000058 || in_stack_000000ac != in_stack_00000054) {
        rga_error_msg_set((char *)(DAT_000228d4 + 0x227c0),in_stack_00000054,in_stack_00000058,
                          in_stack_000000ac,in_stack_000000b0);
        iVar1 = rga_log_enable_get();
        if ((0 < iVar1) && (iVar1 = rga_log_level_get(), iVar1 < 6)) {
          pFVar6 = (FILE *)**(undefined4 **)(iVar5 + DAT_000228ac);
          iVar5 = rga_get_current_time_ms();
          iVar1 = rga_get_start_time_ms();
          fprintf(pFVar6,(char *)(DAT_000228d8 + 0x22804),iVar5 - iVar1,DAT_000228dc + 0x22810,0x44f
                  ,in_stack_00000054,in_stack_00000058,in_stack_000000ac,in_stack_000000b0);
        }
        goto LAB_0002279c;
      }
    }
LAB_00022558:
    uVar2 = 2;
  }
  else {
    if (in_stack_000000fc < 0x81) {
      if (in_stack_000000fc == 0x40) {
        iVar1 = NormalRgaFormatHasAlpha(in_stack_0000000c);
        if (iVar1 == 0) {
          uVar2 = translate_format_str(in_stack_0000000c);
          uVar3 = translate_format_str(in_stack_00000064);
          uVar4 = translate_format_str(in_stack_000000bc);
          rga_error_msg_set((char *)(DAT_000228d0 + 0x22790),in_stack_0000000c,uVar2,
                            in_stack_00000064,uVar3,in_stack_000000bc,uVar4);
          iVar1 = rga_log_enable_get();
          if ((0 < iVar1) && (iVar1 = rga_log_level_get(), iVar1 < 6)) {
            pFVar6 = (FILE *)**(undefined4 **)(iVar5 + DAT_000228ac);
            iVar5 = rga_get_current_time_ms();
            iVar1 = rga_get_start_time_ms();
            uVar2 = translate_format_str(in_stack_0000000c);
            uVar3 = translate_format_str(in_stack_00000064);
            uVar4 = translate_format_str(in_stack_000000bc);
            fprintf(pFVar6,(char *)(DAT_000228e0 + 0x22880),iVar5 - iVar1,DAT_000228e4 + 0x2288c,
                    0x426,in_stack_0000000c,uVar2,in_stack_00000064,uVar3,in_stack_000000bc,uVar4);
            return 0xffffffff;
          }
          goto LAB_0002279c;
        }
      }
      else {
LAB_0002256c:
        iVar1 = NormalRgaFormatHasAlpha(in_stack_0000000c);
        if ((iVar1 == 0) && (iVar1 = NormalRgaFormatHasAlpha(in_stack_000000bc), iVar1 == 0)) {
          uVar2 = translate_format_str(in_stack_0000000c);
          uVar3 = translate_format_str(in_stack_00000064);
          uVar4 = translate_format_str(in_stack_000000bc);
          rga_error_msg_set((char *)(DAT_000228b8 + 0x225d0),in_stack_0000000c,uVar2,
                            in_stack_00000064,uVar3,in_stack_000000bc,uVar4);
          iVar1 = rga_log_enable_get();
          if ((0 < iVar1) && (iVar1 = rga_log_level_get(), iVar1 < 6)) {
            pFVar6 = (FILE *)**(undefined4 **)(iVar5 + DAT_000228ac);
            iVar5 = rga_get_current_time_ms();
            iVar1 = rga_get_start_time_ms();
            uVar2 = translate_format_str(in_stack_0000000c);
            uVar3 = translate_format_str(in_stack_00000064);
            uVar4 = translate_format_str(in_stack_000000bc);
            fprintf(pFVar6,(char *)(DAT_000228bc + 0x22640),iVar5 - iVar1,DAT_000228c0 + 0x2264c,
                    0x445,in_stack_0000000c,uVar2,in_stack_00000064,uVar3,in_stack_000000bc,uVar4);
            return 0xffffffff;
          }
          goto LAB_0002279c;
        }
      }
      goto LAB_00022540;
    }
    if (in_stack_000000fc == 0x100) goto LAB_00022540;
    if (in_stack_000000fc != 0x2000) goto LAB_0002256c;
    if (in_stack_000000f8 != 0) {
      iVar1 = NormalRgaFormatHasAlpha(in_stack_00000064);
      if (iVar1 == 0) {
        uVar2 = translate_format_str(in_stack_0000000c);
        uVar3 = translate_format_str(in_stack_00000064);
        uVar4 = translate_format_str(in_stack_000000bc);
        rga_error_msg_set((char *)(DAT_000228a8 + 0x22494),in_stack_0000000c,uVar2,in_stack_00000064
                          ,uVar3,in_stack_000000bc,uVar4);
        iVar1 = rga_log_enable_get();
        if ((0 < iVar1) && (iVar1 = rga_log_level_get(), iVar1 < 6)) {
          pFVar6 = (FILE *)**(undefined4 **)(iVar5 + DAT_000228ac);
          iVar5 = rga_get_current_time_ms();
          iVar1 = rga_get_start_time_ms();
          uVar2 = translate_format_str(in_stack_0000000c);
          uVar3 = translate_format_str(in_stack_00000064);
          uVar4 = translate_format_str(in_stack_000000bc);
          fprintf(pFVar6,(char *)(DAT_000228b0 + 0x22504),iVar5 - iVar1,DAT_000228b4 + 0x22510,0x431
                  ,in_stack_0000000c,uVar2,in_stack_00000064,uVar3,in_stack_000000bc,uVar4);
          return 0xffffffff;
        }
        goto LAB_0002279c;
      }
      goto LAB_0002254c;
    }
    iVar1 = NormalRgaFormatHasAlpha(in_stack_000000bc);
    if (iVar1 != 0) goto LAB_00022558;
    uVar2 = translate_format_str(in_stack_0000000c);
    uVar3 = translate_format_str(in_stack_00000064);
    uVar4 = translate_format_str(in_stack_000000bc);
    rga_error_msg_set((char *)(DAT_000228c4 + 0x226b8),in_stack_0000000c,uVar2,in_stack_00000064,
                      uVar3,in_stack_000000bc,uVar4);
    iVar1 = rga_log_enable_get();
    if ((0 < iVar1) && (iVar1 = rga_log_level_get(), iVar1 < 6)) {
      pFVar6 = (FILE *)**(undefined4 **)(iVar5 + DAT_000228ac);
      iVar5 = rga_get_current_time_ms();
      iVar1 = rga_get_start_time_ms();
      uVar2 = translate_format_str(in_stack_0000000c);
      uVar3 = translate_format_str(in_stack_00000064);
      uVar4 = translate_format_str(in_stack_000000bc);
      fprintf(pFVar6,(char *)(DAT_000228c8 + 0x22728),iVar5 - iVar1,DAT_000228cc + 0x22734,0x43a,
              in_stack_0000000c,uVar2,in_stack_00000064,uVar3,in_stack_000000bc,uVar4);
      return 0xffffffff;
    }
LAB_0002279c:
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== rga_check_rotate @ 000228e8 size=276 ===== */

/* rga_check_rotate(int, rga_info_table_entry&) */

undefined4 rga_check_rotate(int param_1,rga_info_table_entry *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  FILE *pFVar4;
  
  iVar3 = DAT_000229fc + 0x22904;
  if ((*(uint *)param_2 & 6) == 0) {
LAB_0002291c:
    uVar1 = 2;
  }
  else {
    if ((param_1 & 0x20U) == 0) {
      if (((param_1 & 7U) == 0) || ((param_1 & 0x38U) == 0)) goto LAB_0002291c;
      rga_error_msg_set((char *)(DAT_00022a00 + 0x22934));
      iVar2 = rga_log_enable_get();
      if ((0 < iVar2) && (iVar2 = rga_log_level_get(), iVar2 < 6)) {
        pFVar4 = (FILE *)**(undefined4 **)(iVar3 + DAT_00022a08);
        iVar3 = rga_get_current_time_ms();
        iVar2 = rga_get_start_time_ms();
        fprintf(pFVar4,(char *)(DAT_00022a18 + 0x229f0),iVar3 - iVar2,DAT_00022a14 + 0x229ec,0x45f);
      }
    }
    else {
      rga_error_msg_set((char *)(DAT_00022a04 + 0x22954));
      iVar2 = rga_log_enable_get();
      if ((0 < iVar2) && (iVar2 = rga_log_level_get(), iVar2 < 6)) {
        pFVar4 = (FILE *)**(undefined4 **)(iVar3 + DAT_00022a08);
        iVar3 = rga_get_current_time_ms();
        iVar2 = rga_get_start_time_ms();
        fprintf(pFVar4,(char *)(DAT_00022a10 + 0x229a0),iVar3 - iVar2,DAT_00022a0c + 0x2299c,0x459);
        return 0xffffffff;
      }
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== rga_check_feature @ 00022a1c size=1452 ===== */

/* rga_check_feature(rga_buffer_t, rga_buffer_t, rga_buffer_t, int, int, int) */

undefined4 rga_check_feature(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  FILE *pFVar4;
  uint in_stack_00000010;
  uint in_stack_00000068;
  uint in_stack_000000c0;
  int in_stack_000000f8;
  uint in_stack_000000fc;
  uint in_stack_00000100;
  
  iVar3 = DAT_00022fc8 + 0x22a44;
  if (((in_stack_000000fc & 0x200000) != 0) && ((in_stack_00000100 & 2) == 0)) {
    uVar1 = querystring(8);
    rga_error_msg_set((char *)(DAT_00022fd0 + 0x22b64),uVar1);
    iVar2 = rga_log_enable_get();
    if (iVar2 < 1) {
      return 0xffffffff;
    }
    iVar2 = rga_log_level_get();
    if (5 < iVar2) {
      return 0xffffffff;
    }
    pFVar4 = (FILE *)**(undefined4 **)(iVar3 + DAT_00022fd4);
    iVar3 = rga_get_current_time_ms();
    iVar2 = rga_get_start_time_ms();
    uVar1 = querystring(8);
    fprintf(pFVar4,(char *)(DAT_00022fd8 + 0x22bbc),iVar3 - iVar2,DAT_00022fdc + 0x22bc0,0x46b,uVar1
           );
    return 0xffffffff;
  }
  if (((in_stack_000000fc & 0x400000) != 0) && ((in_stack_00000100 & 4) == 0)) {
    uVar1 = querystring(8);
    rga_error_msg_set((char *)(DAT_00022fe0 + 0x22be8),uVar1);
    iVar2 = rga_log_enable_get();
    if (iVar2 < 1) {
      return 0xffffffff;
    }
    iVar2 = rga_log_level_get();
    if (5 < iVar2) {
      return 0xffffffff;
    }
    pFVar4 = (FILE *)**(undefined4 **)(iVar3 + DAT_00022fd4);
    iVar3 = rga_get_current_time_ms();
    iVar2 = rga_get_start_time_ms();
    uVar1 = querystring(8);
    fprintf(pFVar4,(char *)(DAT_00022fe4 + 0x22c40),iVar3 - iVar2,DAT_00022fe8 + 0x22c44,0x471,uVar1
           );
    return 0xffffffff;
  }
  if (((in_stack_000000fc & 0x1000000) != 0) && ((in_stack_00000100 & 8) == 0)) {
    uVar1 = querystring(8);
    rga_error_msg_set((char *)(DAT_00022fec + 0x22c6c),uVar1);
    iVar2 = rga_log_enable_get();
    if (iVar2 < 1) {
      return 0xffffffff;
    }
    iVar2 = rga_log_level_get();
    if (5 < iVar2) {
      return 0xffffffff;
    }
    pFVar4 = (FILE *)**(undefined4 **)(iVar3 + DAT_00022fd4);
    iVar3 = rga_get_current_time_ms();
    iVar2 = rga_get_start_time_ms();
    uVar1 = querystring(8);
    fprintf(pFVar4,(char *)(DAT_00022ff0 + 0x22cc4),iVar3 - iVar2,DAT_00022ff4 + 0x22cc8,0x477,uVar1
           );
    return 0xffffffff;
  }
  if (((in_stack_000000fc & 0x800000) != 0) && ((in_stack_00000100 & 0x10) == 0)) {
    uVar1 = querystring(8);
    rga_error_msg_set((char *)(DAT_00022fcc + 0x22b38),uVar1);
    iVar2 = rga_log_enable_get();
    if (iVar2 < 1) {
      return 0xffffffff;
    }
    iVar2 = rga_log_level_get();
    if (5 < iVar2) {
      return 0xffffffff;
    }
    pFVar4 = (FILE *)**(undefined4 **)(iVar3 + DAT_00022fd4);
    iVar3 = rga_get_current_time_ms();
    iVar2 = rga_get_start_time_ms();
    uVar1 = querystring(8);
    fprintf(pFVar4,(char *)(DAT_00023034 + 0x22fb4),iVar3 - iVar2,DAT_00023038 + 0x22fb8,0x47d,uVar1
           );
    return 0xffffffff;
  }
  if (in_stack_000000f8 == 0) {
    in_stack_00000068 = in_stack_00000010 | in_stack_000000c0;
joined_r0x00022b18:
    if ((in_stack_00000068 & 0xf00) == 0) goto LAB_00022aac;
  }
  else {
    if (((in_stack_00000068 & 0xc) != 0) && ((in_stack_00000100 & 0x20) == 0)) {
      uVar1 = querystring(8);
      rga_error_msg_set((char *)(DAT_00023028 + 0x22efc),uVar1);
      iVar2 = rga_log_enable_get();
      if (iVar2 < 1) {
        return 0xffffffff;
      }
      iVar2 = rga_log_level_get();
      if (5 < iVar2) {
        return 0xffffffff;
      }
      pFVar4 = (FILE *)**(undefined4 **)(iVar3 + DAT_00022fd4);
      iVar3 = rga_get_current_time_ms();
      iVar2 = rga_get_start_time_ms();
      uVar1 = querystring(8);
      fprintf(pFVar4,(char *)(DAT_0002302c + 0x22f54),iVar3 - iVar2,DAT_00023030 + 0x22f58,0x483,
              uVar1);
      return 0xffffffff;
    }
    if (((in_stack_00000010 | in_stack_000000c0) & 0xf00) == 0) goto joined_r0x00022b18;
  }
  if ((in_stack_00000100 & 0x40) == 0) {
    uVar1 = querystring(8);
    rga_error_msg_set((char *)(DAT_00023004 + 0x22d70),uVar1);
    iVar2 = rga_log_enable_get();
    if (iVar2 < 1) {
      return 0xffffffff;
    }
    iVar2 = rga_log_level_get();
    if (5 < iVar2) {
      return 0xffffffff;
    }
    pFVar4 = (FILE *)**(undefined4 **)(iVar3 + DAT_00022fd4);
    iVar3 = rga_get_current_time_ms();
    iVar2 = rga_get_start_time_ms();
    uVar1 = querystring(8);
    fprintf(pFVar4,(char *)(DAT_00023008 + 0x22dc8),iVar3 - iVar2,DAT_0002300c + 0x22dcc,0x48c,uVar1
           );
    return 0xffffffff;
  }
LAB_00022aac:
  if (((in_stack_000000fc & 0x8000000) == 0) || ((in_stack_00000100 & 0x400) != 0)) {
    if (((in_stack_000000fc & 0x10000000) == 0) || ((in_stack_00000100 & 0x800) != 0)) {
      if (((in_stack_000000fc & 0x20000000) == 0) || ((in_stack_00000100 & 0x1000) != 0)) {
        return 2;
      }
      uVar1 = querystring(8);
      rga_error_msg_set((char *)(DAT_00022ff8 + 0x22cf0),uVar1);
      iVar2 = rga_log_enable_get();
      if ((0 < iVar2) && (iVar2 = rga_log_level_get(), iVar2 < 6)) {
        pFVar4 = (FILE *)**(undefined4 **)(iVar3 + DAT_00022fd4);
        iVar3 = rga_get_current_time_ms();
        iVar2 = rga_get_start_time_ms();
        uVar1 = querystring(8);
        fprintf(pFVar4,(char *)(DAT_00022ffc + 0x22d48),iVar3 - iVar2,DAT_00023000 + 0x22d4c,0x49e,
                uVar1);
      }
    }
    else {
      uVar1 = querystring(8);
      rga_error_msg_set((char *)(DAT_0002301c + 0x22e78),uVar1);
      iVar2 = rga_log_enable_get();
      if ((0 < iVar2) && (iVar2 = rga_log_level_get(), iVar2 < 6)) {
        pFVar4 = (FILE *)**(undefined4 **)(iVar3 + DAT_00022fd4);
        iVar3 = rga_get_current_time_ms();
        iVar2 = rga_get_start_time_ms();
        uVar1 = querystring(8);
        fprintf(pFVar4,(char *)(DAT_00023020 + 0x22ed0),iVar3 - iVar2,DAT_00023024 + 0x22ed4,0x498,
                uVar1);
        return 0xffffffff;
      }
    }
  }
  else {
    uVar1 = querystring(8);
    rga_error_msg_set((char *)(DAT_00023010 + 0x22df4),uVar1);
    iVar2 = rga_log_enable_get();
    if ((0 < iVar2) && (iVar2 = rga_log_level_get(), iVar2 < 6)) {
      pFVar4 = (FILE *)**(undefined4 **)(iVar3 + DAT_00022fd4);
      iVar3 = rga_get_current_time_ms();
      iVar2 = rga_get_start_time_ms();
      uVar1 = querystring(8);
      fprintf(pFVar4,(char *)(DAT_00023014 + 0x22e4c),iVar3 - iVar2,DAT_00023018 + 0x22e50,0x492,
              uVar1);
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}



/* ===== rga_check @ 0002303c size=1388 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* rga_check(rga_buffer_t, rga_buffer_t, rga_buffer_t, im_rect, im_rect, im_rect, int) */

int rga_check(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  FILE *pFVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a4;
  undefined4 in_stack_000000a8;
  undefined4 in_stack_000000ac;
  undefined4 in_stack_000000f8;
  undefined4 in_stack_000000fc;
  undefined4 in_stack_00000100;
  undefined4 in_stack_00000104;
  undefined4 in_stack_00000108;
  undefined4 in_stack_0000010c;
  undefined4 in_stack_00000110;
  undefined4 in_stack_00000114;
  undefined4 in_stack_00000118;
  undefined4 in_stack_0000011c;
  undefined4 in_stack_00000120;
  undefined4 in_stack_00000124;
  uint in_stack_00000128;
  undefined4 local_1a8 [18];
  undefined1 auStack_160 [4];
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 local_14c;
  uint local_148;
  undefined4 local_108;
  uint local_104;
  int local_b0;
  uint local_ac;
  undefined4 local_a8;
  int local_9c;
  undefined4 *local_98;
  uint local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_4;
  
  uStack_70 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_6c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_68 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_44 = 0;
  local_74 = 0;
  local_64 = 0;
  iVar5 = DAT_000235a8 + 0x23074;
  local_5c = 0;
  local_54 = 0;
  local_4c = 0;
  uStack_40 = 0;
  uStack_60 = uStack_70;
  uStack_58 = uStack_70;
  uStack_50 = uStack_70;
  uStack_48 = uStack_70;
  uStack_3c = uStack_70;
  uStack_4 = param_4;
  iVar1 = rga_get_info((rga_info_table_entry *)&local_74);
  if (iVar1 == 0) {
    rga_error_msg_set((char *)(DAT_000235b0 + 0x2323c));
    iVar1 = rga_log_enable_get();
    if (0 < iVar1) {
      rga_log_level_get();
    }
    pFVar3 = (FILE *)**(undefined4 **)(iVar5 + DAT_000235b4);
    iVar1 = rga_get_current_time_ms();
    iVar5 = rga_get_start_time_ms();
    local_1a8[0] = 0x4ae;
    fprintf(pFVar3,(char *)(DAT_000235b8 + 0x23278),iVar1 - iVar5,DAT_000235bc + 0x2327c);
    iVar1 = 0;
  }
  else {
    uVar4 = in_stack_00000128 & 0x1ffc0;
    if (uVar4 == 0) {
      local_98 = (undefined4 *)0x0;
    }
    else {
      memcpy(local_1a8,&stack0x000000b0,0x48);
      local_98 = (undefined4 *)
                 rga_is_buffer_valid(in_stack_000000a0,in_stack_000000a4,in_stack_000000a8,
                                     in_stack_000000ac);
    }
    local_ac = in_stack_00000128;
    local_b0 = (int)local_98;
    local_a8 = local_54;
    local_9c = (int)local_98;
    memcpy(&local_108,&stack0x00000048,0x58);
    memcpy(auStack_160,&stack0x000000a0,0x58);
    memcpy(local_1a8,&stack0x00000000,0x48);
    iVar1 = rga_check_feature(param_1,param_2,param_3,uStack_4);
    if (iVar1 == 2) {
      uVar2 = in_stack_00000128 & 0x200000;
      if (uVar2 == 0) {
        iVar6 = DAT_000235c4 + 0x2343c;
        local_14c = uStack_70;
        local_15c = in_stack_000000f8;
        local_158 = in_stack_000000fc;
        uStack_154 = in_stack_00000100;
        uStack_150 = in_stack_00000104;
        memcpy(local_1a8,&uStack_4,0x4c);
        iVar1 = rga_check_info(iVar6,param_1,param_2,param_3);
        if (iVar1 != 2) {
          return iVar1;
        }
        local_14c = local_5c;
        local_148 = in_stack_00000128;
        local_15c = in_stack_000000f8;
        local_158 = in_stack_000000fc;
        uStack_154 = in_stack_00000100;
        uStack_150 = in_stack_00000104;
        memcpy(local_1a8,&uStack_4,0x4c);
        iVar1 = rga_check_format(iVar6,param_1,param_2,param_3);
        if (iVar1 != 2) {
          return iVar1;
        }
        local_15c = local_68;
        local_158 = 1;
        memcpy(local_1a8,&uStack_4,0x4c);
        iVar1 = rga_check_align(iVar6,param_1,param_2,param_3);
        if (iVar1 != 2) {
          return iVar1;
        }
      }
      if (local_98 != (undefined4 *)0x0) {
        if ((local_74 & 6) != 0) {
          rga_error_msg_set((char *)(DAT_000235c8 + 0x234fc));
          iVar1 = rga_log_enable_get();
          if ((0 < iVar1) && (iVar1 = rga_log_level_get(), iVar1 < 6)) {
            pFVar3 = (FILE *)**(undefined4 **)(iVar5 + DAT_000235b4);
            iVar1 = rga_get_current_time_ms();
            iVar5 = rga_get_start_time_ms();
            local_1a8[0] = 0x4cb;
            fprintf(pFVar3,(char *)(DAT_000235cc + 0x23598),iVar1 - iVar5,DAT_000235d0 + 0x2359c);
            return -1;
          }
          return -1;
        }
        local_98 = &stack0x00000118;
        iVar5 = DAT_000235ac + 0x23184;
        local_14c = uStack_70;
        local_15c = in_stack_00000118;
        local_158 = in_stack_0000011c;
        uStack_154 = in_stack_00000120;
        uStack_150 = in_stack_00000124;
        memcpy(local_1a8,&stack0x000000ac,0x4c);
        iVar1 = rga_check_info(iVar5,in_stack_000000a0,in_stack_000000a4,in_stack_000000a8);
        if (iVar1 != 2) {
          return iVar1;
        }
        local_15c = *local_98;
        local_158 = local_98[1];
        uStack_154 = local_98[2];
        uStack_150 = local_98[3];
        local_14c = local_5c;
        local_148 = in_stack_00000128;
        memcpy(local_1a8,&stack0x000000ac,0x4c);
        iVar1 = rga_check_format(iVar5,in_stack_000000a0,in_stack_000000a4,in_stack_000000a8);
        if (iVar1 != 2) {
          return iVar1;
        }
        local_15c = local_68;
        local_158 = 1;
        memcpy(local_1a8,&stack0x000000ac,0x4c);
        iVar1 = rga_check_align(iVar5,in_stack_000000a0,in_stack_000000a4,in_stack_000000a8);
        if (iVar1 != 2) {
          return iVar1;
        }
      }
      local_98 = &stack0x00000108;
      local_14c = local_6c;
      iVar5 = DAT_000235c0 + 0x232e8;
      local_15c = in_stack_00000108;
      local_158 = in_stack_0000010c;
      uStack_154 = in_stack_00000110;
      uStack_150 = in_stack_00000114;
      memcpy(local_1a8,&stack0x00000054,0x4c);
      iVar1 = rga_check_info(iVar5,in_stack_00000048,in_stack_0000004c,in_stack_00000050);
      if (iVar1 == 2) {
        local_15c = *local_98;
        local_158 = local_98[1];
        uStack_154 = local_98[2];
        uStack_150 = local_98[3];
        local_14c = uStack_58;
        local_148 = in_stack_00000128;
        memcpy(local_1a8,&stack0x00000054,0x4c);
        iVar1 = rga_check_format(iVar5,in_stack_00000048,in_stack_0000004c,in_stack_00000050);
        if (iVar1 == 2) {
          local_15c = local_68;
          local_158 = 0;
          memcpy(local_1a8,&stack0x00000054,0x4c);
          iVar1 = rga_check_align(iVar5,in_stack_00000048,in_stack_0000004c,in_stack_00000050);
          if (iVar1 == 2) {
            if (uVar2 == 0) {
              local_108 = local_64;
              local_104 = in_stack_00000128;
              memcpy(auStack_160,&stack0x00000048,0x58);
              memcpy(local_1a8,&stack0x00000000,0x48);
              iVar1 = rga_check_limit(param_1,param_2,param_3,uStack_4);
              if (iVar1 != 2) {
                return iVar1;
              }
            }
            if (uVar4 != 0) {
              local_ac = in_stack_00000128;
              local_b0 = local_9c;
              memcpy(&local_108,&stack0x00000048,0x58);
              memcpy(auStack_160,&stack0x000000a0,0x58);
              memcpy(local_1a8,&stack0x00000000,0x48);
              iVar1 = rga_check_blend(param_1,param_2,param_3,uStack_4);
              if (iVar1 != 2) {
                return iVar1;
              }
            }
            iVar1 = rga_check_rotate(in_stack_00000128,(rga_info_table_entry *)&local_74);
          }
        }
      }
    }
  }
  return iVar1;
}



/* ===== rga_check_external @ 000235d4 size=768 ===== */

/* rga_check_external(rga_buffer_t, rga_buffer_t, rga_buffer_t, im_rect, im_rect, im_rect, int) */

undefined4
rga_check_external(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                  undefined4 param_6,undefined4 param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  FILE *pFVar8;
  int iVar9;
  int iVar10;
  int in_stack_00000054;
  int in_stack_00000058;
  int in_stack_00000064;
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a4;
  undefined4 in_stack_000000a8;
  int in_stack_000000ac;
  int in_stack_000000b0;
  int in_stack_000000bc;
  undefined4 in_stack_000000f8;
  undefined4 in_stack_000000fc;
  int in_stack_00000100;
  int in_stack_00000104;
  undefined4 in_stack_00000108;
  undefined4 in_stack_0000010c;
  int in_stack_00000110;
  int in_stack_00000114;
  undefined4 in_stack_00000118;
  undefined4 in_stack_0000011c;
  int in_stack_00000120;
  int in_stack_00000124;
  uint in_stack_00000128;
  undefined4 local_168;
  int local_164;
  undefined1 auStack_120 [88];
  undefined1 auStack_c8 [88];
  undefined4 local_70;
  undefined4 uStack_6c;
  int iStack_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  uint local_40;
  int local_4;
  
  iVar1 = in_stack_000000bc;
  iVar5 = in_stack_00000064;
  iVar3 = param_8;
  iVar10 = DAT_000238d4 + 0x23608;
  iVar9 = in_stack_00000110;
  iVar7 = in_stack_00000114;
  if ((in_stack_00000128 & 0x100000) != 0) {
    iVar9 = in_stack_00000100;
    iVar7 = in_stack_00000104;
  }
  local_4 = param_4;
  if (0 < in_stack_00000100 && 0 < in_stack_00000104) {
    local_4 = in_stack_00000100;
    param_5 = in_stack_00000104;
  }
  iVar2 = convert_to_rga_format(param_8);
  if (iVar2 == 0x10000) {
    rga_error_msg_set((char *)(DAT_000238dc + 0x237b4),iVar3);
    iVar7 = rga_log_enable_get();
    if ((0 < iVar7) && (iVar7 = rga_log_level_get(), iVar7 < 6)) {
      pFVar8 = (FILE *)**(undefined4 **)(iVar10 + DAT_000238e0);
      iVar7 = rga_get_current_time_ms();
      iVar5 = rga_get_start_time_ms();
      local_168 = 0x505;
      local_164 = iVar3;
      fprintf(pFVar8,(char *)(DAT_000238e8 + 0x23804),iVar7 - iVar5,DAT_000238e4 + 0x237fc);
      return 0xffffffff;
    }
  }
  else {
    if (0 < iVar7 && 0 < iVar9) {
      in_stack_00000054 = iVar9;
      in_stack_00000058 = iVar7;
    }
    iVar3 = convert_to_rga_format(iVar5);
    if (iVar3 != 0x10000) {
      memcpy(&local_168,&stack0x000000b0,0x48);
      iVar4 = rga_is_buffer_valid(in_stack_000000a0,in_stack_000000a4,in_stack_000000a8,
                                  in_stack_000000ac);
      iVar5 = iVar1;
      if (iVar4 != 0) {
        if ((0 < in_stack_00000120) && (0 < in_stack_00000124)) {
          in_stack_000000ac = in_stack_00000120;
          in_stack_000000b0 = in_stack_00000124;
        }
        iVar5 = convert_to_rga_format(iVar1);
        if (iVar5 == 0x10000) {
          rga_error_msg_set((char *)(DAT_000238f4 + 0x23874),iVar1);
          iVar7 = rga_log_enable_get();
          if (iVar7 < 1) {
            return 0xffffffff;
          }
          iVar7 = rga_log_level_get();
          if (5 < iVar7) {
            return 0xffffffff;
          }
          pFVar8 = (FILE *)**(undefined4 **)(iVar10 + DAT_000238e0);
          iVar7 = rga_get_current_time_ms();
          iVar3 = rga_get_start_time_ms();
          local_168 = 0x516;
          local_164 = iVar1;
          fprintf(pFVar8,(char *)(DAT_000238fc + 0x238c4),iVar7 - iVar3,DAT_000238f8 + 0x238bc);
          return 0xffffffff;
        }
      }
      local_40 = in_stack_00000128;
      local_50 = in_stack_00000118;
      uStack_4c = in_stack_0000011c;
      iStack_48 = in_stack_00000120;
      iStack_44 = in_stack_00000124;
      local_60 = in_stack_00000108;
      uStack_5c = in_stack_0000010c;
      local_70 = in_stack_000000f8;
      uStack_6c = in_stack_000000fc;
      iStack_68 = in_stack_00000100;
      iStack_64 = in_stack_00000104;
      param_8 = iVar2;
      in_stack_00000064 = iVar3;
      in_stack_000000bc = iVar5;
      in_stack_00000110 = iVar9;
      in_stack_00000114 = iVar7;
      iStack_58 = iVar9;
      iStack_54 = iVar7;
      memcpy(auStack_c8,&stack0x000000a0,0x58);
      memcpy(auStack_120,&stack0x00000048,0x58);
      memcpy(&local_168,&param_5,0x48);
      uVar6 = rga_check(param_1,param_2,param_3,local_4);
      return uVar6;
    }
    rga_error_msg_set((char *)(DAT_000238d8 + 0x23790),iVar5);
    iVar7 = rga_log_enable_get();
    if ((0 < iVar7) && (iVar7 = rga_log_level_get(), iVar7 < 6)) {
      pFVar8 = (FILE *)**(undefined4 **)(iVar10 + DAT_000238e0);
      iVar7 = rga_get_current_time_ms();
      iVar3 = rga_get_start_time_ms();
      local_168 = 0x50d;
      local_164 = iVar5;
      fprintf(pFVar8,(char *)(DAT_000238f0 + 0x23858),iVar7 - iVar3,DAT_000238ec + 0x23850);
    }
  }
  return 0xffffffff;
}



/* ===== rga_import_buffers @ 00023900 size=516 ===== */

/* rga_import_buffers(rga_buffer_pool*) */

undefined4 rga_import_buffers(rga_buffer_pool *param_1)

{
  int iVar1;
  char *pcVar2;
  RockchipRga *this;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  FILE *pFVar6;
  pthread_mutex_t *__mutex;
  
  iVar4 = DAT_00023b04 + 0x2391c;
  puVar5 = *(undefined4 **)(iVar4 + DAT_00023b08);
  piVar3 = (int *)*puVar5;
  if (piVar3 == (int *)0x0) {
    __mutex = *(pthread_mutex_t **)(iVar4 + DAT_00023b10);
    pthread_mutex_lock(__mutex);
    piVar3 = *(int **)(iVar4 + DAT_00023b14);
    if (*piVar3 == 0) {
      this = operator_new(0x10);
      RockchipRga::RockchipRga(this);
      *piVar3 = (int)this;
    }
    pthread_mutex_unlock(__mutex);
    piVar3 = (int *)*puVar5;
    if (piVar3 == (int *)0x0) {
      rga_error_msg_set((char *)(DAT_00023b18 + 0x239c0));
      iVar1 = rga_log_enable_get();
      if (0 < iVar1) {
        rga_log_level_get();
      }
      pFVar6 = (FILE *)**(undefined4 **)(iVar4 + DAT_00023b1c);
      iVar4 = rga_get_current_time_ms();
      iVar1 = rga_get_start_time_ms();
      fprintf(pFVar6,(char *)(DAT_00023b24 + 0x23a04),iVar4 - iVar1,DAT_00023b20 + 0x23a00,0x44);
      return 0;
    }
  }
  if (param_1 == (rga_buffer_pool *)0x0) {
    rga_error_msg_set((char *)(DAT_00023b0c + 0x23964));
    iVar1 = rga_log_enable_get();
    if ((0 < iVar1) && (iVar1 = rga_log_level_get(), iVar1 < 6)) {
      pFVar6 = (FILE *)**(undefined4 **)(iVar4 + DAT_00023b1c);
      iVar4 = rga_get_current_time_ms();
      iVar1 = rga_get_start_time_ms();
      fprintf(pFVar6,(char *)(DAT_00023b34 + 0x23ad8),iVar4 - iVar1,DAT_00023b38 + 0x23adc,0x527);
      return 0;
    }
  }
  else {
    iVar1 = ioctl(*piVar3,0xc0107203,param_1);
    if (-1 < iVar1) {
      return 1;
    }
    piVar3 = __errno_location();
    pcVar2 = strerror(*piVar3);
    rga_error_msg_set((char *)(DAT_00023b28 + 0x23a34),pcVar2);
    iVar1 = rga_log_enable_get();
    if ((0 < iVar1) && (iVar1 = rga_log_level_get(), iVar1 < 6)) {
      pFVar6 = (FILE *)**(undefined4 **)(iVar4 + DAT_00023b1c);
      iVar4 = rga_get_current_time_ms();
      iVar1 = rga_get_start_time_ms();
      pcVar2 = strerror(*piVar3);
      fprintf(pFVar6,(char *)(DAT_00023b2c + 0x23a8c),iVar4 - iVar1,DAT_00023b30 + 0x23a90,0x52d,
              pcVar2);
    }
  }
  return 0;
}



/* ===== rga_import_buffer @ 00023b3c size=104 ===== */

/* rga_import_buffer(unsigned long long, int, unsigned int) */

undefined4 rga_import_buffer(ulonglong param_1,int param_2,uint param_3)

{
  int iVar1;
  ulonglong *local_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 local_144;
  ulonglong local_140;
  int local_138;
  undefined4 local_134;
  uint local_124;
  
  local_144 = 0;
  memset(&local_140,0,0x120);
  uStack_14c = 0;
  local_148 = 1;
  local_150 = &local_140;
  local_140 = param_1;
  local_138 = param_2;
  local_124 = param_3;
  iVar1 = rga_import_buffers((rga_buffer_pool *)&local_150);
  if (iVar1 != 1) {
    local_134 = 0xffffffff;
  }
  return local_134;
}



/* ===== rga_import_buffer @ 00023ba4 size=292 ===== */

/* rga_import_buffer(unsigned long long, int, im_handle_param*) */

undefined4 rga_import_buffer(ulonglong param_1,int param_2,im_handle_param *param_3)

{
  int iVar1;
  int iVar2;
  FILE *__stream;
  ulonglong *local_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  ulonglong local_140;
  int local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  int local_128;
  
  uStack_14c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_148 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_144 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_150 = (ulonglong *)0x0;
  memset(&local_140,0,0x120);
  local_130 = *(undefined4 *)param_3;
  uStack_12c = *(undefined4 *)(param_3 + 4);
  local_128 = *(int *)(param_3 + 8);
  local_140 = param_1;
  local_138 = param_2;
  iVar1 = convert_to_rga_format(local_128);
  iVar2 = DAT_00023cc8 + 0x23c0c;
  if (iVar1 != 0x10000) {
    local_128 = iVar1 >> 8;
    uStack_14c = 0;
    local_148 = 1;
    local_150 = &local_140;
    iVar1 = rga_import_buffers((rga_buffer_pool *)&local_150);
    if (iVar1 != 1) {
      local_134 = 0;
    }
    return local_134;
  }
  rga_error_msg_set((char *)(DAT_00023ccc + 0x23c5c),local_128);
  iVar1 = rga_log_enable_get();
  if ((0 < iVar1) && (iVar1 = rga_log_level_get(), iVar1 < 6)) {
    __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_00023cd0);
    iVar1 = rga_get_current_time_ms();
    iVar2 = rga_get_start_time_ms();
    fprintf(__stream,(char *)(DAT_00023cd4 + 0x23cb4),iVar1 - iVar2,DAT_00023cd8 + 0x23cbc,0x555,
            local_128);
  }
  return 0xffffffff;
}



/* ===== rga_release_buffers @ 00023cdc size=516 ===== */

/* rga_release_buffers(rga_buffer_pool*) */

undefined4 rga_release_buffers(rga_buffer_pool *param_1)

{
  int iVar1;
  char *pcVar2;
  RockchipRga *this;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  FILE *pFVar6;
  pthread_mutex_t *__mutex;
  
  iVar4 = DAT_00023ee0 + 0x23cf8;
  puVar5 = *(undefined4 **)(iVar4 + DAT_00023ee4);
  piVar3 = (int *)*puVar5;
  if (piVar3 == (int *)0x0) {
    __mutex = *(pthread_mutex_t **)(iVar4 + DAT_00023eec);
    pthread_mutex_lock(__mutex);
    piVar3 = *(int **)(iVar4 + DAT_00023ef0);
    if (*piVar3 == 0) {
      this = operator_new(0x10);
      RockchipRga::RockchipRga(this);
      *piVar3 = (int)this;
    }
    pthread_mutex_unlock(__mutex);
    piVar3 = (int *)*puVar5;
    if (piVar3 == (int *)0x0) {
      rga_error_msg_set((char *)(DAT_00023ef4 + 0x23d9c));
      iVar1 = rga_log_enable_get();
      if (0 < iVar1) {
        rga_log_level_get();
      }
      pFVar6 = (FILE *)**(undefined4 **)(iVar4 + DAT_00023ef8);
      iVar4 = rga_get_current_time_ms();
      iVar1 = rga_get_start_time_ms();
      fprintf(pFVar6,(char *)(DAT_00023f00 + 0x23de0),iVar4 - iVar1,DAT_00023efc + 0x23ddc,0x44);
      return 0;
    }
  }
  if (param_1 == (rga_buffer_pool *)0x0) {
    rga_error_msg_set((char *)(DAT_00023ee8 + 0x23d40));
    iVar1 = rga_log_enable_get();
    if ((0 < iVar1) && (iVar1 = rga_log_level_get(), iVar1 < 6)) {
      pFVar6 = (FILE *)**(undefined4 **)(iVar4 + DAT_00023ef8);
      iVar4 = rga_get_current_time_ms();
      iVar1 = rga_get_start_time_ms();
      fprintf(pFVar6,(char *)(DAT_00023f10 + 0x23eb4),iVar4 - iVar1,DAT_00023f14 + 0x23eb8,0x56b);
      return 0;
    }
  }
  else {
    iVar1 = ioctl(*piVar3,0x40107204,param_1);
    if (-1 < iVar1) {
      return 1;
    }
    piVar3 = __errno_location();
    pcVar2 = strerror(*piVar3);
    rga_error_msg_set((char *)(DAT_00023f04 + 0x23e10),pcVar2);
    iVar1 = rga_log_enable_get();
    if ((0 < iVar1) && (iVar1 = rga_log_level_get(), iVar1 < 6)) {
      pFVar6 = (FILE *)**(undefined4 **)(iVar4 + DAT_00023ef8);
      iVar4 = rga_get_current_time_ms();
      iVar1 = rga_get_start_time_ms();
      pcVar2 = strerror(*piVar3);
      fprintf(pFVar6,(char *)(DAT_00023f08 + 0x23e68),iVar4 - iVar1,DAT_00023f0c + 0x23e6c,0x571,
              pcVar2);
    }
  }
  return 0;
}



/* ===== rga_release_buffer @ 00023f18 size=76 ===== */

/* rga_release_buffer(int) */

void rga_release_buffer(int param_1)

{
  void *local_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined1 auStack_130 [12];
  int local_124;
  
  local_134 = 0;
  local_140 = memset(auStack_130,0,0x120);
  local_138 = 1;
  uStack_13c = 0;
  local_124 = param_1;
  rga_release_buffers((rga_buffer_pool *)&local_140);
  return;
}



/* ===== rga_get_opt @ 00023f68 size=432 ===== */

/* rga_get_opt(im_opt*, void*) */

undefined4 rga_get_opt(im_opt *param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 local_a0;
  undefined4 uStack_9c;
  
  if (param_2 == (void *)0x0 || param_1 == (im_opt *)0x0) {
    return 0;
  }
  uVar2 = 0;
  uVar3 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar6 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar5 = *(uint *)param_2;
  iVar1 = rga_version_compare(uVar5 >> 0x18,(uVar5 & 0xffffff) >> 0x10,(uVar5 & 0xffff) >> 8,0,uVar3
                              ,uVar4,uVar6,2,0,uVar3,uVar4,uVar6,0,uVar3);
  if (iVar1 < 1) {
    uVar5 = *(uint *)param_2;
    local_a0 = (undefined4)DAT_00024118;
    uStack_9c = (undefined4)((ulonglong)DAT_00024118 >> 0x20);
    iVar1 = rga_version_compare(uVar5 >> 0x18,(uVar5 & 0xffffff) >> 0x10,(uVar5 & 0xffff) >> 8,uVar2
                                ,uVar3,uVar4,uVar6,local_a0,uStack_9c,2,uVar2,uVar3,uVar4,uVar6);
    if (0 < iVar1) {
      memcpy(param_1,param_2,0x130);
      return 1;
    }
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)((int)param_2 + 4);
    uVar2 = 1;
    uVar3 = *(undefined4 *)((int)param_2 + 0xc);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)param_2 + 8);
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    uVar3 = *(undefined4 *)((int)param_2 + 0x14);
    uVar4 = *(undefined4 *)((int)param_2 + 0x18);
    uVar6 = *(undefined4 *)((int)param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    *(undefined4 *)(param_1 + 0x18) = uVar4;
    *(undefined4 *)(param_1 + 0x1c) = uVar6;
    uVar3 = *(undefined4 *)((int)param_2 + 0x24);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((int)param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = uVar3;
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)((int)param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)((int)param_2 + 0x2c);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)((int)param_2 + 0x30);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00024120 @ 00024120 size=6744 ===== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00024120(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ===== rga_single_task_submit @ 00025d2c size=180 ===== */

/* rga_single_task_submit(rga_buffer_t, rga_buffer_t, rga_buffer_t, im_rect, im_rect, im_rect, int,
   int*, im_opt*, int) */

void rga_single_task_submit
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_stack_000000f8;
  undefined4 in_stack_000000fc;
  undefined4 in_stack_00000100;
  undefined4 in_stack_00000104;
  undefined4 in_stack_00000108;
  undefined4 in_stack_0000010c;
  undefined4 in_stack_00000110;
  undefined4 in_stack_00000114;
  undefined4 in_stack_00000118;
  undefined4 in_stack_0000011c;
  undefined4 in_stack_00000120;
  undefined4 in_stack_00000124;
  undefined4 in_stack_00000128;
  undefined4 in_stack_0000012c;
  undefined4 in_stack_00000130;
  undefined4 in_stack_00000134;
  undefined1 auStack_168 [76];
  undefined1 auStack_11c [88];
  undefined1 auStack_c4 [88];
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_4;
  
  local_3c = in_stack_00000128;
  local_34 = in_stack_00000130;
  local_30 = in_stack_00000134;
  local_38 = in_stack_0000012c;
  local_4c = in_stack_00000118;
  uStack_48 = in_stack_0000011c;
  uStack_44 = in_stack_00000120;
  uStack_40 = in_stack_00000124;
  local_5c = in_stack_00000108;
  uStack_58 = in_stack_0000010c;
  uStack_54 = in_stack_00000110;
  uStack_50 = in_stack_00000114;
  local_6c = in_stack_000000f8;
  uStack_68 = in_stack_000000fc;
  uStack_64 = in_stack_00000100;
  uStack_60 = in_stack_00000104;
  uStack_4 = param_4;
  memcpy(auStack_c4,&stack0x000000a0,0x58);
  memcpy(auStack_11c,&stack0x00000048,0x58);
  memcpy(auStack_168,&uStack_4,0x4c);
  FUN_00024120(0,param_1,param_2,param_3);
  return;
}



/* ===== rga_task_submit @ 00025de0 size=180 ===== */

/* rga_task_submit(unsigned int, rga_buffer_t, rga_buffer_t, rga_buffer_t, im_rect, im_rect,
   im_rect, im_opt*, int) */

void rga_task_submit(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_stack_000000fc;
  undefined4 in_stack_00000100;
  undefined4 in_stack_00000104;
  undefined4 in_stack_00000108;
  undefined4 in_stack_0000010c;
  undefined4 in_stack_00000110;
  undefined4 in_stack_00000114;
  undefined4 in_stack_00000118;
  undefined4 in_stack_0000011c;
  undefined4 in_stack_00000120;
  undefined4 in_stack_00000124;
  undefined4 in_stack_00000128;
  undefined4 in_stack_0000012c;
  undefined4 in_stack_00000130;
  undefined1 auStack_168 [76];
  undefined1 auStack_11c [88];
  undefined1 auStack_c4 [88];
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  local_34 = in_stack_0000012c;
  local_38 = 0;
  local_3c = 0;
  local_30 = in_stack_00000130;
  local_4c = in_stack_0000011c;
  uStack_48 = in_stack_00000120;
  uStack_44 = in_stack_00000124;
  uStack_40 = in_stack_00000128;
  local_5c = in_stack_0000010c;
  uStack_58 = in_stack_00000110;
  uStack_54 = in_stack_00000114;
  uStack_50 = in_stack_00000118;
  local_6c = in_stack_000000fc;
  uStack_68 = in_stack_00000100;
  uStack_64 = in_stack_00000104;
  uStack_60 = in_stack_00000108;
  memcpy(auStack_c4,&stack0x000000a4,0x58);
  memcpy(auStack_11c,&stack0x0000004c,0x58);
  memcpy(auStack_168,&stack0x00000000,0x4c);
  FUN_00024120(param_1,param_2,param_3,param_4);
  return;
}



/* ===== rga_job_config @ 00025e94 size=1120 ===== */

/* rga_job_config(unsigned int, int, int, int*) */

undefined4 rga_job_config(uint param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  RockchipRga *this;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FILE *pFVar8;
  int iVar9;
  pthread_mutex_t *__mutex;
  int *piVar10;
  int iVar11;
  int *piVar12;
  uint *puVar13;
  uint local_c4;
  uint *local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  int local_ac;
  int local_a4;
  
  iVar7 = DAT_000262f4 + 0x25eb4;
  piVar10 = *(int **)(iVar7 + DAT_000262f8);
  local_c4 = param_1;
  if (*piVar10 == 0) {
    __mutex = *(pthread_mutex_t **)(iVar7 + DAT_00026320);
    pthread_mutex_lock(__mutex);
    piVar12 = *(int **)(iVar7 + DAT_00026324);
    if (*piVar12 == 0) {
      this = operator_new(0x10);
      RockchipRga::RockchipRga(this);
      *piVar12 = (int)this;
    }
    pthread_mutex_unlock(__mutex);
    if (*piVar10 != 0) goto LAB_00025ec8;
    rga_error_msg_set((char *)(DAT_00026328 + 0x26100));
    iVar9 = rga_log_enable_get();
    if (0 < iVar9) {
      rga_log_level_get();
    }
    pFVar8 = (FILE *)**(undefined4 **)(iVar7 + DAT_00026308);
    iVar7 = rga_get_current_time_ms();
    iVar9 = rga_get_start_time_ms();
    fprintf(pFVar8,(char *)(DAT_00026330 + 0x26144),iVar7 - iVar9,DAT_0002632c + 0x26140,0x44);
LAB_0002614c:
    uVar3 = 0;
  }
  else {
LAB_00025ec8:
    iVar9 = *(int *)(iVar7 + DAT_000262fc);
    iVar11 = *(int *)(iVar7 + DAT_00026300);
    if ((iVar9 != 0) && (iVar1 = pthread_mutex_lock((pthread_mutex_t *)(iVar11 + 0x1c)), iVar1 != 0)
       ) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar1);
    }
    iVar1 = *(int *)(iVar11 + 8);
    if (iVar1 != 0) {
      iVar2 = iVar11 + 4;
      iVar5 = iVar1;
      do {
        if (*(uint *)(iVar5 + 0x10) < local_c4) {
          iVar6 = *(int *)(iVar5 + 0xc);
        }
        else {
          iVar6 = *(int *)(iVar5 + 8);
          iVar2 = iVar5;
        }
        iVar5 = iVar6;
      } while (iVar6 != 0);
      iVar5 = iVar11 + 4;
      if ((iVar2 != iVar5) && (*(uint *)(iVar2 + 0x10) <= local_c4)) {
        do {
          if (*(uint *)(iVar1 + 0x10) < local_c4) {
            iVar2 = *(int *)(iVar1 + 0xc);
          }
          else {
            iVar2 = *(int *)(iVar1 + 8);
            iVar5 = iVar1;
          }
          iVar1 = iVar2;
        } while (iVar2 != 0);
        if ((iVar5 == iVar11 + 4) || (local_c4 < *(uint *)(iVar5 + 0x10))) {
          local_c0 = &local_c4;
          iVar5 = FUN_0001eae8(iVar11,iVar5,&local_c0);
        }
        puVar13 = *(uint **)(iVar5 + 0x14);
        if (puVar13 != (uint *)0x0) {
          memset(&local_b0,0,0x88);
          local_bc = 0;
          local_b8 = *(undefined8 *)(puVar13 + 0x189c);
          local_c0 = puVar13;
          if (iVar9 != 0) {
            pthread_mutex_unlock((pthread_mutex_t *)(iVar11 + 0x1c));
          }
          local_a4 = param_3;
          if (param_2 == 0x80000) {
            local_b0 = 0x5017;
            iVar9 = ioctl(*(int *)*piVar10,0xc0987207,&local_c0);
            if (iVar9 < 0) goto LAB_0002625c;
          }
          else {
            if (param_2 != 0x4000000) {
              rga_error_msg_set((char *)(DAT_00026314 + 0x2606c));
              iVar9 = rga_log_enable_get();
              if (0 < iVar9) {
                rga_log_level_get();
              }
              pFVar8 = (FILE *)**(undefined4 **)(iVar7 + DAT_00026308);
              iVar7 = rga_get_current_time_ms();
              iVar9 = rga_get_start_time_ms();
              fprintf(pFVar8,(char *)(DAT_0002631c + 0x260ac),iVar7 - iVar9,DAT_00026318 + 0x260a8,
                      0x86d);
              return 0xfffffffc;
            }
            local_b0 = 0x5018;
            iVar9 = ioctl(*(int *)*piVar10,0xc0987207,&local_c0);
            if (iVar9 < 0) {
LAB_0002625c:
              piVar10 = __errno_location();
              pcVar4 = strerror(*piVar10);
              rga_error_msg_set((char *)(DAT_00026344 + 0x26288),DAT_00026340 + 0x2627c,0x875,pcVar4
                               );
              iVar9 = rga_log_enable_get();
              if (0 < iVar9) {
                rga_log_level_get();
              }
              pFVar8 = (FILE *)**(undefined4 **)(iVar7 + DAT_00026308);
              iVar7 = rga_get_current_time_ms();
              iVar9 = rga_get_start_time_ms();
              pcVar4 = strerror(*piVar10);
              fprintf(pFVar8,(char *)(DAT_0002634c + 0x262e0),iVar7 - iVar9,DAT_00026348 + 0x262d0,
                      0x875,DAT_00026348 + 0x262d0,0x875,pcVar4);
              return 0;
            }
            if (param_4 != (int *)0x0) {
              *param_4 = local_ac;
              return 1;
            }
          }
          return 1;
        }
        rga_error_msg_set((char *)(DAT_00026334 + 0x261e0));
        iVar1 = rga_log_enable_get();
        if (0 < iVar1) {
          rga_log_level_get();
        }
        pFVar8 = (FILE *)**(undefined4 **)(iVar7 + DAT_00026308);
        iVar7 = rga_get_current_time_ms();
        iVar1 = rga_get_start_time_ms();
        fprintf(pFVar8,(char *)(DAT_00026338 + 0x26220),iVar7 - iVar1,DAT_0002633c + 0x26224,0x857);
        if (iVar9 != 0) {
          pthread_mutex_unlock((pthread_mutex_t *)(iVar11 + 0x1c));
          return 0;
        }
        goto LAB_0002614c;
      }
    }
    rga_error_msg_set((char *)(DAT_00026304 + 0x25f4c),local_c4);
    iVar1 = rga_log_enable_get();
    if (0 < iVar1) {
      rga_log_level_get();
    }
    pFVar8 = (FILE *)**(undefined4 **)(iVar7 + DAT_00026308);
    iVar7 = rga_get_current_time_ms();
    iVar1 = rga_get_start_time_ms();
    fprintf(pFVar8,(char *)(DAT_0002630c + 0x25f90),iVar7 - iVar1,DAT_00026310 + 0x25f98,0x84f,
            local_c4);
    if (iVar9 == 0) {
      uVar3 = 0xfffffffc;
    }
    else {
      pthread_mutex_unlock((pthread_mutex_t *)(iVar11 + 0x1c));
      uVar3 = 0xfffffffc;
    }
  }
  return uVar3;
}



/* ===== std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>::_M_erase @ 00026350 size=52 ===== */

/* std::_Rb_tree<unsigned int, std::pair<unsigned int const, im_rga_job*>,
   std::_Select1st<std::pair<unsigned int const, im_rga_job*> >, std::less<unsigned int>,
   std::allocator<std::pair<unsigned int const, im_rga_job*> >
   >::_M_erase(std::_Rb_tree_node<std::pair<unsigned int const, im_rga_job*> >*) */

void __thiscall
std::
_Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
::_M_erase(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
           *this,_Rb_tree_node *param_1)

{
  _Rb_tree_node *p_Var1;
  
  if (param_1 != (_Rb_tree_node *)0x0) {
    do {
      _M_erase(this,*(_Rb_tree_node **)(param_1 + 0xc));
      p_Var1 = *(_Rb_tree_node **)(param_1 + 8);
      operator_delete(param_1);
      param_1 = p_Var1;
    } while (p_Var1 != (_Rb_tree_node *)0x0);
    return;
  }
  return;
}



/* ===== im2d_job_manager::~im2d_job_manager @ 00026384 size=60 ===== */

/* im2d_job_manager::~im2d_job_manager() */

im2d_job_manager * __thiscall im2d_job_manager::~im2d_job_manager(im2d_job_manager *this)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)(this + 8);
  while (pvVar1 != (void *)0x0) {
    std::
    _Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
    ::_M_erase((_Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
                *)this,*(_Rb_tree_node **)((int)pvVar1 + 0xc));
    pvVar2 = *(void **)((int)pvVar1 + 8);
    operator_delete(pvVar1);
    pvVar1 = pvVar2;
  }
  return this;
}



/* ===== std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>::erase @ 000263c0 size=364 ===== */

/* std::_Rb_tree<unsigned int, std::pair<unsigned int const, im_rga_job*>,
   std::_Select1st<std::pair<unsigned int const, im_rga_job*> >, std::less<unsigned int>,
   std::allocator<std::pair<unsigned int const, im_rga_job*> > >::erase(unsigned int const&) */

int __thiscall
std::
_Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
::erase(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
        *this,uint *param_1)

{
  _Rb_tree_node_base *p_Var1;
  void *pvVar2;
  uint uVar3;
  _Rb_tree_node_base *p_Var4;
  int iVar5;
  _Rb_tree_node_base *p_Var6;
  _Rb_tree_node_base *p_Var7;
  _Rb_tree_node_base *p_Var8;
  _Rb_tree_node_base *p_Var9;
  int iVar10;
  _Rb_tree_node_base *p_Var11;
  
  p_Var11 = *(_Rb_tree_node_base **)(this + 8);
  p_Var9 = (_Rb_tree_node_base *)(this + 4);
  if (p_Var11 == (_Rb_tree_node_base *)0x0) {
    iVar10 = *(int *)(this + 0x14);
    if (p_Var9 != *(_Rb_tree_node_base **)(this + 0xc)) {
      return 0;
    }
  }
  else {
    uVar3 = *param_1;
    p_Var6 = p_Var11;
    p_Var8 = p_Var9;
    do {
      if (uVar3 <= *(uint *)(p_Var6 + 0x10)) {
        p_Var4 = *(_Rb_tree_node_base **)(p_Var6 + 8);
        p_Var7 = p_Var6;
        if (*(uint *)(p_Var6 + 0x10) != uVar3) goto LAB_00026400;
        while (p_Var1 = *(_Rb_tree_node_base **)(p_Var6 + 0xc), p_Var4 != (_Rb_tree_node_base *)0x0)
        {
          if (*(uint *)(p_Var4 + 0x10) < uVar3) {
            p_Var4 = *(_Rb_tree_node_base **)(p_Var4 + 0xc);
          }
          else {
            p_Var4 = *(_Rb_tree_node_base **)(p_Var4 + 8);
            p_Var7 = p_Var4;
          }
        }
        while (p_Var1 != (_Rb_tree_node_base *)0x0) {
          if (uVar3 < *(uint *)(p_Var1 + 0x10)) {
            p_Var1 = *(_Rb_tree_node_base **)(p_Var1 + 8);
            p_Var8 = p_Var1;
          }
          else {
            p_Var1 = *(_Rb_tree_node_base **)(p_Var1 + 0xc);
          }
        }
        iVar10 = *(int *)(this + 0x14);
        if (*(_Rb_tree_node_base **)(this + 0xc) != p_Var7 || p_Var9 != p_Var8) {
          if (p_Var7 == p_Var8) {
            return 0;
          }
          do {
            p_Var11 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var7);
            pvVar2 = (void *)std::_Rb_tree_rebalance_for_erase(p_Var7,p_Var9);
            operator_delete(pvVar2);
            iVar5 = *(int *)(this + 0x14);
            *(int *)(this + 0x14) = iVar5 + -1;
            p_Var7 = p_Var11;
          } while (p_Var11 != p_Var8);
          return iVar10 - (iVar5 + -1);
        }
        goto LAB_000264dc;
      }
      p_Var4 = *(_Rb_tree_node_base **)(p_Var6 + 0xc);
      p_Var7 = p_Var8;
LAB_00026400:
      p_Var6 = p_Var4;
      p_Var8 = p_Var7;
    } while (p_Var4 != (_Rb_tree_node_base *)0x0);
    iVar10 = *(int *)(this + 0x14);
    if (*(_Rb_tree_node_base **)(this + 0xc) != p_Var7 || p_Var9 != p_Var7) {
      return 0;
    }
LAB_000264dc:
    do {
      _M_erase(this,*(_Rb_tree_node **)(p_Var11 + 0xc));
      p_Var8 = *(_Rb_tree_node_base **)(p_Var11 + 8);
      operator_delete(p_Var11);
      p_Var11 = p_Var8;
    } while (p_Var8 != (_Rb_tree_node_base *)0x0);
  }
  *(_Rb_tree_node_base **)(this + 0xc) = p_Var9;
  *(_Rb_tree_node_base **)(this + 0x10) = p_Var9;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  return iVar10;
}



/* ===== rga_job_cancel @ 0002652c size=672 ===== */

/* rga_job_cancel(unsigned int) */

undefined4 rga_job_cancel(uint param_1)

{
  int iVar1;
  _Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
  *p_Var2;
  undefined4 uVar3;
  char *pcVar4;
  RockchipRga *this;
  _Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
  *p_Var5;
  _Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
  *p_Var6;
  _Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
  *p_Var7;
  int iVar8;
  int *piVar9;
  int iVar10;
  pthread_mutex_t *__mutex;
  FILE *pFVar11;
  _Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
  *this_00;
  int *piVar12;
  uint local_24 [2];
  uint *local_1c;
  
  iVar8 = DAT_000267cc + 0x26544;
  piVar9 = *(int **)(iVar8 + DAT_000267d0);
  local_24[0] = param_1;
  if (*piVar9 == 0) {
    __mutex = *(pthread_mutex_t **)(iVar8 + DAT_000267dc);
    pthread_mutex_lock(__mutex);
    piVar12 = *(int **)(iVar8 + DAT_000267e0);
    if (*piVar12 == 0) {
      this = operator_new(0x10);
      RockchipRga::RockchipRga(this);
      *piVar12 = (int)this;
    }
    pthread_mutex_unlock(__mutex);
    if (*piVar9 == 0) {
      rga_error_msg_set((char *)(DAT_000267e4 + 0x266c8));
      iVar10 = rga_log_enable_get();
      if (0 < iVar10) {
        rga_log_level_get();
      }
      pFVar11 = (FILE *)**(undefined4 **)(iVar8 + DAT_000267e8);
      iVar8 = rga_get_current_time_ms();
      iVar10 = rga_get_start_time_ms();
      fprintf(pFVar11,(char *)(DAT_000267f0 + 0x2670c),iVar8 - iVar10,DAT_000267ec + 0x26708,0x44);
      return 0;
    }
  }
  iVar10 = *(int *)(iVar8 + DAT_000267d4);
  this_00 = *(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
              **)(iVar8 + DAT_000267d8);
  if ((iVar10 != 0) && (iVar1 = pthread_mutex_lock((pthread_mutex_t *)(this_00 + 0x1c)), iVar1 != 0)
     ) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar1);
  }
  p_Var6 = *(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
             **)(this_00 + 8);
  if (p_Var6 != (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
                 *)0x0) {
    p_Var2 = this_00 + 4;
    p_Var5 = p_Var6;
    do {
      if (*(uint *)(p_Var5 + 0x10) < local_24[0]) {
        p_Var7 = *(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
                   **)(p_Var5 + 0xc);
      }
      else {
        p_Var7 = *(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
                   **)(p_Var5 + 8);
        p_Var2 = p_Var5;
      }
      p_Var5 = p_Var7;
    } while (p_Var7 != (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
                        *)0x0);
    p_Var5 = this_00 + 4;
    if ((p_Var2 != p_Var5) && (*(uint *)(p_Var2 + 0x10) <= local_24[0])) {
      do {
        if (*(uint *)(p_Var6 + 0x10) < local_24[0]) {
          p_Var2 = *(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
                     **)(p_Var6 + 0xc);
        }
        else {
          p_Var2 = *(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
                     **)(p_Var6 + 8);
          p_Var5 = p_Var6;
        }
        p_Var6 = p_Var2;
      } while (p_Var2 != (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
                          *)0x0);
      if ((p_Var5 == this_00 + 4) || (local_24[0] < *(uint *)(p_Var5 + 0x10))) {
        local_1c = local_24;
        p_Var5 = (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
                  *)FUN_0001eae8(this_00,p_Var5,&local_1c);
      }
      if (*(void **)(p_Var5 + 0x14) != (void *)0x0) {
        free(*(void **)(p_Var5 + 0x14));
      }
      std::
      _Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
      ::erase(this_00,local_24);
    }
  }
  *(int *)(this_00 + 0x18) = *(int *)(this_00 + 0x18) + -1;
  if (iVar10 != 0) {
    pthread_mutex_unlock((pthread_mutex_t *)(this_00 + 0x1c));
  }
  iVar10 = ioctl(*(int *)*piVar9,0xc0047208,local_24);
  if (iVar10 < 0) {
    piVar9 = __errno_location();
    pcVar4 = strerror(*piVar9);
    rga_error_msg_set((char *)(DAT_000267f8 + 0x26748),DAT_000267f4 + 0x2673c,0x7fd,pcVar4);
    iVar10 = rga_log_enable_get();
    if (0 < iVar10) {
      rga_log_level_get();
    }
    pFVar11 = (FILE *)**(undefined4 **)(iVar8 + DAT_000267e8);
    iVar8 = rga_get_current_time_ms();
    iVar10 = rga_get_start_time_ms();
    pcVar4 = strerror(*piVar9);
    fprintf(pFVar11,(char *)(DAT_00026800 + 0x267a0),iVar8 - iVar10,DAT_000267fc + 0x26790,0x7fd,
            DAT_000267fc + 0x26790,0x7fd,pcVar4);
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* ===== rga_job_create @ 00026804 size=1072 ===== */

/* rga_job_create(unsigned int) */

uint rga_job_create(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  char *pcVar5;
  RockchipRga *this;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  FILE *pFVar11;
  int iVar12;
  pthread_mutex_t *__mutex;
  int iVar13;
  uint local_24;
  uint local_20;
  uint *local_1c;
  
  iVar12 = DAT_00026c34 + 0x2681c;
  puVar10 = *(undefined4 **)(iVar12 + DAT_00026c38);
  piVar8 = (int *)*puVar10;
  local_24 = param_1;
  if (piVar8 == (int *)0x0) {
    __mutex = *(pthread_mutex_t **)(iVar12 + DAT_00026c64);
    pthread_mutex_lock(__mutex);
    piVar8 = *(int **)(iVar12 + DAT_00026c68);
    if (*piVar8 == 0) {
      this = operator_new(0x10);
      RockchipRga::RockchipRga(this);
      *piVar8 = (int)this;
    }
    pthread_mutex_unlock(__mutex);
    piVar8 = (int *)*puVar10;
    if (piVar8 == (int *)0x0) {
      rga_error_msg_set((char *)(DAT_00026c6c + 0x26b40));
      iVar1 = rga_log_enable_get();
      if (0 < iVar1) {
        rga_log_level_get();
      }
      pFVar11 = (FILE *)**(undefined4 **)(iVar12 + DAT_00026c48);
      iVar12 = rga_get_current_time_ms();
      iVar1 = rga_get_start_time_ms();
      fprintf(pFVar11,(char *)(DAT_00026c74 + 0x26b84),iVar12 - iVar1,DAT_00026c70 + 0x26b80,0x44);
      return 0;
    }
  }
  iVar1 = ioctl(*piVar8,0x80047205,&local_24);
  if (iVar1 < 0) {
    piVar8 = __errno_location();
    pcVar5 = strerror(*piVar8);
    rga_error_msg_set((char *)(DAT_00026c58 + 0x26a94),DAT_00026c54 + 0x26a88,0x7c1,pcVar5);
    iVar1 = rga_log_enable_get();
    if (0 < iVar1) {
      rga_log_level_get();
    }
    pFVar11 = (FILE *)**(undefined4 **)(iVar12 + DAT_00026c48);
    iVar12 = rga_get_current_time_ms();
    iVar1 = rga_get_start_time_ms();
    pcVar5 = strerror(*piVar8);
    fprintf(pFVar11,(char *)(DAT_00026c60 + 0x26aec),iVar12 - iVar1,DAT_00026c5c + 0x26adc,0x7c1,
            DAT_00026c5c + 0x26adc,0x7c1,pcVar5);
    return 0;
  }
  local_20 = local_24;
  iVar13 = *(int *)(iVar12 + DAT_00026c3c);
  iVar1 = *(int *)(iVar12 + DAT_00026c40);
  if ((iVar13 != 0) && (iVar2 = pthread_mutex_lock((pthread_mutex_t *)(iVar1 + 0x1c)), iVar2 != 0))
  {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar2);
  }
  iVar2 = *(int *)(iVar1 + 8);
  if (iVar2 == 0) {
    pvVar4 = calloc(0x6278,1);
    if (pvVar4 == (void *)0x0) {
LAB_00026bac:
      rga_error_msg_set((char *)(DAT_00026c78 + 0x26bb8));
      iVar2 = rga_log_enable_get();
      if (0 < iVar2) {
        rga_log_level_get();
      }
      pFVar11 = (FILE *)**(undefined4 **)(iVar12 + DAT_00026c48);
      iVar12 = rga_get_current_time_ms();
      iVar2 = rga_get_start_time_ms();
      fprintf(pFVar11,(char *)(DAT_00026c7c + 0x26bf8),iVar12 - iVar2,DAT_00026c80 + 0x26bfc,0x7d2);
LAB_00026a44:
      if (iVar13 != 0) {
        pthread_mutex_unlock((pthread_mutex_t *)(iVar1 + 0x1c));
      }
      rga_job_cancel(local_20);
      return 0;
    }
    iVar12 = iVar1 + 4;
    *(uint *)((int)pvVar4 + 0x6274) = local_20;
  }
  else {
    iVar3 = iVar1 + 4;
    iVar6 = iVar2;
    do {
      if (*(uint *)(iVar6 + 0x10) < local_20) {
        iVar9 = *(int *)(iVar6 + 0xc);
      }
      else {
        iVar9 = *(int *)(iVar6 + 8);
        iVar3 = iVar6;
      }
      iVar6 = iVar9;
    } while (iVar9 != 0);
    iVar6 = iVar1 + 4;
    if ((iVar3 != iVar6) && (*(uint *)(iVar3 + 0x10) <= local_20)) {
      do {
        if (*(uint *)(iVar2 + 0x10) < local_20) {
          iVar3 = *(int *)(iVar2 + 0xc);
        }
        else {
          iVar3 = *(int *)(iVar2 + 8);
          iVar6 = iVar2;
        }
        iVar2 = iVar3;
      } while (iVar3 != 0);
      if (iVar6 == iVar1 + 4) {
        uVar7 = 0;
      }
      else if (local_20 < *(uint *)(iVar6 + 0x10)) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
      rga_error_msg_set((char *)(DAT_00026c44 + 0x269a4),local_20,uVar7);
      iVar2 = rga_log_enable_get();
      if (0 < iVar2) {
        rga_log_level_get();
      }
      pFVar11 = (FILE *)**(undefined4 **)(iVar12 + DAT_00026c48);
      iVar12 = rga_get_current_time_ms();
      iVar2 = rga_get_start_time_ms();
      uVar7 = 0;
      if (*(int *)(iVar1 + 8) != 0) {
        iVar3 = iVar1 + 4;
        iVar6 = *(int *)(iVar1 + 8);
        do {
          if (*(uint *)(iVar6 + 0x10) < local_20) {
            iVar9 = *(int *)(iVar6 + 0xc);
          }
          else {
            iVar9 = *(int *)(iVar6 + 8);
            iVar3 = iVar6;
          }
          iVar6 = iVar9;
        } while (iVar9 != 0);
        uVar7 = 0;
        if (iVar3 != iVar1 + 4) {
          if (local_20 < *(uint *)(iVar3 + 0x10)) {
            uVar7 = 0;
          }
          else {
            uVar7 = 1;
          }
        }
      }
      fprintf(pFVar11,(char *)(DAT_00026c50 + 0x26a44),iVar12 - iVar2,DAT_00026c4c + 0x26a40,0x7cb,
              local_20,uVar7);
      goto LAB_00026a44;
    }
    pvVar4 = calloc(0x6278,1);
    if (pvVar4 == (void *)0x0) goto LAB_00026bac;
    iVar12 = iVar1 + 4;
    *(uint *)((int)pvVar4 + 0x6274) = local_20;
    do {
      if (*(uint *)(iVar2 + 0x10) < local_20) {
        iVar3 = *(int *)(iVar2 + 0xc);
      }
      else {
        iVar3 = *(int *)(iVar2 + 8);
        iVar12 = iVar2;
      }
      iVar2 = iVar3;
    } while (iVar3 != 0);
    if ((iVar12 != iVar1 + 4) && (*(uint *)(iVar12 + 0x10) <= local_20)) goto LAB_00026934;
  }
  local_1c = &local_20;
  iVar12 = FUN_0001eae8(iVar1,iVar12,&local_1c);
LAB_00026934:
  *(void **)(iVar12 + 0x14) = pvVar4;
  *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
  if (iVar13 != 0) {
    pthread_mutex_unlock((pthread_mutex_t *)(iVar1 + 0x1c));
  }
  return local_20;
}



/* ===== rga_job_submit @ 00026c84 size=1152 ===== */

/* rga_job_submit(unsigned int, int, int, int*) */

undefined4 rga_job_submit(uint param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  _Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
  *p_Var2;
  undefined4 uVar3;
  RockchipRga *this;
  char *pcVar4;
  _Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
  *p_Var5;
  _Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
  *p_Var6;
  _Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
  *p_Var7;
  int iVar8;
  FILE *pFVar9;
  int iVar10;
  pthread_mutex_t *__mutex;
  _Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
  *this_00;
  int *piVar11;
  int *piVar12;
  uint *__ptr;
  uint local_c4;
  uint *local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  int local_ac;
  int local_a4;
  
  iVar8 = DAT_00027104 + 0x26ca4;
  piVar12 = *(int **)(iVar8 + DAT_00027108);
  local_c4 = param_1;
  if (*piVar12 == 0) {
    __mutex = *(pthread_mutex_t **)(iVar8 + DAT_00027130);
    pthread_mutex_lock(__mutex);
    piVar11 = *(int **)(iVar8 + DAT_00027134);
    if (*piVar11 == 0) {
      this = operator_new(0x10);
      RockchipRga::RockchipRga(this);
      *piVar11 = (int)this;
    }
    pthread_mutex_unlock(__mutex);
    if (*piVar12 != 0) goto LAB_00026cb8;
    rga_error_msg_set((char *)(DAT_00027138 + 0x26f10));
    iVar10 = rga_log_enable_get();
    if (0 < iVar10) {
      rga_log_level_get();
    }
    pFVar9 = (FILE *)**(undefined4 **)(iVar8 + DAT_00027118);
    iVar8 = rga_get_current_time_ms();
    iVar10 = rga_get_start_time_ms();
    fprintf(pFVar9,(char *)(DAT_00027140 + 0x26f54),iVar8 - iVar10,DAT_0002713c + 0x26f50,0x44);
LAB_00026f5c:
    uVar3 = 0;
  }
  else {
LAB_00026cb8:
    iVar10 = *(int *)(iVar8 + DAT_0002710c);
    this_00 = *(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
                **)(iVar8 + DAT_00027110);
    if ((iVar10 != 0) &&
       (iVar1 = pthread_mutex_lock((pthread_mutex_t *)(this_00 + 0x1c)), iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar1);
    }
    p_Var6 = *(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
               **)(this_00 + 8);
    if (p_Var6 != (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
                   *)0x0) {
      p_Var2 = this_00 + 4;
      p_Var5 = p_Var6;
      do {
        if (*(uint *)(p_Var5 + 0x10) < local_c4) {
          p_Var7 = *(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
                     **)(p_Var5 + 0xc);
        }
        else {
          p_Var7 = *(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
                     **)(p_Var5 + 8);
          p_Var2 = p_Var5;
        }
        p_Var5 = p_Var7;
      } while (p_Var7 != (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
                          *)0x0);
      p_Var5 = this_00 + 4;
      if ((p_Var2 != p_Var5) && (*(uint *)(p_Var2 + 0x10) <= local_c4)) {
        do {
          if (*(uint *)(p_Var6 + 0x10) < local_c4) {
            p_Var2 = *(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
                       **)(p_Var6 + 0xc);
          }
          else {
            p_Var2 = *(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
                       **)(p_Var6 + 8);
            p_Var5 = p_Var6;
          }
          p_Var6 = p_Var2;
        } while (p_Var2 != (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
                            *)0x0);
        if ((p_Var5 == this_00 + 4) || (local_c4 < *(uint *)(p_Var5 + 0x10))) {
          local_c0 = &local_c4;
          p_Var5 = (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
                    *)FUN_0001eae8(this_00,p_Var5,&local_c0);
        }
        __ptr = *(uint **)(p_Var5 + 0x14);
        if (__ptr != (uint *)0x0) {
          memset(&local_b0,0,0x88);
          local_bc = 0;
          local_b8 = *(undefined8 *)(__ptr + 0x189c);
          local_c0 = __ptr;
          std::
          _Rb_tree<unsigned_int,std::pair<unsigned_int_const,im_rga_job*>,std::_Select1st<std::pair<unsigned_int_const,im_rga_job*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,im_rga_job*>>>
          ::erase(this_00,&local_c4);
          *(int *)(this_00 + 0x18) = *(int *)(this_00 + 0x18) + -1;
          if (iVar10 != 0) {
            pthread_mutex_unlock((pthread_mutex_t *)(this_00 + 0x1c));
          }
          free(__ptr);
          local_a4 = param_3;
          if (param_2 == 0x80000) {
            local_b0 = 0x5017;
            iVar10 = ioctl(*(int *)*piVar12,0xc0987206,&local_c0);
            if (iVar10 < 0) goto LAB_0002706c;
          }
          else {
            if (param_2 != 0x4000000) {
              rga_error_msg_set((char *)(DAT_00027124 + 0x26e7c));
              iVar10 = rga_log_enable_get();
              if (0 < iVar10) {
                rga_log_level_get();
              }
              pFVar9 = (FILE *)**(undefined4 **)(iVar8 + DAT_00027118);
              iVar8 = rga_get_current_time_ms();
              iVar10 = rga_get_start_time_ms();
              fprintf(pFVar9,(char *)(DAT_0002712c + 0x26ebc),iVar8 - iVar10,DAT_00027128 + 0x26eb8,
                      0x832);
              return 0xfffffffc;
            }
            local_b0 = 0x5018;
            iVar10 = ioctl(*(int *)*piVar12,0xc0987206,&local_c0);
            if (iVar10 < 0) {
LAB_0002706c:
              piVar12 = __errno_location();
              pcVar4 = strerror(*piVar12);
              rga_error_msg_set((char *)(DAT_00027154 + 0x27098),DAT_00027150 + 0x2708c,0x83a,pcVar4
                               );
              iVar10 = rga_log_enable_get();
              if (0 < iVar10) {
                rga_log_level_get();
              }
              pFVar9 = (FILE *)**(undefined4 **)(iVar8 + DAT_00027118);
              iVar8 = rga_get_current_time_ms();
              iVar10 = rga_get_start_time_ms();
              pcVar4 = strerror(*piVar12);
              fprintf(pFVar9,(char *)(DAT_0002715c + 0x270f0),iVar8 - iVar10,DAT_00027158 + 0x270e0,
                      0x83a,DAT_00027158 + 0x270e0,0x83a,pcVar4);
              return 0;
            }
            if (param_4 != (int *)0x0) {
              *param_4 = local_ac;
              return 1;
            }
          }
          return 1;
        }
        rga_error_msg_set((char *)(DAT_00027144 + 0x26ff0));
        iVar1 = rga_log_enable_get();
        if (0 < iVar1) {
          rga_log_level_get();
        }
        pFVar9 = (FILE *)**(undefined4 **)(iVar8 + DAT_00027118);
        iVar8 = rga_get_current_time_ms();
        iVar1 = rga_get_start_time_ms();
        fprintf(pFVar9,(char *)(DAT_00027148 + 0x27030),iVar8 - iVar1,DAT_0002714c + 0x27034,0x817);
        if (iVar10 != 0) {
          pthread_mutex_unlock((pthread_mutex_t *)(this_00 + 0x1c));
          return 0;
        }
        goto LAB_00026f5c;
      }
    }
    rga_error_msg_set((char *)(DAT_00027114 + 0x26d3c),local_c4);
    iVar1 = rga_log_enable_get();
    if (0 < iVar1) {
      rga_log_level_get();
    }
    pFVar9 = (FILE *)**(undefined4 **)(iVar8 + DAT_00027118);
    iVar8 = rga_get_current_time_ms();
    iVar1 = rga_get_start_time_ms();
    fprintf(pFVar9,(char *)(DAT_0002711c + 0x26d80),iVar8 - iVar1,DAT_00027120 + 0x26d88,0x80f,
            local_c4);
    if (iVar10 == 0) {
      uVar3 = 0xfffffffc;
    }
    else {
      pthread_mutex_unlock((pthread_mutex_t *)(this_00 + 0x1c));
      uVar3 = 0xfffffffc;
    }
  }
  return uVar3;
}



/* ===== std::ctype<char>::do_widen @ 00027160 size=8 ===== */

/* std::ctype<char>::do_widen(char) const */

int __thiscall std::ctype<char>::do_widen(ctype<char> *this,char param_1)

{
  return (int)param_1;
}



/* ===== imStrError_t @ 00027188 size=256 ===== */

char * imStrError_t(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar2 = DAT_00027298;
  iVar1 = DAT_00027294;
  switch(param_1) {
  case 0:
    iVar5 = DAT_000272b8 + 0x2727c;
    break;
  case 1:
    return (char *)(DAT_000272a8 + 0x27248);
  case 2:
    return (char *)(DAT_00027288 + 0x271cc);
  case 0xfffffffb:
    iVar5 = DAT_000272ac + 0x27258;
    break;
  case 0xfffffffc:
    iVar5 = DAT_000272a4 + 0x2723c;
    break;
  case 0xfffffffd:
    iVar5 = DAT_0002728c + 0x271dc;
    break;
  case 0xfffffffe:
    iVar5 = DAT_000272b0 + 0x27264;
    break;
  case 0xffffffff:
    iVar5 = DAT_000272b4 + 0x27270;
    break;
  default:
    return (char *)((int)&DAT_00027288 + DAT_000272bc);
  }
  iVar3 = __tls_get_addr(DAT_00027290 + 0x271e8);
  uVar4 = __tls_get_addr(DAT_0002729c + 0x27200);
  snprintf((char *)(iVar1 + iVar3),0x200,(char *)(iVar2 + 0x271f8),iVar5,uVar4);
  rga_error_msg_set((char *)(DAT_000272a0 + 0x27224));
  return (char *)(iVar1 + iVar3);
}



/* ===== importbuffer_fd @ 000272c0 size=28 ===== */

/* importbuffer_fd(int, int) */

void importbuffer_fd(int param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00016134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rga_import_buffer_00046120)(param_1,param_1 >> 0x1f,0,param_2);
  return;
}



/* ===== importbuffer_fd @ 000272d0 size=16 ===== */

void importbuffer_fd(int param_1,im_handle_param *param_2)

{
  rga_import_buffer((longlong)param_1,0,param_2);
  return;
}



/* ===== importbuffer_fd @ 000272e0 size=44 ===== */

/* importbuffer_fd(int, int, int, int) */

void importbuffer_fd(int param_1,int param_2,int param_3,int param_4)

{
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = param_2;
  local_10 = param_3;
  local_c = param_4;
  rga_import_buffer((longlong)param_1,0,(im_handle_param *)&local_14);
  return;
}



/* ===== importbuffer_virtualaddr @ 0002730c size=16 ===== */

void importbuffer_virtualaddr(uint param_1,im_handle_param *param_2)

{
  rga_import_buffer((ulonglong)param_1,1,param_2);
  return;
}



/* ===== importbuffer_virtualaddr @ 0002731c size=16 ===== */

/* importbuffer_virtualaddr(void*, int) */

void importbuffer_virtualaddr(void *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00016134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rga_import_buffer_00046120)(param_1,0,1,param_2);
  return;
}



/* ===== importbuffer_virtualaddr @ 0002732c size=44 ===== */

/* importbuffer_virtualaddr(void*, int, int, int) */

void importbuffer_virtualaddr(void *param_1,int param_2,int param_3,int param_4)

{
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = param_2;
  local_10 = param_3;
  local_c = param_4;
  rga_import_buffer(ZEXT48(param_1),1,(im_handle_param *)&local_14);
  return;
}



/* ===== importbuffer_physicaladdr @ 00027358 size=12 ===== */

void importbuffer_physicaladdr(undefined4 param_1,undefined4 param_2,im_handle_param *param_3)

{
  rga_import_buffer(CONCAT44(param_2,param_1),2,param_3);
  return;
}



/* ===== importbuffer_physicaladdr @ 00027364 size=12 ===== */

/* importbuffer_physicaladdr(unsigned long long, int) */

void importbuffer_physicaladdr(ulonglong param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00016134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rga_import_buffer_00046120)((int)param_1,(int)(param_1 >> 0x20),2,param_2);
  return;
}



/* ===== importbuffer_physicaladdr @ 00027370 size=44 ===== */

/* importbuffer_physicaladdr(unsigned long long, int, int, int) */

void importbuffer_physicaladdr(ulonglong param_1,int param_2,int param_3,int param_4)

{
  int local_14;
  int local_10;
  int local_c;
  
  local_c = param_4;
  local_14 = param_2;
  local_10 = param_3;
  rga_import_buffer(param_1,2,(im_handle_param *)&local_14);
  return;
}



/* ===== releasebuffer_handle @ 0002739c size=4 ===== */

void releasebuffer_handle(int param_1)

{
  (*(code *)PTR_rga_release_buffer_000462a4)(param_1);
  return;
}



/* ===== wrapbuffer_handle @ 000273a0 size=92 ===== */

/* wrapbuffer_handle(unsigned int, int, int, int, int, int) */

uint wrapbuffer_handle(uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int in_stack_00000008;
  
  if (param_6 == 0) {
    param_6 = param_3;
  }
  if (in_stack_00000008 == 0) {
    in_stack_00000008 = param_4;
  }
  memset((void *)param_1,0,0x54);
  *(int *)(param_1 + 0x54) = param_2;
  *(int *)(param_1 + 0x14) = param_6;
  *(int *)(param_1 + 0x18) = in_stack_00000008;
  *(int *)(param_1 + 0xc) = param_3;
  *(int *)(param_1 + 0x10) = param_4;
  *(int *)(param_1 + 0x1c) = param_5;
  return param_1;
}



/* ===== wrapbuffer_handle @ 000273fc size=40 ===== */

/* wrapbuffer_handle(unsigned int, int, int, int) */

uint wrapbuffer_handle(uint param_1,int param_2,int param_3,int param_4)

{
  int in_stack_00000000;
  
  wrapbuffer_handle(param_1,param_2,param_3,param_4,in_stack_00000000,param_3);
  return param_1;
}



/* ===== querystring @ 00027424 size=5500 ===== */

/* WARNING: Type propagation algorithm not settling */

code * querystring(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint *__dest;
  ostream *poVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  int *piVar13;
  FILE *__stream;
  byte *pbVar14;
  code *__s1;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined4 uVar18;
  uint uVar19;
  uint *puVar20;
  uint *local_144;
  size_t local_140;
  uint local_13c [4];
  uint local_12c;
  uint uStack_128;
  uint local_124;
  int local_120;
  int local_11c;
  uint uStack_118;
  uint local_114;
  uint uStack_110;
  uint local_10c;
  uint uStack_108;
  undefined4 local_104;
  uint uStack_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  uint uStack_f4;
  int local_f0 [2];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  locale alStack_d0 [4];
  undefined4 local_cc;
  undefined1 *local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [16];
  int local_b0 [15];
  undefined4 auStack_74 [13];
  undefined4 local_40;
  undefined2 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  iVar17 = DAT_00028400;
  std::ios_base::ios_base((ios_base *)local_b0);
  iVar17 = iVar17 + 0x27454;
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar7 = *(int *)(iVar17 + DAT_00028404);
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_b0[0] = iVar7 + 8;
  iVar8 = *(int *)(iVar17 + DAT_00028408);
  iVar15 = *(int *)(iVar8 + 4);
  uVar18 = *(undefined4 *)(iVar8 + 8);
  pbVar14 = (byte *)(DAT_0002840c + 0x274a8);
  iVar9 = *(int *)(iVar15 + -0xc);
  local_f0[0] = iVar15;
  *(undefined4 *)((ostream *)local_f0 + iVar9) = uVar18;
  std::ios::init((streambuf *)((ostream *)local_f0 + iVar9));
  iVar9 = *(int *)(iVar17 + DAT_00028410);
  local_f0[0] = iVar9 + 0xc;
  local_b0[0] = iVar9 + 0x20;
  iVar10 = *(int *)(iVar17 + DAT_00028414);
  local_e8 = 0;
  local_f0[1] = iVar10 + 8;
  local_e0 = 0;
  local_d8 = 0;
  std::locale::locale(alStack_d0);
  iVar11 = *(int *)(iVar17 + DAT_00028418);
  local_c4 = 0;
  local_c0[0] = 0;
  local_f0[1] = iVar11 + 8;
  local_cc = 0x10;
  local_c8 = local_c0;
  std::ios::init((streambuf *)local_b0);
  DataMemoryBarrier(0xb);
  uVar19 = *pbVar14 & 1;
  if (((*pbVar14 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(pbVar14), iVar1 = DAT_00028490, iVar3 != 0)) {
    piVar13 = (int *)(DAT_00028490 + 0x27ff8);
    iVar3 = DAT_00028490 + 0x28000;
    *(uint *)(DAT_00028490 + 0x27ffc) = uVar19;
    *piVar13 = iVar3;
    *(char *)(iVar1 + 0x28000) = (char)uVar19;
    __cxa_guard_release(pbVar14);
    __aeabi_atexit(piVar13,*(undefined4 *)(iVar17 + DAT_00028494),DAT_00028498 + 0x28020);
  }
  uStack_128 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_124 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_120 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_fc = 0;
  local_12c = 0;
  local_11c = 0;
  local_114 = 0;
  local_10c = 0;
  local_104 = 0;
  uStack_f8 = 0;
  uStack_118 = uStack_128;
  uStack_110 = uStack_128;
  uStack_108 = uStack_128;
  uStack_100 = uStack_128;
  uStack_f4 = uStack_128;
  iVar3 = rga_get_info((rga_info_table_entry *)&local_12c);
  iVar1 = DAT_0002841c;
  if (iVar3 != 0) {
    iVar15 = 0;
    puVar16 = (undefined4 *)(DAT_0002841c + 0x27594);
    puVar20 = (uint *)(DAT_0002841c + 0x2759c);
    pcVar12 = (char *)(DAT_00028420 + 0x2759c);
LAB_0002759c:
    cVar2 = (char)(ostream *)local_f0;
    switch(param_1) {
    case 0:
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)local_f0,(char *)(DAT_0002844c + 0x27aec),0x18);
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)local_f0,(char *)(DAT_00028450 + 0x27b00),0x1d);
      piVar13 = *(int **)((int)auStack_74 + *(int *)(local_f0[0] + -0xc));
      if (piVar13 == (int *)0x0) goto LAB_00028b60;
      if ((char)piVar13[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*piVar13 + 0x18) != *(code **)(iVar17 + DAT_00028430)) {
          (**(code **)(*piVar13 + 0x18))(piVar13,10);
        }
      }
      iVar3 = 1;
      std::ostream::put(cVar2);
      std::ostream::flush();
      break;
    case 1:
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)local_f0,(char *)(DAT_00028468 + 0x27dd0),0x18);
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)local_f0,(char *)(DAT_0002846c + 0x27de4),1);
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)local_f0,(char *)(DAT_00028470 + 0x27df8),9);
      piVar13 = *(int **)((int)auStack_74 + *(int *)(local_f0[0] + -0xc));
      if (piVar13 != (int *)0x0) {
        if ((char)piVar13[7] == '\0') {
          std::ctype<char>::_M_widen_init();
          if (*(code **)(*piVar13 + 0x18) != *(code **)(iVar17 + DAT_00028430)) {
            (**(code **)(*piVar13 + 0x18))(piVar13,10);
          }
        }
        std::ostream::put(cVar2);
        std::ostream::flush();
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_00028474 + 0x27e68),0x18);
        if (local_12c == 1) {
          std::__ostream_insert<char,std::char_traits<char>>
                    ((ostream *)local_f0,(char *)(DAT_000285a0 + 0x289bc),8);
        }
        else {
          if ((local_12c & 2) != 0) {
            std::__ostream_insert<char,std::char_traits<char>>
                      ((ostream *)local_f0,(char *)(DAT_00028588 + 0x28944),6);
          }
          if ((local_12c & 4) != 0) {
            std::__ostream_insert<char,std::char_traits<char>>
                      ((ostream *)local_f0,(char *)(DAT_00028584 + 0x28928),0xb);
          }
          if ((local_12c & 8) != 0) {
            std::__ostream_insert<char,std::char_traits<char>>
                      ((ostream *)local_f0,(char *)(DAT_00028580 + 0x2890c),6);
          }
          if ((local_12c & 0x10) != 0) {
            std::__ostream_insert<char,std::char_traits<char>>
                      ((ostream *)local_f0,(char *)(DAT_0002857c + 0x288f0),0xc);
          }
          if ((local_12c & 0x20) != 0) {
            std::__ostream_insert<char,std::char_traits<char>>
                      ((ostream *)local_f0,(char *)(DAT_00028578 + 0x288d4),0xc);
          }
          if ((local_12c & 0x40) != 0) {
            std::__ostream_insert<char,std::char_traits<char>>
                      ((ostream *)local_f0,(char *)(DAT_00028570 + 0x2889c),0xe);
          }
          if ((local_12c & 0x80) != 0) {
            std::__ostream_insert<char,std::char_traits<char>>
                      ((ostream *)local_f0,(char *)(DAT_00028574 + 0x288bc),6);
          }
        }
        piVar13 = *(int **)((int)auStack_74 + *(int *)(local_f0[0] + -0xc));
        if (piVar13 != (int *)0x0) {
          if ((char)piVar13[7] == '\0') {
            std::ctype<char>::_M_widen_init();
            if (*(code **)(*piVar13 + 0x18) != *(code **)(iVar17 + DAT_00028430)) {
              (**(code **)(*piVar13 + 0x18))(piVar13,10);
            }
          }
          iVar3 = 2;
          std::ostream::put(cVar2);
          std::ostream::flush();
          break;
        }
      }
LAB_00028b60:
      std::__throw_bad_cast();
      goto switchD_000275a0_default;
    case 2:
      if (uStack_128 == 0x1000) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_000285cc + 0x28a88),0x18);
        iVar3 = 9;
        pcVar6 = (char *)(DAT_000285d0 + 0x28a98);
      }
      else if (uStack_128 < 0x1001) {
        if (uStack_128 == 0x800) {
          std::__ostream_insert<char,std::char_traits<char>>
                    ((ostream *)local_f0,(char *)(DAT_00028488 + 0x27fc8),0x18);
          iVar3 = 9;
          pcVar6 = (char *)(DAT_0002848c + 0x27fd8);
        }
        else {
LAB_00028a2c:
          std::__ostream_insert<char,std::char_traits<char>>
                    ((ostream *)local_f0,(char *)(DAT_000285bc + 0x28a40),0x18);
          iVar3 = 7;
          pcVar6 = (char *)(DAT_000285c0 + 0x28a50);
        }
      }
      else if (uStack_128 == 0x1fc0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_000285c4 + 0x28a64),0x18);
        iVar3 = 9;
        pcVar6 = (char *)(DAT_000285c8 + 0x28a74);
      }
      else {
        if (uStack_128 != 0x2000) goto LAB_00028a2c;
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_00028458 + 0x27c98),0x18);
        iVar3 = 9;
        pcVar6 = (char *)(DAT_0002845c + 0x27ca8);
      }
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_f0,pcVar6,iVar3);
      piVar13 = *(int **)((int)auStack_74 + *(int *)(local_f0[0] + -0xc));
      if (piVar13 == (int *)0x0) goto LAB_00028b60;
      if ((char)piVar13[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*piVar13 + 0x18) != *(code **)(iVar17 + DAT_00028430)) {
          (**(code **)(*piVar13 + 0x18))(piVar13,10);
        }
      }
      iVar3 = 3;
      std::ostream::put(cVar2);
      std::ostream::flush();
      break;
    case 3:
      if (local_124 == 0x1000) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_000285b4 + 0x28a1c),0x18);
        iVar3 = 9;
        pcVar6 = (char *)(DAT_000285b8 + 0x28a2c);
      }
      else if (local_124 < 0x1001) {
        if (local_124 == 0x800) {
          std::__ostream_insert<char,std::char_traits<char>>
                    ((ostream *)local_f0,(char *)(DAT_00028480 + 0x27f9c),0x18);
          iVar3 = 9;
          pcVar6 = (char *)(DAT_00028484 + 0x27fac);
        }
        else {
LAB_000289c0:
          std::__ostream_insert<char,std::char_traits<char>>
                    ((ostream *)local_f0,(char *)(DAT_000285a4 + 0x289d4),0x18);
          iVar3 = 7;
          pcVar6 = (char *)(DAT_000285a8 + 0x289e4);
        }
      }
      else if (local_124 == 0x1fc0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_000285ac + 0x289f8),0x18);
        iVar3 = 9;
        pcVar6 = (char *)(DAT_000285b0 + 0x28a08);
      }
      else {
        if (local_124 != 0x2000) goto LAB_000289c0;
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_00028460 + 0x27d44),0x18);
        iVar3 = 9;
        pcVar6 = (char *)(DAT_00028464 + 0x27d54);
      }
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_f0,pcVar6,iVar3);
      piVar13 = *(int **)((int)auStack_74 + *(int *)(local_f0[0] + -0xc));
      if (piVar13 == (int *)0x0) goto LAB_00028b60;
      if ((char)piVar13[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*piVar13 + 0x18) != *(code **)(iVar17 + DAT_00028430)) {
          (**(code **)(*piVar13 + 0x18))(piVar13,10);
        }
      }
      iVar3 = 4;
      std::ostream::put(cVar2);
      std::ostream::flush();
      break;
    case 4:
      if (local_120 == 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_0002849c + 0x2804c),0x18);
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_000284a0 + 0x28060),7);
        piVar13 = *(int **)((int)auStack_74 + *(int *)(local_f0[0] + -0xc));
        if (piVar13 == (int *)0x0) goto LAB_00028b60;
        if ((char)piVar13[7] == '\0') {
          std::ctype<char>::_M_widen_init();
          if (*(code **)(*piVar13 + 0x18) != *(code **)(iVar17 + DAT_00028430)) {
            (**(code **)(*piVar13 + 0x18))(piVar13,10);
          }
        }
        iVar3 = 5;
        std::ostream::put(cVar2);
        std::ostream::flush();
      }
      else {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_00028438 + 0x278dc),0x18);
        poVar4 = std::ostream::_M_insert<unsigned_long>((ulong)local_f0);
        std::__ostream_insert<char,std::char_traits<char>>
                  (poVar4,(char *)(DAT_0002843c + 0x278f8),5);
        piVar13 = *(int **)(poVar4 + *(int *)(*(int *)poVar4 + -0xc) + 0x7c);
        if (piVar13 == (int *)0x0) goto LAB_00028b60;
        if ((char)piVar13[7] == '\0') {
          std::ctype<char>::_M_widen_init();
          if (*(code **)(*piVar13 + 0x18) != *(code **)(iVar17 + DAT_00028430)) {
            (**(code **)(*piVar13 + 0x18))(piVar13,10);
          }
        }
        iVar3 = 5;
        std::ostream::put((char)poVar4);
        std::ostream::flush();
      }
      break;
    case 5:
      if (local_11c == 8) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_000284b8 + 0x2818c),0x18);
        iVar3 = 9;
        pcVar6 = (char *)(DAT_000284bc + 0x2819c);
      }
      else if (local_11c == 0x10) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_000284c0 + 0x281b0),0x18);
        iVar3 = 0xb;
        pcVar6 = (char *)(DAT_000284c4 + 0x281c0);
      }
      else {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_00028444 + 0x27a60),0x18);
        iVar3 = 7;
        pcVar6 = (char *)(DAT_00028448 + 0x27a70);
      }
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_f0,pcVar6,iVar3);
      piVar13 = *(int **)((int)auStack_74 + *(int *)(local_f0[0] + -0xc));
      if (piVar13 == (int *)0x0) goto LAB_00028b60;
      if ((char)piVar13[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*piVar13 + 0x18) != *(code **)(iVar17 + DAT_00028430)) {
          (**(code **)(*piVar13 + 0x18))(piVar13,10);
        }
      }
      iVar3 = 6;
      std::ostream::put(cVar2);
      std::ostream::flush();
      break;
    case 6:
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)local_f0,(char *)(DAT_00028440 + 0x2794c),0x18);
      if ((local_114 & 2) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_0002853c + 0x28708),0x1a);
      }
      if ((local_114 & 4) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_00028518 + 0x285ec),0x14);
      }
      if ((local_114 & 8) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_0002851c + 0x2860c),0x14);
      }
      if ((local_114 & 0x10) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_00028520 + 0x2862c),0xf);
      }
      if ((local_114 & 0x20) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_00028524 + 0x2864c),0x10);
      }
      if ((local_114 & 0x40) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_00028528 + 0x2866c),0xe);
      }
      if ((local_114 & 0x80) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_0002852c + 0x2868c),0xf);
      }
      if ((local_114 & 0x100) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_00028530 + 0x286ac),0xf);
      }
      if ((local_114 & 0x200) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_00028534 + 0x286cc),0x10);
      }
      if ((local_114 & 0x400) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_00028538 + 0x286ec),0xe);
      }
      if ((local_114 & 0x800) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_000284d4 + 0x28228),0xf);
      }
      if ((local_114 & 0x1000) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_000284d0 + 0x2820c),8);
      }
      if ((local_114 & 0x2000) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_000284cc + 0x281f0),8);
      }
      if ((local_114 & 0x4000) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_000284c8 + 0x281d4),10);
      }
      if ((local_114 & 0x1fffe) == 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_00028510 + 0x283e4),7);
      }
      piVar13 = *(int **)((int)auStack_74 + *(int *)(local_f0[0] + -0xc));
      if (piVar13 == (int *)0x0) goto LAB_00028b60;
      if ((char)piVar13[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*piVar13 + 0x18) != *(code **)(iVar17 + DAT_00028430)) {
          (**(code **)(*piVar13 + 0x18))(piVar13,10);
        }
      }
      iVar3 = 7;
      std::ostream::put(cVar2);
      std::ostream::flush();
      break;
    case 7:
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)local_f0,(char *)(DAT_00028454 + 0x27b78),0x18);
      if ((uStack_110 & 2) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_0002850c + 0x283c8),0x1a);
      }
      if ((uStack_110 & 4) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_00028508 + 0x283ac),0x14);
      }
      if ((uStack_110 & 8) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_00028504 + 0x28390),0x14);
      }
      if ((uStack_110 & 0x10) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_00028500 + 0x28374),0xf);
      }
      if ((uStack_110 & 0x20) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_000284fc + 0x28358),0x10);
      }
      if ((uStack_110 & 0x40) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_000284f8 + 0x2833c),0xe);
      }
      if ((uStack_110 & 0x80) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_000284f4 + 0x28320),0xf);
      }
      if ((uStack_110 & 0x100) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_000284d8 + 0x28244),0xf);
      }
      if ((uStack_110 & 0x200) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_000284dc + 0x28264),0x10);
      }
      if ((uStack_110 & 0x400) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_000284e0 + 0x28284),0xe);
      }
      if ((uStack_110 & 0x800) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_000284e4 + 0x282a4),0xf);
      }
      if ((uStack_110 & 0x1000) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_000284e8 + 0x282c4),8);
      }
      if ((uStack_110 & 0x2000) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_000284ec + 0x282e4),8);
      }
      if ((uStack_110 & 0x4000) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_000284f0 + 0x28304),10);
      }
      if ((uStack_110 & 0x1fffe) == 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_00028514 + 0x283fc),7);
      }
      piVar13 = *(int **)((int)auStack_74 + *(int *)(local_f0[0] + -0xc));
      if (piVar13 == (int *)0x0) goto LAB_00028b60;
      if ((char)piVar13[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*piVar13 + 0x18) != *(code **)(iVar17 + DAT_00028430)) {
          (**(code **)(*piVar13 + 0x18))(piVar13,10);
        }
      }
      iVar3 = 8;
      std::ostream::put(cVar2);
      std::ostream::flush();
      break;
    case 8:
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)local_f0,(char *)(DAT_00028434 + 0x277f4),0x18);
      if ((local_10c & 2) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_00028540 + 0x28724),0xb);
      }
      if ((local_10c & 4) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_00028544 + 0x28744),0xe);
      }
      if ((local_10c & 8) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_00028548 + 0x28764),4);
      }
      if ((local_10c & 0x10) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_0002854c + 0x28784),9);
      }
      if ((local_10c & 0x20) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_00028550 + 0x287a4),0xd);
      }
      if ((local_10c & 0x40) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_00028554 + 0x287c4),0xd);
      }
      if ((local_10c & 0x80) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_00028558 + 0x287e4),9);
      }
      if ((local_10c & 0x100) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_0002855c + 0x28804),0xd);
      }
      if ((local_10c & 0x200) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_00028560 + 0x28824),8);
      }
      if ((local_10c & 0x400) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_00028564 + 0x28844),7);
      }
      if ((local_10c & 0x800) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_00028568 + 0x28864),4);
      }
      if ((local_10c & 0x1000) != 0) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_0002856c + 0x28884),0x13);
      }
      piVar13 = *(int **)((int)auStack_74 + *(int *)(local_f0[0] + -0xc));
      if (piVar13 == (int *)0x0) goto LAB_00028b60;
      if ((char)piVar13[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*piVar13 + 0x18) != *(code **)(iVar17 + DAT_00028430)) {
          (**(code **)(*piVar13 + 0x18))(piVar13,10);
        }
      }
      iVar3 = 9;
      std::ostream::put(cVar2);
      std::ostream::flush();
      break;
    case 9:
      if (uStack_118 == 2) {
        std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_f0,pcVar12,0x18);
        iVar3 = 0x12;
        pcVar6 = (char *)(DAT_0002859c + 0x289a8);
      }
      else if (uStack_118 == 4) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_00028594 + 0x2897c),0x18);
        iVar3 = 0x12;
        pcVar6 = (char *)(DAT_00028598 + 0x2898c);
      }
      else if (uStack_118 == 1) {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_0002858c + 0x2895c),0x18);
        iVar3 = 0x12;
        pcVar6 = (char *)(DAT_00028590 + 0x2896c);
      }
      else {
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_f0,(char *)(DAT_00028428 + 0x27768),0x18);
        iVar3 = 7;
        pcVar6 = (char *)(DAT_0002842c + 0x27778);
      }
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_f0,pcVar6,iVar3);
      piVar13 = *(int **)((int)auStack_74 + *(int *)(local_f0[0] + -0xc));
      if (piVar13 == (int *)0x0) goto LAB_00028b60;
      if ((char)piVar13[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*piVar13 + 0x18) != *(code **)(iVar17 + DAT_00028430)) {
          (**(code **)(*piVar13 + 0x18))(piVar13,10);
        }
      }
      iVar3 = 10;
      std::ostream::put(cVar2);
      std::ostream::flush();
      break;
    case 10:
      if (iVar15 == 0) {
        iVar3 = 1;
        param_1 = 0;
        iVar15 = iVar3;
      }
      else {
        iVar3 = 0xb;
        iVar15 = 0;
      }
      break;
    default:
      goto switchD_000275a0_default;
    }
    local_140 = 0;
    local_13c[0] = local_13c[0] & 0xffffff00;
    local_144 = local_13c;
    if ((int)local_d8 == 0) {
      std::__cxx11::string::_M_assign((string *)&local_144);
    }
    else {
      std::__cxx11::string::_M_replace((uint)&local_144,0,(char *)0x0,local_e0._4_4_);
    }
    __dest = (uint *)*puVar16;
    if (local_144 == local_13c) {
      if (local_140 != 0) {
        if (local_140 == 1) {
          *(undefined1 *)__dest = (undefined1)local_13c[0];
          __dest = (uint *)*puVar16;
        }
        else {
          memcpy(__dest,local_13c,local_140);
          __dest = (uint *)*puVar16;
        }
      }
      *(size_t *)(DAT_0002847c + 0x27f5c) = local_140;
      *(undefined1 *)((int)__dest + local_140) = 0;
      uVar19 = local_13c[0];
    }
    else {
      if (__dest == puVar20) {
        *puVar16 = local_144;
        *(size_t *)(iVar1 + 0x27598) = local_140;
        *(uint *)(iVar1 + 0x2759c) = local_13c[0];
      }
      else {
        *puVar16 = local_144;
        *(size_t *)(iVar1 + 0x27598) = local_140;
        uVar19 = *(uint *)(iVar1 + 0x2759c);
        *(uint *)(iVar1 + 0x2759c) = local_13c[0];
        local_144 = __dest;
        if (__dest != (uint *)0x0) goto LAB_00027680;
      }
      local_144 = local_13c;
      uVar19 = local_13c[0];
    }
LAB_00027680:
    local_13c[0] = uVar19;
    local_140 = 0;
    *(undefined1 *)local_144 = 0;
    if (local_144 != local_13c) {
      operator_delete(local_144);
    }
    __s1 = *(code **)(DAT_00028424 + 0x276ac);
    if (iVar15 == 0) {
      iVar15 = *(int *)(iVar8 + 4);
      uVar18 = *(undefined4 *)(iVar8 + 8);
      goto LAB_000276bc;
    }
    iVar5 = strcmp((char *)__s1,(char *)(DAT_00028478 + 0x27f1c));
    if (0 < iVar5) {
      param_1 = iVar3;
    }
    goto LAB_0002759c;
  }
  rga_error_msg_set((char *)(DAT_000284a4 + 0x280ac));
  iVar8 = rga_log_enable_get();
  if (0 < iVar8) {
    rga_log_level_get();
  }
  __s1 = (code *)(DAT_000284ac + 0x280cc);
  __stream = (FILE *)**(undefined4 **)(iVar17 + DAT_000284a8);
  iVar17 = rga_get_current_time_ms();
  iVar8 = rga_get_start_time_ms();
  fprintf(__stream,(char *)(DAT_000284b0 + 0x280f0),iVar17 - iVar8,DAT_000284b4 + 0x280f4,0x1f2);
LAB_000276bc:
  local_f0[1] = iVar11 + 8;
  local_f0[0] = iVar9 + 0xc;
  local_b0[0] = iVar9 + 0x20;
  if (local_c8 != local_c0) {
    operator_delete(local_c8);
  }
  local_f0[1] = iVar10 + 8;
  std::locale::~locale(alStack_d0);
  local_f0[0] = iVar15;
  *(undefined4 *)((int)local_f0 + *(int *)(iVar15 + -0xc)) = uVar18;
  local_b0[0] = iVar7 + 8;
  std::ios_base::~ios_base((ios_base *)local_b0);
  return __s1;
switchD_000275a0_default:
  iVar15 = *(int *)(iVar8 + 4);
  uVar18 = *(undefined4 *)(iVar8 + 8);
  __s1 = imcheckHeader + DAT_000285d4;
  goto LAB_000276bc;
}



/* ===== imcheckHeader @ 00028b78 size=80 ===== */

/* imcheckHeader(unsigned int) */

void imcheckHeader(uint param_1)

{
  rga_check_header(param_1 >> 0x18,(param_1 & 0xffffff) >> 0x10,(param_1 & 0xffff) >> 8,0,
                   *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4),
                   *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8),
                   *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc));
  return;
}



/* ===== rga_check_perpare @ 00028bc8 size=4 ===== */

void rga_check_perpare(void)

{
  return;
}



/* ===== imsync @ 00028bcc size=280 ===== */

undefined4 imsync(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  FILE *pFVar5;
  
  iVar4 = DAT_00028ce4 + 0x28be4;
  if (param_1 < 1) {
    rga_error_msg_set((char *)(DAT_00028cf8 + 0x28c8c),param_1);
    iVar1 = rga_log_enable_get();
    if (0 < iVar1) {
      rga_log_level_get();
    }
    pFVar5 = (FILE *)**(undefined4 **)(iVar4 + DAT_00028cec);
    iVar4 = rga_get_current_time_ms();
    iVar1 = rga_get_start_time_ms();
    fprintf(pFVar5,(char *)(DAT_00028d00 + 0x28cd4),iVar4 - iVar1,DAT_00028cfc + 0x28ccc,0x2f4,
            param_1);
    uVar2 = 0xfffffffc;
  }
  else {
    iVar1 = rga_sync_wait(param_1,-1);
    if (iVar1 != 0) {
      rga_error_msg_set((char *)(DAT_00028ce8 + 0x28c1c),param_1,iVar1);
      iVar3 = rga_log_enable_get();
      if (0 < iVar3) {
        rga_log_level_get();
      }
      pFVar5 = (FILE *)**(undefined4 **)(iVar4 + DAT_00028cec);
      iVar4 = rga_get_current_time_ms();
      iVar3 = rga_get_start_time_ms();
      fprintf(pFVar5,(char *)(DAT_00028cf0 + 0x28c58),iVar4 - iVar3,DAT_00028cf4 + 0x28c60,0x2fa,
              param_1,iVar1);
      return 0;
    }
    close(param_1);
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== imconfig @ 00028d04 size=600 ===== */

undefined4 imconfig(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  FILE *pFVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = DAT_00028f5c + 0x28d24;
  if (param_1 == 1) {
    if (param_4 == 0 && param_3 < 7) {
      puVar2 = (uint *)__tls_get_addr(DAT_00028f74 + 0x28de0);
      *puVar2 = param_3;
      return 1;
    }
    rga_error_msg_set((char *)(DAT_00028f94 + 0x28f04),param_3);
    iVar1 = rga_log_enable_get();
    if (0 < iVar1) {
      rga_log_level_get();
    }
    pFVar3 = (FILE *)**(undefined4 **)(iVar5 + DAT_00028f64);
    iVar5 = rga_get_current_time_ms();
    iVar1 = rga_get_start_time_ms();
    fprintf(pFVar3,(char *)(DAT_00028f9c + 0x28f4c),iVar5 - iVar1,DAT_00028f98 + 0x28f44,0x312,
            param_3);
    uVar4 = 0xfffffffc;
  }
  else if (param_1 == 0) {
    if ((param_3 & 7) != 0) {
      iVar5 = __tls_get_addr(DAT_00028f70 + 0x28db8);
      *(uint *)(iVar5 + 4) = param_3;
      return 1;
    }
    rga_error_msg_set((char *)(DAT_00028f88 + 0x28e9c),param_3);
    iVar1 = rga_log_enable_get();
    if (0 < iVar1) {
      rga_log_level_get();
    }
    pFVar3 = (FILE *)**(undefined4 **)(iVar5 + DAT_00028f64);
    iVar5 = rga_get_current_time_ms();
    iVar1 = rga_get_start_time_ms();
    fprintf(pFVar3,(char *)(DAT_00028f90 + 0x28ee4),iVar5 - iVar1,DAT_00028f8c + 0x28edc,0x30a,
            param_3);
    uVar4 = 0xfffffffc;
  }
  else if (param_1 == 2) {
    if (param_4 == 0 && param_3 < 2) {
      iVar5 = __tls_get_addr(DAT_00028f78 + 0x28e0c);
      *(uint *)(iVar5 + 8) = param_3;
      return 1;
    }
    rga_error_msg_set((char *)(DAT_00028f7c + 0x28e34),param_3);
    iVar1 = rga_log_enable_get();
    if (0 < iVar1) {
      rga_log_level_get();
    }
    pFVar3 = (FILE *)**(undefined4 **)(iVar5 + DAT_00028f64);
    iVar5 = rga_get_current_time_ms();
    iVar1 = rga_get_start_time_ms();
    fprintf(pFVar3,(char *)(DAT_00028f84 + 0x28e7c),iVar5 - iVar1,DAT_00028f80 + 0x28e74,0x31a,
            param_3);
    uVar4 = 0xfffffffc;
  }
  else {
    rga_error_msg_set((char *)(DAT_00028f60 + 0x28d40));
    iVar1 = rga_log_enable_get();
    if (0 < iVar1) {
      rga_log_level_get();
    }
    pFVar3 = (FILE *)**(undefined4 **)(iVar5 + DAT_00028f64);
    iVar5 = rga_get_current_time_ms();
    iVar1 = rga_get_start_time_ms();
    fprintf(pFVar3,(char *)(DAT_00028f6c + 0x28d80),iVar5 - iVar1,DAT_00028f68 + 0x28d7c,799);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



/* ===== improcess @ 00028fa0 size=172 ===== */

void improcess(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_stack_000000f8;
  undefined4 in_stack_000000fc;
  undefined4 in_stack_00000100;
  undefined4 in_stack_00000104;
  undefined4 in_stack_00000108;
  undefined4 in_stack_0000010c;
  undefined4 in_stack_00000110;
  undefined4 in_stack_00000114;
  undefined4 in_stack_00000118;
  undefined4 in_stack_0000011c;
  undefined4 in_stack_00000120;
  undefined4 in_stack_00000124;
  undefined4 in_stack_00000128;
  undefined1 auStack_158 [72];
  undefined1 auStack_110 [88];
  undefined1 auStack_b8 [88];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_24 = in_stack_00000128;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0xffffffff;
  local_40 = in_stack_00000118;
  uStack_3c = in_stack_0000011c;
  uStack_38 = in_stack_00000120;
  uStack_34 = in_stack_00000124;
  local_50 = in_stack_00000108;
  uStack_4c = in_stack_0000010c;
  uStack_48 = in_stack_00000110;
  uStack_44 = in_stack_00000114;
  local_60 = in_stack_000000f8;
  uStack_5c = in_stack_000000fc;
  uStack_58 = in_stack_00000100;
  uStack_54 = in_stack_00000104;
  memcpy(auStack_b8,&stack0x000000a0,0x58);
  memcpy(auStack_110,&stack0x00000048,0x58);
  memcpy(auStack_158,&stack0x00000000,0x48);
  rga_single_task_submit(param_1,param_2,param_3,param_4);
  return;
}



/* ===== improcess @ 0002904c size=176 ===== */

/* improcess(rga_buffer_t, rga_buffer_t, rga_buffer_t, im_rect, im_rect, im_rect, int, int*,
   im_opt*, int) */

void improcess(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_stack_000000f8;
  undefined4 in_stack_000000fc;
  undefined4 in_stack_00000100;
  undefined4 in_stack_00000104;
  undefined4 in_stack_00000108;
  undefined4 in_stack_0000010c;
  undefined4 in_stack_00000110;
  undefined4 in_stack_00000114;
  undefined4 in_stack_00000118;
  undefined4 in_stack_0000011c;
  undefined4 in_stack_00000120;
  undefined4 in_stack_00000124;
  undefined4 in_stack_00000128;
  undefined4 in_stack_0000012c;
  undefined4 in_stack_00000130;
  undefined4 in_stack_00000134;
  undefined1 auStack_160 [72];
  undefined1 auStack_118 [88];
  undefined1 auStack_c0 [88];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_38 = in_stack_00000128;
  local_30 = in_stack_00000130;
  local_2c = in_stack_00000134;
  local_34 = in_stack_0000012c;
  local_48 = in_stack_00000118;
  uStack_44 = in_stack_0000011c;
  uStack_40 = in_stack_00000120;
  uStack_3c = in_stack_00000124;
  local_58 = in_stack_00000108;
  uStack_54 = in_stack_0000010c;
  uStack_50 = in_stack_00000110;
  uStack_4c = in_stack_00000114;
  local_68 = in_stack_000000f8;
  uStack_64 = in_stack_000000fc;
  uStack_60 = in_stack_00000100;
  uStack_5c = in_stack_00000104;
  memcpy(auStack_c0,&stack0x000000a0,0x58);
  memcpy(auStack_118,&stack0x00000048,0x58);
  memcpy(auStack_160,&stack0x00000000,0x48);
  rga_single_task_submit(param_1,param_2,param_3,param_4);
  return;
}



/* ===== imcopy @ 000290fc size=456 ===== */

/* imcopy(rga_buffer_t, rga_buffer_t, int, int*) */

undefined4 imcopy(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  FILE *__stream;
  int in_stack_00000054;
  int in_stack_00000058;
  int in_stack_000000a0;
  undefined4 in_stack_000000a4;
  undefined1 auStack_2f0 [88];
  undefined1 auStack_298 [88];
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 local_210;
  undefined4 local_20c;
  im_opt *local_208;
  undefined4 local_204;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  rga_buffer_t arStack_1c0 [88];
  undefined4 local_168 [77];
  
  iVar2 = param_5;
  local_1fc = in_stack_00000054;
  local_1f8 = in_stack_00000058;
  local_168[0] = 0x1090105;
  empty_structure((rga_buffer_t *)0x0,(rga_buffer_t *)0x0,arStack_1c0,(im_rect *)&local_1f0,
                  (im_rect *)&local_1e0,(im_rect *)&local_1d0,(im_opt *)local_168);
  local_1f4 = DAT_000292c4 + 0x29184;
  if (param_4 == local_1fc && iVar2 == local_1f8) {
    if (in_stack_000000a0 == 0) {
      local_204 = 0x4000000;
    }
    else if (in_stack_000000a0 == 1) {
      local_204 = 0x80000;
    }
    else {
      local_204 = 0;
    }
    local_210 = 0xffffffff;
    local_20c = in_stack_000000a4;
    local_220 = local_1d0;
    uStack_21c = uStack_1cc;
    uStack_218 = uStack_1c8;
    uStack_214 = uStack_1c4;
    local_230 = local_1e0;
    uStack_22c = uStack_1dc;
    uStack_228 = uStack_1d8;
    uStack_224 = uStack_1d4;
    local_240 = local_1f0;
    uStack_23c = uStack_1ec;
    uStack_238 = uStack_1e8;
    uStack_234 = uStack_1e4;
    local_208 = (im_opt *)local_168;
    memcpy(auStack_298,arStack_1c0,0x58);
    memcpy(auStack_2f0,&stack0x00000048,0x58);
    memcpy(&stack0xfffffcc8,&param_5,0x48);
    uVar1 = improcess(param_1,param_2,param_3,param_4);
  }
  else {
    rga_error_msg_set((char *)(DAT_000292c8 + 0x29244),param_4,iVar2,local_1fc);
    iVar2 = rga_log_enable_get();
    if ((0 < iVar2) && (iVar2 = rga_log_level_get(), iVar2 < 6)) {
      __stream = (FILE *)**(undefined4 **)(local_1f4 + DAT_000292cc);
      iVar2 = rga_get_current_time_ms();
      iVar3 = rga_get_start_time_ms();
      fprintf(__stream,(char *)(DAT_000292d0 + 0x292a8),iVar2 - iVar3,DAT_000292d4 + 0x292b8);
    }
    uVar1 = 0xfffffffd;
  }
  return uVar1;
}



/* ===== imcvtcolor @ 000292d8 size=264 ===== */

/* imcvtcolor(rga_buffer_t, rga_buffer_t, int, int, int, int, int*) */

void imcvtcolor(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000064;
  undefined4 in_stack_00000068;
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a4;
  undefined4 in_stack_000000a8;
  int in_stack_000000ac;
  undefined4 in_stack_000000b0;
  undefined1 auStack_2e0 [88];
  undefined1 auStack_288 [88];
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined4 local_1fc;
  im_opt *local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  rga_buffer_t arStack_1c0 [88];
  undefined4 local_168 [77];
  
  iVar2 = in_stack_000000ac;
  uVar1 = in_stack_000000a0;
  local_168[0] = 0x1090105;
  uVar3 = 0x29330;
  empty_structure((rga_buffer_t *)0x0,(rga_buffer_t *)0x0,arStack_1c0,(im_rect *)&local_1f0,
                  (im_rect *)&local_1e0,(im_rect *)&local_1d0,(im_opt *)local_168);
  in_stack_0000000c = uVar1;
  if (iVar2 == 0) {
    uVar3 = 0x4000000;
  }
  in_stack_00000064 = in_stack_000000a4;
  in_stack_00000068 = in_stack_000000a8;
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      uVar3 = 0x80000;
    }
    else {
      uVar3 = 0;
    }
  }
  local_1fc = in_stack_000000b0;
  local_200 = 0xffffffff;
  local_210 = local_1d0;
  uStack_20c = uStack_1cc;
  uStack_208 = uStack_1c8;
  uStack_204 = uStack_1c4;
  local_220 = local_1e0;
  uStack_21c = uStack_1dc;
  uStack_218 = uStack_1d8;
  uStack_214 = uStack_1d4;
  local_230 = local_1f0;
  uStack_22c = uStack_1ec;
  uStack_228 = uStack_1e8;
  uStack_224 = uStack_1e4;
  local_1f8 = (im_opt *)local_168;
  local_1f4 = uVar3;
  memcpy(auStack_288,arStack_1c0,0x58);
  memcpy(auStack_2e0,&stack0x00000048,0x58);
  memcpy(&stack0xfffffcd8,&stack0x00000000,0x48);
  improcess(param_1,param_2,param_3,param_4);
  return;
}



/* ===== imcrop @ 000293e0 size=252 ===== */

/* imcrop(rga_buffer_t, rga_buffer_t, im_rect, int, int*) */

void imcrop(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a4;
  undefined4 in_stack_000000a8;
  undefined4 in_stack_000000ac;
  int in_stack_000000b0;
  undefined4 in_stack_000000b4;
  undefined1 auStack_2c8 [88];
  undefined1 auStack_270 [88];
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  im_opt *local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  rga_buffer_t arStack_1b8 [88];
  undefined4 local_160 [76];
  
  uVar2 = in_stack_000000b4;
  iVar1 = in_stack_000000b0;
  local_160[0] = 0x1090105;
  empty_structure((rga_buffer_t *)0x0,(rga_buffer_t *)0x0,arStack_1b8,(im_rect *)0x0,
                  (im_rect *)&local_1d8,(im_rect *)&local_1c8,(im_opt *)local_160);
  local_1d0 = CONCAT44(in_stack_000000ac,in_stack_000000a8);
  if (iVar1 == 0) {
    local_1dc = 0x4000000;
  }
  else if (iVar1 == 1) {
    local_1dc = 0x80000;
  }
  else {
    local_1dc = 0;
  }
  local_1e8 = 0xffffffff;
  local_1e4 = uVar2;
  local_1f8 = local_1c8;
  uStack_1f4 = uStack_1c4;
  uStack_1f0 = uStack_1c0;
  uStack_1ec = uStack_1bc;
  local_208 = local_1d8;
  uStack_204 = uStack_1d4;
  uStack_200 = in_stack_000000a8;
  uStack_1fc = in_stack_000000ac;
  local_218 = in_stack_000000a0;
  uStack_214 = in_stack_000000a4;
  uStack_210 = in_stack_000000a8;
  uStack_20c = in_stack_000000ac;
  local_1e0 = (im_opt *)local_160;
  memcpy(auStack_270,arStack_1b8,0x58);
  memcpy(auStack_2c8,&stack0x00000048,0x58);
  memcpy(&stack0xfffffcf0,&stack0x00000000,0x48);
  improcess(param_1,param_2,param_3,param_4);
  return;
}



/* ===== imtranslate @ 000294dc size=500 ===== */

/* imtranslate(rga_buffer_t, rga_buffer_t, int, int, int, int*) */

undefined4
imtranslate(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  FILE *__stream;
  int in_stack_00000054;
  int in_stack_00000058;
  int in_stack_000000a0;
  int in_stack_000000a4;
  int in_stack_000000a8;
  undefined4 in_stack_000000ac;
  undefined1 auStack_2f0 [88];
  undefined1 auStack_298 [88];
  undefined4 local_240;
  undefined4 uStack_23c;
  int iStack_238;
  int iStack_234;
  int local_230;
  int iStack_22c;
  int iStack_228;
  int iStack_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 local_210;
  undefined4 local_20c;
  im_opt *local_208;
  undefined4 local_204;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  rga_buffer_t arStack_1c0 [88];
  undefined4 local_168 [77];
  
  iVar2 = param_5;
  local_1fc = in_stack_00000054;
  local_1f8 = in_stack_00000058;
  local_168[0] = 0x1090105;
  empty_structure((rga_buffer_t *)0x0,(rga_buffer_t *)0x0,arStack_1c0,(im_rect *)&local_1f0,
                  (im_rect *)&local_1e0,(im_rect *)&local_1d0,(im_opt *)local_168);
  local_1f4 = DAT_000296d0 + 0x29564;
  if (iVar2 == local_1f8 && param_4 == local_1fc) {
    if (in_stack_000000a8 == 0) {
      local_204 = 0x4000000;
    }
    else if (in_stack_000000a8 == 1) {
      local_204 = 0x80000;
    }
    else {
      local_204 = 0;
    }
    iStack_238 = param_4 - in_stack_000000a0;
    iStack_234 = iVar2 - in_stack_000000a4;
    local_20c = in_stack_000000ac;
    local_1e0 = in_stack_000000a0;
    local_1dc = in_stack_000000a4;
    local_210 = 0xffffffff;
    local_220 = local_1d0;
    uStack_21c = uStack_1cc;
    uStack_218 = uStack_1c8;
    uStack_214 = uStack_1c4;
    local_230 = in_stack_000000a0;
    iStack_22c = in_stack_000000a4;
    local_240 = local_1f0;
    uStack_23c = uStack_1ec;
    iStack_228 = iStack_238;
    iStack_224 = iStack_234;
    local_208 = (im_opt *)local_168;
    local_1e8 = iStack_238;
    local_1e4 = iStack_234;
    local_1d8 = iStack_238;
    local_1d4 = iStack_234;
    memcpy(auStack_298,arStack_1c0,0x58);
    memcpy(auStack_2f0,&stack0x00000048,0x58);
    memcpy(&stack0xfffffcc8,&param_5,0x48);
    uVar1 = improcess(param_1,param_2,param_3,param_4);
  }
  else {
    rga_error_msg_set((char *)(DAT_000296d4 + 0x29658),param_4,iVar2,local_1fc);
    iVar2 = rga_log_enable_get();
    if ((0 < iVar2) && (iVar2 = rga_log_level_get(), iVar2 < 6)) {
      __stream = (FILE *)**(undefined4 **)(local_1f4 + DAT_000296d8);
      iVar2 = rga_get_current_time_ms();
      iVar3 = rga_get_start_time_ms();
      fprintf(__stream,(char *)(DAT_000296dc + 0x296b4),iVar2 - iVar3,DAT_000296e0 + 0x296c4);
    }
    uVar1 = 0xfffffffd;
  }
  return uVar1;
}



/* ===== imrotate @ 000296e4 size=240 ===== */

/* imrotate(rga_buffer_t, rga_buffer_t, int, int, int*) */

void imrotate(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint in_stack_000000a0;
  int in_stack_000000a4;
  undefined4 in_stack_000000a8;
  undefined1 auStack_2e0 [88];
  undefined1 auStack_288 [88];
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined4 local_1fc;
  im_opt *local_1f8;
  uint local_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  rga_buffer_t arStack_1c0 [88];
  undefined4 local_168 [77];
  
  iVar1 = in_stack_000000a4;
  uVar2 = in_stack_000000a0;
  local_168[0] = 0x1090105;
  empty_structure((rga_buffer_t *)0x0,(rga_buffer_t *)0x0,arStack_1c0,(im_rect *)&local_1f0,
                  (im_rect *)&local_1e0,(im_rect *)&local_1d0,(im_opt *)local_168);
  if (iVar1 == 0) {
    uVar2 = uVar2 | 0x4000000;
  }
  else if (iVar1 == 1) {
    uVar2 = uVar2 | 0x80000;
  }
  local_1fc = in_stack_000000a8;
  local_200 = 0xffffffff;
  local_210 = local_1d0;
  uStack_20c = uStack_1cc;
  uStack_208 = uStack_1c8;
  uStack_204 = uStack_1c4;
  local_220 = local_1e0;
  uStack_21c = uStack_1dc;
  uStack_218 = uStack_1d8;
  uStack_214 = uStack_1d4;
  local_230 = local_1f0;
  uStack_22c = uStack_1ec;
  uStack_228 = uStack_1e8;
  uStack_224 = uStack_1e4;
  local_1f8 = (im_opt *)local_168;
  local_1f4 = uVar2;
  memcpy(auStack_288,arStack_1c0,0x58);
  memcpy(auStack_2e0,&stack0x00000048,0x58);
  memcpy(&stack0xfffffcd8,&stack0x00000000,0x48);
  improcess(param_1,param_2,param_3,param_4);
  return;
}



/* ===== imflip @ 000297d4 size=100 ===== */

/* imflip(rga_buffer_t, rga_buffer_t, int, int, int*) */

void imflip(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a4;
  undefined4 in_stack_000000a8;
  undefined1 auStack_c8 [72];
  undefined1 auStack_80 [88];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_28 = in_stack_000000a0;
  local_24 = in_stack_000000a4;
  local_20 = in_stack_000000a8;
  memcpy(auStack_80,&stack0x00000048,0x58);
  memcpy(auStack_c8,&stack0x00000000,0x48);
  imrotate(param_1,param_2,param_3,param_4);
  return;
}



/* ===== imcomposite @ 00029838 size=240 ===== */

/* imcomposite(rga_buffer_t, rga_buffer_t, rga_buffer_t, int, int, int*) */

void imcomposite(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint in_stack_000000f8;
  int in_stack_000000fc;
  undefined4 in_stack_00000100;
  undefined1 auStack_288 [88];
  undefined1 auStack_230 [88];
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  im_opt *local_1a0;
  uint local_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168 [77];
  
  uVar2 = in_stack_00000100;
  iVar1 = in_stack_000000fc;
  uVar3 = in_stack_000000f8;
  local_168[0] = 0x1090105;
  empty_structure((rga_buffer_t *)0x0,(rga_buffer_t *)0x0,(rga_buffer_t *)0x0,(im_rect *)&local_198,
                  (im_rect *)&local_188,(im_rect *)&local_178,(im_opt *)local_168);
  if (iVar1 == 0) {
    uVar3 = uVar3 | 0x4000000;
  }
  else if (iVar1 == 1) {
    uVar3 = uVar3 | 0x80000;
  }
  local_1a8 = 0xffffffff;
  local_1a4 = uVar2;
  local_1b8 = local_178;
  uStack_1b4 = uStack_174;
  uStack_1b0 = uStack_170;
  uStack_1ac = uStack_16c;
  local_1c8 = local_188;
  uStack_1c4 = uStack_184;
  uStack_1c0 = uStack_180;
  uStack_1bc = uStack_17c;
  local_1d8 = local_198;
  uStack_1d4 = uStack_194;
  uStack_1d0 = uStack_190;
  uStack_1cc = uStack_18c;
  local_1a0 = (im_opt *)local_168;
  local_19c = uVar3;
  memcpy(auStack_230,&stack0x00000048,0x58);
  memcpy(auStack_288,&stack0x000000a0,0x58);
  memcpy(&stack0xfffffd30,&stack0x00000000,0x48);
  improcess(param_1,param_2,param_3,param_4);
  return;
}



/* ===== imblend @ 00029928 size=132 ===== */

/* imblend(rga_buffer_t, rga_buffer_t, int, int, int*) */

void imblend(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a4;
  undefined4 in_stack_000000a8;
  undefined1 auStack_190 [72];
  undefined1 auStack_148 [88];
  undefined1 auStack_f0 [88];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined1 auStack_88 [92];
  
  uVar3 = in_stack_000000a8;
  uVar2 = in_stack_000000a4;
  uVar1 = in_stack_000000a0;
  memset(auStack_88,0,0x58);
  local_94 = uVar2;
  uStack_90 = uVar3;
  local_98 = uVar1;
  memcpy(auStack_f0,&stack0x00000048,0x58);
  memcpy(auStack_148,auStack_88,0x58);
  memcpy(auStack_190,&stack0x00000000,0x48);
  imcomposite(param_1,param_2,param_3,param_4);
  return;
}



/* ===== imosd @ 000299ac size=260 ===== */

/* imosd(rga_buffer_t, rga_buffer_t, im_rect, im_osd*, int, int*) */

void imosd(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a4;
  undefined4 in_stack_000000a8;
  undefined4 in_stack_000000ac;
  void *in_stack_000000b0;
  int in_stack_000000b4;
  undefined4 in_stack_000000b8;
  undefined1 auStack_2a0 [72];
  undefined1 auStack_258 [88];
  undefined1 auStack_200 [88];
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 *local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158 [14];
  undefined1 auStack_120 [248];
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar2 = in_stack_000000b8;
  iVar1 = in_stack_000000b4;
  local_10 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  memset(local_158,0,0x130);
  uStack_164 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_160 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_15c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_168 = 0;
  local_158[0] = 0x1090105;
  memcpy(auStack_120,in_stack_000000b0,0x68);
  if (iVar1 == 0) {
    local_16c = 0x14002000;
  }
  else {
    local_16c = 0x10002000;
    if (iVar1 == 1) {
      local_16c = 0x10082000;
    }
  }
  local_174 = uVar2;
  local_178 = 0xffffffff;
  local_188 = local_168;
  uStack_184 = uStack_164;
  uStack_180 = uStack_160;
  uStack_17c = uStack_15c;
  local_198 = in_stack_000000a0;
  uStack_194 = in_stack_000000a4;
  uStack_190 = in_stack_000000a8;
  uStack_18c = in_stack_000000ac;
  local_1a8 = in_stack_000000a0;
  uStack_1a4 = in_stack_000000a4;
  uStack_1a0 = in_stack_000000a8;
  uStack_19c = in_stack_000000ac;
  local_170 = local_158;
  memcpy(auStack_200,&local_10,0x58);
  memcpy(auStack_258,&stack0x00000048,0x58);
  memcpy(auStack_2a0,&stack0x00000058,0x48);
  improcess(in_stack_00000048,in_stack_0000004c,in_stack_00000050,in_stack_00000054);
  return;
}



/* ===== imcolorkey @ 00029ab0 size=260 ===== */

/* imcolorkey(rga_buffer_t, rga_buffer_t, im_colorkey_range, int, int, int*) */

void imcolorkey(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a4;
  uint in_stack_000000a8;
  int in_stack_000000ac;
  undefined4 in_stack_000000b0;
  undefined1 auStack_2e0 [88];
  undefined1 auStack_288 [88];
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined4 local_1fc;
  im_opt *local_1f8;
  uint local_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  rga_buffer_t arStack_1c0 [88];
  undefined4 local_168 [2];
  undefined4 local_160;
  undefined4 uStack_15c;
  
  iVar1 = in_stack_000000ac;
  uVar2 = in_stack_000000a8;
  local_168[0] = 0x1090105;
  empty_structure((rga_buffer_t *)0x0,(rga_buffer_t *)0x0,arStack_1c0,(im_rect *)&local_1f0,
                  (im_rect *)&local_1e0,(im_rect *)&local_1d0,(im_opt *)local_168);
  if (iVar1 == 0) {
    uVar2 = uVar2 | 0x4000000;
  }
  local_160 = in_stack_000000a0;
  uStack_15c = in_stack_000000a4;
  if ((iVar1 != 0) && (iVar1 == 1)) {
    uVar2 = uVar2 | 0x80000;
  }
  local_1fc = in_stack_000000b0;
  local_200 = 0xffffffff;
  local_210 = local_1d0;
  uStack_20c = uStack_1cc;
  uStack_208 = uStack_1c8;
  uStack_204 = uStack_1c4;
  local_220 = local_1e0;
  uStack_21c = uStack_1dc;
  uStack_218 = uStack_1d8;
  uStack_214 = uStack_1d4;
  local_230 = local_1f0;
  uStack_22c = uStack_1ec;
  uStack_228 = uStack_1e8;
  uStack_224 = uStack_1e4;
  local_1f8 = (im_opt *)local_168;
  local_1f4 = uVar2;
  memcpy(auStack_288,arStack_1c0,0x58);
  memcpy(auStack_2e0,&stack0x00000048,0x58);
  memcpy(&stack0xfffffcd8,&stack0x00000000,0x48);
  improcess(param_1,param_2,param_3,param_4);
  return;
}



/* ===== imquantize @ 00029bb4 size=268 ===== */

/* imquantize(rga_buffer_t, rga_buffer_t, im_nn, int, int*) */

void imquantize(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a4;
  undefined4 in_stack_000000a8;
  undefined4 in_stack_000000ac;
  undefined4 in_stack_000000b0;
  undefined4 in_stack_000000b4;
  int in_stack_000000b8;
  undefined4 in_stack_000000bc;
  undefined1 auStack_2e0 [88];
  undefined1 auStack_288 [88];
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined4 local_1fc;
  im_opt *local_1f8;
  undefined4 *local_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  rga_buffer_t arStack_1c0 [88];
  undefined4 local_168 [4];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  
  uVar2 = in_stack_000000bc;
  iVar1 = in_stack_000000b8;
  local_168[0] = 0x1090105;
  empty_structure((rga_buffer_t *)0x0,(rga_buffer_t *)0x0,arStack_1c0,(im_rect *)&local_1f0,
                  (im_rect *)&local_1e0,(im_rect *)&local_1d0,(im_opt *)local_168);
  local_1f4 = &stack0x000000b0;
  local_158 = in_stack_000000a0;
  uStack_154 = in_stack_000000a4;
  uStack_150 = in_stack_000000a8;
  uStack_14c = in_stack_000000ac;
  if (iVar1 == 0) {
    local_1f4 = (undefined4 *)0x4800000;
  }
  local_148 = in_stack_000000b0;
  uStack_144 = in_stack_000000b4;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      local_1f4 = (undefined4 *)0x880000;
    }
    else {
      local_1f4 = (undefined4 *)0x800000;
    }
  }
  local_200 = 0xffffffff;
  local_1fc = uVar2;
  local_210 = local_1d0;
  uStack_20c = uStack_1cc;
  uStack_208 = uStack_1c8;
  uStack_204 = uStack_1c4;
  local_220 = local_1e0;
  uStack_21c = uStack_1dc;
  uStack_218 = uStack_1d8;
  uStack_214 = uStack_1d4;
  local_230 = local_1f0;
  uStack_22c = uStack_1ec;
  uStack_228 = uStack_1e8;
  uStack_224 = uStack_1e4;
  local_1f8 = (im_opt *)local_168;
  memcpy(auStack_288,arStack_1c0,0x58);
  memcpy(auStack_2e0,&stack0x00000048,0x58);
  memcpy(&stack0xfffffcd8,&stack0x00000000,0x48);
  improcess(param_1,param_2,param_3,param_4);
  return;
}



/* ===== imrop @ 00029cc0 size=248 ===== */

/* imrop(rga_buffer_t, rga_buffer_t, int, int, int*) */

void imrop(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_stack_000000a0;
  int in_stack_000000a4;
  undefined4 in_stack_000000a8;
  undefined1 auStack_2e0 [88];
  undefined1 auStack_288 [88];
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined4 local_1fc;
  im_opt *local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  rga_buffer_t arStack_1c0 [88];
  undefined4 local_168 [10];
  undefined4 local_140;
  
  iVar2 = in_stack_000000a4;
  uVar1 = in_stack_000000a0;
  local_168[0] = 0x1090105;
  empty_structure((rga_buffer_t *)0x0,(rga_buffer_t *)0x0,arStack_1c0,(im_rect *)&local_1f0,
                  (im_rect *)&local_1e0,(im_rect *)&local_1d0,(im_opt *)local_168);
  local_140 = uVar1;
  if (iVar2 == 0) {
    local_1f4 = 0x5000000;
  }
  else if (iVar2 == 1) {
    local_1f4 = 0x1080000;
  }
  else {
    local_1f4 = 0x1000000;
  }
  local_1fc = in_stack_000000a8;
  local_200 = 0xffffffff;
  local_210 = local_1d0;
  uStack_20c = uStack_1cc;
  uStack_208 = uStack_1c8;
  uStack_204 = uStack_1c4;
  local_220 = local_1e0;
  uStack_21c = uStack_1dc;
  uStack_218 = uStack_1d8;
  uStack_214 = uStack_1d4;
  local_230 = local_1f0;
  uStack_22c = uStack_1ec;
  uStack_228 = uStack_1e8;
  uStack_224 = uStack_1e4;
  local_1f8 = (im_opt *)local_168;
  memcpy(auStack_288,arStack_1c0,0x58);
  memcpy(auStack_2e0,&stack0x00000048,0x58);
  memcpy(&stack0xfffffcd8,&stack0x00000000,0x48);
  improcess(param_1,param_2,param_3,param_4);
  return;
}



/* ===== immosaic @ 00029db8 size=260 ===== */

/* immosaic(rga_buffer_t, im_rect, int, int, int*) */

void immosaic(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined4 in_stack_00000058;
  int in_stack_0000005c;
  undefined4 in_stack_00000060;
  undefined1 auStack_300 [72];
  undefined1 auStack_2b8 [88];
  undefined1 auStack_260 [88];
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 *local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined1 auStack_1b8 [88];
  undefined4 local_160 [13];
  undefined4 local_12c;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar3 = in_stack_00000060;
  iVar2 = in_stack_0000005c;
  uVar1 = in_stack_00000058;
  local_10 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  memset(local_160,0,0x130);
  memset(auStack_1b8,0,0x58);
  uStack_1e4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_1e0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_1dc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_12c = uVar1;
  local_1c8 = 0;
  local_160[0] = 0x1090105;
  if (iVar2 == 0) {
    local_1cc = 0xc000000;
  }
  else {
    local_1cc = 0x8080000;
    if (iVar2 != 1) {
      local_1cc = 0x8000000;
    }
  }
  local_1d4 = uVar3;
  local_1d8 = 0xffffffff;
  local_1e8 = 0;
  local_1f8 = in_stack_00000048;
  uStack_1f4 = in_stack_0000004c;
  uStack_1f0 = in_stack_00000050;
  uStack_1ec = in_stack_00000054;
  local_208 = in_stack_00000048;
  uStack_204 = in_stack_0000004c;
  uStack_200 = in_stack_00000050;
  uStack_1fc = in_stack_00000054;
  local_1d0 = local_160;
  uStack_1c4 = uStack_1e4;
  uStack_1c0 = uStack_1e0;
  uStack_1bc = uStack_1dc;
  memcpy(auStack_260,auStack_1b8,0x58);
  memcpy(auStack_2b8,&local_10,0x58);
  memcpy(auStack_300,&stack0x00000000,0x48);
  improcess(local_10,uStack_c,uStack_8,uStack_4);
  return;
}



/* ===== immosaicArray @ 00029ebc size=380 ===== */

/* immosaicArray(rga_buffer_t, im_rect*, int, int, int, int*) */

int immosaicArray(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *in_stack_00000048;
  int in_stack_0000004c;
  undefined4 in_stack_00000050;
  int in_stack_00000054;
  int *in_stack_00000058;
  undefined1 auStack_a8 [72];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  int local_4c;
  int *local_48;
  int local_40;
  char *local_3c;
  
  piVar2 = in_stack_00000058;
  iVar6 = in_stack_00000054;
  iVar1 = in_stack_0000004c;
  if (0 < in_stack_0000004c) {
    if (in_stack_00000054 == 0 && in_stack_00000058 != (int *)0x0) {
      iVar6 = 0;
      local_3c = (char *)(DAT_0002a038 + 0x29f14);
      local_40 = -1;
      puVar5 = in_stack_00000048;
      do {
        local_48 = piVar2;
        local_4c = 0;
        local_50 = in_stack_00000050;
        local_60 = *puVar5;
        uStack_5c = puVar5[1];
        uStack_58 = puVar5[2];
        uStack_54 = puVar5[3];
        memcpy(auStack_a8,&stack0x00000000,0x48);
        iVar3 = immosaic(param_1,param_2,param_3,param_4);
        if (iVar3 != 1) {
          return iVar3;
        }
        iVar4 = *piVar2;
        iVar3 = local_40;
        if ((-1 < iVar4) && (iVar3 = iVar4, -1 < local_40)) {
          iVar3 = rga_sync_merge(local_3c,local_40,iVar4);
        }
        local_40 = iVar3;
        iVar6 = iVar6 + 1;
        puVar5 = puVar5 + 4;
      } while (iVar1 != iVar6);
      goto LAB_0002a01c;
    }
    iVar3 = 0;
    puVar5 = in_stack_00000048;
    do {
      iVar3 = iVar3 + 1;
      local_48 = piVar2;
      local_4c = iVar6;
      local_50 = in_stack_00000050;
      local_60 = *puVar5;
      uStack_5c = puVar5[1];
      uStack_58 = puVar5[2];
      uStack_54 = puVar5[3];
      puVar5 = puVar5 + 4;
      memcpy(auStack_a8,&stack0x00000000,0x48);
      iVar4 = immosaic(param_1,param_2,param_3,param_4);
      if (iVar4 != 1) {
        return iVar4;
      }
    } while (iVar1 != iVar3);
  }
  if (piVar2 == (int *)0x0) {
    return 1;
  }
  local_40 = -1;
LAB_0002a01c:
  *piVar2 = local_40;
  return 1;
}



/* ===== impalette @ 0002a03c size=428 ===== */

/* impalette(rga_buffer_t, rga_buffer_t, rga_buffer_t, int, int*) */

undefined4
impalette(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  FILE *__stream;
  int in_stack_00000054;
  int in_stack_00000058;
  int in_stack_000000f8;
  undefined4 in_stack_000000fc;
  undefined1 auStack_290 [88];
  undefined1 auStack_238 [88];
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  im_opt *local_1a8;
  undefined4 local_1a4;
  int local_1a0;
  int local_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168 [77];
  
  iVar3 = in_stack_00000058;
  iVar2 = param_5;
  local_1a0 = in_stack_00000054;
  local_168[0] = 0x1090105;
  empty_structure((rga_buffer_t *)0x0,(rga_buffer_t *)0x0,(rga_buffer_t *)0x0,(im_rect *)&local_198,
                  (im_rect *)&local_188,(im_rect *)&local_178,(im_opt *)local_168);
  local_19c = DAT_0002a1e8 + 0x2a0b4;
  if (param_4 == local_1a0 && iVar2 == iVar3) {
    if (in_stack_000000f8 == 0) {
      local_1a4 = 0x4400000;
    }
    else if (in_stack_000000f8 == 1) {
      local_1a4 = 0x480000;
    }
    else {
      local_1a4 = 0x400000;
    }
    local_1b0 = 0xffffffff;
    local_1ac = in_stack_000000fc;
    local_1c0 = local_178;
    uStack_1bc = uStack_174;
    uStack_1b8 = uStack_170;
    uStack_1b4 = uStack_16c;
    local_1d0 = local_188;
    uStack_1cc = uStack_184;
    uStack_1c8 = uStack_180;
    uStack_1c4 = uStack_17c;
    local_1e0 = local_198;
    uStack_1dc = uStack_194;
    uStack_1d8 = uStack_190;
    uStack_1d4 = uStack_18c;
    local_1a8 = (im_opt *)local_168;
    memcpy(auStack_238,&stack0x000000a0,0x58);
    memcpy(auStack_290,&stack0x00000048,0x58);
    memcpy(&stack0xfffffd28,&param_5,0x48);
    uVar1 = improcess(param_1,param_2,param_3,param_4);
  }
  else {
    rga_error_msg_set((char *)(DAT_0002a1ec + 0x2a178),param_4,iVar2,local_1a0);
    iVar2 = rga_log_enable_get();
    if ((0 < iVar2) && (iVar2 = rga_log_level_get(), iVar2 < 6)) {
      __stream = (FILE *)**(undefined4 **)(local_19c + DAT_0002a1f0);
      iVar2 = rga_get_current_time_ms();
      iVar3 = rga_get_start_time_ms();
      fprintf(__stream,(char *)(DAT_0002a1f4 + 0x2a1cc),iVar2 - iVar3,DAT_0002a1f8 + 0x2a1dc);
    }
    uVar1 = 0xfffffffd;
  }
  return uVar1;
}



/* ===== imfill @ 0002a1fc size=272 ===== */

/* imfill(rga_buffer_t, im_rect, int, int, int*) */

void imfill(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined4 in_stack_00000058;
  int in_stack_0000005c;
  undefined4 in_stack_00000060;
  undefined1 auStack_328 [88];
  undefined1 auStack_2d0 [88];
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 local_244;
  im_opt *local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  rga_buffer_t arStack_218 [88];
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined1 auStack_1b0 [72];
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_168 = 0x1090105;
  local_10 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  empty_structure((rga_buffer_t *)&local_1c0,(rga_buffer_t *)0x0,arStack_218,(im_rect *)&local_238,
                  (im_rect *)0x0,(im_rect *)&local_228,(im_opt *)&local_168);
  memset(&local_1c0,0,0x58);
  local_164 = in_stack_00000058;
  if (in_stack_0000005c == 0) {
    local_23c = 0x4200000;
  }
  else if (in_stack_0000005c == 1) {
    local_23c = 0x280000;
  }
  else {
    local_23c = 0x200000;
  }
  local_244 = in_stack_00000060;
  local_248 = 0xffffffff;
  local_258 = local_228;
  uStack_254 = uStack_224;
  uStack_250 = uStack_220;
  uStack_24c = uStack_21c;
  local_268 = in_stack_00000048;
  uStack_264 = in_stack_0000004c;
  uStack_260 = in_stack_00000050;
  uStack_25c = in_stack_00000054;
  local_278 = local_238;
  uStack_274 = uStack_234;
  uStack_270 = uStack_230;
  uStack_26c = uStack_22c;
  local_240 = (im_opt *)&local_168;
  memcpy(auStack_2d0,arStack_218,0x58);
  memcpy(auStack_328,&local_10,0x58);
  memcpy(&stack0xfffffc90,auStack_1b0,0x48);
  improcess(local_1c0,uStack_1bc,uStack_1b8,uStack_1b4);
  return;
}



/* ===== imfillArray @ 0002a30c size=380 ===== */

/* imfillArray(rga_buffer_t, im_rect*, int, unsigned int, int, int*) */

int imfillArray(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *in_stack_00000048;
  int in_stack_0000004c;
  undefined4 in_stack_00000050;
  int in_stack_00000054;
  int *in_stack_00000058;
  undefined1 auStack_a8 [72];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  int local_4c;
  int *local_48;
  int local_40;
  char *local_3c;
  
  piVar2 = in_stack_00000058;
  iVar6 = in_stack_00000054;
  iVar1 = in_stack_0000004c;
  if (0 < in_stack_0000004c) {
    if (in_stack_00000054 == 0 && in_stack_00000058 != (int *)0x0) {
      iVar6 = 0;
      local_3c = (char *)(DAT_0002a488 + 0x2a364);
      local_40 = -1;
      puVar5 = in_stack_00000048;
      do {
        local_48 = piVar2;
        local_4c = 0;
        local_50 = in_stack_00000050;
        local_60 = *puVar5;
        uStack_5c = puVar5[1];
        uStack_58 = puVar5[2];
        uStack_54 = puVar5[3];
        memcpy(auStack_a8,&stack0x00000000,0x48);
        iVar3 = imfill(param_1,param_2,param_3,param_4);
        if (iVar3 != 1) {
          return iVar3;
        }
        iVar4 = *piVar2;
        iVar3 = local_40;
        if ((-1 < iVar4) && (iVar3 = iVar4, -1 < local_40)) {
          iVar3 = rga_sync_merge(local_3c,local_40,iVar4);
        }
        local_40 = iVar3;
        iVar6 = iVar6 + 1;
        puVar5 = puVar5 + 4;
      } while (iVar1 != iVar6);
      goto LAB_0002a46c;
    }
    iVar3 = 0;
    puVar5 = in_stack_00000048;
    do {
      iVar3 = iVar3 + 1;
      local_48 = piVar2;
      local_4c = iVar6;
      local_50 = in_stack_00000050;
      local_60 = *puVar5;
      uStack_5c = puVar5[1];
      uStack_58 = puVar5[2];
      uStack_54 = puVar5[3];
      puVar5 = puVar5 + 4;
      memcpy(auStack_a8,&stack0x00000000,0x48);
      iVar4 = imfill(param_1,param_2,param_3,param_4);
      if (iVar4 != 1) {
        return iVar4;
      }
    } while (iVar1 != iVar3);
  }
  if (piVar2 == (int *)0x0) {
    return 1;
  }
  local_40 = -1;
LAB_0002a46c:
  *piVar2 = local_40;
  return 1;
}



/* ===== imrectangle @ 0002a48c size=288 ===== */

/* imrectangle(rga_buffer_t, im_rect, unsigned int, int, int, int*) */

void imrectangle(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_stack_00000048;
  int in_stack_0000004c;
  int in_stack_00000050;
  int in_stack_00000054;
  undefined4 in_stack_00000058;
  int in_stack_0000005c;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000064;
  undefined1 auStack_c8 [72];
  undefined8 *local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_60;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  if (-1 < in_stack_0000005c) {
    local_60 = CONCAT44(in_stack_0000004c,in_stack_00000048);
    local_34 = in_stack_00000054 + in_stack_0000005c * -2;
    local_74 = in_stack_00000060;
    local_78 = in_stack_00000058;
    local_70 = in_stack_00000064;
    local_30 = (in_stack_00000050 - in_stack_0000005c) + in_stack_00000048;
    local_4c = in_stack_0000005c + local_34 + in_stack_0000004c;
    local_54 = in_stack_0000005c;
    local_44 = in_stack_0000005c;
    local_38 = in_stack_0000005c;
    local_28 = in_stack_0000005c;
    local_3c = in_stack_0000005c + in_stack_0000004c;
    local_50 = in_stack_00000048;
    local_40 = in_stack_00000048;
    local_7c = 4;
    local_80 = &local_60;
    local_58 = in_stack_00000050;
    local_48 = in_stack_00000050;
    local_2c = local_3c;
    local_24 = local_34;
    memcpy(auStack_c8,&stack0x00000000,0x48);
    imfillArray(param_1,param_2,param_3,param_4);
    return;
  }
  local_68 = in_stack_00000064;
  local_70 = in_stack_00000058;
  local_6c = in_stack_00000060;
  local_80 = (undefined8 *)in_stack_00000048;
  local_7c = in_stack_0000004c;
  local_78 = in_stack_00000050;
  local_74 = in_stack_00000054;
  memcpy(auStack_c8,&stack0x00000000,0x48);
  imfill(param_1,param_2,param_3,param_4);
  return;
}



/* ===== imrectangleArray @ 0002a5ac size=396 ===== */

/* imrectangleArray(rga_buffer_t, im_rect*, int, unsigned int, int, int, int*) */

int imrectangleArray(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *in_stack_00000048;
  int in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  int in_stack_00000058;
  int *in_stack_0000005c;
  undefined1 auStack_a8 [72];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int *local_44;
  int local_40;
  char *local_3c;
  
  piVar2 = in_stack_0000005c;
  iVar6 = in_stack_00000058;
  iVar1 = in_stack_0000004c;
  if (0 < in_stack_0000004c) {
    if (in_stack_00000058 == 0 && in_stack_0000005c != (int *)0x0) {
      iVar6 = 0;
      local_3c = (char *)(DAT_0002a738 + 0x2a604);
      local_40 = -1;
      puVar5 = in_stack_00000048;
      do {
        local_44 = piVar2;
        local_48 = 0;
        local_4c = in_stack_00000054;
        local_50 = in_stack_00000050;
        local_60 = *puVar5;
        uStack_5c = puVar5[1];
        uStack_58 = puVar5[2];
        uStack_54 = puVar5[3];
        memcpy(auStack_a8,&stack0x00000000,0x48);
        iVar3 = imrectangle(param_1,param_2,param_3,param_4);
        if (iVar3 != 1) {
          return iVar3;
        }
        iVar4 = *piVar2;
        iVar3 = local_40;
        if ((-1 < iVar4) && (iVar3 = iVar4, -1 < local_40)) {
          iVar3 = rga_sync_merge(local_3c,local_40,iVar4);
        }
        local_40 = iVar3;
        iVar6 = iVar6 + 1;
        puVar5 = puVar5 + 4;
      } while (iVar1 != iVar6);
      goto LAB_0002a71c;
    }
    iVar3 = 0;
    puVar5 = in_stack_00000048;
    do {
      iVar3 = iVar3 + 1;
      local_44 = piVar2;
      local_48 = iVar6;
      local_4c = in_stack_00000054;
      local_50 = in_stack_00000050;
      local_60 = *puVar5;
      uStack_5c = puVar5[1];
      uStack_58 = puVar5[2];
      uStack_54 = puVar5[3];
      puVar5 = puVar5 + 4;
      memcpy(auStack_a8,&stack0x00000000,0x48);
      iVar4 = imrectangle(param_1,param_2,param_3,param_4);
      if (iVar4 != 1) {
        return iVar4;
      }
    } while (iVar1 != iVar3);
  }
  if (piVar2 == (int *)0x0) {
    return 1;
  }
  local_40 = -1;
LAB_0002a71c:
  *piVar2 = local_40;
  return 1;
}



/* ===== imbeginJob @ 0002a73c size=4 ===== */

/* imbeginJob(unsigned long long) */

void imbeginJob(ulonglong param_1)

{
  (*(code *)PTR_rga_job_create_00046024)((int)param_1,(int)(param_1 >> 0x20));
  return;
}



/* ===== imcancelJob @ 0002a740 size=4 ===== */

/* imcancelJob(unsigned int) */

void imcancelJob(uint param_1)

{
  (*(code *)PTR_rga_job_cancel_000460d4)(param_1);
  return;
}



/* ===== imendJob @ 0002a744 size=4 ===== */

/* imendJob(unsigned int, int, int, int*) */

void imendJob(uint param_1,int param_2,int param_3,int *param_4)

{
  (*(code *)PTR_rga_job_submit_0004621c)(param_1);
  return;
}



/* ===== improcessTask @ 0002a748 size=168 ===== */

/* improcessTask(unsigned int, rga_buffer_t, rga_buffer_t, rga_buffer_t, im_rect, im_rect, im_rect,
   im_opt*, int) */

void improcessTask(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_stack_000000fc;
  undefined4 in_stack_00000100;
  undefined4 in_stack_00000104;
  undefined4 in_stack_00000108;
  undefined4 in_stack_0000010c;
  undefined4 in_stack_00000110;
  undefined4 in_stack_00000114;
  undefined4 in_stack_00000118;
  undefined4 in_stack_0000011c;
  undefined4 in_stack_00000120;
  undefined4 in_stack_00000124;
  undefined4 in_stack_00000128;
  undefined4 in_stack_0000012c;
  undefined4 in_stack_00000130;
  undefined1 auStack_160 [76];
  undefined1 auStack_114 [88];
  undefined1 auStack_bc [88];
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 local_30;
  
  local_34 = in_stack_0000012c;
  local_30 = in_stack_00000130;
  local_44 = in_stack_0000011c;
  uStack_40 = in_stack_00000120;
  uStack_3c = in_stack_00000124;
  uStack_38 = in_stack_00000128;
  local_54 = in_stack_0000010c;
  uStack_50 = in_stack_00000110;
  uStack_4c = in_stack_00000114;
  uStack_48 = in_stack_00000118;
  local_64 = in_stack_000000fc;
  uStack_60 = in_stack_00000100;
  uStack_5c = in_stack_00000104;
  uStack_58 = in_stack_00000108;
  memcpy(auStack_bc,&stack0x000000a4,0x58);
  memcpy(auStack_114,&stack0x0000004c,0x58);
  memcpy(auStack_160,&stack0x00000000,0x4c);
  rga_task_submit(param_1,param_2,param_3,param_4);
  return;
}



/* ===== imcopyTask @ 0002a7f0 size=416 ===== */

/* imcopyTask(unsigned int, rga_buffer_t, rga_buffer_t) */

undefined4
imcopyTask(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
          int param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  FILE *__stream;
  int in_stack_00000058;
  int in_stack_0000005c;
  undefined1 auStack_2ec [88];
  undefined1 auStack_294 [88];
  undefined4 local_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 local_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 local_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  im_opt *local_20c;
  uint local_208;
  int local_200;
  int local_1fc;
  undefined4 local_1f8;
  int local_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  rga_buffer_t arStack_1c0 [88];
  undefined4 local_168 [77];
  
  iVar3 = param_6;
  iVar2 = param_5;
  local_200 = in_stack_00000058;
  local_1fc = in_stack_0000005c;
  local_168[0] = 0x1090105;
  local_1f8 = param_1;
  empty_structure((rga_buffer_t *)0x0,(rga_buffer_t *)0x0,arStack_1c0,(im_rect *)&local_1f0,
                  (im_rect *)&local_1e0,(im_rect *)&local_1d0,(im_opt *)local_168);
  local_208 = (uint)(iVar3 != local_1fc || iVar2 != local_200);
  local_1f4 = DAT_0002a990 + 0x2a880;
  if (iVar3 != local_1fc || iVar2 != local_200) {
    rga_error_msg_set((char *)(DAT_0002a994 + 0x2a918),iVar2,iVar3,local_200);
    iVar2 = rga_log_enable_get();
    if ((0 < iVar2) && (iVar2 = rga_log_level_get(), iVar2 < 6)) {
      __stream = (FILE *)**(undefined4 **)(local_1f4 + DAT_0002a998);
      iVar2 = rga_get_current_time_ms();
      iVar3 = rga_get_start_time_ms();
      fprintf(__stream,(char *)(DAT_0002a99c + 0x2a974),iVar2 - iVar3,DAT_0002a9a0 + 0x2a984);
    }
    uVar1 = 0xfffffffd;
  }
  else {
    local_21c = local_1d0;
    uStack_218 = uStack_1cc;
    uStack_214 = uStack_1c8;
    uStack_210 = uStack_1c4;
    local_22c = local_1e0;
    uStack_228 = uStack_1dc;
    uStack_224 = uStack_1d8;
    uStack_220 = uStack_1d4;
    local_23c = local_1f0;
    uStack_238 = uStack_1ec;
    uStack_234 = uStack_1e8;
    uStack_230 = uStack_1e4;
    local_20c = (im_opt *)local_168;
    memcpy(auStack_294,arStack_1c0,0x58);
    memcpy(auStack_2ec,&stack0x0000004c,0x58);
    memcpy(&stack0xfffffcc8,&param_5,0x4c);
    uVar1 = improcessTask(local_1f8,param_2,param_3,param_4);
  }
  return uVar1;
}



/* ===== imcropTask @ 0002a9a4 size=228 ===== */

/* imcropTask(unsigned int, rga_buffer_t, rga_buffer_t, im_rect) */

void imcropTask(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_stack_000000a4;
  undefined4 in_stack_000000a8;
  undefined4 in_stack_000000ac;
  undefined4 in_stack_000000b0;
  undefined1 auStack_2c4 [88];
  undefined1 auStack_26c [88];
  undefined4 local_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 local_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 local_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  im_opt *local_1e4;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  rga_buffer_t arStack_1b8 [88];
  undefined4 local_160 [77];
  
  local_160[0] = 0x1090105;
  empty_structure((rga_buffer_t *)0x0,(rga_buffer_t *)0x0,arStack_1b8,(im_rect *)0x0,
                  (im_rect *)&local_1d8,(im_rect *)&local_1c8,(im_opt *)local_160);
  local_1d0 = CONCAT44(in_stack_000000b0,in_stack_000000ac);
  local_1e0 = 0;
  local_1f4 = local_1c8;
  uStack_1f0 = uStack_1c4;
  uStack_1ec = uStack_1c0;
  uStack_1e8 = uStack_1bc;
  local_204 = local_1d8;
  uStack_200 = uStack_1d4;
  uStack_1fc = in_stack_000000ac;
  uStack_1f8 = in_stack_000000b0;
  local_214 = in_stack_000000a4;
  uStack_210 = in_stack_000000a8;
  uStack_20c = in_stack_000000ac;
  uStack_208 = in_stack_000000b0;
  local_1e4 = (im_opt *)local_160;
  memcpy(auStack_26c,arStack_1b8,0x58);
  memcpy(auStack_2c4,&stack0x0000004c,0x58);
  memcpy(&stack0xfffffcf0,&stack0x00000000,0x4c);
  improcessTask(param_1,param_2,param_3,param_4);
  return;
}



/* ===== imcvtcolorTask @ 0002aa88 size=240 ===== */

/* imcvtcolorTask(unsigned int, rga_buffer_t, rga_buffer_t, int, int, int) */

void imcvtcolorTask(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000068;
  undefined4 in_stack_0000006c;
  undefined4 in_stack_000000a4;
  undefined4 in_stack_000000a8;
  undefined4 in_stack_000000ac;
  undefined1 auStack_2dc [88];
  undefined1 auStack_284 [88];
  undefined4 local_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 local_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 local_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  im_opt *local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  rga_buffer_t arStack_1c0 [88];
  undefined4 local_168 [77];
  
  local_168[0] = 0x1090105;
  empty_structure((rga_buffer_t *)0x0,(rga_buffer_t *)0x0,arStack_1c0,(im_rect *)&local_1f0,
                  (im_rect *)&local_1e0,(im_rect *)&local_1d0,(im_opt *)local_168);
  local_1f8 = 0;
  in_stack_00000010 = in_stack_000000a4;
  local_20c = local_1d0;
  uStack_208 = uStack_1cc;
  uStack_204 = uStack_1c8;
  uStack_200 = uStack_1c4;
  in_stack_00000068 = in_stack_000000a8;
  in_stack_0000006c = in_stack_000000ac;
  local_21c = local_1e0;
  uStack_218 = uStack_1dc;
  uStack_214 = uStack_1d8;
  uStack_210 = uStack_1d4;
  local_22c = local_1f0;
  uStack_228 = uStack_1ec;
  uStack_224 = uStack_1e8;
  uStack_220 = uStack_1e4;
  local_1fc = (im_opt *)local_168;
  memcpy(auStack_284,arStack_1c0,0x58);
  memcpy(auStack_2dc,&stack0x0000004c,0x58);
  memcpy(&stack0xfffffcd8,&stack0x00000000,0x4c);
  improcessTask(param_1,param_2,param_3,param_4);
  return;
}



/* ===== imtranslateTask @ 0002ab78 size=464 ===== */

/* imtranslateTask(unsigned int, rga_buffer_t, rga_buffer_t, int, int) */

undefined4
imtranslateTask(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               int param_5,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  FILE *__stream;
  int in_stack_00000058;
  int in_stack_0000005c;
  int in_stack_000000a4;
  int in_stack_000000a8;
  undefined1 auStack_2ec [88];
  undefined1 auStack_294 [88];
  undefined4 local_23c;
  undefined4 uStack_238;
  int iStack_234;
  int iStack_230;
  int local_22c;
  int iStack_228;
  int iStack_224;
  int iStack_220;
  undefined4 local_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  im_opt *local_20c;
  uint local_208;
  int local_200;
  int local_1fc;
  undefined4 local_1f8;
  int local_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  rga_buffer_t arStack_1c0 [88];
  undefined4 local_168 [77];
  
  iVar3 = param_6;
  iVar2 = param_5;
  local_200 = in_stack_00000058;
  local_1fc = in_stack_0000005c;
  local_168[0] = 0x1090105;
  local_1f8 = param_1;
  empty_structure((rga_buffer_t *)0x0,(rga_buffer_t *)0x0,arStack_1c0,(im_rect *)&local_1f0,
                  (im_rect *)&local_1e0,(im_rect *)&local_1d0,(im_opt *)local_168);
  local_208 = (uint)(iVar2 != local_200 || iVar3 != local_1fc);
  local_1f4 = DAT_0002ad48 + 0x2ac08;
  if (iVar2 != local_200 || iVar3 != local_1fc) {
    rga_error_msg_set((char *)(DAT_0002ad4c + 0x2acd0),iVar2,iVar3,local_200);
    iVar2 = rga_log_enable_get();
    if ((0 < iVar2) && (iVar2 = rga_log_level_get(), iVar2 < 6)) {
      __stream = (FILE *)**(undefined4 **)(local_1f4 + DAT_0002ad50);
      iVar2 = rga_get_current_time_ms();
      iVar3 = rga_get_start_time_ms();
      fprintf(__stream,(char *)(DAT_0002ad54 + 0x2ad2c),iVar2 - iVar3,DAT_0002ad58 + 0x2ad3c);
    }
    uVar1 = 0xfffffffd;
  }
  else {
    iStack_234 = iVar2 - in_stack_000000a4;
    iStack_230 = iVar3 - in_stack_000000a8;
    local_1e0 = in_stack_000000a4;
    local_1dc = in_stack_000000a8;
    local_21c = local_1d0;
    uStack_218 = uStack_1cc;
    uStack_214 = uStack_1c8;
    uStack_210 = uStack_1c4;
    local_22c = in_stack_000000a4;
    iStack_228 = in_stack_000000a8;
    local_23c = local_1f0;
    uStack_238 = uStack_1ec;
    iStack_224 = iStack_234;
    iStack_220 = iStack_230;
    local_20c = (im_opt *)local_168;
    local_1e8 = iStack_234;
    local_1e4 = iStack_230;
    local_1d8 = iStack_234;
    local_1d4 = iStack_230;
    memcpy(auStack_294,arStack_1c0,0x58);
    memcpy(auStack_2ec,&stack0x0000004c,0x58);
    memcpy(&stack0xfffffcc8,&param_5,0x4c);
    uVar1 = improcessTask(local_1f8,param_2,param_3,param_4);
  }
  return uVar1;
}



/* ===== imrotateTask @ 0002ad5c size=216 ===== */

/* imrotateTask(unsigned int, rga_buffer_t, rga_buffer_t, int) */

void imrotateTask(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 in_stack_000000a4;
  undefined1 auStack_2dc [88];
  undefined1 auStack_284 [88];
  undefined4 local_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 local_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 local_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  im_opt *local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  rga_buffer_t arStack_1c0 [88];
  undefined4 local_168 [77];
  
  uVar1 = in_stack_000000a4;
  local_168[0] = 0x1090105;
  empty_structure((rga_buffer_t *)0x0,(rga_buffer_t *)0x0,arStack_1c0,(im_rect *)&local_1f0,
                  (im_rect *)&local_1e0,(im_rect *)&local_1d0,(im_opt *)local_168);
  local_1f8 = uVar1;
  local_20c = local_1d0;
  uStack_208 = uStack_1cc;
  uStack_204 = uStack_1c8;
  uStack_200 = uStack_1c4;
  local_21c = local_1e0;
  uStack_218 = uStack_1dc;
  uStack_214 = uStack_1d8;
  uStack_210 = uStack_1d4;
  local_22c = local_1f0;
  uStack_228 = uStack_1ec;
  uStack_224 = uStack_1e8;
  uStack_220 = uStack_1e4;
  local_1fc = (im_opt *)local_168;
  memcpy(auStack_284,arStack_1c0,0x58);
  memcpy(auStack_2dc,&stack0x0000004c,0x58);
  memcpy(&stack0xfffffcd8,&stack0x00000000,0x4c);
  improcessTask(param_1,param_2,param_3,param_4);
  return;
}



/* ===== imflipTask @ 0002ae34 size=92 ===== */

/* imflipTask(unsigned int, rga_buffer_t, rga_buffer_t, int) */

void imflipTask(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_stack_000000a4;
  undefined1 auStack_c8 [76];
  undefined1 auStack_7c [88];
  undefined4 local_24;
  
  local_24 = in_stack_000000a4;
  memcpy(auStack_7c,&stack0x0000004c,0x58);
  memcpy(auStack_c8,&stack0x00000000,0x4c);
  imrotateTask(param_1,param_2,param_3,param_4);
  return;
}



/* ===== imcompositeTask @ 0002ae90 size=212 ===== */

/* imcompositeTask(unsigned int, rga_buffer_t, rga_buffer_t, rga_buffer_t, int) */

void imcompositeTask(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 in_stack_000000fc;
  undefined1 auStack_284 [88];
  undefined1 auStack_22c [88];
  undefined4 local_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 local_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 local_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  im_opt *local_1a4;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168 [77];
  
  uVar1 = in_stack_000000fc;
  local_168[0] = 0x1090105;
  empty_structure((rga_buffer_t *)0x0,(rga_buffer_t *)0x0,(rga_buffer_t *)0x0,(im_rect *)&local_198,
                  (im_rect *)&local_188,(im_rect *)&local_178,(im_opt *)local_168);
  local_1a0 = uVar1;
  local_1b4 = local_178;
  uStack_1b0 = uStack_174;
  uStack_1ac = uStack_170;
  uStack_1a8 = uStack_16c;
  local_1c4 = local_188;
  uStack_1c0 = uStack_184;
  uStack_1bc = uStack_180;
  uStack_1b8 = uStack_17c;
  local_1d4 = local_198;
  uStack_1d0 = uStack_194;
  uStack_1cc = uStack_190;
  uStack_1c8 = uStack_18c;
  local_1a4 = (im_opt *)local_168;
  memcpy(auStack_22c,&stack0x0000004c,0x58);
  memcpy(auStack_284,&stack0x000000a4,0x58);
  memcpy(&stack0xfffffd30,&stack0x00000000,0x4c);
  improcessTask(param_1,param_2,param_3,param_4);
  return;
}



/* ===== imblendTask @ 0002af64 size=132 ===== */

/* imblendTask(unsigned int, rga_buffer_t, rga_buffer_t, int) */

void imblendTask(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 in_stack_000000a4;
  undefined1 auStack_180 [76];
  undefined1 auStack_134 [88];
  undefined1 auStack_dc [88];
  undefined4 local_84;
  undefined1 auStack_80 [88];
  
  uVar1 = in_stack_000000a4;
  memset(auStack_80,0,0x58);
  local_84 = uVar1;
  memcpy(auStack_dc,&stack0x0000004c,0x58);
  memcpy(auStack_134,auStack_80,0x58);
  memcpy(auStack_180,&stack0x00000000,0x4c);
  imcompositeTask(param_1,param_2,param_3,param_4);
  return;
}



/* ===== imcolorkeyTask @ 0002afe8 size=232 ===== */

/* imcolorkeyTask(unsigned int, rga_buffer_t, rga_buffer_t, im_colorkey_range, int) */

void imcolorkeyTask(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 in_stack_000000a4;
  undefined4 in_stack_000000a8;
  undefined4 in_stack_000000ac;
  undefined1 auStack_2dc [88];
  undefined1 auStack_284 [88];
  undefined4 local_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 local_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 local_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  im_opt *local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  rga_buffer_t arStack_1c0 [88];
  undefined4 local_168 [2];
  undefined4 local_160;
  undefined4 uStack_15c;
  
  uVar1 = in_stack_000000ac;
  local_168[0] = 0x1090105;
  empty_structure((rga_buffer_t *)0x0,(rga_buffer_t *)0x0,arStack_1c0,(im_rect *)&local_1f0,
                  (im_rect *)&local_1e0,(im_rect *)&local_1d0,(im_opt *)local_168);
  local_1f8 = uVar1;
  local_160 = in_stack_000000a4;
  uStack_15c = in_stack_000000a8;
  local_20c = local_1d0;
  uStack_208 = uStack_1cc;
  uStack_204 = uStack_1c8;
  uStack_200 = uStack_1c4;
  local_21c = local_1e0;
  uStack_218 = uStack_1dc;
  uStack_214 = uStack_1d8;
  uStack_210 = uStack_1d4;
  local_22c = local_1f0;
  uStack_228 = uStack_1ec;
  uStack_224 = uStack_1e8;
  uStack_220 = uStack_1e4;
  local_1fc = (im_opt *)local_168;
  memcpy(auStack_284,arStack_1c0,0x58);
  memcpy(auStack_2dc,&stack0x0000004c,0x58);
  memcpy(&stack0xfffffcd8,&stack0x00000000,0x4c);
  improcessTask(param_1,param_2,param_3,param_4);
  return;
}



/* ===== imosdTask @ 0002b0d0 size=224 ===== */

/* imosdTask(unsigned int, rga_buffer_t, rga_buffer_t, im_rect, im_osd*) */

void imosdTask(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined4 in_stack_000000a4;
  undefined4 in_stack_000000a8;
  undefined4 in_stack_000000ac;
  undefined4 in_stack_000000b0;
  void *in_stack_000000b4;
  undefined1 auStack_2a0 [76];
  undefined1 auStack_254 [88];
  undefined1 auStack_1fc [88];
  undefined4 local_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 local_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 local_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 *local_174;
  undefined4 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158 [14];
  undefined1 auStack_120 [248];
  undefined4 local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  memset(local_158,0,0x130);
  uStack_164 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_160 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_15c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_168 = 0;
  local_158[0] = 0x1090105;
  memcpy(auStack_120,in_stack_000000b4,0x68);
  local_170 = 0x10002000;
  local_184 = local_168;
  uStack_180 = uStack_164;
  uStack_17c = uStack_160;
  uStack_178 = uStack_15c;
  local_194 = in_stack_000000a4;
  uStack_190 = in_stack_000000a8;
  uStack_18c = in_stack_000000ac;
  uStack_188 = in_stack_000000b0;
  local_1a4 = in_stack_000000a4;
  uStack_1a0 = in_stack_000000a8;
  uStack_19c = in_stack_000000ac;
  uStack_198 = in_stack_000000b0;
  local_174 = local_158;
  memcpy(auStack_1fc,&local_c,0x58);
  memcpy(auStack_254,&stack0x0000004c,0x58);
  memcpy(auStack_2a0,&stack0x00000058,0x4c);
  improcessTask(param_1,in_stack_0000004c,in_stack_00000050,in_stack_00000054);
  return;
}



/* ===== imquantizeTask @ 0002b1b0 size=256 ===== */

/* imquantizeTask(unsigned int, rga_buffer_t, rga_buffer_t, im_nn) */

void imquantizeTask(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_stack_000000a4;
  undefined4 in_stack_000000a8;
  undefined4 in_stack_000000ac;
  undefined4 in_stack_000000b0;
  undefined4 in_stack_000000b4;
  undefined4 in_stack_000000b8;
  undefined1 auStack_2e4 [88];
  undefined1 auStack_28c [88];
  undefined4 local_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 local_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 local_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  im_opt *local_204;
  undefined4 local_200;
  undefined4 *local_1f8;
  undefined4 *local_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  rga_buffer_t arStack_1c0 [88];
  undefined4 local_168 [4];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  
  local_168[0] = 0x1090105;
  empty_structure((rga_buffer_t *)0x0,(rga_buffer_t *)0x0,arStack_1c0,(im_rect *)&local_1f0,
                  (im_rect *)&local_1e0,(im_rect *)&local_1d0,(im_opt *)local_168);
  local_200 = 0x800000;
  local_1f8 = &local_224;
  local_158 = in_stack_000000a4;
  uStack_154 = in_stack_000000a8;
  uStack_150 = in_stack_000000ac;
  uStack_14c = in_stack_000000b0;
  local_1f4 = &local_234;
  local_148 = in_stack_000000b4;
  uStack_144 = in_stack_000000b8;
  local_214 = local_1d0;
  uStack_210 = uStack_1cc;
  uStack_20c = uStack_1c8;
  uStack_208 = uStack_1c4;
  local_224 = local_1e0;
  uStack_220 = uStack_1dc;
  uStack_21c = uStack_1d8;
  uStack_218 = uStack_1d4;
  local_234 = local_1f0;
  uStack_230 = uStack_1ec;
  uStack_22c = uStack_1e8;
  uStack_228 = uStack_1e4;
  local_204 = (im_opt *)local_168;
  memcpy(auStack_28c,arStack_1c0,0x58);
  memcpy(auStack_2e4,&stack0x0000004c,0x58);
  memcpy(&stack0xfffffcd0,&stack0x00000000,0x4c);
  improcessTask(param_1,param_2,param_3,param_4);
  return;
}



/* ===== imropTask @ 0002b2b0 size=224 ===== */

/* imropTask(unsigned int, rga_buffer_t, rga_buffer_t, int) */

void imropTask(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 in_stack_000000a4;
  undefined1 auStack_2dc [88];
  undefined1 auStack_284 [88];
  undefined4 local_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 local_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 local_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  im_opt *local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  rga_buffer_t arStack_1c0 [88];
  undefined4 local_168 [10];
  undefined4 local_140;
  
  uVar1 = in_stack_000000a4;
  local_168[0] = 0x1090105;
  empty_structure((rga_buffer_t *)0x0,(rga_buffer_t *)0x0,arStack_1c0,(im_rect *)&local_1f0,
                  (im_rect *)&local_1e0,(im_rect *)&local_1d0,(im_opt *)local_168);
  local_140 = uVar1;
  local_1f8 = 0x1000000;
  local_20c = local_1d0;
  uStack_208 = uStack_1cc;
  uStack_204 = uStack_1c8;
  uStack_200 = uStack_1c4;
  local_21c = local_1e0;
  uStack_218 = uStack_1dc;
  uStack_214 = uStack_1d8;
  uStack_210 = uStack_1d4;
  local_22c = local_1f0;
  uStack_228 = uStack_1ec;
  uStack_224 = uStack_1e8;
  uStack_220 = uStack_1e4;
  local_1fc = (im_opt *)local_168;
  memcpy(auStack_284,arStack_1c0,0x58);
  memcpy(auStack_2dc,&stack0x0000004c,0x58);
  memcpy(&stack0xfffffcd8,&stack0x00000000,0x4c);
  improcessTask(param_1,param_2,param_3,param_4);
  return;
}



/* ===== immosaicTask @ 0002b390 size=228 ===== */

/* immosaicTask(unsigned int, rga_buffer_t, im_rect, int) */

void immosaicTask(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  undefined1 auStack_300 [76];
  undefined1 auStack_2b4 [88];
  undefined1 auStack_25c [88];
  undefined4 local_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 local_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 local_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 *local_1d4;
  undefined4 local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined1 auStack_1b8 [88];
  undefined4 local_160 [13];
  undefined4 local_12c;
  undefined4 local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar1 = in_stack_0000005c;
  local_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  memset(local_160,0,0x130);
  memset(auStack_1b8,0,0x58);
  uStack_1e0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_1dc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_1d8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_1c8 = 0;
  local_12c = uVar1;
  local_1d0 = 0x8000000;
  local_1e4 = 0;
  local_160[0] = 0x1090105;
  local_1f4 = in_stack_0000004c;
  uStack_1f0 = in_stack_00000050;
  uStack_1ec = in_stack_00000054;
  uStack_1e8 = in_stack_00000058;
  local_204 = in_stack_0000004c;
  uStack_200 = in_stack_00000050;
  uStack_1fc = in_stack_00000054;
  uStack_1f8 = in_stack_00000058;
  local_1d4 = local_160;
  uStack_1c4 = uStack_1e0;
  uStack_1c0 = uStack_1dc;
  uStack_1bc = uStack_1d8;
  memcpy(auStack_25c,auStack_1b8,0x58);
  memcpy(auStack_2b4,&local_c,0x58);
  memcpy(auStack_300,&stack0x00000000,0x4c);
  improcessTask(param_1,local_c,uStack_8,uStack_4);
  return;
}



/* ===== immosaicTaskArray @ 0002b474 size=160 ===== */

/* immosaicTaskArray(unsigned int, rga_buffer_t, im_rect*, int, int) */

int immosaicTaskArray(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *in_stack_0000004c;
  int in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined1 auStack_98 [76];
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  
  uVar2 = in_stack_00000054;
  iVar1 = in_stack_00000050;
  if (0 < in_stack_00000050) {
    iVar5 = 0;
    puVar4 = in_stack_0000004c;
    do {
      local_3c = uVar2;
      iVar5 = iVar5 + 1;
      local_4c = *puVar4;
      uStack_48 = puVar4[1];
      uStack_44 = puVar4[2];
      uStack_40 = puVar4[3];
      puVar4 = puVar4 + 4;
      memcpy(auStack_98,&stack0x00000000,0x4c);
      iVar3 = immosaicTask(param_1,param_2,param_3,param_4);
      if (iVar3 != 1) {
        return iVar3;
      }
    } while (iVar1 != iVar5);
  }
  return 1;
}



/* ===== imfillTask @ 0002b514 size=248 ===== */

/* imfillTask(unsigned int, rga_buffer_t, im_rect, unsigned int) */

void imfillTask(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  undefined1 auStack_32c [88];
  undefined1 auStack_2d4 [88];
  undefined4 local_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 local_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 local_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  im_opt *local_24c;
  undefined4 local_248;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  rga_buffer_t arStack_218 [88];
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined1 auStack_1b4 [76];
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_168 = 0x1090105;
  local_23c = param_1;
  local_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  empty_structure((rga_buffer_t *)&local_1c0,(rga_buffer_t *)0x0,arStack_218,(im_rect *)&local_238,
                  (im_rect *)0x0,(im_rect *)&local_228,(im_opt *)&local_168);
  memset(&local_1c0,0,0x58);
  local_248 = 0x200000;
  local_164 = in_stack_0000005c;
  local_25c = local_228;
  uStack_258 = uStack_224;
  uStack_254 = uStack_220;
  uStack_250 = uStack_21c;
  local_26c = in_stack_0000004c;
  uStack_268 = in_stack_00000050;
  uStack_264 = in_stack_00000054;
  uStack_260 = in_stack_00000058;
  local_27c = local_238;
  uStack_278 = uStack_234;
  uStack_274 = uStack_230;
  uStack_270 = uStack_22c;
  local_24c = (im_opt *)&local_168;
  memcpy(auStack_2d4,arStack_218,0x58);
  memcpy(auStack_32c,&local_c,0x58);
  memcpy(&stack0xfffffc88,auStack_1b4,0x4c);
  improcessTask(local_23c,local_1c0,uStack_1bc,uStack_1b8);
  return;
}



/* ===== imfillTaskArray @ 0002b60c size=160 ===== */

/* imfillTaskArray(unsigned int, rga_buffer_t, im_rect*, int, unsigned int) */

int imfillTaskArray(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *in_stack_0000004c;
  int in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined1 auStack_98 [76];
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  
  uVar2 = in_stack_00000054;
  iVar1 = in_stack_00000050;
  if (0 < in_stack_00000050) {
    iVar5 = 0;
    puVar4 = in_stack_0000004c;
    do {
      local_3c = uVar2;
      iVar5 = iVar5 + 1;
      local_4c = *puVar4;
      uStack_48 = puVar4[1];
      uStack_44 = puVar4[2];
      uStack_40 = puVar4[3];
      puVar4 = puVar4 + 4;
      memcpy(auStack_98,&stack0x00000000,0x4c);
      iVar3 = imfillTask(param_1,param_2,param_3,param_4);
      if (iVar3 != 1) {
        return iVar3;
      }
    } while (iVar1 != iVar5);
  }
  return 1;
}



/* ===== imrectangleTask @ 0002b6ac size=276 ===== */

/* imrectangleTask(unsigned int, rga_buffer_t, im_rect, unsigned int, int) */

void imrectangleTask(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_stack_0000004c;
  int in_stack_00000050;
  int in_stack_00000054;
  int in_stack_00000058;
  undefined4 in_stack_0000005c;
  int in_stack_00000060;
  undefined1 auStack_c0 [76];
  undefined8 *local_74;
  int local_70;
  int local_6c;
  int iStack_68;
  undefined4 local_64;
  undefined8 local_60;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  if (-1 < in_stack_00000060) {
    local_60 = CONCAT44(in_stack_00000050,in_stack_0000004c);
    local_34 = in_stack_00000058 + in_stack_00000060 * -2;
    local_6c = in_stack_0000005c;
    local_30 = (in_stack_00000054 - in_stack_00000060) + in_stack_0000004c;
    local_58 = in_stack_00000054;
    local_4c = in_stack_00000060 + local_34 + in_stack_00000050;
    local_48 = in_stack_00000054;
    local_54 = in_stack_00000060;
    local_44 = in_stack_00000060;
    local_38 = in_stack_00000060;
    local_28 = in_stack_00000060;
    local_3c = in_stack_00000060 + in_stack_00000050;
    local_50 = in_stack_0000004c;
    local_40 = in_stack_0000004c;
    local_70 = 4;
    local_74 = &local_60;
    local_2c = local_3c;
    local_24 = local_34;
    memcpy(auStack_c0,&stack0x00000000,0x4c);
    imfillTaskArray(param_1,param_2,param_3,param_4);
    return;
  }
  local_64 = in_stack_0000005c;
  local_74 = (undefined8 *)in_stack_0000004c;
  local_70 = in_stack_00000050;
  local_6c = in_stack_00000054;
  iStack_68 = in_stack_00000058;
  memcpy(auStack_c0,&stack0x00000000,0x4c);
  imfillTask(param_1,param_2,param_3,param_4);
  return;
}



/* ===== imrectangleTaskArray @ 0002b7c0 size=168 ===== */

/* imrectangleTaskArray(unsigned int, rga_buffer_t, im_rect*, int, unsigned int, int) */

int imrectangleTaskArray
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *in_stack_0000004c;
  int in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined4 in_stack_00000058;
  undefined1 auStack_a0 [76];
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 local_40;
  
  uVar2 = in_stack_00000058;
  iVar1 = in_stack_00000050;
  if (0 < in_stack_00000050) {
    iVar5 = 0;
    puVar4 = in_stack_0000004c;
    do {
      iVar5 = iVar5 + 1;
      local_40 = uVar2;
      local_44 = in_stack_00000054;
      local_54 = *puVar4;
      uStack_50 = puVar4[1];
      uStack_4c = puVar4[2];
      uStack_48 = puVar4[3];
      puVar4 = puVar4 + 4;
      memcpy(auStack_a0,&stack0x00000000,0x4c);
      iVar3 = imrectangleTask(param_1,param_2,param_3,param_4);
      if (iVar3 != 1) {
        return iVar3;
      }
    } while (iVar1 != iVar5);
  }
  return 1;
}



/* ===== immakeBorder @ 0002b868 size=1948 ===== */

/* immakeBorder(rga_buffer_t, rga_buffer_t, int, int, int, int, int, int, int, int, int*) */

int immakeBorder(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  FILE *pFVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int in_stack_00000054;
  int in_stack_00000058;
  int in_stack_000000a0;
  int in_stack_000000a4;
  int in_stack_000000a8;
  int in_stack_000000ac;
  int in_stack_000000b0;
  undefined4 in_stack_000000b4;
  int in_stack_000000b8;
  int in_stack_000000bc;
  int *in_stack_000000c0;
  int local_2b0;
  int local_2ac;
  int local_2a8;
  int local_2a4;
  int local_2a0;
  int local_29c;
  int local_298;
  int local_294;
  int local_290;
  undefined1 auStack_268 [4];
  int *local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined1 auStack_210 [4];
  undefined1 auStack_20c [84];
  int local_1b8;
  int local_1b4;
  int iStack_1b0;
  int iStack_1ac;
  int local_1a8;
  int local_1a4;
  int iStack_1a0;
  int iStack_19c;
  int local_198;
  int local_194;
  int iStack_190;
  int iStack_18c;
  int local_188;
  int *local_184;
  int local_180;
  undefined4 local_17c;
  int **local_174;
  int *local_170;
  undefined4 *local_16c;
  int *local_168;
  uint local_164;
  int *local_160;
  int local_15c;
  int local_158;
  int iStack_154;
  int local_150;
  int iStack_14c;
  int local_148;
  int local_144;
  undefined8 local_140;
  undefined8 local_138;
  int local_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int *local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int **local_f0;
  int local_ec;
  int local_e8;
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
  undefined1 auStack_a0 [108];
  int local_4;
  
  iVar12 = in_stack_00000058;
  iVar7 = in_stack_00000054;
  iVar6 = param_5;
  local_174 = (int **)(param_4 + in_stack_000000a8);
  local_148 = -1;
  local_144 = -1;
  local_168 = (int *)(DAT_0002c004 + 0x2b8b8);
  local_4 = param_4;
  if ((int)local_174 + in_stack_000000ac != in_stack_00000054) {
LAB_0002bb78:
    local_2ac = in_stack_000000a0;
    local_2a0 = in_stack_000000ac;
    local_2a4 = in_stack_000000a8;
    local_2a8 = in_stack_000000a4;
    local_2b0 = in_stack_00000058;
    rga_error_msg_set((char *)(DAT_0002c018 + 0x2bba4),param_4,param_5,in_stack_00000054);
    iVar11 = rga_log_enable_get();
    if ((0 < iVar11) && (iVar11 = rga_log_level_get(), iVar11 < 6)) {
      pFVar10 = (FILE *)**(undefined4 **)((int)local_168 + DAT_0002c00c);
      iVar11 = rga_get_current_time_ms();
      iVar9 = rga_get_start_time_ms();
      local_294 = in_stack_000000a8;
      local_290 = in_stack_000000ac;
      local_2b0 = 0x55e;
      local_2a8 = iVar6;
      local_298 = in_stack_000000a4;
      local_2a0 = iVar12;
      local_29c = in_stack_000000a0;
      local_2a4 = iVar7;
      local_2ac = param_4;
      fprintf(pFVar10,(char *)(DAT_0002c01c + 0x2bfa0),iVar11 - iVar9,DAT_0002c020 + 0x2bfc4);
    }
    return -4;
  }
  local_170 = (int *)(param_5 + in_stack_000000a0);
  iVar11 = (int)local_170 + in_stack_000000a4;
  if (iVar11 != in_stack_00000058) goto LAB_0002bb78;
  iVar7 = 0;
  iVar12 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iVar9 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iVar13 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  memset(auStack_a0,0,0x58);
  iStack_14c = iVar6;
  local_158 = in_stack_000000a8;
  iStack_154 = in_stack_000000a0;
  local_140 = CONCAT44(in_stack_000000a0,in_stack_000000a8);
  local_138 = CONCAT44(iVar6,param_4);
  local_188 = in_stack_000000bc;
  local_17c = 0x4000000;
  local_184 = &local_148;
  local_180 = 0;
  local_1a8 = in_stack_000000a8;
  local_1a4 = in_stack_000000a0;
  iStack_19c = iVar6;
  local_1b8 = iVar7;
  local_1b4 = iVar12;
  iStack_1b0 = iVar9;
  iStack_1ac = iVar13;
  iStack_1a0 = param_4;
  local_198 = iVar7;
  local_194 = iVar12;
  iStack_190 = iVar9;
  iStack_18c = iVar13;
  local_16c = (undefined4 *)&stack0x00000048;
  local_150 = param_4;
  local_130 = iVar7;
  iStack_12c = iVar12;
  iStack_128 = iVar9;
  iStack_124 = iVar13;
  memcpy(auStack_210,auStack_a0,0x58);
  memcpy(auStack_268,&stack0x00000048,0x58);
  memcpy(&local_2b0,&param_5,0x48);
  iVar5 = improcess(param_1,param_2,param_3,local_4);
  if (iVar5 != 1) {
    return iVar5;
  }
  if (local_148 < 1) {
    return 1;
  }
  local_164 = imbeginJob(0);
  if (local_164 == 0) {
    return 0;
  }
  local_11c = 0;
  local_120 = in_stack_000000a8;
  local_100 = 0;
  local_fc = 0;
  local_114 = in_stack_000000a0;
  local_ec = 0;
  local_110 = in_stack_000000a8;
  local_10c = local_170;
  local_104 = in_stack_000000a4;
  local_f8 = in_stack_000000a8;
  local_f0 = local_174;
  local_e8 = in_stack_000000ac;
  local_118 = param_4;
  local_108 = param_4;
  local_f4 = iVar11;
  local_e4 = iVar11;
  if (in_stack_000000b0 == 0) {
    local_25c = in_stack_000000b4;
    local_260 = 4;
    local_264 = &local_120;
    memcpy(&local_2b0,&stack0x00000054,0x4c);
    iVar6 = imfillTaskArray(local_164,*local_16c,local_16c[1],local_16c[2]);
    if (iVar6 != 1) goto LAB_0002bb14;
  }
  else {
    if (in_stack_000000b0 == 2) {
      local_cc = iVar6 - in_stack_000000a4;
      iVar5 = 0x10;
      local_b0 = (int)local_174 - in_stack_000000ac;
      local_dc = 0;
      local_c0 = in_stack_000000a8;
      local_15c = 1;
    }
    else {
      if (in_stack_000000b0 != 3) {
        rga_error_msg_set((char *)(DAT_0002c008 + 0x2ba70),in_stack_000000b0);
        iVar6 = rga_log_enable_get();
        if ((0 < iVar6) && (iVar6 = rga_log_level_get(), iVar6 < 6)) {
          pFVar10 = (FILE *)**(undefined4 **)((int)local_168 + DAT_0002c00c);
          iVar6 = rga_get_current_time_ms();
          iVar7 = rga_get_start_time_ms();
          local_2ac = in_stack_000000b0;
          local_2b0 = 0x591;
          fprintf(pFVar10,(char *)(DAT_0002c010 + 0x2bb64),iVar6 - iVar7,DAT_0002c014 + 0x2bb6c);
        }
        iVar6 = imcancelJob(local_164);
        return iVar6;
      }
      local_dc = iVar6 - in_stack_000000a0;
      iVar5 = 0;
      local_15c = 0;
      local_cc = 0;
      local_b0 = in_stack_000000a8;
      local_c0 = param_4;
    }
    local_b8 = in_stack_000000a8;
    local_c4 = in_stack_000000a4;
    local_d4 = in_stack_000000a0;
    local_bc = 0;
    local_d0 = 0;
    local_e0 = 0;
    local_ac = 0;
    local_a8 = in_stack_000000ac;
    local_d8 = param_4;
    local_c8 = param_4;
    local_b4 = iVar11;
    local_a4 = iVar11;
    memset(auStack_a0,0,0x58);
    local_160 = &local_194;
    local_168 = &local_1a4;
    local_184 = (int *)0x0;
    local_170 = &local_1b4;
    local_1a4 = local_120;
    iStack_1a0 = local_11c;
    iStack_19c = local_118;
    local_198 = local_114;
    local_1b4 = local_e0;
    iStack_1b0 = local_dc;
    iStack_1ac = local_d8;
    local_1a8 = local_d4;
    local_194 = iVar7;
    iStack_190 = iVar12;
    iStack_18c = iVar9;
    local_188 = iVar13;
    local_180 = iVar5;
    local_174 = &local_264;
    local_130 = iVar7;
    iStack_12c = iVar12;
    iStack_128 = iVar9;
    iStack_124 = iVar13;
    memcpy(auStack_20c,auStack_a0,0x58);
    memcpy(&local_264,local_16c,0x58);
    memcpy(&local_2b0,&local_4,0x4c);
    iVar6 = improcessTask(local_164,param_1,param_2,param_3);
    if (iVar6 != 1) goto LAB_0002bb14;
    iVar7 = 0;
    iVar12 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iVar11 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iVar9 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    memset(auStack_a0,0,0x58);
    piVar1 = local_160;
    local_184 = (int *)0x0;
    local_180 = iVar5;
    local_130 = iVar7;
    iStack_12c = iVar12;
    iStack_128 = iVar11;
    iStack_124 = iVar9;
    *local_160 = iVar7;
    piVar1[1] = iVar12;
    piVar1[2] = iVar11;
    piVar1[3] = iVar9;
    iVar13 = local_104;
    iVar6 = local_108;
    piVar3 = local_10c;
    piVar1 = local_168;
    *local_168 = local_110;
    piVar1[1] = (int)piVar3;
    piVar1[2] = iVar6;
    piVar1[3] = iVar13;
    iVar5 = local_c4;
    iVar13 = local_c8;
    iVar6 = local_cc;
    piVar1 = local_170;
    *local_170 = local_d0;
    piVar1[1] = iVar6;
    piVar1[2] = iVar13;
    piVar1[3] = iVar5;
    memcpy(auStack_20c,auStack_a0,0x58);
    memcpy(local_174,local_16c,0x58);
    memcpy(&local_2b0,&local_4,0x4c);
    iVar6 = improcessTask(local_164,param_1,param_2,param_3);
    if (((iVar6 != 1) || (iVar6 = imendJob(local_164,0x4000000,local_148,&local_144), iVar6 != 1))
       || (local_144 < 1)) goto LAB_0002bb14;
    uVar8 = imbeginJob(0);
    if (uVar8 == 0) {
      return 0;
    }
    iVar13 = local_15c << 3;
    local_164 = uVar8;
    memset(auStack_a0,0,0x58);
    piVar1 = local_160;
    local_184 = (int *)0x0;
    local_180 = iVar13;
    local_130 = iVar7;
    iStack_12c = iVar12;
    iStack_128 = iVar11;
    iStack_124 = iVar9;
    *local_160 = iVar7;
    piVar1[1] = iVar12;
    piVar1[2] = iVar11;
    piVar1[3] = iVar9;
    iVar4 = local_f4;
    iVar5 = local_f8;
    iVar6 = local_fc;
    piVar1 = local_168;
    *local_168 = local_100;
    piVar1[1] = iVar6;
    piVar1[2] = iVar5;
    piVar1[3] = iVar4;
    iVar4 = local_b4;
    iVar5 = local_b8;
    iVar6 = local_bc;
    piVar1 = local_170;
    *local_170 = local_c0;
    piVar1[1] = iVar6;
    piVar1[2] = iVar5;
    piVar1[3] = iVar4;
    memcpy(auStack_20c,auStack_a0,0x58);
    puVar2 = local_16c;
    memcpy(local_174,local_16c,0x58);
    memcpy(&local_2b0,&stack0x00000054,0x4c);
    iVar6 = improcessTask(uVar8,*puVar2,puVar2[1],puVar2[2]);
    if (iVar6 != 1) goto LAB_0002bb14;
    memset(auStack_a0,0,0x58);
    piVar1 = local_160;
    local_184 = (int *)0x0;
    local_180 = iVar13;
    local_130 = iVar7;
    iStack_12c = iVar12;
    iStack_128 = iVar11;
    iStack_124 = iVar9;
    *local_160 = iVar7;
    piVar1[1] = iVar12;
    piVar1[2] = iVar11;
    piVar1[3] = iVar9;
    iVar12 = local_e4;
    iVar7 = local_e8;
    iVar6 = local_ec;
    piVar1 = local_168;
    *local_168 = (int)local_f0;
    piVar1[1] = iVar6;
    piVar1[2] = iVar7;
    piVar1[3] = iVar12;
    iVar12 = local_a4;
    iVar7 = local_a8;
    iVar6 = local_ac;
    piVar1 = local_170;
    *local_170 = local_b0;
    piVar1[1] = iVar6;
    piVar1[2] = iVar7;
    piVar1[3] = iVar12;
    memcpy(auStack_20c,auStack_a0,0x58);
    puVar2 = local_16c;
    memcpy(local_174,local_16c,0x58);
    memcpy(&local_2b0,&stack0x00000054,0x4c);
    iVar6 = improcessTask(local_164,*puVar2,puVar2[1],puVar2[2]);
    if (iVar6 != 1) goto LAB_0002bb14;
    local_148 = local_144;
  }
  if (in_stack_000000b8 != 1) {
    iVar6 = imendJob(local_164,0x4000000,local_148,in_stack_000000c0);
    return iVar6;
  }
  iVar6 = imsync(local_148);
  if (iVar6 == 1) {
    iVar6 = imendJob(local_164,0x80000,0,(int *)0x0);
    return iVar6;
  }
LAB_0002bb14:
  imcancelJob(local_164);
  return iVar6;
}



/* ===== impaletteTask @ 0002c024 size=400 ===== */

/* impaletteTask(unsigned int, rga_buffer_t, rga_buffer_t, rga_buffer_t) */

undefined4
impaletteTask(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             int param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  FILE *__stream;
  int in_stack_00000058;
  int in_stack_0000005c;
  undefined1 auStack_294 [88];
  undefined1 auStack_23c [88];
  undefined4 local_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 local_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 local_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  im_opt *local_1b4;
  undefined4 local_1b0;
  int local_1a4;
  undefined4 local_1a0;
  int local_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168 [77];
  
  iVar1 = in_stack_0000005c;
  iVar4 = param_6;
  iVar3 = param_5;
  local_1a4 = in_stack_00000058;
  local_168[0] = 0x1090105;
  local_1a0 = param_1;
  empty_structure((rga_buffer_t *)0x0,(rga_buffer_t *)0x0,(rga_buffer_t *)0x0,(im_rect *)&local_198,
                  (im_rect *)&local_188,(im_rect *)&local_178,(im_opt *)local_168);
  local_19c = DAT_0002c1b4 + 0x2c0a4;
  if (iVar4 == iVar1 && iVar3 == local_1a4) {
    local_1b0 = 0x400000;
    local_1c4 = local_178;
    uStack_1c0 = uStack_174;
    uStack_1bc = uStack_170;
    uStack_1b8 = uStack_16c;
    local_1d4 = local_188;
    uStack_1d0 = uStack_184;
    uStack_1cc = uStack_180;
    uStack_1c8 = uStack_17c;
    local_1e4 = local_198;
    uStack_1e0 = uStack_194;
    uStack_1dc = uStack_190;
    uStack_1d8 = uStack_18c;
    local_1b4 = (im_opt *)local_168;
    memcpy(auStack_23c,&stack0x000000a4,0x58);
    memcpy(auStack_294,&stack0x0000004c,0x58);
    memcpy(&stack0xfffffd20,&param_5,0x4c);
    uVar2 = improcessTask(local_1a0,param_2,param_3,param_4);
  }
  else {
    rga_error_msg_set((char *)(DAT_0002c1b8 + 0x2c140),iVar3,iVar4,local_1a4);
    iVar3 = rga_log_enable_get();
    if ((0 < iVar3) && (iVar3 = rga_log_level_get(), iVar3 < 6)) {
      __stream = (FILE *)**(undefined4 **)(local_19c + DAT_0002c1bc);
      iVar3 = rga_get_current_time_ms();
      iVar4 = rga_get_start_time_ms();
      fprintf(__stream,(char *)(DAT_0002c1c0 + 0x2c198),iVar3 - iVar4,DAT_0002c1c4 + 0x2c1a4);
    }
    uVar2 = 0xfffffffd;
  }
  return uVar2;
}



/* ===== imbegin @ 0002c1c8 size=4 ===== */

void imbegin(uint param_1)

{
  (*(code *)PTR_rga_job_create_00046024)(param_1);
  return;
}



/* ===== imcancel @ 0002c1cc size=4 ===== */

void imcancel(uint param_1)

{
  (*(code *)PTR_rga_job_cancel_000460d4)(param_1);
  return;
}



/* ===== improcess @ 0002c1d0 size=256 ===== */

/* improcess(rga_buffer_t, rga_buffer_t, rga_buffer_t, im_rect, im_rect, im_rect, int, int*,
   im_opt*, int, unsigned int) */

void improcess(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 in_stack_000000f8;
  undefined4 in_stack_000000fc;
  undefined4 in_stack_00000100;
  undefined4 in_stack_00000104;
  undefined4 in_stack_00000108;
  undefined4 in_stack_0000010c;
  undefined4 in_stack_00000110;
  undefined4 in_stack_00000114;
  undefined4 in_stack_00000118;
  undefined4 in_stack_0000011c;
  undefined4 in_stack_00000120;
  undefined4 in_stack_00000124;
  undefined4 in_stack_00000128;
  undefined4 in_stack_0000012c;
  undefined4 in_stack_00000130;
  uint in_stack_00000134;
  undefined4 in_stack_00000138;
  undefined1 auStack_168 [76];
  undefined1 auStack_11c [88];
  undefined1 auStack_c4 [88];
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 uStack_4;
  
  uVar4 = in_stack_00000138;
  uVar3 = in_stack_00000134;
  uVar2 = in_stack_0000012c;
  uVar1 = in_stack_00000128;
  local_3c = in_stack_00000130;
  local_38 = in_stack_00000134;
  local_4c = in_stack_00000118;
  uStack_48 = in_stack_0000011c;
  uStack_44 = in_stack_00000120;
  uStack_40 = in_stack_00000124;
  local_5c = in_stack_00000108;
  uStack_58 = in_stack_0000010c;
  uStack_54 = in_stack_00000110;
  uStack_50 = in_stack_00000114;
  local_6c = in_stack_000000f8;
  uStack_68 = in_stack_000000fc;
  uStack_64 = in_stack_00000100;
  uStack_60 = in_stack_00000104;
  uStack_4 = param_4;
  memcpy(auStack_c4,&stack0x000000a0,0x58);
  memcpy(auStack_11c,&stack0x00000048,0x58);
  memcpy(auStack_168,&uStack_4,0x4c);
  iVar5 = rga_task_submit(uVar4,param_1,param_2,param_3);
  if (iVar5 != 1) {
    return;
  }
  if ((uVar3 & 0x4000000) == 0) {
    uVar6 = 0x80000;
  }
  else {
    uVar6 = 0x4000000;
  }
                    /* WARNING: Could not recover jumptable at 0x000166c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rga_job_config_000462fc)(uVar4,uVar6,uVar1,uVar2);
  return;
}



/* ===== improcess_ctx @ 0002c2a4 size=184 ===== */

void improcess_ctx(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_stack_000000f8;
  undefined4 in_stack_000000fc;
  undefined4 in_stack_00000100;
  undefined4 in_stack_00000104;
  undefined4 in_stack_00000108;
  undefined4 in_stack_0000010c;
  undefined4 in_stack_00000110;
  undefined4 in_stack_00000114;
  undefined4 in_stack_00000118;
  undefined4 in_stack_0000011c;
  undefined4 in_stack_00000120;
  undefined4 in_stack_00000124;
  undefined4 in_stack_00000128;
  undefined4 in_stack_0000012c;
  undefined4 in_stack_00000130;
  undefined4 in_stack_00000134;
  undefined4 in_stack_00000138;
  undefined1 auStack_168 [72];
  undefined1 auStack_120 [88];
  undefined1 auStack_c8 [88];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  local_40 = in_stack_00000128;
  local_38 = in_stack_00000130;
  local_34 = in_stack_00000134;
  local_30 = in_stack_00000138;
  local_3c = in_stack_0000012c;
  local_50 = in_stack_00000118;
  uStack_4c = in_stack_0000011c;
  uStack_48 = in_stack_00000120;
  uStack_44 = in_stack_00000124;
  local_60 = in_stack_00000108;
  uStack_5c = in_stack_0000010c;
  uStack_58 = in_stack_00000110;
  uStack_54 = in_stack_00000114;
  local_70 = in_stack_000000f8;
  uStack_6c = in_stack_000000fc;
  uStack_68 = in_stack_00000100;
  uStack_64 = in_stack_00000104;
  memcpy(auStack_c8,&stack0x000000a0,0x58);
  memcpy(auStack_120,&stack0x00000048,0x58);
  memcpy(auStack_168,&stack0x00000000,0x48);
  improcess(param_1,param_2,param_3,param_4);
  return;
}



/* ===== wrapbuffer_handle_t @ 0002c35c size=48 ===== */

uint wrapbuffer_handle_t(uint param_1,int param_2,int param_3,int param_4,int param_5,
                        undefined4 param_6,int param_7)

{
  wrapbuffer_handle(param_1,param_2,param_3,param_4,param_7,param_5);
  return param_1;
}



/* ===== wrapbuffer_virtualaddr_t @ 0002c38c size=96 ===== */

undefined4 *
wrapbuffer_virtualaddr_t
          (undefined4 *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
          undefined4 param_7)

{
  if (param_5 == 0) {
    param_5 = param_3;
  }
  if (param_6 == 0) {
    param_6 = param_4;
  }
  memset(param_1 + 1,0,0x54);
  *param_1 = param_2;
  param_1[5] = param_5;
  param_1[6] = param_6;
  param_1[3] = param_3;
  param_1[4] = param_4;
  param_1[7] = param_7;
  return param_1;
}



/* ===== wrapbuffer_physicaladdr_t @ 0002c3ec size=92 ===== */

void * wrapbuffer_physicaladdr_t
                 (void *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
                 undefined4 param_7)

{
  if (param_5 == 0) {
    param_5 = param_3;
  }
  if (param_6 == 0) {
    param_6 = param_4;
  }
  memset(param_1,0,0x58);
  *(undefined4 *)((int)param_1 + 4) = param_2;
  *(int *)((int)param_1 + 0x14) = param_5;
  *(int *)((int)param_1 + 0x18) = param_6;
  *(int *)((int)param_1 + 0xc) = param_3;
  *(int *)((int)param_1 + 0x10) = param_4;
  *(undefined4 *)((int)param_1 + 0x1c) = param_7;
  return param_1;
}



/* ===== wrapbuffer_fd_t @ 0002c448 size=92 ===== */

void * wrapbuffer_fd_t(void *param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                      int param_6,undefined4 param_7)

{
  if (param_5 == 0) {
    param_5 = param_3;
  }
  if (param_6 == 0) {
    param_6 = param_4;
  }
  memset(param_1,0,0x58);
  *(undefined4 *)((int)param_1 + 8) = param_2;
  *(int *)((int)param_1 + 0x14) = param_5;
  *(int *)((int)param_1 + 0x18) = param_6;
  *(int *)((int)param_1 + 0xc) = param_3;
  *(int *)((int)param_1 + 0x10) = param_4;
  *(undefined4 *)((int)param_1 + 0x1c) = param_7;
  return param_1;
}



/* ===== imcheck_t @ 0002c4a4 size=152 ===== */

void imcheck_t(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_stack_000000f8;
  undefined4 in_stack_000000fc;
  undefined4 in_stack_00000100;
  undefined4 in_stack_00000104;
  undefined4 in_stack_00000108;
  undefined4 in_stack_0000010c;
  undefined4 in_stack_00000110;
  undefined4 in_stack_00000114;
  undefined4 in_stack_00000118;
  undefined4 in_stack_0000011c;
  undefined4 in_stack_00000120;
  undefined4 in_stack_00000124;
  undefined4 in_stack_00000128;
  undefined1 auStack_150 [72];
  undefined1 auStack_108 [88];
  undefined1 auStack_b0 [88];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  local_28 = in_stack_00000128;
  local_38 = in_stack_00000118;
  uStack_34 = in_stack_0000011c;
  uStack_30 = in_stack_00000120;
  uStack_2c = in_stack_00000124;
  local_48 = in_stack_00000108;
  uStack_44 = in_stack_0000010c;
  uStack_40 = in_stack_00000110;
  uStack_3c = in_stack_00000114;
  local_58 = in_stack_000000f8;
  uStack_54 = in_stack_000000fc;
  uStack_50 = in_stack_00000100;
  uStack_4c = in_stack_00000104;
  memcpy(auStack_b0,&stack0x000000a0,0x58);
  memcpy(auStack_108,&stack0x00000048,0x58);
  memcpy(auStack_150,&stack0x00000000,0x48);
  rga_check_external(param_1,param_2,param_3,param_4);
  return;
}



/* ===== imresize @ 0002c53c size=1020 ===== */

/* imresize(rga_buffer_t, rga_buffer_t, double, double, int, int, int*) */

int imresize(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  FILE *pFVar7;
  uint in_fpscr;
  double in_d0;
  double in_d1;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  uint in_stack_00000054;
  uint in_stack_00000058;
  int in_stack_00000064;
  int in_stack_000000a4;
  undefined4 in_stack_000000a8;
  undefined1 auStack_388 [88];
  undefined1 auStack_330 [88];
  undefined4 local_2d8 [4];
  undefined4 local_2c8 [4];
  undefined4 local_2b8 [4];
  undefined4 local_2a8;
  undefined4 local_2a4;
  im_opt *local_2a0;
  undefined4 local_29c;
  uint local_294;
  uint local_290;
  undefined4 *local_28c;
  undefined1 *local_288;
  undefined4 *local_284;
  undefined4 *local_280;
  undefined1 *local_27c;
  undefined1 *local_278;
  int local_274;
  uint local_270;
  uint local_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  rga_buffer_t arStack_228 [88];
  undefined1 auStack_1d0 [88];
  undefined4 local_178 [77];
  
  iVar6 = in_stack_00000064;
  local_178[0] = 0x1090105;
  local_294 = in_stack_00000054;
  local_290 = in_stack_00000058;
  empty_structure((rga_buffer_t *)0x0,(rga_buffer_t *)0x0,arStack_228,(im_rect *)&local_268,
                  (im_rect *)&local_258,(im_rect *)&local_248,(im_opt *)local_178);
  local_274 = DAT_0002c938 + 0x2c5bc;
  if (in_d0 <= 0.0) {
    if (0.0 < in_d1) {
      if (in_d0 == 0.0) {
        in_d0 = 1.0;
      }
      goto LAB_0002c5d0;
    }
  }
  else {
    if (in_d1 == 0.0) {
      in_d1 = 1.0;
    }
LAB_0002c5d0:
    dVar9 = (double)VectorSignedToFloat(param_4,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
    dVar8 = (double)VectorSignedToFloat(param_5,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
    local_294 = (uint)(longlong)(dVar9 * in_d0);
    local_290 = (uint)(longlong)(dVar8 * in_d1);
    iVar5 = convert_to_rga_format(iVar6);
    if (iVar5 == 0x10000) {
      rga_error_msg_set((char *)(DAT_0002c94c + 0x2c8dc),iVar6);
      iVar6 = rga_log_enable_get();
      if (0 < iVar6) {
        rga_log_level_get();
      }
      pFVar7 = (FILE *)**(undefined4 **)(local_274 + DAT_0002c940);
      iVar6 = rga_get_current_time_ms();
      iVar5 = rga_get_start_time_ms();
      fprintf(pFVar7,(char *)(DAT_0002c950 + 0x2c924),iVar6 - iVar5,DAT_0002c954 + 0x2c92c);
      return -1;
    }
    iVar6 = NormalRgaIsYuvFormat(iVar5);
    if (iVar6 != 0) {
      local_280 = local_2b8;
      local_284 = local_2c8;
      memset(auStack_1d0,0,0x58);
      puVar1 = local_280;
      local_2a8 = 0;
      in_stack_00000054 = local_294 & 0xfffffffe;
      local_28c = local_2d8;
      local_238 = 0;
      local_278 = auStack_330;
      in_stack_00000058 = local_290 & 0xfffffffe;
      local_288 = &stack0x00000048;
      local_27c = auStack_388;
      local_270 = in_stack_00000054;
      local_26c = in_stack_00000058;
      uStack_234 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_230 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_22c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      *local_280 = 0;
      puVar1[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      puVar1[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      puVar1[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uVar4 = uStack_24c;
      uVar3 = uStack_250;
      uVar2 = uStack_254;
      puVar1 = local_284;
      *local_284 = local_258;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      uVar4 = uStack_25c;
      uVar3 = uStack_260;
      uVar2 = uStack_264;
      puVar1 = local_28c;
      *local_28c = local_268;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      memcpy(local_278,auStack_1d0,0x58);
      memcpy(local_27c,local_288,0x58);
      memcpy(&stack0xfffffc30,&param_5,0x48);
      uVar10 = imcheck_t(param_1,param_2,param_3,param_4);
      if ((int)uVar10 != 2) {
        rga_error_msg_set((char *)(DAT_0002c93c + 0x2c83c),(int)((ulonglong)uVar10 >> 0x20),
                          SUB84(in_d0,0),(int)((ulonglong)in_d0 >> 0x20));
        iVar6 = rga_log_enable_get();
        if (0 < iVar6) {
          rga_log_level_get();
        }
        pFVar7 = (FILE *)**(undefined4 **)(local_274 + DAT_0002c940);
        iVar6 = rga_get_current_time_ms();
        iVar5 = rga_get_start_time_ms();
        fprintf(pFVar7,(char *)(DAT_0002c944 + 0x2c898),iVar6 - iVar5,DAT_0002c948 + 0x2c8bc);
        return (int)uVar10;
      }
      local_294 = local_270;
      local_290 = local_26c;
      goto LAB_0002c64c;
    }
  }
  local_280 = local_2b8;
  local_284 = local_2c8;
  local_28c = local_2d8;
  local_278 = auStack_330;
  local_27c = auStack_388;
  local_288 = &stack0x00000048;
LAB_0002c64c:
  puVar1 = local_280;
  if (in_stack_000000a4 == 0) {
    local_29c = 0x4000000;
  }
  else if (in_stack_000000a4 == 1) {
    local_29c = 0x80000;
  }
  else {
    local_29c = 0;
  }
  local_2a8 = 0xffffffff;
  local_2a4 = in_stack_000000a8;
  local_2a0 = (im_opt *)local_178;
  *local_280 = local_248;
  puVar1[1] = uStack_244;
  puVar1[2] = uStack_240;
  puVar1[3] = uStack_23c;
  puVar1 = local_284;
  in_stack_00000054 = local_294;
  in_stack_00000058 = local_290;
  *local_284 = local_258;
  puVar1[1] = uStack_254;
  puVar1[2] = uStack_250;
  puVar1[3] = uStack_24c;
  puVar1 = local_28c;
  *local_28c = local_268;
  puVar1[1] = uStack_264;
  puVar1[2] = uStack_260;
  puVar1[3] = uStack_25c;
  memcpy(local_278,arStack_228,0x58);
  memcpy(local_27c,local_288,0x58);
  memcpy(&stack0xfffffc30,&param_5,0x48);
  iVar6 = improcess(param_1,param_2,param_3,param_4);
  return iVar6;
}



/* ===== imresizeTask @ 0002c958 size=900 ===== */

/* imresizeTask(unsigned int, rga_buffer_t, rga_buffer_t, double, double, int) */

int imresizeTask(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  FILE *pFVar4;
  uint in_fpscr;
  double in_d0;
  double in_d1;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  uint in_stack_00000058;
  uint in_stack_0000005c;
  int in_stack_00000068;
  undefined1 auStack_378 [4];
  undefined1 auStack_374 [84];
  undefined1 auStack_320 [4];
  undefined1 auStack_31c [84];
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  im_opt *local_294;
  undefined4 local_290;
  uint local_284;
  uint local_280;
  undefined4 local_27c;
  int local_278;
  uint local_274;
  uint local_270;
  undefined1 *local_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  rga_buffer_t arStack_228 [88];
  undefined1 auStack_1d0 [88];
  undefined4 local_178 [77];
  
  iVar2 = in_stack_00000068;
  local_178[0] = 0x1090105;
  local_284 = in_stack_00000058;
  local_280 = in_stack_0000005c;
  local_27c = param_1;
  empty_structure((rga_buffer_t *)0x0,(rga_buffer_t *)0x0,arStack_228,(im_rect *)&local_268,
                  (im_rect *)&local_258,(im_rect *)&local_248,(im_opt *)local_178);
  local_278 = DAT_0002ccdc + 0x2c9e0;
  if (in_d0 <= 0.0) {
    if (in_d1 <= 0.0) goto LAB_0002ca40;
    if (in_d0 == 0.0) {
      in_d0 = 1.0;
    }
  }
  else if (in_d1 == 0.0) {
    in_d1 = 1.0;
  }
  dVar6 = (double)VectorSignedToFloat(param_5,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  dVar5 = (double)VectorSignedToFloat(param_6,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  local_284 = (uint)(longlong)(dVar6 * in_d0);
  local_280 = (uint)(longlong)(dVar5 * in_d1);
  iVar1 = convert_to_rga_format(iVar2);
  if (iVar1 == 0x10000) {
    rga_error_msg_set((char *)(DAT_0002ccf0 + 0x2cc80),iVar2);
    iVar2 = rga_log_enable_get();
    if (0 < iVar2) {
      rga_log_level_get();
    }
    pFVar4 = (FILE *)**(undefined4 **)(local_278 + DAT_0002cce4);
    iVar2 = rga_get_current_time_ms();
    iVar1 = rga_get_start_time_ms();
    fprintf(pFVar4,(char *)(DAT_0002ccf4 + 0x2ccc8),iVar2 - iVar1,DAT_0002ccf8 + 0x2ccd0);
    return -1;
  }
  iVar2 = NormalRgaIsYuvFormat(iVar1);
  if (iVar2 != 0) {
    local_26c = auStack_1d0;
    uVar3 = local_284 & 0xfffffffe;
    local_274 = uVar3;
    memset(local_26c,0,0x58);
    local_2a4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_2a0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_29c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_298 = 0;
    local_238 = 0;
    local_2a8 = 0;
    in_stack_0000005c = local_280 & 0xfffffffe;
    local_2b8 = local_258;
    local_2b4 = uStack_254;
    uStack_2b0 = uStack_250;
    uStack_2ac = uStack_24c;
    local_2c8 = local_268;
    local_2c4 = uStack_264;
    uStack_2c0 = uStack_260;
    uStack_2bc = uStack_25c;
    in_stack_00000058 = uVar3;
    local_270 = in_stack_0000005c;
    uStack_234 = local_2a4;
    uStack_230 = uStack_2a0;
    uStack_22c = uStack_29c;
    memcpy(auStack_320,local_26c,0x58);
    memcpy(auStack_378,&stack0x0000004c,0x58);
    memcpy(&stack0xfffffc40,&param_6,0x48);
    uVar7 = imcheck_t(param_2,param_3,param_4,param_5);
    if ((int)uVar7 != 2) {
      rga_error_msg_set((char *)(DAT_0002cce0 + 0x2cbe0),(int)((ulonglong)uVar7 >> 0x20),
                        SUB84(in_d0,0),(int)((ulonglong)in_d0 >> 0x20));
      iVar2 = rga_log_enable_get();
      if (0 < iVar2) {
        rga_log_level_get();
      }
      pFVar4 = (FILE *)**(undefined4 **)(local_278 + DAT_0002cce4);
      iVar2 = rga_get_current_time_ms();
      iVar1 = rga_get_start_time_ms();
      fprintf(pFVar4,(char *)(DAT_0002cce8 + 0x2cc3c),iVar2 - iVar1,DAT_0002ccec + 0x2cc60);
      return (int)uVar7;
    }
    local_284 = local_274;
    local_280 = local_270;
  }
LAB_0002ca40:
  local_290 = 0;
  in_stack_00000058 = local_284;
  local_2a4 = local_248;
  uStack_2a0 = uStack_244;
  uStack_29c = uStack_240;
  local_298 = uStack_23c;
  in_stack_0000005c = local_280;
  local_2b4 = local_258;
  uStack_2b0 = uStack_254;
  uStack_2ac = uStack_250;
  local_2a8 = uStack_24c;
  local_2c4 = local_268;
  uStack_2c0 = uStack_264;
  uStack_2bc = uStack_260;
  local_2b8 = uStack_25c;
  local_294 = (im_opt *)local_178;
  memcpy(auStack_31c,arStack_228,0x58);
  memcpy(auStack_374,&stack0x0000004c,0x58);
  memcpy(&stack0xfffffc40,&param_5,0x4c);
  iVar2 = improcessTask(local_27c,param_2,param_3,param_4);
  return iVar2;
}



/* ===== imresize_t @ 0002ccfc size=124 ===== */

void imresize_t(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a4;
  undefined1 auStack_d8 [72];
  undefined1 auStack_90 [88];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  local_38 = in_stack_000000a0;
  local_34 = in_stack_000000a4;
  local_30 = 0;
  memcpy(auStack_90,&stack0x00000048,0x58);
  memcpy(auStack_d8,&stack0x00000000,0x48);
  imresize(param_1,param_2,param_3,param_4);
  return;
}



/* ===== imcrop_t @ 0002cd78 size=108 ===== */

void imcrop_t(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a4;
  undefined4 in_stack_000000a8;
  undefined4 in_stack_000000ac;
  undefined4 in_stack_000000b0;
  undefined1 auStack_d8 [72];
  undefined1 auStack_90 [88];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_28 = in_stack_000000b0;
  local_24 = 0;
  local_38 = in_stack_000000a0;
  uStack_34 = in_stack_000000a4;
  uStack_30 = in_stack_000000a8;
  uStack_2c = in_stack_000000ac;
  memcpy(auStack_90,&stack0x00000048,0x58);
  memcpy(auStack_d8,&stack0x00000000,0x48);
  imcrop(param_1,param_2,param_3,param_4);
  return;
}



/* ===== imrotate_t @ 0002cde4 size=100 ===== */

void imrotate_t(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a4;
  undefined1 auStack_c8 [72];
  undefined1 auStack_80 [88];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_28 = in_stack_000000a0;
  local_24 = in_stack_000000a4;
  local_20 = 0;
  memcpy(auStack_80,&stack0x00000048,0x58);
  memcpy(auStack_c8,&stack0x00000000,0x48);
  imrotate(param_1,param_2,param_3,param_4);
  return;
}



/* ===== imflip_t @ 0002ce48 size=100 ===== */

void imflip_t(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a4;
  undefined1 auStack_c8 [72];
  undefined1 auStack_80 [88];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_28 = in_stack_000000a0;
  local_24 = in_stack_000000a4;
  local_20 = 0;
  memcpy(auStack_80,&stack0x00000048,0x58);
  memcpy(auStack_c8,&stack0x00000000,0x48);
  imflip(param_1,param_2,param_3,param_4);
  return;
}



/* ===== imfill_t @ 0002ceac size=100 ===== */

void imfill_t(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  undefined1 auStack_88 [72];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_30 = in_stack_00000058;
  local_28 = 0;
  local_2c = in_stack_0000005c;
  local_40 = in_stack_00000048;
  uStack_3c = in_stack_0000004c;
  uStack_38 = in_stack_00000050;
  uStack_34 = in_stack_00000054;
  memcpy(auStack_88,&stack0x00000000,0x48);
  imfill(param_1,param_2,param_3,param_4);
  return;
}



/* ===== impalette_t @ 0002cf10 size=112 ===== */

void impalette_t(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_stack_000000f8;
  undefined1 auStack_120 [72];
  undefined1 auStack_d8 [88];
  undefined1 auStack_80 [88];
  undefined4 local_28;
  undefined4 local_24;
  
  local_28 = in_stack_000000f8;
  local_24 = 0;
  memcpy(auStack_80,&stack0x000000a0,0x58);
  memcpy(auStack_d8,&stack0x00000048,0x58);
  memcpy(auStack_120,&stack0x00000000,0x48);
  impalette(param_1,param_2,param_3,param_4);
  return;
}



/* ===== imtranslate_t @ 0002cf80 size=108 ===== */

void imtranslate_t(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a4;
  undefined4 in_stack_000000a8;
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [88];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_2c = in_stack_000000a4;
  local_28 = in_stack_000000a8;
  local_24 = 0;
  local_30 = in_stack_000000a0;
  memcpy(auStack_88,&stack0x00000048,0x58);
  memcpy(auStack_d0,&stack0x00000000,0x48);
  imtranslate(param_1,param_2,param_3,param_4);
  return;
}



/* ===== imcopy_t @ 0002cfec size=92 ===== */

void imcopy_t(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_stack_000000a0;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [88];
  undefined4 local_20;
  undefined4 local_1c;
  
  local_20 = in_stack_000000a0;
  local_1c = 0;
  memcpy(auStack_78,&stack0x00000048,0x58);
  memcpy(auStack_c0,&stack0x00000000,0x48);
  imcopy(param_1,param_2,param_3,param_4);
  return;
}



/* ===== imcolorkey_t @ 0002d048 size=116 ===== */

void imcolorkey_t(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a4;
  undefined4 in_stack_000000a8;
  undefined4 in_stack_000000ac;
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [88];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_20 = 0;
  local_28 = in_stack_000000a8;
  local_24 = in_stack_000000ac;
  local_30 = in_stack_000000a0;
  uStack_2c = in_stack_000000a4;
  memcpy(auStack_88,&stack0x00000048,0x58);
  memcpy(auStack_d0,&stack0x00000000,0x48);
  imcolorkey(param_1,param_2,param_3,param_4);
  return;
}



/* ===== imblend_t @ 0002d0bc size=120 ===== */

void imblend_t(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_stack_000000f8;
  undefined4 in_stack_000000fc;
  undefined1 auStack_128 [72];
  undefined1 auStack_e0 [88];
  undefined1 auStack_88 [88];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_30 = in_stack_000000f8;
  local_2c = in_stack_000000fc;
  local_28 = 0;
  memcpy(auStack_88,&stack0x000000a0,0x58);
  memcpy(auStack_e0,&stack0x00000048,0x58);
  memcpy(auStack_128,&stack0x00000000,0x48);
  imcomposite(param_1,param_2,param_3,param_4);
  return;
}



/* ===== imcvtcolor_t @ 0002d134 size=116 ===== */

void imcvtcolor_t(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a4;
  undefined4 in_stack_000000a8;
  undefined4 in_stack_000000ac;
  undefined1 auStack_d8 [72];
  undefined1 auStack_90 [88];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_34 = in_stack_000000a4;
  local_2c = in_stack_000000ac;
  local_30 = in_stack_000000a8;
  local_38 = in_stack_000000a0;
  local_28 = 0;
  memcpy(auStack_90,&stack0x00000048,0x58);
  memcpy(auStack_d8,&stack0x00000000,0x48);
  imcvtcolor(param_1,param_2,param_3,param_4);
  return;
}



/* ===== imquantize_t @ 0002d1a8 size=116 ===== */

void imquantize_t(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a4;
  undefined4 in_stack_000000a8;
  undefined4 in_stack_000000ac;
  undefined4 in_stack_000000b0;
  undefined4 in_stack_000000b4;
  undefined4 in_stack_000000b8;
  undefined1 auStack_e0 [72];
  undefined1 auStack_98 [88];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_28 = in_stack_000000b8;
  local_24 = 0;
  local_40 = in_stack_000000a0;
  uStack_3c = in_stack_000000a4;
  uStack_38 = in_stack_000000a8;
  uStack_34 = in_stack_000000ac;
  local_30 = in_stack_000000b0;
  uStack_2c = in_stack_000000b4;
  memcpy(auStack_98,&stack0x00000048,0x58);
  memcpy(auStack_e0,&stack0x00000000,0x48);
  imquantize(param_1,param_2,param_3,param_4);
  return;
}



/* ===== imrop_t @ 0002d21c size=100 ===== */

void imrop_t(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a4;
  undefined1 auStack_c8 [72];
  undefined1 auStack_80 [88];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_28 = in_stack_000000a0;
  local_24 = in_stack_000000a4;
  local_20 = 0;
  memcpy(auStack_80,&stack0x00000048,0x58);
  memcpy(auStack_c8,&stack0x00000000,0x48);
  imrop(param_1,param_2,param_3,param_4);
  return;
}



/* ===== immosaic @ 0002d280 size=100 ===== */

void immosaic(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  undefined1 auStack_88 [72];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_30 = in_stack_00000058;
  local_28 = 0;
  local_2c = in_stack_0000005c;
  local_40 = in_stack_00000048;
  uStack_3c = in_stack_0000004c;
  uStack_38 = in_stack_00000050;
  uStack_34 = in_stack_00000054;
  memcpy(auStack_88,&stack0x00000000,0x48);
  immosaic(param_1,param_2,param_3,param_4);
  return;
}



/* ===== imosd @ 0002d2e4 size=116 ===== */

void imosd(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a4;
  undefined4 in_stack_000000a8;
  undefined4 in_stack_000000ac;
  undefined4 in_stack_000000b0;
  undefined4 in_stack_000000b4;
  undefined1 auStack_e0 [72];
  undefined1 auStack_98 [88];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_30 = in_stack_000000b0;
  local_28 = 0;
  local_2c = in_stack_000000b4;
  local_40 = in_stack_000000a0;
  uStack_3c = in_stack_000000a4;
  uStack_38 = in_stack_000000a8;
  uStack_34 = in_stack_000000ac;
  memcpy(auStack_98,&stack0x00000048,0x58);
  memcpy(auStack_e0,&stack0x00000000,0x48);
  imosd(param_1,param_2,param_3,param_4);
  return;
}



/* ===== _fini @ 0002d358 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::poll @ 00048000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00048004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 00048008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00048010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__cxx11::string::_M_replace @ 00048014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_replace(uint param_1,uint param_2,char *param_3,uint param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__throw_bad_cast @ 00048018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_cast(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 00048020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 00048024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::ios_base::ios_base @ 00048028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::ios_base::ios_base(ios_base *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0004802c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_guard_acquire @ 00048030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_acquire(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__throw_system_error @ 00048038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_system_error(int param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::operator.delete @ 0004803c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 00048040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::ctype<char>::_M_widen_init @ 00048044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ctype<char>::_M_widen_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 00048048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 0004804c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00048050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::_Rb_tree_decrement @ 00048054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_decrement(_Rb_tree_node_base *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00048058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0004805c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutexattr_setpshared @ 00048060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutexattr_setpshared(pthread_mutexattr_t *__attr,int __pshared)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__tls_get_addr @ 00048064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __tls_get_addr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 00048068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 0004806c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 00048070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 00048074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 00048078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0004807c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 00048084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__cxx11::string::~string @ 00048088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__cxx11::string::~string(string *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 00048090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__cxx11::string::_M_assign @ 00048094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_assign(string *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 00048098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 0004809c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutexattr_destroy @ 000480a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutexattr_destroy(pthread_mutexattr_t *__attr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_guard_release @ 000480a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_release(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::log @ 000480a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double log(double __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::_Rb_tree_increment @ 000480ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_increment(_Rb_tree_node_base *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 000480b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::locale::locale @ 000480b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::locale::locale(locale *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutexattr_init @ 000480bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutexattr_init(pthread_mutexattr_t *__attr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 000480c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mmap64 @ 000480c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap64(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off64_t __offset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::operator.new @ 000480c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atof @ 000480cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double atof(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::ios::init @ 000480d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ios::init(streambuf *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uidivmod @ 000480d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uidivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 000480d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::_Rb_tree_insert_and_rebalance @ 000480dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_insert_and_rebalance
               (bool param_1,_Rb_tree_node_base *param_2,_Rb_tree_node_base *param_3,
               _Rb_tree_node_base *param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::ostream::flush @ 000480e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ostream::flush(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__detail::_Prime_rehash_policy::_M_need_rehash @ 000480e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__detail::_Prime_rehash_policy::_M_need_rehash(uint param_1,uint param_2,uint param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::munmap @ 000480e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::ios_base::~ios_base @ 000480ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::ios_base::~ios_base(ios_base *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::_Rb_tree_rebalance_for_erase @ 000480f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_rebalance_for_erase(_Rb_tree_node_base *param_1,_Rb_tree_node_base *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 000480f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vsnprintf @ 000480f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pthread_key_create @ 000480fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pthread_key_create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__detail::_Prime_rehash_policy::_M_next_bkt @ 00048100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__detail::_Prime_rehash_policy::_M_next_bkt(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_atexit @ 00048104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::ostream::_M_insert<unsigned_long> @ 0004810c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::ostream::_M_insert<unsigned_long>(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 00048110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::_Rb_tree_increment @ 00048114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_increment(_Rb_tree_node_base *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__throw_bad_alloc @ 00048118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_idiv @ 0004811c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_idiv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open64 @ 00048120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00048124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_idivmod @ 00048128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_idivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0004812c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 00048130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00048134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00048138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 0004813c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::locale::~locale @ 00048140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::locale::~locale(locale *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::ostream::put @ 00048144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ostream::put(char param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__ostream_insert<char,std::char_traits<char>> @ 00048148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::__ostream_insert<char,std::char_traits<char>>
                    (ostream *param_1,char *param_2,int param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0004814c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ---- rebuilt functions (fixed language + exact size) ----
// librga.so — rebuilt function bodies (fixed language)

