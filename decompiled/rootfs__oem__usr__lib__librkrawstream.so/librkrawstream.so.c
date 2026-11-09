// librkrawstream.so — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 0001d870 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::poll @ 0001d894 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_poll_0004400c)(__fds);
  return iVar1;
}



/* ===== RkRawStream::RawStreamCapUnit::set_sensor_mode @ 0001d8a0 size=12 ===== */

void __thiscall RkRawStream::RawStreamCapUnit::set_sensor_mode(RawStreamCapUnit *this,uint param_1)

{
  (*(code *)PTR_set_sensor_mode_00044010)(this);
  return;
}



/* ===== <EXTERNAL>::std::__throw_length_error @ 0001d8ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_length_error(char *param_1)

{
  (*(code *)PTR___throw_length_error_00044014)(param_1);
  return;
}



/* ===== XCam::SmartPtr<XCam::VideoBuffer>::operator= @ 0001d8b8 size=12 ===== */

void __thiscall
XCam::SmartPtr<XCam::VideoBuffer>::operator=(SmartPtr<XCam::VideoBuffer> *this,SmartPtr *param_1)

{
  (*(code *)PTR_operator__00044018)(this);
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 0001d8c4 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0004401c)();
  return;
}



/* ===== XCam::V4l2Device::~V4l2Device @ 0001d8d0 size=12 ===== */

void __thiscall XCam::V4l2Device::~V4l2Device(V4l2Device *this)

{
  (*(code *)PTR__V4l2Device_00044020)(this);
  return;
}



/* ===== XCam::Thread::start @ 0001d8dc size=12 ===== */

void __thiscall XCam::Thread::start(Thread *this)

{
  (*(code *)PTR_start_00044024)(this);
  return;
}



/* ===== RkRawStream::_parse_rk_rawdata @ 0001d8e8 size=12 ===== */

void RkRawStream::_parse_rk_rawdata(void *param_1,rkrawstream_rkraw2_t *param_2)

{
  (*(code *)PTR__parse_rk_rawdata_00044028)(param_1);
  return;
}



/* ===== <EXTERNAL>::pthread_attr_setschedparam @ 0001d8f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_attr_setschedparam(pthread_attr_t *__attr,sched_param *__param)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_attr_setschedparam_0004402c)(__attr);
  return iVar1;
}



/* ===== XCam::SmartPtr<XCam::BufferData>::SmartPtr @ 0001d900 size=12 ===== */

void __thiscall
XCam::SmartPtr<XCam::BufferData>::SmartPtr(SmartPtr<XCam::BufferData> *this,SmartPtr *param_1)

{
  (*(code *)PTR_SmartPtr_00044030)(this);
  return;
}



/* ===== RkRawStream::RkPollThread::RkPollThread @ 0001d90c size=12 ===== */

void __thiscall RkRawStream::RkPollThread::RkPollThread(void)

{
  (*(code *)PTR_RkPollThread_00044034)();
  return;
}



/* ===== RkRawStream::RkPollThread::destroy_stop_fds @ 0001d918 size=12 ===== */

void __thiscall RkRawStream::RkPollThread::destroy_stop_fds(RkPollThread *this)

{
  (*(code *)PTR_destroy_stop_fds_00044038)(this);
  return;
}



/* ===== <EXTERNAL>::calloc @ 0001d924 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0004403c)(__nmemb);
  return pvVar1;
}



/* ===== XCam::V4l2Device::io_control @ 0001d930 size=12 ===== */

void __thiscall XCam::V4l2Device::io_control(V4l2Device *this,ulong param_1,void *param_2)

{
  (*(code *)PTR_io_control_00044040)(this);
  return;
}



/* ===== XCam::SmartPtr<XCam::V4l2Buffer>::release @ 0001d93c size=12 ===== */

void __thiscall XCam::SmartPtr<XCam::V4l2Buffer>::release(SmartPtr<XCam::V4l2Buffer> *this)

{
  (*(code *)PTR_release_00044044)(this);
  return;
}



/* ===== XCam::V4l2Device::get_buffer @ 0001d948 size=12 ===== */

void __thiscall XCam::V4l2Device::get_buffer(V4l2Device *this,SmartPtr *param_1,int param_2)

{
  (*(code *)PTR_get_buffer_00044048)(this);
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 0001d954 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0004404c)();
  return piVar1;
}



/* ===== XCam::SmartPtr<XCam::BufferData>::release @ 0001d960 size=12 ===== */

void __thiscall XCam::SmartPtr<XCam::BufferData>::release(SmartPtr<XCam::BufferData> *this)

{
  (*(code *)PTR_release_00044050)(this);
  return;
}



/* ===== <EXTERNAL>::std::__detail::_List_node_base::_M_unhook @ 0001d96c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__detail::_List_node_base::_M_unhook(void)

{
  (*(code *)PTR__M_unhook_00044054)();
  return;
}



/* ===== <EXTERNAL>::pthread_attr_setinheritsched @ 0001d978 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_attr_setinheritsched(pthread_attr_t *__attr,int __inherit)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_attr_setinheritsched_00044058)(__attr);
  return iVar1;
}



/* ===== XCam::SmartPtr<XCam::V4l2BufferProxy>::SmartPtr @ 0001d984 size=12 ===== */

void __thiscall
XCam::SmartPtr<XCam::V4l2BufferProxy>::SmartPtr
          (SmartPtr<XCam::V4l2BufferProxy> *this,SmartPtr *param_1)

{
  (*(code *)PTR_SmartPtr_0004405c)(this);
  return;
}



/* ===== <EXTERNAL>::clock_gettime @ 0001d990 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_00044060)(__clock_id);
  return iVar1;
}



/* ===== std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,bool>,std::_Select1st<std::pair<unsigned_int_const,bool>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,bool>>>::~_Rb_tree @ 0001d99c size=12 ===== */

void __thiscall
std::
_Rb_tree<unsigned_int,std::pair<unsigned_int_const,bool>,std::_Select1st<std::pair<unsigned_int_const,bool>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,bool>>>
::~_Rb_tree(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,bool>,std::_Select1st<std::pair<unsigned_int_const,bool>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,bool>>>
            *this)

{
  (*(code *)PTR___Rb_tree_00044064)(this);
  return;
}



/* ===== <EXTERNAL>::fcntl64 @ 0001d9a8 size=12 ===== */

void fcntl64(void)

{
  (*(code *)PTR_fcntl64_00044068)();
  return;
}



/* ===== <EXTERNAL>::getenv @ 0001d9b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_0004406c)(__name);
  return pcVar1;
}



/* ===== XCam::SmartPtr<RkRawStream::RawProcThread>::release @ 0001d9c0 size=12 ===== */

void __thiscall
XCam::SmartPtr<RkRawStream::RawProcThread>::release(SmartPtr<RkRawStream::RawProcThread> *this)

{
  (*(code *)PTR_release_00044070)(this);
  return;
}



/* ===== <EXTERNAL>::fwrite @ 0001d9cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00044074)(__ptr);
  return sVar1;
}



/* ===== XCam::SmartPtr<rk_aiq_static_info_t>::operator= @ 0001d9d8 size=12 ===== */

void __thiscall
XCam::SmartPtr<rk_aiq_static_info_t>::operator=
          (SmartPtr<rk_aiq_static_info_t> *this,rk_aiq_static_info_t *param_1)

{
  (*(code *)PTR_operator__00044078)(this);
  return;
}



/* ===== XCam::SafeList<XCam::V4l2BufferProxy>::is_empty @ 0001d9e4 size=12 ===== */

void __thiscall
XCam::SafeList<XCam::V4l2BufferProxy>::is_empty(SafeList<XCam::V4l2BufferProxy> *this)

{
  (*(code *)PTR_is_empty_0004407c)(this);
  return;
}



/* ===== XCam::V4l2BufferProxy::v4l2_format_to_video_info @ 0001d9f0 size=12 ===== */

void __thiscall
XCam::V4l2BufferProxy::v4l2_format_to_video_info
          (V4l2BufferProxy *this,v4l2_format *param_1,VideoBufferInfo *param_2)

{
  (*(code *)PTR_v4l2_format_to_video_info_00044080)(this);
  return;
}



/* ===== XCam::Cond::~Cond @ 0001d9fc size=12 ===== */

void __thiscall XCam::Cond::~Cond(Cond *this)

{
  (*(code *)PTR__Cond_00044084)(this);
  return;
}



/* ===== std::_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>::erase @ 0001da08 size=12 ===== */

void __thiscall
std::
_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
::erase(_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
        *this,string *param_1)

{
  (*(code *)PTR_erase_00044088)(this);
  return;
}



/* ===== <EXTERNAL>::usleep @ 0001da14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_0004408c)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 0001da20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00044090)(__dest);
  return pvVar1;
}



/* ===== xcam_free @ 0001da2c size=12 ===== */

void xcam_free(void)

{
  (*(code *)PTR_xcam_free_00044094)();
  return;
}



/* ===== XCam::BufferProxy::~BufferProxy @ 0001da38 size=12 ===== */

void __thiscall XCam::BufferProxy::~BufferProxy(BufferProxy *this)

{
  (*(code *)PTR__BufferProxy_00044098)(this);
  return;
}



/* ===== <EXTERNAL>::std::__cxx11::string::operator= @ 0001da44 size=12 ===== */

void __thiscall std::__cxx11::string::operator=(string *this,string *param_1)

{
  (*(code *)PTR_operator__0004409c)(this);
  return;
}



/* ===== RkRawStream::RawStreamProcUnit::prepare @ 0001da50 size=12 ===== */

void __thiscall
RkRawStream::RawStreamProcUnit::prepare
          (RawStreamProcUnit *this,int param_1,uchar param_2,uchar param_3)

{
  (*(code *)PTR_prepare_000440a0)(this,param_1,param_2,param_3);
  return;
}



/* ===== media_entity_get_info @ 0001da5c size=12 ===== */

void media_entity_get_info(void)

{
  (*(code *)PTR_media_entity_get_info_000440a4)();
  return;
}



/* ===== <EXTERNAL>::realloc @ 0001da68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_000440a8)(__ptr);
  return pvVar1;
}



/* ===== XCam::PollThread::stop @ 0001da74 size=12 ===== */

void XCam::PollThread::stop(void)

{
  (*(code *)PTR_stop_000440ac)();
  return;
}



/* ===== <EXTERNAL>::operator.delete @ 0001da80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_000440b0)(param_1);
  return;
}



/* ===== media_parse_link @ 0001da8c size=12 ===== */

void media_parse_link(void)

{
  (*(code *)PTR_media_parse_link_000440b4)();
  return;
}



/* ===== RkRawStream::RKStream::~RKStream @ 0001da98 size=12 ===== */

void __thiscall RkRawStream::RKStream::~RKStream(RKStream *this)

{
  (*(code *)PTR__RKStream_000440b8)(this);
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 0001daa4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_000440bc)(__mutex);
  return iVar1;
}



/* ===== XCam::PollThread::~PollThread @ 0001dab0 size=12 ===== */

void __thiscall XCam::PollThread::~PollThread(PollThread *this)

{
  (*(code *)PTR__PollThread_000440c0)(this);
  return;
}



/* ===== RkRawStream::RawStreamProcUnit::send_sync_buf2 @ 0001dabc size=12 ===== */

void __thiscall
RkRawStream::RawStreamProcUnit::send_sync_buf2(RawStreamProcUnit *this,uchar *param_1)

{
  (*(code *)PTR_send_sync_buf2_000440c4)(this);
  return;
}



/* ===== RkRawStream::RawStreamCapUnit::set_sensor_format @ 0001dac8 size=12 ===== */

void RkRawStream::RawStreamCapUnit::set_sensor_format(uint param_1,uint param_2,uint param_3)

{
  (*(code *)PTR_set_sensor_format_000440c8)(param_1);
  return;
}



/* ===== <EXTERNAL>::readlink @ 0001dad4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_readlink_000440cc)(__path);
  return sVar1;
}



/* ===== XCam::SmartLock::~SmartLock @ 0001dae0 size=12 ===== */

void __thiscall XCam::SmartLock::~SmartLock(SmartLock *this)

{
  (*(code *)PTR__SmartLock_000440d0)(this);
  return;
}



/* ===== <EXTERNAL>::pthread_attr_init @ 0001daec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_attr_init(pthread_attr_t *__attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_attr_init_000440d4)(__attr);
  return iVar1;
}



/* ===== XCam::SmartPtr<XCam::V4l2Buffer>::operator= @ 0001daf8 size=12 ===== */

void __thiscall
XCam::SmartPtr<XCam::V4l2Buffer>::operator=(SmartPtr<XCam::V4l2Buffer> *this,SmartPtr *param_1)

{
  (*(code *)PTR_operator__000440d8)(this);
  return;
}



/* ===== <EXTERNAL>::__cxa_rethrow @ 0001db04 size=12 ===== */

void __cxa_rethrow(void)

{
  (*(code *)PTR___cxa_rethrow_000440dc)();
  return;
}



/* ===== <EXTERNAL>::gettimeofday @ 0001db10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_000440e0)(__tv);
  return iVar1;
}



/* ===== RkRawStream::RkEventPollThread::~RkEventPollThread @ 0001db1c size=12 ===== */

void __thiscall RkRawStream::RkEventPollThread::~RkEventPollThread(RkEventPollThread *this)

{
  (*(code *)PTR__RkEventPollThread_000440e4)(this);
  return;
}



/* ===== <EXTERNAL>::std::ios_base::Init::Init @ 0001db28 size=12 ===== */

void __thiscall std::ios_base::Init::Init(Init *this)

{
  (*(code *)PTR_Init_000440e8)(this);
  return;
}



/* ===== XCam::VideoBuffer::~VideoBuffer @ 0001db34 size=12 ===== */

void __thiscall XCam::VideoBuffer::~VideoBuffer(VideoBuffer *this)

{
  (*(code *)PTR__VideoBuffer_000440ec)(this);
  return;
}



/* ===== RkRawStream::RawStreamProcUnit::set_rx_format @ 0001db40 size=12 ===== */

void __thiscall
RkRawStream::RawStreamProcUnit::set_rx_format
          (RawStreamProcUnit *this,uint param_1,uint param_2,uint param_3,int param_4)

{
  (*(code *)PTR_set_rx_format_000440f0)(this);
  return;
}



/* ===== XCam::SmartPtr<XCam::V4l2SubDevice>::SmartPtr @ 0001db4c size=12 ===== */

void __thiscall
XCam::SmartPtr<XCam::V4l2SubDevice>::SmartPtr(SmartPtr<XCam::V4l2SubDevice> *this,SmartPtr *param_1)

{
  (*(code *)PTR_SmartPtr_000440f4)(this);
  return;
}



/* ===== media_get_entity @ 0001db58 size=12 ===== */

void media_get_entity(void)

{
  (*(code *)PTR_media_get_entity_000440f8)();
  return;
}



/* ===== XCam::SmartPtr<XCam::BufferProxy>::release @ 0001db64 size=12 ===== */

void __thiscall XCam::SmartPtr<XCam::BufferProxy>::release(SmartPtr<XCam::BufferProxy> *this)

{
  (*(code *)PTR_release_000440fc)(this);
  return;
}



/* ===== RkRawStream::RawStreamProcUnit::~RawStreamProcUnit @ 0001db70 size=12 ===== */

void __thiscall RkRawStream::RawStreamProcUnit::~RawStreamProcUnit(RawStreamProcUnit *this)

{
  (*(code *)PTR__RawStreamProcUnit_00044100)(this);
  return;
}



/* ===== XCam::Thread::~Thread @ 0001db7c size=12 ===== */

void __thiscall XCam::Thread::~Thread(Thread *this)

{
  (*(code *)PTR__Thread_00044104)(this);
  return;
}



/* ===== std::__cxx11::_List_base<XCam::SmartPtr<XCam::MetaData>,std::allocator<XCam::SmartPtr<XCam::MetaData>>>::_M_clear @ 0001db88 size=12 ===== */

void __thiscall
std::__cxx11::
_List_base<XCam::SmartPtr<XCam::MetaData>,std::allocator<XCam::SmartPtr<XCam::MetaData>>>::_M_clear
          (_List_base<XCam::SmartPtr<XCam::MetaData>,std::allocator<XCam::SmartPtr<XCam::MetaData>>>
           *this)

{
  (*(code *)PTR__M_clear_00044108)(this);
  return;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 0001db94 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_0004410c)();
  return;
}



/* ===== XCam::BufferPool::get_buffer @ 0001dba0 size=12 ===== */

void XCam::BufferPool::get_buffer(SmartPtr *param_1)

{
  (*(code *)PTR_get_buffer_00044110)(param_1);
  return;
}



/* ===== <EXTERNAL>::strtoul @ 0001dbac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_00044114)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::std::_Rb_tree_decrement @ 0001dbb8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_decrement(_Rb_tree_node_base *param_1)

{
  (*(code *)PTR__Rb_tree_decrement_00044118)(param_1);
  return;
}



/* ===== RkRawStream::MediaInfo::getSensorFullInfo @ 0001dbc4 size=12 ===== */

void __thiscall
RkRawStream::MediaInfo::getSensorFullInfo(MediaInfo *this,char *param_1,ushort param_2)

{
  (*(code *)PTR_getSensorFullInfo_0004411c)(this,param_1,param_2);
  return;
}



/* ===== XCam::V4l2Device::V4l2Device @ 0001dbd0 size=12 ===== */

void __thiscall XCam::V4l2Device::V4l2Device(V4l2Device *this,char *param_1)

{
  (*(code *)PTR_V4l2Device_00044120)(this);
  return;
}



/* ===== XCam::Thread::stop @ 0001dbdc size=12 ===== */

void XCam::Thread::stop(void)

{
  (*(code *)PTR_stop_00044124)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 0001dbe8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00044128)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::strrchr @ 0001dbf4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_0004412c)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::strncmp @ 0001dc00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00044130)(__s1);
  return iVar1;
}



/* ===== XCam::SmartPtr<XCam::BufferData>::dynamic_cast_ptr<XCam::V4l2Buffer> @ 0001dc0c size=12 ===== */

void XCam::SmartPtr<XCam::BufferData>::dynamic_cast_ptr<XCam::V4l2Buffer>(void)

{
  (*(code *)PTR_dynamic_cast_ptr<XCam::V4l2Buffer>_00044134)();
  return;
}



/* ===== XCam::V4l2Device::fini_buffer_pool @ 0001dc18 size=12 ===== */

void __thiscall XCam::V4l2Device::fini_buffer_pool(V4l2Device *this)

{
  (*(code *)PTR_fini_buffer_pool_00044138)(this);
  return;
}



/* ===== <EXTERNAL>::__cxa_end_cleanup @ 0001dc24 size=12 ===== */

void __cxa_end_cleanup(void)

{
  (*(code *)PTR___cxa_end_cleanup_0004413c)();
  return;
}



/* ===== std::_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>::find @ 0001dc30 size=12 ===== */

void __thiscall
std::
_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
::find(_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
       *this,string *param_1)

{
  (*(code *)PTR_find_00044140)(this);
  return;
}



/* ===== xcam_get_log_level @ 0001dc3c size=12 ===== */

void xcam_get_log_level(void)

{
  (*(code *)PTR_xcam_get_log_level_00044144)();
  return;
}



/* ===== <EXTERNAL>::fopen64 @ 0001dc48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_00044148)(__filename);
  return pFVar1;
}



/* ===== xcam_print_log @ 0001dc60 size=12 ===== */

void xcam_print_log(void)

{
  (*(code *)PTR_xcam_print_log_00044150)();
  return;
}



/* ===== XCam::SmartPtr<RkRawStream::RKStream>::release @ 0001dc6c size=12 ===== */

void __thiscall
XCam::SmartPtr<RkRawStream::RKStream>::release(SmartPtr<RkRawStream::RKStream> *this)

{
  (*(code *)PTR_release_00044154)(this);
  return;
}



/* ===== <EXTERNAL>::ioctl @ 0001dc78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_00044158)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::std::__cxx11::string::operator+= @ 0001dc84 size=12 ===== */

void __thiscall std::__cxx11::string::operator+=(string *this,string *param_1)

{
  (*(code *)PTR_operator___0004415c)(this);
  return;
}



/* ===== XCam::SafeList<XCam::BufferData>::push @ 0001dc90 size=12 ===== */

void XCam::SafeList<XCam::BufferData>::push(SmartPtr *param_1)

{
  (*(code *)PTR_push_00044160)(param_1);
  return;
}



/* ===== XCam::V4l2Device::query_cap @ 0001dc9c size=12 ===== */

void __thiscall XCam::V4l2Device::query_cap(V4l2Device *this,v4l2_capability *param_1)

{
  (*(code *)PTR_query_cap_00044164)(this);
  return;
}



/* ===== <EXTERNAL>::strlen @ 0001dca8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00044168)(__s);
  return sVar1;
}



/* ===== XCam::V4l2Device::request_buffer @ 0001dcb4 size=12 ===== */

void __thiscall XCam::V4l2Device::request_buffer(V4l2Device *this)

{
  (*(code *)PTR_request_buffer_0004416c)(this);
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 0001dcc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_00044170)(__mutex);
  return iVar1;
}



/* ===== RkRawStream::MediaInfo::offline @ 0001dccc size=12 ===== */

void __thiscall RkRawStream::MediaInfo::offline(MediaInfo *this,char *param_1,char *param_2)

{
  (*(code *)PTR_offline_00044174)(this);
  return;
}



/* ===== XCam::BufferProxy::~BufferProxy @ 0001dcd8 size=12 ===== */

void __thiscall XCam::BufferProxy::~BufferProxy(BufferProxy *this)

{
  (*(code *)PTR__BufferProxy_00044178)(this);
  return;
}



/* ===== std::__atomic_base<unsigned_int>::operator-- @ 0001dce4 size=12 ===== */

void __thiscall std::__atomic_base<unsigned_int>::operator--(__atomic_base<unsigned_int> *this)

{
  (*(code *)PTR_operator___0004417c)(this);
  return;
}



/* ===== <EXTERNAL>::pthread_sigmask @ 0001dcf0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_sigmask(int __how,__sigset_t *__newmask,__sigset_t *__oldmask)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_sigmask_00044180)(__how);
  return iVar1;
}



/* ===== XCam::BufferPool::~BufferPool @ 0001dcfc size=12 ===== */

void __thiscall XCam::BufferPool::~BufferPool(BufferPool *this)

{
  (*(code *)PTR__BufferPool_00044184)(this);
  return;
}



/* ===== <EXTERNAL>::std::__detail::_List_node_base::_M_transfer @ 0001dd08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__detail::_List_node_base::_M_transfer(_List_node_base *param_1,_List_node_base *param_2)

{
  (*(code *)PTR__M_transfer_00044188)(param_1);
  return;
}



/* ===== media_get_entity_by_name @ 0001dd14 size=12 ===== */

void media_get_entity_by_name(void)

{
  (*(code *)PTR_media_get_entity_by_name_0004418c)();
  return;
}



/* ===== XCam::V4l2Device::prepare @ 0001dd20 size=12 ===== */

void XCam::V4l2Device::prepare(void)

{
  (*(code *)PTR_prepare_00044190)();
  return;
}



/* ===== XCam::SmartPtr<XCam::V4l2Buffer>::SmartPtr @ 0001dd2c size=12 ===== */

void __thiscall
XCam::SmartPtr<XCam::V4l2Buffer>::SmartPtr(SmartPtr<XCam::V4l2Buffer> *this,SmartPtr *param_1)

{
  (*(code *)PTR_SmartPtr_00044194)(this);
  return;
}



/* ===== <EXTERNAL>::snprintf @ 0001dd38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00044198)(__s);
  return iVar1;
}



/* ===== XCam::V4l2Device::set_buffer_count @ 0001dd50 size=12 ===== */

void __thiscall XCam::V4l2Device::set_buffer_count(V4l2Device *this,uint param_1)

{
  (*(code *)PTR_set_buffer_count_000441a0)(this);
  return;
}



/* ===== XCam::FakeV4l2Device::create_notify_pipe @ 0001dd5c size=12 ===== */

void __thiscall XCam::FakeV4l2Device::create_notify_pipe(FakeV4l2Device *this)

{
  (*(code *)PTR_create_notify_pipe_000441a4)(this);
  return;
}



/* ===== XCam::BufferProxy::BufferProxy @ 0001dd68 size=12 ===== */

void __thiscall
XCam::BufferProxy::BufferProxy(BufferProxy *this,VideoBufferInfo *param_1,SmartPtr *param_2)

{
  (*(code *)PTR_BufferProxy_000441a8)(this);
  return;
}



/* ===== XCam::PollThread::destroy_stop_fds @ 0001dd74 size=12 ===== */

void __thiscall XCam::PollThread::destroy_stop_fds(PollThread *this)

{
  (*(code *)PTR_destroy_stop_fds_000441ac)(this);
  return;
}



/* ===== <EXTERNAL>::read @ 0001dd80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_000441b0)(__fd);
  return sVar1;
}



/* ===== std::vector<rk_frame_fmt_s,std::allocator<rk_frame_fmt_s>>::operator= @ 0001dd8c size=12 ===== */

void __thiscall
std::vector<rk_frame_fmt_s,std::allocator<rk_frame_fmt_s>>::operator=
          (vector<rk_frame_fmt_s,std::allocator<rk_frame_fmt_s>> *this,vector *param_1)

{
  (*(code *)PTR_operator__000441b4)(this);
  return;
}



/* ===== XCam::V4l2SubDevice::~V4l2SubDevice @ 0001dd98 size=12 ===== */

void __thiscall XCam::V4l2SubDevice::~V4l2SubDevice(V4l2SubDevice *this)

{
  (*(code *)PTR__V4l2SubDevice_000441b8)(this);
  return;
}



/* ===== xcam_get_enviroment_value @ 0001dda4 size=12 ===== */

void xcam_get_enviroment_value(void)

{
  (*(code *)PTR_xcam_get_enviroment_value_000441bc)();
  return;
}



/* ===== XCam::SmartBufferPriv::~SmartBufferPriv @ 0001ddb0 size=12 ===== */

void __thiscall XCam::SmartBufferPriv::~SmartBufferPriv(SmartBufferPriv *this)

{
  (*(code *)PTR__SmartBufferPriv_000441c0)(this);
  return;
}



/* ===== XCam::SmartPtr<XCam::V4l2BufferProxy>::operator= @ 0001ddbc size=12 ===== */

void __thiscall
XCam::SmartPtr<XCam::V4l2BufferProxy>::operator=
          (SmartPtr<XCam::V4l2BufferProxy> *this,SmartPtr *param_1)

{
  (*(code *)PTR_operator__000441c4)(this);
  return;
}



/* ===== RkRawStream::RawStreamCapUnit::set_working_mode @ 0001ddc8 size=12 ===== */

void __thiscall RkRawStream::RawStreamCapUnit::set_working_mode(RawStreamCapUnit *this,int param_1)

{
  (*(code *)PTR_set_working_mode_000441c8)(this);
  return;
}



/* ===== XCam::Thread::Thread @ 0001ddd4 size=12 ===== */

void __thiscall XCam::Thread::Thread(Thread *this,char *param_1)

{
  (*(code *)PTR_Thread_000441cc)(this);
  return;
}



/* ===== XCam::SmartPtr<XCam::VideoBuffer>::release @ 0001dde0 size=12 ===== */

void __thiscall XCam::SmartPtr<XCam::VideoBuffer>::release(SmartPtr<XCam::VideoBuffer> *this)

{
  (*(code *)PTR_release_000441d0)(this);
  return;
}



/* ===== <EXTERNAL>::access @ 0001ddec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_000441d4)(__name);
  return iVar1;
}



/* ===== std::_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>::_M_get_insert_unique_pos @ 0001ddf8 size=12 ===== */

void std::
     _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
     ::_M_get_insert_unique_pos(string *param_1)

{
  (*(code *)PTR__M_get_insert_unique_pos_000441d8)(param_1);
  return;
}



/* ===== XCam::SmartBufferPriv::SmartBufferPriv @ 0001de04 size=12 ===== */

void __thiscall XCam::SmartBufferPriv::SmartBufferPriv(SmartBufferPriv *this,SmartPtr *param_1)

{
  (*(code *)PTR_SmartBufferPriv_000441dc)(this);
  return;
}



/* ===== <EXTERNAL>::stat64 @ 0001de10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat64_000441e0)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::std::__cxx11::string::compare @ 0001de1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::compare(string *param_1)

{
  (*(code *)PTR_compare_000441e4)(param_1);
  return;
}



/* ===== <EXTERNAL>::std::__cxx11::string::_S_copy_chars @ 0001de28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_S_copy_chars(char *param_1,char *param_2,char *param_3)

{
  (*(code *)PTR__S_copy_chars_000441e8)(param_1);
  return;
}



/* ===== <EXTERNAL>::std::__cxx11::string::substr @ 0001de34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::substr(uint param_1,uint param_2)

{
  (*(code *)PTR_substr_000441ec)(param_1);
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 0001de40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_000441f0)(__mutex);
  return iVar1;
}



/* ===== XCam::SafeList<XCam::V4l2BufferProxy>::front @ 0001de4c size=12 ===== */

void XCam::SafeList<XCam::V4l2BufferProxy>::front(void)

{
  (*(code *)PTR_front_000441f4)();
  return;
}



/* ===== RkRawStream::MediaInfo::initCamHwInfos @ 0001de58 size=12 ===== */

void __thiscall RkRawStream::MediaInfo::initCamHwInfos(MediaInfo *this)

{
  (*(code *)PTR_initCamHwInfos_000441f8)(this);
  return;
}



/* ===== <EXTERNAL>::strtoull @ 0001de64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong strtoull(char *__nptr,char **__endptr,int __base)

{
  ulonglong uVar1;
  
  uVar1 = (*(code *)PTR_strtoull_000441fc)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::std::__cxx11::string::_M_assign @ 0001de70 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_assign(string *param_1)

{
  (*(code *)PTR__M_assign_00044200)(param_1);
  return;
}



/* ===== media_device_new @ 0001de7c size=12 ===== */

void media_device_new(void)

{
  (*(code *)PTR_media_device_new_00044204)();
  return;
}



/* ===== <EXTERNAL>::memmove @ 0001de88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00044208)(__dest);
  return pvVar1;
}



/* ===== RkRawStream::RawStreamProcUnit::setup_pipeline_fmt @ 0001de94 size=12 ===== */

void __thiscall
RkRawStream::RawStreamProcUnit::setup_pipeline_fmt
          (RawStreamProcUnit *this,uint param_1,uint param_2)

{
  (*(code *)PTR_setup_pipeline_fmt_0004420c)(this);
  return;
}



/* ===== XCam::SafeList<RkRawStream::EmptyClass>::push @ 0001dea0 size=12 ===== */

void XCam::SafeList<RkRawStream::EmptyClass>::push(SmartPtr *param_1)

{
  (*(code *)PTR_push_00044210)(param_1);
  return;
}



/* ===== XCam::VideoBufferInfo::VideoBufferInfo @ 0001deac size=12 ===== */

void __thiscall XCam::VideoBufferInfo::VideoBufferInfo(VideoBufferInfo *this)

{
  (*(code *)PTR_VideoBufferInfo_00044214)(this);
  return;
}



/* ===== <EXTERNAL>::fclose @ 0001deb8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00044218)(__stream);
  return iVar1;
}



/* ===== std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,int>,std::_Select1st<std::pair<unsigned_int_const,int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>::_M_erase @ 0001dec4 size=12 ===== */

void __thiscall
std::
_Rb_tree<unsigned_int,std::pair<unsigned_int_const,int>,std::_Select1st<std::pair<unsigned_int_const,int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
::_M_erase(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,int>,std::_Select1st<std::pair<unsigned_int_const,int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
           *this,_Rb_tree_node *param_1)

{
  (*(code *)PTR__M_erase_0004421c)(this);
  return;
}



/* ===== <EXTERNAL>::fread @ 0001ded0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_00044220)(__ptr);
  return sVar1;
}



/* ===== RkRawStream::rkraw_append_buf @ 0001dedc size=12 ===== */

void RkRawStream::rkraw_append_buf(uchar *param_1,ushort param_2,SmartPtr *param_3)

{
  (*(code *)PTR_rkraw_append_buf_00044224)(param_1,param_2);
  return;
}



/* ===== std::vector<XCam::SmartPtr<XCam::V4l2Buffer>,std::allocator<XCam::SmartPtr<XCam::V4l2Buffer>>>::clear @ 0001dee8 size=12 ===== */

void __thiscall
std::vector<XCam::SmartPtr<XCam::V4l2Buffer>,std::allocator<XCam::SmartPtr<XCam::V4l2Buffer>>>::
clear(vector<XCam::SmartPtr<XCam::V4l2Buffer>,std::allocator<XCam::SmartPtr<XCam::V4l2Buffer>>>
      *this)

{
  (*(code *)PTR_clear_00044228)(this);
  return;
}



/* ===== XCam::SmartPtr<RkRawStream::RkPollThread>::release @ 0001def4 size=12 ===== */

void __thiscall
XCam::SmartPtr<RkRawStream::RkPollThread>::release(SmartPtr<RkRawStream::RkPollThread> *this)

{
  (*(code *)PTR_release_0004422c)(this);
  return;
}



/* ===== <EXTERNAL>::std::__cxx11::string::at @ 0001df00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::at(uint param_1)

{
  (*(code *)PTR_at_00044230)(param_1);
  return;
}



/* ===== std::map<std::__cxx11::string,XCam::SmartPtr<rk_aiq_static_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>::operator[] @ 0001df0c size=12 ===== */

void __thiscall
std::
map<std::__cxx11::string,XCam::SmartPtr<rk_aiq_static_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
::operator[](map<std::__cxx11::string,XCam::SmartPtr<rk_aiq_static_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
             *this,string *param_1)

{
  (*(code *)PTR_operator___00044234)(this);
  return;
}



/* ===== XCam::Thread::~Thread @ 0001df18 size=12 ===== */

void __thiscall XCam::Thread::~Thread(Thread *this)

{
  (*(code *)PTR__Thread_00044238)(this);
  return;
}



/* ===== XCam::V4l2Device::set_format @ 0001df24 size=12 ===== */

void __thiscall XCam::V4l2Device::set_format(V4l2Device *this,v4l2_format *param_1)

{
  (*(code *)PTR_set_format_0004423c)(this);
  return;
}



/* ===== XCam::V4l2Device::set_buf_sync @ 0001df30 size=12 ===== */

void __thiscall XCam::V4l2Device::set_buf_sync(V4l2Device *this,bool param_1)

{
  (*(code *)PTR_set_buf_sync_00044240)(this,param_1);
  return;
}



/* ===== XCam::SafeList<XCam::V4l2BufferProxy>::SafeList @ 0001df3c size=12 ===== */

void __thiscall
XCam::SafeList<XCam::V4l2BufferProxy>::SafeList(SafeList<XCam::V4l2BufferProxy> *this)

{
  (*(code *)PTR_SafeList_00044244)(this);
  return;
}



/* ===== XCam::VideoBuffer::clear_attached_buffers @ 0001df48 size=12 ===== */

void __thiscall XCam::VideoBuffer::clear_attached_buffers(VideoBuffer *this)

{
  (*(code *)PTR_clear_attached_buffers_00044248)(this);
  return;
}



/* ===== <EXTERNAL>::pthread_attr_destroy @ 0001df54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_attr_destroy(pthread_attr_t *__attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_attr_destroy_0004424c)(__attr);
  return iVar1;
}



/* ===== RkRawStream::pixFmt2Bpp @ 0001df60 size=12 ===== */

void RkRawStream::pixFmt2Bpp(uint param_1)

{
  (*(code *)PTR_pixFmt2Bpp_00044250)(param_1);
  return;
}



/* ===== <EXTERNAL>::std::_Rb_tree_increment @ 0001df6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_increment(_Rb_tree_node_base *param_1)

{
  (*(code *)PTR__Rb_tree_increment_00044254)(param_1);
  return;
}



/* ===== media_parse_setup_link @ 0001df78 size=12 ===== */

void media_parse_setup_link(void)

{
  (*(code *)PTR_media_parse_setup_link_00044258)();
  return;
}



/* ===== XCam::SafeList<XCam::V4l2BufferProxy>::clear @ 0001df84 size=12 ===== */

void __thiscall XCam::SafeList<XCam::V4l2BufferProxy>::clear(SafeList<XCam::V4l2BufferProxy> *this)

{
  (*(code *)PTR_clear_0004425c)(this);
  return;
}



/* ===== <EXTERNAL>::pthread_create @ 0001df90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00044260)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::write @ 0001df9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_00044264)(__fd);
  return sVar1;
}



/* ===== XCam::SmartPtr<XCam::Thread>::release @ 0001dfa8 size=12 ===== */

void __thiscall XCam::SmartPtr<XCam::Thread>::release(SmartPtr<XCam::Thread> *this)

{
  (*(code *)PTR_release_00044268)(this);
  return;
}



/* ===== XCam::SafeList<XCam::V4l2BufferProxy>::push @ 0001dfb4 size=12 ===== */

void XCam::SafeList<XCam::V4l2BufferProxy>::push(SmartPtr *param_1)

{
  (*(code *)PTR_push_0004426c)(param_1);
  return;
}



/* ===== media_debug_set_handler @ 0001dfc0 size=12 ===== */

void media_debug_set_handler(void)

{
  (*(code *)PTR_media_debug_set_handler_00044270)();
  return;
}



/* ===== RkRawStream::RawStreamProcUnit::_send_sync_buf @ 0001dfcc size=12 ===== */

void __thiscall
RkRawStream::RawStreamProcUnit::_send_sync_buf
          (RawStreamProcUnit *this,rkrawstream_rkraw2_t *param_1)

{
  (*(code *)PTR__send_sync_buf_00044274)(this);
  return;
}



/* ===== <EXTERNAL>::std::__cxx11::string::find @ 0001dfe4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::find(char param_1,uint param_2)

{
  (*(code *)PTR_find_0004427c)((int)param_1);
  return;
}



/* ===== <EXTERNAL>::pthread_cond_signal @ 0001dff0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_signal(pthread_cond_t *__cond)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_signal_00044280)(__cond);
  return iVar1;
}



/* ===== <EXTERNAL>::localtime @ 0001dffc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_localtime_00044284)(__timer);
  return ptVar1;
}



/* ===== <EXTERNAL>::close @ 0001e008 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00044288)(__fd);
  return iVar1;
}



/* ===== RkRawStream::RawProcThread::~RawProcThread @ 0001e014 size=12 ===== */

void __thiscall RkRawStream::RawProcThread::~RawProcThread(RawProcThread *this)

{
  (*(code *)PTR__RawProcThread_0004428c)(this);
  return;
}



/* ===== XCam::SmartPtr<XCam::V4l2Device>::operator= @ 0001e020 size=12 ===== */

void __thiscall
XCam::SmartPtr<XCam::V4l2Device>::operator=(SmartPtr<XCam::V4l2Device> *this,SmartPtr *param_1)

{
  (*(code *)PTR_operator__00044290)(this);
  return;
}



/* ===== XCam::Mutex::~Mutex @ 0001e02c size=12 ===== */

void __thiscall XCam::Mutex::~Mutex(Mutex *this)

{
  (*(code *)PTR__Mutex_00044294)(this);
  return;
}



/* ===== <EXTERNAL>::__dynamic_cast @ 0001e038 size=12 ===== */

void __dynamic_cast(void)

{
  (*(code *)PTR___dynamic_cast_00044298)();
  return;
}



/* ===== std::__cxx11::list<XCam::SmartPtr<XCam::V4l2BufferProxy>,std::allocator<XCam::SmartPtr<XCam::V4l2BufferProxy>>>::erase @ 0001e044 size=12 ===== */

void __thiscall
std::__cxx11::
list<XCam::SmartPtr<XCam::V4l2BufferProxy>,std::allocator<XCam::SmartPtr<XCam::V4l2BufferProxy>>>::
erase(void)

{
  (*(code *)PTR_erase_0004429c)();
  return;
}



/* ===== XCam::V4l2Device::init_buffer_pool @ 0001e050 size=12 ===== */

void __thiscall XCam::V4l2Device::init_buffer_pool(V4l2Device *this)

{
  (*(code *)PTR_init_buffer_pool_000442a0)(this);
  return;
}



/* ===== XCam::FakeV4l2Device::destroy_notify_pipe @ 0001e05c size=12 ===== */

void __thiscall XCam::FakeV4l2Device::destroy_notify_pipe(FakeV4l2Device *this)

{
  (*(code *)PTR_destroy_notify_pipe_000442a4)(this);
  return;
}



/* ===== XCam::SafeList<RkRawStream::EmptyClass>::~SafeList @ 0001e068 size=12 ===== */

void __thiscall
XCam::SafeList<RkRawStream::EmptyClass>::~SafeList(SafeList<RkRawStream::EmptyClass> *this)

{
  (*(code *)PTR__SafeList_000442a8)(this);
  return;
}



/* ===== <EXTERNAL>::__aeabi_uidiv @ 0001e074 size=12 ===== */

void __aeabi_uidiv(void)

{
  (*(code *)PTR___aeabi_uidiv_000442ac)();
  return;
}



/* ===== XCam::SmartPtr<rk_aiq_static_info_t>::release @ 0001e080 size=12 ===== */

void __thiscall XCam::SmartPtr<rk_aiq_static_info_t>::release(SmartPtr<rk_aiq_static_info_t> *this)

{
  (*(code *)PTR_release_000442b0)(this);
  return;
}



/* ===== RkRawStream::RkPollThread::RkPollThread @ 0001e08c size=12 ===== */

void __thiscall RkRawStream::RkPollThread::RkPollThread(void)

{
  (*(code *)PTR_RkPollThread_000442b4)();
  return;
}



/* ===== std::__cxx11::_List_base<XCam::SmartPtr<XCam::VideoBuffer>,std::allocator<XCam::SmartPtr<XCam::VideoBuffer>>>::_M_clear @ 0001e098 size=12 ===== */

void __thiscall
std::__cxx11::
_List_base<XCam::SmartPtr<XCam::VideoBuffer>,std::allocator<XCam::SmartPtr<XCam::VideoBuffer>>>::
_M_clear(_List_base<XCam::SmartPtr<XCam::VideoBuffer>,std::allocator<XCam::SmartPtr<XCam::VideoBuffer>>>
         *this)

{
  (*(code *)PTR__M_clear_000442b8)(this);
  return;
}



/* ===== RkRawStream::RKRawStream::RKRawStream @ 0001e0a4 size=12 ===== */

void __thiscall RkRawStream::RKRawStream::RKRawStream(void)

{
  (*(code *)PTR_RKRawStream_000442bc)();
  return;
}



/* ===== <EXTERNAL>::pthread_self @ 0001e0b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

pthread_t pthread_self(void)

{
  pthread_t pVar1;
  
  pVar1 = (*(code *)PTR_pthread_self_000442c0)();
  return pVar1;
}



/* ===== RkRawStream::RkPollThread::~RkPollThread @ 0001e0bc size=12 ===== */

void __thiscall RkRawStream::RkPollThread::~RkPollThread(RkPollThread *this)

{
  (*(code *)PTR__RkPollThread_000442c4)(this);
  return;
}



/* ===== <EXTERNAL>::std::__detail::_List_node_base::_M_hook @ 0001e0c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__detail::_List_node_base::_M_hook(_List_node_base *param_1)

{
  (*(code *)PTR__M_hook_000442c8)(param_1);
  return;
}



/* ===== <EXTERNAL>::strncpy @ 0001e0d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_000442cc)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::strndup @ 0001e0e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strndup(char *__string,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strndup_000442d0)(__string);
  return pcVar1;
}



/* ===== <EXTERNAL>::mmap64 @ 0001e0ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap64(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off64_t __offset)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_mmap64_000442d4)(__addr);
  return pvVar1;
}



/* ===== XCam::SafeList<XCam::V4l2BufferProxy>::erase @ 0001e0f8 size=12 ===== */

void XCam::SafeList<XCam::V4l2BufferProxy>::erase(SmartPtr *param_1)

{
  (*(code *)PTR_erase_000442d8)(param_1);
  return;
}



/* ===== media_entity_get_devname @ 0001e104 size=12 ===== */

void media_entity_get_devname(void)

{
  (*(code *)PTR_media_entity_get_devname_000442dc)();
  return;
}



/* ===== RkRawStream::RKStream::RKStream @ 0001e110 size=12 ===== */

void __thiscall RkRawStream::RKStream::RKStream(void)

{
  (*(code *)PTR_RKStream_000442e0)();
  return;
}



/* ===== <EXTERNAL>::sigaddset @ 0001e11c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaddset(sigset_t *__set,int __signo)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigaddset_000442e4)(__set);
  return iVar1;
}



/* ===== <EXTERNAL>::operator.new @ 0001e128 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_000442e8)(param_1);
  return pvVar1;
}



/* ===== <EXTERNAL>::pthread_cond_init @ 0001e134 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_init(pthread_cond_t *__cond,pthread_condattr_t *__cond_attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_init_000442ec)(__cond);
  return iVar1;
}



/* ===== XCam::V4l2BufferProxy::~V4l2BufferProxy @ 0001e140 size=12 ===== */

void __thiscall XCam::V4l2BufferProxy::~V4l2BufferProxy(V4l2BufferProxy *this)

{
  (*(code *)PTR__V4l2BufferProxy_000442f0)(this);
  return;
}



/* ===== <EXTERNAL>::pthread_attr_setschedpolicy @ 0001e14c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_attr_setschedpolicy(pthread_attr_t *__attr,int __policy)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_attr_setschedpolicy_000442f4)(__attr);
  return iVar1;
}



/* ===== XCam::SmartPtr<RkRawStream::EmptyClass>::release @ 0001e158 size=12 ===== */

void __thiscall
XCam::SmartPtr<RkRawStream::EmptyClass>::release(SmartPtr<RkRawStream::EmptyClass> *this)

{
  (*(code *)PTR_release_000442f8)(this);
  return;
}



/* ===== XCam::FakeV4l2Device::get_available_buffer_index @ 0001e164 size=12 ===== */

void XCam::FakeV4l2Device::get_available_buffer_index(void)

{
  (*(code *)PTR_get_available_buffer_index_000442fc)();
  return;
}



/* ===== std::__cxx11::_List_base<rk_aiq_vbuf_info,std::allocator<rk_aiq_vbuf_info>>::_M_clear @ 0001e170 size=12 ===== */

void __thiscall
std::__cxx11::_List_base<rk_aiq_vbuf_info,std::allocator<rk_aiq_vbuf_info>>::_M_clear
          (_List_base<rk_aiq_vbuf_info,std::allocator<rk_aiq_vbuf_info>> *this)

{
  (*(code *)PTR__M_clear_00044300)(this);
  return;
}



/* ===== std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<rk_frame_fmt_s> @ 0001e17c size=12 ===== */

rk_frame_fmt_s *
std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<rk_frame_fmt_s>
          (rk_frame_fmt_s *param_1,rk_frame_fmt_s *param_2,rk_frame_fmt_s *param_3)

{
  rk_frame_fmt_s *prVar1;
  
  prVar1 = (rk_frame_fmt_s *)(*(code *)PTR___copy_m<rk_frame_fmt_s>_00044304)(param_1);
  return prVar1;
}



/* ===== XCam::V4l2Device::set_format @ 0001e188 size=12 ===== */

void __thiscall XCam::V4l2Device::set_format(void)

{
  (*(code *)PTR_set_format_00044308)();
  return;
}



/* ===== RkRawStream::RawStreamProcUnit::RawStreamProcUnit @ 0001e194 size=12 ===== */

void __thiscall
RkRawStream::RawStreamProcUnit::RawStreamProcUnit
          (RawStreamProcUnit *this,rk_sensor_full_info_t *param_1,uchar param_2)

{
  (*(code *)PTR_RawStreamProcUnit_0004430c)(this,param_1,param_2);
  return;
}



/* ===== RkRawStream::RkPollThread::create_stop_fds @ 0001e1a0 size=12 ===== */

void __thiscall RkRawStream::RkPollThread::create_stop_fds(RkPollThread *this)

{
  (*(code *)PTR_create_stop_fds_00044310)(this);
  return;
}



/* ===== <EXTERNAL>::memset @ 0001e1ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00044314)(__s);
  return pvVar1;
}



/* ===== XCam::V4l2Device::close @ 0001e1b8 size=12 ===== */

void __thiscall XCam::V4l2Device::close(V4l2Device *this)

{
  (*(code *)PTR_close_00044318)(this);
  return;
}



/* ===== RkRawStream::RawStreamCapUnit::prepare @ 0001e1c4 size=12 ===== */

void __thiscall
RkRawStream::RawStreamCapUnit::prepare
          (RawStreamCapUnit *this,int param_1,uchar param_2,uchar param_3)

{
  (*(code *)PTR_prepare_0004431c)(this,param_1,param_2,param_3);
  return;
}



/* ===== XCam::V4l2Device::~V4l2Device @ 0001e1d0 size=12 ===== */

void __thiscall XCam::V4l2Device::~V4l2Device(V4l2Device *this)

{
  (*(code *)PTR__V4l2Device_00044320)(this);
  return;
}



/* ===== <EXTERNAL>::std::_Rb_tree_insert_and_rebalance @ 0001e1dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_insert_and_rebalance
               (bool param_1,_Rb_tree_node_base *param_2,_Rb_tree_node_base *param_3,
               _Rb_tree_node_base *param_4)

{
  (*(code *)PTR__Rb_tree_insert_and_rebalance_00044324)(param_1);
  return;
}



/* ===== std::operator< @ 0001e1e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool std::operator<(string *param_1,string *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (*(code *)PTR_operator<_00044328)(param_1);
  return (bool)uVar1;
}



/* ===== std::__atomic_base<unsigned_int>::operator++ @ 0001e1f4 size=12 ===== */

void __thiscall std::__atomic_base<unsigned_int>::operator++(__atomic_base<unsigned_int> *this)

{
  (*(code *)PTR_operator___0004432c)(this);
  return;
}



/* ===== media_get_entities_count @ 0001e200 size=12 ===== */

void media_get_entities_count(void)

{
  (*(code *)PTR_media_get_entities_count_00044330)();
  return;
}



/* ===== XCam::SmartPtr<XCam::V4l2BufferProxy>::release @ 0001e20c size=12 ===== */

void __thiscall
XCam::SmartPtr<XCam::V4l2BufferProxy>::release(SmartPtr<XCam::V4l2BufferProxy> *this)

{
  (*(code *)PTR_release_00044334)(this);
  return;
}



/* ===== RkRawStream::RawStreamProcUnit::trigger_isp_readback @ 0001e218 size=12 ===== */

void __thiscall RkRawStream::RawStreamProcUnit::trigger_isp_readback(RawStreamProcUnit *this)

{
  (*(code *)PTR_trigger_isp_readback_00044338)(this);
  return;
}



/* ===== std::vector<rk_frame_fmt_s,std::allocator<rk_frame_fmt_s>>::_M_realloc_insert<rk_frame_fmt_s_const&> @ 0001e224 size=12 ===== */

void __thiscall
std::vector<rk_frame_fmt_s,std::allocator<rk_frame_fmt_s>>::_M_realloc_insert<rk_frame_fmt_s_const&>
          (void)

{
  (*(code *)PTR__M_realloc_insert<rk_frame_fmt_s_const&>_0004433c)();
  return;
}



/* ===== XCam::SmartPtr<XCam::BufferPool>::release @ 0001e230 size=12 ===== */

void __thiscall XCam::SmartPtr<XCam::BufferPool>::release(SmartPtr<XCam::BufferPool> *this)

{
  (*(code *)PTR_release_00044340)(this);
  return;
}



/* ===== media_device_enumerate @ 0001e23c size=12 ===== */

void media_device_enumerate(void)

{
  (*(code *)PTR_media_device_enumerate_00044344)();
  return;
}



/* ===== <EXTERNAL>::munmap @ 0001e248 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_munmap_00044348)(__addr);
  return iVar1;
}



/* ===== XCam::SafeList<RkRawStream::SimpleFdBuf>::~SafeList @ 0001e254 size=12 ===== */

void __thiscall
XCam::SafeList<RkRawStream::SimpleFdBuf>::~SafeList(SafeList<RkRawStream::SimpleFdBuf> *this)

{
  (*(code *)PTR__SafeList_0004434c)(this);
  return;
}



/* ===== XCam::SmartPtr<RkRawStream::SimpleFdBuf>::operator= @ 0001e260 size=12 ===== */

void __thiscall
XCam::SmartPtr<RkRawStream::SimpleFdBuf>::operator=
          (SmartPtr<RkRawStream::SimpleFdBuf> *this,SimpleFdBuf *param_1)

{
  (*(code *)PTR_operator__00044350)(this);
  return;
}



/* ===== XCam::SmartPtr<XCam::V4l2Device>::release @ 0001e26c size=12 ===== */

void __thiscall XCam::SmartPtr<XCam::V4l2Device>::release(SmartPtr<XCam::V4l2Device> *this)

{
  (*(code *)PTR_release_00044354)(this);
  return;
}



/* ===== <EXTERNAL>::std::_Rb_tree_rebalance_for_erase @ 0001e278 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_rebalance_for_erase(_Rb_tree_node_base *param_1,_Rb_tree_node_base *param_2)

{
  (*(code *)PTR__Rb_tree_rebalance_for_erase_00044358)(param_1);
  return;
}



/* ===== XCam::V4l2Device::return_buffer @ 0001e284 size=12 ===== */

void XCam::V4l2Device::return_buffer(SmartPtr *param_1)

{
  (*(code *)PTR_return_buffer_0004435c)(param_1);
  return;
}



/* ===== XCam::V4l2BufferProxy::V4l2BufferProxy @ 0001e290 size=12 ===== */

void __thiscall
XCam::V4l2BufferProxy::V4l2BufferProxy(V4l2BufferProxy *this,SmartPtr *param_1,SmartPtr *param_2)

{
  (*(code *)PTR_V4l2BufferProxy_00044360)(this);
  return;
}



/* ===== RkRawStream::RKRawStream::~RKRawStream @ 0001e29c size=12 ===== */

void __thiscall RkRawStream::RKRawStream::~RKRawStream(RKRawStream *this)

{
  (*(code *)PTR__RKRawStream_00044364)(this);
  return;
}



/* ===== RkRawStream::MediaInfo::~MediaInfo @ 0001e2a8 size=12 ===== */

void __thiscall RkRawStream::MediaInfo::~MediaInfo(MediaInfo *this)

{
  (*(code *)PTR__MediaInfo_00044368)(this);
  return;
}



/* ===== XCam::VideoBuffer::clear_all_metadata @ 0001e2b4 size=12 ===== */

void __thiscall XCam::VideoBuffer::clear_all_metadata(VideoBuffer *this)

{
  (*(code *)PTR_clear_all_metadata_0004436c)(this);
  return;
}



/* ===== std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,bool>,std::_Select1st<std::pair<unsigned_int_const,bool>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,bool>>>::_M_get_insert_unique_pos @ 0001e2c0 size=12 ===== */

void std::
     _Rb_tree<unsigned_int,std::pair<unsigned_int_const,bool>,std::_Select1st<std::pair<unsigned_int_const,bool>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,bool>>>
     ::_M_get_insert_unique_pos(uint *param_1)

{
  (*(code *)PTR__M_get_insert_unique_pos_00044370)(param_1);
  return;
}



/* ===== RkRawStream::RkPollThread::stop @ 0001e2cc size=12 ===== */

void RkRawStream::RkPollThread::stop(void)

{
  (*(code *)PTR_stop_00044374)();
  return;
}



/* ===== RkRawStream::RawStreamProcUnit::set_working_mode @ 0001e2d8 size=12 ===== */

void __thiscall
RkRawStream::RawStreamProcUnit::set_working_mode(RawStreamProcUnit *this,int param_1)

{
  (*(code *)PTR_set_working_mode_00044378)(this);
  return;
}



/* ===== <EXTERNAL>::vsnprintf @ 0001e2e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsnprintf_0004437c)(__s);
  return iVar1;
}



/* ===== XCam::BufferPool::release @ 0001e2f0 size=12 ===== */

void XCam::BufferPool::release(SmartPtr *param_1)

{
  (*(code *)PTR_release_00044380)(param_1);
  return;
}



/* ===== <EXTERNAL>::sigemptyset @ 0001e2fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigemptyset(sigset_t *__set)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigemptyset_00044384)(__set);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 0001e308 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_00044388)(__s);
  return iVar1;
}



/* ===== XCam::V4l2Device::open @ 0001e314 size=12 ===== */

void __thiscall XCam::V4l2Device::open(V4l2Device *this,bool param_1)

{
  (*(code *)PTR_open_0004438c)(this,param_1);
  return;
}



/* ===== <EXTERNAL>::std::__cxx11::string::_M_dispose @ 0001e320 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_dispose(void)

{
  (*(code *)PTR__M_dispose_00044390)();
  return;
}



/* ===== XCam::BufferPool::update_video_info_unsafe @ 0001e32c size=12 ===== */

void __thiscall
XCam::BufferPool::update_video_info_unsafe(BufferPool *this,VideoBufferInfo *param_1)

{
  (*(code *)PTR_update_video_info_unsafe_00044394)(this);
  return;
}



/* ===== <EXTERNAL>::std::__throw_logic_error @ 0001e344 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_logic_error(char *param_1)

{
  (*(code *)PTR___throw_logic_error_0004439c)(param_1);
  return;
}



/* ===== XCam::V4l2Buffer::reset @ 0001e350 size=12 ===== */

void __thiscall XCam::V4l2Buffer::reset(V4l2Buffer *this)

{
  (*(code *)PTR_reset_000443a0)(this);
  return;
}



/* ===== std::_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>::_M_erase @ 0001e35c size=12 ===== */

void __thiscall
std::
_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
::_M_erase(_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
           *this,_Rb_tree_node *param_1)

{
  (*(code *)PTR__M_erase_000443a4)(this);
  return;
}



/* ===== XCam::SmartPtr<RkRawStream::SimpleFdBuf>::SmartPtr @ 0001e368 size=12 ===== */

void __thiscall
XCam::SmartPtr<RkRawStream::SimpleFdBuf>::SmartPtr
          (SmartPtr<RkRawStream::SimpleFdBuf> *this,SmartPtr *param_1)

{
  (*(code *)PTR_SmartPtr_000443a8)(this);
  return;
}



/* ===== XCam::SmartPtr<rk_sensor_full_info_t>::operator= @ 0001e374 size=12 ===== */

void __thiscall
XCam::SmartPtr<rk_sensor_full_info_t>::operator=
          (SmartPtr<rk_sensor_full_info_t> *this,rk_sensor_full_info_t *param_1)

{
  (*(code *)PTR_operator__000443ac)(this);
  return;
}



/* ===== std::map<std::__cxx11::string,XCam::SmartPtr<rk_sensor_full_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>::operator[] @ 0001e380 size=12 ===== */

void __thiscall
std::
map<std::__cxx11::string,XCam::SmartPtr<rk_sensor_full_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
::operator[](map<std::__cxx11::string,XCam::SmartPtr<rk_sensor_full_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
             *this,string *param_1)

{
  (*(code *)PTR_operator___000443b0)(this);
  return;
}



/* ===== XCam::FakeV4l2Device::~FakeV4l2Device @ 0001e38c size=12 ===== */

void __thiscall XCam::FakeV4l2Device::~FakeV4l2Device(FakeV4l2Device *this)

{
  (*(code *)PTR__FakeV4l2Device_000443b4)(this);
  return;
}



/* ===== <EXTERNAL>::fseek @ 0001e398 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_000443b8)(__stream);
  return iVar1;
}



/* ===== RkRawStream::MediaInfo::MediaInfo @ 0001e3a4 size=12 ===== */

void __thiscall RkRawStream::MediaInfo::MediaInfo(MediaInfo *this)

{
  (*(code *)PTR_MediaInfo_000443bc)(this);
  return;
}



/* ===== <EXTERNAL>::operator.delete @ 0001e3b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1,uint param_2)

{
  (*(code *)PTR_operator_delete_000443c0)(param_1);
  return;
}



/* ===== RkRawStream::RawStreamCapUnit::do_capture_callback @ 0001e3c8 size=12 ===== */

void __thiscall
RkRawStream::RawStreamCapUnit::do_capture_callback
          (RawStreamCapUnit *this,SmartPtr *param_1,SmartPtr *param_2,SmartPtr *param_3)

{
  (*(code *)PTR_do_capture_callback_000443c8)(this);
  return;
}



/* ===== rk_sensor_full_info_t::~rk_sensor_full_info_t @ 0001e3d4 size=12 ===== */

void __thiscall rk_sensor_full_info_t::~rk_sensor_full_info_t(rk_sensor_full_info_t *this)

{
  (*(code *)PTR__rk_sensor_full_info_t_000443cc)(this);
  return;
}



/* ===== <EXTERNAL>::pthread_setname_np @ 0001e3e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_setname_np(pthread_t __target_thread,char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_setname_np_000443d0)(__target_thread);
  return iVar1;
}



/* ===== std::_Rb_tree<int,std::pair<int_const,unsigned_long_long>,std::_Select1st<std::pair<int_const,unsigned_long_long>>,std::less<int>,std::allocator<std::pair<int_const,unsigned_long_long>>>::_M_erase @ 0001e3ec size=12 ===== */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,unsigned_long_long>,std::_Select1st<std::pair<int_const,unsigned_long_long>>,std::less<int>,std::allocator<std::pair<int_const,unsigned_long_long>>>
::_M_erase(_Rb_tree<int,std::pair<int_const,unsigned_long_long>,std::_Select1st<std::pair<int_const,unsigned_long_long>>,std::less<int>,std::allocator<std::pair<int_const,unsigned_long_long>>>
           *this,_Rb_tree_node *param_1)

{
  (*(code *)PTR__M_erase_000443d4)(this);
  return;
}



/* ===== XCam::V4l2Device::set_mem_type @ 0001e404 size=12 ===== */

void __thiscall XCam::V4l2Device::set_mem_type(void)

{
  (*(code *)PTR_set_mem_type_000443dc)();
  return;
}



/* ===== XCam::BufferProxy::BufferProxy @ 0001e410 size=12 ===== */

void __thiscall XCam::BufferProxy::BufferProxy(BufferProxy *this,SmartPtr *param_1)

{
  (*(code *)PTR_BufferProxy_000443e0)(this);
  return;
}



/* ===== XCam::V4l2Buffer::~V4l2Buffer @ 0001e41c size=12 ===== */

void __thiscall XCam::V4l2Buffer::~V4l2Buffer(V4l2Buffer *this)

{
  (*(code *)PTR__V4l2Buffer_000443e4)(this);
  return;
}



/* ===== XCam::SmartPtr<XCam::V4l2SubDevice>::release @ 0001e428 size=12 ===== */

void __thiscall XCam::SmartPtr<XCam::V4l2SubDevice>::release(SmartPtr<XCam::V4l2SubDevice> *this)

{
  (*(code *)PTR_release_000443e8)(this);
  return;
}



/* ===== media_setup_link @ 0001e434 size=12 ===== */

void media_setup_link(void)

{
  (*(code *)PTR_media_setup_link_000443ec)();
  return;
}



/* ===== <EXTERNAL>::std::__cxx11::string::_S_copy_chars @ 0001e440 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_S_copy_chars(char *param_1,char *param_2,char *param_3)

{
  (*(code *)PTR__S_copy_chars_000443f0)(param_1);
  return;
}



/* ===== RkRawStream::RKStream::~RKStream @ 0001e44c size=12 ===== */

void __thiscall RkRawStream::RKStream::~RKStream(RKStream *this)

{
  (*(code *)PTR__RKStream_000443f4)(this);
  return;
}



/* ===== <EXTERNAL>::std::__cxx11::string::_M_create @ 0001e458 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_create(uint *param_1,uint param_2)

{
  (*(code *)PTR__M_create_000443f8)(param_1);
  return;
}



/* ===== <EXTERNAL>::pthread_cond_broadcast @ 0001e464 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_broadcast(pthread_cond_t *__cond)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_broadcast_000443fc)(__cond);
  return iVar1;
}



/* ===== RkRawStream::RawStreamCapUnit::RawStreamCapUnit @ 0001e470 size=12 ===== */

void __thiscall
RkRawStream::RawStreamCapUnit::RawStreamCapUnit
          (RawStreamCapUnit *this,char *param_1,char *param_2,char *param_3)

{
  (*(code *)PTR_RawStreamCapUnit_00044400)(this);
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 0001e47c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_00044404)(__mutex);
  return iVar1;
}



/* ===== xcam_malloc0 @ 0001e488 size=12 ===== */

void xcam_malloc0(void)

{
  (*(code *)PTR_xcam_malloc0_00044408)();
  return;
}



/* ===== <EXTERNAL>::std::_Rb_tree_increment @ 0001e494 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_increment(_Rb_tree_node_base *param_1)

{
  (*(code *)PTR__Rb_tree_increment_0004440c)(param_1);
  return;
}



/* ===== XCam::V4l2Device::V4l2Device @ 0001e4a0 size=12 ===== */

void __thiscall XCam::V4l2Device::V4l2Device(V4l2Device *this,char *param_1)

{
  (*(code *)PTR_V4l2Device_00044410)(this);
  return;
}



/* ===== <EXTERNAL>::__cxa_end_catch @ 0001e4ac size=12 ===== */

void __cxa_end_catch(void)

{
  (*(code *)PTR___cxa_end_catch_00044414)();
  return;
}



/* ===== <EXTERNAL>::std::__throw_bad_alloc @ 0001e4b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_alloc(void)

{
  (*(code *)PTR___throw_bad_alloc_00044418)();
  return;
}



/* ===== <EXTERNAL>::pthread_cond_destroy @ 0001e4c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_destroy(pthread_cond_t *__cond)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_destroy_0004441c)(__cond);
  return iVar1;
}



/* ===== RkRawStream::RkPollThread::poll_buffer_loop @ 0001e4d0 size=12 ===== */

void __thiscall RkRawStream::RkPollThread::poll_buffer_loop(RkPollThread *this)

{
  (*(code *)PTR_poll_buffer_loop_00044420)(this);
  return;
}



/* ===== <EXTERNAL>::strstr @ 0001e4dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_00044424)(__haystack);
  return pcVar1;
}



/* ===== XCam::V4l2BufferProxy::get_v4l2_buf @ 0001e4e8 size=12 ===== */

void XCam::V4l2BufferProxy::get_v4l2_buf(void)

{
  (*(code *)PTR_get_v4l2_buf_00044428)();
  return;
}



/* ===== <EXTERNAL>::open64 @ 0001e4f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open64_0004442c)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::strcmp @ 0001e500 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00044430)(__s1);
  return iVar1;
}



/* ===== std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,bool>,std::_Select1st<std::pair<unsigned_int_const,bool>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,bool>>>::_M_erase @ 0001e50c size=12 ===== */

void __thiscall
std::
_Rb_tree<unsigned_int,std::pair<unsigned_int_const,bool>,std::_Select1st<std::pair<unsigned_int_const,bool>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,bool>>>
::_M_erase(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,bool>,std::_Select1st<std::pair<unsigned_int_const,bool>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,bool>>>
           *this,_Rb_tree_node *param_1)

{
  (*(code *)PTR__M_erase_00044434)(this);
  return;
}



/* ===== xcam_video_buffer_info_reset @ 0001e518 size=12 ===== */

void xcam_video_buffer_info_reset(void)

{
  (*(code *)PTR_xcam_video_buffer_info_reset_00044438)();
  return;
}



/* ===== XCam::V4l2SubDevice::V4l2SubDevice @ 0001e524 size=12 ===== */

void __thiscall XCam::V4l2SubDevice::V4l2SubDevice(V4l2SubDevice *this,char *param_1)

{
  (*(code *)PTR_V4l2SubDevice_0004443c)(this);
  return;
}



/* ===== XCam::SafeList<RkRawStream::SimpleFdBuf>::push @ 0001e530 size=12 ===== */

void XCam::SafeList<RkRawStream::SimpleFdBuf>::push(SmartPtr *param_1)

{
  (*(code *)PTR_push_00044440)(param_1);
  return;
}



/* ===== XCam::VideoBuffer::~VideoBuffer @ 0001e53c size=12 ===== */

void __thiscall XCam::VideoBuffer::~VideoBuffer(VideoBuffer *this)

{
  (*(code *)PTR__VideoBuffer_00044444)(this);
  return;
}



/* ===== RkRawStream::RawStreamCapUnit::RawStreamCapUnit @ 0001e548 size=12 ===== */

void __thiscall
RkRawStream::RawStreamCapUnit::RawStreamCapUnit
          (RawStreamCapUnit *this,rk_sensor_full_info_t *param_1)

{
  (*(code *)PTR_RawStreamCapUnit_00044448)(this);
  return;
}



/* ===== <EXTERNAL>::__cxa_begin_catch @ 0001e554 size=12 ===== */

void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_0004444c)();
  return;
}



/* ===== std::_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>::_M_erase @ 0001e560 size=12 ===== */

void __thiscall
std::
_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
::_M_erase(_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
           *this,_Rb_tree_node *param_1)

{
  (*(code *)PTR__M_erase_00044450)(this);
  return;
}



/* ===== <EXTERNAL>::free @ 0001e56c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00044454)(__ptr);
  return;
}



/* ===== <EXTERNAL>::std::__cxx11::string::string @ 0001e578 size=12 ===== */

void __thiscall std::__cxx11::string::string(string *this,string *param_1)

{
  (*(code *)PTR_string_00044458)(this);
  return;
}



/* ===== <EXTERNAL>::atoi @ 0001e584 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_0004445c)(__nptr);
  return iVar1;
}



/* ===== RkRawStream::MediaInfo::findAttachedSubdevs @ 0001e590 size=12 ===== */

void __thiscall
RkRawStream::MediaInfo::findAttachedSubdevs
          (MediaInfo *this,media_device *param_1,uint param_2,rk_sensor_full_info_t *param_3)

{
  (*(code *)PTR_findAttachedSubdevs_00044460)(this);
  return;
}



/* ===== XCam::SafeList<XCam::V4l2BufferProxy>::~SafeList @ 0001e59c size=12 ===== */

void __thiscall
XCam::SafeList<XCam::V4l2BufferProxy>::~SafeList(SafeList<XCam::V4l2BufferProxy> *this)

{
  (*(code *)PTR__SafeList_00044464)(this);
  return;
}



/* ===== RkRawStream::RkPollThread::RkPollThread @ 0001e5a8 size=12 ===== */

void __thiscall RkRawStream::RkPollThread::RkPollThread(void)

{
  (*(code *)PTR_RkPollThread_00044468)();
  return;
}



/* ===== media_device_unref @ 0001e5b4 size=12 ===== */

void media_device_unref(void)

{
  (*(code *)PTR_media_device_unref_0004446c)();
  return;
}



/* ===== XCam::SmartPtr<RkRawStream::SimpleFdBuf>::release @ 0001e5c0 size=12 ===== */

void __thiscall
XCam::SmartPtr<RkRawStream::SimpleFdBuf>::release(SmartPtr<RkRawStream::SimpleFdBuf> *this)

{
  (*(code *)PTR_release_00044470)(this);
  return;
}



/* ===== <EXTERNAL>::__gxx_personality_v0 @ 0001e5cc size=12 ===== */

void __gxx_personality_v0(void)

{
  (*(code *)PTR___gxx_personality_v0_00044474)();
  return;
}



/* ===== <EXTERNAL>::strerror @ 0001e5d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00044478)(__errnum);
  return pcVar1;
}



/* ===== XCam::PollThread::create_stop_fds @ 0001e5e4 size=12 ===== */

void __thiscall XCam::PollThread::create_stop_fds(PollThread *this)

{
  (*(code *)PTR_create_stop_fds_0004447c)(this);
  return;
}



/* ===== <EXTERNAL>::printf @ 0001e5f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00044480)(__format);
  return iVar1;
}



/* ===== RkRawStream::RKStream::set_device_prepared @ 0001e5fc size=12 ===== */

void __thiscall RkRawStream::RKStream::set_device_prepared(RKStream *this,bool param_1)

{
  (*(code *)PTR_set_device_prepared_00044484)(this,param_1);
  return;
}



/* ===== <EXTERNAL>::pthread_cond_wait @ 0001e608 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_wait_00044488)(__cond);
  return iVar1;
}



/* ===== XCam::SmartPtr<rk_sensor_full_info_t>::release @ 0001e614 size=12 ===== */

void __thiscall
XCam::SmartPtr<rk_sensor_full_info_t>::release(SmartPtr<rk_sensor_full_info_t> *this)

{
  (*(code *)PTR_release_0004448c)(this);
  return;
}



/* ===== <EXTERNAL>::gnu_dev_minor @ 0001e620 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_minor(ulonglong __dev)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_gnu_dev_minor_00044490)((int)__dev,(int)(__dev >> 0x20));
  return uVar1;
}



/* ===== std::vector<XCam::SmartPtr<XCam::V4l2Buffer>,std::allocator<XCam::SmartPtr<XCam::V4l2Buffer>>>::_M_realloc_insert<XCam::SmartPtr<XCam::V4l2Buffer>const&> @ 0001e62c size=12 ===== */

void __thiscall
std::vector<XCam::SmartPtr<XCam::V4l2Buffer>,std::allocator<XCam::SmartPtr<XCam::V4l2Buffer>>>::
_M_realloc_insert<XCam::SmartPtr<XCam::V4l2Buffer>const&>(void)

{
  (*(code *)PTR__M_realloc_insert<XCam::SmartPtr<XCam::V4l2Buffer>const&>_00044494)();
  return;
}



/* ===== XCam::SmartPtr<XCam::V4l2Device>::operator= @ 0001e638 size=12 ===== */

void __thiscall
XCam::SmartPtr<XCam::V4l2Device>::operator=(SmartPtr<XCam::V4l2Device> *this,V4l2Device *param_1)

{
  (*(code *)PTR_operator__00044498)(this);
  return;
}



/* ===== <EXTERNAL>::strdup @ 0001e644 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strdup_0004449c)(__s);
  return pcVar1;
}



/* ===== rk_sensor_full_info_t::rk_sensor_full_info_t @ 0001e650 size=12 ===== */

void __thiscall rk_sensor_full_info_t::rk_sensor_full_info_t(rk_sensor_full_info_t *this)

{
  (*(code *)PTR_rk_sensor_full_info_t_000444a0)(this);
  return;
}



/* ===== std::_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>::_M_get_insert_unique_pos @ 0001e65c size=12 ===== */

void std::
     _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
     ::_M_get_insert_unique_pos(string *param_1)

{
  (*(code *)PTR__M_get_insert_unique_pos_000444a4)(param_1);
  return;
}



/* ===== <EXTERNAL>::pthread_detach @ 0001e668 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_detach(pthread_t __th)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_detach_000444a8)(__th);
  return iVar1;
}



/* ===== XCam::V4l2Buffer::V4l2Buffer @ 0001e674 size=12 ===== */

void __thiscall
XCam::V4l2Buffer::V4l2Buffer(V4l2Buffer *this,v4l2_buffer *param_1,v4l2_format *param_2)

{
  (*(code *)PTR_V4l2Buffer_000444ac)(this);
  return;
}



/* ===== xcam_video_buffer_get_planar_info @ 0001e680 size=12 ===== */

void xcam_video_buffer_get_planar_info(void)

{
  (*(code *)PTR_xcam_video_buffer_get_planar_info_000444b0)();
  return;
}



/* ===== <EXTERNAL>::puts @ 0001e68c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_000444b4)(__s);
  return iVar1;
}



/* ===== media_get_entity_by_id @ 0001e698 size=12 ===== */

void media_get_entity_by_id(void)

{
  (*(code *)PTR_media_get_entity_by_id_000444b8)();
  return;
}



/* ===== RkRawStream::RawStreamCapUnit::set_tx_format @ 0001e6a4 size=12 ===== */

void __thiscall
RkRawStream::RawStreamCapUnit::set_tx_format
          (RawStreamCapUnit *this,uint param_1,uint param_2,uint param_3,int param_4)

{
  (*(code *)PTR_set_tx_format_000444bc)(this);
  return;
}



/* ===== media_parse_pad @ 0001e6b0 size=12 ===== */

void media_parse_pad(void)

{
  (*(code *)PTR_media_parse_pad_000444c0)();
  return;
}



/* ===== __gnu_cxx::__to_xstring<std::__cxx11::string,char> @ 0001e6bc size=12 ===== */

void __thiscall
__gnu_cxx::__to_xstring<std::__cxx11::string,char>
          (__gnu_cxx *this,_func_int_char_ptr_uint_char_ptr___va_list *param_1,uint param_2,
          char *param_3,...)

{
  (*(code *)PTR___to_xstring<std::__cxx11::string,char>_000444c4)(this);
  return;
}



/* ===== RkRawStream::RkPollThread::~RkPollThread @ 0001e6c8 size=12 ===== */

void __thiscall RkRawStream::RkPollThread::~RkPollThread(RkPollThread *this)

{
  (*(code *)PTR__RkPollThread_000444c8)(this);
  return;
}



/* ===== RkRawStream::RkEventPollThread::RkEventPollThread @ 0001e6d4 size=12 ===== */

void __thiscall RkRawStream::RkEventPollThread::RkEventPollThread(void)

{
  (*(code *)PTR_RkEventPollThread_000444cc)();
  return;
}



/* ===== std::_Destroy_aux<false>::__destroy<XCam::SmartPtr<XCam::V4l2Buffer>*> @ 0001e6e0 size=12 ===== */

void std::_Destroy_aux<false>::__destroy<XCam::SmartPtr<XCam::V4l2Buffer>*>
               (SmartPtr *param_1,SmartPtr *param_2)

{
  (*(code *)PTR___destroy<XCam::SmartPtr<XCam::V4l2Buffer>*>_000444d0)(param_1);
  return;
}



/* ===== RkRawStream::RawStreamCapUnit::~RawStreamCapUnit @ 0001e6ec size=12 ===== */

void __thiscall RkRawStream::RawStreamCapUnit::~RawStreamCapUnit(RawStreamCapUnit *this)

{
  (*(code *)PTR__RawStreamCapUnit_000444d4)(this);
  return;
}



/* ===== <EXTERNAL>::pipe @ 0001e6f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pipe(int *__pipedes)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pipe_000444d8)(__pipedes);
  return iVar1;
}



/* ===== <EXTERNAL>::gnu_dev_major @ 0001e704 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_major(ulonglong __dev)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_gnu_dev_major_000444dc)((int)__dev,(int)(__dev >> 0x20));
  return uVar1;
}



/* ===== RkRawStream::RawStreamCapUnit::sync_raw_buf @ 0001e710 size=12 ===== */

void __thiscall
RkRawStream::RawStreamCapUnit::sync_raw_buf
          (RawStreamCapUnit *this,SmartPtr *param_1,SmartPtr *param_2,SmartPtr *param_3)

{
  (*(code *)PTR_sync_raw_buf_000444e0)(this);
  return;
}



/* ===== media_print_streampos @ 0001e71c size=12 ===== */

void media_print_streampos(void)

{
  (*(code *)PTR_media_print_streampos_000444e4)();
  return;
}



/* ===== <EXTERNAL>::strcpy @ 0001e728 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_000444e8)(__dest);
  return pcVar1;
}



/* ===== XCam::SmartPtr<XCam::V4l2Device>::SmartPtr @ 0001e734 size=12 ===== */

void __thiscall
XCam::SmartPtr<XCam::V4l2Device>::SmartPtr(SmartPtr<XCam::V4l2Device> *this,SmartPtr *param_1)

{
  (*(code *)PTR_SmartPtr_000444ec)(this);
  return;
}



/* ===== std::_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>::erase @ 0001e740 size=12 ===== */

void __thiscall
std::
_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
::erase(_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
        *this,string *param_1)

{
  (*(code *)PTR_erase_000444f0)(this);
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0001e74c size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_000444f4)();
  return;
}



/* ===== entry @ 0001e758 size=68 ===== */

void processEntry entry(void)

{
  Init *this;
  int iVar1;
  
  this = (Init *)(DAT_0001e79c + 0x1e76c);
  iVar1 = DAT_0001e7a0 + 0x1e770;
  std::ios_base::Init::Init(this);
  (*(code *)PTR___aeabi_atexit_000443c4)
            (this,*(undefined4 *)(iVar1 + DAT_0001e7a4),DAT_0001e7a8 + 0x1e78c);
  return;
}



/* ===== _INIT_2 @ 0001e7ac size=68 ===== */

void _INIT_2(void)

{
  Init *this;
  int iVar1;
  
  this = (Init *)(DAT_0001e7f0 + 0x1e7c0);
  iVar1 = DAT_0001e7f4 + 0x1e7c4;
  std::ios_base::Init::Init(this);
  (*(code *)PTR___aeabi_atexit_000443c4)
            (this,*(undefined4 *)(iVar1 + DAT_0001e7f8),DAT_0001e7fc + 0x1e7e0);
  return;
}



/* ===== _INIT_3 @ 0001e800 size=80 ===== */

void _INIT_3(void)

{
  Init *this;
  int iVar1;
  
  this = (Init *)(DAT_0001e844 + 0x1e814);
  iVar1 = DAT_0001e848 + 0x1e818;
  std::ios_base::Init::Init(this);
  (*(code *)PTR___aeabi_atexit_000443c4)
            (this,*(undefined4 *)(iVar1 + DAT_0001e84c),DAT_0001e850 + 0x1e834);
  return;
}



/* ===== _INIT_4 @ 0001e854 size=68 ===== */

void _INIT_4(void)

{
  Init *this;
  int iVar1;
  
  this = (Init *)(DAT_0001e898 + 0x1e868);
  iVar1 = DAT_0001e89c + 0x1e86c;
  std::ios_base::Init::Init(this);
  (*(code *)PTR___aeabi_atexit_000443c4)
            (this,*(undefined4 *)(iVar1 + DAT_0001e8a0),DAT_0001e8a4 + 0x1e888);
  return;
}



/* ===== _INIT_5 @ 0001e8a8 size=68 ===== */

void _INIT_5(void)

{
  Init *this;
  int iVar1;
  
  this = (Init *)(DAT_0001e8ec + 0x1e8bc);
  iVar1 = DAT_0001e8f0 + 0x1e8c0;
  std::ios_base::Init::Init(this);
  (*(code *)PTR___aeabi_atexit_000443c4)
            (this,*(undefined4 *)(iVar1 + DAT_0001e8f4),DAT_0001e8f8 + 0x1e8dc);
  return;
}



/* ===== _INIT_6 @ 0001e8fc size=68 ===== */

void _INIT_6(void)

{
  Init *this;
  int iVar1;
  
  this = (Init *)(DAT_0001e940 + 0x1e910);
  iVar1 = DAT_0001e944 + 0x1e914;
  std::ios_base::Init::Init(this);
  (*(code *)PTR___aeabi_atexit_000443c4)
            (this,*(undefined4 *)(iVar1 + DAT_0001e948),DAT_0001e94c + 0x1e930);
  return;
}



/* ===== _INIT_7 @ 0001e950 size=68 ===== */

void _INIT_7(void)

{
  Init *this;
  int iVar1;
  
  this = (Init *)(DAT_0001e994 + 0x1e964);
  iVar1 = DAT_0001e998 + 0x1e968;
  std::ios_base::Init::Init(this);
  (*(code *)PTR___aeabi_atexit_000443c4)
            (this,*(undefined4 *)(iVar1 + DAT_0001e99c),DAT_0001e9a0 + 0x1e984);
  return;
}



/* ===== _INIT_8 @ 0001e9a4 size=68 ===== */

void _INIT_8(void)

{
  Init *this;
  int iVar1;
  
  this = (Init *)(DAT_0001e9e8 + 0x1e9b8);
  iVar1 = DAT_0001e9ec + 0x1e9bc;
  std::ios_base::Init::Init(this);
  (*(code *)PTR___aeabi_atexit_000443c4)
            (this,*(undefined4 *)(iVar1 + DAT_0001e9f0),DAT_0001e9f4 + 0x1e9d8);
  return;
}



/* ===== _INIT_9 @ 0001e9f8 size=68 ===== */

void _INIT_9(void)

{
  Init *this;
  int iVar1;
  
  this = (Init *)(DAT_0001ea3c + 0x1ea0c);
  iVar1 = DAT_0001ea40 + 0x1ea10;
  std::ios_base::Init::Init(this);
  (*(code *)PTR___aeabi_atexit_000443c4)
            (this,*(undefined4 *)(iVar1 + DAT_0001ea44),DAT_0001ea48 + 0x1ea2c);
  return;
}



/* ===== _INIT_10 @ 0001ea4c size=68 ===== */

void _INIT_10(void)

{
  Init *this;
  int iVar1;
  
  this = (Init *)(DAT_0001ea90 + 0x1ea60);
  iVar1 = DAT_0001ea94 + 0x1ea64;
  std::ios_base::Init::Init(this);
  (*(code *)PTR___aeabi_atexit_000443c4)
            (this,*(undefined4 *)(iVar1 + DAT_0001ea98),DAT_0001ea9c + 0x1ea80);
  return;
}



/* ===== _INIT_11 @ 0001eaa0 size=68 ===== */

void _INIT_11(void)

{
  Init *this;
  int iVar1;
  
  this = (Init *)(DAT_0001eae4 + 0x1eab4);
  iVar1 = DAT_0001eae8 + 0x1eab8;
  std::ios_base::Init::Init(this);
  (*(code *)PTR___aeabi_atexit_000443c4)
            (this,*(undefined4 *)(iVar1 + DAT_0001eaec),DAT_0001eaf0 + 0x1ead4);
  return;
}



/* ===== _INIT_12 @ 0001eaf4 size=68 ===== */

void _INIT_12(void)

{
  Init *this;
  int iVar1;
  
  this = (Init *)(DAT_0001eb38 + 0x1eb08);
  iVar1 = DAT_0001eb3c + 0x1eb0c;
  std::ios_base::Init::Init(this);
  (*(code *)PTR___aeabi_atexit_000443c4)
            (this,*(undefined4 *)(iVar1 + DAT_0001eb40),DAT_0001eb44 + 0x1eb28);
  return;
}



/* ===== _INIT_13 @ 0001eb48 size=68 ===== */

void _INIT_13(void)

{
  Init *this;
  int iVar1;
  
  this = (Init *)(DAT_0001eb8c + 0x1eb5c);
  iVar1 = DAT_0001eb90 + 0x1eb60;
  std::ios_base::Init::Init(this);
  (*(code *)PTR___aeabi_atexit_000443c4)
            (this,*(undefined4 *)(iVar1 + DAT_0001eb94),DAT_0001eb98 + 0x1eb7c);
  return;
}



/* ===== FUN_0001eb9c @ 0001eb9c size=72 ===== */

void FUN_0001eb9c(void)

{
  code *pcVar1;
  
  if (DAT_0001ebe8 + 0x1ebb4 == DAT_0001ebe4 + 0x1ebac) {
    return;
  }
  pcVar1 = *(code **)(DAT_0001ebec + 0x1ebbc + DAT_0001ebf0);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 0001ec58 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_0001eccc + 0x1ec74;
  if (*(char *)(DAT_0001ecc8 + 0x1ec68) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_0001ecd0) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_0001ecd4 + 0x1ec94));
  }
  FUN_0001eb9c();
  if (*(int *)(iVar1 + DAT_0001ecd8) != 0) {
    __deregister_frame_info(DAT_0001ecdc + 0x1ecb4);
  }
  *(undefined1 *)(DAT_0001ece0 + 0x1ecc4) = 1;
  return;
}



/* ===== _INIT_0 @ 0001ece4 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_0001ed1c + 0x1ecf4 + DAT_0001ed20) != 0) {
    __register_frame_info(DAT_0001ed28 + 0x1ed14,DAT_0001ed24 + 0x1ed10);
  }
  if (((DAT_0001ec4c + 0x1ec0c) - (DAT_0001ec48 + 0x1ec04) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_0001ec50 + 0x1ec14 + DAT_0001ec54);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== XCam::Mutex::~Mutex @ 0001ed2c size=60 ===== */

/* XCam::Mutex::~Mutex() */

Mutex * __thiscall XCam::Mutex::~Mutex(Mutex *this)

{
  *(int *)this = *(int *)(DAT_0001ed68 + 0x1ed3c + DAT_0001ed6c) + 8;
  if (this[0x1c] != (Mutex)0x0) {
    pthread_mutex_destroy((pthread_mutex_t *)(this + 4));
  }
  return this;
}



/* ===== XCam::Mutex::~Mutex @ 0001ed70 size=32 ===== */

/* XCam::Mutex::~Mutex() */

Mutex * __thiscall XCam::Mutex::~Mutex(Mutex *this)

{
  ~Mutex(this);
  operator_delete(this,0x20);
  return this;
}



/* ===== XCam::SmartLock::~SmartLock @ 0001ed90 size=52 ===== */

/* XCam::SmartLock::~SmartLock() */

SmartLock * __thiscall XCam::SmartLock::~SmartLock(SmartLock *this)

{
  *(int *)this = *(int *)(DAT_0001edc4 + 0x1eda0 + DAT_0001edc8) + 8;
  pthread_mutex_unlock((pthread_mutex_t *)(*(int *)(this + 4) + 4));
  return this;
}



/* ===== XCam::SmartLock::~SmartLock @ 0001edcc size=32 ===== */

/* XCam::SmartLock::~SmartLock() */

SmartLock * __thiscall XCam::SmartLock::~SmartLock(SmartLock *this)

{
  ~SmartLock(this);
  operator_delete(this,8);
  return this;
}



/* ===== rkrawstream_uapi_init_offline @ 0001edec size=164 ===== */

int * rkrawstream_uapi_init_offline(char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  MediaInfo *this;
  
  xcam_get_log_level();
  iVar2 = DAT_0001eea0;
  piVar4 = operator_new(0x30);
  iVar3 = DAT_0001eea4;
  iVar1 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *piVar4 = 0;
  piVar4[1] = iVar1;
  piVar4[2] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piVar4[3] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piVar4[6] = 0;
  piVar4[7] = iVar1;
  piVar4[4] = 0;
  piVar4[5] = iVar1;
  piVar4[8] = 0;
  piVar4[9] = iVar1;
  piVar4[10] = 0;
  piVar4[0xb] = iVar1;
  *piVar4 = *(int *)(iVar2 + 0x1ee18 + iVar3) + 8;
  *(undefined1 *)(piVar4 + 7) = 1;
  pthread_mutex_init((pthread_mutex_t *)(piVar4 + 1),(pthread_mutexattr_t *)0x0);
  this = operator_new(0x33b0);
  RkRawStream::MediaInfo::MediaInfo(this);
  piVar4[8] = (int)this;
  RkRawStream::MediaInfo::initCamHwInfos(this);
  RkRawStream::MediaInfo::offline((MediaInfo *)piVar4[8],param_1,param_2);
  piVar4[10] = 0;
  piVar4[0xb] = 0;
  return piVar4;
}



/* ===== rkrawstream_uapi_init @ 0001eea8 size=140 ===== */

int * rkrawstream_uapi_init(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  MediaInfo *this;
  int iVar4;
  
  xcam_get_log_level();
  piVar3 = operator_new(0x30);
  iVar2 = DAT_0001ef48;
  iVar1 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iVar4 = DAT_0001ef44 + 0x1eecc;
  *piVar3 = 0;
  piVar3[1] = iVar1;
  piVar3[2] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piVar3[3] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piVar3[6] = 0;
  piVar3[7] = iVar1;
  piVar3[4] = 0;
  piVar3[5] = iVar1;
  piVar3[8] = 0;
  piVar3[9] = iVar1;
  piVar3[10] = 0;
  piVar3[0xb] = iVar1;
  *piVar3 = *(int *)(iVar4 + iVar2) + 8;
  *(undefined1 *)(piVar3 + 7) = 1;
  pthread_mutex_init((pthread_mutex_t *)(piVar3 + 1),(pthread_mutexattr_t *)0x0);
  this = operator_new(0x33b0);
  RkRawStream::MediaInfo::MediaInfo(this);
  piVar3[8] = (int)this;
  RkRawStream::MediaInfo::initCamHwInfos(this);
  piVar3[10] = 0;
  piVar3[0xb] = 0;
  return piVar3;
}



/* ===== rkrawstream_uapi_deinit @ 0001ef4c size=216 ===== */

void rkrawstream_uapi_deinit(Mutex *param_1,undefined4 param_2,undefined4 param_3)

{
  int local_18;
  Mutex *local_14;
  undefined4 uStack_10;
  
  local_18 = *(int *)(DAT_0001f030 + 0x1ef5c + DAT_0001f034) + 8;
  local_14 = param_1;
  uStack_10 = param_3;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 4));
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x24))();
  }
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x24))();
  }
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x28) + 4))();
  }
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 4))();
  }
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 4))();
  }
  XCam::SmartLock::~SmartLock((SmartLock *)&local_18);
  XCam::Mutex::~Mutex(param_1);
  operator_delete(param_1,0x30);
  return;
}



/* ===== rkrawstream_uapi_parase_rkraw2 @ 0001f038 size=4 ===== */

void RkRawStream::rkrawstream_uapi_parase_rkraw2(void *param_1,rkrawstream_rkraw2_t *param_2)

{
  (*(code *)PTR__parse_rk_rawdata_00044028)(param_1);
  return;
}



/* ===== rkrawstream_vicap_init @ 0001f03c size=216 ===== */

undefined4 rkrawstream_vicap_init(int param_1,undefined4 *param_2)

{
  int iVar1;
  RawStreamCapUnit *pRVar2;
  undefined4 uVar3;
  int local_20;
  int local_1c;
  
  local_20 = *(int *)(DAT_0001f13c + 0x1f04c + DAT_0001f140) + 8;
  local_1c = param_1;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 4));
  if ((char *)*param_2 == (char *)0x0) {
    pRVar2 = operator_new(0xa70);
    RkRawStream::RawStreamCapUnit::RawStreamCapUnit
              (pRVar2,(char *)param_2[1],(char *)param_2[2],(char *)param_2[3]);
    *(RawStreamCapUnit **)(param_1 + 0x28) = pRVar2;
  }
  else {
    iVar1 = RkRawStream::MediaInfo::getSensorFullInfo
                      (*(MediaInfo **)(param_1 + 0x20),(char *)*param_2,0);
    *(int *)(param_1 + 0x24) = iVar1;
    if (iVar1 == 0) {
      xcam_print_log(0x22,0xff,1,DAT_0001f144 + 0x1f0b8,*param_2);
      uVar3 = 0xfffffff9;
      goto LAB_0001f0d8;
    }
    pRVar2 = operator_new(0xa70);
    RkRawStream::RawStreamCapUnit::RawStreamCapUnit
              (pRVar2,*(rk_sensor_full_info_t **)(param_1 + 0x24));
    *(RawStreamCapUnit **)(param_1 + 0x28) = pRVar2;
  }
  uVar3 = 0;
LAB_0001f0d8:
  XCam::SmartLock::~SmartLock((SmartLock *)&local_20);
  return uVar3;
}



/* ===== rkrawstream_vicap_prepare @ 0001f148 size=220 ===== */

undefined4 rkrawstream_vicap_prepare(int param_1,uint *param_2)

{
  uint uVar1;
  int local_18;
  int local_14;
  
  local_18 = *(int *)(DAT_0001f230 + 0x1f168 + DAT_0001f234) + 8;
  local_14 = param_1;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 4));
  RkRawStream::RawStreamCapUnit::set_sensor_format(*(uint *)(param_1 + 0x28),*param_2,param_2[1]);
  RkRawStream::RawStreamCapUnit::set_tx_format
            (*(RawStreamCapUnit **)(param_1 + 0x28),*param_2,param_2[1],param_2[2],param_2[4]);
  if (param_2[3] == 0) {
    RkRawStream::RawStreamCapUnit::prepare
              (*(RawStreamCapUnit **)(param_1 + 0x28),1,(uchar)param_2[5],
               *(uchar *)((int)param_2 + 0x15));
    RkRawStream::RawStreamCapUnit::set_working_mode(*(RawStreamCapUnit **)(param_1 + 0x28),0);
    uVar1 = 0;
  }
  else {
    if (param_2[3] != 0x10) goto LAB_0001f21c;
    RkRawStream::RawStreamCapUnit::prepare
              (*(RawStreamCapUnit **)(param_1 + 0x28),3,(uchar)param_2[5],
               *(uchar *)((int)param_2 + 0x15));
    RkRawStream::RawStreamCapUnit::set_working_mode(*(RawStreamCapUnit **)(param_1 + 0x28),0x12);
    uVar1 = 0x12;
  }
  RkRawStream::RawStreamCapUnit::set_sensor_mode(*(RawStreamCapUnit **)(param_1 + 0x28),uVar1);
LAB_0001f21c:
  XCam::SmartLock::~SmartLock((SmartLock *)&local_18);
  return 0;
}



/* ===== rkrawstream_vicap_start @ 0001f238 size=96 ===== */

undefined4 rkrawstream_vicap_start(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  
  iStack_18 = *(int *)(DAT_0001f2a4 + 0x1f248 + DAT_0001f2a8) + 8;
  iStack_14 = param_1;
  uStack_10 = param_3;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 4));
  *(undefined4 *)(*(int *)(param_1 + 0x28) + 4) = param_2;
  (**(code **)(**(int **)(param_1 + 0x28) + 0x20))();
  XCam::SmartLock::~SmartLock((SmartLock *)&iStack_18);
  return 0;
}



/* ===== rkrawstream_vicap_stop @ 0001f2ac size=84 ===== */

undefined4 rkrawstream_vicap_stop(int param_1)

{
  int iStack_10;
  int iStack_c;
  
  iStack_10 = *(int *)(DAT_0001f30c + 0x1f2bc + DAT_0001f310) + 8;
  iStack_c = param_1;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 4));
  (**(code **)(**(int **)(param_1 + 0x28) + 0x24))();
  XCam::SmartLock::~SmartLock((SmartLock *)&iStack_10);
  return 0;
}



/* ===== rkrawstream_vicap_streamoff @ 0001f314 size=84 ===== */

undefined4 rkrawstream_vicap_streamoff(int param_1)

{
  int iStack_10;
  int iStack_c;
  
  iStack_10 = *(int *)(DAT_0001f374 + 0x1f324 + DAT_0001f378) + 8;
  iStack_c = param_1;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 4));
  (**(code **)(**(int **)(param_1 + 0x28) + 0x28))();
  XCam::SmartLock::~SmartLock((SmartLock *)&iStack_10);
  return 0;
}



/* ===== rkrawstream_vicap_release_buffer @ 0001f37c size=84 ===== */

undefined4 rkrawstream_vicap_release_buffer(int param_1)

{
  int iStack_10;
  int iStack_c;
  
  iStack_10 = *(int *)(DAT_0001f3dc + 0x1f38c + DAT_0001f3e0) + 8;
  iStack_c = param_1;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 4));
  (**(code **)(**(int **)(param_1 + 0x28) + 0x2c))();
  XCam::SmartLock::~SmartLock((SmartLock *)&iStack_10);
  return 0;
}



/* ===== rkrawstream_vicap_buf_take @ 0001f3e4 size=16 ===== */

void rkrawstream_vicap_buf_take(int param_1)

{
  *(undefined1 *)(*(int *)(param_1 + 0x28) + 0x20) = 1;
  return;
}



/* ===== rkrawstream_vicap_buf_return @ 0001f3f4 size=20 ===== */

void rkrawstream_vicap_buf_return(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001dc5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_release_user_taked_buf_0004414c)(*(undefined4 *)(param_1 + 0x28));
  return;
}



/* ===== rkrawstream_vicap_setdmabuf @ 0001f3fc size=20 ===== */

void rkrawstream_vicap_setdmabuf(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001e400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_set_dma_buf_000443d8)(*(undefined4 *)(param_1 + 0x28));
  return;
}



/* ===== rkrawstream_readback_init @ 0001f404 size=188 ===== */

undefined4 rkrawstream_readback_init(int param_1,undefined4 *param_2)

{
  int iVar1;
  RawStreamProcUnit *this;
  undefined4 uVar2;
  int local_20;
  int local_1c;
  
  local_20 = *(int *)(DAT_0001f4dc + 0x1f414 + DAT_0001f4e0) + 8;
  local_1c = param_1;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 4));
  if ((char *)*param_2 != (char *)0x0) {
    iVar1 = RkRawStream::MediaInfo::getSensorFullInfo
                      (*(MediaInfo **)(param_1 + 0x20),(char *)*param_2,0);
    *(int *)(param_1 + 0x24) = iVar1;
    if (iVar1 == 0) {
      xcam_print_log(0x22,0xff,1,DAT_0001f4e4 + 0x1f480,*param_2);
      uVar2 = 0xfffffff9;
      goto LAB_0001f4a4;
    }
    this = operator_new(0x5d8);
    RkRawStream::RawStreamProcUnit::RawStreamProcUnit
              (this,*(rk_sensor_full_info_t **)(param_1 + 0x24),*(uchar *)(param_2 + 4));
    *(RawStreamProcUnit **)(param_1 + 0x2c) = this;
  }
  uVar2 = 0;
LAB_0001f4a4:
  XCam::SmartLock::~SmartLock((SmartLock *)&local_20);
  return uVar2;
}



/* ===== rkrawstream_readback_prepare @ 0001f4e8 size=180 ===== */

undefined4 rkrawstream_readback_prepare(int param_1,uint *param_2)

{
  int iVar1;
  int local_18;
  int local_14;
  
  local_18 = *(int *)(DAT_0001f5a8 + 0x1f508 + DAT_0001f5ac) + 8;
  local_14 = param_1;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 4));
  RkRawStream::RawStreamProcUnit::set_rx_format
            (*(RawStreamProcUnit **)(param_1 + 0x2c),*param_2,param_2[1],param_2[2],param_2[4]);
  if (param_2[3] == 0) {
    RkRawStream::RawStreamProcUnit::prepare
              (*(RawStreamProcUnit **)(param_1 + 0x2c),1,(uchar)param_2[5],
               *(uchar *)((int)param_2 + 0x15));
    iVar1 = 0;
  }
  else {
    if (param_2[3] != 0x10) goto LAB_0001f594;
    RkRawStream::RawStreamProcUnit::prepare
              (*(RawStreamProcUnit **)(param_1 + 0x2c),3,(uchar)param_2[5],
               *(uchar *)((int)param_2 + 0x15));
    iVar1 = 0x12;
  }
  RkRawStream::RawStreamProcUnit::set_working_mode(*(RawStreamProcUnit **)(param_1 + 0x2c),iVar1);
LAB_0001f594:
  XCam::SmartLock::~SmartLock((SmartLock *)&local_18);
  return 0;
}



/* ===== rkrawstream_readback_start @ 0001f5b0 size=96 ===== */

undefined4 rkrawstream_readback_start(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  
  iStack_18 = *(int *)(DAT_0001f61c + 0x1f5c0 + DAT_0001f620) + 8;
  iStack_14 = param_1;
  uStack_10 = param_3;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 4));
  *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x1c) = param_2;
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x20))();
  XCam::SmartLock::~SmartLock((SmartLock *)&iStack_18);
  return 0;
}



/* ===== rkrawstream_readback_stop @ 0001f624 size=84 ===== */

undefined4 rkrawstream_readback_stop(int param_1)

{
  int iStack_10;
  int iStack_c;
  
  iStack_10 = *(int *)(DAT_0001f684 + 0x1f634 + DAT_0001f688) + 8;
  iStack_c = param_1;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 4));
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x24))();
  XCam::SmartLock::~SmartLock((SmartLock *)&iStack_10);
  return 0;
}



/* ===== rkrawstream_readback_set_buffer @ 0001f68c size=20 ===== */

undefined4 rkrawstream_readback_set_buffer(int param_1,uchar *param_2)

{
  RkRawStream::RawStreamProcUnit::send_sync_buf2(*(RawStreamProcUnit **)(param_1 + 0x2c),param_2);
  return 0;
}



/* ===== rkrawstream_readback_set_rkraw2 @ 0001f6a0 size=20 ===== */

undefined4 rkrawstream_readback_set_rkraw2(int param_1,rkrawstream_rkraw2_t *param_2)

{
  RkRawStream::RawStreamProcUnit::_send_sync_buf(*(RawStreamProcUnit **)(param_1 + 0x2c),param_2);
  return 0;
}



/* ===== rkrawstream_setup_pipline_fmt @ 0001f6b4 size=20 ===== */

undefined4 rkrawstream_setup_pipline_fmt(int param_1,uint param_2,uint param_3)

{
  RkRawStream::RawStreamProcUnit::setup_pipeline_fmt
            (*(RawStreamProcUnit **)(param_1 + 0x2c),param_2,param_3);
  return 0;
}



/* ===== XCam::RefCount::is_a_object @ 0001f6c8 size=8 ===== */

/* XCam::RefCount::is_a_object() const */

undefined4 XCam::RefCount::is_a_object(void)

{
  return 0;
}



/* ===== RkRawStream::RawStreamCapUnit::poll_buffer_ready @ 0001f6d0 size=8 ===== */

/* RkRawStream::RawStreamCapUnit::poll_buffer_ready(XCam::SmartPtr<XCam::VideoBuffer>&, int) */

undefined4 RkRawStream::RawStreamCapUnit::poll_buffer_ready(SmartPtr *param_1,int param_2)

{
  return 0xffffffff;
}



/* ===== RkRawStream::RawStreamCapUnit::poll_buffer_failed @ 0001f6d8 size=8 ===== */

/* RkRawStream::RawStreamCapUnit::poll_buffer_failed(long long, char const*) */

undefined8 RkRawStream::RawStreamCapUnit::poll_buffer_failed(longlong param_1,char *param_2)

{
  return 0xffffffff;
}



/* ===== RkRawStream::RawStreamCapUnit::poll_buffer_ready @ 0001f6e0 size=8 ===== */

/* RkRawStream::RawStreamCapUnit::poll_buffer_ready(XCam::SmartPtr<XCam::VideoBuffer>&) */

undefined4 RkRawStream::RawStreamCapUnit::poll_buffer_ready(SmartPtr *param_1)

{
  return 0xffffffff;
}



/* ===== RkRawStream::RawStreamCapUnit::poll_event_ready @ 0001f6e8 size=8 ===== */

/* RkRawStream::RawStreamCapUnit::poll_event_ready(unsigned int, int) */

undefined4 RkRawStream::RawStreamCapUnit::poll_event_ready(uint param_1,int param_2)

{
  return 0xffffffff;
}



/* ===== RkRawStream::RawStreamCapUnit::poll_event_failed @ 0001f6f0 size=8 ===== */

/* RkRawStream::RawStreamCapUnit::poll_event_failed(long long, char const*) */

undefined8 RkRawStream::RawStreamCapUnit::poll_event_failed(longlong param_1,char *param_2)

{
  return 0xffffffff;
}



/* ===== RkRawStream::RawStreamCapUnit::start @ 0001f6f8 size=68 ===== */

/* RkRawStream::RawStreamCapUnit::start() */

undefined4 __thiscall RkRawStream::RawStreamCapUnit::start(RawStreamCapUnit *this)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < *(int *)(this + 0x6c); iVar1 = iVar1 + 1) {
    (**(code **)(**(int **)(this + iVar1 * 8 + 0x48) + 8))();
  }
  *(undefined4 *)(this + 0x180) = 3;
  return 0;
}



/* ===== RkRawStream::RawStreamCapUnit::stop_device @ 0001f73c size=112 ===== */

/* RkRawStream::RawStreamCapUnit::stop_device() */

undefined4 __thiscall RkRawStream::RawStreamCapUnit::stop_device(RawStreamCapUnit *this)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < *(int *)(this + 0x6c); iVar1 = iVar1 + 1) {
    (**(code **)(**(int **)(this + iVar1 * 8 + 0x48) + 0x18))();
  }
  for (iVar1 = 0; iVar1 < *(int *)(this + 0x6c); iVar1 = iVar1 + 1) {
    (**(code **)(**(int **)(this + iVar1 * 8 + 0x48) + 0x20))();
  }
  *(undefined4 *)(this + 0x180) = 4;
  return 0;
}



/* ===== XCam::RefCount::~RefCount @ 0001f7ac size=4 ===== */

/* XCam::RefCount::~RefCount() */

RefCount * __thiscall XCam::RefCount::~RefCount(RefCount *this)

{
  return this;
}



/* ===== XCam::RefCount::~RefCount @ 0001f7b0 size=24 ===== */

/* XCam::RefCount::~RefCount() */

RefCount * __thiscall XCam::RefCount::~RefCount(RefCount *this)

{
  operator_delete(this,8);
  return this;
}



/* ===== FUN_0001f7c8 @ 0001f7c8 size=48 ===== */

void FUN_0001f7c8(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = operator_new(8);
  iVar2 = DAT_0001f7f8 + 0x1f7e4;
  piVar1[1] = 1;
  *piVar1 = *(int *)(iVar2 + DAT_0001f7fc) + 8;
  return;
}



/* ===== RkRawStream::RawStreamCapUnit::set_devices @ 0001f800 size=8 ===== */

/* RkRawStream::RawStreamCapUnit::set_devices(RkRawStream::RawStreamProcUnit*) */

void __thiscall
RkRawStream::RawStreamCapUnit::set_devices(RawStreamCapUnit *this,RawStreamProcUnit *param_1)

{
  *(RawStreamProcUnit **)(this + 0x428) = param_1;
  return;
}



/* ===== RkRawStream::RawStreamCapUnit::prepare @ 0001f808 size=216 ===== */

/* RkRawStream::RawStreamCapUnit::prepare(int, unsigned char, unsigned char) */

int __thiscall
RkRawStream::RawStreamCapUnit::prepare
          (RawStreamCapUnit *this,int param_1,uchar param_2,uchar param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  RawStreamCapUnit *pRVar4;
  int iVar5;
  
  iVar5 = DAT_0001f8e0;
  uVar2 = (uint)param_2;
  *(uint *)(this + 0xa6c) = uVar2;
  iVar1 = DAT_0001f8e4;
  xcam_print_log(0x22,0xff,1,iVar5 + 0x1f834,param_1,uVar2,uVar2);
  uVar3 = 0;
  iVar5 = 0;
  pRVar4 = this;
  do {
    if ((param_1 >> (uVar3 & 0xff) & 1U) != 0) {
      if (uVar2 != 0) {
        XCam::V4l2Device::set_mem_type(*(V4l2Device **)(pRVar4 + 8),*(undefined4 *)(this + 0xa6c));
      }
      if (param_3 != 0) {
        XCam::V4l2Device::set_buffer_count(*(V4l2Device **)(pRVar4 + 8),(uint)param_3);
      }
      iVar5 = XCam::V4l2Device::prepare();
      if (iVar5 < 0) {
        xcam_print_log(0x22,0xff,1,iVar1 + 0x1f850,uVar3,iVar5);
      }
      RKStream::set_device_prepared(*(RKStream **)(pRVar4 + 0x48),true);
    }
    uVar3 = uVar3 + 1;
    pRVar4 = pRVar4 + 8;
  } while (uVar3 != 3);
  *(undefined4 *)(this + 0x180) = 2;
  return iVar5;
}



/* ===== RkRawStream::RawStreamCapUnit::set_working_mode @ 0001f8e8 size=52 ===== */

/* RkRawStream::RawStreamCapUnit::set_working_mode(int) */

void __thiscall RkRawStream::RawStreamCapUnit::set_working_mode(RawStreamCapUnit *this,int param_1)

{
  undefined4 uVar1;
  
  *(int *)(this + 0x68) = param_1;
  if (0x10 < param_1) {
    if (param_1 < 0x13) {
      uVar1 = 2;
      goto LAB_0001f914;
    }
    if (param_1 - 0x21U < 2) {
      uVar1 = 3;
      goto LAB_0001f914;
    }
  }
  uVar1 = 1;
LAB_0001f914:
  *(undefined4 *)(this + 0x6c) = uVar1;
  return;
}



/* ===== RkRawStream::RawStreamCapUnit::set_tx_format @ 0001f91c size=212 ===== */

/* RkRawStream::RawStreamCapUnit::set_tx_format(unsigned int, unsigned int, unsigned int, int) */

void __thiscall
RkRawStream::RawStreamCapUnit::set_tx_format
          (RawStreamCapUnit *this,uint param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_f8;
  undefined1 auStack_f4 [12];
  uint local_e8;
  
  iVar1 = DAT_0001f9f0;
  memset(auStack_f4,0,0xcc);
  uVar2 = DAT_0001f9f4;
  iVar5 = 1;
  do {
    piVar3 = *(int **)(this + iVar5 * 8);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x10))(piVar3,auStack_f4);
      pixFmt2Bpp(local_e8);
      local_f8 = param_4;
      iVar4 = (**(code **)(**(int **)(this + iVar5 * 8) + 0x30))
                        (*(int **)(this + iVar5 * 8),uVar2,&local_f8);
      if (iVar4 != 0) {
        xcam_print_log(0x22,0xff,1,iVar1 + 0x1f958);
      }
      XCam::V4l2Device::set_format(*(V4l2Device **)(this + iVar5 * 8),param_1,param_2,local_e8,1,0);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 4);
  return;
}



/* ===== RkRawStream::RawStreamCapUnit::set_sensor_format @ 0001f9f8 size=120 ===== */

/* RkRawStream::RawStreamCapUnit::set_sensor_format(unsigned int, unsigned int, unsigned int) */

void RkRawStream::RawStreamCapUnit::set_sensor_format(uint param_1,uint param_2,uint param_3)

{
  int *piVar1;
  undefined4 local_70;
  undefined4 uStack_6c;
  uint local_68;
  uint local_64;
  
  piVar1 = *(int **)(param_1 + 0x60);
  if (piVar1 != (int *)0x0) {
    memset(&local_70,0,0x58);
    (**(code **)(*piVar1 + 0x60))(piVar1,&local_70);
    local_70 = 1;
    uStack_6c = 0;
    local_68 = param_2;
    local_64 = param_3;
    (**(code **)(**(int **)(param_1 + 0x60) + 0x5c))(*(int **)(param_1 + 0x60),&local_70);
  }
  return;
}



/* ===== RkRawStream::RawStreamCapUnit::set_sensor_mode @ 0001fa70 size=128 ===== */

/* RkRawStream::RawStreamCapUnit::set_sensor_mode(unsigned int) */

void __thiscall RkRawStream::RawStreamCapUnit::set_sensor_mode(RawStreamCapUnit *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_90 [34];
  
  piVar1 = *(int **)(this + 0x60);
  if (piVar1 != (int *)0x0) {
    if (param_1 < 0x11) {
      uVar3 = 0;
    }
    else if (param_1 < 0x13) {
      uVar3 = 5;
    }
    else if (param_1 - 0x21 < 2) {
      uVar3 = 6;
    }
    else {
      uVar3 = 0;
    }
    local_90[0] = uVar3;
    iVar2 = (**(code **)(*piVar1 + 0x30))(piVar1,DAT_0001faf0,local_90);
    if (iVar2 < 0) {
      xcam_print_log(0x22,0xff,1,DAT_0001faf4 + 0x1fae4,uVar3);
    }
    return;
  }
  return;
}



/* ===== std::__atomic_base<unsigned_int>::operator++ @ 0001faf8 size=36 ===== */

/* std::__atomic_base<unsigned int>::TEMPNAMEPLACEHOLDERVALUE() */

int __thiscall std::__atomic_base<unsigned_int>::operator++(__atomic_base<unsigned_int> *this)

{
  bool bVar1;
  int iVar2;
  
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *(int *)this;
    bVar1 = (bool)hasExclusiveAccess(this);
  } while (!bVar1);
  *(int *)this = iVar2 + 1;
  DataMemoryBarrier(0xb);
  return iVar2 + 1;
}



/* ===== std::__atomic_base<unsigned_int>::operator-- @ 0001fb1c size=36 ===== */

/* std::__atomic_base<unsigned int>::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall std::__atomic_base<unsigned_int>::operator--(__atomic_base<unsigned_int> *this)

{
  bool bVar1;
  
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(this);
  } while (!bVar1);
  *(int *)this = *(int *)this + -1;
  DataMemoryBarrier(0xb);
  return;
}



/* ===== XCam::SmartPtr<XCam::V4l2BufferProxy>::SmartPtr @ 0001fb40 size=48 ===== */

/* XCam::SmartPtr<XCam::V4l2BufferProxy>::SmartPtr(XCam::SmartPtr<XCam::V4l2BufferProxy> const&) */

SmartPtr<XCam::V4l2BufferProxy> * __thiscall
XCam::SmartPtr<XCam::V4l2BufferProxy>::SmartPtr
          (SmartPtr<XCam::V4l2BufferProxy> *this,SmartPtr *param_1)

{
  int iVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  iVar1 = *(int *)(param_1 + 4);
  *(int *)(this + 4) = iVar1;
  if (iVar1 != 0) {
    std::__atomic_base<unsigned_int>::operator++((__atomic_base<unsigned_int> *)(iVar1 + 4));
  }
  return this;
}



/* ===== XCam::SafeList<XCam::V4l2BufferProxy>::SafeList @ 0001fb70 size=96 ===== */

/* XCam::SafeList<XCam::V4l2BufferProxy>::SafeList() */

SafeList<XCam::V4l2BufferProxy> * __thiscall
XCam::SafeList<XCam::V4l2BufferProxy>::SafeList(SafeList<XCam::V4l2BufferProxy> *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0001fbd4;
  iVar1 = DAT_0001fbd0 + 0x1fb80;
  *(SafeList<XCam::V4l2BufferProxy> **)(this + 4) = this;
  *(SafeList<XCam::V4l2BufferProxy> **)this = this;
  *(undefined4 *)(this + 8) = 0;
  iVar2 = *(int *)(iVar1 + iVar2);
  this[0x28] = (SafeList<XCam::V4l2BufferProxy>)0x1;
  *(int *)(this + 0xc) = iVar2 + 8;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x10),(pthread_mutexattr_t *)0x0);
  this[0x60] = (SafeList<XCam::V4l2BufferProxy>)0x1;
  pthread_cond_init((pthread_cond_t *)(this + 0x30),(pthread_condattr_t *)0x0);
  this[0x68] = (SafeList<XCam::V4l2BufferProxy>)0x0;
  return this;
}



/* ===== XCam::SafeList<XCam::V4l2BufferProxy>::push @ 0001fbd8 size=136 ===== */

/* XCam::SafeList<XCam::V4l2BufferProxy>::push(XCam::SmartPtr<XCam::V4l2BufferProxy> const&) */

undefined4 XCam::SafeList<XCam::V4l2BufferProxy>::push(SmartPtr *param_1)

{
  _List_node_base *p_Var1;
  SmartPtr *in_r1;
  int local_20;
  SmartPtr *local_1c;
  
  local_20 = *(int *)(DAT_0001fc6c + 0x1fbe8 + DAT_0001fc70) + 8;
  local_1c = param_1 + 0xc;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x10));
  p_Var1 = operator_new(0x10);
  SmartPtr<XCam::V4l2BufferProxy>::SmartPtr((SmartPtr<XCam::V4l2BufferProxy> *)(p_Var1 + 8),in_r1);
  std::__detail::_List_node_base::_M_hook(p_Var1);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  pthread_cond_signal((pthread_cond_t *)(param_1 + 0x30));
  SmartLock::~SmartLock((SmartLock *)&local_20);
  return 1;
}



/* ===== XCam::SafeList<XCam::V4l2BufferProxy>::is_empty @ 0001fc74 size=84 ===== */

/* XCam::SafeList<XCam::V4l2BufferProxy>::is_empty() */

bool __thiscall
XCam::SafeList<XCam::V4l2BufferProxy>::is_empty(SafeList<XCam::V4l2BufferProxy> *this)

{
  SafeList<XCam::V4l2BufferProxy> *pSVar1;
  int local_10;
  SafeList<XCam::V4l2BufferProxy> *local_c;
  
  local_10 = *(int *)(DAT_0001fcc8 + 0x1fc84 + DAT_0001fccc) + 8;
  local_c = this + 0xc;
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x10));
  pSVar1 = *(SafeList<XCam::V4l2BufferProxy> **)this;
  SmartLock::~SmartLock((SmartLock *)&local_10);
  return pSVar1 == this;
}



/* ===== XCam::SafeList<XCam::V4l2BufferProxy>::front @ 0001fcd0 size=108 ===== */

/* XCam::SafeList<XCam::V4l2BufferProxy>::front() */

void XCam::SafeList<XCam::V4l2BufferProxy>::front(void)

{
  SmartPtr<XCam::V4l2BufferProxy> *in_r0;
  int *in_r1;
  int local_18;
  int *local_14;
  
  local_18 = *(int *)(DAT_0001fd3c + 0x1fce0 + DAT_0001fd40) + 8;
  local_14 = in_r1 + 3;
  pthread_mutex_lock((pthread_mutex_t *)(in_r1 + 4));
  if ((int *)*in_r1 == in_r1) {
    *(undefined4 *)in_r0 = 0;
    *(undefined4 *)(in_r0 + 4) = 0;
  }
  else {
    SmartPtr<XCam::V4l2BufferProxy>::SmartPtr(in_r0,(SmartPtr *)((int *)*in_r1 + 2));
  }
  SmartLock::~SmartLock((SmartLock *)&local_18);
  return;
}



/* ===== XCam::SmartPtr<XCam::V4l2Buffer>::release @ 0001fd44 size=128 ===== */

/* XCam::SmartPtr<XCam::V4l2Buffer>::release() */

void __thiscall XCam::SmartPtr<XCam::V4l2Buffer>::release(SmartPtr<XCam::V4l2Buffer> *this)

{
  int iVar1;
  
  if (*(int *)this == 0) {
    return;
  }
  iVar1 = std::__atomic_base<unsigned_int>::operator--
                    ((__atomic_base<unsigned_int> *)(*(int *)(this + 4) + 4));
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)(this + 4) + 8))();
    if ((iVar1 == 0) && (*(int **)(this + 4) != (int *)0x0)) {
      (**(code **)(**(int **)(this + 4) + 4))();
    }
    if (*(int **)this != (int *)0x0) {
      (**(code **)(**(int **)this + 4))();
    }
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}



/* ===== RkRawStream::RawStreamCapUnit::set_dma_buf @ 0001fdc4 size=152 ===== */

/* RkRawStream::RawStreamCapUnit::set_dma_buf(int, int, int) */

void __thiscall
RkRawStream::RawStreamCapUnit::set_dma_buf
          (RawStreamCapUnit *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  code *pcVar5;
  RawStreamCapUnit *pRVar6;
  int local_20 [2];
  
  local_20[0] = 0;
  local_20[1] = 0;
  pRVar6 = this;
  iVar3 = param_1;
  iVar1 = XCam::V4l2Device::get_buffer
                    (*(V4l2Device **)(this + (param_1 + 1) * 8),(SmartPtr *)local_20,param_2);
  if (iVar1 == 0) {
    piVar2 = *(int **)(this + (param_1 + 1) * 8);
    *(int *)(local_20[0] + 0x118) = param_3;
    pcVar5 = *(code **)(*piVar2 + 0x2c);
    iVar3 = (*pcVar5)(piVar2,(SmartPtr *)local_20,0,pcVar5,pRVar6,iVar3);
    if (iVar3 == 0) goto LAB_0001fe18;
    puVar4 = &UNK_0001fe5c + DAT_0001fe6c;
  }
  else {
    puVar4 = (undefined *)(DAT_0001fe68 + 0x1fe0c);
  }
  xcam_print_log(0x22,0xff,1,puVar4,param_1);
LAB_0001fe18:
  XCam::SmartPtr<XCam::V4l2Buffer>::release((SmartPtr<XCam::V4l2Buffer> *)local_20);
  return;
}



/* ===== XCam::SmartPtr<XCam::BufferData>::dynamic_cast_ptr<XCam::V4l2Buffer> @ 0001fe70 size=120 ===== */

/* XCam::SmartPtr<XCam::V4l2Buffer>
   XCam::SmartPtr<XCam::BufferData>::dynamic_cast_ptr<XCam::V4l2Buffer>() const */

void XCam::SmartPtr<XCam::BufferData>::dynamic_cast_ptr<XCam::V4l2Buffer>(void)

{
  int *in_r0;
  int iVar1;
  int *in_r1;
  int iVar2;
  
  iVar1 = DAT_0001fee8;
  iVar2 = in_r1[1];
  *in_r0 = 0;
  in_r0[1] = 0;
  if ((iVar2 != 0) && (*in_r1 != 0)) {
    iVar1 = __dynamic_cast(*in_r1,*(undefined4 *)(iVar1 + 0x1fe94 + DAT_0001fef0),
                           *(undefined4 *)(iVar1 + 0x1fe94 + DAT_0001feec));
    if (iVar1 != 0) {
      *in_r0 = iVar1;
      in_r0[1] = iVar2;
      std::__atomic_base<unsigned_int>::operator++((__atomic_base<unsigned_int> *)(iVar2 + 4));
    }
  }
  return;
}



/* ===== RkRawStream::rkraw_append_buf @ 0001fef4 size=200 ===== */

/* RkRawStream::rkraw_append_buf(unsigned char*, unsigned short,
   XCam::SmartPtr<XCam::V4l2BufferProxy>&) */

void RkRawStream::rkraw_append_buf(uchar *param_1,ushort param_2,SmartPtr *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uchar *local_28;
  uint uStack_24;
  SmartPtr *pSStack_20;
  
  uStack_24 = (uint)param_2;
  local_28 = param_1;
  pSStack_20 = param_3;
  XCam::SmartPtr<XCam::BufferData>::dynamic_cast_ptr<XCam::V4l2Buffer>();
  uVar4 = *(undefined4 *)(local_28 + 0x11c);
  XCam::SmartPtr<XCam::V4l2Buffer>::release((SmartPtr<XCam::V4l2Buffer> *)&local_28);
  *(ushort *)param_1 = param_2;
  param_1[2] = '\x1c';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  puVar1 = (undefined4 *)XCam::V4l2BufferProxy::get_v4l2_buf();
  *(undefined4 *)(param_1 + 6) = *puVar1;
  XCam::SmartPtr<XCam::BufferData>::dynamic_cast_ptr<XCam::V4l2Buffer>();
  uVar5 = *(undefined4 *)(local_28 + 0x118);
  XCam::SmartPtr<XCam::V4l2Buffer>::release((SmartPtr<XCam::V4l2Buffer> *)&local_28);
  *(undefined4 *)(param_1 + 10) = uVar5;
  iVar2 = XCam::V4l2BufferProxy::get_v4l2_buf();
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(*(int *)(iVar2 + 0x34) + 4);
  uVar5 = *(undefined4 *)(*(int *)param_3 + 0x60);
  uVar3 = *(undefined4 *)(*(int *)param_3 + 100);
  param_1[0xe] = '\0';
  *(undefined4 *)(param_1 + 0x1a) = uVar5;
  *(undefined4 *)(param_1 + 0x1e) = uVar3;
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  *(undefined4 *)(param_1 + 0x12) = uVar4;
  return;
}



/* ===== RkRawStream::RawStreamCapUnit::do_capture_callback @ 0001ffbc size=428 ===== */

/* RkRawStream::RawStreamCapUnit::do_capture_callback(XCam::SmartPtr<XCam::V4l2BufferProxy>&,
   XCam::SmartPtr<XCam::V4l2BufferProxy>&, XCam::SmartPtr<XCam::V4l2BufferProxy>&) */

undefined4 __thiscall
RkRawStream::RawStreamCapUnit::do_capture_callback
          (RawStreamCapUnit *this,SmartPtr *param_1,SmartPtr *param_2,SmartPtr *param_3)

{
  int *piVar1;
  int iVar2;
  RawStreamCapUnit *pRVar3;
  RawStreamCapUnit *pRVar5;
  RawStreamCapUnit *pRVar6;
  RawStreamCapUnit *pRVar7;
  RawStreamCapUnit *pRVar4;
  
  piVar1 = (int *)XCam::V4l2BufferProxy::get_v4l2_buf();
  iVar2 = *piVar1 * 0x139 + 0x42c;
  pRVar5 = this + iVar2;
  pRVar6 = pRVar5 + 0x5b;
  *(undefined2 *)(this + iVar2) = 0xff00;
  pRVar5[5] = (RawStreamCapUnit)0x0;
  pRVar5[6] = (RawStreamCapUnit)0x0;
  pRVar5[7] = (RawStreamCapUnit)0x0;
  pRVar5[8] = (RawStreamCapUnit)0x0;
  pRVar5[9] = (RawStreamCapUnit)0x2;
  pRVar5[2] = (RawStreamCapUnit)0x1;
  pRVar5[3] = (RawStreamCapUnit)0xff;
  pRVar5[4] = (RawStreamCapUnit)0x53;
  pRVar7 = pRVar5 + 10;
  pRVar4 = this + 0xa49;
  do {
    pRVar3 = pRVar4 + 4;
    *(undefined4 *)pRVar7 = *(undefined4 *)pRVar4;
    pRVar7 = pRVar7 + 4;
    pRVar4 = pRVar3;
  } while (pRVar3 != this + 0xa69);
  *(undefined4 *)(pRVar5 + 0x2a) = 0;
  *(undefined4 *)(pRVar5 + 0x2e) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(pRVar5 + 0x32) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(pRVar5 + 0x36) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(pRVar5 + 0x3a) = 0;
  *(undefined4 *)(pRVar5 + 0x3e) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(pRVar5 + 0x42) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(pRVar5 + 0x46) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar2 = XCam::V4l2BufferProxy::get_v4l2_buf();
  *(undefined4 *)(pRVar5 + 0x4a) = *(undefined4 *)(iVar2 + 0x2c);
  *(undefined2 *)(pRVar5 + 0x4e) = *(undefined2 *)(this + 0xb8);
  *(undefined2 *)(pRVar5 + 0x50) = *(undefined2 *)(this + 0xbc);
  pRVar5[0x52] = (RawStreamCapUnit)0x0;
  pRVar5[0x53] = (RawStreamCapUnit)0x0;
  iVar2 = *(int *)(this + 0x68);
  if (iVar2 - 0x21U < 2) {
    pRVar5[0x54] = (RawStreamCapUnit)0x3;
    rkraw_append_buf((uchar *)pRVar6,0xff03,param_1);
    rkraw_append_buf((uchar *)(pRVar5 + 0x7d),0xff04,param_2);
    rkraw_append_buf((uchar *)(pRVar5 + 0x9f),0xff05,param_3);
    pRVar7 = pRVar5 + 0xc1;
  }
  else if (iVar2 - 0x11U < 2) {
    pRVar5[0x54] = (RawStreamCapUnit)0x2;
    rkraw_append_buf((uchar *)pRVar6,0xff03,param_1);
    rkraw_append_buf((uchar *)(pRVar5 + 0x7d),0xff04,param_2);
    pRVar7 = pRVar5 + 0x9f;
  }
  else {
    pRVar7 = pRVar6;
    if (iVar2 == 0) {
      pRVar5[0x54] = (RawStreamCapUnit)0x1;
      pRVar7 = pRVar5 + 0x7d;
      rkraw_append_buf((uchar *)pRVar6,0xff02,param_1);
    }
  }
  *(undefined2 *)pRVar7 = 0xff;
  if (*(code **)(this + 4) != (code *)0x0) {
    (**(code **)(this + 4))(pRVar5,pRVar7 + (2 - (int)pRVar5));
  }
  return 0;
}



/* ===== XCam::SmartPtr<XCam::V4l2BufferProxy>::release @ 00020168 size=128 ===== */

/* XCam::SmartPtr<XCam::V4l2BufferProxy>::release() */

void __thiscall
XCam::SmartPtr<XCam::V4l2BufferProxy>::release(SmartPtr<XCam::V4l2BufferProxy> *this)

{
  int iVar1;
  
  if (*(int *)this == 0) {
    return;
  }
  iVar1 = std::__atomic_base<unsigned_int>::operator--
                    ((__atomic_base<unsigned_int> *)(*(int *)(this + 4) + 4));
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)(this + 4) + 8))();
    if ((iVar1 == 0) && (*(int **)(this + 4) != (int *)0x0)) {
      (**(code **)(**(int **)(this + 4) + 4))();
    }
    if (*(int **)this != (int *)0x0) {
      (**(code **)(**(int **)this + 4))();
    }
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}



/* ===== XCam::SmartPtr<XCam::V4l2BufferProxy>::operator= @ 000201e8 size=76 ===== */

/* XCam::SmartPtr<XCam::V4l2BufferProxy>::TEMPNAMEPLACEHOLDERVALUE(XCam::SmartPtr<XCam::V4l2BufferProxy>
   const&) */

SmartPtr<XCam::V4l2BufferProxy> * __thiscall
XCam::SmartPtr<XCam::V4l2BufferProxy>::operator=
          (SmartPtr<XCam::V4l2BufferProxy> *this,SmartPtr *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  release(this);
  if (*(int *)param_1 != 0) {
    iVar1 = *(int *)(param_1 + 4);
    *(int *)this = *(int *)param_1;
    if (iVar1 == 0) {
      uVar2 = FUN_0001f7c8();
      *(undefined4 *)(this + 4) = uVar2;
    }
    else {
      *(int *)(this + 4) = iVar1;
      std::__atomic_base<unsigned_int>::operator++((__atomic_base<unsigned_int> *)(iVar1 + 4));
    }
  }
  return this;
}



/* ===== XCam::SafeList<XCam::V4l2BufferProxy>::~SafeList @ 00020234 size=84 ===== */

/* XCam::SafeList<XCam::V4l2BufferProxy>::~SafeList() */

SafeList<XCam::V4l2BufferProxy> * __thiscall
XCam::SafeList<XCam::V4l2BufferProxy>::~SafeList(SafeList<XCam::V4l2BufferProxy> *this)

{
  SafeList<XCam::V4l2BufferProxy> *pSVar1;
  SafeList<XCam::V4l2BufferProxy> *pSVar2;
  
  if (this[0x60] != (SafeList<XCam::V4l2BufferProxy>)0x0) {
    pthread_cond_destroy((pthread_cond_t *)(this + 0x30));
  }
  Mutex::~Mutex((Mutex *)(this + 0xc));
  pSVar1 = *(SafeList<XCam::V4l2BufferProxy> **)this;
  while (this != pSVar1) {
    pSVar2 = *(SafeList<XCam::V4l2BufferProxy> **)pSVar1;
    SmartPtr<XCam::V4l2BufferProxy>::release((SmartPtr<XCam::V4l2BufferProxy> *)(pSVar1 + 8));
    operator_delete(pSVar1);
    pSVar1 = pSVar2;
  }
  return this;
}



/* ===== XCam::SafeList<XCam::V4l2BufferProxy>::clear @ 00020288 size=124 ===== */

/* XCam::SafeList<XCam::V4l2BufferProxy>::clear() */

void __thiscall XCam::SafeList<XCam::V4l2BufferProxy>::clear(SafeList<XCam::V4l2BufferProxy> *this)

{
  SafeList<XCam::V4l2BufferProxy> *pSVar1;
  SafeList<XCam::V4l2BufferProxy> *pSVar2;
  int local_18;
  SafeList<XCam::V4l2BufferProxy> *local_14;
  
  local_18 = *(int *)(DAT_00020304 + 0x20298 + DAT_00020308) + 8;
  local_14 = this + 0xc;
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x10));
  pSVar1 = *(SafeList<XCam::V4l2BufferProxy> **)this;
  while (pSVar1 != this) {
    pSVar2 = *(SafeList<XCam::V4l2BufferProxy> **)pSVar1;
    *(int *)(this + 8) = *(int *)(this + 8) + -1;
    std::__detail::_List_node_base::_M_unhook();
    SmartPtr<XCam::V4l2BufferProxy>::release((SmartPtr<XCam::V4l2BufferProxy> *)(pSVar1 + 8));
    operator_delete(pSVar1);
    pSVar1 = pSVar2;
  }
  SmartLock::~SmartLock((SmartLock *)&local_18);
  return;
}



/* ===== RkRawStream::RawStreamCapUnit::stop @ 0002030c size=212 ===== */

/* RkRawStream::RawStreamCapUnit::stop() */

undefined4 __thiscall RkRawStream::RawStreamCapUnit::stop(RawStreamCapUnit *this)

{
  int iVar1;
  SafeList<XCam::V4l2BufferProxy> *pSVar2;
  
  for (iVar1 = 0; iVar1 < *(int *)(this + 0x6c); iVar1 = iVar1 + 1) {
    (**(code **)(**(int **)(this + iVar1 * 8 + 0x48) + 0x18))();
  }
  pSVar2 = (SafeList<XCam::V4l2BufferProxy> *)(this + 0x188);
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x98));
  for (iVar1 = 0; iVar1 < *(int *)(this + 0x6c); iVar1 = iVar1 + 1) {
    XCam::SafeList<XCam::V4l2BufferProxy>::clear(pSVar2);
    pSVar2 = pSVar2 + 0x70;
  }
  pSVar2 = (SafeList<XCam::V4l2BufferProxy> *)(this + 0x2d8);
  for (iVar1 = 0; iVar1 < *(int *)(this + 0x6c); iVar1 = iVar1 + 1) {
    XCam::SafeList<XCam::V4l2BufferProxy>::clear(pSVar2);
    pSVar2 = pSVar2 + 0x70;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x98));
  for (iVar1 = 0; iVar1 < *(int *)(this + 0x6c); iVar1 = iVar1 + 1) {
    (**(code **)(**(int **)(this + iVar1 * 8 + 0x48) + 0x1c))();
  }
  *(undefined4 *)(this + 0x180) = 4;
  return 0;
}



/* ===== RkRawStream::RawStreamCapUnit::release_buffer @ 000203e0 size=168 ===== */

/* RkRawStream::RawStreamCapUnit::release_buffer() */

undefined4 __thiscall RkRawStream::RawStreamCapUnit::release_buffer(RawStreamCapUnit *this)

{
  SafeList<XCam::V4l2BufferProxy> *pSVar1;
  int iVar2;
  
  pSVar1 = (SafeList<XCam::V4l2BufferProxy> *)(this + 0x188);
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x98));
  for (iVar2 = 0; iVar2 < *(int *)(this + 0x6c); iVar2 = iVar2 + 1) {
    XCam::SafeList<XCam::V4l2BufferProxy>::clear(pSVar1);
    pSVar1 = pSVar1 + 0x70;
  }
  pSVar1 = (SafeList<XCam::V4l2BufferProxy> *)(this + 0x2d8);
  for (iVar2 = 0; iVar2 < *(int *)(this + 0x6c); iVar2 = iVar2 + 1) {
    XCam::SafeList<XCam::V4l2BufferProxy>::clear(pSVar1);
    pSVar1 = pSVar1 + 0x70;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x98));
  for (iVar2 = 0; iVar2 < *(int *)(this + 0x6c); iVar2 = iVar2 + 1) {
    (**(code **)(**(int **)(this + iVar2 * 8 + 0x48) + 0x24))();
  }
  *(undefined4 *)(this + 0x180) = 4;
  return 0;
}



/* ===== XCam::SmartPtr<XCam::V4l2Device>::release @ 00020488 size=128 ===== */

/* XCam::SmartPtr<XCam::V4l2Device>::release() */

void __thiscall XCam::SmartPtr<XCam::V4l2Device>::release(SmartPtr<XCam::V4l2Device> *this)

{
  int iVar1;
  
  if (*(int *)this == 0) {
    return;
  }
  iVar1 = std::__atomic_base<unsigned_int>::operator--
                    ((__atomic_base<unsigned_int> *)(*(int *)(this + 4) + 4));
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)(this + 4) + 8))();
    if ((iVar1 == 0) && (*(int **)(this + 4) != (int *)0x0)) {
      (**(code **)(**(int **)(this + 4) + 4))();
    }
    if (*(int **)this != (int *)0x0) {
      (**(code **)(**(int **)this + 4))();
    }
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}



/* ===== XCam::SmartPtr<XCam::V4l2Device>::operator= @ 00020508 size=44 ===== */

/* XCam::SmartPtr<XCam::V4l2Device>::TEMPNAMEPLACEHOLDERVALUE(XCam::V4l2Device*) */

SmartPtr<XCam::V4l2Device> * __thiscall
XCam::SmartPtr<XCam::V4l2Device>::operator=(SmartPtr<XCam::V4l2Device> *this,V4l2Device *param_1)

{
  undefined4 uVar1;
  
  release(this);
  if (param_1 != (V4l2Device *)0x0) {
    *(V4l2Device **)this = param_1;
    uVar1 = FUN_0001f7c8();
    *(undefined4 *)(this + 4) = uVar1;
  }
  return this;
}



/* ===== XCam::SmartPtr<XCam::V4l2Device>::operator= @ 00020534 size=76 ===== */

/* XCam::SmartPtr<XCam::V4l2Device>::TEMPNAMEPLACEHOLDERVALUE(XCam::SmartPtr<XCam::V4l2Device>
   const&) */

SmartPtr<XCam::V4l2Device> * __thiscall
XCam::SmartPtr<XCam::V4l2Device>::operator=(SmartPtr<XCam::V4l2Device> *this,SmartPtr *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  release(this);
  if (*(int *)param_1 != 0) {
    iVar1 = *(int *)(param_1 + 4);
    *(int *)this = *(int *)param_1;
    if (iVar1 == 0) {
      uVar2 = FUN_0001f7c8();
      *(undefined4 *)(this + 4) = uVar2;
    }
    else {
      *(int *)(this + 4) = iVar1;
      std::__atomic_base<unsigned_int>::operator++((__atomic_base<unsigned_int> *)(iVar1 + 4));
    }
  }
  return this;
}



/* ===== XCam::SmartPtr<RkRawStream::RKStream>::release @ 00020580 size=128 ===== */

/* XCam::SmartPtr<RkRawStream::RKStream>::release() */

void __thiscall
XCam::SmartPtr<RkRawStream::RKStream>::release(SmartPtr<RkRawStream::RKStream> *this)

{
  int iVar1;
  
  if (*(int *)this == 0) {
    return;
  }
  iVar1 = std::__atomic_base<unsigned_int>::operator--
                    ((__atomic_base<unsigned_int> *)(*(int *)(this + 4) + 4));
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)(this + 4) + 8))();
    if ((iVar1 == 0) && (*(int **)(this + 4) != (int *)0x0)) {
      (**(code **)(**(int **)(this + 4) + 4))();
    }
    if (*(int **)this != (int *)0x0) {
      (**(code **)(**(int **)this + 4))();
    }
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}



/* ===== XCam::SmartPtr<XCam::V4l2SubDevice>::release @ 00020600 size=128 ===== */

/* XCam::SmartPtr<XCam::V4l2SubDevice>::release() */

void __thiscall XCam::SmartPtr<XCam::V4l2SubDevice>::release(SmartPtr<XCam::V4l2SubDevice> *this)

{
  int iVar1;
  
  if (*(int *)this == 0) {
    return;
  }
  iVar1 = std::__atomic_base<unsigned_int>::operator--
                    ((__atomic_base<unsigned_int> *)(*(int *)(this + 4) + 4));
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)(this + 4) + 8))();
    if ((iVar1 == 0) && (*(int **)(this + 4) != (int *)0x0)) {
      (**(code **)(**(int **)(this + 4) + 4))();
    }
    if (*(int **)this != (int *)0x0) {
      (**(code **)(**(int **)this + 4))();
    }
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}



/* ===== RkRawStream::RawStreamCapUnit::RawStreamCapUnit @ 00020680 size=1132 ===== */

/* RkRawStream::RawStreamCapUnit::RawStreamCapUnit(rk_sensor_full_info_t const*) */

RawStreamCapUnit * __thiscall
RkRawStream::RawStreamCapUnit::RawStreamCapUnit
          (RawStreamCapUnit *this,rk_sensor_full_info_t *param_1)

{
  rk_sensor_full_info_t rVar1;
  V4l2Device *pVVar2;
  int *piVar3;
  RKRawStream *pRVar4;
  undefined4 uVar5;
  V4l2SubDevice *this_00;
  int iVar6;
  int iVar7;
  SmartPtr<XCam::V4l2Device> *this_01;
  char *pcVar8;
  RawStreamCapUnit *local_50;
  undefined4 local_30;
  int local_2c;
  
  iVar7 = DAT_00020bcc + 0x20690;
  iVar6 = *(int *)(iVar7 + DAT_00020bd0);
  *(undefined4 *)(this + 4) = 0;
  *(int *)this = iVar6 + 8;
  iVar6 = DAT_00020bd4;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  iVar6 = *(int *)(iVar7 + iVar6);
  this[0x90] = (RawStreamCapUnit)0x1;
  iVar6 = iVar6 + 8;
  *(int *)(this + 0x74) = iVar6;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x78),(pthread_mutexattr_t *)0x0);
  *(int *)(this + 0x94) = iVar6;
  this[0xb0] = (RawStreamCapUnit)0x1;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x98),(pthread_mutexattr_t *)0x0);
  *(undefined4 *)(this + 0x180) = 0;
  XCam::SafeList<XCam::V4l2BufferProxy>::SafeList((SafeList<XCam::V4l2BufferProxy> *)(this + 0x188))
  ;
  XCam::SafeList<XCam::V4l2BufferProxy>::SafeList((SafeList<XCam::V4l2BufferProxy> *)(this + 0x1f8))
  ;
  XCam::SafeList<XCam::V4l2BufferProxy>::SafeList((SafeList<XCam::V4l2BufferProxy> *)(this + 0x268))
  ;
  XCam::SafeList<XCam::V4l2BufferProxy>::SafeList((SafeList<XCam::V4l2BufferProxy> *)(this + 0x2d8))
  ;
  XCam::SafeList<XCam::V4l2BufferProxy>::SafeList((SafeList<XCam::V4l2BufferProxy> *)(this + 0x348))
  ;
  XCam::SafeList<XCam::V4l2BufferProxy>::SafeList((SafeList<XCam::V4l2BufferProxy> *)(this + 0x3b8))
  ;
  *(undefined4 *)(this + 0xa6c) = 1;
  rVar1 = param_1[0x154];
  strncpy((char *)(this + 0xa49),*(char **)param_1,0x20);
  if (*(char *)(*(int *)(param_1 + 0x148) + 0x1b4) != '\0') {
    if (rVar1 == (rk_sensor_full_info_t)0x0) {
      if (param_1[0x156] == (rk_sensor_full_info_t)0x0) {
        pVVar2 = operator_new(0x134);
        XCam::V4l2Device::V4l2Device(pVVar2,(char *)(*(int *)(param_1 + 0x14c) + 0x24));
      }
      else if (*(char *)(*(int *)(param_1 + 0x14c) + 0x224) == '\0') {
        pVVar2 = operator_new(0x134);
        XCam::V4l2Device::V4l2Device(pVVar2,(char *)(*(int *)(param_1 + 0x14c) + 0x124));
      }
      else {
        pVVar2 = operator_new(0x134);
        XCam::V4l2Device::V4l2Device(pVVar2,(char *)(*(int *)(param_1 + 0x14c) + 0x224));
      }
    }
    else {
      pVVar2 = operator_new(0x134);
      XCam::V4l2Device::V4l2Device(pVVar2,(char *)(*(int *)(param_1 + 0x148) + 0x114));
    }
    XCam::SmartPtr<XCam::V4l2Device>::operator=((SmartPtr<XCam::V4l2Device> *)(this + 8),pVVar2);
    (**(code **)(**(int **)(this + 8) + 8))(*(int **)(this + 8),0);
    XCam::V4l2Device::set_mem_type(*(V4l2Device **)(this + 8),*(undefined4 *)(this + 0xa6c));
  }
  if (*(char *)(*(int *)(param_1 + 0x148) + 0x174) != '\0') {
    if (rVar1 == (rk_sensor_full_info_t)0x0) {
      if (param_1[0x156] == (rk_sensor_full_info_t)0x0) {
        pVVar2 = operator_new(0x134);
        XCam::V4l2Device::V4l2Device(pVVar2,(char *)(*(int *)(param_1 + 0x14c) + 0x44));
        goto LAB_000208ec;
      }
    }
    else {
      pVVar2 = operator_new(0x134);
      XCam::V4l2Device::V4l2Device(pVVar2,(char *)(*(int *)(param_1 + 0x148) + 0xd4));
LAB_000208ec:
      XCam::SmartPtr<XCam::V4l2Device>::operator=
                ((SmartPtr<XCam::V4l2Device> *)(this + 0x10),pVVar2);
    }
    piVar3 = *(int **)(this + 0x10);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3,0);
      XCam::V4l2Device::set_mem_type(*(V4l2Device **)(this + 0x10),*(undefined4 *)(this + 0xa6c));
    }
  }
  if (*(char *)(*(int *)(param_1 + 0x148) + 0x194) == '\0') goto LAB_000209b0;
  if (rVar1 == (rk_sensor_full_info_t)0x0) {
    if (param_1[0x156] == (rk_sensor_full_info_t)0x0) {
      pVVar2 = operator_new(0x134);
      XCam::V4l2Device::V4l2Device(pVVar2,(char *)(*(int *)(param_1 + 0x14c) + 100));
      goto LAB_0002097c;
    }
  }
  else {
    pVVar2 = operator_new(0x134);
    XCam::V4l2Device::V4l2Device(pVVar2,(char *)(*(int *)(param_1 + 0x148) + 0xf4));
LAB_0002097c:
    XCam::SmartPtr<XCam::V4l2Device>::operator=((SmartPtr<XCam::V4l2Device> *)(this + 0x18),pVVar2);
  }
  piVar3 = *(int **)(this + 0x18);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3,0);
    XCam::V4l2Device::set_mem_type(*(V4l2Device **)(this + 0x18),*(undefined4 *)(this + 0xa6c));
  }
LAB_000209b0:
  this_01 = (SmartPtr<XCam::V4l2Device> *)(this + 0x24);
  iVar6 = 0;
  local_50 = this + 0x3c;
  do {
    if (*(V4l2Device **)(this_01 + -0x1c) != (V4l2Device *)0x0) {
      XCam::V4l2Device::set_buffer_count(*(V4l2Device **)(this_01 + -0x1c),5);
    }
    if (*(V4l2Device **)(this_01 + -0x1c) != (V4l2Device *)0x0) {
      XCam::V4l2Device::set_buf_sync(*(V4l2Device **)(this_01 + -0x1c),true);
    }
    XCam::SmartPtr<XCam::V4l2Device>::operator=(this_01,(SmartPtr *)(this_01 + -0x1c));
    *(int *)local_50 = iVar6;
    local_2c = *(int *)(this_01 + -0x18);
    local_30 = *(undefined4 *)(this_01 + -0x1c);
    if (local_2c != 0) {
      std::__atomic_base<unsigned_int>::operator++((__atomic_base<unsigned_int> *)(local_2c + 4));
    }
    pRVar4 = operator_new(0x28);
    RKRawStream::RKRawStream(pRVar4,&local_30,iVar6,9);
    XCam::SmartPtr<RkRawStream::RKStream>::release
              ((SmartPtr<RkRawStream::RKStream> *)(this_01 + 0x24));
    *(RKRawStream **)(this_01 + 0x24) = pRVar4;
    uVar5 = FUN_0001f7c8();
    *(undefined4 *)(this_01 + 0x28) = uVar5;
    XCam::SmartPtr<XCam::V4l2Device>::release((SmartPtr<XCam::V4l2Device> *)&local_30);
    (**(code **)(**(int **)(this_01 + 0x24) + 0x30))(*(int **)(this_01 + 0x24),this);
    iVar6 = iVar6 + 1;
    this_01 = this_01 + 8;
    local_50 = local_50 + 4;
  } while (iVar6 != 3);
  pcVar8 = *(char **)(param_1 + 0x18);
  this_00 = operator_new(0x134);
  XCam::V4l2SubDevice::V4l2SubDevice(this_00,pcVar8);
  XCam::SmartPtr<XCam::V4l2SubDevice>::release((SmartPtr<XCam::V4l2SubDevice> *)(this + 0x60));
  *(V4l2SubDevice **)(this + 0x60) = this_00;
  uVar5 = FUN_0001f7c8();
  *(undefined4 *)(this + 100) = uVar5;
  (**(code **)(**(int **)(this + 0x60) + 8))(*(int **)(this + 0x60),0);
  *(undefined4 *)(this + 0x180) = 1;
  this[0xa69] = *(RawStreamCapUnit *)(*(int *)(param_1 + 0x148) + 0x10);
  return this;
}



/* ===== RkRawStream::RawStreamCapUnit::~RawStreamCapUnit @ 00020bd8 size=192 ===== */

/* RkRawStream::RawStreamCapUnit::~RawStreamCapUnit() */

RawStreamCapUnit * __thiscall
RkRawStream::RawStreamCapUnit::~RawStreamCapUnit(RawStreamCapUnit *this)

{
  *(int *)this = *(int *)(DAT_00020c98 + 0x20be8 + DAT_00020c9c) + 8;
  *(undefined4 *)(this + 0x180) = 0;
  XCam::SafeList<XCam::V4l2BufferProxy>::~SafeList
            ((SafeList<XCam::V4l2BufferProxy> *)(this + 0x3b8));
  XCam::SafeList<XCam::V4l2BufferProxy>::~SafeList
            ((SafeList<XCam::V4l2BufferProxy> *)(this + 0x348));
  XCam::SafeList<XCam::V4l2BufferProxy>::~SafeList
            ((SafeList<XCam::V4l2BufferProxy> *)(this + 0x2d8));
  XCam::SafeList<XCam::V4l2BufferProxy>::~SafeList
            ((SafeList<XCam::V4l2BufferProxy> *)(this + 0x268));
  XCam::SafeList<XCam::V4l2BufferProxy>::~SafeList
            ((SafeList<XCam::V4l2BufferProxy> *)(this + 0x1f8));
  XCam::SafeList<XCam::V4l2BufferProxy>::~SafeList
            ((SafeList<XCam::V4l2BufferProxy> *)(this + 0x188));
  XCam::Mutex::~Mutex((Mutex *)(this + 0x94));
  XCam::Mutex::~Mutex((Mutex *)(this + 0x74));
  XCam::SmartPtr<XCam::V4l2SubDevice>::release((SmartPtr<XCam::V4l2SubDevice> *)(this + 0x60));
  XCam::SmartPtr<RkRawStream::RKStream>::release((SmartPtr<RkRawStream::RKStream> *)(this + 0x58));
  XCam::SmartPtr<RkRawStream::RKStream>::release((SmartPtr<RkRawStream::RKStream> *)(this + 0x50));
  XCam::SmartPtr<RkRawStream::RKStream>::release((SmartPtr<RkRawStream::RKStream> *)(this + 0x48));
  XCam::SmartPtr<XCam::V4l2Device>::release((SmartPtr<XCam::V4l2Device> *)(this + 0x34));
  XCam::SmartPtr<XCam::V4l2Device>::release((SmartPtr<XCam::V4l2Device> *)(this + 0x2c));
  XCam::SmartPtr<XCam::V4l2Device>::release((SmartPtr<XCam::V4l2Device> *)(this + 0x24));
  XCam::SmartPtr<XCam::V4l2Device>::release((SmartPtr<XCam::V4l2Device> *)(this + 0x18));
  XCam::SmartPtr<XCam::V4l2Device>::release((SmartPtr<XCam::V4l2Device> *)(this + 0x10));
  XCam::SmartPtr<XCam::V4l2Device>::release((SmartPtr<XCam::V4l2Device> *)(this + 8));
  return this;
}



/* ===== RkRawStream::RawStreamCapUnit::~RawStreamCapUnit @ 00020ca0 size=32 ===== */

/* RkRawStream::RawStreamCapUnit::~RawStreamCapUnit() */

RawStreamCapUnit * __thiscall
RkRawStream::RawStreamCapUnit::~RawStreamCapUnit(RawStreamCapUnit *this)

{
  ~RawStreamCapUnit(this);
  operator_delete(this,0xa70);
  return this;
}



/* ===== RkRawStream::RawStreamCapUnit::RawStreamCapUnit @ 00020cc0 size=804 ===== */

/* RkRawStream::RawStreamCapUnit::RawStreamCapUnit(char*, char*, char*) */

RawStreamCapUnit * __thiscall
RkRawStream::RawStreamCapUnit::RawStreamCapUnit
          (RawStreamCapUnit *this,char *param_1,char *param_2,char *param_3)

{
  V4l2Device *pVVar1;
  RKRawStream *pRVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  SmartPtr<XCam::V4l2Device> *this_00;
  RawStreamCapUnit *pRVar6;
  undefined4 local_30;
  int local_2c;
  
  iVar5 = DAT_000210ac + 0x20ce0;
  iVar4 = *(int *)(iVar5 + DAT_000210b0);
  *(undefined4 *)(this + 4) = 0;
  *(int *)this = iVar4 + 8;
  iVar4 = DAT_000210b4;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  iVar4 = *(int *)(iVar5 + iVar4);
  this[0x90] = (RawStreamCapUnit)0x1;
  iVar4 = iVar4 + 8;
  *(int *)(this + 0x74) = iVar4;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x78),(pthread_mutexattr_t *)0x0);
  *(int *)(this + 0x94) = iVar4;
  this[0xb0] = (RawStreamCapUnit)0x1;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x98),(pthread_mutexattr_t *)0x0);
  *(undefined4 *)(this + 0x180) = 0;
  XCam::SafeList<XCam::V4l2BufferProxy>::SafeList((SafeList<XCam::V4l2BufferProxy> *)(this + 0x188))
  ;
  XCam::SafeList<XCam::V4l2BufferProxy>::SafeList((SafeList<XCam::V4l2BufferProxy> *)(this + 0x1f8))
  ;
  XCam::SafeList<XCam::V4l2BufferProxy>::SafeList((SafeList<XCam::V4l2BufferProxy> *)(this + 0x268))
  ;
  XCam::SafeList<XCam::V4l2BufferProxy>::SafeList((SafeList<XCam::V4l2BufferProxy> *)(this + 0x2d8))
  ;
  XCam::SafeList<XCam::V4l2BufferProxy>::SafeList((SafeList<XCam::V4l2BufferProxy> *)(this + 0x348))
  ;
  XCam::SafeList<XCam::V4l2BufferProxy>::SafeList((SafeList<XCam::V4l2BufferProxy> *)(this + 0x3b8))
  ;
  *(undefined4 *)(this + 0xa6c) = 1;
  if (param_1 != (char *)0x0) {
    pVVar1 = operator_new(0x134);
    XCam::V4l2Device::V4l2Device(pVVar1,param_1);
    XCam::SmartPtr<XCam::V4l2Device>::operator=((SmartPtr<XCam::V4l2Device> *)(this + 8),pVVar1);
    (**(code **)(**(int **)(this + 8) + 8))(*(int **)(this + 8),0);
    XCam::V4l2Device::set_mem_type(*(V4l2Device **)(this + 8),*(undefined4 *)(this + 0xa6c));
    *(int *)(this + 0x6c) = *(int *)(this + 0x6c) + 1;
  }
  if (param_2 != (char *)0x0) {
    pVVar1 = operator_new(0x134);
    XCam::V4l2Device::V4l2Device(pVVar1,param_2);
    XCam::SmartPtr<XCam::V4l2Device>::operator=((SmartPtr<XCam::V4l2Device> *)(this + 0x10),pVVar1);
    (**(code **)(**(int **)(this + 0x10) + 8))(*(int **)(this + 0x10),0);
    XCam::V4l2Device::set_mem_type(*(V4l2Device **)(this + 0x10),*(undefined4 *)(this + 0xa6c));
    *(int *)(this + 0x6c) = *(int *)(this + 0x6c) + 1;
  }
  if (param_3 != (char *)0x0) {
    pVVar1 = operator_new(0x134);
    XCam::V4l2Device::V4l2Device(pVVar1,param_3);
    XCam::SmartPtr<XCam::V4l2Device>::operator=((SmartPtr<XCam::V4l2Device> *)(this + 0x18),pVVar1);
    (**(code **)(**(int **)(this + 0x18) + 8))(*(int **)(this + 0x18),0);
    XCam::V4l2Device::set_mem_type(*(V4l2Device **)(this + 0x18),*(undefined4 *)(this + 0xa6c));
    *(int *)(this + 0x6c) = *(int *)(this + 0x6c) + 1;
  }
  this_00 = (SmartPtr<XCam::V4l2Device> *)(this + 0x24);
  pRVar6 = this + 0x3c;
  for (iVar4 = 0; iVar4 < *(int *)(this + 0x6c); iVar4 = iVar4 + 1) {
    if (*(V4l2Device **)(this_00 + -0x1c) != (V4l2Device *)0x0) {
      XCam::V4l2Device::set_buffer_count(*(V4l2Device **)(this_00 + -0x1c),5);
    }
    if (*(V4l2Device **)(this_00 + -0x1c) != (V4l2Device *)0x0) {
      XCam::V4l2Device::set_buf_sync(*(V4l2Device **)(this_00 + -0x1c),true);
    }
    XCam::SmartPtr<XCam::V4l2Device>::operator=(this_00,(SmartPtr *)(this_00 + -0x1c));
    *(int *)pRVar6 = iVar4;
    local_2c = *(int *)(this_00 + -0x18);
    local_30 = *(undefined4 *)(this_00 + -0x1c);
    if (local_2c != 0) {
      std::__atomic_base<unsigned_int>::operator++((__atomic_base<unsigned_int> *)(local_2c + 4));
    }
    pRVar2 = operator_new(0x28);
    RKRawStream::RKRawStream(pRVar2,&local_30,iVar4,9);
    XCam::SmartPtr<RkRawStream::RKStream>::release
              ((SmartPtr<RkRawStream::RKStream> *)(this_00 + 0x24));
    *(RKRawStream **)(this_00 + 0x24) = pRVar2;
    uVar3 = FUN_0001f7c8();
    *(undefined4 *)(this_00 + 0x28) = uVar3;
    XCam::SmartPtr<XCam::V4l2Device>::release((SmartPtr<XCam::V4l2Device> *)&local_30);
    (**(code **)(**(int **)(this_00 + 0x24) + 0x30))(*(int **)(this_00 + 0x24),this);
    this_00 = this_00 + 8;
    pRVar6 = pRVar6 + 4;
  }
  XCam::SmartPtr<XCam::V4l2SubDevice>::release((SmartPtr<XCam::V4l2SubDevice> *)(this + 0x60));
  *(undefined4 *)(this + 0x180) = 1;
  return this;
}



/* ===== std::__cxx11::list<XCam::SmartPtr<XCam::V4l2BufferProxy>,std::allocator<XCam::SmartPtr<XCam::V4l2BufferProxy>>>::erase @ 000210b8 size=56 ===== */

/* std::__cxx11::list<XCam::SmartPtr<XCam::V4l2BufferProxy>,
   std::allocator<XCam::SmartPtr<XCam::V4l2BufferProxy> >
   >::erase(std::_List_const_iterator<XCam::SmartPtr<XCam::V4l2BufferProxy> >) */

undefined4 __thiscall
std::__cxx11::
list<XCam::SmartPtr<XCam::V4l2BufferProxy>,std::allocator<XCam::SmartPtr<XCam::V4l2BufferProxy>>>::
erase(list<XCam::SmartPtr<XCam::V4l2BufferProxy>,std::allocator<XCam::SmartPtr<XCam::V4l2BufferProxy>>>
      *this,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *(int *)(this + 8) = *(int *)(this + 8) + -1;
  std::__detail::_List_node_base::_M_unhook();
  XCam::SmartPtr<XCam::V4l2BufferProxy>::release((SmartPtr<XCam::V4l2BufferProxy> *)(param_2 + 2));
  operator_delete(param_2);
  return uVar1;
}



/* ===== XCam::SafeList<XCam::V4l2BufferProxy>::erase @ 000210f0 size=128 ===== */

/* XCam::SafeList<XCam::V4l2BufferProxy>::erase(XCam::SmartPtr<XCam::V4l2BufferProxy> const&) */

undefined4 XCam::SafeList<XCam::V4l2BufferProxy>::erase(SmartPtr *param_1)

{
  int *in_r1;
  SmartPtr *pSVar1;
  undefined4 uVar2;
  int local_18;
  SmartPtr *local_14;
  
  local_18 = *(int *)(DAT_00021170 + 0x21100 + DAT_00021174) + 8;
  local_14 = param_1 + 0xc;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x10));
  pSVar1 = *(SmartPtr **)param_1;
  do {
    if (pSVar1 == param_1) {
      uVar2 = 0;
LAB_0002114c:
      SmartLock::~SmartLock((SmartLock *)&local_18);
      return uVar2;
    }
    if (*(int *)(pSVar1 + 8) == *in_r1) {
      uVar2 = 1;
      std::__cxx11::
      list<XCam::SmartPtr<XCam::V4l2BufferProxy>,std::allocator<XCam::SmartPtr<XCam::V4l2BufferProxy>>>
      ::erase((list<XCam::SmartPtr<XCam::V4l2BufferProxy>,std::allocator<XCam::SmartPtr<XCam::V4l2BufferProxy>>>
               *)param_1);
      goto LAB_0002114c;
    }
    pSVar1 = *(SmartPtr **)pSVar1;
  } while( true );
}



/* ===== RkRawStream::RawStreamCapUnit::sync_raw_buf @ 00021178 size=504 ===== */

/* RkRawStream::RawStreamCapUnit::sync_raw_buf(XCam::SmartPtr<XCam::V4l2BufferProxy>&,
   XCam::SmartPtr<XCam::V4l2BufferProxy>&, XCam::SmartPtr<XCam::V4l2BufferProxy>&) */

undefined4 __thiscall
RkRawStream::RawStreamCapUnit::sync_raw_buf
          (RawStreamCapUnit *this,SmartPtr *param_1,SmartPtr *param_2,SmartPtr *param_3)

{
  int iVar1;
  int iVar2;
  SmartPtr *pSVar3;
  SmartPtr *this_00;
  int iVar4;
  int iVar5;
  RawStreamCapUnit *pRVar6;
  SmartPtr<XCam::V4l2BufferProxy> aSStack_30 [12];
  
  pSVar3 = (SmartPtr *)(this + 0x188);
  this_00 = pSVar3;
  for (iVar5 = 0; iVar5 < *(int *)(this + 0x6c); iVar5 = iVar5 + 1) {
    iVar1 = XCam::SafeList<XCam::V4l2BufferProxy>::is_empty
                      ((SafeList<XCam::V4l2BufferProxy> *)this_00);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    this_00 = (SmartPtr *)(this_00 + 0x70);
  }
  XCam::SafeList<XCam::V4l2BufferProxy>::front();
  XCam::SmartPtr<XCam::V4l2BufferProxy>::operator=
            ((SmartPtr<XCam::V4l2BufferProxy> *)param_3,(SmartPtr *)aSStack_30);
  XCam::SmartPtr<XCam::V4l2BufferProxy>::release(aSStack_30);
  if (*(int *)param_3 == 0) {
    iVar5 = -1;
  }
  else {
    iVar5 = XCam::V4l2BufferProxy::get_v4l2_buf();
    iVar5 = *(int *)(iVar5 + 0x2c);
  }
  pRVar6 = this + 0x1f8;
  XCam::SafeList<XCam::V4l2BufferProxy>::front();
  XCam::SmartPtr<XCam::V4l2BufferProxy>::operator=
            ((SmartPtr<XCam::V4l2BufferProxy> *)param_2,(SmartPtr *)aSStack_30);
  XCam::SmartPtr<XCam::V4l2BufferProxy>::release(aSStack_30);
  if (*(int *)param_2 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = XCam::V4l2BufferProxy::get_v4l2_buf();
    iVar1 = *(int *)(iVar1 + 0x2c);
  }
  XCam::SafeList<XCam::V4l2BufferProxy>::front();
  XCam::SmartPtr<XCam::V4l2BufferProxy>::operator=
            ((SmartPtr<XCam::V4l2BufferProxy> *)param_1,(SmartPtr *)aSStack_30);
  XCam::SmartPtr<XCam::V4l2BufferProxy>::release(aSStack_30);
  if (*(int *)param_1 == 0) {
    return 0xffffffff;
  }
  iVar2 = XCam::V4l2BufferProxy::get_v4l2_buf();
  iVar4 = *(int *)(this + 0x68);
  iVar2 = *(int *)(iVar2 + 0x2c);
  if (iVar4 - 0x21U < 2) {
    if (*(int *)param_2 == 0) {
      return 0;
    }
    if (*(int *)param_3 == 0) {
      return 0;
    }
    if (*(int *)param_1 == 0) {
      return 0;
    }
    if (iVar5 != iVar2 || iVar1 != iVar2) {
      return 0;
    }
    XCam::SafeList<XCam::V4l2BufferProxy>::erase(pSVar3);
    XCam::SafeList<XCam::V4l2BufferProxy>::erase((SmartPtr *)pRVar6);
    pRVar6 = this + 0x268;
  }
  else {
    if (1 < iVar4 - 0x11U) {
      if (iVar4 != 0) {
        return 0;
      }
      XCam::SafeList<XCam::V4l2BufferProxy>::erase(pSVar3);
      return 0;
    }
    if (*(int *)param_2 == 0) {
      return 0;
    }
    if (*(int *)param_1 == 0 || iVar1 != iVar2) {
      return 0;
    }
    XCam::SafeList<XCam::V4l2BufferProxy>::erase(pSVar3);
  }
  XCam::SafeList<XCam::V4l2BufferProxy>::erase((SmartPtr *)pRVar6);
  return 0;
}



/* ===== RkRawStream::RawStreamCapUnit::poll_buffer_ready @ 00021394 size=328 ===== */

/* RkRawStream::RawStreamCapUnit::poll_buffer_ready(XCam::SmartPtr<XCam::V4l2BufferProxy>&, int) */

undefined4 __thiscall
RkRawStream::RawStreamCapUnit::poll_buffer_ready
          (RawStreamCapUnit *this,SmartPtr *param_1,int param_2)

{
  int iVar1;
  SmartPtr *pSVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  timespec tStack_28;
  
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x98));
  XCam::SafeList<XCam::V4l2BufferProxy>::push((SmartPtr *)(this + param_2 * 0x70 + 0x188));
  iVar1 = sync_raw_buf(this,(SmartPtr *)&local_40,(SmartPtr *)&local_38,(SmartPtr *)&local_30);
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x98));
  if ((iVar1 == 0) && (*(int *)(this + 4) != 0)) {
    this[0x20] = (RawStreamCapUnit)0x0;
    do_capture_callback(this,(SmartPtr *)&local_40,(SmartPtr *)&local_38,(SmartPtr *)&local_30);
    clock_gettime(1,&tStack_28);
    if (this[0x20] != (RawStreamCapUnit)0x0) {
      iVar1 = *(int *)(this + 0x68);
      pSVar2 = (SmartPtr *)(this + 0x2d8);
      if (0x10 < iVar1) {
        if (iVar1 < 0x13) {
          XCam::SafeList<XCam::V4l2BufferProxy>::push(pSVar2);
          pSVar2 = (SmartPtr *)(this + 0x348);
        }
        else if (iVar1 - 0x21U < 2) {
          XCam::SafeList<XCam::V4l2BufferProxy>::push(pSVar2);
          XCam::SafeList<XCam::V4l2BufferProxy>::push((SmartPtr *)(this + 0x348));
          pSVar2 = (SmartPtr *)(this + 0x3b8);
        }
      }
      XCam::SafeList<XCam::V4l2BufferProxy>::push(pSVar2);
    }
  }
  XCam::SmartPtr<XCam::V4l2BufferProxy>::release((SmartPtr<XCam::V4l2BufferProxy> *)&local_30);
  XCam::SmartPtr<XCam::V4l2BufferProxy>::release((SmartPtr<XCam::V4l2BufferProxy> *)&local_38);
  XCam::SmartPtr<XCam::V4l2BufferProxy>::release((SmartPtr<XCam::V4l2BufferProxy> *)&local_40);
  return 0;
}



/* ===== RkRawStream::RawStreamCapUnit::release_user_taked_buf @ 000214f8 size=348 ===== */

/* RkRawStream::RawStreamCapUnit::release_user_taked_buf(int) */

void __thiscall
RkRawStream::RawStreamCapUnit::release_user_taked_buf(RawStreamCapUnit *this,int param_1)

{
  int iVar1;
  SafeList<XCam::V4l2BufferProxy> *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  RawStreamCapUnit *local_34;
  timespec tStack_30;
  
  iVar2 = param_1 * 0x70;
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x98));
  iVar3 = iVar2 + 0x2d8;
  this_00 = (SafeList<XCam::V4l2BufferProxy> *)(this + iVar3);
  iVar4 = DAT_00021660 + 0x21530;
  iVar1 = XCam::SafeList<XCam::V4l2BufferProxy>::is_empty(this_00);
  if (iVar1 != 0) goto LAB_00021614;
  local_38 = *(int *)(iVar4 + DAT_00021664) + 8;
  local_34 = this + iVar2 + 0x2e4;
  pthread_mutex_lock((pthread_mutex_t *)(this_00 + 0x10));
  iVar1 = 0;
  while ((this[iVar2 + 0x340] == (RawStreamCapUnit)0x0 &&
         (*(SafeList<XCam::V4l2BufferProxy> **)this_00 == this_00 && iVar1 == 0))) {
    iVar1 = pthread_cond_wait((pthread_cond_t *)(this_00 + 0x30),(pthread_mutex_t *)(this_00 + 0x10)
                             );
  }
  if (this[param_1 * 0x70 + 0x340] == (RawStreamCapUnit)0x0) {
    if (this_00 == *(SafeList<XCam::V4l2BufferProxy> **)(this + iVar3)) {
      if (iVar1 != 0x6e) {
        xcam_print_log(0x18,0xff,1,DAT_00021668 + 0x215d4,iVar1);
      }
      goto LAB_000215ec;
    }
    XCam::SmartPtr<XCam::V4l2BufferProxy>::SmartPtr
              ((SmartPtr<XCam::V4l2BufferProxy> *)&tStack_30,
               (SmartPtr *)(*(SafeList<XCam::V4l2BufferProxy> **)(this + iVar3) + 8));
    std::__cxx11::
    list<XCam::SmartPtr<XCam::V4l2BufferProxy>,std::allocator<XCam::SmartPtr<XCam::V4l2BufferProxy>>>
    ::erase((list<XCam::SmartPtr<XCam::V4l2BufferProxy>,std::allocator<XCam::SmartPtr<XCam::V4l2BufferProxy>>>
             *)this_00,*(undefined4 *)(this + iVar3));
    XCam::SmartPtr<XCam::V4l2BufferProxy>::SmartPtr
              ((SmartPtr<XCam::V4l2BufferProxy> *)&local_40,(SmartPtr *)&tStack_30);
    XCam::SmartPtr<XCam::V4l2BufferProxy>::release((SmartPtr<XCam::V4l2BufferProxy> *)&tStack_30);
  }
  else {
LAB_000215ec:
    local_40 = 0;
    local_3c = 0;
  }
  XCam::SmartLock::~SmartLock((SmartLock *)&local_38);
  clock_gettime(1,&tStack_30);
  XCam::SmartPtr<XCam::V4l2BufferProxy>::release((SmartPtr<XCam::V4l2BufferProxy> *)&local_40);
LAB_00021614:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x98));
  return;
}



/* ===== RkRawStream::RawStreamProcUnit::poll_buffer_ready @ 0002166c size=8 ===== */

/* RkRawStream::RawStreamProcUnit::poll_buffer_ready(XCam::SmartPtr<XCam::VideoBuffer>&, int) */

undefined4 RkRawStream::RawStreamProcUnit::poll_buffer_ready(SmartPtr *param_1,int param_2)

{
  return 0xffffffff;
}



/* ===== RkRawStream::RawStreamProcUnit::poll_buffer_failed @ 00021674 size=8 ===== */

/* RkRawStream::RawStreamProcUnit::poll_buffer_failed(long long, char const*) */

undefined8 RkRawStream::RawStreamProcUnit::poll_buffer_failed(longlong param_1,char *param_2)

{
  return 0xffffffff;
}



/* ===== RkRawStream::RawStreamProcUnit::poll_buffer_ready @ 0002167c size=8 ===== */

/* RkRawStream::RawStreamProcUnit::poll_buffer_ready(XCam::SmartPtr<XCam::VideoBuffer>&) */

undefined4 RkRawStream::RawStreamProcUnit::poll_buffer_ready(SmartPtr *param_1)

{
  return 0xffffffff;
}



/* ===== RkRawStream::RawStreamProcUnit::poll_event_ready @ 00021684 size=8 ===== */

/* RkRawStream::RawStreamProcUnit::poll_event_ready(unsigned int, int) */

undefined4 RkRawStream::RawStreamProcUnit::poll_event_ready(uint param_1,int param_2)

{
  return 0xffffffff;
}



/* ===== RkRawStream::RawStreamProcUnit::poll_event_failed @ 0002168c size=8 ===== */

/* RkRawStream::RawStreamProcUnit::poll_event_failed(long long, char const*) */

undefined8 RkRawStream::RawStreamProcUnit::poll_event_failed(longlong param_1,char *param_2)

{
  return 0xffffffff;
}



/* ===== RkRawStream::RawProcThread::~RawProcThread @ 00021694 size=44 ===== */

/* RkRawStream::RawProcThread::~RawProcThread() */

RawProcThread * __thiscall RkRawStream::RawProcThread::~RawProcThread(RawProcThread *this)

{
  *(int *)this = *(int *)(DAT_000216c0 + 0x216a4 + DAT_000216c4) + 8;
  XCam::Thread::~Thread((Thread *)this);
  return this;
}



/* ===== RkRawStream::RawProcThread::~RawProcThread @ 000216c8 size=32 ===== */

/* RkRawStream::RawProcThread::~RawProcThread() */

RawProcThread * __thiscall RkRawStream::RawProcThread::~RawProcThread(RawProcThread *this)

{
  ~RawProcThread(this);
  operator_delete(this,0x78);
  return this;
}



/* ===== RkRawStream::RawStreamProcUnit::poll_buffer_ready @ 000216e8 size=140 ===== */

/* RkRawStream::RawStreamProcUnit::poll_buffer_ready(XCam::SmartPtr<XCam::V4l2BufferProxy>&, int) */

undefined4 __thiscall
RkRawStream::RawStreamProcUnit::poll_buffer_ready
          (RawStreamProcUnit *this,SmartPtr *param_1,int param_2)

{
  int *piVar1;
  int local_20;
  RawStreamProcUnit *local_1c;
  int iStack_18;
  
  local_20 = *(int *)(DAT_00021780 + 0x21700 + DAT_00021784) + 8;
  local_1c = this + 0x8c;
  iStack_18 = param_2;
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x90));
  piVar1 = *(int **)(this + 0x5b0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))(piVar1,param_1,param_2);
  }
  if (*(code **)(this + 0x1c) != (code *)0x0) {
    (**(code **)(this + 0x1c))(param_2);
  }
  XCam::SmartLock::~SmartLock((SmartLock *)&local_20);
  return 0;
}



/* ===== FUN_00021788 @ 00021788 size=48 ===== */

void FUN_00021788(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = operator_new(8);
  iVar2 = DAT_000217b8 + 0x217a4;
  piVar1[1] = 1;
  *piVar1 = *(int *)(iVar2 + DAT_000217bc) + 8;
  return;
}



/* ===== XCam::Cond::~Cond @ 000217c0 size=32 ===== */

/* XCam::Cond::~Cond() */

Cond * __thiscall XCam::Cond::~Cond(Cond *this)

{
  if (this[0x30] != (Cond)0x0) {
    pthread_cond_destroy((pthread_cond_t *)this);
  }
  return this;
}



/* ===== RkRawStream::_parse_rk_rawdata @ 000217e0 size=872 ===== */

/* RkRawStream::_parse_rk_rawdata(void*, rkrawstream_rkraw2_t*) */

undefined4 RkRawStream::_parse_rk_rawdata(void *param_1,rkrawstream_rkraw2_t *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined2 *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int local_88;
  int local_84;
  int local_7c [5];
  undefined4 local_68;
  undefined4 uStack_64;
  int local_60 [5];
  undefined4 local_4c;
  undefined4 uStack_48;
  int local_44 [5];
  undefined4 local_30;
  undefined4 uStack_2c;
  
  if (param_1 == (void *)0x0 || param_2 == (rkrawstream_rkraw2_t *)0x0) {
    return 0xffffffff;
  }
  puVar7 = (undefined2 *)0x0;
  iVar9 = 0;
  local_88 = 0;
  local_84 = 0;
  piVar6 = (int *)0x0;
  piVar8 = (int *)0x0;
LAB_00021828:
  piVar4 = piVar8;
  piVar2 = piVar6;
  iVar5 = local_88;
  iVar1 = local_84;
  switch(*(undefined2 *)param_1) {
  case 0xff00:
    param_1 = (void *)((int)param_1 + 2);
    memset(local_7c,0,0x54);
    memset(param_2,0,0x59);
    memset(param_2 + 0xc0,0,0x54);
    goto LAB_00021828;
  case 0xff01:
    memcpy(param_2,param_1,0x59);
    iVar5 = *(int *)(param_2 + 2);
    goto LAB_00021ae4;
  case 0xff02:
    iVar10 = *(int *)((int)param_1 + 2);
    if (iVar10 != 0x1c) goto LAB_00021a30;
    piVar2 = local_7c;
    piVar4 = (int *)((int)param_1 + 6);
    do {
      piVar3 = piVar4 + 2;
      iVar5 = piVar4[1];
      *piVar2 = *piVar4;
      piVar2[1] = iVar5;
      piVar2 = piVar2 + 2;
      piVar4 = piVar3;
    } while (piVar3 != (int *)((int)param_1 + 0x1e));
LAB_000219e4:
    *piVar2 = *piVar3;
    piVar2 = piVar6;
    piVar4 = piVar8;
    iVar5 = local_88;
    iVar1 = local_84;
    goto LAB_00021a38;
  case 0xff03:
    iVar10 = *(int *)((int)param_1 + 2);
    if (iVar10 == 0x1c) {
      piVar2 = local_7c;
      piVar4 = (int *)((int)param_1 + 6);
      do {
        piVar3 = piVar4 + 2;
        iVar5 = piVar4[1];
        *piVar2 = *piVar4;
        piVar2[1] = iVar5;
        piVar2 = piVar2 + 2;
        piVar4 = piVar3;
      } while (piVar3 != (int *)((int)param_1 + 0x1e));
      goto LAB_000219e4;
    }
LAB_00021a30:
    iVar9 = iVar10;
    puVar7 = (undefined2 *)((int)param_1 + 6);
    iVar10 = iVar9;
    goto LAB_00021a38;
  case 0xff04:
    iVar10 = *(int *)((int)param_1 + 2);
    piVar4 = (int *)((int)param_1 + 6);
    iVar5 = iVar10;
    if (iVar10 == 0x1c) {
      piVar2 = local_60;
      do {
        piVar3 = piVar4 + 2;
        iVar5 = piVar4[1];
        *piVar2 = *piVar4;
        piVar2[1] = iVar5;
        piVar2 = piVar2 + 2;
        piVar4 = piVar3;
      } while (piVar3 != (int *)((int)param_1 + 0x1e));
      goto LAB_000219e4;
    }
    goto LAB_00021a38;
  case 0xff05:
    iVar10 = *(int *)((int)param_1 + 2);
    piVar2 = (int *)((int)param_1 + 6);
    iVar1 = iVar10;
    if (iVar10 == 0x1c) {
      piVar2 = local_44;
      piVar4 = (int *)((int)param_1 + 6);
      do {
        piVar3 = piVar4 + 2;
        iVar5 = piVar4[1];
        *piVar2 = *piVar4;
        piVar2[1] = iVar5;
        piVar2 = piVar2 + 2;
        piVar4 = piVar3;
      } while (piVar3 != (int *)((int)param_1 + 0x1e));
      goto LAB_000219e4;
    }
LAB_00021a38:
    local_84 = iVar1;
    local_88 = iVar5;
    param_1 = (void *)((int)param_1 + iVar10 + 6);
    piVar6 = piVar2;
    piVar8 = piVar4;
    goto LAB_00021828;
  case 0xff06:
    memcpy(param_2 + 0xc0,param_1,0x54);
    iVar5 = *(int *)(param_2 + 0xc2);
    goto LAB_00021ae4;
  case 0xff07:
    break;
  case 0xff08:
    break;
  case 0xff09:
    break;
  case 0xff0a:
    break;
  case 0xff0b:
    break;
  default:
    goto LAB_0002186c;
  }
  iVar5 = *(int *)((int)param_1 + 2);
LAB_00021ae4:
  param_1 = (void *)((int)param_1 + iVar5 + 6);
  goto LAB_00021828;
LAB_0002186c:
  if (local_7c[1] != 0 || local_7c[3] != 0) {
    *(undefined4 *)(param_2 + 0x60) = 0;
    *(int *)(param_2 + 0x68) = local_7c[1];
    *(int *)(param_2 + 0x70) = local_7c[3];
    *(int *)(param_2 + 0x74) = local_7c[2];
    *(int *)(param_2 + 100) = local_7c[0];
    *(int *)(param_2 + 0x6c) = local_7c[4];
    *(undefined4 *)(param_2 + 0x78) = local_68;
    *(undefined4 *)(param_2 + 0x7c) = uStack_64;
  }
  if (puVar7 != (undefined2 *)0x0) {
    *(undefined4 *)(param_2 + 0x60) = 1;
    *(int *)(param_2 + 0x6c) = iVar9;
    *(undefined2 **)(param_2 + 0x70) = puVar7;
    *(int *)(param_2 + 0x74) = (int)puVar7 >> 0x1f;
  }
  if (local_60[1] != 0 || local_60[3] != 0) {
    *(undefined4 *)(param_2 + 0x80) = 0;
    *(int *)(param_2 + 0x88) = local_60[1];
    *(int *)(param_2 + 0x90) = local_60[3];
    *(int *)(param_2 + 0x94) = local_60[2];
    *(int *)(param_2 + 0x84) = local_60[0];
    *(int *)(param_2 + 0x8c) = local_60[4];
    *(undefined4 *)(param_2 + 0x98) = local_4c;
    *(undefined4 *)(param_2 + 0x9c) = uStack_48;
  }
  if (piVar8 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x80) = 1;
    *(int **)(param_2 + 0x90) = piVar8;
    *(int *)(param_2 + 0x94) = (int)piVar8 >> 0x1f;
    *(int *)(param_2 + 0x8c) = local_88;
  }
  if (local_44[1] != 0 || local_44[3] != 0) {
    *(undefined4 *)(param_2 + 0xa0) = 0;
    *(int *)(param_2 + 0xa8) = local_44[1];
    *(int *)(param_2 + 0xb0) = local_44[3];
    *(int *)(param_2 + 0xb4) = local_44[2];
    *(int *)(param_2 + 0xa4) = local_44[0];
    *(int *)(param_2 + 0xac) = local_44[4];
    *(undefined4 *)(param_2 + 0xb8) = local_30;
    *(undefined4 *)(param_2 + 0xbc) = uStack_2c;
  }
  if (piVar6 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0xa0) = 1;
    *(int **)(param_2 + 0xb0) = piVar6;
    *(int *)(param_2 + 0xb4) = (int)piVar6 >> 0x1f;
    *(int *)(param_2 + 0xac) = local_84;
  }
  return 0;
}



/* ===== RkRawStream::RawStreamProcUnit::prepare @ 00021b48 size=260 ===== */

/* RkRawStream::RawStreamProcUnit::prepare(int, unsigned char, unsigned char) */

int __thiscall
RkRawStream::RawStreamProcUnit::prepare
          (RawStreamProcUnit *this,int param_1,uchar param_2,uchar param_3)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  RawStreamProcUnit *pRVar5;
  int iVar6;
  
  iVar6 = DAT_00021c4c;
  uVar2 = (uint)param_2;
  *(uint *)(this + 0x5b4) = uVar2;
  xcam_print_log(0x22,0xff,1,iVar6 + 0x21b6c,param_1,uVar2);
  uVar4 = 0;
  iVar6 = 0;
  iVar3 = DAT_00021c50 + 0x21ba4;
  pRVar5 = this;
  do {
    if ((param_1 >> (uVar4 & 0xff) & 1U) != 0) {
      if (uVar2 != 0) {
        XCam::V4l2Device::set_mem_type
                  (*(V4l2Device **)(pRVar5 + 0x44),*(undefined4 *)(this + 0x5b4));
      }
      if (param_3 != 0) {
        XCam::V4l2Device::set_buffer_count(*(V4l2Device **)(pRVar5 + 0x44),(uint)param_3);
      }
      iVar6 = XCam::V4l2Device::prepare();
      if (iVar6 < 0) {
        xcam_print_log(0x22,0xff,1,iVar3,uVar4,iVar6);
      }
      RKStream::set_device_prepared(*(RKStream **)(pRVar5 + 0x68),true);
      if (this[0x5c1] != (RawStreamProcUnit)0x0) {
        pvVar1 = malloc(*(int *)(this + 0x5c8) * *(int *)(this + 0x5c4) * 2);
        *(void **)(this + uVar4 * 4 + 0x5cc) = pvVar1;
      }
    }
    uVar4 = uVar4 + 1;
    pRVar5 = pRVar5 + 8;
  } while (uVar4 != 3);
  return iVar6;
}



/* ===== RkRawStream::RawStreamProcUnit::set_working_mode @ 00021c54 size=52 ===== */

/* RkRawStream::RawStreamProcUnit::set_working_mode(int) */

void __thiscall
RkRawStream::RawStreamProcUnit::set_working_mode(RawStreamProcUnit *this,int param_1)

{
  undefined4 uVar1;
  
  *(int *)(this + 0x80) = param_1;
  if (0x10 < param_1) {
    if (param_1 < 0x13) {
      uVar1 = 2;
      goto LAB_00021c80;
    }
    if (param_1 - 0x21U < 2) {
      uVar1 = 3;
      goto LAB_00021c80;
    }
  }
  uVar1 = 1;
LAB_00021c80:
  *(undefined4 *)(this + 0x84) = uVar1;
  return;
}



/* ===== RkRawStream::RawStreamProcUnit::set_rx_format @ 00021c88 size=224 ===== */

/* RkRawStream::RawStreamProcUnit::set_rx_format(unsigned int, unsigned int, unsigned int, int) */

void __thiscall
RkRawStream::RawStreamProcUnit::set_rx_format
          (RawStreamProcUnit *this,uint param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  RawStreamProcUnit *pRVar5;
  int local_f8;
  undefined1 auStack_f4 [12];
  uint local_e8;
  
  iVar1 = DAT_00021d68;
  memset(auStack_f4,0,0xcc);
  uVar2 = DAT_00021d6c;
  pRVar5 = this + 0x18;
  do {
    piVar3 = *(int **)(this + 0x44);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x10))(piVar3,auStack_f4);
      pixFmt2Bpp(local_e8);
      local_f8 = param_4;
      iVar4 = (**(code **)(**(int **)(this + 0x44) + 0x30))(*(int **)(this + 0x44),uVar2,&local_f8);
      if (iVar4 != 0) {
        xcam_print_log(0x22,0xff,1,iVar1 + 0x21cc8);
      }
      if (*(V4l2Device **)(this + 0x44) != (V4l2Device *)0x0) {
        XCam::V4l2Device::set_format(*(V4l2Device **)(this + 0x44),param_1,param_2,local_e8,1,0);
      }
    }
    this = this + 8;
  } while (this != pRVar5);
  return;
}



/* ===== RkRawStream::RawStreamProcUnit::setup_pipeline_fmt @ 00021d70 size=400 ===== */

/* RkRawStream::RawStreamProcUnit::setup_pipeline_fmt(unsigned int, unsigned int) */

void __thiscall
RkRawStream::RawStreamProcUnit::setup_pipeline_fmt
          (RawStreamProcUnit *this,uint param_1,uint param_2)

{
  int iVar1;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  uint uStack_f0;
  uint local_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined1 auStack_c4 [4];
  uint local_c0;
  uint local_bc;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_68;
  uint local_64;
  
  memset(auStack_c4,0,0x54);
  local_c8 = 1;
  iVar1 = (**(code **)(**(int **)(this + 0x508) + 0x60))(*(int **)(this + 0x508),&local_c8);
  if ((iVar1 == 0) &&
     (local_c0 = param_1, local_bc = param_2,
     iVar1 = (**(code **)(**(int **)(this + 0x508) + 0x5c))(*(int **)(this + 0x508),&local_c8),
     iVar1 == 0)) {
    uStack_100 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_fc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_f8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_108 = 1;
    local_104 = 0;
    local_d4 = 0;
    local_f4 = 0;
    local_dc = 0;
    uStack_d0 = 0;
    local_e4 = 0;
    uStack_f0 = param_1;
    local_ec = param_2;
    uStack_e8 = uStack_100;
    uStack_e0 = uStack_100;
    uStack_d8 = uStack_100;
    uStack_cc = uStack_100;
    iVar1 = (**(code **)(**(int **)(this + 0x508) + 100))(*(int **)(this + 0x508),&local_108);
    if (iVar1 == 0) {
      local_104 = 2;
      iVar1 = (**(code **)(**(int **)(this + 0x508) + 100))(*(int **)(this + 0x508),&local_108);
      if (iVar1 == 0) {
        memset(&local_68,0,0x50);
        local_70 = 1;
        local_6c = 2;
        iVar1 = (**(code **)(**(int **)(this + 0x508) + 0x60))(*(int **)(this + 0x508),&local_70);
        if (iVar1 == 0) {
          local_68 = uStack_f0;
          local_64 = local_ec;
          iVar1 = (**(code **)(**(int **)(this + 0x508) + 0x5c))(*(int **)(this + 0x508),&local_70);
          if (iVar1 == 0) {
            return;
          }
          iVar1 = (int)&DAT_00021f00 + DAT_00021f10;
        }
        else {
          iVar1 = DAT_00021f0c + 0x21ec8;
        }
      }
      else {
        iVar1 = DAT_00021f08 + 0x21e8c;
      }
    }
    else {
      iVar1 = DAT_00021f04 + 0x21e5c;
    }
  }
  else {
    iVar1 = DAT_00021f00 + 0x21dcc;
  }
  xcam_print_log(0x22,0xff,1,iVar1);
  return;
}



/* ===== RkRawStream::RawStreamProcUnit::match_sof_timestamp_map @ 00021f14 size=144 ===== */

/* WARNING: Removing unreachable block (ram,0x00021f34) */
/* WARNING: Removing unreachable block (ram,0x00021f58) */
/* RkRawStream::RawStreamProcUnit::match_sof_timestamp_map(int, unsigned long long&) */

undefined4 __thiscall
RkRawStream::RawStreamProcUnit::match_sof_timestamp_map
          (RawStreamProcUnit *this,int param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  RawStreamProcUnit *pRVar3;
  RawStreamProcUnit *pRVar4;
  RawStreamProcUnit *pRVar5;
  
  pRVar3 = *(RawStreamProcUnit **)(this + 0xfc);
  uVar1 = param_1 & ~(param_1 >> 0x1f);
  pRVar5 = this + 0xf8;
  if (pRVar3 == (RawStreamProcUnit *)0x0) {
    return 0xffffffff;
  }
  do {
    if (*(int *)(pRVar3 + 0x10) < (int)uVar1) {
      pRVar4 = *(RawStreamProcUnit **)(pRVar3 + 0xc);
    }
    else {
      pRVar4 = *(RawStreamProcUnit **)(pRVar3 + 8);
      pRVar5 = pRVar3;
    }
    pRVar3 = pRVar4;
  } while (pRVar4 != (RawStreamProcUnit *)0x0);
  if ((this + 0xf8 != pRVar5) && (*(int *)(pRVar5 + 0x10) <= (int)uVar1)) {
    uVar2 = *(undefined4 *)(pRVar5 + 0x1c);
    *(undefined4 *)param_2 = *(undefined4 *)(pRVar5 + 0x18);
    *(undefined4 *)((int)param_2 + 4) = uVar2;
    return 0;
  }
  return 0xffffffff;
}



/* ===== FUN_00021fa4 @ 00021fa4 size=116 ===== */

void FUN_00021fa4(int *param_1)

{
  int iVar1;
  
  iVar1 = std::__atomic_base<unsigned_int>::operator--
                    ((__atomic_base<unsigned_int> *)(param_1[1] + 4));
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*(int *)param_1[1] + 8))();
    if ((iVar1 == 0) && ((int *)param_1[1] != (int *)0x0)) {
      (**(code **)(*(int *)param_1[1] + 4))();
    }
    if ((int *)*param_1 != (int *)0x0) {
      (**(code **)(*(int *)*param_1 + 4))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* ===== XCam::SafeList<RkRawStream::EmptyClass>::push @ 00022018 size=152 ===== */

/* XCam::SafeList<RkRawStream::EmptyClass>::push(XCam::SmartPtr<RkRawStream::EmptyClass> const&) */

undefined4 XCam::SafeList<RkRawStream::EmptyClass>::push(SmartPtr *param_1)

{
  _List_node_base *p_Var1;
  int iVar2;
  undefined4 *in_r1;
  int local_20;
  SmartPtr *local_1c;
  
  local_20 = *(int *)(DAT_000220bc + 0x22028 + DAT_000220c0) + 8;
  local_1c = param_1 + 0xc;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x10));
  p_Var1 = operator_new(0x10);
  *(undefined4 *)(p_Var1 + 8) = *in_r1;
  iVar2 = in_r1[1];
  *(int *)(p_Var1 + 0xc) = iVar2;
  if (iVar2 != 0) {
    std::__atomic_base<unsigned_int>::operator++((__atomic_base<unsigned_int> *)(iVar2 + 4));
  }
  std::__detail::_List_node_base::_M_hook(p_Var1);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  pthread_cond_signal((pthread_cond_t *)(param_1 + 0x30));
  SmartLock::~SmartLock((SmartLock *)&local_20);
  return 1;
}



/* ===== std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,int>,std::_Select1st<std::pair<unsigned_int_const,int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>::_M_erase @ 000220c4 size=52 ===== */

/* std::_Rb_tree<unsigned int, std::pair<unsigned int const, int>,
   std::_Select1st<std::pair<unsigned int const, int> >, std::less<unsigned int>,
   std::allocator<std::pair<unsigned int const, int> >
   >::_M_erase(std::_Rb_tree_node<std::pair<unsigned int const, int> >*) */

void __thiscall
std::
_Rb_tree<unsigned_int,std::pair<unsigned_int_const,int>,std::_Select1st<std::pair<unsigned_int_const,int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
::_M_erase(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,int>,std::_Select1st<std::pair<unsigned_int_const,int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
           *this,_Rb_tree_node *param_1)

{
  _Rb_tree_node *p_Var1;
  
  while (param_1 != (_Rb_tree_node *)0x0) {
    _M_erase(this,*(_Rb_tree_node **)(param_1 + 0xc));
    p_Var1 = *(_Rb_tree_node **)(param_1 + 8);
    operator_delete(param_1);
    param_1 = p_Var1;
  }
  return;
}



/* ===== std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,bool>,std::_Select1st<std::pair<unsigned_int_const,bool>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,bool>>>::_M_erase @ 000220f8 size=52 ===== */

/* std::_Rb_tree<unsigned int, std::pair<unsigned int const, bool>,
   std::_Select1st<std::pair<unsigned int const, bool> >, std::less<unsigned int>,
   std::allocator<std::pair<unsigned int const, bool> >
   >::_M_erase(std::_Rb_tree_node<std::pair<unsigned int const, bool> >*) */

void __thiscall
std::
_Rb_tree<unsigned_int,std::pair<unsigned_int_const,bool>,std::_Select1st<std::pair<unsigned_int_const,bool>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,bool>>>
::_M_erase(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,bool>,std::_Select1st<std::pair<unsigned_int_const,bool>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,bool>>>
           *this,_Rb_tree_node *param_1)

{
  _Rb_tree_node *p_Var1;
  
  while (param_1 != (_Rb_tree_node *)0x0) {
    _M_erase(this,*(_Rb_tree_node **)(param_1 + 0xc));
    p_Var1 = *(_Rb_tree_node **)(param_1 + 8);
    operator_delete(param_1);
    param_1 = p_Var1;
  }
  return;
}



/* ===== std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,bool>,std::_Select1st<std::pair<unsigned_int_const,bool>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,bool>>>::~_Rb_tree @ 0002212c size=24 ===== */

/* std::_Rb_tree<unsigned int, std::pair<unsigned int const, bool>,
   std::_Select1st<std::pair<unsigned int const, bool> >, std::less<unsigned int>,
   std::allocator<std::pair<unsigned int const, bool> > >::~_Rb_tree() */

_Rb_tree<unsigned_int,std::pair<unsigned_int_const,bool>,std::_Select1st<std::pair<unsigned_int_const,bool>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,bool>>>
* __thiscall
std::
_Rb_tree<unsigned_int,std::pair<unsigned_int_const,bool>,std::_Select1st<std::pair<unsigned_int_const,bool>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,bool>>>
::~_Rb_tree(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,bool>,std::_Select1st<std::pair<unsigned_int_const,bool>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,bool>>>
            *this)

{
  _M_erase(this,*(_Rb_tree_node **)(this + 8));
  return this;
}



/* ===== std::_Rb_tree<int,std::pair<int_const,unsigned_long_long>,std::_Select1st<std::pair<int_const,unsigned_long_long>>,std::less<int>,std::allocator<std::pair<int_const,unsigned_long_long>>>::_M_erase @ 00022144 size=52 ===== */

/* std::_Rb_tree<int, std::pair<int const, unsigned long long>, std::_Select1st<std::pair<int const,
   unsigned long long> >, std::less<int>, std::allocator<std::pair<int const, unsigned long long> >
   >::_M_erase(std::_Rb_tree_node<std::pair<int const, unsigned long long> >*) */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,unsigned_long_long>,std::_Select1st<std::pair<int_const,unsigned_long_long>>,std::less<int>,std::allocator<std::pair<int_const,unsigned_long_long>>>
::_M_erase(_Rb_tree<int,std::pair<int_const,unsigned_long_long>,std::_Select1st<std::pair<int_const,unsigned_long_long>>,std::less<int>,std::allocator<std::pair<int_const,unsigned_long_long>>>
           *this,_Rb_tree_node *param_1)

{
  _Rb_tree_node *p_Var1;
  
  while (param_1 != (_Rb_tree_node *)0x0) {
    _M_erase(this,*(_Rb_tree_node **)(param_1 + 0xc));
    p_Var1 = *(_Rb_tree_node **)(param_1 + 8);
    operator_delete(param_1);
    param_1 = p_Var1;
  }
  return;
}



/* ===== XCam::SmartPtr<RkRawStream::RawProcThread>::release @ 00022178 size=128 ===== */

/* XCam::SmartPtr<RkRawStream::RawProcThread>::release() */

void __thiscall
XCam::SmartPtr<RkRawStream::RawProcThread>::release(SmartPtr<RkRawStream::RawProcThread> *this)

{
  int iVar1;
  
  if (*(int *)this == 0) {
    return;
  }
  iVar1 = std::__atomic_base<unsigned_int>::operator--
                    ((__atomic_base<unsigned_int> *)(*(int *)(this + 4) + 4));
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)(this + 4) + 8))();
    if ((iVar1 == 0) && (*(int **)(this + 4) != (int *)0x0)) {
      (**(code **)(**(int **)(this + 4) + 4))();
    }
    if (*(int **)this != (int *)0x0) {
      (**(code **)(**(int **)this + 4))();
    }
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}



/* ===== XCam::SmartPtr<RkRawStream::EmptyClass>::release @ 000221f8 size=124 ===== */

/* XCam::SmartPtr<RkRawStream::EmptyClass>::release() */

void __thiscall
XCam::SmartPtr<RkRawStream::EmptyClass>::release(SmartPtr<RkRawStream::EmptyClass> *this)

{
  int iVar1;
  
  if (*(int *)this == 0) {
    return;
  }
  iVar1 = std::__atomic_base<unsigned_int>::operator--
                    ((__atomic_base<unsigned_int> *)(*(int *)(this + 4) + 4));
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)(this + 4) + 8))();
    if ((iVar1 == 0) && (*(int **)(this + 4) != (int *)0x0)) {
      (**(code **)(**(int **)(this + 4) + 4))();
    }
    if (*(void **)this != (void *)0x0) {
      operator_delete(*(void **)this,1);
    }
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}



/* ===== XCam::SafeList<RkRawStream::EmptyClass>::~SafeList @ 00022274 size=72 ===== */

/* XCam::SafeList<RkRawStream::EmptyClass>::~SafeList() */

SafeList<RkRawStream::EmptyClass> * __thiscall
XCam::SafeList<RkRawStream::EmptyClass>::~SafeList(SafeList<RkRawStream::EmptyClass> *this)

{
  SafeList<RkRawStream::EmptyClass> *pSVar1;
  SafeList<RkRawStream::EmptyClass> *pSVar2;
  
  Cond::~Cond((Cond *)(this + 0x30));
  Mutex::~Mutex((Mutex *)(this + 0xc));
  pSVar1 = *(SafeList<RkRawStream::EmptyClass> **)this;
  while (this != pSVar1) {
    pSVar2 = *(SafeList<RkRawStream::EmptyClass> **)pSVar1;
    SmartPtr<RkRawStream::EmptyClass>::release((SmartPtr<RkRawStream::EmptyClass> *)(pSVar1 + 8));
    operator_delete(pSVar1);
    pSVar1 = pSVar2;
  }
  return this;
}



/* ===== RkRawStream::RawStreamProcUnit::start @ 000222bc size=224 ===== */

/* RkRawStream::RawStreamProcUnit::start() */

void RkRawStream::RawStreamProcUnit::start(void)

{
  int in_r0;
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  int iStack_28;
  int iStack_24;
  
  iVar3 = DAT_0002239c + 0x222d8;
  for (iVar1 = 0; iVar1 < *(int *)(in_r0 + 0x84); iVar1 = iVar1 + 1) {
    (**(code **)(**(int **)(in_r0 + 0x68 + iVar1 * 8) + 8))();
  }
  iVar1 = *(int *)(iVar3 + DAT_000223a0) + 8;
  iStack_28 = iVar1;
  iStack_24 = in_r0 + 0x54c;
  pthread_mutex_lock((pthread_mutex_t *)(in_r0 + 0x550));
  *(undefined1 *)(in_r0 + 0x5a8) = 0;
  XCam::SmartLock::~SmartLock((SmartLock *)&iStack_28);
  iStack_28 = iVar1;
  iStack_24 = in_r0 + 0x54c;
  pthread_mutex_lock((pthread_mutex_t *)(in_r0 + 0x550));
  puVar2 = *(void **)(in_r0 + 0x540);
  while ((void *)(in_r0 + 0x540) != puVar2) {
    pvVar4 = (void *)*puVar2;
    *(int *)(in_r0 + 0x548) = *(int *)(in_r0 + 0x548) + -1;
    std::__detail::_List_node_base::_M_unhook();
    XCam::SmartPtr<RkRawStream::EmptyClass>::release
              ((SmartPtr<RkRawStream::EmptyClass> *)(puVar2 + 2));
    operator_delete(puVar2);
    puVar2 = pvVar4;
  }
  XCam::SmartLock::~SmartLock((SmartLock *)&iStack_28);
  XCam::Thread::start(*(Thread **)(in_r0 + 0x500));
  *(undefined4 *)(in_r0 + 0x5b8) = 0;
  *(undefined4 *)(in_r0 + 0x5bc) = 0;
  return;
}



/* ===== XCam::SmartPtr<RkRawStream::SimpleFdBuf>::release @ 000223a4 size=116 ===== */

/* XCam::SmartPtr<RkRawStream::SimpleFdBuf>::release() */

void __thiscall
XCam::SmartPtr<RkRawStream::SimpleFdBuf>::release(SmartPtr<RkRawStream::SimpleFdBuf> *this)

{
  int iVar1;
  
  if (*(int *)this == 0) {
    return;
  }
  iVar1 = std::__atomic_base<unsigned_int>::operator--
                    ((__atomic_base<unsigned_int> *)(*(int *)(this + 4) + 4));
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)(this + 4) + 8))();
    if ((iVar1 == 0) && (*(int **)(this + 4) != (int *)0x0)) {
      (**(code **)(**(int **)(this + 4) + 4))();
    }
    operator_delete(*(void **)this,0x20);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}



/* ===== XCam::SmartPtr<RkRawStream::SimpleFdBuf>::operator= @ 00022418 size=44 ===== */

/* XCam::SmartPtr<RkRawStream::SimpleFdBuf>::TEMPNAMEPLACEHOLDERVALUE(RkRawStream::SimpleFdBuf*) */

SmartPtr<RkRawStream::SimpleFdBuf> * __thiscall
XCam::SmartPtr<RkRawStream::SimpleFdBuf>::operator=
          (SmartPtr<RkRawStream::SimpleFdBuf> *this,SimpleFdBuf *param_1)

{
  undefined4 uVar1;
  
  release(this);
  if (param_1 != (SimpleFdBuf *)0x0) {
    *(SimpleFdBuf **)this = param_1;
    uVar1 = FUN_00021788();
    *(undefined4 *)(this + 4) = uVar1;
  }
  return this;
}



/* ===== XCam::SafeList<RkRawStream::SimpleFdBuf>::~SafeList @ 00022444 size=72 ===== */

/* XCam::SafeList<RkRawStream::SimpleFdBuf>::~SafeList() */

SafeList<RkRawStream::SimpleFdBuf> * __thiscall
XCam::SafeList<RkRawStream::SimpleFdBuf>::~SafeList(SafeList<RkRawStream::SimpleFdBuf> *this)

{
  SafeList<RkRawStream::SimpleFdBuf> *pSVar1;
  SafeList<RkRawStream::SimpleFdBuf> *pSVar2;
  
  Cond::~Cond((Cond *)(this + 0x30));
  Mutex::~Mutex((Mutex *)(this + 0xc));
  pSVar1 = *(SafeList<RkRawStream::SimpleFdBuf> **)this;
  while (this != pSVar1) {
    pSVar2 = *(SafeList<RkRawStream::SimpleFdBuf> **)pSVar1;
    SmartPtr<RkRawStream::SimpleFdBuf>::release((SmartPtr<RkRawStream::SimpleFdBuf> *)(pSVar1 + 8));
    operator_delete(pSVar1);
    pSVar1 = pSVar2;
  }
  return this;
}



/* ===== RkRawStream::RawStreamProcUnit::RawStreamProcUnit @ 0002248c size=1240 ===== */

/* RkRawStream::RawStreamProcUnit::RawStreamProcUnit(rk_sensor_full_info_t const*, unsigned char) */

RawStreamProcUnit * __thiscall
RkRawStream::RawStreamProcUnit::RawStreamProcUnit
          (RawStreamProcUnit *this,rk_sensor_full_info_t *param_1,uchar param_2)

{
  RawStreamProcUnit RVar1;
  Thread *this_00;
  undefined4 uVar2;
  V4l2Device *pVVar3;
  RKRawStream *pRVar4;
  V4l2SubDevice *this_01;
  int iVar5;
  RawStreamProcUnit *pRVar6;
  RawStreamProcUnit *pRVar7;
  int iVar8;
  undefined4 local_30;
  int local_2c;
  
  iVar8 = DAT_00022aa0 + 0x224ac;
  iVar5 = *(int *)(iVar8 + DAT_00022aa4);
  *(undefined4 *)(this + 4) = 0;
  *(int *)this = iVar5 + 8;
  iVar5 = DAT_00022aa8;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  this[0x88] = (RawStreamProcUnit)0x0;
  iVar5 = *(int *)(iVar8 + iVar5);
  this[0xa8] = (RawStreamProcUnit)0x1;
  iVar5 = iVar5 + 8;
  *(int *)(this + 0x8c) = iVar5;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x90),(pthread_mutexattr_t *)0x0);
  *(undefined4 *)(this + 0xb0) = 0;
  *(RawStreamProcUnit **)(this + 0xb8) = this + 0xb0;
  *(RawStreamProcUnit **)(this + 0xbc) = this + 0xb0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(RawStreamProcUnit **)(this + 0xd0) = this + 200;
  *(RawStreamProcUnit **)(this + 0xd4) = this + 200;
  *(undefined4 *)(this + 0xc0) = 0;
  *(RawStreamProcUnit **)(this + 0xe8) = this + 0xe0;
  *(RawStreamProcUnit **)(this + 0xec) = this + 0xe0;
  *(undefined4 *)(this + 200) = 0;
  *(RawStreamProcUnit **)(this + 0x100) = this + 0xf8;
  *(RawStreamProcUnit **)(this + 0x104) = this + 0xf8;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  XCam::SafeList<XCam::V4l2BufferProxy>::SafeList((SafeList<XCam::V4l2BufferProxy> *)(this + 0x110))
  ;
  XCam::SafeList<XCam::V4l2BufferProxy>::SafeList((SafeList<XCam::V4l2BufferProxy> *)(this + 0x180))
  ;
  XCam::SafeList<XCam::V4l2BufferProxy>::SafeList((SafeList<XCam::V4l2BufferProxy> *)(this + 0x1f0))
  ;
  XCam::SafeList<XCam::V4l2BufferProxy>::SafeList((SafeList<XCam::V4l2BufferProxy> *)(this + 0x260))
  ;
  XCam::SafeList<XCam::V4l2BufferProxy>::SafeList((SafeList<XCam::V4l2BufferProxy> *)(this + 0x2d0))
  ;
  XCam::SafeList<XCam::V4l2BufferProxy>::SafeList((SafeList<XCam::V4l2BufferProxy> *)(this + 0x340))
  ;
  pRVar6 = this + 0x3b0;
  do {
    *(undefined4 *)(pRVar6 + 8) = 0;
    *(int *)(pRVar6 + 0xc) = iVar5;
    pRVar6[0x28] = (RawStreamProcUnit)0x1;
    *(RawStreamProcUnit **)(pRVar6 + 4) = pRVar6;
    *(RawStreamProcUnit **)pRVar6 = pRVar6;
    pthread_mutex_init((pthread_mutex_t *)(pRVar6 + 0x10),(pthread_mutexattr_t *)0x0);
    pRVar6[0x60] = (RawStreamProcUnit)0x1;
    pRVar7 = pRVar6 + 0x70;
    pthread_cond_init((pthread_cond_t *)(pRVar6 + 0x30),(pthread_condattr_t *)0x0);
    pRVar6[0x68] = (RawStreamProcUnit)0x0;
    pRVar6 = pRVar7;
  } while (pRVar7 != this + 0x500);
  *(undefined4 *)(this + 0x500) = 0;
  *(undefined4 *)(this + 0x504) = 0;
  *(undefined4 *)(this + 0x508) = 0;
  *(undefined4 *)(this + 0x50c) = 0;
  *(undefined4 *)(this + 0x510) = 0;
  *(undefined4 *)(this + 0x514) = 0;
  this[0x518] = (RawStreamProcUnit)0x1;
  *(int *)(this + 0x51c) = iVar5;
  this[0x538] = (RawStreamProcUnit)0x1;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x520),(pthread_mutexattr_t *)0x0);
  *(RawStreamProcUnit **)(this + 0x544) = this + 0x540;
  *(RawStreamProcUnit **)(this + 0x540) = this + 0x540;
  *(undefined4 *)(this + 0x548) = 0;
  *(int *)(this + 0x54c) = iVar5;
  this[0x568] = (RawStreamProcUnit)0x1;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x550),(pthread_mutexattr_t *)0x0);
  this[0x5a0] = (RawStreamProcUnit)0x1;
  pthread_cond_init((pthread_cond_t *)(this + 0x570),(pthread_condattr_t *)0x0);
  this[0x5a8] = (RawStreamProcUnit)0x0;
  *(undefined4 *)(this + 0x5b4) = 4;
  this_00 = operator_new(0x78);
  XCam::Thread::Thread(this_00,(char *)(DAT_00022aac + 0x226d0));
  iVar5 = *(int *)(iVar8 + DAT_00022ab0);
  *(RawStreamProcUnit **)(this_00 + 0x74) = this;
  *(int *)this_00 = iVar5 + 8;
  XCam::SmartPtr<RkRawStream::RawProcThread>::release
            ((SmartPtr<RkRawStream::RawProcThread> *)(this + 0x500));
  *(Thread **)(this + 0x500) = this_00;
  uVar2 = FUN_00021788();
  *(undefined4 *)(this + 0x504) = uVar2;
  *(undefined4 *)(this + 0x5b0) = 0;
  this[0x5c1] = (RawStreamProcUnit)param_2;
  strncpy((char *)(this + 0x24),*(char **)param_1,0x20);
  if (*(char *)(*(int *)(param_1 + 0x148) + 0x1b4) != '\0') {
    pVVar3 = operator_new(0x134);
    XCam::V4l2Device::V4l2Device(pVVar3,(char *)(*(int *)(param_1 + 0x148) + 0x1b4));
    XCam::SmartPtr<XCam::V4l2Device>::operator=((SmartPtr<XCam::V4l2Device> *)(this + 0x44),pVVar3);
    (**(code **)(**(int **)(this + 0x44) + 8))(*(int **)(this + 0x44),0);
    XCam::V4l2Device::set_mem_type(*(V4l2Device **)(this + 0x44),*(undefined4 *)(this + 0x5b4));
  }
  if (*(char *)(*(int *)(param_1 + 0x148) + 0x174) != '\0') {
    pVVar3 = operator_new(0x134);
    XCam::V4l2Device::V4l2Device(pVVar3,(char *)(*(int *)(param_1 + 0x148) + 0x174));
    XCam::SmartPtr<XCam::V4l2Device>::operator=((SmartPtr<XCam::V4l2Device> *)(this + 0x4c),pVVar3);
    (**(code **)(**(int **)(this + 0x4c) + 8))(*(int **)(this + 0x4c),0);
    XCam::V4l2Device::set_mem_type(*(V4l2Device **)(this + 0x4c),*(undefined4 *)(this + 0x5b4));
  }
  if (*(char *)(*(int *)(param_1 + 0x148) + 0x194) != '\0') {
    pVVar3 = operator_new(0x134);
    XCam::V4l2Device::V4l2Device(pVVar3,(char *)(*(int *)(param_1 + 0x148) + 0x194));
    XCam::SmartPtr<XCam::V4l2Device>::operator=((SmartPtr<XCam::V4l2Device> *)(this + 0x54),pVVar3);
    (**(code **)(**(int **)(this + 0x54) + 8))(*(int **)(this + 0x54),0);
    XCam::V4l2Device::set_mem_type(*(V4l2Device **)(this + 0x54),*(undefined4 *)(this + 0x5b4));
  }
  iVar5 = 0;
  pRVar6 = this;
  pRVar7 = this + 0x5c;
  do {
    if (*(V4l2Device **)(pRVar6 + 0x44) != (V4l2Device *)0x0) {
      XCam::V4l2Device::set_buffer_count(*(V4l2Device **)(pRVar6 + 0x44),5);
    }
    if (*(V4l2Device **)(pRVar6 + 0x44) != (V4l2Device *)0x0) {
      XCam::V4l2Device::set_buf_sync(*(V4l2Device **)(pRVar6 + 0x44),true);
    }
    *(int *)pRVar7 = iVar5;
    local_2c = *(int *)(pRVar6 + 0x48);
    local_30 = *(undefined4 *)(pRVar6 + 0x44);
    if (local_2c != 0) {
      std::__atomic_base<unsigned_int>::operator++((__atomic_base<unsigned_int> *)(local_2c + 4));
    }
    pRVar4 = operator_new(0x28);
    RKRawStream::RKRawStream(pRVar4,&local_30,iVar5,10);
    XCam::SmartPtr<RkRawStream::RKStream>::release
              ((SmartPtr<RkRawStream::RKStream> *)(pRVar6 + 0x68));
    *(RKRawStream **)(pRVar6 + 0x68) = pRVar4;
    uVar2 = FUN_00021788();
    *(undefined4 *)(pRVar6 + 0x6c) = uVar2;
    XCam::SmartPtr<XCam::V4l2Device>::release((SmartPtr<XCam::V4l2Device> *)&local_30);
    (**(code **)(**(int **)(pRVar6 + 0x68) + 0x30))(*(int **)(pRVar6 + 0x68),this);
    iVar5 = iVar5 + 1;
    pRVar6 = pRVar6 + 8;
    pRVar7 = pRVar7 + 4;
  } while (iVar5 != 3);
  this_01 = operator_new(0x134);
  XCam::V4l2SubDevice::V4l2SubDevice(this_01,(char *)(*(int *)(param_1 + 0x148) + 0x34));
  XCam::SmartPtr<XCam::V4l2SubDevice>::release((SmartPtr<XCam::V4l2SubDevice> *)(this + 0x508));
  *(V4l2SubDevice **)(this + 0x508) = this_01;
  uVar2 = FUN_00021788();
  *(undefined4 *)(this + 0x50c) = uVar2;
  (**(code **)(**(int **)(this + 0x508) + 8))(*(int **)(this + 0x508),0);
  pVVar3 = operator_new(0x134);
  XCam::V4l2Device::V4l2Device(pVVar3,(char *)0x0);
  XCam::SmartPtr<XCam::V4l2Device>::operator=((SmartPtr<XCam::V4l2Device> *)(this + 0x510),pVVar3);
  *(undefined4 *)(this + 0x5b8) = 0;
  *(undefined4 *)(this + 0x5bc) = 0;
  RVar1 = *(RawStreamProcUnit *)(*(int *)(param_1 + 0x148) + 0x10);
  *(undefined4 *)(this + 0x5cc) = 0;
  *(undefined4 *)(this + 0x5d0) = 0;
  this[0x5c0] = RVar1;
  *(undefined4 *)(this + 0x5d4) = 0;
  return this;
}



/* ===== RkRawStream::RawStreamProcUnit::~RawStreamProcUnit @ 00022ab4 size=328 ===== */

/* RkRawStream::RawStreamProcUnit::~RawStreamProcUnit() */

RawStreamProcUnit * __thiscall
RkRawStream::RawStreamProcUnit::~RawStreamProcUnit(RawStreamProcUnit *this)

{
  *(int *)this = *(int *)(DAT_00022bfc + 0x22ac4 + DAT_00022c00) + 8;
  (**(code **)(**(int **)(this + 0x44) + 0xc))();
  (**(code **)(**(int **)(this + 0x4c) + 0xc))();
  (**(code **)(**(int **)(this + 0x54) + 0xc))();
  XCam::SafeList<RkRawStream::EmptyClass>::~SafeList
            ((SafeList<RkRawStream::EmptyClass> *)(this + 0x540));
  XCam::Mutex::~Mutex((Mutex *)(this + 0x51c));
  XCam::SmartPtr<XCam::V4l2Device>::release((SmartPtr<XCam::V4l2Device> *)(this + 0x510));
  XCam::SmartPtr<XCam::V4l2SubDevice>::release((SmartPtr<XCam::V4l2SubDevice> *)(this + 0x508));
  XCam::SmartPtr<RkRawStream::RawProcThread>::release
            ((SmartPtr<RkRawStream::RawProcThread> *)(this + 0x500));
  XCam::SafeList<RkRawStream::SimpleFdBuf>::~SafeList
            ((SafeList<RkRawStream::SimpleFdBuf> *)(this + 0x490));
  XCam::SafeList<RkRawStream::SimpleFdBuf>::~SafeList
            ((SafeList<RkRawStream::SimpleFdBuf> *)(this + 0x420));
  XCam::SafeList<RkRawStream::SimpleFdBuf>::~SafeList
            ((SafeList<RkRawStream::SimpleFdBuf> *)(this + 0x3b0));
  XCam::SafeList<XCam::V4l2BufferProxy>::~SafeList
            ((SafeList<XCam::V4l2BufferProxy> *)(this + 0x340));
  XCam::SafeList<XCam::V4l2BufferProxy>::~SafeList
            ((SafeList<XCam::V4l2BufferProxy> *)(this + 0x2d0));
  XCam::SafeList<XCam::V4l2BufferProxy>::~SafeList
            ((SafeList<XCam::V4l2BufferProxy> *)(this + 0x260));
  XCam::SafeList<XCam::V4l2BufferProxy>::~SafeList
            ((SafeList<XCam::V4l2BufferProxy> *)(this + 0x1f0));
  XCam::SafeList<XCam::V4l2BufferProxy>::~SafeList
            ((SafeList<XCam::V4l2BufferProxy> *)(this + 0x180));
  XCam::SafeList<XCam::V4l2BufferProxy>::~SafeList
            ((SafeList<XCam::V4l2BufferProxy> *)(this + 0x110));
  std::
  _Rb_tree<int,std::pair<int_const,unsigned_long_long>,std::_Select1st<std::pair<int_const,unsigned_long_long>>,std::less<int>,std::allocator<std::pair<int_const,unsigned_long_long>>>
  ::_M_erase((_Rb_tree<int,std::pair<int_const,unsigned_long_long>,std::_Select1st<std::pair<int_const,unsigned_long_long>>,std::less<int>,std::allocator<std::pair<int_const,unsigned_long_long>>>
              *)(this + 0xf4),*(_Rb_tree_node **)(this + 0xfc));
  std::
  _Rb_tree<unsigned_int,std::pair<unsigned_int_const,bool>,std::_Select1st<std::pair<unsigned_int_const,bool>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,bool>>>
  ::~_Rb_tree((_Rb_tree<unsigned_int,std::pair<unsigned_int_const,bool>,std::_Select1st<std::pair<unsigned_int_const,bool>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,bool>>>
               *)(this + 0xdc));
  std::
  _Rb_tree<unsigned_int,std::pair<unsigned_int_const,bool>,std::_Select1st<std::pair<unsigned_int_const,bool>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,bool>>>
  ::~_Rb_tree((_Rb_tree<unsigned_int,std::pair<unsigned_int_const,bool>,std::_Select1st<std::pair<unsigned_int_const,bool>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,bool>>>
               *)(this + 0xc4));
  std::
  _Rb_tree<unsigned_int,std::pair<unsigned_int_const,int>,std::_Select1st<std::pair<unsigned_int_const,int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
  ::_M_erase((_Rb_tree<unsigned_int,std::pair<unsigned_int_const,int>,std::_Select1st<std::pair<unsigned_int_const,int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
              *)(this + 0xac),*(_Rb_tree_node **)(this + 0xb4));
  XCam::Mutex::~Mutex((Mutex *)(this + 0x8c));
  XCam::SmartPtr<RkRawStream::RKStream>::release((SmartPtr<RkRawStream::RKStream> *)(this + 0x78));
  XCam::SmartPtr<RkRawStream::RKStream>::release((SmartPtr<RkRawStream::RKStream> *)(this + 0x70));
  XCam::SmartPtr<RkRawStream::RKStream>::release((SmartPtr<RkRawStream::RKStream> *)(this + 0x68));
  XCam::SmartPtr<XCam::V4l2Device>::release((SmartPtr<XCam::V4l2Device> *)(this + 0x54));
  XCam::SmartPtr<XCam::V4l2Device>::release((SmartPtr<XCam::V4l2Device> *)(this + 0x4c));
  XCam::SmartPtr<XCam::V4l2Device>::release((SmartPtr<XCam::V4l2Device> *)(this + 0x44));
  XCam::SmartPtr<XCam::V4l2Device>::release((SmartPtr<XCam::V4l2Device> *)(this + 0x14));
  XCam::SmartPtr<XCam::V4l2Device>::release((SmartPtr<XCam::V4l2Device> *)(this + 0xc));
  XCam::SmartPtr<XCam::V4l2Device>::release((SmartPtr<XCam::V4l2Device> *)(this + 4));
  return this;
}



/* ===== RkRawStream::RawStreamProcUnit::~RawStreamProcUnit @ 00022c04 size=32 ===== */

/* RkRawStream::RawStreamProcUnit::~RawStreamProcUnit() */

RawStreamProcUnit * __thiscall
RkRawStream::RawStreamProcUnit::~RawStreamProcUnit(RawStreamProcUnit *this)

{
  ~RawStreamProcUnit(this);
  operator_delete(this,0x5d8);
  return this;
}



/* ===== RkRawStream::RawStreamProcUnit::stop @ 00022c24 size=468 ===== */

/* RkRawStream::RawStreamProcUnit::stop() */

undefined4 __thiscall RkRawStream::RawStreamProcUnit::stop(RawStreamProcUnit *this)

{
  RawStreamProcUnit *pRVar1;
  int iVar2;
  RawStreamProcUnit *pRVar3;
  RawStreamProcUnit *pRVar4;
  int iVar5;
  int local_30;
  RawStreamProcUnit *local_2c;
  
  iVar5 = *(int *)(DAT_00022df8 + 0x22c34 + DAT_00022dfc);
  local_30 = iVar5 + 8;
  local_2c = this + 0x54c;
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x550));
  this[0x5a8] = (RawStreamProcUnit)0x1;
  pthread_cond_broadcast((pthread_cond_t *)(this + 0x570));
  XCam::SmartLock::~SmartLock((SmartLock *)&local_30);
  XCam::Thread::stop();
  for (iVar2 = 0; iVar2 < *(int *)(this + 0x84); iVar2 = iVar2 + 1) {
    (**(code **)(**(int **)(this + iVar2 * 8 + 0x68) + 0x18))();
  }
  pRVar3 = this + 0x3bc;
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x90));
  for (iVar2 = 0; iVar2 < *(int *)(this + 0x84); iVar2 = iVar2 + 1) {
    local_30 = iVar5 + 8;
    local_2c = pRVar3;
    pthread_mutex_lock((pthread_mutex_t *)(pRVar3 + 4));
    pRVar4 = *(RawStreamProcUnit **)(pRVar3 + -0xc);
    while (pRVar4 != pRVar3 + -0xc) {
      pRVar1 = *(RawStreamProcUnit **)pRVar4;
      *(int *)(pRVar3 + -4) = *(int *)(pRVar3 + -4) + -1;
      std::__detail::_List_node_base::_M_unhook();
      XCam::SmartPtr<RkRawStream::SimpleFdBuf>::release
                ((SmartPtr<RkRawStream::SimpleFdBuf> *)(pRVar4 + 8));
      operator_delete(pRVar4);
      pRVar4 = pRVar1;
    }
    XCam::SmartLock::~SmartLock((SmartLock *)&local_30);
    pRVar3 = pRVar3 + 0x70;
  }
  std::
  _Rb_tree<unsigned_int,std::pair<unsigned_int_const,bool>,std::_Select1st<std::pair<unsigned_int_const,bool>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,bool>>>
  ::_M_erase((_Rb_tree<unsigned_int,std::pair<unsigned_int_const,bool>,std::_Select1st<std::pair<unsigned_int_const,bool>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,bool>>>
              *)(this + 0xc4),*(_Rb_tree_node **)(this + 0xcc));
  iVar2 = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(RawStreamProcUnit **)(this + 0xd0) = this + 200;
  *(RawStreamProcUnit **)(this + 0xd4) = this + 200;
  *(undefined4 *)(this + 0xd8) = 0;
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x90));
  std::
  _Rb_tree<int,std::pair<int_const,unsigned_long_long>,std::_Select1st<std::pair<int_const,unsigned_long_long>>,std::less<int>,std::allocator<std::pair<int_const,unsigned_long_long>>>
  ::_M_erase((_Rb_tree<int,std::pair<int_const,unsigned_long_long>,std::_Select1st<std::pair<int_const,unsigned_long_long>>,std::less<int>,std::allocator<std::pair<int_const,unsigned_long_long>>>
              *)(this + 0xf4),*(_Rb_tree_node **)(this + 0xfc));
  *(RawStreamProcUnit **)(this + 0x100) = this + 0xf8;
  *(RawStreamProcUnit **)(this + 0x104) = this + 0xf8;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  if (this[0x5c1] != (RawStreamProcUnit)0x0) {
    pRVar3 = this + 0x5cc;
    for (; iVar2 < *(int *)(this + 0x84); iVar2 = iVar2 + 1) {
      if (*(void **)pRVar3 != (void *)0x0) {
        free(*(void **)pRVar3);
      }
      pRVar3 = pRVar3 + 4;
    }
  }
  for (iVar2 = 0; iVar2 < *(int *)(this + 0x84); iVar2 = iVar2 + 1) {
    (**(code **)(**(int **)(this + iVar2 * 8 + 0x68) + 0x1c))();
  }
  return 0;
}



/* ===== XCam::SmartPtr<RkRawStream::SimpleFdBuf>::SmartPtr @ 00022e00 size=48 ===== */

/* XCam::SmartPtr<RkRawStream::SimpleFdBuf>::SmartPtr(XCam::SmartPtr<RkRawStream::SimpleFdBuf>
   const&) */

SmartPtr<RkRawStream::SimpleFdBuf> * __thiscall
XCam::SmartPtr<RkRawStream::SimpleFdBuf>::SmartPtr
          (SmartPtr<RkRawStream::SimpleFdBuf> *this,SmartPtr *param_1)

{
  int iVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  iVar1 = *(int *)(param_1 + 4);
  *(int *)(this + 4) = iVar1;
  if (iVar1 != 0) {
    std::__atomic_base<unsigned_int>::operator++((__atomic_base<unsigned_int> *)(iVar1 + 4));
  }
  return this;
}



/* ===== RkRawStream::RawStreamProcUnit::trigger_isp_readback @ 00022e30 size=1208 ===== */

/* RkRawStream::RawStreamProcUnit::trigger_isp_readback() */

void __thiscall RkRawStream::RawStreamProcUnit::trigger_isp_readback(RawStreamProcUnit *this)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  V4l2Device *this_00;
  int *piVar6;
  pthread_cond_t *__cond;
  int iVar7;
  pthread_cond_t *ppVar8;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 *local_84;
  int local_80;
  int local_7c;
  RawStreamProcUnit *local_78;
  undefined4 *local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c [8];
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  int iStack_30;
  undefined4 local_2c;
  
  local_5c[7] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_38 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_5c[0] = 0;
  local_5c[1] = 0;
  local_5c[2] = 0;
  local_5c[3] = 0;
  local_5c[4] = 0;
  local_5c[5] = 0;
  local_8c = 0;
  local_88 = 0;
  local_84 = (undefined4 *)0x0;
  local_80 = 0;
  local_5c[6] = 0;
  local_34 = 0xffffffff;
  if (*(int *)(this + 0x84) == 1) {
    local_2c = 0x10;
  }
  else if (*(int *)(this + 0x84) == 2) {
    local_2c = 0x20;
  }
  else {
    local_2c = 0x40;
  }
  piVar6 = local_5c;
  local_78 = this + 0x8c;
  iVar7 = *(int *)(DAT_00023350 + 0x22e98 + DAT_00023354) + 8;
  local_7c = iVar7;
  iStack_30 = local_5c[7];
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x90));
  if (*(int *)(this + 0xd8) == 0) {
    iVar3 = DAT_00023358 + 0x22ee8;
    iVar7 = DAT_0002335c + 0x22ef4;
LAB_00022ef0:
    xcam_print_log(0x22,0xff,1,iVar7,iVar3);
  }
  else {
    __cond = (pthread_cond_t *)(this + 0x3e0);
    uVar4 = *(undefined4 *)(*(_Rb_tree_node_base **)(this + 0xd0) + 0x10);
    pvVar1 = (void *)std::_Rb_tree_rebalance_for_erase
                               (*(_Rb_tree_node_base **)(this + 0xd0),
                                (_Rb_tree_node_base *)(this + 200));
    operator_delete(pvVar1);
    *(int *)(this + 0xd8) = *(int *)(this + 0xd8) + -1;
    iVar5 = DAT_00023360 + 0x22f48;
    for (iVar3 = 0; iVar3 < *(int *)(this + 0x84); iVar3 = iVar3 + 1) {
      this_00 = *(V4l2Device **)(this + iVar3 * 8 + 0x44);
      local_64 = iVar7;
      local_60 = (int)__cond + -0x24;
      pthread_mutex_lock((pthread_mutex_t *)((int)__cond + -0x20));
      ppVar8 = __cond + -1;
      if ((pthread_cond_t *)(ppVar8->__data).__lock == ppVar8) {
        local_6c = 0;
        local_68 = 0;
      }
      else {
        XCam::SmartPtr<RkRawStream::SimpleFdBuf>::SmartPtr
                  ((SmartPtr<RkRawStream::SimpleFdBuf> *)&local_6c,
                   (SmartPtr *)(((pthread_cond_t *)(ppVar8->__data).__lock)->__size + 8));
      }
      XCam::SmartLock::~SmartLock((SmartLock *)&local_64);
      iVar2 = XCam::V4l2Device::get_buffer
                        (this_00,(SmartPtr *)(piVar6 + iVar3 * 2),*(int *)(local_6c + 4));
      XCam::SmartPtr<RkRawStream::SimpleFdBuf>::release
                ((SmartPtr<RkRawStream::SimpleFdBuf> *)&local_6c);
      if (iVar2 != 0) {
        iVar7 = DAT_00023364 + 0x22ff8;
        goto LAB_00022ef0;
      }
      local_6c = iVar7;
      local_68 = (int)__cond + -0x24;
      pthread_mutex_lock((pthread_mutex_t *)((int)__cond + -0x20));
      iVar2 = 0;
      while ((this[iVar3 * 0x70 + 0x418] == (RawStreamProcUnit)0x0 &&
             ((pthread_cond_t *)__cond[-1].__data.__lock == ppVar8 && iVar2 == 0))) {
        iVar2 = pthread_cond_wait(__cond,(pthread_mutex_t *)((int)__cond + -0x20));
      }
      if (this[iVar3 * 0x70 + 0x418] == (RawStreamProcUnit)0x0) {
        if ((pthread_cond_t *)__cond[-1].__data.__lock == ppVar8) {
          if (iVar2 != 0x6e) {
            xcam_print_log(0x18,0xff,1,iVar5,iVar2);
          }
          goto LAB_00023090;
        }
        XCam::SmartPtr<RkRawStream::SimpleFdBuf>::SmartPtr
                  ((SmartPtr<RkRawStream::SimpleFdBuf> *)&local_64,
                   (SmartPtr *)(((pthread_cond_t *)__cond[-1].__data.__lock)->__size + 8));
        pvVar1 = (void *)__cond[-1].__data.__lock;
        *(int *)((int)__cond + -0x28) = *(int *)((int)__cond + -0x28) + -1;
        std::__detail::_List_node_base::_M_unhook();
        XCam::SmartPtr<RkRawStream::SimpleFdBuf>::release
                  ((SmartPtr<RkRawStream::SimpleFdBuf> *)((int)pvVar1 + 8));
        operator_delete(pvVar1);
        XCam::SmartPtr<RkRawStream::SimpleFdBuf>::SmartPtr
                  ((SmartPtr<RkRawStream::SimpleFdBuf> *)&local_74,(SmartPtr *)&local_64);
        XCam::SmartPtr<RkRawStream::SimpleFdBuf>::release
                  ((SmartPtr<RkRawStream::SimpleFdBuf> *)&local_64);
      }
      else {
LAB_00023090:
        local_74 = (undefined4 *)0x0;
        local_70 = 0;
      }
      XCam::SmartLock::~SmartLock((SmartLock *)&local_6c);
      XCam::SmartPtr<RkRawStream::SimpleFdBuf>::release
                ((SmartPtr<RkRawStream::SimpleFdBuf> *)&local_84);
      if (local_74 != (undefined4 *)0x0) {
        local_84 = local_74;
        if (local_70 == 0) {
          local_80 = FUN_00021788();
        }
        else {
          local_80 = local_70;
          std::__atomic_base<unsigned_int>::operator++
                    ((__atomic_base<unsigned_int> *)(local_70 + 4));
        }
      }
      XCam::SmartPtr<RkRawStream::SimpleFdBuf>::release
                ((SmartPtr<RkRawStream::SimpleFdBuf> *)&local_74);
      if (*(int *)(this + 0x5b4) == 2) {
        *(undefined4 *)(piVar6[iVar3 * 2] + 0x11c) = local_84[6];
      }
      else if (*(int *)(this + 0x5b4) == 4) {
        *(undefined4 *)(piVar6[iVar3 * 2] + 0x118) = *local_84;
      }
      __cond = (pthread_cond_t *)((int)__cond + 0x70);
    }
    for (iVar7 = 0; iVar7 < *(int *)(this + 0x84); iVar7 = iVar7 + 1) {
      iVar3 = (**(code **)(**(int **)(this + iVar7 * 8 + 0x44) + 0x2c))
                        (*(int **)(this + iVar7 * 8 + 0x44),piVar6 + iVar7 * 2,0);
      if (iVar3 != 0) {
        xcam_print_log(0x22,0xff,1,DAT_00023368 + 0x23210,iVar7);
        goto LAB_00023224;
      }
    }
    iVar3 = 0;
LAB_00023224:
    if (this[0x518] == (RawStreamProcUnit)0x0) {
      if (2 < iStack_30) {
        iStack_30 = 2;
      }
    }
    else {
      iStack_30 = 1;
    }
    if ((this[0x88] != (RawStreamProcUnit)0x0) && (iStack_30 < 1)) {
      iStack_30 = 1;
    }
    local_5c[6] = (int)((ulonglong)(uint)local_84[4] * 1000);
    local_5c[7] = local_84[5] * 1000 + (int)((ulonglong)(uint)local_84[4] * 1000 >> 0x20);
    local_3c = local_5c[6];
    local_38 = local_5c[7];
    local_34 = uVar4;
    if (iVar3 == 0) {
      (**(code **)(**(int **)(this + 0x508) + 0x30))
                (*(int **)(this + 0x508),DAT_0002336c,local_5c + 6);
    }
    else {
      xcam_print_log(0x22,0xff,1,DAT_00023374 + 0x232e4,DAT_00023370 + 0x232d8,uVar4);
    }
    this[0x518] = (RawStreamProcUnit)0x0;
  }
  iVar7 = 3;
  XCam::SmartLock::~SmartLock((SmartLock *)&local_7c);
  XCam::SmartPtr<RkRawStream::SimpleFdBuf>::release((SmartPtr<RkRawStream::SimpleFdBuf> *)&local_84)
  ;
  XCam::SmartPtr<XCam::V4l2BufferProxy>::release((SmartPtr<XCam::V4l2BufferProxy> *)&local_8c);
  do {
    if (piVar6[4] != 0) {
      FUN_00021fa4(piVar6 + 4);
    }
    iVar7 = iVar7 + -1;
    piVar6 = piVar6 + -2;
  } while (iVar7 != 0);
  return;
}



/* ===== RkRawStream::RawStreamProcUnit::raw_buffer_proc @ 00023378 size=356 ===== */

/* RkRawStream::RawStreamProcUnit::raw_buffer_proc() */

undefined4 __thiscall RkRawStream::RawStreamProcUnit::raw_buffer_proc(RawStreamProcUnit *this)

{
  int iVar1;
  RawStreamProcUnit *pRVar2;
  void *pvVar3;
  int local_30;
  int local_2c;
  int local_28;
  RawStreamProcUnit *local_24;
  int local_20;
  int local_1c;
  
  local_28 = *(int *)(DAT_000234e8 + 0x23388 + DAT_000234ec) + 8;
  local_24 = this + 0x54c;
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x550));
  iVar1 = 0;
  while ((this[0x5a8] == (RawStreamProcUnit)0x0 &&
         (*(RawStreamProcUnit **)(this + 0x540) == this + 0x540 && iVar1 == 0))) {
    iVar1 = pthread_cond_wait((pthread_cond_t *)(this + 0x570),(pthread_mutex_t *)(this + 0x550));
  }
  if (this[0x5a8] == (RawStreamProcUnit)0x0) {
    pRVar2 = *(RawStreamProcUnit **)(this + 0x540);
    if (pRVar2 != this + 0x540) {
      local_1c = *(int *)(pRVar2 + 0xc);
      local_20 = *(int *)(pRVar2 + 8);
      if (local_1c != 0) {
        std::__atomic_base<unsigned_int>::operator++((__atomic_base<unsigned_int> *)(local_1c + 4));
      }
      pvVar3 = *(void **)(this + 0x540);
      *(int *)(this + 0x548) = *(int *)(this + 0x548) + -1;
      std::__detail::_List_node_base::_M_unhook();
      XCam::SmartPtr<RkRawStream::EmptyClass>::release
                ((SmartPtr<RkRawStream::EmptyClass> *)((int)pvVar3 + 8));
      operator_delete(pvVar3);
      local_2c = local_1c;
      local_30 = local_20;
      if (local_1c != 0) {
        std::__atomic_base<unsigned_int>::operator++((__atomic_base<unsigned_int> *)(local_1c + 4));
      }
      XCam::SmartPtr<RkRawStream::EmptyClass>::release
                ((SmartPtr<RkRawStream::EmptyClass> *)&local_20);
      goto LAB_00023434;
    }
    if (iVar1 != 0x6e) {
      xcam_print_log(0x18,0xff,1,DAT_000234f0 + 0x23400,iVar1);
    }
  }
  local_30 = 0;
  local_2c = 0;
LAB_00023434:
  XCam::SmartLock::~SmartLock((SmartLock *)&local_28);
  iVar1 = local_30;
  XCam::SmartPtr<RkRawStream::EmptyClass>::release((SmartPtr<RkRawStream::EmptyClass> *)&local_30);
  if (iVar1 != 0) {
    trigger_isp_readback(this);
  }
  return 1;
}



/* ===== RkRawStream::RawProcThread::loop @ 000234f4 size=20 ===== */

/* RkRawStream::RawProcThread::loop() */

void __thiscall RkRawStream::RawProcThread::loop(RawProcThread *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001e340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_raw_buffer_proc_00044398)(*(undefined4 *)(this + 0x74));
  return;
}



/* ===== XCam::SafeList<RkRawStream::SimpleFdBuf>::push @ 000234fc size=136 ===== */

/* XCam::SafeList<RkRawStream::SimpleFdBuf>::push(XCam::SmartPtr<RkRawStream::SimpleFdBuf> const&)
    */

undefined4 XCam::SafeList<RkRawStream::SimpleFdBuf>::push(SmartPtr *param_1)

{
  _List_node_base *p_Var1;
  SmartPtr *in_r1;
  int local_20;
  SmartPtr *local_1c;
  
  local_20 = *(int *)(DAT_00023590 + 0x2350c + DAT_00023594) + 8;
  local_1c = param_1 + 0xc;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x10));
  p_Var1 = operator_new(0x10);
  SmartPtr<RkRawStream::SimpleFdBuf>::SmartPtr
            ((SmartPtr<RkRawStream::SimpleFdBuf> *)(p_Var1 + 8),in_r1);
  std::__detail::_List_node_base::_M_hook(p_Var1);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  pthread_cond_signal((pthread_cond_t *)(param_1 + 0x30));
  SmartLock::~SmartLock((SmartLock *)&local_20);
  return 1;
}



/* ===== std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,bool>,std::_Select1st<std::pair<unsigned_int_const,bool>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,bool>>>::_M_get_insert_unique_pos @ 00023598 size=148 ===== */

/* std::_Rb_tree<unsigned int, std::pair<unsigned int const, bool>,
   std::_Select1st<std::pair<unsigned int const, bool> >, std::less<unsigned int>,
   std::allocator<std::pair<unsigned int const, bool> > >::_M_get_insert_unique_pos(unsigned int
   const&) */

uint * std::
       _Rb_tree<unsigned_int,std::pair<unsigned_int_const,bool>,std::_Select1st<std::pair<unsigned_int_const,bool>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,bool>>>
       ::_M_get_insert_unique_pos(uint *param_1)

{
  _Rb_tree_node_base *p_Var1;
  int in_r1;
  uint *in_r2;
  _Rb_tree_node_base *p_Var2;
  bool bVar3;
  
  bVar3 = true;
  p_Var1 = *(_Rb_tree_node_base **)(in_r1 + 8);
  p_Var2 = (_Rb_tree_node_base *)(in_r1 + 4);
  while (p_Var1 != (_Rb_tree_node_base *)0x0) {
    bVar3 = *in_r2 < *(uint *)(p_Var1 + 0x10);
    p_Var2 = p_Var1;
    if (bVar3) {
      p_Var1 = *(_Rb_tree_node_base **)(p_Var1 + 8);
    }
    else {
      p_Var1 = *(_Rb_tree_node_base **)(p_Var1 + 0xc);
    }
  }
  p_Var1 = p_Var2;
  if (bVar3) {
    if (*(_Rb_tree_node_base **)(in_r1 + 0xc) == p_Var2) goto LAB_000235f4;
    p_Var1 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var2);
  }
  if (*in_r2 <= *(uint *)(p_Var1 + 0x10)) {
    *param_1 = (uint)p_Var1;
    param_1[1] = 0;
    return param_1;
  }
LAB_000235f4:
  *param_1 = 0;
  param_1[1] = (uint)p_Var2;
  return param_1;
}



/* ===== RkRawStream::RawStreamProcUnit::_send_sync_buf @ 0002362c size=920 ===== */

/* RkRawStream::RawStreamProcUnit::_send_sync_buf(rkrawstream_rkraw2_t*) */

void __thiscall
RkRawStream::RawStreamProcUnit::_send_sync_buf
          (RawStreamProcUnit *this,rkrawstream_rkraw2_t *param_1)

{
  bool bVar1;
  SimpleFdBuf *pSVar2;
  RawStreamProcUnit *pRVar3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  undefined4 uVar6;
  int iVar7;
  _Rb_tree_node_base *p_Var8;
  _Rb_tree_node_base *p_Var9;
  _Rb_tree_node_base *p_Var10;
  uint uVar11;
  _Rb_tree_node_base *p_Var12;
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  void *local_38;
  undefined4 local_34;
  _Rb_tree_node_base *local_30;
  _Rb_tree_node_base *local_2c;
  
  local_50 = (undefined4 *)0x0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  pSVar2 = operator_new(0x20);
  *(undefined4 *)pSVar2 = 0;
  *(undefined4 *)(pSVar2 + 0x18) = 0;
  XCam::SmartPtr<RkRawStream::SimpleFdBuf>::operator=
            ((SmartPtr<RkRawStream::SimpleFdBuf> *)&local_50,pSVar2);
  pSVar2 = operator_new(0x20);
  *(undefined4 *)pSVar2 = 0;
  *(undefined4 *)(pSVar2 + 0x18) = 0;
  XCam::SmartPtr<RkRawStream::SimpleFdBuf>::operator=
            ((SmartPtr<RkRawStream::SimpleFdBuf> *)&local_48,pSVar2);
  pSVar2 = operator_new(0x20);
  *(undefined4 *)pSVar2 = 0;
  *(undefined4 *)(pSVar2 + 0x18) = 0;
  XCam::SmartPtr<RkRawStream::SimpleFdBuf>::operator=
            ((SmartPtr<RkRawStream::SimpleFdBuf> *)&local_40,pSVar2);
  if (*(int *)(param_1 + 0x60) == 0) {
    local_50[6] = *(void **)(param_1 + 0x70);
    *local_50 = *(undefined4 *)(param_1 + 0x68);
    local_50[1] = *(undefined4 *)(param_1 + 100);
    local_50[2] = *(undefined4 *)(param_1 + 0x48);
    uVar6 = *(undefined4 *)(param_1 + 0x7c);
    local_50[4] = *(undefined4 *)(param_1 + 0x78);
    local_50[5] = uVar6;
  }
  else {
    memcpy(*(void **)(this + 0x5cc),*(void **)(param_1 + 0x70),*(size_t *)(param_1 + 0x6c));
    local_50[6] = *(undefined4 *)(this + 0x5cc);
    local_50[1] = *(undefined4 *)(this + 0x5b8);
    local_50[2] = *(undefined4 *)(this + 0x5bc);
  }
  iVar7 = *(int *)(this + 0x5b8);
  *(int *)(this + 0x5b8) = iVar7 + 1;
  *(int *)(this + 0x5bc) = *(int *)(this + 0x5bc) + 1;
  if (iVar7 + 1 == 4) {
    *(undefined4 *)(this + 0x5b8) = 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x90));
  for (iVar7 = 0; iVar7 < *(int *)(this + 0x84); iVar7 = iVar7 + 1) {
    pRVar3 = this + 0x3b0;
    if (((iVar7 == 0) || (pRVar3 = this + 0x420, iVar7 == 1)) || (pRVar3 = this + 0x490, iVar7 == 2)
       ) {
      XCam::SafeList<RkRawStream::SimpleFdBuf>::push((SmartPtr *)pRVar3);
    }
  }
  p_Var12 = (_Rb_tree_node_base *)(this + 200);
  uVar11 = local_50[2];
  p_Var4 = *(_Rb_tree_node_base **)(this + 0xcc);
  p_Var10 = p_Var12;
  while (p_Var9 = p_Var4, p_Var9 != (_Rb_tree_node_base *)0x0) {
    if (*(uint *)(p_Var9 + 0x10) < uVar11) {
      p_Var4 = *(_Rb_tree_node_base **)(p_Var9 + 0xc);
    }
    else {
      p_Var4 = *(_Rb_tree_node_base **)(p_Var9 + 8);
      p_Var10 = p_Var9;
    }
  }
  if ((p_Var12 != p_Var10) && (*(uint *)(p_Var10 + 0x10) <= uVar11)) goto LAB_00023900;
  p_Var4 = operator_new(0x18);
  *(uint *)(p_Var4 + 0x10) = uVar11;
  p_Var4[0x14] = (_Rb_tree_node_base)0x0;
  if (p_Var12 == p_Var10) {
    if ((*(int *)(this + 0xd8) == 0) ||
       (p_Var5 = *(_Rb_tree_node_base **)(this + 0xd4), uVar11 <= *(uint *)(p_Var5 + 0x10))) {
LAB_00023848:
      std::
      _Rb_tree<unsigned_int,std::pair<unsigned_int_const,bool>,std::_Select1st<std::pair<unsigned_int_const,bool>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,bool>>>
      ::_M_get_insert_unique_pos((uint *)&local_30);
      p_Var5 = local_2c;
      p_Var9 = local_30;
      goto LAB_000238ac;
    }
LAB_000238b4:
    bVar1 = p_Var12 == p_Var5 || p_Var9 != (_Rb_tree_node_base *)0x0;
    if (p_Var12 != p_Var5 && p_Var9 == (_Rb_tree_node_base *)0x0) {
      if (uVar11 < *(uint *)(p_Var5 + 0x10)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    }
    std::_Rb_tree_insert_and_rebalance(bVar1,p_Var4,p_Var5,p_Var12);
    *(int *)(this + 0xd8) = *(int *)(this + 0xd8) + 1;
    p_Var10 = p_Var4;
  }
  else {
    if (uVar11 < *(uint *)(p_Var10 + 0x10)) {
      p_Var8 = *(_Rb_tree_node_base **)(this + 0xd0);
      if (p_Var10 != *(_Rb_tree_node_base **)(this + 0xd0)) {
        p_Var5 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var10);
        if (uVar11 <= *(uint *)(p_Var5 + 0x10)) goto LAB_00023848;
        p_Var9 = (_Rb_tree_node_base *)0x0;
        p_Var8 = p_Var10;
        if (*(int *)(p_Var5 + 0xc) == 0) goto LAB_000238ac;
      }
      p_Var5 = p_Var8;
      p_Var9 = p_Var8;
LAB_000238ac:
      p_Var10 = p_Var9;
      if (p_Var5 != (_Rb_tree_node_base *)0x0) goto LAB_000238b4;
    }
    else if (uVar11 != *(uint *)(p_Var10 + 0x10)) {
      p_Var5 = *(_Rb_tree_node_base **)(this + 0xd4);
      if (p_Var10 != *(_Rb_tree_node_base **)(this + 0xd4)) {
        p_Var5 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var10);
        if (*(uint *)(p_Var5 + 0x10) <= uVar11) goto LAB_00023848;
        p_Var9 = p_Var5;
        if (*(int *)(p_Var10 + 0xc) == 0) {
          p_Var5 = p_Var10;
          p_Var9 = (_Rb_tree_node_base *)0x0;
        }
      }
      goto LAB_000238ac;
    }
    operator_delete(p_Var4);
  }
LAB_00023900:
  p_Var10[0x14] = (_Rb_tree_node_base)0x1;
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x90));
  local_38 = operator_new(1);
  local_34 = 0;
  local_34 = FUN_00021788();
  XCam::SafeList<RkRawStream::EmptyClass>::push((SmartPtr *)(this + 0x540));
  XCam::SmartPtr<RkRawStream::EmptyClass>::release((SmartPtr<RkRawStream::EmptyClass> *)&local_38);
  XCam::SmartPtr<RkRawStream::SimpleFdBuf>::release((SmartPtr<RkRawStream::SimpleFdBuf> *)&local_40)
  ;
  XCam::SmartPtr<RkRawStream::SimpleFdBuf>::release((SmartPtr<RkRawStream::SimpleFdBuf> *)&local_48)
  ;
  XCam::SmartPtr<RkRawStream::SimpleFdBuf>::release((SmartPtr<RkRawStream::SimpleFdBuf> *)&local_50)
  ;
  return;
}



/* ===== RkRawStream::RawStreamProcUnit::send_sync_buf2 @ 000239ec size=48 ===== */

/* RkRawStream::RawStreamProcUnit::send_sync_buf2(unsigned char*) */

void __thiscall
RkRawStream::RawStreamProcUnit::send_sync_buf2(RawStreamProcUnit *this,uchar *param_1)

{
  rkrawstream_rkraw2_t arStack_128 [284];
  
  _parse_rk_rawdata(param_1,arStack_128);
  _send_sync_buf(this,arStack_128);
  return;
}



/* ===== FUN_00023a1c @ 00023a1c size=188 ===== */

undefined4 FUN_00023a1c(undefined4 *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  
  strncpy(param_2 + 0xf4,(char *)param_1[0xc],0x1f);
  strncpy(param_2,(char *)*param_1,0x1f);
  if ((undefined4 *)param_1[0x4f] != (undefined4 *)param_1[0x50]) {
    iVar1 = 0;
    pcVar2 = param_2 + 0x20;
    puVar3 = (undefined4 *)param_1[0x4f];
    while ((undefined4 *)param_1[0x50] != puVar3) {
      if (iVar1 == 10) break;
      iVar1 = iVar1 + 1;
      *(undefined4 *)pcVar2 = *puVar3;
      *(undefined4 *)(pcVar2 + 4) = puVar3[1];
      *(undefined4 *)(pcVar2 + 8) = puVar3[2];
      *(undefined4 *)(pcVar2 + 0xc) = puVar3[3];
      *(undefined4 *)(pcVar2 + 0x10) = puVar3[4];
      pcVar2 = pcVar2 + 0x14;
      puVar3 = puVar3 + 5;
    }
    *(int *)(param_2 + 0xe8) = iVar1;
  }
  if (param_1[0x49] == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = atoi((char *)(param_1[0x48] + 1));
  }
  *(int *)(param_2 + 0xf0) = iVar1;
  return 0;
}



/* ===== FUN_00023ad8 @ 00023ad8 size=140 ===== */

uint * FUN_00023ad8(uint *param_1,char *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  char *pcVar4;
  bool bVar5;
  char *local_14;
  
  *param_1 = (uint)(param_1 + 2);
  local_14 = param_2;
  if (param_2 != (char *)0x0) {
    local_14 = (char *)strlen(param_2);
    pcVar4 = param_2 + (int)local_14;
    if ((char *)0xf < local_14) {
      uVar1 = std::__cxx11::string::_M_create(param_1,(uint)&local_14);
      param_1[2] = (uint)local_14;
      *param_1 = uVar1;
    }
    std::__cxx11::string::_S_copy_chars((char *)*param_1,param_2,pcVar4);
    param_1[1] = (uint)local_14;
    local_14[*param_1] = '\0';
    return param_1;
  }
  puVar2 = (uint *)std::__throw_logic_error((char *)(iRam00023b60 + 0x23b60));
  if (puVar2 != DAT_00023cb4) {
    if (puVar2 < DAT_00023cb4) {
      if (puVar2 == DAT_00023cb4 + -0x468600) {
        return (uint *)0x8;
      }
      if (puVar2 < DAT_00023cb4 + -0x468600) {
        if (puVar2 == DAT_00023cb8) {
          return (uint *)0xa;
        }
        puVar3 = DAT_00023cb8;
        if (puVar2 < DAT_00023cb8) {
          puVar3 = (uint *)((int)DAT_00023cb8 - 0x105);
        }
        if (DAT_00023cb8 < puVar2) {
          if (puVar2 == DAT_00023cbc) {
            return (uint *)0xa;
          }
          puVar3 = DAT_00023cbc + 4;
        }
        bVar5 = puVar2 == puVar3;
        if (bVar5) {
          puVar2 = (uint *)0xa;
        }
      }
      else {
        if (puVar2 == DAT_00023cc0) {
          return (uint *)0xc;
        }
        puVar3 = DAT_00023cc0;
        if (puVar2 < DAT_00023cc0) {
          puVar3 = (uint *)((int)DAT_00023cc0 - 0x105);
        }
        if (DAT_00023cc0 < puVar2) {
          if (puVar2 == DAT_00023cc4) {
            return (uint *)0xc;
          }
          puVar3 = DAT_00023cc4 + 4;
        }
        bVar5 = puVar2 == puVar3;
        if (bVar5) {
          puVar2 = (uint *)0xc;
        }
      }
    }
    else {
      if (puVar2 == DAT_00023cc8) {
        return (uint *)0x10;
      }
      if (puVar2 < DAT_00023cc8) {
        if (puVar2 == DAT_00023ccc) {
          return (uint *)0xe;
        }
        puVar3 = DAT_00023ccc;
        if (puVar2 < DAT_00023ccc) {
          puVar3 = (uint *)((int)DAT_00023ccc - 0x4fb);
        }
        if (DAT_00023ccc < puVar2) {
          if (puVar2 == DAT_00023cd0) {
            return (uint *)0xe;
          }
          puVar3 = (uint *)((int)DAT_00023cd0 + 0xaf5);
        }
        bVar5 = puVar2 == puVar3;
        if (bVar5) {
          puVar2 = (uint *)0xe;
        }
      }
      else {
        if (puVar2 == DAT_00023cd4) {
          return (uint *)0x8;
        }
        if (puVar2 < DAT_00023cd4) {
          if (puVar2 == DAT_00023cd4 + -0x3058000) {
            return (uint *)0x10;
          }
          bVar5 = puVar2 == (uint *)((int)DAT_00023cd4 + 0xf3ea0af5U);
          if (bVar5) {
            puVar2 = (uint *)0x10;
          }
        }
        else {
          if (puVar2 == DAT_00023cd8) {
            return (uint *)0x8;
          }
          bVar5 = puVar2 == DAT_00023cd8 + 0x3fc00;
          if (bVar5) {
            puVar2 = (uint *)0x8;
          }
        }
      }
    }
    if (!bVar5) {
      puVar2 = (uint *)0xffffffff;
    }
    return puVar2;
  }
  return (uint *)0x10;
}



/* ===== RkRawStream::pixFmt2Bpp @ 00023b64 size=336 ===== */

/* RkRawStream::pixFmt2Bpp(unsigned int) */

uint RkRawStream::pixFmt2Bpp(uint param_1)

{
  uint uVar1;
  bool bVar2;
  
  if (param_1 == DAT_00023cb4) {
    return 0x10;
  }
  if (param_1 < DAT_00023cb4) {
    if (param_1 == DAT_00023cb4 + 0xfee5e800) {
      return 8;
    }
    if (param_1 < DAT_00023cb4 + 0xfee5e800) {
      if (param_1 == DAT_00023cb8) {
        return 10;
      }
      uVar1 = DAT_00023cb8;
      if (param_1 < DAT_00023cb8) {
        uVar1 = DAT_00023cb8 - 0x105;
      }
      if (DAT_00023cb8 < param_1) {
        if (param_1 == DAT_00023cbc) {
          return 10;
        }
        uVar1 = DAT_00023cbc + 0x10;
      }
      bVar2 = param_1 == uVar1;
      if (bVar2) {
        param_1 = 10;
      }
    }
    else {
      if (param_1 == DAT_00023cc0) {
        return 0xc;
      }
      uVar1 = DAT_00023cc0;
      if (param_1 < DAT_00023cc0) {
        uVar1 = DAT_00023cc0 - 0x105;
      }
      if (DAT_00023cc0 < param_1) {
        if (param_1 == DAT_00023cc4) {
          return 0xc;
        }
        uVar1 = DAT_00023cc4 + 0x10;
      }
      bVar2 = param_1 == uVar1;
      if (bVar2) {
        param_1 = 0xc;
      }
    }
  }
  else {
    if (param_1 == DAT_00023cc8) {
      return 0x10;
    }
    if (param_1 < DAT_00023cc8) {
      if (param_1 == DAT_00023ccc) {
        return 0xe;
      }
      uVar1 = DAT_00023ccc;
      if (param_1 < DAT_00023ccc) {
        uVar1 = DAT_00023ccc - 0x4fb;
      }
      if (DAT_00023ccc < param_1) {
        if (param_1 == DAT_00023cd0) {
          return 0xe;
        }
        uVar1 = DAT_00023cd0 + 0xaf5;
      }
      bVar2 = param_1 == uVar1;
      if (bVar2) {
        param_1 = 0xe;
      }
    }
    else {
      if (param_1 == DAT_00023cd4) {
        return 8;
      }
      if (param_1 < DAT_00023cd4) {
        if (param_1 == DAT_00023cd4 + 0xf3ea0000) {
          return 0x10;
        }
        bVar2 = param_1 == DAT_00023cd4 + 0xf3ea0af5;
        if (bVar2) {
          param_1 = 0x10;
        }
      }
      else {
        if (param_1 == DAT_00023cd8) {
          return 8;
        }
        bVar2 = param_1 == DAT_00023cd8 + 0xff000;
        if (bVar2) {
          param_1 = 8;
        }
      }
    }
  }
  if (!bVar2) {
    param_1 = 0xffffffff;
  }
  return param_1;
}



/* ===== RkRawStream::MediaInfo::MediaInfo @ 00023cdc size=84 ===== */

/* RkRawStream::MediaInfo::MediaInfo() */

void __thiscall RkRawStream::MediaInfo::MediaInfo(MediaInfo *this)

{
  *(int *)this = *(int *)(DAT_00023d30 + 0x23cf4 + DAT_00023d34) + 8;
  *(undefined4 *)(this + 0x3380) = 0;
  *(undefined4 *)(this + 0x3384) = 0;
  *(MediaInfo **)(this + 0x3388) = this + 0x3380;
  *(MediaInfo **)(this + 0x338c) = this + 0x3380;
  *(undefined4 *)(this + 0x3390) = 0;
  *(undefined4 *)(this + 0x3398) = 0;
  *(undefined4 *)(this + 0x339c) = 0;
  *(MediaInfo **)(this + 0x33a0) = this + 0x3398;
  *(MediaInfo **)(this + 0x33a4) = this + 0x3398;
  *(undefined4 *)(this + 0x33a8) = 0;
  return;
}



/* ===== RkRawStream::MediaInfo::findAttachedSubdevs @ 00023d38 size=420 ===== */

/* RkRawStream::MediaInfo::findAttachedSubdevs(media_device*, unsigned int, rk_sensor_full_info_t*)
    */

MediaInfo * __thiscall
RkRawStream::MediaInfo::findAttachedSubdevs
          (MediaInfo *this,media_device *param_1,uint param_2,rk_sensor_full_info_t *param_3)

{
  int iVar1;
  undefined4 uVar2;
  MediaInfo *pMVar3;
  string *this_00;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  char *__needle;
  string asStack_40 [28];
  
  iVar1 = DAT_00023ee0;
  __needle = (char *)(DAT_00023edc + 0x23d58);
  uVar6 = 0;
  do {
    if (uVar6 == param_2) {
      return this;
    }
    uVar2 = media_get_entity(param_1,uVar6);
    pMVar3 = (MediaInfo *)media_entity_get_info();
    this = pMVar3;
    if (pMVar3 != (MediaInfo *)0x0) {
      if (*(int *)(pMVar3 + 0x24) == DAT_00023ee4) {
        if ((pMVar3[4] == (MediaInfo)0x6d) &&
           (this = (MediaInfo *)strncmp((char *)(pMVar3 + 4),*(char **)(param_3 + 0x120),3),
           this == (MediaInfo *)0x0)) {
          if (*(int *)(pMVar3 + 0x2c) == 1) {
            uVar2 = media_entity_get_devname(uVar2);
            FUN_00023ad8(asStack_40,uVar2);
            this_00 = (string *)(param_3 + 0x80);
          }
          else {
            uVar2 = media_entity_get_devname(uVar2);
            FUN_00023ad8(asStack_40,uVar2);
            this_00 = (string *)(param_3 + 0x68);
          }
LAB_00023de0:
          std::__cxx11::string::operator=(this_00,asStack_40);
          this = (MediaInfo *)std::__cxx11::string::_M_dispose();
        }
      }
      else if ((*(int *)(pMVar3 + 0x24) == iVar1) && (pMVar3[4] == (MediaInfo)0x6d)) {
        this = (MediaInfo *)strncmp((char *)(pMVar3 + 4),*(char **)(param_3 + 0x120),3);
        if (this == (MediaInfo *)0x0) {
          pcVar4 = strstr((char *)(pMVar3 + 4),__needle);
          if (pcVar4 == (char *)0x0) {
            iVar5 = *(int *)(param_3 + 0x98);
            *(int *)(param_3 + 0x98) = iVar5 + 1;
            this_00 = (string *)(param_3 + iVar5 * 0x18 + 0x9c);
            uVar2 = media_entity_get_devname(uVar2);
            FUN_00023ad8(asStack_40,uVar2);
          }
          else {
            iVar5 = *(int *)(param_3 + 0xd0);
            *(int *)(param_3 + 0xd0) = iVar5 + 1;
            this_00 = (string *)(param_3 + iVar5 * 0x18 + 0xd4);
            uVar2 = media_entity_get_devname(uVar2);
            FUN_00023ad8(asStack_40,uVar2);
          }
          goto LAB_00023de0;
        }
      }
    }
    uVar6 = uVar6 + 1;
  } while( true );
}



/* ===== rk_sensor_full_info_t::rk_sensor_full_info_t @ 00023ee8 size=212 ===== */

/* rk_sensor_full_info_t::rk_sensor_full_info_t() */

void __thiscall rk_sensor_full_info_t::rk_sensor_full_info_t(rk_sensor_full_info_t *this)

{
  *(rk_sensor_full_info_t **)this = this + 8;
  *(rk_sensor_full_info_t **)(this + 0x18) = this + 0x20;
  *(undefined4 *)(this + 4) = 0;
  *(rk_sensor_full_info_t **)(this + 0x30) = this + 0x38;
  this[8] = (rk_sensor_full_info_t)0x0;
  *(rk_sensor_full_info_t **)(this + 0x48) = this + 0x50;
  *(undefined4 *)(this + 0x1c) = 0;
  *(rk_sensor_full_info_t **)(this + 0x68) = this + 0x70;
  this[0x20] = (rk_sensor_full_info_t)0x0;
  *(rk_sensor_full_info_t **)(this + 0x80) = this + 0x88;
  *(undefined4 *)(this + 0x34) = 0;
  *(rk_sensor_full_info_t **)(this + 0x9c) = this + 0xa4;
  this[0x38] = (rk_sensor_full_info_t)0x0;
  *(rk_sensor_full_info_t **)(this + 0xb4) = this + 0xbc;
  *(undefined4 *)(this + 0x4c) = 0;
  *(rk_sensor_full_info_t **)(this + 0xd4) = this + 0xdc;
  this[0x50] = (rk_sensor_full_info_t)0x0;
  *(rk_sensor_full_info_t **)(this + 0xec) = this + 0xf4;
  *(undefined4 *)(this + 0x6c) = 0;
  *(rk_sensor_full_info_t **)(this + 0x108) = this + 0x110;
  this[0x70] = (rk_sensor_full_info_t)0x0;
  *(undefined4 *)(this + 0x84) = 0;
  this[0x88] = (rk_sensor_full_info_t)0x0;
  *(undefined4 *)(this + 0xa0) = 0;
  this[0xa4] = (rk_sensor_full_info_t)0x0;
  *(undefined4 *)(this + 0xb8) = 0;
  this[0xbc] = (rk_sensor_full_info_t)0x0;
  *(undefined4 *)(this + 0xd8) = 0;
  this[0xdc] = (rk_sensor_full_info_t)0x0;
  *(undefined4 *)(this + 0xf0) = 0;
  this[0xf4] = (rk_sensor_full_info_t)0x0;
  *(undefined4 *)(this + 0x10c) = 0;
  this[0x110] = (rk_sensor_full_info_t)0x0;
  *(rk_sensor_full_info_t **)(this + 0x120) = this + 0x128;
  *(undefined4 *)(this + 0x124) = 0;
  this[0x128] = (rk_sensor_full_info_t)0x0;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  return;
}



/* ===== RkRawStream::MediaInfo::getCamHwEntNames @ 00023fbc size=64 ===== */

/* RkRawStream::MediaInfo::getCamHwEntNames(char (*) [32]) */

void __thiscall RkRawStream::MediaInfo::getCamHwEntNames(MediaInfo *this,char *param_1)

{
  _Rb_tree_node_base *p_Var1;
  
  p_Var1 = *(_Rb_tree_node_base **)(this + 0x33a0);
  while (p_Var1 != (_Rb_tree_node_base *)(this + 0x3398)) {
    strcpy(param_1,*(char **)(p_Var1 + 0x10));
    p_Var1 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var1);
    param_1 = param_1 + 0x20;
  }
  return;
}



/* ===== __gnu_cxx::__to_xstring<std::__cxx11::string,char> @ 00023ffc size=172 ===== */

/* std::__cxx11::string __gnu_cxx::__to_xstring<std::__cxx11::string, char>(int (*)(char*, unsigned
   int, char const*, std::__va_list), unsigned int, char const*, ...) */

__gnu_cxx * __thiscall
__gnu_cxx::__to_xstring<std::__cxx11::string,char>
          (__gnu_cxx *this,_func_int_char_ptr_uint_char_ptr___va_list *param_1,uint param_2,
          char *param_3,...)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_1c;
  
  iVar1 = -(param_2 + 7 & 0xfffffff8);
  local_1c = (*param_1)(&stack0xffffffe0 + iVar1,param_2,param_3,0);
  *(__gnu_cxx **)this = this + 8;
  iVar2 = local_1c + iVar1;
  if (0xf < local_1c) {
    uVar3 = std::__cxx11::string::_M_create((uint *)this,(uint)&local_1c);
    *(uint *)(this + 8) = local_1c;
    *(undefined4 *)this = uVar3;
  }
  std::__cxx11::string::_S_copy_chars
            (*(char **)this,&stack0xffffffe0 + iVar1,&stack0xffffffe0 + iVar2);
  *(uint *)(this + 4) = local_1c;
  *(undefined1 *)(*(int *)this + local_1c) = 0;
  return this;
}



/* ===== std::vector<rk_frame_fmt_s,std::allocator<rk_frame_fmt_s>>::_M_realloc_insert<rk_frame_fmt_s_const&> @ 000240a8 size=228 ===== */

/* void std::vector<rk_frame_fmt_s, std::allocator<rk_frame_fmt_s>
   >::_M_realloc_insert<rk_frame_fmt_s const&>(__gnu_cxx::__normal_iterator<rk_frame_fmt_s*,
   std::vector<rk_frame_fmt_s, std::allocator<rk_frame_fmt_s> > >, rk_frame_fmt_s const&) */

void __thiscall
std::vector<rk_frame_fmt_s,std::allocator<rk_frame_fmt_s>>::_M_realloc_insert<rk_frame_fmt_s_const&>
          (vector<rk_frame_fmt_s,std::allocator<rk_frame_fmt_s>> *this,void *param_2,
          undefined4 *param_3)

{
  void *__dest;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  void *__src;
  void *pvVar8;
  size_t __n;
  void *__dest_00;
  undefined4 *puVar9;
  
  __src = *(void **)this;
  pvVar8 = *(void **)(this + 4);
  __n = (int)param_2 - (int)__src;
  uVar5 = DAT_0002418c * ((int)pvVar8 - (int)__src >> 2);
  uVar3 = uVar5;
  if (uVar5 == 0) {
    uVar3 = 1;
  }
  uVar6 = uVar5 + uVar3;
  uVar7 = DAT_00024190;
  if (((CARRY4(uVar5,uVar3)) || (DAT_00024190 < uVar6)) || (uVar7 = uVar6, uVar6 != 0)) {
    __dest = operator_new(uVar7 * 0x14);
  }
  else {
    __dest = (void *)0x0;
  }
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar4 = param_3[3];
  puVar9 = (undefined4 *)((int)__dest + __n);
  *puVar9 = *param_3;
  puVar9[1] = uVar1;
  puVar9[2] = uVar2;
  puVar9[3] = uVar4;
  puVar9[4] = param_3[4];
  if (param_2 != __src) {
    memmove(__dest,__src,__n);
  }
  __dest_00 = (void *)((int)__dest + __n + 0x14);
  if (param_2 != pvVar8) {
    memcpy(__dest_00,param_2,(int)pvVar8 - (int)param_2);
  }
  if (__src != (void *)0x0) {
    operator_delete(__src);
  }
  *(void **)this = __dest;
  *(int *)(this + 4) = (int)__dest_00 + ((int)pvVar8 - (int)param_2);
  *(void **)(this + 8) = (void *)(uVar7 * 0x14 + (int)__dest);
  return;
}



/* ===== rk_sensor_full_info_t::~rk_sensor_full_info_t @ 00024194 size=128 ===== */

/* rk_sensor_full_info_t::~rk_sensor_full_info_t() */

rk_sensor_full_info_t * __thiscall
rk_sensor_full_info_t::~rk_sensor_full_info_t(rk_sensor_full_info_t *this)

{
  if (*(void **)(this + 0x13c) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x13c));
  }
  std::__cxx11::string::_M_dispose();
  std::__cxx11::string::_M_dispose();
  std::__cxx11::string::_M_dispose();
  std::__cxx11::string::_M_dispose();
  std::__cxx11::string::_M_dispose();
  std::__cxx11::string::_M_dispose();
  std::__cxx11::string::_M_dispose();
  std::__cxx11::string::_M_dispose();
  std::__cxx11::string::_M_dispose();
  std::__cxx11::string::_M_dispose();
  std::__cxx11::string::_M_dispose();
  std::__cxx11::string::_M_dispose();
  return this;
}



/* ===== XCam::SmartPtr<rk_sensor_full_info_t>::release @ 00024214 size=160 ===== */

/* XCam::SmartPtr<rk_sensor_full_info_t>::release() */

void __thiscall
XCam::SmartPtr<rk_sensor_full_info_t>::release(SmartPtr<rk_sensor_full_info_t> *this)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  rk_sensor_full_info_t *this_00;
  
  if (*(int *)this != 0) {
    DataMemoryBarrier(0xb);
    piVar3 = (int *)(*(int *)(this + 4) + 4);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    DataMemoryBarrier(0xb);
    if (iVar2 + -1 == 0) {
      iVar2 = (**(code **)(**(int **)(this + 4) + 8))();
      if ((iVar2 == 0) && (*(int **)(this + 4) != (int *)0x0)) {
        (**(code **)(**(int **)(this + 4) + 4))();
      }
      this_00 = *(rk_sensor_full_info_t **)this;
      if (this_00 != (rk_sensor_full_info_t *)0x0) {
        rk_sensor_full_info_t::~rk_sensor_full_info_t(this_00);
        operator_delete(this_00,0x15ac);
      }
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    return;
  }
  return;
}



/* ===== XCam::SmartPtr<rk_sensor_full_info_t>::operator= @ 000242b4 size=80 ===== */

/* XCam::SmartPtr<rk_sensor_full_info_t>::TEMPNAMEPLACEHOLDERVALUE(rk_sensor_full_info_t*) */

SmartPtr<rk_sensor_full_info_t> * __thiscall
XCam::SmartPtr<rk_sensor_full_info_t>::operator=
          (SmartPtr<rk_sensor_full_info_t> *this,rk_sensor_full_info_t *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_00024304;
  release(this);
  if (param_1 != (rk_sensor_full_info_t *)0x0) {
    *(rk_sensor_full_info_t **)this = param_1;
    piVar1 = operator_new(8);
    piVar1[1] = 1;
    iVar2 = *(int *)(iVar2 + 0x242d4 + DAT_00024308);
    *(int **)(this + 4) = piVar1;
    *piVar1 = iVar2 + 8;
  }
  return this;
}



/* ===== std::_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>::_M_erase @ 0002430c size=72 ===== */

/* std::_Rb_tree<std::__cxx11::string, std::pair<std::__cxx11::string const,
   XCam::SmartPtr<rk_sensor_full_info_t> >, std::_Select1st<std::pair<std::__cxx11::string const,
   XCam::SmartPtr<rk_sensor_full_info_t> > >, std::less<std::__cxx11::string >,
   std::allocator<std::pair<std::__cxx11::string const, XCam::SmartPtr<rk_sensor_full_info_t> > >
   >::_M_erase(std::_Rb_tree_node<std::pair<std::__cxx11::string const,
   XCam::SmartPtr<rk_sensor_full_info_t> > >*) */

void __thiscall
std::
_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
::_M_erase(_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
           *this,_Rb_tree_node *param_1)

{
  _Rb_tree_node *p_Var1;
  
  while (param_1 != (_Rb_tree_node *)0x0) {
    _M_erase(this,*(_Rb_tree_node **)(param_1 + 0xc));
    p_Var1 = *(_Rb_tree_node **)(param_1 + 8);
    XCam::SmartPtr<rk_sensor_full_info_t>::release
              ((SmartPtr<rk_sensor_full_info_t> *)(param_1 + 0x28));
    std::__cxx11::string::_M_dispose();
    operator_delete(param_1);
    param_1 = p_Var1;
  }
  return;
}



/* ===== XCam::SmartPtr<rk_aiq_static_info_t>::release @ 00024354 size=140 ===== */

/* XCam::SmartPtr<rk_aiq_static_info_t>::release() */

void __thiscall XCam::SmartPtr<rk_aiq_static_info_t>::release(SmartPtr<rk_aiq_static_info_t> *this)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)this != 0) {
    DataMemoryBarrier(0xb);
    piVar3 = (int *)(*(int *)(this + 4) + 4);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    DataMemoryBarrier(0xb);
    if (iVar2 + -1 == 0) {
      iVar2 = (**(code **)(**(int **)(this + 4) + 8))();
      if ((iVar2 == 0) && (*(int **)(this + 4) != (int *)0x0)) {
        (**(code **)(**(int **)(this + 4) + 4))();
      }
      operator_delete(*(void **)this,0x130);
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    return;
  }
  return;
}



/* ===== XCam::SmartPtr<rk_aiq_static_info_t>::operator= @ 000243e0 size=80 ===== */

/* XCam::SmartPtr<rk_aiq_static_info_t>::TEMPNAMEPLACEHOLDERVALUE(rk_aiq_static_info_t*) */

SmartPtr<rk_aiq_static_info_t> * __thiscall
XCam::SmartPtr<rk_aiq_static_info_t>::operator=
          (SmartPtr<rk_aiq_static_info_t> *this,rk_aiq_static_info_t *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_00024430;
  release(this);
  if (param_1 != (rk_aiq_static_info_t *)0x0) {
    *(rk_aiq_static_info_t **)this = param_1;
    piVar1 = operator_new(8);
    piVar1[1] = 1;
    iVar2 = *(int *)(iVar2 + 0x24400 + DAT_00024434);
    *(int **)(this + 4) = piVar1;
    *piVar1 = iVar2 + 8;
  }
  return this;
}



/* ===== std::_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>::_M_erase @ 00024438 size=72 ===== */

/* std::_Rb_tree<std::__cxx11::string, std::pair<std::__cxx11::string const,
   XCam::SmartPtr<rk_aiq_static_info_t> >, std::_Select1st<std::pair<std::__cxx11::string const,
   XCam::SmartPtr<rk_aiq_static_info_t> > >, std::less<std::__cxx11::string >,
   std::allocator<std::pair<std::__cxx11::string const, XCam::SmartPtr<rk_aiq_static_info_t> > >
   >::_M_erase(std::_Rb_tree_node<std::pair<std::__cxx11::string const,
   XCam::SmartPtr<rk_aiq_static_info_t> > >*) */

void __thiscall
std::
_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
::_M_erase(_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
           *this,_Rb_tree_node *param_1)

{
  _Rb_tree_node *p_Var1;
  
  while (param_1 != (_Rb_tree_node *)0x0) {
    _M_erase(this,*(_Rb_tree_node **)(param_1 + 0xc));
    p_Var1 = *(_Rb_tree_node **)(param_1 + 8);
    XCam::SmartPtr<rk_aiq_static_info_t>::release
              ((SmartPtr<rk_aiq_static_info_t> *)(param_1 + 0x28));
    std::__cxx11::string::_M_dispose();
    operator_delete(param_1);
    param_1 = p_Var1;
  }
  return;
}



/* ===== RkRawStream::MediaInfo::~MediaInfo @ 00024480 size=76 ===== */

/* RkRawStream::MediaInfo::~MediaInfo() */

MediaInfo * __thiscall RkRawStream::MediaInfo::~MediaInfo(MediaInfo *this)

{
  *(int *)this = *(int *)(DAT_000244cc + 0x24490 + DAT_000244d0) + 8;
  std::
  _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
  ::_M_erase((_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
              *)(this + 0x3394),*(_Rb_tree_node **)(this + 0x339c));
  std::
  _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
  ::_M_erase((_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
              *)(this + 0x337c),*(_Rb_tree_node **)(this + 0x3384));
  return this;
}



/* ===== RkRawStream::MediaInfo::~MediaInfo @ 000244d4 size=32 ===== */

/* RkRawStream::MediaInfo::~MediaInfo() */

MediaInfo * __thiscall RkRawStream::MediaInfo::~MediaInfo(MediaInfo *this)

{
  ~MediaInfo(this);
  operator_delete(this,0x33b0);
  return this;
}



/* ===== RkRawStream::MediaInfo::clearStaticCamHwInfo @ 000244f4 size=96 ===== */

/* RkRawStream::MediaInfo::clearStaticCamHwInfo() */

undefined4 __thiscall RkRawStream::MediaInfo::clearStaticCamHwInfo(MediaInfo *this)

{
  std::
  _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
  ::_M_erase((_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
              *)(this + 0x337c),*(_Rb_tree_node **)(this + 0x3384));
  *(undefined4 *)(this + 0x3384) = 0;
  *(MediaInfo **)(this + 0x3388) = this + 0x3380;
  *(MediaInfo **)(this + 0x338c) = this + 0x3380;
  *(undefined4 *)(this + 0x3390) = 0;
  std::
  _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
  ::_M_erase((_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
              *)(this + 0x3394),*(_Rb_tree_node **)(this + 0x339c));
  *(undefined4 *)(this + 0x339c) = 0;
  *(MediaInfo **)(this + 0x33a0) = this + 0x3398;
  *(MediaInfo **)(this + 0x33a4) = this + 0x3398;
  *(undefined4 *)(this + 0x33a8) = 0;
  return 0;
}



/* ===== std::operator< @ 00024554 size=16 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* bool std::TEMPNAMEPLACEHOLDERVALUE(std::__cxx11::string const&, std::__cxx11::string const&) */

bool std::operator<(string *param_1,string *param_2)

{
  byte extraout_var;
  
  std::__cxx11::string::compare(param_1);
  return (bool)(extraout_var >> 7);
}



/* ===== FUN_00024564 @ 00024564 size=64 ===== */

int FUN_00024564(int param_1,int param_2,string *param_3)

{
  bool bVar1;
  
  while (param_1 != 0) {
    bVar1 = std::operator<((string *)(param_1 + 0x10),param_3);
    if (bVar1) {
      param_1 = *(int *)(param_1 + 0xc);
    }
    else {
      param_1 = *(int *)(param_1 + 8);
      param_2 = param_1;
    }
  }
  return param_2;
}



/* ===== std::_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>::erase @ 000245a4 size=336 ===== */

/* std::_Rb_tree<std::__cxx11::string, std::pair<std::__cxx11::string const,
   XCam::SmartPtr<rk_aiq_static_info_t> >, std::_Select1st<std::pair<std::__cxx11::string const,
   XCam::SmartPtr<rk_aiq_static_info_t> > >, std::less<std::__cxx11::string >,
   std::allocator<std::pair<std::__cxx11::string const, XCam::SmartPtr<rk_aiq_static_info_t> > >
   >::erase(std::__cxx11::string const&) */

int __thiscall
std::
_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
::erase(_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
        *this,string *param_1)

{
  bool bVar1;
  _Rb_tree_node_base *p_Var2;
  void *pvVar3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  _Rb_tree_node_base *p_Var6;
  int iVar7;
  _Rb_tree_node_base *p_Var8;
  
  p_Var8 = (_Rb_tree_node_base *)(this + 4);
  p_Var2 = p_Var8;
  p_Var6 = *(_Rb_tree_node_base **)(this + 8);
  do {
    while( true ) {
      p_Var5 = p_Var6;
      p_Var4 = p_Var2;
      p_Var2 = p_Var4;
      if (p_Var5 == (_Rb_tree_node_base *)0x0) goto LAB_00024658;
      bVar1 = operator<((string *)(p_Var5 + 0x10),param_1);
      if (!bVar1) break;
      p_Var6 = *(_Rb_tree_node_base **)(p_Var5 + 0xc);
    }
    bVar1 = operator<(param_1,(string *)(p_Var5 + 0x10));
    p_Var2 = p_Var5;
    p_Var6 = *(_Rb_tree_node_base **)(p_Var5 + 8);
  } while (bVar1);
  p_Var6 = *(_Rb_tree_node_base **)(p_Var5 + 0xc);
  p_Var2 = (_Rb_tree_node_base *)FUN_00024564(*(_Rb_tree_node_base **)(p_Var5 + 8),p_Var5,param_1);
  while (p_Var6 != (_Rb_tree_node_base *)0x0) {
    bVar1 = operator<(param_1,(string *)(p_Var6 + 0x10));
    if (bVar1) {
      p_Var4 = p_Var6;
      p_Var6 = *(_Rb_tree_node_base **)(p_Var6 + 8);
    }
    else {
      p_Var6 = *(_Rb_tree_node_base **)(p_Var6 + 0xc);
    }
  }
LAB_00024658:
  iVar7 = *(int *)(this + 0x14);
  if (*(_Rb_tree_node_base **)(this + 0xc) == p_Var2 && p_Var8 == p_Var4) {
    _M_erase(this,*(_Rb_tree_node **)(this + 8));
    *(_Rb_tree_node_base **)(this + 0xc) = p_Var8;
    *(undefined4 *)(this + 8) = 0;
    *(_Rb_tree_node_base **)(this + 0x10) = p_Var8;
    *(undefined4 *)(this + 0x14) = 0;
  }
  else {
    while (p_Var2 != p_Var4) {
      p_Var6 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var2);
      pvVar3 = (void *)std::_Rb_tree_rebalance_for_erase(p_Var2,p_Var8);
      XCam::SmartPtr<rk_aiq_static_info_t>::release
                ((SmartPtr<rk_aiq_static_info_t> *)((int)pvVar3 + 0x28));
      std::__cxx11::string::_M_dispose();
      operator_delete(pvVar3);
      *(int *)(this + 0x14) = *(int *)(this + 0x14) + -1;
      p_Var2 = p_Var6;
    }
  }
  return iVar7 - *(int *)(this + 0x14);
}



/* ===== std::_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>::find @ 000246f4 size=68 ===== */

/* std::_Rb_tree<std::__cxx11::string, std::pair<std::__cxx11::string const,
   XCam::SmartPtr<rk_aiq_static_info_t> >, std::_Select1st<std::pair<std::__cxx11::string const,
   XCam::SmartPtr<rk_aiq_static_info_t> > >, std::less<std::__cxx11::string >,
   std::allocator<std::pair<std::__cxx11::string const, XCam::SmartPtr<rk_aiq_static_info_t> > >
   >::find(std::__cxx11::string const&) */

_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
* __thiscall
std::
_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
::find(_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
       *this,string *param_1)

{
  bool bVar1;
  _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
  *p_Var2;
  _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
  *p_Var3;
  
  p_Var3 = this + 4;
  p_Var2 = (_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
            *)FUN_00024564(*(undefined4 *)(this + 8),p_Var3,param_1);
  if ((p_Var3 != p_Var2) && (bVar1 = operator<(param_1,(string *)(p_Var2 + 0x10)), bVar1)) {
    p_Var2 = p_Var3;
  }
  return p_Var2;
}



/* ===== RkRawStream::MediaInfo::getStaticCamHwInfo @ 00024738 size=192 ===== */

/* RkRawStream::MediaInfo::getStaticCamHwInfo(char const*, unsigned short) */

undefined4 __thiscall
RkRawStream::MediaInfo::getStaticCamHwInfo(MediaInfo *this,char *param_1,ushort param_2)

{
  MediaInfo *pMVar1;
  _Rb_tree_node_base *p_Var2;
  undefined4 uVar3;
  uint uVar4;
  string asStack_30 [28];
  
  if (param_1 == (char *)0x0) {
    uVar3 = 0;
    if ((uint)param_2 < *(uint *)(this + 0x3390)) {
      p_Var2 = *(_Rb_tree_node_base **)(this + 0x3388);
      uVar4 = 0;
      while (p_Var2 != (_Rb_tree_node_base *)(this + 0x3380)) {
        if (param_2 == uVar4) {
          return *(undefined4 *)(p_Var2 + 0x28);
        }
        p_Var2 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var2);
        uVar4 = uVar4 + 1;
      }
    }
  }
  else {
    FUN_00023ad8(asStack_30);
    pMVar1 = (MediaInfo *)
             std::
             _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
             ::find((_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
                     *)(this + 0x337c),asStack_30);
    if (pMVar1 == this + 0x3380) {
      xcam_print_log(0x22,0xff,1,DAT_00024804 + 0x247a4,param_1);
      uVar3 = 0;
      std::__cxx11::string::_M_dispose();
    }
    else {
      uVar3 = *(undefined4 *)(pMVar1 + 0x28);
      std::__cxx11::string::_M_dispose();
    }
  }
  return uVar3;
}



/* ===== FUN_00024808 @ 00024808 size=64 ===== */

int FUN_00024808(int param_1,int param_2,string *param_3)

{
  bool bVar1;
  
  while (param_1 != 0) {
    bVar1 = std::operator<((string *)(param_1 + 0x10),param_3);
    if (bVar1) {
      param_1 = *(int *)(param_1 + 0xc);
    }
    else {
      param_1 = *(int *)(param_1 + 8);
      param_2 = param_1;
    }
  }
  return param_2;
}



/* ===== std::_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>::erase @ 00024848 size=336 ===== */

/* std::_Rb_tree<std::__cxx11::string, std::pair<std::__cxx11::string const,
   XCam::SmartPtr<rk_sensor_full_info_t> >, std::_Select1st<std::pair<std::__cxx11::string const,
   XCam::SmartPtr<rk_sensor_full_info_t> > >, std::less<std::__cxx11::string >,
   std::allocator<std::pair<std::__cxx11::string const, XCam::SmartPtr<rk_sensor_full_info_t> > >
   >::erase(std::__cxx11::string const&) */

int __thiscall
std::
_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
::erase(_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
        *this,string *param_1)

{
  bool bVar1;
  _Rb_tree_node_base *p_Var2;
  void *pvVar3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  _Rb_tree_node_base *p_Var6;
  int iVar7;
  _Rb_tree_node_base *p_Var8;
  
  p_Var8 = (_Rb_tree_node_base *)(this + 4);
  p_Var2 = p_Var8;
  p_Var6 = *(_Rb_tree_node_base **)(this + 8);
  do {
    while( true ) {
      p_Var5 = p_Var6;
      p_Var4 = p_Var2;
      p_Var2 = p_Var4;
      if (p_Var5 == (_Rb_tree_node_base *)0x0) goto LAB_000248fc;
      bVar1 = operator<((string *)(p_Var5 + 0x10),param_1);
      if (!bVar1) break;
      p_Var6 = *(_Rb_tree_node_base **)(p_Var5 + 0xc);
    }
    bVar1 = operator<(param_1,(string *)(p_Var5 + 0x10));
    p_Var2 = p_Var5;
    p_Var6 = *(_Rb_tree_node_base **)(p_Var5 + 8);
  } while (bVar1);
  p_Var6 = *(_Rb_tree_node_base **)(p_Var5 + 0xc);
  p_Var2 = (_Rb_tree_node_base *)FUN_00024808(*(_Rb_tree_node_base **)(p_Var5 + 8),p_Var5,param_1);
  while (p_Var6 != (_Rb_tree_node_base *)0x0) {
    bVar1 = operator<(param_1,(string *)(p_Var6 + 0x10));
    if (bVar1) {
      p_Var4 = p_Var6;
      p_Var6 = *(_Rb_tree_node_base **)(p_Var6 + 8);
    }
    else {
      p_Var6 = *(_Rb_tree_node_base **)(p_Var6 + 0xc);
    }
  }
LAB_000248fc:
  iVar7 = *(int *)(this + 0x14);
  if (*(_Rb_tree_node_base **)(this + 0xc) == p_Var2 && p_Var8 == p_Var4) {
    _M_erase(this,*(_Rb_tree_node **)(this + 8));
    *(_Rb_tree_node_base **)(this + 0xc) = p_Var8;
    *(undefined4 *)(this + 8) = 0;
    *(_Rb_tree_node_base **)(this + 0x10) = p_Var8;
    *(undefined4 *)(this + 0x14) = 0;
  }
  else {
    while (p_Var2 != p_Var4) {
      p_Var6 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var2);
      pvVar3 = (void *)std::_Rb_tree_rebalance_for_erase(p_Var2,p_Var8);
      XCam::SmartPtr<rk_sensor_full_info_t>::release
                ((SmartPtr<rk_sensor_full_info_t> *)((int)pvVar3 + 0x28));
      std::__cxx11::string::_M_dispose();
      operator_delete(pvVar3);
      *(int *)(this + 0x14) = *(int *)(this + 0x14) + -1;
      p_Var2 = p_Var6;
    }
  }
  return iVar7 - *(int *)(this + 0x14);
}



/* ===== RkRawStream::MediaInfo::getSensorFullInfo @ 00024998 size=228 ===== */

/* RkRawStream::MediaInfo::getSensorFullInfo(char*, unsigned short) */

undefined4 __thiscall
RkRawStream::MediaInfo::getSensorFullInfo(MediaInfo *this,char *param_1,ushort param_2)

{
  bool bVar1;
  MediaInfo *pMVar2;
  _Rb_tree_node_base *p_Var3;
  undefined4 uVar4;
  uint uVar5;
  string asStack_30 [24];
  
  if (param_1 == (char *)0x0) {
    uVar4 = 0;
    if ((uint)param_2 < *(uint *)(this + 0x33a8)) {
      p_Var3 = *(_Rb_tree_node_base **)(this + 0x33a0);
      uVar5 = 0;
      while (p_Var3 != (_Rb_tree_node_base *)(this + 0x3398)) {
        if (param_2 == uVar5) {
          return *(undefined4 *)(p_Var3 + 0x28);
        }
        p_Var3 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var3);
        uVar5 = uVar5 + 1;
      }
    }
  }
  else {
    FUN_00023ad8(asStack_30);
    pMVar2 = (MediaInfo *)FUN_00024808(*(undefined4 *)(this + 0x339c),this + 0x3398,asStack_30);
    if ((this + 0x3398 == pMVar2) ||
       (bVar1 = std::operator<(asStack_30,(string *)(pMVar2 + 0x10)), bVar1)) {
      xcam_print_log(0x22,0xff,1,DAT_00024a88 + 0x24a80,param_1);
      uVar4 = 0;
      std::__cxx11::string::_M_dispose();
    }
    else {
      uVar4 = *(undefined4 *)(pMVar2 + 0x28);
      std::__cxx11::string::_M_dispose();
    }
  }
  return uVar4;
}



/* ===== std::_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>::_M_get_insert_unique_pos @ 00024a8c size=164 ===== */

/* std::_Rb_tree<std::__cxx11::string, std::pair<std::__cxx11::string const,
   XCam::SmartPtr<rk_sensor_full_info_t> >, std::_Select1st<std::pair<std::__cxx11::string const,
   XCam::SmartPtr<rk_sensor_full_info_t> > >, std::less<std::__cxx11::string >,
   std::allocator<std::pair<std::__cxx11::string const, XCam::SmartPtr<rk_sensor_full_info_t> > >
   >::_M_get_insert_unique_pos(std::__cxx11::string const&) */

string * std::
         _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
         ::_M_get_insert_unique_pos(string *param_1)

{
  bool bVar1;
  _Rb_tree_node_base *p_Var2;
  int in_r1;
  string *in_r2;
  _Rb_tree_node_base *p_Var3;
  
  bVar1 = true;
  p_Var2 = *(_Rb_tree_node_base **)(in_r1 + 8);
  p_Var3 = (_Rb_tree_node_base *)(in_r1 + 4);
  while (p_Var2 != (_Rb_tree_node_base *)0x0) {
    bVar1 = operator<(in_r2,(string *)(p_Var2 + 0x10));
    p_Var3 = p_Var2;
    if (bVar1) {
      p_Var2 = *(_Rb_tree_node_base **)(p_Var2 + 8);
    }
    else {
      p_Var2 = *(_Rb_tree_node_base **)(p_Var2 + 0xc);
    }
  }
  p_Var2 = p_Var3;
  if (bVar1 != false) {
    if (*(_Rb_tree_node_base **)(in_r1 + 0xc) == p_Var3) {
      *(undefined4 *)param_1 = 0;
      goto LAB_00024b1c;
    }
    p_Var2 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var3);
  }
  bVar1 = operator<((string *)(p_Var2 + 0x10),in_r2);
  if (!bVar1) {
    *(_Rb_tree_node_base **)param_1 = p_Var2;
    *(undefined4 *)(param_1 + 4) = 0;
    return param_1;
  }
  *(undefined4 *)param_1 = 0;
LAB_00024b1c:
  *(_Rb_tree_node_base **)(param_1 + 4) = p_Var3;
  return param_1;
}



/* ===== std::map<std::__cxx11::string,XCam::SmartPtr<rk_sensor_full_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>::operator[] @ 00024b30 size=504 ===== */

/* std::map<std::__cxx11::string, XCam::SmartPtr<rk_sensor_full_info_t>,
   std::less<std::__cxx11::string >, std::allocator<std::pair<std::__cxx11::string const,
   XCam::SmartPtr<rk_sensor_full_info_t> > > >::operator[](std::__cxx11::string const&) */

map<std::__cxx11::string,XCam::SmartPtr<rk_sensor_full_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
* __thiscall
std::
map<std::__cxx11::string,XCam::SmartPtr<rk_sensor_full_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
::operator[](map<std::__cxx11::string,XCam::SmartPtr<rk_sensor_full_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
             *this,string *param_1)

{
  bool bVar1;
  map<std::__cxx11::string,XCam::SmartPtr<rk_sensor_full_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
  *pmVar2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *p_Var4;
  map<std::__cxx11::string,XCam::SmartPtr<rk_sensor_full_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
  *pmVar5;
  map<std::__cxx11::string,XCam::SmartPtr<rk_sensor_full_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
  *pmVar6;
  _Rb_tree_node_base *p_Var7;
  string *this_00;
  _Rb_tree_node_base *p_Var8;
  map<std::__cxx11::string,XCam::SmartPtr<rk_sensor_full_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
  *local_28;
  string *psStack_24;
  
  p_Var8 = (_Rb_tree_node_base *)(this + 4);
  local_28 = this;
  psStack_24 = param_1;
  pmVar2 = (map<std::__cxx11::string,XCam::SmartPtr<rk_sensor_full_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
            *)FUN_00024808(*(undefined4 *)(this + 8),p_Var8,param_1);
  if ((p_Var8 != (_Rb_tree_node_base *)pmVar2) &&
     (bVar1 = operator<(param_1,(string *)(pmVar2 + 0x10)), !bVar1)) goto LAB_00024c9c;
  p_Var3 = operator_new(0x30);
  this_00 = (string *)(p_Var3 + 0x10);
  std::__cxx11::string::string(this_00,param_1);
  *(undefined4 *)(p_Var3 + 0x28) = 0;
  *(undefined4 *)(p_Var3 + 0x2c) = 0;
  if (p_Var8 == (_Rb_tree_node_base *)pmVar2) {
    if (*(int *)(this + 0x14) != 0) {
      p_Var7 = *(_Rb_tree_node_base **)(this + 0x10);
      bVar1 = operator<((string *)(p_Var7 + 0x10),this_00);
      if (bVar1) {
        pmVar6 = (map<std::__cxx11::string,XCam::SmartPtr<rk_sensor_full_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
                  *)0x0;
        goto LAB_00024c50;
      }
    }
LAB_00024bc8:
    _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
    ::_M_get_insert_unique_pos((string *)&local_28);
    pmVar6 = local_28;
    p_Var7 = (_Rb_tree_node_base *)psStack_24;
LAB_00024c50:
    pmVar2 = pmVar6;
    if (p_Var7 != (_Rb_tree_node_base *)0x0) {
      bVar1 = p_Var8 == p_Var7 ||
              pmVar6 != (map<std::__cxx11::string,XCam::SmartPtr<rk_sensor_full_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
                         *)0x0;
      if (p_Var8 != p_Var7 &&
          pmVar6 == (map<std::__cxx11::string,XCam::SmartPtr<rk_sensor_full_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
                     *)0x0) {
        bVar1 = operator<(this_00,(string *)(p_Var7 + 0x10));
      }
      std::_Rb_tree_insert_and_rebalance(bVar1,p_Var3,p_Var7,p_Var8);
      *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
      pmVar2 = (map<std::__cxx11::string,XCam::SmartPtr<rk_sensor_full_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
                *)p_Var3;
      goto LAB_00024c9c;
    }
  }
  else {
    bVar1 = operator<(this_00,(string *)(pmVar2 + 0x10));
    p_Var7 = (_Rb_tree_node_base *)pmVar2;
    if (bVar1) {
      pmVar6 = pmVar2;
      if (*(_Rb_tree_node_base **)(this + 0xc) != (_Rb_tree_node_base *)pmVar2) {
        p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_decrement((_Rb_tree_node_base *)pmVar2);
        bVar1 = operator<((string *)(p_Var4 + 0x10),this_00);
        if (!bVar1) goto LAB_00024bc8;
        if (*(int *)(p_Var4 + 0xc) == 0) {
          pmVar6 = (map<std::__cxx11::string,XCam::SmartPtr<rk_sensor_full_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
                    *)0x0;
          p_Var7 = p_Var4;
        }
      }
      goto LAB_00024c50;
    }
    bVar1 = operator<((string *)(pmVar2 + 0x10),this_00);
    if (bVar1) {
      if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)pmVar2) {
        pmVar6 = (map<std::__cxx11::string,XCam::SmartPtr<rk_sensor_full_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
                  *)0x0;
      }
      else {
        pmVar5 = (map<std::__cxx11::string,XCam::SmartPtr<rk_sensor_full_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
                  *)std::_Rb_tree_increment((_Rb_tree_node_base *)pmVar2);
        bVar1 = operator<(this_00,(string *)(pmVar5 + 0x10));
        if (bVar1) {
          pmVar6 = (map<std::__cxx11::string,XCam::SmartPtr<rk_sensor_full_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
                    *)0x0;
          if (*(int *)(pmVar2 + 0xc) != 0) {
            pmVar6 = pmVar5;
            p_Var7 = (_Rb_tree_node_base *)pmVar5;
          }
        }
        else {
          _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
          ::_M_get_insert_unique_pos((string *)&local_28);
          pmVar6 = local_28;
          p_Var7 = (_Rb_tree_node_base *)psStack_24;
        }
      }
      goto LAB_00024c50;
    }
  }
  XCam::SmartPtr<rk_sensor_full_info_t>::release((SmartPtr<rk_sensor_full_info_t> *)(p_Var3 + 0x28))
  ;
  std::__cxx11::string::_M_dispose();
  operator_delete(p_Var3);
LAB_00024c9c:
  return pmVar2 + 0x28;
}



/* ===== std::_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>::_M_get_insert_unique_pos @ 00024d40 size=164 ===== */

/* std::_Rb_tree<std::__cxx11::string, std::pair<std::__cxx11::string const,
   XCam::SmartPtr<rk_aiq_static_info_t> >, std::_Select1st<std::pair<std::__cxx11::string const,
   XCam::SmartPtr<rk_aiq_static_info_t> > >, std::less<std::__cxx11::string >,
   std::allocator<std::pair<std::__cxx11::string const, XCam::SmartPtr<rk_aiq_static_info_t> > >
   >::_M_get_insert_unique_pos(std::__cxx11::string const&) */

string * std::
         _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
         ::_M_get_insert_unique_pos(string *param_1)

{
  bool bVar1;
  _Rb_tree_node_base *p_Var2;
  int in_r1;
  string *in_r2;
  _Rb_tree_node_base *p_Var3;
  
  bVar1 = true;
  p_Var2 = *(_Rb_tree_node_base **)(in_r1 + 8);
  p_Var3 = (_Rb_tree_node_base *)(in_r1 + 4);
  while (p_Var2 != (_Rb_tree_node_base *)0x0) {
    bVar1 = operator<(in_r2,(string *)(p_Var2 + 0x10));
    p_Var3 = p_Var2;
    if (bVar1) {
      p_Var2 = *(_Rb_tree_node_base **)(p_Var2 + 8);
    }
    else {
      p_Var2 = *(_Rb_tree_node_base **)(p_Var2 + 0xc);
    }
  }
  p_Var2 = p_Var3;
  if (bVar1 != false) {
    if (*(_Rb_tree_node_base **)(in_r1 + 0xc) == p_Var3) {
      *(undefined4 *)param_1 = 0;
      goto LAB_00024dd0;
    }
    p_Var2 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var3);
  }
  bVar1 = operator<((string *)(p_Var2 + 0x10),in_r2);
  if (!bVar1) {
    *(_Rb_tree_node_base **)param_1 = p_Var2;
    *(undefined4 *)(param_1 + 4) = 0;
    return param_1;
  }
  *(undefined4 *)param_1 = 0;
LAB_00024dd0:
  *(_Rb_tree_node_base **)(param_1 + 4) = p_Var3;
  return param_1;
}



/* ===== std::map<std::__cxx11::string,XCam::SmartPtr<rk_aiq_static_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>::operator[] @ 00024de4 size=504 ===== */

/* std::map<std::__cxx11::string, XCam::SmartPtr<rk_aiq_static_info_t>,
   std::less<std::__cxx11::string >, std::allocator<std::pair<std::__cxx11::string const,
   XCam::SmartPtr<rk_aiq_static_info_t> > > >::operator[](std::__cxx11::string const&) */

map<std::__cxx11::string,XCam::SmartPtr<rk_aiq_static_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
* __thiscall
std::
map<std::__cxx11::string,XCam::SmartPtr<rk_aiq_static_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
::operator[](map<std::__cxx11::string,XCam::SmartPtr<rk_aiq_static_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
             *this,string *param_1)

{
  bool bVar1;
  map<std::__cxx11::string,XCam::SmartPtr<rk_aiq_static_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
  *pmVar2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *p_Var4;
  map<std::__cxx11::string,XCam::SmartPtr<rk_aiq_static_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
  *pmVar5;
  map<std::__cxx11::string,XCam::SmartPtr<rk_aiq_static_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
  *pmVar6;
  _Rb_tree_node_base *p_Var7;
  string *this_00;
  _Rb_tree_node_base *p_Var8;
  map<std::__cxx11::string,XCam::SmartPtr<rk_aiq_static_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
  *local_28;
  string *psStack_24;
  
  p_Var8 = (_Rb_tree_node_base *)(this + 4);
  local_28 = this;
  psStack_24 = param_1;
  pmVar2 = (map<std::__cxx11::string,XCam::SmartPtr<rk_aiq_static_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
            *)FUN_00024564(*(undefined4 *)(this + 8),p_Var8,param_1);
  if ((p_Var8 != (_Rb_tree_node_base *)pmVar2) &&
     (bVar1 = operator<(param_1,(string *)(pmVar2 + 0x10)), !bVar1)) goto LAB_00024f50;
  p_Var3 = operator_new(0x30);
  this_00 = (string *)(p_Var3 + 0x10);
  std::__cxx11::string::string(this_00,param_1);
  *(undefined4 *)(p_Var3 + 0x28) = 0;
  *(undefined4 *)(p_Var3 + 0x2c) = 0;
  if (p_Var8 == (_Rb_tree_node_base *)pmVar2) {
    if (*(int *)(this + 0x14) != 0) {
      p_Var7 = *(_Rb_tree_node_base **)(this + 0x10);
      bVar1 = operator<((string *)(p_Var7 + 0x10),this_00);
      if (bVar1) {
        pmVar6 = (map<std::__cxx11::string,XCam::SmartPtr<rk_aiq_static_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
                  *)0x0;
        goto LAB_00024f04;
      }
    }
LAB_00024e7c:
    _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
    ::_M_get_insert_unique_pos((string *)&local_28);
    pmVar6 = local_28;
    p_Var7 = (_Rb_tree_node_base *)psStack_24;
LAB_00024f04:
    pmVar2 = pmVar6;
    if (p_Var7 != (_Rb_tree_node_base *)0x0) {
      bVar1 = p_Var8 == p_Var7 ||
              pmVar6 != (map<std::__cxx11::string,XCam::SmartPtr<rk_aiq_static_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
                         *)0x0;
      if (p_Var8 != p_Var7 &&
          pmVar6 == (map<std::__cxx11::string,XCam::SmartPtr<rk_aiq_static_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
                     *)0x0) {
        bVar1 = operator<(this_00,(string *)(p_Var7 + 0x10));
      }
      std::_Rb_tree_insert_and_rebalance(bVar1,p_Var3,p_Var7,p_Var8);
      *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
      pmVar2 = (map<std::__cxx11::string,XCam::SmartPtr<rk_aiq_static_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
                *)p_Var3;
      goto LAB_00024f50;
    }
  }
  else {
    bVar1 = operator<(this_00,(string *)(pmVar2 + 0x10));
    p_Var7 = (_Rb_tree_node_base *)pmVar2;
    if (bVar1) {
      pmVar6 = pmVar2;
      if (*(_Rb_tree_node_base **)(this + 0xc) != (_Rb_tree_node_base *)pmVar2) {
        p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_decrement((_Rb_tree_node_base *)pmVar2);
        bVar1 = operator<((string *)(p_Var4 + 0x10),this_00);
        if (!bVar1) goto LAB_00024e7c;
        if (*(int *)(p_Var4 + 0xc) == 0) {
          pmVar6 = (map<std::__cxx11::string,XCam::SmartPtr<rk_aiq_static_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
                    *)0x0;
          p_Var7 = p_Var4;
        }
      }
      goto LAB_00024f04;
    }
    bVar1 = operator<((string *)(pmVar2 + 0x10),this_00);
    if (bVar1) {
      if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)pmVar2) {
        pmVar6 = (map<std::__cxx11::string,XCam::SmartPtr<rk_aiq_static_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
                  *)0x0;
      }
      else {
        pmVar5 = (map<std::__cxx11::string,XCam::SmartPtr<rk_aiq_static_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
                  *)std::_Rb_tree_increment((_Rb_tree_node_base *)pmVar2);
        bVar1 = operator<(this_00,(string *)(pmVar5 + 0x10));
        if (bVar1) {
          pmVar6 = (map<std::__cxx11::string,XCam::SmartPtr<rk_aiq_static_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
                    *)0x0;
          if (*(int *)(pmVar2 + 0xc) != 0) {
            pmVar6 = pmVar5;
            p_Var7 = (_Rb_tree_node_base *)pmVar5;
          }
        }
        else {
          _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
          ::_M_get_insert_unique_pos((string *)&local_28);
          pmVar6 = local_28;
          p_Var7 = (_Rb_tree_node_base *)psStack_24;
        }
      }
      goto LAB_00024f04;
    }
  }
  XCam::SmartPtr<rk_aiq_static_info_t>::release((SmartPtr<rk_aiq_static_info_t> *)(p_Var3 + 0x28));
  std::__cxx11::string::_M_dispose();
  operator_delete(p_Var3);
LAB_00024f50:
  return pmVar2 + 0x28;
}



/* ===== std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<rk_frame_fmt_s> @ 00024ff4 size=48 ===== */

/* rk_frame_fmt_s* std::__copy_move<false, true,
   std::random_access_iterator_tag>::__copy_m<rk_frame_fmt_s>(rk_frame_fmt_s const*, rk_frame_fmt_s
   const*, rk_frame_fmt_s*) */

rk_frame_fmt_s *
std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<rk_frame_fmt_s>
          (rk_frame_fmt_s *param_1,rk_frame_fmt_s *param_2,rk_frame_fmt_s *param_3)

{
  if (param_2 != param_1) {
    param_3 = memmove(param_3,param_1,(int)param_2 - (int)param_1);
  }
  return param_3 + ((int)param_2 - (int)param_1);
}



/* ===== std::vector<rk_frame_fmt_s,std::allocator<rk_frame_fmt_s>>::operator= @ 00025024 size=240 ===== */

/* std::vector<rk_frame_fmt_s, std::allocator<rk_frame_fmt_s>
   >::TEMPNAMEPLACEHOLDERVALUE(std::vector<rk_frame_fmt_s, std::allocator<rk_frame_fmt_s> > const&)
    */

vector<rk_frame_fmt_s,std::allocator<rk_frame_fmt_s>> * __thiscall
std::vector<rk_frame_fmt_s,std::allocator<rk_frame_fmt_s>>::operator=
          (vector<rk_frame_fmt_s,std::allocator<rk_frame_fmt_s>> *this,vector *param_1)

{
  uint uVar1;
  rk_frame_fmt_s *prVar2;
  uint uVar3;
  uint uVar4;
  rk_frame_fmt_s *prVar5;
  rk_frame_fmt_s *prVar6;
  
  if (param_1 != (vector *)this) {
    prVar5 = *(rk_frame_fmt_s **)param_1;
    prVar6 = *(rk_frame_fmt_s **)(param_1 + 4);
    prVar2 = *(rk_frame_fmt_s **)this;
    uVar4 = (int)prVar6 - (int)prVar5;
    uVar1 = DAT_00025114 * ((int)uVar4 >> 2);
    uVar3 = DAT_00025114 * (*(int *)(this + 8) - (int)prVar2 >> 2);
    if (uVar1 < uVar3 || uVar1 - uVar3 == 0) {
      uVar3 = DAT_00025114 * (*(int *)(this + 4) - (int)prVar2 >> 2);
      if (uVar3 <= uVar1 && uVar1 - uVar3 != 0) {
        __copy_move<false,true,std::random_access_iterator_tag>::__copy_m<rk_frame_fmt_s>
                  (prVar5,prVar5 + (*(int *)(this + 4) - (int)prVar2),prVar2);
        prVar2 = *(rk_frame_fmt_s **)(this + 4);
        prVar6 = *(rk_frame_fmt_s **)(param_1 + 4);
        prVar5 = prVar2 + (*(int *)param_1 - *(int *)this);
      }
      __copy_move<false,true,std::random_access_iterator_tag>::__copy_m<rk_frame_fmt_s>
                (prVar5,prVar6,prVar2);
    }
    else {
      prVar2 = (rk_frame_fmt_s *)0x0;
      if (uVar1 != 0) {
        if (DAT_00025118 <= uVar1 && uVar1 - DAT_00025118 != 0) {
          std::__throw_bad_alloc();
        }
        prVar2 = operator_new(uVar4);
      }
      __copy_move<false,true,std::random_access_iterator_tag>::__copy_m<rk_frame_fmt_s>
                (prVar5,prVar6,prVar2);
      if (*(void **)this != (void *)0x0) {
        operator_delete(*(void **)this);
      }
      *(rk_frame_fmt_s **)this = prVar2;
      *(rk_frame_fmt_s **)(this + 8) = prVar2 + uVar4;
    }
    *(uint *)(this + 4) = *(int *)this + uVar4;
  }
  return this;
}



/* ===== RkRawStream::MediaInfo::offline @ 0002511c size=1356 ===== */

/* RkRawStream::MediaInfo::offline(char const*, char const*) */

void __thiscall RkRawStream::MediaInfo::offline(MediaInfo *this,char *param_1,char *param_2)

{
  size_t sVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  rk_sensor_full_info_t *this_00;
  MediaInfo *pMVar6;
  rk_aiq_static_info_t *__dest;
  SmartPtr<rk_sensor_full_info_t> *pSVar7;
  SmartPtr<rk_aiq_static_info_t> *pSVar8;
  char *__haystack;
  string *psVar9;
  map<std::__cxx11::string,XCam::SmartPtr<rk_sensor_full_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
  *this_01;
  _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
  *this_02;
  void *__src;
  _Rb_tree_node_base *p_Var10;
  string asStack_b0 [24];
  string asStack_98 [24];
  undefined1 auStack_80 [24];
  char local_68 [4];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
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
  
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    if (sVar1 < 9) {
      iVar4 = strcmp(param_1,(char *)(DAT_000256a0 + 0x253b8));
      iVar5 = 0;
      if (iVar4 != 0) {
        iVar4 = strcmp(param_1,(char *)(DAT_000256a4 + 0x253d0));
        iVar5 = 0;
        if (iVar4 != 0) {
          iVar5 = strcmp(param_1,(char *)(DAT_000256a8 + 0x253e8));
          if (iVar5 == 0) {
            iVar5 = 1;
          }
          else {
            iVar5 = strcmp(param_1,(char *)(DAT_000256ac + 0x25404));
            if (iVar5 == 0) {
              iVar5 = 2;
            }
            else {
              iVar5 = strcmp(param_1,(char *)(DAT_000256b0 + 0x25420));
              if (iVar5 == 0) {
                iVar5 = 3;
              }
              else {
                iVar5 = -1;
              }
            }
          }
        }
      }
    }
    else {
      pcVar2 = strstr(param_1,(char *)(DAT_00025694 + 0x25154));
      if ((pcVar2 == (char *)0x0) ||
         (pcVar3 = strstr(param_1,(char *)(DAT_00025698 + 0x2516c)), pcVar3 == (char *)0x0)) {
        iVar5 = -1;
      }
      else {
        iVar4 = atoi(pcVar2 + 5);
        iVar5 = atoi(pcVar3 + 3);
        iVar5 = iVar5 + iVar4 * 4;
      }
    }
    this_01 = (map<std::__cxx11::string,XCam::SmartPtr<rk_sensor_full_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
               *)(this + 0x3394);
    for (p_Var10 = *(_Rb_tree_node_base **)(this + 0x33a0);
        p_Var10 != (_Rb_tree_node_base *)(this + 0x3398);
        p_Var10 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var10)) {
      psVar9 = *(string **)(p_Var10 + 0x28);
      if ((*(int **)(psVar9 + 0x148) != (int *)0x0) && (**(int **)(psVar9 + 0x148) == iVar5)) {
        this_00 = operator_new(0x15ac);
        this_02 = (_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
                   *)(this + 0x337c);
        rk_sensor_full_info_t::rk_sensor_full_info_t(this_00);
        std::__cxx11::string::_M_assign((string *)this_00);
        std::__cxx11::string::_M_assign((string *)(this_00 + 0x18));
        std::__cxx11::string::_M_assign((string *)(this_00 + 0x30));
        std::__cxx11::string::_M_assign((string *)(this_00 + 0x48));
        *(undefined4 *)(this_00 + 0x60) = *(undefined4 *)(psVar9 + 0x60);
        *(undefined4 *)(this_00 + 100) = *(undefined4 *)(psVar9 + 100);
        std::__cxx11::string::_M_assign((string *)(this_00 + 0x68));
        std::__cxx11::string::_M_assign((string *)(this_00 + 0x80));
        *(undefined4 *)(this_00 + 0x98) = *(undefined4 *)(psVar9 + 0x98);
        std::__cxx11::string::_M_assign((string *)(this_00 + 0x9c));
        std::__cxx11::string::_M_assign((string *)(this_00 + 0xb4));
        this_00[0xcc] = *(rk_sensor_full_info_t *)(psVar9 + 0xcc);
        *(undefined4 *)(this_00 + 0xd0) = *(undefined4 *)(psVar9 + 0xd0);
        std::__cxx11::string::_M_assign((string *)(this_00 + 0xd4));
        std::__cxx11::string::_M_assign((string *)(this_00 + 0xec));
        this_00[0x104] = *(rk_sensor_full_info_t *)(psVar9 + 0x104);
        std::__cxx11::string::_M_assign((string *)(this_00 + 0x108));
        std::__cxx11::string::_M_assign((string *)(this_00 + 0x120));
        this_00[0x138] = *(rk_sensor_full_info_t *)(psVar9 + 0x138);
        std::vector<rk_frame_fmt_s,std::allocator<rk_frame_fmt_s>>::operator=
                  ((vector<rk_frame_fmt_s,std::allocator<rk_frame_fmt_s>> *)(this_00 + 0x13c),
                   (vector *)(psVar9 + 0x13c));
        *(undefined4 *)(this_00 + 0x148) = *(undefined4 *)(psVar9 + 0x148);
        *(undefined4 *)(this_00 + 0x14c) = *(undefined4 *)(psVar9 + 0x14c);
        *(undefined4 *)(this_00 + 0x150) = *(undefined4 *)(psVar9 + 0x150);
        this_00[0x154] = *(rk_sensor_full_info_t *)(psVar9 + 0x154);
        this_00[0x155] = *(rk_sensor_full_info_t *)(psVar9 + 0x155);
        this_00[0x156] = *(rk_sensor_full_info_t *)(psVar9 + 0x156);
        memcpy(this_00 + 0x157,psVar9 + 0x157,0x1453);
        pMVar6 = (MediaInfo *)
                 std::
                 _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
                 ::find(this_02,(string *)(p_Var10 + 0x10));
        if (pMVar6 != this + 0x3380) {
          __src = *(void **)(pMVar6 + 0x28);
          __dest = operator_new(0x130);
          memcpy(__dest,__src,0x130);
          pcVar2 = strstr(*(char **)this_00,param_2);
          if (pcVar2 == (char *)0x0) {
            pcVar2 = (char *)(DAT_0002569c + 0x2535c);
            iVar5 = 0;
            for (p_Var10 = *(_Rb_tree_node_base **)(this + 0x33a0);
                p_Var10 != (_Rb_tree_node_base *)(this + 0x3398);
                p_Var10 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var10)) {
              __haystack = (char *)**(undefined4 **)(p_Var10 + 0x28);
              pcVar3 = strstr(__haystack,pcVar2);
              if ((pcVar3 != (char *)0x0) && (iVar4 = atoi(__haystack + 2), iVar5 <= iVar4)) {
                iVar5 = iVar4 + 1;
              }
            }
            std::__cxx11::string::string(asStack_b0,psVar9);
            FUN_00023ad8(asStack_98,param_2);
            std::__cxx11::string::operator=((string *)(this_00 + 0x108),asStack_98);
            std::__cxx11::string::_M_dispose();
            uStack_64 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
            uStack_60 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
            uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
            this_00[0x138] = (rk_sensor_full_info_t)0x73;
            local_68[0] = '\0';
            local_68[1] = '\0';
            local_68[2] = '\0';
            local_68[3] = '\0';
            local_58 = 0;
            local_50 = 0;
            local_48 = 0;
            local_40 = 0;
            local_38 = 0;
            local_30 = 0;
            uStack_54 = uStack_64;
            uStack_4c = uStack_64;
            uStack_44 = uStack_64;
            uStack_3c = uStack_64;
            uStack_34 = uStack_64;
            uStack_2c = uStack_64;
            sprintf(local_68,(char *)(DAT_000256bc + 0x254a8),DAT_000256b8 + 0x254a0,iVar5,
                    DAT_000256c0 + 0x254cc,*(undefined4 *)(this_00 + 0x108),DAT_000256b4 + 0x25490);
            FUN_00023ad8(auStack_80,local_68);
            std::__cxx11::string::_M_assign((string *)this_00);
            printf((char *)(DAT_000256c4 + 0x25504),*(undefined4 *)this_00,*(undefined4 *)psVar9);
            pSVar7 = (SmartPtr<rk_sensor_full_info_t> *)
                     std::
                     map<std::__cxx11::string,XCam::SmartPtr<rk_sensor_full_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
                     ::operator[](this_01,(string *)this_00);
            XCam::SmartPtr<rk_sensor_full_info_t>::operator=(pSVar7,this_00);
            pSVar8 = (SmartPtr<rk_aiq_static_info_t> *)
                     std::
                     map<std::__cxx11::string,XCam::SmartPtr<rk_aiq_static_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
                     ::operator[]((map<std::__cxx11::string,XCam::SmartPtr<rk_aiq_static_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
                                   *)this_02,(string *)this_00);
            XCam::SmartPtr<rk_aiq_static_info_t>::operator=(pSVar8,__dest);
            std::
            _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
            ::erase((_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
                     *)this_01,asStack_b0);
            std::
            _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
            ::erase(this_02,asStack_b0);
            std::__cxx11::string::_M_dispose();
          }
          else {
            std::__cxx11::string::string(asStack_98,psVar9);
            uStack_64 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
            uStack_60 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
            uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
            this_00[0x138] = (rk_sensor_full_info_t)0x73;
            local_68[0] = '\0';
            local_68[1] = '\0';
            local_68[2] = '\0';
            local_68[3] = '\0';
            local_58 = 0;
            local_50 = 0;
            local_48 = 0;
            local_40 = 0;
            local_38 = 0;
            local_30 = 0;
            uStack_54 = uStack_64;
            uStack_4c = uStack_64;
            uStack_44 = uStack_64;
            uStack_3c = uStack_64;
            uStack_34 = uStack_64;
            uStack_2c = uStack_64;
            sprintf(local_68,(char *)(DAT_000256cc + 0x255a0),*(undefined4 *)(this_00 + 0x120),
                    DAT_000256d0 + 0x255cc,*(undefined4 *)(this_00 + 0x108),DAT_000256c8 + 0x25594);
            FUN_00023ad8(auStack_80,local_68);
            std::__cxx11::string::_M_assign((string *)this_00);
            printf((char *)(DAT_000256d4 + 0x255f8),*(undefined4 *)this_00,*(undefined4 *)psVar9);
            pSVar7 = (SmartPtr<rk_sensor_full_info_t> *)
                     std::
                     map<std::__cxx11::string,XCam::SmartPtr<rk_sensor_full_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
                     ::operator[](this_01,(string *)this_00);
            XCam::SmartPtr<rk_sensor_full_info_t>::operator=(pSVar7,this_00);
            pSVar8 = (SmartPtr<rk_aiq_static_info_t> *)
                     std::
                     map<std::__cxx11::string,XCam::SmartPtr<rk_aiq_static_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
                     ::operator[]((map<std::__cxx11::string,XCam::SmartPtr<rk_aiq_static_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
                                   *)this_02,(string *)this_00);
            XCam::SmartPtr<rk_aiq_static_info_t>::operator=(pSVar8,__dest);
            std::
            _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
            ::erase((_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
                     *)this_01,asStack_98);
            std::
            _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>,std::_Select1st<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
            ::erase(this_02,asStack_98);
            std::__cxx11::string::_M_dispose();
          }
          std::__cxx11::string::_M_dispose();
          return;
        }
      }
    }
    puts((char *)(DAT_000256d8 + 0x25664));
  }
  return;
}



/* ===== RkRawStream::MediaInfo::initCamHwInfos @ 000256dc size=6804 ===== */

/* RkRawStream::MediaInfo::initCamHwInfos() */

undefined4 __thiscall RkRawStream::MediaInfo::initCamHwInfos(MediaInfo *this)

{
  undefined1 uVar1;
  rk_aiq_static_info_t rVar2;
  MediaInfo MVar3;
  undefined2 uVar4;
  bool bVar5;
  rk_sensor_full_info_t rVar6;
  undefined4 uVar7;
  FILE *__stream;
  media_device *pmVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  size_t sVar12;
  rk_sensor_full_info_t *prVar13;
  undefined4 uVar14;
  rk_aiq_static_info_t *prVar15;
  rk_sensor_full_info_t *prVar16;
  int iVar17;
  SmartPtr<rk_sensor_full_info_t> *pSVar18;
  SmartPtr<rk_aiq_static_info_t> *pSVar19;
  int iVar20;
  int iVar21;
  string *psVar22;
  int *piVar23;
  char *pcVar24;
  undefined4 uVar25;
  MediaInfo *pMVar26;
  MediaInfo *pMVar27;
  media_device *__s1;
  string **ppsVar28;
  _Rb_tree_node_base *p_Var30;
  map<std::__cxx11::string,XCam::SmartPtr<rk_aiq_static_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
  *this_00;
  undefined4 *puVar31;
  MediaInfo *pMVar32;
  undefined4 uVar33;
  MediaInfo *local_270;
  int local_26c;
  undefined4 local_23c;
  int local_238;
  char acStack_224 [32];
  char acStack_204 [64];
  int local_1c4;
  undefined4 uStack_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 uStack_1b0;
  undefined4 local_1ac;
  undefined4 uStack_1a8;
  undefined4 local_1a4;
  undefined4 uStack_1a0;
  undefined4 local_19c;
  undefined4 uStack_198;
  undefined4 local_194;
  undefined4 uStack_190;
  undefined4 local_18c;
  undefined4 uStack_188;
  string *local_15c;
  int local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  string **ppsVar29;
  
  iVar20 = DAT_00026650 + 0x25700;
  memset(this + 4,0,0x1f1c);
  memset(this + 0x1f20,0,0x145c);
  local_26c = 0;
LAB_00025728:
  iVar21 = local_26c + 1;
  snprintf(acStack_204,0x40,(char *)(DAT_00026654 + 0x2574c),local_26c);
  __stream = fopen64(acStack_204,(char *)(DAT_00026658 + 0x25760));
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
    pmVar8 = (media_device *)media_device_new(acStack_204);
    if (pmVar8 == (media_device *)0x0) goto LAB_00025870;
    media_device_enumerate();
    __s1 = pmVar8 + 0x1c;
    iVar9 = strcmp((char *)__s1,(char *)(DAT_0002665c + 0x25794));
    if ((((iVar9 != 0) &&
         (iVar10 = strcmp((char *)__s1,(char *)(DAT_00026660 + 0x257ac)), iVar10 != 0)) &&
        (iVar10 = strcmp((char *)__s1,(char *)(DAT_00026664 + 0x257c4)), iVar10 != 0)) &&
       ((iVar10 = strcmp((char *)__s1,(char *)(DAT_00026668 + 0x257dc)), iVar10 != 0 &&
        (iVar10 = strcmp((char *)__s1,(char *)(DAT_0002666c + 0x257f4)), iVar10 != 0)))) {
      iVar9 = strcmp((char *)__s1,(char *)(DAT_00026680 + 0x25930));
      if ((((iVar9 == 0) ||
           ((iVar9 = strcmp((char *)__s1,(char *)(DAT_00026684 + 0x25948)), iVar9 == 0 ||
            (iVar9 = strcmp((char *)__s1,(char *)(DAT_00026688 + 0x25960)), iVar9 == 0)))) ||
          (iVar9 = strcmp((char *)__s1,(char *)(DAT_0002668c + 0x25978)), iVar9 == 0)) ||
         (iVar9 = strcmp((char *)__s1,(char *)(DAT_00026690 + 0x25990)), iVar9 == 0)) {
        pMVar27 = this + 4;
        iVar9 = 0;
        do {
          iVar10 = DAT_00026694;
          if (pMVar27[0x14] == (MediaInfo)0x0) {
            *(int *)(pMVar27 + 4) = iVar9;
            iVar9 = strcmp((char *)__s1,(char *)(iVar10 + 0x259c8));
            if ((iVar9 == 0) ||
               (iVar9 = strcmp((char *)__s1,(char *)(DAT_00026698 + 0x259e0)), iVar9 == 0)) {
              uVar25 = 0;
            }
            else {
              iVar9 = strcmp((char *)__s1,(char *)(DAT_000266ec + 0x25f58));
              if (iVar9 == 0) {
                uVar25 = 1;
              }
              else {
                iVar9 = strcmp((char *)__s1,(char *)(DAT_000266f0 + 0x25f74));
                if (iVar9 == 0) {
                  uVar25 = 2;
                }
                else {
                  iVar9 = strcmp((char *)__s1,(char *)(DAT_000266f4 + 0x25f90));
                  if (iVar9 == 0) {
                    uVar25 = 3;
                  }
                  else {
                    uVar25 = 0xffffffff;
                  }
                }
              }
            }
            *(undefined4 *)pMVar27 = uVar25;
            strncpy((char *)(pMVar27 + 0x14),acStack_204,0x1f);
            iVar9 = media_get_entity_by_name(pmVar8,DAT_0002669c + 0x25a14,0x10);
            if ((iVar9 != 0) &&
               (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0)) {
              strncpy((char *)(pMVar27 + 0x34),pcVar24,0x1f);
            }
            iVar9 = media_get_entity_by_name(pmVar8,DAT_000266a0 + 0x25a48,0x10);
            if ((iVar9 != 0) &&
               (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0)) {
              strncpy((char *)(pMVar27 + 0x54),pcVar24,0x1f);
            }
            iVar9 = media_get_entity_by_name(pmVar8,DAT_000266a4 + 0x25a7c,0x12);
            if ((iVar9 != 0) &&
               (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0)) {
              strncpy((char *)(pMVar27 + 0x74),pcVar24,0x1f);
            }
            iVar9 = media_get_entity_by_name(pmVar8,DAT_000266a8 + 0x25ab0,0xe);
            if ((iVar9 != 0) &&
               (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0)) {
              strncpy((char *)(pMVar27 + 0x94),pcVar24,0x1f);
            }
            iVar9 = media_get_entity_by_name(pmVar8,DAT_000266ac + 0x25ae4,0xe);
            if ((iVar9 != 0) &&
               (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0)) {
              strncpy((char *)(pMVar27 + 0xb4),pcVar24,0x1f);
            }
            iVar9 = media_get_entity_by_name(pmVar8,DAT_000266b0 + 0x25b18,0xc);
            if ((iVar9 != 0) &&
               (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0)) {
              strncpy((char *)(pMVar27 + 0xd4),pcVar24,0x1f);
            }
            iVar9 = media_get_entity_by_name(pmVar8,DAT_000266b4 + 0x25b4c,0xc);
            if ((iVar9 != 0) &&
               (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0)) {
              strncpy((char *)(pMVar27 + 0xf4),pcVar24,0x1f);
            }
            iVar9 = media_get_entity_by_name(pmVar8,DAT_000266b8 + 0x25b80,0xc);
            if ((iVar9 != 0) &&
               (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0)) {
              strncpy((char *)(pMVar27 + 0x114),pcVar24,0x1f);
            }
            iVar9 = media_get_entity_by_name(pmVar8,DAT_000266bc + 0x25bb4,0xc);
            if ((iVar9 != 0) &&
               (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0)) {
              strncpy((char *)(pMVar27 + 0x134),pcVar24,0x1f);
            }
            iVar9 = media_get_entity_by_name(pmVar8,DAT_000266c0 + 0x25be8,0xd);
            if ((iVar9 != 0) &&
               (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0)) {
              strncpy((char *)(pMVar27 + 0x154),pcVar24,0x1f);
            }
            iVar9 = media_get_entity_by_name(pmVar8,DAT_000266c4 + 0x25c1c,0xe);
            if ((iVar9 != 0) &&
               (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0)) {
              strncpy((char *)(pMVar27 + 0x174),pcVar24,0x1f);
            }
            iVar9 = media_get_entity_by_name(pmVar8,DAT_000266c8 + 0x25c50,0xe);
            if ((iVar9 != 0) &&
               (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0)) {
              strncpy((char *)(pMVar27 + 0x194),pcVar24,0x1f);
            }
            iVar9 = media_get_entity_by_name(pmVar8,DAT_000266cc + 0x25c84,0xe);
            if ((iVar9 != 0) &&
               (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0)) {
              strncpy((char *)(pMVar27 + 0x1b4),pcVar24,0x1f);
            }
            iVar9 = media_get_entity_by_name(pmVar8,DAT_000266d0 + 0x25cb8,0x10);
            if ((iVar9 != 0) &&
               (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0)) {
              strncpy((char *)(pMVar27 + 0x1d4),pcVar24,0x1f);
            }
            iVar9 = media_get_entity_by_name(pmVar8,DAT_000266d4 + 0x25cec,0x12);
            if ((iVar9 != 0) &&
               (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0)) {
              strncpy((char *)(pMVar27 + 500),pcVar24,0x1f);
            }
            iVar9 = media_get_entity_by_name(pmVar8,DAT_000266d8 + 0x25d20,0xf);
            if ((iVar9 != 0) &&
               (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0)) {
              strncpy((char *)(pMVar27 + 0x214),pcVar24,0x1f);
            }
            iVar9 = media_get_entity_by_name(pmVar8,DAT_000266dc + 0x25d54,0x15);
            if (((iVar9 != 0) ||
                (iVar9 = media_get_entity_by_name(pmVar8,DAT_000266f8 + 0x25fb4,0x13), iVar9 != 0))
               && (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0)) {
              strncpy((char *)(pMVar27 + 0x234),pcVar24,0x1f);
            }
            iVar10 = media_get_entity_by_name(pmVar8,DAT_000266fc + 0x25fd4,9);
            iVar9 = DAT_00026700;
            piVar23 = (int *)(DAT_00026700 + 0x25fec);
            pMVar27[0x12] = (MediaInfo)(iVar10 != 0);
            local_15c = (string *)*piVar23;
            local_158 = *(int *)(iVar9 + 0x25ff0);
            uStack_154 = *(undefined4 *)(iVar9 + 0x25ff4);
            uStack_150 = *(undefined4 *)(iVar9 + 0x25ff8);
            uStack_14c = *(undefined4 *)(iVar9 + 0x25ffc);
            uStack_148 = *(undefined4 *)(iVar9 + 0x26000);
            uStack_144 = *(undefined4 *)(iVar9 + 0x26004);
            uStack_140 = *(undefined4 *)(iVar9 + 0x26008);
            uStack_13c = *(undefined4 *)(iVar9 + 0x2600c);
            uStack_138 = *(undefined4 *)(iVar9 + 0x26010);
            uStack_134 = *(undefined4 *)(iVar9 + 0x26014);
            uStack_130 = *(undefined4 *)(iVar9 + 0x26018);
            uStack_12c = *(undefined4 *)(iVar9 + 0x2601c);
            uStack_128 = *(undefined4 *)(iVar9 + 0x26020);
            uStack_124 = *(undefined4 *)(iVar9 + 0x26024);
            ppsVar28 = &local_15c;
            iVar9 = 0;
            goto LAB_00026014;
          }
          iVar10 = strncmp((char *)(pMVar27 + 0x14),acStack_204,0x1f);
          if (iVar10 == 0) {
            xcam_print_log(0x22,0xff,1,DAT_000266e0 + 0x25da8,acStack_204);
            goto LAB_00025dac;
          }
          iVar9 = iVar9 + 1;
          pMVar27 = pMVar27 + 0x2d4;
        } while (iVar9 != 8);
        pMVar27 = (MediaInfo *)0x0;
        goto LAB_00025dac;
      }
      iVar9 = strcmp((char *)__s1,(char *)(DAT_00026704 + 0x26090));
      if (((iVar9 != 0) &&
          (iVar9 = strcmp((char *)__s1,(char *)(DAT_00026708 + 0x260a8)), iVar9 != 0)) &&
         ((pcVar24 = strstr((char *)__s1,(char *)(DAT_0002670c + 0x260c0)), pcVar24 == (char *)0x0
          && ((pcVar24 = strstr((char *)__s1,(char *)(DAT_00026710 + 0x260d8)),
              pcVar24 == (char *)0x0 &&
              (iVar9 = strcmp((char *)__s1,(char *)(DAT_00026714 + 0x260f0)), iVar9 != 0))))))
      goto LAB_00025868;
      iVar9 = 0;
      local_270 = this + 0x1f20;
      do {
        if (local_270[4] == (MediaInfo)0x0) {
          *(int *)local_270 = iVar9;
          strncpy((char *)(local_270 + 4),acStack_204,0x1e);
          iVar9 = media_get_entity_by_name(pmVar8,DAT_000267a4 + 0x26ffc,0x13);
          if ((iVar9 != 0) && (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0)
             ) {
            strncpy((char *)(local_270 + 0x24),pcVar24,0x1f);
          }
          iVar9 = media_get_entity_by_name(pmVar8,DAT_000267a8 + 0x27030,0x13);
          if ((iVar9 != 0) && (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0)
             ) {
            strncpy((char *)(local_270 + 0x44),pcVar24,0x1f);
          }
          iVar9 = media_get_entity_by_name(pmVar8,DAT_000267ac + 0x27064,0x13);
          if ((iVar9 != 0) && (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0)
             ) {
            strncpy((char *)(local_270 + 100),pcVar24,0x1f);
          }
          iVar9 = media_get_entity_by_name(pmVar8,DAT_000267b0 + 0x27098,0x13);
          if ((iVar9 != 0) && (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0)
             ) {
            strncpy((char *)(local_270 + 0x84),pcVar24,0x1f);
          }
          iVar9 = media_get_entity_by_name(pmVar8,DAT_000267b4 + 0x270cc,0xf);
          if ((iVar9 != 0) && (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0)
             ) {
            strncpy((char *)(local_270 + 0xa4),pcVar24,0x1f);
          }
          iVar9 = media_get_entity_by_name(pmVar8,DAT_000267b8 + 160000,0xf);
          if ((iVar9 != 0) && (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0)
             ) {
            strncpy((char *)(local_270 + 0xc4),pcVar24,0x1f);
          }
          iVar9 = media_get_entity_by_name(pmVar8,DAT_000267bc + 0x27134,0xf);
          if ((iVar9 != 0) && (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0)
             ) {
            strncpy((char *)(local_270 + 0xe4),pcVar24,0x1f);
          }
          iVar9 = media_get_entity_by_name(pmVar8,DAT_000267c0 + 0x27168,0xf);
          if ((iVar9 != 0) && (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0)
             ) {
            strncpy((char *)(local_270 + 0x104),pcVar24,0x1f);
          }
          iVar9 = media_get_entity_by_name(pmVar8,DAT_000267c4 + 0x2719c,0x12);
          if ((iVar9 != 0) && (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0)
             ) {
            strncpy((char *)(local_270 + 0x124),pcVar24,0x1f);
          }
          iVar9 = media_get_entity_by_name(pmVar8,DAT_000267c8 + 0x271d0,0x12);
          if ((iVar9 != 0) && (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0)
             ) {
            strncpy((char *)(local_270 + 0x144),pcVar24,0x1f);
          }
          iVar9 = media_get_entity_by_name(pmVar8,DAT_000267cc + 0x27204,0x12);
          if ((iVar9 != 0) && (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0)
             ) {
            strncpy((char *)(local_270 + 0x164),pcVar24,0x1f);
          }
          iVar9 = media_get_entity_by_name(pmVar8,DAT_000267d0 + 0x27238,0x12);
          if ((iVar9 != 0) && (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0)
             ) {
            strncpy((char *)(local_270 + 0x184),pcVar24,0x1f);
          }
          iVar9 = media_get_entity_by_name(pmVar8,DAT_000267d4 + 0x2726c,0xf);
          if ((iVar9 != 0) && (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0)
             ) {
            strncpy((char *)(local_270 + 0x204),pcVar24,0x1e);
          }
          iVar9 = media_get_entity_by_name(pmVar8,DAT_000267d8 + 0x272a0,0x12);
          if ((iVar9 != 0) && (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0)
             ) {
            strncpy((char *)(local_270 + 0x1c4),pcVar24,0x1e);
          }
          iVar9 = media_get_entity_by_name(pmVar8,DAT_000267dc + 0x272d4,0x11);
          if ((iVar9 != 0) && (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0)
             ) {
            strncpy((char *)(local_270 + 0x1e4),pcVar24,0x1e);
          }
          iVar9 = media_get_entity_by_name(pmVar8,DAT_000267e0 + 0x27308,0x16);
          if ((iVar9 != 0) && (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0)
             ) {
            strncpy((char *)(local_270 + 0x1e4),pcVar24,0x1e);
          }
          iVar9 = media_get_entity_by_name(pmVar8,DAT_000267e4 + 0x2733c,0x15);
          if (((iVar9 != 0) ||
              (iVar9 = media_get_entity_by_name(pmVar8,DAT_00026720 + 0x261b0,0x13), iVar9 != 0)) &&
             (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0)) {
            strncpy((char *)(local_270 + 0x1a4),pcVar24,0x1e);
          }
          iVar9 = media_get_entity_by_name(pmVar8,DAT_00026724 + 0x261cc,10);
          if ((iVar9 != 0) && (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0)
             ) {
            strncpy((char *)(local_270 + 0x224),pcVar24,0x1e);
          }
          iVar9 = media_get_entity_by_name(pmVar8,DAT_00026728 + 0x26200,0xd);
          if ((iVar9 != 0) && (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0)
             ) {
            strncpy((char *)(local_270 + 0x244),pcVar24,0x1e);
          }
          goto LAB_00026144;
        }
        iVar10 = strncmp((char *)(local_270 + 4),acStack_204,0x1f);
        if (iVar10 == 0) {
          xcam_print_log(0x22,0xff,1,DAT_00026718 + 0x26140,acStack_204);
          goto LAB_00026144;
        }
        iVar9 = iVar9 + 1;
        local_270 = local_270 + 0x284;
      } while (iVar9 != 8);
      local_270 = (MediaInfo *)0x0;
LAB_00026144:
      pMVar27 = (MediaInfo *)0x0;
      strncpy((char *)(local_270 + 0x264),(char *)__s1,0x20);
      iVar9 = strcmp((char *)__s1,(char *)(DAT_0002671c + 0x2616c));
      rVar6 = (rk_sensor_full_info_t)(iVar9 == 0);
      goto LAB_00025df4;
    }
    pMVar27 = this + 0x16a4;
    do {
      if (pMVar27[5] == (MediaInfo)0x0) {
        if ((iVar9 == 0) ||
           (iVar9 = strcmp((char *)__s1,(char *)(DAT_00026784 + 0x26e48)), iVar9 == 0)) {
          uVar25 = 0;
        }
        else {
          iVar9 = strcmp((char *)__s1,(char *)(DAT_00026674 + 0x258d8));
          if (iVar9 == 0) {
            uVar25 = 1;
          }
          else {
            iVar9 = strcmp((char *)__s1,(char *)(DAT_00026678 + 0x258f4));
            if (iVar9 == 0) {
              uVar25 = 2;
            }
            else {
              iVar9 = strcmp((char *)__s1,(char *)(DAT_0002667c + 0x25910));
              if (iVar9 == 0) {
                uVar25 = 3;
              }
              else {
                uVar25 = 0xffffffff;
              }
            }
          }
        }
        *(undefined4 *)pMVar27 = uVar25;
        strncpy((char *)(pMVar27 + 5),acStack_204,0x1f);
        iVar9 = media_get_entity_by_name(pmVar8,DAT_00026788 + 0x26e7c,0x12);
        if ((iVar9 != 0) && (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0))
        {
          strncpy((char *)(pMVar27 + 0x25),pcVar24,0x1f);
        }
        iVar9 = media_get_entity_by_name(pmVar8,DAT_0002678c + 0x26eb0,0xf);
        if ((iVar9 != 0) && (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0))
        {
          strncpy((char *)(pMVar27 + 0x45),pcVar24,0x1f);
        }
        iVar9 = media_get_entity_by_name(pmVar8,DAT_00026790 + 0x26ee4,0xd);
        if ((iVar9 != 0) && (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0))
        {
          strncpy((char *)(pMVar27 + 0x65),pcVar24,0x1f);
        }
        iVar9 = media_get_entity_by_name(pmVar8,DAT_00026794 + 0x26f18,0xd);
        if ((iVar9 != 0) && (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0))
        {
          strncpy((char *)(pMVar27 + 0x85),pcVar24,0x1f);
        }
        iVar9 = media_get_entity_by_name(pmVar8,DAT_00026798 + 0x26f4c,0xd);
        if ((iVar9 != 0) && (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0))
        {
          strncpy((char *)(pMVar27 + 0xa5),pcVar24,0x1f);
        }
        iVar9 = media_get_entity_by_name(pmVar8,DAT_0002679c + 0x26f80,0x11);
        if ((iVar9 != 0) && (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0))
        {
          strncpy((char *)(pMVar27 + 0xc5),pcVar24,0x1f);
        }
        iVar9 = media_get_entity_by_name(pmVar8,DAT_000267a0 + 0x26fb4,0xd);
        if ((iVar9 != 0) && (pcVar24 = (char *)media_entity_get_devname(), pcVar24 != (char *)0x0))
        {
          strncpy((char *)(pMVar27 + 0xe5),pcVar24,0x1f);
        }
LAB_00025850:
        pMVar27[4] = (MediaInfo)0x1;
        break;
      }
      iVar10 = strncmp((char *)(pMVar27 + 5),acStack_204,0x1f);
      if (iVar10 == 0) {
        xcam_print_log(0x22,0xff,1,DAT_00026670 + 0x2584c,acStack_204);
        goto LAB_00025850;
      }
      pMVar27 = pMVar27 + 0x108;
    } while (pMVar27 != this + 0x1ee4);
    goto LAB_00025868;
  }
  goto LAB_00025870;
  while( true ) {
    strncpy((char *)(pMVar27 + iVar9 * 0x20 + 0x254),(char *)(iVar10 + 8),0x20);
    *(undefined4 *)(pMVar27 + 0xc) = 1;
    bVar5 = 3 < iVar9;
    iVar9 = iVar9 + 1;
    if (bVar5) break;
LAB_00026014:
    do {
      ppsVar29 = ppsVar28 + 1;
      psVar22 = *ppsVar28;
      if (psVar22 == (string *)0x0) goto LAB_00025dac;
      sVar12 = strlen((char *)psVar22);
      iVar10 = media_get_entity_by_name(pmVar8,psVar22,sVar12);
      ppsVar28 = ppsVar29;
    } while (iVar10 == 0);
  }
LAB_00025dac:
  pcVar24 = strstr((char *)(pmVar8 + 0xc),(char *)(DAT_000266e4 + 0x25dbc));
  if (pcVar24 == (char *)0x0) {
    pMVar27[0x10] = (MediaInfo)0x0;
    this[0x33ac] = (MediaInfo)0x0;
    *(undefined2 *)(this + 0x33ae) = 0;
  }
  else {
    pMVar27[0x10] = (MediaInfo)0x1;
    this[0x33ac] = (MediaInfo)0x1;
    *(undefined2 *)(this + 0x33ae) = 0x80;
  }
  pMVar27[0x13] = (MediaInfo)0x1;
  rVar6 = (rk_sensor_full_info_t)0x0;
  local_270 = (MediaInfo *)0x0;
LAB_00025df4:
  uVar11 = media_get_entities_count(pmVar8);
  for (iVar9 = 0; iVar9 < (int)uVar11; iVar9 = iVar9 + 1) {
    uVar25 = media_get_entity(pmVar8,iVar9);
    iVar10 = media_entity_get_info();
    if ((iVar10 != 0) && (*(int *)(iVar10 + 0x24) == DAT_000266e8)) {
      prVar15 = operator_new(0x130);
      memset(prVar15,0,0x130);
      prVar16 = operator_new(0x15ac);
      memset(prVar16,0,0x15ac);
      rk_sensor_full_info_t::rk_sensor_full_info_t(prVar16);
      *(int *)(prVar16 + 0x60) = local_26c;
      pcVar24 = (char *)media_entity_get_devname(uVar25);
      pcVar24 = strncpy(acStack_224,pcVar24,0x1f);
      FUN_00023ad8((string *)&local_15c,pcVar24);
      std::__cxx11::string::operator=((string *)(prVar16 + 0x18),(string *)&local_15c);
      std::__cxx11::string::_M_dispose();
      FUN_00023ad8((string *)&local_15c,iVar10 + 4);
      std::__cxx11::string::operator=((string *)prVar16,(string *)&local_15c);
      std::__cxx11::string::_M_dispose();
      FUN_00023ad8((string *)&local_15c,acStack_204);
      std::__cxx11::string::operator=((string *)(prVar16 + 0x48),(string *)&local_15c);
      std::__cxx11::string::_M_dispose();
      std::__cxx11::string::string((string *)&local_23c,(string *)prVar16);
      if (local_238 != 0) {
        pcVar24 = (char *)std::__cxx11::string::at((uint)&local_23c);
        if (*pcVar24 == 'm') {
          std::__cxx11::string::substr((uint)&local_1c4,(uint)&local_23c);
          std::__cxx11::string::_M_assign((string *)(prVar16 + 0x120));
          pcVar24 = (char *)std::__cxx11::string::at((uint)&local_23c);
          if (*pcVar24 == '_') {
            pcVar24 = (char *)std::__cxx11::string::at((uint)&local_23c);
            if ((*pcVar24 != 'b') &&
               (pcVar24 = (char *)std::__cxx11::string::at((uint)&local_23c), *pcVar24 != 'f')) {
              uVar33 = 4;
              uVar25 = 0xb8;
              iVar10 = DAT_00026734 + 0x2632c;
              goto LAB_000262c4;
            }
            prVar13 = (rk_sensor_full_info_t *)std::__cxx11::string::at((uint)&local_23c);
            prVar16[0x138] = *prVar13;
            pcVar24 = (char *)std::__cxx11::string::at((uint)&local_23c);
            if (*pcVar24 != '_') {
              uVar33 = 5;
              uVar25 = 0xc1;
              iVar10 = DAT_00026738 + 0x26380;
              goto LAB_000262c4;
            }
            iVar10 = std::__cxx11::string::find((char)&local_23c,0x20);
            if (iVar10 == -1) {
              uVar33 = 6;
              uVar25 = 0xca;
              iVar10 = DAT_0002673c + 0x263c0;
              goto LAB_000262c4;
            }
            std::__cxx11::string::substr((uint)&local_15c,(uint)&local_23c);
            std::__cxx11::string::_M_assign((string *)(prVar16 + 0x108));
            std::__cxx11::string::_M_dispose();
          }
          else {
            uVar33 = 3;
            uVar25 = 0xaf;
            iVar10 = DAT_00026730 + 0x262c8;
LAB_000262c4:
            xcam_print_log(0x22,0xff,1,iVar10,uVar25,local_23c,uVar33);
          }
          std::__cxx11::string::_M_dispose();
        }
        else {
          xcam_print_log(0x22,0xff,1,DAT_0002672c + 0x26260,0xa4,local_23c,0);
        }
      }
      std::__cxx11::string::_M_dispose();
      XCam::V4l2SubDevice::V4l2SubDevice((V4l2SubDevice *)&local_15c,*(char **)(prVar16 + 0x18));
      iVar10 = XCam::V4l2Device::open((V4l2Device *)&local_15c,false);
      if (iVar10 == 0) {
        iVar10 = XCam::V4l2Device::io_control((V4l2Device *)&local_15c,DAT_00026744,prVar16 + 0x157)
        ;
        if (iVar10 < 0) {
          xcam_print_log(0x22,0xff,1,DAT_0002674c + 0x264b4,DAT_00026748 + 0x264a8,
                         *(undefined4 *)(prVar16 + 0x18));
        }
        else {
          FUN_00023ad8((string *)&local_23c,prVar16 + 0x197);
          std::__cxx11::string::operator=((string *)(prVar16 + 0x30),(string *)&local_23c);
          std::__cxx11::string::_M_dispose();
          uStack_1c0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          local_1bc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          local_1b8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          local_1c4 = 0;
          local_1b4 = 0;
          local_1ac = 0;
          local_1a4 = 0;
          local_19c = 0;
          local_194 = 0;
          local_18c = 0;
          uStack_1b0 = uStack_1c0;
          uStack_1a8 = uStack_1c0;
          uStack_1a0 = uStack_1c0;
          uStack_198 = uStack_1c0;
          uStack_190 = uStack_1c0;
          uStack_188 = uStack_1c0;
          while (iVar10 = XCam::V4l2Device::io_control
                                    ((V4l2Device *)&local_15c,DAT_00026750,&local_1c4),
                uVar7 = local_1b4, uVar33 = local_1b8, uVar25 = local_1bc, iVar10 == 0) {
            uVar14 = __aeabi_uidiv(local_1ac,uStack_1b0);
            puVar31 = *(undefined4 **)(prVar16 + 0x140);
            if (puVar31 == *(undefined4 **)(prVar16 + 0x144)) {
              std::vector<rk_frame_fmt_s,std::allocator<rk_frame_fmt_s>>::
              _M_realloc_insert<rk_frame_fmt_s_const&>
                        ((vector<rk_frame_fmt_s,std::allocator<rk_frame_fmt_s>> *)(prVar16 + 0x13c),
                         puVar31);
            }
            else {
              *puVar31 = uVar33;
              puVar31[1] = uVar7;
              puVar31[2] = uVar25;
              puVar31[3] = uVar14;
              puVar31[4] = local_1a4;
              *(undefined4 **)(prVar16 + 0x140) = puVar31 + 5;
            }
            local_1c4 = local_1c4 + 1;
          }
          if (local_1c4 == 0) {
            xcam_print_log(0x22,0xff,1,DAT_00026758 + 0x265dc,DAT_00026754 + 0x265d0,
                           *(undefined4 *)(prVar16 + 0x18));
          }
          XCam::V4l2Device::close((V4l2Device *)&local_15c);
        }
      }
      else {
        xcam_print_log(0x22,0xff,1,DAT_00026740 + 0x26440,*(undefined4 *)(prVar16 + 0x18));
      }
      local_15c = (string *)(*(int *)(iVar20 + DAT_0002675c) + 8);
      XCam::V4l2Device::~V4l2Device((V4l2Device *)&local_15c);
      if (local_270 == (MediaInfo *)0x0) {
        if (pMVar27 == (MediaInfo *)0x0) {
          xcam_print_log(0x22,0xff,1,DAT_00026760 + 0x268d8);
        }
        else {
          prVar16[0x154] = (rk_sensor_full_info_t)0x1;
          *(undefined4 *)(pMVar27 + 0xc) = 1;
          *(MediaInfo **)(prVar16 + 0x148) = pMVar27;
          pMVar27[0x11] = (MediaInfo)0x0;
        }
      }
      else {
        prVar16[0x154] = (rk_sensor_full_info_t)0x0;
        *(undefined4 *)(prVar16 + 0x148) = 0;
        *(MediaInfo **)(prVar16 + 0x14c) = local_270;
        prVar16[0x156] = rVar6;
      }
      findAttachedSubdevs(this,pmVar8,uVar11,prVar16);
      FUN_00023a1c(prVar16,prVar15);
      uVar4 = *(undefined2 *)(this + 0x33ae);
      prVar15[0x118] = (rk_aiq_static_info_t)(*(int *)(prVar16 + 0x6c) != 0);
      prVar15[0x119] = (rk_aiq_static_info_t)(0 < *(int *)(prVar16 + 0x98));
      prVar15[0x11b] = (rk_aiq_static_info_t)(*(int *)(prVar16 + 0x84) != 0);
      rVar2 = *(rk_aiq_static_info_t *)(prVar16 + 0x104);
      prVar15[0x11a] = rVar2;
      prVar15[0x11c] = rVar2;
      if (*(int *)(prVar16 + 0x148) != 0) {
        prVar15[0x11e] = *(rk_aiq_static_info_t *)(*(int *)(prVar16 + 0x148) + 0x10);
      }
      *(undefined2 *)(prVar15 + 0x120) = uVar4;
      pSVar18 = (SmartPtr<rk_sensor_full_info_t> *)
                std::
                map<std::__cxx11::string,XCam::SmartPtr<rk_sensor_full_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
                ::operator[]((map<std::__cxx11::string,XCam::SmartPtr<rk_sensor_full_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
                              *)(this + 0x3394),(string *)prVar16);
      XCam::SmartPtr<rk_sensor_full_info_t>::operator=(pSVar18,prVar16);
      pSVar19 = (SmartPtr<rk_aiq_static_info_t> *)
                std::
                map<std::__cxx11::string,XCam::SmartPtr<rk_aiq_static_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
                ::operator[]((map<std::__cxx11::string,XCam::SmartPtr<rk_aiq_static_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
                              *)(this + 0x337c),(string *)prVar16);
      XCam::SmartPtr<rk_aiq_static_info_t>::operator=(pSVar19,prVar15);
    }
  }
LAB_00025868:
  media_device_unref(pmVar8);
LAB_00025870:
  local_26c = iVar21;
  if (iVar21 == 0x10) {
    pMVar27 = this;
    do {
      pMVar26 = pMVar27;
      if (pMVar27[0x17] != (MediaInfo)0x0) {
        while (pMVar32 = pMVar26, pMVar32 != this) {
          pMVar26 = pMVar32 + -0x2d4;
          if (*(int *)(pMVar27 + 0xc) == *(int *)(pMVar32 + -0x2c8)) {
            pMVar27[0x15] = (MediaInfo)0x1;
            pMVar32[-0x2bf] = (MediaInfo)0x1;
          }
        }
      }
      pMVar27 = pMVar27 + 0x2d4;
    } while (pMVar27 != this + 0x16a0);
    p_Var30 = *(_Rb_tree_node_base **)(this + 0x33a0);
    do {
      if (p_Var30 == (_Rb_tree_node_base *)(this + 0x3398)) {
        pMVar26 = this + 0x16a8;
        iVar21 = DAT_00026768 + 0x26b48;
        iVar10 = DAT_0002676c + 0x26b50;
        iVar9 = 0;
        pcVar24 = (char *)(DAT_00026770 + 0x26b5c);
        pMVar27 = this;
        do {
          if ((pMVar27[0x17] != (MediaInfo)0x0) && (*(int *)(pMVar27 + 0x10) == 0)) {
            prVar15 = operator_new(0x130);
            memset(prVar15,0,0x130);
            prVar16 = operator_new(0x15ac);
            memset(prVar16,0,0x15ac);
            rk_sensor_full_info_t::rk_sensor_full_info_t(prVar16);
            *(MediaInfo **)(prVar16 + 0x148) = pMVar27 + 4;
            if (*pMVar26 != (MediaInfo)0x0) {
              *(MediaInfo **)(prVar16 + 0x150) = pMVar26 + -4;
              iVar17 = atoi((char *)(pMVar26 + 0xb));
              prVar15[0xec] = SUB41(iVar17,0);
            }
            *(undefined4 *)(prVar16 + 0x60) = 0xffffffff;
            FUN_00023ad8((string *)&local_15c,iVar21);
            std::__cxx11::string::operator=((string *)(prVar16 + 0x18),(string *)&local_15c);
            std::__cxx11::string::_M_dispose();
            FUN_00023ad8((string *)&local_15c,iVar10);
            std::__cxx11::string::operator=((string *)prVar16,(string *)&local_15c);
            std::__cxx11::string::_M_dispose();
            __gnu_cxx::__to_xstring<std::__cxx11::string,char>
                      ((__gnu_cxx *)&local_15c,
                       *(_func_int_char_ptr_uint_char_ptr___va_list **)(iVar20 + DAT_00026774),0x10,
                       pcVar24,iVar9);
            std::__cxx11::string::operator+=((string *)prVar16,(string *)&local_15c);
            std::__cxx11::string::_M_dispose();
            FUN_00023ad8((string *)&local_15c,DAT_00026778 + 0x26c6c);
            std::__cxx11::string::operator=((string *)(prVar16 + 0x48),(string *)&local_15c);
            std::__cxx11::string::_M_dispose();
            prVar16[0x154] = (rk_sensor_full_info_t)0x1;
            *(undefined4 *)(prVar15 + 0x44) = 5;
            *(undefined4 *)(pMVar27 + 0x10) = 1;
            *(undefined4 *)(prVar15 + 0x58) = 6;
            *(undefined4 *)(prVar15 + 0x30) = 0;
            *(undefined4 *)(prVar15 + 0xe8) = 3;
            FUN_00023a1c(prVar16,prVar15);
            iVar17 = *(int *)(prVar16 + 0x148);
            *(undefined4 *)(prVar15 + 0x118) = 0;
            prVar15[0x11c] = (rk_aiq_static_info_t)0x0;
            uVar4 = *(undefined2 *)(this + 0x33ae);
            prVar15[0x11e] = *(rk_aiq_static_info_t *)(iVar17 + 0x10);
            *(undefined2 *)(prVar15 + 0x120) = uVar4;
            pSVar18 = (SmartPtr<rk_sensor_full_info_t> *)
                      std::
                      map<std::__cxx11::string,XCam::SmartPtr<rk_sensor_full_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
                      ::operator[]((map<std::__cxx11::string,XCam::SmartPtr<rk_sensor_full_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_sensor_full_info_t>>>>
                                    *)(this + 0x3394),(string *)prVar16);
            XCam::SmartPtr<rk_sensor_full_info_t>::operator=(pSVar18,prVar16);
            pSVar19 = (SmartPtr<rk_aiq_static_info_t> *)
                      std::
                      map<std::__cxx11::string,XCam::SmartPtr<rk_aiq_static_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
                      ::operator[]((map<std::__cxx11::string,XCam::SmartPtr<rk_aiq_static_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
                                    *)(this + 0x337c),(string *)prVar16);
            XCam::SmartPtr<rk_aiq_static_info_t>::operator=(pSVar19,prVar15);
          }
          iVar9 = iVar9 + 1;
          pMVar27 = pMVar27 + 0x2d4;
          pMVar26 = pMVar26 + 0x108;
        } while (iVar9 != 8);
        XCam::V4l2Device::V4l2Device((V4l2Device *)&local_15c,(char *)(this + 0x1d8));
        iVar20 = XCam::V4l2Device::open((V4l2Device *)&local_15c,false);
        if (iVar20 == 0) {
          iVar20 = XCam::V4l2Device::query_cap
                             ((V4l2Device *)&local_15c,(v4l2_capability *)&local_1c4);
          if (((iVar20 == 0) && (pcVar24 = strrchr((char *)&local_1c4,0x5f), pcVar24 != (char *)0x0)
              ) && (pcVar24[1] == 'v')) {
            iVar20 = atoi(pcVar24 + 2);
            *(int *)(this + 0x1ee4) = iVar20;
            XCam::V4l2Device::close((V4l2Device *)&local_15c);
          }
          else {
            XCam::V4l2Device::close((V4l2Device *)&local_15c);
            xcam_print_log(0x22,0xff,1,DAT_00026780 + 0x26ddc);
          }
        }
        else {
          xcam_print_log(0x22,0xff,1,DAT_0002677c + 0x26d60,this + 0x1d8);
        }
        XCam::V4l2Device::~V4l2Device((V4l2Device *)&local_15c);
        for (p_Var30 = *(_Rb_tree_node_base **)(this + 0x3388);
            p_Var30 != (_Rb_tree_node_base *)(this + 0x3380);
            p_Var30 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var30)) {
          *(undefined4 *)(*(int *)(p_Var30 + 0x28) + 0x114) = *(undefined4 *)(this + 0x1ee4);
        }
        return 0;
      }
      psVar22 = *(string **)(p_Var30 + 0x28);
      local_158 = *(int *)(p_Var30 + 0x2c);
      if (local_158 != 0) {
        piVar23 = (int *)(local_158 + 4);
        DataMemoryBarrier(0xb);
        do {
          bVar5 = (bool)hasExclusiveAccess(piVar23);
        } while (!bVar5);
        *piVar23 = *piVar23 + 1;
        DataMemoryBarrier(0xb);
      }
      local_15c = psVar22;
      if (psVar22[0x154] == (string)0x0) {
        pMVar26 = this + 0x2d8;
        this_00 = (map<std::__cxx11::string,XCam::SmartPtr<rk_aiq_static_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
                   *)(this + 0x337c);
        pMVar27 = this + 0x16a4;
        do {
          pMVar32 = pMVar26 + -0x80;
          do {
            psVar22 = local_15c;
            iVar21 = strcmp((char *)(*(int *)(local_15c + 0x14c) + 0x264),(char *)pMVar32);
            if (iVar21 == 0) {
              *(MediaInfo **)(psVar22 + 0x148) = pMVar26 + -0x2d4;
              MVar3 = pMVar26[-0x2c4];
              piVar23 = (int *)std::
                               map<std::__cxx11::string,XCam::SmartPtr<rk_aiq_static_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
                               ::operator[](this_00,psVar22);
              *(MediaInfo *)(*piVar23 + 0x11e) = MVar3;
              piVar23 = (int *)std::
                               map<std::__cxx11::string,XCam::SmartPtr<rk_aiq_static_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
                               ::operator[](this_00,local_15c);
              psVar22 = local_15c;
              *(undefined2 *)(*piVar23 + 0x120) = *(undefined2 *)(this + 0x33ae);
              if (pMVar27[4] != (MediaInfo)0x0) {
                *(MediaInfo **)(local_15c + 0x150) = pMVar27;
              }
              if (*(int *)(local_15c + 0x150) == 0) {
                uVar1 = 0xff;
              }
              else {
                iVar21 = atoi((char *)(*(int *)(local_15c + 0x150) + 0xf));
                uVar1 = (undefined1)iVar21;
              }
              piVar23 = (int *)std::
                               map<std::__cxx11::string,XCam::SmartPtr<rk_aiq_static_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
                               ::operator[](this_00,psVar22);
              *(undefined1 *)(*piVar23 + 0xec) = uVar1;
              *(undefined4 *)(pMVar26 + -0x2c8) = 1;
            }
            pMVar32 = pMVar32 + 0x20;
          } while (pMVar32 != pMVar26);
          pMVar26 = pMVar26 + 0x2d4;
          pMVar27 = pMVar27 + 0x108;
        } while (this + 0x1978 != pMVar26);
      }
      else {
        iVar21 = 0;
        pMVar27 = this + 0x16a4;
        do {
          if ((pMVar27[4] != (MediaInfo)0x0) && (**(int **)(psVar22 + 0x148) == *(int *)pMVar27)) {
            *(MediaInfo **)(psVar22 + 0x150) = this + iVar21 * 0x108 + 0x16a4;
            iVar21 = atoi((char *)(this + iVar21 * 0x108 + 0x16b3));
            piVar23 = (int *)std::
                             map<std::__cxx11::string,XCam::SmartPtr<rk_aiq_static_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
                             ::operator[]((map<std::__cxx11::string,XCam::SmartPtr<rk_aiq_static_info_t>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,XCam::SmartPtr<rk_aiq_static_info_t>>>>
                                           *)(this + 0x337c),psVar22);
            *(char *)(*piVar23 + 0xec) = (char)iVar21;
            break;
          }
          iVar21 = iVar21 + 1;
          pMVar27 = pMVar27 + 0x108;
        } while (iVar21 != 8);
      }
      if (*(int *)(local_15c + 0x148) == 0) {
        xcam_print_log(0x22,0xff,1,DAT_00026764 + 0x269ec);
      }
      XCam::SmartPtr<rk_sensor_full_info_t>::release((SmartPtr<rk_sensor_full_info_t> *)&local_15c);
      p_Var30 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var30);
    } while( true );
  }
  goto LAB_00025728;
}



/* ===== RkRawStream::RKStream::new_video_buffer @ 0002736c size=16 ===== */

/* RkRawStream::RKStream::new_video_buffer(v4l2_event&, XCam::SmartPtr<XCam::V4l2Device>) */

void RkRawStream::RKStream::new_video_buffer(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* ===== RkRawStream::RKStream::new_v4l2proxy_buffer @ 0002737c size=16 ===== */

/* RkRawStream::RKStream::new_v4l2proxy_buffer(XCam::SmartPtr<XCam::V4l2Buffer>,
   XCam::SmartPtr<XCam::V4l2Device>) */

void RkRawStream::RKStream::new_v4l2proxy_buffer(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* ===== RkRawStream::RkEventPollThread::loop @ 0002738c size=24 ===== */

/* RkRawStream::RkEventPollThread::loop() */

undefined4 __thiscall RkRawStream::RkEventPollThread::loop(RkEventPollThread *this)

{
  (**(code **)(*(int *)this + 0x24))();
  return 1;
}



/* ===== RkRawStream::RkPollThread::setPollCallback @ 000273a4 size=12 ===== */

/* RkRawStream::RkPollThread::setPollCallback(XCam::PollCallback*) */

undefined4 __thiscall
RkRawStream::RkPollThread::setPollCallback(RkPollThread *this,PollCallback *param_1)

{
  *(PollCallback **)(this + 0x84) = param_1;
  return 1;
}



/* ===== RkRawStream::RKStream::start @ 000273b0 size=60 ===== */

/* RkRawStream::RKStream::start() */

void __thiscall RkRawStream::RKStream::start(RKStream *this)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 4);
  if ((char)piVar1[0x3e] == '\0') {
    (**(code **)(*piVar1 + 0x14))(piVar1,this[0x20]);
  }
                    /* WARNING: Could not recover jumptable at 0x000273e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(this + 0x18) + 0x1c))();
  return;
}



/* ===== RkRawStream::RKStream::startThreadOnly @ 000273ec size=16 ===== */

/* RkRawStream::RKStream::startThreadOnly() */

void __thiscall RkRawStream::RKStream::startThreadOnly(RKStream *this)

{
                    /* WARNING: Could not recover jumptable at 0x000273f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(this + 0x18) + 0x1c))();
  return;
}



/* ===== RkRawStream::RKStream::startDeviceOnly @ 000273fc size=36 ===== */

/* RkRawStream::RKStream::startDeviceOnly() */

void __thiscall RkRawStream::RKStream::startDeviceOnly(RKStream *this)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 4);
  if ((char)piVar1[0x3e] != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0002741c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x14))(piVar1,this[0x20]);
  return;
}



/* ===== RkRawStream::RKStream::stop @ 00027420 size=52 ===== */

/* RkRawStream::RKStream::stop() */

void __thiscall RkRawStream::RKStream::stop(RKStream *this)

{
  (**(code **)(**(int **)(this + 0x18) + 0x20))();
  (**(code **)(**(int **)(this + 4) + 0x18))();
  this[0x20] = (RKStream)0x0;
  return;
}



/* ===== RkRawStream::RKStream::stopThreadOnly @ 00027454 size=16 ===== */

/* RkRawStream::RKStream::stopThreadOnly() */

void __thiscall RkRawStream::RKStream::stopThreadOnly(RKStream *this)

{
                    /* WARNING: Could not recover jumptable at 0x00027460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(this + 0x18) + 0x20))();
  return;
}



/* ===== RkRawStream::RKStream::stopDeviceOnly @ 00027464 size=36 ===== */

/* RkRawStream::RKStream::stopDeviceOnly() */

void __thiscall RkRawStream::RKStream::stopDeviceOnly(RKStream *this)

{
  (**(code **)(**(int **)(this + 4) + 0x18))();
  this[0x20] = (RKStream)0x0;
  return;
}



/* ===== RkRawStream::RKStream::stopDeviceStreamoff @ 00027488 size=36 ===== */

/* RkRawStream::RKStream::stopDeviceStreamoff() */

void __thiscall RkRawStream::RKStream::stopDeviceStreamoff(RKStream *this)

{
  (**(code **)(**(int **)(this + 4) + 0x1c))();
  this[0x20] = (RKStream)0x0;
  return;
}



/* ===== RkRawStream::RKStream::stopDeviceFreebuffer @ 000274ac size=36 ===== */

/* RkRawStream::RKStream::stopDeviceFreebuffer() */

void __thiscall RkRawStream::RKStream::stopDeviceFreebuffer(RKStream *this)

{
  (**(code **)(**(int **)(this + 4) + 0x20))();
  this[0x20] = (RKStream)0x0;
  return;
}



/* ===== RkRawStream::RKStream::pause @ 000274d0 size=4 ===== */

/* RkRawStream::RKStream::pause() */

void RkRawStream::RKStream::pause(void)

{
  return;
}



/* ===== RkRawStream::RKStream::setPollCallback @ 000274d4 size=16 ===== */

/* RkRawStream::RKStream::setPollCallback(XCam::PollCallback*) */

void RkRawStream::RKStream::setPollCallback(PollCallback *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000274e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x18) + 0x18))();
  return;
}



/* ===== RkRawStream::RKStream::getFormat @ 000274e4 size=16 ===== */

/* RkRawStream::RKStream::getFormat(v4l2_format&) */

void RkRawStream::RKStream::getFormat(v4l2_format *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000274f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 4) + 0x10))();
  return;
}



/* ===== RkRawStream::RKStream::getFormat @ 000274f4 size=16 ===== */

/* RkRawStream::RKStream::getFormat(v4l2_subdev_format&) */

void RkRawStream::RKStream::getFormat(v4l2_subdev_format *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00027500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0xc) + 0x60))();
  return;
}



/* ===== FUN_00027504 @ 00027504 size=48 ===== */

void FUN_00027504(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = operator_new(8);
  iVar2 = DAT_00027534 + 0x27520;
  piVar1[1] = 1;
  *piVar1 = *(int *)(iVar2 + DAT_00027538) + 8;
  return;
}



/* ===== RkRawStream::RKStream::new_video_buffer @ 0002753c size=88 ===== */

/* RkRawStream::RKStream::new_video_buffer(XCam::SmartPtr<XCam::V4l2Buffer>,
   XCam::SmartPtr<XCam::V4l2Device>) */

int * RkRawStream::RKStream::new_video_buffer
                (int *param_1,int param_2,SmartPtr *param_3,SmartPtr *param_4)

{
  V4l2BufferProxy *this;
  int iVar1;
  undefined4 uVar2;
  
  this = operator_new(0x90);
  XCam::V4l2BufferProxy::V4l2BufferProxy(this,param_3,param_4);
  *param_1 = (int)this;
  param_1[1] = 0;
  iVar1 = FUN_00027504();
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  param_1[1] = iVar1;
  *(undefined4 *)(*param_1 + 4) = uVar2;
  return param_1;
}



/* ===== RkRawStream::RKRawStream::new_v4l2proxy_buffer @ 000275a4 size=88 ===== */

/* RkRawStream::RKRawStream::new_v4l2proxy_buffer(XCam::SmartPtr<XCam::V4l2Buffer>,
   XCam::SmartPtr<XCam::V4l2Device>) */

int * RkRawStream::RKRawStream::new_v4l2proxy_buffer
                (int *param_1,int param_2,SmartPtr *param_3,SmartPtr *param_4)

{
  V4l2BufferProxy *this;
  int iVar1;
  undefined4 uVar2;
  
  this = operator_new(0x90);
  XCam::V4l2BufferProxy::V4l2BufferProxy(this,param_3,param_4);
  *param_1 = (int)this;
  param_1[1] = 0;
  iVar1 = FUN_00027504();
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  param_1[1] = iVar1;
  *(undefined4 *)(*param_1 + 4) = uVar2;
  return param_1;
}



/* ===== RkRawStream::RkPollThread::destroy_stop_fds @ 0002760c size=56 ===== */

/* RkRawStream::RkPollThread::destroy_stop_fds() */

void __thiscall RkRawStream::RkPollThread::destroy_stop_fds(RkPollThread *this)

{
  if ((*(uint *)(this + 0x98) & *(uint *)(this + 0x94)) == 0xffffffff) {
    return;
  }
  close(*(uint *)(this + 0x94));
  close(*(int *)(this + 0x98));
  *(undefined4 *)(this + 0x94) = 0xffffffff;
  *(undefined4 *)(this + 0x98) = 0xffffffff;
  return;
}



/* ===== RkRawStream::RkPollThread::stop @ 00027644 size=68 ===== */

/* RkRawStream::RkPollThread::stop() */

undefined4 RkRawStream::RkPollThread::stop(void)

{
  RkPollThread *in_r0;
  undefined4 in_r1;
  undefined4 uStack_c;
  
  uStack_c = in_r1;
  if (*(int *)(in_r0 + 0x98) != -1) {
    uStack_c = CONCAT13(0xf,(int3)in_r1);
    write(*(int *)(in_r0 + 0x98),(void *)((int)&uStack_c + 3),1);
  }
  XCam::Thread::stop();
  destroy_stop_fds(in_r0);
  return 0;
}



/* ===== RkRawStream::RkPollThread::create_stop_fds @ 00027688 size=144 ===== */

/* RkRawStream::RkPollThread::create_stop_fds() */

undefined4 __thiscall RkRawStream::RkPollThread::create_stop_fds(RkPollThread *this)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  destroy_stop_fds(this);
  iVar1 = pipe((int *)(this + 0x94));
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    iVar1 = DAT_00027718 + 0x276bc;
  }
  else {
    iVar1 = fcntl64(*(undefined4 *)(this + 0x94),4,0x800);
    if (-1 < iVar1) {
      return 0;
    }
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    iVar1 = DAT_0002771c + 0x27714;
  }
  xcam_print_log(0x22,0xff,1,iVar1,pcVar3);
  destroy_stop_fds(this);
  return 0xffffff01;
}



/* ===== RkRawStream::RkPollThread::start @ 00027720 size=68 ===== */

/* RkRawStream::RkPollThread::start() */

undefined4 __thiscall RkRawStream::RkPollThread::start(RkPollThread *this)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = create_stop_fds(this);
  if (iVar1 == 0) {
    XCam::Thread::start((Thread *)this);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffff01;
    xcam_print_log(0x22,0xff,1,DAT_00027764 + 0x2774c);
  }
  return uVar2;
}



/* ===== RkRawStream::RKStream::set_device_prepared @ 00027768 size=8 ===== */

/* RkRawStream::RKStream::set_device_prepared(bool) */

void __thiscall RkRawStream::RKStream::set_device_prepared(RKStream *this,bool param_1)

{
  this[0x20] = (RKStream)param_1;
  return;
}



/* ===== FUN_00027770 @ 00027770 size=116 ===== */

void FUN_00027770(int *param_1)

{
  int iVar1;
  
  iVar1 = std::__atomic_base<unsigned_int>::operator--
                    ((__atomic_base<unsigned_int> *)(param_1[1] + 4));
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*(int *)param_1[1] + 8))();
    if ((iVar1 == 0) && ((int *)param_1[1] != (int *)0x0)) {
      (**(code **)(*(int *)param_1[1] + 4))();
    }
    if ((int *)*param_1 != (int *)0x0) {
      (**(code **)(*(int *)*param_1 + 4))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* ===== FUN_000277e4 @ 000277e4 size=116 ===== */

void FUN_000277e4(int *param_1)

{
  int iVar1;
  
  iVar1 = std::__atomic_base<unsigned_int>::operator--
                    ((__atomic_base<unsigned_int> *)(param_1[1] + 4));
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*(int *)param_1[1] + 8))();
    if ((iVar1 == 0) && ((int *)param_1[1] != (int *)0x0)) {
      (**(code **)(*(int *)param_1[1] + 4))();
    }
    if ((int *)*param_1 != (int *)0x0) {
      (**(code **)(*(int *)*param_1 + 4))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* ===== XCam::SmartPtr<XCam::V4l2Device>::SmartPtr @ 00027858 size=48 ===== */

/* XCam::SmartPtr<XCam::V4l2Device>::SmartPtr(XCam::SmartPtr<XCam::V4l2Device> const&) */

SmartPtr<XCam::V4l2Device> * __thiscall
XCam::SmartPtr<XCam::V4l2Device>::SmartPtr(SmartPtr<XCam::V4l2Device> *this,SmartPtr *param_1)

{
  int iVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  iVar1 = *(int *)(param_1 + 4);
  *(int *)(this + 4) = iVar1;
  if (iVar1 != 0) {
    std::__atomic_base<unsigned_int>::operator++((__atomic_base<unsigned_int> *)(iVar1 + 4));
  }
  return this;
}



/* ===== RkRawStream::RkPollThread::RkPollThread @ 00027888 size=104 ===== */

/* RkRawStream::RkPollThread::RkPollThread(char const*, int, XCam::SmartPtr<XCam::V4l2Device>,
   RkRawStream::RKStream*) */

RkPollThread * __thiscall
RkRawStream::RkPollThread::RkPollThread
          (RkPollThread *this,char *param_1,undefined4 param_2,SmartPtr *param_4,undefined4 param_5)

{
  int iVar1;
  
  iVar1 = DAT_000278f0;
  XCam::Thread::Thread((Thread *)this,param_1);
  *(int *)this = *(int *)(iVar1 + 0x278ac + DAT_000278f4) + 8;
  XCam::SmartPtr<XCam::V4l2Device>::SmartPtr((SmartPtr<XCam::V4l2Device> *)(this + 0x74),param_4);
  *(undefined4 *)(this + 0x90) = param_2;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = param_5;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x94) = 0xffffffff;
  *(undefined4 *)(this + 0x98) = 0xffffffff;
  return this;
}



/* ===== XCam::SmartPtr<XCam::V4l2SubDevice>::SmartPtr @ 000278f8 size=48 ===== */

/* XCam::SmartPtr<XCam::V4l2SubDevice>::SmartPtr(XCam::SmartPtr<XCam::V4l2SubDevice> const&) */

SmartPtr<XCam::V4l2SubDevice> * __thiscall
XCam::SmartPtr<XCam::V4l2SubDevice>::SmartPtr(SmartPtr<XCam::V4l2SubDevice> *this,SmartPtr *param_1)

{
  int iVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  iVar1 = *(int *)(param_1 + 4);
  *(int *)(this + 4) = iVar1;
  if (iVar1 != 0) {
    std::__atomic_base<unsigned_int>::operator++((__atomic_base<unsigned_int> *)(iVar1 + 4));
  }
  return this;
}



/* ===== RkRawStream::RkPollThread::RkPollThread @ 00027928 size=128 ===== */

/* RkRawStream::RkPollThread::RkPollThread(char const*, int, XCam::SmartPtr<XCam::V4l2SubDevice>,
   RkRawStream::RKStream*) */

RkPollThread * __thiscall
RkRawStream::RkPollThread::RkPollThread
          (RkPollThread *this,char *param_1,undefined4 param_2,SmartPtr *param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_000279a8;
  XCam::Thread::Thread((Thread *)this,param_1);
  iVar1 = *(int *)(param_4 + 4);
  iVar2 = *(int *)(iVar2 + 0x2794c + DAT_000279ac);
  *(int *)(this + 0x78) = iVar1;
  *(int *)this = iVar2 + 8;
  *(undefined4 *)(this + 0x74) = *(undefined4 *)param_4;
  if (iVar1 != 0) {
    std::__atomic_base<unsigned_int>::operator++((__atomic_base<unsigned_int> *)(iVar1 + 4));
  }
  XCam::SmartPtr<XCam::V4l2SubDevice>::SmartPtr
            ((SmartPtr<XCam::V4l2SubDevice> *)(this + 0x7c),param_4);
  *(undefined4 *)(this + 0x90) = param_2;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = param_5;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x94) = 0xffffffff;
  *(undefined4 *)(this + 0x98) = 0xffffffff;
  return this;
}



/* ===== RkRawStream::RkEventPollThread::poll_event_loop @ 000279b0 size=304 ===== */

/* RkRawStream::RkEventPollThread::poll_event_loop() */

undefined4 RkRawStream::RkEventPollThread::poll_event_loop(void)

{
  int in_r0;
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  void *__s;
  code *pcVar4;
  int local_30 [2];
  undefined4 local_28;
  int local_24;
  
  local_30[0] = in_r0;
  iVar1 = (**(code **)(**(int **)(in_r0 + 0x74) + 0x24))
                    (*(int **)(in_r0 + 0x74),300,*(undefined4 *)(in_r0 + 0x94));
  if (iVar1 == 3) {
    uVar3 = 0xffffff01;
  }
  else if (iVar1 < 0) {
    piVar2 = __errno_location();
    if (*piVar2 == 4 || *piVar2 == 0xb) {
      uVar3 = 0xffffffec;
    }
    else {
      uVar3 = 0xffffff01;
    }
  }
  else if (iVar1 == 0) {
    uVar3 = 0xffffffec;
  }
  else {
    __s = (void *)(in_r0 + 0xa0);
    memset(__s,0,0x80);
    iVar1 = (**(code **)(**(int **)(in_r0 + 0x74) + 0x44))(*(int **)(in_r0 + 0x74),__s);
    if (iVar1 == 0) {
      uVar3 = 0;
      if ((*(int *)(in_r0 + 0x84) != 0) && (piVar2 = *(int **)(in_r0 + 0x88), piVar2 != (int *)0x0))
      {
        local_24 = *(int *)(in_r0 + 0x80);
        pcVar4 = *(code **)(*piVar2 + 0x38);
        local_28 = *(undefined4 *)(in_r0 + 0x7c);
        if (local_24 != 0) {
          std::__atomic_base<unsigned_int>::operator++
                    ((__atomic_base<unsigned_int> *)(local_24 + 4));
        }
        (*pcVar4)(local_30,piVar2,__s,(SmartPtr<XCam::V4l2Device> *)&local_28);
        XCam::SmartPtr<XCam::V4l2Device>::release((SmartPtr<XCam::V4l2Device> *)&local_28);
        (**(code **)(**(int **)(in_r0 + 0x84) + 0x18))(*(int **)(in_r0 + 0x84),local_30);
        if (local_30[0] != 0) {
          FUN_00027770(local_30);
        }
      }
    }
    else {
      uVar3 = 0xfffffff7;
    }
  }
  return uVar3;
}



/* ===== RkRawStream::RkEventPollThread::RkEventPollThread @ 00027b04 size=108 ===== */

/* RkRawStream::RkEventPollThread::RkEventPollThread(char const*, int,
   XCam::SmartPtr<XCam::V4l2Device>, RkRawStream::RKStream*) */

RkEventPollThread * __thiscall
RkRawStream::RkEventPollThread::RkEventPollThread
          (RkEventPollThread *this,undefined4 param_1,undefined4 param_2,SmartPtr *param_4,
          undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_20;
  SmartPtr *pSStack_1c;
  
  uVar2 = param_1;
  uStack_20 = param_2;
  pSStack_1c = param_4;
  XCam::SmartPtr<XCam::V4l2Device>::SmartPtr((SmartPtr<XCam::V4l2Device> *)&uStack_20,param_4);
  iVar1 = DAT_00027b7c + 0x27b48;
  RkPollThread::RkPollThread
            ((RkPollThread *)this,param_1,param_2,(SmartPtr<XCam::V4l2Device> *)&uStack_20,param_5,
             uVar2);
  XCam::SmartPtr<XCam::V4l2Device>::release((SmartPtr<XCam::V4l2Device> *)&uStack_20);
  *(int *)this = *(int *)(iVar1 + DAT_00027b80) + 8;
  return this;
}



/* ===== RkRawStream::RkPollThread::poll_buffer_loop @ 00027b84 size=356 ===== */

/* RkRawStream::RkPollThread::poll_buffer_loop() */

int __thiscall RkRawStream::RkPollThread::poll_buffer_loop(RkPollThread *this)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 local_48;
  int local_44;
  int local_40 [2];
  undefined4 local_38;
  int local_34;
  SmartPtr<XCam::V4l2Device> aSStack_30 [12];
  
  local_48 = 0;
  local_44 = 0;
  iVar1 = (**(code **)(**(int **)(this + 0x74) + 0x24))
                    (*(int **)(this + 0x74),300,*(undefined4 *)(this + 0x94));
  if (iVar1 == 3) {
    iVar1 = -0xff;
  }
  else if (iVar1 < 0) {
    piVar2 = __errno_location();
    if (*piVar2 == 4 || *piVar2 == 0xb) {
      iVar1 = -0x14;
    }
    else {
      iVar1 = -0xff;
    }
  }
  else if (iVar1 == 0) {
    iVar1 = -0x14;
  }
  else {
    iVar1 = (**(code **)(**(int **)(this + 0x74) + 0x28))(*(int **)(this + 0x74),&local_48);
    if ((iVar1 == 0) && (*(int *)(this + 0x90) - 9U < 2)) {
      piVar2 = *(int **)(this + 0x88);
      local_34 = local_44;
      pcVar3 = *(code **)(*piVar2 + 0x3c);
      local_38 = local_48;
      if (local_44 != 0) {
        std::__atomic_base<unsigned_int>::operator++((__atomic_base<unsigned_int> *)(local_44 + 4));
      }
      XCam::SmartPtr<XCam::V4l2Device>::SmartPtr(aSStack_30,(SmartPtr *)(this + 0x74));
      (*pcVar3)(local_40,piVar2,(SmartPtr<XCam::V4l2Buffer> *)&local_38,aSStack_30);
      XCam::SmartPtr<XCam::V4l2Device>::release(aSStack_30);
      XCam::SmartPtr<XCam::V4l2Buffer>::release((SmartPtr<XCam::V4l2Buffer> *)&local_38);
      piVar2 = *(int **)(this + 0x84);
      if (piVar2 != (int *)0x0) {
        if (local_40[0] == 0) goto LAB_00027be0;
        (**(code **)(*piVar2 + 0x1c))(piVar2,local_40,*(undefined4 *)(*(int *)(this + 0x88) + 0x24))
        ;
      }
      if (local_40[0] != 0) {
        FUN_000277e4(local_40);
      }
    }
  }
LAB_00027be0:
  XCam::SmartPtr<XCam::V4l2Buffer>::release((SmartPtr<XCam::V4l2Buffer> *)&local_48);
  return iVar1;
}



/* ===== RkRawStream::RkPollThread::loop @ 00027d20 size=28 ===== */

/* RkRawStream::RkPollThread::loop() */

uint __thiscall RkRawStream::RkPollThread::loop(RkPollThread *this)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  
  uVar1 = poll_buffer_loop(this);
  bVar4 = 0xffffffeb < uVar1;
  bVar2 = uVar1 == 0xffffffec;
  if (!bVar2) {
    bVar4 = uVar1 != 0;
  }
  bVar3 = uVar1 == 1;
  if (!bVar4 || (bVar2 || bVar3)) {
    uVar1 = 1;
  }
  if (bVar4 && (!bVar2 && !bVar3)) {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== RkRawStream::RkPollThread::~RkPollThread @ 00027d3c size=72 ===== */

/* RkRawStream::RkPollThread::~RkPollThread() */

RkPollThread * __thiscall RkRawStream::RkPollThread::~RkPollThread(RkPollThread *this)

{
  *(int *)this = *(int *)(DAT_00027d84 + 0x27d4c + DAT_00027d88) + 8;
  stop();
  XCam::SmartPtr<XCam::V4l2SubDevice>::release((SmartPtr<XCam::V4l2SubDevice> *)(this + 0x7c));
  XCam::SmartPtr<XCam::V4l2Device>::release((SmartPtr<XCam::V4l2Device> *)(this + 0x74));
  XCam::Thread::~Thread((Thread *)this);
  return this;
}



/* ===== RkRawStream::RkPollThread::~RkPollThread @ 00027d8c size=32 ===== */

/* RkRawStream::RkPollThread::~RkPollThread() */

RkPollThread * __thiscall RkRawStream::RkPollThread::~RkPollThread(RkPollThread *this)

{
  ~RkPollThread(this);
  operator_delete(this,0xa0);
  return this;
}



/* ===== RkRawStream::RkEventPollThread::~RkEventPollThread @ 00027dac size=52 ===== */

/* RkRawStream::RkEventPollThread::~RkEventPollThread() */

RkEventPollThread * __thiscall
RkRawStream::RkEventPollThread::~RkEventPollThread(RkEventPollThread *this)

{
  *(int *)this = *(int *)(DAT_00027de0 + 0x27dbc + DAT_00027de4) + 8;
  RkPollThread::stop();
  RkPollThread::~RkPollThread((RkPollThread *)this);
  return this;
}



/* ===== RkRawStream::RkEventPollThread::~RkEventPollThread @ 00027de8 size=32 ===== */

/* RkRawStream::RkEventPollThread::~RkEventPollThread() */

RkEventPollThread * __thiscall
RkRawStream::RkEventPollThread::~RkEventPollThread(RkEventPollThread *this)

{
  ~RkEventPollThread(this);
  operator_delete(this,0x120);
  return this;
}



/* ===== RkRawStream::RkEventPollThread::RkEventPollThread @ 00027e08 size=108 ===== */

/* RkRawStream::RkEventPollThread::RkEventPollThread(char const*, int,
   XCam::SmartPtr<XCam::V4l2SubDevice>, RkRawStream::RKStream*) */

RkEventPollThread * __thiscall
RkRawStream::RkEventPollThread::RkEventPollThread
          (RkEventPollThread *this,undefined4 param_1,undefined4 param_2,SmartPtr *param_4,
          undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_20;
  SmartPtr *pSStack_1c;
  
  uVar2 = param_1;
  uStack_20 = param_2;
  pSStack_1c = param_4;
  XCam::SmartPtr<XCam::V4l2SubDevice>::SmartPtr((SmartPtr<XCam::V4l2SubDevice> *)&uStack_20,param_4)
  ;
  iVar1 = DAT_00027e80 + 0x27e4c;
  RkPollThread::RkPollThread
            ((RkPollThread *)this,param_1,param_2,(SmartPtr<XCam::V4l2SubDevice> *)&uStack_20,
             param_5,uVar2);
  XCam::SmartPtr<XCam::V4l2SubDevice>::release((SmartPtr<XCam::V4l2SubDevice> *)&uStack_20);
  *(int *)this = *(int *)(iVar1 + DAT_00027e84) + 8;
  return this;
}



/* ===== XCam::SmartPtr<RkRawStream::RkPollThread>::release @ 00027e88 size=128 ===== */

/* XCam::SmartPtr<RkRawStream::RkPollThread>::release() */

void __thiscall
XCam::SmartPtr<RkRawStream::RkPollThread>::release(SmartPtr<RkRawStream::RkPollThread> *this)

{
  int iVar1;
  
  if (*(int *)this == 0) {
    return;
  }
  iVar1 = std::__atomic_base<unsigned_int>::operator--
                    ((__atomic_base<unsigned_int> *)(*(int *)(this + 4) + 4));
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)(this + 4) + 8))();
    if ((iVar1 == 0) && (*(int **)(this + 4) != (int *)0x0)) {
      (**(code **)(**(int **)(this + 4) + 4))();
    }
    if (*(int **)this != (int *)0x0) {
      (**(code **)(**(int **)this + 4))();
    }
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}



/* ===== RkRawStream::RKStream::~RKStream @ 00027f08 size=60 ===== */

/* RkRawStream::RKStream::~RKStream() */

RKStream * __thiscall RkRawStream::RKStream::~RKStream(RKStream *this)

{
  *(int *)this = *(int *)(DAT_00027f44 + 0x27f18 + DAT_00027f48) + 8;
  XCam::SmartPtr<RkRawStream::RkPollThread>::release
            ((SmartPtr<RkRawStream::RkPollThread> *)(this + 0x18));
  XCam::SmartPtr<XCam::V4l2SubDevice>::release((SmartPtr<XCam::V4l2SubDevice> *)(this + 0xc));
  XCam::SmartPtr<XCam::V4l2Device>::release((SmartPtr<XCam::V4l2Device> *)(this + 4));
  return this;
}



/* ===== RkRawStream::RKStream::~RKStream @ 00027f4c size=32 ===== */

/* RkRawStream::RKStream::~RKStream() */

RKStream * __thiscall RkRawStream::RKStream::~RKStream(RKStream *this)

{
  ~RKStream(this);
  operator_delete(this,0x24);
  return this;
}



/* ===== RkRawStream::RKRawStream::~RKRawStream @ 00027f6c size=44 ===== */

/* RkRawStream::RKRawStream::~RKRawStream() */

RKRawStream * __thiscall RkRawStream::RKRawStream::~RKRawStream(RKRawStream *this)

{
  *(int *)this = *(int *)(DAT_00027f98 + 0x27f7c + DAT_00027f9c) + 8;
  RKStream::~RKStream((RKStream *)this);
  return this;
}



/* ===== RkRawStream::RKRawStream::~RKRawStream @ 00027fa0 size=32 ===== */

/* RkRawStream::RKRawStream::~RKRawStream() */

RKRawStream * __thiscall RkRawStream::RKRawStream::~RKRawStream(RKRawStream *this)

{
  ~RKRawStream(this);
  operator_delete(this,0x28);
  return this;
}



/* ===== RkRawStream::RKStream::RKStream @ 00027fc0 size=224 ===== */

/* RkRawStream::RKStream::RKStream(char const*, int) */

RKStream * __thiscall RkRawStream::RKStream::RKStream(RKStream *this,char *param_1,int param_2)

{
  V4l2Device *this_00;
  undefined4 uVar1;
  RkPollThread *pRVar2;
  int iVar3;
  int aiStack_28 [2];
  
  iVar3 = DAT_000280e8 + 0x27fe0;
  *(int *)this = *(int *)(iVar3 + DAT_000280ec) + 8;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(int *)(this + 0x14) = param_2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  this[0x20] = (RKStream)0x0;
  aiStack_28[0] = param_2;
  this_00 = operator_new(0x134);
  XCam::V4l2Device::V4l2Device(this_00,param_1);
  XCam::SmartPtr<XCam::V4l2Device>::release((SmartPtr<XCam::V4l2Device> *)(this + 4));
  *(V4l2Device **)(this + 4) = this_00;
  uVar1 = FUN_00027504();
  *(undefined4 *)(this + 8) = uVar1;
  XCam::SmartPtr<XCam::V4l2Device>::SmartPtr
            ((SmartPtr<XCam::V4l2Device> *)aiStack_28,(SmartPtr *)(this + 4));
  pRVar2 = operator_new(0xa0);
  RkPollThread::RkPollThread
            (pRVar2,*(undefined4 *)(*(int *)(iVar3 + DAT_000280f0) + param_2 * 4),param_2,
             (SmartPtr<XCam::V4l2Device> *)aiStack_28,this);
  XCam::SmartPtr<RkRawStream::RkPollThread>::release
            ((SmartPtr<RkRawStream::RkPollThread> *)(this + 0x18));
  *(RkPollThread **)(this + 0x18) = pRVar2;
  uVar1 = FUN_00027504();
  *(undefined4 *)(this + 0x1c) = uVar1;
  XCam::SmartPtr<XCam::V4l2Device>::release((SmartPtr<XCam::V4l2Device> *)aiStack_28);
  return this;
}



/* ===== RkRawStream::RKStream::RKStream @ 000280f4 size=184 ===== */

/* RkRawStream::RKStream::RKStream(XCam::SmartPtr<XCam::V4l2SubDevice>, int) */

RKStream * __thiscall
RkRawStream::RKStream::RKStream(RKStream *this,SmartPtr *param_2,int param_3,undefined4 param_4)

{
  RkEventPollThread *pRVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  SmartPtr *pSVar5;
  int iStack_28;
  undefined4 uStack_24;
  
  iVar4 = DAT_000281e0 + 0x28114;
  iVar3 = *(int *)(iVar4 + DAT_000281e4);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(int *)this = iVar3 + 8;
  pSVar5 = param_2;
  iStack_28 = param_3;
  uStack_24 = param_4;
  XCam::SmartPtr<XCam::V4l2SubDevice>::SmartPtr
            ((SmartPtr<XCam::V4l2SubDevice> *)(this + 0xc),param_2);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  this[0x20] = (RKStream)0x0;
  *(int *)(this + 0x14) = param_3;
  XCam::SmartPtr<XCam::V4l2SubDevice>::SmartPtr((SmartPtr<XCam::V4l2SubDevice> *)&iStack_28,param_2)
  ;
  pRVar1 = operator_new(0x120);
  RkEventPollThread::RkEventPollThread
            (pRVar1,*(undefined4 *)(*(int *)(iVar4 + DAT_000281e8) + param_3 * 4),param_3,
             (SmartPtr<XCam::V4l2SubDevice> *)&iStack_28,this,pSVar5);
  XCam::SmartPtr<RkRawStream::RkPollThread>::release
            ((SmartPtr<RkRawStream::RkPollThread> *)(this + 0x18));
  *(RkEventPollThread **)(this + 0x18) = pRVar1;
  uVar2 = FUN_00027504();
  *(undefined4 *)(this + 0x1c) = uVar2;
  XCam::SmartPtr<XCam::V4l2SubDevice>::release((SmartPtr<XCam::V4l2SubDevice> *)&iStack_28);
  return this;
}



/* ===== RkRawStream::RKStream::RKStream @ 000281ec size=184 ===== */

/* RkRawStream::RKStream::RKStream(XCam::SmartPtr<XCam::V4l2Device>, int) */

RKStream * __thiscall
RkRawStream::RKStream::RKStream(RKStream *this,SmartPtr *param_2,int param_3,undefined4 param_4)

{
  RkPollThread *pRVar1;
  undefined4 uVar2;
  int iVar3;
  SmartPtr *pSVar4;
  int iStack_28;
  undefined4 uStack_24;
  
  iVar3 = DAT_000282d8 + 0x2820c;
  *(int *)this = *(int *)(iVar3 + DAT_000282dc) + 8;
  pSVar4 = param_2;
  iStack_28 = param_3;
  uStack_24 = param_4;
  XCam::SmartPtr<XCam::V4l2Device>::SmartPtr((SmartPtr<XCam::V4l2Device> *)(this + 4),param_2);
  *(int *)(this + 0x14) = param_3;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  this[0x20] = (RKStream)0x0;
  XCam::SmartPtr<XCam::V4l2Device>::SmartPtr((SmartPtr<XCam::V4l2Device> *)&iStack_28,param_2);
  pRVar1 = operator_new(0xa0);
  RkPollThread::RkPollThread
            (pRVar1,*(undefined4 *)(*(int *)(iVar3 + DAT_000282e0) + param_3 * 4),param_3,
             (SmartPtr<XCam::V4l2Device> *)&iStack_28,this,pSVar4);
  XCam::SmartPtr<RkRawStream::RkPollThread>::release
            ((SmartPtr<RkRawStream::RkPollThread> *)(this + 0x18));
  *(RkPollThread **)(this + 0x18) = pRVar1;
  uVar2 = FUN_00027504();
  *(undefined4 *)(this + 0x1c) = uVar2;
  XCam::SmartPtr<XCam::V4l2Device>::release((SmartPtr<XCam::V4l2Device> *)&iStack_28);
  return this;
}



/* ===== RkRawStream::RKRawStream::RKRawStream @ 000282e4 size=96 ===== */

/* RkRawStream::RKRawStream::RKRawStream(XCam::SmartPtr<XCam::V4l2Device>, int, int) */

RKRawStream * __thiscall
RkRawStream::RKRawStream::RKRawStream
          (RKRawStream *this,SmartPtr *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  RKRawStream *pRStack_20;
  SmartPtr *pSStack_1c;
  
  iVar1 = DAT_00028350;
  pRStack_20 = this;
  pSStack_1c = param_2;
  XCam::SmartPtr<XCam::V4l2Device>::SmartPtr((SmartPtr<XCam::V4l2Device> *)&pRStack_20,param_2);
  RKStream::RKStream((RKStream *)this,(SmartPtr<XCam::V4l2Device> *)&pRStack_20,param_4);
  XCam::SmartPtr<XCam::V4l2Device>::release((SmartPtr<XCam::V4l2Device> *)&pRStack_20);
  iVar1 = *(int *)(iVar1 + 0x28318 + DAT_00028354);
  *(undefined4 *)(this + 0x24) = param_3;
  *(int *)this = iVar1 + 8;
  return this;
}



/* ===== FUN_00028364 @ 00028364 size=128 ===== */

int FUN_00028364(int param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  
  uVar3 = *(uint *)(param_1 + 0x10c);
  if (uVar3 <= *(uint *)(param_1 + 0x110)) {
    pvVar1 = realloc(*(void **)(param_1 + 0x108),uVar3 * 0x38);
    if (pvVar1 == (void *)0x0) {
      return 0;
    }
    iVar2 = *(int *)(param_1 + 0x110);
    for (pvVar4 = pvVar1; (void *)(iVar2 * 0x1c + (int)pvVar1) != pvVar4;
        pvVar4 = (void *)((int)pvVar4 + 0x1c)) {
      *(void **)(*(int *)((int)pvVar4 + 8) + 8) = pvVar4;
    }
    *(uint *)(param_1 + 0x10c) = uVar3 << 1;
    *(void **)(param_1 + 0x108) = pvVar1;
  }
  iVar2 = *(int *)(param_1 + 0x110);
  *(int *)(param_1 + 0x110) = iVar2 + 1;
  return iVar2 * 0x1c + *(int *)(param_1 + 0x108);
}



/* ===== FUN_000283e4 @ 000283e4 size=256 ===== */

int FUN_000283e4(int param_1)

{
  ssize_t sVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  char acStack_4c8 [32];
  char acStack_4a8 [32];
  stat64 sStack_488;
  char acStack_420 [1028];
  
  sprintf(acStack_4a8,(char *)(DAT_000284e4 + 0x28408),*(undefined4 *)(param_1 + 0x4c),
          *(undefined4 *)(param_1 + 0x50));
  sVar1 = readlink(acStack_4a8,acStack_420,0x400);
  if (-1 < sVar1) {
    acStack_420[sVar1] = '\0';
    pcVar3 = strrchr(acStack_420,0x2f);
    if (pcVar3 == (char *)0x0) {
      return -0x16;
    }
    sprintf(acStack_4c8,(char *)(DAT_000284e8 + 0x28488),pcVar3 + 1);
    iVar4 = stat64(acStack_4c8,&sStack_488);
    if (-1 < iVar4) {
      uVar5 = gnu_dev_major(sStack_488.st_rdev);
      if (uVar5 != *(uint *)(param_1 + 0x4c)) {
        return 0;
      }
      uVar5 = gnu_dev_minor(sStack_488.st_rdev);
      if (uVar5 != *(uint *)(param_1 + 0x50)) {
        return 0;
      }
      strcpy((char *)(param_1 + 0x114),acStack_4c8);
      return 0;
    }
  }
  piVar2 = __errno_location();
  return -*piVar2;
}



/* ===== FUN_000284ec @ 000284ec size=128 ===== */

int FUN_000284ec(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*param_1 == -1) {
    (*(code *)param_1[0x45])(param_1[0x46],DAT_0002856c + 0x28520,param_1[2]);
    iVar1 = open64((char *)param_1[2],2);
    *param_1 = iVar1;
    if (iVar1 < 0) {
      piVar2 = __errno_location();
      iVar1 = *piVar2;
      (*(code *)param_1[0x45])
                (param_1[0x46],DAT_00028574 + 0x2855c,DAT_00028570 + 0x28554,param_1[2]);
      return -iVar1;
    }
  }
  return 0;
}



/* ===== media_entity_remote_source @ 00028578 size=104 ===== */

undefined4 media_entity_remote_source(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_1[2] & 1U) == 0) {
    return 0;
  }
  iVar1 = 0;
  while( true ) {
    if (*(int *)(*param_1 + 0x110) == iVar1) {
      return 0;
    }
    puVar2 = (undefined4 *)(iVar1 * 0x1c + *(int *)(*param_1 + 0x108));
    if (((puVar2[3] & 1) != 0) && ((int *)puVar2[1] == param_1)) break;
    iVar1 = iVar1 + 1;
  }
  return *puVar2;
}



/* ===== media_get_entity_by_name @ 000285e0 size=112 ===== */

int media_get_entity_by_name(int param_1,char *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_3 < 0x20) {
    iVar4 = *(int *)(param_1 + 0x110);
    for (iVar3 = 0; iVar3 != iVar4; iVar3 = iVar3 + 1) {
      iVar2 = iVar3 * 0x138 + *(int *)(param_1 + 0x10c);
      iVar1 = strncmp((char *)(iVar2 + 8),param_2,param_3);
      if ((iVar1 == 0) && (*(char *)(iVar2 + param_3 + 8) == '\0')) {
        return iVar2;
      }
    }
  }
  return 0;
}



/* ===== media_get_entity_by_id @ 00028650 size=96 ===== */

int media_get_entity_by_id(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x110) == iVar1) {
      return 0;
    }
    iVar2 = iVar1 * 0x138 + *(int *)(param_1 + 0x10c);
    if (*(uint *)(iVar2 + 4) == (param_2 & 0x7fffffff)) {
      if (-1 < (int)param_2) {
        return iVar2;
      }
    }
    else {
      uVar3 = param_2 >> 0x1f;
      if (*(uint *)(iVar2 + 4) <= (param_2 & 0x7fffffff)) {
        uVar3 = 0;
      }
      if (uVar3 != 0) {
        return iVar2;
      }
    }
    iVar1 = iVar1 + 1;
  } while( true );
}



/* ===== media_get_entities_count @ 000286b0 size=8 ===== */

undefined4 media_get_entities_count(int param_1)

{
  return *(undefined4 *)(param_1 + 0x110);
}



/* ===== media_get_entity @ 000286b8 size=28 ===== */

int media_get_entity(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < *(uint *)(param_1 + 0x110)) {
    iVar1 = param_2 * 0x138 + *(int *)(param_1 + 0x10c);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== media_entity_get_pad @ 000286d4 size=28 ===== */

int media_entity_get_pad(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < *(ushort *)(param_1 + 0x38)) {
    iVar1 = param_2 * 0x18 + *(int *)(param_1 + 0x104);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== media_entity_get_links_count @ 000286f0 size=8 ===== */

undefined4 media_entity_get_links_count(int param_1)

{
  return *(undefined4 *)(param_1 + 0x110);
}



/* ===== media_entity_get_link @ 000286f8 size=28 ===== */

int media_entity_get_link(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < *(uint *)(param_1 + 0x110)) {
    iVar1 = param_2 * 0x1c + *(int *)(param_1 + 0x108);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== media_entity_get_devname @ 00028714 size=28 ===== */

int media_entity_get_devname(int param_1)

{
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x114) == '\0') {
      param_1 = 0;
    }
    else {
      param_1 = param_1 + 0x114;
    }
    return param_1;
  }
  return 0;
}



/* ===== media_get_default_entity @ 00028730 size=76 ===== */

undefined4 media_get_default_entity(int param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0x10001:
    return *(undefined4 *)(param_1 + 0x11c);
  case 0x10002:
    return *(undefined4 *)(param_1 + 0x120);
  case 0x10003:
    return *(undefined4 *)(param_1 + 0x124);
  case 0x10004:
    return *(undefined4 *)(param_1 + 0x128);
  default:
    return 0;
  }
}



/* ===== media_get_info @ 0002877c size=8 ===== */

int media_get_info(int param_1)

{
  return param_1 + 0xc;
}



/* ===== media_get_devnode @ 00028784 size=8 ===== */

undefined4 media_get_devnode(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* ===== media_entity_get_info @ 0002878c size=8 ===== */

int media_entity_get_info(int param_1)

{
  return param_1 + 4;
}



/* ===== media_setup_link @ 00028794 size=404 ===== */

int media_setup_link(int *param_1,int *param_2,int *param_3,uint param_4)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  undefined4 local_54;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  undefined2 uStack_42;
  undefined2 local_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 local_30;
  undefined2 uStack_2e;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar1 = FUN_000284ec();
  if (-1 < iVar1) {
    iVar1 = *param_2;
    for (iVar9 = 0; *(int *)(iVar1 + 0x110) != iVar9; iVar9 = iVar9 + 1) {
      iVar7 = *(int *)(iVar1 + 0x108) + iVar9 * 0x1c;
      piVar5 = *(int **)(*(int *)(iVar1 + 0x108) + iVar9 * 0x1c);
      if ((*piVar5 == iVar1) && (iVar10 = piVar5[1], iVar10 == param_2[1])) {
        iVar3 = **(int **)(iVar7 + 4);
        if ((iVar3 == *param_3) && (iVar6 = (*(int **)(iVar7 + 4))[1], iVar6 == param_3[1])) {
          uStack_46 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          local_4e = 0;
          uStack_48 = (undefined2)
                      ((uint)*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4) >> 0x10)
          ;
          uStack_42 = (undefined2)uStack_24;
          uStack_3a = (undefined2)*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          uStack_34 = (undefined2)((uint)uStack_46 >> 0x10);
          local_30 = 0;
          uStack_2e = 0;
          uVar4 = *(undefined4 *)(iVar3 + 4);
          local_54 = *(undefined4 *)(iVar1 + 4);
          local_40 = (undefined2)uVar4;
          uStack_3e = (undefined2)((uint)uVar4 >> 0x10);
          uStack_4c = 2;
          uStack_4a = 0;
          uStack_2c = *(uint *)(iVar7 + 0xc) & 2 | param_4;
          uStack_3c = (undefined2)iVar6;
          local_50 = (undefined2)iVar10;
          uStack_38 = 1;
          uStack_36 = 0;
          uStack_32 = uStack_42;
          uStack_28 = uStack_46;
          iVar1 = ioctl(*param_1,DAT_00028930,&local_54);
          if (iVar1 == -1) {
            piVar5 = __errno_location();
            iVar9 = param_1[0x46];
            pcVar8 = (code *)param_1[0x45];
            iVar1 = -*piVar5;
            pcVar2 = strerror(*piVar5);
            (*pcVar8)(iVar9,DAT_00028938 + 0x28904,DAT_00028934 + 0x28900,pcVar2);
          }
          else {
            *(uint *)(iVar7 + 0xc) = uStack_2c;
            iVar1 = 0;
            *(uint *)(*(int *)(iVar7 + 8) + 0xc) = uStack_2c;
          }
          goto LAB_000287f0;
        }
      }
    }
    iVar1 = -2;
    (*(code *)param_1[0x45])(param_1[0x46],DAT_0002892c + 0x287ec,DAT_00028928 + 0x287e8);
  }
LAB_000287f0:
  if (*param_1 != -1) {
    close(*param_1);
    *param_1 = -1;
  }
  return iVar1;
}



/* ===== media_reset_links @ 0002893c size=144 ===== */

int media_reset_links(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = 0;
  do {
    if (*(uint *)(param_1 + 0x110) <= uVar5) {
      return 0;
    }
    iVar4 = uVar5 * 0x138 + *(int *)(param_1 + 0x10c);
    for (uVar6 = 0; uVar6 < *(uint *)(iVar4 + 0x110); uVar6 = uVar6 + 1) {
      iVar2 = *(int *)(iVar4 + 0x108) + uVar6 * 0x1c;
      uVar3 = *(uint *)(iVar2 + 0xc);
      if ((((uVar3 & 2) == 0) &&
          (piVar1 = *(int **)(*(int *)(iVar4 + 0x108) + uVar6 * 0x1c), *piVar1 == iVar4)) &&
         (iVar2 = media_setup_link(param_1,piVar1,*(undefined4 *)(iVar2 + 4),uVar3 & 0xfffffffe),
         iVar2 < 0)) {
        return iVar2;
      }
    }
    uVar5 = uVar5 + 1;
  } while( true );
}



/* ===== media_device_enumerate @ 000289cc size=1268 ===== */

int media_device_enumerate(int *param_1)

{
  ushort uVar1;
  ulong __request;
  int *piVar2;
  char *pcVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  ushort *puVar11;
  int iVar12;
  int iVar13;
  void *__s;
  int iVar14;
  code *pcVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined4 local_44;
  void *local_40;
  void *local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_1[0x43] == 0) {
    iVar13 = FUN_000284ec();
    if (-1 < iVar13) {
      iVar13 = ioctl(*param_1,DAT_00028ec0,param_1 + 3);
      __request = DAT_00028ed0;
      pcVar15 = (code *)param_1[0x45];
      if (iVar13 < 0) {
        piVar2 = __errno_location();
        iVar14 = param_1[0x46];
        iVar17 = param_1[2];
        iVar13 = -*piVar2;
        pcVar3 = strerror(*piVar2);
        (*pcVar15)(iVar14,DAT_00028ec8 + 0x28a40,DAT_00028ec4 + 0x28a3c,iVar17,pcVar3);
      }
      else {
        (*pcVar15)(param_1[0x46],DAT_00028ecc + 0x28a7c);
        uVar18 = 0;
        while( true ) {
          pvVar4 = realloc((void *)param_1[0x43],param_1[0x44] * 0x138 + 0x138);
          iVar14 = param_1[0x44];
          __s = (void *)((int)pvVar4 + iVar14 * 0x138);
          param_1[0x43] = (int)pvVar4;
          memset(__s,0,0x138);
          *(undefined4 *)((int)__s + 0x134) = 0xffffffff;
          iVar13 = *param_1;
          *(uint *)((int)__s + 4) = uVar18 | 0x80000000;
          *(int **)((int)pvVar4 + iVar14 * 0x138) = param_1;
          iVar13 = ioctl(iVar13,__request);
          if (iVar13 < 0) break;
          iVar13 = (uint)*(ushort *)((int)__s + 0x3a) + (uint)*(ushort *)((int)__s + 0x38);
          *(int *)((int)__s + 0x10c) = iVar13;
          pvVar4 = malloc((uint)*(ushort *)((int)__s + 0x38) * 0x18);
          *(void **)((int)__s + 0x104) = pvVar4;
          pvVar5 = malloc(iVar13 * 0x1c);
          *(void **)((int)__s + 0x108) = pvVar5;
          if (pvVar5 == (void *)0x0 || pvVar4 == (void *)0x0) {
            iVar13 = -0xc;
            goto LAB_00028b04;
          }
          param_1[0x44] = param_1[0x44] + 1;
          if ((*(uint *)((int)__s + 0x30) & 1) != 0) {
            switch(*(undefined4 *)((int)__s + 0x28)) {
            case 0x10001:
              param_1[0x47] = (int)__s;
              break;
            case 0x10002:
              param_1[0x48] = (int)__s;
              break;
            case 0x10003:
              param_1[0x49] = (int)__s;
              break;
            case 0x10004:
              param_1[0x4a] = (int)__s;
            }
          }
          iVar13 = media_entity_get_info(__s);
          if (((*(uint *)(iVar13 + 0x24) & 0xff0000) == 0x10000) ||
             (iVar13 = media_entity_get_info(__s), (*(uint *)(iVar13 + 0x24) & 0xff0000) == 0x20000)
             ) {
            FUN_000283e4(__s);
          }
          uVar18 = *(uint *)((int)__s + 4);
        }
        piVar2 = __errno_location();
        iVar13 = *piVar2;
        if ((iVar13 == 0x16) || (iVar13 < 1)) {
          iVar13 = 0;
          (*(code *)param_1[0x45])(param_1[0x46],DAT_00028edc + 0x28c40,param_1[0x44]);
          (*(code *)param_1[0x45])(param_1[0x46],DAT_00028ee0 + 0x28c54);
          iVar14 = DAT_00028ee4 + 0x28c64;
          for (uVar18 = 1; uVar18 <= (uint)param_1[0x44]; uVar18 = uVar18 + 1) {
            uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
            uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
            uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
            iVar16 = param_1[0x43] + uVar18 * 0x138 + -0x138;
            local_38 = 0;
            local_44 = *(undefined4 *)(iVar16 + 4);
            local_40 = calloc((uint)*(ushort *)(iVar16 + 0x38),0x14);
            local_3c = calloc((uint)*(ushort *)(iVar16 + 0x3a),0x34);
            iVar17 = ioctl(*param_1,DAT_00028ee8,&local_44);
            if (iVar17 < 0) {
              pcVar15 = (code *)param_1[0x45];
              iVar14 = param_1[0x46];
              iVar13 = -*piVar2;
              pcVar3 = strerror(*piVar2);
              (*pcVar15)(iVar14,DAT_00028ef0 + 0x28d48,DAT_00028eec + 0x28d44,pcVar3);
              free(local_40);
              free(local_3c);
              break;
            }
            uVar1 = *(ushort *)(iVar16 + 0x38);
            puVar11 = (ushort *)((int)local_40 + 4);
            for (uVar6 = 0; uVar6 < uVar1; uVar6 = uVar6 + 1) {
              iVar17 = *(int *)(iVar16 + 0x104) + uVar6 * 0x18;
              *(int *)(*(int *)(iVar16 + 0x104) + uVar6 * 0x18) = iVar16;
              *(uint *)(iVar17 + 4) = (uint)*puVar11;
              *(undefined4 *)(iVar17 + 8) = *(undefined4 *)(puVar11 + 2);
              puVar11 = puVar11 + 10;
            }
            for (uVar6 = 0; pvVar4 = local_3c, uVar6 < *(ushort *)(iVar16 + 0x3a); uVar6 = uVar6 + 1
                ) {
              iVar12 = uVar6 * 0x34;
              iVar17 = media_get_entity_by_id(param_1,*(undefined4 *)((int)local_3c + iVar12));
              iVar7 = media_get_entity_by_id(param_1,*(undefined4 *)((int)pvVar4 + iVar12 + 0x14));
              if (iVar7 == 0 || iVar17 == 0) {
                (*(code *)param_1[0x45])
                          (param_1[0x46],iVar14,uVar18,uVar6,*(undefined4 *)((int)pvVar4 + iVar12),
                           *(undefined2 *)((int)pvVar4 + iVar12 + 4),
                           *(undefined4 *)((int)pvVar4 + iVar12 + 0x14),
                           *(undefined2 *)((int)pvVar4 + iVar12 + 0x18));
                iVar13 = -0x16;
              }
              else {
                piVar8 = (int *)FUN_00028364(iVar17);
                iVar9 = *(int *)(iVar7 + 0x104);
                *piVar8 = (uint)*(ushort *)((int)pvVar4 + iVar12 + 4) * 0x18 +
                          *(int *)(iVar17 + 0x104);
                piVar8[1] = (uint)*(ushort *)((int)pvVar4 + iVar12 + 0x18) * 0x18 + iVar9;
                piVar8[3] = *(int *)((int)pvVar4 + iVar12 + 0x28);
                piVar10 = (int *)FUN_00028364(iVar7);
                iVar7 = *(int *)(iVar7 + 0x104);
                *piVar10 = (uint)*(ushort *)((int)pvVar4 + iVar12 + 4) * 0x18 +
                           *(int *)(iVar17 + 0x104);
                piVar10[1] = (uint)*(ushort *)((int)pvVar4 + iVar12 + 0x18) * 0x18 + iVar7;
                piVar10[3] = *(int *)((int)pvVar4 + iVar12 + 0x28);
                piVar8[2] = (int)piVar10;
                piVar10[2] = (int)piVar8;
              }
            }
            free(local_40);
            free(local_3c);
          }
          if (iVar13 < 0) {
            (*(code *)param_1[0x45])
                      (param_1[0x46],DAT_00028ef8 + 0x28d88,DAT_00028ef4 + 0x28d80,param_1[2]);
          }
          else {
            iVar13 = 0;
          }
        }
        else {
          iVar13 = -iVar13;
LAB_00028b04:
          iVar14 = param_1[0x46];
          iVar17 = param_1[2];
          pcVar15 = (code *)param_1[0x45];
          pcVar3 = strerror(-iVar13);
          (*pcVar15)(iVar14,DAT_00028ed8 + 0x28b30,DAT_00028ed4 + 0x28b2c,iVar17,pcVar3);
        }
      }
      if (*param_1 != -1) {
        close(*param_1);
        *param_1 = -1;
      }
    }
  }
  else {
    iVar13 = 0;
  }
  return iVar13;
}



/* ===== media_debug_set_handler @ 00028efc size=40 ===== */

void media_debug_set_handler(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = DAT_00028f24;
  if (param_2 != 0) {
    *(int *)(param_1 + 0x114) = param_2;
    *(undefined4 *)(param_1 + 0x118) = param_3;
    return;
  }
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(int *)(param_1 + 0x114) = iVar1 + 0x28f20;
  return;
}



/* ===== FUN_00028f28 @ 00028f28 size=56 ===== */

undefined4 * FUN_00028f28(void)

{
  undefined4 *puVar1;
  
  puVar1 = calloc(1,300);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0xffffffff;
    puVar1[1] = 1;
    media_debug_set_handler(puVar1,0);
  }
  return puVar1;
}



/* ===== media_device_new_emulated @ 00028f60 size=44 ===== */

int media_device_new_emulated(void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00028f28();
  if (iVar1 != 0) {
    memcpy((void *)(iVar1 + 0xc),param_1,0x100);
  }
  return iVar1;
}



/* ===== media_device_ref @ 00028f8c size=16 ===== */

void media_device_ref(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}



/* ===== media_device_unref @ 00028f9c size=120 ===== */

void media_device_unref(void *param_1)

{
  void *__ptr;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)param_1 + 4) + -1;
  *(int *)((int)param_1 + 4) = iVar1;
  if (0 < iVar1) {
    return;
  }
  for (uVar2 = 0; __ptr = *(void **)((int)param_1 + 0x10c), uVar2 < *(uint *)((int)param_1 + 0x110);
      uVar2 = uVar2 + 1) {
    free(*(void **)((int)__ptr + uVar2 * 0x138 + 0x104));
    free(*(void **)((int)__ptr + uVar2 * 0x138 + 0x108));
    iVar1 = *(int *)((int)__ptr + uVar2 * 0x138 + 0x134);
    if (iVar1 != -1) {
      close(iVar1);
    }
  }
  free(__ptr);
  free(*(void **)((int)param_1 + 8));
  free(param_1);
  return;
}



/* ===== media_device_new @ 00029014 size=64 ===== */

int media_device_new(char *param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_00028f28();
  if (iVar1 != 0) {
    pcVar2 = strdup(param_1);
    *(char **)(iVar1 + 8) = pcVar2;
    if (pcVar2 == (char *)0x0) {
      media_device_unref(iVar1);
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ===== media_device_add_entity @ 00029054 size=344 ===== */

undefined4 media_device_add_entity(int param_1,int param_2,char *param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *__s;
  int iVar7;
  
  pvVar1 = realloc(*(void **)(param_1 + 0x10c),*(int *)(param_1 + 0x110) * 0x138 + 0x138);
  if (pvVar1 == (void *)0x0) {
    return 0xfffffff4;
  }
  *(void **)(param_1 + 0x10c) = pvVar1;
  iVar7 = *(int *)(param_1 + 0x110) + 1;
  *(int *)(param_1 + 0x110) = iVar7;
  iVar7 = iVar7 * 0x138 + -0x138;
  __s = (undefined4 *)((int)pvVar1 + iVar7);
  memset(__s,0,0x138);
  __s[0x4d] = 0xffffffff;
  *(int *)((int)pvVar1 + iVar7) = param_1;
  strncpy((char *)(__s + 0x45),param_3,0x1f);
  *(undefined1 *)((int)__s + 0x133) = 0;
  uVar5 = *(undefined4 *)(param_2 + 0x24);
  __s[1] = 0;
  __s[0xc] = 0;
  __s[10] = uVar5;
  puVar3 = (undefined4 *)(param_2 + 4);
  puVar6 = __s;
  do {
    puVar4 = puVar3 + 2;
    uVar2 = puVar3[1];
    puVar6[2] = *puVar3;
    puVar6[3] = uVar2;
    puVar3 = puVar4;
    puVar6 = puVar6 + 2;
  } while (puVar4 != (undefined4 *)(param_2 + 0x24));
  switch(uVar5) {
  case 0x10001:
    puVar6 = (undefined4 *)(param_1 + 0x11c);
    goto LAB_00029134;
  case 0x10002:
    puVar6 = (undefined4 *)(param_1 + 0x120);
LAB_00029134:
    uVar5 = *(undefined4 *)(param_2 + 0x4c);
    __s[0x13] = *(undefined4 *)(param_2 + 0x48);
    __s[0x14] = uVar5;
    break;
  case 0x10003:
    puVar6 = (undefined4 *)(param_1 + 0x124);
    uVar5 = *(undefined4 *)(param_2 + 0x4c);
    uVar2 = *(undefined4 *)(param_2 + 0x50);
    __s[0x13] = *(undefined4 *)(param_2 + 0x48);
    __s[0x14] = uVar5;
    __s[0x15] = uVar2;
    break;
  case 0x10004:
    puVar6 = (undefined4 *)(param_1 + 0x128);
    __s[0x13] = *(undefined4 *)(param_2 + 0x48);
    break;
  default:
    puVar6 = (undefined4 *)0x0;
  }
  if (((*(uint *)(param_2 + 0x2c) & 1) != 0) && (__s[0xc] = 1, puVar6 != (undefined4 *)0x0)) {
    *puVar6 = __s;
  }
  return 0;
}



/* ===== media_parse_pad @ 000291ac size=592 ===== */

uint media_parse_pad(int param_1,byte *param_2,byte **param_3)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  int *piVar8;
  byte *local_24 [2];
  
  if (param_3 == (byte **)0x0) {
    param_3 = local_24;
  }
  piVar8 = *(int **)(DAT_000293fc + 0x291c4 + DAT_00029400);
  do {
    pbVar7 = param_2;
    param_2 = pbVar7 + 1;
    uVar6 = (uint)*pbVar7;
  } while ((*(ushort *)(*piVar8 + uVar6 * 2) & 0x20) != 0);
  pbVar3 = param_2;
  if (uVar6 == 0x27 || uVar6 == 0x22) {
    while( true ) {
      local_24[0] = pbVar3;
      bVar1 = *local_24[0];
      if (bVar1 == 0 || bVar1 == 0x22) break;
      if (bVar1 == 0x27) goto LAB_0002927c;
      pbVar3 = local_24[0] + 1;
    }
    if (bVar1 != 0x27 && bVar1 != 0x22) {
      (**(code **)(param_1 + 0x114))(*(undefined4 *)(param_1 + 0x118),DAT_0002940c + 0x292f0);
      *param_3 = local_24[0];
      return 0;
    }
LAB_0002927c:
    iVar5 = media_get_entity_by_name(param_1,param_2,local_24[0] + (-1 - (int)pbVar7));
    if (iVar5 == 0) {
      (**(code **)(param_1 + 0x114))
                (*(undefined4 *)(param_1 + 0x118),DAT_00029408 + 0x292c0,
                 local_24[0] + (-1 - (int)pbVar7),param_2);
      *param_3 = param_2;
      return 0;
    }
    local_24[0] = local_24[0] + 1;
  }
  else {
    uVar4 = strtoul((char *)pbVar7,(char **)local_24,10);
    iVar5 = media_get_entity_by_id(param_1,uVar4);
    if (iVar5 == 0) {
      (**(code **)(param_1 + 0x114))(*(undefined4 *)(param_1 + 0x118),DAT_00029404 + 0x2923c,uVar4);
      *param_3 = pbVar7;
      return 0;
    }
  }
  while( true ) {
    uVar2 = *(ushort *)(*piVar8 + (uint)*local_24[0] * 2);
    if ((uVar2 & 0x20) == 0) break;
    local_24[0] = local_24[0] + 1;
  }
  pbVar7 = local_24[0];
  if (*local_24[0] == 0x3a) {
    do {
      pbVar7 = pbVar7 + 1;
      uVar2 = *(ushort *)(*piVar8 + (uint)*pbVar7 * 2);
    } while ((uVar2 & 0x20) != 0);
    uVar4 = strtoul((char *)pbVar7,(char **)local_24,10);
    if (uVar4 < *(ushort *)(iVar5 + 0x38)) {
      do {
        pbVar7 = local_24[0];
        local_24[0] = pbVar7 + 1;
      } while ((*(ushort *)(*piVar8 + (uint)*pbVar7 * 2) & 0x20) != 0);
      iVar5 = *(int *)(iVar5 + 0x104);
      *param_3 = pbVar7;
      return uVar4 * 0x18 + iVar5;
    }
    (**(code **)(param_1 + 0x114))
              (*(undefined4 *)(param_1 + 0x118),DAT_00029414 + 0x293bc,uVar4,iVar5 + 8,
               *(ushort *)(iVar5 + 0x38) - 1);
    *param_3 = pbVar7;
  }
  else {
    (**(code **)(param_1 + 0x114))(*(undefined4 *)(param_1 + 0x118),DAT_00029410 + 0x29344);
    *param_3 = local_24[0];
  }
  return uVar2 & 0x20;
}



/* ===== media_parse_link @ 00029418 size=256 ===== */

int media_parse_link(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *local_1c [2];
  
  piVar1 = (int *)media_parse_pad(param_1,param_2,local_1c);
  if (piVar1 == (int *)0x0) {
    *param_3 = local_1c[0];
  }
  else if ((*local_1c[0] == '-') && (local_1c[0][1] == '>')) {
    piVar2 = (int *)media_parse_pad(param_1,local_1c[0] + 2,local_1c);
    *param_3 = local_1c[0];
    if (piVar2 != (int *)0x0) {
      iVar5 = *piVar1;
      for (iVar4 = 0; *(int *)(iVar5 + 0x110) != iVar4; iVar4 = iVar4 + 1) {
        iVar3 = *(int *)(iVar5 + 0x108) + iVar4 * 0x1c;
        if ((*(int **)(*(int *)(iVar5 + 0x108) + iVar4 * 0x1c) == piVar1) &&
           (*(int **)(iVar3 + 4) == piVar2)) {
          return iVar3;
        }
      }
      (**(code **)(param_1 + 0x114))
                (*(undefined4 *)(param_1 + 0x118),DAT_0002951c + 0x294dc,iVar5 + 8,piVar1[1],
                 *piVar2 + 8,piVar2[1]);
    }
  }
  else {
    *param_3 = local_1c[0];
    (**(code **)(param_1 + 0x114))(*(undefined4 *)(param_1 + 0x118),DAT_00029518 + 0x29470);
  }
  return 0;
}



/* ===== media_parse_setup_link @ 00029520 size=348 ===== */

undefined4 media_parse_setup_link(int param_1,undefined4 param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined4 *puVar2;
  ulong uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  code *pcVar8;
  byte *pbVar9;
  byte *local_24 [2];
  
  iVar4 = DAT_0002967c;
  puVar2 = (undefined4 *)media_parse_link(param_1,param_2,local_24);
  if (puVar2 == (undefined4 *)0x0) {
    (**(code **)(param_1 + 0x114))
              (*(undefined4 *)(param_1 + 0x118),DAT_00029684 + 0x29564,DAT_00029680 + 0x29560);
    *param_3 = local_24[0];
  }
  else {
    if (*local_24[0] == 0x5b) {
      uVar3 = strtoul((char *)(local_24[0] + 1),(char **)local_24,10);
      iVar4 = **(int **)(iVar4 + 0x29548 + DAT_0002968c);
      do {
        pbVar9 = local_24[0];
        local_24[0] = pbVar9 + 1;
      } while ((*(ushort *)(iVar4 + (uint)*pbVar9 * 2) & 0x20) != 0);
      pcVar8 = *(code **)(param_1 + 0x114);
      pbVar1 = pbVar9 + 1;
      if (*pbVar9 == 0x5d) {
        do {
          pbVar9 = pbVar1;
          pbVar1 = pbVar9 + 1;
        } while ((*(ushort *)(iVar4 + (uint)*pbVar9 * 2) & 0x20) != 0);
        piVar7 = (int *)*puVar2;
        piVar6 = (int *)puVar2[1];
        *param_3 = pbVar9;
        (*pcVar8)(*(undefined4 *)(param_1 + 0x118),DAT_00029694 + 0x29668,
                  *(undefined4 *)(*piVar7 + 4),piVar7[1],*(undefined4 *)(*piVar6 + 4),piVar6[1],
                  uVar3);
        uVar5 = media_setup_link(param_1,*puVar2,puVar2[1],uVar3);
        return uVar5;
      }
      (*pcVar8)(*(undefined4 *)(param_1 + 0x118),DAT_00029690 + 0x29600);
    }
    else {
      (**(code **)(param_1 + 0x114))(*(undefined4 *)(param_1 + 0x118),DAT_00029688 + 0x295a0);
      pbVar9 = local_24[0];
    }
    *param_3 = pbVar9;
  }
  return 0xffffffea;
}



/* ===== media_print_streampos @ 00029698 size=124 ===== */

void media_print_streampos(int param_1,char *param_2,int param_3)

{
  size_t sVar1;
  uint uVar2;
  
  uVar2 = (param_3 - (int)param_2) + 1;
  sVar1 = strlen(param_2);
  uVar2 = uVar2 & ~((int)uVar2 >> 0x1f);
  if (sVar1 < uVar2) {
    uVar2 = sVar1;
  }
  (**(code **)(param_1 + 0x114))(*(undefined4 *)(param_1 + 0x118),DAT_00029714 + 0x296c8);
  (**(code **)(param_1 + 0x114))(*(undefined4 *)(param_1 + 0x118),DAT_00029718 + 0x296ec,param_2);
                    /* WARNING: Could not recover jumptable at 0x00029710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x114))
            (*(undefined4 *)(param_1 + 0x118),DAT_00029720 + 0x29710,uVar2,DAT_0002971c + 0x2970c);
  return;
}



/* ===== media_parse_setup_links @ 00029724 size=100 ===== */

int media_parse_setup_links(undefined4 param_1,byte *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  byte *local_1c;
  undefined4 uStack_18;
  
  uVar2 = param_1;
  local_1c = param_2;
  uStack_18 = param_3;
  do {
    iVar1 = media_parse_setup_link(param_1,param_2,&local_1c,param_4,uVar2);
    if (iVar1 < 0) {
      media_print_streampos(param_1,param_2,local_1c);
      return iVar1;
    }
    param_2 = local_1c + 1;
    param_4 = (uint)*local_1c;
  } while (param_4 == 0x2c);
  if (param_4 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = -0x16;
  }
  return iVar1;
}



/* ===== xcam_malloc @ 00029788 size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * xcam_malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00044128)(__size);
  return pvVar1;
}



/* ===== xcam_malloc0 @ 0002978c size=28 ===== */

void xcam_malloc0(size_t param_1)

{
  void *__s;
  
  __s = malloc(param_1);
  memset(__s,0,param_1);
  return;
}



/* ===== xcam_free @ 000297a8 size=12 ===== */

void xcam_free(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  free(param_1);
  return;
}



/* ===== xcam_device_ioctl @ 000297b4 size=88 ===== */

int xcam_device_ioctl(int param_1,ulong param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 < 0) {
    iVar3 = -1;
  }
  else {
    iVar2 = 6;
    do {
      iVar3 = ioctl(param_1,param_2,param_3);
      if (-1 < iVar3) {
        return iVar3;
      }
      piVar1 = __errno_location();
      if (*piVar1 != 0xb && *piVar1 != 4) {
        return iVar3;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return iVar3;
}



/* ===== xcam_fourcc_to_string @ 0002980c size=28 ===== */

undefined4 * xcam_fourcc_to_string(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_00029828;
  puVar2 = (undefined4 *)(DAT_00029828 + 0x2981c);
  *puVar2 = param_1;
  *(undefined1 *)(iVar1 + 0x29820) = 0;
  return puVar2;
}



/* ===== xcam_get_enviroment_value @ 0002982c size=80 ===== */

undefined4 xcam_get_enviroment_value(char *param_1,ulonglong *param_2)

{
  char *__nptr;
  ulonglong uVar1;
  
  if ((param_1 != (char *)0x0 && param_2 != (ulonglong *)0x0) &&
     (__nptr = getenv(param_1), __nptr != (char *)0x0)) {
    uVar1 = strtoull(__nptr,(char **)0x0,0x10);
    *param_2 = uVar1;
    return 1;
  }
  return 0;
}



/* ===== xcam_get_runtime_log_level @ 0002987c size=312 ===== */

void xcam_get_runtime_log_level(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  FILE *__stream;
  size_t sVar4;
  uint uVar5;
  char *__name;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  char local_68 [4];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
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
  
  __name = (char *)(DAT_000299b4 + 0x29898);
  iVar7 = DAT_000299b8 + 0x2989c;
  iVar3 = access(__name,0);
  if (iVar3 == 0) {
    __stream = fopen64(__name,(char *)(DAT_000299bc + 0x298bc));
    uStack_64 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_60 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_68[0] = '\0';
    local_68[1] = '\0';
    local_68[2] = '\0';
    local_68[3] = '\0';
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    if (__stream != (FILE *)0x0) {
      uStack_54 = uStack_64;
      uStack_4c = uStack_64;
      uStack_44 = uStack_64;
      uStack_3c = uStack_64;
      uStack_34 = uStack_64;
      uStack_2c = uStack_64;
      fseek(__stream,0,0);
      sVar4 = fread(local_68,1,0x40,__stream);
      if (sVar4 != 0) {
        iVar8 = *(int *)(iVar7 + DAT_000299c0);
        iVar3 = 0;
        iVar7 = iVar8;
        do {
          iVar3 = iVar3 + 1;
          *(undefined4 *)(iVar7 + 4) = 0;
          *(undefined4 *)(iVar7 + 8) = 0;
          iVar7 = iVar7 + 0xc;
        } while (iVar3 != 0x23);
        uVar10 = strtoull(local_68,(char **)0x0,0x10);
        *(ulonglong *)(DAT_000299c4 + 0x29954) = uVar10;
        uVar1 = (uint)((uVar10 >> 0xc) >> 0x20);
        uVar6 = 0;
        do {
          uVar5 = 0x20 - uVar6;
          uVar2 = uVar6 & 0xff;
          uVar9 = uVar6 - 0x20;
          uVar6 = uVar6 + 1;
          if ((((uint)(uVar10 >> 0xc) >> uVar2 | uVar1 << (uVar5 & 0xff) | uVar1 >> (uVar9 & 0xff))
              & 1) != 0) {
            *(uint *)(iVar8 + 4) = (uint)uVar10 & 0xf;
            *(uint *)(iVar8 + 8) = (uint)uVar10 >> 4 & 0xff;
          }
          iVar8 = iVar8 + 0xc;
        } while (uVar6 != 0x23);
      }
      fclose(__stream);
    }
  }
  return;
}



/* ===== xcam_get_log_level @ 000299c8 size=180 ===== */

undefined4 xcam_get_log_level(void)

{
  uint uVar1;
  undefined4 extraout_r1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  
  iVar3 = DAT_00029a7c;
  puVar5 = (uint *)(DAT_00029a7c + 0x299dc);
  iVar6 = DAT_00029a84 + 0x299ec;
  xcam_get_enviroment_value(DAT_00029a80 + 0x299e4,puVar5);
  printf((char *)(DAT_00029a88 + 0x299fc),extraout_r1,*puVar5,*(undefined4 *)(iVar3 + 0x299e0));
  uVar1 = *puVar5;
  uVar2 = *(uint *)(iVar3 + 0x299e0);
  iVar3 = *(int *)(iVar6 + DAT_00029a8c);
  uVar4 = 0;
  do {
    if ((((uVar1 >> 0xc | uVar2 << 0x14) >> (uVar4 & 0xff) | (uVar2 >> 0xc) << (0x20 - uVar4 & 0xff)
         | (uVar2 >> 0xc) >> (uVar4 - 0x20 & 0xff)) & 1) == 0) {
      if (uVar1 == 0 && uVar2 == 0) {
        *(undefined4 *)(iVar3 + 4) = 0;
      }
    }
    else {
      *(uint *)(iVar3 + 4) = uVar1 & 0xf;
      *(uint *)(iVar3 + 8) = uVar1 >> 4 & 0xff;
    }
    uVar4 = uVar4 + 1;
    iVar3 = iVar3 + 0xc;
  } while (uVar4 != 0x23);
  return 0;
}



/* ===== timeString @ 00029a90 size=88 ===== */

char * timeString(undefined4 param_1,undefined4 param_2,__time_t param_3,__suseconds_t param_4)

{
  tm *ptVar1;
  char *__s;
  timeval tStack_10;
  
  tStack_10.tv_sec = param_3;
  tStack_10.tv_usec = param_4;
  gettimeofday(&tStack_10,(__timezone_ptr_t)0x0);
  ptVar1 = localtime(&tStack_10.tv_sec);
  __s = (char *)(DAT_00029ae8 + 0x29ac4);
  sprintf(__s,(char *)(DAT_00029aec + 0x29ac8),ptVar1->tm_hour,ptVar1->tm_min,ptVar1->tm_sec,
          tStack_10.tv_usec);
  return __s;
}



/* ===== xcam_print_log @ 00029af0 size=264 ===== */

void xcam_print_log(int param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  FILE *__s;
  size_t __n;
  char acStack_1018 [4100];
  
  iVar1 = DAT_00029bf8;
  memset(acStack_1018,0,0x1000);
  if ((*(uint *)(DAT_00029bfc + 0x29b30) & 0xf) != 0) {
    vsnprintf(acStack_1018,0x1000,param_4,&stack0x00000000);
    if (*(char *)(DAT_00029c00 + 0x29b6c) == '\0') {
      printf((char *)(DAT_00029c10 + 0x29bf4),
             *(undefined4 *)(*(int *)(iVar1 + 0x29b2c + DAT_00029c0c) + param_1 * 0xc),acStack_1018)
      ;
    }
    else {
      __s = fopen64((char *)(DAT_00029c00 + 0x29b6c),(char *)(DAT_00029c04 + 0x29b80));
      if (__s == (FILE *)0x0) {
        puts((char *)(DAT_00029c08 + 0x29bcc));
      }
      else {
        __n = strlen(acStack_1018);
        fwrite(acStack_1018,1,__n,__s);
        fclose(__s);
      }
    }
  }
  return;
}



/* ===== xcam_set_log @ 00029c14 size=52 ===== */

void xcam_set_log(char *param_1)

{
  char *__dest;
  
  if (param_1 == (char *)0x0) {
    return;
  }
  __dest = memset((void *)(DAT_00029c48 + 0x29c34),0,0x100);
  strncpy(__dest,param_1,0xff);
  return;
}



/* ===== xcam_get_awb_log_level @ 00029c4c size=36 ===== */

void xcam_get_awb_log_level(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00029c70 + 0x29c5c + DAT_00029c74);
  *param_1 = (char)*(undefined4 *)(iVar1 + 0x10);
  *param_2 = (char)*(undefined4 *)(iVar1 + 0x14);
  return;
}



/* ===== XCam::Thread::started @ 00029c78 size=8 ===== */

/* XCam::Thread::started() */

undefined4 XCam::Thread::started(void)

{
  return 1;
}



/* ===== XCam::Thread::stopped @ 00029c80 size=4 ===== */

/* XCam::Thread::stopped() */

void XCam::Thread::stopped(void)

{
  return;
}



/* ===== XCam::Thread::emit_stop @ 00029c84 size=76 ===== */

/* XCam::Thread::emit_stop() */

undefined4 __thiscall XCam::Thread::emit_stop(Thread *this)

{
  int local_10;
  Thread *local_c;
  
  local_10 = *(int *)(DAT_00029cd0 + 0x29c94 + DAT_00029cd4) + 8;
  local_c = this + 0xc;
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x10));
  this[0x68] = (Thread)0x0;
  SmartLock::~SmartLock((SmartLock *)&local_10);
  return 1;
}



/* ===== XCam::Thread::thread_func @ 00029cd8 size=300 ===== */

/* XCam::Thread::thread_func(void*) */

undefined4 __thiscall XCam::Thread::thread_func(Thread *this,void *param_1)

{
  byte bVar1;
  pthread_t __th;
  ulong uVar2;
  Thread *pTVar3;
  pthread_mutex_t *__mutex;
  Thread *pTStack_30;
  void *pvStack_2c;
  ulong local_28;
  Thread *local_24;
  
  __mutex = (pthread_mutex_t *)(this + 0x10);
  pTVar3 = this + 0xc;
  uVar2 = *(int *)(DAT_00029e04 + 0x29cf8 + DAT_00029e08) + 8;
  pTStack_30 = this;
  pvStack_2c = param_1;
  local_28 = uVar2;
  local_24 = pTVar3;
  pthread_mutex_lock(__mutex);
  __th = pthread_self();
  pthread_detach(__th);
  SmartLock::~SmartLock((SmartLock *)&local_28);
  bVar1 = (**(code **)(*(int *)this + 0xc))(this);
  sigemptyset((sigset_t *)&pTStack_30);
  sigaddset((sigset_t *)&pTStack_30,3);
  sigaddset((sigset_t *)&pTStack_30,2);
  sigaddset((sigset_t *)&pTStack_30,0xf);
  pthread_sigmask(0,(sigset_t *)&pTStack_30,(__sigset_t *)0x0);
  while( true ) {
    local_28 = uVar2;
    local_24 = pTVar3;
    pthread_mutex_lock(__mutex);
    if ((bVar1 & (byte)this[0x68]) == 0) break;
    SmartLock::~SmartLock((SmartLock *)&local_28);
    bVar1 = (**(code **)(*(int *)this + 0x14))(this);
  }
  this[0x68] = (Thread)0x0;
  *(undefined4 *)(this + 8) = 0;
  SmartLock::~SmartLock((SmartLock *)&local_28);
  (**(code **)(*(int *)this + 0x10))(this);
  local_28 = uVar2;
  local_24 = pTVar3;
  pthread_mutex_lock(__mutex);
  this[0x69] = (Thread)0x1;
  SmartLock::~SmartLock((SmartLock *)&local_28);
  pthread_cond_broadcast((pthread_cond_t *)(this + 0x30));
  return 0;
}



/* ===== XCam::Thread::Thread @ 00029e0c size=152 ===== */

/* XCam::Thread::Thread(char const*) */

Thread * __thiscall XCam::Thread::Thread(Thread *this,char *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_00029ea4 + 0x29e1c;
  iVar2 = *(int *)(iVar3 + DAT_00029ea8);
  *(undefined4 *)(this + 4) = 0;
  *(int *)this = iVar2 + 8;
  iVar2 = DAT_00029eac;
  *(undefined4 *)(this + 8) = 0;
  iVar2 = *(int *)(iVar3 + iVar2);
  this[0x28] = (Thread)0x1;
  *(int *)(this + 0xc) = iVar2 + 8;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x10),(pthread_mutexattr_t *)0x0);
  this[0x60] = (Thread)0x1;
  pthread_cond_init((pthread_cond_t *)(this + 0x30),(pthread_condattr_t *)0x0);
  *(undefined2 *)(this + 0x68) = 0x100;
  *(undefined4 *)(this + 0x6c) = 0xffffffff;
  *(undefined4 *)(this + 0x70) = 0xffffffff;
  if (param_1 != (char *)0x0) {
    pcVar1 = strndup(param_1,0x1000);
    *(char **)(this + 4) = pcVar1;
  }
  return this;
}



/* ===== XCam::Thread::~Thread @ 00029eb0 size=84 ===== */

/* XCam::Thread::~Thread() */

Thread * __thiscall XCam::Thread::~Thread(Thread *this)

{
  *(int *)this = *(int *)(DAT_00029f04 + 0x29ec0 + DAT_00029f08) + 8;
  if (*(int *)(this + 4) != 0) {
    xcam_free();
  }
  if (this[0x60] != (Thread)0x0) {
    pthread_cond_destroy((pthread_cond_t *)(this + 0x30));
  }
  Mutex::~Mutex((Mutex *)(this + 0xc));
  return this;
}



/* ===== XCam::Thread::~Thread @ 00029f0c size=32 ===== */

/* XCam::Thread::~Thread() */

Thread * __thiscall XCam::Thread::~Thread(Thread *this)

{
  ~Thread(this);
  operator_delete(this,0x78);
  return this;
}



/* ===== XCam::Thread::start @ 00029f2c size=356 ===== */

/* XCam::Thread::start() */

Thread __thiscall XCam::Thread::start(Thread *this)

{
  int iVar1;
  Thread TVar2;
  __start_routine *__start_routine;
  sched_param local_48;
  int local_44;
  Thread *local_40;
  pthread_attr_t local_3c;
  
  iVar1 = DAT_0002a090 + 0x29f48;
  local_44 = *(int *)(iVar1 + DAT_0002a094) + 8;
  local_40 = this + 0xc;
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x10));
  TVar2 = this[0x68];
  if (TVar2 == (Thread)0x0) {
    __start_routine = *(__start_routine **)(iVar1 + DAT_0002a098);
    if ((*(int *)(this + 0x6c) == -1) && (*(int *)(this + 0x70) == -1)) {
      iVar1 = pthread_create((pthread_t *)(this + 8),(pthread_attr_t *)0x0,__start_routine,this);
      if (iVar1 != 0) goto LAB_0002a00c;
    }
    else {
      pthread_attr_init(&local_3c);
      if ((*(int *)(this + 0x6c) != -1) &&
         ((pthread_attr_setschedpolicy(&local_3c,*(int *)(this + 0x6c)),
          1 < *(int *)(this + 0x6c) + 1U && (*(int *)(this + 0x70) != -1)))) {
        local_48.__sched_priority = *(int *)(this + 0x70);
        pthread_attr_setschedparam(&local_3c,&local_48);
      }
      pthread_attr_setinheritsched(&local_3c,1);
      iVar1 = pthread_create((pthread_t *)(this + 8),&local_3c,__start_routine,this);
      if (iVar1 != 0) {
        pthread_attr_destroy(&local_3c);
        goto LAB_0002a00c;
      }
      pthread_attr_destroy(&local_3c);
    }
    *(undefined2 *)(this + 0x68) = 1;
    iVar1 = *(int *)(this + 4);
    local_3c._4_4_ = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    local_3c._8_4_ = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    local_3c._12_4_ = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_3c.__align = 0;
    if (iVar1 == 0) {
      iVar1 = DAT_0002a09c + 0x2a04c;
    }
    TVar2 = (Thread)0x1;
    snprintf(local_3c.__size,0x10,(char *)(DAT_0002a0a0 + 0x2a060),iVar1);
    pthread_setname_np(*(pthread_t *)(this + 8),local_3c.__size);
  }
LAB_0002a00c:
  SmartLock::~SmartLock((SmartLock *)&local_44);
  return TVar2;
}



/* ===== XCam::Thread::stop @ 0002a0a4 size=124 ===== */

/* XCam::Thread::stop() */

undefined4 XCam::Thread::stop(void)

{
  int *in_r0;
  int iVar1;
  int iStack_18;
  int *piStack_14;
  
  iVar1 = DAT_0002a12c + 0x2a0c4;
  (**(code **)(*in_r0 + 8))();
  iStack_18 = *(int *)(iVar1 + DAT_0002a130) + 8;
  piStack_14 = in_r0 + 3;
  pthread_mutex_lock((pthread_mutex_t *)(in_r0 + 4));
  while (*(char *)((int)in_r0 + 0x69) == '\0') {
    pthread_cond_wait((pthread_cond_t *)(in_r0 + 0xc),(pthread_mutex_t *)(in_r0 + 4));
  }
  in_r0[0x1b] = -1;
  in_r0[0x1c] = -1;
  SmartLock::~SmartLock((SmartLock *)&iStack_18);
  return 1;
}



/* ===== XCam::Thread::is_running @ 0002a134 size=72 ===== */

/* XCam::Thread::is_running() */

Thread __thiscall XCam::Thread::is_running(Thread *this)

{
  Thread TVar1;
  int local_10;
  Thread *local_c;
  
  local_10 = *(int *)(DAT_0002a17c + 0x2a144 + DAT_0002a180) + 8;
  local_c = this + 0xc;
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x10));
  TVar1 = this[0x68];
  SmartLock::~SmartLock((SmartLock *)&local_10);
  return TVar1;
}



/* ===== xcam_video_buffer_info_reset @ 0002a184 size=1084 ===== */

undefined4
xcam_video_buffer_info_reset
          (uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
          uint param_7,char param_8)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  
  param_1[2] = param_3;
  param_1[3] = param_4;
  uVar1 = DAT_0002a5c0;
  if (param_5 == 0) {
    param_5 = param_3 + 3 & 0xfffffffc;
  }
  if (param_6 == 0) {
    param_6 = param_4 + 1 & 0xfffffffe;
  }
  bVar3 = param_2 < DAT_0002a5c0;
  bVar2 = param_2 == DAT_0002a5c0;
  *param_1 = param_2;
  param_1[4] = param_5;
  param_1[5] = param_6;
  if (bVar2) goto LAB_0002a354;
  if (bVar3) {
    if (param_2 == uVar1 + 0xfd00150c) {
LAB_0002a49c:
      param_1[8] = param_5;
      param_1[9] = param_5;
      param_5 = param_5 * param_6;
      param_1[1] = 8;
      param_1[7] = 2;
      param_1[0xc] = 0;
      param_1[0xd] = param_5;
      param_6 = param_5 + (param_5 >> 1);
      goto LAB_0002a4c8;
    }
    if (param_2 < uVar1 + 0xfd00150c) {
      if (param_2 != DAT_0002a5c4) {
        if (param_2 < DAT_0002a5c4) {
          if ((param_2 != DAT_0002a5c4 - 0x600) && (param_2 != DAT_0002a5c4 - 0x4fb)) {
            if (param_2 != DAT_0002a5c8) {
              return 0xfffffffe;
            }
LAB_0002a518:
            bVar2 = param_2 == DAT_0002a604;
            param_1[7] = 3;
            if (bVar2) {
              uVar1 = 0x10;
            }
            else {
              uVar1 = 8;
            }
            param_1[1] = uVar1;
            param_1[0xc] = 0;
            param_5 = param_5 * (uVar1 >> 3);
            param_6 = param_6 * param_5;
            param_1[10] = param_5;
            param_1[9] = param_5;
            param_1[8] = param_5;
            param_1[0xd] = param_6;
            uVar1 = param_6 * 2;
            param_1[0xe] = uVar1;
LAB_0002a560:
            param_6 = param_6 + uVar1;
            goto LAB_0002a4c8;
          }
        }
        else {
          if (param_2 == DAT_0002a5cc) {
LAB_0002a568:
            bVar2 = param_2 == DAT_0002a5cc;
            param_1[7] = 4;
            if (bVar2) {
              uVar1 = 0x10;
            }
            else {
              uVar1 = 8;
            }
            param_1[1] = uVar1;
            param_1[0xc] = 0;
            param_5 = param_5 * (uVar1 >> 3);
            param_1[8] = param_5;
            param_1[9] = param_5;
            param_1[10] = param_5;
            param_1[0xb] = param_5;
            param_6 = param_5 * param_6;
            param_1[0xd] = param_6;
            param_1[0xe] = param_6 * 2;
            uVar1 = param_6 * 3;
            param_1[0xf] = uVar1;
            goto LAB_0002a560;
          }
          if (param_2 == DAT_0002a5cc + 9) {
LAB_0002a2f8:
            param_1[1] = 0x10;
            param_1[7] = 1;
            param_5 = param_5 << 1;
            goto LAB_0002a3b8;
          }
          if (param_2 != DAT_0002a5d0) {
            return 0xfffffffe;
          }
        }
      }
      uVar1 = 10;
    }
    else {
      if (param_2 != DAT_0002a5d4) {
        if (param_2 < DAT_0002a5d4) {
          if ((param_2 != DAT_0002a5d4 - 0x600) && (param_2 != DAT_0002a5d4 - 0x4fb)) {
            uVar1 = DAT_0002a5d4 - 0xf90600;
            goto LAB_0002a3a0;
          }
        }
        else {
          if (param_2 == DAT_0002a5d8) goto LAB_0002a49c;
          if (DAT_0002a5d8 <= param_2) {
            if (param_2 == DAT_0002a5dc) goto LAB_0002a2f8;
            uVar1 = DAT_0002a5dc + 0xefee10;
LAB_0002a458:
            if (param_2 != uVar1) {
              return 0xfffffffe;
            }
            param_1[1] = 8;
            param_1[7] = 1;
            param_5 = param_5 * 3;
            goto LAB_0002a488;
          }
          if (param_2 != DAT_0002a5d8 - 0xefc) {
            return 0xfffffffe;
          }
        }
      }
      uVar1 = 0xc;
    }
    param_1[1] = uVar1;
    if (param_8 == '\0') {
      param_5 = param_5 << 1;
    }
    else {
      param_5 = uVar1 * param_5;
    }
    param_1[7] = 1;
    if (param_8 != '\0') {
      param_5 = param_5 >> 3;
LAB_0002a270:
      param_5 = param_5 + 0xff & 0xffffff00;
    }
  }
  else {
    if (param_2 == DAT_0002a5e0) {
      param_1[1] = 0x10;
      param_1[7] = 1;
      param_5 = param_5 * 6;
      goto LAB_0002a488;
    }
    if (param_2 < DAT_0002a5e0) {
      if (param_2 != DAT_0002a5e4) {
        if (param_2 < DAT_0002a5e4) {
          if ((param_2 != DAT_0002a5e4 - 0x601) && (param_2 != DAT_0002a5e4 - 0x5ea)) {
            uVar1 = DAT_0002a5e4 - 0x1601;
LAB_0002a384:
            if (param_2 != uVar1) {
              return 0xfffffffe;
            }
          }
        }
        else if (param_2 != DAT_0002a5e8) {
          if (DAT_0002a5e8 <= param_2) {
            uVar1 = DAT_0002a5f0;
            if (param_2 == DAT_0002a5ec) goto LAB_0002a568;
            goto LAB_0002a3a0;
          }
          uVar1 = DAT_0002a5e8 - 0xffff0;
          goto LAB_0002a384;
        }
      }
LAB_0002a354:
      param_5 = param_5 << 2;
      param_1[1] = 8;
      param_1[7] = 1;
    }
    else if (param_2 == DAT_0002a5f4) {
      uVar1 = 0x10;
LAB_0002a434:
      param_1[1] = uVar1;
      param_1[7] = 1;
      param_5 = param_5 << 1;
    }
    else if (param_2 < DAT_0002a5f4) {
      if (param_2 != DAT_0002a5f4 + 0xf70ffaf5) {
        if (param_2 == DAT_0002a5f4 + 0xf8050b1c) goto LAB_0002a518;
        uVar1 = DAT_0002a5f4 + 0xf7000af5;
LAB_0002a3a0:
        if (param_2 != uVar1) {
          return 0xfffffffe;
        }
      }
      param_1[1] = 8;
      param_1[7] = 1;
LAB_0002a3b8:
      if (param_8 != '\0') goto LAB_0002a270;
    }
    else if (param_2 == DAT_0002a5f8) {
      param_1[1] = 8;
      param_1[7] = 1;
    }
    else {
      if (param_2 < DAT_0002a5f8) {
        if (param_2 != DAT_0002a5f8 + 0xfd140312) {
          return 0xfffffffe;
        }
        uVar1 = 8;
        goto LAB_0002a434;
      }
      uVar1 = DAT_0002a600;
      if (param_2 != DAT_0002a5fc) goto LAB_0002a458;
      param_5 = param_5 << 3;
      param_1[1] = 0x10;
      param_1[7] = 1;
    }
  }
LAB_0002a488:
  param_1[8] = param_5;
  param_6 = param_6 * param_5;
  param_1[0xc] = 0;
LAB_0002a4c8:
  if (param_7 == 0) {
    param_1[6] = param_6;
  }
  else {
    param_1[6] = param_7;
  }
  return 0;
}



/* ===== xcam_video_buffer_get_planar_info @ 0002a608 size=588 ===== */

undefined4 xcam_video_buffer_get_planar_info(uint *param_1,uint *param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1[3];
  *param_2 = param_1[2];
  uVar3 = param_1[1];
  param_2[1] = uVar4;
  param_2[2] = uVar3 + 7 >> 3;
  uVar3 = *param_1;
  if (uVar3 == DAT_0002a854) goto LAB_0002a77c;
  if (uVar3 < DAT_0002a854) {
    if (uVar3 == DAT_0002a854 + 0xfd05ff01) {
      return 0;
    }
    if (uVar3 < DAT_0002a854 + 0xfd05ff01) {
      if (uVar3 == DAT_0002a858) {
        return 0;
      }
      if (uVar3 < DAT_0002a858) {
        if (uVar3 == DAT_0002a858 - 0x600) {
          return 0;
        }
        uVar2 = DAT_0002a858 - 0x4fb;
        uVar4 = DAT_0002a85c;
      }
      else {
        if (uVar3 == DAT_0002a860) {
          return 0;
        }
        uVar2 = DAT_0002a860 + 9;
        uVar4 = DAT_0002a864;
      }
      if (uVar3 == uVar2) {
        return 0;
      }
LAB_0002a684:
      if (uVar3 == uVar4) {
        uVar1 = 0;
      }
      else {
        uVar1 = 0xfffffffe;
      }
      return uVar1;
    }
    if (uVar3 == DAT_0002a868) {
      return 0;
    }
    if (uVar3 < DAT_0002a868) {
      if (uVar3 == DAT_0002a86c) {
        return 0;
      }
      if (uVar3 == DAT_0002a86c + 0x4fb) {
        return 0;
      }
      uVar4 = DAT_0002a86c - 0x105;
      goto LAB_0002a684;
    }
    if (uVar3 == DAT_0002a870) {
      return 0;
    }
    if (uVar3 < DAT_0002a870) {
      if (uVar3 != DAT_0002a870 - 0x2102f4) {
        return 0xfffffffe;
      }
      if (param_3 != 1) {
        return 0;
      }
      param_2[1] = uVar4 >> 1;
      return 0;
    }
    uVar4 = DAT_0002a878;
    if (uVar3 != DAT_0002a874) goto LAB_0002a7a8;
  }
  else {
    if (uVar3 == DAT_0002a87c) {
      uVar3 = 6;
      goto LAB_0002a728;
    }
    if (uVar3 < DAT_0002a87c) {
      if (uVar3 != DAT_0002a880) {
        if (uVar3 < DAT_0002a880) {
          if ((uVar3 == DAT_0002a880 - 0xff4fa) || (uVar3 == DAT_0002a880 - 0xfef10))
          goto LAB_0002a77c;
          uVar4 = DAT_0002a880 - 0xff511;
        }
        else {
          if (uVar3 == DAT_0002a884) {
            return 0;
          }
          if (uVar3 == DAT_0002a888) {
            return 0;
          }
          uVar4 = DAT_0002a888 + 0xf20afff0;
        }
LAB_0002a7a8:
        if (uVar3 != uVar4) {
          return 0xfffffffe;
        }
      }
LAB_0002a77c:
      uVar3 = 4;
      goto LAB_0002a728;
    }
    if (uVar3 == DAT_0002a88c) {
      return 0;
    }
    if (uVar3 < DAT_0002a88c) {
      if (uVar3 == DAT_0002a88c + 0xf70ffaf5) {
        return 0;
      }
      if (uVar3 == DAT_0002a88c + 0xf8050b1c) {
        return 0;
      }
      uVar4 = DAT_0002a88c + 0xf7000af5;
      goto LAB_0002a684;
    }
    if (uVar3 == DAT_0002a890) {
      return 0;
    }
    uVar4 = DAT_0002a890;
    if (uVar3 < DAT_0002a890) {
      uVar4 = DAT_0002a890 + 0xfd140312;
    }
    if (uVar3 <= DAT_0002a890) goto LAB_0002a684;
    if (uVar3 == DAT_0002a894) {
      uVar3 = 8;
      goto LAB_0002a728;
    }
    if (uVar3 != DAT_0002a898) {
      return 0xfffffffe;
    }
  }
  uVar3 = 3;
LAB_0002a728:
  param_2[2] = uVar3;
  return 0;
}



/* ===== FUN_0002a89c @ 0002a89c size=140 ===== */

void FUN_0002a89c(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  DataMemoryBarrier(0xb);
  piVar3 = (int *)(param_1[1] + 4);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  DataMemoryBarrier(0xb);
  if (iVar2 + -1 == 0) {
    iVar2 = (**(code **)(*(int *)param_1[1] + 8))();
    if ((iVar2 == 0) && ((int *)param_1[1] != (int *)0x0)) {
      (**(code **)(*(int *)param_1[1] + 4))();
    }
    if ((int *)*param_1 != (int *)0x0) {
      (**(code **)(*(int *)*param_1 + 4))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* ===== XCam::VideoBufferPlanarInfo::VideoBufferPlanarInfo @ 0002a928 size=20 ===== */

/* XCam::VideoBufferPlanarInfo::VideoBufferPlanarInfo() */

void __thiscall XCam::VideoBufferPlanarInfo::VideoBufferPlanarInfo(VideoBufferPlanarInfo *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}



/* ===== XCam::VideoBufferInfo::VideoBufferInfo @ 0002a93c size=60 ===== */

/* XCam::VideoBufferInfo::VideoBufferInfo() */

void __thiscall XCam::VideoBufferInfo::VideoBufferInfo(VideoBufferInfo *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 8;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  return;
}



/* ===== XCam::VideoBufferInfo::init @ 0002a978 size=56 ===== */

/* XCam::VideoBufferInfo::init(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned int, bool) */

bool XCam::VideoBufferInfo::init
               (uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
               bool param_7)

{
  int iVar1;
  
  iVar1 = xcam_video_buffer_info_reset();
  return iVar1 == 0;
}



/* ===== XCam::VideoBufferInfo::fill @ 0002a9b0 size=108 ===== */

/* XCam::VideoBufferInfo::fill(_XCamVideoBufferInfo const&) */

undefined4 __thiscall
XCam::VideoBufferInfo::fill(VideoBufferInfo *this,_XCamVideoBufferInfo *param_1)

{
  VideoBufferInfo *pVVar1;
  _XCamVideoBufferInfo *p_Var2;
  _XCamVideoBufferInfo *p_Var3;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  pVVar1 = this + 0x20;
  p_Var3 = param_1 + 0x20;
  do {
    p_Var2 = p_Var3 + 4;
    *(undefined4 *)pVVar1 = *(undefined4 *)p_Var3;
    *(undefined4 *)(pVVar1 + 0x10) = *(undefined4 *)(p_Var3 + 0x10);
    pVVar1 = pVVar1 + 4;
    p_Var3 = p_Var2;
  } while (p_Var2 != param_1 + 0x30);
  return 1;
}



/* ===== XCam::VideoBufferInfo::is_valid @ 0002aa1c size=56 ===== */

/* XCam::VideoBufferInfo::is_valid() const */

undefined4 __thiscall XCam::VideoBufferInfo::is_valid(VideoBufferInfo *this)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((((*(int *)this != 0) && (uVar1 = 0, *(int *)(this + 0x10) != 0)) &&
      (uVar1 = 0, *(int *)(this + 0x14) != 0)) && (uVar1 = 0, *(int *)(this + 0x18) != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}



/* ===== XCam::VideoBufferInfo::get_planar_info @ 0002aa54 size=20 ===== */

/* XCam::VideoBufferInfo::get_planar_info(XCam::VideoBufferPlanarInfo&, unsigned int) const */

bool XCam::VideoBufferInfo::get_planar_info(VideoBufferPlanarInfo *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = xcam_video_buffer_get_planar_info();
  return iVar1 == 0;
}



/* ===== XCam::VideoBuffer::remove_metadata @ 0002aa68 size=108 ===== */

/* XCam::VideoBuffer::remove_metadata(XCam::SmartPtr<XCam::MetaData> const&) */

undefined4 __thiscall XCam::VideoBuffer::remove_metadata(VideoBuffer *this,SmartPtr *param_1)

{
  VideoBuffer *pVVar1;
  
  pVVar1 = *(VideoBuffer **)(this + 0x14);
  while( true ) {
    if (pVVar1 == this + 0x14) {
      return 0;
    }
    if (*(int *)(pVVar1 + 8) == *(int *)param_1) break;
    pVVar1 = *(VideoBuffer **)pVVar1;
  }
  *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + -1;
  std::__detail::_List_node_base::_M_unhook();
  if (*(int *)(pVVar1 + 8) != 0) {
    FUN_0002a89c(pVVar1 + 8);
  }
  operator_delete(pVVar1);
  return 1;
}



/* ===== XCam::VideoBuffer::attach_buffer @ 0002aad4 size=92 ===== */

/* XCam::VideoBuffer::attach_buffer(XCam::SmartPtr<XCam::VideoBuffer> const&) */

undefined4 __thiscall XCam::VideoBuffer::attach_buffer(VideoBuffer *this,SmartPtr *param_1)

{
  _List_node_base *p_Var1;
  int iVar2;
  
  p_Var1 = operator_new(0x10);
  *(undefined4 *)(p_Var1 + 8) = *(undefined4 *)param_1;
  iVar2 = *(int *)(param_1 + 4);
  *(int *)(p_Var1 + 0xc) = iVar2;
  if (iVar2 != 0) {
    std::__atomic_base<unsigned_int>::operator++((__atomic_base<unsigned_int> *)(iVar2 + 4));
  }
  std::__detail::_List_node_base::_M_hook(p_Var1);
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  return 1;
}



/* ===== XCam::VideoBuffer::add_metadata @ 0002ab30 size=92 ===== */

/* XCam::VideoBuffer::add_metadata(XCam::SmartPtr<XCam::MetaData> const&) */

undefined4 __thiscall XCam::VideoBuffer::add_metadata(VideoBuffer *this,SmartPtr *param_1)

{
  _List_node_base *p_Var1;
  int iVar2;
  
  p_Var1 = operator_new(0x10);
  *(undefined4 *)(p_Var1 + 8) = *(undefined4 *)param_1;
  iVar2 = *(int *)(param_1 + 4);
  *(int *)(p_Var1 + 0xc) = iVar2;
  if (iVar2 != 0) {
    std::__atomic_base<unsigned_int>::operator++((__atomic_base<unsigned_int> *)(iVar2 + 4));
  }
  std::__detail::_List_node_base::_M_hook(p_Var1);
  *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 1;
  return 1;
}



/* ===== XCam::SmartPtr<XCam::VideoBuffer>::release @ 0002ab8c size=152 ===== */

/* XCam::SmartPtr<XCam::VideoBuffer>::release() */

void __thiscall XCam::SmartPtr<XCam::VideoBuffer>::release(SmartPtr<XCam::VideoBuffer> *this)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)this != 0) {
    DataMemoryBarrier(0xb);
    piVar3 = (int *)(*(int *)(this + 4) + 4);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    DataMemoryBarrier(0xb);
    if (iVar2 + -1 == 0) {
      iVar2 = (**(code **)(**(int **)(this + 4) + 8))();
      if ((iVar2 == 0) && (*(int **)(this + 4) != (int *)0x0)) {
        (**(code **)(**(int **)(this + 4) + 4))();
      }
      if (*(int **)this != (int *)0x0) {
        (**(code **)(**(int **)this + 4))();
      }
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    return;
  }
  return;
}



/* ===== XCam::VideoBuffer::detach_buffer @ 0002ac24 size=96 ===== */

/* XCam::VideoBuffer::detach_buffer(XCam::SmartPtr<XCam::VideoBuffer> const&) */

undefined4 __thiscall XCam::VideoBuffer::detach_buffer(VideoBuffer *this,SmartPtr *param_1)

{
  VideoBuffer *pVVar1;
  
  pVVar1 = *(VideoBuffer **)(this + 8);
  while( true ) {
    if (pVVar1 == this + 8) {
      return 0;
    }
    if (*(int *)(pVVar1 + 8) == *(int *)param_1) break;
    pVVar1 = *(VideoBuffer **)pVVar1;
  }
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + -1;
  std::__detail::_List_node_base::_M_unhook();
  SmartPtr<XCam::VideoBuffer>::release((SmartPtr<XCam::VideoBuffer> *)(pVVar1 + 8));
  operator_delete(pVVar1);
  return 1;
}



/* ===== std::__cxx11::_List_base<XCam::SmartPtr<XCam::VideoBuffer>,std::allocator<XCam::SmartPtr<XCam::VideoBuffer>>>::_M_clear @ 0002ac84 size=48 ===== */

/* std::__cxx11::_List_base<XCam::SmartPtr<XCam::VideoBuffer>,
   std::allocator<XCam::SmartPtr<XCam::VideoBuffer> > >::_M_clear() */

void __thiscall
std::__cxx11::
_List_base<XCam::SmartPtr<XCam::VideoBuffer>,std::allocator<XCam::SmartPtr<XCam::VideoBuffer>>>::
_M_clear(_List_base<XCam::SmartPtr<XCam::VideoBuffer>,std::allocator<XCam::SmartPtr<XCam::VideoBuffer>>>
         *this)

{
  _List_base<XCam::SmartPtr<XCam::VideoBuffer>,std::allocator<XCam::SmartPtr<XCam::VideoBuffer>>>
  *p_Var1;
  _List_base<XCam::SmartPtr<XCam::VideoBuffer>,std::allocator<XCam::SmartPtr<XCam::VideoBuffer>>>
  *p_Var2;
  
  p_Var1 = *(_List_base<XCam::SmartPtr<XCam::VideoBuffer>,std::allocator<XCam::SmartPtr<XCam::VideoBuffer>>>
             **)this;
  while (this != p_Var1) {
    p_Var2 = *(_List_base<XCam::SmartPtr<XCam::VideoBuffer>,std::allocator<XCam::SmartPtr<XCam::VideoBuffer>>>
               **)p_Var1;
    XCam::SmartPtr<XCam::VideoBuffer>::release((SmartPtr<XCam::VideoBuffer> *)(p_Var1 + 8));
    operator_delete(p_Var1);
    p_Var1 = p_Var2;
  }
  return;
}



/* ===== XCam::VideoBuffer::clear_attached_buffers @ 0002acb4 size=40 ===== */

/* XCam::VideoBuffer::clear_attached_buffers() */

void __thiscall XCam::VideoBuffer::clear_attached_buffers(VideoBuffer *this)

{
  _List_base<XCam::SmartPtr<XCam::VideoBuffer>,std::allocator<XCam::SmartPtr<XCam::VideoBuffer>>>
  *this_00;
  
  this_00 = (_List_base<XCam::SmartPtr<XCam::VideoBuffer>,std::allocator<XCam::SmartPtr<XCam::VideoBuffer>>>
             *)(this + 8);
  std::__cxx11::
  _List_base<XCam::SmartPtr<XCam::VideoBuffer>,std::allocator<XCam::SmartPtr<XCam::VideoBuffer>>>::
  _M_clear(this_00);
  *(_List_base<XCam::SmartPtr<XCam::VideoBuffer>,std::allocator<XCam::SmartPtr<XCam::VideoBuffer>>>
    **)(this + 0xc) = this_00;
  *(_List_base<XCam::SmartPtr<XCam::VideoBuffer>,std::allocator<XCam::SmartPtr<XCam::VideoBuffer>>>
    **)(this + 8) = this_00;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}



/* ===== XCam::VideoBuffer::copy_attaches @ 0002acdc size=192 ===== */

/* XCam::VideoBuffer::copy_attaches(XCam::SmartPtr<XCam::VideoBuffer> const&) */

undefined4 __thiscall XCam::VideoBuffer::copy_attaches(VideoBuffer *this,SmartPtr *param_1)

{
  _List_node_base *p_Var1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  _List_node_base *local_24;
  _List_base<XCam::SmartPtr<XCam::VideoBuffer>,std::allocator<XCam::SmartPtr<XCam::VideoBuffer>>>
  *local_20;
  int local_1c;
  
  iVar4 = *(int *)param_1;
  puVar3 = *(undefined4 **)(iVar4 + 8);
  local_1c = 0;
  local_24 = (_List_node_base *)&local_24;
  local_20 = (_List_base<XCam::SmartPtr<XCam::VideoBuffer>,std::allocator<XCam::SmartPtr<XCam::VideoBuffer>>>
              *)&local_24;
  for (; (undefined4 *)(iVar4 + 8) != puVar3; puVar3 = (undefined4 *)*puVar3) {
    p_Var1 = operator_new(0x10);
    *(undefined4 *)(p_Var1 + 8) = puVar3[2];
    iVar2 = puVar3[3];
    *(int *)(p_Var1 + 0xc) = iVar2;
    if (iVar2 != 0) {
      std::__atomic_base<unsigned_int>::operator++((__atomic_base<unsigned_int> *)(iVar2 + 4));
    }
    std::__detail::_List_node_base::_M_hook(p_Var1);
    local_1c = local_1c + 1;
  }
  if (local_24 != (_List_node_base *)&local_24) {
    std::__detail::_List_node_base::_M_transfer((_List_node_base *)(this + 8),local_24);
    *(int *)(this + 0x10) = *(int *)(this + 0x10) + local_1c;
    local_1c = 0;
  }
  std::__cxx11::
  _List_base<XCam::SmartPtr<XCam::VideoBuffer>,std::allocator<XCam::SmartPtr<XCam::VideoBuffer>>>::
  _M_clear((_List_base<XCam::SmartPtr<XCam::VideoBuffer>,std::allocator<XCam::SmartPtr<XCam::VideoBuffer>>>
            *)&local_24);
  return 1;
}



/* ===== std::__cxx11::_List_base<XCam::SmartPtr<XCam::MetaData>,std::allocator<XCam::SmartPtr<XCam::MetaData>>>::_M_clear @ 0002ada8 size=60 ===== */

/* std::__cxx11::_List_base<XCam::SmartPtr<XCam::MetaData>,
   std::allocator<XCam::SmartPtr<XCam::MetaData> > >::_M_clear() */

void __thiscall
std::__cxx11::
_List_base<XCam::SmartPtr<XCam::MetaData>,std::allocator<XCam::SmartPtr<XCam::MetaData>>>::_M_clear
          (_List_base<XCam::SmartPtr<XCam::MetaData>,std::allocator<XCam::SmartPtr<XCam::MetaData>>>
           *this)

{
  _List_base<XCam::SmartPtr<XCam::MetaData>,std::allocator<XCam::SmartPtr<XCam::MetaData>>> *p_Var1;
  _List_base<XCam::SmartPtr<XCam::MetaData>,std::allocator<XCam::SmartPtr<XCam::MetaData>>> *p_Var2;
  
  p_Var1 = *(_List_base<XCam::SmartPtr<XCam::MetaData>,std::allocator<XCam::SmartPtr<XCam::MetaData>>>
             **)this;
  while (this != p_Var1) {
    p_Var2 = *(_List_base<XCam::SmartPtr<XCam::MetaData>,std::allocator<XCam::SmartPtr<XCam::MetaData>>>
               **)p_Var1;
    if (*(int *)(p_Var1 + 8) != 0) {
      FUN_0002a89c(p_Var1 + 8);
    }
    operator_delete(p_Var1);
    p_Var1 = p_Var2;
  }
  return;
}



/* ===== XCam::VideoBuffer::clear_all_metadata @ 0002ade4 size=40 ===== */

/* XCam::VideoBuffer::clear_all_metadata() */

void __thiscall XCam::VideoBuffer::clear_all_metadata(VideoBuffer *this)

{
  _List_base<XCam::SmartPtr<XCam::MetaData>,std::allocator<XCam::SmartPtr<XCam::MetaData>>> *this_00
  ;
  
  this_00 = (_List_base<XCam::SmartPtr<XCam::MetaData>,std::allocator<XCam::SmartPtr<XCam::MetaData>>>
             *)(this + 0x14);
  std::__cxx11::
  _List_base<XCam::SmartPtr<XCam::MetaData>,std::allocator<XCam::SmartPtr<XCam::MetaData>>>::
  _M_clear(this_00);
  *(_List_base<XCam::SmartPtr<XCam::MetaData>,std::allocator<XCam::SmartPtr<XCam::MetaData>>> **)
   (this + 0x18) = this_00;
  *(_List_base<XCam::SmartPtr<XCam::MetaData>,std::allocator<XCam::SmartPtr<XCam::MetaData>>> **)
   (this + 0x14) = this_00;
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}



/* ===== XCam::VideoBuffer::~VideoBuffer @ 0002ae0c size=88 ===== */

/* XCam::VideoBuffer::~VideoBuffer() */

VideoBuffer * __thiscall XCam::VideoBuffer::~VideoBuffer(VideoBuffer *this)

{
  *(int *)this = *(int *)(DAT_0002ae64 + 0x2ae1c + DAT_0002ae68) + 8;
  clear_attached_buffers(this);
  clear_all_metadata(this);
  SmartPtr<XCam::VideoBuffer>::release((SmartPtr<XCam::VideoBuffer> *)(this + 0x6c));
  SmartPtr<XCam::VideoBuffer>::release((SmartPtr<XCam::VideoBuffer> *)(this + 0x6c));
  std::__cxx11::
  _List_base<XCam::SmartPtr<XCam::MetaData>,std::allocator<XCam::SmartPtr<XCam::MetaData>>>::
  _M_clear((_List_base<XCam::SmartPtr<XCam::MetaData>,std::allocator<XCam::SmartPtr<XCam::MetaData>>>
            *)(this + 0x14));
  std::__cxx11::
  _List_base<XCam::SmartPtr<XCam::VideoBuffer>,std::allocator<XCam::SmartPtr<XCam::VideoBuffer>>>::
  _M_clear((_List_base<XCam::SmartPtr<XCam::VideoBuffer>,std::allocator<XCam::SmartPtr<XCam::VideoBuffer>>>
            *)(this + 8));
  return this;
}



/* ===== XCam::VideoBuffer::~VideoBuffer @ 0002ae6c size=32 ===== */

/* XCam::VideoBuffer::~VideoBuffer() */

VideoBuffer * __thiscall XCam::VideoBuffer::~VideoBuffer(VideoBuffer *this)

{
  ~VideoBuffer(this);
  operator_delete(this,0x78);
  return this;
}



/* ===== XCam::V4l2Buffer::~V4l2Buffer @ 0002ae8c size=4 ===== */

/* XCam::V4l2Buffer::~V4l2Buffer() */

V4l2Buffer * __thiscall XCam::V4l2Buffer::~V4l2Buffer(V4l2Buffer *this)

{
  return this;
}



/* ===== XCam::V4l2Buffer::map @ 0002ae90 size=20 ===== */

/* XCam::V4l2Buffer::map() */

undefined4 __thiscall XCam::V4l2Buffer::map(V4l2Buffer *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x34) == 4) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(this + 0x38);
  }
  return uVar1;
}



/* ===== XCam::V4l2Buffer::unmap @ 0002aea4 size=8 ===== */

/* XCam::V4l2Buffer::unmap() */

undefined4 XCam::V4l2Buffer::unmap(void)

{
  return 1;
}



/* ===== XCam::V4l2Buffer::get_fd @ 0002aeac size=8 ===== */

/* XCam::V4l2Buffer::get_fd() */

undefined4 __thiscall XCam::V4l2Buffer::get_fd(V4l2Buffer *this)

{
  return *(undefined4 *)(this + 0x118);
}



/* ===== XCam::V4l2Buffer::~V4l2Buffer @ 0002aeb4 size=32 ===== */

/* XCam::V4l2Buffer::~V4l2Buffer() */

V4l2Buffer * __thiscall XCam::V4l2Buffer::~V4l2Buffer(V4l2Buffer *this)

{
  ~V4l2Buffer(this);
  operator_delete(this,0x128);
  return this;
}



/* ===== FUN_0002aed4 @ 0002aed4 size=140 ===== */

void FUN_0002aed4(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  DataMemoryBarrier(0xb);
  piVar3 = (int *)(param_1[1] + 4);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  DataMemoryBarrier(0xb);
  if (iVar2 + -1 == 0) {
    iVar2 = (**(code **)(*(int *)param_1[1] + 8))();
    if ((iVar2 == 0) && ((int *)param_1[1] != (int *)0x0)) {
      (**(code **)(*(int *)param_1[1] + 4))();
    }
    if ((int *)*param_1 != (int *)0x0) {
      (**(code **)(*(int *)*param_1 + 4))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* ===== XCam::V4l2Buffer::V4l2Buffer @ 0002af60 size=84 ===== */

/* XCam::V4l2Buffer::V4l2Buffer(v4l2_buffer const&, v4l2_format const&) */

V4l2Buffer * __thiscall
XCam::V4l2Buffer::V4l2Buffer(V4l2Buffer *this,v4l2_buffer *param_1,v4l2_format *param_2)

{
  *(int *)this = *(int *)(DAT_0002afb4 + 0x2af78 + DAT_0002afb8) + 8;
  memcpy(this + 4,param_1,0x44);
  memcpy(this + 0x48,param_2,0xcc);
  DataMemoryBarrier(0xb);
  this[0x120] = (V4l2Buffer)0x0;
  DataMemoryBarrier(0xb);
  return this;
}



/* ===== XCam::V4l2BufferProxy::v4l2_format_to_video_info @ 0002afbc size=460 ===== */

/* XCam::V4l2BufferProxy::v4l2_format_to_video_info(v4l2_format const&, XCam::VideoBufferInfo&) */

void __thiscall
XCam::V4l2BufferProxy::v4l2_format_to_video_info
          (V4l2BufferProxy *this,v4l2_format *param_1,VideoBufferInfo *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)param_1 - 0xdU < 2) {
    uVar2 = *(uint *)(param_1 + 4);
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xc);
  }
  *(undefined4 *)(param_2 + 4) = 8;
  *(uint *)param_2 = uVar2;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 4);
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0xc) = uVar1;
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x18);
  if (uVar2 == DAT_0002b188) {
LAB_0002b100:
    uVar3 = 0xc;
  }
  else {
    if (DAT_0002b188 <= uVar2) {
      if (uVar2 != DAT_0002b198) {
        if (DAT_0002b198 <= uVar2) {
          if (uVar2 == DAT_0002b1a0) {
            *(undefined4 *)(param_2 + 0x1c) = 3;
            uVar4 = *(uint *)(param_1 + 0x14);
            *(undefined4 *)(param_2 + 0x30) = 0;
            uVar2 = uVar4 >> 1;
            uVar4 = uVar4 >> 2;
            *(uint *)(param_2 + 0x20) = uVar2;
            *(uint *)(param_2 + 0x24) = uVar4;
            *(uint *)(param_2 + 0x28) = uVar4;
            iVar5 = *(int *)(param_1 + 8) * uVar2;
            *(int *)(param_2 + 0x34) = iVar5;
            *(uint *)(param_2 + 0x38) = *(int *)(param_1 + 8) * uVar4 + iVar5;
            goto LAB_0002b0bc;
          }
          uVar4 = DAT_0002b1a8;
          if (uVar2 == DAT_0002b1a4) {
            *(undefined4 *)(param_2 + 0x1c) = 1;
            uVar2 = *(uint *)(param_1 + 0x14);
            *(undefined4 *)(param_2 + 0x30) = 0;
            *(uint *)(param_2 + 0x20) = uVar2;
            *(uint *)(param_2 + 0x10) = uVar2 >> 1;
            goto LAB_0002b0bc;
          }
LAB_0002b07c:
          if (uVar2 == uVar4) {
            *(undefined4 *)(param_2 + 0x1c) = 2;
            uVar2 = DAT_0002b194;
            iVar5 = *(int *)(param_1 + 0x14);
            *(undefined4 *)(param_2 + 0x30) = 0;
            uVar2 = (uint)((ulonglong)uVar2 * (ulonglong)(uint)(iVar5 << 1) >> 0x21);
            *(uint *)(param_2 + 0x20) = uVar2;
            *(uint *)(param_2 + 0x24) = uVar2;
            *(uint *)(param_2 + 0x34) = uVar2 * *(int *)(param_1 + 8);
          }
          goto LAB_0002b0bc;
        }
        if ((uVar2 != DAT_0002b19c) && (uVar2 != DAT_0002b19c + 0x4fb)) goto LAB_0002b0bc;
      }
      goto LAB_0002b100;
    }
    if (uVar2 != DAT_0002b18c) {
      if (uVar2 < DAT_0002b18c) {
        if ((uVar2 != DAT_0002b18c - 0x600) && (uVar2 != DAT_0002b18c - 0x4fb)) goto LAB_0002b0bc;
      }
      else if (uVar2 != DAT_0002b190) {
        uVar4 = DAT_0002b190 + 0x1010efc;
        goto LAB_0002b07c;
      }
    }
    uVar3 = 10;
  }
  *(undefined4 *)(param_2 + 4) = uVar3;
  *(undefined4 *)(param_2 + 0x1c) = 1;
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_2 + 0x30) = 0;
LAB_0002b0bc:
  *(undefined4 *)(param_2 + 0x14) = uVar1;
  if (*(int *)(param_2 + 0x10) == 0) {
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_2 + 0x20);
  }
  return;
}



/* ===== XCam::V4l2BufferProxy::get_v4l2_buf @ 0002b1ac size=48 ===== */

/* XCam::V4l2BufferProxy::get_v4l2_buf() */

int XCam::V4l2BufferProxy::get_v4l2_buf(void)

{
  int in_r0;
  int local_18 [3];
  
  local_18[0] = in_r0;
  SmartPtr<XCam::BufferData>::dynamic_cast_ptr<XCam::V4l2Buffer>();
  SmartPtr<XCam::V4l2Buffer>::release((SmartPtr<XCam::V4l2Buffer> *)local_18);
  return local_18[0] + 4;
}



/* ===== XCam::SmartPtr<XCam::BufferData>::release @ 0002b1dc size=152 ===== */

/* XCam::SmartPtr<XCam::BufferData>::release() */

void __thiscall XCam::SmartPtr<XCam::BufferData>::release(SmartPtr<XCam::BufferData> *this)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)this != 0) {
    DataMemoryBarrier(0xb);
    piVar3 = (int *)(*(int *)(this + 4) + 4);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    DataMemoryBarrier(0xb);
    if (iVar2 + -1 == 0) {
      iVar2 = (**(code **)(**(int **)(this + 4) + 8))();
      if ((iVar2 == 0) && (*(int **)(this + 4) != (int *)0x0)) {
        (**(code **)(**(int **)(this + 4) + 4))();
      }
      if (*(int **)this != (int *)0x0) {
        (**(code **)(**(int **)this + 4))();
      }
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    return;
  }
  return;
}



/* ===== XCam::V4l2BufferProxy::V4l2BufferProxy @ 0002b274 size=252 ===== */

/* XCam::V4l2BufferProxy::V4l2BufferProxy(XCam::SmartPtr<XCam::V4l2Buffer>&,
   XCam::SmartPtr<XCam::V4l2Device>&) */

V4l2BufferProxy * __thiscall
XCam::V4l2BufferProxy::V4l2BufferProxy(V4l2BufferProxy *this,SmartPtr *param_1,SmartPtr *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_58;
  int local_54;
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
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_54 = *(int *)(param_1 + 4);
  local_58 = *(undefined4 *)param_1;
  iVar3 = DAT_0002b39c + 0x2b2a4;
  if (local_54 != 0) {
    std::__atomic_base<unsigned_int>::operator++((__atomic_base<unsigned_int> *)(local_54 + 4));
  }
  BufferProxy::BufferProxy((BufferProxy *)this,(SmartPtr *)&local_58);
  SmartPtr<XCam::BufferData>::release((SmartPtr<XCam::BufferData> *)&local_58);
  iVar1 = *(int *)(param_2 + 4);
  *(int *)this = *(int *)(iVar3 + DAT_0002b3a0) + 8;
  uVar2 = *(undefined4 *)param_2;
  *(int *)(this + 0x88) = iVar1;
  *(undefined4 *)(this + 0x84) = uVar2;
  if (iVar1 != 0) {
    std::__atomic_base<unsigned_int>::operator++((__atomic_base<unsigned_int> *)(iVar1 + 4));
  }
  VideoBufferInfo::VideoBufferInfo((VideoBufferInfo *)&local_58);
  iVar3 = *(int *)param_1;
  iVar1 = *(int *)(iVar3 + 0x18);
  iVar4 = *(int *)(iVar3 + 0x1c);
  uVar2 = *(undefined4 *)(iVar3 + 0x30);
  v4l2_format_to_video_info(this,(v4l2_format *)(iVar3 + 0x48),(VideoBufferInfo *)&local_58);
  *(undefined4 *)(this + 0x20) = local_58;
  *(int *)(this + 0x24) = local_54;
  *(undefined4 *)(this + 0x28) = uStack_50;
  *(undefined4 *)(this + 0x2c) = uStack_4c;
  *(undefined4 *)(this + 0x30) = local_48;
  *(undefined4 *)(this + 0x34) = uStack_44;
  *(undefined4 *)(this + 0x38) = uStack_40;
  *(undefined4 *)(this + 0x3c) = uStack_3c;
  *(undefined4 *)(this + 0x40) = local_38;
  *(undefined4 *)(this + 0x44) = uStack_34;
  *(undefined4 *)(this + 0x48) = uStack_30;
  *(undefined4 *)(this + 0x4c) = uStack_2c;
  *(undefined4 *)(this + 0x50) = local_28;
  *(undefined4 *)(this + 0x54) = uStack_24;
  *(undefined4 *)(this + 0x58) = uStack_20;
  *(undefined4 *)(this + 0x5c) = uStack_1c;
  *(longlong *)(this + 0x60) = (longlong)iVar1 * (longlong)DAT_0002b3a4 + (longlong)iVar4;
  *(undefined4 *)(this + 0x68) = uVar2;
  return this;
}



/* ===== XCam::V4l2BufferProxy::~V4l2BufferProxy @ 0002b3a8 size=172 ===== */

/* XCam::V4l2BufferProxy::~V4l2BufferProxy() */

V4l2BufferProxy * __thiscall XCam::V4l2BufferProxy::~V4l2BufferProxy(V4l2BufferProxy *this)

{
  int in_r2;
  undefined4 local_20;
  int local_1c;
  int local_18 [2];
  
  *(int *)this = *(int *)(DAT_0002b454 + 0x2b3c0 + DAT_0002b458) + 8;
  local_20 = *(undefined4 *)(this + 0x74);
  local_1c = *(int *)(this + 0x78);
  local_18[0] = in_r2;
  if (local_1c != 0) {
    std::__atomic_base<unsigned_int>::operator++((__atomic_base<unsigned_int> *)(local_1c + 4));
  }
  SmartPtr<XCam::BufferData>::dynamic_cast_ptr<XCam::V4l2Buffer>();
  if ((*(SmartPtr **)(this + 0x84) != (SmartPtr *)0x0) && (local_18[0] != 0)) {
    V4l2Device::return_buffer(*(SmartPtr **)(this + 0x84));
  }
  SmartPtr<XCam::V4l2Buffer>::release((SmartPtr<XCam::V4l2Buffer> *)local_18);
  SmartPtr<XCam::BufferData>::release((SmartPtr<XCam::BufferData> *)&local_20);
  if (*(int *)(this + 0x84) != 0) {
    FUN_0002aed4(this + 0x84);
  }
  BufferProxy::~BufferProxy((BufferProxy *)this);
  return this;
}



/* ===== XCam::V4l2BufferProxy::~V4l2BufferProxy @ 0002b45c size=32 ===== */

/* XCam::V4l2BufferProxy::~V4l2BufferProxy() */

V4l2BufferProxy * __thiscall XCam::V4l2BufferProxy::~V4l2BufferProxy(V4l2BufferProxy *this)

{
  ~V4l2BufferProxy(this);
  operator_delete(this,0x90);
  return this;
}



/* ===== XCam::V4l2Device::get_use_type @ 0002b47c size=8 ===== */

/* XCam::V4l2Device::get_use_type() */

undefined4 XCam::V4l2Device::get_use_type(void)

{
  return 0;
}



/* ===== XCam::V4l2Device::set_use_type @ 0002b484 size=4 ===== */

/* XCam::V4l2Device::set_use_type(int) */

int XCam::V4l2Device::set_use_type(int param_1)

{
  return param_1;
}



/* ===== XCam::V4l2Device::pre_set_format @ 0002b488 size=8 ===== */

/* XCam::V4l2Device::pre_set_format(v4l2_format&) */

undefined4 XCam::V4l2Device::pre_set_format(v4l2_format *param_1)

{
  return 0;
}



/* ===== XCam::V4l2Device::dequeue_event @ 0002b490 size=40 ===== */

/* XCam::V4l2Device::dequeue_event(v4l2_event&) */

undefined4 __thiscall XCam::V4l2Device::dequeue_event(V4l2Device *this,v4l2_event *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*(int *)this + 0x30))(this,DAT_0002b4b8,param_1);
  if (iVar1 < 0) {
    uVar2 = 0xfffffff7;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== XCam::V4l2SubDevice::get_selection @ 0002b4bc size=56 ===== */

/* XCam::V4l2SubDevice::get_selection(int, unsigned int, v4l2_subdev_selection&) */

undefined4 __thiscall
XCam::V4l2SubDevice::get_selection
          (V4l2SubDevice *this,int param_1,uint param_2,v4l2_subdev_selection *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  *(int *)(param_3 + 4) = param_1;
  *(uint *)(param_3 + 8) = param_2;
  *(undefined4 *)param_3 = 1;
  iVar1 = (**(code **)(*(int *)this + 0x30))(this,DAT_0002b4f4,param_3);
  if (iVar1 < 0) {
    uVar2 = 0xfffffff7;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== XCam::V4l2SubDevice::start @ 0002b4f8 size=28 ===== */

/* XCam::V4l2SubDevice::start(bool) */

undefined4 XCam::V4l2SubDevice::start(bool param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) == -1) {
    uVar1 = 0xfffffffe;
  }
  else {
    *(undefined1 *)(param_1 + 0xf8) = 1;
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== XCam::V4l2SubDevice::stop @ 0002b514 size=24 ===== */

/* XCam::V4l2SubDevice::stop() */

undefined4 __thiscall XCam::V4l2SubDevice::stop(V4l2SubDevice *this)

{
  if (this[0xf8] != (V4l2SubDevice)0x0) {
    this[0xf8] = (V4l2SubDevice)0x0;
  }
  return 0;
}



/* ===== XCam::V4l2Device::subscribe_event @ 0002b52c size=72 ===== */

/* XCam::V4l2Device::subscribe_event(int) */

undefined4 __thiscall XCam::V4l2Device::subscribe_event(V4l2Device *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_28 [3];
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28[2] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_28[1] = 0;
  local_18 = 0;
  local_28[0] = param_1;
  uStack_14 = local_28[2];
  uStack_10 = uStack_1c;
  iVar1 = (**(code **)(*(int *)this + 0x30))(this,DAT_0002b574,local_28);
  if (iVar1 < 0) {
    uVar2 = 0xfffffff7;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== XCam::V4l2Device::unsubscribe_event @ 0002b578 size=72 ===== */

/* XCam::V4l2Device::unsubscribe_event(int) */

undefined4 __thiscall XCam::V4l2Device::unsubscribe_event(V4l2Device *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_28 [3];
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28[2] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_28[1] = 0;
  local_18 = 0;
  local_28[0] = param_1;
  uStack_14 = local_28[2];
  uStack_10 = uStack_1c;
  iVar1 = (**(code **)(*(int *)this + 0x30))(this,DAT_0002b5c0,local_28);
  if (iVar1 < 0) {
    uVar2 = 0xfffffff7;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== XCam::V4l2Device::close @ 0002b5c4 size=52 ===== */

/* XCam::V4l2Device::close() */

undefined4 __thiscall XCam::V4l2Device::close(V4l2Device *this)

{
  if (*(int *)(this + 8) != -1) {
    ::close(*(int *)(this + 8));
    *(undefined4 *)(this + 8) = 0xffffffff;
    return 0;
  }
  return 0;
}



/* ===== XCam::V4l2Device::io_control @ 0002b5f8 size=36 ===== */

/* XCam::V4l2Device::io_control(unsigned long, void*) */

undefined4 __thiscall XCam::V4l2Device::io_control(V4l2Device *this,ulong param_1,void *param_2)

{
  undefined4 uVar1;
  
  if (0 < *(int *)(this + 8)) {
                    /* WARNING: Could not recover jumptable at 0x0001dd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_xcam_device_ioctl_0004419c)();
    return uVar1;
  }
  return 0xffffffff;
}



/* ===== XCam::V4l2Device::poll_event @ 0002b610 size=156 ===== */

/* XCam::V4l2Device::poll_event(int, int) */

int __thiscall XCam::V4l2Device::poll_event(V4l2Device *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  nfds_t __nfds;
  
  if (param_2 == -1) {
    __nfds = 1;
  }
  else {
    __nfds = 2;
  }
  iVar1 = __nfds * -8;
  memset(&stack0xffffffe0 + iVar1,0,__nfds * 8);
  *(undefined4 *)(&stack0xffffffe0 + iVar1) = *(undefined4 *)(this + 8);
  if (param_2 != -1) {
    *(int *)(&stack0xffffffe8 + iVar1) = param_2;
  }
  *(undefined2 *)(&stack0xffffffe4 + iVar1) = 0x3f;
  if (param_2 != -1) {
    *(undefined4 *)(&stack0xffffffec + iVar1) = 7;
  }
  iVar2 = poll((pollfd *)(&stack0xffffffe0 + iVar1),__nfds,param_1);
  if ((param_2 == -1) || ((*(ushort *)(&stack0xffffffee + iVar1) & 3) == 0)) {
    if ((0 < iVar2) && ((*(ushort *)(&stack0xffffffe6 + iVar1) & 0x38) != 0)) {
      iVar2 = -1;
    }
  }
  else {
    iVar2 = 3;
  }
  return iVar2;
}



/* ===== XCam::V4l2Device::stop_streamoff @ 0002b6ac size=116 ===== */

/* XCam::V4l2Device::stop_streamoff() */

undefined4 XCam::V4l2Device::stop_streamoff(void)

{
  int *in_r0;
  int local_18;
  int *local_14;
  
  local_18 = *(int *)(DAT_0002b72c + 0x2b6bc + DAT_0002b730) + 8;
  local_14 = in_r0 + 0x44;
  pthread_mutex_lock((pthread_mutex_t *)(in_r0 + 0x45));
  if ((char)in_r0[0x3e] != '\0') {
    (**(code **)(*in_r0 + 0x30))();
    *(undefined1 *)(in_r0 + 0x3e) = 0;
  }
  SmartLock::~SmartLock((SmartLock *)&local_18);
  return 0;
}



/* ===== XCam::V4l2SubDevice::set_selection @ 0002b738 size=96 ===== */

/* XCam::V4l2SubDevice::set_selection(v4l2_subdev_selection&) */

undefined4 __thiscall
XCam::V4l2SubDevice::set_selection(V4l2SubDevice *this,v4l2_subdev_selection *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*(int *)this + 0x30))
                    (this,DAT_0002b798,param_1,*(code **)(*(int *)this + 0x30),this,param_1);
  if (iVar1 < 0) {
    iVar1 = *(int *)(this + 4);
    if (iVar1 == 0) {
      iVar1 = DAT_0002b79c + 0x2b774;
    }
    xcam_print_log(0x18,0xff,1,DAT_0002b7a0 + 0x2b78c,iVar1);
    uVar2 = 0xfffffff7;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== XCam::V4l2SubDevice::getFormat @ 0002b7a4 size=96 ===== */

/* XCam::V4l2SubDevice::getFormat(v4l2_subdev_format&) */

undefined4 __thiscall
XCam::V4l2SubDevice::getFormat(V4l2SubDevice *this,v4l2_subdev_format *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*(int *)this + 0x30))
                    (this,DAT_0002b804,param_1,*(code **)(*(int *)this + 0x30),this,param_1);
  if (iVar1 < 0) {
    iVar1 = *(int *)(this + 4);
    if (iVar1 == 0) {
      iVar1 = DAT_0002b808 + 0x2b7e0;
    }
    xcam_print_log(0x18,0xff,1,DAT_0002b80c + 0x2b7f8,iVar1);
    uVar2 = 0xfffffff7;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== XCam::V4l2SubDevice::setFormat @ 0002b810 size=96 ===== */

/* XCam::V4l2SubDevice::setFormat(v4l2_subdev_format&) */

undefined4 __thiscall
XCam::V4l2SubDevice::setFormat(V4l2SubDevice *this,v4l2_subdev_format *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*(int *)this + 0x30))
                    (this,DAT_0002b870,param_1,*(code **)(*(int *)this + 0x30),this,param_1);
  if (iVar1 < 0) {
    iVar1 = *(int *)(this + 4);
    if (iVar1 == 0) {
      iVar1 = DAT_0002b874 + 0x2b84c;
    }
    xcam_print_log(0x18,0xff,1,DAT_0002b878 + 0x2b864,iVar1);
    uVar2 = 0xfffffff7;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== XCam::V4l2Device::get_format @ 0002b87c size=148 ===== */

/* XCam::V4l2Device::get_format(v4l2_format&) */

undefined4 __thiscall XCam::V4l2Device::get_format(V4l2Device *this,v4l2_format *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (this[0xf8] != (V4l2Device)0x0) {
    memcpy(param_1,this + 0x24,0xcc);
    return 0;
  }
  if (*(int *)(this + 8) != -1) {
    puVar2 = memset(param_1,0,0xcc);
    uVar1 = DAT_0002b910;
    *puVar2 = *(undefined4 *)(this + 0x14);
    iVar3 = (**(code **)(*(int *)this + 0x30))(this,uVar1,puVar2);
    if (-1 < iVar3) {
      return 0;
    }
    xcam_print_log(0x18,0xff,1,DAT_0002b914 + 0x2b908);
  }
  return 0xfffffff7;
}



/* ===== XCam::V4l2Device::release_buffer @ 0002b918 size=192 ===== */

/* XCam::V4l2Device::release_buffer(XCam::SmartPtr<XCam::V4l2Buffer>&) */

undefined4 __thiscall XCam::V4l2Device::release_buffer(V4l2Device *this,SmartPtr *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(this + 0x1c);
  if ((iVar1 != 2) && (iVar1 != 4)) {
    if (iVar1 != 1) {
      return 0xfffffffd;
    }
    if (*(int *)(this + 0x14) - 9U < 2) {
      iVar1 = 0;
      for (iVar3 = 0; iVar2 = *(int *)param_1, iVar3 < *(int *)(this + 0x130); iVar3 = iVar3 + 1) {
        iVar1 = iVar3 * 0x3c + *(int *)(iVar2 + 0x38);
        iVar1 = munmap(*(void **)(iVar1 + 8),*(size_t *)(iVar1 + 4));
      }
    }
    else {
      iVar1 = munmap(*(void **)(*(int *)param_1 + 0x38),*(size_t *)(*(int *)param_1 + 0x3c));
      iVar2 = *(int *)param_1;
    }
    ::close(*(int *)(iVar2 + 0x118));
    if (iVar1 == 0) {
      return 0;
    }
    xcam_print_log(0x18,0xff,1,DAT_0002b9d8 + 0x2b9cc);
  }
  return 0;
}



/* ===== XCam::V4l2Buffer::reset @ 0002b9dc size=48 ===== */

/* XCam::V4l2Buffer::reset() */

void __thiscall XCam::V4l2Buffer::reset(V4l2Buffer *this)

{
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(this + 0x30) = 0;
  DataMemoryBarrier(0xb);
  this[0x120] = (V4l2Buffer)0x0;
  DataMemoryBarrier(0xb);
  return;
}



/* ===== XCam::V4l2Device::queue_buffer @ 0002ba0c size=472 ===== */

/* XCam::V4l2Device::queue_buffer(XCam::SmartPtr<XCam::V4l2Buffer>&, bool) */

undefined4 __thiscall
XCam::V4l2Device::queue_buffer(V4l2Device *this,SmartPtr *param_1,bool param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int aiStack_70 [2];
  undefined1 auStack_68 [4];
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 *local_30;
  undefined4 local_2c;
  
  if (!param_2) {
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x114));
  }
  V4l2Buffer::reset(*(V4l2Buffer **)param_1);
  iVar5 = *(int *)param_1;
  memcpy(&local_64,(void *)(iVar5 + 4),0x44);
  iVar1 = -(*(int *)(this + 0x130) * 0x3c + 7U & 0xfffffff8);
  if (*(int *)(this + 0x14) - 9U < 2) {
    local_30 = memset(auStack_68 + iVar1,0,*(int *)(this + 0x130) * 0x3c);
    puVar6 = *(undefined4 **)(iVar5 + 0x38);
    uVar2 = puVar6[1];
    uVar3 = puVar6[2];
    uVar4 = puVar6[3];
    *local_30 = *puVar6;
    local_30[1] = uVar2;
    local_30[2] = uVar3;
    local_30[3] = uVar4;
    uVar2 = puVar6[5];
    uVar3 = puVar6[6];
    uVar4 = puVar6[7];
    local_30[4] = puVar6[4];
    local_30[5] = uVar2;
    local_30[6] = uVar3;
    local_30[7] = uVar4;
    uVar2 = puVar6[9];
    uVar3 = puVar6[10];
    uVar4 = puVar6[0xb];
    local_30[8] = puVar6[8];
    local_30[9] = uVar2;
    local_30[10] = uVar3;
    local_30[0xb] = uVar4;
    uVar2 = puVar6[0xd];
    uVar3 = puVar6[0xe];
    local_30[0xc] = puVar6[0xc];
    local_30[0xd] = uVar2;
    local_30[0xe] = uVar3;
  }
  if (local_60 == 0xe) {
    local_5c = local_2c;
  }
  else if (local_60 == 10) {
    *local_30 = local_30[1];
    if (*(int *)(this + 0x1c) == 4) {
      uVar2 = *(undefined4 *)(iVar5 + 0x118);
    }
    else {
      if (*(int *)(this + 0x1c) != 2) goto LAB_0002bb00;
      uVar2 = *(undefined4 *)(iVar5 + 0x11c);
    }
    local_30[2] = uVar2;
  }
LAB_0002bb00:
  *(int *)(this + 0x10c) = *(int *)(this + 0x10c) + 1;
  DataMemoryBarrier(0xb);
  *(undefined1 *)(*(int *)param_1 + 0x120) = 1;
  DataMemoryBarrier(0xb);
  if (!param_2) {
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x114));
  }
  if (this[0x18] != (V4l2Device)0x0) {
    local_58 = 0x1800;
  }
  iVar5 = (**(code **)(*(int *)this + 0x30))(this,DAT_0002bbe4,&local_64);
  if (iVar5 < 0) {
    iVar5 = *(int *)(this + 4);
    if (iVar5 == 0) {
      iVar5 = DAT_0002bbe8 + 0x2bb78;
    }
    *(int *)((int)aiStack_70 + iVar1) = iVar5;
    *(undefined4 *)((int)aiStack_70 + iVar1 + 4) = local_64;
    xcam_print_log(0x18,0xff,1,DAT_0002bbec + 0x2bb98);
    if (!param_2) {
      pthread_mutex_lock((pthread_mutex_t *)(this + 0x114));
    }
    DataMemoryBarrier(0xb);
    *(undefined1 *)(*(int *)param_1 + 0x120) = 0;
    DataMemoryBarrier(0xb);
    *(int *)(this + 0x10c) = *(int *)(this + 0x10c) + -1;
    if (!param_2) {
      pthread_mutex_unlock((pthread_mutex_t *)(this + 0x114));
    }
    uVar2 = 0xfffffff7;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== XCam::V4l2Device::V4l2Device @ 0002bbf0 size=192 ===== */

/* XCam::V4l2Device::V4l2Device(char const*) */

V4l2Device * __thiscall XCam::V4l2Device::V4l2Device(V4l2Device *this,char *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_0002bcb0 + 0x2bc00;
  iVar2 = *(int *)(iVar3 + DAT_0002bcb4);
  *(undefined4 *)(this + 0xc) = 0;
  *(int *)this = iVar2 + 8;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 0x108) = 4;
  iVar2 = DAT_0002bcb8;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 1;
  this[0x18] = (V4l2Device)0x0;
  *(undefined4 *)(this + 0x1c) = 1;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  this[0xf8] = (V4l2Device)0x0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  iVar2 = *(int *)(iVar3 + iVar2);
  this[300] = (V4l2Device)0x1;
  *(int *)(this + 0x110) = iVar2 + 8;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x114),(pthread_mutexattr_t *)0x0);
  *(undefined4 *)(this + 0x130) = 1;
  if (param_1 != (char *)0x0) {
    pcVar1 = strndup(param_1,0x1000);
    *(char **)(this + 4) = pcVar1;
  }
  memset(this + 0x24,0,0xcc);
  return this;
}



/* ===== XCam::V4l2Device::set_device_name @ 0002bcbc size=72 ===== */

/* XCam::V4l2Device::set_device_name(char const*) */

undefined4 __thiscall XCam::V4l2Device::set_device_name(V4l2Device *this,char *param_1)

{
  char *pcVar1;
  
  if (*(int *)(this + 8) == -1) {
    if (*(int *)(this + 4) != 0) {
      xcam_free();
    }
    pcVar1 = strndup(param_1,0x1000);
    *(char **)(this + 4) = pcVar1;
    return 1;
  }
  return 0;
}



/* ===== XCam::V4l2Device::set_sensor_id @ 0002bd04 size=24 ===== */

/* XCam::V4l2Device::set_sensor_id(int) */

bool __thiscall XCam::V4l2Device::set_sensor_id(V4l2Device *this,int param_1)

{
  if (*(int *)(this + 8) == -1) {
    *(int *)(this + 0xc) = param_1;
  }
  return *(int *)(this + 8) == -1;
}



/* ===== XCam::V4l2Device::set_capture_mode @ 0002bd1c size=24 ===== */

/* XCam::V4l2Device::set_capture_mode(unsigned int) */

bool __thiscall XCam::V4l2Device::set_capture_mode(V4l2Device *this,uint param_1)

{
  if (*(int *)(this + 8) == -1) {
    *(uint *)(this + 0x10) = param_1;
  }
  return *(int *)(this + 8) == -1;
}



/* ===== XCam::V4l2Device::set_mplanes_count @ 0002bd34 size=24 ===== */

/* XCam::V4l2Device::set_mplanes_count(unsigned int) */

bool __thiscall XCam::V4l2Device::set_mplanes_count(V4l2Device *this,uint param_1)

{
  if (this[0xf8] == (V4l2Device)0x0) {
    *(uint *)(this + 0x130) = param_1;
  }
  return this[0xf8] == (V4l2Device)0x0;
}



/* ===== XCam::V4l2Device::set_framerate @ 0002bd4c size=28 ===== */

/* XCam::V4l2Device::set_framerate(unsigned int, unsigned int) */

bool __thiscall XCam::V4l2Device::set_framerate(V4l2Device *this,uint param_1,uint param_2)

{
  if (*(int *)(this + 0x30) == 0) {
    *(uint *)(this + 0xf0) = param_1;
    *(uint *)(this + 0xf4) = param_2;
  }
  return *(int *)(this + 0x30) == 0;
}



/* ===== XCam::V4l2Device::get_framerate @ 0002bd68 size=20 ===== */

/* XCam::V4l2Device::get_framerate(unsigned int&, unsigned int&) */

void __thiscall XCam::V4l2Device::get_framerate(V4l2Device *this,uint *param_1,uint *param_2)

{
  *param_1 = *(uint *)(this + 0xf0);
  *param_2 = *(uint *)(this + 0xf4);
  return;
}



/* ===== XCam::V4l2Device::set_mem_type @ 0002bd7c size=24 ===== */

/* XCam::V4l2Device::set_mem_type(v4l2_memory) */

bool __thiscall XCam::V4l2Device::set_mem_type(V4l2Device *this,undefined4 param_2)

{
  if (this[0xf8] == (V4l2Device)0x0) {
    *(undefined4 *)(this + 0x1c) = param_2;
  }
  return this[0xf8] == (V4l2Device)0x0;
}



/* ===== XCam::V4l2Device::set_buf_type @ 0002bd94 size=24 ===== */

/* XCam::V4l2Device::set_buf_type(v4l2_buf_type) */

bool __thiscall XCam::V4l2Device::set_buf_type(V4l2Device *this,undefined4 param_2)

{
  if (this[0xf8] == (V4l2Device)0x0) {
    *(undefined4 *)(this + 0x14) = param_2;
  }
  return this[0xf8] == (V4l2Device)0x0;
}



/* ===== XCam::V4l2Device::set_buf_sync @ 0002bdac size=24 ===== */

/* XCam::V4l2Device::set_buf_sync(bool) */

bool __thiscall XCam::V4l2Device::set_buf_sync(V4l2Device *this,bool param_1)

{
  if (this[0xf8] == (V4l2Device)0x0) {
    this[0x18] = (V4l2Device)param_1;
  }
  return this[0xf8] == (V4l2Device)0x0;
}



/* ===== XCam::V4l2Device::set_buffer_count @ 0002bdc4 size=24 ===== */

/* XCam::V4l2Device::set_buffer_count(unsigned int) */

bool __thiscall XCam::V4l2Device::set_buffer_count(V4l2Device *this,uint param_1)

{
  if (this[0xf8] == (V4l2Device)0x0) {
    *(uint *)(this + 0x108) = param_1;
  }
  return this[0xf8] == (V4l2Device)0x0;
}



/* ===== XCam::V4l2Device::query_cap @ 0002bddc size=276 ===== */

/* XCam::V4l2Device::query_cap(v4l2_capability&) */

undefined4 __thiscall XCam::V4l2Device::query_cap(V4l2Device *this,v4l2_capability *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (*(int *)(this + 8) == -1) {
    xcam_print_log(0x18,0xff,1,DAT_0002bef0 + 0x2be04);
    return 0xfffffffc;
  }
  iVar1 = (**(code **)(*(int *)this + 0x30))
                    (this,DAT_0002bef4,param_1,*(code **)(*(int *)this + 0x30),this,param_1);
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    xcam_print_log(0x18,0xff,1,DAT_0002bef8 + 0x2be54,iVar1,pcVar3);
    return 0xffffff01;
  }
  uVar4 = *(uint *)(param_1 + 0x54);
  if ((uVar4 & 1) == 0) {
    if ((uVar4 & 0x1000) == 0) {
      if ((uVar4 & 2) != 0) {
        uVar5 = 2;
        goto LAB_0002be78;
      }
      if ((uVar4 & 0x2000) == 0) {
        if ((uVar4 & 0x800000) != 0) {
          uVar5 = 0xd;
          goto LAB_0002be78;
        }
        if ((uVar4 & 0x8000000) == 0) {
          xcam_print_log(0x18,0xff,1,DAT_0002bf00 + 0x2beec,DAT_0002befc + 0x2bee0);
          return 0xffffff01;
        }
        uVar5 = 0xe;
      }
      else {
        uVar5 = 10;
      }
    }
    else {
      uVar5 = 9;
    }
    *(undefined4 *)(this + 0x14) = uVar5;
  }
  else {
    uVar5 = 1;
LAB_0002be78:
    *(undefined4 *)(this + 0x14) = uVar5;
  }
  return 0;
}



/* ===== XCam::V4l2Device::open @ 0002bf04 size=188 ===== */

/* XCam::V4l2Device::open(bool) */

undefined4 __thiscall XCam::V4l2Device::open(V4l2Device *this,bool param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  v4l2_capability avStack_70 [104];
  
  if (*(int *)(this + 8) == -1) {
    if (*(char **)(this + 4) == (char *)0x0) {
      uVar1 = 0xfffffffe;
    }
    else {
      iVar2 = DAT_0002bfc0;
      if (!param_1) {
        iVar2 = DAT_0002bfc4;
      }
      iVar2 = open64(*(char **)(this + 4),iVar2);
      *(int *)(this + 8) = iVar2;
      pcVar3 = *(char **)(this + 4);
      if (*(int *)(this + 8) == -1) {
        xcam_print_log(0x18,0xff,1,DAT_0002bfc8 + 0x2bf68,pcVar3);
        uVar1 = 0xfffffff7;
      }
      else {
        if ((pcVar3 != (char *)0x0) &&
           (pcVar3 = strstr(pcVar3,(char *)(DAT_0002bfcc + 0x2bf88)), pcVar3 != (char *)0x0)) {
          query_cap(this,avStack_70);
          (**(code **)(*(int *)this + 0x10))(this,this + 0x24);
        }
        uVar1 = 0;
      }
    }
    return uVar1;
  }
  return 0;
}



/* ===== XCam::V4l2Device::set_format @ 0002bfd0 size=532 ===== */

/* XCam::V4l2Device::set_format(v4l2_format&) */

int __thiscall XCam::V4l2Device::set_format(V4l2Device *this,v4l2_format *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 local_e4;
  uint local_e0 [2];
  undefined4 local_d8;
  undefined4 local_d4;
  
  if (this[0xf8] == (V4l2Device)0x0) {
    if (*(int *)(this + 8) == -1) {
      xcam_print_log(0x18,0xff,1,DAT_0002c1e8 + 0x2c02c);
      return -4;
    }
    iVar5 = *(int *)(param_1 + 4);
    iVar4 = *(int *)(param_1 + 8);
    (**(code **)(*(int *)this + 0x48))();
    iVar1 = (**(code **)(*(int *)this + 0x30))(this,DAT_0002c1ec,param_1);
    if (iVar1 < 0) {
      piVar2 = __errno_location();
      if (*piVar2 == 0x10) {
        xcam_print_log(0x18,0xff,1,DAT_0002c1f0 + 0x2c09c);
      }
      else {
        pcVar3 = strerror(*piVar2);
        xcam_print_log(0x18,0xff,1,DAT_0002c1f4 + 0x2c0bc,pcVar3);
      }
      return -9;
    }
    if ((*(int *)(param_1 + 4) == iVar5) && (iVar4 == *(int *)(param_1 + 8))) {
      if ((*(int *)(this + 0xf0) != 0) && (*(int *)(this + 0xf4) != 0)) {
        iVar1 = *(int *)this;
        memset(local_e0,0,200);
        local_e4 = *(undefined4 *)(this + 0x14);
        iVar1 = (**(code **)(iVar1 + 0x30))(this,DAT_0002c200,&local_e4);
        if ((-1 < iVar1) && ((local_e0[0] & 0x1000) != 0)) {
          local_d8 = *(undefined4 *)(this + 0xf4);
          local_d4 = *(undefined4 *)(this + 0xf0);
          iVar1 = (**(code **)(*(int *)this + 0x30))(this,DAT_0002c204,&local_e4);
          if (-1 < iVar1) {
            *(undefined4 *)(this + 0xf0) = local_d4;
            *(undefined4 *)(this + 0xf4) = local_d8;
          }
        }
      }
      iVar1 = (**(code **)(*(int *)this + 0x4c))(this,param_1);
      if (iVar1 != 0) {
        return iVar1;
      }
      memcpy(this + 0x24,param_1,0xcc);
      return 0;
    }
    iVar1 = *(int *)(this + 4);
    if (iVar1 == 0) {
      iVar1 = DAT_0002c1f8 + 0x2c0f4;
    }
    xcam_print_log(0x18,0xff,1,DAT_0002c1fc + 0x2c110,iVar1,*(int *)(param_1 + 4),
                   *(int *)(param_1 + 8));
  }
  else {
    xcam_print_log(0x18,0xff,1,DAT_0002c1e4 + 0x2bffc);
  }
  return -2;
}



/* ===== XCam::V4l2Device::set_format @ 0002c208 size=96 ===== */

/* XCam::V4l2Device::set_format(unsigned int, unsigned int, unsigned int, v4l2_field, unsigned int)
    */

void __thiscall
XCam::V4l2Device::set_format
          (V4l2Device *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_5,int param_6)

{
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  int local_d0 [46];
  
  memset(local_d0,0,0xb8);
  uStack_e4 = *(undefined4 *)(this + 0x14);
  if (param_6 != 0) {
    local_d0[0] = param_6;
  }
  local_d4 = param_5;
  uStack_e0 = param_1;
  local_dc = param_2;
  local_d8 = param_3;
  set_format(this,(v4l2_format *)&uStack_e4);
  return;
}



/* ===== XCam::V4l2Device::enum_formats[abi:cxx11] @ 0002c268 size=220 ===== */

/* XCam::V4l2Device::enum_formats[abi:cxx11]() */

void XCam::V4l2Device::enum_formats_abi_cxx11_(void)

{
  int in_r0;
  int iVar1;
  _List_node_base *p_Var2;
  int *in_r1;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  uVar5 = 0;
  uVar7 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar9 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar11 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(int *)(in_r0 + 4) = in_r0;
  *(int *)in_r0 = in_r0;
  *(undefined4 *)(in_r0 + 8) = 0;
  iVar3 = 0;
  while( true ) {
    iVar4 = in_r1[5];
    uVar6 = uVar5;
    uVar8 = uVar7;
    uVar10 = uVar9;
    uVar12 = uVar11;
    iVar1 = (**(code **)(*in_r1 + 0x30))();
    if (iVar1 < 0) break;
    p_Var2 = operator_new(0x48);
    *(int *)(p_Var2 + 8) = iVar3;
    *(int *)(p_Var2 + 0xc) = iVar4;
    *(undefined4 *)(p_Var2 + 0x10) = uVar5;
    *(undefined4 *)(p_Var2 + 0x14) = uVar7;
    *(undefined4 *)(p_Var2 + 0x18) = uVar9;
    *(undefined4 *)(p_Var2 + 0x1c) = uVar11;
    *(undefined4 *)(p_Var2 + 0x20) = uVar5;
    *(undefined4 *)(p_Var2 + 0x24) = uVar7;
    *(undefined4 *)(p_Var2 + 0x28) = uVar5;
    *(undefined4 *)(p_Var2 + 0x2c) = uVar7;
    *(undefined4 *)(p_Var2 + 0x30) = uVar5;
    *(undefined4 *)(p_Var2 + 0x34) = uVar7;
    *(undefined4 *)(p_Var2 + 0x38) = uVar5;
    *(undefined4 *)(p_Var2 + 0x3c) = uVar7;
    *(undefined4 *)(p_Var2 + 0x40) = uVar5;
    *(undefined4 *)(p_Var2 + 0x44) = uVar7;
    uVar5 = uVar6;
    uVar7 = uVar8;
    uVar9 = uVar10;
    uVar11 = uVar12;
    std::__detail::_List_node_base::_M_hook(p_Var2);
    *(int *)(in_r0 + 8) = *(int *)(in_r0 + 8) + 1;
    iVar3 = iVar3 + 1;
  }
  return;
}



/* ===== XCam::V4l2Device::get_crop @ 0002c368 size=96 ===== */

/* XCam::V4l2Device::get_crop(v4l2_crop&) */

undefined4 __thiscall XCam::V4l2Device::get_crop(V4l2Device *this,v4l2_crop *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*(int *)this + 0x30))
                    (this,DAT_0002c3c8,param_1,*(code **)(*(int *)this + 0x30),this,param_1);
  if (iVar1 < 0) {
    iVar1 = *(int *)(this + 4);
    if (iVar1 == 0) {
      iVar1 = DAT_0002c3cc + 0x2c3a4;
    }
    xcam_print_log(0x18,0xff,1,DAT_0002c3d0 + 0x2c3bc,iVar1);
    uVar2 = 0xfffffff7;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== XCam::V4l2Device::set_selection @ 0002c3d4 size=96 ===== */

/* XCam::V4l2Device::set_selection(v4l2_selection&) */

undefined4 __thiscall XCam::V4l2Device::set_selection(V4l2Device *this,v4l2_selection *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*(int *)this + 0x30))
                    (this,DAT_0002c434,param_1,*(code **)(*(int *)this + 0x30),this,param_1);
  if (iVar1 < 0) {
    iVar1 = *(int *)(this + 4);
    if (iVar1 == 0) {
      iVar1 = DAT_0002c438 + 0x2c410;
    }
    xcam_print_log(0x18,0xff,1,DAT_0002c43c + 0x2c428,iVar1);
    uVar2 = 0xfffffff7;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== XCam::V4l2Device::set_crop @ 0002c440 size=96 ===== */

/* XCam::V4l2Device::set_crop(v4l2_crop&) */

undefined4 __thiscall XCam::V4l2Device::set_crop(V4l2Device *this,v4l2_crop *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*(int *)this + 0x30))
                    (this,DAT_0002c4a0,param_1,*(code **)(*(int *)this + 0x30),this,param_1);
  if (iVar1 < 0) {
    iVar1 = *(int *)(this + 4);
    if (iVar1 == 0) {
      iVar1 = DAT_0002c4a4 + 0x2c47c;
    }
    xcam_print_log(0x18,0xff,1,DAT_0002c4a8 + 0x2c494,iVar1);
    uVar2 = 0xfffffff7;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== XCam::V4l2Device::request_buffer @ 0002c4ac size=148 ===== */

/* XCam::V4l2Device::request_buffer() */

undefined4 __thiscall XCam::V4l2Device::request_buffer(V4l2Device *this)

{
  int iVar1;
  undefined4 uVar2;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_18 = *(undefined4 *)(this + 0x14);
  local_1c = *(int *)(this + 0x108);
  local_10 = 0;
  local_14 = *(undefined4 *)(this + 0x1c);
  iVar1 = (**(code **)(*(int *)this + 0x30))(this,DAT_0002c540,&local_1c);
  if (iVar1 < 0) {
    uVar2 = 0xfffffff7;
  }
  else {
    if (local_1c != *(int *)(this + 0x108)) {
      *(int *)(this + 0x108) = local_1c;
    }
    if (*(int *)(this + 0x14) - 9U < 2) {
      uVar2 = xcam_malloc0(*(int *)(this + 0x130) * *(int *)(this + 0x108) * 0x3c);
      *(undefined4 *)(this + 0x20) = uVar2;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== XCam::V4l2Device::return_buffer_to_pool @ 0002c544 size=76 ===== */

/* XCam::V4l2Device::return_buffer_to_pool(XCam::SmartPtr<XCam::V4l2Buffer>&) */

undefined4 __thiscall XCam::V4l2Device::return_buffer_to_pool(V4l2Device *this,SmartPtr *param_1)

{
  int local_10;
  V4l2Device *local_c;
  
  local_10 = *(int *)(DAT_0002c590 + 0x2c554 + DAT_0002c594) + 8;
  local_c = this + 0x110;
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x114));
  V4l2Buffer::reset(*(V4l2Buffer **)param_1);
  SmartLock::~SmartLock((SmartLock *)&local_10);
  return 0;
}



/* ===== XCam::V4l2Device::return_buffer @ 0002c598 size=156 ===== */

/* XCam::V4l2Device::return_buffer(XCam::SmartPtr<XCam::V4l2Buffer>&) */

undefined4 XCam::V4l2Device::return_buffer(SmartPtr *param_1)

{
  undefined4 uVar1;
  undefined4 *in_r1;
  uint uVar2;
  int local_20;
  SmartPtr *local_1c;
  
  local_20 = *(int *)(DAT_0002c640 + 0x2c5a8 + DAT_0002c644) + 8;
  local_1c = param_1 + 0x110;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x114));
  uVar2 = *(uint *)((V4l2Buffer *)*in_r1 + 8);
  if (((uVar2 < 0xf) && ((~(0x55acU >> (uVar2 & 0xff)) & 1) == 0)) ||
     (param_1[0xf8] == (SmartPtr)0x0)) {
    uVar1 = 0;
    V4l2Buffer::reset((V4l2Buffer *)*in_r1);
  }
  else {
    uVar1 = (**(code **)(*(int *)param_1 + 0x2c))(param_1);
  }
  SmartLock::~SmartLock((SmartLock *)&local_20);
  return uVar1;
}



/* ===== XCam::V4l2SubDevice::V4l2SubDevice @ 0002c648 size=44 ===== */

/* XCam::V4l2SubDevice::V4l2SubDevice(char const*) */

V4l2SubDevice * __thiscall XCam::V4l2SubDevice::V4l2SubDevice(V4l2SubDevice *this,char *param_1)

{
  V4l2Device::V4l2Device((V4l2Device *)this,param_1);
  *(int *)this = *(int *)(DAT_0002c674 + 0x2c668 + DAT_0002c678) + 8;
  return this;
}



/* ===== XCam::SmartPtr<XCam::V4l2Buffer>::SmartPtr @ 0002c67c size=60 ===== */

/* XCam::SmartPtr<XCam::V4l2Buffer>::SmartPtr(XCam::SmartPtr<XCam::V4l2Buffer> const&) */

void __thiscall
XCam::SmartPtr<XCam::V4l2Buffer>::SmartPtr(SmartPtr<XCam::V4l2Buffer> *this,SmartPtr *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  iVar2 = *(int *)(param_1 + 4);
  *(int *)(this + 4) = iVar2;
  if (iVar2 != 0) {
    piVar3 = (int *)(iVar2 + 4);
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = *piVar3 + 1;
    DataMemoryBarrier(0xb);
    return;
  }
  return;
}



/* ===== XCam::V4l2Device::get_buffer_by_index @ 0002c6b8 size=92 ===== */

/* XCam::V4l2Device::get_buffer_by_index(int) */

int XCam::V4l2Device::get_buffer_by_index(int param_1)

{
  int in_r1;
  int in_r2;
  int local_18;
  int local_14;
  
  local_18 = *(int *)(DAT_0002c714 + 0x2c6d0 + DAT_0002c718) + 8;
  local_14 = in_r1 + 0x110;
  pthread_mutex_lock((pthread_mutex_t *)(in_r1 + 0x114));
  SmartPtr<XCam::V4l2Buffer>::SmartPtr
            ((SmartPtr<XCam::V4l2Buffer> *)param_1,(SmartPtr *)(*(int *)(in_r1 + 0xfc) + in_r2 * 8))
  ;
  SmartLock::~SmartLock((SmartLock *)&local_18);
  return param_1;
}



/* ===== XCam::V4l2Device::allocate_buffer @ 0002c71c size=924 ===== */

/* XCam::V4l2Device::allocate_buffer(XCam::SmartPtr<XCam::V4l2Buffer>&, v4l2_format const&, unsigned
   int) */

undefined4 __thiscall
XCam::V4l2Device::allocate_buffer
          (V4l2Device *this,SmartPtr *param_1,v4l2_format *param_2,uint param_3)

{
  int iVar1;
  void *pvVar2;
  V4l2Buffer *this_00;
  int *piVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_bc;
  uint local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  int local_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  uint local_7c;
  int local_78;
  undefined4 local_74;
  void *pvStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  void *pvStack_60;
  undefined4 local_5c;
  void *pvStack_58;
  undefined4 local_54;
  void *pvStack_50;
  int local_4c;
  void *pvStack_48;
  size_t local_44;
  undefined4 uStack_40;
  void *pvStack_3c;
  
  uVar9 = 0;
  pvStack_60 = *(void **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iVar5 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar10 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar7 = DAT_0002cac8 + 0x2c740;
  local_78 = *(int *)(this + 0x14);
  local_4c = *(int *)(this + 0x1c);
  local_74 = 0;
  uVar4 = local_78 - 9;
  pvStack_70 = pvStack_60;
  if (this[0x18] != (V4l2Device)0x0) {
    pvStack_70 = (void *)0x1800;
  }
  local_44 = 0;
  local_64 = 0;
  local_5c = 0;
  local_54 = 0;
  uStack_40 = 0;
  pvStack_48 = pvStack_60;
  if (uVar4 < 2) {
    local_44 = *(size_t *)(this + 0x130);
    pvStack_48 = (void *)(param_3 * local_44 * 0x3c + *(int *)(this + 0x20));
  }
  local_7c = param_3;
  iStack_6c = iVar5;
  uStack_68 = uVar10;
  pvStack_58 = pvStack_60;
  pvStack_50 = pvStack_60;
  pvStack_3c = pvStack_60;
  if (local_4c == 2) {
    local_44 = *(size_t *)(param_2 + 0x18);
    if (uVar4 < 2) {
      local_44 = *(size_t *)(this + 0x130);
      for (iVar5 = 0; iVar5 < *(int *)(this + 0x130); iVar5 = iVar5 + 1) {
        *(undefined4 *)((int)pvStack_48 + iVar5 * 0x3c + 4) = *(undefined4 *)(param_2 + 0x18);
        *(undefined4 *)((int)pvStack_48 + iVar5 * 0x3c) = *(undefined4 *)(param_2 + 0x18);
      }
    }
  }
  else {
    if (local_4c != 4) {
      if (local_4c != 1) {
        return 0xfffffffd;
      }
      iVar1 = (**(code **)(*(int *)this + 0x30))(this,DAT_0002cacc,&local_7c);
      if (iVar1 < 0) {
        iVar5 = *(int *)(this + 4);
        if (iVar5 == 0) {
          iVar5 = DAT_0002cad0 + 0x2c85c;
        }
        iVar7 = DAT_0002cad4 + 0x2c868;
LAB_0002c864:
        xcam_print_log(0x18,0xff,1,iVar7,iVar5,param_3);
        return 0xfffffffd;
      }
      if (*(int *)(this + 0x14) - 9U < 2) {
        for (iVar1 = 0; iVar1 < *(int *)(this + 0x130); iVar1 = iVar1 + 1) {
          iVar8 = iVar1 * 0x3c;
          pvVar2 = mmap64((void *)0x0,*(size_t *)((int)pvStack_48 + iVar8 + 4),3,1,
                          *(int *)(this + 8),(ulonglong)*(uint *)((int)pvStack_48 + iVar8 + 8));
          *(void **)((int)pvStack_48 + iVar8 + 8) = pvVar2;
          if (pvVar2 == (void *)0xffffffff) {
            iVar5 = *(int *)(this + 4);
            if (iVar5 == 0) {
              iVar5 = DAT_0002cad8 + 0x2c900;
            }
            xcam_print_log(0x18,0xff,1,DAT_0002cadc + 0x2c918,iVar5,iVar1,param_3);
            return 0xfffffffd;
          }
        }
        pvVar6 = *(void **)((int)pvStack_48 + 8);
        pvVar2 = pvStack_48;
      }
      else {
        pvVar6 = mmap64((void *)0x0,local_44,3,1,*(int *)(this + 8),ZEXT48(pvStack_48));
        pvVar2 = pvVar6;
        if (pvVar6 == (void *)0xffffffff) {
          iVar5 = *(int *)(this + 4);
          if (iVar5 == 0) {
            iVar5 = DAT_0002caec + 0x2c9e8;
          }
          iVar7 = DAT_0002caf0 + 0x2c9f4;
          goto LAB_0002c864;
        }
      }
      pvStack_48 = pvVar2;
      uStack_a0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      local_bc = *(undefined4 *)(this + 0x14);
      local_a4 = 0;
      uStack_b0 = 0x80000;
      local_9c = 0;
      local_94 = 0;
      local_8c = 0;
      local_84 = 0;
      local_b8 = param_3;
      local_b4 = uVar9;
      local_ac = iVar5;
      uStack_a8 = uVar10;
      uStack_98 = uStack_a0;
      uStack_90 = uStack_a0;
      uStack_88 = uStack_a0;
      uStack_80 = uStack_a0;
      iVar1 = (**(code **)(*(int *)this + 0x30))(this,DAT_0002cae0,&local_bc);
      iVar5 = local_ac;
      if (iVar1 < 0) {
        iVar5 = *(int *)(this + 4);
        if (iVar5 == 0) {
          iVar5 = DAT_0002cae4 + 0x2c994;
        }
        iVar7 = DAT_0002cae8 + 0x2c9a0;
        goto LAB_0002c864;
      }
      goto LAB_0002ca50;
    }
    local_44 = *(size_t *)(param_2 + 0x18);
    if (uVar4 < 2) {
      local_44 = *(size_t *)(this + 0x130);
      for (iVar5 = 0; iVar5 < *(int *)(this + 0x130); iVar5 = iVar5 + 1) {
        *(undefined4 *)((int)pvStack_48 + iVar5 * 0x3c + 4) = *(undefined4 *)(param_2 + 0x18);
        *(undefined4 *)((int)pvStack_48 + iVar5 * 0x3c) = *(undefined4 *)(param_2 + 0x18);
      }
    }
  }
  pvVar6 = (void *)0x0;
  iVar5 = -1;
LAB_0002ca50:
  this_00 = operator_new(0x128);
  V4l2Buffer::V4l2Buffer(this_00,(v4l2_buffer *)&local_7c,(v4l2_format *)(this + 0x24));
  SmartPtr<XCam::V4l2Buffer>::release((SmartPtr<XCam::V4l2Buffer> *)param_1);
  *(V4l2Buffer **)param_1 = this_00;
  piVar3 = operator_new(8);
  piVar3[1] = 1;
  iVar7 = *(int *)(iVar7 + DAT_0002caf4);
  *(int **)(param_1 + 4) = piVar3;
  *piVar3 = iVar7 + 8;
  if (iVar5 != -1) {
    *(int *)(*(int *)param_1 + 0x118) = iVar5;
  }
  if (pvVar6 != (void *)0x0) {
    *(void **)(*(int *)param_1 + 0x11c) = pvVar6;
  }
  return 0;
}



/* ===== XCam::SmartPtr<XCam::V4l2Buffer>::operator= @ 0002caf8 size=136 ===== */

/* XCam::SmartPtr<XCam::V4l2Buffer>::TEMPNAMEPLACEHOLDERVALUE(XCam::SmartPtr<XCam::V4l2Buffer>
   const&) */

SmartPtr<XCam::V4l2Buffer> * __thiscall
XCam::SmartPtr<XCam::V4l2Buffer>::operator=(SmartPtr<XCam::V4l2Buffer> *this,SmartPtr *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  release(this);
  iVar4 = DAT_0002cb80 + 0x2cb1c;
  if (*(int *)param_1 != 0) {
    iVar2 = *(int *)(param_1 + 4);
    *(int *)this = *(int *)param_1;
    if (iVar2 == 0) {
      piVar3 = operator_new(8);
      piVar3[1] = 1;
      iVar4 = *(int *)(iVar4 + DAT_0002cb84);
      *(int **)(this + 4) = piVar3;
      *piVar3 = iVar4 + 8;
    }
    else {
      *(int *)(this + 4) = iVar2;
      piVar3 = (int *)(iVar2 + 4);
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = *piVar3 + 1;
      DataMemoryBarrier(0xb);
    }
  }
  return this;
}



/* ===== XCam::V4l2Device::dequeue_buffer @ 0002cb88 size=536 ===== */

/* XCam::V4l2Device::dequeue_buffer(XCam::SmartPtr<XCam::V4l2Buffer>&) */

undefined4 __thiscall XCam::V4l2Device::dequeue_buffer(V4l2Device *this,SmartPtr *param_1)

{
  undefined4 uVar1;
  int iVar2;
  size_t __n;
  int iVar3;
  int iVar4;
  int aiStack_80 [2];
  undefined1 auStack_78 [4];
  int local_74;
  V4l2Device *local_70;
  uint local_6c;
  int local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  int local_34;
  
  iVar4 = *(int *)(this + 0x130);
  __n = iVar4 * 0x3c;
  iVar3 = DAT_0002cdac + 0x2cbac;
  iVar2 = -(__n + 7 & 0xfffffff8);
  if (this[0xf8] == (V4l2Device)0x0) {
    uVar1 = 0xfffffffe;
  }
  else {
    memset(&local_6c,0,0x44);
    local_68 = *(int *)(this + 0x14);
    local_3c = *(undefined4 *)(this + 0x1c);
    if (local_68 - 9U < 2) {
      memset(auStack_78 + iVar2,0,__n);
      local_38 = auStack_78 + iVar2;
      local_34 = iVar4;
    }
    if (this[0x18] != (V4l2Device)0x0) {
      local_60 = 0x1800;
    }
    iVar4 = (**(code **)(*(int *)this + 0x30))(this,DAT_0002cdb0,&local_6c);
    if (iVar4 < 0) {
      iVar3 = *(int *)(this + 4);
      if (iVar3 == 0) {
        iVar3 = DAT_0002cdb4 + 0x2cc58;
      }
      *(int *)((int)aiStack_80 + iVar2) = iVar3;
      xcam_print_log(0x18,0xff,1,DAT_0002cdb8 + 0x2cc70);
      uVar1 = 0xfffffff7;
    }
    else if (*(uint *)(this + 0x108) < local_6c) {
      iVar3 = *(int *)(this + 4);
      if (iVar3 == 0) {
        iVar3 = DAT_0002cdbc + 0x2cca0;
      }
      *(int *)((int)aiStack_80 + iVar2) = iVar3;
      *(uint *)((int)aiStack_80 + iVar2 + 4) = local_6c;
      xcam_print_log(0x18,0xff,1,DAT_0002cdc0 + 0x2ccbc);
      uVar1 = 0xfffffffa;
    }
    else {
      local_74 = *(int *)(iVar3 + DAT_0002cdc4) + 8;
      local_70 = this + 0x110;
      pthread_mutex_lock((pthread_mutex_t *)(this + 0x114));
      SmartPtr<XCam::V4l2Buffer>::operator=
                ((SmartPtr<XCam::V4l2Buffer> *)param_1,
                 (SmartPtr *)(*(int *)(this + 0xfc) + local_6c * 8));
      iVar2 = *(int *)param_1;
      *(undefined4 *)(iVar2 + 0x18) = local_58;
      *(undefined4 *)(iVar2 + 0x1c) = uStack_54;
      iVar2 = *(int *)param_1;
      *(undefined4 *)(iVar2 + 0x20) = local_50;
      *(undefined4 *)(iVar2 + 0x24) = uStack_4c;
      *(undefined4 *)(iVar2 + 0x28) = uStack_48;
      *(undefined4 *)(iVar2 + 0x2c) = uStack_44;
      iVar2 = *(int *)param_1;
      *(undefined4 *)(iVar2 + 0x30) = local_40;
      if ((0xe < *(uint *)(this + 0x14)) ||
         ((~(0x55acU >> (*(uint *)(this + 0x14) & 0xff)) & 1) != 0)) {
        DataMemoryBarrier(0xb);
        *(undefined1 *)(iVar2 + 0x120) = 0;
        DataMemoryBarrier(0xb);
      }
      iVar2 = local_34;
      if (*(int *)(this + 0x14) - 9U < 2) {
        iVar2 = *(int *)(local_38 + 4);
      }
      *(int *)(*(int *)param_1 + 0x114) = iVar2;
      *(int *)(this + 0x10c) = *(int *)(this + 0x10c) + -1;
      SmartLock::~SmartLock((SmartLock *)&local_74);
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== XCam::V4l2Device::get_buffer @ 0002cdc8 size=288 ===== */

/* XCam::V4l2Device::get_buffer(XCam::SmartPtr<XCam::V4l2Buffer>&, int) const */

undefined4 __thiscall XCam::V4l2Device::get_buffer(V4l2Device *this,SmartPtr *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int local_18;
  V4l2Device *local_14;
  
  local_18 = *(int *)(DAT_0002cef4 + 0x2cde0 + DAT_0002cef8) + 8;
  local_14 = this + 0x110;
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x114));
  if (*(int *)(this + 0xfc) == *(int *)(this + 0x100)) {
LAB_0002ce10:
    uVar1 = 0xfffffffd;
  }
  else {
    if (param_2 == -1) {
LAB_0002ce30:
      for (uVar2 = 0; uVar2 < (uint)(*(int *)(this + 0x100) - *(int *)(this + 0xfc) >> 3);
          uVar2 = uVar2 + 1) {
        DataMemoryBarrier(0xb);
        DataMemoryBarrier(0xb);
        if (*(char *)(*(int *)(*(int *)(this + 0xfc) + uVar2 * 8) + 0x120) == '\0') {
          SmartPtr<XCam::V4l2Buffer>::operator=
                    ((SmartPtr<XCam::V4l2Buffer> *)param_1,
                     (SmartPtr *)(*(int *)(this + 0xfc) + uVar2 * 8));
          DataMemoryBarrier(0xb);
          *(undefined1 *)(*(int *)param_1 + 0x120) = 1;
          DataMemoryBarrier(0xb);
          break;
        }
      }
      if (*(uint *)(this + 0x108) == uVar2) goto LAB_0002ce10;
    }
    else {
      DataMemoryBarrier(0xb);
      DataMemoryBarrier(0xb);
      if (*(char *)(*(int *)(*(int *)(this + 0xfc) + param_2 * 8) + 0x120) != '\0')
      goto LAB_0002ce30;
      SmartPtr<XCam::V4l2Buffer>::operator=
                ((SmartPtr<XCam::V4l2Buffer> *)param_1,
                 (SmartPtr *)(*(int *)(this + 0xfc) + param_2 * 8));
      DataMemoryBarrier(0xb);
      *(undefined1 *)(*(int *)param_1 + 0x120) = 1;
      DataMemoryBarrier(0xb);
    }
    uVar1 = 0;
  }
  SmartLock::~SmartLock((SmartLock *)&local_18);
  return uVar1;
}



/* ===== std::_Destroy_aux<false>::__destroy<XCam::SmartPtr<XCam::V4l2Buffer>*> @ 0002cefc size=36 ===== */

/* void 
   std::_Destroy_aux<false>::__destroy<XCam::SmartPtr<XCam::V4l2Buffer>*>(XCam::SmartPtr<XCam::V4l2Buffer>*,
   XCam::SmartPtr<XCam::V4l2Buffer>*) */

void std::_Destroy_aux<false>::__destroy<XCam::SmartPtr<XCam::V4l2Buffer>*>
               (SmartPtr *param_1,SmartPtr *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 8) {
    XCam::SmartPtr<XCam::V4l2Buffer>::release((SmartPtr<XCam::V4l2Buffer> *)param_1);
  }
  return;
}



/* ===== XCam::V4l2Device::~V4l2Device @ 0002cf20 size=108 ===== */

/* XCam::V4l2Device::~V4l2Device() */

V4l2Device * __thiscall XCam::V4l2Device::~V4l2Device(V4l2Device *this)

{
  *(int *)this = *(int *)(DAT_0002cf8c + 0x2cf30 + DAT_0002cf90) + 8;
  close(this);
  if (*(int *)(this + 4) != 0) {
    xcam_free();
  }
  if (*(int *)(this + 0x20) != 0) {
    xcam_free();
  }
  Mutex::~Mutex((Mutex *)(this + 0x110));
  std::_Destroy_aux<false>::__destroy<XCam::SmartPtr<XCam::V4l2Buffer>*>
            (*(SmartPtr **)(this + 0xfc),*(SmartPtr **)(this + 0x100));
  if (*(void **)(this + 0xfc) != (void *)0x0) {
    operator_delete(*(void **)(this + 0xfc));
  }
  return this;
}



/* ===== XCam::V4l2Device::~V4l2Device @ 0002cf94 size=32 ===== */

/* XCam::V4l2Device::~V4l2Device() */

V4l2Device * __thiscall XCam::V4l2Device::~V4l2Device(V4l2Device *this)

{
  ~V4l2Device(this);
  operator_delete(this,0x134);
  return this;
}



/* ===== XCam::V4l2SubDevice::~V4l2SubDevice @ 0002cfb4 size=44 ===== */

/* XCam::V4l2SubDevice::~V4l2SubDevice() */

V4l2SubDevice * __thiscall XCam::V4l2SubDevice::~V4l2SubDevice(V4l2SubDevice *this)

{
  *(int *)this = *(int *)(DAT_0002cfe0 + 0x2cfc4 + DAT_0002cfe4) + 8;
  V4l2Device::~V4l2Device((V4l2Device *)this);
  return this;
}



/* ===== XCam::V4l2SubDevice::~V4l2SubDevice @ 0002cfe8 size=32 ===== */

/* XCam::V4l2SubDevice::~V4l2SubDevice() */

V4l2SubDevice * __thiscall XCam::V4l2SubDevice::~V4l2SubDevice(V4l2SubDevice *this)

{
  ~V4l2SubDevice(this);
  operator_delete(this,0x134);
  return this;
}



/* ===== std::vector<XCam::SmartPtr<XCam::V4l2Buffer>,std::allocator<XCam::SmartPtr<XCam::V4l2Buffer>>>::clear @ 0002d008 size=40 ===== */

/* std::vector<XCam::SmartPtr<XCam::V4l2Buffer>, std::allocator<XCam::SmartPtr<XCam::V4l2Buffer> >
   >::clear() */

void __thiscall
std::vector<XCam::SmartPtr<XCam::V4l2Buffer>,std::allocator<XCam::SmartPtr<XCam::V4l2Buffer>>>::
clear(vector<XCam::SmartPtr<XCam::V4l2Buffer>,std::allocator<XCam::SmartPtr<XCam::V4l2Buffer>>>
      *this)

{
  SmartPtr *pSVar1;
  
  pSVar1 = *(SmartPtr **)this;
  if (pSVar1 == *(SmartPtr **)(this + 4)) {
    return;
  }
  _Destroy_aux<false>::__destroy<XCam::SmartPtr<XCam::V4l2Buffer>*>(pSVar1,*(SmartPtr **)(this + 4))
  ;
  *(SmartPtr **)(this + 4) = pSVar1;
  return;
}



/* ===== XCam::V4l2Device::fini_buffer_pool @ 0002d030 size=404 ===== */

/* XCam::V4l2Device::fini_buffer_pool() */

undefined4 __thiscall XCam::V4l2Device::fini_buffer_pool(V4l2Device *this)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  for (uVar3 = 0; uVar1 = DAT_0002d1cc,
      uVar3 < (uint)(*(int *)(this + 0x100) - *(int *)(this + 0xfc) >> 3); uVar3 = uVar3 + 1) {
    (**(code **)(*(int *)this + 0x54))(this,*(int *)(this + 0xfc) + uVar3 * 8);
  }
  iVar2 = *(int *)(this + 0x1c);
  if (iVar2 == 1) {
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)(this + 0x14);
    iVar7 = DAT_0002d1c4 + 0x2d098;
    iVar6 = DAT_0002d1c8 + 0x2d0a0;
    local_34 = 0;
    local_28 = 0;
    iVar5 = 0;
    iStack_2c = iVar2;
    do {
      iVar2 = (**(code **)(*(int *)this + 0x30))(this,uVar1,&local_34);
      if (-1 < iVar2) break;
      usleep(100);
      iVar2 = *(int *)(this + 4);
      if (*(int *)(this + 4) == 0) {
        iVar2 = iVar7;
      }
      iVar4 = iVar5 + 1;
      xcam_print_log(0x18,0xff,1,iVar6,iVar2,iVar5);
      iVar5 = iVar4;
    } while (iVar4 != 0x33);
  }
  else if (iVar2 == 4) {
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)(this + 0x14);
    iVar7 = DAT_0002d1d0 + 0x2d154;
    iVar6 = DAT_0002d1d4 + 0x2d15c;
    local_34 = 0;
    local_28 = 0;
    iVar5 = 0;
    iStack_2c = iVar2;
    do {
      iVar2 = (**(code **)(*(int *)this + 0x30))(this,uVar1,&local_34);
      if (-1 < iVar2) break;
      usleep(100);
      iVar2 = *(int *)(this + 4);
      if (*(int *)(this + 4) == 0) {
        iVar2 = iVar7;
      }
      iVar4 = iVar5 + 1;
      xcam_print_log(0x18,0xff,1,iVar6,iVar2,iVar5);
      iVar5 = iVar4;
    } while (iVar4 != 0x33);
  }
  std::vector<XCam::SmartPtr<XCam::V4l2Buffer>,std::allocator<XCam::SmartPtr<XCam::V4l2Buffer>>>::
  clear((vector<XCam::SmartPtr<XCam::V4l2Buffer>,std::allocator<XCam::SmartPtr<XCam::V4l2Buffer>>> *
        )(this + 0xfc));
  if (*(int *)(this + 0x20) != 0) {
    xcam_free();
    *(undefined4 *)(this + 0x20) = 0;
  }
  return 0;
}



/* ===== XCam::V4l2Device::stop_freebuffer @ 0002d1d8 size=100 ===== */

/* XCam::V4l2Device::stop_freebuffer() */

undefined4 XCam::V4l2Device::stop_freebuffer(void)

{
  V4l2Device *in_r0;
  int local_18;
  V4l2Device *local_14;
  
  local_18 = *(int *)(DAT_0002d248 + 0x2d1e8 + DAT_0002d24c) + 8;
  local_14 = in_r0 + 0x110;
  pthread_mutex_lock((pthread_mutex_t *)(in_r0 + 0x114));
  if (*(int *)(in_r0 + 0x100) != *(int *)(in_r0 + 0xfc)) {
    fini_buffer_pool(in_r0);
  }
  SmartLock::~SmartLock((SmartLock *)&local_18);
  return 0;
}



/* ===== XCam::V4l2Device::stop @ 0002d250 size=144 ===== */

/* XCam::V4l2Device::stop() */

undefined4 XCam::V4l2Device::stop(void)

{
  V4l2Device *in_r0;
  int local_18;
  V4l2Device *local_14;
  
  local_18 = *(int *)(DAT_0002d2ec + 0x2d260 + DAT_0002d2f0) + 8;
  local_14 = in_r0 + 0x110;
  pthread_mutex_lock((pthread_mutex_t *)(in_r0 + 0x114));
  if (in_r0[0xf8] != (V4l2Device)0x0) {
    (**(code **)(*(int *)in_r0 + 0x30))();
    in_r0[0xf8] = (V4l2Device)0x0;
  }
  if (*(int *)(in_r0 + 0x100) != *(int *)(in_r0 + 0xfc)) {
    fini_buffer_pool(in_r0);
  }
  SmartLock::~SmartLock((SmartLock *)&local_18);
  return 0;
}



/* ===== std::vector<XCam::SmartPtr<XCam::V4l2Buffer>,std::allocator<XCam::SmartPtr<XCam::V4l2Buffer>>>::_M_realloc_insert<XCam::SmartPtr<XCam::V4l2Buffer>const&> @ 0002d2f8 size=264 ===== */

/* void std::vector<XCam::SmartPtr<XCam::V4l2Buffer>,
   std::allocator<XCam::SmartPtr<XCam::V4l2Buffer> >
   >::_M_realloc_insert<XCam::SmartPtr<XCam::V4l2Buffer>
   const&>(__gnu_cxx::__normal_iterator<XCam::SmartPtr<XCam::V4l2Buffer>*,
   std::vector<XCam::SmartPtr<XCam::V4l2Buffer>, std::allocator<XCam::SmartPtr<XCam::V4l2Buffer> > >
   >, XCam::SmartPtr<XCam::V4l2Buffer> const&) */

void __thiscall
std::vector<XCam::SmartPtr<XCam::V4l2Buffer>,std::allocator<XCam::SmartPtr<XCam::V4l2Buffer>>>::
_M_realloc_insert<XCam::SmartPtr<XCam::V4l2Buffer>const&>
          (vector<XCam::SmartPtr<XCam::V4l2Buffer>,std::allocator<XCam::SmartPtr<XCam::V4l2Buffer>>>
           *this,SmartPtr *param_2,SmartPtr *param_3)

{
  uint uVar1;
  SmartPtr<XCam::V4l2Buffer> *pSVar2;
  uint uVar3;
  SmartPtr<XCam::V4l2Buffer> *pSVar4;
  uint uVar5;
  SmartPtr *pSVar6;
  SmartPtr *pSVar7;
  SmartPtr *pSVar8;
  SmartPtr *pSVar9;
  
  pSVar6 = *(SmartPtr **)this;
  pSVar7 = *(SmartPtr **)(this + 4);
  uVar1 = (int)pSVar7 - (int)pSVar6 >> 3;
  uVar3 = uVar1;
  if (uVar1 == 0) {
    uVar3 = 1;
  }
  uVar5 = uVar1 + uVar3;
  if ((CARRY4(uVar1,uVar3)) || (0x1fffffff < uVar5)) {
    uVar5 = 0x1fffffff;
  }
  else if (uVar5 == 0) {
    pSVar2 = (SmartPtr<XCam::V4l2Buffer> *)0x0;
    goto LAB_0002d33c;
  }
  pSVar2 = operator_new(uVar5 << 3);
LAB_0002d33c:
  XCam::SmartPtr<XCam::V4l2Buffer>::SmartPtr(pSVar2 + ((int)param_2 - (int)pSVar6),param_3);
  pSVar4 = pSVar2;
  for (pSVar8 = pSVar6; param_2 != pSVar8; pSVar8 = pSVar8 + 8) {
    XCam::SmartPtr<XCam::V4l2Buffer>::SmartPtr(pSVar4,pSVar8);
    pSVar4 = pSVar4 + 8;
  }
  pSVar4 = pSVar2 + ((int)pSVar8 - (int)pSVar6 & 0xfffffff8U) + 8;
  for (pSVar9 = pSVar8; pSVar9 != pSVar7; pSVar9 = pSVar9 + 8) {
    XCam::SmartPtr<XCam::V4l2Buffer>::SmartPtr(pSVar4,pSVar9);
    pSVar4 = pSVar4 + 8;
  }
  _Destroy_aux<false>::__destroy<XCam::SmartPtr<XCam::V4l2Buffer>*>(pSVar6,pSVar9);
  if (pSVar6 != (SmartPtr *)0x0) {
    operator_delete(pSVar6);
  }
  *(SmartPtr<XCam::V4l2Buffer> **)this = pSVar2;
  *(SmartPtr<XCam::V4l2Buffer> **)(this + 4) =
       pSVar2 + ((int)pSVar8 - (int)pSVar6 & 0xfffffff8U) + 8 + ((int)pSVar9 - (int)pSVar8);
  *(SmartPtr<XCam::V4l2Buffer> **)(this + 8) = pSVar2 + uVar5 * 8;
  return;
}



/* ===== XCam::V4l2Device::init_buffer_pool @ 0002d400 size=400 ===== */

/* XCam::V4l2Device::init_buffer_pool() */

void __thiscall XCam::V4l2Device::init_buffer_pool(V4l2Device *this)

{
  SmartPtr<XCam::V4l2Buffer> *pSVar1;
  uint uVar2;
  SmartPtr<XCam::V4l2Buffer> *pSVar3;
  SmartPtr *pSVar4;
  int iVar5;
  SmartPtr *pSVar6;
  undefined4 local_30;
  undefined4 local_2c;
  
  std::vector<XCam::SmartPtr<XCam::V4l2Buffer>,std::allocator<XCam::SmartPtr<XCam::V4l2Buffer>>>::
  clear((vector<XCam::SmartPtr<XCam::V4l2Buffer>,std::allocator<XCam::SmartPtr<XCam::V4l2Buffer>>> *
        )(this + 0xfc));
  uVar2 = *(uint *)(this + 0x108);
  if (0x1fffffff < uVar2) {
    std::__throw_length_error((char *)(DAT_0002d59c + 0x2d430));
  }
  pSVar4 = *(SmartPtr **)(this + 0xfc);
  if ((uint)(*(int *)(this + 0x104) - (int)pSVar4 >> 3) < uVar2) {
    pSVar6 = *(SmartPtr **)(this + 0x100);
    iVar5 = (int)pSVar6 - (int)pSVar4;
    pSVar1 = (SmartPtr<XCam::V4l2Buffer> *)0x0;
    pSVar3 = pSVar1;
    if (uVar2 != 0) {
      pSVar1 = operator_new(uVar2 * 8);
      pSVar3 = pSVar1;
    }
    for (; pSVar6 != pSVar4; pSVar4 = pSVar4 + 8) {
      SmartPtr<XCam::V4l2Buffer>::SmartPtr(pSVar1,pSVar4);
      pSVar1 = pSVar1 + 8;
    }
    std::_Destroy_aux<false>::__destroy<XCam::SmartPtr<XCam::V4l2Buffer>*>
              (*(SmartPtr **)(this + 0xfc),*(SmartPtr **)(this + 0x100));
    if (*(void **)(this + 0xfc) != (void *)0x0) {
      operator_delete(*(void **)(this + 0xfc));
    }
    *(SmartPtr<XCam::V4l2Buffer> **)(this + 0xfc) = pSVar3;
    *(SmartPtr<XCam::V4l2Buffer> **)(this + 0x100) = pSVar3 + iVar5;
    *(SmartPtr<XCam::V4l2Buffer> **)(this + 0x104) = pSVar3 + uVar2 * 8;
  }
  uVar2 = 0;
  do {
    if (*(uint *)(this + 0x108) <= uVar2) {
LAB_0002d548:
      if (*(int *)(this + 0xfc) == *(int *)(this + 0x100)) {
        iVar5 = *(int *)(this + 4);
        if (iVar5 == 0) {
          iVar5 = DAT_0002d5a0 + 0x2d56c;
        }
        xcam_print_log(0x18,0xff,1,DAT_0002d5a4 + 0x2d584,iVar5);
      }
      return;
    }
    local_30 = 0;
    local_2c = 0;
    iVar5 = (**(code **)(*(int *)this + 0x50))(this,(SmartPtr *)&local_30,this + 0x24,uVar2);
    if (iVar5 != 0) {
      SmartPtr<XCam::V4l2Buffer>::release((SmartPtr<XCam::V4l2Buffer> *)&local_30);
      goto LAB_0002d548;
    }
    pSVar1 = *(SmartPtr<XCam::V4l2Buffer> **)(this + 0x100);
    if (pSVar1 == *(SmartPtr<XCam::V4l2Buffer> **)(this + 0x104)) {
      std::vector<XCam::SmartPtr<XCam::V4l2Buffer>,std::allocator<XCam::SmartPtr<XCam::V4l2Buffer>>>
      ::_M_realloc_insert<XCam::SmartPtr<XCam::V4l2Buffer>const&>
                ((vector<XCam::SmartPtr<XCam::V4l2Buffer>,std::allocator<XCam::SmartPtr<XCam::V4l2Buffer>>>
                  *)(this + 0xfc),pSVar1,(SmartPtr *)&local_30);
    }
    else {
      SmartPtr<XCam::V4l2Buffer>::SmartPtr(pSVar1,(SmartPtr *)&local_30);
      *(int *)(this + 0x100) = *(int *)(this + 0x100) + 8;
    }
    uVar2 = uVar2 + 1;
    SmartPtr<XCam::V4l2Buffer>::release((SmartPtr<XCam::V4l2Buffer> *)&local_30);
  } while( true );
}



/* ===== XCam::V4l2Device::prepare @ 0002d5a8 size=296 ===== */

/* XCam::V4l2Device::prepare() */

int XCam::V4l2Device::prepare(void)

{
  V4l2Device *in_r0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = request_buffer(in_r0);
  if (iVar1 == 0) {
    *(undefined4 *)(in_r0 + 0x10c) = 0;
    iVar1 = init_buffer_pool(in_r0);
    if (iVar1 == 0) {
      if ((*(uint *)(in_r0 + 0x14) < 0xf) &&
         ((~(0x55acU >> (*(uint *)(in_r0 + 0x14) & 0xff)) & 1) == 0)) {
        return 0;
      }
      if (*(int *)(in_r0 + 0x1c) == 4) {
        return 0;
      }
      uVar4 = 0;
      while( true ) {
        if (*(uint *)(in_r0 + 0x108) <= uVar4) {
          return 0;
        }
        iVar1 = (**(code **)(*(int *)in_r0 + 0x2c))();
        if (iVar1 != 0) break;
        uVar4 = uVar4 + 1;
      }
      iVar2 = *(int *)(in_r0 + 4);
      if (iVar2 == 0) {
        iVar2 = DAT_0002d6e0 + 0x2d698;
      }
      xcam_print_log(0x18,0xff,1,DAT_0002d6e4 + 0x2d6b4,iVar2,uVar4);
      (**(code **)(*(int *)in_r0 + 0x18))();
      return iVar1;
    }
    iVar2 = *(int *)(in_r0 + 4);
    if (iVar2 == 0) {
      iVar2 = DAT_0002d6d8 + 0x2d61c;
    }
    iVar3 = DAT_0002d6dc + 0x2d628;
  }
  else {
    iVar2 = *(int *)(in_r0 + 4);
    if (iVar2 == 0) {
      iVar2 = DAT_0002d6d0 + 0x2d5d0;
    }
    iVar3 = DAT_0002d6d4 + 0x2d5dc;
  }
  xcam_print_log(0x18,0xff,1,iVar3,iVar2);
  return iVar1;
}



/* ===== XCam::V4l2Device::start @ 0002d6e8 size=408 ===== */

/* XCam::V4l2Device::start(bool) */

int __thiscall XCam::V4l2Device::start(V4l2Device *this,bool param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  V4l2Device *pVVar6;
  
  uVar2 = (uint)param_1;
  pVVar6 = this;
  if (uVar2 == 0) {
    iVar1 = request_buffer(this);
    if (iVar1 == 0) {
      *(undefined4 *)(this + 0x10c) = 0;
      iVar1 = init_buffer_pool(this);
      if (iVar1 == 0) {
        if ((0xe < *(uint *)(this + 0x14)) ||
           ((~(0x55acU >> (*(uint *)(this + 0x14) & 0xff)) & 1) != 0)) {
          for (uVar5 = 0; uVar5 < *(uint *)(this + 0x108); uVar5 = uVar5 + 1) {
            iVar1 = (**(code **)(*(int *)this + 0x2c))(this,*(int *)(this + 0xfc) + uVar5 * 8,0);
            if (iVar1 != 0) {
              iVar3 = *(int *)(this + 4);
              if (iVar3 == 0) {
                iVar3 = DAT_0002d890 + 0x2d7d4;
              }
              xcam_print_log(0x18,0xff,1,DAT_0002d894 + 0x2d7ec,iVar3,uVar5);
              (**(code **)(*(int *)this + 0x18))(this);
              return iVar1;
            }
          }
        }
        goto LAB_0002d808;
      }
      iVar3 = *(int *)(this + 4);
      if (iVar3 == 0) {
        iVar3 = DAT_0002d888 + 0x2d764;
      }
      iVar4 = DAT_0002d88c + 0x2d770;
    }
    else {
      iVar3 = *(int *)(this + 4);
      if (iVar3 == 0) {
        iVar3 = DAT_0002d880 + 0x2d718;
      }
      iVar4 = DAT_0002d884 + 0x2d724;
    }
    xcam_print_log(0x18,0xff,1,iVar4,iVar3);
  }
  else {
LAB_0002d808:
    iVar1 = (**(code **)(*(int *)this + 0x30))
                      (this,DAT_0002d898,this + 0x14,*(code **)(*(int *)this + 0x30),pVVar6,uVar2);
    if (iVar1 < 0) {
      iVar3 = *(int *)(this + 4);
      if (iVar3 == 0) {
        iVar3 = DAT_0002d89c + 0x2d848;
      }
      iVar1 = -9;
      xcam_print_log(0x18,0xff,1,DAT_0002d8a0 + 0x2d86c,iVar3,*(undefined4 *)(this + 8));
      (**(code **)(*(int *)this + 0x18))(this);
    }
    else {
      iVar1 = 0;
      this[0xf8] = (V4l2Device)0x1;
    }
  }
  return iVar1;
}



/* ===== XCam::FakeV4l2Device::get_use_type @ 0002d8a4 size=8 ===== */

/* XCam::FakeV4l2Device::get_use_type() */

undefined4 __thiscall XCam::FakeV4l2Device::get_use_type(FakeV4l2Device *this)

{
  return *(undefined4 *)(this + 0x168);
}



/* ===== XCam::FakeV4l2Device::set_use_type @ 0002d8ac size=8 ===== */

/* XCam::FakeV4l2Device::set_use_type(int) */

void __thiscall XCam::FakeV4l2Device::set_use_type(FakeV4l2Device *this,int param_1)

{
  *(int *)(this + 0x168) = param_1;
  return;
}



/* ===== XCam::FakeV4l2Device::start @ 0002d8b4 size=16 ===== */

/* XCam::FakeV4l2Device::start(bool) */

undefined4 XCam::FakeV4l2Device::start(bool param_1)

{
  *(undefined1 *)(param_1 + 0xf8) = 1;
  return 0;
}



/* ===== XCam::FakeV4l2Device::get_format @ 0002d8c4 size=32 ===== */

/* XCam::FakeV4l2Device::get_format(v4l2_format&) */

undefined4 __thiscall XCam::FakeV4l2Device::get_format(FakeV4l2Device *this,v4l2_format *param_1)

{
  memcpy(param_1,this + 0x24,0xcc);
  return 0;
}



/* ===== XCam::FakeV4l2Device::poll_event @ 0002d8e4 size=176 ===== */

/* XCam::FakeV4l2Device::poll_event(int, int) */

int __thiscall XCam::FakeV4l2Device::poll_event(FakeV4l2Device *this,int param_1,int param_2)

{
  int iVar1;
  nfds_t __nfds;
  pollfd pStack_28;
  int iStack_20;
  
  if (param_2 == -1) {
    __nfds = 1;
  }
  else {
    __nfds = 2;
  }
  memset(&pStack_28 + -__nfds,0,__nfds * 8);
  (&pStack_28)[-__nfds].fd = *(int *)(this + 0x154);
  if (param_2 != -1) {
    (&iStack_20)[__nfds * -2] = param_2;
    *(undefined4 *)(&stack0xffffffe4 + __nfds * -8) = 7;
  }
  (&pStack_28)[-__nfds].events = 7;
  iVar1 = poll(&pStack_28 + -__nfds,__nfds,param_1);
  if (0 < iVar1) {
    if ((param_2 == -1) || ((*(ushort *)(&stack0xffffffe6 + __nfds * -8) & 3) == 0)) {
      if (((&pStack_28)[-__nfds].revents & 3U) != 0) {
        read(*(int *)(this + 0x154),&pStack_28,8);
      }
    }
    else {
      iVar1 = 3;
    }
  }
  return iVar1;
}



/* ===== XCam::FakeV4l2Device::destroy_notify_pipe @ 0002d994 size=60 ===== */

/* XCam::FakeV4l2Device::destroy_notify_pipe() */

void __thiscall XCam::FakeV4l2Device::destroy_notify_pipe(FakeV4l2Device *this)

{
  if ((*(int *)(this + 0x154) == -1) && (*(int *)(this + 0x158) == -1)) {
    return;
  }
  ::close(*(int *)(this + 0x154));
  ::close(*(int *)(this + 0x158));
  *(undefined4 *)(this + 0x154) = 0xffffffff;
  *(undefined4 *)(this + 0x158) = 0xffffffff;
  return;
}



/* ===== XCam::FakeV4l2Device::close @ 0002d9d0 size=48 ===== */

/* XCam::FakeV4l2Device::close() */

undefined4 __thiscall XCam::FakeV4l2Device::close(FakeV4l2Device *this)

{
  if (*(int *)(this + 8) != -1) {
    ::close(*(int *)(this + 8));
    *(undefined4 *)(this + 8) = 0xffffffff;
    destroy_notify_pipe(this);
  }
  return 0;
}



/* ===== XCam::FakeV4l2Device::create_notify_pipe @ 0002da00 size=192 ===== */

/* XCam::FakeV4l2Device::create_notify_pipe() */

int __thiscall XCam::FakeV4l2Device::create_notify_pipe(FakeV4l2Device *this)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  
  destroy_notify_pipe(this);
  iVar1 = pipe((int *)(this + 0x154));
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    iVar4 = DAT_0002dac0 + 0x2da34;
  }
  else {
    iVar1 = fcntl64(*(undefined4 *)(this + 0x154),4,0x800);
    if (iVar1 < 0) {
      piVar2 = __errno_location();
      pcVar3 = strerror(*piVar2);
      iVar4 = DAT_0002dac4 + 0x2da88;
    }
    else {
      iVar1 = fcntl64(*(undefined4 *)(this + 0x158),4,0x800);
      if (-1 < iVar1) {
        return iVar1;
      }
      piVar2 = __errno_location();
      pcVar3 = strerror(*piVar2);
      iVar4 = DAT_0002dac8 + 0x2dabc;
    }
  }
  xcam_print_log(0x18,0xff,1,iVar4,pcVar3);
  destroy_notify_pipe(this);
  return iVar1;
}



/* ===== XCam::FakeV4l2Device::open @ 0002dacc size=152 ===== */

/* XCam::FakeV4l2Device::open(bool) */

undefined4 XCam::FakeV4l2Device::open(bool param_1)

{
  FakeV4l2Device *this;
  undefined4 uVar1;
  int iVar2;
  undefined4 in_r2;
  
  this = (FakeV4l2Device *)(uint)param_1;
  if (*(int *)(this + 8) == -1) {
    if (*(char **)(this + 4) != (char *)0x0) {
      iVar2 = open64(*(char **)(this + 4),2,in_r2,0xffffffff,this);
      *(int *)(this + 8) = iVar2;
      if (iVar2 == -1) {
        xcam_print_log(0x18,0xff,1,DAT_0002db64 + 0x2db2c,*(undefined4 *)(this + 4));
        return 0xfffffff7;
      }
      iVar2 = create_notify_pipe(this);
      if (-1 < iVar2) goto LAB_0002dadc;
      xcam_print_log(0x18,0xff,1,DAT_0002db68 + 0x2db5c);
    }
    uVar1 = 0xfffffffe;
  }
  else {
LAB_0002dadc:
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== XCam::FakeV4l2Device::enqueue_rawbuffer @ 0002db6c size=108 ===== */

/* XCam::FakeV4l2Device::enqueue_rawbuffer(rk_aiq_vbuf_info*) */

void __thiscall
XCam::FakeV4l2Device::enqueue_rawbuffer(FakeV4l2Device *this,rk_aiq_vbuf_info *param_1)

{
  _List_node_base *p_Var1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_1 == (rk_aiq_vbuf_info *)0x0) {
    return;
  }
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x138));
  p_Var1 = operator_new(0x34);
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(p_Var1 + 8) = *(undefined4 *)param_1;
  *(undefined4 *)(p_Var1 + 0xc) = uVar2;
  *(undefined4 *)(p_Var1 + 0x10) = uVar3;
  *(undefined4 *)(p_Var1 + 0x14) = uVar4;
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(p_Var1 + 0x18) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(p_Var1 + 0x1c) = uVar2;
  *(undefined4 *)(p_Var1 + 0x20) = uVar3;
  *(undefined4 *)(p_Var1 + 0x24) = uVar4;
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(p_Var1 + 0x28) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(p_Var1 + 0x2c) = uVar2;
  *(undefined4 *)(p_Var1 + 0x30) = uVar3;
  std::__detail::_List_node_base::_M_hook(p_Var1);
  *(int *)(this + 0x164) = *(int *)(this + 0x164) + 1;
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x138));
  return;
}



/* ===== XCam::FakeV4l2Device::on_timer_proc @ 0002dbd8 size=104 ===== */

/* XCam::FakeV4l2Device::on_timer_proc() */

void XCam::FakeV4l2Device::on_timer_proc(void)

{
  int in_r0;
  ssize_t sVar1;
  undefined1 local_9 [5];
  
  if (((*(int *)(in_r0 + 0x15c) != in_r0 + 0x15c) && (*(int *)(in_r0 + 0x10c) != 0)) &&
     (*(int *)(in_r0 + 0x158) != -1)) {
    sVar1 = write(*(int *)(in_r0 + 0x158),local_9,1);
    if (sVar1 != 1) {
      xcam_print_log(0x18,0xff,1,DAT_0002dc40 + 0x2dc38);
    }
  }
  return;
}



/* ===== std::__cxx11::_List_base<rk_aiq_vbuf_info,std::allocator<rk_aiq_vbuf_info>>::_M_clear @ 0002dc44 size=36 ===== */

/* std::__cxx11::_List_base<rk_aiq_vbuf_info, std::allocator<rk_aiq_vbuf_info> >::_M_clear() */

void __thiscall
std::__cxx11::_List_base<rk_aiq_vbuf_info,std::allocator<rk_aiq_vbuf_info>>::_M_clear
          (_List_base<rk_aiq_vbuf_info,std::allocator<rk_aiq_vbuf_info>> *this)

{
  _List_base<rk_aiq_vbuf_info,std::allocator<rk_aiq_vbuf_info>> *p_Var1;
  _List_base<rk_aiq_vbuf_info,std::allocator<rk_aiq_vbuf_info>> *p_Var2;
  
  p_Var1 = *(_List_base<rk_aiq_vbuf_info,std::allocator<rk_aiq_vbuf_info>> **)this;
  while (this != p_Var1) {
    p_Var2 = *(_List_base<rk_aiq_vbuf_info,std::allocator<rk_aiq_vbuf_info>> **)p_Var1;
    operator_delete(p_Var1);
    p_Var1 = p_Var2;
  }
  return;
}



/* ===== XCam::FakeV4l2Device::stop @ 0002dc68 size=48 ===== */

/* XCam::FakeV4l2Device::stop() */

undefined4 __thiscall XCam::FakeV4l2Device::stop(FakeV4l2Device *this)

{
  _List_base<rk_aiq_vbuf_info,std::allocator<rk_aiq_vbuf_info>> *this_00;
  
  this_00 = (_List_base<rk_aiq_vbuf_info,std::allocator<rk_aiq_vbuf_info>> *)(this + 0x15c);
  this[0xf8] = (FakeV4l2Device)0x0;
  std::__cxx11::_List_base<rk_aiq_vbuf_info,std::allocator<rk_aiq_vbuf_info>>::_M_clear(this_00);
  *(_List_base<rk_aiq_vbuf_info,std::allocator<rk_aiq_vbuf_info>> **)(this + 0x160) = this_00;
  *(_List_base<rk_aiq_vbuf_info,std::allocator<rk_aiq_vbuf_info>> **)(this + 0x15c) = this_00;
  *(undefined4 *)(this + 0x164) = 0;
  return 0;
}



/* ===== XCam::FakeV4l2Device::~FakeV4l2Device @ 0002dc98 size=60 ===== */

/* XCam::FakeV4l2Device::~FakeV4l2Device() */

FakeV4l2Device * __thiscall XCam::FakeV4l2Device::~FakeV4l2Device(FakeV4l2Device *this)

{
  *(int *)this = *(int *)(DAT_0002dcd4 + 0x2dca8 + DAT_0002dcd8) + 8;
  std::__cxx11::_List_base<rk_aiq_vbuf_info,std::allocator<rk_aiq_vbuf_info>>::_M_clear
            ((_List_base<rk_aiq_vbuf_info,std::allocator<rk_aiq_vbuf_info>> *)(this + 0x15c));
  Mutex::~Mutex((Mutex *)(this + 0x134));
  V4l2Device::~V4l2Device((V4l2Device *)this);
  return this;
}



/* ===== XCam::FakeV4l2Device::~FakeV4l2Device @ 0002dcdc size=32 ===== */

/* XCam::FakeV4l2Device::~FakeV4l2Device() */

FakeV4l2Device * __thiscall XCam::FakeV4l2Device::~FakeV4l2Device(FakeV4l2Device *this)

{
  ~FakeV4l2Device(this);
  operator_delete(this,0x16c);
  return this;
}



/* ===== XCam::FakeV4l2Device::dequeue_buffer @ 0002dcfc size=684 ===== */

/* XCam::FakeV4l2Device::dequeue_buffer(XCam::SmartPtr<XCam::V4l2Buffer>&) */

undefined4 __thiscall XCam::FakeV4l2Device::dequeue_buffer(FakeV4l2Device *this,SmartPtr *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_a8;
  FakeV4l2Device *local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  uint local_64;
  int local_60;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 local_24;
  
  iVar5 = DAT_0002dfb4 + 0x2dd1c;
  if (this[0xf8] == (FakeV4l2Device)0x0) {
    iVar5 = *(int *)(this + 4);
    if (iVar5 == 0) {
      iVar5 = DAT_0002dfb8 + 0x2dd30;
    }
    xcam_print_log(0x18,0xff,1,DAT_0002dfbc + 0x2dd48,iVar5);
    uVar2 = 0xfffffffe;
  }
  else {
    memset(&local_64,0,0x44);
    local_60 = *(int *)(this + 0x14);
    local_34 = *(undefined4 *)(this + 0x1c);
    if (local_60 - 9U < 2) {
      uStack_9c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      local_98 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_94 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_30 = &local_a0;
      local_a0 = 0;
      local_2c = 1;
      local_70 = 0;
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      uStack_6c = 0;
      uStack_8c = uStack_9c;
      uStack_84 = uStack_9c;
      uStack_7c = uStack_9c;
      uStack_74 = uStack_9c;
      uStack_68 = uStack_9c;
    }
    iVar3 = (**(code **)(*(int *)this + 0x30))(this,DAT_0002dfc0,&local_64);
    if (iVar3 < 0) {
      iVar5 = *(int *)(this + 4);
      if (iVar5 == 0) {
        iVar5 = DAT_0002dfc4 + 0x2ddec;
      }
      xcam_print_log(0x18,0xff,1,DAT_0002dfc8 + 0x2de04,iVar5);
      uVar2 = 0xfffffff7;
    }
    else if (local_64 < *(uint *)(this + 0x108)) {
      local_a8 = *(int *)(iVar5 + DAT_0002dfd4) + 8;
      local_a4 = this + 0x110;
      pthread_mutex_lock((pthread_mutex_t *)(this + 0x114));
      iVar6 = *(int *)(this + 0xfc);
      SmartPtr<XCam::V4l2Buffer>::release((SmartPtr<XCam::V4l2Buffer> *)param_1);
      iVar3 = *(int *)(iVar6 + local_64 * 8);
      if (iVar3 != 0) {
        iVar6 = *(int *)(iVar6 + local_64 * 8 + 4);
        *(int *)param_1 = iVar3;
        if (iVar6 == 0) {
          piVar4 = operator_new(8);
          piVar4[1] = 1;
          iVar5 = *(int *)(iVar5 + DAT_0002dfd8);
          *(int **)(param_1 + 4) = piVar4;
          *piVar4 = iVar5 + 8;
        }
        else {
          *(int *)(param_1 + 4) = iVar6;
          piVar4 = (int *)(iVar6 + 4);
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar1);
          *piVar4 = *piVar4 + 1;
          DataMemoryBarrier(0xb);
        }
      }
      iVar5 = *(int *)param_1;
      *(undefined4 *)(iVar5 + 0x18) = local_50;
      *(undefined4 *)(iVar5 + 0x1c) = uStack_4c;
      iVar5 = *(int *)param_1;
      *(undefined4 *)(iVar5 + 0x20) = local_48;
      *(undefined4 *)(iVar5 + 0x24) = uStack_44;
      *(undefined4 *)(iVar5 + 0x28) = uStack_40;
      *(undefined4 *)(iVar5 + 0x2c) = uStack_3c;
      iVar5 = *(int *)param_1;
      *(undefined4 *)(iVar5 + 0x30) = local_38;
      if ((0xe < *(uint *)(iVar5 + 8)) || ((~(0x55acU >> (*(uint *)(iVar5 + 8) & 0xff)) & 1) != 0))
      {
        DataMemoryBarrier(0xb);
        *(undefined1 *)(iVar5 + 0x120) = 0;
        DataMemoryBarrier(0xb);
      }
      iVar5 = *(int *)param_1;
      if (*(int *)(this + 0x14) - 9U < 2) {
        *(undefined4 *)(iVar5 + 0x114) = local_30[1];
        *(undefined4 *)(iVar5 + 0x11c) = local_30[2];
        *(undefined4 *)(iVar5 + 0x118) = local_24;
      }
      else {
        *(undefined4 *)(iVar5 + 0x114) = local_2c;
      }
      *(int *)(this + 0x10c) = *(int *)(this + 0x10c) + -1;
      SmartLock::~SmartLock((SmartLock *)&local_a8);
      uVar2 = 0;
    }
    else {
      iVar5 = *(int *)(this + 4);
      if (iVar5 == 0) {
        iVar5 = DAT_0002dfcc + 0x2de30;
      }
      xcam_print_log(0x18,0xff,1,DAT_0002dfd0 + 0x2de4c,iVar5,local_64);
      uVar2 = 0xfffffffa;
    }
  }
  return uVar2;
}



/* ===== XCam::FakeV4l2Device::get_available_buffer_index @ 0002dfdc size=236 ===== */

/* XCam::FakeV4l2Device::get_available_buffer_index() */

uint XCam::FakeV4l2Device::get_available_buffer_index(void)

{
  bool bVar1;
  int in_r0;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int local_30;
  int *local_2c;
  
  local_30 = 0;
  local_2c = (int *)0x0;
  pthread_mutex_lock((pthread_mutex_t *)(in_r0 + 0x114));
  iVar6 = DAT_0002e0d4 + 0x2e010;
  for (uVar5 = 0; uVar5 < *(uint *)(in_r0 + 0x108); uVar5 = uVar5 + 1) {
    iVar7 = *(int *)(in_r0 + 0xfc);
    SmartPtr<XCam::V4l2Buffer>::release((SmartPtr<XCam::V4l2Buffer> *)&local_30);
    iVar2 = *(int *)(iVar7 + uVar5 * 8);
    if (iVar2 != 0) {
      piVar3 = *(int **)(iVar7 + uVar5 * 8 + 4);
      local_30 = iVar2;
      if (piVar3 == (int *)0x0) {
        local_2c = operator_new(8);
        iVar2 = DAT_0002e0d8;
        local_2c[1] = 1;
        *local_2c = *(int *)(iVar6 + iVar2) + 8;
      }
      else {
        piVar4 = piVar3 + 1;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar1);
        *piVar4 = *piVar4 + 1;
        DataMemoryBarrier(0xb);
        local_2c = piVar3;
      }
    }
    DataMemoryBarrier(0xb);
    DataMemoryBarrier(0xb);
    if (*(char *)(local_30 + 0x120) != '\0') break;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(in_r0 + 0x114));
  SmartPtr<XCam::V4l2Buffer>::release((SmartPtr<XCam::V4l2Buffer> *)&local_30);
  return uVar5;
}



/* ===== XCam::FakeV4l2Device::io_control @ 0002e0dc size=184 ===== */

/* XCam::FakeV4l2Device::io_control(unsigned long, void*) */

undefined4 __thiscall
XCam::FakeV4l2Device::io_control(FakeV4l2Device *this,ulong param_1,void *param_2)

{
  undefined4 uVar1;
  FakeV4l2Device *pFVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (0 < *(int *)(this + 8)) {
    if (param_1 == DAT_0002e194) {
      uVar1 = get_available_buffer_index();
      *(undefined4 *)param_2 = uVar1;
      pthread_mutex_lock((pthread_mutex_t *)(this + 0x138));
      pFVar2 = *(FakeV4l2Device **)(this + 0x15c);
      if (pFVar2 != this + 0x15c) {
        uVar1 = *(undefined4 *)(pFVar2 + 0x28);
        uVar5 = *(undefined4 *)(pFVar2 + 8);
        uVar3 = *(undefined4 *)(pFVar2 + 0x20);
        uVar4 = *(undefined4 *)(pFVar2 + 0x24);
        *(int *)(this + 0x164) = *(int *)(this + 0x164) + -1;
        std::__detail::_List_node_base::_M_unhook();
        operator_delete(pFVar2);
        *(undefined4 *)(*(int *)((int)param_2 + 0x34) + 4) = uVar1;
        **(undefined4 **)((int)param_2 + 0x34) = uVar1;
        *(undefined4 *)((int)param_2 + 0x2c) = uVar5;
        *(undefined4 *)(*(int *)((int)param_2 + 0x34) + 8) = uVar4;
        *(undefined4 *)((int)param_2 + 0x40) = uVar3;
        gettimeofday((timeval *)((int)param_2 + 0x14),(__timezone_ptr_t)0x0);
      }
      pthread_mutex_unlock((pthread_mutex_t *)(this + 0x138));
    }
    return 0;
  }
  return 0xffffffff;
}



/* ===== XCam::RefObj::is_a_object @ 0002e198 size=8 ===== */

/* XCam::RefObj::is_a_object() const */

undefined4 XCam::RefObj::is_a_object(void)

{
  return 1;
}



/* ===== XCam::BufferProxy::map @ 0002e1a0 size=16 ===== */

/* XCam::BufferProxy::map() */

void __thiscall XCam::BufferProxy::map(BufferProxy *this)

{
                    /* WARNING: Could not recover jumptable at 0x0002e1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(this + 0x74) + 8))();
  return;
}



/* ===== XCam::BufferProxy::unmap @ 0002e1b0 size=16 ===== */

/* XCam::BufferProxy::unmap() */

void __thiscall XCam::BufferProxy::unmap(BufferProxy *this)

{
                    /* WARNING: Could not recover jumptable at 0x0002e1bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(this + 0x74) + 0xc))();
  return;
}



/* ===== XCam::BufferProxy::get_fd @ 0002e1c0 size=16 ===== */

/* XCam::BufferProxy::get_fd() */

void __thiscall XCam::BufferProxy::get_fd(BufferProxy *this)

{
                    /* WARNING: Could not recover jumptable at 0x0002e1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(this + 0x74) + 0x10))();
  return;
}



/* ===== XCam::BufferPool::fixate_video_info @ 0002e1d0 size=8 ===== */

/* XCam::BufferPool::fixate_video_info(XCam::VideoBufferInfo&) */

undefined4 XCam::BufferPool::fixate_video_info(VideoBufferInfo *param_1)

{
  return 1;
}



/* ===== FUN_0002e1d8 @ 0002e1d8 size=48 ===== */

void FUN_0002e1d8(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = operator_new(8);
  iVar2 = DAT_0002e208 + 0x2e1f4;
  piVar1[1] = 1;
  *piVar1 = *(int *)(iVar2 + DAT_0002e20c) + 8;
  return;
}



/* ===== XCam::BufferPool::BufferPool @ 0002e210 size=172 ===== */

/* XCam::BufferPool::BufferPool() */

BufferPool * __thiscall XCam::BufferPool::BufferPool(BufferPool *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0002e2cc;
  iVar1 = DAT_0002e2c8 + 0x2e220;
  *(undefined4 *)(this + 4) = 0;
  *(int *)this = *(int *)(iVar1 + iVar2) + 8;
  iVar2 = *(int *)(iVar1 + DAT_0002e2d0);
  *(int *)(this + 8) = iVar2 + 8;
  this[0x24] = (BufferPool)0x1;
  pthread_mutex_init((pthread_mutex_t *)(this + 0xc),(pthread_mutexattr_t *)0x0);
  VideoBufferInfo::VideoBufferInfo((VideoBufferInfo *)(this + 0x28));
  *(undefined4 *)(this + 0x70) = 0;
  *(BufferPool **)(this + 0x6c) = this + 0x68;
  *(BufferPool **)(this + 0x68) = this + 0x68;
  *(int *)(this + 0x74) = iVar2 + 8;
  this[0x90] = (BufferPool)0x1;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x78),(pthread_mutexattr_t *)0x0);
  this[200] = (BufferPool)0x1;
  pthread_cond_init((pthread_cond_t *)(this + 0x98),(pthread_condattr_t *)0x0);
  this[0xd0] = (BufferPool)0x0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  this[0xe0] = (BufferPool)0x0;
  return this;
}



/* ===== XCam::BufferPool::update_video_info_unsafe @ 0002e2d4 size=48 ===== */

/* XCam::BufferPool::update_video_info_unsafe(XCam::VideoBufferInfo const&) */

void __thiscall
XCam::BufferPool::update_video_info_unsafe(BufferPool *this,VideoBufferInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x2c) = uVar1;
  *(undefined4 *)(this + 0x30) = uVar2;
  *(undefined4 *)(this + 0x34) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x3c) = uVar1;
  *(undefined4 *)(this + 0x40) = uVar2;
  *(undefined4 *)(this + 0x44) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x4c) = uVar1;
  *(undefined4 *)(this + 0x50) = uVar2;
  *(undefined4 *)(this + 0x54) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x5c) = uVar1;
  *(undefined4 *)(this + 0x60) = uVar2;
  *(undefined4 *)(this + 100) = uVar3;
  return;
}



/* ===== XCam::BufferPool::set_video_info @ 0002e304 size=192 ===== */

/* XCam::BufferPool::set_video_info(XCam::VideoBufferInfo const&) */

int __thiscall XCam::BufferPool::set_video_info(BufferPool *this,VideoBufferInfo *param_1)

{
  int iVar1;
  int local_60;
  BufferPool *local_5c;
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
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_58 = *(undefined4 *)param_1;
  uStack_54 = *(undefined4 *)(param_1 + 4);
  uStack_50 = *(undefined4 *)(param_1 + 8);
  uStack_4c = *(undefined4 *)(param_1 + 0xc);
  local_48 = *(undefined4 *)(param_1 + 0x10);
  uStack_44 = *(undefined4 *)(param_1 + 0x14);
  uStack_40 = *(undefined4 *)(param_1 + 0x18);
  uStack_3c = *(undefined4 *)(param_1 + 0x1c);
  local_38 = *(undefined4 *)(param_1 + 0x20);
  uStack_34 = *(undefined4 *)(param_1 + 0x24);
  uStack_30 = *(undefined4 *)(param_1 + 0x28);
  uStack_2c = *(undefined4 *)(param_1 + 0x2c);
  local_28 = *(undefined4 *)(param_1 + 0x30);
  uStack_24 = *(undefined4 *)(param_1 + 0x34);
  uStack_20 = *(undefined4 *)(param_1 + 0x38);
  uStack_1c = *(undefined4 *)(param_1 + 0x3c);
  local_60 = *(int *)(DAT_0002e3d0 + 0x2e32c + DAT_0002e3d4) + 8;
  local_5c = this + 8;
  pthread_mutex_lock((pthread_mutex_t *)(this + 0xc));
  iVar1 = (**(code **)(*(int *)this + 0xc))(this,(VideoBufferInfo *)&local_58);
  if (iVar1 == 0) {
    xcam_print_log(0x18,0xff,1,DAT_0002e3d8 + 0x2e39c);
  }
  else {
    update_video_info_unsafe(this,(VideoBufferInfo *)&local_58);
  }
  SmartLock::~SmartLock((SmartLock *)&local_60);
  return iVar1;
}



/* ===== XCam::BufferPool::stop @ 0002e3dc size=120 ===== */

/* XCam::BufferPool::stop() */

void __thiscall XCam::BufferPool::stop(BufferPool *this)

{
  int iVar1;
  int local_18;
  BufferPool *local_14;
  
  local_14 = this + 8;
  iVar1 = *(int *)(DAT_0002e454 + 0x2e3ec + DAT_0002e458) + 8;
  local_18 = iVar1;
  pthread_mutex_lock((pthread_mutex_t *)(this + 0xc));
  this[0xe0] = (BufferPool)0x0;
  SmartLock::~SmartLock((SmartLock *)&local_18);
  local_14 = this + 0x74;
  local_18 = iVar1;
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x78));
  this[0xd0] = (BufferPool)0x1;
  pthread_cond_broadcast((pthread_cond_t *)(this + 0x98));
  SmartLock::~SmartLock((SmartLock *)&local_18);
  return;
}



/* ===== XCam::SmartPtr<XCam::BufferData>::SmartPtr @ 0002e45c size=48 ===== */

/* XCam::SmartPtr<XCam::BufferData>::SmartPtr(XCam::SmartPtr<XCam::BufferData> const&) */

SmartPtr<XCam::BufferData> * __thiscall
XCam::SmartPtr<XCam::BufferData>::SmartPtr(SmartPtr<XCam::BufferData> *this,SmartPtr *param_1)

{
  int iVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  iVar1 = *(int *)(param_1 + 4);
  *(int *)(this + 4) = iVar1;
  if (iVar1 != 0) {
    std::__atomic_base<unsigned_int>::operator++((__atomic_base<unsigned_int> *)(iVar1 + 4));
  }
  return this;
}



/* ===== XCam::BufferProxy::BufferProxy @ 0002e48c size=156 ===== */

/* XCam::BufferProxy::BufferProxy(XCam::VideoBufferInfo const&, XCam::SmartPtr<XCam::BufferData>
   const&) */

BufferProxy * __thiscall
XCam::BufferProxy::BufferProxy(BufferProxy *this,VideoBufferInfo *param_1,SmartPtr *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  *(undefined4 *)(this + 0x10) = 0;
  *(BufferProxy **)(this + 0xc) = this + 8;
  *(BufferProxy **)(this + 8) = this + 8;
  *(undefined4 *)(this + 0x1c) = 0;
  *(BufferProxy **)(this + 0x18) = this + 0x14;
  *(BufferProxy **)(this + 0x14) = this + 0x14;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  iVar5 = DAT_0002e528 + 0x2e4d8;
  *(undefined4 *)(this + 0x20) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x24) = uVar2;
  *(undefined4 *)(this + 0x28) = uVar3;
  *(undefined4 *)(this + 0x2c) = uVar4;
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x34) = uVar2;
  *(undefined4 *)(this + 0x38) = uVar3;
  *(undefined4 *)(this + 0x3c) = uVar4;
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x44) = uVar2;
  *(undefined4 *)(this + 0x48) = uVar3;
  *(undefined4 *)(this + 0x4c) = uVar4;
  uVar2 = *(undefined4 *)(param_1 + 0x34);
  uVar3 = *(undefined4 *)(param_1 + 0x38);
  uVar4 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x54) = uVar2;
  *(undefined4 *)(this + 0x58) = uVar3;
  *(undefined4 *)(this + 0x5c) = uVar4;
  *(undefined8 *)(this + 0x60) = 0xffffffffffffffff;
  iVar1 = DAT_0002e52c;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(int *)this = *(int *)(iVar5 + iVar1) + 8;
  SmartPtr<XCam::BufferData>::SmartPtr((SmartPtr<XCam::BufferData> *)(this + 0x74),param_2);
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  return this;
}



/* ===== XCam::BufferPool::create_buffer_from_data @ 0002e530 size=72 ===== */

/* XCam::BufferPool::create_buffer_from_data(XCam::SmartPtr<XCam::BufferData>&) */

SmartPtr * XCam::BufferPool::create_buffer_from_data(SmartPtr *param_1)

{
  BufferProxy *this;
  undefined4 uVar1;
  int in_r1;
  SmartPtr *in_r2;
  
  this = operator_new(0x88);
  BufferProxy::BufferProxy(this,(VideoBufferInfo *)(in_r1 + 0x28),in_r2);
  *(BufferProxy **)param_1 = this;
  *(undefined4 *)(param_1 + 4) = 0;
  uVar1 = FUN_0002e1d8();
  *(undefined4 *)(param_1 + 4) = uVar1;
  return param_1;
}



/* ===== XCam::BufferPool::~BufferPool @ 0002e588 size=120 ===== */

/* XCam::BufferPool::~BufferPool() */

BufferPool * __thiscall XCam::BufferPool::~BufferPool(BufferPool *this)

{
  BufferPool *pBVar1;
  BufferPool *pBVar2;
  
  *(int *)this = *(int *)(DAT_0002e600 + 0x2e598 + DAT_0002e604) + 8;
  if (this[200] != (BufferPool)0x0) {
    pthread_cond_destroy((pthread_cond_t *)(this + 0x98));
  }
  Mutex::~Mutex((Mutex *)(this + 0x74));
  pBVar1 = *(BufferPool **)(this + 0x68);
  while (this + 0x68 != pBVar1) {
    pBVar2 = *(BufferPool **)pBVar1;
    SmartPtr<XCam::BufferData>::release((SmartPtr<XCam::BufferData> *)(pBVar1 + 8));
    operator_delete(pBVar1);
    pBVar1 = pBVar2;
  }
  Mutex::~Mutex((Mutex *)(this + 8));
  return this;
}



/* ===== XCam::BufferPool::~BufferPool @ 0002e608 size=32 ===== */

/* XCam::BufferPool::~BufferPool() */

BufferPool * __thiscall XCam::BufferPool::~BufferPool(BufferPool *this)

{
  ~BufferPool(this);
  operator_delete(this,0xe8);
  return this;
}



/* ===== XCam::SafeList<XCam::BufferData>::push @ 0002e628 size=136 ===== */

/* XCam::SafeList<XCam::BufferData>::push(XCam::SmartPtr<XCam::BufferData> const&) */

undefined4 XCam::SafeList<XCam::BufferData>::push(SmartPtr *param_1)

{
  _List_node_base *p_Var1;
  SmartPtr *in_r1;
  int local_20;
  SmartPtr *local_1c;
  
  local_20 = *(int *)(DAT_0002e6bc + 0x2e638 + DAT_0002e6c0) + 8;
  local_1c = param_1 + 0xc;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x10));
  p_Var1 = operator_new(0x10);
  SmartPtr<XCam::BufferData>::SmartPtr((SmartPtr<XCam::BufferData> *)(p_Var1 + 8),in_r1);
  std::__detail::_List_node_base::_M_hook(p_Var1);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  pthread_cond_signal((pthread_cond_t *)(param_1 + 0x30));
  SmartLock::~SmartLock((SmartLock *)&local_20);
  return 1;
}



/* ===== XCam::BufferPool::reserve @ 0002e6c4 size=228 ===== */

/* XCam::BufferPool::reserve(unsigned int) */

bool XCam::BufferPool::reserve(uint param_1)

{
  uint in_r1;
  int in_r2;
  uint uVar1;
  int local_28;
  int local_24;
  int local_20 [2];
  
  local_28 = *(int *)(DAT_0002e7c0 + 0x2e6e4 + DAT_0002e7c4) + 8;
  local_24 = param_1 + 8;
  local_20[0] = in_r2;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xc));
  uVar1 = *(uint *)(param_1 + 0xd8);
  do {
    if (in_r1 <= uVar1) {
LAB_0002e754:
      if (uVar1 != 0) {
        *(uint *)(param_1 + 0xdc) = uVar1;
        *(uint *)(param_1 + 0xd8) = uVar1;
        *(undefined1 *)(param_1 + 0xe0) = 1;
      }
      else {
        xcam_print_log(0x18,0xff,1,DAT_0002e7c8 + 0x2e774);
      }
      SmartLock::~SmartLock((SmartLock *)&local_28);
      return uVar1 != 0;
    }
    (**(code **)(*(int *)param_1 + 0x10))
              ((SmartPtr<XCam::BufferData> *)local_20,param_1,param_1 + 0x28);
    if (local_20[0] == 0) {
      SmartPtr<XCam::BufferData>::release((SmartPtr<XCam::BufferData> *)local_20);
      goto LAB_0002e754;
    }
    SafeList<XCam::BufferData>::push((SmartPtr *)(param_1 + 0x68));
    uVar1 = uVar1 + 1;
    SmartPtr<XCam::BufferData>::release((SmartPtr<XCam::BufferData> *)local_20);
  } while( true );
}



/* ===== XCam::BufferPool::add_data_unsafe @ 0002e7cc size=56 ===== */

/* XCam::BufferPool::add_data_unsafe(XCam::SmartPtr<XCam::BufferData> const&) */

undefined4 __thiscall XCam::BufferPool::add_data_unsafe(BufferPool *this,SmartPtr *param_1)

{
  if (*(int *)param_1 != 0) {
    SafeList<XCam::BufferData>::push((SmartPtr *)(this + 0x68));
    *(int *)(this + 0xd8) = *(int *)(this + 0xd8) + 1;
    return 1;
  }
  return 0;
}



/* ===== XCam::BufferPool::release @ 0002e804 size=100 ===== */

/* XCam::BufferPool::release(XCam::SmartPtr<XCam::BufferData>&) */

void XCam::BufferPool::release(SmartPtr *param_1)

{
  int local_18;
  SmartPtr *local_14;
  
  local_18 = *(int *)(DAT_0002e868 + 0x2e814 + DAT_0002e86c) + 8;
  local_14 = param_1 + 8;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xc));
  if (param_1[0xe0] == (SmartPtr)0x0) {
    SmartLock::~SmartLock((SmartLock *)&local_18);
  }
  else {
    SmartLock::~SmartLock((SmartLock *)&local_18);
    SafeList<XCam::BufferData>::push(param_1 + 0x68);
  }
  return;
}



/* ===== XCam::BufferProxy::BufferProxy @ 0002e870 size=148 ===== */

/* XCam::BufferProxy::BufferProxy(XCam::SmartPtr<XCam::BufferData> const&) */

BufferProxy * __thiscall XCam::BufferProxy::BufferProxy(BufferProxy *this,SmartPtr *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0002e918 + 0x2e890;
  iVar1 = *(int *)(iVar2 + DAT_0002e91c);
  *(undefined4 *)(this + 4) = 0;
  *(BufferProxy **)(this + 0xc) = this + 8;
  *(int *)this = iVar1 + 8;
  *(BufferProxy **)(this + 8) = this + 8;
  *(undefined4 *)(this + 0x10) = 0;
  *(BufferProxy **)(this + 0x18) = this + 0x14;
  *(BufferProxy **)(this + 0x14) = this + 0x14;
  *(undefined4 *)(this + 0x1c) = 0;
  VideoBufferInfo::VideoBufferInfo((VideoBufferInfo *)(this + 0x20));
  iVar1 = DAT_0002e920;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x60) = 0xffffffffffffffff;
  *(int *)this = *(int *)(iVar2 + iVar1) + 8;
  SmartPtr<XCam::BufferData>::SmartPtr((SmartPtr<XCam::BufferData> *)(this + 0x74),param_1);
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  return this;
}



/* ===== XCam::SmartPtr<XCam::BufferPool>::release @ 0002e924 size=128 ===== */

/* XCam::SmartPtr<XCam::BufferPool>::release() */

void __thiscall XCam::SmartPtr<XCam::BufferPool>::release(SmartPtr<XCam::BufferPool> *this)

{
  int iVar1;
  
  if (*(int *)this == 0) {
    return;
  }
  iVar1 = std::__atomic_base<unsigned_int>::operator--
                    ((__atomic_base<unsigned_int> *)(*(int *)(this + 4) + 4));
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)(this + 4) + 8))();
    if ((iVar1 == 0) && (*(int **)(this + 4) != (int *)0x0)) {
      (**(code **)(**(int **)(this + 4) + 4))();
    }
    if (*(int **)this != (int *)0x0) {
      (**(code **)(**(int **)this + 4))();
    }
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}



/* ===== XCam::BufferProxy::~BufferProxy @ 0002e9a4 size=96 ===== */

/* XCam::BufferProxy::~BufferProxy() */

BufferProxy * __thiscall XCam::BufferProxy::~BufferProxy(BufferProxy *this)

{
  *(int *)this = *(int *)(DAT_0002ea04 + 0x2e9b4 + DAT_0002ea08) + 8;
  if (*(SmartPtr **)(this + 0x7c) != (SmartPtr *)0x0) {
    BufferPool::release(*(SmartPtr **)(this + 0x7c));
  }
  SmartPtr<XCam::BufferData>::release((SmartPtr<XCam::BufferData> *)(this + 0x74));
  SmartPtr<XCam::BufferPool>::release((SmartPtr<XCam::BufferPool> *)(this + 0x7c));
  SmartPtr<XCam::BufferData>::release((SmartPtr<XCam::BufferData> *)(this + 0x74));
  VideoBuffer::~VideoBuffer((VideoBuffer *)this);
  return this;
}



/* ===== XCam::BufferProxy::~BufferProxy @ 0002ea0c size=32 ===== */

/* XCam::BufferProxy::~BufferProxy() */

BufferProxy * __thiscall XCam::BufferProxy::~BufferProxy(BufferProxy *this)

{
  ~BufferProxy(this);
  operator_delete(this,0x88);
  return this;
}



/* ===== XCam::SmartPtr<XCam::BufferProxy>::release @ 0002ea2c size=128 ===== */

/* XCam::SmartPtr<XCam::BufferProxy>::release() */

void __thiscall XCam::SmartPtr<XCam::BufferProxy>::release(SmartPtr<XCam::BufferProxy> *this)

{
  int iVar1;
  
  if (*(int *)this == 0) {
    return;
  }
  iVar1 = std::__atomic_base<unsigned_int>::operator--
                    ((__atomic_base<unsigned_int> *)(*(int *)(this + 4) + 4));
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)(this + 4) + 8))();
    if ((iVar1 == 0) && (*(int **)(this + 4) != (int *)0x0)) {
      (**(code **)(**(int **)(this + 4) + 4))();
    }
    if (*(int **)this != (int *)0x0) {
      (**(code **)(**(int **)this + 4))();
    }
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}



/* ===== XCam::BufferPool::get_buffer @ 0002eaac size=716 ===== */

/* XCam::BufferPool::get_buffer(XCam::SmartPtr<XCam::BufferPool> const&) */

SmartPtr * XCam::BufferPool::get_buffer(SmartPtr *param_1)

{
  int iVar1;
  int *in_r1;
  int *piVar2;
  int *in_r2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int local_48;
  int *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int *local_2c;
  int local_28;
  int *local_24;
  
  local_48 = 0;
  local_44 = (int *)0x0;
  local_40 = 0;
  local_3c = 0;
  local_24 = in_r1 + 2;
  iVar4 = *(int *)(DAT_0002edb0 + 0x2eac8 + DAT_0002edb4) + 8;
  local_28 = iVar4;
  pthread_mutex_lock((pthread_mutex_t *)(in_r1 + 3));
  if ((char)in_r1[0x38] == '\0') {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    SmartLock::~SmartLock((SmartLock *)&local_28);
    goto LAB_0002eb1c;
  }
  SmartLock::~SmartLock((SmartLock *)&local_28);
  if (in_r1 == (int *)*in_r2) {
    local_2c = in_r1 + 0x1d;
    local_30 = iVar4;
    pthread_mutex_lock((pthread_mutex_t *)(in_r1 + 0x1e));
    iVar4 = 0;
    while (((char)in_r1[0x34] == '\0' && ((int *)in_r1[0x1a] == in_r1 + 0x1a && iVar4 == 0))) {
      iVar4 = pthread_cond_wait((pthread_cond_t *)(in_r1 + 0x26),(pthread_mutex_t *)(in_r1 + 0x1e));
    }
    if ((char)in_r1[0x34] == '\0') {
      piVar2 = (int *)in_r1[0x1a];
      if (piVar2 == in_r1 + 0x1a) {
        if (iVar4 != 0x6e) {
          xcam_print_log(0x18,0xff,1,DAT_0002edb8 + 0x2ebcc,iVar4);
        }
        goto LAB_0002ebf4;
      }
      SmartPtr<XCam::BufferData>::SmartPtr
                ((SmartPtr<XCam::BufferData> *)&local_28,(SmartPtr *)(piVar2 + 2));
      pvVar5 = (void *)in_r1[0x1a];
      in_r1[0x1c] = in_r1[0x1c] + -1;
      std::__detail::_List_node_base::_M_unhook();
      SmartPtr<XCam::BufferData>::release((SmartPtr<XCam::BufferData> *)((int)pvVar5 + 8));
      operator_delete(pvVar5);
      SmartPtr<XCam::BufferData>::SmartPtr
                ((SmartPtr<XCam::BufferData> *)&local_38,(SmartPtr *)&local_28);
      SmartPtr<XCam::BufferData>::release((SmartPtr<XCam::BufferData> *)&local_28);
    }
    else {
LAB_0002ebf4:
      local_38 = 0;
      local_34 = 0;
    }
    SmartLock::~SmartLock((SmartLock *)&local_30);
    SmartPtr<XCam::BufferData>::release((SmartPtr<XCam::BufferData> *)&local_40);
    if (local_38 != 0) {
      local_40 = local_38;
      if (local_34 == 0) {
        local_3c = FUN_0002e1d8();
      }
      else {
        local_3c = local_34;
        std::__atomic_base<unsigned_int>::operator++((__atomic_base<unsigned_int> *)(local_34 + 4));
      }
    }
    SmartPtr<XCam::BufferData>::release((SmartPtr<XCam::BufferData> *)&local_38);
    if (local_40 != 0) {
      (**(code **)(*in_r1 + 0x14))((SmartLock *)&local_28);
      SmartPtr<XCam::BufferProxy>::release((SmartPtr<XCam::BufferProxy> *)&local_48);
      if (local_28 != 0) {
        local_48 = local_28;
        if (local_24 == (int *)0x0) {
          local_44 = (int *)FUN_0002e1d8();
        }
        else {
          local_44 = local_24;
          std::__atomic_base<unsigned_int>::operator++
                    ((__atomic_base<unsigned_int> *)(local_24 + 1));
        }
      }
      SmartPtr<XCam::BufferProxy>::release((SmartPtr<XCam::BufferProxy> *)&local_28);
      iVar4 = local_48;
      SmartPtr<XCam::BufferPool>::release((SmartPtr<XCam::BufferPool> *)(local_48 + 0x7c));
      iVar3 = *in_r2;
      if (iVar3 != 0) {
        iVar1 = in_r2[1];
        *(int *)(iVar4 + 0x7c) = iVar3;
        if (iVar1 == 0) {
          std::__atomic_base<unsigned_int>::operator++((__atomic_base<unsigned_int> *)(iVar3 + 4));
          *(int *)(iVar4 + 0x80) = iVar3;
        }
        else {
          *(int *)(iVar4 + 0x80) = iVar1;
          std::__atomic_base<unsigned_int>::operator++((__atomic_base<unsigned_int> *)(iVar1 + 4));
        }
      }
      *(int **)(param_1 + 4) = local_44;
      *(int *)param_1 = local_48;
      if (local_44 != (int *)0x0) {
        std::__atomic_base<unsigned_int>::operator++((__atomic_base<unsigned_int> *)(local_44 + 1));
      }
      goto LAB_0002eb1c;
    }
  }
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
LAB_0002eb1c:
  SmartPtr<XCam::BufferData>::release((SmartPtr<XCam::BufferData> *)&local_40);
  SmartPtr<XCam::BufferProxy>::release((SmartPtr<XCam::BufferProxy> *)&local_48);
  return param_1;
}



/* ===== XCam::BufferPool::get_buffer @ 0002edbc size=80 ===== */

/* XCam::BufferPool::get_buffer() */

void XCam::BufferPool::get_buffer(void)

{
  SmartPtr *in_r0;
  int in_r1;
  SmartPtr<XCam::BufferPool> local_18 [4];
  undefined4 local_14;
  
  local_14 = 0;
  std::__atomic_base<unsigned_int>::operator++((__atomic_base<unsigned_int> *)(in_r1 + 4));
  get_buffer(in_r0);
  SmartPtr<XCam::BufferPool>::release(local_18);
  return;
}



/* ===== XCam::PollThread::notify_sof @ 0002ee18 size=8 ===== */

/* XCam::PollThread::notify_sof(unsigned long long, unsigned int) */

ulonglong XCam::PollThread::notify_sof(ulonglong param_1,uint param_2)

{
  return param_1 & 0xffffffff00000000;
}



/* ===== FUN_0002ee20 @ 0002ee20 size=48 ===== */

void FUN_0002ee20(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = operator_new(8);
  iVar2 = DAT_0002ee50 + 0x2ee3c;
  piVar1[1] = 1;
  *piVar1 = *(int *)(iVar2 + DAT_0002ee54) + 8;
  return;
}



/* ===== XCam::PollThread::new_video_buffer @ 0002ee58 size=72 ===== */

/* XCam::PollThread::new_video_buffer(XCam::SmartPtr<XCam::V4l2Buffer>,
   XCam::SmartPtr<XCam::V4l2Device>, int) */

PollThread * __thiscall
XCam::PollThread::new_video_buffer
          (PollThread *this,undefined4 param_2,SmartPtr *param_3,SmartPtr *param_4)

{
  V4l2BufferProxy *this_00;
  undefined4 uVar1;
  
  this_00 = operator_new(0x90);
  V4l2BufferProxy::V4l2BufferProxy(this_00,param_3,param_4);
  *(V4l2BufferProxy **)this = this_00;
  *(undefined4 *)(this + 4) = 0;
  uVar1 = FUN_0002ee20();
  *(undefined4 *)(this + 4) = uVar1;
  return this;
}



/* ===== XCam::PollThread::PollThread @ 0002eeb0 size=136 ===== */

/* XCam::PollThread::PollThread() */

void __thiscall XCam::PollThread::PollThread(PollThread *this)

{
  *(int *)this = *(int *)(DAT_0002ef38 + 0x2eec0 + DAT_0002ef3c) + 8;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  return;
}



/* ===== XCam::PollThread::set_poll_callback @ 0002ef40 size=12 ===== */

/* XCam::PollThread::set_poll_callback(XCam::PollCallback*) */

undefined4 __thiscall XCam::PollThread::set_poll_callback(PollThread *this,PollCallback *param_1)

{
  *(PollCallback **)(this + 100) = param_1;
  return 1;
}



/* ===== XCam::PollThread::destroy_stop_fds @ 0002ef4c size=276 ===== */

/* XCam::PollThread::destroy_stop_fds() */

void __thiscall XCam::PollThread::destroy_stop_fds(PollThread *this)

{
  if ((*(uint *)(this + 0x70) & *(uint *)(this + 0x6c)) != 0xffffffff) {
    close(*(uint *)(this + 0x6c));
    close(*(int *)(this + 0x70));
    *(undefined4 *)(this + 0x6c) = 0xffffffff;
    *(undefined4 *)(this + 0x70) = 0xffffffff;
  }
  if ((*(uint *)(this + 0x78) & *(uint *)(this + 0x74)) != 0xffffffff) {
    close(*(uint *)(this + 0x74));
    close(*(int *)(this + 0x78));
    *(undefined4 *)(this + 0x74) = 0xffffffff;
    *(undefined4 *)(this + 0x78) = 0xffffffff;
  }
  if ((*(uint *)(this + 0x80) & *(uint *)(this + 0x7c)) != 0xffffffff) {
    close(*(uint *)(this + 0x7c));
    close(*(int *)(this + 0x80));
    *(undefined4 *)(this + 0x7c) = 0xffffffff;
    *(undefined4 *)(this + 0x80) = 0xffffffff;
  }
  if ((*(uint *)(this + 0x88) & *(uint *)(this + 0x84)) != 0xffffffff) {
    close(*(uint *)(this + 0x84));
    close(*(int *)(this + 0x88));
    *(undefined4 *)(this + 0x84) = 0xffffffff;
    *(undefined4 *)(this + 0x88) = 0xffffffff;
  }
  if ((*(uint *)(this + 0x90) & *(uint *)(this + 0x8c)) != 0xffffffff) {
    close(*(uint *)(this + 0x8c));
    close(*(int *)(this + 0x90));
    *(undefined4 *)(this + 0x8c) = 0xffffffff;
    *(undefined4 *)(this + 0x90) = 0xffffffff;
  }
  if ((*(uint *)(this + 0x98) & *(uint *)(this + 0x94)) == 0xffffffff) {
    return;
  }
  close(*(uint *)(this + 0x94));
  close(*(int *)(this + 0x98));
  *(undefined4 *)(this + 0x94) = 0xffffffff;
  *(undefined4 *)(this + 0x98) = 0xffffffff;
  return;
}



/* ===== XCam::PollThread::stop @ 0002f060 size=340 ===== */

/* XCam::PollThread::stop() */

undefined4 XCam::PollThread::stop(void)

{
  PollThread *in_r0;
  undefined4 in_r1;
  undefined4 uStack_c;
  
  uStack_c = in_r1;
  if (*(int *)(in_r0 + 0x34) != 0) {
    if (*(int *)(in_r0 + 0x88) != -1) {
      uStack_c._0_3_ = (undefined3)in_r1;
      uStack_c = CONCAT13(0xf,(undefined3)uStack_c);
      write(*(int *)(in_r0 + 0x88),(void *)((int)&uStack_c + 3),1);
    }
    Thread::stop();
  }
  if (*(int *)(in_r0 + 0x5c) != 0) {
    if (*(int *)(in_r0 + 0x70) != -1) {
      uStack_c = CONCAT13(0xf,(undefined3)uStack_c);
      write(*(int *)(in_r0 + 0x70),(void *)((int)&uStack_c + 3),1);
    }
    Thread::stop();
  }
  if (*(int *)(in_r0 + 0x4c) != 0) {
    if (*(int *)(in_r0 + 0x80) != -1) {
      uStack_c = CONCAT13(0xf,(undefined3)uStack_c);
      write(*(int *)(in_r0 + 0x80),(void *)((int)&uStack_c + 3),1);
    }
    Thread::stop();
  }
  if (*(int *)(in_r0 + 0x54) != 0) {
    if (*(int *)(in_r0 + 0x78) != -1) {
      uStack_c = CONCAT13(0xf,(undefined3)uStack_c);
      write(*(int *)(in_r0 + 0x78),(void *)((int)&uStack_c + 3),1);
    }
    Thread::stop();
  }
  if (*(int *)(in_r0 + 0x3c) != 0) {
    if (*(int *)(in_r0 + 0x90) != -1) {
      uStack_c = CONCAT13(0xf,(undefined3)uStack_c);
      write(*(int *)(in_r0 + 0x90),(void *)((int)&uStack_c + 3),1);
    }
    Thread::stop();
  }
  if (*(int *)(in_r0 + 0x44) != 0) {
    if (*(int *)(in_r0 + 0x98) != -1) {
      uStack_c = CONCAT13(0xf,(undefined3)uStack_c);
      write(*(int *)(in_r0 + 0x98),(void *)((int)&uStack_c + 3),1);
    }
    Thread::stop();
  }
  destroy_stop_fds(in_r0);
  return 0;
}



/* ===== XCam::PollThread::create_stop_fds @ 0002f1b4 size=624 ===== */

/* XCam::PollThread::create_stop_fds() */

undefined4 __thiscall XCam::PollThread::create_stop_fds(PollThread *this)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  destroy_stop_fds(this);
  iVar1 = pipe((int *)(this + 0x6c));
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    iVar1 = DAT_0002f424 + 0x2f1e8;
  }
  else {
    iVar1 = fcntl64(*(undefined4 *)(this + 0x6c),4,0x800);
    if (iVar1 < 0) {
      piVar2 = __errno_location();
      pcVar3 = strerror(*piVar2);
      iVar1 = DAT_0002f428 + 0x2f23c;
    }
    else {
      iVar1 = pipe((int *)(this + 0x74));
      if (iVar1 < 0) {
        piVar2 = __errno_location();
        pcVar3 = strerror(*piVar2);
        iVar1 = DAT_0002f42c + 0x2f268;
      }
      else {
        iVar1 = fcntl64(*(undefined4 *)(this + 0x74),4,0x800);
        if (iVar1 < 0) {
          piVar2 = __errno_location();
          pcVar3 = strerror(*piVar2);
          iVar1 = DAT_0002f430 + 0x2f29c;
        }
        else {
          iVar1 = pipe((int *)(this + 0x7c));
          if (iVar1 < 0) {
            piVar2 = __errno_location();
            pcVar3 = strerror(*piVar2);
            iVar1 = DAT_0002f434 + 0x2f2c8;
          }
          else {
            iVar1 = fcntl64(*(undefined4 *)(this + 0x7c),4,0x800);
            if (iVar1 < 0) {
              piVar2 = __errno_location();
              pcVar3 = strerror(*piVar2);
              iVar1 = DAT_0002f438 + 0x2f2fc;
            }
            else {
              iVar1 = pipe((int *)(this + 0x84));
              if (iVar1 < 0) {
                piVar2 = __errno_location();
                pcVar3 = strerror(*piVar2);
                iVar1 = DAT_0002f43c + 0x2f328;
              }
              else {
                iVar1 = fcntl64(*(undefined4 *)(this + 0x84),4,0x800);
                if (iVar1 < 0) {
                  piVar2 = __errno_location();
                  pcVar3 = strerror(*piVar2);
                  iVar1 = DAT_0002f440 + 0x2f35c;
                }
                else {
                  iVar1 = pipe((int *)(this + 0x8c));
                  if (iVar1 < 0) {
                    piVar2 = __errno_location();
                    pcVar3 = strerror(*piVar2);
                    iVar1 = DAT_0002f444 + 0x2f388;
                  }
                  else {
                    iVar1 = fcntl64(*(undefined4 *)(this + 0x8c),4,0x800);
                    if (iVar1 < 0) {
                      piVar2 = __errno_location();
                      pcVar3 = strerror(*piVar2);
                      iVar1 = DAT_0002f448 + 0x2f3bc;
                    }
                    else {
                      iVar1 = pipe((int *)(this + 0x94));
                      if (iVar1 < 0) {
                        piVar2 = __errno_location();
                        pcVar3 = strerror(*piVar2);
                        iVar1 = DAT_0002f44c + 0x2f3e8;
                      }
                      else {
                        iVar1 = fcntl64(*(undefined4 *)(this + 0x94),4,0x800);
                        if (-1 < iVar1) {
                          return 0;
                        }
                        piVar2 = __errno_location();
                        pcVar3 = strerror(*piVar2);
                        iVar1 = DAT_0002f450 + 0x2f420;
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
  xcam_print_log(0x18,0xff,1,iVar1,pcVar3);
  destroy_stop_fds(this);
  return 0xffffff01;
}



/* ===== XCam::PollThread::start @ 0002f454 size=252 ===== */

/* XCam::PollThread::start() */

undefined4 __thiscall XCam::PollThread::start(PollThread *this)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = create_stop_fds(this);
  if (iVar1 == 0) {
    if ((((*(int *)(this + 0x34) != 0) &&
         (iVar1 = Thread::start(*(Thread **)(this + 0x1c)), iVar1 == 0)) ||
        ((*(int *)(this + 0x4c) != 0 &&
         (iVar1 = Thread::start(*(Thread **)(this + 0x14)), iVar1 == 0)))) ||
       ((((*(int *)(this + 0x54) != 0 &&
          (iVar1 = Thread::start(*(Thread **)(this + 0xc)), iVar1 == 0)) ||
         ((*(int *)(this + 0x3c) != 0 &&
          (iVar1 = Thread::start(*(Thread **)(this + 0x24)), iVar1 == 0)))) ||
        (((*(int *)(this + 0x5c) != 0 && (iVar1 = Thread::start(*(Thread **)(this + 4)), iVar1 == 0)
          ) || ((uVar2 = 0, *(int *)(this + 0x44) != 0 &&
                (iVar1 = Thread::start(*(Thread **)(this + 0x2c)), iVar1 == 0)))))))) {
      uVar2 = 0xfffffff8;
    }
  }
  else {
    uVar2 = 0xffffff01;
    xcam_print_log(0x18,0xff,1,DAT_0002f550 + 0x2f480);
  }
  return uVar2;
}



/* ===== XCam::PollThread::handle_frame_sync_event @ 0002f554 size=56 ===== */

/* XCam::PollThread::handle_frame_sync_event(v4l2_event&) */

undefined4 XCam::PollThread::handle_frame_sync_event(v4l2_event *param_1)

{
  longlong lVar1;
  int in_r1;
  
  lVar1 = (longlong)*(int *)(in_r1 + 0x50) * (longlong)DAT_0002f58c +
          (longlong)*(int *)(in_r1 + 0x54);
  (**(code **)(*(int *)param_1 + 0x1c))
            (param_1,*(code **)(*(int *)param_1 + 0x1c),(int)lVar1,(int)((ulonglong)lVar1 >> 0x20),
             *(undefined4 *)(in_r1 + 8));
  return 0;
}



/* ===== XCam::PollThread::handle_events @ 0002f590 size=36 ===== */

/* XCam::PollThread::handle_events(v4l2_event&) */

undefined4 __thiscall XCam::PollThread::handle_events(PollThread *this,v4l2_event *param_1)

{
  undefined4 uVar1;
  
  if (*(int *)param_1 == 4) {
                    /* WARNING: Could not recover jumptable at 0x0001dfe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_handle_frame_sync_event_00044278)(this);
    return uVar1;
  }
  return 0xffffff01;
}



/* ===== XCam::PollThread::poll_subdev_event_loop @ 0002f5a8 size=200 ===== */

/* XCam::PollThread::poll_subdev_event_loop() */

undefined4 __thiscall XCam::PollThread::poll_subdev_event_loop(PollThread *this)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int local_90 [2];
  undefined4 local_88;
  
  iVar1 = (**(code **)(**(int **)(this + 0x34) + 0x24))
                    (*(int **)(this + 0x34),300,*(undefined4 *)(this + 0x84));
  if (iVar1 == 3) {
    uVar2 = 0xffffff01;
  }
  else {
    if (iVar1 < 0) {
      usleep(1000);
    }
    else if (iVar1 != 0) {
      memset(local_90,0,0x80);
      iVar1 = (**(code **)(**(int **)(this + 0x34) + 0x44))(*(int **)(this + 0x34),local_90);
      if (iVar1 != 0) {
        return 0xfffffff7;
      }
      uVar2 = (**(code **)(*(int *)this + 0x14))(this,local_90);
      piVar3 = *(int **)(this + 100);
      if (piVar3 == (int *)0x0) {
        return uVar2;
      }
      if (local_90[0] != 4) {
        return uVar2;
      }
      uVar2 = (**(code **)(*piVar3 + 0x10))(piVar3,local_88);
      return uVar2;
    }
    uVar2 = 0xffffffec;
  }
  return uVar2;
}



/* ===== XCam::PollThread::poll_buffer_loop @ 0002f670 size=8 ===== */

/* XCam::PollThread::poll_buffer_loop(int) */

undefined4 XCam::PollThread::poll_buffer_loop(int param_1)

{
  return 0;
}



/* ===== FUN_0002f678 @ 0002f678 size=116 ===== */

void FUN_0002f678(int *param_1)

{
  int iVar1;
  
  iVar1 = std::__atomic_base<unsigned_int>::operator--
                    ((__atomic_base<unsigned_int> *)(param_1[1] + 4));
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*(int *)param_1[1] + 8))();
    if ((iVar1 == 0) && ((int *)param_1[1] != (int *)0x0)) {
      (**(code **)(*(int *)param_1[1] + 4))();
    }
    if ((int *)*param_1 != (int *)0x0) {
      (**(code **)(*(int *)*param_1 + 4))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* ===== XCam::PollThread::set_event_device @ 0002f6ec size=116 ===== */

/* XCam::PollThread::set_event_device(XCam::SmartPtr<XCam::V4l2SubDevice>&) */

undefined4 __thiscall XCam::PollThread::set_event_device(PollThread *this,SmartPtr *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  if (*(int *)(this + 0x34) != 0) {
    FUN_0002f678(this + 0x34);
  }
  if (*(int *)param_1 != 0) {
    iVar3 = *(int *)(param_1 + 4);
    *(int *)(this + 0x34) = *(int *)param_1;
    if (iVar3 == 0) {
      uVar2 = FUN_0002ee20();
      *(undefined4 *)(this + 0x38) = uVar2;
    }
    else {
      *(int *)(this + 0x38) = iVar3;
      piVar4 = (int *)(iVar3 + 4);
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = *piVar4 + 1;
      DataMemoryBarrier(0xb);
    }
  }
  return 1;
}



/* ===== XCam::SmartPtr<XCam::Thread>::release @ 0002f760 size=128 ===== */

/* XCam::SmartPtr<XCam::Thread>::release() */

void __thiscall XCam::SmartPtr<XCam::Thread>::release(SmartPtr<XCam::Thread> *this)

{
  int iVar1;
  
  if (*(int *)this == 0) {
    return;
  }
  iVar1 = std::__atomic_base<unsigned_int>::operator--
                    ((__atomic_base<unsigned_int> *)(*(int *)(this + 4) + 4));
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)(this + 4) + 8))();
    if ((iVar1 == 0) && (*(int **)(this + 4) != (int *)0x0)) {
      (**(code **)(**(int **)(this + 4) + 4))();
    }
    if (*(int **)this != (int *)0x0) {
      (**(code **)(**(int **)this + 4))();
    }
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}



/* ===== XCam::PollThread::~PollThread @ 0002f7e0 size=156 ===== */

/* XCam::PollThread::~PollThread() */

PollThread * __thiscall XCam::PollThread::~PollThread(PollThread *this)

{
  *(int *)this = *(int *)(DAT_0002f87c + 0x2f7f0 + DAT_0002f880) + 8;
  stop();
  SmartPtr<XCam::V4l2Device>::release((SmartPtr<XCam::V4l2Device> *)(this + 0x5c));
  SmartPtr<XCam::V4l2Device>::release((SmartPtr<XCam::V4l2Device> *)(this + 0x54));
  SmartPtr<XCam::V4l2Device>::release((SmartPtr<XCam::V4l2Device> *)(this + 0x4c));
  SmartPtr<XCam::V4l2Device>::release((SmartPtr<XCam::V4l2Device> *)(this + 0x44));
  SmartPtr<XCam::V4l2Device>::release((SmartPtr<XCam::V4l2Device> *)(this + 0x3c));
  if (*(int *)(this + 0x34) != 0) {
    FUN_0002f678(this + 0x34);
  }
  SmartPtr<XCam::Thread>::release((SmartPtr<XCam::Thread> *)(this + 0x2c));
  SmartPtr<XCam::Thread>::release((SmartPtr<XCam::Thread> *)(this + 0x24));
  SmartPtr<XCam::Thread>::release((SmartPtr<XCam::Thread> *)(this + 0x1c));
  SmartPtr<XCam::Thread>::release((SmartPtr<XCam::Thread> *)(this + 0x14));
  SmartPtr<XCam::Thread>::release((SmartPtr<XCam::Thread> *)(this + 0xc));
  SmartPtr<XCam::Thread>::release((SmartPtr<XCam::Thread> *)(this + 4));
  return this;
}



/* ===== XCam::PollThread::~PollThread @ 0002f884 size=32 ===== */

/* XCam::PollThread::~PollThread() */

PollThread * __thiscall XCam::PollThread::~PollThread(PollThread *this)

{
  ~PollThread(this);
  operator_delete(this,0x9c);
  return this;
}



/* ===== XCam::PollThread::set_isp_stats_device @ 0002f8a4 size=20 ===== */

/* XCam::PollThread::set_isp_stats_device(XCam::SmartPtr<XCam::V4l2Device>&) */

undefined4 __thiscall XCam::PollThread::set_isp_stats_device(PollThread *this,SmartPtr *param_1)

{
  SmartPtr<XCam::V4l2Device>::operator=((SmartPtr<XCam::V4l2Device> *)(this + 0x4c),param_1);
  return 1;
}



/* ===== XCam::PollThread::set_isp_luma_device @ 0002f8b8 size=20 ===== */

/* XCam::PollThread::set_isp_luma_device(XCam::SmartPtr<XCam::V4l2Device>&) */

undefined4 __thiscall XCam::PollThread::set_isp_luma_device(PollThread *this,SmartPtr *param_1)

{
  SmartPtr<XCam::V4l2Device>::operator=((SmartPtr<XCam::V4l2Device> *)(this + 0x54),param_1);
  return 1;
}



/* ===== XCam::PollThread::set_ispp_stats_device @ 0002f8cc size=20 ===== */

/* XCam::PollThread::set_ispp_stats_device(XCam::SmartPtr<XCam::V4l2Device>&) */

undefined4 __thiscall XCam::PollThread::set_ispp_stats_device(PollThread *this,SmartPtr *param_1)

{
  SmartPtr<XCam::V4l2Device>::operator=((SmartPtr<XCam::V4l2Device> *)(this + 0x5c),param_1);
  return 1;
}



/* ===== XCam::PollThread::set_isp_params_devices @ 0002f8e0 size=40 ===== */

/* XCam::PollThread::set_isp_params_devices(XCam::SmartPtr<XCam::V4l2Device>&,
   XCam::SmartPtr<XCam::V4l2Device>&) */

undefined4 __thiscall
XCam::PollThread::set_isp_params_devices(PollThread *this,SmartPtr *param_1,SmartPtr *param_2)

{
  SmartPtr<XCam::V4l2Device>::operator=((SmartPtr<XCam::V4l2Device> *)(this + 0x3c),param_1);
  SmartPtr<XCam::V4l2Device>::operator=((SmartPtr<XCam::V4l2Device> *)(this + 0x44),param_2);
  return 1;
}



/* ===== XCam::SmartBufferPriv::buf_map @ 0002f908 size=16 ===== */

/* XCam::SmartBufferPriv::buf_map(_XCamVideoBuffer*) */

void XCam::SmartBufferPriv::buf_map(_XCamVideoBuffer *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0002f914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x7c) + 8))();
  return;
}



/* ===== XCam::SmartBufferPriv::buf_unmap @ 0002f918 size=16 ===== */

/* XCam::SmartBufferPriv::buf_unmap(_XCamVideoBuffer*) */

void XCam::SmartBufferPriv::buf_unmap(_XCamVideoBuffer *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0002f924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x7c) + 0xc))();
  return;
}



/* ===== XCam::SmartBufferPriv::buf_get_fd @ 0002f928 size=16 ===== */

/* XCam::SmartBufferPriv::buf_get_fd(_XCamVideoBuffer*) */

void XCam::SmartBufferPriv::buf_get_fd(_XCamVideoBuffer *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0002f934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x7c) + 0x10))();
  return;
}



/* ===== XCam::SmartBufferPriv::buf_get_bo @ 0002f938 size=36 ===== */

/* XCam::SmartBufferPriv::buf_get_bo(_XCamVideoBufferRK*) */

undefined4 XCam::SmartBufferPriv::buf_get_bo(_XCamVideoBufferRK *param_1)

{
  xcam_print_log(0x18,0xff,1,DAT_0002f95c + 0x2f94c);
  return 0;
}



/* ===== XCam::SmartBufferPriv::buf_ref @ 0002f960 size=48 ===== */

/* XCam::SmartBufferPriv::buf_ref(_XCamVideoBuffer*) */

void XCam::SmartBufferPriv::buf_ref(_XCamVideoBuffer *param_1)

{
  bool bVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x78) != 0) {
    piVar2 = (int *)(*(int *)(param_1 + 0x78) + 4);
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = *piVar2 + 1;
    DataMemoryBarrier(0xb);
    return;
  }
  return;
}



/* ===== XCam::SmartBufferPriv::registerNotifyCb @ 0002f990 size=44 ===== */

/* XCam::SmartBufferPriv::registerNotifyCb(void (*)(void*, _XCamVideoBuffer*), void*) */

undefined4 __thiscall
XCam::SmartBufferPriv::registerNotifyCb
          (SmartBufferPriv *this,_func_void_void_ptr__XCamVideoBuffer_ptr *param_1,void *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (void *)0x0 || param_1 == (_func_void_void_ptr__XCamVideoBuffer_ptr *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    *(_func_void_void_ptr__XCamVideoBuffer_ptr **)(this + 0x70) = param_1;
    *(void **)(this + 0x68) = param_2;
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== XCam::SmartBufferPriv::~SmartBufferPriv @ 0002f9bc size=48 ===== */

/* XCam::SmartBufferPriv::~SmartBufferPriv() */

SmartBufferPriv * __thiscall XCam::SmartBufferPriv::~SmartBufferPriv(SmartBufferPriv *this)

{
  if (*(int **)(this + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x78) + 4))();
  }
  SmartPtr<XCam::VideoBuffer>::release((SmartPtr<XCam::VideoBuffer> *)(this + 0x7c));
  return this;
}



/* ===== XCam::SmartBufferPriv::buf_unref @ 0002f9ec size=112 ===== */

/* XCam::SmartBufferPriv::buf_unref(_XCamVideoBuffer*) */

int XCam::SmartBufferPriv::buf_unref(_XCamVideoBuffer *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0x78) != 0) {
    piVar2 = (int *)(*(int *)(param_1 + 0x78) + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2 + -1;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3;
    DataMemoryBarrier(0xb);
    if (iVar3 == 0) {
      if (*(code **)(param_1 + 0x70) != (code *)0x0) {
        (**(code **)(param_1 + 0x70))(*(undefined4 *)(param_1 + 0x68),param_1);
      }
      ~SmartBufferPriv((SmartBufferPriv *)param_1);
      operator_delete(param_1,0xa8);
    }
  }
  return iVar3;
}



/* ===== XCam::SmartPtr<XCam::VideoBuffer>::operator= @ 0002fa5c size=136 ===== */

/* XCam::SmartPtr<XCam::VideoBuffer>::TEMPNAMEPLACEHOLDERVALUE(XCam::SmartPtr<XCam::VideoBuffer>
   const&) */

SmartPtr<XCam::VideoBuffer> * __thiscall
XCam::SmartPtr<XCam::VideoBuffer>::operator=(SmartPtr<XCam::VideoBuffer> *this,SmartPtr *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  release(this);
  iVar4 = DAT_0002fae4 + 0x2fa80;
  if (*(int *)param_1 != 0) {
    iVar2 = *(int *)(param_1 + 4);
    *(int *)this = *(int *)param_1;
    if (iVar2 == 0) {
      piVar3 = operator_new(8);
      piVar3[1] = 1;
      iVar4 = *(int *)(iVar4 + DAT_0002fae8);
      *(int **)(this + 4) = piVar3;
      *piVar3 = iVar4 + 8;
    }
    else {
      *(int *)(this + 4) = iVar2;
      piVar3 = (int *)(iVar2 + 4);
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = *piVar3 + 1;
      DataMemoryBarrier(0xb);
    }
  }
  return this;
}



/* ===== XCam::SmartBufferPriv::SmartBufferPriv @ 0002faec size=264 ===== */

/* XCam::SmartBufferPriv::SmartBufferPriv(XCam::SmartPtr<XCam::VideoBuffer> const&) */

SmartBufferPriv * __thiscall
XCam::SmartBufferPriv::SmartBufferPriv(SmartBufferPriv *this,SmartPtr *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = DAT_0002fc00;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  iVar6 = iVar6 + 0x2fb10;
  *(undefined4 *)(this + 0x80) = 0;
  SmartPtr<XCam::VideoBuffer>::operator=((SmartPtr<XCam::VideoBuffer> *)(this + 0x7c),param_1);
  if (*(int *)param_1 != 0) {
    piVar1 = operator_new(8);
    piVar1[1] = 1;
    iVar4 = *(int *)(iVar6 + DAT_0002fc04);
    *(int **)(this + 0x78) = piVar1;
    iVar7 = *(int *)param_1;
    *piVar1 = iVar4 + 8;
    uVar2 = *(undefined4 *)(iVar7 + 0x24);
    uVar3 = *(undefined4 *)(iVar7 + 0x28);
    uVar5 = *(undefined4 *)(iVar7 + 0x2c);
    *(undefined4 *)this = *(undefined4 *)(iVar7 + 0x20);
    *(undefined4 *)(this + 4) = uVar2;
    *(undefined4 *)(this + 8) = uVar3;
    *(undefined4 *)(this + 0xc) = uVar5;
    uVar2 = *(undefined4 *)(iVar7 + 0x34);
    uVar3 = *(undefined4 *)(iVar7 + 0x38);
    uVar5 = *(undefined4 *)(iVar7 + 0x3c);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(iVar7 + 0x30);
    *(undefined4 *)(this + 0x14) = uVar2;
    *(undefined4 *)(this + 0x18) = uVar3;
    *(undefined4 *)(this + 0x1c) = uVar5;
    uVar2 = *(undefined4 *)(iVar7 + 0x44);
    uVar3 = *(undefined4 *)(iVar7 + 0x48);
    uVar5 = *(undefined4 *)(iVar7 + 0x4c);
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(iVar7 + 0x40);
    *(undefined4 *)(this + 0x24) = uVar2;
    *(undefined4 *)(this + 0x28) = uVar3;
    *(undefined4 *)(this + 0x2c) = uVar5;
    uVar2 = *(undefined4 *)(iVar7 + 0x54);
    uVar3 = *(undefined4 *)(iVar7 + 0x58);
    uVar5 = *(undefined4 *)(iVar7 + 0x5c);
    *(undefined4 *)(this + 0x30) = *(undefined4 *)(iVar7 + 0x50);
    *(undefined4 *)(this + 0x34) = uVar2;
    *(undefined4 *)(this + 0x38) = uVar3;
    *(undefined4 *)(this + 0x3c) = uVar5;
    *(undefined4 *)(this + 0x40) = 0x8001;
    uVar2 = *(undefined4 *)(*(int *)param_1 + 100);
    *(undefined4 *)(this + 0x48) = *(undefined4 *)(*(int *)param_1 + 0x60);
    *(undefined4 *)(this + 0x4c) = uVar2;
    *(undefined4 *)(this + 0x50) = *(undefined4 *)(*(int *)param_1 + 0x68);
    *(undefined4 *)(this + 0x54) = *(undefined4 *)(iVar6 + DAT_0002fc08);
    *(undefined4 *)(this + 0x58) = *(undefined4 *)(iVar6 + DAT_0002fc0c);
    *(undefined4 *)(this + 0x5c) = *(undefined4 *)(iVar6 + DAT_0002fc10);
    *(undefined4 *)(this + 0x60) = *(undefined4 *)(iVar6 + DAT_0002fc14);
    *(undefined4 *)(this + 100) = *(undefined4 *)(iVar6 + DAT_0002fc18);
    *(undefined4 *)(this + 0x6c) = *(undefined4 *)(iVar6 + DAT_0002fc1c);
    *(undefined4 *)(this + 0x70) = 0;
    *(undefined4 *)(this + 0x68) = 0;
  }
  return this;
}



/* ===== XCam::convert_to_external_buffer @ 0002fc20 size=72 ===== */

/* XCam::convert_to_external_buffer(XCam::SmartPtr<XCam::VideoBuffer> const&) */

SmartBufferPriv * XCam::convert_to_external_buffer(SmartPtr *param_1)

{
  SmartBufferPriv *this;
  
  this = operator_new(0xa8);
  SmartBufferPriv::SmartBufferPriv(this,param_1);
  if (*(int *)(this + 0x7c) == 0) {
    SmartBufferPriv::~SmartBufferPriv(this);
    operator_delete(this,0xa8);
    this = (SmartBufferPriv *)0x0;
  }
  return this;
}



/* ===== XCam::convert_to_XCamVideoBuffer @ 0002fc78 size=4 ===== */

/* XCam::convert_to_XCamVideoBuffer(XCam::SmartPtr<XCam::VideoBuffer> const&) */

SmartBufferPriv * XCam::convert_to_XCamVideoBuffer(SmartPtr *param_1)

{
  SmartBufferPriv *this;
  
  this = operator_new(0xa8);
  SmartBufferPriv::SmartBufferPriv(this,param_1);
  if (*(int *)(this + 0x7c) == 0) {
    SmartBufferPriv::~SmartBufferPriv(this);
    operator_delete(this,0xa8);
    this = (SmartBufferPriv *)0x0;
  }
  return this;
}



/* ===== XCam::SmartBufferPriv::SmartBufferPriv @ 0002fc7c size=264 ===== */

/* XCam::SmartBufferPriv::SmartBufferPriv(unsigned int, XCam::SmartPtr<XCam::VideoBuffer> const&) */

SmartBufferPriv * __thiscall
XCam::SmartBufferPriv::SmartBufferPriv(SmartBufferPriv *this,uint param_1,SmartPtr *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = DAT_0002fd90;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  iVar6 = iVar6 + 0x2fca8;
  *(undefined4 *)(this + 0x80) = 0;
  SmartPtr<XCam::VideoBuffer>::operator=((SmartPtr<XCam::VideoBuffer> *)(this + 0x7c),param_2);
  if (*(int *)param_2 != 0) {
    piVar1 = operator_new(8);
    piVar1[1] = 1;
    iVar4 = *(int *)(iVar6 + DAT_0002fd94);
    *(int **)(this + 0x78) = piVar1;
    iVar7 = *(int *)param_2;
    *piVar1 = iVar4 + 8;
    uVar2 = *(undefined4 *)(iVar7 + 0x24);
    uVar3 = *(undefined4 *)(iVar7 + 0x28);
    uVar5 = *(undefined4 *)(iVar7 + 0x2c);
    *(undefined4 *)this = *(undefined4 *)(iVar7 + 0x20);
    *(undefined4 *)(this + 4) = uVar2;
    *(undefined4 *)(this + 8) = uVar3;
    *(undefined4 *)(this + 0xc) = uVar5;
    uVar2 = *(undefined4 *)(iVar7 + 0x34);
    uVar3 = *(undefined4 *)(iVar7 + 0x38);
    uVar5 = *(undefined4 *)(iVar7 + 0x3c);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(iVar7 + 0x30);
    *(undefined4 *)(this + 0x14) = uVar2;
    *(undefined4 *)(this + 0x18) = uVar3;
    *(undefined4 *)(this + 0x1c) = uVar5;
    uVar2 = *(undefined4 *)(iVar7 + 0x44);
    uVar3 = *(undefined4 *)(iVar7 + 0x48);
    uVar5 = *(undefined4 *)(iVar7 + 0x4c);
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(iVar7 + 0x40);
    *(undefined4 *)(this + 0x24) = uVar2;
    *(undefined4 *)(this + 0x28) = uVar3;
    *(undefined4 *)(this + 0x2c) = uVar5;
    uVar2 = *(undefined4 *)(iVar7 + 0x54);
    uVar3 = *(undefined4 *)(iVar7 + 0x58);
    uVar5 = *(undefined4 *)(iVar7 + 0x5c);
    *(undefined4 *)(this + 0x30) = *(undefined4 *)(iVar7 + 0x50);
    *(undefined4 *)(this + 0x34) = uVar2;
    *(undefined4 *)(this + 0x38) = uVar3;
    *(undefined4 *)(this + 0x3c) = uVar5;
    *(undefined4 *)(this + 0x40) = 0x8001;
    uVar2 = *(undefined4 *)(*(int *)param_2 + 0x60);
    uVar3 = *(undefined4 *)(*(int *)param_2 + 100);
    *(uint *)(this + 0x50) = param_1;
    *(undefined4 *)(this + 0x48) = uVar2;
    *(undefined4 *)(this + 0x4c) = uVar3;
    *(undefined4 *)(this + 0x54) = *(undefined4 *)(iVar6 + DAT_0002fd98);
    *(undefined4 *)(this + 0x58) = *(undefined4 *)(iVar6 + DAT_0002fd9c);
    *(undefined4 *)(this + 0x5c) = *(undefined4 *)(iVar6 + DAT_0002fda0);
    *(undefined4 *)(this + 0x60) = *(undefined4 *)(iVar6 + DAT_0002fda4);
    *(undefined4 *)(this + 100) = *(undefined4 *)(iVar6 + DAT_0002fda8);
    *(undefined4 *)(this + 0x6c) = *(undefined4 *)(iVar6 + DAT_0002fdac);
    *(undefined4 *)(this + 0x70) = 0;
    *(undefined4 *)(this + 0x68) = 0;
  }
  return this;
}



/* ===== _fini @ 0002fdb0 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::poll @ 00045000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__throw_length_error @ 00045004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_length_error(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00045008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_attr_setschedparam @ 0004500c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_attr_setschedparam(pthread_attr_t *__attr,sched_param *__param)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 00045010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00045014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__detail::_List_node_base::_M_unhook @ 00045018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__detail::_List_node_base::_M_unhook(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_attr_setinheritsched @ 0004501c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_attr_setinheritsched(pthread_attr_t *__attr,int __inherit)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clock_gettime @ 00045020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fcntl64 @ 00045024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void fcntl64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 00045028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 0004502c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_unwind_cpp_pr0 @ 00045030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 00045034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00045038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__cxx11::string::operator= @ 0004503c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__cxx11::string::operator=(string *this,string *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 00045040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::operator.delete @ 00045044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 00045048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readlink @ 0004504c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_attr_init @ 00045050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_attr_init(pthread_attr_t *__attr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_rethrow @ 00045054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_rethrow(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 00045058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::ios_base::Init::Init @ 0004505c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::ios_base::Init::Init(Init *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00045060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 00045064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::_Rb_tree_decrement @ 00045068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_decrement(_Rb_tree_node_base *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0004506c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 00045070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00045074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_end_cleanup @ 00045078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_end_cleanup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 0004507c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 00045080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__cxx11::string::operator+= @ 00045084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__cxx11::string::operator+=(string *this,string *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 00045088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 0004508c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_sigmask @ 00045090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_sigmask(int __how,__sigset_t *__newmask,__sigset_t *__oldmask)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::ios_base::Init::~Init @ 00045094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::ios_base::Init::~Init(Init *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__detail::_List_node_base::_M_transfer @ 00045098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__detail::_List_node_base::_M_transfer(_List_node_base *param_1,_List_node_base *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 0004509c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 000450a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 000450a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 000450a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::access @ 000450ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat64 @ 000450b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__cxx11::string::compare @ 000450b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::compare(string *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__cxx11::string::_S_copy_chars @ 000450b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_S_copy_chars(char *param_1,char *param_2,char *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__cxx11::string::substr @ 000450bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::substr(uint param_1,uint param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 000450c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoull @ 000450c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong strtoull(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__cxx11::string::_M_assign @ 000450c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_assign(string *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 000450cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 000450d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 000450d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__cxx11::string::at @ 000450dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::at(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_attr_destroy @ 000450e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_attr_destroy(pthread_attr_t *__attr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::_Rb_tree_increment @ 000450e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_increment(_Rb_tree_node_base *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 000450e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 000450ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__cxx11::string::find @ 000450f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::find(char param_1,uint param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_cond_signal @ 000450f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_signal(pthread_cond_t *__cond)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::localtime @ 000450f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 000450fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__dynamic_cast @ 00045100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __dynamic_cast(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uidiv @ 00045104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uidiv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_self @ 00045108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

pthread_t pthread_self(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__detail::_List_node_base::_M_hook @ 0004510c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__detail::_List_node_base::_M_hook(_List_node_base *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 00045110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strndup @ 00045114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strndup(char *__string,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_pure_virtual @ 00045118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_pure_virtual(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mmap64 @ 0004511c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap64(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off64_t __offset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sigaddset @ 00045120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaddset(sigset_t *__set,int __signo)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::operator.new @ 00045124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_cond_init @ 00045128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_init(pthread_cond_t *__cond,pthread_condattr_t *__cond_attr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_attr_setschedpolicy @ 0004512c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_attr_setschedpolicy(pthread_attr_t *__attr,int __policy)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00045134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::_Rb_tree_insert_and_rebalance @ 00045138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_insert_and_rebalance
               (bool param_1,_Rb_tree_node_base *param_2,_Rb_tree_node_base *param_3,
               _Rb_tree_node_base *param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::munmap @ 00045140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::_Rb_tree_rebalance_for_erase @ 00045144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_rebalance_for_erase(_Rb_tree_node_base *param_1,_Rb_tree_node_base *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vsnprintf @ 00045148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sigemptyset @ 0004514c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigemptyset(sigset_t *__set)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 00045150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__cxx11::string::_M_dispose @ 00045154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_dispose(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__throw_logic_error @ 00045158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_logic_error(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fseek @ 0004515c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::operator.delete @ 00045160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1,uint param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_atexit @ 00045164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_setname_np @ 00045168 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_setname_np(pthread_t __target_thread,char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__cxx11::string::_S_copy_chars @ 0004516c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_S_copy_chars(char *param_1,char *param_2,char *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__cxx11::string::_M_create @ 00045170 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_create(uint *param_1,uint param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_cond_broadcast @ 00045174 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_broadcast(pthread_cond_t *__cond)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 00045178 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::_Rb_tree_increment @ 0004517c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_increment(_Rb_tree_node_base *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_end_catch @ 00045180 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_end_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__throw_bad_alloc @ 00045184 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_cond_destroy @ 00045188 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_destroy(pthread_cond_t *__cond)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 0004518c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open64 @ 00045190 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00045194 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_begin_catch @ 00045198 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_begin_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0004519c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__cxx11::string::string @ 000451a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__cxx11::string::string(string *this,string *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 000451a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__gxx_personality_v0 @ 000451a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __gxx_personality_v0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 000451ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 000451b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_cond_wait @ 000451b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gnu_dev_minor @ 000451b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_minor(ulonglong __dev)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strdup @ 000451bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_detach @ 000451c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_detach(pthread_t __th)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_unwind_cpp_pr1 @ 000451c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 000451c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pipe @ 000451cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pipe(int *__pipedes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gnu_dev_major @ 000451d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_major(ulonglong __dev)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 000451d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000451d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


