// ffmpeg — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 000158e8 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::av_log_get_flags @ 0001590c size=12 ===== */

void av_log_get_flags(void)

{
  (*(code *)PTR_av_log_get_flags_0005b00c)();
  return;
}



/* ===== <EXTERNAL>::setvbuf @ 00015918 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setvbuf(FILE *__stream,char *__buf,int __modes,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setvbuf_0005b010)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::av_gettime_relative @ 00015924 size=12 ===== */

void av_gettime_relative(void)

{
  (*(code *)PTR_av_gettime_relative_0005b014)();
  return;
}



/* ===== <EXTERNAL>::av_stream_get_side_data @ 00015930 size=12 ===== */

void av_stream_get_side_data(void)

{
  (*(code *)PTR_av_stream_get_side_data_0005b018)();
  return;
}



/* ===== <EXTERNAL>::av_hwdevice_get_type_name @ 0001593c size=12 ===== */

void av_hwdevice_get_type_name(void)

{
  (*(code *)PTR_av_hwdevice_get_type_name_0005b01c)();
  return;
}



/* ===== <EXTERNAL>::memcmp @ 00015948 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_0005b020)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::qsort @ 00015954 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  (*(code *)PTR_qsort_0005b024)(__base);
  return;
}



/* ===== <EXTERNAL>::postproc_version @ 00015960 size=12 ===== */

void postproc_version(void)

{
  (*(code *)PTR_postproc_version_0005b028)();
  return;
}



/* ===== <EXTERNAL>::av_log_format_line @ 0001596c size=12 ===== */

void av_log_format_line(void)

{
  (*(code *)PTR_av_log_format_line_0005b02c)();
  return;
}



/* ===== <EXTERNAL>::av_fifo_freep2 @ 00015978 size=12 ===== */

void av_fifo_freep2(void)

{
  (*(code *)PTR_av_fifo_freep2_0005b030)();
  return;
}



/* ===== <EXTERNAL>::av_buffersink_get_frame_flags @ 00015984 size=12 ===== */

void av_buffersink_get_frame_flags(void)

{
  (*(code *)PTR_av_buffersink_get_frame_flags_0005b034)();
  return;
}



/* ===== <EXTERNAL>::av_get_audio_frame_duration @ 00015990 size=12 ===== */

void av_get_audio_frame_duration(void)

{
  (*(code *)PTR_av_get_audio_frame_duration_0005b038)();
  return;
}



/* ===== <EXTERNAL>::av_malloc @ 0001599c size=12 ===== */

void av_malloc(void)

{
  (*(code *)PTR_av_malloc_0005b03c)();
  return;
}



/* ===== <EXTERNAL>::abort @ 000159a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0005b040)();
  return;
}



/* ===== <EXTERNAL>::avio_r8 @ 000159b4 size=12 ===== */

void avio_r8(void)

{
  (*(code *)PTR_avio_r8_0005b044)();
  return;
}



/* ===== <EXTERNAL>::av_channel_layout_check @ 000159c0 size=12 ===== */

void av_channel_layout_check(void)

{
  (*(code *)PTR_av_channel_layout_check_0005b048)();
  return;
}



/* ===== <EXTERNAL>::av_thread_message_queue_set_err_send @ 000159d8 size=12 ===== */

void av_thread_message_queue_set_err_send(void)

{
  (*(code *)PTR_av_thread_message_queue_set_err_send_0005b050)();
  return;
}



/* ===== <EXTERNAL>::write @ 000159e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_0005b054)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::av_pix_fmt_desc_get @ 000159f0 size=12 ===== */

void av_pix_fmt_desc_get(void)

{
  (*(code *)PTR_av_pix_fmt_desc_get_0005b058)();
  return;
}



/* ===== <EXTERNAL>::av_channel_layout_compare @ 000159fc size=12 ===== */

void av_channel_layout_compare(void)

{
  (*(code *)PTR_av_channel_layout_compare_0005b05c)();
  return;
}



/* ===== <EXTERNAL>::av_strtod @ 00015a08 size=12 ===== */

void av_strtod(void)

{
  (*(code *)PTR_av_strtod_0005b060)();
  return;
}



/* ===== <EXTERNAL>::av_expr_eval @ 00015a14 size=12 ===== */

void av_expr_eval(void)

{
  (*(code *)PTR_av_expr_eval_0005b064)();
  return;
}



/* ===== <EXTERNAL>::av_compare_ts @ 00015a20 size=12 ===== */

void av_compare_ts(void)

{
  (*(code *)PTR_av_compare_ts_0005b068)();
  return;
}



/* ===== <EXTERNAL>::sws_isSupportedOutput @ 00015a2c size=12 ===== */

void sws_isSupportedOutput(void)

{
  (*(code *)PTR_sws_isSupportedOutput_0005b06c)();
  return;
}



/* ===== <EXTERNAL>::av_hwdevice_find_type_by_name @ 00015a38 size=12 ===== */

void av_hwdevice_find_type_by_name(void)

{
  (*(code *)PTR_av_hwdevice_find_type_by_name_0005b070)();
  return;
}



/* ===== <EXTERNAL>::av_parse_video_rate @ 00015a44 size=12 ===== */

void av_parse_video_rate(void)

{
  (*(code *)PTR_av_parse_video_rate_0005b074)();
  return;
}



/* ===== <EXTERNAL>::av_channel_layout_standard @ 00015a50 size=12 ===== */

void av_channel_layout_standard(void)

{
  (*(code *)PTR_av_channel_layout_standard_0005b078)();
  return;
}



/* ===== <EXTERNAL>::av_get_channel_layout @ 00015a5c size=12 ===== */

void av_get_channel_layout(void)

{
  (*(code *)PTR_av_get_channel_layout_0005b07c)();
  return;
}



/* ===== <EXTERNAL>::tcsetattr @ 00015a68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcsetattr(int __fd,int __optional_actions,termios *__termios_p)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_tcsetattr_0005b080)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::av_get_picture_type_char @ 00015a74 size=12 ===== */

void av_get_picture_type_char(void)

{
  (*(code *)PTR_av_get_picture_type_char_0005b084)();
  return;
}



/* ===== <EXTERNAL>::av_get_known_color_name @ 00015a80 size=12 ===== */

void av_get_known_color_name(void)

{
  (*(code *)PTR_av_get_known_color_name_0005b088)();
  return;
}



/* ===== <EXTERNAL>::av_force_cpu_flags @ 00015a8c size=12 ===== */

void av_force_cpu_flags(void)

{
  (*(code *)PTR_av_force_cpu_flags_0005b08c)();
  return;
}



/* ===== <EXTERNAL>::av_stream_get_end_pts @ 00015a98 size=12 ===== */

void av_stream_get_end_pts(void)

{
  (*(code *)PTR_av_stream_get_end_pts_0005b090)();
  return;
}



/* ===== <EXTERNAL>::sscanf @ 00015aa4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_0005b094)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::av_rescale_delta @ 00015ab0 size=12 ===== */

void av_rescale_delta(void)

{
  (*(code *)PTR_av_rescale_delta_0005b098)();
  return;
}



/* ===== <EXTERNAL>::av_cpu_force_count @ 00015abc size=12 ===== */

void av_cpu_force_count(void)

{
  (*(code *)PTR_av_cpu_force_count_0005b09c)();
  return;
}



/* ===== <EXTERNAL>::avcodec_decode_subtitle2 @ 00015ac8 size=12 ===== */

void avcodec_decode_subtitle2(void)

{
  (*(code *)PTR_avcodec_decode_subtitle2_0005b0a0)();
  return;
}



/* ===== <EXTERNAL>::av_buffersrc_add_frame @ 00015ad4 size=12 ===== */

void av_buffersrc_add_frame(void)

{
  (*(code *)PTR_av_buffersrc_add_frame_0005b0a4)();
  return;
}



/* ===== <EXTERNAL>::strcspn @ 00015ae0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strcspn(char *__s,char *__reject)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strcspn_0005b0a8)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::av_get_sample_fmt_name @ 00015aec size=12 ===== */

void av_get_sample_fmt_name(void)

{
  (*(code *)PTR_av_get_sample_fmt_name_0005b0ac)();
  return;
}



/* ===== <EXTERNAL>::av_codec_is_decoder @ 00015af8 size=12 ===== */

void av_codec_is_decoder(void)

{
  (*(code *)PTR_av_codec_is_decoder_0005b0b0)();
  return;
}



/* ===== <EXTERNAL>::av_packet_new_side_data @ 00015b04 size=12 ===== */

void av_packet_new_side_data(void)

{
  (*(code *)PTR_av_packet_new_side_data_0005b0b4)();
  return;
}



/* ===== <EXTERNAL>::av_write_trailer @ 00015b10 size=12 ===== */

void av_write_trailer(void)

{
  (*(code *)PTR_av_write_trailer_0005b0b8)();
  return;
}



/* ===== <EXTERNAL>::av_packet_move_ref @ 00015b1c size=12 ===== */

void av_packet_move_ref(void)

{
  (*(code *)PTR_av_packet_move_ref_0005b0bc)();
  return;
}



/* ===== <EXTERNAL>::av_buffersrc_parameters_set @ 00015b28 size=12 ===== */

void av_buffersrc_parameters_set(void)

{
  (*(code *)PTR_av_buffersrc_parameters_set_0005b0c0)();
  return;
}



/* ===== <EXTERNAL>::av_log_set_flags @ 00015b34 size=12 ===== */

void av_log_set_flags(void)

{
  (*(code *)PTR_av_log_set_flags_0005b0c4)();
  return;
}



/* ===== <EXTERNAL>::av_expr_parse @ 00015b40 size=12 ===== */

void av_expr_parse(void)

{
  (*(code *)PTR_av_expr_parse_0005b0c8)();
  return;
}



/* ===== <EXTERNAL>::av_frame_get_side_data @ 00015b4c size=12 ===== */

void av_frame_get_side_data(void)

{
  (*(code *)PTR_av_frame_get_side_data_0005b0cc)();
  return;
}



/* ===== <EXTERNAL>::snprintf @ 00015b58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0005b0d0)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::av_bprintf @ 00015b64 size=12 ===== */

void av_bprintf(void)

{
  (*(code *)PTR_av_bprintf_0005b0d4)();
  return;
}



/* ===== <EXTERNAL>::av_dynarray_add_nofree @ 00015b70 size=12 ===== */

void av_dynarray_add_nofree(void)

{
  (*(code *)PTR_av_dynarray_add_nofree_0005b0d8)();
  return;
}



/* ===== <EXTERNAL>::avcodec_send_frame @ 00015b7c size=12 ===== */

void avcodec_send_frame(void)

{
  (*(code *)PTR_avcodec_send_frame_0005b0dc)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00015b88 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0005b0e0)();
  return;
}



/* ===== <EXTERNAL>::av_get_media_type_string @ 00015b94 size=12 ===== */

void av_get_media_type_string(void)

{
  (*(code *)PTR_av_get_media_type_string_0005b0e4)();
  return;
}



/* ===== <EXTERNAL>::av_hwdevice_iterate_types @ 00015ba0 size=12 ===== */

void av_hwdevice_iterate_types(void)

{
  (*(code *)PTR_av_hwdevice_iterate_types_0005b0e8)();
  return;
}



/* ===== <EXTERNAL>::avdevice_configuration @ 00015bac size=12 ===== */

void avdevice_configuration(void)

{
  (*(code *)PTR_avdevice_configuration_0005b0ec)();
  return;
}



/* ===== <EXTERNAL>::signal @ 00015bb8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_0005b0f0)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::avsubtitle_free @ 00015bc4 size=12 ===== */

void avsubtitle_free(void)

{
  (*(code *)PTR_avsubtitle_free_0005b0f4)();
  return;
}



/* ===== <EXTERNAL>::getrusage @ 00015bd0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getrusage(__rusage_who_t __who,rusage *__usage)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getrusage_0005b0f8)(__who);
  return iVar1;
}



/* ===== <EXTERNAL>::av_fifo_read @ 00015bdc size=12 ===== */

void av_fifo_read(void)

{
  (*(code *)PTR_av_fifo_read_0005b0fc)();
  return;
}



/* ===== <EXTERNAL>::sws_get_class @ 00015be8 size=12 ===== */

void sws_get_class(void)

{
  (*(code *)PTR_sws_get_class_0005b100)();
  return;
}



/* ===== <EXTERNAL>::strcmp @ 00015bf4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0005b104)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::av_stream_get_class @ 00015c00 size=12 ===== */

void av_stream_get_class(void)

{
  (*(code *)PTR_av_stream_get_class_0005b108)();
  return;
}



/* ===== <EXTERNAL>::avio_closep @ 00015c0c size=12 ===== */

void avio_closep(void)

{
  (*(code *)PTR_avio_closep_0005b10c)();
  return;
}



/* ===== <EXTERNAL>::time @ 00015c18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_0005b110)(__timer);
  return tVar1;
}



/* ===== <EXTERNAL>::av_buffersink_set_frame_size @ 00015c24 size=12 ===== */

void av_buffersink_set_frame_size(void)

{
  (*(code *)PTR_av_buffersink_set_frame_size_0005b114)();
  return;
}



/* ===== <EXTERNAL>::swr_get_class @ 00015c30 size=12 ===== */

void swr_get_class(void)

{
  (*(code *)PTR_swr_get_class_0005b118)();
  return;
}



/* ===== <EXTERNAL>::av_log_set_level @ 00015c3c size=12 ===== */

void av_log_set_level(void)

{
  (*(code *)PTR_av_log_set_level_0005b11c)();
  return;
}



/* ===== <EXTERNAL>::avcodec_get_hw_config @ 00015c48 size=12 ===== */

void avcodec_get_hw_config(void)

{
  (*(code *)PTR_avcodec_get_hw_config_0005b120)();
  return;
}



/* ===== <EXTERNAL>::av_buffersink_get_format @ 00015c54 size=12 ===== */

void av_buffersink_get_format(void)

{
  (*(code *)PTR_av_buffersink_get_format_0005b124)();
  return;
}



/* ===== <EXTERNAL>::avio_read_to_bprint @ 00015c60 size=12 ===== */

void avio_read_to_bprint(void)

{
  (*(code *)PTR_avio_read_to_bprint_0005b128)();
  return;
}



/* ===== <EXTERNAL>::av_buffersink_get_sample_aspect_ratio @ 00015c6c size=12 ===== */

void av_buffersink_get_sample_aspect_ratio(void)

{
  (*(code *)PTR_av_buffersink_get_sample_aspect_ratio_0005b12c)();
  return;
}



/* ===== <EXTERNAL>::avfilter_get_class @ 00015c78 size=12 ===== */

void avfilter_get_class(void)

{
  (*(code *)PTR_avfilter_get_class_0005b130)();
  return;
}



/* ===== <EXTERNAL>::avformat_match_stream_specifier @ 00015c84 size=12 ===== */

void avformat_match_stream_specifier(void)

{
  (*(code *)PTR_avformat_match_stream_specifier_0005b134)();
  return;
}



/* ===== <EXTERNAL>::avformat_find_stream_info @ 00015c90 size=12 ===== */

void avformat_find_stream_info(void)

{
  (*(code *)PTR_avformat_find_stream_info_0005b138)();
  return;
}



/* ===== <EXTERNAL>::memset @ 00015c9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0005b13c)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::av_buffersink_get_type @ 00015ca8 size=12 ===== */

void av_buffersink_get_type(void)

{
  (*(code *)PTR_av_buffersink_get_type_0005b140)();
  return;
}



/* ===== <EXTERNAL>::av_frame_move_ref @ 00015cb4 size=12 ===== */

void av_frame_move_ref(void)

{
  (*(code *)PTR_av_frame_move_ref_0005b144)();
  return;
}



/* ===== <EXTERNAL>::av_strdup @ 00015cc0 size=12 ===== */

void av_strdup(void)

{
  (*(code *)PTR_av_strdup_0005b148)();
  return;
}



/* ===== <EXTERNAL>::av_frame_get_buffer @ 00015ccc size=12 ===== */

void av_frame_get_buffer(void)

{
  (*(code *)PTR_av_frame_get_buffer_0005b14c)();
  return;
}



/* ===== <EXTERNAL>::av_memdup @ 00015cd8 size=12 ===== */

void av_memdup(void)

{
  (*(code *)PTR_av_memdup_0005b150)();
  return;
}



/* ===== <EXTERNAL>::avcodec_parameters_alloc @ 00015ce4 size=12 ===== */

void avcodec_parameters_alloc(void)

{
  (*(code *)PTR_avcodec_parameters_alloc_0005b154)();
  return;
}



/* ===== <EXTERNAL>::avio_enum_protocols @ 00015cf0 size=12 ===== */

void avio_enum_protocols(void)

{
  (*(code *)PTR_avio_enum_protocols_0005b158)();
  return;
}



/* ===== <EXTERNAL>::avfilter_init_str @ 00015cfc size=12 ===== */

void avfilter_init_str(void)

{
  (*(code *)PTR_avfilter_init_str_0005b15c)();
  return;
}



/* ===== <EXTERNAL>::av_frame_alloc @ 00015d08 size=12 ===== */

void av_frame_alloc(void)

{
  (*(code *)PTR_av_frame_alloc_0005b160)();
  return;
}



/* ===== <EXTERNAL>::av_buffer_ref @ 00015d14 size=12 ===== */

void av_buffer_ref(void)

{
  (*(code *)PTR_av_buffer_ref_0005b164)();
  return;
}



/* ===== <EXTERNAL>::avio_read @ 00015d20 size=12 ===== */

void avio_read(void)

{
  (*(code *)PTR_avio_read_0005b168)();
  return;
}



/* ===== <EXTERNAL>::avcodec_encode_subtitle @ 00015d2c size=12 ===== */

void avcodec_encode_subtitle(void)

{
  (*(code *)PTR_avcodec_encode_subtitle_0005b16c)();
  return;
}



/* ===== <EXTERNAL>::av_packet_alloc @ 00015d38 size=12 ===== */

void av_packet_alloc(void)

{
  (*(code *)PTR_av_packet_alloc_0005b170)();
  return;
}



/* ===== <EXTERNAL>::av_fifo_write @ 00015d44 size=12 ===== */

void av_fifo_write(void)

{
  (*(code *)PTR_av_fifo_write_0005b174)();
  return;
}



/* ===== <EXTERNAL>::avdevice_register_all @ 00015d50 size=12 ===== */

void avdevice_register_all(void)

{
  (*(code *)PTR_avdevice_register_all_0005b178)();
  return;
}



/* ===== <EXTERNAL>::memmove @ 00015d5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0005b17c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::av_expr_free @ 00015d68 size=12 ===== */

void av_expr_free(void)

{
  (*(code *)PTR_av_expr_free_0005b180)();
  return;
}



/* ===== <EXTERNAL>::avformat_alloc_output_context2 @ 00015d74 size=12 ===== */

void avformat_alloc_output_context2(void)

{
  (*(code *)PTR_avformat_alloc_output_context2_0005b184)();
  return;
}



/* ===== <EXTERNAL>::av_dict_set @ 00015d80 size=12 ===== */

void av_dict_set(void)

{
  (*(code *)PTR_av_dict_set_0005b188)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 00015d8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_0005b18c)(__th);
  return iVar1;
}



/* ===== <EXTERNAL>::fflush @ 00015d98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_0005b190)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::round @ 00015da4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double round(double __x)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_round_0005b194)(SUB84(__x,0));
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== <EXTERNAL>::av_get_bits_per_pixel @ 00015db0 size=12 ===== */

void av_get_bits_per_pixel(void)

{
  (*(code *)PTR_av_get_bits_per_pixel_0005b198)();
  return;
}



/* ===== <EXTERNAL>::strncmp @ 00015dbc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0005b19c)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::avformat_transfer_internal_stream_timing_info @ 00015dc8 size=12 ===== */

void avformat_transfer_internal_stream_timing_info(void)

{
  (*(code *)PTR_avformat_transfer_internal_stream_timing_info_0005b1a0)();
  return;
}



/* ===== <EXTERNAL>::av_rescale @ 00015dd4 size=12 ===== */

void av_rescale(void)

{
  (*(code *)PTR_av_rescale_0005b1a4)();
  return;
}



/* ===== <EXTERNAL>::av_strlcatf @ 00015de0 size=12 ===== */

void av_strlcatf(void)

{
  (*(code *)PTR_av_strlcatf_0005b1a8)();
  return;
}



/* ===== <EXTERNAL>::avcodec_free_context @ 00015dec size=12 ===== */

void avcodec_free_context(void)

{
  (*(code *)PTR_avcodec_free_context_0005b1ac)();
  return;
}



/* ===== <EXTERNAL>::av_opt_eval_flags @ 00015df8 size=12 ===== */

void av_opt_eval_flags(void)

{
  (*(code *)PTR_av_opt_eval_flags_0005b1b0)();
  return;
}



/* ===== <EXTERNAL>::av_get_token @ 00015e04 size=12 ===== */

void av_get_token(void)

{
  (*(code *)PTR_av_get_token_0005b1b4)();
  return;
}



/* ===== <EXTERNAL>::avio_open2 @ 00015e10 size=12 ===== */

void avio_open2(void)

{
  (*(code *)PTR_avio_open2_0005b1b8)();
  return;
}



/* ===== <EXTERNAL>::av_opt_eval_int @ 00015e1c size=12 ===== */

void av_opt_eval_int(void)

{
  (*(code *)PTR_av_opt_eval_int_0005b1bc)();
  return;
}



/* ===== <EXTERNAL>::av_demuxer_iterate @ 00015e28 size=12 ===== */

void av_demuxer_iterate(void)

{
  (*(code *)PTR_av_demuxer_iterate_0005b1c0)();
  return;
}



/* ===== <EXTERNAL>::strrchr @ 00015e34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_0005b1c4)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::sws_isSupportedInput @ 00015e40 size=12 ===== */

void sws_isSupportedInput(void)

{
  (*(code *)PTR_sws_isSupportedInput_0005b1c8)();
  return;
}



/* ===== <EXTERNAL>::avcodec_find_decoder @ 00015e4c size=12 ===== */

void avcodec_find_decoder(void)

{
  (*(code *)PTR_avcodec_find_decoder_0005b1cc)();
  return;
}



/* ===== <EXTERNAL>::av_guess_frame_rate @ 00015e58 size=12 ===== */

void av_guess_frame_rate(void)

{
  (*(code *)PTR_av_guess_frame_rate_0005b1d0)();
  return;
}



/* ===== <EXTERNAL>::av_hwframe_transfer_data @ 00015e64 size=12 ===== */

void av_hwframe_transfer_data(void)

{
  (*(code *)PTR_av_hwframe_transfer_data_0005b1d4)();
  return;
}



/* ===== <EXTERNAL>::av_mul_q @ 00015e70 size=12 ===== */

void av_mul_q(void)

{
  (*(code *)PTR_av_mul_q_0005b1d8)();
  return;
}



/* ===== <EXTERNAL>::av_buffersrc_add_frame_flags @ 00015e7c size=12 ===== */

void av_buffersrc_add_frame_flags(void)

{
  (*(code *)PTR_av_buffersrc_add_frame_flags_0005b1dc)();
  return;
}



/* ===== <EXTERNAL>::pthread_create @ 00015e88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0005b1e0)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::av_hwdevice_ctx_create_derived @ 00015e94 size=12 ===== */

void av_hwdevice_ctx_create_derived(void)

{
  (*(code *)PTR_av_hwdevice_ctx_create_derived_0005b1e4)();
  return;
}



/* ===== <EXTERNAL>::fclose @ 00015ea0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_0005b1e8)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::av_bsf_receive_packet @ 00015eac size=12 ===== */

void av_bsf_receive_packet(void)

{
  (*(code *)PTR_av_bsf_receive_packet_0005b1ec)();
  return;
}



/* ===== <EXTERNAL>::av_display_rotation_set @ 00015eb8 size=12 ===== */

void av_display_rotation_set(void)

{
  (*(code *)PTR_av_display_rotation_set_0005b1f0)();
  return;
}



/* ===== <EXTERNAL>::avfilter_graph_set_auto_convert @ 00015ec4 size=12 ===== */

void avfilter_graph_set_auto_convert(void)

{
  (*(code *)PTR_avfilter_graph_set_auto_convert_0005b1f4)();
  return;
}



/* ===== <EXTERNAL>::av_bsf_iterate @ 00015ed0 size=12 ===== */

void av_bsf_iterate(void)

{
  (*(code *)PTR_av_bsf_iterate_0005b1f8)();
  return;
}



/* ===== <EXTERNAL>::av_read_frame @ 00015edc size=12 ===== */

void av_read_frame(void)

{
  (*(code *)PTR_av_read_frame_0005b1fc)();
  return;
}



/* ===== <EXTERNAL>::av_fifo_can_read @ 00015ee8 size=12 ===== */

void av_fifo_can_read(void)

{
  (*(code *)PTR_av_fifo_can_read_0005b200)();
  return;
}



/* ===== <EXTERNAL>::av_channel_name @ 00015ef4 size=12 ===== */

void av_channel_name(void)

{
  (*(code *)PTR_av_channel_name_0005b204)();
  return;
}



/* ===== <EXTERNAL>::avcodec_close @ 00015f00 size=12 ===== */

void avcodec_close(void)

{
  (*(code *)PTR_avcodec_close_0005b208)();
  return;
}



/* ===== <EXTERNAL>::av_parse_video_size @ 00015f0c size=12 ===== */

void av_parse_video_size(void)

{
  (*(code *)PTR_av_parse_video_size_0005b20c)();
  return;
}



/* ===== <EXTERNAL>::av_buffersink_get_frame_rate @ 00015f18 size=12 ===== */

void av_buffersink_get_frame_rate(void)

{
  (*(code *)PTR_av_buffersink_get_frame_rate_0005b210)();
  return;
}



/* ===== <EXTERNAL>::av_frame_unref @ 00015f24 size=12 ===== */

void av_frame_unref(void)

{
  (*(code *)PTR_av_frame_unref_0005b214)();
  return;
}



/* ===== <EXTERNAL>::av_output_audio_device_next @ 00015f30 size=12 ===== */

void av_output_audio_device_next(void)

{
  (*(code *)PTR_av_output_audio_device_next_0005b218)();
  return;
}



/* ===== <EXTERNAL>::avcodec_descriptor_get_by_name @ 00015f3c size=12 ===== */

void avcodec_descriptor_get_by_name(void)

{
  (*(code *)PTR_avcodec_descriptor_get_by_name_0005b21c)();
  return;
}



/* ===== <EXTERNAL>::av_bprint_clear @ 00015f48 size=12 ===== */

void av_bprint_clear(void)

{
  (*(code *)PTR_av_bprint_clear_0005b220)();
  return;
}



/* ===== <EXTERNAL>::av_find_input_format @ 00015f54 size=12 ===== */

void av_find_input_format(void)

{
  (*(code *)PTR_av_find_input_format_0005b224)();
  return;
}



/* ===== <EXTERNAL>::av_bprint_finalize @ 00015f60 size=12 ===== */

void av_bprint_finalize(void)

{
  (*(code *)PTR_av_bprint_finalize_0005b228)();
  return;
}



/* ===== <EXTERNAL>::avcodec_flush_buffers @ 00015f6c size=12 ===== */

void avcodec_flush_buffers(void)

{
  (*(code *)PTR_avcodec_flush_buffers_0005b22c)();
  return;
}



/* ===== <EXTERNAL>::log10 @ 00015f78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double log10(double __x)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_log10_0005b230)(SUB84(__x,0));
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== <EXTERNAL>::av_bsf_send_packet @ 00015f84 size=12 ===== */

void av_bsf_send_packet(void)

{
  (*(code *)PTR_av_bsf_send_packet_0005b234)();
  return;
}



/* ===== <EXTERNAL>::avcodec_receive_packet @ 00015f90 size=12 ===== */

void avcodec_receive_packet(void)

{
  (*(code *)PTR_avcodec_receive_packet_0005b238)();
  return;
}



/* ===== <EXTERNAL>::avio_close @ 00015f9c size=12 ===== */

void avio_close(void)

{
  (*(code *)PTR_avio_close_0005b23c)();
  return;
}



/* ===== <EXTERNAL>::avformat_open_input @ 00015fa8 size=12 ===== */

void avformat_open_input(void)

{
  (*(code *)PTR_avformat_open_input_0005b240)();
  return;
}



/* ===== <EXTERNAL>::av_bprint_init @ 00015fb4 size=12 ===== */

void av_bprint_init(void)

{
  (*(code *)PTR_av_bprint_init_0005b244)();
  return;
}



/* ===== <EXTERNAL>::strstr @ 00015fc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_0005b248)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::av_filter_iterate @ 00015fcc size=12 ===== */

void av_filter_iterate(void)

{
  (*(code *)PTR_av_filter_iterate_0005b24c)();
  return;
}



/* ===== <EXTERNAL>::avformat_get_class @ 00015fd8 size=12 ===== */

void avformat_get_class(void)

{
  (*(code *)PTR_avformat_get_class_0005b250)();
  return;
}



/* ===== <EXTERNAL>::vfprintf @ 00015fe4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vfprintf_0005b254)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::av_buffersink_get_ch_layout @ 00015ff0 size=12 ===== */

void av_buffersink_get_ch_layout(void)

{
  (*(code *)PTR_av_buffersink_get_ch_layout_0005b258)();
  return;
}



/* ===== <EXTERNAL>::avcodec_find_encoder_by_name @ 00015ffc size=12 ===== */

void avcodec_find_encoder_by_name(void)

{
  (*(code *)PTR_avcodec_find_encoder_by_name_0005b25c)();
  return;
}



/* ===== <EXTERNAL>::av_bsf_get_by_name @ 00016008 size=12 ===== */

void av_bsf_get_by_name(void)

{
  (*(code *)PTR_av_bsf_get_by_name_0005b260)();
  return;
}



/* ===== <EXTERNAL>::av_log2 @ 00016014 size=12 ===== */

void av_log2(void)

{
  (*(code *)PTR_av_log2_0005b264)();
  return;
}



/* ===== <EXTERNAL>::avio_check @ 00016020 size=12 ===== */

void avio_check(void)

{
  (*(code *)PTR_avio_check_0005b268)();
  return;
}



/* ===== <EXTERNAL>::avcodec_get_class @ 0001602c size=12 ===== */

void avcodec_get_class(void)

{
  (*(code *)PTR_avcodec_get_class_0005b26c)();
  return;
}



/* ===== <EXTERNAL>::av_strstart @ 00016038 size=12 ===== */

void av_strstart(void)

{
  (*(code *)PTR_av_strstart_0005b270)();
  return;
}



/* ===== <EXTERNAL>::avdevice_free_list_devices @ 00016044 size=12 ===== */

void avdevice_free_list_devices(void)

{
  (*(code *)PTR_avdevice_free_list_devices_0005b274)();
  return;
}



/* ===== <EXTERNAL>::av_reduce @ 00016050 size=12 ===== */

void av_reduce(void)

{
  (*(code *)PTR_av_reduce_0005b278)();
  return;
}



/* ===== <EXTERNAL>::av_muxer_iterate @ 0001605c size=12 ===== */

void av_muxer_iterate(void)

{
  (*(code *)PTR_av_muxer_iterate_0005b27c)();
  return;
}



/* ===== <EXTERNAL>::av_dict_free @ 00016068 size=12 ===== */

void av_dict_free(void)

{
  (*(code *)PTR_av_dict_free_0005b280)();
  return;
}



/* ===== <EXTERNAL>::perror @ 00016074 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_0005b284)(__s);
  return;
}



/* ===== <EXTERNAL>::avio_find_protocol_name @ 00016080 size=12 ===== */

void avio_find_protocol_name(void)

{
  (*(code *)PTR_avio_find_protocol_name_0005b288)();
  return;
}



/* ===== <EXTERNAL>::av_buffersink_get_hw_frames_ctx @ 0001608c size=12 ===== */

void av_buffersink_get_hw_frames_ctx(void)

{
  (*(code *)PTR_av_buffersink_get_hw_frames_ctx_0005b28c)();
  return;
}



/* ===== <EXTERNAL>::avutil_version @ 00016098 size=12 ===== */

void avutil_version(void)

{
  (*(code *)PTR_avutil_version_0005b290)();
  return;
}



/* ===== <EXTERNAL>::avfilter_filter_pad_count @ 000160a4 size=12 ===== */

void avfilter_filter_pad_count(void)

{
  (*(code *)PTR_avfilter_filter_pad_count_0005b294)();
  return;
}



/* ===== <EXTERNAL>::avcodec_parameters_copy @ 000160b0 size=12 ===== */

void avcodec_parameters_copy(void)

{
  (*(code *)PTR_avcodec_parameters_copy_0005b298)();
  return;
}



/* ===== <EXTERNAL>::strchr @ 000160bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_0005b29c)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::llrint @ 000160c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

longlong llrint(double __x)

{
  longlong lVar1;
  
  lVar1 = (*(code *)PTR_llrint_0005b2a0)(SUB84(__x,0));
  return lVar1;
}



/* ===== <EXTERNAL>::avcodec_get_name @ 000160d4 size=12 ===== */

void avcodec_get_name(void)

{
  (*(code *)PTR_avcodec_get_name_0005b2a4)();
  return;
}



/* ===== <EXTERNAL>::av_bsf_list_parse_str @ 000160e0 size=12 ===== */

void av_bsf_list_parse_str(void)

{
  (*(code *)PTR_av_bsf_list_parse_str_0005b2a8)();
  return;
}



/* ===== <EXTERNAL>::avfilter_graph_config @ 000160ec size=12 ===== */

void avfilter_graph_config(void)

{
  (*(code *)PTR_avfilter_graph_config_0005b2ac)();
  return;
}



/* ===== <EXTERNAL>::av_channel_layout_from_string @ 000160f8 size=12 ===== */

void av_channel_layout_from_string(void)

{
  (*(code *)PTR_av_channel_layout_from_string_0005b2b0)();
  return;
}



/* ===== <EXTERNAL>::av_buffersink_get_time_base @ 00016104 size=12 ===== */

void av_buffersink_get_time_base(void)

{
  (*(code *)PTR_av_buffersink_get_time_base_0005b2b4)();
  return;
}



/* ===== <EXTERNAL>::av_codec_get_id @ 00016110 size=12 ===== */

void av_codec_get_id(void)

{
  (*(code *)PTR_av_codec_get_id_0005b2b8)();
  return;
}



/* ===== <EXTERNAL>::avfilter_graph_create_filter @ 0001611c size=12 ===== */

void avfilter_graph_create_filter(void)

{
  (*(code *)PTR_avfilter_graph_create_filter_0005b2bc)();
  return;
}



/* ===== <EXTERNAL>::av_malloc_array @ 00016128 size=12 ===== */

void av_malloc_array(void)

{
  (*(code *)PTR_av_malloc_array_0005b2c0)();
  return;
}



/* ===== <EXTERNAL>::avfilter_graph_alloc @ 00016134 size=12 ===== */

void avfilter_graph_alloc(void)

{
  (*(code *)PTR_avfilter_graph_alloc_0005b2c4)();
  return;
}



/* ===== <EXTERNAL>::av_dict_copy @ 00016140 size=12 ===== */

void av_dict_copy(void)

{
  (*(code *)PTR_av_dict_copy_0005b2c8)();
  return;
}



/* ===== <EXTERNAL>::av_buffersrc_get_nb_failed_requests @ 0001614c size=12 ===== */

void av_buffersrc_get_nb_failed_requests(void)

{
  (*(code *)PTR_av_buffersrc_get_nb_failed_requests_0005b2cc)();
  return;
}



/* ===== <EXTERNAL>::av_stream_get_codec_timebase @ 00016158 size=12 ===== */

void av_stream_get_codec_timebase(void)

{
  (*(code *)PTR_av_stream_get_codec_timebase_0005b2d0)();
  return;
}



/* ===== <EXTERNAL>::av_thread_message_queue_send @ 00016164 size=12 ===== */

void av_thread_message_queue_send(void)

{
  (*(code *)PTR_av_thread_message_queue_send_0005b2d4)();
  return;
}



/* ===== <EXTERNAL>::avio_write @ 00016170 size=12 ===== */

void avio_write(void)

{
  (*(code *)PTR_avio_write_0005b2d8)();
  return;
}



/* ===== <EXTERNAL>::av_interleaved_write_frame @ 0001617c size=12 ===== */

void av_interleaved_write_frame(void)

{
  (*(code *)PTR_av_interleaved_write_frame_0005b2dc)();
  return;
}



/* ===== <EXTERNAL>::av_bsf_init @ 00016188 size=12 ===== */

void av_bsf_init(void)

{
  (*(code *)PTR_av_bsf_init_0005b2e0)();
  return;
}



/* ===== <EXTERNAL>::printf @ 00016194 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0005b2e4)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen64 @ 000161a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_0005b2e8)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::lrintf @ 000161ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long lrintf(float __x)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_lrintf_0005b2ec)();
  return lVar1;
}



/* ===== <EXTERNAL>::av_opt_set @ 000161b8 size=12 ===== */

void av_opt_set(void)

{
  (*(code *)PTR_av_opt_set_0005b2f0)();
  return;
}



/* ===== <EXTERNAL>::av_packet_rescale_ts @ 000161c4 size=12 ===== */

void av_packet_rescale_ts(void)

{
  (*(code *)PTR_av_packet_rescale_ts_0005b2f4)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 000161d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0005b2f8)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::av_thread_message_queue_alloc @ 000161dc size=12 ===== */

void av_thread_message_queue_alloc(void)

{
  (*(code *)PTR_av_thread_message_queue_alloc_0005b2fc)();
  return;
}



/* ===== <EXTERNAL>::avdevice_version @ 000161e8 size=12 ===== */

void avdevice_version(void)

{
  (*(code *)PTR_avdevice_version_0005b300)();
  return;
}



/* ===== <EXTERNAL>::av_reallocp_array @ 000161f4 size=12 ===== */

void av_reallocp_array(void)

{
  (*(code *)PTR_av_reallocp_array_0005b304)();
  return;
}



/* ===== <EXTERNAL>::avformat_write_header @ 00016200 size=12 ===== */

void avformat_write_header(void)

{
  (*(code *)PTR_avformat_write_header_0005b308)();
  return;
}



/* ===== <EXTERNAL>::av_stream_new_side_data @ 0001620c size=12 ===== */

void av_stream_new_side_data(void)

{
  (*(code *)PTR_av_stream_new_side_data_0005b30c)();
  return;
}



/* ===== <EXTERNAL>::av_strndup @ 00016218 size=12 ===== */

void av_strndup(void)

{
  (*(code *)PTR_av_strndup_0005b310)();
  return;
}



/* ===== <EXTERNAL>::fgetc @ 00016224 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fgetc(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fgetc_0005b314)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::av_get_pix_fmt_name @ 00016230 size=12 ===== */

void av_get_pix_fmt_name(void)

{
  (*(code *)PTR_av_get_pix_fmt_name_0005b318)();
  return;
}



/* ===== <EXTERNAL>::putchar @ 0001623c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0005b31c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::avcodec_alloc_context3 @ 00016248 size=12 ===== */

void avcodec_alloc_context3(void)

{
  (*(code *)PTR_avcodec_alloc_context3_0005b320)();
  return;
}



/* ===== <EXTERNAL>::avcodec_descriptor_get @ 00016254 size=12 ===== */

void avcodec_descriptor_get(void)

{
  (*(code *)PTR_avcodec_descriptor_get_0005b324)();
  return;
}



/* ===== <EXTERNAL>::avfilter_inout_free @ 00016260 size=12 ===== */

void avfilter_inout_free(void)

{
  (*(code *)PTR_avfilter_inout_free_0005b328)();
  return;
}



/* ===== <EXTERNAL>::avio_flush @ 0001626c size=12 ===== */

void avio_flush(void)

{
  (*(code *)PTR_avio_flush_0005b32c)();
  return;
}



/* ===== <EXTERNAL>::av_max_alloc @ 00016278 size=12 ===== */

void av_max_alloc(void)

{
  (*(code *)PTR_av_max_alloc_0005b330)();
  return;
}



/* ===== <EXTERNAL>::av_channel_layout_describe_bprint @ 00016284 size=12 ===== */

void av_channel_layout_describe_bprint(void)

{
  (*(code *)PTR_av_channel_layout_describe_bprint_0005b334)();
  return;
}



/* ===== <EXTERNAL>::av_get_sample_fmt_string @ 00016290 size=12 ===== */

void av_get_sample_fmt_string(void)

{
  (*(code *)PTR_av_get_sample_fmt_string_0005b338)();
  return;
}



/* ===== <EXTERNAL>::avcodec_find_decoder_by_name @ 0001629c size=12 ===== */

void avcodec_find_decoder_by_name(void)

{
  (*(code *)PTR_avcodec_find_decoder_by_name_0005b33c)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000162a8 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0005b340)();
  return;
}



/* ===== <EXTERNAL>::av_get_pix_fmt @ 000162b4 size=12 ===== */

void av_get_pix_fmt(void)

{
  (*(code *)PTR_av_get_pix_fmt_0005b344)();
  return;
}



/* ===== <EXTERNAL>::av_realloc_array @ 000162c0 size=12 ===== */

void av_realloc_array(void)

{
  (*(code *)PTR_av_realloc_array_0005b348)();
  return;
}



/* ===== <EXTERNAL>::exit @ 000162cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0005b34c)(__status);
  return;
}



/* ===== <EXTERNAL>::raise @ 000162d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_0005b350)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::avcodec_receive_frame @ 000162e4 size=12 ===== */

void avcodec_receive_frame(void)

{
  (*(code *)PTR_avcodec_receive_frame_0005b354)();
  return;
}



/* ===== <EXTERNAL>::av_default_item_name @ 000162f0 size=12 ===== */

void av_default_item_name(void)

{
  (*(code *)PTR_av_default_item_name_0005b358)();
  return;
}



/* ===== <EXTERNAL>::av_channel_layout_describe @ 000162fc size=12 ===== */

void av_channel_layout_describe(void)

{
  (*(code *)PTR_av_channel_layout_describe_0005b35c)();
  return;
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00016308 size=12 ===== */

void __fputc_unlocked(void)

{
  (*(code *)PTR___fputc_unlocked_0005b360)();
  return;
}



/* ===== <EXTERNAL>::av_free @ 00016314 size=12 ===== */

void av_free(void)

{
  (*(code *)PTR_av_free_0005b364)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00016320 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0005b368)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::av_opt_get_key_value @ 0001632c size=12 ===== */

void av_opt_get_key_value(void)

{
  (*(code *)PTR_av_opt_get_key_value_0005b36c)();
  return;
}



/* ===== <EXTERNAL>::floor @ 00016338 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double floor(double __x)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_floor_0005b370)(SUB84(__x,0));
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== <EXTERNAL>::av_strtok @ 00016344 size=12 ===== */

void av_strtok(void)

{
  (*(code *)PTR_av_strtok_0005b374)();
  return;
}



/* ===== <EXTERNAL>::avfilter_pad_get_name @ 00016350 size=12 ===== */

void avfilter_pad_get_name(void)

{
  (*(code *)PTR_avfilter_pad_get_name_0005b378)();
  return;
}



/* ===== <EXTERNAL>::av_buffersink_get_h @ 0001635c size=12 ===== */

void av_buffersink_get_h(void)

{
  (*(code *)PTR_av_buffersink_get_h_0005b37c)();
  return;
}



/* ===== <EXTERNAL>::tcgetattr @ 00016368 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcgetattr(int __fd,termios *__termios_p)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_tcgetattr_0005b380)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::av_fifo_can_write @ 00016374 size=12 ===== */

void av_fifo_can_write(void)

{
  (*(code *)PTR_av_fifo_can_write_0005b384)();
  return;
}



/* ===== <EXTERNAL>::av_strlcat @ 00016380 size=12 ===== */

void av_strlcat(void)

{
  (*(code *)PTR_av_strlcat_0005b388)();
  return;
}



/* ===== <EXTERNAL>::av_rescale_q_rnd @ 0001638c size=12 ===== */

void av_rescale_q_rnd(void)

{
  (*(code *)PTR_av_rescale_q_rnd_0005b38c)();
  return;
}



/* ===== <EXTERNAL>::av_channel_layout_index_from_channel @ 00016398 size=12 ===== */

void av_channel_layout_index_from_channel(void)

{
  (*(code *)PTR_av_channel_layout_index_from_channel_0005b390)();
  return;
}



/* ===== <EXTERNAL>::fgets @ 000163a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_0005b394)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::av_opt_show2 @ 000163b0 size=12 ===== */

void av_opt_show2(void)

{
  (*(code *)PTR_av_opt_show2_0005b398)();
  return;
}



/* ===== <EXTERNAL>::avfilter_graph_queue_command @ 000163bc size=12 ===== */

void avfilter_graph_queue_command(void)

{
  (*(code *)PTR_avfilter_graph_queue_command_0005b39c)();
  return;
}



/* ===== <EXTERNAL>::av_input_audio_device_next @ 000163c8 size=12 ===== */

void av_input_audio_device_next(void)

{
  (*(code *)PTR_av_input_audio_device_next_0005b3a0)();
  return;
}



/* ===== <EXTERNAL>::av_channel_layout_copy @ 000163d4 size=12 ===== */

void av_channel_layout_copy(void)

{
  (*(code *)PTR_av_channel_layout_copy_0005b3a4)();
  return;
}



/* ===== <EXTERNAL>::av_bsf_free @ 000163e0 size=12 ===== */

void av_bsf_free(void)

{
  (*(code *)PTR_av_bsf_free_0005b3a8)();
  return;
}



/* ===== <EXTERNAL>::av_stream_get_parser @ 000163ec size=12 ===== */

void av_stream_get_parser(void)

{
  (*(code *)PTR_av_stream_get_parser_0005b3ac)();
  return;
}



/* ===== <EXTERNAL>::av_usleep @ 000163f8 size=12 ===== */

void av_usleep(void)

{
  (*(code *)PTR_av_usleep_0005b3b0)();
  return;
}



/* ===== <EXTERNAL>::avcodec_send_packet @ 00016404 size=12 ===== */

void avcodec_send_packet(void)

{
  (*(code *)PTR_avcodec_send_packet_0005b3b4)();
  return;
}



/* ===== <EXTERNAL>::avfilter_get_by_name @ 00016410 size=12 ===== */

void avfilter_get_by_name(void)

{
  (*(code *)PTR_avfilter_get_by_name_0005b3b8)();
  return;
}



/* ===== <EXTERNAL>::av_freep @ 0001641c size=12 ===== */

void av_freep(void)

{
  (*(code *)PTR_av_freep_0005b3bc)();
  return;
}



/* ===== <EXTERNAL>::gmtime @ 00016428 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * gmtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_gmtime_0005b3c0)(__timer);
  return ptVar1;
}



/* ===== <EXTERNAL>::av_strcasecmp @ 00016434 size=12 ===== */

void av_strcasecmp(void)

{
  (*(code *)PTR_av_strcasecmp_0005b3c4)();
  return;
}



/* ===== <EXTERNAL>::avfilter_link @ 00016440 size=12 ===== */

void avfilter_link(void)

{
  (*(code *)PTR_avfilter_link_0005b3c8)();
  return;
}



/* ===== <EXTERNAL>::av_get_cpu_flags @ 0001644c size=12 ===== */

void av_get_cpu_flags(void)

{
  (*(code *)PTR_av_get_cpu_flags_0005b3cc)();
  return;
}



/* ===== <EXTERNAL>::av_realloc_f @ 00016458 size=12 ===== */

void av_realloc_f(void)

{
  (*(code *)PTR_av_realloc_f_0005b3d0)();
  return;
}



/* ===== <EXTERNAL>::av_dict_set_int @ 00016464 size=12 ===== */

void av_dict_set_int(void)

{
  (*(code *)PTR_av_dict_set_int_0005b3d4)();
  return;
}



/* ===== <EXTERNAL>::llrintf @ 00016470 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

longlong llrintf(float __x)

{
  longlong lVar1;
  
  lVar1 = (*(code *)PTR_llrintf_0005b3d8)();
  return lVar1;
}



/* ===== <EXTERNAL>::av_packet_get_side_data @ 0001647c size=12 ===== */

void av_packet_get_side_data(void)

{
  (*(code *)PTR_av_packet_get_side_data_0005b3dc)();
  return;
}



/* ===== <EXTERNAL>::av_parse_cpu_caps @ 00016488 size=12 ===== */

void av_parse_cpu_caps(void)

{
  (*(code *)PTR_av_parse_cpu_caps_0005b3e0)();
  return;
}



/* ===== <EXTERNAL>::av_output_video_device_next @ 00016494 size=12 ===== */

void av_output_video_device_next(void)

{
  (*(code *)PTR_av_output_video_device_next_0005b3e4)();
  return;
}



/* ===== <EXTERNAL>::av_opt_set_dict @ 000164a0 size=12 ===== */

void av_opt_set_dict(void)

{
  (*(code *)PTR_av_opt_set_dict_0005b3e8)();
  return;
}



/* ===== <EXTERNAL>::av_opt_child_class_iterate @ 000164ac size=12 ===== */

void av_opt_child_class_iterate(void)

{
  (*(code *)PTR_av_opt_child_class_iterate_0005b3ec)();
  return;
}



/* ===== <EXTERNAL>::av_new_program @ 000164b8 size=12 ===== */

void av_new_program(void)

{
  (*(code *)PTR_av_new_program_0005b3f0)();
  return;
}



/* ===== <EXTERNAL>::av_pix_fmt_desc_get_id @ 000164c4 size=12 ===== */

void av_pix_fmt_desc_get_id(void)

{
  (*(code *)PTR_av_pix_fmt_desc_get_id_0005b3f4)();
  return;
}



/* ===== <EXTERNAL>::setrlimit64 @ 000164d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */

int setrlimit64(__rlimit_resource_t __resource,rlimit64 *__rlimits)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setrlimit64_0005b3f8)(__resource);
  return iVar1;
}



/* ===== <EXTERNAL>::av_packet_unref @ 000164dc size=12 ===== */

void av_packet_unref(void)

{
  (*(code *)PTR_av_packet_unref_0005b3fc)();
  return;
}



/* ===== <EXTERNAL>::avcodec_descriptor_next @ 000164e8 size=12 ===== */

void avcodec_descriptor_next(void)

{
  (*(code *)PTR_avcodec_descriptor_next_0005b400)();
  return;
}



/* ===== <EXTERNAL>::avutil_configuration @ 000164f4 size=12 ===== */

void avutil_configuration(void)

{
  (*(code *)PTR_avutil_configuration_0005b404)();
  return;
}



/* ===== <EXTERNAL>::swresample_configuration @ 00016500 size=12 ===== */

void swresample_configuration(void)

{
  (*(code *)PTR_swresample_configuration_0005b408)();
  return;
}



/* ===== <EXTERNAL>::av_packet_free @ 0001650c size=12 ===== */

void av_packet_free(void)

{
  (*(code *)PTR_av_packet_free_0005b40c)();
  return;
}



/* ===== <EXTERNAL>::read @ 00016518 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_0005b410)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::avformat_alloc_context @ 00016524 size=12 ===== */

void avformat_alloc_context(void)

{
  (*(code *)PTR_avformat_alloc_context_0005b414)();
  return;
}



/* ===== <EXTERNAL>::av_bsf_get_class @ 00016530 size=12 ===== */

void av_bsf_get_class(void)

{
  (*(code *)PTR_av_bsf_get_class_0005b418)();
  return;
}



/* ===== <EXTERNAL>::avfilter_version @ 0001653c size=12 ===== */

void avfilter_version(void)

{
  (*(code *)PTR_avfilter_version_0005b41c)();
  return;
}



/* ===== <EXTERNAL>::av_strlcpy @ 00016548 size=12 ===== */

void av_strlcpy(void)

{
  (*(code *)PTR_av_strlcpy_0005b420)();
  return;
}



/* ===== <EXTERNAL>::av_dict_get @ 00016554 size=12 ===== */

void av_dict_get(void)

{
  (*(code *)PTR_av_dict_get_0005b424)();
  return;
}



/* ===== <EXTERNAL>::fputc @ 00016560 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_0005b428)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::av_get_bytes_per_sample @ 0001656c size=12 ===== */

void av_get_bytes_per_sample(void)

{
  (*(code *)PTR_av_get_bytes_per_sample_0005b42c)();
  return;
}



/* ===== <EXTERNAL>::av_buffersrc_close @ 00016578 size=12 ===== */

void av_buffersrc_close(void)

{
  (*(code *)PTR_av_buffersrc_close_0005b430)();
  return;
}



/* ===== <EXTERNAL>::avfilter_configuration @ 00016584 size=12 ===== */

void avfilter_configuration(void)

{
  (*(code *)PTR_avfilter_configuration_0005b434)();
  return;
}



/* ===== <EXTERNAL>::avfilter_graph_free @ 00016590 size=12 ===== */

void avfilter_graph_free(void)

{
  (*(code *)PTR_avfilter_graph_free_0005b438)();
  return;
}



/* ===== <EXTERNAL>::av_program_add_stream_index @ 0001659c size=12 ===== */

void av_program_add_stream_index(void)

{
  (*(code *)PTR_av_program_add_stream_index_0005b43c)();
  return;
}



/* ===== <EXTERNAL>::avdevice_list_output_sinks @ 000165a8 size=12 ===== */

void avdevice_list_output_sinks(void)

{
  (*(code *)PTR_avdevice_list_output_sinks_0005b440)();
  return;
}



/* ===== <EXTERNAL>::swscale_version @ 000165b4 size=12 ===== */

void swscale_version(void)

{
  (*(code *)PTR_swscale_version_0005b444)();
  return;
}



/* ===== <EXTERNAL>::av_get_exact_bits_per_sample @ 000165c0 size=12 ===== */

void av_get_exact_bits_per_sample(void)

{
  (*(code *)PTR_av_get_exact_bits_per_sample_0005b448)();
  return;
}



/* ===== <EXTERNAL>::av_fifo_grow2 @ 000165cc size=12 ===== */

void av_fifo_grow2(void)

{
  (*(code *)PTR_av_fifo_grow2_0005b44c)();
  return;
}



/* ===== <EXTERNAL>::av_frame_clone @ 000165d8 size=12 ===== */

void av_frame_clone(void)

{
  (*(code *)PTR_av_frame_clone_0005b450)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 000165e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0005b454)();
  return piVar1;
}



/* ===== <EXTERNAL>::avfilter_graph_alloc_filter @ 000165f0 size=12 ===== */

void avfilter_graph_alloc_filter(void)

{
  (*(code *)PTR_avfilter_graph_alloc_filter_0005b458)();
  return;
}



/* ===== <EXTERNAL>::av_pkt_dump_log2 @ 000165fc size=12 ===== */

void av_pkt_dump_log2(void)

{
  (*(code *)PTR_av_pkt_dump_log2_0005b45c)();
  return;
}



/* ===== <EXTERNAL>::avfilter_graph_request_oldest @ 00016608 size=12 ===== */

void avfilter_graph_request_oldest(void)

{
  (*(code *)PTR_avfilter_graph_request_oldest_0005b460)();
  return;
}



/* ===== <EXTERNAL>::av_opt_find @ 00016614 size=12 ===== */

void av_opt_find(void)

{
  (*(code *)PTR_av_opt_find_0005b464)();
  return;
}



/* ===== <EXTERNAL>::avfilter_graph_send_command @ 00016620 size=12 ===== */

void avfilter_graph_send_command(void)

{
  (*(code *)PTR_avfilter_graph_send_command_0005b468)();
  return;
}



/* ===== <EXTERNAL>::av_filename_number_test @ 0001662c size=12 ===== */

void av_filename_number_test(void)

{
  (*(code *)PTR_av_filename_number_test_0005b46c)();
  return;
}



/* ===== <EXTERNAL>::av_codec_iterate @ 00016638 size=12 ===== */

void av_codec_iterate(void)

{
  (*(code *)PTR_av_codec_iterate_0005b470)();
  return;
}



/* ===== <EXTERNAL>::av_display_rotation_get @ 00016644 size=12 ===== */

void av_display_rotation_get(void)

{
  (*(code *)PTR_av_display_rotation_get_0005b474)();
  return;
}



/* ===== <EXTERNAL>::av_guess_format @ 00016650 size=12 ===== */

void av_guess_format(void)

{
  (*(code *)PTR_av_guess_format_0005b478)();
  return;
}



/* ===== <EXTERNAL>::av_sdp_create @ 0001665c size=12 ===== */

void av_sdp_create(void)

{
  (*(code *)PTR_av_sdp_create_0005b47c)();
  return;
}



/* ===== <EXTERNAL>::av_thread_message_queue_recv @ 00016668 size=12 ===== */

void av_thread_message_queue_recv(void)

{
  (*(code *)PTR_av_thread_message_queue_recv_0005b480)();
  return;
}



/* ===== <EXTERNAL>::fputs @ 00016674 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_0005b484)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::av_log_get_level @ 00016680 size=12 ===== */

void av_log_get_level(void)

{
  (*(code *)PTR_av_log_get_level_0005b488)();
  return;
}



/* ===== <EXTERNAL>::vsnprintf @ 0001668c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsnprintf_0005b48c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::avcodec_parameters_to_context @ 00016698 size=12 ===== */

void avcodec_parameters_to_context(void)

{
  (*(code *)PTR_avcodec_parameters_to_context_0005b490)();
  return;
}



/* ===== <EXTERNAL>::avcodec_parameters_from_context @ 000166a4 size=12 ===== */

void avcodec_parameters_from_context(void)

{
  (*(code *)PTR_avcodec_parameters_from_context_0005b494)();
  return;
}



/* ===== <EXTERNAL>::avformat_close_input @ 000166b0 size=12 ===== */

void avformat_close_input(void)

{
  (*(code *)PTR_avformat_close_input_0005b498)();
  return;
}



/* ===== <EXTERNAL>::localtime @ 000166bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_localtime_0005b49c)(__timer);
  return ptVar1;
}



/* ===== <EXTERNAL>::av_dump_format @ 000166c8 size=12 ===== */

void av_dump_format(void)

{
  (*(code *)PTR_av_dump_format_0005b4a0)();
  return;
}



/* ===== <EXTERNAL>::av_buffersink_get_w @ 000166d4 size=12 ===== */

void av_buffersink_get_w(void)

{
  (*(code *)PTR_av_buffersink_get_w_0005b4a4)();
  return;
}



/* ===== <EXTERNAL>::avio_protocol_get_class @ 000166e0 size=12 ===== */

void avio_protocol_get_class(void)

{
  (*(code *)PTR_avio_protocol_get_class_0005b4a8)();
  return;
}



/* ===== <EXTERNAL>::avcodec_find_encoder @ 000166ec size=12 ===== */

void avcodec_find_encoder(void)

{
  (*(code *)PTR_avcodec_find_encoder_0005b4ac)();
  return;
}



/* ===== <EXTERNAL>::avfilter_graph_parse2 @ 000166f8 size=12 ===== */

void avfilter_graph_parse2(void)

{
  (*(code *)PTR_avfilter_graph_parse2_0005b4b0)();
  return;
}



/* ===== <EXTERNAL>::av_match_name @ 00016704 size=12 ===== */

void av_match_name(void)

{
  (*(code *)PTR_av_match_name_0005b4b4)();
  return;
}



/* ===== <EXTERNAL>::av_strerror @ 00016710 size=12 ===== */

void av_strerror(void)

{
  (*(code *)PTR_av_strerror_0005b4b8)();
  return;
}



/* ===== <EXTERNAL>::strftime @ 0001671c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strftime(char *__s,size_t __maxsize,char *__format,tm *__tp)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strftime_0005b4bc)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::avformat_query_codec @ 00016728 size=12 ===== */

void avformat_query_codec(void)

{
  (*(code *)PTR_avformat_query_codec_0005b4c0)();
  return;
}



/* ===== <EXTERNAL>::avio_print_string_array @ 00016734 size=12 ===== */

void avio_print_string_array(void)

{
  (*(code *)PTR_avio_print_string_array_0005b4c4)();
  return;
}



/* ===== <EXTERNAL>::__fgetc_unlocked @ 00016740 size=12 ===== */

void __fgetc_unlocked(void)

{
  (*(code *)PTR___fgetc_unlocked_0005b4c8)();
  return;
}



/* ===== <EXTERNAL>::avformat_seek_file @ 0001674c size=12 ===== */

void avformat_seek_file(void)

{
  (*(code *)PTR_avformat_seek_file_0005b4cc)();
  return;
}



/* ===== <EXTERNAL>::avio_size @ 00016758 size=12 ===== */

void avio_size(void)

{
  (*(code *)PTR_avio_size_0005b4d0)();
  return;
}



/* ===== <EXTERNAL>::avcodec_open2 @ 00016764 size=12 ===== */

void avcodec_open2(void)

{
  (*(code *)PTR_avcodec_open2_0005b4d4)();
  return;
}



/* ===== <EXTERNAL>::av_pix_fmt_desc_next @ 00016770 size=12 ===== */

void av_pix_fmt_desc_next(void)

{
  (*(code *)PTR_av_pix_fmt_desc_next_0005b4d8)();
  return;
}



/* ===== <EXTERNAL>::atoi @ 0001677c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_0005b4dc)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::av_find_best_pix_fmt_of_2 @ 00016788 size=12 ===== */

void av_find_best_pix_fmt_of_2(void)

{
  (*(code *)PTR_av_find_best_pix_fmt_of_2_0005b4e0)();
  return;
}



/* ===== <EXTERNAL>::avdevice_list_input_sources @ 00016794 size=12 ===== */

void avdevice_list_input_sources(void)

{
  (*(code *)PTR_avdevice_list_input_sources_0005b4e4)();
  return;
}



/* ===== <EXTERNAL>::av_opt_set_int @ 000167a0 size=12 ===== */

void av_opt_set_int(void)

{
  (*(code *)PTR_av_opt_set_int_0005b4e8)();
  return;
}



/* ===== <EXTERNAL>::avio_open @ 000167ac size=12 ===== */

void avio_open(void)

{
  (*(code *)PTR_avio_open_0005b4ec)();
  return;
}



/* ===== <EXTERNAL>::avformat_network_deinit @ 000167b8 size=12 ===== */

void avformat_network_deinit(void)

{
  (*(code *)PTR_avformat_network_deinit_0005b4f0)();
  return;
}



/* ===== <EXTERNAL>::av_mallocz @ 000167c4 size=12 ===== */

void av_mallocz(void)

{
  (*(code *)PTR_av_mallocz_0005b4f4)();
  return;
}



/* ===== <EXTERNAL>::avcodec_version @ 000167d0 size=12 ===== */

void avcodec_version(void)

{
  (*(code *)PTR_avcodec_version_0005b4f8)();
  return;
}



/* ===== <EXTERNAL>::av_channel_layout_default @ 000167dc size=12 ===== */

void av_channel_layout_default(void)

{
  (*(code *)PTR_av_channel_layout_default_0005b4fc)();
  return;
}



/* ===== <EXTERNAL>::av_calloc @ 000167e8 size=12 ===== */

void av_calloc(void)

{
  (*(code *)PTR_av_calloc_0005b500)();
  return;
}



/* ===== <EXTERNAL>::av_buffersink_get_sample_rate @ 000167f4 size=12 ===== */

void av_buffersink_get_sample_rate(void)

{
  (*(code *)PTR_av_buffersink_get_sample_rate_0005b504)();
  return;
}



/* ===== <EXTERNAL>::puts @ 00016800 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0005b508)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::av_asprintf @ 0001680c size=12 ===== */

void av_asprintf(void)

{
  (*(code *)PTR_av_asprintf_0005b50c)();
  return;
}



/* ===== <EXTERNAL>::av_channel_layout_uninit @ 00016818 size=12 ===== */

void av_channel_layout_uninit(void)

{
  (*(code *)PTR_av_channel_layout_uninit_0005b510)();
  return;
}



/* ===== <EXTERNAL>::av_packet_ref @ 00016824 size=12 ===== */

void av_packet_ref(void)

{
  (*(code *)PTR_av_packet_ref_0005b514)();
  return;
}



/* ===== <EXTERNAL>::av_codec_is_encoder @ 00016830 size=12 ===== */

void av_codec_is_encoder(void)

{
  (*(code *)PTR_av_codec_is_encoder_0005b518)();
  return;
}



/* ===== <EXTERNAL>::av_codec_get_tag2 @ 0001683c size=12 ===== */

void av_codec_get_tag2(void)

{
  (*(code *)PTR_av_codec_get_tag2_0005b51c)();
  return;
}



/* ===== <EXTERNAL>::av_parse_time @ 00016848 size=12 ===== */

void av_parse_time(void)

{
  (*(code *)PTR_av_parse_time_0005b520)();
  return;
}



/* ===== <EXTERNAL>::strerror @ 00016854 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0005b524)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::avfilter_pad_get_type @ 00016860 size=12 ===== */

void avfilter_pad_get_type(void)

{
  (*(code *)PTR_avfilter_pad_get_type_0005b528)();
  return;
}



/* ===== <EXTERNAL>::avcodec_parameters_free @ 0001686c size=12 ===== */

void avcodec_parameters_free(void)

{
  (*(code *)PTR_avcodec_parameters_free_0005b52c)();
  return;
}



/* ===== <EXTERNAL>::avcodec_configuration @ 00016878 size=12 ===== */

void avcodec_configuration(void)

{
  (*(code *)PTR_avcodec_configuration_0005b530)();
  return;
}



/* ===== <EXTERNAL>::av_disposition_to_string @ 00016884 size=12 ===== */

void av_disposition_to_string(void)

{
  (*(code *)PTR_av_disposition_to_string_0005b534)();
  return;
}



/* ===== <EXTERNAL>::select @ 00016890 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_select_0005b538)(__nfds);
  return iVar1;
}



/* ===== <EXTERNAL>::strtok @ 0001689c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strtok(char *__s,char *__delim)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strtok_0005b53c)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::avformat_free_context @ 000168a8 size=12 ===== */

void avformat_free_context(void)

{
  (*(code *)PTR_avformat_free_context_0005b540)();
  return;
}



/* ===== <EXTERNAL>::av_buffer_unref @ 000168b4 size=12 ===== */

void av_buffer_unref(void)

{
  (*(code *)PTR_av_buffer_unref_0005b544)();
  return;
}



/* ===== <EXTERNAL>::av_fifo_alloc2 @ 000168c0 size=12 ===== */

void av_fifo_alloc2(void)

{
  (*(code *)PTR_av_fifo_alloc2_0005b548)();
  return;
}



/* ===== <EXTERNAL>::avio_seek @ 000168cc size=12 ===== */

void avio_seek(void)

{
  (*(code *)PTR_avio_seek_0005b54c)();
  return;
}



/* ===== <EXTERNAL>::av_log_set_callback @ 000168d8 size=12 ===== */

void av_log_set_callback(void)

{
  (*(code *)PTR_av_log_set_callback_0005b550)();
  return;
}



/* ===== <EXTERNAL>::getenv @ 000168e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_0005b554)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::sigaction @ 000168f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigaction_0005b558)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::av_thread_message_queue_free @ 000168fc size=12 ===== */

void av_thread_message_queue_free(void)

{
  (*(code *)PTR_av_thread_message_queue_free_0005b55c)();
  return;
}



/* ===== <EXTERNAL>::memcpy @ 00016908 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0005b560)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::sigfillset @ 00016914 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigfillset(sigset_t *__set)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigfillset_0005b564)(__set);
  return iVar1;
}



/* ===== <EXTERNAL>::av_frame_free @ 00016920 size=12 ===== */

void av_frame_free(void)

{
  (*(code *)PTR_av_frame_free_0005b568)();
  return;
}



/* ===== <EXTERNAL>::av_dict_parse_string @ 0001692c size=12 ===== */

void av_dict_parse_string(void)

{
  (*(code *)PTR_av_dict_parse_string_0005b56c)();
  return;
}



/* ===== <EXTERNAL>::av_input_video_device_next @ 00016938 size=12 ===== */

void av_input_video_device_next(void)

{
  (*(code *)PTR_av_input_video_device_next_0005b570)();
  return;
}



/* ===== <EXTERNAL>::av_channel_layout_from_mask @ 00016944 size=12 ===== */

void av_channel_layout_from_mask(void)

{
  (*(code *)PTR_av_channel_layout_from_mask_0005b574)();
  return;
}



/* ===== <EXTERNAL>::avformat_new_stream @ 00016950 size=12 ===== */

void avformat_new_stream(void)

{
  (*(code *)PTR_avformat_new_stream_0005b578)();
  return;
}



/* ===== <EXTERNAL>::av_channel_description @ 0001695c size=12 ===== */

void av_channel_description(void)

{
  (*(code *)PTR_av_channel_description_0005b57c)();
  return;
}



/* ===== <EXTERNAL>::strlen @ 00016974 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0005b584)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::av_buffersrc_parameters_alloc @ 00016980 size=12 ===== */

void av_buffersrc_parameters_alloc(void)

{
  (*(code *)PTR_av_buffersrc_parameters_alloc_0005b588)();
  return;
}



/* ===== <EXTERNAL>::av_find_nearest_q_idx @ 0001698c size=12 ===== */

void av_find_nearest_q_idx(void)

{
  (*(code *)PTR_av_find_nearest_q_idx_0005b58c)();
  return;
}



/* ===== <EXTERNAL>::avformat_configuration @ 00016998 size=12 ===== */

void avformat_configuration(void)

{
  (*(code *)PTR_avformat_configuration_0005b590)();
  return;
}



/* ===== <EXTERNAL>::avformat_version @ 000169a4 size=12 ===== */

void avformat_version(void)

{
  (*(code *)PTR_avformat_version_0005b594)();
  return;
}



/* ===== <EXTERNAL>::av_add_q @ 000169b0 size=12 ===== */

void av_add_q(void)

{
  (*(code *)PTR_av_add_q_0005b598)();
  return;
}



/* ===== <EXTERNAL>::av_hwdevice_ctx_create @ 000169bc size=12 ===== */

void av_hwdevice_ctx_create(void)

{
  (*(code *)PTR_av_hwdevice_ctx_create_0005b59c)();
  return;
}



/* ===== <EXTERNAL>::av_bprint_chars @ 000169c8 size=12 ===== */

void av_bprint_chars(void)

{
  (*(code *)PTR_av_bprint_chars_0005b5a0)();
  return;
}



/* ===== <EXTERNAL>::strtol @ 000169d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_0005b5a4)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::av_parse_ratio @ 000169e0 size=12 ===== */

void av_parse_ratio(void)

{
  (*(code *)PTR_av_parse_ratio_0005b5a8)();
  return;
}



/* ===== <EXTERNAL>::av_thread_message_queue_set_err_recv @ 000169ec size=12 ===== */

void av_thread_message_queue_set_err_recv(void)

{
  (*(code *)PTR_av_thread_message_queue_set_err_recv_0005b5ac)();
  return;
}



/* ===== <EXTERNAL>::av_log_default_callback @ 000169f8 size=12 ===== */

void av_log_default_callback(void)

{
  (*(code *)PTR_av_log_default_callback_0005b5b0)();
  return;
}



/* ===== <EXTERNAL>::av_guess_codec @ 00016a04 size=12 ===== */

void av_guess_codec(void)

{
  (*(code *)PTR_av_guess_codec_0005b5b4)();
  return;
}



/* ===== <EXTERNAL>::swscale_configuration @ 00016a10 size=12 ===== */

void swscale_configuration(void)

{
  (*(code *)PTR_swscale_configuration_0005b5b8)();
  return;
}



/* ===== <EXTERNAL>::av_packet_make_refcounted @ 00016a1c size=12 ===== */

void av_packet_make_refcounted(void)

{
  (*(code *)PTR_av_packet_make_refcounted_0005b5bc)();
  return;
}



/* ===== <EXTERNAL>::postproc_configuration @ 00016a28 size=12 ===== */

void postproc_configuration(void)

{
  (*(code *)PTR_postproc_configuration_0005b5c0)();
  return;
}



/* ===== <EXTERNAL>::av_get_sample_fmt @ 00016a34 size=12 ===== */

void av_get_sample_fmt(void)

{
  (*(code *)PTR_av_get_sample_fmt_0005b5c4)();
  return;
}



/* ===== <EXTERNAL>::swresample_version @ 00016a40 size=12 ===== */

void swresample_version(void)

{
  (*(code *)PTR_swresample_version_0005b5c8)();
  return;
}



/* ===== <EXTERNAL>::avformat_network_init @ 00016a4c size=12 ===== */

void avformat_network_init(void)

{
  (*(code *)PTR_avformat_network_init_0005b5cc)();
  return;
}



/* ===== <EXTERNAL>::av_rescale_q @ 00016a58 size=12 ===== */

void av_rescale_q(void)

{
  (*(code *)PTR_av_rescale_q_0005b5d0)();
  return;
}



/* ===== <EXTERNAL>::av_log @ 00016a64 size=12 ===== */

void av_log(void)

{
  (*(code *)PTR_av_log_0005b5d4)();
  return;
}



/* ===== FUN_00016a70 @ 00016a70 size=768 ===== */

void FUN_00016a70(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined4 extraout_r3;
  int *piVar6;
  int *piVar7;
  undefined4 uVar9;
  char *__s2;
  uint uVar10;
  int iVar11;
  float fVar12;
  uint local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint local_48;
  int iStack_44;
  uint local_40;
  int iStack_3c;
  uint local_38;
  int iStack_34;
  int *piVar8;
  
  iVar11 = DAT_00016d78 + 0x16a8c;
  FUN_0002b520();
  FUN_0002b524(DAT_00016d7c + 0x16a9c);
  setvbuf((FILE *)**(undefined4 **)(iVar11 + DAT_00016d80),(char *)0x0,2,0);
  av_log_set_flags(1);
  uVar9 = *(undefined4 *)(iVar11 + DAT_00016d84);
  FUN_0002ba78(param_1,param_2,uVar9);
  avdevice_register_all();
  avformat_network_init();
  FUN_0002f678(param_1,param_2,uVar9);
  iVar1 = FUN_00028138(param_1,param_2);
  if (-1 < iVar1) {
    iVar1 = **(int **)(iVar11 + DAT_00016d88);
    if (iVar1 < 1) {
      if (**(int **)(iVar11 + DAT_00016db0) != 0) {
        av_log(0,8,DAT_00016db4 + 0x16c70);
                    /* WARNING: Subroutine does not return */
        FUN_0002b538(1);
      }
      FUN_00027c20();
      av_log(0,0x18,DAT_00016dbc + 0x16c94,*(undefined4 *)(iVar11 + DAT_00016db8));
    }
    else {
      __s2 = (char *)(DAT_00016d90 + 0x16b30);
      piVar6 = (int *)**(undefined4 **)(iVar11 + DAT_00016d8c);
      piVar7 = piVar6;
      do {
        piVar8 = piVar7 + 1;
        iVar2 = strcmp((char *)**(undefined4 **)(*piVar7 + 4),__s2);
        if (iVar2 != 0) {
          **(undefined4 **)(iVar11 + DAT_00016d94) = 0;
        }
        iVar2 = DAT_00016d98;
        piVar7 = piVar8;
      } while (piVar6 + iVar1 != piVar8);
      FUN_000319d0(&local_48);
      *(uint *)(iVar2 + 0x16cb4) = local_48;
      *(int *)(iVar2 + 0x16cb8) = iStack_44;
      *(uint *)(iVar2 + 0x16cbc) = local_40;
      *(int *)(iVar2 + 0x16cc0) = iStack_3c;
      *(uint *)(iVar2 + 0x16cc4) = local_38;
      *(int *)(iVar2 + 0x16cc8) = iStack_34;
      iVar3 = FUN_0003bc64();
      iVar1 = DAT_00016dc0;
      if (-1 < iVar3) {
        uVar9 = 0;
        if (**(int **)(iVar11 + DAT_00016d9c) != 0) {
          FUN_000319d0(&local_60);
          *(uint *)(iVar2 + 0x16cb4) = local_60;
          *(undefined4 *)(iVar2 + 0x16cb8) = uStack_5c;
          *(undefined4 *)(iVar2 + 0x16cbc) = uStack_58;
          *(undefined4 *)(iVar2 + 0x16cc0) = uStack_54;
          *(undefined4 *)(iVar2 + 0x16cc4) = local_50;
          *(undefined4 *)(iVar2 + 0x16cc8) = uStack_4c;
          FUN_0003f4e4(*(uint *)(iVar2 + 0x16cb4) - local_48,
                       *(int *)(iVar2 + 0x16cb8) -
                       (iStack_44 + (uint)(*(uint *)(iVar2 + 0x16cb4) < local_48)));
          FUN_0003f4e4(*(uint *)(iVar2 + 0x16cc4) - local_38,
                       *(int *)(iVar2 + 0x16cc8) -
                       (iStack_34 + (uint)(*(uint *)(iVar2 + 0x16cc4) < local_38)));
          FUN_0003f4e4(*(uint *)(iVar2 + 0x16cbc) - local_40,
                       *(int *)(iVar2 + 0x16cc0) -
                       (iStack_3c + (uint)(*(uint *)(iVar2 + 0x16cbc) < local_40)));
          av_log(0,0x20,iVar1 + 0x16cd4);
          uVar9 = extraout_r3;
        }
        iVar1 = DAT_00016da0;
        av_log(0,0x30,DAT_00016da4 + 0x16bd0,uVar9,*(undefined4 *)(DAT_00016da0 + 0x16cf8),
               *(undefined4 *)(DAT_00016da0 + 0x16cfc),*(undefined4 *)(DAT_00016da0 + 0x16d00),
               *(undefined4 *)(DAT_00016da0 + 0x16d04));
        uVar10 = *(uint *)(iVar1 + 0x16d00);
        iVar2 = *(int *)(iVar1 + 0x16d04);
        fVar4 = (float)FUN_0003f718(*(uint *)(iVar1 + 0x16cf8) + uVar10,
                                    *(int *)(iVar1 + 0x16cfc) + iVar2 +
                                    (uint)CARRY4(*(uint *)(iVar1 + 0x16cf8),uVar10));
        fVar12 = **(float **)(iVar11 + DAT_00016da8);
        fVar5 = (float)FUN_0003f718(uVar10,iVar2);
        if (fVar4 * fVar12 < fVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_0002b538(0x45);
        }
        if (*(int *)(iVar1 + 0x16bcc) == 0) {
          uVar9 = **(undefined4 **)(iVar11 + DAT_00016dac);
        }
        else {
          uVar9 = 0xff;
        }
        goto LAB_00016c44;
      }
    }
  }
  uVar9 = 1;
LAB_00016c44:
                    /* WARNING: Subroutine does not return */
  FUN_0002b538(uVar9);
}



/* ===== entry @ 00016dc4 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0005b04c)
            (DAT_00016df8,param_2,&stack0x00000004,DAT_00016dfc,DAT_00016df4,param_1);
  return;
}



/* ===== FUN_00016e00 @ 00016e00 size=32 ===== */

void FUN_00016e00(void)

{
  if (DAT_00016e24 == DAT_00016e20) {
    return;
  }
  if (DAT_00016e28 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00016e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00016e28)();
  return;
}



/* ===== _FINI_0 @ 00016e64 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00016ea0;
  if (*DAT_00016ea0 != '\0') {
    return;
  }
  FUN_00016e00();
  if (DAT_00016ea4 != 0) {
    __deregister_frame_info(DAT_00016ea8);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00016eac size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00016ed0 != 0) {
    __register_frame_info(DAT_00016ed8,DAT_00016ed4);
  }
  if ((DAT_00016e5c - DAT_00016e58 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00016e60 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00016e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00016e60)();
  return;
}



/* ===== FUN_00016ee0 @ 00016ee0 size=492 ===== */

int FUN_00016ee0(int param_1,int param_2,int param_3,int param_4,int *param_5,undefined4 *param_6,
                undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(*param_5 + 0x28);
  iVar1 = avfilter_pad_get_type(*(undefined4 *)(*param_5 + 0x18),*param_6);
  if (iVar1 == 0) {
    iVar1 = DAT_000170d0 + 0x16f6c;
  }
  else {
    iVar1 = DAT_000170cc + 0x16f28;
  }
  if ((param_2 == -0x80000000 && param_1 == 0) && (param_4 == 0x7fffffff && param_3 == -1)) {
    return 0;
  }
  iVar2 = avfilter_get_by_name(iVar1);
  if (iVar2 == 0) {
    av_log(0,0x10,DAT_000170e0 + 0x170c4,iVar1);
    return -0x4c4946f8;
  }
  iVar2 = avfilter_graph_alloc_filter(uVar4,iVar2,param_7);
  if (iVar2 == 0) {
    return -0xc;
  }
  if (param_4 == 0x7fffffff && param_3 == -1) {
    if (param_2 == -0x80000000 && param_1 == 0) goto LAB_00016fa8;
LAB_00017074:
    iVar3 = av_opt_set_int(iVar2,DAT_000170dc + 0x1708c,param_1,param_2,1);
  }
  else {
    iVar3 = av_opt_set_int(iVar2,DAT_000170d4 + 0x17020,param_3,param_4,1);
    if (-1 < iVar3 && (param_2 != -0x80000000 || param_1 != 0)) goto LAB_00017074;
  }
  if (iVar3 < 0) {
    av_log(iVar2,0x10,DAT_000170d8 + 0x17068,iVar1);
    return iVar3;
  }
LAB_00016fa8:
  iVar1 = avfilter_init_str(iVar2,0);
  if ((-1 < iVar1) && (iVar1 = avfilter_link(*param_5,*param_6,iVar2,0), -1 < iVar1)) {
    *param_5 = iVar2;
    *param_6 = 0;
    return 0;
  }
  return iVar1;
}



/* ===== FUN_000170e4 @ 000170e4 size=256 ===== */

undefined4 FUN_000170e4(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  
  piVar1 = (int *)av_mallocz(0x24);
  iVar8 = DAT_000171e4 + 0x17104;
  if (piVar1 != (int *)0x0) {
    piVar7 = *(int **)(iVar8 + DAT_000171e8);
    *piVar1 = *piVar7;
    iVar2 = FUN_0002d75c(piVar1 + 7,0x58,piVar1 + 8);
    *(int *)(iVar2 + 4) = param_2;
    *(int **)(iVar2 + 8) = piVar1;
    *(undefined4 *)(iVar2 + 0x28) = 0xffffffff;
    *(int *)(param_2 + 0x13c) = iVar2;
    iVar2 = FUN_0002d75c(piVar1 + 5,0x58,piVar1 + 6);
    *(int *)(iVar2 + 4) = param_1;
    *(int **)(iVar2 + 8) = piVar1;
    *(undefined4 *)(iVar2 + 0x18) = 0xffffffff;
    iVar3 = av_fifo_alloc2(8,4,1);
    *(int *)(iVar2 + 0x14) = iVar3;
    if (iVar3 != 0) {
      iVar4 = FUN_0002c7b8(*(undefined4 *)(param_1 + 0x108),4,(int *)(param_1 + 0x10c),
                           *(int *)(param_1 + 0x10c) + 1);
      iVar3 = DAT_000171ec;
      iVar5 = *piVar7;
      *(int *)(param_1 + 0x108) = iVar4;
      *(int *)(iVar4 + (*(int *)(param_1 + 0x10c) + 0x3fffffff) * 4) = iVar2;
      piVar6 = *(int **)(iVar8 + iVar3);
      iVar8 = FUN_0002c7b8(*piVar6,4,piVar7,iVar5 + 1);
      iVar2 = *piVar7;
      *piVar6 = iVar8;
      *(int **)(iVar8 + (iVar2 + 0x3fffffff) * 4) = piVar1;
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002b538(1);
}



/* ===== FUN_000171f0 @ 000171f0 size=1228 ===== */

int FUN_000171f0(int param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  int local_40;
  undefined4 *local_38;
  int local_34;
  int local_30;
  char *local_2c [2];
  
  local_30 = avfilter_graph_alloc();
  iVar15 = DAT_000176bc + 0x1720c;
  if (local_30 == 0) {
    local_40 = -0xc;
  }
  else {
    *(undefined4 *)(local_30 + 0x14) = 1;
    local_40 = avfilter_graph_parse2(local_30,*(undefined4 *)(param_1 + 4),&local_38,&local_34);
    if (-1 < local_40) {
      if (local_38 != (undefined4 *)0x0) {
        iVar8 = DAT_000176c0 + 0x17264;
        puVar13 = local_38;
LAB_00017264:
        uVar1 = avfilter_pad_get_type(*(undefined4 *)(puVar13[1] + 0xc),puVar13[2]);
        if (1 < uVar1) {
          av_log(0,8,DAT_000176f0 + 0x17688);
                    /* WARNING: Subroutine does not return */
          FUN_0002b538(1);
        }
        if ((char *)*puVar13 != (char *)0x0) {
          lVar2 = strtol((char *)*puVar13,local_2c,0);
          if ((lVar2 < 0) || (**(int **)(iVar15 + DAT_000176c4) <= lVar2)) {
            av_log(0,8,DAT_000176ec + 0x17668,lVar2,*(undefined4 *)(param_1 + 4));
                    /* WARNING: Subroutine does not return */
            FUN_0002b538(1);
          }
          piVar9 = *(int **)(iVar15 + DAT_000176c8);
          iVar16 = **(int **)(*piVar9 + lVar2 * 4);
          uVar3 = *(uint *)(iVar16 + 0x18);
          if (uVar3 != 0) {
            uVar14 = 0;
            do {
              iVar5 = *(int *)(*(int *)(iVar16 + 0x1c) + uVar14 * 4);
              uVar10 = **(uint **)(iVar5 + 0xb4);
              if ((uVar1 == uVar10) || (uVar1 == 0 && uVar10 == 3)) {
                pcVar6 = local_2c[0];
                if (*local_2c[0] == ':') {
                  pcVar6 = local_2c[0] + 1;
                }
                iVar5 = FUN_0002c49c(iVar16,iVar5,pcVar6);
                if (iVar5 == 1) goto LAB_0001735c;
                uVar3 = *(uint *)(iVar16 + 0x18);
              }
              uVar14 = uVar14 + 1;
              if (uVar3 <= uVar14) break;
            } while( true );
          }
          goto LAB_00017334;
        }
        iVar5 = **(int **)(iVar15 + DAT_000176d8);
        if (iVar5 < 1) {
          if (iVar5 != 0) {
            av_log(0,0,DAT_000176e8 + 0x17634,DAT_000176e4 + 0x17630,DAT_000176e0 + 0x17624,0x125);
                    /* WARNING: Subroutine does not return */
            abort();
          }
LAB_00017598:
          av_log(0,8,DAT_000176dc + 0x175b8,puVar13[2],*(undefined4 *)(puVar13[1] + 8));
                    /* WARNING: Subroutine does not return */
          FUN_0002b538(1);
        }
        piVar9 = (int *)(**(int **)(iVar15 + DAT_000176d0) + -4);
        iVar4 = 0;
        while( true ) {
          piVar9 = piVar9 + 1;
          iVar16 = *piVar9;
          if (((*(int *)(iVar16 + 0xc) != 0x30) && (uVar1 == *(uint *)(*(int *)(iVar16 + 0x18) + 8))
              ) && (*(int *)(iVar16 + 8) != 0)) break;
          iVar4 = iVar4 + 1;
          if (iVar5 == iVar4) goto LAB_00017598;
        }
        goto LAB_000173a0;
      }
LAB_00017474:
      if (local_34 != 0) {
        iVar8 = DAT_000176d4 + 0x17498;
        iVar15 = local_34;
        do {
          iVar16 = FUN_0002d75c(param_1 + 0x1c,0x58,param_1 + 0x20);
          iVar5 = *(int *)(iVar15 + 4);
          uVar7 = *(undefined4 *)(iVar15 + 8);
          *(int *)(iVar16 + 8) = param_1;
          *(int *)(iVar16 + 0x10) = iVar15;
          uVar7 = avfilter_pad_get_type(*(undefined4 *)(iVar5 + 0x18),uVar7);
          iVar4 = *(int *)(iVar15 + 4);
          iVar5 = *(int *)(iVar4 + 0x20);
          *(undefined4 *)(iVar16 + 0x14) = uVar7;
          if (iVar5 < 2) {
            uVar17 = **(undefined4 **)(iVar4 + 4);
            uVar7 = avfilter_pad_get_name(*(undefined4 *)(iVar4 + 0x18),*(undefined4 *)(iVar15 + 8))
            ;
            iVar5 = av_asprintf(iVar8,uVar17,uVar7);
          }
          else {
            iVar5 = av_strdup(**(undefined4 **)(iVar4 + 4));
          }
          if (iVar5 == 0) {
LAB_00017644:
                    /* WARNING: Subroutine does not return */
            FUN_0002b538(1);
          }
          iVar15 = *(int *)(iVar15 + 0xc);
          *(int *)(iVar16 + 0xc) = iVar5;
          *(undefined4 *)(*(int *)(iVar16 + 0x10) + 0xc) = 0;
        } while (iVar15 != 0);
      }
    }
    avfilter_inout_free(&local_38);
    avfilter_graph_free(&local_30);
  }
  return local_40;
LAB_0001735c:
  piVar11 = *(int **)(*(int *)(iVar16 + 0x1c) + uVar14 * 4);
  if (piVar11 == (int *)0x0) {
LAB_00017334:
    av_log(0,8,DAT_000176cc + 0x17350,local_2c[0],*(undefined4 *)(param_1 + 4));
                    /* WARNING: Subroutine does not return */
    FUN_0002b538(1);
  }
  iVar16 = *(int *)(**(int **)(iVar15 + DAT_000176d0) +
                   (*(int *)(*(int *)(*piVar9 + lVar2 * 4) + 0xc) + *piVar11) * 4);
  if (*(int *)(iVar16 + 0xc) == 0x30) {
    av_log(0,8,DAT_000176f4 + 0x176b0,local_2c[0],*(undefined4 *)(param_1 + 4));
                    /* WARNING: Subroutine does not return */
    FUN_0002b538(1);
  }
LAB_000173a0:
  *(undefined4 *)(iVar16 + 0x14) = 1;
  *(undefined4 *)(iVar16 + 8) = 0;
  *(uint *)(iVar16 + 0x10) = *(uint *)(iVar16 + 0x10) | 2;
  *(undefined4 *)(*(int *)(iVar16 + 4) + 0x34) = 0xfffffff0;
  iVar5 = FUN_0002d75c(param_1 + 0x14,0x58,param_1 + 0x18);
  iVar12 = puVar13[1];
  uVar7 = **(undefined4 **)(*(int *)(iVar16 + 4) + 0xb4);
  *(int *)(iVar5 + 4) = iVar16;
  iVar4 = *(int *)(iVar12 + 0x14);
  *(int *)(iVar5 + 8) = param_1;
  *(undefined4 *)(iVar5 + 0x18) = 0xffffffff;
  *(undefined4 *)(iVar5 + 0x10) = uVar7;
  if (iVar4 < 2) {
    uVar17 = **(undefined4 **)(iVar12 + 4);
    uVar7 = avfilter_pad_get_name(*(undefined4 *)(iVar12 + 0xc),puVar13[2]);
    iVar4 = av_asprintf(iVar8,uVar17,uVar7);
  }
  else {
    iVar4 = av_strdup(**(undefined4 **)(iVar12 + 4));
  }
  if (iVar4 == 0) goto LAB_00017644;
  *(int *)(iVar5 + 0xc) = iVar4;
  iVar4 = av_fifo_alloc2(8,4,1);
  *(int *)(iVar5 + 0x14) = iVar4;
  if (iVar4 == 0) goto LAB_00017644;
  iVar4 = FUN_0002c7b8(*(undefined4 *)(iVar16 + 0x108),4,(int *)(iVar16 + 0x10c),
                       *(int *)(iVar16 + 0x10c) + 1);
  puVar13 = (undefined4 *)puVar13[3];
  *(int *)(iVar16 + 0x108) = iVar4;
  *(int *)(iVar4 + (*(int *)(iVar16 + 0x10c) + 0x3fffffff) * 4) = iVar5;
  if (puVar13 == (undefined4 *)0x0) goto LAB_00017474;
  goto LAB_00017264;
}



/* ===== FUN_000176f8 @ 000176f8 size=172 ===== */

void FUN_000176f8(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = **(int **)(DAT_000177a4 + 0x17708 + DAT_000177a8);
  if (iVar5 < 1) {
    return;
  }
  iVar7 = 0;
  piVar4 = (int *)(**(int **)(DAT_000177a4 + 0x17708 + DAT_000177ac) + -4);
  do {
    piVar4 = piVar4 + 1;
    iVar6 = *(int *)(*piVar4 + 0x20);
    if (0 < iVar6) {
      piVar2 = *(int **)(*piVar4 + 0x1c);
      iVar1 = *piVar2;
      if (*(int *)(iVar1 + 4) == 0) {
LAB_00017784:
        av_log(0,8,DAT_000177b0 + 0x1779c,*(undefined4 *)(iVar1 + 0xc));
                    /* WARNING: Subroutine does not return */
        FUN_0002b538(1);
      }
      iVar3 = 0;
      while (iVar3 = iVar3 + 1, iVar3 != iVar6) {
        piVar2 = piVar2 + 1;
        iVar1 = *piVar2;
        if (*(int *)(iVar1 + 4) == 0) goto LAB_00017784;
      }
    }
    iVar7 = iVar7 + 1;
    if (iVar7 == iVar5) {
      return;
    }
  } while( true );
}



/* ===== FUN_000177b4 @ 000177b4 size=176 ===== */

int FUN_000177b4(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  av_buffer_unref(param_1 + 0x48);
  uVar6 = *(undefined4 *)(param_2 + 0x44);
  uVar5 = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x50);
  uVar1 = *(undefined4 *)(param_2 + 0x5c);
  uVar3 = *(undefined4 *)(param_2 + 0x60);
  uVar4 = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  *(undefined4 *)(param_1 + 0x20) = uVar5;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  iVar2 = av_channel_layout_copy(param_1 + 0x30,param_2 + 0x148);
  if (iVar2 < 0) {
    return iVar2;
  }
  av_freep(param_1 + 0x4c);
  iVar2 = av_frame_get_side_data(param_2,6);
  if (iVar2 != 0) {
    uVar1 = av_memdup(*(undefined4 *)(iVar2 + 4),0x24);
    *(undefined4 *)(param_1 + 0x4c) = uVar1;
  }
  if (*(int *)(param_2 + 0x128) != 0) {
    iVar2 = av_buffer_ref();
    *(int *)(param_1 + 0x48) = iVar2;
    if (iVar2 == 0) {
      return -0xc;
    }
  }
  return 0;
}



/* ===== FUN_00017864 @ 00017864 size=16 ===== */

bool FUN_00017864(int param_1)

{
  return *(int *)(param_1 + 4) == 0;
}



/* ===== FUN_00017874 @ 00017874 size=8468 ===== */

int FUN_00017874(undefined4 *param_1)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  char *pcVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  undefined4 *puVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int *piVar23;
  int iVar24;
  char *__s2;
  byte bVar25;
  int iVar26;
  int iVar27;
  char *__s1;
  bool bVar28;
  bool bVar29;
  double dVar30;
  double dVar31;
  undefined8 uVar32;
  int local_684;
  int local_680;
  undefined4 local_674;
  int local_66c;
  int *local_668;
  int local_650;
  int local_64c;
  undefined4 *local_648;
  undefined4 *local_644;
  undefined4 *local_640;
  undefined4 *local_63c;
  int *local_638;
  int iStack_634;
  undefined4 *local_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined4 local_620;
  undefined4 uStack_61c;
  char acStack_530 [255];
  char cStack_431;
  uint local_430;
  uint local_42c;
  uint local_428;
  undefined4 extraout_s1;
  
  iVar26 = DAT_00017fb0 + 0x1788c;
  iVar1 = FUN_00017864();
  iVar5 = param_1[8];
  if (iVar1 == 0) {
    uVar7 = param_1[1];
  }
  else {
    uVar7 = *(undefined4 *)(*(int *)(*(int *)param_1[7] + 4) + 0x140);
  }
  if (0 < iVar5) {
    puVar8 = (undefined4 *)param_1[7];
    puVar18 = puVar8;
    do {
      puVar9 = puVar18 + 1;
      *(undefined4 *)*puVar18 = 0;
      puVar18 = puVar9;
    } while (puVar8 + iVar5 != puVar9);
  }
  iVar5 = param_1[6];
  if (0 < iVar5) {
    puVar8 = (undefined4 *)param_1[5];
    puVar18 = puVar8;
    do {
      puVar9 = puVar18 + 1;
      *(undefined4 *)*puVar18 = 0;
      puVar18 = puVar9;
    } while (puVar8 + iVar5 != puVar9);
  }
  avfilter_graph_free(param_1 + 2);
  iVar5 = avfilter_graph_alloc();
  param_1[2] = iVar5;
  if (iVar5 == 0) {
    return -0xc;
  }
  if (iVar1 == 0) {
    *(undefined4 *)(iVar5 + 0x14) = **(undefined4 **)(iVar26 + DAT_00017fd0);
  }
  else {
    iVar22 = *(int *)(*(int *)param_1[7] + 4);
    if (**(int **)(iVar26 + DAT_00017fb4) == 0) {
      iVar27 = DAT_00018750 + 0x18660;
      iVar5 = av_dict_get(*(undefined4 *)(iVar22 + 0x14c),iVar27,0,0);
      if (iVar5 != 0) {
        av_opt_set(param_1[2],iVar27,*(undefined4 *)(iVar5 + 4),0);
      }
    }
    else {
      iVar5 = av_opt_set(iVar5,DAT_00017fb8 + 0x17960,**(int **)(iVar26 + DAT_00017fb4),0);
      if (iVar5 < 0) goto LAB_00017ec8;
    }
    puVar18 = (undefined4 *)0x0;
    local_430 = local_430 & 0xffffff00;
    iVar5 = DAT_00017fbc + 0x17984;
    iVar27 = DAT_00017fc0 + 0x17988;
    while (puVar18 = (undefined4 *)av_dict_get(*(undefined4 *)(iVar22 + 0x150),iVar5,puVar18,2),
          puVar18 != (undefined4 *)0x0) {
      av_strlcatf(&local_430,0x200,iVar27,*puVar18,puVar18[1]);
    }
    if ((char)local_430 != '\0') {
      sVar2 = strlen((char *)&local_430);
      iVar5 = param_1[2];
      (&cStack_431)[sVar2] = '\0';
      uVar15 = av_strdup(&local_430);
      *(undefined4 *)(iVar5 + 0xc) = uVar15;
    }
    iVar5 = DAT_00017fc4 + 0x179e0;
    local_430 = local_430 & 0xffffff00;
    iVar27 = DAT_00017fc8 + 0x179e8;
    puVar18 = (undefined4 *)0x0;
    while (puVar18 = (undefined4 *)av_dict_get(*(undefined4 *)(iVar22 + 0x154),iVar5,puVar18,2),
          puVar18 != (undefined4 *)0x0) {
      av_strlcatf(&local_430,0x200,iVar27,*puVar18,puVar18[1]);
    }
    if ((char)local_430 != '\0') {
      sVar2 = strlen((char *)&local_430);
      (&cStack_431)[sVar2] = '\0';
    }
    av_opt_set(param_1[2],DAT_00017fcc + 0x17a58,&local_430,0);
    iVar5 = param_1[2];
  }
  iVar5 = avfilter_graph_parse2(iVar5,uVar7,&local_650,&local_64c);
  if ((iVar5 < 0) || (iVar5 = FUN_0001a950(param_1), iVar5 < 0)) goto LAB_00017ec8;
  if (iVar1 == 0) {
    if (local_650 == 0) {
LAB_00018844:
      avfilter_inout_free(&local_650);
      if (local_64c != 0) {
        puVar18 = *(undefined4 **)param_1[7];
        if (puVar18[1] != 0) {
          local_684 = 4;
          pcVar14 = (char *)(DAT_00018758 + 0x18884);
          iVar5 = DAT_0001875c + 0x18890;
          iVar22 = DAT_00018760 + 0x1889c;
          iVar27 = DAT_00018764 + 0x188a8;
          iVar1 = local_64c;
          do {
            iVar6 = avfilter_pad_get_type
                              (*(undefined4 *)(*(int *)(iVar1 + 4) + 0x18),
                               *(undefined4 *)(iVar1 + 8));
            if (iVar6 == 0) {
              piVar23 = (int *)puVar18[1];
              local_63c = *(undefined4 **)(iVar1 + 8);
              local_640 = *(undefined4 **)(iVar1 + 4);
              iVar20 = *(int *)(**(int **)(iVar26 + DAT_00018780) + *piVar23 * 4);
              snprintf(acStack_530,0xff,pcVar14,*piVar23,piVar23[1]);
              uVar7 = avfilter_get_by_name(iVar5);
              iVar3 = avfilter_graph_create_filter(puVar18,uVar7,acStack_530,0,0);
              iVar13 = DAT_000187cc;
              iVar6 = DAT_000187c8;
              if (-1 < iVar3) {
                if (((puVar18[6] != 0) || (puVar18[7] != 0)) && (*(int *)(puVar18[1] + 0xc4) != 0))
                {
                  puVar8 = (undefined4 *)0x0;
                  snprintf((char *)&local_430,0xff,(char *)(DAT_000187c4 + 0x190d4),puVar18[6],
                           puVar18[7]);
                  while (puVar8 = (undefined4 *)av_dict_get(piVar23[0x54],iVar6 + 0x190e4,puVar8,2),
                        puVar8 != (undefined4 *)0x0) {
                    av_strlcatf(&local_430,0xff,iVar13 + 0x190e8,*puVar8,puVar8[1]);
                  }
                  snprintf(acStack_530,0xff,(char *)(DAT_000187d0 + 0x1913c),*piVar23,piVar23[1]);
                  uVar7 = avfilter_get_by_name(DAT_000187d4 + 0x19150);
                  iVar6 = avfilter_graph_create_filter(&local_630,uVar7,acStack_530,&local_430,0);
                  if ((iVar6 < 0) ||
                     (iVar6 = avfilter_link(local_640,local_63c,local_630,0), iVar6 < 0))
                  goto LAB_00018b48;
                  local_640 = local_630;
                  local_63c = (undefined4 *)0x0;
                }
                iVar6 = DAT_00018768;
                av_bprint_init(&local_430,0,0xffffffff);
                iVar3 = puVar18[1];
                iVar13 = av_dict_get(*(undefined4 *)(iVar3 + 0x14c),iVar6 + 0x1898c,0);
                if (iVar13 != 0) {
                  av_opt_set(*(undefined4 *)(iVar3 + 0x54),iVar6 + 0x1898c,
                             *(undefined4 *)(iVar13 + 4),0);
                }
                if (*(int *)(iVar3 + 0x184) == 0) {
                  iVar13 = *(int *)(iVar3 + 0x54);
                  puVar8 = *(undefined4 **)(iVar3 + 0x5c);
                  iVar3 = *(int *)(iVar13 + 0x70);
                  if (iVar3 == -1) {
                    if ((puVar8 == (undefined4 *)0x0) ||
                       (piVar19 = (int *)puVar8[7], piVar19 == (int *)0x0)) goto LAB_00018ae8;
                    if (*(int *)(iVar13 + 0x1bc) < 0) goto LAB_00018a48;
                    iVar6 = strcmp((char *)*puVar8,(char *)(DAT_0001876c + 0x18a0c));
                    if (iVar6 != 0) goto LAB_00018a48;
                    iVar6 = 0xc;
                    piVar19 = (int *)(DAT_00018770 + 0x18a24);
                    do {
                      uVar7 = av_get_pix_fmt_name(iVar6);
                      piVar19 = piVar19 + 1;
                      if (*piVar19 == -1) {
                        uVar15 = 0;
                        iVar6 = iVar27;
                      }
                      else {
                        uVar15 = 0x7c;
                        iVar6 = iVar22;
                      }
                      av_bprintf(&local_430,iVar6,uVar7,uVar15);
LAB_00018a48:
                      iVar6 = *piVar19;
                    } while (iVar6 != -1);
                    uVar4 = local_430;
                    if (local_428 <= local_42c) {
                    /* WARNING: Subroutine does not return */
                      FUN_0002b538(1);
                    }
                  }
                  else {
                    iVar6 = iVar3;
                    if ((puVar8 == (undefined4 *)0x0) ||
                       (piVar19 = (int *)puVar8[7], piVar19 == (int *)0x0)) goto LAB_000190a4;
                    iVar6 = av_pix_fmt_desc_get(iVar3);
                    bVar25 = 0;
                    if (iVar6 != 0) {
                      bVar25 = (*(byte *)(iVar6 + 4) ^ 1) & 1;
                    }
                    if ((*(int *)(iVar13 + 0x1bc) < 0) ||
                       (iVar6 = strcmp((char *)*puVar8,(char *)(DAT_000187e0 + 0x19224)), iVar6 != 0
                       )) {
                      iVar13 = *piVar19;
                      if (iVar13 != -1) goto LAB_00019238;
                      iVar6 = -1;
                    }
                    else {
                      iVar13 = 0xc;
                      piVar19 = (int *)(DAT_000187e4 + 0x1923c);
LAB_00019238:
                      iVar21 = -1;
                      do {
                        iVar21 = av_find_best_pix_fmt_of_2(iVar21,iVar13,iVar3,bVar25,0);
                        iVar6 = iVar3;
                        if (iVar3 == *piVar19) goto LAB_000190a4;
                        piVar19 = piVar19 + 1;
                        iVar13 = *piVar19;
                        iVar6 = iVar21;
                      } while (iVar13 != -1);
                    }
                    uVar7 = av_get_pix_fmt_name(iVar3);
                    uVar15 = *puVar8;
                    av_get_pix_fmt_name(iVar6);
                    av_log(0,0x18,DAT_00018834 + 0x197fc,uVar7,uVar15);
LAB_000190a4:
                    uVar4 = av_get_pix_fmt_name(iVar6);
                  }
                  if (uVar4 != 0) {
                    iVar6 = DAT_00018774 + 0x18a88;
                    uVar7 = avfilter_get_by_name(iVar6);
                    iVar6 = avfilter_graph_create_filter(&local_630,uVar7,iVar6,uVar4,0);
                    av_bprint_finalize(&local_430,0);
                    if ((iVar6 < 0) ||
                       (iVar6 = avfilter_link(local_640,local_63c,local_630,0), iVar6 < 0))
                    goto LAB_00018b48;
                    local_63c = (undefined4 *)0x0;
                    local_640 = local_630;
                  }
                }
                else {
                  avfilter_graph_set_auto_convert(*(undefined4 *)(puVar18[2] + 8),0xffffffff);
                  iVar6 = *(int *)(*(int *)(iVar3 + 0x54) + 0x70);
                  if (iVar6 != -1) goto LAB_000190a4;
                }
LAB_00018ae8:
                snprintf(acStack_530,0xff,(char *)(DAT_00018778 + 0x18b08),*piVar23,piVar23[1]);
                iVar6 = FUN_00016ee0(*(undefined4 *)(iVar20 + 0x20),*(undefined4 *)(iVar20 + 0x24),
                                     *(undefined4 *)(iVar20 + 0x18),*(undefined4 *)(iVar20 + 0x1c),
                                     &local_640,&local_63c,acStack_530);
                if (-1 < iVar6) {
                  avfilter_link(local_640,local_63c,*puVar18,0);
                }
              }
            }
            else {
              if (iVar6 != 1) {
                av_log(0,0,DAT_00019b7c + 0x19b04,DAT_00019b78 + 0x19b00,DAT_00019b74 + 0x19af0,
                       0x281);
                    /* WARNING: Subroutine does not return */
                abort();
              }
              piVar23 = (int *)puVar18[1];
              iVar6 = 0;
              local_640 = *(undefined4 **)(iVar1 + 8);
              iVar3 = piVar23[0x15];
              local_644 = *(undefined4 **)(iVar1 + 4);
              iVar20 = *(int *)(**(int **)(iVar26 + DAT_00018780) + *piVar23 * 4);
              snprintf(acStack_530,0xff,(char *)(DAT_00018784 + 0x18bf4),*piVar23,piVar23[1]);
              uVar7 = avfilter_get_by_name(DAT_00018788 + 0x18c08);
              iVar13 = avfilter_graph_create_filter(puVar18,uVar7,acStack_530,0,0);
              if ((iVar13 < 0) ||
                 (iVar13 = av_opt_set_int(*puVar18,DAT_0001878c + 0x18c4c,1,0,1), iVar13 < 0))
              goto LAB_00018b48;
              av_bprint_init(&local_430,0,0xffffffff);
              if (piVar23[0x4c] == 0) {
LAB_00018c74:
                if (*(int *)(iVar3 + 0x310) == 0) {
                  av_channel_layout_default(iVar3 + 0x310,*(undefined4 *)(iVar3 + 0x314));
                }
                if ((puVar18[10] != -1) || (puVar18[0x12] != 0)) {
                  av_bprintf(&local_430,DAT_00018790 + 0x18ca8);
                  if (puVar18[10] == -1) {
                    piVar19 = (int *)puVar18[0x12];
                    if (*piVar19 != -1) {
                      iVar6 = DAT_000187e8 + 0x192bc;
                      do {
                        uVar7 = av_get_sample_fmt_name();
                        av_bprintf(&local_430,iVar6,uVar7);
                        piVar19 = piVar19 + 1;
                      } while (*piVar19 != -1);
                    }
                    if (local_42c != 0) {
                      local_42c = local_42c - 1;
                      *(undefined1 *)(local_430 + local_42c) = 0;
                    }
                  }
                  else {
                    uVar7 = av_get_sample_fmt_name();
                    av_bprintf(&local_430,DAT_00018794 + 0x18cc4,uVar7);
                  }
                  av_bprint_chars(&local_430,0x3a,1);
                }
                if ((puVar18[0xb] != 0) || (puVar18[0x14] != 0)) {
                  av_bprintf(&local_430,DAT_00018798 + 0x18d04);
                  if (puVar18[0xb] == 0) {
                    piVar19 = (int *)puVar18[0x14];
                    if (*piVar19 != 0) {
                      iVar6 = DAT_0001879c + 0x18d2c;
                      do {
                        av_bprintf(&local_430,iVar6);
                        piVar19 = piVar19 + 1;
                      } while (*piVar19 != 0);
                    }
                    if (local_42c != 0) {
                      local_42c = local_42c - 1;
                      *(undefined1 *)(local_430 + local_42c) = 0;
                    }
                  }
                  else {
                    av_bprintf(&local_430,DAT_00018818 + 0x195f0);
                  }
                  av_bprint_chars(&local_430,0x3a,1);
                }
                iVar6 = av_channel_layout_check(puVar18 + 0xc);
                if (iVar6 == 0) {
                  if (puVar18[0x13] != 0) {
                    av_bprintf(&local_430,DAT_000187a0 + 0x18d8c);
                    if (*(int *)(puVar18[0x13] + 4) != 0) {
                      iVar13 = DAT_000187a4 + 0x18da8;
                      iVar6 = puVar18[0x13];
                      do {
                        av_channel_layout_describe_bprint(iVar6,&local_430);
                        av_bprintf(&local_430,iVar13);
                        piVar19 = (int *)(iVar6 + 0x1c);
                        iVar6 = iVar6 + 0x18;
                      } while (*piVar19 != 0);
                    }
                    if (local_42c != 0) {
                      local_42c = local_42c - 1;
                      *(undefined1 *)(local_430 + local_42c) = 0;
                    }
                    goto LAB_00018dd8;
                  }
                }
                else {
                  av_bprintf(&local_430,DAT_00018804 + 0x19544);
                  av_channel_layout_describe_bprint(puVar18 + 0xc,&local_430);
LAB_00018dd8:
                  av_bprint_chars(&local_430,0x3a,1);
                }
                if (local_42c < local_428) {
                  if (local_42c != 0) {
                    snprintf(acStack_530,0xff,(char *)(DAT_00018824 + 0x19628),*piVar23,piVar23[1]);
                    uVar7 = avfilter_get_by_name(DAT_00018828 + 0x1963c);
                    iVar6 = avfilter_graph_create_filter(&local_630,uVar7,acStack_530,local_430,0);
                    if ((iVar6 < 0) ||
                       (iVar6 = avfilter_link(local_644,local_640,local_630,0), iVar6 < 0))
                    goto LAB_00018ec8;
                    local_644 = local_630;
                    local_640 = (undefined4 *)0x0;
                  }
                  if ((piVar23[0x56] != 0) && (*(int *)(iVar20 + 0x30) != 0)) {
                    iVar6 = *(int *)(*(int *)(iVar20 + 8) + 0x18);
                    if (iVar6 != 0) {
                      piVar19 = *(int **)(*(int *)(iVar20 + 8) + 0x1c);
                      if (**(int **)(*piVar19 + 0xb4) != 0) {
                        iVar13 = 0;
                        do {
                          iVar13 = iVar13 + 1;
                          if (iVar13 == iVar6) goto LAB_00018e6c;
                          piVar19 = piVar19 + 1;
                        } while (**(int **)(*piVar19 + 0xb4) != 0);
                      }
                      iVar6 = DAT_00019b48 + 0x1989c;
                      av_log(0,0x20,DAT_00019b4c + 0x198a4);
                      uVar7 = avfilter_get_by_name(iVar6);
                      iVar6 = avfilter_graph_create_filter(&local_630,uVar7,iVar6,piVar23[0x56],0);
                      if ((iVar6 < 0) ||
                         (iVar6 = avfilter_link(local_644,local_640,local_630,0), iVar6 < 0))
                      goto LAB_00018ec8;
                      local_644 = local_630;
                      local_640 = (undefined4 *)0x0;
                    }
                  }
LAB_00018e6c:
                  snprintf(acStack_530,0xff,(char *)(DAT_000187a8 + 0x18e88),*piVar23,piVar23[1]);
                  iVar6 = FUN_00016ee0(*(undefined4 *)(iVar20 + 0x20),*(undefined4 *)(iVar20 + 0x24)
                                       ,*(undefined4 *)(iVar20 + 0x18),
                                       *(undefined4 *)(iVar20 + 0x1c),&local_644,&local_640,
                                       acStack_530);
                  if (-1 < iVar6) {
                    avfilter_link(local_644,local_640,*puVar18,0);
                  }
                }
              }
              else {
                uStack_62c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                uStack_628 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                uStack_624 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                local_630 = (undefined4 *)0x0;
                local_620 = 0;
                uStack_61c = uStack_62c;
                av_channel_layout_default(&local_630);
                av_channel_layout_describe_bprint(&local_630,&local_430);
                iVar13 = piVar23[0x4c];
                if (0 < iVar13) {
                  iVar21 = piVar23[0x4b];
                  iVar16 = DAT_000187f8 + 0x193b8;
                  do {
                    iVar17 = *(int *)(iVar21 + iVar6 * 4);
                    while (iVar17 != -1) {
                      iVar24 = iVar6 + 1;
                      av_bprintf(&local_430,iVar16,iVar6);
                      iVar13 = piVar23[0x4c];
                      if (iVar13 <= iVar24) goto LAB_00019400;
                      iVar21 = piVar23[0x4b];
                      iVar6 = iVar24;
                      iVar17 = *(int *)(iVar21 + iVar24 * 4);
                    }
                    iVar6 = iVar6 + 1;
                  } while (iVar6 < iVar13);
                }
LAB_00019400:
                iVar6 = DAT_000187fc + 0x19418;
                av_log(0,0x20,DAT_00018800 + 0x19420,local_430);
                uVar7 = avfilter_get_by_name(iVar6);
                iVar6 = avfilter_graph_create_filter(&local_63c,uVar7,iVar6,local_430,0);
                if ((-1 < iVar6) &&
                   (iVar6 = avfilter_link(local_644,local_640,local_63c,0), -1 < iVar6)) {
                  local_640 = (undefined4 *)0x0;
                  local_644 = local_63c;
                  av_bprint_clear(&local_430);
                  goto LAB_00018c74;
                }
              }
LAB_00018ec8:
              av_bprint_finalize(&local_430,0);
            }
LAB_00018b48:
            iVar1 = *(int *)(iVar1 + 0xc);
            if (iVar1 == 0) goto LAB_00018edc;
            puVar18 = *(undefined4 **)(param_1[7] + local_684);
            local_684 = local_684 + 4;
          } while (puVar18[1] != 0);
        }
        av_log(0,8,DAT_0001877c + 0x18b8c,puVar18[3]);
                    /* WARNING: Subroutine does not return */
        FUN_0002b538(1);
      }
LAB_00018edc:
      avfilter_inout_free(&local_64c);
      if (**(int **)(iVar26 + DAT_000187ac) == 0) {
        avfilter_graph_set_auto_convert(param_1[2],0xffffffff);
      }
      iVar5 = avfilter_graph_config(param_1[2],0);
      if (-1 < iVar5) {
        iVar1 = *(int *)(param_1[2] + 8);
        if (iVar1 != 0) {
          piVar23 = (int *)(*(int *)(param_1[2] + 4) + -4);
          iVar5 = 0;
          pcVar14 = (char *)(DAT_000187b0 + 0x18f34);
          __s2 = (char *)(DAT_000187b4 + 0x18f38);
          do {
            piVar23 = piVar23 + 1;
            iVar26 = *piVar23;
            if ((((*(undefined4 **)(iVar26 + 4))[5] & 8) == 0) && (*(int *)(iVar26 + 0x20) != 0)) {
              uVar7 = 0;
              if (*(int *)(iVar26 + 0x14) != 0) goto LAB_00018f60;
              __s1 = (char *)**(undefined4 **)(iVar26 + 4);
              iVar26 = strcmp(__s1,pcVar14);
              if ((iVar26 != 0) && (iVar26 = strcmp(__s1,__s2), iVar26 != 0)) goto LAB_00018f60;
            }
            iVar5 = iVar5 + 1;
          } while (iVar1 != iVar5);
        }
        uVar7 = 1;
LAB_00018f60:
        param_1[4] = uVar7;
        if ((int)param_1[8] < 1) {
          param_1[3] = 1;
        }
        else {
          iVar1 = 0;
          do {
            puVar18 = *(undefined4 **)(param_1[7] + iVar1 * 4);
            uVar15 = *puVar18;
            uVar7 = av_buffersink_get_format(uVar15);
            puVar18[10] = uVar7;
            uVar7 = av_buffersink_get_w(uVar15);
            puVar18[6] = uVar7;
            uVar7 = av_buffersink_get_h(uVar15);
            puVar18[7] = uVar7;
            uVar7 = av_buffersink_get_sample_rate(uVar15);
            puVar18[0xb] = uVar7;
            av_channel_layout_uninit(puVar18 + 0xc);
            iVar5 = av_buffersink_get_ch_layout(uVar15,puVar18 + 0xc);
            if (iVar5 < 0) goto LAB_00017ec8;
            iVar5 = param_1[8];
            iVar1 = iVar1 + 1;
          } while (iVar1 < iVar5);
          param_1[3] = 1;
          if (0 < iVar5) {
            puVar18 = *(undefined4 **)(*(int *)param_1[7] + 4);
            iVar1 = puVar18[0x17];
            if (iVar1 != 0) {
              iVar26 = 0;
              do {
                if ((*(int *)(iVar1 + 8) == 1) && ((*(uint *)(iVar1 + 0x10) & 0x10000) == 0)) {
                  av_buffersink_set_frame_size
                            (*(undefined4 *)puVar18[0x4f],*(undefined4 *)(puVar18[0x15] + 0x13c));
                  iVar5 = param_1[8];
                }
                iVar26 = iVar26 + 1;
                if (iVar5 <= iVar26) goto LAB_00019694;
                puVar18 = *(undefined4 **)(*(int *)(param_1[7] + iVar26 * 4) + 4);
                iVar1 = puVar18[0x17];
              } while (iVar1 != 0);
            }
            iVar5 = -0x16;
            uVar7 = avcodec_get_name(*(undefined4 *)(*(int *)(puVar18[3] + 0xb4) + 4));
            av_log(0,0x10,DAT_0001882c + 0x19780,uVar7,*puVar18,puVar18[1]);
            goto LAB_00017ec8;
          }
        }
LAB_00019694:
        if (0 < (int)param_1[6]) {
          iVar1 = 0;
          do {
            while (iVar5 = av_fifo_read(*(undefined4 *)(*(int *)(param_1[5] + iVar1 * 4) + 0x14),
                                        &local_430,1), -1 < iVar5) {
              iVar5 = av_buffersrc_add_frame(**(undefined4 **)(param_1[5] + iVar1 * 4),local_430);
              av_frame_free(&local_430);
              if (iVar5 < 0) goto LAB_00017ec8;
            }
            iVar5 = param_1[6];
            iVar1 = iVar1 + 1;
          } while (iVar1 < iVar5);
          if (0 < iVar5) {
            iVar1 = 0;
            do {
              puVar18 = *(undefined4 **)(param_1[5] + iVar1 * 4);
              if (puVar18[0x14] != 0) {
                iVar5 = av_buffersrc_add_frame(*puVar18,0);
                if (iVar5 < 0) goto LAB_00017ec8;
                iVar5 = param_1[6];
              }
              iVar1 = iVar1 + 1;
            } while (iVar1 < iVar5);
            if (0 < iVar5) {
              iVar1 = 0;
              do {
                iVar22 = *(int *)(*(int *)(param_1[5] + iVar1 * 4) + 4);
                iVar26 = *(int *)(iVar22 + 0xf0);
                if ((iVar26 != 0) && (*(int *)(iVar22 + 0xf4) != 0)) {
                  while( true ) {
                    uVar32 = av_fifo_read(iVar26,&local_430,1);
                    if ((int)uVar32 < 0) break;
                    FUN_00035610(iVar22,(int)((ulonglong)uVar32 >> 0x20),0,0x80000000,&local_430);
                    avsubtitle_free(&local_430);
                    iVar26 = *(int *)(iVar22 + 0xf0);
                  }
                  iVar5 = param_1[6];
                }
                iVar1 = iVar1 + 1;
              } while (iVar1 < iVar5);
            }
          }
        }
        return 0;
      }
      goto LAB_00017ec8;
    }
LAB_00017acc:
    puVar8 = *(undefined4 **)param_1[5];
    puVar18 = (undefined4 *)puVar8[1];
    if (puVar18[7] != 0) {
      local_680 = 4;
      iVar22 = DAT_00017fd4 + 0x17b04;
      iVar27 = DAT_00017fd8 + 0x17b10;
      iVar1 = local_650;
      do {
        iVar5 = avfilter_pad_get_type
                          (*(undefined4 *)(*(int *)(iVar1 + 4) + 0xc),*(undefined4 *)(iVar1 + 8));
        if (iVar5 == 0) {
          uVar7 = avfilter_get_by_name(iVar22);
          piVar19 = (int *)puVar8[1];
          piVar23 = (int *)piVar19[0x28];
          bVar28 = piVar23 != (int *)0x0;
          if (bVar28) {
            iVar5 = piVar19[0x29];
          }
          else {
            iVar5 = piVar19[0x29];
          }
          piVar10 = *(int **)(iVar26 + DAT_00017ff4);
          iVar6 = *piVar19;
          if (bVar28) {
            local_668 = piVar23;
          }
          if (bVar28) {
            local_66c = iVar5;
          }
          piVar11 = *(int **)(*piVar10 + iVar6 * 4);
          piVar12 = piVar11;
          if (!bVar28) {
            iVar6 = *(int *)(piVar19[1] + 0xc);
            piVar12 = *(int **)(piVar19[1] + 0x10);
          }
          local_644 = (undefined4 *)0x0;
          if (!bVar28) {
            local_66c = iVar6;
            local_668 = piVar12;
          }
          local_640 = (undefined4 *)av_buffersrc_parameters_alloc();
          if (local_640 == (undefined4 *)0x0) {
            iVar5 = -0xc;
          }
          else {
            memset(local_640,0,0x50);
            iVar6 = piVar19[6];
            iVar13 = *(int *)(iVar6 + 8);
            *local_640 = 0xffffffff;
            if (iVar13 == 1) {
              iVar5 = -0x16;
              av_log(0,0x10,DAT_000187b8 + 0x19044);
              av_freep(&local_640);
            }
            else {
              if (piVar23 == (int *)0x0) {
                av_guess_frame_rate(&local_638,**(undefined4 **)(*piVar10 + *piVar19 * 4),piVar19[1]
                                    ,0);
                iVar6 = piVar19[6];
                piVar23 = local_638;
                iVar5 = iStack_634;
                if (*(int *)(iVar6 + 8) == 3) goto LAB_000184cc;
LAB_00017bd4:
                iVar6 = puVar8[10];
                local_674 = puVar8[9];
                if (iVar6 == 0) {
                  iVar6 = 1;
                  local_674 = 0;
                }
                av_bprint_init(&local_430,0,1);
                uVar32 = CONCAT44(local_66c,puVar8[6]);
                piVar10 = local_668;
                av_bprintf(&local_430,iVar27,puVar8[7],puVar8[8],puVar8[6],local_66c,local_668,
                           local_674,iVar6);
                if (piVar23 != (int *)0x0 && iVar5 != 0) {
                  av_bprintf(&local_430,DAT_00018754 + 0x186c4,piVar23,iVar5,uVar32,piVar10,
                             local_674,iVar6);
                }
                snprintf(acStack_530,0xff,(char *)(DAT_00017fdc + 0x17c64),*param_1,*piVar19);
                iVar5 = avfilter_graph_create_filter(puVar8,uVar7,acStack_530,local_430,0);
                if (-1 < iVar5) {
                  uVar7 = *puVar8;
                  local_640[9] = puVar8[0x12];
                  iVar5 = av_buffersrc_parameters_set(uVar7);
                  if (-1 < iVar5) {
                    av_freep(&local_640);
                    local_648 = (undefined4 *)*puVar8;
                    iVar5 = av_pix_fmt_desc_get(puVar8[6]);
                    if (iVar5 == 0) {
                      av_log(0,0,DAT_00019b88 + 0x19b2c,DAT_00019b84 + 0x19b28,
                             DAT_00019b80 + 0x19b1c,0x303);
                    /* WARNING: Subroutine does not return */
                      abort();
                    }
                    if ((piVar19[0x2c] == 0) || ((*(uint *)(iVar5 + 8) & 8) != 0))
                    goto LAB_00017df4;
                    piVar23 = (int *)puVar8[0x13];
                    if (piVar23 == (int *)0x0) {
                      piVar23 = (int *)av_stream_get_side_data(piVar19[1],5,0);
                    }
                    uVar7 = FUN_0002d7b8(piVar23);
                    dVar30 = (double)CONCAT44(extraout_s1,uVar7);
                    if (ABS(dVar30 - DAT_00017f98) < 1.0) {
                      if (piVar23[3] < 1) {
                        iVar5 = DAT_00018838 + 0x19830;
                      }
                      else {
                        iVar5 = DAT_00018808 + 0x1958c;
                      }
                      iVar6 = DAT_0001880c + 0x19594;
LAB_00019590:
                      uVar7 = avfilter_get_by_name(iVar6);
LAB_00017db8:
                      iVar5 = avfilter_graph_create_filter(&local_630,uVar7,iVar6,iVar5,0);
                      if ((iVar5 < 0) ||
                         (iVar5 = avfilter_link(local_648,local_644,local_630,0), iVar5 < 0))
                      goto LAB_00017eb8;
                      local_644 = (undefined4 *)0x0;
                      local_648 = local_630;
                    }
                    else if (ABS(dVar30 - DAT_00017fa0) < 1.0) {
                      if (*piVar23 < 0) {
                        iVar5 = DAT_00019b60 + 0x199ac;
                        uVar7 = avfilter_get_by_name(iVar5);
                        iVar5 = avfilter_graph_create_filter(&local_630,uVar7,iVar5,0,0);
                        if ((iVar5 < 0) ||
                           (iVar5 = avfilter_link(local_648,local_644,local_630,0), iVar5 < 0))
                        goto LAB_00017eb8;
                        local_648 = local_630;
                        local_644 = (undefined4 *)0x0;
                      }
                      if (piVar23[4] < 0) {
                        iVar6 = DAT_000187f4 + 0x19378;
LAB_00017d98:
                        uVar7 = avfilter_get_by_name(iVar6);
                        iVar5 = 0;
                        goto LAB_00017db8;
                      }
                    }
                    else {
                      if (ABS(dVar30 - DAT_00017fa8) < 1.0) {
                        if (piVar23[3] < 0) {
                          iVar5 = DAT_00019b64 + 0x19a10;
                        }
                        else {
                          iVar5 = DAT_00019b3c + 0x1985c;
                        }
                        iVar6 = DAT_00019b40 + 0x19864;
                        goto LAB_00019590;
                      }
                      if (1.0 < ABS(dVar30)) {
                        iVar5 = DAT_00019b54 + 0x19920;
                        snprintf((char *)&local_630,0x40,(char *)(DAT_00019b50 + 0x19918));
                        uVar7 = avfilter_get_by_name(iVar5);
                        iVar5 = avfilter_graph_create_filter(&local_63c,uVar7,iVar5,&local_630,0);
                        if ((iVar5 < 0) ||
                           (iVar5 = avfilter_link(local_648,local_644,local_63c,0), iVar5 < 0))
                        goto LAB_00017eb8;
                        local_648 = local_63c;
                        local_644 = (undefined4 *)0x0;
                      }
                      else if ((piVar23 != (int *)0x0 && ABS(dVar30) < 1.0) && (piVar23[4] < 0)) {
                        iVar6 = DAT_00017fe0 + 0x17d9c;
                        goto LAB_00017d98;
                      }
                    }
LAB_00017df4:
                    snprintf(acStack_530,0xff,(char *)(DAT_00017fe4 + 0x17e14),*piVar19,
                             *(undefined4 *)piVar19[1]);
                    if (**(int **)(iVar26 + DAT_00018024) == 0) {
                      iVar20 = 0;
                      iVar21 = 0;
                      iVar5 = piVar11[0x12];
                      iVar6 = piVar11[0x13];
LAB_00017e40:
                      bVar28 = iVar6 != -0x80000000;
                      bVar29 = iVar5 != 0;
                      iVar13 = iVar5;
                      iVar3 = iVar6;
                      iVar5 = iVar20;
                      iVar6 = iVar21;
                      if (bVar28 || bVar29) {
LAB_00017e4c:
                        iVar13 = iVar5;
                        iVar3 = iVar6;
                        if (piVar11[0x1a] == 0) {
                          iVar13 = 0;
                          iVar3 = -0x80000000;
                        }
                      }
                    }
                    else {
                      iVar5 = piVar11[0x12];
                      iVar6 = piVar11[0x13];
                      uVar32 = *(undefined8 *)(piVar11 + 0x12);
                      if (iVar6 != -0x80000000 || iVar5 != 0) {
                        if (**(int **)(iVar26 + DAT_0001874c) == 0) {
                          iVar13 = *(int *)(*piVar11 + 0x28);
                          iVar3 = *(int *)(*piVar11 + 0x2c);
                          if (iVar3 != -0x80000000 || iVar13 != 0) goto LAB_00018718;
                        }
                        goto LAB_00017e4c;
                      }
                      iVar13 = iVar5;
                      iVar3 = iVar6;
                      if (**(int **)(iVar26 + DAT_0001874c) == 0) {
                        iVar13 = *(int *)(*piVar11 + 0x28);
                        iVar3 = *(int *)(*piVar11 + 0x2c);
                        if (iVar3 != iVar6 || iVar13 != iVar5) {
                          uVar32 = 0;
LAB_00018718:
                          uVar32 = VectorAdd(uVar32,CONCAT44(iVar3,iVar13),8);
                          iVar21 = (int)((ulonglong)uVar32 >> 0x20);
                          iVar20 = (int)uVar32;
                          goto LAB_00017e40;
                        }
                      }
                    }
                    iVar5 = FUN_00016ee0(iVar13,iVar3,piVar11[0x14],piVar11[0x15],&local_648,
                                         &local_644,acStack_530);
                    if ((-1 < iVar5) &&
                       (iVar5 = avfilter_link(local_648,0,*(undefined4 *)(iVar1 + 4),
                                              *(undefined4 *)(iVar1 + 8)), -1 < iVar5))
                    goto LAB_00018324;
                    goto LAB_00017eb8;
                  }
                }
              }
              else {
                if (iVar13 != 3) goto LAB_00017bd4;
LAB_000184cc:
                iVar3 = puVar8[7];
                iVar13 = puVar8[8];
                if (iVar13 == 0 || iVar3 == 0) {
                  iVar6 = **(int **)(*piVar10 + *piVar19 * 4);
                  if (*(int *)(iVar6 + 0x18) == 0) {
LAB_00019314:
                    if (iVar3 < 0x2d0) {
                      iVar3 = 0x2d0;
                    }
                    if (iVar13 < 0x240) {
                      iVar13 = 0x240;
                    }
                  }
                  else {
                    piVar10 = *(int **)(iVar6 + 0x1c);
                    do {
                      piVar12 = piVar10 + 1;
                      piVar10 = *(int **)(*piVar10 + 0xb4);
                      if (*piVar10 == 0) {
                        if (iVar3 < piVar10[0xc]) {
                          iVar3 = piVar10[0xc];
                        }
                        if (iVar13 < piVar10[0xd]) {
                          iVar13 = piVar10[0xd];
                        }
                      }
                      piVar10 = piVar12;
                    } while (*(int **)(iVar6 + 0x1c) + *(int *)(iVar6 + 0x18) != piVar12);
                    if (iVar13 == 0 || iVar3 == 0) goto LAB_00019314;
                  }
                  av_log(iVar6,0x20,DAT_00018744 + 0x18560,iVar3,iVar13);
                  iVar6 = piVar19[6];
                }
                iVar20 = *(int *)(iVar6 + 0x5c);
                iVar6 = *(int *)(iVar6 + 0x60);
                piVar19[0x3e] = iVar3;
                piVar19[0x3f] = iVar13;
                if (iVar20 == 0) {
                  iVar20 = iVar3;
                }
                puVar8[7] = iVar20;
                if (iVar6 == 0) {
                  iVar6 = iVar13;
                }
                puVar8[6] = 0x1c;
                puVar8[8] = iVar6;
                iVar6 = av_frame_alloc();
                piVar19[0x3d] = iVar6;
                if (iVar6 != 0) {
                  piVar19[0x38] = 0;
                  piVar19[0x39] = -0x80000000;
                  piVar19[0x3a] = 0;
                  piVar19[0x3b] = -0x80000000;
                  piVar19[0x40] = 1;
                  goto LAB_00017bd4;
                }
                iVar5 = -0xc;
              }
              av_freep(&local_640);
            }
          }
          goto LAB_00017eb8;
        }
        if (iVar5 != 1) {
          av_log(0,0,DAT_00019b70 + 0x19acc,DAT_00019b6c + 0x19ac8,DAT_00019b68 + 0x19ab8,0x3bb);
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar7 = avfilter_get_by_name(DAT_00017ff0 + 0x18048);
        piVar19 = (int *)puVar8[1];
        piVar23 = *(int **)(**(int **)(iVar26 + DAT_00017ff4) + *piVar19 * 4);
        local_640 = (undefined4 *)0x0;
        if (*(int *)(piVar19[6] + 8) != 1) {
          iVar5 = -0x16;
          av_log(0,0x10,DAT_00018830 + 0x197ac);
          goto LAB_00017eb8;
        }
        av_bprint_init(&local_430,0,1);
        uVar15 = puVar8[0xb];
        av_get_sample_fmt_name(puVar8[6]);
        av_bprintf(&local_430,DAT_00017ff8 + 0x180c0,1,uVar15,uVar15);
        iVar5 = av_channel_layout_check(puVar8 + 0xc);
        if ((iVar5 == 0) || (puVar8[0xc] == 0)) {
          av_bprintf(&local_430,DAT_00017ffc + 0x180f8,puVar8[0xd]);
        }
        else {
          av_bprintf(&local_430,DAT_00018748 + 0x185d0);
          av_channel_layout_describe_bprint(puVar8 + 0xc,&local_430);
        }
        snprintf((char *)&local_630,0xff,(char *)(DAT_00018000 + 0x18120),*param_1,*piVar19);
        dVar30 = (double)((ulonglong)(uint)param_1[2] << 0x20);
        iVar5 = avfilter_graph_create_filter(puVar8,uVar7,&local_630,local_430,0);
        if (iVar5 < 0) goto LAB_00017eb8;
        local_644 = (undefined4 *)*puVar8;
        iVar5 = **(int **)(iVar26 + DAT_00018004);
        if (0 < iVar5) {
          memset(acStack_530,0,0x100);
          av_strlcatf(acStack_530,0x100,DAT_0001802c + 0x183bc,iVar5);
          dVar31 = (double)**(float **)(iVar26 + DAT_00018030);
          if (dVar31 != DAT_00018730) {
            av_strlcatf(acStack_530,0x100,DAT_000187c0 + 0x19080,*(float **)(iVar26 + DAT_00018030),
                        dVar31);
            dVar30 = dVar31;
          }
          if (param_1[3] == 0) {
            av_strlcatf(acStack_530,0x100,DAT_000187bc + 0x19064,0,dVar30);
          }
          iVar5 = DAT_0001873c;
          av_log(0,0x20,DAT_00018738 + 0x18404,acStack_530);
          snprintf((char *)&local_630,0xff,(char *)(DAT_00018740 + 0x18434),*param_1,iVar5 + 0x18418
                   ,*piVar19,*(undefined4 *)piVar19[1]);
          uVar7 = avfilter_get_by_name(iVar5 + 0x18418);
          iVar5 = avfilter_graph_create_filter(&local_63c,uVar7,&local_630,acStack_530,0);
          if ((iVar5 < 0) || (iVar5 = avfilter_link(local_644,0,local_63c,0), iVar5 < 0))
          goto LAB_00017eb8;
          local_644 = local_63c;
        }
        iVar5 = DAT_00018010;
        piVar10 = *(int **)(iVar26 + DAT_00018008);
        if (*piVar10 != 0x100) {
          av_log(0,0x18,DAT_0001800c + 0x181a4);
          iVar6 = *piVar10;
          uVar32 = VectorSignedFixedToFloat(CONCAT44(iVar6,iVar6),0x20,8);
          snprintf(acStack_530,0x100,(char *)(DAT_00018014 + 0x181cc),iVar6,uVar32);
          av_log(0,0x20,DAT_00018018 + 0x181e8,acStack_530);
          snprintf((char *)&local_630,0xff,(char *)(DAT_0001801c + 0x1820c),*param_1,iVar5 + 0x181c0
                   ,*piVar19,*(undefined4 *)piVar19[1]);
          uVar7 = avfilter_get_by_name(iVar5 + 0x181c0);
          iVar5 = avfilter_graph_create_filter(&local_63c,uVar7,&local_630,acStack_530,0);
          if ((iVar5 < 0) || (iVar5 = avfilter_link(local_644,0,local_63c,0), iVar5 < 0))
          goto LAB_00017eb8;
          local_644 = local_63c;
        }
        snprintf((char *)&local_630,0xff,(char *)(DAT_00018020 + 0x1828c),*piVar19,
                 *(undefined4 *)piVar19[1]);
        if (**(int **)(iVar26 + DAT_00018024) == 0) {
          iVar20 = 0;
          iVar21 = 0;
          iVar5 = piVar23[0x12];
          iVar6 = piVar23[0x13];
LAB_000182b8:
          bVar28 = iVar6 != -0x80000000;
          bVar29 = iVar5 != 0;
          iVar13 = iVar5;
          iVar3 = iVar6;
          iVar5 = iVar20;
          iVar6 = iVar21;
          if (bVar28 || bVar29) {
LAB_000182c4:
            iVar13 = iVar5;
            iVar3 = iVar6;
            if (piVar23[0x1a] == 0) {
              iVar13 = 0;
              iVar3 = -0x80000000;
            }
          }
        }
        else {
          iVar5 = piVar23[0x12];
          iVar6 = piVar23[0x13];
          uVar32 = *(undefined8 *)(piVar23 + 0x12);
          if (iVar6 != -0x80000000 || iVar5 != 0) {
            if (**(int **)(iVar26 + DAT_0001874c) == 0) {
              iVar13 = *(int *)(*piVar23 + 0x28);
              iVar3 = *(int *)(*piVar23 + 0x2c);
              if (iVar3 != -0x80000000 || iVar13 != 0) goto LAB_00018630;
            }
            goto LAB_000182c4;
          }
          iVar13 = iVar5;
          iVar3 = iVar6;
          if (**(int **)(iVar26 + DAT_0001874c) == 0) {
            iVar13 = *(int *)(*piVar23 + 0x28);
            iVar3 = *(int *)(*piVar23 + 0x2c);
            if (iVar3 != iVar6 || iVar13 != iVar5) {
              uVar32 = 0;
LAB_00018630:
              uVar32 = VectorAdd(uVar32,CONCAT44(iVar3,iVar13),8);
              iVar21 = (int)((ulonglong)uVar32 >> 0x20);
              iVar20 = (int)uVar32;
              goto LAB_000182b8;
            }
          }
        }
        iVar5 = FUN_00016ee0(iVar13,iVar3,piVar23[0x14],piVar23[0x15],&local_644,&local_640,
                             &local_630);
        if ((iVar5 < 0) ||
           (iVar5 = avfilter_link(local_644,0,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8))
           , iVar5 < 0)) goto LAB_00017eb8;
LAB_00018324:
        iVar1 = *(int *)(iVar1 + 0xc);
        if (iVar1 == 0) goto LAB_00018844;
        puVar8 = *(undefined4 **)(param_1[5] + local_680);
        local_680 = local_680 + 4;
        puVar18 = (undefined4 *)puVar8[1];
      } while (puVar18[7] != 0);
    }
    iVar5 = -0x434544f8;
    av_log(0,0x10,DAT_00018028 + 0x18378,*puVar18,*(undefined4 *)puVar18[1]);
LAB_00017eb8:
    avfilter_inout_free(&local_650);
    avfilter_inout_free(&local_64c);
  }
  else {
    if (local_650 == 0) {
      if (local_64c == 0) {
        iVar26 = DAT_00019b44 + 0x19878;
        iVar1 = iVar26;
      }
      else if (*(int *)(local_64c + 0xc) == 0) {
        iVar26 = DAT_00019b5c + 0x19998;
        iVar1 = DAT_00019b58 + 0x19994;
      }
      else {
        iVar26 = DAT_00018814 + 0x195e0;
        iVar1 = DAT_00018810 + 0x195dc;
      }
    }
    else if (*(int *)(local_650 + 0xc) == 0) {
      if (local_64c == 0) {
        iVar26 = DAT_00019b38 + 0x19844;
        iVar1 = DAT_0001883c + 0x19840;
      }
      else {
        if (*(int *)(local_64c + 0xc) == 0) goto LAB_00017acc;
        iVar26 = DAT_000187dc + 0x191d0;
        iVar1 = DAT_000187d8 + 0x191cc;
      }
    }
    else if (local_64c == 0) {
      iVar26 = DAT_00018820 + 0x19608;
      iVar1 = DAT_0001881c + 0x19604;
    }
    else if (*(int *)(local_64c + 0xc) == 0) {
      iVar26 = DAT_000187f0 + 0x1933c;
      iVar1 = DAT_000187ec + 0x19338;
    }
    else {
      iVar26 = DAT_00017fe8 + 0x17f6c;
      iVar1 = iVar26;
    }
    iVar5 = -0x16;
    av_log(0,0x10,DAT_00017fec + 0x17f90,uVar7,iVar26,iVar1);
  }
LAB_00017ec8:
  iVar1 = param_1[8];
  if (0 < iVar1) {
    puVar8 = (undefined4 *)param_1[7];
    puVar18 = puVar8;
    do {
      puVar9 = puVar18 + 1;
      *(undefined4 *)*puVar18 = 0;
      puVar18 = puVar9;
    } while (puVar8 + iVar1 != puVar9);
  }
  iVar1 = param_1[6];
  if (0 < iVar1) {
    puVar8 = (undefined4 *)param_1[5];
    puVar18 = puVar8;
    do {
      puVar9 = puVar18 + 1;
      *(undefined4 *)*puVar18 = 0;
      puVar18 = puVar9;
    } while (puVar8 + iVar1 != puVar9);
  }
  avfilter_graph_free(param_1 + 2);
  return iVar5;
}



/* ===== FUN_00019c68 @ 00019c68 size=100 ===== */

undefined4 * FUN_00019c68(char *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = *(int *)(DAT_00019ccc + 0x19c78);
  if (0 < iVar5) {
    iVar2 = 0;
    puVar3 = (undefined4 *)(*(int *)(DAT_00019ccc + 0x19c7c) + -4);
    do {
      puVar3 = puVar3 + 1;
      puVar4 = (undefined4 *)*puVar3;
      iVar2 = iVar2 + 1;
      iVar1 = strcmp((char *)*puVar4,param_1);
      if (iVar1 == 0) {
        return puVar4;
      }
    } while (iVar2 != iVar5);
  }
  return (undefined4 *)0x0;
}



/* ===== FUN_00019cd0 @ 00019cd0 size=140 ===== */

char * FUN_00019cd0(void)

{
  char *__s;
  size_t sVar1;
  int iVar2;
  int iVar3;
  char *__format;
  char *local_1c [2];
  
  __s = (char *)av_hwdevice_get_type_name();
  sVar1 = strlen(__s);
  local_1c[0] = (char *)av_malloc(sVar1 + 4);
  if (local_1c[0] != (char *)0x0) {
    iVar3 = 0;
    __format = (char *)(DAT_00019d5c + 0x19d0c);
    do {
      snprintf(local_1c[0],sVar1 + 4,__format,__s,iVar3);
      iVar2 = FUN_00019c68(local_1c[0]);
      iVar3 = iVar3 + 1;
      if (iVar2 == 0) {
        return local_1c[0];
      }
    } while (iVar3 != 1000);
    av_freep(local_1c);
  }
  return (char *)0x0;
}



/* ===== FUN_00019d60 @ 00019d60 size=260 ===== */

int FUN_00019d60(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int local_28;
  int local_24;
  
  local_28 = 0;
  local_24 = FUN_00019cd0();
  if (local_24 != 0) {
    iVar1 = av_hwdevice_ctx_create(&local_28,param_1,param_2,0,0);
    iVar3 = DAT_00019e64;
    if (iVar1 < 0) {
      av_log(0,0x10,DAT_00019e68 + 0x19e40,iVar1);
      goto LAB_00019e40;
    }
    piVar6 = (int *)(DAT_00019e64 + 0x19dc0);
    iVar1 = av_reallocp_array(DAT_00019e64 + 0x19dc4,*piVar6 + 1,4);
    if (iVar1 != 0) {
      *piVar6 = 0;
      iVar1 = -0xc;
      goto LAB_00019e40;
    }
    iVar7 = *piVar6;
    iVar5 = *(int *)(iVar3 + 0x19dc4);
    uVar2 = av_mallocz(0xc);
    iVar1 = *piVar6;
    iVar3 = *(int *)(iVar3 + 0x19dc4);
    *(undefined4 *)(iVar5 + iVar7 * 4) = uVar2;
    piVar4 = *(int **)(iVar3 + iVar1 * 4);
    if (piVar4 != (int *)0x0) {
      *piVar6 = iVar1 + 1;
      *piVar4 = local_24;
      piVar4[1] = param_1;
      piVar4[2] = local_28;
      *param_3 = piVar4;
      return 0;
    }
  }
  iVar1 = -0xc;
LAB_00019e40:
  av_freep(&local_24);
  av_buffer_unref(&local_28);
  return iVar1;
}



/* ===== FUN_00019e6c @ 00019e6c size=924 ===== */

int FUN_00019e6c(char *param_1,undefined4 *param_2)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  char *__s;
  int iVar12;
  undefined4 local_3c;
  int local_38;
  int local_34;
  char *local_30;
  int local_2c [2];
  
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = (char *)0x0;
  local_2c[0] = 0;
  sVar1 = strcspn(param_1,(char *)(DAT_0001a208 + 0x19e8c));
  local_38 = av_strndup(param_1,sVar1);
  if (local_38 == 0) goto LAB_0001a090;
  iVar2 = av_hwdevice_find_type_by_name();
  if (iVar2 == 0) {
    iVar2 = DAT_0001a230 + 0x1a1dc;
    goto LAB_0001a1a8;
  }
  pcVar9 = param_1 + sVar1;
  if (param_1[sVar1] == '=') {
    sVar1 = strcspn(pcVar9 + 1,(char *)(DAT_0001a218 + 0x19fec));
    local_34 = av_strndup(pcVar9 + 1,sVar1);
    if (local_34 == 0) goto LAB_0001a090;
    iVar3 = FUN_00019c68();
    if (iVar3 != 0) {
      iVar2 = DAT_0001a234 + 0x1a1ec;
LAB_0001a1a8:
      iVar3 = -0x16;
      av_log(0,0x10,DAT_0001a22c + 0x1a1c4,param_1,iVar2);
      goto LAB_0001a0b4;
    }
    pcVar9 = pcVar9 + sVar1 + 1;
    cVar6 = *pcVar9;
    if (cVar6 == '\0') goto LAB_0001a028;
LAB_00019ef4:
    if (cVar6 != ':') {
      if (cVar6 == '@') {
        iVar3 = FUN_00019c68(pcVar9 + 1);
        if (iVar3 != 0) {
          iVar3 = av_hwdevice_ctx_create_derived(local_2c,iVar2,*(undefined4 *)(iVar3 + 8),0);
          iVar7 = DAT_0001a214;
          goto joined_r0x0001a138;
        }
        iVar2 = (int)&DAT_0001a208 + DAT_0001a23c;
      }
      else if (cVar6 == ',') {
        iVar3 = av_dict_parse_string
                          (&local_3c,pcVar9 + 1,DAT_0001a210 + 0x19f34,DAT_0001a20c + 0x19f24,0);
        if (-1 < iVar3) {
          iVar3 = av_hwdevice_ctx_create(local_2c,iVar2,0,local_3c,0);
          iVar7 = DAT_0001a214;
          goto joined_r0x0001a138;
        }
LAB_0001a1ec:
        iVar2 = DAT_0001a238 + 0x1a1f8;
      }
      else {
        iVar2 = DAT_0001a228 + 0x1a1ac;
      }
      goto LAB_0001a1a8;
    }
    __s = pcVar9 + 1;
    pcVar5 = strchr(__s,0x2c);
    if (pcVar5 == (char *)0x0) {
      if (pcVar9[1] == '\0') {
        __s = (char *)0x0;
      }
    }
    else {
      if ((0 < (int)pcVar5 - (int)__s) &&
         (local_30 = (char *)av_strndup(__s), local_30 == (char *)0x0)) goto LAB_0001a090;
      iVar3 = av_dict_parse_string
                        (&local_3c,pcVar5 + 1,DAT_0001a224 + 0x1a108,DAT_0001a220 + 0x1a104,0);
      __s = local_30;
      if (iVar3 < 0) goto LAB_0001a1ec;
    }
    iVar3 = av_hwdevice_ctx_create(local_2c,iVar2,__s,local_3c,0);
    iVar7 = DAT_0001a214;
joined_r0x0001a138:
    DAT_0001a214 = iVar7;
    if (-1 < iVar3) {
      piVar10 = (int *)(iVar7 + 0x19f70);
      iVar3 = av_reallocp_array(iVar7 + 0x19f74,*piVar10 + 1,4);
      if (iVar3 == 0) {
        iVar12 = *piVar10;
        iVar11 = *(int *)(iVar7 + 0x19f74);
        uVar4 = av_mallocz(0xc);
        iVar3 = *piVar10;
        iVar7 = *(int *)(iVar7 + 0x19f74);
        *(undefined4 *)(iVar11 + iVar12 * 4) = uVar4;
        piVar8 = *(int **)(iVar7 + iVar3 * 4);
        if (piVar8 != (int *)0x0) {
          piVar8[1] = iVar2;
          *piVar8 = local_34;
          piVar8[2] = local_2c[0];
          *piVar10 = iVar3 + 1;
          if (param_2 != (undefined4 *)0x0) {
            *param_2 = piVar8;
          }
          local_34 = 0;
          iVar3 = 0;
          goto LAB_0001a0b4;
        }
        goto LAB_0001a090;
      }
      iVar3 = -0xc;
      *piVar10 = 0;
    }
  }
  else {
    local_34 = FUN_00019cd0();
    if (local_34 != 0) {
      cVar6 = *pcVar9;
      if (cVar6 != '\0') goto LAB_00019ef4;
LAB_0001a028:
      iVar3 = av_hwdevice_ctx_create(local_2c,iVar2,0,0,0);
      iVar7 = DAT_0001a214;
      goto joined_r0x0001a138;
    }
LAB_0001a090:
    iVar3 = -0xc;
  }
  av_log(0,0x10,DAT_0001a21c + 0x1a0ac,iVar3);
  av_buffer_unref(local_2c);
LAB_0001a0b4:
  av_freep(&local_38);
  av_freep(&local_34);
  av_freep(&local_30);
  av_dict_free(&local_3c);
  return iVar3;
}



/* ===== FUN_0001a240 @ 0001a240 size=116 ===== */

void FUN_0001a240(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  iVar3 = DAT_0001a2b4;
  piVar6 = (int *)(DAT_0001a2b4 + 0x1a250);
  if (0 < *piVar6) {
    iVar4 = 0;
    do {
      iVar1 = iVar4 * 4;
      av_freep(*(undefined4 *)(*(int *)(iVar3 + 0x1a254) + iVar4 * 4));
      iVar2 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      av_buffer_unref(*(int *)(*(int *)(iVar3 + 0x1a254) + iVar2) + 8);
      av_freep(*(int *)(iVar3 + 0x1a254) + iVar1);
    } while (iVar4 < *piVar6);
  }
  puVar5 = (undefined4 *)(DAT_0001a2b8 + 0x1a2a4);
  av_freep(DAT_0001a2b8 + 0x1a2a8);
  *puVar5 = 0;
  return;
}



/* ===== FUN_0001a2bc @ 0001a2bc size=1144 ===== */

undefined4 FUN_0001a2bc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int unaff_r4;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  int iVar12;
  bool bVar13;
  undefined4 *local_24;
  
  iVar6 = DAT_0001a74c;
  local_24 = (undefined4 *)0x0;
  if (*(int *)(param_1 + 0x11c) == 0) {
    if (*(int *)(param_1 + 0x114) == 1) {
LAB_0001a40c:
      iVar9 = avcodec_get_hw_config(*(undefined4 *)(param_1 + 0x1c),0);
      puVar11 = local_24;
      iVar6 = DAT_0001a73c;
      if (iVar9 == 0) {
        return 0;
      }
      if (local_24 == (undefined4 *)0x0) {
        piVar10 = (int *)(DAT_0001a73c + 0x1a440);
        iVar12 = DAT_0001a740 + 0x1a444;
        iVar9 = 0;
        puVar5 = puVar11;
LAB_0001a440:
        do {
          do {
            do {
              local_24 = puVar5;
              iVar2 = avcodec_get_hw_config(*(undefined4 *)(param_1 + 0x1c),iVar9);
              if (iVar2 == 0) {
                if (local_24 == (undefined4 *)0x0) {
                  iVar12 = DAT_0001a744 + 0x1a520;
                  iVar9 = DAT_0001a748 + 0x1a524;
                  iVar6 = 0;
                  goto LAB_0001a554;
                }
                goto LAB_0001a4f0;
              }
              iVar9 = iVar9 + 1;
              unaff_r4 = *(int *)(iVar2 + 8);
              puVar5 = puVar11;
            } while (*piVar10 < 1);
            local_24 = (undefined4 *)0x0;
            iVar2 = 0;
            piVar4 = (int *)(*(int *)(iVar6 + 0x1a444) + -4);
            do {
              piVar4 = piVar4 + 1;
              iVar2 = iVar2 + 1;
              if ((unaff_r4 == ((undefined4 *)*piVar4)[1]) &&
                 (bVar13 = local_24 != (undefined4 *)0x0, local_24 = (undefined4 *)*piVar4, bVar13))
              goto LAB_0001a440;
            } while (iVar2 != *piVar10);
            puVar5 = local_24;
          } while (local_24 == (undefined4 *)0x0);
          uVar3 = *(undefined4 *)(param_1 + 0x18);
          uVar1 = av_hwdevice_get_type_name(unaff_r4);
          av_log(uVar3,0x20,iVar12,uVar1,*local_24);
          puVar5 = local_24;
        } while (local_24 == (undefined4 *)0x0);
      }
      goto LAB_0001a4f0;
    }
    if (*(int *)(param_1 + 0x114) != 2) {
      uVar1 = *(undefined4 *)(param_1 + 0x1c);
      piVar10 = (int *)(DAT_0001a74c + 0x1a5f0);
      iVar9 = 0;
LAB_0001a5f4:
      iVar12 = avcodec_get_hw_config(uVar1,iVar9);
      if (iVar12 == 0) {
        return 0;
      }
      if ((*(uint *)(iVar12 + 4) & 1) != 0) {
        iVar2 = *piVar10;
        if (0 < iVar2) {
          puVar11 = (undefined4 *)0x0;
          iVar7 = 1;
          piVar4 = (int *)(*(int *)(iVar6 + 0x1a5f4) + -4);
          do {
            piVar4 = piVar4 + 1;
            puVar5 = (undefined4 *)*piVar4;
            if (*(int *)(iVar12 + 8) == puVar5[1]) {
              if (puVar11 != (undefined4 *)0x0) break;
              puVar11 = puVar5;
              if (iVar2 <= iVar7) goto LAB_0001a6c0;
            }
            else if (iVar2 <= iVar7) goto LAB_0001a674;
            iVar7 = iVar7 + 1;
          } while( true );
        }
      }
      goto LAB_0001a5f0;
    }
    iVar6 = *(int *)(param_1 + 0x118);
    if (*(int *)(DAT_0001a734 + 0x1a368) < 1) {
LAB_0001a3a8:
      if ((iVar6 != 5) ||
         (local_24 = (undefined4 *)FUN_00019c68(DAT_0001a754 + 0x1a6d4), puVar11 = local_24,
         local_24 == (undefined4 *)0x0)) {
        uVar1 = FUN_00019d60(iVar6,0,&local_24);
        goto LAB_0001a3c4;
      }
    }
    else {
      piVar10 = (int *)(*(int *)(DAT_0001a734 + 0x1a36c) + -4);
      iVar9 = 0;
      puVar11 = (undefined4 *)0x0;
      do {
        piVar10 = piVar10 + 1;
        iVar9 = iVar9 + 1;
        if ((iVar6 == ((undefined4 *)*piVar10)[1]) &&
           (bVar13 = puVar11 != (undefined4 *)0x0, puVar11 = (undefined4 *)*piVar10, bVar13))
        goto LAB_0001a3a8;
      } while (iVar9 != *(int *)(DAT_0001a734 + 0x1a368));
      local_24 = puVar11;
      if (puVar11 == (undefined4 *)0x0) goto LAB_0001a3a8;
    }
LAB_0001a6c0:
    local_24 = puVar11;
    iVar9 = *(int *)(param_1 + 0x18);
  }
  else {
    local_24 = (undefined4 *)FUN_00019c68(*(int *)(param_1 + 0x11c));
    iVar6 = *(int *)(param_1 + 0x114);
    if (local_24 != (undefined4 *)0x0) {
      iVar9 = *(int *)(param_1 + 0x18);
      if (iVar6 == 1) {
        *(undefined4 *)(param_1 + 0x118) = local_24[1];
      }
      else if (*(int *)(param_1 + 0x118) != local_24[1]) {
        uVar8 = *local_24;
        uVar1 = av_hwdevice_get_type_name();
        uVar3 = av_hwdevice_get_type_name(*(undefined4 *)(param_1 + 0x118));
        av_log(iVar9,0x10,DAT_0001a758 + 0x1a724,uVar8,uVar1,uVar3);
        return 0xffffffea;
      }
      goto LAB_0001a318;
    }
    if (iVar6 == 1) goto LAB_0001a40c;
    if (iVar6 != 2) {
      return 0;
    }
    iVar6 = *(int *)(param_1 + 0x118);
    uVar1 = FUN_00019d60(iVar6,*(undefined4 *)(param_1 + 0x11c),&local_24);
LAB_0001a3c4:
    iVar9 = *(int *)(param_1 + 0x18);
    if (local_24 == (undefined4 *)0x0) {
      uVar3 = av_hwdevice_get_type_name(iVar6);
      av_log(iVar9,0x10,DAT_0001a738 + 0x1a3f4,uVar3,**(undefined4 **)(param_1 + 0x1c));
      return uVar1;
    }
  }
LAB_0001a318:
  uVar1 = av_buffer_ref(local_24[2]);
  iVar6 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(iVar9 + 0x2e8) = uVar1;
  if (*(int *)(iVar6 + 0x2e8) != 0) {
    return 0;
  }
  return 0xfffffff4;
  while( true ) {
    unaff_r4 = *(int *)(iVar2 + 8);
    iVar2 = FUN_00019d60(unaff_r4,*(undefined4 *)(param_1 + 0x11c),&local_24);
    if (-1 < iVar2) {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      if (*(int *)(param_1 + 0x11c) == 0) {
        uVar3 = av_hwdevice_get_type_name(unaff_r4);
        av_log(uVar1,0x20,iVar12,uVar3);
      }
      else {
        uVar3 = av_hwdevice_get_type_name(unaff_r4);
        av_log(uVar1,0x20,iVar9,uVar3,*(undefined4 *)(param_1 + 0x11c));
      }
    }
    iVar6 = iVar6 + 1;
    if (local_24 != (undefined4 *)0x0) break;
LAB_0001a554:
    iVar2 = avcodec_get_hw_config(*(undefined4 *)(param_1 + 0x1c),iVar6);
    if (iVar2 == 0) {
      iVar9 = *(int *)(param_1 + 0x18);
      if (local_24 == (undefined4 *)0x0) {
        av_log(iVar9,0x20,DAT_0001a750 + 0x1a6ac);
        *(undefined4 *)(param_1 + 0x114) = 0;
        return 0;
      }
      goto LAB_0001a4f4;
    }
  }
LAB_0001a4f0:
  iVar9 = *(int *)(param_1 + 0x18);
LAB_0001a4f4:
  *(int *)(param_1 + 0x118) = unaff_r4;
  goto LAB_0001a318;
LAB_0001a674:
  if (puVar11 != (undefined4 *)0x0) goto LAB_0001a6c0;
LAB_0001a5f0:
  iVar9 = iVar9 + 1;
  goto LAB_0001a5f4;
}



/* ===== FUN_0001a75c @ 0001a75c size=460 ===== */

undefined4 FUN_0001a75c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int *piVar13;
  int iVar14;
  bool bVar15;
  
  if (((*(undefined4 **)(param_1 + 0x13c) == (undefined4 *)0x0) ||
      (iVar1 = av_buffersink_get_hw_frames_ctx(**(undefined4 **)(param_1 + 0x13c)), iVar1 == 0)) ||
     (*(int *)(*(int *)(iVar1 + 4) + 0x24) != *(int *)(*(int *)(param_1 + 0x54) + 0x70))) {
    iVar1 = 0;
  }
  iVar9 = DAT_0001a928;
  iVar7 = 0;
  piVar13 = (int *)(DAT_0001a928 + 0x1a7b4);
  puVar11 = (undefined4 *)0x0;
  do {
    piVar2 = (int *)avcodec_get_hw_config(*(undefined4 *)(param_1 + 0x5c),iVar7);
    if (piVar2 == (int *)0x0) {
      if (puVar11 != (undefined4 *)0x0) {
        uVar8 = *(undefined4 *)(param_1 + 0x54);
        uVar12 = *puVar11;
        uVar3 = av_hwdevice_get_type_name(puVar11[1]);
        av_log(uVar8,0x28,DAT_0001a92c + 0x1a8a0,uVar12,uVar3,**(undefined4 **)(param_1 + 0x5c));
        iVar9 = *(int *)(param_1 + 0x54);
        uVar3 = av_buffer_ref(puVar11[2]);
        iVar1 = *(int *)(param_1 + 0x54);
        *(undefined4 *)(iVar9 + 0x2e8) = uVar3;
        iVar1 = *(int *)(iVar1 + 0x2e8);
joined_r0x0001a8c4:
        if (iVar1 == 0) {
          return 0xfffffff4;
        }
      }
      return 0;
    }
    if ((iVar1 != 0) && ((piVar2[1] & 2U) != 0)) {
      iVar14 = *(int *)(param_1 + 0x54);
      iVar5 = *(int *)(iVar14 + 0x70);
      if ((*piVar2 == -1) || (*piVar2 == iVar5)) {
        uVar3 = av_get_pix_fmt_name(iVar5);
        av_log(iVar14,0x28,DAT_0001a930 + 0x1a8f4,uVar3,**(undefined4 **)(param_1 + 0x5c));
        iVar9 = *(int *)(param_1 + 0x54);
        uVar3 = av_buffer_ref(iVar1);
        iVar1 = *(int *)(param_1 + 0x54);
        *(undefined4 *)(iVar9 + 0x2d4) = uVar3;
        iVar1 = *(int *)(iVar1 + 0x2d4);
        goto joined_r0x0001a8c4;
      }
    }
    puVar10 = puVar11;
    if ((puVar11 == (undefined4 *)0x0) && ((piVar2[1] & 1U) != 0)) {
      iVar5 = *piVar13;
      if (0 < iVar5) {
        piVar4 = (int *)(*(int *)(iVar9 + 0x1a7b8) + -4);
        iVar14 = 0;
        do {
          while( true ) {
            piVar4 = piVar4 + 1;
            puVar6 = (undefined4 *)*piVar4;
            iVar14 = iVar14 + 1;
            if (piVar2[2] != puVar6[1]) break;
            bVar15 = puVar10 != (undefined4 *)0x0;
            puVar10 = puVar11;
            if ((bVar15) || (puVar10 = puVar6, iVar14 == iVar5)) goto LAB_0001a7b4;
          }
        } while (iVar14 != iVar5);
      }
    }
LAB_0001a7b4:
    iVar7 = iVar7 + 1;
    puVar11 = puVar10;
  } while( true );
}



/* ===== FUN_0001a934 @ 0001a934 size=24 ===== */

undefined4 FUN_0001a934(int param_1)

{
  *(int *)(*(int *)(param_1 + 0x20) + 300) = DAT_0001a94c + 0x1a948;
  return 0;
}



/* ===== FUN_0001a950 @ 0001a950 size=248 ===== */

undefined4 FUN_0001a950(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  
  puVar8 = (undefined4 *)**(undefined4 **)(DAT_0001aa48 + 0x1a960 + DAT_0001aa4c);
  if (puVar8 == (undefined4 *)0x0) {
    iVar4 = *(int *)(DAT_0001aa50 + 0x1a9e4);
    if (iVar4 < 1) {
      return 0;
    }
    puVar8 = *(undefined4 **)(*(int *)(DAT_0001aa50 + 0x1a9e8) + (iVar4 + 0x3fffffff) * 4);
    if (iVar4 == 1) {
      if (puVar8 == (undefined4 *)0x0) {
        return 0;
      }
    }
    else {
      uVar7 = *puVar8;
      uVar1 = av_hwdevice_get_type_name(puVar8[1]);
      av_log(0,0x18,DAT_0001aa54 + 0x1aa3c,iVar4,uVar7,uVar1,*puVar8);
    }
  }
  if (*(int *)(*(int *)(param_1 + 8) + 8) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 8) + 4);
    uVar5 = 0;
    do {
      iVar6 = *(int *)(iVar4 + uVar5 * 4);
      uVar1 = av_buffer_ref(puVar8[2]);
      iVar3 = *(int *)(param_1 + 8);
      iVar4 = *(int *)(iVar3 + 4);
      iVar2 = *(int *)(iVar4 + uVar5 * 4);
      uVar5 = uVar5 + 1;
      *(undefined4 *)(iVar6 + 0x48) = uVar1;
      if (*(int *)(iVar2 + 0x48) == 0) {
        return 0xfffffff4;
      }
    } while (uVar5 < *(uint *)(iVar3 + 8));
  }
  return 0;
}



/* ===== FUN_0001aa58 @ 0001aa58 size=480 ===== */

int FUN_0001aa58(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  char *__s2;
  undefined4 local_4038;
  int local_4034;
  undefined1 *local_4030;
  undefined4 local_402c;
  undefined1 auStack_4028 [16388];
  
  iVar6 = DAT_0001ac38 + 0x1aa74;
  piVar7 = *(int **)(iVar6 + DAT_0001ac3c);
  iVar1 = *piVar7;
  if (iVar1 < 1) {
LAB_0001aac0:
    iVar1 = av_malloc_array(iVar1,4);
    local_4034 = iVar1;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0002b538(1);
    }
    iVar9 = *piVar7;
    if (0 < iVar9) {
      iVar4 = 0;
      __s2 = (char *)(DAT_0001ac44 + 0x1ab00);
      piVar3 = (int *)**(undefined4 **)(iVar6 + DAT_0001ac40);
      piVar7 = piVar3;
      do {
        piVar5 = piVar7 + 1;
        iVar8 = *(int *)(*piVar7 + 8);
        iVar2 = strcmp((char *)**(undefined4 **)(iVar8 + 8),__s2);
        if (iVar2 == 0) {
          *(int *)(iVar1 + iVar4 * 4) = iVar8;
          iVar4 = iVar4 + 1;
        }
        piVar7 = piVar5;
      } while (piVar3 + iVar9 != piVar5);
      if (iVar4 != 0) {
        iVar1 = av_sdp_create(iVar1,iVar4,auStack_4028,0x4000);
        if (-1 < iVar1) {
          piVar7 = *(int **)(iVar6 + DAT_0001ac48);
          if (*piVar7 == 0) {
            printf((char *)(DAT_0001ac50 + 0x1abdc),auStack_4028);
            fflush((FILE *)**(undefined4 **)(iVar6 + DAT_0001ac54));
          }
          else {
            iVar1 = avio_open2(&local_4038,*piVar7,2,*(undefined4 *)(iVar6 + DAT_0001ac4c),0);
            if (iVar1 < 0) {
              av_log(0,0x10,DAT_0001ac5c + 0x1ac2c,*piVar7);
            }
            else {
              local_402c = 0;
              local_4030 = auStack_4028;
              avio_print_string_array(local_4038,&local_4030);
              avio_closep(&local_4038);
              av_freep(piVar7);
            }
          }
        }
        av_freep(&local_4034);
        return iVar1;
      }
    }
    iVar9 = -0x16;
    av_log(0,0x10,DAT_0001ac58 + 0x1ac08);
    av_freep(&local_4034);
  }
  else {
    piVar3 = (int *)**(undefined4 **)(iVar6 + DAT_0001ac40);
    iVar9 = 0;
    if (*(int *)(*piVar3 + 0x34) != 0) {
      iVar4 = 0;
      do {
        iVar4 = iVar4 + 1;
        if (iVar4 == iVar1) goto LAB_0001aac0;
        piVar3 = piVar3 + 1;
        iVar9 = 0;
      } while (*(int *)(*piVar3 + 0x34) != 0);
    }
  }
  return iVar9;
}



/* ===== FUN_0001ac60 @ 0001ac60 size=2340 ===== */

void FUN_0001ac60(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  char *pcVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  bool bVar24;
  bool bVar25;
  uint in_fpscr;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined8 uVar29;
  undefined8 in_stack_fffffec8;
  uint local_118;
  int iStack_114;
  uint local_110;
  int iStack_10c;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  uVar3 = (undefined4)((ulonglong)in_stack_fffffec8 >> 0x20);
  iVar21 = param_3[3];
  iVar20 = DAT_0001b584 + 0x1ac84;
  iVar22 = *(int *)(param_1 + 8);
  iVar7 = **(int **)(iVar21 + 0xb4);
  iVar1 = iVar21;
  if ((iVar7 == 0) && (param_3[4] != 0)) {
    if (*(int *)(param_1 + 0x34) == 0) {
LAB_0001aeb8:
      iVar1 = av_fifo_can_write(param_3[0x6e]);
      if (iVar1 == 0) {
        uVar14 = av_fifo_can_read(param_3[0x6e]);
        if ((uint)param_3[0x70] < (uint)(param_3[0x6f] + *(int *)(param_2 + 0x1c))) {
          uVar9 = param_3[0x6d];
        }
        else {
          uVar9 = 0xffffffff;
        }
        if (uVar14 << 1 < uVar9) {
          uVar9 = uVar14 << 1;
        }
        if (uVar9 <= uVar14) {
          av_log(0,0x10,DAT_0001b5e8 + 0x1b560,*param_3,*(undefined4 *)param_3[3]);
                    /* WARNING: Subroutine does not return */
          FUN_0002b538(1);
        }
        iVar1 = av_fifo_grow2(param_3[0x6e],uVar9 - uVar14);
        if (iVar1 < 0) goto LAB_0001b354;
      }
      iVar1 = av_packet_make_refcounted(param_2);
      if ((-1 < iVar1) && (local_50 = av_packet_alloc(), local_50 != 0)) {
        av_packet_move_ref(local_50,param_2);
        param_3[0x6f] = param_3[0x6f] + *(int *)(local_50 + 0x1c);
        av_fifo_write(param_3[0x6e],&local_50,1);
        return;
      }
      goto LAB_0001b354;
    }
LAB_0001ae38:
    if (param_3[0x2b] == 4) {
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_2 + 0x14) = 0x80000000;
      *(undefined4 *)(param_2 + 8) = 0;
      *(undefined4 *)(param_2 + 0xc) = 0x80000000;
    }
    iVar7 = param_3[0x27];
    if ((iVar7 != 0) && (param_3[0x2c] != 0)) {
      if ((int)(uint)(*(int *)(param_2 + 0x30) == 0) <= *(int *)(param_2 + 0x34)) {
        av_log(0,0x18,DAT_0001b5e4 + 0x1b534);
        iVar7 = param_3[0x27];
        iVar1 = param_3[3];
      }
      uVar3 = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
      uVar29 = av_rescale_q(1,0,param_3[0x28],iVar7,param_3[0x10],param_3[0x11]);
      *(undefined8 *)(param_2 + 0x30) = uVar29;
    }
  }
  else {
    if (param_4 == 0) {
      uVar14 = param_3[6];
      iVar17 = param_3[7];
      iVar12 = param_3[0x19];
      if ((int)(iVar17 - (iVar12 + (uint)(uVar14 < (uint)param_3[0x18]))) < 0 ==
          (SBORROW4(iVar17,iVar12) != SBORROW4(iVar17 - iVar12,(uint)(uVar14 < (uint)param_3[0x18]))
          )) {
        av_packet_unref(param_2);
        return;
      }
      param_3[6] = uVar14 + 1;
      param_3[7] = iVar17 + (uint)(0xfffffffe < uVar14);
    }
    if (*(int *)(param_1 + 0x34) == 0) goto LAB_0001aeb8;
    if (iVar7 == 0) goto LAB_0001ae38;
    if ((iVar7 == 1) && (**(int **)(iVar20 + DAT_0001b588) < 0)) {
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_2 + 0x14) = 0x80000000;
      *(undefined4 *)(param_2 + 8) = 0;
      *(undefined4 *)(param_2 + 0xc) = 0x80000000;
    }
  }
  dVar27 = (double)CONCAT44(uVar3,*(undefined4 *)(iVar1 + 0x10));
  av_packet_rescale_ts
            (param_2,param_3[0x10],param_3[0x11],*(undefined4 *)(iVar1 + 0xc),
             *(undefined4 *)(iVar1 + 0x10));
  if ((*(uint *)(*(int *)(iVar22 + 8) + 0x1c) & 0x80) == 0) {
    local_118 = *(uint *)(param_2 + 0x10);
    iStack_114 = *(int *)(param_2 + 0x14);
    dVar26 = *(double *)(param_2 + 0x10);
    if (iStack_114 != -0x80000000 || local_118 != 0) {
      uVar14 = *(uint *)(param_2 + 8);
      iVar1 = *(int *)(param_2 + 0xc);
      if ((int)(iVar1 - (iStack_114 + (uint)(uVar14 < local_118))) < 0 ==
          (SBORROW4(iVar1,iStack_114) != SBORROW4(iVar1 - iStack_114,(uint)(uVar14 < local_118))) ||
          iVar1 == -0x80000000 && uVar14 == 0) {
        uVar14 = **(uint **)(iVar21 + 0xb4);
        bVar24 = 2 < uVar14;
        if (uVar14 != 3) {
          bVar24 = uVar14 != 0;
        }
        if (bVar24 && (uVar14 != 3 && uVar14 != 1)) goto LAB_0001ad3c;
        local_110 = param_3[0xe];
        iStack_10c = param_3[0xf];
        dVar26 = dVar27;
      }
      else {
        av_log(iVar22,0x18,DAT_0001b5e0 + 0x1b424,*param_3,local_118,iStack_114,uVar14,iVar1,
               *param_3,*(undefined4 *)param_3[3]);
        uVar9 = *(uint *)(param_2 + 0x10);
        iVar7 = *(int *)(param_2 + 0x14);
        uVar15 = *(uint *)(param_2 + 8);
        iVar17 = *(int *)(param_2 + 0xc);
        local_110 = param_3[0xe];
        iStack_10c = param_3[0xf];
        uVar23 = local_110 + 1;
        iVar12 = iStack_10c + (uint)(0xfffffffe < local_110);
        uVar4 = uVar9 + uVar15 + local_110;
        uVar5 = uVar4 + 1;
        iVar1 = iVar17;
        uVar14 = uVar15;
        if ((int)(iVar7 - (iVar17 + (uint)(uVar9 < uVar15))) < 0 !=
            (SBORROW4(iVar7,iVar17) != SBORROW4(iVar7 - iVar17,(uint)(uVar9 < uVar15)))) {
          iVar1 = iVar7;
          uVar14 = uVar9;
        }
        if ((int)(iVar12 - (iVar1 + (uint)(uVar23 < uVar14))) < 0 !=
            (SBORROW4(iVar12,iVar1) != SBORROW4(iVar12 - iVar1,(uint)(uVar23 < uVar14)))) {
          iVar1 = iVar12;
          uVar14 = uVar23;
        }
        uVar6 = uVar5 - uVar14;
        uVar16 = uVar15;
        iVar18 = iVar17;
        if ((int)(iVar17 - (iVar7 + (uint)(uVar15 < uVar9))) < 0 !=
            (SBORROW4(iVar17,iVar7) != SBORROW4(iVar17 - iVar7,(uint)(uVar15 < uVar9)))) {
          uVar16 = uVar9;
          iVar18 = iVar7;
        }
        bVar25 = SBORROW4(iVar18,iVar12) != SBORROW4(iVar18 - iVar12,(uint)(uVar16 < uVar23));
        bVar24 = (int)(iVar18 - (iVar12 + (uint)(uVar16 < uVar23))) < 0;
        if (bVar24 != bVar25) {
          iVar18 = iVar12;
        }
        if (bVar24 != bVar25) {
          uVar16 = uVar23;
        }
        local_118 = uVar6 - uVar16;
        iStack_114 = ((iVar7 + iVar17 + (uint)CARRY4(uVar9,uVar15) + iStack_10c +
                       (uint)CARRY4(uVar9 + uVar15,local_110) + (uint)(0xfffffffe < uVar4)) -
                     (iVar1 + (uint)(uVar5 < uVar14))) - (iVar18 + (uint)(uVar6 < uVar16));
        uVar14 = **(uint **)(iVar21 + 0xb4);
        *(uint *)(param_2 + 0x10) = local_118;
        *(int *)(param_2 + 0x14) = iStack_114;
        bVar24 = 2 < uVar14;
        if (uVar14 != 3) {
          bVar24 = uVar14 != 0;
        }
        *(uint *)(param_2 + 8) = local_118;
        *(int *)(param_2 + 0xc) = iStack_114;
        dVar27 = dVar26;
        if ((bVar24 && (uVar14 != 3 && uVar14 != 1)) ||
           (iStack_114 == -0x80000000 && local_118 == 0)) goto LAB_0001ad3c;
      }
      dVar27 = dVar26;
      if (iStack_10c != -0x80000000 || local_110 != 0) {
        uVar23 = -((int)((*(uint *)(*(int *)(iVar22 + 8) + 0x1c) ^ 0x20000) << 0xe) >> 0x1f);
        uVar9 = local_110 + uVar23;
        iVar1 = iStack_10c + (uint)CARRY4(local_110,uVar23);
        if ((int)(iStack_114 - (iVar1 + (uint)(local_118 < uVar9))) < 0 !=
            (SBORROW4(iStack_114,iVar1) != SBORROW4(iStack_114 - iVar1,(uint)(local_118 < uVar9))))
        {
          piVar8 = *(int **)(iVar20 + DAT_0001b5a0);
          if (uVar14 == 0 ||
              (int)(uint)(uVar9 - local_118 < 3) <=
              (int)(iVar1 - (iStack_114 + (uint)(uVar9 < local_118)))) {
            uVar3 = 0x18;
          }
          else {
            uVar3 = 0x30;
          }
          uVar11 = (undefined4)((ulonglong)dVar26 >> 0x20);
          uVar29 = CONCAT44(uVar11,*(undefined4 *)param_3[3]);
          if (*piVar8 != 0) {
            uVar3 = 0x10;
          }
          av_log(iVar22,uVar3,DAT_0001b5a4 + 0x1b028,*param_3,*(undefined4 *)param_3[3],uVar11,
                 local_110,iStack_10c,local_118,iStack_114);
          iVar7 = *piVar8;
          if (iVar7 != 0) {
            av_log(0,8,DAT_0001b5ec + 0x1b580,iVar7,uVar29,local_110,iStack_10c,local_118,iStack_114
                  );
LAB_0001b354:
                    /* WARNING: Subroutine does not return */
            FUN_0002b538(1);
          }
          dVar27 = (double)CONCAT44(iVar1,uVar9);
          av_log(iVar22,uVar3,DAT_0001b5a8 + 0x1b070,iVar1,uVar9,iVar1,local_110,iStack_10c,
                 local_118,iStack_114);
          uVar14 = *(uint *)(param_2 + 8);
          iVar7 = *(int *)(param_2 + 0xc);
          iVar21 = *(int *)(param_2 + 0x14);
          bVar24 = uVar14 < *(uint *)(param_2 + 0x10);
          if ((int)(iVar7 - (iVar21 + (uint)bVar24)) < 0 ==
              (SBORROW4(iVar7,iVar21) != SBORROW4(iVar7 - iVar21,(uint)bVar24))) {
            if ((int)(iVar7 - (iVar1 + (uint)(uVar14 < uVar9))) < 0 !=
                (SBORROW4(iVar7,iVar1) != SBORROW4(iVar7 - iVar1,(uint)(uVar14 < uVar9)))) {
              iVar7 = iVar1;
              uVar14 = uVar9;
            }
            *(uint *)(param_2 + 8) = uVar14;
            *(int *)(param_2 + 0xc) = iVar7;
          }
          *(uint *)(param_2 + 0x10) = uVar9;
          *(int *)(param_2 + 0x14) = iVar1;
          local_118 = uVar9;
          iStack_114 = iVar1;
        }
      }
    }
  }
  else {
    local_118 = *(uint *)(param_2 + 0x10);
    iStack_114 = *(int *)(param_2 + 0x14);
  }
LAB_0001ad3c:
  uVar23 = *(uint *)(param_2 + 0x1c);
  param_3[0xe] = local_118;
  param_3[0xf] = iStack_114;
  iVar1 = DAT_0001b58c;
  uVar14 = param_3[0x62];
  uVar9 = param_3[100];
  param_3[0x62] = uVar14 + uVar23;
  param_3[99] = param_3[99] + ((int)uVar23 >> 0x1f) + (uint)CARRY4(uVar14,uVar23);
  param_3[100] = uVar9 + 1;
  param_3[0x65] = param_3[0x65] + (uint)(0xfffffffe < uVar9);
  *(undefined4 *)(param_2 + 0x20) = param_3[1];
  if (**(int **)(iVar20 + iVar1) != 0) {
    uVar3 = av_get_media_type_string(*(undefined4 *)(param_3[0x15] + 8));
    iVar1 = *(int *)(param_2 + 8);
    iVar7 = *(int *)(param_2 + 0xc);
    dVar26 = *(double *)(param_2 + 8);
    uStack_dc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_e8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_e4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_f0 = 0;
    local_e0 = 0;
    local_d8 = 0;
    uStack_d4 = uStack_dc;
    if (iVar7 == -0x80000000 && iVar1 == 0) {
      local_f0 = *(undefined4 *)(DAT_0001b5c8 + 0x1b368);
      uStack_ec = CONCAT22((short)((uint)uStack_dc >> 0x10),
                           (short)*(undefined4 *)(DAT_0001b5c8 + 0x1b36c));
    }
    else {
      uStack_ec = uStack_dc;
      snprintf((char *)&local_f0,0x20,(char *)(DAT_0001b5ac + 0x1b0f8),iVar7,iVar1,iVar7);
      iVar1 = *(int *)(param_2 + 8);
      iVar7 = *(int *)(param_2 + 0xc);
      dVar27 = dVar26;
    }
    uStack_bc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_c8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_c4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_d0 = 0;
    local_c0 = 0;
    local_b8 = 0;
    uStack_b4 = uStack_bc;
    if (iVar7 == -0x80000000 && iVar1 == 0) {
      local_d0 = *(undefined4 *)(DAT_0001b5dc + 0x1b3ec);
      uStack_cc = CONCAT22((short)((uint)uStack_bc >> 0x10),
                           (short)*(undefined4 *)(DAT_0001b5dc + 0x1b3f0));
    }
    else {
      pcVar19 = (char *)(DAT_0001b5b0 + 0x1b138);
      dVar28 = (double)VectorSignedToFloat(*(undefined4 *)(param_3[3] + 0xc),
                                           (byte)(in_fpscr >> 0x16) & 3);
      dVar26 = (double)VectorSignedToFloat(*(undefined4 *)(param_3[3] + 0x10),
                                           (byte)(in_fpscr >> 0x16) & 3);
      uStack_cc = uStack_bc;
      dVar27 = (double)FUN_0003f4e4(iVar1,iVar7);
      dVar27 = (dVar28 / dVar26) * dVar27;
      snprintf((char *)&local_d0,0x20,pcVar19);
    }
    iVar1 = *(int *)(param_2 + 0x10);
    iVar7 = *(int *)(param_2 + 0x14);
    dVar26 = *(double *)(param_2 + 0x10);
    uStack_9c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_a8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_a4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_b0 = 0;
    local_a0 = 0;
    local_98 = 0;
    uStack_94 = uStack_9c;
    if (iVar7 == -0x80000000 && iVar1 == 0) {
      local_b0 = *(undefined4 *)(DAT_0001b5d8 + 0x1b3d4);
      uStack_ac = CONCAT22((short)((uint)uStack_9c >> 0x10),
                           (short)*(undefined4 *)(DAT_0001b5d8 + 0x1b3d8));
    }
    else {
      uStack_ac = uStack_9c;
      snprintf((char *)&local_b0,0x20,(char *)(DAT_0001b5b4 + 0x1b1a4),iVar7,iVar1,iVar7);
      iVar1 = *(int *)(param_2 + 0x10);
      iVar7 = *(int *)(param_2 + 0x14);
      dVar27 = dVar26;
    }
    uStack_7c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_88 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_84 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_90 = 0;
    local_80 = 0;
    local_78 = 0;
    uStack_74 = uStack_7c;
    if (iVar7 == -0x80000000 && iVar1 == 0) {
      local_90 = *(undefined4 *)(DAT_0001b5d4 + 0x1b3bc);
      uStack_8c = CONCAT22((short)((uint)uStack_7c >> 0x10),
                           (short)*(undefined4 *)(DAT_0001b5d4 + 0x1b3c0));
    }
    else {
      uVar11 = *(undefined4 *)(param_3[3] + 0xc);
      uVar13 = *(undefined4 *)(param_3[3] + 0x10);
      pcVar19 = (char *)(DAT_0001b5b8 + 0x1b1e8);
      dVar28 = (double)VectorSignedToFloat(uVar11,(byte)(in_fpscr >> 0x16) & 3);
      dVar26 = (double)VectorSignedToFloat(uVar13,(byte)(in_fpscr >> 0x16) & 3);
      uStack_8c = uStack_7c;
      dVar27 = (double)FUN_0003f4e4(iVar1,iVar7,uVar11,uVar13,dVar27);
      dVar27 = (dVar28 / dVar26) * dVar27;
      snprintf((char *)&local_90,0x20,pcVar19);
    }
    iVar1 = *(int *)(param_2 + 0x30);
    iVar7 = *(int *)(param_2 + 0x34);
    dVar26 = *(double *)(param_2 + 0x30);
    uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_68 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_64 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_70 = 0;
    local_60 = 0;
    local_58 = 0;
    uStack_54 = uStack_5c;
    if (iVar7 == -0x80000000 && iVar1 == 0) {
      local_70 = *(undefined4 *)(DAT_0001b5d0 + 0x1b3a4);
      uStack_6c = CONCAT22((short)((uint)uStack_5c >> 0x10),
                           (short)*(undefined4 *)(DAT_0001b5d0 + 0x1b3a8));
    }
    else {
      uStack_6c = uStack_5c;
      snprintf((char *)&local_70,0x20,(char *)(DAT_0001b5bc + 0x1b254),iVar7,iVar1,iVar7);
      iVar1 = *(int *)(param_2 + 0x30);
      iVar7 = *(int *)(param_2 + 0x34);
      dVar27 = dVar26;
    }
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_50 = 0;
    local_40 = 0;
    local_38 = 0;
    uStack_34 = uStack_3c;
    if (iVar7 == -0x80000000 && iVar1 == 0) {
      local_50 = *(int *)(DAT_0001b5cc + 0x1b38c);
      uStack_4c = CONCAT22((short)((uint)uStack_3c >> 0x10),
                           (short)*(undefined4 *)(DAT_0001b5cc + 0x1b390));
    }
    else {
      pcVar19 = (char *)(DAT_0001b5c0 + 0x1b298);
      uVar11 = *(undefined4 *)(param_3[3] + 0x10);
      VectorSignedToFloat(*(undefined4 *)(param_3[3] + 0xc),(byte)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(uVar11,(byte)(in_fpscr >> 0x16) & 3);
      uStack_4c = uStack_3c;
      FUN_0003f4e4(iVar1,iVar7,pcVar19,uVar11,dVar27);
      snprintf((char *)&local_50,0x20,pcVar19);
    }
    av_log(0,0x20,DAT_0001b5c4 + 0x1b2fc,uVar3,&local_f0,&local_d0,&local_b0,&local_90,&local_70,
           &local_50,*(undefined4 *)(param_2 + 0x1c));
  }
  iVar1 = av_interleaved_write_frame(iVar22,param_2);
  if (iVar1 < 0) {
    FUN_0002c1d4(DAT_0001b590 + 0x1adb4);
    iVar1 = DAT_0001b598;
    **(undefined4 **)(iVar20 + DAT_0001b594) = 1;
    if (0 < **(int **)(iVar20 + iVar1)) {
      piVar8 = (int *)**(int **)(iVar20 + DAT_0001b59c);
      piVar2 = piVar8 + **(int **)(iVar20 + iVar1);
      do {
        puVar10 = (undefined4 *)*piVar8;
        uVar14 = puVar10[0x57];
        while (piVar8 = piVar8 + 1, param_3 != puVar10) {
          puVar10[0x57] = uVar14 | 1;
          if (piVar2 == piVar8) {
            return;
          }
          puVar10 = (undefined4 *)*piVar8;
          uVar14 = puVar10[0x57];
        }
        param_3[0x57] = uVar14 | 3;
      } while (piVar2 != piVar8);
    }
  }
  return;
}



/* ===== FUN_0001b5f0 @ 0001b5f0 size=540 ===== */

int FUN_0001b5f0(undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
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
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar6 = *(int *)(param_1[2] + 0x18);
  iVar4 = DAT_0001b80c + 0x1b60c;
  if (iVar6 == 0) {
LAB_0001b658:
    iVar6 = avformat_write_header(param_1[2],param_1 + 3);
    if (iVar6 < 0) {
      uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uVar1 = *param_1;
      local_58 = 0;
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      local_20 = 0;
      uStack_44 = uStack_54;
      uStack_3c = uStack_54;
      uStack_34 = uStack_54;
      uStack_2c = uStack_54;
      uStack_24 = uStack_54;
      uStack_1c = uStack_54;
      av_strerror(iVar6,&local_58,0x40);
      av_log(0,0x10,DAT_0001b81c + 0x1b7cc,uVar1,&local_58);
      return iVar6;
    }
    param_1[0xd] = 1;
    av_dump_format(param_1[2],*param_1,*(undefined4 *)(param_1[2] + 0x20),1);
    iVar6 = DAT_0001b818;
    **(int **)(iVar4 + DAT_0001b814) = **(int **)(iVar4 + DAT_0001b814) + 1;
    if (((**(int **)(iVar4 + iVar6) != 0) || (**(int **)(iVar4 + DAT_0001b820) != 0)) &&
       (iVar6 = FUN_0001aa58(), iVar6 < 0)) {
      av_log(0,0x10,DAT_0001b824 + 0x1b808);
      return iVar6;
    }
    if (*(int *)(param_1[2] + 0x18) != 0) {
      uVar5 = 0;
      piVar2 = *(int **)(iVar4 + DAT_0001b810);
      do {
        iVar6 = *(int *)(*piVar2 + (uVar5 + param_1[4]) * 4);
        iVar4 = av_fifo_can_read(*(undefined4 *)(iVar6 + 0x1b8));
        if (iVar4 == 0) {
          uVar1 = *(undefined4 *)(*(int *)(iVar6 + 0xc) + 0x10);
          *(undefined4 *)(iVar6 + 0x40) = *(undefined4 *)(*(int *)(iVar6 + 0xc) + 0xc);
          *(undefined4 *)(iVar6 + 0x44) = uVar1;
        }
        while (iVar4 = av_fifo_read(*(undefined4 *)(iVar6 + 0x1b8),&local_58,1), -1 < iVar4) {
          *(int *)(iVar6 + 0x1bc) = *(int *)(iVar6 + 0x1bc) - *(int *)(local_58 + 0x1c);
          FUN_0001ac60(param_1,local_58,iVar6,1);
          av_packet_free(&local_58);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1[2] + 0x18));
    }
  }
  else {
    piVar2 = (int *)(**(int **)(iVar4 + DAT_0001b810) + param_1[4] * 4);
    if (*(int *)(*(int *)(**(int **)(iVar4 + DAT_0001b810) + param_1[4] * 4) + 0x168) != 0) {
      iVar3 = 0;
      do {
        iVar3 = iVar3 + 1;
        if (iVar3 == iVar6) goto LAB_0001b658;
        piVar2 = piVar2 + 1;
      } while (*(int *)(*piVar2 + 0x168) != 0);
    }
  }
  return 0;
}



/* ===== FUN_0001b828 @ 0001b828 size=192 ===== */

int FUN_0001b828(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if (param_1[0xd] == 0) {
    iVar1 = -0x16;
    av_log(0,0x10,DAT_0001b8ec + 0x1b8e0,*param_1,*(undefined4 *)(param_1[2] + 0x20));
  }
  else {
    iVar1 = av_write_trailer();
    if (iVar1 < 0) {
      uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uVar2 = *(undefined4 *)(param_1[2] + 0x20);
      local_50 = 0;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      local_20 = 0;
      local_18 = 0;
      uStack_3c = uStack_4c;
      uStack_34 = uStack_4c;
      uStack_2c = uStack_4c;
      uStack_24 = uStack_4c;
      uStack_1c = uStack_4c;
      uStack_14 = uStack_4c;
      av_strerror(iVar1,&local_50,0x40);
      av_log(0,0x10,DAT_0001b8e8 + 0x1b8b0,uVar2,&local_50);
      return iVar1;
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_0001b8f0 @ 0001b8f0 size=96 ===== */

void FUN_0001b8f0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return;
  }
  iVar2 = *(int *)(iVar1 + 8);
  if (((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) &&
     ((*(uint *)(*(int *)(iVar2 + 8) + 0x1c) & 1) == 0)) {
    avio_closep(iVar2 + 0x10);
  }
  avformat_free_context(iVar2);
  av_dict_free(iVar1 + 0xc);
  av_freep(param_1);
  return;
}



/* ===== FUN_0001bac0 @ 0001bac0 size=284 ===== */

undefined4 * FUN_0001bac0(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_3 == 0) {
    puVar1 = (undefined4 *)avcodec_find_decoder_by_name();
    iVar3 = DAT_0001bbe4 + 0x1bb2c;
  }
  else {
    puVar1 = (undefined4 *)avcodec_find_encoder_by_name();
    iVar3 = DAT_0001bbdc + 0x1bae8;
  }
  if (puVar1 != (undefined4 *)0x0) {
LAB_0001baf0:
    if ((puVar1[2] != param_2) && (*(int *)(DAT_0001bbe0 + 0x1bb0c) == 0)) {
      av_log(0,8,DAT_0001bbf0 + 0x1bbd4,iVar3,param_1);
                    /* WARNING: Subroutine does not return */
      FUN_0002b538(1);
    }
    return puVar1;
  }
  puVar2 = (undefined4 *)avcodec_descriptor_get_by_name(param_1);
  if (puVar2 != (undefined4 *)0x0) {
    if (param_3 == 0) {
      puVar1 = (undefined4 *)avcodec_find_decoder(*puVar2);
    }
    else {
      puVar1 = (undefined4 *)avcodec_find_encoder();
    }
    if (puVar1 != (undefined4 *)0x0) {
      av_log(0,0x28,DAT_0001bbe8 + 0x1bb80,iVar3,*puVar1,puVar2[2]);
      goto LAB_0001baf0;
    }
  }
  av_log(0,8,DAT_0001bbec + 0x1bba4,iVar3,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_0002b538(1);
}



/* ===== FUN_0001bbf4 @ 0001bbf4 size=488 ===== */

void FUN_0001bbf4(char *param_1)

{
  char *__s1;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  __s1 = (char *)avio_find_protocol_name();
  iVar1 = DAT_0001bddc;
  iVar3 = DAT_0001bde0 + 0x1bc18;
  if (*(int *)(DAT_0001bddc + 0x1bc1c) == 0) {
    if (__s1 == (char *)0x0) {
      return;
    }
    iVar2 = strcmp(__s1,(char *)(DAT_0001bdf0 + 0x1bcc8));
    if (iVar2 != 0) {
      return;
    }
    iVar2 = avio_check(param_1);
    if (iVar2 == 0) {
      if ((**(int **)(iVar3 + DAT_0001bdf4) == 0) || (*(int *)(iVar1 + 0x1bc20) != 0)) {
        av_log(0,8,DAT_0001be0c + 0x1bdac,param_1);
                    /* WARNING: Subroutine does not return */
        FUN_0002b538(1);
      }
      puVar4 = *(undefined4 **)(iVar3 + DAT_0001bdf8);
      fprintf((FILE *)*puVar4,(char *)(DAT_0001bdfc + 0x1bd18),param_1);
      fflush((FILE *)*puVar4);
      FUN_000358f4();
      signal(2,(__sighandler_t)0x0);
      iVar1 = FUN_0002c238();
      if (iVar1 == 0) {
        av_log(0,8,DAT_0001be08 + 0x1bd8c);
                    /* WARNING: Subroutine does not return */
        FUN_0002b538(1);
      }
      FUN_00035fd4();
    }
  }
  else {
    if (*(int *)(DAT_0001bddc + 0x1bc20) != 0) {
      fwrite((void *)(DAT_0001be10 + 0x1bdd0),1,0x29,(FILE *)**(undefined4 **)(iVar3 + DAT_0001bdf8)
            );
                    /* WARNING: Subroutine does not return */
      FUN_0002b538(1);
    }
    if (__s1 == (char *)0x0) {
      return;
    }
  }
  iVar1 = strcmp(__s1,(char *)(DAT_0001bde4 + 0x1bc48));
  if ((iVar1 == 0) && (iVar1 = **(int **)(iVar3 + DAT_0001bde8), 0 < iVar1)) {
    puVar4 = (undefined4 *)(**(int **)(iVar3 + DAT_0001bdec) + -4);
    iVar3 = 0;
    do {
      puVar4 = puVar4 + 1;
      if (((*(uint *)(*(int *)(*(int *)*puVar4 + 4) + 8) & 1) == 0) &&
         (iVar2 = strcmp(param_1,*(char **)(*(int *)*puVar4 + 0x20)), iVar2 == 0)) {
        av_log(0,8,DAT_0001be00 + 0x1bd60,param_1,iVar3);
        av_log(0,0x18,DAT_0001be04 + 0x1bd74);
                    /* WARNING: Subroutine does not return */
        FUN_0002b538(1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  return;
}



/* ===== FUN_0001be14 @ 0001be14 size=60 ===== */

void FUN_0001be14(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int local_c [2];
  
  local_c[0] = DAT_0001be50 + 0x1be34;
  av_opt_eval_flags(local_c,DAT_0001be5c + 0x1be48,param_3,
                    *(undefined4 *)(DAT_0001be54 + 0x1be38 + DAT_0001be58));
  return;
}



/* ===== FUN_0001be60 @ 0001be60 size=120 ===== */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x0001be7c */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */

undefined4 FUN_0001be60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  int iVar2;
  double in_d0;
  rlimit64 local_18;
  
  FUN_0002b564(0,(int)((ulonglong)in_d0 >> 0x20),(int)DAT_0001bed8,param_2,param_3,0x400);
  uVar1 = (ulonglong)in_d0;
  local_18.rlim_max._0_4_ = (int)uVar1 + 1;
  local_18.rlim_cur = VectorShiftRight(uVar1 & 0xffffffff | uVar1 << 0x20,0x20);
  local_18.rlim_max._4_4_ = (int)local_18.rlim_max >> 0x1f;
  iVar2 = setrlimit64(RLIMIT_CPU,&local_18);
  if (iVar2 == 0) {
    return 0;
  }
  perror((char *)(DAT_0001bee0 + 0x1becc));
  return 0;
}



/* ===== FUN_0001d2b4 @ 0001d2b4 size=208 ===== */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x0001d30c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_0001d2b4(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined4 uVar3;
  double in_d0;
  undefined4 uVar4;
  char acStack_28 [16];
  
  av_strlcpy(acStack_28,param_3,0x10);
  pcVar2 = strchr(acStack_28,0x3a);
  uVar1 = DAT_0001d388;
  if (pcVar2 != (char *)0x0) {
    *pcVar2 = '\0';
    uVar4 = (undefined4)((ulonglong)in_d0 >> 0x20);
    FUN_0002b564(0,uVar4,(int)uVar1,param_2,acStack_28,0x80);
    uVar3 = FUN_0002c7b8(*(undefined4 *)(param_1 + 0x110),4,param_1 + 0x114,(int)(longlong)in_d0 + 1
                        );
    uVar1 = DAT_0001d390;
    *(undefined4 *)(param_1 + 0x110) = uVar3;
    FUN_0002b564(0,uVar4,(int)uVar1,param_2,pcVar2 + 1,0x80);
    *(int *)(*(int *)(param_1 + 0x110) + (int)(longlong)in_d0 * 4) = (int)(longlong)in_d0;
    return 0;
  }
  av_log(0,8,DAT_0001d398 + 0x1d37c,param_3);
                    /* WARNING: Subroutine does not return */
  FUN_0002b538(1);
}



/* ===== FUN_0001d39c @ 0001d39c size=64 ===== */

undefined4 FUN_0001d39c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0002c7b8(*(undefined4 *)(param_1 + 0xcc),4,(int *)(param_1 + 0xd0),
                       *(int *)(param_1 + 0xd0) + 1);
  *(int *)(param_1 + 0xcc) = iVar1;
  *(undefined4 *)(iVar1 + (*(int *)(param_1 + 0xd0) + 0x3fffffff) * 4) = param_3;
  return 0;
}



/* ===== FUN_0001d3dc @ 0001d3dc size=748 ===== */

undefined4 FUN_0001d3dc(int param_1,undefined4 param_2,char *param_3)

{
  char *__s;
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  
  __s = (char *)av_strdup(param_3);
  iVar9 = DAT_0001d6c8 + 0x1d400;
  if (__s == (char *)0x0) {
    return 0xfffffff4;
  }
  iVar1 = FUN_0002c7b8(*(undefined4 *)(param_1 + 0xb8),0x14,(int *)(param_1 + 0xbc),
                       *(int *)(param_1 + 0xbc) + 1);
  pcVar4 = (char *)(DAT_0001d6cc + 0x1d434);
  iVar8 = *(int *)(param_1 + 0xbc) * 0x14 + -0x14;
  *(int *)(param_1 + 0xb8) = iVar1;
  iVar7 = iVar1 + iVar8;
  uVar2 = sscanf(param_3,pcVar4,iVar7 + 8,iVar7 + 0xc,iVar7 + 0x10);
  if (((uVar2 & 0xfffffffd) == 1) && (*(int *)(iVar7 + 8) == -1)) {
    *(undefined4 *)(iVar7 + 4) = 0xffffffff;
    *(undefined4 *)(iVar1 + iVar8) = 0xffffffff;
    if (uVar2 == 1) {
      *(undefined4 *)(iVar7 + 0x10) = 0xffffffff;
      *(undefined4 *)(iVar7 + 0xc) = 0xffffffff;
    }
    goto LAB_0001d57c;
  }
  iVar3 = sscanf(param_3,(char *)(DAT_0001d6d0 + 0x1d49c),iVar7,iVar7 + 4,iVar7 + 8,iVar7 + 0xc,
                 iVar7 + 0x10);
  if ((iVar3 - 3U & 0xfffffffd) != 0) {
    av_log(0,8,DAT_0001d6f4 + 0x1d6c0);
                    /* WARNING: Subroutine does not return */
    FUN_0002b538(1);
  }
  if (iVar3 != 5) {
    *(undefined4 *)(iVar7 + 0x10) = 0xffffffff;
    *(undefined4 *)(iVar7 + 0xc) = 0xffffffff;
  }
  iVar3 = *(int *)(iVar1 + iVar8);
  if ((iVar3 < 0) || (**(int **)(iVar9 + DAT_0001d6d4) <= iVar3)) {
    av_log(0,8,DAT_0001d6e8 + 0x1d674);
                    /* WARNING: Subroutine does not return */
    FUN_0002b538(1);
  }
  iVar10 = *(int *)(iVar7 + 4);
  if (-1 < iVar10) {
    iVar5 = **(int **)(iVar9 + DAT_0001d6d8);
    piVar11 = *(int **)(iVar5 + iVar3 * 4);
    if (iVar10 < piVar11[0x16]) {
      iVar6 = *(int *)(*(int *)(*piVar11 + 0x1c) + iVar10 * 4);
      piVar12 = *(int **)(iVar6 + 0xb4);
      if (*piVar12 == 1) {
        pcVar4 = strchr(__s,0x3f);
        if (pcVar4 == (char *)0x0) {
          iVar3 = *(int *)(iVar7 + 8);
          if (((iVar3 < 0) || (piVar12[0x23] <= iVar3)) ||
             (*(int *)(*(int *)(**(int **)(iVar9 + DAT_0001d6e0) + (iVar10 + piVar11[3]) * 4) + 0xc)
              == 0x30)) {
            av_log(0,8,DAT_0001d6e4 + 0x1d634,*(undefined4 *)(iVar1 + iVar8),
                   *(undefined4 *)(iVar7 + 4),iVar3);
                    /* WARNING: Subroutine does not return */
            FUN_0002b538(1);
          }
        }
        else {
          *pcVar4 = '\0';
          iVar3 = *(int *)(iVar7 + 8);
          if (iVar3 < 0) {
            iVar8 = *(int *)(iVar1 + iVar8);
            iVar1 = *(int *)(iVar7 + 4);
          }
          else {
            iVar8 = *(int *)(iVar1 + iVar8);
            iVar1 = *(int *)(iVar7 + 4);
            if ((iVar3 < *(int *)(*(int *)(iVar6 + 0xb4) + 0x8c)) &&
               (*(int *)(*(int *)(**(int **)(iVar9 + DAT_0001d6e0) +
                                 (iVar1 + *(int *)(*(int *)(iVar5 + iVar8 * 4) + 0xc)) * 4) + 0xc)
                != 0x30)) goto LAB_0001d57c;
          }
          av_log(0,0x28,DAT_0001d6dc + 0x1d57c,iVar8,iVar1,iVar3);
        }
LAB_0001d57c:
        av_free(__s);
        return 0;
      }
      iVar9 = DAT_0001d6f0 + 0x1d6ac;
      goto LAB_0001d688;
    }
  }
  iVar9 = DAT_0001d6ec + 0x1d68c;
LAB_0001d688:
  av_log(0,8,iVar9,iVar3,iVar10);
                    /* WARNING: Subroutine does not return */
  FUN_0002b538(1);
}



/* ===== FUN_0001d6f8 @ 0001d6f8 size=1232 ===== */

undefined4 FUN_0001d6f8(int param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int local_44;
  char *local_34;
  char *local_30;
  char *local_2c [2];
  
  iVar16 = DAT_0001dbc8;
  cVar1 = *param_3;
  if (cVar1 == '-') {
    param_3 = param_3 + 1;
  }
  pcVar4 = (char *)av_strdup(param_3);
  iVar16 = iVar16 + 0x1d73c;
  if (pcVar4 == (char *)0x0) {
    return 0xfffffff4;
  }
  local_30 = pcVar4;
  local_34 = strchr(pcVar4,0x2c);
  if (local_34 == (char *)0x0) {
    cVar2 = *pcVar4;
    iVar5 = -1;
    local_44 = 0;
  }
  else {
    *local_34 = '\0';
    iVar5 = strtol(local_34 + 1,&local_34,0);
    if (**(int **)(iVar16 + DAT_0001dbcc) <= iVar5 || iVar5 < 0) {
      av_log(0,8,DAT_0001dbec + 0x1db90,iVar5);
                    /* WARNING: Subroutine does not return */
      FUN_0002b538(1);
    }
    iVar15 = 0;
    if (*local_34 != '\0') {
      local_34 = local_34 + 1;
    }
    piVar14 = *(int **)(iVar16 + DAT_0001dbd0);
    piVar11 = *(int **)(*piVar14 + iVar5 * 4);
    iVar9 = piVar11[0x16];
    if (iVar9 < 1) {
      local_44 = 0;
    }
    else {
      do {
        iVar9 = FUN_0002c49c(*piVar11,*(undefined4 *)(*(int *)(*piVar11 + 0x1c) + iVar15 * 4),
                             local_34);
        iVar7 = *piVar14;
        if (iVar9 == 1) {
          piVar11 = *(int **)(iVar7 + iVar5 * 4);
          iVar9 = piVar11[0x16];
          local_44 = iVar15;
          goto LAB_0001d810;
        }
        piVar11 = *(int **)(iVar7 + iVar5 * 4);
        iVar15 = iVar15 + 1;
        iVar9 = piVar11[0x16];
      } while (iVar15 < iVar9);
      local_44 = 0;
    }
LAB_0001d810:
    if (iVar15 == iVar9) {
      iVar16 = DAT_0001dbf4 + 0x1dbb8;
      goto LAB_0001db54;
    }
    if (*(int *)(*(int *)(**(int **)(iVar16 + DAT_0001dbd4) + (local_44 + piVar11[3]) * 4) + 0xc) ==
        0x30) {
      iVar16 = (int)&DAT_0001dbc8 + DAT_0001dbf8;
      goto LAB_0001db54;
    }
    cVar2 = *local_30;
    pcVar4 = local_30;
  }
  if (cVar2 == '[') {
    local_2c[0] = pcVar4 + 1;
    iVar16 = FUN_0002c7b8(*(undefined4 *)(param_1 + 0xb0),0x18,(int *)(param_1 + 0xb4),
                          *(int *)(param_1 + 0xb4) + 1);
    iVar15 = *(int *)(param_1 + 0xb4);
    iVar5 = DAT_0001dbdc + 0x1da48;
    *(int *)(param_1 + 0xb0) = iVar16;
    iVar5 = av_get_token(local_2c,iVar5);
    *(int *)(iVar15 * 0x18 + iVar16 + -4) = iVar5;
    if (iVar5 == 0) {
      av_log(0,0x10,DAT_0001dbe0 + 0x1da7c,local_30);
                    /* WARNING: Subroutine does not return */
      FUN_0002b538(1);
    }
    goto LAB_0001d9e0;
  }
  pcVar6 = strchr(pcVar4,0x3f);
  if (pcVar6 != (char *)0x0) {
    *pcVar6 = '\0';
    pcVar4 = local_30;
  }
  pcVar4 = (char *)strtol(pcVar4,local_2c,0);
  uVar13 = (uint)pcVar4 >> 0x1f;
  if (**(int **)(iVar16 + DAT_0001dbcc) <= (int)pcVar4) {
    uVar13 = 1;
  }
  if (uVar13 != 0) {
    iVar16 = DAT_0001dbf0 + 0x1dba8;
    param_3 = pcVar4;
    goto LAB_0001db54;
  }
  if (cVar1 == '-') {
    iVar5 = *(int *)(param_1 + 0xb4);
    if (0 < iVar5) {
      iVar15 = 0;
      do {
        iVar7 = *(int *)(param_1 + 0xb0);
        iVar9 = iVar7 + iVar15 * 0x18;
        if (*(char **)(iVar9 + 4) == pcVar4) {
          pcVar6 = local_2c[0];
          if (*local_2c[0] == ':') {
            pcVar6 = local_2c[0] + 1;
          }
          iVar5 = **(int **)(**(int **)(iVar16 + DAT_0001dbd0) + (int)pcVar4 * 4);
          iVar9 = FUN_0002c49c(iVar5,*(undefined4 *)
                                      (*(int *)(iVar5 + 0x1c) + *(int *)(iVar9 + 8) * 4),pcVar6);
          iVar5 = *(int *)(param_1 + 0xb4);
          if (0 < iVar9) {
            *(undefined4 *)(iVar7 + iVar15 * 0x18) = 1;
          }
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < iVar5);
      goto LAB_0001d9e0;
    }
LAB_0001db3c:
    if (pcVar6 == (char *)0x0) {
LAB_0001db48:
      iVar16 = DAT_0001dbe8 + 0x1db58;
LAB_0001db54:
      av_log(0,8,iVar16,param_3);
                    /* WARNING: Subroutine does not return */
      FUN_0002b538(1);
    }
  }
  else {
    iVar15 = (int)pcVar4 * 4;
    piVar14 = *(int **)(iVar16 + DAT_0001dbd0);
    piVar11 = *(int **)(*piVar14 + (int)pcVar4 * 4);
    if (piVar11[0x16] < 1) goto LAB_0001db3c;
    iVar9 = 0;
    iVar7 = 0;
    bVar3 = false;
    do {
      while( true ) {
        pcVar10 = local_2c[0];
        if (*local_2c[0] == ':') {
          pcVar10 = local_2c[0] + 1;
        }
        iVar8 = FUN_0002c49c(*piVar11,*(undefined4 *)(*(int *)(*piVar11 + 0x1c) + iVar9 * 4),pcVar10
                            );
        if (0 < iVar8) break;
        iVar9 = iVar9 + 1;
        piVar11 = *(int **)(*piVar14 + iVar15);
        if (piVar11[0x16] <= iVar9) goto LAB_0001d9b4;
      }
      piVar11 = *(int **)(*piVar14 + iVar15);
      if (*(int *)(*(int *)(**(int **)(iVar16 + DAT_0001dbd4) + (iVar9 + piVar11[3]) * 4) + 0xc) ==
          0x30) {
        bVar3 = true;
      }
      else {
        iVar7 = FUN_0002c7b8(*(undefined4 *)(param_1 + 0xb0),0x18,param_1 + 0xb4,
                             *(int *)(param_1 + 0xb4) + 1);
        iVar12 = *(int *)(param_1 + 0xb4) * 0x18 + iVar7;
        iVar8 = *piVar14;
        *(int *)(param_1 + 0xb0) = iVar7;
        iVar7 = iVar12 + -0x18;
        piVar11 = *(int **)(iVar8 + iVar15);
        iVar8 = iVar12;
        if (iVar5 != -1) {
          iVar8 = local_44;
        }
        *(char **)(iVar12 + -0x14) = pcVar4;
        *(int *)(iVar12 + -0x10) = iVar9;
        if (iVar5 != -1) {
          *(int *)(iVar12 + -0xc) = iVar5;
          *(int *)(iVar12 + -8) = iVar8;
        }
        else {
          *(char **)(iVar12 + -0xc) = pcVar4;
          *(int *)(iVar12 + -8) = iVar9;
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < piVar11[0x16]);
LAB_0001d9b4:
    if (iVar7 != 0) goto LAB_0001d9e0;
    if (pcVar6 == (char *)0x0) {
      if (bVar3) {
        av_log(0,8,DAT_0001dbe4 + 0x1db34,param_3);
                    /* WARNING: Subroutine does not return */
        FUN_0002b538(1);
      }
      goto LAB_0001db48;
    }
  }
  av_log(0,0x28,DAT_0001dbd8 + 0x1d9e0,param_3);
LAB_0001d9e0:
  av_freep(&local_30);
  return 0;
}



/* ===== FUN_0001dbfc @ 0001dbfc size=96 ===== */

undefined4 FUN_0001dbfc(undefined4 param_1,undefined1 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_0001dc60;
  iVar2 = av_asprintf(DAT_0001dc5c + 0x1dc18,param_2 + 1,*param_2);
  if (iVar2 == 0) {
    uVar3 = 0xfffffff4;
  }
  else {
    uVar3 = FUN_0002caf8(param_1,iVar2,param_3,*(undefined4 *)(iVar1 + 0x1dc24 + DAT_0001dc64));
    av_free(iVar2);
  }
  return uVar3;
}



/* ===== FUN_0001dc68 @ 0001dc68 size=136 ===== */

int FUN_0001dc68(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = av_asprintf(DAT_0001dcf0 + 0x1dc84,param_3);
  if (iVar1 == 0) {
    iVar2 = -0xc;
  }
  else {
    iVar2 = FUN_0002caf8(param_1,DAT_0001dcfc + 0x1dcac,iVar1,
                         *(undefined4 *)(DAT_0001dcf4 + 0x1dc90 + DAT_0001dcf8));
    if (-1 < iVar2) {
      iVar2 = av_dict_set(*param_1 + 0x10,DAT_0001dd00 + 0x1dcd4,param_3,0);
    }
    av_free(iVar1);
  }
  return iVar2;
}



/* ===== FUN_0001ddfc @ 0001ddfc size=180 ===== */

undefined4 FUN_0001ddfc(int *param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = strcmp(param_2,(char *)(DAT_0001deb0 + 0x1de1c));
  if (iVar1 == 0) {
    av_dict_set(*param_1 + 0x10,DAT_0001dec0 + 0x1dea8,param_3);
    return 0;
  }
  iVar1 = strcmp(param_2,(char *)(DAT_0001deb4 + 0x1de34));
  if (iVar1 != 0) {
    av_dict_set(*param_1 + 0x10,param_2,param_3,0);
    return 0;
  }
  av_log(0,0x18,DAT_0001deb8 + 0x1de6c);
  av_dict_set(*param_1 + 0x10,DAT_0001debc + 0x1de88,param_3,0);
  return 0;
}



/* ===== FUN_0001dec4 @ 0001dec4 size=124 ===== */

undefined4 FUN_0001dec4(int *param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = strcmp(param_2,(char *)(DAT_0001df40 + 0x1dee4));
  if (iVar1 != 0) {
    av_dict_set(*param_1 + 0x10,param_2,param_3,0);
    return 0;
  }
  av_log(0,0x18,DAT_0001df44 + 0x1df1c);
  av_dict_set(*param_1 + 0x10,DAT_0001df48 + 0x1df38,param_3,0);
  return 0;
}



/* ===== FUN_0001df4c @ 0001df4c size=268 ===== */

void FUN_0001df4c(char *param_1,char *param_2,long *param_3,undefined4 *param_4)

{
  char cVar1;
  long lVar2;
  
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    *param_2 = 'g';
    return;
  }
  *param_2 = cVar1;
  switch(cVar1) {
  case 'c':
    goto LAB_0001dfc8;
  case 'd':
    break;
  case 'e':
    break;
  case 'f':
    break;
  case 'g':
    return;
  case 'h':
    break;
  case 'i':
    break;
  case 'j':
    break;
  case 'k':
    break;
  case 'l':
    break;
  case 'm':
    break;
  case 'n':
    break;
  case 'o':
    break;
  case 'p':
LAB_0001dfc8:
    if (param_1[1] != ':') {
      return;
    }
    lVar2 = strtol(param_1 + 2,(char **)0x0,0);
    *param_3 = lVar2;
    return;
  case 'q':
    break;
  case 'r':
    break;
  case 's':
    if (param_1[1] == '\0') {
      param_1 = (char *)(DAT_0001e058 + 0x1e018);
    }
    else {
      if (param_1[1] != ':') {
        av_log(0,8,DAT_0001e060 + 0x1e050,param_1 + 1);
                    /* WARNING: Subroutine does not return */
        FUN_0002b538(1);
      }
      param_1 = param_1 + 2;
    }
    *param_4 = param_1;
    return;
  }
  av_log(0,8,DAT_0001e05c + 0x1e030,cVar1);
                    /* WARNING: Subroutine does not return */
  FUN_0002b538(1);
}



/* ===== FUN_0001e064 @ 0001e064 size=312 ===== */

void FUN_0001e064(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = 0;
  iVar4 = *(int *)(DAT_0001e19c + 0x1e078 + DAT_0001e1a0);
  do {
    piVar3 = (int *)(param_1 + *(int *)(iVar4 + 8));
    if ((uVar2 & 0x8000) == 0) {
      if ((~uVar2 & 0x4008) == 0) {
        av_freep(piVar3);
      }
      iVar5 = *(int *)(iVar4 + 0x14);
    }
    else {
      if (piVar3[1] < 1) {
LAB_0001e0f0:
        av_freep(piVar3);
        piVar3[1] = 0;
      }
      else {
        iVar5 = 0;
        do {
          while( true ) {
            iVar1 = iVar5 * 0x10;
            av_freep(*piVar3 + iVar1);
            if ((*(uint *)(iVar4 + 4) & 8) != 0) break;
            iVar5 = iVar5 + 1;
            if (piVar3[1] <= iVar5) goto LAB_0001e0f0;
          }
          iVar5 = iVar5 + 1;
          av_freep(*piVar3 + iVar1 + 8);
        } while (iVar5 < piVar3[1]);
        av_freep(piVar3);
        piVar3[1] = 0;
      }
      iVar5 = *(int *)(iVar4 + 0x14);
    }
    if (iVar5 == 0) {
      if (0 < *(int *)(param_1 + 0xb4)) {
        iVar4 = 0;
        iVar5 = 0;
        do {
          iVar5 = iVar5 + 1;
          iVar1 = *(int *)(param_1 + 0xb0) + iVar4;
          iVar4 = iVar4 + 0x18;
          av_freep(iVar1 + 0x14);
        } while (iVar5 < *(int *)(param_1 + 0xb4));
      }
      av_freep(param_1 + 0xb0);
      av_freep(param_1 + 0xb8);
      av_freep(param_1 + 0x110);
      av_freep(param_1 + 0xcc);
      return;
    }
    uVar2 = *(uint *)(iVar4 + 0x18);
    iVar4 = iVar4 + 0x14;
  } while( true );
}



/* ===== FUN_0001e1a4 @ 0001e1a4 size=8864 ===== */

int * FUN_0001e1a4(int *param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int extraout_r2;
  int iVar8;
  int iVar9;
  code *pcVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  uint uVar14;
  char **ppcVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint *puVar18;
  undefined4 *unaff_r9;
  int iVar19;
  int *piVar20;
  char *pcVar21;
  int *piVar22;
  long *__nptr;
  uint uVar23;
  int iVar24;
  char *pcVar25;
  uint uVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  double dVar30;
  int local_49c;
  undefined4 *local_494;
  char *local_490;
  undefined4 *local_48c;
  undefined4 *local_488;
  undefined4 *local_484;
  undefined4 *local_480;
  undefined4 *local_47c;
  undefined4 *local_478;
  undefined4 *local_474;
  undefined4 *local_470;
  undefined4 *local_46c;
  undefined4 *local_468;
  int local_460;
  undefined4 *local_45c;
  undefined4 *local_458;
  char *local_454;
  char *local_450;
  int local_440;
  char *local_43c;
  char *local_438;
  int local_434;
  char *local_430;
  uint uStack_42c;
  uint uStack_428;
  undefined4 uStack_424;
  undefined4 local_420;
  uint uStack_41c;
  undefined4 local_418;
  uint uStack_414;
  undefined4 local_410;
  uint uStack_40c;
  undefined4 local_408;
  uint uStack_404;
  undefined4 local_400;
  uint uStack_3fc;
  undefined4 local_3f8;
  uint uStack_3f4;
  
  piVar3 = (int *)avformat_new_stream(param_2,0);
  iVar8 = DAT_0001f0e0;
  iVar7 = DAT_0001f0dc + 0x1e1e0;
  if (piVar3 == (int *)0x0) {
    av_log(0,8,DAT_0001fc58 + 0x2072c);
                    /* WARNING: Subroutine does not return */
    FUN_0002b538(1);
  }
  uVar23 = *(int *)(param_2 + 0x18) - 1;
  if (uVar23 < (uint)param_1[0x45]) {
    piVar3[1] = *(int *)(param_1[0x44] + (*(int *)(param_2 + 0x18) + 0x3fffffff) * 4);
  }
  piVar4 = (int *)FUN_0002d75c(*(undefined4 *)(iVar7 + DAT_0001f0e4),0x1e8,
                               *(undefined4 *)(iVar7 + iVar8));
  puVar18 = (uint *)piVar3[0x2d];
  bVar29 = 2 < param_3;
  bVar27 = param_3 == 3;
  if (!bVar27) {
    bVar29 = param_3 != 0;
  }
  bVar28 = param_3 == 1;
  iVar8 = extraout_r2;
  if (!bVar29 || (bVar27 || bVar28)) {
    iVar8 = 1;
  }
  if (bVar29 && (!bVar27 && !bVar28)) {
    iVar8 = 0;
  }
  iVar11 = **(int **)(iVar7 + DAT_0001f0e8);
  piVar4[1] = uVar23;
  piVar4[3] = (int)piVar3;
  *piVar4 = iVar11 + -1;
  piVar4[0x38] = 0;
  piVar4[0x39] = -0x80000000;
  *puVar18 = param_3;
  if (!bVar29 || (bVar27 || bVar28)) {
    uVar23 = param_3;
    if (0 < param_1[9]) {
      iVar8 = 0;
      iVar11 = 0;
      pcVar21 = (char *)0x0;
      piVar20 = piVar3;
      do {
        iVar12 = FUN_0002c49c(param_2,piVar20,*(undefined4 *)(param_1[8] + iVar11 * 0x10));
        if (iVar12 < 1) {
          if (iVar12 != 0) goto LAB_0001e364;
          if (param_1[9] <= iVar11 + 1) goto LAB_0001e3ec;
        }
        else {
          iVar8 = iVar8 + 1;
          unaff_r9 = (undefined4 *)(param_1[8] + iVar11 * 0x10);
          pcVar21 = (char *)unaff_r9[2];
          if (param_1[9] <= iVar11 + 1) goto LAB_0001e3ec;
        }
        iVar11 = iVar11 + 1;
        piVar20 = (int *)piVar4[3];
      } while( true );
    }
    goto LAB_000205ac;
  }
  iVar11 = piVar4[0x17];
  piVar4[4] = iVar8;
  piVar4[0x59] = 1;
  goto LAB_0001e27c;
LAB_0001e9a8:
  if (uVar23 != 0) {
    av_log(0,8,DAT_0001f19c + 0x1e9e0,iVar11,*piVar4,piVar4[1]);
                    /* WARNING: Subroutine does not return */
    FUN_0002b538(1);
  }
  av_bprint_init(&local_430,0,0xffffffff);
  do {
    av_bprint_clear(&local_430);
    iVar11 = local_440;
    while (cVar2 = avio_r8(iVar11), pcVar21 = local_430, cVar2 != '\n' && cVar2 != '\0') {
      av_bprint_chars(&local_430,cVar2,1);
    }
    if (uStack_428 <= uStack_42c) {
      av_log(0,8,DAT_0001fc4c + 0x206a8);
                    /* WARNING: Subroutine does not return */
      FUN_0002b538(1);
    }
    if (*local_430 != '\0' && *local_430 != '#') {
      pcVar25 = strchr(local_430,0x3d);
      if (pcVar25 == (char *)0x0) {
        av_log(0,8,DAT_0001fc48 + 0x20690);
                    /* WARNING: Subroutine does not return */
        FUN_0002b538(1);
      }
      *pcVar25 = '\0';
      av_dict_set(piVar4 + 0x53,pcVar21,pcVar25 + 1,0x10);
    }
  } while (*(int *)(local_440 + 0x30) == 0);
  av_bprint_finalize(&local_430,0);
  avio_closep(&local_440);
  goto LAB_0001ea08;
LAB_0001e3ec:
  if (1 < iVar8) {
    local_430 = (char *)0x0;
    memset(&uStack_42c,0,0x7c);
    local_450 = (char *)*unaff_r9;
    if (local_450 == (char *)0x0) {
      local_450 = (char *)(DAT_0001fc3c + 0x2059c);
    }
    else if (*local_450 == '\0') {
      local_450 = (char *)(DAT_0001fc24 + 0x20500);
    }
    iVar12 = DAT_0001f0ec + 0x1e448;
    iVar9 = DAT_0001f0f0 + 0x1e454;
    iVar11 = DAT_0001f0f4 + 0x1e45c;
    iVar19 = DAT_0001f0f8 + 0x1e468;
    iVar8 = DAT_0001f100 + 0x1e47c;
    piVar20 = (int *)(DAT_0001f0fc + 0x1e540);
    iVar5 = DAT_0001f104 + 0x1e488;
    if (iVar9 == 0) goto LAB_0001e4d4;
    do {
      av_strlcatf(&local_430,0x80,iVar5,iVar8,DAT_0001f108 + 0x1e4ac);
      iVar8 = iVar11;
      piVar22 = piVar20;
      iVar11 = iVar9;
      while( true ) {
        if (iVar11 == 0) {
          iVar11 = DAT_0001f10c + 0x1e50c;
          av_strlcatf(&local_430,0x80,DAT_0001f110 + 0x1e514,iVar8,iVar11);
          if (*local_450 != '\0') {
            iVar11 = DAT_0001f114 + 0x1e53c;
          }
          av_log(0,0x18,DAT_0001f11c + 0x1e568,&local_430,*(undefined4 *)piVar4[3],
                 DAT_0001f118 + 0x1e550,iVar11,local_450,unaff_r9[2]);
          goto LAB_0001e574;
        }
        iVar9 = *piVar22;
        piVar20 = piVar22 + 1;
        if (*piVar22 != 0) break;
LAB_0001e4d4:
        av_strlcatf(&local_430,0x80,iVar12,iVar8,iVar19);
        iVar8 = iVar11;
        piVar22 = piVar20;
        iVar11 = iVar9;
      }
    } while( true );
  }
LAB_0001e574:
  if (pcVar21 == (char *)0x0) {
    puVar18 = *(uint **)(piVar4[3] + 0xb4);
    uVar23 = *puVar18;
LAB_000205ac:
    uVar23 = av_guess_codec(*(undefined4 *)(param_2 + 8),0,*(undefined4 *)(param_2 + 0x20),0,uVar23)
    ;
    iVar8 = *(int *)(piVar4[3] + 0xb4);
    puVar18[1] = uVar23;
    iVar11 = avcodec_find_encoder(*(undefined4 *)(iVar8 + 4));
    piVar4[0x17] = iVar11;
    if (iVar11 == 0) {
      iVar8 = *piVar4;
      uVar17 = **(undefined4 **)(param_2 + 8);
      iVar7 = piVar4[1];
      uVar16 = avcodec_get_name(*(undefined4 *)(*(int *)(piVar4[3] + 0xb4) + 4));
      av_log(0,8,DAT_0001fc40 + 0x20650,iVar8,iVar7,uVar17,uVar16);
      av_log(0,8,DAT_0001fc44 + 0x20678,*piVar4,piVar4[1]);
      goto LAB_0001e364;
    }
    uVar23 = (uint)(piVar4[0x59] == 0);
  }
  else {
    iVar8 = strcmp(pcVar21,(char *)(DAT_0001f120 + 0x1e590));
    if (iVar8 == 0) {
      iVar11 = piVar4[0x17];
      piVar4[0x59] = 1;
      uVar23 = 0;
    }
    else {
      iVar11 = FUN_0001bac0(pcVar21,**(undefined4 **)(piVar4[3] + 0xb4),1);
      iVar8 = *(int *)(piVar4[3] + 0xb4);
      uVar16 = *(undefined4 *)(iVar11 + 0xc);
      piVar4[0x17] = iVar11;
      uVar23 = (uint)(piVar4[0x59] == 0);
      *(undefined4 *)(iVar8 + 4) = uVar16;
    }
  }
  piVar4[4] = uVar23;
LAB_0001e27c:
  iVar8 = avcodec_alloc_context3(iVar11);
  piVar4[0x15] = iVar8;
  if (iVar8 == 0) {
    av_log(0,0x10,DAT_0001fc5c + 0x20744);
                    /* WARNING: Subroutine does not return */
    FUN_0002b538(1);
  }
  *(uint *)(iVar8 + 8) = param_3;
  iVar8 = avcodec_parameters_alloc();
  piVar4[0x16] = iVar8;
  if (iVar8 == 0) {
    av_log(0,0x10,DAT_0001fc54 + 0x20714);
                    /* WARNING: Subroutine does not return */
    FUN_0002b538(1);
  }
  iVar8 = av_frame_alloc();
  piVar4[0x1a] = iVar8;
  if (iVar8 == 0) goto LAB_0001e364;
  iVar8 = av_packet_alloc();
  piVar4[0x1c] = iVar8;
  if (iVar8 == 0) goto LAB_0001e364;
  iVar8 = piVar4[0x17];
  if (iVar8 == 0) {
    iVar11 = FUN_0002c4e0(*(undefined4 *)(*param_1 + 0x10),0,param_2,piVar3,0);
    piVar4[0x53] = iVar11;
  }
  else {
    iVar19 = 0;
    local_440 = 0;
    iVar11 = FUN_0002c4e0(*(undefined4 *)(*param_1 + 0x10),*(undefined4 *)(iVar8 + 0xc),param_2,
                          piVar3,iVar8);
    iVar12 = param_1[0x67];
    piVar4[0x53] = iVar11;
    if (iVar12 < 1) {
      iVar11 = param_1[0x8d];
      piVar4[0x31] = 1;
      if (0 < iVar11) {
        iVar11 = 0;
        goto LAB_0001e73c;
      }
    }
    else {
      iVar12 = 0;
      iVar11 = 0;
      do {
        iVar5 = FUN_0002c49c(param_2,piVar3,*(undefined4 *)(param_1[0x66] + iVar12 * 0x10));
        if (iVar5 < 1) {
          if (iVar5 != 0) goto LAB_0001e364;
        }
        else {
          iVar19 = iVar19 + 1;
          local_458 = (undefined4 *)(param_1[0x66] + iVar12 * 0x10);
          iVar11 = local_458[2];
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < param_1[0x67]);
      if (1 < iVar19) {
        local_430 = (char *)0x0;
        memset(&uStack_42c,0,0x7c);
        local_454 = (char *)*local_458;
        if (local_454 == (char *)0x0) {
          local_454 = (char *)(DAT_0001fc30 + 0x2056c);
        }
        else if (*local_454 == '\0') {
          local_454 = (char *)(DAT_0001fc20 + 0x20424);
        }
        iVar9 = DAT_0001f128 + 0x1e614;
        iVar12 = DAT_0001f12c + 0x1e620;
        piVar20 = (int *)(DAT_0001f130 + 0x1e714);
        iVar19 = DAT_0001f134 + 0x1e638;
        iVar5 = DAT_0001f13c + 0x1e64c;
        iVar8 = DAT_0001f138 + 0x1e644;
        local_460 = DAT_0001f124 + 0x1e608;
        if (iVar9 == 0) goto LAB_0001e690;
        while (av_strlcatf(&local_430,0x80,iVar5,iVar8,DAT_0001f140 + 0x1e668), piVar22 = piVar20,
              iVar24 = iVar9, iVar9 != 0) {
          while( true ) {
            iVar9 = *piVar22;
            piVar20 = piVar22 + 1;
            iVar8 = local_460;
            local_460 = iVar24;
            if (*piVar22 != 0) break;
LAB_0001e690:
            av_strlcatf(&local_430,0x80,iVar12,iVar8,iVar19);
            piVar22 = piVar20;
            iVar24 = iVar9;
            if (iVar9 == 0) goto LAB_0001e6b0;
          }
        }
LAB_0001e6b0:
        iVar12 = DAT_0001f144 + 0x1e6cc;
        av_strlcatf(&local_430,0x80,DAT_0001f148 + 0x1e6d0,local_460,iVar12);
        iVar8 = *piVar3;
        if (*local_454 != '\0') {
          iVar12 = DAT_0001fc1c + 0x20418;
        }
        av_log(0,0x18,DAT_0001f150 + 0x1e71c,&local_430,iVar8,DAT_0001f14c + 0x1e700,iVar12,
               local_454,local_458[2]);
      }
      iVar12 = param_1[0x8d];
      piVar4[0x31] = 1;
      if (0 < iVar12) {
LAB_0001e73c:
        iVar12 = 0;
        iVar19 = 0;
        do {
          while( true ) {
            iVar5 = iVar19 * 0x10;
            iVar9 = FUN_0002c49c(param_2,piVar3,*(undefined4 *)(param_1[0x8c] + iVar19 * 0x10));
            if (0 < iVar9) break;
            if (iVar9 != 0) goto LAB_0001e364;
            iVar19 = iVar19 + 1;
            if (param_1[0x8d] <= iVar19) goto LAB_0001e7ac;
          }
          iVar19 = iVar19 + 1;
          iVar12 = iVar12 + 1;
          local_45c = (undefined4 *)(param_1[0x8c] + iVar5);
          piVar4[0x31] = local_45c[2];
        } while (iVar19 < param_1[0x8d]);
LAB_0001e7ac:
        if (1 < iVar12) {
          local_430 = (char *)0x0;
          memset(&uStack_42c,0,0x7c);
          pcVar21 = (char *)*local_45c;
          if ((pcVar21 == (char *)0x0) || (*pcVar21 == '\0')) {
            pcVar21 = (char *)(DAT_0001f164 + 0x1e850);
            av_strlcatf(&local_430,0x80,DAT_0001f16c + 0x1e85c,DAT_0001f168 + 0x1e854,pcVar21);
            iVar8 = *piVar3;
            pcVar25 = pcVar21;
          }
          else {
            pcVar25 = (char *)(DAT_0001f154 + 0x1e80c);
            av_strlcatf(&local_430,0x80,DAT_0001f15c + 0x1e818,DAT_0001f158 + 0x1e810,pcVar25);
            iVar8 = *piVar3;
            if (*pcVar21 != '\0') {
              pcVar25 = (char *)(DAT_0001f160 + 0x1e834);
            }
          }
          av_log(0,0x18,DAT_0001f174 + 0x1e89c,&local_430,iVar8,DAT_0001f170 + 0x1e880,pcVar25,
                 pcVar21,local_45c[2]);
        }
      }
      if (iVar11 != 0) {
        uVar26 = 0;
        iVar19 = *(int *)piVar4[0x17];
        pcVar25 = (char *)(DAT_0001f17c + 0x1e8d0);
        pcVar21 = getenv((char *)(DAT_0001f178 + 0x1e8cc));
        local_438 = getenv((char *)(DAT_0001f180 + 0x1e8e8));
        iVar12 = DAT_0001f184 + 0x1e8f8;
        iVar5 = DAT_0001f18c + 0x1e914;
        local_434 = DAT_0001f188 + 0x1e90c;
        uVar23 = 0xffffffff;
        ppcVar15 = &local_438;
        local_43c = pcVar21;
        do {
          if (pcVar21 != (char *)0x0) {
            iVar9 = iVar5;
            if (iVar19 == 0) {
              uVar16 = *(undefined4 *)(iVar7 + DAT_0001fc18);
              if (uVar26 == 1) goto LAB_00020404;
            }
            else if (uVar26 == 1) {
              snprintf((char *)&local_430,1000,(char *)(DAT_0001fc14 + 0x203d4),pcVar21,
                       DAT_0001fc10 + 0x203bc,iVar19,iVar11);
              uVar16 = *(undefined4 *)(iVar7 + DAT_0001fc18);
              iVar8 = 0;
              uVar23 = avio_open2(&local_440,&local_430,1,uVar16,0);
              if (-1 < (int)uVar23) goto LAB_0001e9a8;
LAB_00020404:
              iVar9 = iVar12;
            }
            else {
              snprintf((char *)&local_430,1000,(char *)(DAT_0001f194 + 0x1e978),pcVar21,
                       DAT_0001f190 + 0x1e960,iVar19,iVar11);
              uVar16 = *(undefined4 *)(iVar7 + DAT_0001f198);
              iVar8 = 0;
              uVar23 = avio_open2(&local_440,&local_430,1,uVar16,0);
              if (-1 < (int)uVar23) goto LAB_0001e9a8;
            }
            snprintf((char *)&local_430,1000,pcVar25,pcVar21,iVar9,iVar11);
            iVar8 = 0;
            uVar23 = avio_open2(&local_440,&local_430,1,uVar16,0);
          }
          uVar26 = uVar26 + 1;
          uVar14 = uVar23 >> 0x1f;
          if (2 < uVar26) {
            uVar14 = 0;
          }
          if (uVar14 == 0) goto LAB_0001e9a8;
          pcVar21 = *ppcVar15;
          ppcVar15 = ppcVar15 + 1;
        } while( true );
      }
    }
  }
LAB_0001ea08:
  if (param_1[0x3f] != 0) {
    *(uint *)(piVar4[0x15] + 0x3c) = *(uint *)(piVar4[0x15] + 0x3c) | 0x800000;
  }
  if (param_1[0x89] < 1) {
LAB_000201dc:
    if (0 < param_1[0x8b]) {
      iVar11 = 0;
LAB_0001ebbc:
      iVar12 = 0;
      iVar19 = 0;
      do {
        while( true ) {
          iVar5 = iVar19 * 0x10;
          iVar9 = FUN_0002c49c(param_2,piVar3,*(undefined4 *)(param_1[0x8a] + iVar19 * 0x10));
          if (0 < iVar9) break;
          if (iVar9 != 0) goto LAB_0001e364;
          iVar19 = iVar19 + 1;
          if (param_1[0x8b] <= iVar19) goto LAB_0001ec28;
        }
        iVar19 = iVar19 + 1;
        iVar12 = iVar12 + 1;
        local_488 = (undefined4 *)(param_1[0x8a] + iVar5);
        iVar11 = local_488[2];
      } while (iVar19 < param_1[0x8b]);
LAB_0001ec28:
      if (1 < iVar12) {
        local_430 = (char *)0x0;
        memset(&uStack_42c,0,0x7c);
        pcVar21 = (char *)*local_488;
        if ((pcVar21 == (char *)0x0) || (*pcVar21 == '\0')) {
          pcVar21 = (char *)(DAT_0001fbc8 + 0x2026c);
          av_strlcatf(&local_430,0x80,DAT_0001fbd0 + 0x20278,DAT_0001fbcc + 0x20270,pcVar21);
          iVar8 = *piVar3;
          pcVar25 = pcVar21;
        }
        else {
          pcVar25 = (char *)(DAT_0001f1b8 + 0x1ec88);
          av_strlcatf(&local_430,0x80,DAT_0001f1c0 + 0x1ec94,DAT_0001f1bc + 0x1ec8c,pcVar25);
          iVar8 = *piVar3;
          if (*pcVar21 != '\0') {
            pcVar25 = (char *)(DAT_0001f1c4 + 0x1ecb0);
          }
        }
        av_log(0,0x18,DAT_0001f1cc + 0x1ece0,&local_430,iVar8,DAT_0001f1c8 + 0x1ecc4,pcVar25,pcVar21
               ,local_488[2]);
      }
      if (iVar11 != 0) {
LAB_0001ecf4:
        iVar8 = 0;
        iVar12 = av_parse_ratio(&local_430,iVar11,0x7fffffff,0,0);
        if ((iVar12 < 0) || ((int)uStack_42c < 1)) {
          pcVar10 = FUN_00020778 + DAT_0001fc64;
          goto LAB_00020758;
        }
        piVar4[0x12] = (int)local_430;
        piVar4[0x13] = uStack_42c;
      }
    }
    iVar11 = param_1[0x49];
    piVar4[0x18] = -1;
    piVar4[0x19] = 0x7fffffff;
    if (0 < iVar11) {
      iVar11 = 0;
      iVar12 = 0;
      do {
        while( true ) {
          iVar19 = iVar12 * 0x10;
          iVar5 = FUN_0002c49c(param_2,piVar3,*(undefined4 *)(param_1[0x48] + iVar12 * 0x10));
          if (0 < iVar5) break;
          if (iVar5 != 0) goto LAB_0001e364;
          uVar23 = param_1[0x49];
          iVar12 = iVar12 + 1;
          if ((int)uVar23 <= iVar12) goto LAB_0001edac;
        }
        iVar12 = iVar12 + 1;
        iVar11 = iVar11 + 1;
        local_484 = (undefined4 *)(param_1[0x48] + iVar19);
        iVar19 = local_484[3];
        piVar4[0x18] = local_484[2];
        piVar4[0x19] = iVar19;
        uVar23 = param_1[0x49];
      } while (iVar12 < (int)uVar23);
LAB_0001edac:
      if (1 < iVar11) {
        local_430 = (char *)0x0;
        memset(&uStack_42c,0,0x7c);
        pcVar21 = (char *)*local_484;
        if (pcVar21 == (char *)0x0) {
          pcVar21 = (char *)(DAT_0001fc2c + 0x20520);
        }
        else if (*pcVar21 == '\0') {
          pcVar21 = (char *)(DAT_0001f1d0 + 0x1edf0);
        }
        iVar19 = DAT_0001f1d8 + 0x1ee0c;
        iVar8 = DAT_0001f1dc + 0x1ee18;
        piVar20 = (int *)(DAT_0001f1e0 + 0x1ef20);
        iVar11 = DAT_0001f1e4 + 0x1ee30;
        iVar12 = DAT_0001f1ec + 0x1ee44;
        pcVar25 = (char *)(DAT_0001f1e8 + 0x1ee3c);
        local_490 = (char *)(DAT_0001f1d4 + 0x1ee00);
        if (iVar19 == 0) goto LAB_0001ee88;
        while (av_strlcatf(&local_430,0x80,iVar12,pcVar25,DAT_0001f1f0 + 0x1ee60), piVar22 = piVar20
              , iVar5 = iVar19, iVar19 != 0) {
          while( true ) {
            iVar19 = *piVar22;
            piVar20 = piVar22 + 1;
            pcVar25 = local_490;
            local_490 = (char *)iVar5;
            if (*piVar22 != 0) break;
LAB_0001ee88:
            av_strlcatf(&local_430,0x80,iVar8,pcVar25,iVar11);
            piVar22 = piVar20;
            iVar5 = iVar19;
            if (iVar19 == 0) goto LAB_0001eea8;
          }
        }
LAB_0001eea8:
        iVar11 = DAT_0001f1f4 + 0x1eec4;
        av_strlcatf(&local_430,0x80,DAT_0001f1f8 + 0x1eec8,local_490,iVar11);
        iVar8 = *piVar3;
        if (*pcVar21 != '\0') {
          iVar11 = DAT_0001f1fc + 0x1eee4;
        }
        av_log(0,0x18,DAT_0001f204 + 0x1ef10,&local_430,iVar8,DAT_0001f200 + 0x1eefc,iVar11,pcVar21,
               local_484[2],local_484[3]);
        uVar23 = param_1[0x49];
      }
      if (0 < (int)uVar23) {
        uVar26 = (uint)(param_3 != 0);
        if (**(char **)param_1[0x48] != '\0') {
          uVar26 = 0;
        }
        uVar14 = 0;
        uVar1 = uVar26;
        while (uVar1 == 0) {
          uVar26 = uVar14 + 1;
          if (uVar23 == uVar26) goto LAB_0001ef80;
          uVar14 = uVar26;
          uVar1 = (uint)(param_3 != 0);
          if (*(char *)((undefined4 *)param_1[0x48])[uVar26 * 4] != '\0') {
            uVar1 = 0;
          }
        }
        av_log(0,0x18,DAT_0001fbb8 + 0x20214,uVar26,iVar8);
      }
    }
LAB_0001ef80:
    iVar8 = param_1[0x6b];
    piVar4[0x5f] = -1;
    if (0 < iVar8) {
      iVar8 = 0;
      iVar11 = 0;
      do {
        while( true ) {
          iVar12 = iVar11 * 0x10;
          iVar19 = FUN_0002c49c(param_2,piVar3,*(undefined4 *)(param_1[0x6a] + iVar11 * 0x10));
          if (0 < iVar19) break;
          if (iVar19 != 0) goto LAB_0001e364;
          iVar11 = iVar11 + 1;
          if (param_1[0x6b] <= iVar11) goto LAB_0001effc;
        }
        iVar11 = iVar11 + 1;
        iVar8 = iVar8 + 1;
        local_480 = (undefined4 *)(param_1[0x6a] + iVar12);
        piVar4[0x5f] = local_480[2];
      } while (iVar11 < param_1[0x6b]);
LAB_0001effc:
      if (1 < iVar8) {
        local_430 = (char *)0x0;
        memset(&uStack_42c,0,0x7c);
        pcVar21 = (char *)*local_480;
        if ((pcVar21 == (char *)0x0) || (*pcVar21 == '\0')) {
          pcVar21 = (char *)(DAT_0001fbd4 + 0x202a4);
          av_strlcatf(&local_430,0x80,DAT_0001fbdc + 0x202b0,DAT_0001fbd8 + 0x202a8,pcVar21);
          iVar8 = *piVar3;
          pcVar25 = pcVar21;
        }
        else {
          pcVar25 = (char *)(DAT_0001f208 + 0x1f054);
          av_strlcatf(&local_430,0x80,DAT_0001f210 + 0x1f060,DAT_0001f20c + 0x1f058,pcVar25);
          iVar8 = *piVar3;
          if (*pcVar21 != '\0') {
            pcVar25 = (char *)(DAT_0001f214 + 0x1f07c);
          }
        }
        av_log(0,0x18,DAT_0001f21c + 0x1f0ac,&local_430,iVar8,DAT_0001f218 + 0x1f090,pcVar25,pcVar21
               ,local_480[2]);
      }
    }
    if (0 < param_1[0x4b]) {
      iVar8 = 0;
      iVar11 = 0;
      pcVar21 = (char *)0x0;
      do {
        while( true ) {
          iVar12 = iVar11 * 0x10;
          iVar19 = FUN_0002c49c(param_2,piVar3,*(undefined4 *)(param_1[0x4a] + iVar11 * 0x10));
          if (0 < iVar19) break;
          if (iVar19 != 0) goto LAB_0001e364;
          iVar11 = iVar11 + 1;
          if (param_1[0x4b] <= iVar11) goto LAB_0001f2f4;
        }
        iVar11 = iVar11 + 1;
        iVar8 = iVar8 + 1;
        local_48c = (undefined4 *)(param_1[0x4a] + iVar12);
        pcVar21 = (char *)local_48c[2];
      } while (iVar11 < param_1[0x4b]);
LAB_0001f2f4:
      if (1 < iVar8) {
        local_430 = (char *)0x0;
        memset(&uStack_42c,0,0x7c);
        iVar8 = DAT_0001fbec;
        pcVar25 = (char *)*local_48c;
        if ((pcVar25 == (char *)0x0) || (*pcVar25 == '\0')) {
          iVar11 = DAT_0001fbe0 + 0x202d8;
          av_strlcatf(&local_430,0x80,iVar11,DAT_0001fbe8 + 0x202ec,DAT_0001fbe4 + 0x202e0);
          pcVar25 = (char *)(iVar8 + 0x2031c);
          av_strlcatf(&local_430,0x80,iVar11,DAT_0001fbf4 + 0x20310,DAT_0001fbf0 + 0x20308);
          av_strlcatf(&local_430,0x80,iVar11,DAT_0001fbf8 + 0x20338,pcVar25);
          iVar8 = *piVar3;
          pcVar13 = pcVar25;
        }
        else {
          iVar8 = DAT_0001f220 + 0x1f350;
          av_strlcatf(&local_430,0x80,iVar8,DAT_0001f228 + 0x1f364,DAT_0001f224 + 0x1f358);
          pcVar13 = (char *)(DAT_0001f22c + 0x1f37c);
          av_strlcatf(&local_430,0x80,iVar8,DAT_0001f234 + 0x1f394,DAT_0001f230 + 0x1f388);
          av_strlcatf(&local_430,0x80,iVar8,DAT_0001f238 + 0x1f3b8,pcVar13);
          iVar8 = *piVar3;
          if (*pcVar25 != '\0') {
            pcVar13 = (char *)(DAT_0001f23c + 0x1f3d4);
          }
        }
        av_log(0,0x18,DAT_0001f244 + 0x1f404,&local_430,iVar8,DAT_0001f240 + 0x1f3e8,pcVar13,pcVar25
               ,local_48c[2]);
      }
      if (((pcVar21 != (char *)0x0) && (*pcVar21 != '\0')) &&
         (iVar8 = av_bsf_list_parse_str(pcVar21,piVar4 + 0x14), iVar8 < 0)) {
        uStack_42c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_428 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_424 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        local_430 = (char *)0x0;
        local_420 = 0;
        local_418 = 0;
        local_410 = 0;
        local_408 = 0;
        local_400 = 0;
        local_3f8 = 0;
        uStack_41c = uStack_42c;
        uStack_414 = uStack_42c;
        uStack_40c = uStack_42c;
        uStack_404 = uStack_42c;
        uStack_3fc = uStack_42c;
        uStack_3f4 = uStack_42c;
        av_strerror(iVar8,&local_430,0x40);
        av_log(0,0x10,DAT_0001fc50 + 0x206f8,pcVar21,&local_430);
                    /* WARNING: Subroutine does not return */
        FUN_0002b538(1);
      }
    }
    if (0 < param_1[0x4d]) {
      iVar8 = 0;
      iVar11 = 0;
      __nptr = (long *)0x0;
      do {
        while( true ) {
          iVar12 = iVar11 * 0x10;
          iVar19 = FUN_0002c49c(param_2,piVar3,*(undefined4 *)(param_1[0x4c] + iVar11 * 0x10));
          if (0 < iVar19) break;
          if (iVar19 != 0) goto LAB_0001e364;
          iVar11 = iVar11 + 1;
          if (param_1[0x4d] <= iVar11) goto LAB_0001f4b0;
        }
        iVar11 = iVar11 + 1;
        iVar8 = iVar8 + 1;
        local_47c = (undefined4 *)(param_1[0x4c] + iVar12);
        __nptr = (long *)local_47c[2];
      } while (iVar11 < param_1[0x4d]);
LAB_0001f4b0:
      if (1 < iVar8) {
        local_430 = (char *)0x0;
        memset(&uStack_42c,0,0x7c);
        local_490 = (char *)*local_47c;
        if (local_490 == (char *)0x0) {
          local_490 = (char *)(DAT_0001fc28 + 0x20510);
        }
        else if (*local_490 == '\0') {
          local_490 = (char *)(DAT_0001f248 + 0x1f500);
        }
        iVar5 = DAT_0001f250 + 0x1f520;
        iVar11 = DAT_0001f254 + 0x1f52c;
        piVar20 = (int *)(DAT_0001f258 + 0x1f648);
        iVar12 = DAT_0001f25c + 0x1f544;
        iVar19 = DAT_0001f264 + 0x1f558;
        iVar8 = DAT_0001f260 + 0x1f550;
        local_49c = DAT_0001f24c + 0x1f514;
        if (iVar5 == 0) goto LAB_0001f59c;
        while (av_strlcatf(&local_430,0x80,iVar19,iVar8,DAT_0001f268 + 0x1f574), piVar22 = piVar20,
              iVar9 = iVar5, iVar5 != 0) {
          while( true ) {
            iVar5 = *piVar22;
            piVar20 = piVar22 + 1;
            iVar8 = local_49c;
            local_49c = iVar9;
            if (*piVar22 != 0) break;
LAB_0001f59c:
            av_strlcatf(&local_430,0x80,iVar11,iVar8,iVar12);
            piVar22 = piVar20;
            iVar9 = iVar5;
            if (iVar5 == 0) goto LAB_0001f5bc;
          }
        }
LAB_0001f5bc:
        iVar8 = DAT_0001f26c + 0x1f5d8;
        av_strlcatf(&local_430,0x80,DAT_0001f270 + 0x1f5dc,local_49c,iVar8);
        if (*local_490 != '\0') {
          iVar8 = DAT_0001f274 + 0x1f5fc;
        }
        av_log(0,0x18,DAT_0001f27c + 0x1f62c,&local_430,*piVar3,DAT_0001f278 + 0x1f610,iVar8,
               local_490,local_47c[2]);
      }
      if (__nptr != (long *)0x0) {
        lVar6 = strtol((char *)__nptr,&local_43c,0);
        if (*local_43c != '\0') {
          lVar6 = *__nptr;
        }
        iVar8 = *(int *)(piVar4[3] + 0xb4);
        *(long *)(piVar4[0x15] + 0x14) = lVar6;
        *(long *)(iVar8 + 8) = lVar6;
      }
    }
    if (param_1[0x51] < 1) {
      iVar8 = param_1[0x85];
    }
    else {
      iVar8 = 0;
      dVar30 = -1.0;
      iVar11 = 0;
      do {
        while( true ) {
          iVar12 = iVar11 * 0x10;
          iVar19 = FUN_0002c49c(param_2,piVar3,*(undefined4 *)(param_1[0x50] + iVar11 * 0x10));
          if (0 < iVar19) break;
          if (iVar19 != 0) goto LAB_0001e364;
          iVar11 = iVar11 + 1;
          if (param_1[0x51] <= iVar11) goto LAB_0001f6e8;
        }
        iVar11 = iVar11 + 1;
        iVar8 = iVar8 + 1;
        local_478 = (undefined4 *)(param_1[0x50] + iVar12);
        dVar30 = *(double *)(local_478 + 2);
      } while (iVar11 < param_1[0x51]);
LAB_0001f6e8:
      if (1 < iVar8) {
        local_430 = (char *)0x0;
        memset(&uStack_42c,0,0x7c);
        iVar8 = DAT_0001f28c;
        pcVar21 = (char *)*local_478;
        if ((pcVar21 == (char *)0x0) || (*pcVar21 == '\0')) {
          iVar8 = DAT_0001fbfc + 0x2035c;
          pcVar21 = (char *)(DAT_0001fc04 + 0x20378);
          av_strlcatf(&local_430,0x80,iVar8,DAT_0001fc08 + 0x2037c,DAT_0001fc00 + 0x20364);
          av_strlcatf(&local_430,0x80,iVar8,DAT_0001fc0c + 0x20398,pcVar21);
          iVar11 = *piVar3;
          pcVar25 = pcVar21;
        }
        else {
          iVar11 = DAT_0001f280 + 0x1f73c;
          av_strlcatf(&local_430,0x80,iVar11,DAT_0001f288 + 0x1f758,DAT_0001f284 + 0x1f744);
          av_strlcatf(&local_430,0x80,iVar11,DAT_0001f290 + 0x1f76c,(char *)(iVar8 + 0x1f764));
          iVar11 = *piVar3;
          pcVar25 = (char *)(iVar8 + 0x1f764);
          if (*pcVar21 != '\0') {
            pcVar25 = (char *)(DAT_0001f294 + 0x1f790);
          }
        }
        av_log(0,0x18,DAT_0001f29c + 0x1f7c0,&local_430,iVar11,DAT_0001f298 + 0x1f7a8,pcVar25,
               pcVar21,*(undefined8 *)(local_478 + 2));
      }
      iVar8 = param_1[0x85];
      if (0.0 <= dVar30) {
        iVar11 = piVar4[0x15];
        dVar30 = dVar30 * DAT_0001faf8;
        *(uint *)(iVar11 + 0x3c) = *(uint *)(iVar11 + 0x3c) | 2;
        *(int *)(iVar11 + 0x34) = (int)(longlong)dVar30;
      }
    }
    if (0 < iVar8) {
      iVar8 = 0;
      iVar11 = 0;
      do {
        while( true ) {
          iVar12 = iVar11 * 0x10;
          iVar19 = FUN_0002c49c(param_2,piVar3,*(undefined4 *)(param_1[0x84] + iVar11 * 0x10));
          if (0 < iVar19) break;
          if (iVar19 != 0) goto LAB_0001e364;
          iVar11 = iVar11 + 1;
          if (param_1[0x85] <= iVar11) goto LAB_0001f868;
        }
        iVar11 = iVar11 + 1;
        iVar8 = iVar8 + 1;
        local_474 = (undefined4 *)(param_1[0x84] + iVar12);
        piVar4[0x60] = local_474[2];
      } while (iVar11 < param_1[0x85]);
LAB_0001f868:
      if (1 < iVar8) {
        local_430 = (char *)0x0;
        memset(&uStack_42c,0,0x7c);
        pcVar21 = (char *)*local_474;
        if ((pcVar21 == (char *)0x0) || (*pcVar21 == '\0')) {
          pcVar21 = (char *)(DAT_0001fb10 + 0x1f904);
          av_strlcatf(&local_430,0x80,DAT_0001fb18 + 0x1f910,DAT_0001fb14 + 0x1f908,pcVar21);
          iVar8 = *piVar3;
          pcVar25 = pcVar21;
        }
        else {
          pcVar25 = (char *)(DAT_0001fb00 + 0x1f8c0);
          av_strlcatf(&local_430,0x80,DAT_0001fb08 + 0x1f8cc,DAT_0001fb04 + 0x1f8c4,pcVar25);
          iVar8 = *piVar3;
          if (*pcVar21 != '\0') {
            pcVar25 = (char *)(DAT_0001fb0c + 0x1f8e8);
          }
        }
        av_log(0,0x18,DAT_0001fb20 + 0x1f950,&local_430,iVar8,DAT_0001fb1c + 0x1f934,pcVar25,pcVar21
               ,local_474[2]);
      }
    }
    iVar8 = av_strdup(piVar4[0x60]);
    iVar11 = param_1[0x7b];
    piVar4[0x6d] = 0x80;
    piVar4[0x60] = iVar8;
    if (0 < iVar11) {
      iVar8 = 0;
      iVar11 = 0;
      do {
        while( true ) {
          iVar12 = iVar11 * 0x10;
          iVar19 = FUN_0002c49c(param_2,piVar3,*(undefined4 *)(param_1[0x7a] + iVar11 * 0x10));
          if (0 < iVar19) break;
          if (iVar19 != 0) goto LAB_0001e364;
          iVar11 = iVar11 + 1;
          if (param_1[0x7b] <= iVar11) goto LAB_0001f9e0;
        }
        iVar11 = iVar11 + 1;
        iVar8 = iVar8 + 1;
        local_46c = (undefined4 *)(param_1[0x7a] + iVar12);
        piVar4[0x6d] = local_46c[2];
      } while (iVar11 < param_1[0x7b]);
LAB_0001f9e0:
      if (1 < iVar8) {
        local_430 = (char *)0x0;
        memset(&uStack_42c,0,0x7c);
        pcVar21 = (char *)*local_46c;
        if ((pcVar21 == (char *)0x0) || (*pcVar21 == '\0')) {
          pcVar21 = (char *)(DAT_0001fb34 + 0x1fa7c);
          av_strlcatf(&local_430,0x80,DAT_0001fb3c + 0x1fa88,DAT_0001fb38 + 0x1fa80,pcVar21);
          iVar8 = *piVar3;
          pcVar25 = pcVar21;
        }
        else {
          pcVar25 = (char *)(DAT_0001fb24 + 0x1fa38);
          av_strlcatf(&local_430,0x80,DAT_0001fb2c + 0x1fa44,DAT_0001fb28 + 0x1fa3c,pcVar25);
          iVar8 = *piVar3;
          if (*pcVar21 != '\0') {
            pcVar25 = (char *)(DAT_0001fb30 + 0x1fa60);
          }
        }
        av_log(0,0x18,DAT_0001fb44 + 0x1fac8,&local_430,iVar8,DAT_0001fb40 + 0x1faac,pcVar25,pcVar21
               ,local_46c[2]);
      }
    }
    iVar8 = param_1[0x7d];
    iVar11 = 0;
    piVar4[0x6f] = 0;
    piVar4[0x70] = 0x3200000;
    if (0 < iVar8) {
      iVar8 = 0;
      do {
        while( true ) {
          iVar12 = iVar8 * 0x10;
          iVar19 = FUN_0002c49c(param_2,piVar3,*(undefined4 *)(param_1[0x7c] + iVar8 * 0x10));
          if (0 < iVar19) break;
          if (iVar19 != 0) goto LAB_0001e364;
          iVar8 = iVar8 + 1;
          if (param_1[0x7d] <= iVar8) goto LAB_0001fcc0;
        }
        iVar8 = iVar8 + 1;
        iVar11 = iVar11 + 1;
        local_494 = (undefined4 *)(param_1[0x7c] + iVar12);
        piVar4[0x70] = local_494[2];
      } while (iVar8 < param_1[0x7d]);
LAB_0001fcc0:
      if (1 < iVar11) {
        local_430 = (char *)0x0;
        memset(&uStack_42c,0,0x7c);
        pcVar21 = (char *)*local_494;
        if ((pcVar21 == (char *)0x0) || (*pcVar21 == '\0')) {
          pcVar21 = (char *)(DAT_0001fb58 + 0x1fd60);
          av_strlcatf(&local_430,0x80,DAT_0001fb60 + 0x1fd6c,DAT_0001fb5c + 0x1fd64,pcVar21);
          iVar8 = *piVar3;
          pcVar25 = pcVar21;
        }
        else {
          pcVar25 = (char *)(DAT_0001fb48 + 0x1fd1c);
          av_strlcatf(&local_430,0x80,DAT_0001fb50 + 0x1fd28,DAT_0001fb4c + 0x1fd20,pcVar25);
          iVar8 = *piVar3;
          if (*pcVar21 != '\0') {
            pcVar25 = (char *)(DAT_0001fb54 + 0x1fd44);
          }
        }
        av_log(0,0x18,DAT_0001fb68 + 0x1fdac,&local_430,iVar8,DAT_0001fb64 + 0x1fd90,pcVar25,pcVar21
               ,local_494[2]);
      }
    }
    if (0 < param_1[0x8f]) {
      iVar11 = 0;
      iVar8 = iVar11;
      do {
        while( true ) {
          iVar12 = iVar8 * 0x10;
          iVar19 = FUN_0002c49c(param_2,piVar3,*(undefined4 *)(param_1[0x8e] + iVar8 * 0x10));
          if (0 < iVar19) break;
          if (iVar19 != 0) goto LAB_0001e364;
          iVar8 = iVar8 + 1;
          if (param_1[0x8f] <= iVar8) goto LAB_0001fe28;
        }
        iVar8 = iVar8 + 1;
        iVar11 = iVar11 + 1;
        local_468 = (undefined4 *)(param_1[0x8e] + iVar12);
        piVar4[0x32] = local_468[2];
      } while (iVar8 < param_1[0x8f]);
LAB_0001fe28:
      if (1 < iVar11) {
        local_430 = (char *)0x0;
        memset(&uStack_42c,0,0x7c);
        pcVar21 = (char *)*local_468;
        if ((pcVar21 == (char *)0x0) || (*pcVar21 == '\0')) {
          pcVar21 = (char *)(DAT_0001fb7c + 0x1fec4);
          av_strlcatf(&local_430,0x80,DAT_0001fb84 + 0x1fed0,DAT_0001fb80 + 0x1fec8,pcVar21);
          iVar8 = *piVar3;
          pcVar25 = pcVar21;
        }
        else {
          pcVar25 = (char *)(DAT_0001fb6c + 0x1fe80);
          av_strlcatf(&local_430,0x80,DAT_0001fb74 + 0x1fe8c,DAT_0001fb70 + 0x1fe84,pcVar25);
          iVar8 = *piVar3;
          if (*pcVar21 != '\0') {
            pcVar25 = (char *)(DAT_0001fb78 + 0x1fea8);
          }
        }
        av_log(0,0x18,DAT_0001fb8c + 0x1ff10,&local_430,iVar8,DAT_0001fb88 + 0x1fef4,pcVar25,pcVar21
               ,local_468[2]);
      }
    }
    if ((*(uint *)(*(int *)(param_2 + 8) + 0x1c) & 0x40) != 0) {
      *(uint *)(piVar4[0x15] + 0x3c) = *(uint *)(piVar4[0x15] + 0x3c) | 0x400000;
    }
    av_dict_copy(piVar4 + 0x54,*(undefined4 *)(*param_1 + 0x18),0);
    av_dict_copy(piVar4 + 0x55,*(undefined4 *)(*param_1 + 0x1c),0);
    if ((piVar4[0x17] != 0) &&
       (iVar8 = av_get_exact_bits_per_sample(*(undefined4 *)(piVar4[0x17] + 0xc)), iVar8 == 0x18)) {
      av_dict_set(piVar4 + 0x55,DAT_0001fc38 + 0x2058c,DAT_0001fc34 + 0x20588,0);
    }
    piVar4[2] = param_4;
    if (-1 < param_4) {
      iVar8 = **(int **)(iVar7 + DAT_0001fb90);
      piVar4[8] = *(int *)(iVar8 + param_4 * 4);
      iVar8 = *(int *)(iVar8 + param_4 * 4);
      *(undefined4 *)(iVar8 + 8) = 0;
      *(undefined4 *)(*(int *)(iVar8 + 4) + 0x34) = *(undefined4 *)(iVar8 + 0xc);
    }
    piVar4[0xe] = 0;
    piVar4[0xf] = -0x80000000;
    iVar8 = av_fifo_alloc2(8,4,0);
    piVar4[0x6e] = iVar8;
    if (iVar8 != 0) {
      if (0 < param_1[0x69]) {
        iVar7 = 0;
        iVar8 = 0;
        do {
          while( true ) {
            iVar11 = iVar8 * 0x10;
            iVar12 = FUN_0002c49c(param_2,piVar3,*(undefined4 *)(param_1[0x68] + iVar8 * 0x10));
            if (0 < iVar12) break;
            if (iVar12 != 0) goto LAB_0001e364;
            iVar8 = iVar8 + 1;
            if (param_1[0x69] <= iVar8) goto LAB_0002005c;
          }
          iVar8 = iVar8 + 1;
          iVar7 = iVar7 + 1;
          local_470 = (undefined4 *)(param_1[0x68] + iVar11);
          piVar4[0x5e] = local_470[2];
        } while (iVar8 < param_1[0x69]);
LAB_0002005c:
        if (1 < iVar7) {
          local_430 = (char *)0x0;
          memset(&uStack_42c,0,0x7c);
          pcVar21 = (char *)*local_470;
          if ((pcVar21 == (char *)0x0) || (*pcVar21 == '\0')) {
            pcVar21 = (char *)(DAT_0001fba4 + 0x200fc);
            av_strlcatf(&local_430,0x80,DAT_0001fbac + 0x20108,DAT_0001fba8 + 0x20100,pcVar21);
            iVar8 = *piVar3;
            pcVar25 = pcVar21;
          }
          else {
            pcVar25 = (char *)(DAT_0001fb94 + 0x200b4);
            av_strlcatf(&local_430,0x80,DAT_0001fb9c + 0x200c0,DAT_0001fb98 + 0x200b8,pcVar25);
            iVar8 = *piVar3;
            if (*pcVar21 != '\0') {
              pcVar25 = (char *)(DAT_0001fba0 + 0x200e0);
            }
          }
          av_log(0,0x18,DAT_0001fbb4 + 0x20148,&local_430,iVar8,DAT_0001fbb0 + 0x2012c,pcVar25,
                 pcVar21,local_470[2]);
        }
      }
      return piVar4;
    }
  }
  else {
    iVar12 = 0;
    iVar19 = 0;
    iVar11 = 0;
    do {
      while( true ) {
        iVar5 = iVar19 * 0x10;
        iVar9 = FUN_0002c49c(param_2,piVar3,*(undefined4 *)(param_1[0x88] + iVar19 * 0x10));
        if (0 < iVar9) break;
        if (iVar9 != 0) goto LAB_0001e364;
        iVar19 = iVar19 + 1;
        if (param_1[0x89] <= iVar19) goto LAB_0001ea9c;
      }
      iVar19 = iVar19 + 1;
      iVar12 = iVar12 + 1;
      local_490 = (char *)(param_1[0x88] + iVar5);
      iVar11 = *(int *)((int)local_490 + 8);
    } while (iVar19 < param_1[0x89]);
LAB_0001ea9c:
    if (1 < iVar12) {
      local_430 = (char *)0x0;
      memset(&uStack_42c,0,0x7c);
      pcVar21 = *(char **)local_490;
      if ((pcVar21 == (char *)0x0) || (*pcVar21 == '\0')) {
        pcVar21 = (char *)(DAT_0001fbbc + 0x20234);
        av_strlcatf(&local_430,0x80,DAT_0001fbc4 + 0x20240,DAT_0001fbc0 + 0x20238,pcVar21);
        iVar8 = *piVar3;
        pcVar25 = pcVar21;
      }
      else {
        pcVar25 = (char *)(DAT_0001f1a0 + 0x1eafc);
        av_strlcatf(&local_430,0x80,DAT_0001f1a8 + 0x1eb08,DAT_0001f1a4 + 0x1eb00,pcVar25);
        iVar8 = *piVar3;
        if (*pcVar21 != '\0') {
          pcVar25 = (char *)(DAT_0001f1ac + 0x1eb24);
        }
      }
      av_log(0,0x18,DAT_0001f1b4 + 0x1eb54,&local_430,iVar8,DAT_0001f1b0 + 0x1eb38,pcVar25,pcVar21,
             *(undefined4 *)((int)local_490 + 8));
    }
    if (iVar11 == 0) goto LAB_000201dc;
    iVar8 = 0;
    iVar12 = av_parse_ratio(&local_430,iVar11,0x7fffffff,0,0);
    if (((-1 < iVar12) && (0 < (int)local_430)) && (0 < (int)uStack_42c)) {
      iVar12 = param_1[0x8b];
      piVar3[3] = (int)local_430;
      piVar3[4] = uStack_42c;
      if (0 < iVar12) goto LAB_0001ebbc;
      goto LAB_0001ecf4;
    }
    pcVar10 = (code *)(DAT_0001fc60 + 0x2075c);
LAB_00020758:
    av_log(0,8,pcVar10,iVar11);
  }
LAB_0001e364:
                    /* WARNING: Subroutine does not return */
  FUN_0002b538(1);
}



/* ===== FUN_00020778 @ 00020778 size=476 ===== */

int FUN_00020778(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *unaff_r5;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 local_a8;
  undefined1 auStack_a4 [128];
  
  iVar1 = FUN_0001e1a4(param_1,param_2,3,param_3);
  iVar5 = *(int *)(iVar1 + 0x164);
  iVar3 = *(int *)(iVar1 + 0x54);
  puVar7 = *(undefined4 **)(iVar1 + 0xc);
  *(undefined4 *)(iVar3 + 8) = 3;
  if ((iVar5 == 0) && (0 < *(int *)(param_1 + 0x54))) {
    iVar5 = 0;
    iVar8 = 0;
    iVar9 = 0;
    do {
      iVar2 = FUN_0002c49c(param_2,puVar7,*(undefined4 *)(*(int *)(param_1 + 0x50) + iVar9 * 0x10));
      if (iVar2 < 1) {
        if (iVar2 != 0) goto LAB_00020814;
      }
      else {
        iVar5 = iVar5 + 1;
        unaff_r5 = (undefined4 *)(*(int *)(param_1 + 0x50) + iVar9 * 0x10);
        iVar8 = unaff_r5[2];
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(param_1 + 0x54));
    if (1 < iVar5) {
      local_a8 = 0;
      memset(auStack_a4,0,0x7c);
      pcVar4 = (char *)*unaff_r5;
      if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
        pcVar4 = (char *)(DAT_00020954 + 0x20870);
        av_strlcatf(&local_a8,0x80,DAT_0002095c + 0x2087c,DAT_00020958 + 0x20874,pcVar4);
        uVar10 = *puVar7;
        pcVar6 = pcVar4;
      }
      else {
        pcVar6 = (char *)(DAT_00020968 + 0x2090c);
        av_strlcatf(&local_a8,0x80,DAT_00020970 + 0x20918,DAT_0002096c + 0x20910,pcVar6);
        uVar10 = *puVar7;
        if (*pcVar4 != '\0') {
          pcVar6 = (char *)(DAT_00020974 + 0x20938);
        }
      }
      av_log(0,0x18,DAT_00020964 + 0x208b8,&local_a8,uVar10,DAT_00020960 + 0x208a0,pcVar6,pcVar4,
             unaff_r5[2]);
    }
    if ((iVar8 != 0) && (iVar3 = av_parse_video_size(iVar3 + 0x5c,iVar3 + 0x60,iVar8), iVar3 < 0)) {
      av_log(0,8,DAT_00020978 + 0x20950,iVar8);
LAB_00020814:
                    /* WARNING: Subroutine does not return */
      FUN_0002b538(1);
    }
  }
  return iVar1;
}



/* ===== FUN_0002097c @ 0002097c size=604 ===== */

void FUN_0002097c(int *param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *unaff_r4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  int local_b4;
  undefined4 local_a8;
  undefined1 auStack_a4 [128];
  
  if (*param_2 < 1) {
    puVar4 = (undefined4 *)param_4[0x2d];
  }
  else {
    iVar5 = 0;
    local_b4 = 0;
    iVar10 = 0;
    do {
      iVar1 = FUN_0002c49c(param_3,param_4,*(undefined4 *)(*param_1 + iVar5 * 0x10));
      if (iVar1 < 1) {
        if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0002b538(1);
        }
      }
      else {
        iVar10 = iVar10 + 1;
        unaff_r4 = (undefined4 *)(*param_1 + iVar5 * 0x10);
        local_b4 = unaff_r4[2];
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *param_2);
    if (1 < iVar10) {
      local_a8 = 0;
      memset(auStack_a4,0,0x7c);
      pcVar11 = (char *)*unaff_r4;
      if (pcVar11 == (char *)0x0) {
        pcVar11 = (char *)((int)&DAT_00020bd8 + DAT_00020c14);
      }
      else if (*pcVar11 == '\0') {
        pcVar11 = (char *)(DAT_00020bd8 + 0x20a44);
      }
      iVar3 = DAT_00020bdc + 0x20a54;
      iVar1 = DAT_00020be0 + 0x20a5c;
      iVar10 = DAT_00020be8 + 0x20a78;
      piVar7 = (int *)(DAT_00020be4 + 0x20b3c);
      iVar2 = DAT_00020bf0 + 0x20a84;
      iVar6 = DAT_00020bf4 + 0x20a94;
      iVar5 = DAT_00020bec + 0x20a88;
      if (iVar3 == 0) goto LAB_00020ad4;
      while (av_strlcatf(&local_a8,0x80,iVar6,iVar10,DAT_00020bf8 + 0x20aac), piVar8 = piVar7,
            iVar9 = iVar3, iVar10 = iVar5, iVar3 != 0) {
        while( true ) {
          iVar3 = *piVar8;
          piVar7 = piVar8 + 1;
          iVar5 = iVar9;
          if (*piVar8 != 0) break;
LAB_00020ad4:
          av_strlcatf(&local_a8,0x80,iVar1,iVar10,iVar2);
          piVar8 = piVar7;
          iVar9 = iVar3;
          iVar10 = iVar5;
          if (iVar3 == 0) goto LAB_00020af4;
        }
      }
LAB_00020af4:
      iVar10 = DAT_00020bfc + 0x20b0c;
      av_strlcatf(&local_a8,0x80,DAT_00020c00 + 0x20b14,iVar5,iVar10);
      if (*pcVar11 != '\0') {
        iVar10 = DAT_00020c04 + 0x20b30;
      }
      av_log(0,0x18,DAT_00020c0c + 0x20b5c,&local_a8,*param_4,DAT_00020c08 + 0x20b44,iVar10,pcVar11,
             unaff_r4[2]);
    }
    puVar4 = (undefined4 *)param_4[0x2d];
    if (local_b4 != 0) {
      iVar5 = FUN_0001bac0(local_b4,*puVar4,0);
      piVar7 = (int *)param_4[0x2d];
      iVar10 = *(int *)(DAT_00020c10 + 0x20b94);
      piVar7[1] = *(int *)(iVar5 + 0xc);
      if ((iVar10 != 0) && (*piVar7 != *(int *)(iVar5 + 8))) {
        *piVar7 = *(int *)(iVar5 + 8);
      }
      return;
    }
  }
  avcodec_find_decoder(puVar4[1]);
  return;
}



/* ===== FUN_00020c18 @ 00020c18 size=6900 ===== */

void FUN_00020c18(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  char *pcVar19;
  long *__nptr;
  char *pcVar20;
  int *piVar21;
  int *piVar22;
  int iVar23;
  undefined4 *local_124;
  uint local_11c;
  undefined4 *local_118;
  undefined4 *local_114;
  undefined4 *local_110;
  undefined4 *local_10c;
  undefined4 *local_108;
  char *local_100;
  int local_fc;
  undefined4 *local_e0;
  undefined4 *local_dc;
  undefined4 *local_d8;
  undefined4 *local_d4;
  undefined4 *local_d0;
  undefined4 *local_cc;
  undefined4 *local_c8;
  undefined4 *local_c4;
  char *local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 auStack_ac [128];
  
  iVar12 = DAT_00021bec + 0x20c2c;
  if (*(int *)(param_2 + 0x18) == 0) {
    return;
  }
  local_11c = 0;
  uVar1 = *(undefined4 *)(iVar12 + DAT_00021bf0);
  uVar9 = *(undefined4 *)(iVar12 + DAT_00021bf4);
  puVar13 = *(undefined4 **)(iVar12 + DAT_00021bf8);
  iVar12 = DAT_00021bfc + 0x20c84;
  iVar14 = DAT_00021c00 + 0x20c90;
  iVar15 = DAT_00021c04 + 0x20c9c;
  do {
    puVar18 = *(undefined4 **)(*(int *)(param_2 + 0x1c) + local_11c * 4);
    piVar16 = (int *)puVar18[0x2d];
    local_b4 = avcodec_get_class();
    uVar2 = av_opt_find(&local_b4,iVar12,0,0,2);
    puVar3 = (undefined4 *)FUN_0002d75c(uVar9,0x168,uVar1);
    iVar10 = param_1[0x21];
    uVar17 = *puVar13;
    puVar3[2] = 1;
    *puVar3 = uVar17;
    puVar3[1] = puVar18;
    puVar18[0xd] = 0x30;
    puVar3[0x1c] = 0xffffffff;
    puVar3[0x1d] = 0x7fffffff;
    *(undefined8 *)(puVar3 + 0x24) = 0x3ff0000000000000;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0x80000000;
    puVar3[0x1e] = 0;
    puVar3[0x1f] = 0x80000000;
    *(undefined8 *)(puVar3 + 0x22) = 0;
    if (0 < iVar10) {
      iVar10 = 0;
      iVar23 = 0;
      do {
        iVar4 = FUN_0002c49c(param_2,puVar18,*(undefined4 *)(param_1[0x20] + iVar23 * 0x10));
        if (iVar4 < 1) {
          if (iVar4 != 0) goto LAB_00020d98;
        }
        else {
          iVar10 = iVar10 + 1;
          local_118 = (undefined4 *)(param_1[0x20] + iVar23 * 0x10);
          uVar17 = local_118[3];
          puVar3[0x24] = local_118[2];
          puVar3[0x25] = uVar17;
        }
        iVar23 = iVar23 + 1;
      } while (iVar23 < param_1[0x21]);
      if (1 < iVar10) {
        local_b0 = 0;
        memset(auStack_ac,0,0x7c);
        pcVar19 = (char *)*local_118;
        if ((pcVar19 == (char *)0x0) || (*pcVar19 == '\0')) {
          pcVar19 = (char *)(DAT_00021cf4 + 0x220f8);
          av_strlcatf(&local_b0,0x80,DAT_00021cf8 + 0x220fc,DAT_00021cfc + 0x22104,pcVar19);
          uVar17 = *puVar18;
          pcVar20 = pcVar19;
        }
        else {
          pcVar20 = (char *)(DAT_00021c08 + 0x20e04);
          av_strlcatf(&local_b0,0x80,DAT_00021c0c + 0x20e08,DAT_00021c10 + 0x20e10,pcVar20);
          uVar17 = *puVar18;
          if (*pcVar19 != '\0') {
            pcVar20 = (char *)(DAT_00021c14 + 0x20e28);
          }
        }
        local_124 = &local_b0;
        av_log(0,0x18,DAT_00021c1c + 0x20e54,local_124,uVar17,DAT_00021c18 + 0x20e40,pcVar20,pcVar19
               ,*(undefined8 *)(local_118 + 2));
      }
    }
    iVar10 = param_1[0x2b];
    puVar3[0x2c] = 1;
    if (0 < iVar10) {
      iVar10 = 0;
      iVar23 = 0;
      do {
        while( true ) {
          iVar4 = iVar23 * 0x10;
          iVar5 = FUN_0002c49c(param_2,puVar18,*(undefined4 *)(param_1[0x2a] + iVar23 * 0x10));
          if (0 < iVar5) break;
          if (iVar5 != 0) goto LAB_00020d98;
          iVar23 = iVar23 + 1;
          if (param_1[0x2b] <= iVar23) goto LAB_00020edc;
        }
        iVar23 = iVar23 + 1;
        iVar10 = iVar10 + 1;
        local_114 = (undefined4 *)(param_1[0x2a] + iVar4);
        puVar3[0x2c] = local_114[2];
      } while (iVar23 < param_1[0x2b]);
LAB_00020edc:
      if (1 < iVar10) {
        local_b0 = 0;
        memset(auStack_ac,0,0x7c);
        pcVar19 = (char *)*local_114;
        if ((pcVar19 == (char *)0x0) || (*pcVar19 == '\0')) {
          pcVar19 = (char *)(DAT_00021d0c + 0x22170);
          av_strlcatf(&local_b0,0x80,DAT_00021d10 + 0x22174,DAT_00021d14 + 0x2217c,pcVar19);
          uVar17 = *puVar18;
          pcVar20 = pcVar19;
        }
        else {
          pcVar20 = (char *)(DAT_00021c20 + 0x2124c);
          av_strlcatf(&local_b0,0x80,DAT_00021c24 + 0x21250,DAT_00021c28 + 0x21258,pcVar20);
          uVar17 = *puVar18;
          if (*pcVar19 != '\0') {
            pcVar20 = (char *)(DAT_00021c2c + 0x21270);
          }
        }
        local_124 = &local_b0;
        av_log(0,0x18,DAT_00021c34 + 0x2129c,local_124,uVar17,DAT_00021c30 + 0x21284,pcVar20,pcVar19
               ,local_114[2]);
      }
    }
    if (0 < param_1[0x4d]) {
      iVar10 = 0;
      iVar23 = 0;
      __nptr = (long *)0x0;
      do {
        while( true ) {
          iVar4 = iVar23 * 0x10;
          iVar5 = FUN_0002c49c(param_2,puVar18,*(undefined4 *)(param_1[0x4c] + iVar23 * 0x10));
          if (0 < iVar5) break;
          if (iVar5 != 0) goto LAB_00020d98;
          iVar23 = iVar23 + 1;
          if (param_1[0x4d] <= iVar23) goto LAB_00020f64;
        }
        iVar23 = iVar23 + 1;
        iVar10 = iVar10 + 1;
        local_110 = (undefined4 *)(param_1[0x4c] + iVar4);
        __nptr = (long *)local_110[2];
      } while (iVar23 < param_1[0x4d]);
LAB_00020f64:
      if (1 < iVar10) {
        local_b0 = 0;
        memset(auStack_ac,0,0x7c);
        pcVar19 = (char *)*local_110;
        if (pcVar19 == (char *)0x0) {
          pcVar19 = (char *)(DAT_00021d2c + 0x22220);
        }
        else if (*pcVar19 == '\0') {
          pcVar19 = (char *)(DAT_00021c5c + 0x21a10);
        }
        iVar4 = DAT_00021c64 + 0x21a34;
        piVar21 = (int *)(DAT_00021c68 + 0x21b58);
        iVar5 = DAT_00021c70 + 0x21a58;
        iVar10 = DAT_00021c6c + 0x21a54;
        iVar23 = iVar14;
        local_fc = DAT_00021c60 + 0x21a20;
        if (iVar14 == 0) goto LAB_00021a9c;
        while (av_strlcatf(&local_b0,0x80,iVar5,iVar10,DAT_00021c74 + 0x21a70), piVar22 = piVar21,
              iVar7 = iVar23, iVar23 != 0) {
          while( true ) {
            iVar23 = *piVar22;
            piVar21 = piVar22 + 1;
            iVar10 = local_fc;
            local_fc = iVar7;
            if (*piVar22 != 0) break;
LAB_00021a9c:
            av_strlcatf(&local_b0,0x80,iVar15,iVar10,iVar4);
            piVar22 = piVar21;
            iVar7 = iVar23;
            if (iVar23 == 0) goto LAB_00021abc;
          }
        }
LAB_00021abc:
        iVar10 = DAT_00021c78 + 0x21ad4;
        av_strlcatf(&local_b0,0x80,DAT_00021c7c + 0x21ad8,local_fc,iVar10);
        if (*pcVar19 != '\0') {
          iVar10 = DAT_00021c80 + 0x21af8;
        }
        av_log(0,0x18,DAT_00021c88 + 0x21b24,&local_b0,*puVar18,DAT_00021c84 + 0x21b0c,iVar10,
               pcVar19,local_110[2]);
      }
      if (__nptr != (long *)0x0) {
        lVar6 = strtol((char *)__nptr,&local_b8,0);
        if (*local_b8 != '\0') {
          lVar6 = *__nptr;
        }
        *(long *)(puVar18[0x2d] + 8) = lVar6;
      }
    }
    uVar17 = FUN_0002097c(param_1 + 8,param_1 + 9,param_2,puVar18);
    uVar11 = *(undefined4 *)(*(int *)(puVar3[1] + 0xb4) + 4);
    iVar10 = *param_1;
    puVar3[7] = uVar17;
    uVar11 = FUN_0002c4e0(*(undefined4 *)(iVar10 + 0x10),uVar11,param_2,puVar18,uVar17);
    iVar10 = param_1[0x71];
    puVar3[0x44] = 0xffffffff;
    puVar3[0x27] = uVar11;
    if (iVar10 < 1) {
LAB_00021074:
      if (0 < param_1[0x83]) goto LAB_00021080;
LAB_0002136c:
      iVar10 = 0;
    }
    else {
      iVar10 = 0;
      iVar23 = 0;
      do {
        while( true ) {
          iVar4 = iVar23 * 0x10;
          iVar5 = FUN_0002c49c(param_2,puVar18,*(undefined4 *)(param_1[0x70] + iVar23 * 0x10));
          if (0 < iVar5) break;
          if (iVar5 != 0) goto LAB_00020d98;
          iVar23 = iVar23 + 1;
          if (param_1[0x71] <= iVar23) goto LAB_00021068;
        }
        iVar23 = iVar23 + 1;
        iVar10 = iVar10 + 1;
        local_10c = (undefined4 *)(param_1[0x70] + iVar4);
        puVar3[0x44] = local_10c[2];
      } while (iVar23 < param_1[0x71]);
LAB_00021068:
      if (iVar10 < 2) goto LAB_00021074;
      local_b0 = 0;
      memset(auStack_ac,0,0x7c);
      pcVar19 = (char *)*local_10c;
      if ((pcVar19 == (char *)0x0) || (*pcVar19 == '\0')) {
        pcVar19 = (char *)(DAT_00021d00 + 0x22134);
        av_strlcatf(&local_b0,0x80,DAT_00021d04 + 0x22138,DAT_00021d08 + 0x22140,pcVar19);
        uVar17 = *puVar18;
        pcVar20 = pcVar19;
      }
      else {
        pcVar20 = (char *)(DAT_00021c38 + 0x21304);
        av_strlcatf(&local_b0,0x80,DAT_00021c3c + 0x21308,DAT_00021c40 + 0x21310,pcVar20);
        uVar17 = *puVar18;
        if (*pcVar19 != '\0') {
          pcVar20 = (char *)(DAT_00021c44 + 0x21328);
        }
      }
      local_124 = &local_b0;
      av_log(0,0x18,DAT_00021c4c + 0x21350,local_124,uVar17,DAT_00021c48 + 0x2133c,pcVar20,pcVar19,
             local_10c[2]);
      if (param_1[0x83] < 1) goto LAB_0002136c;
LAB_00021080:
      iVar23 = 0;
      iVar4 = 0;
      iVar10 = 0;
      do {
        while( true ) {
          iVar5 = iVar4 * 0x10;
          iVar7 = FUN_0002c49c(param_2,puVar18,*(undefined4 *)(param_1[0x82] + iVar4 * 0x10));
          if (0 < iVar7) break;
          if (iVar7 != 0) goto LAB_00020d98;
          iVar4 = iVar4 + 1;
          if (param_1[0x83] <= iVar4) goto LAB_000210f0;
        }
        iVar4 = iVar4 + 1;
        iVar23 = iVar23 + 1;
        local_108 = (undefined4 *)(param_1[0x82] + iVar5);
        iVar10 = local_108[2];
      } while (iVar4 < param_1[0x83]);
LAB_000210f0:
      if (1 < iVar23) {
        local_b0 = 0;
        memset(auStack_ac,0,0x7c);
        pcVar19 = (char *)*local_108;
        if ((pcVar19 == (char *)0x0) || (*pcVar19 == '\0')) {
          pcVar19 = (char *)(DAT_00021d18 + 0x221ac);
          av_strlcatf(&local_b0,0x80,DAT_00021d1c + 0x221b0,DAT_00021d20 + 0x221b8,pcVar19);
          uVar17 = *puVar18;
          pcVar20 = pcVar19;
        }
        else {
          pcVar20 = (char *)(DAT_00021c8c + 0x21b8c);
          av_strlcatf(&local_b0,0x80,DAT_00021c90 + 0x21b90,DAT_00021c94 + 0x21b98,pcVar20);
          uVar17 = *puVar18;
          if (*pcVar19 != '\0') {
            pcVar20 = (char *)(DAT_00021c98 + 0x21bb0);
          }
        }
        local_124 = &local_b0;
        av_log(0,0x18,DAT_00021ca0 + 0x21bdc,local_124,uVar17,DAT_00021c9c + 0x21bc4,pcVar20,pcVar19
               ,local_108[2]);
      }
    }
    iVar23 = param_1[0x40];
    puVar3[3] = 0xfffffff0;
    if (((((iVar23 != 0) && (**(int **)(puVar3[1] + 0xb4) == 0)) ||
         ((param_1[0x41] != 0 && (**(int **)(puVar3[1] + 0xb4) == 1)))) ||
        ((param_1[0x42] != 0 && (**(int **)(puVar3[1] + 0xb4) == 3)))) ||
       ((param_1[0x43] != 0 && (**(int **)(puVar3[1] + 0xb4) == 2)))) {
      puVar3[3] = 0x30;
    }
    if ((iVar10 != 0) && (iVar23 = av_opt_eval_int(&local_b4,uVar2,iVar10,puVar3 + 3), iVar23 < 0))
    {
      av_log(0,0x10,DAT_00021e34 + 0x22934,iVar10,uVar17);
                    /* WARNING: Subroutine does not return */
      FUN_0002b538(1);
    }
    puVar3[0x1a] = 0;
    puVar3[0x1b] = 0x80000000;
    puVar3[10] = 0;
    puVar3[0xb] = 0x80000000;
    iVar10 = avcodec_alloc_context3(puVar3[7]);
    puVar3[6] = iVar10;
    if (iVar10 == 0) {
      av_log(0,0x10,DAT_00021e30 + 0x22914);
                    /* WARNING: Subroutine does not return */
      FUN_0002b538(1);
    }
    iVar10 = avcodec_parameters_to_context(iVar10,piVar16);
    if (iVar10 < 0) goto LAB_0002293c;
    iVar10 = av_frame_alloc();
    puVar3[8] = iVar10;
    if (iVar10 == 0) goto LAB_00020d98;
    iVar10 = av_packet_alloc();
    puVar3[9] = iVar10;
    if (iVar10 == 0) goto LAB_00020d98;
    if (param_1[0x3f] != 0) {
      *(uint *)(puVar3[6] + 0x3c) = *(uint *)(puVar3[6] + 0x3c) | 0x800000;
    }
    iVar10 = *piVar16;
    switch(iVar10) {
    case 0:
      if (puVar3[7] == 0) {
        uVar2 = avcodec_find_decoder(piVar16[1]);
        puVar3[7] = uVar2;
      }
      iVar23 = puVar3[6];
      iVar4 = param_1[0x11];
      uVar2 = puVar18[0x12];
      *(undefined4 *)(iVar23 + 0x270) = puVar18[0x11];
      *(undefined4 *)(iVar23 + 0x274) = uVar2;
      if (0 < iVar4) {
        iVar5 = 0;
        iVar23 = iVar10;
        iVar4 = iVar10;
        do {
          while( true ) {
            iVar7 = iVar4 * 0x10;
            iVar8 = FUN_0002c49c(param_2,puVar18,*(undefined4 *)(param_1[0x10] + iVar4 * 0x10));
            if (0 < iVar8) break;
            if (iVar8 != 0) goto LAB_00020d98;
            iVar4 = iVar4 + 1;
            if (param_1[0x11] <= iVar4) goto LAB_0002161c;
          }
          iVar4 = iVar4 + 1;
          iVar23 = iVar23 + 1;
          local_dc = (undefined4 *)(param_1[0x10] + iVar7);
          iVar5 = local_dc[2];
        } while (iVar4 < param_1[0x11]);
LAB_0002161c:
        if (1 < iVar23) {
          local_b0 = 0;
          memset(auStack_ac,0,0x7c);
          pcVar19 = (char *)*local_dc;
          if ((pcVar19 == (char *)0x0) || (*pcVar19 == '\0')) {
            pcVar20 = (char *)(DAT_00021e10 + 0x22858);
            av_strlcatf(&local_b0,0x80,DAT_00021e14 + 0x2285c,DAT_00021e18 + 0x22864,pcVar20);
            uVar17 = *puVar18;
            pcVar19 = pcVar20;
          }
          else {
            pcVar20 = (char *)(DAT_00021d30 + 0x22278);
            av_strlcatf(&local_b0,0x80,DAT_00021d34 + 0x2227c,DAT_00021d38 + 0x22284,pcVar20);
            uVar17 = *puVar18;
            if (*pcVar19 != '\0') {
              pcVar20 = (char *)(DAT_00021d3c + 0x2229c);
            }
          }
          local_124 = &local_b0;
          av_log(0,0x18,DAT_00021d44 + 0x222c8,local_124,uVar17,DAT_00021d40 + 0x222b0,pcVar20,
                 pcVar19,local_dc[2]);
        }
        if ((iVar5 != 0) && (iVar23 = av_parse_video_rate(puVar3 + 0x28,iVar5), iVar23 < 0)) {
          av_log(0,0x10,DAT_00021e28 + 0x228dc,iVar5,uVar17);
                    /* WARNING: Subroutine does not return */
          FUN_0002b538(1);
        }
      }
      iVar5 = param_1[99];
      puVar3[0x2a] = 0xffffffff;
      iVar23 = iVar10;
      iVar4 = iVar10;
      if (iVar5 < 1) {
LAB_000216f0:
        if (0 < param_1[0x25]) goto LAB_000216fc;
LAB_00022078:
        local_100 = (char *)0x0;
        if (param_1[0x29] < 1) goto LAB_0002208c;
LAB_00021794:
        iVar5 = 0;
        iVar23 = iVar10;
        iVar4 = iVar10;
        do {
          while( true ) {
            iVar7 = iVar4 * 0x10;
            iVar8 = FUN_0002c49c(param_2,puVar18,*(undefined4 *)(param_1[0x28] + iVar4 * 0x10));
            if (0 < iVar8) break;
            if (iVar8 != 0) goto LAB_00020d98;
            iVar4 = iVar4 + 1;
            if (param_1[0x29] <= iVar4) goto LAB_00021808;
          }
          iVar4 = iVar4 + 1;
          iVar23 = iVar23 + 1;
          local_d4 = (undefined4 *)(param_1[0x28] + iVar7);
          iVar5 = local_d4[2];
        } while (iVar4 < param_1[0x29]);
LAB_00021808:
        if (1 < iVar23) {
          local_b0 = 0;
          memset(auStack_ac,0,0x7c);
          pcVar19 = (char *)*local_d4;
          if ((pcVar19 == (char *)0x0) || (*pcVar19 == '\0')) {
            pcVar19 = (char *)(DAT_00021dc8 + 0x226e0);
            av_strlcatf(&local_b0,0x80,DAT_00021dcc + 0x226f8,DAT_00021dd0 + 0x226fc,pcVar19);
            uVar17 = *puVar18;
            pcVar20 = pcVar19;
          }
          else {
            pcVar20 = (char *)(DAT_00021d78 + 0x224a0);
            av_strlcatf(&local_b0,0x80,DAT_00021d7c + 0x224a4,DAT_00021d80 + 0x224ac,pcVar20);
            uVar17 = *puVar18;
            if (*pcVar19 != '\0') {
              pcVar20 = (char *)(DAT_00021d84 + 0x224c8);
            }
          }
          local_124 = &local_b0;
          av_log(0,0x18,DAT_00021d8c + 0x224f4,local_124,uVar17,DAT_00021d88 + 0x224dc,pcVar20,
                 pcVar19,local_d4[2]);
        }
        if (local_100 != (char *)0x0 && iVar5 == 0) goto LAB_00022098;
        if (iVar5 == 0) {
LAB_000220c8:
          puVar3[0x48] = 0xffffffff;
        }
        else {
          iVar23 = av_get_pix_fmt();
          puVar3[0x48] = iVar23;
          if (iVar23 == -1) {
            av_log(0,8,DAT_00021e24 + 0x228c0,iVar5,uVar17);
          }
        }
        if (local_100 != (char *)0x0) goto LAB_00021868;
      }
      else {
        do {
          while( true ) {
            iVar5 = FUN_0002c49c(param_2,puVar18,*(undefined4 *)(param_1[0x62] + iVar4 * 0x10));
            if (0 < iVar5) break;
            if (iVar5 != 0) goto LAB_00020d98;
            iVar4 = iVar4 + 1;
            if (param_1[99] <= iVar4) goto LAB_000216d8;
          }
          iVar5 = iVar4 + 1;
          iVar23 = iVar23 + 1;
          local_e0 = (undefined4 *)(param_1[0x62] + iVar4 * 0x10);
          puVar3[0x2a] = local_e0[2];
          iVar4 = iVar5;
        } while (iVar5 < param_1[99]);
LAB_000216d8:
        if (iVar23 < 2) goto LAB_000216f0;
        local_b0 = 0;
        memset(auStack_ac,0,0x7c);
        pcVar19 = (char *)*local_e0;
        if ((pcVar19 == (char *)0x0) || (*pcVar19 == '\0')) {
          pcVar20 = (char *)(DAT_00021dbc + 0x226b0);
          av_strlcatf(&local_b0,0x80,DAT_00021dc0 + 0x226b4,DAT_00021dc4 + 0x226bc,pcVar20);
          uVar17 = *puVar18;
          pcVar19 = pcVar20;
        }
        else {
          pcVar20 = (char *)(DAT_00021cd4 + 0x22010);
          av_strlcatf(&local_b0,0x80,DAT_00021cd8 + 0x22014,DAT_00021cdc + 0x2201c,pcVar20);
          uVar17 = *puVar18;
          if (*pcVar19 != '\0') {
            pcVar20 = (char *)(DAT_00021ce0 + 0x22034);
          }
        }
        local_124 = &local_b0;
        av_log(0,0x18,DAT_00021ce8 + 0x2205c,local_124,uVar17,DAT_00021ce4 + 0x22048,pcVar20,pcVar19
               ,local_e0[2]);
        if (param_1[0x25] < 1) goto LAB_00022078;
LAB_000216fc:
        local_100 = (char *)0x0;
        iVar23 = iVar10;
        iVar4 = iVar10;
        do {
          while( true ) {
            iVar5 = iVar4 * 0x10;
            iVar7 = FUN_0002c49c(param_2,puVar18,*(undefined4 *)(param_1[0x24] + iVar4 * 0x10));
            if (0 < iVar7) break;
            if (iVar7 != 0) goto LAB_00020d98;
            iVar4 = iVar4 + 1;
            if (param_1[0x25] <= iVar4) goto LAB_00021770;
          }
          iVar4 = iVar4 + 1;
          iVar23 = iVar23 + 1;
          local_d8 = (undefined4 *)(param_1[0x24] + iVar5);
          local_100 = (char *)local_d8[2];
        } while (iVar4 < param_1[0x25]);
LAB_00021770:
        if (1 < iVar23) {
          local_b0 = 0;
          memset(auStack_ac,0,0x7c);
          pcVar19 = (char *)*local_d8;
          if ((pcVar19 == (char *)0x0) || (*pcVar19 == '\0')) {
            pcVar20 = (char *)(DAT_00021e04 + 0x2281c);
            av_strlcatf(&local_b0,0x80,DAT_00021e08 + 0x22820,DAT_00021e0c + 0x22828,pcVar20);
            uVar17 = *puVar18;
            pcVar19 = pcVar20;
          }
          else {
            pcVar20 = (char *)(DAT_00021d48 + 0x22330);
            av_strlcatf(&local_b0,0x80,DAT_00021d4c + 0x22334,DAT_00021d50 + 0x2233c,pcVar20);
            uVar17 = *puVar18;
            if (*pcVar19 != '\0') {
              pcVar20 = (char *)(DAT_00021d54 + 0x22354);
            }
          }
          local_124 = &local_b0;
          av_log(0,0x18,DAT_00021d5c + 0x22380,local_124,uVar17,DAT_00021d58 + 0x22368,pcVar20,
                 pcVar19,local_d8[2]);
        }
        if (0 < param_1[0x29]) goto LAB_00021794;
LAB_0002208c:
        if (local_100 == (char *)0x0) goto LAB_000220c8;
LAB_00022098:
        iVar23 = strcmp(local_100,(char *)(DAT_00021cec + 0x220a8));
        if (iVar23 == 0) {
          av_log(0,0x18,DAT_00021e1c + 0x22880);
          puVar3[0x48] = 0x75;
        }
        else {
          iVar23 = strcmp(local_100,(char *)(DAT_00021cf0 + 0x220c0));
          if (iVar23 != 0) goto LAB_000220c8;
          av_log(0,0x18,DAT_00021e20 + 0x2289c);
          puVar3[0x48] = 0x72;
        }
LAB_00021868:
        iVar23 = strcmp(local_100,(char *)(DAT_00021c50 + 0x2187c));
        if (iVar23 == 0) {
          local_100 = (char *)(DAT_00021d24 + 0x221d0);
LAB_000221d0:
          iVar23 = av_hwdevice_find_type_by_name(local_100);
          iVar4 = DAT_00021db0;
        }
        else {
          iVar23 = strcmp(local_100,(char *)(DAT_00021c54 + 0x21894));
          if (iVar23 != 0) {
            iVar23 = strcmp(local_100,(char *)(DAT_00021c58 + 0x218ac));
            if (iVar23 == 0) {
              puVar3[0x45] = 0;
            }
            else {
              iVar23 = strcmp(local_100,(char *)(DAT_00021d28 + 0x22200));
              if (iVar23 != 0) goto LAB_000221d0;
              puVar3[0x45] = 1;
            }
            goto LAB_000218b8;
          }
          local_100 = (char *)(DAT_00021da8 + 0x225c8);
          iVar23 = av_hwdevice_find_type_by_name(local_100);
          iVar4 = DAT_00021db0;
        }
        DAT_00021db0 = iVar4;
        if (iVar23 == 0) {
          if (puVar3[0x45] == 0) {
            av_log(0,8,DAT_00021dac + 0x225f8,local_100);
            av_log(0,8,DAT_00021db4 + 0x22610);
            iVar12 = 0;
            while (iVar12 = av_hwdevice_iterate_types(iVar12), iVar12 != 0) {
              uVar1 = av_hwdevice_get_type_name();
              av_log(0,8,iVar4 + 0x22614,uVar1);
            }
            av_log(0,8,DAT_00021db8 + 0x22650);
                    /* WARNING: Subroutine does not return */
            FUN_0002b538(1);
          }
        }
        else {
          puVar3[0x46] = iVar23;
          puVar3[0x45] = 2;
        }
      }
LAB_000218b8:
      if (0 < param_1[0x27]) {
        iVar4 = 0;
        iVar23 = iVar10;
        do {
          while( true ) {
            iVar5 = iVar10 * 0x10;
            iVar7 = FUN_0002c49c(param_2,puVar18,*(undefined4 *)(param_1[0x26] + iVar10 * 0x10));
            if (0 < iVar7) break;
            if (iVar7 != 0) goto LAB_00020d98;
            iVar10 = iVar10 + 1;
            if (param_1[0x27] <= iVar10) goto LAB_00021930;
          }
          iVar10 = iVar10 + 1;
          iVar23 = iVar23 + 1;
          local_d0 = (undefined4 *)(param_1[0x26] + iVar5);
          iVar4 = local_d0[2];
        } while (iVar10 < param_1[0x27]);
LAB_00021930:
        if (1 < iVar23) {
          local_b0 = 0;
          memset(auStack_ac,0,0x7c);
          pcVar19 = (char *)*local_d0;
          if ((pcVar19 == (char *)0x0) || (*pcVar19 == '\0')) {
            pcVar19 = (char *)(DAT_00021dec + 0x227a4);
            av_strlcatf(&local_b0,0x80,DAT_00021df0 + 0x227a8,DAT_00021df4 + 0x227b0,pcVar19);
            uVar2 = *puVar18;
            pcVar20 = pcVar19;
          }
          else {
            pcVar20 = (char *)(DAT_00021d90 + 0x2255c);
            av_strlcatf(&local_b0,0x80,DAT_00021d94 + 0x22560,DAT_00021d98 + 0x22568,pcVar20);
            uVar2 = *puVar18;
            if (*pcVar19 != '\0') {
              pcVar20 = (char *)(DAT_00021d9c + 0x22580);
            }
          }
          local_124 = &local_b0;
          av_log(0,0x18,DAT_00021da4 + 0x225ac,local_124,uVar2,DAT_00021da0 + 0x22594,pcVar20,
                 pcVar19,local_d0[2]);
        }
        if (iVar4 != 0) {
          iVar10 = av_strdup(iVar4);
          puVar3[0x47] = iVar10;
          if (iVar10 == 0) {
LAB_00020d98:
                    /* WARNING: Subroutine does not return */
            FUN_0002b538(1);
          }
        }
      }
      iVar10 = puVar3[6];
      puVar3[0x4c] = 0xffffffff;
      goto LAB_000213b0;
    case 1:
      iVar10 = param_1[0x7f];
      puVar3[0x2b] = 0x7fffffff;
      if (iVar10 < 1) {
LAB_0002156c:
        FUN_0003efe8(puVar3);
        iVar10 = puVar3[6];
      }
      else {
        iVar10 = 0;
        iVar23 = 0;
        do {
          while( true ) {
            iVar4 = iVar23 * 0x10;
            iVar5 = FUN_0002c49c(param_2,puVar18,*(undefined4 *)(param_1[0x7e] + iVar23 * 0x10));
            if (0 < iVar5) break;
            if (iVar5 != 0) goto LAB_00020d98;
            iVar23 = iVar23 + 1;
            if (param_1[0x7f] <= iVar23) goto LAB_00021560;
          }
          iVar23 = iVar23 + 1;
          iVar10 = iVar10 + 1;
          local_cc = (undefined4 *)(param_1[0x7e] + iVar4);
          puVar3[0x2b] = local_cc[2];
        } while (iVar23 < param_1[0x7f]);
LAB_00021560:
        if (iVar10 < 2) goto LAB_0002156c;
        local_b0 = 0;
        memset(auStack_ac,0,0x7c);
        pcVar19 = (char *)*local_cc;
        if ((pcVar19 == (char *)0x0) || (*pcVar19 == '\0')) {
          pcVar19 = (char *)(DAT_00021de0 + 0x22768);
          av_strlcatf(&local_b0,0x80,DAT_00021de4 + 0x2276c,DAT_00021de8 + 0x22774,pcVar19);
          uVar2 = *puVar18;
          pcVar20 = pcVar19;
        }
        else {
          pcVar20 = (char *)(DAT_00021ca4 + 0x21e94);
          av_strlcatf(&local_b0,0x80,DAT_00021ca8 + 0x21e98,DAT_00021cac + 0x21ea0,pcVar20);
          uVar2 = *puVar18;
          if (*pcVar19 != '\0') {
            pcVar20 = (char *)(DAT_00021cb0 + 0x21eb8);
          }
        }
        local_124 = &local_b0;
        av_log(0,0x18,DAT_00021cb8 + 0x21ee0,local_124,uVar2,DAT_00021cb4 + 0x21ecc,pcVar20,pcVar19,
               local_cc[2]);
        FUN_0003efe8(puVar3);
        iVar10 = puVar3[6];
      }
      goto LAB_000213b0;
    case 2:
      goto LAB_000213e8;
    case 3:
LAB_000213e8:
      if (puVar3[7] == 0) {
        uVar2 = avcodec_find_decoder(piVar16[1]);
        iVar10 = param_1[0x73];
        puVar3[7] = uVar2;
      }
      else {
        iVar10 = param_1[0x73];
      }
      if (0 < iVar10) {
        iVar10 = 0;
        iVar23 = 0;
        do {
          while( true ) {
            iVar4 = iVar23 * 0x10;
            iVar5 = FUN_0002c49c(param_2,puVar18,*(undefined4 *)(param_1[0x72] + iVar23 * 0x10));
            if (0 < iVar5) break;
            if (iVar5 != 0) goto LAB_00020d98;
            iVar23 = iVar23 + 1;
            if (param_1[0x73] <= iVar23) goto LAB_00021468;
          }
          iVar23 = iVar23 + 1;
          iVar10 = iVar10 + 1;
          local_c8 = (undefined4 *)(param_1[0x72] + iVar4);
          puVar3[0x2d] = local_c8[2];
        } while (iVar23 < param_1[0x73]);
LAB_00021468:
        if (1 < iVar10) {
          local_b0 = 0;
          memset(auStack_ac,0,0x7c);
          pcVar19 = (char *)*local_c8;
          if ((pcVar19 == (char *)0x0) || (*pcVar19 == '\0')) {
            pcVar20 = (char *)(DAT_00021dd4 + 0x2272c);
            av_strlcatf(&local_b0,0x80,DAT_00021dd8 + 0x22730,DAT_00021ddc + 0x22738,pcVar20);
            uVar17 = *puVar18;
            pcVar19 = pcVar20;
          }
          else {
            pcVar20 = (char *)(DAT_00021cbc + 0x21f58);
            av_strlcatf(&local_b0,0x80,DAT_00021cc0 + 0x21f5c,DAT_00021cc4 + 0x21f64,pcVar20);
            uVar17 = *puVar18;
            if (*pcVar19 != '\0') {
              pcVar20 = (char *)(DAT_00021cc8 + 0x21f7c);
            }
          }
          local_124 = &local_b0;
          av_log(0,0x18,DAT_00021cd0 + 0x21fa8,local_124,uVar17,DAT_00021ccc + 0x21f90,pcVar20,
                 pcVar19,local_c8[2]);
        }
      }
      if (0 < param_1[0x75]) {
        iVar10 = 0;
        iVar23 = 0;
        iVar4 = 0;
        do {
          iVar5 = FUN_0002c49c(param_2,puVar18,*(undefined4 *)(param_1[0x74] + iVar23 * 0x10));
          if (iVar5 < 1) {
            if (iVar5 != 0) goto LAB_00020d98;
          }
          else {
            iVar10 = iVar10 + 1;
            local_c4 = (undefined4 *)(param_1[0x74] + iVar23 * 0x10);
            iVar4 = local_c4[2];
          }
          iVar23 = iVar23 + 1;
        } while (iVar23 < param_1[0x75]);
        if (1 < iVar10) {
          local_b0 = 0;
          memset(auStack_ac,0,0x7c);
          pcVar19 = (char *)*local_c4;
          if ((pcVar19 == (char *)0x0) || (*pcVar19 == '\0')) {
            pcVar19 = (char *)(DAT_00021df8 + 0x227e0);
            av_strlcatf(&local_b0,0x80,DAT_00021dfc + 0x227e4,DAT_00021e00 + 0x227ec,pcVar19);
            uVar17 = *puVar18;
            pcVar20 = pcVar19;
          }
          else {
            pcVar20 = (char *)(DAT_00021d60 + 0x223e8);
            av_strlcatf(&local_b0,0x80,DAT_00021d64 + 0x223ec,DAT_00021d68 + 0x223f4,pcVar20);
            uVar17 = *puVar18;
            if (*pcVar19 != '\0') {
              pcVar20 = (char *)(DAT_00021d6c + 0x2240c);
            }
          }
          local_124 = &local_b0;
          av_log(0,0x18,DAT_00021d74 + 0x22438,local_124,uVar17,DAT_00021d70 + 0x22420,pcVar20,
                 pcVar19,local_c4[2]);
        }
        iVar10 = puVar3[6];
        if (iVar4 == 0) goto LAB_000213b0;
        iVar10 = av_parse_video_size(iVar10 + 0x5c,iVar10 + 0x60,iVar4);
        if (iVar10 < 0) {
          av_log(0,8,DAT_00021e2c + 0x228fc,iVar4,uVar17);
                    /* WARNING: Subroutine does not return */
          FUN_0002b538(1);
        }
      }
      break;
    case 4:
      break;
    case -1:
      break;
    default:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    iVar10 = puVar3[6];
LAB_000213b0:
    iVar10 = avcodec_parameters_from_context(piVar16,iVar10);
    if (iVar10 < 0) {
LAB_0002293c:
      av_log(0,0x10,DAT_00021e38 + 0x22950);
                    /* WARNING: Subroutine does not return */
      FUN_0002b538(1);
    }
    local_11c = local_11c + 1;
    if (*(uint *)(param_2 + 0x18) <= local_11c) {
      return;
    }
  } while( true );
}



/* ===== FUN_0002295c @ 0002295c size=32 ===== */

void FUN_0002295c(void)

{
  av_log(0,8,DAT_0002297c + 0x22970);
                    /* WARNING: Subroutine does not return */
  FUN_0002b538(1);
}



/* ===== FUN_00022980 @ 00022980 size=212 ===== */

undefined4 FUN_00022980(undefined4 param_1)

{
  int iVar1;
  undefined4 local_420;
  undefined4 local_41c;
  undefined1 auStack_418 [1028];
  
  local_420 = 0;
  iVar1 = avio_open(&local_420,param_1,1);
  if (iVar1 < 0) {
    av_log(0,0x10,DAT_00022a54 + 0x22a28,param_1);
    return 0;
  }
  av_bprint_init(auStack_418,0,0xffffffff);
  iVar1 = avio_read_to_bprint(local_420,auStack_418,0xffffffff);
  avio_closep(&local_420);
  if (-1 < iVar1) {
    iVar1 = av_bprint_finalize(auStack_418,&local_41c);
    if (iVar1 < 0) {
      local_41c = 0;
    }
    return local_41c;
  }
  av_bprint_finalize(auStack_418,0);
  return 0;
}



/* ===== FUN_00022a58 @ 00022a58 size=108 ===== */

undefined4 FUN_00022a58(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = FUN_00022980(param_3);
  if (iVar1 != 0) {
    piVar4 = *(int **)(DAT_00022ac4 + 0x22a70 + DAT_00022ac8);
    piVar2 = (int *)FUN_0002d75c(*(undefined4 *)(DAT_00022ac4 + 0x22a70 + DAT_00022acc),0x24,piVar4)
    ;
    iVar3 = *piVar4;
    *(undefined4 *)(DAT_00022ad0 + 0x22aa4) = 1;
    piVar2[1] = iVar1;
    *piVar2 = iVar3 + -1;
    return 0;
  }
  return 0xffffffea;
}



/* ===== FUN_00022ad4 @ 00022ad4 size=172 ===== */

void FUN_00022ad4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x144);
  if (*(int *)(param_1 + 0x148) == 0) {
    if (iVar1 == 0) {
      if (*(int *)(*(undefined4 **)(param_1 + 0xc))[0x2d] != 0) {
        av_strdup(DAT_00022b88 + 0x22b48);
        return;
      }
      iVar1 = DAT_00022b84 + 0x22b34;
    }
    av_strdup(iVar1);
    return;
  }
  if (iVar1 == 0) {
    FUN_00022980(*(int *)(param_1 + 0x148));
    return;
  }
  av_log(0,0x10,DAT_00022b90 + 0x22b70,**(undefined4 **)(DAT_00022b80 + 0x22aec + DAT_00022b8c),
         **(undefined4 **)(param_1 + 0xc));
                    /* WARNING: Subroutine does not return */
  FUN_0002b538(1);
}



/* ===== FUN_00022c90 @ 00022c90 size=924 ===== */

undefined4 FUN_00022c90(int *param_1,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  FILE *__stream;
  char *pcVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  char *__reject;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 local_be8;
  undefined1 auStack_be4 [4];
  undefined1 auStack_be0 [1000];
  char acStack_7f8 [1000];
  char local_410 [1004];
  
  iVar9 = param_1[9];
  cVar1 = *param_2;
  uVar7 = 0;
  iVar6 = DAT_0002302c + 0x22cc0;
  local_410[1] = 0;
  local_410[0] = cVar1;
  if (0 < iVar9) {
    iVar5 = param_1[8];
    puVar8 = (undefined4 *)(iVar5 + 8);
    do {
      iVar2 = strcmp((char *)puVar8[-2],local_410);
      puVar10 = puVar8 + 4;
      if (iVar2 == 0) {
        uVar7 = *puVar8;
      }
      puVar8 = puVar10;
    } while (puVar10 != (undefined4 *)(iVar5 + 8) + iVar9 * 4);
  }
  __stream = (FILE *)FUN_0002c308(auStack_be0,1000,param_3,cVar1 == 'f',uVar7);
  if (__stream == (FILE *)0x0) {
    iVar6 = strncmp(param_3,(char *)(DAT_00023074 + 0x22ff4),0x10);
    if (iVar6 == 0) {
      av_log(0,8,DAT_00023078 + 0x2300c);
    }
    else {
      av_log(0,8,DAT_0002307c + 0x23028,param_3);
    }
  }
  else {
    __reject = (char *)(DAT_00023030 + 0x22d44);
    iVar9 = DAT_00023034 + 0x22d48;
    iVar5 = DAT_00023038 + 0x22d54;
    while( true ) {
      do {
        pcVar3 = fgets(acStack_7f8,1000,__stream);
        if (pcVar3 == (char *)0x0) {
          fclose(__stream);
          return 0;
        }
        sVar4 = strcspn(acStack_7f8,__reject);
      } while (sVar4 == 0);
      av_strlcpy(local_410,acStack_7f8,1000);
      iVar2 = av_strtok(local_410,iVar9,&local_be8);
      if ((iVar2 == 0) || (iVar2 = av_strtok(local_be8,iVar5,auStack_be4), iVar2 == 0)) break;
      av_log(0,0x30,DAT_0002303c + 0x22de4,auStack_be0,local_410,local_be8);
      iVar2 = strcmp(local_410,(char *)(DAT_00023040 + 0x22dfc));
      if (iVar2 == 0) {
        FUN_0002caf8(param_1,PTR_DAT_00023058 + 0x22e88,local_be8,
                     *(undefined4 *)(iVar6 + DAT_00023050));
      }
      else {
        iVar2 = strcmp(local_410,(char *)(DAT_00023044 + 0x22e14));
        uVar7 = local_be8;
        if (iVar2 == 0) {
          FUN_0002caf8(param_1,PTR_DAT_0002305c + 0x22ea8,local_be8,
                       *(undefined4 *)(iVar6 + DAT_00023050));
        }
        else {
          iVar2 = strcmp(local_410,(char *)(DAT_00023048 + 0x22e30));
          if (iVar2 == 0) {
            FUN_0002caf8(param_1,DAT_0002306c + 0x22f98,uVar7,*(undefined4 *)(iVar6 + DAT_00023050))
            ;
          }
          else {
            iVar2 = strcmp(local_410,(char *)(DAT_0002304c + 0x22e48));
            if (iVar2 == 0) {
              FUN_0002caf8(param_1,PTR_DAT_00023054 + 0x22e68,uVar7,
                           *(undefined4 *)(iVar6 + DAT_00023050));
            }
            else {
              puVar8 = *(undefined4 **)(iVar6 + DAT_00023060);
              puVar10 = *(undefined4 **)(iVar6 + DAT_00023064);
              uVar12 = *puVar8;
              uVar11 = *puVar10;
              *puVar10 = 0;
              *puVar8 = 0;
              iVar2 = FUN_0002b000(0,local_410,uVar7);
              av_dict_copy(*param_1 + 0x10,*puVar10,0);
              av_dict_copy(*param_1 + 0x14,*puVar8,0);
              av_dict_free(puVar10);
              av_dict_free(puVar8);
              *puVar8 = uVar12;
              *puVar10 = uVar11;
              if (iVar2 < 0) {
                av_log(0,8,DAT_00023068 + 0x22f78,auStack_be0,acStack_7f8,local_410,local_be8);
                    /* WARNING: Subroutine does not return */
                FUN_0002b538(1);
              }
            }
          }
        }
      }
    }
    av_log(0,8,DAT_00023070 + 0x22fd8,auStack_be0,acStack_7f8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002b538(1);
}



/* ===== FUN_00023080 @ 00023080 size=172 ===== */

undefined4 FUN_00023080(undefined4 param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_00023130;
  iVar2 = strcmp(param_2,(char *)(DAT_0002312c + 0x230a0));
  if (iVar2 != 0) {
    iVar2 = av_asprintf(DAT_00023134 + 0x230c0,param_2 + 6);
    if (iVar2 == 0) {
      uVar3 = 0xfffffff4;
    }
    else {
      uVar3 = FUN_0002caf8(param_1,iVar2,param_3,*(undefined4 *)(iVar1 + 0x230ac + DAT_00023138));
      av_free(iVar2);
    }
    return uVar3;
  }
  av_log(0,0x18,DAT_0002313c + 0x23104);
  uVar3 = FUN_0002caf8(param_1,DAT_00023140 + 0x23120,param_3,
                       *(undefined4 *)(iVar1 + 0x230ac + DAT_00023138));
  return uVar3;
}



/* ===== FUN_00023200 @ 00023200 size=128 ===== */

undefined4 FUN_00023200(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = DAT_00023280;
  uVar3 = FUN_0002b67c(param_2,param_3,1);
  if ((int)(uint)((int)uVar3 == 0) <= (int)((ulonglong)uVar3 >> 0x20)) {
    iVar2 = DAT_00023288 + 0x23250;
    **(undefined8 **)(iVar1 + 0x23224 + DAT_00023284) = uVar3;
    av_log(0,0x20,iVar2,param_3);
    return 0;
  }
  av_log(0,0x10,DAT_0002328c + 0x23278,param_3);
  return 0xffffffea;
}



/* ===== FUN_00023290 @ 00023290 size=288 ===== */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00023388 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_00023290(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  double in_d0;
  
  iVar2 = DAT_000233b4;
  av_log(0,0x18,DAT_000233b0 + 0x232b0);
  iVar2 = iVar2 + 0x232c0;
  iVar1 = av_strcasecmp(param_3,DAT_000233b8 + 0x232c4);
  if (iVar1 == 0) {
    **(undefined4 **)(iVar2 + DAT_000233bc) = 1;
  }
  else {
    iVar1 = av_strcasecmp(param_3,DAT_000233c0 + 0x232f4);
    if (iVar1 == 0) {
      **(undefined4 **)(iVar2 + DAT_000233bc) = 2;
      return 0;
    }
    iVar1 = av_strcasecmp(param_3,DAT_000233c4 + 0x23324);
    if (iVar1 == 0) {
      **(undefined4 **)(iVar2 + DAT_000233bc) = 0;
    }
    else {
      iVar1 = av_strcasecmp(param_3,DAT_000233c8 + 0x23348);
      if (iVar1 == 0) {
        **(undefined4 **)(iVar2 + DAT_000233bc) = 4;
      }
      else {
        piVar3 = *(int **)(iVar2 + DAT_000233bc);
        if (*piVar3 == -1) {
          FUN_0002b564(0,(int)((ulonglong)in_d0 >> 0x20),0,DAT_000233cc + 0x23388,param_3,0x80);
          iVar2 = DAT_000233d0 + 0x233a0;
          *piVar3 = (int)(longlong)in_d0;
          av_log(0,0x18,iVar2);
          return 0;
        }
      }
    }
  }
  return 0;
}



/* ===== FUN_000233d4 @ 000233d4 size=4064 ===== */

undefined4 FUN_000233d4(int *param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  char *pcVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  char *__s;
  int iVar19;
  bool bVar20;
  float fVar21;
  double dVar22;
  char *local_6c;
  int local_64;
  int local_54;
  int local_50;
  int local_4c;
  int local_48 [9];
  
  iVar8 = DAT_00024428;
  uVar15 = param_1[0x38];
  iVar17 = param_1[0x39];
  iVar7 = DAT_000243c8 + 0x23400;
  local_50 = 0;
  if (iVar17 != 0x7fffffff || uVar15 != 0xffffffff) {
    if (param_1[0x37] != 0x7fffffff || param_1[0x36] != -1) {
      param_1[0x38] = -1;
      param_1[0x39] = 0x7fffffff;
      av_log(0,0x18,iVar8 + 0x23b8c);
      uVar15 = param_1[0x38];
      iVar17 = param_1[0x39];
      if ((iVar17 == 0x7fffffff && uVar15 == 0xffffffff) ||
         (param_1[0x37] != 0x7fffffff || param_1[0x36] != -1)) goto LAB_00023454;
    }
    uVar4 = param_1[2];
    iVar8 = param_1[3];
    if (iVar8 == -0x80000000 && uVar4 == 0) {
      iVar8 = 0;
      uVar4 = 0;
    }
    if ((int)(iVar8 - (iVar17 + (uint)(uVar4 < uVar15))) < 0 ==
        (SBORROW4(iVar8,iVar17) != SBORROW4(iVar8 - iVar17,(uint)(uVar4 < uVar15)))) {
      iVar8 = DAT_00024480 + 0x24350;
      goto LAB_0002431c;
    }
    param_1[0x36] = uVar15 - uVar4;
    param_1[0x37] = iVar17 - (iVar8 + (uint)(uVar15 < uVar4));
  }
LAB_00023454:
  local_64 = param_1[7];
  if ((local_64 != 0) && (local_64 = av_find_input_format(local_64), local_64 == 0)) {
    av_log(0,8,DAT_00024478 + 0x24304,param_1[7]);
                    /* WARNING: Subroutine does not return */
    FUN_0002b538(1);
  }
  iVar8 = strcmp(param_2,(char *)(DAT_000243cc + 0x2348c));
  if (iVar8 == 0) {
    local_6c = (char *)(DAT_00024424 + 0x23b74);
    uVar15 = 0;
  }
  else {
    iVar8 = strncmp(param_2,(char *)(DAT_000243d0 + 0x234a8),5);
    uVar15 = 0;
    local_6c = param_2;
    if (iVar8 != 0) {
      iVar8 = strcmp(param_2,(char *)(DAT_000243d4 + 0x234c0));
      uVar15 = 0;
      if (iVar8 != 0) {
        uVar15 = 1;
      }
    }
  }
  **(uint **)(iVar7 + DAT_000243d8) = **(uint **)(iVar7 + DAT_000243d8) & uVar15;
  local_54 = avformat_alloc_context();
  if (local_54 == 0) {
    FUN_0002c1d4(local_6c,0xfffffff4);
                    /* WARNING: Subroutine does not return */
    FUN_0002b538(1);
  }
  if (param_1[0xf] != 0) {
    iVar8 = *(int *)(param_1[0xe] + param_1[0xf] * 0x10 + -8);
    av_dict_set_int(*param_1 + 0x14,DAT_00024458 + 0x24140,iVar8,iVar8 >> 0x1f,0);
  }
  if (((param_1[0xd] != 0) && (local_64 != 0)) &&
     (local_4c = *(int *)(local_64 + 0x14), local_4c != 0)) {
    iVar17 = DAT_000243dc + 0x2353c;
    iVar8 = av_opt_find(&local_4c,iVar17,0,0,2);
    if (iVar8 != 0) {
      snprintf((char *)local_48,0x20,(char *)(DAT_000243e0 + 0x23574),
               *(undefined4 *)(param_1[0xc] + param_1[0xd] * 0x10 + -8));
      av_dict_set(*param_1 + 0x14,iVar17,local_48,0);
    }
  }
  if (((param_1[0xb] != 0) && (local_64 != 0)) &&
     (local_48[0] = *(int *)(local_64 + 0x14), local_48[0] != 0)) {
    iVar17 = DAT_000243e4 + 0x235d0;
    iVar8 = av_opt_find(local_48,iVar17,0,0,2);
    if (iVar8 != 0) {
      av_dict_set(*param_1 + 0x14,iVar17,*(undefined4 *)(param_1[10] + param_1[0xb] * 0x10 + -8),0);
    }
  }
  if (((param_1[0x11] != 0) && (local_64 != 0)) &&
     (local_48[0] = *(int *)(local_64 + 0x14), local_48[0] != 0)) {
    iVar17 = DAT_000243e8 + 0x23648;
    iVar8 = av_opt_find(local_48,iVar17,0,0,2);
    if (iVar8 != 0) {
      av_dict_set(*param_1 + 0x14,iVar17,*(undefined4 *)(param_1[0x10] + param_1[0x11] * 0x10 + -8),
                  0);
    }
  }
  if (param_1[0x15] != 0) {
    av_dict_set(*param_1 + 0x14,DAT_00024454 + 0x24114,
                *(undefined4 *)(param_1[0x14] + param_1[0x15] * 0x10 + -8),0);
  }
  if (param_1[0x17] == 0) {
    iVar8 = param_1[9];
    if (0 < iVar8) goto LAB_000236a4;
LAB_000240dc:
    iVar8 = 0;
    iVar17 = 0;
    iVar14 = 0;
LAB_000240ec:
    iVar18 = 0;
  }
  else {
    av_dict_set(*param_1 + 0x14,DAT_00024450 + 0x240cc,
                *(undefined4 *)(param_1[0x16] + param_1[0x17] * 0x10 + -8),0);
    iVar8 = param_1[9];
    if (iVar8 < 1) goto LAB_000240dc;
LAB_000236a4:
    iVar18 = 0;
    piVar10 = (int *)(param_1[8] + 8);
    pcVar13 = (char *)(DAT_000243ec + 0x236bc);
    piVar11 = piVar10 + iVar8 * 4;
    piVar9 = piVar10;
    do {
      iVar8 = strcmp((char *)piVar9[-2],pcVar13);
      piVar3 = piVar9 + 4;
      if (iVar8 == 0) {
        iVar18 = *piVar9;
      }
      piVar9 = piVar3;
    } while (piVar11 != piVar3);
    iVar14 = 0;
    pcVar13 = (char *)(DAT_000243f0 + 0x236f4);
    piVar9 = piVar10;
    do {
      iVar8 = strcmp((char *)piVar9[-2],pcVar13);
      piVar3 = piVar9 + 4;
      if (iVar8 == 0) {
        iVar14 = *piVar9;
      }
      piVar9 = piVar3;
    } while (piVar11 != piVar3);
    iVar8 = 0;
    pcVar13 = (char *)(DAT_000243f4 + 0x23724);
    piVar9 = piVar10;
    do {
      iVar17 = strcmp((char *)piVar9[-2],pcVar13);
      piVar3 = piVar9 + 4;
      if (iVar17 == 0) {
        iVar8 = *piVar9;
      }
      piVar9 = piVar3;
    } while (piVar11 != piVar3);
    iVar17 = 0;
    pcVar13 = (char *)(DAT_000243f8 + 0x23750);
    do {
      iVar1 = strcmp((char *)piVar10[-2],pcVar13);
      iVar5 = local_54;
      piVar9 = piVar10 + 4;
      if (iVar1 == 0) {
        iVar17 = *piVar10;
      }
      piVar10 = piVar9;
    } while (piVar11 != piVar9);
    if (iVar18 != 0) {
      uVar2 = FUN_0001bac0(iVar18,0);
      *(undefined4 *)(iVar5 + 0x110) = uVar2;
    }
    iVar5 = local_54;
    if (iVar14 != 0) {
      uVar2 = FUN_0001bac0(iVar14,1,0);
      *(undefined4 *)(iVar5 + 0x114) = uVar2;
    }
    iVar5 = local_54;
    if (iVar8 != 0) {
      uVar2 = FUN_0001bac0(iVar8,3,0);
      *(undefined4 *)(iVar5 + 0x118) = uVar2;
    }
    iVar5 = local_54;
    if (iVar17 != 0) {
      uVar2 = FUN_0001bac0(iVar17,2,0);
      *(undefined4 *)(iVar5 + 0x11c) = uVar2;
    }
    if (iVar18 == 0) goto LAB_000240ec;
    iVar18 = *(int *)(*(int *)(local_54 + 0x110) + 0xc);
  }
  *(int *)(local_54 + 0x70) = iVar18;
  iVar5 = param_1[0x3f];
  uVar2 = 0;
  if (iVar14 != 0) {
    iVar18 = *(int *)(local_54 + 0x114);
    uVar2 = *(undefined4 *)(iVar18 + 0xc);
  }
  iVar1 = *param_1;
  iVar14 = DAT_000243fc + 0x23830;
  if (iVar8 != 0) {
    iVar18 = *(int *)(local_54 + 0x118);
  }
  *(undefined4 *)(local_54 + 0x74) = uVar2;
  uVar2 = 0;
  if (iVar8 != 0) {
    uVar2 = *(undefined4 *)(iVar18 + 0xc);
  }
  if (iVar17 != 0) {
    iVar18 = *(int *)(local_54 + 0x11c);
  }
  *(undefined4 *)(local_54 + 0x78) = uVar2;
  uVar2 = 0;
  if (iVar17 != 0) {
    uVar2 = *(undefined4 *)(iVar18 + 0xc);
  }
  uVar15 = *(uint *)(local_54 + 0x48);
  *(uint *)(local_54 + 0x48) = uVar15 | 4;
  iVar8 = DAT_00024400;
  if (iVar5 != 0) {
    uVar15 = uVar15 | 0x400;
  }
  *(undefined4 *)(local_54 + 0x13c) = uVar2;
  if (iVar5 != 0) {
    *(uint *)(local_54 + 0x48) = uVar15 | 4;
  }
  puVar6 = *(undefined4 **)(iVar7 + iVar8);
  uVar2 = puVar6[1];
  *(undefined4 *)(local_54 + 0xa0) = *puVar6;
  *(undefined4 *)(local_54 + 0xa4) = uVar2;
  iVar8 = av_dict_get(*(undefined4 *)(iVar1 + 0x14),iVar14,0,1);
  if (iVar8 == 0) {
    av_dict_set(*param_1 + 0x14,iVar14,DAT_00024460 + 0x241ac,0x10);
    iVar8 = avformat_open_input(&local_54,local_6c,local_64,*param_1 + 0x14);
    if (iVar8 < 0) goto LAB_0002437c;
    av_dict_set(*param_1 + 0x14,iVar14,0,1);
  }
  else {
    iVar8 = avformat_open_input(&local_54,local_6c,local_64,*param_1 + 0x14);
    if (iVar8 < 0) {
LAB_0002437c:
      FUN_0002c1d4(local_6c,iVar8);
      if (iVar8 == -0x4f5250f8) {
        av_log(0,0x10,DAT_00024488 + 0x243b0,local_6c);
      }
      goto LAB_000240a4;
    }
  }
  FUN_00036160(*param_1 + 0x14,*(undefined4 *)(*param_1 + 0x10));
  FUN_000361b0(*(undefined4 *)(*param_1 + 0x14));
  if (*(int *)(local_54 + 0x18) != 0) {
    uVar15 = 0;
    do {
      iVar8 = uVar15 * 4;
      uVar15 = uVar15 + 1;
      FUN_0002097c(param_1 + 8,param_1 + 9,local_54,
                   *(undefined4 *)(*(int *)(local_54 + 0x1c) + iVar8));
    } while (uVar15 < *(uint *)(local_54 + 0x18));
  }
  if (*(int *)(DAT_00024404 + 0x2392c) != 0) {
    local_48[0] = FUN_0002c718(local_54,*(undefined4 *)(*param_1 + 0x10));
    iVar17 = *(int *)(local_54 + 0x18);
    iVar8 = avformat_find_stream_info(local_54,local_48[0]);
    if (0 < iVar17) {
      iVar14 = 0;
      do {
        iVar18 = iVar14 * 4;
        iVar14 = iVar14 + 1;
        av_dict_free(local_48[0] + iVar18);
      } while (iVar17 != iVar14);
    }
    av_freep(local_48);
    if ((iVar8 < 0) && (av_log(0,8,DAT_0002444c + 0x2408c,local_6c), *(int *)(local_54 + 0x18) == 0)
       ) {
      avformat_close_input(&local_54);
      goto LAB_000240a4;
    }
  }
  uVar15 = param_1[2];
  iVar8 = param_1[3];
  uVar4 = param_1[4];
  iVar17 = param_1[5];
  if (iVar8 == -0x80000000 && uVar15 == 0) {
    if (iVar17 != iVar8 || uVar4 != uVar15) {
      if (-1 < iVar17) {
        iVar8 = DAT_0002447c + 0x24320;
LAB_0002431c:
        av_log(0,0x10,iVar8);
                    /* WARNING: Subroutine does not return */
        FUN_0002b538(1);
      }
      uVar16 = *(uint *)(local_54 + 0x30);
      if (*(int *)(local_54 + 0x34) < (int)(uint)(uVar16 == 0)) {
        av_log(0,0x18,DAT_00024464 + 0x24200,local_6c);
        uVar15 = param_1[2];
        iVar8 = param_1[3];
        goto LAB_00023990;
      }
      uVar15 = uVar16 + uVar4;
      iVar8 = *(int *)(local_54 + 0x34) + iVar17 + (uint)CARRY4(uVar16,uVar4);
      param_1[2] = uVar15;
      param_1[3] = iVar8;
      if (-1 < iVar8) goto LAB_00023f14;
      av_log(0,0x18,DAT_0002445c + 0x24180,local_6c);
      param_1[2] = 0;
      param_1[3] = -0x80000000;
    }
LAB_000239a0:
    if (param_1[6] == 0) {
      uVar15 = *(uint *)(local_54 + 0x28);
      iVar8 = *(int *)(local_54 + 0x2c);
      if (iVar8 != -0x80000000 || uVar15 != 0) goto LAB_000239b4;
    }
    iVar8 = 0;
    uVar15 = 0;
  }
  else {
    if (iVar17 != -0x80000000 || uVar4 != 0) {
      av_log(0,0x18,DAT_00024408 + 0x23980,local_6c);
      uVar15 = param_1[2];
      iVar8 = param_1[3];
      param_1[4] = 0;
      param_1[5] = -0x80000000;
LAB_00023990:
      if (iVar8 == -0x80000000 && uVar15 == 0) goto LAB_000239a0;
    }
LAB_00023f14:
    if (param_1[6] == 0) {
      uVar4 = *(uint *)(local_54 + 0x28);
      if (*(int *)(local_54 + 0x2c) != -0x80000000 || uVar4 != 0) {
        bVar20 = CARRY4(uVar15,uVar4);
        uVar15 = uVar15 + uVar4;
        iVar8 = iVar8 + *(int *)(local_54 + 0x2c) + (uint)bVar20;
      }
    }
    uVar4 = uVar15;
    iVar17 = iVar8;
    if (((*(uint *)(*(int *)(local_54 + 4) + 8) & 0x4000000) == 0) &&
       (*(int *)(local_54 + 0x18) != 0)) {
      piVar10 = *(int **)(local_54 + 0x1c);
      iVar14 = 0;
      iVar18 = *(int *)(*(int *)(*piVar10 + 0xb4) + 0x58);
      while (iVar18 == 0) {
        iVar14 = iVar14 + 1;
        if (iVar14 == *(int *)(local_54 + 0x18)) goto LAB_00023fe0;
        piVar10 = piVar10 + 1;
        iVar18 = *(int *)(*(int *)(*piVar10 + 0xb4) + 0x58);
      }
      uVar4 = uVar15 + DAT_000243c0;
      iVar17 = iVar8 + DAT_000243c4 + (uint)CARRY4(uVar15,DAT_000243c0);
    }
LAB_00023fe0:
    iVar17 = avformat_seek_file(local_54,0xffffffff,0,0x80000000,uVar4,iVar17,uVar4,iVar17,0);
    if (iVar17 < 0) {
      dVar22 = (double)FUN_0003f4e4(uVar15,iVar8);
      av_log(0,0x18,DAT_00024468 + 0x24230,local_6c,dVar22 / DAT_000243b8);
    }
  }
LAB_000239b4:
  FUN_00020c18(param_1,local_54);
  piVar11 = *(int **)(iVar7 + DAT_0002440c);
  av_dump_format(local_54,*piVar11,local_6c,0);
  piVar10 = (int *)FUN_0002d75c(*(undefined4 *)(iVar7 + DAT_00024410),0x88,piVar11);
  iVar14 = DAT_00024418;
  iVar17 = DAT_00024414;
  iVar5 = param_1[2];
  iVar1 = param_1[3];
  iVar18 = param_1[0x1f];
  *piVar10 = local_54;
  piVar9 = *(int **)(iVar7 + iVar17);
  iVar19 = *(int *)(local_54 + 0x18);
  piVar10[0x12] = iVar5;
  piVar10[0x13] = iVar1;
  iVar17 = *piVar9;
  iVar5 = param_1[0x36];
  iVar1 = param_1[0x37];
  piVar10[0xc] = iVar18;
  piVar10[3] = iVar17 - iVar19;
  uVar4 = param_1[0x18];
  iVar18 = param_1[0x19];
  piVar10[0x14] = iVar5;
  piVar10[0x15] = iVar1;
  piVar10[10] = uVar4;
  piVar10[0xb] = iVar18;
  iVar17 = DAT_0002441c;
  if (**(int **)(iVar7 + iVar14) == 0) {
    bVar20 = uVar4 < uVar15;
    uVar4 = uVar4 - uVar15;
    iVar18 = iVar18 - (iVar8 + (uint)bVar20);
  }
  else if (**(int **)(iVar7 + DAT_00024448) != 0) {
    uVar15 = *(uint *)(local_54 + 0x28);
    if (*(int *)(local_54 + 0x2c) != -0x80000000 || uVar15 != 0) {
      bVar20 = uVar4 < uVar15;
      uVar4 = uVar4 - uVar15;
      iVar18 = iVar18 - (*(int *)(local_54 + 0x2c) + (uint)bVar20);
    }
  }
  fVar21 = (float)param_1[0x1c];
  iVar5 = param_1[0x1d];
  piVar3 = (int *)(DAT_0002441c + 0x23a84);
  piVar10[0xe] = uVar4;
  piVar10[0xf] = iVar18;
  iVar14 = param_1[0x1b];
  iVar18 = param_1[0x1a];
  iVar8 = *piVar3;
  iVar17 = *(int *)(iVar17 + 0x23a88);
  piVar10[0x16] = iVar19;
  piVar10[4] = iVar18;
  piVar10[0x18] = iVar14;
  piVar10[0x1a] = iVar5;
  piVar10[6] = 0;
  piVar10[7] = 0;
  piVar10[8] = iVar8;
  piVar10[9] = iVar17;
  piVar10[0x19] = (int)fVar21;
  if (fVar21 < 0.0) {
    av_log(0,0x10,DAT_00024484 + 0x24370,*piVar11,(double)fVar21);
                    /* WARNING: Subroutine does not return */
    FUN_0002b538(1);
  }
  if (iVar14 != 0 && fVar21 != 0.0) {
    av_log(0,0x18,DAT_0002446c + 0x2426c,*piVar11,(double)fVar21);
    piVar10[0x18] = 0;
  }
  iVar8 = av_packet_alloc();
  piVar10[0x1b] = iVar8;
  if (iVar8 != 0) {
    puVar12 = (undefined4 *)0x0;
    iVar8 = DAT_00024420 + 0x23b0c;
    uVar2 = *(undefined4 *)(*param_1 + 0x10);
    piVar10[0x20] = param_1[0x1e];
    local_48[0] = 0;
    while (puVar12 = (undefined4 *)av_dict_get(uVar2,iVar8,puVar12,2), puVar12 != (undefined4 *)0x0)
    {
      __s = (char *)*puVar12;
      pcVar13 = strchr(__s,0x3a);
      if (pcVar13 == (char *)0x0) {
        av_dict_set(local_48,__s,puVar12[1],0);
      }
      else {
        *pcVar13 = '\0';
        av_dict_set(local_48,*puVar12,puVar12[1]);
        *pcVar13 = ':';
      }
    }
    iVar17 = piVar10[3];
    local_50 = local_48[0];
    if (iVar17 < *piVar9) {
      piVar10 = *(int **)(iVar7 + DAT_0002442c);
      do {
        puVar12 = (undefined4 *)0x0;
        while (puVar12 = (undefined4 *)
                         av_dict_get(*(undefined4 *)(*(int *)(*piVar10 + iVar17 * 4) + 0x9c),iVar8,
                                     puVar12,2), puVar12 != (undefined4 *)0x0) {
          av_dict_set(&local_50,*puVar12,0);
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 < *piVar9);
    }
    iVar8 = DAT_00024430 + 0x23c64;
    iVar7 = DAT_00024434 + 0x23c6c;
    puVar12 = (undefined4 *)0x0;
    while (puVar12 = (undefined4 *)av_dict_get(local_50,iVar8,puVar12,2),
          puVar12 != (undefined4 *)0x0) {
      local_4c = avcodec_get_class();
      iVar17 = av_opt_find(&local_4c,*puVar12,0,0,3);
      local_48[0] = avformat_get_class();
      iVar14 = av_opt_find(local_48,*puVar12,0,0,3);
      if (iVar17 != 0 && iVar14 == 0) {
        iVar14 = *(int *)(iVar17 + 4);
        if ((*(uint *)(iVar17 + 0x28) & 2) == 0) {
          if (iVar14 == 0) {
            iVar14 = iVar8;
          }
          av_log(0,0x10,DAT_00024470 + 0x242c0,*puVar12,iVar14,*piVar11 + -1,local_6c);
                    /* WARNING: Subroutine does not return */
          FUN_0002b538(1);
        }
        if (iVar14 == 0) {
          iVar14 = iVar8;
        }
        av_log(0,0x18,iVar7,*puVar12,iVar14,*piVar11 + -1,local_6c);
      }
    }
    av_dict_free(&local_50);
    iVar8 = param_1[0x23];
    if (0 < iVar8) {
      iVar18 = DAT_00024438 + 0x23d50;
      iVar14 = DAT_0002443c + 0x23d58;
      uVar15 = *(uint *)(local_54 + 0x18);
      iVar7 = 0;
      iVar17 = local_54;
      do {
        if (uVar15 != 0) {
          uVar4 = 0;
          do {
            puVar12 = *(undefined4 **)(*(int *)(iVar17 + 0x1c) + uVar4 * 4);
            iVar8 = FUN_0002c49c(iVar17,puVar12,*(undefined4 *)(param_1[0x22] + iVar7 * 0x10));
            if (iVar8 == 1) {
              pcVar13 = *(char **)(param_1[0x22] + iVar7 * 0x10 + 8);
              local_48[0] = 0;
              if (*(int *)(puVar12[0x2d] + 0x10) == 0) {
                av_log(0,0x18,iVar14,*piVar11 + -1,*puVar12);
              }
              else {
                if (*pcVar13 == '\0') {
                  iVar8 = av_dict_get(puVar12[0x10],iVar18,0);
                  if (iVar8 != 0) {
                    pcVar13 = *(char **)(iVar8 + 4);
                  }
                  if (*pcVar13 == '\0') {
                    av_log(0,8,DAT_00024444 + 0x23e94,*piVar11 + -1,*puVar12);
                    /* WARNING: Subroutine does not return */
                    FUN_0002b538(1);
                  }
                }
                FUN_0001bbf4(pcVar13);
                iVar8 = avio_open2(local_48,pcVar13,2,puVar6,0);
                if (iVar8 < 0) {
                  av_log(0,8,DAT_00024474 + 0x242e8,pcVar13);
                    /* WARNING: Subroutine does not return */
                  FUN_0002b538(1);
                }
                avio_write(local_48[0],*(undefined4 *)(puVar12[0x2d] + 0xc),
                           *(undefined4 *)(puVar12[0x2d] + 0x10));
                avio_flush(local_48[0]);
                avio_close(local_48[0]);
              }
            }
            uVar4 = uVar4 + 1;
            uVar15 = *(uint *)(local_54 + 0x18);
            iVar17 = local_54;
          } while (uVar4 < uVar15);
          iVar8 = param_1[0x23];
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar8);
    }
    *(undefined4 *)(DAT_00024440 + 0x23e4c) = 1;
    return 0;
  }
LAB_000240a4:
                    /* WARNING: Subroutine does not return */
  FUN_0002b538(1);
}



/* ===== FUN_0002448c @ 0002448c size=3700 ===== */

int * FUN_0002448c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_r1;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *unaff_r8;
  undefined4 *unaff_r9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  undefined4 uVar13;
  longlong lVar14;
  undefined4 *local_c4;
  undefined4 *local_bc;
  undefined4 *local_b8;
  undefined4 *local_b4;
  undefined4 *local_b0;
  undefined4 local_a8;
  undefined1 auStack_a4 [128];
  
  piVar1 = (int *)FUN_0001e1a4(param_1,param_2,1,param_3);
  iVar6 = *(int *)(param_1 + 0x1bc);
  iVar7 = DAT_00025300 + 0x244c0;
  iVar5 = piVar1[0x15];
  puVar9 = (undefined4 *)piVar1[3];
  *(undefined4 *)(iVar5 + 8) = 1;
  if (iVar6 < 1) {
LAB_000250fc:
    iVar6 = *(int *)(param_1 + 0x1b4);
  }
  else {
    iVar11 = 0;
    iVar6 = 0;
    do {
      iVar2 = FUN_0002c49c(param_2,puVar9,*(undefined4 *)(*(int *)(param_1 + 0x1b8) + iVar11 * 0x10)
                          );
      if (iVar2 < 1) {
        if (iVar2 != 0) goto LAB_00024538;
      }
      else {
        iVar6 = iVar6 + 1;
        unaff_r8 = (undefined4 *)(*(int *)(param_1 + 0x1b8) + iVar11 * 0x10);
        piVar1[0x52] = unaff_r8[2];
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(param_1 + 0x1bc));
    if (iVar6 < 2) goto LAB_000250fc;
    local_a8 = 0;
    memset(auStack_a4,0,0x7c);
    pcVar10 = (char *)*unaff_r8;
    if ((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) {
      pcVar10 = (char *)(DAT_00025344 + 0x247c4);
      av_strlcatf(&local_a8,0x80,DAT_00025348 + 0x247c8,DAT_0002534c + 0x247d0,pcVar10);
      uVar13 = *puVar9;
      pcVar12 = pcVar10;
    }
    else {
      pcVar12 = (char *)(DAT_00025304 + 0x245a8);
      av_strlcatf(&local_a8,0x80,DAT_00025308 + 0x245ac,DAT_0002530c + 0x245b4,pcVar12);
      uVar13 = *puVar9;
      if (*pcVar10 != '\0') {
        pcVar12 = (char *)(DAT_00025310 + 0x245cc);
      }
    }
    av_log(0,0x18,DAT_00025318 + 0x245f0,&local_a8,uVar13,DAT_00025314 + 0x245dc,pcVar12,pcVar10,
           unaff_r8[2]);
    iVar6 = *(int *)(param_1 + 0x1b4);
  }
  if (0 < iVar6) {
    iVar6 = 0;
    iVar11 = 0;
    do {
      while( true ) {
        iVar2 = iVar11 * 0x10;
        iVar3 = FUN_0002c49c(param_2,puVar9,
                             *(undefined4 *)(*(int *)(param_1 + 0x1b0) + iVar11 * 0x10));
        if (0 < iVar3) break;
        if (iVar3 != 0) goto LAB_00024538;
        iVar11 = iVar11 + 1;
        if (*(int *)(param_1 + 0x1b4) <= iVar11) goto LAB_00024670;
      }
      iVar11 = iVar11 + 1;
      iVar6 = iVar6 + 1;
      unaff_r9 = (undefined4 *)(*(int *)(param_1 + 0x1b0) + iVar2);
      piVar1[0x51] = unaff_r9[2];
    } while (iVar11 < *(int *)(param_1 + 0x1b4));
LAB_00024670:
    if (1 < iVar6) {
      local_a8 = 0;
      memset(auStack_a4,0,0x7c);
      iVar6 = DAT_00025328;
      pcVar10 = (char *)*unaff_r9;
      if ((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) {
        iVar11 = DAT_000253fc + 0x2514c;
        av_strlcatf(&local_a8,0x80,iVar11,DAT_00025404 + 0x25160,DAT_00025400 + 0x25154);
        iVar6 = DAT_00025410;
        av_strlcatf(&local_a8,0x80,iVar11,DAT_0002540c + 0x25184,DAT_00025408 + 0x2517c);
        pcVar10 = (char *)(iVar6 + 0x2519c);
        av_strlcatf(&local_a8,0x80,iVar11,DAT_00025414 + 0x251b0,pcVar10);
        uVar13 = *puVar9;
        pcVar12 = pcVar10;
      }
      else {
        iVar11 = DAT_0002531c + 0x246c0;
        av_strlcatf(&local_a8,0x80,iVar11,DAT_00025324 + 0x246dc,DAT_00025320 + 0x246d4);
        av_strlcatf(&local_a8,0x80,iVar11,DAT_00025330 + 0x246fc,DAT_0002532c + 0x246f4);
        av_strlcatf(&local_a8,0x80,iVar11,DAT_00025334 + 0x2471c,(char *)(iVar6 + 0x24708));
        uVar13 = *puVar9;
        pcVar12 = (char *)(iVar6 + 0x24708);
        if (*pcVar10 != '\0') {
          pcVar12 = (char *)(DAT_00025338 + 0x2473c);
        }
      }
      av_log(0,0x18,DAT_00025340 + 0x24764,&local_a8,uVar13,DAT_0002533c + 0x2474c,pcVar12,pcVar10,
             unaff_r9[2]);
    }
  }
  if (piVar1[0x59] != 0) goto LAB_0002477c;
  if (0 < *(int *)(param_1 + 0x34)) {
    iVar6 = 0;
    iVar11 = 0;
    iVar2 = 0;
    do {
      while( true ) {
        iVar3 = iVar2 * 0x10;
        iVar4 = FUN_0002c49c(param_2,puVar9,*(undefined4 *)(*(int *)(param_1 + 0x30) + iVar2 * 0x10)
                            );
        if (0 < iVar4) break;
        if (iVar4 != 0) goto LAB_00024538;
        iVar2 = iVar2 + 1;
        if (*(int *)(param_1 + 0x34) <= iVar2) goto LAB_0002485c;
      }
      iVar2 = iVar2 + 1;
      iVar11 = iVar11 + 1;
      local_b4 = (undefined4 *)(*(int *)(param_1 + 0x30) + iVar3);
      iVar6 = local_b4[2];
    } while (iVar2 < *(int *)(param_1 + 0x34));
LAB_0002485c:
    if (1 < iVar11) {
      local_a8 = 0;
      memset(auStack_a4,0,0x7c);
      pcVar10 = (char *)*local_b4;
      if ((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) {
        pcVar10 = (char *)(DAT_00025360 + 0x24914);
        av_strlcatf(&local_a8,0x80,DAT_00025364 + 0x24918,DAT_00025368 + 0x24920,pcVar10);
        uVar13 = *puVar9;
        pcVar12 = pcVar10;
      }
      else {
        pcVar12 = (char *)(DAT_00025350 + 0x248cc);
        av_strlcatf(&local_a8,0x80,DAT_00025354 + 0x248d0,DAT_00025358 + 0x248d8,pcVar12);
        uVar13 = *puVar9;
        if (*pcVar10 != '\0') {
          pcVar12 = (char *)(DAT_0002535c + 0x248f0);
        }
      }
      av_log(0,0x18,DAT_00025370 + 0x24958,&local_a8,uVar13,DAT_0002536c + 0x24940,pcVar12,pcVar10,
             local_b4[2]);
    }
    if (iVar6 != 0) {
      *(int *)(iVar5 + 0x314) = iVar6;
      *(undefined4 *)(iVar5 + 0x310) = 0;
    }
  }
  if (*(int *)(param_1 + 0x2c) < 1) {
LAB_00024bbc:
    if (0 < *(int *)(param_1 + 0x13c)) {
      iVar2 = 0;
      iVar11 = 0;
      iVar6 = 0;
      do {
        while( true ) {
          iVar3 = iVar11 * 0x10;
          iVar4 = FUN_0002c49c(param_2,puVar9,
                               *(undefined4 *)(*(int *)(param_1 + 0x138) + iVar11 * 0x10));
          if (0 < iVar4) break;
          if (iVar4 != 0) goto LAB_00024538;
          iVar11 = iVar11 + 1;
          if (*(int *)(param_1 + 0x13c) <= iVar11) goto LAB_00024c3c;
        }
        iVar11 = iVar11 + 1;
        iVar2 = iVar2 + 1;
        local_b8 = (undefined4 *)(*(int *)(param_1 + 0x138) + iVar3);
        iVar6 = local_b8[2];
      } while (iVar11 < *(int *)(param_1 + 0x13c));
LAB_00024c3c:
      if (1 < iVar2) {
        local_a8 = 0;
        memset(auStack_a4,0,0x7c);
        pcVar10 = (char *)*local_b8;
        if ((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) {
          pcVar10 = (char *)(DAT_00025430 + 0x25258);
          av_strlcatf(&local_a8,0x80,DAT_00025434 + 0x2525c,DAT_00025438 + 0x25264,pcVar10);
          uVar13 = *puVar9;
          pcVar12 = pcVar10;
        }
        else {
          pcVar12 = (char *)(DAT_000253ac + 0x24cac);
          av_strlcatf(&local_a8,0x80,DAT_000253b0 + 0x24cb0,DAT_000253b4 + 0x24cb8,pcVar12);
          uVar13 = *puVar9;
          if (*pcVar10 != '\0') {
            pcVar12 = (char *)(DAT_000253b8 + 0x24cd0);
          }
        }
        av_log(0,0x18,DAT_000253c0 + 0x24cfc,&local_a8,uVar13,DAT_000253bc + 0x24ce4,pcVar12,pcVar10
               ,local_b8[2]);
      }
      if (iVar6 != 0) {
        iVar11 = av_get_sample_fmt(iVar6);
        *(int *)(iVar5 + 0x138) = iVar11;
        if (iVar11 == -1) {
          iVar5 = DAT_0002544c + 0x252f4;
          goto LAB_00025278;
        }
      }
    }
    if (0 < *(int *)(param_1 + 0x3c)) {
      iVar6 = 0;
      iVar11 = 0;
      do {
        while( true ) {
          iVar2 = iVar11 * 0x10;
          iVar3 = FUN_0002c49c(param_2,puVar9,
                               *(undefined4 *)(*(int *)(param_1 + 0x38) + iVar11 * 0x10));
          if (0 < iVar3) break;
          if (iVar3 != 0) goto LAB_00024538;
          iVar11 = iVar11 + 1;
          if (*(int *)(param_1 + 0x3c) <= iVar11) goto LAB_00024dac;
        }
        iVar11 = iVar11 + 1;
        iVar6 = iVar6 + 1;
        local_c4 = (undefined4 *)(*(int *)(param_1 + 0x38) + iVar2);
        *(undefined4 *)(iVar5 + 0x130) = local_c4[2];
      } while (iVar11 < *(int *)(param_1 + 0x3c));
LAB_00024dac:
      if (1 < iVar6) {
        local_a8 = 0;
        memset(auStack_a4,0,0x7c);
        pcVar10 = (char *)*local_c4;
        if ((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) {
          pcVar10 = (char *)(DAT_00025424 + 0x2521c);
          av_strlcatf(&local_a8,0x80,DAT_00025428 + 0x25220,DAT_0002542c + 0x25228,pcVar10);
          uVar13 = *puVar9;
          pcVar12 = pcVar10;
        }
        else {
          pcVar12 = (char *)(DAT_000253c4 + 0x24e1c);
          av_strlcatf(&local_a8,0x80,DAT_000253c8 + 0x24e20,DAT_000253cc + 0x24e28,pcVar12);
          uVar13 = *puVar9;
          if (*pcVar10 != '\0') {
            pcVar12 = (char *)(DAT_000253d0 + 0x24e40);
          }
        }
        av_log(0,0x18,DAT_000253d8 + 0x24e6c,&local_a8,uVar13,DAT_000253d4 + 0x24e54,pcVar12,pcVar10
               ,local_c4[2]);
      }
    }
    if (0 < *(int *)(param_1 + 0x204)) {
      iVar5 = 0;
      iVar6 = 0;
      do {
        while( true ) {
          iVar11 = iVar6 * 0x10;
          iVar2 = FUN_0002c49c(param_2,puVar9,
                               *(undefined4 *)(*(int *)(param_1 + 0x200) + iVar6 * 0x10));
          if (0 < iVar2) break;
          if (iVar2 != 0) goto LAB_00024538;
          iVar6 = iVar6 + 1;
          if (*(int *)(param_1 + 0x204) <= iVar6) goto LAB_00024ef8;
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 1;
        local_b0 = (undefined4 *)(*(int *)(param_1 + 0x200) + iVar11);
        piVar1[0x56] = local_b0[2];
      } while (iVar6 < *(int *)(param_1 + 0x204));
LAB_00024ef8:
      if (1 < iVar5) {
        local_a8 = 0;
        memset(auStack_a4,0,0x7c);
        pcVar10 = (char *)*local_b0;
        if ((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) {
          pcVar10 = (char *)(DAT_00025418 + 0x251e0);
          av_strlcatf(&local_a8,0x80,DAT_0002541c + 0x251e4,DAT_00025420 + 0x251ec,pcVar10);
          uVar13 = *puVar9;
          pcVar12 = pcVar10;
        }
        else {
          pcVar12 = (char *)(DAT_000253dc + 0x24f60);
          av_strlcatf(&local_a8,0x80,DAT_000253e0 + 0x24f64,DAT_000253e4 + 0x24f6c,pcVar12);
          uVar13 = *puVar9;
          if (*pcVar10 != '\0') {
            pcVar12 = (char *)(DAT_000253e8 + 0x24f84);
          }
        }
        av_log(0,0x18,DAT_000253f0 + 0x24fb0,&local_a8,uVar13,DAT_000253ec + 0x24f98,pcVar12,pcVar10
               ,local_b0[2]);
      }
    }
    iVar5 = av_strdup(piVar1[0x56]);
    piVar1[0x56] = iVar5;
    iVar5 = FUN_00022ad4(piVar1);
    piVar1[0x50] = iVar5;
    if (iVar5 != 0) {
      iVar5 = *(int *)(param_1 + 0xbc);
      if (0 < iVar5) {
        iVar11 = DAT_000253f4 + 0x25000;
        iVar6 = 0;
        do {
          while( true ) {
            iVar2 = *(int *)(param_1 + 0xb8) + iVar6 * 0x14;
            if (((*(int *)(iVar2 + 0xc) == -1) || (*(int *)(iVar2 + 0xc) == *piVar1)) &&
               ((*(int *)(iVar2 + 0x10) == -1 || (*(int *)(iVar2 + 0x10) == *(int *)piVar1[3]))))
            break;
LAB_0002500c:
            iVar6 = iVar6 + 1;
            if (iVar5 <= iVar6) goto LAB_000250e4;
          }
          if (*(int *)(iVar2 + 8) != -1) {
            if (piVar1[2] < 0) {
              av_log(0,8,iVar11,*piVar1,*(undefined4 *)piVar1[3]);
              iVar5 = *(int *)(param_1 + 0xbc);
            }
            else {
              piVar8 = *(int **)(**(int **)(iVar7 + DAT_000253f8) + piVar1[2] * 4);
              if ((piVar8 == (int *)0x0) ||
                 ((*piVar8 == *(int *)(*(int *)(param_1 + 0xb8) + iVar6 * 0x14) &&
                  (*(int *)piVar8[1] == *(int *)(iVar2 + 4))))) goto LAB_000250a0;
            }
            goto LAB_0002500c;
          }
LAB_000250a0:
          iVar5 = av_reallocp_array(piVar1 + 0x4b,piVar1[0x4c] + 1,4);
          if (iVar5 < 0) goto LAB_00024538;
          iVar5 = piVar1[0x4c];
          iVar6 = iVar6 + 1;
          uVar13 = *(undefined4 *)(iVar2 + 8);
          piVar1[0x4c] = iVar5 + 1;
          *(undefined4 *)(piVar1[0x4b] + iVar5 * 4) = uVar13;
          iVar5 = *(int *)(param_1 + 0xbc);
        } while (iVar6 < iVar5);
      }
LAB_000250e4:
      if (piVar1[0x59] == 0) {
        return piVar1;
      }
LAB_0002477c:
      iVar5 = piVar1[0x51];
      if (piVar1[0x52] == 0) {
        if (iVar5 == 0) {
          return piVar1;
        }
        iVar6 = DAT_00025448 + 0x252e4;
      }
      else if (iVar5 == 0) {
        iVar6 = DAT_00025440 + 0x252a0;
        iVar5 = piVar1[0x52];
      }
      else {
        iVar6 = (int)&DAT_00025300 + DAT_00025450;
      }
      uVar13 = av_get_media_type_string(1);
      av_log(0,0x10,DAT_00025444 + 0x252bc,iVar6,iVar5,uVar13,*piVar1,piVar1[1]);
                    /* WARNING: Subroutine does not return */
      FUN_0002b538(1);
    }
  }
  else {
    iVar11 = 0;
    iVar2 = 0;
    iVar6 = 0;
    do {
      while( true ) {
        iVar3 = iVar2 * 0x10;
        iVar4 = FUN_0002c49c(param_2,puVar9,*(undefined4 *)(*(int *)(param_1 + 0x28) + iVar2 * 0x10)
                            );
        if (0 < iVar4) break;
        if (iVar4 != 0) goto LAB_00024538;
        iVar2 = iVar2 + 1;
        if (*(int *)(param_1 + 0x2c) <= iVar2) goto LAB_000249fc;
      }
      iVar2 = iVar2 + 1;
      iVar11 = iVar11 + 1;
      local_bc = (undefined4 *)(*(int *)(param_1 + 0x28) + iVar3);
      iVar6 = local_bc[2];
    } while (iVar2 < *(int *)(param_1 + 0x2c));
LAB_000249fc:
    if (1 < iVar11) {
      local_a8 = 0;
      memset(auStack_a4,0,0x7c);
      iVar11 = DAT_00025398;
      pcVar10 = (char *)*local_bc;
      if ((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) {
        iVar2 = DAT_0002538c + 0x24ad4;
        av_strlcatf(&local_a8,0x80,iVar2,DAT_00025394 + 0x24af0,DAT_00025390 + 0x24adc);
        pcVar10 = (char *)(iVar11 + 0x24b00);
        av_strlcatf(&local_a8,0x80,iVar2,DAT_0002539c + 0x24b14,pcVar10);
        uVar13 = *puVar9;
        pcVar12 = pcVar10;
      }
      else {
        iVar11 = DAT_00025374 + 0x24a68;
        pcVar12 = (char *)(DAT_00025378 + 0x24a84);
        av_strlcatf(&local_a8,0x80,iVar11,DAT_00025380 + 0x24a88,DAT_0002537c + 0x24a70);
        av_strlcatf(&local_a8,0x80,iVar11,DAT_00025384 + 0x24a9c,pcVar12);
        uVar13 = *puVar9;
        if (*pcVar10 != '\0') {
          pcVar12 = (char *)(DAT_00025388 + 0x24abc);
        }
      }
      av_log(0,0x18,DAT_000253a4 + 0x24b4c,&local_a8,uVar13,DAT_000253a0 + 0x24b34,pcVar12,pcVar10,
             local_bc[2]);
    }
    if (iVar6 == 0) goto LAB_00024bbc;
    iVar11 = av_channel_layout_from_string(iVar5 + 0x310);
    if (-1 < iVar11) goto LAB_00024bbc;
    lVar14 = av_get_channel_layout(iVar6);
    if (lVar14 != 0) {
      av_log(0,0x18,DAT_000253a8 + 0x24bac,iVar6);
      av_channel_layout_from_mask
                (iVar5 + 0x310,extraout_r1,(int)lVar14,(int)((ulonglong)lVar14 >> 0x20));
      goto LAB_00024bbc;
    }
    iVar5 = DAT_0002543c + 0x2527c;
LAB_00025278:
    av_log(0,8,iVar5,iVar6);
  }
LAB_00024538:
                    /* WARNING: Subroutine does not return */
  FUN_0002b538(1);
}



/* ===== FUN_00025454 @ 00025454 size=9016 ===== */

undefined4 * FUN_00025454(int param_1,int param_2,undefined4 param_3)

{
  double dVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  FILE *pFVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined4 *unaff_r6;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  char *pcVar15;
  undefined4 *unaff_r8;
  int iVar16;
  char *pcVar17;
  undefined4 uVar18;
  uint in_fpscr;
  float fVar19;
  double dVar20;
  char *local_484;
  undefined4 *local_480;
  undefined4 *local_478;
  undefined4 *local_474;
  undefined4 *local_468;
  undefined4 *local_464;
  undefined4 *local_460;
  undefined4 *local_45c;
  undefined4 *local_458;
  undefined4 *local_454;
  undefined4 *local_450;
  undefined4 *local_44c;
  undefined4 *local_448;
  undefined4 *local_444;
  undefined4 *local_440;
  undefined4 *local_43c;
  undefined4 local_438;
  undefined4 local_434;
  int local_430;
  int local_42c [256];
  
  puVar2 = (undefined4 *)FUN_0001e1a4(param_1,param_2,0,param_3);
  iVar8 = puVar2[0x15];
  puVar11 = (undefined4 *)puVar2[3];
  iVar9 = DAT_00026400 + 0x2549c;
  if (0 < *(int *)(param_1 + 0x44)) {
    iVar16 = 0;
    iVar14 = 0;
    pcVar10 = (char *)0x0;
    do {
      iVar3 = FUN_0002c49c(param_2,puVar11,*(undefined4 *)(*(int *)(param_1 + 0x40) + iVar14 * 0x10)
                          );
      if (iVar3 < 1) {
        if (iVar3 != 0) goto LAB_000254fc;
      }
      else {
        iVar16 = iVar16 + 1;
        unaff_r6 = (undefined4 *)(*(int *)(param_1 + 0x40) + iVar14 * 0x10);
        pcVar10 = (char *)unaff_r6[2];
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < *(int *)(param_1 + 0x44));
    if (1 < iVar16) {
      local_430 = 0;
      memset(local_42c,0,0x7c);
      pcVar17 = (char *)*unaff_r6;
      if ((pcVar17 == (char *)0x0) || (*pcVar17 == '\0')) {
        pcVar17 = (char *)(DAT_00026490 + 0x25c04);
        av_strlcatf(&local_430,0x80,DAT_00026498 + 0x25c1c,DAT_00026494 + 0x25c10,pcVar17);
        uVar18 = *puVar11;
        pcVar15 = pcVar17;
      }
      else {
        pcVar15 = (char *)(DAT_00026404 + 0x25564);
        av_strlcatf(&local_430,0x80,DAT_0002640c + 0x25570,DAT_00026408 + 0x25568,pcVar15);
        uVar18 = *puVar11;
        if (*pcVar17 != '\0') {
          pcVar15 = (char *)(DAT_00026410 + 0x25590);
        }
      }
      av_log(0,0x18,DAT_00026418 + 0x255bc,&local_430,uVar18,DAT_00026414 + 0x255a4,pcVar15,pcVar17,
             unaff_r6[2]);
    }
    if ((pcVar10 == (char *)0x0) ||
       (iVar14 = av_parse_video_rate(puVar2 + 0x27,pcVar10), -1 < iVar14)) {
      local_484 = pcVar10;
      if (0 < *(int *)(param_1 + 0x4c)) goto LAB_000255f4;
LAB_000271fc:
      if (local_484 != (char *)0x0) goto LAB_00025758;
      goto LAB_00025770;
    }
    iVar8 = DAT_00027ac4 + 0x27ab0;
LAB_00027994:
    av_log(0,8,iVar8,pcVar10);
    goto LAB_000254fc;
  }
  if (0 < *(int *)(param_1 + 0x4c)) {
    local_484 = (char *)0x0;
LAB_000255f4:
    iVar14 = 0;
    iVar16 = 0;
    pcVar10 = (char *)0x0;
    do {
      while( true ) {
        iVar3 = iVar16 * 0x10;
        iVar4 = FUN_0002c49c(param_2,puVar11,
                             *(undefined4 *)(*(int *)(param_1 + 0x48) + iVar16 * 0x10));
        if (0 < iVar4) break;
        if (iVar4 != 0) goto LAB_000254fc;
        iVar16 = iVar16 + 1;
        if (*(int *)(param_1 + 0x4c) <= iVar16) goto LAB_00025664;
      }
      iVar16 = iVar16 + 1;
      iVar14 = iVar14 + 1;
      local_480 = (undefined4 *)(*(int *)(param_1 + 0x48) + iVar3);
      pcVar10 = (char *)local_480[2];
    } while (iVar16 < *(int *)(param_1 + 0x4c));
LAB_00025664:
    if (1 < iVar14) {
      local_430 = 0;
      memset(local_42c,0,0x7c);
      pcVar17 = (char *)*local_480;
      if ((pcVar17 == (char *)0x0) || (*pcVar17 == '\0')) {
        pcVar17 = (char *)(DAT_0002649c + 0x25c44);
        av_strlcatf(&local_430,0x80,DAT_000264a4 + 0x25c50,DAT_000264a0 + 0x25c48,pcVar17);
        uVar18 = *puVar11;
        pcVar15 = pcVar17;
      }
      else {
        pcVar15 = (char *)(DAT_0002641c + 0x256c8);
        av_strlcatf(&local_430,0x80,DAT_00026424 + 0x256d4,DAT_00026420 + 0x256cc,pcVar15);
        uVar18 = *puVar11;
        if (*pcVar17 != '\0') {
          pcVar15 = (char *)(DAT_00026428 + 0x256f4);
        }
      }
      av_log(0,0x18,DAT_00026430 + 0x25724,&local_430,uVar18,DAT_0002642c + 0x25708,pcVar15,pcVar17,
             local_480[2]);
    }
    if (pcVar10 == (char *)0x0) goto LAB_000271fc;
    iVar14 = av_parse_video_rate(puVar2 + 0x29,pcVar10);
    if (iVar14 < 0) {
      iVar8 = (int)&DAT_00027ac0 + DAT_00027ac8;
      goto LAB_00027994;
    }
    if (local_484 != (char *)0x0) {
      av_log(0,0x10,DAT_00026a68 + 0x27804);
                    /* WARNING: Subroutine does not return */
      FUN_0002b538(1);
    }
LAB_00025758:
    if (**(int **)(iVar9 + DAT_00026434) == 0) {
      av_log(0,0x10,DAT_00026a64 + 0x27750);
    }
  }
LAB_00025770:
  if (*(int *)(param_1 + 0x164) < 1) {
LAB_0002720c:
    iVar14 = *(int *)(param_1 + 0x1bc);
  }
  else {
    iVar14 = 0;
    iVar16 = 0;
    pcVar10 = (char *)0x0;
    do {
      while( true ) {
        iVar3 = iVar16 * 0x10;
        iVar4 = FUN_0002c49c(param_2,puVar11,
                             *(undefined4 *)(*(int *)(param_1 + 0x160) + iVar16 * 0x10));
        if (0 < iVar4) break;
        if (iVar4 != 0) goto LAB_000254fc;
        iVar16 = iVar16 + 1;
        if (*(int *)(param_1 + 0x164) <= iVar16) goto LAB_000257ec;
      }
      iVar16 = iVar16 + 1;
      iVar14 = iVar14 + 1;
      local_478 = (undefined4 *)(*(int *)(param_1 + 0x160) + iVar3);
      pcVar10 = (char *)local_478[2];
    } while (iVar16 < *(int *)(param_1 + 0x164));
LAB_000257ec:
    if (1 < iVar14) {
      local_430 = 0;
      memset(local_42c,0,0x7c);
      pcVar17 = (char *)*local_478;
      if ((pcVar17 == (char *)0x0) || (*pcVar17 == '\0')) {
        pcVar17 = (char *)(DAT_00026974 + 0x27238);
        av_strlcatf(&local_430,0x80,DAT_0002697c + 0x27244,DAT_00026978 + 0x2723c,pcVar17);
        uVar18 = *puVar11;
        pcVar15 = pcVar17;
      }
      else {
        pcVar15 = (char *)(DAT_00026438 + 0x2584c);
        av_strlcatf(&local_430,0x80,DAT_00026440 + 0x25858,DAT_0002643c + 0x25850,pcVar15);
        uVar18 = *puVar11;
        if (*pcVar17 != '\0') {
          pcVar15 = (char *)(DAT_00026444 + 0x25878);
        }
      }
      av_log(0,0x18,DAT_0002644c + 0x258a8,&local_430,uVar18,DAT_00026448 + 0x2588c,pcVar15,pcVar17,
             local_478[2]);
    }
    if (pcVar10 == (char *)0x0) goto LAB_0002720c;
    iVar14 = av_parse_ratio(&local_430,pcVar10,0xff,0,0);
    if (((iVar14 < 0) || (local_430 < 1)) || (local_42c[0] < 1)) {
      iVar8 = DAT_00026a94 + 0x279b4;
      goto LAB_00027994;
    }
    iVar14 = *(int *)(param_1 + 0x1bc);
    puVar2[0x36] = local_430;
    puVar2[0x37] = local_42c[0];
  }
  if (0 < iVar14) {
    iVar14 = 0;
    iVar16 = 0;
    do {
      while( true ) {
        iVar3 = iVar16 * 0x10;
        iVar4 = FUN_0002c49c(param_2,puVar11,
                             *(undefined4 *)(*(int *)(param_1 + 0x1b8) + iVar16 * 0x10));
        if (0 < iVar4) break;
        if (iVar4 != 0) goto LAB_000254fc;
        iVar16 = iVar16 + 1;
        if (*(int *)(param_1 + 0x1bc) <= iVar16) goto LAB_0002597c;
      }
      iVar16 = iVar16 + 1;
      iVar14 = iVar14 + 1;
      unaff_r8 = (undefined4 *)(*(int *)(param_1 + 0x1b8) + iVar3);
      puVar2[0x52] = unaff_r8[2];
    } while (iVar16 < *(int *)(param_1 + 0x1bc));
LAB_0002597c:
    if (1 < iVar14) {
      local_430 = 0;
      memset(local_42c,0,0x7c);
      pcVar10 = (char *)*unaff_r8;
      if ((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) {
        pcVar10 = (char *)(DAT_00026980 + 0x27270);
        av_strlcatf(&local_430,0x80,DAT_00026988 + 0x2727c,DAT_00026984 + 0x27274,pcVar10);
        uVar18 = *puVar11;
        pcVar17 = pcVar10;
      }
      else {
        pcVar17 = (char *)(DAT_00026450 + 0x259d0);
        av_strlcatf(&local_430,0x80,DAT_00026458 + 0x259dc,DAT_00026454 + 0x259d4,pcVar17);
        uVar18 = *puVar11;
        if (*pcVar10 != '\0') {
          pcVar17 = (char *)(DAT_0002645c + 0x259f8);
        }
      }
      av_log(0,0x18,DAT_00026464 + 0x25a24,&local_430,uVar18,DAT_00026460 + 0x25a0c,pcVar17,pcVar10,
             unaff_r8[2]);
    }
  }
  if (0 < *(int *)(param_1 + 0x1b4)) {
    iVar14 = 0;
    iVar16 = 0;
    do {
      while( true ) {
        iVar3 = iVar16 * 0x10;
        iVar4 = FUN_0002c49c(param_2,puVar11,
                             *(undefined4 *)(*(int *)(param_1 + 0x1b0) + iVar16 * 0x10));
        if (0 < iVar4) break;
        if (iVar4 != 0) goto LAB_000254fc;
        iVar16 = iVar16 + 1;
        if (*(int *)(param_1 + 0x1b4) <= iVar16) goto LAB_00025aa4;
      }
      iVar16 = iVar16 + 1;
      iVar14 = iVar14 + 1;
      local_474 = (undefined4 *)(*(int *)(param_1 + 0x1b0) + iVar3);
      puVar2[0x51] = local_474[2];
    } while (iVar16 < *(int *)(param_1 + 0x1b4));
LAB_00025aa4:
    if (1 < iVar14) {
      local_430 = 0;
      memset(local_42c,0,0x7c);
      iVar16 = DAT_00026998;
      iVar14 = DAT_00026474;
      pcVar10 = (char *)*local_474;
      if ((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) {
        iVar14 = DAT_0002698c + 0x272a4;
        av_strlcatf(&local_430,0x80,iVar14,DAT_00026994 + 0x272b8,DAT_00026990 + 0x272ac);
        pcVar10 = (char *)(iVar16 + 0x272e8);
        av_strlcatf(&local_430,0x80,iVar14,DAT_000269a0 + 0x272dc,DAT_0002699c + 0x272d4);
        av_strlcatf(&local_430,0x80,iVar14,DAT_000269a4 + 0x27304,pcVar10);
        uVar18 = *puVar11;
        pcVar17 = pcVar10;
      }
      else {
        iVar16 = DAT_00026468 + 0x25af8;
        av_strlcatf(&local_430,0x80,iVar16,DAT_00026470 + 0x25b0c,DAT_0002646c + 0x25b00);
        av_strlcatf(&local_430,0x80,iVar16,DAT_0002647c + 0x25b30,DAT_00026478 + 0x25b28);
        av_strlcatf(&local_430,0x80,iVar16,DAT_00026480 + 0x25b50,(char *)(iVar14 + 0x25b3c));
        uVar18 = *puVar11;
        pcVar17 = (char *)(iVar14 + 0x25b3c);
        if (*pcVar10 != '\0') {
          pcVar17 = (char *)(DAT_00026484 + 0x25b70);
        }
      }
      av_log(0,0x18,DAT_0002648c + 0x25ba0,&local_430,uVar18,DAT_00026488 + 0x25b84,pcVar17,pcVar10,
             local_474[2]);
    }
  }
  if (puVar2[0x59] != 0) goto LAB_00025bbc;
  if (0 < *(int *)(param_1 + 0x54)) {
    pcVar10 = (char *)0x0;
    iVar14 = 0;
    iVar16 = 0;
    do {
      while( true ) {
        iVar3 = iVar16 * 0x10;
        iVar4 = FUN_0002c49c(param_2,puVar11,
                             *(undefined4 *)(*(int *)(param_1 + 0x50) + iVar16 * 0x10));
        if (0 < iVar4) break;
        if (iVar4 != 0) goto LAB_000254fc;
        iVar16 = iVar16 + 1;
        if (*(int *)(param_1 + 0x54) <= iVar16) goto LAB_00025cd4;
      }
      iVar16 = iVar16 + 1;
      iVar14 = iVar14 + 1;
      local_468 = (undefined4 *)(*(int *)(param_1 + 0x50) + iVar3);
      pcVar10 = (char *)local_468[2];
    } while (iVar16 < *(int *)(param_1 + 0x54));
LAB_00025cd4:
    if (1 < iVar14) {
      local_430 = 0;
      memset(local_42c,0,0x7c);
      pcVar17 = (char *)*local_468;
      if ((pcVar17 == (char *)0x0) || (*pcVar17 == '\0')) {
        pcVar17 = (char *)(DAT_000269bc + 0x27400);
        av_strlcatf(&local_430,0x80,DAT_000269c4 + 0x2740c,DAT_000269c0 + 0x27404,pcVar17);
        uVar18 = *puVar11;
        pcVar15 = pcVar17;
      }
      else {
        pcVar15 = (char *)(DAT_000264a8 + 0x25d2c);
        av_strlcatf(&local_430,0x80,DAT_000264b0 + 0x25d38,DAT_000264ac + 0x25d30,pcVar15);
        uVar18 = *puVar11;
        if (*pcVar17 != '\0') {
          pcVar15 = (char *)(DAT_000264b4 + 0x25d54);
        }
      }
      av_log(0,0x18,DAT_000264bc + 0x25d84,&local_430,uVar18,DAT_000264b8 + 0x25d68,pcVar15,pcVar17,
             local_468[2]);
    }
    if ((pcVar10 != (char *)0x0) &&
       (iVar14 = av_parse_video_size(iVar8 + 0x5c,iVar8 + 0x60,pcVar10), iVar14 < 0)) {
      iVar8 = DAT_00026a98 + 0x279c4;
      goto LAB_00027994;
    }
  }
  if (0 < *(int *)(param_1 + 0x5c)) {
    iVar14 = 0;
    iVar16 = 0;
    pcVar17 = (char *)0x0;
    do {
      while( true ) {
        iVar3 = iVar16 * 0x10;
        iVar4 = FUN_0002c49c(param_2,puVar11,
                             *(undefined4 *)(*(int *)(param_1 + 0x58) + iVar16 * 0x10));
        if (0 < iVar4) break;
        if (iVar4 != 0) goto LAB_000254fc;
        iVar16 = iVar16 + 1;
        if (*(int *)(param_1 + 0x5c) <= iVar16) goto LAB_00025e24;
      }
      iVar16 = iVar16 + 1;
      iVar14 = iVar14 + 1;
      local_460 = (undefined4 *)(*(int *)(param_1 + 0x58) + iVar3);
      pcVar17 = (char *)local_460[2];
    } while (iVar16 < *(int *)(param_1 + 0x5c));
LAB_00025e24:
    if (1 < iVar14) {
      local_430 = 0;
      memset(local_42c,0,0x7c);
      pcVar10 = (char *)*local_460;
      if ((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) {
        pcVar10 = (char *)(DAT_000269c8 + 0x27438);
        av_strlcatf(&local_430,0x80,DAT_000269d0 + 0x27444,DAT_000269cc + 0x2743c,pcVar10);
        uVar18 = *puVar11;
        pcVar15 = pcVar10;
      }
      else {
        pcVar15 = (char *)(DAT_000264c0 + 0x25e7c);
        av_strlcatf(&local_430,0x80,DAT_000264c8 + 0x25e88,DAT_000264c4 + 0x25e80,pcVar15);
        uVar18 = *puVar11;
        if (*pcVar10 != '\0') {
          pcVar15 = (char *)(DAT_000264cc + 0x25ea4);
        }
      }
      av_log(0,0x18,DAT_000264d4 + 0x25ed4,&local_430,uVar18,DAT_000264d0 + 0x25eb8,pcVar15,pcVar10,
             local_460[2]);
    }
    if (pcVar17 != (char *)0x0) {
      pcVar10 = pcVar17;
      if (*pcVar17 == '+') {
        pcVar10 = pcVar17 + 1;
        puVar2[0x61] = 1;
        if (pcVar17[1] == '\0' || pcVar10 == (char *)0x0) goto LAB_00025f08;
      }
      iVar14 = av_get_pix_fmt(pcVar10);
      *(int *)(iVar8 + 0x70) = iVar14;
      if (iVar14 == -1) {
        iVar8 = DAT_00026a90 + 0x27998;
        goto LAB_00027994;
      }
    }
  }
LAB_00025f08:
  iVar14 = *(int *)(param_1 + 0x174);
  uVar18 = *(undefined4 *)(iVar8 + 0xb4);
  puVar11[0xe] = *(undefined4 *)(iVar8 + 0xb0);
  puVar11[0xf] = uVar18;
  if (0 < iVar14) {
    iVar14 = 0;
    iVar16 = 0;
    pcVar10 = (char *)0x0;
    do {
      while( true ) {
        iVar3 = iVar16 * 0x10;
        iVar4 = FUN_0002c49c(param_2,puVar11,
                             *(undefined4 *)(*(int *)(param_1 + 0x170) + iVar16 * 0x10));
        if (0 < iVar4) break;
        if (iVar4 != 0) goto LAB_000254fc;
        iVar16 = iVar16 + 1;
        if (*(int *)(param_1 + 0x174) <= iVar16) goto LAB_00025f90;
      }
      iVar16 = iVar16 + 1;
      iVar14 = iVar14 + 1;
      local_464 = (undefined4 *)(*(int *)(param_1 + 0x170) + iVar3);
      pcVar10 = (char *)local_464[2];
    } while (iVar16 < *(int *)(param_1 + 0x174));
LAB_00025f90:
    if (1 < iVar14) {
      local_430 = 0;
      memset(local_42c,0,0x7c);
      pcVar17 = (char *)*local_464;
      if ((pcVar17 == (char *)0x0) || (*pcVar17 == '\0')) {
        pcVar17 = (char *)(DAT_000269d4 + 0x27470);
        av_strlcatf(&local_430,0x80,DAT_000269dc + 0x2747c,DAT_000269d8 + 0x27474,pcVar17);
        uVar18 = *puVar11;
        pcVar15 = pcVar17;
      }
      else {
        pcVar15 = (char *)(DAT_000264d8 + 0x25fe8);
        av_strlcatf(&local_430,0x80,DAT_000264e0 + 0x25ff4,DAT_000264dc + 0x25fec,pcVar15);
        uVar18 = *puVar11;
        if (*pcVar17 != '\0') {
          pcVar15 = (char *)(DAT_000264e4 + 0x26010);
        }
      }
      av_log(0,0x18,DAT_000264ec + 0x26040,&local_430,uVar18,DAT_000264e8 + 0x26024,pcVar15,pcVar17,
             local_464[2]);
    }
    if (pcVar10 == (char *)0x0) goto LAB_000260b4;
    puVar5 = (undefined2 *)av_mallocz(0x80);
    *(undefined2 **)(iVar8 + 0xe8) = puVar5;
    if (puVar5 != (undefined2 *)0x0) {
      iVar14 = atoi(pcVar10);
      iVar16 = 0;
      *puVar5 = (short)iVar14;
      pcVar17 = pcVar10;
      do {
        pcVar17 = strchr(pcVar17,0x2c);
        if (pcVar17 == (char *)0x0) {
          av_log(0,8,DAT_00026a74 + 0x278c4,pcVar10,iVar16);
                    /* WARNING: Subroutine does not return */
          FUN_0002b538(1);
        }
        pcVar17 = pcVar17 + 1;
        iVar16 = iVar16 + 1;
        iVar14 = atoi(pcVar17);
        puVar5 = puVar5 + 1;
        *puVar5 = (short)iVar14;
      } while (iVar16 != 0x3f);
      goto LAB_000260b4;
    }
LAB_00027a94:
    iVar8 = DAT_00027ac0 + 0x27aa0;
LAB_000278d4:
    av_log(0,8,iVar8);
    goto LAB_000254fc;
  }
LAB_000260b4:
  if (0 < *(int *)(param_1 + 0x184)) {
    iVar14 = 0;
    iVar16 = 0;
    pcVar10 = (char *)0x0;
    do {
      while( true ) {
        iVar3 = iVar16 * 0x10;
        iVar4 = FUN_0002c49c(param_2,puVar11,
                             *(undefined4 *)(*(int *)(param_1 + 0x180) + iVar16 * 0x10));
        if (0 < iVar4) break;
        if (iVar4 != 0) goto LAB_000254fc;
        iVar16 = iVar16 + 1;
        if (*(int *)(param_1 + 0x184) <= iVar16) goto LAB_00026128;
      }
      iVar16 = iVar16 + 1;
      iVar14 = iVar14 + 1;
      local_45c = (undefined4 *)(*(int *)(param_1 + 0x180) + iVar3);
      pcVar10 = (char *)local_45c[2];
    } while (iVar16 < *(int *)(param_1 + 0x184));
LAB_00026128:
    if (1 < iVar14) {
      local_430 = 0;
      memset(local_42c,0,0x7c);
      pcVar17 = (char *)*local_45c;
      if ((pcVar17 == (char *)0x0) || (*pcVar17 == '\0')) {
        pcVar17 = (char *)(DAT_000269e0 + 0x274a8);
        av_strlcatf(&local_430,0x80,DAT_000269e8 + 0x274b4,DAT_000269e4 + 0x274ac,pcVar17);
        uVar18 = *puVar11;
        pcVar15 = pcVar17;
      }
      else {
        pcVar15 = (char *)(DAT_000264f0 + 0x26180);
        av_strlcatf(&local_430,0x80,DAT_000264f8 + 0x2618c,DAT_000264f4 + 0x26184,pcVar15);
        uVar18 = *puVar11;
        if (*pcVar17 != '\0') {
          pcVar15 = (char *)(DAT_000264fc + 0x261a8);
        }
      }
      av_log(0,0x18,DAT_00026504 + 0x261d8,&local_430,uVar18,DAT_00026500 + 0x261bc,pcVar15,pcVar17,
             local_45c[2]);
    }
    if (pcVar10 != (char *)0x0) {
      puVar5 = (undefined2 *)av_mallocz(0x80);
      if (puVar5 == (undefined2 *)0x0) goto LAB_00027a94;
      iVar16 = 0;
      *(undefined2 **)(iVar8 + 700) = puVar5;
      iVar14 = atoi(pcVar10);
      *puVar5 = (short)iVar14;
      pcVar17 = pcVar10;
      do {
        pcVar17 = strchr(pcVar17,0x2c);
        if (pcVar17 == (char *)0x0) {
          av_log(0,8,DAT_00026a80 + 0x27914,pcVar10,iVar16);
                    /* WARNING: Subroutine does not return */
          FUN_0002b538(1);
        }
        pcVar17 = pcVar17 + 1;
        iVar16 = iVar16 + 1;
        iVar14 = atoi(pcVar17);
        puVar5 = puVar5 + 1;
        *puVar5 = (short)iVar14;
      } while (iVar16 != 0x3f);
    }
  }
  if (0 < *(int *)(param_1 + 0x17c)) {
    iVar14 = 0;
    iVar16 = 0;
    pcVar10 = (char *)0x0;
    do {
      while( true ) {
        iVar3 = iVar16 * 0x10;
        iVar4 = FUN_0002c49c(param_2,puVar11,
                             *(undefined4 *)(*(int *)(param_1 + 0x178) + iVar16 * 0x10));
        if (0 < iVar4) break;
        if (iVar4 != 0) goto LAB_000254fc;
        iVar16 = iVar16 + 1;
        if (*(int *)(param_1 + 0x17c) <= iVar16) goto LAB_000262bc;
      }
      iVar16 = iVar16 + 1;
      iVar14 = iVar14 + 1;
      local_454 = (undefined4 *)(*(int *)(param_1 + 0x178) + iVar3);
      pcVar10 = (char *)local_454[2];
    } while (iVar16 < *(int *)(param_1 + 0x17c));
LAB_000262bc:
    if (1 < iVar14) {
      local_430 = 0;
      memset(local_42c,0,0x7c);
      pcVar17 = (char *)*local_454;
      if ((pcVar17 == (char *)0x0) || (*pcVar17 == '\0')) {
        pcVar17 = (char *)(DAT_000269ec + 0x274e0);
        av_strlcatf(&local_430,0x80,DAT_000269f4 + 0x274ec,DAT_000269f0 + 0x274e4,pcVar17);
        uVar18 = *puVar11;
        pcVar15 = pcVar17;
      }
      else {
        pcVar15 = (char *)(DAT_00026508 + 0x26314);
        av_strlcatf(&local_430,0x80,DAT_00026510 + 0x26320,DAT_0002650c + 0x26318,pcVar15);
        uVar18 = *puVar11;
        if (*pcVar17 != '\0') {
          pcVar15 = (char *)(DAT_00026514 + 0x2633c);
        }
      }
      av_log(0,0x18,DAT_0002651c + 0x2636c,&local_430,uVar18,DAT_00026518 + 0x26350,pcVar15,pcVar17,
             local_454[2]);
    }
    if (pcVar10 != (char *)0x0) {
      puVar5 = (undefined2 *)av_mallocz(0x80);
      *(undefined2 **)(iVar8 + 0xec) = puVar5;
      if (puVar5 == (undefined2 *)0x0) {
        av_log(0,8,DAT_00026ab4 + 0x27a8c);
                    /* WARNING: Subroutine does not return */
        FUN_0002b538(1);
      }
      iVar14 = atoi(pcVar10);
      iVar16 = 0;
      *puVar5 = (short)iVar14;
      pcVar17 = pcVar10;
      do {
        pcVar17 = strchr(pcVar17,0x2c);
        if (pcVar17 == (char *)0x0) {
          av_log(0,8,DAT_00026a84 + 0x27934,pcVar10,iVar16);
                    /* WARNING: Subroutine does not return */
          FUN_0002b538(1);
        }
        pcVar17 = pcVar17 + 1;
        iVar16 = iVar16 + 1;
        iVar14 = atoi(pcVar17);
        puVar5 = puVar5 + 1;
        *puVar5 = (short)iVar14;
      } while (iVar16 != 0x3f);
    }
  }
  if (*(int *)(param_1 + 0x16c) < 1) {
LAB_0002780c:
    iVar14 = 0;
  }
  else {
    iVar14 = 0;
    iVar16 = 0;
    pcVar10 = (char *)0x0;
    do {
      while( true ) {
        iVar3 = iVar16 * 0x10;
        iVar4 = FUN_0002c49c(param_2,puVar11,
                             *(undefined4 *)(*(int *)(param_1 + 0x168) + iVar16 * 0x10));
        if (0 < iVar4) break;
        if (iVar4 != 0) goto LAB_000254fc;
        iVar16 = iVar16 + 1;
        if (*(int *)(param_1 + 0x16c) <= iVar16) goto LAB_00026590;
      }
      iVar16 = iVar16 + 1;
      iVar14 = iVar14 + 1;
      local_458 = (undefined4 *)(*(int *)(param_1 + 0x168) + iVar3);
      pcVar10 = (char *)local_458[2];
    } while (iVar16 < *(int *)(param_1 + 0x16c));
LAB_00026590:
    if (1 < iVar14) {
      local_430 = 0;
      memset(local_42c,0,0x7c);
      pcVar17 = (char *)*local_458;
      if ((pcVar17 == (char *)0x0) || (*pcVar17 == '\0')) {
        pcVar17 = (char *)(DAT_000269f8 + 0x27518);
        av_strlcatf(&local_430,0x80,DAT_00026a00 + 0x27524,DAT_000269fc + 0x2751c,pcVar17);
        uVar18 = *puVar11;
        pcVar15 = pcVar17;
      }
      else {
        pcVar15 = (char *)(DAT_00026520 + 0x265e8);
        av_strlcatf(&local_430,0x80,DAT_00026528 + 0x265f4,DAT_00026524 + 0x265ec,pcVar15);
        uVar18 = *puVar11;
        if (*pcVar17 != '\0') {
          pcVar15 = (char *)(DAT_0002652c + 0x26610);
        }
      }
      av_log(0,0x18,DAT_00026534 + 0x26640,&local_430,uVar18,DAT_00026530 + 0x26624,pcVar15,pcVar17,
             local_458[2]);
    }
    dVar1 = DAT_000268c0;
    if (pcVar10 == (char *)0x0) goto LAB_0002780c;
    pcVar17 = (char *)(DAT_00026538 + 0x26668);
    iVar14 = 0;
    do {
      iVar16 = sscanf(pcVar10,pcVar17,&local_438,&local_434,&local_430);
      if (iVar16 != 3) {
        iVar8 = DAT_00026a78 + 0x278d8;
        goto LAB_000278d4;
      }
      iVar14 = iVar14 + 1;
      iVar16 = av_realloc_array(*(undefined4 *)(iVar8 + 0x188),iVar14,0x10);
      *(int *)(iVar8 + 0x188) = iVar16;
      if (iVar16 == 0) {
        av_log(0,8,DAT_00026a7c + 0x278f4);
                    /* WARNING: Subroutine does not return */
        FUN_0002b538(1);
      }
      iVar4 = iVar14 * 0x10 + -0x10;
      iVar3 = iVar16 + iVar4;
      *(undefined4 *)(iVar16 + iVar4) = local_438;
      *(undefined4 *)(iVar3 + 4) = local_434;
      if (local_430 < 1) {
        *(undefined4 *)(iVar3 + 8) = 0;
        dVar20 = (double)VectorSignedToFloat(-local_430,(byte)(in_fpscr >> 0x16) & 3);
        fVar19 = (float)(dVar20 / dVar1);
      }
      else {
        *(int *)(iVar3 + 8) = local_430;
        fVar19 = 1.0;
      }
      *(float *)(iVar3 + 0xc) = fVar19;
      pcVar10 = strchr(pcVar10,0x2f);
    } while ((pcVar10 != (char *)0x0) && (pcVar10 = pcVar10 + 1, pcVar10 != (char *)0x0));
  }
  iVar16 = *(int *)(DAT_000268c8 + 0x26750);
  *(int *)(iVar8 + 0x184) = iVar14;
  if (iVar16 != 0) {
    *(uint *)(iVar8 + 0x3c) = *(uint *)(iVar8 + 0x3c) | 0x8000;
  }
  if (*(int *)(param_1 + 0x1dc) < 1) {
    if (0 < *(int *)(param_1 + 0x1e4)) {
      uVar12 = 0;
      goto LAB_000268a4;
    }
    if (puVar2[0x4d] != 0) {
      iVar8 = av_strdup();
      puVar2[0x4d] = iVar8;
      if (iVar8 == 0) goto LAB_000254fc;
    }
  }
  else {
    iVar14 = 0;
    iVar16 = 0;
    uVar12 = 0;
    do {
      while( true ) {
        iVar3 = iVar16 * 0x10;
        iVar4 = FUN_0002c49c(param_2,puVar11,
                             *(undefined4 *)(*(int *)(param_1 + 0x1d8) + iVar16 * 0x10));
        if (0 < iVar4) break;
        if (iVar4 != 0) goto LAB_000254fc;
        iVar16 = iVar16 + 1;
        if (*(int *)(param_1 + 0x1dc) <= iVar16) goto LAB_000267c8;
      }
      iVar16 = iVar16 + 1;
      iVar14 = iVar14 + 1;
      local_440 = (undefined4 *)(*(int *)(param_1 + 0x1d8) + iVar3);
      uVar12 = local_440[2];
    } while (iVar16 < *(int *)(param_1 + 0x1dc));
LAB_000267c8:
    if (1 < iVar14) {
      local_430 = 0;
      memset(local_42c,0,0x7c);
      pcVar10 = (char *)*local_440;
      if ((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) {
        pcVar10 = (char *)(DAT_00026a04 + 0x27550);
        av_strlcatf(&local_430,0x80,DAT_00026a0c + 0x2755c,DAT_00026a08 + 0x27554,pcVar10);
        uVar18 = *puVar11;
        pcVar17 = pcVar10;
      }
      else {
        pcVar17 = (char *)(DAT_000268cc + 0x26820);
        av_strlcatf(&local_430,0x80,DAT_000268d4 + 0x2682c,DAT_000268d0 + 0x26824,pcVar17);
        uVar18 = *puVar11;
        if (*pcVar10 != '\0') {
          pcVar17 = (char *)(DAT_000268d8 + 0x26848);
        }
      }
      av_log(0,0x18,DAT_000268e0 + 0x26878,&local_430,uVar18,DAT_000268dc + 0x2685c,pcVar17,pcVar10,
             local_440[2]);
    }
    if (uVar12 == 0) {
LAB_00026898:
      iVar14 = *(int *)(param_1 + 0x1e4);
    }
    else {
      if ((uVar12 & 1) != 0) {
        iVar14 = DAT_00026a50 + 0x276cc;
        *(uint *)(iVar8 + 0x3c) = *(uint *)(iVar8 + 0x3c) | 0x200;
        av_dict_set(puVar2 + 0x53,DAT_00026a54 + 0x276dc,iVar14,0x20);
      }
      if ((uVar12 & 2) == 0) goto LAB_00026898;
      iVar14 = DAT_00026a5c + 0x27720;
      *(uint *)(iVar8 + 0x3c) = *(uint *)(iVar8 + 0x3c) | 0x400;
      av_dict_set(puVar2 + 0x53,DAT_00026a60 + 0x27730,iVar14,0x20);
      iVar14 = *(int *)(param_1 + 0x1e4);
    }
    if (0 < iVar14) {
LAB_000268a4:
      iVar14 = 0;
      iVar16 = 0;
      do {
        while( true ) {
          iVar3 = iVar16 * 0x10;
          iVar4 = FUN_0002c49c(param_2,puVar11,
                               *(undefined4 *)(*(int *)(param_1 + 0x1e0) + iVar16 * 0x10));
          if (0 < iVar4) break;
          if (iVar4 != 0) goto LAB_000254fc;
          iVar16 = iVar16 + 1;
          if (*(int *)(param_1 + 0x1e4) <= iVar16) goto LAB_00026b10;
        }
        iVar16 = iVar16 + 1;
        iVar14 = iVar14 + 1;
        local_444 = (undefined4 *)(*(int *)(param_1 + 0x1e0) + iVar3);
        puVar2[0x4d] = local_444[2];
      } while (iVar16 < *(int *)(param_1 + 0x1e4));
LAB_00026b10:
      if (1 < iVar14) {
        local_430 = 0;
        memset(local_42c,0,0x7c);
        pcVar10 = (char *)*local_444;
        if ((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) {
          pcVar10 = (char *)(DAT_00026a10 + 0x27588);
          av_strlcatf(&local_430,0x80,DAT_00026a18 + 0x27594,DAT_00026a14 + 0x2758c,pcVar10);
          uVar18 = *puVar11;
          pcVar17 = pcVar10;
        }
        else {
          pcVar17 = (char *)(DAT_000268e4 + 0x26b70);
          av_strlcatf(&local_430,0x80,DAT_000268ec + 0x26b7c,DAT_000268e8 + 0x26b74,pcVar17);
          uVar18 = *puVar11;
          if (*pcVar10 != '\0') {
            pcVar17 = (char *)(DAT_000268f0 + 0x26b98);
          }
        }
        av_log(0,0x18,DAT_000268f8 + 0x26bc8,&local_430,uVar18,DAT_000268f4 + 0x26bac,pcVar17,
               pcVar10,local_444[2]);
      }
    }
    if (puVar2[0x4d] == 0) {
      if (uVar12 != 0) {
        iVar14 = DAT_000269a8 + 0x27324;
LAB_00026bf8:
        snprintf((char *)&local_430,0x400,(char *)(DAT_00026900 + 0x26c20),iVar14,
                 **(int **)(iVar9 + DAT_000268fc) + -1);
        iVar14 = strcmp(*(char **)puVar2[0x17],(char *)(DAT_00026904 + 0x26c40));
        if (iVar14 == 0) {
          av_dict_set(puVar2 + 0x53,DAT_00026a58 + 0x276fc,&local_430,0x10);
        }
        else {
          uVar12 = *(uint *)(iVar8 + 0x3c);
          if ((uVar12 & 0x400) != 0) {
            iVar14 = FUN_00022980(&local_430);
            if (iVar14 == 0) {
              av_log(0,8,DAT_00026aa0 + 0x27a08,&local_430);
                    /* WARNING: Subroutine does not return */
              FUN_0002b538(1);
            }
            uVar12 = *(uint *)(iVar8 + 0x3c);
            *(int *)(iVar8 + 0x1b4) = iVar14;
          }
          if ((uVar12 & 0x200) != 0) {
            pFVar6 = fopen64((char *)&local_430,(char *)(DAT_00026908 + 0x26c74));
            if (pFVar6 == (FILE *)0x0) {
              piVar7 = __errno_location();
              pcVar10 = strerror(*piVar7);
              av_log(0,8,DAT_00026a9c + 0x279e4,&local_430,pcVar10);
                    /* WARNING: Subroutine does not return */
              FUN_0002b538(1);
            }
            puVar2[0x4e] = pFVar6;
          }
        }
      }
    }
    else {
      iVar14 = av_strdup();
      puVar2[0x4d] = iVar14;
      if (iVar14 == 0) goto LAB_000254fc;
      if (uVar12 != 0) goto LAB_00026bf8;
    }
  }
  if (0 < *(int *)(param_1 + 0x14c)) {
    iVar8 = 0;
    iVar14 = 0;
    do {
      while( true ) {
        iVar16 = iVar14 * 0x10;
        iVar3 = FUN_0002c49c(param_2,puVar11,
                             *(undefined4 *)(*(int *)(param_1 + 0x148) + iVar14 * 0x10));
        if (0 < iVar3) break;
        if (iVar3 != 0) goto LAB_000254fc;
        iVar14 = iVar14 + 1;
        if (*(int *)(param_1 + 0x14c) <= iVar14) goto LAB_00026cfc;
      }
      iVar14 = iVar14 + 1;
      iVar8 = iVar8 + 1;
      local_450 = (undefined4 *)(*(int *)(param_1 + 0x148) + iVar16);
      puVar2[0x3d] = local_450[2];
    } while (iVar14 < *(int *)(param_1 + 0x14c));
LAB_00026cfc:
    if (1 < iVar8) {
      local_430 = 0;
      memset(local_42c,0,0x7c);
      pcVar10 = (char *)*local_450;
      if ((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) {
        pcVar10 = (char *)(DAT_00026a1c + 0x275c0);
        av_strlcatf(&local_430,0x80,DAT_00026a24 + 0x275cc,DAT_00026a20 + 0x275c4,pcVar10);
        uVar18 = *puVar11;
        pcVar17 = pcVar10;
      }
      else {
        pcVar17 = (char *)(DAT_0002690c + 0x26d54);
        av_strlcatf(&local_430,0x80,DAT_00026914 + 0x26d60,DAT_00026910 + 0x26d58,pcVar17);
        uVar18 = *puVar11;
        if (*pcVar10 != '\0') {
          pcVar17 = (char *)(DAT_00026918 + 0x26d7c);
        }
      }
      av_log(0,0x18,DAT_00026920 + 0x26dac,&local_430,uVar18,DAT_0002691c + 0x26d90,pcVar17,pcVar10,
             local_450[2]);
    }
  }
  if (puVar2[0x3d] == 0) {
    iVar8 = *(int *)(param_1 + 0x15c);
  }
  else {
    uVar18 = av_strdup();
    iVar8 = *(int *)(param_1 + 0x15c);
    puVar2[0x3d] = uVar18;
  }
  if (0 < iVar8) {
    iVar8 = 0;
    iVar14 = 0;
    do {
      while( true ) {
        iVar16 = iVar14 * 0x10;
        iVar3 = FUN_0002c49c(param_2,puVar11,
                             *(undefined4 *)(*(int *)(param_1 + 0x158) + iVar14 * 0x10));
        if (0 < iVar3) break;
        if (iVar3 != 0) goto LAB_000254fc;
        iVar14 = iVar14 + 1;
        if (*(int *)(param_1 + 0x15c) <= iVar14) goto LAB_00026e48;
      }
      iVar14 = iVar14 + 1;
      iVar8 = iVar8 + 1;
      local_43c = (undefined4 *)(*(int *)(param_1 + 0x158) + iVar16);
      puVar2[0x2e] = local_43c[2];
    } while (iVar14 < *(int *)(param_1 + 0x15c));
LAB_00026e48:
    if (1 < iVar8) {
      local_430 = 0;
      memset(local_42c,0,0x7c);
      pcVar10 = (char *)*local_43c;
      if ((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) {
        pcVar10 = (char *)(DAT_00026a40 + 0x27668);
        av_strlcatf(&local_430,0x80,DAT_00026a48 + 0x27674,DAT_00026a44 + 0x2766c,pcVar10);
        uVar18 = *puVar11;
        pcVar17 = pcVar10;
      }
      else {
        pcVar17 = (char *)(DAT_00026924 + 0x26ea0);
        av_strlcatf(&local_430,0x80,DAT_0002692c + 0x26eac,DAT_00026928 + 0x26ea4,pcVar17);
        uVar18 = *puVar11;
        if (*pcVar10 != '\0') {
          pcVar17 = (char *)(DAT_00026930 + 0x26ec8);
        }
      }
      av_log(0,0x18,DAT_00026938 + 0x26ef8,&local_430,uVar18,DAT_00026934 + 0x26edc,pcVar17,pcVar10,
             local_43c[2]);
    }
  }
  iVar8 = *(int *)(param_1 + 0x18c);
  puVar2[0x2f] = 0xffffffff;
  if (0 < iVar8) {
    iVar8 = 0;
    iVar14 = 0;
    do {
      while( true ) {
        iVar16 = iVar14 * 0x10;
        iVar3 = FUN_0002c49c(param_2,puVar11,
                             *(undefined4 *)(*(int *)(param_1 + 0x188) + iVar14 * 0x10));
        if (0 < iVar3) break;
        if (iVar3 != 0) goto LAB_000254fc;
        iVar14 = iVar14 + 1;
        if (*(int *)(param_1 + 0x18c) <= iVar14) goto LAB_00026f80;
      }
      iVar14 = iVar14 + 1;
      iVar8 = iVar8 + 1;
      local_448 = (undefined4 *)(*(int *)(param_1 + 0x188) + iVar16);
      puVar2[0x2f] = local_448[2];
    } while (iVar14 < *(int *)(param_1 + 0x18c));
LAB_00026f80:
    if (1 < iVar8) {
      local_430 = 0;
      memset(local_42c,0,0x7c);
      pcVar10 = (char *)*local_448;
      if ((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) {
        pcVar10 = (char *)(DAT_00026a34 + 0x27630);
        av_strlcatf(&local_430,0x80,DAT_00026a3c + 0x2763c,DAT_00026a38 + 0x27634,pcVar10);
        uVar18 = *puVar11;
        pcVar17 = pcVar10;
      }
      else {
        pcVar17 = (char *)(DAT_0002693c + 0x26fd8);
        av_strlcatf(&local_430,0x80,DAT_00026944 + 0x26fe4,DAT_00026940 + 0x26fdc,pcVar17);
        uVar18 = *puVar11;
        if (*pcVar10 != '\0') {
          pcVar17 = (char *)(DAT_00026948 + 0x27000);
        }
      }
      av_log(0,0x18,DAT_00026950 + 0x27030,&local_430,uVar18,DAT_0002694c + 0x27014,pcVar17,pcVar10,
             local_448[2]);
    }
  }
  iVar8 = *(int *)(param_1 + 0x154);
  puVar2[0x2b] = **(undefined4 **)(iVar9 + DAT_00026954);
  if (0 < iVar8) {
    iVar8 = 0;
    iVar14 = 0;
    do {
      while( true ) {
        iVar16 = iVar14 * 0x10;
        iVar3 = FUN_0002c49c(param_2,puVar11,
                             *(undefined4 *)(*(int *)(param_1 + 0x150) + iVar14 * 0x10));
        if (0 < iVar3) break;
        if (iVar3 != 0) goto LAB_000254fc;
        iVar14 = iVar14 + 1;
        if (*(int *)(param_1 + 0x154) <= iVar14) goto LAB_000270c4;
      }
      iVar14 = iVar14 + 1;
      iVar8 = iVar8 + 1;
      local_44c = (undefined4 *)(*(int *)(param_1 + 0x150) + iVar16);
      puVar2[0x2d] = local_44c[2];
    } while (iVar14 < *(int *)(param_1 + 0x154));
LAB_000270c4:
    if (1 < iVar8) {
      local_430 = 0;
      memset(local_42c,0,0x7c);
      pcVar10 = (char *)*local_44c;
      if ((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) {
        pcVar10 = (char *)(DAT_00026a28 + 0x275f8);
        av_strlcatf(&local_430,0x80,DAT_00026a30 + 0x27604,DAT_00026a2c + 0x275fc,pcVar10);
        uVar18 = *puVar11;
        pcVar17 = pcVar10;
      }
      else {
        pcVar17 = (char *)(DAT_00026958 + 0x2711c);
        av_strlcatf(&local_430,0x80,DAT_00026960 + 0x27128,DAT_0002695c + 0x27120,pcVar17);
        uVar18 = *puVar11;
        if (*pcVar10 != '\0') {
          pcVar17 = (char *)(DAT_00026964 + 0x27144);
        }
      }
      av_log(0,0x18,DAT_0002696c + 0x27174,&local_430,uVar18,DAT_00026968 + 0x27158,pcVar17,pcVar10,
             local_44c[2]);
    }
  }
  iVar8 = puVar2[0x2d];
  if (iVar8 == 0) {
    uVar12 = puVar2[0x2b];
    if (uVar12 != 0xffffffff) goto LAB_000271b0;
LAB_00027340:
    puVar11 = *(undefined4 **)(param_2 + 8);
    iVar8 = strcmp((char *)*puVar11,(char *)(DAT_000269ac + 0x27354));
    if (iVar8 == 0) {
LAB_00027794:
      puVar2[0x2b] = 2;
LAB_000277b0:
      uVar12 = 0;
    }
    else {
      uVar12 = puVar11[7];
      if ((uVar12 & 0x400) != 0) {
        if ((uVar12 & 0x80) == 0) goto LAB_00027794;
        puVar2[0x2b] = 0;
        goto LAB_000277b0;
      }
      puVar2[0x2b] = 1;
      if ((((int)puVar2[2] < 0) ||
          (iVar8 = *(int *)(**(int **)(iVar9 + DAT_000269b4) +
                           **(int **)(**(int **)(iVar9 + DAT_000269b0) + puVar2[2] * 4) * 4),
          *(int *)(iVar8 + 0x58) != 1)) ||
         (*(int *)(iVar8 + 0x28) != 0 || *(int *)(iVar8 + 0x2c) != 0)) {
        if (**(int **)(iVar9 + DAT_000269b8) != 0) {
          puVar2[0x2b] = 3;
        }
        uVar12 = 1;
      }
      else {
        puVar2[0x2b] = 3;
        uVar12 = 1;
      }
    }
  }
  else {
    uVar18 = *puVar2;
    uVar13 = puVar2[1];
    iVar14 = av_strcasecmp(iVar8,DAT_00026970 + 0x271a0);
    if (iVar14 == 0) {
      uVar12 = 1;
      puVar2[0x2b] = 1;
    }
    else {
      iVar14 = av_strcasecmp(iVar8,DAT_00026a4c + 0x27694);
      if (iVar14 == 0) {
        uVar12 = 0;
        puVar2[0x2b] = 2;
      }
      else {
        iVar14 = av_strcasecmp(iVar8,DAT_00026a6c + 0x2785c);
        uVar12 = 0;
        if (iVar14 != 0) {
          iVar14 = av_strcasecmp(iVar8,DAT_00026a70 + 0x2789c);
          if (iVar14 != 0) {
            iVar14 = av_strcasecmp(iVar8,DAT_00026a88 + 0x2794c);
            if (iVar14 != 0) {
              av_log(0,8,DAT_00026a8c + 0x27980,iVar8,uVar18,uVar13);
                    /* WARNING: Subroutine does not return */
              FUN_0002b538(1);
            }
            puVar2[0x2b] = 0xffffffff;
            goto LAB_00027340;
          }
          uVar12 = 4;
        }
        puVar2[0x2b] = uVar12;
      }
    }
LAB_000271b0:
    uVar12 = (uint)((uVar12 & 0xfffffffd) == 1);
  }
  puVar2[0x2c] = uVar12;
  iVar8 = FUN_00022ad4(puVar2);
  puVar2[0x50] = iVar8;
  if (iVar8 != 0) {
    iVar8 = av_frame_alloc();
    puVar2[0x1b] = iVar8;
    if (iVar8 != 0) {
      if (puVar2[0x59] == 0) {
        return puVar2;
      }
LAB_00025bbc:
      iVar8 = puVar2[0x51];
      if (puVar2[0x52] == 0) {
        if (iVar8 == 0) {
          return puVar2;
        }
        iVar9 = DAT_00026aac + 0x27a70;
      }
      else if (iVar8 == 0) {
        iVar9 = DAT_00026aa4 + 0x27a28;
        iVar8 = puVar2[0x52];
      }
      else {
        iVar9 = DAT_00026ab0 + 0x27a7c;
      }
      uVar18 = av_get_media_type_string(0);
      av_log(0,0x10,DAT_00026aa8 + 0x27a44,iVar9,iVar8,uVar18,*puVar2,puVar2[1]);
                    /* WARNING: Subroutine does not return */
      FUN_0002b538(1);
    }
  }
LAB_000254fc:
                    /* WARNING: Subroutine does not return */
  FUN_0002b538(1);
}



/* ===== FUN_00027acc @ 00027acc size=312 ===== */

void FUN_00027acc(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    puVar1 = (undefined4 *)FUN_00025454(param_2,param_3,0xffffffff);
  }
  else {
    if (*(int *)(param_1 + 0x14) != 1) {
      av_log(0,8,DAT_00027c04 + 0x27b78);
                    /* WARNING: Subroutine does not return */
      FUN_0002b538(1);
    }
    puVar1 = (undefined4 *)FUN_0002448c(param_2,param_3,0xffffffff);
  }
  iVar3 = puVar1[0x59];
  puVar1[0x4f] = param_1;
  *(undefined4 **)(param_1 + 4) = puVar1;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  if (iVar3 != 0) {
    av_log(0,0x10,DAT_00027c08 + 0x27b9c,*puVar1,puVar1[1]);
                    /* WARNING: Subroutine does not return */
    FUN_0002b538(1);
  }
  if (puVar1[0x50] != 0) {
    iVar3 = puVar1[0x51];
    if (iVar3 == 0) {
      iVar3 = puVar1[0x52];
      if (iVar3 == 0) goto LAB_00027b40;
      iVar4 = DAT_00027c0c + 0x27bb8;
      iVar2 = DAT_00027c10 + 0x27bbc;
    }
    else {
      iVar4 = DAT_00027c18 + 0x27c00;
      iVar2 = (int)&DAT_00027c04 + DAT_00027c1c;
    }
    av_log(0,0x10,DAT_00027c14 + 0x27bd4,iVar4,iVar3,iVar2,*puVar1,puVar1[1],iVar2);
                    /* WARNING: Subroutine does not return */
    FUN_0002b538(1);
  }
LAB_00027b40:
  avfilter_inout_free(param_1 + 0x10);
  return;
}



/* ===== FUN_00027c20 @ 00027c20 size=88 ===== */

void FUN_00027c20(void)

{
  int iVar1;
  
  iVar1 = DAT_00027c7c;
  av_log(0,0x20,DAT_00027c78 + 0x27c34);
  av_log(0,0x20,DAT_00027c84 + 0x27c5c,*(undefined4 *)(iVar1 + 0x27c48 + DAT_00027c80));
  av_log(0,0x20,DAT_00027c88 + 0x27c74);
  return;
}



/* ===== FUN_00027c8c @ 00027c8c size=1056 ===== */

void FUN_00027c8c(char *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_000280ac + 0x27ca4;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    iVar1 = strcmp(param_1,(char *)(DAT_000280d4 + 0x27d9c));
    if (iVar1 == 0) {
      FUN_00027c20();
      printf((char *)(DAT_0002810c + 0x27f8c),*(undefined4 *)(iVar2 + DAT_000280b0));
      uVar3 = *(undefined4 *)(iVar2 + DAT_000280b8);
      FUN_0002b6f4(uVar3,DAT_00028110 + 0x27fa8,0x800,0,0);
      FUN_0002b6f4(uVar3,DAT_00028114 + 0x27fc8,0,0xe804,0);
      FUN_0002b6f4(uVar3,DAT_00028118 + 0x27fe4,4,0xe800,0);
      FUN_0002b6f4(uVar3,DAT_0002811c + 0x28000,0,0xa34,0xe000);
      FUN_0002b6f4(uVar3,DAT_00028120 + 0x2801c,4,0x230,0xe000);
      FUN_0002b6f4(uVar3,DAT_00028124 + 0x28038,0x10,0x24,0);
      FUN_0002b6f4(uVar3,DAT_00028128 + 0x28054,0x14,0x20,0);
      FUN_0002b6f4(uVar3,DAT_0002812c + 0x28070,0x20,0x14,0);
      FUN_0002b6f4(uVar3,DAT_00028130 + 0x2808c,0x24,0x10,0);
      iVar2 = (int)&DAT_000280ac + DAT_00028134;
      goto LAB_00027d7c;
    }
    iVar1 = strcmp(param_1,(char *)(DAT_000280d8 + 0x27db4));
    if (iVar1 == 0) {
      FUN_00027c20();
      printf((char *)(DAT_000280dc + 0x27dd8),*(undefined4 *)(iVar2 + DAT_000280b0));
      uVar3 = *(undefined4 *)(iVar2 + DAT_000280b8);
      FUN_0002b6f4(uVar3,DAT_000280e0 + 0x27df4,0x800,0,0);
      FUN_0002b6f4(uVar3,DAT_000280e4 + 0x27e18,0,0xe804,0);
      FUN_0002b6f4(uVar3,DAT_000280e8 + 0x27e34,4,0xe800,0);
      FUN_0002b6f4(uVar3,DAT_000280ec + 0x27e50,0,0xa34,0xe000);
      FUN_0002b6f4(uVar3,DAT_000280f0 + 0x27e6c,4,0x230,0xe000);
      FUN_0002b6f4(uVar3,DAT_000280f4 + 0x27e88,0x10,0x24,0);
      FUN_0002b6f4(uVar3,DAT_000280f8 + 0x27ea4,0x14,0x20,0);
      FUN_0002b6f4(uVar3,DAT_000280fc + 0x27ec0,0x20,0x14,0);
      FUN_0002b6f4(uVar3,DAT_00028100 + 0x27edc,0x24,0x10,0);
      FUN_0002b6f4(uVar3,DAT_00028104 + 0x27ef0,0x200,0,0);
      putchar(10);
      uVar3 = avcodec_get_class();
      FUN_0002b898(uVar3,3);
      uVar3 = avformat_get_class();
      FUN_0002b898(uVar3,3);
      uVar3 = sws_get_class();
      FUN_0002b898(uVar3,3);
      uVar3 = swr_get_class();
      FUN_0002b898(uVar3,8);
      uVar3 = avfilter_get_class();
      FUN_0002b898(uVar3,0x10018);
      uVar3 = av_bsf_get_class();
      FUN_0002b898(uVar3,0x118);
      return;
    }
    av_log(0,0x10,DAT_00028108 + 0x27f6c,param_1);
  }
  FUN_00027c20();
  printf((char *)(DAT_000280b4 + 0x27ccc),*(undefined4 *)(iVar2 + DAT_000280b0));
  uVar3 = *(undefined4 *)(iVar2 + DAT_000280b8);
  FUN_0002b6f4(uVar3,DAT_000280bc + 0x27ce8,0x800,0,0);
  FUN_0002b6f4(uVar3,DAT_000280c0 + 0x27d08,0,0xe804,0);
  FUN_0002b6f4(uVar3,DAT_000280c4 + 0x27d2c,0,0xa34,0xe000);
  FUN_0002b6f4(uVar3,DAT_000280c8 + 0x27d44,0x10,0x24,0);
  FUN_0002b6f4(uVar3,DAT_000280cc + 0x27d60,0x20,0x14,0);
  iVar2 = DAT_000280d0 + 0x27d78;
LAB_00027d7c:
  FUN_0002b6f4(uVar3,iVar2,0x200,0,0);
  putchar(10);
  return;
}



/* ===== FUN_00028138 @ 00028138 size=11492 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_00028138(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  undefined4 *puVar13;
  char *pcVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  int extraout_r3;
  int iVar20;
  uint uVar21;
  int *piVar22;
  char *pcVar23;
  char *pcVar24;
  int *piVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  char *pcVar29;
  undefined4 *puVar30;
  uint uVar31;
  int *piVar32;
  int iVar33;
  char *pcVar34;
  undefined4 uVar35;
  uint uVar36;
  int *piVar37;
  undefined4 uVar38;
  undefined4 *puVar39;
  int iVar40;
  uint uVar41;
  int iVar42;
  bool bVar43;
  undefined4 extraout_s1;
  uint uVar44;
  undefined8 uVar45;
  longlong lVar46;
  longlong lVar47;
  int iVar48;
  int *local_388;
  int iStack_384;
  uint local_380;
  int iStack_37c;
  char *local_36c;
  int *local_350;
  int local_34c;
  char local_327;
  byte local_326;
  char local_325;
  int local_324;
  char *local_320;
  char *local_31c;
  char *local_318;
  char *local_314;
  char *local_310;
  char *local_30c;
  undefined4 local_308;
  char *local_304;
  undefined4 local_300;
  char *local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  char *local_2e8 [5];
  char *local_2d4 [5];
  undefined1 auStack_2c0 [32];
  int local_2a0;
  int local_278 [2];
  undefined8 local_270;
  undefined8 local_268;
  undefined4 local_25c;
  undefined4 *local_258;
  int local_254;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  int local_1c8;
  int local_1c4;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  char *local_1a4;
  undefined8 local_1a0;
  undefined8 local_198;
  int local_190;
  int iStack_18c;
  float local_188;
  float local_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  int local_160;
  int local_15c;
  int local_e8;
  int local_e4;
  int local_60;
  int local_5c;
  
  memset(auStack_2c0,0,0x48);
  iVar40 = DAT_000285b8 + 0x28178;
  uVar36 = DAT_000285c0 + 0x282a4;
  iVar48 = 2;
  iVar2 = FUN_0002cf90(auStack_2c0,param_1,param_2,*(undefined4 *)(iVar40 + DAT_000285bc),uVar36,2);
  if (iVar2 < 0) {
    iVar48 = DAT_000285dc + 0x2831c;
  }
  else {
    iVar2 = FUN_0002ce44(0,auStack_2c0);
    if (-1 < iVar2) {
      FUN_00035fd4();
      iVar7 = local_2a0;
      uVar45 = DAT_000285b0;
      if (0 < *(int *)(local_2a0 + 0x14)) {
        iVar26 = 0;
        do {
          iVar20 = *(int *)(iVar7 + 0x10);
          memset(local_278,0,0x240);
          iVar20 = iVar20 + iVar26 * 0x20;
          local_1a4 = (char *)0x7fffffff;
          local_198 = uVar45;
          local_184 = 0.7;
          local_204 = 1;
          local_270 = 0x8000000000000000;
          local_200 = 0xffffffff;
          local_1fc = 0xffffffff;
          local_268 = 0x8000000000000000;
          local_1a0 = uVar45;
          local_190 = -0xffffffff00000001;
          iStack_18c = 3;
          local_278[0] = iVar20;
          iVar2 = FUN_0002ce44(local_278,iVar20);
          if (iVar2 < 0) {
            av_log(0,0x10,DAT_000285d4 + 0x282f0,DAT_000285d0 + 0x282e8,*(undefined4 *)(iVar20 + 4))
            ;
            FUN_0001e064(local_278);
LAB_000282f8:
            av_log(0,8,DAT_000285d8 + 0x2830c);
            goto LAB_0002832c;
          }
          uVar36 = *(uint *)(iVar20 + 4);
          iVar33 = DAT_000285c4 + 0x28210;
          av_log(0,0x30,DAT_000285c8 + 0x2821c,iVar33,uVar36);
          iVar2 = FUN_000233d4(local_278,*(undefined4 *)(iVar20 + 4));
          FUN_0001e064(local_278);
          if (iVar2 < 0) {
            av_log(0,0x10,DAT_0002a894 + 0x2a478,iVar33,*(undefined4 *)(iVar20 + 4));
            goto LAB_000282f8;
          }
          iVar26 = iVar26 + 1;
          av_log(0,0x30,DAT_000285cc + 0x28258);
        } while (iVar26 < *(int *)(iVar7 + 0x14));
      }
      piVar16 = *(int **)(iVar40 + DAT_000285e8);
      iVar2 = *piVar16;
      if (0 < iVar2) {
        iVar7 = DAT_000285f0 + 0x283b4;
        piVar12 = *(int **)(iVar40 + DAT_000285ec);
        iVar26 = DAT_000285f4 + 0x283c0;
        uVar31 = 0;
        do {
          while( true ) {
            piVar37 = *(int **)(*piVar12 + uVar31 * 4);
            uVar41 = piVar37[0xc];
            if (uVar41 != 0xffffffff && uVar41 != uVar31) break;
LAB_00028488:
            uVar31 = uVar31 + 1;
            if (iVar2 <= (int)uVar31) goto LAB_0002857c;
          }
          if (iVar2 <= (int)uVar41 || (int)uVar41 < -1) {
            av_log(0,8,DAT_0002a8e8 + 0x2ad74,uVar31,uVar41,iVar48);
                    /* WARNING: Subroutine does not return */
            FUN_0002b538(1);
          }
          if ((**(int **)(iVar40 + DAT_000285f8) != 0) && (**(int **)(iVar40 + DAT_000285fc) == 0))
          {
            av_log(0,8,DAT_0002a900 + 0x2ae1c,0,uVar36,iVar48);
                    /* WARNING: Subroutine does not return */
            FUN_0002b538(1);
          }
          piVar8 = *(int **)(*piVar12 + uVar41 * 4);
          if (uVar41 != piVar8[0xc] && piVar8[0xc] != 0xffffffff) {
            av_log(0,0x10,DAT_00028608 + 0x286a4,uVar31,uVar41,iVar48);
            iVar2 = *piVar16;
            uVar36 = uVar41;
            goto LAB_00028488;
          }
          iVar2 = *piVar37;
          local_388 = *(int **)(iVar2 + 0x90);
          iStack_384 = *(int *)(iVar2 + 0x94);
          if (iStack_384 != -0x80000000 || local_388 != (int *)0x0) {
            uVar21 = *(uint *)(*piVar8 + 0x90);
            iVar20 = *(int *)(*piVar8 + 0x94);
            if (iVar20 == -0x80000000 && uVar21 == 0) goto LAB_0002852c;
LAB_000283dc:
            uVar27 = piVar37[0x12];
            iVar2 = piVar37[0x13];
            uVar36 = piVar8[0x12];
            if (iVar2 == -0x80000000 && uVar27 == 0) {
              uVar27 = 0;
              iVar2 = 0;
            }
            if (piVar8[0x13] != -0x80000000 || uVar36 != 0) {
              bVar43 = uVar27 < uVar36;
              uVar27 = uVar27 - uVar36;
              iVar2 = iVar2 - (piVar8[0x13] + (uint)bVar43);
            }
            uVar1 = (uint)(**(int **)(iVar40 + DAT_000285f8) == 0);
            uVar27 = uVar27 * uVar1;
            uVar44 = piVar37[0xe];
            uVar28 = ((int)local_388 - uVar21) + uVar27;
            uVar36 = piVar8[10] + uVar28;
            iVar48 = piVar8[0xb] +
                     (iStack_384 - (iVar20 + (uint)(local_388 < uVar21))) + uVar1 * iVar2 +
                     (uint)CARRY4((int)local_388 - uVar21,uVar27) + (uint)CARRY4(piVar8[10],uVar28);
            piVar37[0xe] = uVar44 + uVar36;
            piVar37[0xf] = piVar37[0xf] + iVar48 + (uint)CARRY4(uVar44,uVar36);
            av_log(0,0x20,iVar26,uVar31,uVar36,iVar48,uVar41);
            iVar2 = *piVar16;
            goto LAB_00028488;
          }
LAB_0002852c:
          local_388 = *(int **)(iVar2 + 0x28);
          iStack_384 = *(int *)(iVar2 + 0x2c);
          if (iStack_384 != -0x80000000 || local_388 != (int *)0x0) {
            uVar21 = *(uint *)(*piVar8 + 0x28);
            iVar20 = *(int *)(*piVar8 + 0x2c);
            if (iVar20 != -0x80000000 || uVar21 != 0) goto LAB_000283dc;
          }
          uVar21 = uVar31 + 1;
          av_log(0,0x20,iVar7,uVar31,uVar41,iVar48);
          iVar2 = *piVar16;
          uVar31 = uVar21;
          uVar36 = uVar41;
        } while ((int)uVar21 < iVar2);
      }
LAB_0002857c:
      piVar12 = *(int **)(iVar40 + DAT_00028600);
      if (0 < *piVar12) {
        iVar48 = 0;
        piVar37 = *(int **)(iVar40 + DAT_0002862c);
        do {
          iVar2 = FUN_000171f0(*(undefined4 *)(*piVar37 + iVar48 * 4));
          if (iVar2 < 0) {
            iVar48 = DAT_00028604 + 0x2868c;
            goto LAB_00028318;
          }
          iVar48 = iVar48 + 1;
        } while (iVar48 < *piVar12);
      }
      if (0 < *(int *)(local_2a0 + 8)) {
        local_34c = 0;
        do {
          local_388 = local_278;
          iVar48 = *(int *)(local_2a0 + 4) + local_34c * 0x20;
          memset(local_388,0,0x240);
          local_270 = 0x8000000000000000;
          local_268 = 0x8000000000000000;
          local_184 = 0.7;
          local_190 = -0xffffffff00000001;
          iStack_18c = 3;
          local_198 = 0x7fffffffffffffff;
          local_1a0 = 0x7fffffffffffffff;
          local_1a4 = (char *)0x7fffffff;
          local_204 = 1;
          local_200 = 0xffffffff;
          local_1fc = 0xffffffff;
          local_278[0] = iVar48;
          iVar2 = FUN_0002ce44(local_388,iVar48);
          if (iVar2 < 0) {
            av_log(0,0x10,DAT_0002a8d0 + 0x2acd8,DAT_0002a8cc + 0x2acd0,*(undefined4 *)(iVar48 + 4))
            ;
            FUN_0001e064(local_388);
            av_log(0,8,DAT_0002a8d4 + 0x2acf4);
            goto LAB_0002832c;
          }
          uVar38 = *(undefined4 *)(iVar48 + 4);
          av_log(0,0x30,DAT_00028610 + 0x287b8,DAT_0002860c + 0x287b0,uVar38);
          local_36c = *(char **)(iVar48 + 4);
          local_320 = (char *)0x0;
          if (local_198._4_4_ != 0x7fffffff || (uint)local_198 != 0xffffffff) {
            if (local_1a0._4_4_ == 0x7fffffff && (int)local_1a0 == -1) {
LAB_000287f0:
              uVar36 = (uint)local_270;
              iVar2 = local_270._4_4_;
              if (local_270._4_4_ == -0x80000000 && (uint)local_270 == 0) {
                iVar2 = 0;
                uVar36 = 0;
              }
              if ((int)(iVar2 - (local_198._4_4_ + (uint)(uVar36 < (uint)local_198))) < 0 ==
                  (SBORROW4(iVar2,local_198._4_4_) !=
                  SBORROW4(iVar2 - local_198._4_4_,(uint)(uVar36 < (uint)local_198)))) {
                av_log(0,0x10,DAT_0002a94c + 0x2aff4,iVar2,uVar38);
                    /* WARNING: Subroutine does not return */
                FUN_0002b538(1);
              }
              local_1a0 = CONCAT44(local_198._4_4_ - (iVar2 + (uint)((uint)local_198 < uVar36)),
                                   (uint)local_198 - uVar36);
            }
            else {
              local_198 = 0x7fffffffffffffff;
              av_log(0,0x18,DAT_00029420 + 0x2a1a8,local_1a0._4_4_,uVar38);
              if (local_198._4_4_ != 0x7fffffff || (uint)local_198 != 0xffffffff) {
                if (local_1a0._4_4_ == 0x7fffffff && (int)local_1a0 == -1) goto LAB_000287f0;
              }
            }
          }
          local_388 = local_278;
          piVar22 = *(int **)(iVar40 + DAT_00028614);
          piVar37 = (int *)FUN_0002d75c(*(undefined4 *)(iVar40 + DAT_00028618),0x38,piVar22);
          iVar2 = DAT_0002861c;
          *piVar37 = *piVar22 + -1;
          piVar8 = piVar37 + 3;
          piVar9 = *(int **)(iVar40 + iVar2);
          piVar37[6] = (int)local_1a0;
          piVar37[7] = local_1a0._4_4_;
          iVar2 = *piVar9;
          piVar37[8] = (uint)local_270;
          piVar37[9] = local_270._4_4_;
          uVar38 = *(undefined4 *)(local_278[0] + 0x14);
          piVar37[4] = iVar2;
          piVar37[0xc] = local_180;
          piVar37[10] = local_190;
          piVar37[0xb] = iStack_18c;
          av_dict_copy(piVar8,uVar38,0);
          iVar2 = strcmp(local_36c,(char *)(DAT_00028620 + 0x288cc));
          if (iVar2 == 0) {
            local_36c = (char *)(DAT_00028624 + 0x288dc);
          }
          iVar2 = avformat_alloc_output_context2(&local_324,0,local_25c,local_36c);
          if (local_324 == 0) {
LAB_0002a4e8:
            FUN_0002c1d4(local_36c,iVar2);
                    /* WARNING: Subroutine does not return */
            FUN_0002b538(1);
          }
          iVar2 = *(int *)(local_324 + 8);
          piVar37[2] = local_324;
          piVar37[1] = iVar2;
          if (local_1a0._4_4_ != 0x7fffffff || (int)local_1a0 != -1) {
            *(int *)(local_324 + 0x30) = (int)local_1a0;
            *(int *)(local_324 + 0x34) = local_1a0._4_4_;
          }
          puVar13 = *(undefined4 **)(iVar40 + DAT_00028628);
          uVar38 = puVar13[1];
          *(undefined4 *)(local_324 + 0xa0) = *puVar13;
          *(undefined4 *)(local_324 + 0xa4) = uVar38;
          if (local_17c != 0) {
            *(uint *)(local_324 + 0x48) = *(uint *)(local_324 + 0x48) | 0x400;
          }
          iVar2 = *piVar12;
          if (0 < iVar2) {
            iVar48 = 0;
            piVar32 = *(int **)(iVar40 + DAT_0002862c);
            do {
              iVar26 = *(int *)(*piVar32 + iVar48 * 4);
              iVar7 = *(int *)(iVar26 + 0x20);
              if (0 < iVar7) {
                iVar2 = 0;
                do {
                  while( true ) {
                    iVar20 = *(int *)(*(int *)(iVar26 + 0x1c) + iVar2 * 4);
                    if ((*(int **)(iVar20 + 0x10) == (int *)0x0) || (**(int **)(iVar20 + 0x10) != 0)
                       ) break;
                    iVar7 = *(int *)(iVar20 + 0x14);
                    if (iVar7 == 1) {
                      local_174 = 1;
                    }
                    else if (iVar7 == 3) {
                      local_170 = 1;
                    }
                    else if (iVar7 == 0) {
                      local_178 = 1;
                    }
                    FUN_00027acc(iVar20,local_388,local_324);
                    iVar7 = *(int *)(iVar26 + 0x20);
                    iVar2 = iVar2 + 1;
                    if (iVar7 <= iVar2) goto LAB_00028a14;
                  }
                  iVar2 = iVar2 + 1;
                } while (iVar2 < iVar7);
LAB_00028a14:
                iVar2 = *piVar12;
              }
              iVar48 = iVar48 + 1;
            } while (iVar48 < iVar2);
          }
          iVar48 = DAT_00029400;
          iVar2 = DAT_000293f8;
          if (local_1c4 == 0) {
            if ((local_178 == 0) &&
               (iVar2 = av_guess_codec(*(undefined4 *)(local_324 + 8),0,local_36c,0,0), iVar2 != 0))
            {
              iVar2 = avformat_query_codec
                                (*(int *)(local_324 + 8),
                                 *(undefined4 *)(*(int *)(local_324 + 8) + 0x14),0);
              if (0 < *piVar16) {
                local_380 = -1;
                iVar48 = 0;
                piVar32 = (int *)**(undefined4 **)(iVar40 + DAT_0002a8a4);
                do {
                  piVar25 = piVar32 + 1;
                  iVar7 = *(int *)(*piVar32 + 0x58);
                  if (0 < iVar7) {
                    iVar20 = 0;
                    iVar26 = -1;
                    iVar33 = *(int *)(*piVar32 + 0xc);
                    iVar7 = iVar7 + iVar33;
                    piVar32 = (int *)(**(int **)(iVar40 + DAT_0002a8a8) + iVar33 * 4);
                    if (iVar2 == 0x43495041) {
                      do {
                        iVar11 = *(int *)(*piVar32 + 4);
                        piVar19 = *(int **)(iVar11 + 0xb4);
                        iVar18 = piVar19[0xc] * piVar19[0xd];
                        if ((*(uint *)(iVar11 + 0xa8) & 2) != 0) {
                          iVar18 = iVar18 + 100000000;
                        }
                        if ((*(uint *)(iVar11 + 0x30) & 1) != 0) {
                          iVar18 = iVar18 + 5000000;
                        }
                        if (((*(int *)(*piVar32 + 0xc) != 0x30) &&
                            (*piVar19 == 0 && iVar20 < iVar18)) &&
                           ((*(uint *)(iVar11 + 0x30) & 0x400) != 0)) {
                          iVar26 = iVar33;
                          iVar20 = iVar18;
                        }
                        iVar33 = iVar33 + 1;
                        piVar32 = piVar32 + 1;
                      } while (iVar7 != iVar33);
                      if (-1 < iVar26) {
LAB_0002a74c:
                        if ((*(uint *)(*(int *)(*(int *)(**(int **)(iVar40 + DAT_0002a8a8) +
                                                        iVar26 * 4) + 4) + 0x30) & 1) != 0) {
                          iVar20 = iVar20 + -5000000;
                        }
                        goto LAB_0002a764;
                      }
                    }
                    else {
                      do {
                        iVar11 = *(int *)(*piVar32 + 4);
                        piVar19 = *(int **)(iVar11 + 0xb4);
                        uVar36 = *(uint *)(iVar11 + 0x30);
                        iVar18 = piVar19[0xd] * piVar19[0xc];
                        if ((*(uint *)(iVar11 + 0xa8) & 2) != 0) {
                          iVar18 = iVar18 + 100000000;
                        }
                        if ((uVar36 & 1) != 0) {
                          iVar18 = iVar18 + 5000000;
                        }
                        if (*(int *)(*piVar32 + 0xc) != 0x30) {
                          if ((uVar36 & 0x400) != 0) {
                            iVar18 = 1;
                          }
                          if (*piVar19 == 0 && iVar20 < iVar18) {
                            iVar26 = iVar33;
                            iVar20 = iVar18;
                          }
                        }
                        iVar33 = iVar33 + 1;
                        piVar32 = piVar32 + 1;
                      } while (iVar7 != iVar33);
                      if (-1 < iVar26) {
                        if ((uVar36 & 0x400) == 0) goto LAB_0002a74c;
LAB_0002a764:
                        if (iVar48 < iVar20) {
                          iVar48 = iVar20;
                          local_380 = iVar26;
                        }
                      }
                    }
                  }
                  piVar32 = piVar25;
                } while ((int *)**(undefined4 **)(iVar40 + DAT_0002a8a4) + *piVar16 != piVar25);
                if (local_380 != -1) {
                  FUN_00025454(local_388,local_324,local_380);
                }
              }
            }
            local_388 = local_278;
            if (((local_174 == 0) &&
                (iVar2 = av_guess_codec(*(undefined4 *)(local_324 + 8),0,local_36c,0,1), iVar2 != 0)
                ) && (0 < *piVar16)) {
              local_380 = -1;
              iVar2 = 0;
              piVar32 = (int *)**(int **)(iVar40 + DAT_0002a8a4);
              do {
                piVar25 = piVar32 + 1;
                iVar48 = *(int *)(*piVar32 + 0x58);
                if (0 < iVar48) {
                  iVar20 = *(int *)(*piVar32 + 0xc);
                  iVar26 = 0;
                  iVar7 = -1;
                  iVar48 = iVar48 + iVar20;
                  piVar32 = (int *)(**(int **)(iVar40 + DAT_0002a8a8) + iVar20 * 4);
                  do {
                    iVar11 = *(int *)(*piVar32 + 4);
                    iVar33 = (*(int **)(iVar11 + 0xb4))[0x23];
                    if ((*(uint *)(iVar11 + 0xa8) & 2) != 0) {
                      iVar33 = iVar33 + 100000000;
                    }
                    if ((*(uint *)(iVar11 + 0x30) & 1) != 0) {
                      iVar33 = iVar33 + 5000000;
                    }
                    if ((*(int *)(*piVar32 + 0xc) != 0x30) &&
                       (iVar26 < iVar33 && **(int **)(iVar11 + 0xb4) == 1)) {
                      iVar7 = iVar20;
                      iVar26 = iVar33;
                    }
                    iVar20 = iVar20 + 1;
                    piVar32 = piVar32 + 1;
                  } while (iVar48 != iVar20);
                  if (-1 < iVar7) {
                    if ((*(uint *)(*(int *)(*(int *)(**(int **)(iVar40 + DAT_0002a8a8) + iVar7 * 4)
                                           + 4) + 0x30) & 1) != 0) {
                      iVar26 = iVar26 + -5000000;
                    }
                    if (iVar2 < iVar26) {
                      iVar2 = iVar26;
                      local_380 = iVar7;
                    }
                  }
                }
                piVar32 = piVar25;
              } while ((int *)**(int **)(iVar40 + DAT_0002a8a4) + *piVar16 != piVar25);
              if (local_380 != -1) {
                FUN_0002448c(local_388,local_324);
              }
            }
            if (local_254 < 1) {
              iVar2 = 0;
            }
            else {
              iVar2 = 0;
              puVar6 = local_258 + local_254 * 4;
              pcVar29 = (char *)(DAT_00028630 + 0x28a6c);
              puVar39 = local_258;
              do {
                iVar48 = strcmp((char *)*puVar39,pcVar29);
                puVar30 = puVar39 + 4;
                if (iVar48 == 0) {
                  iVar2 = puVar39[2];
                }
                puVar39 = puVar30;
              } while (puVar6 != puVar30);
            }
            if ((local_170 == 0) &&
               (iVar48 = avcodec_find_encoder(*(undefined4 *)(*(int *)(local_324 + 8) + 0x18)),
               iVar2 != 0 || iVar48 != 0)) {
              piVar32 = *(int **)(iVar40 + DAT_0002a8a0);
              iVar48 = *piVar32;
              if (0 < iVar48) {
                piVar25 = *(int **)(iVar40 + DAT_0002a8a8);
                iVar7 = 0;
                do {
                  local_388 = local_278;
                  piVar19 = *(int **)(*(int *)(*(int *)(*piVar25 + iVar7 * 4) + 4) + 0xb4);
                  if (*piVar19 == 3) {
                    iVar48 = avcodec_descriptor_get(piVar19[1]);
                    iVar26 = avcodec_find_encoder(*(undefined4 *)(*(int *)(local_324 + 8) + 0x18));
                    if (*(int *)(*(int *)(*piVar25 + iVar7 * 4) + 0xc) != 0x30) {
                      if (iVar26 == 0) {
LAB_0002aa04:
                        if (iVar2 == 0) goto LAB_0002a9fc;
                      }
                      else {
                        iVar26 = avcodec_descriptor_get(*(undefined4 *)(iVar26 + 0xc));
                        if (iVar48 == 0) {
                          uVar36 = 0;
                        }
                        else {
                          uVar36 = *(uint *)(iVar48 + 0x10) & 0x30000;
                        }
                        if (iVar26 == 0) goto LAB_0002aa04;
                        if ((iVar2 == 0 && (uVar36 & *(uint *)(iVar26 + 0x10)) == 0) &&
                           ((iVar48 == 0 ||
                            ((*(int *)(iVar48 + 0x10) != 0 && (*(uint *)(iVar26 + 0x10) != 0))))))
                        goto LAB_0002a9fc;
                      }
                      FUN_00020778(local_388,local_324,iVar7);
                      break;
                    }
LAB_0002a9fc:
                    iVar48 = *piVar32;
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 < iVar48);
              }
            }
            if ((local_16c == 0) &&
               (iVar2 = av_guess_codec(*(undefined4 *)(local_324 + 8),0,local_36c,0,2), iVar2 != 0))
            {
              piVar32 = *(int **)(iVar40 + DAT_0002a8a0);
              iVar48 = *piVar32;
              if (0 < iVar48) {
                piVar25 = *(int **)(iVar40 + DAT_0002a8a8);
                iVar7 = 0;
                do {
                  local_388 = local_278;
                  iVar26 = *(int *)(*piVar25 + iVar7 * 4);
                  if (((*(int *)(iVar26 + 0xc) != 0x30) &&
                      (piVar19 = *(int **)(*(int *)(iVar26 + 4) + 0xb4), *piVar19 == 2)) &&
                     (iVar2 == piVar19[1])) {
                    iVar48 = FUN_0001e1a4(local_388,local_324,2,iVar7);
                    if (*(int *)(iVar48 + 0x164) == 0) goto LAB_0002af60;
                    iVar48 = *piVar32;
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 < iVar48);
              }
            }
          }
          else if (0 < local_1c4) {
            iVar33 = 0;
            iVar11 = 0;
            iVar26 = DAT_000293fc + 0x29d00;
            iVar20 = DAT_00029400 + 0x29d0c;
            iVar7 = local_1c4;
            do {
              local_388 = local_278;
              iVar18 = local_1c8 + iVar33;
              if (*(int *)(local_1c8 + iVar33) != 0) goto LAB_00029e38;
              pcVar29 = *(char **)(iVar18 + 0x14);
              if (pcVar29 != (char *)0x0) {
                iVar7 = *piVar12;
                if (0 < iVar7) {
                  piVar32 = (int *)(**(int **)(iVar40 + DAT_00029408) + -4);
                  iVar18 = 0;
                  do {
                    piVar32 = piVar32 + 1;
                    iVar5 = *(int *)(*piVar32 + 0x20);
                    if (0 < iVar5) {
                      iVar15 = 0;
                      piVar25 = (int *)(*(int *)(*piVar32 + 0x1c) + -4);
                      do {
                        piVar25 = piVar25 + 1;
                        iVar17 = *piVar25;
                        puVar39 = *(undefined4 **)(iVar17 + 0x10);
                        if ((puVar39 != (undefined4 *)0x0) &&
                           (iVar42 = strcmp((char *)*puVar39,pcVar29), iVar42 == 0)) {
                          FUN_00027acc(iVar17,local_388,local_324);
                          iVar7 = local_1c4;
                          goto LAB_00029e38;
                        }
                        iVar15 = iVar15 + 1;
                      } while (iVar15 != iVar5);
                    }
                    iVar18 = iVar18 + 1;
                  } while (iVar18 != iVar7);
                }
                iVar2 = DAT_0002940c + 0x29fc0;
                goto LAB_00029fbc;
              }
              iVar17 = *(int *)(iVar18 + 4);
              piVar25 = *(int **)(iVar40 + DAT_00029424);
              piVar32 = *(int **)(iVar40 + DAT_00029414);
              iVar42 = *(int *)(iVar18 + 8);
              iVar15 = iVar42 + *(int *)(*(int *)(*piVar25 + iVar17 * 4) + 0xc);
              iVar5 = *(int *)(*piVar32 + iVar15 * 4);
              if (*(int *)(iVar5 + 0xc) == 0x30) {
                av_log(0,8,DAT_0002a904 + 0x2ae3c,iVar17,iVar42);
                    /* WARNING: Subroutine does not return */
                FUN_0002b538(1);
              }
              iVar5 = **(int **)(*(int *)(iVar5 + 4) + 0xb4);
              if (((((local_170 != 0) && (iVar5 == 3)) || ((local_174 != 0 && (iVar5 == 1)))) ||
                  ((local_178 != 0 && (iVar5 == 0)))) || ((local_16c != 0 && (iVar5 == 2))))
              goto LAB_00029e38;
              switch(iVar5) {
              case 0:
                iVar5 = FUN_00025454(local_388,local_324);
                goto LAB_00029e58;
              case 1:
                iVar5 = FUN_0002448c(local_388,local_324);
                goto LAB_00029e58;
              case 2:
                iVar5 = FUN_0001e1a4(local_388,local_324,2,iVar15);
                if (*(int *)(iVar5 + 0x164) == 0) goto LAB_0002af60;
                break;
              case 3:
                iVar5 = FUN_00020778(local_388,local_324);
LAB_00029e58:
                iVar7 = local_1c4;
                if (iVar5 != 0) break;
                goto LAB_00029e38;
              case 4:
                iVar5 = FUN_0001e1a4(local_388,local_324,4,iVar15);
                *(undefined4 *)(iVar5 + 0x164) = 1;
                *(undefined4 *)(iVar5 + 0x15c) = 1;
                break;
              case -1:
                if (*(int *)(DAT_00029404 + 0x29ed0) == 0) goto switchD_00029dd0_default;
                iVar5 = FUN_0001e1a4(local_388,local_324,0xffffffff,iVar15);
                if (*(int *)(iVar5 + 0x164) == 0) {
                  av_log(0,8,DAT_0002a89c + 0x2a5f8);
                    /* WARNING: Subroutine does not return */
                  FUN_0002b538(1);
                }
                break;
              default:
switchD_00029dd0_default:
                if (*(int *)(iVar2 + 0x29d0c) == 0) {
                  uVar38 = 8;
                }
                else {
                  uVar38 = 0x18;
                }
                av_log(0,uVar38,iVar26,iVar17,iVar42);
                iVar7 = local_1c4;
                if (*(int *)(iVar48 + 0x29d24) == 0) {
                  av_log(0,8,DAT_0002a938 + 0x2af3c,iVar20,iVar42);
                    /* WARNING: Subroutine does not return */
                  FUN_0002b538(1);
                }
                goto LAB_00029e38;
              }
              *(undefined4 *)(iVar5 + 0x20) =
                   *(undefined4 *)
                    (*piVar32 +
                    (*(int *)(*(int *)(*piVar25 + *(int *)(iVar18 + 0xc) * 4) + 0xc) +
                    *(int *)(iVar18 + 0x10)) * 4);
              iVar7 = local_1c4;
LAB_00029e38:
              iVar11 = iVar11 + 1;
              iVar33 = iVar33 + 0x18;
            } while (iVar11 < iVar7);
          }
          local_388 = local_278;
          if (0 < local_1a8) {
            iVar2 = 0;
            iVar48 = DAT_00028634 + 0x28ac4;
            do {
              iVar7 = iVar2 * 4;
              iVar26 = avio_open2(local_2d4,*(undefined4 *)(local_1ac + iVar2 * 4),1,puVar13,0);
              if (iVar26 < 0) {
                iVar2 = DAT_0002a8e4 + 0x2ad5c;
LAB_0002ad18:
                av_log(0,8,iVar2,*(undefined4 *)(local_1ac + iVar7));
                    /* WARNING: Subroutine does not return */
                FUN_0002b538(1);
              }
              uVar45 = avio_size(local_2d4[0]);
              iVar26 = (int)((ulonglong)uVar45 >> 0x20);
              uVar36 = (uint)uVar45;
              if (iVar26 < (int)(uint)(uVar36 == 0)) {
                iVar2 = DAT_0002a8e0 + 0x2ad48;
                goto LAB_0002ad18;
              }
              if (((int)-(iVar26 + (uint)(0x7fffffbf < uVar36)) < 0 !=
                   (SBORROW4(0,iVar26) != SBORROW4(-iVar26,(uint)(0x7fffffbf < uVar36)))) ||
                 (iVar26 = av_malloc(uVar36 + 0x40), iVar26 == 0)) {
                iVar2 = DAT_0002a8dc + 0x2ad1c;
                goto LAB_0002ad18;
              }
              avio_read(local_2d4[0],iVar26,uVar36);
              uVar38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
              uVar10 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
              uVar35 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
              puVar39 = (undefined4 *)(iVar26 + uVar36);
              *puVar39 = 0;
              puVar39[1] = uVar38;
              puVar39[2] = uVar10;
              puVar39[3] = uVar35;
              puVar39[4] = 0;
              puVar39[5] = uVar38;
              puVar39[6] = uVar10;
              puVar39[7] = uVar35;
              puVar39[8] = 0;
              puVar39[9] = uVar38;
              puVar39[10] = uVar10;
              puVar39[0xb] = uVar35;
              puVar39[0xc] = 0;
              puVar39[0xd] = uVar38;
              puVar39[0xe] = uVar10;
              puVar39[0xf] = uVar35;
              iVar20 = FUN_0001e1a4(local_388,local_324,4,0xffffffff);
              iVar33 = *(int *)(iVar20 + 0xc);
              *(undefined4 *)(iVar20 + 0x170) = *(undefined4 *)(local_1ac + iVar7);
              pcVar34 = *(char **)(local_1ac + iVar7);
              iVar7 = *(int *)(iVar33 + 0xb4);
              *(undefined4 *)(iVar20 + 0x15c) = 1;
              *(undefined4 *)(iVar20 + 0x164) = 0;
              *(int *)(iVar7 + 0xc) = iVar26;
              *(uint *)(iVar7 + 0x10) = uVar36;
              pcVar29 = strrchr(pcVar34,0x2f);
              if ((pcVar29 != (char *)0x0) && (*pcVar29 != '\0')) {
                pcVar34 = pcVar29 + 1;
              }
              av_dict_set(iVar33 + 0x40,iVar48,pcVar34,0x10);
              avio_closep(local_2d4);
              iVar2 = iVar2 + 1;
            } while (iVar2 < local_1a8);
          }
          if ((*(int *)(local_324 + 0x18) == 0) &&
             ((*(uint *)(*(int *)(local_324 + 8) + 0x1c) & 0x1000) == 0)) {
            av_dump_format(local_324,*piVar22 + -1,*(undefined4 *)(local_324 + 0x20),1);
            av_log(0,0x10,DAT_0002a944 + 0x2afbc,*piVar22 + -1);
                    /* WARNING: Subroutine does not return */
            FUN_0002b538(1);
          }
          puVar13 = (undefined4 *)0x0;
          iVar2 = DAT_00028638 + 0x28c34;
          uVar38 = *(undefined4 *)(local_278[0] + 0x10);
          local_2d4[0] = (char *)0x0;
          while (puVar13 = (undefined4 *)av_dict_get(uVar38,iVar2,puVar13,2),
                puVar13 != (undefined4 *)0x0) {
            pcVar34 = (char *)*puVar13;
            pcVar29 = strchr(pcVar34,0x3a);
            if (pcVar29 == (char *)0x0) {
              av_dict_set(local_2d4,pcVar34,puVar13[1],0);
            }
            else {
              *pcVar29 = '\0';
              av_dict_set(local_2d4,*puVar13,puVar13[1]);
              *pcVar29 = ':';
            }
          }
          iVar48 = piVar37[4];
          local_320 = local_2d4[0];
          if (iVar48 < *piVar9) {
            piVar32 = *(int **)(iVar40 + DAT_00028648);
            do {
              puVar13 = (undefined4 *)0x0;
              while (puVar13 = (undefined4 *)
                               av_dict_get(*(undefined4 *)(*(int *)(*piVar32 + iVar48 * 4) + 0x14c),
                                           iVar2,puVar13,2), puVar13 != (undefined4 *)0x0) {
                av_dict_set(&local_320,*puVar13,0);
              }
              iVar48 = iVar48 + 1;
            } while (iVar48 < *piVar9);
          }
          iVar48 = DAT_0002863c + 0x28d40;
          pcVar29 = (char *)(DAT_00028640 + 0x28d44);
          iVar2 = DAT_00028644 + 0x28d4c;
          puVar13 = (undefined4 *)0x0;
          while (puVar13 = (undefined4 *)av_dict_get(local_320,iVar48,puVar13,2),
                puVar13 != (undefined4 *)0x0) {
            local_2e8[0] = (char *)avcodec_get_class();
            iVar7 = av_opt_find(local_2e8,*puVar13,0,0,3);
            local_2d4[0] = (char *)avformat_get_class();
            iVar26 = av_opt_find(local_2d4,*puVar13,0,0,3);
            if (iVar7 != 0 && iVar26 == 0) {
              pcVar34 = (char *)*puVar13;
              if ((*(uint *)(iVar7 + 0x28) & 1) == 0) {
                iVar2 = *(int *)(iVar7 + 4);
                if (*(int *)(iVar7 + 4) == 0) {
                  iVar2 = iVar48;
                }
                av_log(0,0x10,DAT_0002a8fc + 0x2adfc,pcVar34,iVar2,*piVar22 + -1,local_36c);
                    /* WARNING: Subroutine does not return */
                FUN_0002b538(1);
              }
              iVar26 = strcmp(pcVar34,pcVar29);
              if (iVar26 != 0) {
                iVar26 = *(int *)(iVar7 + 4);
                if (*(int *)(iVar7 + 4) == 0) {
                  iVar26 = iVar48;
                }
                av_log(0,0x18,iVar2,pcVar34,iVar26,*piVar22 + -1,local_36c);
              }
            }
          }
          av_dict_free(&local_320);
          iVar2 = piVar37[4];
          if (iVar2 < *piVar9) {
            piVar32 = *(int **)(iVar40 + DAT_00028648);
LAB_00028f1c:
            iVar48 = *(int *)(*piVar32 + iVar2 * 4);
            if (*(int *)(iVar48 + 0x10) == 0) {
              if ((*(int *)(iVar48 + 0x164) != 0) && (-1 < *(int *)(iVar48 + 8))) {
                *(undefined4 *)
                 (*(int *)(**(int **)(iVar40 + DAT_0002864c) + *(int *)(iVar48 + 8) * 4) + 0x14) = 1
                ;
              }
            }
            else if (-1 < *(int *)(iVar48 + 8)) {
              uVar36 = **(uint **)(*(int *)(iVar48 + 0xc) + 0xb4);
              puVar13 = *(undefined4 **)
                         (**(int **)(iVar40 + DAT_0002864c) + *(int *)(iVar48 + 8) * 4);
              puVar13[5] = 1;
              puVar13[4] = puVar13[4] | 1;
              if ((uVar36 < 2) && (iVar7 = FUN_000170e4(puVar13,iVar48), iVar7 < 0)) {
                av_log(0,0x10,DAT_000293b8 + 0x29220,*puVar13,*(undefined4 *)(iVar48 + 8),
                       *piVar22 + -1,**(undefined4 **)(iVar48 + 0xc));
                    /* WARNING: Subroutine does not return */
                FUN_0002b538(1);
              }
            }
            iVar7 = *(int *)(iVar48 + 0x13c);
            if (iVar7 != 0) {
              iVar26 = *(int *)(iVar48 + 0x54);
              if (*(int *)(iVar26 + 8) == 0) {
                iVar20 = *(int *)(iVar26 + 0x70);
                uVar10 = *(undefined4 *)(iVar26 + 0x5c);
                bVar43 = iVar20 == -1;
                uVar35 = *(undefined4 *)(iVar26 + 0x60);
                uVar38 = *(undefined4 *)(iVar48 + 0xa0);
                puVar13 = (undefined4 *)(iVar7 + 0x20);
                if (bVar43) {
                  puVar13 = *(undefined4 **)(iVar48 + 0x5c);
                }
                iVar2 = iVar2 + 1;
                *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(iVar48 + 0x9c);
                *(undefined4 *)(iVar7 + 0x24) = uVar38;
                if (bVar43) {
                  puVar13 = (undefined4 *)puVar13[7];
                }
                else {
                  *(int *)(iVar7 + 0x28) = iVar20;
                }
                *(undefined4 *)(iVar7 + 0x18) = uVar10;
                if (bVar43) {
                  *(undefined4 **)(iVar7 + 0x48) = puVar13;
                }
                *(undefined4 *)(iVar7 + 0x1c) = uVar35;
                if (*piVar9 <= iVar2) goto LAB_00028fac;
                goto LAB_00028f1c;
              }
              if (*(int *)(iVar26 + 8) != 1) goto LAB_00028f0c;
              if (*(int *)(iVar26 + 0x138) == -1) {
                *(undefined4 *)(iVar7 + 0x48) = *(undefined4 *)(*(int *)(iVar48 + 0x5c) + 0x24);
              }
              else {
                *(int *)(iVar7 + 0x28) = *(int *)(iVar26 + 0x138);
              }
              if (*(int *)(iVar26 + 0x130) == 0) {
                *(undefined4 *)(iVar7 + 0x50) = *(undefined4 *)(*(int *)(iVar48 + 0x5c) + 0x20);
              }
              else {
                *(int *)(iVar7 + 0x2c) = *(int *)(iVar26 + 0x130);
              }
              if (*(int *)(iVar26 + 0x314) == 0) {
                iVar48 = *(int *)(*(int *)(iVar48 + 0x5c) + 0x38);
                if (iVar48 != 0) {
                  *(int *)(iVar7 + 0x4c) = iVar48;
                }
              }
              else if (*(int *)(iVar26 + 0x310) == 0) {
                iVar48 = *(int *)(*(int *)(iVar48 + 0x5c) + 0x38);
                if (iVar48 != 0) {
                  iVar20 = *(int *)(iVar48 + 4);
                  while (iVar20 != 0) {
                    if (iVar20 == *(int *)(iVar26 + 0x314)) {
                      iVar48 = av_channel_layout_copy(iVar7 + 0x30,iVar48);
                      goto joined_r0x0002a454;
                    }
                    iVar20 = *(int *)(iVar48 + 0x1c);
                    iVar48 = iVar48 + 0x18;
                  }
                }
                av_channel_layout_default();
              }
              else {
                iVar48 = av_channel_layout_copy(iVar7 + 0x30,iVar26 + 0x310);
joined_r0x0002a454:
                if (iVar48 < 0) goto LAB_00029cac;
              }
            }
LAB_00028f0c:
            iVar2 = iVar2 + 1;
            if (*piVar9 <= iVar2) goto LAB_00028fac;
            goto LAB_00028f1c;
          }
LAB_00028fac:
          puVar13 = *(undefined4 **)(local_324 + 8);
          uVar36 = puVar13[7];
          if ((uVar36 & 2) != 0) {
            iVar2 = av_filename_number_test(*(undefined4 *)(local_324 + 0x20));
            if (iVar2 == 0) goto LAB_0002af64;
            puVar13 = *(undefined4 **)(local_324 + 8);
            uVar36 = puVar13[7];
          }
          if ((uVar36 & 0x1000) == 0 && *(int *)(DAT_00028650 + 0x28fd0) == 0) {
            av_log(0,0x10,DAT_0002a948 + 0x2afd8);
                    /* WARNING: Subroutine does not return */
            FUN_0002b538(1);
          }
          if ((uVar36 & 1) == 0) {
            FUN_0001bbf4(local_36c);
            iVar2 = avio_open2(local_324 + 0x10,local_36c,2,local_324 + 0xa0,piVar8);
            if (iVar2 < 0) goto LAB_0002a4e8;
          }
          else {
            iVar2 = strcmp((char *)*puVar13,(char *)(DAT_00028654 + 0x28ff0));
            if ((iVar2 == 0) && (iVar2 = av_filename_number_test(local_36c), iVar2 == 0)) {
              FUN_0001bbf4(local_36c);
            }
          }
          if (local_188 != 0.0) {
            uVar45 = FUN_0003f8b4(local_188 * DAT_0002a890);
            av_dict_set_int(piVar8,DAT_0002a898 + 0x2a52c,(int)uVar45,
                            (int)((ulonglong)uVar45 >> 0x20),0);
          }
          *(int *)(local_324 + 0x44) = (int)(local_184 * DAT_000293b4);
          if (0 < local_e4) {
            iVar2 = 0;
LAB_00029040:
            pcVar29 = (char *)strtol(*(char **)(local_e8 + iVar2 * 0x10 + 8),&local_31c,0);
            iVar48 = local_324;
            if (*piVar16 <= (int)pcVar29) {
              iVar2 = DAT_0002a8f0 + 0x2ada8;
              goto LAB_00029fbc;
            }
            pcVar23 = *(char **)(local_e8 + iVar2 * 0x10);
            pcVar34 = local_31c;
            if (*local_31c != '\0') {
              pcVar34 = local_31c + 1;
            }
            if ((int)pcVar29 < 0) {
              local_300 = 0;
              local_2fc = (char *)0x0;
              local_2e8[0] = (char *)0x0;
              local_2d4[0] = (char *)0x0;
              FUN_0001df4c(pcVar34,&local_326,local_2e8,&local_300);
              FUN_0001df4c(pcVar23,&local_325,local_2d4,&local_2fc);
LAB_000297a8:
              if ((local_325 == 'g') || (*pcVar23 == '\0')) {
                local_1b8 = 1;
              }
              if (local_325 == 's') {
                local_1b4 = 1;
LAB_00029800:
                local_1b4 = 1;
                if (*pcVar23 == '\0') goto LAB_000297ec;
              }
              else {
                if (*pcVar23 == '\0') {
                  local_1b4 = 1;
                  if (local_325 != 'c') goto LAB_00029800;
                }
                else if (local_325 != 'c') goto LAB_00029348;
LAB_000297ec:
                local_1b0 = 1;
              }
              goto LAB_00029348;
            }
            iVar7 = **(int **)(**(int **)(iVar40 + DAT_00029424) + (int)pcVar29 * 4);
            local_300 = 0;
            local_2fc = (char *)0x0;
            local_2e8[0] = (char *)0x0;
            local_2d4[0] = (char *)0x0;
            FUN_0001df4c(pcVar34,&local_326,local_2e8,&local_300);
            FUN_0001df4c(pcVar23,&local_325,local_2d4,&local_2fc);
            if (iVar7 == 0) goto LAB_000297a8;
            if ((local_326 == 0x67) || (local_325 == 'g')) {
              local_1b8 = 1;
            }
            if ((local_326 == 0x73) || (local_325 == 's')) {
              local_1b4 = 1;
              if (local_326 != 99) goto LAB_0002911c;
LAB_00029758:
              local_1b0 = 1;
            }
            else {
              if (local_326 == 99) goto LAB_00029758;
LAB_0002911c:
              if (local_325 == 'c') goto LAB_00029758;
            }
            switch(local_326) {
            case 99:
              if (((int)local_2e8[0] < 0) || (*(char **)(iVar7 + 0x84) <= local_2e8[0])) {
                av_log(0,8,DAT_0002a90c + 0x2ae64,DAT_0002a908 + 0x2ae60,local_2e8[0]);
                    /* WARNING: Subroutine does not return */
                FUN_0002b538(1);
              }
              puVar13 = (undefined4 *)
                        (*(int *)(*(int *)(iVar7 + 0x88) + (int)local_2e8[0] * 4) + 0x20);
              goto LAB_000292b0;
            case 100:
              break;
            case 0x65:
              break;
            case 0x66:
              break;
            case 0x67:
              puVar13 = (undefined4 *)(iVar7 + 0x8c);
              goto LAB_000292b0;
            case 0x68:
              break;
            case 0x69:
              break;
            case 0x6a:
              break;
            case 0x6b:
              break;
            case 0x6c:
              break;
            case 0x6d:
              break;
            case 0x6e:
              break;
            case 0x6f:
              break;
            case 0x70:
              if (((int)local_2e8[0] < 0) || (*(char **)(iVar7 + 0x68) <= local_2e8[0])) {
                av_log(0,8,DAT_0002a924 + 0x2aedc,DAT_0002a920 + 0x2aed8,local_2e8[0]);
                    /* WARNING: Subroutine does not return */
                FUN_0002b538(1);
              }
              puVar13 = (undefined4 *)
                        (*(int *)(*(int *)(iVar7 + 0x6c) + (int)local_2e8[0] * 4) + 0x14);
LAB_000292b0:
              switch(local_325) {
              case 'c':
LAB_00029530:
                if (((int)local_2d4[0] < 0) || (*(char **)(iVar48 + 0x84) <= local_2d4[0])) {
                  av_log(0,8,DAT_0002a914 + 0x2ae8c,DAT_0002a910 + 0x2ae88,local_2d4[0]);
                    /* WARNING: Subroutine does not return */
                  FUN_0002b538(1);
                }
                iVar26 = *(int *)(*(int *)(iVar48 + 0x88) + (int)local_2d4[0] * 4) + 0x20;
                goto joined_r0x00029510;
              case 'd':
                break;
              case 'e':
                break;
              case 'f':
                break;
              case 'g':
                iVar26 = iVar48 + 0x8c;
                goto joined_r0x00029510;
              case 'h':
                break;
              case 'i':
                break;
              case 'j':
                break;
              case 'k':
                break;
              case 'l':
                break;
              case 'm':
                break;
              case 'n':
                break;
              case 'o':
                break;
              case 'p':
LAB_0002930c:
                if (((int)local_2d4[0] < 0) || (*(char **)(iVar48 + 0x68) <= local_2d4[0])) {
                  av_log(0,8,DAT_0002a91c + 0x2aeb4,DAT_0002a918 + 0x2aeb0,local_2d4[0]);
                    /* WARNING: Subroutine does not return */
                  FUN_0002b538(1);
                }
                iVar26 = *(int *)(*(int *)(iVar48 + 0x6c) + (int)local_2d4[0] * 4) + 0x14;
joined_r0x00029510:
                if (local_326 == 0x73) {
                  if (*(int *)(iVar7 + 0x18) != 0) {
LAB_00029594:
                    uVar36 = 0;
                    do {
                      iVar20 = FUN_0002c49c(iVar7,*(undefined4 *)
                                                   (*(int *)(iVar7 + 0x1c) + uVar36 * 4),local_300);
                      if (0 < iVar20) {
                        puVar13 = (undefined4 *)
                                  (*(int *)(*(int *)(iVar7 + 0x1c) + uVar36 * 4) + 0x40);
                        break;
                      }
                      if (iVar20 != 0) goto LAB_00029cac;
                      uVar36 = uVar36 + 1;
                    } while (uVar36 < *(uint *)(iVar7 + 0x18));
                  }
                  if (puVar13 == (undefined4 *)0x0) {
LAB_0002aee4:
                    av_log(0,8,DAT_0002a928 + 0x2aefc,local_300);
                    /* WARNING: Subroutine does not return */
                    FUN_0002b538(1);
                  }
                  if (local_325 != 's') goto LAB_00029338;
LAB_000295f8:
                  if (*(int *)(iVar48 + 0x18) != 0) {
                    uVar36 = 0;
                    do {
                      iVar7 = FUN_0002c49c(iVar48,*(undefined4 *)
                                                   (*(int *)(iVar48 + 0x1c) + uVar36 * 4),local_2fc)
                      ;
                      if (iVar7 < 1) {
                        if (iVar7 != 0) goto LAB_00029cac;
                      }
                      else {
                        av_dict_copy(*(int *)(*(int *)(iVar48 + 0x1c) + uVar36 * 4) + 0x40,*puVar13,
                                     0x10);
                      }
                      uVar36 = uVar36 + 1;
                    } while (uVar36 < *(uint *)(iVar48 + 0x18));
                  }
                }
                else {
LAB_00029338:
                  av_dict_copy(iVar26,*puVar13,0x10);
                }
LAB_00029348:
                iVar2 = iVar2 + 1;
                if (local_e4 <= iVar2) goto LAB_00029358;
                goto LAB_00029040;
              case 'q':
                break;
              case 'r':
                break;
              case 's':
                goto LAB_000295f8;
              }
switchD_00029240_default:
              av_log(0,0,DAT_0002a8c8 + 0x2ac94,DAT_0002a8c4 + 0x2ac90,DAT_0002a8c0 + 0x2ac80,0x304)
              ;
                    /* WARNING: Subroutine does not return */
              abort();
            case 0x71:
              break;
            case 0x72:
              break;
            case 0x73:
              switch(local_325) {
              case 'c':
                puVar13 = (undefined4 *)0x0;
                goto LAB_00029530;
              case 'd':
                break;
              case 'e':
                break;
              case 'f':
                break;
              case 'g':
                iVar26 = iVar48 + 0x8c;
                if (*(int *)(iVar7 + 0x18) == 0) goto LAB_0002aee4;
                puVar13 = (undefined4 *)0x0;
                goto LAB_00029594;
              case 'h':
                break;
              case 'i':
                break;
              case 'j':
                break;
              case 'k':
                break;
              case 'l':
                break;
              case 'm':
                break;
              case 'n':
                break;
              case 'o':
                break;
              case 'p':
                puVar13 = (undefined4 *)0x0;
                goto LAB_0002930c;
              case 'q':
                break;
              case 'r':
                break;
              case 's':
                if (*(int *)(iVar7 + 0x18) == 0) goto LAB_0002aee4;
                puVar13 = (undefined4 *)0x0;
                iVar26 = 0;
                goto LAB_00029594;
              }
              goto switchD_00029240_default;
            }
            av_log(0,0,DAT_0002a8bc + 0x2ac64,DAT_0002a8b8 + 0x2ac60,DAT_0002a8b4 + 0x2ac50,0x303);
                    /* WARNING: Subroutine does not return */
            abort();
          }
LAB_00029358:
          iVar48 = local_1b0;
          iVar2 = local_324;
          pcVar29 = (char *)*piVar16;
          if ((int)local_1a4 < (int)pcVar29) {
            if (-1 < (int)local_1a4) {
              local_350 = *(int **)(**(int **)(iVar40 + DAT_00029424) + (int)local_1a4 * 4);
              iVar26 = *local_350;
              iVar7 = *(int *)(iVar26 + 0x84);
              pcVar34 = local_1a4;
              goto LAB_0002a1fc;
            }
          }
          else {
            if (local_1a4 != (char *)0x7fffffff) {
              iVar2 = DAT_0002a940 + 0x2af84;
              pcVar29 = local_1a4;
LAB_00029fbc:
              av_log(0,8,iVar2,pcVar29);
LAB_00029cac:
                    /* WARNING: Subroutine does not return */
              FUN_0002b538(1);
            }
            local_1a4 = (char *)0xffffffff;
            if (0 < (int)pcVar29) {
              piVar8 = *(int **)(iVar40 + DAT_00029424);
              puVar13 = (undefined4 *)*piVar8;
              local_350 = (int *)*puVar13;
              iVar26 = *local_350;
              iVar7 = *(int *)(iVar26 + 0x84);
              if (iVar7 == 0) {
                pcVar34 = (char *)0x0;
                do {
                  pcVar34 = pcVar34 + 1;
                  if (pcVar29 == pcVar34) {
                    if (local_1b8 == 0) goto LAB_00029698;
                    goto LAB_00029454;
                  }
                  puVar13 = puVar13 + 1;
                  local_350 = (int *)*puVar13;
                  iVar26 = *local_350;
                  iVar7 = *(int *)(iVar26 + 0x84);
                } while (iVar7 == 0);
              }
              else {
                pcVar34 = (char *)0x0;
              }
LAB_0002a1fc:
              local_1a4 = pcVar34;
              iVar7 = av_realloc_f(*(undefined4 *)(local_324 + 0x88),
                                   iVar7 + *(int *)(local_324 + 0x84),4);
              if (iVar7 != 0) {
                uVar36 = *(uint *)(iVar26 + 0x84);
                *(int *)(iVar2 + 0x88) = iVar7;
                if (uVar36 != 0) {
                  uVar31 = 0;
                  do {
                    local_380 = piVar37[8];
                    iStack_37c = piVar37[9];
                    puVar13 = *(undefined4 **)(*(int *)(iVar26 + 0x88) + uVar31 * 4);
                    if (iStack_37c == -0x80000000 && local_380 == 0) {
                      local_380 = 0;
                      iStack_37c = 0;
                    }
                    puVar39 = puVar13 + 2;
                    local_2f8 = 1;
                    local_2f4 = 1000000;
                    lVar47 = av_rescale_q(local_380 - local_350[0xe],
                                          iStack_37c -
                                          (local_350[0xf] + (uint)(local_380 < (uint)local_350[0xe])
                                          ),1,1000000,*puVar39,puVar13[3]);
                    iVar7 = (int)((ulonglong)lVar47 >> 0x20);
                    uVar41 = (uint)lVar47;
                    uVar21 = puVar13[6];
                    iVar20 = puVar13[7];
                    if (piVar37[7] == 0x7fffffff && piVar37[6] == -1) {
                      if ((int)(iVar20 - (iVar7 + (uint)(uVar21 < uVar41))) < 0 ==
                          (SBORROW4(iVar20,iVar7) !=
                          SBORROW4(iVar20 - iVar7,(uint)(uVar21 < uVar41)))) {
LAB_0002a41c:
                        lVar46 = 0x7fffffffffffffff;
LAB_0002a2c4:
                        iVar20 = (int)((ulonglong)lVar46 >> 0x20);
                        puVar6 = (undefined4 *)av_mallocz(0x28);
                        if (puVar6 == (undefined4 *)0x0) break;
                        uVar35 = puVar13[1];
                        uVar36 = puVar13[4];
                        iVar18 = puVar13[5];
                        uVar38 = *puVar39;
                        uVar10 = puVar13[3];
                        *puVar6 = *puVar13;
                        puVar6[1] = uVar35;
                        iVar33 = uVar36 - uVar41;
                        iVar18 = iVar18 - (iVar7 + (uint)(uVar36 < uVar41));
                        puVar6[2] = uVar38;
                        puVar6[3] = uVar10;
                        uVar36 = puVar13[6];
                        iVar11 = puVar13[7];
                        if (iVar18 < 0) {
                          iVar33 = 0;
                          iVar18 = 0;
                        }
                        puVar6[4] = iVar33;
                        puVar6[5] = iVar18;
                        uVar21 = uVar36 - uVar41;
                        iVar11 = iVar11 - (iVar7 + (uint)(uVar36 < uVar41));
                        bVar43 = (uint)lVar46 < uVar21;
                        lVar47 = CONCAT44(iVar11,uVar21);
                        if ((int)(iVar20 - (iVar11 + (uint)bVar43)) < 0 !=
                            (SBORROW4(iVar20,iVar11) != SBORROW4(iVar20 - iVar11,(uint)bVar43))) {
                          lVar47 = lVar46;
                        }
                        *(longlong *)(puVar6 + 6) = lVar47;
                        if (iVar48 == 0) {
                          av_dict_copy(puVar6 + 8,puVar13[8],0);
                        }
                        iVar7 = *(int *)(iVar2 + 0x84);
                        *(int *)(iVar2 + 0x84) = iVar7 + 1;
                        uVar36 = *(uint *)(iVar26 + 0x84);
                        *(undefined4 **)(*(int *)(iVar2 + 0x88) + iVar7 * 4) = puVar6;
                      }
                    }
                    else {
                      local_2f0 = 1;
                      local_2ec = 1000000;
                      if ((int)(iVar20 - (iVar7 + (uint)(uVar21 < uVar41))) < 0 ==
                          (SBORROW4(iVar20,iVar7) !=
                          SBORROW4(iVar20 - iVar7,(uint)(uVar21 < uVar41)))) {
                        lVar46 = av_rescale_q(piVar37[6],piVar37[7],1,1000000,*puVar39,puVar13[3]);
                        if (lVar46 == 0x7fffffffffffffff) goto LAB_0002a41c;
                        iVar33 = puVar13[5];
                        iVar20 = (int)((ulonglong)(lVar47 + lVar46) >> 0x20);
                        bVar43 = (uint)(lVar47 + lVar46) < (uint)puVar13[4];
                        if ((int)(iVar20 - (iVar33 + (uint)bVar43)) < 0 ==
                            (SBORROW4(iVar20,iVar33) != SBORROW4(iVar20 - iVar33,(uint)bVar43)))
                        goto LAB_0002a2c4;
                        break;
                      }
                      uVar36 = *(uint *)(iVar26 + 0x84);
                    }
                    uVar31 = uVar31 + 1;
                  } while (uVar31 < uVar36);
                }
              }
            }
          }
          if ((local_1b8 == 0) && (*piVar16 != 0)) {
            piVar8 = *(int **)(iVar40 + DAT_00029424);
LAB_00029698:
            av_dict_copy(local_324 + 0x8c,*(undefined4 *)(**(int **)*piVar8 + 0x8c),0x10);
            if (local_1a0._4_4_ != 0x7fffffff || (int)local_1a0 != -1) {
              av_dict_set(local_324 + 0x8c,DAT_0002a8b0 + 0x2abb8,0);
            }
            av_dict_set(local_324 + 0x8c,DAT_000293c0 + 0x296f0,0);
            av_dict_set(local_324 + 0x8c,DAT_000293c4 + 0x2970c,0);
            av_dict_set(local_324 + 0x8c,DAT_000293c8 + 0x29728,0);
            av_dict_set(local_324 + 0x8c,DAT_000293cc + 0x29744,0);
          }
LAB_00029454:
          if (local_1b4 == 0) {
            iVar48 = piVar37[4];
            iVar2 = *piVar9;
            if (iVar48 < iVar2) {
              piVar8 = *(int **)(iVar40 + DAT_00029410);
              iVar7 = DAT_000293bc + 0x29490;
              do {
                iVar26 = *(int *)(*piVar8 + iVar48 * 4);
                iVar20 = *(int *)(iVar26 + 8);
                if (-1 < iVar20) {
                  av_dict_copy(*(int *)(iVar26 + 0xc) + 0x40,
                               *(undefined4 *)
                                (*(int *)(*(int *)(**(int **)(iVar40 + DAT_00029414) + iVar20 * 4) +
                                         4) + 0x40),0x10);
                  iVar2 = *(int *)(*piVar8 + iVar48 * 4);
                  if (*(int *)(iVar2 + 0x164) == 0) {
                    av_dict_set(*(int *)(iVar2 + 0xc) + 0x40,iVar7,0);
                  }
                  iVar2 = *piVar9;
                }
                iVar48 = iVar48 + 1;
              } while (iVar48 < iVar2);
            }
          }
          if (0 < local_5c) {
            iVar26 = 0;
            iVar2 = DAT_000293d0 + 0x29838;
            iVar48 = DAT_000293d4 + 0x29844;
            pcVar34 = (char *)(DAT_000293d8 + 0x29850);
            iVar7 = DAT_000293dc + 0x2985c;
            do {
              iVar20 = iVar26 * 0x10;
              iVar26 = iVar26 + 1;
              local_318 = *(char **)(local_60 + iVar20 + 8);
              lVar3 = iVar26;
              if (*local_318 != '\0') {
                do {
                  local_2fc = (char *)av_get_token(&local_318,iVar2);
                  local_2e8[0] = local_2fc;
                  if (local_2fc == (char *)0x0) break;
                  if (*local_318 != '\0') {
                    local_318 = local_318 + 1;
                  }
                  local_2d4[0] = (char *)av_get_token(&local_2fc,iVar48);
                  if ((local_2d4[0] == (char *)0x0) || (*local_2fc == '\0')) {
                    av_freep(local_2e8);
                    av_freep(local_2d4);
                    break;
                  }
                  pcVar29 = local_2fc + 1;
                  local_2fc = pcVar29;
                  iVar33 = strcmp(local_2d4[0],pcVar34);
                  if (iVar33 == 0) {
                    lVar3 = strtol(pcVar29,(char **)0x0,0);
                  }
                  av_freep(local_2e8);
                  av_freep(local_2d4);
                } while (*local_318 != '\0');
              }
              iVar33 = av_new_program(local_324,lVar3);
              local_318 = *(char **)(local_60 + iVar20 + 8);
              if (*local_318 != '\0') {
                iVar20 = DAT_000293e0 + 0x29984;
                pcVar23 = (char *)(DAT_000293e4 + 0x29988);
                do {
                  local_314 = (char *)av_get_token(&local_318,iVar7);
                  local_310 = local_314;
                  if (local_314 == (char *)0x0) break;
                  if (*local_318 != '\0') {
                    local_318 = local_318 + 1;
                  }
                  pcVar29 = (char *)av_get_token(&local_314,iVar20);
                  local_30c = pcVar29;
                  if (pcVar29 == (char *)0x0) {
                    av_log(0,8,DAT_0002a8ac + 0x2ab94,local_314);
                    /* WARNING: Subroutine does not return */
                    FUN_0002b538(1);
                  }
                  if (*local_314 == '\0') goto LAB_00029cac;
                  pcVar24 = local_314 + 1;
                  local_314 = pcVar24;
                  iVar11 = strcmp(pcVar29,pcVar23);
                  if (iVar11 == 0) {
                    av_dict_set(iVar33 + 0x14,pcVar23,pcVar24);
                  }
                  else {
                    iVar11 = strcmp(pcVar29,(char *)(DAT_000293e8 + 0x29998));
                    if (iVar11 != 0) {
                      iVar11 = strcmp(pcVar29,(char *)(DAT_000293ec + 0x299b0));
                      if (iVar11 != 0) {
                        iVar2 = DAT_0002a8d8 + 0x2ad08;
                        goto LAB_00029fbc;
                      }
                      lVar4 = strtol(pcVar24,(char **)0x0,0);
                      av_program_add_stream_index(local_324,lVar3,lVar4);
                    }
                  }
                  av_freep(&local_310);
                  av_freep(&local_30c);
                } while (*local_318 != '\0');
              }
            } while (iVar26 < local_5c);
          }
          if (0 < local_15c) {
            iVar2 = 0;
            pcVar34 = (char *)(DAT_000293f0 + 0x29aa8);
            do {
              iVar48 = iVar2 * 0x10;
              local_304 = (char *)0x0;
              pcVar29 = *(char **)(local_160 + iVar48 + 8);
              pcVar23 = strchr(pcVar29,0x3d);
              if (pcVar23 == (char *)0x0) {
                av_log(0,8,DAT_0002a8ec + 0x2ad90,pcVar29);
                    /* WARNING: Subroutine does not return */
                FUN_0002b538(1);
              }
              pcVar24 = pcVar23 + 1;
              *pcVar23 = '\0';
              FUN_0001df4c(*(undefined4 *)(local_160 + iVar2 * 0x10),&local_327,&local_304,
                           &local_308);
              if (local_327 == 's') {
                uVar36 = *(uint *)(local_324 + 0x18);
                if (uVar36 != 0) {
                  uVar31 = 0;
                  piVar8 = *(int **)(iVar40 + DAT_00029410);
                  do {
                    iVar26 = *(int *)(*piVar8 + ((*piVar9 - uVar36) + uVar31) * 4);
                    iVar7 = FUN_0002c49c(local_324,
                                         *(undefined4 *)(*(int *)(local_324 + 0x1c) + uVar31 * 4),
                                         local_308);
                    if (iVar7 < 1) {
                      if (iVar7 != 0) goto LAB_00029cac;
                    }
                    else {
                      pcVar29 = *(char **)(local_160 + iVar48 + 8);
                      iVar7 = strcmp(pcVar29,pcVar34);
                      if (iVar7 == 0) {
                        uVar38 = av_strtod(pcVar24,local_2d4);
                        if (*local_2d4[0] == '\0') {
                          *(ulonglong *)(iVar26 + 0xd0) = CONCAT44(extraout_s1,uVar38);
                          *(undefined4 *)(iVar26 + 0xc0) = 1;
                        }
                      }
                      else {
                        pcVar14 = pcVar24;
                        if (pcVar23[1] == '\0') {
                          pcVar14 = (char *)0x0;
                        }
                        av_dict_set(*(int *)(*(int *)(local_324 + 0x1c) + uVar31 * 4) + 0x40,pcVar29
                                    ,pcVar14);
                      }
                    }
                    uVar31 = uVar31 + 1;
                    uVar36 = *(uint *)(local_324 + 0x18);
                  } while (uVar31 < uVar36);
                }
              }
              else {
                if (local_327 == 'g') {
                  iVar7 = local_324 + 0x8c;
                }
                else {
                  pcVar29 = local_304;
                  if (local_327 == 'p') {
                    if (((int)local_304 < 0) || (*(char **)(local_324 + 0x68) <= local_304)) {
                      iVar2 = DAT_0002a8f8 + 0x2adc0;
                      goto LAB_00029fbc;
                    }
                    iVar7 = *(int *)(*(int *)(local_324 + 0x6c) + (int)local_304 * 4) + 0x14;
                  }
                  else {
                    if (local_327 != 'c') {
                      av_log(0,8,DAT_000293f4 + 0x29b90,*(undefined4 *)(local_160 + iVar48));
                    /* WARNING: Subroutine does not return */
                      FUN_0002b538(1);
                    }
                    if (((int)local_304 < 0) || (*(char **)(local_324 + 0x84) <= local_304)) {
                      iVar2 = DAT_0002a8f4 + 0x2adb4;
                      goto LAB_00029fbc;
                    }
                    iVar7 = *(int *)(*(int *)(local_324 + 0x88) + (int)local_304 * 4) + 0x20;
                  }
                }
                if (pcVar23[1] == '\0') {
                  pcVar24 = (char *)0x0;
                }
                av_dict_set(iVar7,*(undefined4 *)(local_160 + iVar48 + 8),pcVar24);
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 < local_15c);
          }
          iVar2 = local_324;
          local_2d4[1] = *(char **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          local_2d4[0] = (char *)0x0;
          local_2d4[2] = (char *)*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          local_2e8[0] = (char *)0x0;
          local_2e8[1] = local_2d4[1];
          local_2e8[2] = (char *)*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          local_2d4[3] = (char *)0x0;
          local_2d4[4] = local_2d4[1];
          local_2e8[3] = (char *)0x0;
          local_2e8[4] = local_2d4[1];
          uVar36 = *(uint *)(local_324 + 0x18);
          if (uVar36 != 0) {
            bVar43 = false;
            uVar31 = 0;
            piVar8 = *(int **)(iVar40 + DAT_00029410);
            iVar7 = *piVar8;
            iVar48 = **(int **)(iVar40 + DAT_00029414);
            do {
              iVar20 = *(int *)(iVar7 + (uVar31 + piVar37[4]) * 4);
              iVar26 = *(int *)(iVar20 + 0xc);
              if (*(int *)(iVar20 + 0x180) != 0) {
                bVar43 = true;
              }
              iVar33 = **(int **)(iVar26 + 0xb4);
              local_2e8[iVar33] = local_2e8[iVar33] + 1;
              if (-1 < *(int *)(iVar20 + 8)) {
                uVar36 = *(uint *)(*(int *)(*(int *)(iVar48 + *(int *)(iVar20 + 8) * 4) + 4) + 0x30)
                ;
                *(uint *)(iVar26 + 0x30) = uVar36;
                if ((uVar36 & 1) != 0) {
                  local_2d4[iVar33] = (char *)0x1;
                }
                uVar36 = *(uint *)(local_324 + 0x18);
              }
              uVar31 = uVar31 + 1;
            } while (uVar31 < uVar36);
            if (bVar43) {
              if (uVar36 != 0) {
                uVar31 = 0;
                iVar48 = DAT_00029418 + 0x2a0d0;
                while( true ) {
                  iVar7 = *(int *)(iVar7 + (uVar31 + piVar37[4]) * 4);
                  if (*(int *)(iVar7 + 0x180) != 0) {
                    local_2fc = (char *)av_stream_get_class();
                    iVar26 = av_opt_find(&local_2fc,iVar48,0,0,2);
                    if (iVar26 == 0) {
                      av_log(0,0,DAT_0002a934 + 0x2af28,DAT_0002a930 + 0x2af24,
                             DAT_0002a92c + 0x2af18,0x8f6);
                    /* WARNING: Subroutine does not return */
                      abort();
                    }
                    iVar7 = av_opt_eval_flags(&local_2fc,iVar26,*(undefined4 *)(iVar7 + 0x180),
                                              *(int *)(iVar7 + 0xc) + 0x30);
                    if (iVar7 < 0) {
                      av_log(0,8,DAT_0002a93c + 0x2af58);
                    /* WARNING: Subroutine does not return */
                      FUN_0002b538(1);
                    }
                    uVar36 = *(uint *)(iVar2 + 0x18);
                  }
                  uVar31 = uVar31 + 1;
                  if (uVar36 <= uVar31) break;
                  iVar7 = *piVar8;
                }
              }
            }
            else if (uVar36 != 0) {
              uVar31 = 0;
              do {
                iVar2 = *(int *)(*(int *)(iVar7 + (uVar31 + piVar37[4]) * 4) + 0xc);
                iVar48 = **(int **)(iVar2 + 0xb4);
                if (((1 < (int)local_2e8[iVar48]) && (local_2d4[iVar48] == (char *)0x0)) &&
                   ((*(uint *)(iVar2 + 0x30) & 0x400) == 0)) {
                  *(uint *)(iVar2 + 0x30) = *(uint *)(iVar2 + 0x30) | 1;
                  local_2d4[iVar48] = (char *)0x1;
                }
                uVar31 = uVar31 + 1;
              } while (uVar31 != uVar36);
            }
          }
          local_388 = local_278;
          local_34c = local_34c + 1;
          FUN_0001e064(local_388);
          av_log(0,0x30,DAT_0002941c + 0x2a16c);
        } while (local_34c < *(int *)(local_2a0 + 8));
      }
      FUN_000176f8();
      FUN_0002c100(auStack_2c0);
      return 0;
    }
    iVar48 = DAT_000285e4 + 0x2837c;
  }
LAB_00028318:
  av_log(0,8,iVar48);
LAB_0002832c:
  local_388 = local_278;
  FUN_0002c100(auStack_2c0);
  av_strerror(iVar2,local_388,0x80);
  av_log(0,8,DAT_000285e0 + 0x2835c,local_388);
  return iVar2;
LAB_0002af60:
  FUN_0002295c();
  local_324 = extraout_r3;
LAB_0002af64:
  FUN_0002c1d4(*(undefined4 *)(local_324 + 0x20),0xffffffea);
                    /* WARNING: Subroutine does not return */
  FUN_0002b538(1);
}



/* ===== FUN_0002b000 @ 0002b000 size=1124 ===== */

undefined4 FUN_0002b000(undefined4 param_1,byte *param_2,char *param_3)

{
  bool bVar1;
  int iVar2;
  byte *pbVar3;
  size_t sVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 auStack_98 [128];
  
  local_a8 = avcodec_get_class();
  iVar8 = DAT_0002b464 + 0x2b020;
  local_a4 = avformat_get_class();
  local_a0 = sws_get_class();
  local_9c = swr_get_class();
  iVar2 = strcmp((char *)param_2,(char *)(DAT_0002b468 + 0x2b040));
  if ((iVar2 == 0) || (iVar2 = strcmp((char *)param_2,(char *)(DAT_0002b46c + 0x2b060)), iVar2 == 0)
     ) {
    av_log_set_level(0x30);
  }
  pbVar3 = (byte *)strchr((char *)param_2,0x3a);
  if (pbVar3 == (byte *)0x0) {
    sVar4 = strlen((char *)param_2);
    pbVar3 = param_2 + sVar4;
  }
  pbVar3 = pbVar3 + (1 - (int)param_2);
  if ((byte *)0x7f < pbVar3) {
    pbVar3 = (byte *)0x80;
  }
  av_strlcpy(auStack_98,param_2,pbVar3);
  iVar2 = av_opt_find(&local_a8,auStack_98,0,0,3);
  if (((iVar2 == 0) || (*(int *)(iVar2 + 0x28) == 0)) &&
     ((uVar7 = *param_2 - 0x61 & 0xff, 0x15 < uVar7 ||
      ((((~(0x240001U >> uVar7) & 1) != 0 ||
        (iVar2 = av_opt_find(&local_a8,param_2 + 1,0,0,2), iVar2 == 0)) ||
       (*(int *)(iVar2 + 0x28) == 0)))))) {
    iVar2 = av_opt_find(&local_a4,param_2,0,0,3);
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x28) == 0)) {
      iVar2 = av_opt_find(&local_a0,param_2,0,0,3);
      if ((iVar2 == 0) || (*(int *)(iVar2 + 0x28) == 0)) {
        iVar2 = av_opt_find(&local_9c,param_2,0,0,3);
        if ((iVar2 == 0) || (*(int *)(iVar2 + 0x28) == 0)) {
          return 0xabafb008;
        }
        iVar5 = DAT_0002b498;
        if (*(int *)(iVar2 + 0xc) == 0) {
          if ((*param_3 - 0x2bU & 0xfd) == 0) {
            uVar6 = 0x20;
          }
          else {
            uVar6 = 0;
          }
        }
        else {
          uVar6 = 0;
        }
      }
      else {
        iVar5 = strcmp((char *)param_2,(char *)(DAT_0002b47c + 0x2b300));
        if (((((iVar5 == 0) ||
              (iVar5 = strcmp((char *)param_2,(char *)(DAT_0002b480 + 0x2b318)), iVar5 == 0)) ||
             (iVar5 = strcmp((char *)param_2,(char *)(DAT_0002b484 + 0x2b330)), iVar5 == 0)) ||
            ((iVar5 = strcmp((char *)param_2,(char *)(DAT_0002b488 + 0x2b348)), iVar5 == 0 ||
             (iVar5 = strcmp((char *)param_2,(char *)(DAT_0002b48c + 0x2b360)), iVar5 == 0)))) ||
           (iVar5 = strcmp((char *)param_2,(char *)(DAT_0002b490 + 0x2b378)), iVar5 == 0)) {
          av_log(0,0x10,DAT_0002b49c + 0x2b45c);
          return 0xffffffea;
        }
        iVar5 = DAT_0002b494;
        if (*(int *)(iVar2 + 0xc) == 0) {
          if ((*param_3 - 0x2bU & 0xfd) == 0) {
            uVar6 = 0x20;
          }
          else {
            uVar6 = 0;
          }
        }
        else {
          uVar6 = 0;
        }
      }
      av_dict_set(*(undefined4 *)(iVar8 + iVar5),param_2,param_3,uVar6);
      return 0;
    }
    if (*(int *)(iVar2 + 0xc) != 0) {
      av_dict_set(*(undefined4 *)(iVar8 + DAT_0002b474),param_2,param_3,0);
      return 0;
    }
    if ((*param_3 - 0x2bU & 0xfd) == 0) {
      av_dict_set(*(undefined4 *)(iVar8 + DAT_0002b474),param_2,param_3,0x20);
      return 0;
    }
    uVar6 = 0;
    bVar1 = false;
  }
  else {
    if (*(int *)(iVar2 + 0xc) == 0) {
      if ((*param_3 - 0x2bU & 0xfd) == 0) {
        uVar6 = 0x20;
      }
      else {
        uVar6 = 0;
      }
    }
    else {
      uVar6 = 0;
    }
    av_dict_set(*(undefined4 *)(iVar8 + DAT_0002b470),param_2,param_3,uVar6);
    iVar2 = av_opt_find(&local_a4,param_2,0,0,3);
    if (iVar2 == 0) {
      return 0;
    }
    if (*(int *)(iVar2 + 0x28) == 0) {
      return 0;
    }
    if (*(int *)(iVar2 + 0xc) != 0) {
      av_dict_set(*(undefined4 *)(iVar8 + DAT_0002b474),param_2,param_3,0);
      goto LAB_0002b230;
    }
    if ((*param_3 - 0x2bU & 0xfd) != 0) {
      av_dict_set(*(undefined4 *)(iVar8 + DAT_0002b474),param_2,param_3);
      goto LAB_0002b230;
    }
    bVar1 = true;
    uVar6 = 0x20;
  }
  av_dict_set(*(undefined4 *)(iVar8 + DAT_0002b474),param_2,param_3,uVar6);
  if (!bVar1) {
    return 0;
  }
LAB_0002b230:
  av_log(0,0x28,DAT_0002b478 + 0x2b248,param_2);
  return 0;
}



/* ===== FUN_0002b4a0 @ 0002b4a0 size=64 ===== */

void FUN_0002b4a0(void)

{
  int iVar1;
  
  iVar1 = DAT_0002b4e0 + 0x2b4b4;
  av_dict_free(*(undefined4 *)(iVar1 + DAT_0002b4e4));
  av_dict_free(*(undefined4 *)(iVar1 + DAT_0002b4e8));
  av_dict_free(*(undefined4 *)(iVar1 + DAT_0002b4ec));
  av_dict_free(*(undefined4 *)(iVar1 + DAT_0002b4f0));
  return;
}



/* ===== FUN_0002b520 @ 0002b520 size=4 ===== */

void FUN_0002b520(void)

{
  return;
}



/* ===== FUN_0002b524 @ 0002b524 size=16 ===== */

void FUN_0002b524(undefined4 param_1)

{
  *(undefined4 *)(DAT_0002b534 + 0x2b530) = param_1;
  return;
}



/* ===== FUN_0002b538 @ 0002b538 size=40 ===== */

void FUN_0002b538(int param_1)

{
  if (*(code **)(DAT_0002b560 + 0x2b548) != (code *)0x0) {
    (**(code **)(DAT_0002b560 + 0x2b548))();
  }
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* ===== FUN_0002b564 @ 0002b564 size=260 ===== */

void FUN_0002b564(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint in_fpscr;
  undefined4 uVar4;
  double in_d0;
  undefined4 extraout_s1;
  double in_d1;
  double dVar6;
  char *local_24;
  double dVar5;
  
  uVar4 = av_strtod(param_2,&local_24);
  dVar5 = (double)CONCAT44(extraout_s1,uVar4);
  if (*local_24 == '\0') {
    if (dVar5 < in_d0) {
      iVar3 = DAT_0002b674 + 0x2b65c;
    }
    else {
      uVar1 = in_fpscr & 0xfffffff | (uint)(dVar5 < in_d1) << 0x1f | (uint)(dVar5 == in_d1) << 0x1e;
      bVar2 = (byte)(uVar1 >> 0x18);
      if ((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != (NAN(dVar5) || NAN(in_d1))) {
        if (param_3 == 0x400) {
          FUN_0003f8e0(uVar4,extraout_s1);
          dVar6 = (double)FUN_0003f4e4();
          if (dVar6 != dVar5) {
            iVar3 = DAT_0002b668 + 0x2b618;
            goto LAB_0002b620;
          }
        }
        else if ((param_3 == 0x80) &&
                (dVar6 = (double)VectorSignedToFloat((int)(longlong)dVar5,(byte)(uVar1 >> 0x16) & 3)
                , dVar6 != dVar5)) {
          iVar3 = DAT_0002b66c + 0x2b624;
          goto LAB_0002b620;
        }
        return;
      }
      iVar3 = DAT_0002b670 + 0x2b650;
    }
  }
  else {
    iVar3 = (int)&DAT_0002b668 + DAT_0002b678;
  }
LAB_0002b620:
  av_log(0,8,iVar3,param_1,param_2);
                    /* WARNING: Subroutine does not return */
  FUN_0002b538(1);
}



/* ===== FUN_0002b67c @ 0002b67c size=108 ===== */

undefined8 FUN_0002b67c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined8 local_18;
  
  iVar1 = av_parse_time(&local_18);
  if (-1 < iVar1) {
    return local_18;
  }
  if (param_3 == 0) {
    iVar1 = DAT_0002b6e8 + 0x2b6c0;
  }
  else {
    iVar1 = (int)&DAT_0002b6e8 + DAT_0002b6f0;
  }
  av_log(0,8,DAT_0002b6ec + 0x2b6d4,iVar1,param_1,param_2);
                    /* WARNING: Subroutine does not return */
  FUN_0002b538(1);
}



/* ===== FUN_0002b6f4 @ 0002b6f4 size=404 ===== */

void FUN_0002b6f4(int *param_1,char *param_2,uint param_3,uint param_4,uint param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined1 auStack_a8 [132];
  
  iVar2 = *param_1;
  if (iVar2 != 0) {
    if (param_5 == 0) {
      iVar4 = DAT_0002b890 + 0x2b7e0;
      bVar1 = true;
      pcVar5 = (char *)(DAT_0002b894 + 0x2b7e8);
      do {
        if (((param_3 & ~param_1[1]) == 0) && ((param_4 & param_1[1]) == 0)) {
          if (bVar1) {
            puts(param_2);
            iVar2 = *param_1;
          }
          av_strlcpy(auStack_a8,iVar2,0x80);
          if (param_1[4] != 0) {
            av_strlcat(auStack_a8,iVar4,0x80);
            av_strlcat(auStack_a8,param_1[4],0x80);
          }
          printf(pcVar5,auStack_a8,param_1[3]);
          bVar1 = false;
        }
        param_1 = param_1 + 5;
        iVar2 = *param_1;
      } while (iVar2 != 0);
      putchar(10);
      return;
    }
    pcVar5 = (char *)(DAT_0002b888 + 0x2b738);
    bVar1 = true;
    iVar4 = DAT_0002b88c + 0x2b740;
    do {
      uVar3 = param_1[1];
      if ((((param_3 & ~uVar3) == 0) && ((uVar3 & param_5) != 0)) && ((uVar3 & param_4) == 0)) {
        if (bVar1) {
          puts(param_2);
          iVar2 = *param_1;
        }
        av_strlcpy(auStack_a8,iVar2,0x80);
        if (param_1[4] != 0) {
          av_strlcat(auStack_a8,iVar4,0x80);
          av_strlcat(auStack_a8,param_1[4],0x80);
        }
        printf(pcVar5,auStack_a8,param_1[3]);
        bVar1 = false;
      }
      param_1 = param_1 + 5;
      iVar2 = *param_1;
    } while (iVar2 != 0);
  }
  putchar(10);
  return;
}



/* ===== FUN_0002b898 @ 0002b898 size=116 ===== */

void FUN_0002b898(int param_1,undefined4 param_2)

{
  int iVar1;
  int local_1c [2];
  undefined4 local_14 [2];
  
  local_14[0] = 0;
  local_1c[0] = param_1;
  if (*(int *)(param_1 + 8) != 0) {
    av_opt_show2(local_1c,0,param_2);
    putchar(10);
  }
  while (iVar1 = av_opt_child_class_iterate(local_1c[0],local_14), iVar1 != 0) {
    FUN_0002b898(iVar1,param_2);
  }
  return;
}



/* ===== FUN_0002b90c @ 0002b90c size=364 ===== */

int FUN_0002b90c(int param_1,int param_2,int *param_3,char *param_4)

{
  int iVar1;
  char *__s2;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  char *local_2c [2];
  
  if (param_1 < 2) {
    return 0;
  }
  iVar2 = 1;
LAB_0002b940:
  pcVar4 = *(char **)(param_2 + iVar2 * 4);
  if (*pcVar4 != '-') goto LAB_0002b934;
  iVar1 = *param_3;
  piVar3 = param_3;
  while (iVar1 != 0) {
    iVar1 = av_strstart(pcVar4 + 1,iVar1,local_2c);
    if ((iVar1 != 0) && (*local_2c[0] == ':' || *local_2c[0] == '\0')) {
      __s2 = (char *)*piVar3;
      if (__s2 != (char *)0x0) goto LAB_0002b9ec;
      break;
    }
    piVar3 = piVar3 + 5;
    iVar1 = *piVar3;
  }
  if ((pcVar4[1] == 'n') && (pcVar4[2] == 'o')) {
    iVar1 = *param_3;
    piVar3 = param_3;
    while (iVar1 != 0) {
      iVar1 = av_strstart(pcVar4 + 3,iVar1,local_2c);
      if ((iVar1 != 0) && (*local_2c[0] == ':' || *local_2c[0] == '\0')) {
        __s2 = (char *)*piVar3;
        if (__s2 != (char *)0x0) goto LAB_0002b9ec;
        break;
      }
      piVar3 = piVar3 + 5;
      iVar1 = *piVar3;
    }
  }
  iVar1 = strcmp(pcVar4 + 1,param_4);
  if (iVar1 == 0) {
    return iVar2;
  }
  goto LAB_0002b9c0;
LAB_0002b9ec:
  iVar1 = strcmp(param_4,__s2);
  if (iVar1 == 0) {
    return iVar2;
  }
  if ((piVar3[1] & 1U) == 0) {
LAB_0002b934:
    iVar2 = iVar2 + 1;
  }
  else {
LAB_0002b9c0:
    iVar2 = iVar2 + 2;
  }
  if (param_1 <= iVar2) {
    return 0;
  }
  goto LAB_0002b940;
}



/* ===== FUN_0002ba78 @ 0002ba78 size=1608 ===== */

void FUN_0002ba78(int param_1,int param_2,int *param_3)

{
  byte bVar1;
  uint uVar2;
  FILE *pFVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined4 *puVar15;
  char *pcVar16;
  bool bVar17;
  bool bVar18;
  FILE *local_2c [2];
  
  iVar4 = FUN_0002b90c();
  iVar8 = DAT_0002c0c4 + 0x2baac;
  iVar10 = *param_3;
  piVar11 = param_3;
  while (iVar10 != 0) {
    if (((piVar11[1] & 0x2000U) != 0) && ((piVar11[1] & 0xc0000U) == 0)) {
      av_log(0,0,DAT_0002c0fc + 0x2c0bc,DAT_0002c0f8 + 0x2c0b0,DAT_0002c0f4 + 0x2c0a4,0x1cf);
                    /* WARNING: Subroutine does not return */
      abort();
    }
    piVar11 = piVar11 + 5;
    iVar10 = *piVar11;
  }
  if (((iVar4 != 0) ||
      (iVar4 = FUN_0002b90c(param_1,param_2,param_3,DAT_0002c0dc + 0x2bb80), iVar4 != 0)) &&
     (*(int *)(param_2 + (iVar4 + 1) * 4) != 0)) {
    FUN_00031074(0,DAT_0002c0c8 + 0x2bafc);
  }
  iVar10 = FUN_0002b90c(param_1,param_2,param_3,DAT_0002c0cc + 0x2bb14);
  pcVar5 = getenv((char *)(DAT_0002c0d0 + 0x2bb24));
  if (pcVar5 == (char *)0x0 && iVar10 == 0) goto LAB_0002bb2c;
  iVar10 = 0;
  local_2c[0] = (FILE *)0x0;
  FUN_00030aac(pcVar5,local_2c);
  if (local_2c[0] == (FILE *)0x0) goto LAB_0002bb2c;
  fwrite((void *)(DAT_0002c0e0 + 0x2bbbc),1,0xe,local_2c[0]);
  if (0 < param_1) {
    iVar4 = param_1 + -1;
    if (0 < iVar4) {
      puVar15 = (undefined4 *)(param_2 + -4);
      pcVar5 = (char *)(DAT_0002c0e4 + 0x2bbe4);
      pcVar16 = (char *)(DAT_0002c0e8 + 0x2bbec);
LAB_0002bbf0:
      pFVar3 = local_2c[0];
      puVar15 = puVar15 + 1;
      pbVar14 = (byte *)*puVar15;
      bVar1 = *pbVar14;
      pbVar13 = pbVar14;
      while (uVar2 = (uint)bVar1, uVar2 != 0) {
        uVar12 = uVar2 - 0x2b;
        bVar18 = 0xe < uVar12;
        bVar17 = uVar12 == 0xf;
        if (0xf < uVar12) {
          bVar18 = 0x19 < uVar2 - 0x40;
          bVar17 = uVar2 - 0x40 == 0x1a;
        }
        if ((uVar2 != 0x5f && (bVar18 && !bVar17)) && (0x19 < uVar2 - 0x61)) {
          if (local_2c[0]->_chain == (_IO_FILE *)0x0) {
            fputc(0x22,local_2c[0]);
          }
          else {
            pcVar9 = local_2c[0]->_IO_write_base;
            if (pcVar9 < local_2c[0]->_IO_buf_base) {
              local_2c[0]->_IO_write_base = pcVar9 + 1;
              *pcVar9 = '\"';
            }
            else {
              __fputc_unlocked(0x22,local_2c[0]);
            }
          }
          bVar1 = *pbVar14;
          goto joined_r0x0002bc84;
        }
        pbVar13 = pbVar13 + 1;
        bVar1 = *pbVar13;
      }
      fputs((char *)pbVar14,local_2c[0]);
      goto LAB_0002bd38;
    }
    goto LAB_0002bd84;
  }
LAB_0002bf30:
  fflush(local_2c[0]);
LAB_0002bb2c:
  iVar10 = FUN_0002b90c(param_1,param_2,param_3,DAT_0002c0d4 + 0x2bb44);
  if (iVar10 != 0) {
    **(undefined4 **)(iVar8 + DAT_0002c0d8) = 1;
  }
  return;
joined_r0x0002bc84:
  uVar2 = (uint)bVar1;
  if (uVar2 == 0) goto LAB_0002bd0c;
  if ((uVar2 - 0x5c & 0xfb) == 0 || (uVar2 - 0x22 & 0xfd) == 0) {
    fprintf(pFVar3,pcVar16);
LAB_0002bc98:
    bVar1 = pbVar14[1];
  }
  else {
    if (0x5e < uVar2 - 0x20) {
      fprintf(pFVar3,pcVar5);
      goto LAB_0002bc98;
    }
    if (pFVar3->_chain == (_IO_FILE *)0x0) {
      fputc(uVar2,pFVar3);
      goto LAB_0002bc98;
    }
    pbVar13 = (byte *)pFVar3->_IO_write_base;
    if (pFVar3->_IO_buf_base <= pbVar13) {
      __fputc_unlocked(uVar2,pFVar3);
      goto LAB_0002bc98;
    }
    pFVar3->_IO_write_base = (char *)(pbVar13 + 1);
    *pbVar13 = *pbVar14;
    bVar1 = pbVar14[1];
  }
  pbVar14 = pbVar14 + 1;
  goto joined_r0x0002bc84;
LAB_0002bd0c:
  if (pFVar3->_chain == (_IO_FILE *)0x0) {
    fputc(0x22,pFVar3);
  }
  else {
    pcVar9 = pFVar3->_IO_write_base;
    if (pcVar9 < pFVar3->_IO_buf_base) {
      pFVar3->_IO_write_base = pcVar9 + 1;
      *pcVar9 = '\"';
    }
    else {
      __fputc_unlocked(0x22,pFVar3);
    }
  }
LAB_0002bd38:
  if (local_2c[0]->_chain == (_IO_FILE *)0x0) {
    if (iVar10 < iVar4) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 10;
    }
    fputc(iVar6,local_2c[0]);
  }
  else {
    pcVar9 = local_2c[0]->_IO_write_base;
    if (pcVar9 < local_2c[0]->_IO_buf_base) {
      local_2c[0]->_IO_write_base = pcVar9 + 1;
      *pcVar9 = ' ';
    }
    else {
      if (iVar10 < iVar4) {
        uVar7 = 0x20;
      }
      else {
        uVar7 = 10;
      }
      __fputc_unlocked(uVar7);
    }
  }
  iVar10 = iVar10 + 1;
  if (iVar4 <= iVar10) goto code_r0x0002bd74;
  goto LAB_0002bbf0;
code_r0x0002bd74:
  if (iVar10 < param_1) {
LAB_0002bd84:
    pcVar5 = (char *)(DAT_0002c0ec + 0x2bd98);
    pcVar16 = (char *)(DAT_0002c0f0 + 0x2bda0);
    puVar15 = (undefined4 *)(param_2 + iVar10 * 4);
LAB_0002bda4:
    pFVar3 = local_2c[0];
    pbVar14 = (byte *)*puVar15;
    bVar1 = *pbVar14;
    pbVar13 = pbVar14;
    while (uVar2 = (uint)bVar1, uVar2 != 0) {
      uVar12 = uVar2 - 0x40;
      bVar18 = 0x19 < uVar12;
      bVar17 = uVar12 == 0x1a;
      if (0x1a < uVar12) {
        bVar18 = 0xe < uVar2 - 0x2b;
        bVar17 = uVar2 - 0x2b == 0xf;
      }
      if ((uVar2 != 0x5f && (bVar18 && !bVar17)) && (0x19 < uVar2 - 0x61)) {
        if (local_2c[0]->_chain == (_IO_FILE *)0x0) {
          fputc(0x22,local_2c[0]);
        }
        else {
          pcVar9 = local_2c[0]->_IO_write_base;
          if (pcVar9 < local_2c[0]->_IO_buf_base) {
            local_2c[0]->_IO_write_base = pcVar9 + 1;
            *pcVar9 = '\"';
          }
          else {
            __fputc_unlocked(0x22,local_2c[0]);
          }
        }
        bVar1 = *pbVar14;
        goto joined_r0x0002be38;
      }
      pbVar13 = pbVar13 + 1;
      bVar1 = *pbVar13;
    }
    fputs((char *)pbVar14,local_2c[0]);
    goto LAB_0002beec;
  }
  goto LAB_0002bf30;
joined_r0x0002be38:
  uVar2 = (uint)bVar1;
  if (uVar2 == 0) goto LAB_0002bec0;
  if ((uVar2 - 0x5c & 0xfb) == 0 || (uVar2 - 0x22 & 0xfd) == 0) {
    fprintf(pFVar3,pcVar16);
LAB_0002be4c:
    bVar1 = pbVar14[1];
  }
  else {
    if (0x5e < uVar2 - 0x20) {
      fprintf(pFVar3,pcVar5);
      goto LAB_0002be4c;
    }
    if (pFVar3->_chain == (_IO_FILE *)0x0) {
      fputc(uVar2,pFVar3);
      goto LAB_0002be4c;
    }
    pbVar13 = (byte *)pFVar3->_IO_write_base;
    if (pFVar3->_IO_buf_base <= pbVar13) {
      __fputc_unlocked(uVar2,pFVar3);
      goto LAB_0002be4c;
    }
    pFVar3->_IO_write_base = (char *)(pbVar13 + 1);
    *pbVar13 = *pbVar14;
    bVar1 = pbVar14[1];
  }
  pbVar14 = pbVar14 + 1;
  goto joined_r0x0002be38;
LAB_0002bec0:
  if (pFVar3->_chain == (_IO_FILE *)0x0) {
    fputc(0x22,pFVar3);
  }
  else {
    pcVar9 = pFVar3->_IO_write_base;
    if (pcVar9 < pFVar3->_IO_buf_base) {
      pFVar3->_IO_write_base = pcVar9 + 1;
      *pcVar9 = '\"';
    }
    else {
      __fputc_unlocked(0x22,pFVar3);
    }
  }
LAB_0002beec:
  if (local_2c[0]->_chain == (_IO_FILE *)0x0) {
    if (iVar10 < iVar4) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 10;
    }
    fputc(iVar6,local_2c[0]);
  }
  else {
    pcVar9 = local_2c[0]->_IO_write_base;
    if (pcVar9 < local_2c[0]->_IO_buf_base) {
      local_2c[0]->_IO_write_base = pcVar9 + 1;
      *pcVar9 = '\n';
    }
    else {
      if (iVar10 < iVar4) {
        uVar7 = 0x20;
      }
      else {
        uVar7 = 10;
      }
      __fputc_unlocked(uVar7);
    }
  }
  iVar10 = iVar10 + 1;
  puVar15 = puVar15 + 1;
  if (param_1 <= iVar10) goto LAB_0002bf30;
  goto LAB_0002bda4;
}



/* ===== FUN_0002c100 @ 0002c100 size=212 ===== */

void FUN_0002c100(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (0 < *(int *)(param_1 + 0x24)) {
    iVar4 = 0;
    iVar5 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x20) + iVar4;
      if (0 < *(int *)(iVar2 + 8)) {
        iVar3 = 0;
        do {
          iVar1 = iVar3 * 0x20;
          iVar3 = iVar3 + 1;
          av_freep(*(int *)(iVar2 + 4) + iVar1 + 8);
          av_dict_free(*(int *)(iVar2 + 4) + iVar1 + 0x10);
          av_dict_free(*(int *)(iVar2 + 4) + iVar1 + 0x14);
          av_dict_free(*(int *)(iVar2 + 4) + iVar1 + 0x18);
          av_dict_free(*(int *)(iVar2 + 4) + iVar1 + 0x1c);
        } while (iVar3 < *(int *)(iVar2 + 8));
      }
      iVar5 = iVar5 + 1;
      av_freep(iVar2 + 4);
      iVar4 = iVar4 + 0xc;
    } while (iVar5 < *(int *)(param_1 + 0x24));
  }
  av_freep(param_1 + 0x20);
  av_freep(param_1 + 0x30);
  av_freep(param_1 + 8);
  FUN_0002b4a0();
  return;
}



/* ===== FUN_0002c1d4 @ 0002c1d4 size=96 ===== */

void FUN_0002c1d4(undefined4 param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  char acStack_90 [128];
  
  pcVar2 = acStack_90;
  iVar1 = av_strerror(param_2,pcVar2,0x80);
  if (iVar1 < 0) {
    pcVar2 = strerror(-param_2);
  }
  av_log(0,0x10,DAT_0002c234 + 0x2c218,param_1,pcVar2);
  return;
}



/* ===== FUN_0002c238 @ 0002c238 size=200 ===== */

bool FUN_0002c238(void)

{
  FILE *pFVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  puVar4 = *(undefined4 **)(DAT_0002c300 + 0x2c248 + DAT_0002c304);
  pFVar1 = (FILE *)*puVar4;
  if (pFVar1->_chain == (_IO_FILE *)0x0) {
    uVar2 = fgetc(pFVar1);
  }
  else {
    pbVar3 = (byte *)pFVar1->_IO_write_base;
    if (pbVar3 < pFVar1->_IO_write_end) {
      pFVar1->_IO_write_base = (char *)(pbVar3 + 1);
      uVar2 = (uint)*pbVar3;
    }
    else {
      uVar2 = __fgetc_unlocked();
    }
  }
  uVar5 = uVar2;
  if (uVar2 - 0x61 < 0x1a) {
    uVar5 = uVar2 ^ 0x20;
  }
LAB_0002c294:
  do {
    if (uVar2 == 10 || uVar2 == 0xffffffff) {
      return uVar5 == 0x59;
    }
    while (pFVar1 = (FILE *)*puVar4, pFVar1->_chain != (_IO_FILE *)0x0) {
      pbVar3 = (byte *)pFVar1->_IO_write_base;
      if (pFVar1->_IO_write_end <= pbVar3) {
        uVar2 = __fgetc_unlocked();
        goto LAB_0002c294;
      }
      pFVar1->_IO_write_base = (char *)(pbVar3 + 1);
      if (*pbVar3 == 10 || *pbVar3 == 0xffffffff) {
        return uVar5 == 0x59;
      }
    }
    uVar2 = fgetc(pFVar1);
  } while( true );
}



/* ===== FUN_0002c308 @ 0002c308 size=368 ===== */

FILE * FUN_0002c308(char *param_1,size_t param_2,undefined4 param_3,int param_4,int param_5)

{
  char *pcVar1;
  char *pcVar2;
  FILE *pFVar3;
  uint extraout_r2;
  uint uVar4;
  char *__modes;
  char *__format;
  uint uVar5;
  int iVar6;
  int iVar7;
  char **ppcVar8;
  char *local_30;
  int local_2c;
  
  pcVar1 = getenv((char *)(DAT_0002c478 + 0x2c328));
  pcVar2 = getenv((char *)(DAT_0002c47c + 0x2c340));
  local_30 = pcVar1;
  local_2c = DAT_0002c480 + 0x2c354;
  if (param_4 == 0) {
    pcVar1 = (char *)(DAT_0002c484 + 0x2c370);
    __modes = (char *)(DAT_0002c488 + 0x2c37c);
    __format = (char *)(DAT_0002c48c + 0x2c388);
    iVar6 = 0;
    ppcVar8 = &local_30;
    while( true ) {
      iVar7 = DAT_0002c490 + 0x2c398;
      if (pcVar2 == (char *)0x0) {
        uVar5 = 1;
        pFVar3 = (FILE *)0x0;
      }
      else {
        if (iVar6 == 1) {
          iVar7 = DAT_0002c494 + 0x2c3a8;
        }
        snprintf(param_1,param_2,pcVar1,pcVar2,iVar7,param_3);
        pFVar3 = fopen64(param_1,__modes);
        uVar4 = extraout_r2;
        if (param_5 == 0) {
          uVar4 = 0;
        }
        uVar5 = (uint)(pFVar3 == (FILE *)0x0);
        if (param_5 != 0) {
          uVar4 = uVar5;
        }
        if (uVar4 != 0) {
          snprintf(param_1,param_2,__format,pcVar2,iVar7,param_5,param_3);
          pFVar3 = fopen64(param_1,__modes);
          uVar5 = (uint)(pFVar3 == (FILE *)0x0);
        }
      }
      iVar6 = iVar6 + 1;
      if (2 < iVar6) {
        uVar5 = 0;
      }
      if (uVar5 == 0) break;
      pcVar2 = *ppcVar8;
      ppcVar8 = ppcVar8 + 1;
    }
    return pFVar3;
  }
  av_strlcpy(param_1,param_3,param_2);
  pFVar3 = fopen64(param_1,(char *)(DAT_0002c498 + 0x2c470));
  return pFVar3;
}



/* ===== FUN_0002c49c @ 0002c49c size=64 ===== */

int FUN_0002c49c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = avformat_match_stream_specifier();
  if (-1 < iVar1) {
    return iVar1;
  }
  av_log(param_1,0x10,DAT_0002c4dc + 0x2c4d4,param_3);
  return iVar1;
}



/* ===== FUN_0002c4e0 @ 0002c4e0 size=564 ===== */

undefined4 FUN_0002c4e0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c [2];
  
  local_34 = 0;
  if (*(int *)(param_3 + 8) == 0) {
    uVar7 = 0x22;
    uVar9 = 10;
    uVar5 = 0x12;
    uVar10 = 2;
  }
  else {
    uVar7 = 0x21;
    uVar9 = 9;
    uVar5 = 0x11;
    uVar10 = 1;
  }
  local_30 = avcodec_get_class();
  if (param_5 == 0) {
    if (*(int *)(param_3 + 8) == 0) {
      param_5 = avcodec_find_decoder(param_2);
    }
    else {
      param_5 = avcodec_find_encoder();
    }
  }
  iVar4 = **(int **)(param_4 + 0xb4);
  if (iVar4 == 1) {
    cVar3 = 'a';
    uVar10 = uVar9;
  }
  else if (iVar4 == 3) {
    cVar3 = 's';
    uVar10 = uVar7;
  }
  else if (iVar4 == 0) {
    cVar3 = 'v';
    uVar10 = uVar5;
  }
  else {
    cVar3 = '\0';
  }
  piVar6 = (int *)0x0;
  iVar4 = DAT_0002c714 + 0x2c57c;
LAB_0002c578:
  piVar6 = (int *)av_dict_get(param_1,iVar4,piVar6,2);
  if (piVar6 == (int *)0x0) {
    return local_34;
  }
  pcVar8 = (char *)*piVar6;
  pcVar1 = strchr(pcVar8,0x3a);
  if (pcVar1 != (char *)0x0) goto code_r0x0002c5ac;
  goto LAB_0002c5d8;
code_r0x0002c5ac:
  iVar2 = FUN_0002c49c(param_3,param_4,pcVar1 + 1);
  if (iVar2 == 0) goto LAB_0002c578;
  if (iVar2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_0002b538(1);
  }
  *pcVar1 = '\0';
  pcVar8 = (char *)*piVar6;
LAB_0002c5d8:
  iVar2 = av_opt_find(&local_30,pcVar8,0,uVar10,2);
  if (param_5 == 0 || iVar2 != 0) {
LAB_0002c610:
    av_dict_set(&local_34,*piVar6,piVar6[1],0);
  }
  else {
    local_2c[0] = *(int *)(param_5 + 0x2c);
    pcVar8 = (char *)*piVar6;
    if (local_2c[0] != 0) {
      iVar2 = av_opt_find(local_2c,pcVar8,0,uVar10,2);
      if (iVar2 != 0) goto LAB_0002c610;
      pcVar8 = (char *)*piVar6;
    }
    if ((*pcVar8 == cVar3) && (iVar2 = av_opt_find(&local_30,pcVar8 + 1,0,uVar10,2), iVar2 != 0)) {
      av_dict_set(&local_34,*piVar6 + 1,piVar6[1],0);
    }
  }
  if (pcVar1 != (char *)0x0) {
    *pcVar1 = ':';
  }
  goto LAB_0002c578;
}



/* ===== FUN_0002c718 @ 0002c718 size=156 ===== */

int FUN_0002c718(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = av_calloc(*(int *)(param_1 + 0x18),4);
    if (iVar1 == 0) {
      av_log(0,0x10,DAT_0002c7b4 + 0x2c7ac);
                    /* WARNING: Subroutine does not return */
      FUN_0002b538(1);
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      uVar5 = 0;
      do {
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + uVar5 * 4);
        uVar2 = FUN_0002c4e0(param_2,*(undefined4 *)(*(int *)(iVar3 + 0xb4) + 4),param_1,iVar3,0);
        uVar4 = *(uint *)(param_1 + 0x18);
        *(undefined4 *)(iVar1 + uVar5 * 4) = uVar2;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar4);
    }
  }
  return iVar1;
}



/* ===== FUN_0002c7b8 @ 0002c7b8 size=168 ===== */

int FUN_0002c7b8(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_0003f088(0x7fffffff);
  if (iVar1 <= param_4) {
    av_log(0,0x10,DAT_0002c860 + 0x2c840);
                    /* WARNING: Subroutine does not return */
    FUN_0002b538(1);
  }
  if (param_4 <= *param_3) {
    return param_1;
  }
  iVar1 = av_realloc_array(param_1,param_4,param_2);
  if (iVar1 != 0) {
    memset((void *)(param_2 * *param_3 + iVar1),0,param_2 * (param_4 - *param_3));
    *param_3 = param_4;
    return iVar1;
  }
  av_log(0,0x10,DAT_0002c864 + 0x2c858);
                    /* WARNING: Subroutine does not return */
  FUN_0002b538(1);
}



/* ===== FUN_0002c868 @ 0002c868 size=596 ===== */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x0002c908 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

int FUN_0002c868(int param_1,uint *param_2,undefined4 *param_3,char *param_4,undefined4 param_5)

{
  int iVar1;
  char *pcVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  double *pdVar6;
  undefined4 uVar7;
  undefined8 in_d0;
  undefined4 uVar8;
  double dVar9;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
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
  
  uVar4 = *param_2;
  pdVar6 = (double *)*param_3;
  if ((uVar4 & 0xc000) != 0) {
    pdVar6 = (double *)(param_1 + (int)pdVar6);
  }
  if ((uVar4 & 0x8000) == 0) {
joined_r0x0002c98c:
    if ((uVar4 & 8) == 0) {
      uVar8 = (undefined4)((ulonglong)in_d0 >> 0x20);
      if ((uVar4 & 0x82) == 0) {
        if ((uVar4 & 0x400) == 0) {
          if ((uVar4 & 0x10000) == 0) {
            uVar7 = (undefined4)DAT_0002cad8;
            if ((uVar4 & 0x100) == 0) {
              if ((uVar4 & 0x20000) == 0) {
                if ((code *)*param_3 != (code *)0x0) {
                  iVar1 = (*(code *)*param_3)(param_1,param_4,param_5);
                  if (iVar1 < 0) {
                    uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                    uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                    uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                    local_60 = 0;
                    local_50 = 0;
                    local_48 = 0;
                    local_40 = 0;
                    local_38 = 0;
                    local_30 = 0;
                    local_28 = 0;
                    uStack_4c = uStack_5c;
                    uStack_44 = uStack_5c;
                    uStack_3c = uStack_5c;
                    uStack_34 = uStack_5c;
                    uStack_2c = uStack_5c;
                    uStack_24 = uStack_5c;
                    av_strerror(iVar1,&local_60,0x40);
                    av_log(0,0x10,DAT_0002caf4 + 0x2caa4,param_5);
                    return iVar1;
                  }
                  uVar4 = *param_2;
                }
              }
              else {
                FUN_0002b564(uVar7,uVar8,(int)DAT_0002cad0,param_4,param_5,0x20000);
                uVar4 = *param_2;
                *pdVar6 = (double)CONCAT44(uVar8,uVar7);
              }
            }
            else {
              FUN_0002b564(uVar7,uVar8,(int)DAT_0002cad0,param_4,param_5,0x100);
              uVar4 = *param_2;
              *(float *)pdVar6 = (float)(double)CONCAT44(uVar8,uVar7);
            }
          }
          else {
            dVar9 = (double)FUN_0002b67c(param_4,param_5,1);
            uVar4 = *param_2;
            *pdVar6 = dVar9;
          }
        }
        else {
          uVar7 = (undefined4)DAT_0002cae8;
          FUN_0002b564(uVar7,uVar8,(int)DAT_0002cae0,param_4,param_5,0x400);
          dVar9 = (double)FUN_0003f8e0(uVar7,uVar8);
          uVar4 = *param_2;
          *pdVar6 = dVar9;
        }
      }
      else {
        uVar7 = (undefined4)DAT_0002cac8;
        FUN_0002b564(uVar7,uVar8,(int)DAT_0002cac0,param_4,param_5,0x400);
        *(float *)pdVar6 = (float)(longlong)(double)CONCAT44(uVar8,uVar7);
        uVar4 = *param_2;
      }
    }
    else {
      fVar3 = (float)av_strdup(param_5);
      av_freep(pdVar6);
      if (fVar3 == 0.0) goto LAB_0002caac;
      *(float *)pdVar6 = fVar3;
      uVar4 = *param_2;
    }
    iVar1 = 0;
    if ((uVar4 & 0x800) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0002b538(0);
    }
  }
  else {
    pcVar2 = strchr(param_4,0x3a);
    fVar3 = (float)FUN_0002c7b8(*(float *)pdVar6,0x10,(float *)((int)pdVar6 + 4),
                                (int)*(float *)((int)pdVar6 + 4) + 1);
    *(float *)pdVar6 = fVar3;
    if (pcVar2 == (char *)0x0) {
      pcVar2 = (char *)(DAT_0002caf0 + 0x2ca34);
    }
    else {
      pcVar2 = pcVar2 + 1;
    }
    iVar1 = av_strdup(pcVar2);
    if (iVar1 != 0) {
      fVar3 = *(float *)pdVar6;
      uVar4 = *param_2;
      iVar5 = (int)*(float *)((int)pdVar6 + 4) + 0xfffffff;
      *(int *)((int)fVar3 + iVar5 * 0x10) = iVar1;
      pdVar6 = (double *)((int)fVar3 + iVar5 * 0x10 + 8);
      goto joined_r0x0002c98c;
    }
LAB_0002caac:
    iVar1 = -0xc;
  }
  return iVar1;
}



/* ===== FUN_0002caf8 @ 0002caf8 size=464 ===== */

uint FUN_0002caf8(undefined4 param_1,char *param_2,int param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  char *local_24;
  
  iVar1 = *param_4;
  piVar3 = param_4;
  if (iVar1 != 0) {
    do {
      iVar1 = av_strstart(param_2,iVar1,&local_24);
      if ((iVar1 != 0) && (*local_24 == ':' || *local_24 == '\0')) {
        if (*piVar3 != 0) {
          uVar2 = piVar3[1];
          if ((uVar2 & 2) != 0) goto LAB_0002cbac;
          goto LAB_0002cbe0;
        }
        break;
      }
      piVar3 = piVar3 + 5;
      iVar1 = *piVar3;
    } while (iVar1 != 0);
  }
  if ((*param_2 == 'n') && (param_2[1] == 'o')) {
    iVar1 = *param_4;
    if (iVar1 != 0) {
      piVar3 = param_4;
      do {
        iVar1 = av_strstart(param_2 + 2,iVar1,&local_24);
        if ((iVar1 != 0) && (*local_24 == ':' || *local_24 == '\0')) {
          if (*piVar3 != 0) {
            uVar2 = piVar3[1];
            if ((uVar2 & 2) == 0) goto LAB_0002cbe0;
            param_3 = (int)&DAT_0002ccc8 + DAT_0002cce0;
            goto LAB_0002cbb4;
          }
          break;
        }
        piVar3 = piVar3 + 5;
        iVar1 = *piVar3;
      } while (iVar1 != 0);
    }
    uVar2 = (uint)(param_3 == 0);
    piVar3 = (int *)(DAT_0002ccdc + 0x2cc9c);
  }
  else {
    if ((piVar3[1] & 2U) != 0) {
      if (*piVar3 == 0) {
        piVar3 = (int *)(DAT_0002ccd4 + 0x2cc2c);
        param_3 = DAT_0002ccd8 + 0x2cc30;
      }
      else {
LAB_0002cbac:
        param_3 = DAT_0002cccc + 0x2cbb8;
      }
      goto LAB_0002cbb4;
    }
    uVar2 = (uint)(param_3 == 0);
    if (*piVar3 == 0) {
      piVar3 = (int *)(DAT_0002ccc8 + 0x2cb94);
    }
    else {
      uVar2 = uVar2 & piVar3[1];
    }
  }
LAB_0002cbec:
  if (uVar2 != 0) {
    av_log(0,0x10,DAT_0002ccd0 + 0x2cc0c,param_2);
    return 0xffffffea;
  }
LAB_0002cbb4:
  uVar2 = FUN_0002c868(param_1,piVar3 + 1,piVar3 + 2,param_2,param_3);
  if (-1 < (int)uVar2) {
    uVar2 = piVar3[1] & 1;
  }
  return uVar2;
LAB_0002cbe0:
  if (param_3 == 0) {
    uVar2 = uVar2 & 1;
  }
  else {
    uVar2 = 0;
  }
  goto LAB_0002cbec;
}



/* ===== FUN_0002ce44 @ 0002ce44 size=316 ===== */

int FUN_0002ce44(undefined4 param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = param_2[1];
  av_log(0,0x30,DAT_0002cf80 + 0x2ce74,*(undefined4 *)*param_2,iVar7);
  iVar1 = param_2[3];
  if (0 < iVar1) {
    iVar4 = 0;
    iVar5 = 0;
    iVar6 = DAT_0002cf84 + 0x2ce98;
    do {
      iVar5 = iVar5 + 1;
      uVar2 = ((undefined4 *)*param_2)[2];
      piVar3 = (int *)(param_2[2] + iVar4);
      iVar7 = *(int *)(param_2[2] + iVar4);
      iVar4 = iVar4 + 0xc;
      if ((uVar2 != 0) && ((uVar2 & *(uint *)(iVar7 + 4)) == 0)) {
        av_log(0,0x10,DAT_0002cf8c + 0x2cf6c,piVar3[1],*(undefined4 *)(iVar7 + 0xc),
               *(undefined4 *)*param_2,param_2[1]);
        return -0x16;
      }
      av_log(0,0x30,iVar6,piVar3[1],*(undefined4 *)(iVar7 + 0xc),piVar3[2]);
      iVar7 = piVar3[2];
      iVar1 = FUN_0002c868(param_1,*piVar3 + 4,*piVar3 + 8,piVar3[1],iVar7);
      if (iVar1 < 0) {
        return iVar1;
      }
      iVar1 = param_2[3];
    } while (iVar5 < iVar1);
  }
  av_log(0,0x30,DAT_0002cf88 + 0x2cf38,iVar1,iVar7);
  return 0;
}



/* ===== FUN_0002cf90 @ 0002cf90 size=1908 ===== */

int FUN_0002cf90(int *param_1,int param_2,int param_3,int *param_4,undefined4 *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  char *__s2;
  int iVar18;
  int *piVar19;
  int *piVar20;
  int iVar21;
  int local_40;
  char *local_2c [2];
  
  iVar18 = DAT_0002d704 + 0x2cfbc;
  memset(param_1,0,0x48);
  param_1[9] = param_6;
  iVar1 = av_calloc(param_6,0xc);
  param_1[8] = iVar1;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002b538(1);
  }
  iVar3 = param_1[9];
  if (0 < iVar3) {
    iVar5 = 0;
    do {
      *(int *)(iVar1 + iVar5) = (int)param_5 + iVar5;
      iVar5 = iVar5 + 0xc;
    } while (iVar3 * 0xc - iVar5 != 0);
  }
  iVar1 = DAT_0002d70c + 0x2d030;
  *param_1 = DAT_0002d708 + 0x2d02c;
  param_1[1] = iVar1;
  av_log(0,0x30,DAT_0002d710 + 0x2d03c);
  if (1 < param_2) {
    iVar1 = 1;
    iVar5 = DAT_0002d714 + 0x2d05c;
    iVar3 = DAT_0002d718 + 0x2d064;
    local_40 = -2;
    do {
      iVar16 = iVar1 + 1;
      pcVar9 = *(char **)(param_3 + iVar1 * 4);
      av_log(0,0x30,iVar5,pcVar9);
      iVar6 = DAT_0002d71c;
      iVar13 = iVar1 * 4;
      if (*pcVar9 == '-') {
        if ((pcVar9[1] != '-') || (iVar2 = iVar16, pcVar9[2] != '\0')) {
          if (pcVar9[1] == '\0' || local_40 == iVar1) goto LAB_0002d07c;
          iVar6 = 0;
          __s2 = pcVar9 + 1;
          puVar12 = param_5;
          if (0 < param_6) {
            do {
              if (((char *)puVar12[1] != (char *)0x0) &&
                 (iVar2 = strcmp((char *)puVar12[1],__s2), iVar2 == 0)) {
                iVar13 = *(int *)(iVar13 + param_3 + 4);
                if (iVar13 == 0) {
                  av_log(0,0x10,DAT_0002d750 + 0x2d6b0,__s2);
                  return -0x16;
                }
                iVar16 = param_1[8];
                iVar11 = iVar16 + iVar6 * 0xc;
                iVar2 = FUN_0002c7b8(*(undefined4 *)(iVar11 + 4),0x20,(int *)(iVar11 + 8),
                                     *(int *)(iVar11 + 8) + 1);
                uVar4 = *(undefined4 *)(iVar16 + iVar6 * 0xc);
                iVar14 = *(int *)(iVar11 + 8) + 0x7ffffff;
                *(int *)(iVar11 + 4) = iVar2;
                iVar6 = DAT_0002d71c;
                iVar16 = param_1[0xb];
                iVar11 = param_1[0xc];
                iVar21 = param_1[0xd];
                piVar10 = (int *)(iVar2 + iVar14 * 0x20);
                *piVar10 = param_1[10];
                piVar10[1] = iVar16;
                piVar10[2] = iVar11;
                piVar10[3] = iVar21;
                iVar16 = DAT_0002d720;
                iVar11 = param_1[0xf];
                iVar21 = param_1[0x10];
                iVar7 = param_1[0x11];
                piVar10[4] = param_1[0xe];
                piVar10[5] = iVar11;
                piVar10[6] = iVar21;
                piVar10[7] = iVar7;
                iVar11 = DAT_0002d728;
                piVar10[1] = iVar13;
                *(undefined4 *)(iVar2 + iVar14 * 0x20) = uVar4;
                iVar2 = DAT_0002d724;
                piVar19 = *(int **)(iVar18 + iVar6);
                iVar6 = DAT_0002d730 + 0x2d408;
                piVar10[6] = *piVar19;
                piVar15 = *(int **)(iVar18 + iVar2);
                piVar10[7] = *piVar15;
                piVar20 = *(int **)(iVar18 + iVar16);
                piVar10[4] = *piVar20;
                piVar17 = *(int **)(iVar18 + iVar11);
                piVar10[5] = *piVar17;
                *piVar15 = 0;
                param_1[10] = 0;
                param_1[0xb] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                param_1[0xc] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                param_1[0xd] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                param_1[0xe] = 0;
                param_1[0xf] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                param_1[0x10] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                param_1[0x11] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                uVar4 = *puVar12;
                *piVar17 = 0;
                *piVar20 = 0;
                *piVar19 = 0;
                av_log(0,0x30,iVar6,uVar4,iVar13);
                iVar16 = iVar1 + 2;
                iVar2 = local_40;
                goto joined_r0x0002d468;
              }
              iVar6 = iVar6 + 1;
              puVar12 = puVar12 + 3;
            } while (param_6 != iVar6);
          }
          iVar6 = *param_4;
          if (iVar6 != 0) {
            piVar10 = param_4;
            do {
              iVar6 = av_strstart(__s2,iVar6,local_2c);
              if ((iVar6 != 0) && (*local_2c[0] == ':' || *local_2c[0] == '\0')) {
                if (*piVar10 != 0) {
                  uVar8 = piVar10[1];
                  if ((uVar8 & 0x800) == 0) {
                    if ((uVar8 & 1) == 0) {
                      iVar1 = DAT_0002d748 + 0x2d654;
                    }
                    else {
                      iVar16 = iVar1 + 2;
                      iVar1 = *(int *)(param_3 + iVar13 + 4);
                      if (iVar1 == 0) {
                        av_log(0,0x10,DAT_0002d758 + 0x2d6f4,__s2);
                        return -0x16;
                      }
                    }
                  }
                  else {
                    iVar16 = iVar1 + 2;
                    iVar1 = *(int *)(param_3 + iVar13 + 4);
                  }
                  piVar15 = param_1;
                  if ((uVar8 & 0xe000) != 0) {
                    piVar15 = param_1 + 10;
                  }
                  iVar13 = FUN_0002c7b8(piVar15[2],0xc,piVar15 + 3,piVar15[3] + 1);
                  iVar2 = *piVar10;
                  iVar6 = DAT_0002d73c + 0x2d564;
                  iVar21 = piVar15[3] * 0xc + -0xc;
                  piVar15[2] = iVar13;
                  iVar11 = iVar13 + iVar21;
                  *(int **)(iVar13 + iVar21) = piVar10;
                  *(char **)(iVar11 + 4) = __s2;
                  *(int *)(iVar11 + 8) = iVar1;
                  av_log(0,0x30,iVar6,iVar2,piVar10[3],iVar1);
                  iVar2 = local_40;
                  goto joined_r0x0002d468;
                }
                break;
              }
              piVar10 = piVar10 + 5;
              iVar6 = *piVar10;
            } while (iVar6 != 0);
          }
          iVar13 = iVar13 + 4;
          if (*(int *)(param_3 + iVar13) != 0) {
            iVar6 = FUN_0002b000(0,__s2);
            if (-1 < iVar6) {
              av_log(0,0x30,DAT_0002d74c + 0x2d68c,__s2,*(undefined4 *)(param_3 + iVar13));
              iVar16 = iVar1 + 2;
              iVar2 = local_40;
              goto joined_r0x0002d468;
            }
            if (iVar6 != -0x54504ff8) {
              av_log(0,0x10,DAT_0002d754 + 0x2d6d4,__s2,*(undefined4 *)(param_3 + iVar13));
              return iVar6;
            }
          }
          if ((pcVar9[1] != 'n') || (pcVar9[2] != 'o')) {
LAB_0002d310:
            av_log(0,0x10,DAT_0002d72c + 0x2d328,__s2);
            return -0x54504ff8;
          }
          iVar1 = *param_4;
          if (iVar1 == 0) goto LAB_0002d310;
          piVar10 = param_4;
          while ((iVar1 = av_strstart(pcVar9 + 3,iVar1,local_2c), iVar1 == 0 ||
                 (*local_2c[0] != ':' && *local_2c[0] != '\0'))) {
            piVar10 = piVar10 + 5;
            iVar1 = *piVar10;
            if (iVar1 == 0) goto LAB_0002d310;
          }
          if ((*piVar10 == 0) || ((piVar10[1] & 2U) == 0)) goto LAB_0002d310;
          piVar15 = param_1;
          if ((piVar10[1] & 0xe000U) != 0) {
            piVar15 = param_1 + 10;
          }
          iVar1 = DAT_0002d740 + 0x2d5cc;
          iVar13 = FUN_0002c7b8(piVar15[2],0xc,piVar15 + 3,piVar15[3] + 1);
          iVar2 = *piVar10;
          iVar6 = DAT_0002d744 + 0x2d600;
          iVar21 = piVar15[3] * 0xc + -0xc;
          piVar15[2] = iVar13;
          iVar11 = piVar10[3];
          *(int **)(iVar13 + iVar21) = piVar10;
          iVar13 = iVar13 + iVar21;
          *(char **)(iVar13 + 4) = __s2;
          *(int *)(iVar13 + 8) = iVar1;
          av_log(0,0x30,iVar6,iVar2,iVar11);
          iVar2 = local_40;
        }
      }
      else {
LAB_0002d07c:
        puVar12 = (undefined4 *)param_1[8];
        iVar13 = FUN_0002c7b8(puVar12[1],0x20,puVar12 + 2,puVar12[2] + 1);
        uVar4 = *puVar12;
        iVar7 = puVar12[2];
        puVar12[1] = iVar13;
        iVar1 = DAT_0002d720;
        iVar2 = param_1[0xb];
        iVar11 = param_1[0xc];
        iVar21 = param_1[0xd];
        piVar20 = (int *)(iVar13 + (iVar7 + 0x7ffffff) * 0x20);
        *piVar20 = param_1[10];
        piVar20[1] = iVar2;
        piVar20[2] = iVar11;
        piVar20[3] = iVar21;
        iVar2 = param_1[0xf];
        iVar11 = param_1[0x10];
        iVar21 = param_1[0x11];
        piVar20[4] = param_1[0xe];
        piVar20[5] = iVar2;
        piVar20[6] = iVar11;
        piVar20[7] = iVar21;
        piVar20[1] = (int)pcVar9;
        *(undefined4 *)(iVar13 + (iVar7 + 0x7ffffff) * 0x20) = uVar4;
        iVar2 = DAT_0002d728;
        iVar13 = DAT_0002d724;
        piVar15 = *(int **)(iVar18 + iVar6);
        piVar20[6] = *piVar15;
        piVar19 = *(int **)(iVar18 + iVar13);
        piVar20[7] = *piVar19;
        piVar17 = *(int **)(iVar18 + iVar1);
        piVar20[4] = *piVar17;
        piVar10 = *(int **)(iVar18 + iVar2);
        *piVar19 = 0;
        piVar20[5] = *piVar10;
        param_1[10] = 0;
        param_1[0xb] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        param_1[0xc] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        param_1[0xd] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        param_1[0xe] = 0;
        param_1[0xf] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        param_1[0x10] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        param_1[0x11] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uVar4 = *param_5;
        *piVar10 = 0;
        *piVar17 = 0;
        *piVar15 = 0;
        av_log(0,0x30,iVar3,uVar4);
        iVar2 = local_40;
      }
joined_r0x0002d468:
      local_40 = iVar2;
      iVar1 = iVar16;
    } while (iVar1 < param_2);
  }
  if (((param_1[0xd] != 0) || (**(int **)(iVar18 + DAT_0002d720) != 0)) ||
     (**(int **)(iVar18 + DAT_0002d728) != 0)) {
    av_log(0,0x18,DAT_0002d734 + 0x2d4a4);
  }
  av_log(0,0x30,DAT_0002d738 + 0x2d4bc);
  return 0;
}



/* ===== FUN_0002d75c @ 0002d75c size=88 ===== */

int FUN_0002d75c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = av_mallocz(param_2);
  if ((iVar1 != 0) && (iVar2 = av_dynarray_add_nofree(param_1,param_3,iVar1), -1 < iVar2)) {
    return iVar1;
  }
  av_log(0,0x10,DAT_0002d7b4 + 0x2d7ac);
                    /* WARNING: Subroutine does not return */
  FUN_0002b538(1);
}



/* ===== FUN_0002d7b8 @ 0002d7b8 size=128 ===== */

undefined4 FUN_0002d7b8(int param_1)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 extraout_s1;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = DAT_0002d838;
  if (param_1 != 0) {
    uVar2 = av_display_rotation_get();
    dVar3 = round((double)CONCAT44(extraout_s1,uVar2));
    dVar1 = DAT_0002d850;
    dVar5 = DAT_0002d840;
    dVar4 = floor(-dVar3 / DAT_0002d840 + DAT_0002d848);
    dVar5 = -dVar3 - dVar4 * dVar5;
    dVar3 = round(dVar5 / dVar1);
    if (2.0 < ABS(dVar5 - dVar3 * dVar1)) {
      av_log(0,0x18,DAT_0002d858 + 0x2d82c);
    }
  }
  return SUB84(dVar5,0);
}



/* ===== FUN_0002d898 @ 0002d898 size=1224 ===== */

void FUN_0002d898(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  char *__format;
  char acStack_98 [128];
  
  iVar1 = av_codec_is_encoder();
  if (iVar1 == 0) {
    uVar4 = *param_1;
    iVar1 = param_1[1];
    iVar3 = DAT_0002dd60 + 0x2d8c4;
  }
  else {
    uVar4 = *param_1;
    iVar1 = param_1[1];
    iVar3 = DAT_0002dda0 + 0x2dbb0;
  }
  if (iVar1 == 0) {
    iVar1 = DAT_0002dda4 + 0x2dbbc;
  }
  printf((char *)(DAT_0002dd64 + 0x2d8d0),iVar3,uVar4,iVar1);
  printf((char *)(DAT_0002dd68 + 0x2d8dc));
  uVar5 = param_1[4];
  if ((uVar5 & 1) != 0) {
    printf((char *)(DAT_0002dddc + 0x2dcc8));
    uVar5 = param_1[4];
  }
  if ((uVar5 & 2) != 0) {
    printf((char *)(DAT_0002ddd8 + 0x2dcb4));
    uVar5 = param_1[4];
  }
  if ((uVar5 & 0x20) != 0) {
    printf((char *)(DAT_0002ddd4 + 0x2dca0));
    uVar5 = param_1[4];
  }
  if ((uVar5 & 0x40) != 0) {
    printf((char *)(DAT_0002ddd0 + 0x2dc8c));
    uVar5 = param_1[4];
  }
  if ((uVar5 & 0x100) != 0) {
    printf((char *)(DAT_0002ddcc + 0x2dc78));
    uVar5 = param_1[4];
  }
  if ((uVar5 & 0x200) != 0) {
    printf((char *)(DAT_0002ddc8 + 0x2dc64));
    uVar5 = param_1[4];
  }
  if ((uVar5 & 0x400) != 0) {
    printf((char *)(DAT_0002ddc4 + 0x2dc50));
    uVar5 = param_1[4];
  }
  if ((uVar5 & 0x4000) != 0) {
    printf((char *)(DAT_0002ddc0 + 0x2dc3c));
    uVar5 = param_1[4];
  }
  if ((uVar5 & 0x10000) != 0) {
    printf((char *)(DAT_0002ddbc + 0x2dc28));
    uVar5 = param_1[4];
  }
  if ((uVar5 & 0xb000) != 0) {
    printf((char *)(DAT_0002ddb8 + 0x2dc14));
    uVar5 = param_1[4];
  }
  if ((uVar5 & 0x20000) != 0) {
    printf((char *)(DAT_0002ddb4 + 0x2dc00));
    uVar5 = param_1[4];
  }
  if ((uVar5 & 0x40000) != 0) {
    printf((char *)(DAT_0002ddb0 + 0x2dbec));
    uVar5 = param_1[4];
  }
  if ((uVar5 & 0x80000) != 0) {
    printf((char *)(DAT_0002ddac + 0x2dbd8));
    uVar5 = param_1[4];
  }
  if (uVar5 == 0) {
    printf((char *)(DAT_0002dda8 + 0x2dbc8));
  }
  putchar(10);
  if (1 < (uint)param_1[2]) goto LAB_0002d964;
  printf((char *)(DAT_0002dde0 + 0x2dcdc));
  uVar5 = param_1[4] & 0xb000;
  if (uVar5 == 0x2000) {
    printf((char *)(DAT_0002ddf4 + 0x2dd5c));
  }
  else if (uVar5 < 0x2001) {
    if (uVar5 == 0x1000) {
      printf((char *)(DAT_0002dde8 + 0x2dd24));
    }
    else {
LAB_0002dd40:
      printf((char *)(DAT_0002ddf0 + 0x2dd4c));
    }
  }
  else if (uVar5 == 0x3000) {
    printf((char *)(DAT_0002ddec + 0x2dd3c));
  }
  else {
    if (uVar5 != 0x8000) goto LAB_0002dd40;
    printf((char *)(DAT_0002dde4 + 0x2dd0c));
  }
  putchar(10);
LAB_0002d964:
  iVar3 = avcodec_get_hw_config(param_1,0);
  iVar1 = DAT_0002dd70;
  if (iVar3 != 0) {
    iVar3 = 0;
    printf((char *)(DAT_0002dd6c + 0x2d98c));
    while( true ) {
      iVar2 = avcodec_get_hw_config(param_1,iVar3);
      iVar3 = iVar3 + 1;
      if (iVar2 == 0) break;
      uVar4 = av_hwdevice_get_type_name(*(undefined4 *)(iVar2 + 8));
      printf((char *)(iVar1 + 0x2d994),uVar4);
    }
    putchar(10);
  }
  iVar1 = DAT_0002dd78;
  piVar6 = (int *)param_1[6];
  if (piVar6 != (int *)0x0) {
    printf((char *)(DAT_0002dd74 + 0x2d9e4));
    iVar3 = *piVar6;
    while (iVar3 != 0) {
      printf((char *)(iVar1 + 0x2d9f0),iVar3,piVar6[1]);
      piVar6 = piVar6 + 2;
      iVar3 = *piVar6;
    }
    putchar(10);
  }
  piVar6 = (int *)param_1[7];
  if (piVar6 != (int *)0x0) {
    printf((char *)(DAT_0002dd7c + 0x2da2c));
    if (*piVar6 != -1) {
      pcVar7 = (char *)(DAT_0002dd80 + 0x2da44);
      do {
        uVar4 = av_get_pix_fmt_name();
        printf(pcVar7,uVar4);
        piVar6 = piVar6 + 1;
      } while (*piVar6 != -1);
    }
    putchar(10);
  }
  piVar6 = (int *)param_1[8];
  if (piVar6 != (int *)0x0) {
    printf((char *)(DAT_0002dd84 + 0x2da7c));
    if (*piVar6 != 0) {
      __format = (char *)(DAT_0002dd88 + 0x2da9c);
      pcVar7 = (char *)(DAT_0002dd8c + 0x2daa0);
      do {
        snprintf(acStack_98,0x10,__format);
        printf(pcVar7,acStack_98);
        piVar6 = piVar6 + 1;
      } while (*piVar6 != 0);
    }
    putchar(10);
  }
  piVar6 = (int *)param_1[9];
  if (piVar6 != (int *)0x0) {
    printf((char *)(DAT_0002dd90 + 0x2dae4));
    if (*piVar6 != -1) {
      pcVar7 = (char *)(DAT_0002dd94 + 0x2dafc);
      do {
        uVar4 = av_get_sample_fmt_name();
        printf(pcVar7,uVar4);
        piVar6 = piVar6 + 1;
      } while (*piVar6 != -1);
    }
    putchar(10);
  }
  iVar1 = param_1[0xe];
  if (iVar1 != 0) {
    printf((char *)(DAT_0002dd98 + 0x2db34));
    if (*(int *)(iVar1 + 4) != 0) {
      pcVar7 = (char *)(DAT_0002dd9c + 0x2db50);
      do {
        av_channel_layout_describe(iVar1,acStack_98,0x80);
        printf(pcVar7,acStack_98);
        piVar6 = (int *)(iVar1 + 0x1c);
        iVar1 = iVar1 + 0x18;
      } while (*piVar6 != 0);
    }
    putchar(10);
  }
  if (param_1[0xb] != 0) {
    FUN_0002b898(param_1[0xb],3);
  }
  return;
}



/* ===== FUN_0002ddf8 @ 0002ddf8 size=260 ===== */

void FUN_0002ddf8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *__format;
  char *__format_00;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  char *__format_01;
  int iVar6;
  char *__format_02;
  
  if (0 < param_1[1]) {
    iVar5 = 0;
    __format = (char *)(DAT_0002defc + 0x2de24);
    iVar6 = DAT_0002df00 + 0x2de30;
    __format_02 = (char *)(DAT_0002df04 + 0x2de38);
    __format_00 = (char *)(DAT_0002df08 + 0x2de3c);
    do {
      puVar4 = *(undefined4 **)(*param_1 + iVar5 * 4);
      if (param_1[2] == iVar5) {
        uVar2 = 0x2a;
      }
      else {
        uVar2 = 0x20;
      }
      printf(__format,uVar2,*puVar4,puVar4[1]);
      if ((int)puVar4[3] < 1) {
        printf(__format_00);
      }
      else {
        iVar3 = 0;
        __format_01 = (char *)(DAT_0002df10 + 0x2dea4);
        iVar1 = av_get_media_type_string(*(undefined4 *)puVar4[2]);
        while( true ) {
          iVar3 = iVar3 + 1;
          if (iVar1 == 0) {
            iVar1 = iVar6;
          }
          printf(__format_01,iVar1);
          if ((int)puVar4[3] <= iVar3) break;
          iVar1 = av_get_media_type_string(*(undefined4 *)(puVar4[2] + iVar3 * 4));
          printf(__format_02);
        }
      }
      iVar5 = iVar5 + 1;
      puts((char *)(DAT_0002df0c + 0x2de50));
    } while (iVar5 < param_1[1]);
    return;
  }
  return;
}



/* ===== FUN_0002df14 @ 0002df14 size=144 ===== */

void FUN_0002df14(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  char acStack_418 [1024];
  
  iVar1 = DAT_0002dfa4;
  iVar2 = DAT_0002dfa4 + 0x2df34;
  av_log_default_callback();
  av_log_format_line(param_1,param_2,param_3,param_4,acStack_418,0x400,iVar2);
  if (*(int *)(iVar1 + 0x2df38) < param_2) {
    return;
  }
  puVar3 = (undefined4 *)(DAT_0002dfa8 + 0x2df8c);
  fputs(acStack_418,(FILE *)*puVar3);
  fflush((FILE *)*puVar3);
  return;
}



/* ===== FUN_0002dfac @ 0002dfac size=176 ===== */

int FUN_0002dfac(int param_1,undefined4 *param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  
  if (param_1 == 0) {
    puts((char *)(DAT_0002e064 + 0x2e048));
    return 0;
  }
  pcVar1 = (char *)av_strdup();
  *param_2 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    iVar2 = -0xc;
  }
  else {
    pcVar1 = strchr(pcVar1,0x2c);
    if (((pcVar1 != (char *)0x0) && (*pcVar1 = '\0', pcVar1[1] != '\0')) &&
       (iVar2 = av_dict_parse_string
                          (param_3,pcVar1 + 1,DAT_0002e060 + 0x2e028,DAT_0002e05c + 0x2e024,0),
       iVar2 < 0)) {
      av_freep(param_2);
      return iVar2;
    }
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== FUN_0002e068 @ 0002e068 size=220 ===== */

int FUN_0002e068(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
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
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_5c = 0;
  if (((param_1 == (undefined4 *)0x0) || (param_1[5] == 0)) ||
     (uVar2 = *(uint *)(param_1[5] + 0x18), (uVar2 & 0xfffffffd) != 0x29 && uVar2 != 0x2d)) {
    iVar1 = -0x16;
  }
  else {
    printf((char *)(DAT_0002e144 + 0x2e0c0),*param_1);
    iVar1 = avdevice_list_input_sources(param_1,0,param_2,&local_5c);
    if (iVar1 < 0) {
      uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_58 = 0;
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      local_20 = 0;
      uStack_44 = uStack_54;
      uStack_3c = uStack_54;
      uStack_34 = uStack_54;
      uStack_2c = uStack_54;
      uStack_24 = uStack_54;
      uStack_1c = uStack_54;
      av_strerror(iVar1,&local_58,0x40);
      printf((char *)(DAT_0002e148 + 0x2e138),&local_58);
    }
    else {
      FUN_0002ddf8(local_5c);
    }
    avdevice_free_list_devices(&local_5c);
  }
  return iVar1;
}



/* ===== FUN_0002e14c @ 0002e14c size=220 ===== */

int FUN_0002e14c(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
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
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_5c = 0;
  if (((param_1 == (undefined4 *)0x0) || (param_1[9] == 0)) ||
     (uVar2 = *(uint *)(param_1[9] + 0x18), (uVar2 & 0xfffffffd) != 0x28 && uVar2 != 0x2c)) {
    iVar1 = -0x16;
  }
  else {
    printf((char *)(DAT_0002e228 + 0x2e1a4),*param_1);
    iVar1 = avdevice_list_output_sinks(param_1,0,param_2,&local_5c);
    if (iVar1 < 0) {
      uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_58 = 0;
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      local_20 = 0;
      uStack_44 = uStack_54;
      uStack_3c = uStack_54;
      uStack_34 = uStack_54;
      uStack_2c = uStack_54;
      uStack_24 = uStack_54;
      uStack_1c = uStack_54;
      av_strerror(iVar1,&local_58,0x40);
      printf((char *)(DAT_0002e22c + 0x2e21c),&local_58);
    }
    else {
      FUN_0002ddf8(local_5c);
    }
    avdevice_free_list_devices(&local_5c);
  }
  return iVar1;
}



/* ===== FUN_0002e230 @ 0002e230 size=216 ===== */

size_t FUN_0002e230(undefined4 *param_1)

{
  void *__base;
  int iVar1;
  size_t __nmemb;
  size_t sVar2;
  int *piVar3;
  
  __nmemb = 0;
  iVar1 = 0;
  while (iVar1 = avcodec_descriptor_next(iVar1), iVar1 != 0) {
    __nmemb = __nmemb + 1;
  }
  __base = (void *)av_calloc(__nmemb,4);
  if (__base == (void *)0x0) {
    av_log(0,0x10,DAT_0002e30c + 0x2e2d4);
                    /* WARNING: Subroutine does not return */
    FUN_0002b538(1);
  }
  piVar3 = (int *)((int)__base + -4);
  iVar1 = 0;
  sVar2 = 0;
  while (iVar1 = avcodec_descriptor_next(iVar1), iVar1 != 0) {
    sVar2 = sVar2 + 1;
    piVar3 = piVar3 + 1;
    *piVar3 = iVar1;
  }
  if (__nmemb == sVar2) {
    qsort(__base,__nmemb,4,(__compar_fn_t)(DAT_0002e308 + 0x2e2b4));
    *param_1 = __base;
    return __nmemb;
  }
  av_log(0,0,DAT_0002e318 + 0x2e304,DAT_0002e314 + 0x2e300,DAT_0002e310 + 0x2e2f4,0x289);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== FUN_0002e31c @ 0002e31c size=820 ===== */

undefined4 FUN_0002e31c(char *param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  char *__s2;
  char *pcVar8;
  undefined4 *unaff_r6;
  char *__s2_00;
  char *pcVar9;
  char *pcVar10;
  undefined4 local_30;
  undefined4 local_2c [2];
  
  iVar3 = DAT_0002e658;
  local_30 = 0;
  local_2c[0] = 0;
  if (param_1 == (char *)0x0) {
    iVar4 = DAT_0002e650 + 0x2e34c;
  }
  else {
    iVar4 = DAT_0002e664 + 0x2e56c;
  }
  printf((char *)(DAT_0002e654 + 0x2e358),iVar4);
  pcVar7 = (char *)(DAT_0002e65c + 0x2e368);
  __s2_00 = (char *)(iVar3 + 0x2e364);
  if (param_2 != 1) goto LAB_0002e44c;
LAB_0002e378:
  __s2 = param_1;
  pcVar8 = param_1;
  pcVar9 = param_1;
  if (param_1 != (char *)0x0) {
    __s2 = (char *)0x0;
    pcVar8 = __s2;
    pcVar9 = __s2;
    goto LAB_0002e394;
  }
LAB_0002e578:
  local_30 = 0;
  bVar1 = false;
  while (puVar2 = (undefined4 *)av_demuxer_iterate(&local_30), puVar2 != (undefined4 *)0x0) {
    pcVar10 = (char *)*puVar2;
    if (__s2 == (char *)0x0) {
LAB_0002e618:
      iVar3 = strcmp(pcVar10,__s2_00);
      if (0 < iVar3) {
        pcVar8 = (char *)puVar2[1];
        pcVar9 = (char *)0x0;
        bVar1 = true;
        __s2 = pcVar10;
      }
    }
    else {
      iVar3 = strcmp(pcVar10,__s2);
      if (iVar3 < 0) goto LAB_0002e618;
      if (iVar3 == 0) {
        bVar1 = true;
      }
    }
  }
LAB_0002e3fc:
  unaff_r6 = &local_30;
  if (__s2 == (char *)0x0) {
    return 0;
  }
  if (bVar1) {
    uVar5 = 0x44;
  }
  else {
    uVar5 = 0x20;
  }
  do {
    if (pcVar9 == (char *)0x0) {
      uVar6 = 0x20;
    }
    else {
      uVar6 = 0x45;
    }
    if (pcVar8 == (char *)0x0) {
      pcVar8 = pcVar7;
    }
    printf((char *)(DAT_0002e660 + 0x2e434),uVar5,uVar6,__s2,pcVar8);
    __s2_00 = __s2;
    if (param_2 == 1) goto LAB_0002e378;
LAB_0002e44c:
    if (param_1 != (char *)0x0) {
      unaff_r6 = local_2c;
    }
    local_2c[0] = 0;
    if (param_1 != (char *)0x0) {
      __s2 = (char *)0x0;
      pcVar8 = __s2;
      pcVar9 = __s2;
      while (puVar2 = (undefined4 *)av_muxer_iterate(unaff_r6), puVar2 != (undefined4 *)0x0) {
        while (((puVar2[9] != 0 && (*(int *)(puVar2[9] + 0x18) - 0x28U < 6)) &&
               ((pcVar10 = (char *)*puVar2, __s2 == (char *)0x0 ||
                (iVar3 = strcmp(pcVar10,__s2), iVar3 < 0))))) {
          iVar3 = strcmp(pcVar10,__s2_00);
          if (0 < iVar3) {
            pcVar8 = (char *)puVar2[1];
            pcVar9 = param_1;
            __s2 = pcVar10;
          }
          puVar2 = (undefined4 *)av_muxer_iterate(unaff_r6);
          if (puVar2 == (undefined4 *)0x0) goto LAB_0002e4e4;
        }
      }
LAB_0002e4e4:
      if (param_2 != 2) break;
    }
    else {
      unaff_r6 = local_2c;
      __s2 = param_1;
      pcVar8 = param_1;
      pcVar9 = param_1;
      while (puVar2 = (undefined4 *)av_muxer_iterate(unaff_r6), puVar2 != (undefined4 *)0x0) {
        pcVar10 = (char *)*puVar2;
        if (((__s2 == (char *)0x0) || (iVar3 = strcmp(pcVar10,__s2), iVar3 < 0)) &&
           (iVar3 = strcmp(pcVar10,__s2_00), 0 < iVar3)) {
          pcVar8 = (char *)puVar2[1];
          pcVar9 = (char *)0x1;
          __s2 = pcVar10;
        }
      }
      if (param_2 != 2) goto LAB_0002e578;
    }
    if (__s2 == (char *)0x0) {
      return 0;
    }
    uVar5 = 0x20;
  } while( true );
LAB_0002e394:
  local_30 = 0;
  bVar1 = false;
LAB_0002e39c:
  puVar2 = (undefined4 *)av_demuxer_iterate(&local_30);
  if (puVar2 != (undefined4 *)0x0) {
    while( true ) {
      if ((puVar2[5] == 0) || (5 < *(int *)(puVar2[5] + 0x18) - 0x28U)) goto LAB_0002e39c;
      pcVar10 = (char *)*puVar2;
      if (__s2 == (char *)0x0) break;
      iVar3 = strcmp(pcVar10,__s2);
      if (iVar3 < 0) {
        iVar3 = strcmp(pcVar10,__s2_00);
        if (0 < iVar3) {
          pcVar8 = (char *)puVar2[1];
          pcVar9 = (char *)0x0;
          bVar1 = true;
          __s2 = pcVar10;
        }
        goto LAB_0002e39c;
      }
      if (iVar3 == 0) {
        bVar1 = true;
      }
      puVar2 = (undefined4 *)av_demuxer_iterate(&local_30);
      if (puVar2 == (undefined4 *)0x0) goto LAB_0002e3fc;
    }
    iVar3 = strcmp(pcVar10,__s2_00);
    if (0 < iVar3) {
      pcVar8 = (char *)puVar2[1];
      pcVar9 = (char *)0x0;
      bVar1 = true;
      __s2 = pcVar10;
    }
    goto LAB_0002e39c;
  }
  goto LAB_0002e3fc;
}



/* ===== FUN_0002e668 @ 0002e668 size=240 ===== */

void FUN_0002e668(void)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char acStack_28c [632];
  
  pcVar2 = (char *)(DAT_0002e75c + 0x2e694);
  memcpy(acStack_28c,(void *)(DAT_0002e758 + 0x2e688),0x271);
  while (pcVar1 = strstr(acStack_28c,pcVar2), pcVar1 != (char *)0x0) {
    *pcVar1 = '~';
  }
  pcVar2 = (char *)(DAT_0002e760 + 0x2e6c0);
  while (pcVar1 = strstr(acStack_28c,pcVar2), iVar3 = DAT_0002e768, pcVar1 != (char *)0x0) {
    pcVar1[10] = ' ';
  }
  pcVar2 = strtok(acStack_28c,(char *)(DAT_0002e764 + 0x2e6ec));
  iVar3 = iVar3 + 0x2e6f4;
  av_log(0,0x20,DAT_0002e76c + 0x2e704,iVar3);
  if (pcVar2 != (char *)0x0) {
    iVar4 = DAT_0002e770 + 0x2e720;
    do {
      av_log(0,0x20,iVar4,iVar3,iVar3,pcVar2);
      pcVar2 = strtok((char *)0x0,(char *)(DAT_0002e774 + 0x2e748));
    } while (pcVar2 != (char *)0x0);
  }
  return;
}



/* ===== FUN_0002e778 @ 0002e778 size=2560 ===== */

void FUN_0002e778(uint param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if ((param_1 & 1) == 0) {
    iVar5 = DAT_0002f178 + 0x2e79c;
    if ((param_1 & 2) == 0) goto LAB_0002e79c;
LAB_0002e7bc:
    uVar4 = avutil_version();
    iVar3 = DAT_0002f180 + 0x2e7d4;
    av_log(0,0x20,iVar3,iVar5,DAT_0002f184 + 0x2e7dc,0x39,0x1c,100,uVar4 >> 0x10,
           (uVar4 & 0xffff) >> 8,uVar4 & 0xff);
    if ((param_1 & 4) == 0) {
      uVar4 = avcodec_version();
      av_log(0,0x20,iVar3,iVar5,DAT_0002f188 + 0x2e838,0x3b,0x25,100,uVar4 >> 0x10,
             (uVar4 & 0xffff) >> 8,uVar4 & 0xff);
      uVar4 = avformat_version();
      av_log(0,0x20,iVar3,iVar5,DAT_0002f18c + 0x2e894,0x3b,0x1b,100,uVar4 >> 0x10,
             (uVar4 & 0xffff) >> 8,uVar4 & 0xff);
      uVar4 = avdevice_version();
      av_log(0,0x20,iVar3,iVar5,DAT_0002f190 + 0x2e8dc,0x3b,7,100,uVar4 >> 0x10,
             (uVar4 & 0xffff) >> 8,uVar4 & 0xff);
      uVar4 = avfilter_version();
      av_log(0,0x20,iVar3,iVar5,DAT_0002f194 + 0x2e920,8,0x2c,100,uVar4 >> 0x10,
             (uVar4 & 0xffff) >> 8,uVar4 & 0xff);
      uVar4 = swscale_version();
      av_log(0,0x20,iVar3,iVar5,DAT_0002f198 + 0x2e974,6,7,100,uVar4 >> 0x10,(uVar4 & 0xffff) >> 8,
             uVar4 & 0xff);
      uVar4 = swresample_version();
      av_log(0,0x20,iVar3,iVar5,DAT_0002f19c + 0x2e9c0,4,7,100,uVar4 >> 0x10,(uVar4 & 0xffff) >> 8,
             uVar4 & 0xff);
      uVar4 = postproc_version();
      av_log(0,0x20,iVar3,iVar5,DAT_0002f1a0 + 0x2ea08,0x38,6,100,uVar4 >> 0x10,
             (uVar4 & 0xffff) >> 8,uVar4 & 0xff);
      return;
    }
  }
  else {
    iVar5 = DAT_0002f17c + 0x2e7bc;
    if ((param_1 & 2) != 0) goto LAB_0002e7bc;
LAB_0002e79c:
    if ((param_1 & 4) == 0) {
      return;
    }
  }
  param_1 = param_1 & 2;
  pcVar1 = (char *)avutil_configuration();
  iVar2 = strcmp((char *)(DAT_0002f1a4 + 0x2ea5c),pcVar1);
  iVar3 = DAT_0002f1a8;
  if (iVar2 != 0) {
    if (*(int *)(DAT_0002f1a8 + 0x2ea74) == 0) {
      av_log(0,0x20,DAT_0002f270 + 0x2f08c,iVar5);
      *(undefined4 *)(iVar3 + 0x2ea74) = 1;
    }
    av_log(0,0x20,DAT_0002f1b0 + 0x2ea98,iVar5,DAT_0002f1ac + 0x2ea90,pcVar1);
  }
  if (param_1 == 0) {
    pcVar1 = (char *)avcodec_configuration();
    iVar3 = strcmp((char *)(DAT_0002f1b4 + 0x2eac0),pcVar1);
    if (iVar3 != 0) {
LAB_0002eac8:
      iVar3 = DAT_0002f1b8;
      if (*(int *)(DAT_0002f1b8 + 0x2ead8) == 0) {
        av_log(0,0x20,DAT_0002f28c + 0x2f16c,iVar5);
        *(undefined4 *)(iVar3 + 0x2ead8) = 1;
      }
      av_log(0,0x20,DAT_0002f1c0 + 0x2eafc,iVar5,DAT_0002f1bc + 0x2eaf4,pcVar1);
      if (param_1 != 0) goto LAB_0002eb0c;
    }
    pcVar1 = (char *)avformat_configuration();
    iVar3 = strcmp((char *)(DAT_0002f240 + 0x2eef0),pcVar1);
    if (iVar3 != 0) {
LAB_0002eb84:
      iVar3 = DAT_0002f1d0;
      if (*(int *)(DAT_0002f1d0 + 0x2eb94) == 0) {
        av_log(0,0x20,DAT_0002f284 + 0x2f12c,iVar5);
        *(undefined4 *)(iVar3 + 0x2eb94) = 1;
      }
      av_log(0,0x20,DAT_0002f1d8 + 0x2ebb8,iVar5,DAT_0002f1d4 + 0x2ebb0,pcVar1);
      if (param_1 != 0) goto LAB_0002ebc8;
    }
    pcVar1 = (char *)avdevice_configuration();
    iVar3 = strcmp((char *)(DAT_0002f244 + 0x2ef10),pcVar1);
    if (iVar3 != 0) {
LAB_0002ef18:
      iVar3 = DAT_0002f248;
      if (*(int *)(DAT_0002f248 + 0x2ef28) == 0) {
        av_log(0,0x20,DAT_0002f27c + 0x2f0ec,iVar5);
        *(undefined4 *)(iVar3 + 0x2ef28) = 1;
      }
      av_log(0,0x20,DAT_0002f250 + 0x2ef4c,iVar5,DAT_0002f24c + 0x2ef44,pcVar1);
      if (param_1 != 0) goto LAB_0002ec40;
    }
    pcVar1 = (char *)avfilter_configuration();
    iVar3 = strcmp((char *)(DAT_0002f254 + 0x2ef74),pcVar1);
    if (iVar3 != 0) {
LAB_0002ecb8:
      iVar3 = DAT_0002f1f4;
      if (*(int *)(DAT_0002f1f4 + 0x2ecc8) == 0) {
        av_log(0,0x20,DAT_0002f278 + 0x2f0cc,iVar5);
        *(undefined4 *)(iVar3 + 0x2ecc8) = 1;
      }
      av_log(0,0x20,DAT_0002f1fc + 0x2ecec,iVar5,DAT_0002f1f8 + 0x2ece4,pcVar1);
      if (param_1 != 0) goto LAB_0002ecfc;
    }
  }
  else {
    uVar4 = avcodec_version();
    av_log(0,0x20,DAT_0002f268 + 0x2f048,iVar5,DAT_0002f264 + 0x2f00c,0x3b,0x25,100,uVar4 >> 0x10,
           (uVar4 & 0xffff) >> 8,uVar4 & 0xff);
    pcVar1 = (char *)avcodec_configuration();
    iVar3 = strcmp((char *)(DAT_0002f26c + 0x2f06c),pcVar1);
    if (iVar3 != 0) goto LAB_0002eac8;
LAB_0002eb0c:
    uVar4 = avformat_version();
    av_log(0,0x20,DAT_0002f1c8 + 0x2eb58,iVar5,DAT_0002f1c4 + 0x2eb1c,0x3b,0x1b,100,uVar4 >> 0x10,
           (uVar4 & 0xffff) >> 8,uVar4 & 0xff);
    pcVar1 = (char *)avformat_configuration();
    iVar3 = strcmp((char *)(DAT_0002f1cc + 0x2eb7c),pcVar1);
    if (iVar3 != 0) goto LAB_0002eb84;
LAB_0002ebc8:
    uVar4 = avdevice_version();
    av_log(0,0x20,DAT_0002f1e0 + 0x2ec14,iVar5,DAT_0002f1dc + 0x2ebd8,0x3b,7,100,uVar4 >> 0x10,
           (uVar4 & 0xffff) >> 8,uVar4 & 0xff);
    pcVar1 = (char *)avdevice_configuration();
    iVar3 = strcmp((char *)(DAT_0002f1e4 + 0x2ec38),pcVar1);
    if (iVar3 != 0) goto LAB_0002ef18;
LAB_0002ec40:
    uVar4 = avfilter_version();
    av_log(0,0x20,DAT_0002f1ec + 0x2ec8c,iVar5,DAT_0002f1e8 + 0x2ec50,8,0x2c,100,uVar4 >> 0x10,
           (uVar4 & 0xffff) >> 8,uVar4 & 0xff);
    pcVar1 = (char *)avfilter_configuration();
    iVar3 = strcmp((char *)(DAT_0002f1f0 + 0x2ecb0),pcVar1);
    if (iVar3 != 0) goto LAB_0002ecb8;
LAB_0002ecfc:
    uVar4 = swscale_version();
    av_log(0,0x20,DAT_0002f204 + 0x2ed50,iVar5,DAT_0002f200 + 0x2ed0c,6,7,100,uVar4 >> 0x10,
           (uVar4 & 0xffff) >> 8,uVar4 & 0xff);
  }
  pcVar1 = (char *)swscale_configuration();
  iVar2 = strcmp((char *)(DAT_0002f208 + 0x2ed6c),pcVar1);
  iVar3 = DAT_0002f20c;
  if (iVar2 != 0) {
    if (*(int *)(DAT_0002f20c + 0x2ed84) == 0) {
      av_log(0,0x20,DAT_0002f274 + 0x2f0ac,iVar5);
      *(undefined4 *)(iVar3 + 0x2ed84) = 1;
    }
    av_log(0,0x20,DAT_0002f214 + 0x2eda8,iVar5,DAT_0002f210 + 0x2eda0,pcVar1);
  }
  if (param_1 == 0) {
    pcVar1 = (char *)swresample_configuration();
    iVar3 = strcmp((char *)(DAT_0002f218 + 0x2edd0),pcVar1);
    if (iVar3 == 0) goto LAB_0002ee74;
LAB_0002edd8:
    iVar3 = DAT_0002f21c;
    if (*(int *)(DAT_0002f21c + 0x2ede8) == 0) {
      av_log(0,0x20,DAT_0002f280 + 0x2f10c,iVar5);
      *(undefined4 *)(iVar3 + 0x2ede8) = 1;
    }
    av_log(0,0x20,DAT_0002f224 + 0x2ee0c,iVar5,DAT_0002f220 + 0x2ee04,pcVar1);
    if (param_1 == 0) goto LAB_0002ee74;
  }
  else {
    uVar4 = swresample_version();
    av_log(0,0x20,DAT_0002f25c + 0x2efcc,iVar5,DAT_0002f258 + 0x2ef90,4,7,100,uVar4 >> 0x10,
           (uVar4 & 0xffff) >> 8,uVar4 & 0xff);
    pcVar1 = (char *)swresample_configuration();
    iVar3 = strcmp((char *)(DAT_0002f260 + 0x2eff0),pcVar1);
    if (iVar3 != 0) goto LAB_0002edd8;
  }
  uVar4 = postproc_version();
  av_log(0,0x20,DAT_0002f22c + 0x2ee70,iVar5,DAT_0002f228 + 0x2ee2c,0x38,6,100,uVar4 >> 0x10,
         (uVar4 & 0xffff) >> 8,uVar4 & 0xff);
LAB_0002ee74:
  pcVar1 = (char *)postproc_configuration();
  iVar2 = strcmp((char *)(DAT_0002f230 + 0x2ee8c),pcVar1);
  iVar3 = DAT_0002f234;
  if (iVar2 == 0) {
    return;
  }
  if (*(int *)(DAT_0002f234 + 0x2eea4) == 0) {
    av_log(0,0x20,DAT_0002f288 + 0x2f14c,iVar5);
    *(undefined4 *)(iVar3 + 0x2eea4) = 1;
  }
  av_log(0,0x20,DAT_0002f23c + 0x2eec8,iVar5,DAT_0002f238 + 0x2eec0,pcVar1);
  return;
}



/* ===== FUN_0002f290 @ 0002f290 size=548 ===== */

void FUN_0002f290(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  char *pcVar8;
  int *piVar9;
  char *__format;
  char *__format_00;
  int iVar10;
  int local_38;
  int local_30;
  undefined4 local_2c [2];
  
  iVar1 = FUN_0002e230(&local_30);
  if (param_1 == 0) {
    iVar5 = DAT_0002f4b4 + 0x2f2bc;
  }
  else {
    iVar5 = (int)&DAT_0002f4b4 + DAT_0002f4f8;
  }
  printf((char *)(DAT_0002f4b8 + 0x2f2c4),iVar5);
  if (iVar1 == 0) {
LAB_0002f350:
    av_free(local_30);
    return;
  }
  iVar5 = DAT_0002f4bc + 0x2f2ec;
  local_38 = 0;
  __format_00 = (char *)(DAT_0002f4c0 + 0x2f2f4);
  __format = (char *)(DAT_0002f4c4 + 0x2f2fc);
  pcVar8 = (char *)(DAT_0002f4c8 + 0x2f300);
LAB_0002f300:
  piVar9 = *(int **)(local_30 + local_38 * 4);
  local_2c[0] = 0;
  do {
    iVar10 = *piVar9;
    do {
      while( true ) {
        do {
          puVar2 = (undefined4 *)av_codec_iterate(local_2c);
          if (puVar2 == (undefined4 *)0x0) {
            local_38 = local_38 + 1;
            if (iVar1 != local_38) goto LAB_0002f300;
            goto LAB_0002f350;
          }
        } while (iVar10 != puVar2[3]);
        if (param_1 == 0) break;
        iVar3 = av_codec_is_encoder();
        if (iVar3 != 0) goto LAB_0002f374;
      }
      iVar3 = av_codec_is_decoder();
    } while (iVar3 == 0);
LAB_0002f374:
    if ((uint)piVar9[1] < 5) {
      uVar6 = (uint)*(byte *)(iVar5 + piVar9[1]);
    }
    else {
      uVar6 = 0x3f;
    }
    printf(__format_00,uVar6);
    pcVar4 = pcVar8;
    if ((puVar2[4] & 0x1000) == 0) {
      pcVar4 = (char *)(DAT_0002f4cc + 0x2f3a4);
    }
    printf(pcVar4);
    if ((puVar2[4] & 0x2000) == 0) {
      pcVar4 = (char *)(DAT_0002f4d0 + 0x2f3bc);
    }
    else {
      pcVar4 = (char *)(DAT_0002f4f0 + 0x2f494);
    }
    printf(pcVar4);
    if ((puVar2[4] & 0x200) == 0) {
      pcVar4 = (char *)(DAT_0002f4d4 + 0x2f3d4);
    }
    else {
      pcVar4 = (char *)(DAT_0002f4ec + 0x2f488);
    }
    printf(pcVar4);
    if ((puVar2[4] & 1) == 0) {
      pcVar4 = (char *)(DAT_0002f4d8 + 0x2f3ec);
    }
    else {
      pcVar4 = (char *)(DAT_0002f4e8 + 0x2f47c);
    }
    printf(pcVar4);
    if ((puVar2[4] & 2) == 0) {
      printf((char *)(DAT_0002f4dc + 0x2f404));
      uVar7 = *puVar2;
      iVar10 = puVar2[1];
    }
    else {
      printf((char *)(DAT_0002f4e0 + 0x2f458));
      uVar7 = *puVar2;
      iVar10 = puVar2[1];
    }
    if (iVar10 == 0) {
      iVar10 = DAT_0002f4e4 + 0x2f470;
    }
    printf(__format,uVar7,iVar10);
    pcVar4 = (char *)piVar9[2];
    iVar10 = strcmp((char *)*puVar2,pcVar4);
    if (iVar10 != 0) {
      printf((char *)(DAT_0002f4f4 + 0x2f4a4),pcVar4);
    }
    putchar(10);
  } while( true );
}



/* ===== FUN_0002f4fc @ 0002f4fc size=308 ===== */

void FUN_0002f4fc(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 local_24;
  
  if (param_1 == 0) {
    av_log(0,0x10,DAT_0002f638 + 0x2f608);
  }
  else {
    if (param_2 == 0) {
      iVar2 = avcodec_find_decoder_by_name();
    }
    else {
      iVar2 = avcodec_find_encoder_by_name();
    }
    if (iVar2 == 0) {
      piVar3 = (int *)avcodec_descriptor_get_by_name(param_1);
      if (piVar3 != (int *)0x0) {
        bVar1 = false;
        local_24 = 0;
        do {
          iVar2 = *piVar3;
          do {
            while( true ) {
              do {
                iVar4 = av_codec_iterate(&local_24);
                if (iVar4 == 0) {
                  if (bVar1) {
                    return;
                  }
                  if (param_2 == 0) {
                    iVar2 = DAT_0002f630 + 0x2f5a4;
                  }
                  else {
                    iVar2 = DAT_0002f63c + 0x2f618;
                  }
                  av_log(0,0x10,DAT_0002f634 + 0x2f5bc,param_1,iVar2);
                  return;
                }
              } while (iVar2 != *(int *)(iVar4 + 0xc));
              if (param_2 == 0) break;
              iVar5 = av_codec_is_encoder();
              if (iVar5 != 0) goto LAB_0002f5d8;
            }
            iVar5 = av_codec_is_decoder();
          } while (iVar5 == 0);
LAB_0002f5d8:
          bVar1 = true;
          FUN_0002d898(iVar4);
        } while( true );
      }
      av_log(0,0x10,DAT_0002f640 + 0x2f62c,param_1);
    }
    else {
      FUN_0002d898(iVar2);
    }
  }
  return;
}



/* ===== FUN_0002f678 @ 0002f678 size=236 ===== */

void FUN_0002f678(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_0002f768;
  iVar2 = FUN_0002b90c();
  iVar1 = DAT_0002f778;
  iVar3 = iVar3 + 0x2f69c;
  if (iVar2 != 0 || **(int **)(iVar3 + DAT_0002f76c) != 0) {
    return;
  }
  av_log(0,0x20,DAT_0002f774 + 0x2f6d0,*(undefined4 *)(iVar3 + DAT_0002f770));
  av_log(0,0x20,DAT_0002f780 + 0x2f6f0,**(undefined4 **)(iVar3 + DAT_0002f77c),0x7e6);
  av_log(0,0x20,DAT_0002f784 + 0x2f710);
  av_log(0,0x20,DAT_0002f78c + 0x2f730,iVar1 + 0x2f6f8,DAT_0002f788 + 0x2f724);
  av_log(0,0x20,DAT_0002f790 + 0x2f748,iVar1 + 0x2f6f8);
  FUN_0002e778(5);
  FUN_0002e778(3);
  return;
}



/* ===== FUN_0002f794 @ 0002f794 size=204 ===== */

undefined4 FUN_0002f794(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0002f860 + 0x2f7ac;
  iVar1 = DAT_0002f868 + 0x2f7b8;
  av_log_set_callback(*(undefined4 *)(iVar2 + DAT_0002f864));
  av_log(0,0x20,DAT_0002f870 + 0x2f7d4,*(undefined4 *)(iVar2 + DAT_0002f86c));
  av_log(0,0x20,DAT_0002f878 + 0x2f7f4,**(undefined4 **)(iVar2 + DAT_0002f874),0x7e6);
  av_log(0,0x20,DAT_0002f87c + 0x2f810);
  av_log(0,0x20,DAT_0002f884 + 0x2f830,iVar1,DAT_0002f880 + 0x2f824);
  av_log(0,0x20,DAT_0002f888 + 0x2f848,iVar1);
  FUN_0002e778(2);
  return 0;
}



/* ===== FUN_0002ff4c @ 0002ff4c size=820 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0002ff4c(void)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  uint __c;
  undefined4 *puVar4;
  int iVar5;
  char *__format;
  char *__format_00;
  char *__format_01;
  int *piVar6;
  int iVar7;
  char *__needle;
  int local_34 [4];
  
  iVar1 = FUN_0002e230(local_34);
  puts((char *)(DAT_00030280 + 0x2ff6c));
  iVar3 = local_34[0];
  if (iVar1 != 0) {
    iVar7 = 0;
    __format = (char *)(DAT_00030284 + 0x2ff8c);
    __needle = (char *)(DAT_00030288 + 0x2ff98);
    __format_00 = (char *)(DAT_0003028c + 0x2ff9c);
    __format_01 = (char *)(DAT_00030290 + 0x2ffa8);
    do {
      while( true ) {
        piVar6 = *(int **)(iVar3 + iVar7 * 4);
        local_34[1] = 0;
        pcVar2 = strstr((char *)piVar6[2],__needle);
        if (pcVar2 != (char *)0x0) break;
        putchar(0x20);
        iVar3 = avcodec_find_decoder(*piVar6);
        if (iVar3 == 0) {
          pcVar2 = (char *)(DAT_000302c8 + 0x30268);
        }
        else {
          pcVar2 = (char *)(DAT_00030294 + 0x2fffc);
        }
        printf(pcVar2);
        iVar3 = avcodec_find_encoder(*piVar6);
        if (iVar3 == 0) {
          pcVar2 = (char *)((int)&DAT_00030280 + DAT_000302d0);
        }
        else {
          pcVar2 = (char *)(DAT_00030298 + 0x30018);
        }
        printf(pcVar2);
        if ((uint)piVar6[1] < 5) {
          __c = (uint)*(byte *)(DAT_0003029c + 0x30030 + piVar6[1]);
        }
        else {
          __c = 0x3f;
        }
        putchar(__c);
        if ((piVar6[4] & 1U) == 0) {
          pcVar2 = (char *)(DAT_000302a0 + 0x3004c);
        }
        else {
          pcVar2 = (char *)(DAT_000302c4 + 0x3025c);
        }
        printf(pcVar2);
        if ((piVar6[4] & 2U) == 0) {
          pcVar2 = (char *)(DAT_000302a4 + 0x30064);
        }
        else {
          pcVar2 = (char *)(DAT_000302c0 + 0x30250);
        }
        printf(pcVar2);
        if ((piVar6[4] & 4U) == 0) {
          pcVar2 = (char *)(DAT_000302a8 + 0x3007c);
        }
        else {
          pcVar2 = (char *)(DAT_000302bc + 0x30244);
        }
        printf(pcVar2);
        iVar3 = piVar6[3];
        if (iVar3 == 0) {
          iVar3 = DAT_000302cc + 0x30274;
        }
        printf(__format,piVar6[2],iVar3);
        do {
          iVar3 = *piVar6;
          do {
            puVar4 = (undefined4 *)av_codec_iterate(local_34 + 1);
            if (puVar4 == (undefined4 *)0x0) goto LAB_000300bc;
          } while ((iVar3 != puVar4[3]) || (iVar5 = av_codec_is_decoder(), iVar5 == 0));
          iVar3 = strcmp((char *)*puVar4,(char *)piVar6[2]);
        } while (iVar3 == 0);
        iVar3 = *piVar6;
        local_34[2] = 0;
        printf((char *)(DAT_000302b8 + 0x301d0),DAT_000302b4 + 0x301c8);
        while (puVar4 = (undefined4 *)av_codec_iterate(local_34 + 2), puVar4 != (undefined4 *)0x0) {
          if ((iVar3 == puVar4[3]) && (iVar5 = av_codec_is_decoder(), iVar5 != 0)) {
            printf(__format_01,*puVar4);
          }
        }
        putchar(0x29);
LAB_000300bc:
        local_34[1] = 0;
        do {
          iVar3 = *piVar6;
          do {
            puVar4 = (undefined4 *)av_codec_iterate(local_34 + 1);
            if (puVar4 == (undefined4 *)0x0) {
              putchar(10);
              goto LAB_000300f4;
            }
          } while ((iVar3 != puVar4[3]) || (iVar5 = av_codec_is_encoder(), iVar5 == 0));
          iVar3 = strcmp((char *)*puVar4,(char *)piVar6[2]);
        } while (iVar3 == 0);
        iVar3 = *piVar6;
        local_34[2] = 0;
        printf((char *)(DAT_000302b0 + 0x30154),DAT_000302ac + 0x3014c);
        while (puVar4 = (undefined4 *)av_codec_iterate(local_34 + 2), puVar4 != (undefined4 *)0x0) {
          if ((iVar3 == puVar4[3]) && (iVar5 = av_codec_is_encoder(), iVar5 != 0)) {
            printf(__format_00,*puVar4);
          }
        }
        putchar(0x29);
        putchar(10);
LAB_000300f4:
        iVar7 = iVar7 + 1;
        iVar3 = local_34[0];
        if (iVar1 == iVar7) goto LAB_00030100;
      }
      iVar7 = iVar7 + 1;
    } while (iVar1 != iVar7);
  }
LAB_00030100:
  av_free(iVar3);
  return 0;
}



/* ===== FUN_000302e8 @ 000302e8 size=20 ===== */

undefined4 FUN_000302e8(void)

{
  FUN_0002f290(1);
  return 0;
}



/* ===== FUN_000309e4 @ 000309e4 size=52 ===== */

undefined4 FUN_000309e4(void)

{
  uint uVar1;
  char *__s;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = uVar2 & 0xff;
    uVar2 = uVar2 + 1;
    __s = (char *)av_disposition_to_string(1 << uVar1);
    if (__s != (char *)0x0) {
      puts(__s);
    }
  } while (uVar2 != 0x20);
  return 0;
}



/* ===== FUN_00030a18 @ 00030a18 size=60 ===== */

int FUN_00030a18(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_c;
  
  local_c = av_get_cpu_flags();
  iVar1 = av_parse_cpu_caps(&local_c,param_3);
  if (-1 < iVar1) {
    av_force_cpu_flags(local_c);
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_00030a54 @ 00030a54 size=80 ===== */

int FUN_00030a54(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_10;
  int local_c;
  
  local_c = DAT_00030aa8 + 0x30a78;
  iVar1 = av_opt_eval_int(&local_c,DAT_00030aa4 + 0x30a74,param_3,&local_10);
  if (iVar1 != 0) {
    return iVar1;
  }
  av_cpu_force_count(local_10);
  return 0;
}



/* ===== FUN_00030aac @ 00030aac size=1280 ===== */

/* WARNING: Type propagation algorithm not settling */

int FUN_00030aac(char *param_1,undefined4 *param_2)

{
  bool bVar1;
  char *__s1;
  tm *ptVar2;
  long lVar3;
  int iVar4;
  FILE *pFVar5;
  int *piVar6;
  char cVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char *local_498;
  char *local_47c [2];
  char *local_474;
  char *local_470;
  time_t atStack_46c [3];
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 local_450;
  undefined4 uStack_44c;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 local_440;
  undefined4 uStack_43c;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 local_430;
  undefined4 uStack_42c;
  char *local_428;
  uint local_424;
  uint uStack_420;
  
  iVar8 = DAT_00030fb0 + 0x30ad0;
  if (*(int *)(DAT_00030fac + 0x30abc) == 0) {
    local_47c[0] = param_1;
    time(atStack_46c);
    ptVar2 = localtime(atStack_46c);
    if ((local_47c[0] == (char *)0x0) || (*local_47c[0] == '\0')) {
      local_498 = (char *)0x0;
      bVar1 = false;
      pcVar9 = (char *)(DAT_00030ffc + 0x30f6c);
      av_bprint_init(&local_428,0,1);
      cVar7 = '%';
    }
    else {
      pcVar9 = (char *)(DAT_00030fb4 + 0x30b48);
      iVar12 = DAT_00030fb8 + 0x30b60;
      iVar11 = DAT_00030fbc + 0x30b64;
      iVar10 = 0;
      local_498 = (char *)0x0;
      bVar1 = false;
      while (iVar4 = av_opt_get_key_value(local_47c,iVar11,iVar12,0,&local_474,&local_470),
            __s1 = local_474, -1 < iVar4) {
        iVar10 = iVar10 + 1;
        if (*local_47c[0] != '\0') {
          local_47c[0] = local_47c[0] + 1;
        }
        iVar4 = strcmp(local_474,pcVar9);
        if (iVar4 == 0) {
          av_free(local_498);
          local_498 = local_470;
          local_470 = (char *)0x0;
        }
        else {
          iVar4 = strcmp(__s1,(char *)(DAT_00030fc4 + 0x30c3c));
          if (iVar4 == 0) {
            lVar3 = strtol(local_470,&local_428,10);
            cVar7 = *local_428;
            *(long *)(DAT_00030fc0 + 0x30ba4) = lVar3;
            if (cVar7 != '\0') {
              av_log(0,8,DAT_00031004 + 0x30fa4);
                    /* WARNING: Subroutine does not return */
              FUN_0002b538(1);
            }
            bVar1 = true;
          }
          else {
            av_log(0,0x10,DAT_00030fc8 + 0x30c60,__s1);
          }
        }
        av_free(local_470);
        av_free(local_474);
        if ((local_47c[0] == (char *)0x0) || (*local_47c[0] == '\0')) goto LAB_00030c98;
      }
      if (iVar10 != 0) {
        atStack_46c[2] = *(time_t *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_460 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_45c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        atStack_46c[1] = 0;
        local_458 = 0;
        local_450 = 0;
        local_448 = 0;
        local_440 = 0;
        local_438 = 0;
        local_430 = 0;
        uStack_454 = atStack_46c[2];
        uStack_44c = atStack_46c[2];
        uStack_444 = atStack_46c[2];
        uStack_43c = atStack_46c[2];
        uStack_434 = atStack_46c[2];
        uStack_42c = atStack_46c[2];
        av_strerror(iVar4,atStack_46c + 1,0x40);
        av_log(0,0x10,DAT_00030ff0 + 0x30f00,atStack_46c + 1);
      }
LAB_00030c98:
      av_bprint_init(&local_428,0,1);
      if (local_498 == (char *)0x0) {
        cVar7 = '%';
        pcVar9 = (char *)(DAT_00030ff4 + 0x30f14);
      }
      else {
        cVar7 = *local_498;
        pcVar9 = local_498;
      }
    }
    iVar11 = DAT_00030fcc + 0x30cc8;
    iVar10 = DAT_00030fd0 + 0x30cd0;
    while (cVar7 != '\0') {
      if (cVar7 == '%') {
        cVar7 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        if (cVar7 == '\0') break;
        if (cVar7 == 'p') {
          av_bprintf(&local_428,iVar11,*(undefined4 *)(iVar8 + DAT_00030fd4));
        }
        else if (cVar7 == 't') {
          av_bprintf(&local_428,iVar10,ptVar2->tm_year + 0x76c,ptVar2->tm_mon + 1,ptVar2->tm_mday,
                     ptVar2->tm_hour,ptVar2->tm_min,ptVar2->tm_sec);
        }
        else if (cVar7 == '%') {
          av_bprint_chars(&local_428,0x25,1);
        }
      }
      else {
        pcVar9 = pcVar9 + 1;
        av_bprint_chars(&local_428);
      }
      cVar7 = *pcVar9;
    }
    av_free(local_498);
    if (uStack_420 <= local_424) {
      av_log(0,0x10,DAT_00031000 + 0x30f8c);
      return -0xc;
    }
    iVar10 = av_log_get_level();
    if (!bVar1) {
      iVar11 = *(int *)(DAT_00030fd8 + 0x30dc0);
      if (*(int *)(DAT_00030fd8 + 0x30dc0) < iVar10) {
        iVar11 = iVar10;
      }
      *(int *)(DAT_00030fd8 + 0x30dc0) = iVar11;
    }
    iVar10 = DAT_00030fe0;
    pFVar5 = fopen64(local_428,(char *)(DAT_00030fdc + 0x30dd8));
    *(undefined4 *)(iVar10 + 0x30de4) = pFVar5;
    if (pFVar5 == (FILE *)0x0) {
      piVar6 = __errno_location();
      iVar8 = *piVar6;
      pcVar9 = strerror(iVar8);
      av_log(0,0x10,DAT_00030ff8 + 0x30f3c,local_428,pcVar9);
      return -iVar8;
    }
    av_log_set_callback(DAT_00030fe4 + 0x30dfc);
    av_log(0,0x20,DAT_00030fec + 0x30e3c,*(undefined4 *)(iVar8 + DAT_00030fd4),
           ptVar2->tm_year + 0x76c,ptVar2->tm_mon + 1,ptVar2->tm_mday,ptVar2->tm_hour,ptVar2->tm_min
           ,ptVar2->tm_sec,local_428,*(undefined4 *)(DAT_00030fe8 + 0x30e14));
    av_bprint_finalize(&local_428,0);
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(iVar10 + 0x30de4);
      return 0;
    }
  }
  return 0;
}



/* ===== FUN_00031014 @ 00031014 size=92 ===== */

undefined4 FUN_00031014(undefined4 param_1,undefined4 param_2,char *param_3)

{
  char *local_14 [2];
  
  strtol(param_3,local_14,10);
  if (*local_14[0] == '\0') {
    av_max_alloc();
    return 0;
  }
  av_log(0,8,DAT_00031070 + 0x31068,param_3);
                    /* WARNING: Subroutine does not return */
  FUN_0002b538(1);
}



/* ===== FUN_00031074 @ 00031074 size=880 ===== */

undefined4 FUN_00031074(undefined4 param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  char *local_7c;
  char *apcStack_78 [3];
  long lStack_6c;
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  char *local_30;
  
  local_7c = param_3;
  memcpy(apcStack_78 + 2,(void *)(DAT_000313e4 + 0x3109c),0x48);
  uVar2 = av_log_get_flags();
  lVar3 = av_log_get_level();
  if (local_7c == (char *)0x0) {
    av_log(0,0,DAT_00031410 + 0x313e0,DAT_0003140c + 0x313d4,DAT_00031408 + 0x313c8,0x4e0);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  cVar1 = *local_7c;
  if (cVar1 != '\0') {
    iVar9 = 0;
    iVar5 = DAT_000313e8 + 0x310dc;
    iVar8 = DAT_000313ec + 0x310e8;
    iVar6 = DAT_000313f0 + 0x310ec;
    do {
      pcVar7 = local_7c;
      if ((cVar1 - 0x2bU & 0xfd) == 0) {
        pcVar7 = local_7c + 1;
        iVar4 = av_strstart(pcVar7,DAT_000313f4 + 0x31104,&local_7c);
        if (iVar4 == 0) {
          iVar4 = av_strstart(pcVar7,DAT_000313fc + 0x31198,&local_7c);
          if (iVar4 == 0) goto LAB_000311e8;
          if (cVar1 != '-') goto LAB_0003117c;
          uVar2 = uVar2 & 0xfffffffd;
        }
        else {
          if (cVar1 != '-') goto LAB_000311b0;
          uVar2 = uVar2 | 1;
        }
      }
      else if (iVar9 == 0) {
        iVar4 = av_strstart(local_7c,iVar8,&local_7c);
        if (iVar4 == 0) {
          iVar4 = av_strstart(pcVar7,DAT_000313f8 + 0x31174,&local_7c);
          uVar2 = 0;
          if (iVar4 == 0) {
            uVar2 = 0;
            iVar9 = 0;
LAB_000311e8:
            if (*local_7c == '\0') break;
            if (*local_7c == '+') {
              local_7c = local_7c + 1;
            }
            else if (iVar9 == 0) {
              uVar2 = av_log_get_flags();
            }
            pcVar7 = local_7c;
            iVar5 = strcmp(apcStack_78[2],local_7c);
            iVar9 = 0;
            if (iVar5 != 0) {
              iVar9 = strcmp(local_68,pcVar7);
              if (iVar9 == 0) {
                iVar9 = 1;
              }
              else {
                iVar9 = strcmp(local_60,pcVar7);
                if (iVar9 == 0) {
                  iVar9 = 2;
                }
                else {
                  iVar9 = strcmp(local_58,pcVar7);
                  if (iVar9 == 0) {
                    iVar9 = 3;
                  }
                  else {
                    iVar9 = strcmp(local_50,pcVar7);
                    if (iVar9 == 0) {
                      iVar9 = 4;
                    }
                    else {
                      iVar9 = strcmp(local_48,pcVar7);
                      if (iVar9 == 0) {
                        iVar9 = 5;
                      }
                      else {
                        iVar9 = strcmp(local_40,pcVar7);
                        if (iVar9 == 0) {
                          iVar9 = 6;
                        }
                        else {
                          iVar9 = strcmp(local_38,pcVar7);
                          if (iVar9 == 0) {
                            iVar9 = 7;
                          }
                          else {
                            iVar9 = strcmp(local_30,pcVar7);
                            if (iVar9 != 0) {
                              lVar3 = strtol(pcVar7,apcStack_78 + 1,10);
                              iVar9 = DAT_00031404;
                              if (*apcStack_78[1] != '\0') {
                                av_log(0,8,DAT_00031400 + 0x31304,local_7c);
                                iVar5 = 1;
                                do {
                                  iVar6 = iVar5 + 1;
                                  av_log(0,8,iVar9 + 0x31314,apcStack_78[iVar5 * 2]);
                                  iVar5 = iVar6;
                                } while (iVar6 != 10);
                    /* WARNING: Subroutine does not return */
                                FUN_0002b538(1);
                              }
                              break;
                            }
                            iVar9 = 8;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            lVar3 = (&lStack_6c)[iVar9 * 2];
            break;
          }
LAB_0003117c:
          uVar2 = uVar2 | 2;
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        iVar4 = av_strstart(local_7c,iVar5,&local_7c);
        if (iVar4 == 0) {
          iVar4 = av_strstart(pcVar7,iVar6,&local_7c);
          if (iVar4 == 0) goto LAB_000311e8;
          goto LAB_0003117c;
        }
LAB_000311b0:
        uVar2 = uVar2 & 0xfffffffe;
      }
      iVar9 = iVar9 + 1;
      cVar1 = *local_7c;
    } while (cVar1 != '\0');
  }
  av_log_set_flags(uVar2);
  av_log_set_level(lVar3);
  return 0;
}



/* ===== FUN_00031414 @ 00031414 size=268 ===== */

int FUN_00031414(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  char *extraout_r1;
  undefined4 *puVar4;
  char *__s1;
  char *__s2;
  undefined8 uVar5;
  undefined8 uVar6;
  int local_28;
  undefined4 local_24 [2];
  
  puVar4 = (undefined4 *)0x0;
  local_28 = 0;
  local_24[0] = 0;
  uVar1 = av_log_get_level();
  av_log_set_level(0x18);
  uVar5 = FUN_0002dfac(param_3,&local_28,local_24);
  __s1 = (char *)((ulonglong)uVar5 >> 0x20);
  if (-1 < (int)uVar5) {
    __s2 = (char *)(DAT_00031520 + 0x31464);
    while (puVar4 = (undefined4 *)av_input_audio_device_next(puVar4,__s1),
          puVar3 = (undefined4 *)0x0, puVar4 != (undefined4 *)0x0) {
      __s1 = (char *)*puVar4;
      iVar2 = strcmp(__s1,__s2);
      if ((iVar2 != 0) &&
         ((local_28 == 0 ||
          (uVar6 = av_match_name(), __s1 = (char *)((ulonglong)uVar6 >> 0x20), (int)uVar6 != 0)))) {
        FUN_0002e068(puVar4,local_24[0]);
        __s1 = extraout_r1;
      }
    }
    while (puVar3 = (undefined4 *)av_input_video_device_next(puVar3), puVar3 != (undefined4 *)0x0) {
      while ((local_28 == 0 || (iVar2 = av_match_name(local_28,*puVar3), iVar2 != 0))) {
        FUN_0002e068(puVar3,local_24[0]);
        puVar3 = (undefined4 *)av_input_video_device_next(puVar3);
        if (puVar3 == (undefined4 *)0x0) goto LAB_000314fc;
      }
    }
  }
LAB_000314fc:
  av_dict_free(local_24);
  av_free(local_28);
  av_log_set_level(uVar1);
  return (int)uVar5;
}



/* ===== FUN_00031524 @ 00031524 size=248 ===== */

int FUN_00031524(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_20;
  undefined4 local_1c [2];
  
  puVar5 = (undefined4 *)0x0;
  local_20 = 0;
  local_1c[0] = 0;
  uVar1 = av_log_get_level();
  av_log_set_level(0x18);
  iVar2 = FUN_0002dfac(param_3,&local_20,local_1c);
  if (-1 < iVar2) {
    do {
      puVar5 = (undefined4 *)av_output_audio_device_next(puVar5);
      while( true ) {
        puVar4 = (undefined4 *)0x0;
        if (puVar5 == (undefined4 *)0x0) goto LAB_000315b0;
        if ((local_20 != 0) && (iVar3 = av_match_name(local_20,*puVar5), iVar3 == 0)) break;
        FUN_0002e14c(puVar5,local_1c[0]);
        puVar5 = (undefined4 *)av_output_audio_device_next(puVar5);
      }
    } while( true );
  }
LAB_000315f8:
  av_dict_free(local_1c);
  av_free(local_20);
  av_log_set_level(uVar1);
  return iVar2;
joined_r0x000315bc:
  while( true ) {
    if (puVar4 == (undefined4 *)0x0) goto LAB_000315f8;
    if ((local_20 == 0) || (iVar3 = av_match_name(local_20,*puVar4), iVar3 != 0)) break;
LAB_000315b0:
    puVar4 = (undefined4 *)av_output_video_device_next(puVar4);
  }
  FUN_0002e14c(puVar4,local_1c[0]);
  puVar4 = (undefined4 *)av_output_video_device_next(puVar4);
  goto joined_r0x000315bc;
}



/* ===== FUN_00031658 @ 00031658 size=192 ===== */

void FUN_00031658(int *param_1)

{
  undefined8 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined8 uVar8;
  int local_28 [2];
  undefined4 local_20;
  undefined4 uStack_1c;
  
  bVar7 = param_1[0x59] == 0;
  if (bVar7) {
    piVar2 = (int *)param_1[0x15];
  }
  else {
    piVar2 = param_1 + 0x10;
  }
  piVar4 = (int *)**(undefined4 **)(DAT_00031718 + 0x31670 + DAT_0003171c);
  if (bVar7) {
    piVar2 = piVar2 + 0x13;
  }
  iVar6 = piVar4[*param_1];
  if (!bVar7) {
    piVar4 = local_28;
  }
  iVar3 = piVar2[1];
  if (bVar7) {
    piVar4 = local_28;
  }
  *piVar4 = *piVar2;
  piVar4[1] = iVar3;
  iVar3 = *(int *)(iVar6 + 0x30);
  param_1[0x57] = param_1[0x57] | 1;
  if (iVar3 != 0) {
    local_20 = 1;
    uStack_1c = 1000000;
    uVar8 = av_rescale_q(param_1[10] - param_1[0xc],
                         param_1[0xb] -
                         (param_1[0xd] + (uint)((uint)param_1[10] < (uint)param_1[0xc])),*piVar4,
                         piVar4[1],1,1000000);
    iVar3 = (int)((ulonglong)uVar8 >> 0x20);
    iVar5 = *(int *)(iVar6 + 0x1c);
    bVar7 = (uint)uVar8 < *(uint *)(iVar6 + 0x18);
    uVar1 = *(undefined8 *)(iVar6 + 0x18);
    if ((int)(iVar3 - (iVar5 + (uint)bVar7)) < 0 !=
        (SBORROW4(iVar3,iVar5) != SBORROW4(iVar3 - iVar5,(uint)bVar7))) {
      uVar1 = uVar8;
    }
    *(undefined8 *)(iVar6 + 0x18) = uVar1;
  }
  return;
}



/* ===== FUN_00031720 @ 00031720 size=188 ===== */

void FUN_00031720(int *param_1)

{
  undefined8 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined8 uVar8;
  int local_28 [2];
  undefined4 local_20;
  undefined4 uStack_1c;
  
  bVar7 = param_1[0x59] == 0;
  if (bVar7) {
    piVar2 = (int *)param_1[0x15];
  }
  else {
    piVar2 = param_1 + 0x10;
  }
  piVar4 = (int *)**(undefined4 **)(DAT_000317dc + 0x31738 + DAT_000317e0);
  if (bVar7) {
    piVar2 = piVar2 + 0x13;
  }
  iVar6 = piVar4[*param_1];
  if (!bVar7) {
    piVar4 = local_28;
  }
  iVar3 = piVar2[1];
  if (bVar7) {
    piVar4 = local_28;
  }
  *piVar4 = *piVar2;
  piVar4[1] = iVar3;
  iVar3 = *(int *)(iVar6 + 0x30);
  param_1[0x57] = 3;
  if (iVar3 != 0) {
    local_20 = 1;
    uStack_1c = 1000000;
    uVar8 = av_rescale_q(param_1[10] - param_1[0xc],
                         param_1[0xb] -
                         (param_1[0xd] + (uint)((uint)param_1[10] < (uint)param_1[0xc])),*piVar4,
                         piVar4[1],1,1000000);
    iVar3 = (int)((ulonglong)uVar8 >> 0x20);
    iVar5 = *(int *)(iVar6 + 0x1c);
    bVar7 = (uint)uVar8 < *(uint *)(iVar6 + 0x18);
    uVar1 = *(undefined8 *)(iVar6 + 0x18);
    if ((int)(iVar3 - (iVar5 + (uint)bVar7)) < 0 !=
        (SBORROW4(iVar3,iVar5) != SBORROW4(iVar3 - iVar5,(uint)bVar7))) {
      uVar1 = uVar8;
    }
    *(undefined8 *)(iVar6 + 0x18) = uVar1;
  }
  return;
}



/* ===== FUN_000317e4 @ 000317e4 size=208 ===== */

void FUN_000317e4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[0x15];
  iVar3 = param_1[0x12];
  if (param_1[2] < 0) {
    if (0 < iVar3) goto LAB_00031830;
    if (iVar3 == 0) goto LAB_0003181c;
  }
  else {
    if (0 < iVar3) {
LAB_00031830:
      iVar3 = param_1[0x13];
      *(int *)(iVar2 + 0x4c) = param_1[0x12];
      *(int *)(iVar2 + 0x50) = iVar3;
      return;
    }
    if (iVar3 == 0) goto LAB_0003181c;
    iVar3 = *(int *)(**(int **)(DAT_000318b4 + 0x3180c + DAT_000318c0) + param_1[2] * 4);
    if (iVar3 != 0) {
      iVar3 = *(int *)(iVar3 + 4);
      uVar1 = *(undefined4 *)(iVar3 + 0x10);
      *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(iVar3 + 0xc);
      *(undefined4 *)(iVar2 + 0x50) = uVar1;
      return;
    }
  }
  av_log(*(undefined4 *)
          (*(int *)(**(int **)(DAT_000318b4 + 0x3180c + DAT_000318b8) + *param_1 * 4) + 8),0x18,
         DAT_000318bc + 0x31874);
LAB_0003181c:
  *(undefined4 *)(iVar2 + 0x4c) = param_2;
  *(undefined4 *)(iVar2 + 0x50) = param_3;
  return;
}



/* ===== FUN_000318c4 @ 000318c4 size=220 ===== */

void FUN_000318c4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
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
  
  iVar2 = *(int *)(param_1 + 0x10c);
  iVar4 = *(int *)(param_1 + 0xf4);
  *(undefined4 *)(iVar4 + 0x68) = param_3;
  *(undefined4 *)(iVar4 + 0x6c) = param_4;
  *(undefined4 *)(param_1 + 0xe0) = param_3;
  *(undefined4 *)(param_1 + 0xe4) = param_4;
  if (0 < iVar2) {
    iVar5 = DAT_000319a0 + 0x318fc;
    iVar2 = 0;
    do {
      while( true ) {
        uVar1 = av_buffersrc_add_frame_flags
                          (**(undefined4 **)(*(int *)(param_1 + 0x108) + iVar2 * 4),iVar4,0xc);
        uVar3 = uVar1 >> 0x1f;
        if (uVar1 == 0xdfb9b0bb) {
          uVar3 = 0;
        }
        if (uVar3 == 0) break;
        uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        iVar2 = iVar2 + 1;
        local_60 = 0;
        local_50 = 0;
        local_48 = 0;
        local_40 = 0;
        local_38 = 0;
        local_30 = 0;
        local_28 = 0;
        uStack_4c = uStack_5c;
        uStack_44 = uStack_5c;
        uStack_3c = uStack_5c;
        uStack_34 = uStack_5c;
        uStack_2c = uStack_5c;
        uStack_24 = uStack_5c;
        av_strerror(uVar1,&local_60,0x40);
        av_log(0,0x18,iVar5,&local_60);
        if (*(int *)(param_1 + 0x10c) <= iVar2) {
          return;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x10c));
  }
  return;
}



/* ===== FUN_000319d0 @ 000319d0 size=100 ===== */

undefined8 * FUN_000319d0(undefined8 *param_1)

{
  undefined8 uVar1;
  rusage local_60;
  
  uVar1 = av_gettime_relative();
  getrusage(RUSAGE_SELF,&local_60);
  *param_1 = uVar1;
  param_1[2] = (longlong)local_60.ru_stime.tv_sec * 1000000 + (longlong)local_60.ru_stime.tv_usec;
  param_1[1] = (longlong)local_60.ru_utime.tv_sec * 1000000 + (longlong)local_60.ru_utime.tv_usec;
  return param_1;
}



/* ===== FUN_00031a34 @ 00031a34 size=272 ===== */

int FUN_00031a34(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  iVar1 = *param_2;
  puVar4 = *(undefined4 **)(param_1 + 0x20);
  while( true ) {
    if (iVar1 == -1) {
      return -1;
    }
    iVar1 = av_pix_fmt_desc_get();
    if ((*(uint *)(iVar1 + 8) & 8) == 0) break;
    if (puVar4[0x45] - 1 < 2) {
      iVar1 = 0;
      do {
        piVar2 = (int *)avcodec_get_hw_config(*(undefined4 *)(param_1 + 0xc),iVar1);
        iVar1 = iVar1 + 1;
        if (piVar2 == (int *)0x0) goto LAB_00031a58;
      } while (((piVar2[1] & 1U) == 0) || (*piVar2 != *param_2));
      if (piVar2[2] == puVar4[0x46]) {
        iVar1 = FUN_0001a934(param_1);
        if (-1 < iVar1) {
          puVar4[0x4c] = *param_2;
          break;
        }
        if (puVar4[0x45] == 2) {
          uVar3 = av_hwdevice_get_type_name(piVar2[2]);
          av_log(0,8,DAT_00031b44 + 0x31b10,uVar3,*puVar4,*(undefined4 *)puVar4[1]);
          return -1;
        }
      }
    }
LAB_00031a58:
    param_2 = param_2 + 1;
    iVar1 = *param_2;
  }
  return *param_2;
}



/* ===== FUN_00031b48 @ 00031b48 size=280 ===== */

int FUN_00031b48(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int *__arg;
  int iVar4;
  bool bVar5;
  
  __arg = *(int **)(**(int **)(DAT_00031c60 + 0x31b58 + DAT_00031c64) + param_1 * 4);
  iVar4 = __arg[0x20];
  if (iVar4 < 0) {
    if (**(int **)(DAT_00031c60 + 0x31b58 + DAT_00031c6c) < 2) {
      __arg[0x20] = 0;
      return 0;
    }
    iVar4 = 8;
    __arg[0x20] = 8;
    iVar2 = *__arg;
    iVar3 = *(int *)(iVar2 + 0x10);
  }
  else {
    if (iVar4 == 0) {
      return 0;
    }
    iVar2 = *__arg;
    iVar3 = *(int *)(iVar2 + 0x10);
  }
  if (iVar3 == 0) {
    iVar2 = strcmp((char *)**(undefined4 **)(iVar2 + 4),(char *)(DAT_00031c70 + 0x31c28));
    bVar5 = iVar2 != 0;
  }
  else {
    bVar5 = *(int *)(iVar3 + 0x58) == 0;
  }
  if (bVar5) {
    __arg[0x1e] = 1;
  }
  iVar4 = av_thread_message_queue_alloc(__arg + 0x1c,iVar4,4);
  if (iVar4 < 0) {
    return iVar4;
  }
  iVar4 = pthread_create((pthread_t *)(__arg + 0x1d),(pthread_attr_t *)0x0,
                         (__start_routine *)(DAT_00031c68 + 0x31bd0),__arg);
  if (iVar4 != 0) {
    pcVar1 = strerror(iVar4);
    av_log(0,0x10,DAT_00031c74 + 0x31c48,pcVar1);
    av_thread_message_queue_free(__arg + 0x1c);
    return -iVar4;
  }
  return 0;
}



/* ===== FUN_00031c78 @ 00031c78 size=388 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00031c78(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int local_64 [3];
  undefined4 uStack_58;
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
  
  uVar2 = param_1[0x1e];
  uVar3 = param_1[0x1b];
  iVar4 = DAT_00031dfc + 0x31ca0;
  if (uVar2 != 0) {
    uVar2 = 1;
  }
  do {
    while (iVar1 = av_read_frame(*param_1,uVar3), iVar1 == -0xb) {
      av_usleep(10000);
    }
    if (iVar1 < 0) {
      av_thread_message_queue_set_err_recv(param_1[0x1c],iVar1);
      return 0;
    }
    local_64[0] = av_packet_alloc();
    if (local_64[0] == 0) {
      av_packet_unref(uVar3,uVar3);
      av_thread_message_queue_set_err_recv(param_1[0x1c],0xfffffff4);
      return 0;
    }
    av_packet_move_ref();
    iVar1 = av_thread_message_queue_send(param_1[0x1c],local_64,uVar2);
    if ((iVar1 == -0xb & uVar2) != 0) {
      uVar2 = 0;
      iVar1 = av_thread_message_queue_send(param_1[0x1c],local_64);
      av_log(*param_1,0x18,iVar4,param_1[0x20]);
    }
  } while (-1 < iVar1);
  if (iVar1 != -0x20464f45) {
    local_64[2] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar3 = *param_1;
    local_64[1] = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    uStack_4c = local_64[2];
    uStack_44 = local_64[2];
    uStack_3c = local_64[2];
    uStack_34 = local_64[2];
    uStack_2c = local_64[2];
    uStack_24 = local_64[2];
    av_strerror(iVar1,local_64 + 1,0x40);
    av_log(uVar3,0x10,DAT_00031e00 + 0x31df8,local_64 + 1);
  }
  av_packet_free(local_64);
  av_thread_message_queue_set_err_recv(param_1[0x1c],iVar1);
  return 0;
}



/* ===== FUN_00031e04 @ 00031e04 size=528 ===== */

undefined4 FUN_00031e04(int *param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  bool bVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint local_48;
  
  uVar1 = DAT_00032018;
  fVar15 = (float)param_1[0x19];
  iVar13 = DAT_00032020 + 0x31e24;
  if ((fVar15 != 0.0) || (param_1[0x18] != 0)) {
    iVar2 = *(int *)(*param_1 + 0x28);
    iVar7 = *(int *)(*param_1 + 0x2c);
    uVar9 = **(uint **)(iVar13 + DAT_00032024);
    if (iVar7 == -0x80000000 && iVar2 == 0) {
      uVar11 = 0;
      iVar7 = 0;
    }
    else {
      uVar3 = (uint)(**(int **)(iVar13 + DAT_00032028) == 0);
      uVar11 = iVar2 * uVar3;
      iVar7 = uVar3 * iVar7;
    }
    uVar3 = param_1[0x12];
    if (param_1[0x13] != -0x80000000 || uVar3 != 0) {
      bVar14 = CARRY4(uVar11,uVar3);
      uVar11 = uVar11 + uVar3;
      iVar7 = iVar7 + param_1[0x13] + (uint)bVar14;
    }
    iVar2 = param_1[0x16];
    if (param_1[0x18] != 0) {
      fVar15 = 1.0;
    }
    iVar7 = uVar11 * ((int)uVar9 >> 0x1f) + uVar9 * iVar7 +
            (int)((ulonglong)uVar11 * (ulonglong)uVar9 >> 0x20);
    local_48 = (uint)((ulonglong)uVar11 * (ulonglong)uVar9);
    if (0 < iVar2) {
      iVar10 = 0;
      piVar12 = *(int **)(iVar13 + DAT_0003202c);
      do {
        iVar13 = iVar10 + param_1[3];
        iVar10 = iVar10 + 1;
        iVar13 = *(int *)(*piVar12 + iVar13 * 4);
        if ((*(int *)(iVar13 + 0x140) != 0 || *(int *)(iVar13 + 0x144) != 0) &&
           ((*(int *)(iVar13 + 0x10) == 0 || (*(int *)(iVar13 + 0x160) != 0)))) {
          uVar9 = *(uint *)(iVar13 + 0x40);
          iVar2 = *(int *)(iVar13 + 0x44);
          if (iVar2 == -0x80000000 && uVar9 == 0) {
            iVar2 = 0;
            uVar9 = 0;
          }
          if ((int)(iVar2 - (iVar7 + (uint)(uVar9 < local_48))) < 0 !=
              (SBORROW4(iVar2,iVar7) != SBORROW4(iVar2 - iVar7,(uint)(uVar9 < local_48)))) {
            iVar2 = iVar7;
            uVar9 = local_48;
          }
          uVar16 = av_rescale(*(undefined4 *)(iVar13 + 0x48),*(undefined4 *)(iVar13 + 0x4c),1000000,
                              0,uVar1);
          iVar8 = (int)((ulonglong)uVar16 >> 0x20);
          uVar17 = av_gettime_relative();
          fVar4 = (float)FUN_0003f718((uint)uVar17 - *(uint *)(iVar13 + 0x30),
                                      (int)((ulonglong)uVar17 >> 0x20) -
                                      (*(int *)(iVar13 + 0x34) +
                                      (uint)((uint)uVar17 < *(uint *)(iVar13 + 0x30))));
          fVar5 = (float)FUN_0003f718(uVar9,iVar2);
          uVar17 = FUN_0003f8b4(fVar4 * fVar15 + fVar5);
          iVar13 = (int)((ulonglong)uVar17 >> 0x20);
          bVar14 = (uint)uVar17 < (uint)uVar16;
          if ((int)(iVar13 - (iVar8 + (uint)bVar14)) < 0 !=
              (SBORROW4(iVar13,iVar8) != SBORROW4(iVar13 - iVar8,(uint)bVar14))) {
            return 0xfffffff5;
          }
          iVar2 = param_1[0x16];
        }
      } while (iVar10 < iVar2);
    }
  }
  if (param_1[0x20] != 0) {
    uVar6 = av_thread_message_queue_recv(param_1[0x1c],param_2,param_1[0x1e] != 0);
    return uVar6;
  }
  iVar13 = *param_1;
  *param_2 = param_1[0x1b];
  uVar6 = av_read_frame(iVar13);
  return uVar6;
}



/* ===== FUN_00032030 @ 00032030 size=220 ===== */

void FUN_00032030(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = DAT_0003210c + 0x3204c;
  if (param_3[0x14] == 0) {
    if (param_4 == 0) {
      FUN_0001ac60();
      return;
    }
  }
  else {
    uVar2 = param_2;
    if (param_4 != 0) {
      uVar2 = 0;
    }
    iVar1 = av_bsf_send_packet(param_3[0x14],uVar2);
    if (-1 < iVar1) {
      while (iVar1 = av_bsf_receive_packet(param_3[0x14],param_2), -1 < iVar1) {
        FUN_0001ac60(param_1,param_2,param_3,0);
      }
      if (iVar1 == -0xb) {
        return;
      }
    }
    if ((iVar1 != -0x20464f45) &&
       (av_log(0,0x10,DAT_00032110 + 0x320d0,*param_3,param_3[1]),
       **(int **)(iVar3 + DAT_00032114) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0002b538(1);
    }
  }
  return;
}



/* ===== FUN_00032118 @ 00032118 size=5228 ===== */

void FUN_00032118(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,int param_6)

{
  byte bVar1;
  double dVar2;
  float fVar3;
  undefined4 uVar4;
  int *piVar5;
  uint extraout_r2;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int *piVar22;
  uint uVar23;
  int iVar24;
  int *piVar25;
  undefined4 *puVar26;
  int iVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  uint in_fpscr;
  undefined4 extraout_s15;
  undefined4 extraout_s15_00;
  undefined4 extraout_s15_01;
  undefined4 uVar31;
  float fVar32;
  undefined4 extraout_s15_02;
  undefined4 extraout_s15_03;
  double dVar33;
  undefined4 uVar34;
  float fVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined8 uVar39;
  double dVar40;
  double dVar41;
  longlong lVar42;
  undefined8 uVar43;
  longlong lVar44;
  longlong lVar45;
  double in_stack_fffff6e0;
  ulonglong uVar46;
  uint local_8f8;
  uint uStack_8f4;
  uint local_8f0;
  int iStack_8ec;
  uint local_8e8;
  int iStack_8e4;
  uint local_8e0;
  int iStack_8dc;
  uint local_8d4;
  uint local_8d0;
  uint uStack_8cc;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined8 local_898;
  undefined8 local_890;
  undefined8 local_888;
  undefined8 local_880;
  undefined8 local_878;
  undefined8 local_870;
  undefined4 local_868 [256];
  undefined4 local_468;
  uint local_464;
  int local_460;
  
  iVar21 = DAT_00032620;
  iVar27 = DAT_00032614 + 0x32130;
  piVar5 = *(int **)(iVar27 + DAT_00032618);
  if (param_1 == 0 && *piVar5 == 0) {
    if (**(int **)(iVar27 + DAT_0003261c) == 0) {
      return;
    }
LAB_00032168:
    uVar23 = *(uint *)(DAT_00032620 + 0x3217c);
    if (*(int *)(DAT_00032620 + 0x32180) == -1 && uVar23 == 0xffffffff) {
      uVar11 = 0;
      iVar14 = 0;
      *(uint *)(DAT_00032620 + 0x3217c) = param_5;
      *(int *)(iVar21 + 0x32180) = param_6;
    }
    else {
      uVar11 = param_5 - uVar23;
      iVar14 = param_6 - (*(int *)(DAT_00032620 + 0x32180) + (uint)(param_5 < uVar23));
    }
    iVar21 = DAT_00032634;
    uVar23 = (*(uint **)(iVar27 + DAT_00032624))[1];
    bVar28 = uVar11 < **(uint **)(iVar27 + DAT_00032624);
    if ((int)(iVar14 - (uVar23 + bVar28)) < 0 ==
        (SBORROW4(iVar14,uVar23) != SBORROW4(iVar14 - uVar23,(uint)bVar28))) {
      if (*(int *)(DAT_00032628 + 0x321b8) != 0) goto LAB_000321c8;
    }
    else {
      if (*(int *)(DAT_00032628 + 0x321b8) == 0) {
        return;
      }
LAB_000321c8:
      if (**(uint **)(iVar27 + DAT_0003262c) < **(uint **)(iVar27 + DAT_00032630)) {
        return;
      }
    }
    *(uint *)(DAT_00032634 + 0x321f8) = param_5;
    *(int *)(iVar21 + 0x321fc) = param_6;
  }
  else if (param_1 == 0) goto LAB_00032168;
  dVar40 = (double)FUN_0003f4e4(param_5 - param_3,param_6 - (param_4 + (uint)(param_5 < param_3)));
  piVar7 = *(int **)(iVar27 + DAT_00032638);
  iVar14 = *(int *)(*(int *)*piVar7 + 8);
  dVar40 = dVar40 / DAT_00032600;
  lVar42 = avio_size(*(undefined4 *)(iVar14 + 0x10));
  iVar21 = (int)((ulonglong)lVar42 >> 0x20);
  fVar35 = (float)dVar40;
  if (iVar21 < (int)(uint)((int)lVar42 == 0)) {
    in_stack_fffff6e0 = (double)CONCAT44((int)((ulonglong)in_stack_fffff6e0 >> 0x20),1);
    lVar42 = avio_seek(*(undefined4 *)(iVar14 + 0x10),iVar21,0,0,1);
  }
  uStack_8cc = (uint)((ulonglong)lVar42 >> 0x20);
  local_8d0 = (uint)lVar42;
  av_bprint_init(local_868,0,1);
  av_bprint_init(&local_468,0,1);
  piVar8 = *(int **)(iVar27 + DAT_0003263c);
  if (0 < *piVar8) {
    lVar45 = -0x7fffffffffffffff;
    iVar21 = 0;
    piVar9 = *(int **)(iVar27 + DAT_00032640);
    bVar28 = false;
    uVar31 = extraout_s15;
LAB_000323f4:
    uStack_8f4 = (uint)((ulonglong)lVar45 >> 0x20);
    local_8f8 = (uint)lVar45;
    uVar4 = (undefined4)((ulonglong)in_stack_fffff6e0 >> 0x20);
    puVar12 = *(undefined4 **)(*piVar9 + iVar21 * 4);
    iVar14 = puVar12[0x15];
    if (puVar12[0x59] == 0) {
      uVar31 = puVar12[0x6c];
    }
    if (puVar12[0x59] == 0) {
      fVar32 = (float)VectorSignedToFloat(uVar31,(byte)(in_fpscr >> 0x16) & 3);
      fVar32 = fVar32 / DAT_00032610;
    }
    else {
      fVar32 = -1.0;
    }
    if (bVar28) {
      if (*(int *)(iVar14 + 8) == 0) {
        in_stack_fffff6e0 = (double)fVar32;
        av_bprintf(local_868,DAT_00032670 + 0x325e0,SUB84(in_stack_fffff6e0,0),
                   (int)((ulonglong)in_stack_fffff6e0 >> 0x20));
        av_bprintf(&local_468,DAT_00032674 + 0x325f8,*puVar12,puVar12[1],in_stack_fffff6e0);
      }
      else {
LAB_000322e0:
        bVar28 = true;
      }
      goto LAB_000322e4;
    }
    if (*(int *)(iVar14 + 8) != 0) goto LAB_000322e4;
    uVar23 = in_fpscr & 0xfffffff | (uint)(fVar35 < 1.0) << 0x1f | (uint)(fVar35 == 1.0) << 0x1e;
    in_fpscr = uVar23 | (uint)NAN(fVar35) << 0x1c;
    bVar1 = (byte)(uVar23 >> 0x18);
    uVar34 = (undefined4)*(undefined8 *)(puVar12 + 6);
    uVar31 = (undefined4)((ulonglong)*(undefined8 *)(puVar12 + 6) >> 0x20);
    if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
      dVar40 = 0.0;
      uVar10 = 1;
    }
    else {
      fVar3 = (float)FUN_0003f718(uVar34,uVar31);
      dVar40 = (double)(fVar3 / fVar35);
      in_fpscr = in_fpscr & 0xfffffff | (uint)(dVar40 < DAT_00032608) << 0x1f;
      if (SUB41(in_fpscr >> 0x1f,0)) {
        uVar10 = 1;
      }
      else {
        uVar10 = 0;
      }
    }
    in_stack_fffff6e0 = (double)fVar32;
    uVar43 = CONCAT44(uVar4,uVar10);
    dVar33 = dVar40;
    dVar41 = in_stack_fffff6e0;
    av_bprintf(local_868,DAT_00032650 + 0x32488,uVar34,uVar31,uVar10);
    av_bprintf(&local_468,DAT_00032654 + 0x324a4,uVar34,uVar31,uVar43,dVar33,dVar41);
    av_bprintf(&local_468,DAT_00032658 + 0x324bc,SUB84(dVar40,0),(int)((ulonglong)dVar40 >> 0x20));
    av_bprintf(&local_468,DAT_0003265c + 0x324d4,*puVar12,puVar12[1],in_stack_fffff6e0);
    if (param_1 != 0) {
      av_bprintf(local_868,DAT_00032d88 + 0x32d24);
    }
    if (**(int **)(iVar27 + DAT_00032660) != 0) {
      uVar23 = lrintf(fVar32);
      if (uVar23 < 0x34) {
        iVar24 = DAT_00032d9c + 0x32e44 + uVar23 * 4;
        *(int *)(iVar24 + 8) = *(int *)(iVar24 + 8) + 1;
      }
      piVar25 = (int *)(DAT_00032d8c + 0x32dc4);
      iVar24 = DAT_00032d90 + 0x32dc8;
      piVar22 = (int *)(DAT_00032d8c + 0x32e44);
      do {
        piVar25 = piVar25 + 1;
        uVar4 = av_log2(*piVar25 + 1);
        av_bprintf(local_868,iVar24,uVar4);
      } while (piVar22 != piVar25);
    }
    dVar40 = DAT_00033728;
    if ((*(uint *)(iVar14 + 0x3c) & 0x8000) == 0) goto LAB_000322e0;
    if (param_1 != 0 || puVar12[0x71] != 0) {
      dVar33 = 0.0;
      puVar26 = (undefined4 *)(iVar14 + 0x1e0);
      dVar41 = 0.0;
      puVar16 = puVar12 + 0x72;
      uVar23 = 0x59;
      local_8a8 = CONCAT53(local_8a8._3_5_,0x565559);
      av_bprintf(local_868,DAT_00033740 + 0x334dc,&local_8a8,0x56,in_stack_fffff6e0);
      iVar24 = 0;
      do {
        dVar36 = (double)VectorSignedToFloat(*(int *)(iVar14 + 0x60) * *(int *)(iVar14 + 0x5c),
                                             (byte)(in_fpscr >> 0x16) & 3);
        dVar36 = dVar36 * dVar40 * dVar40;
        if (param_1 == 0) {
          dVar37 = (double)FUN_0003f4e4(*puVar16,puVar16[1]);
        }
        else {
          dVar37 = (double)FUN_0003f4d0(*puVar26,puVar26[1]);
          dVar38 = (double)FUN_0003f4e4(uVar34,uVar31);
          dVar36 = dVar36 * dVar38;
        }
        bVar28 = iVar24 == 0;
        iVar24 = iVar24 + 1;
        dVar41 = dVar41 + dVar37;
        if (bVar28) {
          dVar37 = log10(dVar37 / dVar36);
          dVar33 = dVar33 + dVar36;
          dVar36 = dVar37 * -10.0;
          av_bprintf(local_868,DAT_00033754 + 0x33610,uVar23);
          av_bprintf(&local_468,DAT_00033758 + 0x33630,*puVar12,puVar12[1],uVar23 | 0x20,
                     (int)((ulonglong)dVar36 >> 0x20),dVar37 * -10.0);
        }
        else {
          dVar37 = log10(dVar37 / (dVar36 * 0.25));
          dVar33 = dVar33 + dVar36 * 0.25;
          dVar37 = dVar37 * -10.0;
          dVar36 = dVar37;
          av_bprintf(local_868,DAT_00033744 + 0x33580,uVar23);
          uVar4 = (undefined4)((ulonglong)dVar36 >> 0x20);
          uVar46 = CONCAT44(uVar4,uVar23) | 0x20;
          av_bprintf(&local_468,DAT_00033748 + 0x335a0,*puVar12,puVar12[1],uVar23 | 0x20,uVar4,
                     dVar37);
          if (iVar24 == 3) goto code_r0x000335b0;
        }
        puVar26 = puVar26 + 2;
        puVar16 = puVar16 + 2;
        uVar23 = (uint)*(byte *)((int)&local_8a8 + iVar24);
      } while( true );
    }
    bVar28 = true;
    lVar44 = av_stream_get_end_pts(puVar12[3]);
    uVar31 = extraout_s15_02;
    if (lVar44 != -0x8000000000000000) goto LAB_000322f8;
    goto LAB_000323e0;
  }
  iVar21 = 0x8cdf6;
  bVar28 = true;
  iVar14 = 0x20;
  iVar24 = 0x16;
  local_8d4 = 0xbd67f;
  lVar45 = -0x7fffffffffffffff;
LAB_000328e8:
  iVar17 = DAT_00032938 + 0x328f4;
  goto LAB_00032780;
code_r0x000335b0:
  in_stack_fffff6e0 = log10(dVar41 / dVar33);
  bVar28 = true;
  in_stack_fffff6e0 = in_stack_fffff6e0 * -10.0;
  av_bprintf(local_868,DAT_0003374c + 0x335d0,SUB84(in_stack_fffff6e0,0),
             (int)((ulonglong)in_stack_fffff6e0 >> 0x20),uVar46,dVar37);
  av_bprintf(&local_468,DAT_00033750 + 0x335ec,*puVar12,puVar12[1],in_stack_fffff6e0);
LAB_000322e4:
  lVar44 = av_stream_get_end_pts(puVar12[3]);
  uVar31 = extraout_s15_00;
  if (lVar44 != -0x8000000000000000) {
LAB_000322f8:
    uVar43 = av_stream_get_end_pts(puVar12[3]);
    iVar24 = puVar12[3];
    in_stack_fffff6e0 = 2.121995790965273e-308;
    uVar43 = av_rescale_q((int)uVar43,(int)((ulonglong)uVar43 >> 0x20),*(undefined4 *)(iVar24 + 0xc)
                          ,*(undefined4 *)(iVar24 + 0x10),1);
    iVar14 = (int)((ulonglong)uVar43 >> 0x20);
    bVar29 = (uint)uVar43 < local_8f8;
    uVar31 = extraout_s15_01;
    if ((int)(iVar14 - (uStack_8f4 + bVar29)) < 0 ==
        (SBORROW4(iVar14,uStack_8f4) != SBORROW4(iVar14 - uStack_8f4,(uint)bVar29))) {
      uVar43 = av_stream_get_end_pts(iVar24);
      in_stack_fffff6e0 = 2.121995790965273e-308;
      lVar45 = av_rescale_q((int)uVar43,(int)((ulonglong)uVar43 >> 0x20),
                            *(undefined4 *)(puVar12[3] + 0xc),*(undefined4 *)(puVar12[3] + 0x10),1);
      uVar31 = extraout_s15_03;
    }
    uStack_8f4 = (uint)((ulonglong)lVar45 >> 0x20);
    local_8f8 = (uint)lVar45;
    if (**(int **)(iVar27 + DAT_00032644) != 0) {
      uVar23 = *(uint *)(DAT_00032648 + 0x32380);
      iVar14 = *(int *)(DAT_00032648 + 0x32384);
      if ((int)uStack_8f4 < (int)(uint)(local_8f8 < 2) || (iVar14 != -0x80000000 || uVar23 != 0)) {
        if (iVar14 != -0x80000000 || uVar23 != 0) {
          lVar45 = CONCAT44(uStack_8f4 - (iVar14 + (uint)(local_8f8 < uVar23)),local_8f8 - uVar23);
        }
      }
      else {
        *(longlong *)(DAT_00032648 + 0x32380) = lVar45;
        lVar45 = 0;
      }
    }
  }
  iVar14 = DAT_0003264c;
  if (param_1 != 0) {
    uVar23 = puVar12[0x1e];
    iVar24 = puVar12[0x1f];
    uVar11 = *(uint *)(DAT_0003264c + 0x324ac);
    piVar22 = (int *)(DAT_0003264c + 0x324b0);
    *(uint *)(DAT_0003264c + 0x324ac) = uVar23 + uVar11;
    *(uint *)(iVar14 + 0x324b0) = iVar24 + *piVar22 + (uint)CARRY4(uVar23,uVar11);
  }
LAB_000323e0:
  uStack_8f4 = (uint)((ulonglong)lVar45 >> 0x20);
  local_8f8 = (uint)lVar45;
  iVar21 = iVar21 + 1;
  if (*piVar8 <= iVar21) goto LAB_000326b8;
  goto LAB_000323f4;
LAB_000326b8:
  uVar23 = (int)uStack_8f4 >> 0x1f;
  iVar21 = (local_8f8 ^ uVar23) - uVar23;
  iVar24 = (uStack_8f4 ^ uVar23) - (uVar23 + ((local_8f8 ^ uVar23) < uVar23));
  iVar14 = FUN_0003f794(iVar21,iVar24,1000000,0);
  FUN_0003f794(iVar21,iVar24,1000000,0);
  bVar28 = lVar45 != 0;
  iVar21 = iVar14 / 0xe10;
  iVar24 = iVar14 % 0x3c;
  iVar14 = (iVar14 / 0x3c) % 0x3c;
  local_8d4 = extraout_r2;
  if (lVar45 < 0) goto LAB_000328e8;
  iVar17 = DAT_00032678 + 0x32784;
LAB_00032780:
  uStack_8f4 = (uint)((ulonglong)lVar45 >> 0x20);
  local_8f8 = (uint)lVar45;
  if (lVar42 < 0) {
    bVar28 = false;
  }
  if (bVar28) {
    dVar33 = (double)FUN_0003f4e4(local_8f8,uStack_8f4);
    dVar40 = (double)FUN_0003f4e4((int)(lVar42 << 3),(int)((ulonglong)(lVar42 << 3) >> 0x20));
    dVar40 = dVar40 / (dVar33 / DAT_00032908);
    if (fVar35 != 0.0) {
LAB_0003295c:
      dVar33 = (dVar33 / DAT_00032d28) / (double)fVar35;
      goto LAB_0003296c;
    }
    dVar33 = -1.0;
LAB_000327d4:
    dVar41 = (double)FUN_0003f4e4(local_8d0,uStack_8cc);
    av_bprintf(local_868,DAT_00032918 + 0x327f8,SUB84(dVar41 * DAT_00032910,0),
               (int)((ulonglong)(dVar41 * DAT_00032910) >> 0x20));
    if (lVar45 == -0x8000000000000000) goto LAB_0003280c;
LAB_0003299c:
    av_bprintf(local_868,DAT_00032d34 + 0x329cc,iVar17,iVar21,iVar14,iVar24,local_8d4 / 10000);
    if (0.0 <= dVar40) goto LAB_000329e0;
LAB_00032828:
    av_bprintf(local_868,DAT_00032920 + 0x32838);
    av_bprintf(&local_468,DAT_00032924 + 0x32848);
    if (lVar42 < 0) goto LAB_00032858;
LAB_00032a18:
    av_bprintf(&local_468,DAT_00032d40 + 0x32a28,local_8d0,uStack_8cc);
    if (lVar45 != -0x8000000000000000) goto LAB_00032a3c;
LAB_00032878:
    av_bprintf(&local_468,DAT_0003292c + 0x3288c);
    av_bprintf(&local_468,DAT_00032930 + 0x3289c);
    av_bprintf(&local_468,DAT_00032934 + 0x328ac);
  }
  else {
    dVar40 = -1.0;
    if (fVar35 != 0.0) {
      dVar33 = (double)FUN_0003f4e4(local_8f8,uStack_8f4);
      goto LAB_0003295c;
    }
    dVar33 = -1.0;
LAB_0003296c:
    if (-1 < lVar42) goto LAB_000327d4;
    av_bprintf(local_868,DAT_00032d30 + 0x3298c);
    if (lVar45 != -0x8000000000000000) goto LAB_0003299c;
LAB_0003280c:
    av_bprintf(local_868,DAT_0003291c + 0x3281c);
    if (dVar40 < 0.0) goto LAB_00032828;
LAB_000329e0:
    uVar31 = (undefined4)((ulonglong)dVar40 >> 0x20);
    av_bprintf(local_868,DAT_00032d38 + 0x329f4,SUB84(dVar40,0),uVar31);
    av_bprintf(&local_468,DAT_00032d3c + 0x32a04,SUB84(dVar40,0),uVar31);
    if (-1 < lVar42) goto LAB_00032a18;
LAB_00032858:
    av_bprintf(&local_468,DAT_00032928 + 0x32868);
    if (lVar45 == -0x8000000000000000) goto LAB_00032878;
LAB_00032a3c:
    av_bprintf(&local_468,DAT_00032d44 + 0x32a54);
    av_bprintf(&local_468,DAT_00032d48 + 0x32a6c,local_8f8,uStack_8f4);
    av_bprintf(&local_468,DAT_00032d4c + 0x32a90,iVar17,iVar21,iVar14,iVar24,local_8d4);
  }
  iVar21 = DAT_00032d50;
  uVar23 = *(uint *)(DAT_00032d50 + 0x32b84) | *(uint *)(DAT_00032d50 + 0x32b7c);
  uVar11 = *(uint *)(DAT_00032d50 + 0x32b88) | *(uint *)(DAT_00032d50 + 0x32b80);
  if (uVar23 != 0 || uVar11 != 0) {
    av_bprintf(local_868,DAT_00032d54 + 0x32ad0,*(uint *)(DAT_00032d50 + 0x32b84),
               *(uint *)(DAT_00032d50 + 0x32b88),*(uint *)(DAT_00032d50 + 0x32b7c),
               *(uint *)(DAT_00032d50 + 0x32b80));
    uVar23 = *(uint *)(iVar21 + 0x32b84);
    uVar11 = *(uint *)(iVar21 + 0x32b88);
  }
  av_bprintf(&local_468,DAT_00032d58 + 0x32aec,uVar23,uVar11);
  av_bprintf(&local_468,DAT_00032d60 + 0x32b04,*(undefined4 *)(DAT_00032d5c + 0x32bd8),
             *(undefined4 *)(DAT_00032d5c + 0x32bdc));
  if (dVar33 < 0.0) {
    av_bprintf(local_868,DAT_00032d94 + 0x32e0c);
    av_bprintf(&local_468,DAT_00032d98 + 0x32e1c);
  }
  else {
    uVar31 = (undefined4)((ulonglong)dVar33 >> 0x20);
    av_bprintf(local_868,DAT_00032d64 + 0x32b28,SUB84(dVar33,0),uVar31);
    av_bprintf(&local_468,DAT_00032d68 + 0x32b38,SUB84(dVar33,0),uVar31);
  }
  iVar21 = *piVar5;
  if (iVar21 == 0 && param_1 == 0) {
    av_bprint_finalize(local_868);
    piVar5 = *(int **)(iVar27 + DAT_0003261c);
    if (*piVar5 == 0) {
      *(undefined4 *)(DAT_00033760 + 0x3368c) = 0;
      return;
    }
LAB_00032550:
    av_bprintf(&local_468,DAT_00032668 + 0x3256c,DAT_00032664 + 0x32564);
    if (local_460 - 1U < local_464) {
      local_464 = local_460 - 1U;
    }
    avio_write(*piVar5,local_468,local_464);
    avio_flush(*piVar5);
    av_bprint_finalize(&local_468,0);
    *(undefined4 *)(DAT_0003266c + 0x325b8) = 0;
    return;
  }
  if (param_1 == 0) {
    uVar31 = 0xd;
  }
  else {
    uVar31 = 10;
  }
  if ((iVar21 == 1) && (iVar21 = av_log_get_level(), iVar21 < 0x20)) {
    puVar12 = *(undefined4 **)(iVar27 + DAT_00033738);
    fprintf((FILE *)*puVar12,(char *)(DAT_0003373c + 0x334b0),local_868[0],uVar31);
  }
  else {
    av_log(0,0x20,DAT_00032d6c + 0x32b80,local_868[0],uVar31);
    puVar12 = *(undefined4 **)(iVar27 + DAT_00032d70);
  }
  fflush((FILE *)*puVar12);
  av_bprint_finalize(local_868,0);
  piVar5 = *(int **)(iVar27 + DAT_00032d74);
  if (*piVar5 == 0) {
    *(undefined4 *)(DAT_0003375c + 0x33674) = 0;
    if (param_1 == 0) {
      return;
    }
  }
  else {
    if (param_1 == 0) goto LAB_00032550;
    av_bprintf(&local_468,DAT_00032d7c + 0x32be0,DAT_00032d78 + 0x32bd8);
    if (local_460 - 1U < local_464) {
      local_464 = local_460 - 1U;
    }
    avio_write(*piVar5,local_468,local_464);
    avio_flush(*piVar5);
    av_bprint_finalize(&local_468,0);
    iVar21 = avio_closep(piVar5);
    if (iVar21 < 0) {
      local_8a8 = 0;
      uStack_8a0 = 0;
      local_898 = local_8a8;
      local_890 = local_8a8;
      local_888 = local_8a8;
      local_880 = local_8a8;
      local_878 = local_8a8;
      local_870 = local_8a8;
      av_strerror(iVar21,&local_8a8,0x40);
      av_log(0,0x10,DAT_00033764 + 0x336dc,&local_8a8);
    }
    *(undefined4 *)(DAT_00032d80 + 0x32c3c) = 0;
  }
  dVar40 = DAT_000331c8;
  if (*piVar8 < 1) {
    dVar38 = 0.0;
    bVar29 = true;
    bVar28 = true;
    local_8e8 = 0;
    iStack_8e4 = 0;
    dVar33 = dVar38;
    dVar41 = dVar38;
    dVar36 = dVar38;
    dVar37 = dVar38;
LAB_00032f44:
    av_log(0,0x20,DAT_000331d0 + 0x32f5c,bVar29,dVar33,dVar41,dVar36,dVar37,dVar38);
  }
  else {
    uVar23 = 0;
    uVar11 = 0;
    bVar28 = true;
    uVar18 = 0;
    iVar21 = 0;
    local_8f0 = 0;
    iStack_8ec = 0;
    local_8f8 = 0;
    uStack_8f4 = 0;
    local_8e8 = 0;
    iStack_8e4 = 0;
    local_8e0 = 0;
    iStack_8dc = 0;
    piVar5 = (int *)**(undefined4 **)(iVar27 + DAT_00032d84);
    do {
      piVar9 = piVar5 + 1;
      iVar14 = *piVar5;
      iVar24 = *(int *)(iVar14 + 0x54);
      uVar6 = *(uint *)(iVar14 + 0x188);
      iVar14 = *(int *)(iVar14 + 0x18c);
      iVar17 = *(int *)(iVar24 + 8);
      if (iVar17 == 1) {
        bVar29 = CARRY4(local_8f8,uVar6);
        local_8f8 = local_8f8 + uVar6;
        uStack_8f4 = uStack_8f4 + iVar14 + (uint)bVar29;
      }
      else if (iVar17 == 3) {
        bVar29 = CARRY4(local_8e8,uVar6);
        local_8e8 = local_8e8 + uVar6;
        iStack_8e4 = iStack_8e4 + iVar14 + (uint)bVar29;
      }
      else if (iVar17 == 0) {
        bVar29 = CARRY4(local_8e0,uVar6);
        local_8e0 = local_8e0 + uVar6;
        iStack_8dc = iStack_8dc + iVar14 + (uint)bVar29;
      }
      else {
        bVar29 = CARRY4(local_8f0,uVar6);
        local_8f0 = local_8f0 + uVar6;
        iStack_8ec = iStack_8ec + iVar14 + (uint)bVar29;
      }
      bVar29 = CARRY4(uVar23,uVar6);
      uVar23 = uVar23 + uVar6;
      uVar6 = *(uint *)(iVar24 + 0x48);
      uVar11 = uVar11 + iVar14 + (uint)bVar29;
      bVar29 = CARRY4(uVar18,uVar6);
      uVar18 = uVar18 + uVar6;
      iVar21 = iVar21 + ((int)uVar6 >> 0x1f) + (uint)bVar29;
      if ((*(uint *)(iVar24 + 0x3c) & 0x600) != 0x200) {
        bVar28 = false;
      }
      piVar5 = piVar9;
    } while (piVar9 != (int *)**(undefined4 **)(iVar27 + DAT_00032d84) + *piVar8);
    dVar33 = (double)FUN_0003f4d0(local_8e0,iStack_8dc);
    dVar33 = dVar33 * dVar40;
    dVar41 = (double)FUN_0003f4d0(local_8f8,uStack_8f4);
    dVar41 = dVar41 * dVar40;
    dVar36 = (double)FUN_0003f4d0(local_8e8,iStack_8e4);
    dVar37 = (double)FUN_0003f4d0(local_8f0,iStack_8ec);
    dVar38 = (double)FUN_0003f4d0(uVar18,iVar21);
    dVar2 = DAT_00033720;
    bVar29 = CARRY4(local_8e0,local_8e8);
    local_8e0 = local_8e0 + local_8e8;
    uVar6 = local_8e0 + uVar18;
    uVar19 = local_8f8 + uVar6;
    local_8e8 = uVar19 + uVar23;
    iStack_8e4 = uStack_8f4 +
                 iStack_8dc + iStack_8e4 + (uint)bVar29 + iVar21 + (uint)CARRY4(local_8e0,uVar18) +
                 (uint)CARRY4(local_8f8,uVar6) + uVar11 + (uint)CARRY4(uVar19,uVar23);
    bVar30 = (int)(uint)(local_8d0 == 0) <= (int)uStack_8cc;
    bVar29 = bVar30 && (uVar23 != 0 || uVar11 != 0);
    dVar38 = dVar38 * dVar40;
    dVar36 = dVar36 * dVar40;
    dVar37 = dVar37 * dVar40;
    if (!bVar30 || uVar23 == 0 && uVar11 == 0) goto LAB_00032f44;
    bVar30 = uStack_8cc <= uVar11;
    if (uVar11 == uStack_8cc) {
      bVar30 = local_8d0 <= uVar23;
    }
    if (bVar30 && (uVar11 != uStack_8cc || uVar23 != local_8d0)) goto LAB_00032f44;
    dVar40 = (double)FUN_0003f4d0(local_8d0 - uVar23,uStack_8cc - (uVar11 + (local_8d0 < uVar23)));
    dVar36 = (double)FUN_0003f4d0(uVar23,uVar11);
    av_log(0,0x20,DAT_00033730 + 0x33438);
    fVar35 = (float)((dVar40 * dVar2) / dVar36);
    if (0.0 <= fVar35) {
      dVar33 = (double)fVar35;
      av_log(0,0x20,DAT_00033734 + 0x3347c);
      goto LAB_00032f80;
    }
  }
  av_log(0,0x20,DAT_000331d4 + 0x32f80);
LAB_00032f80:
  av_log(0,0x20,DAT_000331d8 + 0x32f94);
  piVar5 = *(int **)(iVar27 + DAT_000331dc);
  if (0 < *piVar5) {
    iVar14 = 0;
    iVar21 = DAT_000331e0 + 0x32fc0;
    piVar8 = *(int **)(iVar27 + DAT_000331e4);
    do {
      piVar9 = *(int **)(*piVar8 + iVar14 * 4);
      av_log(0,0x28,iVar21,iVar14,*(undefined4 *)(*piVar9 + 0x20),(int)((ulonglong)dVar33 >> 0x20),
             dVar41);
      if (piVar9[0x16] < 1) {
        dVar33 = 0.0;
        dVar41 = 0.0;
      }
      else {
        dVar33 = 0.0;
        dVar41 = 0.0;
        iVar17 = DAT_000331ec + 0x33024;
        piVar22 = *(int **)(iVar27 + DAT_000331e8);
        iVar24 = 0;
        do {
          iVar13 = *(int *)(*piVar22 + (iVar24 + piVar9[3]) * 4);
          iVar20 = *(int *)(*(int *)(iVar13 + 0x18) + 8);
          dVar33 = (double)VectorAdd(dVar33,*(undefined8 *)(iVar13 + 0x140),8);
          dVar41 = (double)VectorAdd(dVar41,*(undefined8 *)(iVar13 + 0x138),8);
          uVar31 = av_get_media_type_string(iVar20);
          iVar15 = iVar24 + 1;
          av_log(0,0x28,iVar17,iVar14,iVar24,uVar31);
          uVar43 = *(undefined8 *)(iVar13 + 0x138);
          uVar39 = *(undefined8 *)(iVar13 + 0x140);
          av_log(0,0x28,DAT_000331f4 + 0x330b8);
          uVar31 = 0;
          if (*(int *)(iVar13 + 0x10) != 0) {
            uVar39 = *(undefined8 *)(iVar13 + 0x148);
            av_log(0,0x28,DAT_000331f8 + 0x330e8,*(int *)(iVar13 + 0x10),uVar39,uVar43);
            if (iVar20 == 1) {
              uVar39 = *(undefined8 *)(iVar13 + 0x150);
              av_log(0,0x28,DAT_00033234 + 0x333d0);
            }
            av_log(0,0x28,DAT_000331fc + 0x33108);
            uVar31 = extraout_r3;
          }
          av_log(0,0x28,DAT_000331f0 + 0x3303c,uVar31,uVar39,uVar43);
          iVar24 = iVar15;
        } while (iVar15 < piVar9[0x16]);
      }
      iVar14 = iVar14 + 1;
      av_log(0,0x28,DAT_00033200 + 0x3312c);
    } while (iVar14 < *piVar5);
  }
  piVar5 = *(int **)(iVar27 + DAT_00033204);
  if (0 < *piVar5) {
    iVar14 = 0;
    iVar21 = DAT_00033208 + 0x33168;
    do {
      iVar24 = *(int *)(*piVar7 + iVar14 * 4);
      av_log(0,0x28,iVar21,iVar14,*(undefined4 *)(*(int *)(iVar24 + 8) + 0x20),
             (int)((ulonglong)dVar33 >> 0x20),dVar41);
      if (*(int *)(*(int *)(iVar24 + 8) + 0x18) == 0) {
        dVar33 = 0.0;
        dVar40 = 0.0;
      }
      else {
        dVar33 = 0.0;
        dVar40 = 0.0;
        iVar17 = DAT_00033210 + 0x331c4;
        piVar8 = *(int **)(iVar27 + DAT_0003320c);
        uVar23 = 0;
        do {
          iVar13 = *(int *)(*piVar8 + (uVar23 + *(int *)(iVar24 + 0x10)) * 4);
          iVar15 = *(int *)(*(int *)(iVar13 + 0x54) + 8);
          dVar33 = (double)VectorAdd(dVar33,*(undefined8 *)(iVar13 + 400),8);
          dVar40 = (double)VectorAdd(dVar40,*(undefined8 *)(iVar13 + 0x188),8);
          uVar31 = av_get_media_type_string(iVar15);
          uVar11 = uVar23 + 1;
          av_log(0,0x28,iVar17,iVar14,uVar23,uVar31,dVar41);
          uVar31 = 0;
          if (*(int *)(iVar13 + 0x10) != 0) {
            av_log(0,0x28,DAT_0003321c + 0x332fc,*(int *)(iVar13 + 0x10),
                   *(undefined8 *)(iVar13 + 0x198));
            if (iVar15 == 1) {
              av_log(0,0x28,DAT_00033230 + 0x333b0);
            }
            av_log(0,0x28,DAT_00033220 + 0x3331c);
            uVar31 = extraout_r3_00;
          }
          dVar41 = *(double *)(iVar13 + 0x188);
          av_log(0,0x28,DAT_00033214 + 0x33250,uVar31,*(undefined8 *)(iVar13 + 400),dVar41);
          av_log(0,0x28,DAT_00033218 + 0x33270);
          uVar23 = uVar11;
        } while (uVar11 < *(uint *)(*(int *)(iVar24 + 8) + 0x18));
      }
      iVar14 = iVar14 + 1;
      av_log(0,0x28,DAT_00033224 + 0x33340);
      dVar41 = dVar40;
    } while (iVar14 < *piVar5);
  }
  if (local_8e8 == 0 && iStack_8e4 == 0) {
    av_log(0,0x18,DAT_00033228 + 0x33374);
    if (bVar28) {
      av_log(0,0x18,DAT_0003322c + 0x33394);
    }
    else {
      av_log(0,0x18,DAT_00033768 + 0x336f4);
    }
  }
  return;
}



/* ===== FUN_000337e4 @ 000337e4 size=256 ===== */

void FUN_000337e4(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = DAT_000338e4 + 0x33808;
  if (param_2 != 0 || param_3 < 0) {
    puVar2 = (uint *)(DAT_000338e8 + 0x33948 + (param_3 >> 0x1f) * -8);
    uVar3 = *puVar2;
    *puVar2 = uVar3 + 1;
    puVar2[1] = puVar2[1] + (uint)(0xfffffffe < uVar3);
    if ((param_3 < 0) && (**(int **)(iVar5 + DAT_000338ec) != 0)) {
LAB_000338cc:
                    /* WARNING: Subroutine does not return */
      FUN_0002b538(1);
    }
    if ((param_1 != (int *)0x0 && param_2 != 0) &&
       ((*(int *)(param_1[8] + 0x11c) != 0 || ((*(uint *)(param_1[8] + 0xe8) & 1) != 0)))) {
      piVar4 = *(int **)(iVar5 + DAT_000338ec);
      if (*piVar4 == 0) {
        uVar1 = 0x18;
      }
      else {
        uVar1 = 8;
      }
      av_log(0,uVar1,DAT_000338f4 + 0x338a8,
             *(undefined4 *)(**(int **)(**(int **)(iVar5 + DAT_000338f0) + *param_1 * 4) + 0x20),
             *(undefined4 *)param_1[1]);
      if (*piVar4 != 0) goto LAB_000338cc;
    }
  }
  return;
}



/* ===== FUN_000338f8 @ 000338f8 size=204 ===== */

void FUN_000338f8(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_000339c4 + 0x33914;
  if (param_3[0x14] == 0) {
    FUN_0001ac60();
    return;
  }
  iVar1 = av_bsf_send_packet(param_3[0x14]);
  if (-1 < iVar1) {
    while (iVar1 = av_bsf_receive_packet(param_3[0x14],param_2), -1 < iVar1) {
      FUN_0001ac60(param_1,param_2,param_3,0);
    }
    if (iVar1 == -0xb) {
      return;
    }
  }
  if ((iVar1 != -0x20464f45) &&
     (av_log(0,0x10,DAT_000339c8 + 0x33998,*param_3,param_3[1]),
     **(int **)(iVar2 + DAT_000339cc) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0002b538(1);
  }
  return;
}



/* ===== FUN_000339d0 @ 000339d0 size=304 ===== */

void FUN_000339d0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  rusage local_440 [14];
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (**(int **)(DAT_00033b00 + 0x339e4 + DAT_00033b04) != 0) {
    uStack_c = param_2;
    uStack_8 = param_3;
    uStack_4 = param_4;
    uVar4 = av_gettime_relative();
    getrusage(RUSAGE_SELF,local_440);
    lVar1 = (longlong)local_440[0].ru_utime.tv_sec * 1000000 +
            (longlong)local_440[0].ru_utime.tv_usec;
    lVar2 = (longlong)local_440[0].ru_stime.tv_sec * 1000000 +
            (longlong)local_440[0].ru_stime.tv_usec;
    if (param_1 != (char *)0x0) {
      vsnprintf((char *)local_440,0x400,param_1,&uStack_c);
      uVar5 = VectorSub(uVar4,*(undefined8 *)(DAT_00033b08 + 0x33bd8),8);
      av_log(0,0x20,DAT_00033b0c + 0x33aa8,DAT_00033b08 + 0x33a98,
             (uint)lVar1 - *(uint *)(DAT_00033b08 + 0x33be0),
             (int)((ulonglong)lVar1 >> 0x20) -
             (*(int *)(DAT_00033b08 + 0x33be4) +
             (uint)((uint)lVar1 < *(uint *)(DAT_00033b08 + 0x33be0))),
             (uint)lVar2 - *(uint *)(DAT_00033b08 + 0x33be8),
             (int)((ulonglong)lVar2 >> 0x20) -
             (*(int *)(DAT_00033b08 + 0x33bec) +
             (uint)((uint)lVar2 < *(uint *)(DAT_00033b08 + 0x33be8))),uVar5,local_440);
    }
    iVar3 = DAT_00033b10;
    *(undefined8 *)(DAT_00033b10 + 0x33c2c) = uVar4;
    *(longlong *)(iVar3 + 0x33c34) = lVar1;
    *(longlong *)(iVar3 + 0x33c3c) = lVar2;
  }
  return;
}



/* ===== FUN_00033b14 @ 00033b14 size=2444 ===== */

undefined4 FUN_00033b14(uint param_1,int param_2)

{
  __suseconds_t _Var1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char *__format;
  void *__ptr;
  undefined4 *puVar5;
  __time_t _Var6;
  int *piVar7;
  int *piVar8;
  char *__format_00;
  FILE *__stream;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  int iVar14;
  bool bVar15;
  undefined4 *local_12d0;
  uint local_12cc;
  undefined1 *local_12c4;
  double dStack_12b0;
  byte local_12a8 [64];
  timeval local_1268;
  undefined8 uStack_1260;
  timeval local_1258;
  timeval local_1250;
  timeval local_1248;
  timeval local_1240;
  timeval local_1238;
  timeval local_1230;
  termios local_1228 [4];
  undefined1 uStack_1129;
  timeval local_1128 [3];
  undefined1 local_1109;
  undefined1 uStack_1029;
  termios local_1028 [68];
  undefined1 local_29;
  
  iVar2 = DAT_00033ea0;
  iVar9 = DAT_00033ea4 + 0x33b34;
  iVar11 = *(int *)(DAT_00033ea0 + 0x33b34);
  if (iVar11 != 0) {
    return 0xabb6a7bb;
  }
  iVar14 = param_2 - (*(int *)(DAT_00033ea0 + 0x33c8c) +
                     (uint)(param_1 < *(uint *)(DAT_00033ea0 + 0x33c88)));
  bVar15 = DAT_00033e98 < param_1 - *(uint *)(DAT_00033ea0 + 0x33c88);
  if ((int)(DAT_00033e9c - (iVar14 + (uint)bVar15)) < 0 ==
      (SBORROW4(DAT_00033e9c,iVar14) != SBORROW4(DAT_00033e9c - iVar14,(uint)bVar15))) {
    return 0;
  }
  memset(local_1028,0,0x80);
  local_1028[0].c_iflag = local_1028[0].c_iflag | 1;
  local_1128[0].tv_sec = iVar11;
  local_1128[0].tv_usec = iVar11;
  iVar11 = select(1,(fd_set *)local_1028,(fd_set *)0x0,(fd_set *)0x0,local_1128);
  if (iVar11 < 1) {
    *(uint *)(iVar2 + 0x33c88) = param_1;
    *(int *)(iVar2 + 0x33c8c) = param_2;
    return 0;
  }
  local_12cc = read(0,local_1228,1);
  iVar2 = DAT_00033ea8;
  if (local_12cc == 1) {
    local_12cc = local_1228[0].c_iflag & 0xff;
  }
  *(uint *)(DAT_00033ea8 + 0x33d6c) = param_1;
  *(int *)(iVar2 + 0x33d70) = param_2;
  if (local_12cc == 0x71) {
    av_log(0,0x20,DAT_00033eac + 0x33c8c);
    return 0xabb6a7bb;
  }
  if (local_12cc == 0x2b) {
    iVar2 = av_log_get_level();
    av_log_set_level(iVar2 + 10);
    return 0;
  }
  if (local_12cc == 0x2d) {
    iVar2 = av_log_get_level();
    av_log_set_level(iVar2 + -10);
    return 0;
  }
  if (local_12cc == 0x73) {
    **(uint **)(iVar9 + DAT_00033eb8) = **(uint **)(iVar9 + DAT_00033eb8) ^ 1;
    return 0;
  }
  if (local_12cc == 0x68) {
    piVar7 = *(int **)(iVar9 + DAT_00033eb0);
    if (*piVar7 == 0) {
      if (**(int **)(iVar9 + DAT_00033eb4) == 0) {
        **(int **)(iVar9 + DAT_00033eb4) = 1;
      }
      else {
        *piVar7 = 1;
      }
    }
    else {
      puVar5 = *(undefined4 **)(iVar9 + DAT_00033eb4);
      *piVar7 = 0;
      *puVar5 = 0;
    }
    av_log_set_level(0x30);
    return 0;
  }
  if ((local_12cc & 0xffffffdf) == 0x43) {
    memset(local_1128,0,0x100);
    puVar5 = *(undefined4 **)(iVar9 + DAT_00033f00);
    fwrite((void *)(DAT_00033ebc + 0x33d44),1,0x3e,(FILE *)*puVar5);
    iVar2 = tcgetattr(0,local_1028);
    if (iVar2 == 0) {
      local_1028[0].c_lflag = local_1028[0].c_lflag | 8;
      tcsetattr(0,0,local_1028);
    }
    uVar12 = 0;
    local_12c4 = &uStack_1029;
    do {
      while( true ) {
        memset(local_1228,0,0x80);
        local_1268.tv_sec = 0;
        local_1268.tv_usec = 0;
        local_1228[0].c_iflag = 1;
        iVar2 = select(1,(fd_set *)local_1228,(fd_set *)0x0,(fd_set *)0x0,&local_1268);
        if (0 < iVar2) break;
        if (uVar12 == 0xfff) {
          local_29 = 0;
          iVar2 = tcgetattr(0,local_1228);
          if (iVar2 == 0) {
            uVar3 = 0xffffffff;
LAB_000341e4:
            local_1228[0].c_lflag = local_1228[0].c_lflag & 0xfffffff7;
            tcsetattr(0,0,local_1228);
LAB_00034208:
            fputc(10,(FILE *)*puVar5);
            if ((int)uVar3 < 1) {
              iVar2 = 0;
            }
            else {
LAB_00033e4c:
              iVar2 = sscanf((char *)local_1028,(char *)(DAT_00033ec0 + 0x33e6c),local_12a8,
                             &dStack_12b0,local_1228,local_1128);
              if (2 < iVar2) {
                av_log(0,0x30,DAT_00033ee4 + 0x3430c,local_12a8,dStack_12b0,local_1228,local_1128);
                piVar7 = *(int **)(iVar9 + DAT_00033ee8);
                iVar2 = *piVar7;
                if (iVar2 < 1) {
                  return 0;
                }
                iVar11 = 0;
                __format = (char *)(DAT_00033eec + 0x34334);
                __ptr = (void *)(DAT_00033ef4 + 0x34340);
                piVar10 = *(int **)(iVar9 + DAT_00033ef0);
                __format_00 = (char *)(DAT_00033ef8 + 0x34354);
                do {
                  iVar9 = *(int *)(*(int *)(*piVar10 + iVar11 * 4) + 8);
                  if (iVar9 != 0) {
                    if (0.0 <= dStack_12b0) {
                      if (local_12cc == 99) {
                        fwrite(__ptr,1,0x50,(FILE *)*puVar5);
                        iVar2 = *piVar7;
                      }
                      else {
                        iVar2 = avfilter_graph_queue_command
                                          (iVar9,local_12a8,local_1228,local_1128,0);
                        if (iVar2 < 0) {
                          __stream = (FILE *)*puVar5;
                          local_1268.tv_sec = 0;
                          local_1268.tv_usec = 0;
                          uStack_1260 = 0;
                          local_1258 = local_1268;
                          local_1250 = local_1268;
                          local_1248 = local_1268;
                          local_1240 = local_1268;
                          local_1238 = local_1268;
                          local_1230 = local_1268;
                          av_strerror(iVar2,&local_1268,0x40);
                          fprintf(__stream,__format,&local_1268);
                        }
                        iVar2 = *piVar7;
                      }
                    }
                    else {
                      uVar4 = avfilter_graph_send_command
                                        (SUB84(dStack_12b0,0),iVar9,local_12a8,local_1228,local_1128
                                         ,local_1028,0x1000,local_12cc == 99);
                      fprintf((FILE *)*puVar5,__format_00,iVar11,uVar4);
                      iVar2 = *piVar7;
                    }
                  }
                  iVar11 = iVar11 + 1;
                } while (iVar11 < iVar2);
                return 0;
              }
            }
          }
          else {
            fputc(10,(FILE *)*puVar5);
            iVar2 = 0;
          }
          av_log(0,0x10,DAT_00033ec4 + 0x33e94,iVar2,local_1028);
          return 0;
        }
      }
      uVar3 = read(0,local_12a8,1);
      if (uVar3 == 1) {
        uVar3 = (uint)local_12a8[0];
      }
      if (uVar3 == 10) {
        local_1028[0].c_cc[uVar12 - 0x11] = '\0';
        iVar2 = tcgetattr(0,local_1228);
        if (iVar2 == 0) goto LAB_000341e4;
        fputc(10,(FILE *)*puVar5);
        goto LAB_00033e4c;
      }
      if (0xffe < uVar12 || uVar3 == 0xd) {
        local_1028[0].c_cc[uVar12 - 0x11] = '\0';
        iVar2 = tcgetattr(0,local_1228);
        if (iVar2 == 0) goto LAB_000341e4;
        goto LAB_00034208;
      }
      if (0 < (int)uVar3) {
        uVar12 = uVar12 + 1;
        local_12c4 = local_12c4 + 1;
        *local_12c4 = (char)uVar3;
      }
    } while( true );
  }
  if ((local_12cc & 0xffffffdf) != 0x44) goto LAB_00033fe4;
  _Var1 = local_1268.tv_usec;
  local_1268 = (timeval)((ulonglong)local_1268 & 0xffffffff00000000);
  if (local_12cc == 0x44) {
    puVar5 = *(undefined4 **)(iVar9 + DAT_00033ee0);
    uVar12 = *(int *)(*(int *)(*(int *)*puVar5 + 0x18) + 0x1c4) * 2;
    local_1268.tv_usec = _Var1;
    local_1268.tv_sec = uVar12;
    if (uVar12 != 0) {
      if ((uVar12 & 0x40) == 0) {
        local_12d0 = *(undefined4 **)(iVar9 + DAT_00033f00);
      }
      else {
        do {
          uVar12 = uVar12 << 1;
        } while ((uVar12 & 0x40) != 0);
        local_1268.tv_sec = uVar12;
        local_12d0 = *(undefined4 **)(iVar9 + DAT_00033f00);
      }
      goto LAB_00034144;
    }
    local_1268.tv_sec = 1;
    iVar2 = **(int **)(iVar9 + DAT_00033edc);
    if (0 < iVar2) {
      uVar12 = 1;
      local_12d0 = *(undefined4 **)(iVar9 + DAT_00033f00);
      goto LAB_00033f74;
    }
    iVar2 = **(int **)(iVar9 + DAT_00033efc);
    if (0 < iVar2) {
      local_12d0 = *(undefined4 **)(iVar9 + DAT_00033f00);
      uVar12 = 1;
      goto LAB_00033fa4;
    }
    local_12d0 = *(undefined4 **)(iVar9 + DAT_00033f00);
LAB_000341ac:
    av_log_set_level(0x30);
    _Var6 = local_1268.tv_sec;
  }
  else {
    iVar2 = tcgetattr(0,local_1028);
    if (iVar2 == 0) {
      local_1028[0].c_lflag = local_1028[0].c_lflag | 8;
      tcsetattr(0,0,local_1028);
    }
    uVar12 = 0;
    puVar13 = &uStack_1129;
    do {
      while( true ) {
        memset(local_1028,0,0x80);
        local_1228[0].c_iflag = 0;
        local_1228[0].c_oflag = 0;
        local_1028[0].c_iflag = 1;
        iVar2 = select(1,(fd_set *)local_1028,(fd_set *)0x0,(fd_set *)0x0,(timeval *)local_1228);
        if (iVar2 < 1) break;
        uVar3 = read(0,local_12a8,1);
        if (uVar3 == 1) {
          uVar3 = (uint)local_12a8[0];
        }
        if (uVar3 == 10) {
          *(undefined1 *)((int)&local_1128[0].tv_sec + uVar12) = 0;
          iVar2 = tcgetattr(0,local_1028);
          if (iVar2 == 0) goto LAB_0003427c;
          local_12d0 = *(undefined4 **)(iVar9 + DAT_00033f00);
          fputc(10,(FILE *)*local_12d0);
          goto LAB_00034108;
        }
        if (0x1e < uVar12 || uVar3 == 0xd) {
          *(undefined1 *)((int)&local_1128[0].tv_sec + uVar12) = 0;
          iVar2 = tcgetattr(0,local_1028);
          if (iVar2 == 0) goto LAB_0003427c;
          goto LAB_00034298;
        }
        if (0 < (int)uVar3) {
          puVar13 = puVar13 + 1;
          *puVar13 = (char)uVar3;
          uVar12 = uVar12 + 1;
        }
      }
    } while (uVar12 != 0x1f);
    local_1109 = 0;
    iVar2 = tcgetattr(0,local_1028);
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
LAB_0003427c:
      local_1028[0].c_lflag = local_1028[0].c_lflag & 0xfffffff7;
      tcsetattr(0,0,local_1028);
LAB_00034298:
      local_12d0 = *(undefined4 **)(iVar9 + DAT_00033f00);
      fputc(10,(FILE *)*local_12d0);
      if ((int)uVar3 < 1) goto LAB_00034124;
LAB_00034108:
      iVar2 = sscanf((char *)local_1128,(char *)(DAT_00033ed4 + 0x3411c),&local_1268);
      if (iVar2 != 1) goto LAB_00034124;
    }
    else {
      local_12d0 = *(undefined4 **)(iVar9 + DAT_00033f00);
      fputc(10,(FILE *)*local_12d0);
LAB_00034124:
      fwrite((void *)(DAT_00033ed8 + 0x34140),1,0x1a,(FILE *)*local_12d0);
    }
    uVar12 = local_1268.tv_sec;
LAB_00034144:
    iVar2 = **(int **)(iVar9 + DAT_00033edc);
    if (0 < iVar2) {
      puVar5 = *(undefined4 **)(iVar9 + DAT_00033ee0);
LAB_00033f74:
      piVar10 = (int *)*puVar5;
      piVar7 = piVar10;
      do {
        piVar8 = piVar7 + 1;
        *(uint *)(*(int *)(*piVar7 + 0x18) + 0x1c4) = uVar12;
        piVar7 = piVar8;
      } while (piVar8 != piVar10 + iVar2);
    }
    iVar2 = **(int **)(iVar9 + DAT_00033efc);
    if (0 < iVar2) {
LAB_00033fa4:
      piVar10 = (int *)**(undefined4 **)(iVar9 + DAT_00033ec8);
      piVar7 = piVar10;
      do {
        piVar8 = piVar7 + 1;
        *(uint *)(*(int *)(*piVar7 + 0x54) + 0x1c4) = uVar12;
        piVar7 = piVar8;
      } while (piVar10 + iVar2 != piVar8);
    }
    _Var6 = 0;
    if (uVar12 != 0) goto LAB_000341ac;
  }
  fprintf((FILE *)*local_12d0,(char *)(DAT_00033ecc + 0x33fe4),_Var6);
LAB_00033fe4:
  if (local_12cc == 0x3f) {
    fwrite((void *)(DAT_00033ed0 + 0x3400c),1,0x153,(FILE *)**(undefined4 **)(iVar9 + DAT_00033f00))
    ;
  }
  return 0;
}



/* ===== FUN_0003450c @ 0003450c size=856 ===== */

undefined4 FUN_0003450c(int *param_1,int param_2,undefined4 *param_3,int param_4)

{
  byte bVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  char *__s;
  char *__format;
  int iVar6;
  int iVar7;
  int iVar8;
  uint in_fpscr;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_a0;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  
  iVar6 = DAT_00034880 + 0x34528;
  dVar10 = DAT_00034878;
  if (param_4 == 0) {
    if (**(int **)(iVar6 + DAT_00034884) == 0) {
LAB_000347c8:
      return SUB84(DAT_00034878,0);
    }
    pcVar3 = (char *)(DAT_00034898 + 0x34818);
    __s = pcVar3;
  }
  else {
    iVar7 = *(int *)(param_4 + 0x68);
    iVar8 = *(int *)(param_4 + 0x6c);
    if (param_2 == 0 || iVar8 == -0x80000000 && iVar7 == 0) {
LAB_000346b0:
      iVar6 = **(int **)(iVar6 + DAT_00034884);
      if (iVar6 == 0) {
        return SUB84(dVar10,0);
      }
      uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_48 = 0;
      local_40 = 0;
      uStack_3c = uStack_44;
      if (iVar8 != -0x80000000 || iVar7 != 0) goto LAB_000346fc;
      local_58 = *(undefined4 *)(DAT_00034894 + 0x347e8);
      uStack_54 = CONCAT22((short)((uint)uStack_44 >> 0x10),
                           (short)*(undefined4 *)(DAT_00034894 + 0x347ec));
    }
    else {
      param_3 = (undefined4 *)*param_3;
      if ((param_3 != (undefined4 *)0x0) && (*(int *)(param_3[2] + 8) != 0)) {
        local_a0 = *(undefined8 *)param_1;
        if (param_1[1] == -0x80000000 && *param_1 == 0) {
          local_a0 = 0;
        }
        puVar4 = (undefined4 *)(param_2 + 0x4c);
        av_buffersink_get_time_base(&local_78,*param_3);
        local_58 = *puVar4;
        uStack_54 = *(undefined4 *)(param_2 + 0x50);
        iVar8 = *(int *)(param_2 + 0x50);
        iVar7 = av_log2(iVar8);
        uVar5 = 0x1d - iVar7;
        if (0xf < (int)uVar5) {
          uVar5 = 0x10;
        }
        uVar5 = uVar5 & ~((int)uVar5 >> 0x1f);
        uStack_54 = iVar8 << (uVar5 & 0xff);
        uVar2 = (undefined4)((ulonglong)*(undefined8 *)(param_4 + 0x68) >> 0x20);
        uVar9 = (undefined4)*(undefined8 *)(param_4 + 0x68);
        uVar12 = av_rescale_q(uVar9,uVar2,local_78,uStack_74,local_58,uStack_54);
        uVar13 = av_rescale_q((undefined4)local_a0,local_a0._4_4_,1,1000000,local_58,uStack_54);
        dVar11 = (double)FUN_0003f4e4((uint)uVar12 - (uint)uVar13,
                                      (int)((ulonglong)uVar12 >> 0x20) -
                                      ((int)((ulonglong)uVar13 >> 0x20) +
                                      (uint)((uint)uVar12 < (uint)uVar13)));
        dVar10 = (double)VectorSignedToFloat(1 << (uVar5 & 0xff),(byte)(in_fpscr >> 0x16) & 3);
        dVar11 = dVar11 / dVar10;
        uVar5 = in_fpscr & 0xfffffff | (uint)(dVar11 < 0.0) << 0x1f | (uint)(dVar11 == 0.0) << 0x1e;
        in_fpscr = uVar5 | (uint)NAN(dVar11) << 0x1c;
        bVar1 = (byte)(uVar5 >> 0x18);
        dVar10 = DAT_00034870;
        if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
          dVar10 = DAT_00034868;
        }
        uVar12 = av_rescale_q(uVar9,uVar2,local_78,uStack_74,*puVar4,*(undefined4 *)(param_2 + 0x50)
                             );
        uVar13 = av_rescale_q((undefined4)local_a0,local_a0._4_4_,1,1000000,*puVar4,
                              *(undefined4 *)(param_2 + 0x50));
        iVar7 = (uint)uVar12 - (uint)uVar13;
        iVar8 = (int)((ulonglong)uVar12 >> 0x20) -
                ((int)((ulonglong)uVar13 >> 0x20) + (uint)((uint)uVar12 < (uint)uVar13));
        *(int *)(param_4 + 0x68) = iVar7;
        *(int *)(param_4 + 0x6c) = iVar8;
        dVar10 = dVar11 + dVar10;
        goto LAB_000346b0;
      }
      iVar6 = **(int **)(iVar6 + DAT_00034884);
      if (iVar6 == 0) goto LAB_000347c8;
      uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
LAB_000346fc:
      local_40 = 0;
      local_48 = 0;
      local_58 = 0;
      uStack_54 = uStack_3c;
      uStack_44 = uStack_3c;
      snprintf((char *)&local_58,0x20,(char *)(DAT_00034888 + 0x34714),iVar6,iVar7,iVar8);
    }
    uVar2 = SUB84(dVar10,0);
    pcVar3 = (char *)&local_58;
    uStack_64 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_70 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_6c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    __s = (char *)&local_78;
    local_78 = 0;
    local_68 = 0;
    local_60 = 0;
    uStack_5c = uStack_64;
    if (*(int *)(param_4 + 0x6c) != -0x80000000 || *(int *)(param_4 + 0x68) != 0) {
      __format = (char *)(DAT_0003488c + 0x34748);
      VectorSignedToFloat(*(undefined4 *)(param_2 + 0x4c),(byte)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(*(undefined4 *)(param_2 + 0x50),(byte)(in_fpscr >> 0x16) & 3);
      uStack_74 = uStack_64;
      FUN_0003f4e4();
      snprintf(__s,0x20,__format);
      goto LAB_00034780;
    }
    local_78 = *(undefined4 *)(DAT_0003489c + 0x3483c);
    uStack_74 = CONCAT22((short)((uint)uStack_64 >> 0x10),
                         (short)*(undefined4 *)(DAT_0003489c + 0x34840));
  }
  uVar2 = SUB84(dVar10,0);
LAB_00034780:
  av_log(0,0x20,DAT_00034890 + 0x347a0,pcVar3,__s);
  return uVar2;
}



/* ===== FUN_000348a0 @ 000348a0 size=3184 ===== */

int FUN_000348a0(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  FILE *pFVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  char *pcVar14;
  int iVar15;
  uint in_fpscr;
  double dVar16;
  float fVar18;
  double dVar17;
  double dVar19;
  double dVar20;
  int local_220;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  ulonglong local_1e0;
  undefined8 uStack_1d8;
  ulonglong local_1d0;
  ulonglong local_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  ulonglong local_120;
  undefined8 uStack_118;
  ulonglong local_110;
  ulonglong local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  ulonglong local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  ulonglong local_48;
  
  iVar11 = param_2[0x15];
  iVar15 = param_2[0x1c];
  iVar7 = DAT_00035154 + 0x348c8;
  uVar1 = av_get_media_type_string(*(undefined4 *)(iVar11 + 8));
  iVar2 = DAT_00035158;
  if (param_3 == 0) {
    FUN_000339d0(0);
    iVar2 = avcodec_send_frame(iVar11,0);
    if (iVar2 < 0) {
      if (iVar2 != -0x20464f45) goto LAB_00035560;
      local_220 = DAT_000355e4 + 0x354ec;
    }
    else {
      local_220 = DAT_0003560c + 0x355d4;
    }
  }
  else {
    uVar6 = param_2[0x66];
    param_2[0x66] = uVar6 + 1;
    param_2[0x67] = param_2[0x67] + (uint)(0xfffffffe < uVar6);
    if (**(int **)(iVar7 + iVar2) != 0) {
      uStack_1ec = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_1f8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_1f4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      iVar2 = *(int *)(param_3 + 0x68);
      iVar13 = *(int *)(param_3 + 0x6c);
      local_200 = 0;
      local_1f0 = 0;
      local_1e8 = 0;
      uStack_1e4 = uStack_1ec;
      if (iVar13 == -0x80000000 && iVar2 == 0) {
        local_200 = *(undefined4 *)(DAT_000355f4 + 0x35554);
        uStack_1fc = CONCAT22((short)((uint)uStack_1ec >> 0x10),
                              (short)*(undefined4 *)(DAT_000355f4 + 0x35558));
      }
      else {
        uStack_1fc = uStack_1ec;
        snprintf((char *)&local_200,0x20,(char *)(DAT_000351f4 + 0x353a4),iVar13,iVar2,iVar13);
        iVar2 = *(int *)(param_3 + 0x68);
        iVar13 = *(int *)(param_3 + 0x6c);
      }
      local_1d0 = 0;
      uStack_1d8 = 0;
      local_1c8 = local_1d0;
      if (iVar13 == -0x80000000 && iVar2 == 0) {
        local_1e0 = (ulonglong)*(uint6 *)(DAT_000355fc + 0x35588);
      }
      else {
        pcVar14 = (char *)(DAT_000351f8 + 0x353e4);
        VectorSignedToFloat(*(undefined4 *)(iVar11 + 0x4c),(byte)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(*(undefined4 *)(iVar11 + 0x50),(byte)(in_fpscr >> 0x16) & 3);
        local_1e0 = local_1d0;
        FUN_0003f4e4(iVar2,iVar13);
        snprintf((char *)&local_1e0,0x20,pcVar14);
      }
      av_log(0,0x20,DAT_000351fc + 0x3542c,uVar1,&local_200,&local_1e0,
             *(undefined4 *)(iVar11 + 0x4c),*(undefined4 *)(iVar11 + 0x50));
    }
    FUN_000339d0(0);
    iVar2 = avcodec_send_frame(iVar11,param_3);
    if (iVar2 < 0) {
LAB_00035560:
      av_log(0,0x10,DAT_000355f8 + 0x35578,uVar1);
      return iVar2;
    }
    local_220 = DAT_0003515c + 0x3493c;
  }
  iVar2 = DAT_00035160 + 0x34954;
  while( true ) {
    iVar3 = avcodec_receive_packet(iVar11,iVar15);
    FUN_000339d0(iVar2,local_220,uVar1,*param_2,param_2[1]);
    iVar13 = iVar3 + 0x20464f45;
    if (iVar3 != -0x20464f45) {
      iVar13 = iVar3;
    }
    if (iVar13 < 0 != (iVar3 == -0x20464f45 && SBORROW4(iVar3,-0x20464f45))) break;
    if (((FILE *)param_2[0x4e] != (FILE *)0x0) && (*(char **)(iVar11 + 0x1b0) != (char *)0x0)) {
      fputs(*(char **)(iVar11 + 0x1b0),(FILE *)param_2[0x4e]);
    }
    if (iVar3 == -0xb) goto LAB_00034a4c;
    if (iVar3 == -0x20464f45) {
      FUN_00032030(param_1,iVar15,param_2,1);
      return -0x20464f45;
    }
    if (iVar3 < 0) goto LAB_000354f0;
    piVar12 = *(int **)(iVar7 + DAT_00035158);
    if (*piVar12 != 0) {
      uStack_1ac = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_1b8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_1b4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_1c0 = 0;
      local_1b0 = 0;
      local_1a8 = 0;
      uStack_1a4 = uStack_1ac;
      if (*(int *)(iVar15 + 0xc) == -0x80000000 && *(int *)(iVar15 + 8) == 0) {
        local_1c0 = *(undefined4 *)(DAT_000351ec + 0x35318);
        uStack_1bc = CONCAT22((short)((uint)uStack_1ac >> 0x10),
                              (short)*(undefined4 *)(DAT_000351ec + 0x3531c));
      }
      else {
        uStack_1bc = uStack_1ac;
        snprintf((char *)&local_1c0,0x20,(char *)(DAT_00035164 + 0x34aac),*(int *)(iVar15 + 0xc),
                 *(int *)(iVar15 + 8));
      }
      uStack_18c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_198 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_194 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_1a0 = 0;
      local_190 = 0;
      local_188 = 0;
      uStack_184 = uStack_18c;
      if (*(int *)(iVar15 + 0xc) == -0x80000000 && *(int *)(iVar15 + 8) == 0) {
        local_1a0 = *(undefined4 *)(DAT_000351e8 + 0x35300);
        uStack_19c = CONCAT22((short)((uint)uStack_18c >> 0x10),
                              (short)*(undefined4 *)(DAT_000351e8 + 0x35304));
      }
      else {
        pcVar14 = (char *)(DAT_00035168 + 0x34ae0);
        VectorSignedToFloat(*(undefined4 *)(iVar11 + 0x4c),(byte)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(*(undefined4 *)(iVar11 + 0x50),(byte)(in_fpscr >> 0x16) & 3);
        uStack_19c = uStack_18c;
        FUN_0003f4e4();
        snprintf((char *)&local_1a0,0x20,pcVar14);
      }
      uStack_16c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_178 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_174 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_180 = 0;
      local_170 = 0;
      local_168 = 0;
      uStack_164 = uStack_16c;
      if (*(int *)(iVar15 + 0x14) == -0x80000000 && *(int *)(iVar15 + 0x10) == 0) {
        local_180 = *(undefined4 *)(DAT_000351e4 + 0x352e8);
        uStack_17c = CONCAT22((short)((uint)uStack_16c >> 0x10),
                              (short)*(undefined4 *)(DAT_000351e4 + 0x352ec));
      }
      else {
        uStack_17c = uStack_16c;
        snprintf((char *)&local_180,0x20,(char *)(DAT_0003516c + 0x34b48),*(int *)(iVar15 + 0x14),
                 *(int *)(iVar15 + 0x10));
      }
      uStack_14c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_158 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_154 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_160 = 0;
      local_150 = 0;
      local_148 = 0;
      uStack_144 = uStack_14c;
      if (*(int *)(iVar15 + 0x14) == -0x80000000 && *(int *)(iVar15 + 0x10) == 0) {
        local_160 = *(undefined4 *)(DAT_000351e0 + 0x352d0);
        uStack_15c = CONCAT22((short)((uint)uStack_14c >> 0x10),
                              (short)*(undefined4 *)(DAT_000351e0 + 0x352d4));
      }
      else {
        pcVar14 = (char *)(DAT_00035170 + 0x34b7c);
        VectorSignedToFloat(*(undefined4 *)(iVar11 + 0x4c),(byte)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(*(undefined4 *)(iVar11 + 0x50),(byte)(in_fpscr >> 0x16) & 3);
        uStack_15c = uStack_14c;
        FUN_0003f4e4();
        snprintf((char *)&local_160,0x20,pcVar14);
      }
      uStack_12c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_138 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_134 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_128 = 0;
      local_140 = 0;
      local_130 = 0;
      uStack_124 = uStack_12c;
      if (*(int *)(iVar15 + 0x34) == -0x80000000 && *(int *)(iVar15 + 0x30) == 0) {
        local_140 = *(undefined4 *)(DAT_000351dc + 0x352b4);
        uStack_13c = CONCAT22((short)((uint)uStack_12c >> 0x10),
                              (short)*(undefined4 *)(DAT_000351dc + 0x352b8));
      }
      else {
        uStack_13c = uStack_12c;
        snprintf((char *)&local_140,0x20,(char *)(DAT_00035174 + 0x34be4),*(int *)(iVar15 + 0x34),
                 *(int *)(iVar15 + 0x30));
      }
      local_110 = 0;
      uStack_118 = 0;
      local_108 = local_110;
      if (*(int *)(iVar15 + 0x34) == -0x80000000 && *(int *)(iVar15 + 0x30) == 0) {
        local_120 = (ulonglong)*(uint6 *)(DAT_000351d8 + 0x35298);
      }
      else {
        pcVar14 = (char *)(DAT_00035178 + 0x34c1c);
        dVar19 = (double)VectorSignedToFloat(*(undefined4 *)(iVar11 + 0x4c),
                                             (byte)(in_fpscr >> 0x16) & 3);
        dVar16 = (double)VectorSignedToFloat(*(undefined4 *)(iVar11 + 0x50),
                                             (byte)(in_fpscr >> 0x16) & 3);
        local_120 = local_110;
        dVar17 = (double)FUN_0003f4e4();
        snprintf((char *)&local_120,0x20,pcVar14,&local_120,(dVar19 / dVar16) * dVar17);
      }
      av_log(0,0x20,DAT_0003517c + 0x34c84,uVar1,&local_1c0,&local_1a0,&local_180,&local_160,
             &local_140,&local_120);
    }
    av_packet_rescale_ts
              (iVar15,*(undefined4 *)(iVar11 + 0x4c),*(undefined4 *)(iVar11 + 0x50),param_2[0x10],
               param_2[0x11]);
    if (*piVar12 != 0) {
      uStack_ec = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_f8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_f4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_100 = 0;
      local_f0 = 0;
      local_e8 = 0;
      uStack_e4 = uStack_ec;
      if (*(int *)(iVar15 + 0xc) == -0x80000000 && *(int *)(iVar15 + 8) == 0) {
        local_100 = *(undefined4 *)(DAT_000351d4 + 0x3527c);
        uStack_fc = CONCAT22((short)((uint)uStack_ec >> 0x10),
                             (short)*(undefined4 *)(DAT_000351d4 + 0x35280));
      }
      else {
        uStack_fc = uStack_ec;
        snprintf((char *)&local_100,0x20,(char *)(DAT_000351a4 + 0x34f20),*(int *)(iVar15 + 0xc),
                 *(int *)(iVar15 + 8));
      }
      uStack_cc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_d8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_d4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_e0 = 0;
      local_d0 = 0;
      local_c8 = 0;
      uStack_c4 = uStack_cc;
      if (*(int *)(iVar15 + 0xc) == -0x80000000 && *(int *)(iVar15 + 8) == 0) {
        local_e0 = *(undefined4 *)(DAT_000351d0 + 0x35260);
        uStack_dc = CONCAT22((short)((uint)uStack_cc >> 0x10),
                             (short)*(undefined4 *)(DAT_000351d0 + 0x35264));
      }
      else {
        pcVar14 = (char *)(DAT_000351a8 + 0x34f54);
        VectorSignedToFloat(*(undefined4 *)(iVar11 + 0x4c),(byte)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(*(undefined4 *)(iVar11 + 0x50),(byte)(in_fpscr >> 0x16) & 3);
        uStack_dc = uStack_cc;
        FUN_0003f4e4();
        snprintf((char *)&local_e0,0x20,pcVar14);
      }
      uStack_ac = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_b8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_b4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_c0 = 0;
      local_b0 = 0;
      local_a8 = 0;
      uStack_a4 = uStack_ac;
      if (*(int *)(iVar15 + 0x14) == -0x80000000 && *(int *)(iVar15 + 0x10) == 0) {
        local_c0 = *(undefined4 *)(DAT_000351cc + 0x35244);
        uStack_bc = CONCAT22((short)((uint)uStack_ac >> 0x10),
                             (short)*(undefined4 *)(DAT_000351cc + 0x35248));
      }
      else {
        uStack_bc = uStack_ac;
        snprintf((char *)&local_c0,0x20,(char *)(DAT_000351ac + 0x34fbc),*(int *)(iVar15 + 0x14),
                 *(int *)(iVar15 + 0x10));
      }
      uStack_8c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_98 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_94 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_a0 = 0;
      local_90 = 0;
      local_88 = 0;
      uStack_84 = uStack_8c;
      if (*(int *)(iVar15 + 0x14) == -0x80000000 && *(int *)(iVar15 + 0x10) == 0) {
        local_a0 = *(undefined4 *)(DAT_000351c8 + 0x35228);
        uStack_9c = CONCAT22((short)((uint)uStack_8c >> 0x10),
                             (short)*(undefined4 *)(DAT_000351c8 + 0x3522c));
      }
      else {
        pcVar14 = (char *)(DAT_000351b0 + 0x34ff0);
        VectorSignedToFloat(*(undefined4 *)(iVar11 + 0x4c),(byte)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(*(undefined4 *)(iVar11 + 0x50),(byte)(in_fpscr >> 0x16) & 3);
        uStack_9c = uStack_8c;
        FUN_0003f4e4();
        snprintf((char *)&local_a0,0x20,pcVar14);
      }
      uStack_6c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_78 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_74 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_68 = 0;
      local_80 = 0;
      local_70 = 0;
      uStack_64 = uStack_6c;
      if (*(int *)(iVar15 + 0x34) == -0x80000000 && *(int *)(iVar15 + 0x30) == 0) {
        local_80 = *(undefined4 *)(DAT_000351c4 + 0x3520c);
        uStack_7c = CONCAT22((short)((uint)uStack_6c >> 0x10),
                             (short)*(undefined4 *)(DAT_000351c4 + 0x35210));
      }
      else {
        uStack_7c = uStack_6c;
        snprintf((char *)&local_80,0x20,(char *)(DAT_000351b4 + 0x35058),*(int *)(iVar15 + 0x34),
                 *(int *)(iVar15 + 0x30));
      }
      local_50 = 0;
      uStack_58 = 0;
      local_48 = local_50;
      if (*(int *)(iVar15 + 0x34) == -0x80000000 && *(int *)(iVar15 + 0x30) == 0) {
        local_60 = (ulonglong)*(uint6 *)(DAT_000351c0 + 0x35128);
      }
      else {
        pcVar14 = (char *)(DAT_000351b8 + 0x35090);
        dVar19 = (double)VectorSignedToFloat(*(undefined4 *)(iVar11 + 0x4c),
                                             (byte)(in_fpscr >> 0x16) & 3);
        dVar16 = (double)VectorSignedToFloat(*(undefined4 *)(iVar11 + 0x50),
                                             (byte)(in_fpscr >> 0x16) & 3);
        local_60 = local_50;
        dVar17 = (double)FUN_0003f4e4();
        snprintf((char *)&local_60,0x20,pcVar14,&local_60,(dVar19 / dVar16) * dVar17);
      }
      av_log(0,0x20,DAT_000351bc + 0x350e8,uVar1,&local_100,&local_e0,&local_c0,&local_a0,&local_80,
             &local_60);
    }
    if (*(int *)(iVar11 + 8) == 0) {
      piVar12 = *(int **)(iVar7 + DAT_00035180);
      iVar3 = *piVar12;
      puVar4 = (undefined4 *)av_packet_get_side_data(iVar15,8);
      iVar13 = param_2[0x15];
      if (puVar4 == (undefined4 *)0x0) {
        uVar9 = 0xffffffff;
        param_2[0x71] = 0;
        param_2[0x6c] = 0xffffffff;
        *(undefined8 *)(param_2 + 0x72) = 0xffffffffffffffff;
        *(undefined8 *)(param_2 + 0x74) = 0xffffffffffffffff;
        *(undefined8 *)(param_2 + 0x76) = 0xffffffffffffffff;
        uVar8 = uVar9;
      }
      else {
        param_2[0x6c] = *puVar4;
        param_2[0x71] = (uint)*(byte *)(puVar4 + 1);
        if (*(char *)((int)puVar4 + 5) == '\0') {
          *(undefined8 *)(param_2 + 0x72) = 0xffffffffffffffff;
        }
        else {
          uVar8 = puVar4[3];
          param_2[0x72] = puVar4[2];
          param_2[0x73] = uVar8;
        }
        if (*(byte *)((int)puVar4 + 5) < 2) {
          *(undefined8 *)(param_2 + 0x74) = 0xffffffffffffffff;
        }
        else {
          uVar8 = puVar4[5];
          param_2[0x74] = puVar4[4];
          param_2[0x75] = uVar8;
        }
        if (*(byte *)((int)puVar4 + 5) < 3) {
          *(undefined8 *)(param_2 + 0x76) = 0xffffffffffffffff;
        }
        else {
          uVar8 = puVar4[7];
          param_2[0x76] = puVar4[6];
          param_2[0x77] = uVar8;
        }
        if (*(byte *)((int)puVar4 + 5) < 4) {
          uVar9 = 0xffffffff;
          uVar8 = uVar9;
        }
        else {
          uVar9 = puVar4[9];
          uVar8 = puVar4[8];
        }
      }
      param_2[0x78] = uVar8;
      param_2[0x79] = uVar9;
      iVar10 = DAT_00035184;
      if (iVar3 != 0) {
        pFVar5 = *(FILE **)(DAT_00035184 + 0x34eac);
        if (pFVar5 == (FILE *)0x0) {
          pFVar5 = fopen64((char *)*piVar12,(char *)(DAT_000355ec + 0x35528));
          *(FILE **)(iVar10 + 0x34eac) = pFVar5;
          if (pFVar5 == (FILE *)0x0) {
            perror((char *)(DAT_000355f0 + 0x35540));
                    /* WARNING: Subroutine does not return */
            FUN_0002b538(1);
          }
        }
        uVar8 = param_2[0x6a];
        dVar16 = *(double *)(param_2 + 0x6a);
        fVar18 = (float)VectorSignedToFloat(param_2[0x6c],(byte)(in_fpscr >> 0x16) & 3);
        dVar17 = (double)(fVar18 / DAT_00035150);
        if (**(int **)(iVar7 + DAT_00035188) < 2) {
          fprintf(pFVar5,(char *)(DAT_000351f0 + 0x35360),uVar8,param_2[0x6b],dVar17);
        }
        else {
          fprintf(pFVar5,(char *)(DAT_0003518c + 0x34d9c),*param_2,param_2[1],uVar8,param_2[0x6b],
                  dVar17);
          dVar17 = dVar16;
        }
        iVar3 = DAT_00035190;
        pFVar5 = *(FILE **)(DAT_00035190 + 0x34f18);
        if ((-1 < (int)param_2[0x73]) && ((*(uint *)(iVar13 + 0x3c) & 0x8000) != 0)) {
          dVar19 = (double)FUN_0003f4e4();
          dVar16 = (double)VectorSignedToFloat(*(int *)(iVar13 + 0x60) * *(int *)(iVar13 + 0x5c),
                                               (byte)(in_fpscr >> 0x16) & 3);
          dVar16 = log10(dVar19 / (dVar16 * DAT_000355d8 * DAT_000355d8));
          fprintf(pFVar5,(char *)(DAT_000355e0 + 0x3547c),SUB84(dVar16 * -10.0,0),
                  (int)((ulonglong)(dVar16 * -10.0) >> 0x20),dVar17);
          pFVar5 = *(FILE **)(iVar3 + 0x34f18);
        }
        dVar16 = DAT_00035138;
        fprintf(pFVar5,(char *)(DAT_00035194 + 0x34de0),*(undefined4 *)(iVar15 + 0x1c));
        iVar3 = DAT_00035198;
        pcVar14 = (char *)(DAT_0003519c + 0x34e00);
        dVar20 = (double)VectorSignedToFloat(param_2[0x10],(byte)(in_fpscr >> 0x16) & 3);
        dVar19 = (double)VectorSignedToFloat(param_2[0x11],(byte)(in_fpscr >> 0x16) & 3);
        dVar17 = (double)FUN_0003f4e4(*(undefined4 *)(iVar15 + 0x10),*(undefined4 *)(iVar15 + 0x14))
        ;
        uVar6 = param_2[0x62];
        iVar10 = param_2[99];
        dVar17 = (dVar20 / dVar19) * dVar17;
        in_fpscr = in_fpscr & 0xfffffff | (uint)(dVar17 < DAT_00035140) << 0x1f;
        if (SUB41(in_fpscr >> 0x1f,0)) {
          dVar17 = DAT_00035140;
        }
        dVar19 = (double)FUN_0003f4d0(uVar6,iVar10);
        pFVar5 = *(FILE **)(iVar3 + 0x34f58);
        FUN_0003f4d0(uVar6 << 3,iVar10 << 3 | uVar6 >> 0x1d);
        VectorSignedToFloat(*(undefined4 *)(iVar13 + 0x4c),(byte)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(*(undefined4 *)(iVar13 + 0x50),(byte)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(*(int *)(iVar15 + 0x1c) << 3,(byte)(in_fpscr >> 0x16) & 3);
        fprintf(pFVar5,pcVar14,SUB84(dVar19 * dVar16,0),(int)((ulonglong)(dVar19 * dVar16) >> 0x20),
                dVar17);
        pFVar5 = *(FILE **)(iVar3 + 0x34f58);
        uVar8 = av_get_picture_type_char(param_2[0x71]);
        fprintf(pFVar5,(char *)(DAT_000351a0 + 0x34ed8),uVar8);
      }
    }
    uVar6 = param_2[0x6a];
    param_2[0x6a] = uVar6 + 1;
    param_2[0x6b] = param_2[0x6b] + (uint)(0xfffffffe < uVar6);
    FUN_000338f8(param_1,iVar15,param_2);
  }
  if (iVar3 == -0xb) {
LAB_00034a4c:
    if (param_3 != 0) {
      return 0;
    }
    av_log(0,0,DAT_00035608 + 0x355c4,DAT_00035604 + 0x355b8,DAT_00035600 + 0x355a8,0x3a3);
                    /* WARNING: Subroutine does not return */
    abort();
  }
LAB_000354f0:
  av_log(0,0x10,DAT_000355e8 + 0x35508,uVar1);
  return iVar3;
}



/* ===== FUN_00035610 @ 00035610 size=720 ===== */

void FUN_00035610(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int *piVar13;
  int iVar14;
  byte *pbVar15;
  int iVar16;
  undefined4 *puVar17;
  byte *pbVar18;
  int iVar19;
  undefined8 uVar20;
  int in_stack_00000000;
  
  piVar13 = *(int **)(param_1 + 0xf4);
  if (piVar13 != (int *)0x0) {
    if (in_stack_00000000 == 0) {
      iVar14 = 0;
      uVar20 = DAT_000358e0;
    }
    else {
      iVar14 = *(int *)(param_1 + 4);
      lVar2 = *(longlong *)(in_stack_00000000 + 0x18);
      lVar1 = (ulonglong)*(uint *)(in_stack_00000000 + 4) * 1000 +
              *(longlong *)(in_stack_00000000 + 0x18);
      av_rescale_q((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),1,1000000,
                   *(undefined4 *)(iVar14 + 0xc),*(undefined4 *)(iVar14 + 0x10));
      lVar2 = (ulonglong)*(uint *)(in_stack_00000000 + 8) * 1000 + lVar2;
      uVar20 = av_rescale_q((int)lVar2,(int)((ulonglong)lVar2 >> 0x20),1,1000000,
                            *(undefined4 *)(iVar14 + 0xc),*(undefined4 *)(iVar14 + 0x10));
      iVar14 = *(int *)(in_stack_00000000 + 0xc);
    }
    av_frame_unref(piVar13);
    iVar4 = *(int *)(*(int *)(param_1 + 0x18) + 0x5c);
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0xf8);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x18) + 0x60);
    iVar8 = *(int *)(param_1 + 0xf4);
    if (iVar6 == 0) {
      iVar6 = *(int *)(param_1 + 0xfc);
    }
    *(int *)(iVar8 + 0x44) = iVar4;
    *(int *)(iVar8 + 0x48) = iVar6;
    *(undefined4 *)(iVar8 + 0x50) = 0x1c;
    iVar4 = av_frame_get_buffer(piVar13,0);
    if (iVar4 < 0) {
      av_log(*(undefined4 *)(param_1 + 0x18),0x10,DAT_000358f0 + 0x358b8);
      return;
    }
    memset((void *)*piVar13,0,piVar13[8] * piVar13[0x12]);
    iVar4 = *piVar13;
    iVar6 = piVar13[8];
    if (0 < iVar14) {
      iVar8 = 0;
      iVar9 = DAT_000358e8 + 0x35748;
      iVar10 = DAT_000358ec + 0x35754;
      do {
        while (piVar7 = *(int **)(*(int *)(in_stack_00000000 + 0x10) + iVar8 * 4), piVar7[0xd] == 1)
        {
          iVar11 = *piVar7;
          iVar3 = piVar7[2];
          iVar19 = piVar7[1];
          iVar5 = piVar7[3];
          if ((((iVar11 < 0) || (piVar13[0x11] < iVar11 + iVar3)) || (iVar19 < 0)) ||
             (piVar13[0x12] < iVar19 + iVar5)) {
            av_log(0,0x18,iVar9,iVar11,iVar19,iVar3,iVar5,piVar13[0x11],piVar13[0x12]);
          }
          else {
            pbVar18 = (byte *)piVar7[5];
            iVar16 = piVar7[6];
            puVar12 = (undefined4 *)(iVar4 + iVar19 * iVar6 + iVar11 * 4);
            if (0 < iVar5) {
              iVar11 = 0;
              do {
                if (0 < iVar3) {
                  iVar5 = 0;
                  pbVar15 = pbVar18;
                  puVar17 = puVar12;
                  do {
                    iVar5 = iVar5 + 1;
                    *puVar17 = *(undefined4 *)(iVar16 + (uint)*pbVar15 * 4);
                    iVar3 = piVar7[2];
                    pbVar15 = pbVar15 + 1;
                    puVar17 = puVar17 + 1;
                  } while (iVar5 < iVar3);
                  iVar5 = piVar7[3];
                }
                iVar11 = iVar11 + 1;
                puVar12 = (undefined4 *)((int)puVar12 + iVar6);
                pbVar18 = pbVar18 + piVar7[9];
              } while (iVar11 < iVar5);
            }
          }
          iVar8 = iVar8 + 1;
          if (iVar14 == iVar8) goto LAB_00035824;
        }
        iVar8 = iVar8 + 1;
        av_log(0,0x18,iVar10);
      } while (iVar14 != iVar8);
    }
LAB_00035824:
    FUN_000318c4(param_1);
    *(undefined8 *)(param_1 + 0xe8) = uVar20;
    *(undefined4 *)(param_1 + 0x100) = 0;
  }
  return;
}



/* ===== FUN_000358f4 @ 000358f4 size=72 ===== */

void FUN_000358f4(void)

{
  av_log(0,0xfffffff8,DAT_00035940 + 0x35910,DAT_0003593c + 0x3590c);
  if (*(int *)(&LAB_00035a0c + DAT_00035944) == 0) {
    return;
  }
  tcsetattr(0,0,(termios *)(DAT_00035944 + 0x35a10));
  return;
}



/* ===== FUN_00035fd4 @ 00035fd4 size=372 ===== */

void FUN_00035fd4(void)

{
  int iVar1;
  int iVar2;
  _union_1051 _Var3;
  uint *puVar4;
  _union_1051 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  ulong uStack_5c;
  ulong uStack_58;
  termios local_54;
  
  iVar1 = DAT_0003614c;
  uStack_60 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_5c = *(ulong *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_58 = *(ulong *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_68.sa_handler = (__sighandler_t)(DAT_00036148 + 0x35ff8);
  local_64 = 0;
  sigfillset((sigset_t *)&uStack_5c);
  local_64 = 0x10000000;
  if (**(int **)(iVar1 + 0x3600c + DAT_00036150) != 0) {
    iVar2 = tcgetattr(0,&local_54);
    iVar1 = DAT_0003615c;
    if (iVar2 == 0) {
      puVar4 = (uint *)(DAT_0003615c + 0x361bc);
      *(undefined4 *)(DAT_0003615c + 0x361b8) = 1;
      *puVar4 = local_54.c_iflag;
      *(tcflag_t *)(iVar1 + 0x361c0) = local_54.c_oflag;
      *(tcflag_t *)(iVar1 + 0x361c4) = local_54.c_cflag;
      *(tcflag_t *)(iVar1 + 0x361c8) = local_54.c_lflag;
      local_54.c_iflag = local_54.c_iflag & 0xfffffa14;
      *(undefined4 *)(iVar1 + 0x361cc) = local_54._16_4_;
      *(undefined4 *)(iVar1 + 0x361d0) = local_54.c_cc._3_4_;
      *(undefined4 *)(iVar1 + 0x361d4) = local_54.c_cc._7_4_;
      *(undefined4 *)(iVar1 + 0x361d8) = local_54.c_cc._11_4_;
      *(undefined4 *)(iVar1 + 0x361dc) = local_54.c_cc._15_4_;
      *(undefined4 *)(iVar1 + 0x361e0) = local_54.c_cc._19_4_;
      *(undefined4 *)(iVar1 + 0x361e4) = local_54.c_cc._23_4_;
      *(undefined4 *)(iVar1 + 0x361e8) = local_54.c_cc._27_4_;
      *(undefined4 *)(iVar1 + 0x361ec) = local_54._48_4_;
      *(speed_t *)((int)&DAT_000361f0 + iVar1) = local_54.c_ispeed;
      *(speed_t *)((int)&DAT_000361f4 + iVar1) = local_54.c_ospeed;
      local_54.c_lflag = local_54.c_lflag & 0xffff7fb5;
      local_54.c_cflag = local_54.c_cflag & 0xfffffecf | 0x30;
      local_54.c_oflag = local_54.c_oflag | 1;
      local_54.c_cc[5] = '\0';
      local_54.c_cc[6] = '\x01';
      tcsetattr(0,0,&local_54);
    }
    local_68.sa_handler = (__sighandler_t)(DAT_00036158 + 0x360b0);
    sigaction(3,(sigaction *)&local_68,(sigaction *)0x0);
  }
  _Var3.sa_handler = (__sighandler_t)(DAT_00036154 + 0x3603c);
  local_68.sa_handler = _Var3.sa_handler;
  sigaction(2,(sigaction *)&local_68,(sigaction *)0x0);
  local_68.sa_handler = _Var3.sa_handler;
  sigaction(0xf,(sigaction *)&local_68,(sigaction *)0x0);
  local_68.sa_handler = _Var3.sa_handler;
  sigaction(0x18,(sigaction *)&local_68,(sigaction *)0x0);
  signal(0xd,(__sighandler_t)0x1);
  return;
}



/* ===== FUN_00036160 @ 00036160 size=76 ===== */

void FUN_00036160(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)0x0;
  iVar2 = DAT_000361ac + 0x3617c;
  while (puVar1 = (undefined4 *)av_dict_get(param_2,iVar2,puVar1,2), puVar1 != (undefined4 *)0x0) {
    av_dict_set(param_1,*puVar1,0,1);
  }
  return;
}



/* ===== FUN_000361b0 @ 000361b0 size=64 ===== */

void FUN_000361b0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)av_dict_get(param_1,DAT_000361f0 + 0x361c8,0,2);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  av_log(0,8,DAT_000361f4 + 0x361e8,*puVar1);
                    /* WARNING: Subroutine does not return */
  FUN_0002b538(1);
}



/* ===== FUN_000361f8 @ 000361f8 size=5388 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_000361f8(int *param_1,int param_2,char *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  void *pvVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  code *pcVar11;
  char cVar12;
  int iVar13;
  undefined4 *puVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  char *__s1;
  int iVar18;
  undefined4 uVar19;
  int *piVar20;
  undefined4 uVar21;
  int iVar22;
  longlong *plVar23;
  size_t sVar24;
  int iVar25;
  int iVar26;
  bool bVar27;
  uint in_fpscr;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  double dVar33;
  longlong lVar34;
  longlong lVar35;
  undefined8 uVar36;
  int local_f8;
  size_t local_f4;
  void *local_f0;
  size_t local_e4;
  size_t local_d4;
  int local_c0;
  int iStack_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  int local_84;
  int local_80;
  undefined4 local_7c;
  uint local_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
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
  
  iVar13 = DAT_00036a58 + 0x3621c;
  if (param_1[4] != 0) {
    iVar17 = param_1[0x17];
    if (param_1[2] < 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(**(int **)(iVar13 + DAT_00036a88) + param_1[2] * 4);
    }
    iVar3 = param_1[0x15];
    piVar20 = *(int **)(iVar13 + DAT_00036a5c);
    iVar22 = *(int *)(*piVar20 + *param_1 * 4);
    uVar7 = *(undefined4 *)(iVar22 + 8);
    local_78 = 0;
    local_70 = *(uint *)(iVar3 + 0x3c);
    iVar18 = av_dict_get(*(undefined4 *)(param_1[3] + 0x40),DAT_00036a64 + 0x363dc,0,0);
    if (iVar18 == 0) {
      iVar26 = DAT_00036a90 + 0x36e80;
      iVar18 = av_dict_get(*(undefined4 *)(iVar22 + 0xc),iVar26,0,0);
      if (iVar18 != 0) {
        iVar26 = av_opt_find(*(undefined4 *)(iVar22 + 8),iVar26,0,0,0);
        if (iVar26 == 0) goto LAB_000363f8;
        av_opt_eval_flags(*(undefined4 *)(iVar22 + 8),iVar26,*(undefined4 *)(iVar18 + 4),&local_78);
      }
      iVar26 = DAT_00036a94 + 0x36ed4;
      iVar18 = av_dict_get(param_1[0x53],iVar26,0);
      if (iVar18 != 0) {
        iVar26 = av_opt_find(param_1[0x15],iVar26,0,0,0);
        if (iVar26 == 0) goto LAB_000363f8;
        av_opt_eval_flags(param_1[0x15],iVar26,*(undefined4 *)(iVar18 + 4),&local_70);
      }
      sVar24 = strlen(*(char **)param_1[0x17]);
      iVar26 = sVar24 + 0x10;
      iVar18 = av_mallocz(iVar26);
      if (iVar18 == 0) goto LAB_00037768;
      if ((local_78 & 0x400) == 0 && (local_70 & 0x800000) == 0) {
        av_strlcpy(iVar18,DAT_00036abc + 0x372ec,iVar26);
      }
      else {
        av_strlcpy(iVar18,DAT_00036a98 + 0x36f58,iVar26);
      }
      av_strlcat(iVar18,*(undefined4 *)param_1[0x17],iVar26);
      av_dict_set(param_1[3] + 0x40,DAT_00036a9c + 0x36f88,iVar18,0x18);
    }
LAB_000363f8:
    sVar24 = *(size_t *)(iVar3 + 8);
    if (iVar2 == 0) {
      iVar18 = 0;
    }
    else {
      iVar18 = *(int *)(iVar2 + 0x18);
    }
    if (sVar24 == 0) {
      if (param_1[0x27] == 0) {
        av_buffersink_get_frame_rate(&local_c0,*(undefined4 *)param_1[0x4f]);
        param_1[0x27] = local_c0;
        param_1[0x28] = iStack_bc;
        if (iVar2 == 0) goto LAB_0003641c;
        iVar2 = param_1[0x29];
        if (param_1[0x27] != 0) goto LAB_00036420;
        iVar26 = 0;
        if (iVar2 == 0) {
          param_1[0x27] = 0x19;
          iVar2 = DAT_00036ac0;
          param_1[0x28] = 1;
          av_log(0,0x18,iVar2 + 0x37318,*param_1,param_1[1]);
          goto LAB_0003641c;
        }
LAB_000371b4:
        dVar31 = (double)VectorSignedToFloat(iVar26,(byte)(in_fpscr >> 0x16) & 3);
        dVar33 = (double)VectorSignedToFloat(param_1[0x28],(byte)(in_fpscr >> 0x16) & 3);
        dVar32 = (double)VectorSignedToFloat(param_1[0x2a],(byte)(in_fpscr >> 0x16) & 3);
        dVar28 = (double)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
        dVar31 = dVar31 / dVar33;
        dVar28 = dVar28 / dVar32;
        uVar8 = in_fpscr & 0xfffffff | (uint)(dVar31 < dVar28) << 0x1f |
                (uint)(dVar31 == dVar28) << 0x1e;
        in_fpscr = uVar8 | (uint)(NAN(dVar31) || NAN(dVar28)) << 0x1c;
        bVar1 = (byte)(uVar8 >> 0x18);
        if ((!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) ||
           (param_1[0x28] == 0)) {
          param_1[0x27] = param_1[0x29];
          param_1[0x28] = param_1[0x2a];
        }
      }
      else {
LAB_0003641c:
        iVar2 = param_1[0x29];
LAB_00036420:
        if (iVar2 != 0) {
          iVar26 = param_1[0x27];
          goto LAB_000371b4;
        }
      }
      if ((*(int *)(param_1[0x17] + 0x18) != 0) && (param_1[0x2e] == 0)) {
        iVar2 = av_find_nearest_q_idx(param_1[0x27],param_1[0x28]);
        piVar6 = (int *)(*(int *)(param_1[0x17] + 0x18) + iVar2 * 8);
        iVar2 = piVar6[1];
        param_1[0x27] = *piVar6;
        param_1[0x28] = iVar2;
      }
      if (*(int *)(iVar3 + 0x10) == 0xc) {
        av_reduce(param_1 + 0x27,param_1 + 0x28,param_1[0x27],param_1[0x27] >> 0x1f,param_1[0x28],
                  param_1[0x28] >> 0x1f,0xffff);
      }
      sVar24 = *(size_t *)(iVar3 + 8);
    }
    switch(sVar24) {
    case 0:
      local_a4 = param_1[0x27];
      local_a8 = param_1[0x28];
      FUN_000317e4(param_1,local_a8,local_a4);
      if ((*(int *)(iVar3 + 0x4c) == 0) ||
         (iVar26 = *(int *)(iVar3 + 0x50), iVar2 = *(int *)(iVar3 + 0x4c), iVar26 == 0)) {
        av_buffersink_get_time_base(&local_c0,*(undefined4 *)param_1[0x4f]);
        *(int *)(iVar3 + 0x4c) = local_c0;
        *(int *)(iVar3 + 0x50) = iStack_bc;
        iVar26 = *(int *)(iVar3 + 0x50);
        iVar2 = local_c0;
      }
      auVar30._0_8_ = (double)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
      auVar30._8_8_ = (double)VectorSignedToFloat(iVar26,(byte)(in_fpscr >> 0x16) & 3);
      if (((auVar30._0_8_ / auVar30._8_8_ < DAT_00036a50) && (uVar8 = param_1[0x2b], uVar8 != 0)) &&
         (((uVar8 & 0xfffffffd) == 1 ||
          ((uVar8 == 0xffffffff && ((*(uint *)(*(int *)(iVar22 + 4) + 0x1c) & 0x400) == 0)))))) {
        av_log(uVar7,0x18,DAT_00036a74 + 0x367f4);
      }
      uVar7 = av_buffersink_get_w(*(undefined4 *)param_1[0x4f]);
      puVar14 = (undefined4 *)param_1[0x4f];
      *(undefined4 *)(iVar3 + 0x5c) = uVar7;
      uVar7 = av_buffersink_get_h(*puVar14);
      iVar2 = param_1[0x36];
      iVar22 = param_1[3];
      *(undefined4 *)(iVar3 + 0x60) = uVar7;
      if (iVar2 == 0) {
        av_buffersink_get_sample_aspect_ratio(&local_c0,*(undefined4 *)param_1[0x4f]);
        *(int *)(iVar22 + 0x38) = local_c0;
        *(int *)(iVar22 + 0x3c) = iStack_bc;
      }
      else {
        local_ac = *(undefined4 *)(iVar3 + 0x5c);
        local_b0 = uVar7;
        av_mul_q(iVar22 + 0x38,param_1[0x36],param_1[0x37],uVar7,local_ac);
      }
      uVar7 = *(undefined4 *)(iVar22 + 0x3c);
      puVar14 = (undefined4 *)param_1[0x4f];
      *(undefined4 *)(iVar3 + 0xb0) = *(undefined4 *)(iVar22 + 0x38);
      *(undefined4 *)(iVar3 + 0xb4) = uVar7;
      uVar7 = av_buffersink_get_format(*puVar14);
      iVar2 = param_1[0x32];
      *(undefined4 *)(iVar3 + 0x70) = uVar7;
      if (iVar2 == 0) {
        if ((iVar18 != 0) && (*(int *)(*(int *)(param_1[0x4f] + 8) + 0x10) != 0)) {
          iVar22 = *(int *)(iVar18 + 0x22c);
          iVar2 = av_pix_fmt_desc_get();
          if (*(int *)(iVar2 + 0x20) < iVar22) {
            iVar2 = av_pix_fmt_desc_get(*(undefined4 *)(iVar3 + 0x70));
            iVar2 = *(int *)(iVar2 + 0x20);
          }
          else {
            iVar2 = *(int *)(iVar18 + 0x22c);
          }
          goto LAB_000368b8;
        }
      }
      else {
LAB_000368b8:
        *(int *)(iVar3 + 0x22c) = iVar2;
      }
      piVar6 = param_1 + 0x27;
      iVar2 = param_1[3];
      iVar18 = param_1[0x2f];
      if (param_2 == 0) {
        iVar22 = param_1[0x28];
        *(int *)(iVar3 + 0x270) = *piVar6;
        *(int *)(iVar3 + 0x274) = iVar22;
        iVar22 = param_1[0x28];
        *(int *)(iVar2 + 0x44) = *piVar6;
        *(int *)(iVar2 + 0x48) = iVar22;
      }
      else {
        uVar21 = *(undefined4 *)(param_2 + 0xf4);
        uVar7 = *(undefined4 *)(param_2 + 0xec);
        iVar22 = *piVar6;
        iVar26 = param_1[0x28];
        *(undefined4 *)(iVar3 + 0x114) = *(undefined4 *)(param_2 + 0xf0);
        uVar19 = *(undefined4 *)(param_2 + 0xf8);
        *(undefined4 *)(iVar3 + 0x118) = uVar21;
        uVar21 = *(undefined4 *)(param_2 + 0xfc);
        *(undefined4 *)(iVar3 + 0x120) = uVar7;
        *(undefined4 *)(iVar3 + 0x11c) = uVar19;
        *(undefined4 *)(iVar3 + 0x124) = uVar21;
        *(int *)(iVar3 + 0x270) = iVar22;
        *(int *)(iVar3 + 0x274) = iVar26;
        uVar8 = *(uint *)(iVar3 + 0x3c);
        iVar22 = param_1[0x28];
        *(int *)(iVar2 + 0x44) = *piVar6;
        *(int *)(iVar2 + 0x48) = iVar22;
        if (((uVar8 & 0x20040000) != 0) && (-1 < iVar18)) {
          *(uint *)(param_2 + 0x98) = (uint)(iVar18 != 0);
        }
        if (*(int *)(param_2 + 0x94) == 0) {
          *(undefined4 *)(iVar3 + 300) = 1;
        }
        else if (*(int *)(*(int *)(iVar3 + 0xc) + 0xc) == 7) {
          if (*(int *)(param_2 + 0x98) == 0) {
            uVar7 = 3;
          }
          else {
            uVar7 = 2;
          }
          *(undefined4 *)(iVar3 + 300) = uVar7;
        }
        else {
          if (*(int *)(param_2 + 0x98) == 0) {
            uVar7 = 5;
          }
          else {
            uVar7 = 4;
          }
          *(undefined4 *)(iVar3 + 300) = uVar7;
        }
      }
      if (iVar18 == 0) {
        *(undefined4 *)(iVar3 + 300) = 3;
      }
      else if (iVar18 == 1) {
        *(undefined4 *)(iVar3 + 300) = 2;
      }
      __s1 = (char *)param_1[0x3d];
      if (__s1 != (char *)0x0) {
        iVar2 = strncmp(__s1,(char *)(DAT_00036a78 + 0x369a0),5);
        if (iVar2 == 0) {
          iVar2 = av_expr_parse(param_1 + 0x3e,__s1 + 5,*(undefined4 *)(iVar13 + DAT_00036ac4),0,0,0
                                ,0,0,0);
          if (iVar2 < 0) {
            av_log(0,0x10,DAT_00036ae0 + 0x37734,param_1[0x3d] + 5);
            return iVar2;
          }
          param_1[0x40] = 0;
          param_1[0x41] = 0;
          param_1[0x42] = 0;
          param_1[0x43] = 0;
          param_1[0x44] = 0;
          param_1[0x45] = 0x7ff80000;
          param_1[0x46] = 0;
          param_1[0x47] = 0x7ff80000;
        }
        else {
          iVar2 = strncmp(__s1,(char *)(DAT_00036a7c + 0x369bc),6);
          if (iVar2 != 0) {
            cVar12 = *__s1;
            iVar2 = param_1[0x15];
            if (cVar12 == '\0') {
              local_e4 = 1;
            }
            else {
              local_e4 = 1;
              pcVar9 = __s1;
              do {
                bVar27 = cVar12 == ',';
                pcVar9 = pcVar9 + 1;
                cVar12 = *pcVar9;
                if (bVar27) {
                  local_e4 = local_e4 + 1;
                }
              } while (cVar12 != '\0');
            }
            local_f0 = (void *)av_malloc_array(local_e4,8);
            if (local_f0 == (void *)0x0) {
LAB_00037754:
              pcVar11 = (code *)(DAT_00036ae4 + 0x37760);
              goto LAB_0003775c;
            }
            pvVar5 = (void *)(DAT_00036a80 + 0x36a20);
            iVar18 = DAT_00036a84 + 0x36a34;
            local_d4 = local_e4;
            local_f4 = sVar24;
            do {
              pcVar4 = strchr(__s1,0x2c);
              pcVar9 = pcVar4;
              if (pcVar4 != (char *)0x0) {
                pcVar9 = pcVar4 + 1;
                *pcVar4 = '\0';
              }
              iVar22 = memcmp(__s1,pvVar5,8);
              if (iVar22 == 0) {
                iVar22 = *(int *)(*(int *)(*piVar20 + *param_1 * 4) + 8);
                if (0x7fffffff - local_d4 < *(uint *)(iVar22 + 0x84)) goto LAB_00037754;
                local_d4 = (*(uint *)(iVar22 + 0x84) - 1) + local_d4;
                local_f0 = (void *)av_realloc_f(local_f0,local_d4,8);
                if (local_f0 == (void *)0x0) goto LAB_00037754;
                auVar29._8_8_ = 0;
                auVar29._0_8_ = auVar30._8_8_;
                auVar29 = auVar29 << 0x40;
                auVar30 = auVar29;
                if (__s1[8] != '\0') {
                  auVar30._0_8_ = (double)FUN_0002b67c(DAT_00036acc + 0x37440,__s1 + 8,1);
                  auVar30._8_8_ = auVar29._8_8_;
                }
                local_8c = 1000000;
                local_90 = 1;
                lVar34 = av_rescale_q(auVar30._0_4_,auVar30._4_4_,1,1000000,
                                      *(undefined4 *)(iVar2 + 0x4c),*(undefined4 *)(iVar2 + 0x50));
                iVar26 = *(int *)(iVar22 + 0x84);
                if (iVar26 != 0) {
                  piVar15 = *(int **)(iVar22 + 0x88);
                  piVar6 = piVar15;
                  plVar23 = (longlong *)((int)local_f0 + local_f4 * 8);
                  do {
                    piVar16 = piVar6 + 1;
                    iVar22 = *piVar6;
                    auVar30._0_8_ = *(double *)(iVar22 + 0x10);
                    lVar35 = av_rescale_q(SUB84(auVar30._0_8_,0),
                                          (int)((ulonglong)auVar30._0_8_ >> 0x20),
                                          *(undefined4 *)(iVar22 + 8),*(undefined4 *)(iVar22 + 0xc),
                                          *(undefined4 *)(iVar2 + 0x4c),
                                          *(undefined4 *)(iVar2 + 0x50));
                    *plVar23 = lVar34 + lVar35;
                    piVar6 = piVar16;
                    plVar23 = plVar23 + 1;
                  } while (piVar15 + iVar26 != piVar16);
                  local_f4 = iVar26 + local_f4;
                }
              }
              else {
                uVar36 = FUN_0002b67c(iVar18,__s1);
                local_94 = 1000000;
                local_98 = 1;
                uVar36 = av_rescale_q((int)uVar36,(int)((ulonglong)uVar36 >> 0x20),1,1000000,
                                      *(undefined4 *)(iVar2 + 0x4c),*(undefined4 *)(iVar2 + 0x50));
                *(undefined8 *)((int)local_f0 + local_f4 * 8) = uVar36;
                local_f4 = local_f4 + 1;
              }
              sVar24 = sVar24 + 1;
              __s1 = pcVar9;
            } while (sVar24 != local_e4);
            if (local_d4 != local_f4) {
              av_log(0,0,DAT_00036af0 + 0x3779c,DAT_00036aec + 0x37798,DAT_00036ae8 + 0x37788,0xb6c)
              ;
                    /* WARNING: Subroutine does not return */
              abort();
            }
            qsort(local_f0,local_d4,8,(__compar_fn_t)(DAT_00036a68 + 0x364a4));
            param_1[0x3b] = local_d4;
            param_1[0x3a] = (int)local_f0;
          }
        }
      }
      break;
    case 1:
      uVar7 = av_buffersink_get_format(*(undefined4 *)param_1[0x4f]);
      puVar14 = (undefined4 *)param_1[0x4f];
      *(undefined4 *)(iVar3 + 0x138) = uVar7;
      uVar7 = av_buffersink_get_sample_rate(*puVar14);
      puVar14 = (undefined4 *)param_1[0x4f];
      *(undefined4 *)(iVar3 + 0x130) = uVar7;
      iVar2 = av_buffersink_get_ch_layout(*puVar14,iVar3 + 0x310);
      if (iVar2 < 0) {
        return iVar2;
      }
      if (param_1[0x32] == 0) {
        if ((iVar18 != 0) && (*(int *)(*(int *)(param_1[0x4f] + 8) + 0x10) != 0)) {
          iVar22 = *(int *)(iVar18 + 0x22c);
          iVar2 = av_get_bytes_per_sample(*(undefined4 *)(iVar3 + 0x138));
          if (iVar2 * 8 < iVar22) {
            iVar2 = av_get_bytes_per_sample(*(undefined4 *)(iVar3 + 0x138));
            iVar2 = iVar2 << 3;
          }
          else {
            iVar2 = *(int *)(iVar18 + 0x22c);
          }
          *(int *)(iVar3 + 0x22c) = iVar2;
        }
      }
      else {
        *(int *)(iVar3 + 0x22c) = param_1[0x32];
      }
      local_9c = *(undefined4 *)(iVar3 + 0x130);
      local_a0 = 1;
      FUN_000317e4(param_1,1,local_9c);
      break;
    case 2:
      break;
    case 3:
      *(undefined4 *)(iVar3 + 0x50) = 1000000;
      *(undefined4 *)(iVar3 + 0x4c) = 1;
      if (*(int *)(iVar3 + 0x5c) == 0) {
        iVar2 = *(int *)(*(int *)(*(int *)(**(int **)(iVar13 + DAT_00036a88) + param_1[2] * 4) + 4)
                        + 0xb4);
        uVar7 = *(undefined4 *)(iVar2 + 0x34);
        *(undefined4 *)(iVar3 + 0x5c) = *(undefined4 *)(iVar2 + 0x30);
        *(undefined4 *)(iVar3 + 0x60) = uVar7;
      }
      break;
    default:
      goto switchD_00036458_default;
    }
    iVar2 = *(int *)(iVar3 + 0x50);
    param_1[0x10] = *(int *)(iVar3 + 0x4c);
    param_1[0x11] = iVar2;
    if (param_1[2] < 0) {
      iVar18 = 0;
      iVar2 = 0;
    }
    else {
      iVar18 = *(int *)(**(int **)(iVar13 + DAT_00036a88) + param_1[2] * 4);
      if (iVar18 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar18 + 0x18);
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x264) != 0)) {
          iVar3 = param_1[0x15];
          uVar7 = av_mallocz(*(int *)(iVar2 + 0x268) + 1);
          iVar22 = param_1[0x15];
          *(undefined4 *)(iVar3 + 0x264) = uVar7;
          if (*(void **)(iVar22 + 0x264) == (void *)0x0) {
            return -0xc;
          }
          memcpy(*(void **)(iVar22 + 0x264),*(void **)(iVar2 + 0x264),*(size_t *)(iVar2 + 0x268));
          *(undefined4 *)(param_1[0x15] + 0x268) = *(undefined4 *)(iVar2 + 0x268);
        }
      }
    }
    iVar3 = DAT_00036a6c + 0x36554;
    iVar22 = av_dict_get(param_1[0x53],iVar3,0);
    if (iVar22 == 0) {
      av_dict_set(param_1 + 0x53,iVar3,DAT_00036ad0 + 0x3746c);
    }
    iVar22 = FUN_0001a75c(param_1);
    if (iVar22 < 0) {
      iStack_6c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_68 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_64 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      iVar17 = *param_1;
      iVar13 = param_1[1];
      local_70 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      uStack_5c = iStack_6c;
      uStack_54 = iStack_6c;
      uStack_4c = iStack_6c;
      uStack_44 = iStack_6c;
      uStack_3c = iStack_6c;
      uStack_34 = iStack_6c;
      av_strerror(iVar22,&local_70,0x40);
      snprintf(param_3,0x400,(char *)(DAT_00036ad4 + 0x3750c),iVar17,iVar13,&local_70);
      return iVar22;
    }
    if (((iVar18 != 0) && (*(int *)(*(int *)(iVar18 + 0x1c) + 8) == 3)) &&
       (*(int *)(param_1[0x17] + 8) == 3)) {
      iVar2 = avcodec_descriptor_get(*(undefined4 *)(iVar2 + 0x10));
      iVar22 = avcodec_descriptor_get(*(undefined4 *)(param_1[0x15] + 0x10));
      if (((iVar2 != 0) && (iVar22 != 0)) &&
         (uVar8 = *(uint *)(iVar2 + 0x10) & 0x30000, uVar10 = *(uint *)(iVar22 + 0x10) & 0x30000,
         uVar8 != uVar10 && (uVar10 != 0 && uVar8 != 0))) {
        memcpy(param_3,(void *)(DAT_00036aa8 + 0x3716c),0x50);
        return -0x41444e49;
      }
    }
    iVar17 = avcodec_open2(param_1[0x15],iVar17,param_1 + 0x53);
    if (iVar17 < 0) {
      if (iVar17 != -0x2bb2afa8) {
        snprintf(param_3,0x400,(char *)(DAT_00036aa0 + 0x370c4),*param_1,param_1[1]);
        return iVar17;
      }
      goto LAB_00037768;
    }
    if ((*(int *)(param_1[0x17] + 8) == 1) && ((*(uint *)(param_1[0x17] + 0x10) & 0x10000) == 0)) {
      av_buffersink_set_frame_size
                (*(undefined4 *)param_1[0x4f],*(undefined4 *)(param_1[0x15] + 0x13c));
    }
    FUN_000361b0(param_1[0x53]);
    iVar17 = param_1[0x15];
    if ((*(int *)(iVar17 + 0x2c) < (int)(uint)(*(uint *)(iVar17 + 0x28) < 1000) &&
         (*(uint *)(iVar17 + 0x28) != 0 || *(int *)(iVar17 + 0x2c) != 0)) &&
       (*(int *)(iVar17 + 0x10) != 0x15043)) {
      av_log(0,0x18,DAT_00036ab8 + 0x372a8);
      iVar17 = param_1[0x15];
    }
    iVar17 = avcodec_parameters_from_context(*(undefined4 *)(param_1[3] + 0xb4),iVar17);
    pcVar11 = (code *)(DAT_00036a70 + 0x36614);
    if (-1 < iVar17) {
      iVar17 = param_1[0x15];
      if (0 < *(int *)(iVar17 + 0x2d0)) {
        iVar2 = 0;
        do {
          iVar22 = iVar2 * 0xc;
          iVar3 = *(int *)(iVar17 + 0x2cc);
          iVar17 = iVar3 + iVar22;
          pvVar5 = (void *)av_stream_new_side_data
                                     (param_1[3],*(undefined4 *)(iVar17 + 8),
                                      *(undefined4 *)(iVar17 + 4));
          if (pvVar5 == (void *)0x0) {
            return -0xc;
          }
          iVar2 = iVar2 + 1;
          memcpy(pvVar5,*(void **)(iVar3 + iVar22),*(size_t *)(iVar17 + 4));
          iVar17 = param_1[0x15];
        } while (iVar2 < *(int *)(iVar17 + 0x2d0));
      }
      iVar17 = param_1[3];
      if (iVar18 != 0) {
        iVar22 = *(int *)(iVar18 + 4);
        iVar2 = *(int *)(iVar22 + 0xa4);
        if (0 < iVar2) {
          iVar3 = 0;
          do {
            iVar25 = *(int *)(iVar22 + 0xa0);
            iVar26 = iVar25 + iVar3 * 0xc;
            if (*(int *)(iVar26 + 8) != 10) {
              pvVar5 = (void *)av_stream_new_side_data
                                         (iVar17,*(int *)(iVar26 + 8),*(undefined4 *)(iVar26 + 4));
              if (pvVar5 == (void *)0x0) {
                return -0xc;
              }
              memcpy(pvVar5,*(void **)(iVar25 + iVar3 * 0xc),*(size_t *)(iVar26 + 4));
              if ((*(int *)(iVar18 + 0xb0) != 0) && (*(int *)(iVar26 + 8) == 5)) {
                av_display_rotation_set(0,pvVar5);
              }
              iVar22 = *(int *)(iVar18 + 4);
              iVar17 = param_1[3];
              iVar2 = *(int *)(iVar22 + 0xa4);
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < iVar2);
        }
      }
      if ((*(int *)(iVar17 + 0xc) < 1) || (*(int *)(iVar17 + 0x10) < 1)) {
        local_b4 = 1;
        local_b8 = 0;
        av_add_q(iVar17 + 0xc,*(undefined4 *)(param_1[0x15] + 0x4c),
                 *(undefined4 *)(param_1[0x15] + 0x50),0,1);
      }
      if (iVar18 != 0 && *(int *)(iVar17 + 0x24) < (int)(uint)(*(int *)(iVar17 + 0x20) == 0)) {
        iVar2 = *(int *)(iVar18 + 4);
        if ((int)(uint)(*(int *)(iVar2 + 0x20) == 0) <= *(int *)(iVar2 + 0x24)) {
          uVar36 = av_rescale_q(*(int *)(iVar2 + 0x20),*(int *)(iVar2 + 0x24),
                                *(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),
                                *(undefined4 *)(iVar17 + 0xc),*(undefined4 *)(iVar17 + 0x10));
          *(undefined8 *)(iVar17 + 0x20) = uVar36;
        }
      }
LAB_00036230:
      iVar17 = param_1[0x14];
      if (iVar17 != 0) {
        iVar2 = avcodec_parameters_copy
                          (*(undefined4 *)(iVar17 + 0xc),*(undefined4 *)(param_1[3] + 0xb4));
        if (iVar2 < 0) {
          return iVar2;
        }
        uVar7 = *(undefined4 *)(param_1[3] + 0x10);
        *(undefined4 *)(iVar17 + 0x14) = *(undefined4 *)(param_1[3] + 0xc);
        *(undefined4 *)(iVar17 + 0x18) = uVar7;
        iVar2 = av_bsf_init(iVar17);
        if (iVar2 < 0) {
          av_log(0,0x10,DAT_00036aa4 + 0x370e4,**(undefined4 **)(iVar17 + 4));
          return iVar2;
        }
        iVar2 = avcodec_parameters_copy
                          (*(undefined4 *)(param_1[3] + 0xb4),*(undefined4 *)(iVar17 + 0x10));
        if (iVar2 < 0) {
          return iVar2;
        }
        iVar2 = param_1[3];
        uVar7 = *(undefined4 *)(iVar17 + 0x20);
        *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar17 + 0x1c);
        *(undefined4 *)(iVar2 + 0x10) = uVar7;
      }
      iVar17 = DAT_00036a5c;
      param_1[0x5a] = 1;
      iVar13 = FUN_0001b5f0(*(undefined4 *)(**(int **)(iVar13 + iVar17) + *param_1 * 4));
      return iVar13;
    }
LAB_0003775c:
    av_log(0,8,pcVar11);
LAB_00037768:
                    /* WARNING: Subroutine does not return */
    FUN_0002b538(1);
  }
  if (param_1[0x59] == 0) goto LAB_00036230;
  iVar17 = *(int *)(**(int **)(iVar13 + DAT_00036a5c) + *param_1 * 4);
  if (-1 < param_1[2]) {
    iVar22 = param_1[0x16];
    piVar20 = *(int **)(param_1[3] + 0xb4);
    iVar2 = piVar20[2];
    iVar18 = *(int *)(**(int **)(iVar13 + DAT_00036a88) + param_1[2] * 4);
    if ((iVar18 != 0) && (param_1[0x4f] == 0)) {
      iVar3 = avcodec_parameters_to_context
                        (param_1[0x15],*(undefined4 *)(*(int *)(iVar18 + 4) + 0xb4));
      if ((iVar3 < 0) || (iVar3 = av_opt_set_dict(param_1[0x15],param_1 + 0x53), iVar3 < 0)) {
        av_log(0,8,DAT_00036a60 + 0x36364);
        return iVar3;
      }
      iVar3 = avcodec_parameters_from_context(iVar22,param_1[0x15]);
      if (iVar3 < 0) {
        av_log(0,8,DAT_00036ad8 + 0x375dc);
        return iVar3;
      }
      local_f8 = iVar2;
      if ((iVar2 == 0) &&
         (local_f8 = *(int *)(iVar22 + 8), *(int *)(*(int *)(iVar17 + 4) + 0x20) != 0)) {
        iVar3 = av_codec_get_id();
        if ((iVar3 == *(int *)(iVar22 + 4)) ||
           (iVar3 = av_codec_get_tag2(*(undefined4 *)(*(int *)(iVar17 + 4) + 0x20),
                                      *(int *)(iVar22 + 4),&local_70), local_f8 = iVar2, iVar3 == 0)
           ) {
          local_f8 = *(int *)(iVar22 + 8);
        }
      }
      iVar2 = avcodec_parameters_copy(piVar20,iVar22);
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar3 = param_1[0x27];
      iVar26 = param_1[3];
      piVar20[2] = local_f8;
      iVar2 = *(int *)(iVar18 + 4);
      if (iVar3 == 0) {
        iVar3 = *(int *)(iVar18 + 0xa0);
        iVar25 = *(int *)(iVar18 + 0xa4);
        param_1[0x27] = iVar3;
        param_1[0x28] = iVar25;
        if (iVar3 != 0) goto LAB_00036da8;
        uVar7 = *(undefined4 *)(iVar2 + 0x48);
        *(undefined4 *)(iVar26 + 0x44) = *(undefined4 *)(iVar2 + 0x44);
        *(undefined4 *)(iVar26 + 0x48) = uVar7;
      }
      else {
LAB_00036da8:
        iVar3 = param_1[0x28];
        *(int *)(iVar26 + 0x44) = param_1[0x27];
        *(int *)(iVar26 + 0x48) = iVar3;
      }
      iVar17 = avformat_transfer_internal_stream_timing_info
                         (*(undefined4 *)(iVar17 + 4),iVar26,iVar2,
                          **(undefined4 **)(iVar13 + DAT_00036a8c));
      if (iVar17 < 0) {
        return iVar17;
      }
      iVar17 = param_1[3];
      if ((*(int *)(iVar17 + 0xc) < 1) || (*(int *)(iVar17 + 0x10) < 1)) {
        iVar2 = param_1[0x27];
        if (iVar2 == 0) {
          av_stream_get_codec_timebase(&local_78,iVar17);
          iVar17 = param_1[3];
          local_7c = 1;
          local_80 = iVar2;
          av_add_q(iVar17 + 0xc,local_78,uStack_74,0,1);
        }
        else {
          iVar3 = param_1[0x28];
          *(int *)(iVar17 + 0x10) = iVar2;
          *(int *)(iVar17 + 0xc) = iVar3;
        }
      }
      iVar2 = *(int *)(iVar18 + 4);
      if (*(int *)(iVar17 + 0x24) < (int)(uint)(*(int *)(iVar17 + 0x20) == 0)) {
        if ((int)(uint)(*(int *)(iVar2 + 0x20) == 0) <= *(int *)(iVar2 + 0x24)) {
          uVar36 = av_rescale_q(*(int *)(iVar2 + 0x20),*(int *)(iVar2 + 0x24),
                                *(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),
                                *(undefined4 *)(iVar17 + 0xc),*(undefined4 *)(iVar17 + 0x10));
          *(undefined8 *)(iVar17 + 0x20) = uVar36;
        }
      }
      if (0 < *(int *)(iVar2 + 0xa4)) {
        iVar3 = 0;
        while( true ) {
          iVar26 = *(int *)(iVar2 + 0xa0);
          iVar25 = iVar3 * 0xc;
          iVar2 = iVar26 + iVar25;
          pvVar5 = (void *)av_stream_new_side_data
                                     (iVar17,*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 4));
          if (pvVar5 == (void *)0x0) {
            return -0xc;
          }
          iVar3 = iVar3 + 1;
          memcpy(pvVar5,*(void **)(iVar26 + iVar25),*(size_t *)(iVar2 + 4));
          iVar2 = *(int *)(iVar18 + 4);
          if (*(int *)(iVar2 + 0xa4) <= iVar3) break;
          iVar17 = param_1[3];
        }
      }
      if ((param_1[0x30] != 0) && (iVar17 = av_stream_new_side_data(param_1[3],5,0x24), iVar17 != 0)
         ) {
        av_display_rotation_set(SUB84(-*(double *)(param_1 + 0x34),0));
      }
      if (*piVar20 == 0) {
        if (param_1[0x36] == 0) {
          iVar17 = *(int *)(iVar18 + 4);
          if (*(int *)(iVar17 + 0x38) == 0) {
            local_70 = *(uint *)(iVar22 + 0x38);
            iStack_6c = *(int *)(iVar22 + 0x3c);
          }
          else {
            local_70 = *(uint *)(iVar17 + 0x38);
            iStack_6c = *(int *)(iVar17 + 0x3c);
          }
        }
        else {
          local_88 = piVar20[0xd];
          local_84 = piVar20[0xc];
          av_mul_q(&local_70,param_1[0x36],param_1[0x37],local_88,local_84);
          av_log(0,0x18,DAT_00036adc + 0x37710);
          iVar17 = *(int *)(iVar18 + 4);
        }
        iVar2 = param_1[3];
        piVar20[0xe] = local_70;
        piVar20[0xf] = iStack_6c;
        *(uint *)(iVar2 + 0x38) = local_70;
        *(int *)(iVar2 + 0x3c) = iStack_6c;
        uVar7 = *(undefined4 *)(iVar17 + 0x48);
        *(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(iVar17 + 0x44);
        *(undefined4 *)(iVar2 + 0x48) = uVar7;
        uVar7 = *(undefined4 *)(iVar17 + 0xb0);
        *(undefined4 *)(iVar2 + 0xac) = *(undefined4 *)(iVar17 + 0xac);
        *(undefined4 *)(iVar2 + 0xb0) = uVar7;
LAB_00037418:
        iVar2 = *(int *)(iVar17 + 0x10);
        param_1[0x10] = *(int *)(iVar17 + 0xc);
        param_1[0x11] = iVar2;
        goto LAB_00036230;
      }
      if (*piVar20 != 1) {
        iVar17 = *(int *)(iVar18 + 4);
        goto LAB_00037418;
      }
      if (**(int **)(iVar13 + DAT_00036ac8) == 0x100) {
        iVar2 = piVar20[0x1c];
        iVar17 = *(int *)(iVar18 + 4);
        if (((iVar2 == 0x240 || (iVar2 == 0x480 || iVar2 == 1)) && (piVar20[1] == 0x15001)) ||
           (piVar20[1] == 0x15003)) {
          piVar20[0x1c] = 0;
        }
        goto LAB_00037418;
      }
      pcVar11 = FUN_000377ac + DAT_00036af4;
      goto LAB_0003775c;
    }
  }
  av_log(0,0,DAT_00036ab4 + 0x37258,DAT_00036ab0 + 0x37254,DAT_00036aac + 0x37244,0xa9d);
switchD_00036458_default:
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== FUN_000377ac @ 000377ac size=136 ===== */

int FUN_000377ac(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_418 [1028];
  
  memset(auStack_418,0,0x400);
  if (param_1[0x5a] == 0) {
    iVar1 = FUN_000361f8(param_1,param_2,auStack_418);
    if (iVar1 < 0) {
      av_log(0,0x10,DAT_00037834 + 0x3782c,*param_1,param_1[1],auStack_418);
                    /* WARNING: Subroutine does not return */
      FUN_0002b538(1);
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_00037838 @ 00037838 size=2916 ===== */

void FUN_00037838(int param_1,int *param_2,uint param_3)

{
  int *piVar1;
  byte bVar2;
  undefined2 uVar3;
  float fVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  char *__s1;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  uint in_fpscr;
  undefined4 uVar21;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  float fVar22;
  double dVar23;
  double dVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  longlong lVar31;
  longlong lVar32;
  undefined8 local_88;
  undefined8 local_80;
  uint local_78;
  int iStack_74;
  uint local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  
  iVar18 = param_2[0x15];
  uVar12 = *(undefined4 *)param_2[0x4f];
  iVar19 = DAT_00037d70 + 0x3786c;
  FUN_000377ac(param_2,param_3);
  uVar21 = FUN_0003450c(param_1 + 0x20,param_2[0x15],param_2 + 0x4f,param_3);
  dVar23 = (double)CONCAT44(extraout_s1,uVar21);
  if (param_2[2] < 0) {
    av_buffersink_get_frame_rate(&local_58,uVar12);
    if (local_58 < 1) {
      iVar13 = 0;
      dVar24 = 0.0;
    }
    else {
      iVar13 = 0;
      dVar24 = DAT_00037d68;
      if (0 < local_54) goto LAB_000378d0;
    }
  }
  else {
    iVar13 = *(int *)(**(int **)(iVar19 + DAT_00037d74) + param_2[2] * 4);
    av_buffersink_get_frame_rate(&local_58,uVar12);
    if ((local_58 < 1) || (local_54 < 1)) {
      dVar24 = 0.0;
    }
    else {
LAB_000378d0:
      dVar24 = (double)VectorSignedToFloat(local_58,(byte)(in_fpscr >> 0x16) & 3);
      dVar30 = (double)VectorSignedToFloat(*(undefined4 *)(iVar18 + 0x4c),
                                           (byte)(in_fpscr >> 0x16) & 3);
      dVar29 = (double)VectorSignedToFloat(*(undefined4 *)(iVar18 + 0x50),
                                           (byte)(in_fpscr >> 0x16) & 3);
      dVar26 = (double)VectorSignedToFloat(local_54,(byte)(in_fpscr >> 0x16) & 3);
      dVar24 = 1.0 / ((dVar30 / dVar29) * (dVar24 / dVar26));
    }
    if ((((iVar13 != 0) &&
         (*(int *)(*(int *)(iVar13 + 4) + 0x1c) != -0x80000000 ||
          *(int *)(*(int *)(iVar13 + 4) + 0x18) != 0)) &&
        (*(int *)(iVar13 + 0x44) != -0x80000000 || *(int *)(iVar13 + 0x40) != 0)) &&
       (param_2[0x27] != 0)) {
      dVar26 = (double)VectorSignedToFloat(param_2[0x27],(byte)(in_fpscr >> 0x16) & 3);
      dVar27 = (double)VectorSignedToFloat(*(undefined4 *)(iVar18 + 0x4c),
                                           (byte)(in_fpscr >> 0x16) & 3);
      dVar30 = (double)VectorSignedToFloat(*(undefined4 *)(iVar18 + 0x50),
                                           (byte)(in_fpscr >> 0x16) & 3);
      dVar29 = (double)VectorSignedToFloat(param_2[0x28],(byte)(in_fpscr >> 0x16) & 3);
      dVar26 = 1.0 / ((dVar27 / dVar30) * (dVar26 / dVar29));
      in_fpscr = in_fpscr & 0xfffffff | (uint)(dVar26 < dVar24) << 0x1f;
      if (SUB41(in_fpscr >> 0x1f,0)) {
        dVar24 = dVar26;
      }
    }
  }
  if ((((param_2[0x52] != 0) || (param_2[0x51] != 0)) ||
      ((**(int **)(iVar19 + DAT_00038298) != 0 &&
       (*(int *)(*(int *)**(undefined4 **)(iVar19 + DAT_000382b8) + 4) != 0)))) ||
     (param_3 == 0 || iVar13 == 0)) {
    if (param_3 != 0) goto LAB_0003795c;
    uVar14 = param_2[6];
    iVar16 = param_2[7];
    iVar9 = param_2[0x20];
    iVar13 = param_2[0x22];
    iVar7 = iVar9;
    if (iVar13 < iVar9) {
      iVar7 = iVar13;
      iVar13 = iVar9;
    }
    if (iVar7 <= param_2[0x24]) {
      iVar7 = param_2[0x24];
    }
    if (iVar7 < iVar13) {
      iVar13 = iVar7;
    }
    lVar31 = (longlong)iVar13;
    local_88 = (longlong)iVar13;
    goto LAB_00037a10;
  }
  dVar27 = (double)VectorSignedToFloat(*(undefined4 *)(*(int *)(iVar13 + 4) + 0xc),
                                       (byte)(in_fpscr >> 0x16) & 3);
  dVar26 = (double)VectorSignedToFloat(*(undefined4 *)(*(int *)(iVar13 + 4) + 0x10),
                                       (byte)(in_fpscr >> 0x16) & 3);
  dVar29 = (double)FUN_0003f4e4(*(undefined4 *)(param_3 + 0x110),*(undefined4 *)(param_3 + 0x114));
  dVar28 = (double)VectorSignedToFloat(*(undefined4 *)(iVar18 + 0x4c),(byte)(in_fpscr >> 0x16) & 3);
  dVar30 = (double)VectorSignedToFloat(*(undefined4 *)(iVar18 + 0x50),(byte)(in_fpscr >> 0x16) & 3);
  lVar5 = lrintf((float)(((dVar27 / dVar26) * dVar29) / (dVar28 / dVar30)));
  if (0 < lVar5) {
    dVar24 = (double)VectorSignedToFloat(lVar5,(byte)(in_fpscr >> 0x16) & 3);
  }
LAB_0003795c:
  dVar30 = (double)FUN_0003f4e4(param_2[10],param_2[0xb]);
  dVar29 = dVar23 - dVar30;
  uVar14 = in_fpscr & 0xfffffff;
  in_fpscr = uVar14 | (uint)(dVar29 < 0.0) << 0x1f;
  dVar26 = dVar29 + dVar24;
  if (SUB41(in_fpscr >> 0x1f,0)) {
    uVar15 = uVar14 | (uint)(dVar26 < 0.0) << 0x1f | (uint)(dVar26 == 0.0) << 0x1e;
    in_fpscr = uVar15 | (uint)NAN(dVar26) << 0x1c;
    uVar8 = param_2[0x2b];
    bVar2 = (byte)(uVar15 >> 0x18);
    if ((!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) &&
       ((uVar8 & 0xfffffffb) != 0)) {
      in_fpscr = uVar14 | (uint)(dVar29 < DAT_00038278) << 0x1f;
      if (SUB41(in_fpscr >> 0x1f,0)) {
        av_log(0,0x28,DAT_000382bc + 0x383b4,uVar8,dVar30 - dVar23);
      }
      else {
        av_log(0,0x30,DAT_0003829c + 0x38024,uVar8,dVar30 - dVar23);
      }
      dVar29 = 0.0;
      dVar23 = (double)FUN_0003f4e4(param_2[10],param_2[0xb]);
      uVar8 = param_2[0x2b];
      dVar24 = dVar26;
    }
  }
  else {
    uVar8 = param_2[0x2b];
  }
  switch(uVar8) {
  case 0:
    break;
  case 1:
    uVar14 = param_2[6];
    iVar16 = param_2[7];
LAB_00038108:
    uVar8 = in_fpscr & 0xfffffff;
    in_fpscr = uVar8 | (uint)(**(float **)(iVar19 + DAT_000382a0) == 0.0) << 0x1e;
    if (!SUB41(in_fpscr >> 0x1e,0)) {
      dVar23 = (double)**(float **)(iVar19 + DAT_000382a0);
      uVar8 = uVar8 | (uint)(dVar23 < dVar26) << 0x1f | (uint)(dVar23 == dVar26) << 0x1e;
      in_fpscr = uVar8 | (uint)(NAN(dVar23) || NAN(dVar26)) << 0x1c;
      bVar2 = (byte)(uVar8 >> 0x18);
      if ((!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) &&
         (uVar14 != 0 || iVar16 != 0)) goto LAB_00038138;
    }
    goto LAB_0003806c;
  case 2:
    uVar14 = param_2[6];
    iVar16 = param_2[7];
    uVar8 = in_fpscr & 0xfffffff;
    in_fpscr = uVar8 | (uint)(dVar26 == DAT_00038278) << 0x1e |
               (uint)(DAT_00038278 <= dVar26) << 0x1d;
    bVar2 = (byte)(in_fpscr >> 0x18);
    if (!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) goto LAB_00038138;
    uVar8 = uVar8 | (uint)(dVar26 < DAT_00038290) << 0x1f | (uint)(dVar26 == DAT_00038290) << 0x1e;
    in_fpscr = uVar8 | (uint)(NAN(dVar26) || NAN(DAT_00038290)) << 0x1c;
    bVar2 = (byte)(uVar8 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
      lVar31 = 1;
      local_88 = 0;
      lVar32 = llrint(dVar23);
      *(longlong *)(param_2 + 10) = lVar32;
      goto LAB_00037a10;
    }
    goto LAB_000381b0;
  case 3:
    uVar14 = param_2[6];
    iVar16 = param_2[7];
    if (uVar14 != 0 || iVar16 != 0) goto LAB_00038108;
    uVar8 = in_fpscr & 0xfffffff | (uint)(dVar29 < 0.5) << 0x1f;
    in_fpscr = uVar8 | (uint)NAN(dVar29) << 0x1c;
    if ((byte)(uVar8 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
      lVar5 = lrintf((float)dVar29);
      dVar29 = 0.0;
      av_log(0,0x30,DAT_000382c0 + 0x383d4,lVar5);
      lVar31 = llrint(dVar23);
      uVar14 = param_2[6];
      iVar16 = param_2[7];
      *(longlong *)(param_2 + 10) = lVar31;
      dVar26 = dVar24;
      goto LAB_00038108;
    }
LAB_0003806c:
    dVar23 = DAT_00038288;
    uVar8 = in_fpscr & 0xfffffff;
    in_fpscr = uVar8 | (uint)(dVar26 < DAT_00038280) << 0x1f;
    if (SUB41(in_fpscr >> 0x1f,0)) {
LAB_00038138:
      local_88 = 0;
      lVar31 = 0;
    }
    else {
      uVar8 = uVar8 | (uint)(dVar26 < DAT_00038288) << 0x1f | (uint)(dVar26 == DAT_00038288) << 0x1e
      ;
      in_fpscr = uVar8 | (uint)(NAN(dVar26) || NAN(DAT_00038288)) << 0x1c;
      bVar2 = (byte)(uVar8 >> 0x18);
      if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
LAB_000381b0:
        lVar31 = 1;
        local_88 = 0;
      }
      else {
        lVar31 = llrintf((float)dVar26);
        uVar8 = in_fpscr & 0xfffffff | (uint)(dVar29 < dVar23) << 0x1f |
                (uint)(dVar29 == dVar23) << 0x1e;
        in_fpscr = uVar8 | (uint)(NAN(dVar29) || NAN(dVar23)) << 0x1c;
        bVar2 = (byte)(uVar8 >> 0x18);
        if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
          local_88 = 0;
        }
        else {
          local_88 = llrintf((float)(dVar29 - DAT_00038290));
        }
      }
    }
    goto LAB_00037a10;
  case 4:
    break;
  default:
    av_log(0,0,DAT_000382cc + 0x38428,DAT_000382c8 + 0x38424,DAT_000382c4 + 0x38414,0x493);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar31 = 1;
  local_88 = 0;
  lVar32 = llrint(dVar23);
  uVar14 = param_2[6];
  iVar16 = param_2[7];
  *(longlong *)(param_2 + 10) = lVar32;
LAB_00037a10:
  iVar7 = (int)((ulonglong)lVar31 >> 0x20);
  uVar8 = param_2[0x18] - uVar14;
  iVar13 = param_2[0x19] - (iVar16 + (uint)((uint)param_2[0x18] < uVar14));
  local_80 = CONCAT44(iVar13,uVar8);
  bVar20 = (uint)lVar31 < uVar8;
  if ((int)(iVar7 - (iVar13 + (uint)bVar20)) < 0 !=
      (SBORROW4(iVar7,iVar13) != SBORROW4(iVar7 - iVar13,(uint)bVar20))) {
    local_80 = lVar31;
  }
  local_78 = (uint)local_88;
  iStack_74 = local_88._4_4_;
  if ((int)(local_80._4_4_ - (local_88._4_4_ + (uint)((uint)local_80 < (uint)local_88))) < 0 !=
      (SBORROW4(local_80._4_4_,local_88._4_4_) !=
      SBORROW4(local_80._4_4_ - local_88._4_4_,(uint)((uint)local_80 < (uint)local_88)))) {
    local_78 = (uint)local_80;
    iStack_74 = local_80._4_4_;
  }
  memmove(param_2 + 0x22,param_2 + 0x20,0x10);
  param_2[0x20] = local_78;
  param_2[0x21] = iStack_74;
  iVar13 = DAT_000382a4;
  if (local_78 == 0 && iStack_74 == 0) {
    if (param_2[0x1e] == 0 && param_2[0x1f] == 0) {
      uVar14 = 0;
    }
    else {
      uVar12 = *(undefined4 *)param_2[3];
      iVar9 = DAT_000382a4 + 0x38228;
      uVar8 = *(uint *)(DAT_000382a4 + 0x38300);
      piVar1 = (int *)(DAT_000382a4 + 0x38304);
      iVar7 = DAT_000382a8 + 0x38238;
      *(uint *)(DAT_000382a4 + 0x38300) = uVar8 + 1;
      *(uint *)(iVar13 + 0x38304) = *piVar1 + (uint)(0xfffffffe < uVar8);
      av_log(0,0x28,iVar7,iVar9,uVar14,iVar16,uVar12);
      uVar14 = 0;
    }
  }
  else {
    uVar14 = (uint)(param_2[0x1e] != 0 || param_2[0x1f] != 0);
  }
  uVar8 = (uint)((int)(iStack_74 - (local_80._4_4_ + (uint)(local_78 < (uint)local_80))) < 0 !=
                (SBORROW4(iStack_74,local_80._4_4_) !=
                SBORROW4(iStack_74 - local_80._4_4_,(uint)(local_78 < (uint)local_80))));
  bVar20 = uVar8 + uVar14 < (uint)local_80;
  if ((int)-(local_80._4_4_ + (uint)bVar20) < 0 ==
      (SBORROW4(0,local_80._4_4_) != SBORROW4(-local_80._4_4_,(uint)bVar20))) {
    uVar14 = param_3;
    if (param_3 != 0) {
      uVar14 = 1;
    }
    if ((int)(local_88._4_4_ - (local_80._4_4_ + (uint)((uint)local_88 < (uint)local_80))) < 0 ==
        (SBORROW4(local_88._4_4_,local_80._4_4_) !=
        SBORROW4(local_88._4_4_ - local_80._4_4_,(uint)((uint)local_88 < (uint)local_80)))) {
      local_5c = uVar14 & 1;
    }
    else {
      local_5c = 0;
    }
    uVar3 = CONCAT11((char)local_5c,(char)local_5c);
    uVar12 = CONCAT22(uVar3,uVar3);
    uVar25 = VectorShiftRight(CONCAT44(uVar12,uVar12),0x38);
    *(undefined8 *)(param_2 + 0x1e) = uVar25;
    if (local_5c != 0) {
      if (*(int *)(param_3 + 0x54) == 0) {
        param_2[0x4a] = 0;
      }
      else {
        param_2[0x4a] = 1;
      }
      if (local_80._4_4_ < (int)(uint)((uint)local_80 == 0)) {
        av_frame_unref(param_2[0x1b]);
        goto LAB_00037f28;
      }
      goto LAB_00037b8c;
    }
    param_2[0x4a] = 0;
    local_5c = uVar14;
    if ((int)(uint)((uint)local_80 == 0) <= local_80._4_4_) goto LAB_00037b8c;
  }
  else {
    fVar4 = (float)FUN_0003f718();
    iVar9 = DAT_00037d84;
    iVar7 = DAT_00037d80;
    iVar13 = DAT_00037d7c;
    uVar15 = (uint)local_80 - 1;
    iVar16 = local_80._4_4_ - (uint)((uint)local_80 == 0);
    fVar22 = **(float **)(iVar19 + DAT_00037d78) * 30.0;
    uVar14 = in_fpscr & 0xfffffff | (uint)(fVar4 < fVar22) << 0x1f | (uint)(fVar4 == fVar22) << 0x1e
    ;
    in_fpscr = uVar14 | (uint)(NAN(fVar4) || NAN(fVar22)) << 0x1c;
    bVar2 = (byte)(uVar14 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
      av_log(0,0x10,DAT_000382b0 + 0x38334,iVar16,uVar15,iVar16);
      iVar18 = DAT_000382b4;
      uVar14 = *(uint *)(DAT_000382b4 + 0x38418);
      piVar1 = (int *)(DAT_000382b4 + 0x3841c);
      *(uint *)(DAT_000382b4 + 0x38418) = uVar14 + 1;
      *(uint *)(iVar18 + 0x3841c) = *piVar1 + (uint)(0xfffffffe < uVar14);
      return;
    }
    if ((local_78 == 0 && iStack_74 == 0) ||
       (uVar14 = uVar15, iVar17 = iVar16, param_2[0x1e] == 0 && param_2[0x1f] == 0)) {
      uVar14 = (uint)local_80;
      iVar17 = local_80._4_4_;
    }
    uVar6 = *(uint *)(DAT_00037d7c + 0x37be8);
    iVar10 = *(int *)(DAT_00037d7c + 0x37bec);
    *(uint *)(DAT_00037d7c + 0x37be8) = (uVar14 - uVar8) + uVar6;
    *(uint *)(iVar13 + 0x37bec) =
         (iVar17 - (uint)(uVar14 < uVar8)) + iVar10 + (uint)CARRY4(uVar14 - uVar8,uVar6);
    av_log(0,0x28,iVar9 + 0x37b38,iVar10,uVar15,iVar16);
    uVar14 = *(uint *)(iVar13 + 0x37bec);
    uVar8 = *(uint *)(iVar7 + 0x37b2c);
    uVar15 = *(uint *)(iVar7 + 0x37b30);
    bVar20 = uVar15 <= uVar14;
    if (uVar14 == uVar15) {
      bVar20 = uVar8 <= *(uint *)(iVar13 + 0x37be8);
    }
    if (bVar20 && (uVar14 != uVar15 || *(uint *)(iVar13 + 0x37be8) != uVar8)) {
      av_log(0,0x18,DAT_000382ac + 0x382e8,uVar15,uVar8,uVar15);
      uVar14 = *(uint *)(iVar7 + 0x37b2c);
      *(uint *)(iVar7 + 0x37b2c) = uVar14 * 10;
      *(uint *)(iVar7 + 0x37b30) =
           (*(int *)(iVar7 + 0x37b30) * 5 + (uint)CARRY4(uVar14,uVar14) * 2 +
            (uint)CARRY4(uVar14 * 2,uVar14 * 2) + (uint)CARRY4(uVar14 * 4,uVar14)) * 2 +
           (uint)CARRY4(uVar14 * 5,uVar14 * 5);
    }
    local_5c = param_3;
    if (param_3 != 0) {
      local_5c = 1;
    }
    if ((int)(local_88._4_4_ - (local_80._4_4_ + (uint)((uint)local_88 < (uint)local_80))) < 0 ==
        (SBORROW4(local_88._4_4_,local_80._4_4_) !=
        SBORROW4(local_88._4_4_ - local_80._4_4_,(uint)((uint)local_88 < (uint)local_80)))) {
      uVar14 = local_5c & 1;
    }
    else {
      uVar14 = 0;
    }
    uVar3 = CONCAT11((char)uVar14,(char)uVar14);
    uVar12 = CONCAT22(uVar3,uVar3);
    uVar25 = VectorShiftRight(CONCAT44(uVar12,uVar12),0x38);
    *(undefined8 *)(param_2 + 0x1e) = uVar25;
    iVar13 = 0;
    if (uVar14 != 0) {
      local_5c = uVar14;
      if (*(int *)(param_3 + 0x54) == 0) {
        param_2[0x4a] = 0;
        goto LAB_00037b8c;
      }
      iVar13 = 1;
    }
    param_2[0x4a] = iVar13;
LAB_00037b8c:
    uVar14 = 0;
    iVar13 = 0;
    do {
      iVar7 = DAT_00037d88;
      if ((((int)(iVar13 - (iStack_74 + (uint)(uVar14 < local_78))) < 0 ==
            (SBORROW4(iVar13,iStack_74) != SBORROW4(iVar13 - iStack_74,(uint)(uVar14 < local_78))))
          || (uVar8 = param_2[0x1b], *(int *)(param_2[0x1b] + 0xb8) == 0)) &&
         (uVar8 = param_3, param_3 == 0)) {
        return;
      }
      uVar15 = param_2[10];
      iVar16 = param_2[0xb];
      iVar9 = *param_2;
      *(uint *)(uVar8 + 0x68) = uVar15;
      *(int *)(uVar8 + 0x6c) = iVar16;
      iVar9 = *(int *)(**(int **)(iVar19 + iVar7) + iVar9 * 4);
      iVar7 = *(int *)(iVar9 + 0x18);
      iVar9 = *(int *)(iVar9 + 0x1c);
      if (iVar9 != 0x7fffffff || iVar7 != -1) {
        local_50 = 1;
        local_4c = 1000000;
        iVar7 = av_compare_ts(uVar15 - param_2[0xc],
                              iVar16 - (param_2[0xd] + (uint)(uVar15 < (uint)param_2[0xc])),
                              *(undefined4 *)(param_2[0x15] + 0x4c),
                              *(undefined4 *)(param_2[0x15] + 0x50),iVar7,iVar9,1,1000000);
        if (-1 < iVar7) {
          FUN_00031658(param_2);
          return;
        }
        uVar15 = *(uint *)(uVar8 + 0x68);
        iVar16 = *(int *)(uVar8 + 0x6c);
      }
      uVar6 = param_2[0x38];
      iVar7 = param_2[0x39];
      uVar12 = *(undefined4 *)(iVar18 + 0x34);
      *(undefined4 *)(uVar8 + 0x58) = 0;
      *(undefined4 *)(uVar8 + 0x88) = uVar12;
      dVar23 = DAT_00038270;
      if (iVar7 == -0x80000000 && uVar6 == 0) {
        if (iVar16 != iVar7 || uVar15 != uVar6) {
          param_2[0x38] = uVar15;
          param_2[0x39] = iVar16;
          dVar23 = 0.0;
          goto LAB_00037c8c;
        }
      }
      else if (iVar16 != -0x80000000 || uVar15 != 0) {
        dVar23 = (double)FUN_0003f4e4(uVar15 - uVar6,iVar16 - (iVar7 + (uint)(uVar15 < uVar6)));
LAB_00037c8c:
        dVar26 = (double)VectorSignedToFloat(*(undefined4 *)(iVar18 + 0x4c),
                                             (byte)(in_fpscr >> 0x16) & 3);
        dVar24 = (double)VectorSignedToFloat(*(undefined4 *)(iVar18 + 0x50),
                                             (byte)(in_fpscr >> 0x16) & 3);
        dVar23 = (dVar26 / dVar24) * dVar23;
      }
      iVar7 = param_2[0x3c];
      if ((iVar7 < param_2[0x3b]) &&
         (puVar11 = (uint *)(param_2[0x3a] + iVar7 * 8), uVar6 = puVar11[1],
         bVar20 = uVar15 < *puVar11,
         (int)(iVar16 - (uVar6 + bVar20)) < 0 ==
         (SBORROW4(iVar16,uVar6) != SBORROW4(iVar16 - uVar6,(uint)bVar20)))) {
        param_2[0x3c] = iVar7 + 1;
LAB_00037cd4:
        iVar7 = DAT_00037d8c;
        *(undefined4 *)(uVar8 + 0x58) = 1;
        av_log(0,0x30,iVar7 + 0x37cec,1,dVar23);
      }
      else if (param_2[0x3e] == 0) {
        __s1 = (char *)param_2[0x3d];
        if (__s1 != (char *)0x0) {
          iVar7 = strncmp(__s1,(char *)(DAT_00037d90 + 0x37e10),6);
          if ((iVar7 != 0) || (*(int *)(uVar8 + 0x54) != 1 || (uVar14 != 0 || iVar13 != 0))) {
            iVar7 = strncmp(__s1,(char *)(DAT_00037d94 + 0x37e50),0xe);
            if ((iVar7 != 0 || (uVar14 != 0 || iVar13 != 0)) ||
               ((*(int *)(uVar8 + 0x54) != 1 && (param_2[0x4a] == 0)))) goto LAB_00037cf4;
            param_2[0x4a] = 0;
          }
          goto LAB_00037cd4;
        }
      }
      else {
        *(double *)(param_2 + 0x48) = dVar23;
        uVar12 = av_expr_eval(param_2[0x3e],param_2 + 0x40,0);
        in_fpscr = in_fpscr & 0xfffffff |
                   (uint)((double)CONCAT44(extraout_s1_00,uVar12) == 0.0) << 0x1e;
        if (!SUB41(in_fpscr >> 0x1e,0)) {
          param_2[0x46] = param_2[0x48];
          param_2[0x47] = param_2[0x49];
          *(double *)(param_2 + 0x44) = *(double *)(param_2 + 0x40);
          *(double *)(param_2 + 0x40) = *(double *)(param_2 + 0x40) + 1.0;
          *(double *)(param_2 + 0x42) = *(double *)(param_2 + 0x42) + 1.0;
          goto LAB_00037cd4;
        }
        *(double *)(param_2 + 0x40) = *(double *)(param_2 + 0x40) + 1.0;
      }
LAB_00037cf4:
      iVar7 = FUN_000348a0(param_1,param_2,uVar8);
      if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0002b538(1);
      }
      uVar15 = param_2[10];
      bVar20 = 0xfffffffe < uVar14;
      uVar14 = uVar14 + 1;
      uVar8 = param_2[6];
      iVar13 = iVar13 + (uint)bVar20;
      param_2[10] = uVar15 + 1;
      param_2[0xb] = param_2[0xb] + (uint)(0xfffffffe < uVar15);
      param_2[6] = uVar8 + 1;
      param_2[7] = param_2[7] + (uint)(0xfffffffe < uVar8);
    } while ((int)(iVar13 - (local_80._4_4_ + (uint)(uVar14 < (uint)local_80))) < 0 !=
             (SBORROW4(iVar13,local_80._4_4_) !=
             SBORROW4(iVar13 - local_80._4_4_,(uint)(uVar14 < (uint)local_80))));
  }
  av_frame_unref(param_2[0x1b]);
  if (local_5c == 0) {
    return;
  }
LAB_00037f28:
  av_frame_move_ref(param_2[0x1b],param_3);
  return;
}



/* ===== FUN_0003842c @ 0003842c size=936 ===== */

undefined4 FUN_0003842c(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  undefined8 uVar16;
  int local_90;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  iVar5 = DAT_000387d4 + 0x38440;
  piVar6 = *(int **)(iVar5 + DAT_000387d8);
  iVar3 = *piVar6;
  if (0 < iVar3) {
    piVar7 = *(int **)(iVar5 + DAT_000387dc);
    local_90 = 0;
    do {
      piVar11 = *(int **)(*piVar7 + local_90 * 4);
      puVar8 = (undefined4 *)piVar11[0x4f];
      if ((puVar8 != (undefined4 *)0x0) && (*(int *)(puVar8[2] + 8) != 0)) {
        uVar14 = *puVar8;
        iVar15 = piVar11[0x15];
        piVar9 = *(int **)(iVar5 + DAT_000387e0);
        iVar13 = *(int *)(*piVar9 + *piVar11 * 4);
        iVar3 = av_buffersink_get_type(uVar14);
        if (iVar3 == 1) {
          FUN_000377ac(piVar11,0);
        }
        iVar3 = piVar11[0x1a];
        while (iVar1 = av_buffersink_get_frame_flags(uVar14,iVar3,2), -1 < iVar1) {
          if (piVar11[0x57] == 0) {
            iVar1 = av_buffersink_get_type(uVar14);
            if (iVar1 == 0) {
              if (piVar11[0x36] == 0) {
                uVar4 = *(undefined4 *)(iVar3 + 0x60);
                *(undefined4 *)(iVar15 + 0xb0) = *(undefined4 *)(iVar3 + 0x5c);
                *(undefined4 *)(iVar15 + 0xb4) = uVar4;
              }
              FUN_00037838(iVar13,piVar11,iVar3);
            }
            else {
              if (iVar1 != 1) {
                av_log(0,0,DAT_000387f8 + 0x387d0,DAT_000387f4 + 0x387c4,DAT_000387f0 + 0x387b8,
                       0x564);
                    /* WARNING: Subroutine does not return */
                abort();
              }
              if (((*(uint *)(*(int *)(iVar15 + 0xc) + 0x10) & 0x4000) == 0) &&
                 (*(int *)(iVar15 + 0x314) != *(int *)(iVar3 + 0x14c))) {
                av_log(0,0x10,DAT_000387e4 + 0x385ac);
              }
              else {
                FUN_0003450c(iVar13 + 0x20,piVar11[0x15],piVar11 + 0x4f,iVar3);
                iVar1 = *(int *)(*piVar9 + *piVar11 * 4);
                iVar12 = *(int *)(iVar1 + 0x18);
                iVar1 = *(int *)(iVar1 + 0x1c);
                if ((iVar1 == 0x7fffffff && iVar12 == -1) ||
                   (iVar1 = av_compare_ts(piVar11[10] - piVar11[0xc],
                                          piVar11[0xb] -
                                          (piVar11[0xd] +
                                          (uint)((uint)piVar11[10] < (uint)piVar11[0xc])),
                                          *(undefined4 *)(piVar11[0x15] + 0x4c),
                                          *(undefined4 *)(piVar11[0x15] + 0x50),iVar12,iVar1,1,
                                          1000000), iVar1 < 0)) {
                  uVar2 = *(uint *)(iVar3 + 0x68);
                  iVar1 = *(int *)(iVar3 + 0x6c);
                  if ((iVar1 == -0x80000000 && uVar2 == 0) || (**(int **)(iVar5 + DAT_000387e8) < 0)
                     ) {
                    uVar2 = piVar11[10];
                    iVar1 = piVar11[0xb];
                    *(uint *)(iVar3 + 0x68) = uVar2;
                    *(int *)(iVar3 + 0x6c) = iVar1;
                  }
                  uVar10 = *(uint *)(iVar3 + 0x4c);
                  piVar11[10] = uVar10 + uVar2;
                  piVar11[0xb] = ((int)uVar10 >> 0x1f) + iVar1 + (uint)CARRY4(uVar10,uVar2);
                  uVar16 = VectorAdd(*(undefined8 *)(piVar11 + 0x68),(longlong)(int)uVar10,8);
                  *(undefined8 *)(piVar11 + 0x68) = uVar16;
                  iVar1 = FUN_000348a0(iVar13,piVar11,iVar3);
                  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0002b538(1);
                  }
                }
                else {
                  FUN_00031658(piVar11);
                }
              }
            }
          }
          av_frame_unref(iVar3);
        }
        if (iVar1 == -0x20464f45 || iVar1 == -0xb) {
          if (iVar1 == -0x20464f45) {
            uVar2 = param_1 & 1;
          }
          else {
            uVar2 = 0;
          }
          if ((uVar2 != 0) && (iVar3 = av_buffersink_get_type(uVar14), iVar3 == 0)) {
            FUN_00037838(iVar13,piVar11);
          }
          iVar3 = *piVar6;
        }
        else {
          local_68 = 0;
          uStack_60 = 0;
          local_58 = local_68;
          local_50 = local_68;
          local_48 = local_68;
          local_40 = local_68;
          local_38 = local_68;
          local_30 = local_68;
          av_strerror(iVar1,&local_68);
          av_log(0,0x18,DAT_000387ec + 0x38758,&local_68);
          iVar3 = *piVar6;
        }
      }
      local_90 = local_90 + 1;
    } while (local_90 < iVar3);
  }
  return 0;
}



/* ===== FUN_000387fc @ 000387fc size=988 ===== */

uint FUN_000387fc(int *param_1,int *param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  bool bVar11;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
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
  int local_68;
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
  
  iVar6 = *param_2;
  if (iVar6 < 1) {
    return 0;
  }
  iVar3 = DAT_00038bd8 + 0x38828;
  iVar8 = 0;
  do {
    puVar7 = *(undefined4 **)(*param_1 + iVar8 * 4);
    if (iVar8 < iVar6 + -1) {
      uVar9 = 0xc;
    }
    else {
      uVar9 = 4;
    }
    iVar4 = puVar7[1];
    iVar10 = puVar7[2];
    bVar11 = puVar7[6] != *(int *)(param_3 + 0x50);
    iVar6 = **(int **)(*(int *)(iVar4 + 4) + 0xb4);
    if (iVar6 == 0) {
      if (puVar7[7] == *(int *)(param_3 + 0x44)) {
        bVar1 = puVar7[8] != *(int *)(param_3 + 0x48) || bVar11;
      }
      else {
        bVar1 = true;
      }
    }
    else {
      bVar1 = bVar11;
      if ((iVar6 == 1) && (bVar1 = true, puVar7[0xb] == *(int *)(param_3 + 0xa8))) {
        iVar6 = av_channel_layout_compare(puVar7 + 0xc,param_3 + 0x148);
        iVar4 = puVar7[1];
        bVar1 = iVar6 != 0 || bVar11;
      }
    }
    if ((*(int *)(iVar4 + 0x110) == 0) && (*(int *)(iVar10 + 8) != 0)) {
      bVar1 = false;
    }
    iVar6 = puVar7[0x12];
    if ((iVar6 != 0) == (*(int *)(param_3 + 0x128) != 0)) {
      if ((iVar6 != 0) && (*(int *)(iVar6 + 4) != *(int *)(*(int *)(param_3 + 0x128) + 4))) {
        bVar1 = true;
      }
    }
    else {
      bVar1 = true;
    }
    iVar6 = av_frame_get_side_data(param_3,6);
    if (iVar6 == 0) {
      if (puVar7[0x13] == 0) goto LAB_00038874;
LAB_00038984:
      uVar2 = FUN_000177b4(puVar7,param_3);
      if (-1 < (int)uVar2) {
LAB_00038998:
        if (0 < *(int *)(iVar10 + 0x18)) {
          piVar5 = (int *)(*(int *)(iVar10 + 0x14) + -4);
          iVar6 = 0;
          do {
            piVar5 = piVar5 + 1;
            iVar6 = iVar6 + 1;
            if ((*(int *)(*piVar5 + 0x18) < 0) && (*(uint *)(*piVar5 + 0x10) < 2)) {
              local_68 = av_frame_clone(param_3);
              if (local_68 == 0) {
                uVar2 = 0xfffffff4;
                goto LAB_00038aa8;
              }
              uVar2 = av_fifo_write(puVar7[5],&local_68,1);
              if (-1 < (int)uVar2) goto LAB_000388ac;
              av_frame_free(&local_68);
              goto joined_r0x00038a20;
            }
          } while (*(int *)(iVar10 + 0x18) != iVar6);
        }
        uVar2 = FUN_0003842c(1);
        if (((uint)(uVar2 != 0xdfb9b0bb) & uVar2 >> 0x1f) != 0) {
          uStack_64 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          uStack_60 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          local_68 = 0;
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
          av_strerror(uVar2,&local_68,0x40);
          av_log(0,0x10,DAT_00038be4 + 0x38b9c,&local_68);
          goto LAB_00038aa8;
        }
        uVar2 = FUN_00017874(iVar10);
        if (-1 < (int)uVar2) goto LAB_00038888;
        av_log(0,0x10,iVar3);
      }
joined_r0x00038a20:
      if (uVar2 != 0xdfb9b0bb) goto LAB_00038aa8;
    }
    else {
      if (((void *)puVar7[0x13] == (void *)0x0) ||
         (iVar6 = memcmp(*(void **)(iVar6 + 4),(void *)puVar7[0x13],0x24), iVar6 != 0))
      goto LAB_00038984;
LAB_00038874:
      if (bVar1) goto LAB_00038984;
      if (*(int *)(iVar10 + 8) == 0) goto LAB_00038998;
LAB_00038888:
      uVar2 = av_buffersrc_add_frame_flags(*puVar7,param_3,uVar9);
      if (((uint)(uVar2 != 0xdfb9b0bb) & uVar2 >> 0x1f) != 0) {
        uStack_a4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_a0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_9c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        local_a8 = 0;
        local_98 = 0;
        local_90 = 0;
        local_88 = 0;
        local_80 = 0;
        local_78 = 0;
        local_70 = 0;
        uStack_94 = uStack_a4;
        uStack_8c = uStack_a4;
        uStack_84 = uStack_a4;
        uStack_7c = uStack_a4;
        uStack_74 = uStack_a4;
        uStack_6c = uStack_a4;
        av_strerror(uVar2,&local_a8,0x40);
        av_log(0,0x10,DAT_00038be0 + 0x38b4c,&local_a8);
LAB_00038aa8:
        uStack_e4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_e0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_dc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        local_e8 = 0;
        local_d8 = 0;
        local_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        local_b8 = 0;
        local_b0 = 0;
        uStack_d4 = uStack_e4;
        uStack_cc = uStack_e4;
        uStack_c4 = uStack_e4;
        uStack_bc = uStack_e4;
        uStack_b4 = uStack_e4;
        uStack_ac = uStack_e4;
        av_strerror(uVar2,&local_e8,0x40);
        av_log(0,0x10,DAT_00038bdc + 0x38af4,&local_e8);
        return uVar2;
      }
    }
    uVar2 = 0;
LAB_000388ac:
    iVar8 = iVar8 + 1;
    iVar6 = *param_2;
    if (iVar6 <= iVar8) {
      return uVar2;
    }
  } while( true );
}



/* ===== FUN_00038be8 @ 00038be8 size=9068 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_00038be8(int *param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *__dest;
  uint uVar4;
  uint *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int extraout_r2;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  int *piVar19;
  int *piVar20;
  undefined4 *puVar21;
  undefined4 uVar22;
  int iVar23;
  int *piVar24;
  int iVar25;
  uint uVar26;
  char *pcVar27;
  uint uVar28;
  int iVar29;
  int *piVar30;
  int iVar31;
  int iVar32;
  longlong *plVar33;
  bool bVar34;
  uint in_fpscr;
  undefined8 uVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined8 uVar39;
  longlong lVar40;
  longlong lVar41;
  undefined8 uVar42;
  longlong lVar43;
  undefined8 local_248;
  undefined8 local_238;
  uint local_22c;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  uint local_208;
  int local_200;
  int *local_1d4;
  uint local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  int local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  undefined4 local_180;
  int local_17c;
  undefined4 local_178;
  int local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
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
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  uint local_ec;
  int local_e8;
  uint *puStack_e4;
  undefined8 local_e0;
  ulonglong local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  
  iVar13 = DAT_00039130 + 0x38c10;
  iVar7 = param_1[9];
  if (param_1[0x26] == 0) {
    iVar23 = param_1[1];
    if (*(int *)(iVar23 + 0x44) == 0) {
      lVar41 = 0;
    }
    else {
      dVar36 = (double)VectorSignedToFloat(*(int *)(iVar23 + 0x44),(byte)(in_fpscr >> 0x16) & 3);
      dVar38 = (double)VectorSignedToFloat(*(undefined4 *)(iVar23 + 0x48),
                                           (byte)(in_fpscr >> 0x16) & 3);
      dVar37 = (double)VectorSignedToFloat(*(int *)(param_1[6] + 0x88) * -1000000,
                                           (byte)(in_fpscr >> 0x16) & 3);
      dVar37 = dVar37 / (dVar36 / dVar38);
      lVar41 = FUN_0003f8e0(SUB84(dVar37,0),(int)((ulonglong)dVar37 >> 0x20));
    }
    *(longlong *)(param_1 + 0x12) = lVar41;
    *(longlong *)(param_1 + 0x10) = lVar41;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    if (param_2 != 0) {
      if ((*(int *)(param_2 + 0xc) != -0x80000000 || *(int *)(param_2 + 8) != 0) &&
         (param_1[4] == 0)) {
        local_1bc = 1000000;
        local_1c0 = 1;
        lVar40 = av_rescale_q(*(int *)(param_2 + 8),*(int *)(param_2 + 0xc),
                              *(undefined4 *)(iVar23 + 0xc),*(undefined4 *)(iVar23 + 0x10),1,1000000
                             );
        lVar40 = lVar40 + lVar41;
        *(longlong *)(param_1 + 0x12) = lVar40;
        *(longlong *)(param_1 + 0x10) = lVar40;
        *(longlong *)(param_1 + 0x16) = lVar40;
      }
    }
    param_1[0x26] = 1;
  }
  if (param_1[0xf] == -0x80000000 && param_1[0xe] == 0) {
    param_1[0xe] = param_1[0x12];
    param_1[0xf] = param_1[0x13];
  }
  if (param_1[0x15] == -0x80000000 && param_1[0x14] == 0) {
    param_1[0x14] = param_1[0x16];
    param_1[0x15] = param_1[0x17];
  }
  if (param_2 == 0) {
    iVar23 = param_1[4];
    if (iVar23 != 0) {
      iVar25 = param_1[6];
      goto LAB_00038d98;
    }
    goto LAB_0003aa9c;
  }
  av_packet_unref(iVar7);
  uVar2 = av_packet_ref(iVar7,param_2);
  if ((int)uVar2 < 0) {
    return uVar2;
  }
  iVar23 = param_1[4];
  if (*(int *)(param_2 + 0x14) == -0x80000000 && *(int *)(param_2 + 0x10) == 0) {
    iVar25 = param_1[6];
  }
  else {
    local_1b4 = 1000000;
    local_1b8 = 1;
    lVar41 = av_rescale_q(*(int *)(param_2 + 0x10),*(int *)(param_2 + 0x14),
                          *(undefined4 *)(param_1[1] + 0xc),*(undefined4 *)(param_1[1] + 0x10),1,
                          1000000);
    iVar25 = param_1[6];
    iVar29 = *(int *)(iVar25 + 8);
    *(longlong *)(param_1 + 0x12) = lVar41;
    *(longlong *)(param_1 + 0xe) = lVar41;
    if ((iVar29 == 0) && (iVar29 = 0, iVar23 != 0)) goto LAB_00038da0;
    *(longlong *)(param_1 + 0x16) = lVar41;
    *(longlong *)(param_1 + 0x14) = lVar41;
  }
  if (iVar23 != 0) {
LAB_00038d98:
    lVar41 = *(longlong *)(param_1 + 0xe);
    iVar29 = *(int *)(iVar25 + 8);
LAB_00038da0:
    uVar42 = DAT_00039128;
    iVar8 = DAT_00039134 + 0x38dc0;
    uVar2 = 0;
    local_208 = 0xbebbb1b7;
    do {
      *(longlong *)(param_1 + 0x12) = lVar41;
      local_1c4 = 0;
      param_1[0x16] = param_1[0x14];
      param_1[0x17] = param_1[0x15];
      if (iVar29 != 1) {
        if (iVar29 != 3) {
          if (iVar29 != 0) {
            return 0xffffffff;
          }
          iVar23 = param_1[8];
          uVar10 = (uint)(param_2 == 0);
          if (uVar2 == 0) {
            iVar25 = iVar7;
            if (param_2 == 0 || iVar7 == 0) {
              if (lVar41 != -0x8000000000000000) goto LAB_00038e64;
              goto LAB_00038ea4;
            }
            local_22c = *(uint *)(iVar7 + 0x1c);
            uVar3 = 0;
            if (local_22c != 0) {
              if (lVar41 != -0x8000000000000000) goto LAB_00038e64;
              *(undefined4 *)(iVar7 + 0x10) = 0;
              *(undefined4 *)(iVar7 + 0x14) = 0x80000000;
LAB_00039580:
              FUN_000339d0(0);
              iVar29 = param_1[6];
LAB_00038f08:
              local_1c4 = 0;
              uVar3 = avcodec_send_packet(iVar29,iVar25);
              if (((uint)(uVar3 != 0xdfb9b0bb) & uVar3 >> 0x1f) == 0) goto LAB_00038f2c;
              goto LAB_0003990c;
            }
LAB_00038fec:
            local_220 = 0;
LAB_00038ff4:
            if (*(int *)(param_2 + 0x30) == 0 && *(int *)(param_2 + 0x34) == 0) goto LAB_0003996c;
            local_1ac = 1000000;
            local_1b0 = 1;
            lVar41 = av_rescale_q(*(int *)(param_2 + 0x30),*(int *)(param_2 + 0x34),
                                  *(undefined4 *)(param_1[1] + 0xc),
                                  *(undefined4 *)(param_1[1] + 0x10));
LAB_0003903c:
            if ((param_1[0x13] == -0x80000000 && param_1[0x12] == 0) || (lVar41 == 0))
            goto LAB_00039990;
            *(longlong *)(param_1 + 0xe) = lVar41 + *(longlong *)(param_1 + 0xe);
          }
          else {
            if (lVar41 == -0x8000000000000000) {
LAB_00039d1c:
              if (param_2 == 0) {
                iVar25 = 0;
                goto LAB_00038eb8;
              }
              FUN_000339d0(0);
              iVar29 = param_1[6];
              local_1c4 = 0;
LAB_00038f2c:
              uVar3 = avcodec_receive_frame(iVar29,iVar23);
              if (((uint)(uVar3 != 0xfffffff5) & uVar3 >> 0x1f) == 0) {
                if ((int)uVar3 < 0) {
                  FUN_000339d0(DAT_00039174 + 0x39a28,*param_1,*(undefined4 *)param_1[1]);
                }
                else {
                  local_1c4 = 1;
                  FUN_000339d0(DAT_00039138 + 0x38f74,*param_1,*(undefined4 *)param_1[1]);
                }
                iVar25 = param_1[6];
                iVar9 = *(int *)(param_1[1] + 0xb4);
                iVar14 = *(int *)(iVar25 + 0x88);
                iVar29 = *(int *)(iVar9 + 0x58);
                if (iVar29 < iVar14) {
                  local_22c = 0;
                  uVar3 = 0;
LAB_00038f98:
                  if (*(int *)(iVar25 + 0x10) == 0x1b) {
                    *(int *)(iVar9 + 0x58) = iVar14;
                  }
                  else {
                    av_log(iVar25,0x18,DAT_0003913c + 0x38fbc,iVar14,iVar29);
                  }
                  goto LAB_00038fbc;
                }
                FUN_000337e4(param_1,local_1c4,0);
                local_22c = local_1c4;
                uVar2 = uVar10 | uVar2 ^ 1;
                uVar3 = 0;
                if (local_1c4 == 0) goto LAB_00039954;
                local_22c = 0;
LAB_00039dd8:
                iVar25 = param_1[6];
                iVar29 = *(int *)(iVar25 + 0x70);
                if (((*(int *)(iVar25 + 0x5c) != *(int *)(iVar23 + 0x44)) ||
                    (*(int *)(iVar23 + 0x48) != *(int *)(iVar25 + 0x60))) ||
                   (*(int *)(iVar23 + 0x50) != iVar29)) {
                  av_log(0,0x30,DAT_00039180 + 0x39e1c,*(int *)(iVar23 + 0x44),
                         *(int *)(iVar23 + 0x48),*(int *)(iVar23 + 0x50),*(int *)(iVar25 + 0x5c),
                         *(int *)(iVar25 + 0x60),iVar29);
                  uVar3 = 0;
                  if (local_1c4 == 0) goto LAB_00039954;
                  iVar29 = *(int *)(iVar23 + 0x50);
                }
                uVar3 = param_1[0x52];
                iVar25 = param_1[0x53];
                if (-1 < param_1[0x2a]) {
                  *(int *)(iVar23 + 0x98) = param_1[0x2a];
                }
                param_1[0x52] = uVar3 + 1;
                param_1[0x53] = iVar25 + (uint)(0xfffffffe < uVar3);
                if (((code *)param_1[0x4b] == (code *)0x0) || (param_1[0x4c] != iVar29)) {
LAB_00039e70:
                  param_1[0x4d] = iVar29;
                  local_220 = *(undefined8 *)(iVar23 + 0x110);
                  if (param_1[0x28] == 0) {
                    local_248 = *(undefined8 *)(iVar23 + 0x100);
                  }
                  else {
                    uVar3 = param_1[0x20];
                    local_248 = *(undefined8 *)(param_1 + 0x20);
                    param_1[0x20] = uVar3 + 1;
                    param_1[0x21] = param_1[0x21] + (uint)(0xfffffffe < uVar3);
                  }
                  puVar21 = (undefined4 *)param_1[1];
                  if (local_248._4_4_ != -0x80000000 || (int)local_248 != 0) {
                    uVar10 = 0;
                  }
                  if (uVar10 == 0) {
LAB_00039ee8:
                    if (local_248._4_4_ == -0x80000000 && (int)local_248 == 0) goto LAB_0003a34c;
                    local_16c = 1000000;
                    local_170 = 1;
                    *(int *)(iVar23 + 0x68) = (int)local_248;
                    *(int *)(iVar23 + 0x6c) = local_248._4_4_;
                    lVar41 = av_rescale_q((int)local_248,local_248._4_4_,puVar21[3],puVar21[4],1);
                    if (lVar41 != -0x8000000000000000) {
                      *(longlong *)(param_1 + 0x16) = lVar41;
                      *(longlong *)(param_1 + 0x14) = lVar41;
                    }
                  }
                  else {
                    iVar25 = param_1[0x57];
                    if (0 < iVar25) {
                      __dest = (undefined8 *)param_1[0x56];
                      local_248 = *__dest;
                      if (iVar25 + -1 != 0) {
                        memmove(__dest,__dest + 1,(iVar25 + 0x1fffffff) * 8);
                      }
                      param_1[0x57] = iVar25 + -1;
                      goto LAB_00039ee8;
                    }
LAB_0003a34c:
                    local_248 = 0x8000000000000000;
                  }
                  if (**(int **)(iVar13 + DAT_00039184) != 0) {
                    iVar25 = *(int *)(iVar23 + 0x68);
                    iVar29 = *(int *)(iVar23 + 0x6c);
                    uStack_84 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                    uStack_90 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                    uStack_8c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                    uVar22 = *puVar21;
                    local_98 = 0;
                    local_88 = 0;
                    local_80 = 0;
                    uStack_7c = uStack_84;
                    if (iVar29 == -0x80000000 && iVar25 == 0) {
                      local_98 = *(undefined4 *)(DAT_0003b000 + 0x3ad40);
                      uStack_94 = CONCAT22((short)((uint)uStack_84 >> 0x10),
                                           (short)*(undefined4 *)(DAT_0003b000 + 0x3ad44));
                    }
                    else {
                      uStack_94 = uStack_84;
                      snprintf((char *)&local_98,0x20,(char *)(DAT_0003afc0 + 0x3a200),iVar29,iVar25
                              );
                      iVar25 = *(int *)(iVar23 + 0x68);
                      iVar29 = *(int *)(iVar23 + 0x6c);
                    }
                    uStack_a4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                    uStack_b0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                    uStack_ac = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                    local_b8 = 0;
                    local_a8 = 0;
                    local_a0 = 0;
                    uStack_9c = uStack_a4;
                    if (iVar29 == -0x80000000 && iVar25 == 0) {
                      local_b8 = *(undefined4 *)(DAT_0003affc + 0x3ad18);
                      uStack_b4 = CONCAT22((short)((uint)uStack_a4 >> 0x10),
                                           (short)*(undefined4 *)(DAT_0003affc + 0x3ad1c));
                    }
                    else {
                      pcVar27 = (char *)(DAT_0003afc4 + 0x3a244);
                      VectorSignedToFloat(*(undefined4 *)(param_1[1] + 0xc),
                                          (byte)(in_fpscr >> 0x16) & 3);
                      VectorSignedToFloat(*(undefined4 *)(param_1[1] + 0x10),
                                          (byte)(in_fpscr >> 0x16) & 3);
                      uStack_b4 = uStack_a4;
                      FUN_0003f4e4(iVar25,iVar29);
                      snprintf((char *)&local_b8,0x20,pcVar27);
                    }
                    local_c8 = 0;
                    uStack_d0 = 0;
                    local_c0 = local_c8;
                    if (local_248._4_4_ == -0x80000000 && (int)local_248 == 0) {
                      local_d8 = (ulonglong)*(uint6 *)(DAT_0003aff8 + 0x3acfc);
                    }
                    else {
                      pcVar27 = (char *)(DAT_0003afc8 + 0x3a2b4);
                      VectorSignedToFloat(*(undefined4 *)(param_1[1] + 0xc),
                                          (byte)(in_fpscr >> 0x16) & 3);
                      VectorSignedToFloat(*(undefined4 *)(param_1[1] + 0x10),
                                          (byte)(in_fpscr >> 0x16) & 3);
                      local_d8 = local_c8;
                      FUN_0003f4e4((int)local_248,local_248._4_4_);
                      snprintf((char *)&local_d8,0x20,pcVar27);
                    }
                    av_log(0,0x20,DAT_0003afcc + 0x3a310,uVar22,&local_98,&local_b8,(int)local_248,
                           local_248._4_4_,&local_d8,*(undefined4 *)(iVar23 + 0x54),
                           *(undefined4 *)(iVar23 + 0x58),*(undefined4 *)(param_1[1] + 0xc),
                           *(undefined4 *)(param_1[1] + 0x10));
                    puVar21 = (undefined4 *)param_1[1];
                  }
                  if (puVar21[0xe] != 0) {
                    uVar22 = puVar21[0xf];
                    *(undefined4 *)(iVar23 + 0x5c) = puVar21[0xe];
                    *(undefined4 *)(iVar23 + 0x60) = uVar22;
                  }
                  uVar3 = FUN_000387fc(param_1 + 0x42,param_1 + 0x43,iVar23);
                  uVar3 = uVar3 & (int)uVar3 >> 0x1f;
                  av_frame_unref(iVar23);
                }
                else {
                  uVar3 = (*(code *)param_1[0x4b])(param_1[6],iVar23);
                  if (-1 < (int)uVar3) {
                    iVar29 = *(int *)(iVar23 + 0x50);
                    goto LAB_00039e70;
                  }
                  local_220 = 0;
                  av_frame_unref(iVar23);
                }
                if (uVar2 == 0) {
                  if (local_1c4 == 0) goto LAB_000390cc;
                  goto LAB_00038ff4;
                }
              }
              else {
LAB_0003990c:
                FUN_000339d0(DAT_0003916c + 0x39924,*param_1,*(undefined4 *)param_1[1]);
                iVar25 = param_1[6];
                iVar9 = *(int *)(param_1[1] + 0xb4);
                iVar14 = *(int *)(iVar25 + 0x88);
                iVar29 = *(int *)(iVar9 + 0x58);
                if (iVar29 < iVar14) {
                  local_22c = 1;
                  goto LAB_00038f98;
                }
                local_22c = 1;
LAB_00038fbc:
                if (uVar3 == 0xdfb9b0bb) {
                  uVar2 = uVar10 | uVar2 ^ 1;
                  if (local_1c4 == 0) goto LAB_00039954;
LAB_00038fe4:
                  if (uVar2 == 0) goto LAB_00038fec;
                }
                else {
                  FUN_000337e4(param_1,local_1c4,uVar3);
                  uVar2 = uVar10 | uVar2 ^ 1;
                  if (local_1c4 != 0) {
                    if (uVar3 == 0) goto LAB_00039dd8;
                    goto LAB_00038fe4;
                  }
LAB_00039954:
                  if (uVar2 == 0) goto LAB_000390cc;
                }
                local_220 = 0;
              }
              if (param_2 != 0) goto LAB_00038ff4;
            }
            else {
              iVar25 = 0;
LAB_00038e64:
              local_164 = 1000000;
              local_168 = 1;
              lVar41 = av_rescale_q((int)lVar41,(int)((ulonglong)lVar41 >> 0x20),1,1000000,
                                    *(undefined4 *)(param_1[1] + 0xc));
LAB_00038ea4:
              if (iVar25 == 0) goto LAB_00039d1c;
              *(longlong *)(iVar25 + 0x10) = lVar41;
              if (param_2 != 0) goto LAB_00039580;
LAB_00038eb8:
              iVar29 = av_realloc_array(param_1[0x56],param_1[0x57] + 1,8);
              if (iVar29 != 0) {
                iVar9 = param_1[0x57];
                param_1[0x56] = iVar29;
                param_1[0x57] = iVar9 + 1;
                *(longlong *)(iVar29 + iVar9 * 8) = lVar41;
                FUN_000339d0(0);
                iVar29 = param_1[6];
                local_1c4 = 0;
                if (iVar25 != 0) goto LAB_00038f08;
                goto LAB_00038f2c;
              }
              uVar3 = 0xfffffff4;
              local_220 = 0;
              local_22c = 0;
            }
LAB_0003996c:
            if ((*(int *)(param_1[6] + 0x270) != 0) && (*(int *)(param_1[6] + 0x274) != 0)) {
              iVar23 = av_stream_get_parser(param_1[1]);
              if (iVar23 == 0) {
                iVar25 = param_1[6];
                iVar29 = *(int *)(iVar25 + 0x54);
                iVar23 = iVar29;
              }
              else {
                iVar23 = av_stream_get_parser(param_1[1]);
                iVar25 = param_1[6];
                iVar29 = *(int *)(iVar23 + 0x24) + 1;
                iVar23 = *(int *)(iVar25 + 0x54);
              }
              uVar1 = (longlong)iVar29 * (longlong)*(int *)(iVar25 + 0x274);
              lVar41 = (uVar1 & 0xffffffff) * 1000000;
              uVar39 = FUN_0003f794((int)lVar41,
                                    (int)(uVar1 >> 0x20) * 1000000 +
                                    (int)((ulonglong)lVar41 >> 0x20),*(int *)(iVar25 + 0x270),
                                    *(int *)(iVar25 + 0x270) >> 0x1f);
              lVar41 = FUN_0003f794((int)uVar39,(int)((ulonglong)uVar39 >> 0x20),iVar23,
                                    iVar23 >> 0x1f);
              goto LAB_0003903c;
            }
            lVar41 = 0;
LAB_00039990:
            param_1[0xe] = 0;
            param_1[0xf] = -0x80000000;
          }
          if (local_1c4 != 0) {
            lVar40 = *(longlong *)(param_1 + 0x14);
            if (local_220._4_4_ < (int)(uint)((uint)local_220 == 0)) {
              *(longlong *)(param_1 + 0x14) = lVar41 + lVar40;
            }
            else {
              local_1a4 = 1000000;
              local_1a8 = 1;
              lVar41 = av_rescale_q((uint)local_220,local_220._4_4_,
                                    *(undefined4 *)(param_1[1] + 0xc),
                                    *(undefined4 *)(param_1[1] + 0x10));
              *(longlong *)(param_1 + 0x14) = lVar41 + lVar40;
            }
          }
          goto LAB_000390cc;
        }
        if (uVar2 != 0) {
          uVar10 = 0;
          goto LAB_000391ac;
        }
        uVar26 = avcodec_decode_subtitle2(iVar25,&local_f8,&local_1c4,iVar7);
        uVar10 = local_1c4;
        iVar23 = extraout_r2;
        if (local_1c4 != 0) {
          iVar23 = 1;
        }
        if (local_1c4 == 0) {
          iVar23 = -((int)uVar26 >> 0x1f);
        }
        uVar3 = uVar26;
        if (iVar23 == 0) {
LAB_00039a2c:
          if (*(int *)(iVar7 + 0x1c) == 0) {
LAB_000396e4:
            if (param_1[0x3b] != 0x7fffffff || param_1[0x3a] != -1) {
              FUN_00035610(param_1);
            }
            if (0 < param_1[0x43]) {
              iVar23 = 0;
              iVar25 = DAT_00039160 + 0x39728;
              do {
                while( true ) {
                  uVar26 = av_buffersrc_add_frame(**(undefined4 **)(param_1[0x42] + iVar23 * 4),0);
                  uVar10 = uVar26 >> 0x1f;
                  if (uVar26 == 0xdfb9b0bb) {
                    uVar10 = 0;
                  }
                  if (uVar10 != 0) break;
                  iVar23 = iVar23 + 1;
                  if (param_1[0x43] <= iVar23) goto LAB_00039764;
                }
                iVar23 = iVar23 + 1;
                av_log(0,0x18,iVar25);
              } while (iVar23 < param_1[0x43]);
            }
          }
LAB_00039764:
          local_22c = 1;
          goto LAB_0003976c;
        }
        puVar5 = (uint *)(DAT_00039158 + 0x397c8 + ((int)uVar26 >> 0x1f) * -8);
        uVar11 = *puVar5;
        *puVar5 = uVar11 + 1;
        puVar5[1] = puVar5[1] + (uint)(0xfffffffe < uVar11);
        if ((int)uVar26 < 0) {
          if (**(int **)(iVar13 + DAT_0003915c) == 0) {
            if (*(int *)(iVar7 + 0x1c) == 0) goto LAB_000396e4;
            local_22c = 1;
            goto LAB_000390cc;
          }
          goto LAB_0003ac40;
        }
        if (local_1c4 == 0) goto LAB_00039a2c;
        if (param_1[0x2d] == 0) {
LAB_0003a3e0:
          if (param_1[0x3d] != 0) {
            FUN_00035610(param_1,puVar5,0,0x80000000,&local_f8);
            iVar23 = DAT_0003afd0;
joined_r0x0003ad80:
            uVar28 = uVar3;
            DAT_0003afd0 = iVar23;
            lVar41 = local_68;
            if (local_ec != 0) {
              uVar10 = param_1[0x52];
              param_1[0x52] = uVar10 + 1;
              param_1[0x53] = param_1[0x53] + (uint)(0xfffffffe < uVar10);
              local_1d4 = *(int **)(iVar13 + iVar23);
              iVar23 = *local_1d4;
              if (0 < iVar23) {
                local_22c = 1;
                goto LAB_0003a44c;
              }
            }
            goto LAB_0003a144;
          }
          iVar23 = DAT_0003afd0;
          if (param_1[0x43] == 0) goto joined_r0x0003ad80;
          iVar23 = param_1[0x3c];
          if (iVar23 == 0) {
            iVar23 = av_fifo_alloc2(8,0x20,1);
            param_1[0x3c] = iVar23;
            if (iVar23 == 0) goto LAB_0003ac40;
          }
          uVar3 = av_fifo_write(iVar23,&local_f8,1);
          iVar23 = DAT_0003afd0;
          if ((int)uVar3 < 0) goto LAB_0003ac40;
          local_22c = local_ec;
          if (local_ec != 0) {
            uVar10 = param_1[0x52];
            param_1[0x52] = uVar10 + 1;
            param_1[0x53] = param_1[0x53] + (uint)(0xfffffffe < uVar10);
            local_1d4 = *(int **)(iVar13 + iVar23);
            iVar23 = *local_1d4;
            local_22c = 0;
            if (iVar23 < 1) goto LAB_0003976c;
LAB_0003a44c:
            iVar25 = DAT_0003afd4;
            local_200 = 0;
            piVar15 = *(int **)(iVar13 + DAT_0003afd8);
            piVar24 = *(int **)(iVar13 + DAT_0003afdc);
            do {
              iVar29 = DAT_0003afe4;
              piVar30 = *(int **)(*piVar15 + local_200 * 4);
              if ((*(int *)(*(int *)(*piVar24 + *param_1 * 4) + 0xc) + *(int *)param_1[1] ==
                   piVar30[2]) && ((piVar30[0x57] & 2U) == 0)) {
                piVar19 = *(int **)(iVar13 + DAT_0003afe0);
                iVar14 = *(int *)(*piVar19 + *piVar30 * 4);
                uVar10 = *(uint *)(iVar14 + 0x20);
                iVar9 = *(int *)(iVar14 + 0x24);
                if (((iVar9 == -0x80000000 && uVar10 == 0) ||
                    (iVar18 = param_1[0x17],
                    (int)(iVar18 - (iVar9 + (uint)((uint)param_1[0x16] < uVar10))) < 0 ==
                    (SBORROW4(iVar18,iVar9) !=
                    SBORROW4(iVar18 - iVar9,(uint)((uint)param_1[0x16] < uVar10))))) &&
                   ((piVar30[4] != 0 && (*(int *)(piVar30[0x17] + 8) == 3)))) {
                  if (local_e0 != -0x8000000000000000) {
                    iVar18 = piVar30[0x15];
                    iVar32 = piVar30[0x1c];
                    iVar23 = iVar14;
                    lVar41 = local_e0;
                    if (*(int *)(DAT_0003afe4 + 0x3a6d4) == 0) {
                      iVar23 = av_malloc(0x100000);
                      *(int *)(iVar29 + 0x3a6d4) = iVar23;
                      if (iVar23 == 0) {
                        av_log(0,8,DAT_0003b010 + 0x3af98);
                        goto LAB_0003ac40;
                      }
                      iVar23 = *(int *)(*piVar19 + *piVar30 * 4);
                      uVar10 = *(uint *)(iVar23 + 0x20);
                      iVar9 = *(int *)(iVar23 + 0x24);
                      lVar41 = local_e0;
                    }
                    local_e0._4_4_ = (int)((ulonglong)lVar41 >> 0x20);
                    local_e0._0_4_ = (uint)lVar41;
                    if (*(int *)(iVar18 + 0x10) == 0x17001) {
                      iVar29 = 2;
                    }
                    else {
                      iVar29 = 1;
                    }
                    lVar40 = lVar41;
                    if (iVar9 != -0x80000000 || uVar10 != 0) {
                      lVar40 = CONCAT44(local_e0._4_4_ - (iVar9 + (uint)((uint)local_e0 < uVar10)),
                                        (uint)local_e0 - uVar10);
                    }
                    uStack_214 = (undefined4)((ulonglong)lVar40 >> 0x20);
                    local_218 = (undefined4)lVar40;
                    iVar9 = 0;
                    local_e0 = lVar41;
                    do {
                      local_12c = 1000000;
                      local_130 = 1;
                      uVar39 = av_rescale_q(local_218,uStack_214,1,1000000,
                                            *(undefined4 *)(iVar18 + 0x4c));
                      uVar10 = local_ec;
                      iVar12 = *(int *)(iVar23 + 0x18);
                      iVar23 = *(int *)(iVar23 + 0x1c);
                      *(undefined8 *)(piVar30 + 10) = uVar39;
                      if (iVar23 != 0x7fffffff || iVar12 != -1) {
                        local_128 = 1;
                        local_124 = 1000000;
                        iVar23 = av_compare_ts((uint)uVar39 - piVar30[0xc],
                                               (int)((ulonglong)uVar39 >> 0x20) -
                                               (piVar30[0xd] +
                                               (uint)((uint)uVar39 < (uint)piVar30[0xc])),
                                               *(undefined4 *)(piVar30[0x15] + 0x4c),
                                               *(undefined4 *)(piVar30[0x15] + 0x50),iVar12,iVar23,1
                                               ,1000000);
                        if (-1 < iVar23) {
                          FUN_00031658(piVar30);
                          iVar23 = *local_1d4;
                          goto LAB_0003a48c;
                        }
                      }
                      iVar23 = local_f4;
                      local_140 = 1;
                      local_13c = 1000000;
                      local_134 = 1000;
                      local_138 = 1;
                      lVar41 = av_rescale_q(local_f4,0,1,1000,1);
                      iVar12 = piVar30[0x66] + 1;
                      local_f4 = 0;
                      iVar31 = piVar30[0x67] + (uint)(0xfffffffe < (uint)piVar30[0x66]);
                      local_f0 = local_f0 - iVar23;
                      uVar22 = *(undefined4 *)(iVar25 + 0x3a5c4);
                      local_e0 = lVar41 + lVar40;
                      if (iVar9 == 1) {
                        local_ec = 0;
                        piVar30[0x66] = iVar12;
                        piVar30[0x67] = iVar31;
                        iVar23 = avcodec_encode_subtitle(iVar18,uVar22,0x100000,&local_f8);
                        local_ec = uVar10;
                      }
                      else {
                        piVar30[0x66] = iVar12;
                        piVar30[0x67] = iVar31;
                        iVar23 = avcodec_encode_subtitle(iVar18,uVar22,0x100000,&local_f8);
                      }
                      if (iVar23 < 0) {
                        iVar7 = DAT_0003b00c + 0x3af88;
                        goto LAB_000398e4;
                      }
                      piVar20 = piVar30 + 0x10;
                      av_packet_unref(iVar32);
                      iVar12 = DAT_0003afe8;
                      iVar31 = *piVar20;
                      *(int *)(iVar32 + 0x1c) = iVar23;
                      local_144 = 1000000;
                      local_148 = 1;
                      *(undefined4 *)(iVar32 + 0x18) = *(undefined4 *)(iVar12 + 0x3a8f8);
                      lVar41 = av_rescale_q((uint)local_e0,local_e0._4_4_,1,1000000,iVar31);
                      iVar23 = local_f0;
                      local_150 = 1;
                      local_14c = 1000;
                      iVar12 = *piVar20;
                      *(longlong *)(iVar32 + 8) = lVar41;
                      uVar39 = av_rescale_q(local_f0,0,1,1000,iVar12);
                      iVar12 = *(int *)(iVar18 + 0x10);
                      *(undefined8 *)(iVar32 + 0x30) = uVar39;
                      if (iVar12 == 0x17001) {
                        if (iVar9 != 0) {
                          local_160 = 1;
                          local_15c = 1000;
                          lVar40 = av_rescale_q(iVar23,0,1,1000,*piVar20);
                          *(longlong *)(iVar32 + 8) = lVar41 + lVar40;
                          *(longlong *)(iVar32 + 0x10) = lVar41 + lVar40;
                          FUN_000338f8(iVar14,iVar32,piVar30);
                          goto LAB_0003a864;
                        }
                        local_158 = 1;
                        local_154 = 1000;
                        lVar43 = av_rescale_q(local_f4,0,1,1000,*piVar20);
                        lVar41 = lVar43 + lVar41;
                        *(longlong *)(iVar32 + 8) = lVar41;
                      }
                      iVar9 = iVar9 + 1;
                      *(longlong *)(iVar32 + 0x10) = lVar41;
                      FUN_000338f8(iVar14,iVar32,piVar30);
                      if (iVar9 == iVar29) goto LAB_0003a864;
                      iVar23 = *(int *)(*piVar19 + *piVar30 * 4);
                    } while( true );
                  }
                  av_log(0,0x10,DAT_0003b004 + 0x3ae30);
                  if (**(int **)(iVar13 + DAT_0003aff4) != 0) goto LAB_0003ac40;
LAB_0003a864:
                  iVar23 = *local_1d4;
                }
              }
LAB_0003a48c:
              local_200 = local_200 + 1;
            } while (local_200 < iVar23);
            uVar28 = uVar3;
            lVar41 = local_68;
            if (local_22c != 0) goto LAB_0003a144;
          }
        }
        else {
          uVar11 = param_1[0x2e];
          if (uVar11 == 0) {
            uVar3 = param_1[0x2f];
            param_1[0x2e] = local_1c4;
            param_1[0x2f] = uVar26;
            param_1[0x30] = local_f8;
            param_1[0x31] = local_f4;
            param_1[0x32] = local_f0;
            param_1[0x33] = local_ec;
            param_1[0x34] = local_e8;
            param_1[0x35] = (int)puStack_e4;
            *(longlong *)(param_1 + 0x36) = local_e0;
            local_22c = 0;
            local_1c4 = uVar2;
            goto LAB_0003976c;
          }
          uVar4 = av_rescale((uint)local_e0 - param_1[0x36],
                             local_e0._4_4_ -
                             (param_1[0x37] + (uint)((uint)local_e0 < (uint)param_1[0x36])),1000,0,
                             uVar42);
          if (uVar4 < (uint)param_1[0x32]) {
            av_log(param_1[6],0x30,DAT_0003918c + 0x3a0d8,param_1[0x32],uVar4);
            param_1[0x32] = uVar4;
            iVar23 = (int)*(longlong *)(param_1 + 0x30);
            iVar25 = param_1[0x31];
            local_78 = *(longlong *)(param_1 + 0x30);
            iVar29 = param_1[0x32];
            uVar10 = param_1[0x33];
            uStack_70 = *(undefined8 *)(param_1 + 0x32);
            local_22c = param_1[0x2e];
            lVar41 = *(longlong *)(param_1 + 0x34);
            local_60 = *(longlong *)(param_1 + 0x36);
            param_1[0x2e] = local_1c4;
            uVar3 = param_1[0x2f];
            param_1[0x2f] = uVar26;
            param_1[0x30] = local_f8;
            param_1[0x31] = local_f4;
            param_1[0x32] = local_f0;
            param_1[0x33] = local_ec;
            param_1[0x34] = local_e8;
            param_1[0x35] = (int)puStack_e4;
            *(longlong *)(param_1 + 0x36) = local_e0;
            local_68._0_4_ = (int)lVar41;
            local_68._4_4_ = (uint *)((ulonglong)lVar41 >> 0x20);
            local_e8 = (int)local_68;
            puStack_e4 = local_68._4_4_;
            uVar28 = uVar3;
            local_1c4 = local_22c;
            local_f8 = iVar23;
            local_f4 = iVar25;
            local_f0 = iVar29;
            local_ec = uVar10;
            local_e0 = local_60;
            if (0 < (int)uVar4) {
              puVar5 = local_68._4_4_;
              local_1c4 = local_22c;
              local_68 = lVar41;
              if (local_22c != 0) goto LAB_0003a3e0;
              goto LAB_0003976c;
            }
          }
          else {
            plVar33 = (longlong *)(param_1 + 0x30);
            uVar28 = param_1[0x2f];
            lVar40 = *plVar33;
            iVar23 = param_1[0x31];
            local_78 = *plVar33;
            iVar25 = param_1[0x32];
            uVar17 = param_1[0x33];
            uStack_70 = *(undefined8 *)(param_1 + 0x32);
            param_1[0x2e] = uVar10;
            lVar41 = *(longlong *)(param_1 + 0x34);
            local_60 = *(longlong *)(param_1 + 0x36);
            param_1[0x2f] = uVar26;
            if (0 < (int)uVar4) {
              uVar3 = uVar28;
            }
            *(int *)plVar33 = local_f8;
            param_1[0x31] = local_f4;
            param_1[0x32] = local_f0;
            param_1[0x33] = local_ec;
            param_1[0x34] = local_e8;
            param_1[0x35] = (int)puStack_e4;
            *(longlong *)(param_1 + 0x36) = local_e0;
            local_68._0_4_ = (int)lVar41;
            local_68._4_4_ = (uint *)((ulonglong)lVar41 >> 0x20);
            local_e8 = (int)local_68;
            puStack_e4 = local_68._4_4_;
            puVar5 = local_68._4_4_;
            local_1c4 = uVar11;
            local_f8 = (int)lVar40;
            local_f4 = iVar23;
            local_f0 = iVar25;
            local_ec = uVar17;
            local_68 = lVar41;
            local_e0 = local_60;
            if (0 < (int)uVar4) goto LAB_0003a3e0;
          }
LAB_0003a144:
          local_68 = lVar41;
          uVar3 = uVar28;
          local_22c = 0;
          avsubtitle_free(&local_f8);
        }
LAB_0003976c:
        uVar10 = uVar3;
        if (-1 < (int)uVar3) {
          uVar10 = param_2;
        }
        if (uVar10 != 0) goto LAB_000390cc;
        av_packet_unref(iVar7);
        iVar23 = param_1[4];
        uVar10 = 1;
LAB_00039790:
        if (iVar23 == 0) goto LAB_0003aa9c;
        if (((param_3 ^ 1) & uVar10) == 0) goto LAB_000391c0;
        local_120 = 1;
        local_11c = 1000000;
        uVar42 = av_rescale_q_rnd(param_1[0x16],param_1[0x17],1,1000000,
                                  *(undefined4 *)(param_1[1] + 0xc),
                                  *(undefined4 *)(param_1[1] + 0x10),0x2005);
        uVar22 = (undefined4)((ulonglong)uVar42 >> 0x20);
        iVar7 = param_1[0x43];
        if (iVar7 < 1) goto LAB_000391c0;
        iVar23 = 0;
        uVar6 = uVar22;
        goto LAB_00039828;
      }
      iVar23 = param_1[8];
      local_22c = 1;
      if (uVar2 == 0) {
        FUN_000339d0(0);
        iVar29 = iVar7;
        local_1c4 = uVar2;
        if (iVar7 == 0) goto LAB_00039380;
        uVar3 = avcodec_send_packet(iVar25,iVar7);
        if (((uint)(uVar3 != 0xdfb9b0bb) & uVar3 >> 0x1f) == 0) goto LAB_00039380;
        FUN_000339d0(DAT_00039154 + 0x395ec,*param_1,*(undefined4 *)param_1[1]);
LAB_000395ec:
        FUN_000337e4(param_1,local_1c4,uVar3);
LAB_000390cc:
        av_packet_unref(iVar7);
        if (uVar3 == 0xdfb9b0bb) {
          iVar23 = param_1[4];
          uVar10 = 1;
          uVar2 = 0;
        }
        else {
          if (-1 < (int)uVar3) goto LAB_000390e8;
          iVar7 = *param_1;
          uVar22 = *(undefined4 *)param_1[1];
          if (local_22c == 0) {
            av_log(0,8,DAT_0003afec + 0x3ac3c,iVar7,uVar22);
            goto LAB_0003ac40;
          }
          local_78 = 0;
          uStack_70 = 0;
          local_68 = local_78;
          local_60 = local_78;
          local_58 = local_78;
          local_50 = local_78;
          local_48 = local_78;
          local_40 = local_78;
          av_strerror(uVar3,&local_78,0x40);
          av_log(0,0x10,DAT_0003aff0 + 0x3ac94,iVar7,uVar22,&local_78);
          if (**(int **)(iVar13 + DAT_0003aff4) != 0) goto LAB_0003ac40;
          iVar23 = param_1[4];
          uVar10 = 0;
          uVar2 = local_22c;
        }
LAB_000391ac:
        if (param_2 == 0) goto LAB_00039790;
        if (iVar23 != 0) goto LAB_000391c0;
        iVar25 = param_1[6];
        goto LAB_00039cc0;
      }
      FUN_000339d0(0);
      local_1c4 = 0;
      iVar29 = 0;
LAB_00039380:
      uVar3 = avcodec_receive_frame(iVar25,iVar23);
      if (((uint)(uVar3 != 0xfffffff5) & uVar3 >> 0x1f) != 0) {
        FUN_000339d0(iVar8,*param_1,*(undefined4 *)param_1[1]);
        if (uVar3 == 0xdfb9b0bb) {
          uVar2 = 0;
          av_packet_unref(iVar7);
          iVar23 = param_1[4];
          uVar10 = 1;
          goto LAB_000391ac;
        }
        goto LAB_000395ec;
      }
      uVar22 = *(undefined4 *)param_1[1];
      if ((int)uVar3 < 0) {
        FUN_000339d0(DAT_00039170 + 0x39a18,*param_1,uVar22);
      }
      else {
        local_1c4 = 1;
        FUN_000339d0(DAT_00039150 + 0x393c8,*param_1,uVar22);
      }
      if (*(int *)(iVar25 + 0x130) < 1) {
        local_22c = 0;
        av_log(iVar25,0x10,DAT_0003afbc + 0x3a1b4);
        uVar3 = local_208;
        goto LAB_000395ec;
      }
      FUN_000337e4(param_1,local_1c4,0);
      if (local_1c4 != 0) {
        iVar18 = *(int *)(iVar23 + 0x4c);
        uVar2 = param_1[0x52];
        iVar14 = *(int *)(iVar25 + 0x130);
        uVar39 = VectorShiftRight(CONCAT44(iVar18,iVar18),0x20);
        uVar35 = VectorAdd(*(undefined8 *)(param_1 + 0x54),uVar39,8);
        param_1[0x52] = uVar2 + 1;
        param_1[0x53] = param_1[0x53] + (uint)(0xfffffffe < uVar2);
        *(undefined8 *)(param_1 + 0x54) = uVar35;
        lVar41 = FUN_0003f794((int)((longlong)iVar18 * 1000000),
                              (int)((ulonglong)((longlong)iVar18 * 1000000) >> 0x20),iVar14,
                              iVar14 >> 0x1f);
        uVar35 = VectorAdd(*(undefined8 *)(param_1 + 0x14),lVar41,8);
        iVar25 = *(int *)(iVar23 + 0x68);
        iVar9 = *(int *)(iVar23 + 0x6c);
        local_248 = *(undefined8 *)(iVar23 + 0x68);
        *(undefined8 *)(param_1 + 0x14) = uVar35;
        *(longlong *)(param_1 + 0xe) = lVar41 + *(longlong *)(param_1 + 0xe);
        if (iVar9 == -0x80000000 && iVar25 == 0) {
          if (iVar29 != 0) {
            piVar15 = (int *)(iVar29 + 8);
            iVar25 = *(int *)(iVar29 + 0xc);
            local_248 = *(undefined8 *)piVar15;
            local_220 = *(undefined8 *)piVar15;
            if (iVar25 == -0x80000000 && *piVar15 == 0) {
              iVar25 = param_1[0x13];
              local_248 = *(undefined8 *)(param_1 + 0x12);
              local_220 = 0x8000000000000000;
              *(int *)(iVar23 + 0x68) = param_1[0x12];
              *(int *)(iVar23 + 0x6c) = iVar25;
              local_78 = 0xf424000000001;
            }
            else {
              iVar9 = param_1[1];
              *(int *)(iVar23 + 0x68) = *piVar15;
              *(int *)(iVar23 + 0x6c) = iVar25;
              local_78 = *(longlong *)(iVar9 + 0xc);
            }
            goto LAB_000394ac;
          }
          iVar25 = param_1[0x13];
          local_248 = *(undefined8 *)(param_1 + 0x12);
          *(int *)(iVar23 + 0x68) = param_1[0x12];
          *(int *)(iVar23 + 0x6c) = iVar25;
          local_78 = 0xf424000000001;
LAB_000394fc:
          if (local_248._4_4_ != -0x80000000 || (int)local_248 != 0) goto LAB_00039d44;
        }
        else {
          local_78 = *(longlong *)(param_1[1] + 0xc);
          if (iVar29 != 0) {
            local_220 = *(undefined8 *)(iVar29 + 8);
LAB_000394ac:
            uVar2 = *(uint *)(iVar29 + 0x30);
            iVar25 = *(int *)(iVar29 + 0x34);
            if (uVar2 != 0 || iVar25 != 0) {
              uVar10 = param_1[10];
              if (((param_1[0xb] != -0x80000000 || uVar10 != 0) &&
                  (local_220._4_4_ != -0x80000000 || (uint)local_220 != 0)) &&
                 (iVar29 = local_220._4_4_ - (param_1[0xb] + (uint)((uint)local_220 < uVar10)),
                 bVar34 = uVar2 < (uint)local_220 - uVar10,
                 (int)(iVar25 - (iVar29 + (uint)bVar34)) < 0 !=
                 (SBORROW4(iVar25,iVar29) != SBORROW4(iVar25 - iVar29,(uint)bVar34)))) {
                param_1[0x1a] = 0;
                param_1[0x1b] = -0x80000000;
              }
            }
            param_1[10] = (uint)local_220;
            param_1[0xb] = local_220._4_4_;
            goto LAB_000394fc;
          }
LAB_00039d44:
          local_180 = 1;
          local_178 = 1;
          local_17c = iVar14;
          local_174 = iVar14;
          uVar35 = av_rescale_delta((undefined4)local_78,local_78._4_4_,(int)local_248,
                                    local_248._4_4_,1,iVar14,iVar18,param_1 + 0x1a,1,iVar14);
          uVar39 = VectorShiftRight(CONCAT44(*(undefined4 *)(iVar23 + 0x4c),
                                             *(undefined4 *)(iVar23 + 0x4c)),0x20);
          *(undefined8 *)(iVar23 + 0x68) = uVar35;
        }
        *(undefined8 *)(param_1 + 0x22) = uVar39;
        uVar3 = FUN_000387fc(param_1 + 0x42,param_1 + 0x43,iVar23);
        av_frame_unref(iVar23);
        uVar3 = uVar3 & (int)uVar3 >> 0x1f;
        local_22c = 0;
        goto LAB_000390cc;
      }
      av_packet_unref(iVar7);
LAB_000390e8:
      iVar23 = param_1[4];
      if (local_1c4 == 0) {
        uVar10 = 0;
        uVar2 = 1;
        goto LAB_000391ac;
      }
      param_1[0x58] = 1;
      if (param_2 == 0) {
        uVar2 = 1;
        uVar10 = 0;
        goto LAB_00039790;
      }
      if (iVar23 == 0) goto LAB_00039cb0;
      iVar25 = param_1[6];
      uVar2 = 1;
      lVar41 = *(longlong *)(param_1 + 0xe);
      iVar29 = *(int *)(iVar25 + 8);
    } while( true );
  }
  uVar2 = 1;
LAB_00039cc0:
  iVar7 = *(int *)(iVar25 + 8);
  plVar33 = (longlong *)(param_1 + 0xe);
  iVar23 = (int)*plVar33;
  iVar29 = param_1[0xf];
  lVar40 = *plVar33;
  lVar41 = *plVar33;
  param_1[0x12] = iVar23;
  param_1[0x13] = iVar29;
  if (iVar7 == 0) {
    iVar7 = param_1[0x28];
    if (iVar7 == 0) {
      if (*(int *)(param_2 + 0x30) == 0 && *(int *)(param_2 + 0x34) == 0) {
        if (*(int *)(iVar25 + 0x270) != 0) {
          iVar7 = av_stream_get_parser(param_1[1]);
          if (iVar7 == 0) {
            iVar23 = param_1[6];
            iVar7 = *(int *)(iVar23 + 0x54);
          }
          else {
            iVar7 = av_stream_get_parser(param_1[1]);
            iVar23 = param_1[6];
            iVar7 = *(int *)(iVar7 + 0x24) + 1;
          }
          uVar1 = (longlong)iVar7 * (longlong)*(int *)(iVar23 + 0x274);
          lVar41 = (uVar1 & 0xffffffff) * 1000000;
          FUN_0003f794((int)lVar41,(int)(uVar1 >> 0x20) * 1000000 + (int)((ulonglong)lVar41 >> 0x20)
                       ,*(int *)(iVar23 + 0x270),*(int *)(iVar23 + 0x270) >> 0x1f);
          lVar40 = FUN_0003f794();
          iVar23 = param_1[0x12];
          iVar29 = param_1[0x13];
          lVar41 = lVar40 + *(longlong *)(param_1 + 0xe);
          *(longlong *)(param_1 + 0xe) = lVar40 + *(longlong *)(param_1 + 0xe);
        }
      }
      else {
        local_194 = 1000000;
        local_198 = 1;
        lVar43 = av_rescale_q(*(int *)(param_2 + 0x30),*(int *)(param_2 + 0x34),
                              *(undefined4 *)(param_1[1] + 0xc),*(undefined4 *)(param_1[1] + 0x10),1
                              ,1000000);
        lVar41 = lVar43 + lVar41;
        *(longlong *)(param_1 + 0xe) = lVar43 + lVar40;
      }
    }
    else {
      iVar25 = param_1[0x29];
      local_f8 = 1;
      local_f4 = 1000000;
      local_190 = iVar25;
      local_18c = iVar7;
      lVar41 = av_rescale_q(iVar23,iVar29,1,1000000,iVar25,iVar7);
      local_188 = iVar25;
      local_184 = iVar7;
      lVar41 = av_rescale_q((int)(lVar41 + 1),(int)((ulonglong)(lVar41 + 1) >> 0x20),iVar25,iVar7,
                            local_f8,local_f4);
      *(longlong *)(param_1 + 0xe) = lVar41;
    }
  }
  else if (iVar7 == 1) {
    iVar8 = *(int *)(iVar25 + 0x130);
    if (iVar8 == 0) {
      local_19c = 1000000;
      local_1a0 = iVar7;
      lVar43 = av_rescale_q(*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34),
                            *(undefined4 *)(param_1[1] + 0xc),*(undefined4 *)(param_1[1] + 0x10),1,
                            1000000);
      lVar41 = lVar43 + lVar41;
      *(longlong *)(param_1 + 0xe) = lVar43 + lVar40;
    }
    else {
      lVar40 = (longlong)*(int *)(iVar25 + 0x13c) * 1000000;
      lVar40 = FUN_0003f794((int)lVar40,(int)((ulonglong)lVar40 >> 0x20),iVar8,iVar8 >> 0x1f);
      lVar41 = lVar40 + lVar41;
      *(longlong *)(param_1 + 0xe) = lVar41;
    }
  }
  param_1[0x16] = iVar23;
  param_1[0x17] = iVar29;
  *(longlong *)(param_1 + 0x14) = lVar41;
LAB_000391c0:
  piVar15 = *(int **)(iVar13 + DAT_00039140);
  iVar7 = *piVar15;
  if (iVar7 < 1) {
    return uVar2;
  }
  iVar23 = 0;
  piVar24 = *(int **)(iVar13 + DAT_00039144);
  piVar30 = *(int **)(iVar13 + DAT_00039148);
  do {
    piVar19 = *(int **)(*piVar24 + iVar23 * 4);
    piVar20 = *(int **)(*piVar30 + *param_1 * 4);
    if ((*(int *)param_1[1] + piVar20[3] == piVar19[2]) && ((piVar19[0x57] & 2U) == 0)) {
      iVar25 = *(int *)(**(int **)(iVar13 + DAT_0003914c) + *piVar19 * 4);
      uVar10 = *(uint *)(iVar25 + 0x20);
      iVar29 = *(int *)(iVar25 + 0x24);
      local_238 = *(undefined8 *)(iVar25 + 0x20);
      if (iVar29 == -0x80000000 && uVar10 == 0) {
        if (piVar19[4] == 0) {
          local_238 = 0;
          goto LAB_00039298;
        }
      }
      else {
        iVar8 = param_1[0x17];
        if (((int)(iVar8 - (iVar29 + (uint)((uint)param_1[0x16] < uVar10))) < 0 ==
             (SBORROW4(iVar8,iVar29) !=
             SBORROW4(iVar8 - iVar29,(uint)((uint)param_1[0x16] < uVar10)))) && (piVar19[4] == 0)) {
LAB_00039298:
          piVar16 = piVar19 + 0x10;
          local_100 = 1;
          local_fc = 1000000;
          uVar42 = av_rescale_q((uint)local_238,local_238._4_4_,1,1000000,*piVar16);
          iVar7 = (int)((ulonglong)uVar42 >> 0x20);
          uVar10 = (uint)uVar42;
          iVar29 = piVar19[0x1c];
          av_packet_unref(iVar29);
          if (param_2 == 0) {
            FUN_00032030(iVar25,iVar29,piVar19,1);
            iVar7 = *piVar15;
          }
          else {
            if (piVar19[0x5d] == 0) {
              if (((*(uint *)(param_2 + 0x24) & 1) != 0) || (piVar19[0x5e] != 0)) {
                if (piVar19[0x5f] != 0) goto LAB_00039ab0;
                if (**(int **)(iVar13 + DAT_00039178) == 0) {
LAB_00039a44:
                  uVar26 = (uint)local_238;
                  iVar8 = local_238._4_4_;
                }
                else {
                  uVar3 = piVar20[0x12];
                  if (piVar20[0x13] == -0x80000000 && uVar3 == 0) goto LAB_00039a44;
                  uVar26 = uVar3 + piVar20[0xe];
                  iVar8 = piVar20[0x13] + piVar20[0xf] + (uint)CARRY4(uVar3,piVar20[0xe]);
                  if ((int)(iVar8 - (local_238._4_4_ + (uint)(uVar26 < (uint)local_238))) < 0 !=
                      (SBORROW4(iVar8,local_238._4_4_) !=
                      SBORROW4(iVar8 - local_238._4_4_,(uint)(uVar26 < (uint)local_238))))
                  goto LAB_00039a44;
                }
                uVar3 = *(uint *)(param_2 + 8);
                iVar9 = *(int *)(param_2 + 0xc);
                if (iVar9 == -0x80000000 && uVar3 == 0) {
                  iVar9 = param_1[0x17];
                  bVar34 = (int)(iVar9 - (iVar8 + (uint)((uint)param_1[0x16] < uVar26))) < 0 !=
                           (SBORROW4(iVar9,iVar8) !=
                           SBORROW4(iVar9 - iVar8,(uint)((uint)param_1[0x16] < uVar26)));
                }
                else {
                  local_104 = 1000000;
                  local_108 = 1;
                  uVar42 = av_rescale_q(uVar26,iVar8,1,1000000,*(undefined4 *)(param_1[1] + 0xc));
                  iVar8 = (int)((ulonglong)uVar42 >> 0x20);
                  bVar34 = uVar3 < (uint)uVar42;
                  if ((int)(iVar9 - (iVar8 + (uint)bVar34)) < 0 ==
                      (SBORROW4(iVar9,iVar8) != SBORROW4(iVar9 - iVar8,(uint)bVar34))) {
                    bVar34 = false;
                  }
                  else {
                    bVar34 = true;
                  }
                }
                if (!bVar34) goto LAB_00039ab0;
              }
            }
            else {
LAB_00039ab0:
              uVar3 = *(uint *)(iVar25 + 0x18);
              if (*(int *)(iVar25 + 0x1c) == 0x7fffffff && uVar3 == 0xffffffff) {
LAB_00039af0:
                uVar3 = piVar20[0x14];
                iVar8 = piVar20[0x15];
                if (iVar8 != 0x7fffffff || uVar3 != 0xffffffff) {
                  if (**(int **)(iVar13 + DAT_00039178) != 0) {
                    uVar26 = piVar20[0x12];
                    iVar9 = piVar20[0x13];
                    if (iVar9 == -0x80000000 && uVar26 == 0) {
                      iVar9 = 0;
                      uVar26 = 0;
                    }
                    if (**(int **)(iVar13 + DAT_0003917c) == 0) {
                      uVar11 = *(uint *)(*piVar20 + 0x28);
                      bVar34 = CARRY4(uVar26,uVar11);
                      uVar26 = uVar26 + uVar11;
                      iVar9 = iVar9 + *(int *)(*piVar20 + 0x2c) + (uint)bVar34;
                    }
                    bVar34 = CARRY4(uVar26,uVar3);
                    uVar3 = uVar26 + uVar3;
                    iVar8 = iVar9 + iVar8 + (uint)bVar34;
                  }
                  iVar9 = param_1[0x17];
                  if ((int)(iVar9 - (iVar8 + (uint)((uint)param_1[0x16] < uVar3))) < 0 ==
                      (SBORROW4(iVar9,iVar8) !=
                      SBORROW4(iVar9 - iVar8,(uint)((uint)param_1[0x16] < uVar3))))
                  goto LAB_00039cf0;
                }
                iVar8 = av_packet_ref(iVar29,param_2);
                if (iVar8 < 0) {
LAB_0003ac40:
                    /* WARNING: Subroutine does not return */
                  FUN_0002b538(1);
                }
                if (*(int *)(param_2 + 0xc) != -0x80000000 || *(int *)(param_2 + 8) != 0) {
                  uVar42 = av_rescale_q(*(int *)(param_2 + 8),*(int *)(param_2 + 0xc),
                                        *(undefined4 *)(param_1[1] + 0xc),
                                        *(undefined4 *)(param_1[1] + 0x10),*piVar16);
                  *(uint *)(iVar29 + 8) = (uint)uVar42 - uVar10;
                  *(uint *)(iVar29 + 0xc) =
                       (int)((ulonglong)uVar42 >> 0x20) - (iVar7 + (uint)((uint)uVar42 < uVar10));
                }
                if (*(int *)(param_2 + 0x14) == -0x80000000 && *(int *)(param_2 + 0x10) == 0) {
                  local_10c = 1000000;
                  local_110 = 1;
                  uVar42 = av_rescale_q(param_1[0x12],param_1[0x13],1,1000000,*piVar16);
                  puVar21 = (undefined4 *)(param_1[1] + 0xc);
                  iVar8 = (uint)uVar42 - uVar10;
                  iVar7 = (int)((ulonglong)uVar42 >> 0x20) - (iVar7 + (uint)((uint)uVar42 < uVar10))
                  ;
                }
                else if (**(int **)(piVar19[3] + 0xb4) == 1) {
                  iVar8 = av_get_audio_frame_duration(param_1[6],*(undefined4 *)(param_2 + 0x1c));
                  local_114 = *(undefined4 *)(param_1[6] + 0x130);
                  if (iVar8 == 0) {
                    iVar8 = *(int *)(param_1[6] + 0x13c);
                  }
                  local_118 = 1;
                  uVar42 = av_rescale_delta(*(undefined4 *)(param_1[1] + 0xc),
                                            *(undefined4 *)(param_1[1] + 0x10),
                                            *(undefined4 *)(param_2 + 0x10),
                                            *(undefined4 *)(param_2 + 0x14),1,local_114,iVar8,
                                            param_1 + 0x1a,*piVar16,piVar19[0x11]);
                  puVar21 = (undefined4 *)(param_1[1] + 0xc);
                  iVar8 = (uint)uVar42 - uVar10;
                  iVar7 = (int)((ulonglong)uVar42 >> 0x20) - (iVar7 + (uint)((uint)uVar42 < uVar10))
                  ;
                  *(int *)(iVar29 + 8) = iVar8;
                  *(int *)(iVar29 + 0xc) = iVar7;
                }
                else {
                  puVar21 = (undefined4 *)(param_1[1] + 0xc);
                  uVar42 = av_rescale_q(*(int *)(param_2 + 0x10),*(int *)(param_2 + 0x14),*puVar21,
                                        *(undefined4 *)(param_1[1] + 0x10),*piVar16);
                  iVar8 = (uint)uVar42 - uVar10;
                  iVar7 = (int)((ulonglong)uVar42 >> 0x20) - (iVar7 + (uint)((uint)uVar42 < uVar10))
                  ;
                }
                iVar9 = *piVar16;
                *(int *)(iVar29 + 0x10) = iVar8;
                *(int *)(iVar29 + 0x14) = iVar7;
                uVar39 = av_rescale_q(*(undefined4 *)(param_2 + 0x30),
                                      *(undefined4 *)(param_2 + 0x34),*puVar21,puVar21[1],iVar9);
                uVar42 = VectorAdd(*(undefined8 *)(piVar19 + 10),uVar39,8);
                *(undefined8 *)(iVar29 + 0x30) = uVar39;
                *(undefined8 *)(piVar19 + 10) = uVar42;
                FUN_000338f8(iVar25,iVar29,piVar19);
                iVar7 = *piVar15;
                piVar19[0x5d] = 1;
                goto LAB_00039c94;
              }
              iVar8 = local_238._4_4_ + *(int *)(iVar25 + 0x1c) +
                      (uint)CARRY4((uint)local_238,uVar3);
              iVar9 = param_1[0x17];
              bVar34 = (uint)param_1[0x16] < (uint)local_238 + uVar3;
              if ((int)(iVar9 - (iVar8 + (uint)bVar34)) < 0 !=
                  (SBORROW4(iVar9,iVar8) != SBORROW4(iVar9 - iVar8,(uint)bVar34)))
              goto LAB_00039af0;
LAB_00039cf0:
              FUN_00031658(piVar19);
            }
            iVar7 = *piVar15;
          }
        }
      }
    }
LAB_00039c94:
    iVar23 = iVar23 + 1;
    if (iVar7 <= iVar23) {
      return uVar2;
    }
  } while( true );
LAB_00039828:
  do {
    piVar15 = *(int **)(param_1[0x42] + iVar23 * 4);
    piVar15[0x14] = 1;
    if (*piVar15 == 0) {
      if (piVar15[6] < 0) {
        iVar29 = *(int *)(*(int *)(piVar15[1] + 4) + 0xb4);
        iVar8 = *(int *)(iVar29 + 0x6c);
        iVar7 = *(int *)(iVar29 + 0x38);
        iVar25 = *(int *)(iVar29 + 0x3c);
        piVar15[6] = *(int *)(iVar29 + 0x14);
        iVar9 = *(int *)(iVar29 + 0x30);
        piVar15[0xb] = iVar8;
        iVar8 = *(int *)(iVar29 + 0x34);
        piVar15[7] = iVar9;
        piVar15[8] = iVar8;
        piVar15[9] = iVar7;
        piVar15[10] = iVar25;
        uVar39 = av_channel_layout_copy(piVar15 + 0xc,iVar29 + 0x88);
        uVar6 = (undefined4)((ulonglong)uVar39 >> 0x20);
        if ((int)uVar39 < 0) {
LAB_000398dc:
          iVar7 = DAT_00039168 + 0x398e8;
LAB_000398e4:
          av_log(0,8,iVar7);
                    /* WARNING: Subroutine does not return */
          FUN_0002b538(1);
        }
        if ((piVar15[6] < 0) && ((uint)piVar15[4] < 2)) {
          av_log(0,0x10,DAT_00039164 + 0x398d0,*(undefined4 *)piVar15[1],
                 *(undefined4 *)((undefined4 *)piVar15[1])[1]);
          goto LAB_000398dc;
        }
        goto LAB_00039818;
      }
    }
    else {
      uVar39 = av_buffersrc_close(*piVar15,uVar6,(int)uVar42,uVar22,4);
      uVar6 = (undefined4)((ulonglong)uVar39 >> 0x20);
      if ((int)uVar39 < 0) goto LAB_000398dc;
LAB_00039818:
      iVar7 = param_1[0x43];
    }
    iVar23 = iVar23 + 1;
  } while (iVar23 < iVar7);
  if (param_1[4] != 0) goto LAB_000391c0;
LAB_0003aa9c:
  uVar2 = 0;
  goto LAB_000391c0;
LAB_00039cb0:
  iVar25 = param_1[6];
  uVar2 = 1;
  goto LAB_00039cc0;
}



/* ===== FUN_0003b014 @ 0003b014 size=2968 ===== */

int FUN_0003b014(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *__s2;
  int iVar6;
  int iVar7;
  int extraout_r3;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  undefined4 *puVar11;
  char *__s1;
  int iVar12;
  int *piVar13;
  int *piVar14;
  undefined4 uVar15;
  int iVar16;
  char *__s2_00;
  undefined4 *puVar17;
  int iVar18;
  int *piVar19;
  int *piVar20;
  char *__s1_00;
  int *piVar21;
  int iVar22;
  undefined4 uVar23;
  bool bVar24;
  undefined8 uVar25;
  int *local_880;
  int local_874;
  int *local_870;
  undefined4 local_868;
  undefined4 uStack_864;
  undefined4 uStack_860;
  undefined4 uStack_85c;
  undefined4 local_858;
  undefined4 uStack_854;
  undefined4 local_850;
  undefined4 uStack_84c;
  undefined4 local_848;
  undefined4 uStack_844;
  undefined4 local_840;
  undefined4 uStack_83c;
  undefined4 local_838;
  undefined4 uStack_834;
  undefined4 local_830;
  undefined4 uStack_82c;
  char acStack_828 [1024];
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 local_410;
  undefined4 uStack_40c;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 local_400;
  undefined4 uStack_3fc;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 local_3f0;
  undefined4 uStack_3ec;
  
  iVar6 = DAT_0003bbac + 0x3b030;
  memset(acStack_828,0,0x400);
  piVar20 = *(int **)(iVar6 + DAT_0003bbb0);
  iVar18 = *piVar20;
  if (iVar18 < 1) {
    local_880 = *(int **)(iVar6 + DAT_0003bbb4);
  }
  else {
    local_880 = *(int **)(iVar6 + DAT_0003bbb4);
    iVar10 = **(int **)(iVar6 + DAT_0003bbb8);
    iVar16 = *local_880 + -1;
    piVar14 = (int *)**(int **)(iVar6 + DAT_0003bbbc);
    piVar21 = piVar14;
    do {
      piVar19 = piVar21 + 1;
      iVar22 = *piVar21;
      if (0 < *(int *)(iVar22 + 0x20)) {
        piVar13 = *(int **)(iVar22 + 0x1c) + *(int *)(iVar22 + 0x20);
        piVar21 = *(int **)(iVar22 + 0x1c);
        do {
          while( true ) {
            piVar3 = piVar21 + 1;
            iVar12 = *(int *)(*piVar21 + 4);
            piVar21 = piVar3;
            if (((iVar12 == 0) || (-1 < *(int *)(iVar12 + 8))) || (*(int *)(iVar22 + 0x18) != 1))
            break;
            iVar1 = iVar16;
            if (-1 < iVar16) {
              iVar7 = *(int *)(iVar10 + iVar16 * 4);
              while ((*(int *)(**(int **)(iVar22 + 0x14) + 4) != iVar7 &&
                     (bVar24 = iVar1 != 0, iVar1 = iVar1 + -1, bVar24))) {
                iVar7 = *(int *)(iVar10 + iVar1 * 4);
              }
            }
            *(int *)(iVar12 + 8) = iVar1;
            if (piVar13 == piVar3) goto LAB_0003b124;
          }
        } while (piVar13 != piVar3);
      }
LAB_0003b124:
      piVar21 = piVar19;
    } while (piVar14 + iVar18 != piVar19);
  }
  piVar21 = *(int **)(iVar6 + DAT_0003bbc0);
  iVar18 = *piVar21;
  if (0 < iVar18) {
    iVar10 = 0;
    piVar14 = *(int **)(iVar6 + DAT_0003bbc4);
    do {
      while (((iVar16 = *(int *)(*piVar14 + iVar10 * 4), *(float *)(iVar16 + 100) != 0.0 ||
              (*(int *)(iVar16 + 0x60) != 0)) && (0 < *(int *)(iVar16 + 0x58)))) {
        iVar18 = 0;
        piVar19 = *(int **)(iVar6 + DAT_0003bbb8);
        do {
          iVar22 = iVar18 + *(int *)(iVar16 + 0xc);
          iVar18 = iVar18 + 1;
          iVar12 = *(int *)(*piVar19 + iVar22 * 4);
          uVar25 = av_gettime_relative();
          iVar22 = *(int *)(iVar16 + 0x58);
          *(undefined8 *)(iVar12 + 0x30) = uVar25;
        } while (iVar18 < iVar22);
        iVar18 = *piVar21;
        iVar10 = iVar10 + 1;
        if (iVar18 <= iVar10) goto LAB_0003b1dc;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar18);
  }
LAB_0003b1dc:
  iVar18 = *local_880;
  if (0 < iVar18) {
    iVar10 = 0;
    piVar14 = *(int **)(iVar6 + DAT_0003bbb8);
    iVar22 = DAT_0003bbc8 + 0x3b214;
    iVar16 = DAT_0003bbcc + 0x3b218;
    do {
      puVar11 = *(undefined4 **)(*piVar14 + iVar10 * 4);
      uVar4 = puVar11[4];
      if (uVar4 != 0) {
        iVar12 = puVar11[7];
        iVar18 = puVar11[6];
        if (iVar12 == 0) {
          local_874 = -0x16;
          uVar2 = avcodec_get_name();
          snprintf(acStack_828,0x400,(char *)(DAT_0003bc60 + 0x3bb8c),uVar2,*puVar11,
                   *(undefined4 *)puVar11[1]);
        }
        else {
          *(undefined4 **)(iVar18 + 0x20) = puVar11;
          *(int *)(iVar18 + 0x78) = iVar22;
          *(undefined4 *)(iVar18 + 0x240) = 1;
          if ((*(int *)(iVar18 + 0x10) == 0x17001) && ((uVar4 & 1) != 0)) {
            av_dict_set(puVar11 + 0x27,DAT_0003bc20 + 0x3b834,DAT_0003bc1c + 0x3b830,0x10);
            if ((puVar11[4] & 2) != 0) {
              av_log(0,0x18,DAT_0003bc5c + 0x3bb44);
            }
            iVar18 = puVar11[6];
          }
          uVar2 = *(undefined4 *)(puVar11[1] + 0x10);
          *(undefined4 *)(iVar18 + 0x27c) = *(undefined4 *)(puVar11[1] + 0xc);
          *(undefined4 *)(iVar18 + 0x280) = uVar2;
          iVar18 = av_dict_get(puVar11[0x27],iVar16,0);
          if (iVar18 == 0) {
            av_dict_set(puVar11 + 0x27,iVar16,DAT_0003bc34 + 0x3b91c);
          }
          if ((*(uint *)(puVar11[1] + 0x30) & 0x400) == 0) {
            local_874 = FUN_0001a2bc(puVar11);
          }
          else {
            av_dict_set(puVar11 + 0x27,DAT_0003bc2c + 0x3b87c,DAT_0003bc28 + 0x3b878,0);
            local_874 = FUN_0001a2bc(puVar11);
          }
          if (local_874 < 0) {
            uStack_864 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
            uStack_860 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
            uStack_85c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
            uVar2 = *puVar11;
            uVar15 = *(undefined4 *)puVar11[1];
            local_868 = 0;
            local_858 = 0;
            local_850 = 0;
            local_848 = 0;
            local_840 = 0;
            local_838 = 0;
            local_830 = 0;
            uStack_854 = uStack_864;
            uStack_84c = uStack_864;
            uStack_844 = uStack_864;
            uStack_83c = uStack_864;
            uStack_834 = uStack_864;
            uStack_82c = uStack_864;
            av_strerror(local_874,&local_868,0x40);
            snprintf(acStack_828,0x400,(char *)(DAT_0003bc30 + 0x3b8e8),uVar2,uVar15,&local_868);
          }
          else {
            local_874 = avcodec_open2(puVar11[6],iVar12,puVar11 + 0x27);
            if (-1 < local_874) {
              FUN_000361b0(puVar11[0x27]);
              iVar18 = *local_880;
              goto LAB_0003b720;
            }
            if (local_874 == -0x2bb2afa8) {
                    /* WARNING: Subroutine does not return */
              FUN_0002b538(1);
            }
            uStack_424 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
            uStack_420 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
            uStack_41c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
            uVar2 = *puVar11;
            uVar15 = *(undefined4 *)puVar11[1];
            local_428 = 0;
            local_418 = 0;
            local_410 = 0;
            local_408 = 0;
            local_400 = 0;
            local_3f8 = 0;
            local_3f0 = 0;
            uStack_414 = uStack_424;
            uStack_40c = uStack_424;
            uStack_404 = uStack_424;
            uStack_3fc = uStack_424;
            uStack_3f4 = uStack_424;
            uStack_3ec = uStack_424;
            av_strerror(local_874,&local_428,0x40);
            snprintf(acStack_828,0x400,(char *)(DAT_0003bbd0 + 0x3b334),uVar2,uVar15,&local_428);
          }
        }
        local_870 = *(int **)(iVar6 + DAT_0003bbd4);
        piVar21 = piVar14;
        if (0 < *local_870) {
          iVar18 = 0;
          piVar14 = *(int **)(iVar6 + DAT_0003bbd8);
          do {
            iVar10 = iVar18 * 4;
            iVar18 = iVar18 + 1;
            avcodec_close(*(undefined4 *)(*(int *)(*piVar14 + iVar10) + 0x54));
          } while (iVar18 < *local_870);
        }
        goto LAB_0003b388;
      }
LAB_0003b720:
      iVar10 = iVar10 + 1;
      puVar11[0x14] = 0;
      puVar11[0x15] = 0x80000000;
      puVar11[0xe] = 0;
      puVar11[0xf] = 0x80000000;
    } while (iVar10 < iVar18);
  }
  local_870 = *(int **)(iVar6 + DAT_0003bbd4);
  iVar18 = *local_870;
  if (iVar18 < 1) {
    local_874 = 0;
  }
  else {
    iVar10 = 0;
    local_874 = 0;
    piVar14 = *(int **)(iVar6 + DAT_0003bbd8);
    do {
      puVar11 = *(undefined4 **)(*piVar14 + iVar10 * 4);
      if ((puVar11[0x59] != 0) || (1 < *(uint *)(puVar11[0x15] + 8))) {
        memset(&local_428,0,0x400);
        if (puVar11[0x5a] == 0) {
          local_874 = FUN_000361f8(puVar11,0,&local_428);
          if (local_874 < 0) {
            av_log(0,0x10,DAT_0003bc18 + 0x3b808,*puVar11,puVar11[1],&local_428);
            goto LAB_0003b388;
          }
          iVar18 = *local_870;
        }
        else {
          local_874 = 0;
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar18);
  }
  iVar18 = *piVar21;
  if (0 < iVar18) {
    puVar5 = (undefined4 *)**(undefined4 **)(iVar6 + DAT_0003bbc4);
    iVar10 = **(int **)(iVar6 + DAT_0003bbb8);
    puVar11 = puVar5;
    do {
      puVar17 = puVar11 + 1;
      piVar14 = (int *)*puVar11;
      iVar16 = *piVar14;
      iVar22 = *(int *)(iVar16 + 0x68);
      if (iVar22 != 0) {
        piVar13 = *(int **)(iVar16 + 0x6c);
        piVar19 = piVar13;
        do {
          piVar3 = piVar19 + 1;
          iVar16 = *piVar19;
          if (*(int *)(iVar16 + 0x10) == 0) {
LAB_0003ba90:
            uVar2 = 0x30;
          }
          else {
            piVar19 = *(int **)(iVar16 + 0xc);
            iVar12 = piVar14[3];
            uVar2 = 0;
            if (*(int *)(*(int *)(iVar10 + (iVar12 + *piVar19) * 4) + 8) != 0) {
              iVar1 = 0;
              do {
                iVar1 = iVar1 + 1;
                if (iVar1 == *(int *)(iVar16 + 0x10)) goto LAB_0003ba90;
                piVar19 = piVar19 + 1;
                uVar2 = 0;
              } while (*(int *)(*(int *)(iVar10 + (iVar12 + *piVar19) * 4) + 8) != 0);
            }
          }
          *(undefined4 *)(iVar16 + 8) = uVar2;
          piVar19 = piVar3;
        } while (piVar13 + iVar22 != piVar3);
      }
      puVar11 = puVar17;
    } while (puVar5 + iVar18 != puVar17);
  }
  piVar14 = *(int **)(iVar6 + DAT_0003bc54);
  iVar18 = *piVar14;
  if (0 < iVar18) {
    iVar10 = 0;
    piVar19 = *(int **)(iVar6 + DAT_0003bc58);
    do {
      while ((iVar16 = *(int *)(*piVar19 + iVar10 * 4),
             (*(uint *)(*(int *)(iVar16 + 4) + 0x1c) & 0x1000) != 0 &&
             (*(int *)(*(int *)(iVar16 + 8) + 0x18) == 0))) {
        local_874 = FUN_0001b5f0();
        if (local_874 < 0) goto LAB_0003b388;
        iVar18 = *piVar14;
        iVar10 = iVar10 + 1;
        if (iVar18 <= iVar10) goto LAB_0003b388;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar18);
  }
LAB_0003b388:
  av_log(0,0x20,DAT_0003bbdc + 0x3b39c);
  iVar18 = *local_880;
  if (0 < iVar18) {
    iVar12 = 0;
    piVar14 = *(int **)(iVar6 + DAT_0003bbb8);
    iVar22 = DAT_0003bbe0 + 0x3b3cc;
    iVar16 = DAT_0003bbe4 + 0x3b3d0;
    iVar10 = DAT_0003bbe8 + 0x3b3dc;
    piVar19 = (int *)(DAT_0003bbec + 0x3b3e8);
    do {
      puVar11 = *(undefined4 **)(*piVar14 + iVar12 * 4);
      if (0 < (int)puVar11[0x43]) {
        iVar18 = 0;
        do {
          iVar1 = FUN_00017864(*(undefined4 *)(*(int *)(puVar11[0x42] + iVar18 * 4) + 8));
          if (iVar1 == 0) {
            puVar5 = (undefined4 *)puVar11[7];
            if (puVar5 != (undefined4 *)0x0) {
              piVar21 = (int *)*puVar5;
            }
            uVar15 = *(undefined4 *)puVar11[1];
            uVar2 = *(undefined4 *)(*(int *)(puVar11[0x42] + iVar18 * 4) + 0xc);
            if (puVar5 == (undefined4 *)0x0) {
              piVar21 = piVar19;
            }
            piVar13 = piVar21;
            av_log(0,0x20,iVar22,*puVar11,uVar15,piVar21,uVar2);
            iVar1 = *piVar20;
            if (1 < iVar1) {
              av_log(0,0x20,iVar10,**(undefined4 **)(*(int *)(puVar11[0x42] + iVar18 * 4) + 8),
                     uVar15,piVar13,uVar2);
              iVar1 = extraout_r3;
            }
            av_log(0,0x20,iVar16,iVar1,uVar15,piVar13,uVar2);
          }
          iVar18 = iVar18 + 1;
        } while (iVar18 < (int)puVar11[0x43]);
        iVar18 = *local_880;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar18);
  }
  if (0 < *local_870) {
    iVar18 = 0;
    piVar21 = *(int **)(iVar6 + DAT_0003bbd8);
    iVar10 = DAT_0003bbf0 + 0x3b4f4;
    iVar16 = DAT_0003bbf4 + 0x3b4fc;
    pcVar8 = (char *)(DAT_0003bbf8 + 0x3b504);
    pcVar9 = (char *)(DAT_0003bbfc + 0x3b514);
    do {
      while( true ) {
        puVar11 = *(undefined4 **)(*piVar21 + iVar18 * 4);
        if (puVar11[0x5c] == 0) break;
        iVar18 = iVar18 + 1;
        av_log(0,0x20,DAT_0003bc10 + 0x3b6c4,puVar11[0x5c],*puVar11,puVar11[1]);
        if (*local_870 <= iVar18) goto LAB_0003b6dc;
      }
      if ((puVar11[0x4f] == 0) ||
         (iVar22 = FUN_00017864(*(undefined4 *)(puVar11[0x4f] + 8)), iVar22 != 0)) {
        uVar15 = puVar11[1];
        piVar14 = *(int **)(iVar6 + DAT_0003bbb8);
        puVar5 = *(undefined4 **)(*piVar14 + puVar11[2] * 4);
        uVar23 = *puVar11;
        uVar2 = *(undefined4 *)puVar5[1];
        av_log(0,0x20,iVar10,*puVar5,uVar2,uVar23,uVar15);
        puVar5 = (undefined4 *)puVar11[8];
        if (puVar5 != *(undefined4 **)(*piVar14 + puVar11[2] * 4)) {
          uVar2 = *(undefined4 *)puVar5[1];
          av_log(0,0x20,DAT_0003bc00 + 0x3b5b4,*puVar5,uVar2,uVar23,uVar15);
        }
        if (puVar11[0x59] == 0) {
          puVar5 = (undefined4 *)puVar11[0x17];
          puVar11 = *(undefined4 **)(*(int *)(*piVar14 + puVar11[2] * 4) + 0x1c);
          __s1 = pcVar9;
          __s2_00 = pcVar9;
          if (puVar11 != (undefined4 *)0x0) {
            __s1 = (char *)*puVar11;
            iVar22 = avcodec_descriptor_get(puVar11[3]);
            if (iVar22 == 0) {
              __s2_00 = (char *)(DAT_0003bc4c + 0x3b9cc);
            }
            else {
              __s2_00 = *(char **)(iVar22 + 8);
            }
            iVar22 = strcmp(__s1,__s2_00);
            if (iVar22 == 0) {
              __s1 = (char *)(DAT_0003bc04 + 0x3b614);
            }
          }
          __s2 = pcVar8;
          __s1_00 = pcVar8;
          if (puVar5 != (undefined4 *)0x0) {
            __s1_00 = (char *)*puVar5;
            iVar22 = avcodec_descriptor_get(puVar5[3]);
            if (iVar22 == 0) {
              __s2 = (char *)(DAT_0003bc48 + 0x3b9c0);
            }
            else {
              __s2 = *(char **)(iVar22 + 8);
            }
            iVar22 = strcmp(__s1_00,__s2);
            if (iVar22 == 0) {
              __s1_00 = (char *)(DAT_0003bc08 + 0x3b654);
            }
          }
          av_log(0,0x20,DAT_0003bc0c + 0x3b674,__s2_00,__s1,__s2,__s1_00);
        }
        else {
          av_log(0,0x20,DAT_0003bc24 + 0x3b85c,puVar11[0x59],uVar2,uVar23,uVar15);
        }
        av_log(0,0x20,iVar16);
      }
      else {
        av_log(0,0x20,DAT_0003bc38 + 0x3b938,*(undefined4 *)(puVar11[0x4f] + 0xc));
        if (1 < *piVar20) {
          av_log(0,0x20,DAT_0003bc40 + 0x3b998,**(undefined4 **)(puVar11[0x4f] + 8));
        }
        if ((int *)puVar11[0x17] == (int *)0x0) {
          iVar22 = DAT_0003bc44 + 0x3b9ac;
        }
        else {
          iVar22 = *(int *)puVar11[0x17];
        }
        av_log(0,0x20,DAT_0003bc3c + 0x3b978,*puVar11,puVar11[1],iVar22);
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < *local_870);
  }
LAB_0003b6dc:
  if (local_874 == 0) {
    DataMemoryBarrier(0xb);
    *(undefined4 *)(DAT_0003bc14 + 0x3b6fc) = 1;
    DataMemoryBarrier(0xb);
  }
  else {
    av_log(0,0x10,DAT_0003bc50 + 0x3b9e4,acStack_828);
  }
  return local_874;
}



/* ===== FUN_0003bc64 @ 0003bc64 size=12744 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_0003bc64(void)

{
  longlong *plVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  float fVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  void *__dest;
  undefined4 extraout_r1;
  uint uVar15;
  int *extraout_r1_00;
  int *extraout_r1_01;
  int *extraout_r1_02;
  int *extraout_r1_03;
  int iVar16;
  undefined4 uVar17;
  int *extraout_r1_04;
  undefined4 extraout_r1_05;
  undefined4 extraout_r1_06;
  uint uVar18;
  double *pdVar19;
  int iVar20;
  int iVar21;
  int *piVar22;
  int *piVar23;
  int *piVar24;
  int iVar25;
  int iVar26;
  undefined4 *puVar27;
  uint uVar28;
  int iVar29;
  char *pcVar30;
  uint uVar31;
  float *pfVar32;
  int *piVar33;
  int *piVar34;
  int *piVar35;
  int *piVar36;
  undefined4 uVar37;
  int iVar38;
  undefined4 *puVar39;
  int *piVar40;
  uint uVar41;
  bool bVar42;
  bool bVar43;
  bool bVar44;
  uint in_fpscr;
  float fVar45;
  float fVar46;
  undefined1 in_q4 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  undefined8 uVar50;
  double dVar51;
  undefined8 uVar52;
  longlong lVar53;
  longlong lVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined4 *local_87c;
  int *local_878;
  int iStack_874;
  int *local_864;
  uint local_860;
  int iStack_85c;
  int iStack_854;
  int *local_84c;
  uint local_844;
  undefined4 *local_818;
  int local_804;
  undefined4 local_800;
  undefined4 local_7fc;
  undefined4 local_7f8;
  undefined4 local_7f4;
  undefined4 local_7f0;
  undefined4 local_7ec;
  undefined4 local_7e8;
  undefined4 local_7e4;
  undefined4 local_7e0;
  undefined4 local_7dc;
  undefined4 local_7d8;
  undefined4 local_7d4;
  undefined4 local_7d0;
  undefined4 local_7cc;
  undefined4 local_7c8;
  undefined4 local_7c4;
  undefined4 local_7c0;
  undefined4 local_7bc;
  undefined4 local_7b8;
  undefined4 local_7b4;
  undefined4 local_7b0;
  undefined4 local_7ac;
  undefined4 local_7a8;
  undefined4 local_7a4;
  undefined4 local_7a0;
  undefined4 local_79c;
  undefined4 local_798;
  undefined4 local_794;
  undefined4 local_790;
  undefined4 local_78c;
  int local_788;
  int local_784;
  int local_780;
  int local_77c;
  ulonglong local_778;
  undefined8 uStack_770;
  ulonglong local_768;
  ulonglong local_760;
  undefined4 local_758;
  undefined4 uStack_754;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  undefined4 local_748;
  undefined4 uStack_744;
  undefined4 local_740;
  undefined4 uStack_73c;
  undefined4 local_738;
  undefined4 uStack_734;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  undefined4 local_728;
  undefined4 uStack_724;
  undefined4 local_720;
  undefined4 uStack_71c;
  undefined4 local_718;
  undefined4 uStack_714;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  undefined4 local_708;
  undefined4 uStack_704;
  undefined4 local_700;
  undefined4 uStack_6fc;
  undefined4 local_6f8;
  undefined4 uStack_6f4;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  undefined4 local_6e8;
  undefined4 uStack_6e4;
  undefined4 local_6e0;
  undefined4 uStack_6dc;
  undefined4 local_6d8;
  undefined4 uStack_6d4;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  undefined4 local_6c8;
  undefined4 uStack_6c4;
  undefined4 local_6c0;
  undefined4 uStack_6bc;
  undefined4 local_6b8;
  undefined4 uStack_6b4;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  undefined4 local_6a8;
  undefined4 uStack_6a4;
  undefined4 local_6a0;
  undefined4 uStack_69c;
  undefined4 local_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined4 local_688;
  undefined4 uStack_684;
  undefined4 local_680;
  undefined4 uStack_67c;
  ulonglong local_678;
  undefined8 uStack_670;
  ulonglong local_668;
  ulonglong local_660;
  undefined4 local_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined4 local_648;
  undefined4 uStack_644;
  undefined4 local_640;
  undefined4 uStack_63c;
  undefined4 local_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined4 local_628;
  undefined4 uStack_624;
  undefined4 local_620;
  undefined4 uStack_61c;
  undefined4 local_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined4 local_608;
  undefined4 uStack_604;
  undefined4 local_600;
  undefined4 uStack_5fc;
  undefined4 local_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined4 local_5e8;
  undefined4 uStack_5e4;
  undefined4 local_5e0;
  undefined4 uStack_5dc;
  undefined4 local_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined4 local_5c8;
  undefined4 uStack_5c4;
  undefined4 local_5c0;
  undefined4 uStack_5bc;
  undefined4 local_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 local_5a8;
  undefined4 uStack_5a4;
  undefined4 local_5a0;
  undefined4 uStack_59c;
  undefined4 local_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined4 local_588;
  undefined4 uStack_584;
  undefined4 local_580;
  undefined4 uStack_57c;
  undefined4 local_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined4 local_568;
  undefined4 uStack_564;
  undefined4 local_560;
  undefined4 uStack_55c;
  undefined4 local_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 local_548;
  undefined4 uStack_544;
  undefined4 local_540;
  undefined4 uStack_53c;
  undefined4 local_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 local_528;
  undefined4 uStack_524;
  undefined4 local_520;
  undefined4 uStack_51c;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 local_508;
  undefined4 uStack_504;
  undefined4 local_500;
  undefined4 uStack_4fc;
  ulonglong local_4f8;
  undefined8 uStack_4f0;
  ulonglong local_4e8;
  ulonglong local_4e0;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 local_4c0;
  undefined4 uStack_4bc;
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  undefined4 local_4b0;
  undefined4 uStack_4ac;
  undefined4 local_4a8;
  undefined4 uStack_4a4;
  undefined4 local_4a0;
  undefined4 uStack_49c;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 local_460;
  int local_458;
  int iStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 local_448;
  int iStack_444;
  undefined4 local_440;
  int iStack_43c;
  undefined4 local_438;
  int iStack_434;
  undefined4 local_430;
  int iStack_42c;
  undefined4 local_428;
  int iStack_424;
  undefined4 local_420;
  int iStack_41c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  
  uStack_54 = in_q4._0_8_;
  uStack_4c = in_q4._8_8_;
  iVar7 = FUN_0003b014();
  iVar21 = DAT_0003c2b0 + 0x3bc84;
  if (iVar7 < 0) {
    local_864 = *(int **)(iVar21 + DAT_0003dad0);
    piVar22 = *(int **)(iVar21 + DAT_0003dae8);
    goto LAB_0003bd04;
  }
  piVar22 = *(int **)(iVar21 + DAT_0003c2b4);
  if (*piVar22 != 0) {
    av_log(0,0x20,DAT_0003c2c8 + 0x3beb4);
  }
  auVar47._8_8_ = av_gettime_relative();
  local_864 = *(int **)(iVar21 + DAT_0003c2b8);
  auVar47._0_8_ = in_q4._0_8_;
  if (*local_864 < 1) {
    if (*(int *)(DAT_0003ed7c + 0x3edc0) == 0) {
LAB_0003bee0:
      uVar56 = DAT_0003c2a8;
      dVar6 = DAT_0003c2a0;
      piVar33 = *(int **)(iVar21 + DAT_0003c2c0);
LAB_0003bf00:
      av_gettime_relative();
      auVar4._4_8_ = auVar47._8_8_;
      auVar4._0_4_ = extraout_r1;
      auVar4._12_4_ = 0;
      auVar47 = auVar4 << 0x20;
      if ((*piVar22 == 0) || (iVar7 = FUN_00033b14(), -1 < iVar7)) {
        iVar7 = *piVar33;
        if (0 < iVar7) {
          iVar25 = 0;
          piVar9 = *(int **)(iVar21 + DAT_0003c2bc);
          do {
            piVar34 = *(int **)(*piVar9 + iVar25 * 4);
            if (piVar34[0x57] == 0) {
              iVar26 = *(int *)(**(int **)(iVar21 + DAT_0003c2d0) + *piVar34 * 4);
              iVar7 = *(int *)(*(int *)(iVar26 + 8) + 0x10);
              if (iVar7 == 0) {
LAB_0003c17c:
                iVar7 = piVar34[7];
                iVar8 = piVar34[0x19];
                if ((int)(iVar7 - (iVar8 + (uint)((uint)piVar34[6] < (uint)piVar34[0x18]))) < 0 !=
                    (SBORROW4(iVar7,iVar8) !=
                    SBORROW4(iVar7 - iVar8,(uint)((uint)piVar34[6] < (uint)piVar34[0x18]))))
                goto code_r0x0003c190;
                if (*(int *)(*(int *)(iVar26 + 8) + 0x18) != 0) {
                  uVar12 = 0;
                  do {
                    iVar7 = uVar12 + *(int *)(iVar26 + 0x10);
                    uVar12 = uVar12 + 1;
                    FUN_00031658(*(undefined4 *)(*piVar9 + iVar7 * 4));
                  } while (uVar12 < *(uint *)(*(int *)(iVar26 + 8) + 0x18));
                }
              }
              else {
                uVar52 = avio_seek(iVar7,iVar21,0,0,1);
                uVar12 = (uint)((ulonglong)uVar52 >> 0x20);
                bVar43 = *(uint *)(iVar26 + 0x2c) <= uVar12;
                if (uVar12 == *(uint *)(iVar26 + 0x2c)) {
                  bVar43 = *(uint *)(iVar26 + 0x28) <= (uint)uVar52;
                }
                if (!bVar43) goto LAB_0003c17c;
              }
              iVar7 = *piVar33;
            }
            iVar25 = iVar25 + 1;
            if (iVar7 <= iVar25) break;
          } while( true );
        }
        av_log(0,0x28,DAT_0003c2d4 + 0x3bfc4);
      }
      goto LAB_0003bfc4;
    }
    piVar33 = *(int **)(iVar21 + DAT_0003ed88);
  }
  else {
    iVar25 = 0;
    do {
      iVar7 = FUN_00031b48(iVar25);
      if (iVar7 < 0) {
        piVar22 = *(int **)(iVar21 + DAT_0003c2bc);
        goto LAB_0003bd04;
      }
      iVar25 = iVar25 + 1;
    } while (iVar25 < *local_864);
    if (*(int *)(DAT_0003c2cc + 0x3bfc0) == 0) goto LAB_0003bee0;
    piVar33 = *(int **)(iVar21 + DAT_0003ed88);
LAB_0003bfc4:
    if (0 < *local_864) {
      iVar7 = 0;
      piVar22 = *(int **)(iVar21 + DAT_0003c2ec);
      do {
        iVar25 = *(int *)(*piVar22 + iVar7 * 4);
        if ((iVar25 != 0) && (*(int *)(iVar25 + 0x70) != 0)) {
          av_thread_message_queue_set_err_send(*(int *)(iVar25 + 0x70),0xdfb9b0bb);
          while (iVar26 = av_thread_message_queue_recv(*(undefined4 *)(iVar25 + 0x70),&local_458,0),
                -1 < iVar26) {
            av_packet_free(&local_458);
          }
          pthread_join(*(pthread_t *)(iVar25 + 0x74),(void **)0x0);
          *(undefined4 *)(iVar25 + 0x7c) = 1;
          av_thread_message_queue_free(iVar25 + 0x70);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *local_864);
    }
  }
  piVar9 = *(int **)(iVar21 + DAT_0003c2d8);
  iVar7 = *piVar9;
  if (0 < iVar7) {
    iVar25 = 0;
    piVar34 = *(int **)(iVar21 + DAT_0003c2ec);
    piVar22 = *(int **)(iVar21 + DAT_0003c2f8);
    do {
      while (piVar10 = *(int **)(*piVar22 + iVar25 * 4),
            *(int *)(*(int *)(*piVar34 + *piVar10 * 4) + 4) == 0) {
        iVar25 = iVar25 + 1;
        FUN_00038be8(piVar10,0);
        iVar7 = *piVar9;
        if (iVar7 <= iVar25) goto LAB_0003c0c8;
      }
      iVar25 = iVar25 + 1;
    } while (iVar25 < iVar7);
  }
LAB_0003c0c8:
  iVar7 = *piVar33;
  if (0 < iVar7) {
    iVar26 = 0;
    iVar25 = DAT_0003c2dc + 0x3c0f8;
    piVar22 = *(int **)(iVar21 + DAT_0003c2bc);
    do {
      piVar34 = *(int **)(*piVar22 + iVar26 * 4);
      if (piVar34[4] != 0) {
        iVar7 = piVar34[0x15];
        uVar37 = *(undefined4 *)(**(int **)(iVar21 + DAT_0003c2d0) + *piVar34 * 4);
        if (piVar34[0x5a] == 0) {
          iVar8 = *(int *)(piVar34[0x4f] + 8);
          av_log(0,0x18,iVar25,*piVar34,*(undefined4 *)piVar34[3]);
          if ((piVar34[0x4f] != 0) && (*(int *)(iVar8 + 8) == 0)) {
            iVar13 = *(int *)(iVar8 + 0x18);
            if (0 < iVar13) {
              iVar16 = *(int *)(iVar8 + 0x14);
              iVar29 = 0;
              do {
                while (iVar20 = *(int *)(iVar16 + iVar29 * 4), *(int *)(iVar20 + 0x18) < 0) {
                  iVar13 = *(int *)(*(int *)(*(int *)(iVar20 + 4) + 4) + 0xb4);
                  uVar14 = *(undefined4 *)(iVar13 + 0x38);
                  uVar17 = *(undefined4 *)(iVar13 + 0x3c);
                  *(undefined4 *)(iVar20 + 0x2c) = *(undefined4 *)(iVar13 + 0x6c);
                  *(undefined4 *)(iVar20 + 0x18) = *(undefined4 *)(iVar13 + 0x14);
                  *(undefined4 *)(iVar20 + 0x1c) = *(undefined4 *)(iVar13 + 0x30);
                  *(undefined4 *)(iVar20 + 0x20) = *(undefined4 *)(iVar13 + 0x34);
                  *(undefined4 *)(iVar20 + 0x24) = uVar14;
                  *(undefined4 *)(iVar20 + 0x28) = uVar17;
                  iVar13 = av_channel_layout_copy(iVar20 + 0x30,iVar13 + 0x88);
                  if (iVar13 < 0) {
                    iVar7 = DAT_0003dad8 + 0x3de9c;
                    goto LAB_0003de98;
                  }
                  iVar13 = *(int *)(iVar8 + 0x18);
                  iVar29 = iVar29 + 1;
                  iVar16 = *(int *)(iVar8 + 0x14);
                  if (iVar13 <= iVar29) goto LAB_0003de2c;
                }
                iVar29 = iVar29 + 1;
              } while (iVar29 < iVar13);
LAB_0003de2c:
              if (0 < iVar13) {
                piVar10 = (int *)(iVar16 + -4);
                iVar29 = 0;
                do {
                  while( true ) {
                    piVar10 = piVar10 + 1;
                    if (-1 < *(int *)(*piVar10 + 0x18)) break;
                    if (*(uint *)(*piVar10 + 0x10) < 2) goto LAB_0003c100;
                    iVar29 = iVar29 + 1;
                    if (iVar29 == iVar13) goto LAB_0003de74;
                  }
                  iVar29 = iVar29 + 1;
                } while (iVar29 != iVar13);
              }
            }
LAB_0003de74:
            iVar8 = FUN_00017874(iVar8);
            if (iVar8 < 0) {
              iVar7 = DAT_0003ed98 + 0x3efb8;
LAB_0003de98:
              av_log(0,0x10,iVar7);
              goto LAB_0003c174;
            }
            FUN_00031720(piVar34);
          }
          memset(&local_458,0,0x400);
          if ((piVar34[0x5a] == 0) && (iVar8 = FUN_000361f8(piVar34,0,&local_458), iVar8 < 0)) {
            av_log(0,0x10,DAT_0003c2e8 + 0x3c4c8,*piVar34,piVar34[1],&local_458);
                    /* WARNING: Subroutine does not return */
            FUN_0002b538(1);
          }
        }
        if ((*(uint *)(iVar7 + 8) < 2) &&
           (iVar7 = FUN_000348a0(uVar37,piVar34,0), iVar7 != -0x20464f45)) goto LAB_0003c174;
LAB_0003c100:
        iVar7 = *piVar33;
      }
      iVar26 = iVar26 + 1;
    } while (iVar26 < iVar7);
  }
  FUN_000358f4();
  piVar22 = *(int **)(iVar21 + DAT_0003dac4);
  if (0 < *piVar22) {
    iVar7 = 0;
    piVar34 = *(int **)(iVar21 + DAT_0003dac8);
    do {
      while (iVar25 = FUN_0001b828(*(undefined4 *)(*piVar34 + iVar7 * 4)), iVar25 < 0) {
        if (**(int **)(iVar21 + DAT_0003daec) != 0) goto LAB_0003c174;
        iVar7 = iVar7 + 1;
        if (*piVar22 <= iVar7) goto LAB_0003db94;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *piVar22);
  }
LAB_0003db94:
  uVar56 = av_gettime_relative();
  FUN_00032118(1,(int)((ulonglong)uVar56 >> 0x20),auVar47._8_4_,auVar47._12_4_,uVar56);
  iVar7 = *piVar22;
  if (0 < iVar7) {
    auVar47 = (undefined1  [16])0x0;
    iVar25 = 0;
    iVar26 = DAT_0003dacc + 0x3dbd4;
    piVar34 = *(int **)(iVar21 + DAT_0003dac8);
    do {
      while (((iVar8 = *(int *)(*(int *)(*piVar34 + iVar25 * 4) + 8), iVar8 != 0 &&
              (*(int *)(iVar8 + 8) != 0)) && ((*(uint *)(*(int *)(iVar8 + 8) + 0x1c) & 1) == 0))) {
        iVar7 = avio_closep(iVar8 + 0x10);
        if (iVar7 < 0) {
          uVar37 = *(undefined4 *)(iVar8 + 0x20);
          local_498 = auVar47._0_8_;
          uStack_490 = auVar47._8_8_;
          local_488 = local_498;
          local_480 = local_498;
          local_478 = local_498;
          local_470 = local_498;
          local_468 = local_498;
          local_460 = local_498;
          av_strerror(iVar7,&local_498,0x40);
          av_log(0,0x10,iVar26,uVar37,&local_498);
          if (**(int **)(iVar21 + DAT_0003daec) != 0) {
LAB_0003c174:
                    /* WARNING: Subroutine does not return */
            FUN_0002b538(1);
          }
        }
        iVar7 = *piVar22;
        iVar25 = iVar25 + 1;
        if (iVar7 <= iVar25) goto LAB_0003dc30;
      }
      iVar25 = iVar25 + 1;
    } while (iVar25 < iVar7);
  }
LAB_0003dc30:
  if (*piVar33 < 1) {
LAB_0003dfa4:
    if ((**(uint **)(iVar21 + DAT_0003dae4) & 1) != 0) {
      av_log(0,8,DAT_0003ed94 + 0x3efa4);
                    /* WARNING: Subroutine does not return */
      FUN_0002b538(1);
    }
    piVar22 = *(int **)(iVar21 + DAT_0003dae8);
  }
  else {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = auVar47._8_8_;
    auVar48 = auVar3 << 0x40;
    iVar7 = 0;
    piVar22 = *(int **)(iVar21 + DAT_0003dae8);
    do {
      iVar25 = *(int *)(*piVar22 + iVar7 * 4);
      if (*(int *)(iVar25 + 0x10) != 0) {
        av_freep(*(int *)(iVar25 + 0x54) + 0x1b4);
      }
      uVar12 = *(uint *)(iVar25 + 400);
      iVar26 = auVar48._0_4_ + uVar12;
      iVar8 = auVar48._4_4_ + *(int *)(iVar25 + 0x194) + (uint)CARRY4(auVar48._0_4_,uVar12);
      auVar48._4_4_ = iVar8;
      auVar48._0_4_ = iVar26;
      if ((uVar12 == 0 && *(int *)(iVar25 + 0x194) == 0) &&
         ((**(uint **)(iVar21 + DAT_0003dae4) & 2) != 0)) {
        av_log(0,8,DAT_0003ed90 + 0x3ef88,iVar7);
                    /* WARNING: Subroutine does not return */
        FUN_0002b538(1);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *piVar33);
    if (iVar26 == 0 && iVar8 == 0) goto LAB_0003dfa4;
  }
  iVar7 = *piVar9;
  if (0 < iVar7) {
    iVar25 = 0;
    piVar33 = *(int **)(iVar21 + DAT_0003dad4);
    do {
      while (iVar26 = *(int *)(*piVar33 + iVar25 * 4), *(int *)(iVar26 + 0x10) == 0) {
        iVar25 = iVar25 + 1;
        if (iVar7 <= iVar25) goto LAB_0003dd54;
      }
      avcodec_close(*(undefined4 *)(iVar26 + 0x18));
      if (*(code **)(iVar26 + 0x128) != (code *)0x0) {
        (**(code **)(iVar26 + 0x128))(*(undefined4 *)(iVar26 + 0x18));
      }
      iVar7 = *piVar9;
      iVar25 = iVar25 + 1;
    } while (iVar25 < iVar7);
  }
LAB_0003dd54:
  FUN_0001a240();
  iVar7 = 0;
LAB_0003bd04:
  if (0 < *local_864) {
    iVar25 = 0;
    piVar33 = *(int **)(iVar21 + DAT_0003c2ec);
    do {
      iVar26 = *(int *)(*piVar33 + iVar25 * 4);
      if ((iVar26 != 0) && (*(int *)(iVar26 + 0x70) != 0)) {
        av_thread_message_queue_set_err_send(*(int *)(iVar26 + 0x70),0xdfb9b0bb);
        while (iVar8 = av_thread_message_queue_recv(*(undefined4 *)(iVar26 + 0x70),&local_458,0),
              -1 < iVar8) {
          av_packet_free(&local_458);
        }
        pthread_join(*(pthread_t *)(iVar26 + 0x74),(void **)0x0);
        *(undefined4 *)(iVar26 + 0x7c) = 1;
        av_thread_message_queue_free(iVar26 + 0x70);
      }
      iVar25 = iVar25 + 1;
    } while (iVar25 < *local_864);
  }
  if (*piVar22 != 0) {
    piVar33 = *(int **)(iVar21 + DAT_0003c2c0);
    iVar21 = *piVar33;
    if (0 < iVar21) {
      iVar25 = 0;
      iVar26 = DAT_0003c2c4 + 0x3bde4;
      do {
        iVar8 = *(int *)(*piVar22 + iVar25 * 4);
        if (iVar8 != 0) {
          if (*(FILE **)(iVar8 + 0x138) != (FILE *)0x0) {
            iVar21 = fclose(*(FILE **)(iVar8 + 0x138));
            if (iVar21 != 0) {
              iStack_454 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
              uStack_450 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
              uStack_44c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
              local_458 = 0;
              local_448 = 0;
              local_440 = 0;
              local_438 = 0;
              local_430 = 0;
              local_428 = 0;
              local_420 = 0;
              iStack_444 = iStack_454;
              iStack_43c = iStack_454;
              iStack_434 = iStack_454;
              iStack_42c = iStack_454;
              iStack_424 = iStack_454;
              iStack_41c = iStack_454;
              piVar9 = __errno_location();
              av_strerror(-*piVar9,&local_458,0x40);
              av_log(0,0x10,iVar26,&local_458);
            }
            *(undefined4 *)(iVar8 + 0x138) = 0;
          }
          av_freep(iVar8 + 0xe8);
          av_freep(iVar8 + 0x158);
          av_freep(iVar8 + 0x180);
          av_dict_free(iVar8 + 0x14c);
          av_dict_free(iVar8 + 0x150);
          av_dict_free(iVar8 + 0x154);
          iVar21 = *piVar33;
        }
        iVar25 = iVar25 + 1;
      } while (iVar25 < iVar21);
    }
  }
  return iVar7;
code_r0x0003c190:
  if (0 < *piVar33) {
    iVar25 = 0;
    iVar7 = DAT_0003c2e0 + 0x3c1b4;
    local_87c = (undefined4 *)0x0;
    uVar52 = 0x7fffffffffffffff;
    do {
      while( true ) {
        iStack_874 = (int)((ulonglong)uVar52 >> 0x20);
        local_878 = (int *)uVar52;
        puVar27 = *(undefined4 **)(*piVar9 + iVar25 * 4);
        iVar8 = puVar27[0xe];
        uVar55 = *(undefined8 *)(puVar27 + 0xe);
        puVar39 = (undefined4 *)puVar27[3];
        iVar26 = puVar27[0x5a];
        if (puVar27[0xf] == -0x80000000 && iVar8 == 0) {
          dVar51 = (double)CONCAT44(iVar26,puVar39[1]);
          av_log(0,0x30,iVar7,*puVar39,puVar39[1],iVar26,puVar27[0x5b],puVar27[0x57]);
          iVar26 = puVar27[0x5a];
        }
        else {
          local_800 = 1;
          local_7fc = 1000000;
          dVar51 = 2.121995790965273e-308;
          uVar55 = av_rescale_q(iVar8,puVar27[0xf],puVar39[3],puVar39[4],1);
        }
        iVar8 = (int)((ulonglong)uVar55 >> 0x20);
        if ((iVar26 == 0) && (puVar27[0x5b] == 0)) {
          if (puVar27[0x58] != 0) goto LAB_0003d000;
          puVar39 = (undefined4 *)puVar27[0x4f];
          local_87c = puVar27;
          goto joined_r0x0003c4f0;
        }
        bVar43 = (uint)uVar55 < local_878;
        if (puVar27[0x57] == 0 &&
            (int)(iVar8 - (iStack_874 + (uint)bVar43)) < 0 !=
            (SBORROW4(iVar8,iStack_874) != SBORROW4(iVar8 - iStack_874,(uint)bVar43))) break;
        iVar25 = iVar25 + 1;
        if (*piVar33 <= iVar25) goto LAB_0003c334;
      }
      iVar25 = iVar25 + 1;
      if (puVar27[0x58] != 0) {
        puVar27 = (undefined4 *)0x0;
      }
      local_87c = puVar27;
      uVar52 = uVar55;
    } while (iVar25 < *piVar33);
LAB_0003c334:
    if (local_87c != (undefined4 *)0x0) {
      puVar39 = (undefined4 *)local_87c[0x4f];
joined_r0x0003c4f0:
      if (puVar39 != (undefined4 *)0x0) {
        iVar7 = puVar39[2];
        if (*(int *)(iVar7 + 8) == 0) {
          if (0 < *(int *)(iVar7 + 0x18)) {
            piVar34 = (int *)(*(int *)(iVar7 + 0x14) + -4);
            iVar25 = 0;
            do {
              piVar34 = piVar34 + 1;
              if ((*(int *)(*piVar34 + 0x18) < 0) && (*(uint *)(*piVar34 + 0x10) < 2))
              goto LAB_0003d580;
              iVar25 = iVar25 + 1;
            } while (*(int *)(iVar7 + 0x18) != iVar25);
          }
          uVar52 = FUN_00017874();
          piVar34 = (int *)((ulonglong)uVar52 >> 0x20);
          if (-1 < (int)uVar52) {
            puVar39 = (undefined4 *)local_87c[0x4f];
            if (puVar39 == (undefined4 *)0x0) goto LAB_0003c4f4;
            iVar7 = puVar39[2];
            if (*(int *)(iVar7 + 8) == 0) {
LAB_0003d580:
              if (0 < *(int *)(iVar7 + 0x18)) {
                iVar25 = 0;
                piVar34 = (int *)(*(int *)(iVar7 + 0x14) + -4);
                local_878 = *(int **)(iVar21 + DAT_0003d0a0);
                do {
                  piVar34 = piVar34 + 1;
                  piVar10 = *(int **)(*piVar34 + 4);
                  if ((piVar10[0x58] == 0) &&
                     (*(int *)(*(int *)(*local_878 + *piVar10 * 4) + 4) == 0)) goto LAB_0003c524;
                  iVar25 = iVar25 + 1;
                } while (iVar25 != *(int *)(iVar7 + 0x18));
              }
              local_87c[0x5b] = 1;
              goto LAB_0003d4d8;
            }
            goto LAB_0003c360;
          }
          av_log(0,0x10,DAT_0003ed80 + 0x3ed04);
          uVar52 = CONCAT44(extraout_r1_06,(int)uVar52);
        }
        else {
LAB_0003c360:
          iVar7 = av_buffersink_get_type(*puVar39);
          if (iVar7 == 1) {
            memset(&local_458,0,0x400);
            if ((local_87c[0x5a] == 0) && (iVar7 = FUN_000361f8(local_87c,0,&local_458), iVar7 < 0))
            {
              av_log(0,0x10,DAT_0003dab4 + 0x3d89c,*local_87c,local_87c[1],&local_458);
                    /* WARNING: Subroutine does not return */
              FUN_0002b538(1);
            }
          }
          iVar7 = *(int *)(local_87c[0x4f] + 8);
          uVar12 = avfilter_graph_request_oldest(*(undefined4 *)(iVar7 + 8));
          if ((int)uVar12 < 0) {
            if (uVar12 != 0xdfb9b0bb) {
              if (uVar12 != 0xfffffff5) goto LAB_0003c3a4;
              iVar25 = *(int *)(iVar7 + 0x18);
              if (0 < iVar25) {
                piVar10 = (int *)0x0;
                iVar8 = 0;
                local_878 = *(int **)(iVar21 + DAT_0003daac);
                iVar26 = 0;
                do {
                  puVar27 = *(undefined4 **)(*(int *)(iVar7 + 0x14) + iVar8 * 4);
                  piVar34 = (int *)puVar27[1];
                  iVar29 = *(int *)(*local_878 + *piVar34 * 4);
                  iVar13 = iVar26;
                  if ((*(int *)(iVar29 + 8) == 0) && (*(int *)(iVar29 + 4) == 0)) {
                    iVar29 = av_buffersrc_get_nb_failed_requests(*puVar27);
                    if (iVar26 < iVar29) {
                      iVar13 = iVar29;
                    }
                    iVar25 = *(int *)(iVar7 + 0x18);
                    if (iVar26 < iVar29) {
                      piVar10 = piVar34;
                    }
                  }
                  iVar8 = iVar8 + 1;
                  iVar26 = iVar13;
                } while (iVar8 < iVar25);
                if (piVar10 != (int *)0x0) goto LAB_0003c524;
              }
              piVar34 = *(int **)(iVar7 + 0x20);
              if (0 < (int)piVar34) {
                piVar34 = *(int **)(iVar7 + 0x1c) + (int)piVar34;
                piVar9 = *(int **)(iVar7 + 0x1c);
                do {
                  piVar10 = piVar9 + 1;
                  *(undefined4 *)(*(int *)(*piVar9 + 4) + 0x160) = 1;
                  piVar9 = piVar10;
                } while (piVar34 != piVar10);
              }
              goto LAB_0003d4d8;
            }
            uVar52 = FUN_0003842c(1);
            uVar37 = (undefined4)((ulonglong)uVar52 >> 0x20);
            if (0 < *(int *)(iVar7 + 0x20)) {
              iVar25 = 0;
              do {
                iVar26 = iVar25 * 4;
                iVar25 = iVar25 + 1;
                FUN_00031658(*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x1c) + iVar26) + 4));
                uVar37 = extraout_r1_05;
              } while (iVar25 < *(int *)(iVar7 + 0x20));
            }
            uVar52 = CONCAT44(uVar37,(int)uVar52);
          }
          else {
            uVar52 = FUN_0003842c(0);
          }
          piVar34 = (int *)((ulonglong)uVar52 >> 0x20);
          if (-1 < (int)uVar52) goto LAB_0003d4d8;
        }
LAB_0003cfc8:
        piVar34 = (int *)((ulonglong)uVar52 >> 0x20);
        uVar12 = (uint)uVar52;
        if (((uint)(uVar12 != 0xdfb9b0bb) & uVar12 >> 0x1f) != 0) {
LAB_0003c3a4:
          uStack_4d4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          uStack_4d0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_4cc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          local_4d8 = 0;
          local_4c8 = 0;
          local_4c0 = 0;
          local_4b8 = 0;
          local_4b0 = 0;
          local_4a8 = 0;
          local_4a0 = 0;
          uStack_4c4 = uStack_4d4;
          uStack_4bc = uStack_4d4;
          uStack_4b4 = uStack_4d4;
          uStack_4ac = uStack_4d4;
          uStack_4a4 = uStack_4d4;
          uStack_49c = uStack_4d4;
          av_strerror(uVar12,&local_4d8,0x40);
          av_log(0,0x10,DAT_0003c2e4 + 0x3c3f0,&local_4d8);
          goto LAB_0003bfc4;
        }
        goto LAB_0003d4d8;
      }
LAB_0003c4f4:
      if ((int)local_87c[2] < 0) {
        av_log(0,0,DAT_0003eda4 + 0x3efe4,DAT_0003eda0 + 0x3efe0,DAT_0003ed9c + 0x3efd0,0x10d3);
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_878 = *(int **)(iVar21 + DAT_0003c2ec);
      piVar10 = *(int **)(**(int **)(iVar21 + DAT_0003c2f8) + local_87c[2] * 4);
LAB_0003c524:
      iVar7 = *piVar10;
      piVar36 = *(int **)(*local_878 + iVar7 * 4);
      piVar23 = *(int **)(iVar21 + DAT_0003c2f0);
      iVar25 = *piVar36;
      iVar26 = *piVar23;
      uVar52 = FUN_00031e04(piVar36,&local_804);
      piVar34 = (int *)((ulonglong)uVar52 >> 0x20);
      if ((int)uVar52 == -0xb) goto LAB_0003ea70;
      if (-1 < (int)uVar52) {
LAB_0003c588:
        iVar8 = *local_864;
        if (0 < iVar8) {
          piVar10 = (int *)*local_878;
          piVar34 = piVar10;
          do {
            piVar40 = piVar34 + 1;
            *(undefined4 *)(*piVar34 + 8) = 0;
            piVar34 = piVar40;
          } while (piVar10 + iVar8 != piVar40);
        }
        iVar8 = *piVar33;
        if (0 < iVar8) {
          piVar9 = (int *)*piVar9;
          piVar34 = piVar9;
          do {
            piVar10 = piVar34 + 1;
            *(undefined4 *)(*piVar34 + 0x160) = 0;
            piVar34 = piVar10;
          } while (piVar9 + iVar8 != piVar10);
        }
        uVar12 = *(uint *)(local_804 + 0x20);
        if (**(int **)(iVar21 + DAT_0003c2f4) != 0) {
          uVar12 = *(uint *)(*(int *)(iVar25 + 0x1c) + uVar12 * 4);
          dVar51 = (double)(ulonglong)uVar12;
          av_pkt_dump_log2(0,0x20,local_804,**(undefined4 **)(iVar21 + DAT_0003dab0),uVar12);
          uVar12 = *(uint *)(local_804 + 0x20);
        }
        iVar8 = local_804;
        if ((int)uVar12 < piVar36[0x16]) {
          uVar15 = *(uint *)(local_804 + 0x1c);
          piVar34 = *(int **)(iVar21 + DAT_0003c2f8);
          piVar9 = *(int **)(*piVar34 + (uVar12 + piVar36[3]) * 4);
          uVar18 = piVar9[0x4e];
          uVar28 = piVar9[0x50];
          piVar9[0x4e] = uVar18 + uVar15;
          piVar9[0x4f] = piVar9[0x4f] + ((int)uVar15 >> 0x1f) + (uint)CARRY4(uVar18,uVar15);
          piVar9[0x50] = uVar28 + 1;
          piVar9[0x51] = piVar9[0x51] + (uint)(0xfffffffe < uVar28);
          if (piVar9[2] == 0) {
            if ((*(uint *)(local_804 + 0x24) & 2) != 0) {
              piVar10 = *(int **)(iVar21 + DAT_0003c2fc);
              dVar51 = (double)(ulonglong)uVar12;
              if (*piVar10 == 0) {
                uVar37 = 0x18;
              }
              else {
                uVar37 = 8;
              }
              av_log(0,uVar37,DAT_0003c300 + 0x3c690,*(undefined4 *)(iVar25 + 0x20),uVar12);
              if (*piVar10 != 0) goto LAB_0003c174;
            }
            piVar10 = *(int **)(iVar21 + DAT_0003c304);
            if (*piVar10 != 0) {
              iVar13 = piVar36[3];
              iVar7 = *(int *)(local_804 + 0x20);
              uVar37 = av_get_media_type_string(*(undefined4 *)(piVar9[6] + 8));
              iVar8 = piVar9[0xe];
              iVar29 = piVar9[0xf];
              dVar49 = *(double *)(piVar9 + 0xe);
              uStack_504 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
              uStack_510 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
              uStack_50c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
              local_518 = 0;
              local_508 = 0;
              local_500 = 0;
              uStack_514 = uStack_504;
              uStack_4fc = uStack_504;
              if (iVar29 == -0x80000000 && iVar8 == 0) {
                local_518 = *(undefined4 *)(DAT_0003ed78 + 0x3ecbc);
                    /* WARNING: Ignoring partial resolution of indirect */
                uStack_514._0_2_ = (short)*(undefined4 *)(DAT_0003ed78 + 0x3ecc0);
              }
              else {
                snprintf((char *)&local_518,0x20,(char *)(DAT_0003db14 + 0x3e484),iVar29,iVar8,
                         iVar29);
                iVar8 = piVar9[0xe];
                iVar29 = piVar9[0xf];
                dVar51 = dVar49;
              }
              uStack_524 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
              uStack_530 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
              uStack_52c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
              local_538 = 0;
              local_528 = 0;
              local_520 = 0;
              uStack_534 = uStack_524;
              uStack_51c = uStack_524;
              if (iVar29 == -0x80000000 && iVar8 == 0) {
                local_538 = *(undefined4 *)(DAT_0003ed74 + 0x3eca0);
                    /* WARNING: Ignoring partial resolution of indirect */
                uStack_534._0_2_ = (short)*(undefined4 *)(DAT_0003ed74 + 0x3eca4);
              }
              else {
                dVar51 = (double)FUN_0003f4e4(iVar8,iVar29);
                dVar51 = dVar51 * dVar6;
                snprintf((char *)&local_538,0x20,(char *)(DAT_0003db18 + 0x3e4c8));
              }
              uStack_544 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
              uStack_550 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
              uStack_54c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
              iVar8 = piVar9[0x14];
              iVar29 = piVar9[0x15];
              dVar49 = *(double *)(piVar9 + 0x14);
              local_558 = 0;
              local_548 = 0;
              local_540 = 0;
              uStack_554 = uStack_544;
              uStack_53c = uStack_544;
              if (iVar29 == -0x80000000 && iVar8 == 0) {
                local_558 = *(undefined4 *)(DAT_0003ed70 + 0x3ec84);
                    /* WARNING: Ignoring partial resolution of indirect */
                uStack_554._0_2_ = (short)*(undefined4 *)(DAT_0003ed70 + 0x3ec88);
              }
              else {
                snprintf((char *)&local_558,0x20,(char *)(DAT_0003db1c + 0x3e524),iVar29,iVar8,
                         iVar29);
                iVar8 = piVar9[0x14];
                iVar29 = piVar9[0x15];
                dVar51 = dVar49;
              }
              uStack_564 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
              uStack_570 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
              uStack_56c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
              local_578 = 0;
              local_568 = 0;
              local_560 = 0;
              uStack_574 = uStack_564;
              uStack_55c = uStack_564;
              if (iVar29 == -0x80000000 && iVar8 == 0) {
                local_578 = *(undefined4 *)(DAT_0003ed6c + 0x3ec68);
                    /* WARNING: Ignoring partial resolution of indirect */
                uStack_574._0_2_ = (short)*(undefined4 *)(DAT_0003ed6c + 0x3ec6c);
              }
              else {
                FUN_0003f4e4(iVar8,iVar29,iVar8,iVar29,dVar51);
                snprintf((char *)&local_578,0x20,(char *)(DAT_0003db20 + 0x3e568));
              }
              uStack_584 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
              uStack_590 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
              uStack_58c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
              local_598 = 0;
              local_588 = 0;
              local_580 = 0;
              iVar8 = *(int *)(local_804 + 0xc);
              uStack_594 = uStack_584;
              uStack_57c = uStack_584;
              if (iVar8 == -0x80000000 && *(int *)(local_804 + 8) == 0) {
                local_598 = *(undefined4 *)(DAT_0003ed68 + 0x3ec4c);
                    /* WARNING: Ignoring partial resolution of indirect */
                uStack_594._0_2_ = (short)*(undefined4 *)(DAT_0003ed68 + 0x3ec50);
              }
              else {
                snprintf((char *)&local_598,0x20,(char *)(DAT_0003db24 + 0x3e5c4),iVar8,
                         *(int *)(local_804 + 8),iVar8);
              }
              uStack_5a4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
              uStack_5b0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
              uStack_5ac = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
              local_5b8 = 0;
              local_5a8 = 0;
              local_5a0 = 0;
              uStack_5b4 = uStack_5a4;
              uStack_59c = uStack_5a4;
              if (*(int *)(local_804 + 0xc) == -0x80000000 && *(int *)(local_804 + 8) == 0) {
                local_5b8 = *(undefined4 *)(DAT_0003ed64 + 0x3ec30);
                    /* WARNING: Ignoring partial resolution of indirect */
                uStack_5b4._0_2_ = (short)*(undefined4 *)(DAT_0003ed64 + 0x3ec34);
              }
              else {
                pcVar30 = (char *)(DAT_0003db28 + 0x3e604);
                VectorSignedToFloat(*(undefined4 *)(piVar9[1] + 0xc),(byte)(in_fpscr >> 0x16) & 3);
                VectorSignedToFloat(*(undefined4 *)(piVar9[1] + 0x10),(byte)(in_fpscr >> 0x16) & 3);
                FUN_0003f4e4();
                snprintf((char *)&local_5b8,0x20,pcVar30);
              }
              uStack_5c4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
              uStack_5d0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
              uStack_5cc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
              local_5d8 = 0;
              local_5c8 = 0;
              local_5c0 = 0;
              iVar8 = *(int *)(local_804 + 0x14);
              uStack_5d4 = uStack_5c4;
              uStack_5bc = uStack_5c4;
              if (iVar8 == -0x80000000 && *(int *)(local_804 + 0x10) == 0) {
                local_5d8 = *(undefined4 *)(DAT_0003ed60 + 0x3ec14);
                    /* WARNING: Ignoring partial resolution of indirect */
                uStack_5d4._0_2_ = (short)*(undefined4 *)(DAT_0003ed60 + 0x3ec18);
              }
              else {
                snprintf((char *)&local_5d8,0x20,(char *)(DAT_0003db2c + 0x3e67c),iVar8,
                         *(int *)(local_804 + 0x10),iVar8);
              }
              uStack_5e4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
              uStack_5f0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
              uStack_5ec = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
              local_5f8 = 0;
              local_5e8 = 0;
              local_5e0 = 0;
              uStack_5dc = uStack_5e4;
              if (*(int *)(local_804 + 0x14) == -0x80000000 && *(int *)(local_804 + 0x10) == 0) {
                local_5f8 = *(undefined4 *)(DAT_0003ed5c + 0x3ebfc);
                uStack_5f4 = CONCAT22((short)((uint)uStack_5e4 >> 0x10),
                                      (short)*(undefined4 *)(DAT_0003ed5c + 0x3ec00));
              }
              else {
                pcVar30 = (char *)(DAT_0003db30 + 0x3e6bc);
                VectorSignedToFloat(*(undefined4 *)(piVar9[1] + 0xc),(byte)(in_fpscr >> 0x16) & 3);
                VectorSignedToFloat(*(undefined4 *)(piVar9[1] + 0x10),(byte)(in_fpscr >> 0x16) & 3);
                uStack_5f4 = uStack_5e4;
                FUN_0003f4e4();
                snprintf((char *)&local_5f8,0x20,pcVar30);
              }
              uStack_604 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
              uStack_610 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
              uStack_60c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
              local_600 = 0;
              iVar8 = *(int *)(local_804 + 0x34);
              local_618 = 0;
              local_608 = 0;
              uStack_5fc = uStack_604;
              if (iVar8 == -0x80000000 && *(int *)(local_804 + 0x30) == 0) {
                local_618 = *(undefined4 *)(DAT_0003ed58 + 0x3ebe4);
                uStack_614 = CONCAT22((short)((uint)uStack_604 >> 0x10),
                                      (short)*(undefined4 *)(DAT_0003ed58 + 0x3ebe8));
              }
              else {
                uStack_614 = uStack_604;
                snprintf((char *)&local_618,0x20,(char *)(DAT_0003db34 + 0x3e730),iVar8,
                         *(int *)(local_804 + 0x30),iVar8);
              }
              uStack_624 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
              uStack_630 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
              uStack_62c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
              local_620 = 0;
              local_638 = 0;
              local_628 = 0;
              uStack_61c = uStack_624;
              if (*(int *)(local_804 + 0x34) == -0x80000000 && *(int *)(local_804 + 0x30) == 0) {
                local_638 = *(undefined4 *)(DAT_0003ed54 + 0x3ebcc);
                uStack_634 = CONCAT22((short)((uint)uStack_624 >> 0x10),
                                      (short)*(undefined4 *)(DAT_0003ed54 + 0x3ebd0));
              }
              else {
                pcVar30 = (char *)(DAT_0003db38 + 0x3e76c);
                VectorSignedToFloat(*(undefined4 *)(piVar9[1] + 0xc),(byte)(in_fpscr >> 0x16) & 3);
                VectorSignedToFloat(*(undefined4 *)(piVar9[1] + 0x10),(byte)(in_fpscr >> 0x16) & 3);
                uStack_634 = uStack_624;
                FUN_0003f4e4();
                snprintf((char *)&local_638,0x20,pcVar30);
              }
              uStack_644 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
              uStack_650 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
              uStack_64c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
              local_658 = 0;
              local_648 = 0;
              local_640 = 0;
              iVar29 = *(int *)(*local_878 + *piVar9 * 4);
              iVar8 = *(int *)(iVar29 + 0x38);
              iVar29 = *(int *)(iVar29 + 0x3c);
              uStack_63c = uStack_644;
              if (iVar29 == -0x80000000 && iVar8 == 0) {
                local_658 = *(undefined4 *)(DAT_0003ed50 + 0x3ebb4);
                uStack_654 = CONCAT22((short)((uint)uStack_644 >> 0x10),
                                      (short)*(undefined4 *)(DAT_0003ed50 + 0x3ebb8));
              }
              else {
                uStack_654 = uStack_644;
                snprintf((char *)&local_658,0x20,(char *)(DAT_0003db3c + 0x3e7f0),iVar29,iVar8,
                         iVar29);
              }
              local_668 = 0;
              uStack_670 = 0;
              iVar8 = *(int *)(*local_878 + *piVar9 * 4);
              local_660 = local_668;
              if (*(int *)(iVar8 + 0x3c) == -0x80000000 && *(int *)(iVar8 + 0x38) == 0) {
                local_678 = (ulonglong)*(uint6 *)(DAT_0003ed4c + 0x3eb9c);
              }
              else {
                pcVar30 = (char *)(DAT_0003db40 + 0x3e834);
                local_678 = local_668;
                FUN_0003f4e4();
                snprintf((char *)&local_678,0x20,pcVar30);
              }
              av_log(0,0x20,DAT_0003db44 + 0x3e8c0,iVar7 + iVar13,uVar37,&local_518,&local_538,
                     &local_558,&local_578,&local_598,&local_5b8,&local_5d8,&local_5f8,&local_618,
                     &local_638,&local_658,&local_678);
            }
            if (piVar9[0x18] == 0) {
              local_860 = *(uint *)(iVar25 + 0x28);
              iStack_85c = *(int *)(iVar25 + 0x2c);
              if (iStack_85c == -0x80000000 && local_860 == 0) {
                iVar7 = piVar9[1];
              }
              else {
                iVar7 = piVar9[1];
                if (*(int *)(iVar7 + 0xb8) < 0x40) {
                  if (((piVar9[0xf] == -0x80000000 && piVar9[0xe] == 0) &&
                      (piVar36[0xf] == -(iStack_85c + (uint)(local_860 != 0)) &&
                       piVar36[0xe] == -local_860)) &&
                     ((*(uint *)(*(int *)(iVar25 + 4) + 8) & 0x200) != 0)) {
                    iVar8 = *(int *)(iVar25 + 0x18);
                    uVar52 = 0x7fffffffffffffff;
                    iVar7 = 0;
                    while( true ) {
                      iStack_854 = (int)((ulonglong)uVar52 >> 0x20);
                      uVar12 = (uint)uVar52;
                      if (iVar7 == iVar8) break;
                      iVar13 = *(int *)(*(int *)(iVar25 + 0x1c) + iVar7 * 4);
                      if (*(int *)(iVar13 + 0x34) != 0x30) {
                        iVar29 = *(int *)(iVar13 + 0x18);
                        iVar16 = *(int *)(iVar13 + 0x1c);
                        if (iVar16 != -0x80000000 || iVar29 != 0) {
                          local_790 = 1;
                          local_78c = 1000000;
                          uVar55 = av_rescale_q(iVar29,iVar16,*(undefined4 *)(iVar13 + 0xc),
                                                *(undefined4 *)(iVar13 + 0x10),1);
                          iVar20 = (int)((ulonglong)uVar55 >> 0x20);
                          bVar43 = (uint)uVar55 < uVar12;
                          if ((int)(iVar20 - (iStack_854 + (uint)bVar43)) < 0 !=
                              (SBORROW4(iVar20,iStack_854) !=
                              SBORROW4(iVar20 - iStack_854,(uint)bVar43))) {
                            local_798 = 1;
                            local_794 = 1000000;
                            uVar52 = av_rescale_q(iVar29,iVar16,*(undefined4 *)(iVar13 + 0xc),
                                                  *(undefined4 *)(iVar13 + 0x10),1);
                          }
                        }
                      }
                      iVar7 = iVar7 + 1;
                    }
                    if ((int)(iStack_85c - (iStack_854 + (uint)(local_860 < uVar12))) < 0 ==
                        (SBORROW4(iStack_85c,iStack_854) !=
                        SBORROW4(iStack_85c - iStack_854,(uint)(local_860 < uVar12)))) {
                      iVar7 = piVar9[1];
                      local_860 = *(uint *)(iVar25 + 0x28);
                      iStack_85c = *(int *)(iVar25 + 0x2c);
                    }
                    else {
                      av_log(iVar25,0x28,DAT_0003ed8c + 0x3ef4c,iStack_85c,uVar12 - local_860,
                             iStack_854 - (iStack_85c + (uint)(uVar12 < local_860)));
                      local_860 = *(uint *)(iVar25 + 0x28);
                      iStack_85c = *(int *)(iVar25 + 0x2c);
                      iVar7 = piVar9[1];
                      piVar36[0xe] = -uVar12;
                      piVar36[0xf] = -(iStack_854 + (uint)(uVar12 != 0));
                    }
                  }
                  local_7a0 = 1;
                  local_79c = 1000000;
                  lVar53 = av_rescale_q(local_860,iStack_85c,1,1000000,*(undefined4 *)(iVar7 + 0xc),
                                        *(undefined4 *)(iVar7 + 0x10));
                  iVar8 = (int)((ulonglong)lVar53 >> 0x20);
                  uVar18 = *(uint *)(iVar7 + 0xb8);
                  piVar9[0x18] = 1;
                  uVar12 = 1 << (uVar18 & 0xff);
                  uVar15 = 0 << (uVar18 & 0xff) | 1 << (uVar18 - 0x20 & 0xff) |
                           1U >> (0x20 - uVar18 & 0xff);
                  lVar54 = lVar53 + CONCAT44(uVar15,uVar12);
                  iVar7 = (int)((ulonglong)lVar54 >> 0x20);
                  bVar43 = (uint)lVar53 < (uint)lVar54;
                  if ((int)(iVar8 - (iVar7 + (uint)bVar43)) < 0 !=
                      (SBORROW4(iVar8,iVar7) != SBORROW4(iVar8 - iVar7,(uint)bVar43))) {
                    uVar28 = *(uint *)(local_804 + 0x10);
                    iVar7 = *(int *)(local_804 + 0x14);
                    if (iVar7 != -0x80000000 || uVar28 != 0) {
                      uVar41 = uVar18 - 1;
                      lVar54 = lVar53 + CONCAT44(0 << (uVar41 & 0xff) | 1 << (uVar18 - 0x21 & 0xff)
                                                 | 1U >> (0x20 - uVar41 & 0xff),1 << (uVar41 & 0xff)
                                                );
                      iVar8 = (int)((ulonglong)lVar54 >> 0x20);
                      bVar43 = (uint)lVar54 < uVar28;
                      if ((int)(iVar8 - (iVar7 + (uint)bVar43)) < 0 !=
                          (SBORROW4(iVar8,iVar7) != SBORROW4(iVar8 - iVar7,(uint)bVar43))) {
                        *(uint *)(local_804 + 0x10) = uVar28 - uVar12;
                        *(uint *)(local_804 + 0x14) = iVar7 - (uVar15 + (uVar28 < uVar12));
                        piVar9[0x18] = 0;
                      }
                    }
                    uVar28 = *(uint *)(local_804 + 8);
                    iVar8 = *(int *)(local_804 + 0xc);
                    if (iVar8 != -0x80000000 || uVar28 != 0) {
                      uVar41 = uVar18 - 1;
                      lVar53 = lVar53 + CONCAT44(0 << (uVar41 & 0xff) | 1 << (uVar18 - 0x21 & 0xff)
                                                 | 1U >> (0x20 - uVar41 & 0xff),1 << (uVar41 & 0xff)
                                                );
                      iVar7 = (int)((ulonglong)lVar53 >> 0x20);
                      bVar43 = (uint)lVar53 < uVar28;
                      if ((int)(iVar7 - (iVar8 + (uint)bVar43)) < 0 !=
                          (SBORROW4(iVar7,iVar8) != SBORROW4(iVar7 - iVar8,(uint)bVar43))) {
                        iVar7 = piVar9[1];
                        *(uint *)(local_804 + 8) = uVar28 - uVar12;
                        *(uint *)(local_804 + 0xc) = iVar8 - (uVar15 + (uVar28 < uVar12));
                        piVar9[0x18] = 0;
                        goto LAB_0003c898;
                      }
                    }
                  }
                  iVar7 = piVar9[1];
                }
              }
            }
            else {
              iVar7 = piVar9[1];
            }
LAB_0003c898:
            iVar8 = local_804;
            if ((piVar9[0x51] == 0 && piVar9[0x50] == 1) &&
               (iVar13 = *(int *)(iVar7 + 0xa4), 0 < iVar13)) {
              iVar29 = 0;
              do {
                iVar20 = *(int *)(iVar7 + 0xa0);
                iVar16 = iVar20 + iVar29 * 0xc;
                if (*(int *)(iVar16 + 8) != 5) {
                  iVar7 = av_packet_get_side_data(iVar8,*(int *)(iVar16 + 8),0);
                  if (iVar7 == 0) {
                    __dest = (void *)av_packet_new_side_data
                                               (local_804,*(undefined4 *)(iVar16 + 8),
                                                *(undefined4 *)(iVar16 + 4));
                    if (__dest == (void *)0x0) goto LAB_0003c174;
                    memcpy(__dest,*(void **)(iVar20 + iVar29 * 0xc),*(size_t *)(iVar16 + 4));
                  }
                  iVar7 = piVar9[1];
                  iVar13 = *(int *)(iVar7 + 0xa4);
                  iVar8 = local_804;
                }
                iVar29 = iVar29 + 1;
              } while (iVar29 < iVar13);
            }
            lVar54 = *(longlong *)(iVar8 + 0x10);
            puVar27 = (undefined4 *)(iVar7 + 0xc);
            if (*(int *)(iVar8 + 0x14) != -0x80000000 || *(int *)(iVar8 + 0x10) != 0) {
              local_7a4 = 1000000;
              local_7a8 = 1;
              lVar53 = av_rescale_q(piVar36[0xe],piVar36[0xf],1,1000000,*puVar27,
                                    *(undefined4 *)(iVar7 + 0x10));
              *(longlong *)(iVar8 + 0x10) = lVar53 + lVar54;
            }
            lVar54 = *(longlong *)(iVar8 + 8);
            if (*(int *)(iVar8 + 0xc) != -0x80000000 || *(int *)(iVar8 + 8) != 0) {
              local_7ac = 1000000;
              local_7b0 = 1;
              lVar53 = av_rescale_q((int)*(undefined8 *)(piVar36 + 0xe),
                                    (int)((ulonglong)*(undefined8 *)(piVar36 + 0xe) >> 0x20),1,
                                    1000000,*puVar27,*(undefined4 *)(iVar7 + 0x10));
              lVar53 = lVar53 + lVar54;
              *(longlong *)(iVar8 + 8) = lVar53;
              if (lVar53 != -0x8000000000000000) {
                dVar51 = (double)FUN_0003f4e4((int)lVar53,(int)((ulonglong)lVar53 >> 0x20));
                uVar52 = FUN_0003f8e0(SUB84(dVar51 * *(double *)(piVar9 + 0x24),0),
                                      (int)((ulonglong)(dVar51 * *(double *)(piVar9 + 0x24)) >> 0x20
                                           ));
                *(undefined8 *)(iVar8 + 8) = uVar52;
              }
            }
            iVar13 = *(int *)(iVar8 + 0x10);
            uVar52 = *(undefined8 *)(iVar8 + 0x10);
            if (*(int *)(iVar8 + 0x14) != -0x80000000 || iVar13 != 0) {
              dVar51 = (double)FUN_0003f4e4(iVar13,*(int *)(iVar8 + 0x14));
              uVar52 = FUN_0003f8e0(SUB84(dVar51 * *(double *)(piVar9 + 0x24),0),
                                    (int)((ulonglong)(dVar51 * *(double *)(piVar9 + 0x24)) >> 0x20))
              ;
              *(undefined8 *)(iVar8 + 0x10) = uVar52;
            }
            local_7b8 = 1;
            local_7b4 = 1000000;
            lVar54 = av_rescale_q_rnd((int)uVar52,(int)((ulonglong)uVar52 >> 0x20),*puVar27,
                                      *(undefined4 *)(iVar7 + 0x10),1,1000000,0x2005);
            if (((*(uint *)(piVar9[6] + 8) < 2 && lVar54 != -0x8000000000000000) &&
                (piVar9[0xf] == -0x80000000 && piVar9[0xe] == 0)) &&
               ((*piVar23 == 0 && ((*(uint *)(*(int *)(iVar25 + 4) + 8) & 0x200) != 0)))) {
              uVar12 = piVar36[0x10];
              if (piVar36[0x11] == -0x80000000 && uVar12 == 0) goto LAB_0003ca44;
              iVar7 = (uint)lVar54 - uVar12;
              iVar13 = (int)((ulonglong)lVar54 >> 0x20) -
                       (piVar36[0x11] + (uint)((uint)lVar54 < uVar12));
              fVar11 = (float)FUN_0003f718();
              pfVar32 = *(float **)(iVar21 + DAT_0003db48);
              fVar45 = *pfVar32;
              uVar12 = in_fpscr & 0xfffffff;
              in_fpscr = uVar12 | (uint)(fVar11 < -(fVar45 * DAT_0003ed20)) << 0x1f;
              if (!SUB41(in_fpscr >> 0x1f,0)) {
                fVar45 = fVar45 * DAT_0003ed20;
                uVar12 = uVar12 | (uint)(fVar11 < fVar45) << 0x1f | (uint)(fVar11 == fVar45) << 0x1e
                ;
                in_fpscr = uVar12 | (uint)(NAN(fVar11) || NAN(fVar45)) << 0x1c;
                bVar2 = (byte)(uVar12 >> 0x18);
                if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1))
                goto LAB_0003ca44;
              }
              iVar8 = DAT_0003ed24 + 0x3e988;
              uVar52 = VectorSub(*(undefined8 *)(piVar36 + 0xe),CONCAT44(iVar13,iVar7),8);
              *(undefined8 *)(piVar36 + 0xe) = uVar52;
              av_log(0,0x30,iVar8,pfVar32,CONCAT44(iVar13,iVar7),uVar52);
              local_7bc = 1000000;
              local_7c0 = 1;
              local_818 = (undefined4 *)piVar9[1];
              puVar27 = local_818 + 3;
              uVar52 = av_rescale_q(iVar7,iVar13,1,1000000,*puVar27,local_818[4]);
              iVar8 = local_804;
              uVar12 = *(uint *)(local_804 + 8);
              iVar29 = *(int *)(local_804 + 0xc);
              uVar15 = *(uint *)(local_804 + 0x10);
              uVar37 = *puVar27;
              uVar14 = local_818[4];
              *(uint *)(local_804 + 0x10) = uVar15 - (uint)uVar52;
              *(uint *)(local_804 + 0x14) =
                   *(int *)(local_804 + 0x14) -
                   ((int)((ulonglong)uVar52 >> 0x20) + (uint)(uVar15 < (uint)uVar52));
              if (iVar29 != -0x80000000 || uVar12 != 0) {
                local_7c4 = 1000000;
                local_7c8 = 1;
                uVar52 = av_rescale_q(iVar7,iVar13,1,1000000,uVar37,uVar14);
                *(uint *)(iVar8 + 8) = uVar12 - (uint)uVar52;
                *(uint *)(iVar8 + 0xc) =
                     iVar29 - ((int)((ulonglong)uVar52 >> 0x20) + (uint)(uVar12 < (uint)uVar52));
                goto LAB_0003ca44;
              }
              lVar54 = av_rescale_q(piVar36[6],piVar36[7],piVar36[8],piVar36[9],uVar37,uVar14);
            }
            else {
LAB_0003ca44:
              local_818 = (undefined4 *)piVar9[1];
              puVar27 = local_818 + 3;
              lVar54 = av_rescale_q(piVar36[6],piVar36[7],piVar36[8],piVar36[9],*puVar27,
                                    local_818[4]);
              if (*(int *)(iVar8 + 0xc) != -0x80000000 || *(int *)(iVar8 + 8) != 0) {
                lVar53 = lVar54 + *(longlong *)(iVar8 + 8);
                uVar12 = (uint)lVar53;
                iVar7 = (int)((ulonglong)lVar53 >> 0x20);
                iVar13 = piVar9[0x1f];
                bVar43 = (uint)piVar9[0x1e] < uVar12;
                lVar5 = *(longlong *)(piVar9 + 0x1e);
                if ((int)(iVar13 - (iVar7 + (uint)bVar43)) < 0 !=
                    (SBORROW4(iVar13,iVar7) != SBORROW4(iVar13 - iVar7,(uint)bVar43))) {
                  lVar5 = lVar53;
                }
                *(longlong *)(iVar8 + 8) = lVar53;
                iVar13 = piVar9[0x1d];
                *(longlong *)(piVar9 + 0x1e) = lVar5;
                bVar43 = uVar12 < (uint)piVar9[0x1c];
                lVar5 = *(longlong *)(piVar9 + 0x1c);
                if ((int)(iVar7 - (iVar13 + (uint)bVar43)) < 0 !=
                    (SBORROW4(iVar7,iVar13) != SBORROW4(iVar7 - iVar13,(uint)bVar43))) {
                  lVar5 = lVar53;
                }
                *(longlong *)(piVar9 + 0x1c) = lVar5;
              }
            }
            plVar1 = (longlong *)(iVar8 + 0x10);
            lVar53 = *plVar1;
            if (*(int *)(iVar8 + 0x14) != -0x80000000 || *(int *)plVar1 != 0) {
              lVar53 = lVar54 + *plVar1;
              *(longlong *)(iVar8 + 0x10) = lVar53;
            }
            iStack_85c = (int)((ulonglong)lVar53 >> 0x20);
            local_860 = (uint)lVar53;
            local_7d0 = 1;
            local_7cc = 1000000;
            lVar54 = av_rescale_q_rnd(local_860,iStack_85c,*puVar27,puVar27[1],1,1000000);
            if (*piVar23 == 0) {
              local_844 = *(uint *)(piVar9[6] + 8);
              if (1 < local_844 || lVar54 == -0x8000000000000000) goto LAB_0003ce14;
LAB_0003d8e4:
              iVar7 = piVar9[0xe];
              iVar13 = piVar9[0xf];
              if (iVar26 == 0 && (iVar13 != -0x80000000 || iVar7 != 0)) {
                uVar52 = VectorSub(lVar54,*(undefined8 *)(piVar9 + 0xe),8);
                fVar11 = (float)FUN_0003f718((int)uVar52,(int)((ulonglong)uVar52 >> 0x20));
                if ((*(uint *)(*(int *)(iVar25 + 4) + 8) & 0x200) == 0) {
                  pfVar32 = *(float **)(iVar21 + DAT_0003dab8);
                  fVar46 = *pfVar32;
                  fVar45 = -(fVar46 * DAT_0003daa8);
                  uVar12 = in_fpscr & 0xfffffff;
                  uVar15 = uVar12 | (uint)(fVar45 < fVar11) << 0x1f |
                           (uint)(fVar45 == fVar11) << 0x1e;
                  in_fpscr = uVar15 | (uint)(NAN(fVar45) || NAN(fVar11)) << 0x1c;
                  bVar2 = (byte)(uVar15 >> 0x18);
                  if ((!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) ||
                     (in_fpscr = uVar12 | (uint)(fVar46 * DAT_0003daa8 < fVar11) << 0x1f,
                     SUB41(in_fpscr >> 0x1f,0))) {
                    av_log(0,0x18,DAT_0003dabc + 0x3d994,*(undefined4 *)(iVar8 + 0x20),lVar53,iVar7,
                           iVar13);
                    *(undefined4 *)(local_804 + 0x10) = 0;
                    *(undefined4 *)(local_804 + 0x14) = 0x80000000;
                    iVar8 = local_804;
                  }
                  iVar7 = *(int *)(iVar8 + 8);
                  iVar25 = *(int *)(iVar8 + 0xc);
                  if (iVar25 != -0x80000000 || iVar7 != 0) {
                    local_7ec = 1000000;
                    local_7f0 = 1;
                    uVar52 = av_rescale_q(iVar7,iVar25,*(undefined4 *)(piVar9[1] + 0xc),
                                          *(undefined4 *)(piVar9[1] + 0x10),1,1000000);
                    iVar26 = piVar9[0xf];
                    fVar11 = (float)FUN_0003f718((uint)uVar52 - piVar9[0xe],
                                                 (int)((ulonglong)uVar52 >> 0x20) -
                                                 (iVar26 + (uint)((uint)uVar52 < (uint)piVar9[0xe]))
                                                );
                    fVar45 = *pfVar32;
                    uVar12 = in_fpscr & 0xfffffff;
                    in_fpscr = uVar12 | (uint)(fVar11 < -(fVar45 * DAT_0003daa8)) << 0x1f;
                    if (!SUB41(in_fpscr >> 0x1f,0)) {
                      fVar45 = fVar45 * DAT_0003daa8;
                      uVar12 = uVar12 | (uint)(fVar11 < fVar45) << 0x1f |
                               (uint)(fVar11 == fVar45) << 0x1e;
                      in_fpscr = uVar12 | (uint)(NAN(fVar11) || NAN(fVar45)) << 0x1c;
                      bVar2 = (byte)(uVar12 >> 0x18);
                      if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1))
                      goto LAB_0003ce14;
                    }
                    av_log(0,0x18,DAT_0003dac0 + 0x3da58,iVar26,iVar7,iVar25);
                    *(undefined4 *)(local_804 + 8) = 0;
                    *(undefined4 *)(local_804 + 0xc) = 0x80000000;
                    iVar8 = local_804;
                  }
                }
                else {
LAB_0003ccb8:
                  uVar12 = in_fpscr & 0xfffffff;
                  in_fpscr = uVar12 | (uint)(fVar11 < -(**(float **)(iVar21 + DAT_0003c308) *
                                                       DAT_0003d088)) << 0x1f;
                  if (!SUB41(in_fpscr >> 0x1f,0)) {
                    fVar45 = **(float **)(iVar21 + DAT_0003c308) * DAT_0003d088;
                    uVar12 = uVar12 | (uint)(fVar11 < fVar45) << 0x1f |
                             (uint)(fVar11 == fVar45) << 0x1e;
                    in_fpscr = uVar12 | (uint)(NAN(fVar11) || NAN(fVar45)) << 0x1c;
                    bVar2 = (byte)(uVar12 >> 0x18);
                    if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
                      uVar15 = piVar9[0x16];
                      iVar25 = piVar9[0x17];
                      uVar12 = piVar9[0x12];
                      iVar7 = piVar9[0x13];
                      iVar26 = (int)((ulonglong)(lVar54 + 100000) >> 0x20);
                      if ((int)(iVar7 - (iVar25 + (uint)(uVar12 < uVar15))) < 0 !=
                          (SBORROW4(iVar7,iVar25) !=
                          SBORROW4(iVar7 - iVar25,(uint)(uVar12 < uVar15)))) {
                        uVar12 = uVar15;
                        iVar7 = iVar25;
                      }
                      bVar43 = (uint)(lVar54 + 100000) < uVar12;
                      if ((int)(iVar26 - (iVar7 + (uint)bVar43)) < 0 ==
                          (SBORROW4(iVar26,iVar7) != SBORROW4(iVar26 - iVar7,(uint)bVar43)))
                      goto LAB_0003ce14;
                    }
                  }
                  iVar7 = *piVar9;
                  uVar55 = VectorSub(*(undefined8 *)(piVar36 + 0xe),uVar52,8);
                  uVar37 = *local_818;
                  uVar14 = local_818[1];
                  *(undefined8 *)(piVar36 + 0xe) = uVar55;
                  av_get_media_type_string(local_844);
                  av_log(0,0x30,DAT_0003d08c + 0x3cd78,iVar7,uVar37,uVar14);
                  iVar7 = piVar9[1];
                  local_7e0 = 1;
                  local_7dc = 1000000;
                  uVar37 = (undefined4)((ulonglong)uVar52 >> 0x20);
                  uVar55 = av_rescale_q((int)uVar52,uVar37,1,1000000,*(undefined4 *)(iVar7 + 0xc),
                                        *(undefined4 *)(iVar7 + 0x10));
                  iVar8 = local_804;
                  uVar12 = *(uint *)(local_804 + 0x10);
                  uVar15 = *(uint *)(local_804 + 8);
                  iVar25 = *(int *)(local_804 + 0xc);
                  *(uint *)(local_804 + 0x10) = uVar12 - (uint)uVar55;
                  *(uint *)(local_804 + 0x14) =
                       *(int *)(local_804 + 0x14) -
                       ((int)((ulonglong)uVar55 >> 0x20) + (uint)(uVar12 < (uint)uVar55));
                  if (iVar25 != -0x80000000 || uVar15 != 0) {
                    local_7e8 = 1;
                    local_7e4 = 1000000;
                    uVar52 = av_rescale_q((int)uVar52,uVar37,1,1000000,*(undefined4 *)(iVar7 + 0xc),
                                          *(undefined4 *)(iVar7 + 0x10));
                    *(uint *)(iVar8 + 8) = uVar15 - (uint)uVar52;
                    *(uint *)(iVar8 + 0xc) =
                         iVar25 - ((int)((ulonglong)uVar52 >> 0x20) + (uint)(uVar15 < (uint)uVar52))
                    ;
                  }
                }
              }
            }
            else if (lVar54 != -0x8000000000000000) {
              uVar12 = piVar9[0xe];
              iVar7 = piVar9[0xf];
              local_844 = *(uint *)(piVar9[6] + 8);
              if (((iVar7 != -0x80000000 || uVar12 != 0) &&
                  ((*(uint *)(*(int *)(iVar25 + 4) + 8) & 0x200) != 0)) &&
                 (uVar15 = local_818[0x2e], (int)uVar15 < 0x3c)) {
                local_7d8 = 1;
                local_7d4 = 1000000;
                uVar28 = (uint)lVar54 - uVar12;
                uVar41 = (int)((ulonglong)lVar54 >> 0x20) - (iVar7 + (uint)((uint)lVar54 < uVar12));
                lVar5 = lVar53 + CONCAT44(0 << (uVar15 & 0xff) | 1 << (uVar15 - 0x20 & 0xff) |
                                          1U >> (0x20 - uVar15 & 0xff),1 << (uVar15 & 0xff));
                uVar52 = av_rescale_q_rnd((int)lVar5,(int)((ulonglong)lVar5 >> 0x20),*puVar27,
                                          puVar27[1],1,1000000);
                uVar15 = (int)uVar41 >> 0x1f;
                uVar31 = (int)((ulonglong)uVar52 >> 0x20) - (iVar7 + (uint)((uint)uVar52 < uVar12));
                uVar18 = (int)uVar31 >> 0x1f;
                uVar55 = FUN_0003f794((uVar28 ^ uVar15) - uVar15,
                                      (uVar41 ^ uVar15) - (uVar15 + ((uVar28 ^ uVar15) < uVar15)),10
                                      ,0);
                iVar7 = (int)((ulonglong)uVar55 >> 0x20);
                uVar12 = uVar18 ^ (uint)uVar52 - uVar12;
                iVar13 = (uVar18 ^ uVar31) - (uVar18 + (uVar12 < uVar18));
                bVar43 = uVar12 - uVar18 < (uint)uVar55;
                if ((int)(iVar13 - (iVar7 + (uint)bVar43)) < 0 ==
                    (SBORROW4(iVar13,iVar7) != SBORROW4(iVar13 - iVar7,(uint)bVar43)))
                goto LAB_0003dfd4;
                if (1 < local_844) goto LAB_0003ce14;
                uVar52 = CONCAT44(uVar41,uVar28);
                fVar11 = (float)FUN_0003f718(uVar28,uVar41);
                goto LAB_0003ccb8;
              }
LAB_0003dfd4:
              if (local_844 < 2) goto LAB_0003d8e4;
            }
LAB_0003ce14:
            if (*(int *)(iVar8 + 0x14) != -0x80000000 || *(int *)(iVar8 + 0x10) != 0) {
              local_7f4 = 1000000;
              local_7f8 = 1;
              uVar52 = av_rescale_q(*(int *)(iVar8 + 0x10),*(int *)(iVar8 + 0x14),
                                    *(undefined4 *)(piVar9[1] + 0xc),
                                    *(undefined4 *)(piVar9[1] + 0x10),1,1000000);
              *(undefined8 *)(piVar36 + 0x10) = uVar52;
            }
            if (*piVar10 != 0) {
              iVar7 = piVar36[3];
              iVar25 = *(int *)(iVar8 + 0x20);
              uVar37 = av_get_media_type_string(*(undefined4 *)(piVar9[6] + 8));
              uStack_684 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
              uStack_690 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
              uStack_68c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
              local_698 = 0;
              local_688 = 0;
              local_680 = 0;
              iVar26 = *(int *)(local_804 + 0xc);
              uStack_694 = uStack_684;
              uStack_67c = uStack_684;
              if (iVar26 == -0x80000000 && *(int *)(local_804 + 8) == 0) {
                local_698 = *(undefined4 *)(DAT_0003ed48 + 0x3eb80);
                    /* WARNING: Ignoring partial resolution of indirect */
                uStack_694._0_2_ = (short)*(undefined4 *)(DAT_0003ed48 + 0x3eb84);
              }
              else {
                snprintf((char *)&local_698,0x20,(char *)(DAT_0003daf0 + 0x3e138),iVar26,
                         *(int *)(local_804 + 8),iVar26);
              }
              uStack_6a4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
              uStack_6b0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
              uStack_6ac = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
              local_6b8 = 0;
              local_6a8 = 0;
              local_6a0 = 0;
              uStack_6b4 = uStack_6a4;
              uStack_69c = uStack_6a4;
              if (*(int *)(local_804 + 0xc) == -0x80000000 && *(int *)(local_804 + 8) == 0) {
                local_6b8 = *(undefined4 *)(DAT_0003ed44 + 0x3eb64);
                    /* WARNING: Ignoring partial resolution of indirect */
                uStack_6b4._0_2_ = (short)*(undefined4 *)(DAT_0003ed44 + 0x3eb68);
              }
              else {
                pcVar30 = (char *)(DAT_0003daf4 + 0x3e178);
                VectorSignedToFloat(*(undefined4 *)(piVar9[1] + 0xc),(byte)(in_fpscr >> 0x16) & 3);
                VectorSignedToFloat(*(undefined4 *)(piVar9[1] + 0x10),(byte)(in_fpscr >> 0x16) & 3);
                FUN_0003f4e4();
                snprintf((char *)&local_6b8,0x20,pcVar30);
              }
              uStack_6c4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
              uStack_6d0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
              uStack_6cc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
              local_6d8 = 0;
              local_6c8 = 0;
              local_6c0 = 0;
              iVar26 = *(int *)(local_804 + 0x14);
              uStack_6d4 = uStack_6c4;
              uStack_6bc = uStack_6c4;
              if (iVar26 == -0x80000000 && *(int *)(local_804 + 0x10) == 0) {
                local_6d8 = *(undefined4 *)(DAT_0003ed40 + 0x3eb48);
                    /* WARNING: Ignoring partial resolution of indirect */
                uStack_6d4._0_2_ = (short)*(undefined4 *)(DAT_0003ed40 + 0x3eb4c);
              }
              else {
                snprintf((char *)&local_6d8,0x20,(char *)(DAT_0003daf8 + 0x3e1f0),iVar26,
                         *(int *)(local_804 + 0x10),iVar26);
              }
              uStack_6e4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
              uStack_6f0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
              uStack_6ec = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
              local_6f8 = 0;
              local_6e8 = 0;
              local_6e0 = 0;
              uStack_6dc = uStack_6e4;
              if (*(int *)(local_804 + 0x14) == -0x80000000 && *(int *)(local_804 + 0x10) == 0) {
                local_6f8 = *(undefined4 *)(DAT_0003ed3c + 0x3eb30);
                uStack_6f4 = CONCAT22((short)((uint)uStack_6e4 >> 0x10),
                                      (short)*(undefined4 *)(DAT_0003ed3c + 0x3eb34));
              }
              else {
                pcVar30 = (char *)(DAT_0003dafc + 0x3e230);
                VectorSignedToFloat(*(undefined4 *)(piVar9[1] + 0xc),(byte)(in_fpscr >> 0x16) & 3);
                VectorSignedToFloat(*(undefined4 *)(piVar9[1] + 0x10),(byte)(in_fpscr >> 0x16) & 3);
                uStack_6f4 = uStack_6e4;
                FUN_0003f4e4();
                snprintf((char *)&local_6f8,0x20,pcVar30);
              }
              uStack_704 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
              uStack_710 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
              uStack_70c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
              local_700 = 0;
              iVar26 = *(int *)(local_804 + 0x34);
              local_718 = 0;
              local_708 = 0;
              uStack_6fc = uStack_704;
              if (iVar26 == -0x80000000 && *(int *)(local_804 + 0x30) == 0) {
                local_718 = *(undefined4 *)(DAT_0003ed38 + 0x3eb18);
                uStack_714 = CONCAT22((short)((uint)uStack_704 >> 0x10),
                                      (short)*(undefined4 *)(DAT_0003ed38 + 0x3eb1c));
              }
              else {
                uStack_714 = uStack_704;
                snprintf((char *)&local_718,0x20,(char *)(DAT_0003db00 + 0x3e2a4),iVar26,
                         *(int *)(local_804 + 0x30),iVar26);
              }
              uStack_724 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
              uStack_730 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
              uStack_72c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
              local_720 = 0;
              local_738 = 0;
              local_728 = 0;
              uStack_71c = uStack_724;
              if (*(int *)(local_804 + 0x34) == -0x80000000 && *(int *)(local_804 + 0x30) == 0) {
                local_738 = *(undefined4 *)(DAT_0003ed34 + 0x3eb00);
                uStack_734 = CONCAT22((short)((uint)uStack_724 >> 0x10),
                                      (short)*(undefined4 *)(DAT_0003ed34 + 0x3eb04));
              }
              else {
                pcVar30 = (char *)(DAT_0003db04 + 0x3e2e0);
                VectorSignedToFloat(*(undefined4 *)(piVar9[1] + 0xc),(byte)(in_fpscr >> 0x16) & 3);
                VectorSignedToFloat(*(undefined4 *)(piVar9[1] + 0x10),(byte)(in_fpscr >> 0x16) & 3);
                uStack_734 = uStack_724;
                FUN_0003f4e4();
                snprintf((char *)&local_738,0x20,pcVar30);
              }
              uStack_744 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
              uStack_750 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
              uStack_74c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
              local_758 = 0;
              local_748 = 0;
              local_740 = 0;
              iVar8 = *(int *)(*local_878 + *piVar9 * 4);
              iVar26 = *(int *)(iVar8 + 0x38);
              iVar8 = *(int *)(iVar8 + 0x3c);
              uStack_73c = uStack_744;
              if (iVar8 == -0x80000000 && iVar26 == 0) {
                local_758 = *(undefined4 *)(DAT_0003ed30 + 0x3eae8);
                uStack_754 = CONCAT22((short)((uint)uStack_744 >> 0x10),
                                      (short)*(undefined4 *)(DAT_0003ed30 + 0x3eaec));
              }
              else {
                uStack_754 = uStack_744;
                snprintf((char *)&local_758,0x20,(char *)(DAT_0003db08 + 0x3e364),iVar8,iVar26,iVar8
                        );
              }
              local_768 = 0;
              uStack_770 = 0;
              iVar26 = *(int *)(*local_878 + *piVar9 * 4);
              local_760 = local_768;
              if (*(int *)(iVar26 + 0x3c) == -0x80000000 && *(int *)(iVar26 + 0x38) == 0) {
                local_778 = (ulonglong)*(uint6 *)(DAT_0003ed2c + 0x3ead0);
              }
              else {
                pcVar30 = (char *)(DAT_0003db0c + 0x3e3a8);
                local_778 = local_768;
                FUN_0003f4e4();
                snprintf((char *)&local_778,0x20,pcVar30);
              }
              av_log(0,0x20,DAT_0003db10 + 0x3e414,iVar7 + iVar25,uVar37,&local_698);
              iVar8 = local_804;
            }
            uVar52 = *(undefined8 *)(iVar8 + 8);
            iVar7 = *(int *)(*local_878 + *piVar9 * 4);
            iVar25 = *(int *)(iVar7 + 0x58);
            if (0 < iVar25) {
              iVar26 = 0;
LAB_0003ceb8:
              do {
                iVar8 = *(int *)(*piVar34 + (iVar26 + *(int *)(iVar7 + 0xc)) * 4);
                if (*(int *)(iVar8 + 0xf4) != 0) {
                  uVar55 = av_rescale_q((int)uVar52,(int)((ulonglong)uVar52 >> 0x20),
                                        *(undefined4 *)(piVar9[1] + 0xc),
                                        *(undefined4 *)(piVar9[1] + 0x10),
                                        *(undefined4 *)(*(int *)(iVar8 + 4) + 0xc));
                  iVar29 = (int)((ulonglong)uVar55 >> 0x20);
                  iVar13 = (int)uVar55;
                  iVar16 = *(int *)(iVar8 + 0xe4);
                  uVar12 = iVar13 - 1;
                  iVar20 = iVar29 - (uint)(iVar13 == 0);
                  bVar43 = *(uint *)(iVar8 + 0xe0) < uVar12;
                  if ((int)(iVar16 - (iVar20 + (uint)bVar43)) < 0 !=
                      (SBORROW4(iVar16,iVar20) != SBORROW4(iVar16 - iVar20,(uint)bVar43))) {
                    iVar16 = *(int *)(iVar8 + 0xec);
                    bVar43 = uVar12 < *(uint *)(iVar8 + 0xe8);
                    if (((int)(iVar20 - (iVar16 + (uint)bVar43)) < 0 ==
                         (SBORROW4(iVar20,iVar16) != SBORROW4(iVar20 - iVar16,(uint)bVar43))) ||
                       (*(int *)(iVar8 + 0x100) != 0)) {
                      FUN_00035610(iVar8,iVar29,iVar13,iVar29,0);
                      if (0 < *(int *)(iVar8 + 0x10c)) goto LAB_0003cf3c;
                    }
                    else {
                      if (*(int *)(iVar8 + 0x10c) < 1) goto LAB_0003ceac;
LAB_0003cf3c:
                      iVar13 = 0;
                      iVar25 = 0;
                      do {
                        iVar29 = iVar25 * 4;
                        iVar25 = iVar25 + 1;
                        uVar55 = av_buffersrc_get_nb_failed_requests
                                           (**(undefined4 **)(*(int *)(iVar8 + 0x108) + iVar29));
                        iVar13 = iVar13 + (int)uVar55;
                      } while (iVar25 < *(int *)(iVar8 + 0x10c));
                      if (iVar13 != 0) {
                        FUN_000318c4(iVar8,(int)((ulonglong)uVar55 >> 0x20),uVar12,iVar20);
                      }
                    }
                    iVar25 = *(int *)(iVar7 + 0x58);
                    iVar26 = iVar26 + 1;
                    if (iVar25 <= iVar26) break;
                    goto LAB_0003ceb8;
                  }
                }
LAB_0003ceac:
                iVar26 = iVar26 + 1;
              } while (iVar26 < iVar25);
            }
            FUN_00038be8(piVar9,local_804,0);
          }
        }
        else {
          piVar9 = *(int **)(*local_878 + iVar7 * 4);
          if (piVar9[0x17] <= (int)uVar12) {
            iVar26 = *piVar9;
            iVar25 = *(int *)(*(int *)(iVar26 + 0x1c) + uVar12 * 4);
            uVar37 = av_get_media_type_string(**(undefined4 **)(iVar25 + 0xb4));
            uVar14 = *(undefined4 *)(iVar8 + 0x20);
            uVar52 = *(undefined8 *)(iVar8 + 0x38);
            local_4e8 = 0;
            uStack_4f0 = 0;
            local_4e0 = local_4e8;
            if (*(int *)(iVar8 + 0x14) == -0x80000000 && *(int *)(iVar8 + 0x10) == 0) {
              local_4f8 = (ulonglong)*(uint6 *)(DAT_0003ed84 + 0x3ed14);
            }
            else {
              VectorSignedToFloat(*(undefined4 *)(iVar25 + 0xc),(byte)(in_fpscr >> 0x16) & 3);
              VectorSignedToFloat(*(undefined4 *)(iVar25 + 0x10),(byte)(in_fpscr >> 0x16) & 3);
              local_4f8 = local_4e8;
              FUN_0003f4e4();
              snprintf((char *)&local_4f8,0x20,(char *)(DAT_0003dadc + 0x3df3c));
            }
            av_log(iVar26,0x18,DAT_0003dae0 + 0x3df7c,uVar37,iVar7,uVar14,uVar52,&local_4f8);
            piVar9[0x17] = *(int *)(iVar8 + 0x20) + 1;
          }
        }
        if (piVar36[0x20] == 0) {
          av_packet_unref(local_804);
        }
        else {
          av_packet_free(&local_804);
        }
LAB_0003cfbc:
        uVar52 = FUN_0003842c(0);
        goto LAB_0003cfc8;
      }
      if (piVar36[4] == 0) {
LAB_0003d3c4:
        piVar34 = (int *)((ulonglong)uVar52 >> 0x20);
        if (((int)uVar52 != -0x20464f45) &&
           (FUN_0002c1d4(*(undefined4 *)(iVar25 + 0x20),(int)uVar52), piVar34 = extraout_r1_01,
           **(int **)(iVar21 + DAT_0003d094) != 0)) goto LAB_0003c174;
        if (0 < piVar36[0x16]) {
          iVar7 = 0;
          piVar23 = *(int **)(iVar21 + DAT_0003d098);
          do {
            iVar25 = *(int *)(*piVar23 + (iVar7 + piVar36[3]) * 4);
            if (*(int *)(iVar25 + 0x14) != 0) {
              uVar52 = FUN_00038be8(iVar25,0);
              piVar34 = (int *)((ulonglong)uVar52 >> 0x20);
              if (0 < (int)uVar52) goto LAB_0003cfbc;
            }
            iVar25 = *piVar33;
            if (0 < iVar25) {
              iVar26 = 0;
              do {
                while( true ) {
                  iVar8 = *(int *)(*piVar9 + iVar26 * 4);
                  piVar34 = *(int **)(iVar8 + 8);
                  if ((piVar34 != (int *)(iVar7 + piVar36[3])) ||
                     ((*(int *)(iVar8 + 0x164) == 0 && (*(int *)(*(int *)(iVar8 + 0x5c) + 8) != 3)))
                     ) break;
                  FUN_00031720();
                  iVar25 = *piVar33;
                  iVar26 = iVar26 + 1;
                  piVar34 = extraout_r1_02;
                  if (iVar25 <= iVar26) goto LAB_0003d49c;
                }
                iVar26 = iVar26 + 1;
              } while (iVar26 < iVar25);
            }
LAB_0003d49c:
            iVar7 = iVar7 + 1;
          } while (iVar7 < piVar36[0x16]);
        }
        piVar36[1] = 1;
      }
      else {
        iVar8 = piVar36[0x16];
        if (0 < iVar8) {
          iVar13 = 0;
          piVar34 = *(int **)(iVar21 + DAT_0003d098);
          do {
            while (iVar29 = *(int *)(*piVar34 + (iVar13 + piVar36[3]) * 4),
                  *(int *)(iVar29 + 0x14) == 0) {
              iVar13 = iVar13 + 1;
              if (iVar8 <= iVar13) goto LAB_0003d104;
            }
            uVar37 = *(undefined4 *)(iVar29 + 0x18);
            iVar8 = FUN_00038be8(iVar29,0,1);
            if (0 < iVar8) goto LAB_0003cfbc;
            if (*(int *)(iVar29 + 0x10) != 0) {
              avcodec_flush_buffers(uVar37);
            }
            iVar8 = piVar36[0x16];
            iVar13 = iVar13 + 1;
          } while (iVar13 < iVar8);
        }
LAB_0003d104:
        iVar8 = *(int *)(*local_878 + iVar7 * 4);
        if ((iVar8 != 0) && (*(int *)(iVar8 + 0x70) != 0)) {
          av_thread_message_queue_set_err_send(*(int *)(iVar8 + 0x70),0xdfb9b0bb);
          while (iVar13 = av_thread_message_queue_recv(*(undefined4 *)(iVar8 + 0x70),&local_458,0),
                -1 < iVar13) {
            av_packet_free(&local_458);
          }
          pthread_join(*(pthread_t *)(iVar8 + 0x74),(void **)0x0);
          *(undefined4 *)(iVar8 + 0x7c) = 1;
          av_thread_message_queue_free(iVar8 + 0x70);
        }
        dVar51 = *(double *)(iVar25 + 0x28);
        iVar8 = avformat_seek_file(iVar25,0xffffffff,0,0x80000000,dVar51,dVar51,0);
        if (-1 < iVar8) {
          piVar34 = (int *)piVar36[0x16];
          if (0 < (int)piVar34) {
            bVar43 = false;
            iVar8 = piVar36[3];
            piVar35 = *(int **)(iVar21 + DAT_0003d098);
            iVar13 = *piVar35;
            piVar40 = (int *)(iVar13 + iVar8 * 4);
            do {
              piVar24 = piVar40 + 1;
              iVar29 = *piVar40;
              if ((*(int *)(*(int *)(iVar29 + 0x18) + 8) == 1) &&
                 (*(int *)(iVar29 + 0x88) != 0 || *(int *)(iVar29 + 0x8c) != 0)) {
                bVar43 = true;
              }
              piVar40 = piVar24;
            } while ((int *)(iVar13 + ((int)piVar34 + iVar8) * 4) != piVar24);
            iVar13 = 0;
            local_84c = piVar34;
            do {
              iVar8 = *(int *)(*piVar35 + (iVar13 + iVar8) * 4);
              if (bVar43) {
                iVar29 = *(int *)(*(int *)(iVar8 + 0x18) + 8);
                if (iVar29 == 1) {
                  if (*(int *)(iVar8 + 0x88) != 0 || *(int *)(iVar8 + 0x8c) != 0) {
                    iStack_454 = *(int *)(*(int *)(iVar8 + 0x18) + 0x130);
                    pdVar19 = (double *)(*(int *)(iVar8 + 4) + 0xc);
                    dVar51 = *pdVar19;
                    piVar34 = (int *)0x3d26c;
                    local_458 = iVar29;
                    dVar49 = (double)av_rescale_q(*(int *)(iVar8 + 0x88),*(int *)(iVar8 + 0x8c),1,
                                                  iStack_454,*(undefined4 *)pdVar19);
                    piVar40 = *(int **)(iVar8 + 4);
                    goto LAB_0003d274;
                  }
                }
              }
              else {
                piVar40 = *(int **)(iVar8 + 4);
                if (*(int *)(iVar8 + 0xa0) == 0) {
                  dVar49 = DAT_0003daa0;
                  if (piVar40[0x11] != 0) {
                    local_784 = piVar40[0x11];
                    piVar24 = &local_788;
                    uVar12 = piVar40[3];
                    local_788 = piVar40[0x12];
                    goto LAB_0003d358;
                  }
                }
                else {
                  local_77c = *(int *)(iVar8 + 0xa0);
                  uVar12 = piVar40[3];
                  local_780 = *(int *)(iVar8 + 0xa4);
                  piVar24 = &local_780;
LAB_0003d358:
                  dVar51 = (double)(ulonglong)uVar12;
                  piVar34 = (int *)0x3d36c;
                  dVar49 = (double)av_rescale_q(1,0,*piVar24,piVar24[1],uVar12);
                  piVar40 = *(int **)(iVar8 + 4);
                }
LAB_0003d274:
                iVar20 = piVar36[6];
                iVar38 = piVar36[7];
                uVar12 = *(uint *)(iVar8 + 0x70);
                iVar29 = *(int *)(iVar8 + 0x74);
                uVar55 = *(undefined8 *)(iVar8 + 0x70);
                uVar15 = *(uint *)(iVar8 + 0x78);
                iVar16 = *(int *)(iVar8 + 0x7c);
                uVar52 = *(undefined8 *)(iVar8 + 0x78);
                if (iVar20 == 0 && iVar38 == 0) {
                  piVar24 = piVar40 + 3;
                  piVar34 = piVar36 + 8;
                  iVar8 = piVar40[4];
                  *piVar34 = *piVar24;
                  piVar36[9] = iVar8;
                  if ((int)(iVar29 - (iVar16 + (uint)(uVar12 < uVar15))) < 0 ==
                      (SBORROW4(iVar29,iVar16) != SBORROW4(iVar29 - iVar16,(uint)(uVar12 < uVar15)))
                     ) {
LAB_0003d704:
                    local_498 = *(undefined8 *)piVar24;
                  }
                  else {
                    uVar50 = VectorSub(uVar56,dVar49,8);
                    uVar18 = iVar16 - (iVar29 + (uint)(uVar15 < uVar12));
                    uVar28 = (uint)((ulonglong)uVar50 >> 0x20);
                    bVar44 = uVar28 <= uVar18;
                    if (uVar18 == uVar28) {
                      bVar44 = (uint)uVar50 <= uVar15 - uVar12;
                    }
                    if (bVar44) goto LAB_0003d704;
LAB_0003d2c8:
                    local_498 = *(undefined8 *)piVar24;
                    uVar52 = VectorSub(uVar52,uVar55,8);
                    dVar49 = (double)VectorAdd(dVar49,uVar52,8);
                    local_458 = *piVar34;
                    iStack_454 = piVar34[1];
                    if (iVar20 != 0 || iVar38 != 0) goto LAB_0003d6c0;
                  }
                  *(double *)(piVar36 + 6) = dVar49;
                  iVar8 = (int)local_498;
                  iVar29 = local_498._4_4_;
                }
                else {
                  piVar24 = piVar40;
                  if ((int)(iVar29 - (iVar16 + (uint)(uVar12 < uVar15))) < 0 !=
                      (SBORROW4(iVar29,iVar16) != SBORROW4(iVar29 - iVar16,(uint)(uVar12 < uVar15)))
                     ) {
                    uVar50 = VectorSub(uVar56,dVar49,8);
                    uVar18 = uVar15 - uVar12;
                    uVar12 = iVar16 - (iVar29 + (uint)(uVar15 < uVar12));
                    uVar15 = (uint)((ulonglong)uVar50 >> 0x20);
                    uVar28 = (uint)uVar50;
                    bVar44 = uVar12 <= uVar15;
                    bVar42 = uVar15 == uVar12;
                    if (bVar42) {
                      bVar44 = uVar18 <= uVar28;
                    }
                    if (bVar44 && (!bVar42 || uVar28 != uVar18)) {
                      piVar24 = piVar40 + 3;
                      piVar34 = piVar36 + 8;
                    }
                    if (bVar44 && (!bVar42 || uVar28 != uVar18)) goto LAB_0003d2c8;
                  }
                  local_498 = *(undefined8 *)(piVar24 + 3);
                  local_458 = piVar36[8];
                  iStack_454 = piVar36[9];
LAB_0003d6c0:
                  piVar34 = (int *)0x3d6e0;
                  dVar51 = dVar49;
                  iVar16 = av_compare_ts(iVar20,iVar38,local_458,iStack_454,dVar49);
                  local_84c = (int *)piVar36[0x16];
                  iVar8 = local_458;
                  iVar29 = iStack_454;
                  if (iVar16 < 0) {
                    *(double *)(piVar36 + 6) = dVar49;
                    iVar8 = (int)local_498;
                    iVar29 = local_498._4_4_;
                  }
                }
                piVar36[8] = iVar8;
                piVar36[9] = iVar29;
              }
              iVar13 = iVar13 + 1;
              if ((int)local_84c <= iVar13) break;
              iVar8 = piVar36[3];
            } while( true );
          }
          if (0 < piVar36[4]) {
            piVar36[4] = piVar36[4] + -1;
          }
          uVar52 = FUN_00031b48(iVar7);
          if ((int)uVar52 < 0) goto LAB_0003df8c;
          uVar52 = FUN_00031e04(piVar36,&local_804);
          piVar34 = (int *)((ulonglong)uVar52 >> 0x20);
          if ((int)uVar52 == -0xb) goto LAB_0003ea70;
          if (-1 < (int)uVar52) goto LAB_0003c588;
          goto LAB_0003d3c4;
        }
        uVar52 = FUN_00031b48(iVar7);
        if ((int)uVar52 < 0) {
LAB_0003df8c:
          piVar34 = (int *)((ulonglong)uVar52 >> 0x20);
          if ((int)uVar52 != -0xb) {
            if ((int)uVar52 == -0x20464f45) goto LAB_0003d4d8;
            goto LAB_0003cfc8;
          }
        }
        else {
          av_log(0,0x18,DAT_0003ed28 + 0x3ea68);
          uVar52 = CONCAT44(extraout_r1_04,iVar8);
          piVar34 = extraout_r1_04;
          if (iVar8 != -0xb) goto LAB_0003d3c4;
LAB_0003ea70:
          piVar36[2] = 1;
        }
      }
      if (*(int *)(*(int *)(*local_878 + *piVar10 * 4) + 8) != 0) {
        local_87c[0x58] = 1;
      }
      goto LAB_0003d4d8;
    }
LAB_0003d000:
    iVar7 = *piVar33;
    if (0 < iVar7) {
      piVar9 = (int *)*piVar9;
      iVar25 = *piVar9;
      if (*(int *)(iVar25 + 0x160) == 0) {
        iVar26 = 0;
        piVar34 = piVar9;
        do {
          iVar26 = iVar26 + 1;
          if (iVar26 == iVar7) goto LAB_0003d044;
          piVar34 = piVar34 + 1;
        } while (*(int *)(*piVar34 + 0x160) == 0);
      }
      iVar26 = *local_864;
      if (0 < iVar26) {
        piVar10 = (int *)**(int **)(iVar21 + DAT_0003d0a0);
        piVar34 = piVar10;
        do {
          piVar23 = piVar34 + 1;
          *(undefined4 *)(*piVar34 + 8) = 0;
          piVar34 = piVar23;
        } while (piVar10 + iVar26 != piVar23);
      }
      piVar34 = piVar9 + iVar7;
      while( true ) {
        piVar9 = piVar9 + 1;
        *(undefined4 *)(iVar25 + 0x160) = 0;
        if (piVar34 == piVar9) break;
        iVar25 = *piVar9;
      }
      av_usleep(10000);
      piVar34 = extraout_r1_03;
      goto LAB_0003d4d8;
    }
  }
LAB_0003d044:
  av_log(0,0x28,DAT_0003d090 + 0x3d058);
  piVar34 = extraout_r1_00;
LAB_0003d4d8:
  FUN_00032118(0,piVar34,auVar47._8_4_,auVar47._12_4_);
  if (*(int *)(DAT_0003d09c + 0x3d5dc) != 0) goto LAB_0003bfc4;
  goto LAB_0003bf00;
}



/* ===== FUN_0003efe8 @ 0003efe8 size=156 ===== */

undefined4 FUN_0003efe8(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_118 [260];
  
  iVar2 = param_1[6];
  if (*(int *)(iVar2 + 0x310) == 0) {
    if (*(int *)(iVar2 + 0x314) <= (int)param_1[0x2b]) {
      av_channel_layout_default(iVar2 + 0x310);
      if (*(int *)(iVar2 + 0x310) != 0) {
        av_channel_layout_describe(iVar2 + 0x310,auStack_118,0x100);
        av_log(0,0x18,DAT_0003f084 + 0x3f078,*param_1,*(undefined4 *)param_1[1],auStack_118);
        return 1;
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* ===== FUN_0003f088 @ 0003f088 size=220 ===== */

ulonglong FUN_0003f088(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  if (param_2 == 0) {
    uVar2 = raise(8);
    return (ulonglong)uVar2;
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
    return CONCAT44(uVar2,param_1);
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
    return CONCAT44(uVar2,param_1);
  }
  if ((uVar2 & uVar2 - 1) == 0) {
    uVar4 = uVar4 >> (0x1fU - LZCOUNT(uVar2) & 0xff);
    if ((int)uVar5 < 0) {
      uVar4 = -uVar4;
    }
    return CONCAT44(uVar2,uVar4);
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
  return CONCAT44(uVar3,uVar1);
}



/* ===== FUN_0003f4d0 @ 0003f4d0 size=304 ===== */

ulonglong FUN_0003f4d0(uint param_1,uint param_2)

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
LAB_0003f2a8:
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
  if ((param_2 & 0x100000) != 0) goto LAB_0003f2a8;
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
      goto LAB_0003f328;
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
LAB_0003f328:
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



/* ===== FUN_0003f4e4 @ 0003f4e4 size=96 ===== */

ulonglong FUN_0003f4e4(uint param_1,uint param_2)

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
LAB_0003f2a8:
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
  if ((uVar4 & 0x100000) != 0) goto LAB_0003f2a8;
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
      goto LAB_0003f328;
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
LAB_0003f328:
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



/* ===== FUN_0003f718 @ 0003f718 size=124 ===== */

uint FUN_0003f718(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  if (param_1 == 0 && param_2 == 0) {
    return param_1;
  }
  uVar5 = param_2 & 0x80000000;
  if ((int)uVar5 < 0) {
    bVar7 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(param_2 + bVar7);
  }
  uVar1 = param_1;
  uVar2 = param_2;
  if (param_2 == 0) {
    uVar1 = 0;
    uVar2 = param_1;
  }
  uVar5 = uVar5 | 0x5b000000;
  if (param_2 == 0) {
    uVar5 = uVar5 + 0xf0000000;
  }
  uVar3 = LZCOUNT(uVar2);
  uVar4 = uVar3 - 8;
  iVar6 = (uVar5 - 0x800000) + uVar4 * -0x800000;
  if (uVar3 < 8) {
    uVar5 = uVar2 << uVar3 + 0x18;
    uVar2 = (iVar6 + (uVar2 >> (0x20 - (uVar3 + 0x18) & 0xff))) - ((int)uVar5 >> 0x1f);
    if (uVar1 == 0 && (uVar5 & 0x7fffffff) == 0) {
      uVar2 = uVar2 & ~(uVar5 >> 0x1f);
    }
    return uVar2;
  }
  uVar5 = uVar1 << (uVar4 & 0xff);
  uVar2 = iVar6 + (uVar2 << (uVar4 & 0xff)) + (uVar1 >> (0x20 - uVar4 & 0xff)) +
          (uint)(0x7fffffff < uVar5);
  if (uVar5 == 0x80000000) {
    uVar2 = uVar2 & 0xfffffffe;
  }
  return uVar2;
}



/* ===== FUN_0003f794 @ 0003f794 size=228 ===== */

undefined8 FUN_0003f794(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  int local_8;
  
  if (param_4 == 0 && param_3 == 0) {
    if (param_2 < 0) {
      param_2 = -0x80000000;
    }
    else if (param_2 != 0 || param_1 != 0) {
      param_2 = 0x7fffffff;
    }
    local_8 = param_2;
    iVar1 = raise(8);
    return CONCAT44(local_8,iVar1);
  }
  if (-1 < param_2) {
    if (param_4 < 0) {
      uVar2 = FUN_0003f9c8(param_1,param_2,-param_3,-param_4 - (uint)(param_3 != 0),&local_8);
      return CONCAT44(-(int)((ulonglong)uVar2 >> 0x20) - (uint)((int)uVar2 != 0),-(int)uVar2);
    }
    uVar2 = FUN_0003f9c8();
    return uVar2;
  }
  iVar1 = -param_2 - (uint)(param_1 != 0);
  if (param_4 < 0) {
    uVar2 = FUN_0003f9c8(-param_1,iVar1,-param_3,-param_4 - (uint)(param_3 != 0),&local_8);
    return uVar2;
  }
  uVar2 = FUN_0003f9c8(-param_1,iVar1,param_3,param_4,&local_8);
  return CONCAT44(-(int)((ulonglong)uVar2 >> 0x20) - (uint)((int)uVar2 != 0),-(int)uVar2);
}



/* ===== FUN_0003f8b4 @ 0003f8b4 size=44 ===== */

int FUN_0003f8b4(float param_1)

{
  int iVar1;
  
  if (0.0 <= param_1) {
    iVar1 = FUN_0003f910();
    return iVar1;
  }
  iVar1 = FUN_0003f910(-param_1);
  return -iVar1;
}



/* ===== FUN_0003f8e0 @ 0003f8e0 size=44 ===== */

int FUN_0003f8e0(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  if (0.0 <= (double)CONCAT44(param_2,param_1)) {
    iVar1 = FUN_0003f970();
    return iVar1;
  }
  iVar1 = FUN_0003f970(param_1,param_2 ^ 0x80000000);
  return -iVar1;
}



/* ===== FUN_0003f910 @ 0003f910 size=76 ===== */

undefined8 FUN_0003f910(float param_1)

{
  int iVar1;
  uint in_fpscr;
  double dVar2;
  
  dVar2 = (double)param_1 * DAT_0003f968;
  iVar1 = (uint)(0.0 < dVar2) * (int)(longlong)dVar2;
  dVar2 = (double)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  dVar2 = (double)param_1 + -dVar2 * DAT_0003f960;
  return CONCAT44(iVar1,(uint)(0.0 < dVar2) * (int)(longlong)dVar2);
}



/* ===== FUN_0003f970 @ 0003f970 size=72 ===== */

undefined8 FUN_0003f970(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint in_fpscr;
  double dVar2;
  
  dVar2 = (double)CONCAT44(param_2,param_1) * DAT_0003f9b8;
  iVar1 = (uint)(0.0 < dVar2) * (int)(longlong)dVar2;
  dVar2 = (double)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  dVar2 = (double)CONCAT44(param_2,param_1) + -dVar2 * DAT_0003f9c0;
  return CONCAT44(iVar1,(uint)(0.0 < dVar2) * (int)(longlong)dVar2);
}



/* ===== FUN_0003f9c8 @ 0003f9c8 size=328 ===== */

undefined8 FUN_0003f9c8(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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



/* ===== _fini @ 0003fb10 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0005c004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0005c010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_buffersrc_add_frame_flags @ 0005c01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_buffersrc_add_frame_flags(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lrintf @ 0005c020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long lrintf(float __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avio_read @ 0005c024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avio_read(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avdevice_configuration @ 0005c028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avdevice_configuration(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avformat_free_context @ 0005c02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avformat_free_context(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_channel_layout_standard @ 0005c030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_channel_layout_standard(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_channel_layout_copy @ 0005c034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_channel_layout_copy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_match_name @ 0005c038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_match_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 0005c03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avcodec_receive_packet @ 0005c040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avcodec_receive_packet(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_sdp_create @ 0005c044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_sdp_create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avcodec_free_context @ 0005c048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avcodec_free_context(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sws_isSupportedInput @ 0005c04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sws_isSupportedInput(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::postproc_configuration @ 0005c050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void postproc_configuration(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_cpu_force_count @ 0005c054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_cpu_force_count(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_parse_video_size @ 0005c058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_parse_video_size(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_thread_message_queue_recv @ 0005c05c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_thread_message_queue_recv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avcodec_get_hw_config @ 0005c060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avcodec_get_hw_config(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_stream_new_side_data @ 0005c064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_stream_new_side_data(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avformat_close_input @ 0005c068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avformat_close_input(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_hwdevice_find_type_by_name @ 0005c06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_hwdevice_find_type_by_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avformat_network_deinit @ 0005c070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avformat_network_deinit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_find_best_pix_fmt_of_2 @ 0005c074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_find_best_pix_fmt_of_2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 0005c078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_input_audio_device_next @ 0005c07c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_input_audio_device_next(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avdevice_list_input_sources @ 0005c080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avdevice_list_input_sources(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_frame_free @ 0005c084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_frame_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_log2 @ 0005c088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_log2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::swscale_version @ 0005c08c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void swscale_version(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_force_cpu_flags @ 0005c090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_force_cpu_flags(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vfprintf @ 0005c094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avcodec_configuration @ 0005c098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avcodec_configuration(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::time @ 0005c09c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_fifo_write @ 0005c0a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_fifo_write(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avcodec_parameters_copy @ 0005c0a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avcodec_parameters_copy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_log @ 0005c0a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_log(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avcodec_get_name @ 0005c0ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avcodec_get_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_rescale @ 0005c0b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_rescale(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_channel_layout_uninit @ 0005c0b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_channel_layout_uninit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_packet_new_side_data @ 0005c0b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_packet_new_side_data(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0005c0bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0005c0c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_hwdevice_get_type_name @ 0005c0c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_hwdevice_get_type_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_expr_parse @ 0005c0c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_expr_parse(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 0005c0cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_channel_name @ 0005c0d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_channel_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_interleaved_write_frame @ 0005c0d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_interleaved_write_frame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avfilter_version @ 0005c0d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avfilter_version(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avio_open2 @ 0005c0dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avio_open2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avfilter_graph_set_auto_convert @ 0005c0e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avfilter_graph_set_auto_convert(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avio_read_to_bprint @ 0005c0e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avio_read_to_bprint(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 0005c0e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_get_pix_fmt_name @ 0005c0ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_get_pix_fmt_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avfilter_configuration @ 0005c0f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avfilter_configuration(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_thread_message_queue_set_err_send @ 0005c0f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_thread_message_queue_set_err_send(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::llrint @ 0005c0f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

longlong llrint(double __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_dict_set_int @ 0005c0fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_dict_set_int(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::llrintf @ 0005c100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

longlong llrintf(float __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_malloc @ 0005c104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_malloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avio_open @ 0005c108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avio_open(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_rescale_q @ 0005c10c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_rescale_q(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_fifo_freep2 @ 0005c110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_fifo_freep2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avfilter_graph_create_filter @ 0005c114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avfilter_graph_create_filter(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::localtime @ 0005c118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avio_seek @ 0005c11c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avio_seek(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_strcasecmp @ 0005c120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_strcasecmp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avio_print_string_array @ 0005c124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avio_print_string_array(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avcodec_get_class @ 0005c128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avcodec_get_class(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_thread_message_queue_set_err_recv @ 0005c12c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_thread_message_queue_set_err_recv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sws_isSupportedOutput @ 0005c130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sws_isSupportedOutput(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 0005c134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 0005c138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_buffersrc_get_nb_failed_requests @ 0005c13c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_buffersrc_get_nb_failed_requests(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avcodec_open2 @ 0005c140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avcodec_open2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avio_r8 @ 0005c144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avio_r8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tcsetattr @ 0005c148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcsetattr(int __fd,int __optional_actions,termios *__termios_p)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_buffersink_get_ch_layout @ 0005c14c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_buffersink_get_ch_layout(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 0005c150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_bprintf @ 0005c154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_bprintf(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_codec_get_tag2 @ 0005c158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_codec_get_tag2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avformat_network_init @ 0005c15c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avformat_network_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_buffersrc_parameters_set @ 0005c160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_buffersrc_parameters_set(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_buffersink_get_sample_aspect_ratio @ 0005c164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_buffersink_get_sample_aspect_ratio(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avformat_version @ 0005c168 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avformat_version(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_frame_move_ref @ 0005c16c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_frame_move_ref(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_compare_ts @ 0005c170 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_compare_ts(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0005c174 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avformat_alloc_output_context2 @ 0005c178 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avformat_alloc_output_context2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_get_sample_fmt_string @ 0005c17c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_get_sample_fmt_string(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_parse_cpu_caps @ 0005c180 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_parse_cpu_caps(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_get_bits_per_pixel @ 0005c184 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_get_bits_per_pixel(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_pkt_dump_log2 @ 0005c188 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_pkt_dump_log2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_buffer_ref @ 0005c18c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_buffer_ref(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avfilter_pad_get_name @ 0005c190 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avfilter_pad_get_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_strdup @ 0005c194 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_strdup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 0005c198 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avcodec_alloc_context3 @ 0005c19c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avcodec_alloc_context3(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_stream_get_class @ 0005c1a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_stream_get_class(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_opt_show2 @ 0005c1a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_opt_show2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_get_exact_bits_per_sample @ 0005c1a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_get_exact_bits_per_sample(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_codec_is_encoder @ 0005c1ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_codec_is_encoder(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_bsf_get_by_name @ 0005c1b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_bsf_get_by_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_buffersrc_add_frame @ 0005c1b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_buffersrc_add_frame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strftime @ 0005c1b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strftime(char *__s,size_t __maxsize,char *__format,tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fgetc_unlocked @ 0005c1bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fgetc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_get_cpu_flags @ 0005c1c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_get_cpu_flags(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avcodec_find_encoder_by_name @ 0005c1c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avcodec_find_encoder_by_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 0005c1c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avfilter_graph_alloc @ 0005c1cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avfilter_graph_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_pix_fmt_desc_get_id @ 0005c1d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_pix_fmt_desc_get_id(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_bsf_list_parse_str @ 0005c1d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_bsf_list_parse_str(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_channel_layout_describe @ 0005c1d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_channel_layout_describe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_reallocp_array @ 0005c1dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_reallocp_array(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_get_audio_frame_duration @ 0005c1e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_get_audio_frame_duration(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_guess_frame_rate @ 0005c1e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_guess_frame_rate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_memdup @ 0005c1e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_memdup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getrusage @ 0005c1ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getrusage(__rusage_who_t __who,rusage *__usage)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_opt_set @ 0005c1f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_opt_set(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_thread_message_queue_alloc @ 0005c1f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_thread_message_queue_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avio_close @ 0005c1f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avio_close(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 0005c1fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avformat_transfer_internal_stream_timing_info @ 0005c200 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avformat_transfer_internal_stream_timing_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_fifo_alloc2 @ 0005c204 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_fifo_alloc2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 0005c208 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_read_frame @ 0005c20c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_read_frame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avcodec_descriptor_get @ 0005c210 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avcodec_descriptor_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_freep @ 0005c214 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_freep(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avcodec_find_encoder @ 0005c218 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avcodec_find_encoder(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::select @ 0005c21c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_thread_message_queue_free @ 0005c220 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_thread_message_queue_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avfilter_filter_pad_count @ 0005c224 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avfilter_filter_pad_count(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0005c228 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_buffersink_get_time_base @ 0005c22c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_buffersink_get_time_base(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avio_size @ 0005c230 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avio_size(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avio_check @ 0005c234 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avio_check(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_input_video_device_next @ 0005c238 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_input_video_device_next(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_dict_set @ 0005c23c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_dict_set(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avfilter_graph_alloc_filter @ 0005c240 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avfilter_graph_alloc_filter(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_log_get_flags @ 0005c244 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_log_get_flags(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 0005c248 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avutil_version @ 0005c24c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avutil_version(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0005c250 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_bsf_init @ 0005c254 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_bsf_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_frame_copy_props @ 0005c258 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_frame_copy_props(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_get_sample_fmt_name @ 0005c25c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_get_sample_fmt_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_bprint_init @ 0005c260 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_bprint_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avformat_get_class @ 0005c264 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avformat_get_class(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_channel_layout_check @ 0005c268 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_channel_layout_check(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avcodec_close @ 0005c26c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avcodec_close(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_calloc @ 0005c270 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_calloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::swresample_version @ 0005c274 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void swresample_version(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avcodec_find_decoder_by_name @ 0005c278 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avcodec_find_decoder_by_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_max_alloc @ 0005c27c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_max_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_frame_clone @ 0005c280 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_frame_clone(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avcodec_parameters_from_context @ 0005c284 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avcodec_parameters_from_context(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_opt_set_int @ 0005c288 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_opt_set_int(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_find_nearest_q_idx @ 0005c28c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_find_nearest_q_idx(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_add_q @ 0005c290 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_add_q(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tcgetattr @ 0005c294 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcgetattr(int __fd,termios *__termios_p)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_get_media_type_string @ 0005c298 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_get_media_type_string(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_hwdevice_ctx_create_derived @ 0005c29c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_hwdevice_ctx_create_derived(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::swresample_configuration @ 0005c2a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void swresample_configuration(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avcodec_send_packet @ 0005c2a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avcodec_send_packet(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avfilter_init_str @ 0005c2a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avfilter_init_str(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_guess_format @ 0005c2ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_guess_format(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_buffersink_set_frame_size @ 0005c2b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_buffersink_set_frame_size(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_buffersink_get_frame_rate @ 0005c2b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_buffersink_get_frame_rate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avformat_open_input @ 0005c2b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avformat_open_input(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_bsf_free @ 0005c2bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_bsf_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_packet_move_ref @ 0005c2c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_packet_move_ref(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_log_set_callback @ 0005c2c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_log_set_callback(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_expr_free @ 0005c2c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_expr_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_opt_eval_int @ 0005c2cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_opt_eval_int(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avcodec_receive_frame @ 0005c2d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avcodec_receive_frame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sigfillset @ 0005c2d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigfillset(sigset_t *__set)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_log_set_flags @ 0005c2d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_log_set_flags(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_reduce @ 0005c2dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_reduce(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0005c2e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avformat_write_header @ 0005c2e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avformat_write_header(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_parse_time @ 0005c2e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_parse_time(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_get_bytes_per_sample @ 0005c2ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_get_bytes_per_sample(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avio_closep @ 0005c2f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avio_closep(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_hwframe_transfer_data @ 0005c2f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_hwframe_transfer_data(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_dict_parse_string @ 0005c2f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_dict_parse_string(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_fifo_read @ 0005c2fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_fifo_read(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avformat_match_stream_specifier @ 0005c300 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avformat_match_stream_specifier(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avdevice_register_all @ 0005c304 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avdevice_register_all(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_parse_video_rate @ 0005c308 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_parse_video_rate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_bprint_clear @ 0005c30c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_bprint_clear(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avcodec_parameters_alloc @ 0005c310 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avcodec_parameters_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_bprint_chars @ 0005c314 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_bprint_chars(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_get_known_color_name @ 0005c318 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_get_known_color_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_bprint_finalize @ 0005c31c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_bprint_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_program_add_stream_index @ 0005c320 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_program_add_stream_index(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_pix_fmt_desc_next @ 0005c324 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_pix_fmt_desc_next(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_mallocz @ 0005c328 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_mallocz(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_frame_get_buffer @ 0005c32c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_frame_get_buffer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_output_audio_device_next @ 0005c330 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_output_audio_device_next(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_stream_get_parser @ 0005c334 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_stream_get_parser(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avfilter_graph_parse2 @ 0005c338 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avfilter_graph_parse2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0005c33c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avcodec_parameters_to_context @ 0005c340 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avcodec_parameters_to_context(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_get_channel_layout @ 0005c344 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_get_channel_layout(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_bsf_send_packet @ 0005c348 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_bsf_send_packet(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_opt_child_class_iterate @ 0005c34c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_opt_child_class_iterate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avio_write @ 0005c350 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avio_write(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 0005c354 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_free @ 0005c358 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gmtime @ 0005c35c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * gmtime(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0005c360 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_default_item_name @ 0005c364 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_default_item_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_get_picture_type_char @ 0005c368 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_get_picture_type_char(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_display_rotation_set @ 0005c36c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_display_rotation_set(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_channel_layout_describe_bprint @ 0005c370 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_channel_layout_describe_bprint(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avcodec_version @ 0005c374 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avcodec_version(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avfilter_graph_queue_command @ 0005c378 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avfilter_graph_queue_command(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_demuxer_iterate @ 0005c37c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_demuxer_iterate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_bsf_get_class @ 0005c380 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_bsf_get_class(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_channel_layout_index_from_channel @ 0005c384 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_channel_layout_index_from_channel(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avfilter_get_by_name @ 0005c388 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avfilter_get_by_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sigaction @ 0005c38c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 0005c390 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_opt_get_key_value @ 0005c394 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_opt_get_key_value(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_find_input_format @ 0005c398 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_find_input_format(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avfilter_graph_config @ 0005c39c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avfilter_graph_config(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_rescale_q_rnd @ 0005c3a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_rescale_q_rnd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avformat_new_stream @ 0005c3a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avformat_new_stream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avio_enum_protocols @ 0005c3a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avio_enum_protocols(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_strlcatf @ 0005c3ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_strlcatf(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_filename_number_test @ 0005c3b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_filename_number_test(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avfilter_inout_free @ 0005c3b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avfilter_inout_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_codec_iterate @ 0005c3b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_codec_iterate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_gettime_relative @ 0005c3bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_gettime_relative(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_strerror @ 0005c3c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_strerror(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcspn @ 0005c3c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strcspn(char *__s,char *__reject)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avcodec_decode_subtitle2 @ 0005c3c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avcodec_decode_subtitle2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_packet_make_refcounted @ 0005c3cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_packet_make_refcounted(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avdevice_free_list_devices @ 0005c3d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avdevice_free_list_devices(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_dict_get @ 0005c3d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_dict_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_codec_is_decoder @ 0005c3d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_codec_is_decoder(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_buffersink_get_sample_rate @ 0005c3dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_buffersink_get_sample_rate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_stream_get_codec_timebase @ 0005c3e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_stream_get_codec_timebase(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 0005c3e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 0005c3e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_hwdevice_ctx_create @ 0005c3ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_hwdevice_ctx_create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_frame_unref @ 0005c3f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_frame_unref(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_get_pix_fmt @ 0005c3f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_get_pix_fmt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0005c3f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_strtod @ 0005c3fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_strtod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sws_get_class @ 0005c400 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sws_get_class(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_frame_alloc @ 0005c404 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_frame_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_opt_set_dict @ 0005c408 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_opt_set_dict(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_buffersink_get_frame_flags @ 0005c40c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_buffersink_get_frame_flags(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_bsf_iterate @ 0005c410 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_bsf_iterate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_rescale_delta @ 0005c414 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_rescale_delta(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::swr_get_class @ 0005c418 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void swr_get_class(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_new_program @ 0005c41c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_new_program(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_dict_free @ 0005c420 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_dict_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_strtok @ 0005c424 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_strtok(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 0005c428 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::postproc_version @ 0005c42c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void postproc_version(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avcodec_descriptor_next @ 0005c430 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avcodec_descriptor_next(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avformat_query_codec @ 0005c434 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avformat_query_codec(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_buffersrc_close @ 0005c438 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_buffersrc_close(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avformat_find_stream_info @ 0005c43c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avformat_find_stream_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_fifo_can_read @ 0005c440 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_fifo_can_read(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_channel_layout_from_mask @ 0005c444 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_channel_layout_from_mask(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 0005c448 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avformat_alloc_context @ 0005c44c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avformat_alloc_context(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_strlcpy @ 0005c450 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_strlcpy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_get_token @ 0005c454 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_get_token(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avfilter_graph_send_command @ 0005c458 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avfilter_graph_send_command(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0005c45c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::swscale_configuration @ 0005c460 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void swscale_configuration(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_stream_get_side_data @ 0005c464 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_stream_get_side_data(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_strndup @ 0005c468 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_strndup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_log_get_level @ 0005c46c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_log_get_level(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0005c470 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgetc @ 0005c474 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fgetc(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_realloc_array @ 0005c478 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_realloc_array(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_guess_codec @ 0005c47c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_guess_codec(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_bsf_receive_packet @ 0005c480 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_bsf_receive_packet(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avio_flush @ 0005c484 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avio_flush(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avutil_configuration @ 0005c488 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avutil_configuration(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_pix_fmt_desc_get @ 0005c48c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_pix_fmt_desc_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setrlimit64 @ 0005c490 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */

int setrlimit64(__rlimit_resource_t __resource,rlimit64 *__rlimits)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_packet_unref @ 0005c494 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_packet_unref(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_strstart @ 0005c498 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_strstart(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_packet_alloc @ 0005c49c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_packet_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 0005c4a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_codec_get_id @ 0005c4a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_codec_get_id(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 0005c4a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_channel_layout_from_string @ 0005c4ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_channel_layout_from_string(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_fifo_grow2 @ 0005c4b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_fifo_grow2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_dict_copy @ 0005c4b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_dict_copy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_channel_layout_default @ 0005c4b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_channel_layout_default(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avcodec_send_frame @ 0005c4bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avcodec_send_frame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_packet_get_side_data @ 0005c4c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_packet_get_side_data(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_opt_eval_flags @ 0005c4c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_opt_eval_flags(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avcodec_flush_buffers @ 0005c4c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avcodec_flush_buffers(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::floor @ 0005c4cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double floor(double __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setvbuf @ 0005c4d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setvbuf(FILE *__stream,char *__buf,int __modes,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_stream_get_end_pts @ 0005c4d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_stream_get_end_pts(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_hwdevice_iterate_types @ 0005c4d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_hwdevice_iterate_types(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::log10 @ 0005c4dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double log10(double __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 0005c4e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_output_video_device_next @ 0005c4e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_output_video_device_next(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 0005c4e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_malloc_array @ 0005c4ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_malloc_array(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_fifo_can_write @ 0005c4f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_fifo_can_write(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avfilter_pad_get_type @ 0005c4f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avfilter_pad_get_type(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avdevice_version @ 0005c4f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avdevice_version(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtok @ 0005c4fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strtok(char *__s,char *__delim)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_strlcat @ 0005c500 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_strlcat(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 0005c504 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_log_format_line @ 0005c508 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_log_format_line(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_packet_rescale_ts @ 0005c50c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_packet_rescale_ts(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_usleep @ 0005c510 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_usleep(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_buffersink_get_h @ 0005c514 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_buffersink_get_h(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_filter_iterate @ 0005c518 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_filter_iterate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_buffersink_get_hw_frames_ctx @ 0005c51c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_buffersink_get_hw_frames_ctx(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_log_default_callback @ 0005c520 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_log_default_callback(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avcodec_descriptor_get_by_name @ 0005c524 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avcodec_descriptor_get_by_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_muxer_iterate @ 0005c528 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_muxer_iterate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avfilter_link @ 0005c52c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avfilter_link(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 0005c530 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avcodec_find_decoder @ 0005c534 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avcodec_find_decoder(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avformat_seek_file @ 0005c538 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avformat_seek_file(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_parse_ratio @ 0005c53c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_parse_ratio(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_get_sample_fmt @ 0005c540 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_get_sample_fmt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::round @ 0005c544 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double round(double __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avio_find_protocol_name @ 0005c548 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avio_find_protocol_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_log_set_level @ 0005c54c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_log_set_level(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_display_rotation_get @ 0005c550 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_display_rotation_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_expr_eval @ 0005c554 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_expr_eval(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_realloc_f @ 0005c558 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_realloc_f(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avfilter_graph_request_oldest @ 0005c55c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avfilter_graph_request_oldest(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_disposition_to_string @ 0005c560 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_disposition_to_string(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avio_protocol_get_class @ 0005c564 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avio_protocol_get_class(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 0005c568 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_opt_find @ 0005c56c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_opt_find(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0005c570 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 0005c574 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_mul_q @ 0005c578 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_mul_q(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_buffersink_get_w @ 0005c57c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_buffersink_get_w(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_buffersink_get_type @ 0005c580 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_buffersink_get_type(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avfilter_get_class @ 0005c584 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avfilter_get_class(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avdevice_list_output_sinks @ 0005c588 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avdevice_list_output_sinks(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_write_trailer @ 0005c58c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_write_trailer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_buffersink_get_format @ 0005c590 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_buffersink_get_format(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_channel_layout_compare @ 0005c594 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_channel_layout_compare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avcodec_encode_subtitle @ 0005c598 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avcodec_encode_subtitle(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_buffersrc_parameters_alloc @ 0005c59c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_buffersrc_parameters_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avfilter_graph_free @ 0005c5a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avfilter_graph_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_asprintf @ 0005c5a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_asprintf(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_packet_ref @ 0005c5a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_packet_ref(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avsubtitle_free @ 0005c5ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avsubtitle_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_dump_format @ 0005c5b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_dump_format(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_dynarray_add_nofree @ 0005c5b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_dynarray_add_nofree(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 0005c5b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fputc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_channel_description @ 0005c5bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_channel_description(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_buffer_unref @ 0005c5c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_buffer_unref(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avformat_configuration @ 0005c5c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avformat_configuration(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::qsort @ 0005c5c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_frame_get_side_data @ 0005c5cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_frame_get_side_data(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avcodec_parameters_free @ 0005c5d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avcodec_parameters_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vsnprintf @ 0005c5d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_packet_free @ 0005c5d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_packet_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_thread_message_queue_send @ 0005c5dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_thread_message_queue_send(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


