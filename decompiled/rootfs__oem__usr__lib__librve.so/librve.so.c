// librve.so — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 000130a4 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::putchar @ 000130c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0003c00c)(__c);
  return iVar1;
}



/* ===== rve_check_logicop_param_user @ 000130d4 size=12 ===== */

void rve_check_logicop_param_user(void)

{
  (*(code *)PTR_rve_check_logicop_param_user_0003c010)();
  return;
}



/* ===== <EXTERNAL>::ioctl @ 000130e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_0003c014)(__fd);
  return iVar1;
}



/* ===== rve_check_morph_param_user @ 000130ec size=12 ===== */

void rve_check_morph_param_user(void)

{
  (*(code *)PTR_rve_check_morph_param_user_0003c018)();
  return;
}



/* ===== <EXTERNAL>::dlerror @ 000130f8 size=12 ===== */

void dlerror(void)

{
  (*(code *)PTR_dlerror_0003c01c)();
  return;
}



/* ===== <EXTERNAL>::printf @ 00013104 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0003c020)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::round @ 00013110 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double round(double __x)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_round_0003c024)(SUB84(__x,0));
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== RK_MPI_IVE_Query @ 0001311c size=12 ===== */

void RK_MPI_IVE_Query(void)

{
  (*(code *)PTR_RK_MPI_IVE_Query_0003c028)();
  return;
}



/* ===== rk_ive_pp_stcorner @ 00013128 size=12 ===== */

void rk_ive_pp_stcorner(void)

{
  (*(code *)PTR_rk_ive_pp_stcorner_0003c02c)();
  return;
}



/* ===== rve_hal_check_device @ 00013134 size=12 ===== */

void rve_hal_check_device(void)

{
  (*(code *)PTR_rve_hal_check_device_0003c030)();
  return;
}



/* ===== rve_destroy_pipeline @ 00013140 size=12 ===== */

void rve_destroy_pipeline(void)

{
  (*(code *)PTR_rve_destroy_pipeline_0003c034)();
  return;
}



/* ===== rve_hal_start @ 0001314c size=12 ===== */

void rve_hal_start(void)

{
  (*(code *)PTR_rve_hal_start_0003c038)();
  return;
}



/* ===== rve_hal_run @ 00013158 size=12 ===== */

void rve_hal_run(void)

{
  (*(code *)PTR_rve_hal_run_0003c03c)();
  return;
}



/* ===== rve_hal_ioctl_start @ 00013164 size=12 ===== */

void rve_hal_ioctl_start(void)

{
  (*(code *)PTR_rve_hal_ioctl_start_0003c040)();
  return;
}



/* ===== RK_MPI_IVE_Filter @ 00013170 size=12 ===== */

void RK_MPI_IVE_Filter(void)

{
  (*(code *)PTR_RK_MPI_IVE_Filter_0003c044)();
  return;
}



/* ===== rve_hal_init @ 0001317c size=12 ===== */

void rve_hal_init(void)

{
  (*(code *)PTR_rve_hal_init_0003c048)();
  return;
}



/* ===== RK_MPI_IVE_CvtImageToData @ 00013188 size=12 ===== */

void RK_MPI_IVE_CvtImageToData(void)

{
  (*(code *)PTR_RK_MPI_IVE_CvtImageToData_0003c04c)();
  return;
}



/* ===== rve_check_gmm_param_user @ 00013194 size=12 ===== */

void rve_check_gmm_param_user(void)

{
  (*(code *)PTR_rve_check_gmm_param_user_0003c050)();
  return;
}



/* ===== <EXTERNAL>::memcpy @ 000131a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0003c054)(__dest);
  return pvVar1;
}



/* ===== rve_check_eqhist_param_user @ 000131ac size=12 ===== */

void rve_check_eqhist_param_user(void)

{
  (*(code *)PTR_rve_check_eqhist_param_user_0003c058)();
  return;
}



/* ===== rve_hal_ioctl_cmd @ 000131b8 size=12 ===== */

void rve_hal_ioctl_cmd(void)

{
  (*(code *)PTR_rve_hal_ioctl_cmd_0003c05c)();
  return;
}



/* ===== <EXTERNAL>::puts @ 000131c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0003c060)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 000131d0 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_0003c064)();
  return;
}



/* ===== init_rve_hal_func_entires @ 000131dc size=12 ===== */

void init_rve_hal_func_entires(void)

{
  (*(code *)PTR_init_rve_hal_func_entires_0003c068)();
  return;
}



/* ===== rve_hal_deinit @ 000131e8 size=12 ===== */

void rve_hal_deinit(void)

{
  (*(code *)PTR_rve_hal_deinit_0003c06c)();
  return;
}



/* ===== rve_check_bgm_param_user @ 000131f4 size=12 ===== */

void rve_check_bgm_param_user(void)

{
  (*(code *)PTR_rve_check_bgm_param_user_0003c070)();
  return;
}



/* ===== rve_hal_translate_params_to_regs @ 00013200 size=12 ===== */

void rve_hal_translate_params_to_regs(void)

{
  (*(code *)PTR_rve_hal_translate_params_to_regs_0003c074)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 0001320c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0003c078)(__size);
  return pvVar1;
}



/* ===== SYS_MmzAlloc @ 00013218 size=12 ===== */

void SYS_MmzAlloc(void)

{
  (*(code *)PTR_SYS_MmzAlloc_0003c07c)();
  return;
}



/* ===== rve_hal_pp_stcorner @ 00013224 size=12 ===== */

void rve_hal_pp_stcorner(void)

{
  (*(code *)PTR_rve_hal_pp_stcorner_0003c080)();
  return;
}



/* ===== rve_hal_end @ 00013230 size=12 ===== */

void rve_hal_end(void)

{
  (*(code *)PTR_rve_hal_end_0003c084)();
  return;
}



/* ===== rve_hal_set_ioctl_sim @ 0001323c size=12 ===== */

void rve_hal_set_ioctl_sim(void)

{
  (*(code *)PTR_rve_hal_set_ioctl_sim_0003c088)();
  return;
}



/* ===== rve_check_lbp_param_user @ 00013248 size=12 ===== */

void rve_check_lbp_param_user(void)

{
  (*(code *)PTR_rve_check_lbp_param_user_0003c08c)();
  return;
}



/* ===== rve_entity_fill_pad_info @ 00013254 size=12 ===== */

void rve_entity_fill_pad_info(void)

{
  (*(code *)PTR_rve_entity_fill_pad_info_0003c090)();
  return;
}



/* ===== gojs_get_key @ 00013260 size=12 ===== */

void gojs_get_key(void)

{
  (*(code *)PTR_gojs_get_key_0003c094)();
  return;
}



/* ===== <EXTERNAL>::dlclose @ 0001326c size=12 ===== */

void dlclose(void)

{
  (*(code *)PTR_dlclose_0003c098)();
  return;
}



/* ===== rve_hal_find_mmz_intf @ 00013278 size=12 ===== */

void rve_hal_find_mmz_intf(void)

{
  (*(code *)PTR_rve_hal_find_mmz_intf_0003c09c)();
  return;
}



/* ===== <EXTERNAL>::__tls_get_addr @ 00013284 size=12 ===== */

void __tls_get_addr(void)

{
  (*(code *)PTR___tls_get_addr_0003c0a0)();
  return;
}



/* ===== rve_hal_pp_cast @ 00013290 size=12 ===== */

void rve_hal_pp_cast(void)

{
  (*(code *)PTR_rve_hal_pp_cast_0003c0a4)();
  return;
}



/* ===== rve_entity_pipline_start @ 0001329c size=12 ===== */

void rve_entity_pipline_start(void)

{
  (*(code *)PTR_rve_entity_pipline_start_0003c0a8)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 000132a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0003c0ac)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000132b4 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0003c0b0)();
  return;
}



/* ===== init_rve_params_to_regs_entries @ 000132c0 size=12 ===== */

void init_rve_params_to_regs_entries(void)

{
  (*(code *)PTR_init_rve_params_to_regs_entries_0003c0b4)();
  return;
}



/* ===== rve_entity_get_pads_num @ 000132cc size=12 ===== */

void rve_entity_get_pads_num(void)

{
  (*(code *)PTR_rve_entity_get_pads_num_0003c0b8)();
  return;
}



/* ===== rve_hal_translate_comm_params_to_regs @ 000132d8 size=12 ===== */

void rve_hal_translate_comm_params_to_regs(void)

{
  (*(code *)PTR_rve_hal_translate_comm_params_to_regs_0003c0bc)();
  return;
}



/* ===== rve_hal_pp_ncc @ 000132e4 size=12 ===== */

void rve_hal_pp_ncc(void)

{
  (*(code *)PTR_rve_hal_pp_ncc_0003c0c0)();
  return;
}



/* ===== rve_check_sobel_param_user @ 000132f0 size=12 ===== */

void rve_check_sobel_param_user(void)

{
  (*(code *)PTR_rve_check_sobel_param_user_0003c0c4)();
  return;
}



/* ===== rk_ive_pp_ncc @ 000132fc size=12 ===== */

void rk_ive_pp_ncc(void)

{
  (*(code *)PTR_rk_ive_pp_ncc_0003c0c8)();
  return;
}



/* ===== rve_check_create_pipeline @ 00013308 size=12 ===== */

void rve_check_create_pipeline(void)

{
  (*(code *)PTR_rve_check_create_pipeline_0003c0cc)();
  return;
}



/* ===== RK_MPI_IVE_Thresh_U8 @ 00013314 size=12 ===== */

void RK_MPI_IVE_Thresh_U8(void)

{
  (*(code *)PTR_RK_MPI_IVE_Thresh_U8_0003c0d0)();
  return;
}



/* ===== rve_check_denoise_param_user @ 00013320 size=12 ===== */

void rve_check_denoise_param_user(void)

{
  (*(code *)PTR_rve_check_denoise_param_user_0003c0d4)();
  return;
}



/* ===== rve_check_canny_param_user @ 0001332c size=12 ===== */

void rve_check_canny_param_user(void)

{
  (*(code *)PTR_rve_check_canny_param_user_0003c0d8)();
  return;
}



/* ===== <EXTERNAL>::dlopen @ 00013338 size=12 ===== */

void dlopen(void)

{
  (*(code *)PTR_dlopen_0003c0dc)();
  return;
}



/* ===== <EXTERNAL>::pow @ 00013344 size=12 ===== */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x0001334c */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double pow(double __x,double __y)

{
  (*(code *)PTR_pow_0003c0e0)(SUB84(__x,0),(int)((ulonglong)__x >> 0x20),SUB84(__y,0));
  return __x;
}



/* ===== rve_entity_get_module_ctrl_size @ 00013350 size=12 ===== */

void rve_entity_get_module_ctrl_size(void)

{
  (*(code *)PTR_rve_entity_get_module_ctrl_size_0003c0e4)();
  return;
}



/* ===== rve_entity_pipline_run @ 0001335c size=12 ===== */

void rve_entity_pipline_run(void)

{
  (*(code *)PTR_rve_entity_pipline_run_0003c0e8)();
  return;
}



/* ===== rve_check_lk_param_user @ 00013368 size=12 ===== */

void rve_check_lk_param_user(void)

{
  (*(code *)PTR_rve_check_lk_param_user_0003c0ec)();
  return;
}



/* ===== rve_entity_pipline_stop @ 00013374 size=12 ===== */

void rve_entity_pipline_stop(void)

{
  (*(code *)PTR_rve_entity_pipline_stop_0003c0f0)();
  return;
}



/* ===== rve_get_entity_name @ 00013380 size=12 ===== */

void rve_get_entity_name(void)

{
  (*(code *)PTR_rve_get_entity_name_0003c0f4)();
  return;
}



/* ===== rve_hal_pp_gmm @ 0001338c size=12 ===== */

void rve_hal_pp_gmm(void)

{
  (*(code *)PTR_rve_hal_pp_gmm_0003c0f8)();
  return;
}



/* ===== <EXTERNAL>::dlsym @ 00013398 size=12 ===== */

void dlsym(void)

{
  (*(code *)PTR_dlsym_0003c0fc)();
  return;
}



/* ===== <EXTERNAL>::memset @ 000133a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0003c100)(__s);
  return pvVar1;
}



/* ===== RK_MPI_IVE_Sub @ 000133b0 size=12 ===== */

void RK_MPI_IVE_Sub(void)

{
  (*(code *)PTR_RK_MPI_IVE_Sub_0003c104)();
  return;
}



/* ===== rve_check_dma_param_user @ 000133bc size=12 ===== */

void rve_check_dma_param_user(void)

{
  (*(code *)PTR_rve_check_dma_param_user_0003c108)();
  return;
}



/* ===== rve_check_stcorner_param_user @ 000133c8 size=12 ===== */

void rve_check_stcorner_param_user(void)

{
  (*(code *)PTR_rve_check_stcorner_param_user_0003c10c)();
  return;
}



/* ===== rk_ive_pp_gmm @ 000133d4 size=12 ===== */

void rk_ive_pp_gmm(void)

{
  (*(code *)PTR_rk_ive_pp_gmm_0003c110)();
  return;
}



/* ===== <EXTERNAL>::poll @ 000133e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_poll_0003c114)(__fds);
  return iVar1;
}



/* ===== rve_check_map_param_user @ 000133ec size=12 ===== */

void rve_check_map_param_user(void)

{
  (*(code *)PTR_rve_check_map_param_user_0003c118)();
  return;
}



/* ===== SYS_MmzFlush_End @ 000133f8 size=12 ===== */

void SYS_MmzFlush_End(void)

{
  (*(code *)PTR_SYS_MmzFlush_End_0003c11c)();
  return;
}



/* ===== <EXTERNAL>::strcmp @ 00013404 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0003c120)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 00013410 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_0003c124)(__mutex);
  return iVar1;
}



/* ===== rve_hal_hw_version @ 0001341c size=12 ===== */

void rve_hal_hw_version(void)

{
  (*(code *)PTR_rve_hal_hw_version_0003c128)();
  return;
}



/* ===== rve_check_csc_param_user @ 00013428 size=12 ===== */

void rve_check_csc_param_user(void)

{
  (*(code *)PTR_rve_check_csc_param_user_0003c12c)();
  return;
}



/* ===== rve_entity_get_buffer_info @ 00013434 size=12 ===== */

void rve_entity_get_buffer_info(void)

{
  (*(code *)PTR_rve_entity_get_buffer_info_0003c130)();
  return;
}



/* ===== rve_hal_query @ 00013440 size=12 ===== */

void rve_hal_query(void)

{
  (*(code *)PTR_rve_hal_query_0003c134)();
  return;
}



/* ===== rve_check_ncc_param_user @ 0001344c size=12 ===== */

void rve_check_ncc_param_user(void)

{
  (*(code *)PTR_rve_check_ncc_param_user_0003c138)();
  return;
}



/* ===== rve_pipeline_stream_on @ 00013458 size=12 ===== */

void rve_pipeline_stream_on(void)

{
  (*(code *)PTR_rve_pipeline_stream_on_0003c13c)();
  return;
}



/* ===== RK_MPI_IVE_Calc_Ax_By_C @ 00013464 size=12 ===== */

void RK_MPI_IVE_Calc_Ax_By_C(void)

{
  (*(code *)PTR_RK_MPI_IVE_Calc_Ax_By_C_0003c140)();
  return;
}



/* ===== rve_entity_get_io_info @ 00013470 size=12 ===== */

void rve_entity_get_io_info(void)

{
  (*(code *)PTR_rve_entity_get_io_info_0003c144)();
  return;
}



/* ===== rve_entity_pad_setup @ 0001347c size=12 ===== */

void rve_entity_pad_setup(void)

{
  (*(code *)PTR_rve_entity_pad_setup_0003c148)();
  return;
}



/* ===== SYS_MmzFlush_Start @ 00013488 size=12 ===== */

void SYS_MmzFlush_Start(void)

{
  (*(code *)PTR_SYS_MmzFlush_Start_0003c14c)();
  return;
}



/* ===== rve_check_ccl_param_user @ 00013494 size=12 ===== */

void rve_check_ccl_param_user(void)

{
  (*(code *)PTR_rve_check_ccl_param_user_0003c150)();
  return;
}



/* ===== rve_hal_llp_run @ 000134a0 size=12 ===== */

void rve_hal_llp_run(void)

{
  (*(code *)PTR_rve_hal_llp_run_0003c154)();
  return;
}



/* ===== rve_hal_llp_end @ 000134ac size=12 ===== */

void rve_hal_llp_end(void)

{
  (*(code *)PTR_rve_hal_llp_end_0003c158)();
  return;
}



/* ===== SYS_MmzFree @ 000134b8 size=12 ===== */

void SYS_MmzFree(void)

{
  (*(code *)PTR_SYS_MmzFree_0003c15c)();
  return;
}



/* ===== rve_hal_post_proc @ 000134c4 size=12 ===== */

void rve_hal_post_proc(void)

{
  (*(code *)PTR_rve_hal_post_proc_0003c160)();
  return;
}



/* ===== rve_hal_ioctl_end @ 000134d0 size=12 ===== */

void rve_hal_ioctl_end(void)

{
  (*(code *)PTR_rve_hal_ioctl_end_0003c164)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 000134dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_0003c168)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 000134e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0003c16c)();
  return piVar1;
}



/* ===== rve_pipeline_query @ 000134f4 size=12 ===== */

void rve_pipeline_query(void)

{
  (*(code *)PTR_rve_pipeline_query_0003c170)();
  return;
}



/* ===== rk_ive_pp_canny @ 00013500 size=12 ===== */

void rk_ive_pp_canny(void)

{
  (*(code *)PTR_rk_ive_pp_canny_0003c174)();
  return;
}



/* ===== rve_entity_create_link @ 0001350c size=12 ===== */

void rve_entity_create_link(void)

{
  (*(code *)PTR_rve_entity_create_link_0003c178)();
  return;
}



/* ===== RK_MPI_IVE_DMA @ 00013518 size=12 ===== */

void RK_MPI_IVE_DMA(void)

{
  (*(code *)PTR_RK_MPI_IVE_DMA_0003c17c)();
  return;
}



/* ===== rve_check_cast_param_user @ 00013524 size=12 ===== */

void rve_check_cast_param_user(void)

{
  (*(code *)PTR_rve_check_cast_param_user_0003c180)();
  return;
}



/* ===== rve_hal_llp_start @ 00013530 size=12 ===== */

void rve_hal_llp_start(void)

{
  (*(code *)PTR_rve_hal_llp_start_0003c184)();
  return;
}



/* ===== rve_check_sad_param_user @ 0001353c size=12 ===== */

void rve_check_sad_param_user(void)

{
  (*(code *)PTR_rve_check_sad_param_user_0003c188)();
  return;
}



/* ===== rve_check_integ_param_user @ 00013548 size=12 ===== */

void rve_check_integ_param_user(void)

{
  (*(code *)PTR_rve_check_integ_param_user_0003c18c)();
  return;
}



/* ===== <EXTERNAL>::open @ 00013554 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_0003c190)(__file);
  return iVar1;
}



/* ===== rve_entity_setup @ 00013560 size=12 ===== */

void rve_entity_setup(void)

{
  (*(code *)PTR_rve_entity_setup_0003c194)();
  return;
}



/* ===== <EXTERNAL>::__assert @ 0001356c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void __assert(char *__assertion,char *__file,int __line)

{
  (*(code *)PTR___assert_0003c198)(__assertion);
  return;
}



/* ===== rve_check_threshold_param_user @ 00013578 size=12 ===== */

void rve_check_threshold_param_user(void)

{
  (*(code *)PTR_rve_check_threshold_param_user_0003c19c)();
  return;
}



/* ===== rve_check_filter_param_user @ 00013584 size=12 ===== */

void rve_check_filter_param_user(void)

{
  (*(code *)PTR_rve_check_filter_param_user_0003c1a0)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00013590 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0003c1a4)();
  return;
}



/* ===== RK_MPI_IVE_Add @ 0001359c size=12 ===== */

void RK_MPI_IVE_Add(void)

{
  (*(code *)PTR_RK_MPI_IVE_Add_0003c1a8)();
  return;
}



/* ===== <EXTERNAL>::close @ 000135a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0003c1ac)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 000135b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0003c1b0)(__ptr);
  return;
}



/* ===== rve_check_magandang_param_user @ 000135c0 size=12 ===== */

void rve_check_magandang_param_user(void)

{
  (*(code *)PTR_rve_check_magandang_param_user_0003c1b4)();
  return;
}



/* ===== entry @ 000135d0 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_0001361c + 0x135e8 == DAT_00013618 + 0x135e0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00013620 + 0x135f0 + DAT_00013624);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 0001368c size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00013700 + 0x136a8;
  if (*(char *)(DAT_000136fc + 0x1369c) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_00013704) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_00013708 + 0x136c8));
  }
  entry();
  if (*(int *)(iVar1 + DAT_0001370c) != 0) {
    __deregister_frame_info(DAT_00013710 + 0x136e8);
  }
  *(undefined1 *)(DAT_00013714 + 0x136f8) = 1;
  return;
}



/* ===== _INIT_0 @ 00013718 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00013750 + 0x13728 + DAT_00013754) != 0) {
    __register_frame_info(DAT_0001375c + 0x13748,DAT_00013758 + 0x13744);
  }
  if (((DAT_00013680 + 0x13640) - (DAT_0001367c + 0x13638) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00013684 + 0x13648 + DAT_00013688);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== RK_MPI_IVE_Init @ 00013760 size=48 ===== */

undefined4 RK_MPI_IVE_Init(void)

{
  undefined4 uVar1;
  
  uVar1 = rve_check_create_pipeline(1);
  return uVar1;
}



/* ===== RK_MPI_IVE_Deinit @ 00013790 size=44 ===== */

undefined4 RK_MPI_IVE_Deinit(void)

{
  undefined4 uVar1;
  
  uVar1 = rve_destroy_pipeline();
  return uVar1;
}



/* ===== RK_MPI_IVE_Query @ 000137bc size=276 ===== */

undefined4 RK_MPI_IVE_Query(int param_1,undefined1 *param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = DAT_000138d0 + 0x137e4;
  if (param_2 == (undefined1 *)0x0) {
    uVar2 = 0x46;
  }
  else if (param_1 < 1) {
    fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_000138d4),(char *)(DAT_000138dc + 0x1382c),
            DAT_000138d8 + 0x13824,0x5c);
    uVar2 = 0x46;
  }
  else {
    iVar1 = rve_pipeline_query(param_1,param_3);
    if (iVar1 < 0) {
      fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_000138d4),(char *)(DAT_000138e4 + 0x13878),
              DAT_000138e0 + 0x13870,0x62);
      *param_2 = 0;
      if (iVar1 == -10) {
        uVar2 = 0x41;
      }
      else if (iVar1 == -3) {
        uVar2 = 0x40;
      }
      else {
        uVar2 = 0x41;
      }
    }
    else {
      *param_2 = 1;
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* ===== RK_MPI_IVE_CvtImageToData @ 000138e8 size=236 ===== */

undefined4 RK_MPI_IVE_CvtImageToData(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    fprintf((FILE *)**(undefined4 **)(DAT_000139d4 + 0x13908 + DAT_000139d8),
            (char *)(DAT_000139e0 + 0x13934),DAT_000139dc + 0x1392c,0x74);
    uVar1 = 0x46;
  }
  else if (param_2 == (undefined4 *)0x0) {
    fprintf((FILE *)**(undefined4 **)(DAT_000139d4 + 0x13908 + DAT_000139d8),
            (char *)(DAT_000139e8 + 0x1396c),DAT_000139e4 + 0x13964,0x79);
    uVar1 = 0x46;
  }
  else {
    uVar1 = param_1[1];
    *param_2 = *param_1;
    param_2[1] = uVar1;
    uVar1 = param_1[7];
    param_2[2] = param_1[6];
    param_2[3] = uVar1;
    param_2[4] = param_1[0xc];
    param_2[5] = param_1[0xf];
    param_2[6] = param_1[0x10];
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== RK_MPI_IVE_CvtDataToImage @ 000139ec size=236 ===== */

undefined4 RK_MPI_IVE_CvtDataToImage(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    fprintf((FILE *)**(undefined4 **)(DAT_00013ad8 + 0x13a0c + DAT_00013adc),
            (char *)(DAT_00013ae4 + 0x13a38),DAT_00013ae0 + 0x13a30,0x88);
    uVar1 = 0x46;
  }
  else if (param_1 == (undefined4 *)0x0) {
    fprintf((FILE *)**(undefined4 **)(DAT_00013ad8 + 0x13a0c + DAT_00013adc),
            (char *)(DAT_00013aec + 0x13a70),DAT_00013ae8 + 0x13a68,0x8d);
    uVar1 = 0x46;
  }
  else {
    uVar1 = param_1[1];
    *param_2 = *param_1;
    param_2[1] = uVar1;
    uVar1 = param_1[3];
    param_2[6] = param_1[2];
    param_2[7] = uVar1;
    param_2[0xc] = param_1[4];
    param_1[5] = param_2[0xf];
    param_1[6] = param_2[0x10];
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== RK_MPI_IVE_CvtImageToMemInfo @ 00013af0 size=216 ===== */

undefined4 RK_MPI_IVE_CvtImageToMemInfo(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    fprintf((FILE *)**(undefined4 **)(DAT_00013bc8 + 0x13b10 + DAT_00013bcc),
            (char *)(DAT_00013bd4 + 0x13b3c),DAT_00013bd0 + 0x13b34,0x9c);
    uVar1 = 0x46;
  }
  else if (param_2 == (undefined4 *)0x0) {
    fprintf((FILE *)**(undefined4 **)(DAT_00013bc8 + 0x13b10 + DAT_00013bcc),
            (char *)(DAT_00013bdc + 0x13b74),DAT_00013bd8 + 0x13b6c,0xa1);
    uVar1 = 0x46;
  }
  else {
    uVar1 = param_1[1];
    *param_2 = *param_1;
    param_2[1] = uVar1;
    uVar1 = param_1[7];
    param_2[2] = param_1[6];
    param_2[3] = uVar1;
    param_2[4] = param_1[0x10] * param_1[0xc];
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== RK_MPI_IVE_8BitTo8Bit @ 00013be0 size=552 ===== */

undefined4
RK_MPI_IVE_8BitTo8Bit(int *param_1,void *param_2,void *param_3,int *param_4,undefined1 param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint in_fpscr;
  double dVar3;
  undefined1 auStack_4c0 [800];
  undefined1 auStack_1a0 [324];
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  int local_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  int local_34;
  double dStack_30;
  undefined4 local_24;
  double dStack_20;
  undefined1 local_11;
  
  iVar2 = DAT_00013e08 + 0x13c0c;
  local_24 = 0;
  if ((((param_1 == (int *)0x0) || (param_2 == (void *)0x0)) || (param_3 == (void *)0x0)) ||
     (param_4 == (int *)0x0)) {
    uVar1 = 0x46;
  }
  else {
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_40 = 0;
    uStack_48 = uStack_3c;
    if (*param_4 == 3) {
      uStack_48 = 0;
    }
    local_5c = 0;
    uStack_58 = 0;
    local_54 = 0xff;
    local_50 = 0;
    local_4c = 0xff;
    local_44 = (int)*(char *)((int)param_4 + 6);
    local_11 = 0x18;
    dStack_20 = (double)VectorUnsignedToFloat
                                  ((uint)*(byte *)((int)param_4 + 5),(byte)(in_fpscr >> 0x16) & 3);
    dVar3 = (double)VectorSignedToFloat((uint)*(byte *)(param_4 + 1),(byte)(in_fpscr >> 0x16) & 3);
    dStack_20 = dStack_20 / dVar3;
    dVar3 = (double)VectorUnsignedToFloat(0x18,(byte)(in_fpscr >> 0x16) & 3);
    dStack_30 = pow(2.0,dVar3);
    dStack_30 = dStack_20 * dStack_30;
    dVar3 = round(dStack_30);
    iStack_40 = (uint)(0.0 < dVar3) * (int)(longlong)dVar3;
    local_34 = iStack_40;
    memset(auStack_4c0,0,0x460);
    if (param_2 != (void *)0x0) {
      memcpy(auStack_4c0,param_2,0x50);
    }
    if (param_3 != (void *)0x0) {
      memcpy(auStack_1a0,param_3,0x50);
    }
    local_38 = rve_entity_setup(0x12,&local_5c,auStack_4c0,auStack_1a0);
    iVar2 = rve_pipeline_stream_on(param_5,*(undefined4 *)(iVar2 + DAT_00013e0c));
    *param_1 = iVar2;
    if (*param_1 < 0) {
      uVar1 = 0x47;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== RK_MPI_IVE_16BitTo8Bit @ 00013e10 size=540 ===== */

undefined4
RK_MPI_IVE_16BitTo8Bit
          (int *param_1,void *param_2,void *param_3,undefined4 *param_4,undefined1 param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint in_fpscr;
  double dVar3;
  undefined1 auStack_4c0 [800];
  undefined1 auStack_1a0 [324];
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  int local_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  int local_34;
  double dStack_30;
  undefined4 local_24;
  double dStack_20;
  undefined1 local_11;
  
  iVar2 = DAT_0001402c + 0x13e3c;
  local_24 = 0;
  if ((((param_1 == (int *)0x0) || (param_2 == (void *)0x0)) || (param_3 == (void *)0x0)) ||
     (param_4 == (undefined4 *)0x0)) {
    uVar1 = 0x46;
  }
  else {
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_40 = 0;
    uStack_48 = *param_4;
    local_5c = 1;
    uStack_58 = 0;
    local_54 = 0xffff;
    local_50 = 0;
    local_4c = 0xff;
    local_44 = (int)*(char *)((int)param_4 + 7);
    local_11 = 0x18;
    dStack_20 = (double)VectorUnsignedToFloat
                                  ((uint)*(byte *)((int)param_4 + 6),(byte)(in_fpscr >> 0x16) & 3);
    dVar3 = (double)VectorSignedToFloat((uint)*(ushort *)(param_4 + 1),(byte)(in_fpscr >> 0x16) & 3)
    ;
    dStack_20 = dStack_20 / dVar3;
    dVar3 = (double)VectorUnsignedToFloat(0x18,(byte)(in_fpscr >> 0x16) & 3);
    dStack_30 = pow(2.0,dVar3);
    dStack_30 = dStack_20 * dStack_30;
    dVar3 = round(dStack_30);
    iStack_40 = (uint)(0.0 < dVar3) * (int)(longlong)dVar3;
    local_34 = iStack_40;
    memset(auStack_4c0,0,0x460);
    if (param_2 != (void *)0x0) {
      memcpy(auStack_4c0,param_2,0x50);
    }
    if (param_3 != (void *)0x0) {
      memcpy(auStack_1a0,param_3,0x50);
    }
    local_38 = rve_entity_setup(0x12,&local_5c,auStack_4c0,auStack_1a0);
    iVar2 = rve_pipeline_stream_on(param_5,*(undefined4 *)(iVar2 + DAT_00014030));
    *param_1 = iVar2;
    if (*param_1 < 0) {
      uVar1 = 0x47;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== RK_MPI_IVE_Add @ 00014034 size=456 ===== */

undefined4
RK_MPI_IVE_Add(int *param_1,void *param_2,void *param_3,void *param_4,undefined2 *param_5,
              undefined1 param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_480;
  undefined2 uStack_47c;
  undefined2 uStack_47a;
  undefined1 auStack_478 [80];
  undefined1 auStack_428 [720];
  undefined1 auStack_158 [320];
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = DAT_000141fc + 0x14060;
  local_18 = 0;
  if ((((param_1 == (int *)0x0) || (param_2 == (void *)0x0)) || (param_3 == (void *)0x0)) ||
     ((param_4 == (void *)0x0 || (param_5 == (undefined2 *)0x0)))) {
    uVar1 = 0x46;
  }
  else {
    memset(auStack_478,0,0x460);
    if (param_2 != (void *)0x0) {
      memcpy(auStack_478,param_2,0x50);
    }
    if (param_3 != (void *)0x0) {
      memcpy(auStack_428,param_3,0x50);
    }
    if (param_4 != (void *)0x0) {
      memcpy(auStack_158,param_4,0x50);
    }
    _local_480 = CONCAT26(param_5[1],CONCAT24(*param_5,5));
    local_14 = rve_entity_setup(0xd,&local_480,auStack_478,auStack_158);
    iVar2 = rve_pipeline_stream_on(param_6,*(undefined4 *)(iVar2 + DAT_00014200));
    *param_1 = iVar2;
    if (*param_1 < 0) {
      uVar1 = 0x47;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== RK_MPI_IVE_And @ 00014204 size=404 ===== */

undefined4 RK_MPI_IVE_And(int *param_1,void *param_2,void *param_3,void *param_4,undefined1 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_480;
  undefined1 auStack_478 [80];
  undefined1 auStack_428 [720];
  undefined1 auStack_158 [320];
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = DAT_00014398 + 0x14230;
  local_18 = 0;
  if ((((param_1 == (int *)0x0) || (param_2 == (void *)0x0)) || (param_3 == (void *)0x0)) ||
     (param_4 == (void *)0x0)) {
    uVar1 = 0x46;
  }
  else {
    memset(auStack_478,0,0x460);
    if (param_2 != (void *)0x0) {
      memcpy(auStack_478,param_2,0x50);
    }
    if (param_3 != (void *)0x0) {
      memcpy(auStack_428,param_3,0x50);
    }
    if (param_4 != (void *)0x0) {
      memcpy(auStack_158,param_4,0x50);
    }
    local_480 = 0;
    local_14 = rve_entity_setup(0xd,&local_480,auStack_478,auStack_158);
    iVar2 = rve_pipeline_stream_on(param_5,*(undefined4 *)(iVar2 + DAT_0001439c));
    *param_1 = iVar2;
    if (*param_1 < 0) {
      uVar1 = 0x47;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== RK_MPI_IVE_CannyEdge @ 000143a0 size=988 ===== */

undefined4
RK_MPI_IVE_CannyEdge
          (int *param_1,void *param_2,void *param_3,undefined4 *param_4,undefined4 *param_5,
          undefined1 param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 local_508;
  undefined4 uStack_504;
  undefined4 local_500;
  undefined4 uStack_4fc;
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  undefined4 local_4f0;
  undefined4 uStack_4ec;
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  undefined4 local_4e0;
  undefined1 uStack_4dc;
  undefined3 uStack_4db;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 local_4c0;
  undefined4 uStack_4bc;
  uint local_4a8;
  uint local_49c;
  undefined4 local_498;
  undefined1 auStack_488 [80];
  undefined1 auStack_438 [720];
  undefined1 auStack_168 [80];
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_e8;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  
  iVar2 = DAT_0001477c + 0x143cc;
  local_1c = 0;
  if ((((param_1 == (int *)0x0) || (param_2 == (void *)0x0)) || (param_3 == (void *)0x0)) ||
     (param_5 == (undefined4 *)0x0)) {
    uVar1 = 0x46;
  }
  else {
    memset(auStack_488,0,0x460);
    if (param_2 != (void *)0x0) {
      memcpy(auStack_488,param_2,0x50);
    }
    local_18 = param_5;
    memset(&local_4d8,0,0x50);
    local_4d8 = *local_18;
    uStack_4d4 = local_18[1];
    local_4c0 = local_18[2];
    uStack_4bc = local_18[3];
    local_4a8 = (*(int *)((int)param_2 + 0x3c) + 0x3fU & 0xffffffc0) >> 2;
    local_49c = (*(int *)((int)param_2 + 0x3c) + 0x3fU & 0xffffffc0) >> 2;
    local_498 = *(undefined4 *)((int)param_2 + 0x40);
    memcpy(auStack_438,&local_4d8,0x50);
    if (param_3 != (void *)0x0) {
      memcpy(auStack_168,param_3,0x50);
    }
    if (param_4 != (undefined4 *)0x0) {
      local_118 = *param_4;
      local_114 = param_4[1];
      local_100 = param_4[2];
      local_fc = param_4[3];
      local_e8 = param_4[4];
      local_dc = param_4[4];
      local_d8 = 1;
      local_d4 = 0;
      local_d0 = param_4[5];
      local_14 = param_4;
    }
    uStack_514 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_510 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_50c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_518 = 0;
    local_508 = 0;
    local_500 = 0x3000100;
    local_4f8 = param_5[6];
    uStack_4f4 = param_5[7];
    local_4f0 = param_5[8];
    uStack_4ec = param_5[9];
    local_4e8 = param_5[10];
    uStack_4e4 = param_5[0xb];
    local_4e0 = param_5[0xc];
    _uStack_4dc = CONCAT31((int3)((uint)uStack_514 >> 8),*(undefined1 *)(param_5 + 0xd));
    uStack_4fc = CONCAT13((char)((uint)uStack_514 >> 0x18),0x10500);
    uStack_504 = uStack_514;
    local_20 = rve_entity_setup(2,&local_518,auStack_488,auStack_168);
    uStack_4fc._0_3_ = CONCAT12(2,(undefined2)uStack_4fc);
    local_24 = rve_entity_setup(2,&local_518,auStack_488,auStack_168);
    uStack_4fc._0_3_ = CONCAT12(3,(undefined2)uStack_4fc);
    local_28 = rve_entity_setup(2,&local_518,auStack_488,auStack_168);
    iVar2 = rve_pipeline_stream_on(param_6,*(undefined4 *)(iVar2 + DAT_00014780));
    *param_1 = iVar2;
    if (*param_1 < 0) {
      uVar1 = 0x47;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== RK_MPI_IVE_CCL @ 00014784 size=808 ===== */

undefined4
RK_MPI_IVE_CCL(int *param_1,void *param_2,undefined4 *param_3,int param_4,undefined1 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_488 [80];
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 local_420;
  undefined4 uStack_41c;
  undefined4 local_408;
  undefined4 local_3fc;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_138;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined1 auStack_118 [80];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_98;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  
  iVar2 = DAT_00014aac + 0x147b0;
  local_20 = 0;
  if ((((param_1 == (int *)0x0) || (param_2 == (void *)0x0)) || (param_3 == (undefined4 *)0x0)) ||
     (param_4 == 0)) {
    uVar1 = 0x46;
  }
  else if (*(uint *)(param_4 + 0x18) <
           (uint)(*(int *)((int)param_2 + 0x40) * *(int *)((int)param_2 + 0x3c))) {
    fprintf((FILE *)**(undefined4 **)(iVar2 + DAT_00014ab0),(char *)(DAT_00014ab8 + 0x14834),
            DAT_00014ab4 + 0x1482c,0x197);
    uVar1 = 0x49;
  }
  else {
    memset(auStack_488,0,0x460);
    if (param_2 != (void *)0x0) {
      memcpy(auStack_488,param_2,0x50);
    }
    if (param_4 != -8) {
      local_1c = (undefined4 *)(param_4 + 8);
      local_438 = *local_1c;
      uStack_434 = *(undefined4 *)(param_4 + 0xc);
      local_420 = *(undefined4 *)(param_4 + 0x10);
      uStack_41c = *(undefined4 *)(param_4 + 0x14);
      local_408 = *(undefined4 *)(param_4 + 0x18);
      local_3fc = *(undefined4 *)(param_4 + 0x18);
      local_3f8 = 1;
      local_3f4 = 0;
      local_3f0 = *(undefined4 *)(param_4 + 0x1c);
      local_18 = (undefined4 *)(param_4 + 8);
      local_168 = *local_18;
      local_164 = *(undefined4 *)(param_4 + 0xc);
      local_150 = *(undefined4 *)(param_4 + 0x10);
      local_14c = *(undefined4 *)(param_4 + 0x14);
      local_138 = *(undefined4 *)(param_4 + 0x18);
      local_12c = *(undefined4 *)(param_4 + 0x18);
      local_128 = 1;
      local_124 = 0;
      local_120 = *(undefined4 *)(param_4 + 0x1c);
    }
    if (param_2 != (void *)0x0) {
      memcpy(auStack_118,param_2,0x50);
    }
    if (param_3 != (undefined4 *)0x0) {
      local_c8 = *param_3;
      local_c4 = param_3[1];
      local_b0 = param_3[2];
      local_ac = param_3[3];
      local_98 = param_3[4];
      local_8c = param_3[4];
      local_88 = 1;
      local_84 = 0;
      local_80 = param_3[5];
      local_14 = param_3;
    }
    local_24 = rve_entity_setup(3,param_4,auStack_488,&local_168);
    rve_entity_create_link(local_24,2,local_24,1,0);
    iVar2 = rve_pipeline_stream_on(param_5,*(undefined4 *)(iVar2 + DAT_00014abc));
    *param_1 = iVar2;
    if (*param_1 < 0) {
      uVar1 = 0x47;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== RK_MPI_IVE_CSC @ 00014ac0 size=2784 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
RK_MPI_IVE_CSC(int *param_1,void *param_2,void *param_3,undefined4 *param_4,undefined1 param_5)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  undefined4 local_4e0;
  undefined4 uStack_4dc;
  undefined4 local_4d8;
  undefined4 local_4d4;
  uint local_4d0;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 local_4c0;
  undefined4 uStack_4bc;
  undefined4 local_4b8;
  undefined4 local_4b4;
  uint local_4b0;
  undefined8 local_4a8;
  undefined1 auStack_4a0 [80];
  undefined4 local_450;
  undefined4 uStack_44c;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 local_420;
  undefined4 local_414;
  uint local_410;
  undefined4 local_40c;
  undefined4 local_400;
  undefined4 uStack_3fc;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 local_3d0;
  undefined4 local_3c4;
  uint local_3c0;
  undefined4 local_3bc;
  undefined1 auStack_180 [80];
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_100;
  undefined4 local_f4;
  uint local_f0;
  undefined4 local_ec;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_b0;
  undefined4 local_a4;
  uint local_a0;
  undefined4 local_9c;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined1 local_19;
  undefined4 local_18;
  undefined4 *local_14;
  
  iVar4 = DAT_000155a0 + 0x14aec;
  local_18 = 0;
  if ((((param_1 == (int *)0x0) || (param_2 == (void *)0x0)) || (param_3 == (void *)0x0)) ||
     (param_4 == (undefined4 *)0x0)) {
    return 0x46;
  }
  local_19 = 0;
  memset(auStack_4a0,0,0x460);
  if (param_2 != (void *)0x0) {
    memcpy(auStack_4a0,param_2,0x50);
  }
  if (param_3 != (void *)0x0) {
    memcpy(auStack_180,param_3,0x50);
  }
  local_4a8 = 0;
  switch(*param_4) {
  case 0:
    goto LAB_00014c8c;
  case 1:
    goto LAB_00014c8c;
  case 2:
    goto LAB_00014c8c;
  case 3:
LAB_00014c8c:
    local_19 = *(int *)((int)param_3 + 0x44) == 10;
    if (*(int *)((int)param_3 + 0x44) == 10) {
      bVar1 = 2;
    }
    else {
      bVar1 = 3;
    }
    local_4a8 = (ulonglong)bVar1 << 0x28;
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    break;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    break;
  case 0xc:
    break;
  case 0xd:
    break;
  case 0xe:
    break;
  case 0xf:
    break;
  case 0x10:
    goto LAB_00014cd8;
  case 0x11:
    goto LAB_00014cd8;
  case 0x12:
    goto LAB_00014cd8;
  case 0x13:
LAB_00014cd8:
    if (*(int *)((int)param_3 + 0x44) == 10) {
      uVar2 = 2;
    }
    else {
      uVar2 = 3;
    }
    local_4a8._0_6_ = CONCAT15(uVar2,1);
    local_4a8 = (ulonglong)(uint6)local_4a8;
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
    goto LAB_00014d0c;
  case 0x21:
    goto LAB_00014d0c;
  case 0x22:
    goto LAB_00014d0c;
  case 0x23:
LAB_00014d0c:
    if (*(int *)((int)param_2 + 0x44) == 10) {
      uVar2 = 2;
    }
    else {
      uVar2 = 3;
    }
    local_4a8._0_5_ = CONCAT14(uVar2,2);
    local_4a8 = (ulonglong)(uint5)local_4a8;
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
    goto LAB_00014d40;
  case 0x31:
    goto LAB_00014d40;
  case 0x32:
    goto LAB_00014d40;
  case 0x33:
LAB_00014d40:
    if (*(int *)((int)param_2 + 0x44) == 10) {
      uVar2 = 2;
    }
    else {
      uVar2 = 3;
    }
    local_4a8._0_5_ = CONCAT14(uVar2,3);
    if (*(int *)((int)param_3 + 0x44) == 10) {
      uVar2 = 2;
    }
    else {
      uVar2 = 3;
    }
    local_4a8._0_6_ = CONCAT15(uVar2,(uint5)local_4a8);
    local_4a8 = (ulonglong)(uint6)local_4a8;
  }
  switch(*param_4) {
  case 0:
    break;
  case 1:
    goto LAB_00014e88;
  case 2:
    goto LAB_00014e9c;
  case 3:
    goto LAB_00014eb0;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    break;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    break;
  case 0xc:
    break;
  case 0xd:
    break;
  case 0xe:
    break;
  case 0xf:
    break;
  case 0x10:
    break;
  case 0x11:
    goto LAB_00014e88;
  case 0x12:
    goto LAB_00014e9c;
  case 0x13:
    goto LAB_00014eb0;
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
    goto LAB_00014e88;
  case 0x22:
    goto LAB_00014e9c;
  case 0x23:
    goto LAB_00014eb0;
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
LAB_00014e88:
    local_4a8._0_7_ = CONCAT16(1,(uint6)local_4a8);
    local_4a8 = CONCAT17(1,(undefined7)local_4a8);
    break;
  case 0x32:
LAB_00014e9c:
    local_4a8._0_7_ = CONCAT16(2,(uint6)local_4a8);
    local_4a8 = CONCAT17(2,(undefined7)local_4a8);
    break;
  case 0x33:
LAB_00014eb0:
    local_4a8._0_7_ = CONCAT16(3,(uint6)local_4a8);
    local_4a8 = CONCAT17(3,(undefined7)local_4a8);
  }
  if (local_4a8._4_1_ == '\0') {
    local_4c0 = *(undefined4 *)((int)param_2 + 0x20);
    uStack_4bc = *(undefined4 *)((int)param_2 + 0x24);
    local_4c8 = *(undefined4 *)((int)param_2 + 8);
    uStack_4c4 = *(undefined4 *)((int)param_2 + 0xc);
    local_4b8 = *(undefined4 *)((int)param_2 + 0x34);
    local_4b4 = *(undefined4 *)((int)param_2 + 0x3c);
    local_4b0 = *(uint *)((int)param_2 + 0x40) >> 1;
    local_14 = &local_4c8;
    local_40c = 0;
    local_450 = local_4c8;
    uStack_44c = uStack_4c4;
    local_438 = local_4c0;
    uStack_434 = uStack_4bc;
    local_420 = local_4b8;
    local_414 = local_4b4;
    local_410 = local_4b0;
  }
  else if (local_4a8._4_1_ == '\x01') {
    local_4c0 = *(undefined4 *)((int)param_2 + 0x20);
    uStack_4bc = *(undefined4 *)((int)param_2 + 0x24);
    local_4c8 = *(undefined4 *)((int)param_2 + 8);
    uStack_4c4 = *(undefined4 *)((int)param_2 + 0xc);
    local_4b8 = *(undefined4 *)((int)param_2 + 0x34);
    local_4b4 = *(undefined4 *)((int)param_2 + 0x3c);
    local_4b0 = *(uint *)((int)param_2 + 0x40);
    local_20 = &local_4c8;
    local_40c = 0;
    local_450 = local_4c8;
    uStack_44c = uStack_4c4;
    local_438 = local_4c0;
    uStack_434 = uStack_4bc;
    local_420 = local_4b8;
    local_414 = local_4b4;
    local_410 = local_4b0;
  }
  else if (local_4a8._4_1_ == '\x03') {
    local_4e0 = *(undefined4 *)((int)param_2 + 0x20);
    uStack_4dc = *(undefined4 *)((int)param_2 + 0x24);
    local_4e8 = *(undefined4 *)((int)param_2 + 8);
    uStack_4e4 = *(undefined4 *)((int)param_2 + 0xc);
    local_4d8 = *(undefined4 *)((int)param_2 + 0x34);
    local_4d4 = *(undefined4 *)((int)param_2 + 0x3c);
    local_4d0 = *(uint *)((int)param_2 + 0x40);
    local_24 = &local_4e8;
    local_40c = 0;
    local_4c0 = *(undefined4 *)((int)param_2 + 0x28);
    uStack_4bc = *(undefined4 *)((int)param_2 + 0x2c);
    local_4c8 = *(undefined4 *)((int)param_2 + 0x10);
    uStack_4c4 = *(undefined4 *)((int)param_2 + 0x14);
    local_4b8 = *(undefined4 *)((int)param_2 + 0x38);
    local_4b4 = *(undefined4 *)((int)param_2 + 0x3c);
    local_4b0 = *(uint *)((int)param_2 + 0x40);
    local_28 = &local_4c8;
    local_3bc = 0;
    local_450 = local_4e8;
    uStack_44c = uStack_4e4;
    local_438 = local_4e0;
    uStack_434 = uStack_4dc;
    local_420 = local_4d8;
    local_414 = local_4d4;
    local_410 = local_4d0;
    local_400 = local_4c8;
    uStack_3fc = uStack_4c4;
    local_3e8 = local_4c0;
    uStack_3e4 = uStack_4bc;
    local_3d0 = local_4b8;
    local_3c4 = local_4b4;
    local_3c0 = local_4b0;
  }
  if (local_4a8._5_1_ == '\0') {
    local_4c0 = *(undefined4 *)((int)param_3 + 0x20);
    uStack_4bc = *(undefined4 *)((int)param_3 + 0x24);
    local_4c8 = *(undefined4 *)((int)param_3 + 8);
    uStack_4c4 = *(undefined4 *)((int)param_3 + 0xc);
    local_4b8 = *(undefined4 *)((int)param_3 + 0x34);
    local_4b4 = *(undefined4 *)((int)param_3 + 0x3c);
    local_4b0 = *(uint *)((int)param_3 + 0x40) >> 1;
    local_2c = &local_4c8;
    local_ec = 0;
    local_130 = local_4c8;
    local_12c = uStack_4c4;
    local_118 = local_4c0;
    local_114 = uStack_4bc;
    local_100 = local_4b8;
    local_f4 = local_4b4;
    local_f0 = local_4b0;
  }
  else if (local_4a8._5_1_ == '\x01') {
    local_4c0 = *(undefined4 *)((int)param_3 + 0x20);
    uStack_4bc = *(undefined4 *)((int)param_3 + 0x24);
    local_4c8 = *(undefined4 *)((int)param_3 + 8);
    uStack_4c4 = *(undefined4 *)((int)param_3 + 0xc);
    local_4b8 = *(undefined4 *)((int)param_3 + 0x34);
    local_4b4 = *(undefined4 *)((int)param_3 + 0x3c);
    local_4b0 = *(uint *)((int)param_3 + 0x40);
    local_30 = &local_4c8;
    local_ec = 0;
    local_130 = local_4c8;
    local_12c = uStack_4c4;
    local_118 = local_4c0;
    local_114 = uStack_4bc;
    local_100 = local_4b8;
    local_f4 = local_4b4;
    local_f0 = local_4b0;
  }
  else if (local_4a8._5_1_ == '\x03') {
    local_4e0 = *(undefined4 *)((int)param_3 + 0x20);
    uStack_4dc = *(undefined4 *)((int)param_3 + 0x24);
    local_4e8 = *(undefined4 *)((int)param_3 + 8);
    uStack_4e4 = *(undefined4 *)((int)param_3 + 0xc);
    local_4d8 = *(undefined4 *)((int)param_3 + 0x34);
    local_4d4 = *(undefined4 *)((int)param_3 + 0x3c);
    local_4d0 = *(uint *)((int)param_3 + 0x40);
    local_34 = &local_4e8;
    local_ec = 0;
    local_4c0 = *(undefined4 *)((int)param_3 + 0x28);
    uStack_4bc = *(undefined4 *)((int)param_3 + 0x2c);
    local_4c8 = *(undefined4 *)((int)param_3 + 0x10);
    uStack_4c4 = *(undefined4 *)((int)param_3 + 0x14);
    local_4b8 = *(undefined4 *)((int)param_3 + 0x38);
    local_4b4 = *(undefined4 *)((int)param_3 + 0x3c);
    local_4b0 = *(uint *)((int)param_3 + 0x40);
    local_38 = &local_4c8;
    local_9c = 0;
    local_130 = local_4e8;
    local_12c = uStack_4e4;
    local_118 = local_4e0;
    local_114 = uStack_4dc;
    local_100 = local_4d8;
    local_f4 = local_4d4;
    local_f0 = local_4d0;
    local_e0 = local_4c8;
    local_dc = uStack_4c4;
    local_c8 = local_4c0;
    local_c4 = uStack_4bc;
    local_b0 = local_4b8;
    local_a4 = local_4b4;
    local_a0 = local_4b0;
  }
  local_3c = rve_entity_setup(0xb,&local_4a8,auStack_4a0,auStack_180);
  iVar4 = rve_pipeline_stream_on(param_5,*(undefined4 *)(iVar4 + DAT_000155a4));
  *param_1 = iVar4;
  if (*param_1 < 0) {
    uVar3 = 0x47;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== RK_MPI_IVE_Dilate @ 000155a8 size=448 ===== */

undefined4
RK_MPI_IVE_Dilate(int *param_1,void *param_2,void *param_3,int *param_4,undefined1 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_494;
  undefined4 uStack_490;
  undefined1 uStack_48c;
  undefined1 local_48b;
  undefined2 uStack_48a;
  undefined1 uStack_488;
  undefined1 uStack_487;
  undefined2 uStack_486;
  undefined1 uStack_484;
  int iStack_483;
  int local_47f;
  undefined1 local_47b;
  undefined1 auStack_478 [800];
  undefined1 auStack_158 [320];
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = DAT_00015768 + 0x155d4;
  local_18 = 0;
  if ((((param_1 == (int *)0x0) || (param_2 == (void *)0x0)) || (param_3 == (void *)0x0)) ||
     (param_4 == (int *)0x0)) {
    uVar1 = 0x46;
  }
  else {
    memset(auStack_478,0,0x460);
    if (param_2 != (void *)0x0) {
      memcpy(auStack_478,param_2,0x50);
    }
    if (param_3 != (void *)0x0) {
      memcpy(auStack_158,param_3,0x50);
    }
    iVar4 = param_4[2];
    iVar3 = param_4[3];
    local_494 = *param_4 << 8;
    uStack_490._1_3_ = (undefined3)param_4[1];
    uStack_490 = CONCAT31(uStack_490._1_3_,(char)((uint)*param_4 >> 0x18));
    uStack_48c = (undefined1)((uint)param_4[1] >> 0x18);
    local_48b = (undefined1)iVar4;
    uStack_48a = (undefined2)((uint)iVar4 >> 8);
    uStack_488 = (undefined1)((uint)iVar4 >> 0x18);
    uStack_487 = (undefined1)iVar3;
    uStack_486 = (undefined2)((uint)iVar3 >> 8);
    uStack_484 = (undefined1)((uint)iVar3 >> 0x18);
    iStack_483 = param_4[4];
    local_47f = param_4[5];
    local_47b = (undefined1)param_4[6];
    local_14 = rve_entity_setup(0x10,&local_494,auStack_478,auStack_158);
    iVar2 = rve_pipeline_stream_on(param_5,*(undefined4 *)(iVar2 + DAT_0001576c));
    *param_1 = iVar2;
    if (*param_1 < 0) {
      uVar1 = 0x47;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== RK_MPI_IVE_DMA @ 00015770 size=692 ===== */

undefined4
RK_MPI_IVE_DMA(int *param_1,undefined4 *param_2,undefined4 *param_3,int *param_4,undefined1 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 local_470;
  undefined4 uStack_46c;
  undefined4 local_458;
  undefined4 local_44c;
  undefined4 local_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_138;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  
  iVar2 = DAT_00015a24 + 0x1579c;
  local_18 = 0;
  if (((param_1 == (int *)0x0) || (param_2 == (undefined4 *)0x0)) || (param_4 == (int *)0x0)) {
    uVar1 = 0x46;
  }
  else {
    memset(&local_488,0,0x460);
    if ((*param_4 == 0) || (*param_4 == 1)) {
      if (param_3 == (undefined4 *)0x0) {
        return 0x46;
      }
      if (param_2 != (undefined4 *)0x0) {
        local_488 = *param_2;
        uStack_484 = param_2[1];
        local_470 = param_2[2];
        uStack_46c = param_2[3];
        local_458 = param_2[4];
        local_44c = param_2[5];
        local_448 = param_2[6];
        local_444 = 0;
        local_440 = param_2[7];
        local_1c = param_2;
      }
      if (param_3 != (undefined4 *)0x0) {
        local_168 = *param_3;
        local_164 = param_3[1];
        local_150 = param_3[2];
        local_14c = param_3[3];
        local_138 = param_3[4];
        local_12c = param_3[5];
        local_128 = param_3[6];
        local_124 = 0;
        local_120 = param_3[7];
        local_20 = param_3;
      }
    }
    else if (((*param_4 == 2) || (*param_4 == 3)) && (param_2 != (undefined4 *)0x0)) {
      local_168 = *param_2;
      local_164 = param_2[1];
      local_150 = param_2[2];
      local_14c = param_2[3];
      local_138 = param_2[4];
      local_12c = param_2[5];
      local_128 = param_2[6];
      local_124 = 0;
      local_120 = param_2[7];
      local_14 = param_2;
    }
    local_24 = rve_entity_setup(10,param_4,&local_488,&local_168);
    iVar2 = rve_pipeline_stream_on(param_5,*(undefined4 *)(iVar2 + DAT_00015a28));
    *param_1 = iVar2;
    if (*param_1 < 0) {
      uVar1 = 0x47;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== RK_MPI_IVE_EqualizeHist @ 00015a2c size=556 ===== */

undefined4
RK_MPI_IVE_EqualizeHist
          (int *param_1,void *param_2,void *param_3,undefined4 *param_4,undefined1 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_8a0 [264];
  undefined1 auStack_480 [80];
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 local_400;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined1 auStack_160 [320];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  void *local_14;
  
  iVar2 = DAT_00015c58 + 0x15a58;
  local_1c = 0;
  if ((((param_1 == (int *)0x0) || (param_2 == (void *)0x0)) || (param_3 == (void *)0x0)) ||
     (param_4 == (undefined4 *)0x0)) {
    uVar1 = 0x46;
  }
  else {
    memset(auStack_480,0,0x460);
    if (param_2 != (void *)0x0) {
      memcpy(auStack_480,param_2,0x50);
    }
    if (param_4 != (undefined4 *)0xfffffbf8) {
      local_18 = param_4 + 0x102;
      local_430 = *local_18;
      uStack_42c = param_4[0x103];
      local_418 = param_4[0x104];
      uStack_414 = param_4[0x105];
      local_400 = param_4[0x106];
      local_3f4 = param_4[0x106];
      local_3f0 = 1;
      local_3ec = 0;
      local_3e8 = param_4[0x107];
    }
    if (param_3 != (void *)0x0) {
      memcpy(auStack_160,param_3,0x50);
    }
    memset(local_8a0,0,0x420);
    local_8a0[0] = *param_4;
    local_14 = (void *)param_4[0x104];
    if (local_14 != (void *)0x0) {
      SYS_MmzFlush_Start(local_14);
      memcpy(local_14,param_4 + 1,0x400);
      SYS_MmzFlush_End(local_14);
    }
    local_20 = rve_entity_setup(0xc,local_8a0,auStack_480,auStack_160);
    iVar2 = rve_pipeline_stream_on(param_5,*(undefined4 *)(iVar2 + DAT_00015c5c));
    *param_1 = iVar2;
    if (*param_1 < 0) {
      uVar1 = 0x47;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== RK_MPI_IVE_Erode @ 00015c60 size=448 ===== */

undefined4
RK_MPI_IVE_Erode(int *param_1,void *param_2,void *param_3,undefined4 *param_4,undefined1 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_494;
  undefined3 uStack_493;
  undefined4 uStack_490;
  undefined1 uStack_48c;
  undefined1 local_48b;
  undefined2 uStack_48a;
  undefined1 uStack_488;
  undefined1 uStack_487;
  undefined2 uStack_486;
  undefined1 uStack_484;
  undefined4 uStack_483;
  undefined4 local_47f;
  undefined1 local_47b;
  undefined1 auStack_478 [800];
  undefined1 auStack_158 [320];
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = DAT_00015e20 + 0x15c8c;
  local_18 = 0;
  if ((((param_1 == (int *)0x0) || (param_2 == (void *)0x0)) || (param_3 == (void *)0x0)) ||
     (param_4 == (undefined4 *)0x0)) {
    uVar1 = 0x46;
  }
  else {
    memset(auStack_478,0,0x460);
    if (param_2 != (void *)0x0) {
      memcpy(auStack_478,param_2,0x50);
    }
    if (param_3 != (void *)0x0) {
      memcpy(auStack_158,param_3,0x50);
    }
    uVar3 = param_4[2];
    uVar1 = param_4[3];
    _local_494 = CONCAT31((int3)*param_4,1);
    uStack_490._1_3_ = (undefined3)param_4[1];
    uStack_490 = CONCAT31(uStack_490._1_3_,(char)((uint)*param_4 >> 0x18));
    uStack_48c = (undefined1)((uint)param_4[1] >> 0x18);
    local_48b = (undefined1)uVar3;
    uStack_48a = (undefined2)((uint)uVar3 >> 8);
    uStack_488 = (undefined1)((uint)uVar3 >> 0x18);
    uStack_487 = (undefined1)uVar1;
    uStack_486 = (undefined2)((uint)uVar1 >> 8);
    uStack_484 = (undefined1)((uint)uVar1 >> 0x18);
    uStack_483 = param_4[4];
    local_47f = param_4[5];
    local_47b = *(undefined1 *)(param_4 + 6);
    local_14 = rve_entity_setup(0x10,&local_494,auStack_478,auStack_158);
    iVar2 = rve_pipeline_stream_on(param_5,*(undefined4 *)(iVar2 + DAT_00015e24));
    *param_1 = iVar2;
    if (*param_1 < 0) {
      uVar1 = 0x47;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== RK_MPI_IVE_Filter @ 00015e28 size=572 ===== */

undefined4
RK_MPI_IVE_Filter(int *param_1,void *param_2,void *param_3,int *param_4,undefined1 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 local_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined1 uStack_484;
  undefined2 local_483;
  undefined1 local_481;
  undefined1 auStack_480 [800];
  undefined1 auStack_160 [324];
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  
  iVar3 = DAT_00016064 + 0x15e54;
  local_18 = 0;
  if ((((param_1 == (int *)0x0) || (param_2 == (void *)0x0)) || (param_3 == (void *)0x0)) ||
     (param_4 == (int *)0x0)) {
    uVar2 = 0x46;
  }
  else {
    memset(auStack_480,0,0x460);
    if (param_2 != (void *)0x0) {
      memcpy(auStack_480,param_2,0x50);
    }
    if (param_3 != (void *)0x0) {
      memcpy(auStack_160,param_3,0x50);
    }
    iVar1 = *param_4;
    local_49c = iVar1 << 8;
    uStack_498._1_3_ = (undefined3)param_4[1];
    uStack_498 = CONCAT31(uStack_498._1_3_,(char)((uint)iVar1 >> 0x18));
    uStack_494._1_3_ = (undefined3)param_4[2];
    uStack_494 = CONCAT31(uStack_494._1_3_,(char)((uint)param_4[1] >> 0x18));
    uStack_490._1_3_ = (undefined3)param_4[3];
    uStack_490 = CONCAT31(uStack_490._1_3_,(char)((uint)param_4[2] >> 0x18));
    uStack_48c._1_3_ = (undefined3)param_4[4];
    uStack_48c = CONCAT31(uStack_48c._1_3_,(char)((uint)param_4[3] >> 0x18));
    uStack_488._1_3_ = (undefined3)param_4[5];
    uStack_488 = CONCAT31(uStack_488._1_3_,(char)((uint)param_4[4] >> 0x18));
    uStack_484 = (undefined1)((uint)param_4[5] >> 0x18);
    local_483 = (short)param_4[6];
    local_481 = *(undefined1 *)((int)param_4 + 0x1a);
    local_4ac = *(undefined4 *)(DAT_00016068 + 0x15f78);
    uStack_4a8 = *(undefined4 *)(DAT_00016068 + 0x15f7c);
    uStack_4a4 = *(undefined4 *)(DAT_00016068 + 0x15f80);
    uStack_4a0 = *(undefined4 *)(DAT_00016068 + 0x15f84);
    for (local_14 = 0; local_14 < 0x10; local_14 = local_14 + 1) {
      if (*(char *)((int)&local_49c + *(byte *)((int)&local_4ac + local_14) + 3) != '\0') {
        local_49c = CONCAT31((int3)iVar1,1);
        break;
      }
    }
    local_1c = rve_entity_setup(8,&local_49c,auStack_480,auStack_160);
    iVar3 = rve_pipeline_stream_on(param_5,*(undefined4 *)(iVar3 + DAT_0001606c));
    *param_1 = iVar3;
    if (*param_1 < 0) {
      uVar2 = 0x47;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* ===== RK_MPI_IVE_Hist @ 00016070 size=536 ===== */

undefined4 RK_MPI_IVE_Hist(int *param_1,void *param_2,undefined4 *param_3,undefined1 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_8a0 [264];
  undefined1 auStack_480 [80];
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 local_400;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_130;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  
  iVar2 = DAT_00016288 + 0x1609c;
  local_1c = 0;
  if (((param_1 == (int *)0x0) || (param_2 == (void *)0x0)) || (param_3 == (undefined4 *)0x0)) {
    uVar1 = 0x46;
  }
  else {
    memset(auStack_480,0,0x460);
    if (param_2 != (void *)0x0) {
      memcpy(auStack_480,param_2,0x50);
    }
    if (param_3 != (undefined4 *)0x0) {
      local_430 = *param_3;
      uStack_42c = param_3[1];
      local_418 = param_3[2];
      uStack_414 = param_3[3];
      local_400 = param_3[4];
      local_3f4 = param_3[4];
      local_3f0 = 1;
      local_3ec = 0;
      local_3e8 = param_3[5];
      local_160 = *param_3;
      local_15c = param_3[1];
      local_148 = param_3[2];
      local_144 = param_3[3];
      local_130 = param_3[4];
      local_124 = param_3[4];
      local_120 = 1;
      local_11c = 0;
      local_118 = param_3[5];
      local_14 = param_3;
      local_18 = param_3;
    }
    memset(local_8a0,0,0x420);
    local_8a0[0] = 0;
    local_20 = rve_entity_setup(0xc,local_8a0,auStack_480,&local_160);
    iVar2 = rve_pipeline_stream_on(param_4,*(undefined4 *)(iVar2 + DAT_0001628c));
    *param_1 = iVar2;
    if (*param_1 < 0) {
      uVar1 = 0x47;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== RK_MPI_IVE_Integ @ 00016290 size=512 ===== */

undefined4 RK_MPI_IVE_Integ(int *param_1,void *param_2,void *param_3,int param_4,undefined1 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_480 [80];
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 local_400;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined1 auStack_160 [324];
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  
  iVar2 = DAT_00016490 + 0x162bc;
  local_1c = 0;
  if ((((param_1 == (int *)0x0) || (param_2 == (void *)0x0)) || (param_3 == (void *)0x0)) ||
     (param_4 == 0)) {
    uVar1 = 0x46;
  }
  else if (*(uint *)(param_4 + 0x18) < (uint)(*(int *)((int)param_2 + 0x40) * 6)) {
    fprintf((FILE *)**(undefined4 **)(iVar2 + DAT_00016494),(char *)(DAT_0001649c + 0x1633c),
            DAT_00016498 + 0x16334,0x34a);
    uVar1 = 0x49;
  }
  else {
    memset(auStack_480,0,0x460);
    if (param_2 != (void *)0x0) {
      memcpy(auStack_480,param_2,0x50);
    }
    if (param_4 != -8) {
      local_18 = (undefined4 *)(param_4 + 8);
      local_430 = *local_18;
      uStack_42c = *(undefined4 *)(param_4 + 0xc);
      local_418 = *(undefined4 *)(param_4 + 0x10);
      uStack_414 = *(undefined4 *)(param_4 + 0x14);
      local_400 = *(undefined4 *)(param_4 + 0x18);
      local_3f4 = *(undefined4 *)(param_4 + 0x18);
      local_3f0 = 1;
      local_3ec = 0;
      local_3e8 = *(undefined4 *)(param_4 + 0x1c);
    }
    if (param_3 != (void *)0x0) {
      memcpy(auStack_160,param_3,0x50);
    }
    local_14 = rve_entity_setup(6,param_4,auStack_480,auStack_160);
    iVar2 = rve_pipeline_stream_on(param_5,*(undefined4 *)(iVar2 + DAT_000164a0));
    *param_1 = iVar2;
    if (*param_1 < 0) {
      uVar1 = 0x47;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== RK_MPI_IVE_GMM @ 000164a4 size=1080 ===== */

undefined4
RK_MPI_IVE_GMM(int *param_1,void *param_2,void *param_3,void *param_4,void *param_5,
              undefined4 *param_6,uint3 *param_7)

{
  undefined4 uVar1;
  int iVar2;
  int local_4b0;
  ushort uStack_4ac;
  undefined1 uStack_4aa;
  undefined1 uStack_4a9;
  undefined4 local_4a8;
  undefined4 local_4a4;
  ushort local_4a0;
  undefined2 uStack_49e;
  undefined4 uStack_49c;
  uint local_498;
  undefined4 uStack_494;
  undefined4 local_490;
  undefined4 uStack_48c;
  undefined1 auStack_488 [160];
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  undefined4 local_3b8;
  undefined4 local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined1 auStack_398 [560];
  undefined1 auStack_168 [80];
  undefined1 auStack_118 [80];
  undefined1 auStack_c8 [80];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  int local_1c;
  uint local_18;
  undefined4 local_14;
  
  iVar2 = DAT_000168dc + 0x164d0;
  local_28 = 0;
  if ((((param_1 == (int *)0x0) || (param_2 == (void *)0x0)) || (param_3 == (void *)0x0)) ||
     (((param_4 == (void *)0x0 || (param_5 == (void *)0x0)) ||
      ((param_6 == (undefined4 *)0x0 || (param_7 == (uint3 *)0x0)))))) {
    uVar1 = 0x46;
  }
  else {
    memset(auStack_488,0,0x460);
    if (param_2 != (void *)0x0) {
      memcpy(auStack_488,param_2,0x50);
    }
    if (param_6 != (undefined4 *)0x0) {
      local_24 = param_6;
      local_3e8 = *param_6;
      uStack_3e4 = param_6[1];
      local_3d0 = param_6[2];
      uStack_3cc = param_6[3];
      local_3b8 = param_6[4];
      local_3ac = param_6[4];
      local_3a8 = 1;
      local_3a4 = 0;
      local_3a0 = param_6[5];
    }
    if (param_5 != (void *)0x0) {
      memcpy(auStack_398,param_5,0x50);
    }
    if (param_3 != (void *)0x0) {
      memcpy(auStack_168,param_3,0x50);
    }
    if (param_4 != (void *)0x0) {
      memcpy(auStack_118,param_4,0x50);
    }
    if (param_5 != (void *)0x0) {
      memcpy(auStack_c8,param_5,0x50);
    }
    if (param_6 != (undefined4 *)0x0) {
      local_20 = param_6;
      local_78 = *param_6;
      uStack_74 = param_6[1];
      local_60 = param_6[2];
      uStack_5c = param_6[3];
      local_48 = param_6[4];
      local_3c = param_6[4];
      local_38 = 1;
      local_34 = 0;
      local_30 = param_6[5];
    }
    uStack_494 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    local_490 = 0;
    local_4b0 = (uint)*param_7 << 8;
    _uStack_4ac = CONCAT13(1,CONCAT12(1,(ushort)*(byte *)((int)param_7 + 3)));
    local_4a8 = *(undefined4 *)((int)param_7 + 6);
    local_4a4 = *(undefined4 *)((int)param_7 + 10);
    _local_4a0 = CONCAT22((short)param_7[4],(ushort)*(byte *)((int)param_7 + 0xe));
    uStack_49c = *(undefined4 *)((int)param_7 + 0x12);
    local_498 = (uint)*(uint3 *)((int)param_7 + 0x16);
    local_18 = param_6[4];
    local_1c = param_6[2];
    uStack_48c = uStack_494;
    SYS_MmzFlush_Start(local_1c);
    uStack_494 = *(undefined4 *)(local_1c + ((local_18 & 0xfffffffc) - 0x10));
    SYS_MmzFlush_End(local_1c);
    local_14 = rve_entity_setup(0,&local_4b0,auStack_488,auStack_168);
    iVar2 = rve_pipeline_stream_on(1,*(undefined4 *)(iVar2 + DAT_000168e0));
    *param_1 = iVar2;
    if (*param_1 < 0) {
      uVar1 = 0x47;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== RK_MPI_IVE_GMM2 @ 000168e4 size=1140 ===== */

undefined4
RK_MPI_IVE_GMM2(int *param_1,void *param_2,void *param_3,void *param_4,void *param_5,void *param_6,
               undefined4 *param_7,undefined1 *param_8,undefined1 param_9)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_4b0;
  undefined1 uStack_4af;
  undefined1 uStack_4ae;
  undefined1 uStack_4ad;
  undefined4 uStack_4ac;
  undefined4 local_4a8;
  undefined4 local_4a4;
  ushort local_4a0;
  undefined2 uStack_49e;
  undefined4 uStack_49c;
  uint local_498;
  undefined4 uStack_494;
  undefined4 local_490;
  undefined4 uStack_48c;
  undefined1 auStack_488 [80];
  undefined1 auStack_438 [80];
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  undefined4 local_3b8;
  undefined4 local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined1 auStack_398 [560];
  undefined1 auStack_168 [80];
  undefined1 auStack_118 [80];
  undefined1 auStack_c8 [80];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  int local_1c;
  uint local_18;
  undefined4 local_14;
  
  iVar2 = DAT_00016d58 + 0x16910;
  local_28 = 0;
  if ((((param_1 == (int *)0x0) || (param_2 == (void *)0x0)) || (param_4 == (void *)0x0)) ||
     (((param_5 == (void *)0x0 || (param_6 == (void *)0x0)) ||
      ((param_7 == (undefined4 *)0x0 || (param_8 == (undefined1 *)0x0)))))) {
    uVar1 = 0x46;
  }
  else {
    memset(auStack_488,0,0x460);
    if (param_2 != (void *)0x0) {
      memcpy(auStack_488,param_2,0x50);
    }
    if (param_3 != (void *)0x0) {
      memcpy(auStack_438,param_3,0x50);
    }
    if (param_7 != (undefined4 *)0x0) {
      local_24 = param_7;
      local_3e8 = *param_7;
      uStack_3e4 = param_7[1];
      local_3d0 = param_7[2];
      uStack_3cc = param_7[3];
      local_3b8 = param_7[4];
      local_3ac = param_7[4];
      local_3a8 = 1;
      local_3a4 = 0;
      local_3a0 = param_7[5];
    }
    if (param_6 != (void *)0x0) {
      memcpy(auStack_398,param_6,0x50);
    }
    if (param_4 != (void *)0x0) {
      memcpy(auStack_168,param_4,0x50);
    }
    if (param_5 != (void *)0x0) {
      memcpy(auStack_118,param_5,0x50);
    }
    if (param_6 != (void *)0x0) {
      memcpy(auStack_c8,param_6,0x50);
    }
    if (param_7 != (undefined4 *)0x0) {
      local_20 = param_7;
      local_78 = *param_7;
      uStack_74 = param_7[1];
      local_60 = param_7[2];
      uStack_5c = param_7[3];
      local_48 = param_7[4];
      local_3c = param_7[4];
      local_38 = 1;
      local_34 = 0;
      local_30 = param_7[5];
    }
    uStack_494 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    local_490 = 0;
    _local_4b0 = CONCAT13(param_8[2],CONCAT12(param_8[1],CONCAT11(*param_8,1)));
    uStack_4ac = *(undefined4 *)(param_8 + 3);
    local_4a8 = *(undefined4 *)(param_8 + 8);
    local_4a4 = *(undefined4 *)(param_8 + 0xc);
    _local_4a0 = CONCAT22(*(undefined2 *)(param_8 + 0x12),(ushort)(byte)param_8[0x10]);
    uStack_49c = *(undefined4 *)(param_8 + 0x14);
    local_498 = (uint)*(uint3 *)(param_8 + 0x18);
    local_18 = param_7[4];
    local_1c = param_7[2];
    uStack_48c = uStack_494;
    SYS_MmzFlush_Start(local_1c);
    uStack_494 = *(undefined4 *)(local_1c + ((local_18 & 0xfffffffc) - 0x10));
    SYS_MmzFlush_End(local_1c);
    local_14 = rve_entity_setup(0,&local_4b0,auStack_488,auStack_168);
    iVar2 = rve_pipeline_stream_on(param_9,*(undefined4 *)(iVar2 + DAT_00016d5c));
    *param_1 = iVar2;
    if (*param_1 < 0) {
      uVar1 = 0x47;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== RK_MPI_IVE_GradFg @ 00016d60 size=48 ===== */

undefined4 RK_MPI_IVE_GradFg(void)

{
  return 0x48;
}



/* ===== RK_MPI_IVE_LBP @ 00016d90 size=332 ===== */

undefined4 RK_MPI_IVE_LBP(int *param_1,void *param_2,void *param_3,int param_4,undefined1 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_478 [800];
  undefined1 auStack_158 [320];
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = DAT_00016edc + 0x16dbc;
  local_18 = 0;
  if ((((param_1 == (int *)0x0) || (param_2 == (void *)0x0)) || (param_3 == (void *)0x0)) ||
     (param_4 == 0)) {
    uVar1 = 0x46;
  }
  else {
    memset(auStack_478,0,0x460);
    if (param_2 != (void *)0x0) {
      memcpy(auStack_478,param_2,0x50);
    }
    if (param_3 != (void *)0x0) {
      memcpy(auStack_158,param_3,0x50);
    }
    local_14 = rve_entity_setup(7,param_4,auStack_478,auStack_158);
    iVar2 = rve_pipeline_stream_on(param_5,*(undefined4 *)(iVar2 + DAT_00016ee0));
    *param_1 = iVar2;
    if (*param_1 < 0) {
      uVar1 = 0x47;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== RK_MPI_IVE_LKOpticalFlow @ 00016ee4 size=732 ===== */

undefined4
RK_MPI_IVE_LKOpticalFlow
          (int *param_1,void *param_2,void *param_3,undefined4 *param_4,undefined4 *param_5,
          undefined4 *param_6,undefined1 param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_4b0;
  undefined2 uStack_4ac;
  undefined2 uStack_4aa;
  uint local_4a8;
  undefined4 uStack_4a4;
  undefined4 local_4a0;
  undefined4 uStack_49c;
  undefined4 local_498;
  undefined4 uStack_494;
  undefined4 local_490;
  undefined4 uStack_48c;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined1 auStack_480 [400];
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2c0;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined1 auStack_2a0 [320];
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_130;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  
  iVar2 = DAT_000171c0 + 0x16f10;
  local_1c = 0;
  if ((((param_1 == (int *)0x0) || (param_2 == (void *)0x0)) || (param_3 == (void *)0x0)) ||
     (((param_4 == (undefined4 *)0x0 || (param_5 == (undefined4 *)0x0)) ||
      (param_6 == (undefined4 *)0x0)))) {
    uVar1 = 0x46;
  }
  else {
    memset(auStack_480,0,0x460);
    if (param_2 != (void *)0x0) {
      memcpy(auStack_480,param_2,0x50);
    }
    if (param_4 != (undefined4 *)0x0) {
      local_2f0 = *param_4;
      local_2ec = param_4[1];
      local_2d8 = param_4[2];
      local_2d4 = param_4[3];
      local_2c0 = param_4[4];
      local_2b4 = param_4[4];
      local_2b0 = 1;
      local_2ac = 0;
      local_2a8 = param_4[5];
      local_18 = param_4;
    }
    if (param_3 != (void *)0x0) {
      memcpy(auStack_2a0,param_3,0x50);
    }
    if (param_5 != (undefined4 *)0x0) {
      local_14 = param_5;
      local_160 = *param_5;
      local_15c = param_5[1];
      local_148 = param_5[2];
      local_144 = param_5[3];
      local_130 = param_5[4];
      local_124 = param_5[4];
      local_120 = 1;
      local_11c = 0;
      local_118 = param_5[5];
    }
    uStack_49c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_4a4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_4a0 = 0;
    local_498 = 0;
    local_490 = 0;
    local_488 = 0;
    local_4a8 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8) & 0xffff0000;
    _uStack_4ac = CONCAT22(3,*(undefined2 *)(param_6 + 1));
    local_4b0 = *param_6;
    uStack_494 = uStack_49c;
    uStack_48c = uStack_49c;
    uStack_484 = uStack_49c;
    local_20 = rve_entity_setup(5,&local_4b0,auStack_480,&local_160);
    iVar2 = rve_pipeline_stream_on(param_7,*(undefined4 *)(iVar2 + DAT_000171c4));
    *param_1 = iVar2;
    if (*param_1 < 0) {
      uVar1 = 0x47;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== RK_MPI_IVE_LKOpticalFlowPyr @ 000171c8 size=1352 ===== */

undefined4
RK_MPI_IVE_LKOpticalFlowPyr
          (int *param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5,
          undefined4 *param_6,undefined4 *param_7,int param_8,undefined1 param_9)

{
  undefined4 uVar1;
  int iVar2;
  undefined3 local_4c0;
  undefined1 uStack_4bd;
  undefined2 uStack_4bc;
  undefined2 uStack_4ba;
  undefined1 local_4b8;
  undefined1 local_4b7;
  undefined2 uStack_4b6;
  undefined4 uStack_4b4;
  undefined4 local_4b0;
  undefined4 uStack_4ac;
  undefined4 local_4a8;
  undefined4 uStack_4a4;
  undefined4 local_4a0;
  undefined4 uStack_49c;
  undefined4 local_498;
  undefined4 uStack_494;
  undefined1 auStack_490 [320];
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_320;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2d0;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_140;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_f0;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_a0;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  int local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  
  iVar2 = DAT_00017710 + 0x171f4;
  local_2c = 0;
  if (((((param_1 == (int *)0x0) || (param_2 == 0)) || (param_3 == 0)) ||
      ((param_4 == (undefined4 *)0x0 || (param_5 == (undefined4 *)0x0)))) ||
     ((param_6 == (undefined4 *)0x0 || ((param_7 == (undefined4 *)0x0 || (param_8 == 0)))))) {
    uVar1 = 0x46;
  }
  else {
    memset(auStack_490,0,0x460);
    for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
      if ((local_20 <= (int)(uint)*(byte *)(param_8 + 10)) && (param_2 + local_20 * 0x50 != 0)) {
        memcpy(auStack_490 + local_20 * 0x50,(void *)(param_2 + local_20 * 0x50),0x50);
      }
    }
    if (param_5 != (undefined4 *)0x0) {
      local_28 = param_5;
      local_350 = *param_5;
      local_34c = param_5[1];
      local_338 = param_5[2];
      local_334 = param_5[3];
      local_320 = param_5[4];
      local_314 = param_5[4];
      local_310 = 1;
      local_30c = 0;
      local_308 = param_5[5];
    }
    if (param_4 != (undefined4 *)0x0) {
      local_300 = *param_4;
      local_2fc = param_4[1];
      local_2e8 = param_4[2];
      local_2e4 = param_4[3];
      local_2d0 = param_4[4];
      local_2c4 = param_4[4];
      local_2c0 = 1;
      local_2bc = 0;
      local_2b8 = param_4[5];
      local_1c = param_4;
    }
    for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
      if ((local_20 <= (int)(uint)*(byte *)(param_8 + 10)) && (param_3 + local_20 * 0x50 != 0)) {
        memcpy(auStack_490 + (local_20 + 6) * 0x50,(void *)(param_3 + local_20 * 0x50),0x50);
      }
    }
    if (param_5 != (undefined4 *)0x0) {
      local_24 = param_5;
      local_170 = *param_5;
      local_16c = param_5[1];
      local_158 = param_5[2];
      local_154 = param_5[3];
      local_140 = param_5[4];
      local_134 = param_5[4];
      local_130 = 1;
      local_12c = 0;
      local_128 = param_5[5];
    }
    if (param_6 != (undefined4 *)0x0) {
      local_18 = param_6;
      local_120 = *param_6;
      local_11c = param_6[1];
      local_108 = param_6[2];
      local_104 = param_6[3];
      local_f0 = param_6[4];
      local_e4 = param_6[4];
      local_e0 = 1;
      local_dc = 0;
      local_d8 = param_6[5];
    }
    if (param_7 != (undefined4 *)0x0) {
      local_14 = param_7;
      local_d0 = *param_7;
      local_cc = param_7[1];
      local_b8 = param_7[2];
      local_b4 = param_7[3];
      local_a0 = param_7[4];
      local_94 = param_7[4];
      local_90 = 1;
      local_8c = 0;
      local_88 = param_7[5];
    }
    uStack_4ac = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_4b4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_4b0 = 0;
    local_4a8 = 0;
    local_4a0 = 0;
    local_498 = 0;
    uStack_4b6 = (undefined2)
                 ((uint)*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8) >> 0x10);
    _local_4b8 = CONCAT11((char)*(undefined4 *)(param_8 + 4),2);
    _uStack_4bc = CONCAT22(CONCAT11(1,*(undefined1 *)(param_8 + 10)),*(undefined2 *)(param_8 + 0xe))
    ;
    _local_4c0 = CONCAT13(*(undefined1 *)(param_8 + 0xc),
                          CONCAT12(*(undefined1 *)(param_8 + 0xb),*(undefined2 *)(param_8 + 8)));
    uStack_4a4 = uStack_4ac;
    uStack_49c = uStack_4ac;
    uStack_494 = uStack_4ac;
    local_30 = rve_entity_setup(5,&local_4c0,auStack_490,&local_170);
    iVar2 = rve_pipeline_stream_on(param_9,*(undefined4 *)(iVar2 + DAT_00017714));
    *param_1 = iVar2;
    if (*param_1 < 0) {
      uVar1 = 0x47;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== RK_MPI_IVE_MagAndAng @ 00017718 size=976 ===== */

undefined4
RK_MPI_IVE_MagAndAng
          (int *param_1,void *param_2,void *param_3,void *param_4,int param_5,undefined1 param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  undefined1 local_524;
  undefined1 auStack_520 [80];
  undefined1 auStack_4d0 [720];
  undefined1 auStack_200 [80];
  undefined1 auStack_1b0 [240];
  int local_c0;
  int iStack_bc;
  int local_a8;
  int iStack_a4;
  undefined4 local_90;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_40;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar3 = DAT_00017ae8 + 0x17744;
  local_1c = 0;
  if ((((param_1 == (int *)0x0) || (param_2 == (void *)0x0)) || (param_3 == (void *)0x0)) ||
     ((param_4 == (void *)0x0 || (param_5 == 0)))) {
    uVar2 = 0x46;
  }
  else if (*(uint *)(param_5 + 0x30) <
           (uint)(*(int *)((int)param_2 + 0x40) * *(int *)((int)param_2 + 0x3c) * 4)) {
    fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00017aec),(char *)(DAT_00017af4 + 0x177d8),
            DAT_00017af0 + 0x177d0,0x486);
    uVar2 = 0x49;
  }
  else {
    local_34 = *(undefined4 *)((int)param_2 + 0x3c);
    local_30 = *(undefined4 *)((int)param_2 + 0x40);
    local_40 = *(undefined4 *)((int)param_2 + 0x3c);
    local_70 = *(undefined4 *)(param_5 + 0x20);
    uStack_6c = *(undefined4 *)(param_5 + 0x24);
    local_58 = *(undefined4 *)(param_5 + 0x28);
    uStack_54 = *(undefined4 *)(param_5 + 0x2c);
    local_84 = *(undefined4 *)((int)param_2 + 0x3c);
    local_80 = *(undefined4 *)((int)param_2 + 0x40);
    local_90 = *(undefined4 *)((int)param_2 + 0x3c);
    iVar1 = *(int *)((int)param_2 + 0x40) * *(int *)((int)param_2 + 0x3c) * 2;
    uVar4 = VectorShiftRight(CONCAT44(iVar1,iVar1),0x20);
    local_c0 = (uint)uVar4 + *(uint *)(param_5 + 0x20);
    iStack_bc = (int)((ulonglong)uVar4 >> 0x20) + *(int *)(param_5 + 0x24) +
                (uint)CARRY4((uint)uVar4,*(uint *)(param_5 + 0x20));
    iVar1 = *(int *)((int)param_2 + 0x40) * *(int *)((int)param_2 + 0x3c) * 2;
    uVar4 = VectorShiftRight(CONCAT44(iVar1,iVar1),0x20);
    local_a8 = (uint)uVar4 + *(uint *)(param_5 + 0x28);
    iStack_a4 = (int)((ulonglong)uVar4 >> 0x20) + *(int *)(param_5 + 0x2c) +
                (uint)CARRY4((uint)uVar4,*(uint *)(param_5 + 0x28));
    memset(auStack_520,0,0x460);
    if (param_2 != (void *)0x0) {
      memcpy(auStack_520,param_2,0x50);
    }
    memcpy(auStack_200,&local_70,0x50);
    memcpy(auStack_1b0,&local_c0,0x50);
    local_540 = 0x3000001;
    uStack_53c = *(undefined4 *)(param_5 + 6);
    uStack_538 = *(undefined4 *)(param_5 + 10);
    uStack_534 = *(undefined4 *)(param_5 + 0xe);
    uStack_530 = *(undefined4 *)(param_5 + 0x12);
    uStack_52c = *(undefined4 *)(param_5 + 0x16);
    uStack_528 = *(undefined4 *)(param_5 + 0x1a);
    local_524 = *(undefined1 *)(param_5 + 0x1e);
    local_18 = rve_entity_setup(9,&local_540,auStack_520,auStack_200);
    memcpy(auStack_520,&local_70,0x50);
    memcpy(auStack_4d0,&local_c0,0x50);
    if (param_3 != (void *)0x0) {
      memcpy(auStack_200,param_3,0x50);
    }
    if (param_4 != (void *)0x0) {
      memcpy(auStack_1b0,param_4,0x50);
    }
    local_14 = rve_entity_setup(0xe,param_5,auStack_520,auStack_200);
    rve_entity_create_link(local_18,1,local_14,0,0);
    rve_entity_create_link(local_18,2,local_14,1,0);
    iVar3 = rve_pipeline_stream_on(param_6,*(undefined4 *)(iVar3 + DAT_00017af8));
    *param_1 = iVar3;
    if (*param_1 < 0) {
      uVar2 = 0x47;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* ===== RK_MPI_IVE_Map @ 00017afc size=440 ===== */

undefined4
RK_MPI_IVE_Map(int *param_1,void *param_2,undefined4 *param_3,void *param_4,int param_5,
              undefined1 param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_480 [80];
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 local_400;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined1 auStack_160 [324];
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  
  iVar2 = DAT_00017cb4 + 0x17b28;
  local_1c = 0;
  if ((((param_1 == (int *)0x0) || (param_2 == (void *)0x0)) || (param_3 == (undefined4 *)0x0)) ||
     ((param_4 == (void *)0x0 || (param_5 == 0)))) {
    uVar1 = 0x46;
  }
  else {
    memset(auStack_480,0,0x460);
    if (param_2 != (void *)0x0) {
      memcpy(auStack_480,param_2,0x50);
    }
    if (param_3 != (undefined4 *)0x0) {
      local_430 = *param_3;
      uStack_42c = param_3[1];
      local_418 = param_3[2];
      uStack_414 = param_3[3];
      local_400 = param_3[4];
      local_3f4 = param_3[4];
      local_3f0 = 1;
      local_3ec = 0;
      local_3e8 = param_3[5];
      local_18 = param_3;
    }
    if (param_4 != (void *)0x0) {
      memcpy(auStack_160,param_4,0x50);
    }
    local_14 = rve_entity_setup(0xf,param_5,auStack_480,auStack_160);
    iVar2 = rve_pipeline_stream_on(param_6,*(undefined4 *)(iVar2 + DAT_00017cb8));
    *param_1 = iVar2;
    if (*param_1 < 0) {
      uVar1 = 0x47;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== RK_MPI_IVE_MatchBgModel @ 00017cbc size=656 ===== */

undefined4
RK_MPI_IVE_MatchBgModel
          (int *param_1,void *param_2,undefined4 *param_3,int param_4,undefined1 param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint local_490;
  int iStack_48c;
  undefined1 uStack_488;
  byte local_487;
  byte local_486;
  undefined1 local_485;
  undefined1 local_484;
  undefined3 uStack_483;
  undefined1 auStack_480 [80];
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 local_400;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined1 auStack_160 [240];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_40;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  
  iVar2 = DAT_00017f4c + 0x17ce8;
  local_18 = 0;
  if ((((param_1 == (int *)0x0) || (param_2 == (void *)0x0)) || (param_3 == (undefined4 *)0x0)) ||
     (param_4 == 0)) {
    uVar1 = 0x46;
  }
  else {
    memset(auStack_480,0,0x460);
    if (param_2 != (void *)0x0) {
      memcpy(auStack_480,param_2,0x50);
    }
    if (param_3 != (undefined4 *)0x0) {
      local_430 = *param_3;
      uStack_42c = param_3[1];
      local_418 = param_3[2];
      uStack_414 = param_3[3];
      local_400 = param_3[4];
      local_3f4 = param_3[5];
      local_3f0 = param_3[6];
      local_3ec = 0;
      local_3e8 = param_3[7];
      local_70 = *param_3;
      uStack_6c = param_3[1];
      local_58 = param_3[2];
      uStack_54 = param_3[3];
      local_40 = param_3[4];
      local_34 = param_3[5];
      local_30 = param_3[6];
      local_2c = 0;
      local_28 = param_3[7];
      local_1c = param_3;
      local_14 = param_3;
    }
    iStack_48c = *(int *)(param_4 + 4);
    _uStack_488 = CONCAT13(*(undefined1 *)(param_4 + 9),
                           CONCAT12(*(byte *)(param_4 + 8) / 10,
                                    CONCAT11(*(byte *)(param_4 + 8),
                                             (char)*(undefined4 *)
                                                    ((undefined1  [16])0x0 + (undefined1  [16])0x8))
                                   ));
    _local_484 = CONCAT31((int3)((uint)*(undefined4 *)
                                        ((undefined1  [16])0x0 + (undefined1  [16])0xc) >> 8),
                          *(undefined1 *)(param_4 + 10));
    if (iStack_48c == 0) {
      local_490._0_2_ = 0x101;
    }
    else {
      local_490._0_2_ = 1;
    }
    local_490 = (uint)(ushort)local_490;
    local_20 = rve_entity_setup(1,&local_490,auStack_480,auStack_160);
    iVar2 = rve_pipeline_stream_on(param_5,*(undefined4 *)(iVar2 + DAT_00017f50));
    *param_1 = iVar2;
    if (*param_1 < 0) {
      uVar1 = 0x47;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== RK_MPI_IVE_UpdateBgModel @ 00017f54 size=752 ===== */

undefined4
RK_MPI_IVE_UpdateBgModel
          (int *param_1,void *param_2,undefined4 *param_3,void *param_4,void *param_5,int param_6,
          undefined1 param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_490;
  undefined4 uStack_48c;
  undefined1 uStack_488;
  byte local_487;
  byte local_486;
  undefined1 local_485;
  undefined3 local_484;
  undefined1 uStack_481;
  undefined1 auStack_480 [80];
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 local_400;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined1 auStack_160 [80];
  undefined1 auStack_110 [160];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_40;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  
  iVar2 = DAT_00018244 + 0x17f80;
  local_1c = 0;
  if ((((param_1 == (int *)0x0) || (param_2 == (void *)0x0)) || (param_3 == (undefined4 *)0x0)) ||
     (((param_4 == (void *)0x0 || (param_5 == (void *)0x0)) || (param_6 == 0)))) {
    uVar1 = 0x46;
  }
  else {
    memset(auStack_480,0,0x460);
    if (param_2 != (void *)0x0) {
      memcpy(auStack_480,param_2,0x50);
    }
    if (param_3 != (undefined4 *)0x0) {
      local_430 = *param_3;
      uStack_42c = param_3[1];
      local_418 = param_3[2];
      uStack_414 = param_3[3];
      local_400 = param_3[4];
      local_3f4 = param_3[5];
      local_3f0 = param_3[6];
      local_3ec = 0;
      local_3e8 = param_3[7];
      local_18 = param_3;
    }
    if (param_4 != (void *)0x0) {
      memcpy(auStack_160,param_4,0x50);
    }
    if (param_5 != (void *)0x0) {
      memcpy(auStack_110,param_5,0x50);
    }
    if (param_3 != (undefined4 *)0x0) {
      local_70 = *param_3;
      uStack_6c = param_3[1];
      local_58 = param_3[2];
      uStack_54 = param_3[3];
      local_40 = param_3[4];
      local_34 = param_3[5];
      local_30 = param_3[6];
      local_2c = 0;
      local_28 = param_3[7];
      local_14 = param_3;
    }
    local_490 = 0;
    uStack_48c = *(undefined4 *)(param_6 + 4);
    _local_484 = CONCAT13((char)((uint)*(undefined4 *)
                                        ((undefined1  [16])0x0 + (undefined1  [16])0xc) >> 0x18),
                          *(undefined3 *)(param_6 + 10));
    _uStack_488 = CONCAT13(*(undefined1 *)(param_6 + 9),
                           CONCAT12(*(byte *)(param_6 + 8) / 10,
                                    CONCAT11(*(byte *)(param_6 + 8),
                                             (char)*(undefined4 *)
                                                    ((undefined1  [16])0x0 + (undefined1  [16])0x8))
                                   ));
    local_20 = rve_entity_setup(1,&local_490,auStack_480,auStack_160);
    iVar2 = rve_pipeline_stream_on(param_7,*(undefined4 *)(iVar2 + DAT_00018248));
    *param_1 = iVar2;
    if (*param_1 < 0) {
      uVar1 = 0x47;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== RK_MPI_IVE_NCC @ 0001824c size=448 ===== */

undefined4 RK_MPI_IVE_NCC(int *param_1,void *param_2,void *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_480 [80];
  undefined1 auStack_430 [720];
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_130;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  
  iVar2 = DAT_0001840c + 0x18278;
  local_1c = 0;
  if ((((param_1 == (int *)0x0) || (param_2 == (void *)0x0)) || (param_3 == (void *)0x0)) ||
     (param_4 == (undefined4 *)0x0)) {
    uVar1 = 0x46;
  }
  else {
    memset(auStack_480,0,0x460);
    if (param_2 != (void *)0x0) {
      memcpy(auStack_480,param_2,0x50);
    }
    if (param_3 != (void *)0x0) {
      memcpy(auStack_430,param_3,0x50);
    }
    if (param_4 != (undefined4 *)0x0) {
      local_160 = *param_4;
      local_15c = param_4[1];
      local_148 = param_4[2];
      local_144 = param_4[3];
      local_130 = param_4[4];
      local_124 = param_4[4];
      local_120 = 1;
      local_11c = 0;
      local_118 = param_4[5];
      local_18 = param_4;
    }
    local_14 = rve_entity_setup(0x11,param_4[2],auStack_480,&local_160);
    iVar2 = rve_pipeline_stream_on(1,*(undefined4 *)(iVar2 + DAT_00018410));
    *param_1 = iVar2;
    if (*param_1 < 0) {
      uVar1 = 0x47;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== RK_MPI_IVE_NormGrad @ 00018414 size=944 ===== */

undefined4
RK_MPI_IVE_NormGrad(int *param_1,void *param_2,void *param_3,void *param_4,uint *param_5,
                   int *param_6,undefined1 param_7)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_538 [48];
  uint local_508;
  uint local_4fc;
  uint local_4f8;
  int local_4e8;
  int iStack_4e4;
  int local_4d0;
  int iStack_4cc;
  uint local_4b8;
  uint local_4ac;
  uint local_4a8;
  undefined1 auStack_498 [800];
  undefined1 auStack_178 [80];
  undefined1 auStack_128 [240];
  undefined4 local_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar4 = DAT_000187c4 + 0x18440;
  local_18 = 0;
  if (((param_1 == (int *)0x0) || (param_2 == (void *)0x0)) || (param_6 == (int *)0x0)) {
    uVar3 = 0x46;
  }
  else {
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar1 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_38 = 0;
    uStack_2c = uVar1 & 0xff;
    iStack_28 = iStack_34 << 8;
    iStack_24._1_3_ = (undefined3)iStack_30;
    iStack_24 = CONCAT31(iStack_24._1_3_,(char)((uint)iStack_34 >> 0x18));
    iStack_20._1_3_ = (undefined3)uVar1;
    iStack_20 = CONCAT31(iStack_20._1_3_,(char)((uint)iStack_30 >> 0x18));
    local_1c = (undefined1)(uVar1 >> 0x18);
    memset(auStack_498,0,0x460);
    if (param_2 != (void *)0x0) {
      memcpy(auStack_498,param_2,0x50);
    }
    if ((*param_6 == 0) || (*param_6 == 1)) {
      if (param_3 == (void *)0x0) {
        return 0x46;
      }
      if (param_3 != (void *)0x0) {
        memcpy(auStack_178,param_3,0x50);
      }
    }
    if ((*param_6 == 0) || (*param_6 == 2)) {
      if (param_4 == (void *)0x0) {
        return 0x46;
      }
      if (param_4 != (void *)0x0) {
        memcpy(auStack_128,param_4,0x50);
      }
    }
    if (*param_6 == 3) {
      if (param_5 == (uint *)0x0) {
        return 0x46;
      }
      memcpy(auStack_538,param_5,0x50);
      local_4fc = local_4fc >> 1;
      local_4f8 = local_4f8 >> 1;
      local_508 = local_508 >> 1;
      memcpy(&local_4e8,param_5,0x50);
      local_4ac = local_4ac >> 1;
      local_4a8 = local_4a8 >> 1;
      local_4b8 = local_4b8 >> 1;
      uVar5 = VectorShiftRight(CONCAT44(local_4a8 * local_4ac,local_4a8 * local_4ac),0x20);
      local_4d0 = (uint)uVar5 + param_5[6];
      iStack_4cc = (int)((ulonglong)uVar5 >> 0x20) + param_5[7] +
                   (uint)CARRY4((uint)uVar5,param_5[6]);
      uVar5 = VectorShiftRight(CONCAT44(local_4a8 * local_4ac,local_4a8 * local_4ac),0x20);
      local_4e8 = (uint)uVar5 + *param_5;
      iStack_4e4 = (int)((ulonglong)uVar5 >> 0x20) + param_5[1] + (uint)CARRY4((uint)uVar5,*param_5)
      ;
      memcpy(auStack_178,auStack_538,0x50);
      memcpy(auStack_128,&local_4e8,0x50);
    }
    local_38 = CONCAT13(1,CONCAT12(*(undefined1 *)((int)param_6 + 0x1d),1));
    if (*param_6 == 3) {
      uVar2 = 0;
    }
    else {
      uVar2 = (undefined1)*param_6;
    }
    local_38._0_2_ = CONCAT11(uVar2,1);
    iStack_34 = param_6[1];
    iStack_30 = param_6[2];
    uStack_2c = param_6[3];
    iStack_28 = param_6[4];
    iStack_24 = param_6[5];
    iStack_20 = param_6[6];
    local_1c = (undefined1)param_6[7];
    local_14 = rve_entity_setup(9,&local_38,auStack_498,auStack_178);
    iVar4 = rve_pipeline_stream_on(param_7,*(undefined4 *)(iVar4 + DAT_000187c8));
    *param_1 = iVar4;
    if (*param_1 < 0) {
      uVar3 = 0x47;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* ===== RK_MPI_IVE_Or @ 000187cc size=404 ===== */

undefined4 RK_MPI_IVE_Or(int *param_1,void *param_2,void *param_3,void *param_4,undefined1 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_480;
  undefined1 auStack_478 [80];
  undefined1 auStack_428 [720];
  undefined1 auStack_158 [320];
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = DAT_00018960 + 0x187f8;
  local_18 = 0;
  if ((((param_1 == (int *)0x0) || (param_2 == (void *)0x0)) || (param_3 == (void *)0x0)) ||
     (param_4 == (void *)0x0)) {
    uVar1 = 0x46;
  }
  else {
    memset(auStack_478,0,0x460);
    if (param_2 != (void *)0x0) {
      memcpy(auStack_478,param_2,0x50);
    }
    if (param_3 != (void *)0x0) {
      memcpy(auStack_428,param_3,0x50);
    }
    if (param_4 != (void *)0x0) {
      memcpy(auStack_158,param_4,0x50);
    }
    local_480 = 1;
    local_14 = rve_entity_setup(0xd,&local_480,auStack_478,auStack_158);
    iVar2 = rve_pipeline_stream_on(param_5,*(undefined4 *)(iVar2 + DAT_00018964));
    *param_1 = iVar2;
    if (*param_1 < 0) {
      uVar1 = 0x47;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== RK_MPI_IVE_OrdStatFilter @ 00018968 size=332 ===== */

undefined4
RK_MPI_IVE_OrdStatFilter(int *param_1,void *param_2,void *param_3,int param_4,undefined1 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_478 [800];
  undefined1 auStack_158 [320];
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = DAT_00018ab4 + 0x18994;
  local_18 = 0;
  if ((((param_1 == (int *)0x0) || (param_2 == (void *)0x0)) || (param_3 == (void *)0x0)) ||
     (param_4 == 0)) {
    uVar1 = 0x46;
  }
  else {
    memset(auStack_478,0,0x460);
    if (param_2 != (void *)0x0) {
      memcpy(auStack_478,param_2,0x50);
    }
    if (param_3 != (void *)0x0) {
      memcpy(auStack_158,param_3,0x50);
    }
    local_14 = rve_entity_setup(0x15,param_4,auStack_478,auStack_158);
    iVar2 = rve_pipeline_stream_on(param_5,*(undefined4 *)(iVar2 + DAT_00018ab8));
    *param_1 = iVar2;
    if (*param_1 < 0) {
      uVar1 = 0x47;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== RK_MPI_IVE_SAD @ 00018abc size=412 ===== */

undefined4
RK_MPI_IVE_SAD(int *param_1,void *param_2,void *param_3,void *param_4,void *param_5,int param_6,
              undefined1 param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_478 [80];
  undefined1 auStack_428 [720];
  undefined1 auStack_158 [320];
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = DAT_00018c58 + 0x18ae8;
  local_18 = 0;
  if ((((param_1 == (int *)0x0) || (param_2 == (void *)0x0)) || (param_3 == (void *)0x0)) ||
     (param_6 == 0)) {
    uVar1 = 0x46;
  }
  else {
    memset(auStack_478,0,0x460);
    if (param_2 != (void *)0x0) {
      memcpy(auStack_478,param_2,0x50);
    }
    if (param_3 != (void *)0x0) {
      memcpy(auStack_428,param_3,0x50);
    }
    if (param_4 != (void *)0x0) {
      memcpy(auStack_158,param_4,0x50);
    }
    if (param_5 != (void *)0x0) {
      memcpy(auStack_158,param_5,0x50);
    }
    local_14 = rve_entity_setup(0x13,param_6,auStack_478,auStack_158);
    iVar2 = rve_pipeline_stream_on(param_7,*(undefined4 *)(iVar2 + DAT_00018c5c));
    *param_1 = iVar2;
    if (*param_1 < 0) {
      uVar1 = 0x47;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== RK_MPI_IVE_Sobel @ 00018c60 size=592 ===== */

undefined4
RK_MPI_IVE_Sobel(int *param_1,void *param_2,void *param_3,void *param_4,int *param_5,
                undefined1 param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  int local_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined1 uStack_490;
  int iStack_48f;
  int local_48b;
  int local_487;
  undefined1 auStack_480 [800];
  undefined1 auStack_160 [80];
  undefined1 auStack_110 [244];
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  
  iVar2 = DAT_00018eb0 + 0x18c8c;
  local_1c = 0;
  if ((((param_1 == (int *)0x0) || (param_2 == (void *)0x0)) || (param_3 == (void *)0x0)) ||
     ((param_4 == (void *)0x0 || (param_5 == (int *)0x0)))) {
    uVar1 = 0x46;
  }
  else {
    memset(auStack_480,0,0x460);
    if (param_2 != (void *)0x0) {
      memcpy(auStack_480,param_2,0x50);
    }
    if (param_3 != (void *)0x0) {
      memcpy(auStack_160,param_3,0x50);
    }
    if (param_4 != (void *)0x0) {
      memcpy(auStack_110,param_4,0x50);
    }
    iVar3 = *param_5;
    local_4a0 = iVar3 << 8;
    uStack_49c._1_3_ = (undefined3)param_5[1];
    uStack_49c = CONCAT31(uStack_49c._1_3_,(char)((uint)iVar3 >> 0x18));
    uStack_498._1_3_ = (undefined3)param_5[2];
    uStack_498 = CONCAT31(uStack_498._1_3_,(char)((uint)param_5[1] >> 0x18));
    uStack_494._1_3_ = (undefined3)param_5[3];
    uStack_494 = CONCAT31(uStack_494._1_3_,(char)((uint)param_5[2] >> 0x18));
    uStack_490 = (undefined1)((uint)param_5[3] >> 0x18);
    iStack_48f = param_5[4];
    local_48b = param_5[5];
    local_487 = param_5[6];
    local_4b0 = *(undefined4 *)(DAT_00018eb4 + 0x18dd0);
    uStack_4ac = *(undefined4 *)(DAT_00018eb4 + 0x18dd4);
    uStack_4a8 = *(undefined4 *)(DAT_00018eb4 + 0x18dd8);
    uStack_4a4 = *(undefined4 *)(DAT_00018eb4 + 0x18ddc);
    for (local_14 = 0; local_14 < 0x10; local_14 = local_14 + 1) {
      if (*(char *)((int)&uStack_49c + (uint)*(byte *)((int)&local_4b0 + local_14)) != '\0') {
        local_4a0 = CONCAT31((int3)iVar3,1);
        break;
      }
    }
    local_18 = rve_entity_setup(9,&local_4a0,auStack_480,auStack_160);
    iVar2 = rve_pipeline_stream_on(param_6,*(undefined4 *)(iVar2 + DAT_00018eb8));
    *param_1 = iVar2;
    if (*param_1 < 0) {
      uVar1 = 0x47;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== RK_MPI_IVE_STCandiCorner @ 00018ebc size=448 ===== */

undefined4 RK_MPI_IVE_STCandiCorner(int *param_1,void *param_2,undefined4 *param_3,byte *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int local_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined1 auStack_480 [800];
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_130;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  
  iVar2 = DAT_0001907c + 0x18ee8;
  local_18 = 0;
  if ((((param_1 == (int *)0x0) || (param_2 == (void *)0x0)) || (param_3 == (undefined4 *)0x0)) ||
     (param_4 == (byte *)0x0)) {
    uVar1 = 0x46;
  }
  else {
    memset(auStack_480,0,0x460);
    if (param_2 != (void *)0x0) {
      memcpy(auStack_480,param_2,0x50);
    }
    if (param_3 != (undefined4 *)0x0) {
      local_160 = *param_3;
      local_15c = param_3[1];
      local_148 = param_3[2];
      local_144 = param_3[3];
      local_130 = param_3[4];
      local_124 = param_3[4];
      local_120 = 1;
      local_11c = 0;
      local_118 = param_3[5];
      local_14 = param_3;
    }
    uStack_490 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_48c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    local_488 = 0;
    local_494 = (uint)*param_4 << 0x10;
    uStack_484 = uStack_490;
    local_1c = rve_entity_setup(4,&local_494,auStack_480,&local_160);
    iVar2 = rve_pipeline_stream_on(1,*(undefined4 *)(iVar2 + DAT_00019080));
    *param_1 = iVar2;
    if (*param_1 < 0) {
      uVar1 = 0x47;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== RK_MPI_IVE_STCorner @ 00019084 size=1192 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
RK_MPI_IVE_STCorner(int *param_1,void *param_2,undefined4 *param_3,undefined4 *param_4,uint *param_5
                   ,undefined1 param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_4ec;
  uint uStack_4e8;
  undefined4 uStack_4e4;
  undefined4 local_4e0;
  undefined4 uStack_4dc;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 local_4c0;
  undefined4 uStack_4bc;
  undefined4 local_4a8;
  undefined4 local_49c;
  undefined4 local_498;
  undefined4 local_494;
  undefined4 local_490;
  undefined1 auStack_488 [720];
  uint local_1b8;
  uint local_1b4;
  uint local_1a0;
  uint local_19c;
  int local_188;
  int local_17c;
  undefined4 local_178;
  undefined4 local_174;
  uint local_168;
  int local_164;
  uint local_150;
  int local_14c;
  undefined4 local_138;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_e8;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  int local_c8;
  int iStack_c4;
  int local_b0;
  int iStack_ac;
  undefined4 local_98;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  int local_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  undefined4 local_68;
  uint local_60;
  int iStack_5c;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  uint local_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  int local_38;
  undefined4 local_30;
  int local_2c;
  int *local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  uint *local_18;
  uint *local_14;
  
  iVar2 = DAT_0001952c + 0x190b0;
  local_20 = 0;
  if ((((param_1 == (int *)0x0) || (param_2 == (void *)0x0)) || (param_3 == (undefined4 *)0x0)) ||
     ((param_4 == (undefined4 *)0x0 || (param_5 == (uint *)0x0)))) {
    uVar1 = 0x46;
  }
  else {
    local_40 = param_5[2];
    uStack_3c = param_5[3];
    local_48 = *param_5;
    uStack_44 = param_5[1];
    local_38 = *(int *)((int)param_2 + 0x40) * *(int *)((int)param_2 + 0x30);
    uVar3 = VectorShiftRight(CONCAT44(local_38,local_38),0x20);
    local_58 = (uint)uVar3 + local_40;
    iStack_54 = (int)((ulonglong)uVar3 >> 0x20) + uStack_3c + (uint)CARRY4((uint)uVar3,local_40);
    uVar3 = VectorShiftRight(CONCAT44(local_38,local_38),0x20);
    local_60 = (uint)uVar3 + local_48;
    iStack_5c = (int)((ulonglong)uVar3 >> 0x20) + uStack_44 + (uint)CARRY4((uint)uVar3,local_48);
    local_50 = 0xc80;
    uVar3 = VectorShiftRight(0xc8000000c80,0x20);
    local_70 = (uint)uVar3 + local_58;
    iStack_6c = (int)((ulonglong)uVar3 >> 0x20) + iStack_54 + (uint)CARRY4((uint)uVar3,local_58);
    uVar3 = VectorShiftRight(0xc8000000c80,0x20);
    local_78 = (uint)uVar3 + local_60;
    iStack_74 = (int)((ulonglong)uVar3 >> 0x20) + iStack_5c + (uint)CARRY4((uint)uVar3,local_60);
    local_68 = 0xc80;
    memset(&local_4d8,0,0x460);
    if (param_3 != (undefined4 *)0x0) {
      local_4d8 = *param_3;
      uStack_4d4 = param_3[1];
      local_4c0 = param_3[2];
      uStack_4bc = param_3[3];
      local_4a8 = param_3[4];
      local_49c = param_3[4];
      local_498 = 1;
      local_494 = 0;
      local_490 = param_3[5];
      local_1c = param_3;
    }
    if (param_2 != (void *)0x0) {
      memcpy(auStack_488,param_2,0x50);
    }
    local_18 = &local_48;
    local_1b8 = local_48;
    local_1b4 = uStack_44;
    local_1a0 = local_40;
    local_19c = uStack_3c;
    local_188 = local_38;
    local_17c = local_38;
    local_178 = 1;
    local_174 = 0;
    local_14 = &local_60;
    local_168 = local_60;
    local_164 = iStack_5c;
    local_150 = local_58;
    local_14c = iStack_54;
    local_138 = local_50;
    local_12c = local_50;
    local_128 = 1;
    local_124 = 0;
    if (param_4 != (undefined4 *)0x0) {
      local_118 = *param_4;
      local_114 = param_4[1];
      local_100 = param_4[2];
      local_fc = param_4[3];
      local_e8 = param_4[4];
      local_dc = param_4[4];
      local_d8 = 1;
      local_d4 = 0;
      local_d0 = param_4[5];
      local_24 = param_4;
    }
    local_28 = &local_78;
    local_c8 = local_78;
    iStack_c4 = iStack_74;
    local_b0 = local_70;
    iStack_ac = iStack_6c;
    local_98 = local_68;
    local_8c = local_68;
    local_88 = 1;
    local_84 = 0;
    uStack_4dc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_4e4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    local_4ec = 1;
    local_2c = param_3[2];
    local_4e0 = *(undefined4 *)(local_2c + (param_3[4] - 0x10 & 0xfffffffc));
    uStack_4e8 = param_5[6];
    local_30 = rve_entity_setup(4,&local_4ec,&local_4d8,&local_1b8);
    iVar2 = rve_pipeline_stream_on(param_6,*(undefined4 *)(iVar2 + DAT_00019530));
    *param_1 = iVar2;
    if (*param_1 < 0) {
      uVar1 = 0x47;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== RK_MPI_IVE_Sub @ 00019534 size=460 ===== */

undefined4
RK_MPI_IVE_Sub(int *param_1,void *param_2,void *param_3,void *param_4,int *param_5,
              undefined1 param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_480;
  undefined1 auStack_478 [80];
  undefined1 auStack_428 [720];
  undefined1 auStack_158 [320];
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = DAT_00019700 + 0x19560;
  local_18 = 0;
  if ((((param_1 == (int *)0x0) || (param_2 == (void *)0x0)) || (param_3 == (void *)0x0)) ||
     ((param_4 == (void *)0x0 || (param_5 == (int *)0x0)))) {
    uVar1 = 0x46;
  }
  else {
    memset(auStack_478,0,0x460);
    if (param_2 != (void *)0x0) {
      memcpy(auStack_478,param_2,0x50);
    }
    if (param_3 != (void *)0x0) {
      memcpy(auStack_428,param_3,0x50);
    }
    if (param_4 != (void *)0x0) {
      memcpy(auStack_158,param_4,0x50);
    }
    local_480 = 0;
    if (*param_5 == 0) {
      local_480 = 3;
    }
    else if (*param_5 == 1) {
      local_480 = 4;
    }
    local_14 = rve_entity_setup(0xd,&local_480,auStack_478,auStack_158);
    iVar2 = rve_pipeline_stream_on(param_6,*(undefined4 *)(iVar2 + DAT_00019704));
    *param_1 = iVar2;
    if (*param_1 < 0) {
      uVar1 = 0x47;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== RK_MPI_IVE_Thresh_U8 @ 00019708 size=1112 ===== */

undefined4
RK_MPI_IVE_Thresh_U8
          (int *param_1,void *param_2,void *param_3,undefined4 *param_4,undefined1 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_498 [800];
  undefined1 auStack_178 [324];
  undefined4 local_34;
  uint uStack_30;
  uint local_2c;
  uint local_28;
  uint uStack_24;
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = DAT_00019b60 + 0x19734;
  local_14 = 0;
  if ((((param_1 == (int *)0x0) || (param_2 == (void *)0x0)) || (param_3 == (void *)0x0)) ||
     (param_4 == (undefined4 *)0x0)) {
    return 0x46;
  }
  uStack_24 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_1c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_28 = 0;
  local_34 = 0;
  uStack_30 = uStack_24 & 0xffffff00;
  local_20 = local_2c;
  switch(*param_4) {
  case 0:
    local_34 = 0x10101;
    local_2c = (uint)*(byte *)(param_4 + 1);
    local_28 = 0xff;
    uStack_24 = (uint)*(byte *)((int)param_4 + 6);
    local_20 = (uint)*(byte *)(param_4 + 2);
    local_1c = (uint)*(byte *)(param_4 + 2);
    break;
  case 1:
    local_34 = 0x10100;
    local_2c = (uint)*(byte *)(param_4 + 1);
    local_28 = 0xff;
    uStack_24 = (uint)*(byte *)((int)param_4 + 6);
    local_20 = (uint)*(byte *)(param_4 + 2);
    local_1c = (uint)*(byte *)(param_4 + 2);
    break;
  case 2:
    local_34 = 1;
    local_2c = (uint)*(byte *)(param_4 + 1);
    local_28 = 0xff;
    uStack_24 = (uint)*(byte *)((int)param_4 + 6);
    local_20 = (uint)*(byte *)(param_4 + 2);
    local_1c = (uint)*(byte *)(param_4 + 2);
    break;
  case 3:
    goto LAB_00019918;
  case 4:
LAB_00019918:
    local_34 = 0x10100;
    local_2c = (uint)*(byte *)(param_4 + 1);
    local_28 = (uint)*(byte *)((int)param_4 + 5);
    uStack_24 = (uint)*(byte *)((int)param_4 + 6);
    local_20 = (uint)*(byte *)((int)param_4 + 7);
    local_1c = (uint)*(byte *)(param_4 + 2);
    break;
  case 5:
    local_34 = 0x101;
    local_2c = (uint)*(byte *)(param_4 + 1);
    local_28 = (uint)*(byte *)((int)param_4 + 5);
    uStack_24 = (uint)*(byte *)((int)param_4 + 6);
    local_20 = (uint)*(byte *)((int)param_4 + 7);
    local_1c = (uint)*(byte *)(param_4 + 2);
    break;
  case 6:
    local_34 = 0x10001;
    local_2c = (uint)*(byte *)(param_4 + 1);
    local_28 = (uint)*(byte *)((int)param_4 + 5);
    uStack_24 = (uint)*(byte *)((int)param_4 + 6);
    local_20 = (uint)*(byte *)((int)param_4 + 7);
    local_1c = (uint)*(byte *)(param_4 + 2);
    break;
  case 7:
    local_34 = 0x10100;
    local_2c = (uint)*(byte *)(param_4 + 1);
    local_28 = (uint)*(byte *)((int)param_4 + 5);
    uStack_24 = (uint)*(byte *)((int)param_4 + 6);
    local_20 = (uint)*(byte *)((int)param_4 + 7);
    local_1c = (uint)*(byte *)(param_4 + 2);
  }
  memset(auStack_498,0,0x460);
  if (param_2 != (void *)0x0) {
    memcpy(auStack_498,param_2,0x50);
  }
  if (param_3 != (void *)0x0) {
    memcpy(auStack_178,param_3,0x50);
  }
  local_18 = rve_entity_setup(0x14,&local_34,auStack_498,auStack_178);
  iVar2 = rve_pipeline_stream_on(param_5,*(undefined4 *)(iVar2 + DAT_00019b64));
  *param_1 = iVar2;
  if (*param_1 < 0) {
    uVar1 = 0x47;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== RK_MPI_IVE_Thresh_U16 @ 00019b68 size=572 ===== */

undefined4
RK_MPI_IVE_Thresh_U16(int *param_1,void *param_2,void *param_3,int *param_4,undefined1 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_498 [800];
  undefined1 auStack_178 [324];
  undefined4 local_34;
  uint uStack_30;
  uint local_2c;
  uint local_28;
  uint uStack_24;
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = DAT_00019da4 + 0x19b94;
  local_14 = 0;
  if ((((param_1 == (int *)0x0) || (param_2 == (void *)0x0)) || (param_3 == (void *)0x0)) ||
     (param_4 == (int *)0x0)) {
    uVar1 = 0x46;
  }
  else {
    uStack_24 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    local_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    local_1c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_28 = 0;
    local_34 = 0x1000000;
    uStack_30 = uStack_24 & 0xffffff00;
    if (*param_4 == 0) {
      local_34 = 0x1010101;
      local_2c = (uint)*(ushort *)(param_4 + 1);
      local_28 = (uint)*(ushort *)((int)param_4 + 6);
      uStack_24 = (uint)*(byte *)(param_4 + 2);
      local_20 = (uint)*(byte *)((int)param_4 + 9);
      local_1c = (uint)*(byte *)((int)param_4 + 10);
    }
    else {
      local_20 = local_2c;
      if (*param_4 == 1) {
        local_34 = 0x1010001;
        local_2c = (uint)*(ushort *)(param_4 + 1);
        local_28 = (uint)*(ushort *)((int)param_4 + 6);
        uStack_24 = (uint)*(byte *)(param_4 + 2);
        local_20 = (uint)*(byte *)((int)param_4 + 9);
        local_1c = (uint)*(byte *)((int)param_4 + 10);
      }
    }
    memset(auStack_498,0,0x460);
    if (param_2 != (void *)0x0) {
      memcpy(auStack_498,param_2,0x50);
    }
    if (param_3 != (void *)0x0) {
      memcpy(auStack_178,param_3,0x50);
    }
    local_18 = rve_entity_setup(0x14,&local_34,auStack_498,auStack_178);
    iVar2 = rve_pipeline_stream_on(param_5,*(undefined4 *)(iVar2 + DAT_00019da8));
    *param_1 = iVar2;
    if (*param_1 < 0) {
      uVar1 = 0x47;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== RK_MPI_IVE_Thresh_S16 @ 00019dac size=808 ===== */

undefined4
RK_MPI_IVE_Thresh_S16
          (int *param_1,void *param_2,void *param_3,undefined4 *param_4,undefined1 param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_498 [800];
  undefined1 auStack_178 [324];
  undefined4 local_34;
  uint uStack_30;
  uint local_2c;
  int local_28;
  uint uStack_24;
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar3 = DAT_0001a0d4 + 0x19dd8;
  local_14 = 0;
  if ((((param_1 == (int *)0x0) || (param_2 == (void *)0x0)) || (param_3 == (void *)0x0)) ||
     (param_4 == (undefined4 *)0x0)) {
    uVar2 = 0x46;
  }
  else {
    uStack_24 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    local_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    local_1c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_34 = 0;
    local_28 = 0;
    uStack_30._1_3_ = (uint3)(uStack_24 >> 8);
    uVar1 = uStack_24;
    local_20 = local_2c;
    switch(*param_4) {
    case 0:
      uStack_30 = CONCAT31(uStack_30._1_3_,2);
      local_34 = 0x3010101;
      local_2c = (uint)*(short *)(param_4 + 1);
      local_28 = (int)*(short *)((int)param_4 + 6);
      uStack_24 = (uint)*(byte *)(param_4 + 2);
      local_20 = (uint)*(byte *)((int)param_4 + 10);
      local_1c = (uint)*(byte *)(param_4 + 3);
      uVar1 = uStack_30;
      break;
    case 1:
      uStack_30 = CONCAT31(uStack_30._1_3_,2);
      local_34 = 0x3010001;
      local_2c = (uint)*(short *)(param_4 + 1);
      local_28 = (int)*(short *)((int)param_4 + 6);
      uStack_24 = (uint)*(byte *)(param_4 + 2);
      local_20 = (uint)*(byte *)((int)param_4 + 10);
      local_1c = (uint)*(byte *)(param_4 + 3);
      uVar1 = uStack_30;
      break;
    case 2:
      uStack_30 = (uint)uStack_30._1_3_ << 8;
      local_34 = 0x3010101;
      local_2c = (uint)*(short *)(param_4 + 1);
      local_28 = (int)*(short *)((int)param_4 + 6);
      uStack_24 = (uint)*(byte *)((int)param_4 + 9);
      local_20 = (uint)*(byte *)((int)param_4 + 0xb);
      local_1c = (uint)*(byte *)((int)param_4 + 0xd);
      uVar1 = uStack_30;
      break;
    case 3:
      uStack_30 = (uint)uStack_30._1_3_ << 8;
      local_34 = 0x3010001;
      local_2c = (uint)*(short *)(param_4 + 1);
      local_28 = (int)*(short *)((int)param_4 + 6);
      uStack_24 = (uint)*(byte *)((int)param_4 + 9);
      local_20 = (uint)*(byte *)((int)param_4 + 0xb);
      local_1c = (uint)*(byte *)((int)param_4 + 0xd);
      uVar1 = uStack_30;
    }
    uStack_30 = uVar1;
    memset(auStack_498,0,0x460);
    if (param_2 != (void *)0x0) {
      memcpy(auStack_498,param_2,0x50);
    }
    if (param_3 != (void *)0x0) {
      memcpy(auStack_178,param_3,0x50);
    }
    local_18 = rve_entity_setup(0x14,&local_34,auStack_498,auStack_178);
    iVar3 = rve_pipeline_stream_on(param_5,*(undefined4 *)(iVar3 + DAT_0001a0d8));
    *param_1 = iVar3;
    if (*param_1 < 0) {
      uVar2 = 0x47;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* ===== RK_MPI_IVE_Thresh @ 0001a0dc size=140 ===== */

undefined4 RK_MPI_IVE_Thresh(int param_1,int param_2,int param_3,int param_4,undefined1 param_5)

{
  undefined4 uVar1;
  
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) || (param_4 == 0)) {
    uVar1 = 0x46;
  }
  else {
    uVar1 = RK_MPI_IVE_Thresh_U8(param_1,param_2,param_3,param_4,param_5);
  }
  return uVar1;
}



/* ===== RK_MPI_IVE_Xor @ 0001a168 size=404 ===== */

undefined4 RK_MPI_IVE_Xor(int *param_1,void *param_2,void *param_3,void *param_4,undefined1 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_480;
  undefined1 auStack_478 [80];
  undefined1 auStack_428 [720];
  undefined1 auStack_158 [320];
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = DAT_0001a2fc + 0x1a194;
  local_18 = 0;
  if ((((param_1 == (int *)0x0) || (param_2 == (void *)0x0)) || (param_3 == (void *)0x0)) ||
     (param_4 == (void *)0x0)) {
    uVar1 = 0x46;
  }
  else {
    memset(auStack_478,0,0x460);
    if (param_2 != (void *)0x0) {
      memcpy(auStack_478,param_2,0x50);
    }
    if (param_3 != (void *)0x0) {
      memcpy(auStack_428,param_3,0x50);
    }
    if (param_4 != (void *)0x0) {
      memcpy(auStack_158,param_4,0x50);
    }
    local_480 = 2;
    local_14 = rve_entity_setup(0xd,&local_480,auStack_478,auStack_158);
    iVar2 = rve_pipeline_stream_on(param_5,*(undefined4 *)(iVar2 + DAT_0001a300));
    *param_1 = iVar2;
    if (*param_1 < 0) {
      uVar1 = 0x47;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== RK_MPI_IVE_Calc_Ax_By_C @ 0001a308 size=2500 ===== */

undefined4
RK_MPI_IVE_Calc_Ax_By_C
          (float param_1,undefined4 *param_2,void *param_3,void *param_4,void *param_5,
          undefined4 *param_6)

{
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_fpscr;
  uint uVar5;
  float fVar6;
  undefined8 in_d0;
  float fVar7;
  uint uVar8;
  double dVar9;
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  undefined4 local_4f0;
  undefined4 uStack_4ec;
  undefined4 local_4e8;
  undefined4 local_4e4;
  undefined4 local_4e0;
  undefined1 auStack_4d8 [800];
  undefined1 auStack_1b8 [320];
  undefined4 local_78;
  undefined4 uStack_74;
  uint local_70;
  uint uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  uint local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  int local_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  byte local_31;
  uint local_30;
  undefined4 uStack_2c;
  undefined4 local_24;
  
  fVar6 = (float)in_d0;
  fVar7 = (float)((ulonglong)in_d0 >> 0x20);
  iVar4 = DAT_0001a804 + 0x1a360;
  local_24 = 0;
  local_31 = 0x18;
  local_38 = 0;
  uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_5c = 0;
  local_4c = 0;
  local_44 = 0;
  iStack_40 = 0;
  local_60 = 0;
  uStack_74 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_70 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_6c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_78 = 0;
  local_68 = 0;
  uStack_64 = uStack_74;
  uStack_48 = uStack_58;
  uStack_3c = uStack_58;
  memset(auStack_4d8,0,0x460);
  local_78 = 3;
  uStack_48 = 0;
  local_5c = local_5c & 0xffff0000;
  uStack_58 = 0;
  local_54 = 0xff;
  local_50 = 0;
  local_4c = 0xff;
  dVar9 = (double)fVar6;
  in_fpscr = in_fpscr & 0xfffffff;
  uVar8 = in_fpscr | (uint)(dVar9 < DAT_0001a7f8) << 0x1f | (uint)(dVar9 == DAT_0001a7f8) << 0x1e;
  bVar2 = (byte)(uVar8 >> 0x18);
  if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(dVar9) || NAN(DAT_0001a7f8))) {
    dVar9 = (double)fVar7;
    uVar8 = in_fpscr | (uint)(dVar9 < DAT_0001a7f8) << 0x1f | (uint)(dVar9 == DAT_0001a7f8) << 0x1e;
    bVar2 = (byte)(uVar8 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(dVar9) || NAN(DAT_0001a7f8))) {
      dVar9 = (double)param_1;
      uVar8 = in_fpscr | (uint)(dVar9 < DAT_0001a7f8) << 0x1f |
              (uint)(dVar9 == DAT_0001a7f8) << 0x1e;
      bVar2 = (byte)(uVar8 >> 0x18);
      if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(dVar9) || NAN(DAT_0001a7f8))) {
        local_38 = CONCAT22((ushort)(0.0 < fVar7 * DAT_0001a800) *
                            (short)(int)(fVar7 * DAT_0001a800),
                            (ushort)(0.0 < fVar6 * DAT_0001a800) *
                            (short)(int)(fVar6 * DAT_0001a800));
        local_24 = RK_MPI_IVE_Add(param_2,param_3,param_4,param_5,&local_38,0);
        local_44 = (int)param_1;
        iStack_40 = 1 << local_31;
        if (param_5 != (void *)0x0) {
          memcpy(auStack_4d8,param_5,0x50);
        }
        if (param_6 != (undefined4 *)0x0) {
          memcpy(auStack_1b8,param_6,0x50);
        }
        rve_entity_setup(0x12,&local_5c,auStack_4d8,auStack_1b8);
        uVar3 = rve_pipeline_stream_on(0,*(undefined4 *)(iVar4 + DAT_0001a808));
        *param_2 = uVar3;
        return 0;
      }
    }
  }
  uVar8 = uVar8 & 0xfffffff;
  uVar5 = uVar8 | (uint)((double)fVar6 < DAT_0001a7f8) << 0x1f;
  if (SUB41(uVar5 >> 0x1f,0)) {
    dVar9 = (double)fVar7;
    uVar1 = uVar8 | (uint)(dVar9 < DAT_0001a7f8) << 0x1f | (uint)(dVar9 == DAT_0001a7f8) << 0x1e;
    uVar5 = uVar1 | (uint)(NAN(dVar9) || NAN(DAT_0001a7f8)) << 0x1c;
    bVar2 = (byte)(uVar1 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar5 >> 0x1c) & 1)) {
      dVar9 = (double)param_1;
      uVar8 = uVar8 | (uint)(dVar9 < DAT_0001a7f8) << 0x1f | (uint)(dVar9 == DAT_0001a7f8) << 0x1e;
      uVar5 = uVar8 | (uint)(NAN(dVar9) || NAN(DAT_0001a7f8)) << 0x1c;
      bVar2 = (byte)(uVar8 >> 0x18);
      if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar5 >> 0x1c) & 1)) {
        local_44 = (int)param_1;
        dVar9 = (double)VectorUnsignedToFloat((uint)local_31,(byte)(uVar5 >> 0x16) & 3);
        dVar9 = pow(2.0,dVar9);
        dVar9 = round((double)fVar7 * dVar9);
        iStack_40 = (uint)(0.0 < dVar9) * (int)(longlong)dVar9;
        if (param_4 != (void *)0x0) {
          memcpy(auStack_4d8,param_4,0x50);
        }
        if (param_6 != (undefined4 *)0x0) {
          memcpy(auStack_1b8,param_6,0x50);
        }
        rve_entity_setup(0x12,&local_5c,auStack_4d8,auStack_1b8);
        local_44 = 0;
        dVar9 = (double)VectorUnsignedToFloat((uint)local_31,(byte)(uVar5 >> 0x16) & 3);
        dVar9 = pow(2.0,dVar9);
        dVar9 = round((double)-fVar6 * dVar9);
        iStack_40 = (uint)(0.0 < dVar9) * (int)(longlong)dVar9;
        if (param_3 != (void *)0x0) {
          memcpy(auStack_4d8,param_3,0x50);
        }
        if (param_5 != (void *)0x0) {
          memcpy(auStack_1b8,param_5,0x50);
        }
        rve_entity_setup(0x12,&local_5c,auStack_4d8,auStack_1b8);
        local_60 = 0;
        RK_MPI_IVE_Sub(param_2,param_6,param_5,param_6,&local_60,0);
        return 0;
      }
    }
  }
  if ((DAT_0001aa58 < (double)fVar6) && ((double)fVar7 < DAT_0001aa58)) {
    dVar9 = (double)param_1;
    uVar8 = uVar5 & 0xfffffff | (uint)(dVar9 < DAT_0001aa58) << 0x1f |
            (uint)(dVar9 == DAT_0001aa58) << 0x1e;
    uVar5 = uVar8 | (uint)(NAN(dVar9) || NAN(DAT_0001aa58)) << 0x1c;
    bVar2 = (byte)(uVar8 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar5 >> 0x1c) & 1)) {
      local_44 = (int)param_1;
      dVar9 = (double)VectorUnsignedToFloat((uint)local_31,(byte)(uVar5 >> 0x16) & 3);
      dVar9 = pow(2.0,dVar9);
      dVar9 = round((double)fVar6 * dVar9);
      iStack_40 = (uint)(0.0 < dVar9) * (int)(longlong)dVar9;
      if (param_3 != (void *)0x0) {
        memcpy(auStack_4d8,param_3,0x50);
      }
      if (param_6 != (undefined4 *)0x0) {
        memcpy(auStack_1b8,param_6,0x50);
      }
      rve_entity_setup(0x12,&local_5c,auStack_4d8,auStack_1b8);
      local_44 = 0;
      dVar9 = (double)VectorUnsignedToFloat((uint)local_31,(byte)(uVar5 >> 0x16) & 3);
      dVar9 = pow(2.0,dVar9);
      dVar9 = round((double)-fVar7 * dVar9);
      iStack_40 = (uint)(0.0 < dVar9) * (int)(longlong)dVar9;
      if (param_4 != (void *)0x0) {
        memcpy(auStack_4d8,param_4,0x50);
      }
      if (param_5 != (void *)0x0) {
        memcpy(auStack_1b8,param_5,0x50);
      }
      rve_entity_setup(0x12,&local_5c,auStack_4d8,auStack_1b8);
      local_60 = 0;
      RK_MPI_IVE_Sub(param_2,param_6,param_5,param_6,&local_60,0);
      return 0;
    }
  }
  if ((((double)fVar6 < DAT_0001acf0) && ((double)fVar7 < DAT_0001acf0)) &&
     (DAT_0001acf0 < (double)param_1)) {
    local_38 = CONCAT22((ushort)(0.0 < -fVar7 * DAT_0001acf8) * (short)(int)(-fVar7 * DAT_0001acf8),
                        (ushort)(0.0 < -fVar6 * DAT_0001acf8) * (short)(int)(-fVar6 * DAT_0001acf8))
    ;
    uVar3 = 0;
    local_24 = RK_MPI_IVE_Add(param_2,param_3,param_4,param_5,&local_38,0);
    uVar8 = (uint)(0.0 < param_1) * (int)param_1;
    local_30 = uVar8 & 0xff;
    uStack_2c = 0;
    local_70 = local_30 << 0x10 | local_30 << 8 | local_30 | uVar8 * 0x1000000;
    uStack_6c = uVar8 * 0x1000000 | local_30 | local_30 << 8 | local_30 << 0x10;
    local_4f8 = *param_6;
    uStack_4f4 = param_6[1];
    local_4f0 = param_6[6];
    uStack_4ec = param_6[7];
    local_4e8 = param_6[0xc];
    local_4e4 = param_6[0xf];
    local_4e0 = param_6[0x10];
    RK_MPI_IVE_DMA(param_2,&local_4f8,&local_4f8,&local_78,0,uVar3,uVar8);
    local_60 = 0;
    RK_MPI_IVE_Sub(param_2,param_6,param_5,param_6,&local_60,0);
  }
  return 0;
}



/* ===== RK_MPI_IVE_Warp_Affine_Init @ 0001acfc size=572 ===== */

undefined4 RK_MPI_IVE_Warp_Affine_Init(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_c0 [80];
  undefined1 local_70 [92];
  undefined4 local_14;
  uint local_10;
  uint local_c;
  
  local_14 = 0;
  memset(local_70,0,0x50);
  memset(local_c0,0,0x50);
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    local_14 = 0x46;
  }
  else {
    iVar2 = *(int *)(param_1 + 8);
    iVar1 = *(int *)(param_1 + 8);
    uVar3 = VectorShiftRight(CONCAT44(param_3 * param_2,param_3 * param_2),0x20);
    VectorShiftRight(CONCAT44(param_3 * param_2,param_3 * param_2),0x20);
    for (local_10 = 0; local_10 < param_3; local_10 = local_10 + 1) {
      for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
        *(char *)(local_10 * (param_2 + 0xf & 0xfffffff0) + iVar2 + local_c) = (char)local_c;
      }
    }
    for (local_10 = 0; local_10 < param_3; local_10 = local_10 + 1) {
      for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
        *(char *)(local_10 * (param_2 + 0xf & 0xfffffff0) + (int)uVar3 + iVar1 + local_c) =
             (char)local_10;
      }
    }
  }
  return local_14;
}



/* ===== RK_MPI_IVE_Warp_Affine @ 0001af38 size=1384 ===== */

undefined4 RK_MPI_IVE_Warp_Affine(int *param_1,int param_2,int param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  int local_1e8;
  int local_1e4;
  int local_1d0;
  int local_1cc;
  uint local_1b8;
  uint local_1ac;
  uint local_1a8;
  int local_198;
  int local_194;
  int local_180;
  int local_17c;
  uint local_168;
  uint local_15c;
  uint local_158;
  int local_148;
  int local_144;
  int local_130;
  int local_12c;
  uint local_118;
  uint local_10c;
  uint local_108;
  int local_f8;
  int iStack_f4;
  int local_e0;
  int iStack_dc;
  uint local_c8;
  uint local_bc;
  uint local_b8;
  uint local_a8;
  uint uStack_a4;
  uint local_90;
  uint uStack_8c;
  uint local_78;
  uint local_6c;
  uint local_68;
  undefined1 uStack_51;
  void *local_50;
  int local_4c;
  int local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  undefined1 local_1d;
  int local_1c;
  uint local_18;
  uint local_14;
  
  iVar3 = DAT_0001b4a0 + 0x1af60;
  local_1c = 0;
  local_1d = 1;
  local_1ac = *(uint *)(param_2 + 0x3c);
  local_1a8 = *(uint *)(param_2 + 0x40);
  if ((((param_1 == (int *)0x0) || (param_2 == 0)) || (param_3 == 0)) || (param_4 == (uint *)0x0)) {
    uVar2 = 0x46;
  }
  else {
    local_78 = local_1ac + 0xf & 0xfffffff0;
    local_90 = param_4[2];
    uStack_8c = param_4[3];
    local_a8 = *param_4;
    uStack_a4 = param_4[1];
    local_c8 = local_1ac + 0xf & 0xfffffff0;
    uVar4 = VectorShiftRight(CONCAT44(local_1a8 * local_1ac,local_1a8 * local_1ac),0x20);
    local_e0 = (uint)uVar4 + param_4[2];
    iStack_dc = (int)((ulonglong)uVar4 >> 0x20) + param_4[3] + (uint)CARRY4((uint)uVar4,param_4[2]);
    uVar4 = VectorShiftRight(CONCAT44(local_1a8 * local_1ac,local_1a8 * local_1ac),0x20);
    local_f8 = (uint)uVar4 + *param_4;
    iStack_f4 = (int)((ulonglong)uVar4 >> 0x20) + param_4[1] + (uint)CARRY4((uint)uVar4,*param_4);
    local_118 = local_1ac + 0xf & 0xfffffff0;
    iVar1 = local_1a8 * local_1ac * 2;
    uVar4 = VectorShiftRight(CONCAT44(iVar1,iVar1),0x20);
    local_130 = (uint)uVar4 + param_4[2];
    local_12c = (int)((ulonglong)uVar4 >> 0x20) + param_4[3] + (uint)CARRY4((uint)uVar4,param_4[2]);
    iVar1 = local_1a8 * local_1ac * 2;
    uVar4 = VectorShiftRight(CONCAT44(iVar1,iVar1),0x20);
    local_148 = (uint)uVar4 + *param_4;
    local_144 = (int)((ulonglong)uVar4 >> 0x20) + param_4[1] + (uint)CARRY4((uint)uVar4,*param_4);
    local_168 = local_1ac + 0xf & 0xfffffff0;
    iVar1 = local_1a8 * local_1ac * 3;
    uVar4 = VectorShiftRight(CONCAT44(iVar1,iVar1),0x20);
    local_180 = (uint)uVar4 + param_4[2];
    local_17c = (int)((ulonglong)uVar4 >> 0x20) + param_4[3] + (uint)CARRY4((uint)uVar4,param_4[2]);
    iVar1 = local_1a8 * local_1ac * 3;
    uVar4 = VectorShiftRight(CONCAT44(iVar1,iVar1),0x20);
    local_198 = (uint)uVar4 + *param_4;
    local_194 = (int)((ulonglong)uVar4 >> 0x20) + param_4[1] + (uint)CARRY4((uint)uVar4,*param_4);
    local_1b8 = local_1ac + 0xf & 0xfffffff0;
    iVar1 = local_1a8 * local_1ac * 4;
    uVar4 = VectorShiftRight(CONCAT44(iVar1,iVar1),0x20);
    local_1d0 = (uint)uVar4 + param_4[2];
    local_1cc = (int)((ulonglong)uVar4 >> 0x20) + param_4[3] + (uint)CARRY4((uint)uVar4,param_4[2]);
    iVar1 = local_1a8 * local_1ac * 4;
    uVar4 = VectorShiftRight(CONCAT44(iVar1,iVar1),0x20);
    local_1e8 = (uint)uVar4 + *param_4;
    local_1e4 = (int)((ulonglong)uVar4 >> 0x20) + param_4[1] + (uint)CARRY4((uint)uVar4,*param_4);
    local_2c = param_4[6];
    local_30 = param_4[7];
    local_34 = param_4[8];
    local_38 = param_4[9];
    local_3c = param_4[10];
    local_40 = param_4[0xb];
    local_15c = local_1ac;
    local_158 = local_1a8;
    local_10c = local_1ac;
    local_108 = local_1a8;
    local_bc = local_1ac;
    local_b8 = local_1a8;
    local_6c = local_1ac;
    local_68 = local_1a8;
    local_28 = local_1a8;
    local_24 = local_1ac;
    RK_MPI_IVE_Calc_Ax_By_C
              (local_2c,local_30,local_34,param_1,&local_a8,&local_f8,&local_148,&local_198);
    RK_MPI_IVE_Calc_Ax_By_C
              (local_38,local_3c,local_40,param_1,&local_a8,&local_f8,&local_148,&local_1e8);
    local_1c = RK_MPI_IVE_Query(*param_1,&uStack_51,local_1d);
    if (local_1c == 0x41) {
      fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_0001b4a4),(char *)(DAT_0001b4ac + 0x1b308),
              DAT_0001b4a8 + 0x1b300,0x88c,0x41);
      uVar2 = 0x41;
    }
    else {
      local_44 = local_180;
      local_48 = local_1d0;
      local_4c = *(int *)(param_2 + 0x18);
      local_50 = *(void **)(param_3 + 0x18);
      SYS_MmzFlush_Start(local_180);
      SYS_MmzFlush_Start(local_48);
      SYS_MmzFlush_Start(local_4c);
      SYS_MmzFlush_Start(local_50);
      memset(local_50,0,local_28 * local_24);
      local_18 = 0;
      while( true ) {
        if (local_28 <= local_18) break;
        for (local_14 = 0; local_14 < local_24; local_14 = local_14 + 1) {
          *(undefined1 *)
           ((int)local_50 +
           local_24 * *(byte *)(local_48 + local_24 * local_18 + local_14) +
           (uint)*(byte *)(local_44 + local_24 * local_18 + local_14)) =
               *(undefined1 *)(local_4c + local_24 * local_18 + local_14);
        }
        local_18 = local_18 + 1;
      }
      SYS_MmzFlush_End(local_44);
      SYS_MmzFlush_End(local_48);
      SYS_MmzFlush_End(local_4c);
      SYS_MmzFlush_End(local_50);
      if (*param_1 < 0) {
        uVar2 = 0x47;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}



/* ===== RK_MPI_IVE_Pyramid_GetSize @ 0001b4b0 size=188 ===== */

int RK_MPI_IVE_Pyramid_GetSize(int param_1,uint param_2,int param_3)

{
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0;
  for (local_c = 0; local_c <= *(byte *)(param_3 + 0x18); local_c = local_c + 1) {
    local_10 = local_10 +
               (param_2 >> (local_c & 0xff)) * ((param_1 + 0xfU & 0xfffffff0) >> (local_c & 0xff));
  }
  return local_10 + param_2 * (param_1 + 0xfU & 0xfffffff0);
}



/* ===== RK_MPI_IVE_Pyramid_Create @ 0001b56c size=1432 ===== */

undefined4
RK_MPI_IVE_Pyramid_Create(int *param_1,int param_2,int param_3,uint *param_4,char param_5)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  int local_100;
  int iStack_fc;
  int local_e8;
  int iStack_e4;
  undefined4 local_d0;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [36];
  undefined1 local_6c;
  undefined1 uStack_6b;
  undefined4 uStack_6a;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined4 local_62;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined4 uStack_5a;
  undefined4 local_56;
  undefined1 local_52;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  int local_34 [4];
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  uint local_10;
  int local_c;
  
  local_14 = 0;
  local_34[1] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_34[2] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_34[3] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_34[0] = 0;
  local_24 = 0;
  local_1c = 0;
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_50 = 0;
  local_40 = 0;
  local_6c = 0;
  uStack_6b = 0;
  uStack_6a = 0;
  uStack_66 = 0;
  uStack_64 = 0;
  local_62 = 0;
  uStack_5e = 0;
  uStack_5c = 0;
  uStack_5a = 0;
  local_56 = 0;
  local_52 = 0;
  uStack_3c = uStack_4c;
  uStack_20 = local_34[1];
  uStack_18 = local_34[1];
  memset(&local_100,0,0x50);
  if ((((param_1 == (int *)0x0) || (param_2 == 0)) || (param_3 == 0)) || (param_4 == (uint *)0x0)) {
    uVar2 = 0x46;
  }
  else {
    local_c = 0;
    for (local_10 = 0; local_10 <= (byte)param_4[6]; local_10 = local_10 + 1) {
      *(undefined4 *)(param_3 + local_10 * 0x50 + 0x44) = 0;
      if (local_10 == 0) {
        uVar3 = *(uint *)(param_2 + 0x3c);
      }
      else {
        uVar3 = *(int *)(param_2 + 0x3c) + 1U >> (local_10 & 0xff);
      }
      *(uint *)(param_3 + local_10 * 0x50 + 0x3c) = uVar3;
      if (local_10 == 0) {
        uVar3 = *(uint *)(param_2 + 0x40);
      }
      else {
        uVar3 = *(int *)(param_2 + 0x40) + 1U >> (local_10 & 0xff);
      }
      *(uint *)(param_3 + local_10 * 0x50 + 0x40) = uVar3;
      *(uint *)(param_3 + local_10 * 0x50 + 0x30) =
           *(int *)(param_3 + local_10 * 0x50 + 0x3c) + 0xfU & 0xfffffff0;
      uVar3 = param_4[2];
      uVar1 = param_4[3];
      uVar6 = VectorShiftRight(CONCAT44(local_c,local_c),0x20);
      iVar4 = param_3 + local_10 * 0x50;
      *(uint *)(iVar4 + 0x18) = (uint)uVar6 + uVar3;
      *(uint *)(iVar4 + 0x1c) =
           (int)((ulonglong)uVar6 >> 0x20) + uVar1 + (uint)CARRY4((uint)uVar6,uVar3);
      uVar3 = *param_4;
      uVar1 = param_4[1];
      uVar6 = VectorShiftRight(CONCAT44(local_c,local_c),0x20);
      piVar5 = (int *)(param_3 + local_10 * 0x50);
      *piVar5 = (uint)uVar6 + uVar3;
      piVar5[1] = (int)((ulonglong)uVar6 >> 0x20) + uVar1 + (uint)CARRY4((uint)uVar6,uVar3);
      local_34[local_10] =
           *(int *)(param_3 + local_10 * 0x50 + 0x40) * *(int *)(param_3 + local_10 * 0x50 + 0x30);
      local_c = local_c + local_34[local_10];
    }
    local_c4 = *(undefined4 *)(param_3 + 0x3c);
    local_c0 = *(undefined4 *)(param_3 + 0x40);
    local_d0 = *(undefined4 *)(param_3 + 0x30);
    uVar6 = VectorShiftRight(CONCAT44(local_c,local_c),0x20);
    local_e8 = (uint)uVar6 + param_4[2];
    iStack_e4 = (int)((ulonglong)uVar6 >> 0x20) + param_4[3] + (uint)CARRY4((uint)uVar6,param_4[2]);
    uVar6 = VectorShiftRight(CONCAT44(local_c,local_c),0x20);
    local_100 = (uint)uVar6 + *param_4;
    iStack_fc = (int)((ulonglong)uVar6 >> 0x20) + param_4[1] + (uint)CARRY4((uint)uVar6,*param_4);
    local_50 = 0;
    RK_MPI_IVE_CvtImageToData(param_2,auStack_90);
    RK_MPI_IVE_CvtImageToData(param_3,auStack_b0);
    RK_MPI_IVE_DMA(param_1,auStack_90,auStack_b0,&local_50,0);
    local_50 = 1;
    local_40 = CONCAT13(local_40._3_1_,0x20102);
    local_6c = 8;
    uStack_6b = 0;
    uStack_6a = *(undefined4 *)(DAT_0001bb04 + 0x1b8f4);
    local_62 = *(undefined4 *)(DAT_0001bb04 + 0x1b8fc);
    uStack_5a = *(undefined4 *)(DAT_0001bb04 + 0x1b904);
    local_56 = *(undefined4 *)(DAT_0001bb04 + 0x1b908);
    local_52 = (undefined1)*(undefined4 *)(DAT_0001bb04 + 0x1b90c);
    uStack_66 = (undefined2)*(undefined4 *)(DAT_0001bb04 + 0x1b8f8);
    uStack_64 = (undefined2)((uint)*(undefined4 *)(DAT_0001bb04 + 0x1b8f8) >> 0x10);
    uStack_5e = (undefined2)*(undefined4 *)(DAT_0001bb04 + 0x1b900);
    uStack_5c = (undefined2)((uint)*(undefined4 *)(DAT_0001bb04 + 0x1b900) >> 0x10);
    for (local_10 = 0; local_10 < (byte)param_4[6]; local_10 = local_10 + 1) {
      RK_MPI_IVE_Filter(param_1,param_3 + local_10 * 0x50,&local_100,&local_6c,0);
      local_c4 = *(undefined4 *)(param_3 + local_10 * 0x50 + 0x3c);
      local_c0 = *(undefined4 *)(param_3 + local_10 * 0x50 + 0x40);
      local_d0 = *(undefined4 *)(param_3 + local_10 * 0x50 + 0x30);
      RK_MPI_IVE_CvtImageToData(&local_100,auStack_90);
      RK_MPI_IVE_CvtImageToData(param_3 + (local_10 + 1) * 0x50,auStack_b0);
      if ((local_10 == (byte)param_4[6] - 1) && (param_5 != '\0')) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      RK_MPI_IVE_DMA(param_1,auStack_90,auStack_b0,&local_50,uVar2);
      local_c4 = *(undefined4 *)(param_3 + (local_10 + 1) * 0x50 + 0x3c);
      local_c0 = *(undefined4 *)(param_3 + (local_10 + 1) * 0x50 + 0x40);
      local_d0 = *(undefined4 *)(param_3 + (local_10 + 1) * 0x50 + 0x30);
    }
    if (*param_1 < 0) {
      uVar2 = 0x47;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* ===== rk_ive_pp_gmm @ 0001bb08 size=152 ===== */

undefined4 rk_ive_pp_gmm(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x28);
  iVar3 = *(int *)(param_1 + 0x18);
  iVar4 = *(int *)(iVar3 + 0x2ec);
  iVar1 = *(int *)(iVar3 + 0x2f0);
  iVar3 = *(int *)(iVar3 + 0x2c8);
  SYS_MmzFlush_Start(iVar3);
  *(undefined4 *)(iVar3 + ((iVar1 * iVar4 & 0xfffffffcU) - 0x10)) = *(undefined4 *)(iVar2 + 0x20);
  SYS_MmzFlush_End(iVar3);
  return 0;
}



/* ===== rk_ive_pp_stcorner @ 0001bba0 size=528 ===== */

undefined4 rk_ive_pp_stcorner(int param_1)

{
  ushort uVar1;
  void *__dest;
  int iVar2;
  int iVar3;
  ushort *__src;
  char *pcVar4;
  int iVar5;
  int local_c;
  
  pcVar4 = *(char **)(param_1 + 0x28);
  if (*pcVar4 == '\0') {
    iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 0x88);
    iVar5 = *(int *)(*(int *)(param_1 + 0x18) + 0x4c);
    iVar3 = *(int *)(*(int *)(param_1 + 0x18) + 0x50);
    SYS_MmzFlush_Start(iVar2);
    *(undefined4 *)(iVar2 + ((iVar3 * iVar5 & 0x3fffffffU) >> 1) * 4) = *(undefined4 *)(pcVar4 + 8);
    SYS_MmzFlush_End(iVar2);
  }
  else if (*pcVar4 == '\x01') {
    __src = *(ushort **)(*(int *)(param_1 + 0x18) + 0x1a8);
    uVar1 = *(ushort *)(pcVar4 + 0x10);
    __dest = malloc((uint)uVar1 << 2);
    SYS_MmzFlush_Start(__src);
    memcpy(__dest,__src,(uint)uVar1 << 2);
    *__src = *(ushort *)(pcVar4 + 0x10);
    local_c = 0;
    while( true ) {
      if ((int)(uint)*__src <= local_c) break;
      __src[local_c * 2 + 1] = (ushort)((uint)(*(int *)((int)__dest + local_c * 4) << 0x15) >> 0x15)
      ;
      __src[local_c * 2 + 2] =
           (ushort)(((*(uint *)((int)__dest + local_c * 4) >> 0xb) << 0x15) >> 0x15);
      *(char *)((int)__src + local_c + 0x7d2) = (char)(*(uint *)((int)__dest + local_c * 4) >> 0x16)
      ;
      local_c = local_c + 1;
    }
    SYS_MmzFlush_End(__src);
    free(__dest);
  }
  return 0;
}



/* ===== rk_ive_pp_canny @ 0001bdb0 size=440 ===== */

undefined4 rk_ive_pp_canny(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_14 = 0;
  iVar4 = *(int *)(param_1 + 0x18);
  iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0xe8);
  iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 0x148);
  iVar5 = *(int *)(iVar4 + 0x4c);
  iVar3 = *(int *)(iVar4 + 0x50);
  if ((*(char *)(*(int *)(param_1 + 0x28) + 0x1e) == '\x03') && (iVar2 != 0)) {
    SYS_MmzFlush_Start(iVar1);
    SYS_MmzFlush_Start(iVar2);
    for (local_10 = 0; local_10 < *(uint *)(iVar4 + 0x50); local_10 = local_10 + 1) {
      for (local_c = 0; local_c < *(uint *)(iVar4 + 0x4c); local_c = local_c + 1) {
        if (*(char *)(iVar1 + local_10 * *(int *)(iVar4 + 0x4c) + local_c) != '\0') {
          *(short *)(iVar2 + local_14 * 4) = (short)local_c;
          *(short *)(iVar2 + local_14 * 4 + 2) = (short)local_10;
          local_14 = local_14 + 1;
        }
      }
    }
    *(int *)(iVar2 + iVar3 * iVar5 * 4) = local_14;
    SYS_MmzFlush_End(iVar1);
    SYS_MmzFlush_End(iVar2);
  }
  return 0;
}



/* ===== rk_ive_pp_ncc @ 0001bf68 size=132 ===== */

undefined4 rk_ive_pp_ncc(int param_1)

{
  void *__src;
  int iVar1;
  
  __src = *(void **)(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x18);
  SYS_MmzFlush_Start(*(undefined4 *)(iVar1 + 0xe8));
  memcpy(*(void **)(iVar1 + 0xe8),__src,0x20);
  SYS_MmzFlush_End(*(undefined4 *)(iVar1 + 0xe8));
  return 0;
}



/* ===== rk_ive_post_process @ 0001bfec size=176 ===== */

undefined4 rk_ive_post_process(int param_1)

{
  switch(*(undefined1 *)(param_1 + 4)) {
  case 0:
    rk_ive_pp_gmm(param_1);
    break;
  case 1:
    break;
  case 2:
    rk_ive_pp_canny(param_1);
    break;
  case 3:
    break;
  case 4:
    rk_ive_pp_stcorner(param_1);
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    break;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    break;
  case 0xc:
    break;
  case 0xd:
    break;
  case 0xe:
    break;
  case 0xf:
    break;
  case 0x10:
    break;
  case 0x11:
    rk_ive_pp_ncc(param_1);
  }
  return 0;
}



/* ===== rve_check_gmm_param_user @ 0001c09c size=1124 ===== */

undefined4 rve_check_gmm_param_user(int param_1,int param_2,char *param_3)

{
  int iVar1;
  
  iVar1 = DAT_0001c500 + 0x1c0c0;
  if (param_3 == (char *)0x0) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001c504),(char *)(DAT_0001c50c + 0x1c0fc),
            DAT_0001c508 + 0x1c0f4,0xd);
  }
  if ((param_3[4] == '\0') || (5 < (byte)param_3[4])) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001c504),(char *)(DAT_0001c514 + 0x1c148),
            DAT_0001c510 + 0x1c140,0x13);
  }
  if ((((0x3ff < *(ushort *)(param_3 + 8)) || (0x3ff < *(ushort *)(param_3 + 10))) ||
      (0x3ff < *(ushort *)(param_3 + 0xc))) || (0x3ff < *(ushort *)(param_3 + 0xe))) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001c504),(char *)(DAT_0001c51c + 0x1c1b4),
            DAT_0001c518 + 0x1c1ac,0x19);
  }
  if (0x3ff < *(ushort *)(param_3 + 0x12)) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001c504),(char *)(DAT_0001c524 + 0x1c1f0),
            DAT_0001c520 + 0x1c1e8,0x1e);
  }
  if (((0x3ff < *(ushort *)(param_3 + 0x14)) || (0x3ff < *(ushort *)(param_3 + 0x16))) ||
     (0x3ff < *(ushort *)(param_3 + 0x18))) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001c504),(char *)(DAT_0001c52c + 0x1c24c),
            DAT_0001c528 + 0x1c244,0x24);
  }
  if (param_1 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001c504),(char *)(DAT_0001c534 + 0x1c284),
            DAT_0001c530 + 0x1c27c,0x2a);
  }
  else {
    if (*(int *)(param_1 + 0x18) == 0 && *(int *)(param_1 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001c504),(char *)(DAT_0001c53c + 0x1c2cc),
              DAT_0001c538 + 0x1c2c4,0x2f);
    }
    else if (*(int *)(param_1 + 0x68) == 0 && *(int *)(param_1 + 0x6c) == 0) {
      if ((*param_3 == '\x01') && ((param_3[6] == '\0' || (param_3[5] != '\0')))) {
        fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001c504),(char *)(DAT_0001c544 + 0x1c340),
                DAT_0001c540 + 0x1c338,0x35);
      }
    }
    else if (*(int *)(param_1 + 0xb8) == 0 && *(int *)(param_1 + 0xbc) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001c504),(char *)(DAT_0001c54c + 0x1c384),
              DAT_0001c548 + 0x1c37c,0x39);
    }
    else if (*(int *)(param_1 + 0x108) == 0 && *(int *)(param_1 + 0x10c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001c504),(char *)(DAT_0001c554 + 0x1c3c8),
              DAT_0001c550 + 0x1c3c0,0x3c);
    }
    if (*(int *)(param_2 + 0x18) == 0 && *(int *)(param_2 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001c504),(char *)(DAT_0001c55c + 0x1c40c),
              DAT_0001c558 + 0x1c404,0x42);
    }
    else if (*(int *)(param_2 + 0x68) == 0 && *(int *)(param_2 + 0x6c) == 0) {
      if (param_3[3] == '\x01') {
        fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001c504),(char *)(DAT_0001c564 + 0x1c460),
                DAT_0001c560 + 0x1c458,0x46);
      }
    }
    else if (*(int *)(param_2 + 0xb8) == 0 && *(int *)(param_2 + 0xbc) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001c504),(char *)(DAT_0001c56c + 0x1c4a4),
              DAT_0001c568 + 0x1c49c,0x4a);
    }
    else if (*(int *)(param_2 + 0x108) == 0 && *(int *)(param_2 + 0x10c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001c504),(char *)(DAT_0001c574 + 0x1c4e8),
              DAT_0001c570 + 0x1c4e0,0x4d);
    }
  }
  return 0;
}



/* ===== rve_check_bgm_param_user @ 0001c578 size=624 ===== */

undefined4 rve_check_bgm_param_user(int param_1,int param_2,char *param_3)

{
  int iVar1;
  
  iVar1 = DAT_0001c7e8 + 0x1c59c;
  if (param_3 == (char *)0x0) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001c7ec),(char *)(DAT_0001c7f4 + 0x1c5d8),
            DAT_0001c7f0 + 0x1c5d0,0x59);
  }
  if (2 < (byte)param_3[2]) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001c7ec),(char *)(DAT_0001c7fc + 0x1c614),
            DAT_0001c7f8 + 0x1c60c,0x5e);
  }
  if ((param_1 == 0) || (param_2 == 0)) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001c7ec),(char *)(DAT_0001c804 + 0x1c658),
            DAT_0001c800 + 0x1c650,99);
  }
  else {
    if (*(int *)(param_1 + 0x18) == 0 && *(int *)(param_1 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001c7ec),(char *)(DAT_0001c80c + 0x1c6a0),
              DAT_0001c808 + 0x1c698,0x68);
    }
    else if (*(int *)(param_1 + 0x68) == 0 && *(int *)(param_1 + 0x6c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001c7ec),(char *)(DAT_0001c814 + 0x1c6e4),
              DAT_0001c810 + 0x1c6dc,0x6b);
    }
    if (*(int *)(param_2 + 0x18) == 0 && *(int *)(param_2 + 0x1c) == 0) {
      if (*param_3 == '\0') {
        fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001c7ec),(char *)(DAT_0001c81c + 0x1c738),
                DAT_0001c818 + 0x1c730,0x72);
      }
    }
    else if (*(int *)(param_2 + 0x68) == 0 && *(int *)(param_2 + 0x6c) == 0) {
      if (*param_3 == '\0') {
        fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001c7ec),(char *)(DAT_0001c824 + 0x1c78c),
                DAT_0001c820 + 0x1c784,0x77);
      }
    }
    else if (*(int *)(param_2 + 0x108) == 0 && *(int *)(param_2 + 0x10c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001c7ec),(char *)(DAT_0001c82c + 0x1c7d0),
              DAT_0001c828 + 0x1c7c8,0x7b);
    }
  }
  return 0;
}



/* ===== rve_check_canny_param_user @ 0001c830 size=328 ===== */

undefined4 rve_check_canny_param_user(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = DAT_0001c978 + 0x1c854;
  if (param_3 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001c97c),(char *)(DAT_0001c984 + 0x1c890),
            DAT_0001c980 + 0x1c888,0x88);
  }
  if ((param_1 == 0) || (param_2 == 0)) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001c97c),(char *)(DAT_0001c98c + 0x1c8d4),
            DAT_0001c988 + 0x1c8cc,0x8d);
  }
  else {
    if (*(int *)(param_1 + 0x18) == 0 && *(int *)(param_1 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001c97c),(char *)(DAT_0001c994 + 0x1c91c),
              DAT_0001c990 + 0x1c914,0x92);
    }
    if (*(int *)(param_2 + 0x18) == 0 && *(int *)(param_2 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001c97c),(char *)(DAT_0001c99c + 0x1c960),
              DAT_0001c998 + 0x1c958,0x98);
    }
  }
  return 0;
}



/* ===== rve_check_ccl_param_user @ 0001c9a0 size=532 ===== */

undefined4 rve_check_ccl_param_user(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = DAT_0001cbb4 + 0x1c9c4;
  if (param_3 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001cbb8),(char *)(DAT_0001cbc0 + 0x1ca00),
            DAT_0001cbbc + 0x1c9f8,0xa5);
  }
  if ((param_1 == 0) || (param_2 == 0)) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001cbb8),(char *)(DAT_0001cbc8 + 0x1ca44),
            DAT_0001cbc4 + 0x1ca3c,0xaa);
  }
  else {
    if (*(int *)(param_1 + 0x18) == 0 && *(int *)(param_1 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001cbb8),(char *)(DAT_0001cbd0 + 0x1ca8c),
              DAT_0001cbcc + 0x1ca84,0xaf);
    }
    else if (*(int *)(param_1 + 0x68) == 0 && *(int *)(param_1 + 0x6c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001cbb8),(char *)(DAT_0001cbd8 + 0x1cad0),
              DAT_0001cbd4 + 0x1cac8,0xb2);
    }
    if (*(int *)(param_2 + 0x18) == 0 && *(int *)(param_2 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001cbb8),(char *)(DAT_0001cbe0 + 0x1cb14),
              DAT_0001cbdc + 0x1cb0c,0xb8);
    }
    else if (*(int *)(param_2 + 0x68) == 0 && *(int *)(param_2 + 0x6c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001cbb8),(char *)(DAT_0001cbe8 + 0x1cb58),
              DAT_0001cbe4 + 0x1cb50,0xbb);
    }
    else if (*(int *)(param_2 + 0xb8) == 0 && *(int *)(param_2 + 0xbc) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001cbb8),(char *)(DAT_0001cbf0 + 0x1cb9c),
              DAT_0001cbec + 0x1cb94,0xbe);
    }
  }
  return 0;
}



/* ===== rve_check_lbp_param_user @ 0001cbf4 size=328 ===== */

undefined4 rve_check_lbp_param_user(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = DAT_0001cd3c + 0x1cc18;
  if (param_3 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001cd40),(char *)(DAT_0001cd48 + 0x1cc54),
            DAT_0001cd44 + 0x1cc4c,0xca);
  }
  if ((param_1 == 0) || (param_2 == 0)) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001cd40),(char *)(DAT_0001cd50 + 0x1cc98),
            DAT_0001cd4c + 0x1cc90,0xcf);
  }
  else {
    if (*(int *)(param_1 + 0x18) == 0 && *(int *)(param_1 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001cd40),(char *)(DAT_0001cd58 + 0x1cce0),
              DAT_0001cd54 + 0x1ccd8,0xd4);
    }
    if (*(int *)(param_2 + 0x18) == 0 && *(int *)(param_2 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001cd40),(char *)(DAT_0001cd60 + 0x1cd24),
              DAT_0001cd5c + 0x1cd1c,0xda);
    }
  }
  return 0;
}



/* ===== rve_check_filter_param_user @ 0001cd64 size=328 ===== */

undefined4 rve_check_filter_param_user(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = DAT_0001ceac + 0x1cd88;
  if (param_3 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001ceb0),(char *)(DAT_0001ceb8 + 0x1cdc4),
            DAT_0001ceb4 + 0x1cdbc,0xe6);
  }
  if ((param_1 == 0) || (param_2 == 0)) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001ceb0),(char *)(DAT_0001cec0 + 0x1ce08),
            DAT_0001cebc + 0x1ce00,0xeb);
  }
  else {
    if (*(int *)(param_1 + 0x18) == 0 && *(int *)(param_1 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001ceb0),(char *)(DAT_0001cec8 + 0x1ce50),
              DAT_0001cec4 + 0x1ce48,0xf0);
    }
    if (*(int *)(param_2 + 0x18) == 0 && *(int *)(param_2 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001ceb0),(char *)(DAT_0001ced0 + 0x1ce94),
              DAT_0001cecc + 0x1ce8c,0xf6);
    }
  }
  return 0;
}



/* ===== rve_check_sobel_param_user @ 0001ced4 size=392 ===== */

undefined4 rve_check_sobel_param_user(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = DAT_0001d05c + 0x1cef8;
  if (param_3 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001d060),(char *)(DAT_0001d068 + 0x1cf34),
            DAT_0001d064 + 0x1cf2c,0x103);
  }
  if ((param_1 == 0) || (param_2 == 0)) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001d060),(char *)(DAT_0001d070 + 0x1cf78),
            DAT_0001d06c + 0x1cf70,0x108);
  }
  else {
    if (*(int *)(param_1 + 0x18) == 0 && *(int *)(param_1 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001d060),(char *)(DAT_0001d078 + 0x1cfc0),
              DAT_0001d074 + 0x1cfb8,0x10d);
    }
    if (*(int *)(param_2 + 0x18) == 0 && *(int *)(param_2 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001d060),(char *)(DAT_0001d080 + 0x1d004),
              DAT_0001d07c + 0x1cffc,0x113);
    }
    if (*(int *)(param_2 + 0x68) == 0 && *(int *)(param_2 + 0x6c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001d060),(char *)(DAT_0001d088 + 0x1d044),
              DAT_0001d084 + 0x1d03c,0x117);
    }
  }
  return 0;
}



/* ===== rve_check_dma_param_user @ 0001d08c size=428 ===== */

undefined4 rve_check_dma_param_user(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  
  iVar1 = DAT_0001d238 + 0x1d0b0;
  if (param_3 == (uint *)0x0) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001d23c),(char *)(DAT_0001d244 + 0x1d0ec),
            DAT_0001d240 + 0x1d0e4,0x123);
  }
  if ((*param_3 == 1) && ((byte)param_3[4] <= *(byte *)((int)param_3 + 0x11))) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001d23c),(char *)(DAT_0001d24c + 0x1d140),
            DAT_0001d248 + 0x1d138,0x129);
  }
  if ((param_1 == 0) || (param_2 == 0)) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001d23c),(char *)(DAT_0001d254 + 0x1d184),
            DAT_0001d250 + 0x1d17c,0x12e);
  }
  else {
    if ((*(int *)(param_1 + 0x18) == 0 && *(int *)(param_1 + 0x1c) == 0) && (*param_3 < 2)) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001d23c),(char *)(DAT_0001d25c + 0x1d1dc),
              DAT_0001d258 + 0x1d1d4,0x134);
    }
    if (*(int *)(param_2 + 0x18) == 0 && *(int *)(param_2 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001d23c),(char *)(DAT_0001d264 + 0x1d220),
              DAT_0001d260 + 0x1d218,0x13a);
    }
  }
  return 0;
}



/* ===== rve_check_csc_param_user @ 0001d268 size=328 ===== */

undefined4 rve_check_csc_param_user(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = DAT_0001d3b0 + 0x1d28c;
  if (param_3 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001d3b4),(char *)(DAT_0001d3bc + 0x1d2c8),
            DAT_0001d3b8 + 0x1d2c0,0x147);
  }
  if ((param_1 == 0) || (param_2 == 0)) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001d3b4),(char *)(DAT_0001d3c4 + 0x1d30c),
            DAT_0001d3c0 + 0x1d304,0x14c);
  }
  else {
    if (*(int *)(param_1 + 0x18) == 0 && *(int *)(param_1 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001d3b4),(char *)(DAT_0001d3cc + 0x1d354),
              DAT_0001d3c8 + 0x1d34c,0x151);
    }
    if (*(int *)(param_2 + 0x18) == 0 && *(int *)(param_2 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001d3b4),(char *)(DAT_0001d3d4 + 0x1d398),
              DAT_0001d3d0 + 0x1d390,0x157);
    }
  }
  return 0;
}



/* ===== rve_check_eqhist_param_user @ 0001d3d8 size=328 ===== */

undefined4 rve_check_eqhist_param_user(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = DAT_0001d520 + 0x1d3fc;
  if (param_3 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001d524),(char *)(DAT_0001d52c + 0x1d438),
            DAT_0001d528 + 0x1d430,0x164);
  }
  if ((param_1 == 0) || (param_2 == 0)) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001d524),(char *)(DAT_0001d534 + 0x1d47c),
            DAT_0001d530 + 0x1d474,0x169);
  }
  else {
    if (*(int *)(param_1 + 0x18) == 0 && *(int *)(param_1 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001d524),(char *)(DAT_0001d53c + 0x1d4c4),
              DAT_0001d538 + 0x1d4bc,0x16e);
    }
    if (*(int *)(param_2 + 0x18) == 0 && *(int *)(param_2 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001d524),(char *)(DAT_0001d544 + 0x1d508),
              DAT_0001d540 + 0x1d500,0x174);
    }
  }
  return 0;
}



/* ===== rve_check_lk_param_user @ 0001d548 size=764 ===== */

undefined4 rve_check_lk_param_user(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = DAT_0001d844 + 0x1d56c;
  if (param_3 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001d848),(char *)(DAT_0001d850 + 0x1d5a8),
            DAT_0001d84c + 0x1d5a0,0x180);
  }
  if (3 < *(byte *)(param_3 + 6)) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001d848),(char *)(DAT_0001d858 + 0x1d5e4),
            DAT_0001d854 + 0x1d5dc,0x185);
  }
  if (param_1 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001d848),(char *)(DAT_0001d860 + 0x1d61c),
            DAT_0001d85c + 0x1d614,0x18a);
  }
  else {
    if (*(int *)(param_1 + 0x18) == 0 && *(int *)(param_1 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001d848),(char *)(DAT_0001d868 + 0x1d664),
              DAT_0001d864 + 0x1d65c,399);
    }
    else if (*(int *)(param_1 + 0x68) == 0 && *(int *)(param_1 + 0x6c) == 0) {
      if (*(char *)(param_3 + 9) == '\x01') {
        fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001d848),(char *)(DAT_0001d870 + 0x1d6b8),
                DAT_0001d86c + 0x1d6b0,0x193);
      }
    }
    else if (*(int *)(param_1 + 0xb8) == 0 && *(int *)(param_1 + 0xbc) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001d848),(char *)(DAT_0001d878 + 0x1d6fc),
              DAT_0001d874 + 0x1d6f4,0x197);
    }
    else if (*(int *)(param_1 + 0x108) == 0 && *(int *)(param_1 + 0x10c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001d848),(char *)(DAT_0001d880 + 0x1d740),
              DAT_0001d87c + 0x1d738,0x19a);
    }
    if (*(int *)(param_2 + 0x18) == 0 && *(int *)(param_2 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001d848),(char *)(DAT_0001d888 + 0x1d784),
              DAT_0001d884 + 0x1d77c,0x1a0);
    }
    else if (*(int *)(param_2 + 0x68) == 0 && *(int *)(param_2 + 0x6c) == 0) {
      if (*(char *)(param_3 + 7) == '\x01') {
        fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001d848),(char *)(DAT_0001d890 + 0x1d7d8),
                DAT_0001d88c + 0x1d7d0,0x1a4);
      }
    }
    else if ((*(int *)(param_2 + 0xb8) == 0 && *(int *)(param_2 + 0xbc) == 0) &&
            (*(char *)(param_3 + 7) == '\x01')) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001d848),(char *)(DAT_0001d898 + 0x1d82c),
              DAT_0001d894 + 0x1d824,0x1a9);
    }
  }
  return 0;
}



/* ===== rve_check_logicop_param_user @ 0001d89c size=396 ===== */

undefined4 rve_check_logicop_param_user(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = DAT_0001da28 + 0x1d8c0;
  if (param_3 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001da2c),(char *)(DAT_0001da34 + 0x1d8fc),
            DAT_0001da30 + 0x1d8f4,0x1b6);
  }
  if ((param_1 == 0) || (param_2 == 0)) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001da2c),(char *)(DAT_0001da3c + 0x1d940),
            DAT_0001da38 + 0x1d938,0x1bb);
  }
  else {
    if (*(int *)(param_1 + 0x18) == 0 && *(int *)(param_1 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001da2c),(char *)(DAT_0001da44 + 0x1d988),
              DAT_0001da40 + 0x1d980,0x1c0);
    }
    else if (*(int *)(param_1 + 0x68) == 0 && *(int *)(param_1 + 0x6c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001da2c),(char *)(DAT_0001da4c + 0x1d9cc),
              DAT_0001da48 + 0x1d9c4,0x1c3);
    }
    if (*(int *)(param_2 + 0x18) == 0 && *(int *)(param_2 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001da2c),(char *)(DAT_0001da54 + 0x1da10),
              DAT_0001da50 + 0x1da08,0x1c9);
    }
  }
  return 0;
}



/* ===== rve_check_magandang_param_user @ 0001da58 size=464 ===== */

undefined4 rve_check_magandang_param_user(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = DAT_0001dc28 + 0x1da7c;
  if (param_3 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001dc2c),(char *)(DAT_0001dc34 + 0x1dab8),
            DAT_0001dc30 + 0x1dab0,0x1d5);
  }
  if ((param_1 == 0) || (param_2 == 0)) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001dc2c),(char *)(DAT_0001dc3c + 0x1dafc),
            DAT_0001dc38 + 0x1daf4,0x1da);
  }
  else {
    if (*(int *)(param_1 + 0x18) == 0 && *(int *)(param_1 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001dc2c),(char *)(DAT_0001dc44 + 0x1db44),
              DAT_0001dc40 + 0x1db3c,0x1df);
    }
    else if (*(int *)(param_1 + 0x68) == 0 && *(int *)(param_1 + 0x6c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001dc2c),(char *)(DAT_0001dc4c + 0x1db88),
              DAT_0001dc48 + 0x1db80,0x1e2);
    }
    if (*(int *)(param_2 + 0x18) == 0 && *(int *)(param_2 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001dc2c),(char *)(DAT_0001dc54 + 0x1dbcc),
              DAT_0001dc50 + 0x1dbc4,0x1e8);
    }
    else if (*(int *)(param_2 + 0x68) == 0 && *(int *)(param_2 + 0x6c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001dc2c),(char *)(DAT_0001dc5c + 0x1dc10),
              DAT_0001dc58 + 0x1dc08,0x1eb);
    }
  }
  return 0;
}



/* ===== rve_check_map_param_user @ 0001dc60 size=396 ===== */

undefined4 rve_check_map_param_user(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = DAT_0001ddec + 0x1dc84;
  if (param_3 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001ddf0),(char *)(DAT_0001ddf8 + 0x1dcc0),
            DAT_0001ddf4 + 0x1dcb8,0x1f7);
  }
  if ((param_1 == 0) || (param_2 == 0)) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001ddf0),(char *)(DAT_0001de00 + 0x1dd04),
            DAT_0001ddfc + 0x1dcfc,0x1fc);
  }
  else {
    if (*(int *)(param_1 + 0x18) == 0 && *(int *)(param_1 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001ddf0),(char *)(DAT_0001de08 + 0x1dd4c),
              DAT_0001de04 + 0x1dd44,0x201);
    }
    else if (*(int *)(param_1 + 0x68) == 0 && *(int *)(param_1 + 0x6c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001ddf0),(char *)(DAT_0001de10 + 0x1dd90),
              DAT_0001de0c + 0x1dd88,0x204);
    }
    if (*(int *)(param_2 + 0x18) == 0 && *(int *)(param_2 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001ddf0),(char *)(DAT_0001de18 + 0x1ddd4),
              DAT_0001de14 + 0x1ddcc,0x20a);
    }
  }
  return 0;
}



/* ===== rve_check_morph_param_user @ 0001de1c size=328 ===== */

undefined4 rve_check_morph_param_user(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = DAT_0001df64 + 0x1de40;
  if (param_3 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001df68),(char *)(DAT_0001df70 + 0x1de7c),
            DAT_0001df6c + 0x1de74,0x216);
  }
  if ((param_1 == 0) || (param_2 == 0)) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001df68),(char *)(DAT_0001df78 + 0x1dec0),
            DAT_0001df74 + 0x1deb8,0x21b);
  }
  else {
    if (*(int *)(param_1 + 0x18) == 0 && *(int *)(param_1 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001df68),(char *)(DAT_0001df80 + 0x1df08),
              DAT_0001df7c + 0x1df00,0x220);
    }
    if (*(int *)(param_2 + 0x18) == 0 && *(int *)(param_2 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001df68),(char *)(DAT_0001df88 + 0x1df4c),
              DAT_0001df84 + 0x1df44,0x226);
    }
  }
  return 0;
}



/* ===== rve_check_ncc_param_user @ 0001df8c size=316 ===== */

undefined4 rve_check_ncc_param_user(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = DAT_0001e0c8 + 0x1dfb0;
  if (param_3 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001e0cc),(char *)(DAT_0001e0d4 + 0x1dfec),
            DAT_0001e0d0 + 0x1dfe4,0x233);
  }
  if (param_1 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001e0cc),(char *)(DAT_0001e0dc + 0x1e024),
            DAT_0001e0d8 + 0x1e01c,0x238);
  }
  else if (*(int *)(param_1 + 0x18) == 0 && *(int *)(param_1 + 0x1c) == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001e0cc),(char *)(DAT_0001e0e4 + 0x1e06c),
            DAT_0001e0e0 + 0x1e064,0x23d);
  }
  else if (*(int *)(param_1 + 0x68) == 0 && *(int *)(param_1 + 0x6c) == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001e0cc),(char *)(DAT_0001e0ec + 0x1e0b0),
            DAT_0001e0e8 + 0x1e0a8,0x240);
  }
  return 0;
}



/* ===== rve_check_cast_param_user @ 0001e0f0 size=328 ===== */

undefined4 rve_check_cast_param_user(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = DAT_0001e238 + 0x1e114;
  if (param_3 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001e23c),(char *)(DAT_0001e244 + 0x1e150),
            DAT_0001e240 + 0x1e148,0x24c);
  }
  if ((param_1 == 0) || (param_2 == 0)) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001e23c),(char *)(DAT_0001e24c + 0x1e194),
            DAT_0001e248 + 0x1e18c,0x251);
  }
  else {
    if (*(int *)(param_1 + 0x18) == 0 && *(int *)(param_1 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001e23c),(char *)(DAT_0001e254 + 0x1e1dc),
              DAT_0001e250 + 0x1e1d4,0x256);
    }
    if (*(int *)(param_2 + 0x18) == 0 && *(int *)(param_2 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001e23c),(char *)(DAT_0001e25c + 0x1e220),
              DAT_0001e258 + 0x1e218,0x25c);
    }
  }
  return 0;
}



/* ===== rve_check_sad_param_user @ 0001e260 size=480 ===== */

undefined4 rve_check_sad_param_user(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = DAT_0001e440 + 0x1e284;
  if (param_3 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001e444),(char *)(DAT_0001e44c + 0x1e2c0),
            DAT_0001e448 + 0x1e2b8,0x268);
  }
  if ((param_1 == 0) || (param_2 == 0)) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001e444),(char *)(DAT_0001e454 + 0x1e304),
            DAT_0001e450 + 0x1e2fc,0x26d);
  }
  else {
    if (*(int *)(param_1 + 0x18) == 0 && *(int *)(param_1 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001e444),(char *)(DAT_0001e45c + 0x1e34c),
              DAT_0001e458 + 0x1e344,0x272);
    }
    else if (*(int *)(param_1 + 0x68) == 0 && *(int *)(param_1 + 0x6c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001e444),(char *)(DAT_0001e464 + 0x1e390),
              DAT_0001e460 + 0x1e388,0x275);
    }
    if (*(int *)(param_2 + 0x18) == 0 && *(int *)(param_2 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001e444),(char *)(DAT_0001e46c + 0x1e3d4),
              DAT_0001e468 + 0x1e3cc,0x27b);
    }
    else if ((*(int *)(param_2 + 0x68) == 0 && *(int *)(param_2 + 0x6c) == 0) &&
            (*(int *)(param_3 + 4) == 1)) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001e444),(char *)(DAT_0001e474 + 0x1e428),
              DAT_0001e470 + 0x1e420,0x27f);
    }
  }
  return 0;
}



/* ===== rve_check_stcorner_param_user @ 0001e478 size=704 ===== */

undefined4 rve_check_stcorner_param_user(int param_1,int param_2,char *param_3)

{
  int iVar1;
  
  iVar1 = DAT_0001e738 + 0x1e49c;
  if (param_3 == (char *)0x0) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001e73c),(char *)(DAT_0001e744 + 0x1e4d8),
            DAT_0001e740 + 0x1e4d0,0x28c);
  }
  if ((*param_3 == '\0') && (param_3[2] == '\0')) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001e73c),(char *)(DAT_0001e74c + 0x1e524),
            DAT_0001e748 + 0x1e51c,0x291);
  }
  if ((param_1 == 0) || (param_2 == 0)) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001e73c),(char *)(DAT_0001e754 + 0x1e568),
            DAT_0001e750 + 0x1e560,0x296);
  }
  else {
    if (*(int *)(param_1 + 0x18) == 0 && *(int *)(param_1 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001e73c),(char *)(DAT_0001e75c + 0x1e5b0),
              DAT_0001e758 + 0x1e5a8,0x29b);
    }
    if (*(int *)(param_2 + 0x18) == 0 && *(int *)(param_2 + 0x1c) == 0) {
      if (*param_3 == '\0') {
        fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001e73c),(char *)(DAT_0001e76c + 0x1e634),
                DAT_0001e768 + 0x1e62c,0x2a5);
      }
      else {
        fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001e73c),(char *)(DAT_0001e764 + 0x1e604),
                DAT_0001e760 + 0x1e5fc,0x2a2);
      }
    }
    else if (*(int *)(param_2 + 0x68) == 0 && *(int *)(param_2 + 0x6c) == 0) {
      if (*param_3 != '\0') {
        fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001e73c),(char *)(DAT_0001e774 + 0x1e688),
                DAT_0001e770 + 0x1e680,0x2aa);
      }
    }
    else if (*(int *)(param_2 + 0xb8) == 0 && *(int *)(param_2 + 0xbc) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001e73c),(char *)(DAT_0001e77c + 0x1e6cc),
              DAT_0001e778 + 0x1e6c4,0x2ae);
    }
    else if ((*(int *)(param_2 + 0x108) == 0 && *(int *)(param_2 + 0x10c) == 0) &&
            (*param_3 != '\0')) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001e73c),(char *)(DAT_0001e784 + 0x1e720),
              DAT_0001e780 + 0x1e718,0x2b2);
    }
  }
  return 0;
}



/* ===== rve_check_denoise_param_user @ 0001e788 size=328 ===== */

undefined4 rve_check_denoise_param_user(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = DAT_0001e8d0 + 0x1e7ac;
  if (param_3 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001e8d4),(char *)(DAT_0001e8dc + 0x1e7e8),
            DAT_0001e8d8 + 0x1e7e0,0x2c0);
  }
  if ((param_1 == 0) || (param_2 == 0)) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001e8d4),(char *)(DAT_0001e8e4 + 0x1e82c),
            DAT_0001e8e0 + 0x1e824,0x2c5);
  }
  else {
    if (*(int *)(param_1 + 0x18) == 0 && *(int *)(param_1 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001e8d4),(char *)(DAT_0001e8ec + 0x1e874),
              DAT_0001e8e8 + 0x1e86c,0x2ca);
    }
    if (*(int *)(param_2 + 0x18) == 0 && *(int *)(param_2 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001e8d4),(char *)(DAT_0001e8f4 + 0x1e8b8),
              DAT_0001e8f0 + 0x1e8b0,0x2d0);
    }
  }
  return 0;
}



/* ===== rve_check_threshold_param_user @ 0001e8f8 size=328 ===== */

undefined4 rve_check_threshold_param_user(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = DAT_0001ea40 + 0x1e91c;
  if (param_3 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001ea44),(char *)(DAT_0001ea4c + 0x1e958),
            DAT_0001ea48 + 0x1e950,0x2dc);
  }
  if ((param_1 == 0) || (param_2 == 0)) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001ea44),(char *)(DAT_0001ea54 + 0x1e99c),
            DAT_0001ea50 + 0x1e994,0x2e1);
  }
  else {
    if (*(int *)(param_1 + 0x18) == 0 && *(int *)(param_1 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001ea44),(char *)(DAT_0001ea5c + 0x1e9e4),
              DAT_0001ea58 + 0x1e9dc,0x2e6);
    }
    if (*(int *)(param_2 + 0x18) == 0 && *(int *)(param_2 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001ea44),(char *)(DAT_0001ea64 + 0x1ea28),
              DAT_0001ea60 + 0x1ea20,0x2ec);
    }
  }
  return 0;
}



/* ===== rve_check_integ_param_user @ 0001ea68 size=328 ===== */

undefined4 rve_check_integ_param_user(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = DAT_0001ebb0 + 0x1ea8c;
  if (param_3 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001ebb4),(char *)(DAT_0001ebbc + 0x1eac8),
            DAT_0001ebb8 + 0x1eac0,0x2f8);
  }
  if ((param_1 == 0) || (param_2 == 0)) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001ebb4),(char *)(DAT_0001ebc4 + 0x1eb0c),
            DAT_0001ebc0 + 0x1eb04,0x2fd);
  }
  else {
    if (*(int *)(param_1 + 0x18) == 0 && *(int *)(param_1 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001ebb4),(char *)(DAT_0001ebcc + 0x1eb54),
              DAT_0001ebc8 + 0x1eb4c,0x302);
    }
    if (*(int *)(param_2 + 0x18) == 0 && *(int *)(param_2 + 0x1c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_0001ebb4),(char *)(DAT_0001ebd4 + 0x1eb98),
              DAT_0001ebd0 + 0x1eb90,0x308);
    }
  }
  return 0;
}



/* ===== FUN_0001ebd8 @ 0001ebd8 size=88 ===== */

void FUN_0001ebd8(int *param_1,int *param_2,int param_3)

{
  *(int **)(param_3 + 4) = param_1;
  *param_1 = param_3;
  param_1[1] = (int)param_2;
  *param_2 = (int)param_1;
  return;
}



/* ===== FUN_0001ec30 @ 0001ec30 size=56 ===== */

void FUN_0001ec30(undefined4 param_1,int param_2)

{
  FUN_0001ebd8(param_1,*(undefined4 *)(param_2 + 4),param_2);
  return;
}



/* ===== rve_get_entity_name @ 0001ec68 size=96 ===== */

undefined4 rve_get_entity_name(int param_1)

{
  undefined4 uVar1;
  undefined4 auStack_60 [22];
  
  if (param_1 < 0x16) {
    memcpy(auStack_60,(void *)(DAT_0001ecc8 + 0x1ec98),0x58);
    uVar1 = auStack_60[param_1];
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== rve_get_entity_id @ 0001eccc size=124 ===== */

int rve_get_entity_id(char *param_1)

{
  char *__s2;
  int iVar1;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (0x15 < local_c) {
      return -1;
    }
    __s2 = (char *)rve_get_entity_name(local_c);
    iVar1 = strcmp(param_1,__s2);
    if (iVar1 == 0) break;
    local_c = local_c + 1;
  }
  return local_c;
}



/* ===== rve_entity_get_module_ctrl_size @ 0001ed48 size=456 ===== */

undefined4 rve_entity_get_module_ctrl_size(undefined4 param_1)

{
  undefined4 local_c;
  
  local_c = 0;
  switch(param_1) {
  case 0:
    local_c = 0x28;
    break;
  case 1:
    local_c = 0x10;
    break;
  case 2:
    local_c = 0x40;
    break;
  case 3:
    local_c = 8;
    break;
  case 4:
    local_c = 0x14;
    break;
  case 5:
    local_c = 0x30;
    break;
  case 6:
    local_c = 4;
    break;
  case 7:
    local_c = 8;
    break;
  case 8:
    local_c = 0x1c;
    break;
  case 9:
    local_c = 0x1d;
    break;
  case 10:
    local_c = 0x18;
    break;
  case 0xb:
    local_c = 8;
    break;
  case 0xc:
    local_c = 0x420;
    break;
  case 0xd:
    local_c = 8;
    break;
  case 0xe:
    local_c = 0x20;
    break;
  case 0xf:
    local_c = 4;
    break;
  case 0x10:
    local_c = 0x1a;
    break;
  case 0x11:
    local_c = 0x20;
    break;
  case 0x12:
    local_c = 0x24;
    break;
  case 0x13:
    local_c = 0x10;
    break;
  case 0x14:
    local_c = 0x1c;
    break;
  case 0x15:
    local_c = 4;
    break;
  default:
    fprintf((FILE *)**(undefined4 **)(DAT_0001ef10 + 0x1ed64 + DAT_0001ef14),
            (char *)(DAT_0001ef1c + 0x1eefc),DAT_0001ef18 + 0x1eef4,0xf4);
  }
  return local_c;
}



/* ===== rve_entity_get_module_ctrl @ 0001ef20 size=1184 ===== */

void * rve_entity_get_module_ctrl(undefined4 param_1,int param_2)

{
  void *local_c;
  
  if (param_2 == 0) {
    switch(param_1) {
    case 0:
      local_c = malloc(0x28);
      break;
    case 1:
      local_c = malloc(0x10);
      break;
    case 2:
      local_c = malloc(0x40);
      break;
    case 3:
      local_c = malloc(8);
      break;
    case 4:
      local_c = malloc(0x14);
      break;
    case 5:
      local_c = malloc(0x30);
      break;
    case 6:
      local_c = malloc(4);
      break;
    case 7:
      local_c = malloc(8);
      break;
    case 8:
      local_c = malloc(0x1c);
      break;
    case 9:
      local_c = malloc(0x1d);
      break;
    case 10:
      local_c = malloc(0x18);
      break;
    case 0xb:
      local_c = malloc(8);
      break;
    case 0xc:
      local_c = malloc(0x420);
      break;
    case 0xd:
      local_c = malloc(8);
      break;
    case 0xe:
      local_c = malloc(0x20);
      break;
    case 0xf:
      local_c = malloc(4);
      break;
    case 0x10:
      local_c = malloc(0x1a);
      break;
    case 0x11:
      local_c = malloc(0x20);
      break;
    case 0x12:
      local_c = malloc(0x24);
      break;
    case 0x13:
      local_c = malloc(0x10);
      break;
    case 0x14:
      local_c = malloc(0x1c);
      break;
    case 0x15:
      local_c = malloc(4);
      break;
    default:
      fprintf((FILE *)**(undefined4 **)(DAT_0001f3c0 + 0x1ef40 + DAT_0001f3c4),
              (char *)(DAT_0001f3cc + 0x1f18c),DAT_0001f3c8 + 0x1f184,0x144);
    }
  }
  else {
    switch(param_1) {
    case 0:
      local_c = (void *)(param_2 + 0x5d4);
      break;
    case 1:
      local_c = (void *)(param_2 + 0x668);
      break;
    case 2:
      local_c = (void *)(param_2 + 0x100);
      break;
    case 3:
      local_c = (void *)(param_2 + 0x164);
      break;
    case 4:
      local_c = (void *)(param_2 + 0x710);
      break;
    case 5:
      local_c = (void *)(param_2 + 0x608);
      break;
    case 6:
      local_c = (void *)(param_2 + 0x5fc);
      break;
    case 7:
      local_c = (void *)(param_2 + 0x600);
      break;
    case 8:
      local_c = (void *)(param_2 + 0x5b8);
      break;
    case 9:
      local_c = (void *)(param_2 + 0x6f0);
      break;
    case 10:
      local_c = (void *)(param_2 + 0x180);
      break;
    case 0xb:
      local_c = (void *)(param_2 + 0x178);
      break;
    case 0xc:
      local_c = (void *)(param_2 + 0x198);
      break;
    case 0xd:
      local_c = (void *)(param_2 + 0x638);
      break;
    case 0xe:
      local_c = (void *)(param_2 + 0x644);
      break;
    case 0xf:
      local_c = (void *)(param_2 + 0x664);
      break;
    case 0x10:
      local_c = (void *)(param_2 + 0x678);
      break;
    case 0x11:
      local_c = (void *)(param_2 + 0x698);
      break;
    case 0x12:
      local_c = (void *)(param_2 + 0x140);
      break;
    case 0x13:
      local_c = (void *)(param_2 + 0x6e0);
      break;
    case 0x14:
      local_c = (void *)(param_2 + 0x724);
      break;
    case 0x15:
      local_c = (void *)(param_2 + 0x640);
      break;
    default:
      fprintf((FILE *)**(undefined4 **)(DAT_0001f3c0 + 0x1ef40 + DAT_0001f3c4),
              (char *)(DAT_0001f3d4 + 0x1f3ac),DAT_0001f3d0 + 0x1f3a4,0x18d);
    }
  }
  return local_c;
}



/* ===== rve_entity_fill_pad_info @ 0001f3d8 size=280 ===== */

undefined4
rve_entity_fill_pad_info
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          void *param_6)

{
  *(undefined4 *)(param_1 + 8) = param_5;
  if (param_6 == (void *)0x0) {
    *(undefined4 *)(param_1 + 0x4c) = param_2;
    *(undefined4 *)(param_1 + 0x50) = param_3;
    *(undefined4 *)(param_1 + 0x54) = param_4;
    if ((*(uint *)(param_1 + 8) & 0xffff) == 1) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffff;
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x30000;
    }
    else {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffff;
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x10000;
    }
  }
  else {
    memcpy((void *)(param_1 + 0x10),param_6,0x50);
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffff;
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x30000;
  }
  return 0;
}



/* ===== rve_entity_get_io_info @ 0001f4f0 size=744 ===== */

int rve_entity_get_io_info(byte param_1,int *param_2)

{
  byte local_9;
  
  local_9 = 0;
  if (param_1 == 5) {
    if (*(char *)((int)param_2 + 7) == '\0') {
      local_9 = 0;
    }
    else if (*(char *)((int)param_2 + 7) == '\x01') {
      local_9 = 1;
    }
  }
  else if (param_1 == 4) {
    if ((char)*param_2 == '\0') {
      local_9 = 0;
    }
    else if ((char)*param_2 == '\x01') {
      local_9 = 1;
    }
    else if ((char)*param_2 == '\x02') {
      local_9 = 2;
    }
  }
  else if (param_1 == 10) {
    if ((*param_2 == 0) || (*param_2 == 1)) {
      local_9 = 0;
    }
    else if ((*param_2 == 2) || (*param_2 == 3)) {
      local_9 = 1;
    }
  }
  else if (param_1 == 0xb) {
    if (((char)param_2[1] == '\0') && (*(char *)((int)param_2 + 5) == '\x02')) {
      local_9 = 0;
    }
    else if (((char)param_2[1] == '\0') && (*(char *)((int)param_2 + 5) == '\x03')) {
      local_9 = 1;
    }
    else if (((char)param_2[1] == '\x02') && (*(char *)((int)param_2 + 5) == '\0')) {
      local_9 = 2;
    }
    else if (((char)param_2[1] == '\x03') && (*(char *)((int)param_2 + 5) == '\0')) {
      local_9 = 3;
    }
    else if (((char)param_2[1] == '\x03') && (*(char *)((int)param_2 + 5) == '\x03')) {
      local_9 = 4;
    }
    else if (((char)param_2[1] == '\x03') && (*(char *)((int)param_2 + 5) == '\x02')) {
      local_9 = 5;
    }
    else if (((char)param_2[1] == '\x02') && (*(char *)((int)param_2 + 5) == '\x03')) {
      local_9 = 6;
    }
    else if (((char)param_2[1] == '\x02') && (*(char *)((int)param_2 + 5) == '\x02')) {
      local_9 = 7;
    }
  }
  return ((uint)param_1 * 8 + (uint)local_9) * 0x10 +
         *(int *)(DAT_0001f7d8 + 0x1f514 + DAT_0001f7dc);
}



/* ===== rve_entity_get_pads_num @ 0001f7e0 size=84 ===== */

char rve_entity_get_pads_num(undefined1 param_1,undefined4 param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)rve_entity_get_io_info(param_1,param_2);
  return *pcVar1 + pcVar1[1];
}



/* ===== rve_entity_pad_setup @ 0001f834 size=460 ===== */

void * rve_entity_pad_setup
                 (undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,int param_6)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  void *__s;
  int local_18;
  undefined4 local_14;
  int local_c;
  
  pbVar3 = (byte *)rve_entity_get_io_info(param_1,param_4);
  bVar2 = rve_entity_get_pads_num(param_1,param_4);
  __s = malloc((uint)bVar2 * 0x60);
  memset(__s,0,(uint)bVar2 * 0x60);
  for (local_c = 0; local_c < (int)(uint)bVar2; local_c = local_c + 1) {
    local_18 = 0;
    if (local_c < (int)(uint)*pbVar3) {
      bVar1 = pbVar3[local_c + 2];
      local_14 = 1;
      if (param_5 != 0) {
        local_18 = param_5 + local_c * 0x50;
      }
    }
    else {
      bVar1 = pbVar3[(local_c - (uint)*pbVar3) + 0xc];
      local_14 = 2;
      if (param_6 != 0) {
        local_18 = param_6 + (local_c - (uint)*pbVar3) * 0x50;
      }
    }
    rve_entity_fill_pad_info
              ((void *)((int)__s + local_c * 0x60),param_2,param_3,bVar1,local_14,local_18);
  }
  return __s;
}



/* ===== rve_entity_setup @ 0001fa00 size=768 ===== */

void * rve_entity_setup(undefined1 param_1,void *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  void *__s;
  void *__s_00;
  size_t __size;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int local_14;
  
  iVar8 = DAT_0001fd00 + 0x1fa2c;
  bVar1 = rve_entity_get_pads_num(param_1,param_2);
  uVar2 = rve_entity_pad_setup(param_1,0,0,param_2,param_3,param_4);
  __s = malloc(0x38);
  memset(__s,0,0x38);
  __s_00 = malloc((uint)bVar1 << 3);
  memset(__s_00,0,(uint)bVar1 << 3);
  __size = rve_entity_get_module_ctrl_size(param_1);
  pvVar3 = malloc(__size);
  *(void **)((int)__s + 0x28) = pvVar3;
  memcpy(*(void **)((int)__s + 0x28),param_2,__size);
  *(void **)__s = __s;
  *(undefined1 *)((int)__s + 4) = param_1;
  uVar4 = rve_get_entity_name(param_1);
  *(undefined4 *)((int)__s + 0x10) = uVar4;
  *(undefined1 *)((int)__s + 0x15) = 0;
  *(byte *)((int)__s + 0x14) = bVar1;
  *(undefined4 *)((int)__s + 0x18) = uVar2;
  *(void **)((int)__s + 0x1c) = __s_00;
  local_14 = 0;
  do {
    if ((int)(uint)bVar1 <= local_14) {
      rve_check_create_pipeline(0);
      piVar6 = (int *)__tls_get_addr(DAT_0001fd10 + 0x1fcac);
      FUN_0001ec30((int)__s + 0x20,*piVar6 + 8);
      piVar6 = (int *)__tls_get_addr(DAT_0001fd14 + 0x1fcd4);
      *(short *)(*piVar6 + 0x10) = *(short *)(*piVar6 + 0x10) + 1;
      return __s;
    }
    puVar7 = (undefined4 *)(*(int *)((int)__s + 0x18) + local_14 * 0x60);
    *puVar7 = __s;
    *(char *)(puVar7 + 1) = (char)local_14;
    if ((((puVar7[2] & 0xffff0000) == 0x10000) && (puVar7[0x13] != 0)) && (puVar7[0x14] != 0)) {
      iVar5 = SYS_MmzAlloc(puVar7 + 4,puVar7 + 10,puVar7[0x14] * puVar7[0x13] * 2);
      if (iVar5 < 0) {
        fprintf((FILE *)**(undefined4 **)(iVar8 + DAT_0001fd04),(char *)(DAT_0001fd0c + 0x1fc44),
                DAT_0001fd08 + 0x1fc3c,0x252);
        return (void *)0x0;
      }
      puVar7[2] = puVar7[2] & 0xffff;
      puVar7[2] = puVar7[2] | 0x20000;
    }
    local_14 = local_14 + 1;
  } while( true );
}



/* ===== rve_entity_create_link @ 0001fd18 size=912 ===== */

undefined4 rve_entity_create_link(int param_1,byte param_2,int param_3,byte param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int local_14;
  
  iVar6 = DAT_000200a8 + 0x1fd4c;
  iVar3 = *(int *)(param_1 + 0x18) + (uint)param_2 * 0x60;
  local_14 = 0;
  while( true ) {
    if ((int)(uint)*(byte *)(param_1 + 0x15) <= local_14) {
      if ((*(uint *)(iVar3 + 8) & 0xffff0000) == 0x10000) {
        if (*(int *)(iVar3 + 0x4c) == 0) {
          *(undefined4 *)(iVar3 + 0x4c) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x4c);
          *(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x40);
        }
        if (*(int *)(iVar3 + 0x50) == 0) {
          *(undefined4 *)(iVar3 + 0x50) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x50);
        }
        if ((*(int *)(iVar3 + 0x4c) != 0) && (*(int *)(iVar3 + 0x50) != 0)) {
          iVar2 = SYS_MmzAlloc(iVar3 + 0x10,iVar3 + 0x28,
                               *(int *)(iVar3 + 0x50) * *(int *)(iVar3 + 0x4c) * 2);
          if (iVar2 < 0) {
            fprintf((FILE *)**(undefined4 **)(iVar6 + DAT_000200ac),(char *)(DAT_000200b4 + 0x1ff4c)
                    ,DAT_000200b0 + 0x1ff44,0x280);
            return 0xfffffffa;
          }
          *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) & 0xffff;
          *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | 0x20000;
        }
      }
      memcpy((void *)(*(int *)(param_3 + 0x18) + (uint)param_4 * 0x60 + 0x10),
             (void *)(*(int *)(param_1 + 0x18) + (uint)param_2 * 0x60 + 0x10),0x50);
      bVar1 = *(byte *)(param_1 + 0x15);
      *(byte *)(param_1 + 0x15) = bVar1 + 1;
      piVar4 = (int *)(*(int *)(param_1 + 0x1c) + (uint)bVar1 * 8);
      if (piVar4 == (int *)0x0) {
        fprintf((FILE *)**(undefined4 **)(iVar6 + DAT_000200ac),(char *)(DAT_000200bc + 0x20038),
                DAT_000200b8 + 0x20030,0x28c,*(undefined4 *)(param_1 + 0x10),
                *(byte *)(param_1 + 0x15) - 1);
        uVar5 = 0xfffffffa;
      }
      else {
        *piVar4 = *(int *)(param_1 + 0x18) + (uint)param_2 * 0x60;
        piVar4[1] = *(int *)(param_3 + 0x18) + (uint)param_4 * 0x60;
        *(char *)(param_3 + 0x16) = *(char *)(param_3 + 0x16) + '\x01';
        uVar5 = 0;
      }
      return uVar5;
    }
    if ((((*(char *)(**(int **)(*(int *)(param_1 + 0x1c) + local_14 * 8) + 4) ==
           *(char *)(param_1 + 4)) &&
         (param_2 == *(byte *)(*(int *)(*(int *)(param_1 + 0x1c) + local_14 * 8) + 4))) &&
        (*(char *)(**(int **)(*(int *)(param_1 + 0x1c) + local_14 * 8 + 4) + 4) ==
         *(char *)(param_3 + 4))) &&
       (param_4 == *(byte *)(*(int *)(*(int *)(param_1 + 0x1c) + local_14 * 8 + 4) + 4))) break;
    local_14 = local_14 + 1;
  }
  return 0;
}



/* ===== rve_entity_get_buffer_info @ 000200c0 size=292 ===== */

undefined4 rve_entity_get_buffer_info(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0;
  if ((param_3 == 1) || (param_3 == 2)) {
    for (local_c = 0; local_c < (int)(uint)*(byte *)(param_1 + 0x14); local_c = local_c + 1) {
      if (param_3 == (*(uint *)(*(int *)(param_1 + 0x18) + local_c * 0x60 + 8) & 0xffff)) {
        memcpy((void *)(param_2 + local_10 * 0x50),
               (void *)(*(int *)(param_1 + 0x18) + local_c * 0x60 + 0x10),0x50);
        local_10 = local_10 + 1;
      }
    }
    uVar1 = 0;
  }
  else {
    fprintf((FILE *)**(undefined4 **)(DAT_000201e4 + 0x200e4 + DAT_000201e8),
            (char *)(DAT_000201f0 + 0x20124),DAT_000201ec + 0x2011c,0x2ab);
    uVar1 = 0xfffffff9;
  }
  return uVar1;
}



/* ===== rve_hal_find_mmz_intf @ 000201f4 size=1396 ===== */

undefined4 rve_hal_find_mmz_intf(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  FILE *pFVar5;
  
  iVar4 = DAT_00020768 + 0x2020c;
  piVar1 = (int *)__tls_get_addr(DAT_0002076c + 0x20214);
  iVar3 = *piVar1;
  uVar2 = dlopen(DAT_00020770 + 0x20234,2);
  *(undefined4 *)(iVar3 + 0x750) = uVar2;
  if (*(int *)(iVar3 + 0x750) == 0) {
    pFVar5 = (FILE *)**(undefined4 **)(iVar4 + DAT_00020774);
    uVar2 = dlerror();
    fprintf(pFVar5,(char *)(DAT_00020780 + 0x20290),DAT_0002077c + 0x20288,0x2e,
            DAT_00020778 + 0x20278,uVar2);
  }
  else {
    uVar2 = dlsym(*(undefined4 *)(iVar3 + 0x750),DAT_00020784 + 0x202ac);
    *(undefined4 *)(iVar3 + 0x754) = uVar2;
    uVar2 = dlsym(*(undefined4 *)(iVar3 + 0x750),DAT_00020788 + 0x202d8);
    *(undefined4 *)(iVar3 + 0x758) = uVar2;
    uVar2 = dlsym(*(undefined4 *)(iVar3 + 0x750),DAT_0002078c + 0x20304);
    *(undefined4 *)(iVar3 + 0x75c) = uVar2;
    uVar2 = dlsym(*(undefined4 *)(iVar3 + 0x750),DAT_00020790 + 0x20330);
    *(undefined4 *)(iVar3 + 0x760) = uVar2;
    uVar2 = dlsym(*(undefined4 *)(iVar3 + 0x750),DAT_00020794 + 0x2035c);
    *(undefined4 *)(iVar3 + 0x764) = uVar2;
    uVar2 = dlsym(*(undefined4 *)(iVar3 + 0x750),DAT_00020798 + 0x20388);
    *(undefined4 *)(iVar3 + 0x768) = uVar2;
    uVar2 = dlsym(*(undefined4 *)(iVar3 + 0x750),DAT_0002079c + 0x203b4);
    *(undefined4 *)(iVar3 + 0x76c) = uVar2;
    uVar2 = dlsym(*(undefined4 *)(iVar3 + 0x750),DAT_000207a0 + 0x203e0);
    *(undefined4 *)(iVar3 + 0x770) = uVar2;
    uVar2 = dlsym(*(undefined4 *)(iVar3 + 0x750),DAT_000207a4 + 0x2040c);
    *(undefined4 *)(iVar3 + 0x774) = uVar2;
    uVar2 = dlsym(*(undefined4 *)(iVar3 + 0x750),DAT_000207a8 + 0x20438);
    *(undefined4 *)(iVar3 + 0x778) = uVar2;
    if (*(int *)(iVar3 + 0x754) == 0) {
      pFVar5 = (FILE *)**(undefined4 **)(iVar4 + DAT_00020774);
      uVar2 = dlerror();
      fprintf(pFVar5,(char *)(DAT_000207b0 + 0x20490),DAT_000207ac + 0x20488,0x48,uVar2);
      return 0xffffffff;
    }
    if (*(int *)(iVar3 + 0x758) == 0) {
      pFVar5 = (FILE *)**(undefined4 **)(iVar4 + DAT_00020774);
      uVar2 = dlerror();
      fprintf(pFVar5,(char *)(DAT_000207b8 + 0x204dc),DAT_000207b4 + 0x204d4,0x4d,uVar2);
      return 0xffffffff;
    }
    if (*(int *)(iVar3 + 0x75c) == 0) {
      pFVar5 = (FILE *)**(undefined4 **)(iVar4 + DAT_00020774);
      uVar2 = dlerror();
      fprintf(pFVar5,(char *)(DAT_000207c0 + 0x20528),DAT_000207bc + 0x20520,0x52,uVar2);
      return 0xffffffff;
    }
    if (*(int *)(iVar3 + 0x760) == 0) {
      pFVar5 = (FILE *)**(undefined4 **)(iVar4 + DAT_00020774);
      uVar2 = dlerror();
      fprintf(pFVar5,(char *)(DAT_000207c8 + 0x20574),DAT_000207c4 + 0x2056c,0x57,uVar2);
      return 0xffffffff;
    }
    if (*(int *)(iVar3 + 0x764) == 0) {
      pFVar5 = (FILE *)**(undefined4 **)(iVar4 + DAT_00020774);
      uVar2 = dlerror();
      fprintf(pFVar5,(char *)(DAT_000207d0 + 0x205c0),DAT_000207cc + 0x205b8,0x5c,uVar2);
      return 0xffffffff;
    }
    if (*(int *)(iVar3 + 0x768) == 0) {
      pFVar5 = (FILE *)**(undefined4 **)(iVar4 + DAT_00020774);
      uVar2 = dlerror();
      fprintf(pFVar5,(char *)(DAT_000207d8 + 0x2060c),DAT_000207d4 + 0x20604,0x61,uVar2);
      return 0xffffffff;
    }
    if (*(int *)(iVar3 + 0x76c) == 0) {
      pFVar5 = (FILE *)**(undefined4 **)(iVar4 + DAT_00020774);
      uVar2 = dlerror();
      fprintf(pFVar5,(char *)(DAT_000207e0 + 0x20658),DAT_000207dc + 0x20650,0x66,uVar2);
      return 0xffffffff;
    }
    if (*(int *)(iVar3 + 0x770) == 0) {
      pFVar5 = (FILE *)**(undefined4 **)(iVar4 + DAT_00020774);
      uVar2 = dlerror();
      fprintf(pFVar5,(char *)(DAT_000207e8 + 0x206a4),DAT_000207e4 + 0x2069c,0x6b,uVar2);
      return 0xffffffff;
    }
    if (*(int *)(iVar3 + 0x774) == 0) {
      pFVar5 = (FILE *)**(undefined4 **)(iVar4 + DAT_00020774);
      uVar2 = dlerror();
      fprintf(pFVar5,(char *)(DAT_000207f0 + 0x206f0),DAT_000207ec + 0x206e8,0x70,uVar2);
      return 0xffffffff;
    }
    if (*(int *)(iVar3 + 0x778) == 0) {
      pFVar5 = (FILE *)**(undefined4 **)(iVar4 + DAT_00020774);
      uVar2 = dlerror();
      fprintf(pFVar5,(char *)(DAT_000207f8 + 0x2073c),DAT_000207f4 + 0x20734,0x75,uVar2);
      return 0xffffffff;
    }
    dlclose(*(undefined4 *)(iVar3 + 0x750));
  }
  return 0;
}



/* ===== rve_hal_set_ioctl_sim @ 000207fc size=180 ===== */

undefined4 rve_hal_set_ioctl_sim(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_000208b0 + 0x20818;
  piVar1 = (int *)__tls_get_addr(DAT_000208b4 + 0x20820);
  if (*piVar1 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar2 + DAT_000208b8),(char *)(DAT_000208c0 + 0x20858),
            DAT_000208bc + 0x20850,0x81);
    __assert((char *)(DAT_000208cc + 0x20878),(char *)(DAT_000208c8 + 0x20870),0x82);
  }
  piVar1 = (int *)__tls_get_addr(DAT_000208d0 + 0x20884);
  *(undefined4 *)(*piVar1 + 0x2c) = param_1;
  return 0;
}



/* ===== rve_hal_init @ 000208d4 size=204 ===== */

undefined4 rve_hal_init(void)

{
  void *__s;
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = DAT_000209a0 + 0x208ec;
  __s = malloc(0x780);
  memset(__s,0,0x780);
  *(undefined4 *)((int)__s + 0x10) = 0xffffffff;
  puVar1 = (undefined4 *)__tls_get_addr(DAT_000209a4 + 0x20920);
  *puVar1 = __s;
  iVar2 = rve_hal_find_mmz_intf();
  if (iVar2 < 0) {
    fprintf((FILE *)**(undefined4 **)(iVar4 + DAT_000209a8),(char *)(DAT_000209b0 + 0x20968),
            DAT_000209ac + 0x20960,0x99);
    uVar3 = 0xffffffff;
  }
  else {
    init_rve_hal_func_entires(__s);
    init_rve_params_to_regs_entries(__s);
    rve_hal_set_ioctl_sim(*(undefined4 *)(iVar4 + DAT_000209b4));
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== rve_hal_deinit @ 000209b8 size=164 ===== */

undefined4 rve_hal_deinit(void)

{
  int *piVar1;
  undefined4 *puVar2;
  void *__ptr;
  
  piVar1 = (int *)__tls_get_addr(DAT_00020a5c + 0x209d0);
  if (*piVar1 != 0) {
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00020a60 + 0x209f0);
    __ptr = (void *)*puVar2;
    if (-1 < *(int *)((int)__ptr + 0x10)) {
      close(*(int *)((int)__ptr + 0x10));
    }
    free(__ptr);
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00020a64 + 0x20a3c);
    *puVar2 = 0;
  }
  return 0;
}



/* ===== rve_hal_ioctl_start @ 00020a68 size=172 ===== */

int rve_hal_ioctl_start(void)

{
  int *piVar1;
  int iVar2;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar2 = DAT_00020b14 + 0x20a80;
  local_14 = 0;
  local_1c = -1;
  piVar1 = (int *)__tls_get_addr(DAT_00020b18 + 0x20a98);
  local_18 = *piVar1;
  local_14 = ioctl(*(int *)(local_18 + 0x10),0x80047205,&local_1c);
  if (local_14 < 0) {
    fprintf((FILE *)**(undefined4 **)(iVar2 + DAT_00020b1c),(char *)(DAT_00020b24 + 0x20af8),
            DAT_00020b20 + 0x20af0,0xc1);
  }
  else {
    local_14 = local_1c;
  }
  return local_14;
}



/* ===== rve_hal_ioctl_cmd @ 00020b28 size=420 ===== */

int rve_hal_ioctl_cmd(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_c0 [2];
  int local_b8;
  int iStack_b4;
  undefined4 local_a8;
  undefined4 local_a4;
  int local_18;
  int local_14;
  
  iVar3 = DAT_00020ccc + 0x20b44;
  local_14 = 0;
  piVar1 = (int *)__tls_get_addr(DAT_00020cd0 + 0x20b54);
  local_18 = *piVar1;
  *(undefined4 *)(param_1 + 0xe8) = 0x3a;
  *(undefined4 *)(local_18 + 0x2b4) = *(undefined4 *)(local_18 + 8);
  *(undefined1 *)(local_18 + 0x2c0) = *(undefined1 *)(param_1 + 0xf8);
  *(undefined4 *)(local_18 + 0x2b0) = *(undefined4 *)(param_1 + 0xe8);
  puVar2 = (undefined4 *)__tls_get_addr(DAT_00020cd4 + 0x20bac);
  *(undefined4 *)(local_18 + 700) = *puVar2;
  memcpy((void *)(local_18 + 0x210),(void *)(param_1 + 0x48),0xa0);
  memcpy((void *)(local_18 + 0x2d0),(void *)(param_1 + 0x108),800);
  memcpy((void *)(local_18 + 0x5f0),(void *)(param_1 + 0x428),0x140);
  if (*(int *)(param_1 + 0x100) == 1) {
    memset(local_c0,0,0xa8);
    local_c0[0] = *(undefined4 *)(param_1 + 0xe8);
    iStack_b4 = param_1 >> 0x1f;
    local_a4 = *(undefined4 *)(local_18 + 8);
    local_a8 = 1;
    local_b8 = param_1;
    local_14 = ioctl(*(int *)(local_18 + 0x10),0xc0a87207,local_c0);
    if (local_14 != 0) {
      fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00020cd8),(char *)(DAT_00020ce0 + 0x20cbc),
              DAT_00020cdc + 0x20cb4,0xfc);
    }
  }
  return local_14;
}



/* ===== rve_hal_ioctl_end @ 00020ce4 size=280 ===== */

int rve_hal_ioctl_end(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 local_c8 [2];
  void *local_c0;
  int iStack_bc;
  int local_b4;
  undefined4 local_ac;
  undefined4 local_a4;
  void *local_1c;
  int local_18;
  int local_14;
  
  iVar2 = DAT_00020dfc + 0x20d00;
  local_14 = 0;
  memset(local_c8,0,0xa8);
  piVar1 = (int *)__tls_get_addr(DAT_00020e00 + 0x20d24);
  local_18 = *piVar1;
  local_c8[0] = *(undefined4 *)(local_18 + 0x2b0);
  local_c0 = (void *)(local_18 + 0x1c8);
  iStack_bc = (int)local_c0 >> 0x1f;
  local_ac = *(undefined4 *)(local_18 + 8);
  local_a4 = param_1;
  local_14 = ioctl(*(int *)(local_18 + 0x10),0xc0a87206,local_c8);
  if (local_14 < 0) {
    fprintf((FILE *)**(undefined4 **)(iVar2 + DAT_00020e04),(char *)(DAT_00020e0c + 0x20db8),
            DAT_00020e08 + 0x20db0,0x117);
  }
  else {
    local_14 = local_b4;
  }
  local_1c = local_c0;
  memcpy((void *)(local_18 + 0xe0),local_c0,0xe8);
  return local_14;
}



/* ===== rve_hal_query @ 00020e10 size=388 ===== */

int rve_hal_query(int param_1)

{
  int *piVar1;
  int iVar2;
  pollfd local_24;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar2 = DAT_00020f94 + 0x20e34;
  local_14 = 0;
  local_18 = 100;
  piVar1 = (int *)__tls_get_addr(DAT_00020f98 + 0x20e4c);
  local_1c = *piVar1;
  if ((local_1c != 0) && (0 < *(int *)(local_1c + 0xc))) {
    if (param_1 == *(int *)(local_1c + 8)) {
      local_24.events = 1;
      local_24.fd = *(undefined4 *)(local_1c + 0xc);
      local_24.revents = 0;
      while( true ) {
        local_14 = poll(&local_24,1,local_18);
        if (0 < local_14) {
          local_14 = 0;
          goto LAB_00020f74;
        }
        if (local_14 == 0) break;
        if ((local_14 != -1) ||
           ((piVar1 = __errno_location(), *piVar1 != 4 &&
            (piVar1 = __errno_location(), *piVar1 != 0xb)))) goto LAB_00020f74;
      }
      local_14 = -0x3e;
    }
    else {
      fprintf((FILE *)**(undefined4 **)(iVar2 + DAT_00020f9c),(char *)(DAT_00020fa4 + 0x20f6c),
              DAT_00020fa0 + 0x20f64,0x145);
      local_14 = -1;
    }
LAB_00020f74:
    close(*(int *)(local_1c + 0xc));
  }
  return local_14;
}



/* ===== rve_hal_hw_version @ 00020fa8 size=96 ===== */

int rve_hal_hw_version(int param_1)

{
  int iVar1;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  local_c = 0;
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_2c = 0;
  local_1c = 0;
  local_14 = 0;
  uStack_18 = uStack_28;
  uStack_10 = uStack_28;
  iVar1 = ioctl(*(int *)(param_1 + 0x10),0x80207201,&local_2c);
  return iVar1;
}



/* ===== rve_hal_check_device @ 00021008 size=328 ===== */

int rve_hal_check_device(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_14;
  
  iVar4 = DAT_00021150 + 0x21020;
  local_14 = 0;
  piVar1 = (int *)__tls_get_addr(DAT_00021154 + 0x21030);
  if ((*piVar1 == 0) && (local_14 = rve_hal_init(), local_14 < 0)) {
    fprintf((FILE *)**(undefined4 **)(iVar4 + DAT_00021158),(char *)(DAT_00021160 + 0x2107c),
            DAT_0002115c + 0x21074,0x161);
    return -9;
  }
  piVar1 = (int *)__tls_get_addr(DAT_00021164 + 0x21090);
  iVar3 = *piVar1;
  pthread_mutex_lock((pthread_mutex_t *)(iVar3 + 0x14));
  if (*(int *)(iVar3 + 0x10) == -1) {
    iVar2 = open((char *)(DAT_00021168 + 0x210d0),0);
    *(int *)(iVar3 + 0x10) = iVar2;
    if (*(int *)(iVar3 + 0x10) < 0) {
      fprintf((FILE *)**(undefined4 **)(iVar4 + DAT_00021158),(char *)(DAT_00021170 + 0x21128),
              DAT_0002116c + 0x21120,0x175);
      local_14 = -9;
    }
    else {
      rve_hal_hw_version(iVar3);
      local_14 = 0;
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(iVar3 + 0x14));
  return local_14;
}



/* ===== init_rve_hal_func_entires @ 00021174 size=752 ===== */

void init_rve_hal_func_entires(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00021464 + 0x21190;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar1 + DAT_00021468);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar1 + DAT_0002146c);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar1 + DAT_00021470);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar1 + DAT_00021474);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar1 + DAT_00021478);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(iVar1 + DAT_0002147c);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(iVar1 + DAT_00021480);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar1 + DAT_00021484);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar1 + DAT_00021488);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + DAT_0002148c);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar1 + DAT_00021490);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iVar1 + DAT_00021494);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar1 + DAT_00021498);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar1 + DAT_0002149c);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(iVar1 + DAT_000214a0);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(iVar1 + DAT_000214a4);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(iVar1 + DAT_000214a8);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(iVar1 + DAT_000214ac);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(iVar1 + DAT_000214b0);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(iVar1 + DAT_000214b4);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(iVar1 + DAT_000214b8);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(iVar1 + DAT_000214bc);
  return;
}



/* ===== rve_hal_llp_start @ 000214c0 size=264 ===== */

int rve_hal_llp_start(uint param_1,undefined4 param_2,ushort param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = DAT_000215c8 + 0x214e4;
  iVar1 = rve_hal_check_device();
  if (-1 < iVar1) {
    piVar2 = (int *)__tls_get_addr(DAT_000215cc + 0x21510);
    iVar1 = *piVar2;
    *(uint *)(iVar1 + 0x1e8) = *(uint *)(iVar1 + 0x1e8) & 0xf | param_1 & 0xfffffff0;
    *(uint *)(iVar1 + 0x1ec) = *(uint *)(iVar1 + 0x1ec) & 0xc0000000 | (uint)param_3;
    uVar3 = rve_hal_ioctl_start();
    *(undefined4 *)(iVar1 + 8) = uVar3;
    if (*(int *)(iVar1 + 8) < 0) {
      fprintf((FILE *)**(undefined4 **)(iVar4 + DAT_000215d0),(char *)(DAT_000215d8 + 0x215ac),
              DAT_000215d4 + 0x215a4,0x1ae);
      iVar1 = -1;
    }
    else {
      iVar1 = *(int *)(iVar1 + 8);
    }
  }
  return iVar1;
}



/* ===== rve_hal_llp_run @ 000215dc size=452 ===== */

undefined4
rve_hal_llp_run(byte param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 local_14;
  
  piVar1 = (int *)__tls_get_addr(DAT_000217a0 + 0x21618);
  iVar3 = *piVar1;
  pbVar4 = (byte *)(param_2 + 4);
  *(ushort *)(param_2 + 6) = (ushort)param_1;
  *pbVar4 = *pbVar4 & 0xfe;
  *pbVar4 = *pbVar4 | 4;
  if ((ushort)((short)*(undefined4 *)(iVar3 + 0x1ec) - 1U) == (ushort)param_1) {
    *pbVar4 = *pbVar4 | 2;
  }
  else {
    *pbVar4 = *pbVar4 & 0xfd;
  }
  puVar2 = (undefined4 *)__tls_get_addr(DAT_000217a4 + 0x216e0);
  rve_hal_translate_comm_params_to_regs(*puVar2,*(undefined1 *)(param_3 + 4),param_4,param_5);
  (**(code **)(iVar3 + (*(byte *)(param_3 + 4) + 0xc) * 4))
            (0,param_4,param_5,*(undefined4 *)(param_3 + 0x28));
  for (local_14 = 0; local_14 < 0x20; local_14 = local_14 + 1) {
    *(undefined4 *)(param_2 + 0x10 + local_14 * 4) =
         *(undefined4 *)(iVar3 + 0x210 + (local_14 + 4) * 4);
  }
  return 0;
}



/* ===== rve_hal_llp_end @ 000217a8 size=304 ===== */

undefined4 rve_hal_llp_end(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = DAT_000218d8 + 0x217c4;
  piVar1 = (int *)__tls_get_addr(DAT_000218dc + 0x217d4);
  iVar3 = *piVar1;
  *(byte *)(iVar3 + 0x1f0) = *(byte *)(iVar3 + 0x1f0) | 1;
  *(byte *)(iVar3 + 500) = *(byte *)(iVar3 + 500) | 1;
  memset((void *)(iVar3 + 0x210),0,0xa0);
  *(undefined4 *)(iVar3 + 0x2c8) = 1;
  iVar2 = rve_hal_ioctl_cmd(iVar3 + 0x1c8);
  if (iVar2 != 0) {
    fprintf((FILE *)**(undefined4 **)(iVar4 + DAT_000218e0),(char *)(DAT_000218e8 + 0x21870),
            DAT_000218e4 + 0x21868,0x1e7);
  }
  iVar2 = rve_hal_ioctl_end(param_1);
  if (iVar2 < 0) {
    fprintf((FILE *)**(undefined4 **)(iVar4 + DAT_000218e0),(char *)(DAT_000218f0 + 0x218ac),
            DAT_000218ec + 0x218a4,0x1ec);
  }
  *(int *)(iVar3 + 0xc) = iVar2;
  *(undefined4 *)(iVar3 + 0x77c) = *(undefined4 *)(iVar3 + 0x2b8);
  return 0;
}



/* ===== rve_hal_start @ 000218f4 size=192 ===== */

int rve_hal_start(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = DAT_000219b4 + 0x2190c;
  iVar1 = rve_hal_check_device();
  if (-1 < iVar1) {
    piVar2 = (int *)__tls_get_addr(DAT_000219b8 + 0x21938);
    iVar1 = *piVar2;
    uVar3 = rve_hal_ioctl_start();
    *(undefined4 *)(iVar1 + 8) = uVar3;
    if (*(int *)(iVar1 + 8) < 0) {
      fprintf((FILE *)**(undefined4 **)(iVar4 + DAT_000219bc),(char *)(DAT_000219c4 + 0x21998),
              DAT_000219c0 + 0x21990,0x203);
      iVar1 = -1;
    }
    else {
      iVar1 = *(int *)(iVar1 + 8);
    }
  }
  return iVar1;
}



/* ===== rve_hal_run @ 000219c8 size=176 ===== */

undefined4
rve_hal_run(byte param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
           )

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  piVar1 = (int *)__tls_get_addr(DAT_00021a78 + 0x21a04);
  iVar3 = *piVar1;
  puVar2 = (undefined4 *)__tls_get_addr(DAT_00021a7c + 0x21a28);
  rve_hal_translate_comm_params_to_regs(*puVar2,param_1,param_3,param_4);
  (**(code **)(iVar3 + (param_1 + 0xc) * 4))(1,param_3,param_4,param_5);
  return 0;
}



/* ===== rve_hal_end @ 00021a80 size=284 ===== */

undefined4 rve_hal_end(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = DAT_00021b9c + 0x21aa0;
  piVar1 = (int *)__tls_get_addr(DAT_00021ba0 + 0x21ab0);
  iVar3 = *piVar1;
  iVar2 = rve_hal_ioctl_end(param_2);
  if (iVar2 < 0) {
    fprintf((FILE *)**(undefined4 **)(iVar5 + DAT_00021ba4),(char *)(DAT_00021bac + 0x21b08),
            DAT_00021ba8 + 0x21b00,0x221);
    uVar4 = 0xffffffff;
  }
  else {
    *(int *)(iVar3 + 0xc) = iVar2;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar3 + 8);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(param_1 + 0x30) = iVar3 + 0x128;
    *(int *)(param_1 + 0x34) = iVar3 + 0x128 >> 0x1f;
    rve_hal_post_proc(param_1);
    *(undefined4 *)(iVar3 + 0x77c) = *(undefined4 *)(iVar3 + 0x2b8);
    *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
    uVar4 = 0;
  }
  return uVar4;
}



/* ===== rve_hal_gmm @ 00021bb0 size=668 ===== */

int rve_hal_gmm(undefined4 param_1,void *param_2,void *param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_5a0 [236];
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined1 local_4a8;
  undefined4 local_4a0;
  undefined1 auStack_498 [80];
  undefined1 auStack_448 [80];
  undefined1 auStack_3f8 [80];
  undefined1 auStack_3a8 [560];
  undefined1 auStack_178 [80];
  undefined1 auStack_128 [80];
  undefined1 auStack_d8 [80];
  undefined1 auStack_88 [112];
  int local_18;
  int local_14;
  
  iVar3 = DAT_00021e4c + 0x21bdc;
  local_14 = 0;
  piVar1 = (int *)__tls_get_addr(DAT_00021e50 + 0x21bec);
  if (*piVar1 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00021e54),(char *)(DAT_00021e5c + 0x21c24),
            DAT_00021e58 + 0x21c1c,0x238);
    __assert((char *)(DAT_00021e68 + 0x21c44),(char *)(DAT_00021e64 + 0x21c3c),0x239);
  }
  piVar1 = (int *)__tls_get_addr(DAT_00021e6c + 0x21c50);
  local_18 = *piVar1;
  local_14 = rve_check_gmm_param_user(param_2,param_3,param_4);
  if (-1 < local_14) {
    memset(auStack_5a0,0,0x588);
    memcpy(auStack_498,param_2,0x50);
    memcpy(auStack_448,(void *)((int)param_2 + 0x50),0x50);
    memcpy(auStack_3f8,(void *)((int)param_2 + 0xa0),0x50);
    memcpy(auStack_3a8,(void *)((int)param_2 + 0xf0),0x50);
    memcpy(auStack_178,param_3,0x50);
    memcpy(auStack_128,(void *)((int)param_3 + 0x50),0x50);
    memcpy(auStack_d8,(void *)((int)param_3 + 0xa0),0x50);
    memcpy(auStack_88,(void *)((int)param_3 + 0xf0),0x50);
    local_4a8 = 0;
    *(char *)(param_4 + 4) = *(char *)(param_4 + 4) + -1;
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00021e70 + 0x21d9c);
    rve_hal_translate_params_to_regs(*puVar2,auStack_5a0,param_4);
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00021e74 + 0x21dc8);
    local_4ac = *puVar2;
    local_4b4 = *(undefined4 *)(local_18 + 8);
    local_4a0 = param_1;
    local_14 = rve_hal_ioctl_cmd(auStack_5a0);
    if (local_14 != 0) {
      fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00021e54),(char *)(DAT_00021e7c + 0x21e30),
              DAT_00021e78 + 0x21e28,0x256);
    }
    *(undefined4 *)(local_18 + 0x77c) = local_4b0;
  }
  return local_14;
}



/* ===== rve_hal_bgm @ 00021e80 size=584 ===== */

int rve_hal_bgm(undefined4 param_1,void *param_2,void *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_5a0 [236];
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined1 local_4a8;
  undefined4 local_4a4;
  undefined4 local_4a0;
  undefined1 auStack_498 [80];
  undefined1 auStack_448 [720];
  undefined1 auStack_178 [80];
  undefined1 auStack_128 [160];
  undefined1 auStack_88 [112];
  int local_18;
  int local_14;
  
  iVar3 = DAT_000220c8 + 0x21eac;
  local_14 = 0;
  piVar1 = (int *)__tls_get_addr(DAT_000220cc + 0x21ebc);
  if (*piVar1 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_000220d0),(char *)(DAT_000220d8 + 0x21ef4),
            DAT_000220d4 + 0x21eec,0x263);
    __assert((char *)(DAT_000220e4 + 0x21f14),(char *)(DAT_000220e0 + 0x21f0c),0x264);
  }
  piVar1 = (int *)__tls_get_addr(DAT_000220e8 + 0x21f20);
  local_18 = *piVar1;
  local_14 = rve_check_bgm_param_user(param_2,param_3,param_4);
  if (-1 < local_14) {
    memset(auStack_5a0,0,0x588);
    memcpy(auStack_498,param_2,0x50);
    memcpy(auStack_448,(void *)((int)param_2 + 0x50),0x50);
    memcpy(auStack_178,param_3,0x50);
    memcpy(auStack_128,(void *)((int)param_3 + 0x50),0x50);
    memcpy(auStack_88,(void *)((int)param_3 + 0xf0),0x50);
    local_4a8 = 1;
    puVar2 = (undefined4 *)__tls_get_addr(DAT_000220ec + 0x2200c);
    rve_hal_translate_params_to_regs(*puVar2,auStack_5a0,param_4);
    puVar2 = (undefined4 *)__tls_get_addr(DAT_000220f0 + 0x22038);
    local_4ac = *puVar2;
    local_4b4 = *(undefined4 *)(local_18 + 8);
    local_4a4 = *(undefined4 *)(local_18 + 4);
    local_4a0 = param_1;
    local_14 = rve_hal_ioctl_cmd(auStack_5a0);
    if (local_14 != 0) {
      fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_000220d0),(char *)(DAT_000220f8 + 0x220ac),
              DAT_000220f4 + 0x220a4,0x280);
    }
    *(undefined4 *)(local_18 + 0x77c) = local_4b0;
  }
  return local_14;
}



/* ===== rve_hal_cannyedge @ 000220fc size=524 ===== */

int rve_hal_cannyedge(undefined4 param_1,void *param_2,void *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_5a0 [236];
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined1 local_4a8;
  undefined4 local_4a0;
  undefined1 auStack_498 [80];
  undefined1 auStack_448 [720];
  undefined1 auStack_178 [352];
  int local_18;
  int local_14;
  
  iVar3 = DAT_00022308 + 0x22128;
  local_14 = 0;
  piVar1 = (int *)__tls_get_addr(DAT_0002230c + 0x22138);
  if (*piVar1 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00022310),(char *)(DAT_00022318 + 0x22170),
            DAT_00022314 + 0x22168,0x28d);
    __assert((char *)(DAT_00022324 + 0x22190),(char *)(DAT_00022320 + 0x22188),0x28e);
  }
  piVar1 = (int *)__tls_get_addr(DAT_00022328 + 0x2219c);
  local_18 = *piVar1;
  local_14 = rve_check_canny_param_user(param_2,param_3,param_4);
  if (-1 < local_14) {
    memset(auStack_5a0,0,0x588);
    memcpy(auStack_498,param_2,0x50);
    memcpy(auStack_448,(void *)((int)param_2 + 0x50),0x50);
    memcpy(auStack_178,param_3,0x50);
    local_4a8 = 2;
    puVar2 = (undefined4 *)__tls_get_addr(DAT_0002232c + 0x22258);
    rve_hal_translate_params_to_regs(*puVar2,auStack_5a0,param_4);
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00022330 + 0x22284);
    local_4ac = *puVar2;
    local_4b4 = *(undefined4 *)(local_18 + 8);
    local_4a0 = param_1;
    local_14 = rve_hal_ioctl_cmd(auStack_5a0);
    if (local_14 != 0) {
      fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00022310),(char *)(DAT_00022338 + 0x222ec),
              DAT_00022334 + 0x222e4,0x2a4);
    }
    *(undefined4 *)(local_18 + 0x77c) = local_4b0;
  }
  return local_14;
}



/* ===== rve_hal_dma @ 0002233c size=536 ===== */

int rve_hal_dma(undefined4 param_1,void *param_2,void *param_3,uint *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_5a0 [236];
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined1 local_4a8;
  undefined4 local_4a0;
  undefined1 auStack_498 [800];
  undefined1 auStack_178 [352];
  int local_18;
  int local_14;
  
  iVar3 = DAT_00022554 + 0x22368;
  local_14 = 0;
  piVar1 = (int *)__tls_get_addr(DAT_00022558 + 0x22378);
  if (*piVar1 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_0002255c),(char *)(DAT_00022564 + 0x223b0),
            DAT_00022560 + 0x223a8,0x2b1);
    __assert((char *)(DAT_00022570 + 0x223d0),(char *)(DAT_0002256c + 0x223c8),0x2b2);
  }
  piVar1 = (int *)__tls_get_addr(DAT_00022574 + 0x223dc);
  local_18 = *piVar1;
  local_14 = rve_check_dma_param_user(param_2,param_3,param_4);
  if (-1 < local_14) {
    memset(auStack_5a0,0,0x588);
    if (*param_4 < 2) {
      memcpy(auStack_498,param_2,0x50);
      memcpy(auStack_178,param_3,0x50);
    }
    else {
      memcpy(auStack_178,param_3,0x50);
    }
    local_4a8 = 10;
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00022578 + 0x224a4);
    rve_hal_translate_params_to_regs(*puVar2,auStack_5a0,param_4);
    puVar2 = (undefined4 *)__tls_get_addr(DAT_0002257c + 0x224d0);
    local_4ac = *puVar2;
    local_4b4 = *(undefined4 *)(local_18 + 8);
    local_4a0 = param_1;
    local_14 = rve_hal_ioctl_cmd(auStack_5a0);
    if (local_14 != 0) {
      fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_0002255c),(char *)(DAT_00022584 + 0x22538),
              DAT_00022580 + 0x22530,0x2cd);
    }
    *(undefined4 *)(local_18 + 0x77c) = local_4b0;
  }
  return local_14;
}



/* ===== rve_hal_filter @ 00022588 size=528 ===== */

int rve_hal_filter(undefined4 param_1,void *param_2,void *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_5a0 [236];
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined1 local_4a8;
  undefined4 local_4a0;
  undefined1 auStack_498 [800];
  undefined1 auStack_178 [352];
  int local_18;
  int local_14;
  
  iVar3 = DAT_00022798 + 0x225b4;
  local_14 = 0;
  piVar1 = (int *)__tls_get_addr(DAT_0002279c + 0x225c4);
  if (*piVar1 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_000227a0),(char *)(DAT_000227a8 + 0x225fc),
            DAT_000227a4 + 0x225f4,0x2dc);
    __assert((char *)(DAT_000227b4 + 0x2261c),(char *)(DAT_000227b0 + 0x22614),0x2dd);
  }
  piVar1 = (int *)__tls_get_addr(DAT_000227b8 + 0x22628);
  local_18 = *piVar1;
  local_14 = rve_check_filter_param_user(param_2,param_3,param_4);
  if (local_14 < 0) {
    fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_000227a0),(char *)(DAT_000227c0 + 0x2267c),
            DAT_000227bc + 0x22674,0x2e3);
  }
  else {
    memset(auStack_5a0,0,0x588);
    memcpy(auStack_498,param_2,0x50);
    memcpy(auStack_178,param_3,0x50);
    local_4a8 = 8;
    puVar2 = (undefined4 *)__tls_get_addr(DAT_000227c4 + 0x226e8);
    rve_hal_translate_params_to_regs(*puVar2,auStack_5a0,param_4);
    puVar2 = (undefined4 *)__tls_get_addr(DAT_000227c8 + 0x22714);
    local_4ac = *puVar2;
    local_4b4 = *(undefined4 *)(local_18 + 8);
    local_4a0 = param_1;
    local_14 = rve_hal_ioctl_cmd(auStack_5a0);
    if (local_14 != 0) {
      fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_000227a0),(char *)(DAT_000227d0 + 0x2277c),
              DAT_000227cc + 0x22774,0x2f4);
    }
    *(undefined4 *)(local_18 + 0x77c) = local_4b0;
  }
  return local_14;
}



/* ===== rve_hal_sobel @ 000227d4 size=516 ===== */

int rve_hal_sobel(undefined4 param_1,void *param_2,void *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_5a0 [236];
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined1 local_4a8;
  undefined4 local_4a0;
  undefined1 auStack_498 [800];
  undefined1 auStack_178 [80];
  undefined1 auStack_128 [272];
  int local_18;
  int local_14;
  
  iVar3 = DAT_000229d8 + 0x22800;
  local_14 = 0;
  piVar1 = (int *)__tls_get_addr(DAT_000229dc + 0x22810);
  if (*piVar1 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_000229e0),(char *)(DAT_000229e8 + 0x22848),
            DAT_000229e4 + 0x22840,0x303);
    __assert((char *)(DAT_000229f4 + 0x22868),(char *)(DAT_000229f0 + 0x22860),0x304);
  }
  piVar1 = (int *)__tls_get_addr(DAT_000229f8 + 0x22874);
  local_18 = *piVar1;
  local_14 = rve_check_sobel_param_user(param_2,param_3,param_4);
  if (-1 < local_14) {
    memset(auStack_5a0,0,0x588);
    memcpy(auStack_498,param_2,0x50);
    memcpy(auStack_178,param_3,0x50);
    memcpy(auStack_128,(void *)((int)param_3 + 0x50),0x50);
    local_4a8 = 9;
    puVar2 = (undefined4 *)__tls_get_addr(DAT_000229fc + 0x22928);
    rve_hal_translate_params_to_regs(*puVar2,auStack_5a0,param_4);
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00022a00 + 0x22954);
    local_4ac = *puVar2;
    local_4b4 = *(undefined4 *)(local_18 + 8);
    local_4a0 = param_1;
    local_14 = rve_hal_ioctl_cmd(auStack_5a0);
    if (local_14 != 0) {
      fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_000229e0),(char *)(DAT_00022a08 + 0x229bc),
              DAT_00022a04 + 0x229b4,0x31b);
    }
    *(undefined4 *)(local_18 + 0x77c) = local_4b0;
  }
  return local_14;
}



/* ===== rve_hal_csc @ 00022a0c size=596 ===== */

int rve_hal_csc(undefined4 param_1,void *param_2,void *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_5a0 [236];
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined1 local_4a8;
  undefined4 local_4a0;
  undefined1 auStack_498 [80];
  undefined1 auStack_448 [80];
  undefined1 auStack_3f8 [640];
  undefined1 auStack_178 [80];
  undefined1 auStack_128 [80];
  undefined1 auStack_d8 [192];
  int local_18;
  int local_14;
  
  iVar3 = DAT_00022c60 + 0x22a38;
  local_14 = 0;
  piVar1 = (int *)__tls_get_addr(DAT_00022c64 + 0x22a48);
  if (*piVar1 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00022c68),(char *)(DAT_00022c70 + 0x22a80),
            DAT_00022c6c + 0x22a78,0x329);
    __assert((char *)(DAT_00022c7c + 0x22aa0),(char *)(DAT_00022c78 + 0x22a98),0x32a);
  }
  piVar1 = (int *)__tls_get_addr(DAT_00022c80 + 0x22aac);
  local_18 = *piVar1;
  local_14 = rve_check_csc_param_user(param_2,param_3,param_4);
  if (-1 < local_14) {
    memset(auStack_5a0,0,0x588);
    memcpy(auStack_498,param_2,0x50);
    memcpy(auStack_448,(void *)((int)param_2 + 0x50),0x50);
    memcpy(auStack_3f8,(void *)((int)param_2 + 0xa0),0x50);
    memcpy(auStack_178,param_3,0x50);
    memcpy(auStack_128,(void *)((int)param_3 + 0x50),0x50);
    memcpy(auStack_d8,(void *)((int)param_3 + 0xa0),0x50);
    local_4a8 = 0xb;
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00022c84 + 0x22bb0);
    rve_hal_translate_params_to_regs(*puVar2,auStack_5a0,param_4);
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00022c88 + 0x22bdc);
    local_4ac = *puVar2;
    local_4b4 = *(undefined4 *)(local_18 + 8);
    local_4a0 = param_1;
    local_14 = rve_hal_ioctl_cmd(auStack_5a0);
    if (local_14 != 0) {
      fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00022c68),(char *)(DAT_00022c90 + 0x22c44),
              DAT_00022c8c + 0x22c3c,0x344);
    }
    *(undefined4 *)(local_18 + 0x77c) = local_4b0;
  }
  return local_14;
}



/* ===== rve_hal_magandang @ 00022c94 size=548 ===== */

int rve_hal_magandang(undefined4 param_1,void *param_2,void *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_5a0 [236];
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined1 local_4a8;
  undefined4 local_4a0;
  undefined1 auStack_498 [80];
  undefined1 auStack_448 [720];
  undefined1 auStack_178 [80];
  undefined1 auStack_128 [272];
  int local_18;
  int local_14;
  
  iVar3 = DAT_00022eb8 + 0x22cc0;
  local_14 = 0;
  piVar1 = (int *)__tls_get_addr(DAT_00022ebc + 0x22cd0);
  if (*piVar1 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00022ec0),(char *)(DAT_00022ec8 + 0x22d08),
            DAT_00022ec4 + 0x22d00,0x351);
    __assert((char *)(DAT_00022ed4 + 0x22d28),(char *)(DAT_00022ed0 + 0x22d20),0x352);
  }
  piVar1 = (int *)__tls_get_addr(DAT_00022ed8 + 0x22d34);
  local_18 = *piVar1;
  local_14 = rve_check_magandang_param_user(param_2,param_3,param_4);
  if (-1 < local_14) {
    memset(auStack_5a0,0,0x588);
    memcpy(auStack_498,param_2,0x50);
    memcpy(auStack_448,(void *)((int)param_2 + 0x50),0x50);
    memcpy(auStack_178,param_3,0x50);
    memcpy(auStack_128,(void *)((int)param_3 + 0x50),0x50);
    local_4a8 = 0xe;
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00022edc + 0x22e08);
    rve_hal_translate_params_to_regs(*puVar2,auStack_5a0,param_4);
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00022ee0 + 0x22e34);
    local_4ac = *puVar2;
    local_4b4 = *(undefined4 *)(local_18 + 8);
    local_4a0 = param_1;
    local_14 = rve_hal_ioctl_cmd(auStack_5a0);
    if (local_14 != 0) {
      fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00022ec0),(char *)(DAT_00022ee8 + 0x22e9c),
              DAT_00022ee4 + 0x22e94,0x36a);
    }
    *(undefined4 *)(local_18 + 0x77c) = local_4b0;
  }
  return local_14;
}



/* ===== rve_hal_morph @ 00022eec size=492 ===== */

int rve_hal_morph(undefined4 param_1,void *param_2,void *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_5a0 [236];
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined1 local_4a8;
  undefined4 local_4a0;
  undefined1 auStack_498 [800];
  undefined1 auStack_178 [352];
  int local_18;
  int local_14;
  
  iVar3 = DAT_000230d8 + 0x22f18;
  local_14 = 0;
  piVar1 = (int *)__tls_get_addr(DAT_000230dc + 0x22f28);
  if (*piVar1 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_000230e0),(char *)(DAT_000230e8 + 0x22f60),
            DAT_000230e4 + 0x22f58,0x377);
    __assert((char *)(DAT_000230f4 + 0x22f80),(char *)(DAT_000230f0 + 0x22f78),0x378);
  }
  piVar1 = (int *)__tls_get_addr(DAT_000230f8 + 0x22f8c);
  local_18 = *piVar1;
  local_14 = rve_check_morph_param_user(param_2,param_3,param_4);
  if (-1 < local_14) {
    memset(auStack_5a0,0,0x588);
    memcpy(auStack_498,param_2,0x50);
    memcpy(auStack_178,param_3,0x50);
    local_4a8 = 0x10;
    puVar2 = (undefined4 *)__tls_get_addr(DAT_000230fc + 0x23028);
    rve_hal_translate_params_to_regs(*puVar2,auStack_5a0,param_4);
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00023100 + 0x23054);
    local_4ac = *puVar2;
    local_4b4 = *(undefined4 *)(local_18 + 8);
    local_4a0 = param_1;
    local_14 = rve_hal_ioctl_cmd(auStack_5a0);
    if (local_14 != 0) {
      fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_000230e0),(char *)(DAT_00023108 + 0x230bc),
              DAT_00023104 + 0x230b4,0x38d);
    }
    *(undefined4 *)(local_18 + 0x77c) = local_4b0;
  }
  return local_14;
}



/* ===== rve_hal_logicop @ 0002310c size=524 ===== */

int rve_hal_logicop(undefined4 param_1,void *param_2,void *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_5a0 [236];
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined1 local_4a8;
  undefined4 local_4a0;
  undefined1 auStack_498 [80];
  undefined1 auStack_448 [720];
  undefined1 auStack_178 [352];
  int local_18;
  int local_14;
  
  iVar3 = DAT_00023318 + 0x23138;
  local_14 = 0;
  piVar1 = (int *)__tls_get_addr(DAT_0002331c + 0x23148);
  if (*piVar1 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00023320),(char *)(DAT_00023328 + 0x23180),
            DAT_00023324 + 0x23178,0x39a);
    __assert((char *)(DAT_00023334 + 0x231a0),(char *)(DAT_00023330 + 0x23198),0x39b);
  }
  piVar1 = (int *)__tls_get_addr(DAT_00023338 + 0x231ac);
  local_18 = *piVar1;
  local_14 = rve_check_logicop_param_user(param_2,param_3,param_4);
  if (-1 < local_14) {
    memset(auStack_5a0,0,0x588);
    memcpy(auStack_498,param_2,0x50);
    memcpy(auStack_448,(void *)((int)param_2 + 0x50),0x50);
    memcpy(auStack_178,param_3,0x50);
    local_4a8 = 0xd;
    puVar2 = (undefined4 *)__tls_get_addr(DAT_0002333c + 0x23268);
    rve_hal_translate_params_to_regs(*puVar2,auStack_5a0,param_4);
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00023340 + 0x23294);
    local_4ac = *puVar2;
    local_4b4 = *(undefined4 *)(local_18 + 8);
    local_4a0 = param_1;
    local_14 = rve_hal_ioctl_cmd(auStack_5a0);
    if (local_14 != 0) {
      fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00023320),(char *)(DAT_00023348 + 0x232fc),
              DAT_00023344 + 0x232f4,0x3b1);
    }
    *(undefined4 *)(local_18 + 0x77c) = local_4b0;
  }
  return local_14;
}



/* ===== rve_hal_integ @ 0002334c size=480 ===== */

int rve_hal_integ(undefined4 param_1,void *param_2,void *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_5a0 [236];
  undefined4 local_4b4;
  undefined4 local_4ac;
  undefined1 local_4a8;
  undefined4 local_4a0;
  undefined1 auStack_498 [800];
  undefined1 auStack_178 [352];
  int local_18;
  int local_14;
  
  iVar3 = DAT_0002352c + 0x23378;
  local_14 = 0;
  piVar1 = (int *)__tls_get_addr(DAT_00023530 + 0x23388);
  if (*piVar1 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00023534),(char *)(DAT_0002353c + 0x233c0),
            DAT_00023538 + 0x233b8,0x3be);
    __assert((char *)(DAT_00023548 + 0x233e0),(char *)(DAT_00023544 + 0x233d8),0x3bf);
  }
  piVar1 = (int *)__tls_get_addr(DAT_0002354c + 0x233ec);
  local_18 = *piVar1;
  local_14 = rve_check_integ_param_user(param_2,param_3,param_4);
  if (-1 < local_14) {
    memset(auStack_5a0,0,0x588);
    memcpy(auStack_498,param_2,0x50);
    memcpy(auStack_178,param_3,0x50);
    local_4a8 = 6;
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00023550 + 0x23488);
    rve_hal_translate_params_to_regs(*puVar2,auStack_5a0,param_4);
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00023554 + 0x234b4);
    local_4ac = *puVar2;
    local_4b4 = *(undefined4 *)(local_18 + 8);
    local_4a0 = param_1;
    local_14 = rve_hal_ioctl_cmd(auStack_5a0);
    if (local_14 != 0) {
      fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00023534),(char *)(DAT_0002355c + 0x2351c),
              DAT_00023558 + 0x23514,0x3d5);
    }
  }
  return local_14;
}



/* ===== rve_hal_ncc @ 00023560 size=488 ===== */

int rve_hal_ncc(undefined4 param_1,void *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_5a0 [236];
  undefined4 local_4b4;
  undefined4 local_4ac;
  undefined1 local_4a8;
  undefined4 local_4a0;
  undefined1 auStack_498 [80];
  undefined1 auStack_448 [1072];
  int local_18;
  int local_14;
  
  iVar3 = DAT_00023748 + 0x2358c;
  local_14 = 0;
  piVar1 = (int *)__tls_get_addr(DAT_0002374c + 0x2359c);
  if (*piVar1 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00023750),(char *)(DAT_00023758 + 0x235d4),
            DAT_00023754 + 0x235cc,0x3df,param_4,param_3);
    __assert((char *)(DAT_00023764 + 0x235f4),(char *)(DAT_00023760 + 0x235ec),0x3e0);
  }
  piVar1 = (int *)__tls_get_addr(DAT_00023768 + 0x23600);
  local_18 = *piVar1;
  local_14 = rve_check_ncc_param_user(param_2,0,param_4);
  if (-1 < local_14) {
    memset(auStack_5a0,0,0x588);
    memcpy(auStack_498,param_2,0x50);
    memcpy(auStack_448,(void *)((int)param_2 + 0x50),0x50);
    local_4a8 = 0x11;
    puVar2 = (undefined4 *)__tls_get_addr(DAT_0002376c + 0x236a4);
    rve_hal_translate_params_to_regs(*puVar2,auStack_5a0,param_4);
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00023770 + 0x236d0);
    local_4ac = *puVar2;
    local_4b4 = *(undefined4 *)(local_18 + 8);
    local_4a0 = param_1;
    local_14 = rve_hal_ioctl_cmd(auStack_5a0);
    if (local_14 != 0) {
      fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00023750),(char *)(DAT_00023778 + 0x23738),
              DAT_00023774 + 0x23730,0x3f6);
    }
  }
  return local_14;
}



/* ===== rve_hal_thresh @ 0002377c size=480 ===== */

int rve_hal_thresh(undefined4 param_1,void *param_2,void *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_5a0 [236];
  undefined4 local_4b4;
  undefined4 local_4ac;
  undefined1 local_4a8;
  undefined4 local_4a0;
  undefined1 auStack_498 [800];
  undefined1 auStack_178 [352];
  int local_18;
  int local_14;
  
  iVar3 = DAT_0002395c + 0x237a8;
  local_14 = 0;
  piVar1 = (int *)__tls_get_addr(DAT_00023960 + 0x237b8);
  if (*piVar1 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00023964),(char *)(DAT_0002396c + 0x237f0),
            DAT_00023968 + 0x237e8,0x411);
    __assert((char *)(DAT_00023978 + 0x23810),(char *)(DAT_00023974 + 0x23808),0x412);
  }
  piVar1 = (int *)__tls_get_addr(DAT_0002397c + 0x2381c);
  local_18 = *piVar1;
  local_14 = rve_check_threshold_param_user(param_2,param_3,param_4);
  if (-1 < local_14) {
    memset(auStack_5a0,0,0x588);
    memcpy(auStack_498,param_2,0x50);
    memcpy(auStack_178,param_3,0x50);
    local_4a8 = 0x14;
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00023980 + 0x238b8);
    rve_hal_translate_params_to_regs(*puVar2,auStack_5a0,param_4);
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00023984 + 0x238e4);
    local_4ac = *puVar2;
    local_4b4 = *(undefined4 *)(local_18 + 8);
    local_4a0 = param_1;
    local_14 = rve_hal_ioctl_cmd(auStack_5a0);
    if (local_14 != 0) {
      fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00023964),(char *)(DAT_0002398c + 0x2394c),
              DAT_00023988 + 0x23944,0x428);
    }
  }
  return local_14;
}



/* ===== rve_hal_ordfilt @ 00023990 size=480 ===== */

int rve_hal_ordfilt(undefined4 param_1,void *param_2,void *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_5a0 [236];
  undefined4 local_4b4;
  undefined4 local_4ac;
  undefined1 local_4a8;
  undefined4 local_4a0;
  undefined1 auStack_498 [800];
  undefined1 auStack_178 [352];
  int local_18;
  int local_14;
  
  iVar3 = DAT_00023b70 + 0x239bc;
  local_14 = 0;
  piVar1 = (int *)__tls_get_addr(DAT_00023b74 + 0x239cc);
  if (*piVar1 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00023b78),(char *)(DAT_00023b80 + 0x23a04),
            DAT_00023b7c + 0x239fc,0x433);
    __assert((char *)(DAT_00023b8c + 0x23a24),(char *)(DAT_00023b88 + 0x23a1c),0x434);
  }
  piVar1 = (int *)__tls_get_addr(DAT_00023b90 + 0x23a30);
  local_18 = *piVar1;
  local_14 = rve_check_denoise_param_user(param_2,param_3,param_4);
  if (-1 < local_14) {
    memset(auStack_5a0,0,0x588);
    memcpy(auStack_498,param_2,0x50);
    memcpy(auStack_178,param_3,0x50);
    local_4a8 = 0x15;
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00023b94 + 0x23acc);
    rve_hal_translate_params_to_regs(*puVar2,auStack_5a0,param_4);
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00023b98 + 0x23af8);
    local_4ac = *puVar2;
    local_4b4 = *(undefined4 *)(local_18 + 8);
    local_4a0 = param_1;
    local_14 = rve_hal_ioctl_cmd(auStack_5a0);
    if (local_14 != 0) {
      fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00023b78),(char *)(DAT_00023ba0 + 0x23b60),
              DAT_00023b9c + 0x23b58,0x44a);
    }
  }
  return local_14;
}



/* ===== rve_hal_cast @ 00023ba4 size=480 ===== */

int rve_hal_cast(undefined4 param_1,void *param_2,void *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_5a0 [236];
  undefined4 local_4b4;
  undefined4 local_4ac;
  undefined1 local_4a8;
  undefined4 local_4a0;
  undefined1 auStack_498 [800];
  undefined1 auStack_178 [352];
  int local_18;
  int local_14;
  
  iVar3 = DAT_00023d84 + 0x23bd0;
  local_14 = 0;
  piVar1 = (int *)__tls_get_addr(DAT_00023d88 + 0x23be0);
  if (*piVar1 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00023d8c),(char *)(DAT_00023d94 + 0x23c18),
            DAT_00023d90 + 0x23c10,0x455);
    __assert((char *)(DAT_00023da0 + 0x23c38),(char *)(DAT_00023d9c + 0x23c30),0x456);
  }
  piVar1 = (int *)__tls_get_addr(DAT_00023da4 + 0x23c44);
  local_18 = *piVar1;
  local_14 = rve_check_cast_param_user(param_2,param_3,param_4);
  if (-1 < local_14) {
    memset(auStack_5a0,0,0x588);
    memcpy(auStack_498,param_2,0x50);
    memcpy(auStack_178,param_3,0x50);
    local_4a8 = 0x12;
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00023da8 + 0x23ce0);
    rve_hal_translate_params_to_regs(*puVar2,auStack_5a0,param_4);
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00023dac + 0x23d0c);
    local_4ac = *puVar2;
    local_4b4 = *(undefined4 *)(local_18 + 8);
    local_4a0 = param_1;
    local_14 = rve_hal_ioctl_cmd(auStack_5a0);
    if (local_14 != 0) {
      fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00023d8c),(char *)(DAT_00023db4 + 0x23d74),
              DAT_00023db0 + 0x23d6c,0x46c);
    }
  }
  return local_14;
}



/* ===== rve_hal_lbp @ 00023db8 size=480 ===== */

int rve_hal_lbp(undefined4 param_1,void *param_2,void *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_5a0 [236];
  undefined4 local_4b4;
  undefined4 local_4ac;
  undefined1 local_4a8;
  undefined4 local_4a0;
  undefined1 auStack_498 [800];
  undefined1 auStack_178 [352];
  int local_18;
  int local_14;
  
  iVar3 = DAT_00023f98 + 0x23de4;
  local_14 = 0;
  piVar1 = (int *)__tls_get_addr(DAT_00023f9c + 0x23df4);
  if (*piVar1 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00023fa0),(char *)(DAT_00023fa8 + 0x23e2c),
            DAT_00023fa4 + 0x23e24,0x477);
    __assert((char *)(DAT_00023fb4 + 0x23e4c),(char *)(DAT_00023fb0 + 0x23e44),0x478);
  }
  piVar1 = (int *)__tls_get_addr(DAT_00023fb8 + 0x23e58);
  local_18 = *piVar1;
  local_14 = rve_check_lbp_param_user(param_2,param_3,param_4);
  if (-1 < local_14) {
    memset(auStack_5a0,0,0x588);
    memcpy(auStack_498,param_2,0x50);
    memcpy(auStack_178,param_3,0x50);
    local_4a8 = 7;
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00023fbc + 0x23ef4);
    rve_hal_translate_params_to_regs(*puVar2,auStack_5a0,param_4);
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00023fc0 + 0x23f20);
    local_4ac = *puVar2;
    local_4b4 = *(undefined4 *)(local_18 + 8);
    local_4a0 = param_1;
    local_14 = rve_hal_ioctl_cmd(auStack_5a0);
    if (local_14 != 0) {
      fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00023fa0),(char *)(DAT_00023fc8 + 0x23f88),
              DAT_00023fc4 + 0x23f80,0x48e);
    }
  }
  return local_14;
}



/* ===== rve_hal_eqhist @ 00023fcc size=524 ===== */

int rve_hal_eqhist(undefined4 param_1,void *param_2,void *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_5a0 [236];
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined1 local_4a8;
  undefined4 local_4a0;
  undefined1 auStack_498 [80];
  undefined1 auStack_448 [720];
  undefined1 auStack_178 [352];
  int local_18;
  int local_14;
  
  iVar3 = DAT_000241d8 + 0x23ff8;
  local_14 = 0;
  piVar1 = (int *)__tls_get_addr(DAT_000241dc + 0x24008);
  if (*piVar1 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_000241e0),(char *)(DAT_000241e8 + 0x24040),
            DAT_000241e4 + 0x24038,0x499);
    __assert((char *)(DAT_000241f4 + 0x24060),(char *)(DAT_000241f0 + 0x24058),0x49a);
  }
  piVar1 = (int *)__tls_get_addr(DAT_000241f8 + 0x2406c);
  local_18 = *piVar1;
  local_14 = rve_check_eqhist_param_user(param_2,param_3,param_4);
  if (-1 < local_14) {
    memset(auStack_5a0,0,0x588);
    memcpy(auStack_498,param_2,0x50);
    memcpy(auStack_448,(void *)((int)param_2 + 0x50),0x50);
    memcpy(auStack_178,param_3,0x50);
    local_4a8 = 0xc;
    puVar2 = (undefined4 *)__tls_get_addr(DAT_000241fc + 0x24128);
    rve_hal_translate_params_to_regs(*puVar2,auStack_5a0,param_4);
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00024200 + 0x24154);
    local_4ac = *puVar2;
    local_4b4 = *(undefined4 *)(local_18 + 8);
    local_4a0 = param_1;
    local_14 = rve_hal_ioctl_cmd(auStack_5a0);
    if (local_14 != 0) {
      fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_000241e0),(char *)(DAT_00024208 + 0x241bc),
              DAT_00024204 + 0x241b4,0x4b0);
    }
    *(undefined4 *)(local_18 + 0x77c) = local_4b0;
  }
  return local_14;
}



/* ===== rve_hal_ccl @ 0002420c size=516 ===== */

int rve_hal_ccl(undefined4 param_1,void *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_5a0 [236];
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined1 local_4a8;
  undefined4 local_4a0;
  undefined1 auStack_498 [880];
  undefined1 auStack_128 [80];
  undefined1 auStack_d8 [192];
  int local_18;
  int local_14;
  
  iVar3 = DAT_00024410 + 0x24238;
  local_14 = 0;
  piVar1 = (int *)__tls_get_addr(DAT_00024414 + 0x24248);
  if (*piVar1 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00024418),(char *)(DAT_00024420 + 0x24280),
            DAT_0002441c + 0x24278,0x4bd);
    __assert((char *)(DAT_0002442c + 0x242a0),(char *)(DAT_00024428 + 0x24298),0x4be);
  }
  piVar1 = (int *)__tls_get_addr(DAT_00024430 + 0x242ac);
  local_18 = *piVar1;
  local_14 = rve_check_ccl_param_user(param_2,param_3,param_4);
  if (-1 < local_14) {
    memset(auStack_5a0,0,0x588);
    memcpy(auStack_498,param_2,0x50);
    memcpy(auStack_128,(void *)(param_3 + 0x50),0x50);
    memcpy(auStack_d8,(void *)(param_3 + 0xa0),0x50);
    local_4a8 = 3;
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00024434 + 0x24360);
    rve_hal_translate_params_to_regs(*puVar2,auStack_5a0,param_4);
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00024438 + 0x2438c);
    local_4ac = *puVar2;
    local_4b4 = *(undefined4 *)(local_18 + 8);
    local_4a0 = param_1;
    local_14 = rve_hal_ioctl_cmd(auStack_5a0);
    if (local_14 != 0) {
      fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00024418),(char *)(DAT_00024440 + 0x243f4),
              DAT_0002443c + 0x243ec,0x4d5);
    }
    *(undefined4 *)(local_18 + 0x77c) = local_4b0;
  }
  return local_14;
}



/* ===== rve_hal_stcorner @ 00024444 size=596 ===== */

int rve_hal_stcorner(undefined4 param_1,void *param_2,void *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_5a0 [236];
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined1 local_4a8;
  undefined4 local_4a0;
  undefined1 auStack_498 [80];
  undefined1 auStack_448 [720];
  undefined1 auStack_178 [80];
  undefined1 auStack_128 [80];
  undefined1 auStack_d8 [80];
  undefined1 auStack_88 [112];
  int local_18;
  int local_14;
  
  iVar3 = DAT_00024698 + 0x24470;
  local_14 = 0;
  piVar1 = (int *)__tls_get_addr(DAT_0002469c + 0x24480);
  if (*piVar1 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_000246a0),(char *)(DAT_000246a8 + 0x244b8),
            DAT_000246a4 + 0x244b0,0x4e2);
    __assert((char *)(DAT_000246b4 + 0x244d8),(char *)(DAT_000246b0 + 0x244d0),0x4e3);
  }
  piVar1 = (int *)__tls_get_addr(DAT_000246b8 + 0x244e4);
  local_18 = *piVar1;
  local_14 = rve_check_stcorner_param_user(param_2,param_3,param_4);
  if (-1 < local_14) {
    memset(auStack_5a0,0,0x588);
    memcpy(auStack_498,param_2,0x50);
    memcpy(auStack_448,(void *)((int)param_2 + 0x50),0x50);
    memcpy(auStack_178,param_3,0x50);
    memcpy(auStack_128,(void *)((int)param_3 + 0x50),0x50);
    memcpy(auStack_d8,(void *)((int)param_3 + 0xa0),0x50);
    memcpy(auStack_88,(void *)((int)param_3 + 0xf0),0x50);
    local_4a8 = 4;
    puVar2 = (undefined4 *)__tls_get_addr(DAT_000246bc + 0x245e8);
    rve_hal_translate_params_to_regs(*puVar2,auStack_5a0,param_4);
    puVar2 = (undefined4 *)__tls_get_addr(DAT_000246c0 + 0x24614);
    local_4ac = *puVar2;
    local_4b4 = *(undefined4 *)(local_18 + 8);
    local_4a0 = param_1;
    local_14 = rve_hal_ioctl_cmd(auStack_5a0);
    if (local_14 != 0) {
      fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_000246a0),(char *)(DAT_000246c8 + 0x2467c),
              DAT_000246c4 + 0x24674,0x4fc);
    }
    *(undefined4 *)(local_18 + 0x77c) = local_4b0;
  }
  return local_14;
}



/* ===== rve_hal_sad @ 000246cc size=548 ===== */

int rve_hal_sad(undefined4 param_1,void *param_2,void *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_5a0 [236];
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined1 local_4a8;
  undefined4 local_4a0;
  undefined1 auStack_498 [80];
  undefined1 auStack_448 [720];
  undefined1 auStack_178 [80];
  undefined1 auStack_128 [272];
  int local_18;
  int local_14;
  
  iVar3 = DAT_000248f0 + 0x246f8;
  local_14 = 0;
  piVar1 = (int *)__tls_get_addr(DAT_000248f4 + 0x24708);
  if (*piVar1 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_000248f8),(char *)(DAT_00024900 + 0x24740),
            DAT_000248fc + 0x24738,0x509);
    __assert((char *)(DAT_0002490c + 0x24760),(char *)(DAT_00024908 + 0x24758),0x50a);
  }
  piVar1 = (int *)__tls_get_addr(DAT_00024910 + 0x2476c);
  local_18 = *piVar1;
  local_14 = rve_check_sad_param_user(param_2,param_3,param_4);
  if (-1 < local_14) {
    memset(auStack_5a0,0,0x588);
    memcpy(auStack_498,param_2,0x50);
    memcpy(auStack_448,(void *)((int)param_2 + 0x50),0x50);
    memcpy(auStack_178,param_3,0x50);
    memcpy(auStack_128,(void *)((int)param_3 + 0x50),0x50);
    local_4a8 = 0x13;
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00024914 + 0x24840);
    rve_hal_translate_params_to_regs(*puVar2,auStack_5a0,param_4);
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00024918 + 0x2486c);
    local_4ac = *puVar2;
    local_4b4 = *(undefined4 *)(local_18 + 8);
    local_4a0 = param_1;
    local_14 = rve_hal_ioctl_cmd(auStack_5a0);
    if (local_14 != 0) {
      fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_000248f8),(char *)(DAT_00024920 + 0x248d4),
              DAT_0002491c + 0x248cc,0x521);
    }
    *(undefined4 *)(local_18 + 0x77c) = local_4b0;
  }
  return local_14;
}



/* ===== rve_hal_lk @ 00024924 size=616 ===== */

int rve_hal_lk(undefined4 param_1,int param_2,void *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_5a8 [236];
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined1 local_4b0;
  undefined4 local_4a8;
  undefined1 auStack_4a0 [800];
  undefined1 auStack_180 [80];
  undefined1 auStack_130 [80];
  undefined1 auStack_e0 [196];
  int local_1c;
  int local_18;
  int local_14;
  
  iVar3 = DAT_00024b8c + 0x24950;
  local_18 = 0;
  piVar1 = (int *)__tls_get_addr(DAT_00024b90 + 0x24960);
  if (*piVar1 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00024b94),(char *)(DAT_00024b9c + 0x24998),
            DAT_00024b98 + 0x24990,0x52e);
    __assert((char *)(DAT_00024ba8 + 0x249b8),(char *)(DAT_00024ba4 + 0x249b0),0x52f);
  }
  piVar1 = (int *)__tls_get_addr(DAT_00024bac + 0x249c4);
  local_1c = *piVar1;
  local_18 = rve_check_lk_param_user(param_2,param_3,param_4);
  if (-1 < local_18) {
    memset(auStack_5a8,0,0x588);
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      memcpy(auStack_4a0 + local_14 * 0x50,(void *)(param_2 + local_14 * 0x50),0x50);
    }
    memcpy(auStack_180,param_3,0x50);
    memcpy(auStack_130,(void *)((int)param_3 + 0x50),0x50);
    memcpy(auStack_e0,(void *)((int)param_3 + 0xa0),0x50);
    local_4b0 = 5;
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00024bb0 + 0x24ad4);
    rve_hal_translate_params_to_regs(*puVar2,auStack_5a8,param_4);
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00024bb4 + 0x24b04);
    local_4b4 = *puVar2;
    local_4bc = *(undefined4 *)(local_1c + 8);
    local_4a8 = param_1;
    local_18 = rve_hal_ioctl_cmd(auStack_5a8);
    if (local_18 != 0) {
      fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00024b94),(char *)(DAT_00024bbc + 0x24b70),
              DAT_00024bb8 + 0x24b68,0x549);
    }
    *(undefined4 *)(local_1c + 0x77c) = local_4b8;
  }
  return local_18;
}



/* ===== rve_hal_map @ 00024bc0 size=524 ===== */

int rve_hal_map(undefined4 param_1,void *param_2,void *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_5a0 [236];
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined1 local_4a8;
  undefined4 local_4a0;
  undefined1 auStack_498 [80];
  undefined1 auStack_448 [720];
  undefined1 auStack_178 [352];
  int local_18;
  int local_14;
  
  iVar3 = DAT_00024dcc + 0x24bec;
  local_14 = 0;
  piVar1 = (int *)__tls_get_addr(DAT_00024dd0 + 0x24bfc);
  if (*piVar1 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00024dd4),(char *)(DAT_00024ddc + 0x24c34),
            DAT_00024dd8 + 0x24c2c,0x556);
    __assert((char *)(DAT_00024de8 + 0x24c54),(char *)(DAT_00024de4 + 0x24c4c),0x557);
  }
  piVar1 = (int *)__tls_get_addr(DAT_00024dec + 0x24c60);
  local_18 = *piVar1;
  local_14 = rve_check_map_param_user(param_2,param_3,param_4);
  if (-1 < local_14) {
    memset(auStack_5a0,0,0x588);
    memcpy(auStack_498,param_2,0x50);
    memcpy(auStack_448,(void *)((int)param_2 + 0x50),0x50);
    memcpy(auStack_178,param_3,0x50);
    local_4a8 = 0xf;
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00024df0 + 0x24d1c);
    rve_hal_translate_params_to_regs(*puVar2,auStack_5a0,param_4);
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00024df4 + 0x24d48);
    local_4ac = *puVar2;
    local_4b4 = *(undefined4 *)(local_18 + 8);
    local_4a0 = param_1;
    local_14 = rve_hal_ioctl_cmd(auStack_5a0);
    if (local_14 != 0) {
      fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00024dd4),(char *)(DAT_00024dfc + 0x24db0),
              DAT_00024df8 + 0x24da8,0x56d);
    }
    *(undefined4 *)(local_18 + 0x77c) = local_4b0;
  }
  return local_14;
}



/* ===== COMM_MmzAlloc @ 00024e00 size=96 ===== */

undefined4 COMM_MmzAlloc(int *param_1,int *param_2,size_t param_3)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = malloc(param_3);
  *param_2 = (int)pvVar1;
  iVar2 = *param_2;
  *param_1 = iVar2;
  param_1[1] = iVar2 >> 0x1f;
  return 0;
}



/* ===== COMM_MmzFree @ 00024e60 size=40 ===== */

undefined4 COMM_MmzFree(void *param_1)

{
  free(param_1);
  return 0;
}



/* ===== COMM_MmzAlloc_Cached @ 00024e88 size=88 ===== */

undefined4 COMM_MmzAlloc_Cached(int *param_1,int *param_2,size_t param_3)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = malloc(param_3);
  *param_2 = (int)pvVar1;
  iVar2 = *param_2;
  *param_1 = iVar2;
  param_1[1] = iVar2 >> 0x1f;
  return 0;
}



/* ===== SYS_MmzAlloc @ 00024ee0 size=308 ===== */

undefined4 SYS_MmzAlloc(undefined8 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  piVar1 = (int *)__tls_get_addr(DAT_00025014 + 0x24f0c);
  if ((*piVar1 == 0) && (local_c = rve_check_create_pipeline(0), local_c < 0)) {
    puts((char *)(DAT_00025018 + 0x24f44));
    return 0xffffffff;
  }
  piVar1 = (int *)__tls_get_addr(DAT_0002501c + 0x24f5c);
  local_10 = *piVar1;
  if (*(int *)(local_10 + 0x750) == 0) {
    puts((char *)(DAT_00025020 + 0x24ff8));
    uVar2 = 0xffffffff;
  }
  else {
    local_c = (**(code **)(local_10 + 0x754))(&local_14,param_3,0x11);
    if (local_c == 0) {
      uVar3 = (**(code **)(local_10 + 0x768))(local_14);
      *param_1 = uVar3;
      uVar2 = (**(code **)(local_10 + 0x76c))(local_14);
      *param_2 = uVar2;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== SYS_MmzAlloc_Cached @ 00025024 size=336 ===== */

undefined4 SYS_MmzAlloc_Cached(undefined8 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  piVar1 = (int *)__tls_get_addr(DAT_00025174 + 0x25050);
  if ((*piVar1 == 0) && (local_c = rve_check_create_pipeline(0), local_c < 0)) {
    puts((char *)(DAT_00025178 + 0x25088));
    return 0xffffffff;
  }
  piVar1 = (int *)__tls_get_addr(DAT_0002517c + 0x250a0);
  local_10 = *piVar1;
  if (*(int *)(local_10 + 0x750) == 0) {
    puts((char *)(DAT_00025180 + 0x25158));
    uVar2 = 0xffffffff;
  }
  else {
    local_c = (**(code **)(local_10 + 0x758))(&local_14,param_3,1);
    if (local_c == 0) {
      uVar3 = (**(code **)(local_10 + 0x768))(local_14);
      *param_1 = uVar3;
      uVar2 = (**(code **)(local_10 + 0x76c))(local_14);
      *param_2 = uVar2;
      (**(code **)(local_10 + 0x764))(*param_2,param_3,1);
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== SYS_MmzFlush_Start @ 00025184 size=352 ===== */

int SYS_MmzFlush_Start(undefined4 param_1)

{
  int *piVar1;
  undefined8 local_28;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  piVar1 = (int *)__tls_get_addr(DAT_000252e4 + 0x251a0);
  if ((*piVar1 == 0) && (local_c = rve_check_create_pipeline(0), local_c < 0)) {
    puts((char *)(DAT_000252e8 + 0x251d8));
    return -1;
  }
  piVar1 = (int *)__tls_get_addr(DAT_000252ec + 0x251f0);
  local_10 = *piVar1;
  if (*(int *)(local_10 + 0x750) == 0) {
    puts((char *)(DAT_000252f4 + 0x252c8));
    local_c = -1;
  }
  else {
    local_14 = (**(code **)(local_10 + 0x770))(param_1);
    local_18 = (**(code **)(local_10 + 0x774))(local_14);
    local_1c = (**(code **)(local_10 + 0x778))(local_14);
    local_28 = 3;
    local_c = ioctl(local_18,0x40086200,&local_28);
    if (local_c == 0) {
      local_c = 0;
    }
    else {
      piVar1 = __errno_location();
      printf((char *)(DAT_000252f0 + 0x252b0),*piVar1);
    }
  }
  return local_c;
}



/* ===== SYS_MmzFlush_End @ 000252f8 size=352 ===== */

int SYS_MmzFlush_End(undefined4 param_1)

{
  int *piVar1;
  undefined8 local_28;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  piVar1 = (int *)__tls_get_addr(DAT_00025458 + 0x25314);
  if ((*piVar1 == 0) && (local_c = rve_check_create_pipeline(0), local_c < 0)) {
    puts((char *)(DAT_0002545c + 0x2534c));
    return -1;
  }
  piVar1 = (int *)__tls_get_addr(DAT_00025460 + 0x25364);
  local_10 = *piVar1;
  if (*(int *)(local_10 + 0x750) == 0) {
    puts((char *)(DAT_00025468 + 0x2543c));
    local_c = -1;
  }
  else {
    local_14 = (**(code **)(local_10 + 0x770))(param_1);
    local_18 = (**(code **)(local_10 + 0x774))(local_14);
    local_1c = (**(code **)(local_10 + 0x778))(local_14);
    local_28 = 7;
    local_c = ioctl(local_18,0x40086200,&local_28);
    if (local_c == 0) {
      local_c = 0;
    }
    else {
      piVar1 = __errno_location();
      printf((char *)(DAT_00025464 + 0x25424),*piVar1);
    }
  }
  return local_c;
}



/* ===== SYS_MmzFree @ 0002546c size=220 ===== */

undefined4 SYS_MmzFree(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)__tls_get_addr(DAT_00025548 + 0x25488);
  if ((*piVar1 == 0) && (iVar2 = rve_check_create_pipeline(0), iVar2 < 0)) {
    puts((char *)(DAT_0002554c + 0x254c0));
    return 0xffffffff;
  }
  piVar1 = (int *)__tls_get_addr(DAT_00025550 + 0x254d8);
  iVar2 = *piVar1;
  if (*(int *)(iVar2 + 0x750) == 0) {
    puts((char *)(DAT_00025554 + 0x25534));
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (**(code **)(iVar2 + 0x770))(param_1);
    (**(code **)(iVar2 + 0x75c))(uVar3);
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== SYS_Memcpy @ 00025558 size=88 ===== */

undefined4 SYS_Memcpy(void *param_1,void *param_2,size_t param_3)

{
  SYS_MmzFlush_Start(param_2);
  SYS_MmzFlush_Start(param_1);
  memcpy(param_1,param_2,param_3);
  SYS_MmzFlush_End(param_1);
  SYS_MmzFlush_End(param_2);
  return 0;
}



/* ===== FUN_000255b0 @ 000255b0 size=56 ===== */

void FUN_000255b0(int param_1)

{
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  return;
}



/* ===== FUN_000255e8 @ 000255e8 size=60 ===== */

void FUN_000255e8(int *param_1,int param_2)

{
  *(int **)(param_2 + 4) = param_1;
  *param_1 = param_2;
  return;
}



/* ===== FUN_00025624 @ 00025624 size=88 ===== */

void FUN_00025624(undefined4 *param_1)

{
  FUN_000255e8(param_1[1],*param_1);
  *param_1 = 0x100100;
  param_1[1] = 0x200200;
  return;
}



/* ===== rve_check_create_pipeline @ 0002567c size=680 ===== */

int rve_check_create_pipeline(undefined1 param_1)

{
  int *piVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_1c;
  
  iVar6 = DAT_00025924 + 0x2569c;
  local_1c = 0;
  piVar1 = (int *)__tls_get_addr(DAT_00025928 + 0x256ac);
  if ((*piVar1 == 0) && (local_1c = rve_hal_check_device(), -1 < local_1c)) {
    pvVar2 = malloc(0x40);
    puVar3 = (undefined4 *)__tls_get_addr(DAT_0002592c + 0x256f8);
    *puVar3 = pvVar2;
    puVar3 = (undefined4 *)__tls_get_addr(DAT_00025930 + 0x25710);
    memset((void *)*puVar3,0,0x40);
    puVar3 = (undefined4 *)__tls_get_addr(DAT_00025934 + 0x25738);
    if (*(char *)*puVar3 == '\0') {
      piVar1 = (int *)__tls_get_addr(DAT_00025938 + 0x2575c);
      FUN_000255b0(*piVar1 + 8);
      puVar3 = (undefined4 *)__tls_get_addr(DAT_0002593c + 0x25780);
      *(undefined1 *)*puVar3 = 1;
    }
    piVar1 = (int *)__tls_get_addr(DAT_00025940 + 0x257a0);
    *(undefined1 *)(*piVar1 + 1) = param_1;
    piVar1 = (int *)__tls_get_addr(DAT_00025944 + 0x257c0);
    *(undefined4 *)(*piVar1 + 0x30) = 0x4c00;
    piVar1 = (int *)__tls_get_addr(DAT_00025948 + 0x257e0);
    iVar4 = *piVar1;
    piVar1 = (int *)__tls_get_addr(DAT_0002594c + 0x257fc);
    iVar5 = *piVar1;
    piVar1 = (int *)__tls_get_addr(DAT_00025950 + 0x25818);
    local_1c = SYS_MmzAlloc(iVar4 + 0x20,iVar5 + 0x28,*(undefined4 *)(*piVar1 + 0x30));
    if (local_1c < 0) {
      fprintf((FILE *)**(undefined4 **)(iVar6 + DAT_00025954),(char *)(DAT_0002595c + 0x2586c),
              DAT_00025958 + 0x25864,0x36);
      local_1c = -1;
    }
    else {
      piVar1 = (int *)__tls_get_addr(DAT_00025960 + 0x25880);
      SYS_MmzFlush_Start(*(undefined4 *)(*piVar1 + 0x28));
      piVar1 = (int *)__tls_get_addr(DAT_00025964 + 0x258a8);
      pvVar2 = *(void **)(*piVar1 + 0x28);
      piVar1 = (int *)__tls_get_addr(DAT_00025968 + 0x258cc);
      memset(pvVar2,0,*(size_t *)(*piVar1 + 0x30));
      piVar1 = (int *)__tls_get_addr(DAT_0002596c + 0x258f8);
      SYS_MmzFlush_End(*(undefined4 *)(*piVar1 + 0x28));
    }
  }
  return local_1c;
}



/* ===== rve_pipeline_query @ 00025970 size=352 ===== */

int rve_pipeline_query(int param_1,undefined1 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 local_14;
  undefined4 local_c;
  
  local_c = 0;
  piVar1 = (int *)__tls_get_addr(DAT_00025ad0 + 0x2599c);
  if ((*piVar1 != 0) &&
     (piVar1 = (int *)__tls_get_addr(DAT_00025ad4 + 0x259bc), *(short *)(*piVar1 + 0x10) != 0)) {
    piVar1 = (int *)__tls_get_addr(DAT_00025ad8 + 0x259e0);
    *(undefined4 *)(*piVar1 + 0x38) = 2;
    local_14 = param_1;
    if (param_1 == 0x10000000) {
      puVar2 = (undefined4 *)__tls_get_addr(DAT_00025adc + 0x25a0c);
      local_14 = rve_entity_pipline_start(*puVar2,1);
    }
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00025ae0 + 0x25a34);
    rve_entity_pipline_run(*puVar2);
    local_c = rve_hal_query(local_14,param_2);
    if (local_c < 0) {
      if (local_c == -0x3e) {
        local_c = -10;
      }
      else if (local_c == -0x16) {
        local_c = -3;
      }
      else {
        local_c = -0xb;
      }
    }
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00025ae4 + 0x25aac);
    rve_entity_pipline_stop(*puVar2);
  }
  return local_c;
}



/* ===== rve_entity_pipline_start @ 00025ae8 size=652 ===== */

undefined4 rve_entity_pipline_start(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int local_14;
  
  iVar4 = DAT_00025d74 + 0x25b0c;
  if (param_2 == '\x01') {
    if (*(ushort *)(param_1 + 0x10) < 2) {
      uVar2 = rve_hal_start();
      *(undefined4 *)(param_1 + 0x18) = uVar2;
    }
    else {
      piVar3 = (int *)(param_1 + 0x20);
      if (*(int *)(param_1 + 0x30) == 0) {
        *(uint *)(param_1 + 0x30) = (uint)*(ushort *)(param_1 + 0x10) * 0x130;
        iVar1 = SYS_MmzAlloc(piVar3,param_1 + 0x28,*(undefined4 *)(param_1 + 0x30));
        if (iVar1 < 0) {
          fprintf((FILE *)**(undefined4 **)(iVar4 + DAT_00025d78),(char *)(DAT_00025d80 + 0x25be8),
                  DAT_00025d7c + 0x25be0,0x7f);
          return 0xffffffff;
        }
      }
      SYS_MmzFlush_Start(*(undefined4 *)(param_1 + 0x28));
      memset(*(void **)(param_1 + 0x28),0,*(size_t *)(param_1 + 0x30));
      iVar4 = *(int *)(param_1 + 0x28);
      for (local_14 = 0; local_14 < (int)(uint)*(ushort *)(param_1 + 0x10); local_14 = local_14 + 1)
      {
        *(int *)(iVar4 + local_14 * 0x130) = *piVar3 + (local_14 + 1) * 0x130;
        *(int *)(iVar4 + local_14 * 0x130 + 8) = *piVar3 + local_14 * 0x130 + 0x10;
        *(int *)(iVar4 + local_14 * 0x130 + 0xc) = *piVar3 + local_14 * 0x130 + 0x90;
      }
      SYS_MmzFlush_End(*(undefined4 *)(param_1 + 0x28));
      uVar2 = rve_hal_llp_start(*piVar3,*(undefined4 *)(param_1 + 0x24),
                                *(undefined2 *)(param_1 + 0x10));
      *(undefined4 *)(param_1 + 0x18) = uVar2;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x18);
  }
  else {
    uVar2 = 0x10000000;
  }
  return uVar2;
}



/* ===== rve_entity_pipline_run @ 00025d84 size=892 ===== */

undefined4 rve_entity_pipline_run(int param_1)

{
  int iVar1;
  undefined1 auStack_490 [320];
  undefined1 auStack_350 [800];
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 local_10;
  uint local_c;
  
  local_18 = 0;
  local_c = 0;
  local_10 = 0xffffffff;
  local_1c = 0;
  local_20 = 0;
  if (*(ushort *)(param_1 + 0x10) < 2) {
    for (local_14 = *(undefined4 **)(param_1 + 8); local_14 != (undefined4 *)(param_1 + 8);
        local_14 = (undefined4 *)*local_14) {
      local_30 = local_14;
      local_28 = local_14 + -8;
      memset(auStack_350,0,800);
      memset(auStack_490,0,0x140);
      rve_entity_get_buffer_info(local_28,auStack_350,1);
      rve_entity_get_buffer_info(local_28,auStack_490,2);
      rve_hal_run(*(undefined1 *)(local_28 + 1),local_28,auStack_350,auStack_490,local_28[10]);
      rve_hal_end(local_28,*(undefined4 *)(param_1 + 0x38));
      (**(code **)(param_1 + 0x14))(local_28);
      local_10 = local_28[2];
    }
  }
  else {
    local_c = 0;
    local_1c = param_1 + 0x20;
    local_20 = *(int *)(param_1 + 0x28);
    SYS_MmzFlush_Start(*(undefined4 *)(param_1 + 0x28));
    for (local_14 = *(undefined4 **)(param_1 + 8); local_14 != (undefined4 *)(param_1 + 8);
        local_14 = (undefined4 *)*local_14) {
      local_24 = local_14;
      local_28 = local_14 + -8;
      memset(auStack_350,0,800);
      memset(auStack_490,0,0x140);
      rve_entity_get_buffer_info(local_28,auStack_350,1);
      rve_entity_get_buffer_info(local_28,auStack_490,2);
      rve_hal_llp_run(local_c & 0xff,local_20 + local_c * 0x130,local_28,auStack_350,auStack_490);
      local_c = local_c + 1;
    }
    SYS_MmzFlush_End(*(undefined4 *)(local_1c + 8));
    rve_hal_llp_end(*(undefined4 *)(param_1 + 0x38));
    SYS_MmzFlush_Start(*(undefined4 *)(local_1c + 8));
    local_c = 0;
    for (local_14 = *(undefined4 **)(param_1 + 8); local_14 != (undefined4 *)(param_1 + 8);
        local_14 = (undefined4 *)*local_14) {
      local_2c = local_14;
      local_28 = local_14 + -8;
      iVar1 = local_20 + local_c * 0x130 + 0x90;
      local_14[4] = iVar1;
      local_14[5] = iVar1 >> 0x1f;
      rve_hal_post_proc(local_28);
      (**(code **)(param_1 + 0x14))(local_28);
      local_10 = local_28[2];
      local_c = local_c + 1;
    }
    SYS_MmzFlush_End(*(undefined4 *)(local_1c + 8));
  }
  return local_10;
}



/* ===== rve_entity_pipline_stop @ 00026100 size=608 ===== */

undefined4 rve_entity_pipline_stop(int param_1)

{
  int iVar1;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  
  local_10 = *(undefined4 **)(param_1 + 8);
  local_14 = (undefined4 *)*local_10;
  while (local_10 != (undefined4 *)(param_1 + 8)) {
    if (local_10 + -8 != (undefined4 *)0x0) {
      if (local_10[2] != 0) {
        free((void *)local_10[2]);
        local_10[2] = 0;
      }
      if (local_10[-1] != 0) {
        free((void *)local_10[-1]);
        local_10[-1] = 0;
      }
      if (local_10[-2] != 0) {
        for (local_c = 0; local_c < (int)(uint)*(byte *)(local_10 + -3); local_c = local_c + 1) {
          if ((((*(uint *)(local_10[-2] + local_c * 0x60 + 8) & 0xffff0000) == 0x20000) &&
              ((*(uint *)(local_10[-2] + local_c * 0x60 + 8) & 0xffff) == 1)) &&
             (iVar1 = local_10[-2] + local_c * 0x60,
             *(int *)(iVar1 + 0x28) != 0 || *(int *)(iVar1 + 0x2c) != 0)) {
            SYS_MmzFree(*(undefined4 *)(local_10[-2] + local_c * 0x60 + 0x28));
            *(undefined8 *)(local_10[-2] + local_c * 0x60 + 0x28) = 0;
          }
        }
        free((void *)local_10[-2]);
        local_10[-2] = 0;
      }
      FUN_00025624(local_10);
      *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + -1;
      free(local_10 + -8);
    }
    local_10 = local_14;
    local_14 = (undefined4 *)*local_14;
  }
  if (*(char *)(param_1 + 1) == '\x01') {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    rve_destroy_pipeline();
  }
  return 0;
}



/* ===== rve_destroy_pipeline @ 00026360 size=224 ===== */

undefined4 rve_destroy_pipeline(void)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)__tls_get_addr(DAT_00026440 + 0x26374);
  if (*piVar1 != 0) {
    piVar1 = (int *)__tls_get_addr(DAT_00026444 + 0x26394);
    if (*(int *)(*piVar1 + 0x28) != 0 || *(int *)(*piVar1 + 0x2c) != 0) {
      piVar1 = (int *)__tls_get_addr(DAT_00026448 + 0x263b8);
      SYS_MmzFree(*(undefined4 *)(*piVar1 + 0x28));
      piVar1 = (int *)__tls_get_addr(DAT_0002644c + 0x263e0);
      *(undefined8 *)(*piVar1 + 0x28) = 0;
    }
    rve_hal_deinit();
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00026450 + 0x26404);
    free((void *)*puVar2);
    puVar2 = (undefined4 *)__tls_get_addr(DAT_00026454 + 0x26424);
    *puVar2 = 0;
  }
  return 0;
}



/* ===== gojs_get_key @ 00026458 size=140 ===== */

undefined4 gojs_get_key(int param_1,int param_2,int param_3)

{
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (param_2 <= local_c) {
      return 0xffffffff;
    }
    if (param_3 == *(int *)(param_1 + local_c * 0x10 + 0xc)) break;
    local_c = local_c + 1;
  }
  return *(undefined4 *)(param_1 + local_c * 0x10);
}



/* ===== rve_pipeline_auto_links @ 000264e4 size=948 ===== */

undefined4 rve_pipeline_auto_links(void)

{
  ushort uVar1;
  bool bVar2;
  int *piVar3;
  void *__ptr;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *local_28;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  uint local_c;
  
  piVar3 = (int *)__tls_get_addr(DAT_00026898 + 0x2654c);
  uVar1 = *(ushort *)(*piVar3 + 0x10);
  __ptr = malloc((uint)uVar1 << 4);
  local_18 = 0;
  piVar3 = (int *)__tls_get_addr(DAT_0002689c + 0x2658c);
  for (local_28 = *(undefined4 **)(*piVar3 + 8);
      piVar3 = (int *)__tls_get_addr(DAT_000268a0 + 0x266c0),
      local_28 != (undefined4 *)(*piVar3 + 8); local_28 = (undefined4 *)*local_28) {
    local_1c = 0;
    local_20 = 0;
    for (local_14 = 0; (int)local_14 < (int)(uint)*(byte *)(local_28 + -3); local_14 = local_14 + 1)
    {
      if ((*(uint *)(local_28[-2] + local_14 * 0x60 + 8) & 0xffff) == 1) {
        local_1c = local_1c + 1;
      }
      else {
        local_20 = local_20 + 1;
      }
    }
    *(int *)((int)__ptr + local_18 * 0x10) = local_18;
    *(int *)((int)__ptr + local_18 * 0x10 + 4) = local_1c;
    *(int *)((int)__ptr + local_18 * 0x10 + 8) = local_20;
    *(undefined4 **)((int)__ptr + local_18 * 0x10 + 0xc) = local_28 + -8;
    local_18 = local_18 + 1;
  }
  local_18 = 0;
  do {
    if ((int)(uint)uVar1 <= local_18) {
      free(__ptr);
      return 0;
    }
    iVar4 = *(int *)((int)__ptr + local_18 * 0x10 + 0xc);
    for (local_14 = 0; (int)local_14 < *(int *)((int)__ptr + local_18 * 0x10 + 4);
        local_14 = local_14 + 1) {
      bVar2 = false;
      local_10 = local_18;
      do {
        local_10 = local_10 + -1;
        if (local_10 < 0) break;
        iVar5 = *(int *)((int)__ptr + local_10 * 0x10 + 0xc);
        for (local_c = *(uint *)((int)__ptr + local_10 * 0x10 + 4);
            (int)local_c < (int)(uint)*(byte *)(*(int *)((int)__ptr + local_10 * 0x10 + 0xc) + 0x14)
            ; local_c = local_c + 1) {
          iVar6 = *(int *)(iVar5 + 0x18) + local_c * 0x60;
          iVar7 = *(int *)(iVar4 + 0x18) + local_14 * 0x60;
          if (*(int *)(iVar6 + 0x14) == *(int *)(iVar7 + 0x14) &&
              *(int *)(iVar6 + 0x10) == *(int *)(iVar7 + 0x10)) {
            rve_entity_create_link(iVar5,local_c & 0xff,iVar4,local_14 & 0xff,0);
            bVar2 = true;
            break;
          }
        }
      } while (!bVar2);
    }
    local_18 = local_18 + 1;
  } while( true );
}



/* ===== rve_pipeline_walk_through @ 000268a4 size=1604 ===== */

undefined4 rve_pipeline_walk_through(void)

{
  ushort uVar1;
  bool bVar2;
  int *piVar3;
  void *__ptr;
  undefined4 uVar4;
  undefined4 *local_2c;
  int local_28;
  int local_24;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  bVar2 = false;
  local_24 = -0x50;
  local_28 = -0x50;
  piVar3 = (int *)__tls_get_addr(DAT_00026ee8 + 0x2690c);
  uVar1 = *(ushort *)(*piVar3 + 0x10);
  __ptr = malloc((uint)uVar1 << 4);
  puts((char *)(DAT_00026eec + 0x26944));
  piVar3 = (int *)__tls_get_addr(DAT_00026ef0 + 0x26954);
  for (local_2c = *(undefined4 **)(*piVar3 + 8);
      piVar3 = (int *)__tls_get_addr(DAT_00026f24 + 0x26ce8),
      local_2c != (undefined4 *)(*piVar3 + 8); local_2c = (undefined4 *)*local_2c) {
    local_18 = 0;
    local_1c = 0;
    for (local_10 = 0; local_10 < (int)(uint)*(byte *)(local_2c + -3); local_10 = local_10 + 1) {
      if ((*(uint *)(local_2c[-2] + local_10 * 0x60 + 8) & 0xffff) == 1) {
        local_18 = local_18 + 1;
      }
      else {
        local_1c = local_1c + 1;
      }
    }
    if (*(char *)((int)local_2c + -0xb) != '\0') {
      bVar2 = true;
    }
    *(uint *)((int)__ptr + local_c * 0x10) = local_c;
    *(int *)((int)__ptr + local_c * 0x10 + 4) = local_18;
    *(int *)((int)__ptr + local_c * 0x10 + 8) = local_1c;
    *(undefined4 **)((int)__ptr + local_c * 0x10 + 0xc) = local_2c + -8;
    printf((char *)(DAT_00026ef4 + 0x26a98),local_c,local_2c[-4]);
    puts((char *)(DAT_00026ef8 + 0x26aa8));
    local_14 = 0;
    for (local_10 = 0; local_10 < (int)(uint)*(byte *)(local_2c + -3); local_10 = local_10 + 1) {
      if ((*(uint *)(local_2c[-2] + local_10 * 0x60 + 8) & 0xffff) == 1) {
        if (local_14 == local_18 + -1) {
          printf((char *)(DAT_00026efc + 0x26b10),local_14,local_10);
        }
        else {
          printf((char *)(DAT_00026f00 + 0x26b2c),local_14,local_10);
        }
        local_14 = local_14 + 1;
      }
    }
    puts((char *)(DAT_00026f04 + 0x26b6c));
    puts((char *)(DAT_00026f08 + 0x26b7c));
    local_14 = 0;
    for (local_10 = 0; local_10 < (int)(uint)*(byte *)(local_2c + -3); local_10 = local_10 + 1) {
      if ((*(uint *)(local_2c[-2] + local_10 * 0x60 + 8) & 0xffff) != 1) {
        if (local_14 == local_1c + -1) {
          printf((char *)(DAT_00026f0c + 0x26be4),local_14,local_10);
        }
        else {
          printf((char *)(DAT_00026f10 + 0x26c00),local_14,local_10);
        }
        local_14 = local_14 + 1;
      }
    }
    puts((char *)(DAT_00026f14 + 0x26c40));
    printf((char *)(DAT_00026f18 + 0x26c58),local_24,local_28);
    local_24 = local_24 + 100;
    local_28 = local_28 + 100;
    local_c = local_c + 1;
    piVar3 = (int *)__tls_get_addr(DAT_00026f1c + 0x26c94);
    if (local_c == *(ushort *)(*piVar3 + 0x10)) {
      putchar(10);
    }
    else {
      puts((char *)(DAT_00026f20 + 0x26ccc));
    }
  }
  if (bVar2) {
    puts((char *)(DAT_00026f28 + 0x26d1c));
    puts((char *)(DAT_00026f2c + 0x26d2c));
  }
  else {
    puts((char *)(DAT_00026f30 + 0x26d40));
  }
  local_c = 0;
  piVar3 = (int *)__tls_get_addr(DAT_00026f34 + 0x26d58);
  for (local_2c = *(undefined4 **)(*piVar3 + 8);
      piVar3 = (int *)__tls_get_addr(DAT_00026f40 + 0x26e88),
      local_2c != (undefined4 *)(*piVar3 + 8); local_2c = (undefined4 *)*local_2c) {
    for (local_10 = 0; local_10 < (int)(uint)*(byte *)((int)local_2c + -0xb);
        local_10 = local_10 + 1) {
      uVar4 = gojs_get_key(__ptr,(uint)uVar1,**(undefined4 **)(local_2c[-1] + local_10 * 8 + 4));
      printf((char *)(DAT_00026f38 + 0x26e30),local_c,
             (uint)*(byte *)(*(int *)(local_2c[-1] + local_10 * 8) + 4) -
             *(int *)((int)__ptr + local_c * 0x10 + 4),uVar4,
             (uint)*(byte *)(*(int *)(local_2c[-1] + local_10 * 8 + 4) + 4));
      puts((char *)(DAT_00026f3c + 0x26e3c));
    }
    local_c = local_c + 1;
  }
  if (bVar2) {
    puts((char *)(DAT_00026f44 + 0x26ebc));
  }
  puts((char *)(DAT_00026f48 + 0x26ecc));
  free(__ptr);
  return 0;
}



/* ===== rve_pipeline_stream_on @ 00026f4c size=372 ===== */

int rve_pipeline_stream_on(char param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = DAT_000270c0 + 0x26f70;
  piVar1 = (int *)__tls_get_addr(DAT_000270c4 + 0x26f78);
  *(undefined4 *)(*piVar1 + 0x14) = param_2;
  puVar2 = (undefined4 *)__tls_get_addr(DAT_000270c8 + 0x26f98);
  iVar3 = rve_entity_pipline_start(*puVar2,param_1);
  if (iVar3 < 0) {
    fprintf((FILE *)**(undefined4 **)(iVar4 + DAT_000270cc),(char *)(DAT_000270d4 + 0x26fe8),
            DAT_000270d0 + 0x26fe0,0x230);
    iVar3 = -1;
  }
  else if (param_1 != '\0') {
    piVar1 = (int *)__tls_get_addr(DAT_000270d8 + 0x27008);
    if (*(short *)(*piVar1 + 0x10) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar4 + DAT_000270cc),(char *)(DAT_000270ec + 0x270a8),
              DAT_000270e8 + 0x270a0,0x23f);
      iVar3 = -1;
    }
    else {
      piVar1 = (int *)__tls_get_addr(DAT_000270dc + 0x2702c);
      *(undefined4 *)(*piVar1 + 0x38) = 4;
      puVar2 = (undefined4 *)__tls_get_addr(DAT_000270e0 + 0x2704c);
      rve_entity_pipline_run(*puVar2);
      puVar2 = (undefined4 *)__tls_get_addr(DAT_000270e4 + 0x2706c);
      rve_entity_pipline_stop(*puVar2);
    }
  }
  return iVar3;
}



/* ===== rve_hal_pp_stcorner @ 000270f0 size=136 ===== */

undefined4 rve_hal_pp_stcorner(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 0x28);
  if (*pcVar1 == '\0') {
    *(undefined4 *)(pcVar1 + 8) = *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x5c);
  }
  else if (*pcVar1 == '\x01') {
    *(short *)(pcVar1 + 0x10) = (short)*(undefined4 *)(*(int *)(param_1 + 0x30) + 100);
  }
  return 0;
}



/* ===== rve_hal_pp_gmm @ 00027178 size=84 ===== */

undefined4 rve_hal_pp_gmm(int param_1)

{
  *(int *)(*(int *)(param_1 + 0x28) + 0x20) = *(int *)(*(int *)(param_1 + 0x30) + 0x6c) + 1;
  return 0;
}



/* ===== rve_hal_pp_cast @ 000271cc size=84 ===== */

undefined4 rve_hal_pp_cast(int param_1)

{
  *(char *)(*(int *)(param_1 + 0x28) + 0x20) =
       (char)*(undefined4 *)(*(int *)(param_1 + 0x30) + 0x70);
  return 0;
}



/* ===== rve_hal_pp_ncc @ 00027220 size=328 ===== */

undefined4 rve_hal_pp_ncc(int param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  
  iVar1 = *(int *)(param_1 + 0x30);
  puVar3 = *(uint **)(param_1 + 0x28);
  *puVar3 = *(uint *)(iVar1 + 0x54);
  puVar3[1] = 0;
  uVar2 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = uVar2;
  *puVar3 = *(uint *)(iVar1 + 0x50) | *puVar3;
  puVar3[1] = puVar3[1];
  puVar3[2] = *(uint *)(iVar1 + 0x5c);
  puVar3[3] = 0;
  uVar2 = puVar3[2];
  puVar3[2] = 0;
  puVar3[3] = uVar2;
  puVar3[2] = *(uint *)(iVar1 + 0x58) | puVar3[2];
  puVar3[3] = puVar3[3];
  puVar3[4] = *(uint *)(iVar1 + 100);
  puVar3[5] = 0;
  uVar2 = puVar3[4];
  puVar3[4] = 0;
  puVar3[5] = uVar2;
  puVar3[4] = *(uint *)(iVar1 + 0x60) | puVar3[4];
  puVar3[5] = puVar3[5];
  return 0;
}



/* ===== rve_hal_post_proc @ 00027368 size=244 ===== */

undefined4 rve_hal_post_proc(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    fprintf((FILE *)**(undefined4 **)(DAT_0002745c + 0x27384 + DAT_00027460),
            (char *)(DAT_00027468 + 0x273b0),DAT_00027464 + 0x273a8,0x4c);
    uVar1 = 0xfffffff9;
  }
  else {
    switch(*(undefined1 *)(param_1 + 4)) {
    case 0:
      rve_hal_pp_gmm(param_1);
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      rve_hal_pp_stcorner(param_1);
      break;
    case 5:
      break;
    case 6:
      break;
    case 7:
      break;
    case 8:
      break;
    case 9:
      break;
    case 10:
      break;
    case 0xb:
      break;
    case 0xc:
      break;
    case 0xd:
      break;
    case 0xe:
      break;
    case 0xf:
      break;
    case 0x10:
      break;
    case 0x11:
      rve_hal_pp_ncc(param_1);
      break;
    case 0x12:
      rve_hal_pp_cast(param_1);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== init_rve_params_to_regs_entries @ 0002746c size=756 ===== */

undefined4 init_rve_params_to_regs_entries(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00027760 + 0x27488;
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(iVar1 + DAT_00027764);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(iVar1 + DAT_00027768);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(iVar1 + DAT_0002776c);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(iVar1 + DAT_00027770);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(iVar1 + DAT_00027774);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(iVar1 + DAT_00027778);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar1 + DAT_0002777c);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(iVar1 + DAT_00027780);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(iVar1 + DAT_00027784);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(iVar1 + DAT_00027788);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(iVar1 + DAT_0002778c);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(iVar1 + DAT_00027790);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(iVar1 + DAT_00027794);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(iVar1 + DAT_00027798);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(iVar1 + DAT_0002779c);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(iVar1 + DAT_000277a0);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(iVar1 + DAT_000277a4);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(iVar1 + DAT_000277a8);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(iVar1 + DAT_000277ac);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(iVar1 + DAT_000277b0);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(iVar1 + DAT_000277b4);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(iVar1 + DAT_000277b8);
  return 0;
}



/* ===== rve_hal_translate_comm_params_to_regs @ 000277bc size=516 ===== */

undefined4
rve_hal_translate_comm_params_to_regs
          (int param_1,byte param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_1 == 0) {
    fprintf((FILE *)**(undefined4 **)(DAT_000279c0 + 0x277e4 + DAT_000279c4),
            (char *)(DAT_000279cc + 0x27810),DAT_000279c8 + 0x27808,0x2a);
    __assert((char *)(DAT_000279d8 + 0x27830),(char *)(DAT_000279d4 + 0x27828),0x2b);
  }
  *(byte *)(param_1 + 0x128) = *(byte *)(param_1 + 0x128) | 1;
  *(byte *)(param_1 + 0x138) = *(byte *)(param_1 + 0x138) & 0xe0 | param_2 & 0x1f;
  *(ushort *)(param_1 + 0x14c) =
       *(ushort *)(param_1 + 0x14c) & 0xf000 |
       (ushort)(((param_3[0xf] & 0xffff) - 1) * 0x100000 >> 0x14);
  *(ushort *)(param_1 + 0x14e) =
       *(ushort *)(param_1 + 0x14e) & 0xf000 |
       (ushort)(((param_3[0x10] & 0xffff) - 1) * 0x100000 >> 0x14);
  *(short *)(param_1 + 0x150) = (short)param_3[0xc];
  *(short *)(param_1 + 0x152) = (short)param_4[0xc];
  *(short *)(param_1 + 0x154) = (short)param_3[0x20];
  *(short *)(param_1 + 0x156) = (short)param_4[0x20];
  *(undefined4 *)(param_1 + 0x158) = *param_3;
  *(undefined4 *)(param_1 + 0x15c) = param_3[0x14];
  *(undefined4 *)(param_1 + 0x160) = param_3[0x28];
  *(undefined4 *)(param_1 + 0x164) = param_3[0x3c];
  *(undefined4 *)(param_1 + 0x168) = *param_4;
  *(undefined4 *)(param_1 + 0x16c) = param_4[0x14];
  *(undefined4 *)(param_1 + 0x170) = param_4[0x28];
  return 0;
}



/* ===== rve_hal_translate_params_to_regs @ 000279dc size=264 ===== */

undefined4 rve_hal_translate_params_to_regs(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    fprintf((FILE *)**(undefined4 **)(DAT_00027ae4 + 0x27a00 + DAT_00027ae8),
            (char *)(DAT_00027af0 + 0x27a2c),DAT_00027aec + 0x27a24,0x4d);
    __assert((char *)(DAT_00027afc + 0x27a4c),(char *)(DAT_00027af8 + 0x27a44),0x4e);
  }
  memcpy(param_2 + 0x12,(void *)(param_1 + 0x128),0xa0);
  uVar1 = *(undefined4 *)(param_1 + 0xe4);
  uVar2 = *(undefined4 *)(param_1 + 0xe8);
  uVar3 = *(undefined4 *)(param_1 + 0xec);
  *param_2 = *(undefined4 *)(param_1 + 0xe0);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0xf4);
  uVar2 = *(undefined4 *)(param_1 + 0xf8);
  uVar3 = *(undefined4 *)(param_1 + 0xfc);
  param_2[4] = *(undefined4 *)(param_1 + 0xf0);
  param_2[5] = uVar1;
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  (**(code **)(param_1 + (*(byte *)(param_2 + 0x3e) + 0x22) * 4))
            (param_3,param_2 + 0x12,param_2 + 0x42,param_2 + 0x10a);
  return 0;
}



/* ===== rve_hal_gmm_params_to_regs @ 00027b00 size=612 ===== */

undefined4 rve_hal_gmm_params_to_regs(byte *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  *(short *)(param_2 + 0x2c) = *(short *)(param_2 + 0x2c) << 1;
  if (param_1[1] == 1) {
    *(short *)(param_2 + 0x28) = *(short *)(param_2 + 0x28) * 3;
    *(short *)(param_2 + 0x2e) = *(short *)(param_2 + 0x2e) * 3;
  }
  *(uint *)(param_2 + 0x50) =
       (uint)*param_1 | (uint)param_1[1] << 1 | (uint)param_1[2] << 2 | (uint)param_1[3] << 3 |
       (uint)param_1[4] << 4 | (uint)param_1[5] << 8 | (uint)param_1[6] << 9 |
       (uint)param_1[7] << 10 | (uint)param_1[0x24] << 0x1f;
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_1 + 10);
  *(uint *)(param_2 + 0x58) = (uint)CONCAT12(param_1[0x1a],*(undefined2 *)(param_1 + 0xe));
  *(uint *)(param_2 + 0x5c) = (uint)param_1[0x10] | (uint)*(ushort *)(param_1 + 0x12) << 0x10;
  *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_1 + 0x16);
  *(uint *)(param_2 + 100) = CONCAT22(*(undefined2 *)(param_1 + 0x14),*(undefined2 *)(param_1 + 8));
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1c) + -1;
  }
  *(int *)(param_2 + 0x68) = iVar1;
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x20) + -1;
  }
  *(int *)(param_2 + 0x6c) = iVar1;
  *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_4 + 0xf0);
  return 0;
}



/* ===== rve_hal_bgm_params_to_regs @ 00027d64 size=236 ===== */

undefined4 rve_hal_bgm_params_to_regs(byte *param_1,int param_2,undefined4 param_3,int param_4)

{
  *(uint *)(param_2 + 0x50) = (uint)*param_1 | (uint)param_1[1] << 1 | (uint)param_1[2] << 2;
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_1 + 0xb);
  *(uint *)(param_2 + 0x58) = (uint)*(ushort *)(param_1 + 9);
  *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_4 + 0xf0);
  return 0;
}



/* ===== rve_hal_cannyedge_params_to_regs @ 00027e50 size=1056 ===== */

undefined4 rve_hal_cannyedge_params_to_regs(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  if (*(char *)(param_1 + 0x1e) == '\x01') {
    *(short *)(param_2 + 0x28) = (short)*(undefined4 *)(param_3 + 0x30);
    *(short *)(param_2 + 0x2a) = (short)*(undefined4 *)(param_3 + 0x80);
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_3 + 0x50);
  }
  else if (*(char *)(param_1 + 0x1e) == '\x02') {
    *(short *)(param_2 + 0x28) = (short)*(undefined4 *)(param_3 + 0x80);
    *(short *)(param_2 + 0x2a) = (short)*(undefined4 *)(param_3 + 0x80);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 0x50);
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_2 + 0x30);
  }
  else if (*(char *)(param_1 + 0x1e) == '\x03') {
    *(short *)(param_2 + 0x28) = (short)*(undefined4 *)(param_3 + 0x80);
    *(short *)(param_2 + 0x2a) = (short)param_4[0xc];
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 0x50);
    *(undefined4 *)(param_2 + 0x40) = *param_4;
  }
  *(uint *)(param_2 + 0x50) =
       (uint)*(byte *)(param_1 + 0x18) | (uint)*(byte *)(param_1 + 0x19) << 1 |
       (uint)*(byte *)(param_1 + 0x1a) << 2 | (uint)*(byte *)(param_1 + 0x1c) << 8 |
       (uint)*(byte *)(param_1 + 0x1d) << 0x10 | (uint)*(byte *)(param_1 + 0x1e) << 0x18;
  *(uint *)(param_2 + 0x54) = (uint)*(byte *)(param_1 + 0x1b);
  *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_1 + 0x38);
  *(uint *)(param_2 + 0x74) = (uint)*(byte *)(param_1 + 0x3c);
  return 0;
}



/* ===== rve_hal_dma_params_to_regs @ 00028270 size=280 ===== */

undefined4 rve_hal_dma_params_to_regs(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  if ((*param_1 == 2) || (*param_1 == 3)) {
    *(ushort *)(param_2 + 0x24) =
         *(ushort *)(param_2 + 0x24) & 0xf000 |
         (ushort)(((*(uint *)(param_4 + 0x3c) & 0xffff) - 1) * 0x100000 >> 0x14);
    *(ushort *)(param_2 + 0x26) =
         *(ushort *)(param_2 + 0x26) & 0xf000 |
         (ushort)(((*(uint *)(param_4 + 0x40) & 0xffff) - 1) * 0x100000 >> 0x14);
  }
  *(int *)(param_2 + 0x50) = *param_1;
  *(int *)(param_2 + 0x54) = param_1[2];
  *(int *)(param_2 + 0x58) = param_1[3];
  *(uint *)(param_2 + 0x5c) =
       (uint)*(byte *)(param_1 + 4) + (uint)*(byte *)((int)param_1 + 0x11) * 0x100 +
       (uint)*(byte *)((int)param_1 + 0x12) * 0x10000;
  return 0;
}



/* ===== rve_hal_filter_params_to_regs @ 00028388 size=724 ===== */

undefined4 rve_hal_filter_params_to_regs(byte *param_1,int param_2)

{
  if ((param_1[2] == 2) || (param_1[2] == 3)) {
    *(short *)(param_2 + 0x2a) = *(short *)(param_2 + 0x2a) << 1;
  }
  *(uint *)(param_2 + 0x50) = (uint)*param_1 << 1 | (uint)param_1[1] << 8;
  *(uint *)(param_2 + 0x54) = (uint)param_1[2];
  *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(param_1 + 3);
  *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_1 + 7);
  *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_1 + 0xb);
  *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_1 + 0xf);
  *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(param_1 + 0x13);
  *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_1 + 0x17);
  *(uint *)(param_2 + 0x74) = (uint)param_1[0x1b];
  return 0;
}



/* ===== rve_hal_sobel_params_to_regs @ 0002865c size=764 ===== */

undefined4 rve_hal_sobel_params_to_regs(byte *param_1,int param_2)

{
  if ((param_1[3] == 2) || (param_1[3] == 3)) {
    *(short *)(param_2 + 0x2a) = *(short *)(param_2 + 0x2a) << 1;
    *(short *)(param_2 + 0x2e) = *(short *)(param_2 + 0x2e) << 1;
  }
  *(uint *)(param_2 + 0x50) = (uint)*param_1 << 1 | (uint)param_1[1] << 2 | (uint)param_1[2] << 8;
  *(uint *)(param_2 + 0x54) = (uint)param_1[3];
  *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_1 + 0x18);
  *(uint *)(param_2 + 0x74) = (uint)param_1[0x1c];
  return 0;
}



/* ===== rve_hal_csc_params_to_regs @ 00028958 size=400 ===== */

undefined4 rve_hal_csc_params_to_regs(int *param_1,int param_2)

{
  if ((((char)param_1[1] == '\0') || ((char)param_1[1] == '\x01')) || ((char)param_1[1] == '\x03'))
  {
    *(ushort *)(param_2 + 0x28) = *(short *)(param_2 + 0x28) + 1U & 0xfffe;
  }
  else if ((char)param_1[1] == '\x02') {
    *(short *)(param_2 + 0x28) = *(short *)(param_2 + 0x28) * 3;
  }
  if (((*(char *)((int)param_1 + 5) == '\0') || (*(char *)((int)param_1 + 5) == '\x01')) ||
     (*(char *)((int)param_1 + 5) == '\x03')) {
    *(ushort *)(param_2 + 0x2a) = *(short *)(param_2 + 0x2a) + 1U & 0xfffe;
  }
  else if (*(char *)((int)param_1 + 5) == '\x02') {
    *(short *)(param_2 + 0x2a) = *(short *)(param_2 + 0x2a) * 3;
  }
  *(uint *)(param_2 + 0x50) =
       (uint)*(byte *)(param_1 + 1) | (uint)*(byte *)((int)param_1 + 5) << 4 | *param_1 << 8 |
       (uint)*(byte *)((int)param_1 + 6) << 0xc | (uint)*(byte *)((int)param_1 + 7) << 0x10;
  return 0;
}



/* ===== rve_hal_magandang_params_to_regs @ 00028ae8 size=120 ===== */

undefined4 rve_hal_magandang_params_to_regs(undefined4 param_1,int param_2)

{
  *(short *)(param_2 + 0x28) = *(short *)(param_2 + 0x28) << 1;
  *(short *)(param_2 + 0x2a) = *(short *)(param_2 + 0x2a) << 1;
  *(short *)(param_2 + 0x2c) = *(short *)(param_2 + 0x2c) << 1;
  return 0;
}



/* ===== rve_hal_morph_params_to_regs @ 00028b60 size=172 ===== */

undefined4 rve_hal_morph_params_to_regs(byte *param_1,int param_2)

{
  uint local_c;
  
  *(uint *)(param_2 + 0x50) = (uint)*param_1;
  for (local_c = 0; local_c < 0x19; local_c = local_c + 1) {
    *(uint *)(param_2 + 0x54) =
         *(uint *)(param_2 + 0x54) | (uint)(param_1[local_c + 1] != 0) << (local_c & 0xff);
  }
  return 0;
}



/* ===== rve_hal_logicop_params_to_regs @ 00028c0c size=104 ===== */

undefined4 rve_hal_logicop_params_to_regs(undefined4 *param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x50) = *param_1;
  *(undefined4 *)(param_2 + 0x54) = param_1[1];
  return 0;
}



/* ===== rve_hal_integ_params_to_regs @ 00028c74 size=204 ===== */

undefined4 rve_hal_integ_params_to_regs(int *param_1,int param_2,int param_3)

{
  if ((*param_1 == 1) || (*param_1 == 2)) {
    *(short *)(param_2 + 0x2a) =
         (short)*(undefined4 *)(param_3 + 0x3c) * 7 + *(short *)(param_2 + 0x2a);
  }
  else {
    *(short *)(param_2 + 0x2a) =
         (short)*(undefined4 *)(param_3 + 0x3c) * 3 + *(short *)(param_2 + 0x2a);
  }
  *(int *)(param_2 + 0x50) = *param_1;
  return 0;
}



/* ===== rve_hal_ncc_params_to_regs @ 00028d40 size=168 ===== */

undefined4 rve_hal_ncc_params_to_regs(undefined4 *param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x50) = *param_1;
  *(undefined4 *)(param_2 + 0x54) = param_1[1];
  *(undefined4 *)(param_2 + 0x58) = param_1[2];
  *(undefined4 *)(param_2 + 0x5c) = param_1[3];
  *(undefined4 *)(param_2 + 0x60) = param_1[4];
  *(undefined4 *)(param_2 + 100) = param_1[5];
  return 0;
}



/* ===== rve_hal_thresh_params_to_regs @ 00028de8 size=356 ===== */

undefined4 rve_hal_thresh_params_to_regs(byte *param_1,int param_2)

{
  if ((param_1[3] == 1) || (param_1[3] == 3)) {
    *(short *)(param_2 + 0x28) = *(short *)(param_2 + 0x28) << 1;
  }
  if ((param_1[4] == 1) || (param_1[4] == 3)) {
    *(short *)(param_2 + 0x2a) = *(short *)(param_2 + 0x2a) << 1;
  }
  *(uint *)(param_2 + 0x50) = (uint)param_1[3] | (uint)param_1[4] << 2;
  *(uint *)(param_2 + 0x54) = (uint)*param_1 | (uint)param_1[1] << 1 | (uint)param_1[2] << 2;
  *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_1 + 0xc);
  return 0;
}



/* ===== rve_hal_ordfilt_params_to_regs @ 00028f4c size=64 ===== */

undefined4 rve_hal_ordfilt_params_to_regs(undefined4 *param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x50) = *param_1;
  return 0;
}



/* ===== rve_hal_cast_params_to_regs @ 00028f8c size=384 ===== */

undefined4 rve_hal_cast_params_to_regs(byte *param_1,int param_2,int param_3,int param_4)

{
  if ((*param_1 == 1) || (*param_1 == 3)) {
    *(short *)(param_2 + 0x28) =
         (short)*(undefined4 *)(param_3 + 0x3c) + (short)*(undefined4 *)(param_3 + 0x30);
  }
  if ((param_1[1] == 1) || (param_1[1] == 3)) {
    *(short *)(param_2 + 0x2a) =
         (short)*(undefined4 *)(param_4 + 0x3c) + (short)*(undefined4 *)(param_4 + 0x30);
  }
  *(uint *)(param_2 + 0x50) = (uint)*param_1 | (uint)param_1[1] << 2;
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(param_1 + 0x18);
  *(uint *)(param_2 + 0x70) = (uint)param_1[0x20];
  return 0;
}



/* ===== rve_hal_lbp_params_to_regs @ 0002910c size=164 ===== */

undefined4 rve_hal_lbp_params_to_regs(int *param_1,int param_2)

{
  *(int *)(param_2 + 0x50) = *param_1;
  if (*param_1 == 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) | (uint)*(byte *)(param_1 + 1) << 8;
  }
  else if (*param_1 == 1) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) | (uint)*(byte *)((int)param_1 + 5) << 8;
  }
  return 0;
}



/* ===== rve_hal_eqhist_params_to_regs @ 000291b0 size=64 ===== */

undefined4 rve_hal_eqhist_params_to_regs(undefined4 *param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x50) = *param_1;
  return 0;
}



/* ===== rve_hal_ccl_params_to_regs @ 000291f0 size=104 ===== */

undefined4 rve_hal_ccl_params_to_regs(undefined4 *param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x50) = *param_1;
  *(undefined4 *)(param_2 + 0x54) = param_1[1];
  return 0;
}



/* ===== rve_hal_stcorner_params_to_regs @ 00029258 size=236 ===== */

undefined4 rve_hal_stcorner_params_to_regs(byte *param_1,int param_2,undefined4 param_3,int param_4)

{
  *(uint *)(param_2 + 0x50) = *param_1 & 3 | (uint)param_1[1] << 4;
  *(uint *)(param_2 + 0x54) = (uint)param_1[2];
  *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_1 + 0xc);
  *(uint *)(param_2 + 100) = (uint)*(ushort *)(param_1 + 0x10);
  if (*param_1 == 1) {
    *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_4 + 0xf0);
  }
  return 0;
}



/* ===== rve_hal_sad_params_to_regs @ 00029344 size=196 ===== */

undefined4 rve_hal_sad_params_to_regs(int *param_1,int param_2)

{
  if (param_1[2] == 1) {
    *(short *)(param_2 + 0x2a) = *(short *)(param_2 + 0x2a) << 1;
  }
  *(int *)(param_2 + 0x50) = param_1[1] | param_1[2] << 2 | *param_1 << 4;
  *(uint *)(param_2 + 0x54) = (uint)*(ushort *)(param_1 + 3);
  *(uint *)(param_2 + 0x58) =
       (uint)*(byte *)((int)param_1 + 0xe) | (uint)*(byte *)((int)param_1 + 0xf) << 0x10;
  return 0;
}



/* ===== rve_hal_lk_params_to_regs @ 00029408 size=788 ===== */

undefined4 rve_hal_lk_params_to_regs(ushort *param_1,int param_2,int param_3)

{
  int local_14;
  int local_10;
  int local_c;
  
  local_10 = 0;
  local_14 = (byte)param_1[3] + 3;
  for (local_c = 0; local_c <= (int)(uint)(byte)param_1[3]; local_c = local_c + 1) {
    if (local_c == 0) {
      *(short *)(param_2 + 0x28) = (short)*(undefined4 *)(param_3 + local_10 * 0x50 + 0x30);
      *(short *)(param_2 + 0x2a) = (short)*(undefined4 *)(param_3 + local_14 * 0x50 + 0x30);
    }
    else if (local_c == 1) {
      *(short *)(param_2 + 0x2c) = (short)*(undefined4 *)(param_3 + local_10 * 0x50 + 0x30);
      *(short *)(param_2 + 0x2e) = (short)*(undefined4 *)(param_3 + local_14 * 0x50 + 0x30);
    }
    else if (local_c == 2) {
      *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(param_3 + local_10 * 0x50 + 0x30);
      *(uint *)(param_2 + 0x6c) =
           *(uint *)(param_2 + 0x6c) | *(int *)(param_3 + local_14 * 0x50 + 0x30) << 0x10;
    }
    else if (local_c == 3) {
      *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_3 + local_10 * 0x50 + 0x30);
      *(uint *)(param_2 + 0x70) =
           *(uint *)(param_2 + 0x70) | *(int *)(param_3 + local_14 * 0x50 + 0x30) << 0x10;
    }
    local_10 = local_10 + 1;
    local_14 = local_14 + 1;
  }
  *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_3 + 400);
  *(undefined4 *)(param_2 + 0x74) = *(undefined4 *)(param_3 + 0x140);
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_3 + 0x1e0);
  *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_3 + 0x230);
  *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(param_3 + 0x280);
  *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_3 + 0x2d0);
  *(uint *)(param_2 + 100) =
       (uint)param_1[2] | (uint)*(byte *)((int)param_1 + 3) << 0xb | (uint)(byte)param_1[1] << 0x10
       | (uint)(byte)param_1[3] << 0x18;
  *(uint *)(param_2 + 0x68) =
       (uint)*(byte *)((int)param_1 + 7) | (uint)(byte)param_1[4] << 4 | (uint)*param_1 << 8 |
       (uint)*(byte *)((int)param_1 + 9) << 0x18 | (uint)(byte)param_1[0x14] << 0x19;
  return 0;
}



/* ===== rve_hal_map_params_to_regs @ 0002971c size=104 ===== */

undefined4 rve_hal_map_params_to_regs(int *param_1,int param_2)

{
  if (*param_1 == 1) {
    *(short *)(param_2 + 0x2a) = *(short *)(param_2 + 0x2a) << 1;
  }
  *(int *)(param_2 + 0x50) = *param_1;
  return 0;
}



/* ===== _fini @ 00029784 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::putchar @ 0003d000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 0003d004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dlerror @ 0003d008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dlerror(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0003d00c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::round @ 0003d010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double round(double __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0003d014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 0003d018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 0003d01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0003d020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dlclose @ 0003d024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dlclose(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__tls_get_addr @ 0003d028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __tls_get_addr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0003d02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0003d030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 0003d034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dlopen @ 0003d038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dlopen(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pow @ 0003d03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double pow(double __x,double __y)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 0003d040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dlsym @ 0003d044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dlsym(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0003d048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::poll @ 0003d04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0003d050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 0003d054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 0003d05c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0003d060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open @ 0003d064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__assert @ 0003d068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void __assert(char *__assertion,char *__file,int __line)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0003d06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0003d070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0003d074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


