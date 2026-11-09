// libbluetooth.so.3.19.6 — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00014604 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== sdp_attr_add @ 00014628 size=12 ===== */

void sdp_attr_add(void)

{
  (*(code *)PTR_sdp_attr_add_0004de20)();
  return;
}



/* ===== sdp_set_attrid @ 00014634 size=12 ===== */

void sdp_set_attrid(void)

{
  (*(code *)PTR_sdp_set_attrid_0004de24)();
  return;
}



/* ===== <EXTERNAL>::strcpy @ 0001464c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_0004de2c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::ioctl @ 00014658 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_0004de30)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::writev @ 00014664 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t writev(int __fd,iovec *__iovec,int __count)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_writev_0004de34)(__fd);
  return sVar1;
}



/* ===== sdp_extract_attr @ 00014670 size=12 ===== */

void sdp_extract_attr(void)

{
  (*(code *)PTR_sdp_extract_attr_0004de38)();
  return;
}



/* ===== <EXTERNAL>::printf @ 0001467c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0004de3c)(__format);
  return iVar1;
}



/* ===== hci_devba @ 00014688 size=12 ===== */

void hci_devba(void)

{
  (*(code *)PTR_hci_devba_0004de40)();
  return;
}



/* ===== sdp_record_alloc @ 00014694 size=12 ===== */

void sdp_record_alloc(void)

{
  (*(code *)PTR_sdp_record_alloc_0004de44)();
  return;
}



/* ===== <EXTERNAL>::recv @ 000146a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recv_0004de48)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::connect @ 000146ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_connect_0004de4c)(__fd);
  return iVar1;
}



/* ===== sdp_uuid128_to_uuid @ 000146b8 size=12 ===== */

void sdp_uuid128_to_uuid(void)

{
  (*(code *)PTR_sdp_uuid128_to_uuid_0004de50)();
  return;
}



/* ===== hci_inquiry @ 000146c4 size=12 ===== */

void hci_inquiry(void)

{
  (*(code *)PTR_hci_inquiry_0004de54)();
  return;
}



/* ===== <EXTERNAL>::memmove @ 000146d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0004de58)(__dest);
  return pvVar1;
}



/* ===== sdp_uuid_to_proto @ 000146dc size=12 ===== */

void sdp_uuid_to_proto(void)

{
  (*(code *)PTR_sdp_uuid_to_proto_0004de5c)();
  return;
}



/* ===== <EXTERNAL>::snprintf @ 000146e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0004de60)(__s);
  return iVar1;
}



/* ===== sdp_attrid_comp_func @ 000146f4 size=12 ===== */

void sdp_attrid_comp_func(void)

{
  (*(code *)PTR_sdp_attrid_comp_func_0004de64)();
  return;
}



/* ===== sdp_uuid128_create @ 00014700 size=12 ===== */

void sdp_uuid128_create(void)

{
  (*(code *)PTR_sdp_uuid128_create_0004de68)();
  return;
}



/* ===== sdp_seq_alloc_with_length @ 0001470c size=12 ===== */

void sdp_seq_alloc_with_length(void)

{
  (*(code *)PTR_sdp_seq_alloc_with_length_0004de6c)();
  return;
}



/* ===== <EXTERNAL>::memcpy @ 00014718 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0004de70)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00014724 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_0004de74)();
  return;
}



/* ===== sdp_device_record_unregister @ 00014730 size=12 ===== */

void sdp_device_record_unregister(void)

{
  (*(code *)PTR_sdp_device_record_unregister_0004de78)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 0001473c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0004de7c)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::vsnprintf @ 00014748 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsnprintf_0004de80)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::socket @ 00014754 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_0004de84)(__domain);
  return iVar1;
}



/* ===== <EXTERNAL>::select @ 00014760 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_select_0004de88)(__nfds);
  return iVar1;
}



/* ===== sdp_append_to_buf @ 0001476c size=12 ===== */

void sdp_append_to_buf(void)

{
  (*(code *)PTR_sdp_append_to_buf_0004de8c)();
  return;
}



/* ===== <EXTERNAL>::send @ 00014784 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_send_0004de94)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 00014790 size=12 ===== */

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_0004de98)();
  return;
}



/* ===== sdp_list_append @ 0001479c size=12 ===== */

void sdp_list_append(void)

{
  (*(code *)PTR_sdp_list_append_0004de9c)();
  return;
}



/* ===== <EXTERNAL>::strtol @ 000147a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_0004dea0)(__nptr);
  return lVar1;
}



/* ===== sdp_extract_seqtype @ 000147b4 size=12 ===== */

void sdp_extract_seqtype(void)

{
  (*(code *)PTR_sdp_extract_seqtype_0004dea4)();
  return;
}



/* ===== sdp_pattern_add_uuidseq @ 000147c0 size=12 ===== */

void sdp_pattern_add_uuidseq(void)

{
  (*(code *)PTR_sdp_pattern_add_uuidseq_0004dea8)();
  return;
}



/* ===== sdp_device_record_update @ 000147d8 size=12 ===== */

void sdp_device_record_update(void)

{
  (*(code *)PTR_sdp_device_record_update_0004deb0)();
  return;
}



/* ===== hci_send_req @ 000147e4 size=12 ===== */

void hci_send_req(void)

{
  (*(code *)PTR_hci_send_req_0004deb4)();
  return;
}



/* ===== hci_for_each_dev @ 000147f0 size=12 ===== */

void hci_for_each_dev(void)

{
  (*(code *)PTR_hci_for_each_dev_0004deb8)();
  return;
}



/* ===== <EXTERNAL>::strcat @ 000147fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcat_0004debc)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::bind @ 00014808 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_bind_0004dec0)(__fd);
  return iVar1;
}



/* ===== hci_read_inq_response_tx_power_level @ 00014814 size=12 ===== */

void hci_read_inq_response_tx_power_level(void)

{
  (*(code *)PTR_hci_read_inq_response_tx_power_level_0004dec4)();
  return;
}



/* ===== <EXTERNAL>::vprintf @ 00014820 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vprintf(char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vprintf_0004dec8)(__format);
  return iVar1;
}



/* ===== sdp_uuid32_create @ 0001482c size=12 ===== */

void sdp_uuid32_create(void)

{
  (*(code *)PTR_sdp_uuid32_create_0004decc)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00014838 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0004ded0)();
  return;
}



/* ===== sdp_create @ 00014844 size=12 ===== */

void sdp_create(void)

{
  (*(code *)PTR_sdp_create_0004ded4)();
  return;
}



/* ===== sdp_set_lang_attr @ 00014850 size=12 ===== */

void sdp_set_lang_attr(void)

{
  (*(code *)PTR_sdp_set_lang_attr_0004ded8)();
  return;
}



/* ===== <EXTERNAL>::setsockopt @ 0001485c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setsockopt_0004dedc)(__fd);
  return iVar1;
}



/* ===== sdp_pattern_add_uuid @ 00014868 size=12 ===== */

void sdp_pattern_add_uuid(void)

{
  (*(code *)PTR_sdp_pattern_add_uuid_0004dee0)();
  return;
}



/* ===== <EXTERNAL>::strcasestr @ 00014874 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcasestr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcasestr_0004dee4)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::read @ 00014880 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_0004dee8)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strncmp @ 0001488c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0004deec)(__s1);
  return iVar1;
}



/* ===== sdp_uuid_to_uuid128 @ 00014898 size=12 ===== */

void sdp_uuid_to_uuid128(void)

{
  (*(code *)PTR_sdp_uuid_to_uuid128_0004def0)();
  return;
}



/* ===== sdp_device_record_register @ 000148a4 size=12 ===== */

void sdp_device_record_register(void)

{
  (*(code *)PTR_sdp_device_record_register_0004def4)();
  return;
}



/* ===== sdp_data_alloc @ 000148b0 size=12 ===== */

void sdp_data_alloc(void)

{
  (*(code *)PTR_sdp_data_alloc_0004def8)();
  return;
}



/* ===== <EXTERNAL>::strncpy @ 000148bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_0004defc)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::strcasecmp @ 000148c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcasecmp_0004df00)(__s1);
  return iVar1;
}



/* ===== sdp_data_get @ 000148d4 size=12 ===== */

void sdp_data_get(void)

{
  (*(code *)PTR_sdp_data_get_0004df04)();
  return;
}



/* ===== sdp_record_free @ 000148e0 size=12 ===== */

void sdp_record_free(void)

{
  (*(code *)PTR_sdp_record_free_0004df08)();
  return;
}



/* ===== <EXTERNAL>::realloc @ 000148ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_0004df0c)(__ptr);
  return pvVar1;
}



/* ===== sdp_seq_append @ 000148f8 size=12 ===== */

void sdp_seq_append(void)

{
  (*(code *)PTR_sdp_seq_append_0004df10)();
  return;
}



/* ===== baswap @ 00014904 size=12 ===== */

void baswap(void)

{
  (*(code *)PTR_baswap_0004df14)();
  return;
}



/* ===== sdp_list_remove @ 00014910 size=12 ===== */

void sdp_list_remove(void)

{
  (*(code *)PTR_sdp_list_remove_0004df18)();
  return;
}



/* ===== <EXTERNAL>::memcmp @ 0001491c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_0004df1c)(__s1);
  return iVar1;
}



/* ===== sdp_uuid16_create @ 00014928 size=12 ===== */

void sdp_uuid16_create(void)

{
  (*(code *)PTR_sdp_uuid16_create_0004df20)();
  return;
}



/* ===== <EXTERNAL>::strdup @ 00014934 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strdup_0004df24)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::memset @ 00014940 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0004df28)(__s);
  return pvVar1;
}



/* ===== sdp_device_record_register_binary @ 0001494c size=12 ===== */

void sdp_device_record_register_binary(void)

{
  (*(code *)PTR_sdp_device_record_register_binary_0004df2c)();
  return;
}



/* ===== hci_get_route @ 00014958 size=12 ===== */

void hci_get_route(void)

{
  (*(code *)PTR_hci_get_route_0004df30)();
  return;
}



/* ===== sdp_data_free @ 00014964 size=12 ===== */

void sdp_data_free(void)

{
  (*(code *)PTR_sdp_data_free_0004df34)();
  return;
}



/* ===== hci_read_remote_name_with_clock_offset @ 00014970 size=12 ===== */

void hci_read_remote_name_with_clock_offset(void)

{
  (*(code *)PTR_hci_read_remote_name_with_clock_offset_0004df38)();
  return;
}



/* ===== <EXTERNAL>::poll @ 0001497c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_poll_0004df3c)(__fds);
  return iVar1;
}



/* ===== <EXTERNAL>::syslog @ 00014988 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void syslog(int __pri,char *__fmt,...)

{
  (*(code *)PTR_syslog_0004df40)(__pri);
  return;
}



/* ===== hci_devinfo @ 00014994 size=12 ===== */

void hci_devinfo(void)

{
  (*(code *)PTR_hci_devinfo_0004df44)();
  return;
}



/* ===== sdp_attr_replace @ 000149a0 size=12 ===== */

void sdp_attr_replace(void)

{
  (*(code *)PTR_sdp_attr_replace_0004df48)();
  return;
}



/* ===== bt_malloc0 @ 000149ac size=12 ===== */

void bt_malloc0(void)

{
  (*(code *)PTR_bt_malloc0_0004df4c)();
  return;
}



/* ===== sdp_gen_pdu @ 000149b8 size=12 ===== */

void sdp_gen_pdu(void)

{
  (*(code *)PTR_sdp_gen_pdu_0004df50)();
  return;
}



/* ===== <EXTERNAL>::sprintf @ 000149c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_0004df54)(__s);
  return iVar1;
}



/* ===== sdp_uuid32_to_uuid128 @ 000149d0 size=12 ===== */

void sdp_uuid32_to_uuid128(void)

{
  (*(code *)PTR_sdp_uuid32_to_uuid128_0004df58)();
  return;
}



/* ===== bt_malloc @ 000149dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * bt_malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_bt_malloc_0004df5c)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::strsep @ 000149e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strsep(char **__stringp,char *__delim)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strsep_0004df60)(__stringp);
  return pcVar1;
}



/* ===== sdp_uuid128_cmp @ 000149f4 size=12 ===== */

void sdp_uuid128_cmp(void)

{
  (*(code *)PTR_sdp_uuid128_cmp_0004df64)();
  return;
}



/* ===== sdp_send_req_w4_rsp @ 00014a00 size=12 ===== */

void sdp_send_req_w4_rsp(void)

{
  (*(code *)PTR_sdp_send_req_w4_rsp_0004df68)();
  return;
}



/* ===== sdp_data_alloc_with_length @ 00014a0c size=12 ===== */

void sdp_data_alloc_with_length(void)

{
  (*(code *)PTR_sdp_data_alloc_with_length_0004df6c)();
  return;
}



/* ===== sdp_list_free @ 00014a18 size=12 ===== */

void sdp_list_free(void)

{
  (*(code *)PTR_sdp_list_free_0004df70)();
  return;
}



/* ===== <EXTERNAL>::getsockopt @ 00014a24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t *__optlen)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getsockopt_0004df74)(__fd);
  return iVar1;
}



/* ===== hci_send_cmd @ 00014a30 size=12 ===== */

void hci_send_cmd(void)

{
  (*(code *)PTR_hci_send_cmd_0004df78)();
  return;
}



/* ===== sdp_append_to_pdu @ 00014a3c size=12 ===== */

void sdp_append_to_pdu(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_sdp_append_to_pdu_0004df7c)();
  return;
}



/* ===== bt_free @ 00014a48 size=12 ===== */

void bt_free(void)

{
  (*(code *)PTR_bt_free_0004df80)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 00014a54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0004df84)();
  return piVar1;
}



/* ===== str2ba @ 00014a60 size=12 ===== */

void str2ba(void)

{
  (*(code *)PTR_str2ba_0004df88)();
  return;
}



/* ===== sdp_gen_record_pdu @ 00014a6c size=12 ===== */

void sdp_gen_record_pdu(void)

{
  (*(code *)PTR_sdp_gen_record_pdu_0004df8c)();
  return;
}



/* ===== <EXTERNAL>::atoi @ 00014a78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_0004df90)(__nptr);
  return iVar1;
}



/* ===== sdp_list_insert_sorted @ 00014a84 size=12 ===== */

void sdp_list_insert_sorted(void)

{
  (*(code *)PTR_sdp_list_insert_sorted_0004df94)();
  return;
}



/* ===== sdp_device_record_unregister_binary @ 00014a90 size=12 ===== */

void sdp_device_record_unregister_binary(void)

{
  (*(code *)PTR_sdp_device_record_unregister_binary_0004df98)();
  return;
}



/* ===== sdp_uuid16_to_uuid128 @ 00014a9c size=12 ===== */

void sdp_uuid16_to_uuid128(void)

{
  (*(code *)PTR_sdp_uuid16_to_uuid128_0004df9c)();
  return;
}



/* ===== <EXTERNAL>::strlen @ 00014aa8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0004dfa0)(__s);
  return sVar1;
}



/* ===== bachk @ 00014ab4 size=12 ===== */

void bachk(void)

{
  (*(code *)PTR_bachk_0004dfa4)();
  return;
}



/* ===== sdp_set_seq_len @ 00014ac0 size=12 ===== */

void sdp_set_seq_len(void)

{
  (*(code *)PTR_sdp_set_seq_len_0004dfa8)();
  return;
}



/* ===== sdp_gen_tid @ 00014acc size=12 ===== */

void sdp_gen_tid(void)

{
  (*(code *)PTR_sdp_gen_tid_0004dfac)();
  return;
}



/* ===== sdp_uuid_extract @ 00014ad8 size=12 ===== */

void sdp_uuid_extract(void)

{
  (*(code *)PTR_sdp_uuid_extract_0004dfb0)();
  return;
}



/* ===== sdp_extract_pdu @ 00014ae4 size=12 ===== */

void sdp_extract_pdu(void)

{
  (*(code *)PTR_sdp_extract_pdu_0004dfb4)();
  return;
}



/* ===== sdp_seq_alloc @ 00014af0 size=12 ===== */

void sdp_seq_alloc(void)

{
  (*(code *)PTR_sdp_seq_alloc_0004dfb8)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00014afc size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0004dfbc)();
  return;
}



/* ===== <EXTERNAL>::close @ 00014b08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0004dfc0)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::vfprintf @ 00014b14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vfprintf_0004dfc4)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00014b20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0004dfc8)(__ptr);
  return;
}



/* ===== sdp_attr_add_new @ 00014b2c size=12 ===== */

void sdp_attr_add_new(void)

{
  (*(code *)PTR_sdp_attr_add_new_0004dfcc)();
  return;
}



/* ===== entry @ 00014b38 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_00014b84 + 0x14b50 == DAT_00014b80 + 0x14b48) {
    return;
  }
  pcVar1 = *(code **)(DAT_00014b88 + 0x14b58 + DAT_00014b8c);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 00014bf4 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00014c68 + 0x14c10;
  if (*(char *)(DAT_00014c64 + 0x14c04) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_00014c6c) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_00014c70 + 0x14c30));
  }
  entry();
  if (*(int *)(iVar1 + DAT_00014c74) != 0) {
    __deregister_frame_info(DAT_00014c78 + 0x14c50);
  }
  *(undefined1 *)(DAT_00014c7c + 0x14c60) = 1;
  return;
}



/* ===== _INIT_0 @ 00014c80 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00014cb8 + 0x14c90 + DAT_00014cbc) != 0) {
    __register_frame_info(DAT_00014cc4 + 0x14cb0,DAT_00014cc0 + 0x14cac);
  }
  if (((DAT_00014be8 + 0x14ba8) - (DAT_00014be4 + 0x14ba0) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00014bec + 0x14bb0 + DAT_00014bf0);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== baswap @ 00014cc8 size=28 ===== */

void baswap(int param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar2 = param_2 + 6;
  puVar1 = (undefined1 *)(param_1 + -1);
  do {
    puVar2 = puVar2 + -1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
  } while (puVar2 != param_2);
  return;
}



/* ===== ba2str @ 00014ce4 size=76 ===== */

undefined4 ba2str(byte *param_1,char *param_2)

{
  sprintf(param_2,(char *)(DAT_00014d30 + 0x14d08),(uint)param_1[5],(uint)param_1[4],
          (uint)param_1[3],(uint)param_1[2],(uint)param_1[1],(uint)*param_1);
  return 0x11;
}



/* ===== ba2strlc @ 00014d34 size=76 ===== */

undefined4 ba2strlc(byte *param_1,char *param_2)

{
  sprintf(param_2,(char *)(DAT_00014d80 + 0x14d58),(uint)param_1[5],(uint)param_1[4],
          (uint)param_1[3],(uint)param_1[2],(uint)param_1[1],(uint)*param_1);
  return 0x11;
}



/* ===== ba2oui @ 00014d84 size=52 ===== */

undefined4 ba2oui(int param_1,char *param_2,undefined4 param_3)

{
  sprintf(param_2,(char *)(DAT_00014db8 + 0x14da4),(uint)*(byte *)(param_1 + 5),
          (uint)*(byte *)(param_1 + 4),(uint)*(byte *)(param_1 + 3),param_2,param_3);
  return 8;
}



/* ===== bachk @ 00014dbc size=132 ===== */

undefined4 bachk(byte *param_1)

{
  byte *pbVar1;
  size_t sVar2;
  int iVar3;
  
  iVar3 = DAT_00014e40 + 0x14dd0;
  if ((param_1 != (byte *)0x0) && (sVar2 = strlen((char *)param_1), sVar2 == 0x11)) {
    iVar3 = **(int **)(iVar3 + DAT_00014e44);
    do {
      if (*param_1 == 0) {
        return 0;
      }
      if ((*(ushort *)(iVar3 + (uint)*param_1 * 2) & 0x10) == 0) {
        return 0xffffffff;
      }
      if ((*(ushort *)(iVar3 + (uint)param_1[1] * 2) & 0x10) == 0) {
        return 0xffffffff;
      }
      pbVar1 = param_1 + 2;
      if (*pbVar1 == 0) {
        return 0;
      }
      param_1 = param_1 + 3;
    } while (*pbVar1 == 0x3a);
  }
  return 0xffffffff;
}



/* ===== str2ba @ 00014e48 size=92 ===== */

undefined4 str2ba(char *param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  char *__nptr;
  char *pcVar4;
  
  iVar1 = bachk();
  if (iVar1 < 0) {
    *param_2 = 0;
    *(undefined2 *)(param_2 + 1) = 0;
    return 0xffffffff;
  }
  puVar3 = (undefined1 *)((int)param_2 + 5);
  __nptr = param_1;
  do {
    pcVar4 = __nptr + 3;
    lVar2 = strtol(__nptr,(char **)0x0,0x10);
    *puVar3 = (char)lVar2;
    puVar3 = puVar3 + -1;
    __nptr = pcVar4;
  } while (param_1 + 0x12 != pcVar4);
  return 0;
}



/* ===== baprintf @ 00014ea4 size=84 ===== */

void baprintf(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar2 = *(int **)(DAT_00014ef8 + 0x14eb8 + DAT_00014efc);
  iVar1 = *piVar2;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  vprintf(param_1,&uStack_c);
  if (iVar1 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== bafprintf @ 00014f00 size=84 ===== */

void bafprintf(FILE *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar2 = *(int **)(DAT_00014f54 + 0x14f14 + DAT_00014f58);
  iVar1 = *piVar2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  vfprintf(param_1,param_2,&uStack_8);
  if (iVar1 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== basprintf @ 00014f5c size=88 ===== */

void basprintf(char *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar2 = *(int **)(DAT_00014fb4 + 0x14f74 + DAT_00014fb8);
  iVar1 = *piVar2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  vsnprintf(param_1,0x7fffffff,param_2,&uStack_8);
  if (iVar1 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== basnprintf @ 00014fbc size=84 ===== */

void basnprintf(char *param_1,size_t param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack_4;
  
  piVar2 = *(int **)(DAT_00015010 + 0x14fd0 + DAT_00015014);
  iVar1 = *piVar2;
  uStack_4 = param_4;
  vsnprintf(param_1,param_2,param_3,&uStack_4);
  if (iVar1 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== bt_malloc @ 00015018 size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * bt_malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0004de7c)(__size);
  return pvVar1;
}



/* ===== batostr @ 0001501c size=92 ===== */

char * batostr(byte *param_1)

{
  char *__s;
  
  __s = bt_malloc(0x12);
  if (__s != (char *)0x0) {
    sprintf(__s,(char *)(DAT_00015078 + 0x1505c),(uint)*param_1,(uint)param_1[1],(uint)param_1[2],
            (uint)param_1[3],(uint)param_1[4],(uint)param_1[5]);
  }
  return __s;
}



/* ===== strtoba @ 0001507c size=112 ===== */

void strtoba(undefined4 param_1)

{
  void *pvVar1;
  int *piVar2;
  undefined1 auStack_24 [8];
  int local_1c;
  
  piVar2 = *(int **)(DAT_000150ec + 0x1508c + DAT_000150f0);
  local_1c = *piVar2;
  pvVar1 = bt_malloc(6);
  if (pvVar1 != (void *)0x0) {
    str2ba(param_1,auStack_24);
    baswap(pvVar1,auStack_24);
  }
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pvVar1);
  }
  return;
}



/* ===== bt_malloc0 @ 000150f4 size=20 ===== */

void bt_malloc0(undefined4 param_1)

{
  (*(code *)PTR_calloc_0004deac)(param_1,1);
  return;
}



/* ===== bt_free @ 000150fc size=4 ===== */

void bt_free(void)

{
  (*(code *)PTR_free_0004dfc8)();
  return;
}



/* ===== bt_error @ 00015100 size=32 ===== */

int bt_error(uint param_1)

{
  if (param_1 < 0x35) {
    return (int)*(char *)(DAT_00015120 + 0x15114 + param_1);
  }
  return 0x26;
}



/* ===== bt_compidtostr @ 00015124 size=56284 ===== */

/* WARNING: Control flow encountered bad instruction data */

void bt_compidtostr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ===== FUN_000257a8 @ 000257a8 size=108 ===== */

char * FUN_000257a8(int *param_1,uint param_2)

{
  uint *puVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  char *__s;
  char *__format;
  
  pcVar2 = malloc(0x78);
  if (pcVar2 != (char *)0x0) {
    __format = (char *)(DAT_00025814 + 0x257dc);
    *pcVar2 = '\0';
    __s = pcVar2;
    while (piVar4 = param_1 + 2, *param_1 != 0) {
      puVar1 = (uint *)(param_1 + 1);
      param_1 = piVar4;
      if ((param_2 & *puVar1) != 0) {
        iVar3 = sprintf(__s,__format);
        __s = __s + iVar3;
      }
    }
  }
  return pcVar2;
}



/* ===== FUN_00025874 @ 00025874 size=208 ===== */

void FUN_00025874(char *param_1,char *param_2,uint *param_3)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char *__ptr;
  char *__s2;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  char *local_30;
  int local_2c;
  uint *puStack_28;
  
  uVar5 = 0;
  piVar6 = *(int **)(DAT_00025944 + 0x25888 + DAT_00025948);
  local_2c = *piVar6;
  local_30 = param_1;
  puStack_28 = param_3;
  if ((param_2 != (char *)0x0) &&
     (local_30 = param_1, __ptr = strdup(param_2), iVar2 = DAT_0002594c, local_30 = __ptr,
     __ptr != (char *)0x0)) {
    *param_3 = 0;
    while (__s2 = strsep(&local_30,(char *)(iVar2 + 0x258e0)), pcVar3 = param_1, __s2 != (char *)0x0
          ) {
      while( true ) {
        pcVar1 = pcVar3;
        if (*(char **)pcVar1 == (char *)0x0) break;
        iVar4 = strcasecmp(*(char **)pcVar1,__s2);
        pcVar3 = pcVar1 + 8;
        if (iVar4 == 0) {
          uVar5 = 1;
          *param_3 = *param_3 | *(uint *)(pcVar1 + 4);
        }
      }
    }
    free(__ptr);
  }
  if (local_2c == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}



/* ===== FUN_00025950 @ 00025950 size=20 ===== */

void FUN_00025950(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  return;
}



/* ===== hci_bustostr @ 00025b6c size=200 ===== */

int hci_bustostr(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return (int)&DAT_00025c34 + DAT_00025c60;
  case 1:
    return DAT_00025c34 + 0x25bb0;
  case 2:
    return DAT_00025c38 + 0x25bbc;
  case 3:
    return DAT_00025c3c + 0x25bc8;
  case 4:
    return DAT_00025c40 + 0x25bd4;
  case 5:
    return DAT_00025c44 + 0x25be0;
  case 6:
    return DAT_00025c48 + 0x25bec;
  case 7:
    return DAT_00025c4c + 0x25bf8;
  case 8:
    return DAT_00025c50 + 0x25c04;
  case 9:
    return DAT_00025c54 + 0x25c10;
  case 10:
    return DAT_00025c58 + 0x25c1c;
  default:
    return DAT_00025c5c + 0x25c28;
  }
}



/* ===== hci_dtypetostr @ 00025c64 size=20 ===== */

void hci_dtypetostr(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_hci_bustostr_0004de90)(param_1 & 0xf);
  return;
}



/* ===== hci_typetostr @ 00025c6c size=52 ===== */

int hci_typetostr(int param_1)

{
  if (param_1 == 0) {
    return DAT_00025ca4 + 0x25c94;
  }
  if (param_1 != 1) {
    return DAT_00025ca0 + 0x25c88;
  }
  return (int)&DAT_00025ca0 + DAT_00025ca8;
}



/* ===== hci_dflagstostr @ 00025cac size=164 ===== */

char * hci_dflagstostr(uint param_1)

{
  char *__dest;
  int iVar1;
  uint uVar2;
  int *piVar3;
  char *__s;
  char *__format;
  uint local_1c;
  
  local_1c = param_1;
  __dest = bt_malloc(0x32);
  if (__dest != (char *)0x0) {
    *__dest = '\0';
    __s = __dest;
    if ((local_1c & 1) == 0) {
      strcpy(__dest,(char *)(DAT_00025d50 + 0x25cec));
      __s = __dest + 5;
    }
    __format = (char *)(DAT_00025d58 + 0x25d04);
    for (piVar3 = (int *)(DAT_00025d54 + 0x25d00); *piVar3 != 0; piVar3 = piVar3 + 2) {
      uVar2 = (&local_1c)[piVar3[1] >> 5] & 1 << (piVar3[1] & 0x1fU);
      if (uVar2 != 0) {
        iVar1 = sprintf(__s,__format,*piVar3,uVar2,param_1);
        __s = __s + iVar1;
      }
    }
  }
  return __dest;
}



/* ===== hci_ptypetostr @ 00025d5c size=20 ===== */

void hci_ptypetostr(undefined4 param_1)

{
  FUN_000257a8(DAT_00025d70 + 0x25dbc,param_1);
  return;
}



/* ===== hci_strtoptype @ 00025d74 size=24 ===== */

void hci_strtoptype(undefined4 param_1,undefined4 param_2)

{
  FUN_00025874((int)&DAT_00025dd8 + DAT_00025d8c,param_1,param_2);
  return;
}



/* ===== hci_scoptypetostr @ 00025d90 size=20 ===== */

void hci_scoptypetostr(undefined4 param_1)

{
  FUN_000257a8(DAT_00025da4 + 0x25e70,param_1);
  return;
}



/* ===== hci_strtoscoptype @ 00025da8 size=24 ===== */

void hci_strtoscoptype(undefined4 param_1,undefined4 param_2)

{
  FUN_00025874(DAT_00025dc0 + 0x25e8c,param_1,param_2);
  return;
}



/* ===== hci_lptostr @ 00025dc4 size=20 ===== */

void hci_lptostr(undefined4 param_1)

{
  FUN_000257a8(DAT_00025dd8 + 0x25efc,param_1);
  return;
}



/* ===== hci_strtolp @ 00025ddc size=24 ===== */

void hci_strtolp(undefined4 param_1,undefined4 param_2)

{
  FUN_00025874(DAT_00025df4 + 0x25f18,param_1,param_2);
  return;
}



/* ===== hci_lmtostr @ 00025df8 size=124 ===== */

char * hci_lmtostr(uint param_1)

{
  char *__dest;
  char *__src;
  
  __dest = bt_malloc(0x32);
  if (__dest != (char *)0x0) {
    *__dest = '\0';
    if ((param_1 & 1) == 0) {
      strcpy(__dest,(char *)(DAT_00025e74 + 0x25e2c));
    }
    __src = (char *)FUN_000257a8(DAT_00025e78 + 0x25f94,param_1);
    if (__src == (char *)0x0) {
      bt_free(__dest);
      __dest = (char *)0x0;
    }
    else {
      strcat(__dest,__src);
      free(__src);
    }
  }
  return __dest;
}



/* ===== hci_strtolm @ 00025e7c size=84 ===== */

undefined4 hci_strtolm(char *param_1,uint *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  
  uVar1 = FUN_00025874(DAT_00025ed0 + 0x25ff4,param_1,param_2);
  pcVar2 = strcasestr(param_1,(char *)(DAT_00025ed4 + 0x25eb4));
  if (pcVar2 != (char *)0x0) {
    uVar1 = 1;
    *param_2 = *param_2 | 1;
  }
  return uVar1;
}



/* ===== hci_cmdtostr @ 00025ed8 size=20 ===== */

char * hci_cmdtostr(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  char *__dest;
  int iVar3;
  char *pcVar4;
  
  iVar3 = DAT_00025eec;
  __dest = malloc(0x32);
  pcVar4 = (char *)0x0;
  if (__dest != (char *)0x0) {
    iVar3 = (int)&DAT_00026090 + iVar3;
    *__dest = '\0';
    do {
      puVar1 = (undefined4 *)(iVar3 + -8);
      if ((char *)*puVar1 == (char *)0x0) {
        return __dest;
      }
      piVar2 = (int *)(iVar3 + -4);
      iVar3 = iVar3 + 8;
    } while (*piVar2 != param_1);
    pcVar4 = strcpy(__dest,(char *)*puVar1);
  }
  return pcVar4;
}



/* ===== hci_commandstostr @ 00025ef0 size=368 ===== */

char * hci_commandstostr(int param_1,char *param_2,int param_3)

{
  char *__s;
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  int iVar4;
  char *__s_00;
  size_t sVar5;
  char *__s_01;
  undefined4 *puVar6;
  char *__s_02;
  char *__format;
  char *__format_00;
  
  sVar5 = 10;
  for (puVar6 = (undefined4 *)(DAT_00026060 + 0x260b0); (char *)*puVar6 != (char *)0x0;
      puVar6 = puVar6 + 2) {
    if (((int)(uint)*(byte *)(param_1 + ((uint)puVar6[1] >> 3)) >> (puVar6[1] & 7) & 1U) != 0) {
      sVar2 = strlen((char *)*puVar6);
      sVar3 = 0;
      if (param_2 != (char *)0x0) {
        sVar3 = strlen(param_2);
      }
      sVar5 = sVar5 + 3 + sVar2 + sVar3;
    }
  }
  __s = bt_malloc(sVar5);
  if (__s != (char *)0x0) {
    *__s = '\0';
    __s_01 = __s;
    if (param_2 != (char *)0x0) {
      iVar1 = sprintf(__s,(char *)(DAT_00026064 + 0x25f54),param_2);
      __s_01 = __s + iVar1;
    }
    if (param_2 == (char *)0x0) {
      param_2 = (char *)(DAT_00026068 + 0x25f78);
    }
    __format = (char *)(DAT_00026070 + 0x25f84);
    __format_00 = (char *)(DAT_00026074 + 0x25f8c);
    __s_02 = __s_01;
    for (iVar1 = DAT_0002606c + 0x26124; __s_00 = *(char **)(iVar1 + -8), __s_00 != (char *)0x0;
        iVar1 = iVar1 + 8) {
      if (((int)(uint)*(byte *)(param_1 + (*(uint *)(iVar1 + -4) >> 3)) >>
           (*(uint *)(iVar1 + -4) & 7) & 1U) != 0) {
        sVar5 = strlen(__s_02);
        sVar3 = strlen(__s_00);
        if (param_3 - 3U < sVar5 + sVar3) {
          iVar4 = sprintf(__s_01,__format_00,param_2);
          __s_01 = __s_01 + iVar4;
          __s_02 = __s_01;
        }
        iVar4 = sprintf(__s_01,__format,*(undefined4 *)(iVar1 + -8));
        __s_01 = __s_01 + iVar4;
      }
    }
  }
  return __s;
}



/* ===== hci_vertostr @ 00026078 size=116 ===== */

char * hci_vertostr(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  char *__dest;
  int iVar3;
  char *pcVar4;
  
  iVar3 = DAT_00026090;
  __dest = malloc(0x32);
  pcVar4 = (char *)0x0;
  if (__dest != (char *)0x0) {
    iVar3 = iVar3 + 0x26978;
    *__dest = '\0';
    do {
      puVar1 = (undefined4 *)(iVar3 + -8);
      if ((char *)*puVar1 == (char *)0x0) {
        return __dest;
      }
      piVar2 = (int *)(iVar3 + -4);
      iVar3 = iVar3 + 8;
    } while (*piVar2 != param_1);
    pcVar4 = strcpy(__dest,(char *)*puVar1);
  }
  return pcVar4;
}



/* ===== hci_strtover @ 00026094 size=228 ===== */

void hci_strtover(char *param_1,undefined4 *param_2)

{
  char *__ptr;
  char *__s2;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *__delim;
  char *local_30;
  int local_2c;
  
  if (param_1 == (char *)0x0) {
    return;
  }
  puVar2 = (undefined4 *)(DAT_000260b4 + 0x26994);
  piVar3 = *(int **)(DAT_00025a28 + 0x25978 + DAT_00025a2c);
  uVar5 = 0;
  __delim = (char *)(DAT_00025a30 + 0x25998);
  local_2c = *piVar3;
  __ptr = strdup(param_1);
  local_30 = __ptr;
  do {
    __s2 = strsep(&local_30,__delim);
    puVar4 = puVar2;
    if (__s2 == (char *)0x0) {
      free(__ptr);
      if (local_2c == *piVar3) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar5);
    }
    for (; (char *)*puVar4 != (char *)0x0; puVar4 = puVar4 + 2) {
      iVar1 = strcasecmp((char *)*puVar4,__s2);
      if (iVar1 == 0) {
        uVar5 = 1;
        *param_2 = puVar4[1];
        break;
      }
    }
  } while( true );
}



/* ===== lmp_vertostr @ 000260b8 size=4 ===== */

char * lmp_vertostr(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  char *__dest;
  int iVar3;
  char *pcVar4;
  
  iVar3 = DAT_00026090;
  __dest = malloc(0x32);
  pcVar4 = (char *)0x0;
  if (__dest != (char *)0x0) {
    iVar3 = iVar3 + 0x26978;
    *__dest = '\0';
    do {
      puVar1 = (undefined4 *)(iVar3 + -8);
      if ((char *)*puVar1 == (char *)0x0) {
        return __dest;
      }
      piVar2 = (int *)(iVar3 + -4);
      iVar3 = iVar3 + 8;
    } while (*piVar2 != param_1);
    pcVar4 = strcpy(__dest,(char *)*puVar1);
  }
  return pcVar4;
}



/* ===== lmp_strtover @ 000260bc size=4 ===== */

void lmp_strtover(char *param_1,undefined4 *param_2)

{
  char *__ptr;
  char *__s2;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *__delim;
  char *pcStack_30;
  int iStack_2c;
  
  if (param_1 == (char *)0x0) {
    return;
  }
  puVar2 = (undefined4 *)(DAT_000260b4 + 0x26994);
  piVar3 = *(int **)(DAT_00025a28 + 0x25978 + DAT_00025a2c);
  uVar5 = 0;
  __delim = (char *)(DAT_00025a30 + 0x25998);
  iStack_2c = *piVar3;
  __ptr = strdup(param_1);
  pcStack_30 = __ptr;
  do {
    __s2 = strsep(&pcStack_30,__delim);
    puVar4 = puVar2;
    if (__s2 == (char *)0x0) {
      free(__ptr);
      if (iStack_2c == *piVar3) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar5);
    }
    for (; (char *)*puVar4 != (char *)0x0; puVar4 = puVar4 + 2) {
      iVar1 = strcasecmp((char *)*puVar4,__s2);
      if (iVar1 == 0) {
        uVar5 = 1;
        *param_2 = puVar4[1];
        break;
      }
    }
  } while( true );
}



/* ===== pal_vertostr @ 000260c0 size=20 ===== */

char * pal_vertostr(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  char *__dest;
  int iVar3;
  char *pcVar4;
  
  iVar3 = DAT_000260d4;
  __dest = malloc(0x32);
  pcVar4 = (char *)0x0;
  if (__dest != (char *)0x0) {
    iVar3 = iVar3 + 0x26a28;
    *__dest = '\0';
    do {
      puVar1 = (undefined4 *)(iVar3 + -8);
      if ((char *)*puVar1 == (char *)0x0) {
        return __dest;
      }
      piVar2 = (int *)(iVar3 + -4);
      iVar3 = iVar3 + 8;
    } while (*piVar2 != param_1);
    pcVar4 = strcpy(__dest,(char *)*puVar1);
  }
  return pcVar4;
}



/* ===== pal_strtover @ 000260d8 size=28 ===== */

void pal_strtover(char *param_1,undefined4 *param_2)

{
  char *__ptr;
  char *__s2;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *__delim;
  char *pcStack_30;
  int iStack_2c;
  
  if (param_1 == (char *)0x0) {
    return;
  }
  puVar2 = (undefined4 *)(DAT_000260f4 + 0x26a40);
  piVar3 = *(int **)(DAT_00025a28 + 0x25978 + DAT_00025a2c);
  uVar5 = 0;
  __delim = (char *)(DAT_00025a30 + 0x25998);
  iStack_2c = *piVar3;
  __ptr = strdup(param_1);
  pcStack_30 = __ptr;
  do {
    __s2 = strsep(&pcStack_30,__delim);
    puVar4 = puVar2;
    if (__s2 == (char *)0x0) {
      free(__ptr);
      if (iStack_2c == *piVar3) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar5);
    }
    for (; (char *)*puVar4 != (char *)0x0; puVar4 = puVar4 + 2) {
      iVar1 = strcasecmp((char *)*puVar4,__s2);
      if (iVar1 == 0) {
        uVar5 = 1;
        *param_2 = puVar4[1];
        break;
      }
    }
  } while( true );
}



/* ===== lmp_featurestostr @ 000260f8 size=436 ===== */

char * lmp_featurestostr(byte *param_1,char *param_2,int param_3)

{
  char *__s;
  size_t sVar1;
  size_t sVar2;
  int iVar3;
  char *__s_00;
  int iVar4;
  char *__s_01;
  size_t sVar5;
  int iVar6;
  char *__s_02;
  byte *pbVar7;
  char *__format;
  int iVar8;
  char *__format_00;
  
  iVar6 = DAT_000262ac + 0x26a80;
  iVar4 = DAT_000262ac + 0x26cc0;
  sVar5 = 10;
  iVar8 = iVar6;
  iVar3 = iVar6;
  pbVar7 = param_1;
  do {
    for (; *(char **)(iVar8 + -8) != (char *)0x0; iVar8 = iVar8 + 8) {
      if (((uint)*pbVar7 & *(uint *)(iVar8 + -4)) != 0) {
        sVar1 = strlen(*(char **)(iVar8 + -8));
        sVar2 = 0;
        if (param_2 != (char *)0x0) {
          sVar2 = strlen(param_2);
        }
        sVar5 = sVar5 + 1 + sVar1 + sVar2;
      }
    }
    iVar8 = iVar3 + 0x48;
    pbVar7 = pbVar7 + 1;
    iVar3 = iVar8;
  } while (iVar8 != iVar4);
  __s = bt_malloc(sVar5);
  if (__s != (char *)0x0) {
    *__s = '\0';
    __s_01 = __s;
    if (param_2 != (char *)0x0) {
      iVar8 = sprintf(__s,(char *)(DAT_000262b0 + 0x2618c),param_2);
      __s_01 = __s + iVar8;
    }
    pbVar7 = param_1 + 8;
    if (param_2 == (char *)0x0) {
      param_2 = (char *)(DAT_000262b4 + 0x261a8);
    }
    __format = (char *)(DAT_000262b8 + 0x261bc);
    __format_00 = (char *)(DAT_000262bc + 0x261c0);
    __s_02 = __s_01;
    iVar8 = iVar6;
    do {
      for (; __s_00 = *(char **)(iVar6 + -8), __s_00 != (char *)0x0; iVar6 = iVar6 + 8) {
        if (((uint)*param_1 & *(uint *)(iVar6 + -4)) != 0) {
          sVar5 = strlen(__s_02);
          sVar2 = strlen(__s_00);
          if (param_3 - 1U < sVar5 + sVar2) {
            iVar3 = sprintf(__s_01,__format_00,param_2);
            __s_01 = __s_01 + iVar3;
            __s_02 = __s_01;
          }
          iVar3 = sprintf(__s_01,__format,*(undefined4 *)(iVar6 + -8));
          __s_01 = __s_01 + iVar3;
        }
      }
      param_1 = param_1 + 1;
      iVar6 = iVar8 + 0x48;
      iVar8 = iVar6;
    } while (param_1 != pbVar7);
  }
  return __s;
}



/* ===== hci_for_each_dev @ 000262c0 size=296 ===== */

uint hci_for_each_dev(uint param_1,code *param_2,undefined4 param_3)

{
  ulong __request;
  int __fd;
  ushort *__ptr;
  int *piVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  
  uVar3 = param_1;
  pcVar6 = param_2;
  uVar7 = param_3;
  __fd = socket(0x1f,DAT_000263e8,1);
  if (__fd < 0) {
    uVar3 = 0xffffffff;
  }
  else {
    __ptr = malloc(0x84);
    piVar1 = __errno_location();
    if (__ptr == (ushort *)0x0) {
      uVar3 = 0xffffffff;
      iVar5 = *piVar1;
    }
    else {
      memset(__ptr + 1,0,0x82);
      __request = DAT_000263ec;
      *__ptr = 0x10;
      iVar5 = ioctl(__fd,__request,__ptr,0x10,uVar3,pcVar6,uVar7);
      if (iVar5 < 0) {
        iVar5 = *piVar1;
      }
      else {
        puVar4 = __ptr + 2;
        uVar3 = 1 << (param_1 & 0x1f);
        for (iVar5 = 0; iVar5 < (int)(uint)*__ptr; iVar5 = iVar5 + 1) {
          if (((uVar3 & *(uint *)(puVar4 + (((int)param_1 >> 5) + 1) * 2)) != 0) &&
             ((param_2 == (code *)0x0 || (iVar2 = (*param_2)(__fd,*puVar4,param_3), iVar2 != 0)))) {
            uVar3 = (uint)*puVar4;
            iVar5 = 0;
            goto LAB_000263a0;
          }
          puVar4 = puVar4 + 4;
        }
        iVar5 = 0x13;
      }
      uVar3 = 0xffffffff;
LAB_000263a0:
      free(__ptr);
    }
    close(__fd);
    *piVar1 = iVar5;
  }
  return uVar3;
}



/* ===== hci_get_route @ 000263f0 size=144 ===== */

void hci_get_route(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined2 local_18;
  int local_14;
  
  piVar3 = *(int **)(DAT_00026480 + 0x26400 + (int)DAT_00026484);
  puVar1 = DAT_00026484;
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = local_24;
  }
  iVar2 = *piVar3;
  if (param_1 == (undefined4 *)0x0) {
    *(undefined2 *)(puVar1 + 1) = 0;
    local_24[0] = 0;
  }
  local_14 = iVar2;
  iVar2 = hci_for_each_dev(0,DAT_00026488 + 0x26424);
  if (iVar2 < 0) {
    if (param_1 == (undefined4 *)0x0) {
      param_1 = &local_1c;
      local_1c = 0;
      local_18 = 0;
    }
    hci_for_each_dev(0,DAT_0002648c + 0x2645c,param_1);
  }
  if (local_14 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== hci_devinfo @ 00026490 size=112 ===== */

int hci_devinfo(undefined2 param_1,undefined2 *param_2)

{
  int __fd;
  int iVar1;
  int *piVar2;
  int iVar3;
  
  __fd = socket(0x1f,DAT_00026500,1);
  iVar1 = __fd;
  if (-1 < __fd) {
    memset(param_2 + 1,0,0x5a);
    *param_2 = param_1;
    iVar1 = ioctl(__fd,DAT_00026504,param_2);
    piVar2 = __errno_location();
    iVar3 = *piVar2;
    close(__fd);
    *piVar2 = iVar3;
  }
  return iVar1;
}



/* ===== hci_devba @ 00026508 size=156 ===== */

void hci_devba(undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 extraout_r2;
  int *piVar5;
  undefined1 auStack_70 [10];
  undefined1 auStack_66 [6];
  uint local_60;
  int local_14;
  
  piVar5 = *(int **)(DAT_000265a4 + 0x26518 + DAT_000265a8);
  local_14 = *piVar5;
  pvVar1 = memset(auStack_70,0,0x5c);
  iVar2 = hci_devinfo(param_1,pvVar1);
  if (iVar2 == 0) {
    if ((local_60 & 1) != 0) {
      FUN_00025950(param_2,auStack_66);
      uVar4 = extraout_r2;
      goto LAB_00026584;
    }
    piVar3 = __errno_location();
    *piVar3 = 100;
  }
  uVar4 = 0xffffffff;
LAB_00026584:
  if (local_14 != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}



/* ===== hci_devid @ 000265ac size=188 ===== */

void hci_devid(char *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int local_14;
  
  piVar5 = *(int **)(DAT_00026668 + 0x265c8 + DAT_0002666c);
  local_14 = *piVar5;
  uStack_1c = param_2;
  uStack_18 = param_3;
  iVar1 = strncmp(param_1,(char *)(DAT_00026670 + 0x265d8),3);
  if ((iVar1 == 0) && (sVar2 = strlen(param_1), 3 < sVar2)) {
    iVar1 = atoi(param_1 + 3);
    iVar3 = hci_devba(iVar1,&uStack_1c);
    if (iVar3 < 0) {
      iVar1 = -1;
    }
  }
  else {
    piVar4 = __errno_location();
    *piVar4 = 0x13;
    str2ba(param_1,&uStack_1c);
    iVar1 = hci_for_each_dev(0,DAT_00026674 + 0x26658,&uStack_1c);
  }
  if (local_14 != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1);
  }
  return;
}



/* ===== hci_inquiry @ 00026678 size=320 ===== */

uint hci_inquiry(int param_1,undefined1 param_2,int param_3,undefined2 *param_4,int *param_5,
                undefined2 param_6)

{
  byte bVar1;
  int *piVar2;
  uint __fd;
  undefined2 *__ptr;
  void *pvVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  undefined1 uVar7;
  
  if (param_3 < 1) {
    uVar7 = 0;
    param_3 = 0xff;
  }
  else {
    uVar7 = (undefined1)param_3;
  }
  if ((param_1 < 0) && (param_1 = hci_get_route(0), param_1 < 0)) {
    piVar2 = __errno_location();
    *piVar2 = 0x13;
    uVar5 = 0xffffffff;
  }
  else {
    __fd = socket(0x1f,DAT_000267b8,1);
    uVar5 = __fd;
    if (-1 < (int)__fd) {
      __ptr = malloc(param_3 * 0xe + 10);
      if (__ptr == (undefined2 *)0x0) {
        uVar5 = 0xffffffff;
      }
      else {
        *__ptr = (short)param_1;
        __ptr[1] = param_6;
        if (param_4 == (undefined2 *)0x0) {
          __ptr[2] = (short)DAT_000267bc;
          uVar4 = 0x9e;
        }
        else {
          uVar4 = *(undefined1 *)(param_4 + 1);
          __ptr[2] = *param_4;
        }
        *(undefined1 *)(__ptr + 4) = uVar7;
        *(undefined1 *)((int)__ptr + 7) = param_2;
        *(undefined1 *)(__ptr + 3) = uVar4;
        uVar5 = ioctl(__fd,DAT_000267c0,__ptr);
        if (-1 < (int)uVar5) {
          bVar1 = *(byte *)(__ptr + 4);
          if (*param_5 == 0) {
            pvVar3 = malloc((uint)bVar1 * 0xe);
            *param_5 = (int)pvVar3;
          }
          if ((void *)*param_5 == (void *)0x0) {
            uVar5 = 0xffffffff;
          }
          else {
            memcpy((void *)*param_5,__ptr + 5,(uint)bVar1 * 0xe);
            uVar5 = (uint)*(byte *)(__ptr + 4);
          }
        }
        free(__ptr);
      }
      piVar2 = __errno_location();
      iVar6 = *piVar2;
      close(__fd);
      *piVar2 = iVar6;
    }
  }
  return uVar5;
}



/* ===== hci_open_dev @ 000267c4 size=180 ===== */

void hci_open_dev(int param_1)

{
  int *piVar1;
  int iVar2;
  int __fd;
  int *piVar3;
  sockaddr local_24;
  
  piVar3 = *(int **)(DAT_00026878 + 0x267d4 + DAT_0002687c);
  local_24.sa_data._6_4_ = *piVar3;
  if (param_1 < 0) {
    piVar1 = __errno_location();
    *piVar1 = 0x13;
  }
  else {
    __fd = socket(0x1f,DAT_00026880,1);
    if (__fd < 0) goto LAB_000267fc;
    local_24.sa_data._0_2_ = SUB42(param_1,0);
    local_24.sa_data[2] = '\0';
    local_24.sa_data[3] = '\0';
    local_24.sa_family = 0x1f;
    iVar2 = bind(__fd,&local_24,6);
    if (-1 < iVar2) goto LAB_000267fc;
    piVar1 = __errno_location();
    iVar2 = *piVar1;
    close(__fd);
    *piVar1 = iVar2;
  }
  __fd = -1;
LAB_000267fc:
  if (local_24.sa_data._6_4_ != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__fd);
  }
  return;
}



/* ===== hci_close_dev @ 00026884 size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int hci_close_dev(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0004dfc0)(__fd);
  return iVar1;
}



/* ===== hci_send_cmd @ 00026888 size=192 ===== */

void hci_send_cmd(int param_1,short param_2,int param_3,int param_4,undefined4 param_5)

{
  ssize_t sVar1;
  undefined4 uVar2;
  int *piVar3;
  int __count;
  int *piVar4;
  undefined1 local_39;
  ushort local_38;
  undefined1 local_36;
  iovec local_34;
  ushort *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  
  __count = 3;
  piVar4 = *(int **)(DAT_00026948 + 0x268a8 + DAT_0002694c);
  local_38 = (ushort)((uint)(param_3 << 0x16) >> 0x16) | param_2 << 10;
  local_1c = *piVar4;
  local_34.iov_base = &local_39;
  local_2c = &local_38;
  local_39 = 1;
  local_36 = (undefined1)param_4;
  local_34.iov_len = 1;
  local_28 = 3;
  if (param_4 == 0) {
    __count = 2;
  }
  else {
    local_24 = param_5;
    local_20 = param_4;
  }
  do {
    sVar1 = writev(param_1,&local_34,__count);
    if (-1 < sVar1) {
      uVar2 = 0;
      goto LAB_0002692c;
    }
    piVar3 = __errno_location();
  } while (*piVar3 == 4 || *piVar3 == 0xb);
  uVar2 = 0xffffffff;
LAB_0002692c:
  if (local_1c == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



/* ===== hci_send_req @ 00026950 size=796 ===== */

void hci_send_req(int param_1,short *param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  ssize_t sVar3;
  byte *__src;
  uint uVar4;
  size_t __n;
  int *piVar5;
  ushort uVar6;
  int iVar7;
  bool bVar8;
  int local_16c;
  socklen_t local_15c;
  pollfd local_158;
  undefined4 local_150;
  uint local_14c [3];
  undefined1 auStack_140 [16];
  undefined1 uStack_130;
  byte local_12f;
  byte local_12d;
  undefined1 auStack_12c [2];
  byte abStack_12a [254];
  int local_2c;
  
  piVar5 = *(int **)(DAT_00026c6c + 0x26964 + DAT_00026c70);
  local_2c = *piVar5;
  local_15c = 0x10;
  uVar6 = param_2[1] & 0x3ffU | *param_2 << 10;
  iVar1 = getsockopt(param_1,0,2,auStack_140,&local_15c);
  if (-1 < iVar1) {
    local_150 = 0x10;
    local_14c[0] = 0xc000;
    local_14c[1] = 0x40000000;
    iVar1 = (int)(*(uint *)(param_2 + 2) << 0x1a) >> 0x1f;
    local_14c[-iVar1] = local_14c[-iVar1] | 1 << (*(uint *)(param_2 + 2) & 0x1f);
    local_14c[2] = (uint)uVar6;
    iVar1 = setsockopt(param_1,0,2,&local_150,0x10);
    if (-1 < iVar1) {
      iVar1 = hci_send_cmd(param_1,*param_2,param_2[1],(char)param_2[6],*(undefined4 *)(param_2 + 4)
                          );
      if (-1 < iVar1) {
        local_16c = 0xb;
LAB_00026c38:
        do {
          local_16c = local_16c + -1;
          if (local_16c == 0) {
LAB_00026aac:
            piVar2 = __errno_location();
            iVar1 = 0x6e;
LAB_00026b80:
            *piVar2 = iVar1;
            goto LAB_00026a44;
          }
          if (param_3 != 0) {
            local_158.events = 1;
            local_158.fd = param_1;
            while( true ) {
              iVar1 = poll(&local_158,1,param_3);
              if (-1 < iVar1) break;
              piVar2 = __errno_location();
              if (*piVar2 != 4 && *piVar2 != 0xb) goto LAB_00026a44;
            }
            if (iVar1 == 0) goto LAB_00026aac;
            param_3 = param_3 - 10 & ~((int)(param_3 - 10) >> 0x1f);
          }
          while (sVar3 = read(param_1,&uStack_130,0x104), sVar3 < 0) {
            piVar2 = __errno_location();
            if (*piVar2 != 4 && *piVar2 != 0xb) goto LAB_00026a44;
          }
          uVar4 = (uint)local_12f;
          if (uVar4 == 0xe) {
            if (auStack_12c == (undefined1  [2])uVar6) {
              __src = abStack_12a;
              __n = *(size_t *)(param_2 + 10);
              if ((int)(sVar3 - 6U) < (int)*(size_t *)(param_2 + 10)) {
                __n = sVar3 - 6U;
              }
              *(size_t *)(param_2 + 10) = __n;
              goto LAB_00026bac;
            }
            goto LAB_00026c38;
          }
          if (uVar4 < 0xf) {
            if (uVar4 != 7) goto LAB_00026b0c;
            if (*(int *)(param_2 + 2) != 7) goto LAB_00026c38;
            iVar1 = memcmp(auStack_12c,*(void **)(param_2 + 4),6);
            bVar8 = iVar1 == 0;
          }
          else {
            if (uVar4 == 0xf) {
              if (stack0xfffffed5 == uVar6) {
                if (*(int *)(param_2 + 2) == 0xf) break;
                if (local_12d != 0) {
                  piVar2 = __errno_location();
                  iVar1 = 5;
                  goto LAB_00026b80;
                }
              }
              goto LAB_00026c38;
            }
            if (uVar4 == 0x3e) {
              if ((uint)local_12d == *(uint *)(param_2 + 2)) {
                __src = auStack_12c;
                __n = *(size_t *)(param_2 + 10);
                if ((int)(sVar3 - 4U) < (int)*(size_t *)(param_2 + 10)) {
                  __n = sVar3 - 4U;
                }
                *(size_t *)(param_2 + 10) = __n;
                goto LAB_00026bac;
              }
              goto LAB_00026c38;
            }
LAB_00026b0c:
            bVar8 = uVar4 == *(uint *)(param_2 + 2);
          }
        } while (!bVar8);
        __src = &local_12d;
        __n = *(size_t *)(param_2 + 10);
        if ((int)(sVar3 - 3U) < (int)*(size_t *)(param_2 + 10)) {
          __n = sVar3 - 3U;
        }
        *(size_t *)(param_2 + 10) = __n;
LAB_00026bac:
        memcpy(*(void **)(param_2 + 8),__src,__n);
        iVar1 = setsockopt(param_1,0,2,auStack_140,0x10);
        iVar1 = iVar1 >> 0x1f;
        goto LAB_00026bd4;
      }
LAB_00026a44:
      piVar2 = __errno_location();
      iVar7 = *piVar2;
      iVar1 = setsockopt(param_1,0,2,auStack_140,0x10);
      if (iVar1 < 0) {
        iVar7 = *piVar2;
      }
      *piVar2 = iVar7;
    }
  }
  iVar1 = -1;
LAB_00026bd4:
  if (local_2c == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}



/* ===== hci_create_connection @ 00026c74 size=228 ===== */

void hci_create_connection
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
               undefined1 param_5,undefined2 *param_6,undefined4 param_7)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined5 *local_48;
  undefined4 local_44;
  uint *local_40;
  undefined4 local_3c;
  uint local_38 [3];
  undefined5 local_2c;
  undefined1 uStack_27;
  undefined2 uStack_26;
  undefined1 local_24;
  undefined1 uStack_23;
  undefined2 local_22;
  undefined1 local_20;
  int local_1c;
  
  piVar4 = *(int **)(DAT_00026d58 + 0x26c94 + DAT_00026d5c);
  local_1c = *piVar4;
  local_2c = 0;
  uStack_27 = 0;
  uStack_26 = 0;
  local_24 = 0;
  uStack_23 = 0;
  local_22 = 0;
  local_20 = 0;
  FUN_00025950(&local_2c);
  local_24 = 2;
  local_50 = DAT_00026d60;
  uStack_4c = 3;
  local_20 = param_5;
  local_44 = 0xd;
  local_40 = local_38;
  local_3c = 0xb;
  local_48 = &local_2c;
  local_22 = param_4;
  iVar1 = hci_send_req(param_1,&local_50,param_7);
  if (-1 < iVar1) {
    if ((local_38[0] & 0xff) == 0) {
      *param_6 = (short)(local_38[0] >> 8);
      uVar3 = 0;
      goto LAB_00026d3c;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00026d3c:
  if (local_1c == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== hci_disconnect @ 00026d64 size=160 ===== */

void hci_disconnect(undefined4 param_1,undefined2 param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 local_34;
  undefined1 local_32;
  char local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 *local_24;
  undefined4 local_20;
  char *local_1c;
  undefined4 local_18;
  int local_14;
  
  piVar4 = *(int **)(DAT_00026e04 + 0x26d78 + DAT_00026e08);
  local_14 = *piVar4;
  local_2c = DAT_00026e0c;
  local_24 = &local_34;
  local_20 = 3;
  local_1c = local_30;
  local_18 = 4;
  local_28 = 5;
  local_34 = param_2;
  local_32 = param_3;
  iVar1 = hci_send_req(param_1,&local_2c,param_4);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_30[0] == '\0') goto LAB_00026de8;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00026de8:
  if (local_14 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_le_add_white_list @ 00026e10 size=188 ===== */

void hci_le_add_white_list
               (undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char local_3d;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  undefined4 local_30;
  char *local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined2 uStack_23;
  undefined4 uStack_21;
  int local_1c;
  
  piVar4 = *(int **)(DAT_00026ecc + 0x26e30 + DAT_00026ed0);
  uStack_23 = 0;
  local_1c = *piVar4;
  uStack_21 = 0;
  local_24 = param_3;
  FUN_00025950(&uStack_23);
  local_38 = 0;
  local_3c = DAT_00026ed4;
  local_30 = 7;
  local_2c = &local_3d;
  local_28 = 1;
  local_34 = &local_24;
  iVar1 = hci_send_req(param_1,&local_3c,param_4);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_3d == '\0') goto LAB_00026eb0;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00026eb0:
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_le_rm_white_list @ 00026ed8 size=188 ===== */

void hci_le_rm_white_list
               (undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char local_3d;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  undefined4 local_30;
  char *local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined2 uStack_23;
  undefined4 uStack_21;
  int local_1c;
  
  piVar4 = *(int **)(DAT_00026f94 + 0x26ef8 + DAT_00026f98);
  uStack_23 = 0;
  local_1c = *piVar4;
  uStack_21 = 0;
  local_24 = param_3;
  FUN_00025950(&uStack_23);
  local_38 = 0;
  local_3c = DAT_00026f9c;
  local_30 = 7;
  local_2c = &local_3d;
  local_28 = 1;
  local_34 = &local_24;
  iVar1 = hci_send_req(param_1,&local_3c,param_4);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_3d == '\0') goto LAB_00026f78;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00026f78:
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_le_read_white_list_size @ 00026fa0 size=172 ===== */

void hci_le_read_white_list_size(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 *local_1c;
  undefined4 local_18;
  int local_14;
  
  local_1c = (undefined1 *)&local_30;
  piVar4 = *(int **)(DAT_0002704c + 0x26fb4 + DAT_00027050);
  local_14 = *piVar4;
  local_28 = 0;
  local_30 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_2c = DAT_00027054;
  local_18 = 2;
  iVar1 = hci_send_req(param_1,&local_2c);
  if (-1 < iVar1) {
    if ((char)local_30 == '\0') {
      if (param_2 != (undefined1 *)0x0) {
        *param_2 = local_30._1_1_;
      }
      uVar3 = 0;
      goto LAB_0002701c;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_0002701c:
  if (local_14 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_le_clear_white_list @ 00027058 size=144 ===== */

void hci_le_clear_white_list(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char local_25;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  char *local_14;
  undefined4 local_10;
  int local_c;
  
  piVar4 = *(int **)(DAT_000270e8 + 0x27068 + DAT_000270ec);
  local_c = *piVar4;
  local_20 = 0;
  local_24 = DAT_000270f0;
  local_14 = &local_25;
  uStack_1c = 0;
  uStack_18 = 0;
  local_10 = 1;
  iVar1 = hci_send_req(param_1,&local_24,param_2);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_25 == '\0') goto LAB_000270cc;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_000270cc:
  if (local_c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_le_add_resolving_list @ 000270f4 size=276 ===== */

void hci_le_add_resolving_list
               (undefined4 param_1,undefined4 param_2,byte param_3,undefined4 *param_4,
               undefined4 *param_5,undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  char local_5d;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 *local_54;
  undefined4 local_50;
  char *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 auStack_40 [3];
  undefined1 auStack_3d [5];
  undefined4 uStack_38;
  undefined4 local_34;
  undefined1 auStack_30 [3];
  undefined1 auStack_2d [5];
  uint uStack_28;
  undefined3 uStack_24;
  uint uStack_21;
  int local_1c;
  
  _auStack_40 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  auStack_3d._1_4_ = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piVar7 = *(int **)(DAT_00027208 + 0x27114 + DAT_0002720c);
  local_1c = *piVar7;
  local_34 = 0;
  auStack_2d._1_4_ = 0;
  uStack_28 = _auStack_40 & 0xffffff;
  uStack_24 = 0;
  local_44 = (uint)param_3;
  _auStack_30 = _auStack_40;
  uStack_21 = _auStack_40;
  FUN_00025950((int)&local_44 + 1);
  if (param_4 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(auStack_40 + 3);
    puVar6 = param_4;
    do {
      puVar5 = puVar6 + 1;
      *puVar4 = *puVar6;
      puVar4 = puVar4 + 1;
      puVar6 = puVar5;
    } while (puVar5 != param_4 + 4);
  }
  if (param_5 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(auStack_30 + 3);
    puVar6 = param_5;
    do {
      puVar5 = puVar6 + 1;
      *puVar4 = *puVar6;
      puVar4 = puVar4 + 1;
      puVar6 = puVar5;
    } while (puVar5 != param_5 + 4);
  }
  local_50 = 0x27;
  local_4c = &local_5d;
  local_5c = DAT_00027210;
  uStack_58 = 0;
  local_48 = 1;
  local_54 = &local_44;
  iVar1 = hci_send_req(param_1,&local_5c,param_6);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_5d == '\0') goto LAB_000271ec;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_000271ec:
  if (local_1c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_le_rm_resolving_list @ 00027214 size=188 ===== */

void hci_le_rm_resolving_list
               (undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char local_3d;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  undefined4 local_30;
  char *local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined2 uStack_23;
  undefined4 uStack_21;
  int local_1c;
  
  piVar4 = *(int **)(DAT_000272d0 + 0x27234 + DAT_000272d4);
  uStack_23 = 0;
  local_1c = *piVar4;
  uStack_21 = 0;
  local_24 = param_3;
  FUN_00025950(&uStack_23);
  local_38 = 0;
  local_3c = DAT_000272d8;
  local_30 = 7;
  local_2c = &local_3d;
  local_28 = 1;
  local_34 = &local_24;
  iVar1 = hci_send_req(param_1,&local_3c,param_4);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_3d == '\0') goto LAB_000272b4;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_000272b4:
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_le_clear_resolving_list @ 000272dc size=144 ===== */

void hci_le_clear_resolving_list(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char local_25;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  char *local_14;
  undefined4 local_10;
  int local_c;
  
  piVar4 = *(int **)(DAT_0002736c + 0x272ec + DAT_00027370);
  local_c = *piVar4;
  local_20 = 0;
  local_24 = DAT_00027374;
  local_14 = &local_25;
  uStack_1c = 0;
  uStack_18 = 0;
  local_10 = 1;
  iVar1 = hci_send_req(param_1,&local_24,param_2);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_25 == '\0') goto LAB_00027350;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00027350:
  if (local_c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_le_read_resolving_list_size @ 00027378 size=172 ===== */

void hci_le_read_resolving_list_size(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 *local_1c;
  undefined4 local_18;
  int local_14;
  
  local_1c = (undefined1 *)&local_30;
  piVar4 = *(int **)(DAT_00027424 + 0x2738c + DAT_00027428);
  local_14 = *piVar4;
  local_28 = 0;
  local_30 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_2c = DAT_0002742c;
  local_18 = 2;
  iVar1 = hci_send_req(param_1,&local_2c);
  if (-1 < iVar1) {
    if ((char)local_30 == '\0') {
      if (param_2 != (undefined1 *)0x0) {
        *param_2 = local_30._1_1_;
      }
      uVar3 = 0;
      goto LAB_000273f4;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_000273f4:
  if (local_14 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_le_set_address_resolution_enable @ 00027430 size=148 ===== */

void hci_le_set_address_resolution_enable(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 local_28 [3];
  char local_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  int local_c;
  
  local_1c = local_28;
  piVar4 = *(int **)(DAT_000274c4 + 0x27440 + DAT_000274c8);
  local_c = *piVar4;
  uStack_24 = DAT_000274cc;
  uStack_20 = 0;
  local_14 = &local_25;
  local_18 = 1;
  local_10 = 1;
  local_28[0] = param_2;
  iVar1 = hci_send_req(param_1,&uStack_24);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_25 == '\0') goto LAB_000274a8;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_000274a8:
  if (local_c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_read_local_name @ 000274d0 size=180 ===== */

void hci_read_local_name(undefined4 param_1,size_t param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  char *local_120;
  undefined4 local_11c;
  char local_118;
  char acStack_117 [247];
  char local_20;
  int local_1c;
  
  piVar4 = *(int **)(DAT_00027584 + 0x274f0 + DAT_00027588);
  local_1c = *piVar4;
  local_12c = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  local_130 = DAT_0002758c;
  local_120 = &local_118;
  local_11c = 0xf9;
  iVar1 = hci_send_req(param_1,&local_130,param_4);
  if (-1 < iVar1) {
    if (local_118 == '\0') {
      local_20 = local_118;
      strncpy(param_3,acStack_117,param_2);
      uVar3 = 0;
      goto LAB_00027568;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00027568:
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_write_local_name @ 00027590 size=160 ===== */

int hci_write_local_name(undefined4 param_1,char *param_2,undefined4 param_3)

{
  char *__dest;
  int iVar1;
  int *piVar2;
  undefined4 local_12c;
  undefined4 local_128;
  char *pcStack_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined1 auStack_114 [248];
  int local_1c;
  
  piVar2 = *(int **)(DAT_00027630 + 0x275a4 + DAT_00027634);
  local_1c = *piVar2;
  __dest = memset(auStack_114,0,0xf8);
  pcStack_124 = strncpy(__dest,param_2,0xf7);
  uStack_118 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_128 = 0;
  local_12c = DAT_00027638;
  local_11c = 0;
  local_120 = 0xf8;
  iVar1 = hci_send_req(param_1,&local_12c,param_3);
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 >> 0x1f;
}



/* ===== hci_read_remote_name_with_clock_offset @ 0002763c size=228 ===== */

void hci_read_remote_name_with_clock_offset
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
               size_t param_5,char *param_6,undefined4 param_7)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined2 *local_138;
  undefined4 local_134;
  char *local_130;
  undefined4 local_12c;
  undefined2 local_128;
  undefined4 uStack_126;
  undefined1 uStack_122;
  undefined1 uStack_121;
  undefined2 local_120;
  char local_11c [7];
  char acStack_115 [247];
  char local_1e;
  int local_1c;
  
  piVar4 = *(int **)(DAT_00027720 + 0x2765c + DAT_00027724);
  local_1c = *piVar4;
  local_128 = 0;
  uStack_126 = 0;
  uStack_122 = 0;
  uStack_121 = 0;
  local_120 = 0;
  FUN_00025950(&local_128);
  local_134 = 10;
  local_130 = local_11c;
  local_140 = DAT_00027728;
  uStack_13c = 7;
  local_12c = 0xff;
  local_138 = &local_128;
  local_120 = param_4;
  iVar1 = hci_send_req(param_1,&local_140,param_7);
  if (-1 < iVar1) {
    if (local_11c[0] == '\0') {
      local_1e = local_11c[0];
      strncpy(param_6,acStack_115,param_5);
      uVar3 = 0;
      goto LAB_00027704;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00027704:
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_read_remote_name @ 0002772c size=32 ===== */

void hci_read_remote_name
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  hci_read_remote_name_with_clock_offset(param_1,param_2,2,0,param_3,param_4,param_5,param_4);
  return;
}



/* ===== hci_read_remote_name_cancel @ 0002774c size=140 ===== */

int hci_read_remote_name_cancel(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 *puStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined2 local_18;
  int local_14;
  
  piVar2 = *(int **)(DAT_000277d8 + 0x27760 + DAT_000277dc);
  local_14 = *piVar2;
  local_1c = 0;
  local_18 = 0;
  FUN_00025950(&local_1c);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_30 = 0;
  local_24 = 0;
  local_34 = DAT_000277e0;
  local_28 = 6;
  puStack_2c = &local_1c;
  iVar1 = hci_send_req(param_1,&local_34);
  if (local_14 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 >> 0x1f;
}



/* ===== hci_read_remote_version @ 000277e4 size=192 ===== */

void hci_read_remote_version
               (undefined4 param_1,undefined2 param_2,undefined2 *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 local_38 [2];
  char local_34 [3];
  undefined1 local_31;
  undefined2 local_30;
  undefined2 local_2e;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined4 local_20;
  char *local_1c;
  undefined4 local_18;
  int local_14;
  
  local_24 = (undefined1 *)local_38;
  piVar4 = *(int **)(DAT_000278a4 + 0x27800 + DAT_000278a8);
  local_14 = *piVar4;
  local_2c = DAT_000278ac;
  local_28 = 0xc;
  local_20 = 2;
  local_1c = local_34;
  local_18 = 8;
  local_38[0] = param_2;
  iVar1 = hci_send_req(param_1,&local_2c,param_4);
  if (-1 < iVar1) {
    if (local_34[0] == '\0') {
      *param_3 = local_30;
      *(undefined1 *)(param_3 + 3) = local_31;
      param_3[4] = local_2e;
      uVar3 = 0;
      goto LAB_00027888;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00027888:
  if (local_14 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_read_remote_features @ 000278b0 size=192 ===== */

void hci_read_remote_features
               (undefined4 param_1,undefined2 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 local_3c [2];
  undefined4 local_38;
  undefined4 local_34;
  undefined2 *local_30;
  undefined4 local_2c;
  char *local_28;
  undefined4 local_24;
  char local_20 [3];
  undefined4 local_1d;
  undefined4 local_19;
  int local_14;
  
  piVar4 = *(int **)(DAT_00027970 + 0x278cc + DAT_00027974);
  local_30 = local_3c;
  local_14 = *piVar4;
  local_2c = 2;
  local_28 = local_20;
  local_38 = DAT_00027978;
  local_34 = 0xb;
  local_24 = 0xb;
  local_3c[0] = param_2;
  iVar1 = hci_send_req(param_1,&local_38,param_4);
  if (-1 < iVar1) {
    if (local_20[0] == '\0') {
      if (param_3 == (undefined4 *)0x0) {
        uVar3 = 0;
      }
      else {
        *param_3 = local_1d;
        param_3[1] = local_19;
        uVar3 = 0;
      }
      goto LAB_00027954;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00027954:
  if (local_14 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== hci_read_remote_ext_features @ 0002797c size=216 ===== */

void hci_read_remote_ext_features
               (undefined4 param_1,undefined2 param_2,undefined1 param_3,undefined1 *param_4,
               undefined4 *param_5,undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 local_40;
  undefined1 local_3e;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined1 *local_34;
  undefined4 local_30;
  char *local_2c;
  undefined4 local_28;
  char local_24 [4];
  undefined1 local_20;
  undefined4 local_1f;
  undefined4 local_1b;
  int local_14;
  
  local_34 = (undefined1 *)&local_40;
  piVar4 = *(int **)(DAT_00027a54 + 0x27998 + DAT_00027a58);
  local_14 = *piVar4;
  local_3c = DAT_00027a5c;
  uStack_38 = 0x23;
  local_30 = 3;
  local_2c = local_24;
  local_28 = 0xd;
  local_40 = param_2;
  local_3e = param_3;
  iVar1 = hci_send_req(param_1,&local_3c,param_6);
  if (-1 < iVar1) {
    if (local_24[0] == '\0') {
      if (param_4 != (undefined1 *)0x0) {
        *param_4 = local_20;
      }
      if (param_5 == (undefined4 *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        *param_5 = local_1f;
        param_5[1] = local_1b;
      }
      goto LAB_00027a38;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00027a38:
  if (local_14 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== hci_read_clock_offset @ 00027a60 size=180 ===== */

void hci_read_clock_offset
               (undefined4 param_1,undefined2 param_2,undefined2 *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 local_38 [2];
  char local_34 [3];
  undefined2 local_31;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined4 local_20;
  char *local_1c;
  undefined4 local_18;
  int local_14;
  
  local_24 = (undefined1 *)local_38;
  piVar4 = *(int **)(DAT_00027b14 + 0x27a80 + DAT_00027b18);
  local_14 = *piVar4;
  local_18 = 5;
  local_2c = DAT_00027b1c;
  local_28 = 0x1c;
  local_20 = 2;
  local_1c = local_34;
  local_38[0] = param_2;
  iVar1 = hci_send_req(param_1,&local_2c,param_4);
  if (-1 < iVar1) {
    if (local_34[0] == '\0') {
      *param_3 = local_31;
      uVar3 = 0;
      goto LAB_00027af8;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00027af8:
  if (local_14 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_read_local_version @ 00027b20 size=200 ===== */

void hci_read_local_version(undefined4 param_1,undefined2 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char local_38;
  undefined1 local_37;
  undefined2 local_36;
  undefined1 local_34;
  undefined1 uStack_31;
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 *local_1c;
  undefined4 local_18;
  int local_14;
  
  local_1c = &local_38;
  piVar4 = *(int **)(DAT_00027be8 + 0x27b34 + DAT_00027bec);
  local_14 = *piVar4;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_2c = DAT_00027bf0;
  local_18 = 9;
  iVar1 = hci_send_req(param_1,&local_2c);
  if (-1 < iVar1) {
    if (local_38 == '\0') {
      *param_2 = (short)((uint)_local_34 >> 8);
      *(undefined1 *)(param_2 + 1) = local_37;
      param_2[2] = local_36;
      *(undefined1 *)(param_2 + 3) = local_34;
      param_2[4] = CONCAT11(local_30,uStack_31);
      uVar3 = 0;
      goto LAB_00027bcc;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00027bcc:
  if (local_14 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_read_local_commands @ 00027bf4 size=192 ===== */

void hci_read_local_commands(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar6;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  char *local_60;
  undefined4 local_5c;
  char local_58;
  undefined4 auStack_57 [16];
  undefined1 auStack_17 [11];
  undefined4 *puVar5;
  
  piVar6 = *(int **)(DAT_00027cb4 + 0x27c08 + DAT_00027cb8);
  auStack_17._3_4_ = *piVar6;
  local_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  local_70 = DAT_00027cbc;
  local_60 = &local_58;
  local_5c = 0x41;
  iVar1 = hci_send_req(param_1,&local_70);
  if (-1 < iVar1) {
    if (local_58 == '\0') {
      if (param_2 == (undefined4 *)0x0) {
        uVar3 = 0;
      }
      else {
        puVar4 = auStack_57;
        do {
          puVar5 = puVar4 + 1;
          *param_2 = *puVar4;
          param_2 = param_2 + 1;
          puVar4 = puVar5;
        } while (puVar5 != (undefined4 *)auStack_17);
        uVar3 = 0;
      }
      goto LAB_00027c98;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00027c98:
  if (auStack_17._3_4_ == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== hci_read_local_features @ 00027cc0 size=176 ===== */

void hci_read_local_features(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  char *local_28;
  undefined4 local_24;
  char local_20;
  undefined4 local_1f;
  undefined4 local_1b;
  int local_14;
  
  piVar4 = *(int **)(DAT_00027d70 + 0x27cd4 + DAT_00027d74);
  local_14 = *piVar4;
  local_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  local_38 = DAT_00027d78;
  local_28 = &local_20;
  local_24 = 9;
  iVar1 = hci_send_req(param_1,&local_38);
  if (-1 < iVar1) {
    if (local_20 == '\0') {
      if (param_2 == (undefined4 *)0x0) {
        uVar3 = 0;
      }
      else {
        *param_2 = local_1f;
        param_2[1] = local_1b;
        uVar3 = 0;
      }
      goto LAB_00027d54;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00027d54:
  if (local_14 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== hci_read_local_ext_features @ 00027d7c size=212 ===== */

void hci_read_local_ext_features
               (undefined4 param_1,undefined1 param_2,undefined1 *param_3,undefined4 *param_4,
               undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 local_3c [4];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined1 *local_30;
  undefined4 local_2c;
  char *local_28;
  undefined4 local_24;
  char local_20 [2];
  undefined1 local_1e;
  undefined4 local_1d;
  undefined4 local_19;
  int local_14;
  
  piVar4 = *(int **)(DAT_00027e50 + 0x27d9c + DAT_00027e54);
  local_14 = *piVar4;
  local_38 = DAT_00027e58;
  uStack_34 = 0;
  local_30 = local_3c;
  local_2c = 1;
  local_28 = local_20;
  local_24 = 0xb;
  local_3c[0] = param_2;
  iVar1 = hci_send_req(param_1,&local_38,param_5);
  if (-1 < iVar1) {
    if (local_20[0] == '\0') {
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = local_1e;
      }
      if (param_4 == (undefined4 *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        *param_4 = local_1d;
        param_4[1] = local_19;
      }
      goto LAB_00027e34;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00027e34:
  if (local_14 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== hci_read_bd_addr @ 00027e5c size=176 ===== */

void hci_read_bd_addr(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 extraout_r2;
  int *piVar4;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  char *local_24;
  undefined4 local_20;
  char local_1c;
  undefined1 auStack_1b [7];
  int local_14;
  
  piVar4 = *(int **)(DAT_00027f0c + 0x27e70 + DAT_00027f10);
  local_14 = *piVar4;
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  local_34 = DAT_00027f14;
  local_24 = &local_1c;
  local_20 = 7;
  iVar1 = hci_send_req(param_1,&local_34);
  if (-1 < iVar1) {
    if (local_1c == '\0') {
      if (param_2 == 0) {
        uVar3 = 0;
      }
      else {
        FUN_00025950(param_2,auStack_1b);
        uVar3 = extraout_r2;
      }
      goto LAB_00027ef0;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00027ef0:
  if (local_14 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== hci_read_class_of_dev @ 00027f18 size=164 ===== */

void hci_read_class_of_dev(undefined4 param_1,undefined2 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char *local_20;
  undefined4 local_1c;
  char local_18;
  undefined2 local_17;
  undefined1 local_15;
  int local_14;
  
  piVar4 = *(int **)(DAT_00027fbc + 0x27f2c + DAT_00027fc0);
  local_14 = *piVar4;
  local_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  local_30 = DAT_00027fc4;
  local_20 = &local_18;
  local_1c = 4;
  iVar1 = hci_send_req(param_1,&local_30);
  if (-1 < iVar1) {
    if (local_18 == '\0') {
      *param_2 = local_17;
      *(undefined1 *)(param_2 + 1) = local_15;
      uVar3 = 0;
      goto LAB_00027fa0;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00027fa0:
  if (local_14 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_write_class_of_dev @ 00027fc8 size=120 ===== */

void hci_write_class_of_dev(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 *puStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined2 local_10;
  undefined1 local_e;
  int local_c;
  
  piVar1 = *(int **)(DAT_00028040 + 0x27fd8 + DAT_00028044);
  uStack_14 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_c = *piVar1;
  local_10 = (undefined2)param_2;
  local_24 = 0;
  local_e = (undefined1)((uint)param_2 >> 0x10);
  local_28 = DAT_00028048;
  puStack_20 = &local_10;
  local_1c = 3;
  local_18 = 0;
  hci_send_req(param_1,&local_28);
  if (local_c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== hci_read_voice_setting @ 0002804c size=156 ===== */

void hci_read_voice_setting(undefined4 param_1,undefined2 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 *local_1c;
  undefined4 local_18;
  int local_14;
  
  local_1c = (undefined1 *)&local_30;
  piVar4 = *(int **)(DAT_000280e8 + 0x28060 + DAT_000280ec);
  local_14 = *piVar4;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_2c = DAT_000280f0;
  local_18 = 3;
  iVar1 = hci_send_req(param_1,&local_2c);
  if (-1 < iVar1) {
    if ((local_30 & 0xff) == 0) {
      *param_2 = (short)(local_30 >> 8);
      uVar3 = 0;
      goto LAB_000280cc;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_000280cc:
  if (local_14 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== hci_write_voice_setting @ 000280f4 size=112 ===== */

void hci_write_voice_setting(undefined4 param_1,undefined2 param_2)

{
  int *piVar1;
  undefined2 local_28 [2];
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *puStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  int local_c;
  
  puStack_1c = (undefined1 *)local_28;
  piVar1 = *(int **)(DAT_00028164 + 0x28104 + DAT_00028168);
  uStack_10 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_c = *piVar1;
  local_20 = 0;
  local_14 = 0;
  local_24 = DAT_0002816c;
  local_18 = 2;
  local_28[0] = param_2;
  hci_send_req(param_1,&local_24);
  if (local_c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== hci_read_current_iac_lap @ 00028170 size=184 ===== */

void hci_read_current_iac_lap(undefined4 param_1,byte *param_2,void *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  char *local_e8;
  undefined4 local_e4;
  char local_e0;
  byte local_df;
  undefined1 auStack_de [194];
  int local_1c;
  
  piVar4 = *(int **)(DAT_00028228 + 0x28190 + DAT_0002822c);
  local_1c = *piVar4;
  local_f4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  local_f8 = DAT_00028230;
  local_e8 = &local_e0;
  local_e4 = 0xc2;
  iVar1 = hci_send_req(param_1,&local_f8,param_4);
  if (-1 < iVar1) {
    if (local_e0 == '\0') {
      *param_2 = local_df;
      memcpy(param_3,auStack_de,(uint)local_df * 3);
      uVar3 = 0;
      goto LAB_0002820c;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_0002820c:
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_write_current_iac_lap @ 00028234 size=172 ===== */

void hci_write_current_iac_lap(undefined4 param_1,int param_2,void *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 local_100;
  undefined4 local_fc;
  undefined1 *puStack_f8;
  int local_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined1 local_e8;
  undefined1 auStack_e7 [195];
  int local_24;
  
  piVar1 = *(int **)(DAT_000282e0 + 0x28254 + DAT_000282e4);
  local_24 = *piVar1;
  memset(&local_e8,0,0xc1);
  local_e8 = (undefined1)param_2;
  memcpy(auStack_e7,param_3,param_2 * 3);
  uStack_ec = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_fc = 0;
  local_100 = DAT_000282e8;
  local_f0 = 0;
  puStack_f8 = &local_e8;
  local_f4 = param_2 * 3 + 1;
  hci_send_req(param_1,&local_100,param_4);
  if (local_24 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== hci_read_stored_link_key @ 000282ec size=148 ===== */

void hci_read_stored_link_key
               (undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *puStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined2 uStack_20;
  undefined1 local_1e;
  int local_1c;
  
  piVar1 = *(int **)(DAT_00028380 + 0x2830c + DAT_00028384);
  local_1c = *piVar1;
  local_24 = 0;
  uStack_20 = 0;
  local_1e = 0;
  FUN_00025950(&local_24,param_2,param_4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_38 = 0;
  local_3c = DAT_00028388;
  local_30 = 7;
  local_2c = 0;
  puStack_34 = &local_24;
  local_1e = param_3;
  hci_send_req(param_1,&local_3c);
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== hci_write_stored_link_key @ 0002838c size=184 ===== */

void hci_write_stored_link_key
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *extraout_r2;
  int *piVar4;
  undefined4 uVar5;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 *puStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined1 auStack_30 [3];
  undefined1 auStack_2d [5];
  uint uStack_28;
  undefined3 uStack_24;
  undefined4 uStack_21;
  int local_1c;
  undefined4 *puVar3;
  
  uVar5 = 0;
  _auStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  auStack_2d._1_4_ = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piVar4 = *(int **)(DAT_00028444 + 0x283ac + DAT_00028448);
  local_1c = *piVar4;
  uStack_28 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc) & 0xffffff;
  uStack_24 = 0;
  local_34 = 1;
  uStack_21 = _auStack_30;
  FUN_00025950((int)&local_34 + 1);
  puVar1 = (undefined4 *)(auStack_30 + 3);
  puVar2 = extraout_r2;
  do {
    puVar3 = puVar2 + 1;
    *puVar1 = *puVar2;
    puVar1 = puVar1 + 1;
    puVar2 = puVar3;
  } while (puVar3 != extraout_r2 + 4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_4c = DAT_0002844c;
  local_40 = 0x17;
  local_3c = 0;
  local_48 = uVar5;
  puStack_44 = &local_34;
  hci_send_req(param_1,&local_4c,param_4);
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== hci_delete_stored_link_key @ 00028450 size=148 ===== */

void hci_delete_stored_link_key
               (undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *puStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined2 uStack_20;
  undefined1 local_1e;
  int local_1c;
  
  piVar1 = *(int **)(DAT_000284e4 + 0x28470 + DAT_000284e8);
  local_1c = *piVar1;
  local_24 = 0;
  uStack_20 = 0;
  local_1e = 0;
  FUN_00025950(&local_24,param_2,param_4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_38 = 0;
  local_3c = DAT_000284ec;
  local_30 = 7;
  local_2c = 0;
  puStack_34 = &local_24;
  local_1e = param_3;
  hci_send_req(param_1,&local_3c);
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== hci_authenticate_link @ 000284f0 size=156 ===== */

void hci_authenticate_link(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 local_2c [2];
  char local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined2 *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  int local_c;
  
  piVar4 = *(int **)(DAT_0002858c + 0x28500 + DAT_00028590);
  local_c = *piVar4;
  local_24 = DAT_00028594;
  local_20 = 6;
  local_1c = local_2c;
  local_18 = 2;
  local_14 = local_28;
  local_10 = 3;
  local_2c[0] = param_2;
  iVar1 = hci_send_req(param_1,&local_24);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_28[0] == '\0') goto LAB_00028570;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00028570:
  if (local_c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_encrypt_link @ 00028598 size=164 ===== */

void hci_encrypt_link(undefined4 param_1,undefined2 param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 local_2c;
  undefined1 local_2a;
  char local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined2 *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  int local_c;
  
  piVar4 = *(int **)(DAT_0002863c + 0x285ac + DAT_00028640);
  local_c = *piVar4;
  local_24 = DAT_00028644;
  local_20 = 8;
  local_1c = &local_2c;
  local_18 = 3;
  local_14 = local_28;
  local_10 = 4;
  local_2c = param_2;
  local_2a = param_3;
  iVar1 = hci_send_req(param_1,&local_24,param_4);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_28[0] == '\0') goto LAB_00028620;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00028620:
  if (local_c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_change_link_key @ 00028648 size=156 ===== */

void hci_change_link_key(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 local_2c [2];
  char local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined2 *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  int local_c;
  
  piVar4 = *(int **)(DAT_000286e4 + 0x28658 + DAT_000286e8);
  local_c = *piVar4;
  local_24 = DAT_000286ec;
  local_20 = 9;
  local_1c = local_2c;
  local_18 = 2;
  local_14 = local_28;
  local_10 = 3;
  local_2c[0] = param_2;
  iVar1 = hci_send_req(param_1,&local_24);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_28[0] == '\0') goto LAB_000286c8;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_000286c8:
  if (local_c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_switch_role @ 000286f0 size=176 ===== */

void hci_switch_role(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined1 *local_3c;
  undefined4 local_38;
  char *local_34;
  undefined4 local_30;
  undefined1 auStack_2c [6];
  undefined1 local_26;
  char local_24 [8];
  int local_1c;
  
  piVar4 = *(int **)(DAT_000287a0 + 0x28710 + DAT_000287a4);
  local_1c = *piVar4;
  FUN_00025950(auStack_2c,param_2,param_4);
  local_38 = 7;
  local_34 = local_24;
  local_44 = DAT_000287a8;
  uStack_40 = 0x12;
  local_30 = 8;
  local_3c = auStack_2c;
  local_26 = param_3;
  iVar1 = hci_send_req(param_1,&local_44);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_24[0] == '\0') goto LAB_00028784;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00028784:
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_park_mode @ 000287ac size=156 ===== */

void hci_park_mode(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                  undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  char local_2c [8];
  undefined4 local_24;
  undefined4 uStack_20;
  undefined2 *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 uStack_10;
  int local_c;
  
  piVar4 = *(int **)(DAT_00028848 + 0x287c0 + DAT_0002884c);
  local_24 = DAT_00028850;
  uStack_20 = 0x14;
  local_c = *piVar4;
  local_1c = &local_34;
  local_14 = local_2c;
  uStack_10 = 6;
  local_18 = 6;
  local_34 = param_2;
  local_32 = param_3;
  local_30 = param_4;
  iVar1 = hci_send_req(param_1,&local_24,param_5);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_2c[0] == '\0') goto LAB_0002882c;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_0002882c:
  if (local_c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_exit_park_mode @ 00028854 size=156 ===== */

void hci_exit_park_mode(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 local_30 [2];
  char local_2c [8];
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  int local_c;
  
  local_1c = (undefined1 *)local_30;
  piVar4 = *(int **)(DAT_000288f0 + 0x28864 + DAT_000288f4);
  local_c = *piVar4;
  local_24 = DAT_000288f8;
  local_20 = 0x14;
  local_18 = 2;
  local_14 = local_2c;
  local_10 = 6;
  local_30[0] = param_2;
  iVar1 = hci_send_req(param_1,&local_24);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_2c[0] == '\0') goto LAB_000288d4;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_000288d4:
  if (local_c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_read_inquiry_scan_type @ 000288fc size=152 ===== */

void hci_read_inquiry_scan_type(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char local_30;
  undefined1 local_2f;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 *local_1c;
  undefined4 local_18;
  int local_14;
  
  local_1c = &local_30;
  piVar4 = *(int **)(DAT_00028994 + 0x28910 + DAT_00028998);
  local_14 = *piVar4;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_2c = DAT_0002899c;
  local_18 = 2;
  iVar1 = hci_send_req(param_1,&local_2c);
  if (-1 < iVar1) {
    if (local_30 == '\0') {
      *param_2 = local_2f;
      uVar3 = 0;
      goto LAB_00028978;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00028978:
  if (local_14 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== hci_write_inquiry_scan_type @ 000289a0 size=152 ===== */

void hci_write_inquiry_scan_type(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 local_2c [4];
  char local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  int local_c;
  
  piVar4 = *(int **)(DAT_00028a38 + 0x289b0 + DAT_00028a3c);
  local_14 = local_28;
  local_c = *piVar4;
  local_20 = 0;
  local_24 = DAT_00028a40;
  local_1c = local_2c;
  local_18 = 1;
  local_10 = 1;
  local_2c[0] = param_2;
  iVar1 = hci_send_req(param_1,&local_24);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_28[0] == '\0') goto LAB_00028a1c;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00028a1c:
  if (local_c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_read_inquiry_mode @ 00028a44 size=152 ===== */

void hci_read_inquiry_mode(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char local_30;
  undefined1 local_2f;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 *local_1c;
  undefined4 local_18;
  int local_14;
  
  local_1c = &local_30;
  piVar4 = *(int **)(DAT_00028adc + 0x28a58 + DAT_00028ae0);
  local_14 = *piVar4;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_2c = DAT_00028ae4;
  local_18 = 2;
  iVar1 = hci_send_req(param_1,&local_2c);
  if (-1 < iVar1) {
    if (local_30 == '\0') {
      *param_2 = local_2f;
      uVar3 = 0;
      goto LAB_00028ac0;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00028ac0:
  if (local_14 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== hci_write_inquiry_mode @ 00028ae8 size=152 ===== */

void hci_write_inquiry_mode(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 local_2c [4];
  char local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  int local_c;
  
  piVar4 = *(int **)(DAT_00028b80 + 0x28af8 + DAT_00028b84);
  local_14 = local_28;
  local_c = *piVar4;
  local_20 = 0;
  local_24 = DAT_00028b88;
  local_1c = local_2c;
  local_18 = 1;
  local_10 = 1;
  local_2c[0] = param_2;
  iVar1 = hci_send_req(param_1,&local_24);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_28[0] == '\0') goto LAB_00028b64;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00028b64:
  if (local_c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_read_afh_mode @ 00028b8c size=152 ===== */

void hci_read_afh_mode(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char local_30;
  undefined1 local_2f;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 *local_1c;
  undefined4 local_18;
  int local_14;
  
  local_1c = &local_30;
  piVar4 = *(int **)(DAT_00028c24 + 0x28ba0 + DAT_00028c28);
  local_14 = *piVar4;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_2c = DAT_00028c2c;
  local_18 = 2;
  iVar1 = hci_send_req(param_1,&local_2c);
  if (-1 < iVar1) {
    if (local_30 == '\0') {
      *param_2 = local_2f;
      uVar3 = 0;
      goto LAB_00028c08;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00028c08:
  if (local_14 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== hci_write_afh_mode @ 00028c30 size=152 ===== */

void hci_write_afh_mode(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 local_2c [4];
  char local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  int local_c;
  
  piVar4 = *(int **)(DAT_00028cc8 + 0x28c40 + DAT_00028ccc);
  local_14 = local_28;
  local_c = *piVar4;
  local_20 = 0;
  local_24 = DAT_00028cd0;
  local_1c = local_2c;
  local_18 = 1;
  local_10 = 1;
  local_2c[0] = param_2;
  iVar1 = hci_send_req(param_1,&local_24);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_28[0] == '\0') goto LAB_00028cac;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00028cac:
  if (local_c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_read_ext_inquiry_response @ 00028cd4 size=184 ===== */

void hci_read_ext_inquiry_response
               (undefined4 param_1,undefined1 *param_2,void *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  char *local_118;
  undefined4 local_114;
  char local_110;
  undefined1 local_10f;
  undefined1 auStack_10e [242];
  int local_1c;
  
  piVar4 = *(int **)(DAT_00028d8c + 0x28cf4 + DAT_00028d90);
  local_1c = *piVar4;
  local_124 = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  local_128 = DAT_00028d94;
  local_118 = &local_110;
  local_114 = 0xf2;
  iVar1 = hci_send_req(param_1,&local_128,param_4);
  if (-1 < iVar1) {
    if (local_110 == '\0') {
      *param_2 = local_10f;
      memcpy(param_3,auStack_10e,0xf0);
      uVar3 = 0;
      goto LAB_00028d70;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00028d70:
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_write_ext_inquiry_response @ 00028d98 size=188 ===== */

void hci_write_ext_inquiry_response
               (undefined4 param_1,undefined1 param_2,void *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char local_124 [4];
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined1 *local_118;
  undefined4 local_114;
  char *local_110;
  undefined4 local_10c;
  undefined1 local_108;
  undefined1 auStack_107 [243];
  int local_14;
  
  piVar4 = *(int **)(DAT_00028e54 + 0x28dbc + DAT_00028e58);
  local_14 = *piVar4;
  local_108 = param_2;
  memcpy(auStack_107,param_3,0xf0);
  local_118 = &local_108;
  local_114 = 0xf1;
  local_110 = local_124;
  local_120 = DAT_00028e5c;
  uStack_11c = 0;
  local_10c = 1;
  iVar1 = hci_send_req(param_1,&local_120,param_4);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_124[0] == '\0') goto LAB_00028e38;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00028e38:
  if (local_14 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_read_simple_pairing_mode @ 00028e60 size=152 ===== */

void hci_read_simple_pairing_mode(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char local_30;
  undefined1 local_2f;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 *local_1c;
  undefined4 local_18;
  int local_14;
  
  local_1c = &local_30;
  piVar4 = *(int **)(DAT_00028ef8 + 0x28e74 + DAT_00028efc);
  local_14 = *piVar4;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_2c = DAT_00028f00;
  local_18 = 2;
  iVar1 = hci_send_req(param_1,&local_2c);
  if (-1 < iVar1) {
    if (local_30 == '\0') {
      *param_2 = local_2f;
      uVar3 = 0;
      goto LAB_00028edc;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00028edc:
  if (local_14 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== hci_write_simple_pairing_mode @ 00028f04 size=152 ===== */

void hci_write_simple_pairing_mode(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 local_2c [4];
  char local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  int local_c;
  
  piVar4 = *(int **)(DAT_00028f9c + 0x28f14 + DAT_00028fa0);
  local_14 = local_28;
  local_c = *piVar4;
  local_20 = 0;
  local_24 = DAT_00028fa4;
  local_1c = local_2c;
  local_18 = 1;
  local_10 = 1;
  local_2c[0] = param_2;
  iVar1 = hci_send_req(param_1,&local_24);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_28[0] == '\0') goto LAB_00028f80;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00028f80:
  if (local_c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_read_local_oob_data @ 00028fa8 size=212 ===== */

void hci_read_local_oob_data
               (undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  char *local_40;
  undefined4 local_3c;
  char local_38;
  undefined4 auStack_37 [4];
  undefined4 auStack_27 [4];
  undefined1 auStack_17 [7];
  
  piVar6 = *(int **)(DAT_0002907c + 0x28fc8 + DAT_00029080);
  auStack_17._3_4_ = *piVar6;
  local_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  local_50 = DAT_00029084;
  local_40 = &local_38;
  local_3c = 0x21;
  iVar1 = hci_send_req(param_1,&local_50,param_4);
  if (-1 < iVar1) {
    if (local_38 == '\0') {
      puVar4 = auStack_37;
      do {
        puVar5 = puVar4 + 1;
        *param_2 = *puVar4;
        param_2 = param_2 + 1;
        puVar4 = puVar5;
      } while (puVar5 != auStack_27);
      do {
        puVar4 = puVar5 + 1;
        *param_3 = *puVar5;
        param_3 = param_3 + 1;
        puVar5 = puVar4;
      } while (puVar4 != (undefined4 *)auStack_17);
      uVar3 = 0;
      goto LAB_00029060;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00029060:
  if (auStack_17._3_4_ == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== hci_read_inq_response_tx_power_level @ 00029088 size=152 ===== */

void hci_read_inq_response_tx_power_level(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char local_30;
  undefined1 local_2f;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 *local_1c;
  undefined4 local_18;
  int local_14;
  
  local_1c = &local_30;
  piVar4 = *(int **)(DAT_00029120 + 0x2909c + DAT_00029124);
  local_14 = *piVar4;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_2c = DAT_00029128;
  local_18 = 2;
  iVar1 = hci_send_req(param_1,&local_2c);
  if (-1 < iVar1) {
    if (local_30 == '\0') {
      *param_2 = local_2f;
      uVar3 = 0;
      goto LAB_00029104;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00029104:
  if (local_14 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== hci_read_inquiry_transmit_power_level @ 0002912c size=4 ===== */

void hci_read_inquiry_transmit_power_level(void)

{
  (*(code *)PTR_hci_read_inq_response_tx_power_level_0004dec4)();
  return;
}



/* ===== hci_write_inquiry_transmit_power_level @ 00029130 size=152 ===== */

void hci_write_inquiry_transmit_power_level(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 local_2c [4];
  char local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  int local_c;
  
  piVar4 = *(int **)(DAT_000291c8 + 0x29140 + DAT_000291cc);
  local_14 = local_28;
  local_c = *piVar4;
  local_20 = 0;
  local_24 = DAT_000291d0;
  local_1c = local_2c;
  local_18 = 1;
  local_10 = 1;
  local_2c[0] = param_2;
  iVar1 = hci_send_req(param_1,&local_24);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_28[0] == '\0') goto LAB_000291ac;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_000291ac:
  if (local_c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_read_transmit_power_level @ 000291d4 size=172 ===== */

void hci_read_transmit_power_level
               (undefined4 param_1,undefined2 param_2,undefined1 param_3,undefined1 *param_4,
               undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 local_34;
  undefined1 local_32;
  char local_30 [3];
  undefined1 local_2d;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined2 *local_24;
  undefined4 local_20;
  char *local_1c;
  undefined4 local_18;
  int local_14;
  
  piVar4 = *(int **)(DAT_00029280 + 0x291e8 + DAT_00029284);
  local_14 = *piVar4;
  local_2c = DAT_00029288;
  uStack_28 = 0;
  local_24 = &local_34;
  local_20 = 3;
  local_1c = local_30;
  local_18 = 4;
  local_34 = param_2;
  local_32 = param_3;
  iVar1 = hci_send_req(param_1,&local_2c,param_5);
  if (-1 < iVar1) {
    if (local_30[0] == '\0') {
      *param_4 = local_2d;
      uVar3 = 0;
      goto LAB_00029264;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00029264:
  if (local_14 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== hci_read_link_policy @ 0002928c size=180 ===== */

void hci_read_link_policy
               (undefined4 param_1,undefined2 param_2,undefined2 *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 local_3a [3];
  char local_34 [3];
  undefined2 local_31;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 *local_24;
  undefined4 local_20;
  char *local_1c;
  undefined4 local_18;
  int local_14;
  
  piVar4 = *(int **)(DAT_00029340 + 0x292ac + DAT_00029344);
  local_18 = 5;
  local_14 = *piVar4;
  local_28 = 0;
  local_2c = DAT_00029348;
  local_24 = local_3a;
  local_20 = 2;
  local_1c = local_34;
  local_3a[0] = param_2;
  iVar1 = hci_send_req(param_1,&local_2c,param_4);
  if (-1 < iVar1) {
    if (local_34[0] == '\0') {
      *param_3 = local_31;
      uVar3 = 0;
      goto LAB_00029324;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00029324:
  if (local_14 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_write_link_policy @ 0002934c size=164 ===== */

void hci_write_link_policy
               (undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char local_2c [4];
  undefined2 local_28;
  undefined2 local_26;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  int local_c;
  
  piVar4 = *(int **)(DAT_000293f0 + 0x29360 + DAT_000293f4);
  local_20 = 0;
  local_c = *piVar4;
  local_24 = DAT_000293f8;
  local_1c = &local_28;
  local_18 = 4;
  local_14 = local_2c;
  local_10 = 3;
  local_28 = param_2;
  local_26 = param_3;
  iVar1 = hci_send_req(param_1,&local_24,param_4);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_2c[0] == '\0') goto LAB_000293d4;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_000293d4:
  if (local_c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_read_link_supervision_timeout @ 000293fc size=180 ===== */

void hci_read_link_supervision_timeout
               (undefined4 param_1,undefined2 param_2,undefined2 *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 local_3a [3];
  char local_34 [3];
  undefined2 local_31;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 *local_24;
  undefined4 local_20;
  char *local_1c;
  undefined4 local_18;
  int local_14;
  
  piVar4 = *(int **)(DAT_000294b0 + 0x2941c + DAT_000294b4);
  local_18 = 5;
  local_14 = *piVar4;
  local_28 = 0;
  local_2c = DAT_000294b8;
  local_24 = local_3a;
  local_20 = 2;
  local_1c = local_34;
  local_3a[0] = param_2;
  iVar1 = hci_send_req(param_1,&local_2c,param_4);
  if (-1 < iVar1) {
    if (local_34[0] == '\0') {
      *param_3 = local_31;
      uVar3 = 0;
      goto LAB_00029494;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00029494:
  if (local_14 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_write_link_supervision_timeout @ 000294bc size=164 ===== */

void hci_write_link_supervision_timeout
               (undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char local_2c [4];
  undefined2 local_28;
  undefined2 local_26;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  int local_c;
  
  piVar4 = *(int **)(DAT_00029560 + 0x294d0 + DAT_00029564);
  local_20 = 0;
  local_c = *piVar4;
  local_24 = DAT_00029568;
  local_1c = &local_28;
  local_18 = 4;
  local_14 = local_2c;
  local_10 = 3;
  local_28 = param_2;
  local_26 = param_3;
  iVar1 = hci_send_req(param_1,&local_24,param_4);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_2c[0] == '\0') goto LAB_00029544;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00029544:
  if (local_c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_set_afh_classification @ 0002956c size=184 ===== */

void hci_set_afh_classification(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char local_34 [4];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 *local_28;
  undefined4 local_24;
  char *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined2 local_10;
  int local_c;
  
  piVar4 = *(int **)(DAT_00029624 + 0x29580 + DAT_00029628);
  uStack_14 = param_2[1];
  local_c = *piVar4;
  local_18 = *param_2;
  local_10 = *(undefined2 *)(param_2 + 2);
  local_28 = &local_18;
  local_24 = 10;
  local_20 = local_34;
  local_30 = DAT_0002962c;
  uStack_2c = 0;
  local_1c = 1;
  iVar1 = hci_send_req(param_1,&local_30);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_34[0] == '\0') goto LAB_00029608;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00029608:
  if (local_c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_read_link_quality @ 00029630 size=172 ===== */

void hci_read_link_quality
               (undefined4 param_1,undefined2 param_2,undefined1 *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 local_32;
  char local_30 [3];
  undefined1 local_2d;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 *local_24;
  undefined4 local_20;
  char *local_1c;
  undefined4 local_18;
  int local_14;
  
  piVar4 = *(int **)(DAT_000296dc + 0x29648 + DAT_000296e0);
  local_14 = *piVar4;
  local_28 = 0;
  local_2c = DAT_000296e4;
  local_24 = &local_32;
  local_20 = 2;
  local_1c = local_30;
  local_18 = 4;
  local_32 = param_2;
  iVar1 = hci_send_req(param_1,&local_2c,param_4);
  if (-1 < iVar1) {
    if (local_30[0] == '\0') {
      *param_3 = local_2d;
      uVar3 = 0;
      goto LAB_000296c0;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_000296c0:
  if (local_14 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== hci_read_rssi @ 000296e8 size=172 ===== */

void hci_read_rssi(undefined4 param_1,undefined2 param_2,undefined1 *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 local_32;
  char local_30 [3];
  undefined1 local_2d;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 *local_24;
  undefined4 local_20;
  char *local_1c;
  undefined4 local_18;
  int local_14;
  
  piVar4 = *(int **)(DAT_00029794 + 0x29700 + DAT_00029798);
  local_14 = *piVar4;
  local_28 = 0;
  local_2c = DAT_0002979c;
  local_24 = &local_32;
  local_20 = 2;
  local_1c = local_30;
  local_18 = 4;
  local_32 = param_2;
  iVar1 = hci_send_req(param_1,&local_2c,param_4);
  if (-1 < iVar1) {
    if (local_30[0] == '\0') {
      *param_3 = local_2d;
      uVar3 = 0;
      goto LAB_00029778;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00029778:
  if (local_14 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== hci_read_afh_map @ 000297a0 size=204 ===== */

void hci_read_afh_map(undefined4 param_1,undefined2 param_2,undefined1 *param_3,undefined4 *param_4,
                     undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 local_42 [3];
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined2 *local_34;
  undefined4 local_30;
  char *local_2c;
  undefined4 local_28;
  char local_24 [3];
  undefined1 local_21;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined2 local_18;
  int local_14;
  
  piVar4 = *(int **)(DAT_0002986c + 0x297bc + DAT_00029870);
  local_14 = *piVar4;
  local_3c = DAT_00029874;
  uStack_38 = 0;
  local_34 = local_42;
  local_30 = 2;
  local_2c = local_24;
  local_28 = 0xe;
  local_42[0] = param_2;
  iVar1 = hci_send_req(param_1,&local_3c,param_5);
  if (-1 < iVar1) {
    if (local_24[0] == '\0') {
      *param_3 = local_21;
      *param_4 = local_20;
      param_4[1] = uStack_1c;
      *(undefined2 *)(param_4 + 2) = local_18;
      uVar3 = 0;
      goto LAB_00029850;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00029850:
  if (local_14 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_read_clock @ 00029878 size=196 ===== */

void hci_read_clock(undefined4 param_1,undefined2 param_2,undefined1 param_3,undefined4 *param_4,
                   undefined2 *param_5,undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 local_3c;
  undefined1 local_3a;
  char local_38 [3];
  undefined4 local_35;
  undefined1 local_31;
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined2 *local_24;
  undefined4 local_20;
  char *local_1c;
  undefined4 local_18;
  int local_14;
  
  piVar4 = *(int **)(DAT_0002993c + 0x2988c + DAT_00029940);
  local_14 = *piVar4;
  local_2c = DAT_00029944;
  uStack_28 = 0;
  local_24 = &local_3c;
  local_20 = 3;
  local_1c = local_38;
  local_18 = 9;
  local_3c = param_2;
  local_3a = param_3;
  iVar1 = hci_send_req(param_1,&local_2c,param_6);
  if (-1 < iVar1) {
    if (local_38[0] == '\0') {
      *param_4 = local_35;
      *param_5 = CONCAT11(local_30,local_31);
      uVar3 = 0;
      goto LAB_00029920;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00029920:
  if (local_14 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_le_set_scan_enable @ 00029948 size=164 ===== */

void hci_le_set_scan_enable
               (undefined4 param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  int local_c;
  
  piVar4 = *(int **)(DAT_000299ec + 0x2995c + DAT_000299f0);
  local_20 = 0;
  local_c = *piVar4;
  local_24 = DAT_000299f4;
  local_1c = &local_28;
  local_18 = 2;
  local_14 = &local_29;
  local_10 = 1;
  local_28 = param_2;
  local_27 = param_3;
  iVar1 = hci_send_req(param_1,&local_24,param_4);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_29 == '\0') goto LAB_000299d0;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_000299d0:
  if (local_c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_le_set_scan_parameters @ 000299f8 size=180 ===== */

void hci_le_set_scan_parameters
               (undefined4 param_1,undefined1 param_2,undefined2 param_3,undefined2 param_4,
               undefined1 param_5,undefined1 param_6,undefined4 param_7)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char local_2d;
  undefined1 local_2c;
  undefined2 local_2b;
  undefined2 local_29;
  undefined1 local_27;
  undefined1 local_26;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined1 *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  int local_c;
  
  piVar4 = *(int **)(DAT_00029aac + 0x29a0c + DAT_00029ab0);
  local_27 = param_5;
  local_26 = param_6;
  local_24 = DAT_00029ab4;
  uStack_20 = 0;
  local_c = *piVar4;
  local_1c = &local_2c;
  local_18 = 7;
  local_14 = &local_2d;
  local_10 = 1;
  local_2c = param_2;
  local_2b = param_3;
  local_29 = param_4;
  iVar1 = hci_send_req(param_1,&local_24,param_7);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_2d == '\0') goto LAB_00029a90;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00029a90:
  if (local_c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_le_set_advertise_enable @ 00029ab8 size=148 ===== */

void hci_le_set_advertise_enable(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 local_28 [3];
  char local_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  int local_c;
  
  local_1c = local_28;
  piVar4 = *(int **)(DAT_00029b4c + 0x29ac8 + DAT_00029b50);
  local_c = *piVar4;
  uStack_24 = DAT_00029b54;
  uStack_20 = 0;
  local_14 = &local_25;
  local_18 = 1;
  local_10 = 1;
  local_28[0] = param_2;
  iVar1 = hci_send_req(param_1,&uStack_24);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_25 == '\0') goto LAB_00029b30;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00029b30:
  if (local_c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_le_create_conn @ 00029b58 size=280 ===== */

void hci_le_create_conn(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined1 param_4,
                       undefined1 param_5,undefined4 param_6,undefined2 param_7,undefined1 param_8,
                       undefined2 param_9,undefined2 param_10,undefined2 param_11,
                       undefined2 param_12,undefined2 param_13,undefined2 param_14,
                       undefined2 *param_15,undefined4 param_16)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined2 *local_54;
  undefined4 local_50;
  uint *local_4c;
  undefined4 local_48;
  uint local_44 [5];
  undefined2 local_30;
  undefined2 local_2e;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined4 local_2a;
  undefined2 local_26;
  undefined1 local_24;
  undefined2 local_23;
  undefined2 local_21;
  undefined2 local_1f;
  undefined2 local_1d;
  undefined2 local_1b;
  undefined2 local_19;
  int local_14;
  
  piVar4 = *(int **)(DAT_00029c70 + 0x29b70 + DAT_00029c74);
  local_14 = *piVar4;
  local_2b = param_5;
  local_26 = param_7;
  local_24 = param_8;
  local_2a = param_6;
  local_23 = param_9;
  local_21 = param_10;
  local_1f = param_11;
  local_5c = DAT_00029c78;
  uStack_58 = 1;
  local_1d = param_12;
  local_1b = param_13;
  local_19 = param_14;
  local_54 = &local_30;
  local_50 = 0x19;
  local_4c = local_44;
  local_48 = 0xb;
  local_30 = param_2;
  local_2e = param_3;
  local_2c = param_4;
  iVar1 = hci_send_req(param_1,&local_5c,param_16);
  if (-1 < iVar1) {
    if ((local_44[0] & 0xff) == 0) {
      if (param_15 != (undefined2 *)0x0) {
        *param_15 = (short)(local_44[0] >> 8);
      }
      uVar3 = 0;
      goto LAB_00029c3c;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00029c3c:
  if (local_14 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_le_conn_update @ 00029c7c size=192 ===== */

void hci_le_conn_update(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                       undefined2 param_5,undefined2 param_6,undefined4 param_7)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char local_40 [12];
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined2 *local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  int local_c;
  
  local_14 = local_40;
  piVar4 = *(int **)(DAT_00029d3c + 0x29c90 + DAT_00029d40);
  local_2e = param_5;
  local_2c = param_6;
  local_2a = 1;
  local_28 = 1;
  local_1c = &local_34;
  local_18 = 0xe;
  local_24 = DAT_00029d44;
  uStack_20 = 3;
  local_c = *piVar4;
  local_10 = 9;
  local_34 = param_2;
  local_32 = param_3;
  local_30 = param_4;
  iVar1 = hci_send_req(param_1,&local_24,param_7);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_40[0] == '\0') goto LAB_00029d20;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00029d20:
  if (local_c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== hci_le_read_remote_features @ 00029d48 size=196 ===== */

void hci_le_read_remote_features
               (undefined4 param_1,undefined2 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 local_3c [2];
  undefined4 local_38;
  undefined4 local_34;
  undefined2 *local_30;
  undefined4 local_2c;
  char *local_28;
  undefined4 local_24;
  char local_20 [3];
  undefined4 local_1d;
  undefined4 local_19;
  int local_14;
  
  piVar4 = *(int **)(DAT_00029e0c + 0x29d64 + DAT_00029e10);
  local_14 = *piVar4;
  local_38 = DAT_00029e14;
  local_34 = 4;
  local_30 = local_3c;
  local_2c = 2;
  local_28 = local_20;
  local_24 = 0xb;
  local_3c[0] = param_2;
  iVar1 = hci_send_req(param_1,&local_38,param_4);
  if (-1 < iVar1) {
    if (local_20[0] == '\0') {
      if (param_3 == (undefined4 *)0x0) {
        uVar3 = 0;
      }
      else {
        *param_3 = local_1d;
        param_3[1] = local_19;
        uVar3 = 0;
      }
      goto LAB_00029df0;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00029df0:
  if (local_14 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== FUN_00029e18 @ 00029e18 size=28 ===== */

void FUN_00029e18(int param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = (undefined1 *)(param_1 + -1);
  puVar2 = param_2 + 0x10;
  do {
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + -1;
    *puVar2 = *puVar1;
  } while (puVar2 != param_2);
  return;
}



/* ===== FUN_00029e34 @ 00029e34 size=44 ===== */

void FUN_00029e34(int *param_1,code *param_2,undefined4 param_3)

{
  for (; param_1 != (int *)0x0; param_1 = (int *)*param_1) {
    (*param_2)(param_1[1],param_3);
  }
  return;
}



/* ===== FUN_00029e60 @ 00029e60 size=48 ===== */

int FUN_00029e60(int *param_1,int param_2)

{
  while( true ) {
    if (*param_1 == 0) {
      return DAT_00029e90 + 0x29e78;
    }
    if (*param_1 == param_2) break;
    param_1 = param_1 + 2;
  }
  return param_1[1];
}



/* ===== sdp_attrid_comp_func @ 00029e94 size=40 ===== */

int sdp_attrid_comp_func(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0 || param_2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (uint)*(ushort *)(param_1 + 2) - (uint)*(ushort *)(param_2 + 2);
  }
  return iVar1;
}



/* ===== sdp_list_free @ 00029ebc size=56 ===== */

void sdp_list_free(undefined4 *param_1,code *param_2)

{
  void *pvVar1;
  
  while (param_1 != (void *)0x0) {
    pvVar1 = (void *)*param_1;
    if (param_2 != (code *)0x0) {
      (*param_2)(param_1[1]);
    }
    free(param_1);
    param_1 = pvVar1;
  }
  return;
}



/* ===== sdp_uuid128_cmp @ 00029ef4 size=16 ===== */

void sdp_uuid128_cmp(int param_1,int param_2)

{
  memcmp((void *)(param_1 + 4),(void *)(param_2 + 4),0x10);
  return;
}



/* ===== FUN_00029f04 @ 00029f04 size=84 ===== */

void FUN_00029f04(byte *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  
  if (param_1 == (byte *)0x0) {
    return;
  }
  if (2 < *param_1 - 0x35) {
    return;
  }
  pbVar4 = *(byte **)(param_1 + 8);
  if (pbVar4 == (byte *)0x0) {
    return;
  }
  if (3 < *pbVar4 - 0x19) {
    return;
  }
  uVar1 = *(undefined4 *)(pbVar4 + 0xc);
  uVar2 = *(undefined4 *)(pbVar4 + 0x10);
  uVar3 = *(undefined4 *)(pbVar4 + 0x14);
  *param_2 = *(undefined4 *)(pbVar4 + 8);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  param_2[4] = *(undefined4 *)(pbVar4 + 0x18);
  return;
}



/* ===== sdp_data_free @ 00029f58 size=96 ===== */

void sdp_data_free(byte *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)*param_1;
  if (uVar2 < 0x38) {
    if (0x34 < uVar2) {
      iVar1 = *(int *)(param_1 + 8);
      while (iVar1 != 0) {
        iVar1 = *(int *)(iVar1 + 0x20);
        sdp_data_free();
      }
      goto LAB_00029f84;
    }
    uVar2 = uVar2 - 0x25;
  }
  else {
    uVar2 = uVar2 - 0x45;
  }
  if (uVar2 < 3) {
    free(*(void **)(param_1 + 8));
  }
LAB_00029f84:
  free(param_1);
  return;
}



/* ===== FUN_00029fb8 @ 00029fb8 size=104 ===== */

int FUN_00029fb8(undefined1 *param_1,int param_2,byte *param_3)

{
  size_t __n;
  
  if (param_3 != (byte *)0x0) {
    __n = (size_t)*param_3;
    if (param_2 <= (int)__n) {
      __n = param_2 - 1U & 0xff;
      syslog(3,(char *)(DAT_0002a024 + 0x29ff8),DAT_0002a020 + 0x29ff0);
    }
    *param_1 = (char)__n;
    memcpy(param_1 + 1,param_3 + 1,__n);
    return __n + 1;
  }
  *param_1 = 0;
  return 1;
}



/* ===== FUN_0002a028 @ 0002a028 size=76 ===== */

undefined4 FUN_0002a028(int *param_1,int param_2,uint param_3)

{
  ssize_t sVar1;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    if (param_3 <= uVar2) {
      return 0;
    }
    sVar1 = send(*param_1,(void *)(param_2 + uVar2),param_3 - uVar2,0);
    if (sVar1 < 0) break;
    uVar2 = uVar2 + sVar1;
  }
  return 0xffffffff;
}



/* ===== FUN_0002a074 @ 0002a074 size=244 ===== */

void FUN_0002a074(uint *param_1,void *param_2)

{
  uint uVar1;
  int *piVar2;
  ssize_t sVar3;
  __fd_mask *p_Var4;
  int iVar5;
  int *piVar6;
  timeval local_9c;
  uint auStack_94 [32];
  int local_14;
  
  piVar6 = *(int **)(DAT_0002a168 + 0x2a084 + DAT_0002a16c);
  local_14 = *piVar6;
  iVar5 = 0;
  local_9c.tv_sec = 0x14;
  local_9c.tv_usec = 0;
  p_Var4 = (__fd_mask *)auStack_94;
  do {
    *p_Var4 = 0;
    iVar5 = iVar5 + 1;
    p_Var4 = p_Var4 + 1;
  } while (iVar5 != 0x20);
  uVar1 = *param_1;
  auStack_94[uVar1 >> 5] = auStack_94[uVar1 >> 5] | 1 << (uVar1 & 0x1f);
  iVar5 = select(uVar1 + 1,(fd_set *)auStack_94,(fd_set *)0x0,(fd_set *)0x0,&local_9c);
  if (iVar5 == 0) {
    syslog(3,(char *)(DAT_0002a174 + 0x2a120),DAT_0002a170 + 0x2a128);
    piVar2 = __errno_location();
    *piVar2 = 0x6e;
    sVar3 = -1;
  }
  else {
    sVar3 = recv(*param_1,param_2,0xffff,0);
  }
  if (local_14 != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(sVar3);
  }
  return;
}



/* ===== sdp_uuid2strn @ 0002a178 size=248 ===== */

undefined4 sdp_uuid2strn(byte *param_1,char *param_2,size_t param_3,undefined4 param_4)

{
  char *__format;
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (byte *)0x0) {
    snprintf(param_2,param_3,(char *)(DAT_0002a270 + 0x2a19c),param_4,0,param_2,param_3,param_4);
    return 0xfffffffe;
  }
  uVar1 = (uint)*param_1;
  if (uVar1 == 0x1a) {
    uVar1 = *(uint *)(param_1 + 4);
    __format = (char *)(DAT_0002a278 + 0x2a1f0);
  }
  else {
    if (uVar1 == 0x1c) {
      uVar2 = *(uint *)(param_1 + 0xe);
      uVar1 = *(uint *)(param_1 + 4);
      snprintf(param_2,param_3,(char *)(DAT_0002a27c + 0x2a254),
               uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
               uVar1 >> 0x18,
               (*(ushort *)(param_1 + 8) & 0xff) << 8 | (uint)(*(ushort *)(param_1 + 8) >> 8),
               (*(ushort *)(param_1 + 10) & 0xff) << 8 | (uint)(*(ushort *)(param_1 + 10) >> 8),
               (*(ushort *)(param_1 + 0xc) & 0xff) << 8 | (uint)(*(ushort *)(param_1 + 0xc) >> 8),
               uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
               uVar2 >> 0x18,
               (*(ushort *)(param_1 + 0x12) & 0xff) << 8 | (uint)(*(ushort *)(param_1 + 0x12) >> 8))
      ;
      return 0;
    }
    if (uVar1 != 0x19) {
      snprintf(param_2,param_3,(char *)(DAT_0002a280 + 0x2a268),uVar1,param_1,param_2,param_3,
               param_4);
      return 0xffffffff;
    }
    uVar1 = (uint)*(ushort *)(param_1 + 4);
    __format = (char *)(DAT_0002a274 + 0x2a1d4);
  }
  snprintf(param_2,param_3,__format,uVar1,param_1,param_2,param_3,param_4);
  return 0;
}



/* ===== sdp_seq_append @ 0002a284 size=52 ===== */

int sdp_seq_append(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2;
  iVar2 = param_1;
  if (param_1 != 0) {
    do {
      iVar1 = iVar2;
      iVar2 = *(int *)(iVar1 + 0x20);
    } while (iVar2 != 0);
    *(int *)(iVar1 + 0x20) = param_2;
    iVar1 = param_1;
  }
  *(undefined4 *)(param_2 + 0x20) = 0;
  return iVar1;
}



/* ===== sdp_set_seq_len @ 0002a2b8 size=192 ===== */

void sdp_set_seq_len(undefined1 *param_1,uint param_2)

{
  switch(*param_1) {
  case 0x25:
    goto LAB_0002a358;
  case 0x26:
    goto LAB_0002a360;
  case 0x27:
    goto LAB_0002a36c;
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
    break;
  case 0x32:
    break;
  case 0x33:
    break;
  case 0x34:
    break;
  case 0x35:
    goto LAB_0002a358;
  case 0x36:
    goto LAB_0002a360;
  case 0x37:
    goto LAB_0002a36c;
  case 0x38:
    break;
  case 0x39:
    break;
  case 0x3a:
    break;
  case 0x3b:
    break;
  case 0x3c:
    break;
  case 0x3d:
    goto LAB_0002a358;
  case 0x3e:
    goto LAB_0002a360;
  case 0x3f:
    goto LAB_0002a36c;
  case 0x40:
    break;
  case 0x41:
    break;
  case 0x42:
    break;
  case 0x43:
    break;
  case 0x44:
    break;
  case 0x45:
LAB_0002a358:
    param_1[1] = (char)param_2;
    return;
  case 0x46:
LAB_0002a360:
    *(ushort *)(param_1 + 1) = (ushort)((param_2 & 0xff) << 8) | (ushort)(param_2 >> 8) & 0xff;
    return;
  case 0x47:
LAB_0002a36c:
    *(uint *)(param_1 + 1) =
         param_2 << 0x18 | (param_2 >> 8 & 0xff) << 0x10 | (param_2 >> 0x10 & 0xff) << 8 |
         param_2 >> 0x18;
  }
  return;
}



/* ===== sdp_set_attrid @ 0002a378 size=32 ===== */

void sdp_set_attrid(undefined4 *param_1,uint param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = 9;
  *(ushort *)(puVar1 + 1) = (ushort)((param_2 & 0xff) << 8) | (ushort)(param_2 >> 8) & 0xff;
  param_1[1] = 3;
  return;
}



/* ===== sdp_gen_pdu @ 0002a398 size=796 ===== */

void sdp_gen_pdu(int *param_1,byte *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint *__src;
  int iVar10;
  int iVar11;
  uint uVar12;
  ushort local_4e;
  uint local_4c;
  uint local_48;
  uint uStack_44;
  uint auStack_3c [4];
  int local_2c;
  
  iVar2 = DAT_0002a6bc;
  piVar7 = *(int **)(DAT_0002a6b4 + 0x2a3a8 + DAT_0002a6b8);
  iVar9 = param_1[1];
  iVar11 = *param_1;
  iVar10 = iVar11 + iVar9;
  local_2c = *piVar7;
  while( true ) {
    uVar3 = *param_2 - 0x25 & 0xff;
    if (uVar3 < 0x23) {
      iVar8 = (int)*(char *)(iVar2 + uVar3 + 0x2a3f5);
    }
    else {
      iVar8 = 1;
    }
    param_1[1] = iVar9 + iVar8;
    uVar3 = FUN_0002a70c(param_1,param_2);
    if ((uVar3 < 0x100) || (*param_2 != 0x35)) break;
    param_1[1] = iVar9;
    *param_2 = 0x36;
  }
  *(byte *)(iVar11 + iVar9) = *param_2;
  switch(*param_2) {
  case 8:
    goto LAB_0002a550;
  case 9:
    goto LAB_0002a5d8;
  case 10:
    goto LAB_0002a5f4;
  case 0xb:
    goto LAB_0002a610;
  case 0xc:
    goto LAB_0002a5c4;
  case 0xd:
    break;
  case 0xe:
    break;
  case 0xf:
    break;
  case 0x10:
    goto LAB_0002a550;
  case 0x11:
LAB_0002a5d8:
    uVar1 = *(ushort *)(param_2 + 8);
LAB_0002a5dc:
    local_4e = uVar1 << 8 | uVar1 >> 8;
    puVar4 = (uint *)0x0;
    __src = (uint *)&local_4e;
    puVar5 = (uint *)0x0;
    goto LAB_0002a55c;
  case 0x12:
LAB_0002a5f4:
    uVar6 = *(uint *)(param_2 + 8);
LAB_0002a5f8:
    local_4c = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
               uVar6 >> 0x18;
    puVar4 = (uint *)0x0;
    __src = &local_4c;
    puVar5 = puVar4;
    goto LAB_0002a55c;
  case 0x13:
LAB_0002a610:
    uVar6 = *(uint *)(param_2 + 8);
    puVar4 = (uint *)0x0;
    uVar12 = *(uint *)(param_2 + 0xc);
    __src = &local_48;
    uStack_44 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                uVar6 >> 0x18;
    local_48 = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
               uVar12 >> 0x18;
    puVar5 = puVar4;
    goto LAB_0002a55c;
  case 0x14:
LAB_0002a5c4:
    __src = auStack_3c;
    FUN_00029e18(param_2 + 8,__src);
    goto LAB_0002a554;
  case 0x15:
    break;
  case 0x16:
    break;
  case 0x17:
    break;
  case 0x18:
    break;
  case 0x19:
    uVar1 = *(ushort *)(param_2 + 0xc);
    goto LAB_0002a5dc;
  case 0x1a:
    uVar6 = *(uint *)(param_2 + 0xc);
    goto LAB_0002a5f8;
  case 0x1b:
    break;
  case 0x1c:
    __src = (uint *)(param_2 + 0xc);
    goto LAB_0002a554;
  case 0x1d:
    break;
  case 0x1e:
    break;
  case 0x1f:
    break;
  case 0x20:
    break;
  case 0x21:
    break;
  case 0x22:
    break;
  case 0x23:
    break;
  case 0x24:
    break;
  case 0x25:
    goto LAB_0002a63c;
  case 0x26:
    goto LAB_0002a63c;
  case 0x27:
    goto LAB_0002a63c;
  case 0x28:
LAB_0002a550:
    __src = (uint *)(param_2 + 8);
    goto LAB_0002a554;
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
    break;
  case 0x32:
    break;
  case 0x33:
    break;
  case 0x34:
    break;
  case 0x35:
    goto LAB_0002a650;
  case 0x36:
    goto LAB_0002a650;
  case 0x37:
LAB_0002a650:
    sdp_set_seq_len(iVar10,uVar3);
    puVar5 = (uint *)0x1;
    goto LAB_0002a664;
  case 0x38:
    break;
  case 0x39:
    break;
  case 0x3a:
    break;
  case 0x3b:
    break;
  case 0x3c:
    break;
  case 0x3d:
    goto LAB_0002a66c;
  case 0x3e:
    goto LAB_0002a66c;
  case 0x3f:
LAB_0002a66c:
    sdp_set_seq_len(iVar10,uVar3);
    puVar4 = (uint *)0x1;
    __src = (uint *)0x0;
    puVar5 = (uint *)0x0;
    goto LAB_0002a55c;
  case 0x40:
    break;
  case 0x41:
    break;
  case 0x42:
    break;
  case 0x43:
    break;
  case 0x44:
    break;
  case 0x45:
    goto LAB_0002a63c;
  case 0x46:
    goto LAB_0002a63c;
  case 0x47:
LAB_0002a63c:
    __src = *(uint **)(param_2 + 8);
    sdp_set_seq_len(iVar10,uVar3);
LAB_0002a554:
    puVar4 = (uint *)0x0;
    puVar5 = (uint *)0x0;
    goto LAB_0002a55c;
  }
  puVar5 = (uint *)0x0;
LAB_0002a664:
  puVar4 = (uint *)0x0;
  __src = puVar4;
LAB_0002a55c:
  if (__src == (uint *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = ((uint)puVar5 | (uint)puVar4) ^ 1;
  }
  if ((uVar6 != 0) && (param_1[1] + uVar3 <= (uint)param_1[2])) {
    memcpy((void *)(*param_1 + param_1[1]),__src,uVar3);
    param_1[1] = param_1[1] + uVar3;
  }
  if (local_2c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar8 + uVar3);
  }
  return;
}



/* ===== FUN_0002a70c @ 0002a70c size=420 ===== */

int FUN_0002a70c(int *param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  switch(*param_2) {
  case 8:
    return 1;
  case 9:
    return 2;
  case 10:
    return 4;
  case 0xb:
    return 8;
  case 0xc:
    return 0x10;
  case 0xd:
    break;
  case 0xe:
    break;
  case 0xf:
    break;
  case 0x10:
    return 1;
  case 0x11:
    return 2;
  case 0x12:
    return 4;
  case 0x13:
    return 8;
  case 0x14:
    return 0x10;
  case 0x15:
    break;
  case 0x16:
    break;
  case 0x17:
    break;
  case 0x18:
    break;
  case 0x19:
    return 2;
  case 0x1a:
    return 4;
  case 0x1b:
    break;
  case 0x1c:
    return 0x10;
  case 0x1d:
    break;
  case 0x1e:
    break;
  case 0x1f:
    break;
  case 0x20:
    break;
  case 0x21:
    break;
  case 0x22:
    break;
  case 0x23:
    break;
  case 0x24:
    break;
  case 0x25:
    goto LAB_0002a848;
  case 0x26:
    goto LAB_0002a848;
  case 0x27:
    goto LAB_0002a848;
  case 0x28:
    return 1;
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
    break;
  case 0x32:
    break;
  case 0x33:
    break;
  case 0x34:
    break;
  case 0x35:
    goto LAB_0002a854;
  case 0x36:
    goto LAB_0002a854;
  case 0x37:
    goto LAB_0002a854;
  case 0x38:
    break;
  case 0x39:
    break;
  case 0x3a:
    break;
  case 0x3b:
    break;
  case 0x3c:
    break;
  case 0x3d:
    goto LAB_0002a854;
  case 0x3e:
    goto LAB_0002a854;
  case 0x3f:
LAB_0002a854:
    iVar3 = 0;
    for (iVar2 = *(int *)(param_2 + 8); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
      if (*param_1 == 0) {
        iVar1 = FUN_0002a864(param_1,iVar2);
      }
      else {
        iVar1 = sdp_gen_pdu();
      }
      iVar3 = iVar3 + iVar1;
    }
    return iVar3;
  case 0x40:
    break;
  case 0x41:
    break;
  case 0x42:
    break;
  case 0x43:
    break;
  case 0x44:
    break;
  case 0x45:
    goto LAB_0002a848;
  case 0x46:
    goto LAB_0002a848;
  case 0x47:
LAB_0002a848:
    return *(int *)(param_2 + 0x24) + -1;
  }
  return 0;
}



/* ===== FUN_0002a864 @ 0002a864 size=152 ===== */

int FUN_0002a864(int param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 8);
  cVar1 = *param_2;
  if ((iVar4 == 0) && (cVar1 == '\0')) {
    *(undefined4 *)(param_1 + 8) = 2;
  }
  uVar2 = (uint)(byte)(cVar1 - 0x25);
  if (uVar2 < 0x23) {
    iVar3 = (int)*(char *)(DAT_0002a8fc + uVar2 + 0x2a8cd);
  }
  else {
    iVar3 = 1;
  }
  *(int *)(param_1 + 8) = iVar3 + *(int *)(param_1 + 8) + 3;
  iVar3 = FUN_0002a70c(param_1,param_2);
  uVar2 = iVar3 + *(int *)(param_1 + 8);
  *(uint *)(param_1 + 8) = uVar2;
  if ((0xff < uVar2) && (*param_2 == '5')) {
    *(uint *)(param_1 + 8) = uVar2 + 1;
  }
  return *(int *)(param_1 + 8) - iVar4;
}



/* ===== sdp_gen_record_pdu @ 0002a910 size=112 ===== */

undefined4 sdp_gen_record_pdu(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_00029e34(*(undefined4 *)(param_1 + 8),DAT_0002a980 + 0x2a93c,param_2);
  iVar2 = bt_malloc0(param_2[2]);
  *param_2 = iVar2;
  iVar1 = DAT_0002a984;
  if (iVar2 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 8);
    param_2[1] = 0;
    FUN_00029e34(uVar3,iVar1 + 0x2a970,param_2);
    return 0;
  }
  return 0xfffffff4;
}



/* ===== sdp_extract_seqtype @ 0002a988 size=228 ===== */

undefined4 sdp_extract_seqtype(byte *param_1,int param_2,byte *param_3,uint *param_4)

{
  byte bVar1;
  char *__fmt;
  int iVar2;
  uint uVar3;
  
  if (0 < param_2) {
    bVar1 = *param_1;
    *param_3 = bVar1;
    uVar3 = bVar1 - 0x35 & 0xff;
    if (10 < uVar3) {
LAB_0002aa54:
      __fmt = (char *)(DAT_0002aa78 + 0x2aa68);
      iVar2 = DAT_0002aa74 + 0x2aaa0;
      goto LAB_0002a9a8;
    }
    uVar3 = 1 << uVar3;
    if ((uVar3 & 0x404) == 0) {
      if ((uVar3 & 0x202) == 0) {
        if ((uVar3 & 0x101) == 0) goto LAB_0002aa54;
        if (param_2 != 1) {
          *param_4 = (uint)param_1[1];
          return 2;
        }
      }
      else if (1 < param_2 - 1U) {
        *param_4 = (*(ushort *)(param_1 + 1) & 0xff) << 8 | (uint)(*(ushort *)(param_1 + 1) >> 8);
        return 3;
      }
    }
    else if (3 < param_2 - 1U) {
      uVar3 = *(uint *)(param_1 + 1);
      *param_4 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
                 uVar3 >> 0x18;
      return 5;
    }
  }
  __fmt = (char *)(DAT_0002aa70 + 0x2a9a8);
  iVar2 = DAT_0002aa6c + 0x2a9e0;
LAB_0002a9a8:
  syslog(3,__fmt,iVar2);
  return 0;
}



/* ===== sdp_data_get @ 0002aa7c size=132 ===== */

void sdp_data_get(int param_1,undefined2 param_2)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 auStack_40 [2];
  undefined2 local_3e;
  int local_14;
  
  piVar5 = *(int **)(DAT_0002ab00 + 0x2aa8c + DAT_0002ab04);
  local_14 = *piVar5;
  uVar4 = 0;
  uVar1 = local_3e;
  if (param_1 != 0) {
    local_3e = param_2;
    for (piVar3 = *(int **)(param_1 + 8); uVar4 = 0, piVar3 != (int *)0x0; piVar3 = (int *)*piVar3)
    {
      iVar2 = sdp_attrid_comp_func(piVar3[1],auStack_40);
      uVar1 = local_3e;
      if (iVar2 == 0) {
        uVar4 = piVar3[1];
        break;
      }
    }
  }
  local_3e = uVar1;
  if (local_14 != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}



/* ===== sdp_record_print @ 0002ab08 size=176 ===== */

void sdp_record_print(undefined4 param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)sdp_data_get(param_1,0x100);
  if ((pbVar1 != (byte *)0x0) && (*pbVar1 - 0x25 < 3)) {
    printf((char *)(DAT_0002abb8 + 0x2ab44),*(undefined4 *)(pbVar1 + 0x24),
           *(undefined4 *)(pbVar1 + 8));
  }
  pbVar1 = (byte *)sdp_data_get(param_1,0x101);
  if ((pbVar1 != (byte *)0x0) && (*pbVar1 - 0x25 < 3)) {
    printf((char *)(DAT_0002abbc + 0x2ab7c),*(undefined4 *)(pbVar1 + 0x24),
           *(undefined4 *)(pbVar1 + 8));
  }
  pbVar1 = (byte *)sdp_data_get(param_1,0x102);
  if (pbVar1 == (byte *)0x0) {
    return;
  }
  if (2 < *pbVar1 - 0x25) {
    return;
  }
  printf((char *)((int)&DAT_0002abb8 + DAT_0002abc0),*(undefined4 *)(pbVar1 + 0x24),
         *(undefined4 *)(pbVar1 + 8));
  return;
}



/* ===== sdp_send_req_w4_rsp @ 0002abc4 size=140 ===== */

undefined4
sdp_send_req_w4_rsp(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0002a028(param_1,param_2,param_4);
  if (iVar1 < 0) {
    syslog(3,(char *)(DAT_0002ac54 + 0x2abfc),DAT_0002ac50 + 0x2ac48);
  }
  else {
    iVar1 = FUN_0002a074(param_1,param_3);
    if (-1 < iVar1) {
      if ((iVar1 != 0) && (*(short *)(param_2 + 1) == *(short *)(param_3 + 1))) {
        *param_5 = iVar1;
        return 0;
      }
      piVar2 = __errno_location();
      *piVar2 = 0x47;
    }
  }
  return 0xffffffff;
}



/* ===== sdp_list_append @ 0002ac58 size=84 ===== */

undefined4 * sdp_list_append(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = malloc(8);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar1[1] = param_2;
  *puVar1 = 0;
  puVar2 = param_1;
  if (param_1 != (undefined4 *)0x0) {
    do {
      puVar3 = puVar2;
      puVar2 = (undefined4 *)*puVar3;
    } while (puVar2 != (undefined4 *)0x0);
    *puVar3 = puVar1;
    return param_1;
  }
  return puVar1;
}



/* ===== sdp_list_remove @ 0002adc4 size=80 ===== */

undefined4 * sdp_list_remove(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *__ptr;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)0x0;
  __ptr = param_1;
  if (param_1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  do {
    puVar2 = (undefined4 *)*__ptr;
    if (__ptr[1] == param_2) {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = puVar2;
        puVar2 = param_1;
      }
      free(__ptr);
      return puVar2;
    }
    puVar1 = __ptr;
    __ptr = puVar2;
  } while (puVar2 != (undefined4 *)0x0);
  return param_1;
}



/* ===== sdp_attr_remove @ 0002ae14 size=68 ===== */

void sdp_attr_remove(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = sdp_data_get();
  if (iVar1 != 0) {
    uVar2 = sdp_list_remove(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = uVar2;
  }
  if (param_2 != 1) {
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  return;
}



/* ===== sdp_list_insert_sorted @ 0002ae58 size=112 ===== */

undefined4 * sdp_list_insert_sorted(undefined4 *param_1,undefined4 param_2,code *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar2 = malloc(8);
  puVar4 = puVar2;
  if (puVar2 != (void *)0x0) {
    puVar2[1] = param_2;
    puVar1 = param_1;
    puVar6 = (undefined4 *)0x0;
    while ((puVar5 = puVar1, puVar5 != (undefined4 *)0x0 &&
           (iVar3 = (*param_3)(puVar5[1],param_2), iVar3 < 0))) {
      puVar1 = (undefined4 *)*puVar5;
      puVar6 = puVar5;
    }
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = puVar2;
      puVar4 = param_1;
    }
    *puVar2 = puVar5;
  }
  return puVar4;
}



/* ===== sdp_attr_add @ 0002aec8 size=108 ===== */

undefined4 sdp_attr_add(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar1 = DAT_0002af34;
  iVar5 = param_1;
  iVar3 = sdp_data_get();
  iVar2 = DAT_0002af38;
  if (iVar3 == 0) {
    *(short *)(param_3 + 2) = (short)param_2;
    uVar4 = *(undefined4 *)(iVar1 + 0x2aee8 + iVar2);
    uVar4 = sdp_list_insert_sorted(*(undefined4 *)(param_1 + 8),param_3,uVar4,uVar4,iVar5,uVar4);
    *(undefined4 *)(param_1 + 8) = uVar4;
    if (param_2 == 1) {
      FUN_00029f04(param_3,param_1 + 0xc);
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



/* ===== sdp_attr_replace @ 0002af3c size=136 ===== */

void sdp_attr_replace(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_0002afc4 + 0x2af50;
  if (param_1 != 0) {
    iVar4 = param_1;
    iVar1 = sdp_data_get();
    if (iVar1 != 0) {
      uVar2 = sdp_list_remove(*(undefined4 *)(param_1 + 8),iVar1);
      *(undefined4 *)(param_1 + 8) = uVar2;
      sdp_data_free(iVar1);
    }
    iVar1 = DAT_0002afc8;
    *(short *)(param_3 + 2) = (short)param_2;
    uVar2 = *(undefined4 *)(iVar3 + iVar1);
    uVar2 = sdp_list_insert_sorted(*(undefined4 *)(param_1 + 8),param_3,uVar2,uVar2,iVar4,uVar2);
    *(undefined4 *)(param_1 + 8) = uVar2;
    if (param_2 == 1) {
      FUN_00029f04(param_3,param_1 + 0xc);
      return;
    }
  }
  return;
}



/* ===== sdp_get_access_protos @ 0002afcc size=16 ===== */

/* WARNING: Removing unreachable block (ram,0x0002acf0) */
/* WARNING: Removing unreachable block (ram,0x0002acfc) */
/* WARNING: Removing unreachable block (ram,0x0002ad00) */

undefined4
sdp_get_access_protos(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 uVar7;
  
  uVar7 = 4;
  iVar6 = DAT_0002adbc + 0x2accc;
  pbVar1 = (byte *)sdp_data_get(param_1,4,param_2,param_4,4,param_1);
  if (pbVar1 == (byte *)0x0) {
    piVar2 = __errno_location();
    iVar6 = 0x3d;
LAB_0002acdc:
    *piVar2 = iVar6;
    uVar7 = 0xffffffff;
  }
  else {
    uVar4 = 0;
    for (; pbVar1 != (byte *)0x0; pbVar1 = *(byte **)(pbVar1 + 0x20)) {
      if (2 < (*pbVar1 & 0xfffffff7) - 0x35) {
LAB_0002ad80:
        uVar3 = *(undefined4 *)(iVar6 + DAT_0002adc0);
        FUN_00029e34(uVar4,uVar3,0,uVar3,uVar7,uVar3);
        sdp_list_free(uVar4,0);
        piVar2 = __errno_location();
        iVar6 = 0x16;
        goto LAB_0002acdc;
      }
      uVar3 = 0;
      for (pbVar5 = *(byte **)(pbVar1 + 8); pbVar5 != (byte *)0x0;
          pbVar5 = *(byte **)(pbVar5 + 0x20)) {
        if (2 < *pbVar5 - 0x35) {
          sdp_list_free(uVar3,0);
          goto LAB_0002ad80;
        }
        uVar3 = sdp_list_append(uVar3,*(undefined4 *)(pbVar5 + 8));
      }
      uVar4 = sdp_list_append(uVar4,uVar3);
    }
    *param_2 = uVar4;
    uVar7 = 0;
  }
  return uVar7;
}



/* ===== sdp_get_add_access_protos @ 0002afdc size=288 ===== */

undefined4
sdp_get_add_access_protos
          (undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 uVar7;
  
  uVar7 = 0xd;
  iVar6 = DAT_0002adbc + 0x2accc;
  pbVar1 = (byte *)sdp_data_get(param_1,0xd,param_2,param_4,0xd,param_1);
  if (pbVar1 == (byte *)0x0) {
    piVar2 = __errno_location();
    iVar6 = 0x3d;
  }
  else {
    if (*pbVar1 - 0x35 < 3) {
      pbVar1 = *(byte **)(pbVar1 + 8);
      uVar4 = 0;
      while( true ) {
        if (pbVar1 == (byte *)0x0) {
          *param_2 = uVar4;
          return 0;
        }
        if (2 < (*pbVar1 & 0xfffffff7) - 0x35) break;
        uVar3 = 0;
        for (pbVar5 = *(byte **)(pbVar1 + 8); pbVar5 != (byte *)0x0;
            pbVar5 = *(byte **)(pbVar5 + 0x20)) {
          if (2 < *pbVar5 - 0x35) {
            sdp_list_free(uVar3,0);
            goto LAB_0002ad80;
          }
          uVar3 = sdp_list_append(uVar3,*(undefined4 *)(pbVar5 + 8));
        }
        uVar4 = sdp_list_append(uVar4,uVar3);
        pbVar1 = *(byte **)(pbVar1 + 0x20);
      }
LAB_0002ad80:
      uVar3 = *(undefined4 *)(iVar6 + DAT_0002adc0);
      FUN_00029e34(uVar4,uVar3,0,uVar3,uVar7,uVar3);
      sdp_list_free(uVar4,0);
    }
    piVar2 = __errno_location();
    iVar6 = 0x16;
  }
  *piVar2 = iVar6;
  return 0xffffffff;
}



/* ===== sdp_get_uuidseq_attr @ 0002afec size=212 ===== */

undefined4 sdp_get_uuidseq_attr(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar1 = DAT_0002b0c0;
  pbVar2 = (byte *)sdp_data_get();
  *param_3 = 0;
  if ((pbVar2 == (byte *)0x0) || (2 < *pbVar2 - 0x35)) {
LAB_0002b024:
    sdp_list_free(*param_3,*(undefined4 *)(iVar1 + 0x2b00c + DAT_0002b0c4));
    uVar3 = 0xffffffff;
    *param_3 = 0;
  }
  else {
    pbVar2 = *(byte **)(pbVar2 + 8);
    while (pbVar2 != (byte *)0x0) {
      uVar3 = *param_3;
      if (3 < *pbVar2 - 0x19) {
        piVar4 = __errno_location();
        *piVar4 = 0x16;
        goto LAB_0002b024;
      }
      puVar5 = malloc(0x14);
      if (puVar5 == (undefined4 *)0x0) goto LAB_0002b024;
      uVar6 = *(undefined4 *)(pbVar2 + 0xc);
      uVar7 = *(undefined4 *)(pbVar2 + 0x10);
      uVar8 = *(undefined4 *)(pbVar2 + 0x14);
      *puVar5 = *(undefined4 *)(pbVar2 + 8);
      puVar5[1] = uVar6;
      puVar5[2] = uVar7;
      puVar5[3] = uVar8;
      uVar6 = *(undefined4 *)(pbVar2 + 0x18);
      puVar5[4] = uVar6;
      uVar3 = sdp_list_append(uVar3,puVar5,uVar7,uVar6,param_1,param_2);
      pbVar2 = *(byte **)(pbVar2 + 0x20);
      *param_3 = uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== sdp_get_lang_attr @ 0002b0c8 size=300 ===== */

undefined4 sdp_get_lang_attr(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  byte *pbVar1;
  int *piVar2;
  undefined2 *puVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 uVar8;
  
  *param_2 = 0;
  iVar4 = DAT_0002b1f4;
  pbVar1 = (byte *)sdp_data_get(param_1,6,param_3,0,param_1,param_2);
  if (pbVar1 == (byte *)0x0) {
    piVar2 = __errno_location();
    iVar4 = 0x3d;
  }
  else {
    if (*pbVar1 - 0x35 < 3) {
      pcVar5 = *(char **)(pbVar1 + 8);
      while( true ) {
        if (pcVar5 == (char *)0x0) {
          return 0;
        }
        uVar8 = *param_2;
        if ((((*pcVar5 != '\t') || (pcVar7 = *(char **)(pcVar5 + 0x20), pcVar7 == (char *)0x0)) ||
            (pcVar6 = *(char **)(pcVar7 + 0x20), pcVar6 == (char *)0x0)) ||
           ((*pcVar7 != '\t' || (*pcVar6 != '\t')))) break;
        puVar3 = malloc(6);
        if (puVar3 == (undefined2 *)0x0) {
          sdp_list_free(uVar8,*(undefined4 *)(iVar4 + 0x2b0f0 + DAT_0002b1f8));
          *param_2 = 0;
          return 0xffffffff;
        }
        *puVar3 = *(undefined2 *)(pcVar5 + 8);
        puVar3[1] = *(undefined2 *)(pcVar7 + 8);
        puVar3[2] = *(undefined2 *)(pcVar6 + 8);
        uVar8 = sdp_list_append(uVar8,puVar3);
        pcVar5 = *(char **)(pcVar6 + 0x20);
        *param_2 = uVar8;
      }
    }
    sdp_list_free(*param_2,*(undefined4 *)(iVar4 + 0x2b0f0 + DAT_0002b1f8));
    *param_2 = 0;
    piVar2 = __errno_location();
    iVar4 = 0x16;
  }
  *piVar2 = iVar4;
  return 0xffffffff;
}



/* ===== sdp_get_profile_descs @ 0002b1fc size=392 ===== */

undefined4 sdp_get_profile_descs(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  byte bVar1;
  byte *pbVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  char *pcVar10;
  undefined4 uVar11;
  byte *pbVar12;
  undefined2 uVar13;
  undefined4 uVar14;
  bool bVar15;
  
  *param_2 = 0;
  iVar7 = DAT_0002b384;
  pbVar2 = (byte *)sdp_data_get(param_1,9,param_3,0,param_1,param_2);
  if (pbVar2 == (byte *)0x0) {
    piVar3 = __errno_location();
    iVar7 = 0x3d;
  }
  else {
    if ((*pbVar2 - 0x35 < 3) && (pbVar2 = *(byte **)(pbVar2 + 8), pbVar2 != (byte *)0x0)) {
      do {
        uVar8 = (uint)*pbVar2;
        bVar15 = 0x1b < uVar8;
        if (uVar8 != 0x1c) {
          bVar15 = uVar8 != 0x19;
        }
        if (bVar15 && (uVar8 != 0x1c && uVar8 != 0x1a)) {
          if ((2 < uVar8 - 0x35) || (pbVar9 = *(byte **)(pbVar2 + 8), pbVar9 == (byte *)0x0)) break;
          bVar1 = *pbVar9;
          bVar15 = 0x1b < bVar1;
          if (bVar1 != 0x1c) {
            bVar15 = bVar1 != 0x19;
          }
          if (bVar15 && (bVar1 != 0x1c && bVar1 != 0x1a)) break;
          pbVar12 = pbVar9 + 8;
          pcVar10 = *(char **)(pbVar9 + 0x20);
          if ((pcVar10 == (char *)0x0) || (*pcVar10 != '\t')) break;
          uVar13 = *(undefined2 *)(pcVar10 + 8);
        }
        else {
          pbVar9 = *(byte **)(pbVar2 + 0x20);
          pbVar12 = pbVar2 + 8;
          if ((pbVar9 == (byte *)0x0) || (*pbVar9 != 9)) {
            uVar13 = 0x100;
          }
          else {
            uVar13 = *(undefined2 *)(pbVar9 + 8);
            pbVar2 = pbVar9;
          }
        }
        puVar4 = malloc(0x18);
        uVar14 = *param_2;
        if (puVar4 == (undefined4 *)0x0) {
          sdp_list_free(uVar14,*(undefined4 *)(iVar7 + 0x2b224 + DAT_0002b388));
          *param_2 = 0;
          return 0xffffffff;
        }
        uVar5 = *(undefined4 *)(pbVar12 + 4);
        uVar6 = *(undefined4 *)(pbVar12 + 8);
        uVar11 = *(undefined4 *)(pbVar12 + 0xc);
        *puVar4 = *(undefined4 *)pbVar12;
        puVar4[1] = uVar5;
        puVar4[2] = uVar6;
        puVar4[3] = uVar11;
        puVar4[4] = *(undefined4 *)(pbVar12 + 0x10);
        *(undefined2 *)(puVar4 + 5) = uVar13;
        uVar14 = sdp_list_append(uVar14,puVar4);
        pbVar2 = *(byte **)(pbVar2 + 0x20);
        *param_2 = uVar14;
        if (pbVar2 == (byte *)0x0) {
          return 0;
        }
      } while( true );
    }
    sdp_list_free(*param_2,*(undefined4 *)(iVar7 + 0x2b224 + DAT_0002b388));
    *param_2 = 0;
    piVar3 = __errno_location();
    iVar7 = 0x16;
  }
  *piVar3 = iVar7;
  return 0xffffffff;
}



/* ===== sdp_get_server_ver @ 0002b38c size=160 ===== */

undefined4 sdp_get_server_ver(undefined4 param_1,undefined4 *param_2)

{
  byte *pbVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  
  *param_2 = 0;
  pbVar1 = (byte *)sdp_data_get(param_1,0x200);
  if (pbVar1 == (byte *)0x0) {
    piVar2 = __errno_location();
    iVar4 = 0x3d;
  }
  else {
    if ((*pbVar1 - 0x35 < 3) && (pcVar5 = *(char **)(pbVar1 + 8), pcVar5 != (char *)0x0)) {
      while( true ) {
        if (*pcVar5 != '\t') break;
        uVar3 = sdp_list_append(*param_2,pcVar5 + 8);
        pcVar5 = *(char **)(pcVar5 + 0x20);
        *param_2 = uVar3;
        if (pcVar5 == (char *)0x0) {
          return 0;
        }
      }
    }
    sdp_list_free(*param_2,0);
    *param_2 = 0;
    piVar2 = __errno_location();
    iVar4 = 0x16;
  }
  *piVar2 = iVar4;
  return 0xffffffff;
}



/* ===== sdp_get_int_attr @ 0002b42c size=80 ===== */

undefined4 sdp_get_int_attr(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  byte bVar1;
  byte *pbVar2;
  int *piVar3;
  byte bVar4;
  bool bVar5;
  
  pbVar2 = (byte *)sdp_data_get();
  if (pbVar2 != (byte *)0x0) {
    bVar1 = *pbVar2;
    bVar4 = bVar1 - 8 & 0xf7;
    bVar5 = 0x27 < bVar1;
    if (bVar1 != 0x28) {
      bVar5 = 1 < bVar4;
    }
    if (!bVar5 || (bVar1 == 0x28 || bVar4 == 2)) {
      *param_3 = *(undefined4 *)(pbVar2 + 8);
      return 0;
    }
  }
  piVar3 = __errno_location();
  *piVar3 = 0x16;
  return 0xffffffff;
}



/* ===== sdp_get_string_attr @ 0002b47c size=100 ===== */

undefined4 sdp_get_string_attr(undefined4 param_1,undefined4 param_2,char *param_3,int param_4)

{
  byte *pbVar1;
  size_t sVar2;
  int *piVar3;
  char *__s;
  
  pbVar1 = (byte *)sdp_data_get();
  if ((pbVar1 != (byte *)0x0) && (*pbVar1 - 0x25 < 3)) {
    __s = *(char **)(pbVar1 + 8);
    sVar2 = strlen(__s);
    if ((int)sVar2 < param_4) {
      strcpy(param_3,__s);
      return 0;
    }
  }
  piVar3 = __errno_location();
  *piVar3 = 0x16;
  return 0xffffffff;
}



/* ===== sdp_get_service_id @ 0002b4e0 size=76 ===== */

undefined4 sdp_get_service_id(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = sdp_data_get(param_1,3);
  if (iVar1 != 0) {
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    uVar4 = *(undefined4 *)(iVar1 + 0x10);
    uVar5 = *(undefined4 *)(iVar1 + 0x14);
    *param_2 = *(undefined4 *)(iVar1 + 8);
    param_2[1] = uVar3;
    param_2[2] = uVar4;
    param_2[3] = uVar5;
    param_2[4] = *(undefined4 *)(iVar1 + 0x18);
    return 0;
  }
  piVar2 = __errno_location();
  *piVar2 = 0x16;
  return 0xffffffff;
}



/* ===== sdp_get_group_id @ 0002b52c size=76 ===== */

undefined4 sdp_get_group_id(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = sdp_data_get(param_1,0x200);
  if (iVar1 != 0) {
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    uVar4 = *(undefined4 *)(iVar1 + 0x10);
    uVar5 = *(undefined4 *)(iVar1 + 0x14);
    *param_2 = *(undefined4 *)(iVar1 + 8);
    param_2[1] = uVar3;
    param_2[2] = uVar4;
    param_2[3] = uVar5;
    param_2[4] = *(undefined4 *)(iVar1 + 0x18);
    return 0;
  }
  piVar2 = __errno_location();
  *piVar2 = 0x16;
  return 0xffffffff;
}



/* ===== sdp_get_record_state @ 0002b578 size=60 ===== */

undefined4 sdp_get_record_state(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = sdp_data_get(param_1,2);
  if (iVar1 != 0) {
    *param_2 = *(undefined4 *)(iVar1 + 8);
    return 0;
  }
  piVar2 = __errno_location();
  *piVar2 = 0x16;
  return 0xffffffff;
}



/* ===== sdp_get_service_avail @ 0002b5b4 size=60 ===== */

undefined4 sdp_get_service_avail(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = sdp_data_get(param_1,8);
  if (iVar1 != 0) {
    *param_2 = *(undefined1 *)(iVar1 + 8);
    return 0;
  }
  piVar2 = __errno_location();
  *piVar2 = 0x16;
  return 0xffffffff;
}



/* ===== sdp_get_service_ttl @ 0002b5f0 size=60 ===== */

undefined4 sdp_get_service_ttl(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = sdp_data_get(param_1,7);
  if (iVar1 != 0) {
    *param_2 = *(undefined4 *)(iVar1 + 8);
    return 0;
  }
  piVar2 = __errno_location();
  *piVar2 = 0x16;
  return 0xffffffff;
}



/* ===== sdp_get_database_state @ 0002b62c size=60 ===== */

undefined4 sdp_get_database_state(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = sdp_data_get(param_1,0x201);
  if (iVar1 != 0) {
    *param_2 = *(undefined4 *)(iVar1 + 8);
    return 0;
  }
  piVar2 = __errno_location();
  *piVar2 = 0x16;
  return 0xffffffff;
}



/* ===== sdp_uuid16_create @ 0002b668 size=32 ===== */

void sdp_uuid16_create(undefined4 *param_1,undefined2 param_2)

{
  *param_1 = 0;
  param_1[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[3] = 0;
  param_1[4] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined2 *)(param_1 + 1) = param_2;
  *(undefined1 *)param_1 = 0x19;
  return;
}



/* ===== sdp_uuid32_create @ 0002b688 size=32 ===== */

void sdp_uuid32_create(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  param_1[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[3] = 0;
  param_1[4] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[1] = param_2;
  *(undefined1 *)param_1 = 0x1a;
  return;
}



/* ===== sdp_uuid128_create @ 0002b6a8 size=52 ===== */

void sdp_uuid128_create(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  param_1[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[3] = 0;
  param_1[4] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined1 *)param_1 = 0x1c;
  puVar1 = param_2;
  do {
    param_1 = param_1 + 1;
    puVar2 = puVar1 + 1;
    *param_1 = *puVar1;
    puVar1 = puVar2;
  } while (puVar2 != param_2 + 4);
  return;
}



/* ===== sdp_data_alloc_with_length @ 0002b6dc size=792 ===== */

undefined1 * sdp_data_alloc_with_length(uint param_1,undefined4 *param_2,uint param_3)

{
  int *piVar1;
  undefined1 *__ptr;
  void *__dest;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  __ptr = (undefined1 *)bt_malloc0(0x28);
  if (__ptr == (undefined1 *)0x0) {
    return (undefined1 *)0x0;
  }
  *__ptr = (char)param_1;
  *(undefined4 *)(__ptr + 0x24) = 1;
  switch(param_1) {
  case 0:
    return __ptr;
  case 1:
    break;
  case 2:
    break;
  case 3:
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
    uVar2 = *(undefined1 *)param_2;
    goto LAB_0002b838;
  case 9:
    goto LAB_0002b854;
  case 10:
    goto LAB_0002b86c;
  case 0xb:
    goto LAB_0002b87c;
  case 0xc:
    puVar4 = (undefined4 *)(__ptr + 8);
    puVar7 = param_2;
    do {
      puVar6 = puVar7 + 1;
      *puVar4 = *puVar7;
      puVar4 = puVar4 + 1;
      puVar7 = puVar6;
    } while (puVar6 != param_2 + 4);
    goto LAB_0002b8a8;
  case 0xd:
    break;
  case 0xe:
    break;
  case 0xf:
    break;
  case 0x10:
    goto LAB_0002b84c;
  case 0x11:
LAB_0002b854:
    *(undefined2 *)(__ptr + 8) = *(undefined2 *)param_2;
    iVar3 = 3;
    goto LAB_0002b840;
  case 0x12:
LAB_0002b86c:
    *(undefined4 *)(__ptr + 8) = *param_2;
    iVar3 = 5;
    goto LAB_0002b840;
  case 0x13:
LAB_0002b87c:
    uVar5 = param_2[1];
    *(undefined4 *)(__ptr + 8) = *param_2;
    *(undefined4 *)(__ptr + 0xc) = uVar5;
    iVar3 = 9;
    goto LAB_0002b840;
  case 0x14:
    puVar4 = (undefined4 *)(__ptr + 8);
    puVar7 = param_2;
    do {
      puVar6 = puVar7 + 1;
      *puVar4 = *puVar7;
      puVar4 = puVar4 + 1;
      puVar7 = puVar6;
    } while (puVar6 != param_2 + 4);
LAB_0002b8a8:
    iVar3 = 0x11;
    goto LAB_0002b840;
  case 0x15:
    break;
  case 0x16:
    break;
  case 0x17:
    break;
  case 0x18:
    break;
  case 0x19:
    sdp_uuid16_create(__ptr + 8,*(undefined2 *)param_2);
    iVar3 = *(int *)(__ptr + 0x24) + 2;
    goto LAB_0002b840;
  case 0x1a:
    sdp_uuid32_create(__ptr + 8,*param_2);
    iVar3 = *(int *)(__ptr + 0x24) + 4;
    goto LAB_0002b840;
  case 0x1b:
    break;
  case 0x1c:
    sdp_uuid128_create(__ptr + 8,param_2);
    iVar3 = *(int *)(__ptr + 0x24) + 0x10;
    goto LAB_0002b840;
  case 0x1d:
    break;
  case 0x1e:
    break;
  case 0x1f:
    break;
  case 0x20:
    break;
  case 0x21:
    break;
  case 0x22:
    break;
  case 0x23:
    break;
  case 0x24:
    break;
  case 0x25:
    goto LAB_0002b914;
  case 0x26:
    goto LAB_0002b914;
  case 0x27:
    goto LAB_0002b984;
  case 0x28:
LAB_0002b84c:
    uVar2 = *(undefined1 *)param_2;
LAB_0002b838:
    __ptr[8] = uVar2;
    iVar3 = 2;
LAB_0002b840:
    *(int *)(__ptr + 0x24) = iVar3;
    return __ptr;
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
    break;
  case 0x32:
    break;
  case 0x33:
    break;
  case 0x34:
    break;
  case 0x35:
    goto LAB_0002b9a4;
  case 0x36:
    goto LAB_0002b9a4;
  case 0x37:
    goto LAB_0002b9a4;
  case 0x38:
    break;
  case 0x39:
    break;
  case 0x3a:
    break;
  case 0x3b:
    break;
  case 0x3c:
    break;
  case 0x3d:
    goto LAB_0002b9a4;
  case 0x3e:
    goto LAB_0002b9a4;
  case 0x3f:
LAB_0002b9a4:
    param_1 = param_1 & 0xf7;
    if (param_1 == 0x35) {
      uVar5 = 2;
    }
    else if (param_1 == 0x36) {
      uVar5 = 3;
    }
    else {
      if (param_1 != 0x37) goto LAB_0002b9d0;
      uVar5 = 5;
    }
    *(undefined4 *)(__ptr + 0x24) = uVar5;
LAB_0002b9d0:
    *(undefined4 **)(__ptr + 8) = param_2;
    while (param_2 != (undefined4 *)0x0) {
      piVar1 = param_2 + 9;
      param_2 = (undefined4 *)param_2[8];
      *(int *)(__ptr + 0x24) = *(int *)(__ptr + 0x24) + *piVar1;
    }
    return __ptr;
  case 0x40:
    break;
  case 0x41:
    break;
  case 0x42:
    break;
  case 0x43:
    break;
  case 0x44:
    break;
  case 0x45:
    goto LAB_0002b914;
  case 0x46:
LAB_0002b914:
    if (param_2 != (undefined4 *)0x0) {
      *(uint *)(__ptr + 0x24) = param_3 + 1;
      if (param_3 < 0x10000) {
        __dest = malloc(param_3);
        *(void **)(__ptr + 8) = __dest;
        if (__dest != (void *)0x0) {
          memcpy(__dest,param_2,param_3);
          return __ptr;
        }
      }
      else {
        syslog(3,(char *)(DAT_0002b9f8 + 0x2b97c),DAT_0002b9f4 + 0x2b9dc);
      }
    }
    break;
  case 0x47:
LAB_0002b984:
    syslog(3,(char *)(DAT_0002ba00 + 0x2b99c),(int)&DAT_0002b9fc + DAT_0002b9fc);
    return __ptr;
  }
  free(__ptr);
  return (undefined1 *)0x0;
}



/* ===== sdp_data_alloc @ 0002ba04 size=80 ===== */

void sdp_data_alloc(uint param_1,char *param_2)

{
  size_t sVar1;
  
  if ((param_1 < 0x25) || ((0x26 < param_1 && (1 < param_1 - 0x45)))) {
    sVar1 = 0;
  }
  else {
    if (param_2 == (char *)0x0) {
      return;
    }
    sVar1 = strlen(param_2);
  }
  sdp_data_alloc_with_length(param_1,param_2,sVar1);
  return;
}



/* ===== sdp_seq_alloc @ 0002ba54 size=124 ===== */

undefined4 sdp_seq_alloc(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0;
  iVar3 = 0;
  iVar1 = 0;
  while( true ) {
    iVar6 = iVar1;
    iVar5 = iVar3;
    if (param_3 <= iVar4) {
      uVar2 = sdp_data_alloc(0x35,iVar6);
      return uVar2;
    }
    iVar3 = *(int *)(param_2 + iVar4 * 4);
    if (10 < **(byte **)(param_1 + iVar4 * 4) - 0x35) {
      iVar3 = sdp_data_alloc();
    }
    if (iVar3 == 0) break;
    iVar4 = iVar4 + 1;
    iVar1 = iVar3;
    if (iVar5 != 0) {
      *(int *)(iVar5 + 0x20) = iVar3;
      iVar1 = iVar6;
    }
  }
  return 0;
}



/* ===== sdp_set_lang_attr @ 0002bad0 size=292 ===== */

void sdp_set_lang_attr(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  int *__ptr;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int extraout_r3;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  
  iVar8 = 0;
  piVar9 = *(int **)(DAT_0002bbf4 + 0x2bae4 + DAT_0002bbf8);
  iVar4 = *piVar9;
  uVar7 = CONCAT13(9,(int3)param_1);
  for (piVar1 = param_2; piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
    iVar8 = iVar8 + 1;
  }
  piVar1 = malloc(iVar8 * 0xc);
  if (piVar1 != (int *)0x0) {
    __ptr = malloc(iVar8 * 0xc);
    if (__ptr != (int *)0x0) {
      piVar2 = piVar1;
      piVar3 = __ptr;
      iVar6 = extraout_r3;
      for (; param_2 != (undefined4 *)0x0; param_2 = (undefined4 *)*param_2) {
        iVar5 = param_2[1];
        if (iVar5 == 0) {
          uVar7 = 0xffffffff;
          goto LAB_0002bbc4;
        }
        *piVar3 = iVar5;
        *piVar2 = (int)&stack0xffffffdb;
        iVar6 = iVar5 + 4;
        piVar2[1] = (int)&stack0xffffffdb;
        piVar3[1] = iVar5 + 2;
        piVar2[2] = (int)&stack0xffffffdb;
        piVar3[2] = iVar6;
        piVar2 = piVar2 + 3;
        piVar3 = piVar3 + 3;
      }
      uVar7 = sdp_seq_alloc(piVar1,__ptr,iVar8 * 3,iVar6,uVar7);
      sdp_attr_add(param_1,6,uVar7);
      uVar7 = 0;
LAB_0002bbc4:
      free(piVar1);
      free(__ptr);
      goto LAB_0002bbd4;
    }
    free(piVar1);
  }
  uVar7 = 0xffffffff;
LAB_0002bbd4:
  if (iVar4 == *piVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}



/* ===== FUN_0002bbfc @ 0002bbfc size=388 ===== */

void FUN_0002bbfc(void *param_1,int *param_2,byte param_3)

{
  void *__ptr;
  void *__ptr_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  byte local_31;
  void *local_30;
  size_t sStack_2c;
  size_t local_28;
  int local_24;
  
  iVar7 = 0;
  piVar8 = *(int **)(DAT_0002bd80 + 0x2bc1c + DAT_0002bd84);
  local_24 = *piVar8;
  for (piVar5 = param_2; piVar5 != (int *)0x0; piVar5 = (int *)*piVar5) {
    iVar7 = iVar7 + 1;
  }
  local_31 = param_3;
  __ptr = malloc(iVar7 << 2);
  if (__ptr != (void *)0x0) {
    __ptr_00 = malloc(iVar7 << 2);
    if (__ptr_00 != (void *)0x0) {
      uVar2 = (uint)local_31;
      iVar4 = uVar2 - 0x19;
      bVar11 = 0x1b < uVar2;
      bVar9 = uVar2 == 0x1c;
      if (!bVar9) {
        bVar11 = iVar4 != 0;
      }
      bVar10 = iVar4 == 1;
      if (!bVar11 || (bVar9 || bVar10)) {
        iVar4 = 1;
      }
      iVar3 = 0;
      if (bVar11 && (!bVar9 && !bVar10)) {
        iVar4 = 0;
      }
      for (; iVar3 != iVar7; iVar3 = iVar3 + 1) {
        iVar1 = param_2[1];
        *(byte **)((int)__ptr + iVar3 * 4) = &local_31;
        if (iVar4 != 0) {
          iVar1 = iVar1 + 4;
        }
        *(int *)((int)__ptr_00 + iVar3 * 4) = iVar1;
        param_2 = (int *)*param_2;
      }
      iVar7 = sdp_seq_alloc(__ptr,__ptr_00);
      if (iVar7 != 0) {
        local_30 = (void *)0x0;
        sStack_2c = 0;
        local_28 = 0;
        FUN_0002a864(&local_30,iVar7);
        local_30 = malloc(local_28);
        if (local_30 != (void *)0x0) {
          uVar6 = sdp_gen_pdu(&local_30,iVar7);
          memcpy(param_1,local_30,sStack_2c);
          sdp_data_free(iVar7);
          free(__ptr);
          free(__ptr_00);
          free(local_30);
          goto LAB_0002bd60;
        }
        sdp_data_free(iVar7);
      }
      free(__ptr);
      __ptr = __ptr_00;
    }
    free(__ptr);
  }
  uVar6 = 0xfffffff4;
LAB_0002bd60:
  if (local_24 == *piVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}



/* ===== FUN_0002bd88 @ 0002bd88 size=12 ===== */

void FUN_0002bd88(undefined4 param_1,int param_2)

{
  FUN_0002bbfc(param_1,param_2,**(undefined1 **)(param_2 + 4));
  return;
}



/* ===== sdp_attr_add_new @ 0002bd94 size=60 ===== */

undefined4
sdp_attr_add_new(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = sdp_data_alloc(param_3,param_4);
  if (iVar1 != 0) {
    sdp_attr_replace(param_1,param_2);
    return 0;
  }
  return 0xffffffff;
}



/* ===== sdp_set_info_attr @ 0002bdd0 size=96 ===== */

void sdp_set_info_attr(undefined4 param_1,int param_2,int param_3,int param_4)

{
  if (param_2 != 0) {
    sdp_attr_add_new(param_1,0x100,0x25);
  }
  if (param_3 != 0) {
    sdp_attr_add_new(param_1,0x102,0x25,param_3);
  }
  if (param_4 == 0) {
    return;
  }
  sdp_attr_add_new(param_1,0x101,0x25,param_4);
  return;
}



/* ===== sdp_set_url_attr @ 0002be30 size=76 ===== */

void sdp_set_url_attr(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sdp_attr_add_new(param_1,0xb,0x45,param_2);
  sdp_attr_add_new(param_1,10,0x45,param_3);
  sdp_attr_add_new(param_1,0xc,0x45,param_4);
  return;
}



/* ===== sdp_seq_alloc_with_length @ 0002be7c size=132 ===== */

undefined4 sdp_seq_alloc_with_length(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = 0;
  iVar4 = 0;
  iVar1 = 0;
  while( true ) {
    iVar7 = iVar1;
    iVar6 = iVar4;
    if (param_4 <= iVar5) {
      uVar2 = sdp_data_alloc(0x35,iVar7);
      return uVar2;
    }
    iVar4 = *(int *)(param_2 + iVar5 * 4);
    uVar3 = (uint)**(byte **)(param_1 + iVar5 * 4);
    if (10 < uVar3 - 0x35) {
      iVar4 = sdp_data_alloc_with_length(uVar3,iVar4,*(undefined4 *)(param_3 + iVar5 * 4));
    }
    if (iVar4 == 0) break;
    iVar5 = iVar5 + 1;
    iVar1 = iVar4;
    if (iVar6 != 0) {
      *(int *)(iVar6 + 0x20) = iVar4;
      iVar1 = iVar7;
    }
  }
  return 0;
}



/* ===== FUN_0002bf00 @ 0002bf00 size=248 ===== */

byte * FUN_0002bf00(byte *param_1,int *param_2)

{
  undefined4 uVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  
  uVar3 = (uint)*param_1;
  if (uVar3 < 0x28) {
    if (0x24 < uVar3) {
LAB_0002bfd4:
      pbVar5 = *(byte **)(param_1 + 8);
      if (param_2 != (int *)0x0) {
        *param_2 = *(int *)(param_1 + 0x24) + -1;
        return pbVar5;
      }
      return pbVar5;
    }
    if (uVar3 < 0x15) {
      if ((0xf < uVar3) || (uVar3 - 8 < 5)) {
LAB_0002bfec:
        return param_1 + 8;
      }
    }
    else if ((0x18 < uVar3) && ((uVar3 < 0x1b || (uVar3 == 0x1c)))) {
      return param_1 + 0xc;
    }
  }
  else {
    if (uVar3 < 0x40) {
      if (uVar3 < 0x3d) {
        if (uVar3 == 0x28) goto LAB_0002bfec;
        if (2 < uVar3 - 0x35) {
          return (byte *)0x0;
        }
      }
      pbVar5 = (byte *)0x0;
      pbVar7 = (byte *)0x0;
      for (puVar6 = *(undefined1 **)(param_1 + 8); puVar6 != (undefined1 *)0x0;
          puVar6 = *(undefined1 **)(puVar6 + 0x20)) {
        uVar1 = FUN_0002bf00(puVar6,0);
        pbVar2 = (byte *)sdp_data_alloc_with_length(*puVar6,uVar1,*(undefined4 *)(puVar6 + 0x24));
        pbVar4 = pbVar2;
        if (pbVar7 != (byte *)0x0) {
          *(byte **)(pbVar7 + 0x20) = pbVar2;
          pbVar4 = pbVar5;
        }
        pbVar5 = pbVar4;
        pbVar7 = pbVar2;
      }
      return pbVar5;
    }
    if (uVar3 - 0x45 < 3) goto LAB_0002bfd4;
  }
  return (byte *)0x0;
}



/* ===== sdp_uuid_extract @ 0002c098 size=328 ===== */

undefined4 sdp_uuid_extract(byte *param_1,int param_2,undefined4 param_3,int *param_4)

{
  byte bVar1;
  char *__fmt;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  if (param_2 < 1) {
    __fmt = (char *)(DAT_0002c1e4 + 0x2c0b8);
    iVar3 = DAT_0002c1e0 + 0x2c133;
  }
  else {
    bVar1 = *param_1;
    bVar4 = 0x1b < bVar1;
    if (bVar1 != 0x1c) {
      bVar4 = bVar1 != 0x19;
    }
    if (bVar4 && (bVar1 != 0x1c && bVar1 != 0x1a)) {
      syslog(3,(char *)(DAT_0002c1ec + 0x2c100),DAT_0002c1e8 + 0x2c17b);
      return 0xffffffff;
    }
    uVar2 = param_2 - 1;
    *param_4 = *param_4 + 1;
    if (bVar1 == 0x19) {
      if (1 < uVar2) {
        sdp_uuid16_create(param_3,*(ushort *)(param_1 + 1) << 8 | *(ushort *)(param_1 + 1) >> 8);
        iVar3 = *param_4 + 2;
        goto LAB_0002c164;
      }
      __fmt = (char *)(DAT_0002c1f4 + 0x2c148);
      iVar3 = DAT_0002c1f0 + 0x2c1c3;
    }
    else if (bVar1 == 0x1a) {
      if (3 < uVar2) {
        uVar2 = *(uint *)(param_1 + 1);
        sdp_uuid32_create(param_3,uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 |
                                  (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18);
        iVar3 = *param_4 + 4;
LAB_0002c164:
        *param_4 = iVar3;
        return 0;
      }
      __fmt = (char *)(DAT_0002c1fc + 0x2c190);
      iVar3 = DAT_0002c1f8 + 0x2c20b;
    }
    else {
      if (0xf < uVar2) {
        sdp_uuid128_create(param_3,param_1 + 1);
        iVar3 = *param_4 + 0x10;
        goto LAB_0002c164;
      }
      __fmt = (char *)(DAT_0002c204 + 0x2c1c8);
      iVar3 = DAT_0002c200 + 0x2c243;
    }
  }
  syslog(3,__fmt,iVar3);
  return 0xffffffff;
}



/* ===== sdp_uuid16_cmp @ 0002c208 size=16 ===== */

void sdp_uuid16_cmp(int param_1,int param_2)

{
  memcmp((void *)(param_1 + 4),(void *)(param_2 + 4),2);
  return;
}



/* ===== sdp_uuid16_to_uuid128 @ 0002c218 size=104 ===== */

void sdp_uuid16_to_uuid128(undefined1 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)(param_1 + 4);
  puVar2 = (undefined4 *)(DAT_0002c280 + 0x2c2cc);
  puVar3 = (undefined4 *)(DAT_0002c280 + 0x2c2bc);
  do {
    puVar4 = puVar3 + 2;
    uVar1 = puVar3[1];
    *puVar5 = *puVar3;
    puVar5[1] = uVar1;
    puVar5 = puVar5 + 2;
    puVar3 = puVar4;
  } while (puVar4 != puVar2);
  *param_1 = 0x1c;
  *(ushort *)(param_1 + 6) =
       *(short *)(DAT_0002c284 + 0x2c306) +
       (*(ushort *)(param_2 + 4) << 8 | *(ushort *)(param_2 + 4) >> 8);
  return;
}



/* ===== sdp_uuid32_to_uuid128 @ 0002c288 size=104 ===== */

void sdp_uuid32_to_uuid128(undefined1 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)(param_1 + 4);
  puVar2 = (undefined4 *)(DAT_0002c2f0 + 0x2c33c);
  puVar3 = (undefined4 *)(DAT_0002c2f0 + 0x2c32c);
  do {
    puVar4 = puVar3 + 2;
    uVar1 = puVar3[1];
    *puVar6 = *puVar3;
    puVar6[1] = uVar1;
    puVar6 = puVar6 + 2;
    puVar3 = puVar4;
  } while (puVar4 != puVar2);
  *param_1 = 0x1c;
  uVar5 = *(uint *)(param_2 + 4);
  *(uint *)(param_1 + 4) =
       *(int *)(DAT_0002c2f4 + 0x2c374) +
       (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18);
  return;
}



/* ===== sdp_uuid_to_uuid128 @ 0002c2f8 size=108 ===== */

undefined4 * sdp_uuid_to_uuid128(char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar2 = (undefined4 *)bt_malloc0(0x14);
  if (puVar2 != (undefined4 *)0x0) {
    cVar1 = *param_1;
    if (cVar1 == '\x1a') {
      sdp_uuid32_to_uuid128(puVar2,param_1);
    }
    else if (cVar1 == '\x1c') {
      uVar3 = *(undefined4 *)(param_1 + 4);
      uVar4 = *(undefined4 *)(param_1 + 8);
      uVar5 = *(undefined4 *)(param_1 + 0xc);
      *puVar2 = *(undefined4 *)param_1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar2[4] = *(undefined4 *)(param_1 + 0x10);
    }
    else if (cVar1 == '\x19') {
      sdp_uuid16_to_uuid128(puVar2,param_1);
    }
  }
  return puVar2;
}



/* ===== sdp_uuid_cmp @ 0002c364 size=68 ===== */

undefined4 sdp_uuid_cmp(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = sdp_uuid_to_uuid128();
  uVar2 = sdp_uuid_to_uuid128(param_2);
  uVar3 = sdp_uuid128_cmp(uVar1,uVar2);
  bt_free(uVar1);
  bt_free(uVar2);
  return uVar3;
}



/* ===== sdp_uuid128_to_uuid @ 0002c3a8 size=120 ===== */

undefined4 sdp_uuid128_to_uuid(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  
  if (*param_1 != '\x1c') {
    return 1;
  }
  pcVar1 = param_1 + 8;
  pcVar3 = (char *)(DAT_0002c420 + 0x2c45c);
  do {
    pcVar2 = pcVar1 + 1;
    if (*pcVar3 != *pcVar1) {
      return 0;
    }
    pcVar1 = pcVar2;
    pcVar3 = pcVar3 + 1;
  } while (pcVar2 != param_1 + 0x14);
  uVar4 = *(uint *)(param_1 + 4);
  uVar4 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18;
  if (uVar4 < 0x10000) {
    *(short *)(param_1 + 4) = (short)uVar4;
    *param_1 = '\x19';
  }
  else {
    *param_1 = '\x1a';
    *(uint *)(param_1 + 4) = uVar4;
  }
  return 1;
}



/* ===== sdp_proto_uuid2strn @ 0002c5c0 size=24 ===== */

void sdp_proto_uuid2strn(char *param_1,char *param_2,size_t param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int *piVar8;
  char acStack_30 [4];
  uint auStack_2c [5];
  
  iVar4 = (int)&DAT_0002c5d8 + DAT_0002c5d8;
  pcVar5 = acStack_30;
  piVar8 = *(int **)(DAT_0002c59c + 0x2c444 + DAT_0002c5a0);
  auStack_2c[4] = *piVar8;
  if (param_1 == (char *)0x0) {
    snprintf(param_2,param_3,(char *)(DAT_0002c5a4 + 0x2c468));
    uVar2 = 0xfffffffe;
    goto LAB_0002c46c;
  }
  cVar1 = *param_1;
  if (cVar1 == '\x1a') {
    iVar4 = FUN_00029e60(iVar4,*(undefined4 *)(param_1 + 4));
    pcVar5 = (char *)(DAT_0002c5ac + 0x2c4dc);
  }
  else if (cVar1 == '\x1c') {
    pcVar6 = param_1;
    do {
      pcVar7 = pcVar6 + 8;
      uVar2 = *(undefined4 *)(pcVar6 + 4);
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar6;
      *(undefined4 *)((int)pcVar5 + 4) = uVar2;
      pcVar5 = (char *)((int)pcVar5 + 8);
      pcVar6 = pcVar7;
    } while (pcVar7 != param_1 + 0x10);
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar7;
    iVar3 = sdp_uuid128_to_uuid(acStack_30);
    if (iVar3 == 0) {
      iVar4 = DAT_0002c5b8 + 0x2c578;
    }
    else {
      if (acStack_30[0] == '\x19') {
        auStack_2c[0] = auStack_2c[0] & 0xffff;
      }
      else if (acStack_30[0] != '\x1a') {
        iVar4 = DAT_0002c5b0 + 0x2c548;
        goto LAB_0002c544;
      }
      iVar4 = FUN_00029e60(iVar4,auStack_2c[0]);
    }
LAB_0002c544:
    pcVar5 = (char *)(DAT_0002c5b4 + 0x2c554);
  }
  else {
    if (cVar1 != '\x19') {
      snprintf(param_2,param_3,(char *)(DAT_0002c5bc + 0x2c58c));
      uVar2 = 0xffffffff;
      goto LAB_0002c46c;
    }
    iVar4 = FUN_00029e60(iVar4,*(undefined2 *)(param_1 + 4));
    pcVar5 = (char *)(DAT_0002c5a8 + 0x2c4b4);
  }
  snprintf(param_2,param_3,pcVar5,iVar4);
  uVar2 = 0;
LAB_0002c46c:
  if (auStack_2c[4] == *piVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



/* ===== sdp_svclass_uuid2strn @ 0002c5dc size=404 ===== */

void sdp_svclass_uuid2strn(char *param_1,char *param_2,size_t param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int *piVar8;
  char local_30 [4];
  uint local_2c [5];
  
  iVar4 = DAT_0002c5f8 + 0x2c6c4;
  pcVar5 = local_30;
  piVar8 = *(int **)(DAT_0002c59c + 0x2c444 + DAT_0002c5a0);
  local_2c[4] = *piVar8;
  if (param_1 == (char *)0x0) {
    snprintf(param_2,param_3,(char *)(DAT_0002c5a4 + 0x2c468));
    uVar2 = 0xfffffffe;
    goto LAB_0002c46c;
  }
  cVar1 = *param_1;
  if (cVar1 == '\x1a') {
    iVar4 = FUN_00029e60(iVar4,*(undefined4 *)(param_1 + 4));
    pcVar5 = (char *)(DAT_0002c5ac + 0x2c4dc);
  }
  else if (cVar1 == '\x1c') {
    pcVar6 = param_1;
    do {
      pcVar7 = pcVar6 + 8;
      uVar2 = *(undefined4 *)(pcVar6 + 4);
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar6;
      *(undefined4 *)((int)pcVar5 + 4) = uVar2;
      pcVar5 = (char *)((int)pcVar5 + 8);
      pcVar6 = pcVar7;
    } while (pcVar7 != param_1 + 0x10);
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar7;
    iVar3 = sdp_uuid128_to_uuid(local_30);
    if (iVar3 == 0) {
      iVar4 = DAT_0002c5b8 + 0x2c578;
    }
    else {
      if (local_30[0] == '\x19') {
        local_2c[0] = local_2c[0] & 0xffff;
      }
      else if (local_30[0] != '\x1a') {
        iVar4 = DAT_0002c5b0 + 0x2c548;
        goto LAB_0002c544;
      }
      iVar4 = FUN_00029e60(iVar4,local_2c[0]);
    }
LAB_0002c544:
    pcVar5 = (char *)(DAT_0002c5b4 + 0x2c554);
  }
  else {
    if (cVar1 != '\x19') {
      snprintf(param_2,param_3,(char *)(DAT_0002c5bc + 0x2c58c));
      uVar2 = 0xffffffff;
      goto LAB_0002c46c;
    }
    iVar4 = FUN_00029e60(iVar4,*(undefined2 *)(param_1 + 4));
    pcVar5 = (char *)(DAT_0002c5a8 + 0x2c4b4);
  }
  snprintf(param_2,param_3,pcVar5,iVar4);
  uVar2 = 0;
LAB_0002c46c:
  if (local_2c[4] == *piVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



/* ===== sdp_profile_uuid2strn @ 0002c5fc size=4 ===== */

void sdp_profile_uuid2strn(char *param_1,char *param_2,size_t param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int *piVar8;
  char acStack_30 [4];
  uint auStack_2c [5];
  
  iVar4 = DAT_0002c5f8 + 0x2c6c4;
  pcVar5 = acStack_30;
  piVar8 = *(int **)(DAT_0002c59c + 0x2c444 + DAT_0002c5a0);
  auStack_2c[4] = *piVar8;
  if (param_1 == (char *)0x0) {
    snprintf(param_2,param_3,(char *)(DAT_0002c5a4 + 0x2c468));
    uVar2 = 0xfffffffe;
    goto LAB_0002c46c;
  }
  cVar1 = *param_1;
  if (cVar1 == '\x1a') {
    iVar4 = FUN_00029e60(iVar4,*(undefined4 *)(param_1 + 4));
    pcVar5 = (char *)(DAT_0002c5ac + 0x2c4dc);
  }
  else if (cVar1 == '\x1c') {
    pcVar6 = param_1;
    do {
      pcVar7 = pcVar6 + 8;
      uVar2 = *(undefined4 *)(pcVar6 + 4);
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar6;
      *(undefined4 *)((int)pcVar5 + 4) = uVar2;
      pcVar5 = (char *)((int)pcVar5 + 8);
      pcVar6 = pcVar7;
    } while (pcVar7 != param_1 + 0x10);
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar7;
    iVar3 = sdp_uuid128_to_uuid(acStack_30);
    if (iVar3 == 0) {
      iVar4 = DAT_0002c5b8 + 0x2c578;
    }
    else {
      if (acStack_30[0] == '\x19') {
        auStack_2c[0] = auStack_2c[0] & 0xffff;
      }
      else if (acStack_30[0] != '\x1a') {
        iVar4 = DAT_0002c5b0 + 0x2c548;
        goto LAB_0002c544;
      }
      iVar4 = FUN_00029e60(iVar4,auStack_2c[0]);
    }
LAB_0002c544:
    pcVar5 = (char *)(DAT_0002c5b4 + 0x2c554);
  }
  else {
    if (cVar1 != '\x19') {
      snprintf(param_2,param_3,(char *)(DAT_0002c5bc + 0x2c58c));
      uVar2 = 0xffffffff;
      goto LAB_0002c46c;
    }
    iVar4 = FUN_00029e60(iVar4,*(undefined2 *)(param_1 + 4));
    pcVar5 = (char *)(DAT_0002c5a8 + 0x2c4b4);
  }
  snprintf(param_2,param_3,pcVar5,iVar4);
  uVar2 = 0;
LAB_0002c46c:
  if (auStack_2c[4] == *piVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



/* ===== sdp_uuid_to_proto @ 0002c600 size=128 ===== */

void sdp_uuid_to_proto(uint *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint local_20;
  uint local_1c;
  uint uStack_18;
  uint uStack_14;
  uint local_10;
  int local_c;
  
  piVar3 = *(int **)(DAT_0002c680 + 0x2c610 + DAT_0002c684);
  local_c = *piVar3;
  local_20 = *param_1;
  local_1c = param_1[1];
  uStack_18 = param_1[2];
  uStack_14 = param_1[3];
  local_10 = param_1[4];
  iVar1 = sdp_uuid128_to_uuid(&local_20);
  uVar2 = 0;
  if (iVar1 != 0) {
    if ((local_20 & 0xff) == 0x19) {
      uVar2 = local_1c & 0xffff;
    }
    else {
      uVar2 = local_1c;
      if ((local_20 & 0xff) != 0x1a) {
        uVar2 = 0;
      }
    }
  }
  if (local_c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/* ===== sdp_get_proto_port @ 0002c688 size=192 ===== */

uint sdp_get_proto_port(undefined4 *param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  byte *pbVar6;
  bool bVar7;
  
  if (param_2 != 0x100 && param_2 != 3) {
    piVar2 = __errno_location();
    *piVar2 = 0x16;
    return 0xffffffff;
  }
  do {
    if (param_1 == (undefined4 *)0x0) {
      return 0;
    }
    for (piVar2 = (int *)param_1[1]; piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
      pbVar6 = (byte *)piVar2[1];
      if ((pbVar6 != (byte *)0x0) && (*(int *)(pbVar6 + 0x20) != 0)) {
        bVar1 = *pbVar6;
        bVar7 = 0x1b < bVar1;
        if (bVar1 != 0x1c) {
          bVar7 = bVar1 != 0x19;
        }
        if ((!bVar7 || (bVar1 == 0x1c || bVar1 == 0x1a)) &&
           (iVar3 = sdp_uuid_to_proto(pbVar6 + 8), param_2 == iVar3)) {
          pcVar5 = *(char **)(pbVar6 + 0x20);
          if (*pcVar5 == '\b') {
            uVar4 = (uint)(byte)pcVar5[8];
          }
          else {
            if (*pcVar5 != '\t') goto LAB_0002c728;
            uVar4 = (uint)*(ushort *)(pcVar5 + 8);
          }
          if (uVar4 != 0) {
            return uVar4;
          }
        }
      }
LAB_0002c728:
    }
    param_1 = (undefined4 *)*param_1;
  } while( true );
}



/* ===== sdp_get_proto_desc @ 0002c748 size=96 ===== */

undefined4 sdp_get_proto_desc(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  bool bVar5;
  
  do {
    if (param_1 == (int *)0x0) {
      return 0;
    }
    for (piVar3 = (int *)param_1[1]; piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
      pbVar4 = (byte *)piVar3[1];
      bVar1 = *pbVar4;
      bVar5 = 0x1b < bVar1;
      if (bVar1 != 0x1c) {
        bVar5 = bVar1 != 0x19;
      }
      if ((!bVar5 || (bVar1 == 0x1c || bVar1 == 0x1a)) &&
         (iVar2 = sdp_uuid_to_proto(pbVar4 + 8), iVar2 == param_2)) {
        return *(undefined4 *)(pbVar4 + 0x20);
      }
    }
    param_1 = (int *)*param_1;
  } while( true );
}



/* ===== sdp_append_to_buf @ 0002c7a8 size=280 ===== */

void sdp_append_to_buf(int *param_1,void *param_2,size_t param_3)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  
  if ((uint)param_1[2] < param_1[1] + param_3) {
    syslog(3,(char *)(DAT_0002c8c4 + 0x2c7d8),DAT_0002c8c0 + 0x2c874);
    return;
  }
  pcVar4 = (char *)*param_1;
  if (*pcVar4 == '\0' && param_1[1] == 0) {
    *pcVar4 = '5';
    param_1[1] = param_1[1] + 2;
  }
  memcpy((void *)(*param_1 + param_1[1]),param_2,param_3);
  pcVar2 = (char *)*param_1;
  uVar3 = param_3 + param_1[1];
  param_1[1] = uVar3;
  if (0xff < uVar3 && *pcVar2 == '5') {
    memmove(pcVar2 + 3,pcVar2 + 2,uVar3 - 2);
    *pcVar4 = '6';
    param_1[1] = param_1[1] + 1;
  }
  cVar1 = *pcVar4;
  if (cVar1 == '6') {
    *(ushort *)(pcVar4 + 1) =
         (ushort)((param_1[1] - 3U & 0xff) << 8) | (ushort)(param_1[1] - 3U >> 8) & 0xff;
    return;
  }
  if (cVar1 == '7') {
    uVar3 = param_1[1] - 5;
    *(uint *)(pcVar4 + 1) =
         uVar3 * 0x1000000 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
         uVar3 >> 0x18;
    return;
  }
  if (cVar1 == '5') {
    pcVar4[1] = (char)param_1[1] + -2;
  }
  return;
}



/* ===== sdp_append_to_pdu @ 0002c8c8 size=156 ===== */

void sdp_append_to_pdu(undefined4 param_1,int param_2)

{
  int *piVar1;
  void *local_28;
  undefined4 uStack_24;
  size_t local_20;
  int local_1c;
  
  piVar1 = *(int **)(DAT_0002c964 + 0x2c8d8 + DAT_0002c968);
  local_1c = *piVar1;
  local_28 = (void *)0x0;
  uStack_24 = 0;
  local_20 = 0;
  FUN_0002a864(&local_28);
  local_28 = malloc(local_20);
  if (local_28 != (void *)0x0) {
    sdp_set_attrid(&local_28,*(undefined2 *)(param_2 + 2));
    sdp_gen_pdu(&local_28,param_2);
    sdp_append_to_buf(param_1,local_28,uStack_24);
    free(local_28);
  }
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== sdp_device_record_update_binary @ 0002c97c size=8 ===== */

undefined4 sdp_device_record_update_binary(void)

{
  return 0xffffffff;
}



/* ===== sdp_record_alloc @ 0002c984 size=28 ===== */

void sdp_record_alloc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)bt_malloc0(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0xffffffff;
  }
  return;
}



/* ===== sdp_copy_record @ 0002c9a0 size=96 ===== */

undefined4 * sdp_copy_record(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar2 = (undefined4 *)sdp_record_alloc();
  iVar1 = DAT_0002ca00;
  *puVar2 = *param_1;
  FUN_00029e34(param_1[1],iVar1 + 0x2c9c8,puVar2);
  FUN_00029e34(param_1[2],DAT_0002ca04 + 0x2c9e0,puVar2);
  uVar3 = param_1[4];
  uVar4 = param_1[5];
  uVar5 = param_1[6];
  puVar2[3] = param_1[3];
  puVar2[4] = uVar3;
  puVar2[5] = uVar4;
  puVar2[6] = uVar5;
  puVar2[7] = param_1[7];
  return puVar2;
}



/* ===== sdp_record_free @ 0002ca08 size=80 ===== */

void sdp_record_free(void *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_0002ca58 + 0x2ca20;
  uVar1 = *(undefined4 *)(iVar2 + DAT_0002ca5c);
  sdp_list_free(*(undefined4 *)((int)param_1 + 8),uVar1,param_3,uVar1,param_1,uVar1,param_3);
  sdp_list_free(*(undefined4 *)((int)param_1 + 4),*(undefined4 *)(iVar2 + DAT_0002ca60));
  free(param_1);
  return;
}



/* ===== sdp_pattern_add_uuid @ 0002ca64 size=120 ===== */

void sdp_pattern_add_uuid(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  
  iVar1 = DAT_0002cadc;
  iVar6 = param_1;
  uVar2 = sdp_uuid_to_uuid128(param_2);
  piVar5 = *(int **)(param_1 + 4);
  while( true ) {
    if (piVar5 == (int *)0x0) {
      uVar4 = *(undefined4 *)(iVar1 + 0x2ca88 + DAT_0002cae0);
      uVar2 = sdp_list_insert_sorted
                        (*(undefined4 *)(param_1 + 4),uVar2,uVar4,uVar4,iVar6,uVar4,param_3);
      *(undefined4 *)(param_1 + 4) = uVar2;
      return;
    }
    iVar3 = sdp_uuid128_cmp(piVar5[1],uVar2);
    if (iVar3 == 0) break;
    piVar5 = (int *)*piVar5;
  }
  bt_free(uVar2);
  return;
}



/* ===== sdp_extract_attr @ 0002cae4 size=1368 ===== */

void sdp_extract_attr(byte *param_1,int param_2,int *param_3,int param_4)

{
  byte bVar1;
  void *__dest;
  int iVar2;
  int iVar3;
  char *__fmt;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  byte *__ptr;
  byte *__src;
  size_t __n;
  bool bVar8;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  __ptr = (byte *)0x0;
  piVar5 = *(int **)(DAT_0002d03c + 0x2cb04 + DAT_0002d040);
  local_38 = 0;
  local_2c = *piVar5;
  if (param_2 < 1) {
    syslog(3,(char *)(DAT_0002d048 + 0x2cb38),DAT_0002d044 + 0x2cbe6);
    goto LAB_0002cb3c;
  }
  uVar6 = (uint)*param_1;
  if (uVar6 < 0x28) {
    if (uVar6 < 0x25) {
      if (uVar6 < 0x15) {
        if (((uVar6 < 0x10) && (uVar6 != 0)) && (4 < uVar6 - 8)) goto LAB_0002cc24;
LAB_0002cb94:
        __ptr = (byte *)bt_malloc0(0x28);
        if (__ptr == (byte *)0x0) goto LAB_0002cd34;
        bVar1 = *param_1;
        uVar6 = param_2 - 1;
        *__ptr = bVar1;
        iVar3 = local_38 + 1;
        if (bVar1 == 0xc) {
LAB_0002ce40:
          if (0xf < uVar6) {
            local_38 = local_38 + 0x11;
            FUN_00029e18(param_1 + 1,__ptr + 8);
            iVar3 = local_38;
            goto LAB_0002cd9c;
          }
          __fmt = (char *)(DAT_0002d088 + 0x2ce5c);
          iVar4 = DAT_0002d084 + 0x2cf1b;
          local_38 = iVar3;
          goto LAB_0002cc00;
        }
        if (0xc < bVar1) {
          if (bVar1 == 0x12) {
LAB_0002cdc8:
            if (3 < uVar6) {
              uVar6 = *(uint *)(param_1 + 1);
              *(uint *)(__ptr + 8) =
                   uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                   uVar6 >> 0x18;
              iVar3 = local_38 + 5;
              goto LAB_0002cd9c;
            }
            __fmt = (char *)(DAT_0002d078 + 0x2cde4);
            iVar4 = DAT_0002d074 + 0x2cea3;
            local_38 = iVar3;
            goto LAB_0002cc00;
          }
          if (0x12 < bVar1) {
            if (bVar1 != 0x14) {
              if (bVar1 < 0x14) goto LAB_0002ce00;
              bVar8 = bVar1 == 0x28;
              goto LAB_0002cbe0;
            }
            goto LAB_0002ce40;
          }
          if (bVar1 == 0x10) goto LAB_0002cbe4;
          if (bVar1 != 0x11) goto LAB_0002cd2c;
LAB_0002cd58:
          if (1 < uVar6) {
            *(ushort *)(__ptr + 8) = *(ushort *)(param_1 + 1) << 8 | *(ushort *)(param_1 + 1) >> 8;
            iVar3 = local_38 + 3;
            goto LAB_0002cd9c;
          }
          __fmt = (char *)(DAT_0002d070 + 0x2cd74);
          iVar4 = DAT_0002d06c + 0x2ce33;
          local_38 = iVar3;
          goto LAB_0002cc00;
        }
        if (bVar1 == 9) goto LAB_0002cd58;
        if (bVar1 < 10) {
          if (bVar1 == 0) goto LAB_0002cd9c;
          bVar8 = bVar1 == 8;
LAB_0002cbe0:
          if (bVar8) {
LAB_0002cbe4:
            if (param_2 != 1) {
              __ptr[8] = param_1[1];
              iVar3 = local_38 + 2;
              goto LAB_0002cd9c;
            }
            __fmt = (char *)(DAT_0002d050 + 0x2cc00);
            iVar4 = DAT_0002d04c + 0x2ccbf;
            local_38 = iVar3;
            goto LAB_0002cc00;
          }
        }
        else {
          if (bVar1 == 10) goto LAB_0002cdc8;
          if (bVar1 == 0xb) {
LAB_0002ce00:
            if (7 < uVar6) {
              uVar7 = *(uint *)(param_1 + 1);
              uVar6 = *(uint *)(param_1 + 5);
              *(uint *)(__ptr + 8) =
                   uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                   uVar6 >> 0x18;
              *(uint *)(__ptr + 0xc) =
                   uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                   uVar7 >> 0x18;
              iVar3 = local_38 + 9;
              goto LAB_0002cd9c;
            }
            __fmt = (char *)(DAT_0002d080 + 0x2ce1c);
            iVar4 = DAT_0002d07c + 0x2cedb;
            local_38 = iVar3;
            goto LAB_0002cc00;
          }
        }
        goto LAB_0002cd2c;
      }
      if ((uVar6 < 0x19) || ((0x1a < uVar6 && (uVar6 != 0x1c)))) {
LAB_0002cc24:
        __ptr = (byte *)0x0;
        syslog(3,(char *)(DAT_0002d058 + 0x2cc40),DAT_0002d054 + 0x2ccee);
        goto LAB_0002cb3c;
      }
      __ptr = (byte *)bt_malloc0(0x28);
      if (__ptr != (byte *)0x0) {
        iVar4 = sdp_uuid_extract(param_1,param_2,__ptr + 8,&local_38);
        iVar3 = local_38;
        if (iVar4 < 0) goto LAB_0002cd2c;
        *__ptr = *param_1;
        if (param_4 != 0) {
          sdp_pattern_add_uuid(param_4,__ptr + 8);
          iVar3 = local_38;
        }
        goto LAB_0002cd9c;
      }
    }
    else {
LAB_0002ccc8:
      __ptr = (byte *)bt_malloc0(0x28);
      if (__ptr == (byte *)0x0) goto LAB_0002cd34;
      bVar1 = *param_1;
      *__ptr = bVar1;
      iVar3 = local_38 + 1;
      if (bVar1 == 0x26) {
LAB_0002ced8:
        if (param_2 - 1U < 2) {
          __fmt = (char *)(DAT_0002d090 + 0x2cef4);
          iVar4 = DAT_0002d08c + 0x2cfbf;
          local_38 = iVar3;
        }
        else {
          local_38 = local_38 + 3;
          __src = param_1 + 3;
          __n = (*(ushort *)(param_1 + 1) & 0xff) << 8 | (uint)(*(ushort *)(param_1 + 1) >> 8);
          param_2 = param_2 + -3;
LAB_0002cf2c:
          if (param_2 < (int)__n) {
            __fmt = (char *)(DAT_0002d0a0 + 0x2cf48);
            iVar4 = DAT_0002d09c + 0x2d013;
          }
          else {
            __dest = (void *)bt_malloc0(__n + 1);
            if (__dest != (void *)0x0) {
              memcpy(__dest,__src,__n);
              *(void **)(__ptr + 8) = __dest;
              *(size_t *)(__ptr + 0x24) = __n + 1;
              iVar3 = local_38 + __n;
              goto LAB_0002cd9c;
            }
            __fmt = (char *)(DAT_0002d0a8 + 0x2cf94);
            iVar4 = DAT_0002d0a4 + 0x2d05f;
          }
        }
      }
      else {
        if (bVar1 < 0x27) {
          if (bVar1 == 0x25) {
LAB_0002cef8:
            if (param_2 != 1) {
              __n = (size_t)param_1[1];
              param_2 = param_2 + -2;
              __src = param_1 + 2;
              local_38 = local_38 + 2;
              goto LAB_0002cf2c;
            }
            __fmt = (char *)(DAT_0002d098 + 0x2cf14);
            iVar4 = DAT_0002d094 + 0x2cfdf;
            local_38 = iVar3;
            goto LAB_0002cc00;
          }
        }
        else {
          if (bVar1 == 0x45) goto LAB_0002cef8;
          if (bVar1 == 0x46) goto LAB_0002ced8;
        }
        __fmt = (char *)(DAT_0002d068 + 0x2cd18);
        iVar4 = DAT_0002d064 + 0x2cde3;
        local_38 = iVar3;
      }
LAB_0002cc00:
      syslog(3,__fmt,iVar4);
      iVar3 = local_38;
LAB_0002cd2c:
      local_38 = iVar3;
      free(__ptr);
    }
LAB_0002cd34:
    __ptr = (byte *)0x0;
    iVar3 = local_38;
  }
  else {
    if (0x3f < uVar6) {
      if (2 < uVar6 - 0x45) goto LAB_0002cc24;
      goto LAB_0002ccc8;
    }
    if (uVar6 < 0x3d) {
      if (uVar6 == 0x28) goto LAB_0002cb94;
      if (2 < uVar6 - 0x35) goto LAB_0002cc24;
    }
    __ptr = (byte *)bt_malloc0(0x28);
    iVar3 = local_38;
    if ((__ptr != (byte *)0x0) &&
       (local_38 = sdp_extract_seqtype(param_1,param_2,__ptr,&local_34), iVar3 = local_38,
       local_38 != 0)) {
      if (param_2 < local_38) {
        __fmt = (char *)(DAT_0002d060 + 0x2ccb8);
        iVar4 = DAT_0002d05c + 0x2cd8f;
        goto LAB_0002cc00;
      }
      param_1 = param_1 + local_38;
      param_2 = param_2 - local_38;
      iVar3 = 0;
      for (iVar4 = 0; iVar4 < local_34; iVar4 = iVar4 + local_30) {
        local_30 = 0;
        iVar2 = sdp_extract_attr(param_1,param_2,&local_30,param_4);
        if (iVar2 == 0) break;
        if (iVar3 == 0) {
          *(int *)(__ptr + 8) = iVar2;
        }
        else {
          *(int *)(iVar3 + 0x20) = iVar2;
        }
        param_1 = param_1 + local_30;
        param_2 = param_2 - local_30;
        iVar3 = iVar2;
      }
      iVar3 = local_38 + iVar4;
    }
  }
LAB_0002cd9c:
  local_38 = iVar3;
  *param_3 = *param_3 + local_38;
LAB_0002cb3c:
  if (local_2c == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__ptr);
}



/* ===== sdp_extract_pdu @ 0002d0ac size=344 ===== */

void sdp_extract_pdu(int param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  ushort uVar7;
  bool bVar8;
  undefined1 local_35;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar5 = 0;
  piVar3 = *(int **)(DAT_0002d204 + 0x2d0c0 + DAT_0002d208);
  local_34 = 0;
  local_2c = *piVar3;
  puVar1 = (undefined4 *)sdp_record_alloc();
  iVar2 = sdp_extract_seqtype(param_1,param_2,&local_35,&local_34);
  puVar6 = (undefined1 *)(param_1 + iVar2);
  param_2 = param_2 - iVar2;
  *param_3 = iVar2;
  puVar1[2] = 0;
  while( true ) {
    bVar8 = local_34 == iVar5;
    iVar2 = local_34 - iVar5;
    if (local_34 > iVar5) {
      bVar8 = param_2 == 0;
      iVar2 = param_2;
    }
    if (bVar8 || iVar2 < 0 != (local_34 <= iVar5 && SBORROW4(local_34,iVar5))) goto LAB_0002d154;
    local_30 = 0;
    if (param_2 < 3) break;
    local_35 = *puVar6;
    uVar7 = *(ushort *)(puVar6 + 1) << 8 | *(ushort *)(puVar6 + 1) >> 8;
    iVar2 = sdp_extract_attr(puVar6 + 3,param_2 + -3,&local_30,puVar1);
    iVar4 = local_30 + 3;
    if (iVar2 == 0) goto LAB_0002d154;
    if (uVar7 == 0) {
      *puVar1 = *(undefined4 *)(iVar2 + 8);
    }
    else if (uVar7 == 1) {
      FUN_00029f04(iVar2,puVar1 + 3);
    }
    iVar5 = iVar5 + iVar4;
    puVar6 = puVar6 + iVar4;
    param_2 = param_2 - iVar4;
    sdp_attr_replace(puVar1,uVar7,iVar2);
  }
  syslog(3,(char *)(DAT_0002d210 + 0x2d150),DAT_0002d20c + 0x2d233);
LAB_0002d154:
  *param_3 = *param_3 + local_34;
  if (local_2c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar1);
}



/* ===== FUN_0002d224 @ 0002d224 size=404 ===== */

void FUN_0002d224(undefined4 param_1,undefined4 *param_2)

{
  void *__ptr;
  void *__ptr_00;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  int *piVar10;
  undefined4 local_7c [10];
  undefined4 local_54 [10];
  int local_2c;
  
  piVar5 = *(int **)(DAT_0002d3b8 + 0x2d234 + DAT_0002d3bc);
  iVar7 = 0;
  local_2c = *piVar5;
  for (piVar10 = param_2; piVar10 != (int *)0x0; piVar10 = (int *)*piVar10) {
    iVar7 = iVar7 + 1;
  }
  __ptr = malloc(iVar7 << 2);
  uVar2 = 0;
  if (__ptr != (void *)0x0) {
    __ptr_00 = malloc(iVar7 << 2);
    if (__ptr_00 == (void *)0x0) {
      uVar2 = 0;
      __ptr_00 = __ptr;
    }
    else {
      iVar6 = 0;
      for (; param_2 != (undefined4 *)0x0; param_2 = (undefined4 *)*param_2) {
        pbVar8 = (byte *)0x0;
        uVar4 = 0;
        for (piVar10 = (int *)param_2[1]; piVar10 != (int *)0x0 && uVar4 < 10;
            piVar10 = (int *)*piVar10) {
          pbVar9 = (byte *)piVar10[1];
          local_7c[uVar4] = pbVar9;
          uVar3 = (uint)*pbVar9;
          if (uVar3 < 0x1b) {
            if (uVar3 < 0x19) {
              if (uVar3 - 8 < 2) {
                pbVar9 = pbVar9 + 8;
LAB_0002d398:
                local_54[uVar4] = pbVar9;
              }
            }
            else {
LAB_0002d3a0:
              local_54[uVar4] = pbVar9 + 4;
              pbVar8 = pbVar9;
            }
          }
          else {
            if (uVar3 == 0x1c) goto LAB_0002d3a0;
            if ((0x1b < uVar3) && (uVar3 - 0x35 < 3)) goto LAB_0002d398;
          }
          uVar4 = uVar4 + 1;
        }
        iVar1 = sdp_seq_alloc(local_7c,local_54);
        if (iVar1 != 0) {
          *(int *)((int)__ptr + iVar6 * 4) = iVar1;
          *(int *)((int)__ptr_00 + iVar6 * 4) = iVar1;
          if (pbVar8 != (byte *)0x0) {
            sdp_pattern_add_uuid(param_1,pbVar8);
          }
        }
        iVar6 = iVar6 + 1;
      }
      uVar2 = sdp_seq_alloc(__ptr,__ptr_00,iVar7);
      free(__ptr);
    }
    free(__ptr_00);
  }
  if (local_2c == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



/* ===== sdp_set_access_protos @ 0002d3c0 size=84 ===== */

undefined4 sdp_set_access_protos(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  for (; param_2 != (int *)0x0; param_2 = (int *)*param_2) {
    uVar1 = FUN_0002d224(param_1,param_2[1]);
    uVar2 = sdp_seq_append(uVar2,uVar1);
  }
  sdp_attr_add(param_1,4,uVar2);
  return 0;
}



/* ===== sdp_set_add_access_protos @ 0002d414 size=108 ===== */

undefined4 sdp_set_add_access_protos(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  for (; param_2 != (int *)0x0; param_2 = (int *)*param_2) {
    uVar1 = FUN_0002d224(param_1,param_2[1]);
    iVar2 = sdp_seq_append(iVar2,uVar1);
  }
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = sdp_data_alloc(0x35,iVar2);
  }
  sdp_attr_add(param_1,0xd,uVar1);
  return 0;
}



/* ===== sdp_set_service_id @ 0002d480 size=84 ===== */

void sdp_set_service_id(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar1 = param_2 & 0xff;
  local_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  if (((uVar1 == 0x1a) || (uVar1 == 0x1c)) || (uVar1 == 0x19)) {
    sdp_attr_add_new(param_1,3,uVar1,&uStack_8);
  }
  sdp_pattern_add_uuid(param_1,&local_c);
  return;
}



/* ===== sdp_set_group_id @ 0002d4d4 size=84 ===== */

void sdp_set_group_id(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar1 = param_2 & 0xff;
  local_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  if (((uVar1 == 0x1a) || (uVar1 == 0x1c)) || (uVar1 == 0x19)) {
    sdp_attr_add_new(param_1,0x200,uVar1,&uStack_8);
  }
  sdp_pattern_add_uuid(param_1,&local_c);
  return;
}



/* ===== sdp_set_profile_descs @ 0002d528 size=432 ===== */

void sdp_set_profile_descs(undefined4 param_1,int *param_2)

{
  char cVar1;
  void *__ptr;
  void *__ptr_00;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  char *pcVar6;
  undefined1 *extraout_r3;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 *local_3c;
  undefined1 *local_38;
  char *local_34;
  char *local_30;
  int local_2c;
  
  piVar4 = *(int **)(DAT_0002d6d8 + 0x2d538 + DAT_0002d6dc);
  iVar7 = 0;
  local_2c = *piVar4;
  local_40 = 0x19;
  local_3f = 0x1a;
  local_3e = 0x1c;
  local_3d = 9;
  for (piVar8 = param_2; piVar8 != (int *)0x0; piVar8 = (int *)*piVar8) {
    iVar7 = iVar7 + 1;
  }
  __ptr = malloc(iVar7 << 2);
  if (__ptr != (void *)0x0) {
    __ptr_00 = malloc(iVar7 << 2);
    if (__ptr_00 != (void *)0x0) {
      puVar10 = &local_3f;
      piVar8 = (int *)((int)__ptr + -4);
      piVar9 = (int *)((int)__ptr_00 + -4);
      puVar5 = &local_3e;
      puVar11 = puVar5;
      for (; param_2 != (int *)0x0; param_2 = (int *)*param_2) {
        pcVar6 = (char *)param_2[1];
        if ((pcVar6 == (char *)0x0) ||
           (((cVar1 = *pcVar6, puVar5 = puVar10, cVar1 != '\x1a' &&
             (puVar5 = puVar11, cVar1 != '\x1c')) && (puVar5 = &local_40, cVar1 != '\x19')))) {
LAB_0002d6a0:
          uVar2 = 0xffffffff;
          goto LAB_0002d6a4;
        }
        local_3c = puVar5;
        local_34 = pcVar6 + 4;
        local_38 = &local_3d;
        local_30 = pcVar6 + 0x14;
        iVar3 = sdp_seq_alloc(&local_3c,&local_34,2);
        if (iVar3 == 0) goto LAB_0002d6a0;
        piVar8 = piVar8 + 1;
        *piVar8 = iVar3;
        piVar9 = piVar9 + 1;
        *piVar9 = iVar3;
        sdp_pattern_add_uuid(param_1,pcVar6);
        puVar5 = extraout_r3;
      }
      uVar2 = sdp_seq_alloc(__ptr,__ptr_00,iVar7,puVar5,piVar4,puVar10,puVar11);
      sdp_attr_add(param_1,9,uVar2);
      uVar2 = 0;
LAB_0002d6a4:
      free(__ptr);
      free(__ptr_00);
      goto LAB_0002d6b4;
    }
    free(__ptr);
  }
  uVar2 = 0xffffffff;
LAB_0002d6b4:
  if (local_2c == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



/* ===== sdp_pattern_add_uuidseq @ 0002d6e0 size=40 ===== */

void sdp_pattern_add_uuidseq(undefined4 param_1,int *param_2)

{
  for (; param_2 != (int *)0x0; param_2 = (int *)*param_2) {
    sdp_pattern_add_uuid(param_1,param_2[1]);
  }
  return;
}



/* ===== sdp_set_uuidseq_attr @ 0002d708 size=388 ===== */

void sdp_set_uuidseq_attr(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  void *__ptr;
  void *__ptr_00;
  char *pcVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  int local_2c;
  
  piVar4 = *(int **)(DAT_0002d88c + 0x2d71c + DAT_0002d890);
  iVar8 = 0;
  local_2c = *piVar4;
  local_2f = 0x19;
  local_2e = 0x1a;
  local_2d = 0x1c;
  for (piVar3 = (int *)param_3; piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
    iVar8 = iVar8 + 1;
  }
  if (iVar8 != 0 && param_3 != 0) {
    __ptr = malloc(iVar8 << 2);
    if (__ptr != (void *)0x0) {
      __ptr_00 = malloc(iVar8 << 2);
      if (__ptr_00 != (void *)0x0) {
        iVar5 = 0;
        iVar7 = 0;
        piVar3 = (int *)param_3;
        do {
          pcVar2 = (char *)piVar3[1];
          if (pcVar2 == (char *)0x0) goto LAB_0002d87c;
          cVar1 = *pcVar2;
          if (cVar1 == '\x1a') {
            *(undefined1 **)((int)__ptr + iVar5 * 4) = &local_2e;
LAB_0002d814:
            *(char **)((int)__ptr_00 + iVar5 * 4) = pcVar2 + 4;
          }
          else {
            if (cVar1 == '\x1c') {
              *(undefined1 **)((int)__ptr + iVar5 * 4) = &local_2d;
              goto LAB_0002d814;
            }
            if (cVar1 == '\x19') {
              *(undefined1 **)((int)__ptr + iVar5 * 4) = &local_2f;
              goto LAB_0002d814;
            }
            iVar7 = -1;
          }
          piVar3 = (int *)*piVar3;
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar8);
        if (iVar7 == 0) {
          uVar6 = sdp_seq_alloc(__ptr,__ptr_00,iVar8);
          sdp_attr_replace(param_1,param_2,uVar6);
          sdp_pattern_add_uuidseq(param_1,param_3);
          uVar6 = 0;
        }
        else {
LAB_0002d87c:
          uVar6 = 0xffffffff;
        }
        free(__ptr);
        free(__ptr_00);
        goto LAB_0002d770;
      }
      free(__ptr);
    }
  }
  uVar6 = 0xffffffff;
LAB_0002d770:
  if (local_2c == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}



/* ===== sdp_create @ 0002d894 size=104 ===== */

undefined4 * sdp_create(undefined4 param_1,undefined4 param_2)

{
  undefined4 *__ptr;
  int *piVar1;
  int iVar2;
  
  __ptr = (undefined4 *)bt_malloc0(0x18);
  if (__ptr == (undefined4 *)0x0) {
    piVar1 = __errno_location();
    *piVar1 = 0xc;
  }
  else {
    *__ptr = param_1;
    __ptr[3] = param_2;
    iVar2 = bt_malloc0(0x20);
    if (iVar2 == 0) {
      piVar1 = __errno_location();
      *piVar1 = 0xc;
      free(__ptr);
      __ptr = (undefined4 *)0x0;
    }
    else {
      __ptr[5] = iVar2;
    }
  }
  return __ptr;
}



/* ===== sdp_set_notify @ 0002d8fc size=40 ===== */

undefined4 sdp_set_notify(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  if ((param_1 != 0) && (puVar1 = *(undefined4 **)(param_1 + 0x14), puVar1 != (undefined4 *)0x0)) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    return 0;
  }
  return 0xffffffff;
}



/* ===== sdp_get_error @ 0002d924 size=68 ===== */

undefined4 sdp_get_error(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    return *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1c);
  }
  syslog(3,(char *)(DAT_0002d96c + 0x2d958),DAT_0002d968 + 0x2da43);
  return 0xffffffff;
}



/* ===== sdp_general_inquiry @ 0002d970 size=112 ===== */

undefined4
sdp_general_inquiry(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_14 [2];
  
  local_14[0] = param_1;
  iVar1 = hci_inquiry(0xffffffff,10,param_2,0,local_14,0);
  if (iVar1 < 0) {
    syslog(3,(char *)(DAT_0002d9e4 + 0x2d9cc),DAT_0002d9e0 + 0x2dacd);
    uVar2 = 0xffffffff;
  }
  else {
    *param_4 = (char)iVar1;
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== sdp_close @ 0002d9e8 size=80 ===== */

int sdp_close(int *param_1)

{
  void *__ptr;
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = close(*param_1);
    __ptr = (void *)param_1[5];
    if (__ptr != (void *)0x0) {
      free(*(void **)((int)__ptr + 8));
      free(*(void **)((int)__ptr + 0xc));
      free(__ptr);
    }
    free(param_1);
  }
  return iVar1;
}



/* ===== sdp_connect @ 0002da38 size=760 ===== */

void sdp_connect(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  socklen_t local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined2 local_b0;
  undefined4 local_ac;
  undefined2 local_a8;
  sockaddr local_a4 [7];
  int local_34;
  
  piVar6 = *(int **)(DAT_0002dd30 + 0x2da4c + DAT_0002dd34);
  local_34 = *piVar6;
  if ((param_3 & 5) == 5) {
    piVar1 = __errno_location();
    *piVar1 = 0x16;
  }
  else {
    piVar1 = (int *)sdp_create(0xffffffff,param_3);
    if (piVar1 == (int *)0x0) goto LAB_0002da80;
    local_b4 = *(undefined4 *)(DAT_0002dd38 + 0x2dbe1);
    local_b0 = *(undefined2 *)(DAT_0002dd38 + 0x2dbe5);
    iVar2 = memcmp(param_2,&local_b4,6);
    if (iVar2 == 0) {
      iVar3 = socket(1,DAT_0002dd3c,0);
      *piVar1 = iVar3;
      iVar2 = DAT_0002dd40;
      if (-1 < iVar3) {
        piVar1[2] = 1;
        local_a4[0].sa_family = 1;
        strcpy(local_a4[0].sa_data,(char *)(iVar2 + 0x2db18));
        iVar2 = connect(iVar3,local_a4,0x6e);
        if (-1 < iVar2) goto LAB_0002da80;
      }
    }
    else {
      uVar7 = piVar1[3];
      iVar2 = DAT_0002dd48;
      if ((uVar7 & 4) != 0) {
        iVar2 = DAT_0002dd44;
      }
      iVar2 = socket(0x1f,iVar2,0);
      *piVar1 = iVar2;
      if (-1 < iVar2) {
        piVar1[2] = 0;
        local_a4[0].sa_data[0] = '\0';
        local_a4[0].sa_data[1] = '\0';
        local_a4[0].sa_data[2] = '\0';
        local_a4[0].sa_data[3] = '\0';
        local_ac = 0;
        local_a8 = 0;
        local_a4[0].sa_data[4] = '\0';
        local_a4[0].sa_data[5] = '\0';
        local_a4[0].sa_data[6] = '\0';
        local_a4[0].sa_data[7] = '\0';
        local_a4[0].sa_data[8] = '\0';
        local_a4[0].sa_data[9] = '\0';
        local_a4[0].sa_data[10] = '\0';
        local_a4[0].sa_data[0xb] = '\0';
        local_a4[0].sa_family = 0x1f;
        iVar3 = memcmp(param_1,&local_ac,6);
        if (iVar3 != 0) {
          local_a4[0].sa_data._6_2_ = *(undefined2 *)(param_1 + 1);
          local_a4[0].sa_data._2_2_ = (undefined2)*param_1;
          local_a4[0].sa_data._4_2_ = (undefined2)((uint)*param_1 >> 0x10);
          iVar3 = bind(iVar2,local_a4,0xe);
          if (iVar3 < 0) goto LAB_0002db34;
        }
        if ((uVar7 & 2) != 0) {
          local_c0 = *(undefined4 *)(DAT_0002dd4c + 0x2dd18);
          uStack_bc = *(undefined4 *)(DAT_0002dd4c + 0x2dd1c);
          iVar3 = setsockopt(iVar2,1,0xd,&local_c0,8);
          if (iVar3 < 0) goto LAB_0002db34;
        }
        if ((uVar7 & 8) == 0) {
LAB_0002dc88:
          local_a4[0].sa_data[0] = '\x01';
          local_a4[0].sa_data[1] = '\0';
          local_a4[0].sa_data._6_2_ = *(undefined2 *)(param_2 + 1);
          local_a4[0].sa_data._2_2_ = (undefined2)*param_2;
          local_a4[0].sa_data._4_2_ = (undefined2)((uint)*param_2 >> 0x10);
          do {
            uVar5 = connect(iVar2,local_a4,0xe);
            if (uVar5 == 0) goto LAB_0002da80;
            piVar4 = __errno_location();
            iVar3 = *piVar4;
            if ((((uint)((uVar7 & 4) != 0) & uVar5 >> 0x1f) != 0) && (iVar3 == 0x73 || iVar3 == 0xb)
               ) goto LAB_0002da80;
          } while ((iVar3 == 0x10) && ((uVar7 & 1) != 0));
        }
        else {
          local_c0 = 0;
          uStack_bc = 0;
          uStack_b8 = 0;
          local_c4 = 0xc;
          iVar3 = getsockopt(iVar2,6,1,&local_c0,&local_c4);
          if (-1 < iVar3) {
            local_c0 = DAT_0002dd50;
            iVar3 = setsockopt(iVar2,6,1,&local_c0,0xc);
            if (-1 < iVar3) goto LAB_0002dc88;
          }
        }
      }
    }
LAB_0002db34:
    piVar4 = __errno_location();
    iVar2 = *piVar4;
    if (-1 < *piVar1) {
      close(*piVar1);
    }
    free((void *)piVar1[5]);
    free(piVar1);
    *piVar4 = iVar2;
  }
  piVar1 = (int *)0x0;
LAB_0002da80:
  if (local_34 != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(piVar1);
  }
  return;
}



/* ===== sdp_get_socket @ 0002dd54 size=8 ===== */

undefined4 sdp_get_socket(undefined4 *param_1)

{
  return *param_1;
}



/* ===== sdp_gen_tid @ 0002dd5c size=20 ===== */

short sdp_gen_tid(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x10);
  *(short *)(param_1 + 0x10) = sVar1 + 1;
  return sVar1;
}



/* ===== sdp_device_record_register_binary @ 0002dd70 size=520 ===== */

void sdp_device_record_register_binary
               (int param_1,undefined4 *param_2,void *param_3,size_t param_4,byte param_5,
               uint *param_6)

{
  int *piVar1;
  undefined1 *__ptr;
  char *__ptr_00;
  uint uVar2;
  char *__fmt;
  undefined4 uVar3;
  int *piVar4;
  uint extraout_r3;
  uint uVar5;
  undefined1 *__dest;
  int iVar6;
  uint local_38;
  uint local_34;
  undefined2 local_30;
  int local_2c;
  
  piVar4 = *(int **)(DAT_0002df78 + 0x2dd90 + DAT_0002df7c);
  local_2c = *piVar4;
  if (*(int *)(param_1 + 8) == 0) {
    iVar6 = -1;
    piVar1 = __errno_location();
    *piVar1 = 0x42;
    goto LAB_0002ddc0;
  }
  __ptr = malloc(0x800);
  __ptr_00 = malloc(0xffff);
  uVar5 = extraout_r3;
  if (__ptr == (undefined1 *)0x0) {
    uVar5 = 1;
  }
  if (__ptr != (undefined1 *)0x0) {
    uVar5 = (uint)(__ptr_00 == (char *)0x0);
  }
  if (uVar5 == 0) {
    *__ptr = 0x75;
    uVar2 = sdp_gen_tid(param_1);
    *(ushort *)(__ptr + 1) = (ushort)((uVar2 & 0xff) << 8) | (ushort)(uVar2 >> 8) & 0xff;
    local_30 = 0;
    local_34 = uVar5;
    iVar6 = memcmp(param_2,&local_34,6);
    __dest = __ptr + 6;
    if (iVar6 == 0) {
      __ptr[5] = param_5;
      iVar6 = 6;
    }
    else {
      uVar3 = *param_2;
      __ptr[5] = param_5 | 2;
      iVar6 = 0xc;
      *(undefined4 *)(__ptr + 6) = uVar3;
      *(undefined2 *)(__ptr + 10) = *(undefined2 *)(param_2 + 1);
      __dest = __ptr + 0xc;
    }
    memcpy(__dest,param_3,param_4);
    uVar5 = (iVar6 + param_4) - 5;
    *(ushort *)(__ptr + 3) = (ushort)((uVar5 & 0xff) << 8) | (ushort)(uVar5 >> 8) & 0xff;
    iVar6 = sdp_send_req_w4_rsp(param_1,__ptr,__ptr_00,iVar6 + param_4,&local_38);
    if (-1 < iVar6) {
      if (local_38 < 5) {
        __fmt = (char *)(DAT_0002df84 + 0x2df08);
        iVar6 = DAT_0002df80 + 0x2e02c;
LAB_0002df08:
        syslog(3,__fmt,iVar6);
      }
      else {
        if (*__ptr_00 == '\x01') {
          piVar1 = __errno_location();
          iVar6 = 0x16;
          goto LAB_0002de20;
        }
        if (*__ptr_00 == 'v') {
          if (8 < local_38) {
            if (param_6 != (uint *)0x0) {
              uVar5 = *(uint *)(__ptr_00 + 5);
              *param_6 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                         uVar5 >> 0x18;
            }
            goto LAB_0002de28;
          }
          __fmt = (char *)(DAT_0002df8c + 0x2df58);
          iVar6 = DAT_0002df88 + 0x2e07c;
          goto LAB_0002df08;
        }
      }
      piVar1 = __errno_location();
      iVar6 = 0x47;
      goto LAB_0002de20;
    }
  }
  else {
    piVar1 = __errno_location();
    iVar6 = 0xc;
LAB_0002de20:
    *piVar1 = iVar6;
    iVar6 = -1;
  }
LAB_0002de28:
  free(__ptr);
  free(__ptr_00);
LAB_0002ddc0:
  if (local_2c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar6);
  }
  return;
}



/* ===== sdp_device_record_register @ 0002df90 size=256 ===== */

void sdp_device_record_register
               (undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_34;
  void *local_30;
  undefined4 uStack_2c;
  int local_24;
  
  piVar4 = *(int **)(DAT_0002e090 + 0x2dfb0 + DAT_0002e094);
  local_24 = *piVar4;
  if (*param_3 - 1U < 0xfffffffe) {
    local_30 = (void *)*param_3;
    uVar1 = sdp_data_alloc(10,&local_30);
    sdp_attr_replace(param_3,0,uVar1);
  }
  iVar2 = sdp_gen_record_pdu(param_3,&local_30);
  if (iVar2 < 0) {
    iVar2 = -1;
    piVar3 = __errno_location();
    *piVar3 = 0xc;
  }
  else {
    iVar2 = sdp_device_record_register_binary(param_1,param_2,local_30,uStack_2c,param_4,&local_34);
    free(local_30);
    if (iVar2 == 0) {
      uVar1 = sdp_data_alloc(10,&local_34);
      *param_3 = local_34;
      sdp_attr_replace(param_3,0,uVar1);
    }
  }
  if (local_24 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}



/* ===== sdp_record_register @ 0002e098 size=88 ===== */

void sdp_record_register(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  undefined4 local_14;
  uint local_10;
  int local_c;
  
  piVar1 = *(int **)(DAT_0002e0f0 + 0x2e0ac + DAT_0002e0f4);
  local_c = *piVar1;
  local_14 = 0;
  local_10 = param_3 & 0xffff0000;
  sdp_device_record_register(param_1,&local_14,param_2,param_3,param_1);
  if (local_c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== sdp_device_record_unregister_binary @ 0002e0f8 size=388 ===== */

void sdp_device_record_unregister_binary(int param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  undefined1 *__ptr;
  char *__ptr_00;
  int iVar2;
  uint unaff_r4;
  uint uVar3;
  int *piVar4;
  uint local_28;
  int local_24;
  
  piVar4 = *(int **)(DAT_0002e27c + 0x2e108 + DAT_0002e280);
  local_24 = *piVar4;
  local_28 = 0;
  if (param_3 == 0) {
    piVar1 = __errno_location();
    iVar2 = 0x16;
  }
  else {
    if (*(int *)(param_1 + 8) != 0) {
      __ptr = malloc(0x800);
      __ptr_00 = malloc(0xffff);
      if (__ptr == (undefined1 *)0x0) {
        unaff_r4 = 1;
      }
      if (__ptr != (undefined1 *)0x0) {
        unaff_r4 = (uint)(__ptr_00 == (char *)0x0);
      }
      if (unaff_r4 == 0) {
        *__ptr = 0x79;
        uVar3 = sdp_gen_tid(param_1);
        __ptr[4] = 4;
        *(ushort *)(__ptr + 1) = (ushort)((uVar3 & 0xff) << 8) | (ushort)(uVar3 >> 8) & 0xff;
        __ptr[3] = 0;
        *(uint *)(__ptr + 5) =
             param_3 << 0x18 | (param_3 >> 8 & 0xff) << 0x10 | (param_3 >> 0x10 & 0xff) << 8 |
             param_3 >> 0x18;
        uVar3 = sdp_send_req_w4_rsp(param_1,__ptr,__ptr_00,9,&local_28);
        if (-1 < (int)uVar3) {
          if (local_28 < 7) {
            syslog(3,(char *)(DAT_0002e288 + 0x2e238),DAT_0002e284 + 0x2e37e);
          }
          else {
            if (*__ptr_00 == '\x01') {
              piVar1 = __errno_location();
              iVar2 = 0x16;
              goto LAB_0002e1a8;
            }
            if (*__ptr_00 == -0x80) {
              uVar3 = (uint)*(ushort *)(__ptr_00 + 5);
              goto LAB_0002e1b0;
            }
          }
          piVar1 = __errno_location();
          iVar2 = 0x47;
          goto LAB_0002e1a8;
        }
      }
      else {
        piVar1 = __errno_location();
        iVar2 = 0xc;
LAB_0002e1a8:
        *piVar1 = iVar2;
        uVar3 = 0xffffffff;
      }
LAB_0002e1b0:
      free(__ptr);
      free(__ptr_00);
      goto LAB_0002e138;
    }
    piVar1 = __errno_location();
    iVar2 = 0x42;
  }
  *piVar1 = iVar2;
  uVar3 = 0xffffffff;
LAB_0002e138:
  if (local_24 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== sdp_device_record_unregister @ 0002e28c size=40 ===== */

int sdp_device_record_unregister(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = sdp_device_record_unregister_binary(param_1,param_2,*param_3);
  if (iVar1 == 0) {
    sdp_record_free(param_3);
  }
  return iVar1;
}



/* ===== sdp_record_unregister @ 0002e2b4 size=84 ===== */

void sdp_record_unregister(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  undefined4 local_14;
  uint local_10;
  int local_c;
  
  piVar1 = *(int **)(DAT_0002e308 + 0x2e2c8 + DAT_0002e30c);
  local_14 = 0;
  local_c = *piVar1;
  local_10 = param_3 & 0xffff0000;
  sdp_device_record_unregister(param_1,&local_14,param_2,&local_14,param_1);
  if (local_c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== sdp_device_record_update @ 0002e310 size=428 ===== */

void sdp_device_record_update(int param_1,undefined4 param_2,uint *param_3)

{
  int *piVar1;
  undefined1 *__ptr;
  char *__ptr_00;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint local_34;
  void *local_30;
  size_t local_2c;
  int local_24;
  
  uVar4 = *param_3;
  piVar5 = *(int **)(DAT_0002e4bc + 0x2e324 + DAT_0002e4c0);
  local_24 = *piVar5;
  if (uVar4 == 0) {
    piVar1 = __errno_location();
    iVar3 = 0x16;
  }
  else {
    if (*(int *)(param_1 + 8) != 0) {
      __ptr = malloc(0x800);
      __ptr_00 = malloc(0xffff);
      if (__ptr_00 == (char *)0x0 || __ptr == (undefined1 *)0x0) {
LAB_0002e3a8:
        piVar1 = __errno_location();
        iVar3 = 0xc;
LAB_0002e3b0:
        *piVar1 = iVar3;
        uVar4 = 0xffffffff;
      }
      else {
        *__ptr = 0x77;
        uVar2 = sdp_gen_tid(param_1);
        *(ushort *)(__ptr + 1) = (ushort)((uVar2 & 0xff) << 8) | (ushort)(uVar2 >> 8) & 0xff;
        *(uint *)(__ptr + 5) =
             uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
             uVar4 >> 0x18;
        iVar3 = sdp_gen_record_pdu(param_3,&local_30);
        if (iVar3 < 0) goto LAB_0002e3a8;
        memcpy(__ptr + 9,local_30,local_2c);
        free(local_30);
        *(ushort *)(__ptr + 3) =
             (ushort)((local_2c + 4 & 0xff) << 8) | (ushort)(local_2c + 4 >> 8) & 0xff;
        uVar4 = sdp_send_req_w4_rsp(param_1,__ptr,__ptr_00,local_2c + 9,&local_34);
        if (-1 < (int)uVar4) {
          if (local_34 < 7) {
            syslog(3,(char *)(DAT_0002e4c8 + 0x2e468),DAT_0002e4c4 + 0x2e5d2);
LAB_0002e470:
            piVar1 = __errno_location();
            iVar3 = 0x47;
          }
          else {
            if (*__ptr_00 != '\x01') {
              if (*__ptr_00 == 'x') {
                uVar4 = (uint)*(ushort *)(__ptr_00 + 5);
                goto LAB_0002e4a0;
              }
              goto LAB_0002e470;
            }
            piVar1 = __errno_location();
            iVar3 = 0x16;
          }
          goto LAB_0002e3b0;
        }
      }
LAB_0002e4a0:
      free(__ptr);
      free(__ptr_00);
      goto LAB_0002e350;
    }
    piVar1 = __errno_location();
    iVar3 = 0x42;
  }
  *piVar1 = iVar3;
  uVar4 = 0xffffffff;
LAB_0002e350:
  if (local_24 == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}



/* ===== sdp_record_update @ 0002e4cc size=84 ===== */

void sdp_record_update(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  undefined4 local_14;
  uint local_10;
  int local_c;
  
  piVar1 = *(int **)(DAT_0002e520 + 0x2e4e0 + DAT_0002e524);
  local_14 = 0;
  local_c = *piVar1;
  local_10 = param_3 & 0xffff0000;
  sdp_device_record_update(param_1,&local_14,param_2,&local_14,param_1);
  if (local_c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== sdp_service_search_req @ 0002e528 size=720 ===== */

void sdp_service_search_req(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 *param_4)

{
  ushort uVar1;
  int iVar2;
  undefined1 *__ptr;
  char *__ptr_00;
  int *piVar3;
  uint *puVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  char *__fmt;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  bool bVar17;
  uint local_30;
  int local_2c;
  
  piVar8 = *(int **)(DAT_0002e7f8 + 0x2e54c + DAT_0002e7fc);
  local_2c = *piVar8;
  local_30 = 0;
  __ptr = malloc(0x800);
  __ptr_00 = malloc(0xffff);
  if (__ptr == (undefined1 *)0x0 || __ptr_00 == (char *)0x0) {
    piVar3 = __errno_location();
    iVar9 = 0xc;
  }
  else {
    puVar11 = __ptr + 5;
    *__ptr = 2;
    iVar9 = FUN_0002bd88(puVar11,param_2);
    if (-1 < iVar9) {
      iVar14 = DAT_0002e800 + 0x2e786;
      __fmt = (char *)(DAT_0002e804 + 0x2e604);
      *(ushort *)(puVar11 + iVar9) = (ushort)((param_3 & 0xff) << 8) | (ushort)(param_3 >> 8) & 0xff
      ;
      *param_4 = 0;
      pcVar5 = (char *)0x0;
      do {
        iVar13 = FUN_00029fb8(puVar11 + iVar9 + 2,0x800 - (iVar9 + 7),pcVar5);
        iVar13 = iVar13 + iVar9 + 7;
        uVar6 = iVar13 - 5;
        *(ushort *)(__ptr + 3) = (ushort)((uVar6 & 0xff) << 8) | (ushort)(uVar6 >> 8) & 0xff;
        uVar6 = sdp_gen_tid(param_1);
        *(ushort *)(__ptr + 1) = (ushort)((uVar6 & 0xff) << 8) | (ushort)(uVar6 >> 8) & 0xff;
        iVar13 = sdp_send_req_w4_rsp(param_1,__ptr,__ptr_00,iVar13,&local_30);
        if (iVar13 < 0) break;
        if (local_30 < 5) {
LAB_0002e678:
          pcVar5 = (char *)(DAT_0002e80c + 0x2e68c);
          iVar9 = DAT_0002e808 + 0x2e80f;
LAB_0002e690:
          syslog(3,pcVar5,iVar9);
          goto LAB_0002e5a0;
        }
        uVar1 = *(ushort *)(__ptr_00 + 3);
        if (*__ptr_00 == '\x01') goto LAB_0002e5a0;
        uVar6 = local_30 - 5;
        if (uVar6 < 4) goto LAB_0002e678;
        uVar10 = (*(ushort *)(__ptr_00 + 7) & 0xff) << 8 | (uint)(*(ushort *)(__ptr_00 + 7) >> 8);
        if (uVar10 == 0) goto LAB_0002e5a0;
        uVar15 = *param_4;
        uVar12 = 4;
        iVar7 = 0;
        do {
          iVar2 = uVar12 + 5;
          if ((int)(uVar6 - uVar12) < 4) {
            syslog(3,__fmt,iVar14);
            break;
          }
          puVar4 = malloc(4);
          if (puVar4 == (uint *)0x0) break;
          uVar12 = uVar12 + 4;
          uVar16 = *(uint *)(__ptr_00 + iVar2);
          *puVar4 = uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
                    uVar16 >> 0x18;
          uVar15 = sdp_list_append(uVar15);
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)uVar10);
        *param_4 = uVar15;
        if (uVar12 < ((uVar1 & 0xff) << 8 | (uint)(uVar1 >> 8))) {
          if (uVar12 + 6 <= local_30) {
            pcVar5 = __ptr_00 + uVar12 + 5;
            bVar17 = __ptr_00[uVar12 + 5] == '\0';
            goto LAB_0002e7b8;
          }
          pcVar5 = (char *)(DAT_0002e814 + 0x2e754);
          iVar9 = DAT_0002e810 + 0x2e8d7;
          goto LAB_0002e690;
        }
        bVar17 = pcVar5 == (char *)0x0;
LAB_0002e7b8:
      } while (!bVar17);
      goto LAB_0002e7bc;
    }
    piVar3 = __errno_location();
    iVar9 = 0x16;
  }
  *piVar3 = iVar9;
LAB_0002e5a0:
  iVar13 = -1;
LAB_0002e7bc:
  free(__ptr);
  free(__ptr_00);
  if (local_2c != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar13);
  }
  return;
}



/* ===== sdp_service_attr_req @ 0002e818 size=700 ===== */

void sdp_service_attr_req(undefined4 param_1,uint param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  undefined1 *__ptr;
  char *__ptr_00;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  size_t sVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  size_t __size;
  undefined4 uVar10;
  char *__src;
  int iVar11;
  uint local_40;
  char *local_3c;
  char *local_38;
  size_t sStack_34;
  size_t local_30;
  int local_2c;
  
  uVar10 = 0;
  piVar8 = *(int **)(DAT_0002ead4 + 0x2e838 + DAT_0002ead8);
  local_40 = 0;
  local_2c = *piVar8;
  if (1 < param_3 - 1U) {
    piVar1 = __errno_location();
    *piVar1 = 0x16;
    goto LAB_0002e864;
  }
  local_38 = (char *)0x0;
  sStack_34 = 0;
  local_30 = 0;
  __ptr = malloc(0x800);
  __ptr_00 = malloc(0xffff);
  if (__ptr == (undefined1 *)0x0 || __ptr_00 == (char *)0x0) {
    piVar1 = __errno_location();
    *piVar1 = 0xc;
  }
  else {
    *(uint *)(__ptr + 5) =
         param_2 << 0x18 | (param_2 >> 8 & 0xff) << 0x10 | (param_2 >> 0x10 & 0xff) << 8 |
         param_2 >> 0x18;
    *__ptr = 4;
    __ptr[9] = 0xff;
    __ptr[10] = 0xff;
    iVar2 = FUN_0002bbfc(__ptr + 0xb,param_4);
    if (iVar2 == -1) {
      piVar1 = __errno_location();
      *piVar1 = 0x16;
    }
    else {
      __src = __ptr_00 + 7;
      iVar11 = 0;
      pcVar5 = (char *)0x0;
      do {
        iVar3 = FUN_00029fb8(__ptr + 0xb + iVar2,0x800 - (iVar2 + 0xb),pcVar5);
        iVar3 = iVar3 + iVar2 + 0xb;
        uVar4 = sdp_gen_tid(param_1);
        uVar7 = iVar3 - 5;
        *(ushort *)(__ptr + 1) = (ushort)((uVar4 & 0xff) << 8) | (ushort)(uVar4 >> 8) & 0xff;
        *(ushort *)(__ptr + 3) = (ushort)((uVar7 & 0xff) << 8) | (ushort)(uVar7 >> 8) & 0xff;
        iVar3 = sdp_send_req_w4_rsp(param_1,__ptr,__ptr_00,iVar3,&local_40);
        sVar6 = sStack_34;
        if (iVar3 < 0) goto LAB_0002e938;
        if (local_40 < 5) {
LAB_0002e9c8:
          pcVar5 = (char *)(DAT_0002eae0 + 0x2e9dc);
          iVar2 = DAT_0002eadc + 0x2eb90;
LAB_0002e9dc:
          syslog(3,pcVar5,iVar2);
          goto LAB_0002e938;
        }
        if (*__ptr_00 == '\x01') goto LAB_0002e938;
        if (local_40 - 5 < 2) goto LAB_0002e9c8;
        uVar7 = local_40 - 7;
        uVar4 = (*(ushort *)(__ptr_00 + 5) & 0xff) << 8 | (uint)(*(ushort *)(__ptr_00 + 5) >> 8);
        iVar11 = iVar11 + uVar4;
        if (uVar7 < uVar4 + 1) {
          pcVar5 = (char *)(DAT_0002eae8 + 0x2ea34);
          iVar2 = DAT_0002eae4 + 0x2ebe8;
          goto LAB_0002e9dc;
        }
        pcVar9 = __src + uVar4;
        if (__src[uVar4] == '\0') {
          pcVar9 = pcVar5;
          if (sStack_34 != 0) {
            pcVar9 = (char *)0x0;
            goto LAB_0002ea58;
          }
        }
        else {
LAB_0002ea58:
          __size = sStack_34 + uVar4;
          local_38 = realloc(local_38,__size);
          local_30 = __size;
          memcpy(local_38 + sVar6,__src,uVar4);
          sStack_34 = __size;
        }
        pcVar5 = pcVar9;
      } while (pcVar9 != (char *)0x0);
      if (0 < iVar11) {
        sVar6 = sStack_34;
        pcVar5 = local_38;
        if (sStack_34 == 0) {
          sVar6 = uVar7;
          pcVar5 = __src;
        }
        local_3c = pcVar9;
        uVar10 = sdp_extract_pdu(pcVar5,sVar6,&local_3c);
        goto LAB_0002e8d0;
      }
    }
LAB_0002e938:
    uVar10 = 0;
  }
LAB_0002e8d0:
  free(__ptr);
  free(local_38);
  free(__ptr_00);
LAB_0002e864:
  if (local_2c == *piVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}



/* ===== sdp_service_search_async @ 0002eaec size=332 ===== */

undefined4 sdp_service_search_async(int param_1,undefined4 param_2,uint param_3)

{
  void *pvVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  iVar7 = *(int *)(param_1 + 0x14);
  if (iVar7 == 0) {
    return 0xffffffff;
  }
  free(*(void **)(iVar7 + 0xc));
  *(undefined8 *)(iVar7 + 0xc) = 0;
  *(undefined8 *)(iVar7 + 0x10) = 0;
  if (*(int *)(iVar7 + 8) == 0) {
    pvVar1 = malloc(0x800);
    *(void **)(iVar7 + 8) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      iVar5 = 0xc;
      goto LAB_0002ec14;
    }
  }
  memset(*(void **)(iVar7 + 8),0,0x800);
  puVar9 = *(undefined1 **)(iVar7 + 8);
  uVar2 = sdp_gen_tid(param_1);
  *puVar9 = 2;
  iVar8 = *(int *)(iVar7 + 8);
  *(ushort *)(puVar9 + 1) = (ushort)((uVar2 & 0xff) << 8) | (ushort)(uVar2 >> 8) & 0xff;
  *(undefined4 *)(iVar7 + 0x18) = 5;
  iVar8 = iVar8 + 5;
  iVar5 = FUN_0002bd88(iVar8,param_2);
  if (iVar5 < 0) {
    iVar5 = 0x16;
  }
  else {
    iVar6 = *(int *)(iVar7 + 0x18);
    *(ushort *)(iVar8 + iVar5) = (ushort)((param_3 & 0xff) << 8) | (ushort)(param_3 >> 8) & 0xff;
    *(int *)(iVar7 + 0x18) = iVar5 + iVar6 + 2;
    *(undefined1 *)(iVar8 + iVar5 + 2) = 0;
    iVar5 = *(int *)(iVar7 + 0x18);
    uVar4 = *(undefined4 *)(iVar7 + 8);
    uVar2 = iVar5 - 4;
    *(ushort *)(puVar9 + 3) = (ushort)((uVar2 & 0xff) << 8) | (ushort)(uVar2 >> 8) & 0xff;
    iVar5 = FUN_0002a028(param_1,uVar4,iVar5 + 1);
    if (-1 < iVar5) {
      return 0;
    }
    syslog(3,(char *)(DAT_0002ec3c + 0x2ec04),DAT_0002ec38 + 0x2edcd);
    piVar3 = __errno_location();
    iVar5 = *piVar3;
  }
LAB_0002ec14:
  *(int *)(iVar7 + 0x1c) = iVar5;
  free(*(void **)(iVar7 + 8));
  *(undefined4 *)(iVar7 + 8) = 0;
  return 0xffffffff;
}



/* ===== sdp_service_attr_async @ 0002ec40 size=352 ===== */

undefined4 sdp_service_attr_async(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  iVar7 = *(int *)(param_1 + 0x14);
  if (iVar7 == 0) {
    return 0xffffffff;
  }
  free(*(void **)(iVar7 + 0xc));
  *(undefined8 *)(iVar7 + 0xc) = 0;
  *(undefined8 *)(iVar7 + 0x10) = 0;
  if (*(int *)(iVar7 + 8) == 0) {
    pvVar1 = malloc(0x800);
    *(void **)(iVar7 + 8) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      iVar6 = 0xc;
      goto LAB_0002ed7c;
    }
  }
  memset(*(void **)(iVar7 + 8),0,0x800);
  puVar8 = *(undefined1 **)(iVar7 + 8);
  uVar2 = sdp_gen_tid(param_1);
  *puVar8 = 4;
  *(ushort *)(puVar8 + 1) = (ushort)((uVar2 & 0xff) << 8) | (ushort)(uVar2 >> 8) & 0xff;
  iVar6 = *(int *)(iVar7 + 8);
  if (param_3 == 1) {
    uVar5 = 9;
  }
  else {
    uVar5 = 10;
  }
  *(undefined1 *)(iVar6 + 9) = 0xff;
  *(undefined1 *)(iVar6 + 10) = 0xff;
  *(uint *)(iVar6 + 5) =
       param_2 << 0x18 | (param_2 >> 8 & 0xff) << 0x10 | (param_2 >> 0x10 & 0xff) << 8 |
       param_2 >> 0x18;
  *(undefined4 *)(iVar7 + 0x18) = 0xb;
  iVar3 = FUN_0002bbfc(iVar6 + 0xb,param_4,uVar5);
  if (iVar3 == -1) {
    iVar6 = 0x16;
  }
  else {
    *(int *)(iVar7 + 0x18) = *(int *)(iVar7 + 0x18) + iVar3;
    *(undefined1 *)(iVar6 + 0xb + iVar3) = 0;
    iVar6 = *(int *)(iVar7 + 0x18);
    uVar5 = *(undefined4 *)(iVar7 + 8);
    uVar2 = iVar6 - 4;
    *(ushort *)(puVar8 + 3) = (ushort)((uVar2 & 0xff) << 8) | (ushort)(uVar2 >> 8) & 0xff;
    iVar6 = FUN_0002a028(param_1,uVar5,iVar6 + 1);
    if (-1 < iVar6) {
      return 0;
    }
    syslog(3,(char *)(DAT_0002eda4 + 0x2ed6c),DAT_0002eda0 + 0x2ef4e);
    piVar4 = __errno_location();
    iVar6 = *piVar4;
  }
LAB_0002ed7c:
  *(int *)(iVar7 + 0x1c) = iVar6;
  free(*(void **)(iVar7 + 8));
  *(undefined4 *)(iVar7 + 8) = 0;
  return 0xffffffff;
}



/* ===== sdp_service_search_attr_async @ 0002eda8 size=392 ===== */

undefined4
sdp_service_search_attr_async(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  void *pvVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  iVar7 = *(int *)(param_1 + 0x14);
  if (iVar7 == 0) {
    return 0xffffffff;
  }
  free(*(void **)(iVar7 + 0xc));
  *(undefined8 *)(iVar7 + 0xc) = 0;
  *(undefined8 *)(iVar7 + 0x10) = 0;
  if (*(int *)(iVar7 + 8) == 0) {
    pvVar1 = malloc(0x800);
    *(void **)(iVar7 + 8) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      iVar5 = 0xc;
      goto LAB_0002ee60;
    }
  }
  memset(*(void **)(iVar7 + 8),0,0x800);
  puVar8 = *(undefined1 **)(iVar7 + 8);
  uVar2 = sdp_gen_tid(param_1);
  *puVar8 = 6;
  iVar9 = *(int *)(iVar7 + 8);
  *(ushort *)(puVar8 + 1) = (ushort)((uVar2 & 0xff) << 8) | (ushort)(uVar2 >> 8) & 0xff;
  *(undefined4 *)(iVar7 + 0x18) = 5;
  iVar9 = iVar9 + 5;
  iVar5 = FUN_0002bd88(iVar9,param_2);
  if (-1 < iVar5) {
    iVar6 = *(int *)(iVar7 + 0x18);
    uVar4 = 0xffffffff;
    *(undefined1 *)(iVar9 + iVar5) = 0xff;
    *(undefined1 *)(iVar9 + iVar5 + 1) = 0xff;
    iVar9 = iVar9 + iVar5 + 2;
    if (param_3 == 1) {
      uVar4 = 9;
    }
    *(int *)(iVar7 + 0x18) = iVar5 + iVar6 + 2;
    if (param_3 != 1) {
      uVar4 = 10;
    }
    iVar5 = FUN_0002bbfc(iVar9,param_4,uVar4);
    if (iVar5 != -1) {
      *(int *)(iVar7 + 0x18) = *(int *)(iVar7 + 0x18) + iVar5;
      *(undefined1 *)(iVar9 + iVar5) = 0;
      iVar5 = *(int *)(iVar7 + 0x18);
      uVar4 = *(undefined4 *)(iVar7 + 8);
      uVar2 = iVar5 - 4;
      *(ushort *)(puVar8 + 3) = (ushort)((uVar2 & 0xff) << 8) | (ushort)(uVar2 >> 8) & 0xff;
      iVar5 = FUN_0002a028(param_1,uVar4,iVar5 + 1);
      if (-1 < iVar5) {
        return 0;
      }
      syslog(3,(char *)(DAT_0002ef34 + 0x2ef14),DAT_0002ef30 + 0x2f10d);
      piVar3 = __errno_location();
      iVar5 = *piVar3;
      goto LAB_0002ee60;
    }
  }
  iVar5 = 0x16;
LAB_0002ee60:
  *(int *)(iVar7 + 0x1c) = iVar5;
  free(*(void **)(iVar7 + 8));
  *(undefined4 *)(iVar7 + 8) = 0;
  return 0xffffffff;
}



/* ===== sdp_process @ 0002ef38 size=1112 ===== */

undefined4 sdp_process(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *__ptr;
  int *piVar8;
  int iVar9;
  void *pvVar10;
  uint uVar11;
  ushort uVar12;
  char *pcVar13;
  size_t sVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  undefined4 *puVar20;
  undefined4 uVar21;
  uint uVar22;
  byte *__src;
  int iVar23;
  bool bVar24;
  
  if ((param_1 == 0) || (param_4 = 0, *(int *)(param_1 + 0x14) == 0)) {
    syslog(3,(char *)(DAT_0002f394 + 0x2ef68),DAT_0002f390 + 0x2f17f,param_4,param_1,param_2,param_3
          );
    return 0xffffffff;
  }
  iVar19 = param_1;
  __ptr = (byte *)bt_malloc0(0xffff);
  if (__ptr == (byte *)0x0) {
    piVar8 = __errno_location();
    syslog(3,(char *)(DAT_0002f39c + 0x2efb0),DAT_0002f398 + 0x2f1bf,*piVar8,iVar19,param_2,param_3)
    ;
    return 0xffffffff;
  }
  puVar20 = *(undefined4 **)(param_1 + 0x14);
  __src = __ptr + 5;
  iVar23 = puVar20[2];
  iVar9 = FUN_0002a074(param_1,__ptr);
  iVar7 = DAT_0002f3dc;
  iVar6 = DAT_0002f3d8;
  iVar5 = DAT_0002f3d4;
  iVar16 = DAT_0002f3d0;
  iVar4 = DAT_0002f3c8;
  iVar17 = DAT_0002f3b8;
  iVar3 = DAT_0002f3b4;
  iVar2 = DAT_0002f3b0;
  iVar15 = DAT_0002f3a8;
  if (iVar9 < 0) {
    piVar8 = __errno_location();
    syslog(3,(char *)(DAT_0002f3a4 + 0x2f000),DAT_0002f3a0 + 0x2f20f,*piVar8,iVar19,param_2,param_3)
    ;
    puVar20[7] = *piVar8;
LAB_0002f010:
    uVar22 = 0;
    goto LAB_0002f014;
  }
  if (*(short *)(iVar23 + 1) != *(short *)(__ptr + 1)) {
    pcVar13 = (char *)(DAT_0002f3ac + 0x2f044);
    puVar20[7] = 0x47;
    iVar15 = iVar15 + 0x2f25b;
LAB_0002f04c:
    syslog(3,pcVar13,iVar15,0x47,iVar19,param_2,param_3);
    goto LAB_0002f010;
  }
  uVar18 = (*(ushort *)(__ptr + 3) & 0xff) << 8 | (uint)(*(ushort *)(__ptr + 3) >> 8);
  if (uVar18 + 5 != iVar9) {
    puVar20[7] = 0x47;
    pcVar13 = (char *)(iVar3 + 0x2f090);
    iVar15 = iVar2 + 0x2f29f;
    goto LAB_0002f04c;
  }
  uVar22 = (uint)*__ptr;
  switch(uVar22) {
  case 1:
    uVar12 = *(ushort *)(__ptr + 5) << 8 | *(ushort *)(__ptr + 5) >> 8;
    goto LAB_0002f200;
  case 2:
    break;
  case 3:
    uVar12 = *(ushort *)(__ptr + 7);
    uVar18 = (uVar12 & 0xff) << 8 | (uint)(uVar12 >> 8);
    if (uVar18 <= ((*(ushort *)(__ptr + 5) & 0xff) << 8 | (uint)(*(ushort *)(__ptr + 5) >> 8))) {
      sVar1 = uVar18 * 4;
      sVar14 = sVar1 + 4;
      uVar18 = sVar14;
      if (puVar20[4] == 0) goto LAB_0002f144;
      if (3 < (uint)puVar20[4]) {
        __src = __ptr + 9;
        *(ushort *)(puVar20[3] + 2) = uVar12 + *(short *)(puVar20[3] + 2);
        uVar18 = sVar1;
        goto LAB_0002f144;
      }
      pcVar13 = (char *)(DAT_0002f3cc + 0x2f190);
      puVar20[7] = 0x47;
      iVar16 = iVar4 + 0x2f3a7;
      goto LAB_0002f198;
    }
    pcVar13 = (char *)(DAT_0002f3bc + 0x2f100);
    puVar20[7] = 0x47;
    iVar17 = iVar17 + 0x2f317;
    goto LAB_0002f108;
  case 4:
    break;
  case 5:
    goto LAB_0002f1ac;
  case 6:
    break;
  case 7:
LAB_0002f1ac:
    uVar18 = (*(ushort *)(__ptr + 5) & 0xff) << 8 | (uint)(*(ushort *)(__ptr + 5) >> 8);
    bVar24 = uVar18 == 1;
    if (uVar18 < 2) {
      bVar24 = puVar20[4] == 0;
    }
    if (bVar24) {
      puVar20[7] = 0x47;
      pcVar13 = (char *)(iVar5 + 0x2f1f0);
      iVar16 = iVar16 + 0x2f3ff;
LAB_0002f198:
      syslog(3,pcVar13,iVar16,0x47,iVar19,param_2,param_3);
      uVar12 = 4;
      goto LAB_0002f1a4;
    }
    sVar14 = uVar18 + 2;
    __src = __ptr + 7;
LAB_0002f144:
    iVar2 = DAT_0002f3e4;
    iVar17 = DAT_0002f3e0;
    iVar15 = DAT_0002f3c4;
    iVar16 = DAT_0002f3c0;
    if (iVar9 + -4 <= (int)(sVar14 + 1)) {
      puVar20[7] = 0x47;
      pcVar13 = (char *)(iVar15 + 0x2f174);
      iVar16 = iVar16 + 0x2f383;
      goto LAB_0002f198;
    }
    if (iVar9 + -5 != __src[uVar18] + sVar14 + 1) {
      puVar20[7] = 0x47;
      pcVar13 = (char *)(iVar2 + 0x2f2b4);
      iVar17 = iVar17 + 0x2f4c3;
LAB_0002f108:
      syslog(3,pcVar13,iVar17,0x47,iVar19,param_2,param_3);
      goto LAB_0002f014;
    }
    pvVar10 = realloc((void *)puVar20[3],uVar18 + puVar20[4]);
    puVar20[3] = pvVar10;
    puVar20[5] = uVar18 + puVar20[4];
    memcpy((void *)((int)pvVar10 + puVar20[4]),__src,uVar18);
    puVar20[4] = puVar20[4] + uVar18;
    if (__src[uVar18] != 0) {
      uVar11 = sdp_gen_tid(param_1);
      iVar19 = puVar20[6];
      *(ushort *)(iVar23 + 1) = (ushort)((uVar11 & 0xff) << 8) | (ushort)(uVar11 >> 8) & 0xff;
      iVar19 = FUN_00029fb8(puVar20[2] + iVar19,0x800 - iVar19,__src + uVar18);
      uVar21 = puVar20[2];
      uVar18 = (iVar19 + puVar20[6]) - 5;
      *(ushort *)(iVar23 + 3) = (ushort)((uVar18 & 0xff) << 8) | (ushort)(uVar18 >> 8) & 0xff;
      iVar19 = FUN_0002a028(param_1,uVar21);
      if (-1 < iVar19) {
        uVar21 = 0;
        goto LAB_0002f234;
      }
      piVar8 = __errno_location();
      syslog(3,(char *)(DAT_0002f3ec + 0x2f37c),DAT_0002f3e8 + 0x2f58b,*piVar8);
      puVar20[7] = *piVar8;
      goto LAB_0002f014;
    }
    uVar12 = 0;
    uVar18 = 0;
    goto LAB_0002f200;
  }
  puVar20[7] = 0x47;
  syslog(3,(char *)(iVar7 + 0x2f264),iVar6 + 0x2f473,uVar22,iVar19,param_2,param_3);
LAB_0002f014:
  uVar12 = 0xffff;
LAB_0002f1a4:
  uVar18 = 0;
LAB_0002f200:
  if (puVar20[4] != 0) {
    __src = (byte *)puVar20[3];
    uVar18 = puVar20[4];
  }
  if ((code *)*puVar20 != (code *)0x0) {
    (*(code *)*puVar20)(uVar22,uVar12,__src,uVar18,puVar20[1]);
  }
  uVar21 = 0xffffffff;
LAB_0002f234:
  free(__ptr);
  return uVar21;
}



/* ===== sdp_service_search_attr_req @ 0002f3f0 size=952 ===== */

void sdp_service_search_attr_req
               (undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
               undefined4 *param_5)

{
  char *pcVar1;
  int *piVar2;
  undefined1 *__ptr;
  char *__ptr_00;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  size_t __size;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  size_t sVar11;
  int iVar12;
  char *__src;
  uint uVar13;
  bool bVar14;
  int local_6c;
  undefined1 uStack_45;
  uint local_44;
  int local_40;
  int local_3c;
  char *local_38;
  size_t sStack_34;
  size_t local_30;
  int local_2c;
  
  piVar7 = *(int **)(DAT_0002f7ac + 0x2f41c + DAT_0002f7a8);
  local_2c = *piVar7;
  local_44 = 0;
  local_40 = 0;
  if (1 < param_3 - 1U) {
    iVar8 = -1;
    piVar2 = __errno_location();
    *piVar2 = 0x16;
    goto LAB_0002f450;
  }
  local_38 = (char *)0x0;
  sStack_34 = 0;
  local_30 = 0;
  __ptr = malloc(0x800);
  __ptr_00 = malloc(0xffff);
  if (__ptr == (undefined1 *)0x0 || __ptr_00 == (char *)0x0) {
    piVar2 = __errno_location();
    iVar8 = 0xc;
  }
  else {
    puVar9 = __ptr + 5;
    *__ptr = 6;
    local_40 = FUN_0002bd88(puVar9,param_2);
    if (-1 < local_40) {
      puVar9[local_40] = 0xff;
      puVar9[local_40 + 1] = 0xff;
      iVar8 = local_40 + 2;
      if (param_3 == 1) {
        uVar6 = 9;
      }
      else {
        uVar6 = 10;
      }
      iVar10 = local_40 + 7;
      local_40 = FUN_0002bbfc(puVar9 + iVar8,param_4,uVar6);
      if (local_40 == -1) {
        piVar2 = __errno_location();
        *piVar2 = 0x16;
        iVar8 = -1;
      }
      else {
        puVar9 = puVar9 + iVar8 + local_40;
        __src = __ptr_00 + 7;
        iVar10 = local_40 + iVar10;
        *param_5 = 0;
        pcVar5 = (char *)0x0;
        local_6c = 0;
        do {
          uVar3 = sdp_gen_tid(param_1);
          *(ushort *)(__ptr + 1) = (ushort)((uVar3 & 0xff) << 8) | (ushort)(uVar3 >> 8) & 0xff;
          iVar8 = FUN_00029fb8(puVar9,0x800 - iVar10,pcVar5);
          iVar8 = iVar8 + iVar10;
          uVar3 = iVar8 - 5;
          *(ushort *)(__ptr + 3) = (ushort)((uVar3 & 0xff) << 8) | (ushort)(uVar3 >> 8) & 0xff;
          iVar8 = sdp_send_req_w4_rsp(param_1,__ptr,__ptr_00,iVar8,&local_44);
          sVar11 = sStack_34;
          if (local_44 < 5) {
LAB_0002f5e4:
            pcVar5 = (char *)(DAT_0002f7b4 + 0x2f5f8);
            iVar8 = DAT_0002f7b0 + 0x2f81b;
            goto LAB_0002f5fc;
          }
          if (iVar8 < 0) goto LAB_0002f53c;
          if (*__ptr_00 == '\x01') goto LAB_0002f4b8;
          if (local_44 - 5 < 2) goto LAB_0002f5e4;
          uVar13 = local_44 - 7;
          uVar3 = (*(ushort *)(__ptr_00 + 5) & 0xff) << 8 | (uint)(*(ushort *)(__ptr_00 + 5) >> 8);
          local_6c = local_6c + uVar3;
          if (uVar13 < uVar3 + 1) {
            pcVar5 = (char *)(DAT_0002f7bc + 0x2f664);
            iVar8 = DAT_0002f7b8 + 0x2f887;
            goto LAB_0002f5fc;
          }
          pcVar1 = __src + uVar3;
          if (__src[uVar3] == '\0') {
            if (sStack_34 != 0) {
              pcVar1 = (char *)0x0;
              goto LAB_0002f68c;
            }
          }
          else {
LAB_0002f68c:
            pcVar5 = pcVar1;
            __size = sStack_34 + uVar3;
            local_38 = realloc(local_38,__size);
            local_30 = __size;
            memcpy(local_38 + sVar11,__src,uVar3);
            sStack_34 = __size;
          }
        } while (pcVar5 != (char *)0x0);
        if (local_6c != 0) {
          sVar11 = sStack_34;
          pcVar5 = local_38;
          if (sStack_34 == 0) {
            sVar11 = uVar13;
            pcVar5 = __src;
          }
          iVar10 = sdp_extract_seqtype(pcVar5,sVar11,&uStack_45,&local_40);
          if ((iVar10 != 0) && (local_40 != 0)) {
            pcVar5 = pcVar5 + iVar10;
            iVar12 = sVar11 - iVar10;
            uVar6 = 0;
LAB_0002f71c:
            local_3c = 0;
            iVar4 = sdp_extract_pdu(pcVar5,iVar12,&local_3c);
            if (iVar4 == 0) {
              pcVar5 = (char *)(DAT_0002f7c4 + 0x2f750);
              iVar8 = DAT_0002f7c0 + 0x2f973;
LAB_0002f5fc:
              syslog(3,pcVar5,iVar8);
              goto LAB_0002f4b8;
            }
            if (local_3c != 0) goto LAB_0002f774;
            sdp_record_free();
            goto LAB_0002f768;
          }
        }
      }
      goto LAB_0002f53c;
    }
    piVar2 = __errno_location();
    iVar8 = 0x16;
  }
  *piVar2 = iVar8;
LAB_0002f4b8:
  iVar8 = -1;
  goto LAB_0002f53c;
LAB_0002f774:
  iVar10 = iVar10 + local_3c;
  iVar12 = iVar12 - local_3c;
  pcVar5 = pcVar5 + local_3c;
  uVar6 = sdp_list_append(uVar6);
  bVar14 = iVar12 != 0;
  iVar4 = 0;
  if (bVar14) {
    iVar4 = local_6c - iVar10;
  }
  if ((!bVar14 || local_6c == iVar10) || iVar4 < 0 != (bVar14 && SBORROW4(local_6c,iVar10)))
  goto LAB_0002f768;
  goto LAB_0002f71c;
LAB_0002f768:
  *param_5 = uVar6;
LAB_0002f53c:
  free(local_38);
  free(__ptr);
  free(__ptr_00);
LAB_0002f450:
  if (local_2c == *piVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar8);
}



/* ===== sdp_set_supp_feat @ 0002f7c8 size=532 ===== */

undefined4 sdp_set_supp_feat(undefined4 param_1,int *param_2)

{
  size_t __size;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  void *__ptr_03;
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int local_3c;
  int *local_38;
  int *local_34;
  
  iVar7 = 0;
  for (piVar5 = param_2; piVar5 != (int *)0x0; piVar5 = (int *)*piVar5) {
    iVar7 = iVar7 + 1;
  }
  __ptr = malloc(iVar7 << 2);
  if (__ptr != (void *)0x0) {
    __ptr_00 = malloc(iVar7 << 2);
    if (__ptr_00 != (void *)0x0) {
      local_34 = (int *)((int)__ptr + -4);
      local_38 = (int *)((int)__ptr_00 + -4);
      for (; param_2 != (int *)0x0; param_2 = (int *)*param_2) {
        puVar6 = (undefined4 *)param_2[1];
        local_3c = 0;
        for (piVar5 = puVar6; piVar5 != (int *)0x0; piVar5 = (int *)*piVar5) {
          local_3c = local_3c + 1;
        }
        __size = local_3c << 2;
        __ptr_01 = malloc(__size);
        if (__ptr_01 == (void *)0x0) goto LAB_0002f8c0;
        __ptr_02 = malloc(__size);
        if (__ptr_02 == (void *)0x0) {
LAB_0002f8bc:
          free(__ptr_01);
          goto LAB_0002f8c0;
        }
        __ptr_03 = malloc(__size);
        iVar1 = 0;
        if (__ptr_03 == (void *)0x0) {
          free(__ptr_01);
          __ptr_01 = __ptr_02;
          goto LAB_0002f8bc;
        }
        for (; puVar6 != (undefined4 *)0x0; puVar6 = (undefined4 *)*puVar6) {
          pbVar2 = (byte *)puVar6[1];
          *(byte **)((int)__ptr_01 + iVar1 * 4) = pbVar2;
          uVar3 = (uint)*pbVar2;
          if (uVar3 < 0x38) {
            if (0x34 < uVar3) {
LAB_0002f928:
              *(undefined4 *)((int)__ptr_02 + iVar1 * 4) = *(undefined4 *)(pbVar2 + 8);
              goto LAB_0002f930;
            }
            uVar3 = uVar3 - 0x25;
LAB_0002f94c:
            if (1 < uVar3) goto LAB_0002f9d0;
            *(undefined4 *)((int)__ptr_02 + iVar1 * 4) = *(undefined4 *)(pbVar2 + 8);
            iVar4 = *(int *)(pbVar2 + 0x24) + -1;
          }
          else {
            if (0x3c < uVar3) {
              if (uVar3 < 0x40) goto LAB_0002f928;
              uVar3 = uVar3 - 0x45;
              goto LAB_0002f94c;
            }
LAB_0002f9d0:
            *(byte **)((int)__ptr_02 + iVar1 * 4) = pbVar2 + 8;
LAB_0002f930:
            iVar4 = 0;
          }
          *(int *)((int)__ptr_03 + iVar1 * 4) = iVar4;
          iVar1 = iVar1 + 1;
        }
        iVar1 = sdp_seq_alloc_with_length(__ptr_01,__ptr_02,__ptr_03,local_3c);
        free(__ptr_01);
        free(__ptr_02);
        free(__ptr_03);
        if (iVar1 == 0) goto LAB_0002f8c0;
        local_34 = local_34 + 1;
        *local_34 = iVar1;
        local_38 = local_38 + 1;
        *local_38 = iVar1;
      }
      iVar7 = sdp_seq_alloc(__ptr,__ptr_00,iVar7);
      if (iVar7 != 0) {
        sdp_attr_replace(param_1,0x200);
        free(__ptr_00);
        free(__ptr);
        return 0;
      }
LAB_0002f8c0:
      free(__ptr_00);
    }
    free(__ptr);
  }
  return 0xffffffff;
}



/* ===== sdp_get_supp_feat @ 0002f9dc size=360 ===== */

undefined4
sdp_get_supp_feat(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  uint uVar4;
  int *piVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  
  iVar1 = DAT_0002fb38;
  pbVar3 = (byte *)sdp_data_get(param_1,0x200,param_3,param_4,param_1,param_2,param_3);
  if ((pbVar3 == (byte *)0x0) || (2 < *pbVar3 - 0x35)) {
                    /* WARNING: Could not recover jumptable at 0x00014648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)PTR_sdp_get_uuidseq_attr_0004de28)(param_1,0x200,param_2);
    return uVar2;
  }
  puVar9 = (undefined4 *)0x0;
  pbVar3 = *(byte **)(pbVar3 + 8);
  while( true ) {
    if (pbVar3 == (byte *)0x0) {
      *param_2 = puVar9;
      return 0;
    }
    if (2 < *pbVar3 - 0x35) break;
    uVar2 = 0;
    for (pbVar10 = *(byte **)(pbVar3 + 8); pbVar10 != (byte *)0x0;
        pbVar10 = *(byte **)(pbVar10 + 0x20)) {
      uVar4 = (uint)*pbVar10;
      if (uVar4 < 0x27) {
        if (0x24 < uVar4) goto LAB_0002fadc;
        if (1 < uVar4 - 8) goto LAB_0002fa9c;
        pbVar6 = pbVar10 + 8;
        iVar7 = 0;
      }
      else {
        if (1 < uVar4 - 0x45) {
LAB_0002fa9c:
          sdp_list_free(uVar2,*(undefined4 *)(iVar1 + 0x2f9fc + DAT_0002fb3c));
          goto LAB_0002fab4;
        }
LAB_0002fadc:
        pbVar6 = *(byte **)(pbVar10 + 8);
        iVar7 = *(int *)(pbVar10 + 0x24) + -1;
      }
      iVar7 = sdp_data_alloc_with_length(uVar4,pbVar6,iVar7);
      if (iVar7 != 0) {
        uVar2 = sdp_list_append(uVar2);
      }
    }
    puVar9 = (undefined4 *)sdp_list_append(puVar9,uVar2);
    pbVar3 = *(byte **)(pbVar3 + 0x20);
  }
LAB_0002fab4:
  while (puVar9 != (undefined4 *)0x0) {
    puVar8 = (undefined4 *)*puVar9;
    sdp_list_free(puVar9,*(undefined4 *)(iVar1 + 0x2f9fc + DAT_0002fb3c));
    puVar9 = puVar8;
  }
  piVar5 = __errno_location();
  *piVar5 = 0x16;
  return 0xffffffff;
}



/* ===== sdp_add_lang_attr @ 0002fb40 size=116 ===== */

void sdp_add_lang_attr(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 uStack_16;
  int local_14;
  
  piVar2 = *(int **)(DAT_0002fbb4 + 0x2fb60 + DAT_0002fbb8);
  local_14 = *piVar2;
  local_1c = DAT_0002fbbc;
  _local_18 = CONCAT22((short)((uint)param_3 >> 0x10),0x100);
  uVar1 = sdp_list_append(0,&local_1c,DAT_0002fbb8,0x100,param_1);
  sdp_set_lang_attr(param_1,uVar1);
  sdp_list_free(uVar1,0);
  if (local_14 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== _fini @ 0002fbc0 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::strcpy @ 0004f000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 0004f004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::writev @ 0004f008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t writev(int __fd,iovec *__iovec,int __count)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0004f00c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::recv @ 0004f010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::connect @ 0004f014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 0004f018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0004f01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0004f028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 0004f02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0004f030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vsnprintf @ 0004f034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::socket @ 0004f038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::select @ 0004f03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::send @ 0004f040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 0004f044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 0004f048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 0004f04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcat @ 0004f050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::bind @ 0004f054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vprintf @ 0004f058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vprintf(char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0004f05c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setsockopt @ 0004f060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 0004f064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcasestr @ 0004f068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcasestr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 0004f06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0004f070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 0004f074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcasecmp @ 0004f078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 0004f07c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 0004f080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 0004f084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strdup @ 0004f088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0004f08c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::poll @ 0004f090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::syslog @ 0004f094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void syslog(int __pri,char *__fmt,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 0004f098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strsep @ 0004f09c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strsep(char **__stringp,char *__delim)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getsockopt @ 0004f0a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t *__optlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0004f0a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 0004f0a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0004f0ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0004f0b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0004f0b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vfprintf @ 0004f0b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0004f0bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ---- rebuilt functions (fixed language + exact size) ----
// libbluetooth.so.3.19.6 — rebuilt function bodies (fixed language)

