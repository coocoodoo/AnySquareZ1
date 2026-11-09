// librockchip_mpp.so.0 — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 0001c354 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::timerfd_settime @ 0001c378 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int timerfd_settime(int __ufd,int __flags,itimerspec *__utmr,itimerspec *__otmr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_timerfd_settime_0004a00c)(__ufd);
  return iVar1;
}



/* ===== _mpp_err @ 0001c384 size=12 ===== */

void _mpp_err(void)

{
  (*(code *)PTR__mpp_err_0004a010)();
  return;
}



/* ===== mpp_frame_get_hor_stride_pixel @ 0001c390 size=12 ===== */

void mpp_frame_get_hor_stride_pixel(void)

{
  (*(code *)PTR_mpp_frame_get_hor_stride_pixel_0004a014)();
  return;
}



/* ===== MppChanService::MppChanService @ 0001c39c size=12 ===== */

void __thiscall MppChanService::MppChanService(MppChanService *this)

{
  (*(code *)PTR_MppChanService_0004a018)(this);
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 0001c3a8 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0004a01c)();
  return;
}



/* ===== os_set_env_u32 @ 0001c3b4 size=12 ===== */

void os_set_env_u32(void)

{
  (*(code *)PTR_os_set_env_u32_0004a020)();
  return;
}



/* ===== mpp_env_get_u32 @ 0001c3c0 size=12 ===== */

void mpp_env_get_u32(void)

{
  (*(code *)PTR_mpp_env_get_u32_0004a024)();
  return;
}



/* ===== MppThread::MppThread @ 0001c3cc size=12 ===== */

void __thiscall
MppThread::MppThread(MppThread *this,_func_void_ptr_void_ptr *param_1,void *param_2,char *param_3)

{
  (*(code *)PTR_MppThread_0004a028)(this);
  return;
}



/* ===== check_cfg_api_info @ 0001c3d8 size=12 ===== */

void check_cfg_api_info(void)

{
  (*(code *)PTR_check_cfg_api_info_0004a02c)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 0001c3e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0004a030)();
  return piVar1;
}



/* ===== MppMetaService::MppMetaService @ 0001c3f0 size=12 ===== */

void __thiscall MppMetaService::MppMetaService(MppMetaService *this)

{
  (*(code *)PTR_MppMetaService_0004a034)(this);
  return;
}



/* ===== <EXTERNAL>::clock_gettime @ 0001c3fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_0004a038)(__clock_id);
  return iVar1;
}



/* ===== MppThread::get_status @ 0001c408 size=12 ===== */

void __thiscall MppThread::get_status(void)

{
  (*(code *)PTR_get_status_0004a03c)();
  return;
}



/* ===== <EXTERNAL>::pthread_attr_setdetachstate @ 0001c414 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_attr_setdetachstate(pthread_attr_t *__attr,int __detachstate)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_attr_setdetachstate_0004a040)(__attr);
  return iVar1;
}



/* ===== <EXTERNAL>::getenv @ 0001c420 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_0004a044)(__name);
  return pcVar1;
}



/* ===== Mpp::put_packet @ 0001c42c size=12 ===== */

void Mpp::put_packet(void *param_1)

{
  (*(code *)PTR_put_packet_0004a048)(param_1);
  return;
}



/* ===== Mpp::poll @ 0001c438 size=12 ===== */

void Mpp::poll(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_poll_0004a04c)();
  return;
}



/* ===== <EXTERNAL>::__aeabi_ldivmod @ 0001c444 size=12 ===== */

void __aeabi_ldivmod(void)

{
  (*(code *)PTR___aeabi_ldivmod_0004a050)();
  return;
}



/* ===== strof_coding_type @ 0001c450 size=12 ===== */

void strof_coding_type(void)

{
  (*(code *)PTR_strof_coding_type_0004a054)();
  return;
}



/* ===== <EXTERNAL>::epoll_wait @ 0001c45c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_wait(int __epfd,epoll_event *__events,int __maxevents,int __timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_epoll_wait_0004a058)(__epfd);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 0001c468 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0004a05c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::__cxa_guard_acquire @ 0001c474 size=12 ===== */

void __cxa_guard_acquire(void)

{
  (*(code *)PTR___cxa_guard_acquire_0004a060)();
  return;
}



/* ===== mpp_frame_get_ver_stride @ 0001c480 size=12 ===== */

void mpp_frame_get_ver_stride(void)

{
  (*(code *)PTR_mpp_frame_get_ver_stride_0004a064)();
  return;
}



/* ===== mpp_buffer_get_size_with_caller @ 0001c48c size=12 ===== */

void mpp_buffer_get_size_with_caller(void)

{
  (*(code *)PTR_mpp_buffer_get_size_with_caller_0004a068)();
  return;
}



/* ===== <EXTERNAL>::realloc @ 0001c4a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_0004a070)(__ptr);
  return pvVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 0001c4b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_0004a074)(__mutex);
  return iVar1;
}



/* ===== const_strlen @ 0001c4bc size=12 ===== */

void const_strlen(char *param_1)

{
  (*(code *)PTR_const_strlen_0004a078)(param_1);
  return;
}



/* ===== mpp_mpi_buf_free @ 0001c4c8 size=12 ===== */

void mpp_mpi_buf_free(valloc_mb *param_1)

{
  (*(code *)PTR_mpp_mpi_buf_free_0004a07c)(param_1);
  return;
}



/* ===== MppMemPoolService::get_pool @ 0001c4d4 size=12 ===== */

void __thiscall MppMemPoolService::get_pool(MppMemPoolService *this,uint param_1)

{
  (*(code *)PTR_get_pool_0004a080)(this);
  return;
}



/* ===== mpp_stopwatch_set_show_on_exit @ 0001c4e0 size=12 ===== */

void mpp_stopwatch_set_show_on_exit(void)

{
  (*(code *)PTR_mpp_stopwatch_set_show_on_exit_0004a084)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutexattr_settype @ 0001c4ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutexattr_settype(pthread_mutexattr_t *__attr,int __kind)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutexattr_settype_0004a088)(__attr);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_attr_init @ 0001c4f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_attr_init(pthread_attr_t *__attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_attr_init_0004a08c)(__attr);
  return iVar1;
}



/* ===== mpp_mem_pool_init_f @ 0001c504 size=12 ===== */

void mpp_mem_pool_init_f(void)

{
  (*(code *)PTR_mpp_mem_pool_init_f_0004a090)();
  return;
}



/* ===== mpp_trie_init @ 0001c510 size=12 ===== */

void mpp_trie_init(void)

{
  (*(code *)PTR_mpp_trie_init_0004a094)();
  return;
}



/* ===== mpp_packet_get_data @ 0001c51c size=12 ===== */

void mpp_packet_get_data(void)

{
  (*(code *)PTR_mpp_packet_get_data_0004a098)();
  return;
}



/* ===== mpp_meta_get_with_tag @ 0001c528 size=12 ===== */

void mpp_meta_get_with_tag(void)

{
  (*(code *)PTR_mpp_meta_get_with_tag_0004a09c)();
  return;
}



/* ===== MppMetaService::inc_ref @ 0001c534 size=12 ===== */

void __thiscall MppMetaService::inc_ref(MppMetaService *this,MppMetaImpl_t *param_1)

{
  (*(code *)PTR_inc_ref_0004a0a0)(this);
  return;
}



/* ===== <EXTERNAL>::openlog @ 0001c540 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void openlog(char *__ident,int __option,int __facility)

{
  (*(code *)PTR_openlog_0004a0a4)(__ident);
  return;
}



/* ===== mpp_trie_deinit @ 0001c54c size=12 ===== */

void mpp_trie_deinit(void)

{
  (*(code *)PTR_mpp_trie_deinit_0004a0a8)();
  return;
}



/* ===== <EXTERNAL>::setenv @ 0001c558 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setenv_0004a0ac)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 0001c564 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_0004a0b0)();
  return;
}



/* ===== <EXTERNAL>::strtoul @ 0001c570 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_0004a0b4)(__nptr);
  return uVar1;
}



/* ===== mpp_timer_set_enable @ 0001c57c size=12 ===== */

void mpp_timer_set_enable(void)

{
  (*(code *)PTR_mpp_timer_set_enable_0004a0b8)();
  return;
}



/* ===== MppEncCfgService::MppEncCfgService @ 0001c588 size=12 ===== */

void __thiscall MppEncCfgService::MppEncCfgService(MppEncCfgService *this)

{
  (*(code *)PTR_MppEncCfgService_0004a0bc)(this);
  return;
}



/* ===== Mpp::reset @ 0001c594 size=12 ===== */

void __thiscall Mpp::reset(Mpp *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001c59c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_reset_0004a0c0)(this);
  return;
}



/* ===== Mpp::stop @ 0001c5a0 size=12 ===== */

void __thiscall Mpp::stop(Mpp *this)

{
  (*(code *)PTR_stop_0004a0c4)(this);
  return;
}



/* ===== <EXTERNAL>::timerfd_create @ 0001c5ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int timerfd_create(clockid_t __clock_id,int __flags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_timerfd_create_0004a0c8)(__clock_id);
  return iVar1;
}



/* ===== mpp_frame_get_height @ 0001c5b8 size=12 ===== */

void mpp_frame_get_height(void)

{
  (*(code *)PTR_mpp_frame_get_height_0004a0cc)();
  return;
}



/* ===== <EXTERNAL>::ioctl @ 0001c5c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_0004a0d0)(__fd);
  return iVar1;
}



/* ===== mpp_frame_get_pts @ 0001c5d0 size=12 ===== */

void mpp_frame_get_pts(void)

{
  (*(code *)PTR_mpp_frame_get_pts_0004a0d4)();
  return;
}



/* ===== <EXTERNAL>::strlen @ 0001c5dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0004a0d8)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 0001c5e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_0004a0dc)(__mutex);
  return iVar1;
}



/* ===== mpp_osal_malloc @ 0001c5f4 size=12 ===== */

void mpp_osal_malloc(void)

{
  (*(code *)PTR_mpp_osal_malloc_0004a0e0)();
  return;
}



/* ===== Mpp::get_packet @ 0001c600 size=12 ===== */

void __thiscall Mpp::get_packet(Mpp *this,void **param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001c608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_packet_0004a0e4)(this);
  return;
}



/* ===== <EXTERNAL>::snprintf @ 0001c60c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0004a0e8)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::dup @ 0001c618 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dup(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_dup_0004a0ec)(__fd);
  return iVar1;
}



/* ===== os_malloc @ 0001c624 size=12 ===== */

void os_malloc(void)

{
  (*(code *)PTR_os_malloc_0004a0f0)();
  return;
}



/* ===== <EXTERNAL>::epoll_create @ 0001c630 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_create(int __size)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_epoll_create_0004a0f4)(__size);
  return iVar1;
}



/* ===== mpp_vcodec_open @ 0001c63c size=12 ===== */

void mpp_vcodec_open(void)

{
  (*(code *)PTR_mpp_vcodec_open_0004a0f8)();
  return;
}



/* ===== <EXTERNAL>::read @ 0001c648 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_0004a0fc)(__fd);
  return sVar1;
}



/* ===== mpp_meta_get_s64 @ 0001c654 size=12 ===== */

void mpp_meta_get_s64(void)

{
  (*(code *)PTR_mpp_meta_get_s64_0004a100)();
  return;
}



/* ===== <EXTERNAL>::__aeabi_l2f @ 0001c660 size=12 ===== */

void __aeabi_l2f(void)

{
  (*(code *)PTR___aeabi_l2f_0004a104)();
  return;
}



/* ===== <EXTERNAL>::select @ 0001c66c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_select_0004a108)(__nfds);
  return iVar1;
}



/* ===== Mpp::put_frame @ 0001c678 size=12 ===== */

void __thiscall Mpp::put_frame(Mpp *this,void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001c680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_put_frame_0004a10c)(this);
  return;
}



/* ===== MppMetaService::put_node @ 0001c690 size=12 ===== */

void __thiscall MppMetaService::put_node(MppMetaService *this,MppMetaNode_t *param_1)

{
  (*(code *)PTR_put_node_0004a114)(this);
  return;
}



/* ===== mpp_buffer_inc_ref_with_caller @ 0001c69c size=12 ===== */

void mpp_buffer_inc_ref_with_caller(void)

{
  (*(code *)PTR_mpp_buffer_inc_ref_with_caller_0004a118)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 0001c6a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_0004a11c)(__mutex);
  return iVar1;
}



/* ===== Mpp::resume @ 0001c6b4 size=12 ===== */

void __thiscall Mpp::resume(Mpp *this)

{
  (*(code *)PTR_resume_0004a120)(this);
  return;
}



/* ===== mpp_packet_new @ 0001c6c0 size=12 ===== */

void mpp_packet_new(void)

{
  (*(code *)PTR_mpp_packet_new_0004a124)();
  return;
}



/* ===== check_is_mpp_frame @ 0001c6d8 size=12 ===== */

void check_is_mpp_frame(void)

{
  (*(code *)PTR_check_is_mpp_frame_0004a12c)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutexattr_destroy @ 0001c6e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutexattr_destroy(pthread_mutexattr_t *__attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutexattr_destroy_0004a130)(__attr);
  return iVar1;
}



/* ===== mpp_packet_deinit @ 0001c6f0 size=12 ===== */

void mpp_packet_deinit(void)

{
  (*(code *)PTR_mpp_packet_deinit_0004a134)();
  return;
}



/* ===== <EXTERNAL>::__cxa_guard_release @ 0001c6fc size=12 ===== */

void __cxa_guard_release(void)

{
  (*(code *)PTR___cxa_guard_release_0004a138)();
  return;
}



/* ===== mpp_mem_pool_put_f @ 0001c708 size=12 ===== */

void mpp_mem_pool_put_f(void)

{
  (*(code *)PTR_mpp_mem_pool_put_f_0004a13c)();
  return;
}



/* ===== mpp_time @ 0001c714 size=12 ===== */

void mpp_time(void)

{
  (*(code *)PTR_mpp_time_0004a140)();
  return;
}



/* ===== <EXTERNAL>::vsyslog @ 0001c720 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void vsyslog(int __pri,char *__fmt,__gnuc_va_list __ap)

{
  (*(code *)PTR_vsyslog_0004a144)(__pri);
  return;
}



/* ===== mpp_check_support_format @ 0001c72c size=12 ===== */

void mpp_check_support_format(void)

{
  (*(code *)PTR_mpp_check_support_format_0004a148)();
  return;
}



/* ===== <EXTERNAL>::pthread_attr_destroy @ 0001c744 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_attr_destroy(pthread_attr_t *__attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_attr_destroy_0004a150)(__attr);
  return iVar1;
}



/* ===== Mpp::enqueue @ 0001c750 size=12 ===== */

void Mpp::enqueue(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_enqueue_0004a154)();
  return;
}



/* ===== mpp_buffer_put_with_caller @ 0001c75c size=12 ===== */

void mpp_buffer_put_with_caller(void)

{
  (*(code *)PTR_mpp_buffer_put_with_caller_0004a158)();
  return;
}



/* ===== Mpp::clear @ 0001c768 size=12 ===== */

void __thiscall Mpp::clear(Mpp *this)

{
  (*(code *)PTR_clear_0004a15c)(this);
  return;
}



/* ===== <EXTERNAL>::pthread_create @ 0001c774 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0004a160)(__newthread);
  return iVar1;
}



/* ===== _mpp_log @ 0001c780 size=12 ===== */

void _mpp_log(void)

{
  (*(code *)PTR__mpp_log_0004a164)();
  return;
}



/* ===== <EXTERNAL>::pthread_cond_signal @ 0001c798 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_signal(pthread_cond_t *__cond)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_signal_0004a16c)(__cond);
  return iVar1;
}



/* ===== <EXTERNAL>::close @ 0001c7a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0004a170)(__fd);
  return iVar1;
}



/* ===== Mpp::dequeue @ 0001c7b0 size=12 ===== */

void Mpp::dequeue(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001c7b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_dequeue_0004a174)();
  return;
}



/* ===== MppMetaService::get_index_of_key @ 0001c7bc size=12 ===== */

void __thiscall MppMetaService::get_index_of_key(void)

{
  (*(code *)PTR_get_index_of_key_0004a178)();
  return;
}



/* ===== Mpp::close_fd @ 0001c7c8 size=12 ===== */

void __thiscall Mpp::close_fd(Mpp *this,int param_1)

{
  (*(code *)PTR_close_fd_0004a17c)(this);
  return;
}



/* ===== mpp_stopwatch_put @ 0001c7d4 size=12 ===== */

void mpp_stopwatch_put(void)

{
  (*(code *)PTR_mpp_stopwatch_put_0004a180)();
  return;
}



/* ===== mpp_mpi_buf_alloc @ 0001c7e0 size=12 ===== */

void mpp_mpi_buf_alloc(valloc_mb **param_1)

{
  (*(code *)PTR_mpp_mpi_buf_alloc_0004a184)(param_1);
  return;
}



/* ===== <EXTERNAL>::pthread_mutexattr_init @ 0001c7ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutexattr_init(pthread_mutexattr_t *__attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutexattr_init_0004a188)(__attr);
  return iVar1;
}



/* ===== strof_ctx_type @ 0001c7f8 size=12 ===== */

void strof_ctx_type(void)

{
  (*(code *)PTR_strof_ctx_type_0004a18c)();
  return;
}



/* ===== os_get_env_u32 @ 0001c804 size=12 ===== */

void os_get_env_u32(void)

{
  (*(code *)PTR_os_get_env_u32_0004a190)();
  return;
}



/* ===== <EXTERNAL>::strncpy @ 0001c810 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_0004a194)(__dest);
  return pcVar1;
}



/* ===== mpp_trie_get_node_count @ 0001c81c size=12 ===== */

void mpp_trie_get_node_count(void)

{
  (*(code *)PTR_mpp_trie_get_node_count_0004a198)();
  return;
}



/* ===== <EXTERNAL>::pthread_cond_timedwait @ 0001c828 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_timedwait(pthread_cond_t *__cond,pthread_mutex_t *__mutex,timespec *__abstime)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_timedwait_0004a19c)(__cond);
  return iVar1;
}



/* ===== <EXTERNAL>::mmap64 @ 0001c834 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap64(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off64_t __offset)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_mmap64_0004a1a0)(__addr);
  return pvVar1;
}



/* ===== <EXTERNAL>::operator.new @ 0001c840 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_0004a1a4)(param_1);
  return pvVar1;
}



/* ===== <EXTERNAL>::pthread_cond_init @ 0001c84c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_init(pthread_cond_t *__cond,pthread_condattr_t *__cond_attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_init_0004a1a8)(__cond);
  return iVar1;
}



/* ===== mpp_vcodec_ioctl @ 0001c858 size=12 ===== */

void mpp_vcodec_ioctl(void)

{
  (*(code *)PTR_mpp_vcodec_ioctl_0004a1ac)();
  return;
}



/* ===== SyslogWrapper::SyslogWrapper @ 0001c864 size=12 ===== */

void __thiscall SyslogWrapper::SyslogWrapper(SyslogWrapper *this)

{
  (*(code *)PTR_SyslogWrapper_0004a1b0)(this);
  return;
}



/* ===== MppMetaService::put_meta @ 0001c870 size=12 ===== */

void __thiscall MppMetaService::put_meta(MppMetaService *this,MppMetaImpl_t *param_1)

{
  (*(code *)PTR_put_meta_0004a1b4)(this);
  return;
}



/* ===== check_is_mpp_packet @ 0001c87c size=12 ===== */

void check_is_mpp_packet(void)

{
  (*(code *)PTR_check_is_mpp_packet_0004a1b8)();
  return;
}



/* ===== mpp_frame_get_width @ 0001c888 size=12 ===== */

void mpp_frame_get_width(void)

{
  (*(code *)PTR_mpp_frame_get_width_0004a1bc)();
  return;
}



/* ===== MppThread::set_status @ 0001c894 size=12 ===== */

void __thiscall MppThread::set_status(void)

{
  (*(code *)PTR_set_status_0004a1c0)();
  return;
}



/* ===== <EXTERNAL>::closelog @ 0001c8ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void closelog(void)

{
  (*(code *)PTR_closelog_0004a1c8)();
  return;
}



/* ===== check_is_mpp_stopwatch @ 0001c8b8 size=12 ===== */

void check_is_mpp_stopwatch(void *param_1)

{
  (*(code *)PTR_check_is_mpp_stopwatch_0004a1cc)(param_1);
  return;
}



/* ===== mpp_trie_get_info @ 0001c8c4 size=12 ===== */

void mpp_trie_get_info(void)

{
  (*(code *)PTR_mpp_trie_get_info_0004a1d0)();
  return;
}



/* ===== mpp_meta_next_node @ 0001c8d0 size=12 ===== */

void mpp_meta_next_node(void)

{
  (*(code *)PTR_mpp_meta_next_node_0004a1d4)();
  return;
}



/* ===== <EXTERNAL>::memset @ 0001c8dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0004a1d8)(__s);
  return pvVar1;
}



/* ===== check_mpp_task_name @ 0001c8e8 size=12 ===== */

void check_mpp_task_name(void)

{
  (*(code *)PTR_check_mpp_task_name_0004a1dc)();
  return;
}



/* ===== os_get_env_str @ 0001c8f4 size=12 ===== */

void os_get_env_str(void)

{
  (*(code *)PTR_os_get_env_str_0004a1e0)();
  return;
}



/* ===== MppMetaService::get_meta @ 0001c900 size=12 ===== */

void __thiscall MppMetaService::get_meta(MppMetaService *this,char *param_1,char *param_2)

{
  (*(code *)PTR_get_meta_0004a1e4)(this);
  return;
}



/* ===== Mpp::get_frame @ 0001c90c size=12 ===== */

void Mpp::get_frame(void **param_1)

{
  (*(code *)PTR_get_frame_0004a1e8)(param_1);
  return;
}



/* ===== Mpp::init_ext @ 0001c918 size=12 ===== */

void __thiscall Mpp::init_ext(Mpp *this,vcodec_attr_t *param_1)

{
  (*(code *)PTR_init_ext_0004a1ec)(this);
  return;
}



/* ===== <EXTERNAL>::munmap @ 0001c924 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_munmap_0004a1f0)(__addr);
  return iVar1;
}



/* ===== mpp_packet_get_length @ 0001c93c size=12 ===== */

void mpp_packet_get_length(void)

{
  (*(code *)PTR_mpp_packet_get_length_0004a1f8)();
  return;
}



/* ===== mpp_osal_calloc @ 0001c948 size=12 ===== */

void mpp_osal_calloc(void)

{
  (*(code *)PTR_mpp_osal_calloc_0004a1fc)();
  return;
}



/* ===== check_is_mpp_clock @ 0001c954 size=12 ===== */

void check_is_mpp_clock(void *param_1)

{
  (*(code *)PTR_check_is_mpp_clock_0004a200)(param_1);
  return;
}



/* ===== mpp_frame_get_offset_y @ 0001c960 size=12 ===== */

void mpp_frame_get_offset_y(void)

{
  (*(code *)PTR_mpp_frame_get_offset_y_0004a204)();
  return;
}



/* ===== mpp_stopwatch_get @ 0001c978 size=12 ===== */

void mpp_stopwatch_get(void)

{
  (*(code *)PTR_mpp_stopwatch_get_0004a20c)();
  return;
}



/* ===== <EXTERNAL>::abort @ 0001c984 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0004a210)();
  return;
}



/* ===== <EXTERNAL>::memcmp @ 0001c990 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_0004a214)(__s1);
  return iVar1;
}



/* ===== Mpp::~Mpp @ 0001c99c size=12 ===== */

void __thiscall Mpp::~Mpp(Mpp *this)

{
  (*(code *)PTR__Mpp_0004a218)(this);
  return;
}



/* ===== mpp_osal_realloc @ 0001c9a8 size=12 ===== */

void mpp_osal_realloc(void)

{
  (*(code *)PTR_mpp_osal_realloc_0004a21c)();
  return;
}



/* ===== MppMetaService::find_node @ 0001c9b4 size=12 ===== */

void __thiscall MppMetaService::find_node(MppMetaService *this,MppMetaImpl_t *param_1,int param_2)

{
  (*(code *)PTR_find_node_0004a220)(this);
  return;
}



/* ===== Mpp::pause @ 0001c9c0 size=12 ===== */

void __thiscall Mpp::pause(Mpp *this)

{
  (*(code *)PTR_pause_0004a224)(this);
  return;
}



/* ===== show_mpp_version @ 0001c9cc size=12 ===== */

void show_mpp_version(void)

{
  (*(code *)PTR_show_mpp_version_0004a228)();
  return;
}



/* ===== mpp_osal_free @ 0001c9d8 size=12 ===== */

void mpp_osal_free(void)

{
  (*(code *)PTR_mpp_osal_free_0004a22c)();
  return;
}



/* ===== <EXTERNAL>::strnlen @ 0001c9e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strnlen(char *__string,size_t __maxlen)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strnlen_0004a230)(__string);
  return sVar1;
}



/* ===== check_is_mpp_timer @ 0001c9f0 size=12 ===== */

void check_is_mpp_timer(void *param_1)

{
  (*(code *)PTR_check_is_mpp_timer_0004a234)(param_1);
  return;
}



/* ===== <EXTERNAL>::operator.delete @ 0001c9fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1,uint param_2)

{
  (*(code *)PTR_operator_delete_0004a238)(param_1);
  return;
}



/* ===== <EXTERNAL>::__aeabi_atexit @ 0001ca08 size=12 ===== */

void __aeabi_atexit(void)

{
  (*(code *)PTR___aeabi_atexit_0004a23c)();
  return;
}



/* ===== mpp_meta_get_buffer @ 0001ca14 size=12 ===== */

void mpp_meta_get_buffer(void)

{
  (*(code *)PTR_mpp_meta_get_buffer_0004a240)();
  return;
}



/* ===== MppMemPoolService::MppMemPoolService @ 0001ca20 size=12 ===== */

void __thiscall MppMemPoolService::MppMemPoolService(MppMemPoolService *this)

{
  (*(code *)PTR_MppMemPoolService_0004a244)(this);
  return;
}



/* ===== mpp_vcodec_close @ 0001ca2c size=12 ===== */

void mpp_vcodec_close(void)

{
  (*(code *)PTR_mpp_vcodec_close_0004a248)();
  return;
}



/* ===== mpp_frame_get_fmt @ 0001ca38 size=12 ===== */

void mpp_frame_get_fmt(void)

{
  (*(code *)PTR_mpp_frame_get_fmt_0004a24c)();
  return;
}



/* ===== mpp_meta_inc_ref @ 0001ca50 size=12 ===== */

void mpp_meta_inc_ref(void)

{
  (*(code *)PTR_mpp_meta_inc_ref_0004a254)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 0001ca68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_0004a25c)(__mutex);
  return iVar1;
}



/* ===== Mpp::get_fd @ 0001ca74 size=12 ===== */

void __thiscall Mpp::get_fd(Mpp *this,int *param_1)

{
  (*(code *)PTR_get_fd_0004a260)(this);
  return;
}



/* ===== mpp_trie_add_info @ 0001ca80 size=12 ===== */

void mpp_trie_add_info(void)

{
  (*(code *)PTR_mpp_trie_add_info_0004a264)();
  return;
}



/* ===== <EXTERNAL>::pthread_cond_destroy @ 0001ca8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_destroy(pthread_cond_t *__cond)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_destroy_0004a268)(__cond);
  return iVar1;
}



/* ===== Mpp::start @ 0001ca98 size=12 ===== */

void __thiscall Mpp::start(Mpp *this)

{
  (*(code *)PTR_start_0004a26c)(this);
  return;
}



/* ===== <EXTERNAL>::open64 @ 0001caa4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open64_0004a270)(__file);
  return iVar1;
}



/* ===== mpp_meta_get_packet @ 0001cab0 size=12 ===== */

void mpp_meta_get_packet(void)

{
  (*(code *)PTR_mpp_meta_get_packet_0004a274)();
  return;
}



/* ===== mpp_mem_pool_get_f @ 0001cabc size=12 ===== */

void mpp_mem_pool_get_f(void)

{
  (*(code *)PTR_mpp_mem_pool_get_f_0004a278)();
  return;
}



/* ===== mpp_buffer_get_fd_with_caller @ 0001cac8 size=12 ===== */

void mpp_buffer_get_fd_with_caller(void)

{
  (*(code *)PTR_mpp_buffer_get_fd_with_caller_0004a27c)();
  return;
}



/* ===== MppThread::stop @ 0001cad4 size=12 ===== */

void __thiscall MppThread::stop(MppThread *this)

{
  (*(code *)PTR_stop_0004a280)(this);
  return;
}



/* ===== Mpp::release_packet @ 0001cae0 size=12 ===== */

void __thiscall Mpp::release_packet(Mpp *this,void **param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001cae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_release_packet_0004a284)(this);
  return;
}



/* ===== mpp_frame_get_jpege_chan_id @ 0001caec size=12 ===== */

void mpp_frame_get_jpege_chan_id(void)

{
  (*(code *)PTR_mpp_frame_get_jpege_chan_id_0004a288)();
  return;
}



/* ===== MppMetaService::next_node @ 0001caf8 size=12 ===== */

void __thiscall MppMetaService::next_node(MppMetaService *this,MppMetaImpl_t *param_1)

{
  (*(code *)PTR_next_node_0004a28c)(this);
  return;
}



/* ===== <EXTERNAL>::free @ 0001cb04 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0004a290)(__ptr);
  return;
}



/* ===== Mpp::Mpp @ 0001cb10 size=12 ===== */

void __thiscall Mpp::Mpp(Mpp *this,void *param_1)

{
  (*(code *)PTR_Mpp_0004a294)(this);
  return;
}



/* ===== mpp_meta_get_ptr @ 0001cb1c size=12 ===== */

void mpp_meta_get_ptr(void)

{
  (*(code *)PTR_mpp_meta_get_ptr_0004a298)();
  return;
}



/* ===== mpp_meta_put @ 0001cb28 size=12 ===== */

void mpp_meta_put(void)

{
  (*(code *)PTR_mpp_meta_put_0004a29c)();
  return;
}



/* ===== MppMetaService::get_node @ 0001cb34 size=12 ===== */

void __thiscall MppMetaService::get_node(MppMetaService *this,MppMetaImpl_t *param_1,int param_2)

{
  (*(code *)PTR_get_node_0004a2a0)(this);
  return;
}



/* ===== mpp_buffer_get_ptr_with_caller @ 0001cb40 size=12 ===== */

void mpp_buffer_get_ptr_with_caller(void)

{
  (*(code *)PTR_mpp_buffer_get_ptr_with_caller_0004a2a4)();
  return;
}



/* ===== mpp_set_chan @ 0001cb4c size=12 ===== */

void mpp_set_chan(void)

{
  (*(code *)PTR_mpp_set_chan_0004a2a8)();
  return;
}



/* ===== <EXTERNAL>::strerror @ 0001cb58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0004a2ac)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::pthread_cond_wait @ 0001cb64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_wait_0004a2b0)(__cond);
  return iVar1;
}



/* ===== mpp_meta_get_frame @ 0001cb70 size=12 ===== */

void mpp_meta_get_frame(void)

{
  (*(code *)PTR_mpp_meta_get_frame_0004a2b4)();
  return;
}



/* ===== mpp_meta_get_s32 @ 0001cb7c size=12 ===== */

void mpp_meta_get_s32(void)

{
  (*(code *)PTR_mpp_meta_get_s32_0004a2b8)();
  return;
}



/* ===== os_realloc @ 0001cb88 size=12 ===== */

void os_realloc(void)

{
  (*(code *)PTR_os_realloc_0004a2bc)();
  return;
}



/* ===== mpp_frame_get_buffer @ 0001cb94 size=12 ===== */

void mpp_frame_get_buffer(void)

{
  (*(code *)PTR_mpp_frame_get_buffer_0004a2c0)();
  return;
}



/* ===== os_set_env_str @ 0001cba0 size=12 ===== */

void os_set_env_str(void)

{
  (*(code *)PTR_os_set_env_str_0004a2c4)();
  return;
}



/* ===== MppMemPoolService::put_pool @ 0001cbac size=12 ===== */

void __thiscall MppMemPoolService::put_pool(MppMemPoolService *this,MppMemPoolImpl_t *param_1)

{
  (*(code *)PTR_put_pool_0004a2c8)(this);
  return;
}



/* ===== <EXTERNAL>::epoll_ctl @ 0001cbc4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_ctl(int __epfd,int __op,int __fd,epoll_event *__event)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_epoll_ctl_0004a2d0)(__epfd);
  return iVar1;
}



/* ===== <EXTERNAL>::posix_memalign @ 0001cbd0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int posix_memalign(void **__memptr,size_t __alignment,size_t __size)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_posix_memalign_0004a2d4)(__memptr);
  return iVar1;
}



/* ===== mpp_frame_get_hor_stride @ 0001cbdc size=12 ===== */

void mpp_frame_get_hor_stride(void)

{
  (*(code *)PTR_mpp_frame_get_hor_stride_0004a2d8)();
  return;
}



/* ===== mpp_frame_get_offset_x @ 0001cbe8 size=12 ===== */

void mpp_frame_get_offset_x(void)

{
  (*(code *)PTR_mpp_frame_get_offset_x_0004a2dc)();
  return;
}



/* ===== mpp_meta_size @ 0001cbf4 size=12 ===== */

void mpp_meta_size(void)

{
  (*(code *)PTR_mpp_meta_size_0004a2e0)();
  return;
}



/* ===== Mpp::control @ 0001cc00 size=12 ===== */

void __thiscall Mpp::control(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001cc08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_control_0004a2e4)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0001cc0c size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0004a2e8)();
  return;
}



/* ===== Mpp::open_client @ 0001cc18 size=12 ===== */

void __thiscall Mpp::open_client(Mpp *this)

{
  (*(code *)PTR_open_client_0004a2ec)(this);
  return;
}



/* ===== Mpp::init @ 0001cc24 size=12 ===== */

void __thiscall Mpp::init(void)

{
  (*(code *)PTR_init_0004a2f0)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 0001cc30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_0004a2f4)(__th);
  return iVar1;
}



/* ===== entry @ 0001cc40 size=2040 ===== */

void processEntry entry(void)

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
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  int iVar76;
  int iVar77;
  int iVar78;
  int iVar79;
  int iVar80;
  int iVar81;
  int iVar82;
  int iVar83;
  int iVar84;
  int iVar85;
  int iVar86;
  int iVar87;
  int iVar88;
  int iVar89;
  int iVar90;
  int iVar91;
  int iVar92;
  int iVar93;
  int iVar94;
  int iVar95;
  int iVar96;
  int iVar97;
  int iVar98;
  int iVar99;
  int iVar100;
  int iVar101;
  int iVar102;
  int iVar103;
  int iVar104;
  int iVar105;
  int iVar106;
  int iVar107;
  int iVar108;
  int iVar109;
  int iVar110;
  int iVar111;
  int iVar112;
  int iVar113;
  int iVar114;
  int iVar115;
  int iVar116;
  int iVar117;
  int iVar118;
  int iVar119;
  int iVar120;
  int iVar121;
  int iVar122;
  int iVar123;
  int iVar124;
  int iVar125;
  int iVar126;
  
  iVar1 = const_strlen((char *)(DAT_0001d438 + 0x1cc50));
  iVar2 = const_strlen((char *)(DAT_0001d43c + 0x1cc60));
  iVar3 = const_strlen((char *)(DAT_0001d440 + 0x1cc70));
  iVar4 = const_strlen((char *)(DAT_0001d444 + 0x1cc80));
  iVar5 = const_strlen((char *)(DAT_0001d448 + 0x1cc90));
  iVar6 = const_strlen((char *)(DAT_0001d44c + 0x1cca0));
  iVar7 = const_strlen((char *)(DAT_0001d450 + 0x1ccb0));
  iVar8 = const_strlen((char *)(DAT_0001d454 + 0x1ccc0));
  iVar9 = const_strlen((char *)(DAT_0001d458 + 0x1ccd0));
  iVar10 = const_strlen((char *)(DAT_0001d45c + 0x1cce0));
  iVar11 = const_strlen((char *)(DAT_0001d460 + 0x1ccf0));
  iVar12 = const_strlen((char *)(DAT_0001d464 + 0x1cd00));
  iVar13 = const_strlen((char *)(DAT_0001d468 + 0x1cd10));
  iVar14 = const_strlen((char *)(DAT_0001d46c + 0x1cd20));
  iVar15 = const_strlen((char *)(DAT_0001d470 + 0x1cd30));
  iVar16 = const_strlen((char *)(DAT_0001d474 + 0x1cd40));
  iVar17 = const_strlen((char *)(DAT_0001d478 + 0x1cd50));
  iVar18 = const_strlen((char *)(DAT_0001d47c + 0x1cd60));
  iVar19 = const_strlen((char *)(DAT_0001d480 + 0x1cd70));
  iVar20 = const_strlen((char *)(DAT_0001d484 + 0x1cd80));
  iVar21 = const_strlen((char *)(DAT_0001d488 + 0x1cd90));
  iVar22 = const_strlen((char *)(DAT_0001d48c + 0x1cda0));
  iVar23 = const_strlen((char *)(DAT_0001d490 + 0x1cdb0));
  iVar24 = const_strlen((char *)(DAT_0001d494 + 0x1cdc0));
  iVar25 = const_strlen((char *)(DAT_0001d498 + 0x1cdd0));
  iVar26 = const_strlen((char *)(DAT_0001d49c + 0x1cde0));
  iVar27 = const_strlen((char *)(DAT_0001d4a0 + 0x1cdf0));
  iVar28 = const_strlen((char *)(DAT_0001d4a4 + 0x1ce00));
  iVar29 = const_strlen((char *)(DAT_0001d4a8 + 0x1ce10));
  iVar30 = const_strlen((char *)(DAT_0001d4ac + 0x1ce20));
  iVar31 = const_strlen((char *)(DAT_0001d4b0 + 0x1ce30));
  iVar32 = const_strlen((char *)(DAT_0001d4b4 + 0x1ce40));
  iVar33 = const_strlen((char *)(DAT_0001d4b8 + 0x1ce50));
  iVar34 = const_strlen((char *)(DAT_0001d4bc + 0x1ce60));
  iVar35 = const_strlen((char *)(DAT_0001d4c0 + 0x1ce70));
  iVar36 = const_strlen((char *)(DAT_0001d4c4 + 0x1ce80));
  iVar37 = const_strlen((char *)(DAT_0001d4c8 + 0x1ce90));
  iVar38 = const_strlen((char *)(DAT_0001d4cc + 0x1cea0));
  iVar39 = const_strlen((char *)(DAT_0001d4d0 + 0x1ceb0));
  iVar40 = const_strlen((char *)(DAT_0001d4d4 + 0x1cec0));
  iVar41 = const_strlen((char *)(DAT_0001d4d8 + 0x1ced0));
  iVar42 = const_strlen((char *)(DAT_0001d4dc + 0x1cee0));
  iVar43 = const_strlen((char *)(DAT_0001d4e0 + 0x1cef0));
  iVar44 = const_strlen((char *)(DAT_0001d4e4 + 0x1cf00));
  iVar45 = const_strlen((char *)(DAT_0001d4e8 + 0x1cf10));
  iVar46 = const_strlen((char *)(DAT_0001d4ec + 0x1cf20));
  iVar47 = const_strlen((char *)(DAT_0001d4f0 + 0x1cf30));
  iVar48 = const_strlen((char *)(DAT_0001d4f4 + 0x1cf40));
  iVar49 = const_strlen((char *)(DAT_0001d4f8 + 0x1cf50));
  iVar50 = const_strlen((char *)(DAT_0001d4fc + 0x1cf60));
  iVar51 = const_strlen((char *)(DAT_0001d500 + 0x1cf70));
  iVar52 = const_strlen((char *)(DAT_0001d504 + 0x1cf80));
  iVar53 = const_strlen((char *)(DAT_0001d508 + 0x1cf90));
  iVar54 = const_strlen((char *)(DAT_0001d50c + 0x1cfa0));
  iVar55 = const_strlen((char *)(DAT_0001d510 + 0x1cfb0));
  iVar56 = const_strlen((char *)(DAT_0001d514 + 0x1cfc0));
  iVar57 = const_strlen((char *)(DAT_0001d518 + 0x1cfd0));
  iVar58 = const_strlen((char *)(DAT_0001d51c + 0x1cfe0));
  iVar59 = const_strlen((char *)(DAT_0001d520 + 0x1cff0));
  iVar60 = const_strlen((char *)(DAT_0001d524 + 0x1d000));
  iVar61 = const_strlen((char *)(DAT_0001d528 + 0x1d010));
  iVar62 = const_strlen((char *)(DAT_0001d52c + 0x1d020));
  iVar63 = const_strlen((char *)(DAT_0001d530 + 0x1d030));
  iVar64 = const_strlen((char *)(DAT_0001d534 + 0x1d040));
  iVar65 = const_strlen((char *)(DAT_0001d538 + 0x1d050));
  iVar66 = const_strlen((char *)(DAT_0001d53c + 0x1d060));
  iVar67 = const_strlen((char *)(DAT_0001d540 + 0x1d070));
  iVar68 = const_strlen((char *)(DAT_0001d544 + 0x1d080));
  iVar69 = const_strlen((char *)(DAT_0001d548 + 0x1d090));
  iVar70 = const_strlen((char *)(DAT_0001d54c + 0x1d0a0));
  iVar71 = const_strlen((char *)(DAT_0001d550 + 0x1d0b0));
  iVar72 = const_strlen((char *)(DAT_0001d554 + 0x1d0c0));
  iVar73 = const_strlen((char *)(DAT_0001d558 + 0x1d0d0));
  iVar74 = const_strlen((char *)(DAT_0001d55c + 0x1d0e0));
  iVar75 = const_strlen((char *)(DAT_0001d560 + 0x1d0f0));
  iVar76 = const_strlen((char *)(DAT_0001d564 + 0x1d100));
  iVar77 = const_strlen((char *)(DAT_0001d568 + 0x1d110));
  iVar78 = const_strlen((char *)(DAT_0001d56c + 0x1d120));
  iVar79 = const_strlen((char *)(DAT_0001d570 + 0x1d130));
  iVar80 = const_strlen((char *)(DAT_0001d574 + 0x1d140));
  iVar81 = const_strlen((char *)(DAT_0001d578 + 0x1d150));
  iVar82 = const_strlen((char *)(DAT_0001d57c + 0x1d160));
  iVar83 = const_strlen((char *)(DAT_0001d580 + 0x1d170));
  iVar84 = const_strlen((char *)(DAT_0001d584 + 0x1d180));
  iVar85 = const_strlen((char *)(DAT_0001d588 + 0x1d190));
  iVar86 = const_strlen((char *)(DAT_0001d58c + 0x1d1a0));
  iVar87 = const_strlen((char *)(DAT_0001d590 + 0x1d1b0));
  iVar88 = const_strlen((char *)(DAT_0001d594 + 0x1d1c0));
  iVar89 = const_strlen((char *)(DAT_0001d598 + 0x1d1d0));
  iVar90 = const_strlen((char *)(DAT_0001d59c + 0x1d1e0));
  iVar91 = const_strlen((char *)(DAT_0001d5a0 + 0x1d1f0));
  iVar92 = const_strlen((char *)(DAT_0001d5a4 + 0x1d200));
  iVar93 = const_strlen((char *)(DAT_0001d5a8 + 0x1d210));
  iVar94 = const_strlen((char *)(DAT_0001d5ac + 0x1d220));
  iVar95 = const_strlen((char *)(DAT_0001d5b0 + 0x1d230));
  iVar96 = const_strlen((char *)(DAT_0001d5b4 + 0x1d240));
  iVar97 = const_strlen((char *)(DAT_0001d5b8 + 0x1d250));
  iVar98 = const_strlen((char *)(DAT_0001d5bc + 0x1d260));
  iVar99 = const_strlen((char *)(DAT_0001d5c0 + 0x1d270));
  iVar100 = const_strlen((char *)(DAT_0001d5c4 + 0x1d280));
  iVar101 = const_strlen((char *)(DAT_0001d5c8 + 0x1d290));
  iVar102 = const_strlen((char *)(DAT_0001d5cc + 0x1d2a0));
  iVar103 = const_strlen((char *)(DAT_0001d5d0 + 0x1d2b0));
  iVar104 = const_strlen((char *)(DAT_0001d5d4 + 0x1d2c0));
  iVar105 = const_strlen((char *)(DAT_0001d5d8 + 0x1d2d0));
  iVar106 = const_strlen((char *)(DAT_0001d5dc + 0x1d2e0));
  iVar107 = const_strlen((char *)(DAT_0001d5e0 + 0x1d2f0));
  iVar108 = const_strlen((char *)(DAT_0001d5e4 + 0x1d300));
  iVar109 = const_strlen((char *)(DAT_0001d5e8 + 0x1d310));
  iVar110 = const_strlen((char *)(DAT_0001d5ec + 0x1d320));
  iVar111 = const_strlen((char *)(DAT_0001d5f0 + 0x1d330));
  iVar112 = const_strlen((char *)(DAT_0001d5f4 + 0x1d340));
  iVar113 = const_strlen((char *)(DAT_0001d5f8 + 0x1d350));
  iVar114 = const_strlen((char *)(DAT_0001d5fc + 0x1d360));
  iVar115 = const_strlen((char *)(DAT_0001d600 + 0x1d370));
  iVar116 = const_strlen((char *)(DAT_0001d604 + 0x1d380));
  iVar117 = const_strlen((char *)(DAT_0001d608 + 0x1d390));
  iVar118 = const_strlen((char *)(DAT_0001d60c + 0x1d3a0));
  iVar119 = const_strlen((char *)(DAT_0001d610 + 0x1d3b0));
  iVar120 = const_strlen((char *)(DAT_0001d614 + 0x1d3c0));
  iVar121 = const_strlen((char *)(DAT_0001d618 + 0x1d3d0));
  iVar122 = const_strlen((char *)(DAT_0001d61c + 0x1d3e0));
  iVar123 = const_strlen((char *)(DAT_0001d620 + 0x1d3f0));
  iVar124 = const_strlen((char *)(DAT_0001d624 + 0x1d400));
  iVar125 = const_strlen((char *)(DAT_0001d628 + 0x1d410));
  iVar126 = const_strlen((char *)(DAT_0001d62c + 0x1d420));
  *(int *)(DAT_0001d630 + 0x1d42c) =
       iVar1 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
       iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + iVar19 + iVar20 + iVar21 +
       iVar22 + iVar23 + iVar24 + iVar25 + iVar26 + iVar27 + iVar28 + iVar29 + iVar30 + iVar31 +
       iVar32 + iVar33 + iVar34 + iVar35 + iVar36 + iVar37 + iVar38 + iVar39 + iVar40 + iVar41 +
       iVar42 + iVar43 + iVar44 + iVar45 + iVar46 + iVar47 + iVar48 + iVar49 + iVar50 + iVar51 +
       iVar52 + iVar53 + iVar54 + iVar55 + iVar56 + iVar57 + iVar58 + iVar59 + iVar60 + iVar61 +
       iVar62 + iVar63 + iVar64 + iVar65 + iVar66 + iVar67 + iVar68 + iVar69 + iVar70 + iVar71 +
       iVar72 + iVar73 + iVar74 + iVar75 + iVar76 + iVar77 + iVar78 + iVar79 + iVar80 + iVar81 +
       iVar82 + iVar83 + iVar84 + iVar85 + iVar86 + iVar87 + iVar88 + iVar89 + iVar90 + iVar91 +
       iVar92 + iVar93 + iVar94 + iVar95 + iVar96 + iVar97 + iVar98 + iVar99 + iVar100 + iVar101 +
       iVar102 + iVar103 + iVar104 + iVar105 + iVar106 + iVar107 + iVar108 + iVar109 + iVar110 +
       iVar111 + iVar112 + iVar113 + iVar114 + iVar115 + iVar116 + iVar117 + iVar118 + iVar119 +
       iVar120 + iVar121 + iVar122 + iVar123 + iVar124 + iVar125 + iVar126 + -0x38;
  return;
}



/* ===== _INIT_2 @ 0001d634 size=36 ===== */

void _INIT_2(void)

{
  undefined4 uVar1;
  
  uVar1 = mpp_mem_pool_init_f(DAT_0001d658 + 0x1d648,0x38);
  *(undefined4 *)(DAT_0001d65c + 0x1d654) = uVar1;
  return;
}



/* ===== _INIT_3 @ 0001d660 size=36 ===== */

void _INIT_3(void)

{
  undefined4 uVar1;
  
  uVar1 = mpp_mem_pool_init_f(DAT_0001d684 + 0x1d674,0xa8);
  *(undefined4 *)(DAT_0001d688 + 0x1d680) = uVar1;
  return;
}



/* ===== _INIT_4 @ 0001d68c size=24 ===== */

void _INIT_4(void)

{
  *(int *)(DAT_0001d6a4 + 0x1d69c) = DAT_0001d6a8 + 0x1d6a0;
  return;
}



/* ===== _INIT_5 @ 0001d6ac size=56 ===== */

void _INIT_5(void)

{
  SyslogWrapper *this;
  int iVar1;
  
  this = (SyslogWrapper *)(DAT_0001d6e4 + 0x1d6c0);
  iVar1 = DAT_0001d6e8 + 0x1d6c4;
  SyslogWrapper::SyslogWrapper(this);
  __aeabi_atexit(this,*(undefined4 *)(iVar1 + DAT_0001d6ec),DAT_0001d6f0 + 0x1d6e0);
  return;
}



/* ===== FUN_0001d6f4 @ 0001d6f4 size=72 ===== */

void FUN_0001d6f4(void)

{
  code *pcVar1;
  
  if (DAT_0001d740 + 0x1d70c == DAT_0001d73c + 0x1d704) {
    return;
  }
  pcVar1 = *(code **)(DAT_0001d744 + 0x1d714 + DAT_0001d748);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 0001d7b0 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_0001d824 + 0x1d7cc;
  if (*(char *)(DAT_0001d820 + 0x1d7c0) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_0001d828) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_0001d82c + 0x1d7ec));
  }
  FUN_0001d6f4();
  if (*(int *)(iVar1 + DAT_0001d830) != 0) {
    __deregister_frame_info(DAT_0001d834 + 0x1d80c);
  }
  *(undefined1 *)(DAT_0001d838 + 0x1d81c) = 1;
  return;
}



/* ===== _INIT_0 @ 0001d83c size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_0001d874 + 0x1d84c + DAT_0001d878) != 0) {
    __register_frame_info(DAT_0001d880 + 0x1d86c,DAT_0001d87c + 0x1d868);
  }
  if (((DAT_0001d7a4 + 0x1d764) - (DAT_0001d7a0 + 0x1d75c) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_0001d7a8 + 0x1d76c + DAT_0001d7ac);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== show_mpp_version @ 0001d884 size=176 ===== */

void show_mpp_version(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_1c [2];
  
  local_1c[0] = 0;
  mpp_env_get_u32(DAT_0001d934 + 0x1d8a4,local_1c,0);
  iVar2 = DAT_0001d944;
  iVar1 = DAT_0001d940;
  if (local_1c[0] != 0) {
    iVar3 = DAT_0001d938 + 0x1d8cc;
    _mpp_log(iVar3,DAT_0001d93c + 0x1d8d4,0,10);
    puVar4 = (undefined4 *)(iVar1 + 0x1d8e0);
    do {
      puVar4 = puVar4 + 1;
      _mpp_log(iVar3,iVar2 + 0x1d8e8,0,*puVar4);
    } while (puVar4 != (undefined4 *)(iVar1 + 0x1d908));
    return;
  }
  _mpp_log(DAT_0001d950 + 0x1d92c,DAT_0001d94c + 0x1d928,0,DAT_0001d948 + 0x1d924);
  return;
}



/* ===== get_mpp_version @ 0001d954 size=12 ===== */

int get_mpp_version(void)

{
  return (int)&DAT_0001d960 + DAT_0001d960;
}



/* ===== Mpp::Mpp @ 0001d968 size=112 ===== */

/* Mpp::Mpp(void*) */

Mpp * __thiscall Mpp::Mpp(Mpp *this,void *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_0001d9f4;
  uVar2 = DAT_0001d9e0;
  uVar1 = DAT_0001d9d8;
  iVar4 = DAT_0001d9f0 + 0x1d97c;
  *(void **)(this + 0x58) = param_1;
  *(undefined8 *)(this + 0x60) = uVar1;
  *(undefined8 *)(this + 0x68) = uVar2;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x7c) = 0xffffffff;
  mpp_env_get_u32(DAT_0001d9f8 + 0x1d9c4,*(undefined4 *)(iVar4 + iVar3),0);
  uVar1 = DAT_0001d9e8;
  *(undefined4 *)(this + 0x4c) = 0xffffffff;
  *(undefined8 *)(this + 0x80) = uVar1;
  return this;
}



/* ===== Mpp::init @ 0001d9fc size=464 ===== */

/* Mpp::init(MppCtxType, MppCodingType) */

int __thiscall Mpp::init(Mpp *this,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_54;
  undefined4 uStack_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  int local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_4c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_48 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_24 = 0;
  local_54 = 0;
  local_44 = 0;
  local_3c = 0;
  local_34 = 0;
  local_2c = 0;
  uStack_20 = 0;
  uStack_40 = uStack_50;
  uStack_38 = uStack_50;
  uStack_30 = uStack_50;
  uStack_28 = uStack_50;
  uStack_1c = uStack_50;
  iVar1 = mpp_check_support_format(param_2,param_3);
  if (iVar1 == 0) {
    local_4c = mpp_set_chan(this,param_2);
    if (local_4c < 0) {
      iVar1 = -1;
      _mpp_log(DAT_0001dbec + 0x1dba8,DAT_0001dbe8 + 0x1dba4,0);
    }
    else {
      iVar4 = *(int *)(this + 0x7c);
      local_54 = param_2;
      uStack_50 = param_3;
      local_48 = iVar1;
      local_3c = iVar1;
      if (iVar4 < 0) {
        iVar4 = mpp_vcodec_open();
        *(int *)(this + 0x7c) = iVar4;
        if (iVar4 < 0) {
          _mpp_err(DAT_0001dbf4 + 0x1dbc8,DAT_0001dbf0 + 0x1dbc4,0,iVar4);
          return -1;
        }
      }
      iVar5 = DAT_0001dbcc + 0x1da90;
      _mpp_log(iVar5,DAT_0001dbd0 + 0x1da98,0,iVar4,local_4c);
      iVar1 = mpp_vcodec_ioctl(*(undefined4 *)(this + 0x7c),0,0,0x3c,&local_54);
      if (iVar1 != 0) {
        _mpp_err(iVar5,DAT_0001dbdc + 0x1db4c,0);
      }
      iVar1 = mpp_vcodec_ioctl(*(undefined4 *)(this + 0x7c),0x100,0,0,0);
      if (iVar1 != 0) {
        _mpp_err(DAT_0001dbd8 + 0x1db34,DAT_0001dbd4 + 0x1db30,0);
      }
      *(undefined4 *)(this + 100) = param_2;
      *(undefined4 *)(this + 0x70) = 1;
      *(int *)(this + 0x5c) = local_4c;
    }
  }
  else {
    iVar1 = -1;
    uVar2 = strof_ctx_type(param_2);
    uVar3 = strof_coding_type(param_3);
    _mpp_err(DAT_0001dbe4 + 0x1db88,DAT_0001dbe0 + 0x1db7c,0,uVar2,uVar3);
  }
  return iVar1;
}



/* ===== Mpp::open_client @ 0001dbf8 size=64 ===== */

/* Mpp::open_client() */

undefined4 __thiscall Mpp::open_client(Mpp *this)

{
  int iVar1;
  
  iVar1 = mpp_vcodec_open();
  *(int *)(this + 0x7c) = iVar1;
  if (-1 < iVar1) {
    return 0;
  }
  _mpp_err(DAT_0001dc3c + 0x1dc30,DAT_0001dc38 + 0x1dc2c,0);
  return 0xffffffff;
}



/* ===== Mpp::init_ext @ 0001dc40 size=412 ===== */

/* Mpp::init_ext(vcodec_attr_t*) */

int __thiscall Mpp::init_ext(Mpp *this,vcodec_attr_t *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = mpp_check_support_format(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4));
  iVar4 = DAT_0001dddc + 0x1dc68;
  if (iVar1 == 0) {
    iVar1 = *(int *)(this + 0x7c);
    if (iVar1 < 0) {
      iVar1 = mpp_vcodec_open();
      *(int *)(this + 0x7c) = iVar1;
      if (iVar1 < 0) {
        _mpp_err(DAT_0001ddf8 + 0x1dd7c,DAT_0001ddf4 + 0x1dd78,0);
        return -1;
      }
    }
    if ((**(uint **)(iVar4 + DAT_0001dde0) & 4) != 0) {
      _mpp_log(DAT_0001dde8 + 0x1dd00,DAT_0001dde4 + 0x1dcf8,0,iVar1,*(undefined4 *)(param_1 + 8));
      iVar1 = *(int *)(this + 0x7c);
    }
    iVar1 = mpp_vcodec_ioctl(iVar1,0,0,0x3c,param_1);
    if (iVar1 != 0) {
      _mpp_err(DAT_0001ddf0 + 0x1dd4c,DAT_0001ddec + 0x1dd48,0,*(undefined4 *)(param_1 + 8));
    }
    iVar4 = *(int *)(param_1 + 0x30);
    if (iVar4 == 0) {
      iVar1 = mpp_vcodec_ioctl(*(undefined4 *)(this + 0x7c),0x100,0,0,0);
      if (iVar1 != 0) {
        _mpp_err(DAT_0001de00 + 0x1dd9c,DAT_0001ddfc + 0x1dd98,0,*(undefined4 *)(param_1 + 8));
      }
      iVar4 = *(int *)(param_1 + 0x30);
    }
    uVar2 = *(undefined4 *)(param_1 + 8);
    uVar3 = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0x70) = 1;
    *(undefined4 *)(this + 0x5c) = uVar2;
    *(undefined4 *)(this + 100) = uVar3;
    *(int *)(this + 0x6c) = iVar4;
  }
  else {
    iVar1 = -1;
    uVar2 = strof_ctx_type(*(undefined4 *)param_1);
    uVar3 = strof_coding_type(*(undefined4 *)(param_1 + 4));
    _mpp_err(DAT_0001de08 + 0x1ddd8,DAT_0001de04 + 0x1ddcc,0,uVar2,uVar3);
  }
  return iVar1;
}



/* ===== Mpp::clear @ 0001de0c size=160 ===== */

/* Mpp::clear() */

void __thiscall Mpp::clear(Mpp *this)

{
  int iVar1;
  
  if (*(int *)(this + 0x6c) == 0) {
    iVar1 = mpp_vcodec_ioctl(*(int *)(this + 0x7c),1,0,0,0);
    if (iVar1 != 0) {
      _mpp_err(DAT_0001dea4 + 0x1de9c,DAT_0001dea0 + 0x1de98,0);
    }
    if (*(int *)(this + 0x7c) < 0) goto LAB_0001de64;
  }
  else if (*(int *)(this + 0x7c) < 0) {
    return;
  }
  mpp_vcodec_close();
LAB_0001de64:
  if (*(int *)(this + 0x6c) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001c974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_mpp_free_chan_0004a208)(this,*(undefined4 *)(this + 100));
  return;
}



/* ===== Mpp::~Mpp @ 0001dea8 size=20 ===== */

/* Mpp::~Mpp() */

Mpp * __thiscall Mpp::~Mpp(Mpp *this)

{
  clear(this);
  return this;
}



/* ===== Mpp::start @ 0001debc size=104 ===== */

/* Mpp::start() */

int __thiscall Mpp::start(Mpp *this)

{
  int iVar1;
  
  if ((*(int *)(this + 0x6c) == 0) &&
     (iVar1 = mpp_vcodec_ioctl(*(undefined4 *)(this + 0x7c),0x100,0,0,0), iVar1 != 0)) {
    _mpp_err(DAT_0001df28 + 0x1df18,DAT_0001df24 + 0x1df14,0);
    return iVar1;
  }
  return 0;
}



/* ===== Mpp::stop @ 0001df2c size=104 ===== */

/* Mpp::stop() */

int __thiscall Mpp::stop(Mpp *this)

{
  int iVar1;
  
  if ((*(int *)(this + 0x6c) == 0) &&
     (iVar1 = mpp_vcodec_ioctl(*(undefined4 *)(this + 0x7c),0x100,0,0,0), iVar1 != 0)) {
    _mpp_err(DAT_0001df98 + 0x1df88,DAT_0001df94 + 0x1df84,0);
    return iVar1;
  }
  return 0;
}



/* ===== Mpp::pause @ 0001df9c size=104 ===== */

/* Mpp::pause() */

int __thiscall Mpp::pause(Mpp *this)

{
  int iVar1;
  
  if ((*(int *)(this + 0x6c) == 0) &&
     (iVar1 = mpp_vcodec_ioctl(*(undefined4 *)(this + 0x7c),0x102,0,0,0), iVar1 != 0)) {
    _mpp_err(DAT_0001e008 + 0x1dff8,DAT_0001e004 + 0x1dff4,0);
    return iVar1;
  }
  return 0;
}



/* ===== Mpp::resume @ 0001e00c size=104 ===== */

/* Mpp::resume() */

int __thiscall Mpp::resume(Mpp *this)

{
  int iVar1;
  
  if ((*(int *)(this + 0x6c) == 0) &&
     (iVar1 = mpp_vcodec_ioctl(*(undefined4 *)(this + 0x7c),0x103,0,0,0), iVar1 != 0)) {
    _mpp_err(DAT_0001e078 + 0x1e068,DAT_0001e074 + 0x1e064,0);
    return iVar1;
  }
  return 0;
}



/* ===== Mpp::put_packet @ 0001e07c size=24 ===== */

/* Mpp::put_packet(void*) */

undefined4 Mpp::put_packet(void *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xfffffc16;
  if (*(int *)((int)param_1 + 0x70) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== Mpp::get_frame @ 0001e094 size=24 ===== */

/* Mpp::get_frame(void**) */

undefined4 Mpp::get_frame(void **param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xfffffc16;
  if (param_1[0x1c] != (void *)0x0) {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== Mpp::put_frame @ 0001e0ac size=276 ===== */

/* Mpp::put_frame(void*) */

int __thiscall Mpp::put_frame(Mpp *this,void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  if (*(int *)(this + 0x70) == 0) {
    iVar3 = -0x3ea;
  }
  else {
    uVar1 = mpp_frame_get_buffer(param_1);
    local_78 = mpp_frame_get_width(param_1);
    local_74 = mpp_frame_get_height(param_1);
    local_70 = mpp_frame_get_hor_stride(param_1);
    local_6c = mpp_frame_get_ver_stride(param_1);
    local_68 = mpp_frame_get_hor_stride_pixel(param_1);
    local_64 = mpp_frame_get_offset_x(param_1);
    local_60 = mpp_frame_get_offset_y(param_1);
    local_5c = mpp_frame_get_fmt(param_1);
    local_58 = mpp_buffer_get_fd_with_caller(uVar1,DAT_0001e1c0 + 0x1e13c);
    local_50 = mpp_frame_get_pts(param_1);
    local_48 = mpp_frame_get_jpege_chan_id(param_1);
    iVar2 = mpp_vcodec_ioctl(*(undefined4 *)(this + 0x7c),0x400,0,0x68,&local_78);
    iVar3 = 0;
    if (iVar2 != 0) {
      _mpp_err(DAT_0001e1c8 + 0x1e1a8,DAT_0001e1c4 + 0x1e1a4,0);
      return iVar2;
    }
  }
  return iVar3;
}



/* ===== Mpp::get_packet @ 0001e1cc size=320 ===== */

/* Mpp::get_packet(void**) */

undefined4 __thiscall Mpp::get_packet(Mpp *this,void **param_1)

{
  int iVar1;
  uint uVar2;
  void *__s;
  timeval local_a0;
  fd_set fStack_98;
  
  if (*(int *)(this + 0x70) == 0) {
    return 0xfffffc16;
  }
  __s = *param_1;
  if (__s != (void *)0x0) {
    memset(&fStack_98,0,0x80);
    uVar2 = *(uint *)(this + 0x7c) >> 5;
    fStack_98.fds_bits[uVar2] = fStack_98.fds_bits[uVar2] | 1 << (*(uint *)(this + 0x7c) & 0x1f);
    memset(__s,0,0xb8);
    local_a0.tv_sec = *(__time_t *)(this + 0x80);
    local_a0.tv_usec = *(__suseconds_t *)(this + 0x84);
    iVar1 = select(*(int *)(this + 0x7c) + 1,&fStack_98,(fd_set *)0x0,(fd_set *)0x0,&local_a0);
    if (iVar1 < 0) {
      _mpp_err(DAT_0001e318 + 0x1e304,DAT_0001e314 + 0x1e300,0);
      return 0xffffffff;
    }
    if (iVar1 != 0) {
      uVar2 = *(uint *)(this + 0x7c);
      if (((fStack_98.fds_bits[uVar2 >> 5] >> (uVar2 & 0x1f) & 1U) == 0) ||
         (iVar1 = mpp_vcodec_ioctl(uVar2,0x601,0,0xb8,__s), iVar1 == 0)) {
        return 0;
      }
      _mpp_err(DAT_0001e310 + 0x1e2d8,DAT_0001e30c + 0x1e2d4,0);
    }
  }
  return 0xffffffff;
}



/* ===== Mpp::release_packet @ 0001e31c size=100 ===== */

/* Mpp::release_packet(void**) */

undefined4 __thiscall Mpp::release_packet(Mpp *this,void **param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x70) == 0) {
    return 0xfffffc16;
  }
  if (*param_1 != (void *)0x0) {
    if (*(int *)(this + 0x7c) < 0) {
      return 0;
    }
    uVar1 = mpp_vcodec_ioctl(*(int *)(this + 0x7c),0x602,0,0xb8,*param_1);
    return uVar1;
  }
  return 0xffffffff;
}



/* ===== Mpp::poll @ 0001e380 size=24 ===== */

/* Mpp::poll(MppPortType, MppPollType) */

undefined4 Mpp::poll(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xfffffc16;
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== Mpp::dequeue @ 0001e398 size=24 ===== */

/* Mpp::dequeue(MppPortType, void**) */

undefined4 Mpp::dequeue(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xfffffc16;
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== Mpp::enqueue @ 0001e3b0 size=24 ===== */

/* Mpp::enqueue(MppPortType, void*) */

undefined4 Mpp::enqueue(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xfffffc16;
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== Mpp::control @ 0001e3c8 size=356 ===== */

/* Mpp::control(MpiCmd, void*) */

int __thiscall Mpp::control(Mpp *this,uint param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 < 0x320015) {
    if (param_2 < 0x320013) {
      if (param_2 < 0x320003) {
        if (param_2 < 0x320001) {
          if (param_2 == 0x200008) {
            *(undefined8 *)(this + 0x80) = *param_3;
            return 0;
          }
          uVar2 = 0;
        }
        else {
          uVar2 = 0x1270;
        }
      }
      else if (param_2 == 0x32000f) {
        uVar2 = 4;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0x88;
    }
  }
  else if (param_2 < 0x328203) {
    if (param_2 < 0x328201) {
      if (param_2 == 0x320016) {
        uVar2 = 0x3c;
      }
      else if (param_2 == 0x328001) {
        uVar2 = 4;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0x18;
    }
  }
  else if (param_2 == 0x328403) {
    uVar2 = 0x468;
  }
  else if (param_2 == 0x328500) {
    uVar2 = 8;
  }
  else {
    uVar2 = 0;
  }
  iVar1 = mpp_vcodec_ioctl(*(undefined4 *)(this + 0x7c),3,param_2,uVar2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  _mpp_err(DAT_0001e530 + 0x1e518,DAT_0001e52c + 0x1e514,0,*(undefined4 *)(this + 0x7c));
  return iVar1;
}



/* ===== Mpp::reset @ 0001e534 size=128 ===== */

/* Mpp::reset() */

int __thiscall Mpp::reset(Mpp *this)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(this + 0x6c) == 0) {
    if (*(int *)(this + 0x70) == 0) {
      iVar2 = -0x3ea;
    }
    else {
      iVar1 = mpp_vcodec_ioctl(*(undefined4 *)(this + 0x7c),2,0,0,0);
      iVar2 = 0;
      if (iVar1 != 0) {
        _mpp_err(DAT_0001e5b8 + 0x1e59c,DAT_0001e5b4 + 0x1e598,0);
        return iVar1;
      }
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== Mpp::control_mpp @ 0001e5bc size=440 ===== */

/* Mpp::control_mpp(MpiCmd, void*) */

undefined4 __thiscall Mpp::control_mpp(Mpp *this,uint param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_0001e778;
  iVar4 = DAT_0001e774;
  if (param_2 < 0x200008) {
    if (param_2 < 0x200006) {
      if (param_2 < 0x200002) {
        return 0xffffffff;
      }
      iVar3 = 0;
      if ((param_3 == (int *)0x0) || (iVar3 = *param_3, iVar3 + 1U < 0x1f42)) {
        if (param_2 - 0x200002 < 2) {
          *(int *)(this + 0x48) = iVar3;
        }
        else {
          *(int *)(this + 0x4c) = iVar3;
        }
        _mpp_log(iVar4 + 0x1e698,iVar1 + 0x1e6a0,0);
        return 0;
      }
      _mpp_err(DAT_0001e77c + 0x1e72c,DAT_0001e780 + 0x1e734,0,iVar3,0xfffffffe,8000);
      uVar2 = 0xfffffffa;
    }
    else {
      iVar4 = 0;
      if ((param_3 == (int *)0x0) || (iVar4 = *param_3, iVar4 + 1U < 0x1f42)) {
        uVar2 = 0;
        if (param_2 == 0x200006) {
          *(int *)(this + 0x48) = iVar4;
        }
        else {
          *(int *)(this + 0x4c) = iVar4;
        }
      }
      else {
        _mpp_err(DAT_0001e784 + 0x1e760,DAT_0001e788 + 0x1e768,0,iVar4,0xfffffffe,8000);
        uVar2 = 0xfffffffa;
      }
    }
  }
  else if (param_2 == 0x200102) {
    stop(this);
    uVar2 = 0;
  }
  else {
    if (param_2 < 0x200103) {
      if (param_2 != 0x200101) {
        return 0xffffffff;
      }
      start(this);
      return 0;
    }
    if (param_2 == 0x200103) {
      pause(this);
      uVar2 = 0;
    }
    else {
      if (param_2 != 0x200104) {
        return 0xffffffff;
      }
      resume(this);
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* ===== Mpp::control_osal @ 0001e78c size=164 ===== */

/* Mpp::control_osal(MpiCmd, void*) */

undefined4 Mpp::control_osal(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = DAT_0001e830 + 0x1e7a4;
  if (param_2 < 0x100001) {
    iVar2 = DAT_0001e848 + 0x1e810;
    uVar6 = 0x20b;
    iVar4 = DAT_0001e84c + 0x1e81c;
    iVar3 = DAT_0001e850 + 0x1e828;
    iVar1 = DAT_0001e854 + 0x1e82c;
  }
  else {
    iVar2 = DAT_0001e834 + 0x1e7bc;
    uVar6 = 0x20c;
    iVar4 = DAT_0001e838 + 0x1e7c8;
    iVar3 = DAT_0001e83c + 0x1e7d4;
    iVar1 = DAT_0001e840 + 0x1e7d8;
  }
  _mpp_err(iVar1,iVar3,0,iVar4,iVar2,uVar6);
  if ((**(uint **)(iVar5 + DAT_0001e844) & 0x10000000) == 0) {
    return 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== Mpp::control_codec @ 0001e858 size=8 ===== */

/* Mpp::control_codec(MpiCmd, void*) */

undefined4 Mpp::control_codec(void)

{
  return 0xffffffff;
}



/* ===== Mpp::control_dec @ 0001e860 size=8 ===== */

/* Mpp::control_dec(MpiCmd, void*) */

undefined4 Mpp::control_dec(void)

{
  return 0xffffffff;
}



/* ===== Mpp::control_enc @ 0001e868 size=8 ===== */

/* Mpp::control_enc(MpiCmd, void*) */

undefined4 Mpp::control_enc(void)

{
  return 0;
}



/* ===== Mpp::control_isp @ 0001e870 size=164 ===== */

/* Mpp::control_isp(MpiCmd, void*) */

undefined4 Mpp::control_isp(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = DAT_0001e914 + 0x1e888;
  if (param_2 < 0x330001) {
    iVar2 = DAT_0001e92c + 0x1e8f4;
    uVar6 = 0x232;
    iVar4 = DAT_0001e930 + 0x1e900;
    iVar3 = DAT_0001e934 + 0x1e90c;
    iVar1 = DAT_0001e938 + 0x1e910;
  }
  else {
    iVar2 = DAT_0001e918 + 0x1e8a0;
    uVar6 = 0x233;
    iVar4 = DAT_0001e91c + 0x1e8ac;
    iVar3 = DAT_0001e920 + 0x1e8b8;
    iVar1 = DAT_0001e924 + 0x1e8bc;
  }
  _mpp_err(iVar1,iVar3,0,iVar4,iVar2,uVar6);
  if ((**(uint **)(iVar5 + DAT_0001e928) & 0x10000000) == 0) {
    return 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== Mpp::notify @ 0001e93c size=8 ===== */

/* Mpp::notify(unsigned int) */

undefined4 Mpp::notify(uint param_1)

{
  return 0xffffffff;
}



/* ===== Mpp::notify @ 0001e944 size=52 ===== */

/* Mpp::notify(void*) */

undefined4 __thiscall Mpp::notify(Mpp *this,void *param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 100) == 0) && (*(void **)(this + 0x28) == param_1)) {
                    /* WARNING: Could not recover jumptable at 0x0001c8a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_notify_0004a1c4)(this,0x440);
    return uVar1;
  }
  return 0xffffffff;
}



/* ===== Mpp::get_fd @ 0001e96c size=52 ===== */

/* Mpp::get_fd(int*) */

int __thiscall Mpp::get_fd(Mpp *this,int *param_1)

{
  int iVar1;
  
  if (*(int *)(this + 0x7c) < 0) {
    *param_1 = -1;
    return -1;
  }
  iVar1 = dup(*(int *)(this + 0x7c));
  *param_1 = iVar1;
  return iVar1 >> 0x1f;
}



/* ===== Mpp::close_fd @ 0001e9a0 size=32 ===== */

/* Mpp::close_fd(int) */

undefined4 __thiscall Mpp::close_fd(Mpp *this,int param_1)

{
  if (param_1 < 0) {
    return 0;
  }
  close(param_1);
  return 0;
}



/* ===== FUN_0001e9c0 @ 0001e9c0 size=492 ===== */

int FUN_0001e9c0(int *param_1,int param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  void **ppvVar4;
  void *pvVar5;
  int iVar6;
  uint *puVar7;
  
  iVar6 = DAT_0001ebac + 0x1e9e0;
  puVar7 = *(uint **)(iVar6 + DAT_0001ebb0);
  if ((*puVar7 & 1) != 0) {
    _mpp_log(DAT_0001ebbc + 0x1ead8,DAT_0001ebb8 + 0x1ead4,DAT_0001ebb4 + 0x1ead0,param_1,param_2,
             param_3);
  }
  ppvVar4 = (void **)param_1[4];
  if ((int *)*param_1 == param_1 && ppvVar4 != (void **)0x0) {
    if (param_3 != (int *)0x0 && param_2 != 0) {
      pvVar5 = ppvVar4[0x13];
      *param_3 = 0;
      bVar1 = false;
      if (pvVar5 == (void *)0x0) goto LAB_0001ea60;
LAB_0001ea38:
      do {
        iVar2 = Mpp::put_packet(ppvVar4);
        bVar1 = true;
        if (iVar2 != 0) {
          bVar1 = false;
          if (ppvVar4[0x13] != (void *)0x0) goto LAB_0001ea38;
        }
LAB_0001ea60:
        iVar2 = Mpp::get_frame(ppvVar4);
        if (((iVar2 != 0) || (*param_3 != 0)) || (bVar1)) goto LAB_0001ea88;
      } while( true );
    }
    iVar2 = -3;
    _mpp_err(DAT_0001ebf4 + 0x1eba8,DAT_0001ebf0 + 0x1eba4,DAT_0001ebec + 0x1eb9c,param_2,param_3);
  }
  else {
    iVar2 = -2;
    _mpp_err(DAT_0001ebe8 + 0x1eb7c,DAT_0001ebe4 + 0x1eb78,DAT_0001ebe0 + 0x1eb74,param_1);
  }
LAB_0001ea88:
  iVar3 = mpp_packet_get_length(param_2);
  if ((iVar3 != 0) &&
     (_mpp_err(DAT_0001ebd8 + 0x1eb40,DAT_0001ebd4 + 0x1eb3c,0,DAT_0001ebd0 + 0x1eb30,
               DAT_0001ebcc + 0x1eb24,0x84), (**(uint **)(iVar6 + DAT_0001ebdc) & 0x10000000) != 0))
  {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((*puVar7 & 1) == 0) {
    return iVar2;
  }
  _mpp_log(DAT_0001ebc8 + 0x1eb00,DAT_0001ebc4 + 0x1eafc,DAT_0001ebc0 + 0x1eaf4,param_1,iVar2);
  return iVar2;
}



/* ===== mpp_create_ext @ 0001fcbc size=432 ===== */

undefined4 mpp_create_ext(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  Mpp *this;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  
  puVar4 = *(uint **)(DAT_0001fe6c + 0x1fccc + DAT_0001fe70);
  mpp_env_get_u32(DAT_0001fe74 + 0x1fcf0,puVar4,0);
  if (param_1 == (undefined4 *)0x0 || param_2 == (undefined4 *)0x0) {
    uVar2 = 0xfffffffd;
    _mpp_err(DAT_0001fea8 + 0x1fe68,DAT_0001fea4 + 0x1fe64,DAT_0001fea0 + 0x1fe5c,param_1,param_2);
  }
  else {
    uVar3 = *puVar4;
    *param_1 = 0;
    *param_2 = 0;
    if ((uVar3 & 1) != 0) {
      _mpp_log(DAT_0001fe88 + 0x1fdd8,DAT_0001fe84 + 0x1fdd4,DAT_0001fe80 + 0x1fdcc,param_1,param_2)
      ;
    }
    iVar5 = DAT_0001fe78 + 0x1fd30;
    puVar1 = (undefined4 *)mpp_osal_malloc(iVar5,0x14);
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = 0xfffffffc;
      _mpp_err(DAT_0001fe9c + 0x1fe3c,DAT_0001fe98 + 0x1fe38,iVar5);
    }
    else {
      *puVar1 = 0;
      puVar1[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      puVar1[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      puVar1[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      puVar1[3] = 0;
      puVar1[4] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      this = operator_new(0x100);
      Mpp::Mpp(this,puVar1);
      puVar1[4] = this;
      uVar2 = Mpp::open_client(this);
      iVar5 = DAT_0001fe7c;
      puVar1[3] = DAT_0001fe7c + 0x1fd7c;
      *(undefined4 *)(iVar5 + 0x1fd80) = 0;
      *puVar1 = puVar1;
      *param_1 = puVar1;
      *param_2 = puVar1[3];
    }
    if (param_3 != 0) {
      show_mpp_version();
    }
    if ((*puVar4 & 1) != 0) {
      _mpp_log(DAT_0001fe94 + 0x1fe0c,DAT_0001fe90 + 0x1fe08,DAT_0001fe8c + 0x1fdfc,uVar2,*param_1,
               *param_2);
      return uVar2;
    }
  }
  return uVar2;
}



/* ===== mpp_create @ 0001feac size=20 ===== */

void mpp_create(undefined4 param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001c68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_mpp_create_ext_0004a110)(param_1,param_2,1);
  return;
}



/* ===== mpp_init @ 0001feb4 size=332 ===== */

undefined4 mpp_init(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(DAT_00020000 + 0x1fecc + DAT_00020004);
  if ((*puVar2 & 1) != 0) {
    _mpp_log(DAT_00020010 + 0x1ff78,DAT_0002000c + 0x1ff74,DAT_00020008 + 0x1ff70,param_1,param_2,
             param_3);
  }
  if (((param_1 == (int *)0x0) || (param_1 != (int *)*param_1)) || ((Mpp *)param_1[4] == (Mpp *)0x0)
     ) {
    uVar1 = 0xfffffffe;
    _mpp_err(DAT_00020028 + 0x1ffd0,DAT_00020024 + 0x1ffcc,DAT_00020020 + 0x1ffc8,param_1);
  }
  else if (param_2 < 3 && param_3 != 0x7fffffff) {
    uVar1 = Mpp::init((Mpp *)param_1[4],param_2,param_3);
    param_1[1] = param_2;
    param_1[2] = param_3;
  }
  else {
    uVar1 = 0xfffffffe;
    _mpp_err(DAT_00020034 + 0x1fffc,DAT_00020030 + 0x1fff8,DAT_0002002c + 0x1fff0,param_2,param_3);
  }
  if ((*puVar2 & 1) != 0) {
    _mpp_log(DAT_0002001c + 0x1ffa0,DAT_00020018 + 0x1ff9c,DAT_00020014 + 0x1ff94,param_1,uVar1);
    return uVar1;
  }
  return uVar1;
}



/* ===== mpp_init_ext @ 00020038 size=352 ===== */

undefined4 mpp_init_ext(int *param_1,vcodec_attr_t *param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(DAT_00020198 + 0x20048 + DAT_0002019c);
  if ((*puVar2 & 1) != 0) {
    _mpp_log(DAT_000201a8 + 0x20110,DAT_000201a4 + 0x2010c,DAT_000201a0 + 0x20108,param_1,
             *(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  }
  if (((param_1 == (int *)0x0) || (param_1 != (int *)*param_1)) || ((Mpp *)param_1[4] == (Mpp *)0x0)
     ) {
    uVar1 = 0xfffffffe;
    _mpp_err(DAT_000201cc + 0x20194,DAT_000201c8 + 0x20190,DAT_000201c4 + 0x2018c,param_1);
  }
  else if (((*(int *)param_2 < 3) && (*(int *)(param_2 + 4) != 0x7fffffff)) &&
          (-1 < *(int *)(param_2 + 8))) {
    uVar1 = Mpp::init_ext((Mpp *)param_1[4],param_2);
    *(undefined8 *)(param_1 + 1) = *(undefined8 *)param_2;
  }
  else {
    uVar1 = 0xfffffffe;
    _mpp_err(DAT_000201c0 + 0x2016c,DAT_000201b8 + 0x20164,DAT_000201bc + 0x20168,*(int *)param_2,
             *(int *)(param_2 + 4),*(int *)(param_2 + 8));
  }
  if ((*puVar2 & 1) == 0) {
    return uVar1;
  }
  _mpp_log(DAT_000201b4 + 0x20138,DAT_000201b0 + 0x20134,DAT_000201ac + 0x2012c,param_1,uVar1);
  return uVar1;
}



/* ===== mpp_destroy @ 000201d0 size=256 ===== */

undefined4 mpp_destroy(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  Mpp *this;
  uint *puVar3;
  
  puVar3 = *(uint **)(DAT_000202d0 + 0x201e0 + DAT_000202d4);
  if ((*puVar3 & 1) != 0) {
    _mpp_log(DAT_000202e4 + 0x20274,DAT_000202e0 + 0x20270,DAT_000202dc + 0x2026c,param_1);
  }
  iVar1 = DAT_000202d8;
  if (((param_1 == (int *)0x0) || (param_1 != (int *)*param_1)) ||
     (this = (Mpp *)param_1[4], this == (Mpp *)0x0)) {
    _mpp_err(DAT_000202f8 + 0x202c8,DAT_000202f4 + 0x202c4,DAT_000202f0 + 0x202c0,param_1);
    uVar2 = 0xfffffffe;
  }
  else {
    Mpp::~Mpp(this);
    operator_delete(this,0x100);
    mpp_osal_free(iVar1 + 0x20230,param_1);
    uVar2 = 0;
    if ((*puVar3 & 1) != 0) {
      _mpp_log(DAT_000202ec + 0x2029c,DAT_000202e8 + 0x20294,iVar1 + 0x20230,param_1,0);
      return 0;
    }
  }
  return uVar2;
}



/* ===== mpp_get_fd @ 000202fc size=236 ===== */

undefined4 mpp_get_fd(int *param_1,int *param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(DAT_000203e8 + 0x2030c + DAT_000203ec);
  if ((*puVar2 & 1) != 0) {
    _mpp_log(DAT_000203f8 + 0x2038c,DAT_000203f4 + 0x20388,DAT_000203f0 + 0x20384,param_1);
  }
  if (((param_1 == (int *)0x0) || (param_1 != (int *)*param_1)) || ((Mpp *)param_1[4] == (Mpp *)0x0)
     ) {
    uVar1 = 0xfffffffe;
    _mpp_err(DAT_00020410 + 0x203e4,DAT_0002040c + 0x203e0,DAT_00020408 + 0x203dc,param_1);
  }
  else {
    uVar1 = Mpp::get_fd((Mpp *)param_1[4],param_2);
  }
  if ((*puVar2 & 1) == 0) {
    return uVar1;
  }
  _mpp_log(DAT_00020404 + 0x203b4,DAT_00020400 + 0x203b0,DAT_000203fc + 0x203a8,param_1,uVar1);
  return uVar1;
}



/* ===== mpp_close_fd @ 00020414 size=236 ===== */

undefined4 mpp_close_fd(int *param_1,int param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(DAT_00020500 + 0x20424 + DAT_00020504);
  if ((*puVar2 & 1) != 0) {
    _mpp_log(DAT_00020510 + 0x204a4,DAT_0002050c + 0x204a0,DAT_00020508 + 0x2049c,param_1);
  }
  if (((param_1 == (int *)0x0) || (param_1 != (int *)*param_1)) || ((Mpp *)param_1[4] == (Mpp *)0x0)
     ) {
    uVar1 = 0xfffffffe;
    _mpp_err(DAT_00020528 + 0x204fc,DAT_00020524 + 0x204f8,DAT_00020520 + 0x204f4,param_1);
  }
  else {
    uVar1 = Mpp::close_fd((Mpp *)param_1[4],param_2);
  }
  if ((*puVar2 & 1) == 0) {
    return uVar1;
  }
  _mpp_log(DAT_0002051c + 0x204cc,DAT_00020518 + 0x204c8,DAT_00020514 + 0x204c0,param_1,uVar1);
  return uVar1;
}



/* ===== mpp_check_support_format @ 0002052c size=64 ===== */

undefined4 mpp_check_support_format(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 != 1) {
    return 0xffffffff;
  }
  if ((param_2 != 7) && (param_2 != 8)) {
    if (param_2 == 0x1000004) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffffff;
    }
    return uVar1;
  }
  return 0;
}



/* ===== mpp_show_support_format @ 0002056c size=116 ===== */

void mpp_show_support_format(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar1 = DAT_000205e0 + 0x20580;
  _mpp_log(iVar1,DAT_000205e4 + 0x20588,0);
  iVar5 = DAT_000205ec + 0x205a4;
  puVar4 = (undefined4 *)(DAT_000205e8 + 0x205d0);
  puVar2 = (undefined4 *)(DAT_000205e8 + 0x205a0);
  do {
    puVar3 = puVar2 + 4;
    _mpp_log(iVar1,iVar5,0,puVar2[2],*puVar2,puVar2[3],puVar2[1]);
    puVar2 = puVar3;
  } while (puVar3 != puVar4);
  return;
}



/* ===== mpp_show_color_format @ 000205f0 size=104 ===== */

void mpp_show_color_format(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar2 = DAT_00020658 + 0x20604;
  _mpp_log(iVar2,DAT_0002065c + 0x2060c,0);
  puVar4 = (undefined4 *)(DAT_00020660 + 0x20624);
  iVar6 = DAT_00020664 + 0x20628;
  puVar5 = (undefined4 *)(DAT_00020660 + 0x206cc);
  do {
    uVar3 = *puVar4;
    puVar1 = puVar4 + 1;
    puVar4 = puVar4 + 2;
    _mpp_log(iVar2,iVar6,0,uVar3,uVar3,*puVar1);
  } while (puVar5 != puVar4);
  return;
}



/* ===== set_base_low_delay @ 00020668 size=180 ===== */

/* set_base_low_delay(void*, MppCfgApi_t*, int) */

undefined4 set_base_low_delay(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_0002071c + 0x20680 + DAT_00020720) & 1) != 0) {
    _mpp_log(DAT_0002072c + 0x206ec,DAT_00020728 + 0x206e8,DAT_00020724 + 0x206e4);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 1;
  return 0;
}



/* ===== get_base_low_delay @ 00020730 size=108 ===== */

/* get_base_low_delay(void*, MppCfgApi_t*, int*) */

undefined4 get_base_low_delay(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_0002079c + 0x20748 + DAT_000207a0) & 1) != 0) {
    _mpp_log(DAT_000207ac + 0x20798,DAT_000207a8 + 0x20794,DAT_000207a4 + 0x20790);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_mode @ 000207b0 size=180 ===== */

/* set_rc_mode(void*, MppCfgApi_t*, MppEncRcMode_e) */

undefined4 set_rc_mode(int param_1,int param_2,undefined4 param_3)

{
  uint __n;
  int iVar1;
  void *__s1;
  undefined4 local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00020864 + 0x207c8 + DAT_00020868) & 1) != 0) {
    _mpp_log(DAT_00020874 + 0x20834,DAT_00020870 + 0x20830,DAT_0002086c + 0x2082c);
  }
  __n = (uint)(*(ushort *)(param_2 + 4) >> 4);
  __s1 = (void *)(param_1 + (uint)*(ushort *)(param_2 + 6));
  iVar1 = memcmp(__s1,&local_1c,__n);
  if (iVar1 == 0) {
    return 0;
  }
  memcpy(__s1,&local_1c,__n);
  *(uint *)(param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)(param_1 + (uint)*(ushort *)(param_2 + 10)) | 1;
  return 0;
}



/* ===== get_rc_mode @ 00020878 size=108 ===== */

/* get_rc_mode(void*, MppCfgApi_t*, MppEncRcMode_e*) */

undefined4 get_rc_mode(void *param_1,MppCfgApi_t *param_2,MppEncRcMode_e *param_3)

{
  if ((**(uint **)(DAT_000208e4 + 0x20890 + DAT_000208e8) & 1) != 0) {
    _mpp_log(DAT_000208f4 + 0x208e0,DAT_000208f0 + 0x208dc,DAT_000208ec + 0x208d8);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_bps_target @ 000208f8 size=180 ===== */

/* set_rc_bps_target(void*, MppCfgApi_t*, int) */

undefined4 set_rc_bps_target(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_000209ac + 0x20910 + DAT_000209b0) & 1) != 0) {
    _mpp_log(DAT_000209bc + 0x2097c,DAT_000209b8 + 0x20978,DAT_000209b4 + 0x20974);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 4;
  return 0;
}



/* ===== get_rc_bps_target @ 000209c0 size=108 ===== */

/* get_rc_bps_target(void*, MppCfgApi_t*, int*) */

undefined4 get_rc_bps_target(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00020a2c + 0x209d8 + DAT_00020a30) & 1) != 0) {
    _mpp_log(DAT_00020a3c + 0x20a28,DAT_00020a38 + 0x20a24,DAT_00020a34 + 0x20a20);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_bps_max @ 00020a40 size=180 ===== */

/* set_rc_bps_max(void*, MppCfgApi_t*, int) */

undefined4 set_rc_bps_max(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00020af4 + 0x20a58 + DAT_00020af8) & 1) != 0) {
    _mpp_log(DAT_00020b04 + 0x20ac4,DAT_00020b00 + 0x20ac0,DAT_00020afc + 0x20abc);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 4;
  return 0;
}



/* ===== get_rc_bps_max @ 00020b08 size=108 ===== */

/* get_rc_bps_max(void*, MppCfgApi_t*, int*) */

undefined4 get_rc_bps_max(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00020b74 + 0x20b20 + DAT_00020b78) & 1) != 0) {
    _mpp_log(DAT_00020b84 + 0x20b70,DAT_00020b80 + 0x20b6c,DAT_00020b7c + 0x20b68);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_bps_min @ 00020b88 size=180 ===== */

/* set_rc_bps_min(void*, MppCfgApi_t*, int) */

undefined4 set_rc_bps_min(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00020c3c + 0x20ba0 + DAT_00020c40) & 1) != 0) {
    _mpp_log(DAT_00020c4c + 0x20c0c,DAT_00020c48 + 0x20c08,DAT_00020c44 + 0x20c04);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 4;
  return 0;
}



/* ===== get_rc_bps_min @ 00020c50 size=108 ===== */

/* get_rc_bps_min(void*, MppCfgApi_t*, int*) */

undefined4 get_rc_bps_min(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00020cbc + 0x20c68 + DAT_00020cc0) & 1) != 0) {
    _mpp_log(DAT_00020ccc + 0x20cb8,DAT_00020cc8 + 0x20cb4,DAT_00020cc4 + 0x20cb0);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_fps_in_flex @ 00020cd0 size=180 ===== */

/* set_rc_fps_in_flex(void*, MppCfgApi_t*, int) */

undefined4 set_rc_fps_in_flex(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00020d84 + 0x20ce8 + DAT_00020d88) & 1) != 0) {
    _mpp_log(DAT_00020d94 + 0x20d54,DAT_00020d90 + 0x20d50,DAT_00020d8c + 0x20d4c);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x20;
  return 0;
}



/* ===== get_rc_fps_in_flex @ 00020d98 size=108 ===== */

/* get_rc_fps_in_flex(void*, MppCfgApi_t*, int*) */

undefined4 get_rc_fps_in_flex(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00020e04 + 0x20db0 + DAT_00020e08) & 1) != 0) {
    _mpp_log(DAT_00020e14 + 0x20e00,DAT_00020e10 + 0x20dfc,DAT_00020e0c + 0x20df8);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_fps_in_num @ 00020e18 size=180 ===== */

/* set_rc_fps_in_num(void*, MppCfgApi_t*, int) */

undefined4 set_rc_fps_in_num(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00020ecc + 0x20e30 + DAT_00020ed0) & 1) != 0) {
    _mpp_log(DAT_00020edc + 0x20e9c,DAT_00020ed8 + 0x20e98,DAT_00020ed4 + 0x20e94);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x20;
  return 0;
}



/* ===== get_rc_fps_in_num @ 00020ee0 size=108 ===== */

/* get_rc_fps_in_num(void*, MppCfgApi_t*, int*) */

undefined4 get_rc_fps_in_num(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00020f4c + 0x20ef8 + DAT_00020f50) & 1) != 0) {
    _mpp_log(DAT_00020f5c + 0x20f48,DAT_00020f58 + 0x20f44,DAT_00020f54 + 0x20f40);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_fps_in_denorm @ 00020f60 size=180 ===== */

/* set_rc_fps_in_denorm(void*, MppCfgApi_t*, int) */

undefined4 set_rc_fps_in_denorm(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00021014 + 0x20f78 + DAT_00021018) & 1) != 0) {
    _mpp_log(DAT_00021024 + 0x20fe4,DAT_00021020 + 0x20fe0,DAT_0002101c + 0x20fdc);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x20;
  return 0;
}



/* ===== get_rc_fps_in_denorm @ 00021028 size=108 ===== */

/* get_rc_fps_in_denorm(void*, MppCfgApi_t*, int*) */

undefined4 get_rc_fps_in_denorm(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00021094 + 0x21040 + DAT_00021098) & 1) != 0) {
    _mpp_log(DAT_000210a4 + 0x21090,DAT_000210a0 + 0x2108c,DAT_0002109c + 0x21088);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_fps_out_flex @ 000210a8 size=180 ===== */

/* set_rc_fps_out_flex(void*, MppCfgApi_t*, int) */

undefined4 set_rc_fps_out_flex(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_0002115c + 0x210c0 + DAT_00021160) & 1) != 0) {
    _mpp_log(DAT_0002116c + 0x2112c,DAT_00021168 + 0x21128,DAT_00021164 + 0x21124);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x40;
  return 0;
}



/* ===== get_rc_fps_out_flex @ 00021170 size=108 ===== */

/* get_rc_fps_out_flex(void*, MppCfgApi_t*, int*) */

undefined4 get_rc_fps_out_flex(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_000211dc + 0x21188 + DAT_000211e0) & 1) != 0) {
    _mpp_log(DAT_000211ec + 0x211d8,DAT_000211e8 + 0x211d4,DAT_000211e4 + 0x211d0);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_fps_out_num @ 000211f0 size=180 ===== */

/* set_rc_fps_out_num(void*, MppCfgApi_t*, int) */

undefined4 set_rc_fps_out_num(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_000212a4 + 0x21208 + DAT_000212a8) & 1) != 0) {
    _mpp_log(DAT_000212b4 + 0x21274,DAT_000212b0 + 0x21270,DAT_000212ac + 0x2126c);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x40;
  return 0;
}



/* ===== get_rc_fps_out_num @ 000212b8 size=108 ===== */

/* get_rc_fps_out_num(void*, MppCfgApi_t*, int*) */

undefined4 get_rc_fps_out_num(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00021324 + 0x212d0 + DAT_00021328) & 1) != 0) {
    _mpp_log(DAT_00021334 + 0x21320,DAT_00021330 + 0x2131c,DAT_0002132c + 0x21318);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_fps_out_denorm @ 00021338 size=180 ===== */

/* set_rc_fps_out_denorm(void*, MppCfgApi_t*, int) */

undefined4 set_rc_fps_out_denorm(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_000213ec + 0x21350 + DAT_000213f0) & 1) != 0) {
    _mpp_log(DAT_000213fc + 0x213bc,DAT_000213f8 + 0x213b8,DAT_000213f4 + 0x213b4);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x40;
  return 0;
}



/* ===== get_rc_fps_out_denorm @ 00021400 size=108 ===== */

/* get_rc_fps_out_denorm(void*, MppCfgApi_t*, int*) */

undefined4 get_rc_fps_out_denorm(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_0002146c + 0x21418 + DAT_00021470) & 1) != 0) {
    _mpp_log(DAT_0002147c + 0x21468,DAT_00021478 + 0x21464,DAT_00021474 + 0x21460);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_gop @ 00021480 size=180 ===== */

/* set_rc_gop(void*, MppCfgApi_t*, int) */

undefined4 set_rc_gop(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00021534 + 0x21498 + DAT_00021538) & 1) != 0) {
    _mpp_log(DAT_00021544 + 0x21504,DAT_00021540 + 0x21500,DAT_0002153c + 0x214fc);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x80;
  return 0;
}



/* ===== get_rc_gop @ 00021548 size=108 ===== */

/* get_rc_gop(void*, MppCfgApi_t*, int*) */

undefined4 get_rc_gop(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_000215b4 + 0x21560 + DAT_000215b8) & 1) != 0) {
    _mpp_log(DAT_000215c4 + 0x215b0,DAT_000215c0 + 0x215ac,DAT_000215bc + 0x215a8);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_max_reenc_times @ 000215c8 size=180 ===== */

/* set_rc_max_reenc_times(void*, MppCfgApi_t*, unsigned int) */

undefined4 set_rc_max_reenc_times(void *param_1,MppCfgApi_t *param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_0002167c + 0x215e0 + DAT_00021680) & 1) != 0) {
    _mpp_log(DAT_0002168c + 0x2164c,DAT_00021688 + 0x21648,DAT_00021684 + 0x21644);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x200;
  return 0;
}



/* ===== get_rc_max_reenc_times @ 00021690 size=108 ===== */

/* get_rc_max_reenc_times(void*, MppCfgApi_t*, unsigned int*) */

undefined4 get_rc_max_reenc_times(void *param_1,MppCfgApi_t *param_2,uint *param_3)

{
  if ((**(uint **)(DAT_000216fc + 0x216a8 + DAT_00021700) & 1) != 0) {
    _mpp_log(DAT_0002170c + 0x216f8,DAT_00021708 + 0x216f4,DAT_00021704 + 0x216f0);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_priority @ 00021710 size=180 ===== */

/* set_rc_priority(void*, MppCfgApi_t*, MppEncRcPriority_e) */

undefined4 set_rc_priority(int param_1,int param_2,undefined4 param_3)

{
  uint __n;
  int iVar1;
  void *__s1;
  undefined4 local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_000217c4 + 0x21728 + DAT_000217c8) & 1) != 0) {
    _mpp_log(DAT_000217d4 + 0x21794,DAT_000217d0 + 0x21790,DAT_000217cc + 0x2178c);
  }
  __n = (uint)(*(ushort *)(param_2 + 4) >> 4);
  __s1 = (void *)(param_1 + (uint)*(ushort *)(param_2 + 6));
  iVar1 = memcmp(__s1,&local_1c,__n);
  if (iVar1 == 0) {
    return 0;
  }
  memcpy(__s1,&local_1c,__n);
  *(uint *)(param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)(param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x4000;
  return 0;
}



/* ===== get_rc_priority @ 000217d8 size=108 ===== */

/* get_rc_priority(void*, MppCfgApi_t*, MppEncRcPriority_e*) */

undefined4 get_rc_priority(void *param_1,MppCfgApi_t *param_2,MppEncRcPriority_e *param_3)

{
  if ((**(uint **)(DAT_00021844 + 0x217f0 + DAT_00021848) & 1) != 0) {
    _mpp_log(DAT_00021854 + 0x21840,DAT_00021850 + 0x2183c,DAT_0002184c + 0x21838);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_drop_mode @ 00021858 size=180 ===== */

/* set_rc_drop_mode(void*, MppCfgApi_t*, MppEncRcDropFrmMode_e) */

undefined4 set_rc_drop_mode(int param_1,int param_2,undefined4 param_3)

{
  uint __n;
  int iVar1;
  void *__s1;
  undefined4 local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_0002190c + 0x21870 + DAT_00021910) & 1) != 0) {
    _mpp_log(DAT_0002191c + 0x218dc,DAT_00021918 + 0x218d8,DAT_00021914 + 0x218d4);
  }
  __n = (uint)(*(ushort *)(param_2 + 4) >> 4);
  __s1 = (void *)(param_1 + (uint)*(ushort *)(param_2 + 6));
  iVar1 = memcmp(__s1,&local_1c,__n);
  if (iVar1 == 0) {
    return 0;
  }
  memcpy(__s1,&local_1c,__n);
  *(uint *)(param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)(param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x400;
  return 0;
}



/* ===== get_rc_drop_mode @ 00021920 size=108 ===== */

/* get_rc_drop_mode(void*, MppCfgApi_t*, MppEncRcDropFrmMode_e*) */

undefined4 get_rc_drop_mode(void *param_1,MppCfgApi_t *param_2,MppEncRcDropFrmMode_e *param_3)

{
  if ((**(uint **)(DAT_0002198c + 0x21938 + DAT_00021990) & 1) != 0) {
    _mpp_log(DAT_0002199c + 0x21988,DAT_00021998 + 0x21984,DAT_00021994 + 0x21980);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_drop_thd @ 000219a0 size=180 ===== */

/* set_rc_drop_thd(void*, MppCfgApi_t*, unsigned int) */

undefined4 set_rc_drop_thd(void *param_1,MppCfgApi_t *param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00021a54 + 0x219b8 + DAT_00021a58) & 1) != 0) {
    _mpp_log(DAT_00021a64 + 0x21a24,DAT_00021a60 + 0x21a20,DAT_00021a5c + 0x21a1c);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x400;
  return 0;
}



/* ===== get_rc_drop_thd @ 00021a68 size=108 ===== */

/* get_rc_drop_thd(void*, MppCfgApi_t*, unsigned int*) */

undefined4 get_rc_drop_thd(void *param_1,MppCfgApi_t *param_2,uint *param_3)

{
  if ((**(uint **)(DAT_00021ad4 + 0x21a80 + DAT_00021ad8) & 1) != 0) {
    _mpp_log(DAT_00021ae4 + 0x21ad0,DAT_00021ae0 + 0x21acc,DAT_00021adc + 0x21ac8);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_drop_gap @ 00021ae8 size=180 ===== */

/* set_rc_drop_gap(void*, MppCfgApi_t*, unsigned int) */

undefined4 set_rc_drop_gap(void *param_1,MppCfgApi_t *param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00021b9c + 0x21b00 + DAT_00021ba0) & 1) != 0) {
    _mpp_log(DAT_00021bac + 0x21b6c,DAT_00021ba8 + 0x21b68,DAT_00021ba4 + 0x21b64);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x400;
  return 0;
}



/* ===== get_rc_drop_gap @ 00021bb0 size=108 ===== */

/* get_rc_drop_gap(void*, MppCfgApi_t*, unsigned int*) */

undefined4 get_rc_drop_gap(void *param_1,MppCfgApi_t *param_2,uint *param_3)

{
  if ((**(uint **)(DAT_00021c1c + 0x21bc8 + DAT_00021c20) & 1) != 0) {
    _mpp_log(DAT_00021c2c + 0x21c18,DAT_00021c28 + 0x21c14,DAT_00021c24 + 0x21c10);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_max_i_prop @ 00021c30 size=180 ===== */

/* set_rc_max_i_prop(void*, MppCfgApi_t*, int) */

undefined4 set_rc_max_i_prop(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00021ce4 + 0x21c48 + DAT_00021ce8) & 1) != 0) {
    _mpp_log(DAT_00021cf4 + 0x21cb4,DAT_00021cf0 + 0x21cb0,DAT_00021cec + 0x21cac);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x800;
  return 0;
}



/* ===== get_rc_max_i_prop @ 00021cf8 size=108 ===== */

/* get_rc_max_i_prop(void*, MppCfgApi_t*, int*) */

undefined4 get_rc_max_i_prop(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00021d64 + 0x21d10 + DAT_00021d68) & 1) != 0) {
    _mpp_log(DAT_00021d74 + 0x21d60,DAT_00021d70 + 0x21d5c,DAT_00021d6c + 0x21d58);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_min_i_prop @ 00021d78 size=180 ===== */

/* set_rc_min_i_prop(void*, MppCfgApi_t*, int) */

undefined4 set_rc_min_i_prop(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00021e2c + 0x21d90 + DAT_00021e30) & 1) != 0) {
    _mpp_log(DAT_00021e3c + 0x21dfc,DAT_00021e38 + 0x21df8,DAT_00021e34 + 0x21df4);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x1000;
  return 0;
}



/* ===== get_rc_min_i_prop @ 00021e40 size=108 ===== */

/* get_rc_min_i_prop(void*, MppCfgApi_t*, int*) */

undefined4 get_rc_min_i_prop(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00021eac + 0x21e58 + DAT_00021eb0) & 1) != 0) {
    _mpp_log(DAT_00021ebc + 0x21ea8,DAT_00021eb8 + 0x21ea4,DAT_00021eb4 + 0x21ea0);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_init_ip_ratio @ 00021ec0 size=180 ===== */

/* set_rc_init_ip_ratio(void*, MppCfgApi_t*, int) */

undefined4 set_rc_init_ip_ratio(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00021f74 + 0x21ed8 + DAT_00021f78) & 1) != 0) {
    _mpp_log(DAT_00021f84 + 0x21f44,DAT_00021f80 + 0x21f40,DAT_00021f7c + 0x21f3c);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x2000;
  return 0;
}



/* ===== get_rc_init_ip_ratio @ 00021f88 size=108 ===== */

/* get_rc_init_ip_ratio(void*, MppCfgApi_t*, int*) */

undefined4 get_rc_init_ip_ratio(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00021ff4 + 0x21fa0 + DAT_00021ff8) & 1) != 0) {
    _mpp_log(DAT_00022004 + 0x21ff0,DAT_00022000 + 0x21fec,DAT_00021ffc + 0x21fe8);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_super_mode @ 00022008 size=180 ===== */

/* set_rc_super_mode(void*, MppCfgApi_t*, MppEncRcSuperFrameMode_t) */

undefined4 set_rc_super_mode(int param_1,int param_2,undefined4 param_3)

{
  uint __n;
  int iVar1;
  void *__s1;
  undefined4 local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_000220bc + 0x22020 + DAT_000220c0) & 1) != 0) {
    _mpp_log(DAT_000220cc + 0x2208c,DAT_000220c8 + 0x22088,DAT_000220c4 + 0x22084);
  }
  __n = (uint)(*(ushort *)(param_2 + 4) >> 4);
  __s1 = (void *)(param_1 + (uint)*(ushort *)(param_2 + 6));
  iVar1 = memcmp(__s1,&local_1c,__n);
  if (iVar1 == 0) {
    return 0;
  }
  memcpy(__s1,&local_1c,__n);
  *(uint *)(param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)(param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x8000;
  return 0;
}



/* ===== get_rc_super_mode @ 000220d0 size=108 ===== */

/* get_rc_super_mode(void*, MppCfgApi_t*, MppEncRcSuperFrameMode_t*) */

undefined4 get_rc_super_mode(void *param_1,MppCfgApi_t *param_2,MppEncRcSuperFrameMode_t *param_3)

{
  if ((**(uint **)(DAT_0002213c + 0x220e8 + DAT_00022140) & 1) != 0) {
    _mpp_log(DAT_0002214c + 0x22138,DAT_00022148 + 0x22134,DAT_00022144 + 0x22130);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_super_i_thd @ 00022150 size=180 ===== */

/* set_rc_super_i_thd(void*, MppCfgApi_t*, unsigned int) */

undefined4 set_rc_super_i_thd(void *param_1,MppCfgApi_t *param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00022204 + 0x22168 + DAT_00022208) & 1) != 0) {
    _mpp_log(DAT_00022214 + 0x221d4,DAT_00022210 + 0x221d0,DAT_0002220c + 0x221cc);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x8000;
  return 0;
}



/* ===== get_rc_super_i_thd @ 00022218 size=108 ===== */

/* get_rc_super_i_thd(void*, MppCfgApi_t*, unsigned int*) */

undefined4 get_rc_super_i_thd(void *param_1,MppCfgApi_t *param_2,uint *param_3)

{
  if ((**(uint **)(DAT_00022284 + 0x22230 + DAT_00022288) & 1) != 0) {
    _mpp_log(DAT_00022294 + 0x22280,DAT_00022290 + 0x2227c,DAT_0002228c + 0x22278);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_super_p_thd @ 00022298 size=180 ===== */

/* set_rc_super_p_thd(void*, MppCfgApi_t*, unsigned int) */

undefined4 set_rc_super_p_thd(void *param_1,MppCfgApi_t *param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_0002234c + 0x222b0 + DAT_00022350) & 1) != 0) {
    _mpp_log(DAT_0002235c + 0x2231c,DAT_00022358 + 0x22318,DAT_00022354 + 0x22314);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x8000;
  return 0;
}



/* ===== get_rc_super_p_thd @ 00022360 size=108 ===== */

/* get_rc_super_p_thd(void*, MppCfgApi_t*, unsigned int*) */

undefined4 get_rc_super_p_thd(void *param_1,MppCfgApi_t *param_2,uint *param_3)

{
  if ((**(uint **)(DAT_000223cc + 0x22378 + DAT_000223d0) & 1) != 0) {
    _mpp_log(DAT_000223dc + 0x223c8,DAT_000223d8 + 0x223c4,DAT_000223d4 + 0x223c0);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_debreath_en @ 000223e0 size=180 ===== */

/* set_rc_debreath_en(void*, MppCfgApi_t*, unsigned int) */

undefined4 set_rc_debreath_en(void *param_1,MppCfgApi_t *param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00022494 + 0x223f8 + DAT_00022498) & 1) != 0) {
    _mpp_log(DAT_000224a4 + 0x22464,DAT_000224a0 + 0x22460,DAT_0002249c + 0x2245c);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x1000000;
  return 0;
}



/* ===== get_rc_debreath_en @ 000224a8 size=108 ===== */

/* get_rc_debreath_en(void*, MppCfgApi_t*, unsigned int*) */

undefined4 get_rc_debreath_en(void *param_1,MppCfgApi_t *param_2,uint *param_3)

{
  if ((**(uint **)(DAT_00022514 + 0x224c0 + DAT_00022518) & 1) != 0) {
    _mpp_log(DAT_00022524 + 0x22510,DAT_00022520 + 0x2250c,DAT_0002251c + 0x22508);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_debreath_strength @ 00022528 size=180 ===== */

/* set_rc_debreath_strength(void*, MppCfgApi_t*, unsigned int) */

undefined4 set_rc_debreath_strength(void *param_1,MppCfgApi_t *param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_000225dc + 0x22540 + DAT_000225e0) & 1) != 0) {
    _mpp_log(DAT_000225ec + 0x225ac,DAT_000225e8 + 0x225a8,DAT_000225e4 + 0x225a4);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x1000000;
  return 0;
}



/* ===== get_rc_debreath_strength @ 000225f0 size=108 ===== */

/* get_rc_debreath_strength(void*, MppCfgApi_t*, unsigned int*) */

undefined4 get_rc_debreath_strength(void *param_1,MppCfgApi_t *param_2,uint *param_3)

{
  if ((**(uint **)(DAT_0002265c + 0x22608 + DAT_00022660) & 1) != 0) {
    _mpp_log(DAT_0002266c + 0x22658,DAT_00022668 + 0x22654,DAT_00022664 + 0x22650);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_qp_init @ 00022670 size=180 ===== */

/* set_rc_qp_init(void*, MppCfgApi_t*, int) */

undefined4 set_rc_qp_init(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00022724 + 0x22688 + DAT_00022728) & 1) != 0) {
    _mpp_log(DAT_00022734 + 0x226f4,DAT_00022730 + 0x226f0,DAT_0002272c + 0x226ec);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x10000;
  return 0;
}



/* ===== get_rc_qp_init @ 00022738 size=108 ===== */

/* get_rc_qp_init(void*, MppCfgApi_t*, int*) */

undefined4 get_rc_qp_init(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_000227a4 + 0x22750 + DAT_000227a8) & 1) != 0) {
    _mpp_log(DAT_000227b4 + 0x227a0,DAT_000227b0 + 0x2279c,DAT_000227ac + 0x22798);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_qp_min @ 000227b8 size=180 ===== */

/* set_rc_qp_min(void*, MppCfgApi_t*, int) */

undefined4 set_rc_qp_min(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_0002286c + 0x227d0 + DAT_00022870) & 1) != 0) {
    _mpp_log(DAT_0002287c + 0x2283c,DAT_00022878 + 0x22838,DAT_00022874 + 0x22834);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x20000;
  return 0;
}



/* ===== get_rc_qp_min @ 00022880 size=108 ===== */

/* get_rc_qp_min(void*, MppCfgApi_t*, int*) */

undefined4 get_rc_qp_min(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_000228ec + 0x22898 + DAT_000228f0) & 1) != 0) {
    _mpp_log(DAT_000228fc + 0x228e8,DAT_000228f8 + 0x228e4,DAT_000228f4 + 0x228e0);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_qp_max @ 00022900 size=180 ===== */

/* set_rc_qp_max(void*, MppCfgApi_t*, int) */

undefined4 set_rc_qp_max(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_000229b4 + 0x22918 + DAT_000229b8) & 1) != 0) {
    _mpp_log(DAT_000229c4 + 0x22984,DAT_000229c0 + 0x22980,DAT_000229bc + 0x2297c);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x20000;
  return 0;
}



/* ===== get_rc_qp_max @ 000229c8 size=108 ===== */

/* get_rc_qp_max(void*, MppCfgApi_t*, int*) */

undefined4 get_rc_qp_max(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00022a34 + 0x229e0 + DAT_00022a38) & 1) != 0) {
    _mpp_log(DAT_00022a44 + 0x22a30,DAT_00022a40 + 0x22a2c,DAT_00022a3c + 0x22a28);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_qp_min_i @ 00022a48 size=180 ===== */

/* set_rc_qp_min_i(void*, MppCfgApi_t*, int) */

undefined4 set_rc_qp_min_i(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00022afc + 0x22a60 + DAT_00022b00) & 1) != 0) {
    _mpp_log(DAT_00022b0c + 0x22acc,DAT_00022b08 + 0x22ac8,DAT_00022b04 + 0x22ac4);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x40000;
  return 0;
}



/* ===== get_rc_qp_min_i @ 00022b10 size=108 ===== */

/* get_rc_qp_min_i(void*, MppCfgApi_t*, int*) */

undefined4 get_rc_qp_min_i(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00022b7c + 0x22b28 + DAT_00022b80) & 1) != 0) {
    _mpp_log(DAT_00022b8c + 0x22b78,DAT_00022b88 + 0x22b74,DAT_00022b84 + 0x22b70);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_qp_max_i @ 00022b90 size=180 ===== */

/* set_rc_qp_max_i(void*, MppCfgApi_t*, int) */

undefined4 set_rc_qp_max_i(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00022c44 + 0x22ba8 + DAT_00022c48) & 1) != 0) {
    _mpp_log(DAT_00022c54 + 0x22c14,DAT_00022c50 + 0x22c10,DAT_00022c4c + 0x22c0c);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x40000;
  return 0;
}



/* ===== get_rc_qp_max_i @ 00022c58 size=108 ===== */

/* get_rc_qp_max_i(void*, MppCfgApi_t*, int*) */

undefined4 get_rc_qp_max_i(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00022cc4 + 0x22c70 + DAT_00022cc8) & 1) != 0) {
    _mpp_log(DAT_00022cd4 + 0x22cc0,DAT_00022cd0 + 0x22cbc,DAT_00022ccc + 0x22cb8);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_qp_step @ 00022cd8 size=180 ===== */

/* set_rc_qp_step(void*, MppCfgApi_t*, int) */

undefined4 set_rc_qp_step(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00022d8c + 0x22cf0 + DAT_00022d90) & 1) != 0) {
    _mpp_log(DAT_00022d9c + 0x22d5c,DAT_00022d98 + 0x22d58,DAT_00022d94 + 0x22d54);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x80000;
  return 0;
}



/* ===== get_rc_qp_step @ 00022da0 size=108 ===== */

/* get_rc_qp_step(void*, MppCfgApi_t*, int*) */

undefined4 get_rc_qp_step(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00022e0c + 0x22db8 + DAT_00022e10) & 1) != 0) {
    _mpp_log(DAT_00022e1c + 0x22e08,DAT_00022e18 + 0x22e04,DAT_00022e14 + 0x22e00);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_qp_ip @ 00022e20 size=180 ===== */

/* set_rc_qp_ip(void*, MppCfgApi_t*, int) */

undefined4 set_rc_qp_ip(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00022ed4 + 0x22e38 + DAT_00022ed8) & 1) != 0) {
    _mpp_log(DAT_00022ee4 + 0x22ea4,DAT_00022ee0 + 0x22ea0,DAT_00022edc + 0x22e9c);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x100000;
  return 0;
}



/* ===== get_rc_qp_ip @ 00022ee8 size=108 ===== */

/* get_rc_qp_ip(void*, MppCfgApi_t*, int*) */

undefined4 get_rc_qp_ip(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00022f54 + 0x22f00 + DAT_00022f58) & 1) != 0) {
    _mpp_log(DAT_00022f64 + 0x22f50,DAT_00022f60 + 0x22f4c,DAT_00022f5c + 0x22f48);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_qp_vi @ 00022f68 size=180 ===== */

/* set_rc_qp_vi(void*, MppCfgApi_t*, int) */

undefined4 set_rc_qp_vi(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_0002301c + 0x22f80 + DAT_00023020) & 1) != 0) {
    _mpp_log(DAT_0002302c + 0x22fec,DAT_00023028 + 0x22fe8,DAT_00023024 + 0x22fe4);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x200000;
  return 0;
}



/* ===== get_rc_qp_vi @ 00023030 size=108 ===== */

/* get_rc_qp_vi(void*, MppCfgApi_t*, int*) */

undefined4 get_rc_qp_vi(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_0002309c + 0x23048 + DAT_000230a0) & 1) != 0) {
    _mpp_log(DAT_000230ac + 0x23098,DAT_000230a8 + 0x23094,DAT_000230a4 + 0x23090);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_hier_qp_en @ 000230b0 size=180 ===== */

/* set_rc_hier_qp_en(void*, MppCfgApi_t*, int) */

undefined4 set_rc_hier_qp_en(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00023164 + 0x230c8 + DAT_00023168) & 1) != 0) {
    _mpp_log(DAT_00023174 + 0x23134,DAT_00023170 + 0x23130,DAT_0002316c + 0x2312c);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x2000000;
  return 0;
}



/* ===== get_rc_hier_qp_en @ 00023178 size=108 ===== */

/* get_rc_hier_qp_en(void*, MppCfgApi_t*, int*) */

undefined4 get_rc_hier_qp_en(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_000231e4 + 0x23190 + DAT_000231e8) & 1) != 0) {
    _mpp_log(DAT_000231f4 + 0x231e0,DAT_000231f0 + 0x231dc,DAT_000231ec + 0x231d8);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_hier_qp_delta @ 000231f8 size=164 ===== */

/* set_rc_hier_qp_delta(void*, MppCfgApi_t*, int*) */

undefined4 set_rc_hier_qp_delta(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  
  if ((**(uint **)(DAT_0002329c + 0x23210 + DAT_000232a0) & 1) != 0) {
    _mpp_log(DAT_000232ac + 0x23270,DAT_000232a8 + 0x2326c,DAT_000232a4 + 0x23268);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),param_3,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),param_3,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x2000000;
  return 0;
}



/* ===== get_rc_hier_qp_delta @ 000232b0 size=108 ===== */

/* get_rc_hier_qp_delta(void*, MppCfgApi_t*, int**) */

undefined4 get_rc_hier_qp_delta(void *param_1,MppCfgApi_t *param_2,int **param_3)

{
  if ((**(uint **)(DAT_0002331c + 0x232c8 + DAT_00023320) & 1) != 0) {
    _mpp_log(DAT_0002332c + 0x23318,DAT_00023328 + 0x23314,DAT_00023324 + 0x23310);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_hier_frame_num @ 00023330 size=164 ===== */

/* set_rc_hier_frame_num(void*, MppCfgApi_t*, int*) */

undefined4 set_rc_hier_frame_num(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  
  if ((**(uint **)(DAT_000233d4 + 0x23348 + DAT_000233d8) & 1) != 0) {
    _mpp_log(DAT_000233e4 + 0x233a8,DAT_000233e0 + 0x233a4,DAT_000233dc + 0x233a0);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),param_3,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),param_3,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x2000000;
  return 0;
}



/* ===== get_rc_hier_frame_num @ 000233e8 size=108 ===== */

/* get_rc_hier_frame_num(void*, MppCfgApi_t*, int**) */

undefined4 get_rc_hier_frame_num(void *param_1,MppCfgApi_t *param_2,int **param_3)

{
  if ((**(uint **)(DAT_00023454 + 0x23400 + DAT_00023458) & 1) != 0) {
    _mpp_log(DAT_00023464 + 0x23450,DAT_00023460 + 0x2344c,DAT_0002345c + 0x23448);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_stats_time @ 00023468 size=180 ===== */

/* set_rc_stats_time(void*, MppCfgApi_t*, int) */

undefined4 set_rc_stats_time(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_0002351c + 0x23480 + DAT_00023520) & 1) != 0) {
    _mpp_log(DAT_0002352c + 0x234ec,DAT_00023528 + 0x234e8,DAT_00023524 + 0x234e4);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x4000000;
  return 0;
}



/* ===== get_rc_stats_time @ 00023530 size=108 ===== */

/* get_rc_stats_time(void*, MppCfgApi_t*, int*) */

undefined4 get_rc_stats_time(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_0002359c + 0x23548 + DAT_000235a0) & 1) != 0) {
    _mpp_log(DAT_000235ac + 0x23598,DAT_000235a8 + 0x23594,DAT_000235a4 + 0x23590);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_fm_lvl_qp_min_i @ 000235b0 size=180 ===== */

/* set_rc_fm_lvl_qp_min_i(void*, MppCfgApi_t*, int) */

undefined4 set_rc_fm_lvl_qp_min_i(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00023664 + 0x235c8 + DAT_00023668) & 1) != 0) {
    _mpp_log(DAT_00023674 + 0x23634,DAT_00023670 + 0x23630,DAT_0002366c + 0x2362c);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x8000000;
  return 0;
}



/* ===== get_rc_fm_lvl_qp_min_i @ 00023678 size=108 ===== */

/* get_rc_fm_lvl_qp_min_i(void*, MppCfgApi_t*, int*) */

undefined4 get_rc_fm_lvl_qp_min_i(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_000236e4 + 0x23690 + DAT_000236e8) & 1) != 0) {
    _mpp_log(DAT_000236f4 + 0x236e0,DAT_000236f0 + 0x236dc,DAT_000236ec + 0x236d8);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_fm_lvl_qp_min_p @ 000236f8 size=180 ===== */

/* set_rc_fm_lvl_qp_min_p(void*, MppCfgApi_t*, int) */

undefined4 set_rc_fm_lvl_qp_min_p(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_000237ac + 0x23710 + DAT_000237b0) & 1) != 0) {
    _mpp_log(DAT_000237bc + 0x2377c,DAT_000237b8 + 0x23778,DAT_000237b4 + 0x23774);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x8000000;
  return 0;
}



/* ===== get_rc_fm_lvl_qp_min_p @ 000237c0 size=108 ===== */

/* get_rc_fm_lvl_qp_min_p(void*, MppCfgApi_t*, int*) */

undefined4 get_rc_fm_lvl_qp_min_p(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_0002382c + 0x237d8 + DAT_00023830) & 1) != 0) {
    _mpp_log(DAT_0002383c + 0x23828,DAT_00023838 + 0x23824,DAT_00023834 + 0x23820);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_fm_lvl_qp_max_i @ 00023840 size=180 ===== */

/* set_rc_fm_lvl_qp_max_i(void*, MppCfgApi_t*, int) */

undefined4 set_rc_fm_lvl_qp_max_i(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_000238f4 + 0x23858 + DAT_000238f8) & 1) != 0) {
    _mpp_log(DAT_00023904 + 0x238c4,DAT_00023900 + 0x238c0,DAT_000238fc + 0x238bc);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x8000000;
  return 0;
}



/* ===== get_rc_fm_lvl_qp_max_i @ 00023908 size=108 ===== */

/* get_rc_fm_lvl_qp_max_i(void*, MppCfgApi_t*, int*) */

undefined4 get_rc_fm_lvl_qp_max_i(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00023974 + 0x23920 + DAT_00023978) & 1) != 0) {
    _mpp_log(DAT_00023984 + 0x23970,DAT_00023980 + 0x2396c,DAT_0002397c + 0x23968);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_rc_fm_lvl_qp_max_p @ 00023988 size=180 ===== */

/* set_rc_fm_lvl_qp_max_p(void*, MppCfgApi_t*, int) */

undefined4 set_rc_fm_lvl_qp_max_p(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00023a3c + 0x239a0 + DAT_00023a40) & 1) != 0) {
    _mpp_log(DAT_00023a4c + 0x23a0c,DAT_00023a48 + 0x23a08,DAT_00023a44 + 0x23a04);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x8000000;
  return 0;
}



/* ===== get_rc_fm_lvl_qp_max_p @ 00023a50 size=108 ===== */

/* get_rc_fm_lvl_qp_max_p(void*, MppCfgApi_t*, int*) */

undefined4 get_rc_fm_lvl_qp_max_p(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00023abc + 0x23a68 + DAT_00023ac0) & 1) != 0) {
    _mpp_log(DAT_00023acc + 0x23ab8,DAT_00023ac8 + 0x23ab4,DAT_00023ac4 + 0x23ab0);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_prep_width @ 00023ad0 size=180 ===== */

/* set_prep_width(void*, MppCfgApi_t*, int) */

undefined4 set_prep_width(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00023b84 + 0x23ae8 + DAT_00023b88) & 1) != 0) {
    _mpp_log(DAT_00023b94 + 0x23b54,DAT_00023b90 + 0x23b50,DAT_00023b8c + 0x23b4c);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 1;
  return 0;
}



/* ===== get_prep_width @ 00023b98 size=108 ===== */

/* get_prep_width(void*, MppCfgApi_t*, int*) */

undefined4 get_prep_width(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00023c04 + 0x23bb0 + DAT_00023c08) & 1) != 0) {
    _mpp_log(DAT_00023c14 + 0x23c00,DAT_00023c10 + 0x23bfc,DAT_00023c0c + 0x23bf8);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_prep_height @ 00023c18 size=180 ===== */

/* set_prep_height(void*, MppCfgApi_t*, int) */

undefined4 set_prep_height(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00023ccc + 0x23c30 + DAT_00023cd0) & 1) != 0) {
    _mpp_log(DAT_00023cdc + 0x23c9c,DAT_00023cd8 + 0x23c98,DAT_00023cd4 + 0x23c94);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 1;
  return 0;
}



/* ===== get_prep_height @ 00023ce0 size=108 ===== */

/* get_prep_height(void*, MppCfgApi_t*, int*) */

undefined4 get_prep_height(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00023d4c + 0x23cf8 + DAT_00023d50) & 1) != 0) {
    _mpp_log(DAT_00023d5c + 0x23d48,DAT_00023d58 + 0x23d44,DAT_00023d54 + 0x23d40);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_prep_hor_stride @ 00023d60 size=180 ===== */

/* set_prep_hor_stride(void*, MppCfgApi_t*, int) */

undefined4 set_prep_hor_stride(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00023e14 + 0x23d78 + DAT_00023e18) & 1) != 0) {
    _mpp_log(DAT_00023e24 + 0x23de4,DAT_00023e20 + 0x23de0,DAT_00023e1c + 0x23ddc);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 1;
  return 0;
}



/* ===== get_prep_hor_stride @ 00023e28 size=108 ===== */

/* get_prep_hor_stride(void*, MppCfgApi_t*, int*) */

undefined4 get_prep_hor_stride(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00023e94 + 0x23e40 + DAT_00023e98) & 1) != 0) {
    _mpp_log(DAT_00023ea4 + 0x23e90,DAT_00023ea0 + 0x23e8c,DAT_00023e9c + 0x23e88);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_prep_ver_stride @ 00023ea8 size=180 ===== */

/* set_prep_ver_stride(void*, MppCfgApi_t*, int) */

undefined4 set_prep_ver_stride(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00023f5c + 0x23ec0 + DAT_00023f60) & 1) != 0) {
    _mpp_log(DAT_00023f6c + 0x23f2c,DAT_00023f68 + 0x23f28,DAT_00023f64 + 0x23f24);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 1;
  return 0;
}



/* ===== get_prep_ver_stride @ 00023f70 size=108 ===== */

/* get_prep_ver_stride(void*, MppCfgApi_t*, int*) */

undefined4 get_prep_ver_stride(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00023fdc + 0x23f88 + DAT_00023fe0) & 1) != 0) {
    _mpp_log(DAT_00023fec + 0x23fd8,DAT_00023fe8 + 0x23fd4,DAT_00023fe4 + 0x23fd0);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_prep_max_width @ 00023ff0 size=180 ===== */

/* set_prep_max_width(void*, MppCfgApi_t*, int) */

undefined4 set_prep_max_width(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_000240a4 + 0x24008 + DAT_000240a8) & 1) != 0) {
    _mpp_log(DAT_000240b4 + 0x24074,DAT_000240b0 + 0x24070,DAT_000240ac + 0x2406c);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 1;
  return 0;
}



/* ===== get_prep_max_width @ 000240b8 size=108 ===== */

/* get_prep_max_width(void*, MppCfgApi_t*, int*) */

undefined4 get_prep_max_width(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00024124 + 0x240d0 + DAT_00024128) & 1) != 0) {
    _mpp_log(DAT_00024134 + 0x24120,DAT_00024130 + 0x2411c,DAT_0002412c + 0x24118);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_prep_max_height @ 00024138 size=180 ===== */

/* set_prep_max_height(void*, MppCfgApi_t*, int) */

undefined4 set_prep_max_height(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_000241ec + 0x24150 + DAT_000241f0) & 1) != 0) {
    _mpp_log(DAT_000241fc + 0x241bc,DAT_000241f8 + 0x241b8,DAT_000241f4 + 0x241b4);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 1;
  return 0;
}



/* ===== get_prep_max_height @ 00024200 size=108 ===== */

/* get_prep_max_height(void*, MppCfgApi_t*, int*) */

undefined4 get_prep_max_height(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_0002426c + 0x24218 + DAT_00024270) & 1) != 0) {
    _mpp_log(DAT_0002427c + 0x24268,DAT_00024278 + 0x24264,DAT_00024274 + 0x24260);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_prep_format @ 00024280 size=180 ===== */

/* set_prep_format(void*, MppCfgApi_t*, MppFrameFormat) */

undefined4 set_prep_format(int param_1,int param_2,undefined4 param_3)

{
  uint __n;
  int iVar1;
  void *__s1;
  undefined4 local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00024334 + 0x24298 + DAT_00024338) & 1) != 0) {
    _mpp_log(DAT_00024344 + 0x24304,DAT_00024340 + 0x24300,DAT_0002433c + 0x242fc);
  }
  __n = (uint)(*(ushort *)(param_2 + 4) >> 4);
  __s1 = (void *)(param_1 + (uint)*(ushort *)(param_2 + 6));
  iVar1 = memcmp(__s1,&local_1c,__n);
  if (iVar1 == 0) {
    return 0;
  }
  memcpy(__s1,&local_1c,__n);
  *(uint *)(param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)(param_1 + (uint)*(ushort *)(param_2 + 10)) | 4;
  return 0;
}



/* ===== get_prep_format @ 00024348 size=108 ===== */

/* get_prep_format(void*, MppCfgApi_t*, MppFrameFormat*) */

undefined4 get_prep_format(void *param_1,MppCfgApi_t *param_2,MppFrameFormat *param_3)

{
  if ((**(uint **)(DAT_000243b4 + 0x24360 + DAT_000243b8) & 1) != 0) {
    _mpp_log(DAT_000243c4 + 0x243b0,DAT_000243c0 + 0x243ac,DAT_000243bc + 0x243a8);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_prep_colorspace @ 000243c8 size=180 ===== */

/* set_prep_colorspace(void*, MppCfgApi_t*, MppFrameColorSpace) */

undefined4 set_prep_colorspace(int param_1,int param_2,undefined4 param_3)

{
  uint __n;
  int iVar1;
  void *__s1;
  undefined4 local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_0002447c + 0x243e0 + DAT_00024480) & 1) != 0) {
    _mpp_log(DAT_0002448c + 0x2444c,DAT_00024488 + 0x24448,DAT_00024484 + 0x24444);
  }
  __n = (uint)(*(ushort *)(param_2 + 4) >> 4);
  __s1 = (void *)(param_1 + (uint)*(ushort *)(param_2 + 6));
  iVar1 = memcmp(__s1,&local_1c,__n);
  if (iVar1 == 0) {
    return 0;
  }
  memcpy(__s1,&local_1c,__n);
  *(uint *)(param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)(param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x20000;
  return 0;
}



/* ===== get_prep_colorspace @ 00024490 size=108 ===== */

/* get_prep_colorspace(void*, MppCfgApi_t*, MppFrameColorSpace*) */

undefined4 get_prep_colorspace(void *param_1,MppCfgApi_t *param_2,MppFrameColorSpace *param_3)

{
  if ((**(uint **)(DAT_000244fc + 0x244a8 + DAT_00024500) & 1) != 0) {
    _mpp_log(DAT_0002450c + 0x244f8,DAT_00024508 + 0x244f4,DAT_00024504 + 0x244f0);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_prep_colorprim @ 00024510 size=180 ===== */

/* set_prep_colorprim(void*, MppCfgApi_t*, MppFrameColorPrimaries) */

undefined4 set_prep_colorprim(int param_1,int param_2,undefined4 param_3)

{
  uint __n;
  int iVar1;
  void *__s1;
  undefined4 local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_000245c4 + 0x24528 + DAT_000245c8) & 1) != 0) {
    _mpp_log(DAT_000245d4 + 0x24594,DAT_000245d0 + 0x24590,DAT_000245cc + 0x2458c);
  }
  __n = (uint)(*(ushort *)(param_2 + 4) >> 4);
  __s1 = (void *)(param_1 + (uint)*(ushort *)(param_2 + 6));
  iVar1 = memcmp(__s1,&local_1c,__n);
  if (iVar1 == 0) {
    return 0;
  }
  memcpy(__s1,&local_1c,__n);
  *(uint *)(param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)(param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x40000;
  return 0;
}



/* ===== get_prep_colorprim @ 000245d8 size=108 ===== */

/* get_prep_colorprim(void*, MppCfgApi_t*, MppFrameColorPrimaries*) */

undefined4 get_prep_colorprim(void *param_1,MppCfgApi_t *param_2,MppFrameColorPrimaries *param_3)

{
  if ((**(uint **)(DAT_00024644 + 0x245f0 + DAT_00024648) & 1) != 0) {
    _mpp_log(DAT_00024654 + 0x24640,DAT_00024650 + 0x2463c,DAT_0002464c + 0x24638);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_prep_colortrc @ 00024658 size=180 ===== */

/* set_prep_colortrc(void*, MppCfgApi_t*, MppFrameColorTransferCharacteristic) */

undefined4 set_prep_colortrc(int param_1,int param_2,undefined4 param_3)

{
  uint __n;
  int iVar1;
  void *__s1;
  undefined4 local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_0002470c + 0x24670 + DAT_00024710) & 1) != 0) {
    _mpp_log(DAT_0002471c + 0x246dc,DAT_00024718 + 0x246d8,DAT_00024714 + 0x246d4);
  }
  __n = (uint)(*(ushort *)(param_2 + 4) >> 4);
  __s1 = (void *)(param_1 + (uint)*(ushort *)(param_2 + 6));
  iVar1 = memcmp(__s1,&local_1c,__n);
  if (iVar1 == 0) {
    return 0;
  }
  memcpy(__s1,&local_1c,__n);
  *(uint *)(param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)(param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x80000;
  return 0;
}



/* ===== get_prep_colortrc @ 00024720 size=108 ===== */

/* get_prep_colortrc(void*, MppCfgApi_t*, MppFrameColorTransferCharacteristic*) */

undefined4
get_prep_colortrc(void *param_1,MppCfgApi_t *param_2,MppFrameColorTransferCharacteristic *param_3)

{
  if ((**(uint **)(DAT_0002478c + 0x24738 + DAT_00024790) & 1) != 0) {
    _mpp_log(DAT_0002479c + 0x24788,DAT_00024798 + 0x24784,DAT_00024794 + 0x24780);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_prep_colorrange @ 000247a0 size=180 ===== */

/* set_prep_colorrange(void*, MppCfgApi_t*, MppFrameColorRange) */

undefined4 set_prep_colorrange(int param_1,int param_2,undefined4 param_3)

{
  uint __n;
  int iVar1;
  void *__s1;
  undefined4 local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00024854 + 0x247b8 + DAT_00024858) & 1) != 0) {
    _mpp_log(DAT_00024864 + 0x24824,DAT_00024860 + 0x24820,DAT_0002485c + 0x2481c);
  }
  __n = (uint)(*(ushort *)(param_2 + 4) >> 4);
  __s1 = (void *)(param_1 + (uint)*(ushort *)(param_2 + 6));
  iVar1 = memcmp(__s1,&local_1c,__n);
  if (iVar1 == 0) {
    return 0;
  }
  memcpy(__s1,&local_1c,__n);
  *(uint *)(param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)(param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x10000;
  return 0;
}



/* ===== get_prep_colorrange @ 00024868 size=108 ===== */

/* get_prep_colorrange(void*, MppCfgApi_t*, MppFrameColorRange*) */

undefined4 get_prep_colorrange(void *param_1,MppCfgApi_t *param_2,MppFrameColorRange *param_3)

{
  if ((**(uint **)(DAT_000248d4 + 0x24880 + DAT_000248d8) & 1) != 0) {
    _mpp_log(DAT_000248e4 + 0x248d0,DAT_000248e0 + 0x248cc,DAT_000248dc + 0x248c8);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_prep_range @ 000248e8 size=180 ===== */

/* set_prep_range(void*, MppCfgApi_t*, MppFrameColorRange) */

undefined4 set_prep_range(int param_1,int param_2,undefined4 param_3)

{
  uint __n;
  int iVar1;
  void *__s1;
  undefined4 local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_0002499c + 0x24900 + DAT_000249a0) & 1) != 0) {
    _mpp_log(DAT_000249ac + 0x2496c,DAT_000249a8 + 0x24968,DAT_000249a4 + 0x24964);
  }
  __n = (uint)(*(ushort *)(param_2 + 4) >> 4);
  __s1 = (void *)(param_1 + (uint)*(ushort *)(param_2 + 6));
  iVar1 = memcmp(__s1,&local_1c,__n);
  if (iVar1 == 0) {
    return 0;
  }
  memcpy(__s1,&local_1c,__n);
  *(uint *)(param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)(param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x10000;
  return 0;
}



/* ===== get_prep_range @ 000249b0 size=108 ===== */

/* get_prep_range(void*, MppCfgApi_t*, MppFrameColorRange*) */

undefined4 get_prep_range(void *param_1,MppCfgApi_t *param_2,MppFrameColorRange *param_3)

{
  if ((**(uint **)(DAT_00024a1c + 0x249c8 + DAT_00024a20) & 1) != 0) {
    _mpp_log(DAT_00024a2c + 0x24a18,DAT_00024a28 + 0x24a14,DAT_00024a24 + 0x24a10);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_prep_rotation @ 00024a30 size=180 ===== */

/* set_prep_rotation(void*, MppCfgApi_t*, MppEncRotationCfg_e) */

undefined4 set_prep_rotation(int param_1,int param_2,undefined4 param_3)

{
  uint __n;
  int iVar1;
  void *__s1;
  undefined4 local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00024ae4 + 0x24a48 + DAT_00024ae8) & 1) != 0) {
    _mpp_log(DAT_00024af4 + 0x24ab4,DAT_00024af0 + 0x24ab0,DAT_00024aec + 0x24aac);
  }
  __n = (uint)(*(ushort *)(param_2 + 4) >> 4);
  __s1 = (void *)(param_1 + (uint)*(ushort *)(param_2 + 6));
  iVar1 = memcmp(__s1,&local_1c,__n);
  if (iVar1 == 0) {
    return 0;
  }
  memcpy(__s1,&local_1c,__n);
  *(uint *)(param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)(param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x10;
  return 0;
}



/* ===== get_prep_rotation @ 00024af8 size=108 ===== */

/* get_prep_rotation(void*, MppCfgApi_t*, MppEncRotationCfg_e*) */

undefined4 get_prep_rotation(void *param_1,MppCfgApi_t *param_2,MppEncRotationCfg_e *param_3)

{
  if ((**(uint **)(DAT_00024b64 + 0x24b10 + DAT_00024b68) & 1) != 0) {
    _mpp_log(DAT_00024b74 + 0x24b60,DAT_00024b70 + 0x24b5c,DAT_00024b6c + 0x24b58);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_prep_mirroring @ 00024b78 size=180 ===== */

/* set_prep_mirroring(void*, MppCfgApi_t*, int) */

undefined4 set_prep_mirroring(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00024c2c + 0x24b90 + DAT_00024c30) & 1) != 0) {
    _mpp_log(DAT_00024c3c + 0x24bfc,DAT_00024c38 + 0x24bf8,DAT_00024c34 + 0x24bf4);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x20;
  return 0;
}



/* ===== get_prep_mirroring @ 00024c40 size=108 ===== */

/* get_prep_mirroring(void*, MppCfgApi_t*, int*) */

undefined4 get_prep_mirroring(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00024cac + 0x24c58 + DAT_00024cb0) & 1) != 0) {
    _mpp_log(DAT_00024cbc + 0x24ca8,DAT_00024cb8 + 0x24ca4,DAT_00024cb4 + 0x24ca0);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_codec_type @ 00024cc0 size=164 ===== */

/* set_codec_type(void*, MppCfgApi_t*, MppCodingType) */

undefined4 set_codec_type(int param_1,int param_2,undefined4 param_3)

{
  uint __n;
  int iVar1;
  void *__s1;
  undefined4 local_1c [2];
  
  local_1c[0] = param_3;
  if ((**(uint **)(DAT_00024d64 + 0x24cd8 + DAT_00024d68) & 1) != 0) {
    _mpp_log(DAT_00024d74 + 0x24d44,DAT_00024d70 + 0x24d40,DAT_00024d6c + 0x24d3c);
  }
  __s1 = (void *)(param_1 + (uint)*(ushort *)(param_2 + 6));
  __n = (uint)(*(ushort *)(param_2 + 4) >> 4);
  iVar1 = memcmp(__s1,local_1c,__n);
  if (iVar1 == 0) {
    return 0;
  }
  memcpy(__s1,local_1c,__n);
  return 0;
}



/* ===== get_codec_type @ 00024d78 size=108 ===== */

/* get_codec_type(void*, MppCfgApi_t*, MppCodingType*) */

undefined4 get_codec_type(void *param_1,MppCfgApi_t *param_2,MppCodingType *param_3)

{
  if ((**(uint **)(DAT_00024de4 + 0x24d90 + DAT_00024de8) & 1) != 0) {
    _mpp_log(DAT_00024df4 + 0x24de0,DAT_00024df0 + 0x24ddc,DAT_00024dec + 0x24dd8);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h264_stream_type @ 00024df8 size=180 ===== */

/* set_h264_stream_type(void*, MppCfgApi_t*, int) */

undefined4 set_h264_stream_type(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00024eac + 0x24e10 + DAT_00024eb0) & 1) != 0) {
    _mpp_log(DAT_00024ebc + 0x24e7c,DAT_00024eb8 + 0x24e78,DAT_00024eb4 + 0x24e74);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 1;
  return 0;
}



/* ===== get_h264_stream_type @ 00024ec0 size=108 ===== */

/* get_h264_stream_type(void*, MppCfgApi_t*, int*) */

undefined4 get_h264_stream_type(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00024f2c + 0x24ed8 + DAT_00024f30) & 1) != 0) {
    _mpp_log(DAT_00024f3c + 0x24f28,DAT_00024f38 + 0x24f24,DAT_00024f34 + 0x24f20);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h264_profile @ 00024f40 size=180 ===== */

/* set_h264_profile(void*, MppCfgApi_t*, int) */

undefined4 set_h264_profile(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00024ff4 + 0x24f58 + DAT_00024ff8) & 1) != 0) {
    _mpp_log(DAT_00025004 + 0x24fc4,DAT_00025000 + 0x24fc0,DAT_00024ffc + 0x24fbc);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 2;
  return 0;
}



/* ===== get_h264_profile @ 00025008 size=108 ===== */

/* get_h264_profile(void*, MppCfgApi_t*, int*) */

undefined4 get_h264_profile(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00025074 + 0x25020 + DAT_00025078) & 1) != 0) {
    _mpp_log(DAT_00025084 + 0x25070,DAT_00025080 + 0x2506c,DAT_0002507c + 0x25068);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h264_level @ 00025088 size=180 ===== */

/* set_h264_level(void*, MppCfgApi_t*, int) */

undefined4 set_h264_level(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_0002513c + 0x250a0 + DAT_00025140) & 1) != 0) {
    _mpp_log(DAT_0002514c + 0x2510c,DAT_00025148 + 0x25108,DAT_00025144 + 0x25104);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 2;
  return 0;
}



/* ===== get_h264_level @ 00025150 size=108 ===== */

/* get_h264_level(void*, MppCfgApi_t*, int*) */

undefined4 get_h264_level(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_000251bc + 0x25168 + DAT_000251c0) & 1) != 0) {
    _mpp_log(DAT_000251cc + 0x251b8,DAT_000251c8 + 0x251b4,DAT_000251c4 + 0x251b0);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h264_poc_type @ 000251d0 size=180 ===== */

/* set_h264_poc_type(void*, MppCfgApi_t*, unsigned int) */

undefined4 set_h264_poc_type(void *param_1,MppCfgApi_t *param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00025284 + 0x251e8 + DAT_00025288) & 1) != 0) {
    _mpp_log(DAT_00025294 + 0x25254,DAT_00025290 + 0x25250,DAT_0002528c + 0x2524c);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x400;
  return 0;
}



/* ===== get_h264_poc_type @ 00025298 size=108 ===== */

/* get_h264_poc_type(void*, MppCfgApi_t*, unsigned int*) */

undefined4 get_h264_poc_type(void *param_1,MppCfgApi_t *param_2,uint *param_3)

{
  if ((**(uint **)(DAT_00025304 + 0x252b0 + DAT_00025308) & 1) != 0) {
    _mpp_log(DAT_00025314 + 0x25300,DAT_00025310 + 0x252fc,DAT_0002530c + 0x252f8);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h264_log2_max_poc_lsb @ 00025318 size=180 ===== */

/* set_h264_log2_max_poc_lsb(void*, MppCfgApi_t*, unsigned int) */

undefined4 set_h264_log2_max_poc_lsb(void *param_1,MppCfgApi_t *param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_000253cc + 0x25330 + DAT_000253d0) & 1) != 0) {
    _mpp_log(DAT_000253dc + 0x2539c,DAT_000253d8 + 0x25398,DAT_000253d4 + 0x25394);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x800;
  return 0;
}



/* ===== get_h264_log2_max_poc_lsb @ 000253e0 size=108 ===== */

/* get_h264_log2_max_poc_lsb(void*, MppCfgApi_t*, unsigned int*) */

undefined4 get_h264_log2_max_poc_lsb(void *param_1,MppCfgApi_t *param_2,uint *param_3)

{
  if ((**(uint **)(DAT_0002544c + 0x253f8 + DAT_00025450) & 1) != 0) {
    _mpp_log(DAT_0002545c + 0x25448,DAT_00025458 + 0x25444,DAT_00025454 + 0x25440);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h264_log2_max_frm_num @ 00025460 size=180 ===== */

/* set_h264_log2_max_frm_num(void*, MppCfgApi_t*, unsigned int) */

undefined4 set_h264_log2_max_frm_num(void *param_1,MppCfgApi_t *param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00025514 + 0x25478 + DAT_00025518) & 1) != 0) {
    _mpp_log(DAT_00025524 + 0x254e4,DAT_00025520 + 0x254e0,DAT_0002551c + 0x254dc);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x1000;
  return 0;
}



/* ===== get_h264_log2_max_frm_num @ 00025528 size=108 ===== */

/* get_h264_log2_max_frm_num(void*, MppCfgApi_t*, unsigned int*) */

undefined4 get_h264_log2_max_frm_num(void *param_1,MppCfgApi_t *param_2,uint *param_3)

{
  if ((**(uint **)(DAT_00025594 + 0x25540 + DAT_00025598) & 1) != 0) {
    _mpp_log(DAT_000255a4 + 0x25590,DAT_000255a0 + 0x2558c,DAT_0002559c + 0x25588);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h264_gaps_not_allowed @ 000255a8 size=180 ===== */

/* set_h264_gaps_not_allowed(void*, MppCfgApi_t*, unsigned int) */

undefined4 set_h264_gaps_not_allowed(void *param_1,MppCfgApi_t *param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_0002565c + 0x255c0 + DAT_00025660) & 1) != 0) {
    _mpp_log(DAT_0002566c + 0x2562c,DAT_00025668 + 0x25628,DAT_00025664 + 0x25624);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x2000;
  return 0;
}



/* ===== get_h264_gaps_not_allowed @ 00025670 size=108 ===== */

/* get_h264_gaps_not_allowed(void*, MppCfgApi_t*, unsigned int*) */

undefined4 get_h264_gaps_not_allowed(void *param_1,MppCfgApi_t *param_2,uint *param_3)

{
  if ((**(uint **)(DAT_000256dc + 0x25688 + DAT_000256e0) & 1) != 0) {
    _mpp_log(DAT_000256ec + 0x256d8,DAT_000256e8 + 0x256d4,DAT_000256e4 + 0x256d0);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h264_cabac_en @ 000256f0 size=180 ===== */

/* set_h264_cabac_en(void*, MppCfgApi_t*, int) */

undefined4 set_h264_cabac_en(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_000257a4 + 0x25708 + DAT_000257a8) & 1) != 0) {
    _mpp_log(DAT_000257b4 + 0x25774,DAT_000257b0 + 0x25770,DAT_000257ac + 0x2576c);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 4;
  return 0;
}



/* ===== get_h264_cabac_en @ 000257b8 size=108 ===== */

/* get_h264_cabac_en(void*, MppCfgApi_t*, int*) */

undefined4 get_h264_cabac_en(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00025824 + 0x257d0 + DAT_00025828) & 1) != 0) {
    _mpp_log(DAT_00025834 + 0x25820,DAT_00025830 + 0x2581c,DAT_0002582c + 0x25818);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h264_cabac_idc @ 00025838 size=180 ===== */

/* set_h264_cabac_idc(void*, MppCfgApi_t*, int) */

undefined4 set_h264_cabac_idc(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_000258ec + 0x25850 + DAT_000258f0) & 1) != 0) {
    _mpp_log(DAT_000258fc + 0x258bc,DAT_000258f8 + 0x258b8,DAT_000258f4 + 0x258b4);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 4;
  return 0;
}



/* ===== get_h264_cabac_idc @ 00025900 size=108 ===== */

/* get_h264_cabac_idc(void*, MppCfgApi_t*, int*) */

undefined4 get_h264_cabac_idc(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_0002596c + 0x25918 + DAT_00025970) & 1) != 0) {
    _mpp_log(DAT_0002597c + 0x25968,DAT_00025978 + 0x25964,DAT_00025974 + 0x25960);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h264_trans8x8 @ 00025980 size=180 ===== */

/* set_h264_trans8x8(void*, MppCfgApi_t*, int) */

undefined4 set_h264_trans8x8(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00025a34 + 0x25998 + DAT_00025a38) & 1) != 0) {
    _mpp_log(DAT_00025a44 + 0x25a04,DAT_00025a40 + 0x25a00,DAT_00025a3c + 0x259fc);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x10;
  return 0;
}



/* ===== get_h264_trans8x8 @ 00025a48 size=108 ===== */

/* get_h264_trans8x8(void*, MppCfgApi_t*, int*) */

undefined4 get_h264_trans8x8(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00025ab4 + 0x25a60 + DAT_00025ab8) & 1) != 0) {
    _mpp_log(DAT_00025ac4 + 0x25ab0,DAT_00025ac0 + 0x25aac,DAT_00025abc + 0x25aa8);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h264_const_intra @ 00025ac8 size=180 ===== */

/* set_h264_const_intra(void*, MppCfgApi_t*, int) */

undefined4 set_h264_const_intra(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00025b7c + 0x25ae0 + DAT_00025b80) & 1) != 0) {
    _mpp_log(DAT_00025b8c + 0x25b4c,DAT_00025b88 + 0x25b48,DAT_00025b84 + 0x25b44);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x20;
  return 0;
}



/* ===== get_h264_const_intra @ 00025b90 size=108 ===== */

/* get_h264_const_intra(void*, MppCfgApi_t*, int*) */

undefined4 get_h264_const_intra(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00025bfc + 0x25ba8 + DAT_00025c00) & 1) != 0) {
    _mpp_log(DAT_00025c0c + 0x25bf8,DAT_00025c08 + 0x25bf4,DAT_00025c04 + 0x25bf0);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h264_scaling_list @ 00025c10 size=180 ===== */

/* set_h264_scaling_list(void*, MppCfgApi_t*, int) */

undefined4 set_h264_scaling_list(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00025cc4 + 0x25c28 + DAT_00025cc8) & 1) != 0) {
    _mpp_log(DAT_00025cd4 + 0x25c94,DAT_00025cd0 + 0x25c90,DAT_00025ccc + 0x25c8c);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x200;
  return 0;
}



/* ===== get_h264_scaling_list @ 00025cd8 size=108 ===== */

/* get_h264_scaling_list(void*, MppCfgApi_t*, int*) */

undefined4 get_h264_scaling_list(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00025d44 + 0x25cf0 + DAT_00025d48) & 1) != 0) {
    _mpp_log(DAT_00025d54 + 0x25d40,DAT_00025d50 + 0x25d3c,DAT_00025d4c + 0x25d38);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h264_cb_qp_offset @ 00025d58 size=180 ===== */

/* set_h264_cb_qp_offset(void*, MppCfgApi_t*, int) */

undefined4 set_h264_cb_qp_offset(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00025e0c + 0x25d70 + DAT_00025e10) & 1) != 0) {
    _mpp_log(DAT_00025e1c + 0x25ddc,DAT_00025e18 + 0x25dd8,DAT_00025e14 + 0x25dd4);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x40;
  return 0;
}



/* ===== get_h264_cb_qp_offset @ 00025e20 size=108 ===== */

/* get_h264_cb_qp_offset(void*, MppCfgApi_t*, int*) */

undefined4 get_h264_cb_qp_offset(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00025e8c + 0x25e38 + DAT_00025e90) & 1) != 0) {
    _mpp_log(DAT_00025e9c + 0x25e88,DAT_00025e98 + 0x25e84,DAT_00025e94 + 0x25e80);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h264_cr_qp_offset @ 00025ea0 size=180 ===== */

/* set_h264_cr_qp_offset(void*, MppCfgApi_t*, int) */

undefined4 set_h264_cr_qp_offset(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00025f54 + 0x25eb8 + DAT_00025f58) & 1) != 0) {
    _mpp_log(DAT_00025f64 + 0x25f24,DAT_00025f60 + 0x25f20,DAT_00025f5c + 0x25f1c);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x40;
  return 0;
}



/* ===== get_h264_cr_qp_offset @ 00025f68 size=108 ===== */

/* get_h264_cr_qp_offset(void*, MppCfgApi_t*, int*) */

undefined4 get_h264_cr_qp_offset(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00025fd4 + 0x25f80 + DAT_00025fd8) & 1) != 0) {
    _mpp_log(DAT_00025fe4 + 0x25fd0,DAT_00025fe0 + 0x25fcc,DAT_00025fdc + 0x25fc8);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h264_dblk_disable @ 00025fe8 size=180 ===== */

/* set_h264_dblk_disable(void*, MppCfgApi_t*, int) */

undefined4 set_h264_dblk_disable(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_0002609c + 0x26000 + DAT_000260a0) & 1) != 0) {
    _mpp_log(DAT_000260ac + 0x2606c,DAT_000260a8 + 0x26068,DAT_000260a4 + 0x26064);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x80;
  return 0;
}



/* ===== get_h264_dblk_disable @ 000260b0 size=108 ===== */

/* get_h264_dblk_disable(void*, MppCfgApi_t*, int*) */

undefined4 get_h264_dblk_disable(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_0002611c + 0x260c8 + DAT_00026120) & 1) != 0) {
    _mpp_log(DAT_0002612c + 0x26118,DAT_00026128 + 0x26114,DAT_00026124 + 0x26110);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h264_dblk_alpha @ 00026130 size=180 ===== */

/* set_h264_dblk_alpha(void*, MppCfgApi_t*, int) */

undefined4 set_h264_dblk_alpha(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_000261e4 + 0x26148 + DAT_000261e8) & 1) != 0) {
    _mpp_log(DAT_000261f4 + 0x261b4,DAT_000261f0 + 0x261b0,DAT_000261ec + 0x261ac);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x80;
  return 0;
}



/* ===== get_h264_dblk_alpha @ 000261f8 size=108 ===== */

/* get_h264_dblk_alpha(void*, MppCfgApi_t*, int*) */

undefined4 get_h264_dblk_alpha(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00026264 + 0x26210 + DAT_00026268) & 1) != 0) {
    _mpp_log(DAT_00026274 + 0x26260,DAT_00026270 + 0x2625c,DAT_0002626c + 0x26258);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h264_dblk_beta @ 00026278 size=180 ===== */

/* set_h264_dblk_beta(void*, MppCfgApi_t*, int) */

undefined4 set_h264_dblk_beta(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_0002632c + 0x26290 + DAT_00026330) & 1) != 0) {
    _mpp_log(DAT_0002633c + 0x262fc,DAT_00026338 + 0x262f8,DAT_00026334 + 0x262f4);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x80;
  return 0;
}



/* ===== get_h264_dblk_beta @ 00026340 size=108 ===== */

/* get_h264_dblk_beta(void*, MppCfgApi_t*, int*) */

undefined4 get_h264_dblk_beta(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_000263ac + 0x26358 + DAT_000263b0) & 1) != 0) {
    _mpp_log(DAT_000263bc + 0x263a8,DAT_000263b8 + 0x263a4,DAT_000263b4 + 0x263a0);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h264_qp_init @ 000263c0 size=180 ===== */

/* set_h264_qp_init(void*, MppCfgApi_t*, int) */

undefined4 set_h264_qp_init(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00026474 + 0x263d8 + DAT_00026478) & 1) != 0) {
    _mpp_log(DAT_00026484 + 0x26444,DAT_00026480 + 0x26440,DAT_0002647c + 0x2643c);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x10000;
  return 0;
}



/* ===== get_h264_qp_init @ 00026488 size=108 ===== */

/* get_h264_qp_init(void*, MppCfgApi_t*, int*) */

undefined4 get_h264_qp_init(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_000264f4 + 0x264a0 + DAT_000264f8) & 1) != 0) {
    _mpp_log(DAT_00026504 + 0x264f0,DAT_00026500 + 0x264ec,DAT_000264fc + 0x264e8);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h264_qp_min @ 00026508 size=180 ===== */

/* set_h264_qp_min(void*, MppCfgApi_t*, int) */

undefined4 set_h264_qp_min(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_000265bc + 0x26520 + DAT_000265c0) & 1) != 0) {
    _mpp_log(DAT_000265cc + 0x2658c,DAT_000265c8 + 0x26588,DAT_000265c4 + 0x26584);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x20000;
  return 0;
}



/* ===== get_h264_qp_min @ 000265d0 size=108 ===== */

/* get_h264_qp_min(void*, MppCfgApi_t*, int*) */

undefined4 get_h264_qp_min(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_0002663c + 0x265e8 + DAT_00026640) & 1) != 0) {
    _mpp_log(DAT_0002664c + 0x26638,DAT_00026648 + 0x26634,DAT_00026644 + 0x26630);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h264_qp_max @ 00026650 size=180 ===== */

/* set_h264_qp_max(void*, MppCfgApi_t*, int) */

undefined4 set_h264_qp_max(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00026704 + 0x26668 + DAT_00026708) & 1) != 0) {
    _mpp_log(DAT_00026714 + 0x266d4,DAT_00026710 + 0x266d0,DAT_0002670c + 0x266cc);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x20000;
  return 0;
}



/* ===== get_h264_qp_max @ 00026718 size=108 ===== */

/* get_h264_qp_max(void*, MppCfgApi_t*, int*) */

undefined4 get_h264_qp_max(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00026784 + 0x26730 + DAT_00026788) & 1) != 0) {
    _mpp_log(DAT_00026794 + 0x26780,DAT_00026790 + 0x2677c,DAT_0002678c + 0x26778);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h264_qp_min_i @ 00026798 size=180 ===== */

/* set_h264_qp_min_i(void*, MppCfgApi_t*, int) */

undefined4 set_h264_qp_min_i(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_0002684c + 0x267b0 + DAT_00026850) & 1) != 0) {
    _mpp_log(DAT_0002685c + 0x2681c,DAT_00026858 + 0x26818,DAT_00026854 + 0x26814);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x40000;
  return 0;
}



/* ===== get_h264_qp_min_i @ 00026860 size=108 ===== */

/* get_h264_qp_min_i(void*, MppCfgApi_t*, int*) */

undefined4 get_h264_qp_min_i(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_000268cc + 0x26878 + DAT_000268d0) & 1) != 0) {
    _mpp_log(DAT_000268dc + 0x268c8,DAT_000268d8 + 0x268c4,DAT_000268d4 + 0x268c0);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h264_qp_max_i @ 000268e0 size=180 ===== */

/* set_h264_qp_max_i(void*, MppCfgApi_t*, int) */

undefined4 set_h264_qp_max_i(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00026994 + 0x268f8 + DAT_00026998) & 1) != 0) {
    _mpp_log(DAT_000269a4 + 0x26964,DAT_000269a0 + 0x26960,DAT_0002699c + 0x2695c);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x40000;
  return 0;
}



/* ===== get_h264_qp_max_i @ 000269a8 size=108 ===== */

/* get_h264_qp_max_i(void*, MppCfgApi_t*, int*) */

undefined4 get_h264_qp_max_i(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00026a14 + 0x269c0 + DAT_00026a18) & 1) != 0) {
    _mpp_log(DAT_00026a24 + 0x26a10,DAT_00026a20 + 0x26a0c,DAT_00026a1c + 0x26a08);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h264_qp_step @ 00026a28 size=180 ===== */

/* set_h264_qp_step(void*, MppCfgApi_t*, int) */

undefined4 set_h264_qp_step(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00026adc + 0x26a40 + DAT_00026ae0) & 1) != 0) {
    _mpp_log(DAT_00026aec + 0x26aac,DAT_00026ae8 + 0x26aa8,DAT_00026ae4 + 0x26aa4);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x80000;
  return 0;
}



/* ===== get_h264_qp_step @ 00026af0 size=108 ===== */

/* get_h264_qp_step(void*, MppCfgApi_t*, int*) */

undefined4 get_h264_qp_step(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00026b5c + 0x26b08 + DAT_00026b60) & 1) != 0) {
    _mpp_log(DAT_00026b6c + 0x26b58,DAT_00026b68 + 0x26b54,DAT_00026b64 + 0x26b50);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h264_qp_delta_ip @ 00026b70 size=180 ===== */

/* set_h264_qp_delta_ip(void*, MppCfgApi_t*, int) */

undefined4 set_h264_qp_delta_ip(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00026c24 + 0x26b88 + DAT_00026c28) & 1) != 0) {
    _mpp_log(DAT_00026c34 + 0x26bf4,DAT_00026c30 + 0x26bf0,DAT_00026c2c + 0x26bec);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x100000;
  return 0;
}



/* ===== get_h264_qp_delta_ip @ 00026c38 size=108 ===== */

/* get_h264_qp_delta_ip(void*, MppCfgApi_t*, int*) */

undefined4 get_h264_qp_delta_ip(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00026ca4 + 0x26c50 + DAT_00026ca8) & 1) != 0) {
    _mpp_log(DAT_00026cb4 + 0x26ca0,DAT_00026cb0 + 0x26c9c,DAT_00026cac + 0x26c98);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h264_max_tid @ 00026cb8 size=180 ===== */

/* set_h264_max_tid(void*, MppCfgApi_t*, int) */

undefined4 set_h264_max_tid(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00026d6c + 0x26cd0 + DAT_00026d70) & 1) != 0) {
    _mpp_log(DAT_00026d7c + 0x26d3c,DAT_00026d78 + 0x26d38,DAT_00026d74 + 0x26d34);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x400000;
  return 0;
}



/* ===== get_h264_max_tid @ 00026d80 size=108 ===== */

/* get_h264_max_tid(void*, MppCfgApi_t*, int*) */

undefined4 get_h264_max_tid(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00026dec + 0x26d98 + DAT_00026df0) & 1) != 0) {
    _mpp_log(DAT_00026dfc + 0x26de8,DAT_00026df8 + 0x26de4,DAT_00026df4 + 0x26de0);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h264_max_ltr @ 00026e00 size=180 ===== */

/* set_h264_max_ltr(void*, MppCfgApi_t*, int) */

undefined4 set_h264_max_ltr(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00026eb4 + 0x26e18 + DAT_00026eb8) & 1) != 0) {
    _mpp_log(DAT_00026ec4 + 0x26e84,DAT_00026ec0 + 0x26e80,DAT_00026ebc + 0x26e7c);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x200000;
  return 0;
}



/* ===== get_h264_max_ltr @ 00026ec8 size=108 ===== */

/* get_h264_max_ltr(void*, MppCfgApi_t*, int*) */

undefined4 get_h264_max_ltr(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00026f34 + 0x26ee0 + DAT_00026f38) & 1) != 0) {
    _mpp_log(DAT_00026f44 + 0x26f30,DAT_00026f40 + 0x26f2c,DAT_00026f3c + 0x26f28);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h264_prefix_mode @ 00026f48 size=180 ===== */

/* set_h264_prefix_mode(void*, MppCfgApi_t*, int) */

undefined4 set_h264_prefix_mode(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00026ffc + 0x26f60 + DAT_00027000) & 1) != 0) {
    _mpp_log(DAT_0002700c + 0x26fcc,DAT_00027008 + 0x26fc8,DAT_00027004 + 0x26fc4);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x800000;
  return 0;
}



/* ===== get_h264_prefix_mode @ 00027010 size=108 ===== */

/* get_h264_prefix_mode(void*, MppCfgApi_t*, int*) */

undefined4 get_h264_prefix_mode(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_0002707c + 0x27028 + DAT_00027080) & 1) != 0) {
    _mpp_log(DAT_0002708c + 0x27078,DAT_00027088 + 0x27074,DAT_00027084 + 0x27070);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h264_base_layer_pid @ 00027090 size=180 ===== */

/* set_h264_base_layer_pid(void*, MppCfgApi_t*, int) */

undefined4 set_h264_base_layer_pid(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00027144 + 0x270a8 + DAT_00027148) & 1) != 0) {
    _mpp_log(DAT_00027154 + 0x27114,DAT_00027150 + 0x27110,DAT_0002714c + 0x2710c);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x1000000;
  return 0;
}



/* ===== get_h264_base_layer_pid @ 00027158 size=108 ===== */

/* get_h264_base_layer_pid(void*, MppCfgApi_t*, int*) */

undefined4 get_h264_base_layer_pid(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_000271c4 + 0x27170 + DAT_000271c8) & 1) != 0) {
    _mpp_log(DAT_000271d4 + 0x271c0,DAT_000271d0 + 0x271bc,DAT_000271cc + 0x271b8);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h265_profile @ 000271d8 size=180 ===== */

/* set_h265_profile(void*, MppCfgApi_t*, int) */

undefined4 set_h265_profile(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_0002728c + 0x271f0 + DAT_00027290) & 1) != 0) {
    _mpp_log(DAT_0002729c + 0x2725c,DAT_00027298 + 0x27258,DAT_00027294 + 0x27254);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 1;
  return 0;
}



/* ===== get_h265_profile @ 000272a0 size=108 ===== */

/* get_h265_profile(void*, MppCfgApi_t*, int*) */

undefined4 get_h265_profile(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_0002730c + 0x272b8 + DAT_00027310) & 1) != 0) {
    _mpp_log(DAT_0002731c + 0x27308,DAT_00027318 + 0x27304,DAT_00027314 + 0x27300);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h265_level @ 00027320 size=180 ===== */

/* set_h265_level(void*, MppCfgApi_t*, int) */

undefined4 set_h265_level(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_000273d4 + 0x27338 + DAT_000273d8) & 1) != 0) {
    _mpp_log(DAT_000273e4 + 0x273a4,DAT_000273e0 + 0x273a0,DAT_000273dc + 0x2739c);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 1;
  return 0;
}



/* ===== get_h265_level @ 000273e8 size=108 ===== */

/* get_h265_level(void*, MppCfgApi_t*, int*) */

undefined4 get_h265_level(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00027454 + 0x27400 + DAT_00027458) & 1) != 0) {
    _mpp_log(DAT_00027464 + 0x27450,DAT_00027460 + 0x2744c,DAT_0002745c + 0x27448);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h265_scaling_list @ 00027468 size=180 ===== */

/* set_h265_scaling_list(void*, MppCfgApi_t*, unsigned int) */

undefined4 set_h265_scaling_list(void *param_1,MppCfgApi_t *param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_0002751c + 0x27480 + DAT_00027520) & 1) != 0) {
    _mpp_log(DAT_0002752c + 0x274ec,DAT_00027528 + 0x274e8,DAT_00027524 + 0x274e4);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x4000;
  return 0;
}



/* ===== get_h265_scaling_list @ 00027530 size=108 ===== */

/* get_h265_scaling_list(void*, MppCfgApi_t*, unsigned int*) */

undefined4 get_h265_scaling_list(void *param_1,MppCfgApi_t *param_2,uint *param_3)

{
  if ((**(uint **)(DAT_0002759c + 0x27548 + DAT_000275a0) & 1) != 0) {
    _mpp_log(DAT_000275ac + 0x27598,DAT_000275a8 + 0x27594,DAT_000275a4 + 0x27590);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h265_cb_qp_offset @ 000275b0 size=180 ===== */

/* set_h265_cb_qp_offset(void*, MppCfgApi_t*, int) */

undefined4 set_h265_cb_qp_offset(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00027664 + 0x275c8 + DAT_00027668) & 1) != 0) {
    _mpp_log(DAT_00027674 + 0x27634,DAT_00027670 + 0x27630,DAT_0002766c + 0x2762c);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x4000;
  return 0;
}



/* ===== get_h265_cb_qp_offset @ 00027678 size=108 ===== */

/* get_h265_cb_qp_offset(void*, MppCfgApi_t*, int*) */

undefined4 get_h265_cb_qp_offset(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_000276e4 + 0x27690 + DAT_000276e8) & 1) != 0) {
    _mpp_log(DAT_000276f4 + 0x276e0,DAT_000276f0 + 0x276dc,DAT_000276ec + 0x276d8);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h265_cr_qp_offset @ 000276f8 size=180 ===== */

/* set_h265_cr_qp_offset(void*, MppCfgApi_t*, int) */

undefined4 set_h265_cr_qp_offset(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_000277ac + 0x27710 + DAT_000277b0) & 1) != 0) {
    _mpp_log(DAT_000277bc + 0x2777c,DAT_000277b8 + 0x27778,DAT_000277b4 + 0x27774);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x4000;
  return 0;
}



/* ===== get_h265_cr_qp_offset @ 000277c0 size=108 ===== */

/* get_h265_cr_qp_offset(void*, MppCfgApi_t*, int*) */

undefined4 get_h265_cr_qp_offset(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_0002782c + 0x277d8 + DAT_00027830) & 1) != 0) {
    _mpp_log(DAT_0002783c + 0x27828,DAT_00027838 + 0x27824,DAT_00027834 + 0x27820);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h265_dblk_disable @ 00027840 size=180 ===== */

/* set_h265_dblk_disable(void*, MppCfgApi_t*, unsigned int) */

undefined4 set_h265_dblk_disable(void *param_1,MppCfgApi_t *param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_000278f4 + 0x27858 + DAT_000278f8) & 1) != 0) {
    _mpp_log(DAT_00027904 + 0x278c4,DAT_00027900 + 0x278c0,DAT_000278fc + 0x278bc);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x1000;
  return 0;
}



/* ===== get_h265_dblk_disable @ 00027908 size=108 ===== */

/* get_h265_dblk_disable(void*, MppCfgApi_t*, unsigned int*) */

undefined4 get_h265_dblk_disable(void *param_1,MppCfgApi_t *param_2,uint *param_3)

{
  if ((**(uint **)(DAT_00027974 + 0x27920 + DAT_00027978) & 1) != 0) {
    _mpp_log(DAT_00027984 + 0x27970,DAT_00027980 + 0x2796c,DAT_0002797c + 0x27968);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h265_dblk_alpha @ 00027988 size=180 ===== */

/* set_h265_dblk_alpha(void*, MppCfgApi_t*, int) */

undefined4 set_h265_dblk_alpha(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00027a3c + 0x279a0 + DAT_00027a40) & 1) != 0) {
    _mpp_log(DAT_00027a4c + 0x27a0c,DAT_00027a48 + 0x27a08,DAT_00027a44 + 0x27a04);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x1000;
  return 0;
}



/* ===== get_h265_dblk_alpha @ 00027a50 size=108 ===== */

/* get_h265_dblk_alpha(void*, MppCfgApi_t*, int*) */

undefined4 get_h265_dblk_alpha(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00027abc + 0x27a68 + DAT_00027ac0) & 1) != 0) {
    _mpp_log(DAT_00027acc + 0x27ab8,DAT_00027ac8 + 0x27ab4,DAT_00027ac4 + 0x27ab0);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h265_dblk_beta @ 00027ad0 size=180 ===== */

/* set_h265_dblk_beta(void*, MppCfgApi_t*, int) */

undefined4 set_h265_dblk_beta(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00027b84 + 0x27ae8 + DAT_00027b88) & 1) != 0) {
    _mpp_log(DAT_00027b94 + 0x27b54,DAT_00027b90 + 0x27b50,DAT_00027b8c + 0x27b4c);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x1000;
  return 0;
}



/* ===== get_h265_dblk_beta @ 00027b98 size=108 ===== */

/* get_h265_dblk_beta(void*, MppCfgApi_t*, int*) */

undefined4 get_h265_dblk_beta(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00027c04 + 0x27bb0 + DAT_00027c08) & 1) != 0) {
    _mpp_log(DAT_00027c14 + 0x27c00,DAT_00027c10 + 0x27bfc,DAT_00027c0c + 0x27bf8);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h265_qp_init @ 00027c18 size=180 ===== */

/* set_h265_qp_init(void*, MppCfgApi_t*, int) */

undefined4 set_h265_qp_init(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00027ccc + 0x27c30 + DAT_00027cd0) & 1) != 0) {
    _mpp_log(DAT_00027cdc + 0x27c9c,DAT_00027cd8 + 0x27c98,DAT_00027cd4 + 0x27c94);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x10000;
  return 0;
}



/* ===== get_h265_qp_init @ 00027ce0 size=108 ===== */

/* get_h265_qp_init(void*, MppCfgApi_t*, int*) */

undefined4 get_h265_qp_init(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00027d4c + 0x27cf8 + DAT_00027d50) & 1) != 0) {
    _mpp_log(DAT_00027d5c + 0x27d48,DAT_00027d58 + 0x27d44,DAT_00027d54 + 0x27d40);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h265_qp_min @ 00027d60 size=180 ===== */

/* set_h265_qp_min(void*, MppCfgApi_t*, int) */

undefined4 set_h265_qp_min(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00027e14 + 0x27d78 + DAT_00027e18) & 1) != 0) {
    _mpp_log(DAT_00027e24 + 0x27de4,DAT_00027e20 + 0x27de0,DAT_00027e1c + 0x27ddc);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x20000;
  return 0;
}



/* ===== get_h265_qp_min @ 00027e28 size=108 ===== */

/* get_h265_qp_min(void*, MppCfgApi_t*, int*) */

undefined4 get_h265_qp_min(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00027e94 + 0x27e40 + DAT_00027e98) & 1) != 0) {
    _mpp_log(DAT_00027ea4 + 0x27e90,DAT_00027ea0 + 0x27e8c,DAT_00027e9c + 0x27e88);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h265_qp_max @ 00027ea8 size=180 ===== */

/* set_h265_qp_max(void*, MppCfgApi_t*, int) */

undefined4 set_h265_qp_max(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00027f5c + 0x27ec0 + DAT_00027f60) & 1) != 0) {
    _mpp_log(DAT_00027f6c + 0x27f2c,DAT_00027f68 + 0x27f28,DAT_00027f64 + 0x27f24);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x20000;
  return 0;
}



/* ===== get_h265_qp_max @ 00027f70 size=108 ===== */

/* get_h265_qp_max(void*, MppCfgApi_t*, int*) */

undefined4 get_h265_qp_max(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00027fdc + 0x27f88 + DAT_00027fe0) & 1) != 0) {
    _mpp_log(DAT_00027fec + 0x27fd8,DAT_00027fe8 + 0x27fd4,DAT_00027fe4 + 0x27fd0);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h265_qp_min_i @ 00027ff0 size=180 ===== */

/* set_h265_qp_min_i(void*, MppCfgApi_t*, int) */

undefined4 set_h265_qp_min_i(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_000280a4 + 0x28008 + DAT_000280a8) & 1) != 0) {
    _mpp_log(DAT_000280b4 + 0x28074,DAT_000280b0 + 0x28070,DAT_000280ac + 0x2806c);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x40000;
  return 0;
}



/* ===== get_h265_qp_min_i @ 000280b8 size=108 ===== */

/* get_h265_qp_min_i(void*, MppCfgApi_t*, int*) */

undefined4 get_h265_qp_min_i(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00028124 + 0x280d0 + DAT_00028128) & 1) != 0) {
    _mpp_log(DAT_00028134 + 0x28120,DAT_00028130 + 0x2811c,DAT_0002812c + 0x28118);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h265_qp_max_i @ 00028138 size=180 ===== */

/* set_h265_qp_max_i(void*, MppCfgApi_t*, int) */

undefined4 set_h265_qp_max_i(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_000281ec + 0x28150 + DAT_000281f0) & 1) != 0) {
    _mpp_log(DAT_000281fc + 0x281bc,DAT_000281f8 + 0x281b8,DAT_000281f4 + 0x281b4);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x40000;
  return 0;
}



/* ===== get_h265_qp_max_i @ 00028200 size=108 ===== */

/* get_h265_qp_max_i(void*, MppCfgApi_t*, int*) */

undefined4 get_h265_qp_max_i(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_0002826c + 0x28218 + DAT_00028270) & 1) != 0) {
    _mpp_log(DAT_0002827c + 0x28268,DAT_00028278 + 0x28264,DAT_00028274 + 0x28260);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h265_qp_step @ 00028280 size=180 ===== */

/* set_h265_qp_step(void*, MppCfgApi_t*, int) */

undefined4 set_h265_qp_step(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00028334 + 0x28298 + DAT_00028338) & 1) != 0) {
    _mpp_log(DAT_00028344 + 0x28304,DAT_00028340 + 0x28300,DAT_0002833c + 0x282fc);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x80000;
  return 0;
}



/* ===== get_h265_qp_step @ 00028348 size=108 ===== */

/* get_h265_qp_step(void*, MppCfgApi_t*, int*) */

undefined4 get_h265_qp_step(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_000283b4 + 0x28360 + DAT_000283b8) & 1) != 0) {
    _mpp_log(DAT_000283c4 + 0x283b0,DAT_000283c0 + 0x283ac,DAT_000283bc + 0x283a8);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h265_qp_delta_ip @ 000283c8 size=180 ===== */

/* set_h265_qp_delta_ip(void*, MppCfgApi_t*, int) */

undefined4 set_h265_qp_delta_ip(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_0002847c + 0x283e0 + DAT_00028480) & 1) != 0) {
    _mpp_log(DAT_0002848c + 0x2844c,DAT_00028488 + 0x28448,DAT_00028484 + 0x28444);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x100000;
  return 0;
}



/* ===== get_h265_qp_delta_ip @ 00028490 size=108 ===== */

/* get_h265_qp_delta_ip(void*, MppCfgApi_t*, int*) */

undefined4 get_h265_qp_delta_ip(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_000284fc + 0x284a8 + DAT_00028500) & 1) != 0) {
    _mpp_log(DAT_0002850c + 0x284f8,DAT_00028508 + 0x284f4,DAT_00028504 + 0x284f0);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h265_sao_luma_disable @ 00028510 size=180 ===== */

/* set_h265_sao_luma_disable(void*, MppCfgApi_t*, int) */

undefined4 set_h265_sao_luma_disable(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_000285c4 + 0x28528 + DAT_000285c8) & 1) != 0) {
    _mpp_log(DAT_000285d4 + 0x28594,DAT_000285d0 + 0x28590,DAT_000285cc + 0x2858c);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x2000;
  return 0;
}



/* ===== get_h265_sao_luma_disable @ 000285d8 size=108 ===== */

/* get_h265_sao_luma_disable(void*, MppCfgApi_t*, int*) */

undefined4 get_h265_sao_luma_disable(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00028644 + 0x285f0 + DAT_00028648) & 1) != 0) {
    _mpp_log(DAT_00028654 + 0x28640,DAT_00028650 + 0x2863c,DAT_0002864c + 0x28638);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h265_sao_chroma_disable @ 00028658 size=180 ===== */

/* set_h265_sao_chroma_disable(void*, MppCfgApi_t*, int) */

undefined4 set_h265_sao_chroma_disable(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_0002870c + 0x28670 + DAT_00028710) & 1) != 0) {
    _mpp_log(DAT_0002871c + 0x286dc,DAT_00028718 + 0x286d8,DAT_00028714 + 0x286d4);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x2000;
  return 0;
}



/* ===== get_h265_sao_chroma_disable @ 00028720 size=108 ===== */

/* get_h265_sao_chroma_disable(void*, MppCfgApi_t*, int*) */

undefined4 get_h265_sao_chroma_disable(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_0002878c + 0x28738 + DAT_00028790) & 1) != 0) {
    _mpp_log(DAT_0002879c + 0x28788,DAT_00028798 + 0x28784,DAT_00028794 + 0x28780);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_h265_sao_bit_ratio @ 000287a0 size=180 ===== */

/* set_h265_sao_bit_ratio(void*, MppCfgApi_t*, int) */

undefined4 set_h265_sao_bit_ratio(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00028854 + 0x287b8 + DAT_00028858) & 1) != 0) {
    _mpp_log(DAT_00028864 + 0x28824,DAT_00028860 + 0x28820,DAT_0002885c + 0x2881c);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x2000;
  return 0;
}



/* ===== get_h265_sao_bit_ratio @ 00028868 size=108 ===== */

/* get_h265_sao_bit_ratio(void*, MppCfgApi_t*, int*) */

undefined4 get_h265_sao_bit_ratio(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_000288d4 + 0x28880 + DAT_000288d8) & 1) != 0) {
    _mpp_log(DAT_000288e4 + 0x288d0,DAT_000288e0 + 0x288cc,DAT_000288dc + 0x288c8);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_vp8_qp_init @ 000288e8 size=180 ===== */

/* set_vp8_qp_init(void*, MppCfgApi_t*, int) */

undefined4 set_vp8_qp_init(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_0002899c + 0x28900 + DAT_000289a0) & 1) != 0) {
    _mpp_log(DAT_000289ac + 0x2896c,DAT_000289a8 + 0x28968,DAT_000289a4 + 0x28964);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x10000;
  return 0;
}



/* ===== get_vp8_qp_init @ 000289b0 size=108 ===== */

/* get_vp8_qp_init(void*, MppCfgApi_t*, int*) */

undefined4 get_vp8_qp_init(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00028a1c + 0x289c8 + DAT_00028a20) & 1) != 0) {
    _mpp_log(DAT_00028a2c + 0x28a18,DAT_00028a28 + 0x28a14,DAT_00028a24 + 0x28a10);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_vp8_qp_min @ 00028a30 size=180 ===== */

/* set_vp8_qp_min(void*, MppCfgApi_t*, int) */

undefined4 set_vp8_qp_min(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00028ae4 + 0x28a48 + DAT_00028ae8) & 1) != 0) {
    _mpp_log(DAT_00028af4 + 0x28ab4,DAT_00028af0 + 0x28ab0,DAT_00028aec + 0x28aac);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x20000;
  return 0;
}



/* ===== get_vp8_qp_min @ 00028af8 size=108 ===== */

/* get_vp8_qp_min(void*, MppCfgApi_t*, int*) */

undefined4 get_vp8_qp_min(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00028b64 + 0x28b10 + DAT_00028b68) & 1) != 0) {
    _mpp_log(DAT_00028b74 + 0x28b60,DAT_00028b70 + 0x28b5c,DAT_00028b6c + 0x28b58);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_vp8_qp_max @ 00028b78 size=180 ===== */

/* set_vp8_qp_max(void*, MppCfgApi_t*, int) */

undefined4 set_vp8_qp_max(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00028c2c + 0x28b90 + DAT_00028c30) & 1) != 0) {
    _mpp_log(DAT_00028c3c + 0x28bfc,DAT_00028c38 + 0x28bf8,DAT_00028c34 + 0x28bf4);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x20000;
  return 0;
}



/* ===== get_vp8_qp_max @ 00028c40 size=108 ===== */

/* get_vp8_qp_max(void*, MppCfgApi_t*, int*) */

undefined4 get_vp8_qp_max(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00028cac + 0x28c58 + DAT_00028cb0) & 1) != 0) {
    _mpp_log(DAT_00028cbc + 0x28ca8,DAT_00028cb8 + 0x28ca4,DAT_00028cb4 + 0x28ca0);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_vp8_qp_min_i @ 00028cc0 size=180 ===== */

/* set_vp8_qp_min_i(void*, MppCfgApi_t*, int) */

undefined4 set_vp8_qp_min_i(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00028d74 + 0x28cd8 + DAT_00028d78) & 1) != 0) {
    _mpp_log(DAT_00028d84 + 0x28d44,DAT_00028d80 + 0x28d40,DAT_00028d7c + 0x28d3c);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x40000;
  return 0;
}



/* ===== get_vp8_qp_min_i @ 00028d88 size=108 ===== */

/* get_vp8_qp_min_i(void*, MppCfgApi_t*, int*) */

undefined4 get_vp8_qp_min_i(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00028df4 + 0x28da0 + DAT_00028df8) & 1) != 0) {
    _mpp_log(DAT_00028e04 + 0x28df0,DAT_00028e00 + 0x28dec,DAT_00028dfc + 0x28de8);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_vp8_qp_max_i @ 00028e08 size=180 ===== */

/* set_vp8_qp_max_i(void*, MppCfgApi_t*, int) */

undefined4 set_vp8_qp_max_i(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00028ebc + 0x28e20 + DAT_00028ec0) & 1) != 0) {
    _mpp_log(DAT_00028ecc + 0x28e8c,DAT_00028ec8 + 0x28e88,DAT_00028ec4 + 0x28e84);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x40000;
  return 0;
}



/* ===== get_vp8_qp_max_i @ 00028ed0 size=108 ===== */

/* get_vp8_qp_max_i(void*, MppCfgApi_t*, int*) */

undefined4 get_vp8_qp_max_i(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00028f3c + 0x28ee8 + DAT_00028f40) & 1) != 0) {
    _mpp_log(DAT_00028f4c + 0x28f38,DAT_00028f48 + 0x28f34,DAT_00028f44 + 0x28f30);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_vp8_qp_step @ 00028f50 size=180 ===== */

/* set_vp8_qp_step(void*, MppCfgApi_t*, int) */

undefined4 set_vp8_qp_step(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00029004 + 0x28f68 + DAT_00029008) & 1) != 0) {
    _mpp_log(DAT_00029014 + 0x28fd4,DAT_00029010 + 0x28fd0,DAT_0002900c + 0x28fcc);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x80000;
  return 0;
}



/* ===== get_vp8_qp_step @ 00029018 size=108 ===== */

/* get_vp8_qp_step(void*, MppCfgApi_t*, int*) */

undefined4 get_vp8_qp_step(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00029084 + 0x29030 + DAT_00029088) & 1) != 0) {
    _mpp_log(DAT_00029094 + 0x29080,DAT_00029090 + 0x2907c,DAT_0002908c + 0x29078);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_vp8_qp_delta_ip @ 00029098 size=180 ===== */

/* set_vp8_qp_delta_ip(void*, MppCfgApi_t*, int) */

undefined4 set_vp8_qp_delta_ip(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_0002914c + 0x290b0 + DAT_00029150) & 1) != 0) {
    _mpp_log(DAT_0002915c + 0x2911c,DAT_00029158 + 0x29118,DAT_00029154 + 0x29114);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x100000;
  return 0;
}



/* ===== get_vp8_qp_delta_ip @ 00029160 size=108 ===== */

/* get_vp8_qp_delta_ip(void*, MppCfgApi_t*, int*) */

undefined4 get_vp8_qp_delta_ip(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_000291cc + 0x29178 + DAT_000291d0) & 1) != 0) {
    _mpp_log(DAT_000291dc + 0x291c8,DAT_000291d8 + 0x291c4,DAT_000291d4 + 0x291c0);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_vp8_disable_ivf @ 000291e0 size=180 ===== */

/* set_vp8_disable_ivf(void*, MppCfgApi_t*, int) */

undefined4 set_vp8_disable_ivf(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00029294 + 0x291f8 + DAT_00029298) & 1) != 0) {
    _mpp_log(DAT_000292a4 + 0x29264,DAT_000292a0 + 0x29260,DAT_0002929c + 0x2925c);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 2;
  return 0;
}



/* ===== get_vp8_disable_ivf @ 000292a8 size=108 ===== */

/* get_vp8_disable_ivf(void*, MppCfgApi_t*, int*) */

undefined4 get_vp8_disable_ivf(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00029314 + 0x292c0 + DAT_00029318) & 1) != 0) {
    _mpp_log(DAT_00029324 + 0x29310,DAT_00029320 + 0x2930c,DAT_0002931c + 0x29308);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_jpeg_quant @ 00029328 size=180 ===== */

/* set_jpeg_quant(void*, MppCfgApi_t*, int) */

undefined4 set_jpeg_quant(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_000293dc + 0x29340 + DAT_000293e0) & 1) != 0) {
    _mpp_log(DAT_000293ec + 0x293ac,DAT_000293e8 + 0x293a8,DAT_000293e4 + 0x293a4);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 1;
  return 0;
}



/* ===== get_jpeg_quant @ 000293f0 size=108 ===== */

/* get_jpeg_quant(void*, MppCfgApi_t*, int*) */

undefined4 get_jpeg_quant(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_0002945c + 0x29408 + DAT_00029460) & 1) != 0) {
    _mpp_log(DAT_0002946c + 0x29458,DAT_00029468 + 0x29454,DAT_00029464 + 0x29450);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_jpeg_qtable_y @ 00029470 size=132 ===== */

/* set_jpeg_qtable_y(void*, MppCfgApi_t*, unsigned char*) */

undefined4 set_jpeg_qtable_y(void *param_1,MppCfgApi_t *param_2,uchar *param_3)

{
  uchar *local_14 [2];
  
  local_14[0] = param_3;
  if ((**(uint **)(DAT_000294f4 + 0x29488 + DAT_000294f8) & 1) != 0) {
    _mpp_log(DAT_00029504 + 0x294f0,DAT_00029500 + 0x294ec,DAT_000294fc + 0x294e8);
  }
  memcpy((void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),local_14,
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 2;
  return 0;
}



/* ===== get_jpeg_qtable_y @ 00029508 size=108 ===== */

/* get_jpeg_qtable_y(void*, MppCfgApi_t*, unsigned char**) */

undefined4 get_jpeg_qtable_y(void *param_1,MppCfgApi_t *param_2,uchar **param_3)

{
  if ((**(uint **)(DAT_00029574 + 0x29520 + DAT_00029578) & 1) != 0) {
    _mpp_log(DAT_00029584 + 0x29570,DAT_00029580 + 0x2956c,DAT_0002957c + 0x29568);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_jpeg_qtable_u @ 00029588 size=132 ===== */

/* set_jpeg_qtable_u(void*, MppCfgApi_t*, unsigned char*) */

undefined4 set_jpeg_qtable_u(void *param_1,MppCfgApi_t *param_2,uchar *param_3)

{
  uchar *local_14 [2];
  
  local_14[0] = param_3;
  if ((**(uint **)(DAT_0002960c + 0x295a0 + DAT_00029610) & 1) != 0) {
    _mpp_log(DAT_0002961c + 0x29608,DAT_00029618 + 0x29604,DAT_00029614 + 0x29600);
  }
  memcpy((void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),local_14,
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 2;
  return 0;
}



/* ===== get_jpeg_qtable_u @ 00029620 size=108 ===== */

/* get_jpeg_qtable_u(void*, MppCfgApi_t*, unsigned char**) */

undefined4 get_jpeg_qtable_u(void *param_1,MppCfgApi_t *param_2,uchar **param_3)

{
  if ((**(uint **)(DAT_0002968c + 0x29638 + DAT_00029690) & 1) != 0) {
    _mpp_log(DAT_0002969c + 0x29688,DAT_00029698 + 0x29684,DAT_00029694 + 0x29680);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_jpeg_qtable_v @ 000296a0 size=132 ===== */

/* set_jpeg_qtable_v(void*, MppCfgApi_t*, unsigned char*) */

undefined4 set_jpeg_qtable_v(void *param_1,MppCfgApi_t *param_2,uchar *param_3)

{
  uchar *local_14 [2];
  
  local_14[0] = param_3;
  if ((**(uint **)(DAT_00029724 + 0x296b8 + DAT_00029728) & 1) != 0) {
    _mpp_log(DAT_00029734 + 0x29720,DAT_00029730 + 0x2971c,DAT_0002972c + 0x29718);
  }
  memcpy((void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),local_14,
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 2;
  return 0;
}



/* ===== get_jpeg_qtable_v @ 00029738 size=108 ===== */

/* get_jpeg_qtable_v(void*, MppCfgApi_t*, unsigned char**) */

undefined4 get_jpeg_qtable_v(void *param_1,MppCfgApi_t *param_2,uchar **param_3)

{
  if ((**(uint **)(DAT_000297a4 + 0x29750 + DAT_000297a8) & 1) != 0) {
    _mpp_log(DAT_000297b4 + 0x297a0,DAT_000297b0 + 0x2979c,DAT_000297ac + 0x29798);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_jpeg_q_factor @ 000297b8 size=180 ===== */

/* set_jpeg_q_factor(void*, MppCfgApi_t*, int) */

undefined4 set_jpeg_q_factor(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_0002986c + 0x297d0 + DAT_00029870) & 1) != 0) {
    _mpp_log(DAT_0002987c + 0x2983c,DAT_00029878 + 0x29838,DAT_00029874 + 0x29834);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 4;
  return 0;
}



/* ===== get_jpeg_q_factor @ 00029880 size=108 ===== */

/* get_jpeg_q_factor(void*, MppCfgApi_t*, int*) */

undefined4 get_jpeg_q_factor(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_000298ec + 0x29898 + DAT_000298f0) & 1) != 0) {
    _mpp_log(DAT_000298fc + 0x298e8,DAT_000298f8 + 0x298e4,DAT_000298f4 + 0x298e0);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_jpeg_qf_max @ 00029900 size=180 ===== */

/* set_jpeg_qf_max(void*, MppCfgApi_t*, int) */

undefined4 set_jpeg_qf_max(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_000299b4 + 0x29918 + DAT_000299b8) & 1) != 0) {
    _mpp_log(DAT_000299c4 + 0x29984,DAT_000299c0 + 0x29980,DAT_000299bc + 0x2997c);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 4;
  return 0;
}



/* ===== get_jpeg_qf_max @ 000299c8 size=108 ===== */

/* get_jpeg_qf_max(void*, MppCfgApi_t*, int*) */

undefined4 get_jpeg_qf_max(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00029a34 + 0x299e0 + DAT_00029a38) & 1) != 0) {
    _mpp_log(DAT_00029a44 + 0x29a30,DAT_00029a40 + 0x29a2c,DAT_00029a3c + 0x29a28);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_jpeg_qf_min @ 00029a48 size=180 ===== */

/* set_jpeg_qf_min(void*, MppCfgApi_t*, int) */

undefined4 set_jpeg_qf_min(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00029afc + 0x29a60 + DAT_00029b00) & 1) != 0) {
    _mpp_log(DAT_00029b0c + 0x29acc,DAT_00029b08 + 0x29ac8,DAT_00029b04 + 0x29ac4);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 4;
  return 0;
}



/* ===== get_jpeg_qf_min @ 00029b10 size=108 ===== */

/* get_jpeg_qf_min(void*, MppCfgApi_t*, int*) */

undefined4 get_jpeg_qf_min(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00029b7c + 0x29b28 + DAT_00029b80) & 1) != 0) {
    _mpp_log(DAT_00029b8c + 0x29b78,DAT_00029b88 + 0x29b74,DAT_00029b84 + 0x29b70);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_split_mode @ 00029b90 size=180 ===== */

/* set_split_mode(void*, MppCfgApi_t*, unsigned int) */

undefined4 set_split_mode(void *param_1,MppCfgApi_t *param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00029c44 + 0x29ba8 + DAT_00029c48) & 1) != 0) {
    _mpp_log(DAT_00029c54 + 0x29c14,DAT_00029c50 + 0x29c10,DAT_00029c4c + 0x29c0c);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 1;
  return 0;
}



/* ===== get_split_mode @ 00029c58 size=108 ===== */

/* get_split_mode(void*, MppCfgApi_t*, unsigned int*) */

undefined4 get_split_mode(void *param_1,MppCfgApi_t *param_2,uint *param_3)

{
  if ((**(uint **)(DAT_00029cc4 + 0x29c70 + DAT_00029cc8) & 1) != 0) {
    _mpp_log(DAT_00029cd4 + 0x29cc0,DAT_00029cd0 + 0x29cbc,DAT_00029ccc + 0x29cb8);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_split_arg @ 00029cd8 size=180 ===== */

/* set_split_arg(void*, MppCfgApi_t*, unsigned int) */

undefined4 set_split_arg(void *param_1,MppCfgApi_t *param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00029d8c + 0x29cf0 + DAT_00029d90) & 1) != 0) {
    _mpp_log(DAT_00029d9c + 0x29d5c,DAT_00029d98 + 0x29d58,DAT_00029d94 + 0x29d54);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 2;
  return 0;
}



/* ===== get_split_arg @ 00029da0 size=108 ===== */

/* get_split_arg(void*, MppCfgApi_t*, unsigned int*) */

undefined4 get_split_arg(void *param_1,MppCfgApi_t *param_2,uint *param_3)

{
  if ((**(uint **)(DAT_00029e0c + 0x29db8 + DAT_00029e10) & 1) != 0) {
    _mpp_log(DAT_00029e1c + 0x29e08,DAT_00029e18 + 0x29e04,DAT_00029e14 + 0x29e00);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_hw_qp_row @ 00029e20 size=180 ===== */

/* set_hw_qp_row(void*, MppCfgApi_t*, int) */

undefined4 set_hw_qp_row(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_00029ed4 + 0x29e38 + DAT_00029ed8) & 1) != 0) {
    _mpp_log(DAT_00029ee4 + 0x29ea4,DAT_00029ee0 + 0x29ea0,DAT_00029edc + 0x29e9c);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 1;
  return 0;
}



/* ===== get_hw_qp_row @ 00029ee8 size=108 ===== */

/* get_hw_qp_row(void*, MppCfgApi_t*, int*) */

undefined4 get_hw_qp_row(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_00029f54 + 0x29f00 + DAT_00029f58) & 1) != 0) {
    _mpp_log(DAT_00029f64 + 0x29f50,DAT_00029f60 + 0x29f4c,DAT_00029f5c + 0x29f48);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_hw_qp_row_i @ 00029f68 size=180 ===== */

/* set_hw_qp_row_i(void*, MppCfgApi_t*, int) */

undefined4 set_hw_qp_row_i(void *param_1,MppCfgApi_t *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_0002a01c + 0x29f80 + DAT_0002a020) & 1) != 0) {
    _mpp_log(DAT_0002a02c + 0x29fec,DAT_0002a028 + 0x29fe8,DAT_0002a024 + 0x29fe4);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),&local_1c,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 2;
  return 0;
}



/* ===== get_hw_qp_row_i @ 0002a030 size=108 ===== */

/* get_hw_qp_row_i(void*, MppCfgApi_t*, int*) */

undefined4 get_hw_qp_row_i(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  if ((**(uint **)(DAT_0002a09c + 0x2a048 + DAT_0002a0a0) & 1) != 0) {
    _mpp_log(DAT_0002a0ac + 0x2a098,DAT_0002a0a8 + 0x2a094,DAT_0002a0a4 + 0x2a090);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_hw_aq_thrd_i @ 0002a0b0 size=164 ===== */

/* set_hw_aq_thrd_i(void*, MppCfgApi_t*, int*) */

undefined4 set_hw_aq_thrd_i(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  
  if ((**(uint **)(DAT_0002a154 + 0x2a0c8 + DAT_0002a158) & 1) != 0) {
    _mpp_log(DAT_0002a164 + 0x2a128,DAT_0002a160 + 0x2a124,DAT_0002a15c + 0x2a120);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),param_3,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),param_3,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 4;
  return 0;
}



/* ===== get_hw_aq_thrd_i @ 0002a168 size=108 ===== */

/* get_hw_aq_thrd_i(void*, MppCfgApi_t*, int**) */

undefined4 get_hw_aq_thrd_i(void *param_1,MppCfgApi_t *param_2,int **param_3)

{
  if ((**(uint **)(DAT_0002a1d4 + 0x2a180 + DAT_0002a1d8) & 1) != 0) {
    _mpp_log(DAT_0002a1e4 + 0x2a1d0,DAT_0002a1e0 + 0x2a1cc,DAT_0002a1dc + 0x2a1c8);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_hw_aq_thrd_p @ 0002a1e8 size=164 ===== */

/* set_hw_aq_thrd_p(void*, MppCfgApi_t*, int*) */

undefined4 set_hw_aq_thrd_p(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  
  if ((**(uint **)(DAT_0002a28c + 0x2a200 + DAT_0002a290) & 1) != 0) {
    _mpp_log(DAT_0002a29c + 0x2a260,DAT_0002a298 + 0x2a25c,DAT_0002a294 + 0x2a258);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),param_3,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),param_3,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 8;
  return 0;
}



/* ===== get_hw_aq_thrd_p @ 0002a2a0 size=108 ===== */

/* get_hw_aq_thrd_p(void*, MppCfgApi_t*, int**) */

undefined4 get_hw_aq_thrd_p(void *param_1,MppCfgApi_t *param_2,int **param_3)

{
  if ((**(uint **)(DAT_0002a30c + 0x2a2b8 + DAT_0002a310) & 1) != 0) {
    _mpp_log(DAT_0002a31c + 0x2a308,DAT_0002a318 + 0x2a304,DAT_0002a314 + 0x2a300);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_hw_aq_step_i @ 0002a320 size=164 ===== */

/* set_hw_aq_step_i(void*, MppCfgApi_t*, int*) */

undefined4 set_hw_aq_step_i(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  
  if ((**(uint **)(DAT_0002a3c4 + 0x2a338 + DAT_0002a3c8) & 1) != 0) {
    _mpp_log(DAT_0002a3d4 + 0x2a398,DAT_0002a3d0 + 0x2a394,DAT_0002a3cc + 0x2a390);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),param_3,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),param_3,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x10;
  return 0;
}



/* ===== get_hw_aq_step_i @ 0002a3d8 size=108 ===== */

/* get_hw_aq_step_i(void*, MppCfgApi_t*, int**) */

undefined4 get_hw_aq_step_i(void *param_1,MppCfgApi_t *param_2,int **param_3)

{
  if ((**(uint **)(DAT_0002a444 + 0x2a3f0 + DAT_0002a448) & 1) != 0) {
    _mpp_log(DAT_0002a454 + 0x2a440,DAT_0002a450 + 0x2a43c,DAT_0002a44c + 0x2a438);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_hw_aq_step_p @ 0002a458 size=164 ===== */

/* set_hw_aq_step_p(void*, MppCfgApi_t*, int*) */

undefined4 set_hw_aq_step_p(void *param_1,MppCfgApi_t *param_2,int *param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  
  if ((**(uint **)(DAT_0002a4fc + 0x2a470 + DAT_0002a500) & 1) != 0) {
    _mpp_log(DAT_0002a50c + 0x2a4d0,DAT_0002a508 + 0x2a4cc,DAT_0002a504 + 0x2a4c8);
  }
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 6);
  iVar3 = memcmp((void *)((int)param_1 + (uint)uVar2),param_3,(uint)(uVar1 >> 4));
  if (iVar3 == 0) {
    return 0;
  }
  memcpy((void *)((int)param_1 + (uint)uVar2),param_3,(uint)(uVar1 >> 4));
  *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)((int)param_1 + (uint)*(ushort *)(param_2 + 10)) | 0x20;
  return 0;
}



/* ===== get_hw_aq_step_p @ 0002a510 size=108 ===== */

/* get_hw_aq_step_p(void*, MppCfgApi_t*, int**) */

undefined4 get_hw_aq_step_p(void *param_1,MppCfgApi_t *param_2,int **param_3)

{
  if ((**(uint **)(DAT_0002a57c + 0x2a528 + DAT_0002a580) & 1) != 0) {
    _mpp_log(DAT_0002a58c + 0x2a578,DAT_0002a588 + 0x2a574,DAT_0002a584 + 0x2a570);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== set_tune_scene_mode @ 0002a590 size=180 ===== */

/* set_tune_scene_mode(void*, MppCfgApi_t*, MppEncSceneMode_e) */

undefined4 set_tune_scene_mode(int param_1,int param_2,undefined4 param_3)

{
  uint __n;
  int iVar1;
  void *__s1;
  undefined4 local_1c;
  
  local_1c = param_3;
  if ((**(uint **)(DAT_0002a644 + 0x2a5a8 + DAT_0002a648) & 1) != 0) {
    _mpp_log(DAT_0002a654 + 0x2a614,DAT_0002a650 + 0x2a610,DAT_0002a64c + 0x2a60c);
  }
  __n = (uint)(*(ushort *)(param_2 + 4) >> 4);
  __s1 = (void *)(param_1 + (uint)*(ushort *)(param_2 + 6));
  iVar1 = memcmp(__s1,&local_1c,__n);
  if (iVar1 == 0) {
    return 0;
  }
  memcpy(__s1,&local_1c,__n);
  *(uint *)(param_1 + (uint)*(ushort *)(param_2 + 10)) =
       *(uint *)(param_1 + (uint)*(ushort *)(param_2 + 10)) | 1;
  return 0;
}



/* ===== get_tune_scene_mode @ 0002a658 size=108 ===== */

/* get_tune_scene_mode(void*, MppCfgApi_t*, MppEncSceneMode_e*) */

undefined4 get_tune_scene_mode(void *param_1,MppCfgApi_t *param_2,MppEncSceneMode_e *param_3)

{
  if ((**(uint **)(DAT_0002a6c4 + 0x2a670 + DAT_0002a6c8) & 1) != 0) {
    _mpp_log(DAT_0002a6d4 + 0x2a6c0,DAT_0002a6d0 + 0x2a6bc,DAT_0002a6cc + 0x2a6b8);
  }
  memcpy(param_3,(void *)((int)param_1 + (uint)*(ushort *)(param_2 + 6)),
         (uint)(*(ushort *)(param_2 + 4) >> 4));
  return 0;
}



/* ===== MppEncCfgService::~MppEncCfgService @ 0002a6d8 size=32 ===== */

/* MppEncCfgService::~MppEncCfgService() */

MppEncCfgService * __thiscall MppEncCfgService::~MppEncCfgService(MppEncCfgService *this)

{
  if (*(int *)this != 0) {
    mpp_trie_deinit();
  }
  return this;
}



/* ===== Mutex::~Mutex @ 0002a6f8 size=20 ===== */

/* Mutex::~Mutex() */

Mutex * __thiscall Mutex::~Mutex(Mutex *this)

{
  pthread_mutex_destroy((pthread_mutex_t *)this);
  return this;
}



/* ===== const_strlen @ 0002a70c size=48 ===== */

/* const_strlen(char const*) */

char * const_strlen(char *param_1)

{
  char *pcVar1;
  int iVar2;
  
  if (*param_1 != '\0') {
    iVar2 = 1 - (int)param_1;
    do {
      pcVar1 = param_1 + iVar2;
      param_1 = param_1 + 1;
    } while (*param_1 != '\0');
    return pcVar1;
  }
  return (char *)0x0;
}



/* ===== MppEncCfgService::MppEncCfgService @ 0002a73c size=212 ===== */

/* MppEncCfgService::MppEncCfgService() */

MppEncCfgService * __thiscall MppEncCfgService::MppEncCfgService(MppEncCfgService *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar3 = (undefined4 *)(DAT_0002a810 + 0x2a750);
  *(undefined4 *)this = 0;
  iVar1 = mpp_trie_init(this,*puVar3,0x7e);
  if (iVar1 == 0) {
    puVar3 = (undefined4 *)(DAT_0002a814 + 0x2a774);
    puVar5 = (undefined4 *)(DAT_0002a814 + 0x2a96c);
    do {
      puVar3 = puVar3 + 1;
      mpp_trie_add_info(*(undefined4 *)this,*puVar3);
    } while (puVar3 != puVar5);
  }
  else {
    _mpp_err(DAT_0002a824 + 0x2a7d0,DAT_0002a820 + 0x2a7cc,DAT_0002a81c + 0x2a7c8);
  }
  iVar1 = mpp_trie_get_node_count(*(undefined4 *)this);
  iVar4 = *(int *)(DAT_0002a818 + 0x2a7a4);
  if (iVar1 <= iVar4) {
    return this;
  }
  uVar2 = mpp_trie_get_node_count(*(undefined4 *)this);
  _mpp_err(DAT_0002a830 + 0x2a804,DAT_0002a82c + 0x2a7f8,DAT_0002a828 + 0x2a7f4,0x7e,iVar4,uVar2);
  return this;
}



/* ===== mpp_enc_cfg_init @ 0002a834 size=464 ===== */

undefined4 mpp_enc_cfg_init(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  pthread_mutex_t *__mutex;
  byte *pbVar6;
  MppEncCfgService *this;
  pthread_mutexattr_t pStack_24;
  
  iVar4 = DAT_0002aa04 + 0x2a84c;
  if (param_1 == (int *)0x0) {
    _mpp_err(DAT_0002aa3c + 0x2a9d0,DAT_0002aa38 + 0x2a9cc,DAT_0002aa34 + 0x2a9c8);
    uVar2 = 0xfffffffd;
  }
  else {
    iVar5 = DAT_0002aa08 + 0x2a85c;
    iVar1 = mpp_osal_calloc(iVar5,0x1270);
    iVar3 = DAT_0002aa0c;
    if (iVar1 == 0) {
      _mpp_err(DAT_0002aa44 + 0x2a9f4,DAT_0002aa40 + 0x2a9f0,iVar5,0);
      *param_1 = 0;
      uVar2 = 0xfffffc12;
    }
    else {
      *(undefined4 *)(iVar1 + 0x1268) = 0x1270;
      pbVar6 = *(byte **)(iVar4 + iVar3);
      DataMemoryBarrier(0xb);
      if (((*pbVar6 & 1) == 0) && (iVar3 = __cxa_guard_acquire(pbVar6), iVar3 != 0)) {
        pthread_mutexattr_init(&pStack_24);
        pthread_mutexattr_settype(&pStack_24,1);
        __mutex = *(pthread_mutex_t **)(iVar4 + DAT_0002aa10);
        pthread_mutex_init(__mutex,&pStack_24);
        pthread_mutexattr_destroy(&pStack_24);
        __cxa_guard_release(pbVar6);
        __aeabi_atexit(__mutex,*(undefined4 *)(iVar4 + DAT_0002aa24),DAT_0002aa28 + 0x2a968);
      }
      else {
        __mutex = *(pthread_mutex_t **)(iVar4 + DAT_0002aa10);
      }
      pbVar6 = *(byte **)(iVar4 + DAT_0002aa14);
      DataMemoryBarrier(0xb);
      if ((*pbVar6 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(pbVar6);
        this = *(MppEncCfgService **)(iVar4 + DAT_0002aa18);
        if (iVar3 != 0) {
          MppEncCfgService::MppEncCfgService(this);
          __cxa_guard_release(pbVar6);
          __aeabi_atexit(this,*(undefined4 *)(iVar4 + DAT_0002aa2c),DAT_0002aa30 + 0x2a9ac);
        }
      }
      else {
        this = *(MppEncCfgService **)(iVar4 + DAT_0002aa18);
      }
      pthread_mutex_lock(__mutex);
      pthread_mutex_unlock(__mutex);
      iVar3 = DAT_0002aa1c;
      *(undefined4 *)(iVar1 + 0x126c) = *(undefined4 *)this;
      *(undefined8 *)(iVar1 + 0x28) = 0x200000002;
      iVar5 = DAT_0002aa20;
      *(undefined4 *)(iVar1 + 0x30) = 2;
      mpp_env_get_u32(iVar5 + 0x2a8f4,*(undefined4 *)(iVar4 + iVar3),0);
      uVar2 = 0;
      *param_1 = iVar1;
    }
  }
  return uVar2;
}



/* ===== mpp_enc_cfg_deinit @ 0002aa48 size=68 ===== */

undefined4 mpp_enc_cfg_deinit(int param_1)

{
  if (param_1 != 0) {
    mpp_osal_free(DAT_0002aa8c + 0x2aa60);
    return 0;
  }
  _mpp_err(DAT_0002aa98 + 0x2aa84,DAT_0002aa94 + 0x2aa80,DAT_0002aa90 + 0x2aa7c);
  return 0xfffffffd;
}



/* ===== mpp_enc_cfg_set_s32 @ 0002aa9c size=300 ===== */

undefined4 mpp_enc_cfg_set_s32(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = DAT_0002abc8 + 0x2aac4;
  if (param_1 == 0 || param_2 == 0) {
    _mpp_err(DAT_0002abe8 + 0x2ab88,DAT_0002abe4 + 0x2ab84,DAT_0002abe0 + 0x2ab80,param_1,param_2);
    uVar3 = 0xfffffffd;
  }
  else {
    puVar1 = (undefined4 *)mpp_trie_get_info(*(undefined4 *)(param_1 + 0x126c));
    if (puVar1 == (undefined4 *)0x0) {
      _mpp_err(DAT_0002abf4 + 0x2abc0,DAT_0002abf0 + 0x2abbc,DAT_0002abec + 0x2abb4,param_2,param_3)
      ;
      uVar3 = 0xffffffff;
    }
    else {
      iVar2 = check_cfg_api_info(puVar1,0);
      if (iVar2 == 0) {
        if ((**(uint **)(iVar4 + DAT_0002abcc) & 4) != 0) {
          _mpp_log(DAT_0002abdc + 0x2ab60,DAT_0002abd4 + 0x2ab48,DAT_0002abd8 + 0x2ab54,*puVar1,
                   *(undefined4 *)
                    (*(int *)(iVar4 + DAT_0002abd0) + (*(byte *)(puVar1 + 1) & 0xf) * 4));
        }
                    /* WARNING: Could not recover jumptable at 0x0002ab24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)puVar1[3])(param_1,puVar1,param_3);
        return uVar3;
      }
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}



/* ===== mpp_enc_cfg_set_u32 @ 0002abf8 size=284 ===== */

undefined4 mpp_enc_cfg_set_u32(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = DAT_0002ad14 + 0x2ac1c;
  if (param_2 == 0 || param_1 == 0) {
    _mpp_err(DAT_0002ad34 + 0x2acd4,DAT_0002ad30 + 0x2acd0,DAT_0002ad2c + 0x2accc,param_1,param_2);
    uVar3 = 0xfffffffd;
  }
  else {
    puVar1 = (undefined4 *)mpp_trie_get_info(*(undefined4 *)(param_1 + 0x126c));
    if (puVar1 == (undefined4 *)0x0) {
      _mpp_err(DAT_0002ad40 + 0x2ad0c,DAT_0002ad3c + 0x2ad08,DAT_0002ad38 + 0x2ad00,param_2,param_3)
      ;
      uVar3 = 0xffffffff;
    }
    else {
      iVar2 = check_cfg_api_info(puVar1,1);
      if (iVar2 == 0) {
        if ((**(uint **)(iVar4 + DAT_0002ad18) & 4) != 0) {
          _mpp_log(DAT_0002ad28 + 0x2acac,DAT_0002ad20 + 0x2ac94,DAT_0002ad24 + 0x2aca0,*puVar1,
                   *(undefined4 *)
                    (*(int *)(iVar4 + DAT_0002ad1c) + (*(byte *)(puVar1 + 1) & 0xf) * 4));
        }
                    /* WARNING: Could not recover jumptable at 0x0002ac70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)puVar1[3])(param_1,puVar1,param_3);
        return uVar3;
      }
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}



/* ===== mpp_enc_cfg_set_s64 @ 0002ad44 size=296 ===== */

undefined4 mpp_enc_cfg_set_s64(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = DAT_0002ae6c + 0x2ad68;
  if (param_2 == 0 || param_1 == 0) {
    _mpp_err(DAT_0002ae8c + 0x2ae2c,DAT_0002ae88 + 0x2ae28,DAT_0002ae84 + 0x2ae24,param_1,param_2);
    uVar3 = 0xfffffffd;
  }
  else {
    puVar1 = (undefined4 *)mpp_trie_get_info(*(undefined4 *)(param_1 + 0x126c));
    if (puVar1 == (undefined4 *)0x0) {
      _mpp_err(DAT_0002ae98 + 0x2ae64,DAT_0002ae94 + 0x2ae60,DAT_0002ae90 + 0x2ae58,param_2,param_3,
               param_4);
      uVar3 = 0xffffffff;
    }
    else {
      iVar2 = check_cfg_api_info(puVar1,2);
      if (iVar2 == 0) {
        if ((**(uint **)(iVar4 + DAT_0002ae70) & 4) != 0) {
          _mpp_log(DAT_0002ae80 + 0x2ae04,DAT_0002ae78 + 0x2adec,DAT_0002ae7c + 0x2adf8,*puVar1,
                   *(undefined4 *)
                    (*(int *)(iVar4 + DAT_0002ae74) + (*(byte *)(puVar1 + 1) & 0xf) * 4));
        }
                    /* WARNING: Could not recover jumptable at 0x0002adc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)puVar1[3])(param_1,puVar1,param_3,param_4);
        return uVar3;
      }
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}



/* ===== mpp_enc_cfg_set_u64 @ 0002ae9c size=296 ===== */

undefined4 mpp_enc_cfg_set_u64(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = DAT_0002afc4 + 0x2aec0;
  if (param_2 == 0 || param_1 == 0) {
    _mpp_err(DAT_0002afe4 + 0x2af84,DAT_0002afe0 + 0x2af80,DAT_0002afdc + 0x2af7c,param_1,param_2);
    uVar3 = 0xfffffffd;
  }
  else {
    puVar1 = (undefined4 *)mpp_trie_get_info(*(undefined4 *)(param_1 + 0x126c));
    if (puVar1 == (undefined4 *)0x0) {
      _mpp_err(DAT_0002aff0 + 0x2afbc,DAT_0002afec + 0x2afb8,DAT_0002afe8 + 0x2afb0,param_2,param_3,
               param_4);
      uVar3 = 0xffffffff;
    }
    else {
      iVar2 = check_cfg_api_info(puVar1,3);
      if (iVar2 == 0) {
        if ((**(uint **)(iVar4 + DAT_0002afc8) & 4) != 0) {
          _mpp_log(DAT_0002afd8 + 0x2af5c,DAT_0002afd0 + 0x2af44,DAT_0002afd4 + 0x2af50,*puVar1,
                   *(undefined4 *)
                    (*(int *)(iVar4 + DAT_0002afcc) + (*(byte *)(puVar1 + 1) & 0xf) * 4));
        }
                    /* WARNING: Could not recover jumptable at 0x0002af20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)puVar1[3])(param_1,puVar1,param_3,param_4);
        return uVar3;
      }
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}



/* ===== mpp_enc_cfg_set_ptr @ 0002aff4 size=284 ===== */

undefined4 mpp_enc_cfg_set_ptr(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = DAT_0002b110 + 0x2b018;
  if (param_2 == 0 || param_1 == 0) {
    _mpp_err(DAT_0002b130 + 0x2b0d0,DAT_0002b12c + 0x2b0cc,DAT_0002b128 + 0x2b0c8,param_1,param_2);
    uVar3 = 0xfffffffd;
  }
  else {
    puVar1 = (undefined4 *)mpp_trie_get_info(*(undefined4 *)(param_1 + 0x126c));
    if (puVar1 == (undefined4 *)0x0) {
      _mpp_err(DAT_0002b13c + 0x2b108,DAT_0002b138 + 0x2b104,DAT_0002b134 + 0x2b0fc,param_2,param_3)
      ;
      uVar3 = 0xffffffff;
    }
    else {
      iVar2 = check_cfg_api_info(puVar1,4);
      if (iVar2 == 0) {
        if ((**(uint **)(iVar4 + DAT_0002b114) & 4) != 0) {
          _mpp_log(DAT_0002b124 + 0x2b0a8,DAT_0002b11c + 0x2b090,DAT_0002b120 + 0x2b09c,*puVar1,
                   *(undefined4 *)
                    (*(int *)(iVar4 + DAT_0002b118) + (*(byte *)(puVar1 + 1) & 0xf) * 4));
        }
                    /* WARNING: Could not recover jumptable at 0x0002b06c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)puVar1[3])(param_1,puVar1,param_3);
        return uVar3;
      }
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}



/* ===== mpp_enc_cfg_set_st @ 0002b140 size=284 ===== */

undefined4 mpp_enc_cfg_set_st(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = DAT_0002b25c + 0x2b164;
  if (param_2 == 0 || param_1 == 0) {
    _mpp_err(DAT_0002b27c + 0x2b21c,DAT_0002b278 + 0x2b218,DAT_0002b274 + 0x2b214,param_1,param_2);
    uVar3 = 0xfffffffd;
  }
  else {
    puVar1 = (undefined4 *)mpp_trie_get_info(*(undefined4 *)(param_1 + 0x126c));
    if (puVar1 == (undefined4 *)0x0) {
      _mpp_err(DAT_0002b288 + 0x2b254,DAT_0002b284 + 0x2b250,DAT_0002b280 + 0x2b248,param_2,param_3)
      ;
      uVar3 = 0xffffffff;
    }
    else {
      iVar2 = check_cfg_api_info(puVar1,5);
      if (iVar2 == 0) {
        if ((**(uint **)(iVar4 + DAT_0002b260) & 4) != 0) {
          _mpp_log(DAT_0002b270 + 0x2b1f4,DAT_0002b268 + 0x2b1dc,DAT_0002b26c + 0x2b1e8,*puVar1,
                   *(undefined4 *)
                    (*(int *)(iVar4 + DAT_0002b264) + (*(byte *)(puVar1 + 1) & 0xf) * 4));
        }
                    /* WARNING: Could not recover jumptable at 0x0002b1b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)puVar1[3])(param_1,puVar1,param_3);
        return uVar3;
      }
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}



/* ===== mpp_enc_cfg_get_s32 @ 0002b28c size=300 ===== */

undefined4 mpp_enc_cfg_get_s32(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = DAT_0002b3b8 + 0x2b2b4;
  if (param_1 == 0 || param_2 == 0) {
    _mpp_err(DAT_0002b3d8 + 0x2b378,DAT_0002b3d4 + 0x2b374,DAT_0002b3d0 + 0x2b370,param_1,param_2);
    uVar3 = 0xfffffffd;
  }
  else {
    puVar1 = (undefined4 *)mpp_trie_get_info(*(undefined4 *)(param_1 + 0x126c));
    if (puVar1 == (undefined4 *)0x0) {
      _mpp_err(DAT_0002b3e4 + 0x2b3b0,DAT_0002b3e0 + 0x2b3ac,DAT_0002b3dc + 0x2b3a4,param_2,param_3)
      ;
      uVar3 = 0xffffffff;
    }
    else {
      iVar2 = check_cfg_api_info(puVar1,0);
      if (iVar2 == 0) {
        if ((**(uint **)(iVar4 + DAT_0002b3bc) & 8) != 0) {
          _mpp_log(DAT_0002b3cc + 0x2b350,DAT_0002b3c4 + 0x2b338,DAT_0002b3c8 + 0x2b344,*puVar1,
                   *(undefined4 *)
                    (*(int *)(iVar4 + DAT_0002b3c0) + (*(byte *)(puVar1 + 1) & 0xf) * 4));
        }
                    /* WARNING: Could not recover jumptable at 0x0002b314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)puVar1[4])(param_1,puVar1,param_3);
        return uVar3;
      }
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}



/* ===== mpp_enc_cfg_get_u32 @ 0002b3e8 size=284 ===== */

undefined4 mpp_enc_cfg_get_u32(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = DAT_0002b504 + 0x2b40c;
  if (param_2 == 0 || param_1 == 0) {
    _mpp_err(DAT_0002b524 + 0x2b4c4,DAT_0002b520 + 0x2b4c0,DAT_0002b51c + 0x2b4bc,param_1,param_2);
    uVar3 = 0xfffffffd;
  }
  else {
    puVar1 = (undefined4 *)mpp_trie_get_info(*(undefined4 *)(param_1 + 0x126c));
    if (puVar1 == (undefined4 *)0x0) {
      _mpp_err(DAT_0002b530 + 0x2b4fc,DAT_0002b52c + 0x2b4f8,DAT_0002b528 + 0x2b4f0,param_2,param_3)
      ;
      uVar3 = 0xffffffff;
    }
    else {
      iVar2 = check_cfg_api_info(puVar1,1);
      if (iVar2 == 0) {
        if ((**(uint **)(iVar4 + DAT_0002b508) & 8) != 0) {
          _mpp_log(DAT_0002b518 + 0x2b49c,DAT_0002b510 + 0x2b484,DAT_0002b514 + 0x2b490,*puVar1,
                   *(undefined4 *)
                    (*(int *)(iVar4 + DAT_0002b50c) + (*(byte *)(puVar1 + 1) & 0xf) * 4));
        }
                    /* WARNING: Could not recover jumptable at 0x0002b460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)puVar1[4])(param_1,puVar1,param_3);
        return uVar3;
      }
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}



/* ===== mpp_enc_cfg_get_s64 @ 0002b534 size=284 ===== */

undefined4 mpp_enc_cfg_get_s64(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = DAT_0002b650 + 0x2b558;
  if (param_2 == 0 || param_1 == 0) {
    _mpp_err(DAT_0002b670 + 0x2b610,DAT_0002b66c + 0x2b60c,DAT_0002b668 + 0x2b608,param_1,param_2);
    uVar3 = 0xfffffffd;
  }
  else {
    puVar1 = (undefined4 *)mpp_trie_get_info(*(undefined4 *)(param_1 + 0x126c));
    if (puVar1 == (undefined4 *)0x0) {
      _mpp_err(DAT_0002b67c + 0x2b648,DAT_0002b678 + 0x2b644,DAT_0002b674 + 0x2b63c,param_2,param_3)
      ;
      uVar3 = 0xffffffff;
    }
    else {
      iVar2 = check_cfg_api_info(puVar1,2);
      if (iVar2 == 0) {
        if ((**(uint **)(iVar4 + DAT_0002b654) & 8) != 0) {
          _mpp_log(DAT_0002b664 + 0x2b5e8,DAT_0002b65c + 0x2b5d0,DAT_0002b660 + 0x2b5dc,*puVar1,
                   *(undefined4 *)
                    (*(int *)(iVar4 + DAT_0002b658) + (*(byte *)(puVar1 + 1) & 0xf) * 4));
        }
                    /* WARNING: Could not recover jumptable at 0x0002b5ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)puVar1[4])(param_1,puVar1,param_3);
        return uVar3;
      }
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}



/* ===== mpp_enc_cfg_get_u64 @ 0002b680 size=284 ===== */

undefined4 mpp_enc_cfg_get_u64(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = DAT_0002b79c + 0x2b6a4;
  if (param_2 == 0 || param_1 == 0) {
    _mpp_err(DAT_0002b7bc + 0x2b75c,DAT_0002b7b8 + 0x2b758,DAT_0002b7b4 + 0x2b754,param_1,param_2);
    uVar3 = 0xfffffffd;
  }
  else {
    puVar1 = (undefined4 *)mpp_trie_get_info(*(undefined4 *)(param_1 + 0x126c));
    if (puVar1 == (undefined4 *)0x0) {
      _mpp_err(DAT_0002b7c8 + 0x2b794,DAT_0002b7c4 + 0x2b790,DAT_0002b7c0 + 0x2b788,param_2,param_3)
      ;
      uVar3 = 0xffffffff;
    }
    else {
      iVar2 = check_cfg_api_info(puVar1,3);
      if (iVar2 == 0) {
        if ((**(uint **)(iVar4 + DAT_0002b7a0) & 8) != 0) {
          _mpp_log(DAT_0002b7b0 + 0x2b734,DAT_0002b7a8 + 0x2b71c,DAT_0002b7ac + 0x2b728,*puVar1,
                   *(undefined4 *)
                    (*(int *)(iVar4 + DAT_0002b7a4) + (*(byte *)(puVar1 + 1) & 0xf) * 4));
        }
                    /* WARNING: Could not recover jumptable at 0x0002b6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)puVar1[4])(param_1,puVar1,param_3);
        return uVar3;
      }
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}



/* ===== mpp_enc_cfg_get_ptr @ 0002b7cc size=284 ===== */

undefined4 mpp_enc_cfg_get_ptr(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = DAT_0002b8e8 + 0x2b7f0;
  if (param_2 == 0 || param_1 == 0) {
    _mpp_err(DAT_0002b908 + 0x2b8a8,DAT_0002b904 + 0x2b8a4,DAT_0002b900 + 0x2b8a0,param_1,param_2);
    uVar3 = 0xfffffffd;
  }
  else {
    puVar1 = (undefined4 *)mpp_trie_get_info(*(undefined4 *)(param_1 + 0x126c));
    if (puVar1 == (undefined4 *)0x0) {
      _mpp_err(DAT_0002b914 + 0x2b8e0,DAT_0002b910 + 0x2b8dc,DAT_0002b90c + 0x2b8d4,param_2,param_3)
      ;
      uVar3 = 0xffffffff;
    }
    else {
      iVar2 = check_cfg_api_info(puVar1,4);
      if (iVar2 == 0) {
        if ((**(uint **)(iVar4 + DAT_0002b8ec) & 8) != 0) {
          _mpp_log(DAT_0002b8fc + 0x2b880,DAT_0002b8f4 + 0x2b868,DAT_0002b8f8 + 0x2b874,*puVar1,
                   *(undefined4 *)
                    (*(int *)(iVar4 + DAT_0002b8f0) + (*(byte *)(puVar1 + 1) & 0xf) * 4));
        }
                    /* WARNING: Could not recover jumptable at 0x0002b844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)puVar1[4])(param_1,puVar1,param_3);
        return uVar3;
      }
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}



/* ===== mpp_enc_cfg_get_st @ 0002b918 size=284 ===== */

undefined4 mpp_enc_cfg_get_st(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = DAT_0002ba34 + 0x2b93c;
  if (param_2 == 0 || param_1 == 0) {
    _mpp_err(DAT_0002ba54 + 0x2b9f4,DAT_0002ba50 + 0x2b9f0,DAT_0002ba4c + 0x2b9ec,param_1,param_2);
    uVar3 = 0xfffffffd;
  }
  else {
    puVar1 = (undefined4 *)mpp_trie_get_info(*(undefined4 *)(param_1 + 0x126c));
    if (puVar1 == (undefined4 *)0x0) {
      _mpp_err(DAT_0002ba60 + 0x2ba2c,DAT_0002ba5c + 0x2ba28,DAT_0002ba58 + 0x2ba20,param_2,param_3)
      ;
      uVar3 = 0xffffffff;
    }
    else {
      iVar2 = check_cfg_api_info(puVar1,5);
      if (iVar2 == 0) {
        if ((**(uint **)(iVar4 + DAT_0002ba38) & 8) != 0) {
          _mpp_log(DAT_0002ba48 + 0x2b9cc,DAT_0002ba40 + 0x2b9b4,DAT_0002ba44 + 0x2b9c0,*puVar1,
                   *(undefined4 *)
                    (*(int *)(iVar4 + DAT_0002ba3c) + (*(byte *)(puVar1 + 1) & 0xf) * 4));
        }
                    /* WARNING: Could not recover jumptable at 0x0002b990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)puVar1[4])(param_1,puVar1,param_3);
        return uVar3;
      }
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}



/* ===== mpp_enc_cfg_show @ 0002ba64 size=460 ===== */

void mpp_enc_cfg_show(void)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  pthread_mutex_t *__mutex;
  int iVar4;
  byte *pbVar5;
  MppEncCfgService *this;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  pthread_mutexattr_t apStack_24 [2];
  
  iVar2 = DAT_0002bc3c;
  iVar4 = DAT_0002bc30 + 0x2ba80;
  iVar9 = DAT_0002bc38 + 0x2ba94;
  _mpp_log(iVar4,DAT_0002bc34 + 0x2ba88,0);
  pcVar3 = (code *)(iVar2 + 0x2baa0);
  iVar6 = *(int *)(iVar9 + DAT_0002bc40);
  iVar8 = DAT_0002bc44 + 0x2bab4;
  do {
    pcVar3 = pcVar3 + 4;
    _mpp_log(iVar4,iVar8,0,**(undefined4 **)pcVar3,
             *(undefined4 *)(iVar6 + (*(byte *)(*(undefined4 **)pcVar3 + 1) & 0xf) * 4));
  } while (pcVar3 != mpp_mpi_buf_alloc + iVar2);
  _mpp_log(iVar4,DAT_0002bc48 + 0x2baf4,0);
  pbVar5 = *(byte **)(iVar9 + DAT_0002bc4c);
  uVar7 = *(undefined4 *)(DAT_0002bc50 + 0x2bb08);
  DataMemoryBarrier(0xb);
  if (((*pbVar5 & 1) == 0) && (iVar2 = __cxa_guard_acquire(pbVar5), iVar2 != 0)) {
    pthread_mutexattr_init(apStack_24);
    pthread_mutexattr_settype(apStack_24,1);
    __mutex = *(pthread_mutex_t **)(iVar9 + DAT_0002bc54);
    pthread_mutex_init(__mutex,apStack_24);
    pthread_mutexattr_destroy(apStack_24);
    __cxa_guard_release(pbVar5);
    __aeabi_atexit(__mutex,*(undefined4 *)(iVar9 + DAT_0002bc68),DAT_0002bc6c + 0x2bbe4);
  }
  else {
    __mutex = *(pthread_mutex_t **)(iVar9 + DAT_0002bc54);
  }
  pbVar5 = *(byte **)(iVar9 + DAT_0002bc58);
  DataMemoryBarrier(0xb);
  if ((*pbVar5 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(pbVar5);
    this = *(MppEncCfgService **)(iVar9 + DAT_0002bc5c);
    if (iVar2 != 0) {
      MppEncCfgService::MppEncCfgService(this);
      __cxa_guard_release(pbVar5);
      __aeabi_atexit(this,*(undefined4 *)(iVar9 + DAT_0002bc70),DAT_0002bc74 + 0x2bc28);
    }
  }
  else {
    this = *(MppEncCfgService **)(iVar9 + DAT_0002bc5c);
  }
  pthread_mutex_lock(__mutex);
  pthread_mutex_unlock(__mutex);
  uVar1 = mpp_trie_get_node_count(*(undefined4 *)this);
  _mpp_log(DAT_0002bc64 + 0x2bb7c,DAT_0002bc60 + 0x2bb70,0,0x7e,uVar7,uVar1);
  return;
}



/* ===== MpibufService::~MpibufService @ 0002bc78 size=32 ===== */

/* MpibufService::~MpibufService() */

MpibufService * __thiscall MpibufService::~MpibufService(MpibufService *this)

{
  if (-1 < *(int *)this) {
    close(*(int *)this);
  }
  return this;
}



/* ===== mpp_mpi_buf_alloc @ 0002bc98 size=312 ===== */

/* mpp_mpi_buf_alloc(valloc_mb**) */

int mpp_mpi_buf_alloc(valloc_mb **param_1)

{
  byte bVar1;
  int iVar2;
  char *__file;
  int iVar3;
  valloc_mb *pvVar4;
  int *piVar5;
  byte *pbVar6;
  
  iVar3 = DAT_0002bdd0 + 0x2bcb4;
  pbVar6 = *(byte **)(iVar3 + DAT_0002bdd4);
  bVar1 = *pbVar6;
  DataMemoryBarrier(0xb);
  if ((bVar1 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(pbVar6);
    if (iVar2 == 0) {
      piVar5 = *(int **)(iVar3 + DAT_0002bdd8);
    }
    else {
      piVar5 = *(int **)(iVar3 + DAT_0002bdd8);
      __file = (char *)(DAT_0002bde4 + 0x2bd78);
      *piVar5 = -1;
      iVar2 = open64(__file,0x80002);
      *piVar5 = iVar2;
      if (iVar2 < 0) {
        _mpp_err(DAT_0002bdf4 + 0x2bdcc,DAT_0002bdf0 + 0x2bdc8,bVar1 & 1);
      }
      __cxa_guard_release(pbVar6);
      __aeabi_atexit(piVar5,*(undefined4 *)(iVar3 + DAT_0002bde8),DAT_0002bdec + 0x2bda4);
    }
  }
  else {
    piVar5 = *(int **)(iVar3 + DAT_0002bdd8);
  }
  pvVar4 = *param_1;
  if ((*piVar5 < 0) || (iVar3 = ioctl(*piVar5,0xc01c6102,pvVar4), iVar3 != 0)) {
    iVar3 = -1;
  }
  else {
    iVar3 = ioctl(*piVar5,0xc01c6101,pvVar4);
    _mpp_log(DAT_0002bde0 + 0x2bd30,DAT_0002bddc + 0x2bd20,0,*(undefined4 *)(pvVar4 + 4),
             *(undefined4 *)(pvVar4 + 8));
    iVar3 = -(uint)(iVar3 != 0);
  }
  return iVar3;
}



/* ===== mpp_mpi_buf_free @ 0002bdf8 size=232 ===== */

/* mpp_mpi_buf_free(valloc_mb*) */

int mpp_mpi_buf_free(valloc_mb *param_1)

{
  byte bVar1;
  int iVar2;
  char *__file;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  
  iVar3 = DAT_0002bee0 + 0x2be10;
  pbVar4 = *(byte **)(iVar3 + DAT_0002bee4);
  bVar1 = *pbVar4;
  DataMemoryBarrier(0xb);
  if ((bVar1 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(pbVar4);
    if (iVar2 == 0) {
      piVar5 = *(int **)(iVar3 + DAT_0002bee8);
    }
    else {
      piVar5 = *(int **)(iVar3 + DAT_0002bee8);
      __file = (char *)(DAT_0002beec + 0x2be88);
      *piVar5 = -1;
      iVar2 = open64(__file,0x80002);
      *piVar5 = iVar2;
      if (iVar2 < 0) {
        _mpp_err(DAT_0002befc + 0x2bed4,DAT_0002bef8 + 0x2bed0,bVar1 & 1);
      }
      __cxa_guard_release(pbVar4);
      __aeabi_atexit(piVar5,*(undefined4 *)(iVar3 + DAT_0002bef0),DAT_0002bef4 + 0x2beb4);
    }
  }
  else {
    piVar5 = *(int **)(iVar3 + DAT_0002bee8);
  }
  if (*piVar5 < 0) {
    return -1;
  }
  iVar3 = ioctl(*piVar5,0xc01c6103,param_1);
  return -(uint)(iVar3 != 0);
}



/* ===== mpp_buffer_import_with_tag @ 0002bf00 size=152 ===== */

undefined4
mpp_buffer_import_with_tag
          (undefined4 param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = mpp_osal_calloc(DAT_0002bf98 + 180000,0x44);
  if (iVar1 == 0) {
    _mpp_err(DAT_0002bfa0 + 0x2bf90,DAT_0002bf9c + 0x2bf8c,0,param_1,param_3,
             *(undefined4 *)(param_2 + 0x10),param_5);
    uVar2 = 0xfffffffe;
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 4);
    uVar2 = 0;
    uVar4 = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(iVar1 + 0x1c) = uVar3;
    *(undefined4 *)(iVar1 + 0x38) = uVar3;
    *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
    *(undefined4 *)(iVar1 + 0x30) = uVar4;
    *(undefined4 *)(iVar1 + 0x24) = 1;
    *param_3 = iVar1;
  }
  return uVar2;
}



/* ===== mpp_buffer_get_with_tag @ 0002bfa8 size=172 ===== */

undefined4
mpp_buffer_get_with_tag
          (undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  valloc_mb *local_1c [2];
  
  local_1c[0] = (valloc_mb *)0x0;
  iVar2 = mpp_osal_calloc(DAT_0002c060 + 0x2bfc8,0x44);
  uVar1 = DAT_0002c058;
  if (iVar2 == 0) {
    _mpp_err(DAT_0002c068 + 0x2c040,DAT_0002c064 + 0x2c03c,0,param_1,param_2,param_3,param_5);
    uVar4 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(iVar2 + 0x1c) = param_3;
    *(undefined4 *)(iVar2 + 0x38) = param_3;
    local_1c[0] = (valloc_mb *)(iVar2 + 0x28);
    *(undefined8 *)(iVar2 + 0x30) = uVar1;
    iVar3 = mpp_mpi_buf_alloc(local_1c);
    if (iVar3 == 0) {
      *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + 1;
      *param_2 = iVar2;
      uVar4 = 0;
    }
    else {
      uVar4 = 0xffffffff;
    }
  }
  return uVar4;
}



/* ===== mpp_buffer_put_with_caller @ 0002c06c size=160 ===== */

undefined4 mpp_buffer_put_with_caller(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0xfffffffe;
    _mpp_err(DAT_0002c110 + 0x2c100,DAT_0002c114 + 0x2c108,0,param_2);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x20) + -1;
    *(int *)(param_1 + 0x20) = iVar1;
    if (iVar1 == 0) {
      if (*(void **)(param_1 + 8) != (void *)0x0) {
        munmap(*(void **)(param_1 + 8),*(size_t *)(param_1 + 0x1c));
        *(undefined4 *)(param_1 + 8) = 0;
      }
      if (-1 < *(int *)(param_1 + 0x30)) {
        close(*(int *)(param_1 + 0x30));
      }
      if (*(int *)(param_1 + 0x24) == 0) {
        mpp_mpi_buf_free((valloc_mb *)(param_1 + 0x28));
      }
      mpp_osal_free(DAT_0002c10c + 0x2c0d4,param_1);
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* ===== mpp_buffer_inc_ref_with_caller @ 0002c118 size=64 ===== */

undefined4 mpp_buffer_inc_ref_with_caller(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    return 0;
  }
  _mpp_err(DAT_0002c158 + 0x2c150,DAT_0002c15c + 0x2c14c,0,param_2);
  return 0xfffffffe;
}



/* ===== mpp_buffer_read_with_caller @ 0002c160 size=260 ===== */

undefined4
mpp_buffer_read_with_caller(int param_1,int param_2,void *param_3,size_t param_4,undefined4 param_5)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = DAT_0002c264 + 0x2c184;
  if (param_3 == (void *)0x0 || param_1 == 0) {
    _mpp_err(DAT_0002c280 + 0x2c25c,DAT_0002c27c + 0x2c258,0,param_1,param_3,param_5);
    return 0xfffffffe;
  }
  if (param_4 != 0) {
    pvVar1 = *(void **)(param_1 + 8);
    if (pvVar1 == (void *)0x0) {
      pvVar1 = mmap64((void *)0x0,*(size_t *)(param_1 + 0x1c),3,1,*(int *)(param_1 + 0x30),0);
      *(void **)(param_1 + 8) = pvVar1;
      if (pvVar1 == (void *)0x0) {
        _mpp_err(DAT_0002c274 + 0x2c21c,DAT_0002c270 + 0x2c218,0,DAT_0002c26c + 0x2c20c,
                 DAT_0002c268 + 0x2c200,0xec);
        if ((**(uint **)(iVar2 + DAT_0002c278) & 0x10000000) == 0) {
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    memcpy(param_3,(void *)((int)pvVar1 + param_2),param_4);
  }
  return 0;
}



/* ===== mpp_buffer_write_with_caller @ 0002c284 size=284 ===== */

undefined4
mpp_buffer_write_with_caller
          (int param_1,int param_2,void *param_3,size_t param_4,undefined4 param_5)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = DAT_0002c3a0 + 0x2c2a8;
  if (param_3 == (void *)0x0 || param_1 == 0) {
    _mpp_err(DAT_0002c3bc + 0x2c398,DAT_0002c3b8 + 0x2c394,0,param_1,param_3,param_5);
    return 0xfffffffe;
  }
  if (param_4 != 0) {
    if (*(uint *)(param_1 + 4) < param_4 + param_2) {
      return 0xfffffffa;
    }
    pvVar1 = *(void **)(param_1 + 8);
    if (pvVar1 == (void *)0x0) {
      pvVar1 = mmap64((void *)0x0,*(size_t *)(param_1 + 0x1c),3,1,*(int *)(param_1 + 0x30),0);
      *(void **)(param_1 + 8) = pvVar1;
      if (pvVar1 == (void *)0x0) {
        _mpp_err(DAT_0002c3b0 + 0x2c350,DAT_0002c3ac + 0x2c34c,0,DAT_0002c3a8 + 0x2c340,
                 DAT_0002c3a4 + 0x2c334,0x10c);
        if ((**(uint **)(iVar2 + DAT_0002c3b4) & 0x10000000) == 0) {
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    memcpy((void *)((int)pvVar1 + param_2),param_3,param_4);
  }
  return 0;
}



/* ===== mpp_buffer_get_ptr_with_caller @ 0002c3c0 size=284 ===== */

int mpp_buffer_get_ptr_with_caller(int param_1,undefined4 param_2)

{
  void *__s;
  size_t __len;
  int iVar1;
  
  iVar1 = DAT_0002c4dc + 0x2c3dc;
  if (param_1 == 0) {
    _mpp_err(DAT_0002c4fc + 0x2c4cc,DAT_0002c500 + 0x2c4d0,0,param_2);
    iVar1 = 0;
  }
  else {
    __s = *(void **)(param_1 + 8);
    __len = *(size_t *)(param_1 + 0x1c);
    if (__s == (void *)0x0) {
      __s = mmap64((void *)0x0,__len,3,1,*(int *)(param_1 + 0x30),0);
      *(void **)(param_1 + 8) = __s;
      if (__s == (void *)0x0) {
        _mpp_err(DAT_0002c4ec + 0x2c468,DAT_0002c4e8 + 0x2c464,0,DAT_0002c4e4 + 0x2c458,
                 DAT_0002c4e0 + 0x2c44c,0x122);
        if ((**(uint **)(iVar1 + DAT_0002c4f0) & 0x10000000) != 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        __s = *(void **)(param_1 + 8);
      }
      __len = *(size_t *)(param_1 + 0x1c);
    }
    memset(__s,0,__len);
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      _mpp_err(DAT_0002c4f8 + 0x2c4a8,DAT_0002c4f4 + 0x2c4a4,0,param_1,param_2);
      return *(int *)(param_1 + 8);
    }
  }
  return iVar1;
}



/* ===== mpp_buffer_get_fd_with_caller @ 0002c504 size=172 ===== */

int mpp_buffer_get_fd_with_caller(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = DAT_0002c5b0 + 0x2c520;
  if (iVar1 < 1) {
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 < 0) {
      iVar3 = DAT_0002c5b4 + 0x2c560;
      _mpp_err(iVar3,DAT_0002c5c0 + 0x2c57c,0,DAT_0002c5bc + 0x2c578,DAT_0002c5b8 + 0x2c564,0x139);
      if ((**(uint **)(iVar2 + DAT_0002c5c4) & 0x10000000) != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      _mpp_err(iVar3,DAT_0002c5c8 + 0x2c5a8,0,param_1,iVar1,param_2);
    }
    *(int *)(param_1 + 0x10) = iVar1;
  }
  return iVar1;
}



/* ===== mpp_buffer_get_size_with_caller @ 0002c5cc size=116 ===== */

int mpp_buffer_get_size_with_caller(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    _mpp_err(DAT_0002c648 + 0x2c634,DAT_0002c64c + 0x2c638,0,param_2);
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 == 0) {
      _mpp_err(DAT_0002c644 + 0x2c610,DAT_0002c640 + 0x2c60c,0,param_1,param_2);
      return *(int *)(param_1 + 4);
    }
  }
  return iVar1;
}



/* ===== mpp_buffer_get_index_with_caller @ 0002c650 size=56 ===== */

undefined4 mpp_buffer_get_index_with_caller(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x14);
  }
  _mpp_err(DAT_0002c68c + 0x2c680,DAT_0002c688 + 0x2c67c,0,param_2);
  return 0xffffffff;
}



/* ===== mpp_buffer_set_index_with_caller @ 0002c690 size=60 ===== */

undefined4 mpp_buffer_set_index_with_caller(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x14) = param_2;
    return 0;
  }
  _mpp_err(DAT_0002c6d0 + 0x2c6c4,DAT_0002c6cc + 0x2c6c0,0,param_3);
  return 0xfffffffe;
}



/* ===== mpp_buffer_get_offset_with_caller @ 0002c6d4 size=56 ===== */

undefined4 mpp_buffer_get_offset_with_caller(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x18);
  }
  _mpp_err(DAT_0002c710 + 0x2c704,DAT_0002c70c + 0x2c700,0,param_2);
  return 0xffffffff;
}



/* ===== mpp_buffer_set_offset_with_caller @ 0002c714 size=60 ===== */

undefined4 mpp_buffer_set_offset_with_caller(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x18) = param_2;
    return 0;
  }
  _mpp_err(DAT_0002c754 + 0x2c748,DAT_0002c750 + 0x2c744,0,param_3);
  return 0xfffffffe;
}



/* ===== mpp_buffer_info_get_with_caller @ 0002c758 size=164 ===== */

undefined4
mpp_buffer_info_get_with_caller(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_2 == (undefined4 *)0x0 || param_1 == (undefined4 *)0x0) {
    uVar5 = 0xfffffffe;
    _mpp_err(DAT_0002c7fc + 0x2c7f0,DAT_0002c800 + 0x2c7f8,0,param_1,param_2,param_3);
  }
  else {
    if (param_1[2] == 0) {
      pvVar1 = mmap64((void *)0x0,param_1[7],3,1,param_1[0xc],0);
      param_1[2] = pvVar1;
    }
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    uVar5 = 0;
    *param_2 = *param_1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    uVar2 = param_1[5];
    param_2[4] = param_1[4];
    param_2[5] = uVar2;
  }
  return uVar5;
}



/* ===== mpp_buffer_group_get @ 0002c804 size=120 ===== */

undefined4
mpp_buffer_group_get(int param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  if ((param_1 != 0 && param_3 < 2) && ((param_2 & 0xfffc) == 0)) {
    return 0;
  }
  _mpp_err(DAT_0002c884 + 0x2c86c,DAT_0002c880 + 0x2c868,DAT_0002c87c + 0x2c864,param_1,param_3,
           param_2,param_5);
  return 0xfffffffe;
}



/* ===== mpp_buffer_group_put @ 0002c888 size=60 ===== */

undefined4 mpp_buffer_group_put(int param_1)

{
  if (param_1 != 0) {
    return 0;
  }
  _mpp_err(DAT_0002c8cc + 0x2c8bc,DAT_0002c8c8 + 0x2c8b8,DAT_0002c8c4 + 0x2c8b0,0);
  return 0xffffffff;
}



/* ===== mpp_buffer_group_clear @ 0002c8d0 size=60 ===== */

undefined4 mpp_buffer_group_clear(int param_1)

{
  if (param_1 != 0) {
    return 0;
  }
  _mpp_err(DAT_0002c914 + 0x2c904,DAT_0002c910 + 0x2c900,DAT_0002c90c + 0x2c8f8,0);
  return 0xffffffff;
}



/* ===== mpp_buffer_group_unused @ 0002c918 size=60 ===== */

undefined4 mpp_buffer_group_unused(int param_1)

{
  if (param_1 != 0) {
    return 0;
  }
  _mpp_err(DAT_0002c95c + 0x2c94c,DAT_0002c958 + 0x2c948,DAT_0002c954 + 0x2c940,0);
  return 0xffffffff;
}



/* ===== mpp_buffer_group_usage @ 0002c960 size=60 ===== */

undefined4 mpp_buffer_group_usage(int param_1)

{
  if (param_1 != 0) {
    return 0;
  }
  _mpp_err(DAT_0002c9a4 + 0x2c994,DAT_0002c9a0 + 0x2c990,DAT_0002c99c + 0x2c988,0);
  return 2;
}



/* ===== mpp_buffer_group_mode @ 0002c9a8 size=60 ===== */

undefined4 mpp_buffer_group_mode(int param_1)

{
  if (param_1 != 0) {
    return 0;
  }
  _mpp_err(DAT_0002c9ec + 0x2c9dc,DAT_0002c9e8 + 0x2c9d8,DAT_0002c9e4 + 0x2c9d0,0);
  return 2;
}



/* ===== mpp_buffer_group_type @ 0002c9f0 size=60 ===== */

undefined4 mpp_buffer_group_type(int param_1)

{
  if (param_1 != 0) {
    return 2;
  }
  _mpp_err(DAT_0002ca34 + 0x2ca24,DAT_0002ca30 + 0x2ca20,DAT_0002ca2c + 0x2ca18,0);
  return 4;
}



/* ===== mpp_buffer_group_limit_config @ 0002ca38 size=60 ===== */

undefined4 mpp_buffer_group_limit_config(int param_1)

{
  if (param_1 != 0) {
    return 0;
  }
  _mpp_err(DAT_0002ca7c + 0x2ca6c,DAT_0002ca78 + 0x2ca68,DAT_0002ca74 + 0x2ca60,0);
  return 0xffffffff;
}



/* ===== check_is_mpp_packet @ 0002ca80 size=108 ===== */

undefined4 check_is_mpp_packet(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0002caec + 0x2ca94;
  if ((param_1 != (int *)0x0) && (*param_1 == DAT_0002caf0 + 0x2caa4)) {
    return 0;
  }
  _mpp_err(DAT_0002cafc + 0x2cac4,DAT_0002caf8 + 0x2cac0,DAT_0002caf4 + 0x2cabc);
  if ((**(uint **)(iVar1 + DAT_0002cb00) & 0x10000000) == 0) {
    return 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== mpp_packet_new @ 0002cb04 size=144 ===== */

undefined4 mpp_packet_new(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    _mpp_err(DAT_0002cba8 + 0x2cb6c,DAT_0002cba4 + 0x2cb68,DAT_0002cba0 + 0x2cb64);
    return 0xfffffffd;
  }
  iVar2 = DAT_0002cb98 + 0x2cb24;
  piVar1 = (int *)mpp_mem_pool_get_f(iVar2,*(undefined4 *)(DAT_0002cb94 + 0x2cb20));
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = DAT_0002cb9c + 0x2cb4c;
    return 0;
  }
  _mpp_err(DAT_0002cbb0 + 0x2cb8c,DAT_0002cbac + 0x2cb88,iVar2);
  return 0xfffffffd;
}



/* ===== mpp_packet_init @ 0002cbb4 size=140 ===== */

int mpp_packet_init(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    iVar1 = -3;
    _mpp_err(DAT_0002cc54 + 0x2cc3c,DAT_0002cc50 + 0x2cc38,DAT_0002cc4c + 0x2cc34);
  }
  else {
    iVar1 = mpp_packet_new();
    if (iVar1 != 0) {
      _mpp_err(DAT_0002cc48 + 0x2cc14,DAT_0002cc44 + 0x2cc10,DAT_0002cc40 + 0x2cc0c);
      return iVar1;
    }
    iVar1 = *param_1;
    *(ulonglong *)(iVar1 + 4) = CONCAT44(param_2,param_2);
    *(ulonglong *)(iVar1 + 0xc) = CONCAT44(param_3,param_3);
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== mpp_packet_init_with_buffer @ 0002cc58 size=212 ===== */

int mpp_packet_init_with_buffer(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == 0 || param_1 == (int *)0x0) {
    iVar1 = -3;
    _mpp_err(DAT_0002cd44 + 0x2cd28,DAT_0002cd40 + 0x2cd24,DAT_0002cd3c + 0x2cd20,param_1,param_2);
  }
  else {
    iVar1 = mpp_packet_new();
    if (iVar1 != 0) {
      _mpp_err(DAT_0002cd38 + 0x2ccf4,DAT_0002cd34 + 0x2ccf0,DAT_0002cd30 + 0x2ccec);
      return iVar1;
    }
    iVar3 = *param_1;
    iVar1 = DAT_0002cd2c + 0x2cc94;
    uVar2 = mpp_buffer_get_ptr_with_caller(param_2,iVar1);
    *(ulonglong *)(iVar3 + 4) = CONCAT44(uVar2,uVar2);
    uVar2 = mpp_buffer_get_size_with_caller(param_2,iVar1);
    *(ulonglong *)(iVar3 + 0xc) = CONCAT44(uVar2,uVar2);
    *(int *)(iVar3 + 0x30) = param_2;
    mpp_buffer_inc_ref_with_caller(param_2,iVar1);
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== mpp_packet_deinit @ 0002cd48 size=184 ===== */

undefined4 mpp_packet_deinit(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 == (int *)0x0) || (iVar1 = check_is_mpp_packet(*param_1), iVar1 != 0)) {
    uVar2 = 0xfffffffd;
    _mpp_err(DAT_0002ce18 + 0x2cdfc,DAT_0002ce14 + 0x2cdf8,DAT_0002ce10 + 0x2cdf4);
  }
  else {
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0x30) != 0) {
      mpp_buffer_put_with_caller(*(int *)(iVar1 + 0x30),DAT_0002ce00 + 0x2cd80);
    }
    if ((*(uint *)(iVar1 + 0x2c) & 4) != 0) {
      mpp_osal_free(DAT_0002ce0c + 0x2cdd8,*(undefined4 *)(iVar1 + 4));
    }
    if (*(int *)(iVar1 + 0x34) != 0) {
      mpp_meta_put();
    }
    mpp_mem_pool_put_f(DAT_0002ce08 + 0x2cdb4,*(undefined4 *)(DAT_0002ce04 + 0x2cdac),*param_1);
    *param_1 = 0;
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== mpp_packet_set_pos @ 0002ce1c size=272 ===== */

void mpp_packet_set_pos(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = check_is_mpp_packet();
  iVar4 = DAT_0002cf2c + 0x2ce3c;
  if (iVar1 == 0) {
    uVar3 = *(uint *)(param_1 + 0x10);
    uVar2 = param_2 - *(int *)(param_1 + 8);
    *(uint *)(param_1 + 8) = param_2;
    if (uVar3 < uVar2) {
      uVar2 = param_2 - *(uint *)(param_1 + 4);
      uVar3 = *(uint *)(param_1 + 0xc);
    }
    *(uint *)(param_1 + 0x10) = uVar3 - uVar2;
    if (param_2 < *(uint *)(param_1 + 4)) {
      _mpp_err(DAT_0002cf50 + 0x2cf04,DAT_0002cf4c + 0x2cf00,0,DAT_0002cf48 + 0x2cef4,
               DAT_0002cf44 + 0x2cee8,0xcb);
      if ((**(uint **)(iVar4 + DAT_0002cf40) & 0x10000000) != 0) goto LAB_0002cecc;
      if (*(uint *)(param_1 + 0x10) <= *(uint *)(param_1 + 0xc)) {
        return;
      }
    }
    else if (uVar3 - uVar2 <= *(uint *)(param_1 + 0xc)) {
      return;
    }
    _mpp_err(DAT_0002cf3c + 0x2ceb8,DAT_0002cf38 + 0x2ceb4,0,DAT_0002cf34 + 0x2cea8,
             DAT_0002cf30 + 0x2ce9c,0xcc);
    if ((**(uint **)(iVar4 + DAT_0002cf40) & 0x10000000) != 0) {
LAB_0002cecc:
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return;
}



/* ===== mpp_packet_get_pos @ 0002cf54 size=28 ===== */

undefined4 mpp_packet_get_pos(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = check_is_mpp_packet();
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 8);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== mpp_packet_set_eos @ 0002cf70 size=36 ===== */

undefined4 mpp_packet_set_eos(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = check_is_mpp_packet();
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 1;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}



/* ===== mpp_packet_clr_eos @ 0002cf94 size=36 ===== */

undefined4 mpp_packet_clr_eos(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = check_is_mpp_packet();
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfffffffe;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}



/* ===== mpp_packet_get_eos @ 0002cfb8 size=32 ===== */

uint mpp_packet_get_eos(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = check_is_mpp_packet();
  if (iVar1 == 0) {
    uVar2 = *(uint *)(param_1 + 0x2c) & 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== mpp_packet_set_extra_data @ 0002cfd8 size=36 ===== */

undefined4 mpp_packet_set_extra_data(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = check_is_mpp_packet();
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 2;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}



/* ===== mpp_packet_reset @ 0002cffc size=72 ===== */

undefined4 mpp_packet_reset(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = check_is_mpp_packet();
  iVar1 = DAT_0002d044;
  if (iVar2 == 0) {
    iVar2 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    param_1[4] = 0;
    param_1[5] = iVar2;
    param_1[6] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    param_1[7] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    param_1[8] = 0;
    param_1[9] = iVar2;
    param_1[10] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    param_1[0xb] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    param_1[0xc] = 0;
    param_1[0xd] = iVar2;
    param_1[2] = param_1[1];
    *param_1 = iVar1 + 0x2d02c;
    return 0;
  }
  return 0xfffffffe;
}



/* ===== mpp_packet_set_buffer @ 0002d048 size=92 ===== */

void mpp_packet_set_buffer(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = check_is_mpp_packet();
  if (iVar1 != 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == param_2) {
    return;
  }
  if (param_2 != 0) {
    mpp_buffer_inc_ref_with_caller(param_2,DAT_0002d0a4 + 0x2d084);
    iVar1 = *(int *)(param_1 + 0x30);
  }
  if (iVar1 != 0) {
    mpp_buffer_put_with_caller(iVar1,DAT_0002d0a8 + 0x2d09c);
  }
  *(int *)(param_1 + 0x30) = param_2;
  return;
}



/* ===== mpp_packet_get_buffer @ 0002d0ac size=28 ===== */

undefined4 mpp_packet_get_buffer(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = check_is_mpp_packet();
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x30);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== mpp_packet_has_meta @ 0002d0c8 size=44 ===== */

bool mpp_packet_has_meta(int param_1)

{
  int iVar1;
  
  iVar1 = check_is_mpp_packet();
  if (iVar1 == 0) {
    return *(int *)(param_1 + 0x34) != 0;
  }
  return false;
}



/* ===== mpp_packet_get_meta @ 0002d0f4 size=72 ===== */

int mpp_packet_get_meta(int param_1)

{
  int iVar1;
  
  iVar1 = check_is_mpp_packet();
  if (iVar1 != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    return *(int *)(param_1 + 0x34);
  }
  mpp_meta_get_with_tag(param_1 + 0x34,DAT_0002d140 + 0x2d12c,DAT_0002d13c + 0x2d128);
  return *(int *)(param_1 + 0x34);
}



/* ===== mpp_packet_set_status @ 0002d144 size=32 ===== */

undefined4 mpp_packet_set_status(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = check_is_mpp_packet();
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x28) = param_2;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}



/* ===== mpp_packet_get_status @ 0002d164 size=40 ===== */

undefined4 mpp_packet_get_status(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = check_is_mpp_packet();
  if (iVar1 == 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x28);
    uVar2 = 0;
  }
  else {
    uVar3 = 0;
    uVar2 = 0xfffffffe;
  }
  *param_2 = uVar3;
  return uVar2;
}



/* ===== mpp_packet_is_partition @ 0002d18c size=32 ===== */

uint mpp_packet_is_partition(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = check_is_mpp_packet();
  if (iVar1 == 0) {
    uVar2 = (*(byte *)(param_1 + 0x28) & 0x1f) >> 4;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== mpp_packet_is_soi @ 0002d1ac size=32 ===== */

uint mpp_packet_is_soi(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = check_is_mpp_packet();
  if (iVar1 == 0) {
    uVar2 = (*(byte *)(param_1 + 0x28) & 0x3f) >> 5;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== mpp_packet_is_eoi @ 0002d1cc size=32 ===== */

uint mpp_packet_is_eoi(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = check_is_mpp_packet();
  if (iVar1 == 0) {
    uVar2 = (*(byte *)(param_1 + 0x28) & 0x7f) >> 6;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== mpp_packet_copy @ 0002d1ec size=124 ===== */

undefined4 mpp_packet_copy(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = check_is_mpp_packet();
  if ((iVar1 == 0) && (iVar1 = check_is_mpp_packet(param_2), iVar1 == 0)) {
    memcpy(*(void **)(param_1 + 8),*(void **)(param_2 + 8),*(size_t *)(param_2 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffe;
    _mpp_err(DAT_0002d270 + 0x2d264,DAT_0002d26c + 0x2d260,DAT_0002d268 + 0x2d258,param_1,param_2);
  }
  return uVar2;
}



/* ===== mpp_packet_append @ 0002d274 size=140 ===== */

undefined4 mpp_packet_append(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = check_is_mpp_packet();
  if ((iVar1 == 0) && (iVar1 = check_is_mpp_packet(param_2), iVar1 == 0)) {
    memcpy((void *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10)),*(void **)(param_2 + 8),
           *(size_t *)(param_2 + 0x10));
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + *(int *)(param_2 + 0x10);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffe;
    _mpp_err(DAT_0002d308 + 0x2d2fc,DAT_0002d304 + 0x2d2f8,DAT_0002d300 + 0x2d2f0,param_1,param_2);
  }
  return uVar2;
}



/* ===== mpp_packet_get_data @ 0002d30c size=20 ===== */

undefined4 mpp_packet_get_data(int param_1)

{
  check_is_mpp_packet();
  return *(undefined4 *)(param_1 + 4);
}



/* ===== mpp_packet_read @ 0002d320 size=244 ===== */

undefined4 mpp_packet_read(undefined4 param_1,int param_2,void *param_3,size_t param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = check_is_mpp_packet();
  iVar3 = DAT_0002d414 + 0x2d350;
  if (iVar1 == 0 && param_3 != (void *)0x0) {
    if (param_4 != 0) {
      iVar1 = mpp_packet_get_data(param_1);
      if ((iVar1 == 0) &&
         (_mpp_err(DAT_0002d424 + 0x2d3d0,DAT_0002d420 + 0x2d3cc,0,DAT_0002d41c + 0x2d3c0,
                   DAT_0002d418 + 0x2d3b4,0x181),
         (**(uint **)(iVar3 + DAT_0002d428) & 0x10000000) != 0)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      memcpy(param_3,(void *)(iVar1 + param_2),param_4);
      return 0;
    }
    uVar2 = 0;
  }
  else {
    _mpp_err(DAT_0002d434 + 0x2d40c,DAT_0002d430 + 0x2d408,DAT_0002d42c + 0x2d400,param_1,param_3);
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}



/* ===== mpp_packet_write @ 0002d438 size=244 ===== */

undefined4 mpp_packet_write(undefined4 param_1,int param_2,void *param_3,size_t param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = check_is_mpp_packet();
  iVar3 = DAT_0002d52c + 0x2d468;
  if (iVar1 == 0 && param_3 != (void *)0x0) {
    if (param_4 != 0) {
      iVar1 = mpp_packet_get_data(param_1);
      if ((iVar1 == 0) &&
         (_mpp_err(DAT_0002d53c + 0x2d4e8,DAT_0002d538 + 0x2d4e4,0,DAT_0002d534 + 0x2d4d8,
                   DAT_0002d530 + 0x2d4cc,0x191),
         (**(uint **)(iVar3 + DAT_0002d540) & 0x10000000) != 0)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      memcpy((void *)(iVar1 + param_2),param_3,param_4);
      return 0;
    }
    uVar2 = 0;
  }
  else {
    _mpp_err(DAT_0002d54c + 0x2d524,DAT_0002d548 + 0x2d520,DAT_0002d544 + 0x2d518,param_1,param_3);
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}



/* ===== mpp_packet_set_data @ 0002d550 size=24 ===== */

void mpp_packet_set_data(int param_1,undefined4 param_2)

{
  check_is_mpp_packet();
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}



/* ===== mpp_packet_get_size @ 0002d568 size=20 ===== */

undefined4 mpp_packet_get_size(int param_1)

{
  check_is_mpp_packet();
  return *(undefined4 *)(param_1 + 0xc);
}



/* ===== mpp_packet_set_size @ 0002d57c size=24 ===== */

void mpp_packet_set_size(int param_1,undefined4 param_2)

{
  check_is_mpp_packet();
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}



/* ===== mpp_packet_get_length @ 0002d594 size=20 ===== */

undefined4 mpp_packet_get_length(int param_1)

{
  check_is_mpp_packet();
  return *(undefined4 *)(param_1 + 0x10);
}



/* ===== mpp_packet_copy_init @ 0002d5a8 size=424 ===== */

int mpp_packet_copy_init(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  size_t __n;
  void *__dest;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *local_2c [2];
  
  if ((param_1 == (undefined4 *)0x0) || (iVar2 = check_is_mpp_packet(param_2), iVar2 != 0)) {
    iVar2 = -2;
    _mpp_err(DAT_0002d760 + 0x2d720,DAT_0002d75c + 0x2d71c,DAT_0002d758 + 0x2d714,param_1,param_2);
  }
  else {
    *param_1 = 0;
    iVar2 = mpp_packet_new(local_2c);
    if (iVar2 == 0) {
      puVar1 = local_2c[0];
      puVar7 = param_2;
      do {
        puVar6 = puVar7;
        puVar5 = puVar1;
        puVar7 = puVar6 + 4;
        uVar8 = puVar6[1];
        uVar3 = puVar6[2];
        uVar4 = puVar6[3];
        *puVar5 = *puVar6;
        puVar5[1] = uVar8;
        puVar5[2] = uVar3;
        puVar5[3] = uVar4;
        puVar1 = puVar5 + 4;
      } while (puVar7 != param_2 + 0xc);
      uVar3 = puVar6[5];
      puVar5[4] = *puVar7;
      puVar5[5] = uVar3;
      if (param_2[0xd] != 0) {
        mpp_meta_inc_ref();
      }
      iVar2 = DAT_0002d754;
      if (param_2[0xc] == 0) {
        __n = mpp_packet_get_length(param_2);
        __dest = (void *)mpp_osal_malloc(iVar2 + 0x2d690,__n + 0x100);
        if (__dest == (void *)0x0) {
          _mpp_err(DAT_0002d768 + 0x2d744,DAT_0002d764 + 0x2d73c,iVar2 + 0x2d690,__n);
          mpp_packet_deinit(local_2c);
          return -4;
        }
        *(ulonglong *)(local_2c[0] + 1) = CONCAT44(__dest,__dest);
        *(ulonglong *)(local_2c[0] + 3) = CONCAT44(__n,__n);
        local_2c[0][0xb] = local_2c[0][0xb] | 4;
        if (__n != 0) {
          memcpy(__dest,(void *)param_2[2],__n);
          memset((void *)((int)__dest + __n),0,0x100);
        }
      }
      else {
        mpp_buffer_inc_ref_with_caller(param_2[0xc],DAT_0002d750 + 0x2d668);
      }
      *param_1 = local_2c[0];
      return 0;
    }
  }
  return iVar2;
}



/* ===== mpp_packet_set_length @ 0002d76c size=24 ===== */

void mpp_packet_set_length(int param_1,undefined4 param_2)

{
  check_is_mpp_packet();
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* ===== mpp_packet_get_pts @ 0002d784 size=20 ===== */

undefined8 mpp_packet_get_pts(int param_1)

{
  check_is_mpp_packet();
  return *(undefined8 *)(param_1 + 0x18);
}



/* ===== mpp_packet_set_pts @ 0002d798 size=36 ===== */

void mpp_packet_set_pts(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  check_is_mpp_packet();
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x1c) = param_4;
  return;
}



/* ===== mpp_packet_get_dts @ 0002d7bc size=20 ===== */

undefined8 mpp_packet_get_dts(int param_1)

{
  check_is_mpp_packet();
  return *(undefined8 *)(param_1 + 0x20);
}



/* ===== mpp_packet_set_dts @ 0002d7d0 size=36 ===== */

void mpp_packet_set_dts(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  check_is_mpp_packet();
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x24) = param_4;
  return;
}



/* ===== mpp_packet_get_flag @ 0002d7f4 size=20 ===== */

undefined4 mpp_packet_get_flag(int param_1)

{
  check_is_mpp_packet();
  return *(undefined4 *)(param_1 + 0x2c);
}



/* ===== mpp_packet_set_flag @ 0002d808 size=24 ===== */

void mpp_packet_set_flag(int param_1,undefined4 param_2)

{
  check_is_mpp_packet();
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}



/* ===== check_is_mpp_frame @ 0002d820 size=108 ===== */

undefined4 check_is_mpp_frame(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0002d88c + 0x2d834;
  if ((param_1 != (int *)0x0) && (*param_1 == DAT_0002d890 + 0x2d844)) {
    return 0;
  }
  _mpp_err(DAT_0002d89c + 0x2d864,DAT_0002d898 + 0x2d860,DAT_0002d894 + 0x2d85c);
  if ((**(uint **)(iVar1 + DAT_0002d8a0) & 0x10000000) == 0) {
    return 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== mpp_frame_init @ 0002d8a4 size=140 ===== */

undefined4 mpp_frame_init(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    _mpp_err(DAT_0002d944 + 0x2d908,DAT_0002d940 + 0x2d904,DAT_0002d93c + 0x2d900);
    return 0xfffffffd;
  }
  iVar2 = DAT_0002d934 + 0x2d8c4;
  piVar1 = (int *)mpp_mem_pool_get_f(iVar2,*(undefined4 *)(DAT_0002d930 + 0x2d8c0));
  if (piVar1 != (int *)0x0) {
    *piVar1 = DAT_0002d938 + 0x2d8e4;
    *param_1 = (int)piVar1;
    return 0;
  }
  _mpp_err(DAT_0002d94c + 0x2d928,DAT_0002d948 + 0x2d924,iVar2);
  return 0xfffffffd;
}



/* ===== mpp_frame_deinit @ 0002d950 size=168 ===== */

undefined4 mpp_frame_deinit(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 == (int *)0x0) || (iVar1 = check_is_mpp_frame(*param_1), iVar1 != 0)) {
    uVar2 = 0xfffffffd;
    _mpp_err(DAT_0002da0c + 0x2d9f4,DAT_0002da08 + 0x2d9f0,DAT_0002da04 + 0x2d9ec);
  }
  else {
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0x90) != 0) {
      mpp_buffer_put_with_caller(*(int *)(iVar1 + 0x90),DAT_0002d9f8 + 0x2d988);
    }
    if (*(int *)(iVar1 + 0x94) != 0) {
      mpp_meta_put();
    }
    if (*(int *)(iVar1 + 0x98) != 0) {
      mpp_stopwatch_put();
    }
    mpp_mem_pool_put_f(DAT_0002da00 + 0x2d9c0,*(undefined4 *)(DAT_0002d9fc + 0x2d9b8),*param_1);
    *param_1 = 0;
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== mpp_frame_get_next @ 0002da10 size=28 ===== */

undefined4 mpp_frame_get_next(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = check_is_mpp_frame();
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0xa0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== mpp_frame_set_next @ 0002da2c size=32 ===== */

undefined4 mpp_frame_set_next(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = check_is_mpp_frame();
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xa0) = param_2;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}



/* ===== mpp_frame_get_buffer @ 0002da4c size=28 ===== */

undefined4 mpp_frame_get_buffer(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = check_is_mpp_frame();
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x90);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== mpp_frame_set_buffer @ 0002da68 size=92 ===== */

void mpp_frame_set_buffer(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = check_is_mpp_frame();
  if (iVar1 != 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x90);
  if (iVar1 == param_2) {
    return;
  }
  if (param_2 != 0) {
    mpp_buffer_inc_ref_with_caller(param_2,DAT_0002dac4 + 0x2daa4);
    iVar1 = *(int *)(param_1 + 0x90);
  }
  if (iVar1 != 0) {
    mpp_buffer_put_with_caller(iVar1,DAT_0002dac8 + 0x2dabc);
  }
  *(int *)(param_1 + 0x90) = param_2;
  return;
}



/* ===== mpp_frame_has_meta @ 0002dacc size=44 ===== */

bool mpp_frame_has_meta(int param_1)

{
  int iVar1;
  
  iVar1 = check_is_mpp_frame();
  if (iVar1 == 0) {
    return *(int *)(param_1 + 0x94) != 0;
  }
  return false;
}



/* ===== mpp_frame_get_meta @ 0002daf8 size=72 ===== */

int mpp_frame_get_meta(int param_1)

{
  int iVar1;
  
  iVar1 = check_is_mpp_frame();
  if (iVar1 != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x94) != 0) {
    return *(int *)(param_1 + 0x94);
  }
  mpp_meta_get_with_tag(param_1 + 0x94,DAT_0002db44 + 0x2db30,DAT_0002db40 + 0x2db2c);
  return *(int *)(param_1 + 0x94);
}



/* ===== mpp_frame_set_meta @ 0002db48 size=48 ===== */

void mpp_frame_set_meta(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = check_is_mpp_frame();
  if (iVar1 != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x94) != 0) {
    mpp_meta_put();
  }
  *(undefined4 *)(param_1 + 0x94) = param_2;
  return;
}



/* ===== mpp_frame_set_stopwatch_enable @ 0002db78 size=144 ===== */

void mpp_frame_set_stopwatch_enable(int param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_r3;
  char acStack_38 [36];
  
  iVar1 = check_is_mpp_frame();
  if (iVar1 == 0) {
    if (param_2 == 0) {
      if (*(int *)(param_1 + 0x98) != 0) {
        mpp_stopwatch_put();
        *(undefined4 *)(param_1 + 0x98) = 0;
        return;
      }
    }
    else if (*(int *)(param_1 + 0x98) == 0) {
      snprintf(acStack_38,0x1f,(char *)(DAT_0002dc08 + 0x2dbe4),extraout_r3,
               *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
      iVar1 = mpp_stopwatch_get(acStack_38);
      *(int *)(param_1 + 0x98) = iVar1;
      if (iVar1 != 0) {
        mpp_stopwatch_set_show_on_exit(iVar1,1);
      }
    }
  }
  return;
}



/* ===== mpp_frame_get_stopwatch @ 0002dc0c size=28 ===== */

undefined4 mpp_frame_get_stopwatch(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = check_is_mpp_frame();
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x98);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== mpp_frame_copy @ 0002dc28 size=124 ===== */

undefined4 mpp_frame_copy(void *param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 == (void *)0x0) || (iVar1 = check_is_mpp_frame(param_2), iVar1 != 0)) {
    uVar2 = 0xfffffffe;
    _mpp_err(DAT_0002dcac + 0x2dca0,DAT_0002dca8 + 0x2dc9c,DAT_0002dca4 + 0x2dc94,param_1,param_2);
  }
  else {
    memcpy(param_1,param_2,0xa8);
    uVar2 = 0;
    if (*(int *)((int)param_2 + 0x94) != 0) {
      mpp_meta_inc_ref();
    }
  }
  return uVar2;
}



/* ===== mpp_frame_info_cmp @ 0002dcb0 size=184 ===== */

undefined4 mpp_frame_info_cmp(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = check_is_mpp_frame();
  if ((iVar1 != 0) || (iVar1 = check_is_mpp_frame(param_1), iVar1 != 0)) {
    _mpp_err(DAT_0002dd70 + 0x2dd60,DAT_0002dd6c + 0x2dd5c,DAT_0002dd68 + 0x2dd58);
    return 0xfffffffd;
  }
  if ((((*(int *)(param_1 + 4) == *(int *)(param_2 + 4)) &&
       (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))) &&
      (*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc))) &&
     ((*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10) &&
      (*(int *)(param_1 + 0x60) == *(int *)(param_2 + 0x60))))) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x8c) != *(int *)(param_2 + 0x8c)) {
      uVar2 = 0xffffffff;
    }
    return uVar2;
  }
  return 0xffffffff;
}



/* ===== mpp_frame_get_fbc_offset @ 0002dd74 size=108 ===== */

uint mpp_frame_get_fbc_offset(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = check_is_mpp_frame();
  if (iVar1 != 0) {
    return 0;
  }
  uVar3 = *(uint *)(param_1 + 0x60) & 0xf00000;
  if (uVar3 != 0) {
    uVar2 = 0;
    if (uVar3 == 0x100000) {
      uVar2 = ((*(int *)(param_1 + 8) + 0xfU & 0xfffffff0) *
               (*(int *)(param_1 + 4) + 0xfU & 0xfffffff0) >> 4) + 0xfff & 0xfffff000;
    }
    *(uint *)(param_1 + 0x88) = uVar2;
    return uVar2;
  }
  return *(uint *)(param_1 + 0x88);
}



/* ===== mpp_frame_get_fbc_stride @ 0002dde0 size=36 ===== */

uint mpp_frame_get_fbc_stride(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = check_is_mpp_frame();
  if (iVar1 == 0) {
    uVar2 = *(int *)(param_1 + 4) + 0xfU & 0xfffffff0;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== mpp_frame_get_width @ 0002de04 size=20 ===== */

undefined4 mpp_frame_get_width(int param_1)

{
  check_is_mpp_frame();
  return *(undefined4 *)(param_1 + 4);
}



/* ===== mpp_frame_set_width @ 0002de18 size=24 ===== */

void mpp_frame_set_width(int param_1,undefined4 param_2)

{
  check_is_mpp_frame();
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}



/* ===== mpp_frame_get_height @ 0002de30 size=20 ===== */

undefined4 mpp_frame_get_height(int param_1)

{
  check_is_mpp_frame();
  return *(undefined4 *)(param_1 + 8);
}



/* ===== mpp_frame_set_height @ 0002de44 size=24 ===== */

void mpp_frame_set_height(int param_1,undefined4 param_2)

{
  check_is_mpp_frame();
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



/* ===== mpp_frame_get_hor_stride_pixel @ 0002de5c size=20 ===== */

undefined4 mpp_frame_get_hor_stride_pixel(int param_1)

{
  check_is_mpp_frame();
  return *(undefined4 *)(param_1 + 0x14);
}



/* ===== mpp_frame_set_hor_stride_pixel @ 0002de70 size=24 ===== */

void mpp_frame_set_hor_stride_pixel(int param_1,undefined4 param_2)

{
  check_is_mpp_frame();
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}



/* ===== mpp_frame_get_hor_stride @ 0002de88 size=20 ===== */

undefined4 mpp_frame_get_hor_stride(int param_1)

{
  check_is_mpp_frame();
  return *(undefined4 *)(param_1 + 0xc);
}



/* ===== mpp_frame_set_hor_stride @ 0002de9c size=24 ===== */

void mpp_frame_set_hor_stride(int param_1,undefined4 param_2)

{
  check_is_mpp_frame();
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}



/* ===== mpp_frame_get_ver_stride @ 0002deb4 size=20 ===== */

undefined4 mpp_frame_get_ver_stride(int param_1)

{
  check_is_mpp_frame();
  return *(undefined4 *)(param_1 + 0x10);
}



/* ===== mpp_frame_set_ver_stride @ 0002dec8 size=24 ===== */

void mpp_frame_set_ver_stride(int param_1,undefined4 param_2)

{
  check_is_mpp_frame();
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* ===== mpp_frame_get_offset_x @ 0002dee0 size=20 ===== */

undefined4 mpp_frame_get_offset_x(int param_1)

{
  check_is_mpp_frame();
  return *(undefined4 *)(param_1 + 0x18);
}



/* ===== mpp_frame_set_offset_x @ 0002def4 size=24 ===== */

void mpp_frame_set_offset_x(int param_1,undefined4 param_2)

{
  check_is_mpp_frame();
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



/* ===== mpp_frame_get_offset_y @ 0002df0c size=20 ===== */

undefined4 mpp_frame_get_offset_y(int param_1)

{
  check_is_mpp_frame();
  return *(undefined4 *)(param_1 + 0x1c);
}



/* ===== mpp_frame_set_offset_y @ 0002df20 size=24 ===== */

void mpp_frame_set_offset_y(int param_1,undefined4 param_2)

{
  check_is_mpp_frame();
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}



/* ===== mpp_frame_get_mode @ 0002df38 size=20 ===== */

undefined4 mpp_frame_get_mode(int param_1)

{
  check_is_mpp_frame();
  return *(undefined4 *)(param_1 + 0x20);
}



/* ===== mpp_frame_set_mode @ 0002df4c size=24 ===== */

void mpp_frame_set_mode(int param_1,undefined4 param_2)

{
  check_is_mpp_frame();
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}



/* ===== mpp_frame_get_discard @ 0002df64 size=20 ===== */

undefined4 mpp_frame_get_discard(int param_1)

{
  check_is_mpp_frame();
  return *(undefined4 *)(param_1 + 0x24);
}



/* ===== mpp_frame_set_discard @ 0002df78 size=24 ===== */

void mpp_frame_set_discard(int param_1,undefined4 param_2)

{
  check_is_mpp_frame();
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}



/* ===== mpp_frame_get_viewid @ 0002df90 size=20 ===== */

undefined4 mpp_frame_get_viewid(int param_1)

{
  check_is_mpp_frame();
  return *(undefined4 *)(param_1 + 0x28);
}



/* ===== mpp_frame_set_viewid @ 0002dfa4 size=24 ===== */

void mpp_frame_set_viewid(int param_1,undefined4 param_2)

{
  check_is_mpp_frame();
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}



/* ===== mpp_frame_get_poc @ 0002dfbc size=20 ===== */

undefined4 mpp_frame_get_poc(int param_1)

{
  check_is_mpp_frame();
  return *(undefined4 *)(param_1 + 0x2c);
}



/* ===== mpp_frame_set_poc @ 0002dfd0 size=24 ===== */

void mpp_frame_set_poc(int param_1,undefined4 param_2)

{
  check_is_mpp_frame();
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}



/* ===== mpp_frame_get_pts @ 0002dfe8 size=20 ===== */

undefined8 mpp_frame_get_pts(int param_1)

{
  check_is_mpp_frame();
  return *(undefined8 *)(param_1 + 0x30);
}



/* ===== mpp_frame_set_pts @ 0002dffc size=36 ===== */

void mpp_frame_set_pts(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  check_is_mpp_frame();
  *(undefined4 *)(param_1 + 0x30) = param_3;
  *(undefined4 *)(param_1 + 0x34) = param_4;
  return;
}



/* ===== mpp_frame_get_dts @ 0002e020 size=20 ===== */

undefined8 mpp_frame_get_dts(int param_1)

{
  check_is_mpp_frame();
  return *(undefined8 *)(param_1 + 0x38);
}



/* ===== mpp_frame_set_dts @ 0002e034 size=36 ===== */

void mpp_frame_set_dts(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  check_is_mpp_frame();
  *(undefined4 *)(param_1 + 0x38) = param_3;
  *(undefined4 *)(param_1 + 0x3c) = param_4;
  return;
}



/* ===== mpp_frame_get_eos @ 0002e058 size=20 ===== */

undefined4 mpp_frame_get_eos(int param_1)

{
  check_is_mpp_frame();
  return *(undefined4 *)(param_1 + 0x40);
}



/* ===== mpp_frame_set_eos @ 0002e06c size=24 ===== */

void mpp_frame_set_eos(int param_1,undefined4 param_2)

{
  check_is_mpp_frame();
  *(undefined4 *)(param_1 + 0x40) = param_2;
  return;
}



/* ===== mpp_frame_get_info_change @ 0002e084 size=20 ===== */

undefined4 mpp_frame_get_info_change(int param_1)

{
  check_is_mpp_frame();
  return *(undefined4 *)(param_1 + 0x44);
}



/* ===== mpp_frame_set_info_change @ 0002e098 size=24 ===== */

void mpp_frame_set_info_change(int param_1,undefined4 param_2)

{
  check_is_mpp_frame();
  *(undefined4 *)(param_1 + 0x44) = param_2;
  return;
}



/* ===== mpp_frame_get_color_range @ 0002e0b0 size=20 ===== */

undefined4 mpp_frame_get_color_range(int param_1)

{
  check_is_mpp_frame();
  return *(undefined4 *)(param_1 + 0x4c);
}



/* ===== mpp_frame_set_color_range @ 0002e0c4 size=24 ===== */

void mpp_frame_set_color_range(int param_1,undefined4 param_2)

{
  check_is_mpp_frame();
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  return;
}



/* ===== mpp_frame_get_color_primaries @ 0002e0dc size=20 ===== */

undefined4 mpp_frame_get_color_primaries(int param_1)

{
  check_is_mpp_frame();
  return *(undefined4 *)(param_1 + 0x50);
}



/* ===== mpp_frame_set_color_primaries @ 0002e0f0 size=24 ===== */

void mpp_frame_set_color_primaries(int param_1,undefined4 param_2)

{
  check_is_mpp_frame();
  *(undefined4 *)(param_1 + 0x50) = param_2;
  return;
}



/* ===== mpp_frame_get_color_trc @ 0002e108 size=20 ===== */

undefined4 mpp_frame_get_color_trc(int param_1)

{
  check_is_mpp_frame();
  return *(undefined4 *)(param_1 + 0x54);
}



/* ===== mpp_frame_set_color_trc @ 0002e11c size=24 ===== */

void mpp_frame_set_color_trc(int param_1,undefined4 param_2)

{
  check_is_mpp_frame();
  *(undefined4 *)(param_1 + 0x54) = param_2;
  return;
}



/* ===== mpp_frame_get_colorspace @ 0002e134 size=20 ===== */

undefined4 mpp_frame_get_colorspace(int param_1)

{
  check_is_mpp_frame();
  return *(undefined4 *)(param_1 + 0x58);
}



/* ===== mpp_frame_set_colorspace @ 0002e148 size=24 ===== */

void mpp_frame_set_colorspace(int param_1,undefined4 param_2)

{
  check_is_mpp_frame();
  *(undefined4 *)(param_1 + 0x58) = param_2;
  return;
}



/* ===== mpp_frame_get_chroma_location @ 0002e160 size=20 ===== */

undefined4 mpp_frame_get_chroma_location(int param_1)

{
  check_is_mpp_frame();
  return *(undefined4 *)(param_1 + 0x5c);
}



/* ===== mpp_frame_set_chroma_location @ 0002e174 size=24 ===== */

void mpp_frame_set_chroma_location(int param_1,undefined4 param_2)

{
  check_is_mpp_frame();
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  return;
}



/* ===== mpp_frame_get_fmt @ 0002e18c size=20 ===== */

undefined4 mpp_frame_get_fmt(int param_1)

{
  check_is_mpp_frame();
  return *(undefined4 *)(param_1 + 0x60);
}



/* ===== mpp_frame_set_fmt @ 0002e1a0 size=24 ===== */

void mpp_frame_set_fmt(int param_1,undefined4 param_2)

{
  check_is_mpp_frame();
  *(undefined4 *)(param_1 + 0x60) = param_2;
  return;
}



/* ===== mpp_frame_get_sar @ 0002e1b8 size=40 ===== */

undefined4 * mpp_frame_get_sar(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  check_is_mpp_frame(param_2);
  uVar1 = *(undefined4 *)(param_2 + 0x68);
  *param_1 = *(undefined4 *)(param_2 + 100);
  param_1[1] = uVar1;
  return param_1;
}



/* ===== mpp_frame_set_sar @ 0002e1e0 size=44 ===== */

void mpp_frame_set_sar(int param_1,undefined4 param_2,undefined4 param_3)

{
  check_is_mpp_frame();
  *(undefined4 *)(param_1 + 100) = param_2;
  *(undefined4 *)(param_1 + 0x68) = param_3;
  return;
}



/* ===== mpp_frame_get_mastering_display @ 0002e20c size=52 ===== */

undefined4 * mpp_frame_get_mastering_display(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  check_is_mpp_frame(param_2);
  uVar1 = *(undefined4 *)(param_2 + 0x70);
  uVar2 = *(undefined4 *)(param_2 + 0x74);
  uVar3 = *(undefined4 *)(param_2 + 0x78);
  *param_1 = *(undefined4 *)(param_2 + 0x6c);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 0x80);
  param_1[4] = *(undefined4 *)(param_2 + 0x7c);
  param_1[5] = uVar1;
  return param_1;
}



/* ===== mpp_frame_set_mastering_display @ 0002e240 size=60 ===== */

void mpp_frame_set_mastering_display
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  check_is_mpp_frame();
  *(undefined4 *)(param_1 + 0x6c) = param_2;
  *(undefined4 *)(param_1 + 0x70) = param_3;
  *(undefined4 *)(param_1 + 0x74) = param_4;
  *(undefined4 *)(param_1 + 0x78) = param_5;
  *(undefined4 *)(param_1 + 0x7c) = param_6;
  *(undefined4 *)(param_1 + 0x80) = param_7;
  return;
}



/* ===== mpp_frame_get_content_light @ 0002e27c size=48 ===== */

undefined4 mpp_frame_get_content_light(int param_1)

{
  check_is_mpp_frame();
  return *(undefined4 *)(param_1 + 0x84);
}



/* ===== mpp_frame_set_content_light @ 0002e2ac size=36 ===== */

void mpp_frame_set_content_light(int param_1,undefined4 param_2)

{
  check_is_mpp_frame();
  *(undefined4 *)(param_1 + 0x84) = param_2;
  return;
}



/* ===== mpp_frame_get_buf_size @ 0002e2d0 size=20 ===== */

undefined4 mpp_frame_get_buf_size(int param_1)

{
  check_is_mpp_frame();
  return *(undefined4 *)(param_1 + 0x8c);
}



/* ===== mpp_frame_set_buf_size @ 0002e2e4 size=24 ===== */

void mpp_frame_set_buf_size(int param_1,undefined4 param_2)

{
  check_is_mpp_frame();
  *(undefined4 *)(param_1 + 0x8c) = param_2;
  return;
}



/* ===== mpp_frame_get_errinfo @ 0002e2fc size=20 ===== */

undefined4 mpp_frame_get_errinfo(int param_1)

{
  check_is_mpp_frame();
  return *(undefined4 *)(param_1 + 0x48);
}



/* ===== mpp_frame_set_errinfo @ 0002e310 size=24 ===== */

void mpp_frame_set_errinfo(int param_1,undefined4 param_2)

{
  check_is_mpp_frame();
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return;
}



/* ===== mpp_frame_get_jpege_chan_id @ 0002e328 size=20 ===== */

undefined4 mpp_frame_get_jpege_chan_id(int param_1)

{
  check_is_mpp_frame();
  return *(undefined4 *)(param_1 + 0x9c);
}



/* ===== mpp_frame_set_jpege_chan_id @ 0002e33c size=24 ===== */

void mpp_frame_set_jpege_chan_id(int param_1,undefined4 param_2)

{
  check_is_mpp_frame();
  *(undefined4 *)(param_1 + 0x9c) = param_2;
  return;
}



/* ===== MppMetaService::MppMetaService @ 0002e354 size=52 ===== */

/* MppMetaService::MppMetaService() */

void __thiscall MppMetaService::MppMetaService(MppMetaService *this)

{
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(ulonglong *)this = CONCAT44(this,this);
  *(ulonglong *)(this + 8) = CONCAT44(this + 8,this + 8);
  return;
}



/* ===== MppMetaService::get_index_of_key @ 0002e388 size=76 ===== */

/* MppMetaService::get_index_of_key(MppMetaKey_e, MppMetaDataType_e) */

int __thiscall MppMetaService::get_index_of_key(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    while (*(int *)(DAT_0002e3d4 + 0x2e398 + iVar1 * 8) != param_2) {
      iVar1 = iVar1 + 1;
      if (iVar1 == 0x17) {
        return -1;
      }
    }
    if (*(int *)(DAT_0002e3d4 + 0x2e398 + iVar1 * 8 + 4) == param_3) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x17);
  return -1;
}



/* ===== MppMetaService::get_meta @ 0002e3d8 size=232 ===== */

/* MppMetaService::get_meta(char const*, char const*) */

char * __thiscall MppMetaService::get_meta(MppMetaService *this,char *param_1,char *param_2)

{
  char *__dest;
  undefined4 *puVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = DAT_0002e4c0 + 0x2e3f8;
  __dest = (char *)mpp_osal_malloc(iVar3,0x40);
  if (__dest != (char *)0x0) {
    if (param_1 == (char *)0x0) {
      param_1 = (char *)(DAT_0002e4c4 + 0x2e49c);
    }
    strncpy(__dest,param_1,0x20);
    *(char **)(__dest + 0x20) = param_2;
    iVar3 = *(int *)(this + 0x10);
    pcVar2 = __dest + 0x2c;
    *(int *)(this + 0x10) = iVar3 + 1;
    *(int *)(__dest + 0x24) = iVar3;
    *(ulonglong *)pcVar2 = CONCAT44(pcVar2,pcVar2);
    *(ulonglong *)(__dest + 0x34) = CONCAT44(__dest + 0x34,__dest + 0x34);
    __dest[0x28] = '\x01';
    __dest[0x29] = '\0';
    __dest[0x2a] = '\0';
    __dest[0x2b] = '\0';
    __dest[0x3c] = '\0';
    __dest[0x3d] = '\0';
    __dest[0x3e] = '\0';
    __dest[0x3f] = '\0';
    puVar1 = *(undefined4 **)(this + 4);
    iVar3 = *(int *)(this + 0x14);
    *(char **)(this + 4) = pcVar2;
    *(undefined4 **)(__dest + 0x30) = puVar1;
    *(MppMetaService **)(__dest + 0x2c) = this;
    *puVar1 = pcVar2;
    *(int *)(this + 0x14) = iVar3 + 1;
    return __dest;
  }
  _mpp_err(DAT_0002e4cc + 0x2e4b4,DAT_0002e4c8 + 0x2e4b0,iVar3);
  return (char *)0x0;
}



/* ===== MppMetaService::inc_ref @ 0002e4d0 size=140 ===== */

/* MppMetaService::inc_ref(MppMetaImpl_t*) */

MppMetaService * __thiscall MppMetaService::inc_ref(MppMetaService *this,MppMetaImpl_t *param_1)

{
  MppMetaService *pMVar1;
  int iVar2;
  
  iVar2 = DAT_0002e55c + 0x2e4f0;
  if (*(int *)(param_1 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    return this;
  }
  pMVar1 = (MppMetaService *)
           _mpp_err(DAT_0002e56c + 0x2e530,DAT_0002e568 + 0x2e52c,0,DAT_0002e564 + 0x2e520,
                    DAT_0002e560 + 0x2e514,0xc6);
  if ((**(uint **)(iVar2 + DAT_0002e570) & 0x10000000) == 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    return pMVar1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== MppMetaService::find_node @ 0002e574 size=88 ===== */

/* MppMetaService::find_node(MppMetaImpl_t*, int) */

MppMetaImpl_t * __thiscall
MppMetaService::find_node(MppMetaService *this,MppMetaImpl_t *param_1,int param_2)

{
  MppMetaImpl_t *pMVar1;
  MppMetaImpl_t *pMVar2;
  MppMetaImpl_t *pMVar3;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    return (MppMetaImpl_t *)0x0;
  }
  pMVar2 = param_1 + 0x34;
  pMVar3 = *(MppMetaImpl_t **)pMVar2;
  if (pMVar3 != pMVar2) {
    pMVar1 = *(MppMetaImpl_t **)pMVar3;
    if (param_2 == *(int *)(pMVar3 + 0x18)) {
      return pMVar3;
    }
    while (pMVar3 = pMVar1, pMVar3 != pMVar2) {
      pMVar1 = *(MppMetaImpl_t **)pMVar3;
      if (*(int *)(pMVar3 + 0x18) == param_2) {
        return pMVar3;
      }
    }
  }
  return (MppMetaImpl_t *)0x0;
}



/* ===== MppMetaService::next_node @ 0002e5cc size=112 ===== */

/* MppMetaService::next_node(MppMetaImpl_t*) */

int * __thiscall MppMetaService::next_node(MppMetaService *this,MppMetaImpl_t *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    piVar1 = *(int **)(param_1 + 0x34);
    piVar2 = (int *)piVar1[1];
    iVar3 = *piVar1;
    *(int **)(iVar3 + 4) = piVar2;
    *piVar2 = iVar3;
    piVar2 = (int *)piVar1[3];
    iVar3 = piVar1[2];
    *piVar1 = (int)piVar1;
    piVar1[1] = (int)piVar1;
    *(int **)(iVar3 + 4) = piVar2;
    *piVar2 = iVar3;
    piVar1[2] = (int)(piVar1 + 2);
    piVar1[3] = (int)(piVar1 + 2);
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + -1;
    return piVar1;
  }
  return (int *)0x0;
}



/* ===== MppMetaService::get_node @ 0002e63c size=248 ===== */

/* MppMetaService::get_node(MppMetaImpl_t*, int) */

undefined8 * __thiscall
MppMetaService::get_node(MppMetaService *this,MppMetaImpl_t *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  
  puVar1 = (undefined8 *)find_node(this,param_1,param_2);
  if (puVar1 == (undefined8 *)0x0) {
    iVar5 = DAT_0002e734 + 0x2e678;
    puVar1 = (undefined8 *)mpp_osal_malloc(iVar5,0x28);
    if (puVar1 != (undefined8 *)0x0) {
      puVar4 = puVar1 + 1;
      *(MppMetaImpl_t **)(puVar1 + 2) = param_1;
      *puVar1 = CONCAT44(puVar1,puVar1);
      puVar1[1] = CONCAT44(puVar4,puVar4);
      iVar5 = *(int *)(param_1 + 0x24);
      *(int *)(param_1 + 0x24) = iVar5 + 1;
      *(int *)((int)puVar1 + 0x14) = iVar5;
      *(int *)(puVar1 + 3) = param_2;
      puVar1[4] = 0;
      puVar2 = *(undefined4 **)(param_1 + 0x38);
      *(undefined8 **)(param_1 + 0x38) = puVar1;
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
      *(undefined4 **)((int)puVar1 + 4) = puVar2;
      puVar3 = *(undefined4 **)(this + 0xc);
      iVar5 = *(int *)(this + 0x18);
      *(MppMetaImpl_t **)puVar1 = param_1 + 0x34;
      *puVar2 = puVar1;
      *(undefined8 **)(this + 0xc) = puVar4;
      *(undefined4 **)((int)puVar1 + 0xc) = puVar3;
      *(MppMetaService **)(puVar1 + 1) = this + 8;
      *puVar3 = puVar4;
      *(int *)(this + 0x18) = iVar5 + 1;
      return puVar1;
    }
    _mpp_err(DAT_0002e73c + 0x2e730,DAT_0002e738 + 0x2e72c,iVar5);
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}



/* ===== FUN_0002e740 @ 0002e740 size=364 ===== */

undefined4
FUN_0002e740(MppMetaImpl_t *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  pthread_mutex_t *__mutex;
  MppMetaService *this;
  pthread_mutexattr_t apStack_2c [2];
  
  iVar3 = DAT_0002e8ac + 0x2e760;
  pbVar5 = *(byte **)(iVar3 + DAT_0002e8b0);
  DataMemoryBarrier(0xb);
  if ((*pbVar5 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(pbVar5);
    this = *(MppMetaService **)(iVar3 + DAT_0002e8b4);
    if (iVar1 != 0) {
      MppMetaService::MppMetaService(this);
      __cxa_guard_release(pbVar5);
      __aeabi_atexit(this,*(undefined4 *)(iVar3 + DAT_0002e8c0),DAT_0002e8c4 + 0x2e830);
    }
  }
  else {
    this = *(MppMetaService **)(iVar3 + DAT_0002e8b4);
  }
  pbVar5 = *(byte **)(iVar3 + DAT_0002e8b8);
  DataMemoryBarrier(0xb);
  if (((*pbVar5 & 1) == 0) && (iVar1 = __cxa_guard_acquire(pbVar5), iVar1 != 0)) {
    pthread_mutexattr_init(apStack_2c);
    pthread_mutexattr_settype(apStack_2c,1);
    __mutex = *(pthread_mutex_t **)(iVar3 + DAT_0002e8bc);
    pthread_mutex_init(__mutex,apStack_2c);
    pthread_mutexattr_destroy(apStack_2c);
    __cxa_guard_release(pbVar5);
    __aeabi_atexit(__mutex,*(undefined4 *)(iVar3 + DAT_0002e8c8),DAT_0002e8cc + 0x2e89c);
  }
  else {
    __mutex = *(pthread_mutex_t **)(iVar3 + DAT_0002e8bc);
  }
  pthread_mutex_lock(__mutex);
  iVar3 = MppMetaService::get_index_of_key(this,param_2,param_3);
  if ((iVar3 < 0) || (iVar3 = MppMetaService::get_node(this,param_1,iVar3), iVar3 == 0)) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar2 = param_4[1];
    uVar4 = 0;
    *(undefined4 *)(iVar3 + 0x20) = *param_4;
    *(undefined4 *)(iVar3 + 0x24) = uVar2;
  }
  pthread_mutex_unlock(__mutex);
  return uVar4;
}



/* ===== MppMetaService::put_node @ 0002e8d0 size=108 ===== */

/* MppMetaService::put_node(MppMetaNode_t*) */

void __thiscall MppMetaService::put_node(MppMetaService *this,MppMetaNode_t *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 4);
  iVar1 = *(int *)param_1;
  iVar2 = *(int *)(param_1 + 0x10);
  *(int **)(iVar1 + 4) = piVar3;
  *piVar3 = iVar1;
  piVar3 = *(int **)(param_1 + 0xc);
  iVar1 = *(int *)(param_1 + 8);
  *(MppMetaNode_t **)param_1 = param_1;
  *(MppMetaNode_t **)(param_1 + 4) = param_1;
  *(int **)(iVar1 + 4) = piVar3;
  *piVar3 = iVar1;
  *(MppMetaNode_t **)(param_1 + 8) = param_1 + 8;
  *(MppMetaNode_t **)(param_1 + 0xc) = param_1 + 8;
  iVar1 = DAT_0002e93c;
  *(int *)(iVar2 + 0x3c) = *(int *)(iVar2 + 0x3c) + -1;
  *(int *)(this + 0x18) = *(int *)(this + 0x18) + -1;
  mpp_osal_free(iVar1 + 0x2e930);
  return;
}



/* ===== MppMetaService::put_meta @ 0002e940 size=340 ===== */

/* MppMetaService::put_meta(MppMetaImpl_t*) */

void __thiscall MppMetaService::put_meta(MppMetaService *this,MppMetaImpl_t *param_1)

{
  int *piVar1;
  MppMetaNode_t *pMVar2;
  int iVar3;
  MppMetaImpl_t *pMVar4;
  int iVar5;
  
  iVar5 = DAT_0002ea94 + 0x2e95c;
  if (*(int *)(this + 0x1c) != 0) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar3 == 0) {
    _mpp_err(DAT_0002eaa4 + 0x2e9b8,DAT_0002eaa0 + 0x2e9b4,0,DAT_0002ea9c + 0x2e9a8,
             DAT_0002ea98 + 0x2e99c,0xb3);
    if ((**(uint **)(iVar5 + DAT_0002eaa8) & 0x10000000) != 0) goto LAB_0002ea90;
    iVar3 = *(int *)(param_1 + 0x28);
    if (iVar3 != 0) goto LAB_0002e970;
  }
  else {
LAB_0002e970:
    *(int *)(param_1 + 0x28) = iVar3 + -1;
    if (iVar3 + -1 != 0) {
      return;
    }
  }
  pMVar2 = *(MppMetaNode_t **)(param_1 + 0x34);
  while (pMVar2 != (MppMetaNode_t *)(param_1 + 0x34)) {
    put_node(this,pMVar2);
    pMVar2 = *(MppMetaNode_t **)(param_1 + 0x34);
  }
  if ((*(int *)(param_1 + 0x3c) == 0) ||
     (_mpp_err(DAT_0002eab8 + 0x2ea3c,DAT_0002eab4 + 0x2ea38,0,DAT_0002eab0 + 0x2ea2c,
               DAT_0002eaac + 0x2ea20,0xbe), (**(uint **)(iVar5 + DAT_0002eaa8) & 0x10000000) == 0))
  {
    piVar1 = *(int **)(param_1 + 0x30);
    pMVar4 = param_1 + 0x2c;
    iVar5 = *(int *)pMVar4;
    iVar3 = *(int *)(this + 0x14);
    *(int **)(iVar5 + 4) = piVar1;
    *piVar1 = iVar5;
    iVar5 = DAT_0002eabc;
    *(ulonglong *)pMVar4 = CONCAT44(pMVar4,pMVar4);
    *(int *)(this + 0x14) = iVar3 + -1;
    mpp_osal_free(iVar5 + 0x2ea84,param_1);
    return;
  }
LAB_0002ea90:
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== MppMetaService::~MppMetaService @ 0002eac0 size=200 ===== */

/* MppMetaService::~MppMetaService() */

MppMetaService * __thiscall MppMetaService::~MppMetaService(MppMetaService *this)

{
  MppMetaService *pMVar1;
  int *piVar2;
  MppMetaService *pMVar3;
  int *piVar4;
  MppMetaService *pMVar5;
  int *piVar6;
  
  if (this != *(MppMetaService **)this) {
    _mpp_log(DAT_0002eb90 + 0x2eaf0,DAT_0002eb8c + 0x2eaec,DAT_0002eb88 + 0x2eae8);
    pMVar5 = *(MppMetaService **)*(MppMetaService **)this;
    pMVar3 = *(MppMetaService **)this;
    while (pMVar1 = pMVar5, this != pMVar3) {
      put_meta(this,(MppMetaImpl_t *)(pMVar3 + -0x2c));
      pMVar5 = *(MppMetaService **)pMVar1;
      pMVar3 = pMVar1;
    }
  }
  if (*(MppMetaService **)(this + 8) != this + 8) {
    _mpp_log(DAT_0002eb9c + 0x2eb50,DAT_0002eb98 + 0x2eb4c,DAT_0002eb94 + 0x2eb48);
    piVar6 = (int *)**(int **)(this + 8);
    piVar4 = *(int **)(this + 8);
    while (piVar2 = piVar6, this != (MppMetaService *)(piVar4 + -2)) {
      put_node(this,(MppMetaNode_t *)(piVar4 + -2));
      piVar6 = (int *)*piVar2;
      piVar4 = piVar2;
    }
  }
  return this;
}



/* ===== FUN_0002eba0 @ 0002eba0 size=372 ===== */

undefined4
FUN_0002eba0(MppMetaImpl_t *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  MppMetaNode_t *pMVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  MppMetaService *this;
  byte *pbVar6;
  pthread_mutex_t *__mutex;
  pthread_mutexattr_t apStack_2c [2];
  
  iVar4 = DAT_0002ed14 + 0x2ebc0;
  pbVar6 = *(byte **)(iVar4 + DAT_0002ed18);
  DataMemoryBarrier(0xb);
  if ((*pbVar6 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(pbVar6);
    this = *(MppMetaService **)(iVar4 + DAT_0002ed1c);
    if (iVar2 != 0) {
      MppMetaService::MppMetaService(this);
      __cxa_guard_release(pbVar6);
      __aeabi_atexit(this,*(undefined4 *)(iVar4 + DAT_0002ed28),DAT_0002ed2c + 0x2ec9c);
    }
  }
  else {
    this = *(MppMetaService **)(iVar4 + DAT_0002ed1c);
  }
  pbVar6 = *(byte **)(iVar4 + DAT_0002ed20);
  DataMemoryBarrier(0xb);
  if (((*pbVar6 & 1) == 0) && (iVar2 = __cxa_guard_acquire(pbVar6), iVar2 != 0)) {
    pthread_mutexattr_init(apStack_2c);
    pthread_mutexattr_settype(apStack_2c,1);
    __mutex = *(pthread_mutex_t **)(iVar4 + DAT_0002ed24);
    pthread_mutex_init(__mutex,apStack_2c);
    pthread_mutexattr_destroy(apStack_2c);
    __cxa_guard_release(pbVar6);
    __aeabi_atexit(__mutex,*(undefined4 *)(iVar4 + DAT_0002ed30),DAT_0002ed34 + 0x2ed04);
  }
  else {
    __mutex = *(pthread_mutex_t **)(iVar4 + DAT_0002ed24);
  }
  pthread_mutex_lock(__mutex);
  iVar4 = MppMetaService::get_index_of_key(this,param_2,param_3);
  if ((iVar4 < 0) ||
     (pMVar1 = (MppMetaNode_t *)MppMetaService::find_node(this,param_1,iVar4),
     pMVar1 == (MppMetaNode_t *)0x0)) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar3 = *(undefined4 *)(pMVar1 + 0x24);
    uVar5 = 0;
    *param_4 = *(undefined4 *)(pMVar1 + 0x20);
    param_4[1] = uVar3;
    MppMetaService::put_node(this,pMVar1);
  }
  pthread_mutex_unlock(__mutex);
  return uVar5;
}



/* ===== mpp_meta_get_with_tag @ 0002ed38 size=364 ===== */

int mpp_meta_get_with_tag(int *param_1,char *param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  pthread_mutex_t *__mutex;
  MppMetaService *this;
  pthread_mutexattr_t apStack_2c [2];
  
  iVar2 = DAT_0002eea4 + 0x2ed50;
  if (param_1 == (int *)0x0) {
    iVar2 = -3;
    _mpp_err(DAT_0002eed0 + 0x2eea0,DAT_0002eecc + 0x2ee9c,DAT_0002eec8 + 0x2ee98);
  }
  else {
    pbVar3 = *(byte **)(iVar2 + DAT_0002eea8);
    DataMemoryBarrier(0xb);
    if ((*pbVar3 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(pbVar3);
      this = *(MppMetaService **)(iVar2 + DAT_0002eeac);
      if (iVar1 != 0) {
        MppMetaService::MppMetaService(this);
        __cxa_guard_release(pbVar3);
        __aeabi_atexit(this,*(undefined4 *)(iVar2 + DAT_0002eeb8),DAT_0002eebc + 0x2ee10);
      }
    }
    else {
      this = *(MppMetaService **)(iVar2 + DAT_0002eeac);
    }
    pbVar3 = *(byte **)(iVar2 + DAT_0002eeb0);
    DataMemoryBarrier(0xb);
    if (((*pbVar3 & 1) == 0) && (iVar1 = __cxa_guard_acquire(pbVar3), iVar1 != 0)) {
      pthread_mutexattr_init(apStack_2c);
      pthread_mutexattr_settype(apStack_2c,1);
      __mutex = *(pthread_mutex_t **)(iVar2 + DAT_0002eeb4);
      pthread_mutex_init(__mutex,apStack_2c);
      pthread_mutexattr_destroy(apStack_2c);
      __cxa_guard_release(pbVar3);
      __aeabi_atexit(__mutex,*(undefined4 *)(iVar2 + DAT_0002eec0),DAT_0002eec4 + 0x2ee78);
    }
    else {
      __mutex = *(pthread_mutex_t **)(iVar2 + DAT_0002eeb4);
    }
    pthread_mutex_lock(__mutex);
    iVar2 = MppMetaService::get_meta(this,param_2,param_3);
    *param_1 = iVar2;
    iVar2 = -(uint)(iVar2 == 0);
    pthread_mutex_unlock(__mutex);
  }
  return iVar2;
}



/* ===== mpp_meta_put @ 0002eed4 size=336 ===== */

undefined4 mpp_meta_put(MppMetaImpl_t *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  pthread_mutex_t *__mutex;
  MppMetaService *this;
  pthread_mutexattr_t apStack_24 [2];
  
  iVar3 = DAT_0002f024 + 0x2eeec;
  if (param_1 == (MppMetaImpl_t *)0x0) {
    _mpp_err(DAT_0002f050 + 0x2f01c,DAT_0002f04c + 0x2f018,DAT_0002f048 + 0x2f014);
    uVar1 = 0xfffffffd;
  }
  else {
    pbVar4 = *(byte **)(iVar3 + DAT_0002f028);
    DataMemoryBarrier(0xb);
    if ((*pbVar4 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(pbVar4);
      this = *(MppMetaService **)(iVar3 + DAT_0002f02c);
      if (iVar2 != 0) {
        MppMetaService::MppMetaService(this);
        __cxa_guard_release(pbVar4);
        __aeabi_atexit(this,*(undefined4 *)(iVar3 + DAT_0002f038),DAT_0002f03c + 0x2ef90);
      }
    }
    else {
      this = *(MppMetaService **)(iVar3 + DAT_0002f02c);
    }
    pbVar4 = *(byte **)(iVar3 + DAT_0002f030);
    DataMemoryBarrier(0xb);
    if (((*pbVar4 & 1) == 0) && (iVar2 = __cxa_guard_acquire(pbVar4), iVar2 != 0)) {
      pthread_mutexattr_init(apStack_24);
      pthread_mutexattr_settype(apStack_24,1);
      __mutex = *(pthread_mutex_t **)(iVar3 + DAT_0002f034);
      pthread_mutex_init(__mutex,apStack_24);
      pthread_mutexattr_destroy(apStack_24);
      __cxa_guard_release(pbVar4);
      __aeabi_atexit(__mutex,*(undefined4 *)(iVar3 + DAT_0002f040),DAT_0002f044 + 0x2eff8);
    }
    else {
      __mutex = *(pthread_mutex_t **)(iVar3 + DAT_0002f034);
    }
    pthread_mutex_lock(__mutex);
    MppMetaService::put_meta(this,param_1);
    pthread_mutex_unlock(__mutex);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== mpp_meta_inc_ref @ 0002f054 size=336 ===== */

undefined4 mpp_meta_inc_ref(MppMetaImpl_t *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  pthread_mutex_t *__mutex;
  MppMetaService *this;
  pthread_mutexattr_t apStack_24 [2];
  
  iVar3 = DAT_0002f1a4 + 0x2f06c;
  if (param_1 == (MppMetaImpl_t *)0x0) {
    _mpp_err(DAT_0002f1d0 + 0x2f19c,DAT_0002f1cc + 0x2f198,DAT_0002f1c8 + 0x2f194);
    uVar1 = 0xfffffffd;
  }
  else {
    pbVar4 = *(byte **)(iVar3 + DAT_0002f1a8);
    DataMemoryBarrier(0xb);
    if ((*pbVar4 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(pbVar4);
      this = *(MppMetaService **)(iVar3 + DAT_0002f1ac);
      if (iVar2 != 0) {
        MppMetaService::MppMetaService(this);
        __cxa_guard_release(pbVar4);
        __aeabi_atexit(this,*(undefined4 *)(iVar3 + DAT_0002f1b8),DAT_0002f1bc + 0x2f110);
      }
    }
    else {
      this = *(MppMetaService **)(iVar3 + DAT_0002f1ac);
    }
    pbVar4 = *(byte **)(iVar3 + DAT_0002f1b0);
    DataMemoryBarrier(0xb);
    if (((*pbVar4 & 1) == 0) && (iVar2 = __cxa_guard_acquire(pbVar4), iVar2 != 0)) {
      pthread_mutexattr_init(apStack_24);
      pthread_mutexattr_settype(apStack_24,1);
      __mutex = *(pthread_mutex_t **)(iVar3 + DAT_0002f1b4);
      pthread_mutex_init(__mutex,apStack_24);
      pthread_mutexattr_destroy(apStack_24);
      __cxa_guard_release(pbVar4);
      __aeabi_atexit(__mutex,*(undefined4 *)(iVar3 + DAT_0002f1c0),DAT_0002f1c4 + 0x2f178);
    }
    else {
      __mutex = *(pthread_mutex_t **)(iVar3 + DAT_0002f1b4);
    }
    pthread_mutex_lock(__mutex);
    MppMetaService::inc_ref(this,param_1);
    pthread_mutex_unlock(__mutex);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== mpp_meta_size @ 0002f1d4 size=56 ===== */

undefined4 mpp_meta_size(int param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x3c);
  }
  _mpp_err(DAT_0002f214 + 0x2f204,DAT_0002f210 + 0x2f200,DAT_0002f20c + 0x2f1f8);
  return 0xffffffff;
}



/* ===== mpp_meta_next_node @ 0002f218 size=336 ===== */

undefined4 mpp_meta_next_node(MppMetaImpl_t *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  pthread_mutex_t *__mutex;
  MppMetaService *this;
  pthread_mutexattr_t apStack_24 [2];
  
  iVar3 = DAT_0002f368 + 0x2f230;
  if (param_1 == (MppMetaImpl_t *)0x0) {
    _mpp_err(DAT_0002f394 + 0x2f364,DAT_0002f390 + 0x2f360,DAT_0002f38c + 0x2f35c);
    uVar1 = 0;
  }
  else {
    pbVar4 = *(byte **)(iVar3 + DAT_0002f36c);
    DataMemoryBarrier(0xb);
    if ((*pbVar4 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(pbVar4);
      this = *(MppMetaService **)(iVar3 + DAT_0002f370);
      if (iVar2 != 0) {
        MppMetaService::MppMetaService(this);
        __cxa_guard_release(pbVar4);
        __aeabi_atexit(this,*(undefined4 *)(iVar3 + DAT_0002f37c),DAT_0002f380 + 0x2f2d8);
      }
    }
    else {
      this = *(MppMetaService **)(iVar3 + DAT_0002f370);
    }
    pbVar4 = *(byte **)(iVar3 + DAT_0002f374);
    DataMemoryBarrier(0xb);
    if (((*pbVar4 & 1) == 0) && (iVar2 = __cxa_guard_acquire(pbVar4), iVar2 != 0)) {
      pthread_mutexattr_init(apStack_24);
      pthread_mutexattr_settype(apStack_24,1);
      __mutex = *(pthread_mutex_t **)(iVar3 + DAT_0002f378);
      pthread_mutex_init(__mutex,apStack_24);
      pthread_mutexattr_destroy(apStack_24);
      __cxa_guard_release(pbVar4);
      __aeabi_atexit(__mutex,*(undefined4 *)(iVar3 + DAT_0002f384),DAT_0002f388 + 0x2f340);
    }
    else {
      __mutex = *(pthread_mutex_t **)(iVar3 + DAT_0002f378);
    }
    pthread_mutex_lock(__mutex);
    uVar1 = MppMetaService::next_node(this,param_1);
    pthread_mutex_unlock(__mutex);
  }
  return uVar1;
}



/* ===== mpp_meta_set_s32 @ 0002f398 size=84 ===== */

undefined4 mpp_meta_set_s32(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_10 [3];
  
  if (param_1 == 0) {
    _mpp_err(DAT_0002f3f4 + 0x2f3e4,DAT_0002f3f0 + 0x2f3e0,DAT_0002f3ec + 0x2f3dc);
    uVar1 = 0xfffffffd;
  }
  else {
    local_10[0] = param_3;
    uVar1 = FUN_0002e740(param_1,param_2,0x73333220,local_10);
  }
  return uVar1;
}



/* ===== mpp_meta_set_s64 @ 0002f3f8 size=88 ===== */

undefined4 mpp_meta_set_s64(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if (param_1 == 0) {
    _mpp_err(DAT_0002f458 + 0x2f448,DAT_0002f454 + 0x2f444,DAT_0002f450 + 0x2f440);
    uVar1 = 0xfffffffd;
  }
  else {
    local_18 = param_3;
    uStack_14 = param_4;
    uVar1 = FUN_0002e740(param_1,param_2,0x73363420,&local_18);
  }
  return uVar1;
}



/* ===== mpp_meta_set_ptr @ 0002f45c size=84 ===== */

undefined4 mpp_meta_set_ptr(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_10 [3];
  
  if (param_1 == 0) {
    _mpp_err(DAT_0002f4b8 + 0x2f4a8,DAT_0002f4b4 + 0x2f4a4,DAT_0002f4b0 + 0x2f4a0);
    uVar1 = 0xfffffffd;
  }
  else {
    local_10[0] = param_3;
    uVar1 = FUN_0002e740(param_1,param_2,0x70747220,local_10);
  }
  return uVar1;
}



/* ===== mpp_meta_get_s32 @ 0002f4bc size=92 ===== */

int mpp_meta_get_s32(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_10 [2];
  
  if (param_1 == 0) {
    _mpp_err(DAT_0002f520 + 0x2f510,DAT_0002f51c + 0x2f50c,DAT_0002f518 + 0x2f508);
    iVar1 = -3;
  }
  else {
    iVar1 = FUN_0002eba0(param_1,param_2,0x73333220,local_10);
    if (iVar1 == 0) {
      *param_3 = local_10[0];
    }
  }
  return iVar1;
}



/* ===== mpp_meta_get_s64 @ 0002f524 size=92 ===== */

int mpp_meta_get_s64(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_10;
  undefined4 uStack_c;
  
  if (param_1 == 0) {
    _mpp_err(DAT_0002f588 + 0x2f578,DAT_0002f584 + 0x2f574,DAT_0002f580 + 0x2f570);
    iVar1 = -3;
  }
  else {
    iVar1 = FUN_0002eba0(param_1,param_2,0x73363420,&local_10);
    if (iVar1 == 0) {
      *param_3 = local_10;
      param_3[1] = uStack_c;
    }
  }
  return iVar1;
}



/* ===== mpp_meta_get_ptr @ 0002f58c size=96 ===== */

int mpp_meta_get_ptr(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_10 [2];
  
  if (param_1 == 0) {
    _mpp_err(DAT_0002f5f4 + 0x2f5e4,DAT_0002f5f0 + 0x2f5e0,DAT_0002f5ec + 0x2f5dc);
    iVar1 = -3;
  }
  else {
    iVar1 = FUN_0002eba0(param_1,param_2,0x70747220,local_10);
    if (iVar1 != 0) {
      local_10[0] = 0;
    }
    *param_3 = local_10[0];
  }
  return iVar1;
}



/* ===== mpp_meta_set_frame @ 0002f5f8 size=84 ===== */

undefined4 mpp_meta_set_frame(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_10 [3];
  
  if (param_1 == 0) {
    _mpp_err(DAT_0002f654 + 0x2f644,DAT_0002f650 + 0x2f640,DAT_0002f64c + 0x2f63c);
    uVar1 = 0xfffffffd;
  }
  else {
    local_10[0] = param_3;
    uVar1 = FUN_0002e740(param_1,param_2,0x6d66726d,local_10);
  }
  return uVar1;
}



/* ===== mpp_meta_set_packet @ 0002f658 size=84 ===== */

undefined4 mpp_meta_set_packet(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_10 [3];
  
  if (param_1 == 0) {
    _mpp_err(DAT_0002f6b4 + 0x2f6a4,DAT_0002f6b0 + 0x2f6a0,DAT_0002f6ac + 0x2f69c);
    uVar1 = 0xfffffffd;
  }
  else {
    local_10[0] = param_3;
    uVar1 = FUN_0002e740(param_1,param_2,0x6d706b74,local_10);
  }
  return uVar1;
}



/* ===== mpp_meta_set_buffer @ 0002f6b8 size=84 ===== */

undefined4 mpp_meta_set_buffer(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_10 [3];
  
  if (param_1 == 0) {
    _mpp_err(DAT_0002f714 + 0x2f704,DAT_0002f710 + 0x2f700,DAT_0002f70c + 0x2f6fc);
    uVar1 = 0xfffffffd;
  }
  else {
    local_10[0] = param_3;
    uVar1 = FUN_0002e740(param_1,param_2,0x6d627566,local_10);
  }
  return uVar1;
}



/* ===== mpp_meta_get_frame @ 0002f718 size=96 ===== */

int mpp_meta_get_frame(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_10 [2];
  
  if (param_1 == 0) {
    _mpp_err(DAT_0002f780 + 0x2f770,DAT_0002f77c + 0x2f76c,DAT_0002f778 + 0x2f768);
    iVar1 = -3;
  }
  else {
    iVar1 = FUN_0002eba0(param_1,param_2,0x6d66726d,local_10);
    if (iVar1 != 0) {
      local_10[0] = 0;
    }
    *param_3 = local_10[0];
  }
  return iVar1;
}



/* ===== mpp_meta_get_packet @ 0002f784 size=96 ===== */

int mpp_meta_get_packet(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_10 [2];
  
  if (param_1 == 0) {
    _mpp_err(DAT_0002f7ec + 0x2f7dc,DAT_0002f7e8 + 0x2f7d8,DAT_0002f7e4 + 0x2f7d4);
    iVar1 = -3;
  }
  else {
    iVar1 = FUN_0002eba0(param_1,param_2,0x6d706b74,local_10);
    if (iVar1 != 0) {
      local_10[0] = 0;
    }
    *param_3 = local_10[0];
  }
  return iVar1;
}



/* ===== mpp_meta_get_buffer @ 0002f7f0 size=96 ===== */

int mpp_meta_get_buffer(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_10 [2];
  
  if (param_1 == 0) {
    _mpp_err(DAT_0002f858 + 0x2f848,DAT_0002f854 + 0x2f844,DAT_0002f850 + 0x2f840);
    iVar1 = -3;
  }
  else {
    iVar1 = FUN_0002eba0(param_1,param_2,0x6d627566,local_10);
    if (iVar1 != 0) {
      local_10[0] = 0;
    }
    *param_3 = local_10[0];
  }
  return iVar1;
}



/* ===== FUN_0002f85c @ 0002f85c size=320 ===== */

int FUN_0002f85c(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0xc);
  iVar5 = *(int *)(param_1 + 0x14);
  iVar6 = DAT_0002f99c + 0x2f884;
  if (iVar4 < iVar3) {
    uVar2 = **(uint **)(iVar6 + DAT_0002f9a0) & 8;
  }
  else {
    iVar1 = iVar3 * 2;
    iVar4 = DAT_0002f9a4 + 0x2f8e0;
    iVar5 = mpp_osal_realloc(iVar4,iVar5,iVar3 * 0x50);
    if (iVar5 == 0) {
      _mpp_err(DAT_0002f9c0 + 0x2f998,DAT_0002f9bc + 0x2f990,iVar4,iVar1);
      return -1;
    }
    puVar7 = *(uint **)(iVar6 + DAT_0002f9a0);
    uVar2 = 0;
    if ((*puVar7 & 8) != 0) {
      _mpp_log(DAT_0002f9b4 + 0x2f968,DAT_0002f9b8 + 0x2f96c,iVar4,param_1,
               *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0xc),iVar5,iVar1);
      uVar2 = *puVar7 & 8;
    }
    iVar4 = *(int *)(param_1 + 0x10);
    *(int *)(param_1 + 0x14) = iVar5;
    *(int *)(param_1 + 0xc) = iVar1;
  }
  *(int *)(param_1 + 0x10) = iVar4 + 1;
  *(int *)(iVar5 + iVar4 * 0x28) = iVar4;
  *(undefined4 *)(iVar5 + iVar4 * 0x28 + 4) = 0xffffffff;
  if (uVar2 == 0) {
    return iVar4;
  }
  _mpp_log(DAT_0002f9b0 + 0x2f934,DAT_0002f9ac + 0x2f930,DAT_0002f9a8 + 0x2f92c,iVar4);
  return iVar4;
}



/* ===== mpp_trie_init @ 0002f9c4 size=432 ===== */

undefined4 mpp_trie_init(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    _mpp_err(DAT_0002fbb8 + 0x2fb6c,DAT_0002fbb4 + 0x2fb68,DAT_0002fbb0 + 0x2fb64);
    return 0xfffffffd;
  }
  iVar4 = DAT_0002fb7c + 0x2f9f8;
  mpp_env_get_u32(DAT_0002fb80 + 0x2fa00,*(undefined4 *)(DAT_0002fb74 + 0x2f9dc + DAT_0002fb78),0);
  piVar1 = (int *)mpp_osal_calloc(iVar4,0x18);
  if (piVar1 == (int *)0x0) {
    _mpp_err(DAT_0002fba4 + 0x2fb24,DAT_0002fba0 + 0x2fb20,iVar4);
    uVar2 = 0xfffffc12;
LAB_0002fa84:
    *param_1 = piVar1;
    return uVar2;
  }
  iVar4 = DAT_0002fb84 + 0x2fa24;
  if (param_2 == 0) {
    param_2 = 900;
    iVar3 = 36000;
  }
  else {
    iVar3 = param_2 * 0x28;
  }
  piVar1[3] = param_2;
  iVar3 = mpp_osal_calloc(iVar4,iVar3);
  piVar1[5] = iVar3;
  if (iVar3 == 0) {
    _mpp_err(DAT_0002fbac + 0x2fb4c,DAT_0002fba8 + 0x2fb48,iVar4,piVar1[3]);
  }
  else {
    if (param_3 == 0) {
      param_3 = 0x50;
      iVar4 = 0x140;
    }
    else {
      iVar4 = param_3 << 2;
    }
    iVar3 = DAT_0002fb88 + 0x2fa5c;
    *piVar1 = param_3;
    iVar4 = mpp_osal_calloc(iVar3,iVar4);
    piVar1[2] = iVar4;
    if (iVar4 != 0) {
      FUN_0002f85c(piVar1);
      uVar2 = 0;
      goto LAB_0002fa84;
    }
    _mpp_err(DAT_0002fb90 + 0x2faa8,DAT_0002fb8c + 0x2faa4,iVar3,*piVar1);
  }
  if (piVar1[2] != 0) {
    mpp_osal_free(DAT_0002fb94 + 0x2fac0);
  }
  piVar1[2] = 0;
  if (piVar1[5] != 0) {
    mpp_osal_free(DAT_0002fb98 + 0x2fae0);
  }
  iVar4 = DAT_0002fb9c;
  piVar1[5] = 0;
  mpp_osal_free(iVar4 + 0x2faf8,piVar1);
  *param_1 = 0;
  return 0xfffffc12;
}



/* ===== mpp_trie_deinit @ 0002fbbc size=136 ===== */

undefined4 mpp_trie_deinit(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      mpp_osal_free(DAT_0002fc44 + 0x2fbe0);
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    if (*(int *)(param_1 + 8) != 0) {
      mpp_osal_free(DAT_0002fc48 + 0x2fc00);
    }
    iVar1 = DAT_0002fc4c;
    *(undefined4 *)(param_1 + 8) = 0;
    mpp_osal_free(iVar1 + 0x2fc18,param_1);
    return 0;
  }
  _mpp_err(DAT_0002fc58 + 0x2fc3c,DAT_0002fc54 + 0x2fc38,DAT_0002fc50 + 0x2fc34);
  return 0xfffffffd;
}



/* ===== mpp_trie_add_info @ 0002fc5c size=1272 ===== */

undefined4 mpp_trie_add_info(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  size_t sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *__string;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  size_t sVar12;
  int iVar13;
  uint *local_44;
  
  iVar9 = DAT_00030154 + 0x2fc80;
  if (param_2 == (undefined4 *)0x0 || param_1 == (int *)0x0) {
    _mpp_err(DAT_000301c4 + 0x30128,DAT_000301c0 + 0x30124,DAT_000301bc + 0x30120,param_1,param_2);
    uVar3 = 0xfffffffd;
  }
  else {
    iVar7 = *param_1;
    if (param_1[1] < iVar7) {
      local_44 = *(uint **)(iVar9 + DAT_00030158);
      uVar10 = *local_44;
    }
    else {
      iVar6 = iVar7 << 1;
      iVar4 = DAT_00030198 + 0x2fffc;
      iVar7 = mpp_osal_realloc(iVar4,param_1[2],iVar7 << 3);
      if (iVar7 == 0) {
        _mpp_err(DAT_000301cc + 0x3014c,DAT_000301c8 + 0x30148,iVar4,iVar6);
        return 0xfffffffc;
      }
      local_44 = *(uint **)(iVar9 + DAT_00030158);
      uVar10 = *local_44;
      if ((uVar10 & 8) != 0) {
        _mpp_log(DAT_000301b8 + 0x300e4,DAT_000301b4 + 0x300dc,iVar4,param_1,param_1[2],*param_1,
                 iVar7,iVar6);
        uVar10 = *local_44;
      }
      param_1[2] = iVar7;
      *param_1 = iVar6;
    }
    __string = (byte *)*param_2;
    sVar2 = strnlen((char *)__string,0x400);
    uVar8 = 0;
    if ((uVar10 & 2) != 0) {
      _mpp_log(DAT_000301ac + 0x30098,DAT_000301a8 + 0x3008c,DAT_000301b0 + 0x300a0,param_1,__string
               ,sVar2);
      uVar8 = *local_44 & 2;
    }
    iVar9 = param_1[5];
    if ((int)sVar2 < 1) {
      sVar12 = 0;
      iVar7 = 0;
    }
    else {
      uVar10 = (uint)*__string;
      if (uVar10 == 0) {
        iVar7 = 0;
        sVar12 = 0;
      }
      else {
        sVar12 = 0;
        iVar7 = 0;
        iVar4 = DAT_0003015c + 0x2fd04;
        iVar5 = DAT_00030160 + 0x2fd10;
        iVar6 = iVar9;
        do {
          puVar11 = (undefined4 *)(iVar7 * 0x28 + iVar6);
          uVar1 = uVar10 >> 4;
          iVar9 = (int)*(short *)((int)puVar11 + uVar1 * 2 + 8);
          if (uVar8 != 0) {
            _mpp_log(DAT_0003017c + 0x2ff10,iVar5,iVar4,param_1,__string,sVar12,uVar10,uVar10,uVar1,
                     uVar10 & 0xf,iVar7,iVar9);
          }
          if (iVar9 == 0) {
            iVar9 = FUN_0002f85c(param_1);
            uVar8 = *local_44;
            *(short *)((int)puVar11 + uVar1 * 2 + 8) = (short)iVar9;
            if ((uVar8 & 2) != 0) {
              _mpp_log(DAT_00030190 + 0x2ffc8,DAT_00030194 + 0x2ffe0,DAT_0003018c + 0x2ffc0,param_1,
                       __string,sVar12,uVar10,uVar10,*puVar11,iVar9);
              goto LAB_0002fd70;
            }
            iVar6 = param_1[5];
            iVar13 = (uVar10 & 0xf) + 4;
            puVar11 = (undefined4 *)(iVar9 * 0x28 + iVar6);
            iVar7 = (int)*(short *)((int)puVar11 + iVar13 * 2);
            if (iVar7 == 0) goto LAB_0002fea8;
            uVar8 = 0;
          }
          else {
LAB_0002fd70:
            iVar6 = param_1[5];
            iVar13 = (uVar10 & 0xf) + 4;
            puVar11 = (undefined4 *)(iVar9 * 0x28 + iVar6);
            iVar7 = (int)*(short *)((int)puVar11 + iVar13 * 2);
            if ((*local_44 & 2) == 0) {
              if (iVar7 == 0) goto LAB_0002fea8;
              uVar8 = 0;
            }
            else {
              _mpp_log(DAT_00030168 + 0x2fdc8,DAT_00030164 + 0x2fdb8,DAT_0003016c + 0x2fdd8,param_1,
                       __string,sVar12,uVar10,uVar10,uVar1,uVar10 & 0xf,iVar9,iVar7);
              if (iVar7 == 0) {
LAB_0002fea8:
                iVar7 = FUN_0002f85c(param_1);
                uVar8 = *local_44;
                *(short *)((int)puVar11 + iVar13 * 2) = (short)iVar7;
                if ((uVar8 & 2) != 0) {
                  _mpp_log(DAT_00030184 + 0x2ff84,DAT_00030188 + 0x2ff9c,DAT_00030180 + 0x2ff7c,
                           param_1,__string,sVar12,uVar10,uVar10,*puVar11,iVar7);
                  goto LAB_0002fde8;
                }
              }
              else {
LAB_0002fde8:
                if ((*local_44 & 2) != 0) {
                  _mpp_log(DAT_00030174 + 0x2fe2c,DAT_00030170 + 0x2fe24,DAT_00030178 + 0x2fe44,
                           param_1,__string,sVar12,uVar10,uVar10,uVar1,uVar10 & 0xf,iVar7,iVar7);
                  iVar6 = param_1[5];
                  uVar8 = *local_44 & 2;
                  goto LAB_0002fd20;
                }
              }
              uVar8 = 0;
              iVar6 = param_1[5];
            }
          }
LAB_0002fd20:
          sVar12 = sVar12 + 1;
          iVar9 = iVar7 * 0x28 + iVar6;
        } while ((sVar2 != sVar12) && (uVar10 = (uint)__string[sVar12], uVar10 != 0));
      }
    }
    iVar6 = param_1[1];
    iVar4 = param_1[2];
    param_1[1] = iVar6 + 1;
    *(int *)(iVar9 + 4) = iVar6;
    *(undefined4 **)(iVar4 + iVar6 * 4) = param_2;
    uVar3 = 0;
    if (uVar8 != 0) {
      _mpp_log(DAT_0003019c + 0x30050,DAT_000301a0 + 0x3005c,DAT_000301a4 + 0x30064,param_1,sVar12,
               __string,iVar7,iVar6,param_2);
      return 0;
    }
  }
  return uVar3;
}



/* ===== mpp_trie_get_info @ 000301d0 size=492 ===== */

undefined4 mpp_trie_get_info(int param_1,byte *param_2)

{
  byte bVar1;
  size_t sVar2;
  byte *pbVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  
  iVar4 = DAT_000303bc + 0x301f8;
  if (param_1 == 0 || param_2 == (byte *)0x0) {
    _mpp_err(DAT_000303e4 + 0x303a0,DAT_000303e0 + 0x3039c,DAT_000303dc + 0x30398,param_1,param_2);
    return 0;
  }
  iVar7 = *(int *)(param_1 + 0x14);
  sVar2 = strlen((char *)param_2);
  puVar5 = *(uint **)(iVar4 + DAT_000303c0);
  bVar9 = false;
  if ((*puVar5 & 4) == 0) {
    if (sVar2 == 0) {
      return 0;
    }
    bVar1 = *param_2;
    iVar6 = (int)*(short *)(iVar7 + (uint)(bVar1 >> 4) * 2 + 8);
    uVar8 = 0;
    if (iVar6 == 0) {
      return 0;
    }
LAB_00030244:
    iVar4 = iVar7 + iVar6 * 0x28;
    iVar6 = (int)*(short *)(iVar4 + (bVar1 & 0xf) * 2 + 8);
    if (iVar6 != 0) {
      pbVar3 = param_2 + (sVar2 - 1);
      do {
        iVar4 = iVar7 + iVar6 * 0x28;
        if (pbVar3 == param_2) {
          bVar9 = iVar4 != 0;
          iVar7 = iVar4;
          if (uVar8 != 0) goto LAB_000302c4;
          goto LAB_000302ec;
        }
        param_2 = param_2 + 1;
        iVar6 = (int)*(short *)(iVar4 + (uint)(*param_2 >> 4) * 2 + 8);
        if (iVar6 == 0) break;
        iVar4 = iVar7 + iVar6 * 0x28;
        iVar6 = (int)*(short *)(iVar4 + (*param_2 & 0xf) * 2 + 8);
      } while (iVar6 != 0);
    }
  }
  else {
    _mpp_log(DAT_000303d8 + 0x30338,DAT_000303d4 + 0x30334,DAT_000303d0 + 0x3032c,param_1,param_2,
             sVar2);
    uVar8 = *puVar5 & 4;
    if (sVar2 == 0) {
      if (uVar8 == 0) {
        return 0;
      }
      iVar6 = 0;
      goto LAB_000302c4;
    }
    bVar1 = *param_2;
    iVar6 = (int)*(short *)(iVar7 + (uint)(bVar1 >> 4) * 2 + 8);
    iVar4 = iVar7;
    if (iVar6 != 0) goto LAB_00030244;
  }
  if (uVar8 == 0) {
    return 0;
  }
  iVar6 = 0;
  iVar7 = iVar4;
LAB_000302c4:
  _mpp_log(DAT_000303c8 + 0x302e4,DAT_000303cc + 0x302ec,DAT_000303c4 + 0x302dc,iVar6,iVar7,
           *(undefined4 *)(iVar7 + 4));
LAB_000302ec:
  if ((bVar9) && (-1 < *(int *)(iVar7 + 4))) {
    return *(undefined4 *)(*(int *)(param_1 + 8) + *(int *)(iVar7 + 4) * 4);
  }
  return 0;
}



/* ===== mpp_trie_get_node_count @ 000303e8 size=60 ===== */

undefined4 mpp_trie_get_node_count(int param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x10);
  }
  _mpp_err(DAT_0003042c + 0x3041c,DAT_00030428 + 0x30418,DAT_00030424 + 0x30414);
  return 0;
}



/* ===== mpp_trie_get_info_count @ 00030430 size=60 ===== */

undefined4 mpp_trie_get_info_count(int param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 4);
  }
  _mpp_err(DAT_00030474 + 0x30464,DAT_00030470 + 0x30460,DAT_0003046c + 0x3045c);
  return 0;
}



/* ===== mpp_dec_cfg_set_u32 @ 00030478 size=8 ===== */

undefined4 mpp_dec_cfg_set_u32(void)

{
  return 0;
}



/* ===== mpp_dec_cfg_set_default @ 00030480 size=20 ===== */

/* mpp_dec_cfg_set_default(MppDecCfgSet_t*) */

void mpp_dec_cfg_set_default(MppDecCfgSet_t *param_1)

{
  undefined8 uVar1;
  
  uVar1 = DAT_00030498;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}



/* ===== mpp_dec_cfg_init @ 000304a0 size=172 ===== */

undefined4 mpp_dec_cfg_init(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = DAT_0003054c + 0x304b4;
  if (param_1 == (undefined4 *)0x0) {
    _mpp_err(DAT_00030564 + 0x30518,DAT_00030560 + 0x30514,DAT_0003055c + 0x30510);
    return 0xfffffffd;
  }
  iVar5 = DAT_00030550 + 0x304c4;
  puVar3 = (undefined4 *)mpp_osal_calloc(iVar5,0x68);
  iVar2 = DAT_00030558;
  iVar1 = DAT_00030554;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0x68;
    mpp_env_get_u32(iVar2 + 0x304f0,*(undefined4 *)(iVar4 + iVar1),0);
    *param_1 = puVar3;
    return 0;
  }
  _mpp_err(DAT_0003056c + 0x3053c,DAT_00030568 + 0x30538,iVar5,0);
  *param_1 = 0;
  return 0xfffffc12;
}



/* ===== mpp_dec_cfg_deinit @ 00030570 size=68 ===== */

undefined4 mpp_dec_cfg_deinit(int param_1)

{
  if (param_1 != 0) {
    mpp_osal_free(DAT_000305b4 + 0x30588);
    return 0;
  }
  _mpp_err(DAT_000305c0 + 0x305ac,DAT_000305bc + 0x305a8,DAT_000305b8 + 0x305a4);
  return 0xfffffffd;
}



/* ===== mpp_dec_cfg_show @ 000305c4 size=24 ===== */

void mpp_dec_cfg_show(void)

{
  _mpp_log((int)&DAT_000305dc + DAT_000305e0,DAT_000305dc + 0x305d8,0);
  return;
}



/* ===== check_cfg_api_info @ 000305e4 size=448 ===== */

undefined4 check_cfg_api_info(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = *(ushort *)(param_1 + 1) >> 4;
  uVar3 = *(byte *)(param_1 + 1) & 0xf;
  iVar4 = DAT_000307a4 + 0x30610;
  switch(param_2) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    goto LAB_000306c4;
  case 3:
LAB_000306c4:
    if (uVar1 != 8) {
      _mpp_err(DAT_000307c0 + 0x306fc,DAT_000307bc + 0x306ec,0,*param_1,
               *(undefined4 *)(*(int *)(iVar4 + DAT_000307b0) + uVar3 * 4),
               *(undefined4 *)(*(int *)(iVar4 + DAT_000307b0) + param_2 * 4));
      return 0xffffffff;
    }
    goto LAB_00030674;
  case 4:
    if (uVar3 != 4) {
      _mpp_err(DAT_000307d0 + 0x3076c,DAT_000307cc + 0x30760,0,*param_1,
               *(undefined4 *)(*(int *)(iVar4 + DAT_000307b0) + uVar3 * 4),
               *(undefined4 *)(*(int *)(iVar4 + DAT_000307b0) + 0x10));
      return 0xffffffff;
    }
    goto LAB_00030674;
  case 5:
    if (uVar3 == 5) {
      uVar2 = 0;
    }
    else {
      _mpp_err(DAT_000307c8 + 0x3073c,DAT_000307c4 + 0x30728,0,*param_1,
               *(undefined4 *)(*(int *)(iVar4 + DAT_000307b0) + uVar3 * 4),
               *(undefined4 *)(*(int *)(iVar4 + DAT_000307b0) + 0x14));
      uVar2 = 0xffffffff;
    }
    if (uVar1 != 0) {
      return uVar2;
    }
    _mpp_err(DAT_000307ac + 0x30660,DAT_000307a8 + 0x3065c,0,*param_1,0);
    return 0xffffffff;
  default:
    _mpp_err(DAT_000307d8 + 0x3079c,DAT_000307d4 + 0x30798,0,*param_1,param_2);
    return 0xffffffff;
  }
  if (uVar1 == 4) {
LAB_00030674:
    uVar2 = 0;
  }
  else {
    _mpp_err(DAT_000307b8 + 0x306b8,DAT_000307b4 + 0x306a8,0,*param_1,
             *(undefined4 *)(*(int *)(iVar4 + DAT_000307b0) + uVar3 * 4),
             *(undefined4 *)(*(int *)(iVar4 + DAT_000307b0) + param_2 * 4));
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== strof_ctx_type @ 000307dc size=16 ===== */

undefined4 strof_ctx_type(int param_1)

{
  return *(undefined4 *)(DAT_000307ec + 0x307e8 + param_1 * 4);
}



/* ===== strof_coding_type @ 000307f0 size=60 ===== */

undefined4 strof_coding_type(uint param_1)

{
  if (param_1 < 0xb) {
    return *(undefined4 *)(DAT_00030830 + 0x30828 + param_1 * 4);
  }
  if (param_1 - 0x1000000 < 7) {
    return *(undefined4 *)(DAT_0003082c + 0x30810 + (param_1 - 0x1000000) * 4);
  }
  return 0;
}



/* ===== strof_rc_mode @ 00030834 size=32 ===== */

undefined4 strof_rc_mode(uint param_1)

{
  if (param_1 < 4) {
    return *(undefined4 *)(DAT_00030854 + 0x30848 + param_1 * 4);
  }
  return 0;
}



/* ===== strof_gop_mode @ 00030858 size=32 ===== */

undefined4 strof_gop_mode(uint param_1)

{
  if (1 < param_1) {
    return 0;
  }
  return *(undefined4 *)(DAT_00030878 + 0x30874 + param_1 * 4);
}



/* ===== strof_profle @ 0003087c size=184 ===== */

int strof_profle(uint param_1,uint param_2)

{
  if (param_1 < 10) {
    if (7 < param_1) {
      return DAT_0003093c + 0x308f8;
    }
    if (param_1 == 7) {
      if (param_2 == 0x42) {
        return DAT_00030944 + 0x30910;
      }
      if (param_2 == 0x4d) {
        return DAT_0003094c + 0x30928;
      }
      if (param_2 == 100) {
        return (int)&DAT_00030934 + DAT_00030950;
      }
      if (param_2 != 0x6e) {
        return DAT_00030934 + 0x308c0;
      }
      return DAT_00030948 + 0x3091c;
    }
  }
  else if (param_1 == 0x1000004) {
    if (1 < param_2) {
      return DAT_00030938 + 0x308e4;
    }
    return DAT_00030940 + 0x30904;
  }
  return 0;
}



/* ===== mpp_task_meta_set_s32 @ 00030954 size=68 ===== */

undefined4 mpp_task_meta_set_s32(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = check_mpp_task_name();
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001ca4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_mpp_meta_set_s32_0004a250)
                      (*(undefined4 *)(param_1 + 0x18),param_2,param_3);
    return uVar1;
  }
  return 0xffffffff;
}



/* ===== mpp_task_meta_set_s64 @ 0003098c size=80 ===== */

undefined4
mpp_task_meta_set_s64(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = check_mpp_task_name();
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001ca64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_mpp_meta_set_s64_0004a258)
                      (*(undefined4 *)(param_1 + 0x18),param_2,param_3,param_4);
    return uVar1;
  }
  return 0xffffffff;
}



/* ===== mpp_task_meta_set_ptr @ 000309d0 size=68 ===== */

undefined4 mpp_task_meta_set_ptr(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = check_mpp_task_name();
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001c794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_mpp_meta_set_ptr_0004a168)
                      (*(undefined4 *)(param_1 + 0x18),param_2,param_3);
    return uVar1;
  }
  return 0xffffffff;
}



/* ===== mpp_task_meta_set_frame @ 00030a08 size=68 ===== */

undefined4 mpp_task_meta_set_frame(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = check_mpp_task_name();
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001c740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_mpp_meta_set_frame_0004a14c)
                      (*(undefined4 *)(param_1 + 0x18),param_2,param_3);
    return uVar1;
  }
  return 0xffffffff;
}



/* ===== mpp_task_meta_set_packet @ 00030a40 size=68 ===== */

undefined4 mpp_task_meta_set_packet(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = check_mpp_task_name();
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001c4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_mpp_meta_set_packet_0004a06c)
                      (*(undefined4 *)(param_1 + 0x18),param_2,param_3);
    return uVar1;
  }
  return 0xffffffff;
}



/* ===== mpp_task_meta_set_buffer @ 00030a78 size=68 ===== */

undefined4 mpp_task_meta_set_buffer(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = check_mpp_task_name();
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001c6d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_mpp_meta_set_buffer_0004a128)
                      (*(undefined4 *)(param_1 + 0x18),param_2,param_3);
    return uVar1;
  }
  return 0xffffffff;
}



/* ===== mpp_task_meta_get_s32 @ 00030ab0 size=68 ===== */

int mpp_task_meta_get_s32(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = check_mpp_task_name();
  if (iVar1 == 0) {
    iVar1 = mpp_meta_get_s32(*(undefined4 *)(param_1 + 0x18),param_2,param_3);
    if (iVar1 != 0) {
      *param_3 = param_4;
    }
    return iVar1;
  }
  return -1;
}



/* ===== mpp_task_meta_get_s64 @ 00030af4 size=68 ===== */

int mpp_task_meta_get_s64
              (int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = check_mpp_task_name();
  if (iVar1 != 0) {
    return -1;
  }
  iVar1 = mpp_meta_get_s64(*(undefined4 *)(param_1 + 0x18),param_2,param_3);
  if (iVar1 != 0) {
    *param_3 = param_5;
    param_3[1] = param_6;
  }
  return iVar1;
}



/* ===== mpp_task_meta_get_ptr @ 00030b38 size=68 ===== */

int mpp_task_meta_get_ptr(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = check_mpp_task_name();
  if (iVar1 == 0) {
    iVar1 = mpp_meta_get_ptr(*(undefined4 *)(param_1 + 0x18),param_2,param_3);
    if (iVar1 != 0) {
      *param_3 = param_4;
    }
    return iVar1;
  }
  return -1;
}



/* ===== mpp_task_meta_get_frame @ 00030b7c size=64 ===== */

int mpp_task_meta_get_frame(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = check_mpp_task_name();
  if (iVar1 == 0) {
    iVar1 = mpp_meta_get_frame(*(undefined4 *)(param_1 + 0x18),param_2,param_3);
    if (iVar1 != 0) {
      *param_3 = 0;
    }
    return iVar1;
  }
  return -1;
}



/* ===== mpp_task_meta_get_packet @ 00030bbc size=64 ===== */

int mpp_task_meta_get_packet(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = check_mpp_task_name();
  if (iVar1 == 0) {
    iVar1 = mpp_meta_get_packet(*(undefined4 *)(param_1 + 0x18),param_2,param_3);
    if (iVar1 != 0) {
      *param_3 = 0;
    }
    return iVar1;
  }
  return -1;
}



/* ===== mpp_task_meta_get_buffer @ 00030bfc size=64 ===== */

int mpp_task_meta_get_buffer(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = check_mpp_task_name();
  if (iVar1 == 0) {
    iVar1 = mpp_meta_get_buffer(*(undefined4 *)(param_1 + 0x18),param_2,param_3);
    if (iVar1 != 0) {
      *param_3 = 0;
    }
    return iVar1;
  }
  return -1;
}



/* ===== FUN_00030c40 @ 00030c40 size=284 ===== */

undefined4 FUN_00030c40(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  uint *puVar5;
  int iVar6;
  
  iVar1 = DAT_00030d74;
  iVar6 = DAT_00030d70 + 0x30c60;
  piVar2 = (int *)mpp_osal_malloc(iVar6,0x14);
  if (piVar2 == (int *)0x0) {
    _mpp_err(DAT_00030d94 + 0x30d54,DAT_00030d90 + 0x30d50,iVar6,param_2);
    uVar4 = 0xfffffffc;
  }
  else {
    puVar5 = *(uint **)(iVar1 + 0x30c74 + DAT_00030d78);
    uVar3 = 0;
    if ((*puVar5 & 1) != 0) {
      _mpp_log(DAT_00030d8c + 0x30d2c,DAT_00030d88 + 0x30d28,iVar6,param_1,param_2);
      uVar3 = *puVar5 & 1;
    }
    *piVar2 = param_2;
    piVar2[1] = param_1;
    if (param_2 == 0) {
      *(undefined8 *)(piVar2 + 2) = DAT_00030d68;
      piVar2[4] = 2;
      *param_3 = (int)piVar2;
    }
    else {
      *(undefined8 *)(piVar2 + 2) = DAT_00030d60;
      piVar2[4] = 0;
      *param_3 = (int)piVar2;
    }
    uVar4 = 0;
    if (uVar3 != 0) {
      _mpp_log(DAT_00030d84 + 0x30d00,DAT_00030d80 + 0x30cfc,DAT_00030d7c + 0x30cf4,param_1,piVar2);
      return 0;
    }
  }
  return uVar4;
}



/* ===== check_mpp_task_name @ 00030d98 size=108 ===== */

undefined4 check_mpp_task_name(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00030e04 + 0x30dac;
  if ((param_1 != (int *)0x0) && (*param_1 == DAT_00030e08 + 0x30dbc)) {
    return 0;
  }
  _mpp_err(DAT_00030e14 + 0x30ddc,DAT_00030e10 + 0x30dd8,DAT_00030e0c + 0x30dd4);
  if ((**(uint **)(iVar1 + DAT_00030e18) & 0x10000000) == 0) {
    return 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== _mpp_port_poll @ 00030e1c size=1208 ===== */

int _mpp_port_poll(undefined4 param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_r2;
  pthread_mutex_t *__mutex;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  pthread_cond_t *__cond;
  pthread_mutex_t *__mutex_00;
  int iVar9;
  undefined8 uVar10;
  timespec local_38;
  
  iVar4 = param_2[1];
  __mutex_00 = *(pthread_mutex_t **)(iVar4 + 0x24);
  iVar7 = DAT_000312d4 + 0x30e40;
  pthread_mutex_lock(__mutex_00);
  puVar6 = *(uint **)(iVar7 + DAT_000312d8);
  if ((*puVar6 & 1) != 0) {
    _mpp_log(DAT_00031308 + 0x31088,DAT_00031304 + 0x31084,DAT_00031300 + 0x31080,param_2);
  }
  if (*(int *)(iVar4 + 0x2c) == 0) {
    iVar5 = -1;
    _mpp_err(DAT_00031370 + 0x312c8,DAT_0003136c + 0x312c0,0,
             *(undefined4 *)(DAT_00031368 + 0x312b4 + *param_2 * 4));
    uVar3 = *puVar6;
    goto LAB_00031048;
  }
  iVar9 = param_2[2];
  iVar8 = iVar4 + iVar9 * 0x14;
  iVar2 = iVar4 + iVar9 * 0x14 + 0x40;
  iVar5 = *(int *)(iVar8 + 0x48);
  if (iVar5 != 0) {
    if (iVar2 == *(int *)(iVar8 + 0x40)) {
      _mpp_err(DAT_0003133c + 0x311ac,DAT_00031338 + 0x311a8,0,DAT_00031334 + 0x3119c,
               DAT_00031330 + 0x31190,0xa0);
      if ((**(uint **)(iVar7 + DAT_000312ec) & 0x10000000) != 0) goto LAB_000312d0;
      iVar5 = *(int *)(iVar8 + 0x48);
    }
    uVar3 = *puVar6;
    if ((uVar3 & 2) != 0) {
      _mpp_log(DAT_0003132c + 0x31170,DAT_00031328 + 0x3116c,0,*(undefined4 *)(iVar4 + 0x20),iVar4,
               param_1,*(undefined4 *)(DAT_00031324 + 0x31140 + *param_2 * 4),param_3,iVar5);
      uVar3 = *puVar6;
    }
    goto LAB_00031048;
  }
  if ((iVar2 != *(int *)(iVar8 + 0x40)) &&
     (_mpp_err(DAT_000312e8 + 0x30ed4,DAT_000312e4 + 0x30ed0,0,DAT_000312e0 + 0x30ec4,
               DAT_000312dc + 0x30eb8,0xa7), (**(uint **)(iVar7 + DAT_000312ec) & 0x10000000) != 0))
  {
LAB_000312d0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_3 == 0) {
LAB_000310b8:
    iVar5 = -1;
  }
  else {
    iVar5 = iVar9 * 0x14 + iVar4;
    __cond = *(pthread_cond_t **)(iVar5 + 0x50);
    if (__cond == (pthread_cond_t *)0x0) {
      _mpp_err(DAT_00031358 + 0x31244,DAT_00031354 + 0x31240,0,DAT_00031350 + 0x31234,
               DAT_0003134c + 0x31228,0xaf);
      if ((**(uint **)(iVar7 + DAT_000312ec) & 0x10000000) != 0) goto LAB_000312d0;
      __cond = *(pthread_cond_t **)(iVar5 + 0x50);
    }
    if (param_3 < 0) {
      if ((*puVar6 & 2) != 0) {
        _mpp_log(DAT_00031364 + 0x3129c,DAT_00031360 + 0x31290,0,*(undefined4 *)(iVar4 + 0x20),iVar4
                 ,param_1,*(undefined4 *)(DAT_0003135c + 0x31274 + *param_2 * 4));
      }
      iVar5 = pthread_cond_wait(__cond,*(pthread_mutex_t **)(iVar4 + 0x24));
    }
    else {
      if ((*puVar6 & 2) != 0) {
        _mpp_log(DAT_00031348 + 0x3120c,DAT_00031344 + 0x31208,0,*(undefined4 *)(iVar4 + 0x20),iVar4
                 ,param_1,*(undefined4 *)(DAT_00031340 + 0x311dc + *param_2 * 4),param_3);
      }
      __mutex = *(pthread_mutex_t **)(iVar4 + 0x24);
      uVar10 = VectorShiftRight(CONCAT44(param_3,param_3),0x20);
      clock_gettime(5,&local_38);
      uVar1 = (undefined4)((ulonglong)uVar10 >> 0x20);
      __aeabi_ldivmod((int)uVar10,uVar1,1000,0);
      iVar8 = extraout_r2 * 1000000 + local_38.tv_nsec;
      iVar5 = __aeabi_ldivmod((int)uVar10,uVar1,1000,0);
      local_38.tv_nsec = iVar8 % 1000000000;
      local_38.tv_sec = local_38.tv_sec + iVar5 + iVar8 / 1000000000;
      iVar5 = pthread_cond_timedwait(__cond,__mutex,&local_38);
    }
    iVar8 = iVar9 * 0x14 + iVar4;
    if (*(int *)(iVar8 + 0x48) == 0) {
      if (0 < iVar5) goto LAB_000310b8;
    }
    else {
      iVar5 = *(int *)(iVar8 + 0x48);
      if (*(int *)(iVar8 + 0x40) == iVar2) {
        _mpp_err(DAT_000312fc + 0x31018,DAT_000312f8 + 0x31014,0,DAT_000312f4 + 0x31008,
                 DAT_000312f0 + 0x30ffc,0xc0);
        if ((**(uint **)(iVar7 + DAT_000312ec) & 0x10000000) != 0) goto LAB_000312d0;
        iVar5 = *(int *)(iVar8 + 0x48);
      }
    }
  }
  uVar3 = *puVar6;
  if ((uVar3 & 2) != 0) {
    _mpp_log(DAT_00031320 + 0x3110c,DAT_0003131c + 0x31108,0,*(undefined4 *)(iVar4 + 0x20),iVar4,
             param_1,*(undefined4 *)(DAT_00031318 + 0x310dc + *param_2 * 4),param_3,iVar5);
    uVar3 = *puVar6;
  }
LAB_00031048:
  if ((uVar3 & 1) != 0) {
    _mpp_log(DAT_00031314 + 0x310a8,DAT_00031310 + 0x310a4,DAT_0003130c + 0x310a0);
  }
  pthread_mutex_unlock(__mutex_00);
  return iVar5;
}



/* ===== _mpp_port_dequeue @ 00031374 size=936 ===== */

undefined4 _mpp_port_dequeue(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  pthread_mutex_t *__mutex;
  
  iVar7 = param_2[1];
  __mutex = *(pthread_mutex_t **)(iVar7 + 0x24);
  iVar11 = DAT_0003171c + 0x3139c;
  pthread_mutex_lock(__mutex);
  puVar4 = *(uint **)(iVar11 + DAT_00031720);
  if ((*puVar4 & 1) != 0) {
    _mpp_log(DAT_0003175c + 0x315e0,DAT_00031758 + 0x315d8,DAT_00031754 + 0x315d0,param_1,param_2);
  }
  if (*(int *)(iVar7 + 0x2c) == 0) {
    uVar8 = 0xffffffff;
    _mpp_err(DAT_00031798 + 0x31710,DAT_00031794 + 0x31708,0,
             *(undefined4 *)(DAT_00031790 + 0x316fc + *param_2 * 4));
    uVar3 = *puVar4;
  }
  else {
    iVar10 = param_2[2];
    iVar2 = param_2[3];
    *param_3 = 0;
    iVar5 = iVar10 * 0x14;
    iVar12 = iVar7 + iVar5;
    piVar6 = (int *)(iVar7 + iVar5 + 0x40);
    if (*(int *)(iVar12 + 0x48) == 0) {
      if ((*(int **)(iVar12 + 0x40) != piVar6) &&
         (_mpp_err(DAT_00031730 + 0x314f0,DAT_0003172c + 0x314ec,0,DAT_00031728 + 0x314e0,
                   DAT_00031724 + 0x314d4,0xe8),
         (**(uint **)(iVar11 + DAT_00031734) & 0x10000000) != 0)) {
LAB_000316e4:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar3 = *puVar4;
      if ((uVar3 & 2) == 0) {
        uVar8 = 0xffffffff;
      }
      else {
        uVar8 = 0xffffffff;
        _mpp_log(DAT_00031740 + 0x31564,DAT_00031744 + 0x31574,0,*(undefined4 *)(iVar7 + 0x20),iVar7
                 ,param_1,*(undefined4 *)(DAT_0003173c + 0x31540 + *param_2 * 4),
                 *(undefined4 *)(DAT_00031738 + 0x31530 + param_2[2] * 4),
                 *(undefined4 *)(DAT_00031738 + 0x31530 + param_2[3] * 4));
        uVar3 = *puVar4;
      }
    }
    else {
      piVar9 = *(int **)(iVar12 + 0x40);
      if (piVar9 == piVar6) {
        _mpp_err(DAT_0003177c + 0x31680,DAT_00031778 + 0x3167c,0,DAT_00031774 + 0x31674,
                 DAT_00031770 + 0x31668,0xf1);
        if ((**(uint **)(iVar11 + DAT_00031734) & 0x10000000) != 0) goto LAB_000316e4;
        piVar9 = *(int **)(iVar12 + 0x40);
      }
      piVar13 = piVar9 + -1;
      check_mpp_task_name(piVar13);
      iVar10 = iVar10 * 0x14 + iVar7;
      iVar5 = *piVar9;
      piVar6 = (int *)piVar9[1];
      *(int **)(iVar5 + 4) = piVar6;
      *piVar6 = iVar5;
      *(ulonglong *)piVar9 = CONCAT44(piVar9,piVar9);
      iVar5 = *(int *)(iVar10 + 0x48) + -1;
      *(int *)(iVar10 + 0x48) = iVar5;
      if ((iVar5 < 0) &&
         (_mpp_err(DAT_0003178c + 0x316d0,DAT_00031788 + 0x316cc,0,DAT_00031784 + 0x316c0,
                   DAT_00031780 + 0x316b4,0xf7),
         (**(uint **)(iVar11 + DAT_00031734) & 0x10000000) != 0)) goto LAB_000316e4;
      uVar3 = *puVar4;
      iVar11 = iVar7 + iVar2 * 0x14;
      puVar1 = *(undefined4 **)(iVar11 + 0x44);
      *(int **)(iVar11 + 0x44) = piVar9;
      *piVar9 = iVar7 + iVar2 * 0x14 + 0x40;
      piVar9[1] = (int)puVar1;
      *puVar1 = piVar9;
      *(int *)(iVar11 + 0x48) = *(int *)(iVar11 + 0x48) + 1;
      piVar9[4] = *(int *)(iVar11 + 0x4c);
      if ((uVar3 & 2) != 0) {
        _mpp_log(DAT_0003176c + 0x3163c,DAT_00031768 + 0x31634,0,*(undefined4 *)(iVar7 + 0x20),iVar7
                 ,param_1,*(undefined4 *)(DAT_00031764 + 0x31604 + *param_2 * 4),piVar13,
                 *(undefined4 *)(DAT_00031760 + 0x315fc + param_2[2] * 4),
                 *(undefined4 *)(DAT_00031760 + 0x315fc + param_2[3] * 4));
        uVar3 = *puVar4;
      }
      uVar8 = 0;
      *param_3 = piVar13;
    }
  }
  if ((uVar3 & 1) != 0) {
    _mpp_log(DAT_0003174c + 0x315a8,DAT_00031748 + 0x315a0,DAT_00031750 + 0x315b4,param_1,param_2,
             *param_3,uVar8);
  }
  pthread_mutex_unlock(__mutex);
  return uVar8;
}



/* ===== _mpp_port_enqueue @ 0003179c size=716 ===== */

undefined4 _mpp_port_enqueue(undefined4 param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  pthread_mutex_t *__mutex;
  uint uVar11;
  
  iVar8 = param_2[1];
  __mutex = *(pthread_mutex_t **)(iVar8 + 0x24);
  iVar5 = DAT_00031a68 + 0x317c4;
  pthread_mutex_lock(__mutex);
  puVar10 = *(uint **)(iVar5 + DAT_00031a6c);
  if ((*puVar10 & 1) != 0) {
    _mpp_log(DAT_00031a9c + 0x31974,DAT_00031a98 + 0x3196c,DAT_00031a94 + 0x31964,param_1,param_2,
             param_3);
  }
  if (*(int *)(iVar8 + 0x2c) == 0) {
    uVar7 = 0xffffffff;
    _mpp_err(DAT_00031ad0 + 0x31a60,DAT_00031acc + 0x31a58,0,
             *(undefined4 *)(DAT_00031ac8 + 0x31a4c + *param_2 * 4));
  }
  else {
    check_mpp_task_name(param_3);
    if ((*(int *)(param_3 + 0xc) != iVar8) &&
       (_mpp_err(DAT_00031a7c + 0x31830,DAT_00031a78 + 0x3182c,0,DAT_00031a74 + 0x31820,
                 DAT_00031a70 + 0x31814,0x120),
       (**(uint **)(iVar5 + DAT_00031a80) & 0x10000000) != 0)) {
LAB_00031a64:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    iVar2 = param_2[3];
    if (*(int *)(param_3 + 0x14) != iVar2) {
      _mpp_err(DAT_00031a90 + 0x31930,DAT_00031a8c + 0x3192c,0,DAT_00031a88 + 0x31920,
               DAT_00031a84 + 0x31914,0x121);
      if ((**(uint **)(iVar5 + DAT_00031a80) & 0x10000000) != 0) goto LAB_00031a64;
      iVar2 = *(int *)(param_3 + 0x14);
    }
    iVar9 = param_2[4];
    iVar2 = iVar2 * 0x14 + iVar8;
    puVar4 = (undefined8 *)(param_3 + 4);
    iVar5 = *(int *)(param_3 + 4);
    piVar1 = *(int **)(param_3 + 8);
    uVar11 = *puVar10;
    *(int **)(iVar5 + 4) = piVar1;
    *piVar1 = iVar5;
    iVar5 = iVar8 + iVar9 * 0x14;
    *puVar4 = CONCAT44(puVar4,puVar4);
    iVar6 = iVar8 + iVar9 * 0x14 + 0x40;
    *(int *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x48) + -1;
    puVar3 = *(undefined4 **)(iVar5 + 0x44);
    *(undefined8 **)(iVar5 + 0x44) = puVar4;
    *(int *)(param_3 + 4) = iVar6;
    *(undefined4 **)(param_3 + 8) = puVar3;
    *puVar3 = puVar4;
    *(int *)(iVar5 + 0x48) = *(int *)(iVar5 + 0x48) + 1;
    *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(iVar5 + 0x4c);
    if ((uVar11 & 2) != 0) {
      _mpp_log(DAT_00031ac0 + 0x31a28,DAT_00031ac4 + 0x31a34,0,*(undefined4 *)(iVar8 + 0x20),iVar8,
               param_1,*(undefined4 *)(DAT_00031abc + 0x319fc + *param_2 * 4),param_3,
               *(undefined4 *)(DAT_00031ab8 + 0x319f4 + param_2[3] * 4),
               *(undefined4 *)(DAT_00031ab8 + 0x319f4 + iVar9 * 4));
    }
    pthread_cond_signal(*(pthread_cond_t **)(iVar9 * 0x14 + iVar8 + 0x50));
    if ((*puVar10 & 1) == 0) {
      uVar7 = 0;
      goto LAB_000318e8;
    }
    uVar7 = 0;
    _mpp_log(DAT_00031aa8 + 0x3199c,DAT_00031aa4 + 0x31998,DAT_00031aa0 + 0x31994,iVar6);
  }
  if ((*puVar10 & 1) != 0) {
    _mpp_log(DAT_00031ab4 + 0x319d0,DAT_00031ab0 + 0x319c8,DAT_00031aac + 0x319c0,param_1,param_2,
             param_3,uVar7);
  }
LAB_000318e8:
  pthread_mutex_unlock(__mutex);
  return uVar7;
}



/* ===== _mpp_port_awake @ 00031ad4 size=224 ===== */

undefined4 _mpp_port_awake(undefined4 param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  pthread_mutex_t *__mutex;
  
  if (param_2 == 0) {
    return 0xffffffff;
  }
  puVar2 = *(uint **)(DAT_00031bb4 + 0x31aec + DAT_00031bb8);
  if ((*puVar2 & 1) == 0) {
    iVar1 = *(int *)(param_2 + 4);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    _mpp_log(DAT_00031bd0 + 0x31b9c,DAT_00031bcc + 0x31b98,DAT_00031bc8 + 0x31b90,param_1,param_2);
    iVar1 = *(int *)(param_2 + 4);
    if (iVar1 == 0) goto LAB_00031b38;
  }
  __mutex = *(pthread_mutex_t **)(iVar1 + 0x24);
  pthread_mutex_lock(__mutex);
  pthread_cond_signal(*(pthread_cond_t **)(*(int *)(param_2 + 8) * 0x14 + iVar1 + 0x50));
  pthread_mutex_unlock(__mutex);
LAB_00031b38:
  if ((*puVar2 & 1) != 0) {
    _mpp_log(DAT_00031bc4 + 0x31b74,DAT_00031bc0 + 0x31b70,DAT_00031bbc + 0x31b68,param_1,param_2);
  }
  return 0;
}



/* ===== mpp_task_queue_init @ 00031bd4 size=832 ===== */

undefined4 mpp_task_queue_init(undefined4 *param_1,undefined4 param_2,char *param_3)

{
  char *__dest;
  pthread_cond_t *ppVar1;
  pthread_cond_t *__cond;
  pthread_mutex_t *__mutex;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 uVar6;
  pthread_mutexattr_t pStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  pthread_cond_t *local_30;
  undefined4 local_2c;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar6 = 0xfffffffd;
    _mpp_err(DAT_00031f6c + 0x31f10,DAT_00031f68 + 0x31f0c,DAT_00031f64 + 0x31f08);
  }
  else {
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    local_30 = *(pthread_cond_t **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    local_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_38 = 0;
    puVar5 = *(uint **)(DAT_00031f14 + 0x31bf0 + DAT_00031f18);
    mpp_env_get_u32(DAT_00031f1c + 0x31c14,puVar5,0);
    if ((*puVar5 & 1) != 0) {
      _mpp_log(DAT_00031f3c + 0x31e50,DAT_00031f38 + 0x31e4c,DAT_00031f34 + 0x31e48);
    }
    iVar2 = DAT_00031f20;
    *param_1 = 0;
    __dest = (char *)mpp_osal_calloc(iVar2 + 0x31c40,0x90);
    if (__dest == (char *)0x0) {
      _mpp_err(DAT_00031f44 + 0x31e70,DAT_00031f40 + 0x31e6c,iVar2 + 0x31c40);
    }
    else {
      ppVar1 = operator_new(0x30);
      pthread_cond_init(ppVar1,(pthread_condattr_t *)0x0);
      __cond = operator_new(0x30);
      pthread_cond_init(__cond,(pthread_condattr_t *)0x0);
      pcVar3 = __dest + 0x40;
      *(ulonglong *)pcVar3 = CONCAT44(pcVar3,pcVar3);
      __dest[0x74] = '\x02';
      __dest[0x75] = '\0';
      __dest[0x76] = '\0';
      __dest[0x77] = '\0';
      *(char **)(__dest + 0x68) = __dest + 0x68;
      *(char **)(__dest + 0x6c) = __dest + 0x68;
      *(pthread_cond_t **)(__dest + 0x78) = __cond;
      *(undefined4 *)(__dest + 100) = uStack_34;
      *(undefined4 *)(__dest + 0x8c) = local_2c;
      *(char **)(__dest + 0x54) = __dest + 0x54;
      *(char **)(__dest + 0x7c) = __dest + 0x7c;
      *(char **)(__dest + 0x80) = __dest + 0x7c;
      *(char **)(__dest + 0x58) = __dest + 0x54;
      *(pthread_cond_t **)(__dest + 0x50) = ppVar1;
      __dest[0x88] = '\x03';
      __dest[0x89] = '\0';
      __dest[0x8a] = '\0';
      __dest[0x8b] = '\0';
      __dest[0x48] = '\0';
      __dest[0x49] = '\0';
      __dest[0x4a] = '\0';
      __dest[0x4b] = '\0';
      __dest[0x4c] = '\0';
      __dest[0x4d] = '\0';
      __dest[0x4e] = '\0';
      __dest[0x4f] = '\0';
      __dest[0x5c] = '\0';
      __dest[0x5d] = '\0';
      __dest[0x5e] = '\0';
      __dest[0x5f] = '\0';
      __dest[0x70] = '\0';
      __dest[0x71] = '\0';
      __dest[0x72] = '\0';
      __dest[0x73] = '\0';
      __dest[0x84] = '\0';
      __dest[0x85] = '\0';
      __dest[0x86] = '\0';
      __dest[0x87] = '\0';
      __dest[0x60] = '\x01';
      __dest[0x61] = '\0';
      __dest[0x62] = '\0';
      __dest[99] = '\0';
      local_30 = __cond;
      __mutex = operator_new(0x18);
      pthread_mutexattr_init(&pStack_3c);
      pthread_mutexattr_settype(&pStack_3c,1);
      pthread_mutex_init(__mutex,&pStack_3c);
      pthread_mutexattr_destroy(&pStack_3c);
      *(pthread_mutex_t **)(__dest + 0x24) = __mutex;
      iVar2 = FUN_00030c40(__dest,0,__dest + 0x34);
      if (iVar2 == 0) {
        iVar2 = FUN_00030c40(__dest,1,__dest + 0x38);
        if (iVar2 == 0) {
          *(undefined4 *)(__dest + 0x20) = param_2;
          if (param_3 == (char *)0x0) {
            param_3 = (char *)(DAT_00031f48 + 0x31e80);
          }
          strncpy(__dest,param_3,0x1f);
          uVar4 = *puVar5;
          *param_1 = __dest;
          uVar6 = 0;
          if ((uVar4 & 1) == 0) {
            return 0;
          }
          goto LAB_00031e04;
        }
        uVar6 = *(undefined4 *)(__dest + 0x34);
        if ((*puVar5 & 1) != 0) {
          _mpp_log(DAT_00031f60 + 0x31eec,DAT_00031f5c + 0x31ee8,DAT_00031f58 + 0x31ee4,uVar6);
        }
        iVar2 = DAT_00031f4c + 0x31ea0;
        mpp_osal_free(iVar2,uVar6);
        if ((*puVar5 & 1) != 0) {
          _mpp_log(DAT_00031f54 + 0x31ec8,DAT_00031f50 + 0x31ec4,iVar2);
        }
      }
      pthread_mutex_destroy(__mutex);
      operator_delete(__mutex,0x18);
      pthread_cond_destroy(ppVar1);
      operator_delete(ppVar1,0x30);
      ppVar1 = local_30;
      if (local_30 != (pthread_cond_t *)0x0) {
        pthread_cond_destroy(local_30);
        operator_delete(ppVar1,0x30);
      }
      mpp_osal_free(DAT_00031f24 + 0x31da0,__dest);
      __dest = (char *)0x0;
    }
    uVar6 = 0xffffffff;
    uVar4 = *puVar5;
    *param_1 = __dest;
    if ((uVar4 & 1) != 0) {
LAB_00031e04:
      _mpp_log(DAT_00031f30 + 0x31e28,DAT_00031f2c + 0x31e24,DAT_00031f28 + 0x31e1c,uVar6,__dest);
      return uVar6;
    }
  }
  return uVar6;
}



/* ===== mpp_task_queue_setup @ 00031f70 size=440 ===== */

undefined4 mpp_task_queue_setup(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  pthread_mutex_t *__mutex;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = DAT_00032128;
  __mutex = *(pthread_mutex_t **)(param_1 + 0x24);
  pthread_mutex_lock(__mutex);
  if (*(int *)(param_1 + 0x3c) != 0) {
    _mpp_err(DAT_00032138 + 0x31fd8,DAT_00032134 + 0x31fd4,0,DAT_00032130 + 0x31fc8,
             DAT_0003212c + 0x31fbc,0x1a8);
    if ((**(uint **)(iVar1 + 0x31fa0 + DAT_0003213c) & 0x10000000) != 0) goto LAB_00032104;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    _mpp_err(DAT_00032154 + 0x320f0,DAT_00032150 + 0x320ec,0,DAT_0003214c + 0x320e0,
             DAT_00032148 + 0x320d4,0x1a9);
    if ((**(uint **)(iVar1 + 0x31fa0 + DAT_0003213c) & 0x10000000) != 0) {
LAB_00032104:
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  iVar7 = DAT_00032140 + 0x3200c;
  iVar1 = mpp_osal_calloc(iVar7,param_2 * 0x1c);
  if (iVar1 == 0) {
    uVar4 = 0xfffffffc;
    _mpp_err(DAT_0003215c + 0x32124,DAT_00032158 + 0x32120,iVar7);
  }
  else {
    *(int *)(param_1 + 0x3c) = iVar1;
    *(int *)(param_1 + 0x28) = param_2;
    if (0 < param_2) {
      iVar6 = 0;
      iVar8 = DAT_00032144 + 0x32040;
      iVar1 = iVar1 + 0x18;
      do {
        iVar5 = iVar1 + -0x14;
        *(int *)(iVar1 + -8) = iVar6;
        *(int *)(iVar1 + -0x18) = iVar8;
        *(undefined4 *)(iVar1 + -4) = 0;
        *(int *)(iVar1 + -0xc) = param_1;
        *(int *)(iVar1 + -0x14) = iVar5;
        *(int *)(iVar1 + -0x10) = iVar5;
        iVar6 = iVar6 + 1;
        mpp_meta_get_with_tag(iVar1,iVar8,iVar7);
        piVar2 = *(int **)(param_1 + 0x44);
        iVar3 = *(int *)(param_1 + 0x48);
        *(int *)(param_1 + 0x44) = iVar5;
        *(int **)(iVar1 + -0x10) = piVar2;
        *(int *)(iVar1 + -0x14) = param_1 + 0x40;
        *piVar2 = iVar5;
        *(int *)(param_1 + 0x48) = iVar3 + 1;
        iVar1 = iVar1 + 0x1c;
      } while (iVar6 != param_2);
    }
    uVar4 = 0;
    *(undefined4 *)(param_1 + 0x2c) = 1;
  }
  pthread_mutex_unlock(__mutex);
  return uVar4;
}



/* ===== mpp_task_queue_deinit @ 00032160 size=828 ===== */

undefined4 mpp_task_queue_deinit(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint *puVar7;
  pthread_mutex_t *__mutex;
  pthread_cond_t *ppVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar3 = DAT_0003249c + 0x32178;
  if (param_1 == 0) {
    _mpp_err(DAT_000324fc + 0x32494,DAT_000324f8 + 0x32490,DAT_000324f4 + 0x3248c);
    uVar9 = 0xfffffffd;
  }
  else {
    iVar11 = 0;
    pthread_mutex_lock(*(pthread_mutex_t **)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x2c) = 0;
    pthread_cond_signal(*(pthread_cond_t **)(param_1 + 0x50));
    pthread_cond_signal(*(pthread_cond_t **)(param_1 + 0x78));
    iVar2 = *(int *)(param_1 + 0x3c);
    if (iVar2 != 0) {
      if (0 < *(int *)(param_1 + 0x28)) {
        iVar4 = DAT_000324a0 + 0x321c4;
        iVar12 = DAT_000324a4 + 0x321d0;
        iVar14 = DAT_000324a8 + 0x321d8;
        iVar5 = DAT_000324ac + 0x321dc;
        do {
          iVar10 = iVar11 * 0x1c;
          uVar9 = *(undefined4 *)(iVar2 + iVar10 + 0x18);
          iVar2 = mpp_meta_size(uVar9);
          if (iVar2 != 0) {
            iVar2 = *(int *)(param_1 + 0x3c) + iVar10;
            iVar13 = DAT_000324b0 + 0x32240;
            uVar6 = *(undefined4 *)(iVar2 + 0x14);
            uVar1 = mpp_meta_size(uVar9);
            _mpp_err(DAT_000324b4 + 0x3226c,iVar5,iVar4,iVar11,iVar2,uVar6,uVar1);
            while (iVar2 = mpp_meta_size(uVar9), iVar2 != 0) {
              iVar2 = mpp_meta_next_node(uVar9);
              _mpp_err(iVar13,iVar14,iVar12,uVar9,iVar2,*(undefined4 *)(iVar2 + 0x14),
                       *(undefined4 *)(iVar2 + 0x18));
              mpp_osal_free(iVar12,iVar2);
            }
          }
          iVar11 = iVar11 + 1;
          mpp_meta_put(*(undefined4 *)(*(int *)(param_1 + 0x3c) + iVar10 + 0x18));
          iVar2 = *(int *)(param_1 + 0x3c);
        } while (iVar11 < *(int *)(param_1 + 0x28));
      }
      mpp_osal_free(DAT_000324b8 + 0x322cc);
    }
    iVar2 = *(int *)(param_1 + 0x34);
    if (iVar2 != 0) {
      puVar7 = *(uint **)(iVar3 + DAT_000324bc);
      if ((*puVar7 & 1) != 0) {
        _mpp_log(DAT_000324dc + 0x32434,DAT_000324d8 + 0x32430,DAT_000324d4 + 0x3242c,iVar2);
      }
      iVar11 = DAT_000324c0 + 0x32300;
      mpp_osal_free(iVar11,iVar2);
      if ((*puVar7 & 1) != 0) {
        _mpp_log(DAT_000324e4 + 0x32450,DAT_000324e0 + 0x3244c,iVar11);
      }
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    iVar2 = *(int *)(param_1 + 0x38);
    if (iVar2 != 0) {
      puVar7 = *(uint **)(iVar3 + DAT_000324bc);
      if ((*puVar7 & 1) != 0) {
        _mpp_log(DAT_000324f0 + 0x32474,DAT_000324ec + 0x32470,DAT_000324e8 + 0x3246c,iVar2);
      }
      iVar3 = DAT_000324c4 + 0x3234c;
      mpp_osal_free(iVar3,iVar2);
      if ((*puVar7 & 1) != 0) {
        _mpp_log(DAT_000324d0 + 0x32410,DAT_000324cc + 0x3240c,iVar3);
      }
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    pthread_mutex_unlock(*(pthread_mutex_t **)(param_1 + 0x24));
    __mutex = *(pthread_mutex_t **)(param_1 + 0x24);
    if (__mutex != (pthread_mutex_t *)0x0) {
      pthread_mutex_destroy(__mutex);
      operator_delete(__mutex,0x18);
    }
    ppVar8 = *(pthread_cond_t **)(param_1 + 0x50);
    if (ppVar8 != (pthread_cond_t *)0x0) {
      pthread_cond_destroy(ppVar8);
      operator_delete(ppVar8,0x30);
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    ppVar8 = *(pthread_cond_t **)(param_1 + 0x78);
    if (ppVar8 != (pthread_cond_t *)0x0) {
      pthread_cond_destroy(ppVar8);
      operator_delete(ppVar8,0x30);
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    mpp_osal_free(DAT_000324c8 + 0x323ec,param_1);
    uVar9 = 0;
  }
  return uVar9;
}



/* ===== mpp_task_queue_get_port @ 00032500 size=100 ===== */

undefined4 mpp_task_queue_get_port(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0 || 1 < param_2) {
    _mpp_err(DAT_00032568 + 0x32554,DAT_0003256c + 0x32558,DAT_00032564 + 0x3254c,param_1,param_2);
    return 0;
  }
  if (param_2 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x34);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x38);
  }
  return uVar1;
}



/* ===== _check_is_mpp_enc_ref_cfg @ 00032570 size=8 ===== */

undefined4 _check_is_mpp_enc_ref_cfg(void)

{
  return 0;
}



/* ===== mpp_enc_ref_cfg_init @ 00032578 size=8 ===== */

undefined4 mpp_enc_ref_cfg_init(void)

{
  return 0;
}



/* ===== mpp_enc_ref_cfg_deinit @ 00032580 size=8 ===== */

undefined4 mpp_enc_ref_cfg_deinit(void)

{
  return 0;
}



/* ===== mpp_enc_ref_cfg_reset @ 00032588 size=8 ===== */

undefined4 mpp_enc_ref_cfg_reset(void)

{
  return 0;
}



/* ===== mpp_enc_ref_cfg_set_cfg_cnt @ 00032590 size=8 ===== */

undefined4 mpp_enc_ref_cfg_set_cfg_cnt(void)

{
  return 0;
}



/* ===== mpp_enc_ref_cfg_add_lt_cfg @ 00032598 size=8 ===== */

undefined4 mpp_enc_ref_cfg_add_lt_cfg(void)

{
  return 0;
}



/* ===== mpp_enc_ref_cfg_add_st_cfg @ 000325a0 size=8 ===== */

undefined4 mpp_enc_ref_cfg_add_st_cfg(void)

{
  return 0;
}



/* ===== mpp_enc_ref_cfg_check @ 000325a8 size=8 ===== */

undefined4 mpp_enc_ref_cfg_check(void)

{
  return 0;
}



/* ===== mpp_enc_ref_cfg_set_keep_cpb @ 000325b0 size=8 ===== */

undefined4 mpp_enc_ref_cfg_set_keep_cpb(void)

{
  return 0;
}



/* ===== mpp_enc_ref_cfg_show @ 000325b8 size=8 ===== */

undefined4 mpp_enc_ref_cfg_show(void)

{
  return 0;
}



/* ===== mpp_enc_ref_cfg_copy @ 000325c0 size=8 ===== */

undefined4 mpp_enc_ref_cfg_copy(void)

{
  return 0;
}



/* ===== mpp_enc_ref_cfg_get_cpb_info @ 000325c8 size=8 ===== */

undefined4 mpp_enc_ref_cfg_get_cpb_info(void)

{
  return 0;
}



/* ===== mpp_enc_ref_default @ 000325d0 size=12 ===== */

int mpp_enc_ref_default(void)

{
  return (int)&DAT_000325dc + DAT_000325dc;
}



/* ===== MppMemPoolService::MppMemPoolService @ 000325e0 size=56 ===== */

/* MppMemPoolService::MppMemPoolService() */

MppMemPoolService * __thiscall MppMemPoolService::MppMemPoolService(MppMemPoolService *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00032620;
  iVar1 = DAT_0003261c;
  iVar3 = DAT_00032618 + 0x325fc;
  *(ulonglong *)this = CONCAT44(this,this);
  mpp_env_get_u32(iVar2 + 0x3260c,*(undefined4 *)(iVar3 + iVar1),0);
  return this;
}



/* ===== MppMemPoolService::get_pool @ 00032624 size=332 ===== */

/* MppMemPoolService::get_pool(unsigned int) */

int __thiscall MppMemPoolService::get_pool(MppMemPoolService *this,uint param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  pthread_mutex_t *__mutex;
  undefined8 *puVar6;
  byte *pbVar7;
  int iVar8;
  pthread_mutexattr_t pStack_28;
  pthread_mutexattr_t pStack_24;
  
  iVar8 = DAT_00032774;
  iVar1 = mpp_osal_malloc(DAT_00032770 + 0x32644,0x40);
  iVar8 = iVar8 + 0x32650;
  if (iVar1 != 0) {
    puVar6 = (undefined8 *)(iVar1 + 0x20);
    pthread_mutexattr_init(&pStack_28);
    pthread_mutexattr_settype(&pStack_28,1);
    pthread_mutex_init((pthread_mutex_t *)(iVar1 + 8),&pStack_28);
    pthread_mutexattr_destroy(&pStack_28);
    iVar2 = DAT_00032778;
    puVar4 = (undefined8 *)(iVar1 + 0x30);
    puVar3 = (undefined8 *)(iVar1 + 0x28);
    *(int *)iVar1 = iVar1;
    *(uint *)(iVar1 + 4) = param_1;
    *(undefined8 *)(iVar1 + 0x38) = 0;
    *puVar6 = CONCAT44(puVar6,puVar6);
    *puVar3 = CONCAT44(puVar3,puVar3);
    *puVar4 = CONCAT44(puVar4,puVar4);
    pbVar7 = *(byte **)(iVar8 + iVar2);
    DataMemoryBarrier(0xb);
    if (((*pbVar7 & 1) == 0) && (iVar2 = __cxa_guard_acquire(pbVar7), iVar2 != 0)) {
      pthread_mutexattr_init(&pStack_24);
      pthread_mutexattr_settype(&pStack_24,1);
      __mutex = *(pthread_mutex_t **)(iVar8 + DAT_0003277c);
      pthread_mutex_init(__mutex,&pStack_24);
      pthread_mutexattr_destroy(&pStack_24);
      __cxa_guard_release(pbVar7);
      __aeabi_atexit(__mutex,*(undefined4 *)(iVar8 + DAT_00032780),DAT_00032784 + 0x32768);
    }
    else {
      __mutex = *(pthread_mutex_t **)(iVar8 + DAT_0003277c);
    }
    pthread_mutex_lock(__mutex);
    puVar5 = *(undefined4 **)(this + 4);
    *(undefined8 **)(this + 4) = puVar6;
    *(MppMemPoolService **)(iVar1 + 0x20) = this;
    *(undefined4 **)(iVar1 + 0x24) = puVar5;
    *puVar5 = puVar6;
    pthread_mutex_unlock(__mutex);
  }
  return iVar1;
}



/* ===== MppMemPoolService::put_pool @ 00032788 size=692 ===== */

/* MppMemPoolService::put_pool(MppMemPoolImpl_t*) */

void __thiscall MppMemPoolService::put_pool(MppMemPoolService *this,MppMemPoolImpl_t *param_1)

{
  MppMemPoolImpl_t *pMVar1;
  MppMemPoolImpl_t *pMVar2;
  MppMemPoolImpl_t *pMVar3;
  MppMemPoolImpl_t *pMVar4;
  int *piVar5;
  int iVar6;
  pthread_mutex_t *__mutex;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  pthread_mutexattr_t pStack_1c;
  
  iVar6 = DAT_00032a3c + 0x327a8;
  if (*(MppMemPoolImpl_t **)param_1 != param_1) {
    _mpp_err(DAT_00032a94 + 0x32a2c,DAT_00032a90 + 0x32a28,DAT_00032a8c + 0x32a24,param_1,
             *(MppMemPoolImpl_t **)param_1);
    return;
  }
  pMVar3 = *(MppMemPoolImpl_t **)(param_1 + 0x30);
  if (param_1 + 0x30 != pMVar3) {
    iVar7 = DAT_00032a40 + 0x327c8;
    pMVar4 = *(MppMemPoolImpl_t **)pMVar3;
    do {
      pMVar2 = pMVar4;
      if (pMVar3 != (MppMemPoolImpl_t *)0x4) {
        mpp_osal_free(iVar7);
      }
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
      pMVar4 = *(MppMemPoolImpl_t **)pMVar2;
      pMVar3 = pMVar2;
    } while (param_1 + 0x30 != pMVar2);
  }
  pMVar3 = param_1 + 0x28;
  iVar7 = *(int *)(param_1 + 0x38);
  if (pMVar3 != *(MppMemPoolImpl_t **)(param_1 + 0x28)) {
    _mpp_err(DAT_00032a4c + 0x3283c,DAT_00032a48 + 0x32838,DAT_00032a44 + 0x32830,iVar7,
             *(undefined4 *)(param_1 + 4));
    pMVar4 = *(MppMemPoolImpl_t **)(param_1 + 0x28);
    if (pMVar3 == pMVar4) {
      iVar7 = *(int *)(param_1 + 0x38);
    }
    else {
      iVar8 = DAT_00032a50 + 0x3285c;
      pMVar2 = *(MppMemPoolImpl_t **)pMVar4;
      do {
        pMVar1 = pMVar2;
        if (pMVar4 != (MppMemPoolImpl_t *)0x4) {
          mpp_osal_free(iVar8);
        }
        iVar7 = *(int *)(param_1 + 0x38) + -1;
        *(int *)(param_1 + 0x38) = iVar7;
        pMVar2 = *(MppMemPoolImpl_t **)pMVar1;
        pMVar4 = pMVar1;
      } while (pMVar3 != pMVar1);
    }
  }
  if (((iVar7 == 0) ||
      (_mpp_err(DAT_00032a80 + 0x32988,DAT_00032a7c + 0x32984,0,DAT_00032a78 + 0x32978,
                DAT_00032a74 + 0x3296c,0x95), (**(uint **)(iVar6 + DAT_00032a64) & 0x10000000) == 0)
      ) && ((*(int *)(param_1 + 0x3c) == 0 ||
            (_mpp_err(DAT_00032a60 + 0x328dc,DAT_00032a5c + 0x328d8,0,DAT_00032a58 + 0x328cc,
                      DAT_00032a54 + 0x328c0,0x96),
            (**(uint **)(iVar6 + DAT_00032a64) & 0x10000000) == 0)))) {
    pbVar9 = *(byte **)(iVar6 + DAT_00032a68);
    DataMemoryBarrier(0xb);
    if (((*pbVar9 & 1) == 0) && (iVar7 = __cxa_guard_acquire(pbVar9), iVar7 != 0)) {
      pthread_mutexattr_init(&pStack_1c);
      pthread_mutexattr_settype(&pStack_1c,1);
      __mutex = *(pthread_mutex_t **)(iVar6 + DAT_00032a6c);
      pthread_mutex_init(__mutex,&pStack_1c);
      pthread_mutexattr_destroy(&pStack_1c);
      __cxa_guard_release(pbVar9);
      __aeabi_atexit(__mutex,*(undefined4 *)(iVar6 + DAT_00032a84),DAT_00032a88 + 0x32a00);
    }
    else {
      __mutex = *(pthread_mutex_t **)(iVar6 + DAT_00032a6c);
    }
    pthread_mutex_lock(__mutex);
    pMVar3 = param_1 + 0x20;
    iVar6 = *(int *)pMVar3;
    piVar5 = *(int **)(param_1 + 0x24);
    *(int **)(iVar6 + 4) = piVar5;
    *piVar5 = iVar6;
    *(ulonglong *)pMVar3 = CONCAT44(pMVar3,pMVar3);
    pthread_mutex_unlock(__mutex);
    mpp_osal_free(DAT_00032a70 + 0x3294c,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== MppMemPoolService::~MppMemPoolService @ 00032a98 size=68 ===== */

/* MppMemPoolService::~MppMemPoolService() */

MppMemPoolService * __thiscall MppMemPoolService::~MppMemPoolService(MppMemPoolService *this)

{
  MppMemPoolService *pMVar1;
  MppMemPoolService *pMVar2;
  MppMemPoolService *pMVar3;
  
  pMVar3 = *(MppMemPoolService **)this;
  if (this != pMVar3) {
    pMVar2 = *(MppMemPoolService **)pMVar3;
    do {
      pMVar1 = pMVar2;
      put_pool(this,(MppMemPoolImpl_t *)(pMVar3 + -0x20));
      pMVar2 = *(MppMemPoolService **)pMVar1;
      pMVar3 = pMVar1;
    } while (this != pMVar1);
  }
  return this;
}



/* ===== mpp_mem_pool_init_f @ 00032adc size=348 ===== */

void mpp_mem_pool_init_f(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  pthread_mutex_t *__mutex;
  byte *pbVar3;
  MppMemPoolService *this;
  pthread_mutexattr_t pStack_1c;
  
  iVar2 = DAT_00032c38 + 0x32af8;
  if ((**(uint **)(iVar2 + DAT_00032c3c) & 1) != 0) {
    _mpp_log(DAT_00032c50 + 0x32b84,DAT_00032c54 + 0x32b88,0,param_2,param_1);
  }
  pbVar3 = *(byte **)(iVar2 + DAT_00032c40);
  DataMemoryBarrier(0xb);
  if (((*pbVar3 & 1) == 0) && (iVar1 = __cxa_guard_acquire(pbVar3), iVar1 != 0)) {
    pthread_mutexattr_init(&pStack_1c);
    pthread_mutexattr_settype(&pStack_1c,1);
    __mutex = *(pthread_mutex_t **)(iVar2 + DAT_00032c44);
    pthread_mutex_init(__mutex,&pStack_1c);
    pthread_mutexattr_destroy(&pStack_1c);
    __cxa_guard_release(pbVar3);
    __aeabi_atexit(__mutex,*(undefined4 *)(iVar2 + DAT_00032c60),DAT_00032c64 + 0x32c30);
  }
  else {
    __mutex = *(pthread_mutex_t **)(iVar2 + DAT_00032c44);
  }
  pthread_mutex_lock(__mutex);
  pbVar3 = *(byte **)(iVar2 + DAT_00032c48);
  DataMemoryBarrier(0xb);
  if ((*pbVar3 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(pbVar3);
    this = *(MppMemPoolService **)(iVar2 + DAT_00032c4c);
    if (iVar1 != 0) {
      MppMemPoolService::MppMemPoolService(this);
      __cxa_guard_release(pbVar3);
      __aeabi_atexit(this,*(undefined4 *)(iVar2 + DAT_00032c58),DAT_00032c5c + 0x32bc8);
    }
  }
  else {
    this = *(MppMemPoolService **)(iVar2 + DAT_00032c4c);
  }
  pthread_mutex_unlock(__mutex);
  MppMemPoolService::get_pool(this,param_2);
  return;
}



/* ===== mpp_mem_pool_deinit_f @ 00032c68 size=348 ===== */

void mpp_mem_pool_deinit_f(undefined4 param_1,MppMemPoolImpl_t *param_2)

{
  int iVar1;
  int iVar2;
  pthread_mutex_t *__mutex;
  byte *pbVar3;
  MppMemPoolService *this;
  pthread_mutexattr_t pStack_1c;
  
  iVar2 = DAT_00032dc4 + 0x32c84;
  if ((**(uint **)(iVar2 + DAT_00032dc8) & 1) != 0) {
    _mpp_log(DAT_00032ddc + 0x32d10,DAT_00032de0 + 0x32d14,0,*(undefined4 *)(param_2 + 4),param_1);
  }
  pbVar3 = *(byte **)(iVar2 + DAT_00032dcc);
  DataMemoryBarrier(0xb);
  if (((*pbVar3 & 1) == 0) && (iVar1 = __cxa_guard_acquire(pbVar3), iVar1 != 0)) {
    pthread_mutexattr_init(&pStack_1c);
    pthread_mutexattr_settype(&pStack_1c,1);
    __mutex = *(pthread_mutex_t **)(iVar2 + DAT_00032dd0);
    pthread_mutex_init(__mutex,&pStack_1c);
    pthread_mutexattr_destroy(&pStack_1c);
    __cxa_guard_release(pbVar3);
    __aeabi_atexit(__mutex,*(undefined4 *)(iVar2 + DAT_00032dec),DAT_00032df0 + 0x32dbc);
  }
  else {
    __mutex = *(pthread_mutex_t **)(iVar2 + DAT_00032dd0);
  }
  pthread_mutex_lock(__mutex);
  pbVar3 = *(byte **)(iVar2 + DAT_00032dd4);
  DataMemoryBarrier(0xb);
  if ((*pbVar3 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(pbVar3);
    this = *(MppMemPoolService **)(iVar2 + DAT_00032dd8);
    if (iVar1 != 0) {
      MppMemPoolService::MppMemPoolService(this);
      __cxa_guard_release(pbVar3);
      __aeabi_atexit(this,*(undefined4 *)(iVar2 + DAT_00032de4),DAT_00032de8 + 0x32d54);
    }
  }
  else {
    this = *(MppMemPoolService **)(iVar2 + DAT_00032dd8);
  }
  pthread_mutex_unlock(__mutex);
  MppMemPoolService::put_pool(this,param_2);
  return;
}



/* ===== mpp_mem_pool_get_f @ 00032df8 size=376 ===== */

int mpp_mem_pool_get_f(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  pthread_mutex_t *__mutex;
  undefined8 uVar6;
  
  iVar1 = DAT_00032f78;
  __mutex = (pthread_mutex_t *)(param_2 + 8);
  pthread_mutex_lock(__mutex);
  if ((**(uint **)(iVar1 + 0x32e24 + DAT_00032f7c) & 1) != 0) {
    _mpp_log(DAT_00032f84 + 0x32f34,DAT_00032f88 + 0x32f3c,0,*(undefined4 *)(param_2 + 4),
             *(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),param_1);
  }
  uVar6 = DAT_00032f70;
  piVar5 = *(int **)(param_2 + 0x30);
  if ((piVar5 == (int *)(param_2 + 0x30)) || (piVar2 = piVar5 + -1, piVar2 == (int *)0x0)) {
    iVar1 = DAT_00032f80 + 0x32ea0;
    piVar2 = (int *)mpp_osal_malloc(iVar1,*(int *)(param_2 + 4) + 0x14);
    if (piVar2 == (int *)0x0) {
      _mpp_err(DAT_00032f90 + 0x32f60,DAT_00032f8c + 0x32f5c,iVar1,*(undefined4 *)(param_2 + 4));
      pthread_mutex_unlock(__mutex);
      return 0;
    }
    *piVar2 = (int)piVar2;
    piVar5 = piVar2 + 1;
    piVar2[3] = (int)(piVar2 + 5);
    iVar1 = *(int *)(param_2 + 4);
    piVar2[2] = (int)piVar5;
    puVar4 = *(undefined4 **)(param_2 + 0x2c);
    piVar2[4] = iVar1;
    *(int **)(param_2 + 0x2c) = piVar5;
    piVar2[1] = param_2 + 0x28;
    piVar2[2] = (int)puVar4;
    *puVar4 = piVar5;
    *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + 1;
    iVar1 = piVar2[3];
  }
  else {
    piVar3 = (int *)piVar5[1];
    iVar1 = *piVar5;
    *(int **)(iVar1 + 4) = piVar3;
    *piVar3 = iVar1;
    piVar5[1] = (int)piVar5;
    puVar4 = *(undefined4 **)(param_2 + 0x2c);
    *(int **)(param_2 + 0x2c) = piVar5;
    *piVar5 = param_2 + 0x28;
    piVar5[1] = (int)puVar4;
    *puVar4 = piVar5;
    uVar6 = VectorAdd(*(undefined8 *)(param_2 + 0x38),uVar6,4);
    *(undefined8 *)(param_2 + 0x38) = uVar6;
    iVar1 = piVar5[2];
  }
  pthread_mutex_unlock(__mutex);
  memset((void *)piVar2[3],0,piVar2[4]);
  return iVar1;
}



/* ===== mpp_mem_pool_put_f @ 00032f98 size=312 ===== */

void mpp_mem_pool_put_f(undefined4 param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar2 = DAT_000330d8 + 0x32fb8;
  if ((int *)*param_2 != param_2) {
    _mpp_err(DAT_000330f4 + 0x33098,DAT_000330f0 + 0x33094,DAT_000330ec + 0x33090,param_2,
             (int *)*param_2);
    return;
  }
  if (*(int *)(param_3 + -0x14) != param_3 + -0x14) {
    _mpp_err(DAT_000330e4 + 0x32ff4,DAT_000330dc + 0x32fe4,DAT_000330e0 + 0x32fec,param_3,
             param_3 + -0x14,*(int *)(param_3 + -0x14));
    return;
  }
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 2));
  if ((**(uint **)(iVar2 + DAT_000330e8) & 1) != 0) {
    _mpp_log(DAT_000330f8 + 0x330c0,DAT_000330fc + 0x330c8,0,param_2[1],param_2[0xe],param_2[0xf],
             param_1);
  }
  uVar4 = DAT_000330d0;
  iVar3 = *(int *)(param_3 + -0x10);
  piVar1 = *(int **)(param_3 + -0xc);
  iVar2 = param_3 + -0x10;
  *(int **)(iVar3 + 4) = piVar1;
  *piVar1 = iVar3;
  *(int *)(param_3 + -0x10) = iVar2;
  iVar3 = param_2[0xc];
  *(int *)(iVar3 + 4) = iVar2;
  *(int *)(param_3 + -0x10) = iVar3;
  *(int **)(param_3 + -0xc) = param_2 + 0xc;
  param_2[0xc] = iVar2;
  uVar4 = VectorAdd(*(undefined8 *)(param_2 + 0xe),uVar4,4);
  *(undefined8 *)(param_2 + 0xe) = uVar4;
  pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 2));
  return;
}



/* ===== FUN_00033100 @ 00033100 size=424 ===== */

undefined4 FUN_00033100(int param_1)

{
  int iVar1;
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  char *pcVar5;
  MppThread *pMVar6;
  void *__ufd;
  int iVar7;
  int iVar8;
  undefined8 local_50;
  epoll_event local_48;
  itimerspec local_38;
  
  iVar7 = DAT_000332a8 + 0x33138;
  local_38.it_value.tv_sec = *(int *)(param_1 + 0x18) / 1000;
  __ufd = *(void **)(param_1 + 0x20);
  local_38.it_interval.tv_sec = *(int *)(param_1 + 0x1c) / 1000;
  local_38.it_value.tv_nsec = (*(int *)(param_1 + 0x18) % 1000) * 1000;
  local_38.it_interval.tv_nsec = (*(int *)(param_1 + 0x1c) % 1000) * 1000000;
  pMVar6 = *(MppThread **)(param_1 + 0x28);
  iVar1 = timerfd_settime((int)__ufd,0,&local_38,(itimerspec *)0x0);
  if (iVar1 < 0) {
    piVar4 = __errno_location();
    iVar1 = *piVar4;
    pcVar5 = strerror(iVar1);
    _mpp_err(DAT_000332b8 + 0x33254,DAT_000332b4 + 0x33248,0,iVar1,pcVar5);
  }
  else {
    iVar8 = DAT_000332ac + 0x331a4;
    iVar1 = DAT_000332b0 + 0x331a8;
    while (iVar2 = MppThread::get_status(pMVar6,0), iVar2 == 1) {
      local_48._4_4_ = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      local_48.data.ptr = (void *)*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      local_48.data.u64._4_4_ = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_48.events = 0;
      iVar2 = epoll_wait(*(int *)(param_1 + 0x24),&local_48,1,500);
      if (((iVar2 != 0) && ((local_48.events & 1) != 0)) && (local_48.data.ptr == __ufd)) {
        local_50 = 0;
        sVar3 = read((int)__ufd,&local_50,8);
        if (sVar3 != 8) {
          _mpp_err(DAT_000332c0 + 0x33290,iVar1,0,iVar8,DAT_000332bc + 0x3327c,0x10a);
          if ((**(uint **)(iVar7 + DAT_000332c4) & 0x10000000) != 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        (**(code **)(param_1 + 0x2c))(*(undefined4 *)(param_1 + 0x30));
      }
    }
  }
  return 0;
}



/* ===== mpp_time @ 000332c8 size=80 ===== */

longlong mpp_time(void)

{
  timespec local_10;
  
  local_10.tv_sec = 0;
  local_10.tv_nsec = 0;
  clock_gettime(1,&local_10);
  return (longlong)local_10.tv_sec * 1000000 + (longlong)(local_10.tv_nsec / 1000);
}



/* ===== mpp_time_diff @ 00033318 size=112 ===== */

void mpp_time_diff(uint param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6,
                  undefined4 param_7)

{
  bool bVar1;
  
  param_4 = param_4 - (param_2 + (uint)(param_3 < param_1));
  bVar1 = param_3 - param_1 < param_5;
  if (((int)(param_4 - (param_6 + (uint)bVar1)) < 0 ==
       (SBORROW4(param_4,param_6) != SBORROW4(param_4 - param_6,(uint)bVar1))) &&
     ((**(uint **)(DAT_00033388 + 0x33344 + DAT_0003338c) & 1) != 0)) {
    _mpp_log(DAT_00033394 + 0x33384,DAT_00033390 + 0x33378,0,param_7);
    return;
  }
  return;
}



/* ===== check_is_mpp_clock @ 00033398 size=108 ===== */

/* check_is_mpp_clock(void*) */

undefined4 check_is_mpp_clock(void *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00033404 + 0x333ac;
  if ((param_1 != (void *)0x0) && (*(int *)param_1 == DAT_00033408 + 0x333bc)) {
    return 0;
  }
  _mpp_err(DAT_00033414 + 0x333dc,DAT_00033410 + 0x333d8,DAT_0003340c + 0x333d4);
  if ((**(uint **)(iVar1 + DAT_00033418) & 0x10000000) == 0) {
    return 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== mpp_clock_get @ 0003341c size=108 ===== */

int * mpp_clock_get(char *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_00033488 + 0x33434;
  piVar1 = (int *)mpp_osal_calloc(iVar2,0x38);
  if (piVar1 != (int *)0x0) {
    *piVar1 = DAT_0003348c + 0x33458;
    snprintf((char *)(piVar1 + 1),0x10,param_1,0);
    return piVar1;
  }
  _mpp_err(DAT_00033494 + 0x33480,DAT_00033490 + 0x3347c,iVar2);
  return (int *)0x0;
}



/* ===== mpp_clock_put @ 00033498 size=80 ===== */

void mpp_clock_put(void *param_1)

{
  int iVar1;
  
  if ((param_1 != (void *)0x0) && (iVar1 = check_is_mpp_clock(param_1), iVar1 == 0)) {
    mpp_osal_free((int)&DAT_000334e8 + DAT_000334f4,param_1);
    return;
  }
  _mpp_err(DAT_000334f0 + 0x334d0,DAT_000334ec + 0x334cc,DAT_000334e8 + 0x334c8,param_1);
  return;
}



/* ===== mpp_clock_enable @ 000334f8 size=80 ===== */

void mpp_clock_enable(void *param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 != (void *)0x0) && (iVar1 = check_is_mpp_clock(param_1), iVar1 == 0)) {
    *(uint *)((int)param_1 + 0x14) = (uint)(param_2 != 0);
    return;
  }
  _mpp_err(DAT_00033550 + 0x33534,DAT_0003354c + 0x33530,DAT_00033548 + 0x3352c,param_1);
  return;
}



/* ===== mpp_clock_start @ 00033554 size=120 ===== */

undefined8 mpp_clock_start(void *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_1 != (void *)0x0) && (iVar1 = check_is_mpp_clock(param_1), iVar1 == 0)) {
    if (*(int *)((int)param_1 + 0x14) == 0) {
      return 0;
    }
    uVar2 = mpp_time();
    *(undefined8 *)((int)param_1 + 0x20) = 0;
    *(undefined8 *)((int)param_1 + 0x18) = uVar2;
    return uVar2;
  }
  _mpp_err(DAT_000335d4 + 0x335c0,DAT_000335d0 + 0x335bc,DAT_000335cc + 0x335b8,param_1);
  return 0;
}



/* ===== mpp_clock_pause @ 000335d8 size=168 ===== */

undefined8 mpp_clock_pause(void *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((param_1 != (void *)0x0) && (iVar1 = check_is_mpp_clock(param_1), iVar1 == 0)) {
    if (*(int *)((int)param_1 + 0x14) == 0) {
      return 0;
    }
    uVar4 = mpp_time();
    if (*(int *)((int)param_1 + 0x20) == 0 && *(int *)((int)param_1 + 0x24) == 0) {
      uVar2 = *(uint *)((int)param_1 + 0x30);
      uVar3 = VectorSub(uVar4,*(undefined8 *)((int)param_1 + 0x18),8);
      *(uint *)((int)param_1 + 0x30) = uVar2 + 1;
      *(uint *)((int)param_1 + 0x34) = *(int *)((int)param_1 + 0x34) + (uint)(0xfffffffe < uVar2);
      uVar5 = VectorAdd(*(undefined8 *)((int)param_1 + 0x28),uVar3,8);
      *(undefined8 *)((int)param_1 + 0x28) = uVar5;
    }
    else {
      uVar3 = VectorSub(uVar4,*(undefined8 *)((int)param_1 + 0x18),8);
    }
    *(undefined8 *)((int)param_1 + 0x20) = uVar4;
    return uVar3;
  }
  _mpp_err(DAT_00033688 + 0x33650,DAT_00033684 + 0x3364c,DAT_00033680 + 0x33648,param_1);
  return 0;
}



/* ===== mpp_clock_reset @ 0003368c size=92 ===== */

undefined8 mpp_clock_reset(void *param_1)

{
  int iVar1;
  
  if ((param_1 == (void *)0x0) || (iVar1 = check_is_mpp_clock(param_1), iVar1 != 0)) {
    _mpp_err(DAT_000336f0 + 0x336c4,DAT_000336ec + 0x336c0,DAT_000336e8 + 0x336bc,param_1);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x18) = 0;
    *(undefined4 *)((int)param_1 + 0x1c) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)((int)param_1 + 0x20) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)((int)param_1 + 0x24) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *(undefined4 *)((int)param_1 + 0x28) = 0;
    *(undefined4 *)((int)param_1 + 0x2c) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)((int)param_1 + 0x30) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)((int)param_1 + 0x34) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  }
  return 0;
}



/* ===== mpp_clock_get_sum @ 000336f4 size=96 ===== */

undefined8 mpp_clock_get_sum(void *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_1 != (void *)0x0) && (iVar1 = check_is_mpp_clock(param_1), iVar1 == 0)) {
    if (*(int *)((int)param_1 + 0x14) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)((int)param_1 + 0x28);
    }
    return uVar2;
  }
  _mpp_err(DAT_0003375c + 0x33748,DAT_00033758 + 0x33744,DAT_00033754 + 0x33740,param_1);
  return 0;
}



/* ===== mpp_clock_get_count @ 00033760 size=96 ===== */

undefined8 mpp_clock_get_count(void *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_1 != (void *)0x0) && (iVar1 = check_is_mpp_clock(param_1), iVar1 == 0)) {
    if (*(int *)((int)param_1 + 0x14) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)((int)param_1 + 0x30);
    }
    return uVar2;
  }
  _mpp_err(DAT_000337c8 + 0x337b4,DAT_000337c4 + 0x337b0,DAT_000337c0 + 0x337ac,param_1);
  return 0;
}



/* ===== mpp_clock_get_name @ 000337cc size=72 ===== */

int mpp_clock_get_name(void *param_1)

{
  int iVar1;
  
  if ((param_1 != (void *)0x0) && (iVar1 = check_is_mpp_clock(param_1), iVar1 == 0)) {
    return (int)param_1 + 4;
  }
  _mpp_err(DAT_0003381c + 0x3380c,DAT_00033818 + 0x33808,DAT_00033814 + 0x33804,param_1);
  return 0;
}



/* ===== check_is_mpp_timer @ 00033820 size=108 ===== */

/* check_is_mpp_timer(void*) */

undefined4 check_is_mpp_timer(void *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0003388c + 0x33834;
  if ((param_1 != (void *)0x0) && (*(int *)param_1 == DAT_00033890 + 0x33844)) {
    return 0;
  }
  _mpp_err(DAT_0003389c + 0x33864,DAT_00033898 + 0x33860,DAT_00033894 + 0x3385c);
  if ((**(uint **)(iVar1 + DAT_000338a0) & 0x10000000) == 0) {
    return 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== mpp_timer_get @ 000338a4 size=380 ===== */

int * mpp_timer_get(char *param_1)

{
  int *piVar1;
  void *__fd;
  int iVar2;
  int iVar3;
  int iVar4;
  epoll_event local_28;
  
  iVar3 = DAT_00033a20 + 0x338c0;
  piVar1 = (int *)mpp_osal_calloc(iVar3,0x34);
  if (piVar1 == (int *)0x0) {
    iVar4 = DAT_00033a38 + 0x33990;
    _mpp_err(iVar4,DAT_00033a3c + 0x33994,iVar3);
    _mpp_err(iVar4,DAT_00033a40 + 0x339ac,iVar3);
    return (int *)0x0;
  }
  __fd = (void *)timerfd_create(0,0);
  if ((int)__fd < 0) {
    _mpp_err(DAT_00033a28 + 0x338f8,DAT_00033a24 + 0x338f4,iVar3);
    mpp_osal_free(iVar3,piVar1);
    return (int *)0x0;
  }
  iVar3 = epoll_create(1);
  if (-1 < iVar3) {
    local_28.events = 0x80000001;
    local_28._4_4_ = 0;
    local_28.data.u64._4_4_ = 0;
    local_28.data.fd = (int)__fd;
    iVar2 = epoll_ctl(iVar3,1,(int)__fd,&local_28);
    iVar4 = DAT_00033a44;
    if (-1 < iVar2) {
      piVar1[8] = (int)__fd;
      piVar1[6] = 1000;
      piVar1[7] = 1000;
      piVar1[9] = iVar3;
      *piVar1 = iVar4 + 0x33a04;
      snprintf((char *)(piVar1 + 1),0x10,param_1,0);
      return piVar1;
    }
  }
  iVar4 = DAT_00033a2c + 0x33934;
  _mpp_err(DAT_00033a34 + 0x33944,DAT_00033a30 + 0x3393c,iVar4);
  mpp_osal_free(iVar4,piVar1);
  close((int)__fd);
  if (-1 < iVar3) {
    close(iVar3);
  }
  return (int *)0x0;
}



/* ===== mpp_timer_set_callback @ 00033a48 size=120 ===== */

void mpp_timer_set_callback(void *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((param_1 != (void *)0x0) && (iVar1 = check_is_mpp_timer(param_1), iVar1 == 0)) {
    if (param_2 != 0) {
      *(int *)((int)param_1 + 0x2c) = param_2;
      *(undefined4 *)((int)param_1 + 0x30) = param_3;
      return;
    }
    _mpp_err(DAT_00033ad4 + 0x33abc,DAT_00033ad0 + 0x33ab8,DAT_00033acc + 0x33ab4);
    return;
  }
  _mpp_err(DAT_00033ac8 + 0x33a9c,DAT_00033ac4 + 0x33a98,DAT_00033ac0 + 0x33a94,param_1);
  return;
}



/* ===== mpp_timer_set_timing @ 00033ad8 size=80 ===== */

void mpp_timer_set_timing(void *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((param_1 != (void *)0x0) && (iVar1 = check_is_mpp_timer(param_1), iVar1 == 0)) {
    *(undefined4 *)((int)param_1 + 0x18) = param_2;
    *(undefined4 *)((int)param_1 + 0x1c) = param_3;
    return;
  }
  _mpp_err(DAT_00033b30 + 0x33b24,DAT_00033b2c + 0x33b20,DAT_00033b28 + 0x33b1c,param_1);
  return;
}



/* ===== mpp_timer_set_enable @ 00033b34 size=288 ===== */

void mpp_timer_set_enable(void *param_1,int param_2)

{
  int iVar1;
  MppThread *this;
  
  if ((param_1 == (void *)0x0) || (iVar1 = check_is_mpp_timer(param_1), iVar1 != 0)) {
    _mpp_err(DAT_00033c60 + 0x33c20,DAT_00033c5c + 0x33c1c,DAT_00033c58 + 0x33c18,param_1);
    return;
  }
  if (((*(int *)((int)param_1 + 0x2c) == 0) || (*(int *)((int)param_1 + 0x18) < 0)) ||
     (*(int *)((int)param_1 + 0x1c) < 0)) {
    _mpp_err(DAT_00033c54 + 0x33bf8,DAT_00033c4c + 0x33bf0,DAT_00033c50 + 0x33bf4,
             *(int *)((int)param_1 + 0x2c),*(int *)((int)param_1 + 0x18),
             *(int *)((int)param_1 + 0x1c));
  }
  else if (param_2 == 0) {
    if ((*(int *)((int)param_1 + 0x14) != 0) &&
       (*(MppThread **)((int)param_1 + 0x28) != (MppThread *)0x0)) {
      MppThread::stop(*(MppThread **)((int)param_1 + 0x28));
      *(undefined4 *)((int)param_1 + 0x14) = 0;
    }
  }
  else if ((*(int *)((int)param_1 + 0x14) == 0) && (*(int *)((int)param_1 + 0x28) == 0)) {
    this = operator_new(0x150);
    MppThread::MppThread
              (this,(_func_void_ptr_void_ptr *)(DAT_00033c48 + 0x33bb4),param_1,
               (char *)((int)param_1 + 4));
    *(MppThread **)((int)param_1 + 0x28) = this;
    *(undefined4 *)((int)param_1 + 0x14) = 1;
                    /* WARNING: Could not recover jumptable at 0x0001cbc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_start_0004a2cc)(this);
    return;
  }
  return;
}



/* ===== mpp_timer_put @ 00033c64 size=264 ===== */

void mpp_timer_put(void *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  pthread_mutex_t *ppVar2;
  void *pvVar3;
  
  if ((param_1 != (void *)0x0) && (iVar1 = check_is_mpp_timer(param_1), iVar1 == 0)) {
    if (*(int *)((int)param_1 + 0x14) == 0) {
      iVar1 = *(int *)((int)param_1 + 0x20);
    }
    else {
      mpp_timer_set_enable(param_1);
      iVar1 = *(int *)((int)param_1 + 0x20);
    }
    if (iVar1 < 0) {
      iVar1 = *(int *)((int)param_1 + 0x24);
    }
    else {
      close(iVar1);
      iVar1 = *(int *)((int)param_1 + 0x24);
      *(undefined4 *)((int)param_1 + 0x20) = 0xffffffff;
    }
    if (iVar1 < 0) {
      pvVar3 = *(void **)((int)param_1 + 0x28);
    }
    else {
      close(iVar1);
      pvVar3 = *(void **)((int)param_1 + 0x28);
      *(undefined4 *)((int)param_1 + 0x24) = 0xffffffff;
    }
    if (pvVar3 != (void *)0x0) {
      __mutex = (pthread_mutex_t *)((int)pvVar3 + 0xe0);
      do {
        pthread_cond_destroy((pthread_cond_t *)(__mutex + 1));
        ppVar2 = __mutex + -3;
        pthread_mutex_destroy(__mutex);
        __mutex = ppVar2;
      } while ((pthread_mutex_t *)((int)pvVar3 + -0x40) != ppVar2);
      operator_delete(pvVar3,0x150);
      *(undefined4 *)((int)param_1 + 0x28) = 0;
    }
    mpp_osal_free(DAT_00033d6c + 0x33cf8,param_1);
    return;
  }
  _mpp_err(DAT_00033d78 + 0x33d50,DAT_00033d74 + 0x33d4c,DAT_00033d70 + 0x33d48,param_1);
  return;
}



/* ===== AutoTiming::AutoTiming @ 00033d7c size=32 ===== */

/* AutoTiming::AutoTiming(char const*) */

AutoTiming * __thiscall AutoTiming::AutoTiming(AutoTiming *this,char *param_1)

{
  undefined8 uVar1;
  
  uVar1 = mpp_time();
  *(char **)this = param_1;
  *(undefined8 *)(this + 8) = uVar1;
  return this;
}



/* ===== AutoTiming::~AutoTiming @ 00033d9c size=80 ===== */

/* AutoTiming::~AutoTiming() */

AutoTiming * __thiscall AutoTiming::~AutoTiming(AutoTiming *this)

{
  undefined8 uVar1;
  
  uVar1 = mpp_time();
  *(undefined8 *)(this + 0x10) = uVar1;
  _mpp_log(DAT_00033df0 + 0x33de0,DAT_00033dec + 0x33dd8,0,*(undefined4 *)this,
           CONCAT44((int)((ulonglong)uVar1 >> 0x20) -
                    (*(int *)(this + 0xc) + (uint)((uint)uVar1 < *(uint *)(this + 8))),
                    (uint)uVar1 - *(uint *)(this + 8)));
  return this;
}



/* ===== check_is_mpp_stopwatch @ 00033df4 size=108 ===== */

/* check_is_mpp_stopwatch(void*) */

undefined4 check_is_mpp_stopwatch(void *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00033e60 + 0x33e08;
  if ((param_1 != (void *)0x0) && (*(int *)param_1 == DAT_00033e64 + 0x33e18)) {
    return 0;
  }
  _mpp_err(DAT_00033e70 + 0x33e38,DAT_00033e6c + 0x33e34,DAT_00033e68 + 0x33e30);
  if ((**(uint **)(iVar1 + DAT_00033e74) & 0x10000000) == 0) {
    return 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== mpp_stopwatch_get @ 00033e78 size=208 ===== */

int * mpp_stopwatch_get(char *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_00033f48 + 0x33e90;
  piVar1 = (int *)mpp_osal_calloc(iVar3,0x68);
  iVar2 = mpp_osal_calloc(iVar3,0x240);
  if (piVar1 == (int *)0x0 || iVar2 == 0) {
    _mpp_err(DAT_00033f54 + 0x33f0c,DAT_00033f50 + 0x33f08,iVar3);
    if (piVar1 != (int *)0x0) {
      mpp_osal_free(iVar3,piVar1);
      return (int *)0x0;
    }
    if (iVar2 != 0) {
      mpp_osal_free(iVar3,iVar2);
      return (int *)0x0;
    }
  }
  else {
    *piVar1 = DAT_00033f4c + 0x33ed8;
    snprintf((char *)(piVar1 + 1),0x3f,param_1,0);
    piVar1[0x18] = iVar2;
    piVar1[0x11] = 8;
  }
  return piVar1;
}



/* ===== mpp_stopwatch_set_show_on_exit @ 00033f58 size=72 ===== */

void mpp_stopwatch_set_show_on_exit(void *param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((param_1 != (void *)0x0) && (iVar1 = check_is_mpp_stopwatch(param_1), iVar1 == 0)) {
    *(undefined4 *)((int)param_1 + 0x4c) = param_2;
    return;
  }
  _mpp_err(DAT_00033fa8 + 0x33f9c,DAT_00033fa4 + 0x33f98,DAT_00033fa0 + 0x33f94,param_1);
  return;
}



/* ===== mpp_stopwatch_record @ 00033fac size=232 ===== */

void mpp_stopwatch_record(void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *__s;
  int iVar4;
  undefined8 uVar5;
  
  if (param_1 != (void *)0x0) {
    iVar1 = check_is_mpp_stopwatch(param_1);
    if (iVar1 != 0) {
      _mpp_err(DAT_000340a4 + 0x3408c,DAT_000340a0 + 0x34088,DAT_0003409c + 0x34080,param_1,param_2)
      ;
      return;
    }
    iVar2 = *(int *)((int)param_1 + 0x44);
    iVar3 = *(int *)((int)param_1 + 0x48);
    iVar1 = *(int *)((int)param_1 + 0x60);
    if (iVar2 <= iVar3) {
      iVar4 = iVar2 * 2;
      iVar1 = mpp_osal_realloc(DAT_00034098 + 0x34044,iVar1,iVar2 * 0x90);
      iVar3 = *(int *)((int)param_1 + 0x48);
      if (iVar1 == 0) {
        iVar4 = *(int *)((int)param_1 + 0x44);
      }
      else {
        *(int *)((int)param_1 + 0x60) = iVar1;
        *(int *)((int)param_1 + 0x44) = iVar4;
      }
      if (iVar4 <= iVar3) {
        return;
      }
      iVar1 = *(int *)((int)param_1 + 0x60);
    }
    __s = (char *)(iVar3 * 0x48 + iVar1);
    uVar5 = mpp_time();
    *(undefined8 *)(__s + 0x40) = uVar5;
    if ((param_2 != 0) &&
       (iVar1 = snprintf(__s,0x3f,(char *)(DAT_00034094 + 0x3400c),param_2),
       *(int *)((int)param_1 + 0x50) < iVar1)) {
      *(int *)((int)param_1 + 0x50) = iVar1;
    }
    *(int *)((int)param_1 + 0x48) = *(int *)((int)param_1 + 0x48) + 1;
  }
  return;
}



/* ===== mpp_stopwatch_put @ 000340a8 size=336 ===== */

void mpp_stopwatch_put(void *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char acStack_50 [36];
  
  if ((param_1 == (void *)0x0) || (iVar1 = check_is_mpp_stopwatch(param_1), iVar1 != 0)) {
    _mpp_err(DAT_00034214 + 0x341ec,DAT_00034210 + 0x341e8,DAT_0003420c + 0x341e4,param_1);
    return;
  }
  iVar1 = *(int *)((int)param_1 + 0x60);
  if (*(int *)((int)param_1 + 0x4c) == 0) {
LAB_0003418c:
    if (iVar1 == 0) goto LAB_00034194;
  }
  else {
    if (iVar1 == 0) goto LAB_00034194;
    if (*(int *)((int)param_1 + 0x48) != 0) {
      uVar2 = *(uint *)(iVar1 + 0x40);
      iVar3 = *(int *)(iVar1 + 0x44);
      snprintf(acStack_50,0x1f,(char *)(DAT_000341fc + 0x34104),*(undefined4 *)((int)param_1 + 0x50)
              );
      if (1 < *(int *)((int)param_1 + 0x48)) {
        iVar4 = 1;
        iVar5 = DAT_00034200 + 0x34134;
        do {
          iVar4 = iVar4 + 1;
          __aeabi_l2f(*(uint *)(iVar1 + 0x88) - uVar2,
                      *(int *)(iVar1 + 0x8c) - (iVar3 + (uint)(*(uint *)(iVar1 + 0x88) < uVar2)));
          _mpp_log(iVar5,acStack_50,0,(int)param_1 + 4,iVar1 + 0x48);
          uVar2 = *(uint *)(iVar1 + 0x88);
          iVar3 = *(int *)(iVar1 + 0x8c);
          iVar1 = iVar1 + 0x48;
        } while (iVar4 < *(int *)((int)param_1 + 0x48));
      }
      iVar1 = *(int *)((int)param_1 + 0x60);
      goto LAB_0003418c;
    }
  }
  mpp_osal_free(DAT_00034208 + 0x341c8,iVar1);
LAB_00034194:
  iVar1 = DAT_00034204;
  *(undefined4 *)((int)param_1 + 0x60) = 0;
  mpp_osal_free(iVar1 + 0x341ac,param_1);
  return;
}



/* ===== mpp_stopwatch_elapsed_time @ 00034218 size=116 ===== */

undefined8 mpp_stopwatch_elapsed_time(void *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_1 != (void *)0x0) && (iVar1 = check_is_mpp_stopwatch(param_1), iVar1 == 0)) {
    uVar2 = 0;
    if (1 < *(int *)((int)param_1 + 0x48)) {
      uVar2 = VectorSub(*(undefined8 *)
                         (*(int *)((int)param_1 + 0x48) * 0x48 + *(int *)((int)param_1 + 0x60) + -8)
                        ,*(undefined8 *)(*(int *)((int)param_1 + 0x60) + 0x40),8);
    }
    return uVar2;
  }
  _mpp_err(DAT_00034294 + 0x34280,DAT_00034290 + 0x3427c,DAT_0003428c + 0x34278,param_1);
  return 0;
}



/* ===== mpp_osal_malloc @ 00034298 size=40 ===== */

undefined4 mpp_osal_malloc(undefined4 param_1,int param_2)

{
  undefined4 local_c [2];
  
  os_malloc(local_c,0x20,param_2 + 0x20U & 0xffffffe0);
  return local_c[0];
}



/* ===== mpp_osal_calloc @ 000342c0 size=40 ===== */

void * mpp_osal_calloc(undefined4 param_1,size_t param_2)

{
  void *__s;
  
  __s = (void *)mpp_osal_malloc();
  if (__s != (void *)0x0) {
    memset(__s,0,param_2);
  }
  return __s;
}



/* ===== mpp_osal_realloc @ 000342e8 size=168 ===== */

int mpp_osal_realloc(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int local_14 [2];
  
  if (param_2 == 0) {
    iVar1 = mpp_osal_malloc(param_1,param_3);
    return iVar1;
  }
  if (param_3 != 0) {
    os_realloc(param_2,local_14,0x20,param_3 + 0x20U & 0xffffffe0);
    if (local_14[0] != 0) {
      return local_14[0];
    }
    _mpp_err(DAT_0003439c + 0x34384,DAT_00034398 + 0x34380,0,param_2,param_3);
    return local_14[0];
  }
  _mpp_err(DAT_00034394 + 0x34358,DAT_00034390 + 0x34354,0,param_2);
  return 0;
}



/* ===== mpp_osal_free @ 000343a0 size=24 ===== */

void mpp_osal_free(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001c938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_os_free_0004a1f4)();
  return;
}



/* ===== mpp_env_get_u32 @ 000343ac size=4 ===== */

void mpp_env_get_u32(void)

{
  (*(code *)PTR_os_get_env_u32_0004a190)();
  return;
}



/* ===== mpp_env_get_str @ 000343b0 size=4 ===== */

void mpp_env_get_str(void)

{
  (*(code *)PTR_os_get_env_str_0004a1e0)();
  return;
}



/* ===== mpp_env_set_u32 @ 000343b4 size=4 ===== */

void mpp_env_set_u32(void)

{
  (*(code *)PTR_os_set_env_u32_0004a020)();
  return;
}



/* ===== mpp_env_set_str @ 000343b8 size=4 ===== */

void mpp_env_set_str(void)

{
  (*(code *)PTR_os_set_env_str_0004a2c4)();
  return;
}



/* ===== FUN_000343bc @ 000343bc size=332 ===== */

void FUN_000343bc(code *param_1,int param_2,char *param_3,char *param_4,undefined4 param_5)

{
  size_t sVar1;
  size_t sVar2;
  int iVar3;
  char *pcVar4;
  char *__s;
  uint uVar5;
  char acStack_12c [264];
  
  sVar1 = strnlen(param_3,0x100);
  if (param_4 == (char *)0x0) {
    uVar5 = sVar1;
    if (param_2 == 0) {
      param_2 = (int)&DAT_00034508 + DAT_00034520;
    }
  }
  else {
    sVar2 = strnlen(param_4,0x100);
    uVar5 = sVar1 + sVar2;
    if (param_2 == 0) {
      param_2 = DAT_00034518 + 0x344b8;
    }
    if (sVar2 != 0) {
      iVar3 = snprintf(acStack_12c,0x100,(char *)(DAT_00034508 + 0x3442c),param_4);
      __s = acStack_12c + sVar2 + 1;
      sVar2 = 0x100 - iVar3;
      goto joined_r0x00034494;
    }
  }
  sVar2 = 0x100;
  __s = acStack_12c;
joined_r0x00034494:
  if (uVar5 == 0) {
    pcVar4 = (char *)(DAT_00034514 + 0x344a4);
  }
  else {
    pcVar4 = acStack_12c;
    if (uVar5 < 0x100) {
      snprintf(__s,sVar2,(char *)(DAT_0003451c + 0x344d4),param_3);
      if (param_3[sVar1 - 1] != '\n') {
        __s[sVar1] = '\n';
        (__s + sVar1)[1] = '\0';
      }
    }
    else {
      snprintf(__s,sVar2,(char *)(DAT_00034510 + 0x34460),DAT_0003450c + 0x3445c);
    }
  }
  (*param_1)(param_2,pcVar4,param_5);
  return;
}



/* ===== _mpp_log @ 00034524 size=76 ===== */

void _mpp_log(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  FUN_000343bc(*(undefined4 *)(DAT_00034570 + 0x34540 + DAT_00034574),param_1,param_2,param_3,
               &uStack_4);
  return;
}



/* ===== _mpp_err @ 00034578 size=76 ===== */

void _mpp_err(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  FUN_000343bc(*(undefined4 *)(DAT_000345c4 + 0x34594 + DAT_000345c8),param_1,param_2,param_3,
               &uStack_4);
  return;
}



/* ===== mpp_log_set_flag @ 000345cc size=16 ===== */

void mpp_log_set_flag(undefined4 param_1)

{
  *(undefined4 *)(DAT_000345dc + 0x345d8) = param_1;
  return;
}



/* ===== mpp_log_get_flag @ 000345e0 size=12 ===== */

undefined4 mpp_log_get_flag(void)

{
  return *(undefined4 *)((int)&DAT_000345ec + DAT_000345ec);
}



/* ===== MppChanService::~MppChanService @ 000345f0 size=4 ===== */

/* MppChanService::~MppChanService() */

MppChanService * __thiscall MppChanService::~MppChanService(MppChanService *this)

{
  return this;
}



/* ===== MppChanService::MppChanService @ 000345f4 size=308 ===== */

/* MppChanService::MppChanService() */

MppChanService * __thiscall MppChanService::MppChanService(MppChanService *this)

{
  int iVar1;
  MppChanService *pMVar2;
  
  iVar1 = 0;
  pMVar2 = this;
  do {
    *(int *)(pMVar2 + 0xc0) = iVar1;
    iVar1 = iVar1 + 1;
    *(undefined4 *)(pMVar2 + 0xc4) = 0;
    *(undefined4 *)(pMVar2 + 200) = 0;
    pMVar2 = pMVar2 + 0xc;
  } while (iVar1 != 0x40);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0xc) = 1;
  *(undefined4 *)(this + 0x18) = 2;
  *(undefined4 *)(this + 0x24) = 3;
  *(undefined4 *)(this + 0x30) = 4;
  *(undefined4 *)(this + 0x3c) = 5;
  *(undefined4 *)(this + 0x48) = 6;
  *(undefined4 *)(this + 0x54) = 7;
  *(undefined4 *)(this + 0x60) = 8;
  *(undefined4 *)(this + 0x6c) = 9;
  *(undefined4 *)(this + 0x78) = 10;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0xb;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0x90) = 0xc;
  *(undefined4 *)(this + 0x9c) = 0xd;
  *(undefined4 *)(this + 0xa8) = 0xe;
  *(undefined4 *)(this + 0xb4) = 0xf;
  return this;
}



/* ===== mpp_set_chan @ 00034728 size=536 ===== */

undefined4 mpp_set_chan(undefined4 param_1,int param_2)

{
  MppChanService *pMVar1;
  int iVar2;
  MppChanService *pMVar3;
  MppChanService *this;
  int iVar4;
  byte *pbVar5;
  
  iVar4 = DAT_00034940 + 0x34744;
  pbVar5 = *(byte **)(iVar4 + DAT_00034944);
  DataMemoryBarrier(0xb);
  if ((*pbVar5 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(pbVar5);
    this = *(MppChanService **)(iVar4 + DAT_00034948);
    if (iVar2 != 0) {
      MppChanService::MppChanService(this);
      __cxa_guard_release(pbVar5);
      __aeabi_atexit(this,*(undefined4 *)(iVar4 + DAT_0003494c),DAT_00034950 + 0x348ac);
    }
  }
  else {
    this = *(MppChanService **)(iVar4 + DAT_00034948);
  }
  if (param_2 == 0) {
    iVar4 = 0;
    pMVar3 = this;
    do {
      pMVar1 = pMVar3 + 200;
      pMVar3 = pMVar3 + 0xc;
      if (*(int *)pMVar1 == 0) {
        *(undefined4 *)(this + iVar4 * 0xc + 0xc4) = param_1;
        *(undefined4 *)(this + iVar4 * 0xc + 200) = 1;
        return *(undefined4 *)(this + iVar4 * 0xc + 0xc0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x40);
    return 0xffffffff;
  }
  iVar4 = 0;
  if (*(int *)(this + 8) != 0) {
    if (*(int *)(this + 0x14) == 0) {
      iVar4 = 1;
    }
    else if (*(int *)(this + 0x20) == 0) {
      iVar4 = 2;
    }
    else if (*(int *)(this + 0x2c) == 0) {
      iVar4 = 3;
    }
    else if (*(int *)(this + 0x38) == 0) {
      iVar4 = 4;
    }
    else if (*(int *)(this + 0x44) == 0) {
      iVar4 = 5;
    }
    else if (*(int *)(this + 0x50) == 0) {
      iVar4 = 6;
    }
    else if (*(int *)(this + 0x5c) == 0) {
      iVar4 = 7;
    }
    else if (*(int *)(this + 0x68) == 0) {
      iVar4 = 8;
    }
    else if (*(int *)(this + 0x74) == 0) {
      iVar4 = 9;
    }
    else if (*(int *)(this + 0x80) == 0) {
      iVar4 = 10;
    }
    else if (*(int *)(this + 0x8c) == 0) {
      iVar4 = 0xb;
    }
    else if (*(int *)(this + 0x98) == 0) {
      iVar4 = 0xc;
    }
    else if (*(int *)(this + 0xa4) == 0) {
      iVar4 = 0xd;
    }
    else if (*(int *)(this + 0xb0) == 0) {
      iVar4 = 0xe;
    }
    else {
      if (*(int *)(this + 0xbc) != 0) {
        return 0xffffffff;
      }
      iVar4 = 0xf;
    }
  }
  iVar4 = iVar4 * 0xc;
  *(undefined4 *)(this + iVar4 + 4) = param_1;
  *(undefined4 *)(this + iVar4 + 8) = 1;
  return *(undefined4 *)(this + iVar4);
}



/* ===== mpp_free_chan @ 00034954 size=552 ===== */

void mpp_free_chan(int param_1,int param_2)

{
  MppChanService *pMVar1;
  int iVar2;
  MppChanService *pMVar3;
  MppChanService *this;
  int iVar4;
  byte *pbVar5;
  
  iVar4 = DAT_00034b7c + 0x34970;
  pbVar5 = *(byte **)(iVar4 + DAT_00034b80);
  DataMemoryBarrier(0xb);
  if ((*pbVar5 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(pbVar5);
    this = *(MppChanService **)(iVar4 + DAT_00034b84);
    if (iVar2 != 0) {
      MppChanService::MppChanService(this);
      __cxa_guard_release(pbVar5);
      __aeabi_atexit(this,*(undefined4 *)(iVar4 + DAT_00034b90),DAT_00034b94 + 0x34ae8);
    }
  }
  else {
    this = *(MppChanService **)(iVar4 + DAT_00034b84);
  }
  if (param_2 != 0) {
    if (param_1 == *(int *)(this + 4)) {
      iVar4 = 0;
    }
    else if (param_1 == *(int *)(this + 0x10)) {
      iVar4 = 1;
    }
    else if (param_1 == *(int *)(this + 0x1c)) {
      iVar4 = 2;
    }
    else if (param_1 == *(int *)(this + 0x28)) {
      iVar4 = 3;
    }
    else if (param_1 == *(int *)(this + 0x34)) {
      iVar4 = 4;
    }
    else if (param_1 == *(int *)(this + 0x40)) {
      iVar4 = 5;
    }
    else if (param_1 == *(int *)(this + 0x4c)) {
      iVar4 = 6;
    }
    else if (param_1 == *(int *)(this + 0x58)) {
      iVar4 = 7;
    }
    else if (param_1 == *(int *)(this + 100)) {
      iVar4 = 8;
    }
    else if (param_1 == *(int *)(this + 0x70)) {
      iVar4 = 9;
    }
    else if (param_1 == *(int *)(this + 0x7c)) {
      iVar4 = 10;
    }
    else if (param_1 == *(int *)(this + 0x88)) {
      iVar4 = 0xb;
    }
    else if (param_1 == *(int *)(this + 0x94)) {
      iVar4 = 0xc;
    }
    else if (param_1 == *(int *)(this + 0xa0)) {
      iVar4 = 0xd;
    }
    else if (param_1 == *(int *)(this + 0xac)) {
      iVar4 = 0xe;
    }
    else {
      if (param_1 != *(int *)(this + 0xb8)) goto LAB_00034a90;
      iVar4 = 0xf;
    }
    *(undefined4 *)(this + iVar4 * 0xc + 8) = 0;
    *(undefined4 *)(this + iVar4 * 0xc + 4) = 0;
    return;
  }
  iVar4 = 0;
  pMVar3 = this;
  do {
    pMVar1 = pMVar3 + 0xc4;
    pMVar3 = pMVar3 + 0xc;
    if (param_1 == *(int *)pMVar1) {
      *(undefined4 *)(this + iVar4 * 0xc + 200) = 0;
      *(undefined4 *)(this + iVar4 * 0xc + 0xc4) = 0;
      return;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x40);
LAB_00034a90:
  _mpp_log(DAT_00034b8c + 0x34aa8,DAT_00034b88 + 0x34aa4,0);
  return;
}



/* ===== mpp_vcodec_open @ 00034b98 size=64 ===== */

int mpp_vcodec_open(void)

{
  int iVar1;
  
  iVar1 = open64((char *)(DAT_00034bd8 + 0x34bac),0x80002);
  if (-1 < iVar1) {
    return iVar1;
  }
  _mpp_err(DAT_00034be0 + 0x34bd0,DAT_00034bdc + 0x34bcc,0);
  return -1;
}



/* ===== mpp_vcodec_ioctl @ 00034be4 size=64 ===== */

void mpp_vcodec_ioctl(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = param_5;
  local_14 = 0;
  local_c = 0;
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  ioctl(param_1,0x40045601,&local_20);
  return;
}



/* ===== mpp_vcodec_close @ 00034c24 size=32 ===== */

undefined4 mpp_vcodec_close(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  close(param_1);
  return 0;
}



/* ===== os_malloc @ 00034c44 size=12 ===== */

void os_malloc(void **param_1,size_t param_2,size_t param_3)

{
  posix_memalign(param_1,param_2,param_3);
  return;
}



/* ===== os_realloc @ 00034c50 size=36 ===== */

int os_realloc(void *param_1,undefined4 *param_2,undefined4 param_3,size_t param_4)

{
  void *pvVar1;
  
  pvVar1 = realloc(param_1,param_4);
  *param_2 = pvVar1;
  return -(uint)(pvVar1 == (void *)0x0);
}



/* ===== os_free @ 00034c74 size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void os_free(void *__ptr)

{
  (*(code *)PTR_free_0004a290)(__ptr);
  return;
}



/* ===== os_get_env_u32 @ 00034c78 size=160 ===== */

undefined4 os_get_env_u32(char *param_1,ulong *param_2,ulong param_3)

{
  char *__nptr;
  int *piVar1;
  ulong uVar2;
  int __base;
  char *local_1c;
  
  __nptr = getenv(param_1);
  if (__nptr != (char *)0x0) {
    if (*__nptr == '0') {
      if (__nptr[1] == 'x') {
        __base = 0x10;
      }
      else {
        __base = 10;
      }
    }
    else {
      __base = 10;
    }
    piVar1 = __errno_location();
    *piVar1 = 0;
    uVar2 = strtoul(__nptr,&local_1c,__base);
    *param_2 = uVar2;
    if ((*piVar1 == 0) && (local_1c != __nptr)) {
      return 0;
    }
    *piVar1 = 0;
  }
  *param_2 = param_3;
  return 0;
}



/* ===== os_get_env_str @ 00034d18 size=36 ===== */

undefined4 os_get_env_str(char *param_1,undefined4 *param_2,char *param_3)

{
  char *pcVar1;
  
  pcVar1 = getenv(param_1);
  if (pcVar1 != (char *)0x0) {
    param_3 = pcVar1;
  }
  *param_2 = param_3;
  return 0;
}



/* ===== os_set_env_u32 @ 00034d3c size=72 ===== */

void os_set_env_u32(char *param_1,undefined4 param_2)

{
  char acStack_410 [1028];
  
  snprintf(acStack_410,0x400,(char *)(DAT_00034d84 + 0x34d60),param_2);
  setenv(param_1,acStack_410,1);
  return;
}



/* ===== os_set_env_str @ 00034d88 size=8 ===== */

void os_set_env_str(char *param_1,char *param_2)

{
  setenv(param_1,param_2,1);
  return;
}



/* ===== SyslogWrapper::~SyslogWrapper @ 00034d90 size=20 ===== */

/* SyslogWrapper::~SyslogWrapper() */

SyslogWrapper * __thiscall SyslogWrapper::~SyslogWrapper(SyslogWrapper *this)

{
  closelog();
  return this;
}



/* ===== SyslogWrapper::SyslogWrapper @ 00034da4 size=36 ===== */

/* SyslogWrapper::SyslogWrapper() */

SyslogWrapper * __thiscall SyslogWrapper::SyslogWrapper(SyslogWrapper *this)

{
  openlog((char *)(DAT_00034dc8 + 0x34dc0),0x23,8);
  return this;
}



/* ===== os_log @ 00034dcc size=104 ===== */

void os_log(undefined4 param_1,undefined4 param_2,__gnuc_va_list param_3)

{
  char acStack_418 [1024];
  
  memset(acStack_418,0,0x400);
  snprintf(acStack_418,0x400,(char *)(DAT_00034e34 + 0x34e18),param_1,param_2);
  vsyslog(6,acStack_418,param_3);
  return;
}



/* ===== os_err @ 00034e38 size=104 ===== */

void os_err(undefined4 param_1,undefined4 param_2,__gnuc_va_list param_3)

{
  char acStack_418 [1024];
  
  memset(acStack_418,0,0x400);
  snprintf(acStack_418,0x400,(char *)(DAT_00034ea0 + 0x34e84),param_1,param_2);
  vsyslog(3,acStack_418,param_3);
  return;
}



/* ===== MppThread::MppThread @ 00034ea8 size=212 ===== */

/* MppThread::MppThread(void* (*)(void*), void*, char const*) */

MppThread * __thiscall
MppThread::MppThread(MppThread *this,_func_void_ptr_void_ptr *param_1,void *param_2,char *param_3)

{
  MppThread MVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  pthread_cond_t *__cond;
  undefined4 uVar5;
  pthread_mutex_t *__mutex;
  pthread_mutexattr_t pStack_24;
  
  __mutex = (pthread_mutex_t *)(this + 8);
  do {
    pthread_mutexattr_init(&pStack_24);
    pthread_mutexattr_settype(&pStack_24,1);
    pthread_mutex_init(__mutex,&pStack_24);
    pthread_mutexattr_destroy(&pStack_24);
    __cond = (pthread_cond_t *)(__mutex + 1);
    __mutex = __mutex + 3;
    pthread_cond_init(__cond,(pthread_condattr_t *)0x0);
    uVar4 = DAT_00034f88;
    uVar3 = DAT_00034f80;
  } while (__mutex != (pthread_mutex_t *)(this + 0x128));
  *(_func_void_ptr_void_ptr **)(this + 0x138) = param_1;
  *(void **)(this + 0x14c) = param_2;
  *(undefined8 *)(this + 0x128) = uVar3;
  *(undefined8 *)(this + 0x130) = uVar4;
  if (param_3 != (char *)0x0) {
    strncpy((char *)(this + 0x13c),param_3,0x10);
    return this;
  }
  uVar5 = *(undefined4 *)(DAT_00034f90 + 0x34f5c);
  uVar2 = *(undefined2 *)(DAT_00034f90 + 0x34f60);
  MVar1 = *(MppThread *)(DAT_00034f90 + 0x34f62);
  *(undefined4 *)(this + 0x13c) = *(undefined4 *)(DAT_00034f90 + 0x34f58);
  *(undefined4 *)(this + 0x140) = uVar5;
  *(undefined2 *)(this + 0x144) = uVar2;
  this[0x146] = MVar1;
  return this;
}



/* ===== MppThread::get_status @ 00034f94 size=12 ===== */

/* MppThread::get_status(MppThreadSignal_e) */

undefined4 __thiscall MppThread::get_status(MppThread *this,int param_2)

{
  return *(undefined4 *)(this + (param_2 + 0x4a) * 4);
}



/* ===== MppThread::set_status @ 00034fa0 size=12 ===== */

/* MppThread::set_status(MppThreadStatus, MppThreadSignal_e) */

void __thiscall MppThread::set_status(MppThread *this,undefined4 param_2,int param_3)

{
  *(undefined4 *)(this + (param_3 + 0x4a) * 4) = param_2;
  return;
}



/* ===== MppThread::dump_status @ 00034fac size=64 ===== */

/* MppThread::dump_status() */

void __thiscall MppThread::dump_status(MppThread *this)

{
  _mpp_log(DAT_00034fec + 0x34fd8,DAT_00034ff0 + 0x34fe4,0,this + 0x13c,
           *(undefined4 *)(this + 0x128),*(undefined4 *)(this + 300),*(undefined4 *)(this + 0x130),
           *(undefined4 *)(this + 0x134));
  return;
}



/* ===== MppThread::start @ 00034ff4 size=148 ===== */

/* MppThread::start() */

void __thiscall MppThread::start(MppThread *this)

{
  int iVar1;
  pthread_attr_t pStack_34;
  
  pthread_attr_init(&pStack_34);
  pthread_attr_setdetachstate(&pStack_34,0);
  iVar1 = get_status(this,0);
  if (iVar1 == 0) {
    set_status(this,1,0);
    iVar1 = pthread_create((pthread_t *)this,&pStack_34,*(__start_routine **)(this + 0x138),
                           *(void **)(this + 0x14c));
    if (iVar1 != 0) {
      set_status(this,0,0);
      pthread_attr_destroy(&pStack_34);
      return;
    }
  }
  pthread_attr_destroy(&pStack_34);
  return;
}



/* ===== MppThread::stop @ 00035088 size=116 ===== */

/* MppThread::stop() */

void __thiscall MppThread::stop(MppThread *this)

{
  int iVar1;
  void *apvStack_14 [2];
  
  iVar1 = get_status(this,0);
  if (iVar1 == 0) {
    return;
  }
  pthread_mutex_lock((pthread_mutex_t *)(this + 8));
  set_status(this,3,0);
  pthread_cond_signal((pthread_cond_t *)(this + 0x20));
  pthread_mutex_unlock((pthread_mutex_t *)(this + 8));
  pthread_join(*(pthread_t *)this,apvStack_14);
  set_status(this,0);
  return;
}



/* ===== _fini @ 000350fc size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::timerfd_settime @ 0004c000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int timerfd_settime(int __ufd,int __flags,itimerspec *__utmr,itimerspec *__otmr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0004c004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0004c008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clock_gettime @ 0004c00c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_attr_setdetachstate @ 0004c010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_attr_setdetachstate(pthread_attr_t *__attr,int __detachstate)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 0004c014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_ldivmod @ 0004c018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_ldivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::epoll_wait @ 0004c01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_wait(int __epfd,epoll_event *__events,int __maxevents,int __timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0004c020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_guard_acquire @ 0004c024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_acquire(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 0004c028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 0004c02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutexattr_settype @ 0004c030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutexattr_settype(pthread_mutexattr_t *__attr,int __kind)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_attr_init @ 0004c034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_attr_init(pthread_attr_t *__attr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::openlog @ 0004c038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void openlog(char *__ident,int __option,int __facility)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setenv @ 0004c03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 0004c040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 0004c044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::timerfd_create @ 0004c048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int timerfd_create(clockid_t __clock_id,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 0004c04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0004c050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 0004c054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 0004c058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0004c05c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dup @ 0004c060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dup(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::epoll_create @ 0004c064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_create(int __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 0004c068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_l2f @ 0004c06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_l2f(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::select @ 0004c070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 0004c074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 0004c078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutexattr_destroy @ 0004c07c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutexattr_destroy(pthread_mutexattr_t *__attr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_guard_release @ 0004c080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_release(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vsyslog @ 0004c084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void vsyslog(int __pri,char *__fmt,__gnuc_va_list __ap)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_attr_destroy @ 0004c088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_attr_destroy(pthread_attr_t *__attr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 0004c08c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_cond_signal @ 0004c090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_signal(pthread_cond_t *__cond)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0004c094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutexattr_init @ 0004c098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutexattr_init(pthread_mutexattr_t *__attr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 0004c09c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_cond_timedwait @ 0004c0a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_timedwait(pthread_cond_t *__cond,pthread_mutex_t *__mutex,timespec *__abstime)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mmap64 @ 0004c0a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap64(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off64_t __offset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::operator.new @ 0004c0a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_cond_init @ 0004c0ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_init(pthread_cond_t *__cond,pthread_condattr_t *__cond_attr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::closelog @ 0004c0b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void closelog(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0004c0b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::munmap @ 0004c0b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uldivmod @ 0004c0bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uldivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0004c0c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 0004c0c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strnlen @ 0004c0c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strnlen(char *__string,size_t __maxlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::operator.delete @ 0004c0cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1,uint param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_atexit @ 0004c0d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 0004c0d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_cond_destroy @ 0004c0d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_destroy(pthread_cond_t *__cond)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open64 @ 0004c0dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0004c0e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0004c0e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_cond_wait @ 0004c0e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::epoll_ctl @ 0004c0ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_ctl(int __epfd,int __op,int __fd,epoll_event *__event)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::posix_memalign @ 0004c0f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int posix_memalign(void **__memptr,size_t __alignment,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0004c0f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 0004c0f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


