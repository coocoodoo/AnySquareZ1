// libavdevice.so.59.7.100 — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00012258 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::opendir @ 0001227c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*(code *)PTR_opendir_0002b00c)(__name);
  return pDVar1;
}



/* ===== <EXTERNAL>::av_gettime_relative @ 00012288 size=12 ===== */

void av_gettime_relative(void)

{
  (*(code *)PTR_av_gettime_relative_0002b010)();
  return;
}



/* ===== <EXTERNAL>::av_image_get_buffer_size @ 00012294 size=12 ===== */

void av_image_get_buffer_size(void)

{
  (*(code *)PTR_av_image_get_buffer_size_0002b014)();
  return;
}



/* ===== <EXTERNAL>::av_packet_add_side_data @ 000122a0 size=12 ===== */

void av_packet_add_side_data(void)

{
  (*(code *)PTR_av_packet_add_side_data_0002b018)();
  return;
}



/* ===== <EXTERNAL>::ioctl @ 000122ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_0002b01c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::av_buffersink_get_frame_flags @ 000122b8 size=12 ===== */

void av_buffersink_get_frame_flags(void)

{
  (*(code *)PTR_av_buffersink_get_frame_flags_0002b020)();
  return;
}



/* ===== <EXTERNAL>::av_malloc @ 000122c4 size=12 ===== */

void av_malloc(void)

{
  (*(code *)PTR_av_malloc_0002b024)();
  return;
}



/* ===== <EXTERNAL>::abort @ 000122d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0002b028)();
  return;
}



/* ===== <EXTERNAL>::write @ 000122dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_0002b02c)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::av_pix_fmt_desc_get @ 000122e8 size=12 ===== */

void av_pix_fmt_desc_get(void)

{
  (*(code *)PTR_av_pix_fmt_desc_get_0002b030)();
  return;
}



/* ===== <EXTERNAL>::av_parse_video_rate @ 000122f4 size=12 ===== */

void av_parse_video_rate(void)

{
  (*(code *)PTR_av_parse_video_rate_0002b034)();
  return;
}



/* ===== <EXTERNAL>::sscanf @ 00012300 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_0002b038)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::av_get_sample_fmt_name @ 0001230c size=12 ===== */

void av_get_sample_fmt_name(void)

{
  (*(code *)PTR_av_get_sample_fmt_name_0002b03c)();
  return;
}



/* ===== <EXTERNAL>::av_packet_move_ref @ 00012318 size=12 ===== */

void av_packet_move_ref(void)

{
  (*(code *)PTR_av_packet_move_ref_0002b040)();
  return;
}



/* ===== <EXTERNAL>::av_frame_get_side_data @ 00012324 size=12 ===== */

void av_frame_get_side_data(void)

{
  (*(code *)PTR_av_frame_get_side_data_0002b044)();
  return;
}



/* ===== <EXTERNAL>::snprintf @ 00012330 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0002b048)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::av_dynarray_add_nofree @ 0001233c size=12 ===== */

void av_dynarray_add_nofree(void)

{
  (*(code *)PTR_av_dynarray_add_nofree_0002b04c)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00012348 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0002b050)();
  return;
}



/* ===== <EXTERNAL>::strcmp @ 00012354 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0002b054)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::avio_closep @ 00012360 size=12 ===== */

void avio_closep(void)

{
  (*(code *)PTR_avio_closep_0002b058)();
  return;
}



/* ===== <EXTERNAL>::av_image_check_size @ 0001236c size=12 ===== */

void av_image_check_size(void)

{
  (*(code *)PTR_av_image_check_size_0002b05c)();
  return;
}



/* ===== <EXTERNAL>::avfilter_graph_parse_ptr @ 00012378 size=12 ===== */

void avfilter_graph_parse_ptr(void)

{
  (*(code *)PTR_avfilter_graph_parse_ptr_0002b060)();
  return;
}



/* ===== <EXTERNAL>::av_buffersink_get_format @ 00012384 size=12 ===== */

void av_buffersink_get_format(void)

{
  (*(code *)PTR_av_buffersink_get_format_0002b064)();
  return;
}



/* ===== <EXTERNAL>::avio_read_to_bprint @ 00012390 size=12 ===== */

void avio_read_to_bprint(void)

{
  (*(code *)PTR_avio_read_to_bprint_0002b068)();
  return;
}



/* ===== <EXTERNAL>::av_buffersink_get_sample_aspect_ratio @ 0001239c size=12 ===== */

void av_buffersink_get_sample_aspect_ratio(void)

{
  (*(code *)PTR_av_buffersink_get_sample_aspect_ratio_0002b06c)();
  return;
}



/* ===== <EXTERNAL>::memset @ 000123a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0002b070)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::av_buffersink_get_type @ 000123b4 size=12 ===== */

void av_buffersink_get_type(void)

{
  (*(code *)PTR_av_buffersink_get_type_0002b074)();
  return;
}



/* ===== <EXTERNAL>::av_strdup @ 000123c0 size=12 ===== */

void av_strdup(void)

{
  (*(code *)PTR_av_strdup_0002b078)();
  return;
}



/* ===== <EXTERNAL>::av_frame_alloc @ 000123cc size=12 ===== */

void av_frame_alloc(void)

{
  (*(code *)PTR_av_frame_alloc_0002b07c)();
  return;
}



/* ===== <EXTERNAL>::fcntl64 @ 000123d8 size=12 ===== */

void fcntl64(void)

{
  (*(code *)PTR_fcntl64_0002b080)();
  return;
}



/* ===== <EXTERNAL>::avformat_alloc_output_context2 @ 000123e4 size=12 ===== */

void avformat_alloc_output_context2(void)

{
  (*(code *)PTR_avformat_alloc_output_context2_0002b084)();
  return;
}



/* ===== <EXTERNAL>::av_dict_set @ 000123f0 size=12 ===== */

void av_dict_set(void)

{
  (*(code *)PTR_av_dict_set_0002b088)();
  return;
}



/* ===== <EXTERNAL>::fflush @ 000123fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_0002b08c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00012408 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0002b090)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::av_image_copy_to_buffer @ 00012414 size=12 ===== */

void av_image_copy_to_buffer(void)

{
  (*(code *)PTR_av_image_copy_to_buffer_0002b094)();
  return;
}



/* ===== <EXTERNAL>::avio_open2 @ 00012420 size=12 ===== */

void avio_open2(void)

{
  (*(code *)PTR_avio_open2_0002b098)();
  return;
}



/* ===== <EXTERNAL>::closedir @ 0001242c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_closedir_0002b09c)(__dirp);
  return iVar1;
}



/* ===== <EXTERNAL>::av_frame_unref @ 00012438 size=12 ===== */

void av_frame_unref(void)

{
  (*(code *)PTR_av_frame_unref_0002b0a0)();
  return;
}



/* ===== <EXTERNAL>::av_find_input_format @ 00012450 size=12 ===== */

void av_find_input_format(void)

{
  (*(code *)PTR_av_find_input_format_0002b0a8)();
  return;
}



/* ===== <EXTERNAL>::av_bprint_finalize @ 0001245c size=12 ===== */

void av_bprint_finalize(void)

{
  (*(code *)PTR_av_bprint_finalize_0002b0ac)();
  return;
}



/* ===== <EXTERNAL>::av_get_pcm_codec @ 00012468 size=12 ===== */

void av_get_pcm_codec(void)

{
  (*(code *)PTR_av_get_pcm_codec_0002b0b0)();
  return;
}



/* ===== <EXTERNAL>::av_bprint_init @ 00012474 size=12 ===== */

void av_bprint_init(void)

{
  (*(code *)PTR_av_bprint_init_0002b0b4)();
  return;
}



/* ===== <EXTERNAL>::av_buffersink_get_ch_layout @ 00012480 size=12 ===== */

void av_buffersink_get_ch_layout(void)

{
  (*(code *)PTR_av_buffersink_get_ch_layout_0002b0b8)();
  return;
}



/* ===== <EXTERNAL>::av_strstart @ 0001248c size=12 ===== */

void av_strstart(void)

{
  (*(code *)PTR_av_strstart_0002b0bc)();
  return;
}



/* ===== <EXTERNAL>::munmap @ 00012498 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_munmap_0002b0c0)(__addr);
  return iVar1;
}



/* ===== <EXTERNAL>::av_get_padded_bits_per_pixel @ 000124a4 size=12 ===== */

void av_get_padded_bits_per_pixel(void)

{
  (*(code *)PTR_av_get_padded_bits_per_pixel_0002b0c4)();
  return;
}



/* ===== <EXTERNAL>::av_dict_free @ 000124b0 size=12 ===== */

void av_dict_free(void)

{
  (*(code *)PTR_av_dict_free_0002b0c8)();
  return;
}



/* ===== <EXTERNAL>::avcodec_get_name @ 000124bc size=12 ===== */

void avcodec_get_name(void)

{
  (*(code *)PTR_avcodec_get_name_0002b0cc)();
  return;
}



/* ===== <EXTERNAL>::av_buffer_create @ 000124c8 size=12 ===== */

void av_buffer_create(void)

{
  (*(code *)PTR_av_buffer_create_0002b0d0)();
  return;
}



/* ===== <EXTERNAL>::avfilter_graph_config @ 000124d4 size=12 ===== */

void avfilter_graph_config(void)

{
  (*(code *)PTR_avfilter_graph_config_0002b0d4)();
  return;
}



/* ===== <EXTERNAL>::av_buffersink_get_time_base @ 000124e0 size=12 ===== */

void av_buffersink_get_time_base(void)

{
  (*(code *)PTR_av_buffersink_get_time_base_0002b0d8)();
  return;
}



/* ===== <EXTERNAL>::avfilter_graph_create_filter @ 000124ec size=12 ===== */

void avfilter_graph_create_filter(void)

{
  (*(code *)PTR_avfilter_graph_create_filter_0002b0dc)();
  return;
}



/* ===== <EXTERNAL>::av_malloc_array @ 000124f8 size=12 ===== */

void av_malloc_array(void)

{
  (*(code *)PTR_av_malloc_array_0002b0e0)();
  return;
}



/* ===== <EXTERNAL>::avfilter_graph_alloc @ 00012504 size=12 ===== */

void avfilter_graph_alloc(void)

{
  (*(code *)PTR_avfilter_graph_alloc_0002b0e4)();
  return;
}



/* ===== <EXTERNAL>::av_dict_copy @ 00012510 size=12 ===== */

void av_dict_copy(void)

{
  (*(code *)PTR_av_dict_copy_0002b0e8)();
  return;
}



/* ===== <EXTERNAL>::av_get_pix_fmt_name @ 0001251c size=12 ===== */

void av_get_pix_fmt_name(void)

{
  (*(code *)PTR_av_get_pix_fmt_name_0002b0ec)();
  return;
}



/* ===== <EXTERNAL>::avcodec_descriptor_get @ 00012534 size=12 ===== */

void avcodec_descriptor_get(void)

{
  (*(code *)PTR_avcodec_descriptor_get_0002b0f4)();
  return;
}



/* ===== <EXTERNAL>::avfilter_inout_free @ 00012540 size=12 ===== */

void avfilter_inout_free(void)

{
  (*(code *)PTR_avfilter_inout_free_0002b0f8)();
  return;
}



/* ===== <EXTERNAL>::av_new_packet @ 0001254c size=12 ===== */

void av_new_packet(void)

{
  (*(code *)PTR_av_new_packet_0002b0fc)();
  return;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00012558 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_0002b100)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00012564 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002b104)();
  return;
}



/* ===== <EXTERNAL>::av_get_pix_fmt @ 00012570 size=12 ===== */

void av_get_pix_fmt(void)

{
  (*(code *)PTR_av_get_pix_fmt_0002b108)();
  return;
}



/* ===== <EXTERNAL>::raise @ 0001257c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_0002b10c)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::av_free @ 00012588 size=12 ===== */

void av_free(void)

{
  (*(code *)PTR_av_free_0002b110)();
  return;
}



/* ===== <EXTERNAL>::av_opt_set_bin @ 00012594 size=12 ===== */

void av_opt_set_bin(void)

{
  (*(code *)PTR_av_opt_set_bin_0002b114)();
  return;
}



/* ===== <EXTERNAL>::av_buffersink_get_h @ 000125a0 size=12 ===== */

void av_buffersink_get_h(void)

{
  (*(code *)PTR_av_buffersink_get_h_0002b118)();
  return;
}



/* ===== <EXTERNAL>::av_rescale_q_rnd @ 000125ac size=12 ===== */

void av_rescale_q_rnd(void)

{
  (*(code *)PTR_av_rescale_q_rnd_0002b11c)();
  return;
}



/* ===== <EXTERNAL>::av_packet_pack_dictionary @ 000125b8 size=12 ===== */

void av_packet_pack_dictionary(void)

{
  (*(code *)PTR_av_packet_pack_dictionary_0002b120)();
  return;
}



/* ===== <EXTERNAL>::avfilter_get_by_name @ 000125c4 size=12 ===== */

void avfilter_get_by_name(void)

{
  (*(code *)PTR_avfilter_get_by_name_0002b124)();
  return;
}



/* ===== <EXTERNAL>::close @ 000125d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0002b128)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::av_freep @ 000125dc size=12 ===== */

void av_freep(void)

{
  (*(code *)PTR_av_freep_0002b12c)();
  return;
}



/* ===== <EXTERNAL>::av_strcasecmp @ 000125e8 size=12 ===== */

void av_strcasecmp(void)

{
  (*(code *)PTR_av_strcasecmp_0002b130)();
  return;
}



/* ===== <EXTERNAL>::avfilter_link @ 000125f4 size=12 ===== */

void avfilter_link(void)

{
  (*(code *)PTR_avfilter_link_0002b134)();
  return;
}



/* ===== <EXTERNAL>::avpriv_set_pts_info @ 00012600 size=12 ===== */

void avpriv_set_pts_info(void)

{
  (*(code *)PTR_avpriv_set_pts_info_0002b138)();
  return;
}



/* ===== <EXTERNAL>::avpriv_stream_set_need_parsing @ 0001260c size=12 ===== */

void avpriv_stream_set_need_parsing(void)

{
  (*(code *)PTR_avpriv_stream_set_need_parsing_0002b13c)();
  return;
}



/* ===== <EXTERNAL>::av_packet_unref @ 00012618 size=12 ===== */

void av_packet_unref(void)

{
  (*(code *)PTR_av_packet_unref_0002b140)();
  return;
}



/* ===== <EXTERNAL>::read @ 00012624 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_0002b144)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::avformat_alloc_context @ 00012630 size=12 ===== */

void avformat_alloc_context(void)

{
  (*(code *)PTR_avformat_alloc_context_0002b148)();
  return;
}



/* ===== <EXTERNAL>::av_opt_set_dict2 @ 0001263c size=12 ===== */

void av_opt_set_dict2(void)

{
  (*(code *)PTR_av_opt_set_dict2_0002b14c)();
  return;
}



/* ===== <EXTERNAL>::av_get_bytes_per_sample @ 00012648 size=12 ===== */

void av_get_bytes_per_sample(void)

{
  (*(code *)PTR_av_get_bytes_per_sample_0002b150)();
  return;
}



/* ===== <EXTERNAL>::avfilter_graph_free @ 00012654 size=12 ===== */

void avfilter_graph_free(void)

{
  (*(code *)PTR_avfilter_graph_free_0002b154)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 00012660 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0002b158)();
  return piVar1;
}



/* ===== <EXTERNAL>::avfilter_graph_dump @ 0001266c size=12 ===== */

void avfilter_graph_dump(void)

{
  (*(code *)PTR_avfilter_graph_dump_0002b15c)();
  return;
}



/* ===== <EXTERNAL>::fputs @ 00012678 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_0002b160)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::nanosleep @ 00012684 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int nanosleep(timespec *__requested_time,timespec *__remaining)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_nanosleep_0002b164)(__requested_time);
  return iVar1;
}



/* ===== <EXTERNAL>::av_buffersink_get_w @ 00012690 size=12 ===== */

void av_buffersink_get_w(void)

{
  (*(code *)PTR_av_buffersink_get_w_0002b168)();
  return;
}



/* ===== <EXTERNAL>::av_int_list_length_for_size @ 0001269c size=12 ===== */

void av_int_list_length_for_size(void)

{
  (*(code *)PTR_av_int_list_length_for_size_0002b16c)();
  return;
}



/* ===== <EXTERNAL>::av_strerror @ 000126a8 size=12 ===== */

void av_strerror(void)

{
  (*(code *)PTR_av_strerror_0002b170)();
  return;
}



/* ===== <EXTERNAL>::av_opt_set_int @ 000126b4 size=12 ===== */

void av_opt_set_int(void)

{
  (*(code *)PTR_av_opt_set_int_0002b174)();
  return;
}



/* ===== <EXTERNAL>::av_mallocz @ 000126c0 size=12 ===== */

void av_mallocz(void)

{
  (*(code *)PTR_av_mallocz_0002b178)();
  return;
}



/* ===== <EXTERNAL>::av_buffersink_get_sample_rate @ 000126cc size=12 ===== */

void av_buffersink_get_sample_rate(void)

{
  (*(code *)PTR_av_buffersink_get_sample_rate_0002b17c)();
  return;
}



/* ===== <EXTERNAL>::mmap64 @ 000126d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap64(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off64_t __offset)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_mmap64_0002b180)(__addr);
  return pvVar1;
}



/* ===== <EXTERNAL>::av_gettime @ 000126e4 size=12 ===== */

void av_gettime(void)

{
  (*(code *)PTR_av_gettime_0002b184)();
  return;
}



/* ===== <EXTERNAL>::avfilter_pad_get_type @ 000126f0 size=12 ===== */

void avfilter_pad_get_type(void)

{
  (*(code *)PTR_avfilter_pad_get_type_0002b188)();
  return;
}



/* ===== <EXTERNAL>::avcodec_pix_fmt_to_codec_tag @ 000126fc size=12 ===== */

void avcodec_pix_fmt_to_codec_tag(void)

{
  (*(code *)PTR_avcodec_pix_fmt_to_codec_tag_0002b18c)();
  return;
}



/* ===== <EXTERNAL>::readdir64 @ 00012708 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent64 * readdir64(DIR *__dirp)

{
  dirent64 *pdVar1;
  
  pdVar1 = (dirent64 *)(*(code *)PTR_readdir64_0002b190)(__dirp);
  return pdVar1;
}



/* ===== <EXTERNAL>::avformat_free_context @ 00012714 size=12 ===== */

void avformat_free_context(void)

{
  (*(code *)PTR_avformat_free_context_0002b194)();
  return;
}



/* ===== <EXTERNAL>::getenv @ 00012720 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_0002b198)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::open64 @ 0001272c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open64_0002b19c)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00012738 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0002b1a0)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::av_frame_free @ 00012744 size=12 ===== */

void av_frame_free(void)

{
  (*(code *)PTR_av_frame_free_0002b1a4)();
  return;
}



/* ===== <EXTERNAL>::avformat_new_stream @ 00012750 size=12 ===== */

void avformat_new_stream(void)

{
  (*(code *)PTR_avformat_new_stream_0002b1a8)();
  return;
}



/* ===== <EXTERNAL>::avpriv_open @ 0001275c size=12 ===== */

void avpriv_open(void)

{
  (*(code *)PTR_avpriv_open_0002b1ac)();
  return;
}



/* ===== <EXTERNAL>::av_opt_set_defaults @ 00012768 size=12 ===== */

void av_opt_set_defaults(void)

{
  (*(code *)PTR_av_opt_set_defaults_0002b1b0)();
  return;
}



/* ===== <EXTERNAL>::av_rescale_q @ 00012774 size=12 ===== */

void av_rescale_q(void)

{
  (*(code *)PTR_av_rescale_q_0002b1b4)();
  return;
}



/* ===== <EXTERNAL>::av_log @ 00012780 size=12 ===== */

void av_log(void)

{
  (*(code *)PTR_av_log_0002b1b8)();
  return;
}



/* ===== entry @ 00012790 size=36 ===== */

undefined4 processEntry entry(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  munmap(*(void **)(iVar1 + 0x110),*(size_t *)(iVar1 + 0xe0));
  close(*(int *)(iVar1 + 0x18));
  return 0;
}



/* ===== FUN_000127b4 @ 000127b4 size=916 ===== */

int FUN_000127b4(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  char *pcVar12;
  undefined4 *puVar13;
  int iVar14;
  uint in_fpscr;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
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
  undefined4 local_68;
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
  
  iVar10 = *(int *)(param_1 + 0xc);
  iVar2 = avformat_new_stream(param_1,0);
  if (iVar2 == 0) {
    iVar2 = -0xc;
  }
  else {
    avpriv_set_pts_info(iVar2,0x40,1,1000000);
    pcVar12 = *(char **)(param_1 + 0x20);
    uVar11 = 0;
    if ((*(uint *)(param_1 + 0x48) & 4) != 0) {
      uVar11 = 0x800;
    }
    if (*pcVar12 == '\0') {
      pcVar12 = (char *)FUN_000146b4();
    }
    iVar3 = avpriv_open(pcVar12,uVar11);
    *(int *)(iVar10 + 0x18) = iVar3;
    if (iVar3 == -1) {
      piVar4 = __errno_location();
      uStack_124 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_120 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_11c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_128 = 0;
      local_118 = 0;
      local_110 = 0;
      local_108 = 0;
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      iVar2 = -*piVar4;
      uStack_114 = uStack_124;
      uStack_10c = uStack_124;
      uStack_104 = uStack_124;
      uStack_fc = uStack_124;
      uStack_f4 = uStack_124;
      uStack_ec = uStack_124;
      av_strerror(iVar2,&local_128,0x40);
      av_log(param_1,0x10,DAT_00012b48 + 0x12880,pcVar12,&local_128);
    }
    else {
      iVar3 = ioctl(iVar3,0x4600,iVar10 + 0x2c);
      if (iVar3 < 0) {
        piVar4 = __errno_location();
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
        iVar2 = -*piVar4;
        uStack_d4 = uStack_e4;
        uStack_cc = uStack_e4;
        uStack_c4 = uStack_e4;
        uStack_bc = uStack_e4;
        uStack_b4 = uStack_e4;
        uStack_ac = uStack_e4;
        av_strerror(iVar2,&local_e8,0x40);
        av_log(param_1,0x10,DAT_00012b4c + 0x128f4,&local_e8);
      }
      else {
        iVar3 = ioctl(*(int *)(iVar10 + 0x18),0x4602,iVar10 + 0xcc);
        if (iVar3 < 0) {
          piVar4 = __errno_location();
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
          iVar2 = -*piVar4;
          uStack_94 = uStack_a4;
          uStack_8c = uStack_a4;
          uStack_84 = uStack_a4;
          uStack_7c = uStack_a4;
          uStack_74 = uStack_a4;
          uStack_6c = uStack_a4;
          av_strerror(iVar2,&local_a8,0x40);
          av_log(param_1,0x10,DAT_00012b50 + 0x12968,&local_a8);
        }
        else {
          iVar3 = FUN_0001455c(iVar10 + 0x2c);
          if (iVar3 == -1) {
            iVar2 = -0x16;
            av_log(param_1,0x10,DAT_00012b54 + 0x1299c);
          }
          else {
            *(undefined4 *)(iVar10 + 0x10) = 0;
            *(undefined4 *)(iVar10 + 0x14) = 0x80000000;
            uVar1 = *(int *)(iVar10 + 0x44) + 7U >> 3;
            *(uint *)(iVar10 + 0x28) = uVar1;
            *(int *)(iVar10 + 0x20) = *(int *)(iVar10 + 0x30);
            iVar6 = uVar1 * *(int *)(iVar10 + 0x2c);
            *(int *)(iVar10 + 0x1c) = *(int *)(iVar10 + 0x2c);
            *(int *)(iVar10 + 0x24) = iVar6;
            *(int *)(iVar10 + 4) = iVar6 * *(int *)(iVar10 + 0x30);
            pvVar5 = mmap64((void *)0x0,*(size_t *)(iVar10 + 0xe0),1,1,*(int *)(iVar10 + 0x18),0);
            *(void **)(iVar10 + 0x110) = pvVar5;
            if (pvVar5 != (void *)0xffffffff) {
              uVar11 = *(undefined4 *)(iVar10 + 8);
              uVar7 = *(undefined4 *)(iVar10 + 0xc);
              iVar9 = *(int *)(iVar10 + 0x1c);
              iVar14 = *(int *)(iVar10 + 0x20);
              iVar6 = *(int *)(iVar10 + 0x28);
              puVar13 = *(undefined4 **)(iVar2 + 0xb4);
              puVar13[0xc] = iVar9;
              puVar13[0xd] = iVar14;
              *puVar13 = 0;
              puVar13[5] = iVar3;
              dVar17 = (double)VectorSignedToFloat(uVar11,(byte)(in_fpscr >> 0x16) & 3);
              uVar11 = *(undefined4 *)(iVar10 + 8);
              uVar8 = *(undefined4 *)(iVar10 + 0xc);
              puVar13[1] = 0xd;
              *(undefined4 *)(iVar2 + 0x44) = uVar11;
              *(undefined4 *)(iVar2 + 0x48) = uVar8;
              dVar15 = (double)VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x16) & 3);
              dVar16 = (double)VectorSignedToFloat(iVar6 * iVar14 * iVar9,
                                                   (byte)(in_fpscr >> 0x16) & 3);
              dVar15 = (dVar17 / dVar15) * dVar16 * 8.0;
              uVar18 = FUN_000185d8(SUB84(dVar15,0),(int)((ulonglong)dVar15 >> 0x20));
              uVar7 = *(undefined4 *)(iVar10 + 0x44);
              *(undefined8 *)(puVar13 + 6) = uVar18;
              uVar11 = av_get_pix_fmt_name(iVar3);
              av_log(param_1,0x20,DAT_00012b5c + 0x12b10,iVar9,iVar14,uVar7,uVar11,
                     *(undefined4 *)(iVar10 + 8),*(undefined4 *)(iVar10 + 0xc));
              return 0;
            }
            piVar4 = __errno_location();
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
            iVar2 = -*piVar4;
            uStack_54 = uStack_64;
            uStack_4c = uStack_64;
            uStack_44 = uStack_64;
            uStack_3c = uStack_64;
            uStack_34 = uStack_64;
            uStack_2c = uStack_64;
            av_strerror(iVar2,&local_68,0x40);
            av_log(param_1,0x10,DAT_00012b58 + 0x12a60,&local_68);
          }
        }
      }
      close(*(int *)(iVar10 + 0x18));
    }
  }
  return iVar2;
}



/* ===== FUN_00012e2c @ 00012e2c size=72 ===== */

undefined4 FUN_00012e2c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  av_freep(iVar1 + 0x18);
  av_freep(iVar1 + 0x1c);
  av_freep(iVar1 + 0x20);
  av_freep(iVar1 + 0x24);
  av_freep(iVar1 + 0x14);
  avfilter_graph_free(iVar1 + 0x10);
  av_frame_free(iVar1 + 0x28);
  return 0;
}



/* ===== FUN_00012e74 @ 00012e74 size=2180 ===== */

int FUN_00012e74(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  char *__s2;
  int iVar18;
  int local_440;
  int iStack_43c;
  int local_438;
  int *local_434;
  uint local_430;
  uint local_42c;
  int local_428;
  undefined4 local_424;
  
  iVar12 = 0;
  local_438 = 0;
  local_434 = (int *)0x0;
  iVar18 = *(int *)(param_1 + 0xc);
  iVar8 = DAT_000136f8 + 0x12ea8;
  iVar1 = 0;
  do {
    iVar16 = iVar1 + 1;
    iVar1 = av_pix_fmt_desc_get(iVar1);
    if ((*(uint *)(iVar1 + 8) & 8) == 0) {
      iVar12 = iVar12 + 1;
    }
    iVar1 = iVar16;
  } while (iVar16 != 0xce);
  iVar1 = av_malloc_array(iVar12 + 1,4);
  if (iVar1 != 0) {
    iVar16 = 0;
    iVar12 = 0;
    do {
      iVar2 = av_pix_fmt_desc_get(iVar12);
      if ((*(uint *)(iVar2 + 8) & 8) == 0) {
        *(int *)(iVar1 + iVar16 * 4) = iVar12;
        iVar16 = iVar16 + 1;
      }
      iVar2 = DAT_000136fc;
      iVar12 = iVar12 + 1;
    } while (iVar12 != 0xce);
    piVar6 = &local_428;
    *(undefined4 *)(iVar1 + iVar16 * 4) = 0xffffffff;
    iVar12 = avfilter_get_by_name(iVar2 + 0x12f3c);
    iVar16 = avfilter_get_by_name(DAT_00013700 + 0x12f4c);
    if (*(int *)(iVar18 + 8) != 0) {
      uVar9 = *(uint *)(iVar18 + 4);
      if (uVar9 != 0) {
        iVar2 = -0x16;
        av_log(param_1,0x10,DAT_00013704 + 0x12f80);
        goto LAB_000136d0;
      }
      local_430 = uVar9;
      local_42c = uVar9;
      if ((*(int *)(param_1 + 0x140) != 0) &&
         (iVar2 = av_dict_set(&local_42c,DAT_00013708 + 0x12fe0), iVar2 < 0)) goto LAB_000136d0;
      iVar2 = avio_open2(&local_430,*(undefined4 *)(iVar18 + 8),1,param_1 + 0xa0,&local_42c);
      av_dict_free(&local_42c);
      if (iVar2 < 0) goto LAB_000136d0;
      av_bprint_init(piVar6,0,0xffffffff);
      iVar2 = avio_read_to_bprint(local_430,piVar6,0x7fffffff);
      avio_closep(&local_430);
      if (iVar2 != 0) {
        av_bprint_finalize(piVar6,0);
        goto LAB_000136d0;
      }
      iVar2 = av_bprint_finalize(piVar6,iVar18 + 4);
      if (iVar2 != 0) goto LAB_000136d0;
    }
    if (*(int *)(iVar18 + 4) == 0) {
      uVar3 = av_strdup(*(undefined4 *)(param_1 + 0x20));
      *(undefined4 *)(iVar18 + 4) = uVar3;
    }
    iVar2 = avfilter_graph_alloc();
    *(int *)(iVar18 + 0x10) = iVar2;
    if (iVar2 != 0) {
      iVar2 = avfilter_graph_parse_ptr
                        (iVar2,*(undefined4 *)(iVar18 + 4),&local_438,&local_434,param_1);
      if (iVar2 < 0) goto LAB_000136d0;
      if (local_438 != 0) {
        iVar2 = -0x16;
        av_log(param_1,0x10,DAT_0001370c + 78000);
        goto LAB_000136d0;
      }
      uVar9 = 0;
      for (piVar13 = local_434; piVar13 != (int *)0x0; piVar13 = (int *)piVar13[3]) {
        uVar9 = uVar9 + 1;
      }
      iVar2 = uVar9 << 2;
      *(uint *)(iVar18 + 0x2c) = uVar9;
      iVar4 = av_malloc(iVar2);
      *(int *)(iVar18 + 0x18) = iVar4;
      if (iVar4 != 0) {
        iVar4 = av_mallocz(iVar2);
        *(int *)(iVar18 + 0x1c) = iVar4;
        if (iVar4 != 0) {
          iVar4 = av_malloc(iVar2);
          *(int *)(iVar18 + 0x20) = iVar4;
          if (iVar4 != 0) {
            iVar2 = av_malloc(iVar2);
            *(int *)(iVar18 + 0x24) = iVar2;
            if (iVar2 != 0) {
              for (uVar14 = 0; uVar14 != uVar9; uVar14 = uVar14 + 1) {
                *(undefined4 *)(*(int *)(iVar18 + 0x20) + uVar14 * 4) = 0xffffffff;
              }
              iVar2 = 0;
              __s2 = (char *)(DAT_00013710 + 0x13150);
              pcVar10 = (char *)(DAT_00013714 + 0x13154);
              piVar13 = local_434;
              while (piVar13 != (int *)0x0) {
                local_42c = 0;
                local_428 = 0;
                sscanf((char *)*piVar13,pcVar10,piVar6,&local_42c,piVar6);
                iVar4 = *piVar13;
                if (local_428 == 0) {
                  av_log(param_1,0x10,DAT_00013718 + 0x131a4);
                  goto LAB_000133b0;
                }
                uVar3 = 0;
                if (*(char *)(iVar4 + local_428) != '\0') {
                  iVar5 = strcmp((char *)(iVar4 + local_428),__s2);
                  uVar3 = 1;
                  if (iVar5 != 0) {
                    av_log(param_1,0x10,DAT_0001371c + 0x131e4,iVar4);
                    goto LAB_000133b0;
                  }
                }
                if (uVar9 <= local_42c) {
                  av_log(param_1,0x10,DAT_00013720 + 0x1320c,iVar4,uVar9);
                  goto LAB_000133b0;
                }
                iVar4 = *(int *)(iVar18 + 0x20);
                if (*(int *)(iVar4 + local_42c * 4) != -1) {
                  av_log(param_1,0x10,DAT_00013724 + 0x13238,local_42c);
                  goto LAB_000133b0;
                }
                iVar5 = *(int *)(iVar18 + 0x24);
                piVar13 = (int *)piVar13[3];
                *(uint *)(*(int *)(iVar18 + 0x18) + iVar2 * 4) = local_42c;
                *(int *)(iVar4 + local_42c * 4) = iVar2;
                *(undefined4 *)(iVar5 + iVar2 * 4) = uVar3;
                iVar2 = iVar2 + 1;
              }
              iVar2 = 0;
              piVar13 = local_434;
              while (piVar13 != (int *)0x0) {
                iVar4 = avformat_new_stream(param_1);
                if (iVar4 == 0) goto LAB_000136ac;
                piVar13 = (int *)piVar13[3];
                *(int *)(iVar4 + 4) = iVar2;
                iVar2 = iVar2 + 1;
              }
              iVar2 = av_malloc_array(*(undefined4 *)(iVar18 + 0x2c),4);
              *(int *)(iVar18 + 0x14) = iVar2;
              if (iVar2 != 0) {
                iVar5 = DAT_00013728 + 0x132b4;
                iVar17 = DAT_0001372c + 0x132bc;
                iVar11 = DAT_00013730 + 0x132c8;
                iVar4 = 0;
                piVar13 = local_434;
LAB_00013324:
                if (piVar13 == (int *)0x0) goto LAB_00013460;
                iVar2 = avfilter_pad_get_type(*(undefined4 *)(piVar13[1] + 0x18),piVar13[2]);
                if ((iVar12 == 0 && iVar2 == 0) || (iVar2 == 1 && iVar16 == 0)) {
                  iVar2 = -0x4c4946f8;
                  av_log(param_1,0x10,DAT_00013738 + 0x133d0);
                  goto LAB_000136d0;
                }
                iVar7 = *piVar13;
                if (iVar2 == 0) {
                  iVar2 = avfilter_graph_create_filter
                                    (piVar6,iVar12,iVar7,0,0,*(undefined4 *)(iVar18 + 0x10));
                  if (iVar2 < 0) goto LAB_000136d0;
                  uVar9 = av_int_list_length_for_size(4,iVar1,0xffffffff,0xffffffff);
                  if (0x1fffffff < uVar9) goto LAB_000133b0;
                  iVar2 = av_opt_set_bin(local_428,DAT_00013734 + 0x132e8,iVar1,uVar9 << 2,1);
                }
                else {
                  if (iVar2 != 1) {
                    av_log(param_1,0x10,DAT_0001373c + 0x1345c,iVar7);
LAB_000133b0:
                    iVar2 = -0x16;
                    goto LAB_000136d0;
                  }
                  iVar2 = avfilter_graph_create_filter
                                    (piVar6,iVar16,iVar7,0,0,*(undefined4 *)(iVar18 + 0x10));
                  if ((iVar2 < 0) ||
                     (iVar2 = av_opt_set_bin(local_428,iVar17,iVar5,0x14,1), iVar2 < 0))
                  goto LAB_000136d0;
                  iVar2 = av_opt_set_int(local_428,iVar11,1,0,1);
                }
                if (iVar2 < 0) goto LAB_000136d0;
                iVar2 = piVar13[2];
                *(int *)(*(int *)(iVar18 + 0x14) + iVar4) = local_428;
                iVar4 = iVar4 + 4;
                iVar2 = avfilter_link(piVar13[1],iVar2,local_428,0);
                if (iVar2 < 0) goto LAB_000136d0;
                piVar13 = (int *)piVar13[3];
                goto LAB_00013324;
              }
            }
          }
        }
      }
    }
  }
LAB_000136ac:
  iVar2 = -0xc;
LAB_000136d0:
  av_free(iVar1);
  avfilter_inout_free(&local_438);
  avfilter_inout_free(&local_434);
  return iVar2;
LAB_00013460:
  iVar2 = avfilter_graph_config(*(undefined4 *)(iVar18 + 0x10),param_1);
  if (iVar2 < 0) goto LAB_000136d0;
  if (*(int *)(iVar18 + 0xc) != 0) {
    pcVar10 = (char *)avfilter_graph_dump(*(undefined4 *)(iVar18 + 0x10));
    if (pcVar10 == (char *)0x0) goto LAB_000136ac;
    puVar15 = *(undefined4 **)(iVar8 + DAT_00013740);
    fputs(pcVar10,(FILE *)*puVar15);
    fflush((FILE *)*puVar15);
    av_free(pcVar10);
  }
  iVar8 = DAT_00013744 + 0x134c4;
  for (iVar12 = 0; iVar12 < *(int *)(iVar18 + 0x2c); iVar12 = iVar12 + 1) {
    uVar3 = *(undefined4 *)
             (*(int *)(iVar18 + 0x14) + *(int *)(*(int *)(iVar18 + 0x20) + iVar12 * 4) * 4);
    av_buffersink_get_time_base(piVar6,uVar3);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12 * 4);
    piVar13 = *(int **)(iVar2 + 0xb4);
    avpriv_set_pts_info(iVar2,0x40,local_428,local_424);
    iVar16 = av_buffersink_get_type(uVar3);
    *piVar13 = iVar16;
    if (iVar16 == 0) {
      piVar13[1] = 0xd;
      iVar16 = av_buffersink_get_format(uVar3);
      piVar13[5] = iVar16;
      iVar16 = av_buffersink_get_w(uVar3);
      piVar13[0xc] = iVar16;
      iVar16 = av_buffersink_get_h(uVar3);
      iVar11 = piVar13[0xc];
      piVar13[0xd] = iVar16;
      av_pix_fmt_desc_get(piVar13[5]);
      iVar5 = av_get_padded_bits_per_pixel();
      uVar9 = *(uint *)(param_1 + 0x50);
      iVar4 = *(int *)(param_1 + 0x54);
      uVar14 = iVar5 * iVar11 * iVar16 * 0x1e;
      iVar16 = (int)uVar14 >> 0x1f;
      if ((int)(iVar4 - (iVar16 + (uint)(uVar9 < uVar14))) < 0 !=
          (SBORROW4(iVar4,iVar16) != SBORROW4(iVar4 - iVar16,(uint)(uVar9 < uVar14)))) {
        uVar9 = uVar14;
        iVar4 = iVar16;
      }
      *(uint *)(param_1 + 0x50) = uVar9;
      *(int *)(param_1 + 0x54) = iVar4;
      av_buffersink_get_sample_aspect_ratio(&local_440,uVar3);
      piVar13[0xe] = local_440;
      piVar13[0xf] = iStack_43c;
      *(int *)(iVar2 + 0x38) = local_440;
      *(int *)(iVar2 + 0x3c) = iStack_43c;
    }
    else if (iVar16 == 1) {
      iVar16 = av_buffersink_get_sample_rate(uVar3);
      piVar13[0x1b] = iVar16;
      iVar2 = av_buffersink_get_ch_layout(uVar3,piVar13 + 0x22);
      if (iVar2 < 0) goto LAB_000136d0;
      iVar16 = av_buffersink_get_format(uVar3);
      piVar13[5] = iVar16;
      iVar16 = av_get_pcm_codec(iVar16,0xffffffff);
      piVar13[1] = iVar16;
      if (iVar16 == 0) {
        uVar3 = av_get_sample_fmt_name(piVar13[5]);
        av_log(param_1,0x10,iVar8,uVar3);
      }
    }
  }
  iVar12 = *(int *)(param_1 + 0xc);
  for (iVar8 = 0; iVar8 < *(int *)(iVar12 + 0x2c); iVar8 = iVar8 + 1) {
    iVar2 = *(int *)(iVar12 + 0x24);
    iVar16 = *(int *)(*(int *)(iVar12 + 0x20) + iVar8 * 4);
    if (*(int *)(iVar2 + iVar16 * 4) == 0) {
      *(undefined4 *)(iVar2 + iVar16 * 4) = 0xffffffff;
    }
    else {
      *(undefined4 *)(iVar2 + iVar16 * 4) = *(undefined4 *)(param_1 + 0x18);
      piVar6 = (int *)avformat_new_stream(param_1,0);
      if (piVar6 == (int *)0x0) goto LAB_000136ac;
      puVar15 = (undefined4 *)piVar6[0x2d];
      iVar16 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8 * 4);
      *puVar15 = 3;
      puVar15[1] = &DAT_0001700a;
      iVar2 = *(int *)(iVar16 + 0x10);
      piVar6[3] = *(int *)(iVar16 + 0xc);
      piVar6[4] = iVar2;
    }
  }
  iVar8 = av_frame_alloc(piVar6);
  *(int *)(iVar18 + 0x28) = iVar8;
  if (iVar8 == 0) {
    iVar2 = -0xc;
  }
  else {
    iVar2 = 0;
  }
  goto LAB_000136d0;
}



/* ===== FUN_00013748 @ 00013748 size=548 ===== */

int FUN_00013748(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined4 local_154;
  undefined4 uStack_150;
  undefined4 local_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  undefined4 local_d4;
  
  memset(&local_e8,0,200);
  iVar3 = 0x802;
  iVar4 = *(int *)(param_1 + 0xc);
  local_ec = 2;
  if ((*(uint *)(param_1 + 0x48) & 4) == 0) {
    iVar3 = 2;
  }
  iVar3 = open64(*(char **)(param_1 + 0x20),iVar3);
  *(int *)(iVar4 + 4) = iVar3;
  if (iVar3 < 0) {
    piVar1 = __errno_location();
    iVar3 = -*piVar1;
    av_log(param_1,0x10,DAT_0001396c + 0x137ac,*(undefined4 *)(param_1 + 0x20));
  }
  else {
    if ((*(int *)(param_1 + 0x18) == 1) &&
       (piVar1 = *(int **)(**(int **)(param_1 + 0x1c) + 0xb4), *piVar1 == 0)) {
      if (piVar1[1] == 0xd) {
        iVar3 = piVar1[5];
      }
      else {
        iVar3 = -1;
      }
      local_e0 = FUN_00015a70(iVar3);
      if (local_e0 == 0) {
        uVar2 = av_get_pix_fmt_name(piVar1[5]);
        av_log(param_1,0x10,DAT_00013974 + 0x13838,uVar2);
        return -0x16;
      }
      iVar3 = ioctl(*(int *)(iVar4 + 4),0xc0cc5604,&local_ec);
      if (iVar3 < 0) {
        piVar1 = __errno_location();
        uStack_168 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_164 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_160 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        local_16c = 0;
        local_15c = 0;
        local_154 = 0;
        local_14c = 0;
        local_144 = 0;
        local_13c = 0;
        local_134 = 0;
        iVar3 = *piVar1;
        uStack_158 = uStack_168;
        uStack_150 = uStack_168;
        uStack_148 = uStack_168;
        uStack_140 = uStack_168;
        uStack_138 = uStack_168;
        uStack_130 = uStack_168;
        av_strerror(-iVar3,&local_16c,0x40);
        av_log(param_1,0x10,DAT_00013978 + 0x138b8,&local_16c);
        return -iVar3;
      }
      local_e8 = piVar1[0xc];
      local_e4 = piVar1[0xd];
      local_d4 = av_image_get_buffer_size(piVar1[5],local_e8,local_e4,1);
      iVar3 = ioctl(*(int *)(iVar4 + 4),0xc0cc5605,&local_ec);
      if (-1 < iVar3) {
        return 0;
      }
      piVar1 = __errno_location();
      uStack_128 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_124 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_120 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_12c = 0;
      local_11c = 0;
      local_114 = 0;
      local_10c = 0;
      local_104 = 0;
      local_fc = 0;
      local_f4 = 0;
      iVar3 = *piVar1;
      uStack_118 = uStack_128;
      uStack_110 = uStack_128;
      uStack_108 = uStack_128;
      uStack_100 = uStack_128;
      uStack_f8 = uStack_128;
      uStack_f0 = uStack_128;
      av_strerror(-iVar3,&local_12c,0x40);
      av_log(param_1,0x10,DAT_0001397c + 0x1395c,&local_12c);
      return -iVar3;
    }
    iVar3 = -0x16;
    av_log(param_1,0x10,DAT_00013970 + 0x137f8);
  }
  return iVar3;
}



/* ===== FUN_00013980 @ 00013980 size=72 ===== */

void FUN_00013980(void)

{
  code *pcVar1;
  
  if (DAT_000139cc + 0x13998 == DAT_000139c8 + 0x13990) {
    return;
  }
  pcVar1 = *(code **)(DAT_000139d0 + 0x139a0 + DAT_000139d4);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 00013a3c size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00013ab0 + 0x13a58;
  if (*(char *)(DAT_00013aac + 0x13a4c) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_00013ab4) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_00013ab8 + 0x13a78));
  }
  FUN_00013980();
  if (*(int *)(iVar1 + DAT_00013abc) != 0) {
    __deregister_frame_info(DAT_00013ac0 + 0x13a98);
  }
  *(undefined1 *)(DAT_00013ac4 + 0x13aa8) = 1;
  return;
}



/* ===== _INIT_0 @ 00013ac8 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00013b00 + 0x13ad8 + DAT_00013b04) != 0) {
    __register_frame_info(DAT_00013b0c + 0x13af8,DAT_00013b08 + 0x13af4);
  }
  if (((DAT_00013a30 + 0x139f0) - (DAT_00013a2c + 0x139e8) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00013a34 + 0x139f8 + DAT_00013a38);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== avdevice_register_all @ 00013b10 size=28 ===== */

void avdevice_register_all(void)

{
  (*(code *)PTR_avpriv_register_devices_0002b0f0)(DAT_00013b20 + 0x13b30);
  return;
}



/* ===== av_input_audio_device_next @ 00013b24 size=388 ===== */

int av_input_audio_device_next(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00013ca8 + 0x13b34;
  if (param_1 == 0) {
    iVar2 = *(int *)(iVar2 + DAT_00013cac);
    iVar1 = 0;
  }
  else if (param_1 == *(int *)(iVar2 + DAT_00013cac)) {
    iVar1 = 1;
    iVar2 = *(int *)(iVar2 + DAT_00013cb0);
  }
  else if (param_1 == *(int *)(iVar2 + DAT_00013cb0)) {
    iVar2 = *(int *)(iVar2 + DAT_00013cb4);
    iVar1 = 2;
  }
  else {
    if (param_1 != *(int *)(iVar2 + DAT_00013cb4)) {
      return 0;
    }
    iVar1 = 3;
    iVar2 = *(int *)(iVar2 + DAT_00013ccc);
  }
  if ((*(int *)(iVar2 + 0x14) != 0) &&
     ((*(int *)(*(int *)(iVar2 + 0x14) + 0x18) - 0x2bU & 0xfffffffd) == 0)) {
    return iVar2;
  }
  iVar2 = *(int *)(DAT_00013cb8 + 0x13ba8 + (iVar1 + 1) * 4);
  if (iVar2 == 0) {
    return 0;
  }
  if ((*(int *)(iVar2 + 0x14) != 0) &&
     ((*(int *)(*(int *)(iVar2 + 0x14) + 0x18) - 0x2bU & 0xfffffffd) == 0)) {
    return iVar2;
  }
  iVar2 = *(int *)(DAT_00013cbc + 0x13bdc + (iVar1 + 2) * 4);
  if (iVar2 == 0) {
    return 0;
  }
  if ((*(int *)(iVar2 + 0x14) != 0) &&
     ((*(int *)(*(int *)(iVar2 + 0x14) + 0x18) - 0x2bU & 0xfffffffd) == 0)) {
    return iVar2;
  }
  iVar2 = *(int *)(DAT_00013cc0 + 0x13c10 + (iVar1 + 3) * 4);
  if (iVar2 == 0) {
    return 0;
  }
  if ((*(int *)(iVar2 + 0x14) != 0) &&
     ((*(int *)(*(int *)(iVar2 + 0x14) + 0x18) - 0x2bU & 0xfffffffd) == 0)) {
    return iVar2;
  }
  iVar2 = *(int *)(DAT_00013cc4 + 0x13c44 + (iVar1 + 4) * 4);
  if (iVar2 == 0) {
    return 0;
  }
  if ((*(int *)(iVar2 + 0x14) != 0) &&
     ((*(int *)(*(int *)(iVar2 + 0x14) + 0x18) - 0x2bU & 0xfffffffd) == 0)) {
    return iVar2;
  }
  return *(int *)(DAT_00013cc8 + 0x13c74 + (iVar1 + 5) * 4);
}



/* ===== av_input_video_device_next @ 00013cd0 size=388 ===== */

int av_input_video_device_next(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00013e54 + 0x13ce0;
  if (param_1 == 0) {
    iVar2 = *(int *)(iVar2 + DAT_00013e58);
    iVar1 = 0;
  }
  else if (param_1 == *(int *)(iVar2 + DAT_00013e58)) {
    iVar1 = 1;
    iVar2 = *(int *)(iVar2 + DAT_00013e5c);
  }
  else if (param_1 == *(int *)(iVar2 + DAT_00013e5c)) {
    iVar2 = *(int *)(iVar2 + DAT_00013e60);
    iVar1 = 2;
  }
  else {
    if (param_1 != *(int *)(iVar2 + DAT_00013e60)) {
      return 0;
    }
    iVar1 = 3;
    iVar2 = *(int *)(iVar2 + DAT_00013e78);
  }
  if ((*(int *)(iVar2 + 0x14) != 0) &&
     ((*(uint *)(*(int *)(iVar2 + 0x14) + 0x18) & 0xfffffffb) == 0x29)) {
    return iVar2;
  }
  iVar2 = *(int *)(DAT_00013e64 + 0x13d54 + (iVar1 + 1) * 4);
  if (iVar2 == 0) {
    return 0;
  }
  if ((*(int *)(iVar2 + 0x14) != 0) &&
     ((*(uint *)(*(int *)(iVar2 + 0x14) + 0x18) & 0xfffffffb) == 0x29)) {
    return iVar2;
  }
  iVar2 = *(int *)(DAT_00013e68 + 0x13d88 + (iVar1 + 2) * 4);
  if (iVar2 == 0) {
    return 0;
  }
  if ((*(int *)(iVar2 + 0x14) != 0) &&
     ((*(uint *)(*(int *)(iVar2 + 0x14) + 0x18) & 0xfffffffb) == 0x29)) {
    return iVar2;
  }
  iVar2 = *(int *)(DAT_00013e6c + 0x13dbc + (iVar1 + 3) * 4);
  if (iVar2 == 0) {
    return 0;
  }
  if ((*(int *)(iVar2 + 0x14) != 0) &&
     ((*(uint *)(*(int *)(iVar2 + 0x14) + 0x18) & 0xfffffffb) == 0x29)) {
    return iVar2;
  }
  iVar2 = *(int *)(DAT_00013e70 + 0x13df0 + (iVar1 + 4) * 4);
  if (iVar2 == 0) {
    return 0;
  }
  if ((*(int *)(iVar2 + 0x14) != 0) &&
     ((*(uint *)(*(int *)(iVar2 + 0x14) + 0x18) & 0xfffffffb) == 0x29)) {
    return iVar2;
  }
  return *(int *)(DAT_00013e74 + 0x13e20 + (iVar1 + 5) * 4);
}



/* ===== av_output_audio_device_next @ 00013e7c size=336 ===== */

int av_output_audio_device_next(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  
  iVar1 = DAT_00013fcc + 0x13e8c;
  if (param_1 == 0) {
    iVar1 = *(int *)(iVar1 + DAT_00013fd0);
    iVar3 = 0;
LAB_00013ec0:
    iVar2 = *(int *)(iVar1 + 0x24);
    iVar3 = iVar3 + 1;
    if (iVar2 == 0) goto LAB_00013ee0;
  }
  else {
    if (param_1 == *(int *)(iVar1 + DAT_00013fd0)) {
      iVar3 = 1;
      iVar1 = *(int *)(iVar1 + DAT_00013fd4);
      goto LAB_00013ec0;
    }
    if (param_1 != *(int *)(iVar1 + DAT_00013fd4)) {
      return 0;
    }
    iVar1 = *(int *)(iVar1 + DAT_00013fe8);
    iVar2 = *(int *)(iVar1 + 0x24);
    if (iVar2 == 0) {
      return 0;
    }
    iVar3 = 3;
  }
  if ((*(int *)(iVar2 + 0x18) - 0x2aU & 0xfffffffd) == 0) {
    return iVar1;
  }
LAB_00013ee0:
  iVar1 = *(int *)(DAT_00013fd8 + iVar3 * 4 + 0x13f04);
  if (iVar1 == 0) {
    return 0;
  }
  if ((*(int *)(iVar1 + 0x24) != 0) &&
     ((*(int *)(*(int *)(iVar1 + 0x24) + 0x18) - 0x2aU & 0xfffffffd) == 0)) {
    return iVar1;
  }
  iVar1 = *(int *)(DAT_00013fdc + (iVar3 + 1) * 4 + 0x13f3c);
  if (iVar1 == 0) {
    return 0;
  }
  if ((*(int *)(iVar1 + 0x24) != 0) &&
     ((*(int *)(*(int *)(iVar1 + 0x24) + 0x18) - 0x2aU & 0xfffffffd) == 0)) {
    return iVar1;
  }
  iVar1 = *(int *)(DAT_00013fe0 + (iVar3 + 2) * 4 + 0x13f78);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(iVar1 + 0x24);
                    /* WARNING: Could not recover jumptable at 0x00013f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if ((iVar1 != 0) && ((*(int *)(iVar1 + 0x18) - 0x2aU & 0xfffffffd) == 0)) {
    iVar1 = (*UNRECOVERED_JUMPTABLE_00)();
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00013f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*UNRECOVERED_JUMPTABLE_00)(*(undefined4 *)(DAT_00013fe4 + (iVar3 + 3) * 4 + 0x13fac));
  return iVar1;
}



/* ===== av_output_video_device_next @ 00013fec size=336 ===== */

int av_output_video_device_next(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  
  iVar1 = DAT_0001413c + 0x13ffc;
  if (param_1 == 0) {
    iVar1 = *(int *)(iVar1 + DAT_00014140);
    iVar3 = 0;
LAB_00014030:
    iVar2 = *(int *)(iVar1 + 0x24);
    iVar3 = iVar3 + 1;
    if (iVar2 == 0) goto LAB_00014050;
  }
  else {
    if (param_1 == *(int *)(iVar1 + DAT_00014140)) {
      iVar3 = 1;
      iVar1 = *(int *)(iVar1 + DAT_00014144);
      goto LAB_00014030;
    }
    if (param_1 != *(int *)(iVar1 + DAT_00014144)) {
      return 0;
    }
    iVar1 = *(int *)(iVar1 + DAT_00014158);
    iVar2 = *(int *)(iVar1 + 0x24);
    if (iVar2 == 0) {
      return 0;
    }
    iVar3 = 3;
  }
  if ((*(uint *)(iVar2 + 0x18) & 0xfffffffb) == 0x28) {
    return iVar1;
  }
LAB_00014050:
  iVar1 = *(int *)(DAT_00014148 + iVar3 * 4 + 0x14074);
  if (iVar1 == 0) {
    return 0;
  }
  if ((*(int *)(iVar1 + 0x24) != 0) &&
     ((*(uint *)(*(int *)(iVar1 + 0x24) + 0x18) & 0xfffffffb) == 0x28)) {
    return iVar1;
  }
  iVar1 = *(int *)(DAT_0001414c + (iVar3 + 1) * 4 + 0x140ac);
  if (iVar1 == 0) {
    return 0;
  }
  if ((*(int *)(iVar1 + 0x24) != 0) &&
     ((*(uint *)(*(int *)(iVar1 + 0x24) + 0x18) & 0xfffffffb) == 0x28)) {
    return iVar1;
  }
  iVar1 = *(int *)(DAT_00014150 + (iVar3 + 2) * 4 + 0x140e8);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(iVar1 + 0x24);
                    /* WARNING: Could not recover jumptable at 0x000140f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0x18) & 0xfffffffb) == 0x28)) {
    iVar1 = (*UNRECOVERED_JUMPTABLE_00)();
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001410c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*UNRECOVERED_JUMPTABLE_00)(*(undefined4 *)(DAT_00014154 + (iVar3 + 3) * 4 + 0x1411c));
  return iVar1;
}



/* ===== avdevice_app_to_dev_control_message @ 0001415c size=56 ===== */

undefined4 avdevice_app_to_dev_control_message(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(int *)(param_1 + 8) == 0) {
    return 0xffffffda;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 8) + 0x48);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0xffffffda;
}



/* ===== avdevice_dev_to_app_control_message @ 00014194 size=36 ===== */

undefined4 avdevice_dev_to_app_control_message(int param_1)

{
  undefined4 uVar1;
  
  if (*(code **)(param_1 + 0x128) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x128))();
    return uVar1;
  }
  return 0xffffffda;
}



/* ===== avdevice_capabilities_create @ 000141b8 size=8 ===== */

undefined4 avdevice_capabilities_create(void)

{
  return 0xffffffda;
}



/* ===== avdevice_capabilities_free @ 000141c0 size=4 ===== */

void avdevice_capabilities_free(void)

{
  return;
}



/* ===== avdevice_free_list_devices @ 000141c4 size=212 ===== */

void avdevice_free_list_devices(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    av_log(0,0,DAT_000142a0 + 0x14294,DAT_0001429c + 0x14290,DAT_00014298 + 0x14284,0x81);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  piVar5 = (int *)*param_1;
  if (piVar5 == (int *)0x0) {
    return;
  }
  iVar2 = piVar5[1];
  if (0 < iVar2) {
    iVar1 = *piVar5;
    iVar4 = 0;
    do {
      iVar3 = *(int *)(iVar1 + iVar4 * 4);
      while (iVar3 != 0) {
        iVar4 = iVar4 + 1;
        av_freep(iVar3);
        av_freep(iVar3 + 4);
        av_freep(iVar3 + 8);
        av_free(iVar3);
        iVar2 = piVar5[1];
        if (iVar2 <= iVar4) goto LAB_0001424c;
        iVar1 = *piVar5;
        iVar3 = *(int *)(iVar1 + iVar4 * 4);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
LAB_0001424c:
  av_freep(piVar5);
  av_freep(param_1);
  return;
}



/* ===== avdevice_list_devices @ 000142a4 size=368 ===== */

int avdevice_list_devices(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  if (param_1 == 0) {
    av_log(0,0,DAT_00014434 + 0x14410,DAT_00014430 + 0x1440c,DAT_0001442c + 0x14400,0x3d);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_2 == (int *)0x0) {
    av_log(0,0,DAT_00014428 + 0x143e4,DAT_00014424 + 0x143e0,DAT_00014420 + 0x143d4,0x3e);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(int *)(param_1 + 8) == 0) {
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 == 0) {
      av_log(0,0,DAT_0001441c + 0x1438c,DAT_00014418 + 0x14380,DAT_00014414 + 0x14374,0x3f);
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    if (*(int *)(*(int *)(param_1 + 8) + 0x50) == 0) goto LAB_000143a4;
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 == 0) goto LAB_000142f0;
  }
  if (*(int *)(iVar1 + 0x4c) != 0) {
LAB_000142f0:
    iVar1 = av_mallocz(0xc);
    *param_2 = iVar1;
    if (iVar1 == 0) {
      iVar1 = -0xc;
    }
    else {
      iVar2 = *(int *)(param_1 + 8);
      *(undefined4 *)(iVar1 + 8) = 0xffffffff;
      if (iVar2 == 0) {
        pcVar3 = *(code **)(*(int *)(param_1 + 4) + 0x4c);
      }
      else {
        pcVar3 = *(code **)(iVar2 + 0x50);
      }
      iVar1 = (*pcVar3)(param_1,iVar1);
      if (iVar1 < 0) {
        avdevice_free_list_devices(param_2);
        return iVar1;
      }
      iVar1 = *(int *)(*param_2 + 4);
    }
    return iVar1;
  }
LAB_000143a4:
  *param_2 = 0;
  return -0x26;
}



/* ===== avdevice_list_output_sinks @ 00014438 size=148 ===== */

int avdevice_list_output_sinks
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_28;
  undefined4 local_24 [2];
  
  local_28 = 0;
  iVar2 = avformat_alloc_output_context2(&local_28,param_1,param_2,0);
  uVar1 = local_28;
  if (-1 < iVar2) {
    local_24[0] = 0;
    av_dict_copy(local_24,param_3,0);
    iVar2 = av_opt_set_dict2(uVar1,local_24,1);
    if (-1 < iVar2) {
      iVar2 = avdevice_list_devices(uVar1,param_4);
    }
    av_dict_free(local_24);
    avformat_free_context(uVar1);
  }
  return iVar2;
}



/* ===== avdevice_list_input_sources @ 000144cc size=144 ===== */

int avdevice_list_input_sources
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_28;
  undefined4 local_24 [2];
  
  local_28 = 0;
  iVar2 = FUN_00015984(&local_28,param_1,param_2);
  uVar1 = local_28;
  if (-1 < iVar2) {
    local_24[0] = 0;
    av_dict_copy(local_24,param_3,0);
    iVar2 = av_opt_set_dict2(uVar1,local_24,1);
    if (-1 < iVar2) {
      iVar2 = avdevice_list_devices(uVar1,param_4);
    }
    av_dict_free(local_24);
    avformat_free_context(uVar1);
  }
  return iVar2;
}



/* ===== FUN_0001455c @ 0001455c size=340 ===== */

undefined4 FUN_0001455c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0x20) {
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 == 0) {
      if ((*(int *)(param_1 + 0x2c) == 8) && (*(int *)(param_1 + 0x38) == 0x10)) goto LAB_00014678;
    }
    else if (iVar1 == 0x10) {
      if ((*(int *)(param_1 + 0x2c) == 8) && (*(int *)(param_1 + 0x38) == 0)) {
        iVar1 = 1;
        goto LAB_00014678;
      }
    }
    else if (iVar1 == 8) {
      if ((*(int *)(param_1 + 0x2c) == 0x10) && (*(int *)(param_1 + 0x38) == 0x18)) {
        iVar1 = 2;
        goto LAB_00014678;
      }
    }
    else if (((iVar1 == 3) && (*(int *)(param_1 + 0x2c) == 2)) && (*(int *)(param_1 + 0x38) == 8))
    goto LAB_00014678;
  }
  else if (iVar1 == 0x18) {
    if (*(int *)(param_1 + 0x20) == 0) {
      if ((*(int *)(param_1 + 0x2c) == 8) && (*(int *)(param_1 + 0x38) == 0x10)) {
        iVar1 = 4;
        goto LAB_00014678;
      }
    }
    else if (((*(int *)(param_1 + 0x20) == 0x10) && (*(int *)(param_1 + 0x2c) == 8)) &&
            (*(int *)(param_1 + 0x38) == 0)) {
      iVar1 = 5;
LAB_00014678:
      return *(undefined4 *)(iVar1 * 0x18 + DAT_000146b0 + 0x1469c);
    }
  }
  else if (((iVar1 == 0x10) && (*(int *)(param_1 + 0x20) == 0xb)) &&
          ((*(int *)(param_1 + 0x2c) == 5 && (*(int *)(param_1 + 0x38) == 0)))) {
    iVar1 = 6;
    goto LAB_00014678;
  }
  return 0xffffffff;
}



/* ===== FUN_000146b4 @ 000146b4 size=36 ===== */

char * FUN_000146b4(void)

{
  char *pcVar1;
  
  pcVar1 = getenv((char *)(DAT_000146d8 + 0x146c4));
  if (pcVar1 != (char *)0x0) {
    return pcVar1;
  }
  return (char *)((int)&DAT_000146d8 + DAT_000146dc);
}



/* ===== FUN_000146e0 @ 000146e0 size=568 ===== */

int FUN_000146e0(int param_1)

{
  int *piVar1;
  int iVar2;
  int __fd;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *__format;
  char *local_164;
  int *local_15c;
  char acStack_158 [12];
  undefined4 local_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined1 auStack_10c [68];
  undefined1 auStack_c8 [164];
  
  iVar6 = 0;
  local_15c = (int *)0x0;
  local_164 = (char *)FUN_000146b4();
  if (param_1 == 0) {
    return -0x16;
  }
  __format = (char *)(DAT_00014918 + 0x14718);
  iVar4 = DAT_0001491c + 0x1471c;
  do {
    while( true ) {
      snprintf(acStack_158,0xc,__format,iVar6);
      __fd = avpriv_open(acStack_158,2);
      if (__fd < 0) break;
      iVar2 = ioctl(__fd,0x4600,auStack_c8);
      if (iVar2 == -1) {
LAB_00014894:
        if (local_15c != (int *)0x0) {
          av_freep();
          av_freep(local_15c + 1);
          av_freep(&local_15c);
          close(__fd);
          goto LAB_000147e8;
        }
      }
      else {
        iVar2 = ioctl(__fd,0x4602,auStack_10c);
        if (iVar2 == -1) goto LAB_00014894;
        piVar3 = (int *)av_mallocz(0x10);
        local_15c = piVar3;
        if (piVar3 == (int *)0x0) {
          iVar2 = -0xc;
          goto LAB_000148e4;
        }
        iVar2 = av_strdup(acStack_158);
        piVar1 = local_15c;
        *piVar3 = iVar2;
        iVar2 = av_strdup(auStack_10c);
        iVar5 = *local_15c;
        piVar1[1] = iVar2;
        if ((iVar5 == 0) || (local_15c[1] == 0)) {
          iVar2 = -0xc;
LAB_000148cc:
          av_freep(local_15c);
          av_freep(local_15c + 1);
          av_freep(&local_15c);
LAB_000148e4:
          close(__fd);
          return iVar2;
        }
        iVar2 = av_dynarray_add_nofree(param_1,param_1 + 4);
        if (iVar2 < 0) {
          if (local_15c == (int *)0x0) goto LAB_000148e4;
          goto LAB_000148cc;
        }
        if ((local_164 != (char *)0x0) && (iVar2 = strcmp((char *)*local_15c,local_164), iVar2 == 0)
           ) {
          *(int *)(param_1 + 8) = *(int *)(param_1 + 4) + -1;
          local_164 = (char *)0x0;
        }
      }
      close(__fd);
LAB_000147e8:
      iVar6 = iVar6 + 1;
      if (iVar6 == 0x20) {
        return 0;
      }
    }
    piVar3 = __errno_location();
    if (*piVar3 == 2) goto LAB_000147e8;
    uStack_148 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_144 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_140 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iVar6 = iVar6 + 1;
    local_14c = 0;
    local_13c = 0;
    local_134 = 0;
    local_12c = 0;
    local_124 = 0;
    local_11c = 0;
    local_114 = 0;
    uStack_138 = uStack_148;
    uStack_130 = uStack_148;
    uStack_128 = uStack_148;
    uStack_120 = uStack_148;
    uStack_118 = uStack_148;
    uStack_110 = uStack_148;
    av_strerror(-*piVar3,&local_14c,0x40);
    av_log(0,0x10,iVar4,acStack_158,&local_14c);
    if (iVar6 == 0x20) {
      return 0;
    }
  } while( true );
}



/* ===== FUN_00014928 @ 00014928 size=556 ===== */

int FUN_00014928(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int extraout_r2;
  size_t sVar3;
  size_t __n;
  undefined4 uVar4;
  void *pvVar5;
  void *__src;
  int iVar6;
  int iVar7;
  int iVar8;
  uint in_fpscr;
  undefined4 uVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  timespec local_70;
  undefined4 local_68;
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
  
  iVar6 = *(int *)(param_1 + 0xc);
  if (*(int *)(iVar6 + 0x14) == -0x80000000 && *(int *)(iVar6 + 0x10) == 0) {
    uVar15 = av_gettime_relative();
    *(undefined8 *)(iVar6 + 0x10) = uVar15;
  }
  uVar15 = DAT_00014b58;
  iVar8 = DAT_00014b68 + 0x14960;
  do {
    uVar14 = av_gettime_relative();
    uVar10 = *(undefined8 *)(iVar6 + 0x10);
    uVar12 = VectorSub(uVar10,uVar14,8);
    iVar7 = (int)((ulonglong)uVar12 >> 0x20);
    iVar1 = (int)uVar12;
    av_log(param_1,0x38,iVar8);
    if (iVar7 < (int)(uint)(iVar1 == 0)) {
      dVar13 = (double)VectorSignedToFloat(*(undefined4 *)(iVar6 + 8),(byte)(in_fpscr >> 0x16) & 3);
      dVar11 = (double)VectorSignedToFloat(*(undefined4 *)(iVar6 + 0xc),(byte)(in_fpscr >> 0x16) & 3
                                          );
      dVar11 = DAT_00014b60 / (dVar13 / dVar11);
      dVar13 = (double)FUN_00018494(*(undefined4 *)(iVar6 + 0x10),*(undefined4 *)(iVar6 + 0x14));
      dVar11 = dVar11 + dVar13;
      uVar15 = FUN_000185d8(SUB84(dVar11,0),(int)((ulonglong)dVar11 >> 0x20));
      *(undefined8 *)(iVar6 + 0x10) = uVar15;
      iVar8 = av_new_packet(param_2,*(undefined4 *)(iVar6 + 4));
      if (-1 < iVar8) {
        iVar8 = ioctl(*(int *)(iVar6 + 0x18),0x4600,iVar6 + 0x2c);
        if (iVar8 < 0) {
          uStack_64 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          uStack_60 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          local_58 = 0;
          local_68 = 0;
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
          piVar2 = __errno_location();
          av_strerror(-*piVar2,&local_68,0x40);
          av_log(param_1,0x18,DAT_00014b6c + 0x14b4c,&local_68);
        }
        uVar15 = av_gettime();
        sVar3 = *(size_t *)(iVar6 + 0x20);
        __src = (void *)(*(int *)(iVar6 + 0x110) +
                        *(int *)(iVar6 + 0x3c) * *(int *)(iVar6 + 0x28) +
                        *(int *)(iVar6 + 0xf8) * *(int *)(iVar6 + 0x40));
        pvVar5 = *(void **)(param_2 + 0x18);
        __n = sVar3;
        if (0 < (int)sVar3) {
          __n = *(size_t *)(iVar6 + 0x24);
          iVar1 = 0;
        }
        *(undefined8 *)(param_2 + 8) = uVar15;
        if (0 < (int)sVar3) {
          do {
            pvVar5 = memcpy(pvVar5,__src,__n);
            iVar1 = iVar1 + 1;
            __n = *(size_t *)(iVar6 + 0x24);
            __src = (void *)((int)__src + *(int *)(iVar6 + 0xf8));
            pvVar5 = (void *)((int)pvVar5 + __n);
          } while (iVar1 < *(int *)(iVar6 + 0x20));
        }
        iVar8 = *(int *)(iVar6 + 4);
      }
      return iVar8;
    }
    if ((*(uint *)(param_1 + 0x48) & 4) != 0) {
      return -0xb;
    }
    uVar4 = (undefined4)((ulonglong)uVar15 >> 0x20);
    uVar9 = (undefined4)uVar15;
    local_70.tv_sec = FUN_000184f4(iVar1,iVar7,uVar9,uVar4,uVar10,uVar14,uVar12);
    FUN_000184f4(iVar1,iVar7,uVar9,uVar4);
    local_70.tv_nsec = extraout_r2 * 1000;
    do {
      iVar1 = nanosleep(&local_70,&local_70);
      if (-1 < iVar1) break;
      piVar2 = __errno_location();
    } while (*piVar2 == 4);
  } while( true );
}



/* ===== FUN_00014db0 @ 00014db0 size=880 ===== */

size_t FUN_00014db0(int param_1,int param_2)

{
  size_t sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  int local_60;
  size_t local_5c;
  undefined4 local_4c;
  int local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  
  iVar6 = *(int *)(param_1 + 0xc);
  if (*(int *)(iVar6 + 0x4c) != 0) {
    av_packet_move_ref(param_2,iVar6 + 0x30);
    return *(size_t *)(param_2 + 0x1c);
  }
  if (*(int *)(iVar6 + 0x2c) < 1) {
    return 0xdfb9b0bb;
  }
  puVar7 = *(undefined4 **)(iVar6 + 0x28);
  iVar5 = 0;
  dVar12 = DAT_00015120;
  local_60 = iVar5;
  do {
    av_buffersink_get_time_base(&local_48,*(undefined4 *)(*(int *)(iVar6 + 0x14) + iVar5 * 4));
    if (*(int *)(*(int *)(iVar6 + 0x1c) + iVar5 * 4) == 0) {
      sVar1 = av_buffersink_get_frame_flags
                        (*(undefined4 *)(*(int *)(iVar6 + 0x14) + iVar5 * 4),puVar7,1);
      if (sVar1 == 0xdfb9b0bb) {
        *(undefined4 *)(*(int *)(iVar6 + 0x1c) + iVar5 * 4) = 1;
      }
      else {
        if ((int)sVar1 < 0) {
          return sVar1;
        }
        local_40 = 1;
        uStack_3c = 1000000;
        av_rescale_q_rnd((int)*(undefined8 *)(puVar7 + 0x1a),
                         (int)((ulonglong)*(undefined8 *)(puVar7 + 0x1a) >> 0x20),local_48,uStack_44
                         ,1,1000000,0x2005);
        dVar11 = (double)FUN_00018494();
        av_frame_unref(puVar7);
        if (dVar11 < dVar12) {
          dVar12 = dVar11;
          local_60 = iVar5;
        }
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < *(int *)(iVar6 + 0x2c));
  if (dVar12 == DAT_00015120) {
    return 0xdfb9b0bb;
  }
  av_buffersink_get_frame_flags(*(undefined4 *)(*(int *)(iVar6 + 0x14) + local_60 * 4),puVar7,0);
  iVar5 = *(int *)(*(int *)(iVar6 + 0x18) + local_60 * 4);
  iVar6 = **(int **)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5 * 4) + 0xb4);
  if (iVar6 == 0) {
    local_5c = av_image_get_buffer_size(puVar7[0x14],puVar7[0x11],puVar7[0x12],1);
    sVar1 = av_new_packet(param_2,local_5c);
    if ((int)sVar1 < 0) goto LAB_000150a4;
    av_image_copy_to_buffer
              (*(undefined4 *)(param_2 + 0x18),local_5c,puVar7,puVar7 + 8,puVar7[0x14],puVar7[0x11],
               puVar7[0x12],1);
  }
  else {
    local_5c = 0;
    if (iVar6 == 1) {
      iVar8 = puVar7[0x13];
      iVar6 = av_get_bytes_per_sample(puVar7[0x14]);
      local_5c = puVar7[0x53] * iVar6 * iVar8;
      sVar1 = av_new_packet(param_2,local_5c);
      if ((int)sVar1 < 0) goto LAB_000150a4;
      memcpy(*(void **)(param_2 + 0x18),(void *)*puVar7,local_5c);
    }
  }
  if (puVar7[0x46] != 0) {
    local_48 = av_packet_pack_dictionary(puVar7[0x46],&local_4c);
    if (local_48 == 0) {
      sVar1 = 0xfffffff4;
      goto LAB_000150a4;
    }
    sVar1 = av_packet_add_side_data(param_2,0xd,local_48,local_4c);
    if ((int)sVar1 < 0) {
      av_freep(&local_48);
      goto LAB_000150a4;
    }
  }
  iVar8 = *(int *)(param_1 + 0xc);
  iVar6 = *(int *)(*(int *)(iVar8 + 0x24) + local_60 * 4);
  if ((iVar6 < 0) || (iVar2 = av_frame_get_side_data(puVar7,1), iVar2 == 0)) {
    uVar3 = puVar7[0x1a];
    uVar4 = puVar7[0x1b];
    uVar9 = puVar7[0x42];
    uVar10 = puVar7[0x43];
  }
  else {
    sVar1 = av_new_packet(iVar8 + 0x30,*(undefined4 *)(iVar2 + 8));
    if ((int)sVar1 < 0) {
LAB_000150a4:
      av_frame_unref(puVar7);
      return sVar1;
    }
    memcpy(*(void **)(iVar8 + 0x48),*(void **)(iVar2 + 4),*(size_t *)(iVar2 + 8));
    uVar3 = puVar7[0x1a];
    uVar4 = puVar7[0x1b];
    uVar9 = puVar7[0x42];
    uVar10 = puVar7[0x43];
    *(int *)(iVar8 + 0x50) = iVar6;
    *(undefined4 *)(iVar8 + 0x38) = uVar3;
    *(undefined4 *)(iVar8 + 0x3c) = uVar4;
    *(undefined4 *)(iVar8 + 0x68) = uVar9;
    *(undefined4 *)(iVar8 + 0x6c) = uVar10;
  }
  *(undefined4 *)(param_2 + 8) = uVar3;
  *(undefined4 *)(param_2 + 0xc) = uVar4;
  *(int *)(param_2 + 0x20) = iVar5;
  *(undefined4 *)(param_2 + 0x38) = uVar9;
  *(undefined4 *)(param_2 + 0x3c) = uVar10;
  av_frame_unref(puVar7);
  return local_5c;
}



/* ===== FUN_00015128 @ 00015128 size=980 ===== */

undefined4 FUN_00015128(int param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  int __fd;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 local_178;
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
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
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
  undefined4 local_b8;
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
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
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
  
  iVar4 = *(int *)(param_1 + 0xc);
  pcVar1 = getenv((char *)(DAT_000154fc + 0x15148));
  __fd = avpriv_open(param_3,param_2 != 0);
  if (__fd < 0) {
    uStack_19c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_198 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_194 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_190 = 0;
    local_1a0 = 0;
    local_188 = 0;
    local_180 = 0;
    local_178 = 0;
    local_170 = 0;
    local_168 = 0;
    uStack_18c = uStack_19c;
    uStack_184 = uStack_19c;
    uStack_17c = uStack_19c;
    uStack_174 = uStack_19c;
    uStack_16c = uStack_19c;
    uStack_164 = uStack_19c;
    piVar3 = __errno_location();
    av_strerror(-*piVar3,&local_1a0,0x40);
    av_log(param_1,0x10,DAT_00015514 + 0x15498,param_3,&local_1a0);
  }
  else {
    if ((pcVar1 != (char *)0x0) && (*pcVar1 == '1')) {
      *(byte *)(iVar4 + 0x1c) = *(byte *)(iVar4 + 0x1c) | 1;
    }
    if ((param_2 == 0) && (iVar2 = fcntl64(__fd,4,0x800), iVar2 < 0)) {
      uStack_15c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_158 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_154 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_150 = 0;
      local_160 = 0;
      local_148 = 0;
      local_140 = 0;
      local_138 = 0;
      local_130 = 0;
      local_128 = 0;
      uStack_14c = uStack_15c;
      uStack_144 = uStack_15c;
      uStack_13c = uStack_15c;
      uStack_134 = uStack_15c;
      uStack_12c = uStack_15c;
      uStack_124 = uStack_15c;
      piVar3 = __errno_location();
      av_strerror(-*piVar3,&local_160,0x40);
      av_log(param_1,0x18,DAT_00015504 + 0x15324,param_3,&local_160);
    }
    *(undefined4 *)(iVar4 + 0x14) = 0x1000;
    iVar2 = ioctl(__fd,0x8004500b,&local_1a0);
    if (iVar2 < 0) {
      uStack_11c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_118 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_114 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_110 = 0;
      local_120 = 0;
      local_108 = 0;
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 0;
      uStack_10c = uStack_11c;
      uStack_104 = uStack_11c;
      uStack_fc = uStack_11c;
      uStack_f4 = uStack_11c;
      uStack_ec = uStack_11c;
      uStack_e4 = uStack_11c;
      piVar3 = __errno_location();
      av_strerror(-*piVar3,&local_120,0x40);
      av_log(param_1,0x18,DAT_00015508 + 0x15380,&local_120);
    }
    if ((local_1a0 & 0x10) == 0) {
      local_1a0 = local_1a0 & 0x20;
      if (local_1a0 == 0) {
        av_log(param_1,0x10,DAT_00015500 + 0x152a8);
        close(__fd);
        return 0xfffffffb;
      }
      local_1a0 = 0x20;
      *(undefined4 *)(iVar4 + 0x18) = 0x10001;
      *(undefined4 *)(iVar4 + 0xc) = 2;
    }
    else {
      local_1a0 = 0x10;
      *(undefined4 *)(iVar4 + 0x18) = 0x10000;
      *(undefined4 *)(iVar4 + 0xc) = 2;
    }
    iVar2 = ioctl(__fd,0xc0045005,&local_1a0);
    if (iVar2 < 0) {
      uStack_dc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_d8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_d4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_d0 = 0;
      local_e0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = 0;
      uStack_cc = uStack_dc;
      uStack_c4 = uStack_dc;
      uStack_bc = uStack_dc;
      uStack_b4 = uStack_dc;
      uStack_ac = uStack_dc;
      uStack_a4 = uStack_dc;
      piVar3 = __errno_location();
      av_strerror(-*piVar3,&local_e0,0x40);
      av_log(param_1,0x10,DAT_00015510 + 0x1543c,&local_e0);
    }
    else {
      local_1a0 = (uint)(*(int *)(iVar4 + 0x10) == 2);
      iVar2 = ioctl(__fd,0xc0045003,&local_1a0);
      if (iVar2 < 0) {
        uStack_9c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_98 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_94 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        local_90 = 0;
        local_a0 = 0;
        local_88 = 0;
        local_80 = 0;
        local_78 = 0;
        local_70 = 0;
        local_68 = 0;
        uStack_8c = uStack_9c;
        uStack_84 = uStack_9c;
        uStack_7c = uStack_9c;
        uStack_74 = uStack_9c;
        uStack_6c = uStack_9c;
        uStack_64 = uStack_9c;
        piVar3 = __errno_location();
        av_strerror(-*piVar3,&local_a0,0x40);
        av_log(param_1,0x10,DAT_0001550c + 87000,&local_a0);
      }
      else {
        local_1a0 = *(uint *)(iVar4 + 8);
        iVar2 = ioctl(__fd,0xc0045002,&local_1a0);
        if (-1 < iVar2) {
          *(int *)(iVar4 + 4) = __fd;
          *(uint *)(iVar4 + 8) = local_1a0;
          return 0;
        }
        uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        local_50 = 0;
        local_60 = 0;
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
        piVar3 = __errno_location();
        av_strerror(-*piVar3,&local_60,0x40);
        av_log(param_1,0x10,DAT_00015518 + 0x154f4,&local_60);
      }
    }
    close(__fd);
  }
  return 0xfffffffb;
}



/* ===== FUN_0001551c @ 0001551c size=20 ===== */

undefined4 FUN_0001551c(int param_1)

{
  close(*(int *)(param_1 + 4));
  return 0;
}



/* ===== FUN_00015530 @ 00015530 size=20 ===== */

undefined4 FUN_00015530(int param_1)

{
  FUN_0001551c(*(undefined4 *)(param_1 + 0xc));
  return 0;
}



/* ===== FUN_00015544 @ 00015544 size=316 ===== */

int FUN_00015544(int param_1,int param_2)

{
  int iVar1;
  ssize_t sVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_30 [12];
  int local_24;
  
  iVar6 = *(int *)(param_1 + 0xc);
  iVar1 = av_new_packet(param_2,*(undefined4 *)(iVar6 + 0x14));
  if (-1 < iVar1) {
    sVar2 = read(*(int *)(iVar6 + 4),*(void **)(param_2 + 0x18),*(size_t *)(param_2 + 0x1c));
    if (sVar2 < 1) {
      av_packet_unref(param_2);
      *(undefined4 *)(param_2 + 0x1c) = 0;
      if (sVar2 != 0) {
        piVar4 = __errno_location();
        return -*piVar4;
      }
      iVar1 = -0x20464f45;
    }
    else {
      *(ssize_t *)(param_2 + 0x1c) = sVar2;
      uVar9 = av_gettime();
      iVar3 = ioctl(*(int *)(iVar6 + 4),0x8010500d,auStack_30);
      iVar8 = *(int *)(iVar6 + 0x10);
      iVar5 = iVar8 * *(int *)(iVar6 + 0xc) * *(int *)(iVar6 + 8);
      iVar1 = sVar2;
      if (iVar3 == 0) {
        iVar1 = sVar2 + local_24;
      }
      uVar10 = FUN_000184f4((int)((longlong)iVar1 * 1000000),
                            (int)((ulonglong)((longlong)iVar1 * 1000000) >> 0x20),iVar5,
                            iVar5 >> 0x1f);
      if (iVar8 == 2) {
        bVar7 = *(byte *)(iVar6 + 0x1c) & 1;
      }
      else {
        bVar7 = 0;
      }
      *(uint *)(param_2 + 8) = (uint)uVar9 - (uint)uVar10;
      *(uint *)(param_2 + 0xc) =
           (int)((ulonglong)uVar9 >> 0x20) -
           ((int)((ulonglong)uVar10 >> 0x20) + (uint)((uint)uVar9 < (uint)uVar10));
      if (bVar7 != 0) {
        iVar6 = *(int *)(param_2 + 0x18);
        iVar1 = iVar6 + 4;
        do {
          iVar3 = iVar1 + 4;
          *(ushort *)(iVar1 + -4) = ~*(ushort *)(iVar1 + -4);
          iVar1 = iVar3;
        } while (iVar3 != (sVar2 - 1U & 0xfffffffc) + iVar6 + 8);
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ===== FUN_00015680 @ 00015680 size=136 ===== */

undefined4 FUN_00015680(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = *(int *)(param_1 + 0xc);
  iVar1 = avformat_new_stream(param_1,0);
  if (iVar1 == 0) {
    return 0xfffffff4;
  }
  iVar2 = FUN_00015128(param_1,0,*(undefined4 *)(param_1 + 0x20));
  if (-1 < iVar2) {
    puVar3 = *(undefined4 **)(iVar1 + 0xb4);
    uVar4 = *(undefined4 *)(iVar5 + 8);
    uVar6 = *(undefined4 *)(iVar5 + 0x10);
    puVar3[1] = *(undefined4 *)(iVar5 + 0x18);
    puVar3[0x1b] = uVar4;
    puVar3[0x23] = uVar6;
    *puVar3 = 1;
    avpriv_set_pts_info(iVar1,0x40,1,1000000);
    return 0;
  }
  return 0xfffffffb;
}



/* ===== FUN_00015708 @ 00015708 size=20 ===== */

undefined4 FUN_00015708(int param_1)

{
  FUN_0001551c(*(undefined4 *)(param_1 + 0xc));
  return 0;
}



/* ===== FUN_0001571c @ 0001571c size=196 ===== */

undefined4 FUN_0001571c(int param_1,int param_2)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  size_t __n;
  size_t sVar4;
  int iVar5;
  void *__src;
  
  sVar4 = *(size_t *)(param_2 + 0x1c);
  iVar5 = *(int *)(param_1 + 0xc);
  __src = *(void **)(param_2 + 0x18);
  if (0 < (int)sVar4) {
    iVar1 = *(int *)(iVar5 + 0x1020);
    do {
      while( true ) {
        __n = 0x1000U - iVar1;
        if ((int)sVar4 <= (int)(0x1000U - iVar1)) {
          __n = sVar4;
        }
        memcpy((void *)(iVar5 + 0x1d + iVar1),__src,__n);
        iVar1 = __n + *(int *)(iVar5 + 0x1020);
        *(int *)(iVar5 + 0x1020) = iVar1;
        if (iVar1 < 0x1000) break;
        while( true ) {
          sVar2 = write(*(int *)(iVar5 + 4),(void *)(iVar5 + 0x1d),0x1000);
          if (0 < sVar2) break;
          if ((sVar2 != 0) && (piVar3 = __errno_location(), *piVar3 != 0xb && *piVar3 != 4)) {
            return 0xfffffffb;
          }
        }
        sVar4 = sVar4 - __n;
        iVar1 = 0;
        *(undefined4 *)(iVar5 + 0x1020) = 0;
        __src = (void *)((int)__src + __n);
        if ((int)sVar4 < 1) {
          return 0;
        }
      }
      sVar4 = sVar4 - __n;
      __src = (void *)((int)__src + __n);
    } while (0 < (int)sVar4);
  }
  return 0;
}



/* ===== FUN_000157e0 @ 000157e0 size=64 ===== */

undefined4 FUN_000157e0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0xc);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  iVar2 = *(int *)(**(int **)(param_1 + 0x1c) + 0xb4);
  uVar3 = *(undefined4 *)(iVar2 + 0x8c);
  *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar2 + 0x6c);
  *(undefined4 *)(iVar4 + 0x10) = uVar3;
  iVar2 = FUN_00015128(param_1,1,uVar1);
  if (iVar2 < 0) {
    uVar1 = 0xfffffffb;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00015820 @ 00015820 size=180 ===== */

void FUN_00015820(void)

{
  double dVar1;
  int iVar2;
  double in_d0;
  double in_d1;
  double in_d2;
  double dVar3;
  double dVar4;
  
  iVar2 = av_mallocz(0x28);
  dVar1 = DAT_000158e0;
  dVar3 = in_d2 * DAT_000158d8 * in_d1 * in_d0;
  if (iVar2 != 0) {
    *(double *)(iVar2 + 0x18) = in_d0;
    dVar4 = dVar3 * dVar3;
    dVar3 = dVar3 * dVar1;
    *(double *)(iVar2 + 8) = 1.0 - 1.0 / (((dVar3 / 3.0 + 1.0) * dVar3 * 0.5 + 1.0) * dVar3 + 1.0);
    *(double *)(iVar2 + 0x10) =
         (1.0 - 1.0 / (((dVar4 / 3.0 + 1.0) * dVar4 * 0.5 + 1.0) * dVar4 + 1.0)) / in_d1;
  }
  return;
}



/* ===== FUN_000158e8 @ 000158e8 size=28 ===== */

void FUN_000158e8(undefined4 param_1)

{
  undefined4 local_c [2];
  
  local_c[0] = param_1;
  av_freep(local_c);
  return;
}



/* ===== FUN_00015910 @ 00015910 size=96 ===== */

void FUN_00015910(double *param_1)

{
  int iVar1;
  uint in_fpscr;
  double in_d0;
  double dVar2;
  double in_d1;
  double dVar3;
  double dVar4;
  double dVar5;
  
  iVar1 = *(int *)(param_1 + 4) + 1;
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 != 1) {
    dVar3 = (double)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
    dVar4 = *param_1 + param_1[3] * in_d1;
    dVar2 = in_d0 - dVar4;
    dVar5 = param_1[1];
    if (param_1[1] <= 1.0 / dVar3) {
      dVar5 = 1.0 / dVar3;
    }
    in_d0 = dVar4 + dVar5 * dVar2;
    param_1[3] = param_1[3] + dVar2 * param_1[2];
  }
  *param_1 = in_d0;
  return;
}



/* ===== FUN_00015970 @ 00015970 size=20 ===== */

undefined4 FUN_00015970(double *param_1)

{
  double in_d0;
  
  return SUB84(*param_1 + in_d0 * param_1[3],0);
}



/* ===== FUN_00015984 @ 00015984 size=236 ===== */

undefined4 FUN_00015984(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  
  *param_1 = 0;
  if (param_2 == 0 && param_3 == 0) {
    uVar5 = 0xffffffea;
  }
  else {
    iVar1 = avformat_alloc_context();
    if (iVar1 == 0) {
      uVar5 = 0xfffffff4;
    }
    else {
      if ((((param_2 == 0) && (param_2 = av_find_input_format(param_3), param_2 == 0)) ||
          (*(int *)(param_2 + 0x14) == 0)) ||
         (uVar4 = *(uint *)(*(int *)(param_2 + 0x14) + 0x18),
         (uVar4 & 0xfffffffd) != 0x29 && uVar4 != 0x2d)) {
        uVar5 = 0xffffffea;
LAB_00015a18:
        avformat_free_context(iVar1);
        return uVar5;
      }
      iVar2 = *(int *)(param_2 + 0x20);
      *(int *)(iVar1 + 4) = param_2;
      if (iVar2 < 1) {
        *(undefined4 *)(iVar1 + 0xc) = 0;
      }
      else {
        piVar3 = (int *)av_mallocz();
        *(int **)(iVar1 + 0xc) = piVar3;
        if (piVar3 == (int *)0x0) {
          uVar5 = 0xfffffff4;
          goto LAB_00015a18;
        }
        iVar2 = *(int *)(*(int *)(iVar1 + 4) + 0x14);
        if (iVar2 != 0) {
          *piVar3 = iVar2;
          av_opt_set_defaults(*(undefined4 *)(iVar1 + 0xc));
        }
      }
      uVar5 = 0;
      *param_1 = iVar1;
    }
  }
  return uVar5;
}



/* ===== FUN_00015a70 @ 00015a70 size=168 ===== */

int FUN_00015a70(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = 0xd;
  piVar3 = *(int **)(DAT_00015b18 + 0x15a90 + DAT_00015b1c);
  piVar1 = piVar3;
  if (param_1 == -1) {
    do {
      if (param_2 == iVar2 || param_2 == 0) goto LAB_00015b04;
      iVar2 = piVar1[4];
      iVar4 = iVar4 + 1;
      piVar1 = piVar1 + 3;
    } while (iVar2 != 0);
  }
  else {
    do {
      if ((param_2 == iVar2 || param_2 == 0) && (param_1 == *piVar1)) {
LAB_00015b04:
        return piVar3[iVar4 * 3 + 2];
      }
      iVar2 = piVar1[4];
      iVar4 = iVar4 + 1;
      piVar1 = piVar1 + 3;
    } while (iVar2 != 0);
  }
  return 0;
}



/* ===== FUN_00015ba8 @ 00015ba8 size=80 ===== */

int FUN_00015ba8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0x32315559) {
    iVar2 = 0xd;
  }
  else {
    iVar1 = 0xd;
    iVar3 = *(int *)(DAT_00015bf8 + 0x15bc0 + DAT_00015bfc);
    do {
      if (*(int *)(iVar3 + 0x14) == param_1) {
        return iVar1;
      }
      iVar1 = *(int *)(iVar3 + 0x1c);
      iVar2 = 0;
      iVar3 = iVar3 + 0xc;
    } while (iVar1 != 0);
  }
  return iVar2;
}



/* ===== FUN_00015c00 @ 00015c00 size=308 ===== */

int FUN_00015c00(int param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc [48];
  
  iVar3 = *(int *)(param_1 + 0xc);
  memset(local_dc,0,0xbc);
  local_e4 = *param_3;
  local_e8 = *param_2;
  local_ec = 1;
  local_e0 = param_4;
  iVar1 = (**(code **)(iVar3 + 0x74))(*(undefined4 *)(iVar3 + 4),0xc0cc5605,&local_ec);
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    iVar1 = -*piVar2;
  }
  else {
    iVar1 = 0;
  }
  if ((*param_2 != local_e8) || (*param_3 != local_e4)) {
    av_log(param_1,0x20,DAT_00015d34 + 0x15cb4,*param_2,*param_3,local_e8,local_e4);
    *param_2 = local_e8;
    *param_3 = local_e4;
  }
  if (local_e0 != param_4) {
    iVar1 = -0x16;
    av_log(param_1,0x30,DAT_00015d3c + 0x15d2c,param_4,local_e0);
  }
  if (local_dc[0] == 4) {
    av_log(param_1,0x30,DAT_00015d38 + 0x15cfc);
    *(undefined4 *)(iVar3 + 0x18) = 1;
    return iVar1;
  }
  return iVar1;
}



/* ===== FUN_00015d40 @ 00015d40 size=548 ===== */

int FUN_00015d40(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int __oflag;
  int iVar4;
  int iVar5;
  uint uVar6;
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
  undefined4 local_98;
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
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  uint local_2c;
  
  iVar2 = DAT_00015f6c;
  iVar5 = *(int *)(param_1 + 0xc);
  iVar4 = DAT_00015f64 + 0x15d5c;
  if (*(int *)(iVar5 + 100) != 0) {
    av_log(param_1,0x10,DAT_00015f98 + 0x15f60);
    return -0x16;
  }
  __oflag = 0x802;
  *(undefined4 *)(iVar5 + 0x68) = *(undefined4 *)(iVar4 + DAT_00015f68);
  iVar1 = DAT_00015f70;
  *(undefined4 *)(iVar5 + 0x6c) = *(undefined4 *)(iVar4 + iVar2);
  iVar2 = DAT_00015f74;
  *(undefined4 *)(iVar5 + 0x70) = *(undefined4 *)(iVar4 + iVar1);
  iVar1 = DAT_00015f78;
  *(undefined4 *)(iVar5 + 0x74) = *(undefined4 *)(iVar4 + iVar2);
  iVar2 = DAT_00015f7c;
  *(undefined4 *)(iVar5 + 0x78) = *(undefined4 *)(iVar4 + iVar1);
  iVar1 = DAT_00015f80;
  *(undefined4 *)(iVar5 + 0x7c) = *(undefined4 *)(iVar4 + iVar2);
  uVar6 = *(uint *)(param_1 + 0x48);
  *(undefined4 *)(iVar5 + 0x80) = *(undefined4 *)(iVar4 + iVar1);
  if ((uVar6 & 4) == 0) {
    __oflag = 2;
  }
  iVar2 = open64(param_2,__oflag);
  if (-1 < iVar2) {
    iVar4 = (**(code **)(iVar5 + 0x74))(iVar2,0x80685600,&local_80);
    if (iVar4 < 0) {
      piVar3 = __errno_location();
      uStack_bc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_b8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_b4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_c0 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      local_88 = 0;
      iVar4 = -*piVar3;
      uStack_ac = uStack_bc;
      uStack_a4 = uStack_bc;
      uStack_9c = uStack_bc;
      uStack_94 = uStack_bc;
      uStack_8c = uStack_bc;
      uStack_84 = uStack_bc;
      av_strerror(iVar4,&local_c0,0x40);
      av_log(param_1,0x10,DAT_00015f88 + 0x15e8c,&local_c0);
    }
    else {
      uVar6 = local_2c;
      av_log(param_1,0x28,DAT_00015f84 + 0x15e14,iVar2,local_2c);
      if ((local_2c & 1) == 0) {
        iVar4 = -0x13;
        av_log(param_1,0x10,DAT_00015f8c + 0x15ec4,local_2c,uVar6);
      }
      else {
        if ((local_2c & 0x4000000) != 0) {
          return iVar2;
        }
        iVar4 = -0x26;
        av_log(param_1,0x10,DAT_00015f94 + 0x15f48,local_2c,uVar6);
      }
    }
    (**(code **)(iVar5 + 0x6c))(iVar2);
    return iVar4;
  }
  piVar3 = __errno_location();
  uStack_7c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_78 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_74 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_80 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  iVar2 = *piVar3;
  uStack_6c = uStack_7c;
  uStack_64 = uStack_7c;
  uStack_5c = uStack_7c;
  uStack_54 = uStack_7c;
  uStack_4c = uStack_7c;
  uStack_44 = uStack_7c;
  av_strerror(-iVar2,&local_80,0x40);
  av_log(param_1,0x10,DAT_00015f90 + 0x15f20,param_2,&local_80);
  return -iVar2;
}



/* ===== FUN_00015f9c @ 00015f9c size=708 ===== */

int FUN_00015f9c(int param_1,int param_2)

{
  int *piVar1;
  DIR *__dirp;
  dirent64 *pdVar2;
  int iVar3;
  int *piVar4;
  char *__format;
  int iVar5;
  char *__s1;
  char *__s2;
  int iVar6;
  int iVar7;
  int *local_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [88];
  char local_128 [4];
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  
  iVar6 = *(int *)(param_1 + 0xc);
  if (param_2 == 0) {
    iVar7 = -0x16;
  }
  else {
    __dirp = opendir((char *)(DAT_00016260 + 0x15fc0));
    if (__dirp == (DIR *)0x0) {
      piVar4 = __errno_location();
      uStack_124 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_120 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_11c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_128[0] = '\0';
      local_128[1] = '\0';
      local_128[2] = '\0';
      local_128[3] = '\0';
      local_118 = 0;
      local_110 = 0;
      local_108 = 0;
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      iVar7 = -*piVar4;
      uStack_114 = uStack_124;
      uStack_10c = uStack_124;
      uStack_104 = uStack_124;
      uStack_fc = uStack_124;
      uStack_f4 = uStack_124;
      uStack_ec = uStack_124;
      av_strerror(iVar7,local_128,0x40);
      av_log(param_1,0x10,DAT_00016280 + 0x16240,local_128);
    }
    else {
      __s2 = (char *)(DAT_00016264 + 0x15fe0);
      iVar7 = 0;
      __format = (char *)(DAT_00016268 + 0x15fe8);
LAB_00015fe8:
      pdVar2 = readdir64(__dirp);
      if (pdVar2 != (dirent64 *)0x0) {
        __s1 = pdVar2->d_name;
        local_1d4 = (int *)0x0;
        iVar3 = strncmp(__s1,__s2,5);
        if ((((iVar3 == 0) || (iVar3 = strncmp(__s1,(char *)(DAT_0001626c + 0x16030),5), iVar3 == 0)
             ) || (iVar3 = strncmp(__s1,(char *)(DAT_00016270 + 0x1604c),3), iVar3 == 0)) ||
           (iVar3 = strncmp(__s1,(char *)(DAT_00016274 + 0x16068),10), iVar3 == 0)) {
          iVar3 = snprintf(local_128,0x100,__format,__s1);
          if (0xff < iVar3) {
            iVar7 = -0x26;
            av_log(param_1,0x10,DAT_00016278 + 0x16148);
            goto LAB_00016148;
          }
          iVar3 = FUN_00015d40(param_1,local_128);
          if (-1 < iVar3) {
            iVar7 = (**(code **)(iVar6 + 0x74))(iVar3,0x80685600,auStack_190);
            if (iVar7 < 0) {
              piVar4 = __errno_location();
              uStack_1cc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
              uStack_1c8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
              uStack_1c4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
              local_1d0 = 0;
              local_1c0 = 0;
              local_1b8 = 0;
              local_1b0 = 0;
              local_1a8 = 0;
              local_1a0 = 0;
              local_198 = 0;
              iVar7 = -*piVar4;
              uStack_1bc = uStack_1cc;
              uStack_1b4 = uStack_1cc;
              uStack_1ac = uStack_1cc;
              uStack_1a4 = uStack_1cc;
              uStack_19c = uStack_1cc;
              uStack_194 = uStack_1cc;
              av_strerror(iVar7,&local_1d0,0x40);
              av_log(param_1,0x10,DAT_0001627c + 0x161b0,&local_1d0);
LAB_000161b4:
              if (local_1d4 != (int *)0x0) {
LAB_000161c0:
                av_freep(local_1d4);
                av_freep(local_1d4 + 1);
                av_freep(&local_1d4);
              }
            }
            else {
              piVar4 = (int *)av_mallocz(0x10);
              local_1d4 = piVar4;
              if (piVar4 != (int *)0x0) {
                iVar7 = av_strdup(local_128);
                piVar1 = local_1d4;
                *piVar4 = iVar7;
                iVar7 = av_strdup(auStack_180);
                iVar5 = *local_1d4;
                piVar1[1] = iVar7;
                if ((iVar5 == 0) || (local_1d4[1] == 0)) {
                  iVar7 = -0xc;
                  goto LAB_000161c0;
                }
                iVar7 = av_dynarray_add_nofree(param_2,param_2 + 4);
                if (iVar7 < 0) goto LAB_000161b4;
                (**(code **)(iVar6 + 0x6c))(iVar3);
                goto LAB_00015fe8;
              }
              iVar7 = -0xc;
            }
            (**(code **)(iVar6 + 0x6c))(iVar3);
            goto LAB_00016148;
          }
        }
        goto LAB_00015fe8;
      }
LAB_00016148:
      closedir(__dirp);
    }
  }
  return iVar7;
}



/* ===== FUN_00016284 @ 00016284 size=180 ===== */

undefined4 FUN_00016284(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_14 [2];
  
  iVar3 = *(int *)(param_1 + 0xc);
  DataMemoryBarrier(0xb);
  DataMemoryBarrier(0xb);
  if (*(int *)(iVar3 + 0x34) != *(int *)(iVar3 + 0x30)) {
    av_log(param_1,0x18,DAT_00016338 + 0x162b8);
  }
  local_14[0] = 1;
  (**(code **)(iVar3 + 0x74))(*(undefined4 *)(iVar3 + 4),0x40045613,local_14);
  if (0 < *(int *)(iVar3 + 0x30)) {
    iVar4 = 0;
    do {
      iVar1 = iVar4 * 4;
      iVar2 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      (**(code **)(iVar3 + 0x80))
                (*(undefined4 *)(*(int *)(iVar3 + 0x38) + iVar2),
                 *(undefined4 *)(*(int *)(iVar3 + 0x3c) + iVar1));
    } while (iVar4 < *(int *)(iVar3 + 0x30));
  }
  av_freep(iVar3 + 0x38);
  av_freep(iVar3 + 0x3c);
  (**(code **)(iVar3 + 0x6c))(*(undefined4 *)(iVar3 + 4));
  return 0;
}



/* ===== FUN_000177c8 @ 000177c8 size=244 ===== */

void FUN_000177c8(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  int local_5c [4];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar5 = 0;
  uVar6 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar7 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_5c[0] = param_1[1];
  iVar3 = *param_1;
  local_24 = 0;
  local_5c[1] = 1;
  local_5c[2] = 0;
  local_2c = 1;
  local_44 = 0;
  local_3c = 0;
  local_34 = 0;
  uStack_20 = 0;
  local_5c[3] = uVar6;
  uStack_4c = uVar7;
  uStack_48 = uVar8;
  uStack_40 = uVar6;
  uStack_38 = uVar6;
  uStack_30 = uVar6;
  uStack_28 = uVar6;
  uStack_1c = uVar6;
  av_free();
  iVar2 = (**(code **)(iVar3 + 0x74))(*(undefined4 *)(iVar3 + 4),0xc044560f,local_5c);
  if (iVar2 < 0) {
    piVar4 = __errno_location();
    local_9c = uVar5;
    uStack_98 = uVar6;
    uStack_94 = uVar7;
    uStack_90 = uVar8;
    local_8c = uVar5;
    uStack_88 = uVar6;
    local_84 = uVar5;
    uStack_80 = uVar6;
    local_7c = uVar5;
    uStack_78 = uVar6;
    local_74 = uVar5;
    uStack_70 = uVar6;
    local_6c = uVar5;
    uStack_68 = uVar6;
    local_64 = uVar5;
    uStack_60 = uVar6;
    av_strerror(-*piVar4,&local_9c,0x40);
    av_log(0,0x10,DAT_000178bc + 0x178ac,&local_9c);
    return;
  }
  piVar4 = (int *)(iVar3 + 0x34);
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = *piVar4 + 1;
  DataMemoryBarrier(0xb);
  return;
}



/* ===== FUN_000178c0 @ 000178c0 size=1948 ===== */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00017bd0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

int FUN_000178c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                int param_5,int *param_6)

{
  size_t sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  undefined4 extraout_s1;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 local_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 local_19c;
  undefined4 uStack_198;
  undefined4 local_194;
  undefined4 uStack_190;
  undefined4 local_18c;
  undefined4 uStack_188;
  undefined4 local_184;
  undefined4 uStack_180;
  undefined4 local_17c;
  undefined4 uStack_178;
  undefined4 local_174;
  undefined4 uStack_170;
  undefined4 local_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined4 local_154;
  undefined4 uStack_150;
  undefined4 local_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined4 uStack_130;
  int *local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  uint local_6c [2];
  size_t local_64;
  uint local_60;
  int local_58;
  int local_54;
  undefined4 local_3c;
  
  iVar6 = *(int *)(param_5 + 0xc);
  memset(local_6c,0,0x44);
  local_6c[1] = 1;
  param_6[7] = 0;
  local_3c = 1;
LAB_00017918:
  iVar2 = (**(code **)(iVar6 + 0x74))(*(undefined4 *)(iVar6 + 4),0xc0445611,local_6c);
  if (iVar2 < 0) goto LAB_00017908;
  if (*(uint *)(iVar6 + 0x30) <= local_6c[0]) {
    av_log(param_5,0x10,DAT_00017f58 + 0x17ec4);
    return -0x16;
  }
  piVar8 = (int *)(iVar6 + 0x34);
  DataMemoryBarrier(0xb);
  do {
    bVar9 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar9);
  *piVar8 = *piVar8 + -1;
  DataMemoryBarrier(0xb);
  DataMemoryBarrier(0xb);
  DataMemoryBarrier(0xb);
  if (*(int *)(iVar6 + 0x34) < 1) {
    av_log(0,0,DAT_00017f74 + 0x180b0,DAT_00017f70 + 0x180ac);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((local_60 & 0x40) == 0) {
    if (*(int *)(param_5 + 0x70) == 0xcf) {
      *(size_t *)(iVar6 + 0x14) = local_64;
      sVar1 = local_64;
    }
    else {
      sVar1 = *(size_t *)(iVar6 + 0x14);
    }
    if ((0 < (int)sVar1) && (local_64 != sVar1)) {
      av_log(param_5,0x18,DAT_00017f40 + 0x17ca4);
      local_64 = 0;
    }
  }
  else {
    av_log(param_5,0x18,DAT_00017f3c + 0x17c80,local_64);
    local_64 = 0;
  }
  DataMemoryBarrier(0xb);
  DataMemoryBarrier(0xb);
  if (*(int *)(iVar6 + 0x30) < 0x10) {
    iVar2 = 1;
  }
  else {
    iVar2 = *(int *)(iVar6 + 0x30) >> 3;
  }
  if (*(int *)(iVar6 + 0x34) == iVar2) {
    iVar2 = av_new_packet(param_6);
    if (iVar2 < 0) {
      av_log(param_5,0x10,DAT_00017f4c + 0x17df4);
      iVar6 = (**(code **)(iVar6 + 0x74))(*(undefined4 *)(iVar6 + 4),0xc044560f,local_6c);
      if (iVar6 < 0) {
        piVar8 = __errno_location();
        uStack_168 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_164 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_160 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        local_16c = 0;
        local_15c = 0;
        local_154 = 0;
        local_14c = 0;
        local_144 = 0;
        local_13c = 0;
        local_134 = 0;
        uStack_158 = uStack_168;
        uStack_150 = uStack_168;
        uStack_148 = uStack_168;
        uStack_140 = uStack_168;
        uStack_138 = uStack_168;
        uStack_130 = uStack_168;
        av_strerror(-*piVar8,&local_16c,0x40);
        av_log(0,0x10,DAT_00017f50 + 0x17e84,&local_16c);
        return iVar2;
      }
      DataMemoryBarrier(0xb);
      do {
        bVar9 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar9);
      *piVar8 = *piVar8 + 1;
      DataMemoryBarrier(0xb);
      return iVar2;
    }
    memcpy((void *)param_6[6],*(void **)(*(int *)(iVar6 + 0x38) + local_6c[0] * 4),local_64);
    iVar6 = (**(code **)(iVar6 + 0x74))(*(undefined4 *)(iVar6 + 4),0xc044560f,local_6c);
    if (-1 < iVar6) {
      DataMemoryBarrier(0xb);
      do {
        bVar9 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar9);
      *piVar8 = *piVar8 + 1;
      DataMemoryBarrier(0xb);
      goto LAB_00017a44;
    }
    piVar8 = __errno_location();
    uStack_128 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_124 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_120 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_12c = (int *)0x0;
    local_11c = 0;
    local_114 = 0;
    local_10c = 0;
    local_104 = 0;
    local_fc = 0;
    local_f4 = 0;
    iVar6 = *piVar8;
    iVar2 = -iVar6;
    uStack_118 = uStack_128;
    uStack_110 = uStack_128;
    uStack_108 = uStack_128;
    uStack_100 = uStack_128;
    uStack_f8 = uStack_128;
    uStack_f0 = uStack_128;
    av_strerror(iVar2,&local_12c,0x40);
    av_log(0,0x10,DAT_00017f44 + 0x17d6c,&local_12c);
    if (iVar6 == 0) goto LAB_00017a44;
    av_packet_unref(param_6);
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar6 + 0x38) + local_6c[0] * 4);
    param_6[7] = local_64;
    param_6[6] = iVar2;
    local_12c = (int *)av_malloc(8);
    iVar2 = DAT_00017f30;
    if (local_12c == (int *)0x0) {
      av_log(param_5,0x10,DAT_00017f5c + 0x17edc);
      iVar6 = (**(code **)(iVar6 + 0x74))(*(undefined4 *)(iVar6 + 4),0xc044560f,local_6c);
      if (iVar6 < 0) {
        piVar8 = __errno_location();
        uStack_e8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_e4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_e0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        local_ec = 0;
        local_dc = 0;
        local_d4 = 0;
        local_cc = 0;
        local_c4 = 0;
        local_bc = 0;
        local_b4 = 0;
        uStack_d8 = uStack_e8;
        uStack_d0 = uStack_e8;
        uStack_c8 = uStack_e8;
        uStack_c0 = uStack_e8;
        uStack_b8 = uStack_e8;
        uStack_b0 = uStack_e8;
        av_strerror(-*piVar8,&local_ec,0x40);
        av_log(0,0x10,DAT_00017f64 + 0x18024,&local_ec);
      }
      else {
        DataMemoryBarrier(0xb);
        do {
          bVar9 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar9);
        *piVar8 = *piVar8 + 1;
        DataMemoryBarrier(0xb);
      }
      return -0xc;
    }
    local_12c[1] = local_6c[0];
    *local_12c = iVar6;
    iVar2 = av_buffer_create(param_6[6],param_6[7],iVar2 + 0x17a2c,local_12c);
    *param_6 = iVar2;
    if (iVar2 == 0) {
      av_log(param_5,0x10,DAT_00017f60 + 0x17f8c);
      iVar6 = (**(code **)(iVar6 + 0x74))(*(undefined4 *)(iVar6 + 4),0xc044560f,local_6c);
      if (iVar6 < 0) {
        piVar8 = __errno_location();
        uStack_a8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_a4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_a0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        local_ac = 0;
        local_9c = 0;
        local_94 = 0;
        local_8c = 0;
        local_84 = 0;
        local_7c = 0;
        local_74 = 0;
        uStack_98 = uStack_a8;
        uStack_90 = uStack_a8;
        uStack_88 = uStack_a8;
        uStack_80 = uStack_a8;
        uStack_78 = uStack_a8;
        uStack_70 = uStack_a8;
        av_strerror(-*piVar8,&local_ac,0x40);
        av_log(0,0x10,DAT_00017f68 + 0x1807c,&local_ac);
      }
      else {
        DataMemoryBarrier(0xb);
        do {
          bVar9 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar9);
        *piVar8 = *piVar8 + 1;
        DataMemoryBarrier(0xb);
      }
      av_freep(&local_12c);
      return -0xc;
    }
LAB_00017a44:
    iVar7 = *(int *)(param_5 + 0xc);
    lVar10 = (longlong)local_58 * 1000000 + (longlong)local_54;
    uVar5 = (uint)lVar10;
    iVar2 = (int)((ulonglong)lVar10 >> 0x20);
    iVar6 = *(int *)(iVar7 + 0x20);
    *(longlong *)(param_6 + 2) = lVar10;
    if (iVar6 == 0) {
LAB_00017a68:
      if (*(int *)(iVar7 + 0x24) != 0) {
LAB_00017be8:
        uVar11 = av_gettime();
        uVar12 = av_gettime_relative();
        iVar6 = (int)((ulonglong)uVar12 >> 0x20);
        uVar5 = (uint)uVar12;
        uVar3 = FUN_00018494(uVar5 - *(uint *)(iVar7 + 0x28),
                             iVar6 - (*(int *)(iVar7 + 0x2c) +
                                     (uint)(uVar5 < *(uint *)(iVar7 + 0x28))));
        uVar4 = FUN_00018494((int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
        FUN_00015910(uVar4,param_2,uVar3,*(undefined4 *)(iVar7 + 0x24));
        *(undefined8 *)(iVar7 + 0x28) = uVar12;
        uVar3 = FUN_00018494(param_6[2] - uVar5,
                             param_6[3] - (iVar6 + (uint)((uint)param_6[2] < uVar5)));
        uVar3 = FUN_00015970(uVar3,*(undefined4 *)(iVar7 + 0x24));
        uVar11 = FUN_000185d8(uVar3,extraout_s1);
        *(undefined8 *)(param_6 + 2) = uVar11;
      }
    }
    else {
      lVar10 = av_gettime();
      if (((*(int *)(iVar7 + 0x20) == 1) &&
          (iVar6 = (int)((ulonglong)(lVar10 + 1000000) >> 0x20),
          bVar9 = (uint)(lVar10 + 1000000) < uVar5,
          (int)(iVar6 - (iVar2 + (uint)bVar9)) < 0 ==
          (SBORROW4(iVar6,iVar2) != SBORROW4(iVar6 - iVar2,(uint)bVar9)))) &&
         (lVar10 = lVar10 + CONCAT44(DAT_00017f24,DAT_00017f20),
         iVar6 = (int)((ulonglong)lVar10 >> 0x20), bVar9 = uVar5 < (uint)lVar10,
         (int)(iVar2 - (iVar6 + (uint)bVar9)) < 0 ==
         (SBORROW4(iVar2,iVar6) != SBORROW4(iVar2 - iVar6,(uint)bVar9)))) {
        av_log(param_5,0x20,DAT_00017f48 + 0x17dd4);
        *(undefined4 *)(iVar7 + 0x20) = 0;
        goto LAB_00017a68;
      }
      if (*(int *)(**(int **)(param_5 + 0x1c) + 0x44) != 0) {
        lVar10 = av_gettime_relative();
        if ((*(int *)(iVar7 + 0x20) != 2) &&
           ((iVar6 = (int)((ulonglong)(lVar10 + 1000000) >> 0x20),
            bVar9 = (uint)(lVar10 + 1000000) < uVar5,
            (int)(iVar6 - (iVar2 + (uint)bVar9)) < 0 !=
            (SBORROW4(iVar6,iVar2) != SBORROW4(iVar6 - iVar2,(uint)bVar9)) ||
            (lVar10 = lVar10 + CONCAT44(DAT_00017f24,DAT_00017f20),
            iVar6 = (int)((ulonglong)lVar10 >> 0x20), bVar9 = uVar5 < (uint)lVar10,
            (int)(iVar2 - (iVar6 + (uint)bVar9)) < 0 !=
            (SBORROW4(iVar2,iVar6) != SBORROW4(iVar2 - iVar6,(uint)bVar9)))))) goto LAB_00017e94;
        uStack_a8 = 1;
        local_ac = 1000000;
        uVar11 = av_rescale_q(1,0,1000000,1);
        av_log(param_5,0x20,DAT_00017f38 + 0x17ba8);
        uVar3 = FUN_00018494((int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
        iVar6 = FUN_00015820(0,param_2,uVar3,param_4,(int)DAT_00017f28);
        *(int *)(iVar7 + 0x24) = iVar6;
        if (iVar6 == 0) goto LAB_00017a74;
        *(undefined4 *)(iVar7 + 0x20) = 0;
        goto LAB_00017be8;
      }
LAB_00017e94:
      av_log(param_5,0x10,DAT_00017f54 + 0x17ea8);
    }
LAB_00017a74:
    iVar2 = param_6[7];
  }
  goto LAB_00017a78;
LAB_00017908:
  piVar8 = __errno_location();
  iVar2 = *piVar8;
  if (iVar2 != 4) {
    if (iVar2 == 0xb) {
      iVar2 = -0xb;
    }
    else {
      uStack_1a8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_1a4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_1a0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      iVar2 = -iVar2;
      local_1ac = 0;
      local_19c = 0;
      local_194 = 0;
      local_18c = 0;
      local_184 = 0;
      local_17c = 0;
      local_174 = 0;
      uStack_198 = uStack_1a8;
      uStack_190 = uStack_1a8;
      uStack_188 = uStack_1a8;
      uStack_180 = uStack_1a8;
      uStack_178 = uStack_1a8;
      uStack_170 = uStack_1a8;
      av_strerror(iVar2,&local_1ac,0x40);
      av_log(param_5,0x10,DAT_00017f34 + 0x17ae4,&local_1ac);
LAB_00017a78:
      if (-1 < iVar2) {
        iVar2 = param_6[7];
      }
    }
    return iVar2;
  }
  goto LAB_00017918;
}



/* ===== avdevice_version @ 00018104 size=12 ===== */

undefined4 avdevice_version(void)

{
  return 0x3b0764;
}



/* ===== avdevice_configuration @ 00018110 size=12 ===== */

int avdevice_configuration(void)

{
  return (int)&DAT_0001811c + DAT_0001811c;
}



/* ===== avdevice_license @ 00018120 size=16 ===== */

undefined * avdevice_license(void)

{
  return &UNK_00018141 + DAT_00018130;
}



/* ===== FUN_00018494 @ 00018494 size=380 ===== */

ulonglong FUN_00018494(uint param_1,uint param_2)

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
LAB_00018258:
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
  if ((uVar4 & 0x100000) != 0) goto LAB_00018258;
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
      goto LAB_000182d8;
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
LAB_000182d8:
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



/* ===== FUN_000184f4 @ 000184f4 size=228 ===== */

undefined8 FUN_000184f4(int param_1,int param_2,int param_3,int param_4)

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
      uVar2 = FUN_00018660(param_1,param_2,-param_3,-param_4 - (uint)(param_3 != 0),&local_8);
      return CONCAT44(-(int)((ulonglong)uVar2 >> 0x20) - (uint)((int)uVar2 != 0),-(int)uVar2);
    }
    uVar2 = FUN_00018660();
    return uVar2;
  }
  iVar1 = -param_2 - (uint)(param_1 != 0);
  if (param_4 < 0) {
    uVar2 = FUN_00018660(-param_1,iVar1,-param_3,-param_4 - (uint)(param_3 != 0),&local_8);
    return uVar2;
  }
  uVar2 = FUN_00018660(-param_1,iVar1,param_3,param_4,&local_8);
  return CONCAT44(-(int)((ulonglong)uVar2 >> 0x20) - (uint)((int)uVar2 != 0),-(int)uVar2);
}



/* ===== FUN_000185d8 @ 000185d8 size=44 ===== */

int FUN_000185d8(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  if (0.0 <= (double)CONCAT44(param_2,param_1)) {
    iVar1 = FUN_00018608();
    return iVar1;
  }
  iVar1 = FUN_00018608(param_1,param_2 ^ 0x80000000);
  return -iVar1;
}



/* ===== FUN_00018608 @ 00018608 size=72 ===== */

undefined8 FUN_00018608(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint in_fpscr;
  double dVar2;
  
  dVar2 = (double)CONCAT44(param_2,param_1) * DAT_00018650;
  iVar1 = (uint)(0.0 < dVar2) * (int)(longlong)dVar2;
  dVar2 = (double)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  dVar2 = (double)CONCAT44(param_2,param_1) + -dVar2 * DAT_00018658;
  return CONCAT44(iVar1,(uint)(0.0 < dVar2) * (int)(longlong)dVar2);
}



/* ===== FUN_00018660 @ 00018660 size=328 ===== */

undefined8 FUN_00018660(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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



/* ===== _DT_FINI @ 000187a8 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::opendir @ 0002c000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_gettime_relative @ 0002c004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_gettime_relative(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_image_get_buffer_size @ 0002c008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_image_get_buffer_size(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_packet_add_side_data @ 0002c00c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_packet_add_side_data(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 0002c014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_buffersink_get_frame_flags @ 0002c018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_buffersink_get_frame_flags(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_malloc @ 0002c01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_malloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0002c020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 0002c024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_pix_fmt_desc_get @ 0002c028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_pix_fmt_desc_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_parse_video_rate @ 0002c02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_parse_video_rate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 0002c030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_get_sample_fmt_name @ 0002c034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_get_sample_fmt_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_packet_move_ref @ 0002c038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_packet_move_ref(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_frame_get_side_data @ 0002c03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_frame_get_side_data(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0002c040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dup @ 0002c044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dup(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_dynarray_add_nofree @ 0002c048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_dynarray_add_nofree(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0002c04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0002c050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avio_closep @ 0002c054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avio_closep(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_image_check_size @ 0002c058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_image_check_size(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avfilter_graph_parse_ptr @ 0002c05c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avfilter_graph_parse_ptr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_buffersink_get_format @ 0002c060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_buffersink_get_format(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avio_read_to_bprint @ 0002c064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avio_read_to_bprint(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_buffersink_get_sample_aspect_ratio @ 0002c068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_buffersink_get_sample_aspect_ratio(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002c06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_buffersink_get_type @ 0002c070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_buffersink_get_type(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_strdup @ 0002c074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_strdup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_frame_alloc @ 0002c078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_frame_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fcntl64 @ 0002c07c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void fcntl64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avformat_alloc_output_context2 @ 0002c080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avformat_alloc_output_context2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_dict_set @ 0002c084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_dict_set(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 0002c088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0002c08c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_image_copy_to_buffer @ 0002c090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_image_copy_to_buffer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avio_open2 @ 0002c094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avio_open2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::closedir @ 0002c098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 0002c09c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_frame_unref @ 0002c0a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_frame_unref(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avcodec_descriptor_get_by_name @ 0002c0a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avcodec_descriptor_get_by_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_find_input_format @ 0002c0a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_find_input_format(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_bprint_finalize @ 0002c0ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_bprint_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_get_pcm_codec @ 0002c0b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_get_pcm_codec(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_bprint_init @ 0002c0b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_bprint_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_buffersink_get_ch_layout @ 0002c0b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_buffersink_get_ch_layout(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_strstart @ 0002c0bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_strstart(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::munmap @ 0002c0c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_get_padded_bits_per_pixel @ 0002c0c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_get_padded_bits_per_pixel(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_dict_free @ 0002c0c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_dict_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avcodec_get_name @ 0002c0cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avcodec_get_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_buffer_create @ 0002c0d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_buffer_create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avfilter_graph_config @ 0002c0d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avfilter_graph_config(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_buffersink_get_time_base @ 0002c0d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_buffersink_get_time_base(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avfilter_graph_create_filter @ 0002c0dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avfilter_graph_create_filter(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_malloc_array @ 0002c0e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_malloc_array(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avfilter_graph_alloc @ 0002c0e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avfilter_graph_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_dict_copy @ 0002c0e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_dict_copy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_get_pix_fmt_name @ 0002c0ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_get_pix_fmt_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avpriv_register_devices @ 0002c0f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avpriv_register_devices(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avcodec_descriptor_get @ 0002c0f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avcodec_descriptor_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avfilter_inout_free @ 0002c0f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avfilter_inout_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_new_packet @ 0002c0fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_new_packet(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 0002c100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0002c104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_get_pix_fmt @ 0002c108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_get_pix_fmt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 0002c10c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_default_item_name @ 0002c110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_default_item_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_free @ 0002c114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_opt_set_bin @ 0002c118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_opt_set_bin(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_buffersink_get_h @ 0002c11c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_buffersink_get_h(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_rescale_q_rnd @ 0002c120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_rescale_q_rnd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_packet_pack_dictionary @ 0002c124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_packet_pack_dictionary(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avfilter_get_by_name @ 0002c128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avfilter_get_by_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0002c12c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_freep @ 0002c130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_freep(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_strcasecmp @ 0002c134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_strcasecmp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 0002c138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avfilter_link @ 0002c13c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avfilter_link(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avpriv_set_pts_info @ 0002c140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avpriv_set_pts_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avpriv_stream_set_need_parsing @ 0002c144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avpriv_stream_set_need_parsing(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_packet_unref @ 0002c148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_packet_unref(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 0002c14c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avformat_alloc_context @ 0002c150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avformat_alloc_context(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_opt_set_dict2 @ 0002c154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_opt_set_dict2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_get_bytes_per_sample @ 0002c158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_get_bytes_per_sample(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avfilter_graph_free @ 0002c15c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avfilter_graph_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0002c160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avfilter_graph_dump @ 0002c164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avfilter_graph_dump(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 0002c168 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::nanosleep @ 0002c16c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int nanosleep(timespec *__requested_time,timespec *__remaining)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_buffersink_get_w @ 0002c170 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_buffersink_get_w(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_int_list_length_for_size @ 0002c174 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_int_list_length_for_size(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_strerror @ 0002c178 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_strerror(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_opt_set_int @ 0002c17c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_opt_set_int(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_mallocz @ 0002c180 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_mallocz(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_buffersink_get_sample_rate @ 0002c184 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_buffersink_get_sample_rate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mmap64 @ 0002c188 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap64(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off64_t __offset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_gettime @ 0002c18c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_gettime(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avfilter_pad_get_type @ 0002c190 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avfilter_pad_get_type(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avcodec_pix_fmt_to_codec_tag @ 0002c194 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avcodec_pix_fmt_to_codec_tag(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readdir64 @ 0002c198 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent64 * readdir64(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avformat_free_context @ 0002c19c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avformat_free_context(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 0002c1a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open64 @ 0002c1a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0002c1a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_frame_free @ 0002c1ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_frame_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avformat_new_stream @ 0002c1b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avformat_new_stream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::avpriv_open @ 0002c1b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void avpriv_open(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_opt_set_defaults @ 0002c1b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_opt_set_defaults(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_rescale_q @ 0002c1bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_rescale_q(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::av_log @ 0002c1c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void av_log(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


