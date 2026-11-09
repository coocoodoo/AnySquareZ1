// libc_helper.so — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00011dd8 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::clock_gettime @ 00011dfc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_0002900c)(__clock_id);
  return iVar1;
}



/* ===== get_monotonic @ 00011e08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double get_monotonic(void)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_get_monotonic_00029010)();
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== <EXTERNAL>::sqrt @ 00011e14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double sqrt(double __x)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_sqrt_00029014)(SUB84(__x,0));
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== serialqueue_send_one @ 00011e20 size=12 ===== */

void serialqueue_send_one(serialqueue *sq,command_queue *cq,queue_message *qm)

{
  (*(code *)PTR_serialqueue_send_one_00029018)(sq);
  return;
}



/* ===== <EXTERNAL>::pthread_cond_signal @ 00011e2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_signal(pthread_cond_t *__cond)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_signal_0002901c)(__cond);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_create @ 00011e38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00029020)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 00011e44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00029024)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::memmove @ 00011e50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00029028)(__dest);
  return pvVar1;
}



/* ===== serialqueue_alloc_commandqueue @ 00011e5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

command_queue * serialqueue_alloc_commandqueue(void)

{
  command_queue *pcVar1;
  
  pcVar1 = (command_queue *)(*(code *)PTR_serialqueue_alloc_commandqueue_0002902c)();
  return pcVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00011e68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00029030)(__s);
  return iVar1;
}



/* ===== pollreactor_is_exit @ 00011e74 size=12 ===== */

int pollreactor_is_exit(pollreactor *pr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pollreactor_is_exit_00029034)(pr);
  return iVar1;
}



/* ===== <EXTERNAL>::ceil @ 00011e80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double ceil(double __x)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_ceil_00029038)(SUB84(__x,0));
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== serialqueue_add_fastreader @ 00011e8c size=12 ===== */

void serialqueue_add_fastreader(serialqueue *sq,fastreader *fr)

{
  (*(code *)PTR_serialqueue_add_fastreader_0002903c)(sq);
  return;
}



/* ===== <EXTERNAL>::memcpy @ 00011e98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00029040)(__dest);
  return pvVar1;
}



/* ===== serialqueue_get_clock_est @ 00011ea4 size=12 ===== */

void serialqueue_get_clock_est(serialqueue *sq,clock_estimate *ce)

{
  (*(code *)PTR_serialqueue_get_clock_est_00029044)(sq);
  return;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00011eb0 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00029048)();
  return;
}



/* ===== <EXTERNAL>::tcflush @ 00011ebc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcflush(int __fd,int __queue_selector)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_tcflush_0002904c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00011ec8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00029050)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::vsnprintf @ 00011ed4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsnprintf_00029054)(__s);
  return iVar1;
}



/* ===== trapq_finalize_moves @ 00011ee0 size=12 ===== */

void trapq_finalize_moves(trapq *tq,double print_time)

{
  (*(code *)PTR_trapq_finalize_moves_00029058)(SUB84(print_time,0),tq);
  return;
}



/* ===== stepcompress_append @ 00011eec size=12 ===== */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00011ef4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

int stepcompress_append(stepcompress *sc,int sdir,double print_time,double step_time)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stepcompress_append_0002905c)
                    (SUB84(print_time,0),(int)((ulonglong)print_time >> 0x20),SUB84(step_time,0),sc)
  ;
  return iVar1;
}



/* ===== pollreactor_do_exit @ 00011ef8 size=12 ===== */

void pollreactor_do_exit(pollreactor *pr)

{
  (*(code *)PTR_pollreactor_do_exit_00029060)(pr);
  return;
}



/* ===== pollreactor_add_timer @ 00011f04 size=12 ===== */

void pollreactor_add_timer(pollreactor *pr,int pos,void *callback)

{
  (*(code *)PTR_pollreactor_add_timer_00029064)(pr);
  return;
}



/* ===== <EXTERNAL>::pipe @ 00011f10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pipe(int *__pipedes)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pipe_00029068)(__pipedes);
  return iVar1;
}



/* ===== <EXTERNAL>::calloc @ 00011f1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0002906c)(__nmemb);
  return pvVar1;
}



/* ===== errorf @ 00011f28 size=12 ===== */

void errorf(char *fmt)

{
  (*(code *)PTR_errorf_00029070)(fmt);
  return;
}



/* ===== <EXTERNAL>::write @ 00011f34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_00029074)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011f4c size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0002907c)();
  return;
}



/* ===== stepcompress_get_step_dir @ 00011f58 size=12 ===== */

int stepcompress_get_step_dir(stepcompress *sc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stepcompress_get_step_dir_00029080)(sc);
  return iVar1;
}



/* ===== itersolve_calc_position_from_coord @ 00011f64 size=12 ===== */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00011f6c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

double itersolve_calc_position_from_coord(stepper_kinematics *sk,double x,double y,double z)

{
  (*(code *)PTR_itersolve_calc_position_from_coord_00029084)
            (SUB84(x,0),(int)((ulonglong)x >> 0x20),SUB84(y,0),(int)((ulonglong)y >> 0x20),
             SUB84(z,0),sk);
  return x;
}



/* ===== <EXTERNAL>::cos @ 00011f70 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double cos(double __x)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_cos_00029088)(SUB84(__x,0));
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== <EXTERNAL>::memchr @ 00011f7c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memchr(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memchr_0002908c)(__s);
  return pvVar1;
}



/* ===== pollreactor_add_fd @ 00011f88 size=12 ===== */

void pollreactor_add_fd(pollreactor *pr,int pos,int fd,void *callback,int write_only)

{
  (*(code *)PTR_pollreactor_add_fd_00029090)(pr);
  return;
}



/* ===== msgblock_check @ 00011f94 size=12 ===== */

int msgblock_check(uint8_t *need_sync,uint8_t *buf,int buf_len,uint8_t *need_sync_1,uint8_t *buf_1,
                  int buf_len_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_msgblock_check_00029094)(need_sync);
  return iVar1;
}



/* ===== <EXTERNAL>::sin @ 00011fa0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double sin(double __x)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_sin_00029098)(SUB84(__x,0));
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== serialqueue_rm_fastreader @ 00011fac size=12 ===== */

void serialqueue_rm_fastreader(serialqueue *sq,fastreader *fr)

{
  (*(code *)PTR_serialqueue_rm_fastreader_0002909c)(sq);
  return;
}



/* ===== <EXTERNAL>::atan2 @ 00011fb8 size=12 ===== */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00011fc0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double atan2(double __y,double __x)

{
  (*(code *)PTR_atan2_000290a0)(SUB84(__y,0),(int)((ulonglong)__y >> 0x20),SUB84(__x,0));
  return __y;
}



/* ===== <EXTERNAL>::read @ 00011fc4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_000290a4)(__fd);
  return sVar1;
}



/* ===== trapq_check_sentinels @ 00011fd0 size=12 ===== */

void trapq_check_sentinels(trapq *tq)

{
  (*(code *)PTR_trapq_check_sentinels_000290a8)(tq);
  return;
}



/* ===== <EXTERNAL>::realloc @ 00011fdc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_000290ac)(__ptr);
  return pvVar1;
}



/* ===== <EXTERNAL>::pthread_cond_init @ 00011fe8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_init(pthread_cond_t *__cond,pthread_condattr_t *__cond_attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_init_000290b0)(__cond);
  return iVar1;
}



/* ===== <EXTERNAL>::memcmp @ 00011ff4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_000290b4)(__s1);
  return iVar1;
}



/* ===== report_errno @ 00012000 size=12 ===== */

void report_errno(char *where,int rc)

{
  (*(code *)PTR_report_errno_000290b8)(where);
  return;
}



/* ===== pollreactor_get_timer @ 0001200c size=12 ===== */

double pollreactor_get_timer(pollreactor *pr,int pos)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_pollreactor_get_timer_000290bc)(pr);
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== message_free @ 00012018 size=12 ===== */

void message_free(queue_message *qm)

{
  (*(code *)PTR_message_free_000290c0)(qm);
  return;
}



/* ===== <EXTERNAL>::memset @ 00012024 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_000290c4)(__s);
  return pvVar1;
}



/* ===== msgblock_crc16_ccitt @ 00012030 size=12 ===== */

uint16_t msgblock_crc16_ccitt(uint8_t *buf,uint8_t len)

{
  uint16_t uVar1;
  
  uVar1 = (*(code *)PTR_msgblock_crc16_ccitt_000290c8)(buf,len);
  return uVar1;
}



/* ===== clock_from_clock32 @ 0001203c size=12 ===== */

uint64_t clock_from_clock32(clock_estimate *ce,uint32_t clock32)

{
  uint64_t uVar1;
  
  uVar1 = (*(code *)PTR_clock_from_clock32_000290cc)(ce);
  return uVar1;
}



/* ===== <EXTERNAL>::poll @ 00012048 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_poll_000290d0)(__fds);
  return iVar1;
}



/* ===== serialqueue_exit @ 00012054 size=12 ===== */

void serialqueue_exit(serialqueue *sq)

{
  (*(code *)PTR_serialqueue_exit_000290d4)(sq);
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 00012060 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_000290d8)(__mutex);
  return iVar1;
}



/* ===== clock_from_time @ 0001206c size=12 ===== */

uint64_t clock_from_time(clock_estimate *ce,double time)

{
  uint64_t uVar1;
  
  uVar1 = (*(code *)PTR_clock_from_time_000290dc)(SUB84(time,0),ce);
  return uVar1;
}



/* ===== serialqueue_free_commandqueue @ 00012078 size=12 ===== */

void serialqueue_free_commandqueue(command_queue *cq)

{
  (*(code *)PTR_serialqueue_free_commandqueue_000290e0)(cq);
  return;
}



/* ===== serialqueue_send_batch @ 00012084 size=12 ===== */

void serialqueue_send_batch(serialqueue *sq,command_queue *cq,list_head *msgs)

{
  (*(code *)PTR_serialqueue_send_batch_000290e4)(sq);
  return;
}



/* ===== pollreactor_alloc @ 00012090 size=12 ===== */

pollreactor * pollreactor_alloc(int num_fds,int num_timers,void *callback_data)

{
  pollreactor *ppVar1;
  
  ppVar1 = (pollreactor *)(*(code *)PTR_pollreactor_alloc_000290e8)(num_fds);
  return ppVar1;
}



/* ===== stepcompress_commit @ 0001209c size=12 ===== */

int stepcompress_commit(stepcompress *sc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stepcompress_commit_000290ec)(sc);
  return iVar1;
}



/* ===== clock_to_time @ 000120a8 size=12 ===== */

double clock_to_time(clock_estimate *ce,uint64_t clock)

{
  undefined4 in_r1;
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_clock_to_time_000290f0)(ce,in_r1,(int)clock,(int)(clock >> 0x20));
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== pollreactor_run @ 000120b4 size=12 ===== */

void pollreactor_run(pollreactor *pr)

{
  (*(code *)PTR_pollreactor_run_000290f4)(pr);
  return;
}



/* ===== message_alloc @ 000120c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

queue_message * message_alloc(void)

{
  queue_message *pqVar1;
  
  pqVar1 = (queue_message *)(*(code *)PTR_message_alloc_000290f8)();
  return pqVar1;
}



/* ===== msgblock_decode @ 000120cc size=12 ===== */

int msgblock_decode(uint32_t *data,int data_len,uint8_t *msg,int msg_len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_msgblock_decode_000290fc)(data);
  return iVar1;
}



/* ===== message_queue_free @ 000120d8 size=12 ===== */

void message_queue_free(list_head *root)

{
  (*(code *)PTR_message_queue_free_00029100)(root);
  return;
}



/* ===== message_alloc_and_encode @ 000120e4 size=12 ===== */

queue_message * message_alloc_and_encode(uint32_t *data,int len)

{
  queue_message *pqVar1;
  
  pqVar1 = (queue_message *)(*(code *)PTR_message_alloc_and_encode_00029104)(data);
  return pqVar1;
}



/* ===== pollreactor_free @ 000120f0 size=12 ===== */

void pollreactor_free(pollreactor *pr)

{
  (*(code *)PTR_pollreactor_free_00029108)(pr);
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 000120fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_0002910c)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_cond_wait @ 00012108 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_wait_00029110)(__cond);
  return iVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00012114 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00029114)();
  return piVar1;
}



/* ===== pollreactor_update_timer @ 00012120 size=12 ===== */

void pollreactor_update_timer(pollreactor *pr,int pos,double waketime)

{
  (*(code *)PTR_pollreactor_update_timer_00029118)(SUB84(waketime,0),pr);
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 0001212c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_0002911c)(__mutex);
  return iVar1;
}



/* ===== message_fill @ 00012138 size=12 ===== */

queue_message * message_fill(uint8_t *data,int len)

{
  queue_message *pqVar1;
  
  pqVar1 = (queue_message *)(*(code *)PTR_message_fill_00029120)(data);
  return pqVar1;
}



/* ===== fd_set_non_blocking @ 00012144 size=12 ===== */

int fd_set_non_blocking(int fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fd_set_non_blocking_00029124)(fd);
  return iVar1;
}



/* ===== <EXTERNAL>::fcntl @ 00012150 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fcntl_00029128)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_join @ 0001215c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_0002912c)(__th);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00012168 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00029130)();
  return;
}



/* ===== <EXTERNAL>::raise @ 00012174 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_00029134)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00012180 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00029138)(__ptr);
  return;
}



/* ===== deregister_tm_clones @ 00012190 size=72 ===== */

void processEntry deregister_tm_clones(void)

{
  code *pcVar1;
  
  if (DAT_000121dc + 0x121a8 == DAT_000121d8 + 0x121a0) {
    return;
  }
  pcVar1 = *(code **)(DAT_000121e0 + 0x121b0 + DAT_000121e4);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== register_tm_clones @ 000121e8 size=84 ===== */

void register_tm_clones(void)

{
  code *pcVar1;
  
  if (((DAT_00012240 + 0x12200) - (DAT_0001223c + 0x121f8) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00012244 + 0x12208 + DAT_00012248);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== __do_global_dtors_aux @ 0001224c size=112 ===== */

void __do_global_dtors_aux(void)

{
  int iVar1;
  
  iVar1 = DAT_000122c0 + 0x12268;
  if (*(char *)(DAT_000122bc + 0x1225c) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_000122c4) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_000122c8 + 0x12288));
  }
  deregister_tm_clones();
  if (*(int *)(iVar1 + DAT_000122cc) != 0) {
    __deregister_frame_info(DAT_000122d0 + 0x122a8);
  }
  *(undefined1 *)(DAT_000122d4 + 0x122b8) = 1;
  return;
}



/* ===== frame_dummy @ 000122d8 size=56 ===== */

void frame_dummy(void)

{
  if (*(int *)(DAT_00012310 + 0x122e8 + DAT_00012314) != 0) {
    __register_frame_info(DAT_0001231c + 0x12308,DAT_00012318 + 0x12304);
  }
  register_tm_clones();
  return;
}



/* ===== calculate_bittime @ 00012320 size=48 ===== */

double calculate_bittime(serialqueue *sq,uint32_t bytes)

{
  uint in_fpscr;
  double dVar1;
  
                    /* Unresolved local var: uint32_t pkts@[DW_OP_breg1(r1): +7; DW_OP_lit3;
                       DW_OP_shr; DW_OP_stack_value]
                       Unresolved local var: uint32_t bits@[DW_OP_breg1(r1): +7; DW_OP_lit3;
                       DW_OP_shr; DW_OP_const1u: 47; DW_OP_mul; DW_OP_breg1(r1): 0; DW_OP_lit3;
                       DW_OP_shl; DW_OP_lit4; DW_OP_minus; DW_OP_plus; DW_OP_stack_value] */
  dVar1 = (double)VectorUnsignedToFloat
                            ((bytes + 7 >> 3) * 0x2f + bytes * 8 + -4,(byte)(in_fpscr >> 0x16) & 3);
  return dVar1 * sq->bittime_adjust;
}



/* ===== shaper_xy_calc_position @ 00012350 size=500 ===== */

double shaper_xy_calc_position(stepper_kinematics *sk,move *m,double move_time)

{
  stepper_kinematics *psVar1;
  stepper_kinematics *psVar2;
  move *pmVar3;
  int iVar4;
  list_node *plVar5;
  int iVar6;
  trapq *ptVar7;
  int iVar8;
  trapq *ptVar9;
  undefined4 uVar10;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  double dVar11;
  double dVar12;
  list_node lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
                    /* Unresolved local var: input_shaper * is@[DW_OP_reg0(r0)]
                       Unresolved local var: stepper_kinematics * __mptr@[???] */
  ptVar7 = sk[3].tq;
  iVar8 = *(int *)&sk[2].last_flush_time;
  iVar6 = *(int *)&sk[1].step_dist;
  if (iVar8 == 0 && ptVar7 == (trapq *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00012540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar10 = (**(code **)(iVar6 + 0x40))(iVar6);
    return (double)CONCAT44(extraout_s1_00,uVar10);
  }
                    /* Unresolved local var: double move_dist@[???] */
  dVar16 = (m->axes_r).field_0.field_0.z;
  dVar14 = (m->start_pos).field_0.field_0.z;
  dVar15 = (m->axes_r).field_0.field_0.x;
  dVar12 = (m->start_pos).field_0.field_0.x;
  dVar11 = (m->start_v + move_time * m->half_accel) * move_time;
  sk[1].gen_steps_pre_active =
       (m->start_pos).field_0.field_0.y + dVar11 * (m->axes_r).field_0.field_0.y;
  sk[1].gen_steps_post_active = dVar14 + dVar11 * dVar16;
  *(double *)&sk[1].tq = dVar12 + dVar11 * dVar15;
  if (iVar8 != 0) {
    dVar11 = 0.0;
                    /* Unresolved local var: double res@[???]
                       Unresolved local var: int num_pulses@[???]
                       Unresolved local var: int i@[???] */
    if (0 < iVar8) {
      iVar4 = 0;
      psVar2 = sk;
      do {
                    /* Unresolved local var: double t@[???]
                       Unresolved local var: double a@[???] */
        psVar1 = psVar2 + 2;
        pmVar3 = m;
        for (dVar12 = move_time + psVar2[2].last_move_time; dVar12 < 0.0;
            dVar12 = dVar12 + (double)plVar5[-9]) {
                    /* Unresolved local var: list_node * __mptr@[???] */
          plVar5 = (pmVar3->node).prev;
          pmVar3 = (move *)(plVar5 + -10);
        }
        lVar13 = (list_node)pmVar3->move_t;
        if ((double)lVar13 < dVar12) {
          do {
            dVar12 = dVar12 - (double)lVar13;
                    /* Unresolved local var: list_node * __mptr@[???] */
            plVar5 = (pmVar3->node).next;
            pmVar3 = (move *)(plVar5 + -10);
            lVar13 = plVar5[-9];
          } while ((double)lVar13 < dVar12);
        }
                    /* Unresolved local var: double axis_r@[???]
                       Unresolved local var: double start_pos@[???]
                       Unresolved local var: double move_dist@[???] */
        iVar4 = iVar4 + 1;
        psVar2 = (stepper_kinematics *)&psVar2->sc;
        dVar11 = dVar11 + *(double *)&psVar1->tq *
                          ((pmVar3->start_pos).field_0.field_0.x +
                          (pmVar3->axes_r).field_0.field_0.x *
                          (pmVar3->start_v + pmVar3->half_accel * dVar12) * dVar12);
      } while (iVar8 != iVar4);
    }
    *(double *)&sk[1].tq = dVar11;
  }
  if (ptVar7 != (trapq *)0x0) {
    dVar11 = 0.0;
                    /* Unresolved local var: double res@[???]
                       Unresolved local var: int num_pulses@[???]
                       Unresolved local var: int i@[???] */
    if (0 < (int)ptVar7) {
      ptVar9 = (trapq *)0x0;
      psVar2 = sk;
      do {
                    /* Unresolved local var: double t@[???]
                       Unresolved local var: double a@[???] */
        psVar1 = psVar2 + 3;
        pmVar3 = m;
        for (dVar12 = move_time + psVar2[3].gen_steps_pre_active; dVar12 < 0.0;
            dVar12 = dVar12 + (double)plVar5[-9]) {
                    /* Unresolved local var: list_node * __mptr@[???] */
          plVar5 = (pmVar3->node).prev;
          pmVar3 = (move *)(plVar5 + -10);
        }
        lVar13 = (list_node)pmVar3->move_t;
        if ((double)lVar13 < dVar12) {
          do {
            dVar12 = dVar12 - (double)lVar13;
                    /* Unresolved local var: list_node * __mptr@[???] */
            plVar5 = (pmVar3->node).next;
            pmVar3 = (move *)(plVar5 + -10);
            lVar13 = plVar5[-9];
          } while ((double)lVar13 < dVar12);
        }
                    /* Unresolved local var: double axis_r@[???]
                       Unresolved local var: double start_pos@[???]
                       Unresolved local var: double move_dist@[???] */
        ptVar9 = (trapq *)((int)&(ptVar9->moves).root.next + 1);
        psVar2 = (stepper_kinematics *)&psVar2->sc;
        dVar11 = dVar11 + psVar1->gen_steps_post_active *
                          ((pmVar3->start_pos).field_0.field_0.y +
                          (pmVar3->axes_r).field_0.field_0.y *
                          (pmVar3->start_v + dVar12 * pmVar3->half_accel) * dVar12);
      } while (ptVar9 != ptVar7);
    }
    sk[1].gen_steps_pre_active = dVar11;
  }
                    /* WARNING: Could not recover jumptable at 0x000123d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar10 = (**(code **)(iVar6 + 0x40))((int)DAT_00012548,iVar6,&sk[1].commanded_pos);
  return (double)CONCAT44(extraout_s1,uVar10);
}



/* ===== shaper_y_calc_position @ 00012550 size=244 ===== */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00012574 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* DWARF original prototype: double shaper_y_calc_position(stepper_kinematics * sk, move * m, double
   move_time, stepper_kinematics * sk, move * m, double move_time) */

double shaper_y_calc_position
                 (stepper_kinematics *sk,move *m,double move_time,stepper_kinematics *sk_1,move *m_1
                 ,double move_time_1)

{
  trapq *ptVar1;
  stepper_kinematics *psVar2;
  move *pmVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  trapq *ptVar5;
  list_node *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  list_node lVar10;
  double dVar11;
  
                    /* Unresolved local var: input_shaper * is@[DW_OP_reg0(r0)]
                       Unresolved local var: stepper_kinematics * __mptr@[???]
                       Unresolved local var: input_shaper * is@[???] */
  ptVar5 = sk[3].tq;
  iVar4 = *(int *)&sk[1].step_dist;
  UNRECOVERED_JUMPTABLE_00 = *(code **)(iVar4 + 0x40);
  uVar8 = (undefined4)((ulonglong)move_time >> 0x20);
  if (ptVar5 != (trapq *)0x0) {
    dVar11 = DAT_00012648;
    if (0 < (int)ptVar5) {
      dVar11 = 0.0;
      ptVar1 = (trapq *)0x0;
      psVar2 = sk;
      do {
                    /* Unresolved local var: double t@[???]
                       Unresolved local var: double a@[???] */
        pmVar3 = m;
        for (dVar9 = move_time + psVar2[3].gen_steps_pre_active; dVar9 < 0.0;
            dVar9 = dVar9 + (double)plVar6[-9]) {
                    /* Unresolved local var: list_node * __mptr@[???] */
          plVar6 = (pmVar3->node).prev;
          pmVar3 = (move *)(plVar6 + -10);
        }
        lVar10 = (list_node)pmVar3->move_t;
        if ((double)lVar10 < dVar9) {
          do {
            dVar9 = dVar9 - (double)lVar10;
                    /* Unresolved local var: list_node * __mptr@[???] */
            plVar6 = (pmVar3->node).next;
            pmVar3 = (move *)(plVar6 + -10);
            lVar10 = plVar6[-9];
          } while ((double)lVar10 < dVar9);
        }
                    /* Unresolved local var: double axis_r@[???]
                       Unresolved local var: double start_pos@[???]
                       Unresolved local var: double move_dist@[???] */
        ptVar1 = (trapq *)((int)&(ptVar1->moves).root.next + 1);
        sk_1 = (stepper_kinematics *)&psVar2->sc;
        dVar11 = dVar11 + psVar2[3].gen_steps_post_active *
                          ((pmVar3->start_pos).field_0.field_0.y +
                          (pmVar3->axes_r).field_0.field_0.y *
                          (pmVar3->start_v + dVar9 * pmVar3->half_accel) * dVar9);
        psVar2 = sk_1;
      } while (ptVar5 != ptVar1);
    }
    sk[1].gen_steps_pre_active = dVar11;
    uVar7 = (undefined4)DAT_00012650;
                    /* WARNING: Could not recover jumptable at 0x00012640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(uVar7,iVar4,&sk[1].commanded_pos,sk_1);
    return (double)CONCAT44(uVar8,uVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00012574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(SUB84(move_time,0),uVar8,SUB84(move_time_1,0),iVar4);
  return move_time;
}



/* ===== shaper_x_calc_position @ 00012658 size=244 ===== */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x0001267c */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* DWARF original prototype: double shaper_x_calc_position(stepper_kinematics * sk, move * m, double
   move_time, stepper_kinematics * sk, move * m, double move_time) */

double shaper_x_calc_position
                 (stepper_kinematics *sk,move *m,double move_time,stepper_kinematics *sk_1,move *m_1
                 ,double move_time_1)

{
  int iVar1;
  stepper_kinematics *psVar2;
  move *pmVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  int iVar5;
  list_node *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  list_node lVar10;
  double dVar11;
  
                    /* Unresolved local var: input_shaper * is@[DW_OP_reg0(r0)]
                       Unresolved local var: stepper_kinematics * __mptr@[???]
                       Unresolved local var: input_shaper * is@[???] */
  iVar5 = *(int *)&sk[2].last_flush_time;
  iVar4 = *(int *)&sk[1].step_dist;
  UNRECOVERED_JUMPTABLE_00 = *(code **)(iVar4 + 0x40);
  uVar8 = (undefined4)((ulonglong)move_time >> 0x20);
  if (iVar5 != 0) {
    dVar11 = DAT_00012750;
    if (0 < iVar5) {
      dVar11 = 0.0;
      iVar1 = 0;
      psVar2 = sk;
      do {
                    /* Unresolved local var: double t@[???]
                       Unresolved local var: double a@[???] */
        pmVar3 = m;
        for (dVar9 = move_time + psVar2[2].last_move_time; dVar9 < 0.0;
            dVar9 = dVar9 + (double)plVar6[-9]) {
                    /* Unresolved local var: list_node * __mptr@[???] */
          plVar6 = (pmVar3->node).prev;
          pmVar3 = (move *)(plVar6 + -10);
        }
        lVar10 = (list_node)pmVar3->move_t;
        if ((double)lVar10 < dVar9) {
          do {
            dVar9 = dVar9 - (double)lVar10;
                    /* Unresolved local var: list_node * __mptr@[???] */
            plVar6 = (pmVar3->node).next;
            pmVar3 = (move *)(plVar6 + -10);
            lVar10 = plVar6[-9];
          } while ((double)lVar10 < dVar9);
        }
                    /* Unresolved local var: double axis_r@[???]
                       Unresolved local var: double start_pos@[???]
                       Unresolved local var: double move_dist@[???] */
        iVar1 = iVar1 + 1;
        sk_1 = (stepper_kinematics *)&psVar2->sc;
        dVar11 = dVar11 + *(double *)&psVar2[2].tq *
                          ((pmVar3->start_pos).field_0.field_0.x +
                          (pmVar3->axes_r).field_0.field_0.x *
                          (pmVar3->start_v + dVar9 * pmVar3->half_accel) * dVar9);
        psVar2 = sk_1;
      } while (iVar5 != iVar1);
    }
    *(double *)&sk[1].tq = dVar11;
    uVar7 = (undefined4)DAT_00012758;
                    /* WARNING: Could not recover jumptable at 0x00012748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(uVar7,iVar4,&sk[1].commanded_pos,sk_1);
    return (double)CONCAT44(uVar8,uVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x0001267c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(SUB84(move_time,0),uVar8,SUB84(move_time_1,0),iVar4);
  return move_time;
}



/* ===== init_shaper @ 00012760 size=208 ===== */

/* DWARF original prototype: int init_shaper(int n, double * a, double * t, shaper_pulses * sp, int
   n, shaper_pulses * sp, double * a, double * t) */

int init_shaper(int n,double *a,double *t,shaper_pulses *sp,int n_1,shaper_pulses *sp_1,double *a_1,
               double *t_1)

{
  int iVar1;
  shaper_pulses *psVar2;
  double *pdVar3;
  double *pdVar4;
  shaper_pulses *psVar5;
  double dVar6;
  double dVar7;
  
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: double sum_a@[???]
                       Unresolved local var: double inv_a@[???] */
  if ((uint)n < 6) {
    if (n != 0) {
      dVar6 = 0.0;
      pdVar4 = a;
      do {
        dVar7 = *pdVar4;
        pdVar4 = pdVar4 + 1;
        dVar6 = dVar6 + dVar7;
      } while (pdVar4 != a + n);
      psVar2 = (shaper_pulses *)&sp->pulses[n + -1].a;
      do {
        dVar7 = *a;
        a = a + 1;
        psVar5 = (shaper_pulses *)(psVar2[-1].pulses + 4);
        *(double *)psVar2 = dVar7 * (1.0 / dVar6);
        dVar7 = *t;
        t = t + 1;
        psVar2[-1].pulses[4].a = -dVar7;
        psVar2 = psVar5;
      } while (sp != psVar5);
      dVar6 = 0.0;
      pdVar4 = &psVar5->pulses[n + -1].a;
      psVar5->num_pulses = n;
      do {
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: double sum_a@[???]
                       Unresolved local var: double inv_a@[???]
                       Unresolved local var: double ts@[???] */
        pdVar3 = &psVar2->pulses[0].a;
        dVar6 = dVar6 + psVar2->pulses[0].a * psVar2->pulses[0].t;
        psVar2 = (shaper_pulses *)pdVar3;
      } while (pdVar4 != pdVar3);
      do {
        pdVar3 = &psVar5->pulses[0].a;
        psVar5->pulses[0].t = psVar5->pulses[0].t - dVar6;
        psVar5 = (shaper_pulses *)pdVar3;
      } while (pdVar4 != pdVar3);
      return 0;
    }
    sp->num_pulses = 0;
    iVar1 = 0;
  }
  else {
    iVar1 = -1;
    sp->num_pulses = 0;
  }
  return iVar1;
}



/* ===== polar_stepper_angle_post_fixup @ 00012830 size=64 ===== */

void polar_stepper_angle_post_fixup(stepper_kinematics *sk)

{
  double dVar1;
  
  dVar1 = sk->commanded_pos;
  if (DAT_00012870 <= dVar1) {
    if (DAT_00012880 < dVar1) {
      sk->commanded_pos = dVar1 - DAT_00012878;
    }
    return;
  }
  sk->commanded_pos = dVar1 + DAT_00012878;
  return;
}



/* ===== pa_move_integrate @ 00012888 size=216 ===== */

double pa_move_integrate(move *m,double pressure_advance,double base,double start,double end,
                        double time_offset)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
                    /* Unresolved local var: int can_pressure_advance@[???]
                       Unresolved local var: double dyna_PA@[???]
                       Unresolved local var: double start_v@[???]
                       Unresolved local var: double ha@[???]
                       Unresolved local var: double iext@[???]
                       Unresolved local var: double wgt_ext@[???] */
  dVar3 = DAT_00012960;
  if (start >= 0.0) {
    dVar3 = start * start;
  }
  dVar4 = (m->axes_r).field_0.field_0.z;
  if (start < 0.0) {
    start = dVar3;
  }
  if (m->move_t < end) {
    end = m->move_t;
  }
  if ((m->axes_r).field_0.field_0.y == 0.0) {
    dVar1 = 0.0;
    pressure_advance = 0.0;
  }
  else if (dVar4 <= 0.0) {
    dVar1 = pressure_advance + pressure_advance;
  }
  else {
    dVar1 = dVar4 + dVar4;
    pressure_advance = dVar4;
  }
  dVar2 = m->half_accel;
                    /* Unresolved local var: double half_b@[???]
                       Unresolved local var: double third_v@[???]
                       Unresolved local var: double eighth_a@[???]
                       Unresolved local var: double si@[???]
                       Unresolved local var: double ei@[???] */
                    /* Unresolved local var: double half_v@[???]
                       Unresolved local var: double sixth_a@[???]
                       Unresolved local var: double si@[???]
                       Unresolved local var: double ei@[???] */
  dVar1 = m->start_v + dVar2 * dVar1;
  dVar4 = base + m->start_v * pressure_advance;
  return ((end * dVar2 * 0.25 + dVar1 * DAT_00012968) * end + dVar4 * 0.5) * end * end +
         -((start * dVar2 * 0.25 + dVar1 * DAT_00012968) * start + dVar4 * 0.5) * dVar3 +
         -time_offset *
         ((dVar4 + end * (end * dVar2 * DAT_00012968 + dVar1 * 0.5)) * end +
         -start * (dVar4 + start * (start * dVar2 * DAT_00012968 + dVar1 * 0.5)));
}



/* ===== extruder_calc_position @ 00012970 size=316 ===== */

/* DWARF original prototype: double extruder_calc_position(stepper_kinematics * sk, move * m, double
   move_time, move * m, double move_time, stepper_kinematics * sk) */

double extruder_calc_position
                 (stepper_kinematics *sk,move *m,double move_time,move *m_1,double move_time_1,
                 stepper_kinematics *sk_1)

{
  move *m_00;
  move *extraout_r1;
  move *pmVar1;
  move *extraout_r1_00;
  move *extraout_r1_01;
  list_node *plVar2;
  int extraout_r2;
  int extraout_r3;
  int iVar3;
  int extraout_r3_00;
  int extraout_r3_01;
  move *m_01;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double pressure_advance;
  
                    /* Unresolved local var: extruder_stepper * es@[DW_OP_reg0(r0)]
                       Unresolved local var: double hst@[???]
                       Unresolved local var: double area@[???]
                       Unresolved local var: stepper_kinematics * __mptr@[???]
                       Unresolved local var: extruder_stepper * es@[???] */
  dVar6 = sk[1].commanded_pos;
  dVar7 = 0.0;
  dVar8 = (m->start_pos).field_0.field_0.x;
  if (dVar6 != 0.0) {
                    /* Unresolved local var: double res@[???]
                       Unresolved local var: double start@[???]
                       Unresolved local var: double end@[???]
                       Unresolved local var: double start_base@[???]
                       Unresolved local var: move * prev@[???] */
    dVar9 = move_time - dVar6;
    pressure_advance = sk[1].step_dist;
    dVar6 = dVar6 + move_time;
    dVar4 = pa_move_integrate(m,pressure_advance,0.0,dVar9,move_time,dVar9);
    dVar4 = dVar4 + dVar7;
    dVar7 = pa_move_integrate(m_00,pressure_advance,dVar7,move_time,dVar6,dVar6);
    dVar4 = dVar4 - dVar7;
    m_01 = extraout_r1;
    pmVar1 = extraout_r1;
    iVar3 = extraout_r3;
    while (dVar9 < 0.0) {
                    /* Unresolved local var: double base@[???]
                       Unresolved local var: list_node * __mptr@[???] */
      plVar2 = (m_01->node).prev;
      m_01 = (move *)(plVar2 + -10);
      dVar9 = dVar9 + (double)plVar2[-9];
      dVar7 = pa_move_integrate(m_01,pressure_advance,(double)plVar2[-6] - dVar8,dVar9,
                                (double)plVar2[-9],dVar9);
      dVar4 = dVar4 + dVar7;
      pmVar1 = extraout_r1_01;
      iVar3 = extraout_r3_01;
    }
    dVar7 = pmVar1->move_t;
    if (dVar7 < dVar6) {
                    /* Unresolved local var: double base@[???] */
      dVar9 = 0.0;
      do {
        dVar6 = dVar6 - dVar7;
                    /* Unresolved local var: list_node * __mptr@[???] */
        plVar2 = (pmVar1->node).next;
        dVar5 = pa_move_integrate((move *)(plVar2 + -10),pressure_advance,(double)plVar2[-6] - dVar8
                                  ,dVar9,dVar6,dVar6);
        dVar7 = *(double *)(extraout_r2 + -0x48);
        dVar4 = dVar4 - dVar5;
        pmVar1 = extraout_r1_00;
        iVar3 = extraout_r3_00;
      } while (dVar7 < dVar6);
    }
    return dVar8 + *(double *)(iVar3 + 0x58) * dVar4;
  }
                    /* Unresolved local var: extruder_stepper * es@[???]
                       Unresolved local var: double hst@[???]
                       Unresolved local var: double area@[???] */
  return dVar8 + move_time * (m->start_v + move_time * m->half_accel);
}



/* ===== corexz_stepper_minus_calc_position @ 00012aac size=48 ===== */

double corexz_stepper_minus_calc_position(stepper_kinematics *sk,move *m,double move_time)

{
  double dVar1;
  
                    /* Unresolved local var: coord c@[???]
                       Unresolved local var: double move_dist@[???] */
  dVar1 = (m->start_v + move_time * m->half_accel) * move_time;
  return ((m->start_pos).field_0.field_0.x + dVar1 * (m->axes_r).field_0.field_0.x) -
         ((m->start_pos).field_0.field_0.z + dVar1 * (m->axes_r).field_0.field_0.z);
}



/* ===== corexz_stepper_plus_calc_position @ 00012adc size=48 ===== */

double corexz_stepper_plus_calc_position(stepper_kinematics *sk,move *m,double move_time)

{
  double dVar1;
  
                    /* Unresolved local var: coord c@[???]
                       Unresolved local var: double move_dist@[???] */
  dVar1 = (m->start_v + move_time * m->half_accel) * move_time;
  return (m->start_pos).field_0.field_0.x + dVar1 * (m->axes_r).field_0.field_0.x +
         (m->start_pos).field_0.field_0.z + dVar1 * (m->axes_r).field_0.field_0.z;
}



/* ===== corexy_stepper_minus_calc_position @ 00012b0c size=48 ===== */

double corexy_stepper_minus_calc_position(stepper_kinematics *sk,move *m,double move_time)

{
  double dVar1;
  
                    /* Unresolved local var: coord c@[???]
                       Unresolved local var: double move_dist@[???] */
  dVar1 = (m->start_v + move_time * m->half_accel) * move_time;
  return ((m->start_pos).field_0.field_0.x + dVar1 * (m->axes_r).field_0.field_0.x) -
         ((m->start_pos).field_0.field_0.y + dVar1 * (m->axes_r).field_0.field_0.y);
}



/* ===== corexy_stepper_plus_calc_position @ 00012b3c size=48 ===== */

double corexy_stepper_plus_calc_position(stepper_kinematics *sk,move *m,double move_time)

{
  double dVar1;
  
                    /* Unresolved local var: coord c@[???]
                       Unresolved local var: double move_dist@[???] */
  dVar1 = (m->start_v + move_time * m->half_accel) * move_time;
  return (m->start_pos).field_0.field_0.x + dVar1 * (m->axes_r).field_0.field_0.x +
         (m->start_pos).field_0.field_0.y + dVar1 * (m->axes_r).field_0.field_0.y;
}



/* ===== cart_reverse_stepper_z_calc_position @ 00012b6c size=36 ===== */

double cart_reverse_stepper_z_calc_position(stepper_kinematics *sk,move *m,double move_time)

{
                    /* Unresolved local var: double move_dist@[???] */
  return -((m->start_pos).field_0.field_0.z +
          (m->start_v + move_time * m->half_accel) * move_time * (m->axes_r).field_0.field_0.z);
}



/* ===== cart_reverse_stepper_y_calc_position @ 00012b90 size=36 ===== */

double cart_reverse_stepper_y_calc_position(stepper_kinematics *sk,move *m,double move_time)

{
                    /* Unresolved local var: double move_dist@[???] */
  return -((m->start_pos).field_0.field_0.y +
          (m->start_v + move_time * m->half_accel) * move_time * (m->axes_r).field_0.field_0.y);
}



/* ===== cart_reverse_stepper_x_calc_position @ 00012bb4 size=36 ===== */

double cart_reverse_stepper_x_calc_position(stepper_kinematics *sk,move *m,double move_time)

{
                    /* Unresolved local var: double move_dist@[???] */
  return -((m->start_pos).field_0.field_0.x +
          (m->start_v + move_time * m->half_accel) * move_time * (m->axes_r).field_0.field_0.x);
}



/* ===== cart_stepper_z_calc_position @ 00012bd8 size=36 ===== */

double cart_stepper_z_calc_position(stepper_kinematics *sk,move *m,double move_time)

{
                    /* Unresolved local var: double move_dist@[???] */
  return (m->start_pos).field_0.field_0.z +
         (m->start_v + move_time * m->half_accel) * move_time * (m->axes_r).field_0.field_0.z;
}



/* ===== cart_stepper_y_calc_position @ 00012bfc size=36 ===== */

double cart_stepper_y_calc_position(stepper_kinematics *sk,move *m,double move_time)

{
                    /* Unresolved local var: double move_dist@[???] */
  return (m->start_pos).field_0.field_0.y +
         (m->start_v + move_time * m->half_accel) * move_time * (m->axes_r).field_0.field_0.y;
}



/* ===== cart_stepper_x_calc_position @ 00012c20 size=36 ===== */

double cart_stepper_x_calc_position(stepper_kinematics *sk,move *m,double move_time)

{
                    /* Unresolved local var: double move_dist@[???] */
  return (m->start_pos).field_0.field_0.x +
         (m->start_v + move_time * m->half_accel) * move_time * (m->axes_r).field_0.field_0.x;
}



/* ===== free_history @ 00012c44 size=112 ===== */

void free_history(stepcompress *sc,uint64_t end_clock)

{
  list_node *plVar1;
  list_node *plVar2;
  list_node *__ptr;
  list_node *plVar3;
  bool bVar4;
  
  plVar2 = (list_node *)(end_clock >> 0x20);
  if (&(sc->history_list).root == (sc->history_list).root.next) {
    return;
  }
                    /* Unresolved local var: list_node * __mptr@[???]
                       Unresolved local var: history_steps * hs@[???] */
  __ptr = (sc->history_list).root.prev;
  bVar4 = __ptr[2].prev <= plVar2;
  if (plVar2 == __ptr[2].prev) {
    bVar4 = __ptr[2].next <= (list_node *)end_clock;
  }
  if (!bVar4) {
    return;
  }
  do {
    plVar1 = __ptr->next;
    plVar3 = __ptr->prev;
                    /* Unresolved local var: list_node * prev@[???]
                       Unresolved local var: list_node * next@[???] */
    plVar1->prev = plVar3;
    plVar3->next = plVar1;
    free(__ptr);
    if ((sc->history_list).root.next == &(sc->history_list).root) {
      return;
    }
    __ptr = (sc->history_list).root.prev;
    bVar4 = plVar2 <= __ptr[2].prev;
    if (__ptr[2].prev == plVar2) {
      bVar4 = (list_node *)end_clock <= __ptr[2].next;
    }
  } while (!bVar4 || (list_node)end_clock == __ptr[2]);
  return;
}



/* ===== calc_last_step_print_time @ 00012cb4 size=100 ===== */

void calc_last_step_print_time(stepcompress *sc)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 extraout_s0;
  undefined4 extraout_s1;
  UDItype end_clock;
  
                    /* Unresolved local var: double lsc@[???] */
  uVar1 = __floatundidf((int)sc->last_step_clock,*(undefined4 *)((int)&sc->last_step_clock + 4));
  sc->last_step_print_time =
       sc->mcu_time_offset + ((double)CONCAT44(extraout_r1,uVar1) - 0.5) / sc->mcu_freq;
  if ((double)CONCAT44(extraout_r1,uVar1) <= sc->mcu_freq * 30.0) {
    return;
  }
  end_clock = __fixunsdfdi((DFtype)CONCAT44(extraout_s1,extraout_s0));
  free_history(sc,end_clock);
  return;
}



/* ===== move_alloc @ 00012d18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

move * move_alloc(void)

{
  move *pmVar1;
  
                    /* Unresolved local var: move * m@[???] */
  pmVar1 = calloc(0x58,1);
  return pmVar1;
}



/* ===== trapq_add_move @ 00012d24 size=208 ===== */

void trapq_add_move(trapq *tq,move *m)

{
  move *pmVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  list_node *plVar5;
  list_node *plVar6;
  list_node *plVar7;
  list_node lVar8;
  double dVar9;
  double dVar10;
  
                    /* Unresolved local var: list_node * __mptr@[???]
                       Unresolved local var: move * tail_sentinel@[???]
                       Unresolved local var: move * prev@[???] */
  plVar6 = (tq->moves).root.prev;
                    /* Unresolved local var: list_node * __mptr@[???] */
  plVar7 = plVar6->prev;
  if (m->print_time <= (double)plVar7[-10] + (double)plVar7[-9]) goto LAB_00012d50;
                    /* Unresolved local var: move * null_move@[???] */
  pmVar1 = move_alloc();
  lVar8 = plVar7[-10];
  uVar2 = *(undefined4 *)((int)&(m->start_pos).field_0 + 4);
  uVar3 = *(undefined4 *)((int)&(m->start_pos).field_0 + 8);
  uVar4 = *(undefined4 *)((int)&(m->start_pos).field_0 + 0xc);
  *(undefined4 *)&(pmVar1->start_pos).field_0 = *(undefined4 *)&(m->start_pos).field_0;
  *(undefined4 *)((int)&(pmVar1->start_pos).field_0 + 4) = uVar2;
  *(undefined4 *)((int)&(pmVar1->start_pos).field_0 + 8) = uVar3;
  *(undefined4 *)((int)&(pmVar1->start_pos).field_0 + 0xc) = uVar4;
  uVar2 = *(undefined4 *)((int)&(m->start_pos).field_0 + 0x14);
  *(undefined4 *)((int)&(pmVar1->start_pos).field_0 + 0x10) =
       *(undefined4 *)((int)&(m->start_pos).field_0 + 0x10);
  *(undefined4 *)((int)&(pmVar1->start_pos).field_0 + 0x14) = uVar2;
  if ((double)lVar8 == 0.0) {
    dVar10 = m->print_time;
    if (dVar10 <= 1.0) goto LAB_00012da4;
    dVar9 = dVar10 - 1.0;
  }
  else {
    dVar10 = m->print_time;
LAB_00012da4:
    dVar9 = (double)lVar8 + (double)plVar7[-9];
  }
  plVar5 = plVar6->prev;
  pmVar1->print_time = dVar9;
  pmVar1->move_t = dVar10 - dVar9;
  plVar6->prev = &pmVar1->node;
  (pmVar1->node).prev = plVar5;
  plVar7 = plVar6->prev;
  (pmVar1->node).next = plVar6;
  plVar5->next = &pmVar1->node;
LAB_00012d50:
  plVar6->prev = &m->node;
  (m->node).next = plVar6;
  (m->node).prev = plVar7;
  plVar7->next = &m->node;
  plVar6[-10].next = (list_node *)0x0;
  plVar6[-10].prev = (list_node *)0x0;
  return;
}



/* ===== winch_stepper_calc_position @ 00012df4 size=132 ===== */

double winch_stepper_calc_position(stepper_kinematics *sk,move *m,double move_time)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
                    /* Unresolved local var: winch_stepper * hs@[DW_OP_reg0(r0)]
                       Unresolved local var: coord c@[???]
                       Unresolved local var: double dx@[???]
                       Unresolved local var: double dy@[???]
                       Unresolved local var: double dz@[???]
                       Unresolved local var: double move_dist@[???]
                       Unresolved local var: stepper_kinematics * __mptr@[???] */
  dVar2 = (m->start_v + move_time * m->half_accel) * move_time;
  dVar1 = sk[1].commanded_pos -
          ((m->start_pos).field_0.field_0.y + dVar2 * (m->axes_r).field_0.field_0.y);
  dVar3 = sk[1].step_dist -
          ((m->start_pos).field_0.field_0.x + dVar2 * (m->axes_r).field_0.field_0.x);
  dVar2 = *(double *)&sk[1].sc -
          ((m->start_pos).field_0.field_0.z + dVar2 * (m->axes_r).field_0.field_0.z);
  dVar1 = dVar1 * dVar1 + dVar3 * dVar3 + dVar2 * dVar2;
  if (dVar1 < 0.0) {
    sqrt(dVar1);
  }
  return SQRT(dVar1);
}



/* ===== polar_stepper_radius_calc_position @ 00012e78 size=92 ===== */

double polar_stepper_radius_calc_position(stepper_kinematics *sk,move *m,double move_time)

{
  double dVar1;
  double dVar2;
  
                    /* Unresolved local var: coord c@[???]
                       Unresolved local var: double move_dist@[???] */
  dVar1 = (m->start_v + move_time * m->half_accel) * move_time;
  dVar2 = (m->start_pos).field_0.field_0.y + dVar1 * (m->axes_r).field_0.field_0.y;
  dVar1 = (m->start_pos).field_0.field_0.x + dVar1 * (m->axes_r).field_0.field_0.x;
  dVar1 = dVar2 * dVar2 + dVar1 * dVar1;
  if (dVar1 < 0.0) {
    sqrt(dVar1);
  }
  return SQRT(dVar1);
}



/* ===== deltesian_stepper_calc_position @ 00012ed4 size=120 ===== */

double deltesian_stepper_calc_position(stepper_kinematics *sk,move *m,double move_time)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
                    /* Unresolved local var: deltesian_stepper * ds@[DW_OP_reg0(r0)]
                       Unresolved local var: coord c@[???]
                       Unresolved local var: double dx@[???]
                       Unresolved local var: double move_dist@[???]
                       Unresolved local var: stepper_kinematics * __mptr@[???] */
  dVar4 = (m->axes_r).field_0.field_0.z;
  dVar3 = (m->start_pos).field_0.field_0.z;
  dVar1 = (m->start_v + move_time * m->half_accel) * move_time;
  dVar2 = ((m->start_pos).field_0.field_0.x + dVar1 * (m->axes_r).field_0.field_0.x) -
          sk[1].commanded_pos;
  dVar2 = sk[1].step_dist + -dVar2 * dVar2;
  if (dVar2 < 0.0) {
    sqrt(dVar2);
  }
  return SQRT(dVar2) + dVar3 + dVar1 * dVar4;
}



/* ===== delta_stepper_calc_position @ 00012f4c size=148 ===== */

double delta_stepper_calc_position(stepper_kinematics *sk,move *m,double move_time)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
                    /* Unresolved local var: delta_stepper * ds@[DW_OP_reg0(r0)]
                       Unresolved local var: coord c@[???]
                       Unresolved local var: double dx@[???]
                       Unresolved local var: double dy@[???]
                       Unresolved local var: double move_dist@[???]
                       Unresolved local var: stepper_kinematics * __mptr@[???] */
  dVar5 = (m->axes_r).field_0.field_0.z;
  dVar4 = (m->start_pos).field_0.field_0.z;
  dVar1 = (m->start_v + move_time * m->half_accel) * move_time;
  dVar3 = sk[1].commanded_pos -
          ((m->start_pos).field_0.field_0.x + dVar1 * (m->axes_r).field_0.field_0.x);
  dVar2 = *(double *)&sk[1].sc -
          ((m->start_pos).field_0.field_0.y + dVar1 * (m->axes_r).field_0.field_0.y);
  dVar2 = sk[1].step_dist + -dVar3 * dVar3 + -dVar2 * dVar2;
  if (dVar2 < 0.0) {
    sqrt(dVar2);
  }
  return SQRT(dVar2) + dVar4 + dVar1 * dVar5;
}



/* ===== default_logger @ 00012fe0 size=48 ===== */

void default_logger(char *msg)

{
  (*(code *)PTR_fprintf_00029078)
            (**(undefined4 **)(DAT_00013004 + 0x12ff4 + DAT_00013008),DAT_0001300c + 0x13000,msg);
  return;
}



/* ===== rotary_stepper_calc_position @ 00013010 size=232 ===== */

double rotary_stepper_calc_position(stepper_kinematics *sk,move *m,double move_time)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
                    /* Unresolved local var: rotary_stepper * rs@[DW_OP_reg0(r0)]
                       Unresolved local var: coord c@[???]
                       Unresolved local var: double sjz@[???]
                       Unresolved local var: double sjx@[???]
                       Unresolved local var: double sjy@[???]
                       Unresolved local var: double move_dist@[???]
                       Unresolved local var: stepper_kinematics * __mptr@[???] */
                    /* Unresolved local var: double inv_dy@[???]
                       Unresolved local var: double c1@[???]
                       Unresolved local var: double c2@[???]
                       Unresolved local var: double scale@[???]
                       Unresolved local var: double scaled_elbow_x@[???]
                       Unresolved local var: double scaled_elbow_y@[???] */
  dVar1 = (m->start_v + move_time * m->half_accel) * move_time;
  dVar4 = (m->start_pos).field_0.field_0.y + dVar1 * (m->axes_r).field_0.field_0.y;
  dVar2 = (m->start_pos).field_0.field_0.x + dVar1 * (m->axes_r).field_0.field_0.x;
  dVar1 = ((m->start_pos).field_0.field_0.z + dVar1 * (m->axes_r).field_0.field_0.z) -
          sk[1].last_flush_time;
  dVar3 = -(dVar2 * sk[1].commanded_pos) + sk[1].step_dist * dVar4;
  dVar2 = (sk[1].commanded_pos * dVar4 + sk[1].step_dist * dVar2) - *(double *)&sk[1].sc;
  dVar4 = dVar2 * (1.0 / dVar1);
  dVar2 = ((dVar1 * dVar1 + dVar2 * dVar2 + sk[1].last_move_time) -
          (*(double *)&sk[1].tq + -dVar3 * dVar3)) * (1.0 / dVar1) * 0.5;
  dVar3 = dVar4 * dVar4 + 1.0;
  dVar1 = -(dVar2 * dVar2) + sk[1].last_move_time * dVar3;
  if (dVar1 < 0.0) {
    sqrt(dVar1);
  }
  dVar1 = dVar2 * dVar4 + SQRT(dVar1);
  dVar1 = atan2(-(dVar1 * dVar4) + dVar2 * dVar3,dVar1);
  return dVar1;
}



/* ===== polar_stepper_angle_calc_position @ 000130f8 size=116 ===== */

double polar_stepper_angle_calc_position(stepper_kinematics *sk,move *m,double move_time)

{
  double dVar1;
  double dVar2;
  
                    /* Unresolved local var: coord c@[???]
                       Unresolved local var: double angle@[???]
                       Unresolved local var: double move_dist@[???] */
  dVar1 = (m->start_v + move_time * m->half_accel) * move_time;
  dVar1 = atan2((m->start_pos).field_0.field_0.y + dVar1 * (m->axes_r).field_0.field_0.y,
                (m->start_pos).field_0.field_0.x + dVar1 * (m->axes_r).field_0.field_0.x);
  dVar2 = dVar1 - sk->commanded_pos;
  if (dVar2 <= DAT_00013170) {
    if (dVar2 < DAT_00013180) {
      dVar1 = dVar1 + DAT_00013178;
    }
    return dVar1;
  }
  return dVar1 - DAT_00013178;
}



/* ===== trapq_extract_old @ 00013188 size=216 ===== */

int trapq_extract_old(trapq *tq,pull_move *p,int max,double start_time,double end_time)

{
  list_node *plVar1;
  int iVar2;
  pull_move *ppVar3;
  list_node *plVar4;
  list_node *plVar5;
  list_node *plVar6;
  list_node *plVar7;
  list_node *plVar8;
  list_node *plVar9;
  list_node *plVar10;
  list_node *plVar11;
  list_head *plVar12;
  list_node lVar13;
  list_node lVar14;
  list_node lVar15;
  list_node lVar16;
  
  plVar12 = &tq->history;
                    /* Unresolved local var: list_node * __mptr@[???]
                       Unresolved local var: int res@[???]
                       Unresolved local var: move * m@[???] */
  plVar1 = (plVar12->root).next;
  if (&plVar12->root != plVar1) {
    lVar13 = plVar1[-10];
    lVar15 = plVar1[-9];
    if ((start_time < (double)lVar13 + (double)lVar15) && (0 < max)) {
      iVar2 = 0;
      do {
        ppVar3 = p;
        if ((double)lVar13 < end_time) {
          lVar14 = plVar1[-7];
          iVar2 = iVar2 + 1;
          plVar6 = plVar1[-8].prev;
          ppVar3 = p + 1;
          plVar4 = plVar1[-6].next;
          plVar5 = plVar1[-6].prev;
          lVar16 = plVar1[-5];
          plVar10 = plVar1[-4].next;
          plVar11 = plVar1[-4].prev;
          plVar8 = plVar1[-3].next;
          plVar9 = plVar1[-3].prev;
          *(list_node **)&p->start_v = plVar1[-8].next;
          *(list_node **)((int)&p->start_v + 4) = plVar6;
          plVar6 = plVar1[-2].next;
          plVar7 = plVar1[-2].prev;
          *(list_node **)&p->start_x = plVar4;
          *(list_node **)((int)&p->start_x + 4) = plVar5;
          plVar4 = plVar1[-1].next;
          plVar5 = plVar1[-1].prev;
          p->print_time = (double)lVar13;
          *(list_node **)&p->start_z = plVar10;
          *(list_node **)((int)&p->start_z + 4) = plVar11;
          *(list_node **)&p->x_r = plVar8;
          *(list_node **)((int)&p->x_r + 4) = plVar9;
          p->move_t = (double)lVar15;
          *(list_node **)&p->y_r = plVar6;
          *(list_node **)((int)&p->y_r + 4) = plVar7;
          *(list_node **)&p->z_r = plVar4;
          *(list_node **)((int)&p->z_r + 4) = plVar5;
          p->accel = (double)lVar14 + (double)lVar14;
          p->start_y = (double)lVar16;
        }
                    /* Unresolved local var: list_node * __mptr@[???] */
        plVar1 = plVar1->next;
        if (&plVar12->root == plVar1) {
          return iVar2;
        }
        lVar13 = plVar1[-10];
        lVar15 = plVar1[-9];
        if ((double)lVar13 + (double)lVar15 <= start_time) {
          return iVar2;
        }
        p = ppVar3;
      } while (iVar2 < max);
      return iVar2;
    }
  }
  return 0;
}



/* ===== trapq_finalize_moves @ 00013260 size=320 ===== */

void trapq_finalize_moves(trapq *tq,double print_time)

{
  list_node *plVar1;
  list_node *plVar2;
  list_node *plVar3;
  list_node *plVar4;
  list_node *plVar5;
  double dVar6;
  list_node lVar7;
  
                    /* Unresolved local var: list_node * __mptr@[???]
                       Unresolved local var: move * head_sentinel@[???]
                       Unresolved local var: move * tail_sentinel@[???]
                       Unresolved local var: move * latest@[???]
                       Unresolved local var: double expire_time@[???] */
                    /* Unresolved local var: list_node * __mptr@[???] */
  plVar4 = (tq->moves).root.prev;
  plVar5 = (tq->moves).root.next;
LAB_00013280:
                    /* Unresolved local var: list_node * __mptr@[???]
                       Unresolved local var: move * m@[???] */
  plVar3 = plVar5->next;
  do {
    if (plVar4 + -10 == plVar3 + -10) {
      plVar4[-10].next = (list_node *)0x37e08000;
      plVar4[-10].prev = (list_node *)0x4341c379;
LAB_00013308:
      plVar4 = (tq->history).root.next;
      if (plVar4 == &(tq->history).root) {
        return;
      }
                    /* Unresolved local var: list_node * __mptr@[???] */
                    /* Unresolved local var: list_node * __mptr@[???]
                       Unresolved local var: move * m@[???] */
      plVar3 = (tq->history).root.prev;
      plVar5 = plVar3 + -10;
      dVar6 = ((double)plVar4[-10] + (double)plVar4[-9]) - 30.0;
      if (plVar4 + -10 != plVar5) {
        if (dVar6 < (double)plVar3[-9] + (double)plVar3[-10]) {
          return;
        }
        do {
          plVar1 = plVar3->next;
          plVar3 = plVar3->prev;
                    /* Unresolved local var: list_node * prev@[???]
                       Unresolved local var: list_node * next@[???] */
          plVar1->prev = plVar3;
          plVar3->next = plVar1;
          free(plVar5);
          plVar3 = (tq->history).root.prev;
          plVar5 = plVar3 + -10;
          if (plVar4 + -10 == plVar5) {
            return;
          }
        } while ((double)plVar3[-10] + (double)plVar3[-9] <= dVar6);
        return;
      }
      return;
    }
    if (print_time < (double)plVar3[-10] + (double)plVar3[-9]) goto LAB_00013308;
    lVar7 = plVar3[-8];
    plVar1 = plVar3->next;
    plVar2 = plVar3->prev;
                    /* Unresolved local var: list_node * prev@[???]
                       Unresolved local var: list_node * next@[???] */
    plVar1->prev = plVar2;
    plVar2->next = plVar1;
    if (((double)lVar7 == 0.0) && ((double)plVar3[-7] == 0.0)) break;
    plVar1 = (tq->history).root.next;
    plVar1->prev = plVar3;
    plVar3->next = plVar1;
    plVar3->prev = &(tq->history).root;
    (tq->history).root.next = plVar3;
    plVar3 = plVar5->next;
  } while( true );
  free(plVar3 + -10);
  goto LAB_00013280;
}



/* ===== trapq_set_position @ 000133a0 size=204 ===== */

void trapq_set_position(trapq *tq,double print_time,double pos_x,double pos_y,double pos_z)

{
  move *pmVar1;
  list_node *plVar2;
  list_node *plVar3;
  list_node *plVar4;
  list_head *plVar5;
  list_node lVar6;
  
                    /* Unresolved local var: move * m@[???] */
  trapq_finalize_moves(tq,DAT_00013470);
  plVar5 = &tq->history;
  plVar3 = (plVar5->root).next;
  if (plVar3 != &plVar5->root) {
                    /* Unresolved local var: list_node * __mptr@[???]
                       Unresolved local var: move * m@[???] */
    lVar6 = plVar3[-10];
    while (print_time <= (double)lVar6) {
      plVar2 = plVar3->next;
      plVar4 = plVar3->prev;
                    /* Unresolved local var: list_node * prev@[???]
                       Unresolved local var: list_node * next@[???] */
      plVar2->prev = plVar4;
      plVar4->next = plVar2;
      free(plVar3 + -10);
      plVar3 = (tq->history).root.next;
      if (&plVar5->root == plVar3) goto LAB_0001341c;
      lVar6 = plVar3[-10];
    }
    if (print_time < (double)lVar6 + (double)plVar3[-9]) {
      plVar3[-9] = (list_node)(print_time - (double)lVar6);
    }
  }
LAB_0001341c:
  pmVar1 = move_alloc();
  plVar3 = (tq->history).root.next;
  pmVar1->print_time = print_time;
  (pmVar1->start_pos).field_0.field_0.x = pos_x;
  (pmVar1->start_pos).field_0.field_0.y = pos_y;
  (pmVar1->start_pos).field_0.field_0.z = pos_z;
  plVar3->prev = &pmVar1->node;
  (pmVar1->node).prev = &plVar5->root;
  (tq->history).root.next = &pmVar1->node;
  (pmVar1->node).next = plVar3;
  return;
}



/* ===== trapq_check_sentinels @ 00013478 size=144 ===== */

void trapq_check_sentinels(trapq *tq)

{
  list_node *plVar1;
  list_node *plVar2;
  double dVar3;
  list_node lVar4;
  list_node lVar5;
  list_node lVar6;
  list_node lVar7;
  list_node lVar8;
  list_node lVar9;
  list_node lVar10;
  
                    /* Unresolved local var: list_node * __mptr@[???]
                       Unresolved local var: move * tail_sentinel@[???]
                       Unresolved local var: move * m@[???]
                       Unresolved local var: move * head_sentinel@[???] */
  plVar1 = (tq->moves).root.prev;
  if ((double)plVar1[-10] != 0.0) {
    return;
  }
                    /* Unresolved local var: list_node * __mptr@[???] */
  plVar2 = plVar1->prev;
  if (plVar2 != (tq->moves).root.next) {
    lVar7 = plVar2[-9];
                    /* Unresolved local var: double move_dist@[???] */
    lVar10 = plVar2[-2];
    lVar6 = plVar2[-5];
    lVar9 = plVar2[-1];
    lVar5 = plVar2[-4];
    lVar8 = plVar2[-3];
    lVar4 = plVar2[-6];
    dVar3 = ((double)plVar2[-8] + (double)lVar7 * (double)plVar2[-7]) * (double)lVar7;
    plVar1[-10] = (list_node)((double)plVar2[-10] + (double)lVar7);
    plVar1[-5] = (list_node)((double)lVar6 + dVar3 * (double)lVar10);
    plVar1[-4] = (list_node)((double)lVar5 + dVar3 * (double)lVar9);
    plVar1[-6] = (list_node)((double)lVar4 + dVar3 * (double)lVar8);
    return;
  }
  plVar1[-10].next = (list_node *)0x37e08000;
  plVar1[-10].prev = (list_node *)0x4341c379;
  return;
}



/* ===== move_get_coord @ 00013508 size=68 ===== */

coord * move_get_coord(coord *__return_storage_ptr__,move *m,double move_time)

{
                    /* Unresolved local var: double move_dist@[???] */
  return __return_storage_ptr__;
}



/* ===== trapq_free @ 0001354c size=120 ===== */

void trapq_free(trapq *tq)

{
  list_node *plVar1;
  trapq *ptVar2;
  list_node *plVar3;
  list_node *plVar4;
  
  ptVar2 = (trapq *)(tq->moves).root.next;
  while (ptVar2 != tq) {
                    /* Unresolved local var: move * m@[???] */
    plVar1 = (ptVar2->moves).root.next;
    plVar3 = (ptVar2->moves).root.prev;
                    /* Unresolved local var: list_node * prev@[???]
                       Unresolved local var: list_node * next@[???] */
    plVar1->prev = plVar3;
    plVar3->next = plVar1;
    free(ptVar2 + -5);
    ptVar2 = (trapq *)(tq->moves).root.next;
  }
  plVar1 = (tq->history).root.next;
  while (&(tq->history).root != plVar1) {
                    /* Unresolved local var: move * m@[???] */
    plVar3 = plVar1->next;
    plVar4 = plVar1->prev;
                    /* Unresolved local var: list_node * prev@[???]
                       Unresolved local var: list_node * next@[???] */
    plVar3->prev = plVar4;
    plVar4->next = plVar3;
    free(plVar1 + -10);
    plVar1 = (tq->history).root.next;
  }
  free(tq);
  return;
}



/* ===== trapq_alloc @ 000135c4 size=132 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

trapq * trapq_alloc(void)

{
  trapq *ptVar1;
  move *pmVar2;
  move *pmVar3;
  list_node *plVar4;
  list_node *plVar5;
  
                    /* Unresolved local var: trapq * tq@[???]
                       Unresolved local var: move * head_sentinel@[???]
                       Unresolved local var: move * tail_sentinel@[???] */
  ptVar1 = malloc(0x10);
  (ptVar1->moves).root.next = (list_node *)ptVar1;
  (ptVar1->moves).root.prev = (list_node *)ptVar1;
  (ptVar1->history).root.next = &(ptVar1->history).root;
  (ptVar1->history).root.prev = &(ptVar1->history).root;
  pmVar2 = move_alloc();
  pmVar3 = move_alloc();
  plVar5 = (ptVar1->moves).root.next;
  *(undefined4 *)&pmVar3->move_t = 0x37e08000;
  *(undefined4 *)((int)&pmVar3->move_t + 4) = 0x4341c379;
  *(undefined4 *)&pmVar3->print_time = 0x37e08000;
  *(undefined4 *)((int)&pmVar3->print_time + 4) = 0x4341c379;
  plVar5->prev = &pmVar2->node;
  plVar4 = (ptVar1->moves).root.prev;
  (pmVar2->node).next = plVar5;
  (ptVar1->moves).root.next = &pmVar2->node;
  (pmVar2->node).prev = (list_node *)ptVar1;
  (pmVar3->node).next = (list_node *)ptVar1;
  (pmVar3->node).prev = plVar4;
  (ptVar1->moves).root.prev = &pmVar3->node;
  plVar4->next = &pmVar3->node;
  return ptVar1;
}



/* ===== move_get_distance @ 00013648 size=20 ===== */

/* DWARF original prototype: double move_get_distance(move * m, double move_time, move * m, double
   move_time) */

double move_get_distance(move *m,double move_time,move *m_1,double move_time_1)

{
  return (m->start_v + m->half_accel * move_time) * move_time;
}



/* ===== trapq_append @ 0001365c size=496 ===== */

void trapq_append(trapq *tq,double print_time,double accel_t,double cruise_t,double decel_t,
                 double start_pos_x,double start_pos_y,double start_pos_z,double axes_r_x,
                 double axes_r_y,double axes_r_z,double start_v,double cruise_v,double accel)

{
  move *pmVar1;
  double dVar2;
  
                    /* Unresolved local var: coord start_pos@[???]
                       Unresolved local var: coord axes_r@[???] */
  if (accel_t != 0.0) {
                    /* Unresolved local var: move * m@[???] */
    pmVar1 = move_alloc();
    pmVar1->print_time = print_time;
    pmVar1->start_v = start_v;
    pmVar1->move_t = accel_t;
    (pmVar1->axes_r).field_0.field_0.y = axes_r_y;
    (pmVar1->axes_r).field_0.field_0.z = axes_r_z;
    (pmVar1->start_pos).field_0.field_0.x = start_pos_x;
    (pmVar1->start_pos).field_0.field_0.y = start_pos_y;
    (pmVar1->start_pos).field_0.field_0.z = start_pos_z;
    pmVar1->half_accel = accel * 0.5;
    (pmVar1->axes_r).field_0.field_0.x = axes_r_x;
    trapq_add_move(tq,pmVar1);
                    /* Unresolved local var: double move_dist@[???] */
    print_time = print_time + accel_t;
    dVar2 = (pmVar1->start_v + accel_t * pmVar1->half_accel) * accel_t;
    start_pos_x = (pmVar1->start_pos).field_0.field_0.x + dVar2 * (pmVar1->axes_r).field_0.field_0.x
    ;
    start_pos_y = (pmVar1->start_pos).field_0.field_0.y + dVar2 * (pmVar1->axes_r).field_0.field_0.y
    ;
    start_pos_z = (pmVar1->start_pos).field_0.field_0.z + dVar2 * (pmVar1->axes_r).field_0.field_0.z
    ;
  }
  if (cruise_t != 0.0) {
                    /* Unresolved local var: move * m@[???] */
    pmVar1 = move_alloc();
    pmVar1->print_time = print_time;
    pmVar1->start_v = cruise_v;
    (pmVar1->axes_r).field_0.field_0.y = axes_r_y;
    pmVar1->move_t = cruise_t;
    (pmVar1->axes_r).field_0.field_0.z = axes_r_z;
    (pmVar1->start_pos).field_0.field_0.x = start_pos_x;
    (pmVar1->start_pos).field_0.field_0.y = start_pos_y;
    (pmVar1->start_pos).field_0.field_0.z = start_pos_z;
    pmVar1->half_accel = 0.0;
    (pmVar1->axes_r).field_0.field_0.x = axes_r_x;
    trapq_add_move(tq,pmVar1);
                    /* Unresolved local var: double move_dist@[???] */
    print_time = print_time + cruise_t;
    dVar2 = (pmVar1->start_v + cruise_t * pmVar1->half_accel) * cruise_t;
    start_pos_x = (pmVar1->start_pos).field_0.field_0.x + dVar2 * (pmVar1->axes_r).field_0.field_0.x
    ;
    start_pos_y = (pmVar1->start_pos).field_0.field_0.y + dVar2 * (pmVar1->axes_r).field_0.field_0.y
    ;
    start_pos_z = (pmVar1->start_pos).field_0.field_0.z + dVar2 * (pmVar1->axes_r).field_0.field_0.z
    ;
  }
  if (decel_t != 0.0) {
                    /* Unresolved local var: move * m@[???] */
    pmVar1 = move_alloc();
    pmVar1->print_time = print_time;
    pmVar1->start_v = cruise_v;
    (pmVar1->axes_r).field_0.field_0.y = axes_r_y;
    pmVar1->move_t = decel_t;
    (pmVar1->axes_r).field_0.field_0.z = axes_r_z;
    (pmVar1->start_pos).field_0.field_0.x = start_pos_x;
    (pmVar1->start_pos).field_0.field_0.y = start_pos_y;
    (pmVar1->start_pos).field_0.field_0.z = start_pos_z;
    (pmVar1->axes_r).field_0.field_0.x = axes_r_x;
    pmVar1->half_accel = accel * -0.5;
    trapq_add_move(tq,pmVar1);
    return;
  }
  return;
}



/* ===== steppersync_set_time @ 0001384c size=76 ===== */

void steppersync_set_time(steppersync *ss,double time_offset,double mcu_freq)

{
  stepcompress *sc;
  int iVar1;
  
                    /* Unresolved local var: int i@[???] */
  if (ss->sc_num < 1) {
    return;
  }
  iVar1 = 0;
  do {
                    /* Unresolved local var: stepcompress * sc@[???] */
    sc = ss->sc_list[iVar1];
    iVar1 = iVar1 + 1;
    sc->mcu_time_offset = time_offset;
    sc->mcu_freq = mcu_freq;
    calc_last_step_print_time(sc);
  } while (iVar1 < ss->sc_num);
  return;
}



/* ===== stepcompress_extract_old @ 00013898 size=188 ===== */

int stepcompress_extract_old
              (stepcompress *sc,pull_history_steps *p,int max,uint64_t start_clock,
              uint64_t end_clock)

{
  uint uVar1;
  pull_history_steps *ppVar2;
  list_node *plVar3;
  list_node *plVar4;
  list_node *plVar5;
  list_node *plVar6;
  list_node *plVar7;
  list_node *in_r12;
  list_head *plVar8;
  bool bVar9;
  list_node lVar10;
  
                    /* Unresolved local var: list_node * __mptr@[???]
                       Unresolved local var: int res@[???]
                       Unresolved local var: history_steps * hs@[???] */
  plVar8 = &sc->history_list;
  plVar3 = (plVar8->root).next;
  if (plVar3 != &plVar8->root) {
    plVar4 = plVar3[2].next;
    plVar5 = plVar3[2].prev;
    bVar9 = plVar5 <= start_clock._4_4_;
    if (start_clock._4_4_ == plVar5) {
      bVar9 = plVar4 <= (list_node *)start_clock;
    }
    uVar1 = (uint)bVar9;
    if (max < 1) {
      uVar1 = 1;
    }
    if (uVar1 == 0) {
      do {
        plVar6 = plVar3[1].prev;
        bVar9 = end_clock._4_4_ <= plVar6;
        if (plVar6 == end_clock._4_4_) {
          bVar9 = (list_node *)end_clock <= plVar3[1].next;
        }
        ppVar2 = p;
        if (!bVar9) {
          lVar10 = plVar3[3];
          uVar1 = uVar1 + 1;
          in_r12 = plVar3[5].next;
          ppVar2 = p + 1;
          *(list_node **)&p->first_clock = plVar3[1].next;
          *(list_node **)((int)&p->first_clock + 4) = plVar6;
          plVar7 = plVar3[4].next;
          plVar6 = plVar3[4].prev;
          *(list_node **)&p->last_clock = plVar4;
          *(list_node **)((int)&p->last_clock + 4) = plVar5;
          p->start_position = (int64_t)lVar10;
          p->step_count = (int)plVar7;
          p->interval = (int)plVar6;
          p->add = (int)in_r12;
        }
                    /* Unresolved local var: list_node * __mptr@[???] */
        plVar3 = plVar3->next;
        if (plVar3 == &plVar8->root) {
          return uVar1;
        }
        plVar4 = plVar3[2].next;
        plVar5 = plVar3[2].prev;
        bVar9 = start_clock._4_4_ <= plVar5;
        if (plVar5 == start_clock._4_4_) {
          bVar9 = (list_node *)start_clock <= plVar4;
        }
        if (!bVar9 || (list_node)start_clock == plVar3[2]) {
          in_r12 = (list_node *)0x1;
        }
        if (bVar9 && (plVar5 != start_clock._4_4_ || plVar4 != (list_node *)start_clock)) {
          in_r12 = (list_node *)0x0;
        }
        if (max <= (int)uVar1) {
          in_r12 = (list_node *)((uint)in_r12 | 1);
        }
        p = ppVar2;
      } while (in_r12 == (list_node *)0x0);
      return uVar1;
    }
  }
  return 0;
}



/* ===== stepcompress_find_past_position @ 00013954 size=352 ===== */

int64_t stepcompress_find_past_position(stepcompress *sc,uint64_t clock)

{
  list_head *plVar1;
  list_node *plVar2;
  list_node *plVar3;
  list_node *plVar4;
  list_node *plVar5;
  list_node *plVar6;
  bool bVar7;
  uint in_fpscr;
  double dVar8;
  double dVar9;
  double dVar10;
  
                    /* Unresolved local var: list_node * __mptr@[???]
                       Unresolved local var: int64_t last_position@[DW_OP_breg0(r0): +104]
                       Unresolved local var: history_steps * hs@[???] */
  plVar6 = (list_node *)(clock >> 0x20);
  plVar3 = (list_node *)clock;
  plVar1 = &sc->history_list;
  plVar4 = (plVar1->root).next;
  if (plVar4 == &plVar1->root) {
    plVar3 = *(list_node **)&sc->last_position;
    plVar6 = *(list_node **)((int)&sc->last_position + 4);
  }
  else {
                    /* Unresolved local var: int32_t interval@[???]
                       Unresolved local var: int32_t add@[???]
                       Unresolved local var: int32_t ticks@[???]
                       Unresolved local var: int32_t offset@[???] */
    plVar5 = plVar4[1].next;
    bVar7 = plVar4[1].prev <= plVar6;
    if (plVar6 == plVar4[1].prev) {
      bVar7 = plVar5 <= plVar3;
    }
    plVar2 = plVar4;
    if (bVar7) {
      bVar7 = plVar6 <= plVar4[2].prev;
      if (plVar4[2].prev == plVar6) {
        bVar7 = plVar3 <= plVar4[2].next;
      }
      if (!bVar7 || (list_node)clock == plVar4[2]) {
LAB_00013a5c:
        plVar3 = plVar4[4].next;
        return CONCAT44((int)&(plVar4[3].prev)->next +
                        (uint)CARRY4((uint)plVar4[3].next,(uint)plVar3) + ((int)plVar3 >> 0x1f),
                        (int)&plVar3->next + (int)&(plVar4[3].next)->next);
      }
    }
    else {
      do {
                    /* Unresolved local var: list_node * __mptr@[???] */
        plVar4 = plVar2->next;
        if (plVar4 == &plVar1->root) {
          plVar3 = plVar2[3].next;
          plVar6 = plVar2[3].prev;
          goto LAB_000139c4;
        }
        plVar5 = plVar4[1].next;
        bVar7 = plVar6 <= plVar4[1].prev;
        if (plVar4[1].prev == plVar6) {
          bVar7 = plVar3 <= plVar5;
        }
        plVar2 = plVar4;
      } while (bVar7 && (list_node)clock != plVar4[1]);
      bVar7 = plVar6 <= plVar4[2].prev;
      if (plVar4[2].prev == plVar6) {
        bVar7 = plVar3 <= plVar4[2].next;
      }
      if (!bVar7 || (list_node)clock == plVar4[2]) goto LAB_00013a5c;
    }
    plVar6 = plVar4[5].next;
    if (plVar6 == (list_node *)0x0) {
      plVar5 = (list_node *)__divsi3();
    }
    else {
                    /* Unresolved local var: double a@[???]
                       Unresolved local var: double b@[???]
                       Unresolved local var: double c@[???] */
      dVar10 = (double)VectorSignedFixedToFloat(CONCAT44(plVar6,plVar6),0x20,1);
      dVar8 = (double)VectorSignedToFloat(-(((int)plVar3 - (int)plVar5) + (int)plVar4[4].prev),
                                          (byte)(in_fpscr >> 0x16) & 3);
      dVar9 = (double)VectorSignedToFloat(plVar4[4].prev,(byte)(in_fpscr >> 0x16) & 3);
      dVar9 = dVar9 - dVar10;
      dVar8 = -(dVar10 * 4.0 * dVar8) + dVar9 * dVar9;
      if (dVar8 < 0.0) {
        sqrt(dVar8);
      }
      plVar5 = (list_node *)(longlong)((SQRT(dVar8) - dVar9) / (dVar10 + dVar10));
    }
    plVar2 = plVar4[3].next;
    plVar3 = (list_node *)((int)&plVar2->next + (int)&plVar5->next);
    plVar6 = (list_node *)
             ((int)&(plVar4[3].prev)->next +
             (uint)CARRY4((uint)plVar5,(uint)plVar2) + ((int)plVar5 >> 0x1f));
    if ((int)plVar4[4].next < 0) {
      return CONCAT44((int)plVar4[3].prev - (((int)plVar5 >> 0x1f) + (uint)(plVar2 < plVar5)),
                      (int)plVar2 - (int)plVar5);
    }
  }
LAB_000139c4:
  return CONCAT44(plVar6,plVar3);
}



/* ===== stepcompress_get_step_dir @ 00013ab4 size=8 ===== */

int stepcompress_get_step_dir(stepcompress *sc)

{
  return sc->next_step_dir;
}



/* ===== stepcompress_set_invert_sdir @ 00013abc size=44 ===== */

void stepcompress_set_invert_sdir(stepcompress *sc,uint32_t invert_sdir)

{
  if (sc->invert_sdir != (uint)(invert_sdir != 0)) {
    sc->invert_sdir = (uint)(invert_sdir != 0);
    if (-1 < sc->sdir) {
      sc->sdir = sc->sdir ^ 1;
    }
    return;
  }
  return;
}



/* ===== stepcompress_fill @ 00013ae8 size=12 ===== */

void stepcompress_fill(stepcompress *sc,uint32_t max_error,int32_t queue_step_msgtag,
                      int32_t set_next_step_dir_msgtag)

{
  sc->max_error = max_error;
  sc->queue_step_msgtag = queue_step_msgtag;
  sc->set_next_step_dir_msgtag = set_next_step_dir_msgtag;
  return;
}



/* ===== stepcompress_alloc @ 00013af4 size=60 ===== */

stepcompress * stepcompress_alloc(uint32_t oid)

{
  stepcompress *psVar1;
  
                    /* Unresolved local var: stepcompress * sc@[???] */
  psVar1 = calloc(0x78,1);
  psVar1->sdir = -1;
  psVar1->oid = oid;
  (psVar1->msg_queue).root.next = &(psVar1->msg_queue).root;
  (psVar1->msg_queue).root.prev = &(psVar1->msg_queue).root;
  (psVar1->history_list).root.next = &(psVar1->history_list).root;
  (psVar1->history_list).root.prev = &(psVar1->history_list).root;
  return psVar1;
}



/* ===== serialqueue_get_stats @ 00013b30 size=236 ===== */

void serialqueue_get_stats(serialqueue *sq,char *buf,int len)

{
  serialqueue stats;
  
  pthread_mutex_lock((pthread_mutex_t *)&sq->lock);
  memcpy(&stats,sq,0x1170);
  pthread_mutex_unlock((pthread_mutex_t *)&sq->lock);
  snprintf(buf,len,(char *)(DAT_00013c1c + 0x13c08),stats.bytes_write,stats.bytes_read,
           stats.bytes_retransmit,stats.bytes_invalid,(undefined4)stats.send_seq,
           (undefined4)stats.receive_seq,(undefined4)stats.retransmit_seq,stats.srtt._0_4_,
           stats.srtt._4_4_,stats.rttvar._0_4_,stats.rttvar._4_4_,stats.rto._0_4_,stats.rto._4_4_,
           stats.ready_bytes,stats.stalled_bytes);
  return;
}



/* ===== serialqueue_get_clock_est @ 00013c20 size=108 ===== */

void serialqueue_get_clock_est(serialqueue *sq,clock_estimate *ce)

{
  uint64_t uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  pthread_mutex_lock((pthread_mutex_t *)&sq->lock);
  uVar3 = *(undefined4 *)((int)&(sq->ce).last_clock + 4);
  uVar1 = (sq->ce).conv_clock;
  uVar2 = *(undefined4 *)((int)&(sq->ce).conv_clock + 4);
  *(int *)&ce->last_clock = (int)(sq->ce).last_clock;
  *(undefined4 *)((int)&ce->last_clock + 4) = uVar3;
  *(int *)&ce->conv_clock = (int)uVar1;
  *(undefined4 *)((int)&ce->conv_clock + 4) = uVar2;
  uVar4 = *(undefined4 *)((int)&(sq->ce).conv_time + 4);
  uVar2 = *(undefined4 *)&(sq->ce).est_freq;
  uVar3 = *(undefined4 *)((int)&(sq->ce).est_freq + 4);
  *(undefined4 *)&ce->conv_time = *(undefined4 *)&(sq->ce).conv_time;
  *(undefined4 *)((int)&ce->conv_time + 4) = uVar4;
  *(undefined4 *)&ce->est_freq = uVar2;
  *(undefined4 *)((int)&ce->est_freq + 4) = uVar3;
  pthread_mutex_unlock((pthread_mutex_t *)&sq->lock);
  return;
}



/* ===== trdispatch_mcu_setup @ 00013c8c size=92 ===== */

void trdispatch_mcu_setup
               (trdispatch_mcu *tdm,uint64_t last_status_clock,uint64_t expire_clock,
               uint64_t expire_ticks,uint64_t min_extend_ticks)

{
  pthread_mutex_t *__mutex;
  
                    /* Unresolved local var: trdispatch * td@[???] */
  __mutex = &tdm->td->lock;
  pthread_mutex_lock((pthread_mutex_t *)__mutex);
  tdm->expire_clock = expire_clock;
  tdm->last_status_clock = last_status_clock;
  tdm->expire_ticks = expire_ticks;
  tdm->min_extend_ticks = min_extend_ticks;
  serialqueue_get_clock_est(tdm->sq,&tdm->ce);
  pthread_mutex_unlock((pthread_mutex_t *)__mutex);
  return;
}



/* ===== serialqueue_set_clock_est @ 00013ce8 size=88 ===== */

void serialqueue_set_clock_est
               (serialqueue *sq,double est_freq,double conv_time,uint64_t conv_clock,
               uint64_t last_clock)

{
  pthread_mutex_lock((pthread_mutex_t *)&sq->lock);
  (sq->ce).est_freq = est_freq;
  (sq->ce).conv_time = conv_time;
  (sq->ce).conv_clock = conv_clock;
  (sq->ce).last_clock = last_clock;
  pthread_mutex_unlock((pthread_mutex_t *)&sq->lock);
  return;
}



/* ===== serialqueue_set_receive_window @ 00013d40 size=48 ===== */

void serialqueue_set_receive_window(serialqueue *sq,int receive_window)

{
  pthread_mutex_lock((pthread_mutex_t *)&sq->lock);
  sq->receive_window = receive_window;
  pthread_mutex_unlock((pthread_mutex_t *)&sq->lock);
  return;
}



/* ===== serialqueue_set_wire_frequency @ 00013d70 size=76 ===== */

void serialqueue_set_wire_frequency(serialqueue *sq,double frequency)

{
  double dVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)&sq->lock);
  if (sq->serial_fd_type == 99) {
    dVar1 = 1.0;
  }
  else {
    dVar1 = 10.0;
  }
  sq->bittime_adjust = dVar1 / frequency;
  pthread_mutex_unlock((pthread_mutex_t *)&sq->lock);
  return;
}



/* ===== serialqueue_rm_fastreader @ 00013dbc size=72 ===== */

void serialqueue_rm_fastreader(serialqueue *sq,fastreader *fr)

{
  list_node *plVar1;
  list_node *plVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)&sq->lock);
  plVar1 = (fr->node).next;
  plVar2 = (fr->node).prev;
                    /* Unresolved local var: list_node * prev@[???]
                       Unresolved local var: list_node * next@[???] */
  plVar1->prev = plVar2;
  plVar2->next = plVar1;
  pthread_mutex_unlock((pthread_mutex_t *)&sq->lock);
  pthread_mutex_lock((pthread_mutex_t *)&sq->fast_reader_dispatch_lock);
  pthread_mutex_unlock((pthread_mutex_t *)&sq->fast_reader_dispatch_lock);
  return;
}



/* ===== trdispatch_stop @ 00013e04 size=104 ===== */

void trdispatch_stop(trdispatch *td)

{
  pthread_mutex_t *__mutex;
  trdispatch *ptVar1;
  
                    /* Unresolved local var: trdispatch_mcu * tdm@[???] */
  __mutex = &td->lock;
  pthread_mutex_lock((pthread_mutex_t *)__mutex);
  if (td->is_active == 0) {
    pthread_mutex_unlock((pthread_mutex_t *)__mutex);
    return;
  }
  td->is_active = 0;
  pthread_mutex_unlock((pthread_mutex_t *)__mutex);
                    /* Unresolved local var: list_node * __mptr@[???] */
  ptVar1 = (trdispatch *)(td->tdm_list).root.next;
  if (td == ptVar1) {
    return;
  }
  do {
    serialqueue_rm_fastreader
              ((serialqueue *)(ptVar1->lock).__data.__lock,
               (fastreader *)&ptVar1[-2].tdm_list.root.prev);
                    /* Unresolved local var: list_node * __mptr@[???] */
    ptVar1 = (trdispatch *)(ptVar1->tdm_list).root.next;
  } while (td != ptVar1);
  return;
}



/* ===== serialqueue_add_fastreader @ 00013e6c size=72 ===== */

void serialqueue_add_fastreader(serialqueue *sq,fastreader *fr)

{
  list_node *plVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)&sq->lock);
  plVar1 = (sq->fast_readers).root.prev;
  (sq->fast_readers).root.prev = &fr->node;
  (fr->node).next = &(sq->fast_readers).root;
  (fr->node).prev = plVar1;
  plVar1->next = &fr->node;
  pthread_mutex_unlock((pthread_mutex_t *)&sq->lock);
  return;
}



/* ===== trdispatch_start @ 00013eb4 size=132 ===== */

void trdispatch_start(trdispatch *td,uint32_t dispatch_reason)

{
  pthread_mutex_t *__mutex;
  trdispatch *ptVar1;
  
                    /* Unresolved local var: trdispatch_mcu * tdm@[???] */
  __mutex = &td->lock;
  pthread_mutex_lock((pthread_mutex_t *)__mutex);
  if ((td->is_active == 0) && ((trdispatch *)(td->tdm_list).root.next != td)) {
    td->dispatch_reason = dispatch_reason;
    td->can_trigger = 1;
    td->is_active = 1;
    pthread_mutex_unlock((pthread_mutex_t *)__mutex);
                    /* Unresolved local var: list_node * __mptr@[???] */
    ptVar1 = (trdispatch *)(td->tdm_list).root.next;
    if (td == ptVar1) {
      return;
    }
    do {
      serialqueue_add_fastreader
                ((serialqueue *)(ptVar1->lock).__data.__lock,
                 (fastreader *)&ptVar1[-2].tdm_list.root.prev);
                    /* Unresolved local var: list_node * __mptr@[???] */
      ptVar1 = (trdispatch *)(ptVar1->tdm_list).root.next;
    } while (td != ptVar1);
    return;
  }
  pthread_mutex_unlock((pthread_mutex_t *)__mutex);
  return;
}



/* ===== serialqueue_alloc_commandqueue @ 00013f38 size=48 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

command_queue * serialqueue_alloc_commandqueue(void)

{
  command_queue *pcVar1;
  list_head *plVar2;
  
                    /* Unresolved local var: command_queue * cq@[???] */
  pcVar1 = malloc(0x18);
  plVar2 = &pcVar1->ready_queue;
  (plVar2->root).next = (list_node *)0x0;
  (pcVar1->ready_queue).root.prev = *(list_node **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  (pcVar1->node).next = *(list_node **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  (pcVar1->node).prev = *(list_node **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  (pcVar1->ready_queue).root.next = &plVar2->root;
  (pcVar1->ready_queue).root.prev = &plVar2->root;
  (pcVar1->stalled_queue).root.next = (list_node *)pcVar1;
  (pcVar1->stalled_queue).root.prev = (list_node *)pcVar1;
  return pcVar1;
}



/* ===== steppersync_alloc @ 00013f68 size=120 ===== */

steppersync * steppersync_alloc(serialqueue *sq,stepcompress **sc_list,int sc_num,int move_num)

{
  steppersync *psVar1;
  command_queue *pcVar2;
  stepcompress **__dest;
  uint64_t *puVar3;
  
                    /* Unresolved local var: steppersync * ss@[???] */
  psVar1 = malloc(0x18);
  psVar1->cq = (command_queue *)0x0;
  psVar1->sc_list = *(stepcompress ***)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  psVar1->sc_num = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  psVar1->move_clocks = *(uint64_t **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  psVar1->sq = sq;
  psVar1->move_clocks = (uint64_t *)0x0;
  psVar1->num_move_clocks = (int)*(stepcompress ***)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  pcVar2 = serialqueue_alloc_commandqueue();
  psVar1->cq = pcVar2;
  __dest = malloc(sc_num << 2);
  psVar1->sc_list = __dest;
  memcpy(__dest,sc_list,sc_num << 2);
  psVar1->sc_num = sc_num;
  puVar3 = calloc(move_num << 3,1);
  psVar1->num_move_clocks = move_num;
  psVar1->move_clocks = puVar3;
  return psVar1;
}



/* ===== errorf @ 00013fe0 size=88 ===== */

void errorf(char *fmt)

{
  va_list args;
  char buf [512];
  char *fmt_local;
  undefined1 auStack_c [12];
  
  vsnprintf(buf,0x200,fmt,auStack_c);
  buf[0x1ff] = '\0';
  (**(code **)(DAT_00014038 + 0x14024))(buf);
  return;
}



/* ===== serialqueue_free_commandqueue @ 0001403c size=52 ===== */

void serialqueue_free_commandqueue(command_queue *cq)

{
  if (cq == (command_queue *)0x0) {
    return;
  }
  if (((cq->ready_queue).root.next == &(cq->ready_queue).root) &&
     ((command_queue *)(cq->stalled_queue).root.next == cq)) {
    free(cq);
    return;
  }
  errorf((char *)(DAT_00014070 + 0x1406c));
  return;
}



/* ===== steppersync_free @ 00014074 size=48 ===== */

/* DWARF original prototype: void steppersync_free(steppersync * ss, steppersync * ss) */

void steppersync_free(steppersync *ss,steppersync *ss_1)

{
  if (ss == (steppersync *)0x0) {
    return;
  }
  free(ss->sc_list);
  free(ss->move_clocks);
  serialqueue_free_commandqueue(ss->cq);
  free(ss);
  return;
}



/* ===== report_errno @ 000140a4 size=68 ===== */

void report_errno(char *where,int rc)

{
  int *piVar1;
  
                    /* Unresolved local var: int e@[???] */
  piVar1 = __errno_location();
  strerror(*piVar1);
  errorf((char *)(DAT_000140e8 + 0x140e0));
  return;
}



/* ===== trdispatch_alloc @ 000140ec size=96 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

trdispatch * trdispatch_alloc(void)

{
  anon_union_4_2_9a799d16_for___pthread_mutex_s_5 aVar1;
  trdispatch *ptVar2;
  int rc;
  
                    /* Unresolved local var: trdispatch * td@[???]
                       Unresolved local var: int ret@[???] */
  ptVar2 = malloc(0x2c);
  aVar1 = *(anon_union_4_2_9a799d16_for___pthread_mutex_s_5 *)
           ((undefined1  [16])0x0 + (undefined1  [16])0x4);
  ptVar2->is_active = 0;
  ptVar2->can_trigger = (uint32_t)aVar1;
  (ptVar2->lock).__data.__lock = 0;
  (ptVar2->lock).__data.__count = (uint)aVar1;
  (ptVar2->lock).__data.__owner = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  (ptVar2->lock).__data.__kind = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  (ptVar2->tdm_list).root.next = (list_node *)ptVar2;
  (ptVar2->lock).__data.__nusers = 0;
  (ptVar2->lock).__data.field_5 = aVar1;
  (ptVar2->tdm_list).root.prev = (list_node *)ptVar2;
  ptVar2->can_trigger = 0;
  ptVar2->dispatch_reason = (uint32_t)aVar1;
  rc = pthread_mutex_init((pthread_mutex_t *)&ptVar2->lock,(pthread_mutexattr_t *)0x0);
  if (rc != 0) {
    ptVar2 = (trdispatch *)0x0;
    report_errno((char *)(DAT_0001414c + 0x14148),rc);
  }
  return ptVar2;
}



/* ===== kick_bg_thread @ 00014150 size=44 ===== */

void kick_bg_thread(serialqueue *sq)

{
  ssize_t rc;
  
                    /* Unresolved local var: int ret@[???] */
  rc = write((int)sq,(void *)(DAT_0001417c + 0x14164),1);
  if (-1 < rc) {
    return;
  }
  report_errno((char *)((int)&DAT_0001417c + DAT_00014180),rc);
  return;
}



/* ===== serialqueue_send_batch @ 00014184 size=352 ===== */

void serialqueue_send_batch(serialqueue *sq,command_queue *cq,list_head *msgs)

{
  list_node *plVar1;
  list_node *plVar2;
  list_head *plVar3;
  pthread_mutex_t *__mutex;
  list_node *plVar4;
  int iVar5;
  list_node *plVar6;
  list_node *plVar7;
  bool bVar8;
  
                    /* Unresolved local var: list_node * __mptr@[???]
                       Unresolved local var: int len@[???]
                       Unresolved local var: queue_message * qm@[???]
                       Unresolved local var: int mustwake@[???] */
  plVar4 = (msgs->root).next;
  if (&msgs->root == plVar4) {
    return;
  }
  iVar5 = 0;
  plVar1 = plVar4;
  do {
    plVar3 = (list_head *)(plVar1 + -0xc);
    plVar6 = plVar1[-2].next;
    plVar7 = plVar1[-2].prev;
    plVar2 = (list_node *)
             ((int)&(plVar1[-3].prev)->next + (uint)((list_node *)0x7fffffff < plVar1[-3].next));
    bVar8 = plVar7 <= plVar2;
    if (plVar2 == plVar7) {
      bVar8 = plVar6 <= plVar1[-3].next + -0x10000000;
    }
    if ((plVar7 != (list_node *)0x7fffffff || plVar6 != (list_node *)0x0) && !bVar8) {
      plVar1[-3].next = plVar6 + -0x10000000;
      plVar1[-3].prev = (list_node *)((int)plVar7 - (uint)(plVar6 < (list_node *)0x80000000));
    }
                    /* Unresolved local var: list_node * __mptr@[???] */
    plVar1 = ((list_node *)&plVar1->next)->next;
    iVar5 = (int)&((plVar3->root).next)->next + iVar5;
  } while (&msgs->root != plVar1);
  if (iVar5 != 0) {
    __mutex = &sq->lock;
    pthread_mutex_lock((pthread_mutex_t *)__mutex);
    if (((cq->ready_queue).root.next == &(cq->ready_queue).root) &&
       ((command_queue *)(cq->stalled_queue).root.next == cq)) {
      plVar1 = (sq->pending_queues).root.prev;
      (sq->pending_queues).root.prev = &cq->node;
      (cq->node).next = &(sq->pending_queues).root;
      (cq->node).prev = plVar1;
      plVar1->next = &cq->node;
    }
    plVar1 = (msgs->root).next;
    if (plVar1 != &msgs->root) {
                    /* Unresolved local var: list_node * prev@[???]
                       Unresolved local var: list_node * next@[???]
                       Unresolved local var: list_node * first@[???]
                       Unresolved local var: list_node * last@[???] */
      plVar6 = (msgs->root).prev;
      plVar2 = (cq->stalled_queue).root.prev;
      plVar1->prev = plVar2;
      plVar2->next = plVar1;
      plVar6->next = (list_node *)cq;
      (cq->stalled_queue).root.prev = plVar6;
    }
    plVar1 = plVar4[-3].next;
    plVar2 = plVar4[-3].prev;
    plVar4 = *(list_node **)((int)&sq->need_kick_clock + 4);
    sq->stalled_bytes = sq->stalled_bytes + iVar5;
    bVar8 = plVar4 <= plVar2;
    if (plVar2 == plVar4) {
      bVar8 = *(list_node **)&sq->need_kick_clock <= plVar1;
    }
    if (!bVar8) {
      sq->need_kick_clock = 0;
      pthread_mutex_unlock((pthread_mutex_t *)__mutex);
      kick_bg_thread((serialqueue *)sq->pipe_fds[1]);
      return;
    }
    pthread_mutex_unlock((pthread_mutex_t *)__mutex);
    return;
  }
  return;
}



/* ===== serialqueue_send_one @ 000142e4 size=48 ===== */

void serialqueue_send_one(serialqueue *sq,command_queue *cq,queue_message *qm)

{
  list_head msgs;
  
  msgs.root.next = &qm->node;
  (qm->node).next = &msgs.root;
  (qm->node).prev = &msgs.root;
  msgs.root.prev = msgs.root.next;
  serialqueue_send_batch(sq,cq,&msgs);
  return;
}



/* ===== do_write @ 00014314 size=184 ===== */

void do_write(serialqueue *sq,void *buf,int buflen)

{
  ssize_t sVar1;
  size_t __n;
  can_frame cf;
  
  if (sq->serial_fd_type == 99) {
    if (buflen != 0) {
      do {
                    /* Unresolved local var: int size@[???]
                       Unresolved local var: int ret@[???] */
        cf.can_id = sq->client_id;
        __n = buflen;
        if (7 < buflen) {
          __n = 8;
        }
        cf.can_dlc = (__u8)__n;
        memcpy(cf.data,buf,__n);
        buf = (void *)((int)buf + __n);
        sVar1 = write(sq->serial_fd,&cf,0x10);
        if (sVar1 < 0) {
          report_errno((char *)(DAT_000143cc + 0x143a4),sVar1);
          return;
        }
        buflen = buflen - __n;
      } while (buflen != 0);
    }
  }
  else {
                    /* Unresolved local var: int ret@[???] */
    sVar1 = write(sq->serial_fd,buf,buflen);
    if (sVar1 < 0) {
      report_errno((char *)(DAT_000143d0 + 0x143c8),sVar1);
    }
  }
  return;
}



/* ===== set_python_logging_callback @ 000143d4 size=16 ===== */

void set_python_logging_callback(_func_void_char_ptr *func)

{
  *(_func_void_char_ptr **)(DAT_000143e4 + 0x143e0) = func;
  return;
}



/* ===== get_monotonic @ 000143e8 size=84 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double get_monotonic(void)

{
  int rc;
  uint in_fpscr;
  double dVar1;
  double dVar2;
  timespec ts;
  
                    /* Unresolved local var: int ret@[???] */
  rc = clock_gettime(4,(timespec *)&ts);
  if (rc == 0) {
    dVar2 = (double)VectorSignedToFloat(ts.tv_nsec,(byte)(in_fpscr >> 0x16) & 3);
    dVar1 = (double)VectorSignedToFloat(ts.tv_sec,(byte)(in_fpscr >> 0x16) & 3);
    return dVar1 + dVar2 * DAT_00014440;
  }
  report_errno((char *)(DAT_00014448 + 0x14430),rc);
  return 0.0;
}



/* ===== fd_set_non_blocking @ 0001444c size=104 ===== */

int fd_set_non_blocking(int fd)

{
  uint rc;
  int iVar1;
  
                    /* Unresolved local var: int flags@[???]
                       Unresolved local var: int ret@[???] */
  rc = fcntl(fd,3);
  if ((int)rc < 0) {
    report_errno((char *)(DAT_000144b4 + 0x14494),rc);
    return -1;
  }
  iVar1 = fcntl(fd,4,rc | 0x800);
  if (-1 < iVar1) {
    return 0;
  }
  report_errno((char *)(DAT_000144b8 + 0x144ac),rc);
  return -1;
}



/* ===== pollreactor_is_exit @ 000144bc size=8 ===== */

int pollreactor_is_exit(pollreactor *pr)

{
  return pr->must_exit;
}



/* ===== pollreactor_do_exit @ 000144c4 size=12 ===== */

void pollreactor_do_exit(pollreactor *pr)

{
  pr->must_exit = 1;
  return;
}



/* ===== serialqueue_exit @ 000144d0 size=64 ===== */

void serialqueue_exit(serialqueue *sq)

{
  int rc;
  
                    /* Unresolved local var: int ret@[???] */
  pollreactor_do_exit(sq->pr);
  kick_bg_thread((serialqueue *)sq->pipe_fds[1]);
  rc = pthread_join(sq->tid,(void **)0x0);
  if (rc == 0) {
    return;
  }
  report_errno((char *)((int)&DAT_00014510 + DAT_00014510),rc);
  return;
}



/* ===== pollreactor_run @ 00014514 size=400 ===== */

void pollreactor_run(pollreactor *pr)

{
  bool bVar1;
  double dVar2;
  pollreactor_timer *ppVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  
                    /* Unresolved local var: double eventtime@[???]
                       Unresolved local var: int busy@[???] */
                    /* Unresolved local var: int timeout@[???]
                       Unresolved local var: int ret@[???]
                       Unresolved local var: double timeout@[???]
                       Unresolved local var: int i@[???] */
  dVar6 = get_monotonic();
  dVar2 = DAT_000146a8;
  iVar4 = pr->must_exit;
  bVar1 = true;
  while( true ) {
    while( true ) {
      if (iVar4 != 0) {
        return;
      }
      if (pr->next_timer <= dVar6) {
        iVar4 = pr->num_timers;
        *(undefined4 *)&pr->next_timer = 0x37e08000;
        *(undefined4 *)((int)&pr->next_timer + 4) = 0x4341c379;
        if (0 < iVar4) {
          iVar5 = 0;
          do {
                    /* Unresolved local var: pollreactor_timer * timer@[???]
                       Unresolved local var: double t@[???] */
            ppVar3 = pr->timers + iVar5;
            iVar5 = iVar5 + 1;
            dVar7 = ppVar3->waketime;
            if (dVar7 <= dVar6) {
              bVar1 = true;
              dVar7 = (*ppVar3->callback)(pr->callback_data,dVar6);
              iVar4 = pr->num_timers;
              ppVar3->waketime = dVar7;
            }
            if (dVar7 < pr->next_timer) {
              pr->next_timer = dVar7;
            }
          } while (iVar5 < iVar4);
        }
      }
      if (bVar1) {
        iVar4 = 0;
      }
      else {
        dVar6 = ceil((pr->next_timer - dVar6) * dVar2);
        if (dVar6 < 1.0) {
          iVar4 = 1;
        }
        else if (dVar6 <= dVar2) {
          iVar4 = (int)(longlong)dVar6;
        }
        else {
          iVar4 = 1000;
        }
      }
      iVar4 = poll((pollfd *)pr->fds,pr->num_fds,iVar4);
      dVar6 = get_monotonic();
      if (iVar4 < 1) break;
                    /* Unresolved local var: int i@[???] */
      iVar5 = pr->num_fds;
      iVar4 = 0;
      if (0 < iVar5) {
        do {
          if (pr->fds[iVar4].revents != 0) {
            (*pr->fd_callbacks[iVar4])(pr->callback_data,dVar6);
            iVar5 = pr->num_fds;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar5);
      }
      iVar4 = pr->must_exit;
      bVar1 = true;
    }
    if (iVar4 != 0) break;
    iVar4 = pr->must_exit;
    bVar1 = false;
  }
  report_errno((char *)(DAT_000146b0 + 0x14694),iVar4);
  pr->must_exit = 1;
  return;
}



/* ===== background_thread @ 000146b4 size=84 ===== */

void * background_thread(void *data)

{
                    /* Unresolved local var: serialqueue * sq@[???] */
  pollreactor_run(*(pollreactor **)data);
  pthread_mutex_lock((pthread_mutex_t *)((int)data + 0x1024));
  if (*(int *)((int)data + 0x1070) != 0) {
    *(undefined4 *)((int)data + 0x1070) = 0;
    pthread_cond_signal((pthread_cond_t *)((int)data + 0x1040));
  }
  pthread_mutex_unlock((pthread_mutex_t *)((int)data + 0x1024));
  return (void *)0x0;
}



/* ===== pollreactor_update_timer @ 00014708 size=32 ===== */

void pollreactor_update_timer(pollreactor *pr,int pos,double waketime)

{
  double dVar1;
  
  dVar1 = pr->next_timer;
  pr->timers[pos].waketime = waketime;
  if (waketime < dVar1) {
    pr->next_timer = waketime;
  }
  return;
}



/* ===== kick_event @ 00014728 size=76 ===== */

void kick_event(serialqueue *sq,double eventtime)

{
  ssize_t rc;
  char dummy [4096];
  
                    /* Unresolved local var: int ret@[???] */
  rc = read(sq->pipe_fds[0],dummy,0x1000);
  if (rc < 0) {
    report_errno((char *)(DAT_00014774 + 0x14770),rc);
  }
  pollreactor_update_timer(sq->pr,1,0.0);
  return;
}



/* ===== pollreactor_get_timer @ 00014778 size=16 ===== */

double pollreactor_get_timer(pollreactor *pr,int pos)

{
  return pr->timers[pos].waketime;
}



/* ===== retransmit_event @ 00014788 size=528 ===== */

double retransmit_event(serialqueue *sq,double eventtime)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  list_node *plVar6;
  uint uVar7;
  undefined4 uVar8;
  list_node *plVar9;
  uint32_t bytes;
  bool bVar10;
  uint in_fpscr;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 *local_644;
  uint8_t buf [1537];
  
                    /* Unresolved local var: int buflen@[???]
                       Unresolved local var: int first_buflen@[???]
                       Unresolved local var: queue_message * qm@[???]
                       Unresolved local var: double waketime@[???] */
                    /* Unresolved local var: int ret@[???] */
  if ((sq->serial_fd_type == 0x75) && (iVar3 = tcflush(sq->serial_fd,1), iVar3 < 0)) {
    report_errno((char *)(DAT_00014998 + 0x1497c),iVar3);
  }
                    /* Unresolved local var: list_node * __mptr@[???] */
  pthread_mutex_lock((pthread_mutex_t *)&sq->lock);
  plVar9 = (sq->sent_queue).root.next;
  buf[0] = '~';
  if (&(sq->sent_queue).root == plVar9) {
    bytes = 1;
    local_644 = (undefined1 *)0x0;
  }
  else {
    local_644 = (undefined1 *)0x0;
    bytes = 1;
    do {
      memcpy(buf + bytes,&plVar9[-0xc].prev,(size_t)plVar9[-0xc].next);
      plVar6 = plVar9[-0xc].next;
                    /* Unresolved local var: list_node * __mptr@[???] */
      plVar9 = plVar9->next;
      if (local_644 == (undefined1 *)0x0) {
        local_644 = (undefined1 *)((int)&plVar6->next + 1);
      }
      bytes = (int)&plVar6->next + bytes;
    } while (&(sq->sent_queue).root != plVar9);
  }
  do_write(sq,buf,bytes);
  sq->bytes_retransmit = sq->bytes_retransmit + bytes;
  dVar11 = pollreactor_get_timer(sq->pr,0);
  in_fpscr = in_fpscr & 0xfffffff;
  if (dVar11 == 0.0) {
    uVar4 = (uint)sq->receive_seq;
    uVar7 = *(uint *)((int)&sq->receive_seq + 4);
    uVar1 = (uint)sq->retransmit_seq;
    uVar2 = *(uint *)((int)&sq->retransmit_seq + 4);
    dVar11 = sq->rto;
    bVar10 = uVar2 <= uVar7;
    *(uint *)&sq->ignore_nak_seq = uVar4;
    *(uint *)((int)&sq->ignore_nak_seq + 4) = uVar7;
    if (uVar7 == uVar2) {
      bVar10 = uVar1 <= uVar4;
    }
    uVar5 = (undefined4)sq->send_seq;
    uVar8 = *(undefined4 *)((int)&sq->send_seq + 4);
    if (!bVar10) {
      *(uint *)&sq->ignore_nak_seq = uVar1;
      *(uint *)((int)&sq->ignore_nak_seq + 4) = uVar2;
    }
  }
  else {
    dVar11 = sq->rto + sq->rto;
    in_fpscr = in_fpscr | (uint)(dVar11 < 5.0) << 0x1f;
    bVar10 = SUB41(in_fpscr >> 0x1f,0);
    if (dVar11 == 5.0 || bVar10 != NAN(dVar11)) {
      sq->rto = dVar11;
    }
    else {
      sq->rto = 5.0;
    }
    uVar5 = (undefined4)sq->send_seq;
    uVar8 = *(undefined4 *)((int)&sq->send_seq + 4);
    if (dVar11 != 5.0 && bVar10 == NAN(dVar11)) {
      dVar11 = 5.0;
    }
    *(undefined4 *)&sq->ignore_nak_seq = uVar5;
    *(undefined4 *)((int)&sq->ignore_nak_seq + 4) = uVar8;
  }
  iVar3 = sq->serial_fd_type;
  *(undefined4 *)&sq->retransmit_seq = uVar5;
  *(undefined4 *)((int)&sq->retransmit_seq + 4) = uVar8;
  sq->rtt_sample_seq = 0;
  if (iVar3 == 99) {
    dVar12 = calculate_bittime(sq,bytes);
    sq->idle_time = eventtime + dVar12;
    dVar12 = calculate_bittime(sq,(uint32_t)local_644);
  }
  else {
    dVar13 = (double)VectorUnsignedToFloat(bytes,(byte)(in_fpscr >> 0x16) & 3);
    dVar12 = (double)VectorUnsignedToFloat(local_644,(byte)(in_fpscr >> 0x16) & 3);
    dVar12 = dVar12 * sq->bittime_adjust;
    sq->idle_time = eventtime + sq->bittime_adjust * dVar13;
  }
  pthread_mutex_unlock((pthread_mutex_t *)&sq->lock);
  return dVar12 + eventtime + dVar11;
}



/* ===== pollreactor_add_timer @ 0001499c size=44 ===== */

void pollreactor_add_timer(pollreactor *pr,int pos,void *callback)

{
  pollreactor_timer *ppVar1;
  
  ppVar1 = pr->timers + pos;
  ppVar1->callback = callback;
  *(undefined4 *)&ppVar1->waketime = 0x37e08000;
  *(undefined4 *)((int)&ppVar1->waketime + 4) = 0x4341c379;
  return;
}



/* ===== pollreactor_add_fd @ 000149c8 size=56 ===== */

void pollreactor_add_fd(pollreactor *pr,int pos,int fd,void *callback,int write_only)

{
  short sVar1;
  pollfd *ppVar2;
  _func_void_void_ptr_double **pp_Var3;
  
  ppVar2 = pr->fds;
  pp_Var3 = pr->fd_callbacks;
  ppVar2[pos].fd = fd;
  ppVar2[pos].revents = 0;
  if (write_only == 0) {
    sVar1 = 0x11;
  }
  else {
    sVar1 = 0x10;
  }
  ppVar2[pos].events = sVar1;
  pp_Var3[pos] = callback;
  return;
}



/* ===== pollreactor_free @ 00014a00 size=44 ===== */

void pollreactor_free(pollreactor *pr)

{
  free(pr->fds);
  free(pr->fd_callbacks);
  free(pr->timers);
  free(pr);
  return;
}



/* ===== pollreactor_alloc @ 00014a2c size=156 ===== */

pollreactor * pollreactor_alloc(int num_fds,int num_timers,void *callback_data)

{
  pollreactor *ppVar1;
  pollfd *ppVar2;
  _func_void_void_ptr_double **pp_Var3;
  pollreactor_timer *ppVar4;
  pollreactor_timer *ppVar5;
  pollreactor_timer *ppVar6;
  
                    /* Unresolved local var: pollreactor * pr@[???]
                       Unresolved local var: int i@[???] */
  ppVar1 = malloc(0x28);
  *(undefined4 *)&ppVar1->field_0x24 = 0;
  ppVar1->must_exit = 0;
  ppVar1->callback_data = callback_data;
  ppVar1->num_fds = num_fds;
  ppVar1->num_timers = num_timers;
  *(undefined4 *)&ppVar1->next_timer = 0x37e08000;
  *(undefined4 *)((int)&ppVar1->next_timer + 4) = 0x4341c379;
  ppVar2 = calloc(num_fds << 3,1);
  ppVar1->fds = ppVar2;
  pp_Var3 = calloc(num_fds << 2,1);
  ppVar1->fd_callbacks = pp_Var3;
  ppVar4 = calloc(num_timers * 0x10,1);
  ppVar1->timers = ppVar4;
  if (0 < num_timers) {
    ppVar5 = ppVar4;
    do {
      ppVar6 = ppVar5 + 1;
      *(undefined4 *)&ppVar5->waketime = 0x37e08000;
      *(undefined4 *)((int)&ppVar5->waketime + 4) = 0x4341c379;
      ppVar5 = ppVar6;
    } while (ppVar6 != ppVar4 + num_timers);
  }
  return ppVar1;
}



/* ===== clock_from_time @ 00014ac8 size=52 ===== */

uint64_t clock_from_time(clock_estimate *ce,double time)

{
  DItype DVar1;
  
  DVar1 = __fixdfdi(time - ce->conv_time);
  return DVar1 + ce->conv_clock;
}



/* ===== clock_to_time @ 00014afc size=56 ===== */

double clock_to_time(clock_estimate *ce,uint64_t clock)

{
  uint uVar1;
  double dVar2;
  
  uVar1 = (uint)ce->conv_clock;
  dVar2 = (double)__aeabi_l2d((uint)clock - uVar1,
                              (int)(clock >> 0x20) -
                              (*(int *)((int)&ce->conv_clock + 4) + (uint)((uint)clock < uVar1)));
  return dVar2 / ce->est_freq + ce->conv_time;
}



/* ===== clock_from_clock32 @ 00014b34 size=36 ===== */

uint64_t clock_from_clock32(clock_estimate *ce,uint32_t clock32)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)ce->last_clock;
  uVar1 = clock32 - uVar2;
  return CONCAT44(*(int *)((int)&ce->last_clock + 4) + ((int)uVar1 >> 0x1f) +
                  (uint)CARRY4(uVar2,uVar1),uVar2 + uVar1);
}



/* ===== message_free @ 00014b58 size=4 ===== */

void message_free(queue_message *qm)

{
  (*(code *)PTR_free_00029138)(qm);
  return;
}



/* ===== serialqueue_pull @ 00014b5c size=320 ===== */

void serialqueue_pull(serialqueue *sq,pull_queue_message *pqm)

{
  int iVar1;
  list_node *plVar2;
  list_node *plVar3;
  pthread_mutex_t *__mutex;
  list_node *plVar4;
  list_node *plVar5;
  char *where;
  list_node *plVar6;
  list_node *plVar7;
  list_node lVar8;
  
                    /* Unresolved local var: queue_message * qm@[???] */
  __mutex = &sq->lock;
  pthread_mutex_lock((pthread_mutex_t *)__mutex);
                    /* Unresolved local var: int ret@[???] */
  where = (char *)(DAT_00014c9c + 0x14b94);
  do {
    do {
      plVar3 = (sq->receive_queue).root.next;
      if (plVar3 != &(sq->receive_queue).root) {
        plVar7 = plVar3->next;
        plVar6 = plVar3->prev;
                    /* Unresolved local var: list_node * prev@[???]
                       Unresolved local var: list_node * next@[???] */
        plVar2 = plVar3[-0xc].next;
        plVar7->prev = plVar6;
        plVar6->next = plVar7;
        memcpy(pqm,&plVar3[-0xc].prev,(size_t)plVar2);
        plVar7 = plVar3[-0xc].next;
        lVar8 = plVar3[-1];
        plVar4 = plVar3[-3].next;
        plVar5 = plVar3[-3].prev;
        plVar2 = plVar3[-2].next;
        plVar6 = plVar3[-2].prev;
        pqm->len = (int)plVar7;
        pqm->notify_id = (uint64_t)lVar8;
        *(list_node **)&pqm->sent_time = plVar4;
        *(list_node **)((int)&pqm->sent_time + 4) = plVar5;
        *(list_node **)&pqm->receive_time = plVar2;
        *(list_node **)((int)&pqm->receive_time + 4) = plVar6;
        if (plVar7 == (list_node *)0x0) {
          message_free((queue_message *)(plVar3 + -0xc));
        }
        else {
                    /* Unresolved local var: queue_message * old@[???] */
          plVar2 = (sq->old_receive).root.prev;
          (sq->old_receive).root.prev = plVar3;
          plVar3->next = &(sq->old_receive).root;
          plVar3->prev = plVar2;
          plVar2->next = plVar3;
                    /* Unresolved local var: list_node * __mptr@[???] */
          plVar2 = (sq->old_receive).root.next;
          plVar3 = plVar2->next;
          plVar6 = plVar2->prev;
                    /* Unresolved local var: list_node * prev@[???]
                       Unresolved local var: list_node * next@[???] */
          plVar3->prev = plVar6;
          plVar6->next = plVar3;
          message_free((queue_message *)(plVar2 + -0xc));
        }
        pthread_mutex_unlock((pthread_mutex_t *)__mutex);
        return;
      }
      iVar1 = pollreactor_is_exit(sq->pr);
      if (iVar1 != 0) {
        pqm->len = -1;
        pthread_mutex_unlock((pthread_mutex_t *)__mutex);
        return;
      }
      sq->receive_waiting = 1;
      iVar1 = pthread_cond_wait((pthread_cond_t *)&sq->cond,(pthread_mutex_t *)__mutex);
    } while (iVar1 == 0);
    report_errno(where,iVar1);
  } while( true );
}



/* ===== message_queue_free @ 00014ca0 size=60 ===== */

void message_queue_free(list_head *root)

{
  list_node *plVar1;
  list_node *plVar2;
  list_node *plVar3;
  
  plVar2 = (root->root).next;
  if (plVar2 != &root->root) {
    do {
                    /* Unresolved local var: queue_message * qm@[???] */
      plVar1 = ((list_node *)&plVar2->next)->next;
      plVar3 = plVar2->prev;
                    /* Unresolved local var: list_node * prev@[???]
                       Unresolved local var: list_node * next@[???] */
      plVar1->prev = plVar3;
      plVar3->next = plVar1;
      message_free((queue_message *)(plVar2 + -0xc));
      plVar2 = (root->root).next;
    } while (plVar2 != &root->root);
    return;
  }
  return;
}



/* ===== stepcompress_free @ 00014cdc size=60 ===== */

/* DWARF original prototype: void stepcompress_free(stepcompress * sc, stepcompress * sc) */

void stepcompress_free(stepcompress *sc,stepcompress *sc_1)

{
  if (sc == (stepcompress *)0x0) {
    return;
  }
  free(sc->queue);
  message_queue_free(&sc->msg_queue);
  free_history(sc,0xffffffffffffffff);
  free(sc);
  return;
}



/* ===== serialqueue_free @ 00014d18 size=204 ===== */

/* DWARF original prototype: void serialqueue_free(serialqueue * sq, serialqueue * sq) */

void serialqueue_free(serialqueue *sq,serialqueue *sq_1)

{
  int iVar1;
  list_node *plVar2;
  list_node *plVar3;
  list_node *plVar4;
  
                    /* Unresolved local var: list_node * __mptr@[???]
                       Unresolved local var: command_queue * cq@[???] */
  if (sq != (serialqueue *)0x0) {
    iVar1 = pollreactor_is_exit(sq->pr);
    if (iVar1 == 0) {
      serialqueue_exit(sq);
    }
    pthread_mutex_lock((pthread_mutex_t *)&sq->lock);
    message_queue_free(&sq->sent_queue);
    message_queue_free(&sq->receive_queue);
    message_queue_free(&sq->notify_queue);
    message_queue_free(&sq->old_sent);
    message_queue_free(&sq->old_receive);
    plVar2 = (sq->pending_queues).root.next;
    while (&(sq->pending_queues).root != plVar2) {
                    /* Unresolved local var: command_queue * cq@[???] */
      plVar3 = plVar2->next;
      plVar4 = plVar2->prev;
                    /* Unresolved local var: list_node * prev@[???]
                       Unresolved local var: list_node * next@[???] */
      plVar3->prev = plVar4;
      plVar4->next = plVar3;
      message_queue_free((list_head *)(plVar2 + -1));
      message_queue_free((list_head *)(plVar2 + -2));
      plVar2 = (sq->pending_queues).root.next;
    }
    pthread_mutex_unlock((pthread_mutex_t *)&sq->lock);
    pollreactor_free(sq->pr);
    free(sq);
    return;
  }
  return;
}



/* ===== message_alloc @ 00014de4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

queue_message * message_alloc(void)

{
  queue_message *pqVar1;
  
                    /* Unresolved local var: queue_message * qm@[???] */
  pqVar1 = calloc(0x68,1);
  return pqVar1;
}



/* ===== serialqueue_extract_old @ 00014df0 size=336 ===== */

int serialqueue_extract_old(serialqueue *sq,int sentq,pull_queue_message *q,int max)

{
  int iVar1;
  queue_message *pqVar2;
  list_node *plVar3;
  list_node *plVar4;
  list_node *plVar5;
  int iVar6;
  pull_queue_message *ppVar7;
  bool bVar8;
  list_node lVar9;
  list_head current;
  list_head replacement;
  
                    /* Unresolved local var: int count@[???]
                       Unresolved local var: list_head * rootp@[???]
                       Unresolved local var: int pos@[???] */
  if (sentq == 0) {
    plVar5 = &(sq->old_receive).root;
  }
  else {
    plVar5 = &(sq->old_sent).root;
  }
  iVar6 = 100;
  replacement.root.next = &replacement.root;
  replacement.root.prev = &replacement.root;
  do {
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: queue_message * qm@[???] */
    pqVar2 = message_alloc();
    iVar6 = iVar6 + -1;
    plVar4 = &pqVar2->node;
    (replacement.root.next)->prev = plVar4;
    (pqVar2->node).next = replacement.root.next;
    (pqVar2->node).prev = &replacement.root;
    replacement.root.next = plVar4;
  } while (iVar6 != 0);
  current.root.next = &current.root;
  current.root.prev = &current.root;
  pthread_mutex_lock((pthread_mutex_t *)&sq->lock);
  plVar4 = ((list_node *)&plVar5->next)->next;
  if (plVar5 != plVar4) {
                    /* Unresolved local var: list_node * prev@[???]
                       Unresolved local var: list_node * next@[???]
                       Unresolved local var: list_node * first@[???]
                       Unresolved local var: list_node * last@[???] */
    plVar3 = plVar5->prev;
    plVar4->prev = current.root.prev;
    (current.root.prev)->next = plVar4;
    plVar3->next = &current.root;
    current.root.prev = plVar3;
  }
  plVar4 = replacement.root.prev;
  plVar5->next = plVar5;
  plVar5->prev = plVar5;
                    /* Unresolved local var: list_node * prev@[???]
                       Unresolved local var: list_node * next@[???]
                       Unresolved local var: list_node * first@[???]
                       Unresolved local var: list_node * last@[???] */
  if (replacement.root.next != &replacement.root) {
    (replacement.root.next)->prev = plVar5;
    plVar5->next = replacement.root.next;
    (replacement.root.prev)->next = plVar5;
    plVar5->prev = plVar4;
  }
  iVar6 = 0;
  pthread_mutex_unlock((pthread_mutex_t *)&sq->lock);
  if (current.root.next != &current.root) {
    do {
      plVar5 = current.root.next;
                    /* Unresolved local var: list_node * __mptr@[???] */
      pqVar2 = (queue_message *)(current.root.next + -0xc);
      bVar8 = current.root.next[-0xc].next != (list_node *)0x0;
      iVar1 = 0;
      if (bVar8) {
        iVar1 = max - iVar6;
      }
      ppVar7 = q;
      if ((bVar8 && max != iVar6) && iVar1 < 0 == (bVar8 && SBORROW4(max,iVar6))) {
                    /* Unresolved local var: pull_queue_message * pqm@[???] */
        memcpy(q,&current.root.next[-0xc].prev,(size_t)current.root.next[-0xc].next);
        lVar9 = plVar5[-3];
        ppVar7 = q + 1;
        plVar4 = plVar5[-2].next;
        plVar3 = plVar5[-2].prev;
        iVar6 = iVar6 + 1;
        q->len = (int)plVar5[-0xc].next;
        q->sent_time = (double)lVar9;
        *(list_node **)&q->receive_time = plVar4;
        *(list_node **)((int)&q->receive_time + 4) = plVar3;
      }
                    /* Unresolved local var: queue_message * qm@[???] */
      plVar4 = plVar5->next;
      plVar5 = plVar5->prev;
                    /* Unresolved local var: list_node * prev@[???]
                       Unresolved local var: list_node * next@[???] */
      plVar4->prev = plVar5;
      plVar5->next = plVar4;
      message_free(pqVar2);
      q = ppVar7;
    } while (current.root.next != &current.root);
  }
  return iVar6;
}



/* ===== serialqueue_alloc @ 00014f40 size=644 ===== */

serialqueue * serialqueue_alloc(int serial_fd,char serial_fd_type,int client_id)

{
  serialqueue *callback_data;
  int iVar1;
  pollreactor *pr;
  queue_message *pqVar2;
  int iVar3;
  list_node *plVar4;
  void *callback;
  list_head *plVar5;
  list_head *plVar6;
  
                    /* Unresolved local var: serialqueue * sq@[???]
                       Unresolved local var: int ret@[???] */
  iVar3 = (int)serial_fd_type;
  callback_data = calloc(0x1170,1);
  callback_data->client_id = client_id;
  callback_data->serial_fd = serial_fd;
  callback_data->serial_fd_type = iVar3;
  iVar1 = pipe(callback_data->pipe_fds);
  if (iVar1 == 0) {
    pr = pollreactor_alloc(2,2,callback_data);
    callback = (void *)(DAT_000151c4 + 0x14fb0);
    callback_data->pr = pr;
    pollreactor_add_fd(pr,0,serial_fd,callback,(uint)(iVar3 == 0x66));
    pollreactor_add_fd(callback_data->pr,1,callback_data->pipe_fds[0],
                       (void *)(DAT_000151c8 + 0x14fcc),0);
    pollreactor_add_timer(callback_data->pr,0,(void *)(DAT_000151cc + 0x14fe8));
    pollreactor_add_timer(callback_data->pr,1,(void *)(DAT_000151d0 + 0x14ffc));
    fd_set_non_blocking(serial_fd);
    fd_set_non_blocking(callback_data->pipe_fds[0]);
    fd_set_non_blocking(callback_data->pipe_fds[1]);
    *(undefined4 *)&callback_data->send_seq = 1;
    *(undefined4 *)((int)&callback_data->send_seq + 4) = 0;
    if (iVar3 == 0x66) {
      callback_data->receive_seq = 0xffffffffffffffff;
      *(undefined4 *)&callback_data->rto = 0x37e08000;
      *(undefined4 *)((int)&callback_data->rto + 4) = 0x4341c379;
    }
    else {
      *(undefined4 *)&callback_data->receive_seq = 1;
      *(undefined4 *)((int)&callback_data->receive_seq + 4) = 0;
      *(undefined4 *)&callback_data->rto = 0x9999999a;
      *(undefined4 *)((int)&callback_data->rto + 4) = 0x3f999999;
    }
    *(undefined4 *)&callback_data->need_kick_clock = 0xffffffff;
    *(undefined4 *)((int)&callback_data->need_kick_clock + 4) = 0x7fffffff;
    (callback_data->notify_queue).root.next = &(callback_data->notify_queue).root;
    (callback_data->notify_queue).root.prev = &(callback_data->notify_queue).root;
    iVar1 = 100;
    (callback_data->pending_queues).root.next = &(callback_data->pending_queues).root;
    plVar6 = &callback_data->old_sent;
    plVar5 = &callback_data->old_receive;
    (callback_data->pending_queues).root.prev = &(callback_data->pending_queues).root;
    (callback_data->sent_queue).root.next = &(callback_data->sent_queue).root;
    (callback_data->sent_queue).root.prev = &(callback_data->sent_queue).root;
    (callback_data->receive_queue).root.next = &(callback_data->receive_queue).root;
    (callback_data->receive_queue).root.prev = &(callback_data->receive_queue).root;
    (callback_data->fast_readers).root.next = &(callback_data->fast_readers).root;
    (callback_data->fast_readers).root.prev = &(callback_data->fast_readers).root;
    (callback_data->old_sent).root.next = &plVar6->root;
    (callback_data->old_sent).root.prev = &plVar6->root;
    (callback_data->old_receive).root.next = &plVar5->root;
    (callback_data->old_receive).root.prev = &plVar5->root;
    do {
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: queue_message * qm@[???] */
      pqVar2 = message_alloc();
      plVar4 = (callback_data->old_sent).root.next;
      iVar1 = iVar1 + -1;
      plVar4->prev = &pqVar2->node;
      (pqVar2->node).next = plVar4;
      (pqVar2->node).prev = &plVar6->root;
      (callback_data->old_sent).root.next = &pqVar2->node;
    } while (iVar1 != 0);
    iVar1 = 100;
    do {
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: queue_message * qm@[???] */
      pqVar2 = message_alloc();
      plVar4 = (callback_data->old_receive).root.next;
      iVar1 = iVar1 + -1;
      plVar4->prev = &pqVar2->node;
      (pqVar2->node).next = plVar4;
      (pqVar2->node).prev = &plVar5->root;
      (callback_data->old_receive).root.next = &pqVar2->node;
    } while (iVar1 != 0);
    iVar1 = pthread_mutex_init((pthread_mutex_t *)&callback_data->lock,(pthread_mutexattr_t *)0x0);
    if ((((iVar1 == 0) &&
         (iVar1 = pthread_cond_init((pthread_cond_t *)&callback_data->cond,(pthread_condattr_t *)0x0
                                   ), iVar1 == 0)) &&
        (iVar1 = pthread_mutex_init((pthread_mutex_t *)&callback_data->fast_reader_dispatch_lock,
                                    (pthread_mutexattr_t *)0x0), iVar1 == 0)) &&
       (iVar1 = pthread_create(&callback_data->tid,(pthread_attr_t *)0x0,
                               (__start_routine *)(DAT_000151d4 + 0x15174),callback_data),
       iVar1 == 0)) {
      return callback_data;
    }
  }
  report_errno((char *)(DAT_000151d8 + 0x15190),iVar1);
  return (serialqueue *)0x0;
}



/* ===== message_alloc_and_encode @ 000151dc size=368 ===== */

queue_message * message_alloc_and_encode(uint32_t *data,int len)

{
  uint8_t *puVar1;
  queue_message *pqVar2;
  uint32_t *puVar3;
  uint8_t *puVar4;
  uint8_t *puVar5;
  uint uVar6;
  uint8_t *puVar7;
  uint8_t *puVar8;
  uint8_t *puVar9;
  uint8_t *puVar10;
  int iVar11;
  
                    /* Unresolved local var: queue_message * qm@[???]
                       Unresolved local var: int i@[???]
                       Unresolved local var: uint8_t * p@[???] */
  pqVar2 = message_alloc();
  if (len < 1) {
    iVar11 = 0;
  }
  else {
                    /* Unresolved local var: int32_t sv@[???] */
    puVar3 = data + -1;
    iVar11 = 0;
    puVar5 = pqVar2->msg;
    do {
      puVar3 = puVar3 + 1;
      uVar6 = *puVar3;
      puVar10 = puVar5 + 1;
      if (uVar6 + 0x20 < 0x80) {
        *puVar5 = (byte)uVar6 & 0x7f;
        puVar5 = puVar10;
      }
      else {
        puVar7 = puVar5 + 2;
        if (0x3fff < uVar6 + 0x1000) {
          puVar8 = puVar5 + 3;
          puVar9 = puVar7;
          if (0x1fffff < uVar6 + 0x80000) {
            puVar4 = puVar5 + 4;
            puVar9 = puVar8;
            puVar1 = puVar5;
            if (0xffffffe < uVar6 + 0x4000000 && uVar6 != 0xbffffff) {
              *puVar5 = (byte)(uVar6 >> 0x1c) | 0x80;
              puVar4 = puVar5 + 5;
              puVar9 = puVar5 + 4;
              puVar7 = puVar8;
              puVar10 = puVar7;
              puVar1 = puVar10;
            }
            puVar5 = puVar10;
            puVar10 = puVar7;
            *puVar1 = (byte)(uVar6 >> 0x15) | 0x80;
            puVar8 = puVar4;
          }
          *puVar5 = (byte)(uVar6 >> 0xe) | 0x80;
          puVar7 = puVar8;
          puVar5 = puVar10;
          puVar10 = puVar9;
        }
        *puVar5 = (byte)(uVar6 >> 7) | 0x80;
        *puVar10 = (byte)uVar6 & 0x7f;
        puVar5 = puVar7;
      }
      if (pqVar2->msg + 0x3b < puVar5) {
        errorf((char *)(DAT_0001534c + 0x152e8));
        pqVar2->len = 0;
        return pqVar2;
      }
      iVar11 = iVar11 + 1;
    } while (len != iVar11);
    iVar11 = (int)puVar5 - (int)pqVar2->msg;
  }
  pqVar2->len = iVar11;
  return pqVar2;
}



/* ===== trdispatch_mcu_alloc @ 00015350 size=180 ===== */

trdispatch_mcu *
trdispatch_mcu_alloc
          (trdispatch *td,serialqueue *sq,command_queue *cq,uint32_t trsync_oid,
          uint32_t set_timeout_msgtag,uint32_t trigger_msgtag,uint32_t state_msgtag)

{
  int iVar1;
  trdispatch_mcu *ptVar2;
  queue_message *__ptr;
  list_node *plVar3;
  uint32_t state_prefix [2];
  
                    /* Unresolved local var: trdispatch_mcu * tdm@[???]
                       Unresolved local var: queue_message * dummy@[???] */
  ptVar2 = calloc(0xb0,1);
  state_prefix[0] = state_msgtag;
  ptVar2->trsync_oid = trsync_oid;
  ptVar2->sq = sq;
  ptVar2->cq = cq;
  ptVar2->set_timeout_msgtag = set_timeout_msgtag;
  ptVar2->trigger_msgtag = trigger_msgtag;
  state_prefix[1] = trsync_oid;
  __ptr = message_alloc_and_encode(state_prefix,2);
  memcpy((ptVar2->fr).prefix,__ptr->msg,__ptr->len);
  (ptVar2->fr).prefix_len = __ptr->len;
  free(__ptr);
  iVar1 = DAT_00015404;
  plVar3 = (td->tdm_list).root.prev;
  ptVar2->td = td;
  (ptVar2->node).next = (list_node *)td;
  (ptVar2->fr).func = (fastreader_cb)(iVar1 + 0x153ec);
  (ptVar2->node).prev = plVar3;
  (td->tdm_list).root.prev = &ptVar2->node;
  plVar3->next = &ptVar2->node;
  return ptVar2;
}



/* ===== add_move @ 00015408 size=288 ===== */

void add_move(stepcompress *sc,uint64_t first_clock,step_move *move)

{
  list_node lVar1;
  queue_message *pqVar2;
  uint uVar3;
  list_node *plVar4;
  list_node *plVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  list_node *plVar9;
  list_node *plVar10;
  list_node *plVar11;
  bool bVar12;
  uint32_t msg [5];
  
                    /* Unresolved local var: int32_t addfactor@[???]
                       Unresolved local var: uint32_t ticks@[???]
                       Unresolved local var: uint64_t last_clock@[???]
                       Unresolved local var: queue_message * qm@[???]
                       Unresolved local var: history_steps * hs@[???] */
  uVar6 = (uint)(first_clock >> 0x20);
  msg[1] = sc->oid;
  msg[0] = sc->queue_step_msgtag;
  msg[3] = (uint32_t)move->count;
  msg[2] = move->interval;
  msg[4] = (uint32_t)move->add;
  lVar1 = (list_node)
          (first_clock + (msg[4] * ((int)((msg[3] - 1) * msg[3]) / 2) + msg[2] * (msg[3] - 1)));
  pqVar2 = message_alloc_and_encode(msg,5);
  plVar10 = (list_node *)(uint)move->count;
  uVar3 = (uint)sc->last_step_clock;
  iVar7 = *(int *)((int)&sc->last_step_clock + 4);
  *(uint *)((int)&pqVar2->field_2 + 8) = uVar3;
  *(int *)((int)&pqVar2->field_2 + 0xc) = iVar7;
  *(uint *)&pqVar2->field_2 = uVar3;
  *(int *)((int)&pqVar2->field_2 + 4) = iVar7;
  if (plVar10 == (list_node *)0x1) {
    uVar8 = iVar7 + (uint)(0xcfffffff < uVar3);
    bVar12 = uVar6 <= uVar8;
    if (uVar8 == uVar6) {
      bVar12 = (uint)first_clock <= uVar3 + 0x30000000;
    }
    if (!bVar12 || first_clock == CONCAT44(uVar8,uVar3 + 0x30000000)) {
      (pqVar2->field_2).field_0.req_clock = first_clock;
    }
  }
  plVar4 = (sc->msg_queue).root.prev;
  (sc->msg_queue).root.prev = &pqVar2->node;
  (pqVar2->node).next = &(sc->msg_queue).root;
  (pqVar2->node).prev = plVar4;
  plVar4->next = &pqVar2->node;
  sc->last_step_clock = (uint64_t)lVar1;
  plVar4 = malloc(0x30);
  plVar11 = (list_node *)move->interval;
  plVar5 = *(list_node **)&sc->last_position;
  plVar9 = *(list_node **)((int)&sc->last_position + 4);
  if (sc->sdir == 0) {
    plVar10 = (list_node *)-(int)plVar10;
  }
  plVar4[5].next = (list_node *)(int)move->add;
  plVar4[4].prev = plVar11;
  plVar11 = (sc->history_list).root.next;
  plVar4[3].next = plVar5;
  plVar4[3].prev = plVar9;
  plVar4[1].next = (list_node *)(int)first_clock;
  plVar4[1].prev = (list_node *)(int)(first_clock >> 0x20);
  plVar4[2] = lVar1;
  *(int *)&sc->last_position = (int)&plVar10->next + (int)&plVar5->next;
  *(uint *)((int)&sc->last_position + 4) =
       (int)&plVar9->next + (uint)CARRY4((uint)plVar5,(uint)plVar10) + ((int)plVar10 >> 0x1f);
  plVar4[4].next = plVar10;
  plVar11->prev = plVar4;
  plVar4->next = plVar11;
  plVar4->prev = &(sc->history_list).root;
  (sc->history_list).root.next = plVar4;
  return;
}



/* ===== queue_flush @ 00015528 size=1428 ===== */

int queue_flush(stepcompress *sc,uint64_t move_clock)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint32_t uVar12;
  uint uVar13;
  int iVar14;
  uint32_t *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint *puVar20;
  int iVar21;
  uint32_t uVar22;
  uint uVar23;
  uint32_t *puVar24;
  bool bVar25;
  bool bVar26;
  int local_8c;
  uint local_88;
  uint uStack_84;
  uint *local_80;
  uint local_7c;
  int local_78;
  int local_70;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_44;
  int local_40;
  step_move move;
  
  uVar7 = (uint)(move_clock >> 0x20);
  local_88 = (uint)sc->last_step_clock;
  uStack_84 = *(uint *)((int)&sc->last_step_clock + 4);
  bVar25 = uStack_84 <= uVar7;
  if (uVar7 == uStack_84) {
    bVar25 = local_88 <= (uint)move_clock;
  }
  if (!bVar25 || move_clock == sc->last_step_clock) {
LAB_00015844:
    calc_last_step_print_time(sc);
    return 0;
  }
  local_80 = sc->queue_pos;
  puVar5 = sc->queue_next;
LAB_0001555c:
                    /* Unresolved local var: int ret@[???]
                       Unresolved local var: uint32_t * qlast@[???]
                       Unresolved local var: points point@[???]
                       Unresolved local var: int32_t outer_mininterval@[???]
                       Unresolved local var: int32_t outer_maxinterval@[???]
                       Unresolved local var: int32_t add@[???]
                       Unresolved local var: int32_t minadd@[???]
                       Unresolved local var: int32_t maxadd@[???]
                       Unresolved local var: int32_t bestinterval@[???]
                       Unresolved local var: int32_t bestcount@[???]
                       Unresolved local var: int32_t bestadd@[???]
                       Unresolved local var: int32_t bestreach@[???]
                       Unresolved local var: int32_t zerointerval@[???]
                       Unresolved local var: int32_t zerocount@[???]
                       Unresolved local var: uint32_t lsc@[???]
                       Unresolved local var: uint32_t point@[???]
                       Unresolved local var: uint32_t prevpoint@[???]
                       Unresolved local var: uint32_t max_error@[???] */
  uVar23 = sc->max_error;
                    /* Unresolved local var: points nextpoint@[???]
                       Unresolved local var: int32_t nextmininterval@[???]
                       Unresolved local var: int32_t nextmaxinterval@[???]
                       Unresolved local var: int32_t interval@[???]
                       Unresolved local var: int32_t nextcount@[???]
                       Unresolved local var: int32_t count@[???]
                       Unresolved local var: int32_t addfactor@[???]
                       Unresolved local var: int32_t reach@[???]
                       Unresolved local var: int32_t nextaddfactor@[???]
                       Unresolved local var: int32_t nextreach@[???]
                       Unresolved local var: int32_t c@[???]
                       Unresolved local var: int32_t errdelta@[???] */
  iVar21 = -0x8000;
  local_7c = *local_80 - local_88;
  uVar10 = local_7c >> 1;
  puVar6 = local_80 + 0xffff;
  if (puVar5 < local_80 + 0xffff) {
    puVar6 = puVar5;
  }
  uVar11 = uVar10;
  if (uVar23 < uVar10) {
    uVar11 = uVar23;
  }
  local_78 = local_7c - uVar11;
  local_70 = -0x80000000;
  iVar19 = 0x7fff;
  local_64 = 0;
  local_40 = 1;
  local_60 = 0;
  local_68 = 0;
  local_8c = 0;
  local_44 = 1;
  do {
    uVar11 = 1;
    uVar17 = local_7c;
    puVar5 = local_80;
    iVar4 = local_78;
    do {
      uVar18 = uVar17;
      uVar13 = uVar11;
      puVar20 = puVar5 + 1;
      uVar11 = uVar13 + 1;
      if (puVar6 <= puVar20) {
                    /* Unresolved local var: int32_t count@[???] */
        iVar21 = (int)(short)local_8c;
        uVar10 = uVar13 & 0xffff;
        move.count = (uint16_t)uVar13;
        move.add = (short)local_8c;
        move.interval = uVar18;
        goto LAB_000156f8;
      }
                    /* Unresolved local var: int32_t nextaddfactor@[???]
                       Unresolved local var: int32_t c@[???]
                       Unresolved local var: uint32_t lsc@[???]
                       Unresolved local var: uint32_t point@[???]
                       Unresolved local var: uint32_t prevpoint@[???]
                       Unresolved local var: uint32_t max_error@[???] */
      if (local_80 < puVar20) {
        uVar10 = *puVar5;
      }
      uVar16 = *puVar20 - local_88;
      iVar1 = (int)(uVar11 * uVar13) >> 1;
      uVar17 = uVar16;
      if (local_80 < puVar20) {
        uVar17 = *puVar20 - uVar10;
      }
      iVar14 = local_8c * iVar1;
      uVar17 = uVar17 >> 1;
      if (uVar23 <= uVar17) {
        uVar17 = uVar23;
      }
      iVar8 = uVar16 - uVar17;
      iVar3 = iVar8 - iVar14;
      if ((int)(iVar4 * uVar11) < iVar3) {
        if (-1 < iVar3) {
          iVar3 = uVar11 + iVar3 + -1;
        }
        iVar4 = __divsi3(iVar3,uVar11);
      }
      iVar9 = uVar18 * uVar11;
      iVar3 = uVar16 - iVar14;
      uVar10 = uVar18;
      if (iVar9 - iVar3 != 0 && iVar3 <= iVar9) {
        if (iVar3 < 0) {
          iVar3 = (iVar3 - uVar11) + 1;
        }
        uVar10 = __divsi3(iVar3,uVar11);
      }
      uVar17 = uVar10;
      puVar5 = puVar20;
    } while (iVar4 <= (int)uVar10);
    iVar3 = local_8c * ((int)(uVar13 * (uVar13 - 1)) >> 1) + uVar18 * uVar13;
    if ((local_70 < iVar3) || ((int)local_68 < (int)uVar18 && iVar3 == local_70)) {
      local_40 = local_8c;
      if (local_8c == 0) {
        local_60 = uVar18;
        local_64 = uVar13;
      }
      local_70 = iVar3;
      local_68 = uVar18;
      local_44 = uVar13;
      sVar2 = (short)local_8c;
      if (0x200 < (int)uVar13) break;
    }
    if (iVar14 + iVar9 < iVar8) {
      iVar21 = local_8c + 1;
      local_7c = uVar10;
    }
    else {
      iVar19 = local_8c + -1;
      local_78 = iVar4;
    }
    if (uVar13 != 1) {
      iVar4 = __aeabi_uidiv(uVar23 * 0xb,uVar13 * uVar13);
      if (iVar21 < local_8c - iVar4) {
        iVar21 = local_8c - iVar4;
      }
      if (local_8c + iVar4 <= iVar19) {
        iVar19 = local_8c + iVar4;
      }
    }
    iVar8 = iVar8 - local_7c * uVar11;
    if (iVar21 * iVar1 < iVar8) {
      if (-1 < iVar8) {
        iVar8 = iVar1 + iVar8 + -1;
      }
      iVar21 = __divsi3(iVar8,iVar1);
    }
    iVar4 = uVar16 - local_78 * uVar11;
    if (iVar19 * iVar1 - iVar4 != 0 && iVar4 <= iVar19 * iVar1) {
      if (iVar4 < 0) {
        iVar4 = (iVar4 - iVar1) + 1;
      }
      iVar19 = __divsi3(iVar4,iVar1);
    }
    sVar2 = (short)local_40;
    if (iVar19 < iVar21) break;
    uVar10 = iVar19 - iVar21;
    if ((int)uVar10 < 0) {
      uVar10 = uVar10 + 3;
    }
    local_8c = iVar19 - ((int)uVar10 >> 2);
  } while( true );
  local_40._0_2_ = sVar2;
  if ((int)(local_64 + ((int)local_64 >> 4)) < (int)local_44) {
    uVar10 = local_44 & 0xffff;
    move.add = (short)local_40;
    iVar21 = (int)(short)local_40;
    move.count = (uint16_t)local_44;
    move.interval = local_68;
  }
  else {
    uVar10 = local_64 & 0xffff;
    iVar21 = 0;
    move.add = 0;
    move.interval = local_60;
    move.count = (uint16_t)local_64;
  }
LAB_000156f8:
                    /* Unresolved local var: uint32_t interval@[???]
                       Unresolved local var: uint32_t p@[???]
                       Unresolved local var: uint16_t i@[???] */
  if (((uVar10 == 0) || (1 < uVar10 && (iVar21 == 0 && move.interval == 0))) ||
     ((int)move.interval < 0)) {
    errorf((char *)(DAT_00015ac4 + 0x15aa8));
    return -0x3b00a8ed;
  }
                    /* Unresolved local var: points point@[???] */
  puVar15 = sc->queue_pos;
                    /* Unresolved local var: uint32_t lsc@[???]
                       Unresolved local var: uint32_t point@[???]
                       Unresolved local var: uint32_t prevpoint@[???]
                       Unresolved local var: uint32_t max_error@[???] */
  uVar13 = *puVar15 - local_88;
  uVar11 = 0;
  uVar17 = 0;
  uVar22 = 0;
  uVar12 = move.interval;
  while( true ) {
    uVar17 = uVar17 + uVar12;
    uVar18 = uVar13 - uVar22 >> 1;
    if (uVar23 < uVar18) {
      uVar18 = uVar23;
    }
    bVar26 = uVar17 <= uVar13 - uVar18;
    bVar25 = uVar13 - uVar18 == uVar17;
    if (!bVar26 || bVar25) {
      bVar26 = uVar13 <= uVar17;
      bVar25 = uVar17 == uVar13;
    }
    if (bVar26 && !bVar25) {
      errorf((char *)(DAT_00015abc + 0x157c8));
      return -0x3b00a8ed;
    }
    uVar22 = 0;
    if ((int)uVar12 < 0) {
      errorf((char *)(DAT_00015ac0 + 0x15a00));
      return -0x3b00a8ed;
    }
    uVar11 = uVar11 + 1 & 0xffff;
    uVar12 = uVar12 + iVar21;
    puVar24 = puVar15 + uVar11;
    if (uVar10 <= uVar11) break;
    if (puVar15 < puVar24) {
      uVar22 = puVar24[-1];
    }
    uVar13 = puVar15[uVar11] - local_88;
    if (puVar15 < puVar24) {
      uVar22 = uVar22 - local_88;
    }
  }
  add_move(sc,CONCAT44(uStack_84 + CARRY4(local_88,move.interval),local_88 + move.interval),&move);
  puVar5 = sc->queue_next;
  local_80 = sc->queue_pos + move.count;
  if (puVar5 <= local_80) {
    sc->queue_next = sc->queue;
    sc->queue_pos = sc->queue;
    calc_last_step_print_time(sc);
    return 0;
  }
  local_88 = (uint)sc->last_step_clock;
  uStack_84 = *(uint *)((int)&sc->last_step_clock + 4);
  bVar25 = uVar7 <= uStack_84;
  if (uStack_84 == uVar7) {
    bVar25 = (uint)move_clock <= local_88;
  }
  sc->queue_pos = local_80;
  if (bVar25) goto LAB_00015844;
  goto LAB_0001555c;
}



/* ===== queue_append @ 00015ac8 size=600 ===== */

int queue_append(stepcompress *sc)

{
  uint64_t first_clock;
  queue_message *pqVar1;
  uint uVar2;
  uint32_t *__src;
  list_node *plVar3;
  uint32_t *puVar4;
  uint uVar5;
  uint uVar6;
  size_t __n;
  uint uVar7;
  int iVar8;
  uint32_t *puVar9;
  bool bVar10;
  uint32_t msg [3];
  
  uVar5 = sc->next_step_dir;
  puVar4 = sc->queue_next;
  if (uVar5 == sc->sdir) {
    uVar5 = (uint)sc->last_step_clock;
    iVar8 = *(int *)((int)&sc->last_step_clock + 4);
  }
  else {
                    /* Unresolved local var: int ret@[???]
                       Unresolved local var: queue_message * qm@[???] */
    if ((sc->queue_pos < puVar4) && (iVar8 = queue_flush(sc,0xffffffffffffffff), iVar8 != 0)) {
      return iVar8;
    }
    msg[0] = sc->set_next_step_dir_msgtag;
    msg[1] = sc->oid;
    sc->sdir = uVar5;
    msg[2] = uVar5 ^ sc->invert_sdir;
    pqVar1 = message_alloc_and_encode(msg,3);
    plVar3 = (sc->msg_queue).root.prev;
    uVar5 = (uint)sc->last_step_clock;
    iVar8 = *(int *)((int)&sc->last_step_clock + 4);
    puVar4 = sc->queue_next;
    *(uint *)((int)&pqVar1->field_2 + 8) = uVar5;
    *(int *)((int)&pqVar1->field_2 + 0xc) = iVar8;
    (sc->msg_queue).root.prev = &pqVar1->node;
    (pqVar1->node).prev = plVar3;
    (pqVar1->node).next = &(sc->msg_queue).root;
    plVar3->next = &pqVar1->node;
  }
  uVar6 = (uint)sc->next_step_clock;
  uVar7 = *(uint *)((int)&sc->next_step_clock + 4);
  first_clock = sc->next_step_clock;
  uVar2 = iVar8 + (uint)(0xcfffffff < uVar5);
  bVar10 = uVar2 <= uVar7;
  if (uVar7 == uVar2) {
    bVar10 = uVar5 + 0x30000000 <= uVar6;
  }
  if (bVar10) {
                    /* Unresolved local var: uint64_t step_clock@[???]
                       Unresolved local var: int ret@[???] */
    sc->next_step_clock = 0;
    if (sc->queue_pos < puVar4) {
      iVar8 = queue_flush(sc,CONCAT44(uVar7 - (uVar6 < 0x2fffffff),uVar6 + 0xd0000001));
      if (iVar8 != 0) {
        return iVar8;
      }
      uVar5 = (uint)sc->last_step_clock;
      uVar2 = *(int *)((int)&sc->last_step_clock + 4) + (uint)(0xcfffffff < uVar5);
      bVar10 = uVar2 <= uVar7;
      if (uVar7 == uVar2) {
        bVar10 = uVar5 + 0x30000000 <= uVar6;
      }
      if (!bVar10) {
        puVar4 = sc->queue_next;
        sc->queue_next = puVar4 + 1;
        *puVar4 = uVar6;
        return 0;
      }
    }
    msg[0] = uVar6 - uVar5;
    msg[1] = 1;
    add_move(sc,first_clock,(step_move *)msg);
    calc_last_step_print_time(sc);
    return 0;
  }
  puVar9 = sc->queue_end;
  if (puVar4 < puVar9) {
    sc->queue_next = puVar4 + 1;
    *puVar4 = uVar6;
    sc->next_step_clock = 0;
    return 0;
  }
  __src = sc->queue_pos;
  __n = (int)puVar4 - (int)__src;
                    /* Unresolved local var: uint32_t flush@[???]
                       Unresolved local var: int ret@[???] */
  if ((0x41f3c < (int)__n) && (__src < puVar4)) {
    iVar8 = queue_flush(sc,CONCAT44(iVar8 + (uint)CARRY4(uVar5,puVar4[-0xffff] - uVar5),
                                    uVar5 + (puVar4[-0xffff] - uVar5)));
    if (iVar8 != 0) {
      return iVar8;
    }
    puVar4 = sc->queue_next;
    puVar9 = sc->queue_end;
    if (puVar4 < puVar9) goto LAB_00015be4;
    __src = sc->queue_pos;
    __n = (int)puVar4 - (int)__src;
  }
                    /* Unresolved local var: int in_use@[???] */
  puVar4 = sc->queue;
  if (puVar4 < __src) {
    memmove(puVar4,__src,__n);
    puVar9 = sc->queue;
  }
  else {
                    /* Unresolved local var: int alloc@[???] */
    if (puVar4 == puVar9) {
      iVar8 = 0x400;
    }
    else {
      iVar8 = (int)puVar9 - (int)puVar4 >> 2;
    }
    for (; iVar8 <= (int)__n >> 2; iVar8 = iVar8 * 2) {
    }
    puVar9 = realloc(puVar4,iVar8 * 4);
    sc->queue = puVar9;
    sc->queue_end = puVar9 + iVar8;
  }
  puVar4 = (uint32_t *)((int)puVar9 + __n);
  sc->queue_pos = puVar9;
LAB_00015be4:
  sc->queue_next = puVar4 + 1;
  *puVar4 = (uint32_t)sc->next_step_clock;
  sc->next_step_clock = 0;
  return 0;
}



/* ===== stepcompress_flush @ 00015d20 size=108 ===== */

int stepcompress_flush(stepcompress *sc,uint64_t move_clock)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  
  uVar2 = (uint)(move_clock >> 0x20);
  uVar3 = (uint)sc->next_step_clock;
  uVar4 = *(uint *)((int)&sc->next_step_clock + 4);
  bVar6 = uVar2 <= uVar4;
  bVar5 = uVar4 == uVar2;
  if (bVar5) {
    bVar6 = (uint)move_clock <= uVar3;
  }
  if (!bVar6 || move_clock == sc->next_step_clock) {
    uVar2 = 1;
  }
  if (bVar6 && (!bVar5 || uVar3 != (uint)move_clock)) {
    uVar2 = 0;
  }
  if (uVar3 == 0 && uVar4 == 0) {
    uVar2 = 0;
  }
                    /* Unresolved local var: int ret@[???] */
  if ((uVar2 != 0) && (iVar1 = queue_append(sc), iVar1 != 0)) {
    return iVar1;
  }
  if (sc->queue_pos < sc->queue_next) {
    iVar1 = queue_flush(sc,move_clock);
    return iVar1;
  }
  return 0;
}



/* ===== steppersync_flush @ 00015d8c size=552 ===== */

/* DWARF original prototype: int steppersync_flush(steppersync * ss, uint64_t move_clock,
   steppersync * ss, uint64_t move_clock) */

int steppersync_flush(steppersync *ss,uint64_t move_clock,steppersync *ss_1,uint64_t move_clock_1)

{
  list_node **pplVar1;
  list_node *plVar2;
  int iVar3;
  int iVar4;
  list_node *plVar5;
  list_node *plVar6;
  int iVar7;
  list_node *plVar8;
  list_node *plVar9;
  list_node *plVar10;
  int iVar11;
  int iVar12;
  list_node *plVar13;
  stepcompress **ppsVar14;
  list_node *plVar16;
  bool bVar17;
  list_node lVar18;
  list_node *local_58;
  list_node *plStack_54;
  list_node *local_38;
  list_node *plStack_34;
  list_head msgs;
  stepcompress **ppsVar15;
  
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: list_head msgs@[???]
                       Unresolved local var: stepcompress * sc@[???]
                       Unresolved local var: queue_message * m@[???]
                       Unresolved local var: list_node * __mptr@[???]
                       Unresolved local var: uint64_t req_clock@[???]
                       Unresolved local var: queue_message * qm@[???]
                       Unresolved local var: uint64_t next_avail@[???]
                       Unresolved local var: int ret@[???] */
  iVar11 = ss->sc_num;
  if (0 < iVar11) {
    iVar7 = 0;
    do {
                    /* Unresolved local var: int ret@[???] */
      ppsVar14 = ss->sc_list + iVar7;
      iVar7 = iVar7 + 1;
      iVar11 = stepcompress_flush(*ppsVar14,move_clock);
      if (iVar11 != 0) {
        return iVar11;
      }
      iVar11 = ss->sc_num;
    } while (iVar7 < iVar11);
  }
                    /* Unresolved local var: int i@[???] */
                    /* Unresolved local var: uint64_t req_clock@[???]
                       Unresolved local var: queue_message * qm@[???]
                       Unresolved local var: uint64_t next_avail@[???] */
  msgs.root.next = &msgs.root;
  msgs.root.prev = &msgs.root;
joined_r0x00015e10:
  if (0 < iVar11) {
    plVar5 = (list_node *)0xffffffff;
    plVar6 = (list_node *)0x7fffffff;
    plVar16 = (list_node *)0x0;
    ppsVar14 = ss->sc_list;
    do {
      ppsVar15 = ppsVar14 + 1;
                    /* Unresolved local var: stepcompress * sc@[???]
                       Unresolved local var: queue_message * m@[???]
                       Unresolved local var: list_node * __mptr@[???] */
      plVar2 = ((*ppsVar14)->msg_queue).root.next;
      if (plVar2 != &((*ppsVar14)->msg_queue).root) {
        plVar9 = plVar2[-2].prev;
        bVar17 = plVar6 <= plVar9;
        if (plVar9 == plVar6) {
          bVar17 = plVar5 <= plVar2[-2].next;
        }
        if (!bVar17) {
          plVar16 = plVar2 + -0xc;
          plVar5 = plVar2[-2].next;
          plVar6 = plVar9;
        }
      }
      ppsVar14 = ppsVar15;
    } while (ss->sc_list + iVar11 != ppsVar15);
    if (plVar16 != (list_node *)0x0) {
      plVar2 = plVar16[9].next;
      plVar9 = plVar16[9].prev;
      if (plVar2 == (list_node *)0x0 && plVar9 == (list_node *)0x0) {
        lVar18 = *(list_node *)ss->move_clocks;
        goto LAB_00015f48;
      }
      local_38 = (list_node *)move_clock;
      plStack_34 = (list_node *)(move_clock >> 0x20);
      bVar17 = plVar6 <= plStack_34;
      if (plStack_34 == plVar6) {
        bVar17 = plVar5 <= local_38;
      }
      if (bVar17) {
        plVar5 = (list_node *)ss->move_clocks;
        iVar12 = ss->num_move_clocks;
        lVar18 = *plVar5;
                    /* Unresolved local var: uint64_t * mc@[???]
                       Unresolved local var: int nmc@[???]
                       Unresolved local var: int pos@[???] */
        iVar7 = 0;
        do {
          while( true ) {
                    /* Unresolved local var: int child1_pos@[???]
                       Unresolved local var: int child2_pos@[???]
                       Unresolved local var: uint64_t child2_clock@[???]
                       Unresolved local var: uint64_t child1_clock@[???] */
            iVar3 = iVar7 * 2 + 2;
            iVar4 = iVar7 * 2 + 1;
            if (iVar12 <= iVar3) break;
            plVar6 = plVar5[iVar3].next;
            plVar13 = plVar5[iVar3].prev;
            if (iVar4 < iVar12) goto LAB_00015ef0;
            bVar17 = plVar13 <= plVar9;
            if (plVar9 == plVar13) {
              bVar17 = plVar6 <= plVar2;
            }
            if (!bVar17 || plVar9 == plVar13 && plVar2 == plVar6) goto LAB_00015fac;
LAB_00015ed0:
            plVar5[iVar7].next = plVar6;
            plVar5[iVar7].prev = plVar13;
            iVar7 = iVar3;
          }
          if (iVar12 <= iVar4) goto LAB_00015fac;
          plVar6 = (list_node *)0xffffffff;
          plVar13 = (list_node *)0xffffffff;
LAB_00015ef0:
          plVar8 = plVar5[iVar4].next;
          plVar10 = plVar5[iVar4].prev;
          bVar17 = plVar10 <= plVar13;
          if (plVar13 == plVar10) {
            bVar17 = plVar8 <= plVar6;
          }
          local_58 = plVar6;
          plStack_54 = plVar13;
          if (bVar17 && (plVar13 != plVar10 || plVar6 != plVar8)) {
            local_58 = plVar8;
            plStack_54 = plVar10;
          }
          bVar17 = plStack_54 <= plVar9;
          if (plVar9 == plStack_54) {
            bVar17 = local_58 <= plVar2;
          }
          if (!bVar17 || plVar9 == plStack_54 && plVar2 == local_58) goto LAB_00015fac;
          bVar17 = plVar10 <= plVar13;
          if (plVar13 == plVar10) {
            bVar17 = plVar8 <= plVar6;
          }
          if (!bVar17 || plVar13 == plVar10 && plVar6 == plVar8) goto LAB_00015ed0;
          plVar5[iVar7].next = plVar8;
          plVar5[iVar7].prev = plVar10;
          iVar7 = iVar4;
        } while( true );
      }
    }
  }
  if (msgs.root.next != &msgs.root) {
    serialqueue_send_batch(ss->sq,ss->cq,(list_head *)&msgs.root);
  }
  return 0;
LAB_00015fac:
  plVar5[iVar7].next = plVar2;
  plVar5[iVar7].prev = plVar9;
LAB_00015f48:
  plVar5 = plVar16[0xc].next;
  plVar6 = plVar16[0xc].prev;
  plVar16[9] = lVar18;
                    /* Unresolved local var: list_node * prev@[???]
                       Unresolved local var: list_node * next@[???] */
  plVar5->prev = plVar6;
  plVar6->next = plVar5;
  plVar16[0xc].prev = msgs.root.prev;
  plVar16[0xc].next = &msgs.root;
  pplVar1 = &(msgs.root.prev)->next;
  msgs.root.prev = plVar16 + 0xc;
  *pplVar1 = plVar16 + 0xc;
  goto joined_r0x00015e10;
}



/* ===== stepcompress_queue_msg @ 00015fb4 size=92 ===== */

/* DWARF original prototype: int stepcompress_queue_msg(stepcompress * sc, uint32_t * data, int len,
   stepcompress * sc, uint32_t * data, int len) */

int stepcompress_queue_msg
              (stepcompress *sc,uint32_t *data,int len,stepcompress *sc_1,uint32_t *data_1,int len_1
              )

{
  int iVar1;
  queue_message *pqVar2;
  list_node *plVar3;
  undefined4 uVar4;
  
                    /* Unresolved local var: int ret@[???]
                       Unresolved local var: queue_message * qm@[???] */
  iVar1 = stepcompress_flush(sc,0xffffffffffffffff);
  if (iVar1 == 0) {
                    /* Unresolved local var: int ret@[???]
                       Unresolved local var: queue_message * qm@[???] */
    pqVar2 = message_alloc_and_encode(data,len);
    plVar3 = (sc->msg_queue).root.prev;
    uVar4 = *(undefined4 *)((int)&sc->last_step_clock + 4);
    *(int *)((int)&pqVar2->field_2 + 8) = (int)sc->last_step_clock;
    *(undefined4 *)((int)&pqVar2->field_2 + 0xc) = uVar4;
    (sc->msg_queue).root.prev = &pqVar2->node;
    (pqVar2->node).next = &(sc->msg_queue).root;
    (pqVar2->node).prev = plVar3;
    plVar3->next = &pqVar2->node;
  }
  return iVar1;
}



/* ===== stepcompress_set_last_position @ 00016010 size=108 ===== */

/* DWARF original prototype: int stepcompress_set_last_position(stepcompress * sc, uint64_t clock,
   int64_t last_position, stepcompress * sc, uint64_t clock, int64_t last_position) */

int stepcompress_set_last_position
              (stepcompress *sc,uint64_t clock,int64_t last_position,stepcompress *sc_1,
              uint64_t clock_1,int64_t last_position_1)

{
  int iVar1;
  list_node *plVar2;
  list_node *plVar3;
  
                    /* Unresolved local var: int ret@[???]
                       Unresolved local var: history_steps * hs@[???] */
  iVar1 = stepcompress_flush(sc,0xffffffffffffffff);
  if (iVar1 == 0) {
                    /* Unresolved local var: int ret@[???]
                       Unresolved local var: history_steps * hs@[???] */
    sc->last_position = last_position;
    plVar2 = malloc(0x30);
    plVar3 = (sc->history_list).root.next;
    plVar2[4].next = (list_node *)0x0;
    plVar2[4].prev = *(list_node **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    plVar2[5].next = *(list_node **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    plVar2[5].prev = *(list_node **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    plVar2[2].next = (list_node *)(int)clock;
    plVar2[2].prev = (list_node *)(int)(clock >> 0x20);
    plVar2[1].next = (list_node *)(int)clock;
    plVar2[1].prev = (list_node *)(int)(clock >> 0x20);
    plVar2[3].next = (list_node *)(undefined4)last_position;
    plVar2[3].prev = (list_node *)last_position._4_4_;
    plVar3->prev = plVar2;
    (sc->history_list).root.next = plVar2;
    plVar2->next = plVar3;
    plVar2->prev = &(sc->history_list).root;
  }
  return iVar1;
}



/* ===== stepcompress_reset @ 0001607c size=64 ===== */

int stepcompress_reset(stepcompress *sc,uint64_t last_step_clock)

{
  int iVar1;
  
                    /* Unresolved local var: int ret@[???] */
  iVar1 = stepcompress_flush(sc,0xffffffffffffffff);
  if (iVar1 == 0) {
    sc->last_step_clock = last_step_clock;
    sc->sdir = -1;
    calc_last_step_print_time(sc);
  }
  return iVar1;
}



/* ===== stepcompress_commit @ 000160bc size=24 ===== */

int stepcompress_commit(stepcompress *sc)

{
  int iVar1;
  
  if ((int)sc->next_step_clock == 0 && *(int *)((int)&sc->next_step_clock + 4) == 0) {
    return 0;
  }
  iVar1 = queue_append(sc);
  return iVar1;
}



/* ===== stepcompress_append @ 000160d4 size=180 ===== */

int stepcompress_append(stepcompress *sc,int sdir,double print_time,double step_time)

{
  uint64_t uVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  UDItype UVar6;
  
                    /* Unresolved local var: double offset@[???]
                       Unresolved local var: double rel_sc@[???]
                       Unresolved local var: uint64_t step_clock@[???] */
  dVar4 = sc->mcu_freq;
  UVar6 = __fixunsdfdi((print_time - sc->last_step_print_time) + step_time);
  uVar2 = (uint)sc->next_step_clock;
  iVar3 = *(int *)((int)&sc->next_step_clock + 4);
  uVar1 = UVar6 + sc->last_step_clock;
  if (uVar2 != 0 || iVar3 != 0) {
                    /* Unresolved local var: int ret@[???] */
                    /* Unresolved local var: double diff@[???] */
    if ((sc->next_step_dir != sdir) &&
       (dVar4 = dVar4 * DAT_00016188,
       dVar5 = (double)__aeabi_l2d((uint)uVar1 - uVar2,
                                   (int)(uVar1 >> 0x20) - (iVar3 + (uint)((uint)uVar1 < uVar2))),
       dVar5 < dVar4)) {
      sc->next_step_dir = sdir;
      sc->next_step_clock = 0;
      return 0;
    }
    iVar3 = queue_append(sc);
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  sc->next_step_clock = uVar1;
  sc->next_step_dir = sdir;
  return 0;
}



/* ===== itersolve_gen_steps_range @ 00016190 size=932 ===== */

int32_t itersolve_gen_steps_range(stepper_kinematics *sk,move *m,double abs_start,double abs_end)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint sdir;
  int iVar4;
  bool bVar5;
  sk_calc_callback p_Var6;
  double dVar7;
  double dVar8;
  double dVar9;
  double step_time;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double local_88;
  double local_70;
  
                    /* Unresolved local var: sk_calc_callback calc_position_cb@[???]
                       Unresolved local var: double half_step@[???]
                       Unresolved local var: double start@[???]
                       Unresolved local var: double end@[???]
                       Unresolved local var: timepos old_guess@[???]
                       Unresolved local var: timepos guess@[???]
                       Unresolved local var: int sdir@[???]
                       Unresolved local var: int is_dir_change@[???]
                       Unresolved local var: int have_bracket@[???]
                       Unresolved local var: int check_oscillate@[???]
                       Unresolved local var: double target@[???]
                       Unresolved local var: double last_time@[???]
                       Unresolved local var: double low_time@[???]
                       Unresolved local var: double high_time@[???] */
  dVar13 = DAT_00016538;
  p_Var6 = sk->calc_position_cb;
                    /* Unresolved local var: double rel_dist@[???]
                       Unresolved local var: double guess_dist@[???]
                       Unresolved local var: double og_dist@[???]
                       Unresolved local var: double next_time@[???]
                       Unresolved local var: int ret@[???]
                       Unresolved local var: double seek_time_delta@[???] */
  bVar3 = false;
  bVar1 = false;
  step_time = abs_start - m->print_time;
  dVar14 = sk->commanded_pos;
  local_70 = sk->step_dist * 0.5;
  dVar7 = abs_end - m->print_time;
  if (step_time < 0.0) {
    step_time = 0.0;
  }
  if (m->move_t < dVar7) {
    dVar7 = m->move_t;
  }
  sdir = stepcompress_get_step_dir(sk->sc);
  dVar12 = local_70;
  if (sdir == 0) {
    dVar12 = -local_70;
  }
  dVar11 = step_time + dVar13;
  if (dVar7 < step_time + dVar13) {
    dVar11 = dVar7;
  }
  dVar12 = sk->commanded_pos + dVar12;
  dVar13 = step_time;
  dVar10 = step_time;
  dVar15 = dVar14;
  local_88 = step_time;
  bVar5 = false;
LAB_00016398:
  do {
    while( true ) {
      dVar9 = step_time;
      dVar8 = dVar14;
      step_time = (-(dVar9 * (dVar15 - dVar12)) + dVar10 * (dVar8 - dVar12)) /
                  ((dVar8 - dVar12) - (dVar15 - dVar12));
      if ((step_time <= dVar13) || (dVar11 <= step_time)) {
        if (bVar1) {
          bVar3 = false;
          step_time = (dVar13 + dVar11) * 0.5;
        }
        else {
          if (dVar7 <= dVar9) {
            if (sdir == 0) {
              local_70 = -local_70;
            }
            sk->commanded_pos = dVar12 - local_70;
            if (sk->post_cb != (sk_post_callback)0x0) {
              (*sk->post_cb)(sk);
            }
            return 0;
          }
          dVar14 = -local_88 + dVar11 * 2.0;
          step_time = dVar11;
          dVar11 = dVar7;
          if (dVar14 <= dVar7) {
            dVar11 = dVar14;
          }
        }
      }
      dVar14 = (*p_Var6)(sk,m,step_time);
      dVar16 = dVar14 - dVar12;
      if (DAT_00016540 < ABS(dVar16)) break;
LAB_000162ec:
      iVar4 = stepcompress_append(sk->sc,sdir,m->print_time,step_time);
      if (iVar4 != 0) {
        return iVar4;
      }
      if (sdir == 0) {
        dVar12 = (dVar12 - local_70) - local_70;
      }
      else {
        dVar12 = dVar12 + local_70 + local_70;
      }
      dVar13 = (step_time - local_88) * 1.5;
      dVar11 = DAT_00016540;
      if (((DAT_00016540 <= dVar13) && (dVar11 = dVar13, bVar5)) && (DAT_00016538 < dVar13)) {
        dVar11 = DAT_00016538;
      }
      bVar3 = false;
      dVar11 = step_time + dVar11;
      bVar1 = false;
      dVar13 = step_time;
      dVar10 = dVar9;
      dVar15 = dVar8;
      local_88 = step_time;
      bVar5 = bVar3;
      if (dVar7 < dVar11) {
        dVar11 = dVar7;
        bVar5 = false;
      }
    }
    if (sdir == 0) {
      dVar16 = -dVar16;
    }
    bVar2 = bVar3;
    if (0.0 < dVar16) {
      dVar11 = step_time;
      if (((bVar1) && (dVar9 <= dVar13)) && (bVar2 = true, bVar3)) {
        dVar8 = dVar14;
        dVar9 = step_time;
        bVar2 = bVar3;
      }
LAB_000162c8:
      if (dVar11 - dVar13 <= DAT_00016540) goto LAB_000162ec;
      bVar1 = true;
      bVar3 = bVar2;
LAB_00016424:
      dVar10 = dVar9;
      dVar15 = dVar8;
      if ((!bVar5) && (-local_70 <= dVar16)) {
        stepcompress_commit(sk->sc);
      }
      goto LAB_00016398;
    }
    if (-(DAT_00016548 + local_70 * 2.0) <= dVar16) {
      dVar13 = step_time;
      if (bVar1) goto LAB_000162c8;
      goto LAB_00016424;
    }
    if (sdir != 0) {
      dVar12 = (dVar12 - local_70) - local_70;
    }
    else {
      dVar12 = dVar12 + local_70 + local_70;
    }
    sdir = (uint)(sdir == 0);
    if (step_time - local_88 <= DAT_00016540) {
      bVar5 = true;
      goto LAB_000162ec;
    }
    bVar1 = true;
    bVar3 = false;
    dVar13 = local_88;
    dVar10 = dVar9;
    dVar11 = step_time;
    dVar15 = dVar8;
    bVar5 = true;
  } while( true );
}



/* ===== message_fill @ 00016550 size=48 ===== */

queue_message * message_fill(uint8_t *data,int len)

{
  queue_message *pqVar1;
  
                    /* Unresolved local var: queue_message * qm@[???] */
  pqVar1 = message_alloc();
  memcpy(pqVar1->msg,data,len);
  pqVar1->len = len;
  return pqVar1;
}



/* ===== serialqueue_send @ 00016580 size=68 ===== */

void serialqueue_send(serialqueue *sq,command_queue *cq,uint8_t *msg,int len,uint64_t min_clock,
                     uint64_t req_clock,uint64_t notify_id)

{
  queue_message *qm;
  
                    /* Unresolved local var: queue_message * qm@[???] */
  qm = message_fill(msg,len);
  (qm->field_2).field_0.min_clock = min_clock;
  (qm->field_2).field_0.req_clock = req_clock;
  qm->notify_id = notify_id;
  serialqueue_send_one(sq,cq,qm);
  return;
}



/* ===== msgblock_decode @ 000165c4 size=136 ===== */

int msgblock_decode(uint32_t *data,int data_len,uint8_t *msg,int msg_len)

{
  byte bVar1;
  uint32_t *puVar2;
  uint32_t uVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  
                    /* Unresolved local var: uint8_t * p@[???]
                       Unresolved local var: uint8_t * end@[???] */
  pbVar5 = msg + msg_len + -3;
  pbVar4 = msg + 2;
  if (data_len == 0) {
LAB_00016640:
    iVar6 = 0;
    if (pbVar5 != pbVar4) {
      iVar6 = -1;
    }
    return iVar6;
  }
  if (pbVar4 < pbVar5) {
    iVar6 = data_len + -2;
    puVar2 = data + -1;
                    /* Unresolved local var: uint8_t * p@[???]
                       Unresolved local var: uint8_t c@[???]
                       Unresolved local var: uint32_t v@[???] */
    do {
      bVar1 = *pbVar4;
      uVar3 = bVar1 & 0x7f;
      if ((bVar1 & 0x60) == 0x60) {
        uVar3 = uVar3 | 0xffffffe0;
      }
      while (pbVar4 = pbVar4 + 1, (bVar1 & 0x80) != 0) {
        bVar1 = *pbVar4;
        uVar3 = bVar1 & 0x7f | uVar3 << 7;
      }
      puVar2 = puVar2 + 1;
      *puVar2 = uVar3;
      if (iVar6 == -1) goto LAB_00016640;
      iVar6 = iVar6 + -1;
    } while (pbVar4 < pbVar5);
  }
  return -1;
}



/* ===== handle_trsync_state @ 0001664c size=540 ===== */

void handle_trsync_state(fastreader *fr,uint8_t *data,int len)

{
  longlong lVar1;
  int iVar2;
  queue_message *pqVar3;
  list_node *plVar4;
  command_queue *cq;
  list_node *plVar5;
  list_node *plVar6;
  list_node **pplVar7;
  list_node *plVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  uint64_t uVar13;
  uint32_t msg [3];
  uint32_t fields [5];
  
                    /* Unresolved local var: trdispatch_mcu * tdm@[???]
                       Unresolved local var: int ret@[???]
                       Unresolved local var: uint32_t can_trigger@[???]
                       Unresolved local var: uint32_t clock@[???]
                       Unresolved local var: trdispatch * td@[???]
                       Unresolved local var: double min_time@[???]
                       Unresolved local var: double next_min_time@[???]
                       Unresolved local var: trdispatch_mcu * m@[???]
                       Unresolved local var: trdispatch_mcu * min_tdm@[???]
                       Unresolved local var: fastreader * __mptr@[???]
                       Unresolved local var: list_node * __mptr@[???] */
  iVar2 = msgblock_decode(fields,5,data,len);
  if ((iVar2 == 0) && (fields[1] == *(uint32_t *)(fr[1].prefix + 4))) {
    plVar6 = fr[1].node.next;
    pthread_mutex_lock((pthread_mutex_t *)(plVar6 + 1));
    if (plVar6[4].prev != (list_node *)0x0) {
      if (fields[2] == 0) {
                    /* Unresolved local var: list_node * __mptr@[???]
                       Unresolved local var: trdispatch_mcu * m@[???] */
        plVar5 = plVar6->next;
        plVar6[4].prev = (list_node *)0x0;
        if (plVar6 != plVar5) {
          do {
                    /* Unresolved local var: queue_message * qm@[???] */
            msg[0] = (uint32_t)plVar5[3].next;
            msg[1] = (uint32_t)plVar5[2].next;
            msg[2] = (uint32_t)plVar5[-1].prev[5].next;
            pqVar3 = message_alloc_and_encode(msg,3);
            serialqueue_send_one
                      ((serialqueue *)plVar5[1].next,(command_queue *)plVar5[1].prev,pqVar3);
                    /* Unresolved local var: list_node * __mptr@[???] */
            plVar5 = plVar5->next;
          } while (plVar6 != plVar5);
        }
      }
      else {
        serialqueue_get_clock_est
                  ((serialqueue *)fr[1].prefix_len,(clock_estimate *)(fr[1].prefix + 0x30));
        uVar13 = clock_from_clock32((clock_estimate *)(fr[1].prefix + 0x30),fields[4]);
                    /* Unresolved local var: list_node * __mptr@[???] */
        plVar5 = plVar6->next;
        *(uint64_t *)(fr[1].prefix + 0x10) = uVar13;
        if (plVar6 != plVar5) {
          pplVar7 = (list_node **)0x0;
          dVar11 = DAT_00016868;
          dVar12 = DAT_00016868;
          do {
                    /* Unresolved local var: double status_time@[???] */
            dVar10 = clock_to_time((clock_estimate *)&plVar5[7].prev,*(uint64_t *)&plVar5[3].prev);
            if ((dVar10 < dVar11) && (dVar11 = dVar10, dVar10 < dVar12)) {
              pplVar7 = &plVar5[-0xb].prev;
              dVar11 = dVar12;
              dVar12 = dVar10;
            }
                    /* Unresolved local var: list_node * __mptr@[???] */
            plVar5 = plVar5->next;
          } while (plVar6 != plVar5);
          plVar5 = plVar6->next;
          if (dVar11 == DAT_00016868) {
            dVar11 = dVar12;
          }
          if (plVar6 != plVar5) {
                    /* Unresolved local var: double status_time@[???]
                       Unresolved local var: uint64_t expire@[???]
                       Unresolved local var: queue_message * qm@[???] */
            do {
              dVar10 = dVar12;
              if (pplVar7 == &plVar5[-0xb].prev) {
                dVar10 = dVar11;
              }
              uVar13 = clock_from_time((clock_estimate *)&plVar5[7].prev,dVar10);
              lVar1 = uVar13 + *(longlong *)&plVar5[5].prev;
              plVar8 = (list_node *)lVar1;
              plVar4 = (list_node *)
                       ((int)((ulonglong)lVar1 >> 0x20) -
                       ((int)&(plVar5[5].next)->next + (uint)(plVar8 < plVar5[4].prev)));
              bVar9 = plVar5[7].next <= plVar4;
              if (plVar4 == plVar5[7].next) {
                bVar9 = plVar5[6].prev <= (list_node *)((int)plVar8 - (int)plVar5[4].prev);
              }
              if (bVar9) {
                msg[0] = (uint32_t)plVar5[2].prev;
                *(longlong *)&plVar5[4].prev = lVar1;
                msg[1] = (uint32_t)plVar5[2].next;
                msg[2] = (uint32_t)plVar8;
                pqVar3 = message_alloc_and_encode(msg,3);
                plVar4 = plVar5[5].next;
                cq = (command_queue *)plVar5[1].prev;
                *(list_node **)((int)&pqVar3->field_2 + 8) = plVar5[4].prev;
                *(list_node **)((int)&pqVar3->field_2 + 0xc) = plVar4;
                serialqueue_send_one((serialqueue *)plVar5[1].next,cq,pqVar3);
              }
                    /* Unresolved local var: list_node * __mptr@[???] */
              plVar5 = plVar5->next;
            } while (plVar6 != plVar5);
          }
        }
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)(plVar6 + 1));
    return;
  }
  return;
}



/* ===== msgblock_crc16_ccitt @ 00016870 size=92 ===== */

uint16_t msgblock_crc16_ccitt(uint8_t *buf,uint8_t len)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
                    /* Unresolved local var: uint16_t crc@[???] */
  if (len != '\0') {
    uVar1 = 0xffff;
    pbVar4 = buf;
    do {
                    /* Unresolved local var: uint8_t data@[???] */
      pbVar3 = pbVar4 + 1;
      uVar2 = (*pbVar4 ^ uVar1 ^ (*pbVar4 ^ uVar1) << 4) & 0xff;
      uVar1 = (uVar1 >> 8 | uVar2 << 8) ^ uVar2 << 3 ^ uVar2 >> 4;
      pbVar4 = pbVar3;
    } while (pbVar3 != buf + (byte)(len - 1) + 1);
    return (uint16_t)uVar1;
  }
  return 0xffff;
}



/* ===== command_event @ 000168cc size=1688 ===== */

double command_event(serialqueue *sq,double eventtime)

{
  code *pcVar1;
  byte bVar2;
  double dVar3;
  uint64_t uVar4;
  uint16_t uVar5;
  uint uVar6;
  list_node *plVar7;
  uint uVar8;
  list_node *plVar9;
  undefined4 uVar10;
  uint uVar11;
  list_node *extraout_r2;
  list_node *plVar12;
  size_t sVar13;
  uint uVar14;
  list_node *extraout_r3;
  list_node *plVar15;
  int iVar16;
  uint8_t *puVar17;
  uint64_t *puVar18;
  list_node *plVar19;
  queue_message *pqVar20;
  list_head *plVar21;
  uint8_t *buf_00;
  list_node *plVar22;
  list_node *plVar23;
  uint32_t bytes;
  int iVar24;
  int iVar25;
  bool bVar26;
  uint in_fpscr;
  double dVar27;
  double extraout_d0;
  double dVar28;
  double extraout_d0_00;
  double dVar29;
  double dVar30;
  uint64_t uVar31;
  list_node lVar32;
  UDItype UVar33;
  uint8_t auStack_698 [16];
  double *local_688;
  uint uStack_684;
  list_node local_678;
  list_node local_670;
  list_node *local_668;
  list_node *plStack_664;
  uint8_t buf [1536];
  
  uVar4 = DAT_00016a78;
                    /* Unresolved local var: int buflen@[???]
                       Unresolved local var: double waketime@[???] */
  dVar3 = DAT_00016a70;
  puVar18 = &sq->send_seq;
                    /* Unresolved local var: double idletime@[???]
                       Unresolved local var: uint64_t ack_clock@[???]
                       Unresolved local var: uint64_t min_stalled_clock@[???]
                       Unresolved local var: uint64_t min_ready_clock@[???]
                       Unresolved local var: command_queue * cq@[???]
                       Unresolved local var: uint64_t reqclock_delta@[???]
                       Unresolved local var: uint64_t wantclock@[???] */
  bytes = 0;
  pthread_mutex_lock((pthread_mutex_t *)&sq->lock);
  local_688 = (double *)*puVar18;
  uStack_684 = *(uint *)((int)&sq->send_seq + 4);
  do {
    uVar6 = (uint)sq->receive_seq;
    uVar8 = *(uint *)((int)&sq->receive_seq + 4);
    dVar30 = dVar3;
    if (uStack_684 == uVar8 + (local_688 < uVar6) && (int)local_688 - uVar6 < 0x18 ||
        (uVar6 & uVar8) == 0xffffffff) {
      bVar26 = uStack_684 <= uVar8;
      if (uVar8 == uStack_684) {
        bVar26 = local_688 <= uVar6;
      }
      if ((!bVar26) && (sq->receive_window != 0)) {
                    /* Unresolved local var: int need_ack_bytes@[???] */
        iVar24 = sq->need_ack_bytes + 0x40;
        uVar11 = (uint)sq->last_ack_seq;
        uVar14 = *(uint *)((int)&sq->last_ack_seq + 4);
        bVar26 = uVar14 <= uVar8;
        if (uVar8 == uVar14) {
          bVar26 = uVar11 <= uVar6;
        }
        if (bVar26 && (uVar8 != uVar14 || uVar6 != uVar11)) {
          iVar24 = iVar24 + sq->last_ack_bytes;
        }
        if (sq->receive_window < iVar24) goto LAB_00016e84;
      }
      dVar29 = sq->idle_time;
      uVar6 = in_fpscr & 0xfffffff | (uint)(eventtime < dVar29) << 0x1f |
              (uint)(eventtime == dVar29) << 0x1e;
      in_fpscr = uVar6 | (uint)(NAN(eventtime) || NAN(dVar29)) << 0x1c;
      bVar2 = (byte)(uVar6 >> 0x18);
      if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
        dVar29 = eventtime;
      }
      if (sq->serial_fd_type == 99) {
        dVar27 = calculate_bittime(sq,bytes + 5);
      }
      else {
        dVar27 = (double)VectorUnsignedToFloat(bytes + 5,(byte)(in_fpscr >> 0x16) & 3);
        dVar27 = dVar27 * sq->bittime_adjust;
      }
      local_688 = &sq->idle_time;
      plVar21 = &sq->pending_queues;
      dVar29 = dVar29 + dVar27;
      uVar31 = clock_from_time(&sq->ce,dVar29);
      dVar27 = DAT_00016a80;
                    /* Unresolved local var: list_node * __mptr@[DW_OP_reg5(r5)] */
      plVar19 = (sq->pending_queues).root.next;
      plStack_664 = extraout_r3;
      local_668 = extraout_r2;
      if (&plVar21->root == plVar19) {
        local_668 = (list_node *)0xffffffff;
        plStack_664 = (list_node *)0x7fffffff;
      }
      local_678.next = (list_node *)uVar31;
      local_678.prev = (list_node *)(uVar31 >> 0x20);
      dVar28 = extraout_d0;
      if (&plVar21->root == plVar19) {
        local_670.prev = plStack_664;
        local_670.next = local_668;
      }
      else {
        local_670.next = (list_node *)0xffffffff;
        local_670.prev = (list_node *)0x7fffffff;
                    /* Unresolved local var: queue_message * qm@[???]
                       Unresolved local var: uint64_t req_clock@[???]
                       Unresolved local var: double bgtime@[???]
                       Unresolved local var: double bgoffset@[???] */
        local_668 = (list_node *)0xffffffff;
        plStack_664 = (list_node *)0x7fffffff;
        do {
          plVar12 = plVar19 + -2;
          plVar15 = plVar12->next;
          if (plVar12 != plVar15) {
                    /* Unresolved local var: queue_message * qm@[???] */
            plVar7 = plVar15[-3].next;
            plVar9 = plVar15[-3].prev;
            bVar26 = plVar9 <= local_678.prev;
            if (local_678.prev == plVar9) {
              bVar26 = plVar7 <= local_678.next;
            }
            if (bVar26) {
              iVar24 = sq->stalled_bytes;
              iVar25 = sq->ready_bytes;
              do {
                plVar22 = plVar15->next;
                plVar7 = plVar15->prev;
                    /* Unresolved local var: list_node * prev@[???]
                       Unresolved local var: list_node * next@[???] */
                plVar23 = plVar15[-0xc].next;
                plVar22->prev = plVar7;
                iVar24 = iVar24 - (int)plVar23;
                plVar9 = plVar19[-1].prev;
                iVar25 = (int)&plVar23->next + iVar25;
                plVar7->next = plVar22;
                plVar19[-1].prev = plVar15;
                plVar15->prev = plVar9;
                plVar15->next = plVar19 + -1;
                plVar9->next = plVar15;
                plVar15 = plVar12->next;
                if (plVar15 == plVar12) {
                  sq->ready_bytes = iVar25;
                  sq->stalled_bytes = iVar24;
                  goto LAB_00016ae0;
                }
                plVar7 = plVar15[-3].next;
                plVar9 = plVar15[-3].prev;
                bVar26 = plVar9 <= local_678.prev;
                if (local_678.prev == plVar9) {
                  bVar26 = plVar7 <= local_678.next;
                }
              } while (bVar26);
              sq->ready_bytes = iVar25;
              sq->stalled_bytes = iVar24;
            }
            bVar26 = plVar9 <= plStack_664;
            if (plStack_664 == plVar9) {
              bVar26 = plVar7 <= local_668;
            }
            if (bVar26 && (plStack_664 != plVar9 || local_668 != plVar7)) {
              local_668 = plVar7;
              plStack_664 = plVar9;
            }
          }
LAB_00016ae0:
          plVar15 = plVar19[-1].next;
          if (plVar15 != plVar19 + -1) {
            lVar32 = plVar15[-2];
            dVar28 = dVar29;
            if (bytes == 0) {
              dVar28 = *local_688;
            }
            if (plVar15[-2].prev == (list_node *)0x7fffffff && plVar15[-2].next == (list_node *)0x0)
            {
              lVar32 = (list_node)clock_from_time(&sq->ce,dVar28 + dVar27);
              dVar28 = extraout_d0_00;
            }
            bVar26 = lVar32.prev <= local_670.prev;
            if (local_670.prev == lVar32.prev) {
              bVar26 = lVar32.next <= local_670.next;
            }
            if (bVar26 && lVar32 != local_670) {
              local_670 = lVar32;
            }
          }
                    /* Unresolved local var: list_node * __mptr@[???] */
          plVar19 = plVar19->next;
        } while (&plVar21->root != plVar19);
      }
      iVar24 = sq->ready_bytes;
      if (iVar24 < 0x3b) {
        dVar27 = (sq->ce).est_freq;
        in_fpscr = in_fpscr & 0xfffffff | (uint)(dVar27 == 0.0) << 0x1e;
        if (SUB41(in_fpscr >> 0x1e,0)) {
          if (iVar24 != 0) goto LAB_00016e60;
          sq->need_kick_clock = uVar4;
LAB_00016b68:
          if (bytes != 0) goto LAB_00016b7c;
          goto LAB_00016e90;
        }
        UVar33 = __fixunsdfdi(dVar28);
        plVar19 = (list_node *)(UVar33 + uVar31 >> 0x20);
        bVar26 = local_670.prev <= plVar19;
        if (plVar19 == local_670.prev) {
          bVar26 = local_670.next <= (list_node *)(UVar33 + uVar31);
        }
        if (bVar26) goto LAB_00016e60;
        plVar19 = (list_node *)((int)local_670.next - (int)(list_node *)UVar33);
        local_670.prev =
             (list_node *)
             ((int)local_670.prev -
             ((int)(UVar33 >> 0x20) + (uint)(local_670.next < (list_node *)UVar33)));
        bVar26 = plStack_664 <= local_670.prev;
        if (local_670.prev == plStack_664) {
          bVar26 = local_668 <= plVar19;
        }
        if (bVar26 && (local_670.prev != plStack_664 || plVar19 != local_668)) {
          local_670.prev = plStack_664;
          plVar19 = local_668;
        }
        *(list_node **)&sq->need_kick_clock = plVar19;
        *(list_node **)((int)&sq->need_kick_clock + 4) = local_670.prev;
        dVar30 = (double)__floatundidf((int)plVar19 - (int)local_678.next,
                                       (int)local_670.prev -
                                       ((int)&(local_678.prev)->next +
                                       (uint)(plVar19 < local_678.next)));
        dVar30 = dVar30 / dVar27 + dVar29;
        in_fpscr = in_fpscr & 0xfffffff | (uint)(dVar30 == 0.0) << 0x1e;
        if (!SUB41(in_fpscr >> 0x1e,0)) goto LAB_00016b68;
      }
      else {
LAB_00016e60:
        dVar30 = 0.0;
      }
      if (0x600 < bytes + 0x40) {
        if (bytes != 0) goto LAB_00016b7c;
        goto LAB_00016bd8;
      }
      buf_00 = buf + bytes;
    }
    else {
LAB_00016e84:
      if (bytes == 0) {
LAB_00016e90:
        pthread_mutex_unlock((pthread_mutex_t *)&sq->lock);
        return dVar30;
      }
LAB_00016b7c:
                    /* Unresolved local var: double idletime@[???] */
      local_688 = &sq->idle_time;
      do_write(sq,buf,bytes);
      sq->bytes_write = sq->bytes_write + bytes;
      in_fpscr = in_fpscr & 0xfffffff | (uint)(*local_688 < eventtime) << 0x1f;
      dVar29 = *local_688;
      if (SUB41(in_fpscr >> 0x1f,0)) {
        dVar29 = eventtime;
      }
      if (sq->serial_fd_type == 99) {
        dVar27 = calculate_bittime(sq,bytes);
      }
      else {
        dVar27 = (double)VectorUnsignedToFloat(bytes,(byte)(in_fpscr >> 0x16) & 3);
        dVar27 = dVar27 * sq->bittime_adjust;
      }
      *local_688 = dVar29 + dVar27;
LAB_00016bd8:
      in_fpscr = in_fpscr & 0xfffffff | (uint)(dVar30 == 0.0) << 0x1e;
      if (!SUB41(in_fpscr >> 0x1e,0)) goto LAB_00016e90;
      iVar24 = sq->ready_bytes;
      buf_00 = buf;
      bytes = 0;
    }
    local_688 = &sq->idle_time;
                    /* Unresolved local var: int len@[???]
                       Unresolved local var: uint16_t crc@[???]
                       Unresolved local var: double idletime@[???]
                       Unresolved local var: queue_message * out@[???] */
    iVar25 = 2;
    while (iVar24 != 0) {
      while( true ) {
                    /* Unresolved local var: uint64_t min_clock@[???]
                       Unresolved local var: command_queue * q@[???]
                       Unresolved local var: command_queue * cq@[???]
                       Unresolved local var: queue_message * qm@[???]
                       Unresolved local var: list_node * __mptr@[???] */
        plVar19 = (sq->pending_queues).root.next;
        if (&(sq->pending_queues).root == plVar19) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0,0x16f7c);
          (*pcVar1)();
        }
        pqVar20 = (queue_message *)0x0;
        plVar15 = (list_node *)0x0;
        local_678.next = (list_node *)0xffffffff;
        local_678.prev = (list_node *)0x7fffffff;
        do {
          plVar12 = plVar19[-1].next;
          if (plVar12 != plVar19 + -1) {
                    /* Unresolved local var: queue_message * m@[???]
                       Unresolved local var: list_node * __mptr@[???] */
            bVar26 = local_678.prev <= plVar12[-2].prev;
            if (plVar12[-2].prev == local_678.prev) {
              bVar26 = local_678.next <= plVar12[-2].next;
            }
            if (!bVar26) {
              pqVar20 = (queue_message *)(plVar12 + -0xc);
              plVar15 = plVar19 + -2;
              local_678 = plVar12[-2];
            }
          }
                    /* Unresolved local var: list_node * __mptr@[???] */
          plVar19 = plVar19->next;
        } while (&(sq->pending_queues).root != plVar19);
        sVar13 = pqVar20->len;
        if (0x3d < (int)(sVar13 + iVar25)) goto LAB_00016cf4;
        plVar12 = (pqVar20->node).prev;
        plVar19 = (pqVar20->node).next;
                    /* Unresolved local var: list_node * prev@[???]
                       Unresolved local var: list_node * next@[???] */
        plVar19->prev = plVar12;
        plVar12->next = plVar19;
        if ((plVar15[1].next == plVar15 + 1) && (plVar15->next == plVar15)) {
          plVar19 = plVar15[2].next;
          plVar15 = plVar15[2].prev;
                    /* Unresolved local var: list_node * prev@[???]
                       Unresolved local var: list_node * next@[???] */
          plVar19->prev = plVar15;
          plVar15->next = plVar19;
        }
        memcpy(buf_00 + iVar25,pqVar20->msg,sVar13);
        uVar31 = pqVar20->notify_id;
        iVar16 = *(int *)((int)&pqVar20->notify_id + 4);
        iVar24 = iVar24 - pqVar20->len;
        iVar25 = iVar25 + pqVar20->len;
        sq->ready_bytes = iVar24;
        if ((int)uVar31 == 0 && iVar16 == 0) break;
        plVar19 = (sq->notify_queue).root.prev;
        uVar10 = *(undefined4 *)((int)&sq->send_seq + 4);
        *(int *)((int)&pqVar20->field_2 + 8) = (int)*puVar18;
        *(undefined4 *)((int)&pqVar20->field_2 + 0xc) = uVar10;
        (sq->notify_queue).root.prev = &pqVar20->node;
        (pqVar20->node).next = &(sq->notify_queue).root;
        (pqVar20->node).prev = plVar19;
        plVar19->next = &pqVar20->node;
        if (iVar24 == 0) goto LAB_00016cf4;
      }
      message_free(pqVar20);
      iVar24 = sq->ready_bytes;
    }
LAB_00016cf4:
    sVar13 = iVar25 + 3;
    uVar31 = *puVar18;
    buf[bytes] = (uint8_t)sVar13;
    buf_00[1] = (byte)uVar31 & 0xf | 0x10;
    uVar5 = msgblock_crc16_ccitt(buf_00,(uint8_t)sVar13 + 0xfd);
    iVar24 = sq->serial_fd_type;
    bytes = bytes + sVar13;
    dVar30 = *local_688;
    uVar6 = in_fpscr & 0xfffffff | (uint)(eventtime < dVar30) << 0x1f |
            (uint)(eventtime == dVar30) << 0x1e;
    in_fpscr = uVar6 | (uint)(NAN(eventtime) || NAN(dVar30)) << 0x1c;
    bVar2 = (byte)(uVar6 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
      dVar30 = eventtime;
    }
    puVar17 = buf_00 + iVar25;
    *puVar17 = (uint8_t)(uVar5 >> 8);
    puVar17[1] = (uint8_t)uVar5;
    puVar17[2] = '~';
    if (iVar24 == 99) {
      dVar29 = calculate_bittime(sq,bytes);
    }
    else {
      dVar29 = (double)VectorUnsignedToFloat(bytes,(byte)(in_fpscr >> 0x16) & 3);
      dVar29 = dVar29 * sq->bittime_adjust;
    }
    pqVar20 = message_alloc();
    memcpy(pqVar20->msg,buf_00,sVar13);
    plVar19 = (sq->sent_queue).root.next;
    pqVar20->len = sVar13;
    (pqVar20->field_2).field_1.sent_time = eventtime;
    (pqVar20->field_2).field_1.receive_time = dVar30 + dVar29;
    if (plVar19 == &(sq->sent_queue).root) {
      pollreactor_update_timer(sq->pr,0,dVar30 + dVar29 + sq->rto);
    }
    plVar19 = (sq->sent_queue).root.prev;
    uVar6 = (uint)*puVar18;
    iVar24 = *(int *)((int)&sq->send_seq + 4);
    if ((int)sq->rtt_sample_seq == 0 && *(int *)((int)&sq->rtt_sample_seq + 4) == 0) {
      *(uint *)&sq->rtt_sample_seq = uVar6;
      *(int *)((int)&sq->rtt_sample_seq + 4) = iVar24;
    }
    local_688 = (double *)(uVar6 + 1);
    uStack_684 = iVar24 + (uint)(0xfffffffe < uVar6);
    iVar24 = sq->need_ack_bytes;
    *(double **)puVar18 = local_688;
    *(uint *)((int)&sq->send_seq + 4) = uStack_684;
    sq->need_ack_bytes = iVar24 + sVar13;
    (sq->sent_queue).root.prev = &pqVar20->node;
    (pqVar20->node).prev = plVar19;
    (pqVar20->node).next = &(sq->sent_queue).root;
    plVar19->next = &pqVar20->node;
  } while( true );
}



/* ===== msgblock_check @ 00016f80 size=208 ===== */

/* DWARF original prototype: int msgblock_check(uint8_t * need_sync, uint8_t * buf, int buf_len,
   uint8_t * need_sync, uint8_t * buf, int buf_len) */

int msgblock_check(uint8_t *need_sync,uint8_t *buf,int buf_len,uint8_t *need_sync_1,uint8_t *buf_1,
                  int buf_len_1)

{
  uint8_t uVar1;
  uint8_t uVar2;
  uint16_t uVar3;
  void *pvVar4;
  uint uVar5;
  
                    /* Unresolved local var: uint8_t msglen@[???]
                       Unresolved local var: uint8_t msgseq@[???]
                       Unresolved local var: uint16_t msgcrc@[???]
                       Unresolved local var: uint16_t crc@[???]
                       Unresolved local var: uint8_t * next_sync@[???] */
  if (buf_len < 5) {
    return 0;
  }
                    /* Unresolved local var: uint8_t msglen@[???]
                       Unresolved local var: uint8_t msgseq@[???]
                       Unresolved local var: uint16_t msgcrc@[???]
                       Unresolved local var: uint16_t crc@[???]
                       Unresolved local var: uint8_t * next_sync@[???] */
  if (*need_sync == '\0') {
    uVar5 = (uint)*buf;
    if ((uVar5 - 5 < 0x3c) && ((buf[1] & 0xf0) == 0x10)) {
      if (buf_len < (int)uVar5) {
        return 0;
      }
      if ((buf[uVar5 - 1] == '~') &&
         (uVar1 = buf[uVar5 - 3], uVar2 = buf[uVar5 - 2], uVar3 = msgblock_crc16_ccitt(buf,*buf - 3)
         , CONCAT11(uVar1,uVar2) == uVar3)) {
        return uVar5;
      }
    }
  }
  pvVar4 = memchr(buf,0x7e,buf_len);
  if (pvVar4 != (void *)0x0) {
    *need_sync = '\0';
    return ~((int)pvVar4 - (int)buf);
  }
  *need_sync = '\x01';
  return -buf_len;
}



/* ===== input_event @ 00017050 size=1844 ===== */

void input_event(serialqueue *sq,double eventtime)

{
  uint uVar1;
  byte bVar2;
  ssize_t sVar3;
  uint32_t bytes;
  pollreactor *ppVar4;
  queue_message *pqVar5;
  int iVar6;
  uint8_t *puVar7;
  list_node *plVar8;
  size_t __n;
  uint8_t *buf;
  undefined1 *puVar9;
  list_node *plVar10;
  uint8_t *extraout_r3;
  uint8_t *extraout_r3_00;
  uint8_t *extraout_r3_01;
  uint8_t *extraout_r3_02;
  uint64_t *puVar11;
  uint8_t *extraout_r3_03;
  list_head *plVar12;
  uint8_t *puVar13;
  list_node *plVar14;
  undefined1 *puVar15;
  list_node *plVar16;
  uint32_t uVar17;
  pthread_mutex_t *__mutex;
  list_node *plVar18;
  list_node *plVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  uint in_fpscr;
  double dVar23;
  list_node lVar24;
  double dVar25;
  double dVar26;
  uint8_t *in_stack_ffffff70;
  undefined1 *in_stack_ffffff74;
  can_frame cf;
  
  if (sq->serial_fd_type == 99) {
                    /* Unresolved local var: int ret@[???] */
    sVar3 = read(sq->serial_fd,&cf,0x10);
    if (sVar3 < 1) {
      report_errno((char *)(DAT_000177a8 + 0x17778),sVar3);
      pollreactor_do_exit(sq->pr);
      return;
    }
    if (cf.can_id != sq->client_id + 1U) {
      return;
    }
    memcpy(sq->input_buf + sq->input_pos,cf.data,(uint)cf.can_dlc);
    iVar6 = (uint)cf.can_dlc + sq->input_pos;
    sq->input_pos = iVar6;
  }
  else {
                    /* Unresolved local var: int ret@[???] */
    sVar3 = read(sq->serial_fd,sq->input_buf + sq->input_pos,0x1000 - sq->input_pos);
    if (sVar3 < 1) {
      if (sVar3 == 0) {
        errorf((char *)(DAT_000177a0 + 0x17498));
      }
      else {
        report_errno((char *)(DAT_000177a4 + 0x17768),sVar3);
      }
      pollreactor_do_exit(sq->pr);
      return;
    }
    iVar6 = sVar3 + sq->input_pos;
    sq->input_pos = iVar6;
  }
                    /* Unresolved local var: int len@[???]
                       Unresolved local var: uint64_t rseq@[???]
                       Unresolved local var: int must_wake@[???]
                       Unresolved local var: fastreader * fr@[???]
                       Unresolved local var: uint64_t sent_seq@[???]
                       Unresolved local var: double delta@[???]
                       Unresolved local var: double rttvar4@[???] */
  buf = sq->input_buf;
  puVar7 = buf;
  do {
    bytes = msgblock_check(&sq->need_sync,buf,iVar6,puVar7,in_stack_ffffff70,(int)in_stack_ffffff74)
    ;
    if (bytes == 0) {
      return;
    }
    __mutex = &sq->lock;
    if ((int)bytes < 1) {
      uVar17 = -bytes;
      pthread_mutex_lock((pthread_mutex_t *)__mutex);
      sq->bytes_invalid = sq->bytes_invalid - bytes;
      pthread_mutex_unlock((pthread_mutex_t *)__mutex);
      puVar7 = extraout_r3_02;
    }
    else {
      pthread_mutex_lock((pthread_mutex_t *)__mutex);
      puVar13 = *(uint8_t **)&sq->receive_seq;
      puVar15 = *(undefined1 **)((int)&sq->receive_seq + 4);
      puVar7 = (uint8_t *)((uint)puVar13 & 0xfffffff0 | sq->input_buf[1] & 0xf);
      uVar17 = bytes;
      if (puVar13 != puVar7) {
        in_stack_ffffff70 = puVar7;
        in_stack_ffffff74 = puVar15;
        if (puVar7 < puVar13) {
          in_stack_ffffff70 = puVar7 + 0x10;
          in_stack_ffffff74 = puVar15 + ((uint8_t *)0xffffffef < puVar7);
        }
        puVar9 = *(undefined1 **)((int)&sq->send_seq + 4);
        bVar21 = in_stack_ffffff74 <= puVar9;
        if (puVar9 == in_stack_ffffff74) {
          bVar21 = in_stack_ffffff70 <= *(uint8_t **)&sq->send_seq;
        }
        if ((!bVar21) && (puVar15 != (undefined1 *)0x0 || puVar13 != (uint8_t *)0x1)) {
          sq->bytes_invalid = sq->bytes_invalid + bytes;
          pthread_mutex_unlock((pthread_mutex_t *)__mutex);
          puVar7 = extraout_r3_03;
          goto LAB_0001745c;
        }
                    /* Unresolved local var: queue_message * sent@[???] */
        do {
                    /* Unresolved local var: list_node * __mptr@[???] */
          plVar18 = (sq->sent_queue).root.next;
          if (plVar18 == &(sq->sent_queue).root) {
            *(uint8_t **)&sq->send_seq = in_stack_ffffff70;
            *(undefined1 **)((int)&sq->send_seq + 4) = in_stack_ffffff74;
            *(undefined4 *)&sq->last_receive_sent_time = 0;
            *(undefined4 *)((int)&sq->last_receive_sent_time + 4) = 0;
            goto LAB_00017214;
          }
          plVar8 = plVar18->next;
          bVar21 = (uint8_t *)0xfffffffe < puVar13;
          puVar13 = puVar13 + 1;
          plVar14 = plVar18->prev;
          puVar15 = puVar15 + bVar21;
          sq->need_ack_bytes = sq->need_ack_bytes - (int)plVar18[-0xc].next;
                    /* Unresolved local var: list_node * prev@[???]
                       Unresolved local var: list_node * next@[???] */
          plVar8->prev = plVar14;
                    /* Unresolved local var: queue_message * old@[???] */
          plVar16 = (sq->old_sent).root.prev;
          plVar14->next = plVar8;
          (sq->old_sent).root.prev = plVar18;
          plVar18->prev = plVar16;
          plVar18->next = &(sq->old_sent).root;
          plVar16->next = plVar18;
                    /* Unresolved local var: list_node * __mptr@[???] */
          plVar14 = (sq->old_sent).root.next;
          plVar8 = plVar14->next;
          plVar16 = plVar14->prev;
                    /* Unresolved local var: list_node * prev@[???]
                       Unresolved local var: list_node * next@[???] */
          plVar8->prev = plVar16;
          plVar16->next = plVar8;
          message_free((queue_message *)(plVar14 + -0xc));
        } while (in_stack_ffffff74 != puVar15 || in_stack_ffffff70 != puVar13);
        plVar14 = plVar18[-2].prev;
        plVar16 = plVar18[-0xc].next;
        *(list_node **)&sq->last_receive_sent_time = plVar18[-2].next;
        *(list_node **)((int)&sq->last_receive_sent_time + 4) = plVar14;
        sq->last_ack_bytes = (int)plVar16;
LAB_00017214:
        ppVar4 = sq->pr;
        *(uint8_t **)&sq->receive_seq = in_stack_ffffff70;
        *(undefined1 **)((int)&sq->receive_seq + 4) = in_stack_ffffff74;
        puVar7 = in_stack_ffffff70;
        puVar15 = in_stack_ffffff74;
        pollreactor_update_timer(ppVar4,1,0.0);
        puVar13 = *(uint8_t **)&sq->rtt_sample_seq;
        puVar9 = *(undefined1 **)((int)&sq->rtt_sample_seq + 4);
        bVar21 = puVar9 <= in_stack_ffffff74;
        if (in_stack_ffffff74 == puVar9) {
          bVar21 = puVar13 <= in_stack_ffffff70;
        }
        if ((bVar21 && (in_stack_ffffff74 != puVar9 || in_stack_ffffff70 != puVar13)) &&
            (puVar13 != (uint8_t *)0x0 || puVar9 != (undefined1 *)0x0)) {
          uVar1 = in_fpscr & 0xfffffff;
          in_fpscr = uVar1 | (uint)(sq->last_receive_sent_time == 0.0) << 0x1e;
          if (SUB41(in_fpscr >> 0x1e,0)) goto LAB_00017258;
          dVar25 = eventtime - sq->last_receive_sent_time;
          plVar12 = (list_head *)&sq->rttvar;
          dVar23 = sq->srtt;
          if (dVar23 == 0.0) {
            dVar23 = dVar25 * 0.5;
            dVar26 = dVar25 * 10.0;
            *plVar12 = (list_head)dVar23;
            sq->srtt = dVar26;
          }
          else {
            dVar26 = (dVar25 + dVar23 * 7.0) * 0.125;
            dVar23 = (ABS(dVar23 - dVar25) + *(double *)plVar12 * 3.0) * 0.25;
            sq->srtt = dVar26;
            *plVar12 = (list_head)dVar23;
          }
          dVar25 = dVar23 * 4.0;
          if (dVar23 * 4.0 < DAT_00017788) {
            dVar25 = DAT_00017788;
          }
          dVar25 = dVar25 + dVar26;
          in_fpscr = uVar1 | (uint)(dVar25 < DAT_00017790) << 0x1f;
          bVar21 = SUB41(in_fpscr >> 0x1f,0);
          if (bVar21) {
            plVar12 = &sq->pending_queues;
          }
          if (bVar21) {
            plVar12[-1] = (list_head)DAT_00017790;
          }
          else {
            uVar1 = uVar1 | (uint)(dVar25 < 5.0) << 0x1f | (uint)(dVar25 == 5.0) << 0x1e;
            in_fpscr = uVar1 | (uint)NAN(dVar25) << 0x1c;
            bVar2 = (byte)(uVar1 >> 0x18);
            if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
              sq->rto = dVar25;
            }
            else {
              sq->rto = 5.0;
            }
          }
          plVar18 = (sq->sent_queue).root.next;
          ppVar4 = sq->pr;
          sq->rtt_sample_seq = 0;
        }
        else {
LAB_00017258:
          plVar18 = (sq->sent_queue).root.next;
          ppVar4 = sq->pr;
        }
        if (plVar18 == &(sq->sent_queue).root) {
          pollreactor_update_timer(ppVar4,0,DAT_00017798);
        }
        else {
                    /* Unresolved local var: queue_message * sent@[???]
                       Unresolved local var: double nr@[???] */
          dVar25 = eventtime + sq->rto;
          if (sq->serial_fd_type == 99) {
            dVar23 = calculate_bittime(sq,(uint32_t)plVar18[-0xc].next);
          }
          else {
            dVar23 = (double)VectorUnsignedToFloat(plVar18[-0xc].next,(byte)(in_fpscr >> 0x16) & 3);
            dVar23 = dVar23 * sq->bittime_adjust;
          }
          pollreactor_update_timer(ppVar4,0,dVar25 + dVar23);
        }
      }
      plVar18 = (sq->notify_queue).root.next;
      sq->bytes_read = sq->bytes_read + bytes;
      if (&(sq->notify_queue).root == plVar18) {
LAB_000176e0:
        bVar21 = false;
      }
      else {
                    /* Unresolved local var: queue_message * qm@[???]
                       Unresolved local var: uint64_t wake_seq@[???]
                       Unresolved local var: uint64_t notify_msg_sent_seq@[???] */
        plVar14 = (list_node *)(puVar7 + ~(uint)(5 < (int)bytes));
        plVar16 = (list_node *)(puVar15 + (CARRY4((uint)puVar7,~(uint)(5 < (int)bytes)) - 1));
        bVar21 = plVar18[-2].prev <= plVar16;
        if (plVar16 == plVar18[-2].prev) {
          bVar21 = plVar18[-2].next <= plVar14;
        }
        if (!bVar21) goto LAB_000176e0;
        lVar24 = (list_node)sq->last_receive_sent_time;
        do {
          plVar19 = plVar18->next;
          plVar8 = plVar18->prev;
                    /* Unresolved local var: list_node * prev@[???]
                       Unresolved local var: list_node * next@[???] */
          plVar19->prev = plVar8;
          plVar10 = (sq->receive_queue).root.prev;
          plVar8->next = plVar19;
          plVar18[-0xc].next = (list_node *)0x0;
          plVar18[-3] = lVar24;
          plVar18[-2] = (list_node)eventtime;
          (sq->receive_queue).root.prev = plVar18;
          plVar18->prev = plVar10;
          plVar18->next = &(sq->receive_queue).root;
          plVar10->next = plVar18;
          plVar18 = (sq->notify_queue).root.next;
          if (&(sq->notify_queue).root == plVar18) break;
          plVar8 = plVar18[-2].prev;
          bVar21 = plVar16 <= plVar8;
          if (plVar8 == plVar16) {
            bVar21 = plVar14 <= plVar18[-2].next;
          }
        } while (!bVar21 || plVar8 == plVar16 && plVar18[-2].next == plVar14);
        bVar21 = true;
      }
      if (bytes == 5) {
        puVar13 = *(uint8_t **)&sq->last_ack_seq;
        puVar9 = *(undefined1 **)((int)&sq->last_ack_seq + 4);
        bVar22 = puVar9 <= puVar15;
        bVar20 = puVar15 == puVar9;
        if (bVar20) {
          bVar22 = puVar13 <= puVar7;
        }
        if (bVar22 && (!bVar20 || puVar7 != puVar13)) {
          *(uint8_t **)&sq->last_ack_seq = puVar7;
          *(undefined1 **)((int)&sq->last_ack_seq + 4) = puVar15;
        }
        if (!bVar22 || bVar20 && puVar7 == puVar13) {
          puVar9 = *(undefined1 **)((int)&sq->ignore_nak_seq + 4);
          bVar22 = puVar9 <= puVar15;
          if (puVar15 == puVar9) {
            bVar22 = *(uint8_t **)&sq->ignore_nak_seq <= puVar7;
          }
          if ((bVar22 && (puVar15 != puVar9 || puVar7 != *(uint8_t **)&sq->ignore_nak_seq)) &&
             ((sq->sent_queue).root.next != &(sq->sent_queue).root)) {
            pollreactor_update_timer(sq->pr,0,0.0);
          }
        }
                    /* Unresolved local var: list_node * __mptr@[???] */
        plVar18 = (sq->fast_readers).root.next;
        if (plVar18 != &(sq->fast_readers).root) {
LAB_000173e4:
          in_stack_ffffff74 = puVar15;
          do {
            puVar15 = in_stack_ffffff74;
            if (((int)&(plVar18[1].prev)->prev < (int)bytes) &&
               (in_stack_ffffff70 =
                     (uint8_t *)memcmp(sq->input_buf + 2,plVar18 + 2,(size_t)plVar18[1].prev),
               puVar15 = in_stack_ffffff74, in_stack_ffffff70 == (uint8_t *)0x0)) {
              pthread_mutex_lock((pthread_mutex_t *)&sq->fast_reader_dispatch_lock);
              if ((bVar21) && (sq->receive_waiting != 0)) {
                sq->receive_waiting = (int)in_stack_ffffff70;
                pthread_cond_signal((pthread_cond_t *)&sq->cond);
              }
              pthread_mutex_unlock((pthread_mutex_t *)__mutex);
              (*(code *)plVar18[1].next)(plVar18,buf,bytes);
              pthread_mutex_unlock((pthread_mutex_t *)&sq->fast_reader_dispatch_lock);
              puVar7 = extraout_r3;
              goto LAB_0001745c;
            }
                    /* Unresolved local var: list_node * __mptr@[???] */
            plVar18 = plVar18->next;
            in_stack_ffffff74 = puVar15;
          } while (plVar18 != &(sq->fast_readers).root);
        }
        in_stack_ffffff70 = puVar7;
        in_stack_ffffff74 = puVar15;
        if (bVar21) goto LAB_0001759c;
      }
      else {
                    /* Unresolved local var: queue_message * qm@[???] */
        pqVar5 = message_fill(buf,bytes);
        puVar13 = *(uint8_t **)&sq->retransmit_seq;
        puVar11 = *(uint64_t **)((int)&sq->retransmit_seq + 4);
        bVar21 = puVar11 <= puVar15;
        bVar22 = (uint64_t *)puVar15 == puVar11;
        if (bVar22) {
          bVar21 = puVar13 <= puVar7;
        }
        bVar20 = puVar7 == puVar13;
        if (bVar21 && (!bVar22 || !bVar20)) {
          puVar11 = &sq->send_seq;
        }
        if (!bVar21 || bVar22 && bVar20) {
          puVar11 = (uint64_t *)0x0;
          puVar13 = (uint8_t *)0x0;
        }
        if (bVar21 && (!bVar22 || !bVar20)) {
          puVar13 = *(uint8_t **)(puVar11 + -1);
          puVar11 = *(uint64_t **)((int)puVar11 + -4);
        }
        *(uint8_t **)&pqVar5->field_2 = puVar13;
        *(uint64_t **)((int)&pqVar5->field_2 + 4) = puVar11;
        dVar25 = get_monotonic();
        iVar6 = sq->serial_fd_type;
        (pqVar5->field_2).field_1.receive_time = dVar25;
        if (iVar6 == 99) {
          dVar23 = calculate_bittime(sq,bytes);
        }
        else {
          dVar23 = (double)VectorSignedToFloat(bytes,(byte)(in_fpscr >> 0x16) & 3);
          dVar23 = dVar23 * sq->bittime_adjust;
        }
        plVar18 = (sq->receive_queue).root.prev;
        (pqVar5->field_2).field_1.receive_time = dVar25 - dVar23;
        (sq->receive_queue).root.prev = &pqVar5->node;
        (pqVar5->node).next = &(sq->receive_queue).root;
        (pqVar5->node).prev = plVar18;
        plVar18->next = &pqVar5->node;
        plVar18 = (sq->fast_readers).root.next;
        if (plVar18 != &(sq->fast_readers).root) {
          bVar21 = true;
          goto LAB_000173e4;
        }
LAB_0001759c:
        in_stack_ffffff70 = puVar7;
        in_stack_ffffff74 = puVar15;
        if (sq->receive_waiting != 0) {
          sq->receive_waiting = 0;
          pthread_cond_signal((pthread_cond_t *)&sq->cond);
          in_stack_ffffff70 = puVar7;
          in_stack_ffffff74 = puVar15;
        }
      }
      pthread_mutex_unlock((pthread_mutex_t *)__mutex);
      puVar7 = extraout_r3_01;
    }
LAB_0001745c:
    __n = sq->input_pos - uVar17;
    sq->input_pos = __n;
    iVar6 = 0;
    if (__n != 0) {
      memmove(buf,sq->input_buf + uVar17,__n);
      iVar6 = sq->input_pos;
      puVar7 = extraout_r3_00;
    }
  } while( true );
}



/* ===== winch_stepper_alloc @ 000177ac size=80 ===== */

stepper_kinematics * winch_stepper_alloc(double anchor_x,double anchor_y,double anchor_z)

{
  void *__s;
  stepper_kinematics *psVar1;
  sk_calc_callback p_Var2;
  
                    /* Unresolved local var: winch_stepper * hs@[???] */
  __s = malloc(0x60);
  psVar1 = memset(__s,0,0x48);
  p_Var2 = (sk_calc_callback)(DAT_000177fc + 0x177e4);
  psVar1[1].step_dist = anchor_x;
  psVar1->active_flags = 7;
  psVar1->calc_position_cb = p_Var2;
  psVar1[1].commanded_pos = anchor_y;
  *(double *)&psVar1[1].sc = anchor_z;
  return psVar1;
}



/* ===== input_shaper_alloc @ 00017800 size=36 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

stepper_kinematics * input_shaper_alloc(void)

{
  stepper_kinematics *psVar1;
  
                    /* Unresolved local var: input_shaper * is@[???] */
  psVar1 = calloc(0x158,1);
  psVar1[1].sc = (stepcompress *)0x0;
  *(undefined4 *)&psVar1[1].field_0x14 = 0x408f4000;
  return psVar1;
}



/* ===== input_shaper_get_step_generation_window @ 00017824 size=80 ===== */

/* WARNING: Variable defined which should be unmapped: sp */

double input_shaper_get_step_generation_window(int n,double *a,double *t)

{
  double dVar1;
  double dStackY_68;
  shaper_pulses sp;
  
                    /* Unresolved local var: double window@[???] */
  init_shaper(n,a,t,&sp,sp.num_pulses,(shaper_pulses *)sp._4_4_,sp.pulses[0].t._0_4_,
              sp.pulses[0].t._4_4_);
  if (sp.num_pulses != 0) {
    dVar1 = -(double)CONCAT44(sp.pulses[0].t._4_4_,sp.pulses[0].t._0_4_);
    if (-(double)CONCAT44(sp.pulses[0].t._4_4_,sp.pulses[0].t._0_4_) <
        (&dStackY_68)[sp.num_pulses * 2]) {
      dVar1 = (&dStackY_68)[sp.num_pulses * 2];
    }
    return dVar1;
  }
  return 0.0;
}



/* ===== input_shaper_set_shaper_params @ 00017874 size=224 ===== */

int input_shaper_set_shaper_params(stepper_kinematics *sk,char axis,int n,double *a,double *t)

{
  int iVar1;
  int unaff_r4;
  shaper_pulses *unaff_r5;
  shaper_pulses *sp;
  double *unaff_r6;
  double *unaff_lr;
  uint uVar2;
  double dVar3;
  double dVar4;
  
  iVar1 = (int)axis;
                    /* Unresolved local var: input_shaper * is@[???]
                       Unresolved local var: shaper_pulses * sp@[???]
                       Unresolved local var: int status@[???]
                       Unresolved local var: stepper_kinematics * __mptr@[???] */
  if (iVar1 - 0x78U < 2) {
    sp = unaff_r5;
    if (iVar1 == 0x78) {
      sp = (shaper_pulses *)&sk[2].last_flush_time;
    }
    if (iVar1 == 0x78) {
      uVar2 = 1;
    }
    else {
      sp = (shaper_pulses *)&sk[3].tq;
      uVar2 = 2;
    }
    if ((*(uint *)(*(int *)&sk[1].step_dist + 0x2c) & uVar2) == 0) {
      sp->num_pulses = 0;
      iVar1 = 0;
    }
    else {
      iVar1 = init_shaper(n,a,t,sp,unaff_r4,unaff_r5,unaff_r6,unaff_lr);
    }
                    /* Unresolved local var: double pre_active@[???]
                       Unresolved local var: double post_active@[???] */
    if (((sk->active_flags & 1U) == 0) || (*(int *)&sk[2].last_flush_time == 0)) {
      dVar4 = 0.0;
      dVar3 = dVar4;
    }
    else {
      dVar4 = *(double *)(&sk[2].sc + *(int *)&sk[2].last_flush_time * 4);
      dVar3 = -sk[2].last_move_time;
    }
    if (((sk->active_flags & 2U) != 0) && (sk[3].tq != (trapq *)0x0)) {
      if (dVar4 < (&sk[3].last_move_time)[(int)sk[3].tq * 2]) {
        dVar4 = (&sk[3].last_move_time)[(int)sk[3].tq * 2];
      }
      if (dVar3 < -sk[3].gen_steps_pre_active) {
        dVar3 = -sk[3].gen_steps_pre_active;
      }
    }
    sk->gen_steps_pre_active = dVar4;
    sk->gen_steps_post_active = dVar3;
    return iVar1;
  }
  return -1;
}



/* ===== input_shaper_set_sk @ 00017954 size=100 ===== */

int input_shaper_set_sk(stepper_kinematics *sk,stepper_kinematics *orig_sk)

{
  uint uVar1;
  
                    /* Unresolved local var: input_shaper * is@[???]
                       Unresolved local var: stepper_kinematics * __mptr@[???] */
  uVar1 = orig_sk->active_flags;
  if (uVar1 == 1) {
    sk->calc_position_cb = (sk_calc_callback)(DAT_000179c0 + 0x179ac);
  }
  else if (uVar1 == 2) {
    sk->calc_position_cb = (sk_calc_callback)(DAT_000179bc + 0x1799c);
  }
  else {
    if ((uVar1 & 3) == 0) {
      return -1;
    }
    sk->calc_position_cb = (sk_calc_callback)(DAT_000179b8 + 0x17980);
  }
  sk->active_flags = uVar1;
  *(stepper_kinematics **)&sk[1].step_dist = orig_sk;
  return 0;
}



/* ===== rotary_delta_stepper_alloc @ 000179c4 size=132 ===== */

stepper_kinematics *
rotary_delta_stepper_alloc
          (double shoulder_radius,double shoulder_height,double angle,double upper_arm,
          double lower_arm)

{
  int iVar1;
  stepper_kinematics *__s;
  double dVar2;
  
                    /* Unresolved local var: rotary_stepper * rs@[???] */
  __s = malloc(0x78);
  memset(__s,0,0x48);
  dVar2 = cos(angle);
  __s[1].step_dist = dVar2;
  dVar2 = sin(angle);
  *(double *)&__s[1].sc = shoulder_radius;
  iVar1 = DAT_00017a48;
  __s->active_flags = 7;
  __s[1].last_flush_time = shoulder_height;
  __s->calc_position_cb = (sk_calc_callback)(iVar1 + 0x17a34);
  __s[1].last_move_time = upper_arm * upper_arm;
  *(double *)&__s[1].tq = lower_arm * lower_arm;
  __s[1].commanded_pos = dVar2;
  return __s;
}



/* ===== polar_stepper_alloc @ 00017a4c size=100 ===== */

stepper_kinematics * polar_stepper_alloc(char type)

{
  int iVar1;
  stepper_kinematics *psVar2;
  
                    /* Unresolved local var: stepper_kinematics * sk@[???] */
  psVar2 = calloc(0x48,1);
  iVar1 = DAT_00017ab4;
  if (type == 'r') {
    psVar2->calc_position_cb = (sk_calc_callback)(DAT_00017ab8 + 0x17aac);
  }
  else if (type == 'a') {
    psVar2->calc_position_cb = (sk_calc_callback)(DAT_00017ab0 + 0x17a94);
    psVar2->post_cb = (sk_post_callback)(iVar1 + 0x17a9c);
  }
  psVar2->active_flags = 3;
  return psVar2;
}



/* ===== extruder_stepper_alloc @ 00017abc size=40 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

stepper_kinematics * extruder_stepper_alloc(void)

{
  stepper_kinematics *psVar1;
  sk_calc_callback p_Var2;
  
                    /* Unresolved local var: extruder_stepper * es@[???] */
  psVar1 = calloc(0x60,1);
  p_Var2 = (sk_calc_callback)(DAT_00017ae4 + 0x17adc);
  psVar1->active_flags = 1;
  psVar1->calc_position_cb = p_Var2;
  return psVar1;
}



/* ===== extruder_set_pressure_advance @ 00017ae8 size=52 ===== */

void extruder_set_pressure_advance
               (stepper_kinematics *sk,double pressure_advance,double smooth_time)

{
  double dVar1;
  
                    /* Unresolved local var: extruder_stepper * es@[???]
                       Unresolved local var: double hst@[???]
                       Unresolved local var: stepper_kinematics * __mptr@[???] */
  dVar1 = smooth_time * 0.5;
  sk[1].commanded_pos = dVar1;
  sk->gen_steps_post_active = dVar1;
  sk->gen_steps_pre_active = dVar1;
  if (dVar1 != 0.0) {
    sk[1].step_dist = pressure_advance;
    *(double *)&sk[1].sc = 1.0 / (dVar1 * dVar1);
  }
  return;
}



/* ===== deltesian_stepper_alloc @ 00017b1c size=72 ===== */

stepper_kinematics * deltesian_stepper_alloc(double arm2,double arm_x)

{
  void *__s;
  stepper_kinematics *psVar1;
  sk_calc_callback p_Var2;
  
                    /* Unresolved local var: deltesian_stepper * ds@[???] */
  __s = malloc(0x58);
  psVar1 = memset(__s,0,0x48);
  p_Var2 = (sk_calc_callback)(DAT_00017b64 + 0x17b50);
  psVar1[1].step_dist = arm2;
  psVar1->active_flags = 5;
  psVar1->calc_position_cb = p_Var2;
  psVar1[1].commanded_pos = arm_x;
  return psVar1;
}



/* ===== delta_stepper_alloc @ 00017b68 size=80 ===== */

stepper_kinematics * delta_stepper_alloc(double arm2,double tower_x,double tower_y)

{
  void *__s;
  stepper_kinematics *psVar1;
  sk_calc_callback p_Var2;
  
                    /* Unresolved local var: delta_stepper * ds@[???] */
  __s = malloc(0x60);
  psVar1 = memset(__s,0,0x48);
  p_Var2 = (sk_calc_callback)(DAT_00017bb8 + 0x17ba0);
  psVar1[1].step_dist = arm2;
  psVar1->active_flags = 7;
  psVar1->calc_position_cb = p_Var2;
  psVar1[1].commanded_pos = tower_x;
  *(double *)&psVar1[1].sc = tower_y;
  return psVar1;
}



/* ===== corexz_stepper_alloc @ 00017bbc size=88 ===== */

stepper_kinematics * corexz_stepper_alloc(char type)

{
  stepper_kinematics *psVar1;
  
                    /* Unresolved local var: stepper_kinematics * sk@[???] */
  psVar1 = calloc(0x48,1);
  if (type == '+') {
    psVar1->calc_position_cb = (sk_calc_callback)(DAT_00017c18 + 0x17c10);
  }
  else if (type == '-') {
    psVar1->calc_position_cb = (sk_calc_callback)(DAT_00017c14 + 0x17c00);
  }
  psVar1->active_flags = 5;
  return psVar1;
}



/* ===== corexy_stepper_alloc @ 00017c1c size=88 ===== */

stepper_kinematics * corexy_stepper_alloc(char type)

{
  stepper_kinematics *psVar1;
  
                    /* Unresolved local var: stepper_kinematics * sk@[???] */
  psVar1 = calloc(0x48,1);
  if (type == '+') {
    psVar1->calc_position_cb = (sk_calc_callback)(DAT_00017c78 + 0x17c70);
  }
  else if (type == '-') {
    psVar1->calc_position_cb = (sk_calc_callback)(DAT_00017c74 + 0x17c60);
  }
  psVar1->active_flags = 3;
  return psVar1;
}



/* ===== cartesian_reverse_stepper_alloc @ 00017c7c size=116 ===== */

stepper_kinematics * cartesian_reverse_stepper_alloc(char axis)

{
  int iVar1;
  int iVar2;
  int iVar3;
  stepper_kinematics *psVar4;
  
                    /* Unresolved local var: stepper_kinematics * sk@[???] */
  psVar4 = calloc(0x48,1);
  iVar3 = DAT_00017cf8;
  iVar2 = DAT_00017cf4;
  iVar1 = DAT_00017cf0;
  if (axis == 'x') {
    psVar4->active_flags = 1;
    psVar4->calc_position_cb = (sk_calc_callback)(iVar3 + 0x17cec);
    return psVar4;
  }
  if (axis != 'y') {
    if (axis != 'z') {
      return psVar4;
    }
    psVar4->active_flags = 4;
    psVar4->calc_position_cb = (sk_calc_callback)(iVar1 + 0x17cbc);
    return psVar4;
  }
  psVar4->active_flags = 2;
  psVar4->calc_position_cb = (sk_calc_callback)(iVar2 + 0x17cd4);
  return psVar4;
}



/* ===== cartesian_stepper_alloc @ 00017cfc size=116 ===== */

stepper_kinematics * cartesian_stepper_alloc(char axis)

{
  int iVar1;
  int iVar2;
  int iVar3;
  stepper_kinematics *psVar4;
  
                    /* Unresolved local var: stepper_kinematics * sk@[???] */
  psVar4 = calloc(0x48,1);
  iVar3 = DAT_00017d78;
  iVar2 = DAT_00017d74;
  iVar1 = DAT_00017d70;
  if (axis == 'x') {
    psVar4->active_flags = 1;
    psVar4->calc_position_cb = (sk_calc_callback)(iVar3 + 0x17d6c);
    return psVar4;
  }
  if (axis != 'y') {
    if (axis != 'z') {
      return psVar4;
    }
    psVar4->active_flags = 4;
    psVar4->calc_position_cb = (sk_calc_callback)(iVar1 + 0x17d3c);
    return psVar4;
  }
  psVar4->active_flags = 2;
  psVar4->calc_position_cb = (sk_calc_callback)(iVar2 + 0x17d54);
  return psVar4;
}



/* ===== itersolve_get_commanded_pos @ 00017d7c size=8 ===== */

double itersolve_get_commanded_pos(stepper_kinematics *sk)

{
  return sk->commanded_pos;
}



/* ===== itersolve_calc_position_from_coord @ 00017d84 size=108 ===== */

double itersolve_calc_position_from_coord(stepper_kinematics *sk,double x,double y,double z)

{
  move *pmVar1;
  double dVar2;
  move m;
  
  pmVar1 = memset(&m,0,0x58);
  m.move_t._0_4_ = 0;
  m.move_t._4_4_ = 0x408f4000;
  m.start_pos.field_0.field_0.x = x;
  m.start_pos.field_0.field_0.y = y;
  m.start_pos.field_0.field_0.z = z;
  dVar2 = (*sk->calc_position_cb)(sk,pmVar1,DAT_00017df0);
  return dVar2;
}



/* ===== itersolve_set_position @ 00017df8 size=20 ===== */

void itersolve_set_position(stepper_kinematics *sk,double x,double y,double z)

{
  double dVar1;
  
  dVar1 = itersolve_calc_position_from_coord(sk,x,y,z);
  sk->commanded_pos = dVar1;
  return;
}



/* ===== itersolve_set_stepcompress @ 00017e0c size=12 ===== */

void itersolve_set_stepcompress(stepper_kinematics *sk,stepcompress *sc,double step_dist)

{
  sk->step_dist = step_dist;
  sk->sc = sc;
  return;
}



/* ===== itersolve_set_trapq @ 00017e18 size=8 ===== */

void itersolve_set_trapq(stepper_kinematics *sk,trapq *tq)

{
  sk->tq = tq;
  return;
}



/* ===== itersolve_is_active_axis @ 00017e20 size=32 ===== */

/* DWARF original prototype: int32_t itersolve_is_active_axis(stepper_kinematics * sk, char axis,
   stepper_kinematics * sk, char axis) */

int32_t itersolve_is_active_axis
                  (stepper_kinematics *sk,char axis,stepper_kinematics *sk_1,char axis_1)

{
  uint uVar1;
  
  if ((byte)(axis + 0x88U) < 3) {
    uVar1 = sk->active_flags >> (uint)(byte)(axis + 0x88) & 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== itersolve_check_active @ 00017e40 size=264 ===== */

double itersolve_check_active(stepper_kinematics *sk,double flush_time)

{
  list_node *plVar1;
  list_node *plVar2;
  uint uVar3;
  double dVar4;
  
                    /* Unresolved local var: move * m@[???] */
  if (sk->tq == (trapq *)0x0) {
    return 0.0;
  }
  trapq_check_sentinels(sk->tq);
                    /* Unresolved local var: list_node * __mptr@[???] */
  plVar2 = (sk->tq->moves).root.next;
  dVar4 = (double)plVar2[-9] + (double)plVar2[-10];
  while (dVar4 <= sk->last_flush_time) {
                    /* Unresolved local var: list_node * __mptr@[???] */
    plVar2 = plVar2->next;
    dVar4 = (double)plVar2[-10] + (double)plVar2[-9];
  }
  uVar3 = sk->active_flags;
                    /* Unresolved local var: int af@[???] */
                    /* Unresolved local var: list_node * __mptr@[???] */
  for (; ((plVar1 = plVar2 + -10, (uVar3 & 1) == 0 || ((double)plVar2[-3] == 0.0)) &&
         (((uVar3 & 2) == 0 || ((double)plVar2[-2] == 0.0)))); plVar2 = plVar2->next) {
    if (((uVar3 & 4) != 0) && ((double)plVar2[-1] != 0.0)) {
      return (double)*plVar1;
    }
    if ((double)(((ulonglong)flush_time & 0xffffffff00000000) + ((ulonglong)flush_time & 0xffffffff)
                ) <= (double)*plVar1 + (double)plVar2[-9]) {
      return 0.0;
    }
  }
  return (double)*plVar1;
}



/* ===== itersolve_generate_steps @ 00017f48 size=572 ===== */

/* WARNING: Type propagation algorithm not settling */

int32_t itersolve_generate_steps(stepper_kinematics *sk,double flush_time)

{
  int iVar1;
  int32_t iVar2;
  list_node *plVar3;
  uint uVar4;
  list_node *plVar5;
  move *m;
  move *m_00;
  uint uVar6;
  double dVar7;
  double dVar8;
  double abs_start;
  double dVar9;
  double dVar10;
  list_node lVar11;
  
                    /* Unresolved local var: double last_flush_time@[???]
                       Unresolved local var: move * m@[???]
                       Unresolved local var: double force_steps_time@[???]
                       Unresolved local var: int skip_count@[???] */
  abs_start = sk->last_flush_time;
  sk->last_flush_time = flush_time;
  if (sk->tq == (trapq *)0x0) {
    return 0;
  }
  uVar6 = (uint)((ulonglong)flush_time >> 0x20);
  trapq_check_sentinels(sk->tq);
                    /* Unresolved local var: list_node * __mptr@[???] */
  plVar3 = (sk->tq->moves).root.next;
  dVar9 = (double)plVar3[-9] + (double)plVar3[-10];
  while (dVar9 <= abs_start) {
                    /* Unresolved local var: list_node * __mptr@[???] */
    plVar3 = plVar3->next;
    dVar9 = (double)plVar3[-10] + (double)plVar3[-9];
  }
  iVar1 = 0;
  dVar9 = sk->last_move_time + sk->gen_steps_post_active;
  do {
    m = (move *)(plVar3 + -10);
    dVar7 = m->print_time;
    uVar4 = sk->active_flags;
    dVar8 = dVar7 + (double)plVar3[-9];
                    /* Unresolved local var: double move_start@[???]
                       Unresolved local var: double move_end@[???]
                       Unresolved local var: int af@[???] */
    if (((((uVar4 & 1) == 0) || ((double)plVar3[-3] == 0.0)) &&
        (((uVar4 & 2) == 0 || ((double)plVar3[-2] == 0.0)))) &&
       (((uVar4 & 4) == 0 || ((double)plVar3[-1] == 0.0)))) {
      if (dVar9 <= dVar7) {
        iVar1 = iVar1 + 1;
      }
      else {
                    /* Unresolved local var: double abs_end@[???]
                       Unresolved local var: int32_t ret@[???] */
        dVar10 = (double)(((ulonglong)uVar6 << 0x20) + ((ulonglong)flush_time & 0xffffffff));
        dVar7 = dVar9;
        if (dVar10 < dVar9) {
          dVar7 = dVar10;
        }
        iVar2 = itersolve_gen_steps_range(sk,m,abs_start,dVar7);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar1 = 1;
      }
      if ((double)(((ulonglong)uVar6 << 0x20) + ((ulonglong)flush_time & 0xffffffff)) +
          sk->gen_steps_pre_active <= dVar8) {
        return 0;
      }
    }
    else {
                    /* Unresolved local var: int32_t ret@[???] */
      if ((iVar1 != 0) && (sk->gen_steps_pre_active != 0.0)) {
                    /* Unresolved local var: double abs_start@[???]
                       Unresolved local var: move * pm@[???] */
        dVar7 = dVar7 - sk->gen_steps_pre_active;
                    /* Unresolved local var: list_node * __mptr@[???] */
        m_00 = (move *)(plVar3->prev + -10);
        if (dVar7 < abs_start) {
          dVar7 = abs_start;
        }
        if (dVar7 < dVar9) {
          dVar7 = dVar9;
        }
        iVar1 = iVar1 + -1;
        if (iVar1 != 0) {
          lVar11 = plVar3->prev[-10];
          while (dVar7 < (double)lVar11) {
                    /* Unresolved local var: list_node * __mptr@[???] */
            plVar5 = (m_00->node).prev;
            iVar1 = iVar1 + -1;
            m_00 = (move *)(plVar5 + -10);
            if (iVar1 == 0) break;
            lVar11 = plVar5[-10];
          }
        }
        do {
          iVar2 = itersolve_gen_steps_range
                            (sk,m_00,dVar7,
                             (double)(((ulonglong)uVar6 << 0x20) +
                                     ((ulonglong)flush_time & 0xffffffff)));
          if (iVar2 != 0) {
            return iVar2;
          }
                    /* Unresolved local var: list_node * __mptr@[???]
                       Unresolved local var: int32_t ret@[???] */
          m_00 = (move *)((m_00->node).next + -10);
        } while (m != m_00);
      }
      iVar2 = itersolve_gen_steps_range
                        (sk,m,abs_start,
                         (double)(((ulonglong)uVar6 << 0x20) + ((ulonglong)flush_time & 0xffffffff))
                        );
      if (iVar2 != 0) {
        return iVar2;
      }
      if ((double)(((ulonglong)uVar6 << 0x20) + ((ulonglong)flush_time & 0xffffffff)) <= dVar8) {
        sk->last_move_time = flush_time;
        return 0;
      }
      sk->last_move_time = dVar8;
      dVar9 = dVar8 + sk->gen_steps_post_active;
      iVar1 = 0;
    }
                    /* Unresolved local var: list_node * __mptr@[???] */
    plVar3 = plVar3->next;
  } while( true );
}



/* ===== __aeabi_uidiv @ 00018184 size=168 ===== */

uint __aeabi_uidiv(uint param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  if (param_2 - 1 == 0) {
    return param_1;
  }
  if (param_2 == 0) {
    uVar1 = 0;
    if (param_1 != 0) {
      uVar1 = 0xffffffff;
    }
    uVar2 = __aeabi_idiv0(uVar1);
    return uVar2;
  }
  if (param_1 <= param_2) {
    return (uint)(param_1 == param_2);
  }
  if ((param_2 & param_2 - 1) == 0) {
    return param_1 >> (0x1fU - LZCOUNT(param_2) & 0xff);
  }
  uVar3 = param_2 << (LZCOUNT(param_2) - LZCOUNT(param_1) & 0xffU);
  uVar2 = 1 << (LZCOUNT(param_2) - LZCOUNT(param_1) & 0xffU);
  uVar4 = 0;
  while( true ) {
    if (uVar3 <= param_1) {
      param_1 = param_1 - uVar3;
      uVar4 = uVar4 | uVar2;
    }
    if (uVar3 >> 1 <= param_1) {
      param_1 = param_1 - (uVar3 >> 1);
      uVar4 = uVar4 | uVar2 >> 1;
    }
    if (uVar3 >> 2 <= param_1) {
      param_1 = param_1 - (uVar3 >> 2);
      uVar4 = uVar4 | uVar2 >> 2;
    }
    if (uVar3 >> 3 <= param_1) {
      param_1 = param_1 - (uVar3 >> 3);
      uVar4 = uVar4 | uVar2 >> 3;
    }
    bVar5 = param_1 == 0;
    if (!bVar5) {
      uVar2 = uVar2 >> 4;
      bVar5 = uVar2 == 0;
    }
    if (bVar5) break;
    uVar3 = uVar3 >> 4;
  }
  return uVar4;
}



/* ===== __aeabi_uidivmod @ 0001822c size=32 ===== */

void __aeabi_uidivmod(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    __aeabi_uidiv();
    return;
  }
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = 0xffffffff;
  }
  __aeabi_idiv0(uVar1);
  return;
}



/* ===== __divsi3 @ 0001824c size=24 ===== */

uint __divsi3(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  if (param_2 == 0) {
    bVar6 = (int)param_1 < 0;
    if (0 < (int)param_1) {
      param_1 = 0x7fffffff;
    }
    if (bVar6) {
      param_1 = 0x80000000;
    }
    uVar2 = __aeabi_idiv0(param_1);
    return uVar2;
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
    return param_1;
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
    return param_1;
  }
  if ((uVar2 & uVar2 - 1) == 0) {
    uVar4 = uVar4 >> (0x1fU - LZCOUNT(uVar2) & 0xff);
    if ((int)uVar5 < 0) {
      uVar4 = -uVar4;
    }
    return uVar4;
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
  return uVar1;
}



/* ===== .divsi3_skip_div0_test @ 00018254 size=196 ===== */

uint _divsi3_skip_div0_test(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool in_NG;
  bool bVar6;
  
  uVar5 = param_1 ^ param_2;
  uVar2 = param_2;
  if (in_NG) {
    uVar2 = -param_2;
  }
  if (uVar2 - 1 == 0) {
    if ((int)param_2 < 0) {
      param_1 = -param_1;
    }
    return param_1;
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
    return param_1;
  }
  if ((uVar2 & uVar2 - 1) == 0) {
    uVar4 = uVar4 >> (0x1fU - LZCOUNT(uVar2) & 0xff);
    if ((int)uVar5 < 0) {
      uVar4 = -uVar4;
    }
    return uVar4;
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
  return uVar1;
}



/* ===== __aeabi_idivmod @ 00018328 size=32 ===== */

void __aeabi_idivmod(int param_1,int param_2)

{
  bool bVar1;
  
  if (param_2 != 0) {
    _divsi3_skip_div0_test();
    return;
  }
  bVar1 = param_1 < 0;
  if (0 < param_1) {
    param_1 = 0x7fffffff;
  }
  if (bVar1) {
    param_1 = -0x80000000;
  }
  __aeabi_idiv0(param_1);
  return;
}



/* ===== __aeabi_drsub @ 00018348 size=8 ===== */

void __aeabi_drsub(undefined4 param_1,uint param_2)

{
  __aeabi_dadd(param_1,param_2 ^ 0x80000000);
  return;
}



/* ===== __subdf3 @ 00018350 size=4 ===== */

ulonglong __subdf3(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  
  uVar7 = param_4 ^ 0x80000000;
  uVar10 = param_2 << 1;
  uVar5 = param_4 << 1;
  iVar9 = (int)uVar10 >> 0x15;
  iVar1 = (int)uVar5 >> 0x15;
  if ((((uVar10 == uVar5 && param_1 == param_3 || uVar10 == 0 && param_1 == 0) ||
       uVar5 == 0 && param_3 == 0) || iVar9 == -1) || iVar1 == -1) {
    if (iVar9 == -1 || iVar1 == -1) {
      uVar10 = param_3;
      uVar5 = uVar7;
      if (iVar9 == -1) {
        uVar10 = param_1;
        uVar5 = param_2;
      }
      if (iVar9 != -1 || iVar1 != -1) {
        param_3 = uVar10;
        uVar7 = uVar5;
      }
      bVar14 = (uVar5 & 0xfffff) == 0;
      bVar15 = uVar10 == 0 && bVar14;
      if (uVar10 == 0 && bVar14) {
        bVar15 = param_3 == 0 && (uVar7 & 0xfffff) == 0;
      }
      if (!bVar15 || uVar5 != uVar7) {
        uVar5 = uVar5 | 0x80000;
      }
      return CONCAT44(uVar5,uVar10);
    }
    if (uVar10 != uVar5 || param_1 != param_3) {
      if (uVar10 == 0 && param_1 == 0) {
        param_1 = param_3;
        param_2 = uVar7;
      }
      return CONCAT44(param_2,param_1);
    }
    if (param_2 != uVar7) {
      return 0;
    }
    if ((param_2 & 0x7fffffff) >> 0x14 == 0) {
      bVar2 = (byte)(param_1 >> 0x1f);
      uVar10 = param_2 * 2 + (uint)bVar2;
      if (CARRY4(param_2,param_2) || CARRY4(param_2 * 2,(uint)bVar2)) {
        uVar10 = uVar10 | 0x80000000;
      }
      return CONCAT44(uVar10,param_1 << 1);
    }
    if (uVar10 < 0xffc00000) {
      return CONCAT44(param_2 + 0x100000,param_1);
    }
    param_2 = param_2 & 0x80000000;
LAB_000185c4:
    return (ulonglong)(param_2 | 0x7ff00000) << 0x20;
  }
  uVar10 = (param_2 & 0x7fffffff) >> 0x14;
  uVar5 = (param_4 & 0x7fffffff) >> 0x14;
  uVar12 = uVar5 - uVar10;
  bVar14 = uVar12 != 0;
  if (uVar5 < uVar10) {
    uVar12 = -uVar12;
  }
  uVar11 = param_1;
  uVar8 = param_2;
  if (bVar14 && uVar10 <= uVar5) {
    uVar10 = uVar10 + uVar12;
    uVar11 = param_3;
    uVar8 = uVar7;
    param_3 = param_1;
    uVar7 = param_2;
  }
  if (0x36 < uVar12) {
    return CONCAT44(uVar8,uVar11);
  }
  uVar5 = uVar8 & 0xfffff | 0x100000;
  if ((uVar8 & 0x80000000) != 0) {
    bVar14 = uVar11 != 0;
    uVar11 = -uVar11;
    uVar5 = -(uVar5 + bVar14);
  }
  uVar8 = uVar7 & 0xfffff | 0x100000;
  if ((uVar7 & 0x80000000) != 0) {
    bVar14 = param_3 != 0;
    param_3 = -param_3;
    uVar8 = -(uVar8 + bVar14);
  }
  if (uVar10 == uVar12) {
    uVar8 = uVar8 ^ 0x100000;
    if (uVar10 == 0) {
      uVar5 = uVar5 ^ 0x100000;
      uVar10 = 1;
    }
    else {
      uVar12 = uVar12 - 1;
    }
  }
  uVar7 = -uVar12 + 0x20;
  if ((int)uVar12 < 0x21) {
    uVar13 = param_3 << (uVar7 & 0xff);
    param_3 = param_3 >> (uVar12 & 0xff);
    uVar4 = uVar11 + param_3;
    uVar6 = uVar8 << (uVar7 & 0xff);
    uVar7 = uVar4 + uVar6;
    uVar5 = uVar5 + CARRY4(uVar11,param_3) + ((int)uVar8 >> (uVar12 & 0xff)) +
            (uint)CARRY4(uVar4,uVar6);
  }
  else {
    uVar13 = uVar8 << (-uVar12 + 0x40 & 0xff);
    if (param_3 != 0) {
      uVar13 = uVar13 | 2;
    }
    uVar12 = (int)uVar8 >> (uVar12 - 0x20 & 0xff);
    uVar7 = uVar11 + uVar12;
    uVar5 = uVar5 + ((int)uVar8 >> 0x1f) + (uint)CARRY4(uVar11,uVar12);
  }
  param_2 = uVar5 & 0x80000000;
  uVar12 = uVar5;
  if ((int)uVar5 < 0) {
    bVar14 = uVar13 == 0;
    uVar13 = -uVar13;
    uVar12 = -uVar7;
    uVar7 = -(uVar7 + !bVar14);
    uVar12 = -(uVar5 + (bVar14 <= uVar12));
  }
  if (0xfffff < uVar12) {
    uVar11 = uVar10 - 1;
    if (0x1fffff < uVar12) {
      bVar2 = (byte)uVar12;
      uVar12 = uVar12 >> 1;
      bVar3 = (byte)uVar7;
      uVar7 = (uint)(bVar2 & 1) << 0x1f | uVar7 >> 1;
      uVar13 = (uint)(bVar3 & 1) << 0x1f | uVar13 >> 1;
      uVar11 = uVar10;
      if (0xffbfffff < uVar10 * 0x200000) goto LAB_000185c4;
    }
LAB_0001846c:
    bVar14 = 0x7fffffff < uVar13;
    if (uVar13 == 0x80000000) {
      bVar14 = (bool)((byte)uVar7 & 1);
    }
    return CONCAT44(uVar12 + uVar11 * 0x100000 + (uint)CARRY4(uVar7,(uint)bVar14) | param_2,
                    uVar7 + bVar14);
  }
  bVar2 = (byte)(uVar13 >> 0x1f);
  uVar13 = uVar13 << 1;
  uVar11 = uVar7 * 2;
  bVar14 = CARRY4(uVar7,uVar7);
  uVar7 = uVar7 * 2 + (uint)bVar2;
  uVar12 = uVar12 * 2 + (uint)(bVar14 || CARRY4(uVar11,(uint)bVar2));
  uVar11 = uVar10 - 2;
  if ((uVar12 & 0x100000) != 0) goto LAB_0001846c;
  uVar10 = uVar7;
  uVar8 = uVar12;
  if (uVar12 == 0) {
    uVar10 = 0;
    uVar8 = uVar7;
  }
  iVar9 = LZCOUNT(uVar8);
  if (uVar12 == 0) {
    iVar9 = iVar9 + 0x20;
  }
  uVar4 = iVar9 - 0xb;
  bVar15 = SBORROW4(uVar4,0x20);
  uVar6 = iVar9 - 0x2b;
  bVar14 = uVar6 == 0;
  uVar7 = uVar6;
  uVar12 = uVar6;
  if ((int)uVar4 < 0x20) {
    bVar15 = SCARRY4(uVar6,0xc);
    uVar12 = iVar9 - 0x1f;
    bVar14 = uVar12 == 0;
    uVar7 = uVar4;
    if (!bVar14 && -0xd < (int)uVar6) {
      uVar10 = uVar8 << (uVar4 & 0xff);
      uVar8 = uVar8 >> (0xc - uVar12 & 0xff);
      goto LAB_000184ec;
    }
  }
  if (bVar14 || (int)uVar12 < 0 != bVar15) {
    uVar13 = 0x20 - uVar7;
  }
  uVar8 = uVar8 << (uVar7 & 0xff);
  if (bVar14 || (int)uVar12 < 0 != bVar15) {
    uVar8 = uVar8 | uVar10 >> (uVar13 & 0xff);
    uVar10 = uVar10 << (uVar7 & 0xff);
  }
LAB_000184ec:
  if ((int)uVar4 <= (int)uVar11) {
    return CONCAT44(uVar8 + (uVar11 - uVar4) * 0x100000 | param_2,uVar10);
  }
  uVar7 = ~(uVar11 - uVar4);
  if ((int)uVar7 < 0x1f) {
    if (uVar7 - 0x13 != 0 && -0xd < (int)(uVar7 - 0x1f)) {
      uVar7 = 0xc - (uVar7 - 0x13);
      return CONCAT44(uVar5,uVar10 >> (0x20 - uVar7 & 0xff) | uVar8 << (uVar7 & 0xff)) &
             0x80000000ffffffff;
    }
    uVar7 = uVar7 + 1;
    return CONCAT44(param_2 | uVar8 >> (uVar7 & 0xff),
                    uVar10 >> (uVar7 & 0xff) | uVar8 << (0x20 - uVar7 & 0xff));
  }
  return CONCAT44(uVar5,uVar8 >> (uVar7 - 0x1f & 0xff)) & 0x80000000ffffffff;
}



/* ===== __aeabi_dadd @ 00018354 size=684 ===== */

ulonglong __aeabi_dadd(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  
  uVar9 = param_2 << 1;
  uVar5 = param_4 << 1;
  iVar8 = (int)uVar9 >> 0x15;
  iVar1 = (int)uVar5 >> 0x15;
  if ((((uVar9 == uVar5 && param_1 == param_3 || uVar9 == 0 && param_1 == 0) ||
       uVar5 == 0 && param_3 == 0) || iVar8 == -1) || iVar1 == -1) {
    if (iVar8 == -1 || iVar1 == -1) {
      uVar9 = param_3;
      uVar5 = param_4;
      if (iVar8 == -1) {
        uVar9 = param_1;
        uVar5 = param_2;
      }
      if (iVar8 != -1 || iVar1 != -1) {
        param_3 = uVar9;
        param_4 = uVar5;
      }
      bVar14 = (uVar5 & 0xfffff) == 0;
      bVar15 = uVar9 == 0 && bVar14;
      if (uVar9 == 0 && bVar14) {
        bVar15 = param_3 == 0 && (param_4 & 0xfffff) == 0;
      }
      if (!bVar15 || uVar5 != param_4) {
        uVar5 = uVar5 | 0x80000;
      }
      return CONCAT44(uVar5,uVar9);
    }
    if (uVar9 != uVar5 || param_1 != param_3) {
      if (uVar9 == 0 && param_1 == 0) {
        param_1 = param_3;
        param_2 = param_4;
      }
      return CONCAT44(param_2,param_1);
    }
    if (param_2 != param_4) {
      return 0;
    }
    if ((param_2 & 0x7fffffff) >> 0x14 == 0) {
      bVar2 = (byte)(param_1 >> 0x1f);
      uVar9 = param_2 * 2 + (uint)bVar2;
      if (CARRY4(param_2,param_2) || CARRY4(param_2 * 2,(uint)bVar2)) {
        uVar9 = uVar9 | 0x80000000;
      }
      return CONCAT44(uVar9,param_1 << 1);
    }
    if (uVar9 < 0xffc00000) {
      return CONCAT44(param_2 + 0x100000,param_1);
    }
    param_2 = param_2 & 0x80000000;
LAB_000185c4:
    return (ulonglong)(param_2 | 0x7ff00000) << 0x20;
  }
  uVar9 = (param_2 & 0x7fffffff) >> 0x14;
  uVar5 = (param_4 & 0x7fffffff) >> 0x14;
  uVar11 = uVar5 - uVar9;
  bVar14 = uVar11 != 0;
  if (uVar5 < uVar9) {
    uVar11 = -uVar11;
  }
  uVar10 = param_1;
  uVar7 = param_2;
  if (bVar14 && uVar9 <= uVar5) {
    uVar9 = uVar9 + uVar11;
    uVar10 = param_3;
    uVar7 = param_4;
    param_3 = param_1;
    param_4 = param_2;
  }
  if (0x36 < uVar11) {
    return CONCAT44(uVar7,uVar10);
  }
  uVar5 = uVar7 & 0xfffff | 0x100000;
  if ((uVar7 & 0x80000000) != 0) {
    bVar14 = uVar10 != 0;
    uVar10 = -uVar10;
    uVar5 = -(uVar5 + bVar14);
  }
  uVar7 = param_4 & 0xfffff | 0x100000;
  if ((param_4 & 0x80000000) != 0) {
    bVar14 = param_3 != 0;
    param_3 = -param_3;
    uVar7 = -(uVar7 + bVar14);
  }
  if (uVar9 == uVar11) {
    uVar7 = uVar7 ^ 0x100000;
    if (uVar9 == 0) {
      uVar5 = uVar5 ^ 0x100000;
      uVar9 = 1;
    }
    else {
      uVar11 = uVar11 - 1;
    }
  }
  uVar13 = -uVar11 + 0x20;
  if ((int)uVar11 < 0x21) {
    uVar12 = param_3 << (uVar13 & 0xff);
    param_3 = param_3 >> (uVar11 & 0xff);
    uVar4 = uVar10 + param_3;
    uVar6 = uVar7 << (uVar13 & 0xff);
    uVar13 = uVar4 + uVar6;
    uVar5 = uVar5 + CARRY4(uVar10,param_3) + ((int)uVar7 >> (uVar11 & 0xff)) +
            (uint)CARRY4(uVar4,uVar6);
  }
  else {
    uVar12 = uVar7 << (-uVar11 + 0x40 & 0xff);
    if (param_3 != 0) {
      uVar12 = uVar12 | 2;
    }
    uVar11 = (int)uVar7 >> (uVar11 - 0x20 & 0xff);
    uVar13 = uVar10 + uVar11;
    uVar5 = uVar5 + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar10,uVar11);
  }
  param_2 = uVar5 & 0x80000000;
  uVar11 = uVar5;
  if ((int)uVar5 < 0) {
    bVar14 = uVar12 == 0;
    uVar12 = -uVar12;
    uVar11 = -uVar13;
    uVar13 = -(uVar13 + !bVar14);
    uVar11 = -(uVar5 + (bVar14 <= uVar11));
  }
  if (0xfffff < uVar11) {
    uVar10 = uVar9 - 1;
    if (0x1fffff < uVar11) {
      bVar2 = (byte)uVar11;
      uVar11 = uVar11 >> 1;
      bVar3 = (byte)uVar13;
      uVar13 = (uint)(bVar2 & 1) << 0x1f | uVar13 >> 1;
      uVar12 = (uint)(bVar3 & 1) << 0x1f | uVar12 >> 1;
      uVar10 = uVar9;
      if (0xffbfffff < uVar9 * 0x200000) goto LAB_000185c4;
    }
LAB_0001846c:
    bVar14 = 0x7fffffff < uVar12;
    if (uVar12 == 0x80000000) {
      bVar14 = (bool)((byte)uVar13 & 1);
    }
    return CONCAT44(uVar11 + uVar10 * 0x100000 + (uint)CARRY4(uVar13,(uint)bVar14) | param_2,
                    uVar13 + bVar14);
  }
  bVar2 = (byte)(uVar12 >> 0x1f);
  uVar12 = uVar12 << 1;
  uVar10 = uVar13 * 2;
  bVar14 = CARRY4(uVar13,uVar13);
  uVar13 = uVar13 * 2 + (uint)bVar2;
  uVar11 = uVar11 * 2 + (uint)(bVar14 || CARRY4(uVar10,(uint)bVar2));
  uVar10 = uVar9 - 2;
  if ((uVar11 & 0x100000) != 0) goto LAB_0001846c;
  uVar9 = uVar13;
  uVar7 = uVar11;
  if (uVar11 == 0) {
    uVar9 = 0;
    uVar7 = uVar13;
  }
  iVar8 = LZCOUNT(uVar7);
  if (uVar11 == 0) {
    iVar8 = iVar8 + 0x20;
  }
  uVar4 = iVar8 - 0xb;
  bVar15 = SBORROW4(uVar4,0x20);
  uVar6 = iVar8 - 0x2b;
  bVar14 = uVar6 == 0;
  uVar11 = uVar6;
  uVar13 = uVar6;
  if ((int)uVar4 < 0x20) {
    bVar15 = SCARRY4(uVar6,0xc);
    uVar13 = iVar8 - 0x1f;
    bVar14 = uVar13 == 0;
    uVar11 = uVar4;
    if (!bVar14 && -0xd < (int)uVar6) {
      uVar9 = uVar7 << (uVar4 & 0xff);
      uVar7 = uVar7 >> (0xc - uVar13 & 0xff);
      goto LAB_000184ec;
    }
  }
  if (bVar14 || (int)uVar13 < 0 != bVar15) {
    uVar12 = 0x20 - uVar11;
  }
  uVar7 = uVar7 << (uVar11 & 0xff);
  if (bVar14 || (int)uVar13 < 0 != bVar15) {
    uVar7 = uVar7 | uVar9 >> (uVar12 & 0xff);
    uVar9 = uVar9 << (uVar11 & 0xff);
  }
LAB_000184ec:
  if ((int)uVar4 <= (int)uVar10) {
    return CONCAT44(uVar7 + (uVar10 - uVar4) * 0x100000 | param_2,uVar9);
  }
  uVar11 = ~(uVar10 - uVar4);
  if ((int)uVar11 < 0x1f) {
    if (uVar11 - 0x13 != 0 && -0xd < (int)(uVar11 - 0x1f)) {
      uVar11 = 0xc - (uVar11 - 0x13);
      return CONCAT44(uVar5,uVar9 >> (0x20 - uVar11 & 0xff) | uVar7 << (uVar11 & 0xff)) &
             0x80000000ffffffff;
    }
    uVar11 = uVar11 + 1;
    return CONCAT44(param_2 | uVar7 >> (uVar11 & 0xff),
                    uVar9 >> (uVar11 & 0xff) | uVar7 << (0x20 - uVar11 & 0xff));
  }
  return CONCAT44(uVar5,uVar7 >> (uVar11 - 0x1f & 0xff)) & 0x80000000ffffffff;
}



/* ===== __floatunsidf @ 00018600 size=36 ===== */

ulonglong __floatunsidf(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint in_r12;
  bool bVar7;
  bool bVar8;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = 0;
  iVar4 = LZCOUNT(param_1);
  uVar5 = iVar4 + 0x15;
  bVar8 = SBORROW4(uVar5,0x20);
  uVar2 = iVar4 - 0xb;
  bVar7 = uVar2 == 0;
  uVar6 = uVar2;
  uVar3 = uVar2;
  if (uVar5 < 0x20) {
    bVar8 = SCARRY4(uVar2,0xc);
    uVar3 = iVar4 + 1;
    bVar7 = uVar3 == 0;
    uVar6 = uVar5;
    if (!bVar7 && -0xd < (int)uVar2) {
      uVar1 = param_1 << uVar5;
      param_1 = param_1 >> (0xc - uVar3 & 0xff);
      goto LAB_000184ec;
    }
  }
  if (bVar7 || (int)uVar3 < 0 != bVar8) {
    in_r12 = 0x20 - uVar6;
  }
  param_1 = param_1 << (uVar6 & 0xff);
  if (bVar7 || (int)uVar3 < 0 != bVar8) {
    param_1 = param_1 | 0U >> (in_r12 & 0xff);
    uVar1 = 0 << (uVar6 & 0xff);
  }
LAB_000184ec:
  if (uVar5 < 0x433) {
    return CONCAT44(param_1 + (0x432 - uVar5) * 0x100000,uVar1);
  }
  uVar6 = ~(0x432 - uVar5);
  if (0x1e < (int)uVar6) {
    return (ulonglong)(param_1 >> (uVar6 - 0x1f & 0xff));
  }
  if (uVar6 - 0x13 == 0 || (int)(uVar6 - 0x1f) < -0xc) {
    uVar6 = uVar6 + 1;
    return CONCAT44(param_1 >> (uVar6 & 0xff),
                    uVar1 >> (uVar6 & 0xff) | param_1 << (0x20 - uVar6 & 0xff));
  }
  uVar6 = 0xc - (uVar6 - 0x13);
  return (ulonglong)(uVar1 >> (0x20 - uVar6 & 0xff) | param_1 << (uVar6 & 0xff));
}



/* ===== __aeabi_i2d @ 00018624 size=40 ===== */

ulonglong __aeabi_i2d(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint in_r12;
  bool bVar9;
  bool bVar10;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar8 = param_1 & 0x80000000;
  uVar2 = param_1;
  if ((int)uVar8 < 0) {
    uVar2 = -param_1;
  }
  uVar1 = 0;
  iVar5 = LZCOUNT(uVar2);
  uVar6 = iVar5 + 0x15;
  bVar10 = SBORROW4(uVar6,0x20);
  uVar3 = iVar5 - 0xb;
  bVar9 = uVar3 == 0;
  uVar7 = uVar3;
  uVar4 = uVar3;
  if (uVar6 < 0x20) {
    bVar10 = SCARRY4(uVar3,0xc);
    uVar4 = iVar5 + 1;
    bVar9 = uVar4 == 0;
    uVar7 = uVar6;
    if (!bVar9 && -0xd < (int)uVar3) {
      uVar1 = uVar2 << uVar6;
      uVar2 = uVar2 >> (0xc - uVar4 & 0xff);
      goto LAB_000184ec;
    }
  }
  if (bVar9 || (int)uVar4 < 0 != bVar10) {
    in_r12 = 0x20 - uVar7;
  }
  uVar2 = uVar2 << (uVar7 & 0xff);
  if (bVar9 || (int)uVar4 < 0 != bVar10) {
    uVar2 = uVar2 | 0U >> (in_r12 & 0xff);
    uVar1 = 0 << (uVar7 & 0xff);
  }
LAB_000184ec:
  if (uVar6 < 0x433) {
    return CONCAT44(uVar2 + (0x432 - uVar6) * 0x100000 | uVar8,uVar1);
  }
  uVar7 = ~(0x432 - uVar6);
  if (0x1e < (int)uVar7) {
    return CONCAT44(param_1,uVar2 >> (uVar7 - 0x1f & 0xff)) & 0x80000000ffffffff;
  }
  if (uVar7 - 0x13 == 0 || (int)(uVar7 - 0x1f) < -0xc) {
    uVar7 = uVar7 + 1;
    return CONCAT44(uVar8 | uVar2 >> (uVar7 & 0xff),
                    uVar1 >> (uVar7 & 0xff) | uVar2 << (0x20 - uVar7 & 0xff));
  }
  uVar8 = 0xc - (uVar7 - 0x13);
  return CONCAT44(param_1,uVar1 >> (0x20 - uVar8 & 0xff) | uVar2 << (uVar8 & 0xff)) &
         0x80000000ffffffff;
}



/* ===== __aeabi_f2d @ 0001864c size=72 ===== */

ulonglong __aeabi_f2d(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint in_r12;
  bool bVar10;
  bool bVar11;
  
  uVar2 = param_1 << 1;
  bVar10 = uVar2 == 0;
  uVar9 = param_1 & 0x80000000;
  uVar8 = (uint)((int)uVar2 >> 3) >> 1;
  uVar1 = uVar9 | uVar8;
  param_1 = param_1 << 0x1d;
  if (!bVar10) {
    param_4 = uVar2 & 0xff000000;
    bVar10 = param_4 == 0;
  }
  if (!bVar10) {
    bVar10 = param_4 == 0xff000000;
  }
  if (!bVar10) {
    return CONCAT44(uVar1,param_1) ^ 0x3800000000000000;
  }
  if ((uVar2 & 0xffffff) == 0) {
    return CONCAT44(uVar1,param_1);
  }
  if (param_4 == 0xff000000) {
    return CONCAT44(uVar1,param_1) | 0x8000000000000;
  }
  uVar2 = param_1;
  uVar3 = uVar8;
  if (uVar8 == 0) {
    uVar2 = 0;
    uVar3 = param_1;
  }
  iVar6 = LZCOUNT(uVar3);
  if (uVar8 == 0) {
    iVar6 = iVar6 + 0x20;
  }
  uVar7 = iVar6 - 0xb;
  bVar11 = SBORROW4(uVar7,0x20);
  uVar4 = iVar6 - 0x2b;
  bVar10 = uVar4 == 0;
  uVar8 = uVar4;
  uVar5 = uVar4;
  if ((int)uVar7 < 0x20) {
    bVar11 = SCARRY4(uVar4,0xc);
    uVar5 = iVar6 - 0x1f;
    bVar10 = uVar5 == 0;
    uVar8 = uVar7;
    if (!bVar10 && -0xd < (int)uVar4) {
      uVar2 = uVar3 << (uVar7 & 0xff);
      uVar3 = uVar3 >> (0xc - uVar5 & 0xff);
      goto LAB_000184ec;
    }
  }
  if (bVar10 || (int)uVar5 < 0 != bVar11) {
    in_r12 = 0x20 - uVar8;
  }
  uVar3 = uVar3 << (uVar8 & 0xff);
  if (bVar10 || (int)uVar5 < 0 != bVar11) {
    uVar3 = uVar3 | uVar2 >> (in_r12 & 0xff);
    uVar2 = uVar2 << (uVar8 & 0xff);
  }
LAB_000184ec:
  if ((int)uVar7 < 0x381) {
    return CONCAT44(uVar3 + (0x380 - uVar7) * 0x100000 | uVar9,uVar2);
  }
  uVar8 = ~(0x380 - uVar7);
  if (0x1e < (int)uVar8) {
    return CONCAT44(uVar1,uVar3 >> (uVar8 - 0x1f & 0xff)) & 0x80000000ffffffff;
  }
  if (uVar8 - 0x13 == 0 || (int)(uVar8 - 0x1f) < -0xc) {
    uVar8 = uVar8 + 1;
    return CONCAT44(uVar9 | uVar3 >> (uVar8 & 0xff),
                    uVar2 >> (uVar8 & 0xff) | uVar3 << (0x20 - uVar8 & 0xff));
  }
  uVar9 = 0xc - (uVar8 - 0x13);
  return CONCAT44(uVar1,uVar2 >> (0x20 - uVar9 & 0xff) | uVar3 << (uVar9 & 0xff)) &
         0x80000000ffffffff;
}



/* ===== __floatundidf @ 00018694 size=20 ===== */

ulonglong __floatundidf(uint param_1,uint param_2)

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
LAB_0001846c:
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
  if ((param_2 & 0x100000) != 0) goto LAB_0001846c;
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
      goto LAB_000184ec;
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
LAB_000184ec:
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



/* ===== __aeabi_l2d @ 000186a8 size=96 ===== */

ulonglong __aeabi_l2d(uint param_1,uint param_2)

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
  int iVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  
  if (param_1 == 0 && param_2 == 0) {
    return CONCAT44(param_2,param_1);
  }
  uVar11 = param_2 & 0x80000000;
  uVar4 = param_2;
  if ((int)uVar11 < 0) {
    bVar13 = param_1 != 0;
    param_1 = -param_1;
    uVar4 = -(param_2 + bVar13);
  }
  iVar10 = 0x432;
  uVar12 = 0;
  if (uVar4 >> 0x16 != 0) {
    iVar10 = 3;
    if (uVar4 >> 0x19 != 0) {
      iVar10 = 6;
    }
    if (uVar4 >> 0x1c != 0) {
      iVar10 = iVar10 + 3;
    }
    iVar10 = iVar10 - ((int)uVar4 >> 0x1f);
    uVar12 = param_1 << (0x20U - iVar10 & 0xff);
    param_1 = param_1 >> iVar10 | uVar4 << (0x20U - iVar10 & 0xff);
    uVar4 = uVar4 >> iVar10;
    iVar10 = iVar10 + 0x432;
  }
  if (0xfffff < uVar4) {
    if (0x1fffff < uVar4) {
      bVar1 = (byte)uVar4;
      uVar4 = uVar4 >> 1;
      bVar2 = (byte)param_1;
      param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
      uVar12 = (uint)(bVar2 & 1) << 0x1f | uVar12 >> 1;
      iVar10 = iVar10 + 1;
      if (0xffbfffff < (uint)(iVar10 * 0x200000)) {
        return (ulonglong)(uVar11 | 0x7ff00000) << 0x20;
      }
    }
LAB_0001846c:
    bVar13 = 0x7fffffff < uVar12;
    if (uVar12 == 0x80000000) {
      bVar13 = (bool)((byte)param_1 & 1);
    }
    return CONCAT44(uVar4 + iVar10 * 0x100000 + (uint)CARRY4(param_1,(uint)bVar13) | uVar11,
                    param_1 + bVar13);
  }
  bVar1 = (byte)(uVar12 >> 0x1f);
  uVar12 = uVar12 << 1;
  uVar3 = param_1 * 2;
  bVar13 = CARRY4(param_1,param_1);
  param_1 = param_1 * 2 + (uint)bVar1;
  uVar4 = uVar4 * 2 + (uint)(bVar13 || CARRY4(uVar3,(uint)bVar1));
  iVar10 = iVar10 + -1;
  if ((uVar4 & 0x100000) != 0) goto LAB_0001846c;
  uVar3 = param_1;
  uVar5 = uVar4;
  if (uVar4 == 0) {
    uVar3 = 0;
    uVar5 = param_1;
  }
  iVar8 = LZCOUNT(uVar5);
  if (uVar4 == 0) {
    iVar8 = iVar8 + 0x20;
  }
  uVar9 = iVar8 - 0xb;
  bVar14 = SBORROW4(uVar9,0x20);
  uVar6 = iVar8 - 0x2b;
  bVar13 = uVar6 == 0;
  uVar4 = uVar6;
  uVar7 = uVar6;
  if ((int)uVar9 < 0x20) {
    bVar14 = SCARRY4(uVar6,0xc);
    uVar7 = iVar8 - 0x1f;
    bVar13 = uVar7 == 0;
    uVar4 = uVar9;
    if (!bVar13 && -0xd < (int)uVar6) {
      uVar3 = uVar5 << (uVar9 & 0xff);
      uVar5 = uVar5 >> (0xc - uVar7 & 0xff);
      goto LAB_000184ec;
    }
  }
  if (bVar13 || (int)uVar7 < 0 != bVar14) {
    uVar12 = 0x20 - uVar4;
  }
  uVar5 = uVar5 << (uVar4 & 0xff);
  if (bVar13 || (int)uVar7 < 0 != bVar14) {
    uVar5 = uVar5 | uVar3 >> (uVar12 & 0xff);
    uVar3 = uVar3 << (uVar4 & 0xff);
  }
LAB_000184ec:
  if ((int)uVar9 <= iVar10) {
    return CONCAT44(uVar5 + (iVar10 - uVar9) * 0x100000 | uVar11,uVar3);
  }
  uVar4 = ~(iVar10 - uVar9);
  if (0x1e < (int)uVar4) {
    return CONCAT44(param_2,uVar5 >> (uVar4 - 0x1f & 0xff)) & 0x80000000ffffffff;
  }
  if (uVar4 - 0x13 == 0 || (int)(uVar4 - 0x1f) < -0xc) {
    uVar4 = uVar4 + 1;
    return CONCAT44(uVar11 | uVar5 >> (uVar4 & 0xff),
                    uVar3 >> (uVar4 & 0xff) | uVar5 << (0x20 - uVar4 & 0xff));
  }
  uVar4 = 0xc - (uVar4 - 0x13);
  return CONCAT44(param_2,uVar3 >> (0x20 - uVar4 & 0xff) | uVar5 << (uVar4 & 0xff)) &
         0x80000000ffffffff;
}



/* ===== __aeabi_idiv0 @ 00018708 size=16 ===== */

void __aeabi_idiv0(void)

{
  raise(8);
  return;
}



/* ===== __fixdfdi @ 00018718 size=44 ===== */

DItype __fixdfdi(DFtype a)

{
  undefined4 in_r0;
  undefined4 in_r1;
  UDItype UVar1;
  
  if (0.0 <= (double)CONCAT44(in_r1,in_r0)) {
    UVar1 = __fixunsdfdi(a);
    return UVar1;
  }
  UVar1 = __fixunsdfdi(a);
  return CONCAT44(-((int)(UVar1 >> 0x20) + (uint)((int)UVar1 != 0)),-(int)UVar1);
}



/* ===== __fixunsdfdi @ 00018748 size=72 ===== */

UDItype __fixunsdfdi(DFtype a)

{
  int iVar1;
  undefined4 in_r0;
  undefined4 in_r1;
  uint in_fpscr;
  double dVar2;
  
                    /* Unresolved local var: USItype hi@[???]
                       Unresolved local var: USItype lo@[???] */
  dVar2 = (double)CONCAT44(in_r1,in_r0) * DAT_00018790;
  iVar1 = (uint)(0.0 < dVar2) * (int)(longlong)dVar2;
  dVar2 = (double)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  dVar2 = (double)CONCAT44(in_r1,in_r0) + -dVar2 * DAT_00018798;
  return CONCAT44(iVar1,(uint)(0.0 < dVar2) * (int)(longlong)dVar2);
}



/* ===== _fini @ 000187a0 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::clock_gettime @ 0002a000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sqrt @ 0002a004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double sqrt(double __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_cond_signal @ 0002a008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_signal(pthread_cond_t *__cond)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 0002a00c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0002a010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 0002a014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0002a018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ceil @ 0002a01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double ceil(double __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0002a020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 0002a024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tcflush @ 0002a028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcflush(int __fd,int __queue_selector)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0002a02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vsnprintf @ 0002a030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pipe @ 0002a034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pipe(int *__pipedes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 0002a038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 0002a03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0002a040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0002a044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 0002a048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::cos @ 0002a04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double cos(double __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memchr @ 0002a050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memchr(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sin @ 0002a054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double sin(double __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atan2 @ 0002a058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double atan2(double __y,double __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 0002a05c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 0002a060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_cond_init @ 0002a064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_init(pthread_cond_t *__cond,pthread_condattr_t *__cond_attr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 0002a068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 0002a06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002a070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::poll @ 0002a074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 0002a078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 0002a080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_cond_wait @ 0002a084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0002a088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 0002a08c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fcntl @ 0002a090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 0002a094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0002a098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 0002a09c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0002a0a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


