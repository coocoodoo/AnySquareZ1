// dbus-daemon — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 0001552c size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::printf @ 00015550 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00048a48)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::_dbus_hash_iter_get_string_key @ 0001555c size=12 ===== */

void _dbus_hash_iter_get_string_key(void)

{
  (*(code *)PTR__dbus_hash_iter_get_string_key_00048a4c)();
  return;
}



/* ===== <EXTERNAL>::dbus_server_set_data @ 00015568 size=12 ===== */

void dbus_server_set_data(void)

{
  (*(code *)PTR_dbus_server_set_data_00048a50)();
  return;
}



/* ===== <EXTERNAL>::setsid @ 00015574 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t setsid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_setsid_00048a54)();
  return _Var1;
}



/* ===== <EXTERNAL>::exit @ 00015580 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00048a58)(__status);
  return;
}



/* ===== <EXTERNAL>::_dbus_string_free @ 0001558c size=12 ===== */

void _dbus_string_free(void)

{
  (*(code *)PTR__dbus_string_free_00048a5c)();
  return;
}



/* ===== <EXTERNAL>::dbus_server_unref @ 00015598 size=12 ===== */

void dbus_server_unref(void)

{
  (*(code *)PTR_dbus_server_unref_00048a60)();
  return;
}



/* ===== <EXTERNAL>::_dbus_hash_iter_remove_entry @ 000155a4 size=12 ===== */

void _dbus_hash_iter_remove_entry(void)

{
  (*(code *)PTR__dbus_hash_iter_remove_entry_00048a64)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_iter_get_basic @ 000155b0 size=12 ===== */

void dbus_message_iter_get_basic(void)

{
  (*(code *)PTR_dbus_message_iter_get_basic_00048a68)();
  return;
}



/* ===== <EXTERNAL>::_dbus_list_find_last @ 000155bc size=12 ===== */

void _dbus_list_find_last(void)

{
  (*(code *)PTR__dbus_list_find_last_00048a6c)();
  return;
}



/* ===== <EXTERNAL>::dbus_connection_get_unix_user @ 000155c8 size=12 ===== */

void dbus_connection_get_unix_user(void)

{
  (*(code *)PTR_dbus_connection_get_unix_user_00048a70)();
  return;
}



/* ===== <EXTERNAL>::dbus_connection_unref @ 000155d4 size=12 ===== */

void dbus_connection_unref(void)

{
  (*(code *)PTR_dbus_connection_unref_00048a74)();
  return;
}



/* ===== <EXTERNAL>::_dbus_set_error_valist @ 000155e0 size=12 ===== */

void _dbus_set_error_valist(void)

{
  (*(code *)PTR__dbus_set_error_valist_00048a78)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_iter_init_append @ 000155ec size=12 ===== */

void dbus_message_iter_init_append(void)

{
  (*(code *)PTR_dbus_message_iter_init_append_00048a7c)();
  return;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 000155f8 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00048a80)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_is_method_call @ 00015604 size=12 ===== */

void dbus_message_is_method_call(void)

{
  (*(code *)PTR_dbus_message_is_method_call_00048a84)();
  return;
}



/* ===== <EXTERNAL>::pipe2 @ 00015610 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pipe2(int *__pipedes,int __flags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pipe2_00048a88)(__pipedes);
  return iVar1;
}



/* ===== <EXTERNAL>::_dbus_type_reader_get_signature @ 0001561c size=12 ===== */

void _dbus_type_reader_get_signature(void)

{
  (*(code *)PTR__dbus_type_reader_get_signature_00048a8c)();
  return;
}



/* ===== <EXTERNAL>::_dbus_delete_file @ 00015628 size=12 ===== */

void _dbus_delete_file(void)

{
  (*(code *)PTR__dbus_delete_file_00048a90)();
  return;
}



/* ===== <EXTERNAL>::pwrite64 @ 00015634 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t pwrite64(int __fd,void *__buf,size_t __n,__off64_t __offset)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_pwrite64_00048a94)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::XML_GetErrorCode @ 00015640 size=12 ===== */

void XML_GetErrorCode(void)

{
  (*(code *)PTR_XML_GetErrorCode_00048a98)();
  return;
}



/* ===== <EXTERNAL>::dbus_move_error @ 0001564c size=12 ===== */

void dbus_move_error(void)

{
  (*(code *)PTR_dbus_move_error_00048a9c)();
  return;
}



/* ===== <EXTERNAL>::dbus_connection_get_dispatch_status @ 00015658 size=12 ===== */

void dbus_connection_get_dispatch_status(void)

{
  (*(code *)PTR_dbus_connection_get_dispatch_status_00048aa0)();
  return;
}



/* ===== <EXTERNAL>::_dbus_generate_uuid @ 00015664 size=12 ===== */

void _dbus_generate_uuid(void)

{
  (*(code *)PTR__dbus_generate_uuid_00048aa4)();
  return;
}



/* ===== <EXTERNAL>::strstr @ 00015670 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_00048aa8)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::dbus_connection_get_adt_audit_session_data @ 0001567c size=12 ===== */

void dbus_connection_get_adt_audit_session_data(void)

{
  (*(code *)PTR_dbus_connection_get_adt_audit_session_data_00048aac)();
  return;
}



/* ===== <EXTERNAL>::_dbus_write_socket @ 00015688 size=12 ===== */

void _dbus_write_socket(void)

{
  (*(code *)PTR__dbus_write_socket_00048ab0)();
  return;
}



/* ===== <EXTERNAL>::_dbus_hash_table_free_preallocated_entry @ 00015694 size=12 ===== */

void _dbus_hash_table_free_preallocated_entry(void)

{
  (*(code *)PTR__dbus_hash_table_free_preallocated_entry_00048ab4)();
  return;
}



/* ===== <EXTERNAL>::_dbus_mem_pool_free @ 000156a0 size=12 ===== */

void _dbus_mem_pool_free(void)

{
  (*(code *)PTR__dbus_mem_pool_free_00048ab8)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_get_sender @ 000156ac size=12 ===== */

void dbus_message_get_sender(void)

{
  (*(code *)PTR_dbus_message_get_sender_00048abc)();
  return;
}



/* ===== <EXTERNAL>::dbus_set_error_const @ 000156b8 size=12 ===== */

void dbus_set_error_const(void)

{
  (*(code *)PTR_dbus_set_error_const_00048ac0)();
  return;
}



/* ===== <EXTERNAL>::fcntl64 @ 000156c4 size=12 ===== */

void fcntl64(void)

{
  (*(code *)PTR_fcntl64_00048ac4)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_iter_append_basic @ 000156d0 size=12 ===== */

void dbus_message_iter_append_basic(void)

{
  (*(code *)PTR_dbus_message_iter_append_basic_00048ac8)();
  return;
}



/* ===== <EXTERNAL>::dbus_connection_set_timeout_functions @ 000156dc size=12 ===== */

void dbus_connection_set_timeout_functions(void)

{
  (*(code *)PTR_dbus_connection_set_timeout_functions_00048acc)();
  return;
}



/* ===== <EXTERNAL>::_dbus_hash_iter_get_int_key @ 000156e8 size=12 ===== */

void _dbus_hash_iter_get_int_key(void)

{
  (*(code *)PTR__dbus_hash_iter_get_int_key_00048ad0)();
  return;
}



/* ===== <EXTERNAL>::_dbus_timeout_restarted @ 000156f4 size=12 ===== */

void _dbus_timeout_restarted(void)

{
  (*(code *)PTR__dbus_timeout_restarted_00048ad4)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_get_path @ 00015700 size=12 ===== */

void dbus_message_get_path(void)

{
  (*(code *)PTR_dbus_message_get_path_00048ad8)();
  return;
}



/* ===== <EXTERNAL>::dbus_server_set_timeout_functions @ 0001570c size=12 ===== */

void dbus_server_set_timeout_functions(void)

{
  (*(code *)PTR_dbus_server_set_timeout_functions_00048adc)();
  return;
}



/* ===== <EXTERNAL>::close @ 00015718 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00048ae0)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::epoll_wait @ 00015724 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_wait(int __epfd,epoll_event *__events,int __maxevents,int __timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_epoll_wait_00048ae4)(__epfd);
  return iVar1;
}



/* ===== <EXTERNAL>::_dbus_type_reader_next @ 00015730 size=12 ===== */

void _dbus_type_reader_next(void)

{
  (*(code *)PTR__dbus_type_reader_next_00048ae8)();
  return;
}



/* ===== <EXTERNAL>::strchr @ 0001573c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_00048aec)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::dbus_connection_get_is_connected @ 00015748 size=12 ===== */

void dbus_connection_get_is_connected(void)

{
  (*(code *)PTR_dbus_connection_get_is_connected_00048af0)();
  return;
}



/* ===== <EXTERNAL>::_dbus_list_get_first @ 00015754 size=12 ===== */

void _dbus_list_get_first(void)

{
  (*(code *)PTR__dbus_list_get_first_00048af4)();
  return;
}



/* ===== <EXTERNAL>::_dbus_string_append_int @ 00015760 size=12 ===== */

void _dbus_string_append_int(void)

{
  (*(code *)PTR__dbus_string_append_int_00048af8)();
  return;
}



/* ===== <EXTERNAL>::_dbus_watch_list_new @ 0001576c size=12 ===== */

void _dbus_watch_list_new(void)

{
  (*(code *)PTR__dbus_watch_list_new_00048afc)();
  return;
}



/* ===== <EXTERNAL>::_dbus_hash_iter_get_value @ 00015778 size=12 ===== */

void _dbus_hash_iter_get_value(void)

{
  (*(code *)PTR__dbus_hash_iter_get_value_00048b00)();
  return;
}



/* ===== <EXTERNAL>::dbus_watch_get_socket @ 00015784 size=12 ===== */

void dbus_watch_get_socket(void)

{
  (*(code *)PTR_dbus_watch_get_socket_00048b04)();
  return;
}



/* ===== <EXTERNAL>::umask @ 00015790 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__mode_t umask(__mode_t __mask)

{
  __mode_t _Var1;
  
  _Var1 = (*(code *)PTR_umask_00048b08)(__mask);
  return _Var1;
}



/* ===== <EXTERNAL>::dbus_watch_get_flags @ 0001579c size=12 ===== */

void dbus_watch_get_flags(void)

{
  (*(code *)PTR_dbus_watch_get_flags_00048b0c)();
  return;
}



/* ===== <EXTERNAL>::_dbus_hash_iter_get_uintptr_key @ 000157a8 size=12 ===== */

void _dbus_hash_iter_get_uintptr_key(void)

{
  (*(code *)PTR__dbus_hash_iter_get_uintptr_key_00048b10)();
  return;
}



/* ===== <EXTERNAL>::_dbus_list_get_last @ 000157b4 size=12 ===== */

void _dbus_list_get_last(void)

{
  (*(code *)PTR__dbus_list_get_last_00048b14)();
  return;
}



/* ===== <EXTERNAL>::_dbus_watch_unref @ 000157c0 size=12 ===== */

void _dbus_watch_unref(void)

{
  (*(code *)PTR__dbus_watch_unref_00048b18)();
  return;
}



/* ===== <EXTERNAL>::strncmp @ 000157cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00048b1c)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::epoll_create1 @ 000157d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_create1(int __flags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_epoll_create1_00048b20)(__flags);
  return iVar1;
}



/* ===== <EXTERNAL>::dbus_message_get_destination @ 000157e4 size=12 ===== */

void dbus_message_get_destination(void)

{
  (*(code *)PTR_dbus_message_get_destination_00048b24)();
  return;
}



/* ===== <EXTERNAL>::XML_GetCurrentLineNumber @ 000157f0 size=12 ===== */

void XML_GetCurrentLineNumber(void)

{
  (*(code *)PTR_XML_GetCurrentLineNumber_00048b28)();
  return;
}



/* ===== <EXTERNAL>::dbus_realloc @ 000157fc size=12 ===== */

void dbus_realloc(void)

{
  (*(code *)PTR_dbus_realloc_00048b2c)();
  return;
}



/* ===== <EXTERNAL>::strerror @ 00015808 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00048b30)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::dbus_server_disconnect @ 00015814 size=12 ===== */

void dbus_server_disconnect(void)

{
  (*(code *)PTR_dbus_server_disconnect_00048b34)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_ref @ 00015820 size=12 ===== */

void dbus_message_ref(void)

{
  (*(code *)PTR_dbus_message_ref_00048b38)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_get_args @ 0001582c size=12 ===== */

void dbus_message_get_args(void)

{
  (*(code *)PTR_dbus_message_get_args_00048b3c)();
  return;
}



/* ===== <EXTERNAL>::_dbus_credentials_new_from_current_process @ 00015838 size=12 ===== */

void _dbus_credentials_new_from_current_process(void)

{
  (*(code *)PTR__dbus_credentials_new_from_current_process_00048b40)();
  return;
}



/* ===== <EXTERNAL>::_dbus_list_clear @ 00015844 size=12 ===== */

void _dbus_list_clear(void)

{
  (*(code *)PTR__dbus_list_clear_00048b44)();
  return;
}



/* ===== <EXTERNAL>::_dbus_string_append @ 00015850 size=12 ===== */

void _dbus_string_append(void)

{
  (*(code *)PTR__dbus_string_append_00048b48)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_type_to_string @ 0001585c size=12 ===== */

void dbus_message_type_to_string(void)

{
  (*(code *)PTR_dbus_message_type_to_string_00048b4c)();
  return;
}



/* ===== <EXTERNAL>::_dbus_strdup @ 00015868 size=12 ===== */

void _dbus_strdup(void)

{
  (*(code *)PTR__dbus_strdup_00048b50)();
  return;
}



/* ===== <EXTERNAL>::fputs @ 00015874 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_00048b54)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::_dbus_watch_set_oom_last_time @ 00015880 size=12 ===== */

void _dbus_watch_set_oom_last_time(void)

{
  (*(code *)PTR__dbus_watch_set_oom_last_time_00048b58)();
  return;
}



/* ===== <EXTERNAL>::dbus_connection_set_unix_user_function @ 00015898 size=12 ===== */

void dbus_connection_set_unix_user_function(void)

{
  (*(code *)PTR_dbus_connection_set_unix_user_function_00048b60)();
  return;
}



/* ===== <EXTERNAL>::_dbus_register_shutdown_func @ 000158a4 size=12 ===== */

void _dbus_register_shutdown_func(void)

{
  (*(code *)PTR__dbus_register_shutdown_func_00048b64)();
  return;
}



/* ===== <EXTERNAL>::_dbus_read @ 000158b0 size=12 ===== */

void _dbus_read(void)

{
  (*(code *)PTR__dbus_read_00048b68)();
  return;
}



/* ===== <EXTERNAL>::_dbus_list_insert_before_link @ 000158c8 size=12 ===== */

void _dbus_list_insert_before_link(void)

{
  (*(code *)PTR__dbus_list_insert_before_link_00048b70)();
  return;
}



/* ===== <EXTERNAL>::_dbus_watch_new @ 000158d4 size=12 ===== */

void _dbus_watch_new(void)

{
  (*(code *)PTR__dbus_watch_new_00048b74)();
  return;
}



/* ===== <EXTERNAL>::_dbus_getenv @ 000158e0 size=12 ===== */

void _dbus_getenv(void)

{
  (*(code *)PTR__dbus_getenv_00048b78)();
  return;
}



/* ===== <EXTERNAL>::_dbus_string_find_eol @ 000158ec size=12 ===== */

void _dbus_string_find_eol(void)

{
  (*(code *)PTR__dbus_string_find_eol_00048b7c)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_get_reply_serial @ 000158f8 size=12 ===== */

void dbus_message_get_reply_serial(void)

{
  (*(code *)PTR_dbus_message_get_reply_serial_00048b80)();
  return;
}



/* ===== <EXTERNAL>::getgrnam_r @ 00015904 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getgrnam_r(char *__name,group *__resultbuf,char *__buffer,size_t __buflen,group **__result)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getgrnam_r_00048b84)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::_dbus_timeout_restart @ 0001591c size=12 ===== */

void _dbus_timeout_restart(void)

{
  (*(code *)PTR__dbus_timeout_restart_00048b8c)();
  return;
}



/* ===== <EXTERNAL>::sysconf @ 00015928 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long sysconf(int __name)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_sysconf_00048b90)(__name);
  return lVar1;
}



/* ===== <EXTERNAL>::dbus_message_set_error_name @ 00015934 size=12 ===== */

void dbus_message_set_error_name(void)

{
  (*(code *)PTR_dbus_message_set_error_name_00048b94)();
  return;
}



/* ===== <EXTERNAL>::_dbus_list_get_stats @ 00015940 size=12 ===== */

void _dbus_list_get_stats(void)

{
  (*(code *)PTR__dbus_list_get_stats_00048b98)();
  return;
}



/* ===== <EXTERNAL>::_dbus_string_copy @ 0001594c size=12 ===== */

void _dbus_string_copy(void)

{
  (*(code *)PTR__dbus_string_copy_00048b9c)();
  return;
}



/* ===== <EXTERNAL>::_exit @ 00015958 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _exit(int __status)

{
  (*(code *)PTR__exit_00048ba0)(__status);
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00015964 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00048ba4)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::_dbus_concat_dir_and_file @ 00015970 size=12 ===== */

void _dbus_concat_dir_and_file(void)

{
  (*(code *)PTR__dbus_concat_dir_and_file_00048ba8)();
  return;
}



/* ===== <EXTERNAL>::waitpid @ 0001597c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_waitpid_00048bac)(__pid);
  return _Var1;
}



/* ===== <EXTERNAL>::_dbus_user_database_lookup @ 00015988 size=12 ===== */

void _dbus_user_database_lookup(void)

{
  (*(code *)PTR__dbus_user_database_lookup_00048bb0)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_get_signature @ 00015994 size=12 ===== */

void dbus_message_get_signature(void)

{
  (*(code *)PTR_dbus_message_get_signature_00048bb4)();
  return;
}



/* ===== <EXTERNAL>::_dbus_list_prepend_link @ 000159a0 size=12 ===== */

void _dbus_list_prepend_link(void)

{
  (*(code *)PTR__dbus_list_prepend_link_00048bb8)();
  return;
}



/* ===== <EXTERNAL>::_dbus_credentials_unref @ 000159ac size=12 ===== */

void _dbus_credentials_unref(void)

{
  (*(code *)PTR__dbus_credentials_unref_00048bbc)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_get_serial @ 000159b8 size=12 ===== */

void dbus_message_get_serial(void)

{
  (*(code *)PTR_dbus_message_get_serial_00048bc0)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_unref @ 000159c4 size=12 ===== */

void dbus_message_unref(void)

{
  (*(code *)PTR_dbus_message_unref_00048bc4)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_set_sender @ 000159d0 size=12 ===== */

void dbus_message_set_sender(void)

{
  (*(code *)PTR_dbus_message_set_sender_00048bc8)();
  return;
}



/* ===== <EXTERNAL>::memcpy @ 000159dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00048bcc)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::_dbus_string_validate_utf8 @ 000159e8 size=12 ===== */

void _dbus_string_validate_utf8(void)

{
  (*(code *)PTR__dbus_string_validate_utf8_00048bd0)();
  return;
}



/* ===== <EXTERNAL>::dbus_connection_get_outgoing_size @ 000159f4 size=12 ===== */

void dbus_connection_get_outgoing_size(void)

{
  (*(code *)PTR_dbus_connection_get_outgoing_size_00048bd4)();
  return;
}



/* ===== <EXTERNAL>::_dbus_watch_list_remove_watch @ 00015a00 size=12 ===== */

void _dbus_watch_list_remove_watch(void)

{
  (*(code *)PTR__dbus_watch_list_remove_watch_00048bd8)();
  return;
}



/* ===== <EXTERNAL>::dbus_connection_set_max_received_size @ 00015a0c size=12 ===== */

void dbus_connection_set_max_received_size(void)

{
  (*(code *)PTR_dbus_connection_set_max_received_size_00048bdc)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_iter_close_container @ 00015a18 size=12 ===== */

void dbus_message_iter_close_container(void)

{
  (*(code *)PTR_dbus_message_iter_close_container_00048be0)();
  return;
}



/* ===== <EXTERNAL>::_dbus_geteuid @ 00015a24 size=12 ===== */

void _dbus_geteuid(void)

{
  (*(code *)PTR__dbus_geteuid_00048be4)();
  return;
}



/* ===== <EXTERNAL>::_dbus_poll @ 00015a30 size=12 ===== */

void _dbus_poll(void)

{
  (*(code *)PTR__dbus_poll_00048be8)();
  return;
}



/* ===== <EXTERNAL>::_dbus_pipe_is_stdout_or_stderr @ 00015a3c size=12 ===== */

void _dbus_pipe_is_stdout_or_stderr(void)

{
  (*(code *)PTR__dbus_pipe_is_stdout_or_stderr_00048bec)();
  return;
}



/* ===== <EXTERNAL>::dbus_error_free @ 00015a48 size=12 ===== */

void dbus_error_free(void)

{
  (*(code *)PTR_dbus_error_free_00048bf0)();
  return;
}



/* ===== <EXTERNAL>::_dbus_hash_table_insert_string @ 00015a54 size=12 ===== */

void _dbus_hash_table_insert_string(void)

{
  (*(code *)PTR__dbus_hash_table_insert_string_00048bf4)();
  return;
}



/* ===== <EXTERNAL>::_dbus_warn @ 00015a60 size=12 ===== */

void _dbus_warn(void)

{
  (*(code *)PTR__dbus_warn_00048bf8)();
  return;
}



/* ===== <EXTERNAL>::stat64 @ 00015a6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat64_00048bfc)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::fork @ 00015a78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_fork_00048c00)();
  return _Var1;
}



/* ===== <EXTERNAL>::setuid @ 00015a84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setuid(__uid_t __uid)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setuid_00048c04)(__uid);
  return iVar1;
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 00015a90 size=12 ===== */

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00048c08)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_new_method_return @ 00015a9c size=12 ===== */

void dbus_message_new_method_return(void)

{
  (*(code *)PTR_dbus_message_new_method_return_00048c0c)();
  return;
}



/* ===== <EXTERNAL>::_dbus_connection_get_linux_security_label @ 00015aa8 size=12 ===== */

void _dbus_connection_get_linux_security_label(void)

{
  (*(code *)PTR__dbus_connection_get_linux_security_label_00048c10)();
  return;
}



/* ===== <EXTERNAL>::_dbus_close @ 00015ab4 size=12 ===== */

void _dbus_close(void)

{
  (*(code *)PTR__dbus_close_00048c14)();
  return;
}



/* ===== <EXTERNAL>::_dbus_string_starts_with_c_str @ 00015ac0 size=12 ===== */

void _dbus_string_starts_with_c_str(void)

{
  (*(code *)PTR__dbus_string_starts_with_c_str_00048c18)();
  return;
}



/* ===== <EXTERNAL>::XML_GetCurrentColumnNumber @ 00015acc size=12 ===== */

void XML_GetCurrentColumnNumber(void)

{
  (*(code *)PTR_XML_GetCurrentColumnNumber_00048c1c)();
  return;
}



/* ===== <EXTERNAL>::_dbus_get_monotonic_time @ 00015ad8 size=12 ===== */

void _dbus_get_monotonic_time(void)

{
  (*(code *)PTR__dbus_get_monotonic_time_00048c20)();
  return;
}



/* ===== <EXTERNAL>::XML_SetCharacterDataHandler @ 00015ae4 size=12 ===== */

void XML_SetCharacterDataHandler(void)

{
  (*(code *)PTR_XML_SetCharacterDataHandler_00048c24)();
  return;
}



/* ===== <EXTERNAL>::open64 @ 00015af0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open64_00048c28)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::_dbus_list_alloc_link @ 00015afc size=12 ===== */

void _dbus_list_alloc_link(void)

{
  (*(code *)PTR__dbus_list_alloc_link_00048c2c)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_set_no_reply @ 00015b08 size=12 ===== */

void dbus_message_set_no_reply(void)

{
  (*(code *)PTR_dbus_message_set_no_reply_00048c30)();
  return;
}



/* ===== <EXTERNAL>::_dbus_string_append_printf_valist @ 00015b14 size=12 ===== */

void _dbus_string_append_printf_valist(void)

{
  (*(code *)PTR__dbus_string_append_printf_valist_00048c34)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_get_error_name @ 00015b20 size=12 ===== */

void dbus_message_get_error_name(void)

{
  (*(code *)PTR_dbus_message_get_error_name_00048c38)();
  return;
}



/* ===== <EXTERNAL>::XML_ParserFree @ 00015b2c size=12 ===== */

void XML_ParserFree(void)

{
  (*(code *)PTR_XML_ParserFree_00048c3c)();
  return;
}



/* ===== <EXTERNAL>::_dbus_connection_set_pending_fds_function @ 00015b38 size=12 ===== */

void _dbus_connection_set_pending_fds_function(void)

{
  (*(code *)PTR__dbus_connection_set_pending_fds_function_00048c40)();
  return;
}



/* ===== <EXTERNAL>::dbus_server_allocate_data_slot @ 00015b44 size=12 ===== */

void dbus_server_allocate_data_slot(void)

{
  (*(code *)PTR_dbus_server_allocate_data_slot_00048c44)();
  return;
}



/* ===== <EXTERNAL>::_dbus_validate_interface @ 00015b50 size=12 ===== */

void _dbus_validate_interface(void)

{
  (*(code *)PTR__dbus_validate_interface_00048c48)();
  return;
}



/* ===== <EXTERNAL>::dbus_malloc0 @ 00015b5c size=12 ===== */

void dbus_malloc0(void)

{
  (*(code *)PTR_dbus_malloc0_00048c4c)();
  return;
}



/* ===== <EXTERNAL>::dbus_connection_set_max_message_unix_fds @ 00015b68 size=12 ===== */

void dbus_connection_set_max_message_unix_fds(void)

{
  (*(code *)PTR_dbus_connection_set_max_message_unix_fds_00048c50)();
  return;
}



/* ===== <EXTERNAL>::getrlimit64 @ 00015b74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */

int getrlimit64(__rlimit_resource_t __resource,rlimit64 *__rlimits)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getrlimit64_00048c54)(__resource);
  return iVar1;
}



/* ===== <EXTERNAL>::XML_SetUserData @ 00015b80 size=12 ===== */

void XML_SetUserData(void)

{
  (*(code *)PTR_XML_SetUserData_00048c58)();
  return;
}



/* ===== <EXTERNAL>::closedir @ 00015b8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_closedir_00048c5c)(__dirp);
  return iVar1;
}



/* ===== <EXTERNAL>::_dbus_hash_table_lookup_uintptr @ 00015b98 size=12 ===== */

void _dbus_hash_table_lookup_uintptr(void)

{
  (*(code *)PTR__dbus_hash_table_lookup_uintptr_00048c60)();
  return;
}



/* ===== <EXTERNAL>::_dbus_user_database_get_uid @ 00015ba4 size=12 ===== */

void _dbus_user_database_get_uid(void)

{
  (*(code *)PTR__dbus_user_database_get_uid_00048c64)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_iter_append_fixed_array @ 00015bb0 size=12 ===== */

void dbus_message_iter_append_fixed_array(void)

{
  (*(code *)PTR_dbus_message_iter_append_fixed_array_00048c68)();
  return;
}



/* ===== <EXTERNAL>::dbus_watch_get_enabled @ 00015bbc size=12 ===== */

void dbus_watch_get_enabled(void)

{
  (*(code *)PTR_dbus_watch_get_enabled_00048c6c)();
  return;
}



/* ===== <EXTERNAL>::_dbus_string_equal_c_str @ 00015bc8 size=12 ===== */

void _dbus_string_equal_c_str(void)

{
  (*(code *)PTR__dbus_string_equal_c_str_00048c70)();
  return;
}



/* ===== <EXTERNAL>::dbus_connection_set_max_received_unix_fds @ 00015bd4 size=12 ===== */

void dbus_connection_set_max_received_unix_fds(void)

{
  (*(code *)PTR_dbus_connection_set_max_received_unix_fds_00048c74)();
  return;
}



/* ===== <EXTERNAL>::_dbus_string_skip_white @ 00015be0 size=12 ===== */

void _dbus_string_skip_white(void)

{
  (*(code *)PTR__dbus_string_skip_white_00048c78)();
  return;
}



/* ===== <EXTERNAL>::_dbus_fd_set_close_on_exec @ 00015bec size=12 ===== */

void _dbus_fd_set_close_on_exec(void)

{
  (*(code *)PTR__dbus_fd_set_close_on_exec_00048c7c)();
  return;
}



/* ===== <EXTERNAL>::_dbus_hash_table_insert_int @ 00015c04 size=12 ===== */

void _dbus_hash_table_insert_int(void)

{
  (*(code *)PTR__dbus_hash_table_insert_int_00048c84)();
  return;
}



/* ===== <EXTERNAL>::memset @ 00015c10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00048c88)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::sigaction @ 00015c1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigaction_00048c8c)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::_dbus_hash_iter_next @ 00015c28 size=12 ===== */

void _dbus_hash_iter_next(void)

{
  (*(code *)PTR__dbus_hash_iter_next_00048c90)();
  return;
}



/* ===== <EXTERNAL>::dbus_malloc @ 00015c34 size=12 ===== */

void dbus_malloc(void)

{
  (*(code *)PTR_dbus_malloc_00048c94)();
  return;
}



/* ===== <EXTERNAL>::XML_SetHashSalt @ 00015c40 size=12 ===== */

void XML_SetHashSalt(void)

{
  (*(code *)PTR_XML_SetHashSalt_00048c98)();
  return;
}



/* ===== <EXTERNAL>::_dbus_hash_table_remove_string @ 00015c4c size=12 ===== */

void _dbus_hash_table_remove_string(void)

{
  (*(code *)PTR__dbus_hash_table_remove_string_00048c9c)();
  return;
}



/* ===== <EXTERNAL>::_dbus_user_database_get_username @ 00015c58 size=12 ===== */

void _dbus_user_database_get_username(void)

{
  (*(code *)PTR__dbus_user_database_get_username_00048ca0)();
  return;
}



/* ===== <EXTERNAL>::inotify_init1 @ 00015c64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int inotify_init1(int __flags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_inotify_init1_00048ca4)(__flags);
  return iVar1;
}



/* ===== <EXTERNAL>::_dbus_pipe_init_stdout @ 00015c70 size=12 ===== */

void _dbus_pipe_init_stdout(void)

{
  (*(code *)PTR__dbus_pipe_init_stdout_00048ca8)();
  return;
}



/* ===== <EXTERNAL>::dbus_timeout_get_interval @ 00015c7c size=12 ===== */

void dbus_timeout_get_interval(void)

{
  (*(code *)PTR_dbus_timeout_get_interval_00048cac)();
  return;
}



/* ===== <EXTERNAL>::XML_Parse @ 00015c88 size=12 ===== */

void XML_Parse(void)

{
  (*(code *)PTR_XML_Parse_00048cb0)();
  return;
}



/* ===== <EXTERNAL>::_dbus_list_get_last_link @ 00015c94 size=12 ===== */

void _dbus_list_get_last_link(void)

{
  (*(code *)PTR__dbus_list_get_last_link_00048cb4)();
  return;
}



/* ===== <EXTERNAL>::dbus_server_get_data @ 00015ca0 size=12 ===== */

void dbus_server_get_data(void)

{
  (*(code *)PTR_dbus_server_get_data_00048cb8)();
  return;
}



/* ===== <EXTERNAL>::dbus_connection_get_unix_process_id @ 00015cac size=12 ===== */

void dbus_connection_get_unix_process_id(void)

{
  (*(code *)PTR_dbus_connection_get_unix_process_id_00048cbc)();
  return;
}



/* ===== <EXTERNAL>::_dbus_list_pop_first @ 00015cb8 size=12 ===== */

void _dbus_list_pop_first(void)

{
  (*(code *)PTR__dbus_list_pop_first_00048cc0)();
  return;
}



/* ===== <EXTERNAL>::_dbus_hash_table_remove_int @ 00015cc4 size=12 ===== */

void _dbus_hash_table_remove_int(void)

{
  (*(code *)PTR__dbus_hash_table_remove_int_00048cc4)();
  return;
}



/* ===== <EXTERNAL>::_dbus_string_set_length @ 00015cd0 size=12 ===== */

void _dbus_string_set_length(void)

{
  (*(code *)PTR__dbus_string_set_length_00048cc8)();
  return;
}



/* ===== <EXTERNAL>::_dbus_hash_table_insert_string_preallocated @ 00015cdc size=12 ===== */

void _dbus_hash_table_insert_string_preallocated(void)

{
  (*(code *)PTR__dbus_hash_table_insert_string_preallocated_00048ccc)();
  return;
}



/* ===== <EXTERNAL>::dbus_server_get_address @ 00015ce8 size=12 ===== */

void dbus_server_get_address(void)

{
  (*(code *)PTR_dbus_server_get_address_00048cd0)();
  return;
}



/* ===== <EXTERNAL>::dbus_connection_get_outgoing_unix_fds @ 00015cf4 size=12 ===== */

void dbus_connection_get_outgoing_unix_fds(void)

{
  (*(code *)PTR_dbus_connection_get_outgoing_unix_fds_00048cd4)();
  return;
}



/* ===== <EXTERNAL>::_dbus_watch_invalidate @ 00015d00 size=12 ===== */

void _dbus_watch_invalidate(void)

{
  (*(code *)PTR__dbus_watch_invalidate_00048cd8)();
  return;
}



/* ===== <EXTERNAL>::_dbus_hash_table_to_array @ 00015d0c size=12 ===== */

void _dbus_hash_table_to_array(void)

{
  (*(code *)PTR__dbus_hash_table_to_array_00048cdc)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_has_signature @ 00015d18 size=12 ===== */

void dbus_message_has_signature(void)

{
  (*(code *)PTR_dbus_message_has_signature_00048ce0)();
  return;
}



/* ===== <EXTERNAL>::_dbus_type_reader_init_types_only @ 00015d24 size=12 ===== */

void _dbus_type_reader_init_types_only(void)

{
  (*(code *)PTR__dbus_type_reader_init_types_only_00048ce4)();
  return;
}



/* ===== <EXTERNAL>::_dbus_list_remove_link @ 00015d30 size=12 ===== */

void _dbus_list_remove_link(void)

{
  (*(code *)PTR__dbus_list_remove_link_00048ce8)();
  return;
}



/* ===== <EXTERNAL>::_dbus_string_copy_data @ 00015d3c size=12 ===== */

void _dbus_string_copy_data(void)

{
  (*(code *)PTR__dbus_string_copy_data_00048cec)();
  return;
}



/* ===== <EXTERNAL>::_dbus_mem_pool_dealloc @ 00015d48 size=12 ===== */

void _dbus_mem_pool_dealloc(void)

{
  (*(code *)PTR__dbus_mem_pool_dealloc_00048cf0)();
  return;
}



/* ===== <EXTERNAL>::_dbus_validate_path @ 00015d54 size=12 ===== */

void _dbus_validate_path(void)

{
  (*(code *)PTR__dbus_validate_path_00048cf4)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_iter_abandon_container @ 00015d60 size=12 ===== */

void dbus_message_iter_abandon_container(void)

{
  (*(code *)PTR_dbus_message_iter_abandon_container_00048cf8)();
  return;
}



/* ===== <EXTERNAL>::epoll_ctl @ 00015d6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_ctl(int __epfd,int __op,int __fd,epoll_event *__event)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_epoll_ctl_00048cfc)(__epfd);
  return iVar1;
}



/* ===== <EXTERNAL>::_dbus_hash_table_new @ 00015d78 size=12 ===== */

void _dbus_hash_table_new(void)

{
  (*(code *)PTR__dbus_hash_table_new_00048d00)();
  return;
}



/* ===== <EXTERNAL>::_dbus_watch_ref @ 00015d84 size=12 ===== */

void _dbus_watch_ref(void)

{
  (*(code *)PTR__dbus_watch_ref_00048d04)();
  return;
}



/* ===== <EXTERNAL>::_dbus_pipe_write @ 00015d90 size=12 ===== */

void _dbus_pipe_write(void)

{
  (*(code *)PTR__dbus_pipe_write_00048d08)();
  return;
}



/* ===== <EXTERNAL>::_dbus_list_unlink @ 00015d9c size=12 ===== */

void _dbus_list_unlink(void)

{
  (*(code *)PTR__dbus_list_unlink_00048d0c)();
  return;
}



/* ===== <EXTERNAL>::_dbus_type_reader_get_current_type @ 00015da8 size=12 ===== */

void _dbus_type_reader_get_current_type(void)

{
  (*(code *)PTR__dbus_type_reader_get_current_type_00048d10)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_has_path @ 00015db4 size=12 ===== */

void dbus_message_has_path(void)

{
  (*(code *)PTR_dbus_message_has_path_00048d14)();
  return;
}



/* ===== <EXTERNAL>::_dbus_list_remove @ 00015dc0 size=12 ===== */

void _dbus_list_remove(void)

{
  (*(code *)PTR__dbus_list_remove_00048d18)();
  return;
}



/* ===== <EXTERNAL>::_dbus_list_length_is_one @ 00015dcc size=12 ===== */

void _dbus_list_length_is_one(void)

{
  (*(code *)PTR__dbus_list_length_is_one_00048d1c)();
  return;
}



/* ===== <EXTERNAL>::epoll_create @ 00015dd8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_create(int __size)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_epoll_create_00048d20)(__size);
  return iVar1;
}



/* ===== <EXTERNAL>::XML_ParserCreate_MM @ 00015de4 size=12 ===== */

void XML_ParserCreate_MM(void)

{
  (*(code *)PTR_XML_ParserCreate_MM_00048d24)();
  return;
}



/* ===== <EXTERNAL>::_dbus_watch_get_pollable @ 00015df0 size=12 ===== */

void _dbus_watch_get_pollable(void)

{
  (*(code *)PTR__dbus_watch_get_pollable_00048d28)();
  return;
}



/* ===== <EXTERNAL>::read @ 00015dfc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_00048d2c)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::dbus_message_new_signal @ 00015e08 size=12 ===== */

void dbus_message_new_signal(void)

{
  (*(code *)PTR_dbus_message_new_signal_00048d30)();
  return;
}



/* ===== <EXTERNAL>::_dbus_list_free_link @ 00015e14 size=12 ===== */

void _dbus_list_free_link(void)

{
  (*(code *)PTR__dbus_list_free_link_00048d34)();
  return;
}



/* ===== <EXTERNAL>::_dbus_timeout_unref @ 00015e20 size=12 ===== */

void _dbus_timeout_unref(void)

{
  (*(code *)PTR__dbus_timeout_unref_00048d38)();
  return;
}



/* ===== <EXTERNAL>::_dbus_user_database_get_system @ 00015e2c size=12 ===== */

void _dbus_user_database_get_system(void)

{
  (*(code *)PTR__dbus_user_database_get_system_00048d3c)();
  return;
}



/* ===== <EXTERNAL>::_dbus_user_database_unlock_system @ 00015e38 size=12 ===== */

void _dbus_user_database_unlock_system(void)

{
  (*(code *)PTR__dbus_user_database_unlock_system_00048d40)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_new_method_call @ 00015e44 size=12 ===== */

void dbus_message_new_method_call(void)

{
  (*(code *)PTR_dbus_message_new_method_call_00048d44)();
  return;
}



/* ===== <EXTERNAL>::_dbus_timeout_new @ 00015e50 size=12 ===== */

void _dbus_timeout_new(void)

{
  (*(code *)PTR__dbus_timeout_new_00048d48)();
  return;
}



/* ===== <EXTERNAL>::_dbus_credentials_to_string_append @ 00015e5c size=12 ===== */

void _dbus_credentials_to_string_append(void)

{
  (*(code *)PTR__dbus_credentials_to_string_append_00048d4c)();
  return;
}



/* ===== <EXTERNAL>::dbus_server_set_auth_mechanisms @ 00015e68 size=12 ===== */

void dbus_server_set_auth_mechanisms(void)

{
  (*(code *)PTR_dbus_server_set_auth_mechanisms_00048d50)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_iter_next @ 00015e74 size=12 ===== */

void dbus_message_iter_next(void)

{
  (*(code *)PTR_dbus_message_iter_next_00048d54)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_iter_open_container @ 00015e80 size=12 ===== */

void dbus_message_iter_open_container(void)

{
  (*(code *)PTR_dbus_message_iter_open_container_00048d58)();
  return;
}



/* ===== <EXTERNAL>::geteuid @ 00015e8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t geteuid(void)

{
  __uid_t _Var1;
  
  _Var1 = (*(code *)PTR_geteuid_00048d5c)();
  return _Var1;
}



/* ===== <EXTERNAL>::_dbus_list_get_length @ 00015e98 size=12 ===== */

void _dbus_list_get_length(void)

{
  (*(code *)PTR__dbus_list_get_length_00048d60)();
  return;
}



/* ===== <EXTERNAL>::dbus_server_set_new_connection_function @ 00015ea4 size=12 ===== */

void dbus_server_set_new_connection_function(void)

{
  (*(code *)PTR_dbus_server_set_new_connection_function_00048d64)();
  return;
}



/* ===== <EXTERNAL>::dbus_timeout_get_enabled @ 00015eb0 size=12 ===== */

void dbus_timeout_get_enabled(void)

{
  (*(code *)PTR_dbus_timeout_get_enabled_00048d68)();
  return;
}



/* ===== <EXTERNAL>::_dbus_mem_pool_alloc @ 00015ebc size=12 ===== */

void _dbus_mem_pool_alloc(void)

{
  (*(code *)PTR__dbus_mem_pool_alloc_00048d6c)();
  return;
}



/* ===== <EXTERNAL>::_dbus_timeout_disable @ 00015ec8 size=12 ===== */

void _dbus_timeout_disable(void)

{
  (*(code *)PTR__dbus_timeout_disable_00048d70)();
  return;
}



/* ===== <EXTERNAL>::_dbus_list_insert_after_link @ 00015ed4 size=12 ===== */

void _dbus_list_insert_after_link(void)

{
  (*(code *)PTR__dbus_list_insert_after_link_00048d74)();
  return;
}



/* ===== <EXTERNAL>::dbus_connection_set_max_message_size @ 00015ee0 size=12 ===== */

void dbus_connection_set_max_message_size(void)

{
  (*(code *)PTR_dbus_connection_set_max_message_size_00048d78)();
  return;
}



/* ===== <EXTERNAL>::inotify_init @ 00015eec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int inotify_init(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_inotify_init_00048d7c)();
  return iVar1;
}



/* ===== <EXTERNAL>::_dbus_ensure_standard_fds @ 00015ef8 size=12 ===== */

void _dbus_ensure_standard_fds(void)

{
  (*(code *)PTR__dbus_ensure_standard_fds_00048d80)();
  return;
}



/* ===== <EXTERNAL>::_dbus_hash_table_from_array @ 00015f04 size=12 ===== */

void _dbus_hash_table_from_array(void)

{
  (*(code *)PTR__dbus_hash_table_from_array_00048d84)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_has_destination @ 00015f10 size=12 ===== */

void dbus_message_has_destination(void)

{
  (*(code *)PTR_dbus_message_has_destination_00048d88)();
  return;
}



/* ===== <EXTERNAL>::_dbus_group_info_unref @ 00015f1c size=12 ===== */

void _dbus_group_info_unref(void)

{
  (*(code *)PTR__dbus_group_info_unref_00048d8c)();
  return;
}



/* ===== <EXTERNAL>::opendir @ 00015f28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*(code *)PTR_opendir_00048d90)(__name);
  return pDVar1;
}



/* ===== <EXTERNAL>::_dbus_list_append_link @ 00015f34 size=12 ===== */

void _dbus_list_append_link(void)

{
  (*(code *)PTR__dbus_list_append_link_00048d94)();
  return;
}



/* ===== <EXTERNAL>::dbus_connection_set_windows_user_function @ 00015f40 size=12 ===== */

void dbus_connection_set_windows_user_function(void)

{
  (*(code *)PTR_dbus_connection_set_windows_user_function_00048d98)();
  return;
}



/* ===== <EXTERNAL>::_dbus_string_parse_int @ 00015f4c size=12 ===== */

void _dbus_string_parse_int(void)

{
  (*(code *)PTR__dbus_string_parse_int_00048d9c)();
  return;
}



/* ===== <EXTERNAL>::_dbus_getpid @ 00015f58 size=12 ===== */

void _dbus_getpid(void)

{
  (*(code *)PTR__dbus_getpid_00048da0)();
  return;
}



/* ===== <EXTERNAL>::puts @ 00015f64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00048da4)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::_dbus_hash_table_insert_uintptr @ 00015f70 size=12 ===== */

void _dbus_hash_table_insert_uintptr(void)

{
  (*(code *)PTR__dbus_hash_table_insert_uintptr_00048da8)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_type_from_string @ 00015f7c size=12 ===== */

void dbus_message_type_from_string(void)

{
  (*(code *)PTR_dbus_message_type_from_string_00048dac)();
  return;
}



/* ===== <EXTERNAL>::_dbus_string_equal @ 00015f88 size=12 ===== */

void _dbus_string_equal(void)

{
  (*(code *)PTR__dbus_string_equal_00048db0)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_set_reply_serial @ 00015f94 size=12 ===== */

void dbus_message_set_reply_serial(void)

{
  (*(code *)PTR_dbus_message_set_reply_serial_00048db4)();
  return;
}



/* ===== <EXTERNAL>::chdir @ 00015fa0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int chdir(char *__path)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_chdir_00048db8)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::_dbus_hash_table_unref @ 00015fac size=12 ===== */

void _dbus_hash_table_unref(void)

{
  (*(code *)PTR__dbus_hash_table_unref_00048dbc)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00015fb8 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00048dc0)();
  return;
}



/* ===== <EXTERNAL>::_dbus_hash_table_lookup_string @ 00015fc4 size=12 ===== */

void _dbus_hash_table_lookup_string(void)

{
  (*(code *)PTR__dbus_hash_table_lookup_string_00048dc4)();
  return;
}



/* ===== <EXTERNAL>::dbus_watch_handle @ 00015fd0 size=12 ===== */

void dbus_watch_handle(void)

{
  (*(code *)PTR_dbus_watch_handle_00048dc8)();
  return;
}



/* ===== <EXTERNAL>::_dbus_watch_get_oom_last_time @ 00015fdc size=12 ===== */

void _dbus_watch_get_oom_last_time(void)

{
  (*(code *)PTR__dbus_watch_get_oom_last_time_00048dcc)();
  return;
}



/* ===== <EXTERNAL>::_dbus_connection_get_pending_fds_count @ 00015fe8 size=12 ===== */

void _dbus_connection_get_pending_fds_count(void)

{
  (*(code *)PTR__dbus_connection_get_pending_fds_count_00048dd0)();
  return;
}



/* ===== <EXTERNAL>::_dbus_flush_caches @ 00015ff4 size=12 ===== */

void _dbus_flush_caches(void)

{
  (*(code *)PTR__dbus_flush_caches_00048dd4)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00016000 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00048dd8)();
  return;
}



/* ===== <EXTERNAL>::dbus_connection_remove_filter @ 0001600c size=12 ===== */

void dbus_connection_remove_filter(void)

{
  (*(code *)PTR_dbus_connection_remove_filter_00048ddc)();
  return;
}



/* ===== <EXTERNAL>::access @ 00016018 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_00048de0)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::dbus_connection_allocate_data_slot @ 00016024 size=12 ===== */

void dbus_connection_allocate_data_slot(void)

{
  (*(code *)PTR_dbus_connection_allocate_data_slot_00048de4)();
  return;
}



/* ===== <EXTERNAL>::_dbus_string_parse_uint @ 00016030 size=12 ===== */

void _dbus_string_parse_uint(void)

{
  (*(code *)PTR__dbus_string_parse_uint_00048de8)();
  return;
}



/* ===== <EXTERNAL>::_dbus_pipe_is_valid @ 0001603c size=12 ===== */

void _dbus_pipe_is_valid(void)

{
  (*(code *)PTR__dbus_pipe_is_valid_00048dec)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_get_member @ 00016048 size=12 ===== */

void dbus_message_get_member(void)

{
  (*(code *)PTR_dbus_message_get_member_00048df0)();
  return;
}



/* ===== <EXTERNAL>::_dbus_validate_member @ 00016054 size=12 ===== */

void _dbus_validate_member(void)

{
  (*(code *)PTR__dbus_validate_member_00048df4)();
  return;
}



/* ===== <EXTERNAL>::_dbus_strerror @ 00016060 size=12 ===== */

void _dbus_strerror(void)

{
  (*(code *)PTR__dbus_strerror_00048df8)();
  return;
}



/* ===== <EXTERNAL>::dbus_server_set_watch_functions @ 0001606c size=12 ===== */

void dbus_server_set_watch_functions(void)

{
  (*(code *)PTR_dbus_server_set_watch_functions_00048dfc)();
  return;
}



/* ===== <EXTERNAL>::_dbus_homedir_from_current_process @ 00016078 size=12 ===== */

void _dbus_homedir_from_current_process(void)

{
  (*(code *)PTR__dbus_homedir_from_current_process_00048e00)();
  return;
}



/* ===== <EXTERNAL>::dbus_connection_ref @ 00016084 size=12 ===== */

void dbus_connection_ref(void)

{
  (*(code *)PTR_dbus_connection_ref_00048e04)();
  return;
}



/* ===== <EXTERNAL>::dbus_connection_send_preallocated @ 00016090 size=12 ===== */

void dbus_connection_send_preallocated(void)

{
  (*(code *)PTR_dbus_connection_send_preallocated_00048e08)();
  return;
}



/* ===== <EXTERNAL>::_dbus_hash_iter_init @ 0001609c size=12 ===== */

void _dbus_hash_iter_init(void)

{
  (*(code *)PTR__dbus_hash_iter_init_00048e0c)();
  return;
}



/* ===== <EXTERNAL>::_dbus_socketpair @ 000160a8 size=12 ===== */

void _dbus_socketpair(void)

{
  (*(code *)PTR__dbus_socketpair_00048e10)();
  return;
}



/* ===== <EXTERNAL>::dbus_error_init @ 000160b4 size=12 ===== */

void dbus_error_init(void)

{
  (*(code *)PTR_dbus_error_init_00048e14)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_contains_unix_fds @ 000160c0 size=12 ===== */

void dbus_message_contains_unix_fds(void)

{
  (*(code *)PTR_dbus_message_contains_unix_fds_00048e18)();
  return;
}



/* ===== <EXTERNAL>::_dbus_string_copy_len @ 000160cc size=12 ===== */

void _dbus_string_copy_len(void)

{
  (*(code *)PTR__dbus_string_copy_len_00048e1c)();
  return;
}



/* ===== <EXTERNAL>::_dbus_pipe_init @ 000160d8 size=12 ===== */

void _dbus_pipe_init(void)

{
  (*(code *)PTR__dbus_pipe_init_00048e20)();
  return;
}



/* ===== <EXTERNAL>::XML_ErrorString @ 000160e4 size=12 ===== */

void XML_ErrorString(void)

{
  (*(code *)PTR_XML_ErrorString_00048e24)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_set_destination @ 000160f0 size=12 ===== */

void dbus_message_set_destination(void)

{
  (*(code *)PTR_dbus_message_set_destination_00048e28)();
  return;
}



/* ===== <EXTERNAL>::_dbus_user_database_lock_system @ 000160fc size=12 ===== */

void _dbus_user_database_lock_system(void)

{
  (*(code *)PTR__dbus_user_database_lock_system_00048e2c)();
  return;
}



/* ===== <EXTERNAL>::write @ 00016108 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_00048e30)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::setgroups @ 00016114 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setgroups(size_t __n,__gid_t *__groups)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setgroups_00048e34)(__n);
  return iVar1;
}



/* ===== <EXTERNAL>::dbus_connection_free_preallocated_send @ 00016120 size=12 ===== */

void dbus_connection_free_preallocated_send(void)

{
  (*(code *)PTR_dbus_connection_free_preallocated_send_00048e38)();
  return;
}



/* ===== <EXTERNAL>::_dbus_server_toggle_all_watches @ 0001612c size=12 ===== */

void _dbus_server_toggle_all_watches(void)

{
  (*(code *)PTR__dbus_server_toggle_all_watches_00048e3c)();
  return;
}



/* ===== <EXTERNAL>::dbus_connection_close @ 00016138 size=12 ===== */

void dbus_connection_close(void)

{
  (*(code *)PTR_dbus_connection_close_00048e40)();
  return;
}



/* ===== <EXTERNAL>::dbus_timeout_handle @ 00016144 size=12 ===== */

void dbus_timeout_handle(void)

{
  (*(code *)PTR_dbus_timeout_handle_00048e44)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_iter_get_arg_type @ 00016150 size=12 ===== */

void dbus_message_iter_get_arg_type(void)

{
  (*(code *)PTR_dbus_message_iter_get_arg_type_00048e48)();
  return;
}



/* ===== <EXTERNAL>::_dbus_validate_bus_namespace @ 0001615c size=12 ===== */

void _dbus_validate_bus_namespace(void)

{
  (*(code *)PTR__dbus_validate_bus_namespace_00048e4c)();
  return;
}



/* ===== <EXTERNAL>::_dbus_list_get_first_link @ 00016168 size=12 ===== */

void _dbus_list_get_first_link(void)

{
  (*(code *)PTR__dbus_list_get_first_link_00048e50)();
  return;
}



/* ===== <EXTERNAL>::_dbus_getuid @ 00016174 size=12 ===== */

void _dbus_getuid(void)

{
  (*(code *)PTR__dbus_getuid_00048e54)();
  return;
}



/* ===== <EXTERNAL>::pipe @ 00016180 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pipe(int *__pipedes)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pipe_00048e58)(__pipedes);
  return iVar1;
}



/* ===== <EXTERNAL>::_dbus_init_system_log @ 0001618c size=12 ===== */

void _dbus_init_system_log(void)

{
  (*(code *)PTR__dbus_init_system_log_00048e5c)();
  return;
}



/* ===== <EXTERNAL>::_dbus_logv @ 00016198 size=12 ===== */

void _dbus_logv(void)

{
  (*(code *)PTR__dbus_logv_00048e60)();
  return;
}



/* ===== <EXTERNAL>::dbus_set_error @ 000161a4 size=12 ===== */

void dbus_set_error(void)

{
  (*(code *)PTR_dbus_set_error_00048e64)();
  return;
}



/* ===== <EXTERNAL>::_dbus_list_remove_last @ 000161b0 size=12 ===== */

void _dbus_list_remove_last(void)

{
  (*(code *)PTR__dbus_list_remove_last_00048e68)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_get_no_reply @ 000161bc size=12 ===== */

void dbus_message_get_no_reply(void)

{
  (*(code *)PTR_dbus_message_get_no_reply_00048e6c)();
  return;
}



/* ===== <EXTERNAL>::_dbus_hash_table_lookup_int @ 000161c8 size=12 ===== */

void _dbus_hash_table_lookup_int(void)

{
  (*(code *)PTR__dbus_hash_table_lookup_int_00048e70)();
  return;
}



/* ===== <EXTERNAL>::_dbus_string_steal_data @ 000161d4 size=12 ===== */

void _dbus_string_steal_data(void)

{
  (*(code *)PTR__dbus_string_steal_data_00048e74)();
  return;
}



/* ===== <EXTERNAL>::dbus_connection_get_data @ 000161e0 size=12 ===== */

void dbus_connection_get_data(void)

{
  (*(code *)PTR_dbus_connection_get_data_00048e78)();
  return;
}



/* ===== <EXTERNAL>::inotify_add_watch @ 000161ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int inotify_add_watch(int __fd,char *__name,uint32_t __mask)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_inotify_add_watch_00048e7c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::dbus_error_is_set @ 000161f8 size=12 ===== */

void dbus_error_is_set(void)

{
  (*(code *)PTR_dbus_error_is_set_00048e80)();
  return;
}



/* ===== <EXTERNAL>::memcmp @ 00016210 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_00048e88)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fclose @ 0001621c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00048e8c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::dbus_connection_free_data_slot @ 00016228 size=12 ===== */

void dbus_connection_free_data_slot(void)

{
  (*(code *)PTR_dbus_connection_free_data_slot_00048e90)();
  return;
}



/* ===== <EXTERNAL>::dbus_connection_preallocate_send @ 00016234 size=12 ===== */

void dbus_connection_preallocate_send(void)

{
  (*(code *)PTR_dbus_connection_preallocate_send_00048e94)();
  return;
}



/* ===== <EXTERNAL>::dbus_server_free_data_slot @ 00016240 size=12 ===== */

void dbus_server_free_data_slot(void)

{
  (*(code *)PTR_dbus_server_free_data_slot_00048e98)();
  return;
}



/* ===== <EXTERNAL>::XML_SetElementHandler @ 0001624c size=12 ===== */

void XML_SetElementHandler(void)

{
  (*(code *)PTR_XML_SetElementHandler_00048e9c)();
  return;
}



/* ===== <EXTERNAL>::_dbus_log @ 00016258 size=12 ===== */

void _dbus_log(void)

{
  (*(code *)PTR__dbus_log_00048ea0)();
  return;
}



/* ===== <EXTERNAL>::dbus_connection_get_windows_user @ 00016264 size=12 ===== */

void dbus_connection_get_windows_user(void)

{
  (*(code *)PTR_dbus_connection_get_windows_user_00048ea4)();
  return;
}



/* ===== <EXTERNAL>::_dbus_auth_dump_supported_mechanisms @ 00016270 size=12 ===== */

void _dbus_auth_dump_supported_mechanisms(void)

{
  (*(code *)PTR__dbus_auth_dump_supported_mechanisms_00048ea8)();
  return;
}



/* ===== <EXTERNAL>::_dbus_list_prepend @ 0001627c size=12 ===== */

void _dbus_list_prepend(void)

{
  (*(code *)PTR__dbus_list_prepend_00048eac)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_iter_recurse @ 00016288 size=12 ===== */

void dbus_message_iter_recurse(void)

{
  (*(code *)PTR_dbus_message_iter_recurse_00048eb0)();
  return;
}



/* ===== <EXTERNAL>::dbus_free_string_array @ 00016294 size=12 ===== */

void dbus_free_string_array(void)

{
  (*(code *)PTR_dbus_free_string_array_00048eb4)();
  return;
}



/* ===== <EXTERNAL>::_dbus_hash_table_get_n_entries @ 000162a0 size=12 ===== */

void _dbus_hash_table_get_n_entries(void)

{
  (*(code *)PTR__dbus_hash_table_get_n_entries_00048eb8)();
  return;
}



/* ===== <EXTERNAL>::sigemptyset @ 000162ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigemptyset(sigset_t *__set)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigemptyset_00048ebc)(__set);
  return iVar1;
}



/* ===== <EXTERNAL>::_dbus_pipe_invalidate @ 000162b8 size=12 ===== */

void _dbus_pipe_invalidate(void)

{
  (*(code *)PTR__dbus_pipe_invalidate_00048ec0)();
  return;
}



/* ===== <EXTERNAL>::_dbus_mem_pool_new @ 000162c4 size=12 ===== */

void _dbus_mem_pool_new(void)

{
  (*(code *)PTR__dbus_mem_pool_new_00048ec4)();
  return;
}



/* ===== <EXTERNAL>::getgrgid_r @ 000162d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getgrgid_r(__gid_t __gid,group *__resultbuf,char *__buffer,size_t __buflen,group **__result)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getgrgid_r_00048ec8)(__gid);
  return iVar1;
}



/* ===== <EXTERNAL>::dbus_message_new_error @ 000162dc size=12 ===== */

void dbus_message_new_error(void)

{
  (*(code *)PTR_dbus_message_new_error_00048ecc)();
  return;
}



/* ===== <EXTERNAL>::_dbus_ensure_directory @ 000162e8 size=12 ===== */

void _dbus_ensure_directory(void)

{
  (*(code *)PTR__dbus_ensure_directory_00048ed0)();
  return;
}



/* ===== <EXTERNAL>::dbus_connection_set_data @ 000162f4 size=12 ===== */

void dbus_connection_set_data(void)

{
  (*(code *)PTR_dbus_connection_set_data_00048ed4)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_get_interface @ 00016300 size=12 ===== */

void dbus_message_get_interface(void)

{
  (*(code *)PTR_dbus_message_get_interface_00048ed8)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_has_sender @ 0001630c size=12 ===== */

void dbus_message_has_sender(void)

{
  (*(code *)PTR_dbus_message_has_sender_00048edc)();
  return;
}



/* ===== <EXTERNAL>::_dbus_timeout_needs_restart @ 00016318 size=12 ===== */

void _dbus_timeout_needs_restart(void)

{
  (*(code *)PTR__dbus_timeout_needs_restart_00048ee0)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_iter_init @ 00016324 size=12 ===== */

void dbus_message_iter_init(void)

{
  (*(code *)PTR_dbus_message_iter_init_00048ee4)();
  return;
}



/* ===== <EXTERNAL>::kill @ 00016330 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int kill(__pid_t __pid,int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_kill_00048ee8)(__pid);
  return iVar1;
}



/* ===== <EXTERNAL>::_dbus_split_paths_and_append @ 00016348 size=12 ===== */

void _dbus_split_paths_and_append(void)

{
  (*(code *)PTR__dbus_split_paths_and_append_00048ef0)();
  return;
}



/* ===== <EXTERNAL>::dbus_connection_set_route_peer_messages @ 00016354 size=12 ===== */

void dbus_connection_set_route_peer_messages(void)

{
  (*(code *)PTR_dbus_connection_set_route_peer_messages_00048ef4)();
  return;
}



/* ===== <EXTERNAL>::_dbus_auth_is_supported_mechanism @ 00016360 size=12 ===== */

void _dbus_auth_is_supported_mechanism(void)

{
  (*(code *)PTR__dbus_auth_is_supported_mechanism_00048ef8)();
  return;
}



/* ===== <EXTERNAL>::_dbus_hash_table_remove_uintptr @ 0001636c size=12 ===== */

void _dbus_hash_table_remove_uintptr(void)

{
  (*(code *)PTR__dbus_hash_table_remove_uintptr_00048efc)();
  return;
}



/* ===== <EXTERNAL>::_dbus_list_foreach @ 00016378 size=12 ===== */

void _dbus_list_foreach(void)

{
  (*(code *)PTR__dbus_list_foreach_00048f00)();
  return;
}



/* ===== <EXTERNAL>::dbus_connection_can_send_type @ 00016384 size=12 ===== */

void dbus_connection_can_send_type(void)

{
  (*(code *)PTR_dbus_connection_can_send_type_00048f04)();
  return;
}



/* ===== <EXTERNAL>::_dbus_list_pop_first_link @ 00016390 size=12 ===== */

void _dbus_list_pop_first_link(void)

{
  (*(code *)PTR__dbus_list_pop_first_link_00048f08)();
  return;
}



/* ===== <EXTERNAL>::dbus_connection_set_dispatch_status_function @ 0001639c size=12 ===== */

void dbus_connection_set_dispatch_status_function(void)

{
  (*(code *)PTR_dbus_connection_set_dispatch_status_function_00048f0c)();
  return;
}



/* ===== <EXTERNAL>::dbus_connection_add_filter @ 000163a8 size=12 ===== */

void dbus_connection_add_filter(void)

{
  (*(code *)PTR_dbus_connection_add_filter_00048f10)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_get_auto_start @ 000163b4 size=12 ===== */

void dbus_message_get_auto_start(void)

{
  (*(code *)PTR_dbus_message_get_auto_start_00048f14)();
  return;
}



/* ===== <EXTERNAL>::signal @ 000163c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_00048f18)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::_dbus_watch_list_free @ 000163cc size=12 ===== */

void _dbus_watch_list_free(void)

{
  (*(code *)PTR__dbus_watch_list_free_00048f1c)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_new @ 000163d8 size=12 ===== */

void dbus_message_new(void)

{
  (*(code *)PTR_dbus_message_new_00048f20)();
  return;
}



/* ===== <EXTERNAL>::getuid @ 000163e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t getuid(void)

{
  __uid_t _Var1;
  
  _Var1 = (*(code *)PTR_getuid_00048f24)();
  return _Var1;
}



/* ===== <EXTERNAL>::dbus_server_get_is_connected @ 000163f0 size=12 ===== */

void dbus_server_get_is_connected(void)

{
  (*(code *)PTR_dbus_server_get_is_connected_00048f28)();
  return;
}



/* ===== <EXTERNAL>::_dbus_list_insert_after @ 000163fc size=12 ===== */

void _dbus_list_insert_after(void)

{
  (*(code *)PTR__dbus_list_insert_after_00048f2c)();
  return;
}



/* ===== <EXTERNAL>::execve @ 00016408 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execve(char *__path,char **__argv,char **__envp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_execve_00048f30)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::dbus_message_append_args @ 00016414 size=12 ===== */

void dbus_message_append_args(void)

{
  (*(code *)PTR_dbus_message_append_args_00048f34)();
  return;
}



/* ===== <EXTERNAL>::strlen @ 00016420 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00048f38)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::setgid @ 0001642c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setgid(__gid_t __gid)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setgid_00048f3c)(__gid);
  return iVar1;
}



/* ===== <EXTERNAL>::_dbus_file_get_contents @ 00016438 size=12 ===== */

void _dbus_file_get_contents(void)

{
  (*(code *)PTR__dbus_file_get_contents_00048f40)();
  return;
}



/* ===== <EXTERNAL>::dbus_error_has_name @ 00016444 size=12 ===== */

void dbus_error_has_name(void)

{
  (*(code *)PTR_dbus_error_has_name_00048f44)();
  return;
}



/* ===== <EXTERNAL>::_dbus_pipe_close @ 00016450 size=12 ===== */

void _dbus_pipe_close(void)

{
  (*(code *)PTR__dbus_pipe_close_00048f48)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_is_signal @ 0001645c size=12 ===== */

void dbus_message_is_signal(void)

{
  (*(code *)PTR_dbus_message_is_signal_00048f4c)();
  return;
}



/* ===== <EXTERNAL>::_dbus_list_append @ 00016468 size=12 ===== */

void _dbus_list_append(void)

{
  (*(code *)PTR__dbus_list_append_00048f50)();
  return;
}



/* ===== <EXTERNAL>::readdir64 @ 00016474 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent64 * readdir64(DIR *__dirp)

{
  dirent64 *pdVar1;
  
  pdVar1 = (dirent64 *)(*(code *)PTR_readdir64_00048f54)(__dirp);
  return pdVar1;
}



/* ===== <EXTERNAL>::setrlimit64 @ 00016480 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */

int setrlimit64(__rlimit_resource_t __resource,rlimit64 *__rlimits)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setrlimit64_00048f58)(__resource);
  return iVar1;
}



/* ===== <EXTERNAL>::dbus_free @ 0001648c size=12 ===== */

void dbus_free(void)

{
  (*(code *)PTR_dbus_free_00048f5c)();
  return;
}



/* ===== <EXTERNAL>::_dbus_string_append_printf @ 00016498 size=12 ===== */

void _dbus_string_append_printf(void)

{
  (*(code *)PTR__dbus_string_append_printf_00048f60)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_get_type @ 000164a4 size=12 ===== */

void dbus_message_get_type(void)

{
  (*(code *)PTR_dbus_message_get_type_00048f64)();
  return;
}



/* ===== <EXTERNAL>::_dbus_connection_get_stats @ 000164b0 size=12 ===== */

void _dbus_connection_get_stats(void)

{
  (*(code *)PTR__dbus_connection_get_stats_00048f68)();
  return;
}



/* ===== <EXTERNAL>::_dbus_list_pop_last @ 000164bc size=12 ===== */

void _dbus_list_pop_last(void)

{
  (*(code *)PTR__dbus_list_pop_last_00048f6c)();
  return;
}



/* ===== <EXTERNAL>::dbus_connection_set_watch_functions @ 000164c8 size=12 ===== */

void dbus_connection_set_watch_functions(void)

{
  (*(code *)PTR_dbus_connection_set_watch_functions_00048f70)();
  return;
}



/* ===== <EXTERNAL>::_dbus_close_socket @ 000164d4 size=12 ===== */

void _dbus_close_socket(void)

{
  (*(code *)PTR__dbus_close_socket_00048f74)();
  return;
}



/* ===== <EXTERNAL>::_dbus_list_copy @ 000164e0 size=12 ===== */

void _dbus_list_copy(void)

{
  (*(code *)PTR__dbus_list_copy_00048f78)();
  return;
}



/* ===== <EXTERNAL>::_dbus_read_socket @ 000164ec size=12 ===== */

void _dbus_read_socket(void)

{
  (*(code *)PTR__dbus_read_socket_00048f7c)();
  return;
}



/* ===== <EXTERNAL>::fdopen @ 000164f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fdopen(int __fd,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fdopen_00048f80)(__fd);
  return pFVar1;
}



/* ===== <EXTERNAL>::dbus_connection_dispatch @ 00016504 size=12 ===== */

void dbus_connection_dispatch(void)

{
  (*(code *)PTR_dbus_connection_dispatch_00048f84)();
  return;
}



/* ===== <EXTERNAL>::_dbus_string_init_const @ 00016510 size=12 ===== */

void _dbus_string_init_const(void)

{
  (*(code *)PTR__dbus_string_init_const_00048f88)();
  return;
}



/* ===== <EXTERNAL>::_dbus_string_init @ 0001651c size=12 ===== */

void _dbus_string_init(void)

{
  (*(code *)PTR__dbus_string_init_00048f8c)();
  return;
}



/* ===== <EXTERNAL>::_dbus_error_from_errno @ 00016528 size=12 ===== */

void _dbus_error_from_errno(void)

{
  (*(code *)PTR__dbus_error_from_errno_00048f90)();
  return;
}



/* ===== <EXTERNAL>::_dbus_watch_list_add_watch @ 00016534 size=12 ===== */

void _dbus_watch_list_add_watch(void)

{
  (*(code *)PTR__dbus_watch_list_add_watch_00048f94)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 00016540 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00048f98)();
  return piVar1;
}



/* ===== <EXTERNAL>::_dbus_validate_bus_name @ 0001654c size=12 ===== */

void _dbus_validate_bus_name(void)

{
  (*(code *)PTR__dbus_validate_bus_name_00048f9c)();
  return;
}



/* ===== <EXTERNAL>::_dbus_get_local_machine_uuid_encoded @ 00016558 size=12 ===== */

void _dbus_get_local_machine_uuid_encoded(void)

{
  (*(code *)PTR__dbus_get_local_machine_uuid_encoded_00048fa0)();
  return;
}



/* ===== <EXTERNAL>::strcmp @ 00016564 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00048fa4)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::_dbus_string_append_len @ 00016570 size=12 ===== */

void _dbus_string_append_len(void)

{
  (*(code *)PTR__dbus_string_append_len_00048fa8)();
  return;
}



/* ===== <EXTERNAL>::inotify_rm_watch @ 0001657c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int inotify_rm_watch(int __fd,int __wd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_inotify_rm_watch_00048fac)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::_dbus_string_append_byte @ 00016588 size=12 ===== */

void _dbus_string_append_byte(void)

{
  (*(code *)PTR__dbus_string_append_byte_00048fb0)();
  return;
}



/* ===== <EXTERNAL>::_dbus_hash_table_preallocate_entry @ 00016594 size=12 ===== */

void _dbus_hash_table_preallocate_entry(void)

{
  (*(code *)PTR__dbus_hash_table_preallocate_entry_00048fb4)();
  return;
}



/* ===== <EXTERNAL>::_dbus_is_a_number @ 000165a0 size=12 ===== */

void _dbus_is_a_number(void)

{
  (*(code *)PTR__dbus_is_a_number_00048fb8)();
  return;
}



/* ===== <EXTERNAL>::dbus_server_listen @ 000165ac size=12 ===== */

void dbus_server_listen(void)

{
  (*(code *)PTR_dbus_server_listen_00048fbc)();
  return;
}



/* ===== FUN_000165b8 @ 000165b8 size=2200 ===== */

void FUN_000165b8(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char **ppcVar10;
  int *piVar11;
  char *__s2;
  char *__s2_00;
  char *__s2_01;
  undefined1 *puVar12;
  FILE *__stream;
  uint uVar13;
  undefined4 *puVar14;
  char *unaff_r6;
  int iVar15;
  int local_b4;
  undefined1 auStack_98 [4];
  undefined1 auStack_94 [4];
  undefined4 local_90;
  char *local_8c;
  undefined4 local_88;
  undefined1 auStack_7c [4];
  int local_78;
  undefined1 auStack_6c [4];
  int local_68;
  undefined4 local_5c;
  char *local_58;
  undefined4 local_4c;
  char *local_48;
  char *local_3c;
  undefined4 local_38;
  int local_2c;
  
  iVar15 = DAT_00016e50 + 0x165d0;
  piVar11 = *(int **)(iVar15 + DAT_00016e54);
  local_2c = *piVar11;
  iVar3 = _dbus_ensure_standard_fds(1,&local_90);
  if (iVar3 == 0) {
    __stream = (FILE *)**(undefined4 **)(iVar15 + DAT_00016e58);
    piVar4 = __errno_location();
    uVar5 = _dbus_strerror(*piVar4);
    fprintf(__stream,(char *)(DAT_00016e5c + 0x16628),local_90,uVar5);
  }
  else {
    iVar3 = _dbus_string_init(auStack_7c);
    if (iVar3 != 0) {
      iVar3 = _dbus_string_init(auStack_6c);
      if (((iVar3 != 0) && (iVar3 = _dbus_string_init(&local_5c), iVar3 != 0)) &&
         (iVar3 = _dbus_string_init(&local_4c), iVar3 != 0)) {
        bVar2 = false;
        local_b4 = 1;
        uVar13 = 8;
        bVar1 = false;
        __s2 = (char *)(DAT_00016e60 + 0x166b4);
        __s2_00 = (char *)(DAT_00016e64 + 0x166c0);
        __s2_01 = (char *)(DAT_00016e68 + 0x166cc);
        pcVar8 = (char *)0x0;
        do {
          if (local_b4 < param_1) {
            unaff_r6 = *(char **)(param_2 + local_b4 * 4);
            iVar3 = strcmp(unaff_r6,__s2);
            if (((iVar3 != 0) && (iVar3 = strcmp(unaff_r6,__s2_00), iVar3 != 0)) &&
               (iVar3 = strcmp(unaff_r6,__s2_01), iVar3 != 0)) goto LAB_00016750;
          }
          else {
            if (local_78 != 0) {
              ppcVar10 = &local_3c;
              _dbus_pipe_invalidate(auStack_98);
              if ((bVar1) && (_dbus_pipe_init_stdout(auStack_98), 0 < (int)local_58)) {
                iVar3 = _dbus_string_parse_int(&local_5c,0,&local_8c,ppcVar10);
                if ((iVar3 != 0) && ((local_58 == local_3c && (-1 < (int)local_8c)))) {
                  _dbus_pipe_init(auStack_98);
                  goto LAB_00016c04;
                }
                puVar14 = *(undefined4 **)(iVar15 + DAT_00016e58);
                pcVar8 = (char *)(DAT_00016eec + 0x16cb0);
                local_4c = local_5c;
LAB_00016cac:
                fprintf((FILE *)*puVar14,pcVar8,local_4c);
                goto LAB_000168fc;
              }
LAB_00016c04:
              _dbus_string_free(&local_5c);
              _dbus_pipe_invalidate(auStack_94);
              if ((bVar2) && (_dbus_pipe_init_stdout(auStack_94), 0 < (int)local_48)) {
                iVar3 = _dbus_string_parse_int(&local_4c,0,&local_8c,ppcVar10);
                if ((iVar3 == 0) || ((local_48 != local_3c || ((int)local_8c < 0)))) {
                  puVar14 = *(undefined4 **)(iVar15 + DAT_00016e58);
                  pcVar8 = (char *)(DAT_00016ef0 + 0x16cd0);
                  goto LAB_00016cac;
                }
                _dbus_pipe_init(auStack_94);
              }
              _dbus_string_free(&local_4c);
              iVar3 = FUN_00029a04();
              if (iVar3 == 0) {
                iVar3 = DAT_00016ee8 + 0x16c98;
              }
              else {
                iVar3 = FUN_00019c9c();
                if (iVar3 != 0) {
                  dbus_error_init(&local_8c);
                  iVar3 = DAT_00016ef8;
                  puVar12 = auStack_6c;
                  if (local_68 < 1) {
                    puVar12 = (undefined1 *)0x0;
                  }
                  puVar14 = (undefined4 *)(DAT_00016ef8 + 0x16d14);
                  uVar5 = FUN_0001a7cc(auStack_7c,uVar13,auStack_98,auStack_94,puVar12,&local_8c);
                  *(undefined4 *)(iVar3 + 0x16d1c) = uVar5;
                  _dbus_string_free(auStack_7c);
                  _dbus_string_free(auStack_6c);
                  if (*(int *)(iVar3 + 0x16d1c) == 0) {
                    _dbus_warn(DAT_00016efc + 0x16d4c,local_88);
                    ppcVar10 = &local_8c;
                  }
                  else {
                    uVar5 = FUN_0001a658();
                    dbus_error_init(ppcVar10);
                    iVar15 = _dbus_socketpair(puVar14,iVar3 + 0x16d18,1,ppcVar10);
                    if (iVar15 == 0) {
                      iVar3 = DAT_00016f00 + 0x16d94;
                    }
                    else {
                      uVar6 = 0;
                      iVar15 = _dbus_watch_new(*puVar14,1,1,DAT_00016f04 + 0x16dbc,0,0);
                      if (iVar15 == 0) {
                        iVar3 = DAT_00016f08 + 0x16dd8;
                      }
                      else {
                        iVar15 = FUN_0002e718(uVar5);
                        if (iVar15 != 0) {
                          iVar15 = DAT_00016f10 + 0x16e08;
                          FUN_000303dc(0xf,iVar15);
                          FUN_000303dc(1,iVar15);
                          FUN_0001a658(*(undefined4 *)(iVar3 + 0x16d1c));
                          FUN_0002ef9c();
                          FUN_0001a3cc(*(undefined4 *)(iVar3 + 0x16d1c));
                          FUN_0001a468(*(undefined4 *)(iVar3 + 0x16d1c));
                          FUN_00029a84();
                          FUN_00019d24();
                          FUN_00019d64();
                          goto LAB_0001662c;
                        }
                        iVar3 = DAT_00016f0c + 0x16df8;
                      }
                    }
                    _dbus_warn(iVar3,local_38);
                  }
                  dbus_error_free(ppcVar10);
LAB_000168fc:
                  iVar3 = 1;
LAB_00016780:
                    /* WARNING: Subroutine does not return */
                  exit(iVar3);
                }
                iVar3 = DAT_00016ef4 + 0x16ce4;
              }
LAB_000167d8:
              _dbus_warn(iVar3);
              goto LAB_000168fc;
            }
            fputs((char *)(DAT_00016e6c + 0x166fc),(FILE *)**(undefined4 **)(iVar15 + DAT_00016e58))
            ;
          }
          do {
            FUN_0002dc44();
LAB_00016750:
            iVar3 = strcmp(unaff_r6,(char *)(DAT_00016e70 + 92000));
            if (iVar3 == 0) {
              printf((char *)(DAT_00016e78 + 0x1677c),DAT_00016e74 + 0x16778);
LAB_0001677c:
              iVar3 = 0;
              goto LAB_00016780;
            }
            iVar3 = strcmp(unaff_r6,(char *)(DAT_00016e7c + 0x16794));
            if (iVar3 == 0) {
              iVar3 = _dbus_string_init(&local_3c);
              if (iVar3 != 0) {
                iVar3 = FUN_00027d78(&local_3c,1,0);
                if (iVar3 != 0) {
                  puts(local_3c);
                  goto LAB_0001677c;
                }
                _dbus_string_free(&local_3c);
              }
              iVar3 = DAT_00016e80 + 0x167dc;
              goto LAB_000167d8;
            }
            iVar3 = strcmp(unaff_r6,(char *)(DAT_00016e84 + 0x167fc));
            if (iVar3 == 0) {
              uVar13 = uVar13 & 0xffffffdf | 0x40;
              goto LAB_00016b2c;
            }
            iVar3 = strcmp(unaff_r6,(char *)(DAT_00016e88 + 0x1681c));
            if (iVar3 == 0) {
              uVar13 = uVar13 & 0xffffffbf | 0x20;
              goto LAB_00016b2c;
            }
            iVar3 = strcmp(unaff_r6,(char *)(DAT_00016e8c + 0x1683c));
            if (iVar3 == 0) {
              uVar13 = uVar13 & 0xffffffbf | 0xa0;
              goto LAB_00016b2c;
            }
            iVar3 = strcmp(unaff_r6,(char *)(DAT_00016e90 + 0x1685c));
            if (iVar3 == 0) {
              uVar13 = uVar13 & 0xfffffffd | 4;
              goto LAB_00016b2c;
            }
            iVar3 = strcmp(unaff_r6,(char *)(DAT_00016e94 + 0x1687c));
            if (iVar3 == 0) {
              uVar13 = uVar13 & 0xfffffffb | 2;
              goto LAB_00016b2c;
            }
            iVar3 = strcmp(unaff_r6,(char *)(DAT_00016e98 + 0x1689c));
            if (iVar3 == 0) {
              uVar13 = uVar13 | 0x10;
              goto LAB_00016b2c;
            }
            iVar3 = strcmp(unaff_r6,(char *)(DAT_00016e9c + 0x168b8));
            if (iVar3 == 0) {
              uVar13 = uVar13 & 0xfffffff7;
              goto LAB_00016b2c;
            }
            iVar3 = strcmp(unaff_r6,(char *)(DAT_00016ea0 + 0x168d4));
            if (iVar3 == 0) {
              FUN_0002df34(auStack_7c,DAT_00016ea4 + 0x168ec);
              iVar3 = FUN_00030fcc(auStack_7c);
LAB_000168f4:
              if (iVar3 == 0) goto LAB_000168fc;
              goto LAB_00016b2c;
            }
            iVar3 = strcmp(unaff_r6,(char *)(DAT_00016ea8 + 0x16914));
            if (iVar3 == 0) {
              FUN_0002df34(auStack_7c,DAT_00016eac + 0x1692c);
              iVar3 = FUN_00030fdc(auStack_7c);
              goto LAB_000168f4;
            }
            pcVar7 = strstr(unaff_r6,(char *)(DAT_00016eb0 + 0x16948));
            puVar12 = auStack_7c;
            if (unaff_r6 == pcVar7) {
              FUN_0002df34(auStack_7c,DAT_00016eb4 + 0x16960);
              pcVar8 = strchr(unaff_r6,0x3d);
              pcVar7 = pcVar8 + 1;
LAB_00016974:
              iVar3 = _dbus_string_append(puVar12,pcVar7);
              goto LAB_000168f4;
            }
            pcVar7 = unaff_r6;
            if ((pcVar8 != (char *)0x0) &&
               (iVar3 = strcmp(pcVar8,(char *)(DAT_00016eb8 + 0x16994)), iVar3 == 0)) {
              FUN_0002df34(auStack_7c,DAT_00016ebc + 0x169ac);
              goto LAB_00016974;
            }
            iVar3 = strcmp(unaff_r6,(char *)(DAT_00016ec0 + 0x169c4));
            if (iVar3 == 0) goto LAB_00016b2c;
            pcVar9 = strstr(unaff_r6,(char *)(DAT_00016ec4 + 0x169dc));
            puVar12 = auStack_6c;
            if (unaff_r6 == pcVar9) {
              FUN_0002e028(auStack_6c);
              pcVar8 = strchr(unaff_r6,0x3d);
              pcVar7 = pcVar8 + 1;
              goto LAB_00016974;
            }
            if ((pcVar8 != (char *)0x0) &&
               (iVar3 = strcmp(pcVar8,(char *)(DAT_00016ec8 + 0x16a1c)), iVar3 == 0)) {
              FUN_0002e028(auStack_6c);
              goto LAB_00016974;
            }
            iVar3 = strcmp(unaff_r6,(char *)(DAT_00016ecc + 0x16a44));
            if (iVar3 == 0) goto LAB_00016b2c;
            pcVar7 = strstr(unaff_r6,(char *)(DAT_00016ed0 + 0x16a5c));
            if (unaff_r6 == pcVar7) {
              FUN_0002dfd4(&local_5c);
              pcVar8 = strchr(unaff_r6,0x3d);
              pcVar8 = pcVar8 + 1;
LAB_00016a80:
              iVar3 = _dbus_string_append(&local_5c,pcVar8);
              if (iVar3 == 0) goto LAB_000168fc;
LAB_00016a90:
              bVar1 = true;
              goto LAB_00016b2c;
            }
            if ((pcVar8 != (char *)0x0) &&
               (iVar3 = strcmp(pcVar8,(char *)(DAT_00016ed4 + 0x16ab0)), iVar3 == 0)) {
              FUN_0002dfd4(&local_5c);
              pcVar8 = unaff_r6;
              goto LAB_00016a80;
            }
            iVar3 = strcmp(unaff_r6,(char *)(DAT_00016ed8 + 0x16adc));
            if (iVar3 == 0) goto LAB_00016a90;
            pcVar7 = strstr(unaff_r6,(char *)(DAT_00016edc + 0x16af4));
            if (unaff_r6 == pcVar7) {
              FUN_0002df80(&local_4c);
              pcVar8 = strchr(unaff_r6,0x3d);
              pcVar8 = pcVar8 + 1;
LAB_00016b18:
              iVar3 = _dbus_string_append(&local_4c,pcVar8);
              if (iVar3 == 0) goto LAB_000168fc;
              break;
            }
            if ((pcVar8 != (char *)0x0) &&
               (iVar3 = strcmp(pcVar8,(char *)(DAT_00016ee0 + 0x16b58)), iVar3 == 0)) {
              FUN_0002df80(&local_4c);
              pcVar8 = unaff_r6;
              goto LAB_00016b18;
            }
            iVar3 = strcmp(unaff_r6,(char *)(DAT_00016ee4 + 0x16b84));
          } while (iVar3 != 0);
          bVar2 = true;
LAB_00016b2c:
          local_b4 = local_b4 + 1;
          pcVar8 = unaff_r6;
        } while( true );
      }
    }
  }
  uVar6 = 1;
LAB_0001662c:
  if (local_2c != *piVar11) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}



/* ===== entry @ 00016f14 size=80 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00048eec)
            (*(undefined4 *)((int)&DAT_00016f5c + DAT_00016f68 + DAT_00016f5c),param_2,
             &stack0x00000004,*(undefined4 *)((int)&DAT_00016f5c + DAT_00016f64 + DAT_00016f5c),
             *(undefined4 *)((int)&DAT_00016f5c + DAT_00016f60 + DAT_00016f5c),param_1);
  return;
}



/* ===== FUN_00016f6c @ 00016f6c size=72 ===== */

void FUN_00016f6c(void)

{
  code *pcVar1;
  
  if (DAT_00016fb8 + 0x16f84 == DAT_00016fb4 + 0x16f7c) {
    return;
  }
  pcVar1 = *(code **)(DAT_00016fbc + 0x16f8c + DAT_00016fc0);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 00017028 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_0001709c + 0x17044;
  if (*(char *)(DAT_00017098 + 0x17038) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_000170a0) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_000170a4 + 0x17064));
  }
  FUN_00016f6c();
  if (*(int *)(iVar1 + DAT_000170a8) != 0) {
    __deregister_frame_info(DAT_000170ac + 0x17084);
  }
  *(undefined1 *)(DAT_000170b0 + 0x17094) = 1;
  return;
}



/* ===== _INIT_0 @ 000170b4 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_000170ec + 0x170c4 + DAT_000170f0) != 0) {
    __register_frame_info(DAT_000170f8 + 0x170e4,DAT_000170f4 + 0x170e0);
  }
  if (((DAT_0001701c + 0x16fdc) - (DAT_00017018 + 0x16fd4) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00017020 + 0x16fe4 + DAT_00017024);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== FUN_000170fc @ 000170fc size=52 ===== */

void FUN_000170fc(int *param_1)

{
  if (*param_1 != 0) {
    dbus_message_unref();
  }
  if (param_1[1] != 0) {
    dbus_connection_unref();
  }
  dbus_free(param_1);
  return;
}



/* ===== FUN_00017130 @ 00017130 size=56 ===== */

void FUN_00017130(int *param_1)

{
  _dbus_hash_table_insert_string_preallocated
            (*(undefined4 *)(*(int *)(*param_1 + 4) + 8),param_1[1],*(undefined4 *)(*param_1 + 8));
  *(int *)*param_1 = *(int *)*param_1 + 1;
  param_1[1] = 0;
  return;
}



/* ===== FUN_00017168 @ 00017168 size=32 ===== */

void FUN_00017168(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001a658(*(undefined4 *)(*(int *)(param_2 + 4) + 0x10));
  FUN_0002e848(uVar1,param_1);
  return;
}



/* ===== FUN_00017188 @ 00017188 size=32 ===== */

void FUN_00017188(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001a658(*(undefined4 *)(*(int *)(param_2 + 4) + 0x10));
  FUN_0002e86c(uVar1,param_1);
  return;
}



/* ===== FUN_000171a8 @ 000171a8 size=32 ===== */

void FUN_000171a8(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001a658(*(undefined4 *)(*(int *)(param_2 + 4) + 0x10));
  FUN_0002e718(uVar1,param_1);
  return;
}



/* ===== FUN_000171c8 @ 000171c8 size=168 ===== */

void FUN_000171c8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  do {
    iVar1 = FUN_00021670(*(undefined4 *)(*(int *)(param_1 + 4) + 0x10));
    if (iVar1 != 0) {
      iVar2 = _dbus_list_get_first_link(param_1 + 0x14);
      do {
        if (iVar2 == 0) {
          FUN_00021b48(iVar1);
          _dbus_hash_table_remove_string
                    (*(undefined4 *)(*(int *)(param_1 + 4) + 8),*(undefined4 *)(param_1 + 8));
          return;
        }
        iVar3 = *(int *)(iVar2 + 4);
        puVar4 = *(undefined4 **)(iVar2 + 8);
        if (iVar3 == *(int *)(param_1 + 0x14)) {
          iVar3 = 0;
        }
        iVar2 = iVar3;
      } while (((puVar4[1] == 0) || (iVar3 = dbus_connection_get_is_connected(), iVar3 == 0)) ||
              (iVar3 = FUN_00022168(iVar1,puVar4[1],param_2,*puVar4), iVar3 != 0));
      FUN_00021a80(iVar1);
    }
    FUN_0002ea80();
  } while( true );
}



/* ===== FUN_000176e0 @ 000176e0 size=44 ===== */

void FUN_000176e0(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_00031f18();
  }
  _dbus_hash_table_remove_string
            (*(undefined4 *)(*(int *)(param_1 + 4) + 8),*(undefined4 *)(param_1 + 8));
  return;
}



/* ===== FUN_0001770c @ 0001770c size=92 ===== */

void FUN_0001770c(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (0 < iVar1 + -1) {
    return;
  }
  dbus_free(param_1[1]);
  dbus_free(param_1[2]);
  dbus_free(param_1[3]);
  dbus_free(param_1[8]);
  dbus_free(param_1[4]);
  dbus_free(param_1[5]);
  dbus_free(param_1);
  return;
}



/* ===== FUN_00017768 @ 00017768 size=1784 ===== */

void FUN_00017768(int param_1,int param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int local_a4;
  int local_a0;
  int local_9c;
  undefined4 local_98;
  int local_94;
  int local_90;
  undefined4 local_8c [4];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined4 local_5c [4];
  undefined1 auStack_4c [24];
  int local_34;
  int local_2c;
  
  iVar6 = DAT_00017e60 + 0x17788;
  piVar4 = *(int **)(iVar6 + DAT_00017e64);
  local_a4 = 0;
  local_2c = *piVar4;
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  local_94 = 0;
  local_90 = 0;
  dbus_error_init(auStack_7c);
  iVar1 = _dbus_string_init(local_8c);
  if (iVar1 == 0) {
    dbus_set_error_const(param_5,DAT_00017e6c + 0x177f4,*(undefined4 *)(iVar6 + DAT_00017e68));
    piVar8 = (int *)0x0;
    goto LAB_000177fc;
  }
  iVar1 = _dbus_string_append(local_8c,*(undefined4 *)(param_2 + 4));
  if ((iVar1 == 0) || (iVar1 = _dbus_concat_dir_and_file(local_8c,param_3), iVar1 == 0)) {
    dbus_set_error_const(param_5,DAT_00017e70 + 0x17844,*(undefined4 *)(iVar6 + DAT_00017e68));
LAB_00017898:
    piVar8 = (int *)0x0;
    piVar2 = piVar8;
  }
  else {
    iVar1 = FUN_0003049c(local_8c,auStack_4c,0);
    if (iVar1 == 0) {
      dbus_set_error(param_5,DAT_00017e78 + 0x17898,DAT_00017e74 + 0x17894);
      goto LAB_00017898;
    }
    iVar7 = DAT_00017e7c + 0x17900;
    iVar1 = FUN_00023444(param_4,iVar7,DAT_00017e80 + 0x1790c,&local_a4,param_5);
    if ((iVar1 == 0) ||
       (iVar1 = FUN_00023444(param_4,iVar7,DAT_00017e84 + 0x1792c,&local_98,param_5), iVar1 == 0))
    goto LAB_00017898;
    iVar1 = _dbus_string_init(auStack_6c);
    if (iVar1 == 0) goto LAB_00017898;
    iVar1 = _dbus_string_append(auStack_6c,local_98);
    if (((iVar1 == 0) || (iVar1 = FUN_00030b28(auStack_6c), iVar1 == 0)) ||
       (iVar1 = _dbus_string_steal_data(auStack_6c,&local_a0), iVar1 == 0)) {
      _dbus_string_free(auStack_6c);
      goto LAB_00017898;
    }
    _dbus_string_free(auStack_6c);
    iVar1 = FUN_00023444(param_4,DAT_00017e8c + 0x179b8,DAT_00017e88 + 0x179b4,&local_9c,auStack_7c)
    ;
    if (iVar1 == 0) {
      iVar1 = dbus_error_has_name(auStack_7c,DAT_00017e90 + 0x179d0);
      if (iVar1 == 0) {
        dbus_error_free(auStack_7c);
        dbus_free(local_9c);
        local_9c = 0;
        goto LAB_000179fc;
      }
LAB_000179d8:
      dbus_move_error(auStack_7c,param_5);
      goto LAB_00017898;
    }
LAB_000179fc:
    iVar1 = FUN_00023444(param_4,DAT_00017e98 + 0x17a1c,DAT_00017e94 + 0x17a18,&local_94,auStack_7c)
    ;
    if (iVar1 == 0) {
      iVar1 = dbus_error_has_name(auStack_7c,DAT_00017e9c + 0x17a34);
      if (iVar1 != 0) goto LAB_000179d8;
      dbus_error_free(auStack_7c);
      dbus_free(local_94);
      local_94 = 0;
    }
    iVar1 = FUN_00023444(param_4,DAT_00017ea4 + 0x17a70,DAT_00017ea0 + 0x17a6c,&local_90,auStack_7c)
    ;
    if (iVar1 == 0) {
      iVar1 = dbus_error_has_name(auStack_7c,DAT_00017ea8 + 0x17a88);
      if (iVar1 != 0) goto LAB_000179d8;
      dbus_error_free(auStack_7c);
      dbus_free(local_90);
      local_90 = 0;
    }
    piVar2 = (int *)_dbus_hash_table_lookup_string(*(undefined4 *)(param_2 + 0xc),*param_3);
    if (piVar2 == (int *)0x0) {
      iVar1 = _dbus_string_init(local_5c);
      if (iVar1 == 0) {
LAB_00017ad0:
        uVar5 = *(undefined4 *)(iVar6 + DAT_00017e68);
        iVar1 = DAT_00017eac + 0x17ae4;
LAB_00017ae8:
        dbus_set_error_const(param_5,iVar1,uVar5);
      }
      else {
        iVar1 = _dbus_string_append(local_5c,local_a4);
        if ((iVar1 == 0) ||
           (iVar1 = _dbus_string_append(local_5c,DAT_00017eb4 + 0x17b40), iVar1 == 0)) {
          _dbus_string_free(local_5c);
          uVar5 = *(undefined4 *)(iVar6 + DAT_00017e68);
          iVar1 = DAT_00017eb0 + 0x17b28;
          goto LAB_00017ae8;
        }
        iVar1 = _dbus_string_equal(local_5c,param_3);
        if (iVar1 == 0) {
          if ((*(uint *)(param_2 + 8) & 2) != 0) {
            FUN_0001b564(*(undefined4 *)(param_1 + 0x10),1,param_5,DAT_00017ebc + 0x17b9c,
                         DAT_00017eb8 + 0x17b90,local_8c[0],local_5c[0]);
            _dbus_string_free(local_5c);
            goto LAB_00017af0;
          }
          iVar1 = FUN_0001a624(*(undefined4 *)(param_1 + 0x10));
          if (iVar1 != 0) {
            FUN_0001a6ec(*(undefined4 *)(param_1 + 0x10),1,DAT_00017ec0 + 0x17bcc,local_8c[0],
                         local_5c[0]);
          }
        }
        _dbus_string_free(local_5c);
        iVar1 = _dbus_hash_table_lookup_string(*(undefined4 *)(param_1 + 4),local_a4);
        if (iVar1 == 0) {
          piVar3 = (int *)dbus_malloc0(0x24);
          if (piVar3 == (int *)0x0) goto LAB_00017ad0;
          piVar3[7] = param_2;
          piVar3[1] = local_a4;
          piVar3[2] = local_a0;
          piVar3[3] = local_9c;
          piVar3[4] = local_94;
          piVar3[5] = local_90;
          *piVar3 = 1;
          local_a4 = iVar1;
          local_a0 = iVar1;
          local_9c = iVar1;
          local_94 = iVar1;
          local_90 = iVar1;
          iVar1 = _dbus_strdup(*param_3);
          piVar3[8] = iVar1;
          if (iVar1 == 0) {
            uVar5 = *(undefined4 *)(iVar6 + DAT_00017e68);
            iVar1 = DAT_00017ecc + 0x17c94;
          }
          else {
            uVar5 = *(undefined4 *)(param_1 + 4);
            *piVar3 = *piVar3 + 1;
            iVar1 = _dbus_hash_table_insert_string(uVar5,piVar3[1],piVar3);
            if (iVar1 == 0) {
              uVar5 = *(undefined4 *)(iVar6 + DAT_00017e68);
              iVar1 = DAT_00017ed0 + 0x17ce0;
            }
            else {
              uVar5 = *(undefined4 *)(param_2 + 0xc);
              *piVar3 = *piVar3 + 1;
              iVar1 = _dbus_hash_table_insert_string(uVar5,piVar3[8],piVar3);
              if (iVar1 != 0) goto LAB_00017e48;
              _dbus_hash_table_remove_string(*(undefined4 *)(param_1 + 4),piVar3[1]);
              uVar5 = *(undefined4 *)(iVar6 + DAT_00017e68);
              iVar1 = DAT_00017ed4 + 0x17d30;
            }
          }
          dbus_set_error_const(param_5,iVar1,uVar5);
          piVar2 = piVar3;
        }
        else {
          dbus_set_error(param_5,DAT_00017ec8 + 0x17c0c,DAT_00017ec4 + 0x17c08,local_a4);
        }
      }
LAB_00017af0:
      piVar8 = (int *)0x0;
    }
    else {
      *piVar2 = *piVar2 + 1;
      _dbus_hash_table_remove_string(*(undefined4 *)(param_1 + 4),piVar2[1]);
      iVar1 = _dbus_hash_table_lookup_string(*(undefined4 *)(param_1 + 4),local_a4);
      if (iVar1 != 0) {
        dbus_set_error(param_5,DAT_00017edc + 0x17d88,DAT_00017ed8 + 0x17d80,local_a4,local_8c[0]);
        goto LAB_00017af0;
      }
      dbus_free(piVar2[1]);
      piVar2[1] = local_a4;
      local_a4 = iVar1;
      dbus_free(piVar2[2]);
      piVar2[2] = local_a0;
      local_a0 = iVar1;
      dbus_free(piVar2[3]);
      piVar2[3] = local_9c;
      local_9c = iVar1;
      dbus_free(piVar2[4]);
      piVar2[4] = local_94;
      local_94 = iVar1;
      dbus_free(piVar2[5]);
      piVar2[5] = local_90;
      uVar5 = *(undefined4 *)(param_1 + 4);
      *piVar2 = *piVar2 + 1;
      local_90 = iVar1;
      iVar1 = _dbus_hash_table_insert_string(uVar5,piVar2[1],piVar2);
      piVar3 = piVar2;
      if (iVar1 == 0) {
        dbus_set_error_const(param_5,DAT_00017ee0 + 0x17e2c,*(undefined4 *)(iVar6 + DAT_00017e68));
        _dbus_hash_table_remove_string(*(undefined4 *)(piVar2[7] + 0xc),piVar2[8]);
        piVar8 = (int *)0x0;
      }
      else {
LAB_00017e48:
        piVar8 = (int *)0x1;
        piVar3[6] = local_34;
        piVar2 = piVar3;
      }
    }
  }
  dbus_free(local_98);
  dbus_free(local_a4);
  dbus_free(local_a0);
  dbus_free(local_9c);
  dbus_free(local_94);
  dbus_free(local_90);
  _dbus_string_free(local_8c);
  if (piVar2 != (int *)0x0) {
    FUN_0001770c(piVar2);
  }
LAB_000177fc:
  if (local_2c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(piVar8);
  }
  return;
}



/* ===== FUN_00017ee4 @ 00017ee4 size=480 ===== */

void FUN_00017ee4(int param_1,int param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [24];
  uint local_34;
  int local_2c;
  
  iVar4 = DAT_000180c4 + 0x17f04;
  piVar2 = *(int **)(iVar4 + DAT_000180c8);
  local_2c = *piVar2;
  _dbus_string_init_const(auStack_6c,*(undefined4 *)(param_2 + 0x20));
  iVar1 = _dbus_string_init(auStack_7c);
  if (iVar1 == 0) {
    dbus_set_error_const(param_4,DAT_000180d0 + 0x17f54,*(undefined4 *)(iVar4 + DAT_000180cc));
    uVar3 = 0;
    goto LAB_00017f5c;
  }
  iVar1 = _dbus_string_append(auStack_7c,*(undefined4 *)(*(int *)(param_2 + 0x1c) + 4));
  if ((iVar1 == 0) || (iVar1 = _dbus_concat_dir_and_file(auStack_7c,auStack_6c), iVar1 == 0)) {
    dbus_set_error_const(param_4,DAT_000180d4 + 0x17fa8,*(undefined4 *)(iVar4 + DAT_000180cc));
LAB_00017fb0:
    uVar3 = 0;
  }
  else {
    iVar1 = FUN_0003049c(auStack_7c,auStack_4c,0);
    if (iVar1 == 0) {
      _dbus_hash_table_remove_string(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 4));
      _dbus_hash_table_remove_string
                (*(undefined4 *)(*(int *)(param_2 + 0x1c) + 0xc),*(undefined4 *)(param_2 + 0x20));
      param_2 = 0;
    }
    else if (*(uint *)(param_2 + 0x18) < local_34) {
      dbus_error_init(auStack_5c);
      iVar1 = FUN_00022bcc(auStack_7c,auStack_5c);
      if (iVar1 == 0) {
        iVar1 = DAT_000180d8 + 0x18058;
      }
      else {
        iVar4 = FUN_00017768(param_1,*(undefined4 *)(param_2 + 0x1c),auStack_6c,iVar1,auStack_5c);
        if (iVar4 != 0) {
          FUN_00022b38(iVar1);
          goto LAB_00018014;
        }
        FUN_00022b38(iVar1);
        iVar1 = DAT_000180dc + 0x180b4;
      }
      iVar1 = dbus_error_has_name(auStack_5c,iVar1);
      if (iVar1 != 0) {
        dbus_move_error(auStack_5c,param_4);
        goto LAB_00017fb0;
      }
      dbus_error_free(auStack_5c);
    }
LAB_00018014:
    uVar3 = 1;
  }
  _dbus_string_free(auStack_7c);
  if (param_3 != (int *)0x0) {
    *param_3 = param_2;
  }
LAB_00017f5c:
  if (local_2c == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== FUN_000180e0 @ 000180e0 size=632 ===== */

void FUN_000180e0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 auStack_6c [16];
  undefined4 local_5c [4];
  undefined1 auStack_4c [16];
  undefined4 auStack_3c [4];
  int local_2c;
  
  iVar8 = DAT_00018358 + 0x18100;
  piVar5 = *(int **)(iVar8 + DAT_0001835c);
  local_2c = *piVar5;
  _dbus_string_init_const(auStack_6c,*(undefined4 *)(param_2 + 4));
  iVar1 = _dbus_string_init(local_5c);
  if (iVar1 == 0) {
    dbus_set_error_const(param_3,DAT_00018364 + 0x1814c,*(undefined4 *)(iVar8 + DAT_00018360));
    uVar9 = 0;
  }
  else {
    puVar2 = auStack_3c;
    iVar1 = _dbus_string_init(puVar2);
    if (iVar1 == 0) {
      dbus_set_error_const(param_3,DAT_00018368 + 0x1819c,*(undefined4 *)(iVar8 + DAT_00018360));
      uVar9 = 0;
      puVar2 = local_5c;
    }
    else {
      iVar1 = FUN_00030580(auStack_6c,param_3);
      if (iVar1 == 0) {
        uVar9 = 0;
      }
      else {
        dbus_error_init(auStack_4c);
        iVar6 = DAT_0001836c + 0x181e0;
        iVar7 = DAT_00018370 + 0x181ec;
LAB_000181ec:
        do {
          do {
            iVar3 = FUN_00030628(iVar1,local_5c,auStack_4c);
            if (iVar3 == 0) {
              iVar8 = dbus_error_is_set(auStack_4c);
              if (iVar8 == 0) {
                uVar9 = 1;
              }
              else {
LAB_000182fc:
                dbus_move_error(auStack_4c,param_3);
LAB_000182b4:
                uVar9 = 0;
              }
              goto LAB_00018268;
            }
            _dbus_string_set_length(puVar2,0);
            iVar3 = FUN_00032acc(local_5c,iVar6);
          } while (iVar3 == 0);
          iVar3 = _dbus_hash_table_lookup_string(*(undefined4 *)(param_2 + 0xc),local_5c[0]);
          if (iVar3 == 0) {
            iVar3 = _dbus_string_append(puVar2,*(undefined4 *)(param_2 + 4));
            if ((iVar3 == 0) || (iVar3 = _dbus_concat_dir_and_file(puVar2,local_5c), iVar3 == 0)) {
              dbus_set_error_const
                        (param_3,DAT_00018374 + 0x182ac,*(undefined4 *)(iVar8 + DAT_00018360));
              goto LAB_000182b4;
            }
            iVar3 = FUN_00022bcc(puVar2,auStack_4c);
            if (iVar3 == 0) {
              iVar3 = DAT_00018378 + 0x182f0;
            }
            else {
              iVar4 = FUN_00017768(param_1,param_2,local_5c,iVar3,auStack_4c);
              if (iVar4 != 0) {
                FUN_00022b38(iVar3);
                goto LAB_000181ec;
              }
              FUN_00022b38(iVar3);
              iVar3 = iVar7;
            }
            iVar3 = dbus_error_has_name(auStack_4c,iVar3);
            if (iVar3 != 0) goto LAB_000182fc;
            dbus_error_free(auStack_4c);
            goto LAB_000181ec;
          }
          iVar3 = FUN_00017ee4(param_1,iVar3,0,param_3);
          uVar9 = 0;
        } while (iVar3 != 0);
LAB_00018268:
        FUN_0003070c(iVar1);
      }
      _dbus_string_free(local_5c);
    }
    _dbus_string_free(puVar2);
  }
  if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}



/* ===== FUN_0001837c @ 0001837c size=68 ===== */

void FUN_0001837c(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (0 < iVar1 + -1) {
    return;
  }
  if (param_1[3] != 0) {
    _dbus_hash_table_unref();
  }
  dbus_free(param_1[1]);
  dbus_free(param_1);
  return;
}



/* ===== FUN_000183c0 @ 000183c0 size=256 ===== */

void FUN_000183c0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1 == (int *)0x0) || (iVar2 = *param_1, *param_1 = iVar2 + -1, 0 < iVar2 + -1)) {
    return;
  }
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    uVar1 = FUN_0001a658(*(undefined4 *)(param_1[1] + 0x10));
    FUN_0002e9b0(uVar1,param_1[8]);
    *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xfe;
  }
  if (param_1[8] != 0) {
    _dbus_timeout_unref();
  }
  iVar2 = param_1[7];
  if (iVar2 != 0) {
    FUN_000321fc(iVar2,0,0,0,iVar2,0);
    FUN_00031de8(param_1[7]);
  }
  dbus_free(param_1[2]);
  dbus_free(param_1[3]);
  dbus_free(param_1[4]);
  iVar2 = _dbus_list_get_first_link(param_1 + 5);
  do {
    if (iVar2 == 0) break;
    FUN_000170fc(*(undefined4 *)(iVar2 + 8));
    iVar2 = *(int *)(iVar2 + 4);
  } while (iVar2 != param_1[5]);
  _dbus_list_clear(param_1 + 5);
  *(int *)(param_1[1] + 0x14) = *(int *)(param_1[1] + 0x14) - param_1[6];
  dbus_free(param_1);
  return;
}



/* ===== FUN_000184c4 @ 000184c4 size=56 ===== */

void FUN_000184c4(int *param_1)

{
  if (param_1[1] != 0) {
    _dbus_hash_table_free_preallocated_entry(*(undefined4 *)(*(int *)(*param_1 + 4) + 8));
  }
  FUN_000183c0(*param_1);
  dbus_free(param_1);
  return;
}



/* ===== FUN_000184fc @ 000184fc size=544 ===== */

undefined4 FUN_000184fc(int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = DAT_0001871c + 0x18524;
  if (*(int *)(param_1 + 0xc) != 0) {
    dbus_free();
  }
  iVar1 = _dbus_string_copy_data(param_2,param_1 + 0xc);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      _dbus_hash_table_unref();
    }
    iVar1 = _dbus_hash_table_new(0,0,DAT_00018728 + 0x18594);
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 != 0) {
      iVar9 = param_1 + 0x18;
      _dbus_list_foreach(iVar9,DAT_0001872c + 0x185b8,0);
      _dbus_list_clear(iVar9);
      iVar1 = _dbus_list_get_first_link(param_3);
      iVar5 = DAT_00018730 + 0x185d8;
      iVar6 = DAT_00018734 + 0x185e4;
      while( true ) {
        if (iVar1 == 0) {
          return 1;
        }
        puVar7 = *(undefined4 **)(iVar1 + 8);
        iVar2 = _dbus_strdup(puVar7[1]);
        if (iVar2 == 0) goto LAB_00018540;
        puVar3 = (undefined4 *)dbus_malloc0(0x10);
        if (puVar3 == (undefined4 *)0x0) break;
        *puVar3 = 1;
        puVar3[1] = iVar2;
        puVar3[2] = *puVar7;
        iVar2 = _dbus_hash_table_new(0,0,iVar5);
        puVar3[3] = iVar2;
        if (iVar2 == 0) {
          FUN_0001837c(puVar3);
          uVar4 = *(undefined4 *)(iVar8 + DAT_00018720);
          iVar8 = DAT_0001873c + 0x18688;
LAB_0001868c:
          dbus_set_error_const(param_4,iVar8,uVar4);
          return 0;
        }
        iVar2 = _dbus_list_append(iVar9,puVar3);
        if (iVar2 == 0) {
          FUN_0001837c(puVar3);
          uVar4 = *(undefined4 *)(iVar8 + DAT_00018720);
          iVar8 = DAT_00018740 + 0x186c8;
          goto LAB_0001868c;
        }
        iVar2 = FUN_000180e0(param_1,puVar3,param_4);
        if (iVar2 == 0) {
          iVar2 = dbus_error_has_name(param_4,iVar6);
          if (iVar2 != 0) {
            return 0;
          }
          dbus_error_free(param_4);
        }
        iVar1 = *(int *)(iVar1 + 4);
        if (iVar1 == *param_3) {
          return 1;
        }
      }
      dbus_free(iVar2);
      uVar4 = *(undefined4 *)(iVar8 + DAT_00018720);
      iVar8 = DAT_00018738 + 0x18634;
      goto LAB_00018558;
    }
  }
LAB_00018540:
  uVar4 = *(undefined4 *)(iVar8 + DAT_00018720);
  iVar8 = DAT_00018724 + 0x18554;
LAB_00018558:
  dbus_set_error_const(param_4,iVar8,uVar4);
  return 0;
}



/* ===== FUN_00018754 @ 00018754 size=128 ===== */

void FUN_00018754(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (0 < iVar1 + -1) {
    return;
  }
  dbus_free(param_1[3]);
  if (param_1[1] != 0) {
    _dbus_hash_table_unref();
  }
  if (param_1[2] != 0) {
    _dbus_hash_table_unref();
  }
  _dbus_list_foreach(param_1 + 6,DAT_000187d4 + 0x187b0,0);
  _dbus_list_clear(param_1 + 6);
  if (param_1[7] != 0) {
    _dbus_hash_table_unref();
  }
  dbus_free(param_1);
  return;
}



/* ===== FUN_000187d8 @ 000187d8 size=304 ===== */

undefined4 *
FUN_000187d8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar5 = DAT_00018908 + 0x187f8;
  uVar6 = param_1;
  uVar4 = param_2;
  uVar7 = param_3;
  puVar1 = (undefined4 *)dbus_malloc0(0x20);
  if (puVar1 == (undefined4 *)0x0) {
    uVar4 = *(undefined4 *)(iVar5 + DAT_0001890c);
    dbus_set_error_const(param_4,DAT_00018910 + 0x1881c,uVar4,uVar4,uVar6,uVar4);
  }
  else {
    puVar1[4] = param_1;
    *puVar1 = 1;
    puVar1[5] = 0;
    iVar2 = FUN_000184fc(puVar1,param_2,param_3,param_4,uVar6,uVar4,uVar7);
    if (iVar2 != 0) {
      iVar2 = _dbus_hash_table_new(0,0,DAT_00018914 + 0x18870);
      puVar1[2] = iVar2;
      if (iVar2 != 0) {
        uVar4 = *(undefined4 *)(iVar5 + DAT_0001891c);
        iVar2 = _dbus_hash_table_new(0,uVar4,uVar4,uVar4,uVar6,uVar4);
        puVar1[7] = iVar2;
        if ((iVar2 != 0) && (iVar2 = FUN_00032b58(), iVar2 != 0)) {
          iVar3 = _dbus_hash_table_from_array(puVar1[7],iVar2,0x3d);
          dbus_free_string_array(iVar2);
          if (iVar3 != 0) {
            return puVar1;
          }
        }
      }
      uVar4 = *(undefined4 *)(iVar5 + DAT_0001890c);
      dbus_set_error_const(param_4,DAT_00018918 + 0x18894,uVar4,uVar4,uVar6,uVar4);
    }
    FUN_00018754(puVar1);
  }
  return (undefined4 *)0x0;
}



/* ===== FUN_00018920 @ 00018920 size=400 ===== */

void FUN_00018920(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 local_30;
  int local_2c;
  
  iVar6 = DAT_00018ab0 + 0x18940;
  piVar4 = *(int **)(iVar6 + DAT_00018ab4);
  local_2c = *piVar4;
  iVar1 = _dbus_hash_table_lookup_string(*(undefined4 *)(param_1 + 8));
  if (iVar1 != 0) {
    FUN_0001a6ec(*(undefined4 *)(param_1 + 0x10),0,DAT_00018ab8 + 0x1899c,param_2);
    iVar2 = _dbus_list_get_first_link(iVar1 + 0x14);
    puVar9 = &local_30;
LAB_000189b0:
    if (iVar2 != 0) {
      iVar5 = *(int *)(iVar2 + 4);
      puVar8 = *(undefined4 **)(iVar2 + 8);
      if (iVar5 == *(int *)(iVar1 + 0x14)) {
        iVar5 = 0;
      }
      iVar2 = iVar5;
      if (((puVar8[1] != 0) && (iVar5 = dbus_connection_get_is_connected(), iVar5 != 0)) &&
         (puVar8[2] == 0)) {
        iVar5 = dbus_message_new_method_return(*puVar8);
        if (iVar5 == 0) {
          uVar7 = *(undefined4 *)(iVar6 + DAT_00018abc);
          iVar1 = DAT_00018ac0 + 0x18a10;
        }
        else {
          local_30 = 1;
          iVar3 = dbus_message_append_args(iVar5,0x75,puVar9,0);
          if (iVar3 == 0) {
            dbus_message_unref(iVar5);
            uVar7 = *(undefined4 *)(iVar6 + DAT_00018abc);
            iVar1 = DAT_00018ac4 + 0x18a5c;
          }
          else {
            iVar3 = FUN_00021920(param_3,puVar8[1],iVar5);
            if (iVar3 != 0) {
              dbus_message_unref(iVar5);
              goto LAB_000189b0;
            }
            dbus_message_unref(iVar5);
            uVar7 = *(undefined4 *)(iVar6 + DAT_00018abc);
            iVar1 = DAT_00018ac8 + 0x18a98;
          }
        }
        dbus_set_error_const(param_4,iVar1,uVar7,uVar7,piVar4,uVar7);
        uVar7 = 0;
        goto LAB_00018968;
      }
      goto LAB_000189b0;
    }
  }
  uVar7 = 1;
LAB_00018968:
  if (local_2c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}



/* ===== FUN_00018acc @ 00018acc size=432 ===== */

void FUN_00018acc(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined1 auStack_3c [16];
  int local_2c;
  
  uVar5 = *(undefined4 *)(param_1 + 8);
  piVar8 = *(int **)(DAT_00018c7c + 0x18ae0 + DAT_00018c80);
  local_2c = *piVar8;
  uVar1 = FUN_0002a8e4(param_2);
  iVar2 = _dbus_hash_table_lookup_string(uVar5,uVar1);
  if (iVar2 != 0) {
    iVar3 = _dbus_list_get_first_link(iVar2 + 0x14);
    while (iVar3 != 0) {
      iVar6 = *(int *)(iVar3 + 4);
      puVar7 = *(undefined4 **)(iVar3 + 8);
      if (iVar6 == *(int *)(iVar2 + 0x14)) {
        iVar6 = 0;
      }
      iVar3 = iVar6;
      if ((puVar7[2] != 0) &&
         ((puVar7[1] == 0 || (iVar6 = dbus_connection_get_is_connected(), iVar6 != 0)))) {
        dbus_error_init(auStack_3c);
        uVar1 = FUN_0002a8c4(param_2);
        iVar6 = FUN_00023ab8(param_3,puVar7[1],uVar1,*puVar7,auStack_3c);
        if (iVar6 == 0) {
          iVar6 = FUN_00022168(param_3,puVar7[1],auStack_3c,*puVar7);
          if (iVar6 == 0) {
            FUN_00020e68(puVar7[1],*puVar7);
          }
          dbus_error_free(auStack_3c);
        }
      }
    }
    piVar4 = (int *)dbus_malloc(8);
    if (piVar4 == (int *)0x0) {
      uVar1 = 0;
      goto LAB_00018b80;
    }
    *piVar4 = iVar2;
    iVar2 = _dbus_hash_table_preallocate_entry(*(undefined4 *)(*(int *)(iVar2 + 4) + 8));
    piVar4[1] = iVar2;
    *(int *)*piVar4 = *(int *)*piVar4 + 1;
    if ((piVar4[1] == 0) ||
       (iVar2 = FUN_000221c8(param_3,DAT_00018c88 + 0x18c4c,piVar4,DAT_00018c84 + 0x18c48),
       iVar2 == 0)) {
      FUN_000184c4(piVar4);
      uVar1 = 0;
      goto LAB_00018b80;
    }
    uVar5 = *(undefined4 *)(param_1 + 8);
    uVar1 = FUN_0002a8e4(param_2);
    _dbus_hash_table_remove_string(uVar5,uVar1);
  }
  uVar1 = 1;
LAB_00018b80:
  if (local_2c != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}



/* ===== FUN_00018c8c @ 00018c8c size=152 ===== */

undefined4 FUN_00018c8c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = DAT_00018d24 + 0x18cac;
  iVar6 = param_1;
  iVar1 = _dbus_strdup(param_2);
  if ((iVar1 == 0) || (iVar4 = _dbus_strdup(param_3), iVar4 == 0)) {
    iVar4 = 0;
  }
  else {
    iVar2 = _dbus_hash_table_insert_string(*(undefined4 *)(param_1 + 0x1c),iVar1,iVar4);
    if (iVar2 != 0) {
      return 1;
    }
  }
  dbus_free(iVar1);
  dbus_free(iVar4);
  uVar3 = *(undefined4 *)(iVar5 + DAT_00018d28);
  dbus_set_error_const(param_4,DAT_00018d2c + 0x18ce0,uVar3,uVar3,iVar6,uVar3);
  return 0;
}



/* ===== FUN_00018d30 @ 00018d30 size=3120 ===== */

void FUN_00018d30(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 char *param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  char *pcVar12;
  int iVar13;
  undefined4 uVar14;
  int *local_74;
  int local_64;
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  undefined4 local_58;
  undefined1 auStack_4c [16];
  int local_3c [4];
  int local_2c;
  
  iVar10 = DAT_00019960 + 0x18d50;
  piVar8 = *(int **)(iVar10 + DAT_00019964);
  local_2c = *piVar8;
  iVar1 = FUN_0001a6b0(*(undefined4 *)(param_1 + 0x10));
  if (*(int *)(param_1 + 0x14) < iVar1) {
    iVar1 = FUN_0001a62c(*(undefined4 *)(param_1 + 0x10));
    if ((iVar1 == 0) || (iVar1 = strcmp(param_6,(char *)(DAT_00019970 + 0x18dd0)), iVar1 != 0)) {
      iVar1 = _dbus_hash_table_lookup_string(*(undefined4 *)(param_1 + 4),param_6);
      if (iVar1 == 0) {
        iVar1 = _dbus_list_get_first_link(param_1 + 0x18);
        iVar13 = DAT_00019974 + 0x18e08;
        do {
          if (iVar1 == 0) break;
          uVar14 = *(undefined4 *)(iVar1 + 8);
          dbus_error_init(local_3c);
          iVar2 = FUN_000180e0(param_1,uVar14,local_3c);
          if (iVar2 == 0) {
            iVar2 = dbus_error_has_name(local_3c,iVar13);
            if (iVar2 != 0) {
              dbus_move_error(local_3c,param_7);
              iVar13 = 0;
              goto LAB_00018e54;
            }
            dbus_error_free(local_3c);
          }
          iVar1 = *(int *)(iVar1 + 4);
        } while (iVar1 != *(int *)(param_1 + 0x18));
        iVar1 = _dbus_hash_table_lookup_string(*(undefined4 *)(param_1 + 4),param_6);
      }
      else {
        iVar2 = FUN_00017ee4(param_1,iVar1,local_3c,param_7);
        iVar13 = 0;
        iVar1 = local_3c[0];
        if (iVar2 == 0) goto LAB_00018e54;
      }
      if (iVar1 != 0) {
        if (param_4 == 0) goto LAB_00018eec;
        iVar2 = FUN_0001b5fc(*(undefined4 *)(param_1 + 0x10),param_3,param_2,0,0,param_5,iVar1,
                             param_7);
        iVar13 = 0;
        if (iVar2 == 0) goto LAB_00018e54;
        goto LAB_0001992c;
      }
      dbus_set_error(param_7,DAT_0001997c + 0x18edc,DAT_00019978 + 0x18ed8,param_6);
    }
    else {
      iVar1 = 0;
      if (param_4 == 0) {
        iVar1 = 0;
LAB_00018eec:
        _dbus_string_init_const(auStack_4c,param_6);
        uVar14 = FUN_0001a638(*(undefined4 *)(param_1 + 0x10));
        iVar13 = FUN_00029cbc(uVar14,auStack_4c);
        if (iVar13 == 0) goto LAB_0001992c;
        iVar1 = dbus_message_new_method_return(param_5);
        if (iVar1 != 0) {
          local_3c[0] = 2;
          iVar13 = dbus_message_append_args(iVar1,0x75,local_3c,0);
          if (iVar13 == 0) {
            dbus_set_error_const
                      (param_7,DAT_00019988 + 0x18f80,*(undefined4 *)(iVar10 + DAT_00019980));
            dbus_message_unref(iVar1);
            iVar13 = 0;
          }
          else {
            iVar13 = FUN_00021920(param_3,param_2,iVar1);
            dbus_message_unref(iVar1);
            if (iVar13 == 0) {
              dbus_set_error_const
                        (param_7,DAT_0001998c + 0x18fd0,*(undefined4 *)(iVar10 + DAT_00019980));
            }
          }
          goto LAB_00018e54;
        }
        uVar14 = *(undefined4 *)(iVar10 + DAT_00019980);
        iVar1 = DAT_00019984 + 0x18f38;
      }
      else {
LAB_0001992c:
        puVar7 = (undefined4 *)dbus_malloc0(0xc);
        if (puVar7 != (undefined4 *)0x0) {
          puVar7[2] = param_4;
          *puVar7 = param_5;
          dbus_message_ref(param_5);
          puVar7[1] = param_2;
          if (param_2 != 0) {
            dbus_connection_ref(param_2);
          }
          piVar3 = (int *)_dbus_hash_table_lookup_string(*(undefined4 *)(param_1 + 8),param_6);
          if (piVar3 == (int *)0x0) {
            local_74 = (int *)dbus_malloc0(0x28);
            if (local_74 == (int *)0x0) {
              dbus_set_error_const
                        (param_7,DAT_0001999c + 0x190f0,*(undefined4 *)(iVar10 + DAT_00019980));
              FUN_000170fc(puVar7);
              goto LAB_00018da8;
            }
            local_74[1] = param_1;
            *local_74 = 1;
            iVar13 = _dbus_strdup(param_6);
            local_74[2] = iVar13;
            if (iVar13 == 0) {
              uVar14 = *(undefined4 *)(iVar10 + DAT_00019980);
              iVar1 = DAT_000199a0 + 0x1913c;
            }
            else {
              if (iVar1 != 0) {
                iVar13 = _dbus_strdup(*(undefined4 *)(iVar1 + 8));
                local_74[3] = iVar13;
                if (iVar13 == 0) {
                  uVar14 = *(undefined4 *)(iVar10 + DAT_00019980);
                  iVar1 = DAT_000199a4 + 0x19188;
                  goto LAB_00019140;
                }
                if (*(int *)(iVar1 + 0x10) != 0) {
                  iVar13 = _dbus_strdup();
                  local_74[4] = iVar13;
                  if (iVar13 == 0) {
                    uVar14 = *(undefined4 *)(iVar10 + DAT_00019980);
                    iVar1 = DAT_000199a8 + 0x191b8;
                    goto LAB_00019140;
                  }
                }
              }
              uVar14 = FUN_0001a680(*(undefined4 *)(param_1 + 0x10));
              iVar13 = _dbus_timeout_new(uVar14,DAT_00019a40 + 0x198cc,local_74,0);
              local_74[8] = iVar13;
              if (iVar13 == 0) {
                uVar14 = *(undefined4 *)(iVar10 + DAT_00019980);
                iVar1 = DAT_00019a44 + 0x198f0;
              }
              else {
                uVar14 = FUN_0001a658(*(undefined4 *)(param_1 + 0x10));
                iVar13 = FUN_0002e93c(uVar14,local_74[8]);
                if (iVar13 == 0) {
                  uVar14 = *(undefined4 *)(iVar10 + DAT_00019980);
                  iVar1 = DAT_000199ac + 0x191ec;
                }
                else {
                  *(byte *)(local_74 + 9) = *(byte *)(local_74 + 9) | 1;
                  iVar13 = _dbus_list_append(local_74 + 5,puVar7);
                  if (iVar13 != 0) {
                    local_74[6] = local_74[6] + 1;
                    *(int *)(local_74[1] + 0x14) = *(int *)(local_74[1] + 0x14) + 1;
                    iVar13 = _dbus_hash_table_insert_string
                                       (*(undefined4 *)(param_1 + 8),local_74[2],local_74);
                    if (iVar13 == 0) {
                      dbus_set_error_const
                                (param_7,DAT_000199b4 + 0x1927c,
                                 *(undefined4 *)(iVar10 + DAT_00019980));
                      FUN_000183c0(local_74);
                      iVar13 = 0;
                      goto LAB_00018e54;
                    }
                    goto LAB_00019078;
                  }
                  uVar14 = *(undefined4 *)(iVar10 + DAT_00019980);
                  iVar1 = DAT_000199b0 + 0x19228;
                }
              }
            }
LAB_00019140:
            dbus_set_error_const(param_7,iVar1,uVar14);
            FUN_000183c0(local_74);
          }
          else {
            iVar13 = _dbus_list_append(piVar3 + 5,puVar7);
            if (iVar13 != 0) {
              piVar3[6] = piVar3[6] + 1;
              *(int *)(piVar3[1] + 0x14) = *(int *)(piVar3[1] + 0x14) + 1;
              local_74 = piVar3;
LAB_00019078:
              iVar13 = FUN_000221c8(param_3,DAT_00019998 + 0x19090,local_74,DAT_00019994 + 0x19088);
              if (iVar13 != 0) {
                *local_74 = *local_74 + 1;
                if (piVar3 == (int *)0x0) {
                  iVar13 = FUN_0001a62c(*(undefined4 *)(param_1 + 0x10));
                  if (iVar13 == 0) {
LAB_0001953c:
                    iVar13 = _dbus_string_init(local_3c);
                    if (iVar13 == 0) goto LAB_00019870;
                    iVar13 = FUN_0001a624(*(undefined4 *)(param_1 + 0x10));
                    if (iVar13 == 0) {
                      pcVar12 = *(char **)(iVar1 + 8);
LAB_000195e4:
                      iVar1 = _dbus_string_append(local_3c,pcVar12);
                      if (iVar1 == 0) {
LAB_000195a4:
                        _dbus_string_free(local_3c);
                        uVar14 = *(undefined4 *)(iVar10 + DAT_00019980);
                        iVar1 = DAT_000199f8 + 0x195c0;
                        goto LAB_00019888;
                      }
                      iVar1 = FUN_0002f284(local_3c[0],auStack_60,&local_64,param_7);
                      if (iVar1 == 0) {
                        _dbus_string_free(local_3c);
                        goto LAB_00019890;
                      }
                      _dbus_string_free(local_3c);
                      iVar1 = FUN_00018c8c(param_1,DAT_00019a00 + 0x19640,
                                           *(undefined4 *)(param_1 + 0xc),param_7);
                      if (iVar1 != 0) {
                        pcVar12 = (char *)FUN_0001a614(*(undefined4 *)(param_1 + 0x10));
                        if (pcVar12 == (char *)0x0) {
LAB_000196bc:
                          iVar1 = _dbus_hash_table_to_array(*(undefined4 *)(param_1 + 0x1c),0x3d);
                          if (iVar1 == 0) {
                            dbus_set_error_const
                                      (param_7,DAT_00019a10 + 0x196e8,
                                       *(undefined4 *)(iVar10 + DAT_00019980));
                          }
                          else {
                            uVar14 = *(undefined4 *)(param_1 + 0x10);
                            if (iVar13 == 0) {
                              uVar9 = FUN_0002152c(param_2);
                              uVar11 = FUN_00020ca0(param_2);
                              iVar13 = DAT_00019a28 + 0x19818;
                            }
                            else {
                              uVar9 = FUN_0002152c(param_2);
                              uVar11 = FUN_00020ca0(param_2);
                              iVar13 = DAT_00019a1c + 0x19754;
                            }
                            FUN_0001a6ec(uVar14,0,iVar13,param_6,uVar9,uVar11);
                            dbus_error_init(auStack_5c);
                            iVar13 = FUN_0001a6e0(*(undefined4 *)(param_1 + 0x10));
                            iVar13 = FUN_00032204(local_74 + 7,param_6,local_64,iVar1,iVar13 != 0,
                                                  DAT_00019a20 + 0x19790,param_1,auStack_5c);
                            if (iVar13 != 0) {
                              dbus_free_string_array(local_64);
                              FUN_0003274c(local_74[7],DAT_00019a2c + 0x19834);
                              iVar1 = FUN_000321fc(local_74[7],DAT_00019a34 + 0x19864,
                                                   DAT_00019a30 + 0x1985c,DAT_00019a38 + 0x19860,
                                                   local_74,0);
                              if (iVar1 == 0) goto LAB_00019870;
                              goto LAB_000190b8;
                            }
                            FUN_0001a6ec(*(undefined4 *)(param_1 + 0x10),0,DAT_00019a24 + 0x197c8,
                                         param_6,local_58);
                            dbus_move_error(auStack_5c,param_7);
                            dbus_free_string_array(local_64);
                            local_64 = iVar1;
                          }
                        }
                        else {
                          iVar1 = FUN_00018c8c(param_1,DAT_00019a04 + 0x1967c,pcVar12,param_7);
                          if (iVar1 != 0) {
                            iVar1 = strcmp(pcVar12,(char *)(DAT_00019a08 + 0x19694));
                            if (iVar1 == 0) {
                              uVar14 = *(undefined4 *)(param_1 + 0xc);
                              iVar1 = DAT_00019a0c + 0x196b0;
                            }
                            else {
                              iVar1 = strcmp(pcVar12,(char *)(DAT_00019a14 + 0x19704));
                              if (iVar1 != 0) goto LAB_000196bc;
                              uVar14 = *(undefined4 *)(param_1 + 0xc);
                              iVar1 = DAT_00019a18 + 0x19720;
                            }
                            iVar1 = FUN_00018c8c(param_1,iVar1,uVar14,param_7);
                            if (iVar1 != 0) goto LAB_000196bc;
                          }
                        }
                      }
                      dbus_free_string_array(local_64);
                    }
                    else {
                      if (*(int *)(iVar1 + 0xc) != 0) {
                        iVar1 = _dbus_string_append(local_3c,iVar13);
                        if ((iVar1 != 0) &&
                           (iVar1 = _dbus_string_append(local_3c,DAT_000199fc + 0x195d8),
                           pcVar12 = param_6, iVar1 != 0)) goto LAB_000195e4;
                        goto LAB_000195a4;
                      }
                      _dbus_string_free(local_3c);
                      dbus_set_error(param_7,DAT_000199f4 + 0x1958c,DAT_000199f0 + 0x19588);
                    }
                    goto LAB_00019890;
                  }
                  pcVar12 = (char *)(DAT_000199b8 + 0x192b0);
                  iVar13 = strcmp(param_6,pcVar12);
                  if (iVar13 != 0) {
                    if (*(int *)(iVar1 + 0x10) == 0) goto LAB_0001953c;
                    iVar13 = dbus_message_new_signal
                                       (DAT_000199c4 + 0x192e4,DAT_000199c0 + 0x192e0,
                                        DAT_000199bc + 0x192dc);
                    if (iVar13 == 0) {
                      uVar14 = *(undefined4 *)(iVar10 + DAT_00019980);
                      iVar1 = DAT_000199c8 + 0x19300;
                    }
                    else {
                      iVar2 = dbus_message_set_sender(iVar13,DAT_000199cc + 0x19314);
                      if (((iVar2 == 0) ||
                          (iVar2 = dbus_message_set_destination(iVar13,pcVar12), iVar2 == 0)) ||
                         (iVar2 = dbus_message_append_args(iVar13,0x73,iVar1 + 0x10,0), iVar2 == 0))
                      {
                        dbus_message_unref(iVar13);
                        uVar14 = *(undefined4 *)(iVar10 + DAT_00019980);
                        iVar1 = DAT_000199d0 + 0x19338;
                      }
                      else {
                        iVar2 = FUN_00021670(*(undefined4 *)(param_1 + 0x10));
                        if (iVar2 == 0) {
                          dbus_message_unref(iVar13);
                          uVar14 = *(undefined4 *)(iVar10 + DAT_00019980);
                          iVar1 = DAT_000199d4 + 0x1939c;
                        }
                        else {
                          uVar14 = FUN_00020bcc(param_2);
                          _dbus_string_init_const(local_3c,DAT_000199d8 + 0x193c4);
                          iVar4 = FUN_00029cbc(uVar14,local_3c);
                          if (iVar4 == 0) {
                            uVar14 = 0;
                          }
                          else {
                            uVar14 = FUN_0002a8c4();
                          }
                          iVar5 = FUN_000217ac(iVar2,0,uVar14,iVar13);
                          if (iVar5 != 0) {
                            uVar9 = *(undefined4 *)(iVar1 + 0x10);
                            uVar11 = *(undefined4 *)(param_1 + 0x10);
                            if (iVar4 == 0) {
                              uVar14 = FUN_0002152c(param_2);
                              uVar6 = FUN_00020ca0(param_2);
                              FUN_0001a6ec(uVar11,0,DAT_000199e8 + 0x19504,param_6,uVar9,uVar14,
                                           uVar6);
                              iVar10 = DAT_000199ec + 0x1951c;
                              iVar4 = FUN_00018d30(param_1,0,iVar2,1,iVar13,iVar10,param_7);
                            }
                            else {
                              iVar10 = FUN_0002152c(param_2);
                              uVar6 = FUN_00020ca0(param_2);
                              FUN_0001a6ec(uVar11,0,DAT_000199e0 + 0x1946c,param_6,uVar9,iVar10,
                                           uVar6);
                              iVar4 = FUN_00023ab8(iVar2,0,uVar14,iVar13,param_7);
                              param_7 = uVar6;
                            }
                            dbus_message_unref(iVar13);
                            if (iVar4 != 0) {
                              FUN_00021b48(iVar2);
                              goto LAB_000190b8;
                            }
                            FUN_0001a6ec(*(undefined4 *)(param_1 + 0x10),0,DAT_000199e4 + 0x194b8,
                                         param_6,*(undefined4 *)(iVar1 + 0x10),iVar10,param_7);
                            FUN_00021a80(iVar2);
                            goto LAB_00019890;
                          }
                          dbus_message_unref(iVar13);
                          uVar14 = *(undefined4 *)(iVar10 + DAT_00019980);
                          iVar1 = DAT_000199dc + 0x1941c;
                        }
                      }
                    }
                    goto LAB_00019888;
                  }
                }
LAB_000190b8:
                iVar13 = 1;
                goto LAB_00018e54;
              }
LAB_00019870:
              uVar14 = *(undefined4 *)(iVar10 + DAT_00019980);
              iVar1 = DAT_00019a3c + 0x19884;
LAB_00019888:
              dbus_set_error_const(param_7,iVar1,uVar14);
LAB_00019890:
              _dbus_hash_table_remove_string(*(undefined4 *)(param_1 + 8),local_74[2]);
              goto LAB_00018da8;
            }
            dbus_set_error_const
                      (param_7,DAT_00019990 + 0x19044,*(undefined4 *)(iVar10 + DAT_00019980));
          }
          iVar13 = 0;
          FUN_000170fc(puVar7);
          goto LAB_00018e54;
        }
        uVar14 = *(undefined4 *)(iVar10 + DAT_00019980);
        iVar1 = DAT_00019a48 + 0x19950;
      }
      dbus_set_error_const(param_7,iVar1,uVar14);
    }
  }
  else {
    dbus_set_error(param_7,DAT_0001996c + 0x18da8,DAT_00019968 + 0x18da4,param_6,iVar1);
  }
LAB_00018da8:
  iVar13 = 0;
LAB_00018e54:
  if (local_2c == *piVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar13);
}



/* ===== FUN_00019a4c @ 00019a4c size=256 ===== */

void FUN_00019a4c(int param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined1 auStack_44 [24];
  int local_2c;
  
  piVar5 = *(int **)(DAT_00019b4c + 0x19a60 + DAT_00019b50);
  local_2c = *piVar5;
  iVar1 = _dbus_hash_table_get_n_entries(*(undefined4 *)(param_1 + 4));
  piVar2 = (int *)dbus_malloc((iVar1 + 1) * 4);
  if (piVar2 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    iVar6 = 0;
    _dbus_hash_iter_init(*(undefined4 *)(param_1 + 4),auStack_44);
    piVar7 = piVar2;
    while (iVar3 = _dbus_hash_iter_next(auStack_44), iVar3 != 0) {
      iVar3 = _dbus_hash_iter_get_value(auStack_44);
      iVar3 = _dbus_strdup(*(undefined4 *)(iVar3 + 4));
      *piVar7 = iVar3;
      if (iVar3 == 0) {
        for (piVar7 = piVar2; piVar7 != piVar2 + iVar6; piVar7 = piVar7 + 1) {
          dbus_free(*piVar7);
        }
        dbus_free(piVar2);
        uVar4 = 0;
        goto LAB_00019ae0;
      }
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 1;
    }
    *piVar7 = 0;
    uVar4 = 1;
    if (param_3 != (int *)0x0) {
      *param_3 = iVar1;
    }
    *param_2 = piVar2;
  }
LAB_00019ae0:
  if (local_2c == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}



/* ===== FUN_00019c9c @ 00019c9c size=8 ===== */

undefined4 FUN_00019c9c(void)

{
  return 1;
}



/* ===== FUN_00019ca4 @ 00019ca4 size=104 ===== */

undefined4 FUN_00019ca4(char *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (((param_1 != (char *)0x0) &&
      (iVar1 = strcmp(param_1,(char *)(DAT_00019d0c + 0x19cc0)), iVar1 != 0)) &&
     (iVar1 = strcmp(param_1,(char *)(DAT_00019d10 + 0x19cd8)), iVar1 != 0)) {
    dbus_set_error(param_2,DAT_00019d18 + 0x19cfc,DAT_00019d14 + 0x19cf8,param_1);
    return 0;
  }
  return 1;
}



/* ===== FUN_00019d1c @ 00019d1c size=8 ===== */

undefined4 FUN_00019d1c(void)

{
  return 1;
}



/* ===== FUN_00019d24 @ 00019d24 size=4 ===== */

void FUN_00019d24(void)

{
  return;
}



/* ===== FUN_00019d28 @ 00019d28 size=8 ===== */

undefined4 FUN_00019d28(void)

{
  return 0;
}



/* ===== FUN_00019d30 @ 00019d30 size=4 ===== */

void FUN_00019d30(void)

{
  return;
}



/* ===== FUN_00019d38 @ 00019d38 size=8 ===== */

undefined4 FUN_00019d38(void)

{
  return 0;
}



/* ===== FUN_00019d40 @ 00019d40 size=8 ===== */

undefined4 FUN_00019d40(void)

{
  return 1;
}



/* ===== FUN_00019d48 @ 00019d48 size=8 ===== */

undefined4 FUN_00019d48(void)

{
  return 1;
}



/* ===== FUN_00019d50 @ 00019d50 size=8 ===== */

undefined4 FUN_00019d50(void)

{
  return 1;
}



/* ===== FUN_00019d58 @ 00019d58 size=4 ===== */

void FUN_00019d58(void)

{
  return;
}



/* ===== FUN_00019d64 @ 00019d64 size=4 ===== */

void FUN_00019d64(void)

{
  return;
}



/* ===== FUN_00019d6c @ 00019d6c size=24 ===== */

undefined4 FUN_00019d6c(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)dbus_server_get_data(param_1,*(undefined4 *)(DAT_00019d84 + 0x19d7c));
  return *puVar1;
}



/* ===== FUN_00019da8 @ 00019da8 size=32 ===== */

void FUN_00019da8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00019d6c(param_2);
  FUN_0002e93c(*(undefined4 *)(iVar1 + 0x30),param_1);
  return;
}



/* ===== FUN_00019dc8 @ 00019dc8 size=32 ===== */

void FUN_00019dc8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00019d6c(param_2);
  FUN_0002e848(*(undefined4 *)(iVar1 + 0x30),param_1);
  return;
}



/* ===== FUN_00019de8 @ 00019de8 size=32 ===== */

void FUN_00019de8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00019d6c(param_2);
  FUN_0002e86c(*(undefined4 *)(iVar1 + 0x30),param_1);
  return;
}



/* ===== FUN_00019e08 @ 00019e08 size=32 ===== */

void FUN_00019e08(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00019d6c(param_2);
  FUN_0002e718(*(undefined4 *)(iVar1 + 0x30),param_1);
  return;
}



/* ===== FUN_00019e28 @ 00019e28 size=116 ===== */

void FUN_00019e28(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_000205d0(*(undefined4 *)(param_3 + 0x38));
  if (iVar1 == 0) {
    dbus_connection_close(param_2);
  }
  dbus_connection_set_max_received_size(param_2,*(undefined4 *)(param_3 + 0x4c));
  dbus_connection_set_max_message_size(param_2,*(undefined4 *)(param_3 + 0x5c));
  dbus_connection_set_max_received_unix_fds(param_2,*(undefined4 *)(param_3 + 0x50));
  dbus_connection_set_max_message_unix_fds(param_2,*(undefined4 *)(param_3 + 0x60));
  (*(code *)PTR_dbus_connection_set_allow_anonymous_00048c80)
            (param_2,(*(byte *)(param_3 + 0x94) & 0xf) >> 3);
  return;
}



/* ===== FUN_00019e90 @ 00019e90 size=708 ===== */

void FUN_00019e90(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_3c [4];
  int local_38;
  int local_2c;
  
  iVar7 = DAT_0001a154 + 0x19eb0;
  piVar5 = *(int **)(iVar7 + DAT_0001a158);
  local_2c = *piVar5;
  iVar1 = _dbus_string_init(auStack_3c);
  if (iVar1 == 0) {
    dbus_set_error_const(param_4,DAT_0001a160 + 0x19ef0,*(undefined4 *)(iVar7 + DAT_0001a15c));
    iVar1 = 0;
    goto LAB_00019ef8;
  }
  FUN_0001f920(param_2,param_1 + 0x4c);
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_00028b70();
  }
  uVar2 = FUN_0001f90c(param_2);
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  if (*(int *)(param_1 + 0x38) == 0) {
    iVar1 = 0;
LAB_00019f64:
    piVar3 = (int *)_dbus_list_get_last_link(param_1 + 0x34);
    iVar6 = DAT_0001a164 + 0x19f7c;
    for (; piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
      iVar8 = dbus_server_get_address(piVar3[2]);
      if (iVar8 == 0) {
        uVar2 = *(undefined4 *)(iVar7 + DAT_0001a15c);
        iVar7 = DAT_0001a168 + 0x19fa8;
        goto LAB_00019fac;
      }
      if ((0 < local_38) && (iVar4 = _dbus_string_append(auStack_3c,iVar6), iVar4 == 0)) {
        uVar2 = *(undefined4 *)(iVar7 + DAT_0001a15c);
        iVar7 = DAT_0001a16c + 0x1a004;
        goto LAB_00019fac;
      }
      iVar4 = _dbus_string_append(auStack_3c,iVar8);
      if (iVar4 == 0) {
        uVar2 = *(undefined4 *)(iVar7 + DAT_0001a15c);
        iVar7 = DAT_0001a170 + 0x1a034;
        goto LAB_00019fac;
      }
      dbus_free(iVar8);
      if ((int *)*(int *)(param_1 + 0x34) == piVar3) break;
    }
    if (param_3 != 0) {
      dbus_free(*(undefined4 *)(param_1 + 0x20));
    }
    iVar6 = _dbus_string_copy_data(auStack_3c,param_1 + 0x20);
    if (iVar6 != 0) {
      uVar2 = FUN_0001f8bc(param_2);
      iVar6 = FUN_0001f904(param_2);
      iVar8 = _dbus_strdup();
      if (iVar8 == 0 && iVar6 != 0) {
        dbus_set_error_const(param_4,DAT_0001a178 + 0x1a0ec,*(undefined4 *)(iVar7 + DAT_0001a15c));
      }
      else {
        dbus_free(*(undefined4 *)(param_1 + 0x1c));
        *(int *)(param_1 + 0x1c) = iVar8;
        if (*(int *)(param_1 + 0x3c) == 0) {
          uVar2 = FUN_000187d8(param_1,auStack_3c,uVar2,param_4);
          *(undefined4 *)(param_1 + 0x3c) = uVar2;
        }
        else {
          iVar7 = FUN_000184fc();
          iVar8 = 0;
          if (iVar7 == 0) goto LAB_00019fb4;
        }
        if (*(int *)(param_1 + 0x3c) == 0) {
          iVar8 = 0;
          goto LAB_00019fb4;
        }
        iVar1 = 1;
      }
      goto LAB_00019f58;
    }
    uVar2 = *(undefined4 *)(iVar7 + DAT_0001a15c);
    iVar7 = DAT_0001a174 + 0x1a08c;
    iVar8 = 0;
LAB_00019fac:
    dbus_set_error_const(param_4,iVar7,uVar2);
  }
  else {
    iVar1 = FUN_000214b0(*(int *)(param_1 + 0x38),param_4);
    if (iVar1 != 0) goto LAB_00019f64;
LAB_00019f58:
    iVar8 = 0;
  }
LAB_00019fb4:
  _dbus_string_free(auStack_3c);
  if (iVar8 != 0) {
    dbus_free(iVar8);
  }
LAB_00019ef8:
  if (local_2c == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}



/* ===== FUN_0001a17c @ 0001a17c size=312 ===== */

undefined4 FUN_0001a17c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = DAT_0001a2b4 + 0x1a19c;
  puVar1 = (undefined4 *)dbus_malloc0(4);
  if ((puVar1 == (undefined4 *)0x0) ||
     (iVar2 = dbus_server_set_data
                        (param_2,*(undefined4 *)(DAT_0001a2c0 + 0x1a1f8),puVar1,
                         DAT_0001a2c4 + 0x1a1fc), iVar2 == 0)) {
    dbus_free(puVar1);
    uVar3 = *(undefined4 *)(iVar4 + DAT_0001a2b8);
    iVar4 = DAT_0001a2bc + 0x1a1c8;
  }
  else {
    *puVar1 = param_1;
    iVar2 = dbus_server_set_auth_mechanisms(param_2,param_3);
    if (iVar2 != 0) {
      dbus_server_set_new_connection_function(param_2,DAT_0001a2cc + 0x1a254,param_1,0);
      iVar2 = dbus_server_set_watch_functions
                        (param_2,DAT_0001a2d8 + 0x1a27c,DAT_0001a2d4 + 0x1a278,
                         DAT_0001a2d0 + 0x1a274,param_2,0);
      if ((iVar2 != 0) &&
         (iVar2 = dbus_server_set_timeout_functions
                            (param_2,DAT_0001a2e0 + 0x1a2a4,DAT_0001a2dc + 0x1a2a0,0,param_2,0),
         iVar2 != 0)) {
        return 1;
      }
    }
    uVar3 = *(undefined4 *)(iVar4 + DAT_0001a2b8);
    iVar4 = DAT_0001a2c8 + 0x1a234;
  }
  dbus_set_error_const(param_4,iVar4,uVar3);
  return 0;
}



/* ===== FUN_0001a2e4 @ 0001a2e4 size=208 ===== */

void FUN_0001a2e4(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_28;
  int local_24;
  
  iVar3 = DAT_0001a3b4 + 0x1a304;
  piVar4 = *(int **)(iVar3 + DAT_0001a3b8);
  local_24 = *piVar4;
  local_28 = 0;
  uVar1 = FUN_0001f93c(param_2);
  iVar2 = FUN_00029e50(*(undefined4 *)(param_1 + 0x40),uVar1);
  if (iVar2 != 0) {
    _dbus_hash_table_unref(uVar1);
    iVar2 = FUN_0001f950(param_2,&local_28);
    if (iVar2 != 0) {
      FUN_00023964(param_1,&local_28);
      _dbus_list_clear(&local_28);
      uVar1 = 1;
      goto LAB_0001a35c;
    }
  }
  dbus_set_error_const(param_3,DAT_0001a3c0 + 0x1a350,*(undefined4 *)(iVar3 + DAT_0001a3bc));
  uVar1 = 0;
LAB_0001a35c:
  if (local_24 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}



/* ===== FUN_0001a3c4 @ 0001a3c4 size=20 ===== */

void FUN_0001a3c4(int param_1)

{
  (*(code *)PTR__dbus_uuid_encode_00048b5c)(param_1 + 4);
  return;
}



/* ===== FUN_0001a3cc @ 0001a3cc size=140 ===== */

void FUN_0001a3cc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = _dbus_list_get_first_link(param_1 + 0x34);
  do {
    if (iVar1 == 0) {
      return;
    }
    iVar3 = *(int *)(iVar1 + 8);
    if ((iVar3 != 0) && (iVar2 = dbus_server_get_is_connected(iVar3), iVar2 != 0)) {
      dbus_server_set_watch_functions(iVar3,0,0,0,param_1,0,param_3);
      dbus_server_set_timeout_functions(iVar3,0,0,0,param_1,0);
      dbus_server_disconnect(iVar3);
    }
    iVar1 = *(int *)(iVar1 + 4);
  } while (iVar1 != *(int *)(param_1 + 0x34));
  return;
}



/* ===== FUN_0001a468 @ 0001a468 size=416 ===== */

void FUN_0001a468(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_2c [16];
  int local_1c;
  
  iVar1 = *param_1;
  piVar2 = *(int **)(DAT_0001a608 + 0x1a478 + DAT_0001a60c);
  local_1c = *piVar2;
  *param_1 = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    FUN_0001a3cc();
    if (param_1[0xe] != 0) {
      FUN_00021f30();
      param_1[0xe] = 0;
    }
    if (param_1[0x10] != 0) {
      FUN_00029bcc();
      param_1[0x10] = 0;
    }
    if (param_1[0xf] != 0) {
      FUN_00018754();
      param_1[0xf] = 0;
    }
    iVar1 = _dbus_list_get_first_link(param_1 + 0xd);
    do {
      if (iVar1 == 0) break;
      dbus_server_unref(*(undefined4 *)(iVar1 + 8));
      iVar1 = *(int *)(iVar1 + 4);
    } while (iVar1 != param_1[0xd]);
    _dbus_list_clear(param_1 + 0xd);
    if (param_1[0x11] != 0) {
      FUN_00028b70();
      param_1[0x11] = 0;
    }
    if (param_1[0xc] != 0) {
      FUN_0002e6b8();
      param_1[0xc] = 0;
    }
    if (param_1[0x12] != 0) {
      FUN_0002cd10();
      param_1[0x12] = 0;
    }
    dbus_free(param_1[5]);
    dbus_free(param_1[0xb]);
    dbus_free(param_1[6]);
    dbus_free(param_1[8]);
    dbus_free(param_1[10]);
    dbus_free(param_1[7]);
    if (param_1[9] != 0) {
      _dbus_string_init_const(auStack_2c);
      _dbus_delete_file(auStack_2c,0);
      dbus_free(param_1[9]);
    }
    if (param_1[0x24] != 0) {
      dbus_free();
    }
    dbus_free(param_1);
    dbus_server_free_data_slot(DAT_0001a610 + 0x1a5dc);
  }
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_0001a614 @ 0001a614 size=8 ===== */

undefined4 FUN_0001a614(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* ===== FUN_0001a624 @ 0001a624 size=8 ===== */

undefined4 FUN_0001a624(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



/* ===== FUN_0001a62c @ 0001a62c size=12 ===== */

uint FUN_0001a62c(int param_1)

{
  return (*(byte *)(param_1 + 0x94) & 0x1f) >> 4;
}



/* ===== FUN_0001a638 @ 0001a638 size=8 ===== */

undefined4 FUN_0001a638(int param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



/* ===== FUN_0001a640 @ 0001a640 size=8 ===== */

undefined4 FUN_0001a640(int param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



/* ===== FUN_0001a648 @ 0001a648 size=8 ===== */

undefined4 FUN_0001a648(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



/* ===== FUN_0001a650 @ 0001a650 size=8 ===== */

undefined4 FUN_0001a650(int param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



/* ===== FUN_0001a658 @ 0001a658 size=8 ===== */

undefined4 FUN_0001a658(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



/* ===== FUN_0001a678 @ 0001a678 size=472 ===== */

void FUN_0001a678(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar1 = *(int *)(param_1 + 0x44);
  iVar5 = DAT_000292cc + 0x2911c;
  piVar6 = *(int **)(iVar5 + DAT_000292d0);
  local_2c = *piVar6;
  iVar2 = FUN_00028f0c();
  if ((iVar2 == 0) || (iVar3 = FUN_000290a4(iVar1 + 4,iVar2), iVar3 == 0)) goto LAB_000291b8;
  iVar3 = _dbus_hash_table_get_n_entries(*(undefined4 *)(iVar1 + 0x10));
  if (iVar3 < 1) {
LAB_000291fc:
    iVar3 = dbus_connection_get_unix_user(param_2,&local_30);
    if (iVar3 == 0) {
LAB_00029210:
      iVar1 = FUN_000290a4(iVar1 + 8,iVar2);
      if (iVar1 != 0) {
        FUN_00028f80(iVar2);
        goto LAB_0002922c;
      }
    }
    else {
      iVar3 = _dbus_hash_table_get_n_entries(*(undefined4 *)(iVar1 + 0xc));
      if (((iVar3 < 1) ||
          (iVar3 = _dbus_hash_table_lookup_uintptr(*(undefined4 *)(iVar1 + 0xc),local_30),
          iVar3 == 0)) || (iVar3 = FUN_000290a4(iVar3,iVar2), iVar3 != 0)) {
        iVar3 = thunk_FUN_00031154(local_30,param_3);
        if (iVar3 == 0) {
          iVar3 = dbus_error_is_set(param_3);
          if (iVar3 == 1) goto LAB_0002917c;
          iVar3 = iVar1 + 0x18;
        }
        else {
          iVar3 = iVar1 + 0x14;
        }
        iVar3 = FUN_000290a4(iVar3,iVar2);
        if (iVar3 != 0) goto LAB_00029210;
      }
    }
LAB_000291b8:
    dbus_set_error_const(param_3,DAT_000292d8 + 0x291d0,*(undefined4 *)(iVar5 + DAT_000292d4));
    if (iVar2 == 0) goto LAB_0002922c;
  }
  else {
    iVar3 = FUN_000209b4(param_2,&local_34,&local_30,param_3);
    if (iVar3 != 0) {
      for (iVar3 = 0; iVar3 < local_30; iVar3 = iVar3 + 1) {
        iVar4 = _dbus_hash_table_lookup_uintptr
                          (*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(local_34 + iVar3 * 4));
        if ((iVar4 != 0) && (iVar4 = FUN_000290a4(iVar4,iVar2), iVar4 == 0)) {
          dbus_free(local_34);
          goto LAB_000291b8;
        }
      }
      dbus_free();
      goto LAB_000291fc;
    }
  }
LAB_0002917c:
  FUN_00028f38(iVar2);
  iVar2 = 0;
LAB_0002922c:
  if (local_2c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}



/* ===== FUN_0001a680 @ 0001a680 size=8 ===== */

undefined4 FUN_0001a680(int param_1)

{
  return *(undefined4 *)(param_1 + 100);
}



/* ===== FUN_0001a688 @ 0001a688 size=8 ===== */

undefined4 FUN_0001a688(int param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}



/* ===== FUN_0001a690 @ 0001a690 size=8 ===== */

undefined4 FUN_0001a690(int param_1)

{
  return *(undefined4 *)(param_1 + 0x6c);
}



/* ===== FUN_0001a698 @ 0001a698 size=8 ===== */

undefined4 FUN_0001a698(int param_1)

{
  return *(undefined4 *)(param_1 + 0x70);
}



/* ===== FUN_0001a6a8 @ 0001a6a8 size=8 ===== */

undefined4 FUN_0001a6a8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x78);
}



/* ===== FUN_0001a6b0 @ 0001a6b0 size=8 ===== */

undefined4 FUN_0001a6b0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x7c);
}



/* ===== FUN_0001a6b8 @ 0001a6b8 size=8 ===== */

undefined4 FUN_0001a6b8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x80);
}



/* ===== FUN_0001a6c0 @ 0001a6c0 size=8 ===== */

undefined4 FUN_0001a6c0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x84);
}



/* ===== FUN_0001a6c8 @ 0001a6c8 size=8 ===== */

undefined4 FUN_0001a6c8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x88);
}



/* ===== FUN_0001a6d0 @ 0001a6d0 size=8 ===== */

undefined4 FUN_0001a6d0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x8c);
}



/* ===== FUN_0001a6d8 @ 0001a6d8 size=8 ===== */

undefined4 FUN_0001a6d8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x90);
}



/* ===== FUN_0001a6e0 @ 0001a6e0 size=12 ===== */

uint FUN_0001a6e0(int param_1)

{
  return (*(byte *)(param_1 + 0x94) & 3) >> 1;
}



/* ===== FUN_0001a6ec @ 0001a6ec size=212 ===== */

void FUN_0001a6ec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 local_34 [4];
  int local_24;
  undefined4 uStack_4;
  
  piVar2 = *(int **)(DAT_0001a7c0 + 0x1a700 + DAT_0001a7c4);
  local_24 = *piVar2;
  uStack_4 = param_4;
  if (*(int *)(param_1 + 0x2c) == 0) {
    _dbus_logv(param_2,param_3);
  }
  else {
    iVar1 = _dbus_string_init(local_34);
    if (iVar1 != 0) {
      iVar1 = _dbus_string_append(local_34,*(undefined4 *)(param_1 + 0x2c));
      if ((iVar1 != 0) &&
         (iVar1 = _dbus_string_append_printf_valist(local_34,param_3,&uStack_4), iVar1 != 0)) {
        _dbus_log(param_2,DAT_0001a7c8 + 0x1a784,local_34[0]);
      }
      _dbus_string_free(local_34);
    }
  }
  if (local_24 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_0001a7cc @ 0001a7cc size=2552 ===== */

void FUN_0001a7cc(undefined4 param_1,byte param_2,int param_3,int param_4,undefined4 *param_5,
                 int param_6)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  char *__s1;
  int iVar12;
  bool bVar13;
  undefined8 uVar14;
  int *local_84;
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined4 local_4c;
  int iStack_48;
  uint local_44;
  undefined4 uStack_40;
  int local_2c;
  
  iVar12 = DAT_0001b1c4 + 0x1a7f0;
  piVar9 = *(int **)(iVar12 + DAT_0001b1c8);
  local_2c = *piVar9;
  iVar2 = dbus_server_allocate_data_slot(DAT_0001b1cc + 0x1a810);
  if (iVar2 == 0) {
    dbus_set_error_const(param_6,DAT_0001b1d4 + 0x1a838,*(undefined4 *)(iVar12 + DAT_0001b1d0));
    puVar3 = (undefined4 *)0x0;
    goto LAB_0001a840;
  }
  puVar3 = (undefined4 *)dbus_malloc0(0x9c);
  if (puVar3 == (undefined4 *)0x0) {
    dbus_set_error_const(param_6,DAT_0001b1d8 + 0x1a884,*(undefined4 *)(iVar12 + DAT_0001b1d0));
  }
  else {
    *puVar3 = 1;
    iVar2 = _dbus_generate_uuid(puVar3 + 1,param_6);
    if (iVar2 != 0) {
      iVar2 = _dbus_string_copy_data(param_1,puVar3 + 5);
      if (iVar2 != 0) {
        iVar2 = FUN_0002e61c();
        puVar3[0xc] = iVar2;
        if (iVar2 != 0) {
          puVar3[0x26] = 1;
          iVar2 = FUN_00029c34(puVar3);
          puVar3[0x10] = iVar2;
          if (iVar2 != 0) {
            uVar14 = FUN_0001be34(param_1,1,0,param_6);
            uVar8 = (undefined4)((ulonglong)uVar14 >> 0x20);
            iVar2 = (int)uVar14;
            if (iVar2 == 0) goto LAB_0001a8fc;
            if ((param_2 & 0x20) == 0) {
              if ((param_2 & 0x40) == 0) {
                bVar1 = FUN_0001f8d8();
                *(byte *)(puVar3 + 0x25) = *(byte *)(puVar3 + 0x25) & 0xfd | (bVar1 & 1) << 1;
                if ((bVar1 & 1) != 0) goto LAB_0001a96c;
              }
              else {
                *(byte *)(puVar3 + 0x25) = *(byte *)(puVar3 + 0x25) & 0xfd;
              }
              uVar8 = 1;
            }
            else {
              bVar13 = (param_2 & 0x80) != 0;
              if (bVar13) {
                uVar8 = 2;
              }
              *(byte *)(puVar3 + 0x25) = *(byte *)(puVar3 + 0x25) | 2;
              if (!bVar13) {
LAB_0001a96c:
                uVar8 = 3;
              }
            }
            _dbus_init_system_log(DAT_0001b1e4 + 0x1a97c,uVar8);
            *(byte *)(puVar3 + 0x25) = *(byte *)(puVar3 + 0x25) & 0xef | param_2 & 0x10;
            if (((param_2 & 8) != 0) && (iVar10 = FUN_0001f8fc(iVar2), iVar10 != 0)) {
              _dbus_string_init_const(auStack_5c,iVar10);
              iVar11 = FUN_0003049c(auStack_5c,&local_4c,0);
              if (iVar11 == 0) goto LAB_0001a998;
              bVar13 = false;
              iVar11 = 0;
              dbus_set_error(param_6,DAT_0001b1ec + 0x1aa88,DAT_0001b1e8 + 0x1aa80,iVar10);
              goto LAB_0001aa8c;
            }
            iVar10 = 0;
LAB_0001a998:
            uVar8 = _dbus_strdup(iVar10);
            puVar3[9] = uVar8;
            FUN_0001f8a4(iVar2);
            uVar8 = _dbus_strdup();
            puVar3[6] = uVar8;
            iVar10 = FUN_0001f8a4(iVar2);
            if ((iVar10 == 0) || (puVar3[6] != 0)) {
              iVar10 = FUN_0001f89c(iVar2);
              if (iVar10 != 0) {
                iVar10 = _dbus_strdup();
                puVar3[10] = iVar10;
                if (iVar10 == 0) goto LAB_0001a9f4;
              }
              iVar10 = _dbus_string_init(auStack_6c);
              if (iVar10 == 0) goto LAB_0001a9f4;
              __s1 = (char *)puVar3[6];
              if (__s1 != (char *)0x0) {
                iVar10 = strcmp(__s1,(char *)(DAT_0001b1f0 + 0x1aad8));
                if (iVar10 == 0) {
                  iVar10 = _dbus_string_append(auStack_6c,DAT_0001b1f4 + 0x1aaf0);
                  if (iVar10 == 0) goto LAB_0001a9f4;
                  goto LAB_0001aaf8;
                }
                iVar10 = strcmp(__s1,(char *)(DAT_0001b1f8 + 0x1ac0c));
                if (iVar10 != 0) goto LAB_0001aaf8;
                iVar10 = _dbus_credentials_new_from_current_process();
                if (iVar10 == 0) goto LAB_0001a9f4;
                iVar11 = _dbus_string_append(auStack_6c,DAT_0001b1fc + 0x1ac30);
                if (((iVar11 != 0) &&
                    (iVar11 = _dbus_credentials_to_string_append(iVar10,auStack_6c), iVar11 != 0))
                   && (iVar11 = _dbus_string_append(auStack_6c,DAT_0001b204 + 0x1ac90), iVar11 != 0)
                   ) {
                  _dbus_credentials_unref(iVar10);
                  goto LAB_0001aaf8;
                }
                iVar11 = 0;
                _dbus_credentials_unref(iVar10);
                goto LAB_0001ac40;
              }
LAB_0001aaf8:
              iVar10 = _dbus_string_steal_data(auStack_6c,puVar3 + 0xb);
              if (iVar10 == 0) goto LAB_0001a9f4;
              _dbus_string_free(auStack_6c);
              piVar4 = (int *)FUN_0001f8b4(iVar2);
              iVar10 = _dbus_list_get_length();
              if (iVar10 < 1) {
                iVar11 = 0;
              }
              else {
                iVar11 = dbus_malloc0((iVar10 + 1) * 4);
                if (iVar11 == 0) goto LAB_0001a9f4;
                iVar10 = _dbus_list_get_first_link(piVar4);
                local_84 = (int *)(iVar11 + -4);
                while (iVar10 != 0) {
                  _dbus_string_init_const(auStack_5c,*(undefined4 *)(iVar10 + 8));
                  iVar5 = _dbus_auth_is_supported_mechanism(auStack_5c);
                  if (iVar5 == 0) {
                    iVar5 = _dbus_string_init(&local_4c);
                    if (iVar5 == 0) goto LAB_0001ac40;
                    iVar5 = _dbus_auth_dump_supported_mechanisms(&local_4c);
                    if (iVar5 == 0) {
                      _dbus_string_free(&local_4c);
                      goto LAB_0001ac40;
                    }
                    dbus_set_error(param_6,DAT_0001b208 + 0x1ad24,DAT_0001b20c + 0x1ad20,
                                   *(undefined4 *)(iVar10 + 8),local_4c);
                    _dbus_string_free(&local_4c);
                    bVar13 = false;
                    goto LAB_0001aa8c;
                  }
                  iVar5 = _dbus_strdup(*(undefined4 *)(iVar10 + 8));
                  local_84 = local_84 + 1;
                  *local_84 = iVar5;
                  if (iVar5 == 0) goto LAB_0001ac40;
                  iVar10 = *(int *)(iVar10 + 4);
                  if (iVar10 == *piVar4) {
                    iVar10 = 0;
                  }
                }
              }
              if (param_5 == (undefined4 *)0x0) {
                piVar4 = (int *)FUN_0001f8ac(iVar2);
                iVar10 = _dbus_list_get_first_link();
                do {
                  if (iVar10 == 0) break;
                  iVar5 = dbus_server_listen(*(undefined4 *)(iVar10 + 8),param_6);
                  if (iVar5 == 0) {
                    bVar13 = false;
                    goto LAB_0001aa8c;
                  }
                  iVar6 = FUN_0001a17c(puVar3,iVar5,iVar11,param_6);
                  bVar13 = false;
                  if (iVar6 == 0) goto LAB_0001aa8c;
                  iVar5 = _dbus_list_append(puVar3 + 0xd,iVar5);
                  if (iVar5 == 0) goto LAB_0001ac40;
                  iVar10 = *(int *)(iVar10 + 4);
                } while (iVar10 != *piVar4);
LAB_0001abb8:
                bVar13 = true;
                bVar1 = FUN_0001f8cc(iVar2);
                *(byte *)(puVar3 + 0x25) = *(byte *)(puVar3 + 0x25) & 0xfe | bVar1 & 1;
                bVar1 = FUN_0001f8e4(iVar2);
                *(byte *)(puVar3 + 0x25) = *(byte *)(puVar3 + 0x25) & 0xfb | (bVar1 & 1) << 2;
                bVar1 = FUN_0001f8f0(iVar2);
                *(byte *)(puVar3 + 0x25) = *(byte *)(puVar3 + 0x25) & 0xf7 | (bVar1 & 1) << 3;
              }
              else {
                iVar10 = dbus_server_listen(*param_5,param_6);
                if (iVar10 == 0) {
                  bVar13 = false;
                }
                else {
                  iVar5 = FUN_0001a17c(puVar3,iVar10,iVar11,param_6);
                  bVar13 = false;
                  if (iVar5 != 0) {
                    iVar10 = _dbus_list_append(puVar3 + 0xd,iVar10);
                    if (iVar10 == 0) goto LAB_0001ac40;
                    goto LAB_0001abb8;
                  }
                }
              }
LAB_0001aa8c:
              dbus_free_string_array(iVar11);
              if ((!bVar13) || (iVar10 = FUN_00019e90(puVar3,iVar2,0,param_6), iVar10 == 0))
              goto LAB_0001aa9c;
              dbus_server_allocate_data_slot(DAT_0001b210 + 0x1ae24);
              if ((param_3 == 0) || (iVar10 = _dbus_pipe_is_valid(param_3), iVar10 == 0)) {
LAB_0001af4c:
                iVar10 = FUN_00020340(puVar3);
                puVar3[0xe] = iVar10;
                if (iVar10 == 0) {
LAB_0001af60:
                  uVar8 = *(undefined4 *)(iVar12 + DAT_0001b1d0);
                  iVar12 = DAT_0001b228 + 0x1af74;
                  goto LAB_0001ae70;
                }
                iVar10 = FUN_0002cc4c();
                puVar3[0x12] = iVar10;
                if (iVar10 == 0) goto LAB_0001af60;
                if ((puVar3[10] == 0) || (iVar12 = FUN_0002ff50(), iVar12 != 0)) {
                  if (puVar3[9] != 0) {
                    _dbus_string_init_const(&local_4c);
                  }
                  if ((((param_2 & 4) == 0) && ((*(byte *)(puVar3 + 0x25) & 1) != 0)) ||
                     ((param_2 & 2) != 0)) {
                    puVar7 = (undefined4 *)0x0;
                    if (puVar3[9] != 0) {
                      puVar7 = &local_4c;
                    }
                    iVar12 = FUN_0002fdb0(puVar7,param_4,param_6,(*(byte *)(puVar3 + 0x25) & 7) >> 2
                                         );
                  }
                  else {
                    puVar7 = (undefined4 *)0x0;
                    if (puVar3[9] != 0) {
                      puVar7 = &local_4c;
                    }
                    uVar8 = _dbus_getpid();
                    iVar12 = FUN_0002facc(puVar7,param_4,uVar8,param_6);
                  }
                  if (iVar12 != 0) {
                    if (((param_4 != 0) && (iVar12 = _dbus_pipe_is_valid(param_4), iVar12 != 0)) &&
                       (iVar12 = _dbus_pipe_is_stdout_or_stderr(param_4), iVar12 == 0)) {
                      _dbus_pipe_close(param_4);
                    }
                    iStack_48 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                    uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                    local_4c = 0;
                    local_44 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8) | 1;
                    if (puVar3[0x24] == 0) {
                      iVar12 = FUN_00030128(&local_4c);
                      puVar3[0x24] = iVar12;
                      if (iVar12 == 0) {
                        iVar12 = DAT_0001b234 + 0x1b074;
                      }
                      else {
                        iVar12 = FUN_000301d4(&local_4c);
                        if (iVar12 != 0) goto LAB_0001b088;
                        iVar12 = DAT_0001b23c + 0x1b138;
                      }
                      FUN_0001a6ec(puVar3,1,iVar12,local_4c,iStack_48);
                      dbus_error_free(&local_4c);
                    }
LAB_0001b088:
                    if ((puVar3[10] == 0) ||
                       (iVar12 = FUN_0002ffb4(puVar3[10],param_6), iVar12 != 0)) {
                      FUN_00019d58(puVar3);
                      iVar12 = FUN_00029a0c();
                      if (iVar12 == 0) {
                        FUN_0001a6ec(puVar3,3,DAT_0001b238 + 0x1b0bc);
                    /* WARNING: Subroutine does not return */
                        exit(1);
                      }
                      iVar12 = FUN_00019d1c(param_6);
                      if (iVar12 != 0) {
                        iVar12 = FUN_00019d28();
                        if ((iVar12 != 0) && ((*(byte *)(puVar3 + 0x25) & 2) != 0)) {
                          FUN_0001a6ec(puVar3,0,DAT_0001b240 + 0x1b18c);
                        }
                        iVar12 = FUN_0001a2e4(puVar3,iVar2,param_6);
                        if (iVar12 != 0) {
                          FUN_0001d848(iVar2);
                          dbus_server_free_data_slot(DAT_0001b244 + 0x1b1b8);
                          goto LAB_0001a840;
                        }
                      }
                    }
                  }
                }
                else {
                  dbus_set_error(param_6,DAT_0001b230 + 0x1afc0,DAT_0001b22c + 0x1afbc,puVar3[10]);
                }
              }
              else {
                uVar8 = puVar3[8];
                iVar10 = _dbus_string_init(&local_4c);
                if (iVar10 == 0) {
                  uVar8 = *(undefined4 *)(iVar12 + DAT_0001b1d0);
                  iVar12 = DAT_0001b214 + 0x1ae6c;
                }
                else {
                  iVar10 = _dbus_string_append(&local_4c,uVar8);
                  if ((iVar10 != 0) &&
                     (iVar11 = _dbus_string_append(&local_4c,DAT_0001b21c + 0x1aec4),
                     iVar10 = iStack_48, iVar11 != 0)) {
                    iVar11 = _dbus_pipe_write(param_3,&local_4c,0,iStack_48,param_6);
                    if (iVar11 != iVar10) {
                      if ((param_6 != 0) && (iVar12 = dbus_error_is_set(param_6), iVar12 == 0)) {
                        dbus_set_error(param_6,DAT_0001b224 + 0x1af20,DAT_0001b220 + 0x1af1c);
                      }
                      _dbus_string_free(&local_4c);
                      goto LAB_0001aa9c;
                    }
                    iVar10 = _dbus_pipe_is_stdout_or_stderr(param_3);
                    if (iVar10 == 0) {
                      _dbus_pipe_close(param_3);
                    }
                    _dbus_string_free(&local_4c);
                    goto LAB_0001af4c;
                  }
                  _dbus_string_free(&local_4c);
                  uVar8 = *(undefined4 *)(iVar12 + DAT_0001b1d0);
                  iVar12 = DAT_0001b218 + 0x1aeac;
                }
LAB_0001ae70:
                dbus_set_error_const(param_6,iVar12,uVar8);
              }
            }
            else {
LAB_0001a9f4:
              iVar11 = 0;
LAB_0001ac40:
              dbus_set_error_const
                        (param_6,DAT_0001b200 + 0x1ac58,*(undefined4 *)(iVar12 + DAT_0001b1d0));
              dbus_free_string_array(iVar11);
            }
LAB_0001aa9c:
            FUN_0001d848(iVar2);
            goto LAB_0001a8fc;
          }
        }
      }
      dbus_set_error_const(param_6,DAT_0001b1e0 + 0x1a8f4,*(undefined4 *)(iVar12 + DAT_0001b1d0));
    }
LAB_0001a8fc:
    FUN_0001a468(puVar3);
  }
  if (-1 < *(int *)(DAT_0001b1dc + 0x1a898)) {
    dbus_server_free_data_slot();
  }
  puVar3 = (undefined4 *)0x0;
LAB_0001a840:
  if (local_2c != *piVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar3);
  }
  return;
}



/* ===== FUN_0001b248 @ 0001b248 size=248 ===== */

void FUN_0001b248(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 auStack_2c [16];
  int local_1c;
  
  piVar4 = *(int **)(DAT_0001b340 + 0x1b258 + DAT_0001b344);
  local_1c = *piVar4;
  _dbus_flush_caches();
  _dbus_string_init_const(auStack_2c,*(undefined4 *)(param_1 + 0x14));
  iVar1 = FUN_0001be34(auStack_2c,1,0,param_2);
  if (((iVar1 == 0) || (iVar2 = FUN_00019e90(param_1,iVar1,1,param_2), iVar2 == 0)) ||
     (iVar2 = FUN_0001a2e4(param_1,iVar1,param_2), iVar2 == 0)) {
    FUN_0001a6ec(param_1,0,DAT_0001b34c + 0x1b324,*(undefined4 *)(param_2 + 4));
    if (iVar1 == 0) {
      uVar3 = 0;
      goto LAB_0001b2f4;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    FUN_0001a6ec(param_1,0,DAT_0001b348 + 0x1b2ec);
  }
  FUN_0001d848(iVar1);
LAB_0001b2f4:
  if (local_1c == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== FUN_0001b350 @ 0001b350 size=40 ===== */

void FUN_0001b350(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == 0) {
    iVar1 = DAT_0001b378 + 0x1b36c;
  }
  _dbus_log(param_2,(int)&DAT_0001b378 + DAT_0001b37c,iVar1,param_3);
  return;
}



/* ===== FUN_0001b380 @ 0001b380 size=444 ===== */

void FUN_0001b380(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,int param_7,undefined4 param_8,uint param_9,
                 int param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  undefined4 local_3c;
  undefined4 uStack_38;
  uint local_34;
  undefined4 uStack_30;
  int local_2c;
  
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piVar9 = *(int **)(DAT_0001b53c + 0x1b3a4 + DAT_0001b540);
  local_2c = *piVar9;
  local_3c = 0;
  local_34 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8) | 1;
  if (param_10 == 0) {
    uVar10 = (param_9 ^ 1) & 1;
  }
  else {
    uVar10 = 0;
  }
  if (uVar10 == 0) {
    if (param_6 == 0) {
      iVar2 = DAT_0001b558 + 0x1b524;
      iVar1 = DAT_0001b55c + 0x1b528;
    }
    else {
      iVar1 = FUN_0002152c(param_6);
      iVar2 = FUN_00020ca0(param_6);
    }
    if (param_7 == 0) {
      iVar3 = DAT_0001b560 + 0x1b534;
    }
    else {
      iVar3 = FUN_00020ca0(param_7);
    }
    dbus_message_get_type(param_5);
    uVar4 = dbus_message_type_to_string();
    iVar5 = dbus_message_get_interface(param_5);
    if (iVar5 == 0) {
      iVar5 = DAT_0001b544 + 0x1b44c;
    }
    iVar6 = dbus_message_get_member(param_5);
    if (iVar6 == 0) {
      iVar6 = DAT_0001b548 + 0x1b460;
    }
    iVar7 = dbus_message_get_error_name(param_5);
    if (iVar7 == 0) {
      iVar7 = DAT_0001b54c + 0x1b474;
    }
    iVar8 = dbus_message_get_destination(param_5);
    if (iVar8 == 0) {
      iVar8 = DAT_0001b550 + 0x1b490;
    }
    dbus_set_error(&local_3c,param_2,DAT_0001b554 + 0x1b4d0,param_3,param_4,uVar4,iVar1,iVar2,iVar5,
                   iVar6,iVar7,param_8,iVar8,iVar3);
    if (param_9 != 0) {
      FUN_0001b350(param_1,2,uStack_38);
    }
    dbus_move_error(&local_3c,param_10);
  }
  if (local_2c == *piVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== FUN_0001b564 @ 0001b564 size=144 ===== */

void FUN_0001b564(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int *piVar1;
  undefined4 local_2c;
  undefined4 uStack_28;
  uint local_24;
  undefined4 uStack_20;
  int local_1c;
  
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piVar1 = *(int **)(DAT_0001b5f4 + 0x1b580 + DAT_0001b5f8);
  local_2c = 0;
  local_1c = *piVar1;
  local_24 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8) | 1;
  _dbus_set_error_valist(&local_2c,param_4,param_5,&stack0x00000004,&stack0x00000004);
  FUN_0001b350(param_1,2,uStack_28);
  dbus_move_error(&local_2c,param_3);
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_0001b5fc @ 0001b5fc size=1396 ===== */

void FUN_0001b5fc(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,int param_8)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uVar10;
  bool bVar11;
  bool bVar12;
  int local_6c;
  int local_68;
  int local_64;
  undefined4 local_40;
  int local_3c [4];
  int local_2c;
  
  piVar9 = *(int **)(DAT_0001bb74 + 0x1b62c + DAT_0001bb70);
  local_2c = *piVar9;
  iVar1 = dbus_message_get_type(param_6);
  local_64 = dbus_message_get_sender(param_6);
  local_68 = dbus_message_get_destination(param_6);
  if (iVar1 - 1U < 4) {
    if (param_3 == 0) {
      local_6c = 0;
      if (param_5 == param_4) {
        iVar2 = dbus_message_get_reply_serial(param_6);
        uVar3 = 0;
        if (iVar2 != 0) {
          uVar3 = 1;
        }
      }
      else {
        uVar3 = 0;
      }
LAB_0001b940:
      if ((param_5 == 0) || (iVar2 = FUN_00020c7c(param_5), iVar2 == 0)) {
        local_68 = 0;
      }
      else {
        local_68 = FUN_00020acc(param_5);
      }
      local_3c[0] = 0;
      if (local_6c != 0) {
        iVar2 = FUN_000292dc(local_6c,*(undefined4 *)(param_1 + 0x40),uVar3,param_5,param_6,
                             &local_40,local_3c);
        if (iVar2 == 0) {
          bVar12 = param_5 == param_4;
          iVar2 = DAT_0001bba4 + 0x1b9c8;
          iVar1 = DAT_0001bba8 + 0x1b9cc;
          goto LAB_0001b804;
        }
        if (local_3c[0] != 0) {
          FUN_0001b380(param_1,DAT_0001bbb0 + 0x1ba2c,DAT_0001bbac + 0x1ba28,local_40,param_6,
                       param_3,param_5,uVar3,1,0);
        }
      }
      if ((local_68 != 0) &&
         (iVar2 = FUN_000295f4(local_68,*(undefined4 *)(param_1 + 0x40),uVar3,param_3,param_4,
                               param_5,param_6,&local_40), iVar2 == 0)) {
        bVar12 = param_5 == param_4;
        iVar2 = DAT_0001bbb4 + 0x1ba98;
        iVar1 = DAT_0001bbb8 + 0x1ba9c;
LAB_0001b804:
        bVar11 = false;
        FUN_0001b380(param_1,iVar1,iVar2,local_40,param_6,param_3,param_5,uVar3,bVar12,param_8);
        goto LAB_0001b690;
      }
      if ((param_5 == 0) ||
         ((iVar2 = dbus_connection_get_outgoing_size(param_5), iVar2 <= *(int *)(param_1 + 0x54) &&
          (iVar2 = dbus_connection_get_outgoing_unix_fds(param_5), iVar2 <= *(int *)(param_1 + 0x58)
          )))) {
        if ((param_3 != 0 && iVar1 == 1) && (param_4 != 0 && param_5 == param_4)) {
          uVar3 = FUN_00020bb0(param_3);
          iVar1 = FUN_00022220(uVar3,param_2,param_3,param_4,param_6,param_8);
          bVar11 = iVar1 != 0;
          goto LAB_0001b690;
        }
LAB_0001b914:
        bVar11 = true;
        goto LAB_0001b690;
      }
      FUN_0001b380(param_1,DAT_0001bbc0 + 0x1baec,DAT_0001bbbc + 0x1bae8,0,param_6,param_3,param_5,
                   uVar3,1,param_8);
    }
    else {
      iVar2 = FUN_00020c7c(param_3);
      if (iVar2 == 0) {
        uVar3 = 0;
        local_6c = 0;
      }
      else {
        local_6c = FUN_00020acc(param_3);
        iVar2 = dbus_message_get_reply_serial(param_6);
        uVar3 = 0;
        if ((iVar2 != 0) && (uVar3 = 0, param_5 != 0 && param_5 == param_4)) {
          dbus_error_init(local_3c);
          uVar3 = FUN_00020bb0(param_3);
          uVar3 = FUN_00022490(uVar3,param_2,param_3,param_4,param_6,local_3c);
          iVar2 = dbus_error_is_set(local_3c);
          if (iVar2 != 0) {
            dbus_move_error(local_3c,param_8);
            goto LAB_0001b68c;
          }
        }
      }
      dbus_message_get_type(param_6);
      uVar4 = dbus_message_type_to_string();
      uVar5 = dbus_message_get_interface(param_6);
      uVar6 = dbus_message_get_member(param_6);
      uVar7 = dbus_message_get_error_name(param_6);
      if (local_68 == 0) {
        local_68 = DAT_0001bb80 + 0x1b794;
      }
      iVar2 = FUN_00029a1c(param_3,param_5,uVar4,uVar5,uVar6,uVar7,local_68,param_7,param_8);
      if (iVar2 == 0) {
        if ((param_8 != 0) && (iVar1 = dbus_error_is_set(param_8), iVar1 == 0)) {
          iVar2 = DAT_0001bb84 + 0x1b7f0;
          iVar1 = DAT_0001bb88 + 0x1b7f4;
          local_40 = 0;
          uVar3 = 0;
          bVar12 = false;
          goto LAB_0001b804;
        }
      }
      else {
        uVar10 = *(undefined4 *)(param_1 + 0x18);
        uVar4 = dbus_message_get_type(param_6);
        uVar5 = dbus_message_get_path(param_6);
        uVar6 = dbus_message_get_interface(param_6);
        uVar7 = dbus_message_get_member(param_6);
        uVar8 = dbus_message_get_error_name(param_6);
        if (local_64 == 0) {
          local_64 = DAT_0001bb8c + 0x1b86c;
        }
        iVar2 = FUN_00019d48(param_3,param_5,uVar3,uVar10,uVar4,uVar5,uVar6,uVar7,uVar8,local_68,
                             local_64,param_7,param_8);
        if (iVar2 != 0) {
          iVar2 = FUN_00020c7c(param_3);
          if (iVar2 != 0) goto LAB_0001b940;
          if ((param_5 != 0) ||
             (iVar1 = dbus_message_is_method_call
                                (param_6,DAT_0001bba0 + 0x1b90c,DAT_0001bb9c + 0x1b908), iVar1 == 0)
             ) {
            dbus_set_error(param_8,DAT_0001bb98 + 0x1b8f0,DAT_0001bb94 + 0x1b8ec,
                           DAT_0001bb90 + 0x1b8e8);
            bVar11 = false;
            goto LAB_0001b690;
          }
          goto LAB_0001b914;
        }
      }
    }
  }
  else {
    dbus_set_error(param_8,DAT_0001bb7c + 0x1b68c,DAT_0001bb78 + 0x1b688);
  }
LAB_0001b68c:
  bVar11 = false;
LAB_0001b690:
  if (local_2c == *piVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar11);
}



/* ===== FUN_0001bbc4 @ 0001bbc4 size=100 ===== */

void FUN_0001bbc4(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_000225d4(*(undefined4 *)(param_1 + 0x38));
  uVar2 = (uint)(iVar1 < *(int *)(param_1 + 0x74));
  if (*(uint *)(param_1 + 0x98) == uVar2) {
    return;
  }
  *(uint *)(param_1 + 0x98) = uVar2;
  iVar1 = _dbus_list_get_first_link(param_1 + 0x34);
  do {
    if (iVar1 == 0) {
      return;
    }
    _dbus_server_toggle_all_watches(*(undefined4 *)(iVar1 + 8),uVar2);
    iVar1 = *(int *)(iVar1 + 4);
  } while (iVar1 != *(int *)(param_1 + 0x34));
  return;
}



/* ===== FUN_0001bc6c @ 0001bc6c size=68 ===== */

undefined4 FUN_0001bc6c(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0001f010(*param_1,param_1 + 2,param_1[6]);
  if (iVar1 == 0) {
    param_1[7] = 1;
    return 0;
  }
  _dbus_string_set_length(param_1 + 2,0);
  return 1;
}



/* ===== FUN_0001be34 @ 0001be34 size=780 ===== */

void FUN_0001be34(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 auStack_6c [16];
  undefined4 local_5c;
  undefined4 local_58;
  int local_4c [2];
  undefined1 auStack_44 [16];
  int local_34;
  int local_30;
  int local_2c;
  
  iVar8 = DAT_0001c140 + 0x1be54;
  piVar7 = *(int **)(iVar8 + DAT_0001c144);
  uVar10 = *param_1;
  local_2c = *piVar7;
  local_30 = 0;
  local_34 = param_4;
  iVar1 = _dbus_string_init(auStack_44);
  if (iVar1 == 0) {
    dbus_set_error(param_4,DAT_0001c148 + 0x1bea0,0);
  }
  else {
    iVar2 = _dbus_string_init(auStack_6c);
    iVar9 = DAT_0001c158;
    iVar1 = DAT_0001c150;
    if (iVar2 == 0) {
      dbus_set_error(param_4,DAT_0001c14c + 0x1bed4,0);
      _dbus_string_free(auStack_44);
    }
    else {
      puVar6 = (undefined4 *)(DAT_0001c150 + 0x1bef4);
      *puVar6 = *(undefined4 *)(iVar8 + DAT_0001c154);
      *(undefined4 *)(iVar1 + 0x1bef8) = *(undefined4 *)(iVar8 + DAT_0001c15c);
      *(undefined4 *)(iVar1 + 0x1befc) = *(undefined4 *)(iVar8 + DAT_0001c160);
      iVar1 = XML_ParserCreate_MM(iVar9 + 0x1bf08,puVar6,0);
      if (iVar1 == 0) {
LAB_0001bf24:
        dbus_set_error(param_4,DAT_0001c164 + 0x1bf3c,0);
        iVar9 = 0;
      }
      else {
        XML_SetHashSalt(iVar1,4);
        iVar8 = FUN_00030778(param_1,auStack_6c);
        if ((iVar8 == 0) || (iVar8 = FUN_0001d6b8(auStack_6c,param_2,param_3), iVar8 == 0))
        goto LAB_0001bf24;
        local_4c[0] = iVar8;
        XML_SetUserData(iVar1,local_4c);
        XML_SetElementHandler(iVar1,DAT_0001c16c + 0x1bfd0,DAT_0001c168 + 0x1bfcc);
        XML_SetCharacterDataHandler(iVar1,DAT_0001c170 + 0x1bfe0);
        iVar2 = _dbus_string_init(&local_5c);
        iVar9 = iVar8;
        if (iVar2 == 0) {
          dbus_set_error(param_4,DAT_0001c174 + 0x1c000);
        }
        else {
          iVar2 = _dbus_file_get_contents(&local_5c,param_1,param_4);
          if (iVar2 != 0) {
            iVar2 = XML_Parse(iVar1,local_5c,local_58,1);
            if (iVar2 != 0) {
              _dbus_string_free(&local_5c);
              if ((local_30 == 0) && (iVar2 = FUN_0001f810(iVar8,param_4), iVar2 != 0)) {
                _dbus_string_free(auStack_6c);
                _dbus_string_free(auStack_44);
                XML_ParserFree(iVar1);
                goto LAB_0001c11c;
              }
              goto LAB_0001bf3c;
            }
            if ((local_34 != 0) && (iVar8 = dbus_error_is_set(), iVar8 == 0)) {
              iVar8 = XML_GetErrorCode(iVar1);
              if (iVar8 == 1) {
                dbus_set_error(param_4,DAT_0001c178 + 0x1c084,0);
              }
              else {
                uVar3 = XML_GetCurrentLineNumber(iVar1);
                uVar4 = XML_GetCurrentColumnNumber(iVar1);
                uVar5 = XML_ErrorString(iVar8);
                dbus_set_error(param_4,DAT_0001c17c + 0x1c0d8,DAT_0001c180 + 0x1c0d4,uVar10,uVar3,
                               uVar4,uVar5);
              }
            }
          }
          _dbus_string_free(&local_5c);
        }
      }
LAB_0001bf3c:
      _dbus_string_free(auStack_6c);
      _dbus_string_free(auStack_44);
      if (iVar1 != 0) {
        XML_ParserFree(iVar1);
      }
      iVar8 = 0;
      if (iVar9 == 0) goto LAB_0001c11c;
      FUN_0001d848(iVar9);
    }
  }
  iVar8 = 0;
LAB_0001c11c:
  if (local_2c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar8);
  }
  return;
}



/* ===== FUN_0001c184 @ 0001c184 size=28 ===== */

void FUN_0001c184(int param_1)

{
  dbus_free(*(undefined4 *)(param_1 + 4));
  dbus_free(param_1);
  return;
}



/* ===== FUN_0001c1a0 @ 0001c1a0 size=24 ===== */

undefined4 FUN_0001c1a0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)_dbus_list_get_last(param_1 + 0x14);
  uVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = *puVar1;
  }
  return uVar2;
}



/* ===== FUN_0001c1b8 @ 0001c1b8 size=72 ===== */

undefined4 * FUN_0001c1b8(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)dbus_malloc0(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = _dbus_list_append(param_1 + 0x14,puVar1);
    if (iVar2 == 0) {
      dbus_free(puVar1);
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = param_2;
    }
  }
  return puVar1;
}



/* ===== FUN_0001c200 @ 0001c200 size=392 ===== */

void FUN_0001c200(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 param_5
                 ,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,undefined4 *param_9)

{
  int *piVar1;
  undefined4 **ppuVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  char *__s1;
  bool bVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  undefined4 *local_ec [48];
  int local_2c;
  
  piVar1 = *(int **)(DAT_0001c388 + 0x1c210 + DAT_0001c38c);
  local_2c = *piVar1;
  iVar9 = 1;
  *param_7 = 0;
  local_ec[0] = param_6;
  local_ec[1] = param_7;
  ppuVar2 = local_ec;
  puVar4 = (undefined4 *)&stack0x00000014;
  while (param_8 != (undefined4 *)0x0) {
    ppuVar2[2] = param_8;
    ppuVar2[3] = param_9;
    iVar9 = iVar9 + 1;
    *param_9 = 0;
    ppuVar2 = ppuVar2 + 2;
    param_9 = (undefined4 *)puVar4[1];
    param_8 = (undefined4 *)*puVar4;
    puVar4 = puVar4 + 2;
  }
  do {
    piVar8 = param_3;
    if (*piVar8 == 0) {
      uVar7 = 1;
      goto LAB_0001c318;
    }
    bVar6 = false;
    iVar5 = 0;
    ppuVar2 = local_ec;
    do {
      __s1 = (char *)*ppuVar2;
      iVar3 = strcmp(__s1,(char *)*piVar8);
      if (iVar3 == 0) {
        if (*ppuVar2[1] != 0) {
          dbus_set_error(param_5,DAT_0001c394 + 0x1c314,DAT_0001c390 + 0x1c310,__s1,param_2);
          uVar7 = 0;
          goto LAB_0001c318;
        }
        bVar6 = true;
        *ppuVar2[1] = *param_4;
      }
      iVar5 = iVar5 + 1;
      ppuVar2 = ppuVar2 + 2;
    } while (iVar9 != iVar5);
    param_4 = param_4 + 1;
    param_3 = piVar8 + 1;
  } while (bVar6);
  dbus_set_error(param_5,DAT_0001c398 + 0x1c378,DAT_0001c39c + 0x1c37c,*piVar8,param_2);
  uVar7 = 0;
LAB_0001c318:
  if (local_2c == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}



/* ===== FUN_0001c3a0 @ 0001c3a0 size=124 ===== */

void FUN_0001c3a0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  char *__s1;
  
  puVar4 = *(uint **)(param_2 + 8);
  iVar5 = *param_1;
  __s1 = (char *)puVar4[1];
  iVar2 = iVar5;
  do {
    if (iVar2 == 0) break;
    puVar3 = *(uint **)(iVar2 + 8);
    iVar1 = strcmp(__s1,(char *)puVar3[1]);
    if (iVar1 == 0) {
      *puVar3 = *puVar3 & *puVar4;
      FUN_0001c184(*(undefined4 *)(param_2 + 8));
      _dbus_list_free_link(param_2);
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
  } while (iVar5 != iVar2);
  _dbus_list_append_link(param_1,param_2);
  return;
}



/* ===== FUN_0001c41c @ 0001c41c size=60 ===== */

bool FUN_0001c41c(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 0) {
    dbus_set_error(param_3,DAT_0001c458 + 0x1c44c,DAT_0001c45c + 0x1c448,param_2,param_1,param_2,
                   param_3);
  }
  return param_2 == 0;
}



/* ===== FUN_0001c460 @ 0001c460 size=128 ===== */

bool FUN_0001c460(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00030478(param_2);
  if (iVar1 == 0) {
    iVar1 = _dbus_string_copy(param_1,0,param_3);
    if (iVar1 == 0) {
      return false;
    }
    iVar1 = _dbus_concat_dir_and_file(param_3,param_2);
  }
  else {
    iVar1 = _dbus_string_copy(param_2,0,param_3);
  }
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00030b28(param_3);
  return iVar1 != 0;
}



/* ===== FUN_0001c4e0 @ 0001c4e0 size=196 ===== */

void FUN_0001c4e0(undefined4 param_1,int param_2,uint param_3,uint *param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_34 [16];
  int local_24;
  
  piVar3 = *(int **)(DAT_0001c5a4 + 0x1c500 + DAT_0001c5a8);
  local_24 = *piVar3;
  *param_4 = param_3;
  if (param_2 != 0) {
    _dbus_string_init_const(auStack_34);
    iVar2 = _dbus_string_parse_int(auStack_34,0,param_4);
    if ((iVar2 == 0) || (0x2000000 < *param_4)) {
      uVar1 = 0;
      dbus_set_error(param_5,DAT_0001c5b0 + 0x1c594,DAT_0001c5ac + 0x1c590,param_2,param_1,0,
                     0x2000000);
      goto LAB_0001c51c;
    }
  }
  uVar1 = 1;
LAB_0001c51c:
  if (local_24 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}



/* ===== FUN_0001c5b4 @ 0001c5b4 size=3904 ===== */

void FUN_0001c5b4(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  char *__s1;
  char *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  int *piVar9;
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
  char cVar33;
  char **ppcVar34;
  char **ppcVar35;
  char **ppcVar36;
  char **ppcVar37;
  char **ppcVar38;
  char **ppcVar39;
  char **ppcVar40;
  char **ppcVar41;
  char **ppcVar42;
  char **ppcVar43;
  char **ppcVar44;
  char **ppcVar45;
  char **ppcVar46;
  char **ppcVar47;
  int *piVar48;
  int *piVar49;
  char **ppcVar50;
  char **ppcVar51;
  char **ppcVar52;
  int *piVar53;
  char **ppcVar54;
  char **ppcVar55;
  char **ppcVar56;
  undefined4 uVar57;
  char *local_a4;
  char *local_a0;
  char *local_9c;
  char *local_98;
  char *local_94;
  char *local_90;
  char *local_8c;
  char *local_88;
  char *local_84;
  char *local_80;
  char *local_7c;
  char *local_78;
  char *local_74;
  char *local_70;
  char *local_6c;
  char *local_68;
  char *local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  char *local_50;
  int local_4c;
  char *local_48;
  char *local_44;
  undefined4 local_40;
  undefined1 auStack_3c [16];
  int local_2c;
  
  iVar8 = DAT_0001d4f4 + 0x1c5c8;
  piVar9 = *(int **)(iVar8 + DAT_0001d4f8);
  local_2c = *piVar9;
  local_5c = 0x2000000;
  local_54 = 0;
  uVar57 = 0;
  ppcVar56 = &local_a4;
  iVar10 = DAT_0001d4fc + 0x1c614;
  ppcVar55 = &local_44;
  iVar11 = DAT_0001d500 + 0x1c628;
  ppcVar54 = &local_48;
  iVar12 = DAT_0001d504 + 0x1c63c;
  piVar53 = &local_4c;
  iVar13 = DAT_0001d508 + 0x1c650;
  ppcVar52 = &local_50;
  iVar14 = DAT_0001d50c + 0x1c664;
  ppcVar51 = &local_68;
  iVar15 = DAT_0001d510 + 0x1c678;
  ppcVar50 = &local_88;
  iVar16 = DAT_0001d514 + 0x1c68c;
  piVar49 = &local_58;
  iVar17 = DAT_0001d518 + 0x1c6a0;
  piVar48 = &local_60;
  iVar18 = DAT_0001d51c + 0x1c6b4;
  ppcVar47 = &local_64;
  iVar19 = DAT_0001d520 + 0x1c6c8;
  ppcVar46 = &local_6c;
  iVar20 = DAT_0001d524 + 0x1c6dc;
  ppcVar45 = &local_70;
  iVar21 = DAT_0001d528 + 0x1c6f0;
  ppcVar44 = &local_74;
  iVar22 = DAT_0001d52c + 0x1c704;
  ppcVar43 = &local_78;
  iVar23 = DAT_0001d530 + 0x1c718;
  ppcVar42 = &local_7c;
  iVar24 = DAT_0001d534 + 0x1c72c;
  ppcVar41 = &local_80;
  iVar25 = DAT_0001d538 + 0x1c740;
  ppcVar40 = &local_84;
  iVar26 = DAT_0001d53c + 0x1c754;
  ppcVar39 = &local_8c;
  iVar27 = DAT_0001d540 + 0x1c768;
  ppcVar38 = &local_90;
  iVar28 = DAT_0001d544 + 0x1c77c;
  ppcVar37 = &local_94;
  iVar29 = DAT_0001d548 + 0x1c790;
  ppcVar36 = &local_98;
  iVar30 = DAT_0001d54c + 0x1c7a4;
  ppcVar35 = &local_9c;
  iVar31 = DAT_0001d550 + 0x1c7b8;
  ppcVar34 = &local_a0;
  iVar32 = DAT_0001d554 + 0x1c7cc;
  uVar5 = param_6;
  iVar2 = FUN_0001c200();
  if (iVar2 == 0) goto LAB_0001c7d8;
  if ((((((local_94 == (char *)0x0) && (local_84 == (char *)0x0)) && (local_90 == (char *)0x0)) &&
       ((local_8c == (char *)0x0 && (local_a0 == (char *)0x0)))) && (local_9c == (char *)0x0)) &&
     (local_98 == (char *)0x0)) {
    bVar6 = false;
    if (local_88 != (char *)0x0) {
      bVar6 = true;
    }
  }
  else {
    bVar6 = true;
  }
  if ((((local_74 == (char *)0x0) && (local_70 == (char *)0x0)) &&
      ((local_6c == (char *)0x0 &&
       (((local_80 == (char *)0x0 && (local_7c == (char *)0x0)) && (local_78 == (char *)0x0)))))) &&
     (local_68 == (char *)0x0)) {
    if (bVar6) {
      bVar1 = false;
    }
    else {
      bVar1 = false;
      if (local_64 != (char *)0x0) {
        bVar1 = true;
      }
    }
  }
  else {
    bVar1 = true;
  }
  if ((local_64 == (char *)0x0) && (local_60 == 0)) {
    if (local_58 != 0 || (bVar1 || bVar6)) {
      cVar3 = '\x01';
    }
    else {
      cVar3 = '\0';
    }
  }
  else {
    cVar3 = '\x01';
  }
  if (((!bVar1 && !bVar6) && (local_50 == (char *)0x0)) &&
     ((local_4c == 0 && ((local_48 == (char *)0x0 && (local_44 == (char *)0x0)))))) {
    iVar8 = DAT_0001d558 + 0x1c920;
    iVar2 = DAT_0001d55c + 0x1c924;
LAB_0001c920:
    uVar5 = 0;
    dbus_set_error(param_6,iVar2,iVar8,param_2);
    goto LAB_0001c928;
  }
  pcVar4 = param_2;
  if ((((local_9c == (char *)0x0) || (local_a0 != (char *)0x0)) || (local_90 != (char *)0x0)) &&
     (((local_7c == (char *)0x0 || (local_80 != (char *)0x0)) || (local_70 != (char *)0x0)))) {
    cVar33 = local_4c != 0;
    if (local_50 != (char *)0x0) {
      cVar33 = cVar33 + '\x01';
    }
    if (local_48 != (char *)0x0) {
      cVar33 = cVar33 + '\x01';
    }
    if (local_44 != (char *)0x0) {
      cVar33 = cVar33 + '\x01';
    }
    if (1 < (byte)(cVar33 + cVar3)) {
      iVar8 = DAT_0001d568 + 0x1ca20;
      iVar2 = DAT_0001d56c + 0x1ca24;
      goto LAB_0001c9b8;
    }
    if ((bool)(bVar6 & bVar1)) {
      iVar8 = DAT_0001d570 + 0x1ca40;
      iVar2 = DAT_0001d574 + 0x1ca44;
      goto LAB_0001c9b8;
    }
    if (((local_9c != (char *)0x0) || (local_a0 != (char *)0x0)) && (local_98 != (char *)0x0)) {
      iVar8 = DAT_0001d578 + 0x1ca78;
      iVar2 = DAT_0001d57c + 0x1ca7c;
      goto LAB_0001c9b8;
    }
    if (((local_7c != (char *)0x0) || (local_80 != (char *)0x0)) && (local_78 != (char *)0x0)) {
      iVar8 = DAT_0001d580 + 0x1cab0;
      iVar2 = DAT_0001d584 + 0x1cab4;
      goto LAB_0001c9b8;
    }
    if (bVar6) {
      if (((local_a0 != (char *)0x0) && (*local_a0 == '*')) && (local_a0[1] == '\0')) {
        local_a0 = (char *)0x0;
      }
      if (((local_9c != (char *)0x0) && (*local_9c == '*')) && (local_9c[1] == '\0')) {
        local_9c = (char *)0x0;
      }
      if (((local_98 != (char *)0x0) && (*local_98 == '*')) && (local_98[1] == '\0')) {
        local_98 = (char *)0x0;
      }
      if (((local_94 != (char *)0x0) && (*local_94 == '*')) && (local_94[1] == '\0')) {
        local_94 = (char *)0x0;
      }
      if (((local_90 != (char *)0x0) && (*local_90 == '*')) && (local_90[1] == '\0')) {
        local_90 = (char *)0x0;
      }
      if (((local_8c != (char *)0x0) && (*local_8c == '*')) && (local_8c[1] == '\0')) {
        local_8c = (char *)0x0;
      }
      iVar2 = 0;
      if ((local_8c != (char *)0x0) && (iVar2 = dbus_message_type_from_string(), iVar2 == 0)) {
        iVar8 = DAT_0001d588 + 0x1cbb8;
        iVar2 = DAT_0001d58c + 0x1cbbc;
        param_2 = local_8c;
        goto LAB_0001c920;
      }
      pcVar4 = local_64;
      if (((local_64 == (char *)0x0) ||
          (iVar10 = strcmp(local_64,(char *)(DAT_0001d590 + 0x1cbd8)), iVar10 == 0)) ||
         (iVar10 = strcmp(pcVar4,(char *)(DAT_0001d594 + 0x1cbf0)), iVar10 == 0)) {
        __s1 = local_84;
        if (((local_84 == (char *)0x0) ||
            (iVar10 = strcmp(local_84,(char *)(DAT_0001d5a4 + 0x1cc3c)), iVar10 == 0)) ||
           (iVar10 = strcmp(__s1,(char *)(DAT_0001d5a8 + 0x1cc54)), iVar10 == 0)) {
          pcVar4 = local_94;
          if ((local_94 != (char *)0x0 && __s1 != (char *)0x0) &&
             (iVar10 = strcmp(__s1,(char *)(DAT_0001d5b8 + 0x1cca0)), iVar10 == 0)) {
            iVar8 = DAT_0001d5bc + 0x1ccbc;
            iVar2 = DAT_0001d5c0 + 0x1ccc0;
            goto LAB_0001c9b8;
          }
          pcVar4 = local_88;
          if (((local_88 == (char *)0x0) ||
              (iVar10 = strcmp(local_88,(char *)(DAT_0001d5c4 + 0x1ccdc)), iVar10 == 0)) ||
             (iVar10 = strcmp(pcVar4,(char *)(DAT_0001d5c8 + 0x1ccf4)), iVar10 == 0)) {
            iVar10 = FUN_0001c4e0(DAT_0001d5d8 + 0x1cd38,local_60,0x2000000,&local_5c,param_6);
            if ((iVar10 == 0) ||
               (iVar10 = FUN_0001c4e0(DAT_0001d5dc + 0x1cd5c,local_58,0,&local_54,param_6),
               iVar10 == 0)) goto LAB_0001c7d8;
            iVar10 = FUN_00028a54(0,param_5);
            if (iVar10 != 0) {
              if (local_64 != (char *)0x0) {
                iVar11 = strcmp(local_64,(char *)(DAT_0001d5e0 + 0x1cd90));
                *(byte *)(iVar10 + 0x2c) = *(byte *)(iVar10 + 0x2c) & 0xfe | iVar11 == 0;
              }
              if (local_a4 != (char *)0x0) {
                iVar11 = strcmp(local_a4,(char *)(DAT_0001d5e4 + 0x1cdbc));
                *(byte *)(iVar10 + 0x2c) = *(byte *)(iVar10 + 0x2c) & 0xfb | (iVar11 == 0) << 2;
              }
              if (local_88 != (char *)0x0) {
                iVar11 = strcmp(local_88,(char *)(DAT_0001d5e8 + 0x1cde8));
                *(byte *)(iVar10 + 0x2c) = *(byte *)(iVar10 + 0x2c) & 0xfd | (iVar11 == 0) << 1;
              }
              bVar7 = *(byte *)(iVar10 + 0x2c);
              if (local_84 == (char *)0x0) {
                bVar7 = bVar7 & 0xe7;
              }
              else {
                iVar11 = strcmp(local_84,(char *)(DAT_0001d5ec + 0x1ce1c));
                if (iVar11 == 0) {
                  cVar3 = '\x02';
                }
                else {
                  cVar3 = '\x01';
                }
                bVar7 = bVar7 & 0xe7 | cVar3 << 3;
              }
              *(byte *)(iVar10 + 0x2c) = bVar7;
              *(int *)(iVar10 + 0xc) = iVar2;
              uVar5 = _dbus_strdup(local_90);
              *(undefined4 *)(iVar10 + 0x10) = uVar5;
              uVar5 = _dbus_strdup(local_a0);
              *(undefined4 *)(iVar10 + 0x14) = uVar5;
              uVar5 = _dbus_strdup(local_9c);
              *(undefined4 *)(iVar10 + 0x18) = uVar5;
              uVar5 = _dbus_strdup(local_98);
              *(undefined4 *)(iVar10 + 0x1c) = uVar5;
              iVar2 = _dbus_strdup(local_94);
              *(int *)(iVar10 + 0x20) = iVar2;
              *(undefined4 *)(iVar10 + 0x24) = local_5c;
              *(undefined4 *)(iVar10 + 0x28) = local_54;
              if (((((local_90 != (char *)0x0) && (*(int *)(iVar10 + 0x10) == 0)) ||
                   ((local_a0 != (char *)0x0 && (*(int *)(iVar10 + 0x14) == 0)))) ||
                  ((local_9c != (char *)0x0 && (*(int *)(iVar10 + 0x18) == 0)))) ||
                 ((local_98 != (char *)0x0 && (*(int *)(iVar10 + 0x1c) == 0)))) goto LAB_0001cefc;
              bVar6 = iVar2 == 0;
              pcVar4 = local_94;
              goto LAB_0001ceec;
            }
            goto LAB_0001d3c0;
          }
          __s1 = (char *)(DAT_0001d5cc + 0x1cd14);
          iVar8 = DAT_0001d5d0 + 0x1cd18;
          iVar2 = DAT_0001d5d4 + 0x1cd1c;
        }
        else {
          pcVar4 = (char *)(DAT_0001d5ac + 0x1cc70);
          iVar8 = DAT_0001d5b0 + 0x1cc7c;
          iVar2 = DAT_0001d5b4 + 0x1cc80;
        }
      }
      else {
        __s1 = (char *)(DAT_0001d598 + 0x1cc0c);
        iVar8 = DAT_0001d59c + 0x1cc10;
        iVar2 = DAT_0001d5a0 + 0x1cc14;
      }
      goto LAB_0001cc14;
    }
    if (bVar1) {
      if (((local_80 != (char *)0x0) && (*local_80 == '*')) && (local_80[1] == '\0')) {
        local_80 = (char *)0x0;
      }
      if (((local_7c != (char *)0x0) && (*local_7c == '*')) && (local_7c[1] == '\0')) {
        local_7c = (char *)0x0;
      }
      if (((local_78 != (char *)0x0) && (*local_78 == '*')) && (local_78[1] == '\0')) {
        local_78 = (char *)0x0;
      }
      if (((local_74 != (char *)0x0) && (*local_74 == '*')) && (local_74[1] == '\0')) {
        local_74 = (char *)0x0;
      }
      if (((local_70 != (char *)0x0) && (*local_70 == '*')) && (local_70[1] == '\0')) {
        local_70 = (char *)0x0;
      }
      if (((local_6c != (char *)0x0) && (*local_6c == '*')) && (local_6c[1] == '\0')) {
        local_6c = (char *)0x0;
      }
      iVar2 = 0;
      if ((local_6c != (char *)0x0) && (iVar2 = dbus_message_type_from_string(), iVar2 == 0)) {
        iVar8 = DAT_0001d5f8 + 0x1d030;
        iVar2 = DAT_0001d5fc + 0x1d034;
        pcVar4 = local_6c;
        goto LAB_0001c9b8;
      }
      pcVar4 = local_64;
      if (((local_64 == (char *)0x0) ||
          (iVar10 = strcmp(local_64,(char *)(DAT_0001d600 + 0x1d050)), iVar10 == 0)) ||
         (iVar10 = strcmp(pcVar4,(char *)(DAT_0001d604 + 0x1d068)), iVar10 == 0)) {
        pcVar4 = local_68;
        if (((local_68 != (char *)0x0) &&
            (iVar10 = strcmp(local_68,(char *)(DAT_0001d614 + 0x1d0ac)), iVar10 != 0)) &&
           (iVar10 = strcmp(pcVar4,(char *)(DAT_0001d618 + 0x1d0c4)), iVar10 != 0)) {
          __s1 = (char *)(DAT_0001d61c + 0x1d0e4);
          iVar8 = DAT_0001d620 + 0x1d0e8;
          iVar2 = DAT_0001d624 + 0x1d0ec;
          goto LAB_0001cc14;
        }
        iVar10 = FUN_0001c4e0(DAT_0001d628 + 0x1d108,local_60,0x2000000,&local_5c,param_6);
        if ((iVar10 != 0) &&
           (iVar10 = FUN_0001c4e0(DAT_0001d62c + 0x1d12c,local_58,0,&local_54,param_6), iVar10 != 0)
           ) {
          iVar10 = FUN_00028a54(1,param_5);
          if (iVar10 != 0) {
            if (local_64 != (char *)0x0) {
              iVar11 = strcmp(local_64,(char *)(DAT_0001d630 + 0x1d160));
              *(byte *)(iVar10 + 0x2c) = *(byte *)(iVar10 + 0x2c) & 0xfe | iVar11 == 0;
            }
            if (local_68 != (char *)0x0) {
              iVar11 = strcmp(local_68,(char *)(DAT_0001d634 + 0x1d18c));
              *(byte *)(iVar10 + 0x2c) = *(byte *)(iVar10 + 0x2c) & 0xfd | (iVar11 == 0) << 1;
            }
            *(int *)(iVar10 + 0xc) = iVar2;
            uVar5 = _dbus_strdup(local_70);
            *(undefined4 *)(iVar10 + 0x10) = uVar5;
            uVar5 = _dbus_strdup(local_80);
            *(undefined4 *)(iVar10 + 0x14) = uVar5;
            uVar5 = _dbus_strdup(local_7c);
            *(undefined4 *)(iVar10 + 0x18) = uVar5;
            uVar5 = _dbus_strdup(local_78);
            *(undefined4 *)(iVar10 + 0x1c) = uVar5;
            iVar2 = _dbus_strdup(local_74);
            *(int *)(iVar10 + 0x20) = iVar2;
            *(undefined4 *)(iVar10 + 0x24) = local_5c;
            *(undefined4 *)(iVar10 + 0x28) = local_54;
            if (((((local_70 != (char *)0x0) && (*(int *)(iVar10 + 0x10) == 0)) ||
                 ((local_80 != (char *)0x0 && (*(int *)(iVar10 + 0x14) == 0)))) ||
                ((local_7c != (char *)0x0 && (*(int *)(iVar10 + 0x18) == 0)))) ||
               ((local_78 != (char *)0x0 && (*(int *)(iVar10 + 0x1c) == 0)))) goto LAB_0001cefc;
            bVar6 = iVar2 == 0;
            pcVar4 = local_74;
            goto LAB_0001ceec;
          }
          goto LAB_0001d3c0;
        }
      }
      else {
        __s1 = (char *)(DAT_0001d608 + 0x1d088);
        iVar8 = DAT_0001d60c + 0x1d08c;
        iVar2 = DAT_0001d610 + 0x1d090;
LAB_0001cc14:
        dbus_set_error(param_6,iVar2,iVar8,__s1,pcVar4);
      }
      goto LAB_0001c7d8;
    }
    if (local_50 == (char *)0x0 && local_4c == 0) {
      if (local_48 == (char *)0x0) {
        if (local_44 != (char *)0x0) {
          cVar3 = *local_44;
          if ((cVar3 != '*') || (cVar3 = local_44[1], cVar3 != '\0')) {
            _dbus_string_init_const
                      (auStack_3c,local_44,cVar3,local_44,uVar5,iVar32,ppcVar34,iVar31,ppcVar35,
                       iVar30,ppcVar36,iVar29,ppcVar37,iVar28,ppcVar38,iVar27,ppcVar39,iVar26,
                       ppcVar40,iVar25,ppcVar41,iVar24,ppcVar42,iVar23,ppcVar43,iVar22,ppcVar44,
                       iVar21,ppcVar45,iVar20,ppcVar46,iVar19,ppcVar47,iVar18,piVar48,iVar17,piVar49
                       ,iVar16,ppcVar50,iVar15,ppcVar51,iVar14,ppcVar52,iVar13,piVar53,iVar12,
                       ppcVar54,iVar11,ppcVar55,iVar10,ppcVar56,uVar57);
            iVar2 = thunk_FUN_00031484(auStack_3c,&local_40);
            if (iVar2 == 0) {
              iVar2 = DAT_0001d63c + 0x1d420;
              local_48 = local_44;
              goto LAB_0001d37c;
            }
            uVar5 = 4;
            goto LAB_0001d3f4;
          }
          uVar5 = 4;
          goto LAB_0001d3b0;
        }
      }
      else {
        if ((*local_48 == '*') && (local_48[1] == '\0')) {
          uVar5 = 3;
LAB_0001d3b0:
          iVar10 = FUN_00028a54(uVar5,param_5);
          if (iVar10 == 0) goto LAB_0001d3c0;
          local_40 = 0xffffffff;
        }
        else {
          _dbus_string_init_const(auStack_3c);
          iVar2 = thunk_FUN_000312b4(auStack_3c,&local_40);
          if (iVar2 == 0) {
            iVar2 = DAT_0001d638 + 0x1d380;
LAB_0001d37c:
            _dbus_warn(iVar2,local_48,param_2);
            goto LAB_0001d380;
          }
          uVar5 = 3;
LAB_0001d3f4:
          iVar10 = FUN_00028a54(uVar5,param_5);
          if (iVar10 == 0) goto LAB_0001cefc;
        }
        *(undefined4 *)(iVar10 + 0xc) = local_40;
LAB_0001d2ec:
        iVar2 = _dbus_list_get_last(param_1 + 0x14);
        switch(*(undefined4 *)(iVar2 + 8)) {
        case 1:
          iVar2 = FUN_00028d6c(*(undefined4 *)(param_1 + 0x34),iVar10);
          break;
        case 2:
          iVar2 = FUN_00028d94(*(undefined4 *)(param_1 + 0x34),iVar10);
          break;
        case 3:
          if (1 < *(int *)(iVar10 + 4) - 3U) {
            iVar2 = FUN_00028dbc(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(iVar2 + 0xc),iVar10
                                );
            break;
          }
          iVar8 = DAT_0001d640 + 0x1d474;
          iVar2 = DAT_0001d644 + 0x1d478;
LAB_0001d474:
          dbus_set_error(param_6,iVar2,iVar8,param_2);
          goto LAB_0001d47c;
        case 4:
          if (*(int *)(iVar10 + 4) - 3U < 2) {
            iVar8 = DAT_0001d648 + 120000;
            iVar2 = DAT_0001d64c + 0x1d4c4;
            goto LAB_0001d474;
          }
          iVar2 = FUN_00028e00(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(iVar2 + 0xc),iVar10);
          break;
        case 5:
          iVar2 = FUN_00028e44(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(iVar2 + 0xc),iVar10);
          break;
        default:
          goto switchD_0001d300_default;
        }
        if (iVar2 == 0) goto LAB_0001cefc;
switchD_0001d300_default:
        FUN_00028ae0(iVar10);
      }
LAB_0001d380:
      uVar5 = 1;
      goto LAB_0001c928;
    }
    iVar10 = FUN_00028a54(2,param_5);
    if (iVar10 == 0) {
LAB_0001d3c0:
      iVar10 = 0;
    }
    else if (local_50 == (char *)0x0) {
      *(byte *)(iVar10 + 0x10) = *(byte *)(iVar10 + 0x10) | 1;
      iVar2 = _dbus_strdup(local_4c);
      *(int *)(iVar10 + 0xc) = iVar2;
      if (iVar2 != 0) goto LAB_0001d2ec;
    }
    else {
      if ((*local_50 == '*') && (local_50[1] == '\0')) {
        local_50 = (char *)0x0;
      }
      *(byte *)(iVar10 + 0x10) = *(byte *)(iVar10 + 0x10) & 0xfe;
      iVar2 = _dbus_strdup(local_50);
      *(int *)(iVar10 + 0xc) = iVar2;
      bVar6 = iVar2 == 0;
      pcVar4 = local_50;
LAB_0001ceec:
      if (pcVar4 == (char *)0x0) {
        bVar6 = false;
      }
      if (!bVar6) goto LAB_0001d2ec;
    }
LAB_0001cefc:
    dbus_set_error_const(param_6,DAT_0001d5f4 + 0x1cf18,*(undefined4 *)(iVar8 + DAT_0001d5f0));
    if (iVar10 != 0) {
LAB_0001d47c:
      FUN_00028ae0(iVar10);
    }
  }
  else {
    iVar8 = DAT_0001d560 + 0x1c9b8;
    iVar2 = DAT_0001d564 + 0x1c9bc;
LAB_0001c9b8:
    dbus_set_error(param_6,iVar2,iVar8,pcVar4);
  }
LAB_0001c7d8:
  uVar5 = 0;
LAB_0001c928:
  if (local_2c != *piVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}



/* ===== FUN_0001d650 @ 0001d650 size=104 ===== */

undefined4 FUN_0001d650(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  while( true ) {
    iVar1 = _dbus_list_pop_first_link(param_2);
    if (iVar1 == 0) {
      return 1;
    }
    uVar3 = *(undefined4 *)(iVar1 + 8);
    puVar2 = (undefined4 *)dbus_malloc0(8);
    if (puVar2 == (undefined4 *)0x0) break;
    *puVar2 = param_3;
    puVar2[1] = uVar3;
    *(undefined4 **)(iVar1 + 8) = puVar2;
    FUN_0001c3a0(param_1,iVar1);
  }
  _dbus_list_prepend_link(param_1,iVar1);
  return 0;
}



/* ===== FUN_0001d6b8 @ 0001d6b8 size=372 ===== */

undefined4 * FUN_0001d6b8(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  
  iVar6 = DAT_0001d82c + 0x1d6d8;
  uVar7 = param_1;
  iVar3 = param_2;
  iVar8 = param_3;
  puVar1 = (undefined4 *)dbus_malloc0(0x8c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar5 = puVar1 + 1;
    *(byte *)(puVar1 + 0x22) = *(byte *)(puVar1 + 0x22) & 0xf7 | (param_2 != 0) << 3;
    iVar2 = _dbus_string_init(puVar5);
    if (iVar2 != 0) {
      iVar2 = FUN_00028c40();
      puVar1[0xd] = iVar2;
      if ((iVar2 != 0) &&
         (iVar3 = _dbus_string_copy(param_1,0,puVar5,0,uVar7,iVar3,iVar8), iVar3 != 0)) {
        uVar4 = *(undefined4 *)(iVar6 + DAT_0001d830);
        iVar3 = _dbus_hash_table_new(0,uVar4,uVar4,uVar4,uVar7,uVar4);
        puVar1[0x21] = iVar3;
        uVar7 = DAT_0001d834;
        if (iVar3 != 0) {
          if (param_3 == 0) {
            puVar1[0xe] = 0x7f00000;
            puVar1[0x10] = 0x7f00000;
            puVar1[0x12] = 0x2000000;
            puVar1[0xf] = 0x40;
            puVar1[0x11] = 0x40;
            puVar1[0x18] = 0x40;
            puVar1[0x19] = 0x100;
            puVar1[0x13] = 0x10;
            puVar1[0x14] = 25000;
            puVar1[0x17] = 0x800;
            puVar1[0x15] = 30000;
            puVar1[0x16] = uVar7;
            puVar1[0x1a] = 0x200;
            puVar1[0x1b] = 0x200;
            puVar1[0x1c] = 0x200;
            puVar1[0x1d] = 0x80;
            puVar1[0x1e] = 0xffffffff;
          }
          else {
            memcpy(puVar1 + 0xe,(void *)(param_3 + 0x38),0x44);
            puVar1[0x20] = *(undefined4 *)(param_3 + 0x80);
          }
          *puVar1 = 1;
          return puVar1;
        }
      }
      if (puVar1[0xd] != 0) {
        FUN_00028b70();
      }
      _dbus_string_free(puVar5);
    }
    dbus_free(puVar1);
  }
  return (undefined4 *)0x0;
}



/* ===== FUN_0001d848 @ 0001d848 size=320 ===== */

void FUN_0001d848(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = *param_1;
  iVar4 = DAT_0001d988 + 0x1d860;
  *param_1 = iVar2 + -1;
  if (iVar2 + -1 != 0) {
    return;
  }
  while (param_1[5] != 0) {
    piVar1 = (int *)_dbus_list_pop_last(param_1 + 5);
    if (*piVar1 == 7) {
      dbus_free(piVar1[2]);
    }
    dbus_free(piVar1);
  }
  dbus_free(param_1[6]);
  dbus_free(param_1[7]);
  dbus_free(param_1[8]);
  dbus_free(param_1[0x1f]);
  uVar3 = *(undefined4 *)(iVar4 + DAT_0001d98c);
  _dbus_list_foreach(param_1 + 9,uVar3,0);
  _dbus_list_clear(param_1 + 9);
  _dbus_list_foreach(param_1 + 0xb,DAT_0001d990 + 0x1d90c,0);
  _dbus_list_clear(param_1 + 0xb);
  _dbus_list_foreach(param_1 + 0xc,uVar3,0);
  _dbus_list_clear(param_1 + 0xc);
  _dbus_list_foreach(param_1 + 10,uVar3,0);
  _dbus_list_clear(param_1 + 10);
  _dbus_string_free(param_1 + 1);
  if (param_1[0xd] != 0) {
    FUN_00028b70();
  }
  if (param_1[0x21] != 0) {
    _dbus_hash_table_unref();
  }
  dbus_free(param_1);
  return;
}



/* ===== FUN_0001d994 @ 0001d994 size=944 ===== */

void FUN_0001d994(int param_1,undefined4 *param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char *__s1;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [24];
  int local_2c;
  
  iVar9 = DAT_0001dd44 + 0x1d9b4;
  piVar6 = *(int **)(iVar9 + DAT_0001dd48);
  local_2c = *piVar6;
  dbus_error_init(auStack_54);
  iVar5 = *(int *)(param_1 + 0x80);
  __s1 = (char *)*param_2;
  iVar8 = iVar5;
  do {
    if (iVar8 == 0) break;
    iVar1 = strcmp(__s1,*(char **)(iVar8 + 8));
    if (iVar1 == 0) {
      dbus_set_error(param_4,DAT_0001dd60 + 0x1dd38,DAT_0001dd5c + 0x1dd34);
      uVar7 = 0;
      goto LAB_0001da50;
    }
    iVar8 = *(int *)(iVar8 + 4);
  } while (iVar5 != iVar8);
  iVar8 = _dbus_list_append(param_1 + 0x80,__s1);
  if (iVar8 == 0) {
    dbus_set_error_const(param_4,DAT_0001dd50 + 0x1da48,*(undefined4 *)(iVar9 + DAT_0001dd4c));
    uVar7 = 0;
  }
  else {
    iVar8 = FUN_0001be34(param_2,0,param_1,auStack_54);
    _dbus_list_pop_last(param_1 + 0x80);
    if (iVar8 == 0) {
      iVar8 = dbus_error_has_name(auStack_54,DAT_0001dd54 + 0x1daa4);
      if (iVar8 == 0) {
        param_3 = 0;
      }
      else {
        param_3 = param_3 & 1;
      }
      if (param_3 == 0) {
        dbus_move_error(auStack_54,param_4);
        uVar7 = 0;
      }
      else {
        dbus_error_free(auStack_54);
LAB_0001dac0:
        uVar7 = 1;
      }
    }
    else {
      iVar5 = FUN_00028e7c(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(iVar8 + 0x34));
      if (iVar5 != 0) {
        uVar7 = *(undefined4 *)(param_1 + 0x84);
        _dbus_hash_iter_init(*(undefined4 *)(iVar8 + 0x84),auStack_44);
        do {
          iVar5 = _dbus_hash_iter_next(auStack_44);
          if (iVar5 == 0) {
            if (*(int *)(iVar8 + 0x18) != 0) {
              dbus_free(*(undefined4 *)(param_1 + 0x18));
              *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar8 + 0x18);
              *(undefined4 *)(iVar8 + 0x18) = 0;
            }
            if (*(int *)(iVar8 + 0x20) != 0) {
              dbus_free(*(undefined4 *)(param_1 + 0x20));
              *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar8 + 0x20);
              *(undefined4 *)(iVar8 + 0x20) = 0;
            }
            if ((*(byte *)(iVar8 + 0x88) & 1) != 0) {
              *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 1;
            }
            if ((*(byte *)(iVar8 + 0x88) & 4) != 0) {
              *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 4;
            }
            if ((*(byte *)(iVar8 + 0x88) & 0x10) != 0) {
              *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 0x10;
            }
            if (*(int *)(iVar8 + 0x7c) != 0) {
              dbus_free(*(undefined4 *)(param_1 + 0x7c));
              *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(iVar8 + 0x7c);
              *(undefined4 *)(iVar8 + 0x7c) = 0;
            }
            if (*(int *)(iVar8 + 0x1c) != 0) {
              dbus_free(*(undefined4 *)(param_1 + 0x1c));
              *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar8 + 0x1c);
              *(undefined4 *)(iVar8 + 0x1c) = 0;
            }
            while (iVar5 = _dbus_list_pop_first_link(iVar8 + 0x24), iVar5 != 0) {
              _dbus_list_append_link(param_1 + 0x24);
            }
            while (iVar5 = _dbus_list_pop_first_link(iVar8 + 0x28), iVar5 != 0) {
              _dbus_list_append_link(param_1 + 0x28);
            }
            while (iVar5 = _dbus_list_pop_first_link(iVar8 + 0x2c), iVar5 != 0) {
              FUN_0001c3a0(param_1 + 0x2c);
            }
            while (iVar5 = _dbus_list_pop_first_link(iVar8 + 0x30), iVar5 != 0) {
              _dbus_list_append_link(param_1 + 0x30);
            }
            memcpy((void *)(param_1 + 0x38),(void *)(iVar8 + 0x38),0x44);
            FUN_0001d848(iVar8);
            goto LAB_0001dac0;
          }
          uVar2 = _dbus_hash_iter_get_string_key(auStack_44);
          uVar3 = _dbus_hash_iter_get_value(auStack_44);
          iVar5 = _dbus_strdup(uVar2);
          if (iVar5 == 0) goto LAB_0001daec;
          iVar1 = _dbus_strdup(uVar3);
        } while ((iVar1 != 0) &&
                (iVar4 = _dbus_hash_table_insert_string(uVar7,iVar5,iVar1), iVar4 != 0));
        dbus_free(iVar5);
        if (iVar1 != 0) {
          dbus_free(iVar1);
        }
      }
LAB_0001daec:
      dbus_set_error_const(param_4,DAT_0001dd58 + 0x1db04,*(undefined4 *)(iVar9 + DAT_0001dd4c));
      uVar7 = 0;
      FUN_0001d848(iVar8);
    }
  }
LAB_0001da50:
  if (local_2c == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}



/* ===== FUN_0001dd64 @ 0001dd64 size=80 ===== */

undefined4 FUN_0001dd64(undefined4 param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = strcmp(param_2,(char *)(DAT_0001ddb4 + 0x1dd80));
  if (iVar1 != 0) {
    dbus_set_error(param_3,DAT_0001ddbc + 0x1dda4,DAT_0001ddb8 + 0x1dda0,param_2);
    return 0;
  }
  return 1;
}



/* ===== FUN_0001ddc0 @ 0001ddc0 size=3396 ===== */

void FUN_0001ddc0(int param_1,char *param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  char *local_4c;
  char *local_48;
  char *local_44;
  char *local_40;
  char *local_3c;
  undefined4 uStack_38;
  uint local_34;
  undefined4 uStack_30;
  int local_2c;
  
  iVar7 = DAT_0001eb04 + 0x1dde0;
  piVar5 = *(int **)(iVar7 + DAT_0001eb08);
  local_2c = *piVar5;
  iVar1 = FUN_0001c1a0();
  if (iVar1 == 0) {
    pcVar8 = (char *)(DAT_0001eb0c + 0x1de14);
    iVar2 = strcmp(param_2,pcVar8);
    if (iVar2 != 0) {
      dbus_set_error(param_5,DAT_0001eb14 + 0x1de90,DAT_0001eb10 + 0x1de8c,param_2);
      goto LAB_0001de3c;
    }
    iVar1 = FUN_0001c41c(pcVar8,*param_3,param_5);
    if (iVar1 != 0) {
      iVar2 = 1;
      goto LAB_0001de5c;
    }
    goto LAB_0001de38;
  }
  if (iVar1 == 1) {
    iVar2 = FUN_0001f9f4(param_2);
    if (iVar2 == 3) {
      uVar6 = *param_3;
      iVar1 = DAT_0001eb18 + 0x1dec4;
LAB_0001dec0:
      iVar1 = FUN_0001c41c(iVar1,uVar6,param_5);
      if (iVar1 == 0) goto LAB_0001de38;
LAB_0001de5c:
      iVar1 = FUN_0001c1b8(param_1,iVar2);
      if (iVar1 != 0) {
LAB_0001de6c:
        iVar1 = 1;
        goto LAB_0001de3c;
      }
LAB_0001df30:
      uVar6 = *(undefined4 *)(iVar7 + DAT_0001eb24);
      iVar1 = DAT_0001eb28 + 0x1df44;
    }
    else {
      if (iVar2 == 0xf) {
        uVar6 = *param_3;
        iVar1 = DAT_0001eb1c + 0x1def0;
        goto LAB_0001dec0;
      }
      if (iVar2 == 10) {
        iVar2 = FUN_0001c41c(DAT_0001eb20 + 0x1df0c,*param_3,param_5);
        if (iVar2 == 0) goto LAB_0001de38;
        iVar2 = FUN_0001c1b8(param_1,10);
        if (iVar2 != 0) {
          bVar4 = *(byte *)(param_1 + 0x88) | 1;
LAB_0001df94:
          *(byte *)(param_1 + 0x88) = bVar4;
          goto LAB_0001de3c;
        }
        goto LAB_0001df30;
      }
      if (iVar2 == 0x15) {
        iVar2 = FUN_0001c41c(DAT_0001eb2c + 0x1df70,*param_3,param_5);
        if (iVar2 != 0) {
          iVar2 = FUN_0001c1b8(param_1,0x15);
          if (iVar2 != 0) {
            bVar4 = *(byte *)(param_1 + 0x88) | 2;
            goto LAB_0001df94;
          }
          goto LAB_0001df30;
        }
        goto LAB_0001de38;
      }
      if (iVar2 == 0x14) {
        iVar2 = FUN_0001c41c(DAT_0001eb30 + 0x1dfb8,*param_3,param_5);
        if (iVar2 != 0) {
          iVar2 = FUN_0001c1b8(param_1,0x14);
          if (iVar2 != 0) {
            bVar4 = *(byte *)(param_1 + 0x88) | 4;
            goto LAB_0001df94;
          }
          goto LAB_0001df30;
        }
        goto LAB_0001de38;
      }
      if (iVar2 == 0xb) {
        uVar6 = *param_3;
        iVar1 = DAT_0001eb34 + 0x1dffc;
        goto LAB_0001dec0;
      }
      if (iVar2 == 4) {
        iVar1 = FUN_0001c41c(DAT_0001eb38 + 0x1e018,*param_3,param_5);
        if (iVar1 != 0) {
          iVar2 = 4;
          goto LAB_0001de5c;
        }
        goto LAB_0001de38;
      }
      if (iVar2 == 5) {
        iVar1 = FUN_0001c41c(DAT_0001eb3c + 0x1e044,*param_3,param_5);
        if (iVar1 != 0) {
          iVar2 = 5;
          goto LAB_0001de5c;
        }
        goto LAB_0001de38;
      }
      if (iVar2 == 0xd) {
        uVar6 = *param_3;
        iVar1 = DAT_0001eb40 + 0x1e070;
        goto LAB_0001dec0;
      }
      if (iVar2 == 0xe) {
        uVar6 = *param_3;
        iVar1 = DAT_0001eb44 + 0x1e08c;
        goto LAB_0001dec0;
      }
      if (iVar2 != 0x12) {
        if (iVar2 != 0x13) {
          if (iVar2 == 0x16) {
            iVar2 = FUN_0001c41c(DAT_0001eb68 + 0x1e2a8,*param_3,param_5);
            if (iVar2 != 0) {
              iVar2 = FUN_0001c1b8(param_1,0x16);
              if (iVar2 != 0) {
                bVar4 = *(byte *)(param_1 + 0x88) | 0x10;
                goto LAB_0001df94;
              }
              goto LAB_0001df30;
            }
            goto LAB_0001de38;
          }
          if (iVar2 == 0xc) {
            uVar6 = *param_3;
            iVar1 = DAT_0001eb6c + 0x1e2ec;
            goto LAB_0001dec0;
          }
          if (iVar2 == 2) {
            iVar3 = FUN_0001c1b8(param_1,2);
            iVar2 = DAT_0001eb74;
            if (iVar3 == 0) {
              uVar6 = *(undefined4 *)(iVar7 + DAT_0001eb24);
              iVar1 = DAT_0001eb70 + 0x1e31c;
              goto LAB_0001df48;
            }
            *(byte *)(iVar3 + 8) = *(byte *)(iVar3 + 8) & 0xf8;
            iVar7 = FUN_0001c200(param_1,iVar2 + 0x1e370,param_3,param_4,param_5,
                                 DAT_0001eb80 + 0x1e388,&local_40,DAT_0001eb7c + 0x1e374,&local_44,
                                 DAT_0001eb78 + 0x1e35c,&local_3c,0);
            pcVar8 = local_40;
            if (iVar7 != 0) {
              if (local_40 != (char *)0x0) {
                iVar7 = strcmp(local_40,(char *)(DAT_0001eb84 + 0x1e3b4));
                if (iVar7 == 0) {
                  bVar4 = *(byte *)(iVar3 + 8) | 1;
                }
                else {
                  iVar7 = strcmp(pcVar8,(char *)(DAT_0001eb88 + 0x1e3d4));
                  if (iVar7 != 0) {
                    iVar7 = DAT_0001eb9c + 0x1e49c;
                    iVar1 = DAT_0001eba0 + 0x1e4a0;
                    goto LAB_0001e49c;
                  }
                  bVar4 = *(byte *)(iVar3 + 8) & 0xfe;
                }
                *(byte *)(iVar3 + 8) = bVar4;
              }
              if (local_44 != (char *)0x0) {
                iVar7 = strcmp(local_44,(char *)(DAT_0001eb8c + 0x1e404));
                if (iVar7 == 0) {
                  bVar4 = *(byte *)(iVar3 + 8) | 2;
                }
                else {
                  iVar7 = strcmp(local_44,(char *)(DAT_0001eb90 + 0x1e424));
                  if (iVar7 != 0) {
                    iVar7 = DAT_0001eba4 + 0x1e4b8;
                    iVar1 = DAT_0001eba8 + 0x1e4bc;
                    goto LAB_0001e49c;
                  }
                  bVar4 = *(byte *)(iVar3 + 8) & 0xfd;
                }
                *(byte *)(iVar3 + 8) = bVar4;
              }
              pcVar8 = local_3c;
              if (local_3c == (char *)0x0) goto LAB_0001de3c;
              iVar7 = strcmp(local_3c,(char *)(DAT_0001eb94 + 0x1e454));
              if (iVar7 == 0) {
                bVar4 = *(byte *)(iVar3 + 8) | 4;
              }
              else {
                iVar7 = strcmp(pcVar8,(char *)(DAT_0001eb98 + 0x1e474));
                if (iVar7 != 0) {
                  iVar7 = DAT_0001ebac + 0x1e4cc;
                  iVar1 = DAT_0001ebb0 + 0x1e4d0;
                  goto LAB_0001e49c;
                }
                bVar4 = *(byte *)(iVar3 + 8) & 0xfb;
              }
              *(byte *)(iVar3 + 8) = bVar4;
              goto LAB_0001de3c;
            }
            goto LAB_0001de38;
          }
          if (iVar2 != 6) {
            if (iVar2 == 7) {
              iVar2 = FUN_0001c1b8(param_1,7);
              if (iVar2 != 0) {
                iVar3 = FUN_0001c200(param_1,DAT_0001ebf8 + 0x1e794,param_3,param_4,param_5,
                                     DAT_0001ebfc + 0x1e788,&local_3c,0);
                iVar1 = 0;
                if (iVar3 == 0) goto LAB_0001de3c;
                if (local_3c == (char *)0x0) {
                  dbus_set_error(param_5,DAT_0001ec04 + 0x1e7c0,DAT_0001ec00 + 0x1e7bc);
                  iVar1 = 0;
                  goto LAB_0001de3c;
                }
                iVar1 = _dbus_strdup(local_3c);
                *(int *)(iVar2 + 8) = iVar1;
                if (iVar1 != 0) goto LAB_0001de6c;
              }
              uVar6 = *(undefined4 *)(iVar7 + DAT_0001eb24);
              iVar1 = DAT_0001ebf4 + 0x1e754;
              goto LAB_0001df48;
            }
            if (iVar2 != 0x10) {
              if (iVar2 == 0x17) {
                iVar1 = FUN_0001c1b8(param_1,0x17);
                if (iVar1 != 0) {
                  iVar7 = FUN_0001c200(param_1,DAT_0001ec10 + 0x1e880,param_3,param_4,param_5,
                                       DAT_0001ec14 + 0x1e874,&local_3c,0);
                  iVar1 = 0;
                  if (iVar7 != 0) {
                    iVar1 = FUN_00019ca4(local_3c,param_5);
                  }
                  goto LAB_0001de3c;
                }
                uVar6 = *(undefined4 *)(iVar7 + DAT_0001eb24);
                iVar7 = DAT_0001ec0c + 0x1e838;
                goto LAB_0001e83c;
              }
              iVar2 = DAT_0001ec18 + 0x1e8b0;
              iVar7 = DAT_0001ec1c + 0x1e8bc;
              iVar1 = DAT_0001ec20 + 0x1e8c0;
              goto LAB_0001e8bc;
            }
            iVar1 = FUN_0001c41c(DAT_0001ec08 + 0x1e7f8,*param_3,param_5);
            if (iVar1 != 0) {
              iVar2 = 0x10;
              goto LAB_0001de5c;
            }
            goto LAB_0001de38;
          }
          iVar3 = FUN_0001c1b8(param_1,6);
          iVar2 = DAT_0001ebb8;
          if (iVar3 != 0) {
            *(undefined4 *)(iVar3 + 8) = 0;
            iVar7 = FUN_0001c200(param_1,iVar2 + 0x1e54c,param_3,param_4,param_5,
                                 DAT_0001ebc8 + 0x1e578,&local_4c,DAT_0001ebc4 + 0x1e564,&local_48,
                                 DAT_0001ebc0 + 0x1e550,&local_44,DAT_0001ebbc + 0x1e538,&local_40,0
                                );
            param_2 = local_40;
            if (iVar7 != 0) {
              if ((local_4c == (char *)0x0) ||
                 (((local_48 == (char *)0x0 && (local_44 == (char *)0x0)) &&
                  (local_40 == (char *)0x0)))) {
                if (local_48 == (char *)0x0) {
                  if (local_44 == (char *)0x0) {
                    if (local_4c != (char *)0x0) goto LAB_0001e66c;
                    if (local_40 != (char *)0x0) {
                      iVar7 = strcmp(local_40,(char *)(DAT_0001ebe4 + 0x1e6d4));
                      if ((iVar7 != 0) &&
                         (iVar2 = strcmp(param_2,(char *)(DAT_0001ebe8 + 0x1e6ec)), iVar2 != 0)) {
                        iVar7 = DAT_0001ebec + 0x1e720;
                        iVar1 = DAT_0001ebf0 + 0x1e724;
                        goto LAB_0001e6b8;
                      }
                      uVar6 = 5;
                      *(uint *)(iVar3 + 0xc) = (uint)(iVar7 == 0);
                      goto LAB_0001e704;
                    }
                  }
                  else if (local_40 == (char *)0x0) {
                    if (local_4c != (char *)0x0) goto LAB_0001e66c;
                    _dbus_string_init_const(&local_3c);
                    iVar7 = thunk_FUN_00031484(&local_3c,iVar3 + 0xc);
                    if (iVar7 == 0) {
                      iVar7 = DAT_0001ebd0 + 0x1e66c;
                      local_48 = local_44;
                      goto LAB_0001e614;
                    }
                    uVar6 = 4;
                    goto LAB_0001e704;
                  }
                }
                else if ((local_44 == (char *)0x0) && (local_40 == (char *)0x0)) {
                  if (local_4c == (char *)0x0) {
                    _dbus_string_init_const(&local_3c,local_48);
                    iVar7 = thunk_FUN_000312b4(&local_3c,iVar3 + 0xc);
                    if (iVar7 == 0) {
                      iVar7 = DAT_0001ebcc + 0x1e618;
LAB_0001e614:
                      _dbus_warn(iVar7,local_48);
                      goto LAB_0001de3c;
                    }
                    uVar6 = 3;
                    goto LAB_0001e704;
                  }
LAB_0001e66c:
                  iVar7 = strcmp(local_4c,(char *)(DAT_0001ebd4 + 0x1e67c));
                  if (iVar7 == 0) {
                    uVar6 = 1;
                  }
                  else {
                    iVar7 = strcmp(local_4c,(char *)(DAT_0001ebd8 + 0x1e698));
                    if (iVar7 != 0) {
                      iVar7 = DAT_0001ebdc + 0x1e6b8;
                      iVar1 = DAT_0001ebe0 + 0x1e6bc;
                      param_2 = local_4c;
                      goto LAB_0001e6b8;
                    }
                    uVar6 = 2;
                  }
LAB_0001e704:
                  *(undefined4 *)(iVar3 + 8) = uVar6;
                  goto LAB_0001de3c;
                }
              }
              iVar7 = DAT_0001ec64 + 0x1eaf8;
              iVar1 = DAT_0001ec68 + 0x1eafc;
              goto LAB_0001e49c;
            }
            goto LAB_0001de38;
          }
          uVar6 = *(undefined4 *)(iVar7 + DAT_0001eb24);
          iVar1 = DAT_0001ebb4 + 0x1e500;
          goto LAB_0001df48;
        }
        local_3c = (char *)0x0;
        iVar2 = FUN_0001c41c(DAT_0001eb5c + 0x1e1dc,*param_3,param_5);
        iVar1 = 0;
        if (iVar2 == 0) goto LAB_0001de3c;
        iVar1 = FUN_0001c1b8(param_1,0x13);
        if (iVar1 == 0) {
LAB_0001e1fc:
          uVar6 = *(undefined4 *)(iVar7 + DAT_0001eb24);
          iVar1 = DAT_0001eb60 + 0x1e210;
          goto LAB_0001df48;
        }
        iVar1 = FUN_00030f54(&local_3c);
        if (iVar1 == 0) goto LAB_0001e1fc;
        iVar1 = FUN_0001d650(param_1 + 0x2c,&local_3c,0);
        if (iVar1 == 0) {
          dbus_set_error_const(param_5,DAT_0001eb64 + 0x1e25c,*(undefined4 *)(iVar7 + DAT_0001eb24))
          ;
          _dbus_list_foreach(&local_3c,*(undefined4 *)(iVar7 + DAT_0001eb54),0);
          _dbus_list_clear(&local_3c);
          iVar1 = 0;
          goto LAB_0001de3c;
        }
        goto LAB_0001de6c;
      }
      uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_3c = (char *)0x0;
      local_34 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8) | 1;
      local_40 = (char *)0x0;
      iVar2 = FUN_0001c41c(DAT_0001eb48 + 0x1e0b0,*param_3,param_5);
      iVar1 = 0;
      if (iVar2 == 0) goto LAB_0001de3c;
      iVar1 = FUN_0001c1b8(param_1,0x12);
      if (iVar1 != 0) {
        iVar1 = FUN_00030b30(&local_40,&local_3c);
        if (iVar1 == 0) {
          _dbus_warn(DAT_0001eb58 + 0x1e188,uStack_38);
          dbus_error_free(&local_3c);
LAB_0001e190:
          iVar1 = FUN_00030dac(&local_40);
          if (iVar1 == 0) goto LAB_0001e0e4;
          iVar1 = FUN_0001d650(param_1 + 0x2c,&local_40,0);
          if (iVar1 != 0) goto LAB_0001de6c;
        }
        else {
          iVar1 = FUN_0001d650(param_1 + 0x2c,&local_40,3);
          if (iVar1 != 0) goto LAB_0001e190;
        }
        dbus_set_error_const(param_5,DAT_0001eb50 + 0x1e148,*(undefined4 *)(iVar7 + DAT_0001eb24));
        _dbus_list_foreach(&local_40,*(undefined4 *)(iVar7 + DAT_0001eb54),0);
        _dbus_list_clear(&local_40);
        goto LAB_0001de38;
      }
LAB_0001e0e4:
      uVar6 = *(undefined4 *)(iVar7 + DAT_0001eb24);
      iVar1 = DAT_0001eb4c + 0x1e0f8;
    }
LAB_0001df48:
    dbus_set_error_const(param_5,iVar1,uVar6);
  }
  else if (iVar1 == 6) {
    iVar1 = strcmp(param_2,(char *)(DAT_0001ec24 + 0x1e8e0));
    if (iVar1 == 0) {
      iVar1 = FUN_0001c5b4(param_1,param_2,param_3,param_4,1,param_5);
      if (iVar1 == 0) goto LAB_0001de38;
      iVar2 = 8;
      goto LAB_0001de5c;
    }
    iVar1 = strcmp(param_2,(char *)(DAT_0001ec28 + 0x1e928));
    if (iVar1 == 0) {
      iVar1 = FUN_0001c5b4(param_1,param_2,param_3,param_4,0,param_5);
      if (iVar1 != 0) {
        iVar2 = 9;
        goto LAB_0001de5c;
      }
    }
    else {
      iVar2 = DAT_0001ec2c + 0x1e96c;
      iVar7 = DAT_0001ec30 + 0x1e978;
      iVar1 = DAT_0001ec34 + 0x1e97c;
LAB_0001e8bc:
      dbus_set_error(param_5,iVar1,iVar7,param_2,iVar2);
    }
  }
  else if (iVar1 == 0x10) {
    pcVar8 = (char *)(DAT_0001ec38 + 0x1e994);
    iVar1 = strcmp(param_2,pcVar8);
    if (iVar1 != 0) {
      iVar2 = DAT_0001ec50 + 0x1eaac;
      iVar7 = DAT_0001ec54 + 0x1eab8;
      iVar1 = DAT_0001ec58 + 0x1eabc;
      goto LAB_0001e8bc;
    }
    iVar2 = FUN_0001c200(param_1,pcVar8,param_3,param_4,param_5,DAT_0001ec40 + 0x1e9dc,&local_40,
                         DAT_0001ec3c + 0x1e9c8,&local_3c,0);
    iVar1 = 0;
    if (iVar2 == 0) goto LAB_0001de3c;
    iVar1 = FUN_0001c1b8(param_1,0x11);
    if (iVar1 == 0) {
      uVar6 = *(undefined4 *)(iVar7 + DAT_0001eb24);
      iVar7 = DAT_0001ec44 + 0x1ea14;
LAB_0001e83c:
      iVar1 = 0;
      dbus_set_error_const(param_5,iVar7,uVar6);
      goto LAB_0001de3c;
    }
    if ((local_40 != (char *)0x0) && (local_3c != (char *)0x0)) {
      iVar1 = _dbus_strdup();
      if (iVar1 != 0) {
        iVar2 = _dbus_strdup(local_3c);
        if ((iVar2 != 0) &&
           (iVar3 = _dbus_hash_table_insert_string(*(undefined4 *)(param_1 + 0x84),iVar1,iVar2),
           iVar3 != 0)) goto LAB_0001de6c;
        dbus_free(iVar1);
        if (iVar2 != 0) {
          dbus_free(iVar2);
        }
      }
      goto LAB_0001df30;
    }
    iVar7 = DAT_0001ec48 + 0x1ea44;
    iVar1 = DAT_0001ec4c + 0x1ea48;
LAB_0001e49c:
    dbus_set_error(param_5,iVar1,iVar7);
  }
  else {
    iVar7 = DAT_0001ec5c + 0x1ead0;
    iVar1 = DAT_0001ec60 + 0x1ead4;
LAB_0001e6b8:
    dbus_set_error(param_5,iVar1,iVar7,param_2);
  }
LAB_0001de38:
  iVar1 = 0;
LAB_0001de3c:
  if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1);
  }
  return;
}



/* ===== FUN_0001ec6c @ 0001ec6c size=824 ===== */

byte FUN_0001ec6c(int param_1,char *param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  char *__s1;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  
  pcVar6 = param_2;
  iVar2 = FUN_0001c1a0();
  if (iVar2 == 0) {
    dbus_set_error(param_3,DAT_0001efa8 + 0x1eca0,DAT_0001efa4 + 0x1ec9c);
    return 0;
  }
  __s1 = (char *)FUN_0001fd50();
  iVar2 = strcmp(__s1,param_2);
  if (iVar2 != 0) {
    dbus_set_error(param_3,DAT_0001efb0 + 0x1ece4,DAT_0001efac + 0x1ece0,param_2,__s1,pcVar6);
    return 0;
  }
  piVar3 = (int *)_dbus_list_get_last(param_1 + 0x14);
  uVar5 = *piVar3 - 2;
  if ((uVar5 < 0xe) && ((1 << (uVar5 & 0xff) & 0x3e2fU) != 0)) {
    bVar1 = *(byte *)(piVar3 + 1);
    if ((bVar1 & 1) == 0) {
      uVar4 = FUN_0001fd50();
      dbus_set_error(param_3,DAT_0001efb8 + 0x1ed48,DAT_0001efb4 + 0x1ed44,uVar4);
      return bVar1 & 1;
    }
    if (*piVar3 != 7) goto LAB_0001ef74;
    pcVar6 = (char *)piVar3[2];
    iVar7 = piVar3[3];
    iVar2 = strcmp(pcVar6,(char *)(DAT_0001efbc + 0x1ed68));
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x38) = iVar7;
    }
    else {
      iVar2 = strcmp(pcVar6,(char *)(DAT_0001efc0 + 0x1ed84));
      if (iVar2 == 0) {
        *(int *)(param_1 + 0x3c) = iVar7;
      }
      else {
        iVar2 = strcmp(pcVar6,(char *)(DAT_0001efc4 + 0x1eda0));
        if (iVar2 == 0) {
          *(int *)(param_1 + 0x40) = iVar7;
        }
        else {
          iVar2 = strcmp(pcVar6,(char *)(DAT_0001efc8 + 0x1edbc));
          if (iVar2 == 0) {
            *(int *)(param_1 + 0x44) = iVar7;
          }
          else {
            iVar2 = strcmp(pcVar6,(char *)(DAT_0001efcc + 0x1edd8));
            if (iVar2 == 0) {
              *(int *)(param_1 + 0x48) = iVar7;
            }
            else {
              iVar2 = strcmp(pcVar6,(char *)(DAT_0001efd0 + 0x1edf4));
              if (iVar2 == 0) {
                *(int *)(param_1 + 0x4c) = iVar7;
              }
              else {
                iVar2 = strcmp(pcVar6,(char *)(DAT_0001efd4 + 0x1ee10));
                if (iVar2 == 0) {
                  *(int *)(param_1 + 0x50) = iVar7;
                }
                else {
                  iVar2 = strcmp(pcVar6,(char *)(DAT_0001efd8 + 0x1ee2c));
                  if (iVar2 == 0) {
                    *(int *)(param_1 + 0x54) = iVar7;
                  }
                  else {
                    iVar2 = strcmp(pcVar6,(char *)(DAT_0001efdc + 0x1ee48));
                    if (iVar2 == 0) {
                      *(int *)(param_1 + 0x58) = iVar7;
                    }
                    else {
                      iVar2 = strcmp(pcVar6,(char *)(DAT_0001efe0 + 0x1ee64));
                      if (iVar2 == 0) {
                        *(int *)(param_1 + 0x78) = iVar7;
                      }
                      else {
                        iVar2 = strcmp(pcVar6,(char *)(DAT_0001efe4 + 0x1ee80));
                        if (iVar2 == 0) {
                          *(int *)(param_1 + 0x5c) = iVar7;
                        }
                        else {
                          iVar2 = strcmp(pcVar6,(char *)(DAT_0001efe8 + 0x1ee9c));
                          if (iVar2 == 0) {
                            *(int *)(param_1 + 0x60) = iVar7;
                          }
                          else {
                            iVar2 = strcmp(pcVar6,(char *)(DAT_0001efec + 0x1eeb8));
                            if (iVar2 == 0) {
                              *(int *)(param_1 + 100) = iVar7;
                            }
                            else {
                              iVar2 = strcmp(pcVar6,(char *)(DAT_0001eff0 + 0x1eed4));
                              if (iVar2 == 0) {
                                *(int *)(param_1 + 0x68) = iVar7;
                              }
                              else {
                                iVar2 = strcmp(pcVar6,(char *)(DAT_0001eff4 + 0x1eef0));
                                if (iVar2 == 0) {
                                  *(int *)(param_1 + 0x6c) = iVar7;
                                }
                                else {
                                  iVar2 = strcmp(pcVar6,(char *)(DAT_0001eff8 + 0x1ef0c));
                                  if (iVar2 == 0) {
                                    *(int *)(param_1 + 0x70) = iVar7;
                                  }
                                  else {
                                    iVar2 = strcmp(pcVar6,(char *)(DAT_0001effc + 0x1ef28));
                                    if (iVar2 != 0) {
                                      iVar7 = DAT_0001f000 + 0x1ef48;
                                      iVar2 = DAT_0001f004 + 0x1ef4c;
                                      goto LAB_0001ef48;
                                    }
                                    *(int *)(param_1 + 0x74) = iVar7;
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
            }
          }
        }
      }
    }
    if (iVar7 < 0) {
      iVar7 = DAT_0001f008 + 0x1ef70;
      iVar2 = DAT_0001f00c + 0x1ef74;
LAB_0001ef48:
      dbus_set_error(param_3,iVar2,iVar7,pcVar6);
      return 0;
    }
  }
LAB_0001ef74:
  piVar3 = (int *)_dbus_list_pop_last(param_1 + 0x14);
  if (*piVar3 == 7) {
    dbus_free(piVar3[2]);
  }
  dbus_free(piVar3);
  return 1;
}



/* ===== FUN_0001f010 @ 0001f010 size=1960 ===== */

void FUN_0001f010(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int aiStack_6c [4];
  undefined1 auStack_5c [16];
  int local_4c [4];
  int local_3c [4];
  int local_2c;
  
  iVar11 = DAT_0001f7b8 + 0x1f030;
  piVar8 = *(int **)(iVar11 + DAT_0001f7bc);
  local_2c = *piVar8;
  iVar1 = _dbus_list_get_last(param_1 + 0x14);
  if (iVar1 == 0) {
    dbus_set_error(param_3,DAT_0001f7c4 + 0x1f068,DAT_0001f7c0 + 0x1f064);
    goto switchD_0001f08c_default;
  }
  if ((*(byte *)(iVar1 + 4) & 1) != 0) goto switchD_0001f08c_default;
  uVar2 = FUN_0001c1a0(param_1);
  switch(uVar2) {
  case 1:
    break;
  case 2:
    *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) | 1;
    if (((*(byte *)(iVar1 + 8) & 2) != 0) && (iVar5 = FUN_000299f4(), iVar5 == 0))
    goto LAB_0001f16c;
    piVar3 = local_4c;
    iVar5 = _dbus_string_init(piVar3);
    if (iVar5 == 0) goto LAB_0001f1a0;
    if ((*(byte *)(iVar1 + 8) & 4) == 0) {
      piVar4 = (int *)(param_1 + 4);
    }
    else {
      iVar5 = FUN_00029a78();
      if (iVar5 == 0) {
        dbus_set_error(param_3,DAT_0001f7dc + 0x1f204,DAT_0001f7d8 + 0x1f200);
        goto LAB_0001f208;
      }
      piVar4 = local_3c;
      uVar2 = FUN_00029a78();
      _dbus_string_init_const(piVar4,uVar2);
    }
    iVar5 = FUN_0001c460(piVar4,param_2,piVar3);
    if (iVar5 == 0) goto LAB_0001f2b8;
    iVar1 = FUN_0001d994(param_1,piVar3,*(byte *)(iVar1 + 8) & 1,param_3);
    if (iVar1 != 0) goto LAB_0001f264;
LAB_0001f208:
    _dbus_string_free(piVar3);
    goto switchD_0001f08c_default;
  case 3:
    *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) | 1;
    iVar1 = _dbus_string_copy_data(param_2,local_3c);
    if (iVar1 == 0) goto LAB_0001f1a0;
    dbus_free(*(undefined4 *)(param_1 + 0x18));
    *(int *)(param_1 + 0x18) = local_3c[0];
    goto LAB_0001f16c;
  case 4:
    *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) | 1;
    iVar1 = _dbus_string_copy_data(param_2,local_3c);
    if (iVar1 == 0) goto LAB_0001f1a0;
    param_1 = param_1 + 0x24;
LAB_0001f670:
    iVar1 = _dbus_list_append(param_1,local_3c[0]);
    local_4c[0] = local_3c[0];
    if (iVar1 == 0) goto LAB_0001f680;
    goto LAB_0001f16c;
  case 5:
    *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) | 1;
    iVar1 = _dbus_string_copy_data(param_2,local_3c);
    if (iVar1 != 0) {
      param_1 = param_1 + 0x28;
      goto LAB_0001f670;
    }
    goto LAB_0001f1a0;
  case 6:
    break;
  case 7:
    *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) | 1;
    local_3c[0] = 0;
    iVar11 = _dbus_string_parse_int(param_2,0,local_3c);
    if (iVar11 == 0) {
      dbus_set_error(param_3,DAT_0001f80c + 0x1f7ac,DAT_0001f808 + 0x1f7a8,
                     *(undefined4 *)(iVar1 + 8));
      iVar11 = 0;
      goto LAB_0001f2f8;
    }
    *(int *)(iVar1 + 0xc) = local_3c[0];
    goto LAB_0001f16c;
  case 8:
    break;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) | 1;
    iVar1 = _dbus_string_copy_data(param_2,local_3c);
    if (iVar1 == 0) goto LAB_0001f1a0;
    dbus_free(*(undefined4 *)(param_1 + 0x7c));
    *(int *)(param_1 + 0x7c) = local_3c[0];
    goto LAB_0001f16c;
  case 0xc:
    *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) | 1;
    piVar3 = local_3c;
    iVar1 = _dbus_string_init(piVar3);
    if (iVar1 != 0) {
      iVar1 = FUN_0001c460(param_1 + 4,param_2,piVar3);
      if ((iVar1 == 0) ||
         (iVar5 = _dbus_string_copy_data(piVar3,local_4c), iVar1 = local_4c[0], iVar5 == 0))
      goto LAB_0001f2b8;
      puVar7 = (undefined4 *)dbus_malloc0(8);
      if (puVar7 != (undefined4 *)0x0) {
        puVar7[1] = iVar1;
        *puVar7 = 0;
        iVar1 = _dbus_list_alloc_link();
        if (iVar1 != 0) {
          FUN_0001c3a0(param_1 + 0x2c);
          goto LAB_0001f320;
        }
        _dbus_string_free(piVar3);
        FUN_0001c184(puVar7);
        goto LAB_0001f1a0;
      }
      _dbus_string_free(piVar3);
LAB_0001f680:
      dbus_free(local_4c[0]);
    }
    goto LAB_0001f1a0;
  case 0xd:
    *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) | 1;
    piVar3 = local_3c;
    iVar1 = _dbus_string_init(piVar3);
    if (iVar1 == 0) goto LAB_0001f1a0;
    iVar1 = FUN_0001c460(param_1 + 4,param_2,piVar3);
    if (iVar1 == 0) goto LAB_0001f2b8;
    iVar1 = _dbus_strdup(local_3c[0]);
    if (iVar1 == 0) {
      dbus_set_error_const(param_3,DAT_0001f7e0 + 0x1f2e8,*(undefined4 *)(iVar11 + DAT_0001f7d0));
      iVar11 = 0;
LAB_0001f2f0:
      _dbus_string_free(piVar3);
      goto LAB_0001f2f8;
    }
    dbus_free(*(undefined4 *)(param_1 + 0x1c));
    *(int *)(param_1 + 0x1c) = iVar1;
LAB_0001f320:
    piVar3 = local_3c;
LAB_0001f264:
    _dbus_string_free(piVar3);
    goto LAB_0001f16c;
  case 0xe:
    *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) | 1;
    piVar3 = aiStack_6c;
    iVar1 = _dbus_string_init(piVar3);
    if (iVar1 != 0) {
      iVar1 = FUN_0001c460(param_1 + 4,param_2,piVar3);
      if (iVar1 != 0) {
        iVar1 = _dbus_string_init(auStack_5c);
        if (iVar1 == 0) {
          dbus_set_error_const
                    (param_3,DAT_0001f7e4 + 0x1f38c,*(undefined4 *)(iVar11 + DAT_0001f7d0));
          goto LAB_0001f208;
        }
        iVar1 = FUN_00030580(piVar3,param_3);
        if (iVar1 == 0) {
          iVar5 = dbus_error_has_name(param_3,DAT_0001f7e8 + 0x1f3c0);
          iVar11 = 0;
          if (iVar5 != 0) {
            dbus_error_free(param_3);
LAB_0001f3d0:
            iVar11 = 1;
          }
        }
        else {
          dbus_error_init(local_4c);
          iVar5 = DAT_0001f7ec + 0x1f3f0;
          iVar9 = DAT_0001f7f0 + 0x1f3fc;
          iVar10 = DAT_0001f7f4 + 0x1f408;
          while (iVar6 = FUN_00030628(iVar1,auStack_5c,local_4c), iVar6 != 0) {
            iVar6 = _dbus_string_init(local_3c);
            if (iVar6 == 0) {
              dbus_set_error_const
                        (param_3,DAT_0001f7f8 + 0x1f46c,*(undefined4 *)(iVar11 + DAT_0001f7d0));
LAB_0001f474:
              iVar11 = 0;
              goto LAB_0001f478;
            }
            iVar6 = _dbus_string_copy(piVar3,0,local_3c);
            if ((iVar6 == 0) || (iVar6 = _dbus_concat_dir_and_file(local_3c,auStack_5c), iVar6 == 0)
               ) {
              dbus_set_error_const
                        (param_3,DAT_0001f7fc + 0x1f4d0,*(undefined4 *)(iVar11 + DAT_0001f7d0));
              _dbus_string_free(local_3c);
              goto LAB_0001f474;
            }
            iVar6 = FUN_00032acc(local_3c,iVar5);
            if (((iVar6 != 0) && (iVar6 = FUN_0001d994(param_1,local_3c,1,param_3), iVar6 == 0)) &&
               (iVar6 = dbus_error_is_set(param_3), iVar6 != 0)) {
              _dbus_init_system_log(iVar9,3);
              _dbus_log(0,iVar10,*(undefined4 *)(param_3 + 4),local_3c[0]);
              dbus_error_free(param_3);
            }
            _dbus_string_free(local_3c);
          }
          iVar5 = dbus_error_is_set(local_4c);
          if (iVar5 == 0) {
            iVar5 = _dbus_string_copy_data(piVar3,local_3c);
            if (iVar5 == 0) {
              uVar2 = *(undefined4 *)(iVar11 + DAT_0001f7d0);
              iVar5 = DAT_0001f800 + 0x1f598;
            }
            else {
              iVar5 = _dbus_list_append(param_1 + 0x30,local_3c[0]);
              if (iVar5 != 0) goto LAB_0001f3d0;
              dbus_free(local_3c[0]);
              uVar2 = *(undefined4 *)(iVar11 + DAT_0001f7d0);
              iVar5 = DAT_0001f804 + 0x1f5d8;
            }
            iVar11 = 0;
            dbus_set_error_const(param_3,iVar5,uVar2);
          }
          else {
            dbus_move_error(local_4c,param_3);
            iVar11 = 0;
          }
        }
LAB_0001f478:
        _dbus_string_free(auStack_5c);
        if (iVar1 != 0) {
          FUN_0003070c(iVar1);
        }
        if (iVar11 != 0) goto LAB_0001f2f0;
        goto LAB_0001f208;
      }
LAB_0001f2b8:
      _dbus_string_free(piVar3);
    }
LAB_0001f1a0:
    dbus_set_error_const(param_3,DAT_0001f7d4 + 0x1f1b8,*(undefined4 *)(iVar11 + DAT_0001f7d0));
    goto switchD_0001f08c_default;
  case 0xf:
    *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) | 1;
    iVar1 = _dbus_string_copy_data(param_2,local_3c);
    if (iVar1 == 0) goto LAB_0001f1a0;
    dbus_free(*(undefined4 *)(param_1 + 0x20));
    *(int *)(param_1 + 0x20) = local_3c[0];
    goto LAB_0001f16c;
  case 0x10:
    break;
  case 0x11:
    break;
  case 0x12:
    break;
  case 0x13:
    break;
  case 0x14:
    break;
  case 0x15:
    break;
  case 0x16:
    break;
  case 0x17:
    break;
  default:
    goto switchD_0001f08c_default;
  }
  _dbus_string_skip_white(param_2,0,local_3c);
  if (*(int *)(param_2 + 4) == local_3c[0]) {
LAB_0001f16c:
    iVar11 = 1;
  }
  else {
    FUN_0001c1a0(param_1);
    uVar2 = FUN_0001fd50();
    dbus_set_error(param_3,DAT_0001f7cc + 0x1f138,DAT_0001f7c8 + 0x1f134,uVar2);
switchD_0001f08c_default:
    iVar11 = 0;
  }
LAB_0001f2f8:
  if (local_2c != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar11);
  }
  return;
}



/* ===== FUN_0001f810 @ 0001f810 size=124 ===== */

undefined4 FUN_0001f810(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    if (((*(byte *)(param_1 + 0x88) & 8) == 0) || (*(int *)(param_1 + 0x24) != 0)) {
      return 1;
    }
    dbus_set_error(param_2,DAT_0001f898 + 0x1f880,DAT_0001f894 + 0x1f87c);
  }
  else {
    FUN_0001c1a0();
    uVar1 = FUN_0001fd50();
    dbus_set_error(param_2,DAT_0001f890 + 0x1f848,DAT_0001f88c + 0x1f844,uVar1);
  }
  return 0;
}



/* ===== FUN_0001f89c @ 0001f89c size=8 ===== */

undefined4 FUN_0001f89c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* ===== FUN_0001f8a4 @ 0001f8a4 size=8 ===== */

undefined4 FUN_0001f8a4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* ===== FUN_0001f8ac @ 0001f8ac size=8 ===== */

int FUN_0001f8ac(int param_1)

{
  return param_1 + 0x24;
}



/* ===== FUN_0001f8b4 @ 0001f8b4 size=8 ===== */

int FUN_0001f8b4(int param_1)

{
  return param_1 + 0x28;
}



/* ===== FUN_0001f8bc @ 0001f8bc size=8 ===== */

int FUN_0001f8bc(int param_1)

{
  return param_1 + 0x2c;
}



/* ===== FUN_0001f8cc @ 0001f8cc size=12 ===== */

byte FUN_0001f8cc(int param_1)

{
  return *(byte *)(param_1 + 0x88) & 1;
}



/* ===== FUN_0001f8d8 @ 0001f8d8 size=12 ===== */

uint FUN_0001f8d8(int param_1)

{
  return (*(byte *)(param_1 + 0x88) & 3) >> 1;
}



/* ===== FUN_0001f8e4 @ 0001f8e4 size=12 ===== */

uint FUN_0001f8e4(int param_1)

{
  return (*(byte *)(param_1 + 0x88) & 7) >> 2;
}



/* ===== FUN_0001f8f0 @ 0001f8f0 size=12 ===== */

uint FUN_0001f8f0(int param_1)

{
  return (*(byte *)(param_1 + 0x88) & 0x1f) >> 4;
}



/* ===== FUN_0001f8fc @ 0001f8fc size=8 ===== */

undefined4 FUN_0001f8fc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x7c);
}



/* ===== FUN_0001f904 @ 0001f904 size=8 ===== */

undefined4 FUN_0001f904(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



/* ===== FUN_0001f90c @ 0001f90c size=20 ===== */

undefined4 FUN_0001f90c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x34) = 0;
  return uVar1;
}



/* ===== FUN_0001f920 @ 0001f920 size=28 ===== */

void FUN_0001f920(int param_1,void *param_2)

{
  memcpy(param_2,(void *)(param_1 + 0x38),0x44);
  return;
}



/* ===== FUN_0001f93c @ 0001f93c size=20 ===== */

undefined4 FUN_0001f93c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_1 + 0x84) = 0;
  return uVar1;
}



/* ===== FUN_0001f950 @ 0001f950 size=164 ===== */

undefined4 FUN_0001f950(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _dbus_list_get_first_link(param_1 + 0x30);
  do {
    if (iVar1 == 0) break;
    iVar2 = _dbus_list_append(param_2,*(undefined4 *)(iVar1 + 8));
    if (iVar2 == 0) goto LAB_0001f9e4;
    iVar1 = *(int *)(iVar1 + 4);
  } while (iVar1 != *(int *)(param_1 + 0x30));
  iVar1 = _dbus_list_get_first_link(param_1 + 0x2c);
  while( true ) {
    if (iVar1 == 0) {
      return 1;
    }
    if (((**(uint **)(iVar1 + 8) & 1) == 0) &&
       (iVar2 = _dbus_list_append(param_2,(*(uint **)(iVar1 + 8))[1]), iVar2 == 0)) break;
    iVar1 = *(int *)(iVar1 + 4);
    if (iVar1 == *(int *)(param_1 + 0x2c)) {
      return 1;
    }
  }
LAB_0001f9e4:
  _dbus_list_clear(param_2);
  return 0;
}



/* ===== FUN_0001f9f4 @ 0001f9f4 size=764 ===== */

undefined4 FUN_0001f9f4(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp(param_1,(char *)(DAT_0001fcf0 + 0x1fa08));
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = strcmp(param_1,(char *)(DAT_0001fcf4 + 0x1fa20));
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = strcmp(param_1,(char *)(DAT_0001fcf8 + 0x1fa38));
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = strcmp(param_1,(char *)(DAT_0001fcfc + 0x1fa50));
  if (iVar1 == 0) {
    return 5;
  }
  iVar1 = strcmp(param_1,(char *)(DAT_0001fd00 + 0x1fa68));
  if (iVar1 == 0) {
    return 0xf;
  }
  iVar1 = strcmp(param_1,(char *)(DAT_0001fd04 + 0x1fa80));
  if (iVar1 == 0) {
    return 10;
  }
  iVar1 = strcmp(param_1,(char *)(DAT_0001fd08 + 0x1fa98));
  if (iVar1 == 0) {
    return 0xb;
  }
  iVar1 = strcmp(param_1,(char *)(DAT_0001fd0c + 0x1fab0));
  if (iVar1 == 0) {
    return 4;
  }
  iVar1 = strcmp(param_1,(char *)(DAT_0001fd10 + 0x1fac8));
  if (iVar1 == 0) {
    return 8;
  }
  iVar1 = strcmp(param_1,(char *)(DAT_0001fd14 + 0x1fae0));
  if (iVar1 == 0) {
    return 9;
  }
  iVar1 = strcmp(param_1,(char *)(DAT_0001fd18 + 0x1faf8));
  if (iVar1 == 0) {
    return 0xd;
  }
  iVar1 = strcmp(param_1,(char *)(DAT_0001fd1c + 0x1fb10));
  if (iVar1 == 0) {
    return 0xe;
  }
  iVar1 = strcmp(param_1,(char *)(DAT_0001fd20 + 0x1fb28));
  if (iVar1 == 0) {
    return 0x12;
  }
  iVar1 = strcmp(param_1,(char *)(DAT_0001fd24 + 0x1fb40));
  if (iVar1 == 0) {
    return 0x13;
  }
  iVar1 = strcmp(param_1,(char *)(DAT_0001fd28 + 0x1fb58));
  if (iVar1 == 0) {
    return 0xc;
  }
  iVar1 = strcmp(param_1,(char *)(DAT_0001fd2c + 0x1fb70));
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = strcmp(param_1,(char *)(DAT_0001fd30 + 0x1fb88));
  if (iVar1 == 0) {
    return 6;
  }
  iVar1 = strcmp(param_1,(char *)(DAT_0001fd34 + 0x1fba0));
  if (iVar1 == 0) {
    return 7;
  }
  iVar1 = strcmp(param_1,(char *)(DAT_0001fd38 + 0x1fbb8));
  if (iVar1 == 0) {
    return 0x10;
  }
  iVar1 = strcmp(param_1,(char *)(DAT_0001fd3c + 130000));
  if (iVar1 == 0) {
    return 0x11;
  }
  iVar1 = strcmp(param_1,(char *)(DAT_0001fd40 + 0x1fbe8));
  if (iVar1 == 0) {
    return 0x15;
  }
  iVar1 = strcmp(param_1,(char *)(DAT_0001fd44 + 0x1fc00));
  if (iVar1 == 0) {
    return 0x14;
  }
  iVar1 = strcmp(param_1,(char *)(DAT_0001fd48 + 0x1fc18));
  if (iVar1 == 0) {
    return 0x16;
  }
  iVar1 = strcmp(param_1,(char *)(DAT_0001fd4c + 0x1fc30));
  if (iVar1 == 0) {
    uVar2 = 0x17;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_0001fd50 @ 0001fd50 size=392 ===== */

int FUN_0001fd50(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    return DAT_0001fed8 + 0x1fdc8;
  case 2:
    return DAT_0001fedc + 0x1fdd4;
  case 3:
    return DAT_0001fee0 + 0x1fde0;
  case 4:
    return DAT_0001fee4 + 0x1fdec;
  case 5:
    return DAT_0001fee8 + 0x1fdf8;
  case 6:
    return DAT_0001feec + 0x1fe04;
  case 7:
    return DAT_0001fef0 + 0x1fe10;
  case 8:
    return DAT_0001fef4 + 0x1fe1c;
  case 9:
    return DAT_0001fef8 + 0x1fe28;
  case 10:
    return DAT_0001fefc + 0x1fe34;
  case 0xb:
    return DAT_0001ff00 + 0x1fe40;
  case 0xc:
    return DAT_0001ff0c + 0x1fe64;
  case 0xd:
    return DAT_0001ff10 + 0x1fe70;
  case 0xe:
    return DAT_0001ff14 + 0x1fe7c;
  case 0xf:
    return DAT_0001ff18 + 0x1fe88;
  case 0x10:
    return DAT_0001ff1c + 0x1fe94;
  case 0x11:
    return DAT_0001ff20 + 0x1fea0;
  case 0x12:
    return DAT_0001ff04 + 0x1fe4c;
  case 0x13:
    return DAT_0001ff08 + 0x1fe58;
  case 0x14:
    return DAT_0001ff28 + 0x1feb8;
  case 0x15:
    return DAT_0001ff24 + 0x1feac;
  case 0x16:
    return DAT_0001ff2c + 0x1fec4;
  case 0x17:
    return DAT_0001ff30 + 0x1fed0;
  default:
    return 0;
  }
}



/* ===== FUN_0001ff4c @ 0001ff4c size=32 ===== */

void FUN_0001ff4c(undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)dbus_connection_get_data(param_1,*(undefined4 *)(DAT_0001ff6c + 0x1ff5c));
  FUN_0001a658(*(undefined4 *)(*piVar1 + 0x14));
  return;
}



/* ===== FUN_0001ff8c @ 0001ff8c size=60 ===== */

void FUN_0001ff8c(undefined4 param_1,int param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    dbus_message_unref();
  }
  if (*(int *)(param_2 + 8) != 0) {
    dbus_connection_free_preallocated_send(param_1);
  }
  dbus_free(param_2);
  return;
}



/* ===== FUN_0001ffcc @ 0001ffcc size=40 ===== */

void FUN_0001ffcc(int param_1)

{
  if (*(code **)(param_1 + 4) != (code *)0x0) {
    (**(code **)(param_1 + 4))(*(undefined4 *)(param_1 + 8));
  }
  dbus_free(param_1);
  return;
}



/* ===== FUN_0001fff4 @ 0001fff4 size=60 ===== */

undefined4 FUN_0001fff4(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _dbus_hash_table_lookup_uintptr(*(undefined4 *)(param_1 + 0x18));
  if (iVar1 + param_3 != 0) {
    uVar2 = _dbus_hash_table_insert_uintptr();
    return uVar2;
  }
  _dbus_hash_table_remove_uintptr(*(undefined4 *)(param_1 + 0x18),param_2);
  return 1;
}



/* ===== FUN_00020030 @ 00020030 size=28 ===== */

void FUN_00020030(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001ff4c(param_2);
  FUN_0002e93c(uVar1,param_1);
  return;
}



/* ===== FUN_0002004c @ 0002004c size=48 ===== */

void FUN_0002004c(int *param_1)

{
  if (*param_1 != 0) {
    dbus_free(*(undefined4 *)(*param_1 + 8));
    _dbus_list_free_link(*param_1);
  }
  dbus_free(param_1);
  return;
}



/* ===== FUN_00020154 @ 00020154 size=28 ===== */

void FUN_00020154(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001ff4c(param_2);
  FUN_0002e86c(uVar1,param_1);
  return;
}



/* ===== FUN_00020170 @ 00020170 size=28 ===== */

void FUN_00020170(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001ff4c(param_2);
  FUN_0002e718(uVar1,param_1);
  return;
}



/* ===== FUN_0002018c @ 0002018c size=104 ===== */

void FUN_0002018c(int param_1)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    dbus_connection_free_preallocated_send(*(undefined4 *)(param_1 + 8));
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    dbus_message_unref();
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_00028f38();
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_00019d30();
  }
  dbus_free(*(undefined4 *)(param_1 + 0x30));
  dbus_free(*(undefined4 *)(param_1 + 0x1c));
  dbus_free(param_1);
  return;
}



/* ===== FUN_000201f4 @ 000201f4 size=84 ===== */

undefined4 FUN_000201f4(int param_1,code *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = _dbus_list_get_first_link(param_1 + 4);
  do {
    if (iVar2 == 0) {
      return 1;
    }
    puVar1 = (undefined4 *)(iVar2 + 8);
    iVar2 = *(int *)(iVar2 + 4);
    if (iVar2 == *(int *)(param_1 + 4)) {
      iVar2 = 0;
    }
    iVar3 = (*param_2)(*puVar1,param_3);
  } while (iVar3 != 0);
  return 0;
}



/* ===== FUN_00020248 @ 00020248 size=32 ===== */

void FUN_00020248(undefined4 *param_1)

{
  _dbus_list_remove(*(undefined4 *)(param_1[1] + 0x24),*param_1);
  dbus_free(*param_1);
  return;
}



/* ===== FUN_00020268 @ 00020268 size=32 ===== */

void FUN_00020268(undefined4 *param_1)

{
  FUN_00028758(*(undefined4 *)(param_1[1] + 0x24),*param_1);
  *param_1 = 0;
  return;
}



/* ===== FUN_00020288 @ 00020288 size=132 ===== */

void FUN_00020288(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = _dbus_list_get_first_link(*param_1);
  while (iVar1 != 0) {
    iVar2 = FUN_00028784(*param_1,iVar1);
    puVar3 = *(undefined4 **)(iVar1 + 8);
    if (puVar3[2] == param_2) {
      _dbus_list_remove_link(*param_1,iVar1);
      dbus_free(puVar3);
      iVar1 = iVar2;
    }
    else {
      iVar1 = iVar2;
      if (param_2 == puVar3[3]) {
        puVar3[3] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        FUN_0002870c(*param_1);
      }
    }
  }
  return;
}



/* ===== FUN_00020340 @ 00020340 size=260 ===== */

undefined4 * FUN_00020340(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = dbus_connection_allocate_data_slot(DAT_00020444 + 0x20354);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)dbus_malloc0(0x48);
    if (puVar2 != (undefined4 *)0x0) {
      iVar1 = _dbus_hash_table_new(2,0);
      puVar2[6] = iVar1;
      if (iVar1 != 0) {
        iVar1 = _dbus_timeout_new(100,DAT_00020448 + 0x203a0,puVar2,0);
        puVar2[7] = iVar1;
        if (iVar1 != 0) {
          _dbus_timeout_disable();
          uVar3 = FUN_0001a658(param_1);
          uVar4 = FUN_0001a6d0(param_1);
          iVar1 = FUN_000284a8(uVar3,uVar4,DAT_0002044c + 0x203dc,puVar2);
          puVar2[9] = iVar1;
          if (iVar1 != 0) {
            uVar3 = FUN_0001a658(param_1);
            iVar1 = FUN_0002e93c(uVar3,puVar2[7]);
            if (iVar1 != 0) {
              puVar2[5] = param_1;
              *puVar2 = 1;
              return puVar2;
            }
            FUN_00028548(puVar2[9]);
          }
          _dbus_timeout_unref(puVar2[7]);
        }
        _dbus_hash_table_unref(puVar2[6]);
      }
      dbus_free(puVar2);
    }
    dbus_connection_free_data_slot(DAT_00020450 + 0x2043c);
  }
  return (undefined4 *)0x0;
}



/* ===== FUN_00020464 @ 00020464 size=320 ===== */

void FUN_00020464(int param_1)

{
  int *piVar1;
  byte bVar2;
  double dVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint in_fpscr;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  
  iVar4 = DAT_000205bc;
  piVar8 = *(int **)(DAT_000205b0 + 0x20474 + DAT_000205b4);
  local_2c = *piVar8;
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar10 = (undefined4 *)(DAT_000205b8 + 0x204b0);
    _dbus_get_monotonic_time(&local_34,&local_30);
    dVar3 = DAT_000205a8;
    uVar5 = FUN_0001a688(*(undefined4 *)(param_1 + 0x14));
    iVar6 = _dbus_list_get_first_link(param_1 + 0xc);
    while (iVar6 != 0) {
      piVar1 = (int *)(iVar6 + 4);
      uVar9 = *(undefined4 *)(iVar6 + 8);
      iVar6 = *piVar1;
      if (*piVar1 == *(int *)(param_1 + 0xc)) {
        iVar6 = 0;
      }
      iVar7 = dbus_connection_get_data(uVar9,*puVar10);
      dVar13 = (double)VectorSignedToFloat(local_34,(byte)(in_fpscr >> 0x16) & 3);
      dVar11 = (double)VectorSignedToFloat(*(undefined4 *)(iVar7 + 0x3c),
                                           (byte)(in_fpscr >> 0x16) & 3);
      dVar14 = (double)VectorSignedToFloat(local_30,(byte)(in_fpscr >> 0x16) & 3);
      dVar12 = (double)VectorSignedToFloat(*(undefined4 *)(iVar7 + 0x40),
                                           (byte)(in_fpscr >> 0x16) & 3);
      dVar11 = (dVar14 - dVar12) / dVar3 + (dVar13 - dVar11) * dVar3;
      dVar12 = (double)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
      in_fpscr = in_fpscr & 0xfffffff | (uint)(dVar12 == dVar11) << 0x1e |
                 (uint)(dVar11 <= dVar12) << 0x1d;
      bVar2 = (byte)(in_fpscr >> 0x18);
      if ((bool)(bVar2 >> 5 & 1) && !(bool)(bVar2 >> 6)) {
        uVar5 = (undefined4)(longlong)(dVar12 - dVar11);
        goto LAB_0002057c;
      }
      FUN_0001a6ec(*(undefined4 *)(param_1 + 0x14),1,iVar4 + 0x204c0,uVar5,dVar11);
      dbus_connection_close(uVar9);
    }
  }
  uVar5 = 0xffffffff;
LAB_0002057c:
  FUN_00028570(*(undefined4 *)(param_1 + 0x1c),uVar5);
  if (local_2c != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_000205d0 @ 000205d0 size=928 ===== */

void FUN_000205d0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 auStack_34 [4];
  undefined4 local_30;
  int local_24;
  
  piVar4 = *(int **)(DAT_00020970 + 0x205e0 + DAT_00020974);
  local_24 = *piVar4;
  piVar1 = (int *)dbus_malloc0(0x5c);
  if (piVar1 == (int *)0x0) {
LAB_00020650:
    FUN_0001a6ec(*(undefined4 *)(param_1 + 0x14),1,DAT_00020980 + 0x20664);
    if (piVar1 == (int *)0x0) {
      uVar3 = 0;
      goto LAB_00020954;
    }
  }
  else {
    *piVar1 = param_1;
    piVar1[2] = param_2;
    _dbus_get_monotonic_time(piVar1 + 0xf,piVar1 + 0x10);
    iVar2 = dbus_connection_set_data
                      (param_2,*(undefined4 *)(DAT_00020978 + 0x20634),piVar1,DAT_0002097c + 0x20638
                      );
    if (iVar2 == 0) {
      dbus_free(piVar1);
      piVar1 = (int *)0x0;
      goto LAB_00020650;
    }
    dbus_connection_set_route_peer_messages(param_2,1);
    dbus_error_init(auStack_34);
    iVar2 = FUN_00029a2c(param_2,auStack_34);
    piVar1[0xd] = iVar2;
    iVar2 = dbus_error_is_set(auStack_34);
    if (iVar2 == 0) {
      iVar2 = FUN_00019d38(param_2,auStack_34);
      piVar1[0xe] = iVar2;
      iVar2 = dbus_error_is_set(auStack_34);
      if (iVar2 == 0) {
        iVar2 = dbus_connection_set_watch_functions
                          (param_2,DAT_00020998 + 0x20808,DAT_00020994 + 0x20804,
                           DAT_00020990 + 0x20800,param_2,0);
        if ((iVar2 != 0) &&
           (iVar2 = dbus_connection_set_timeout_functions
                              (param_2,DAT_000209a0 + 0x20830,DAT_0002099c + 0x2082c,0,param_2,0),
           iVar2 != 0)) {
          dbus_connection_set_unix_user_function(param_2,DAT_000209a4 + 0x20850,0,0);
          uVar3 = FUN_0001a658(*(undefined4 *)(param_1 + 0x14));
          dbus_connection_set_dispatch_status_function(param_2,DAT_000209a8 + 0x20870,uVar3,0);
          iVar2 = _dbus_list_alloc_link(param_2);
          piVar1[1] = iVar2;
          if ((iVar2 != 0) && (iVar2 = FUN_0002441c(param_2), iVar2 != 0)) {
            iVar2 = dbus_connection_get_dispatch_status(param_2);
            if (iVar2 != 1) {
              uVar3 = FUN_0001a658(*(undefined4 *)(param_1 + 0x14));
              iVar2 = FUN_0002ea40(uVar3,param_2);
              if (iVar2 == 0) {
                FUN_00024444(param_2);
                goto LAB_00020650;
              }
            }
            iVar2 = _dbus_timeout_new(100,DAT_000209ac + 0x208e0,param_2,0);
            piVar1[0x15] = iVar2;
            if (iVar2 != 0) {
              _dbus_timeout_disable();
              uVar3 = FUN_0001a658(*(undefined4 *)(param_1 + 0x14));
              iVar2 = FUN_0002e93c(uVar3,piVar1[0x15]);
              if (iVar2 != 0) {
                _dbus_connection_set_pending_fds_function(param_2,DAT_000209b0 + 0x2091c,param_2);
                _dbus_list_append_link(param_1 + 0xc,piVar1[1]);
                *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
                dbus_connection_ref(param_2);
                FUN_00020464(param_1);
                FUN_0001bbc4(*(undefined4 *)(*piVar1 + 0x14));
                uVar3 = 1;
                goto LAB_00020954;
              }
            }
          }
        }
        goto LAB_00020650;
      }
      iVar2 = DAT_0002098c + 0x207e4;
    }
    else {
      iVar2 = DAT_00020984 + 0x206bc;
    }
    FUN_0001a6ec(*(undefined4 *)(param_1 + 0x14),1,iVar2,local_30);
    dbus_error_free(auStack_34);
  }
  piVar1[0xd] = 0;
  if (piVar1[0xe] != 0) {
    FUN_00019d30();
  }
  piVar1[0xe] = 0;
  dbus_connection_set_watch_functions(param_2,0,0,0,param_2,0);
  dbus_connection_set_timeout_functions(param_2,0,0,0,param_2,0);
  dbus_connection_set_unix_user_function(param_2,0,0);
  dbus_connection_set_windows_user_function(param_2,0,0);
  dbus_connection_set_dispatch_status_function(param_2,0,0);
  if (piVar1[0x15] != 0) {
    _dbus_timeout_unref();
  }
  piVar1[0x15] = 0;
  _dbus_connection_set_pending_fds_function(param_2,0,0);
  if (piVar1[1] != 0) {
    _dbus_list_free_link();
    piVar1[1] = 0;
  }
  dbus_connection_set_data(param_2,*(undefined4 *)(DAT_00020988 + 0x207a8),0);
  uVar3 = 0;
LAB_00020954:
  if (local_24 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== FUN_000209b4 @ 000209b4 size=120 ===== */

void FUN_000209b4(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_18;
  int local_14;
  
  piVar3 = *(int **)(DAT_00020a2c + 0x209c8 + DAT_00020a30);
  local_14 = *piVar3;
  *param_2 = 0;
  *param_3 = 0;
  local_18 = param_1;
  iVar1 = dbus_connection_get_unix_user(param_1,&local_18);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    iVar1 = thunk_FUN_0003153c(local_18,param_2,param_3);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = 1;
    }
  }
  if (local_14 == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



/* ===== FUN_00020acc @ 00020acc size=24 ===== */

undefined4 FUN_00020acc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = dbus_connection_get_data(param_1,*(undefined4 *)(DAT_00020ae4 + 0x20adc));
  return *(undefined4 *)(iVar1 + 0x2c);
}



/* ===== FUN_00020aec @ 00020aec size=88 ===== */

void FUN_00020aec(int param_1,code *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_000201f4();
  if (iVar2 == 0) {
    return;
  }
  iVar2 = _dbus_list_get_first_link(param_1 + 0xc);
  do {
    if (iVar2 == 0) {
      return;
    }
    puVar1 = (undefined4 *)(iVar2 + 8);
    iVar2 = *(int *)(iVar2 + 4);
    if (iVar2 == *(int *)(param_1 + 0xc)) {
      iVar2 = 0;
    }
    iVar3 = (*param_2)(*puVar1,param_3);
  } while (iVar3 != 0);
  return;
}



/* ===== FUN_00020b4c @ 00020b4c size=16 ===== */

void FUN_00020b4c(int param_1)

{
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  return;
}



/* ===== FUN_00020b5c @ 00020b5c size=48 ===== */

bool FUN_00020b5c(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)dbus_connection_get_data(param_1,*(undefined4 *)(DAT_00020b8c + 0x20b6c));
  iVar2 = piVar1[0x11];
  iVar3 = *(int *)(*piVar1 + 0x20);
  if (iVar2 != iVar3) {
    piVar1[0x11] = iVar3;
  }
  return iVar2 != iVar3;
}



/* ===== FUN_00020b90 @ 00020b90 size=28 ===== */

undefined4 FUN_00020b90(undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)dbus_connection_get_data(param_1,*(undefined4 *)(DAT_00020bac + 0x20ba0));
  return *(undefined4 *)(*piVar1 + 0x14);
}



/* ===== FUN_00020bb0 @ 00020bb0 size=24 ===== */

undefined4 FUN_00020bb0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)dbus_connection_get_data(param_1,*(undefined4 *)(DAT_00020bc8 + 0x20bc0));
  return *puVar1;
}



/* ===== FUN_00020bcc @ 00020bcc size=32 ===== */

void FUN_00020bcc(undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)dbus_connection_get_data(param_1,*(undefined4 *)(DAT_00020bec + 0x20bdc));
  FUN_0001a638(*(undefined4 *)(*piVar1 + 0x14));
  return;
}



/* ===== FUN_00020bf0 @ 00020bf0 size=32 ===== */

void FUN_00020bf0(undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)dbus_connection_get_data(param_1,*(undefined4 *)(DAT_00020c10 + 0x20c00));
  FUN_0001a648(*(undefined4 *)(*piVar1 + 0x14));
  return;
}



/* ===== FUN_00020c14 @ 00020c14 size=32 ===== */

void FUN_00020c14(undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)dbus_connection_get_data(param_1,*(undefined4 *)(DAT_00020c34 + 0x20c24));
  FUN_0001a650(*(undefined4 *)(*piVar1 + 0x14));
  return;
}



/* ===== FUN_00020c38 @ 00020c38 size=24 ===== */

undefined4 FUN_00020c38(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = dbus_connection_get_data(param_1,*(undefined4 *)(DAT_00020c50 + 0x20c48));
  return *(undefined4 *)(iVar1 + 0x34);
}



/* ===== FUN_00020c7c @ 00020c7c size=32 ===== */

bool FUN_00020c7c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = dbus_connection_get_data(param_1,*(undefined4 *)(DAT_00020c9c + 0x20c8c));
  return *(int *)(iVar1 + 0x1c) != 0;
}



/* ===== FUN_00020ca0 @ 00020ca0 size=60 ===== */

int FUN_00020ca0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = dbus_connection_get_data(param_1,*(undefined4 *)(DAT_00020cdc + 0x20cb4));
  iVar2 = FUN_00020c7c(param_1);
  if (iVar2 != 0) {
    return *(int *)(iVar1 + 0x30);
  }
  return (int)&DAT_00020cdc + DAT_00020ce0;
}



/* ===== FUN_00020d68 @ 00020d68 size=244 ===== */

undefined4 FUN_00020d68(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = dbus_connection_get_data(param_1,*(undefined4 *)(DAT_00020e5c + 0x20d7c));
  if (*(int *)(iVar1 + 0x28) == 0) {
    iVar2 = dbus_connection_preallocate_send(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    iVar3 = dbus_message_new(3);
    if (iVar3 == 0) {
      dbus_connection_free_preallocated_send(param_1,iVar2);
    }
    else {
      iVar4 = dbus_message_set_error_name(iVar3,DAT_00020e60 + 0x20dd4);
      if (((iVar4 != 0) &&
          (iVar4 = dbus_message_set_destination(iVar3,*(undefined4 *)(iVar1 + 0x1c)), iVar4 != 0))
         && (iVar4 = dbus_message_set_sender(iVar3,DAT_00020e64 + 0x20e18), iVar4 != 0)) {
        iVar4 = dbus_message_set_reply_serial(iVar3,0xe);
        if (iVar4 == 0) {
          dbus_connection_free_preallocated_send(param_1,iVar2);
          dbus_message_unref(iVar3);
          return 0;
        }
        *(int *)(iVar1 + 0x24) = iVar3;
        *(int *)(iVar1 + 0x28) = iVar2;
        goto LAB_00020e54;
      }
      dbus_connection_free_preallocated_send(param_1,iVar2);
      dbus_message_unref(iVar3);
    }
    uVar5 = 0;
  }
  else {
LAB_00020e54:
    uVar5 = 1;
  }
  return uVar5;
}



/* ===== FUN_00020e68 @ 00020e68 size=136 ===== */

void FUN_00020e68(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar1 = (int *)dbus_connection_get_data(param_1,*(undefined4 *)(DAT_00020ef0 + 0x20e7c));
  uVar3 = *(undefined4 *)(*piVar1 + 0x14);
  uVar2 = FUN_00020ca0(param_1);
  FUN_0001a6ec(uVar3,1,DAT_00020ef4 + 0x20eac,uVar2);
  iVar4 = piVar1[9];
  uVar2 = dbus_message_get_serial(param_2);
  dbus_message_set_reply_serial(iVar4,uVar2);
  dbus_connection_send_preallocated(param_1,piVar1[10],piVar1[9],0);
  dbus_message_unref(piVar1[9]);
  piVar1[9] = 0;
  piVar1[10] = 0;
  return;
}



/* ===== FUN_00020ef8 @ 00020ef8 size=116 ===== */

void FUN_00020ef8(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)dbus_connection_get_data(param_1,*(undefined4 *)(DAT_00020f6c + 0x20f0c));
  _dbus_list_append_link(piVar1 + 5,param_2);
  iVar2 = piVar1[6] + 1;
  if (piVar1[0x12] < iVar2) {
    piVar1[0x12] = iVar2;
  }
  piVar1[6] = iVar2;
  if (*(int *)(*piVar1 + 0x38) < iVar2) {
    *(int *)(*piVar1 + 0x38) = iVar2;
  }
  *(int *)(*piVar1 + 0x30) = *(int *)(*piVar1 + 0x30) + 1;
  iVar2 = *piVar1;
  if (*(int *)(iVar2 + 0x34) < *(int *)(iVar2 + 0x30)) {
    *(int *)(iVar2 + 0x34) = *(int *)(iVar2 + 0x30);
  }
  return;
}



/* ===== FUN_00020f70 @ 00020f70 size=48 ===== */

undefined4 FUN_00020f70(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = _dbus_list_alloc_link(param_2);
  if (iVar1 != 0) {
    FUN_00020ef8(param_1);
    return 1;
  }
  return 0;
}



/* ===== FUN_00020fa0 @ 00020fa0 size=68 ===== */

void FUN_00020fa0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)dbus_connection_get_data(param_1,*(undefined4 *)(DAT_00020fe4 + 0x20fb4));
  _dbus_list_remove_last(piVar1 + 5,param_2);
  piVar1[6] = piVar1[6] + -1;
  *(int *)(*piVar1 + 0x30) = *(int *)(*piVar1 + 0x30) + -1;
  return;
}



/* ===== FUN_00020fe8 @ 00020fe8 size=24 ===== */

undefined4 FUN_00020fe8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = dbus_connection_get_data(param_1,*(undefined4 *)(DAT_00021000 + 0x20ff8));
  return *(undefined4 *)(iVar1 + 0x18);
}



/* ===== FUN_00021004 @ 00021004 size=116 ===== */

void FUN_00021004(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)dbus_connection_get_data(param_1,*(undefined4 *)(DAT_00021078 + 0x21018));
  _dbus_list_append_link(piVar1 + 3,param_2);
  iVar2 = piVar1[4] + 1;
  if (piVar1[0x13] < iVar2) {
    piVar1[0x13] = iVar2;
  }
  piVar1[4] = iVar2;
  if (*(int *)(*piVar1 + 0x44) < iVar2) {
    *(int *)(*piVar1 + 0x44) = iVar2;
  }
  *(int *)(*piVar1 + 0x3c) = *(int *)(*piVar1 + 0x3c) + 1;
  iVar2 = *piVar1;
  if (*(int *)(iVar2 + 0x40) < *(int *)(iVar2 + 0x3c)) {
    *(int *)(iVar2 + 0x40) = *(int *)(iVar2 + 0x3c);
  }
  return;
}



/* ===== FUN_0002107c @ 0002107c size=48 ===== */

undefined4 FUN_0002107c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = _dbus_list_alloc_link(param_2);
  if (iVar1 != 0) {
    FUN_00021004(param_1);
    return 1;
  }
  return 0;
}



/* ===== FUN_000210ac @ 000210ac size=68 ===== */

void FUN_000210ac(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)dbus_connection_get_data(param_1,*(undefined4 *)(DAT_000210f0 + 0x210c0));
  _dbus_list_remove_last(piVar1 + 3,param_2);
  piVar1[4] = piVar1[4] + -1;
  *(int *)(*piVar1 + 0x3c) = *(int *)(*piVar1 + 0x3c) + -1;
  return;
}



/* ===== FUN_000210f4 @ 000210f4 size=24 ===== */

undefined4 FUN_000210f4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = dbus_connection_get_data(param_1,*(undefined4 *)(DAT_0002110c + 0x21104));
  return *(undefined4 *)(iVar1 + 0x10);
}



/* ===== FUN_00021110 @ 00021110 size=888 ===== */

void FUN_00021110(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  undefined1 auStack_34 [16];
  int local_24;
  
  iVar5 = DAT_00021488 + 0x21130;
  piVar6 = *(int **)(iVar5 + DAT_0002148c);
  local_24 = *piVar6;
  piVar2 = (int *)dbus_connection_get_data(param_1,*(undefined4 *)(DAT_00021490 + 0x21148));
  iVar3 = _dbus_string_copy_data(param_2,piVar2 + 7);
  if (iVar3 == 0) {
    dbus_set_error_const(param_3,DAT_00021498 + 0x21178,*(undefined4 *)(iVar5 + DAT_00021494));
    uVar4 = 0;
    goto LAB_00021180;
  }
  iVar3 = FUN_0001a678(*(undefined4 *)(*piVar2 + 0x14),param_1,param_3);
  piVar2[0xb] = iVar3;
  if (iVar3 == 0) {
    dbus_free(piVar2[7]);
    piVar2[7] = 0;
    uVar4 = 0;
    goto LAB_00021180;
  }
  iVar3 = dbus_connection_get_unix_user(param_1,&local_48);
  if ((iVar3 == 0) || (iVar3 = FUN_0001fff4(*piVar2,local_48,1), iVar3 != 0)) {
    local_3c = 0;
    local_38 = 0;
    iVar3 = _dbus_string_init(auStack_34);
    if (iVar3 != 0) {
      iVar3 = dbus_connection_get_unix_user(param_1,&local_44);
      bVar1 = false;
      if (iVar3 == 0) {
LAB_00021234:
        iVar3 = dbus_connection_get_unix_process_id(param_1,&local_40);
        if (iVar3 == 0) {
LAB_00021298:
          iVar3 = dbus_connection_get_windows_user(param_1,&local_3c);
          if (iVar3 == 0) {
LAB_000212e8:
            iVar3 = _dbus_connection_get_linux_security_label(param_1,&local_38);
            if (iVar3 == 0) {
LAB_000212fc:
              iVar3 = _dbus_string_steal_data(auStack_34,piVar2 + 0xc);
              if (iVar3 != 0) {
                uVar4 = 1;
                _dbus_string_free(auStack_34);
                _dbus_list_unlink(*piVar2 + 0xc,piVar2[1]);
                *(int *)(*piVar2 + 0x10) = *(int *)(*piVar2 + 0x10) + -1;
                _dbus_list_append_link(*piVar2 + 4,piVar2[1]);
                *(int *)(*piVar2 + 8) = *(int *)(*piVar2 + 8) + 1;
                FUN_0001bbc4(*(undefined4 *)(*piVar2 + 0x14));
                FUN_00020464(*piVar2);
                goto LAB_00021180;
              }
            }
            else if ((!bVar1) || (iVar3 = _dbus_string_append_byte(auStack_34,0x20), iVar3 != 0)) {
              iVar3 = _dbus_string_append_printf(auStack_34,DAT_000214ac + 0x21448,local_38);
              dbus_free(local_38);
              local_38 = 0;
              if (iVar3 != 0) goto LAB_000212fc;
            }
          }
          else if ((!bVar1) || (iVar3 = _dbus_string_append_byte(auStack_34,0x20), iVar3 != 0)) {
            iVar3 = _dbus_string_append_printf(auStack_34,DAT_000214a4 + 0x212c8,local_3c);
            dbus_free(local_3c);
            local_3c = 0;
            if (iVar3 != 0) {
              bVar1 = true;
              goto LAB_000212e8;
            }
          }
        }
        else if (((!bVar1) || (iVar3 = _dbus_string_append_byte(auStack_34,0x20), iVar3 != 0)) &&
                (iVar3 = _dbus_string_append_printf(auStack_34,DAT_000214a0 + 0x21264,local_40),
                iVar3 != 0)) {
          FUN_000308b4(local_40,auStack_34,0x32,0);
          iVar3 = _dbus_string_append_byte(auStack_34,0x22);
          if (iVar3 != 0) {
            bVar1 = true;
            goto LAB_00021298;
          }
        }
      }
      else {
        iVar3 = _dbus_string_append_printf(auStack_34,DAT_0002149c + 0x21228,local_44);
        if (iVar3 != 0) {
          bVar1 = true;
          goto LAB_00021234;
        }
      }
      _dbus_string_free(auStack_34);
      if (local_38 != 0) {
        dbus_free();
      }
      if (local_3c != 0) {
        dbus_free();
      }
    }
  }
  dbus_set_error_const(param_3,DAT_000214a8 + 0x2139c,*(undefined4 *)(iVar5 + DAT_00021494));
  dbus_free(piVar2[7]);
  piVar2[7] = 0;
  if (piVar2[0xb] != 0) {
    FUN_00028f38();
  }
  piVar2[0xb] = 0;
  uVar4 = 0;
LAB_00021180:
  if (local_24 != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}



/* ===== FUN_000214b0 @ 000214b0 size=120 ===== */

undefined4 FUN_000214b0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = DAT_00021528;
  iVar2 = _dbus_list_get_first_link(param_1 + 4);
  while( true ) {
    if (iVar2 == 0) {
      return 1;
    }
    uVar5 = *(undefined4 *)(iVar2 + 8);
    iVar3 = dbus_connection_get_data(uVar5,*(undefined4 *)(iVar1 + 0x214d0));
    FUN_00028f38(*(undefined4 *)(iVar3 + 0x2c));
    iVar4 = FUN_0001a678(*(undefined4 *)(param_1 + 0x14),uVar5,param_2);
    *(int *)(iVar3 + 0x2c) = iVar4;
    if (iVar4 == 0) break;
    iVar2 = *(int *)(iVar2 + 4);
    if (iVar2 == *(int *)(param_1 + 4)) {
      return 1;
    }
  }
  return 0;
}



/* ===== FUN_0002152c @ 0002152c size=24 ===== */

undefined4 FUN_0002152c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = dbus_connection_get_data(param_1,*(undefined4 *)(DAT_00021544 + 0x2153c));
  return *(undefined4 *)(iVar1 + 0x1c);
}



/* ===== FUN_00021548 @ 00021548 size=264 ===== */

void FUN_00021548(int param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int local_28;
  int local_24;
  int *piStack_20;
  
  piVar5 = *(int **)(DAT_00021650 + 0x21568 + DAT_00021654);
  local_24 = *piVar5;
  local_28 = param_1;
  piStack_20 = param_3;
  iVar2 = FUN_0001a698(*(undefined4 *)(param_1 + 0x14));
  if (*(int *)(param_1 + 8) < iVar2) {
    iVar2 = dbus_connection_get_unix_user(param_2,&local_28);
    if (iVar2 != 0) {
      iVar2 = FUN_0001a6a8(*(undefined4 *)(param_1 + 0x14));
      iVar4 = _dbus_hash_table_lookup_uintptr(*(undefined4 *)(param_1 + 0x18),local_28);
      if (iVar2 <= iVar4) {
        if (param_3 != (int *)0x0) {
          *param_3 = DAT_00021664 + 0x21620;
        }
        iVar1 = DAT_0002166c;
        iVar4 = DAT_00021668;
        if (param_4 != (int *)0x0) {
          *param_4 = iVar2;
        }
        dbus_set_error(param_5,iVar1 + 0x21644,iVar4 + 0x21640,local_28);
        goto LAB_000215bc;
      }
    }
    uVar3 = 1;
  }
  else {
    if (param_3 != (int *)0x0) {
      *param_3 = DAT_00021658 + 0x2159c;
    }
    iVar1 = DAT_00021660;
    iVar4 = DAT_0002165c;
    if (param_4 != (int *)0x0) {
      *param_4 = iVar2;
    }
    dbus_set_error(param_5,iVar1 + 0x215bc,iVar4 + 0x215b8);
LAB_000215bc:
    uVar3 = 0;
  }
  if (local_24 == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== FUN_00021670 @ 00021670 size=28 ===== */

void FUN_00021670(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = dbus_malloc0(0xc);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = param_1;
  }
  return;
}



/* ===== FUN_0002168c @ 0002168c size=8 ===== */

undefined4 FUN_0002168c(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



/* ===== FUN_00021694 @ 00021694 size=276 ===== */

undefined4 FUN_00021694(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = dbus_connection_get_is_connected(param_2);
  if (iVar2 != 0) {
    iVar2 = dbus_connection_get_data(param_2,*(undefined4 *)(DAT_000217a8 + 0x216d0));
    piVar3 = (int *)dbus_malloc(0xc);
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    iVar4 = dbus_connection_preallocate_send(param_2);
    piVar3[2] = iVar4;
    if (iVar4 == 0) {
      dbus_free(piVar3);
      return 0;
    }
    dbus_message_ref(param_3);
    piVar3[1] = param_3;
    iVar5 = iVar2 + 0x20;
    *piVar3 = param_1;
    iVar4 = _dbus_list_prepend(iVar5,piVar3);
    if (iVar4 == 0) {
LAB_00021734:
      FUN_0001ff8c(param_2,piVar3);
      return 0;
    }
    iVar4 = _dbus_list_get_first_link(iVar5);
    iVar4 = *(int *)(iVar4 + 4);
    if (iVar4 == *(int *)(iVar2 + 0x20)) {
LAB_0002175c:
      iVar2 = _dbus_list_prepend(param_1,param_2);
      if (iVar2 == 0) {
        _dbus_list_remove(iVar5,piVar3);
        goto LAB_00021734;
      }
    }
    else {
      do {
        if (iVar4 == 0) goto LAB_0002175c;
        puVar1 = (undefined4 *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (*(int *)(iVar2 + 0x20) == iVar4) {
          iVar4 = 0;
        }
      } while (param_1 != *(int *)*puVar1);
    }
  }
  return 1;
}



/* ===== FUN_000217ac @ 000217ac size=232 ===== */

void FUN_000217ac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int local_28;
  int local_24;
  
  piVar4 = *(int **)(DAT_00021894 + 0x217cc + DAT_00021898);
  local_24 = *piVar4;
  local_28 = 0;
  iVar1 = FUN_0001a640(*(undefined4 *)(param_1 + 4));
  if (*(int *)(iVar1 + 0x28) == 0) {
    uVar3 = 1;
  }
  else {
    iVar1 = FUN_0002d124(*(undefined4 *)(iVar1 + 0x2c),iVar1,param_2,param_3,param_4,&local_28);
    if (iVar1 == 0) {
LAB_00021824:
      uVar3 = 0;
    }
    else {
      iVar1 = _dbus_list_get_first_link(&local_28);
      do {
        if (iVar1 == 0) break;
        iVar2 = FUN_00021694(param_1,*(undefined4 *)(iVar1 + 8),param_4);
        if (iVar2 == 0) goto LAB_00021824;
        iVar1 = *(int *)(iVar1 + 4);
      } while (iVar1 != local_28);
      uVar3 = 1;
    }
    _dbus_list_clear(&local_28);
  }
  if (local_24 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== FUN_0002189c @ 0002189c size=128 ===== */

undefined4 FUN_0002189c(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0001a640(*(undefined4 *)(param_1 + 4));
  if (*(int *)(iVar1 + 0x28) == 0) {
    uVar3 = 1;
  }
  else {
    iVar1 = dbus_message_new_error(param_4,*param_3,param_3[1]);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      iVar2 = dbus_message_set_sender(iVar1,DAT_0002191c + 0x218ec);
      uVar3 = 0;
      if (iVar2 != 0) {
        uVar3 = FUN_000217ac(param_1,0,param_2,iVar1);
      }
      dbus_message_unref(iVar1);
    }
  }
  return uVar3;
}



/* ===== FUN_00021920 @ 00021920 size=336 ===== */

void FUN_00021920(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_2c;
  undefined4 uStack_28;
  uint local_24;
  undefined4 uStack_20;
  int local_1c;
  
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piVar3 = *(int **)(DAT_00021a70 + 0x21938 + DAT_00021a74);
  local_2c = 0;
  local_1c = *piVar3;
  local_24 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8) | 1;
  iVar1 = dbus_message_set_sender(param_3,DAT_00021a78 + 0x2196c);
  if (iVar1 != 0) {
    iVar1 = FUN_00020c7c(param_2);
    if (iVar1 != 0) {
      uVar2 = FUN_0002152c(param_2);
      iVar1 = dbus_message_set_destination(param_3,uVar2);
      if (iVar1 == 0) goto LAB_0002197c;
    }
    dbus_message_set_no_reply(param_3,1);
    iVar1 = FUN_000217ac(param_1,0,param_2,param_3);
    if (iVar1 != 0) {
      iVar1 = FUN_0001b5fc(*(undefined4 *)(param_1 + 4),param_1,0,param_2,param_2,param_3,0,
                           &local_2c);
      if (iVar1 == 0) {
        iVar1 = FUN_0002189c(param_1,param_2,&local_2c,param_3);
        if (iVar1 == 0) {
          FUN_0001a6ec(*(undefined4 *)(param_1 + 4),1,DAT_00021a7c + 0x21a24);
        }
        dbus_error_free(&local_2c);
        uVar2 = 1;
      }
      else {
        uVar2 = FUN_00021694(param_1,param_2,param_3);
      }
      goto LAB_00021980;
    }
  }
LAB_0002197c:
  uVar2 = 0;
LAB_00021980:
  if (local_1c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



/* ===== FUN_00021a80 @ 00021a80 size=188 ===== */

void FUN_00021a80(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  puVar5 = (undefined4 *)(DAT_00021b3c + 0x21a94);
  while (iVar1 = _dbus_list_pop_first(param_1), iVar1 != 0) {
    iVar2 = dbus_connection_get_data(iVar1,*puVar5);
    iVar3 = _dbus_list_get_first_link(iVar2 + 0x20);
    while (iVar3 != 0) {
      piVar6 = (int *)(iVar3 + 4);
      piVar4 = *(int **)(iVar3 + 8);
      iVar3 = *piVar6;
      if (*piVar6 == *(int *)(iVar2 + 0x20)) {
        iVar3 = 0;
      }
      if (param_1 == *piVar4) {
        _dbus_list_remove_link(iVar2 + 0x20);
        FUN_0001ff8c(iVar1,piVar4);
      }
    }
  }
  iVar1 = param_1 + 8;
  _dbus_list_foreach(iVar1,DAT_00021b40 + 0x21ab8,0);
  _dbus_list_foreach(iVar1,DAT_00021b44 + 0x21acc,0);
  _dbus_list_clear(iVar1);
  dbus_free(param_1);
  return;
}



/* ===== FUN_00021b48 @ 00021b48 size=200 ===== */

void FUN_00021b48(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)(DAT_00021c10 + 0x21b60);
  while (iVar1 = _dbus_list_pop_first(param_1), iVar1 != 0) {
    iVar2 = dbus_connection_get_data(iVar1,*puVar5);
    piVar3 = (int *)_dbus_list_get_last_link(iVar2 + 0x20);
    while (piVar3 != (int *)0x0) {
      piVar4 = (int *)piVar3[2];
      if (piVar3 == (int *)*(int *)(iVar2 + 0x20)) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)*piVar3;
      }
      if (param_1 == *piVar4) {
        _dbus_list_remove_link(iVar2 + 0x20);
        dbus_connection_send_preallocated(iVar1,piVar4[2],piVar4[1],0);
        piVar4[2] = 0;
        FUN_0001ff8c(iVar1,piVar4);
      }
    }
  }
  _dbus_list_foreach(param_1 + 8,DAT_00021c14 + 0x21b84,0);
  _dbus_list_clear(param_1 + 8);
  dbus_free(param_1);
  return;
}



/* ===== FUN_00021c18 @ 00021c18 size=768 ===== */

void FUN_00021c18(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  undefined4 local_3c [4];
  int local_2c;
  
  piVar7 = *(int **)(DAT_00021f18 + 0x21c28 + DAT_00021f1c);
  local_2c = *piVar7;
  piVar1 = (int *)dbus_connection_get_data(param_1,*(undefined4 *)(DAT_00021f20 + 0x21c48));
  if (0 < piVar1[6]) {
    uVar2 = FUN_0001a650(*(undefined4 *)(*piVar1 + 0x14));
    FUN_0002d070(uVar2,param_1);
  }
  iVar8 = DAT_00021f24 + 0x21c7c;
  while (iVar3 = _dbus_list_get_last(piVar1 + 3), iVar3 != 0) {
    while( true ) {
      dbus_error_init(local_3c);
      while (iVar4 = FUN_00021670(*(undefined4 *)(*piVar1 + 0x14)), iVar4 == 0) {
        FUN_0002ea80();
      }
      iVar5 = FUN_0002a688(iVar3,param_1,iVar4,local_3c);
      if ((iVar5 != 0) || (iVar5 = dbus_error_has_name(local_3c,iVar8), iVar5 == 0)) break;
      dbus_error_free(local_3c);
      FUN_00021a80(iVar4);
      FUN_0002ea80();
    }
    FUN_00021b48(iVar4);
  }
  FUN_00024444(param_1);
  dbus_connection_set_watch_functions(param_1,0,0,0,param_1,0);
  dbus_connection_set_timeout_functions(param_1,0,0,0,param_1,0);
  dbus_connection_set_unix_user_function(param_1,0,0,0);
  dbus_connection_set_windows_user_function(param_1,0,0,0);
  dbus_connection_set_dispatch_status_function(param_1,0,0,0);
  if (piVar1[0x15] != 0) {
    uVar2 = FUN_0001a658(*(undefined4 *)(*piVar1 + 0x14));
    FUN_0002e9b0(uVar2,piVar1[0x15]);
    _dbus_timeout_unref(piVar1[0x15]);
  }
  piVar1[0x15] = 0;
  _dbus_connection_set_pending_fds_function(param_1,0);
  iVar8 = dbus_connection_get_data(param_1,*(undefined4 *)(DAT_00021f28 + 0x21dc4));
  while (puVar6 = (undefined4 *)_dbus_list_get_first(iVar8 + 0x20), puVar6 != (undefined4 *)0x0) {
    _dbus_list_remove(*puVar6,param_1);
    _dbus_list_remove(iVar8 + 0x20,puVar6);
    FUN_0001ff8c(param_1,puVar6);
  }
  if (piVar1[0x16] != 0) {
    if (*(int *)(*piVar1 + 0x2c) != 0) {
      FUN_0002d070(*(int *)(*piVar1 + 0x2c),param_1);
    }
    _dbus_list_remove_link(*piVar1 + 0x28,piVar1[0x16]);
    piVar1[0x16] = 0;
  }
  if (piVar1[1] != 0) {
    if (piVar1[7] == 0) {
      _dbus_list_remove_link(*piVar1 + 0xc);
      piVar1[1] = 0;
      *(int *)(*piVar1 + 0x10) = *(int *)(*piVar1 + 0x10) + -1;
      FUN_0001bbc4(*(undefined4 *)(*piVar1 + 0x14));
    }
    else {
      _dbus_list_remove_link(*piVar1 + 4);
      piVar1[1] = 0;
      *(int *)(*piVar1 + 8) = *(int *)(*piVar1 + 8) + -1;
      iVar8 = dbus_connection_get_unix_user(param_1,local_3c);
      if (iVar8 != 0) {
        FUN_0001fff4(*piVar1,local_3c[0],0xffffffff);
      }
    }
  }
  FUN_00020288(*piVar1 + 0x24,param_1);
  dbus_connection_set_data(param_1,*(undefined4 *)(DAT_00021f2c + 0x21e9c),0);
  dbus_connection_unref(param_1);
  if (local_2c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00021f30 @ 00021f30 size=212 ===== */

void FUN_00021f30(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    while (param_1[3] != 0) {
      uVar1 = *(undefined4 *)(param_1[3] + 8);
      dbus_connection_ref(uVar1);
      dbus_connection_close(uVar1);
      FUN_00021c18(uVar1);
      dbus_connection_unref(uVar1);
    }
    while (param_1[1] != 0) {
      uVar1 = *(undefined4 *)(param_1[1] + 8);
      dbus_connection_ref(uVar1);
      dbus_connection_close(uVar1);
      FUN_00021c18(uVar1);
      dbus_connection_unref(uVar1);
    }
    FUN_00028548(param_1[9]);
    uVar1 = FUN_0001a658(param_1[5]);
    FUN_0002e9b0(uVar1,param_1[7]);
    _dbus_timeout_unref(param_1[7]);
    _dbus_hash_table_unref(param_1[6]);
    if (param_1[0xb] != 0) {
      FUN_0002cd10();
    }
    dbus_free(param_1);
    dbus_connection_free_data_slot(DAT_00022004 + 0x21fdc);
    return;
  }
  return;
}



/* ===== FUN_00022168 @ 00022168 size=96 ===== */

undefined4
FUN_00022168(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = dbus_message_new_error(param_4,*param_3,param_3[1]);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_00021920(param_1,param_2,iVar1);
    if (iVar2 == 0) {
      dbus_message_unref(iVar1);
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
      dbus_message_unref(iVar1);
    }
  }
  return uVar3;
}



/* ===== FUN_000221c8 @ 000221c8 size=88 ===== */

undefined4 FUN_000221c8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)dbus_malloc(0xc);
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    *puVar1 = param_2;
    puVar1[1] = param_4;
    puVar1[2] = param_3;
    iVar2 = _dbus_list_prepend(param_1 + 8,puVar1);
    if (iVar2 == 0) {
      dbus_free(puVar1);
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}



/* ===== FUN_00022220 @ 00022220 size=572 ===== */

undefined4
FUN_00022220(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  
  iVar9 = DAT_0002245c + 0x22248;
  iVar1 = dbus_message_get_no_reply(param_5);
  if (iVar1 == 0) {
    iVar2 = dbus_message_get_serial(param_5);
    iVar3 = _dbus_list_get_first_link(*(undefined4 *)(param_1 + 0x24));
    iVar1 = 0;
    while (iVar3 != 0) {
      iVar7 = *(int *)(iVar3 + 8);
      if (((*(int *)(iVar7 + 0x10) == iVar2) && (*(int *)(iVar7 + 8) == param_3)) &&
         (*(int *)(iVar7 + 0xc) == param_4)) {
        iVar9 = DAT_0002246c + 0x22304;
        iVar1 = DAT_00022470 + 0x22308;
        goto LAB_00022304;
      }
      iVar3 = FUN_00028784(*(undefined4 *)(param_1 + 0x24),iVar3);
      if (*(int *)(iVar7 + 8) == param_3) {
        iVar1 = iVar1 + 1;
      }
    }
    iVar3 = FUN_0001a6c8(*(undefined4 *)(param_1 + 0x14));
    if (iVar3 <= iVar1) {
      uVar8 = *(undefined4 *)(param_1 + 0x14);
      uVar4 = FUN_0002152c(param_3);
      uVar5 = FUN_00020ca0(param_3);
      FUN_0001a6ec(uVar8,1,DAT_00022460 + 0x222b0,uVar4,uVar5,iVar3);
      iVar9 = DAT_00022464 + 0x222c8;
      iVar1 = DAT_00022468 + 0x222cc;
LAB_00022304:
      dbus_set_error(param_6,iVar1,iVar9);
      return 0;
    }
    iVar1 = dbus_malloc0(0x14);
    if (iVar1 == 0) {
      dbus_set_error_const(param_6,DAT_00022478 + 0x22358,*(undefined4 *)(iVar9 + DAT_00022474));
      return 0;
    }
    *(int *)(iVar1 + 8) = param_3;
    *(int *)(iVar1 + 0xc) = param_4;
    *(int *)(iVar1 + 0x10) = iVar2;
    piVar6 = (int *)dbus_malloc0(8);
    if (piVar6 == (int *)0x0) {
      dbus_set_error_const(param_6,DAT_0002247c + 0x22398,*(undefined4 *)(iVar9 + DAT_00022474));
    }
    else {
      iVar2 = FUN_00028724(*(undefined4 *)(param_1 + 0x24),iVar1);
      if (iVar2 == 0) {
        dbus_set_error_const(param_6,DAT_00022480 + 0x223d8,*(undefined4 *)(iVar9 + DAT_00022474));
      }
      else {
        iVar2 = FUN_000221c8(param_2,DAT_00022488 + 0x22408,piVar6,DAT_00022484 + 0x22404);
        if (iVar2 != 0) {
          *piVar6 = iVar1;
          piVar6[1] = param_1;
          _dbus_get_monotonic_time(iVar1,iVar1 + 4);
          goto LAB_00022454;
        }
        dbus_set_error_const(param_6,DAT_0002248c + 0x2242c,*(undefined4 *)(iVar9 + DAT_00022474));
        _dbus_list_remove(*(undefined4 *)(param_1 + 0x24),iVar1);
      }
      dbus_free(piVar6);
    }
    uVar4 = 0;
    dbus_free(iVar1);
  }
  else {
LAB_00022454:
    uVar4 = 1;
  }
  return uVar4;
}



/* ===== FUN_00022490 @ 00022490 size=292 ===== */

undefined4
FUN_00022490(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar1 = DAT_000225b4;
  iVar7 = param_1;
  uVar6 = param_2;
  iVar2 = dbus_message_get_reply_serial(param_5);
  iVar3 = _dbus_list_get_first_link(*(undefined4 *)(param_1 + 0x24));
  while( true ) {
    if (iVar3 == 0) {
      return 0;
    }
    iVar5 = *(int *)(iVar3 + 8);
    if (((*(int *)(iVar5 + 0x10) == iVar2) && (*(int *)(iVar5 + 8) == param_4)) &&
       (*(int *)(iVar5 + 0xc) == param_3)) break;
    iVar3 = FUN_00028784(*(undefined4 *)(param_1 + 0x24),iVar3);
  }
  piVar4 = (int *)dbus_malloc0(8);
  if (piVar4 == (int *)0x0) {
    uVar6 = *(undefined4 *)(iVar1 + 0x224b8 + DAT_000225c0);
    dbus_set_error_const(param_6,DAT_000225c8 + 0x225a4,uVar6,uVar6,iVar7,uVar6);
    return 0;
  }
  iVar2 = FUN_000221c8(param_2,DAT_000225bc + 0x22530,piVar4,DAT_000225b8 + 0x2252c,iVar7,uVar6);
  if (iVar2 == 0) {
    uVar6 = *(undefined4 *)(iVar1 + 0x224b8 + DAT_000225c0);
    dbus_set_error_const(param_6,DAT_000225c4 + 0x22550,uVar6,uVar6,iVar7,uVar6);
    dbus_free(piVar4);
    return 0;
  }
  *piVar4 = iVar3;
  piVar4[1] = param_1;
  _dbus_list_unlink(*(undefined4 *)(param_1 + 0x24),iVar3);
  return 1;
}



/* ===== FUN_000225cc @ 000225cc size=8 ===== */

undefined4 FUN_000225cc(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* ===== FUN_000225d4 @ 000225d4 size=8 ===== */

undefined4 FUN_000225d4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* ===== FUN_000225dc @ 000225dc size=8 ===== */

undefined4 FUN_000225dc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



/* ===== FUN_000225e4 @ 000225e4 size=8 ===== */

undefined4 FUN_000225e4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}



/* ===== FUN_000225ec @ 000225ec size=8 ===== */

undefined4 FUN_000225ec(int param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



/* ===== FUN_000225f4 @ 000225f4 size=8 ===== */

undefined4 FUN_000225f4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



/* ===== FUN_000225fc @ 000225fc size=8 ===== */

undefined4 FUN_000225fc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



/* ===== FUN_00022604 @ 00022604 size=8 ===== */

undefined4 FUN_00022604(int param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}



/* ===== FUN_0002260c @ 0002260c size=24 ===== */

undefined4 FUN_0002260c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = dbus_connection_get_data(param_1,*(undefined4 *)(DAT_00022624 + 0x2261c));
  return *(undefined4 *)(iVar1 + 0x48);
}



/* ===== FUN_00022628 @ 00022628 size=24 ===== */

undefined4 FUN_00022628(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = dbus_connection_get_data(param_1,*(undefined4 *)(DAT_00022640 + 0x22638));
  return *(undefined4 *)(iVar1 + 0x4c);
}



/* ===== FUN_00022644 @ 00022644 size=32 ===== */

bool FUN_00022644(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = dbus_connection_get_data(param_1,*(undefined4 *)(DAT_00022664 + 0x22654));
  return *(int *)(iVar1 + 0x58) != 0;
}



/* ===== FUN_00022668 @ 00022668 size=616 ===== */

void FUN_00022668(undefined4 param_1,int param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int local_30;
  int local_2c;
  
  iVar8 = DAT_000228d0 + 0x22688;
  piVar5 = *(int **)(iVar8 + DAT_000228d4);
  local_2c = *piVar5;
  piVar1 = (int *)dbus_connection_get_data(param_1,*(undefined4 *)(DAT_000228d8 + 0x226a8));
  iVar2 = _dbus_list_alloc_link(param_1);
  if (iVar2 == 0) {
    uVar6 = *(undefined4 *)(iVar8 + DAT_000228dc);
    iVar2 = DAT_000228e0 + 0x226d0;
LAB_000226d4:
    uVar7 = 0;
    dbus_set_error_const(param_4,iVar2,uVar6);
  }
  else {
    iVar9 = *(int *)(*piVar1 + 0x2c);
    if (iVar9 == 0) {
      iVar9 = FUN_0002cc4c();
      if (iVar9 == 0) {
LAB_00022754:
        _dbus_list_free_link(iVar2);
        uVar6 = *(undefined4 *)(iVar8 + DAT_000228dc);
        iVar2 = DAT_000228e4 + 0x22770;
        goto LAB_000226d4;
      }
      *(int *)(*piVar1 + 0x2c) = iVar9;
    }
    iVar3 = _dbus_list_get_first_link(param_3);
    do {
      if (iVar3 == 0) break;
      iVar4 = FUN_0002cd5c(iVar9,*(undefined4 *)(iVar3 + 8));
      if (iVar4 == 0) {
        FUN_0002d070(iVar9,param_1);
        goto LAB_00022754;
      }
      iVar3 = *(int *)(iVar3 + 4);
    } while (iVar3 != *param_3);
    iVar9 = _dbus_list_copy(piVar1 + 3,&local_30);
    if (iVar9 == 0) {
      if (*(int *)(*piVar1 + 0x2c) != 0) {
        FUN_0002d070(*(int *)(*piVar1 + 0x2c),param_1);
      }
      _dbus_list_free_link(iVar2);
      dbus_set_error_const(param_4,DAT_000228e8 + 0x227d8,*(undefined4 *)(iVar8 + DAT_000228dc));
      uVar7 = 0;
    }
    else {
      iVar8 = _dbus_list_get_first_link(&local_30);
      do {
        if (iVar8 == 0) break;
        iVar9 = FUN_0002a688(*(undefined4 *)(iVar8 + 8),param_1,param_2,param_4);
        if (iVar9 == 0) {
          if (*(int *)(*piVar1 + 0x2c) != 0) {
            FUN_0002d070(*(int *)(*piVar1 + 0x2c),param_1);
          }
          _dbus_list_free_link(iVar2);
          _dbus_list_clear(&local_30);
          uVar7 = 0;
          goto LAB_000226e0;
        }
        iVar8 = *(int *)(iVar8 + 4);
      } while (iVar8 != local_30);
      _dbus_list_clear(&local_30);
      FUN_0001a6ec(*(undefined4 *)(param_2 + 4),0,DAT_000228ec + 0x22874,piVar1[7],piVar1[0xc]);
      if (0 < piVar1[6]) {
        uVar7 = FUN_0001a650(*(undefined4 *)(*piVar1 + 0x14));
        FUN_0002d070(uVar7,param_1);
      }
      piVar1[0x16] = iVar2;
      uVar7 = 1;
      _dbus_list_append_link(*piVar1 + 0x28,iVar2);
      FUN_00020288(*piVar1 + 0x24,param_1);
    }
  }
LAB_000226e0:
  if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}



/* ===== FUN_000228f0 @ 000228f0 size=56 ===== */

bool FUN_000228f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar2 = 1;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xc) << 1;
  }
  iVar1 = dbus_realloc(*(undefined4 *)(param_1 + 8),iVar2 << 3);
  if (iVar1 != 0) {
    *(int *)(param_1 + 8) = iVar1;
    *(int *)(param_1 + 0xc) = iVar2;
  }
  return iVar1 != 0;
}



/* ===== FUN_00022928 @ 00022928 size=104 ===== */

void FUN_00022928(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x14) == -1) ||
     (iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + *(int *)(param_1 + 0x14) * 0x10),
     iVar1 == 0)) {
    dbus_set_error(param_4,param_3,DAT_00022994 + 0x2298c,*(undefined4 *)(param_1 + 0x20),param_2,
                   param_2,param_3);
  }
  else {
    dbus_set_error(param_4,param_3,DAT_00022990 + 0x22974,iVar1,*(undefined4 *)(param_1 + 0x20),
                   param_2,param_3);
  }
  return;
}



/* ===== FUN_00022998 @ 00022998 size=380 ===== */

char * FUN_00022998(undefined4 param_1,int *param_2,int param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  
  iVar7 = DAT_00022b14 + 0x229c0;
  uVar8 = param_1;
  piVar9 = param_2;
  pcVar3 = (char *)dbus_malloc((param_4 - param_3) + 1);
  pcVar4 = pcVar3;
  if (pcVar3 == (char *)0x0) {
    uVar6 = *(undefined4 *)(iVar7 + DAT_00022b18);
    dbus_set_error_const(param_5,DAT_00022b1c + 0x22a04,uVar6,uVar6,uVar8,uVar6);
  }
  else {
    while (param_3 < param_4) {
      cVar1 = *(char *)(*param_2 + param_3);
      if (cVar1 == '\0') {
        dbus_free(pcVar3);
        iVar5 = DAT_00022b20 + 0x22a48;
        iVar7 = DAT_00022b24 + 0x22a4c;
        goto LAB_00022a48;
      }
      iVar7 = param_3 + 1;
      if (cVar1 == '\\') {
        if (param_4 <= iVar7) {
          dbus_free(pcVar3);
          iVar5 = DAT_00022b28 + 0x22a8c;
          iVar7 = DAT_00022b2c + 0x22a90;
          goto LAB_00022a48;
        }
        bVar2 = *(byte *)(*param_2 + iVar7);
        if (bVar2 == 0x72) {
          *pcVar4 = '\r';
        }
        else if (bVar2 < 0x73) {
          if (bVar2 == 0x5c) {
            *pcVar4 = '\\';
          }
          else {
            if (bVar2 != 0x6e) {
LAB_00022ab0:
              dbus_free(pcVar3);
              iVar5 = DAT_00022b30 + 0x22acc;
              iVar7 = DAT_00022b34 + 0x22ad0;
LAB_00022a48:
              FUN_00022928(param_1,iVar7,iVar5,param_5,uVar8,piVar9);
              return (char *)0x0;
            }
            *pcVar4 = '\n';
          }
        }
        else if (bVar2 == 0x73) {
          *pcVar4 = ' ';
        }
        else {
          if (bVar2 != 0x74) goto LAB_00022ab0;
          *pcVar4 = '\t';
        }
        iVar7 = param_3 + 2;
      }
      else {
        *pcVar4 = cVar1;
      }
      pcVar4 = pcVar4 + 1;
      param_3 = iVar7;
    }
    *pcVar4 = '\0';
  }
  return pcVar3;
}



/* ===== FUN_00022b38 @ 00022b38 size=120 ===== */

void FUN_00022b38(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar6 = 0;
  while( true ) {
    iVar7 = param_1[1];
    if (*param_1 <= iVar6) break;
    iVar1 = iVar6 * 0x10;
    iVar5 = 0;
    iVar8 = iVar7 + iVar1;
    while( true ) {
      iVar4 = *(int *)(iVar8 + 8);
      if (*(int *)(iVar8 + 4) <= iVar5) break;
      iVar2 = iVar5 * 8;
      iVar3 = iVar5 * 8;
      iVar5 = iVar5 + 1;
      dbus_free(*(undefined4 *)(iVar4 + iVar3));
      dbus_free(*(undefined4 *)(iVar4 + iVar2 + 4));
    }
    iVar6 = iVar6 + 1;
    dbus_free();
    dbus_free(*(undefined4 *)(iVar7 + iVar1));
  }
  dbus_free(iVar7);
  dbus_free(param_1);
  return;
}



/* ===== FUN_00022bb0 @ 00022bb0 size=28 ===== */

void FUN_00022bb0(int param_1)

{
  FUN_00022b38(*(undefined4 *)(param_1 + 0x10));
  _dbus_string_free(param_1);
  return;
}



/* ===== FUN_00022bcc @ 00022bcc size=1904 ===== */

void FUN_00022bcc(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  char *pcVar8;
  char cVar9;
  int *piVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int local_80 [4];
  undefined1 auStack_70 [16];
  uint local_60;
  int local_50;
  int local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int *local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar15 = DAT_0002333c + 0x22bec;
  piVar10 = *(int **)(iVar15 + DAT_00023340);
  local_2c = *piVar10;
  iVar2 = FUN_0003049c(param_1,auStack_70,param_2);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    if (local_60 < 0x20001) {
      iVar2 = _dbus_string_init(&local_90);
      if (iVar2 == 0) {
        uVar11 = *(undefined4 *)(iVar15 + DAT_0002334c);
        iVar2 = DAT_00023350 + 0x22c60;
        piVar3 = (int *)0x0;
      }
      else {
        iVar2 = _dbus_file_get_contents(&local_90,param_1,param_2);
        if (iVar2 == 0) {
          _dbus_string_free(&local_90);
          piVar3 = (int *)0x0;
          goto LAB_00022c90;
        }
        iVar2 = _dbus_string_validate_utf8(&local_90,0,local_8c);
        if (iVar2 == 0) {
          _dbus_string_free(&local_90);
          dbus_set_error(param_2,DAT_00023358 + 0x22ce4,DAT_00023354 + 0x22ce0);
          piVar3 = (int *)0x0;
          goto LAB_00022c90;
        }
        piVar3 = (int *)dbus_malloc0(0xc);
        local_40 = piVar3;
        if (piVar3 != (int *)0x0) {
          local_50 = local_90;
          local_4c = local_8c;
          uStack_48 = uStack_88;
          uStack_44 = uStack_84;
          local_30 = 1;
          local_38 = 0;
          local_34 = local_8c;
          local_3c = -1;
          iVar2 = DAT_00023360 + 0x22d5c;
LAB_00022d5c:
          if (local_38 < local_34) {
            cVar1 = *(char *)(local_50 + local_38);
            pcVar8 = (char *)(local_50 + local_38);
            cVar9 = cVar1;
            if (cVar1 != '[') {
              while (cVar9 != '\0' && cVar9 != '\n') {
                if ((0x17 < (byte)(cVar9 - 9)) ||
                   ((~(DAT_00023378 >> (uint)(byte)(cVar9 - 9)) & 1) != 0)) {
                  if (cVar1 != '#') {
                    if (local_3c < 0) {
                      dbus_set_error(param_2,DAT_000233a8 + 0x23330,DAT_000233a4 + 0x2332c);
                      goto LAB_00022c30;
                    }
                    iVar5 = _dbus_string_find_eol(&local_50,local_38,&local_9c,&local_98);
                    iVar4 = local_38;
                    iVar16 = local_38;
                    if (iVar5 == 0) {
                      local_9c = local_34;
                    }
                    goto LAB_00023048;
                  }
                  break;
                }
                pcVar8 = pcVar8 + 1;
                cVar9 = *pcVar8;
              }
              iVar4 = _dbus_string_find_eol(&local_50,local_38,&local_94,local_80);
              if (iVar4 == 0) {
                local_94 = local_34;
              }
              iVar4 = local_80[0];
              local_38 = local_94;
              if (local_34 != local_94) goto LAB_000232ec;
              goto LAB_000230ac;
            }
            iVar4 = _dbus_string_find_eol(&local_50,local_38,&local_94,local_80);
            if (iVar4 == 0) {
              local_94 = local_34;
            }
            if ((local_94 - local_38 < 3) || (*(char *)(local_50 + local_94 + -1) != ']')) {
              iVar15 = DAT_00023364 + 0x22dec;
              iVar2 = DAT_00023368 + 0x22df0;
              goto LAB_00022dec;
            }
            iVar4 = FUN_00022998(&local_50,&local_50,local_38 + 1,local_94 + -1,param_2);
            piVar3 = local_40;
            if (iVar4 == 0) goto LAB_00023144;
            pbVar7 = (byte *)(iVar4 + -1);
            while( true ) {
              pbVar7 = pbVar7 + 1;
              uVar12 = (uint)*pbVar7;
              if (uVar12 == 0) break;
              if (0x5e < uVar12 - 0x20 || (uVar12 - 0x5b & 0xfd) == 0) {
                FUN_00022928(&local_50,DAT_00023374 + 0x22f50,DAT_00023370 + 0x22f4c,param_2);
                FUN_00022bb0(&local_50);
                dbus_free(iVar4);
                goto LAB_00022c30;
              }
            }
            iVar16 = local_40[2];
            if (iVar16 == *local_40) {
              if (iVar16 == 0) {
                iVar16 = 1;
              }
              else {
                iVar16 = iVar16 << 1;
              }
              iVar5 = dbus_realloc(local_40[1],iVar16 << 4);
              if (iVar5 != 0) {
                piVar3[1] = iVar5;
                piVar3[2] = iVar16;
                goto LAB_00022e68;
              }
            }
            else {
LAB_00022e68:
              iVar16 = _dbus_strdup(iVar4);
              if (iVar16 != 0) {
                iVar5 = *piVar3 * 0x10;
                *(int *)(piVar3[1] + *piVar3 * 0x10) = iVar16;
                *(undefined4 *)(piVar3[1] + iVar5 + 4) = 0;
                *(undefined4 *)(piVar3[1] + iVar5 + 8) = 0;
                *(undefined4 *)(piVar3[1] + iVar5 + 0xc) = 0;
                iVar16 = FUN_000228f0(piVar3[1] + iVar5);
                if (iVar16 == 0) {
                  dbus_free(*(undefined4 *)(piVar3[1] + iVar5));
                  *(undefined4 *)(piVar3[1] + iVar5) = 0;
                }
                else {
                  *piVar3 = *piVar3 + 1;
                  if (piVar3[1] + iVar5 != 0) {
                    local_3c = *local_40 + -1;
                    local_38 = local_94;
                    if (local_34 != local_94) {
                      local_38 = local_94 + local_80[0];
                    }
                    local_30 = local_30 + 1;
                    dbus_free(iVar4);
                    goto LAB_00022d5c;
                  }
                }
              }
            }
            dbus_free(iVar4);
            FUN_00022bb0(&local_50);
            uVar11 = *(undefined4 *)(iVar15 + DAT_0002334c);
            iVar2 = DAT_0002336c + 0x22efc;
            goto LAB_00022f00;
          }
          _dbus_string_free(&local_50);
          piVar3 = local_40;
          goto LAB_00022c90;
        }
        _dbus_string_free(&local_90);
        uVar11 = *(undefined4 *)(iVar15 + DAT_0002334c);
        iVar2 = DAT_0002335c + 0x22d1c;
      }
      dbus_set_error_const(param_2,iVar2,uVar11);
    }
    else {
      dbus_set_error(param_2,DAT_00023348 + 0x22c30,DAT_00023344 + 0x22c2c);
LAB_00022c30:
      piVar3 = (int *)0x0;
    }
  }
LAB_00022c90:
  if (local_2c == *piVar10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(piVar3);
LAB_00023048:
  iVar5 = iVar16;
  if (local_9c <= iVar16) goto LAB_000232f4;
  if ((*(byte *)(iVar2 + (uint)*(byte *)(local_50 + iVar16)) & 1) == 0) {
    if (local_38 == iVar16) goto LAB_0002306c;
    if (*(byte *)(local_50 + iVar16) != 0x5b) goto LAB_000230e8;
    local_38 = local_34;
    if (local_9c != local_34) {
      local_38 = local_9c + local_98;
    }
    goto LAB_000230ac;
  }
  iVar16 = iVar16 + 1;
  goto LAB_00023048;
  while (iVar5 = iVar5 + 1, iVar5 < local_9c) {
LAB_000230e8:
    if (*(char *)(local_50 + iVar5) != ' ') {
      if (*(char *)(local_50 + iVar5) == '=') goto LAB_00023114;
      iVar15 = DAT_0002338c + 0x23110;
      iVar2 = DAT_00023390 + 0x23114;
      goto LAB_00022dec;
    }
  }
LAB_000230c8:
  if (local_9c != iVar5) {
LAB_00023114:
    do {
      iVar5 = iVar5 + 1;
      if (local_9c <= iVar5) break;
    } while (*(char *)(local_50 + iVar5) == ' ');
    iVar5 = FUN_00022998(&local_50,&local_50,iVar5,local_9c,param_2);
    if (iVar5 == 0) {
LAB_00023144:
      piVar3 = (int *)0x0;
      FUN_00022bb0(&local_50);
      goto LAB_00022c90;
    }
    iVar13 = local_40[1] + local_3c * 0x10;
    if ((*(int *)(iVar13 + 0xc) == *(int *)(iVar13 + 4)) &&
       (iVar6 = FUN_000228f0(iVar13), iVar6 == 0)) {
      dbus_free(iVar5);
      FUN_00022bb0(&local_50);
      uVar11 = *(undefined4 *)(iVar15 + DAT_0002334c);
      iVar2 = DAT_00023394 + 0x231ac;
    }
    else {
      iVar17 = *(int *)(iVar13 + 4);
      iVar6 = *(int *)(iVar13 + 8);
      *(int *)(iVar13 + 4) = iVar17 + 1;
      puVar14 = (undefined8 *)(iVar6 + iVar17 * 8);
      *puVar14 = 0;
      iVar13 = _dbus_string_init(local_80);
      if (iVar13 == 0) {
        dbus_free(iVar5);
        FUN_00022bb0(&local_50);
        uVar11 = *(undefined4 *)(iVar15 + DAT_0002334c);
        iVar2 = DAT_00023398 + 0x23218;
      }
      else {
        iVar4 = _dbus_string_copy_len(&local_50,iVar4,iVar16 - iVar4,local_80,0);
        if (iVar4 == 0) {
          _dbus_string_free(local_80);
          dbus_free(iVar5);
          FUN_00022bb0(&local_50);
          uVar11 = *(undefined4 *)(iVar15 + DAT_0002334c);
          iVar2 = DAT_0002339c + 0x23270;
        }
        else {
          iVar4 = _dbus_string_steal_data(local_80,&local_94);
          if (iVar4 != 0) {
            _dbus_string_free(local_80);
            *(int *)(iVar6 + iVar17 * 8) = local_94;
            *(int *)((int)puVar14 + 4) = iVar5;
            iVar4 = local_98;
            local_38 = local_9c;
            if (local_34 != local_9c) {
LAB_000232ec:
              local_38 = local_38 + iVar4;
            }
LAB_000230ac:
            local_30 = local_30 + 1;
            goto LAB_00022d5c;
          }
          _dbus_string_free(local_80);
          dbus_free(iVar5);
          FUN_00022bb0(&local_50);
          uVar11 = *(undefined4 *)(iVar15 + DAT_0002334c);
          iVar2 = DAT_000233a0 + 0x232b8;
        }
      }
    }
LAB_00022f00:
    dbus_set_error_const(param_2,iVar2,uVar11);
    goto LAB_00022c30;
  }
  iVar15 = DAT_00023384 + 0x230e4;
  iVar2 = DAT_00023388 + 0x230e8;
LAB_00022dec:
  FUN_00022928(&local_50,iVar2,iVar15,param_2);
  FUN_00022bb0(&local_50);
  goto LAB_00022c30;
LAB_000232f4:
  if (local_38 == iVar16) {
LAB_0002306c:
    iVar15 = DAT_0002337c + 0x23080;
    iVar2 = DAT_00023380 + 0x23084;
    goto LAB_00022dec;
  }
  goto LAB_000230c8;
}



/* ===== FUN_000233ac @ 000233ac size=152 ===== */

undefined4 FUN_000233ac(int *param_1,char *param_2,char *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  *param_4 = 0;
  if (param_2 != (char *)0x0) {
    iVar5 = *param_1;
    for (; iVar3 < iVar5; iVar3 = iVar3 + 1) {
      iVar4 = param_1[1] + iVar3 * 0x10;
      iVar1 = strcmp(*(char **)(param_1[1] + iVar3 * 0x10),param_2);
      if (iVar1 == 0) {
        iVar5 = *(int *)(iVar4 + 4);
        iVar3 = 0;
        while( true ) {
          if (iVar5 <= iVar3) {
            return 0;
          }
          iVar2 = *(int *)(iVar4 + 8);
          iVar1 = strcmp(*(char **)(iVar2 + iVar3 * 8),param_3);
          if (iVar1 == 0) break;
          iVar3 = iVar3 + 1;
        }
        *param_4 = *(undefined4 *)(iVar2 + iVar3 * 8 + 4);
        return 1;
      }
    }
  }
  return 0;
}



/* ===== FUN_00023444 @ 00023444 size=192 ===== */

void FUN_00023444(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_28;
  
  iVar4 = DAT_00023504 + 0x23464;
  piVar5 = *(int **)(iVar4 + DAT_00023508);
  iVar2 = *piVar5;
  *param_4 = 0;
  iVar1 = FUN_000233ac();
  if (iVar1 == 0) {
    dbus_set_error(param_5,DAT_00023510 + 0x234a4,DAT_0002350c + 0x234a0,param_3);
    uVar3 = 0;
  }
  else {
    iVar1 = _dbus_strdup(local_28);
    *param_4 = iVar1;
    if (iVar1 == 0) {
      dbus_set_error_const(param_5,DAT_00023518 + 0x234f0,*(undefined4 *)(iVar4 + DAT_00023514));
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  if (iVar2 == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== FUN_0002351c @ 0002351c size=704 ===== */

void FUN_0002351c(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  char *pcVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  char *__s2;
  undefined4 *puVar16;
  int local_42c [128];
  int local_22c [128];
  int local_2c;
  
  piVar4 = *(int **)(DAT_000237dc + 0x23530 + DAT_000237e0);
  local_2c = *piVar4;
  iVar5 = 0;
  piVar14 = local_42c;
  piVar15 = local_22c;
  do {
    *piVar14 = -1;
    iVar5 = iVar5 + 1;
    *piVar15 = 0;
    piVar14 = piVar14 + 1;
    piVar15 = piVar15 + 1;
  } while (iVar5 != 0x80);
  iVar1 = _dbus_list_get_first_link(param_1);
  iVar5 = DAT_000237e8;
  piVar14 = local_22c;
  do {
    if (iVar1 == 0) break;
    piVar15 = (int *)(iVar1 + 8);
    iVar1 = *(int *)(iVar1 + 4);
    *piVar14 = *piVar15;
    piVar14 = piVar14 + 1;
  } while (iVar1 != *param_1);
  iVar13 = 0;
  iVar1 = *(int *)(DAT_000237e4 + 0x235b8);
  iVar6 = DAT_000237ec + 0x235d4;
  piVar14 = local_22c;
  while( true ) {
    pcVar12 = (char *)*piVar14;
    if (pcVar12 == (char *)0x0) break;
    puVar16 = (undefined4 *)(iVar5 + 0x237cc);
    for (iVar9 = 0; iVar9 < iVar1; iVar9 = iVar9 + 1) {
      __s2 = (char *)*puVar16;
      if (__s2 != (char *)0x0) {
        iVar2 = strcmp(pcVar12,__s2);
        if (iVar2 == 0) {
          iVar9 = iVar6 + iVar9 * 4;
          *piVar14 = (int)__s2;
          *(undefined4 *)(iVar9 + 0x204) = 0;
          local_42c[iVar13] = *(int *)(iVar9 + 4);
          *(undefined4 *)(iVar9 + 4) = 0xffffffff;
          break;
        }
      }
      puVar16 = puVar16 + 1;
    }
    iVar13 = iVar13 + 1;
    piVar14 = piVar14 + 1;
  }
  piVar10 = (int *)(DAT_000237f0 + 0x23658);
  piVar7 = (int *)(DAT_000237f4 + 0x2365c);
  piVar14 = (int *)(DAT_000237f0 + 0x2385c);
  piVar15 = (int *)(DAT_000237f0 + 0x2365c);
  piVar11 = piVar14;
  piVar8 = piVar15;
  for (iVar5 = 0; iVar5 < *piVar10; iVar5 = iVar5 + 1) {
    if (*piVar8 != -1) {
      inotify_rm_watch(*piVar7,*piVar8);
      dbus_free(*piVar11);
      *piVar8 = -1;
      *piVar11 = 0;
    }
    piVar11 = piVar11 + 1;
    piVar8 = piVar8 + 1;
  }
  iVar5 = 0;
  piVar8 = (int *)(DAT_000237f8 + 0x23688);
  piVar11 = local_22c;
  do {
    pcVar12 = (char *)*piVar11;
    if (pcVar12 == (char *)0x0) {
      *(int *)(DAT_000237fc + 0x236a0) = iVar5;
      iVar5 = 0;
      piVar11 = local_42c;
      piVar8 = local_22c;
      do {
        iVar5 = iVar5 + 1;
        *piVar15 = *piVar11;
        *piVar14 = *piVar8;
        piVar11 = piVar11 + 1;
        piVar8 = piVar8 + 1;
        piVar14 = piVar14 + 1;
        piVar15 = piVar15 + 1;
      } while (iVar5 != 0x80);
      if (local_2c == *piVar4) {
        return;
      }
LAB_00023774:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (local_42c[iVar5] == -1) {
      iVar1 = inotify_add_watch(*piVar8,pcVar12,0x2c8);
      if (iVar1 < 0) {
        piVar7 = __errno_location();
        if (*piVar7 != 2) {
          uVar3 = _dbus_strerror();
          if (local_2c == *piVar4) {
            _dbus_warn(DAT_00023800 + 0x23788,pcVar12,uVar3);
            return;
          }
          goto LAB_00023774;
        }
        local_42c[iVar5] = -1;
        *piVar11 = 0;
      }
      else {
        local_42c[iVar5] = iVar1;
        iVar6 = _dbus_strdup(pcVar12);
        *piVar11 = iVar6;
        if (iVar6 == 0) {
          inotify_rm_watch(*piVar8,iVar1);
          local_42c[iVar5] = -1;
        }
      }
    }
    iVar5 = iVar5 + 1;
    piVar11 = piVar11 + 1;
  } while( true );
}



/* ===== FUN_00023964 @ 00023964 size=304 ===== */

void FUN_00023964(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)(DAT_00023a94 + 0x23978);
  if (*piVar4 != -1) {
LAB_00023a84:
    FUN_0002351c(param_2);
    return;
  }
  iVar1 = inotify_init1(0x80000);
  *piVar4 = iVar1;
  if (iVar1 < 0) {
    iVar1 = inotify_init();
    *piVar4 = iVar1;
  }
  iVar1 = DAT_00023aa0;
  piVar4 = (int *)(DAT_00023a98 + 0x239ac);
  if (*piVar4 < 1) {
    iVar1 = DAT_00023a9c + 0x239c0;
  }
  else {
    _dbus_fd_set_close_on_exec();
    uVar2 = FUN_0001a658(param_1);
    *(undefined4 *)((int)&DAT_00023de8 + iVar1) = uVar2;
    FUN_0002e6a8();
    iVar3 = _dbus_watch_new(*piVar4,1,1,DAT_00023aa4 + 0x23a04,0,0);
    *(int *)((int)&DAT_00023de4 + iVar1) = iVar3;
    if (iVar3 != 0) {
      iVar3 = FUN_0002e718(*(undefined4 *)((int)&DAT_00023de8 + iVar1),iVar3);
      if (iVar3 == 0) {
        _dbus_warn(DAT_00023aac + 0x23a3c);
        _dbus_watch_unref(*(undefined4 *)((int)&DAT_00023de4 + iVar1));
        *(undefined4 *)((int)&DAT_00023de4 + iVar1) = 0;
      }
      else {
        iVar3 = _dbus_register_shutdown_func(DAT_00023ab0 + 0x23a60,0);
        if (iVar3 != 0) goto LAB_00023a84;
        _dbus_warn(DAT_00023ab4 + 0x23a74);
        _dbus_watch_unref(*(undefined4 *)((int)&DAT_00023de4 + iVar1));
        *(undefined4 *)((int)&DAT_00023de4 + iVar1) = 0;
      }
      return;
    }
    iVar1 = DAT_00023aa8 + 0x23a20;
  }
  _dbus_warn(iVar1);
  return;
}



/* ===== FUN_00023ab8 @ 00023ab8 size=780 ===== */

void FUN_00023ab8(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int local_50;
  undefined1 auStack_4c [16];
  undefined4 local_3c;
  undefined4 uStack_38;
  uint local_34;
  undefined4 uStack_30;
  int local_2c;
  
  iVar11 = DAT_00023dc4 + 0x23ad8;
  piVar6 = *(int **)(iVar11 + DAT_00023dc8);
  local_2c = *piVar6;
  uVar1 = FUN_0002168c();
  if (param_3 == 0) {
LAB_00023bcc:
    uVar10 = FUN_0001a640(uVar1);
    dbus_error_init(auStack_4c);
    uVar3 = FUN_0001a650(uVar1);
    local_50 = 0;
    iVar2 = FUN_0002d124(uVar3,uVar10,param_2,param_3,param_4,&local_50);
    if (iVar2 == 0) goto LAB_00023ba4;
    iVar2 = _dbus_list_get_first_link(&local_50);
    iVar7 = DAT_00023ddc + 0x23c28;
    iVar8 = DAT_00023de0 + 0x23c34;
    iVar9 = DAT_00023de4 + 0x23c40;
    do {
      if (iVar2 == 0) break;
      uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uVar10 = *(undefined4 *)(iVar2 + 8);
      local_3c = 0;
      local_34 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8) | 1;
      iVar4 = FUN_0001b5fc(uVar1,param_1,param_2,param_3,uVar10,param_4,0,&local_3c);
      if (iVar4 == 0) {
        iVar4 = FUN_0002189c(param_1,param_2,&local_3c,param_4);
        if (iVar4 == 0) {
          iVar4 = DAT_00023de8 + 0x23cbc;
LAB_00023cb8:
          FUN_0001a6ec(uVar1,1,iVar4);
        }
LAB_00023cc4:
        dbus_error_free(&local_3c);
      }
      else {
        iVar4 = dbus_message_contains_unix_fds(param_4);
        if ((iVar4 != 0) && (iVar4 = dbus_connection_can_send_type(uVar10,0x68), iVar4 == 0)) {
          uVar3 = FUN_0002152c(uVar10);
          uVar10 = FUN_00020ca0(uVar10);
          dbus_set_error(&local_3c,iVar8,iVar7,uVar3,uVar10);
          iVar5 = FUN_0002189c(param_1,param_2,&local_3c,param_4);
          iVar4 = iVar9;
          if (iVar5 == 0) goto LAB_00023cb8;
          goto LAB_00023cc4;
        }
        iVar4 = FUN_00021694(param_1,uVar10,param_4);
        if (iVar4 == 0) {
          dbus_set_error_const
                    (auStack_4c,DAT_00023dec + 0x23d84,*(undefined4 *)(iVar11 + DAT_00023dd4));
          break;
        }
      }
      iVar2 = *(int *)(iVar2 + 4);
    } while (iVar2 != local_50);
    _dbus_list_clear(&local_50);
    iVar11 = dbus_error_is_set(auStack_4c);
    if (iVar11 == 0) {
      uVar10 = 1;
      goto LAB_00023b70;
    }
    dbus_move_error(auStack_4c,param_5);
  }
  else {
    iVar2 = FUN_0001b5fc(uVar1,param_1,param_2,param_3,param_3,param_4,0,param_5);
    uVar10 = 0;
    if (iVar2 == 0) goto LAB_00023b70;
    iVar2 = dbus_message_contains_unix_fds(param_4);
    if ((iVar2 != 0) && (iVar2 = dbus_connection_can_send_type(param_3,0x68), iVar2 == 0)) {
      dbus_set_error(param_5,DAT_00023dd0 + 0x23b6c,DAT_00023dcc + 0x23b68);
      uVar10 = 0;
      goto LAB_00023b70;
    }
    iVar2 = FUN_00021694(param_1,param_3,param_4);
    if (iVar2 != 0) goto LAB_00023bcc;
LAB_00023ba4:
    dbus_set_error_const(param_5,DAT_00023dd8 + 0x23bb8,*(undefined4 *)(iVar11 + DAT_00023dd4));
  }
  uVar10 = 0;
LAB_00023b70:
  if (local_2c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
  return;
}



/* ===== FUN_00023df0 @ 00023df0 size=1476 ===== */

void FUN_00023df0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *__s1;
  int *piVar8;
  int iVar9;
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  int local_2c;
  
  iVar9 = DAT_000243b4 + 0x23e10;
  piVar8 = *(int **)(iVar9 + DAT_000243b8);
  local_2c = *piVar8;
  dbus_error_init(auStack_4c);
  uVar1 = FUN_00020b90(param_1);
  while (iVar2 = FUN_00020d68(param_1), iVar2 == 0) {
    FUN_0002ea80();
  }
  dbus_connection_ref(param_1);
  iVar2 = FUN_00022644(param_1);
  if (iVar2 == 0) {
    iVar2 = dbus_message_get_destination(param_2);
    uVar3 = 0;
    if (iVar2 == 0) {
      iVar5 = dbus_message_is_signal(param_2,DAT_000243f0 + 0x2404c,DAT_000243ec + 0x24048);
      iVar2 = 0;
      if (iVar5 == 0) {
        iVar5 = dbus_message_get_type(param_2);
        if (iVar5 == 4) goto LAB_00024000;
        uVar3 = 1;
      }
      else {
        FUN_00021c18(param_1);
      }
    }
    else {
LAB_00024000:
      iVar2 = FUN_00021670(uVar1);
      if (iVar2 == 0) {
        uVar1 = *(undefined4 *)(iVar9 + DAT_000243e4);
        iVar9 = DAT_000243e8 + 0x24024;
LAB_00024028:
        uVar3 = 0;
        dbus_set_error_const(auStack_4c,iVar9,uVar1);
      }
      else {
        iVar5 = FUN_00020c7c(param_1);
        if (iVar5 == 0) {
          iVar5 = dbus_message_set_sender(param_2,DAT_000243f8 + 0x240dc);
          if (iVar5 != 0) goto LAB_00024100;
          uVar1 = *(undefined4 *)(iVar9 + DAT_000243e4);
          iVar9 = DAT_000243fc + 0x240f8;
        }
        else {
          uVar4 = FUN_0002152c(param_1);
          iVar5 = dbus_message_set_sender(param_2,uVar4);
          if (iVar5 != 0) {
LAB_00024100:
            __s1 = (char *)dbus_message_get_destination(param_2);
            if ((__s1 == (char *)0x0) ||
               (iVar5 = strcmp(__s1,(char *)(DAT_00024400 + 0x2411c)), iVar5 != 0)) {
              iVar5 = FUN_00020c7c(param_1);
              if (iVar5 == 0) {
                iVar5 = FUN_000217ac(iVar2,param_1,0,param_2);
                if (iVar5 == 0) {
                  uVar1 = *(undefined4 *)(iVar9 + DAT_000243e4);
                  iVar9 = DAT_00024408 + 0x241ec;
                  goto LAB_00024028;
                }
                dbus_connection_close(param_1);
                uVar3 = 0;
              }
              else {
                if (__s1 == (char *)0x0) {
                  iVar5 = FUN_000217ac(iVar2,param_1,0,param_2);
                  if (iVar5 != 0) goto LAB_000242e4;
                  uVar1 = *(undefined4 *)(iVar9 + DAT_000243e4);
                  iVar9 = DAT_00024410 + 0x242dc;
                  goto LAB_000240bc;
                }
                uVar1 = FUN_00020bcc(param_1);
                _dbus_string_init_const(auStack_3c,__s1);
                iVar5 = FUN_00029cbc(uVar1,auStack_3c);
                if (iVar5 != 0) {
                  uVar1 = FUN_0002a8c4();
                  iVar5 = FUN_000217ac(iVar2,param_1,uVar1,param_2);
                  if (iVar5 != 0) goto LAB_000242e8;
LAB_0002426c:
                  uVar1 = *(undefined4 *)(iVar9 + DAT_000243e4);
                  iVar9 = DAT_0002440c + 0x24280;
                  goto LAB_00024028;
                }
                iVar5 = dbus_message_get_auto_start(param_2);
                if (iVar5 == 0) {
                  iVar5 = FUN_000217ac(iVar2,param_1,0,param_2);
                  if (iVar5 == 0) goto LAB_0002426c;
                  dbus_set_error(auStack_4c,DAT_00024418 + 0x243a8,DAT_00024414 + 0x243a4,__s1);
                }
                else {
                  iVar5 = FUN_000217ac(iVar2,param_1,0,param_2);
                  if (iVar5 == 0) goto LAB_0002426c;
                  uVar1 = FUN_00020bf0(param_1);
                  FUN_00018d30(uVar1,param_1,iVar2,1,param_2,__s1,auStack_4c);
                }
              }
            }
            else {
              iVar5 = FUN_000217ac(iVar2,param_1,0,param_2);
              if (iVar5 == 0) {
                uVar1 = *(undefined4 *)(iVar9 + DAT_000243e4);
                iVar9 = DAT_00024404 + 0x24158;
                goto LAB_000240bc;
              }
              iVar9 = FUN_0001b5fc(uVar1,iVar2,param_1,0,0,param_2,0,auStack_4c);
              if ((iVar9 == 0) ||
                 (iVar9 = FUN_00028188(param_1,iVar2,param_2,auStack_4c), iVar9 == 0)) {
                uVar3 = 0;
              }
              else {
LAB_000242e4:
                uVar1 = 0;
LAB_000242e8:
                FUN_00023ab8(iVar2,param_1,uVar1,param_2,auStack_4c);
              }
            }
            goto LAB_00023eb8;
          }
          uVar1 = *(undefined4 *)(iVar9 + DAT_000243e4);
          iVar9 = DAT_000243f4 + 0x240b8;
        }
LAB_000240bc:
        uVar3 = 0;
        dbus_set_error_const(auStack_4c,iVar9,uVar1);
      }
    }
  }
  else {
    iVar9 = FUN_0002152c(param_1);
    if (iVar9 == 0) {
      iVar9 = DAT_000243bc + 0x23e74;
    }
    iVar2 = dbus_message_is_signal(param_2,DAT_000243c4 + 0x23e88,DAT_000243c0 + 0x23e84);
    if (iVar2 == 0) {
      uVar3 = FUN_00020ca0(param_1);
      dbus_message_get_type(param_2);
      uVar4 = dbus_message_type_to_string();
      iVar2 = dbus_message_get_interface(param_2);
      if (iVar2 == 0) {
        iVar2 = DAT_000243d0 + 0x23f74;
      }
      iVar5 = dbus_message_get_member(param_2);
      if (iVar5 == 0) {
        iVar5 = DAT_000243d4 + 0x23f88;
      }
      iVar6 = dbus_message_get_error_name(param_2);
      if (iVar6 == 0) {
        iVar6 = DAT_000243d8 + 0x23f9c;
      }
      iVar7 = dbus_message_get_destination(param_2);
      if (iVar7 == 0) {
        iVar7 = DAT_000243dc + 0x23fb8;
      }
      FUN_0001a6ec(uVar1,1,DAT_000243e0 + 0x23fe4,iVar9,uVar3,uVar4,iVar2,iVar5,iVar6,iVar7);
      dbus_connection_close(param_1);
    }
    else {
      FUN_0001a6ec(uVar1,0,DAT_000243c8 + 0x23ea8,iVar9);
      FUN_00021c18(param_1);
    }
    uVar3 = 0;
    iVar2 = 0;
  }
LAB_00023eb8:
  iVar9 = dbus_error_is_set(auStack_4c);
  if (iVar9 == 0) goto LAB_00023f04;
  iVar9 = dbus_error_has_name(auStack_4c,DAT_000243cc + 0x23edc);
  if (iVar9 == 0) {
    iVar9 = FUN_00022168(iVar2,param_1,auStack_4c,param_2);
    if (iVar9 == 0) {
      FUN_00020e68(param_1,param_2);
      if (iVar2 == 0) goto LAB_00023ef8;
      FUN_00021a80(iVar2);
      iVar2 = 0;
    }
  }
  else {
    FUN_00020e68(param_1,param_2);
    if (iVar2 != 0) {
      FUN_00021a80(iVar2);
    }
LAB_00023ef8:
    iVar2 = 0;
  }
  dbus_error_free(auStack_4c);
LAB_00023f04:
  if (iVar2 != 0) {
    FUN_00021b48(iVar2);
  }
  dbus_connection_unref(param_1);
  if (local_2c != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_0002441c @ 0002441c size=36 ===== */

bool FUN_0002441c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = dbus_connection_add_filter(param_1,DAT_00024440 + 0x24434,0);
  return iVar1 != 0;
}



/* ===== FUN_00024444 @ 00024444 size=36 ===== */

void FUN_00024444(undefined4 param_1)

{
  FUN_000284a0();
  dbus_connection_remove_filter(param_1,DAT_00024468 + 0x24464,0);
  return;
}



/* ===== FUN_0002446c @ 0002446c size=120 ===== */

void FUN_0002446c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_24 [16];
  int local_14;
  
  piVar3 = *(int **)(DAT_000244e4 + 0x2447c + DAT_000244e8);
  local_14 = *piVar3;
  uVar1 = FUN_00020bcc();
  _dbus_string_init_const(auStack_24,param_2);
  iVar2 = FUN_00029cbc(uVar1,auStack_24);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = FUN_0002a8c4();
  }
  if (local_14 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}



/* ===== FUN_000244ec @ 000244ec size=356 ===== */

void FUN_000244ec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint local_44;
  char *local_40;
  undefined1 auStack_3c [16];
  int local_2c;
  
  iVar5 = DAT_00024650 + 0x2450c;
  piVar6 = *(int **)(iVar5 + DAT_00024654);
  local_2c = *piVar6;
  uVar1 = FUN_00020bcc();
  iVar2 = dbus_message_get_args(param_3,param_4,0x73,&local_40,0);
  uVar4 = 0;
  if (iVar2 != 0) {
    iVar2 = strcmp(local_40,(char *)(DAT_00024658 + 0x2455c));
    if (iVar2 == 0) {
      local_44 = 1;
    }
    else {
      _dbus_string_init_const(auStack_3c,local_40);
      iVar2 = FUN_00029cbc(uVar1,auStack_3c);
      local_44 = (uint)(iVar2 != 0);
    }
    iVar2 = dbus_message_new_method_return(param_3);
    if (iVar2 == 0) {
      dbus_set_error_const(param_4,DAT_00024660 + 0x245c0,*(undefined4 *)(iVar5 + DAT_0002465c));
      uVar4 = 0;
    }
    else {
      iVar3 = dbus_message_append_args(iVar2,0x62,&local_44,0);
      if ((iVar3 == 0) || (iVar3 = FUN_00021920(param_2,param_1,iVar2), iVar3 == 0)) {
        uVar4 = 0;
        dbus_set_error_const(param_4,DAT_00024664 + 0x24614,*(undefined4 *)(iVar5 + DAT_0002465c));
      }
      else {
        uVar4 = 1;
      }
      dbus_message_unref(iVar2);
    }
  }
  if (local_2c == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}



/* ===== FUN_00024668 @ 00024668 size=312 ===== */

void FUN_00024668(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_40;
  undefined4 local_3c [4];
  int local_2c;
  
  iVar4 = DAT_000247a0 + 0x24688;
  piVar5 = *(int **)(iVar4 + DAT_000247a4);
  local_2c = *piVar5;
  iVar1 = _dbus_string_init(local_3c);
  if (iVar1 == 0) {
    dbus_set_error_const(param_4,DAT_000247ac + 0x246c4,*(undefined4 *)(iVar4 + DAT_000247a8));
    uVar3 = 0;
  }
  else {
    iVar1 = _dbus_get_local_machine_uuid_encoded(local_3c,param_4);
    if (iVar1 != 0) {
      iVar1 = dbus_message_new_method_return(param_3);
      if (iVar1 != 0) {
        local_40 = local_3c[0];
        iVar2 = dbus_message_append_args(iVar1,0x73,&local_40,0);
        if ((iVar2 != 0) && (iVar2 = FUN_00021920(param_2,param_1,iVar1), iVar2 != 0)) {
          _dbus_string_free(local_3c);
          uVar3 = 1;
          dbus_message_unref(iVar1);
          goto LAB_000246cc;
        }
      }
      dbus_set_error_const(param_4,DAT_000247b0 + 0x24770,*(undefined4 *)(iVar4 + DAT_000247a8));
      if (iVar1 != 0) {
        dbus_message_unref(iVar1);
      }
    }
    uVar3 = 0;
    _dbus_string_free(local_3c);
  }
LAB_000246cc:
  if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_000249c0 @ 000249c0 size=320 ===== */

void FUN_000249c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_40;
  undefined4 local_3c [4];
  int local_2c;
  
  iVar4 = DAT_00024b00 + 0x249e0;
  piVar5 = *(int **)(iVar4 + DAT_00024b04);
  local_2c = *piVar5;
  iVar1 = _dbus_string_init(local_3c);
  if (iVar1 == 0) {
    dbus_set_error_const(param_4,DAT_00024b0c + 0x24a1c,*(undefined4 *)(iVar4 + DAT_00024b08));
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00020b90(param_1);
    iVar1 = FUN_0001a3c4(uVar2,local_3c);
    if ((iVar1 == 0) || (iVar1 = dbus_message_new_method_return(param_3), iVar1 == 0)) {
      iVar1 = 0;
    }
    else {
      local_40 = local_3c[0];
      iVar3 = dbus_message_append_args(iVar1,0x73,&local_40,0);
      if ((iVar3 != 0) && (iVar3 = FUN_00021920(param_2,param_1,iVar1), iVar3 != 0)) {
        _dbus_string_free(local_3c);
        uVar2 = 1;
        dbus_message_unref(iVar1);
        goto LAB_00024a24;
      }
    }
    dbus_set_error_const(param_4,DAT_00024b10 + 0x24ad0,*(undefined4 *)(iVar4 + DAT_00024b08));
    if (iVar1 != 0) {
      dbus_message_unref(iVar1);
    }
    uVar2 = 0;
    _dbus_string_free(local_3c);
  }
LAB_00024a24:
  if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/* ===== FUN_00024b14 @ 00024b14 size=412 ===== */

void FUN_00024b14(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_44;
  int local_40;
  undefined1 auStack_3c [16];
  int local_2c;
  
  iVar4 = DAT_00024cb0 + 0x24b34;
  piVar5 = *(int **)(iVar4 + DAT_00024cb4);
  local_2c = *piVar5;
  uVar1 = FUN_00020bcc();
  local_44 = 0;
  iVar2 = dbus_message_get_args(param_3,param_4,0x73,&local_44,0);
  if (iVar2 == 0) {
LAB_00024b74:
    uVar1 = 0;
  }
  else {
    _dbus_string_init_const(auStack_3c,local_44);
    iVar2 = FUN_00029cbc(uVar1,auStack_3c);
    if (iVar2 == 0) {
      iVar2 = DAT_00024cb8 + 0x24bb0;
      iVar3 = _dbus_string_equal_c_str(auStack_3c,iVar2);
      if (iVar3 != 0) {
LAB_00024bd8:
        local_40 = iVar2;
        iVar2 = dbus_message_new_method_return(param_3);
        if (((iVar2 != 0) && (iVar3 = dbus_message_append_args(iVar2,0x73,&local_40,0), iVar3 != 0))
           && (iVar3 = FUN_00021920(param_2,param_1,iVar2), iVar3 != 0)) {
          uVar1 = 1;
          dbus_message_unref(iVar2);
          goto LAB_00024c24;
        }
        dbus_set_error_const(param_4,DAT_00024cc8 + 0x24c54,*(undefined4 *)(iVar4 + DAT_00024cc4));
        if (iVar2 != 0) {
          dbus_message_unref(iVar2);
        }
        goto LAB_00024b74;
      }
      iVar4 = DAT_00024cbc + 0x24bd4;
      iVar2 = DAT_00024cc0 + 0x24bd8;
    }
    else {
      FUN_0002a8c4();
      local_40 = FUN_0002152c();
      iVar2 = local_40;
      if (local_40 != 0) goto LAB_00024bd8;
      iVar4 = DAT_00024ccc + 0x24c9c;
      iVar2 = DAT_00024cd0 + 0x24ca0;
    }
    uVar1 = 0;
    dbus_set_error(param_4,iVar2,iVar4,local_44);
  }
LAB_00024c24:
  if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}



/* ===== FUN_00024cd4 @ 00024cd4 size=556 ===== */

void FUN_00024cd4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 local_b8;
  int local_b4;
  undefined4 local_b0;
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [56];
  undefined1 auStack_64 [56];
  int local_2c;
  
  iVar6 = DAT_00024f00 + 0x24cf4;
  piVar5 = *(int **)(iVar6 + DAT_00024f04);
  local_2c = *piVar5;
  uVar1 = FUN_00020bcc();
  local_b4 = 0;
  local_b8 = 0;
  iVar2 = dbus_message_get_args(param_3,param_4,0x73,&local_b8,0);
  if (iVar2 != 0) {
    _dbus_string_init_const(auStack_ac,local_b8);
    iVar2 = FUN_00029cbc(uVar1,auStack_ac);
    if (iVar2 == 0) {
      iVar2 = _dbus_string_equal_c_str(auStack_ac,DAT_00024f08 + 0x24d70);
      if (iVar2 == 0) {
        dbus_set_error(param_4,DAT_00024f20 + 0x24edc,DAT_00024f1c + 0x24ed8,local_b8);
      }
      else {
        iVar2 = _dbus_list_append(&local_b4,DAT_00024f0c + 0x24d88);
        if (iVar2 != 0) goto LAB_00024d90;
LAB_00024e70:
        iVar2 = 0;
LAB_00024e74:
        dbus_set_error_const(param_4,DAT_00024f18 + 0x24e8c,*(undefined4 *)(iVar6 + DAT_00024f14));
        if (iVar2 != 0) {
          dbus_message_unref(iVar2);
        }
      }
    }
    else {
      iVar2 = FUN_0002af8c(iVar2,&local_b4,param_4);
      if (iVar2 != 0) {
LAB_00024d90:
        iVar2 = dbus_message_new_method_return(param_3);
        if (iVar2 == 0) goto LAB_00024e70;
        dbus_message_iter_init_append(iVar2,auStack_9c);
        iVar3 = dbus_message_iter_open_container(auStack_9c,0x61,DAT_00024f10 + 0x24dc8,auStack_64);
        if (iVar3 != 0) {
          iVar3 = _dbus_list_get_first_link(&local_b4);
          do {
            if (iVar3 == 0) break;
            local_b0 = *(undefined4 *)(iVar3 + 8);
            iVar4 = dbus_message_iter_append_basic(auStack_64,0x73,&local_b0);
            if (iVar4 == 0) goto LAB_00024e74;
            iVar3 = *(int *)(iVar3 + 4);
          } while (iVar3 != local_b4);
          iVar3 = dbus_message_iter_close_container(auStack_9c,auStack_64);
          if ((iVar3 != 0) && (iVar3 = FUN_00021920(param_2,param_1,iVar2), iVar3 != 0)) {
            dbus_message_unref(iVar2);
            uVar1 = 1;
            goto LAB_00024e58;
          }
        }
        goto LAB_00024e74;
      }
    }
  }
  uVar1 = 0;
  if (local_b4 != 0) {
    _dbus_list_clear(&local_b4);
    uVar1 = 0;
  }
LAB_00024e58:
  if (local_2c == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}



/* ===== FUN_00024f24 @ 00024f24 size=344 ===== */

void FUN_00024f24(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int local_28;
  int local_24;
  
  piVar5 = *(int **)(DAT_0002507c + 0x24f44 + DAT_00025080);
  local_24 = *piVar5;
  iVar1 = dbus_connection_get_unix_user(param_1,&local_28);
  if (iVar1 == 0) {
    uVar2 = dbus_message_get_member(param_3);
    uVar3 = FUN_0002168c(param_2);
    iVar1 = FUN_0002152c(param_1);
    if (iVar1 == 0) {
      iVar1 = DAT_00025084 + 0x24f94;
    }
    uVar4 = FUN_00020ca0(param_1);
    FUN_0001b564(uVar3,2,param_4,DAT_0002508c + 0x24fc8,DAT_00025088 + 0x24fb0,uVar2,iVar1,uVar4);
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_00030754(local_28);
    if ((iVar1 == 0) && (local_28 != 0)) {
      uVar2 = dbus_message_get_member(param_3);
      uVar3 = FUN_0002168c(param_2);
      iVar1 = FUN_0002152c(param_1);
      if (iVar1 == 0) {
        iVar1 = DAT_00025090 + 0x2502c;
      }
      uVar4 = FUN_00020ca0(param_1);
      FUN_0001b564(uVar3,2,param_4,DAT_00025098 + 0x25068,DAT_00025094 + 0x25058,uVar2,iVar1,uVar4,
                   local_28);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  if (local_24 == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



/* ===== FUN_0002509c @ 0002509c size=624 ===== */

void FUN_0002509c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int local_a8;
  int local_a4;
  int local_a0;
  undefined1 auStack_9c [56];
  undefined1 auStack_64 [56];
  int local_2c;
  
  iVar7 = DAT_0002530c + 0x250bc;
  piVar5 = *(int **)(iVar7 + DAT_00025310);
  local_2c = *piVar5;
  uVar1 = FUN_00020bf0();
  iVar2 = dbus_message_new_method_return(param_3);
  if (iVar2 == 0) {
    uVar1 = *(undefined4 *)(iVar7 + DAT_00025314);
    dbus_set_error_const(param_4,DAT_00025318 + 0x25104,uVar1,uVar1,piVar5,uVar1);
    uVar1 = 0;
  }
  else {
    iVar3 = FUN_00019a4c(uVar1,&local_a4,&local_a8);
    if (iVar3 == 0) {
      dbus_message_unref(iVar2);
      uVar6 = *(undefined4 *)(iVar7 + DAT_00025314);
      iVar2 = DAT_0002531c + 0x2515c;
    }
    else {
      dbus_message_iter_init_append(iVar2,auStack_9c);
      iVar3 = dbus_message_iter_open_container(auStack_9c,0x61,DAT_00025320 + 0x25198,auStack_64);
      if (iVar3 == 0) {
        dbus_free_string_array(local_a4);
        dbus_message_unref(iVar2);
        uVar6 = *(undefined4 *)(iVar7 + DAT_00025314);
        iVar2 = DAT_00025324 + 0x251c4;
      }
      else {
        local_a0 = DAT_00025328 + 0x251e4;
        iVar3 = dbus_message_iter_append_basic(auStack_64,0x73,&local_a0);
        if (iVar3 == 0) {
          dbus_free_string_array(local_a4);
          dbus_message_unref(iVar2);
          uVar6 = *(undefined4 *)(iVar7 + DAT_00025314);
          iVar2 = DAT_0002532c + 0x25218;
        }
        else {
          for (iVar3 = 0; iVar3 < local_a8; iVar3 = iVar3 + 1) {
            iVar4 = dbus_message_iter_append_basic(auStack_64,0x73,local_a4 + iVar3 * 4);
            if (iVar4 == 0) {
              dbus_free_string_array(local_a4);
              dbus_message_unref(iVar2);
              uVar6 = *(undefined4 *)(iVar7 + DAT_00025314);
              iVar2 = DAT_00025330 + 0x25264;
              goto LAB_00025160;
            }
          }
          dbus_free_string_array();
          iVar3 = dbus_message_iter_close_container(auStack_9c,auStack_64);
          if (iVar3 == 0) {
            dbus_message_unref(iVar2);
            uVar6 = *(undefined4 *)(iVar7 + DAT_00025314);
            iVar2 = DAT_00025334 + 0x252b4;
          }
          else {
            iVar3 = FUN_00021920(param_2,param_1,iVar2);
            if (iVar3 != 0) {
              uVar1 = 1;
              dbus_message_unref(iVar2);
              goto LAB_0002510c;
            }
            dbus_message_unref(iVar2);
            uVar6 = *(undefined4 *)(iVar7 + DAT_00025314);
            iVar2 = DAT_00025338 + 0x252f0;
          }
        }
      }
    }
LAB_00025160:
    uVar1 = 0;
    dbus_set_error_const(param_4,iVar2,uVar6,uVar6,piVar5,uVar6);
  }
LAB_0002510c:
  if (local_2c == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}



/* ===== FUN_0002533c @ 0002533c size=624 ===== */

void FUN_0002533c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int local_a8;
  int local_a4;
  int local_a0;
  undefined1 auStack_9c [56];
  undefined1 auStack_64 [56];
  int local_2c;
  
  iVar7 = DAT_000255ac + 0x2535c;
  piVar5 = *(int **)(iVar7 + DAT_000255b0);
  local_2c = *piVar5;
  uVar1 = FUN_00020bcc();
  iVar2 = dbus_message_new_method_return(param_3);
  if (iVar2 == 0) {
    uVar1 = *(undefined4 *)(iVar7 + DAT_000255b4);
    dbus_set_error_const(param_4,DAT_000255b8 + 0x253a4,uVar1,uVar1,piVar5,uVar1);
    uVar1 = 0;
  }
  else {
    iVar3 = FUN_00029d48(uVar1,&local_a4,&local_a8);
    if (iVar3 == 0) {
      dbus_message_unref(iVar2);
      uVar6 = *(undefined4 *)(iVar7 + DAT_000255b4);
      iVar2 = DAT_000255bc + 0x253fc;
    }
    else {
      dbus_message_iter_init_append(iVar2,auStack_9c);
      iVar3 = dbus_message_iter_open_container(auStack_9c,0x61,DAT_000255c0 + 0x25438,auStack_64);
      if (iVar3 == 0) {
        dbus_free_string_array(local_a4);
        dbus_message_unref(iVar2);
        uVar6 = *(undefined4 *)(iVar7 + DAT_000255b4);
        iVar2 = DAT_000255c4 + 0x25464;
      }
      else {
        local_a0 = DAT_000255c8 + 0x25484;
        iVar3 = dbus_message_iter_append_basic(auStack_64,0x73,&local_a0);
        if (iVar3 == 0) {
          dbus_free_string_array(local_a4);
          dbus_message_unref(iVar2);
          uVar6 = *(undefined4 *)(iVar7 + DAT_000255b4);
          iVar2 = DAT_000255cc + 0x254b8;
        }
        else {
          for (iVar3 = 0; iVar3 < local_a8; iVar3 = iVar3 + 1) {
            iVar4 = dbus_message_iter_append_basic(auStack_64,0x73,local_a4 + iVar3 * 4);
            if (iVar4 == 0) {
              dbus_free_string_array(local_a4);
              dbus_message_unref(iVar2);
              uVar6 = *(undefined4 *)(iVar7 + DAT_000255b4);
              iVar2 = DAT_000255d0 + 0x25504;
              goto LAB_00025400;
            }
          }
          dbus_free_string_array();
          iVar3 = dbus_message_iter_close_container(auStack_9c,auStack_64);
          if (iVar3 == 0) {
            dbus_message_unref(iVar2);
            uVar6 = *(undefined4 *)(iVar7 + DAT_000255b4);
            iVar2 = DAT_000255d4 + 0x25554;
          }
          else {
            iVar3 = FUN_00021920(param_2,param_1,iVar2);
            if (iVar3 != 0) {
              uVar1 = 1;
              dbus_message_unref(iVar2);
              goto LAB_000253ac;
            }
            dbus_message_unref(iVar2);
            uVar6 = *(undefined4 *)(iVar7 + DAT_000255b4);
            iVar2 = DAT_000255d8 + 0x25590;
          }
        }
      }
    }
LAB_00025400:
    uVar1 = 0;
    dbus_set_error_const(param_4,iVar2,uVar6,uVar6,piVar5,uVar6);
  }
LAB_000253ac:
  if (local_2c == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}



/* ===== FUN_000255dc @ 000255dc size=180 ===== */

void FUN_000255dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 auStack_2c [4];
  undefined4 local_28;
  int local_24;
  
  piVar4 = *(int **)(DAT_00025690 + 0x255fc + DAT_00025694);
  local_24 = *piVar4;
  uVar1 = FUN_00020bf0();
  iVar2 = dbus_message_get_args(param_3,param_4,0x73,&local_28,0x75,auStack_2c,0);
  uVar3 = 0;
  if (iVar2 != 0) {
    iVar2 = FUN_00018d30(uVar1,param_1,param_2,0,param_3,local_28,param_4);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = 1;
    }
  }
  if (local_24 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_00025698 @ 00025698 size=348 ===== */

void FUN_00025698(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_44;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [16];
  int local_2c;
  
  iVar5 = DAT_000257f4 + 0x256b8;
  piVar4 = *(int **)(iVar5 + DAT_000257f8);
  local_2c = *piVar4;
  uVar1 = FUN_00020bcc();
  iVar2 = dbus_message_get_args(param_3,param_4,0x73,&local_44,0);
  if (iVar2 != 0) {
    _dbus_string_init_const(auStack_3c,local_44);
    iVar2 = FUN_0002ae68(uVar1,param_1,auStack_3c,auStack_40,param_2,param_4);
    if (iVar2 != 0) {
      iVar2 = dbus_message_new_method_return(param_3);
      if (iVar2 != 0) {
        iVar3 = dbus_message_append_args(iVar2,0x75,auStack_40,0);
        if ((iVar3 == 0) || (iVar3 = FUN_00021920(param_2,param_1,iVar2), iVar3 == 0)) {
          uVar1 = 0;
          dbus_set_error_const(param_4,DAT_00025804 + 0x257b8,*(undefined4 *)(iVar5 + DAT_000257fc))
          ;
        }
        else {
          uVar1 = 1;
        }
        dbus_message_unref(iVar2);
        goto LAB_00025768;
      }
      dbus_set_error_const(param_4,DAT_00025800 + 0x2575c,*(undefined4 *)(iVar5 + DAT_000257fc));
    }
  }
  uVar1 = 0;
LAB_00025768:
  if (local_2c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}



/* ===== FUN_00025808 @ 00025808 size=368 ===== */

void FUN_00025808(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_48;
  undefined1 auStack_44 [4];
  undefined4 local_40;
  undefined1 auStack_3c [16];
  int local_2c;
  
  iVar5 = DAT_00025978 + 0x25828;
  piVar4 = *(int **)(iVar5 + DAT_0002597c);
  local_2c = *piVar4;
  uVar1 = FUN_00020bcc();
  iVar2 = dbus_message_get_args(param_3,param_4,0x73,&local_48,0x75,&local_40,0);
  if (iVar2 != 0) {
    _dbus_string_init_const(auStack_3c,local_48);
    iVar2 = FUN_0002a908(uVar1,param_1,auStack_3c,local_40,auStack_44,param_2,param_4);
    if (iVar2 != 0) {
      iVar2 = dbus_message_new_method_return(param_3);
      if (iVar2 != 0) {
        iVar3 = dbus_message_append_args(iVar2,0x75,auStack_44,0);
        if ((iVar3 == 0) || (iVar3 = FUN_00021920(param_2,param_1,iVar2), iVar3 == 0)) {
          uVar1 = 0;
          dbus_set_error_const(param_4,DAT_00025988 + 0x2593c,*(undefined4 *)(iVar5 + DAT_00025980))
          ;
        }
        else {
          uVar1 = 1;
        }
        dbus_message_unref(iVar2);
        goto LAB_000258ec;
      }
      dbus_set_error_const(param_4,DAT_00025984 + 0x258e0,*(undefined4 *)(iVar5 + DAT_00025980));
    }
  }
  uVar1 = 0;
LAB_000258ec:
  if (local_2c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}



/* ===== FUN_0002598c @ 0002598c size=280 ===== */

void FUN_0002598c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *local_5c;
  int local_58;
  undefined4 local_54;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [28];
  int local_24;
  
  iVar1 = DAT_00025ab0;
  iVar4 = DAT_00025aac;
  piVar5 = *(int **)(DAT_00025aa4 + 0x259a0 + DAT_00025aa8);
  local_24 = *piVar5;
  _dbus_string_init_const(auStack_50);
  _dbus_type_reader_init_types_only(auStack_40,auStack_50,0);
  iVar6 = DAT_00025ab8 + 0x25a00;
  iVar4 = iVar4 + 0x259d4;
  if (param_3 == 0) {
    iVar4 = DAT_00025ab4 + 0x259fc;
  }
  do {
    iVar2 = _dbus_type_reader_get_current_type(auStack_40);
    if (iVar2 == 0) {
      uVar3 = 1;
LAB_00025a88:
      if (local_24 == *piVar5) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar3);
    }
    _dbus_type_reader_get_signature(auStack_40,&local_5c,&local_58,&local_54);
    iVar2 = _dbus_string_append_printf(param_1,iVar6,iVar4);
    if (((iVar2 == 0) ||
        (iVar2 = _dbus_string_append_len(param_1,*local_5c + local_58,local_54), iVar2 == 0)) ||
       (iVar2 = _dbus_string_append(param_1,iVar1 + 0x259dc), iVar2 == 0)) {
      uVar3 = 0;
      goto LAB_00025a88;
    }
    _dbus_type_reader_next(auStack_40);
  } while( true );
}



/* ===== FUN_00025abc @ 00025abc size=112 ===== */

undefined4 * FUN_00025abc(undefined4 *param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  pcVar3 = param_2;
  uVar4 = param_3;
  for (puVar2 = (undefined4 *)param_1[4];
      (puVar2 != (undefined4 *)0x0 && ((char *)*puVar2 != (char *)0x0)); puVar2 = puVar2 + 3) {
    iVar1 = strcmp(param_2,(char *)*puVar2);
    if (iVar1 == 0) {
      return puVar2;
    }
  }
  dbus_set_error(param_3,DAT_00025b30 + 0x25b08,DAT_00025b2c + 0x25b04,*param_1,param_2,pcVar3,uVar4
                );
  return (undefined4 *)0x0;
}



/* ===== FUN_00025b34 @ 00025b34 size=168 ===== */

undefined4 FUN_00025b34(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = DAT_00025bdc + 0x25b54;
  uVar5 = param_1;
  uVar1 = FUN_00020b90();
  iVar2 = FUN_0001b248(uVar1,param_4);
  if (iVar2 != 0) {
    iVar2 = dbus_message_new_method_return(param_3);
    if ((iVar2 != 0) && (iVar3 = FUN_00021920(param_2,param_1,iVar2), iVar3 != 0)) {
      dbus_message_unref(iVar2);
      return 1;
    }
    uVar1 = *(undefined4 *)(iVar4 + DAT_00025be0);
    dbus_set_error_const(param_4,DAT_00025be4 + 0x25bc0,uVar1,uVar1,uVar5,uVar1);
    if (iVar2 != 0) {
      dbus_message_unref(iVar2);
    }
  }
  return 0;
}



/* ===== FUN_00025f68 @ 00025f68 size=100 ===== */

undefined4 * FUN_00025f68(char *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(DAT_00025fcc + 0x25f80);
  while( true ) {
    if ((char *)*puVar2 == (char *)0x0) {
      dbus_set_error(param_2,DAT_00025fd4 + 0x25fa8,DAT_00025fd0 + 0x25fa0,param_1);
      return (undefined4 *)0x0;
    }
    iVar1 = strcmp(param_1,(char *)*puVar2);
    if (iVar1 == 0) break;
    puVar2 = puVar2 + 5;
  }
  return puVar2;
}



/* ===== FUN_00026164 @ 00026164 size=420 ===== */

void FUN_00026164(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 local_110;
  undefined1 auStack_10c [56];
  undefined1 auStack_d4 [56];
  undefined1 auStack_9c [56];
  undefined1 auStack_64 [56];
  int local_2c;
  
  iVar6 = DAT_00026308 + 0x26184;
  piVar4 = *(int **)(iVar6 + DAT_0002630c);
  local_2c = *piVar4;
  iVar1 = dbus_message_get_args(param_3,param_4,0x73,&local_110,0);
  if ((iVar1 != 0) && (iVar1 = FUN_00025f68(local_110,param_4), iVar1 != 0)) {
    uVar2 = FUN_0002168c(param_2);
    iVar3 = FUN_0002e07c(param_3,auStack_10c,auStack_d4);
    if (iVar3 != 0) {
      for (piVar5 = *(int **)(iVar1 + 0x10); (piVar5 != (int *)0x0 && (*piVar5 != 0));
          piVar5 = piVar5 + 3) {
        iVar1 = FUN_0002e0d4(auStack_d4,auStack_9c,*piVar5,piVar5[1],auStack_64);
        if (iVar1 == 0) {
LAB_00026274:
          dbus_message_iter_abandon_container(auStack_10c,auStack_d4);
          goto LAB_00026280;
        }
        iVar1 = (*(code *)piVar5[2])(uVar2,auStack_64);
        if (iVar1 == 0) {
          FUN_0002e19c();
          goto LAB_00026274;
        }
        iVar1 = FUN_0002e154(auStack_d4,auStack_9c,auStack_64);
        if (iVar1 == 0) goto LAB_00026274;
      }
      iVar1 = dbus_message_iter_close_container(auStack_10c,auStack_d4);
      if ((iVar1 != 0) && (iVar1 = FUN_00021920(param_2,param_1,iVar3), iVar1 != 0)) {
        dbus_message_unref(iVar3);
        uVar2 = 1;
        goto LAB_000262e8;
      }
LAB_00026280:
      dbus_message_unref(iVar3);
    }
    dbus_set_error_const(param_4,DAT_00026314 + 0x26224,*(undefined4 *)(iVar6 + DAT_00026310));
  }
  uVar2 = 0;
LAB_000262e8:
  if (local_2c == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



/* ===== FUN_00026318 @ 00026318 size=192 ===== */

void FUN_00026318(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 auStack_4c [56];
  int local_14;
  
  piVar2 = *(int **)(DAT_000263d8 + 0x26338 + DAT_000263dc);
  local_14 = *piVar2;
  dbus_message_iter_init(param_3,auStack_4c);
  dbus_message_iter_get_basic(auStack_4c,&local_54);
  dbus_message_iter_next(auStack_4c);
  dbus_message_iter_get_basic(auStack_4c,&local_50);
  iVar1 = FUN_00025f68(local_54,param_4);
  if ((iVar1 != 0) && (iVar1 = FUN_00025abc(iVar1,local_50,param_4), iVar1 != 0)) {
    dbus_set_error(param_4,DAT_000263e4 + 0x263b8,DAT_000263e0 + 0x263b0,local_54,local_50);
  }
  if (local_14 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}



/* ===== FUN_000263e8 @ 000263e8 size=220 ===== */

void FUN_000263e8(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 *param_4,
                 int *param_5,undefined4 param_6)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  char *local_28;
  int local_24;
  
  piVar5 = *(int **)(DAT_000264c4 + 0x26408 + DAT_000264c8);
  local_24 = *piVar5;
  local_28 = param_3;
  iVar2 = dbus_message_get_args(param_2,param_6,0x73,&local_28,0,param_2);
  pcVar1 = local_28;
  iVar3 = DAT_000264cc;
  if (iVar2 != 0) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = local_28;
    }
    iVar3 = strcmp(local_28,(char *)(iVar3 + 0x26454));
    uVar4 = 0;
    if (iVar3 == 0) goto LAB_000264a8;
    iVar3 = FUN_0002446c(param_1,pcVar1);
    if (iVar3 != 0) {
      if (param_5 != (int *)0x0) {
        *param_5 = iVar3;
      }
      uVar4 = 1;
      goto LAB_000264a8;
    }
    dbus_set_error(param_6,DAT_000264d4 + 0x26494,DAT_000264d0 + 0x26490,param_3,local_28);
  }
  uVar4 = 2;
LAB_000264a8:
  if (local_24 != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}



/* ===== FUN_000264d8 @ 000264d8 size=668 ===== */

void FUN_000264d8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  size_t sVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 local_c0;
  int local_bc;
  int local_b8;
  char *local_b4;
  undefined1 auStack_b0 [4];
  undefined1 auStack_ac [4];
  undefined4 local_a8;
  undefined1 auStack_9c [56];
  undefined1 auStack_64 [56];
  int local_2c;
  
  iVar8 = DAT_00026774 + 0x264f8;
  piVar7 = *(int **)(iVar8 + DAT_00026778);
  local_2c = *piVar7;
  iVar2 = FUN_000263e8(param_1,param_3,DAT_0002677c + 0x26518,auStack_b0,&local_c0,param_4);
  if (iVar2 == 0) {
    local_b8 = _dbus_getpid();
    local_bc = _dbus_getuid();
LAB_00026554:
    iVar6 = FUN_0002e07c(param_3,auStack_9c,auStack_64);
    if (((iVar6 != 0) &&
        ((local_b8 == -1 || (iVar4 = FUN_0002e1c8(auStack_64,DAT_0002678c + 0x266c4), iVar4 != 0))))
       && ((local_bc == -1 || (iVar4 = FUN_0002e1c8(auStack_64,DAT_00026780 + 0x2659c), iVar4 != 0))
          )) {
      if (iVar2 == 1) {
        iVar2 = dbus_connection_get_windows_user(local_c0,&local_b4);
        if (iVar2 != 0) {
          if (local_b4 == (char *)0x0) goto LAB_000266cc;
          _dbus_string_init_const(auStack_ac);
          iVar2 = _dbus_string_validate_utf8(auStack_ac,0,local_a8);
          _dbus_string_free(auStack_ac);
          if ((iVar2 == 0) ||
             (iVar2 = FUN_0002e27c(auStack_64,DAT_00026784 + 0x26618,local_b4), iVar2 != 0)) {
            dbus_free(local_b4);
            goto LAB_0002662c;
          }
LAB_00026678:
          dbus_free(local_b4);
          goto LAB_000266cc;
        }
LAB_0002662c:
        iVar2 = _dbus_connection_get_linux_security_label(local_c0,&local_b4);
        pcVar1 = local_b4;
        if (iVar2 != 0) {
          if (local_b4 == (char *)0x0) goto LAB_000266cc;
          sVar5 = strlen(local_b4);
          iVar2 = FUN_0002e330(auStack_64,DAT_00026788 + 0x2666c,pcVar1,sVar5 + 1);
          if (iVar2 == 0) goto LAB_00026678;
          dbus_free(local_b4);
        }
      }
      iVar2 = dbus_message_iter_close_container(auStack_9c,auStack_64);
      if (iVar2 != 0) {
        iVar2 = FUN_00021920(param_2,param_1,iVar6);
        if (iVar2 != 0) {
          dbus_message_unref(iVar6);
          uVar3 = 1;
          goto LAB_00026754;
        }
        dbus_message_unref(iVar6);
        iVar6 = 0;
      }
    }
LAB_000266cc:
    dbus_set_error_const(param_4,DAT_00026794 + 0x266e4,*(undefined4 *)(iVar8 + DAT_00026790));
    if (iVar6 != 0) {
      dbus_message_iter_abandon_container(auStack_9c,auStack_64);
      dbus_message_unref(iVar6);
    }
  }
  else if (iVar2 == 1) {
    iVar6 = dbus_connection_get_unix_process_id(local_c0,&local_b8);
    if (iVar6 == 0) {
      local_b8 = -1;
    }
    iVar6 = dbus_connection_get_unix_user(local_c0,&local_bc);
    if (iVar6 == 0) {
      local_bc = -1;
    }
    goto LAB_00026554;
  }
  uVar3 = 0;
LAB_00026754:
  if (local_2c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_00026798 @ 00026798 size=328 ===== */

void FUN_00026798(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  
  iVar4 = DAT_000268e0 + 0x267b8;
  piVar5 = *(int **)(iVar4 + DAT_000268e4);
  local_24 = *piVar5;
  iVar1 = FUN_000263e8(param_1,param_3,DAT_000268e8 + 0x267d0,&local_28,&local_2c,param_4);
  if (iVar1 != 2) {
    iVar3 = dbus_message_new_method_return(param_3);
    if (iVar3 == 0) {
LAB_000268ac:
      dbus_set_error_const(param_4,DAT_000268f8 + 0x268c4,*(undefined4 *)(iVar4 + DAT_000268f4));
      if (iVar3 == 0) goto LAB_000267f0;
    }
    else {
      if (iVar1 == 0) {
        iVar1 = FUN_000299fc();
LAB_00026818:
        if (iVar1 != 0) {
          iVar1 = FUN_00029a24(iVar3,iVar1,param_4);
          if (iVar1 != 0) {
            iVar1 = FUN_00021920(param_2,param_1,iVar3);
            if (iVar1 != 0) {
              dbus_message_unref(iVar3);
              uVar2 = 1;
              goto LAB_0002685c;
            }
            goto LAB_000268ac;
          }
          goto LAB_00026894;
        }
      }
      else if (iVar1 == 1) {
        iVar1 = FUN_00020c38(local_2c);
        goto LAB_00026818;
      }
      dbus_set_error(param_4,DAT_000268f0 + 0x26894,DAT_000268ec + 0x26890,local_28);
    }
LAB_00026894:
    dbus_message_unref(iVar3);
  }
LAB_000267f0:
  uVar2 = 0;
LAB_0002685c:
  if (local_24 == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



/* ===== FUN_000268fc @ 000268fc size=368 ===== */

void FUN_000268fc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  
  iVar5 = DAT_00026a6c + 0x2691c;
  piVar3 = *(int **)(iVar5 + DAT_00026a70);
  local_2c = *piVar3;
  local_38 = 0;
  iVar1 = FUN_000263e8(param_1,param_3,DAT_00026a74 + 0x26934,&local_30,&local_3c,param_4);
  if (iVar1 != 2) {
    iVar2 = dbus_message_new_method_return(param_3);
    if (iVar2 == 0) {
LAB_00026a38:
      dbus_set_error_const(param_4,DAT_00026a84 + 0x26a50,*(undefined4 *)(iVar5 + DAT_00026a80));
      if (iVar2 == 0) goto LAB_00026960;
    }
    else {
      if (iVar1 == 1) {
        iVar1 = dbus_connection_get_adt_audit_session_data(local_3c,&local_38,&local_34);
        if ((iVar1 != 0) && (local_38 != 0)) {
          iVar1 = dbus_message_append_args(iVar2,0x61,0x79,&local_38,local_34,0);
          if ((iVar1 != 0) && (iVar1 = FUN_00021920(param_2,param_1,iVar2), iVar1 != 0)) {
            dbus_message_unref(iVar2);
            uVar4 = 1;
            goto LAB_00026a1c;
          }
          goto LAB_00026a38;
        }
      }
      dbus_set_error(param_4,DAT_00026a7c + 0x269a0,DAT_00026a78 + 0x2699c,local_30);
    }
    dbus_message_unref(iVar2);
  }
LAB_00026960:
  uVar4 = 0;
LAB_00026a1c:
  if (local_2c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}



/* ===== FUN_00026a88 @ 00026a88 size=344 ===== */

void FUN_00026a88(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  
  iVar4 = DAT_00026be0 + 0x26aa8;
  piVar5 = *(int **)(iVar4 + DAT_00026be4);
  local_24 = *piVar5;
  iVar1 = FUN_000263e8(param_1,param_3,DAT_00026be8 + 0x26ac0,&local_28,&local_34,param_4);
  if (iVar1 == 0) {
    local_30 = _dbus_getpid();
LAB_00026b08:
    if (local_30 == -1) {
LAB_00026b88:
      dbus_set_error(param_4,DAT_00026bf0 + 0x26ba4,DAT_00026bec + 0x26ba0,local_28);
    }
    else {
      iVar1 = dbus_message_new_method_return(param_3);
      if (iVar1 != 0) {
        local_2c = local_30;
        iVar3 = dbus_message_append_args(iVar1,0x75,&local_2c,0);
        if ((iVar3 != 0) && (iVar3 = FUN_00021920(param_2,param_1,iVar1), iVar3 != 0)) {
          dbus_message_unref(iVar1);
          uVar2 = 1;
          goto LAB_00026aec;
        }
      }
      dbus_set_error_const(param_4,DAT_00026bf8 + 0x26bc0,*(undefined4 *)(iVar4 + DAT_00026bf4));
      uVar2 = 0;
      if (iVar1 == 0) goto LAB_00026aec;
      dbus_message_unref();
    }
  }
  else if (iVar1 == 1) {
    iVar1 = dbus_connection_get_unix_process_id(local_34,&local_30);
    if (iVar1 != 0) goto LAB_00026b08;
    local_30 = -1;
    goto LAB_00026b88;
  }
  uVar2 = 0;
LAB_00026aec:
  if (local_24 == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



/* ===== FUN_00026bfc @ 00026bfc size=344 ===== */

void FUN_00026bfc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  
  iVar4 = DAT_00026d54 + 0x26c1c;
  piVar5 = *(int **)(iVar4 + DAT_00026d58);
  local_24 = *piVar5;
  iVar1 = FUN_000263e8(param_1,param_3,DAT_00026d5c + 0x26c34,&local_28,&local_34,param_4);
  if (iVar1 == 0) {
    local_30 = _dbus_getuid();
LAB_00026c7c:
    if (local_30 == -1) {
LAB_00026cfc:
      dbus_set_error(param_4,DAT_00026d64 + 0x26d18,DAT_00026d60 + 0x26d14,local_28);
    }
    else {
      iVar1 = dbus_message_new_method_return(param_3);
      if (iVar1 != 0) {
        local_2c = local_30;
        iVar3 = dbus_message_append_args(iVar1,0x75,&local_2c,0);
        if ((iVar3 != 0) && (iVar3 = FUN_00021920(param_2,param_1,iVar1), iVar3 != 0)) {
          dbus_message_unref(iVar1);
          uVar2 = 1;
          goto LAB_00026c60;
        }
      }
      dbus_set_error_const(param_4,DAT_00026d6c + 0x26d34,*(undefined4 *)(iVar4 + DAT_00026d68));
      uVar2 = 0;
      if (iVar1 == 0) goto LAB_00026c60;
      dbus_message_unref();
    }
  }
  else if (iVar1 == 1) {
    iVar1 = dbus_connection_get_unix_user(local_34,&local_30);
    if (iVar1 != 0) goto LAB_00026c7c;
    local_30 = -1;
    goto LAB_00026cfc;
  }
  uVar2 = 0;
LAB_00026c60:
  if (local_24 == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



/* ===== FUN_00026d70 @ 00026d70 size=368 ===== */

void FUN_00026d70(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  
  iVar5 = DAT_00026ee0 + 0x26d8c;
  piVar8 = *(int **)(iVar5 + DAT_00026ee4);
  local_24 = *piVar8;
  iVar7 = DAT_00026ee8 + 0x26db8;
  local_28 = DAT_00026ef4 + 0x26dbc;
  local_34 = param_3;
  local_30 = param_2;
  local_2c = param_1;
  iVar1 = dbus_message_new_signal(DAT_00026ef0 + 0x26dc8,iVar7,DAT_00026eec + 0x26dc4);
  if (iVar1 == 0) {
    uVar3 = *(undefined4 *)(iVar5 + DAT_00026ef8);
    iVar1 = DAT_00026efc + 0x26dec;
  }
  else {
    iVar7 = dbus_message_set_sender(iVar1,iVar7);
    if (iVar7 != 0) {
      if (local_30 == 0) {
        piVar2 = &local_28;
      }
      else {
        piVar2 = &local_30;
      }
      if (local_34 == 0) {
        piVar4 = &local_28;
      }
      else {
        piVar4 = &local_34;
      }
      iVar7 = dbus_message_append_args(iVar1,0x73,&local_2c,0x73,piVar2,0x73,piVar4,0);
      if ((iVar7 != 0) && (iVar7 = FUN_000217ac(param_4,0,0,iVar1), iVar7 != 0)) {
        uVar6 = FUN_00023ab8(param_4,0,0,iVar1,param_5);
        dbus_message_unref(iVar1);
        goto LAB_00026e9c;
      }
    }
    dbus_message_unref(iVar1);
    uVar3 = *(undefined4 *)(iVar5 + DAT_00026ef8);
    iVar1 = DAT_00026f00 + 0x26ed0;
  }
  uVar6 = 0;
  dbus_set_error_const(param_5,iVar1,uVar3);
LAB_00026e9c:
  if (local_24 == *piVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}



/* ===== FUN_00026f04 @ 00026f04 size=284 ===== */

undefined4 FUN_00026f04(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_1c;
  
  iVar4 = DAT_0002702c;
  local_1c = param_2;
  iVar1 = dbus_message_new_signal
                    (DAT_00027028 + 0x26f34,DAT_00027020 + 0x26f30,DAT_00027024 + 0x26f2c,param_4,
                     param_1);
  iVar4 = iVar4 + 0x26f44;
  if (iVar1 == 0) {
    uVar3 = *(undefined4 *)(iVar4 + DAT_00027030);
    iVar4 = DAT_00027034 + 0x26f58;
  }
  else {
    uVar3 = FUN_0002152c(param_1);
    iVar2 = dbus_message_set_destination(iVar1,uVar3);
    if ((iVar2 != 0) && (iVar2 = dbus_message_append_args(iVar1,0x73,&local_1c,0), iVar2 != 0)) {
      iVar2 = FUN_00021920(param_3,param_1,iVar1);
      if (iVar2 == 0) {
        dbus_message_unref(iVar1);
        uVar3 = *(undefined4 *)(iVar4 + DAT_00027030);
        dbus_set_error_const(param_4,DAT_0002703c + 0x27008,uVar3,uVar3,uVar3);
        return 0;
      }
      dbus_message_unref(iVar1);
      return 1;
    }
    dbus_message_unref(iVar1);
    uVar3 = *(undefined4 *)(iVar4 + DAT_00027030);
    iVar4 = DAT_00027038 + 0x26fac;
  }
  dbus_set_error_const(param_4,iVar4,uVar3,uVar3,uVar3);
  return 0;
}



/* ===== FUN_00027040 @ 00027040 size=284 ===== */

undefined4 FUN_00027040(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_1c;
  
  iVar4 = DAT_00027168;
  local_1c = param_2;
  iVar1 = dbus_message_new_signal
                    (DAT_00027164 + 0x27070,DAT_0002715c + 0x2706c,DAT_00027160 + 0x27068,param_4,
                     param_1);
  iVar4 = iVar4 + 0x27080;
  if (iVar1 == 0) {
    uVar3 = *(undefined4 *)(iVar4 + DAT_0002716c);
    iVar4 = DAT_00027170 + 0x27094;
  }
  else {
    uVar3 = FUN_0002152c(param_1);
    iVar2 = dbus_message_set_destination(iVar1,uVar3);
    if ((iVar2 != 0) && (iVar2 = dbus_message_append_args(iVar1,0x73,&local_1c,0), iVar2 != 0)) {
      iVar2 = FUN_00021920(param_3,param_1,iVar1);
      if (iVar2 == 0) {
        dbus_message_unref(iVar1);
        uVar3 = *(undefined4 *)(iVar4 + DAT_0002716c);
        dbus_set_error_const(param_4,DAT_00027178 + 0x27144,uVar3,uVar3,uVar3);
        return 0;
      }
      dbus_message_unref(iVar1);
      return 1;
    }
    dbus_message_unref(iVar1);
    uVar3 = *(undefined4 *)(iVar4 + DAT_0002716c);
    iVar4 = DAT_00027174 + 0x270e8;
  }
  dbus_set_error_const(param_4,iVar4,uVar3,uVar3,uVar3);
  return 0;
}



/* ===== FUN_0002717c @ 0002717c size=188 ===== */

undefined4 FUN_0002717c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar4 = DAT_00027238 + 0x2719c;
  uVar5 = param_1;
  uVar6 = param_3;
  iVar1 = dbus_message_get_no_reply(param_3);
  if (iVar1 == 0) {
    iVar1 = dbus_message_new_method_return(param_3);
    if (iVar1 == 0) {
      uVar3 = *(undefined4 *)(iVar4 + DAT_0002723c);
      dbus_set_error_const(param_4,DAT_00027240 + 0x271d0,uVar3,uVar3,uVar5,uVar3,uVar6);
      return 0;
    }
    iVar2 = FUN_00021920(param_2,param_1,iVar1);
    if (iVar2 == 0) {
      uVar3 = *(undefined4 *)(iVar4 + DAT_0002723c);
      dbus_set_error_const(param_4,DAT_00027244 + 0x27214,uVar3,uVar3,uVar5,uVar3,uVar6);
      dbus_message_unref(iVar1);
      return 0;
    }
    dbus_message_unref(iVar1);
  }
  return 1;
}



/* ===== FUN_0002724c @ 0002724c size=640 ===== */

void FUN_0002724c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  int *local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined1 auStack_3c [16];
  int local_2c;
  
  iVar7 = DAT_000274cc + 0x2726c;
  piVar6 = *(int **)(iVar7 + DAT_000274d0);
  local_2c = *piVar6;
  local_4c = (int *)0x0;
  local_48 = 0;
  iVar1 = FUN_0002168c(param_2);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_0001a614();
  }
  iVar1 = FUN_00019d50(param_1,uVar2,param_4);
  if ((iVar1 != 0) &&
     (iVar1 = dbus_message_get_args(param_3,param_4,0x61,0x73,&local_4c,&local_44,0x75,&local_40,0),
     iVar1 != 0)) {
    if (local_40 == 0) {
      if (local_44 == 0) {
        piVar3 = (int *)dbus_malloc(8);
        local_4c = piVar3;
        if (piVar3 != (int *)0x0) {
          iVar1 = _dbus_strdup(DAT_000274e4 + 0x273d8);
          *piVar3 = iVar1;
          if (*local_4c != 0) {
            local_4c[1] = 0;
            local_44 = 1;
            goto LAB_000273f8;
          }
        }
        dbus_set_error_const(param_4,DAT_000274e0 + 0x273c0,*(undefined4 *)(iVar7 + DAT_000274dc));
        bVar8 = false;
        goto LAB_000272c0;
      }
LAB_000273f8:
      for (iVar1 = 0; iVar1 < local_44; iVar1 = iVar1 + 1) {
        _dbus_string_init_const(auStack_3c,local_4c[iVar1]);
        iVar4 = FUN_0002bf30(param_1,auStack_3c,param_4);
        if (iVar4 == 0) goto LAB_000272bc;
        FUN_0002bd70(iVar4,1);
        iVar5 = _dbus_list_append(&local_48,iVar4);
        if (iVar5 == 0) {
          dbus_set_error_const(param_4,DAT_000274e8 + 0x27464,*(undefined4 *)(iVar7 + DAT_000274dc))
          ;
          FUN_0002ba7c(iVar4);
          bVar8 = false;
          goto LAB_000272c0;
        }
      }
      iVar1 = FUN_0002717c(param_1,param_2,param_3,param_4);
      if (iVar1 != 0) {
        iVar1 = FUN_00022668(param_1,param_2,&local_48,param_4);
        bVar8 = iVar1 != 0;
        goto LAB_000272c0;
      }
    }
    else {
      dbus_set_error(param_4,DAT_000274d8 + 0x27380,DAT_000274d4 + 0x2737c);
    }
  }
LAB_000272bc:
  bVar8 = false;
LAB_000272c0:
  iVar1 = _dbus_list_get_first_link(&local_48);
  do {
    if (iVar1 == 0) break;
    FUN_0002ba7c(*(undefined4 *)(iVar1 + 8));
    iVar1 = *(int *)(iVar1 + 4);
  } while (iVar1 != local_48);
  _dbus_list_clear(&local_48);
  dbus_free_string_array(local_4c);
  if (local_2c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar8);
  }
  return;
}



/* ===== FUN_000274ec @ 000274ec size=244 ===== */

void FUN_000274ec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_38;
  undefined1 auStack_34 [16];
  int local_24;
  
  piVar4 = *(int **)(DAT_000275e0 + 0x2750c + DAT_000275e4);
  local_24 = *piVar4;
  local_38 = 0;
  iVar1 = dbus_message_get_args(param_3,param_4,0x73,&local_38,0);
  if (iVar1 != 0) {
    _dbus_string_init_const(auStack_34,local_38);
    iVar1 = FUN_0002bf30(param_1,auStack_34,param_4);
    if (iVar1 != 0) {
      iVar3 = FUN_0002717c(param_1,param_2,param_3,param_4);
      if (iVar3 != 0) {
        uVar2 = FUN_00020c14(param_1);
        iVar3 = FUN_0002ce64(uVar2,iVar1,param_4);
        if (iVar3 != 0) {
          FUN_0002ba7c(iVar1);
          uVar2 = 1;
          goto LAB_000275b8;
        }
      }
      FUN_0002ba7c(iVar1);
    }
  }
  uVar2 = 0;
LAB_000275b8:
  if (local_24 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/* ===== FUN_000275e8 @ 000275e8 size=536 ===== */

void FUN_000275e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_40;
  undefined1 auStack_3c [4];
  undefined4 local_38;
  int local_2c;
  
  iVar5 = DAT_00027800 + 0x27608;
  piVar4 = *(int **)(iVar5 + DAT_00027804);
  local_40 = 0;
  local_2c = *piVar4;
  uVar1 = FUN_0002168c(param_2);
  iVar2 = FUN_0001a6c0();
  iVar3 = FUN_00020fe8(param_1);
  if (iVar3 < iVar2) {
    iVar2 = dbus_message_get_args(param_3,param_4,0x73,&local_40,0);
    if (iVar2 != 0) {
      _dbus_string_init_const(auStack_3c,local_40);
      iVar2 = FUN_0002bf30(param_1,auStack_3c,param_4);
      if (iVar2 != 0) {
        uVar1 = FUN_0001a614(uVar1);
        iVar3 = FUN_0002bd88(iVar2);
        if ((iVar3 == 0) ||
           ((iVar3 = FUN_00024f24(param_1,param_2,param_3,param_4), iVar3 != 0 &&
            (iVar3 = FUN_00019d50(param_1,uVar1,param_4), iVar3 != 0)))) {
          uVar1 = FUN_00020c14(param_1);
          iVar3 = FUN_0002cd5c(uVar1,iVar2);
          if (iVar3 == 0) {
            dbus_set_error_const
                      (param_4,DAT_0002781c + 0x2775c,*(undefined4 *)(iVar5 + DAT_00027818));
          }
          else {
            iVar3 = FUN_0002717c(param_1,param_2,param_3,param_4);
            if (iVar3 != 0) {
              FUN_0002ba7c(iVar2);
              uVar1 = 1;
              goto LAB_000277e0;
            }
            FUN_0002cdfc(uVar1,iVar2);
          }
        }
        FUN_0002ba7c(iVar2);
      }
    }
  }
  else {
    dbus_error_init(auStack_3c);
    iVar3 = FUN_00020c7c(param_1);
    if (iVar3 == 0) {
      iVar3 = DAT_00027814 + 0x276c4;
    }
    else {
      iVar3 = FUN_0002152c(param_1);
    }
    dbus_set_error(auStack_3c,DAT_0002780c + 0x27688,DAT_00027808 + 0x27684,iVar3,iVar2);
    FUN_0001a6ec(uVar1,1,DAT_00027810 + 0x276a4,local_38);
    dbus_move_error(auStack_3c,param_4);
  }
  uVar1 = 0;
LAB_000277e0:
  if (local_2c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}



/* ===== FUN_00027d14 @ 00027d14 size=1292 ===== */

bool FUN_00027d14(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int local_128;
  int local_124;
  undefined4 local_120;
  undefined4 local_11c [4];
  undefined1 auStack_10c [56];
  undefined1 auStack_d4 [56];
  undefined1 auStack_9c [56];
  undefined4 local_64 [14];
  int local_2c;
  
  FUN_00020b90();
  iVar7 = FUN_0001a624();
  if (iVar7 != 0) {
    dbus_set_error(param_4,DAT_00027d74 + 0x27d68,DAT_00027d70 + 0x27d64);
    return false;
  }
  iVar7 = DAT_00027cd0 + 0x27840;
  piVar8 = *(int **)(iVar7 + DAT_00027cd4);
  local_2c = *piVar8;
  uVar1 = FUN_00020bf0();
  dbus_message_iter_init(param_3,auStack_10c);
  dbus_message_iter_recurse(auStack_10c,auStack_d4);
  local_128 = 0;
  local_124 = 0;
  while (iVar2 = dbus_message_iter_get_arg_type(auStack_d4), iVar2 == 0x65) {
    dbus_message_iter_recurse(auStack_d4,auStack_9c);
    while (iVar2 = dbus_message_iter_get_arg_type(auStack_9c), iVar2 == 0x73) {
      dbus_message_iter_get_basic(auStack_9c,local_11c);
      dbus_message_iter_next(auStack_9c);
      iVar2 = dbus_message_iter_get_arg_type(auStack_9c);
      if (iVar2 != 0x73) goto LAB_000279b8;
      dbus_message_iter_get_basic(auStack_9c,local_64);
      iVar2 = _dbus_list_append(&local_128,local_11c[0]);
      if ((iVar2 == 0) || (iVar2 = _dbus_list_append(&local_124,local_64[0]), iVar2 == 0)) {
        dbus_set_error_const(param_4,DAT_00027cf0 + 0x279b0,*(undefined4 *)(iVar7 + DAT_00027ce8));
        goto LAB_000279b8;
      }
      dbus_message_iter_next(auStack_9c);
    }
    if (iVar2 != 0) goto LAB_000279b8;
    dbus_message_iter_next(auStack_d4);
  }
  if (iVar2 != 0) {
LAB_000279b8:
    bVar11 = false;
    goto LAB_000279bc;
  }
  FUN_00020b90(param_1);
  iVar3 = FUN_0001a62c();
  iVar2 = 0;
  if (iVar3 == 0) {
LAB_00027a78:
    iVar9 = DAT_00027d00 + 0x27a8c;
    iVar3 = local_128;
    iVar10 = local_124;
    while (iVar3 != 0) {
      uVar5 = *(undefined4 *)(iVar3 + 8);
      uVar6 = *(undefined4 *)(iVar10 + 8);
      iVar4 = FUN_00018c8c(uVar1,uVar5,uVar6,param_4);
      if (iVar4 == 0) {
        if (iVar2 == 0) goto LAB_000279b8;
LAB_00027b58:
        bVar11 = false;
        dbus_message_iter_abandon_container(auStack_10c,local_64);
        goto LAB_00027b68;
      }
      if (iVar2 != 0) {
        iVar4 = _dbus_string_init(local_11c);
        if ((iVar4 != 0) &&
           (iVar4 = _dbus_string_append_printf(local_11c,iVar9,uVar5,uVar6), iVar4 != 0)) {
          local_120 = local_11c[0];
          iVar4 = dbus_message_iter_append_basic(local_64,0x73,&local_120);
          if (iVar4 != 0) {
            _dbus_string_free(local_11c);
            goto LAB_00027b9c;
          }
        }
        dbus_set_error_const(param_4,DAT_00027d08 + 0x27b48,*(undefined4 *)(iVar7 + DAT_00027ce8));
        _dbus_string_free(local_11c);
        goto LAB_00027b58;
      }
LAB_00027b9c:
      iVar3 = *(int *)(iVar3 + 4);
      iVar10 = *(int *)(iVar10 + 4);
      if (iVar3 == local_128) {
        iVar3 = 0;
      }
      if (iVar10 == local_124) {
        iVar10 = 0;
      }
    }
    if (iVar2 == 0) {
LAB_00027c64:
      iVar7 = FUN_0002717c(param_1,param_2,param_3,param_4);
      bVar11 = iVar7 != 0;
      goto LAB_00027910;
    }
    iVar3 = dbus_message_iter_close_container(auStack_10c,local_64);
    if (iVar3 == 0) {
      uVar1 = *(undefined4 *)(iVar7 + DAT_00027ce8);
      iVar7 = DAT_00027d04 + 0x27acc;
LAB_00027a6c:
      bVar11 = false;
      dbus_set_error_const(param_4,iVar7,uVar1);
    }
    else {
      uVar1 = dbus_message_get_destination(iVar2);
      _dbus_string_init_const(local_11c,uVar1);
      uVar5 = FUN_0002168c(param_2);
      uVar6 = FUN_0001a638();
      iVar3 = FUN_00029cbc(uVar6,local_11c);
      if (iVar3 != 0) {
        uVar1 = FUN_0002a8c4();
        iVar3 = FUN_00021920(param_2,uVar1,iVar2);
        if (iVar3 != 0) goto LAB_00027c64;
        uVar1 = *(undefined4 *)(iVar7 + DAT_00027ce8);
        iVar7 = DAT_00027d10 + 0x27cb4;
        goto LAB_00027a6c;
      }
      uVar5 = FUN_0001a648(uVar5);
      iVar3 = FUN_000217ac(param_2,0,0,iVar2);
      if (iVar3 == 0) {
        uVar1 = *(undefined4 *)(iVar7 + DAT_00027ce8);
        iVar7 = DAT_00027d0c + 0x27c38;
        goto LAB_00027a6c;
      }
      iVar7 = FUN_00018d30(uVar5,0,param_2,1,iVar2,uVar1,param_4);
      bVar11 = false;
      if (iVar7 != 0) goto LAB_00027c64;
    }
  }
  else {
    iVar2 = dbus_message_new_method_call
                      (DAT_00027ce4 + 0x278e4,DAT_00027ce0 + 0x278e0,DAT_00027cdc + 0x278dc,
                       DAT_00027cd8 + 0x278d8);
    if ((iVar2 != 0) && (iVar3 = dbus_message_set_sender(iVar2,DAT_00027cf4 + 0x27a14), iVar3 != 0))
    {
      dbus_message_set_no_reply(iVar2,1);
      dbus_message_iter_init_append(iVar2,auStack_10c);
      iVar3 = dbus_message_iter_open_container(auStack_10c,0x61,DAT_00027cf8 + 0x27a4c,local_64);
      if (iVar3 != 0) goto LAB_00027a78;
      uVar1 = *(undefined4 *)(iVar7 + DAT_00027ce8);
      iVar7 = DAT_00027cfc + 0x27a68;
      goto LAB_00027a6c;
    }
    bVar11 = false;
    dbus_set_error_const(param_4,DAT_00027cec + 0x27908,*(undefined4 *)(iVar7 + DAT_00027ce8));
LAB_00027910:
    if (iVar2 == 0) goto LAB_000279bc;
  }
LAB_00027b68:
  dbus_message_unref(iVar2);
LAB_000279bc:
  _dbus_list_clear(&local_128);
  _dbus_list_clear(&local_124);
  if (local_2c == *piVar8) {
    return bVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar11);
}



/* ===== FUN_00027d78 @ 00027d78 size=592 ===== */

bool FUN_00027d78(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar1 = _dbus_string_append(param_1,DAT_00027fc8 + 0x27d94,param_3,param_4,param_1,param_2,param_3
                             );
  if ((iVar1 == 0) || (iVar1 = _dbus_string_append(param_1,DAT_00027fcc + 0x27db8), iVar1 == 0)) {
LAB_00027d9c:
    bVar8 = false;
  }
  else {
    iVar6 = DAT_00027fd4 + 0x27dd8;
    iVar1 = DAT_00027fd8 + 0x27ddc;
    for (piVar4 = (int *)(DAT_00027fd0 + 0x27dd4); *piVar4 != 0; piVar4 = piVar4 + 5) {
      if ((param_2 != 0) || ((piVar4[3] & 1U) != 0)) {
        iVar2 = _dbus_string_append_printf(param_1,iVar1);
        if (iVar2 == 0) goto LAB_00027d9c;
        iVar2 = DAT_00027fe0 + 0x27e54;
        iVar7 = DAT_00027fe4 + 0x27e58;
        piVar5 = (int *)piVar4[1];
        while (*piVar5 != 0) {
          iVar3 = _dbus_string_append_printf(param_1,iVar2);
          if ((((iVar3 == 0) || (iVar3 = FUN_0002598c(param_1,piVar5[1],1), iVar3 == 0)) ||
              (iVar3 = FUN_0002598c(param_1,piVar5[2],0), iVar3 == 0)) ||
             (iVar3 = _dbus_string_append(param_1,iVar7), piVar5 = piVar5 + 5, iVar3 == 0))
          goto LAB_00027d9c;
        }
        iVar2 = DAT_00027fe8 + 0x27e70;
        for (piVar5 = (int *)piVar4[4]; (piVar5 != (int *)0x0 && (*piVar5 != 0));
            piVar5 = piVar5 + 3) {
          iVar7 = _dbus_string_append_printf(param_1,iVar6,*piVar5,piVar5[1]);
          if ((iVar7 == 0) || (iVar7 = _dbus_string_append(param_1,iVar2), iVar7 == 0))
          goto LAB_00027d9c;
        }
        if (((piVar4[2] != 0) && (iVar2 = _dbus_string_append(param_1), iVar2 == 0)) ||
           (iVar2 = _dbus_string_append(param_1,DAT_00027fec + 0x27e9c), iVar2 == 0))
        goto LAB_00027d9c;
      }
    }
    if (param_3 != 0) {
      iVar1 = dbus_message_has_path(param_3,DAT_00027ff0 + 0x27f60);
      if (iVar1 == 0) {
        iVar1 = dbus_message_has_path(param_3,DAT_00027ff8 + 0x27f94);
        if (iVar1 == 0) {
          iVar1 = dbus_message_has_path(param_3,DAT_00028000 + 0x27fb4);
          if (iVar1 == 0) goto LAB_00027df0;
          iVar1 = (int)&DAT_00027fc8 + DAT_00028004;
        }
        else {
          iVar1 = DAT_00027ffc + 0x27fa4;
        }
      }
      else {
        iVar1 = DAT_00027ff4 + 0x27f74;
      }
      iVar1 = _dbus_string_append(param_1,iVar1);
      if (iVar1 == 0) goto LAB_00027d9c;
    }
LAB_00027df0:
    iVar1 = _dbus_string_append(param_1,DAT_00027fdc + 0x27e00);
    bVar8 = iVar1 != 0;
  }
  return bVar8;
}



/* ===== FUN_00028008 @ 00028008 size=360 ===== */

void FUN_00028008(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_40;
  undefined4 local_3c [4];
  int local_2c;
  
  iVar4 = DAT_00028170 + 0x28028;
  piVar5 = *(int **)(iVar4 + DAT_00028174);
  local_2c = *piVar5;
  iVar1 = dbus_message_get_args(param_3,param_4,0);
  uVar2 = 0;
  if (iVar1 == 0) goto LAB_00028084;
  iVar1 = _dbus_string_init(local_3c);
  if (iVar1 == 0) {
    dbus_set_error_const(param_4,DAT_0002817c + 0x2807c,*(undefined4 *)(iVar4 + DAT_00028178));
    uVar2 = 0;
    goto LAB_00028084;
  }
  uVar2 = dbus_message_has_path(param_3,DAT_00028180 + 0x280ac);
  iVar1 = FUN_00027d78(local_3c,uVar2,param_3);
  if (iVar1 == 0) {
LAB_00028124:
    iVar1 = 0;
  }
  else {
    local_40 = local_3c[0];
    iVar1 = dbus_message_new_method_return(param_3);
    if (iVar1 == 0) goto LAB_00028124;
    iVar3 = dbus_message_append_args(iVar1,0x73,&local_40,0);
    if ((iVar3 != 0) && (iVar3 = FUN_00021920(param_2,param_1,iVar1), iVar3 != 0)) {
      uVar2 = 1;
      dbus_message_unref(iVar1);
      _dbus_string_free(local_3c);
      goto LAB_00028084;
    }
  }
  dbus_set_error_const(param_4,DAT_00028184 + 0x28140,*(undefined4 *)(iVar4 + DAT_00028178));
  if (iVar1 != 0) {
    dbus_message_unref(iVar1);
  }
  uVar2 = 0;
  _dbus_string_free(local_3c);
LAB_00028084:
  if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/* ===== FUN_00028188 @ 00028188 size=1028 ===== */

bool FUN_00028188(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *__s2;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_50;
  undefined4 local_4c;
  char *local_48;
  undefined1 auStack_44 [12];
  char *local_38;
  undefined4 uStack_34;
  char *local_30;
  int local_2c;
  
  iVar2 = dbus_message_is_signal(param_3,DAT_00028460 + 0x281b0,DAT_0002845c + 0x281a8);
  if (iVar2 == 0) {
    iVar4 = dbus_message_get_type(param_3);
    iVar2 = DAT_00028474;
    if (iVar4 == 1) {
      local_30 = (char *)dbus_message_get_interface(param_3);
      puVar8 = (undefined4 *)(iVar2 + 0x282c0);
      __s2 = (char *)dbus_message_get_member(param_3);
      local_2c = dbus_message_has_path(param_3,DAT_00028478 + 0x282d4);
      bVar1 = false;
      do {
        if ((char *)*puVar8 == (char *)0x0) {
          if (bVar1) {
            iVar2 = (int)&DAT_0002845c + DAT_0002849c;
          }
          else {
            iVar2 = DAT_0002847c + 0x282f8;
          }
          iVar4 = DAT_00028480 + 0x28308;
          iVar5 = DAT_00028484 + 0x2830c;
          local_38 = __s2;
LAB_00028420:
          dbus_set_error(param_4,iVar2,iVar5,iVar4);
          return false;
        }
        if (((local_2c != 0) || ((puVar8[3] & 1) != 0)) &&
           ((local_30 == (char *)0x0 || (iVar2 = strcmp(local_30,(char *)*puVar8), iVar2 == 0)))) {
          for (puVar7 = (undefined4 *)puVar8[1]; (char *)*puVar7 != (char *)0x0; puVar7 = puVar7 + 5
              ) {
            iVar2 = strcmp((char *)*puVar7,__s2);
            if (iVar2 == 0) {
              if (((puVar7[4] & 2) != 0) &&
                 (iVar2 = FUN_00024f24(param_1,param_2,param_3,param_4), iVar2 == 0)) {
                return false;
              }
              if ((local_2c != 0) || ((puVar7[4] & 1) != 0)) {
                iVar2 = dbus_message_has_signature(param_3,puVar7[1]);
                if (iVar2 != 0) {
                  iVar2 = (*(code *)puVar7[3])(param_1,param_2,param_3,param_4);
                  return iVar2 != 0;
                }
                local_38 = (char *)dbus_message_get_signature(param_3);
                uStack_34 = puVar7[1];
                dbus_set_error(param_4,DAT_0002848c + 0x283c4,DAT_00028488 + 0x283bc,__s2);
                return false;
              }
              iVar4 = dbus_message_get_member(param_3);
              local_38 = (char *)(DAT_00028490 + 0x28414);
              iVar5 = DAT_00028494 + 0x28420;
              iVar2 = DAT_00028498 + 0x28424;
              goto LAB_00028420;
            }
          }
          bVar1 = true;
        }
        puVar8 = puVar8 + 5;
      } while( true );
    }
  }
  else {
    iVar2 = FUN_00024f24(param_1,param_2,param_3,param_4);
    if (iVar2 == 0) {
      return false;
    }
    uVar3 = FUN_00020b90(param_1);
    iVar2 = FUN_0002446c(param_1,DAT_00028464 + 0x28208);
    if (param_1 == iVar2) {
      iVar2 = FUN_0001a62c(uVar3);
      if (iVar2 == 0) {
        FUN_0001a6ec(uVar3,1,DAT_00028470 + 0x28274);
        return false;
      }
      iVar4 = FUN_0001a648(uVar3);
      piVar6 = *(int **)(DAT_00019c84 + 0x19b64 + DAT_00019c88);
      iVar5 = *piVar6;
      local_48 = (char *)0x0;
      dbus_error_init(auStack_44);
      iVar2 = dbus_message_get_args
                        (param_3,auStack_44,0x73,&local_48,0x73,&local_50,0x73,&local_4c,0);
      if (iVar2 != 0) {
        dbus_set_error(auStack_44,local_50,DAT_00019c8c + 0x19bd8,local_4c);
      }
      if (local_48 != (char *)0x0) {
        FUN_0001a6ec(*(undefined4 *)(iVar4 + 0x10),0,DAT_00019c90 + 0x19c08,local_48,local_4c);
        _dbus_hash_iter_init(*(undefined4 *)(iVar4 + 8),&uStack_34);
        while (iVar2 = _dbus_hash_iter_next(&uStack_34), iVar2 != 0) {
          iVar2 = _dbus_hash_iter_get_value(&uStack_34);
          if ((*(char **)(iVar2 + 0x10) != (char *)0x0) &&
             (iVar4 = strcmp(*(char **)(iVar2 + 0x10),local_48), iVar4 == 0)) {
            FUN_000171c8(iVar2,auStack_44);
          }
        }
      }
      dbus_error_free(auStack_44);
      if (iVar5 != *piVar6) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(1);
      }
      return true;
    }
    iVar2 = FUN_0002152c(param_1);
    if (iVar2 == 0) {
      iVar2 = DAT_00028468 + 0x28228;
    }
    local_38 = (char *)FUN_00020ca0(param_1);
    FUN_0001a6ec(uVar3,2,DAT_0002846c + 0x28244,iVar2);
  }
  return true;
}



/* ===== FUN_000284a0 @ 000284a0 size=4 ===== */

void FUN_000284a0(void)

{
  return;
}



/* ===== FUN_000284a8 @ 000284a8 size=156 ===== */

int FUN_000284a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = dbus_malloc0(0x18);
  iVar2 = DAT_00028544;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = param_3;
    *(undefined4 *)(iVar1 + 0x10) = param_4;
    *(undefined4 *)(iVar1 + 8) = param_1;
    *(undefined4 *)(iVar1 + 0x14) = param_2;
    iVar2 = _dbus_timeout_new(100,iVar2 + 0x284f4,iVar1,0);
    *(int *)(iVar1 + 4) = iVar2;
    if (iVar2 != 0) {
      _dbus_timeout_disable();
      iVar2 = FUN_0002e93c(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 4));
      if (iVar2 != 0) {
        return iVar1;
      }
    }
    if (*(int *)(iVar1 + 4) != 0) {
      _dbus_timeout_unref();
    }
    dbus_free(iVar1);
  }
  return 0;
}



/* ===== FUN_00028548 @ 00028548 size=40 ===== */

void FUN_00028548(int param_1)

{
  FUN_0002e9b0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 4));
  _dbus_timeout_unref(*(undefined4 *)(param_1 + 4));
  dbus_free(param_1);
  return;
}



/* ===== FUN_00028570 @ 00028570 size=44 ===== */

void FUN_00028570(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (-1 < param_2) {
    _dbus_timeout_restart();
    return;
  }
  iVar1 = dbus_timeout_get_enabled();
  if (iVar1 == 0) {
    return;
  }
  _dbus_timeout_disable(param_1);
  return;
}



/* ===== FUN_0002870c @ 0002870c size=12 ===== */

void FUN_0002870c(int param_1)

{
  _dbus_timeout_restart(*(undefined4 *)(param_1 + 4),0);
  return;
}



/* ===== <EXTERNAL>::_dbus_list_remove_link @ 00028718 size=4 ===== */

void _dbus_list_remove_link(void)

{
  (*(code *)PTR__dbus_list_remove_link_00048ce8)();
  return;
}



/* ===== <EXTERNAL>::_dbus_list_remove @ 0002871c size=4 ===== */

void _dbus_list_remove(void)

{
  (*(code *)PTR__dbus_list_remove_00048d18)();
  return;
}



/* ===== <EXTERNAL>::_dbus_list_unlink @ 00028720 size=4 ===== */

void _dbus_list_unlink(void)

{
  (*(code *)PTR__dbus_list_unlink_00048d0c)();
  return;
}



/* ===== FUN_00028724 @ 00028724 size=52 ===== */

int FUN_00028724(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _dbus_list_prepend();
  if ((iVar1 != 0) && (iVar2 = dbus_timeout_get_enabled(*(undefined4 *)(param_1 + 4)), iVar2 == 0))
  {
    _dbus_timeout_restart(*(undefined4 *)(param_1 + 4));
  }
  return iVar1;
}



/* ===== FUN_00028758 @ 00028758 size=40 ===== */

void FUN_00028758(int param_1)

{
  int iVar1;
  
  _dbus_list_prepend_link();
  iVar1 = dbus_timeout_get_enabled(*(undefined4 *)(param_1 + 4));
  if (iVar1 != 0) {
    return;
  }
  _dbus_timeout_restart(*(undefined4 *)(param_1 + 4));
  return;
}



/* ===== <EXTERNAL>::_dbus_list_get_first_link @ 00028780 size=4 ===== */

void _dbus_list_get_first_link(void)

{
  (*(code *)PTR__dbus_list_get_first_link_00048e50)();
  return;
}



/* ===== FUN_00028784 @ 00028784 size=24 ===== */

int FUN_00028784(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == *param_1) {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_0002879c @ 0002879c size=20 ===== */

bool FUN_0002879c(void)

{
  int iVar1;
  
  iVar1 = _dbus_list_find_last();
  return iVar1 != 0;
}



/* ===== FUN_000287b0 @ 000287b0 size=164 ===== */

uint FUN_000287b0(uint param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = _dbus_list_get_first_link(param_2);
LAB_000287d8:
  do {
    if (iVar1 == 0) {
      return param_1;
    }
    iVar2 = *(int *)(iVar1 + 4);
    iVar3 = *(int *)(iVar1 + 8);
    if (iVar2 == *param_2) {
      iVar2 = 0;
    }
    iVar1 = iVar2;
    if (*(int *)(iVar3 + 4) != 3) goto LAB_00028818;
  } while (*(int *)(iVar3 + 0xc) != param_3 && *(int *)(iVar3 + 0xc) != -1);
  goto LAB_0002880c;
LAB_00028818:
  if (*(int *)(iVar3 + 4) == 4) {
    if (*(int *)(iVar3 + 0xc) != -1) {
      for (iVar2 = 0; iVar2 < param_5; iVar2 = iVar2 + 1) {
        if (*(int *)(iVar3 + 0xc) == *(int *)(param_4 + iVar2 * 4)) goto LAB_0002880c;
      }
      if (iVar2 == param_5) goto LAB_000287d8;
    }
LAB_0002880c:
    param_1 = *(byte *)(iVar3 + 8) & 1;
  }
  goto LAB_000287d8;
}



/* ===== FUN_00028854 @ 00028854 size=192 ===== */

void FUN_00028854(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 local_28;
  int local_24;
  undefined4 uStack_20;
  
  piVar3 = *(int **)(DAT_00028914 + 0x28868 + DAT_00028918);
  local_24 = *piVar3;
  local_28 = 0;
  uStack_20 = param_3;
  iVar1 = _dbus_list_get_first_link(param_2);
  do {
    if (iVar1 == 0) break;
    iVar2 = _dbus_list_append(&local_28,*(undefined4 *)(iVar1 + 8));
    if (iVar2 == 0) {
      _dbus_list_clear(&local_28);
      uVar4 = 0;
      goto LAB_000288b4;
    }
    iVar1 = *(int *)(iVar1 + 4);
  } while (iVar1 != *param_2);
  while (iVar1 = _dbus_list_pop_first_link(&local_28), iVar1 != 0) {
    **(int **)(iVar1 + 8) = **(int **)(iVar1 + 8) + 1;
    _dbus_list_append_link(param_1);
  }
  uVar4 = 1;
LAB_000288b4:
  if (local_24 == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}



/* ===== FUN_0002891c @ 0002891c size=48 ===== */

void FUN_0002891c(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  _dbus_list_foreach(param_1,DAT_0002894c + 0x28938,0);
  _dbus_list_clear(param_1);
  dbus_free(param_1);
  return;
}



/* ===== FUN_00028950 @ 00028950 size=84 ===== */

int FUN_00028950(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _dbus_hash_table_lookup_uintptr();
  if (((iVar1 == 0) && (iVar1 = dbus_malloc0(4), iVar1 != 0)) &&
     (iVar2 = _dbus_hash_table_insert_uintptr(param_1,param_2,iVar1), iVar2 == 0)) {
    dbus_free(iVar1);
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_000289a4 @ 000289a4 size=168 ===== */

void FUN_000289a4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 auStack_34 [24];
  int local_1c;
  
  piVar4 = *(int **)(DAT_00028a4c + 0x289b4 + DAT_00028a50);
  local_1c = *piVar4;
  _dbus_hash_iter_init(param_2,auStack_34);
  do {
    iVar1 = _dbus_hash_iter_next(auStack_34);
    if (iVar1 == 0) {
      uVar2 = 1;
      goto LAB_00028a1c;
    }
    uVar2 = _dbus_hash_iter_get_uintptr_key(auStack_34);
    uVar3 = _dbus_hash_iter_get_value(auStack_34);
    iVar1 = FUN_00028950(param_1,uVar2);
  } while ((iVar1 != 0) && (iVar1 = FUN_00028854(iVar1,uVar3), iVar1 != 0));
  uVar2 = 0;
LAB_00028a1c:
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/* ===== FUN_00028a54 @ 00028a54 size=124 ===== */

void FUN_00028a54(undefined4 param_1,byte param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)dbus_malloc0(0x30);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  puVar1[1] = param_1;
  *puVar1 = 1;
  *(byte *)(puVar1 + 2) = *(byte *)(puVar1 + 2) & 0xfe | param_2 & 1;
  switch(param_1) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    return;
  case 3:
    goto LAB_00028aac;
  case 4:
LAB_00028aac:
    puVar1[3] = 0xffffffff;
    return;
  default:
    goto switchD_00028a90_default;
  }
  puVar1[3] = 0;
  *(byte *)(puVar1 + 0xb) = *(byte *)(puVar1 + 0xb) & 0xfd | (param_2 & 1) << 1;
switchD_00028a90_default:
  return;
}



/* ===== FUN_00028ae0 @ 00028ae0 size=120 ===== */

void FUN_00028ae0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (iVar1 + -1 != 0) {
    return;
  }
  iVar1 = param_1[1];
  if ((iVar1 == 1) || (iVar1 == 0)) {
    dbus_free(param_1[4]);
    dbus_free(param_1[5]);
    dbus_free(param_1[6]);
    dbus_free(param_1[7]);
    iVar1 = param_1[8];
  }
  else {
    if (iVar1 != 2) goto LAB_00028b18;
    iVar1 = param_1[3];
  }
  dbus_free(iVar1);
LAB_00028b18:
  dbus_free(param_1);
  return;
}



/* ===== FUN_00028b70 @ 00028b70 size=204 ===== */

void FUN_00028b70(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (iVar1 + -1 != 0) {
    return;
  }
  iVar1 = DAT_00028c3c + 0x28ba0;
  _dbus_list_foreach(param_1 + 1,iVar1,0);
  _dbus_list_clear(param_1 + 1);
  _dbus_list_foreach(param_1 + 2,iVar1,0);
  _dbus_list_clear(param_1 + 2);
  _dbus_list_foreach(param_1 + 5,iVar1,0);
  _dbus_list_clear(param_1 + 5);
  _dbus_list_foreach(param_1 + 6,iVar1,0);
  _dbus_list_clear(param_1 + 6);
  if (param_1[3] != 0) {
    _dbus_hash_table_unref();
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    _dbus_hash_table_unref();
    param_1[4] = 0;
  }
  dbus_free(param_1);
  return;
}



/* ===== FUN_00028c40 @ 00028c40 size=116 ===== */

undefined4 * FUN_00028c40(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)dbus_malloc0(0x1c);
  iVar3 = DAT_00028cb4;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    iVar2 = _dbus_hash_table_new(2,0,iVar3 + 0x28c6c);
    puVar1[3] = iVar2;
    if (iVar2 != 0) {
      iVar3 = _dbus_hash_table_new(2,0,iVar3 + 0x28c6c);
      puVar1[4] = iVar3;
      if (iVar3 != 0) {
        return puVar1;
      }
    }
    FUN_00028b70(puVar1);
  }
  return (undefined4 *)0x0;
}



/* ===== FUN_00028d6c @ 00028d6c size=40 ===== */

bool FUN_00028d6c(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = _dbus_list_append(param_1 + 4);
  if (iVar1 != 0) {
    *param_2 = *param_2 + 1;
  }
  return iVar1 != 0;
}



/* ===== FUN_00028d94 @ 00028d94 size=40 ===== */

bool FUN_00028d94(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = _dbus_list_append(param_1 + 8);
  if (iVar1 != 0) {
    *param_2 = *param_2 + 1;
  }
  return iVar1 != 0;
}



/* ===== FUN_00028dbc @ 00028dbc size=68 ===== */

undefined4 FUN_00028dbc(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00028950(*(undefined4 *)(param_1 + 0xc));
  if ((iVar1 != 0) && (iVar1 = _dbus_list_append(iVar1,param_3), iVar1 != 0)) {
    *param_3 = *param_3 + 1;
    return 1;
  }
  return 0;
}



/* ===== FUN_00028e00 @ 00028e00 size=68 ===== */

undefined4 FUN_00028e00(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00028950(*(undefined4 *)(param_1 + 0x10));
  if ((iVar1 != 0) && (iVar1 = _dbus_list_append(iVar1,param_3), iVar1 != 0)) {
    *param_3 = *param_3 + 1;
    return 1;
  }
  return 0;
}



/* ===== FUN_00028e44 @ 00028e44 size=56 ===== */

bool FUN_00028e44(int param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if (param_2 == 0) {
    param_1 = param_1 + 0x18;
  }
  else {
    param_1 = param_1 + 0x14;
  }
  iVar1 = _dbus_list_append(param_1,param_3);
  if (iVar1 != 0) {
    *param_3 = *param_3 + 1;
  }
  return iVar1 != 0;
}



/* ===== FUN_00028e7c @ 00028e7c size=144 ===== */

bool FUN_00028e7c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00028854(param_1 + 4,param_2 + 4);
  if ((((iVar1 != 0) && (iVar1 = FUN_00028854(param_1 + 8,param_2 + 8), iVar1 != 0)) &&
      (iVar1 = FUN_00028854(param_1 + 0x14,param_2 + 0x14), iVar1 != 0)) &&
     ((iVar1 = FUN_00028854(param_1 + 0x18,param_2 + 0x18), iVar1 != 0 &&
      (iVar1 = FUN_000289a4(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_2 + 0xc)),
      iVar1 != 0)))) {
    iVar1 = FUN_000289a4(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0x10));
    return iVar1 != 0;
  }
  return false;
}



/* ===== FUN_00028f0c @ 00028f0c size=28 ===== */

void FUN_00028f0c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)dbus_malloc0(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
  }
  return;
}



/* ===== FUN_00028f38 @ 00028f38 size=68 ===== */

void FUN_00028f38(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (iVar1 + -1 != 0) {
    return;
  }
  _dbus_list_foreach(param_1 + 1,DAT_00028f7c + 0x28f60);
  _dbus_list_clear(param_1 + 1);
  dbus_free(param_1);
  return;
}



/* ===== FUN_00028f80 @ 00028f80 size=252 ===== */

void FUN_00028f80(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  iVar6 = param_1 + 4;
  iVar2 = _dbus_list_get_first_link(iVar6);
LAB_00028f98:
  iVar4 = iVar2;
  if (iVar4 == 0) {
    return;
  }
  iVar3 = *(int *)(iVar4 + 8);
  iVar2 = *(int *)(iVar4 + 4);
  iVar5 = *(int *)(iVar3 + 4);
  if (iVar2 == *(int *)(param_1 + 4)) {
    iVar2 = 0;
  }
  if ((iVar5 != 1) && (iVar5 != 0)) goto code_r0x00028fc8;
  if (*(int *)(iVar3 + 0xc) == 0) {
    bVar1 = false;
    if ((((*(int *)(iVar3 + 0x10) != 0) || (*(int *)(iVar3 + 0x14) != 0)) ||
        (*(int *)(iVar3 + 0x18) != 0)) || (*(int *)(iVar3 + 0x1c) != 0)) goto LAB_0002901c;
    iVar3 = *(int *)(iVar3 + 0x20);
    goto LAB_00029070;
  }
  bVar1 = false;
  goto LAB_0002901c;
code_r0x00028fc8:
  if (iVar5 == 2) {
    iVar3 = *(int *)(iVar3 + 0xc);
LAB_00029070:
    bVar1 = iVar3 == 0;
LAB_0002901c:
    if (bVar1) {
      iVar3 = _dbus_list_get_first_link(iVar6);
      while (iVar4 != iVar3) {
        piVar8 = (int *)(iVar3 + 4);
        iVar7 = *(int *)(iVar3 + 8);
        iVar3 = *piVar8;
        if (*piVar8 == *(int *)(param_1 + 4)) {
          iVar3 = 0;
        }
        if (iVar5 == *(int *)(iVar7 + 4)) {
          _dbus_list_remove_link(iVar6);
          FUN_00028ae0(iVar7);
        }
      }
    }
  }
  goto LAB_00028f98;
}



/* ===== FUN_0002907c @ 0002907c size=40 ===== */

bool FUN_0002907c(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = _dbus_list_append(param_1 + 4);
  if (iVar1 != 0) {
    *param_2 = *param_2 + 1;
  }
  return iVar1 != 0;
}



/* ===== FUN_000290a4 @ 000290a4 size=88 ===== */

undefined4 FUN_000290a4(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = _dbus_list_get_first_link();
  do {
    if (iVar2 == 0) {
      return 1;
    }
    piVar1 = (int *)(iVar2 + 8);
    iVar2 = *(int *)(iVar2 + 4);
    if (iVar2 == *param_1) {
      iVar2 = 0;
    }
  } while ((2 < *(uint *)(*piVar1 + 4)) || (iVar3 = FUN_0002907c(param_2), iVar3 != 0));
  return 0;
}



/* ===== FUN_000292dc @ 000292dc size=784 ===== */

void FUN_000292dc(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 int *param_6,uint *param_7)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  byte bVar7;
  bool bVar8;
  undefined1 auStack_3c [16];
  int local_2c;
  
  bVar7 = 0;
  piVar5 = *(int **)(DAT_000295ec + 0x29314 + DAT_000295f0);
  local_2c = *piVar5;
  *param_6 = 0;
  iVar1 = _dbus_list_get_first_link(param_1 + 4);
LAB_00029334:
  while( true ) {
    do {
      if (iVar1 == 0) {
        if (local_2c == *piVar5) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(bVar7);
      }
      iVar6 = *(int *)(iVar1 + 8);
      iVar1 = *(int *)(iVar1 + 4);
      if (iVar1 == *(int *)(param_1 + 4)) {
        iVar1 = 0;
      }
    } while ((*(int *)(iVar6 + 4) != 0) ||
            ((*(int *)(iVar6 + 0xc) != 0 &&
             (iVar2 = dbus_message_get_type(param_5), iVar2 != *(int *)(iVar6 + 0xc)))));
    iVar2 = dbus_message_get_reply_serial(param_5);
    if (iVar2 == 0) break;
    if (param_3 != 0) goto LAB_00029494;
    if (((*(byte *)(iVar6 + 8) & 1) == 0) || ((*(byte *)(iVar6 + 0x2c) & 3) != 2)) break;
  }
  goto LAB_00029394;
LAB_00029494:
  if (((*(byte *)(iVar6 + 8) & 1) != 0) || ((*(byte *)(iVar6 + 0x2c) & 2) != 0)) {
LAB_00029394:
    if ((*(int *)(iVar6 + 0x10) != 0) && (iVar2 = dbus_message_get_path(param_5), iVar2 != 0)) {
      pcVar3 = (char *)dbus_message_get_path(param_5);
      iVar2 = strcmp(pcVar3,*(char **)(iVar6 + 0x10));
      if (iVar2 != 0) goto LAB_00029334;
    }
    if (*(int *)(iVar6 + 0x14) != 0) {
      iVar2 = dbus_message_get_interface(param_5);
      if (iVar2 == 0) {
        if ((*(byte *)(iVar6 + 8) & 1) != 0) goto LAB_00029334;
      }
      else {
        pcVar3 = (char *)dbus_message_get_interface(param_5);
        iVar2 = strcmp(pcVar3,*(char **)(iVar6 + 0x14));
        if (iVar2 != 0) goto LAB_00029334;
      }
    }
    if ((*(int *)(iVar6 + 0x18) != 0) && (iVar2 = dbus_message_get_member(param_5), iVar2 != 0)) {
      pcVar3 = (char *)dbus_message_get_member(param_5);
      iVar2 = strcmp(pcVar3,*(char **)(iVar6 + 0x18));
      if (iVar2 != 0) goto LAB_00029334;
    }
    if ((*(int *)(iVar6 + 0x1c) != 0) && (iVar2 = dbus_message_get_error_name(param_5), iVar2 != 0))
    {
      pcVar3 = (char *)dbus_message_get_error_name(param_5);
      iVar2 = strcmp(pcVar3,*(char **)(iVar6 + 0x1c));
      if (iVar2 != 0) goto LAB_00029334;
    }
    if ((*(byte *)(iVar6 + 0x2c) & 0x18) != 0) {
      iVar2 = dbus_message_get_destination(param_5);
      if ((iVar2 == 0) && (iVar2 = dbus_message_get_type(param_5), iVar2 == 4)) {
        bVar8 = (*(byte *)(iVar6 + 0x2c) & 0x18) == 8;
      }
      else {
        bVar8 = (*(byte *)(iVar6 + 0x2c) & 0x18) == 0x10;
      }
      if (bVar8) goto LAB_00029334;
    }
    if (*(int *)(iVar6 + 0x20) != 0) {
      if (param_4 == 0) {
        iVar2 = dbus_message_has_destination(param_5);
      }
      else {
        _dbus_string_init_const(auStack_3c);
        iVar2 = FUN_00029cbc(param_2,auStack_3c);
        if (iVar2 == 0) goto LAB_00029334;
        iVar2 = FUN_0002ae54(iVar2,param_4);
      }
      if (iVar2 == 0) goto LAB_00029334;
    }
    if (((*(int *)(iVar6 + 0x28) == 0) && (0x1ffffff < *(uint *)(iVar6 + 0x24))) ||
       ((uVar4 = FUN_0002efe4(param_5), *(uint *)(iVar6 + 0x28) <= uVar4 &&
        (uVar4 <= *(uint *)(iVar6 + 0x24))))) {
      bVar7 = *(byte *)(iVar6 + 8);
      *param_7 = (*(byte *)(iVar6 + 0x2c) & 7) >> 2;
      bVar7 = bVar7 & 1;
      *param_6 = *param_6 + 1;
    }
  }
  goto LAB_00029334;
}



/* ===== FUN_000295f4 @ 000295f4 size=780 ===== */

void FUN_000295f4(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
                 undefined4 param_7,int *param_8)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int *piVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_3c [16];
  int local_2c;
  
  piVar5 = *(int **)(DAT_00029900 + 0x29614 + DAT_00029904);
  local_2c = *piVar5;
  if (param_5 == param_6) {
    bVar1 = false;
  }
  else {
    iVar2 = dbus_message_get_destination(param_7);
    bVar1 = false;
    if (iVar2 != 0) {
      bVar1 = true;
    }
  }
  bVar6 = 0;
  *param_8 = 0;
  iVar2 = _dbus_list_get_first_link(param_1 + 4);
LAB_0002966c:
  do {
    do {
      if (iVar2 == 0) {
        if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(bVar6);
        }
        return;
      }
      iVar7 = *(int *)(iVar2 + 4);
      iVar8 = *(int *)(iVar2 + 8);
      if (iVar7 == *(int *)(param_1 + 4)) {
        iVar7 = 0;
      }
      iVar2 = iVar7;
    } while ((*(int *)(iVar8 + 4) != 1) ||
            ((*(int *)(iVar8 + 0xc) != 0 &&
             (iVar7 = dbus_message_get_type(param_7), iVar7 != *(int *)(iVar8 + 0xc)))));
    if (bVar1) goto LAB_000296fc;
  } while (((*(byte *)(iVar8 + 8) & 1) == 0) && ((*(byte *)(iVar8 + 0x2c) & 1) != 0));
  goto LAB_00029710;
LAB_000296fc:
  if (((*(byte *)(iVar8 + 8) & 1) == 0) || ((*(byte *)(iVar8 + 0x2c) & 1) != 0)) {
LAB_00029710:
    iVar7 = dbus_message_get_reply_serial(param_7);
    if (iVar7 != 0) {
      if (param_3 == 0) {
        if (((*(byte *)(iVar8 + 8) & 1) != 0) && ((*(byte *)(iVar8 + 0x2c) & 3) == 2))
        goto LAB_0002966c;
      }
      else if (((*(byte *)(iVar8 + 8) & 1) == 0) && ((*(byte *)(iVar8 + 0x2c) & 2) == 0))
      goto LAB_0002966c;
    }
    if ((*(int *)(iVar8 + 0x10) != 0) && (iVar7 = dbus_message_get_path(param_7), iVar7 != 0)) {
      pcVar3 = (char *)dbus_message_get_path(param_7);
      iVar7 = strcmp(pcVar3,*(char **)(iVar8 + 0x10));
      if (iVar7 != 0) goto LAB_0002966c;
    }
    if (*(int *)(iVar8 + 0x14) != 0) {
      iVar7 = dbus_message_get_interface(param_7);
      if (iVar7 == 0) {
        if ((*(byte *)(iVar8 + 8) & 1) != 0) goto LAB_0002966c;
      }
      else {
        pcVar3 = (char *)dbus_message_get_interface(param_7);
        iVar7 = strcmp(pcVar3,*(char **)(iVar8 + 0x14));
        if (iVar7 != 0) goto LAB_0002966c;
      }
    }
    if ((*(int *)(iVar8 + 0x18) != 0) && (iVar7 = dbus_message_get_member(param_7), iVar7 != 0)) {
      pcVar3 = (char *)dbus_message_get_member(param_7);
      iVar7 = strcmp(pcVar3,*(char **)(iVar8 + 0x18));
      if (iVar7 != 0) goto LAB_0002966c;
    }
    if ((*(int *)(iVar8 + 0x1c) != 0) && (iVar7 = dbus_message_get_error_name(param_7), iVar7 != 0))
    {
      pcVar3 = (char *)dbus_message_get_error_name(param_7);
      iVar7 = strcmp(pcVar3,*(char **)(iVar8 + 0x1c));
      if (iVar7 != 0) goto LAB_0002966c;
    }
    if (*(int *)(iVar8 + 0x20) != 0) {
      if (param_4 == 0) {
        iVar7 = dbus_message_has_sender(param_7);
      }
      else {
        _dbus_string_init_const(auStack_3c);
        iVar7 = FUN_00029cbc(param_2,auStack_3c);
        if (iVar7 == 0) goto LAB_0002966c;
        iVar7 = FUN_0002ae54(iVar7,param_4);
      }
      if (iVar7 == 0) goto LAB_0002966c;
    }
    if (((*(int *)(iVar8 + 0x28) == 0) && (0x1ffffff < *(uint *)(iVar8 + 0x24))) ||
       ((uVar4 = FUN_0002efe4(param_7), *(uint *)(iVar8 + 0x28) <= uVar4 &&
        (uVar4 <= *(uint *)(iVar8 + 0x24))))) {
      bVar6 = *(byte *)(iVar8 + 8);
      *param_8 = *param_8 + 1;
      bVar6 = bVar6 & 1;
    }
  }
  goto LAB_0002966c;
}



/* ===== FUN_00029908 @ 00029908 size=228 ===== */

void FUN_00029908(int param_1,int *param_2)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int *piVar6;
  int local_20;
  int local_1c;
  
  piVar6 = *(int **)(DAT_000299ec + 0x29918 + DAT_000299f0);
  bVar5 = 0;
  local_1c = *piVar6;
  local_20 = *(int *)(param_1 + 4);
  iVar1 = _dbus_list_get_first_link(&local_20);
LAB_00029940:
  do {
    do {
      if (iVar1 == 0) {
        if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(bVar5);
        }
        return;
      }
      iVar3 = *(int *)(iVar1 + 4);
      iVar4 = *(int *)(iVar1 + 8);
      if (iVar3 == local_20) {
        iVar3 = 0;
      }
      iVar1 = iVar3;
    } while (*(int *)(iVar4 + 4) != 2);
    if ((*(byte *)(iVar4 + 0x10) & 1) != 0) goto LAB_000299b4;
  } while ((*(int *)(iVar4 + 0xc) != 0) && (iVar3 = _dbus_string_equal_c_str(param_2), iVar3 == 0));
  goto LAB_00029994;
LAB_000299b4:
  iVar3 = _dbus_string_starts_with_c_str(param_2);
  if ((iVar3 != 0) &&
     (sVar2 = strlen(*(char **)(iVar4 + 0xc)),
     *(char *)(*param_2 + sVar2) == '\0' || *(char *)(*param_2 + sVar2) == '.')) {
LAB_00029994:
    bVar5 = *(byte *)(iVar4 + 8) & 1;
  }
  goto LAB_00029940;
}



/* ===== FUN_000299f4 @ 000299f4 size=8 ===== */

undefined4 FUN_000299f4(void)

{
  return 0;
}



/* ===== FUN_000299fc @ 000299fc size=8 ===== */

undefined4 FUN_000299fc(void)

{
  return 0;
}



/* ===== FUN_00029a04 @ 00029a04 size=8 ===== */

undefined4 FUN_00029a04(void)

{
  return 1;
}



/* ===== FUN_00029a0c @ 00029a0c size=8 ===== */

undefined4 FUN_00029a0c(void)

{
  return 1;
}



/* ===== FUN_00029a14 @ 00029a14 size=8 ===== */

undefined4 FUN_00029a14(void)

{
  return 1;
}



/* ===== FUN_00029a1c @ 00029a1c size=8 ===== */

undefined4 FUN_00029a1c(void)

{
  return 1;
}



/* ===== FUN_00029a24 @ 00029a24 size=8 ===== */

undefined4 FUN_00029a24(void)

{
  return 1;
}



/* ===== FUN_00029a2c @ 00029a2c size=8 ===== */

undefined4 FUN_00029a2c(void)

{
  return 0;
}



/* ===== FUN_00029a34 @ 00029a34 size=44 ===== */

void FUN_00029a34(void)

{
  _dbus_hash_table_new(0,*(undefined4 *)(DAT_00029a60 + 0x29a48 + DAT_00029a64));
  return;
}



/* ===== FUN_00029a68 @ 00029a68 size=8 ===== */

undefined4 FUN_00029a68(void)

{
  return 1;
}



/* ===== FUN_00029a70 @ 00029a70 size=8 ===== */

undefined4 FUN_00029a70(void)

{
  return 0;
}



/* ===== FUN_00029a78 @ 00029a78 size=8 ===== */

undefined4 FUN_00029a78(void)

{
  return 0;
}



/* ===== FUN_00029a84 @ 00029a84 size=4 ===== */

void FUN_00029a84(void)

{
  return;
}



/* ===== FUN_00029a88 @ 00029a88 size=68 ===== */

int FUN_00029a88(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = _dbus_list_get_first_link(param_1 + 0xc);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(*(int *)(iVar1 + 8) + 8) == param_2) break;
    iVar1 = *(int *)(iVar1 + 4);
    if (iVar1 == *(int *)(param_1 + 0xc)) {
      return 0;
    }
  }
  return iVar1;
}



/* ===== FUN_00029acc @ 00029acc size=176 ===== */

void FUN_00029acc(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[1];
  if (piVar2[3] == 0) {
    _dbus_hash_table_insert_string_preallocated
              (*(undefined4 *)(piVar2[1] + 8),param_1[5],piVar2[2],piVar2);
    *piVar2 = *piVar2 + 1;
  }
  iVar1 = _dbus_list_get_first_link(param_1[1] + 0xc);
  do {
    if ((iVar1 == 0) || (*(int *)(iVar1 + 8) == param_1[2])) goto LAB_00029b24;
    iVar1 = *(int *)(iVar1 + 4);
  } while (iVar1 != *(int *)(param_1[1] + 0xc));
  iVar1 = 0;
LAB_00029b24:
  _dbus_list_insert_before_link(param_1[1] + 0xc,iVar1,param_1[3]);
  FUN_00021004(*(undefined4 *)(*param_1 + 8),param_1[4]);
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  return;
}



/* ===== FUN_00029b7c @ 00029b7c size=64 ===== */

void FUN_00029b7c(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (iVar1 + -1 != 0) {
    return;
  }
  FUN_000210ac(param_1[2],param_1[1]);
  _dbus_mem_pool_dealloc(*(undefined4 *)(*(int *)(param_1[1] + 4) + 0x10),param_1);
  return;
}



/* ===== FUN_00029bcc @ 00029bcc size=104 ===== */

void FUN_00029bcc(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (iVar1 + -1 != 0) {
    return;
  }
  if (param_1[2] != 0) {
    _dbus_hash_table_unref();
  }
  if (param_1[3] != 0) {
    _dbus_mem_pool_free();
  }
  if (param_1[4] != 0) {
    _dbus_mem_pool_free();
  }
  if (param_1[5] != 0) {
    _dbus_hash_table_unref();
  }
  dbus_free(param_1);
  return;
}



/* ===== FUN_00029c34 @ 00029c34 size=136 ===== */

undefined4 * FUN_00029c34(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)dbus_malloc0(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    puVar1[1] = param_1;
    iVar2 = _dbus_hash_table_new(0,0);
    puVar1[2] = iVar2;
    if (iVar2 != 0) {
      iVar2 = _dbus_mem_pool_new(0x10,1);
      puVar1[3] = iVar2;
      if (iVar2 != 0) {
        iVar2 = _dbus_mem_pool_new(0x10,1);
        puVar1[4] = iVar2;
        if (iVar2 != 0) {
          puVar1[5] = 0;
          return puVar1;
        }
      }
    }
    FUN_00029bcc(puVar1);
  }
  return (undefined4 *)0x0;
}



/* ===== FUN_00029cbc @ 00029cbc size=12 ===== */

void FUN_00029cbc(int param_1,undefined4 *param_2)

{
  _dbus_hash_table_lookup_string(*(undefined4 *)(param_1 + 8),*param_2);
  return;
}



/* ===== FUN_00029d48 @ 00029d48 size=256 ===== */

void FUN_00029d48(int param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined1 auStack_44 [24];
  int local_2c;
  
  piVar5 = *(int **)(DAT_00029e48 + 0x29d5c + DAT_00029e4c);
  local_2c = *piVar5;
  iVar1 = _dbus_hash_table_get_n_entries(*(undefined4 *)(param_1 + 8));
  piVar2 = (int *)dbus_malloc((iVar1 + 1) * 4);
  if (piVar2 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    iVar6 = 0;
    _dbus_hash_iter_init(*(undefined4 *)(param_1 + 8),auStack_44);
    piVar7 = piVar2;
    while (iVar3 = _dbus_hash_iter_next(auStack_44), iVar3 != 0) {
      iVar3 = _dbus_hash_iter_get_value(auStack_44);
      iVar3 = _dbus_strdup(*(undefined4 *)(iVar3 + 8));
      *piVar7 = iVar3;
      if (iVar3 == 0) {
        for (piVar7 = piVar2; piVar7 != piVar2 + iVar6; piVar7 = piVar7 + 1) {
          dbus_free(*piVar7);
        }
        dbus_free(piVar2);
        uVar4 = 0;
        goto LAB_00029ddc;
      }
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 1;
    }
    *piVar7 = 0;
    uVar4 = 1;
    if (param_3 != (int *)0x0) {
      *param_3 = iVar1;
    }
    *param_2 = piVar2;
  }
LAB_00029ddc:
  if (local_2c == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}



/* ===== FUN_00029e50 @ 00029e50 size=192 ===== */

void FUN_00029e50(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 auStack_34 [24];
  int local_1c;
  
  piVar5 = *(int **)(DAT_00029f10 + 0x29e60 + DAT_00029f14);
  local_1c = *piVar5;
  iVar1 = FUN_00029a34();
  if (iVar1 != 0) {
    _dbus_hash_iter_init(param_2,auStack_34);
    do {
      iVar3 = _dbus_hash_iter_next(auStack_34);
      if (iVar3 == 0) {
        if (*(int *)(param_1 + 0x14) != 0) {
          _dbus_hash_table_unref();
        }
        *(int *)(param_1 + 0x14) = iVar1;
        uVar2 = 1;
        goto LAB_00029e88;
      }
      uVar2 = _dbus_hash_iter_get_string_key(auStack_34);
      uVar4 = _dbus_hash_iter_get_value(auStack_34);
      iVar3 = FUN_00029a68(iVar1,uVar2,uVar4);
    } while (iVar3 != 0);
  }
  uVar2 = 0;
LAB_00029e88:
  if (local_1c == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



/* ===== FUN_00029f18 @ 00029f18 size=616 ===== */

undefined4 FUN_00029f18(int param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = DAT_0002a180 + 0x29f40;
  iVar7 = param_1;
  if ((*(int *)(param_1 + 0xc) == 0) &&
     (iVar2 = FUN_00027040(param_2,*(undefined4 *)(param_1 + 8),param_4,param_5,param_1,param_2),
     iVar2 == 0)) {
    return 0;
  }
  iVar2 = FUN_00029a88(param_1,param_2);
  if (iVar2 != 0) {
    iVar7 = *(int *)(iVar2 + 8);
    if ((param_3 & 2) != 0) {
      param_1 = param_1 + 0xc;
      _dbus_list_unlink(param_1,iVar2);
      uVar6 = _dbus_list_get_first_link(param_1);
      _dbus_list_insert_after_link(param_1,uVar6,iVar2);
    }
    *(byte *)(iVar7 + 0xc) =
         *(byte *)(iVar7 + 0xc) & 0xfc | (byte)param_3 & 1 | (byte)(((param_3 & 7) >> 2) << 1);
    return 1;
  }
  piVar3 = (int *)_dbus_mem_pool_alloc(*(undefined4 *)(*(int *)(param_1 + 4) + 0x10));
  if (piVar3 != (int *)0x0) {
    *piVar3 = 1;
    piVar3[1] = param_1;
    piVar3[2] = param_2;
    iVar2 = FUN_0002107c(param_2,param_1);
    if (iVar2 != 0) {
      iVar2 = param_1 + 0xc;
      *(byte *)(piVar3 + 3) =
           *(byte *)(piVar3 + 3) & 0xfc | (byte)param_3 & 1 | (byte)(((param_3 & 7) >> 2) << 1);
      if (((param_3 & 2) == 0) || (*(int *)(param_1 + 0xc) == 0)) {
        iVar4 = _dbus_list_append(iVar2,piVar3);
        if (iVar4 == 0) {
          FUN_00029b7c(piVar3);
          uVar6 = *(undefined4 *)(iVar8 + DAT_0002a184);
          iVar8 = DAT_0002a18c + 0x2a034;
          goto LAB_0002a038;
        }
      }
      else {
        uVar6 = _dbus_list_get_first_link(iVar2);
        iVar4 = _dbus_list_insert_after(iVar2,uVar6,piVar3);
        if (iVar4 == 0) {
          FUN_00029b7c(piVar3);
          uVar6 = *(undefined4 *)(iVar8 + DAT_0002a184);
          iVar8 = DAT_0002a190 + 0x2a08c;
LAB_0002a038:
          dbus_set_error_const(param_5,iVar8,uVar6,uVar6,iVar7,uVar6);
          return 0;
        }
      }
      piVar5 = (int *)dbus_malloc(8);
      iVar1 = DAT_0002a198;
      iVar4 = DAT_0002a194;
      if (piVar5 != (int *)0x0) {
        *piVar5 = (int)piVar3;
        piVar5[1] = param_1;
        iVar4 = FUN_000221c8(param_4,iVar1 + 0x2a114,piVar5,iVar4 + 0x2a110);
        if (iVar4 != 0) {
          *(int *)piVar5[1] = *(int *)piVar5[1] + 1;
          *piVar3 = *piVar3 + 1;
          dbus_connection_ref(*(undefined4 *)(*piVar5 + 8));
          return 1;
        }
        dbus_free(piVar5);
      }
      _dbus_list_remove_last(iVar2,piVar3);
      FUN_00029b7c(piVar3);
      uVar6 = *(undefined4 *)(iVar8 + DAT_0002a184);
      iVar8 = DAT_0002a19c + 0x2a14c;
      goto LAB_00029fac;
    }
    _dbus_mem_pool_dealloc(*(undefined4 *)(*(int *)(param_1 + 4) + 0x10),piVar3);
  }
  uVar6 = *(undefined4 *)(iVar8 + DAT_0002a184);
  iVar8 = DAT_0002a188 + 0x29fa8;
LAB_00029fac:
  dbus_set_error_const(param_5,iVar8,uVar6,uVar6,iVar7,uVar6);
  return 0;
}



/* ===== FUN_0002a1b0 @ 0002a1b0 size=56 ===== */

void FUN_0002a1b0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (iVar1 + -1 != 0) {
    return;
  }
  dbus_free(param_1[2]);
  _dbus_mem_pool_dealloc(*(undefined4 *)(param_1[1] + 0xc),param_1);
  return;
}



/* ===== FUN_0002a1e8 @ 0002a1e8 size=340 ===== */

undefined4 *
FUN_0002a1e8(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = DAT_0002a33c + 0x2a218;
  puVar1 = (undefined4 *)_dbus_hash_table_lookup_string(*(undefined4 *)(param_1 + 8),*param_2);
  if (puVar1 != (undefined4 *)0x0) {
    return puVar1;
  }
  puVar1 = (undefined4 *)_dbus_mem_pool_alloc(*(undefined4 *)(param_1 + 0xc));
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = 1;
    iVar2 = _dbus_string_copy_data(param_2,puVar1 + 2);
    if (iVar2 == 0) {
      _dbus_mem_pool_dealloc(*(undefined4 *)(param_1 + 0xc),puVar1);
      uVar3 = *(undefined4 *)(iVar4 + DAT_0002a340);
      iVar4 = DAT_0002a348 + 0x2a29c;
      goto LAB_0002a248;
    }
    uVar5 = puVar1[2];
    uVar3 = FUN_0002152c(param_3);
    iVar2 = FUN_00026d70(uVar5,0,uVar3,param_5,param_6);
    if (iVar2 == 0) {
LAB_0002a2d0:
      FUN_0002a1b0(puVar1);
      return (undefined4 *)0x0;
    }
    uVar3 = FUN_0001a648(*(undefined4 *)(param_1 + 4));
    iVar2 = FUN_00018920(uVar3,puVar1[2],param_5,param_6);
    if ((iVar2 == 0) || (iVar2 = FUN_00029f18(puVar1,param_3,param_4,param_5,param_6), iVar2 == 0))
    goto LAB_0002a2d0;
    iVar2 = _dbus_hash_table_insert_string(*(undefined4 *)(param_1 + 8),puVar1[2],puVar1);
    if (iVar2 != 0) {
      return puVar1;
    }
  }
  uVar3 = *(undefined4 *)(iVar4 + DAT_0002a340);
  iVar4 = DAT_0002a344 + 0x2a244;
LAB_0002a248:
  dbus_set_error_const(param_6,iVar4,uVar3);
  return (undefined4 *)0x0;
}



/* ===== FUN_0002a34c @ 0002a34c size=48 ===== */

void FUN_0002a34c(int *param_1)

{
  dbus_connection_unref(*(undefined4 *)(*param_1 + 8));
  FUN_00029b7c(*param_1);
  FUN_0002a1b0(param_1[1]);
  dbus_free(param_1);
  return;
}



/* ===== FUN_0002a37c @ 0002a37c size=108 ===== */

void FUN_0002a37c(int *param_1)

{
  if (param_1[4] != 0) {
    _dbus_list_free_link();
  }
  if (param_1[3] != 0) {
    _dbus_list_free_link();
  }
  if (param_1[5] != 0) {
    _dbus_hash_table_free_preallocated_entry(*(undefined4 *)(*(int *)(param_1[1] + 4) + 8));
  }
  dbus_connection_unref(*(undefined4 *)(*param_1 + 8));
  FUN_00029b7c(*param_1);
  FUN_0002a1b0(param_1[1]);
  dbus_free(param_1);
  return;
}



/* ===== FUN_0002a3e8 @ 0002a3e8 size=288 ===== */

undefined4 FUN_0002a3e8(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)dbus_malloc(0x18);
  if (piVar1 != (int *)0x0) {
    piVar1[1] = param_2;
    *piVar1 = param_3;
    iVar2 = _dbus_list_alloc_link(param_2);
    piVar1[4] = iVar2;
    iVar2 = _dbus_list_alloc_link(param_3);
    iVar3 = *(int *)(param_2 + 4);
    piVar1[3] = iVar2;
    iVar2 = _dbus_hash_table_preallocate_entry(*(undefined4 *)(iVar3 + 8));
    piVar1[5] = iVar2;
    *(int *)piVar1[1] = *(int *)piVar1[1] + 1;
    *(int *)*piVar1 = *(int *)*piVar1 + 1;
    dbus_connection_ref(*(undefined4 *)(*piVar1 + 8));
    piVar1[2] = 0;
    iVar2 = _dbus_list_get_first_link(param_2 + 0xc);
    while (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 4);
      if (*(int *)(iVar2 + 8) == param_3) {
        if (iVar3 != 0 && *(int *)(param_2 + 0xc) != iVar3) {
          piVar1[2] = *(int *)(iVar3 + 8);
        }
        break;
      }
      iVar2 = iVar3;
      if (*(int *)(param_2 + 0xc) == iVar3) break;
    }
    if ((((piVar1[4] != 0) && (piVar1[3] != 0)) && (piVar1[5] != 0)) &&
       (iVar2 = FUN_000221c8(param_1,DAT_0002a50c + 0x2a4f8,piVar1,DAT_0002a508 + 0x2a4f4),
       iVar2 != 0)) {
      return 1;
    }
    FUN_0002a37c(piVar1);
  }
  return 0;
}



/* ===== FUN_0002a510 @ 0002a510 size=364 ===== */

undefined4 FUN_0002a510(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar6 = param_1 + 0xc;
  iVar7 = DAT_0002a67c + 0x2a530;
  uVar2 = _dbus_list_get_first(iVar6);
  iVar3 = FUN_00026f04(param_2,*(undefined4 *)(param_1 + 8),param_3,param_4);
  if (iVar3 == 0) {
LAB_0002a55c:
    uVar2 = 0;
  }
  else {
    if ((*(int *)(param_1 + 0xc) != 0) && (iVar3 = _dbus_list_length_is_one(iVar6), iVar3 == 0)) {
      iVar3 = _dbus_list_get_first_link(iVar6);
      if (*(int *)(iVar3 + 4) == *(int *)(param_1 + 0xc)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0,0x2a678);
        (*pcVar1)();
      }
      uVar9 = *(undefined4 *)(param_1 + 8);
      uVar8 = *(undefined4 *)(*(int *)(*(int *)(iVar3 + 4) + 8) + 8);
      uVar4 = FUN_0002152c(param_2);
      uVar5 = FUN_0002152c(uVar8);
      iVar3 = FUN_00026d70(uVar9,uVar4,uVar5,param_3,param_4);
      if ((iVar3 == 0) ||
         (iVar3 = FUN_00027040(uVar8,*(undefined4 *)(param_1 + 8),param_3,param_4), iVar3 == 0))
      goto LAB_0002a55c;
    }
    iVar3 = FUN_0002a3e8(param_3,param_1,uVar2);
    if (iVar3 == 0) {
      dbus_set_error_const(param_4,DAT_0002a684 + 0x2a5a8,*(undefined4 *)(iVar7 + DAT_0002a680));
      uVar2 = 0;
    }
    else {
      uVar4 = _dbus_list_get_first_link(iVar6);
      _dbus_list_unlink(iVar6,uVar4);
      uVar5 = _dbus_list_get_first_link(iVar6);
      uVar2 = 1;
      _dbus_list_insert_after_link(iVar6,uVar5,uVar4);
    }
  }
  return uVar2;
}



/* ===== FUN_0002a688 @ 0002a688 size=480 ===== */

undefined4 FUN_0002a688(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  iVar6 = param_1 + 0xc;
  iVar8 = DAT_0002a868 + 0x2a6a8;
  iVar2 = _dbus_list_get_first(iVar6);
  if ((iVar2 == 0) || (iVar7 = *(int *)(iVar2 + 8), iVar7 != param_2)) {
    iVar2 = FUN_00029a88(param_1,param_2);
    _dbus_list_unlink(iVar6,iVar2);
    FUN_00029b7c(*(undefined4 *)(iVar2 + 8));
    _dbus_list_free_link(iVar2);
  }
  else {
    iVar3 = FUN_00026f04(iVar7,*(undefined4 *)(param_1 + 8),param_3,param_4);
    if (iVar3 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar3 = _dbus_list_length_is_one(iVar6);
      if (iVar3 == 0) {
        iVar3 = _dbus_list_get_first_link(iVar6);
        if (*(int *)(iVar3 + 4) == *(int *)(param_1 + 0xc)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0,0x2a864);
          (*pcVar1)();
        }
        uVar10 = *(undefined4 *)(*(int *)(*(int *)(iVar3 + 4) + 8) + 8);
        uVar5 = *(undefined4 *)(param_1 + 8);
        uVar4 = FUN_0002152c(iVar7);
        uVar9 = FUN_0002152c(uVar10);
        iVar7 = FUN_00026d70(uVar5,uVar4,uVar9,param_3,param_4);
        if (iVar7 == 0) {
          return 0;
        }
        iVar7 = FUN_00027040(uVar10,*(undefined4 *)(param_1 + 8),param_3,param_4);
      }
      else {
        uVar9 = *(undefined4 *)(param_1 + 8);
        uVar4 = FUN_0002152c(iVar7);
        iVar7 = FUN_00026d70(uVar9,uVar4,0,param_3,param_4);
      }
      if (iVar7 == 0) {
        return 0;
      }
    }
    iVar7 = FUN_0002a3e8(param_3,param_1,iVar2);
    if (iVar7 == 0) {
      dbus_set_error_const(param_4,DAT_0002a870 + 0x2a764,*(undefined4 *)(iVar8 + DAT_0002a86c));
      return 0;
    }
    _dbus_list_remove_last(iVar6,iVar2);
    FUN_00029b7c(iVar2);
    if (*(int *)(param_1 + 0xc) == 0) {
      _dbus_hash_table_remove_string
                (*(undefined4 *)(*(int *)(param_1 + 4) + 8),*(undefined4 *)(param_1 + 8));
      FUN_0002a1b0(param_1);
    }
  }
  return 1;
}



/* ===== FUN_0002a874 @ 0002a874 size=80 ===== */

void FUN_0002a874(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  _dbus_list_remove_last(param_1[1] + 0xc,uVar2);
  FUN_00029b7c(uVar2);
  iVar1 = param_1[1];
  if (*(int *)(iVar1 + 0xc) != 0) {
    return;
  }
  _dbus_hash_table_remove_string
            (*(undefined4 *)(*(int *)(iVar1 + 4) + 8),*(undefined4 *)(iVar1 + 8));
  FUN_0002a1b0(iVar1);
  return;
}



/* ===== FUN_0002a8c4 @ 0002a8c4 size=24 ===== */

undefined4 FUN_0002a8c4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _dbus_list_get_first(param_1 + 0xc);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 8);
  }
  return uVar2;
}



/* ===== FUN_0002a8e4 @ 0002a8e4 size=8 ===== */

undefined4 FUN_0002a8e4(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* ===== FUN_0002a8ec @ 0002a8ec size=28 ===== */

byte FUN_0002a8ec(int param_1)

{
  int iVar1;
  
  iVar1 = _dbus_list_get_first_link(param_1 + 0xc);
  return *(byte *)(*(int *)(iVar1 + 8) + 0xc) & 1;
}



/* ===== FUN_0002a908 @ 0002a908 size=1260 ===== */

void FUN_0002a908(int param_1,int param_2,int *param_3,uint param_4,undefined4 *param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  undefined1 auStack_3c [4];
  undefined4 local_38;
  int local_2c;
  
  iVar8 = DAT_0002adf4 + 0x2a944;
  piVar9 = *(int **)(iVar8 + DAT_0002adf8);
  local_2c = *piVar9;
  iVar1 = _dbus_validate_bus_name(param_3,0,param_3[1]);
  if (iVar1 == 0) {
    dbus_set_error(param_7,DAT_0002ae00 + 0x2a988,DAT_0002adfc + 0x2a984);
    iVar1 = 0;
    goto LAB_0002a988;
  }
  if (*(char *)*param_3 == ':') {
    dbus_set_error(param_7,DAT_0002ae08 + 0x2a9c8,DAT_0002ae04 + 0x2a9c4);
  }
  else {
    iVar1 = _dbus_string_equal_c_str(param_3,DAT_0002ae0c + 0x2a9e0);
    if (iVar1 == 0) {
      uVar2 = FUN_00020acc(param_2);
      uVar3 = FUN_00029a70(*(undefined4 *)(param_1 + 0x14),param_3);
      iVar6 = FUN_00029a14(param_2,uVar3,*param_3,param_7);
      iVar1 = 0;
      if (iVar6 == 0) {
        iVar8 = dbus_error_is_set(param_7);
        if ((iVar8 != 0) &&
           (iVar8 = dbus_error_has_name(param_7,DAT_0002ae2c + 0x2aabc), iVar8 != 0))
        goto LAB_0002a988;
        iVar1 = FUN_00020c7c(param_2);
        if (iVar1 == 0) {
          iVar1 = DAT_0002ae20 + 0x2aa94;
        }
        else {
          iVar1 = FUN_0002152c(param_2);
        }
        iVar6 = *param_3;
        iVar8 = DAT_0002ae24 + 0x2aaa8;
        iVar7 = DAT_0002ae28 + 0x2aaac;
      }
      else {
        uVar3 = FUN_0001a614(*(undefined4 *)(param_1 + 4));
        iVar6 = FUN_00019d40(param_2,uVar3,*param_3,param_7);
        if (iVar6 == 0) goto LAB_0002a988;
        iVar6 = FUN_00029908(uVar2,param_3);
        if (iVar6 != 0) {
          iVar6 = FUN_0001a6b8(*(undefined4 *)(param_1 + 4));
          iVar7 = FUN_000210f4(param_2);
          if (iVar6 <= iVar7) {
            dbus_error_init(auStack_3c);
            iVar8 = FUN_00020c7c(param_2);
            if (iVar8 == 0) {
              iVar8 = DAT_0002ae48 + 0x2abe8;
            }
            else {
              iVar8 = FUN_0002152c(param_2);
            }
            dbus_set_error(auStack_3c,DAT_0002ae40 + 0x2abb4,DAT_0002ae3c + 0x2abb0,iVar8,iVar6);
            FUN_0001a6ec(*(undefined4 *)(param_1 + 4),1,DAT_0002ae44 + 0x2abcc,local_38);
            dbus_move_error(auStack_3c,param_7);
            goto LAB_0002a988;
          }
          iVar6 = FUN_00029cbc(param_1,param_3);
          if (iVar6 == 0) {
            iVar6 = FUN_0002a1e8(param_1,param_3,param_2,param_4,param_6,param_7);
            if (iVar6 == 0) goto LAB_0002a988;
            iVar7 = 0;
          }
          else {
            iVar4 = _dbus_list_get_first(iVar6 + 0xc);
            iVar7 = 0;
            if (iVar4 != 0) {
              iVar7 = *(int *)(iVar4 + 8);
            }
          }
          iVar4 = _dbus_list_get_first(iVar6 + 0xc);
          if (iVar4 == 0) goto LAB_0002a988;
          if (iVar7 == 0) {
LAB_0002ac30:
            uVar2 = 1;
          }
          else {
            uVar10 = param_4 & 4;
            if (param_2 == iVar7) {
              *(byte *)(iVar4 + 0xc) =
                   *(byte *)(iVar4 + 0xc) & 0xfc | (byte)param_4 & 1 | (uVar10 != 0) << 1;
              uVar2 = 4;
            }
            else if (((uVar10 == 0) || (iVar5 = FUN_0002a8ec(iVar6), iVar5 != 0)) &&
                    ((param_4 & 6) != 4)) {
              if ((uVar10 != 0) ||
                 (((param_4 & 2) != 0 && (iVar5 = FUN_0002a8ec(iVar6), iVar5 != 0)))) {
                iVar5 = FUN_00029f18(iVar6,param_2,param_4,param_6,param_7);
                if (iVar5 == 0) goto LAB_0002a988;
                if ((*(byte *)(iVar4 + 0xc) & 2) == 0) {
                  iVar7 = FUN_0002a510(iVar6,iVar7,param_6,param_7);
                }
                else {
                  iVar7 = FUN_0002a688();
                }
                if (iVar7 == 0) goto LAB_0002a988;
                goto LAB_0002ac30;
              }
              iVar7 = FUN_00029f18(iVar6,param_2,param_4,param_6,param_7);
              if (iVar7 == 0) goto LAB_0002a988;
              uVar2 = 2;
            }
            else {
              iVar1 = FUN_00029a88(iVar6,param_2);
              if (iVar1 != 0) {
                _dbus_list_unlink(iVar6 + 0xc,iVar1);
                FUN_00029b7c(*(undefined4 *)(iVar1 + 8));
                _dbus_list_free_link(iVar1);
              }
              uVar2 = 3;
            }
          }
          *param_5 = uVar2;
          uVar2 = FUN_0001a648(*(undefined4 *)(param_1 + 4));
          iVar1 = FUN_00018acc(uVar2,iVar6,param_6);
          if (iVar1 == 0) {
            dbus_set_error_const
                      (param_7,DAT_0002ae50 + 0x2ac74,*(undefined4 *)(iVar8 + DAT_0002ae4c));
          }
          goto LAB_0002a988;
        }
        iVar1 = FUN_00020c7c(param_2);
        if (iVar1 == 0) {
          iVar1 = DAT_0002ae38 + 0x2ab54;
        }
        else {
          iVar1 = FUN_0002152c(param_2);
        }
        iVar6 = *param_3;
        iVar8 = DAT_0002ae30 + 0x2ab44;
        iVar7 = DAT_0002ae34 + 0x2ab48;
      }
    }
    else {
      iVar1 = FUN_00020c7c();
      if (iVar1 == 0) {
        iVar1 = DAT_0002ae1c + 0x2aa38;
      }
      else {
        iVar1 = FUN_0002152c(param_2);
      }
      iVar6 = DAT_0002ae10 + 0x2aa14;
      iVar8 = DAT_0002ae14 + 0x2aa20;
      iVar7 = DAT_0002ae18 + 0x2aa24;
    }
    dbus_set_error(param_7,iVar8,iVar7,iVar1,iVar6);
  }
  iVar1 = 0;
LAB_0002a988:
  if (local_2c == *piVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}



/* ===== FUN_0002ae54 @ 0002ae54 size=20 ===== */

bool FUN_0002ae54(void)

{
  int iVar1;
  
  iVar1 = FUN_00029a88();
  return iVar1 != 0;
}



/* ===== FUN_0002ae68 @ 0002ae68 size=264 ===== */

undefined1
FUN_0002ae68(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  iVar1 = _dbus_validate_bus_name(param_3,0,param_3[1]);
  pcVar3 = (char *)*param_3;
  if (iVar1 == 0) {
    dbus_set_error(param_6,DAT_0002af74 + 0x2aeac,DAT_0002af70 + 0x2aea8);
  }
  else {
    if (*pcVar3 == ':') {
      iVar2 = DAT_0002af78 + 0x2aed4;
      iVar1 = DAT_0002af7c + 0x2aed8;
    }
    else {
      pcVar3 = (char *)(DAT_0002af80 + 0x2aef4);
      iVar1 = _dbus_string_equal_c_str(param_3,pcVar3);
      if (iVar1 == 0) {
        iVar1 = FUN_00029cbc(param_1,param_3);
        if (iVar1 == 0) {
          uVar4 = 2;
        }
        else {
          iVar2 = FUN_0002ae54(iVar1,param_2);
          if (iVar2 != 0) {
            iVar1 = FUN_0002a688(iVar1,param_2,param_5,param_6);
            if (iVar1 == 0) {
              return 0;
            }
            *param_4 = 1;
            return 1;
          }
          uVar4 = 3;
        }
        *param_4 = uVar4;
        return 1;
      }
      iVar2 = DAT_0002af84 + 0x2af14;
      iVar1 = DAT_0002af88 + 0x2af18;
    }
    dbus_set_error(param_6,iVar1,iVar2,pcVar3);
  }
  return 0;
}



/* ===== FUN_0002af8c @ 0002af8c size=152 ===== */

undefined4 FUN_0002af8c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = DAT_0002b024 + 0x2afac;
  iVar5 = param_1;
  iVar1 = _dbus_list_get_first_link(param_1 + 0xc);
  while( true ) {
    if (iVar1 == 0) {
      return 1;
    }
    uVar2 = FUN_0002152c(*(undefined4 *)(*(int *)(iVar1 + 8) + 8));
    iVar3 = _dbus_list_append(param_2,uVar2);
    if (iVar3 == 0) break;
    iVar1 = *(int *)(iVar1 + 4);
    if (iVar1 == *(int *)(param_1 + 0xc)) {
      return 1;
    }
  }
  _dbus_list_clear(param_2);
  uVar2 = *(undefined4 *)(iVar4 + DAT_0002b028);
  dbus_set_error_const(param_3,DAT_0002b02c + 0x2aff8,uVar2,uVar2,iVar5,uVar2);
  return 0;
}



/* ===== FUN_0002b030 @ 0002b030 size=168 ===== */

int FUN_0002b030(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  param_1 = param_1 + 4;
  if (param_3 == 0) {
    iVar3 = param_1 + param_2 * 8 + 4;
  }
  else {
    iVar3 = _dbus_hash_table_lookup_string(*(undefined4 *)(param_1 + param_2 * 8),param_3);
    if (iVar3 == 0) {
      param_4 = param_4 & 1;
    }
    else {
      param_4 = 0;
    }
    if ((param_4 != 0) && (iVar3 = dbus_malloc0(4), iVar3 != 0)) {
      iVar1 = _dbus_strdup(param_3);
      if (iVar1 == 0) {
        dbus_free(iVar3);
        iVar3 = 0;
      }
      else {
        iVar2 = _dbus_hash_table_insert_string(*(undefined4 *)(param_1 + param_2 * 8),iVar1,iVar3);
        if (iVar2 == 0) {
          dbus_free(iVar3);
          dbus_free(iVar1);
          iVar3 = 0;
        }
      }
    }
  }
  return iVar3;
}



/* ===== FUN_0002b0d8 @ 0002b0d8 size=132 ===== */

void FUN_0002b0d8(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_2c [16];
  int local_1c;
  
  piVar4 = *(int **)(DAT_0002b15c + 0x2b0e8 + DAT_0002b160);
  local_1c = *piVar4;
  uVar2 = FUN_00020bcc();
  _dbus_string_init_const(auStack_2c,param_2);
  iVar3 = FUN_00029cbc(uVar2,auStack_2c);
  if (iVar3 == 0) {
    bVar1 = false;
  }
  else {
    iVar3 = FUN_0002a8c4(iVar3);
    bVar1 = param_1 == iVar3;
  }
  if (local_1c == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}



/* ===== FUN_0002b164 @ 0002b164 size=196 ===== */

bool FUN_0002b164(undefined4 param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = _dbus_string_append_printf(param_1,DAT_0002b228 + 0x2b180,param_2);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = DAT_0002b22c + 0x2b198;
  iVar4 = DAT_0002b230 + 0x2b19c;
  do {
    if (*param_3 == '\0') {
LAB_0002b210:
      iVar1 = _dbus_string_append_byte(param_1,0x27);
      return iVar1 != 0;
    }
    pcVar2 = strchr(param_3,0x27);
    if (pcVar2 == (char *)0x0) {
      iVar1 = _dbus_string_append_printf(param_1,DAT_0002b234 + 0x2b208,param_3);
      if (iVar1 == 0) {
        return false;
      }
      goto LAB_0002b210;
    }
    iVar3 = _dbus_string_append_printf(param_1,iVar1,(int)pcVar2 - (int)param_3,param_3);
    if (iVar3 == 0) {
      return false;
    }
    iVar3 = _dbus_string_append_printf(param_1,iVar4);
    if (iVar3 == 0) {
      return false;
    }
    param_3 = pcVar2 + 1;
  } while( true );
}



/* ===== FUN_0002b238 @ 0002b238 size=1020 ===== */

void FUN_0002b238(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_40;
  undefined1 auStack_3c [4];
  int local_38;
  int local_2c;
  
  piVar5 = *(int **)(DAT_0002b634 + 0x2b248 + DAT_0002b638);
  local_2c = *piVar5;
  iVar1 = _dbus_string_init(auStack_3c);
  uVar2 = 0;
  if (iVar1 == 0) goto LAB_0002b2fc;
  if ((*(uint *)(param_1 + 8) & 1) == 0) {
LAB_0002b27c:
    if ((((((((*(uint *)(param_1 + 8) & 2) == 0) ||
            (((local_38 < 1 ||
              (iVar1 = _dbus_string_append(auStack_3c,DAT_0002b644 + 0x2b380), iVar1 != 0)) &&
             (iVar1 = FUN_0002b164(auStack_3c,DAT_0002b640 + 0x2b364,*(undefined4 *)(param_1 + 0x10)
                                  ), iVar1 != 0)))) &&
           (((*(uint *)(param_1 + 8) & 4) == 0 ||
            (((local_38 < 1 ||
              (iVar1 = _dbus_string_append(auStack_3c,DAT_0002b64c + 0x2b3c8), iVar1 != 0)) &&
             (iVar1 = FUN_0002b164(auStack_3c,DAT_0002b648 + 0x2b3ac,*(undefined4 *)(param_1 + 0x14)
                                  ), iVar1 != 0)))))) &&
          (((*(uint *)(param_1 + 8) & 0x20) == 0 ||
           (((local_38 < 1 ||
             (iVar1 = _dbus_string_append(auStack_3c,DAT_0002b654 + 0x2b410), iVar1 != 0)) &&
            (iVar1 = FUN_0002b164(auStack_3c,DAT_0002b650 + 0x2b3f4,*(undefined4 *)(param_1 + 0x20))
            , iVar1 != 0)))))) &&
         (((*(uint *)(param_1 + 8) & 0x80) == 0 ||
          (((local_38 < 1 ||
            (iVar1 = _dbus_string_append(auStack_3c,DAT_0002b65c + 0x2b458), iVar1 != 0)) &&
           (iVar1 = FUN_0002b164(auStack_3c,DAT_0002b658 + 0x2b43c,*(undefined4 *)(param_1 + 0x20)),
           iVar1 != 0)))))) &&
        (((*(uint *)(param_1 + 8) & 8) == 0 ||
         (((local_38 < 1 ||
           (iVar1 = _dbus_string_append(auStack_3c,DAT_0002b664 + 0x2b4a0), iVar1 != 0)) &&
          (iVar1 = FUN_0002b164(auStack_3c,DAT_0002b660 + 0x2b484,*(undefined4 *)(param_1 + 0x18)),
          iVar1 != 0)))))) &&
       (((*(uint *)(param_1 + 8) & 0x10) == 0 ||
        (((local_38 < 1 ||
          (iVar1 = _dbus_string_append(auStack_3c,DAT_0002b66c + 0x2b4e8), iVar1 != 0)) &&
         (iVar1 = FUN_0002b164(auStack_3c,DAT_0002b668 + 0x2b4cc,*(undefined4 *)(param_1 + 0x1c)),
         iVar1 != 0)))))) {
      if ((*(uint *)(param_1 + 8) & 0x100) != 0) {
        if (local_38 < 1) {
LAB_0002b500:
          iVar1 = DAT_0002b670 + 0x2b50c;
        }
        else {
          iVar1 = _dbus_string_append(auStack_3c,DAT_0002b678 + 0x2b534);
          if (iVar1 == 0) goto LAB_0002b334;
          if ((*(uint *)(param_1 + 8) & 0x100) != 0) goto LAB_0002b500;
          iVar1 = DAT_0002b67c + 0x2b554;
        }
        iVar1 = FUN_0002b164(auStack_3c,DAT_0002b674 + 0x2b518,iVar1);
        if (iVar1 == 0) goto LAB_0002b334;
      }
      if ((*(uint *)(param_1 + 8) & 0x40) != 0) {
        iVar6 = DAT_0002b68c + 0x2b624;
        iVar7 = DAT_0002b690 + 0x2b628;
        iVar8 = DAT_0002b694 + 0x2b62c;
        for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x2c); iVar1 = iVar1 + 1) {
          if (*(int *)(*(int *)(param_1 + 0x28) + iVar1 * 4) != 0) {
            if ((0 < local_38) && (iVar4 = _dbus_string_append(auStack_3c,iVar6), iVar4 == 0))
            goto LAB_0002b334;
            uVar3 = *(uint *)(*(int *)(param_1 + 0x24) + iVar1 * 4);
            if ((uVar3 & 0x8000000) == 0) {
              if ((uVar3 & 0x4000000) == 0) {
                iVar4 = DAT_0002b684 + 0x2b600;
              }
              else {
                iVar4 = DAT_0002b688 + 0x2b60c;
              }
            }
            else {
              iVar4 = DAT_0002b680 + 0x2b5a4;
            }
            iVar4 = _dbus_string_append_printf(auStack_3c,iVar7,iVar1,iVar4);
            if ((iVar4 == 0) ||
               (iVar4 = FUN_0002b164(auStack_3c,iVar8,
                                     *(undefined4 *)(*(int *)(param_1 + 0x28) + iVar1 * 4)),
               iVar4 == 0)) goto LAB_0002b334;
          }
        }
      }
      iVar1 = _dbus_string_steal_data(auStack_3c,&local_40);
      if (iVar1 != 0) {
        _dbus_string_free(auStack_3c);
        uVar2 = local_40;
        goto LAB_0002b2fc;
      }
    }
  }
  else {
    uVar2 = dbus_message_type_to_string(*(undefined4 *)(param_1 + 0xc));
    iVar1 = FUN_0002b164(auStack_3c,DAT_0002b63c + 0x2b32c,uVar2);
    if (iVar1 != 0) goto LAB_0002b27c;
  }
LAB_0002b334:
  _dbus_string_free(auStack_3c);
  uVar2 = 0;
LAB_0002b2fc:
  if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/* ===== FUN_0002b698 @ 0002b698 size=936 ===== */

void FUN_0002b698(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  size_t sVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  char *__s2;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  bool bVar13;
  char *local_68;
  undefined1 auStack_64 [56];
  int local_2c;
  char *__s1;
  
  piVar9 = *(int **)(DAT_0002ba40 + 0x2b6c0 + DAT_0002ba44);
  local_2c = *piVar9;
  iVar1 = _dbus_list_get_first_link();
  __s2 = (char *)(DAT_0002ba48 + 0x2b6e8);
  do {
    if (iVar1 == 0) break;
    iVar11 = *(int *)(iVar1 + 8);
    uVar10 = *(uint *)(iVar11 + 8);
    if (((uVar10 & 4) != 0) &&
       ((pcVar5 = (char *)dbus_message_get_member(param_4), pcVar5 == (char *)0x0 ||
        (iVar2 = strcmp(pcVar5,*(char **)(iVar11 + 0x14)), iVar2 != 0)))) goto LAB_0002b754;
    if ((uVar10 & 8) == 0) {
LAB_0002b70c:
      if ((uVar10 & 0x10) == 0) {
        iVar2 = dbus_message_get_destination(param_4);
        uVar3 = (uint)(iVar2 == 0);
        if ((uVar10 & 0x100) != 0) {
          uVar3 = 1;
        }
LAB_0002b8dc:
        if (uVar3 != 0) {
LAB_0002b7e0:
          if (((uVar10 & 0x20) == 0) ||
             ((pcVar5 = (char *)dbus_message_get_path(param_4), pcVar5 != (char *)0x0 &&
              (iVar2 = strcmp(pcVar5,*(char **)(iVar11 + 0x20)), iVar2 == 0)))) {
            if ((uVar10 & 0x80) == 0) {
LAB_0002b860:
              if ((uVar10 & 0x40) != 0) {
                dbus_message_iter_init(param_4,auStack_64);
                for (iVar2 = 0; iVar2 < *(int *)(iVar11 + 0x2c); iVar2 = iVar2 + 1) {
                  pcVar5 = *(char **)(*(int *)(iVar11 + 0x28) + iVar2 * 4);
                  uVar10 = *(uint *)(*(int *)(iVar11 + 0x24) + iVar2 * 4);
                  iVar7 = dbus_message_iter_get_arg_type(auStack_64);
                  if (pcVar5 != (char *)0x0) {
                    if ((iVar7 != 0x73) && ((uVar10 & 0x8000000) == 0 || iVar7 != 0x6f))
                    goto LAB_0002b754;
                    uVar3 = uVar10 & 0xf3ffffff;
                    local_68 = (char *)0x0;
                    dbus_message_iter_get_basic(auStack_64,&local_68);
                    pcVar12 = local_68;
                    sVar6 = strlen(local_68);
                    if ((uVar10 & 0x8000000) == 0) {
                      if ((uVar10 & 0x4000000) == 0) {
                        __s1 = pcVar5;
                        pcVar5 = pcVar12;
                        if (uVar3 == sVar6) goto LAB_0002b9bc;
                        goto LAB_0002b754;
                      }
                      if (((int)sVar6 < (int)uVar3) ||
                         (iVar8 = memcmp(pcVar5,pcVar12,uVar3), iVar8 != 0)) goto LAB_0002b754;
                      if ((int)sVar6 <= (int)uVar3) goto LAB_0002ba04;
                      bVar13 = pcVar12[uVar3] == '.';
                    }
                    else {
                      if ((((int)sVar6 < (int)uVar3) && (pcVar12[sVar6 - 1] != '/')) ||
                         (((int)uVar3 < (int)sVar6 && (pcVar5[uVar3 - 1] != '/'))))
                      goto LAB_0002b754;
                      __s1 = pcVar12;
                      if ((int)sVar6 <= (int)uVar3) {
                        uVar3 = sVar6;
                      }
LAB_0002b9bc:
                      iVar8 = memcmp(__s1,pcVar5,uVar3);
                      bVar13 = iVar8 == 0;
                    }
                    if (!bVar13) goto LAB_0002b754;
                  }
LAB_0002ba04:
                  if (iVar7 != 0) {
                    dbus_message_iter_next(auStack_64);
                  }
                }
              }
              iVar2 = FUN_00020b5c(*(undefined4 *)(iVar11 + 4));
              if (iVar2 != 0) {
                iVar11 = _dbus_list_append(param_5,*(undefined4 *)(iVar11 + 4));
                uVar4 = 0;
                if (iVar11 == 0) goto LAB_0002b8b8;
              }
            }
            else {
              pcVar5 = (char *)dbus_message_get_path(param_4);
              if (pcVar5 != (char *)0x0) {
                pcVar12 = *(char **)(iVar11 + 0x20);
                sVar6 = strlen(pcVar12);
                iVar2 = strncmp(pcVar5,pcVar12,sVar6);
                if ((iVar2 == 0) && ((sVar6 < 2 || (pcVar5[sVar6] == '/' || pcVar5[sVar6] == '\0')))
                   ) goto LAB_0002b860;
              }
            }
          }
        }
      }
      else {
        pcVar5 = (char *)dbus_message_get_destination(param_4);
        if ((uVar10 & 0x100) != 0 && pcVar5 != (char *)0x0) {
          if (param_3 != 0) {
            uVar3 = FUN_0002b0d8(param_3,*(undefined4 *)(iVar11 + 0x1c));
            goto LAB_0002b8dc;
          }
          iVar2 = strcmp(*(char **)(iVar11 + 0x1c),pcVar5);
          if (iVar2 != 0) goto LAB_0002b754;
          goto LAB_0002b7e0;
        }
      }
    }
    else if (param_2 == 0) {
      iVar2 = strcmp(*(char **)(iVar11 + 0x18),__s2);
      if (iVar2 == 0) goto LAB_0002b70c;
    }
    else {
      iVar2 = FUN_0002b0d8(param_2,*(char **)(iVar11 + 0x18));
      if (iVar2 != 0) goto LAB_0002b70c;
    }
LAB_0002b754:
    iVar1 = *(int *)(iVar1 + 4);
  } while (iVar1 != *param_1);
  uVar4 = 1;
LAB_0002b8b8:
  if (local_2c == *piVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}



/* ===== FUN_0002ba4c @ 0002ba4c size=32 ===== */

void FUN_0002ba4c(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)dbus_malloc0(0x30);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    puVar1[1] = param_1;
  }
  return;
}



/* ===== FUN_0002ba7c @ 0002ba7c size=144 ===== */

void FUN_0002ba7c(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (iVar1 + -1 != 0) {
    return;
  }
  dbus_free(param_1[4]);
  dbus_free(param_1[5]);
  dbus_free(param_1[6]);
  dbus_free(param_1[7]);
  dbus_free(param_1[8]);
  dbus_free(param_1[9]);
  iVar1 = 0;
  if (param_1[10] != 0) {
    while( true ) {
      if (param_1[0xb] <= iVar1) break;
      if (*(int *)(param_1[10] + iVar1 * 4) != 0) {
        dbus_free();
      }
      iVar1 = iVar1 + 1;
    }
    dbus_free();
  }
  dbus_free(param_1);
  return;
}



/* ===== FUN_0002bb0c @ 0002bb0c size=44 ===== */

void FUN_0002bb0c(int *param_1)

{
  while (*param_1 != 0) {
    FUN_0002ba7c(*(undefined4 *)(*param_1 + 8));
    _dbus_list_remove_link(param_1,*param_1);
  }
  return;
}



/* ===== FUN_0002bb54 @ 0002bb54 size=52 ===== */

void FUN_0002bb54(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 8);
  FUN_00020fa0(*(undefined4 *)(iVar1 + 4),iVar1);
  _dbus_list_remove_link(param_1,param_2);
  FUN_0002ba7c(iVar1);
  return;
}



/* ===== FUN_0002bb88 @ 0002bb88 size=208 ===== */

void FUN_0002bb88(int *param_1,int param_2)

{
  int iVar1;
  char *__s2;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = _dbus_list_get_first_link();
LAB_0002bb9c:
  iVar4 = iVar1;
  if (iVar4 == 0) {
    return;
  }
  iVar1 = *(int *)(iVar4 + 4);
  iVar3 = *(int *)(iVar4 + 8);
  if (iVar1 == *param_1) {
    iVar1 = 0;
  }
  if (*(int *)(iVar3 + 4) != param_2) goto LAB_0002bbd4;
  goto LAB_0002bbc4;
LAB_0002bbd4:
  if ((((*(uint *)(iVar3 + 8) & 8) != 0) && (**(char **)(iVar3 + 0x18) == ':')) ||
     (((*(uint *)(iVar3 + 8) & 0x10) != 0 && (**(char **)(iVar3 + 0x1c) == ':')))) {
    __s2 = (char *)FUN_0002152c(param_2);
    uVar5 = *(uint *)(iVar3 + 8);
    if ((((uVar5 & 8) != 0) && (iVar2 = strcmp(*(char **)(iVar3 + 0x18),__s2), iVar2 == 0)) ||
       (((uVar5 & 0x10) != 0 && (iVar3 = strcmp(*(char **)(iVar3 + 0x1c),__s2), iVar3 == 0)))) {
LAB_0002bbc4:
      FUN_0002bb54(param_1,iVar4);
    }
  }
  goto LAB_0002bb9c;
}



/* ===== FUN_0002bc70 @ 0002bc70 size=64 ===== */

undefined4 FUN_0002bc70(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = _dbus_strdup(param_2);
  if (iVar1 != 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
    dbus_free(*(undefined4 *)(param_1 + 0x10));
    *(int *)(param_1 + 0x10) = iVar1;
    return 1;
  }
  return 0;
}



/* ===== FUN_0002bcb0 @ 0002bcb0 size=64 ===== */

undefined4 FUN_0002bcb0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = _dbus_strdup(param_2);
  if (iVar1 != 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 4;
    dbus_free(*(undefined4 *)(param_1 + 0x14));
    *(int *)(param_1 + 0x14) = iVar1;
    return 1;
  }
  return 0;
}



/* ===== FUN_0002bcf0 @ 0002bcf0 size=64 ===== */

undefined4 FUN_0002bcf0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = _dbus_strdup(param_2);
  if (iVar1 != 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
    dbus_free(*(undefined4 *)(param_1 + 0x18));
    *(int *)(param_1 + 0x18) = iVar1;
    return 1;
  }
  return 0;
}



/* ===== FUN_0002bd30 @ 0002bd30 size=64 ===== */

undefined4 FUN_0002bd30(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = _dbus_strdup(param_2);
  if (iVar1 != 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x10;
    dbus_free(*(undefined4 *)(param_1 + 0x1c));
    *(int *)(param_1 + 0x1c) = iVar1;
    return 1;
  }
  return 0;
}



/* ===== FUN_0002bd70 @ 0002bd70 size=24 ===== */

void FUN_0002bd70(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 8) & 0xfffffeff;
  }
  else {
    uVar1 = *(uint *)(param_1 + 8) | 0x100;
  }
  *(uint *)(param_1 + 8) = uVar1;
  return;
}



/* ===== FUN_0002bd88 @ 0002bd88 size=12 ===== */

uint FUN_0002bd88(int param_1)

{
  return (*(uint *)(param_1 + 8) & 0x1ff) >> 8;
}



/* ===== FUN_0002bd94 @ 0002bd94 size=80 ===== */

undefined4 FUN_0002bd94(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = _dbus_strdup(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 8) & 0xffffff5f;
  if (param_3 == 0) {
    uVar2 = uVar2 | 0x20;
  }
  else {
    uVar2 = uVar2 | 0x80;
  }
  *(uint *)(param_1 + 8) = uVar2;
  dbus_free(*(undefined4 *)(param_1 + 0x20));
  *(int *)(param_1 + 0x20) = iVar1;
  return 1;
}



/* ===== FUN_0002bde4 @ 0002bde4 size=324 ===== */

void FUN_0002bde4(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int local_28;
  int local_24;
  
  piVar6 = *(int **)(DAT_0002bf28 + 0x2be04 + DAT_0002bf2c);
  local_24 = *piVar6;
  local_28 = param_1;
  if (param_2 < *(int *)(param_1 + 0x2c)) {
LAB_0002be9c:
    uVar5 = *(undefined4 *)(param_3 + 4);
    iVar3 = _dbus_string_copy_data(param_3,&local_28);
    if (iVar3 != 0) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x40;
      dbus_free(*(undefined4 *)(*(int *)(param_1 + 0x28) + param_2 * 4));
      uVar2 = 1;
      *(undefined4 *)(*(int *)(param_1 + 0x24) + param_2 * 4) = uVar5;
      *(int *)(*(int *)(param_1 + 0x28) + param_2 * 4) = local_28;
      if (param_4 != 0) {
        *(uint *)(*(int *)(param_1 + 0x24) + param_2 * 4) =
             *(uint *)(*(int *)(param_1 + 0x24) + param_2 * 4) | 0x8000000;
      }
      if (param_5 != 0) {
        *(uint *)(*(int *)(param_1 + 0x24) + param_2 * 4) =
             *(uint *)(*(int *)(param_1 + 0x24) + param_2 * 4) | 0x4000000;
      }
      goto LAB_0002be48;
    }
  }
  else {
    iVar7 = param_2 + 1;
    iVar3 = (param_2 + 2) * 4;
    iVar1 = dbus_realloc(*(undefined4 *)(param_1 + 0x28),iVar3);
    if (iVar1 != 0) {
      for (iVar4 = *(int *)(param_1 + 0x2c); iVar4 <= iVar7; iVar4 = iVar4 + 1) {
        *(undefined4 *)(iVar1 + iVar4 * 4) = 0;
      }
      *(int *)(param_1 + 0x28) = iVar1;
      iVar3 = dbus_realloc(*(undefined4 *)(param_1 + 0x24),iVar3);
      if (iVar3 != 0) {
        for (iVar1 = *(int *)(param_1 + 0x2c); iVar1 <= iVar7; iVar1 = iVar1 + 1) {
          *(undefined4 *)(iVar3 + iVar1 * 4) = 0;
        }
        *(int *)(param_1 + 0x24) = iVar3;
        *(int *)(param_1 + 0x2c) = iVar7;
        goto LAB_0002be9c;
      }
    }
  }
  uVar2 = 0;
LAB_0002be48:
  if (local_24 != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/* ===== FUN_0002bf30 @ 0002bf30 size=2696 ===== */

void FUN_0002bf30(undefined4 param_1,int *param_2,undefined4 param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  int *piVar8;
  undefined4 uVar9;
  char *__s2;
  char *__s2_00;
  char *__s2_01;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  char *__s1;
  char *__s1_00;
  int iVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  bool bVar19;
  int *local_fc;
  int local_f8;
  uint local_dc;
  int local_d8;
  char *local_d4;
  int local_d0;
  undefined1 auStack_c4 [4];
  int local_c0;
  int local_b4 [34];
  int local_2c;
  
  iVar14 = DAT_0002c9b8 + 0x2bf4c;
  piVar8 = *(int **)(iVar14 + DAT_0002c9bc);
  local_2c = *piVar8;
  if (0x400 < param_2[1]) {
    iVar12 = 0;
    dbus_set_error(param_3,DAT_0002c9c0 + 0x2bf84,DAT_0002c9c4 + 0x2bf88,param_2[1],0x400);
    goto LAB_0002bf88;
  }
  local_fc = local_b4;
  memset(local_fc,0,0x88);
  iVar12 = FUN_0002ba4c(param_1);
  if (iVar12 != 0) {
    iVar2 = _dbus_string_init(&local_d4);
    if (iVar2 == 0) {
      uVar9 = *(undefined4 *)(iVar14 + DAT_0002c9c8);
      iVar14 = DAT_0002c9d0 + 0x2c048;
    }
    else {
      iVar2 = _dbus_string_init(auStack_c4);
      if (iVar2 != 0) {
        pbVar15 = (byte *)0x0;
        local_f8 = 0;
        piVar11 = local_fc;
LAB_0002c2fc:
        if (param_2[1] <= (int)pbVar15) goto LAB_0002c1b4;
        iVar2 = *param_2;
        pbVar15 = pbVar15 + iVar2;
        do {
          pbVar16 = pbVar15;
          pbVar18 = pbVar16;
          if ((*pbVar16 == 0) || (uVar10 = (uint)(byte)(*pbVar16 - 9), 0x17 < uVar10)) break;
          pbVar15 = pbVar16 + 1;
        } while ((~(DAT_0002c9d8 >> uVar10) & 1) == 0);
        do {
          pbVar17 = pbVar18;
          bVar7 = *pbVar17;
          pbVar1 = pbVar17;
          if (bVar7 == 0x3d || (bVar7 & 0xdf) == 0) break;
          bVar19 = 0xc < bVar7;
          if (bVar7 != 0xd) {
            bVar19 = bVar7 != 9;
          }
          pbVar18 = pbVar17 + 1;
        } while (bVar19 && (bVar7 != 0xd && bVar7 != 10));
        do {
          pbVar15 = pbVar1;
          bVar7 = *pbVar15;
          piVar13 = local_fc;
          if (bVar7 == 0) break;
          if (0x17 < (byte)(bVar7 - 9)) {
            if (pbVar16 == pbVar17) goto LAB_0002c398;
            if (bVar7 != 0x3d) goto LAB_0002c0c0;
            iVar3 = _dbus_string_append_len(&local_d4,pbVar16,(int)pbVar17 - (int)pbVar16);
            if (iVar3 == 0) goto LAB_0002c128;
            iVar2 = 1 - iVar2;
            goto LAB_0002c39c;
          }
          pbVar1 = pbVar15 + 1;
        } while ((~(DAT_0002c9d8 >> (uint)(byte)(bVar7 - 9)) & 1) == 0);
        if (pbVar16 != pbVar17) {
LAB_0002c0c0:
          dbus_set_error(param_3,DAT_0002c9e0 + 0x2c0d8,DAT_0002c9dc + 0x2c0d4);
          goto LAB_0002c0dc;
        }
LAB_0002c398:
        iVar2 = -iVar2;
LAB_0002c39c:
        pbVar15 = pbVar15 + iVar2;
        if (local_d0 == 0) {
LAB_0002c19c:
          piVar11 = piVar11 + 2;
          local_f8 = local_f8 + 1;
          if (local_f8 == 0x10) goto LAB_0002c1b4;
          goto LAB_0002c2fc;
        }
        iVar3 = _dbus_string_steal_data(&local_d4,piVar11);
        iVar2 = local_c0;
        if (iVar3 == 0) {
LAB_0002c128:
          dbus_set_error_const
                    (param_3,DAT_0002c9e4 + 0x2c140,*(undefined4 *)(iVar14 + DAT_0002c9c8));
        }
        else {
          iVar3 = *param_2;
          pbVar18 = pbVar15 + iVar3;
          bVar7 = 0;
          while( true ) {
            bVar6 = *pbVar18;
            pbVar15 = pbVar18 + 1;
            if (bVar6 == 0) break;
            if (bVar7 == 0) {
              if (bVar6 == 0x2c) goto LAB_0002c180;
              pbVar18 = pbVar15;
              bVar7 = bVar6;
              if ((bVar6 != 0x5c) && (bVar6 != 0x27)) {
LAB_0002c284:
                iVar4 = _dbus_string_append_byte(auStack_c4,bVar6);
                if (iVar4 == 0) goto LAB_0002c414;
LAB_0002c294:
                bVar7 = 0;
                pbVar18 = pbVar15;
              }
            }
            else {
              if (bVar7 == 0x5c) {
                if ((bVar6 == 0x27) ||
                   (iVar4 = _dbus_string_append_byte(auStack_c4,0x5c), iVar4 != 0)) {
                  bVar6 = *pbVar18;
                  goto LAB_0002c284;
                }
                goto LAB_0002c414;
              }
              if (bVar6 == 0x27) goto LAB_0002c294;
              iVar4 = _dbus_string_append_byte(auStack_c4);
              pbVar18 = pbVar15;
              if (iVar4 == 0) goto LAB_0002c414;
            }
          }
          pbVar15 = pbVar18;
          if (bVar7 == 0x5c) {
            iVar4 = _dbus_string_append_byte(auStack_c4,0x5c);
            if (iVar4 != 0) {
LAB_0002c180:
              pbVar15 = pbVar15 + -iVar3;
              iVar2 = _dbus_string_steal_data(auStack_c4,piVar11 + 1);
              if (iVar2 != 0) goto LAB_0002c19c;
              goto LAB_0002c128;
            }
LAB_0002c414:
            dbus_set_error_const
                      (param_3,DAT_0002ca04 + 0x2c42c,*(undefined4 *)(iVar14 + DAT_0002c9c8));
          }
          else {
            if (bVar7 != 0x27) goto LAB_0002c180;
            dbus_set_error(param_3,DAT_0002ca00 + 0x2c2e4,DAT_0002c9fc + 0x2c2e0);
          }
          _dbus_string_set_length(auStack_c4,iVar2);
        }
LAB_0002c0dc:
        for (; (*piVar13 != 0 || (iVar2 = 0, piVar13[1] != 0)); piVar13 = piVar13 + 2) {
          dbus_free();
          dbus_free(piVar13[1]);
          *piVar13 = 0;
          piVar13[1] = 0;
        }
        goto LAB_0002c1b8;
      }
      _dbus_string_free(&local_d4);
      uVar9 = *(undefined4 *)(iVar14 + DAT_0002c9c8);
      iVar14 = DAT_0002c9d4 + 0x2c084;
    }
LAB_0002c04c:
    dbus_set_error_const(param_3,iVar14,uVar9);
    goto LAB_0002c674;
  }
  dbus_set_error_const(param_3,DAT_0002c9cc + 0x2bfe8,*(undefined4 *)(iVar14 + DAT_0002c9c8));
  goto LAB_0002bff0;
LAB_0002c1b4:
  iVar2 = 1;
LAB_0002c1b8:
  _dbus_string_free(&local_d4);
  _dbus_string_free(auStack_c4);
  if (iVar2 == 0) {
LAB_0002c674:
    FUN_0002ba7c(iVar12);
    iVar12 = 0;
  }
  else {
    __s2 = (char *)(DAT_0002c9e8 + 0x2c1e0);
    __s2_00 = (char *)(DAT_0002c9ec + 0x2c1ec);
    __s2_01 = (char *)(DAT_0002c9f0 + 0x2c1f8);
    for (; __s1 = (char *)*local_fc, __s1 != (char *)0x0; local_fc = local_fc + 2) {
      __s1_00 = (char *)local_fc[1];
      _dbus_string_init_const(&local_d4,__s1_00);
      iVar4 = strcmp(__s1,__s2);
      iVar3 = local_d0;
      if (iVar4 != 0) {
        iVar4 = strcmp(__s1,__s2_00);
        if (iVar4 == 0) {
          if ((*(uint *)(iVar12 + 8) & 8) == 0) {
            iVar3 = _dbus_validate_bus_name(&local_d4,0,iVar3);
            if (iVar3 != 0) {
              iVar3 = FUN_0002bcf0(iVar12,__s1_00);
LAB_0002c500:
              if (iVar3 != 0) goto LAB_0002c47c;
              uVar9 = *(undefined4 *)(iVar14 + DAT_0002c9c8);
              iVar14 = DAT_0002ca20 + 0x2c51c;
              goto LAB_0002c04c;
            }
            iVar2 = DAT_0002ca18 + 0x2c4f0;
            iVar14 = DAT_0002ca1c + 0x2c4f4;
            __s1 = __s1_00;
          }
          else {
            iVar2 = DAT_0002ca10 + 0x2c4c4;
            iVar14 = DAT_0002ca14 + 0x2c4c8;
          }
        }
        else {
          iVar4 = strcmp(__s1,__s2_01);
          if (iVar4 == 0) {
            if ((*(uint *)(iVar12 + 8) & 2) == 0) {
              iVar3 = _dbus_validate_interface(&local_d4,0,iVar3);
              if (iVar3 != 0) {
                iVar3 = FUN_0002bc70(iVar12,__s1_00);
                goto LAB_0002c500;
              }
              iVar2 = DAT_0002ca2c + 0x2c584;
              iVar14 = DAT_0002ca30 + 0x2c588;
              __s1 = __s1_00;
            }
            else {
              iVar2 = DAT_0002ca24 + 0x2c558;
              iVar14 = DAT_0002ca28 + 0x2c55c;
            }
          }
          else {
            iVar4 = strcmp(__s1,(char *)(DAT_0002ca34 + 0x2c5a8));
            if (iVar4 == 0) {
              if ((*(uint *)(iVar12 + 8) & 4) == 0) {
                iVar3 = _dbus_validate_member(&local_d4,0,iVar3);
                if (iVar3 != 0) {
                  iVar3 = FUN_0002bcb0(iVar12,__s1_00);
                  goto LAB_0002c500;
                }
                iVar2 = DAT_0002ca40 + 0x2c5fc;
                iVar14 = DAT_0002ca44 + 0x2c600;
                __s1 = __s1_00;
              }
              else {
                iVar2 = DAT_0002ca38 + 0x2c5d0;
                iVar14 = DAT_0002ca3c + 0x2c5d4;
              }
            }
            else {
              iVar4 = strcmp(__s1,(char *)(DAT_0002ca48 + 0x2c620));
              iVar5 = strcmp(__s1,(char *)(DAT_0002ca4c + 0x2c634));
              if ((iVar4 == 0) || (iVar5 == 0)) {
                if ((*(uint *)(iVar12 + 8) & 0xa0) != 0) {
                  dbus_set_error(param_3,DAT_0002ca54 + 0x2c674,DAT_0002ca50 + 0x2c670);
                  goto LAB_0002c674;
                }
                iVar3 = _dbus_validate_path(&local_d4,0,iVar3);
                if (iVar3 != 0) {
                  iVar3 = FUN_0002bd94(iVar12,__s1_00,iVar5 == 0);
                  goto LAB_0002c500;
                }
                iVar2 = DAT_0002ca58 + 0x2c6ac;
                iVar14 = DAT_0002ca5c + 0x2c6b0;
                __s1 = __s1_00;
              }
              else {
                iVar4 = strcmp(__s1,(char *)(DAT_0002ca60 + 0x2c6d4));
                if (iVar4 == 0) {
                  if ((*(uint *)(iVar12 + 8) & 0x10) == 0) {
                    iVar3 = _dbus_validate_bus_name(&local_d4,0,iVar3);
                    if (iVar3 != 0) {
                      iVar3 = FUN_0002bd30(iVar12,__s1_00);
                      goto LAB_0002c500;
                    }
                    iVar2 = DAT_0002ca6c + 0x2c728;
                    iVar14 = DAT_0002ca70 + 0x2c72c;
                    __s1 = __s1_00;
                  }
                  else {
                    iVar2 = DAT_0002ca64 + 0x2c6fc;
                    iVar14 = DAT_0002ca68 + 0x2c700;
                  }
                }
                else {
                  iVar3 = strcmp(__s1,(char *)(DAT_0002ca74 + 0x2c74c));
                  if (iVar3 == 0) {
                    iVar3 = strcmp(__s1_00,(char *)(DAT_0002ca78 + 0x2c764));
                    if (iVar3 == 0) {
                      uVar10 = *(uint *)(iVar12 + 8) | 0x100;
                    }
                    else {
                      iVar3 = strcmp(__s1_00,(char *)(DAT_0002ca7c + 0x2c784));
                      if (iVar3 != 0) {
                        iVar2 = DAT_0002ca80 + 0x2c7b0;
                        iVar14 = DAT_0002ca84 + 0x2c7b4;
                        __s1 = __s1_00;
                        goto LAB_0002c250;
                      }
                      uVar10 = *(uint *)(iVar12 + 8) & 0xfffffeff;
                    }
                    *(uint *)(iVar12 + 8) = uVar10;
                    goto LAB_0002c47c;
                  }
                  iVar3 = strncmp(__s1,(char *)(DAT_0002ca88 + 0x2c7c8),3);
                  if (iVar3 == 0) {
                    _dbus_string_init_const(auStack_c4,__s1);
                    iVar3 = local_c0;
                    if (local_c0 < 4) {
                      iVar2 = DAT_0002ca8c + 0x2c800;
                      iVar14 = DAT_0002ca90 + 0x2c804;
                    }
                    else {
                      iVar4 = _dbus_string_parse_uint(auStack_c4,3,&local_dc,&local_d8);
                      if (iVar4 != 0) {
                        if (iVar3 == local_d8) {
                          iVar3 = 0;
LAB_0002c914:
                          iVar4 = 0;
LAB_0002c8b4:
                          if (local_dc < 0x40) {
                            if ((((*(uint *)(iVar12 + 8) & 0x40) != 0) &&
                                ((int)local_dc < *(int *)(iVar12 + 0x2c))) &&
                               (*(int *)(*(int *)(iVar12 + 0x28) + local_dc * 4) != 0)) {
                              iVar2 = DAT_0002cabc + 0x2c960;
                              iVar14 = DAT_0002cac0 + 0x2c964;
                              goto LAB_0002c250;
                            }
                            iVar3 = FUN_0002bde4(iVar12,local_dc,&local_d4,iVar4,iVar3);
                            if (iVar3 != 0) goto LAB_0002c47c;
                            uVar9 = *(undefined4 *)(iVar14 + DAT_0002c9c8);
                            iVar14 = DAT_0002cac4 + 0x2c990;
                            goto LAB_0002c04c;
                          }
                          uVar10 = 0x3f;
                          iVar2 = DAT_0002caac + 0x2c8dc;
                          iVar14 = DAT_0002cab0 + 0x2c8e0;
                        }
                        else {
                          if ((iVar3 == local_d8 + 4) &&
                             (iVar3 = FUN_00032acc(auStack_c4,DAT_0002caa8 + 0x2c8a4), iVar3 != 0))
                          {
                            iVar3 = 0;
                            iVar4 = iVar2;
                            goto LAB_0002c8b4;
                          }
                          iVar3 = _dbus_string_equal_c_str(auStack_c4,DAT_0002ca9c + 0x2c860);
                          if (iVar3 != 0) {
                            iVar4 = _dbus_validate_bus_namespace(&local_d4,0,local_d0);
                            iVar3 = iVar2;
                            if (iVar4 == 0) {
                              iVar2 = DAT_0002cab4 + 0x2c90c;
                              iVar14 = DAT_0002cab8 + 0x2c910;
                              __s1 = local_d4;
                              goto LAB_0002c250;
                            }
                            goto LAB_0002c914;
                          }
                          iVar2 = DAT_0002caa0 + 0x2c888;
                          iVar14 = DAT_0002caa4 + 0x2c88c;
                          uVar10 = local_dc;
                        }
                        dbus_set_error(param_3,iVar14,iVar2,__s1,local_dc,uVar10);
                        goto LAB_0002c674;
                      }
                      iVar2 = DAT_0002ca94 + 0x2c834;
                      iVar14 = DAT_0002ca98 + 0x2c838;
                    }
                  }
                  else {
                    iVar2 = DAT_0002cac8 + 0x2c9ac;
                    iVar14 = DAT_0002cacc + 0x2c9b0;
                  }
                }
              }
            }
          }
        }
LAB_0002c250:
        dbus_set_error(param_3,iVar14,iVar2,__s1);
        goto LAB_0002c674;
      }
      if ((*(uint *)(iVar12 + 8) & 1) != 0) {
        iVar2 = DAT_0002c9f4 + 0x2c250;
        iVar14 = DAT_0002c9f8 + 0x2c254;
        goto LAB_0002c250;
      }
      iVar3 = dbus_message_type_from_string(__s1_00);
      if (iVar3 == 0) {
        iVar2 = DAT_0002ca08 + 0x2c468;
        iVar14 = DAT_0002ca0c + 0x2c46c;
        __s1 = __s1_00;
        goto LAB_0002c250;
      }
      *(int *)(iVar12 + 0xc) = iVar3;
      *(uint *)(iVar12 + 8) = *(uint *)(iVar12 + 8) | 1;
LAB_0002c47c:
    }
  }
LAB_0002bff0:
  for (piVar11 = local_b4; (*piVar11 != 0 || (piVar11[1] != 0)); piVar11 = piVar11 + 2) {
    dbus_free();
    dbus_free(piVar11[1]);
  }
LAB_0002bf88:
  if (local_2c == *piVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar12);
}



/* ===== FUN_0002cad0 @ 0002cad0 size=372 ===== */

void FUN_0002cad0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_48;
  undefined1 auStack_44 [24];
  int local_2c;
  
  piVar5 = *(int **)(DAT_0002cc44 + 0x2cae4 + DAT_0002cc48);
  local_2c = *piVar5;
  iVar6 = param_1;
  do {
    _dbus_hash_iter_init(*(undefined4 *)(iVar6 + 4),auStack_44);
LAB_0002cb20:
    iVar1 = _dbus_hash_iter_next(auStack_44);
    if (iVar1 != 0) {
      piVar4 = (int *)_dbus_hash_iter_get_value(auStack_44);
      iVar1 = _dbus_list_get_first_link();
      do {
        if (iVar1 == 0) break;
        if (*(int *)(*(int *)(iVar1 + 8) + 4) == param_2) {
          local_48 = FUN_0002b238();
          if (local_48 == 0) goto LAB_0002cc1c;
          iVar7 = dbus_message_iter_append_basic(param_3,0x73,&local_48);
          if (iVar7 == 0) goto LAB_0002cc18;
          dbus_free(local_48);
        }
        iVar1 = *(int *)(iVar1 + 4);
      } while (iVar1 != *piVar4);
      goto LAB_0002cb20;
    }
    iVar7 = iVar6 + 8;
    iVar1 = _dbus_list_get_first_link(iVar7);
    do {
      if (iVar1 == 0) break;
      if (*(int *)(*(int *)(iVar1 + 8) + 4) == param_2) {
        local_48 = FUN_0002b238();
        if (local_48 == 0) goto LAB_0002cc1c;
        iVar2 = dbus_message_iter_append_basic(param_3,0x73,&local_48);
        if (iVar2 == 0) goto LAB_0002cc18;
        dbus_free(local_48);
      }
      iVar1 = *(int *)(iVar1 + 4);
    } while (iVar1 != *(int *)(iVar6 + 8));
    iVar6 = iVar7;
  } while (iVar7 != param_1 + 0x28);
  uVar3 = 1;
LAB_0002cba8:
  if (local_2c == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
LAB_0002cc18:
  dbus_free(local_48);
LAB_0002cc1c:
  uVar3 = 0;
  goto LAB_0002cba8;
}



/* ===== FUN_0002cc4c @ 0002cc4c size=168 ===== */

undefined4 * FUN_0002cc4c(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  iVar3 = DAT_0002ccf4;
  puVar2 = (undefined4 *)dbus_malloc0(0x2c);
  iVar1 = DAT_0002ccf8;
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar2 = 1;
  uVar4 = *(undefined4 *)(iVar3 + 0x2cc68 + DAT_0002ccfc);
  puVar5 = puVar2;
  while( true ) {
    iVar3 = _dbus_hash_table_new(0,uVar4,iVar1 + 0x2cc88);
    puVar5[1] = iVar3;
    if (iVar3 == 0) break;
    puVar5 = puVar5 + 2;
    if (puVar5 == puVar2 + 10) {
      return puVar2;
    }
  }
  iVar3 = 0;
  do {
    if (puVar2[iVar3 * 2 + 1] == 0) break;
    iVar3 = iVar3 + 1;
    _dbus_hash_table_unref();
  } while (iVar3 != 5);
  dbus_free(puVar2);
  return (undefined4 *)0x0;
}



/* ===== FUN_0002cd10 @ 0002cd10 size=76 ===== */

void FUN_0002cd10(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (iVar1 + -1 != 0) {
    return;
  }
  piVar2 = param_1 + 2;
  do {
    _dbus_hash_table_unref(piVar2[-1]);
    piVar3 = piVar2 + 2;
    FUN_0002bb0c(piVar2);
    piVar2 = piVar3;
  } while (piVar3 != param_1 + 0xc);
  dbus_free(param_1);
  return;
}



/* ===== FUN_0002cd5c @ 0002cd5c size=160 ===== */

undefined4 FUN_0002cd5c(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0002b030(param_1,param_2[3],param_2[4],1);
  if ((piVar1 != (int *)0x0) && (iVar2 = _dbus_list_append(piVar1,param_2), iVar2 != 0)) {
    iVar2 = FUN_00020f70(param_2[1],param_2);
    if (iVar2 != 0) {
      *param_2 = *param_2 + 1;
      return 1;
    }
    _dbus_list_remove_last(piVar1,param_2);
    if ((param_2[4] != 0) && (*piVar1 == 0)) {
      _dbus_hash_table_remove_string(*(undefined4 *)(param_1 + param_2[3] * 8 + 4));
      return 0;
    }
  }
  return 0;
}



/* ===== FUN_0002cdfc @ 0002cdfc size=104 ===== */

void FUN_0002cdfc(int param_1,int param_2)

{
  int *piVar1;
  
  FUN_00020fa0(*(undefined4 *)(param_2 + 4));
  piVar1 = (int *)FUN_0002b030(param_1,*(undefined4 *)(param_2 + 0xc),
                               *(undefined4 *)(param_2 + 0x10),0);
  _dbus_list_remove(piVar1,param_2);
  if ((*(int *)(param_2 + 0x10) != 0) && (*piVar1 == 0)) {
    _dbus_hash_table_remove_string(*(undefined4 *)(param_1 + *(int *)(param_2 + 0xc) * 8 + 4));
  }
  FUN_0002ba7c(param_2);
  return;
}



/* ===== FUN_0002ce64 @ 0002ce64 size=516 ===== */

undefined4 FUN_0002ce64(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  void *__s1;
  int iVar4;
  void *__s2;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *unaff_r10;
  
  piVar1 = (int *)FUN_0002b030(param_1,*(undefined4 *)(param_2 + 0xc),
                               *(undefined4 *)(param_2 + 0x10),0,param_1,param_2,param_3);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)_dbus_list_get_last_link();
    while (piVar8 = piVar2, piVar8 != (int *)0x0) {
      iVar5 = piVar8[2];
      uVar6 = *(uint *)(iVar5 + 8);
      if ((int *)*piVar1 == piVar8) {
        unaff_r10 = (int *)0x0;
      }
      if ((int *)*piVar1 != piVar8) {
        unaff_r10 = (int *)*piVar8;
      }
      piVar2 = unaff_r10;
      if (((((uVar6 == *(uint *)(param_2 + 8)) && (*(int *)(iVar5 + 4) == *(int *)(param_2 + 4))) &&
           (((uVar6 & 1) == 0 || (*(int *)(iVar5 + 0xc) == *(int *)(param_2 + 0xc))))) &&
          ((((uVar6 & 4) == 0 ||
            (iVar3 = strcmp(*(char **)(iVar5 + 0x14),*(char **)(param_2 + 0x14)), iVar3 == 0)) &&
           (((uVar6 & 0x20) == 0 ||
            (iVar3 = strcmp(*(char **)(iVar5 + 0x20),*(char **)(param_2 + 0x20)), iVar3 == 0))))))
         && (((((uVar6 & 2) == 0 ||
               (iVar3 = strcmp(*(char **)(iVar5 + 0x10),*(char **)(param_2 + 0x10)), iVar3 == 0)) &&
              (((uVar6 & 8) == 0 ||
               (iVar3 = strcmp(*(char **)(iVar5 + 0x18),*(char **)(param_2 + 0x18)), iVar3 == 0))))
             && (((uVar6 & 0x10) == 0 ||
                 (iVar3 = strcmp(*(char **)(iVar5 + 0x1c),*(char **)(param_2 + 0x1c)), iVar3 == 0)))
             ))) {
        if ((uVar6 & 0x40) == 0) {
LAB_0002d028:
          FUN_0002bb54(piVar1,piVar8);
          if ((*(int *)(param_2 + 0x10) != 0) && (*piVar1 == 0)) {
            _dbus_hash_table_remove_string
                      (*(undefined4 *)(param_1 + *(int *)(param_2 + 0xc) * 8 + 4));
          }
          return 1;
        }
        iVar3 = *(int *)(iVar5 + 0x2c);
        if (iVar3 == *(int *)(param_2 + 0x2c)) {
          iVar7 = 0;
          while( true ) {
            if (iVar3 <= iVar7) goto LAB_0002d028;
            __s1 = *(void **)(*(int *)(iVar5 + 0x28) + iVar7 * 4);
            __s2 = *(void **)(*(int *)(param_2 + 0x28) + iVar7 * 4);
            if ((((__s1 != (void *)0x0) != (__s2 != (void *)0x0)) ||
                (uVar6 = *(uint *)(*(int *)(iVar5 + 0x24) + iVar7 * 4),
                uVar6 != *(uint *)(*(int *)(param_2 + 0x24) + iVar7 * 4))) ||
               ((__s1 != (void *)0x0 && (iVar4 = memcmp(__s1,__s2,uVar6 & 0xf3ffffff), iVar4 != 0)))
               ) break;
            iVar7 = iVar7 + 1;
          }
        }
      }
    }
  }
  dbus_set_error(param_3,DAT_0002d06c + 0x2cea4,DAT_0002d068 + 0x2cea0);
  return 0;
}



/* ===== FUN_0002d070 @ 0002d070 size=172 ===== */

void FUN_0002d070(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_3c [24];
  int local_24;
  
  piVar4 = *(int **)(DAT_0002d11c + 0x2d080 + DAT_0002d120);
  iVar3 = param_1 + 8;
  local_24 = *piVar4;
  do {
    FUN_0002bb88(iVar3,param_2);
    _dbus_hash_iter_init(*(undefined4 *)(iVar3 + -4),auStack_3c);
    while (iVar1 = _dbus_hash_iter_next(auStack_3c), iVar1 != 0) {
      piVar2 = (int *)_dbus_hash_iter_get_value(auStack_3c);
      FUN_0002bb88(piVar2,param_2);
      if (*piVar2 == 0) {
        _dbus_hash_iter_remove_entry(auStack_3c);
      }
    }
    iVar3 = iVar3 + 8;
  } while (iVar3 != param_1 + 0x30);
  if (local_24 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_0002d124 @ 0002d124 size=380 ===== */

undefined4
FUN_0002d124(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  FUN_00020b4c(param_2);
  if (param_4 != 0) {
    FUN_00020b5c(param_4);
  }
  iVar1 = dbus_message_get_type(param_5);
  iVar2 = dbus_message_get_interface(param_5);
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0002b030(param_1,0,iVar2);
  }
  if (iVar1 - 1U < 4) {
    iVar6 = param_1 + iVar1 * 8 + 8;
    iVar5 = 0;
    if (iVar2 != 0) {
      iVar5 = FUN_0002b030(param_1,iVar1,iVar2,0);
    }
  }
  else {
    iVar5 = 0;
    iVar6 = iVar5;
  }
  if (((((param_1 + 8 == 0) ||
        (iVar1 = FUN_0002b698(param_1 + 8,param_3,param_4,param_5,param_6), iVar1 != 0)) &&
       ((iVar3 == 0 || (iVar1 = FUN_0002b698(iVar3,param_3,param_4,param_5,param_6), iVar1 != 0))))
      && ((iVar6 == 0 || (iVar1 = FUN_0002b698(iVar6,param_3,param_4,param_5,param_6), iVar1 != 0)))
      ) && ((iVar5 == 0 || (iVar1 = FUN_0002b698(iVar5,param_3,param_4,param_5,param_6), iVar1 != 0)
            ))) {
    uVar4 = 1;
  }
  else {
    _dbus_list_clear(param_6);
    uVar4 = 0;
  }
  return uVar4;
}



/* ===== FUN_0002d2a0 @ 0002d2a0 size=680 ===== */

void FUN_0002d2a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 auStack_9c [56];
  undefined1 auStack_64 [56];
  int local_2c;
  
  iVar6 = DAT_0002d548 + 0x2d2c0;
  piVar5 = *(int **)(iVar6 + DAT_0002d54c);
  local_2c = *piVar5;
  FUN_0002168c(param_2);
  uVar1 = FUN_0001a640();
  iVar2 = FUN_0002e07c(param_3,auStack_9c,auStack_64);
  if (iVar2 != 0) {
    _dbus_list_get_stats(&local_a8,&local_a4,&local_a0);
    *(int *)(DAT_0002d550 + 0x2d324) = *(int *)(DAT_0002d550 + 0x2d324) + 1;
    iVar3 = FUN_0002e1c8(auStack_64,DAT_0002d554 + 0x2d338);
    if ((((iVar3 == 0) ||
         (iVar3 = FUN_0002e1c8(auStack_64,DAT_0002d560 + 0x2d390,local_a8), iVar3 == 0)) ||
        (iVar3 = FUN_0002e1c8(auStack_64,DAT_0002d564 + 0x2d3ac,local_a4), iVar3 == 0)) ||
       (iVar3 = FUN_0002e1c8(auStack_64,DAT_0002d568 + 0x2d3c8,local_a0), iVar3 == 0)) {
LAB_0002d340:
      dbus_message_iter_abandon_container(auStack_9c,auStack_64);
    }
    else {
      uVar4 = FUN_000225cc(uVar1);
      iVar3 = FUN_0002e1c8(auStack_64,DAT_0002d56c + 0x2d3ec,uVar4);
      if (iVar3 == 0) goto LAB_0002d340;
      uVar4 = FUN_000225d4(uVar1);
      iVar3 = FUN_0002e1c8(auStack_64,DAT_0002d570 + 0x2d410,uVar4);
      if (iVar3 == 0) goto LAB_0002d340;
      uVar4 = FUN_000225dc(uVar1);
      iVar3 = FUN_0002e1c8(auStack_64,DAT_0002d574 + 0x2d434,uVar4);
      if (iVar3 == 0) goto LAB_0002d340;
      uVar4 = FUN_000225e4(uVar1);
      iVar3 = FUN_0002e1c8(auStack_64,DAT_0002d578 + 0x2d458,uVar4);
      if (iVar3 == 0) goto LAB_0002d340;
      uVar4 = FUN_000225ec(uVar1);
      iVar3 = FUN_0002e1c8(auStack_64,DAT_0002d57c + 0x2d47c,uVar4);
      if (iVar3 == 0) goto LAB_0002d340;
      uVar4 = FUN_000225f4(uVar1);
      iVar3 = FUN_0002e1c8(auStack_64,DAT_0002d580 + 0x2d4a0,uVar4);
      if (iVar3 == 0) goto LAB_0002d340;
      uVar4 = FUN_000225fc(uVar1);
      iVar3 = FUN_0002e1c8(auStack_64,DAT_0002d584 + 0x2d4c4,uVar4);
      if (iVar3 == 0) goto LAB_0002d340;
      uVar1 = FUN_00022604(uVar1);
      iVar3 = FUN_0002e1c8(auStack_64,DAT_0002d588 + 0x2d4e8,uVar1);
      if (iVar3 == 0) goto LAB_0002d340;
      iVar3 = dbus_message_iter_close_container(auStack_9c,auStack_64);
      if ((iVar3 != 0) && (iVar3 = FUN_00021920(param_2,param_1,iVar2), iVar3 != 0)) {
        dbus_message_unref(iVar2);
        uVar1 = 1;
        goto LAB_0002d528;
      }
    }
    dbus_message_unref(iVar2);
  }
  uVar1 = *(undefined4 *)(iVar6 + DAT_0002d558);
  dbus_set_error_const(param_4,DAT_0002d55c + 0x2d36c,uVar1,uVar1,piVar5,uVar1);
  uVar1 = 0;
LAB_0002d528:
  if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}



/* ===== FUN_0002d58c @ 0002d58c size=912 ===== */

void FUN_0002d58c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 auStack_9c [56];
  undefined1 auStack_64 [56];
  int local_2c;
  
  iVar6 = DAT_0002d91c + 0x2d5ac;
  piVar5 = *(int **)(iVar6 + DAT_0002d920);
  local_2c = *piVar5;
  iVar1 = FUN_000263e8(param_1,param_3,DAT_0002d924 + 0x2d5c4,0,&local_a0,param_4);
  if (iVar1 == 0) {
    dbus_set_error(param_4,DAT_0002d930 + 0x2d618,DAT_0002d92c + 0x2d614,DAT_0002d928 + 0x2d610);
    goto LAB_0002d618;
  }
  if (iVar1 == 1) {
    iVar2 = FUN_0002e07c(param_3,auStack_9c,auStack_64);
    if (iVar2 != 0) {
      *(int *)(DAT_0002d934 + 0x2d668) = *(int *)(DAT_0002d934 + 0x2d668) + 1;
      iVar3 = FUN_0002e1c8(auStack_64,DAT_0002d938 + 0x2d678);
      if (iVar3 != 0) {
        uVar4 = FUN_00020fe8(local_a0);
        iVar3 = FUN_0002e1c8(auStack_64,DAT_0002d944 + 0x2d6e0,uVar4);
        if (iVar3 != 0) {
          uVar4 = FUN_0002260c(local_a0);
          iVar3 = FUN_0002e1c8(auStack_64,DAT_0002d948 + 0x2d704,uVar4);
          if (iVar3 != 0) {
            uVar4 = FUN_000210f4(local_a0);
            iVar3 = FUN_0002e1c8(auStack_64,DAT_0002d94c + 0x2d728,uVar4);
            if (iVar3 != 0) {
              uVar4 = FUN_00022628(local_a0);
              iVar3 = FUN_0002e1c8(auStack_64,DAT_0002d950 + 0x2d74c,uVar4);
              if (iVar3 != 0) {
                uVar4 = FUN_0002152c(local_a0);
                iVar3 = FUN_0002e27c(auStack_64,DAT_0002d954 + 0x2d770,uVar4);
                if (iVar3 != 0) {
                  _dbus_connection_get_stats
                            (local_a0,&local_c8,&local_c4,&local_c0,&local_bc,&local_b8,&local_b4,
                             &local_b0,&local_ac,&local_a8,&local_a4);
                  iVar3 = FUN_0002e1c8(auStack_64,DAT_0002d958 + 0x2d7d8,local_c8);
                  if ((((((iVar3 != 0) &&
                         (iVar3 = FUN_0002e1c8(auStack_64,DAT_0002d95c + 0x2d7f4,local_c4),
                         iVar3 != 0)) &&
                        (iVar3 = FUN_0002e1c8(auStack_64,DAT_0002d960 + 0x2d810,local_c0),
                        iVar3 != 0)) &&
                       ((iVar3 = FUN_0002e1c8(auStack_64,DAT_0002d964 + 0x2d82c,local_bc),
                        iVar3 != 0 &&
                        (iVar3 = FUN_0002e1c8(auStack_64,DAT_0002d968 + 0x2d848,local_b8),
                        iVar3 != 0)))) &&
                      ((iVar3 = FUN_0002e1c8(auStack_64,DAT_0002d96c + 0x2d864,local_b4), iVar3 != 0
                       && ((iVar3 = FUN_0002e1c8(auStack_64,DAT_0002d970 + 0x2d880,local_b0),
                           iVar3 != 0 &&
                           (iVar3 = FUN_0002e1c8(auStack_64,DAT_0002d974 + 0x2d89c,local_ac),
                           iVar3 != 0)))))) &&
                     ((iVar3 = FUN_0002e1c8(auStack_64,DAT_0002d978 + 0x2d8b8,local_a8), iVar3 != 0
                      && (iVar3 = FUN_0002e1c8(auStack_64,DAT_0002d97c + 0x2d8d4,local_a4),
                         iVar3 != 0)))) {
                    iVar3 = dbus_message_iter_close_container(auStack_9c,auStack_64);
                    if ((iVar3 != 0) && (iVar3 = FUN_00021920(param_2,param_1,iVar2), iVar3 != 0)) {
                      dbus_message_unref(iVar2);
                      goto LAB_0002d618;
                    }
                    goto LAB_0002d68c;
                  }
                }
              }
            }
          }
        }
      }
      dbus_message_iter_abandon_container(auStack_9c,auStack_64);
    }
LAB_0002d68c:
    dbus_set_error_const(param_4,DAT_0002d940 + 0x2d6a4,*(undefined4 *)(iVar6 + DAT_0002d93c));
    if (iVar2 == 0) {
      iVar1 = 0;
      goto LAB_0002d618;
    }
    dbus_message_unref(iVar2);
  }
  iVar1 = 0;
LAB_0002d618:
  if (local_2c == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}



/* ===== FUN_0002d980 @ 0002d980 size=612 ===== */

void FUN_0002d980(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int local_124;
  int local_120;
  undefined1 auStack_11c [16];
  undefined1 auStack_10c [56];
  undefined1 auStack_d4 [56];
  undefined1 auStack_9c [56];
  undefined1 auStack_64 [56];
  int local_2c;
  
  iVar8 = 0;
  iVar9 = DAT_0002dbe4 + 0x2d9a0;
  piVar7 = *(int **)(iVar9 + DAT_0002dbe8);
  local_124 = 0;
  local_2c = *piVar7;
  uVar1 = FUN_00020bcc();
  FUN_0002168c(param_2);
  uVar2 = FUN_0001a650();
  iVar3 = FUN_00029d48(uVar1,&local_124,&local_120);
  uVar5 = 0;
  if (iVar3 != 0) {
    iVar3 = dbus_message_new_method_return(param_3);
    if (iVar3 != 0) {
      dbus_message_iter_init_append(iVar3,auStack_10c);
      iVar4 = dbus_message_iter_open_container(auStack_10c,0x61,DAT_0002dbec + 0x2da20,auStack_d4);
      if (iVar4 != 0) {
        iVar4 = DAT_0002dbf0 + 0x2da40;
        for (; iVar8 < local_120; iVar8 = iVar8 + 1) {
          if (**(char **)(local_124 + iVar8 * 4) == ':') {
            _dbus_string_init_const(auStack_11c);
            FUN_00029cbc(uVar1,auStack_11c);
            uVar5 = FUN_0002a8c4();
            iVar6 = dbus_message_iter_open_container(auStack_d4,0x65,0,auStack_9c);
            if (iVar6 != 0) {
              iVar6 = dbus_message_iter_append_basic(auStack_9c,0x73,local_124 + iVar8 * 4);
              if (iVar6 != 0) {
                iVar6 = dbus_message_iter_open_container(auStack_9c,0x61,iVar4,auStack_64);
                if (iVar6 != 0) {
                  iVar6 = FUN_0002cad0(uVar2,uVar5,auStack_64);
                  if (iVar6 == 0) {
                    dbus_message_iter_abandon_container();
                  }
                  else {
                    iVar6 = dbus_message_iter_close_container(auStack_9c,auStack_64);
                    if (iVar6 != 0) {
                      iVar6 = dbus_message_iter_close_container(auStack_d4,auStack_9c);
                      if (iVar6 != 0) goto LAB_0002dbd4;
                      goto LAB_0002dafc;
                    }
                  }
                }
              }
              dbus_message_iter_abandon_container(auStack_d4,auStack_9c);
            }
LAB_0002dafc:
            dbus_message_iter_abandon_container(auStack_10c,auStack_d4);
            goto LAB_0002db04;
          }
LAB_0002dbd4:
        }
        iVar8 = dbus_message_iter_close_container(auStack_10c,auStack_d4);
        if ((iVar8 != 0) && (iVar8 = FUN_00021920(param_2,param_1,iVar3), iVar8 != 0)) {
          dbus_message_unref(iVar3);
          dbus_free_string_array(local_124);
          uVar5 = 1;
          goto LAB_0002da8c;
        }
      }
LAB_0002db04:
      dbus_message_unref(iVar3);
    }
    dbus_free_string_array(local_124);
    dbus_set_error_const(param_4,DAT_0002dbf8 + 0x2db2c,*(undefined4 *)(iVar9 + DAT_0002dbf4));
    uVar5 = 0;
  }
LAB_0002da8c:
  if (local_2c == *piVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}



/* ===== FUN_0002dbfc @ 0002dbfc size=44 ===== */

bool FUN_0002dbfc(undefined4 param_1)

{
  int iVar1;
  
  while (iVar1 = dbus_connection_dispatch(param_1), iVar1 == 2) {
    FUN_0002ea80();
  }
  return iVar1 == 0;
}



/* ===== FUN_0002dc28 @ 0002dc28 size=28 ===== */

void FUN_0002dc28(undefined4 param_1)

{
  int iVar1;
  
  do {
    iVar1 = FUN_0002dbfc(param_1);
  } while (iVar1 != 0);
  return;
}



/* ===== FUN_0002dc44 @ 0002dc44 size=44 ===== */

void FUN_0002dc44(void)

{
  fputs((char *)(DAT_0002dc78 + 0x2dc64),
        (FILE *)**(undefined4 **)(DAT_0002dc70 + 0x2dc54 + DAT_0002dc74));
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_0002df34 @ 0002df34 size=64 ===== */

void FUN_0002df34(undefined4 *param_1,undefined4 param_2)

{
  if ((int)param_1[1] < 1) {
    return;
  }
  fprintf((FILE *)**(undefined4 **)(DAT_0002df74 + 0x2df48 + DAT_0002df78),
          (char *)(DAT_0002df7c + 0x2df68),param_2,*param_1);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_0002df80 @ 0002df80 size=68 ===== */

void FUN_0002df80(undefined4 *param_1)

{
  if ((int)param_1[1] < 1) {
    return;
  }
  fprintf((FILE *)**(undefined4 **)(DAT_0002dfc4 + 0x2df94 + DAT_0002dfc8),
          (char *)(DAT_0002dfcc + 0x2dfb8),DAT_0002dfd0 + 0x2dfb4,*param_1);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_0002dfd4 @ 0002dfd4 size=68 ===== */

void FUN_0002dfd4(undefined4 *param_1)

{
  if ((int)param_1[1] < 1) {
    return;
  }
  fprintf((FILE *)**(undefined4 **)(DAT_0002e018 + 0x2dfe8 + DAT_0002e01c),
          (char *)(DAT_0002e020 + 0x2e00c),DAT_0002e024 + 0x2e008,*param_1);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_0002e028 @ 0002e028 size=68 ===== */

void FUN_0002e028(undefined4 *param_1)

{
  if ((int)param_1[1] < 1) {
    return;
  }
  fprintf((FILE *)**(undefined4 **)(DAT_0002e06c + 0x2e03c + DAT_0002e070),
          (char *)(DAT_0002e074 + 0x2e060),DAT_0002e078 + 0x2e05c,*param_1);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_0002e07c @ 0002e07c size=84 ===== */

int FUN_0002e07c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = dbus_message_new_method_return();
  if (iVar1 != 0) {
    dbus_message_iter_init_append(iVar1,param_2);
    iVar2 = dbus_message_iter_open_container(param_2,0x61,DAT_0002e0d0 + 0x2e0b4,param_3);
    if (iVar2 == 0) {
      dbus_message_unref(iVar1);
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ===== FUN_0002e0d4 @ 0002e0d4 size=128 ===== */

undefined4
FUN_0002e0d4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_14;
  
  uVar3 = param_1;
  local_14 = param_3;
  iVar1 = dbus_message_iter_open_container(param_1,0x65,0,param_2,param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = dbus_message_iter_append_basic(param_2,0x73,&local_14);
    if ((iVar1 == 0) ||
       (iVar1 = dbus_message_iter_open_container(param_2,0x76,param_4,param_5,uVar3), iVar1 == 0)) {
      dbus_message_iter_abandon_container(param_1,param_2);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* ===== FUN_0002e154 @ 0002e154 size=68 ===== */

bool FUN_0002e154(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = dbus_message_iter_close_container(param_2,param_3);
  if (iVar1 == 0) {
    dbus_message_iter_abandon_container();
    bVar2 = false;
  }
  else {
    iVar1 = dbus_message_iter_close_container(param_1,param_2);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}



/* ===== <EXTERNAL>::dbus_message_iter_close_container @ 0002e198 size=4 ===== */

void dbus_message_iter_close_container(void)

{
  (*(code *)PTR_dbus_message_iter_close_container_00048be0)();
  return;
}



/* ===== FUN_0002e19c @ 0002e19c size=40 ===== */

void FUN_0002e19c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  dbus_message_iter_abandon_container(param_2,param_3);
  dbus_message_iter_abandon_container(param_1,param_2);
  return;
}



/* ===== <EXTERNAL>::dbus_message_iter_abandon_container @ 0002e1c4 size=4 ===== */

void dbus_message_iter_abandon_container(void)

{
  (*(code *)PTR_dbus_message_iter_abandon_container_00048cf8)();
  return;
}



/* ===== FUN_0002e1c8 @ 0002e1c8 size=168 ===== */

void FUN_0002e1c8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  undefined4 local_94 [2];
  undefined1 auStack_8c [56];
  undefined1 auStack_54 [56];
  int local_1c;
  
  piVar2 = *(int **)(DAT_0002e270 + 0x2e1e8 + DAT_0002e274);
  local_1c = *piVar2;
  local_94[0] = param_3;
  iVar1 = FUN_0002e0d4(param_1,auStack_8c,param_2,DAT_0002e278 + 0x2e210,auStack_54);
  bVar3 = false;
  if (iVar1 != 0) {
    iVar1 = dbus_message_iter_append_basic(auStack_54,0x75,local_94);
    if (iVar1 == 0) {
      FUN_0002e19c();
      bVar3 = false;
    }
    else {
      iVar1 = FUN_0002e154(param_1,auStack_8c,auStack_54);
      bVar3 = iVar1 != 0;
    }
  }
  if (local_1c == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}



/* ===== FUN_0002e27c @ 0002e27c size=168 ===== */

void FUN_0002e27c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  undefined4 local_94 [2];
  undefined1 auStack_8c [56];
  undefined1 auStack_54 [56];
  int local_1c;
  
  piVar2 = *(int **)(DAT_0002e324 + 0x2e29c + DAT_0002e328);
  local_1c = *piVar2;
  local_94[0] = param_3;
  iVar1 = FUN_0002e0d4(param_1,auStack_8c,param_2,DAT_0002e32c + 0x2e2c4,auStack_54);
  bVar3 = false;
  if (iVar1 != 0) {
    iVar1 = dbus_message_iter_append_basic(auStack_54,0x73,local_94);
    if (iVar1 == 0) {
      FUN_0002e19c();
      bVar3 = false;
    }
    else {
      iVar1 = FUN_0002e154(param_1,auStack_8c,auStack_54);
      bVar3 = iVar1 != 0;
    }
  }
  if (local_1c == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}



/* ===== FUN_0002e330 @ 0002e330 size=272 ===== */

void FUN_0002e330(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  undefined4 local_d4 [2];
  undefined1 auStack_cc [56];
  undefined1 auStack_94 [56];
  undefined1 auStack_5c [56];
  int local_24;
  
  piVar2 = *(int **)(DAT_0002e440 + 0x2e358 + DAT_0002e444);
  local_24 = *piVar2;
  local_d4[0] = param_3;
  iVar1 = FUN_0002e0d4(param_1,auStack_cc,param_2,DAT_0002e448 + 0x2e37c,auStack_94);
  bVar3 = false;
  if (iVar1 == 0) goto LAB_0002e3bc;
  iVar1 = dbus_message_iter_open_container(auStack_94,0x61,DAT_0002e44c + 0x2e39c,auStack_5c);
  if (iVar1 != 0) {
    iVar1 = dbus_message_iter_append_fixed_array(auStack_5c,0x79,local_d4,param_4);
    if (iVar1 == 0) {
      dbus_message_iter_abandon_container();
      FUN_0002e19c(param_1,auStack_cc,auStack_94);
      bVar3 = false;
      goto LAB_0002e3bc;
    }
    iVar1 = dbus_message_iter_close_container(auStack_94,auStack_5c);
    if (iVar1 != 0) {
      iVar1 = FUN_0002e154(param_1,auStack_cc,auStack_94);
      bVar3 = iVar1 != 0;
      goto LAB_0002e3bc;
    }
  }
  bVar3 = false;
  FUN_0002e19c(param_1,auStack_cc,auStack_94);
LAB_0002e3bc:
  if (local_24 == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}



/* ===== FUN_0002e450 @ 0002e450 size=184 ===== */

void FUN_0002e450(int param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_2 == (int *)0x0) {
    param_2 = (int *)_dbus_hash_table_lookup_int(*(undefined4 *)(param_1 + 4),param_3);
  }
  bVar1 = false;
  uVar6 = 0;
  iVar2 = _dbus_list_get_first_link(param_2);
  while (iVar2 != 0) {
    iVar4 = dbus_watch_get_enabled(*(undefined4 *)(iVar2 + 8));
    if ((iVar4 != 0) &&
       (iVar4 = _dbus_watch_get_oom_last_time(*(undefined4 *)(iVar2 + 8)), iVar4 == 0)) {
      bVar1 = true;
      uVar5 = dbus_watch_get_flags(*(undefined4 *)(iVar2 + 8));
      uVar6 = uVar6 | uVar5;
    }
    iVar2 = *(int *)(iVar2 + 4);
    if (iVar2 == *param_2) {
      iVar2 = 0;
    }
  }
  piVar3 = *(int **)(param_1 + 8);
  if (!bVar1) {
                    /* WARNING: Could not recover jumptable at 0x0002e504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar3 + 0x10))(piVar3,param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0002e4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0xc))(piVar3,param_3,uVar6);
  return;
}



/* ===== FUN_0002e508 @ 0002e508 size=216 ===== */

bool FUN_0002e508(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = dbus_timeout_get_interval(*param_3);
  iVar4 = iVar1 / 1000 + param_3[1];
  iVar2 = (iVar1 % 1000) * 1000 + param_3[2];
  iVar3 = iVar2;
  if (DAT_0002e5e0 < iVar2) {
    iVar4 = iVar4 + 1;
    iVar3 = iVar2 + -0xf4000;
  }
  iVar4 = iVar4 - param_1;
  if (DAT_0002e5e0 < iVar2) {
    iVar3 = iVar3 + -0x240;
  }
  if ((iVar4 < 0) || (iVar3 = iVar3 - param_2, iVar3 < DAT_0002e5e4 && iVar4 == 0)) {
    iVar4 = 0;
  }
  else {
    if (iVar3 < DAT_0002e5e4) {
      iVar4 = iVar4 + -1;
    }
    iVar2 = iVar3 / 1000;
    if (iVar3 < DAT_0002e5e4) {
      iVar2 = iVar2 + 1000;
    }
    if (iVar4 <= DAT_0002e5e8) {
      *param_4 = iVar4 * 1000 + iVar2;
      goto LAB_0002e58c;
    }
    iVar4 = 0x7fffffff;
  }
  *param_4 = iVar4;
LAB_0002e58c:
  if (iVar1 < *param_4) {
    param_3[1] = param_1;
    param_3[2] = param_2;
    *param_4 = iVar1;
  }
  return *param_4 == 0;
}



/* ===== FUN_0002e5ec @ 0002e5ec size=48 ===== */

void FUN_0002e5ec(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return;
  }
  while (iVar1 = _dbus_list_pop_first(param_1), iVar1 != 0) {
    _dbus_watch_unref();
  }
  dbus_free(param_1);
  return;
}



/* ===== FUN_0002e61c @ 0002e61c size=136 ===== */

undefined4 * FUN_0002e61c(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)dbus_malloc0(0x28);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = _dbus_hash_table_new(1,0,DAT_0002e6a4 + 0x2e644);
    puVar1[1] = uVar2;
    iVar3 = FUN_00032788(0);
    puVar1[2] = iVar3;
    if (puVar1[1] != 0) {
      if (iVar3 != 0) {
        *puVar1 = 1;
        return puVar1;
      }
      _dbus_hash_table_unref(puVar1[1]);
    }
    if ((undefined4 *)puVar1[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)puVar1[2])();
    }
    dbus_free(puVar1);
  }
  return (undefined4 *)0x0;
}



/* ===== FUN_0002e6a8 @ 0002e6a8 size=16 ===== */

void FUN_0002e6a8(int *param_1)

{
  *param_1 = *param_1 + 1;
  return;
}



/* ===== FUN_0002e6b8 @ 0002e6b8 size=96 ===== */

void FUN_0002e6b8(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (iVar1 + -1 != 0) {
    return;
  }
  while (param_1[8] != 0) {
    _dbus_list_pop_first(param_1 + 8);
    dbus_connection_unref();
  }
  _dbus_hash_table_unref(param_1[1]);
  (*(code *)**(undefined4 **)param_1[2])();
  dbus_free(param_1);
  return;
}



/* ===== FUN_0002e718 @ 0002e718 size=304 ===== */

undefined4 FUN_0002e718(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = _dbus_watch_get_pollable(param_2);
  piVar2 = (int *)_dbus_hash_table_lookup_int(*(undefined4 *)(param_1 + 4),uVar1);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)dbus_malloc0(4);
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    iVar3 = _dbus_hash_table_insert_int(*(undefined4 *)(param_1 + 4),uVar1,piVar2);
    if (iVar3 == 0) {
      dbus_free(piVar2);
      return 0;
    }
  }
  uVar5 = _dbus_watch_ref(param_2);
  iVar3 = _dbus_list_append(piVar2,uVar5);
  if (iVar3 != 0) {
    iVar3 = _dbus_list_length_is_one(piVar2);
    if (iVar3 == 0) {
      FUN_0002e450(param_1,piVar2,uVar1);
    }
    else {
      piVar2 = *(int **)(param_1 + 8);
      uVar5 = dbus_watch_get_flags(param_2);
      uVar4 = dbus_watch_get_enabled(param_2);
      iVar3 = (**(code **)(*piVar2 + 4))(piVar2,uVar1,uVar5,uVar4);
      if (iVar3 == 0) goto LAB_0002e838;
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    return 1;
  }
  _dbus_watch_unref(param_2);
  if (*piVar2 != 0) {
    return 0;
  }
LAB_0002e838:
  _dbus_hash_table_remove_int(*(undefined4 *)(param_1 + 4),uVar1);
  return 0;
}



/* ===== FUN_0002e848 @ 0002e848 size=36 ===== */

void FUN_0002e848(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = _dbus_watch_get_pollable(param_2);
  FUN_0002e450(param_1,0,uVar1);
  return;
}



/* ===== FUN_0002e86c @ 0002e86c size=204 ===== */

void FUN_0002e86c(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  uVar3 = _dbus_watch_get_pollable(param_2);
  piVar4 = (int *)_dbus_hash_table_lookup_int(*(undefined4 *)(param_1 + 4),uVar3);
  if (piVar4 != (int *)0x0) {
    iVar5 = _dbus_list_get_first_link();
    while (iVar5 != 0) {
      piVar1 = (int *)(iVar5 + 4);
      piVar2 = (int *)(iVar5 + 8);
      iVar5 = *piVar1;
      if (*piVar1 == *piVar4) {
        iVar5 = 0;
      }
      if (param_2 == *piVar2) {
        _dbus_list_remove_link(piVar4);
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
        _dbus_watch_unref(param_2);
        if (*piVar4 == 0) {
          _dbus_hash_table_remove_int(*(undefined4 *)(param_1 + 4),uVar3);
                    /* WARNING: Could not recover jumptable at 0x0002e92c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(int **)(param_1 + 8) + 8))(*(int **)(param_1 + 8),uVar3);
          return;
        }
        return;
      }
    }
  }
  _dbus_warn(DAT_0002e938 + 0x2e8ac,param_2);
  return;
}



/* ===== FUN_0002e93c @ 0002e93c size=116 ===== */

undefined4 FUN_0002e93c(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)dbus_malloc(0xc);
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    *puVar1 = param_2;
    _dbus_get_monotonic_time(puVar1 + 1,puVar1 + 2);
    iVar2 = _dbus_list_append(param_1 + 0xc,puVar1);
    if (iVar2 == 0) {
      dbus_free(puVar1);
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    }
  }
  return uVar3;
}



/* ===== FUN_0002e9b0 @ 0002e9b0 size=140 ===== */

void FUN_0002e9b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = _dbus_list_get_first_link(param_1 + 0xc);
  do {
    iVar2 = iVar1;
    if (iVar2 == 0) {
      _dbus_warn(DAT_0002ea3c + 0x2e9e4,param_2);
      return;
    }
    iVar1 = *(int *)(iVar2 + 4);
    piVar3 = *(int **)(iVar2 + 8);
    if (iVar1 == *(int *)(param_1 + 0xc)) {
      iVar1 = 0;
    }
  } while (*piVar3 != param_2);
  _dbus_list_remove_link(param_1 + 0xc,iVar2);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  dbus_free(piVar3);
  return;
}



/* ===== FUN_0002ea40 @ 0002ea40 size=40 ===== */

undefined4 FUN_0002ea40(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = _dbus_list_append(param_1 + 0x20);
  if (iVar1 == 0) {
    return 0;
  }
  dbus_connection_ref(param_2);
  return 1;
}



/* ===== FUN_0002ea68 @ 0002ea68 size=16 ===== */

void FUN_0002ea68(int param_1)

{
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
  return;
}



/* ===== FUN_0002ea78 @ 0002ea78 size=8 ===== */

undefined4 FUN_0002ea78(void)

{
  return 500;
}



/* ===== FUN_0002ea80 @ 0002ea80 size=20 ===== */

void FUN_0002ea80(void)

{
  (*(code *)PTR__dbus_sleep_milliseconds_00048e84)(500);
  return;
}



/* ===== FUN_0002ea88 @ 0002ea88 size=108 ===== */

undefined4 FUN_0002ea88(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    while (*(int *)(param_1 + 0x20) != 0) {
      uVar1 = _dbus_list_pop_first(param_1 + 0x20);
      while (iVar2 = dbus_connection_dispatch(uVar1), iVar2 != 1) {
        if (iVar2 == 2) {
          FUN_0002ea80();
        }
      }
      dbus_connection_unref(uVar1);
    }
    return 1;
  }
  return 0;
}



/* ===== FUN_0002eaf4 @ 0002eaf4 size=1180 ===== */

void FUN_0002eaf4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  byte bVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined4 uVar16;
  bool bVar17;
  undefined4 local_24c;
  undefined4 local_248;
  int local_244 [6];
  uint local_22c [128];
  int local_2c;
  
  piVar10 = *(int **)(DAT_0002ef90 + 0x2eb04 + DAT_0002ef94);
  local_2c = *piVar10;
  iVar11 = *(int *)(param_1 + 0x1c);
  iVar1 = _dbus_hash_table_get_n_entries(*(undefined4 *)(param_1 + 4));
  if ((iVar1 != 0) || (uVar13 = 0, *(int *)(param_1 + 0xc) != 0)) {
    if (*(int *)(param_1 + 0x18) < 1) {
      iVar1 = -1;
    }
    else {
      _dbus_get_monotonic_time(&local_24c,&local_248);
      iVar2 = _dbus_list_get_first_link(param_1 + 0xc);
      iVar3 = -1;
      while (iVar1 = iVar3, iVar2 != 0) {
        piVar4 = (int *)(iVar2 + 4);
        puVar14 = *(undefined4 **)(iVar2 + 8);
        iVar2 = *piVar4;
        if (*piVar4 == *(int *)(param_1 + 0xc)) {
          iVar2 = 0;
        }
        iVar5 = dbus_timeout_get_enabled(*puVar14);
        iVar3 = iVar1;
        if (iVar5 != 0) {
          iVar3 = _dbus_timeout_needs_restart(*puVar14);
          if (iVar3 != 0) {
            puVar14[1] = local_24c;
            puVar14[2] = local_248;
            _dbus_timeout_restarted(*puVar14);
          }
          FUN_0002e508(local_24c,local_248,puVar14,local_244);
          iVar3 = local_244[0];
          if ((-1 < iVar1) && (iVar3 = iVar1, local_244[0] <= iVar1)) {
            iVar3 = local_244[0];
          }
        }
      }
    }
    if ((param_2 == 0) || (*(int *)(param_1 + 0x20) != 0)) {
      iVar1 = 0;
    }
    else {
      if (iVar1 < 500) {
        bVar9 = 0;
      }
      else {
        bVar9 = *(byte *)(param_1 + 0x24) & 1;
      }
      if (bVar9 != 0) {
        iVar1 = 500;
      }
    }
    puVar15 = local_22c;
    iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8),puVar15,0x40,iVar1)
    ;
    bVar9 = *(byte *)(param_1 + 0x24);
    uVar13 = bVar9 & 1;
    if ((bVar9 & 1) != 0) {
      *(byte *)(param_1 + 0x24) = bVar9 & 0xfe;
      _dbus_hash_iter_init(*(undefined4 *)(param_1 + 4),local_244);
      while (iVar3 = _dbus_hash_iter_next(local_244), iVar3 != 0) {
        bVar17 = false;
        uVar8 = _dbus_hash_iter_get_int_key(local_244);
        piVar4 = (int *)_dbus_hash_iter_get_value(local_244);
        iVar3 = _dbus_list_get_first_link();
        do {
          if (iVar3 == 0) break;
          uVar16 = *(undefined4 *)(iVar3 + 8);
          iVar2 = _dbus_watch_get_oom_last_time(uVar16);
          if (iVar2 != 0) {
            bVar17 = true;
            _dbus_watch_set_oom_last_time(uVar16,0);
          }
          iVar3 = *(int *)(iVar3 + 4);
        } while (iVar3 != *piVar4);
        if (bVar17) {
          FUN_0002e450(param_1,piVar4,uVar8);
        }
      }
      uVar13 = 1;
    }
    iVar3 = *(int *)(param_1 + 0x10);
    if (0 < *(int *)(param_1 + 0x18)) {
      _dbus_get_monotonic_time(&local_24c,&local_248);
      iVar2 = _dbus_list_get_first_link(param_1 + 0xc);
      while (iVar2 != 0) {
        piVar4 = (int *)(iVar2 + 4);
        puVar14 = *(undefined4 **)(iVar2 + 8);
        iVar2 = *piVar4;
        if (*piVar4 == *(int *)(param_1 + 0xc)) {
          iVar2 = 0;
        }
        if ((*(int *)(param_1 + 0x10) != iVar3) || (*(int *)(param_1 + 0x1c) != iVar11))
        goto LAB_0002ee80;
        iVar5 = dbus_timeout_get_enabled(*puVar14);
        if ((iVar5 != 0) &&
           (iVar5 = FUN_0002e508(local_24c,local_248,puVar14,local_244), iVar5 != 0)) {
          uVar13 = 1;
          puVar14[1] = local_24c;
          puVar14[2] = local_248;
          dbus_timeout_handle(*puVar14);
        }
      }
    }
    if (0 < iVar1) {
      iVar2 = 0;
      do {
        if ((*(int *)(param_1 + 0x10) != iVar3) || (*(int *)(param_1 + 0x1c) != iVar11)) break;
        uVar12 = puVar15[1];
        if ((uVar12 & 0x10) != 0) {
          uVar12 = local_22c[iVar2 * 2];
          _dbus_warn(DAT_0002ef98 + 0x2ee58,uVar12);
          piVar4 = (int *)_dbus_hash_table_lookup_int(*(undefined4 *)(param_1 + 4),uVar12);
          if (piVar4 == (int *)0x0) goto LAB_0002ee74;
          iVar1 = _dbus_list_get_first_link();
          goto LAB_0002eeb4;
        }
        if ((uVar12 != 0) &&
           (piVar4 = (int *)_dbus_hash_table_lookup_int(*(undefined4 *)(param_1 + 4),*puVar15),
           piVar4 != (int *)0x0)) {
          iVar5 = _dbus_list_get_first_link();
          uVar6 = uVar13;
          uVar13 = 0;
          while (iVar5 != 0) {
            uVar8 = *(undefined4 *)(iVar5 + 8);
            iVar5 = *(int *)(iVar5 + 4);
            if (iVar5 == *piVar4) {
              iVar5 = 0;
            }
            iVar7 = dbus_watch_get_enabled(uVar8);
            if (iVar7 != 0) {
              iVar7 = dbus_watch_handle(uVar8,uVar12);
              if (iVar7 == 0) {
                uVar13 = 1;
                _dbus_watch_set_oom_last_time(uVar8,1);
                *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) | 1;
              }
              if ((*(int *)(param_1 + 0x10) != iVar3) || (*(int *)(param_1 + 0x1c) != iVar11)) {
                if (uVar13 == 0) {
                  uVar13 = 1;
                }
                else {
                  FUN_0002e450(param_1,0,local_22c[iVar2 * 2]);
                }
                goto LAB_0002ee80;
              }
              uVar6 = 1;
            }
          }
          bVar17 = uVar13 != 0;
          uVar13 = uVar6;
          if (bVar17) {
            FUN_0002e450(param_1,piVar4,*puVar15);
          }
        }
        iVar2 = iVar2 + 1;
        puVar15 = puVar15 + 2;
      } while (iVar2 != iVar1);
    }
  }
  goto LAB_0002ee80;
  while( true ) {
    _dbus_watch_invalidate(*(undefined4 *)(iVar1 + 8));
    iVar1 = *(int *)(iVar1 + 4);
    if (iVar1 == *piVar4) break;
LAB_0002eeb4:
    if (iVar1 == 0) break;
  }
LAB_0002ee74:
  _dbus_hash_table_remove_int(*(undefined4 *)(param_1 + 4),uVar12);
LAB_0002ee80:
  uVar6 = FUN_0002ea88(param_1);
  uVar12 = uVar6;
  if (uVar6 == 0) {
    uVar12 = uVar13;
  }
  if (uVar6 != 0) {
    uVar12 = 1;
  }
  if (local_2c != *piVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar12);
  }
  return;
}



/* ===== FUN_0002ef9c @ 0002ef9c size=72 ===== */

void FUN_0002ef9c(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[7];
  *param_1 = *param_1 + 1;
  param_1[7] = iVar1 + 1;
  while (param_1[7] != iVar1) {
    FUN_0002eaf4(param_1,1);
  }
  FUN_0002e6b8(param_1);
  return;
}



/* ===== FUN_0002efe4 @ 0002efe4 size=8 ===== */

undefined4 FUN_0002efe4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x70);
}



/* ===== FUN_0002efec @ 0002efec size=136 ===== */

undefined4 FUN_0002efec(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = DAT_0002f074;
  iVar2 = _dbus_strdup();
  if (iVar2 == 0) {
    dbus_set_error_const
              (param_3,DAT_0002f07c + 0x2f028,**(undefined4 **)(iVar1 + 0x2f008 + DAT_0002f078));
    uVar4 = 0;
  }
  else {
    iVar3 = _dbus_list_append(param_2,iVar2);
    if (iVar3 == 0) {
      dbus_free(iVar2);
      dbus_set_error_const
                (param_3,DAT_0002f080 + 0x2f06c,**(undefined4 **)(iVar1 + 0x2f008 + DAT_0002f078));
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  return uVar4;
}



/* ===== FUN_0002f084 @ 0002f084 size=504 ===== */

void FUN_0002f084(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  int *piVar7;
  byte *pbVar8;
  bool bVar9;
  undefined4 local_34 [4];
  int local_24;
  
  piVar7 = *(int **)(DAT_0002f27c + 0x2f094 + DAT_0002f280);
  local_24 = *piVar7;
  pbVar2 = (byte *)_dbus_strdup();
  iVar3 = 0;
  if (pbVar2 != (byte *)0x0) {
    iVar3 = _dbus_string_init(local_34);
    pbVar6 = pbVar2;
    if (iVar3 != 0) {
LAB_0002f1c0:
      if (*pbVar6 != 0) {
LAB_0002f11c:
        do {
          bVar1 = *pbVar6;
          if (bVar1 == 0) goto LAB_0002f1c0;
          if (bVar1 == 0x22 || bVar1 == 0x27) {
            pbVar4 = pbVar6 + 1;
            pbVar5 = pbVar6;
            if (bVar1 != 0x22) goto LAB_0002f254;
            goto LAB_0002f224;
          }
          if (bVar1 == 0x5c) {
            if (pbVar6[1] != 0) {
              if ((pbVar6[1] != 10) && (iVar3 = _dbus_string_append_byte(local_34), iVar3 == 0))
              goto LAB_0002f15c;
              pbVar6 = pbVar6 + 2;
              goto LAB_0002f11c;
            }
          }
          else {
            iVar3 = _dbus_string_append_byte(local_34);
            if (iVar3 == 0) goto LAB_0002f15c;
          }
          pbVar6 = pbVar6 + 1;
        } while( true );
      }
      iVar3 = _dbus_strdup(local_34[0]);
      if (iVar3 != 0) {
        dbus_free(pbVar2);
        _dbus_string_free(local_34);
        goto LAB_0002f0dc;
      }
      goto LAB_0002f15c;
    }
    dbus_free(pbVar2);
    iVar3 = 0;
  }
LAB_0002f0dc:
  if (local_24 == *piVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
LAB_0002f224:
  bVar1 = *pbVar4;
  if (bVar1 == 0) goto LAB_0002f234;
  pbVar8 = pbVar4 + 1;
  if (bVar1 == 0x22) goto LAB_0002f1a4;
  if (bVar1 == 0x5c) {
    bVar1 = pbVar4[1];
    if (bVar1 != 0x24) {
      if (bVar1 < 0x25) {
        if (bVar1 != 10) {
          bVar9 = bVar1 == 0x22;
LAB_0002f20c:
          if (!bVar9) {
            *pbVar5 = 0x5c;
            pbVar4 = pbVar8;
            goto LAB_0002f21c;
          }
        }
      }
      else if (bVar1 != 0x5c) {
        bVar9 = bVar1 == 0x60;
        goto LAB_0002f20c;
      }
    }
    *pbVar5 = bVar1;
    pbVar4 = pbVar4 + 2;
  }
  else {
    *pbVar5 = bVar1;
    pbVar4 = pbVar8;
  }
LAB_0002f21c:
  pbVar5 = pbVar5 + 1;
  goto LAB_0002f224;
LAB_0002f1a4:
  *pbVar5 = 0;
  goto LAB_0002f1a8;
LAB_0002f254:
  bVar1 = pbVar5[1];
  if (bVar1 == 0) goto LAB_0002f234;
  pbVar8 = pbVar5 + 2;
  if (bVar1 == 0x27) goto code_r0x0002f26c;
  *pbVar5 = bVar1;
  pbVar5 = pbVar5 + 1;
  goto LAB_0002f254;
LAB_0002f234:
  *pbVar5 = 0;
  goto LAB_0002f15c;
code_r0x0002f26c:
  *pbVar5 = 0;
LAB_0002f1a8:
  iVar3 = _dbus_string_append(local_34,pbVar6);
  pbVar6 = pbVar8;
  if (iVar3 == 0) goto LAB_0002f15c;
  goto LAB_0002f1c0;
LAB_0002f15c:
  iVar3 = 0;
  dbus_free(pbVar2);
  _dbus_string_free(local_34);
  goto LAB_0002f0dc;
}



/* ===== FUN_0002f284 @ 0002f284 size=1228 ===== */

void FUN_0002f284(byte *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int *piVar10;
  int iVar11;
  undefined4 *puVar12;
  byte bVar13;
  byte bVar14;
  undefined4 uVar15;
  int local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  int local_2c;
  
  iVar11 = DAT_0002f750 + 0x2f2a4;
  bVar13 = 0;
  piVar10 = *(int **)(iVar11 + DAT_0002f754);
  local_44 = 0;
  local_2c = *piVar10;
  if (param_1 != (byte *)0x0) {
    local_40 = 0;
    iVar3 = _dbus_string_init(&local_3c);
    if (iVar3 != 0) {
      bVar14 = 0;
LAB_0002f4a8:
      bVar1 = *param_1;
      if (bVar1 == 0) goto LAB_0002f378;
      if (bVar14 == 0x5c) {
        if ((bVar1 != 10) &&
           ((iVar3 = _dbus_string_append_byte(&local_3c,0x5c), iVar3 == 0 ||
            (iVar3 = _dbus_string_append_byte(&local_3c,*param_1), iVar3 == 0)))) {
          iVar3 = DAT_0002f770 + 0x2f4ec;
          iVar7 = **(int **)(iVar11 + DAT_0002f758);
          goto LAB_0002f4ec;
        }
LAB_0002f338:
        bVar14 = 0;
      }
      else {
        pbVar2 = param_1;
        if (bVar14 == 0x23) {
          do {
            param_1 = pbVar2;
            bVar1 = *param_1;
            pbVar2 = param_1 + 1;
          } while (bVar1 != 0 && bVar1 != 10);
          bVar14 = 0;
          if (bVar1 != 0) goto LAB_0002f338;
          goto LAB_0002f378;
        }
        if (bVar14 == 0) {
          if (bVar1 == 0x22) {
LAB_0002f584:
            iVar3 = _dbus_string_append_byte(&local_3c);
            if (iVar3 == 0) {
              iVar3 = DAT_0002f77c + 0x2f5a8;
              iVar7 = **(int **)(iVar11 + DAT_0002f758);
              goto LAB_0002f4ec;
            }
          }
          else {
            if (bVar1 < 0x23) {
              if (bVar1 == 10) {
                iVar3 = FUN_0002efec(local_3c,&local_40,param_4);
                if (iVar3 == 0) goto LAB_0002f4f4;
                _dbus_string_free(&local_3c);
                iVar3 = _dbus_string_init(&local_3c);
                if (iVar3 == 0) {
                  iVar3 = DAT_0002f774 + 0x2f544;
                  uVar15 = **(undefined4 **)(iVar11 + DAT_0002f758);
LAB_0002f544:
                  dbus_set_error_const(param_4,iVar3,uVar15);
                  goto LAB_0002f54c;
                }
              }
              else {
                if ((bVar1 != 0x20) && (bVar1 != 9)) goto LAB_0002f5ac;
                if (local_38 < 1) goto LAB_0002f494;
                iVar3 = FUN_0002efec(local_3c,&local_40,param_4);
                if (iVar3 == 0) goto LAB_0002f4f4;
                _dbus_string_free(&local_3c);
                iVar3 = _dbus_string_init(&local_3c);
                if (iVar3 == 0) {
                  iVar3 = DAT_0002f76c + 0x2f474;
                  uVar15 = **(undefined4 **)(iVar11 + DAT_0002f758);
                  goto LAB_0002f544;
                }
              }
              goto LAB_0002f494;
            }
            if (bVar1 == 0x27) goto LAB_0002f584;
            if ((bVar1 != 0x5c) && (bVar1 != 0x23)) {
LAB_0002f5ac:
              iVar3 = _dbus_string_append_byte(&local_3c);
              if (iVar3 != 0) goto LAB_0002f494;
              iVar3 = DAT_0002f780 + 0x2f5d0;
              iVar7 = **(int **)(iVar11 + DAT_0002f758);
              goto LAB_0002f4ec;
            }
          }
          bVar14 = *param_1;
        }
        else {
          if (bVar14 == bVar1) {
            bVar9 = (bool)(bVar13 ^ 1);
            if (bVar14 != 0x22) {
              bVar9 = true;
            }
            if (bVar9) {
              bVar14 = 0;
            }
            else {
              bVar14 = 0x22;
            }
          }
          iVar3 = _dbus_string_append_byte(&local_3c);
          if (iVar3 == 0) {
            iVar3 = DAT_0002f768 + 0x2f3fc;
            iVar7 = **(int **)(iVar11 + DAT_0002f758);
            goto LAB_0002f4ec;
          }
        }
      }
LAB_0002f494:
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      if (bVar1 == 0x5c) {
        bVar13 = bVar13 ^ 1;
      }
      else {
        bVar13 = 0;
      }
      goto LAB_0002f4a8;
    }
    dbus_set_error_const(param_4,DAT_0002f75c + 0x2f304,**(undefined4 **)(iVar11 + DAT_0002f758));
    uVar15 = 0;
    goto LAB_0002f308;
  }
  goto LAB_0002f2c0;
LAB_0002f6dc:
  iVar8 = *(int *)(iVar8 + 4);
  iVar7 = iVar7 + 1;
  if (iVar8 == local_44) {
    iVar8 = 0;
  }
  goto LAB_0002f6f0;
LAB_0002f378:
  iVar3 = FUN_0002efec(local_3c,&local_40,param_4);
  if (iVar3 == 0) {
LAB_0002f4f4:
    _dbus_string_free(&local_3c);
LAB_0002f54c:
    uVar15 = 0;
    if (local_40 == 0) goto LAB_0002f308;
    uVar15 = *(undefined4 *)(iVar11 + DAT_0002f778);
    piVar4 = &local_40;
    _dbus_list_foreach(piVar4,uVar15,0,uVar15,uVar15);
  }
  else {
    if (bVar14 != 0) {
      iVar7 = DAT_0002f760 + 0x2f3a8;
      iVar3 = DAT_0002f764 + 0x2f3ac;
LAB_0002f4ec:
      dbus_set_error_const(param_4,iVar3,iVar7);
      goto LAB_0002f4f4;
    }
    if (local_40 == 0) {
      iVar7 = DAT_0002f784 + 0x2f5f0;
      iVar3 = DAT_0002f788 + 0x2f5f4;
      goto LAB_0002f4ec;
    }
    _dbus_string_free(&local_3c);
    local_44 = local_40;
    if (local_40 == 0) goto LAB_0002f2c0;
    piVar4 = &local_44;
    iVar3 = _dbus_list_get_length(piVar4);
    puVar5 = (undefined4 *)dbus_malloc((iVar3 + 1) * 4);
    if (puVar5 != (undefined4 *)0x0) {
      iVar7 = 0;
      iVar8 = local_44;
LAB_0002f6f0:
      iVar6 = DAT_0002f778;
      if (iVar8 != 0) {
        iVar6 = FUN_0002f084(*(undefined4 *)(iVar8 + 8));
        puVar5[iVar7] = iVar6;
        if (iVar6 != 0) goto LAB_0002f6dc;
        for (puVar12 = puVar5; puVar5 + iVar7 != puVar12; puVar12 = puVar12 + 1) {
          dbus_free(*puVar12);
        }
        dbus_free(puVar5);
        iVar3 = DAT_0002f790 + 0x2f6cc;
        uVar15 = **(undefined4 **)(iVar11 + DAT_0002f758);
        goto LAB_0002f650;
      }
      puVar5[iVar3] = 0;
      _dbus_list_foreach(piVar4,*(undefined4 *)(iVar11 + iVar6));
      _dbus_list_clear(piVar4);
      if (param_2 != (int *)0x0) {
        *param_2 = iVar3;
      }
      if (param_3 == (int *)0x0) {
        dbus_free_string_array(puVar5);
      }
      else {
        *param_3 = (int)puVar5;
      }
      uVar15 = 1;
      goto LAB_0002f308;
    }
    iVar3 = DAT_0002f78c + 0x2f650;
    uVar15 = **(undefined4 **)(iVar11 + DAT_0002f758);
LAB_0002f650:
    dbus_set_error_const(param_4,iVar3,uVar15);
    uVar15 = *(undefined4 *)(iVar11 + DAT_0002f778);
    _dbus_list_foreach(piVar4,uVar15,0,uVar15,uVar15);
  }
  _dbus_list_clear(piVar4);
LAB_0002f2c0:
  uVar15 = 0;
LAB_0002f308:
  if (local_2c == *piVar10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar15);
}



/* ===== FUN_0002f93c @ 0002f93c size=364 ===== */

void FUN_0002f93c(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  __uid_t _Var5;
  __uid_t _Var6;
  undefined4 uVar7;
  char *__file;
  int *piVar8;
  stat64 sStack_90;
  int local_24;
  
  __file = (char *)*param_2;
  piVar8 = *(int **)(DAT_0002faa8 + 0x2f95c + DAT_0002faac);
  local_24 = *piVar8;
  if ((param_3 == 0) || (iVar1 = _dbus_ensure_directory(param_2,param_4), uVar7 = 0, iVar1 != 0)) {
    iVar1 = stat64(__file,&sStack_90);
    _Var6 = sStack_90.st_uid;
    if (iVar1 == 0) {
      uVar7 = 0;
      if ((sStack_90.st_mode & 0xf000) == 0x4000) {
        _Var5 = geteuid();
        if (_Var6 == _Var5) {
          if ((sStack_90.st_mode & 0x12) == 0) {
            uVar7 = 1;
          }
          else {
            dbus_set_error(param_4,DAT_0002fac8 + 0x2fa9c,DAT_0002fac4 + 0x2fa98,param_1,__file,
                           sStack_90.st_mode);
          }
        }
        else {
          _Var6 = geteuid();
          dbus_set_error(param_4,DAT_0002fac0 + 0x2fa64,DAT_0002fabc + 0x2fa60,param_1,__file,
                         sStack_90.st_uid,_Var6);
        }
      }
      else {
        dbus_set_error(param_4,DAT_0002fab8 + 0x2fa24,DAT_0002fab4 + 0x2fa20,param_1,__file);
      }
    }
    else {
      piVar2 = __errno_location();
      iVar1 = *piVar2;
      uVar3 = _dbus_error_from_errno(iVar1);
      uVar7 = 0;
      uVar4 = _dbus_strerror(iVar1);
      dbus_set_error(param_4,uVar3,DAT_0002fab0 + 0x2f9c8,param_1,__file,uVar4);
    }
  }
  if (local_24 == *piVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}



/* ===== FUN_0002facc @ 0002facc size=684 ===== */

void FUN_0002facc(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FILE *__stream;
  int iVar5;
  char *__file;
  int *piVar6;
  undefined1 auStack_3c [4];
  int local_38;
  int local_2c;
  
  iVar5 = DAT_0002fd78 + 0x2faec;
  piVar6 = *(int **)(iVar5 + DAT_0002fd7c);
  local_2c = *piVar6;
  if (param_1 == (undefined4 *)0x0) {
LAB_0002fc54:
    if ((param_2 == 0) || (iVar1 = _dbus_pipe_is_valid(param_2), iVar1 == 0)) {
LAB_0002fc5c:
      uVar3 = 1;
      goto LAB_0002fc60;
    }
    iVar1 = _dbus_string_init(auStack_3c);
    if (iVar1 == 0) {
      iVar1 = DAT_0002fd9c + 0x2fcac;
      uVar3 = **(undefined4 **)(iVar5 + DAT_0002fd98);
    }
    else {
      iVar1 = _dbus_string_append_int(auStack_3c,param_3);
      if ((iVar1 != 0) &&
         (iVar1 = _dbus_string_append(auStack_3c,DAT_0002fda4 + 0x2fcfc), iVar1 != 0)) {
        iVar5 = _dbus_pipe_write(param_2,auStack_3c,0,local_38,param_4);
        if (local_38 != iVar5) {
          if ((param_4 != 0) && (iVar5 = dbus_error_is_set(param_4), iVar5 == 0)) {
            dbus_set_error(param_4,DAT_0002fdac + 0x2fd58,DAT_0002fda8 + 0x2fd54);
          }
          _dbus_string_free(auStack_3c);
          goto LAB_0002fbb0;
        }
        _dbus_string_free(auStack_3c);
        goto LAB_0002fc5c;
      }
      _dbus_string_free(auStack_3c);
      iVar1 = DAT_0002fda0 + 0x2fce8;
      uVar3 = **(undefined4 **)(iVar5 + DAT_0002fd98);
    }
    dbus_set_error_const(param_4,iVar1,uVar3);
  }
  else {
    __file = (char *)*param_1;
    iVar1 = open64(__file,0xc1,0x1a4);
    if (iVar1 < 0) {
      piVar2 = __errno_location();
      uVar3 = _dbus_error_from_errno(*piVar2);
      uVar4 = _dbus_strerror(*piVar2);
      iVar5 = DAT_0002fd80 + 0x2fb4c;
LAB_0002fb48:
      dbus_set_error(param_4,uVar3,iVar5,__file,uVar4);
    }
    else {
      __stream = fdopen(iVar1,(char *)(DAT_0002fd84 + 0x2fb64));
      if (__stream == (FILE *)0x0) {
        piVar2 = __errno_location();
        uVar3 = _dbus_error_from_errno(*piVar2);
        uVar4 = _dbus_strerror(*piVar2);
        dbus_set_error(param_4,uVar3,DAT_0002fd88 + 0x2fba0,iVar1,uVar4);
        _dbus_close(iVar1,0);
      }
      else {
        iVar1 = fprintf(__stream,(char *)(DAT_0002fd8c + 0x2fbc8),param_3);
        if (-1 < iVar1) {
          iVar1 = fclose(__stream);
          if (iVar1 != -1) goto LAB_0002fc54;
          piVar2 = __errno_location();
          uVar3 = _dbus_error_from_errno(*piVar2);
          uVar4 = _dbus_strerror(*piVar2);
          iVar5 = DAT_0002fd94 + 0x2fc54;
          goto LAB_0002fb48;
        }
        piVar2 = __errno_location();
        uVar3 = _dbus_error_from_errno(*piVar2);
        uVar4 = _dbus_strerror(*piVar2);
        dbus_set_error(param_4,uVar3,DAT_0002fd90 + 0x2fc04,__file,uVar4);
        fclose(__stream);
      }
    }
  }
LAB_0002fbb0:
  uVar3 = 0;
LAB_0002fc60:
  if (local_2c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_0002fdb0 @ 0002fdb0 size=384 ===== */

void FUN_0002fdb0(char *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  __pid_t __pid;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  char *local_28;
  int local_24;
  undefined4 uStack_20;
  
  piVar6 = *(int **)(DAT_0002ff30 + 0x2fdd0 + DAT_0002ff34);
  local_24 = *piVar6;
  local_28 = param_1;
  uStack_20 = param_3;
  iVar2 = chdir((char *)(DAT_0002ff38 + 0x2fde0));
  if (iVar2 < 0) {
    dbus_set_error(param_3,DAT_0002ff40 + 0x2fe08,DAT_0002ff3c + 0x2fe04);
  }
  else {
    __pid = fork();
    if (__pid != -1) {
      if (__pid == 0) {
        local_28 = (char *)_dbus_getenv(DAT_0002ff48 + 0x2feb0);
        if (local_28 == (char *)0x0) {
          uVar5 = 7;
        }
        else if (*local_28 == '\0') {
          uVar5 = 7;
        }
        else {
          uVar5 = 3;
        }
        iVar2 = _dbus_ensure_standard_fds(uVar5,&local_28);
        pcVar1 = local_28;
        if (iVar2 == 0) {
          piVar6 = __errno_location();
          uVar5 = _dbus_strerror(*piVar6);
          _dbus_warn(DAT_0002ff4c + 0x2ff04,pcVar1,uVar5);
          iVar2 = 1;
          goto LAB_0002ff08;
        }
        if (param_4 == 0) {
          umask(0x12);
        }
        uVar5 = 1;
        setsid();
      }
      else {
        iVar2 = FUN_0002facc(param_1,param_2,__pid,param_3);
        if (iVar2 != 0) {
          iVar2 = 0;
LAB_0002ff08:
                    /* WARNING: Subroutine does not return */
          _exit(iVar2);
        }
        kill(__pid,0xf);
        uVar5 = 0;
      }
      goto LAB_0002fe0c;
    }
    piVar3 = __errno_location();
    uVar5 = _dbus_error_from_errno(*piVar3);
    uVar4 = _dbus_strerror(*piVar3);
    dbus_set_error(param_3,uVar5,DAT_0002ff44 + 0x2fea0,uVar4);
  }
  uVar5 = 0;
LAB_0002fe0c:
  if (local_24 == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}



/* ===== FUN_0002ff50 @ 0002ff50 size=92 ===== */

void FUN_0002ff50(undefined4 param_1)

{
  int *piVar1;
  undefined1 auStack_24 [16];
  int local_14;
  
  piVar1 = *(int **)(DAT_0002ffac + 0x2ff64 + DAT_0002ffb0);
  local_14 = *piVar1;
  _dbus_string_init_const(auStack_24,param_1);
  FUN_00031204(auStack_24,0);
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_0002ffb4 @ 0002ffb4 size=344 ===== */

void FUN_0002ffb4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  __uid_t local_34;
  __gid_t local_30;
  undefined1 auStack_2c [16];
  int local_1c;
  
  piVar6 = *(int **)(DAT_0003010c + 0x2ffc4 + DAT_00030110);
  local_1c = *piVar6;
  _dbus_string_init_const(auStack_2c,param_1);
  iVar1 = FUN_00031204(auStack_2c,&local_34,&local_30);
  if (iVar1 == 0) {
    dbus_set_error(param_2,DAT_00030118 + 0x30020,DAT_00030114 + 0x3001c,param_1);
    uVar3 = 0;
  }
  else {
    iVar1 = setgroups(0,(__gid_t *)0x0);
    if (iVar1 < 0) {
      piVar2 = __errno_location();
      uVar3 = _dbus_strerror(*piVar2);
      _dbus_warn(DAT_0003011c + 0x30068,uVar3);
    }
    iVar1 = setgid(local_30);
    if (iVar1 < 0) {
      piVar2 = __errno_location();
      uVar4 = _dbus_error_from_errno(*piVar2);
      uVar5 = _dbus_strerror(*piVar2);
      iVar1 = DAT_00030120 + 0x300ac;
    }
    else {
      iVar1 = setuid(local_34);
      if (-1 < iVar1) {
        uVar3 = 1;
        goto LAB_00030020;
      }
      piVar2 = __errno_location();
      uVar4 = _dbus_error_from_errno(*piVar2);
      uVar5 = _dbus_strerror(*piVar2);
      iVar1 = DAT_00030124 + 0x30104;
      local_30 = local_34;
    }
    uVar3 = 0;
    dbus_set_error(param_2,uVar4,iVar1,local_30,uVar5);
  }
LAB_00030020:
  if (local_1c == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== FUN_00030128 @ 00030128 size=156 ===== */

/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */

rlimit64 * FUN_00030128(undefined4 param_1)

{
  rlimit64 *__rlimits;
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  rlimit64 *prVar5;
  
  iVar1 = DAT_000301c4;
  __rlimits = (rlimit64 *)dbus_malloc0(0x10);
  prVar5 = __rlimits;
  if (__rlimits == (rlimit64 *)0x0) {
    dbus_set_error_const
              (param_1,DAT_000301cc + 0x30160,**(undefined4 **)(iVar1 + 0x30144 + DAT_000301c8));
  }
  else {
    iVar1 = getrlimit64(RLIMIT_NOFILE,__rlimits);
    if (iVar1 < 0) {
      piVar2 = __errno_location();
      uVar3 = _dbus_error_from_errno(*piVar2);
      uVar4 = _dbus_strerror(*piVar2);
      dbus_set_error(param_1,uVar3,DAT_000301d0 + 0x301b4,uVar4);
      prVar5 = (rlimit64 *)0x0;
      dbus_free(__rlimits);
    }
  }
  return prVar5;
}



/* ===== FUN_000301d4 @ 000301d4 size=400 ===== */

/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */

void FUN_000301d4(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  __uid_t _Var9;
  int *piVar10;
  bool bVar11;
  rlimit64 local_38;
  int local_24;
  
  piVar10 = *(int **)(DAT_00030364 + 0x301e4 + DAT_00030368);
  local_24 = *piVar10;
  iVar5 = getrlimit64(RLIMIT_NOFILE,&local_38);
  uVar4 = local_38.rlim_max._4_4_;
  uVar3 = (uint)local_38.rlim_max;
  uVar2 = local_38.rlim_cur._4_4_;
  uVar1 = (uint)local_38.rlim_cur;
  if (iVar5 < 0) {
    piVar6 = __errno_location();
    uVar7 = _dbus_error_from_errno(*piVar6);
    uVar8 = _dbus_strerror(*piVar6);
    dbus_set_error(param_1,uVar7,DAT_0003036c + 0x30244,uVar8);
  }
  else {
    _Var9 = getuid();
    if (_Var9 == 0) {
      if (local_38.rlim_cur._4_4_ == 0 && (uint)local_38.rlim_cur < 0x10000) {
        local_38.rlim_cur._0_4_ = 0x10000;
        local_38.rlim_cur._4_4_ = 0;
      }
      if (local_38.rlim_max._4_4_ != 0xffffffff || (uint)local_38.rlim_max != 0xffffffff) {
        bVar11 = local_38.rlim_cur._4_4_ <= local_38.rlim_max._4_4_;
        if (local_38.rlim_max._4_4_ == local_38.rlim_cur._4_4_) {
          bVar11 = (uint)local_38.rlim_cur <= (uint)local_38.rlim_max;
        }
        if (!bVar11) {
          local_38.rlim_max._0_4_ = (uint)local_38.rlim_cur;
          local_38.rlim_max._4_4_ = local_38.rlim_cur._4_4_;
        }
      }
    }
    if (local_38.rlim_max._4_4_ == 0xffffffff && (uint)local_38.rlim_max == 0xffffffff) {
LAB_000302d0:
      local_38.rlim_cur._0_4_ = (uint)local_38.rlim_max;
      local_38.rlim_cur._4_4_ = local_38.rlim_max._4_4_;
    }
    else {
      bVar11 = local_38.rlim_cur._4_4_ <= local_38.rlim_max._4_4_;
      if (local_38.rlim_max._4_4_ == local_38.rlim_cur._4_4_) {
        bVar11 = (uint)local_38.rlim_cur <= (uint)local_38.rlim_max;
      }
      if (bVar11 && (local_38.rlim_max._4_4_ != local_38.rlim_cur._4_4_ ||
                    (uint)local_38.rlim_max != (uint)local_38.rlim_cur)) goto LAB_000302d0;
    }
    if (((local_38.rlim_max._4_4_ == uVar4 && (uint)local_38.rlim_max == uVar3) &&
        (local_38.rlim_cur._4_4_ == uVar2 && (uint)local_38.rlim_cur == uVar1)) ||
       (iVar5 = setrlimit64(RLIMIT_NOFILE,&local_38), -1 < iVar5)) {
      uVar7 = 1;
      goto LAB_000302f4;
    }
    piVar6 = __errno_location();
    uVar7 = _dbus_error_from_errno(*piVar6);
    uVar1 = (uint)local_38.rlim_cur;
    uVar8 = _dbus_strerror(*piVar6);
    dbus_set_error(param_1,uVar7,DAT_00030370 + 0x30354,uVar1,uVar8);
  }
  uVar7 = 0;
LAB_000302f4:
  if (local_24 != *piVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}



/* ===== FUN_00030374 @ 00030374 size=96 ===== */

/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */

undefined4 FUN_00030374(rlimit64 *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = setrlimit64(RLIMIT_NOFILE,param_1);
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    uVar3 = _dbus_error_from_errno(*piVar2);
    uVar4 = _dbus_strerror(*piVar2);
    dbus_set_error(param_2,uVar3,DAT_000303d4 + 0x303c4,uVar4);
    return 0;
  }
  return 1;
}



/* ===== <EXTERNAL>::dbus_free @ 000303d8 size=4 ===== */

void dbus_free(void)

{
  (*(code *)PTR_dbus_free_00048f5c)();
  return;
}



/* ===== FUN_000303dc @ 000303dc size=116 ===== */

void FUN_000303dc(int param_1,_union_1051 param_2)

{
  ulong *puVar1;
  ulong local_38;
  ulong uStack_34;
  _union_1051 local_30;
  ulong local_2c;
  ulong local_24;
  ulong uStack_20;
  ulong local_1c;
  
  puVar1 = *(ulong **)(DAT_00030450 + 0x303ec + DAT_00030454);
  local_1c = *puVar1;
  sigemptyset((sigset_t *)&local_38);
  local_24 = local_38;
  uStack_20 = uStack_34;
  local_2c = 0;
  local_30 = param_2;
  sigaction(param_1,(sigaction *)&local_30,(sigaction *)0x0);
  if (local_1c != *puVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00030470 @ 00030470 size=8 ===== */

undefined4 FUN_00030470(void)

{
  return 0;
}



/* ===== FUN_00030478 @ 00030478 size=36 ===== */

bool FUN_00030478(undefined4 *param_1)

{
  bool bVar1;
  
  if ((int)param_1[1] < 1) {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)*param_1 == '/';
  }
  return bVar1;
}



/* ===== FUN_0003049c @ 0003049c size=216 ===== */

void FUN_0003049c(undefined4 *param_1,__mode_t *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  stat64 sStack_88;
  int local_1c;
  
  piVar5 = *(int **)(DAT_00030574 + 0x304b0 + DAT_00030578);
  local_1c = *piVar5;
  iVar1 = stat64((char *)*param_1,&sStack_88);
  if (-1 < iVar1) {
    *param_2 = sStack_88.st_mode;
    param_2[1] = sStack_88.st_nlink;
    param_2[2] = sStack_88.st_uid;
    param_2[3] = sStack_88.st_gid;
    param_2[4] = (__mode_t)sStack_88.st_size;
    param_2[5] = sStack_88.st_atim.tv_sec;
    param_2[6] = sStack_88.st_mtim.tv_sec;
    param_2[7] = sStack_88.st_ctim.tv_sec;
  }
  else {
    piVar2 = __errno_location();
    uVar3 = _dbus_error_from_errno(*piVar2);
    uVar4 = _dbus_strerror(*piVar2);
    dbus_set_error(param_3,uVar3,DAT_0003057c + 0x3050c,uVar4);
  }
  if (local_1c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(-1 < iVar1);
  }
  return;
}



/* ===== FUN_00030580 @ 00030580 size=156 ===== */

undefined4 * FUN_00030580(undefined4 *param_1,undefined4 param_2)

{
  DIR *__dirp;
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *__name;
  undefined4 uVar5;
  
  __name = (char *)*param_1;
  uVar5 = param_2;
  __dirp = opendir(__name);
  if (__dirp == (DIR *)0x0) {
    piVar1 = __errno_location();
    uVar2 = _dbus_error_from_errno(*piVar1);
    uVar3 = _dbus_strerror(*piVar1);
    dbus_set_error(param_2,uVar2,DAT_0003061c + 0x305d0,__name,uVar3,uVar5);
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)dbus_malloc0(4);
    if (puVar4 == (undefined4 *)0x0) {
      closedir(__dirp);
      dbus_set_error(param_2,DAT_00030624 + 0x30618,DAT_00030620 + 0x30614);
    }
    else {
      *puVar4 = __dirp;
    }
  }
  return puVar4;
}



/* ===== FUN_00030628 @ 00030628 size=216 ===== */

bool FUN_00030628(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  dirent64 *pdVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  piVar1 = __errno_location();
  do {
    *piVar1 = 0;
    pdVar2 = readdir64((DIR *)*param_1);
    if (pdVar2 == (dirent64 *)0x0) {
      iVar5 = *piVar1;
      if (iVar5 != 0) {
        uVar3 = _dbus_error_from_errno(iVar5);
        uVar4 = _dbus_strerror(iVar5);
        dbus_set_error(param_3,uVar3,DAT_00030700 + 0x30694,uVar4);
        return false;
      }
      return false;
    }
  } while ((pdVar2->d_name[0] == '.') &&
          ((pdVar2->d_name[1] == '\0' || (*(short *)(pdVar2->d_name + 1) == 0x2e))));
  _dbus_string_set_length(param_2,0);
  iVar5 = _dbus_string_append(param_2,pdVar2->d_name);
  if (iVar5 == 0) {
    dbus_set_error(param_3,DAT_00030708 + 0x306fc,DAT_00030704 + 0x306f8);
  }
  return iVar5 != 0;
}



/* ===== FUN_0003070c @ 0003070c size=28 ===== */

void FUN_0003070c(undefined4 *param_1)

{
  closedir((DIR *)*param_1);
  dbus_free(param_1);
  return;
}



/* ===== FUN_00030728 @ 00030728 size=412 ===== */

void FUN_00030728(int param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  size_t __buflen;
  char *__buffer;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  char *__name;
  bool bVar6;
  group *local_40;
  group local_3c;
  int local_2c;
  
  uVar1 = DAT_0002f924;
  __name = (char *)0x0;
  if (param_2 != (undefined4 *)0x0) {
    __name = (char *)*param_2;
  }
  piVar5 = *(int **)(DAT_0002f920 + 0x2f7bc + DAT_0002f928);
  local_2c = *piVar5;
  __buflen = sysconf(0x45);
  if ((int)__buflen < 1) {
    __buflen = 0x400;
  }
  do {
    __buffer = (char *)dbus_malloc(__buflen);
    if (__buffer == (char *)0x0) {
      dbus_set_error(param_3,DAT_0002f92c + 0x2f80c,0);
LAB_0002f80c:
      bVar6 = false;
LAB_0002f8c0:
      if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(bVar6);
      }
      return;
    }
    local_40 = (group *)0x0;
    if (__name == (char *)0x0) {
      iVar2 = getgrgid_r(0xffffffff,&local_3c,__buffer,__buflen,&local_40);
    }
    else {
      iVar2 = getgrnam_r(__name,&local_3c,__buffer,__buflen,&local_40);
    }
    bVar6 = __buflen == uVar1;
    if (__buflen <= uVar1) {
      bVar6 = iVar2 == 0x22;
    }
    if (!bVar6) {
      if ((iVar2 == 0) && (local_40 == &local_3c)) {
        *(__gid_t *)(param_1 + 4) = local_3c.gr_gid;
        iVar2 = _dbus_strdup(local_3c.gr_name);
        *(int *)(param_1 + 8) = iVar2;
        bVar6 = iVar2 != 0;
        if (!bVar6) {
          dbus_set_error(param_3,DAT_0002f930 + 0x2f8b8,0);
        }
        dbus_free(__buffer);
        goto LAB_0002f8c0;
      }
      piVar3 = __errno_location();
      uVar4 = _dbus_error_from_errno(*piVar3);
      if (__name == (char *)0x0) {
        __name = (char *)(DAT_0002f934 + 0x2f8fc);
      }
      dbus_set_error(param_3,uVar4,DAT_0002f938 + 0x2f90c,__name);
      dbus_free(__buffer);
      goto LAB_0002f80c;
    }
    __buflen = __buflen << 1;
    dbus_free(__buffer);
  } while( true );
}



/* ===== FUN_00030738 @ 00030738 size=12 ===== */

/* WARNING: Removing unreachable block (ram,0x0002f7c4) */
/* WARNING: Removing unreachable block (ram,0x0002f838) */

void FUN_00030738(int param_1,__gid_t param_2,undefined4 param_3)

{
  uint uVar1;
  size_t __buflen;
  char *__buffer;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  bool bVar6;
  group *pgStack_40;
  group gStack_3c;
  int iStack_2c;
  
  uVar1 = DAT_0002f924;
  piVar5 = *(int **)(DAT_0002f920 + 0x2f7bc + DAT_0002f928);
  iStack_2c = *piVar5;
  __buflen = sysconf(0x45);
  if ((int)__buflen < 1) {
    __buflen = 0x400;
  }
  do {
    __buffer = (char *)dbus_malloc(__buflen);
    if (__buffer == (char *)0x0) {
      dbus_set_error(param_3,DAT_0002f92c + 0x2f80c,0);
LAB_0002f80c:
      bVar6 = false;
LAB_0002f8c0:
      if (iStack_2c == *piVar5) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar6);
    }
    pgStack_40 = (group *)0x0;
    iVar2 = getgrgid_r(param_2,&gStack_3c,__buffer,__buflen,&pgStack_40);
    bVar6 = __buflen == uVar1;
    if (__buflen <= uVar1) {
      bVar6 = iVar2 == 0x22;
    }
    if (!bVar6) {
      if ((iVar2 != 0) || (pgStack_40 != &gStack_3c)) {
        piVar3 = __errno_location();
        uVar4 = _dbus_error_from_errno(*piVar3);
        dbus_set_error(param_3,uVar4,DAT_0002f938 + 0x2f90c,DAT_0002f934 + 0x2f8fc);
        dbus_free(__buffer);
        goto LAB_0002f80c;
      }
      *(__gid_t *)(param_1 + 4) = gStack_3c.gr_gid;
      iVar2 = _dbus_strdup(gStack_3c.gr_name);
      *(int *)(param_1 + 8) = iVar2;
      bVar6 = iVar2 != 0;
      if (!bVar6) {
        dbus_set_error(param_3,DAT_0002f930 + 0x2f8b8,0);
      }
      dbus_free(__buffer);
      goto LAB_0002f8c0;
    }
    __buflen = __buflen << 1;
    dbus_free(__buffer);
  } while( true );
}



/* ===== thunk_FUN_000312b4 @ 00030744 size=4 ===== */

void thunk_FUN_000312b4(undefined4 param_1,undefined4 param_2)

{
  FUN_00031204(param_1,param_2,0);
  return;
}



/* ===== thunk_FUN_00031484 @ 00030748 size=4 ===== */

void thunk_FUN_00031484(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iStack_18;
  int iStack_14;
  
  piVar3 = *(int **)(DAT_00031514 + 0x31494 + DAT_00031518);
  iStack_14 = *piVar3;
  iStack_18 = param_1;
  iVar1 = _dbus_user_database_lock_system();
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = _dbus_user_database_get_system();
    if ((iVar1 == 0) || (iVar1 = FUN_00031460(iVar1,param_1,&iStack_18,0), iVar1 == 0)) {
      _dbus_user_database_unlock_system();
      uVar2 = 0;
    }
    else {
      *param_2 = *(undefined4 *)(iStack_18 + 4);
      _dbus_user_database_unlock_system();
      uVar2 = 1;
    }
  }
  if (iStack_14 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/* ===== thunk_FUN_0003153c @ 0003074c size=4 ===== */

void thunk_FUN_0003153c(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iStack_20;
  int iStack_1c;
  
  piVar3 = *(int **)(DAT_00031610 + 0x31550 + DAT_00031614);
  iStack_1c = *piVar3;
  *param_2 = 0;
  *param_3 = 0;
  iStack_20 = param_1;
  iVar1 = _dbus_user_database_lock_system();
  uVar2 = 0;
  if (iVar1 == 0) goto LAB_00031590;
  iVar1 = _dbus_user_database_get_system();
  if ((iVar1 == 0) || (iVar1 = _dbus_user_database_get_uid(iVar1,param_1,&iStack_20,0), iVar1 == 0))
  {
LAB_00031588:
    _dbus_user_database_unlock_system();
    uVar2 = 0;
  }
  else {
    if (0 < *(int *)(iStack_20 + 0x10)) {
      iVar1 = dbus_malloc(*(int *)(iStack_20 + 0x10) << 2);
      *param_2 = iVar1;
      if (iVar1 == 0) goto LAB_00031588;
      iVar1 = *(int *)(iStack_20 + 0x10);
      *param_3 = iVar1;
      memcpy((void *)*param_2,*(void **)(iStack_20 + 0xc),iVar1 << 2);
    }
    _dbus_user_database_unlock_system();
    uVar2 = 1;
  }
LAB_00031590:
  if (iStack_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/* ===== thunk_FUN_00031154 @ 00030750 size=4 ===== */

undefined4 thunk_FUN_00031154(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_000311f0;
  iVar1 = _dbus_user_database_lock_system();
  if (iVar1 == 0) {
    dbus_set_error_const
              (param_2,DAT_000311f8 + 0x3118c,**(undefined4 **)(iVar2 + 0x31170 + DAT_000311f4));
    uVar3 = 0;
  }
  else {
    iVar2 = _dbus_user_database_get_system();
    if (iVar2 == 0) {
      dbus_set_error(param_2,DAT_00031200 + 0x311bc,DAT_000311fc + 0x311b8);
      uVar3 = 0;
    }
    else {
      iVar2 = _dbus_user_database_lookup(iVar2,param_1,0,param_2);
      uVar3 = 0;
      if (iVar2 != 0) {
        uVar3 = FUN_00030470(*(undefined4 *)(iVar2 + 0x14),param_2);
      }
    }
    _dbus_user_database_unlock_system();
  }
  return uVar3;
}



/* ===== FUN_00030754 @ 00030754 size=28 ===== */

bool FUN_00030754(int param_1)

{
  int iVar1;
  
  iVar1 = _dbus_geteuid();
  return iVar1 == param_1;
}



/* ===== FUN_00030778 @ 00030778 size=292 ===== */

void FUN_00030778(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int local_18;
  int local_14;
  
  piVar2 = *(int **)(DAT_0003089c + 0x30790 + DAT_000308a0);
  local_14 = *piVar2;
  local_18 = param_1[1];
  if (local_18 == 0) {
    iVar1 = DAT_000308a4 + 0x307b8;
  }
  else {
    for (; 0 < local_18; local_18 = local_18 + -1) {
      if (*(char *)(*param_1 + local_18 + -1) != '/') goto LAB_000307f8;
    }
    if (local_18 == 0) {
      iVar1 = DAT_000308ac + 0x30830;
    }
    else {
LAB_000307f8:
      FUN_00032b28(param_1,local_18,0x2f,&local_18,param_1,param_2);
      if (local_18 < 0) {
        iVar1 = DAT_000308a8 + 0x30820;
      }
      else {
        for (; 0 < local_18; local_18 = local_18 + -1) {
          if (*(char *)(*param_1 + local_18 + -1) != '/') goto LAB_00030858;
        }
        if ((local_18 != 0) || (*(char *)*param_1 != '/')) {
LAB_00030858:
          _dbus_string_copy_len(param_1,0,local_18,param_2,*(undefined4 *)(param_2 + 4));
          goto LAB_000307bc;
        }
        iVar1 = DAT_000308b0 + 0x30894;
      }
    }
  }
  _dbus_string_append(param_2,iVar1);
LAB_000307bc:
  if (local_14 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_000308b4 @ 000308b4 size=592 ===== */

void FUN_000308b4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  char *local_4c [4];
  int local_3c;
  int local_38;
  int local_2c;
  
  iVar7 = DAT_00030b04 + 0x308d4;
  piVar6 = *(int **)(iVar7 + DAT_00030b08);
  local_2c = *piVar6;
  iVar1 = _dbus_string_init(local_4c);
  if (iVar1 == 0) {
    dbus_set_error_const(param_4,DAT_00030b10 + 0x30914,**(undefined4 **)(iVar7 + DAT_00030b0c));
    uVar3 = 0;
    goto LAB_00030918;
  }
  iVar1 = _dbus_string_init(&local_3c);
  if (iVar1 == 0) {
    dbus_set_error_const(param_4,DAT_00030b14 + 0x30960,**(undefined4 **)(iVar7 + DAT_00030b0c));
    _dbus_string_free(local_4c);
    uVar3 = 0;
    goto LAB_00030918;
  }
  iVar1 = _dbus_string_append_printf(local_4c,DAT_00030b18 + 0x30984,param_1);
  if (iVar1 == 0) {
LAB_00030adc:
    dbus_set_error_const(param_4,DAT_00030b24 + 0x30af4,**(undefined4 **)(iVar7 + DAT_00030b0c));
  }
  else {
    iVar1 = open64(local_4c[0],0);
    if (iVar1 < 0) {
      piVar2 = __errno_location();
      uVar3 = _dbus_error_from_errno(*piVar2);
      uVar4 = _dbus_strerror(*piVar2);
      dbus_set_error(param_4,uVar3,DAT_00030b1c + 0x309d8,local_4c[0],uVar4);
    }
    else {
      iVar5 = _dbus_read(iVar1,&local_3c,param_3);
      if (iVar5 == 0) {
        piVar2 = __errno_location();
        uVar3 = _dbus_error_from_errno(*piVar2);
        uVar4 = _dbus_strerror(*piVar2);
        dbus_set_error(param_4,uVar3,DAT_00030b20 + 0x30a40,local_4c[0],uVar4);
        _dbus_close(iVar1,0);
      }
      else {
        iVar1 = _dbus_close(iVar1,param_4);
        if (iVar1 != 0) {
          for (iVar1 = 0; iVar1 < local_38; iVar1 = iVar1 + 1) {
            if (*(byte *)(local_3c + iVar1) == 0) {
              *(undefined1 *)(local_3c + iVar1) = 0x20;
            }
            else if (0x5f < *(byte *)(local_3c + iVar1) - 0x20) {
              *(undefined1 *)(local_3c + iVar1) = 0x3f;
            }
          }
          iVar1 = _dbus_string_copy(&local_3c,0,param_2,*(undefined4 *)(param_2 + 4));
          if (iVar1 != 0) {
            uVar3 = 1;
            _dbus_string_free(&local_3c);
            _dbus_string_free(local_4c);
            goto LAB_00030918;
          }
          goto LAB_00030adc;
        }
      }
    }
  }
  uVar3 = 0;
  _dbus_string_free(&local_3c);
  _dbus_string_free(local_4c);
LAB_00030918:
  if (local_2c == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== FUN_00030b28 @ 00030b28 size=8 ===== */

undefined4 FUN_00030b28(void)

{
  return 1;
}



/* ===== FUN_00030b30 @ 00030b30 size=588 ===== */

void FUN_00030b30(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 local_60;
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  int local_2c;
  
  iVar6 = DAT_00030d7c + 0x30b50;
  piVar5 = *(int **)(iVar6 + DAT_00030d80);
  local_60 = 0;
  local_2c = *piVar5;
  iVar1 = _dbus_string_init(auStack_4c);
  if (iVar1 == 0) {
    iVar1 = DAT_00030d88 + 0x30b8c;
    uVar3 = **(undefined4 **)(iVar6 + DAT_00030d84);
  }
  else {
    iVar1 = _dbus_string_init(auStack_5c);
    if (iVar1 == 0) {
      _dbus_string_free(auStack_4c);
      iVar1 = DAT_00030d8c + 0x30be0;
      uVar3 = **(undefined4 **)(iVar6 + DAT_00030d84);
    }
    else {
      iVar1 = _dbus_string_init(auStack_3c);
      if (iVar1 != 0) {
        iVar7 = DAT_00030d94 + 0x30c2c;
        iVar1 = _dbus_getenv(iVar7);
        if (iVar1 == 0) {
LAB_00030d6c:
          uVar4 = 1;
        }
        else {
          iVar2 = _dbus_string_append(auStack_3c,iVar1);
          if (((iVar2 == 0) ||
              (iVar2 = _dbus_string_append_printf(auStack_4c,DAT_00030d9c + 0x30c80,iVar1),
              iVar2 == 0)) ||
             (iVar1 = _dbus_string_append_printf(auStack_5c,DAT_00030da0 + 0x30c9c,iVar1),
             iVar1 == 0)) {
            iVar1 = DAT_00030d98 + 0x30c60;
            uVar4 = **(undefined4 **)(iVar6 + DAT_00030d84);
LAB_00030c60:
            dbus_set_error_const(param_2,iVar1,uVar4);
          }
          else {
            iVar1 = FUN_0002f93c(iVar7,auStack_3c,0,param_2);
            if (iVar1 != 0) {
              iVar7 = DAT_00030da4 + 0x30d00;
              iVar1 = FUN_0002f93c(iVar7,auStack_4c,1,param_2);
              if ((iVar1 != 0) && (iVar1 = FUN_0002f93c(iVar7,auStack_5c,1,param_2), iVar1 != 0)) {
                iVar1 = _dbus_string_steal_data(auStack_5c,&local_60);
                if ((iVar1 != 0) && (iVar1 = _dbus_list_append(param_1,local_60), iVar1 != 0)) {
                  local_60 = 0;
                  goto LAB_00030d6c;
                }
                iVar1 = DAT_00030da8 + 0x30d50;
                uVar4 = **(undefined4 **)(iVar6 + DAT_00030d84);
                goto LAB_00030c60;
              }
            }
          }
          uVar4 = 0;
        }
        _dbus_string_free(auStack_4c);
        _dbus_string_free(auStack_5c);
        _dbus_string_free(auStack_3c);
        dbus_free(local_60);
        goto LAB_00030b94;
      }
      _dbus_string_free(auStack_4c);
      _dbus_string_free(auStack_5c);
      iVar1 = DAT_00030d90 + 0x30c1c;
      uVar3 = **(undefined4 **)(iVar6 + DAT_00030d84);
    }
  }
  uVar4 = 0;
  dbus_set_error_const(param_2,iVar1,uVar3);
LAB_00030b94:
  if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}



/* ===== FUN_00030dac @ 00030dac size=388 ===== */

void FUN_00030dac(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *local_40;
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  int local_1c;
  
  piVar5 = *(int **)(DAT_00030f30 + 0x30dbc + DAT_00030f34);
  local_1c = *piVar5;
  iVar1 = _dbus_string_init(auStack_3c);
  uVar3 = 0;
  if (iVar1 == 0) goto LAB_00030eac;
  iVar1 = _dbus_getenv(DAT_00030f38 + 0x30df0);
  iVar2 = _dbus_getenv(DAT_00030f3c + 0x30e00);
  if (iVar1 == 0) {
    iVar1 = _dbus_homedir_from_current_process(&local_40);
    if ((iVar1 != 0) && (iVar1 = _dbus_string_append(auStack_3c,*local_40), iVar1 != 0)) {
      _dbus_string_init_const(auStack_2c,DAT_00030f4c + 0x30efc);
      iVar1 = _dbus_concat_dir_and_file(auStack_3c,auStack_2c);
      goto LAB_00030e18;
    }
  }
  else {
    iVar1 = _dbus_string_append(auStack_3c,iVar1);
LAB_00030e18:
    if (iVar1 != 0) {
      iVar4 = DAT_00030f40 + 0x30e30;
      iVar1 = _dbus_string_append(auStack_3c,iVar4);
      if (iVar1 != 0) {
        if (iVar2 == 0) {
          iVar4 = DAT_00030f50 + 0x30f18;
        }
        else {
          iVar1 = _dbus_string_append(auStack_3c,iVar2);
          if (iVar1 == 0) goto LAB_00030f18;
        }
        iVar1 = _dbus_string_append(auStack_3c,iVar4);
        if (((iVar1 != 0) &&
            (iVar1 = _dbus_string_append(auStack_3c,DAT_00030f44 + 0x30e7c), iVar1 != 0)) &&
           (iVar1 = _dbus_split_paths_and_append(auStack_3c,DAT_00030f48 + 0x30e98,param_1),
           iVar1 != 0)) {
          _dbus_string_free(auStack_3c);
          uVar3 = 1;
          goto LAB_00030eac;
        }
      }
    }
  }
LAB_00030f18:
  _dbus_string_free(auStack_3c);
  uVar3 = 0;
LAB_00030eac:
  if (local_1c == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== FUN_00030f54 @ 00030f54 size=104 ===== */

void FUN_00030f54(undefined4 param_1)

{
  int *piVar1;
  undefined1 auStack_24 [16];
  int local_14;
  
  piVar1 = *(int **)(DAT_00030fbc + 0x30f64 + DAT_00030fc0);
  local_14 = *piVar1;
  _dbus_string_init_const(auStack_24,DAT_00030fc4 + 0x30f88);
  _dbus_split_paths_and_append(auStack_24,DAT_00030fc8 + 0x30fa0,param_1);
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00030fcc @ 00030fcc size=12 ===== */

void FUN_00030fcc(undefined4 param_1)

{
  _dbus_string_append(param_1,(int)&DAT_00030fd8 + DAT_00030fd8);
  return;
}



/* ===== FUN_00030fdc @ 00030fdc size=12 ===== */

void FUN_00030fdc(undefined4 param_1)

{
  _dbus_string_append(param_1,(int)&DAT_00030fe8 + DAT_00030fe8);
  return;
}



/* ===== FUN_00030fec @ 00030fec size=328 ===== */

void FUN_00030fec(int *param_1,undefined4 param_2,uint param_3)

{
  int __fd;
  int *piVar1;
  ssize_t sVar2;
  char *__file;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uStack_28;
  int local_24;
  
  piVar6 = *(int **)(DAT_00031134 + 0x31004 + DAT_00031138);
  __file = (char *)(DAT_0003113c + 0x31010);
  local_24 = *piVar6;
  uStack_28 = param_3;
  __fd = open64(__file,DAT_00031140,DAT_00031138,local_24,param_1,param_2);
  piVar1 = __errno_location();
  if (__fd < 0) {
    __fd = open64(__file,2);
    _dbus_fd_set_close_on_exec();
    if (__fd < 0) {
      iVar5 = *piVar1;
      if (iVar5 == 2) {
        iVar4 = 0;
        uVar3 = 1;
        iVar5 = iVar4;
      }
      else {
        uVar3 = 0;
        iVar4 = DAT_00031150 + 0x3110c;
      }
      goto LAB_00031108;
    }
  }
  uVar3 = 0;
  uStack_28 = uStack_28 & 0xffffff;
  sVar2 = read(__fd,(void *)((int)&uStack_28 + 3),1);
  if (sVar2 < 0) {
    iVar4 = DAT_00031144 + 0x31080;
    iVar5 = *piVar1;
  }
  else if (((sVar2 == 0) || (uStack_28._3_1_ != '-')) ||
          (sVar2 = pwrite64(__fd,(void *)(DAT_00031148 + 0x310b8),1,0), -1 < sVar2)) {
    iVar4 = 0;
    uVar3 = 1;
    iVar5 = iVar4;
  }
  else {
    iVar4 = DAT_0003114c + 0x310d0;
    iVar5 = *piVar1;
  }
  _dbus_close(__fd,0);
LAB_00031108:
  if (param_1 != (int *)0x0) {
    *param_1 = iVar4;
  }
  *piVar1 = iVar5;
  if (local_24 != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_00031154 @ 00031154 size=156 ===== */

undefined4 FUN_00031154(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_000311f0;
  iVar1 = _dbus_user_database_lock_system();
  if (iVar1 == 0) {
    dbus_set_error_const
              (param_2,DAT_000311f8 + 0x3118c,**(undefined4 **)(iVar2 + 0x31170 + DAT_000311f4));
    uVar3 = 0;
  }
  else {
    iVar2 = _dbus_user_database_get_system();
    if (iVar2 == 0) {
      dbus_set_error(param_2,DAT_00031200 + 0x311bc,DAT_000311fc + 0x311b8);
      uVar3 = 0;
    }
    else {
      iVar2 = _dbus_user_database_lookup(iVar2,param_1,0,param_2);
      uVar3 = 0;
      if (iVar2 != 0) {
        uVar3 = FUN_00030470(*(undefined4 *)(iVar2 + 0x14),param_2);
      }
    }
    _dbus_user_database_unlock_system();
  }
  return uVar3;
}



/* ===== FUN_00031204 @ 00031204 size=168 ===== */

void FUN_00031204(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int local_20;
  int local_1c;
  undefined4 *puStack_18;
  
  piVar3 = *(int **)(DAT_000312ac + 0x31218 + DAT_000312b0);
  local_1c = *piVar3;
  local_20 = param_1;
  puStack_18 = param_3;
  iVar1 = _dbus_user_database_lock_system();
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = _dbus_user_database_get_system();
    if ((iVar1 == 0) ||
       (iVar1 = _dbus_user_database_get_username(iVar1,param_1,&local_20,0), iVar1 == 0)) {
      _dbus_user_database_unlock_system();
      uVar2 = 0;
    }
    else {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = *(undefined4 *)(local_20 + 4);
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(local_20 + 8);
      }
      _dbus_user_database_unlock_system();
      uVar2 = 1;
    }
  }
  if (local_1c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



/* ===== FUN_000312b4 @ 000312b4 size=8 ===== */

void FUN_000312b4(undefined4 param_1,undefined4 param_2)

{
  FUN_00031204(param_1,param_2,0);
  return;
}



/* ===== FUN_000312bc @ 000312bc size=400 ===== */

void FUN_000312bc(int param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int local_28;
  int local_24;
  
  piVar5 = *(int **)(DAT_0003144c + 0x312dc + DAT_00031450);
  local_24 = *piVar5;
  iVar1 = param_2;
  local_28 = param_1;
  if ((param_2 == -1) &&
     ((iVar1 = _dbus_is_a_number(param_3,&local_28), iVar1 == 0 ||
      (iVar1 = local_28, local_28 == -1)))) {
    piVar2 = (int *)_dbus_hash_table_lookup_string(*(undefined4 *)(param_1 + 0x10),*param_3);
  }
  else {
    piVar2 = (int *)_dbus_hash_table_lookup_uintptr(*(undefined4 *)(param_1 + 8),iVar1);
    param_2 = iVar1;
  }
  piVar3 = piVar2;
  if (piVar2 != (int *)0x0) goto LAB_00031390;
  piVar3 = (int *)dbus_malloc0(0xc);
  if (piVar3 == (int *)0x0) {
    iVar1 = DAT_00031454 + 0x3134c;
LAB_00031348:
    dbus_set_error(param_4,iVar1,0);
    piVar3 = piVar2;
  }
  else {
    *piVar3 = 1;
    if (param_2 == -1) {
      iVar1 = FUN_00030728(piVar3,param_3,param_4);
    }
    else {
      iVar1 = FUN_00030738(piVar3,param_2);
    }
    if (iVar1 != 0) {
      iVar1 = _dbus_hash_table_insert_uintptr(*(undefined4 *)(param_1 + 8),piVar3[1],piVar3);
      if (iVar1 != 0) {
        uVar4 = *(undefined4 *)(param_1 + 0x10);
        *piVar3 = *piVar3 + 1;
        iVar1 = _dbus_hash_table_insert_string(uVar4,piVar3[2],piVar3);
        if (iVar1 != 0) {
          *piVar3 = *piVar3 + 1;
          _dbus_group_info_unref(piVar3);
          goto LAB_00031390;
        }
        _dbus_hash_table_remove_uintptr(*(undefined4 *)(param_1 + 8),piVar3[1]);
        _dbus_group_info_unref(piVar3);
        iVar1 = DAT_00031458 + 0x31414;
        goto LAB_00031348;
      }
      dbus_set_error(param_4,DAT_0003145c + 0x31424);
    }
    _dbus_group_info_unref(piVar3);
    piVar3 = piVar2;
  }
LAB_00031390:
  if (local_24 == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(piVar3);
}



/* ===== FUN_00031460 @ 00031460 size=36 ===== */

bool FUN_00031460(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = FUN_000312bc(param_1,0xffffffff,param_2);
  *param_3 = iVar1;
  return iVar1 != 0;
}



/* ===== FUN_00031484 @ 00031484 size=144 ===== */

void FUN_00031484(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int local_18;
  int local_14;
  
  piVar3 = *(int **)(DAT_00031514 + 0x31494 + DAT_00031518);
  local_14 = *piVar3;
  local_18 = param_1;
  iVar1 = _dbus_user_database_lock_system();
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = _dbus_user_database_get_system();
    if ((iVar1 == 0) || (iVar1 = FUN_00031460(iVar1,param_1,&local_18,0), iVar1 == 0)) {
      _dbus_user_database_unlock_system();
      uVar2 = 0;
    }
    else {
      *param_2 = *(undefined4 *)(local_18 + 4);
      _dbus_user_database_unlock_system();
      uVar2 = 1;
    }
  }
  if (local_14 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/* ===== FUN_0003153c @ 0003153c size=212 ===== */

void FUN_0003153c(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int local_20;
  int local_1c;
  
  piVar3 = *(int **)(DAT_00031610 + 0x31550 + DAT_00031614);
  local_1c = *piVar3;
  *param_2 = 0;
  *param_3 = 0;
  local_20 = param_1;
  iVar1 = _dbus_user_database_lock_system();
  uVar2 = 0;
  if (iVar1 == 0) goto LAB_00031590;
  iVar1 = _dbus_user_database_get_system();
  if ((iVar1 == 0) || (iVar1 = _dbus_user_database_get_uid(iVar1,param_1,&local_20,0), iVar1 == 0))
  {
LAB_00031588:
    _dbus_user_database_unlock_system();
    uVar2 = 0;
  }
  else {
    if (0 < *(int *)(local_20 + 0x10)) {
      iVar1 = dbus_malloc(*(int *)(local_20 + 0x10) << 2);
      *param_2 = iVar1;
      if (iVar1 == 0) goto LAB_00031588;
      iVar1 = *(int *)(local_20 + 0x10);
      *param_3 = iVar1;
      memcpy((void *)*param_2,*(void **)(local_20 + 0xc),iVar1 << 2);
    }
    _dbus_user_database_unlock_system();
    uVar2 = 1;
  }
LAB_00031590:
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/* ===== FUN_00031618 @ 00031618 size=84 ===== */

void FUN_00031618(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    _dbus_watch_list_remove_watch(*(undefined4 *)(param_1 + 0x18));
    _dbus_watch_invalidate(*(undefined4 *)(param_1 + 0x1c));
    _dbus_watch_unref(*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if (*(int *)(param_1 + 0xc) < 0) {
    return;
  }
  _dbus_close(*(int *)(param_1 + 0xc),0);
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  return;
}



/* ===== FUN_0003166c @ 0003166c size=52 ===== */

undefined4 FUN_0003166c(int *param_1)

{
  undefined4 uVar1;
  
  if (-1 < *param_1) {
    uVar1 = _dbus_close(*param_1,0);
    *param_1 = -1;
    return uVar1;
  }
  return 0xffffffff;
}



/* ===== FUN_0003172c @ 0003172c size=84 ===== */

void FUN_0003172c(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    _dbus_watch_list_remove_watch(*(undefined4 *)(param_1 + 0x18));
    _dbus_watch_invalidate(*(undefined4 *)(param_1 + 0x20));
    _dbus_watch_unref(*(undefined4 *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(int *)(param_1 + 8) < 0) {
    return;
  }
  _dbus_close_socket(*(int *)(param_1 + 8),0);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}



/* ===== FUN_00031780 @ 00031780 size=92 ===== */

void FUN_00031780(int param_1,int param_2)

{
  ssize_t sVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    while (sVar1 = write(param_1,(void *)(param_2 + uVar3),4 - uVar3), -1 < sVar1) {
      uVar3 = uVar3 + sVar1;
      if (3 < uVar3) {
        return;
      }
    }
    piVar2 = __errno_location();
  } while (*piVar2 == 4);
  _dbus_warn(DAT_000317dc + 0x317c4);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_000317e0 @ 000317e0 size=220 ===== */

void FUN_000317e0(__pid_t param_1,__pid_t param_2,uint param_3)

{
  __pid_t _Var1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  __pid_t local_28;
  __pid_t local_24;
  uint local_20;
  int local_1c;
  
  piVar4 = *(int **)(DAT_000318bc + 0x31800 + DAT_000318c0);
  local_1c = *piVar4;
  local_28 = param_1;
  local_24 = param_2;
  local_20 = param_3;
  do {
    _Var1 = waitpid(param_1,&local_28,1);
    if (-1 < _Var1) {
      if (_Var1 == 0) {
        iVar3 = 0;
        if ((param_3 & 0x18) == 0) {
          if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
        goto LAB_000318b0;
      }
      if (param_1 == _Var1) {
        local_20 = 0;
        local_24 = local_28;
        FUN_00031780(param_2,&local_20);
        FUN_00031780(param_2,&local_24);
        iVar3 = 0;
        goto LAB_000318b0;
      }
      iVar3 = DAT_000318c8 + 0x3185c;
      goto LAB_00031844;
    }
    piVar2 = __errno_location();
  } while (*piVar2 == 4);
  _Var1 = _dbus_strerror();
  iVar3 = DAT_000318c4 + 0x31848;
LAB_00031844:
  _dbus_warn(iVar3,_Var1);
  iVar3 = 1;
LAB_000318b0:
                    /* WARNING: Subroutine does not return */
  exit(iVar3);
}



/* ===== FUN_000318cc @ 000318cc size=80 ===== */

void FUN_000318cc(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  
  local_c = **(undefined4 **)(DAT_0003191c + 0x318e4 + DAT_00031920);
  local_14 = param_2;
  local_10 = param_3;
  piVar1 = __errno_location();
  local_10 = *piVar1;
  FUN_00031780(param_1,&local_14);
  FUN_00031780(param_1,&local_10);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00031924 @ 00031924 size=156 ===== */

undefined4 FUN_00031924(int param_1,int param_2,uint *param_3,undefined4 param_4)

{
  ssize_t sVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar4 = 0;
  do {
    if (4 - uVar4 == 0) {
      uVar4 = 4;
      uVar5 = 0;
LAB_000319a4:
      *param_3 = uVar4 >> 2;
      return uVar5;
    }
    while( true ) {
      sVar1 = read(param_1,(void *)(param_2 + uVar4),4 - uVar4);
      if (-1 < sVar1) break;
      piVar2 = __errno_location();
      if (*piVar2 != 4) {
        uVar5 = 1;
        uVar3 = _dbus_strerror();
        dbus_set_error(param_4,DAT_000319c4 + 0x31994,DAT_000319c0 + 0x31990,uVar3);
        goto LAB_000319a4;
      }
    }
    if (sVar1 == 0) {
      uVar5 = 2;
      goto LAB_000319a4;
    }
    uVar4 = uVar4 + sVar1;
  } while( true );
}



/* ===== FUN_000319c8 @ 000319c8 size=548 ===== */

void FUN_000319c8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  undefined4 uVar5;
  byte bVar6;
  int *piVar7;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  uint local_34;
  undefined4 uStack_30;
  int local_2c;
  
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piVar7 = *(int **)(DAT_00031bec + 0x319e0 + DAT_00031bf0);
  local_3c = 0;
  local_2c = *piVar7;
  local_34 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8) | 1;
  iVar1 = FUN_00031924(param_2,&local_48,&local_44,&local_3c);
  if (iVar1 == 1) {
    iVar2 = DAT_00031bf8 + 0x31a80;
LAB_00031a7c:
    _dbus_warn(iVar2,param_2,uStack_38);
    dbus_error_free(&local_3c);
  }
  else {
    if ((iVar1 == 2) || (local_44 != 1)) goto LAB_00031a88;
    if (-1 < local_48) {
      if (local_48 < 3) {
        iVar1 = FUN_00031924(param_2,&local_40,&local_44,&local_3c);
        if (iVar1 != 1) {
          if ((iVar1 != 2) && (local_44 == 1)) {
            if (local_48 == 0) {
              *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) | 1;
              *(undefined4 *)(param_1 + 0x30) = local_40;
            }
            else {
              if (local_48 == 1) {
                bVar6 = *(byte *)(param_1 + 0x34) | 2;
              }
              else {
                if (local_48 != 2) goto LAB_00031a88;
                bVar6 = *(byte *)(param_1 + 0x34) | 4;
              }
              *(byte *)(param_1 + 0x34) = bVar6;
              *(undefined4 *)(param_1 + 0x2c) = local_40;
            }
          }
          goto LAB_00031a88;
        }
        iVar2 = DAT_00031bfc + 0x31b0c;
        goto LAB_00031a7c;
      }
      if (local_48 == 3) {
        local_40 = 0xffffffff;
        for (iVar1 = 0; 4U - iVar1 != 0; iVar1 = iVar1 + sVar3) {
          while( true ) {
            sVar3 = read(param_2,(void *)((int)&local_40 + iVar1),4U - iVar1);
            if (-1 < sVar3) break;
            piVar4 = __errno_location();
            if (*piVar4 != 4) {
              iVar1 = 1;
              uVar5 = _dbus_strerror();
              dbus_set_error(&local_3c,DAT_00031c04 + 0x31ba4,DAT_00031c00 + 0x31ba0,uVar5);
              _dbus_warn(DAT_00031c08 + 0x31bb8,param_2,uStack_38);
              dbus_error_free(&local_3c);
              goto LAB_00031a88;
            }
          }
          if (sVar3 == 0) {
            iVar1 = 2;
            goto LAB_00031a88;
          }
        }
        *(undefined4 *)(param_1 + 0x14) = local_40;
        iVar1 = 0;
        goto LAB_00031a88;
      }
    }
    _dbus_warn(DAT_00031bf4 + 0x31a68);
  }
LAB_00031a88:
  if (local_2c == *piVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}



/* ===== FUN_00031c0c @ 00031c0c size=56 ===== */

void FUN_00031c0c(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 & 1) == 0) {
    if ((param_2 & 0x18) == 0) {
      return;
    }
  }
  else {
    iVar1 = FUN_000319c8(param_1,*(undefined4 *)(param_1 + 0xc));
    if (iVar1 == 0) {
      return;
    }
  }
  FUN_00031618(param_1);
  return;
}



/* ===== FUN_00031c44 @ 00031c44 size=56 ===== */

void FUN_00031c44(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 & 1) == 0) {
    if ((param_2 & 0x18) == 0) {
      return;
    }
  }
  else {
    iVar1 = FUN_000319c8(param_1,*(undefined4 *)(param_1 + 8));
    if (iVar1 == 0) {
      return;
    }
  }
  FUN_0003172c(param_1);
  return;
}



/* ===== FUN_00031c7c @ 00031c7c size=340 ===== */

void FUN_00031c7c(int param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int local_2c;
  short local_28;
  short asStack_26 [5];
  int local_1c;
  
  piVar5 = *(int **)(DAT_00031dd0 + 0x31c8c + DAT_00031dd4);
  local_1c = *piVar5;
  iVar3 = *(int *)(param_1 + 0xc);
  if (-1 < iVar3) {
    local_28 = 1;
    asStack_26[0] = 0;
    local_2c = iVar3;
  }
  uVar4 = (uint)(-1 < iVar3);
  if (*(int *)(param_1 + 8) < 0) {
    if (uVar4 == 0) goto LAB_00031d18;
  }
  else {
    iVar3 = uVar4 * 8;
    (&local_2c)[uVar4 * 2] = *(int *)(param_1 + 8);
    uVar4 = uVar4 + 1;
    *(undefined4 *)((int)&stack0xffffffd8 + iVar3) = 1;
  }
  do {
    iVar3 = _dbus_poll(&local_2c,uVar4,0);
    if (-1 < iVar3) {
      if (iVar3 == 0) {
        param_2 = param_2 & 1;
      }
      else {
        param_2 = 0;
      }
      if (param_2 != 0) goto LAB_00031d30;
      goto LAB_00031d5c;
    }
    piVar1 = __errno_location();
  } while (*piVar1 == 4);
  goto LAB_00031d18;
LAB_00031d5c:
  if (iVar3 != 0) {
    do {
      uVar4 = uVar4 - 1;
      if ((&local_2c)[uVar4 * 2] == *(int *)(param_1 + 0xc)) {
        FUN_00031c0c(param_1,(int)asStack_26[uVar4 * 4]);
      }
      else if ((&local_2c)[uVar4 * 2] == *(int *)(param_1 + 8)) {
        FUN_00031c44(param_1,(int)asStack_26[uVar4 * 4]);
      }
    } while (uVar4 != 0);
    uVar2 = 1;
    goto LAB_00031d98;
  }
  goto LAB_00031d18;
  while (piVar1 = __errno_location(), *piVar1 == 4) {
LAB_00031d30:
    iVar3 = _dbus_poll(&local_2c,uVar4,0xffffffff);
    if (-1 < iVar3) goto LAB_00031d5c;
  }
LAB_00031d18:
  uVar2 = 0;
LAB_00031d98:
  if (local_1c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/* ===== FUN_00031dd8 @ 00031dd8 size=16 ===== */

void FUN_00031dd8(int *param_1)

{
  *param_1 = *param_1 + 1;
  return;
}



/* ===== FUN_00031de8 @ 00031de8 size=288 ===== */

void FUN_00031de8(int *param_1)

{
  __pid_t _Var1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piStack_18;
  int local_14;
  
  piVar5 = *(int **)(DAT_00031f08 + 0x31df8 + DAT_00031f0c);
  local_14 = *piVar5;
  iVar4 = *param_1;
  *param_1 = iVar4 + -1;
  piStack_18 = param_1;
  if (iVar4 + -1 != 0) goto LAB_00031ecc;
  FUN_0003172c();
  FUN_00031618(param_1);
  if (0 < param_1[4]) {
    _Var1 = waitpid(param_1[4],(int *)&piStack_18,1);
    if (_Var1 == 0) {
      kill(param_1[4],9);
      do {
        _Var1 = waitpid(param_1[4],(int *)&piStack_18,0);
        if (-1 < _Var1) goto LAB_00031ea4;
        piVar2 = __errno_location();
      } while (*piVar2 == 4);
LAB_00031e80:
      piVar2 = __errno_location();
      iVar4 = *piVar2;
      if (iVar4 == 10) {
        _dbus_warn(DAT_00031f10 + 0x31e9c);
      }
      else {
        uVar3 = _dbus_strerror(iVar4);
        _dbus_warn(DAT_00031f14 + 0x31efc,iVar4,uVar3);
      }
    }
    else if (_Var1 < 0) goto LAB_00031e80;
LAB_00031ea4:
    param_1[4] = -1;
  }
  if (param_1[6] != 0) {
    _dbus_watch_list_free();
  }
  dbus_free(param_1[1]);
  dbus_free(param_1);
LAB_00031ecc:
  if (local_14 != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00031f18 @ 00031f18 size=80 ===== */

void FUN_00031f18(int param_1)

{
  __pid_t __pid;
  
  while( true ) {
    __pid = *(__pid_t *)(param_1 + 0x14);
    if (((*(int *)(param_1 + 8) < 0) && (*(int *)(param_1 + 0xc) < 0)) || (__pid != -1)) break;
    FUN_00031c7c(param_1,1);
  }
  if (__pid == -1) {
    return;
  }
  kill(__pid,9);
  return;
}



/* ===== FUN_00031f68 @ 00031f68 size=64 ===== */

uint FUN_00031f68(int param_1)

{
  int iVar1;
  
  do {
    if ((*(int *)(param_1 + 8) < 0) && (*(int *)(param_1 + 0xc) < 0)) break;
    iVar1 = FUN_00031c7c(param_1,0);
  } while (iVar1 != 0);
  return *(uint *)(param_1 + 8) >> 0x1f;
}



/* ===== FUN_00032074 @ 00032074 size=56 ===== */

bool FUN_00032074(int param_1,uint *param_2)

{
  bool bVar1;
  
  FUN_00031f68();
  if ((*(byte *)(param_1 + 0x34) & 1) == 0) {
    return (bool)(*(byte *)(param_1 + 0x34) & 1);
  }
  bVar1 = (*(uint *)(param_1 + 0x30) & 0x7f) == 0;
  if (bVar1) {
    *param_2 = (*(uint *)(param_1 + 0x30) & 0xffff) >> 8;
  }
  return bVar1;
}



/* ===== FUN_000320ac @ 000320ac size=288 ===== */

void FUN_000320ac(int param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar7 = param_2;
  iVar2 = FUN_00031f68();
  if (iVar2 != 0) {
    bVar1 = *(byte *)(param_1 + 0x34);
    uVar6 = *(undefined4 *)(param_1 + 4);
    if ((bVar1 & 4) == 0) {
      if ((bVar1 & 2) == 0) {
        if ((bVar1 & 1) == 0) {
          iVar4 = DAT_000321f4 + 0x321c8;
          iVar2 = (int)&DAT_000321cc + DAT_000321f8;
LAB_000321a4:
          dbus_set_error(param_2,iVar2,iVar4,uVar6);
          return;
        }
        uVar5 = *(uint *)(param_1 + 0x30);
        uVar3 = uVar5 & 0x7f;
        if (uVar3 == 0) {
          uVar3 = (uVar5 & 0xffff) >> 8;
          iVar2 = DAT_000321dc + 0x32160;
          iVar4 = DAT_000321e0 + 0x32164;
        }
        else {
          if (0xfe < (uVar5 & 0xffff) - 1) {
            iVar4 = DAT_000321ec + 0x321a4;
            iVar2 = DAT_000321f0 + 0x321a8;
            goto LAB_000321a4;
          }
          iVar4 = DAT_000321e4 + 0x3218c;
          iVar2 = DAT_000321e8 + 0x32190;
        }
      }
      else {
        uVar3 = _dbus_strerror(*(undefined4 *)(param_1 + 0x2c));
        iVar4 = DAT_000321d4 + 0x3212c;
        iVar2 = DAT_000321d8 + 0x32130;
      }
    }
    else {
      uVar3 = _dbus_strerror(*(undefined4 *)(param_1 + 0x2c));
      iVar4 = DAT_000321cc + 0x320f0;
      iVar2 = DAT_000321d0 + 0x320f4;
    }
    dbus_set_error(param_2,iVar2,iVar4,uVar6,uVar3,uVar7);
  }
  return;
}



/* ===== FUN_000321fc @ 000321fc size=20 ===== */

void FUN_000321fc(int param_1)

{
  (*(code *)PTR__dbus_watch_list_set_functions_00048b88)(*(undefined4 *)(param_1 + 0x18));
  return;
}



/* ===== FUN_00032204 @ 00032204 size=1284 ===== */

/* WARNING: Type propagation algorithm not settling */

void FUN_00032204(undefined4 *param_1,int param_2,char **param_3,char **param_4,undefined4 param_5,
                 code *param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  __pid_t _Var5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  __pid_t local_5c [2];
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  uint local_30;
  int local_2c;
  
  iVar9 = DAT_00032708 + 0x32224;
  piVar8 = *(int **)(iVar9 + DAT_0003270c);
  local_2c = *piVar8;
  local_54 = *(int *)(DAT_00032710 + 0x32268);
  local_50 = *(undefined4 *)(DAT_00032710 + 0x3226c);
  local_4c = *(undefined4 *)(DAT_00032710 + 0x32270);
  local_48 = *(undefined4 *)(DAT_00032710 + 0x32274);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  puVar1 = (undefined4 *)dbus_malloc0(0x38);
  if (puVar1 == (undefined4 *)0x0) {
LAB_000322c4:
    dbus_set_error(param_8,DAT_00032714 + 0x322d8,0);
  }
  else {
    *puVar1 = 1;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0xffffffff;
    puVar1[4] = 0xffffffff;
    puVar1[5] = 0xffffffff;
    iVar2 = _dbus_watch_list_new();
    puVar1[6] = iVar2;
    if (iVar2 == 0) {
      FUN_00031de8(puVar1);
      goto LAB_000322c4;
    }
    iVar2 = _dbus_strdup(param_2);
    puVar1[1] = iVar2;
    if (iVar2 == 0) {
      if (param_2 == 0) {
        iVar2 = _dbus_strdup(*param_3);
        puVar1[1] = iVar2;
        if (iVar2 != 0) goto LAB_00032354;
      }
      goto LAB_000322fc;
    }
LAB_00032354:
    iVar2 = pipe2(&local_54,0x80000);
    if (iVar2 < 0) {
      piVar4 = __errno_location();
      if ((*piVar4 == 0x26) && (iVar2 = pipe(&local_54), -1 < iVar2)) {
        _dbus_fd_set_close_on_exec(local_54);
        _dbus_fd_set_close_on_exec(local_50);
        goto LAB_000323c4;
      }
      uVar3 = _dbus_strerror(*piVar4);
      iVar2 = DAT_0003271c + 0x32398;
      iVar9 = DAT_00032720 + 0x3239c;
LAB_00032398:
      dbus_set_error(param_8,iVar9,iVar2,uVar3);
    }
    else {
LAB_000323c4:
      iVar2 = _dbus_socketpair(&local_4c,&local_48,1,param_8);
      if (iVar2 != 0) {
        iVar10 = DAT_00032724 + 0x323fc;
        iVar2 = _dbus_watch_new(local_54,1,1,iVar10,puVar1,0);
        puVar1[7] = iVar2;
        if (iVar2 == 0) {
LAB_000322fc:
          iVar9 = DAT_00032718 + 0x3230c;
        }
        else {
          iVar2 = _dbus_watch_list_add_watch(puVar1[6],iVar2);
          if (iVar2 != 0) {
            iVar2 = _dbus_watch_new(local_4c,1,1,iVar10,puVar1,0);
            puVar1[8] = iVar2;
            if (iVar2 == 0) goto LAB_000322fc;
            iVar2 = _dbus_watch_list_add_watch(puVar1[6],iVar2);
            if (iVar2 == 0) {
              _dbus_watch_invalidate(puVar1[8]);
              _dbus_watch_unref(puVar1[8]);
              iVar9 = DAT_0003272c;
              puVar1[8] = 0;
              iVar9 = iVar9 + 0x324ac;
              goto LAB_00032308;
            }
            _Var5 = fork();
            if (_Var5 < 0) {
              piVar4 = __errno_location();
              uVar3 = _dbus_strerror(*piVar4);
              iVar2 = DAT_00032730 + 0x324d8;
              iVar9 = DAT_00032734 + 0x324dc;
              goto LAB_00032398;
            }
            if (_Var5 != 0) {
              FUN_0003166c(&local_50);
              FUN_0003166c(&local_48);
              puVar1[2] = local_4c;
              local_4c = 0xffffffff;
              puVar1[3] = local_54;
              local_54 = -1;
              puVar1[4] = _Var5;
              if (param_1 == (undefined4 *)0x0) {
                FUN_00031de8(puVar1);
              }
              else {
                *param_1 = puVar1;
              }
              dbus_free_string_array(param_4);
              uVar3 = 1;
              goto LAB_000326e8;
            }
            signal(0xd,(__sighandler_t)0x0);
            FUN_0003166c(&local_54);
            FUN_0003166c(&local_4c);
            _Var5 = fork();
            if (_Var5 < 0) {
              uVar7 = 1;
              uVar3 = local_48;
LAB_00032570:
              FUN_000318cc(uVar3,uVar7);
            }
            else if (_Var5 == 0) {
              FUN_00030fec(0);
              signal(0xd,(__sighandler_t)0x1);
              FUN_0003166c(&local_48);
              uVar3 = local_50;
              if (param_6 != (code *)0x0) {
                (*param_6)(param_7);
              }
              if (param_4 == (char **)0x0) {
                param_4 = (char **)**(undefined4 **)(iVar9 + DAT_00032738);
              }
              execve(*param_3,param_3,param_4);
              uVar7 = 2;
              goto LAB_00032570;
            }
            FUN_0003166c(&local_50);
            uVar3 = local_48;
            iVar9 = pipe(&local_44);
            if (-1 < iVar9) {
              iVar9 = DAT_00032744 + 0x325cc;
              *(undefined4 *)(DAT_00032740 + 0x325c4) = local_40;
              FUN_000303dc(0x11,iVar9);
              local_5c[1] = 3;
              local_5c[0] = _Var5;
              FUN_00031780(uVar3,local_5c + 1);
              FUN_00031780(uVar3,local_5c);
              FUN_000317e0(_Var5,uVar3,0);
LAB_00032604:
              local_3c = uVar3;
              local_38 = 1;
              local_34 = local_44;
              local_30 = 1;
              iVar9 = _dbus_poll(&local_3c,2,0xffffffff);
              if (iVar9 < 0) {
                piVar8 = __errno_location();
                if (*piVar8 != 4) goto code_r0x00032640;
              }
              iVar9 = (int)local_38._2_2_;
              if (iVar9 == 0) goto LAB_00032678;
              goto LAB_00032664;
            }
            _dbus_warn(DAT_0003273c + 0x3259c);
LAB_0003259c:
                    /* WARNING: Subroutine does not return */
            exit(1);
          }
          _dbus_watch_invalidate(puVar1[7]);
          _dbus_watch_unref(puVar1[7]);
          iVar9 = DAT_00032728;
          puVar1[7] = 0;
          iVar9 = iVar9 + 0x32450;
        }
LAB_00032308:
        dbus_set_error(param_8,iVar9,0);
      }
    }
    FUN_0003166c(&local_54);
    FUN_0003166c(&local_50);
    FUN_0003166c(&local_4c);
    FUN_0003166c(&local_48);
    FUN_00031de8(puVar1);
  }
  uVar3 = 0;
LAB_000326e8:
  if (local_2c != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
code_r0x00032640:
  pcVar6 = strerror(*piVar8);
  _dbus_warn(DAT_00032748 + 0x32654,pcVar6);
  goto LAB_0003259c;
LAB_00032678:
  if ((local_30 & 0x10000) != 0) {
    read(local_44,local_5c + 1,1);
LAB_00032664:
    FUN_000317e0(_Var5,uVar3,iVar9);
  }
  goto LAB_00032604;
}



/* ===== FUN_0003274c @ 0003274c size=12 ===== */

void FUN_0003274c(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return;
}



/* ===== FUN_00032758 @ 00032758 size=48 ===== */

void FUN_00032758(int param_1)

{
  while ((-1 < *(int *)(param_1 + 8) || (-1 < *(int *)(param_1 + 0xc)))) {
    FUN_00031c7c(param_1,1);
  }
  return;
}



/* ===== FUN_00032788 @ 00032788 size=128 ===== */

int * FUN_00032788(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00033014();
  if (piVar1 != (int *)0x0) {
    return piVar1;
  }
  if (param_1 < 1) {
    param_1 = 8;
  }
  piVar1 = (int *)dbus_malloc0(0x14);
  iVar2 = DAT_00032ac8;
  if (piVar1 != (int *)0x0) {
    piVar1[4] = param_1;
    *piVar1 = iVar2 + 0x32a94;
    piVar1[2] = 0;
    iVar2 = dbus_malloc0(param_1 << 3);
    piVar1[1] = iVar2;
    if (iVar2 == 0) {
      FUN_000328a4(piVar1);
      piVar1 = (int *)0x0;
    }
  }
  return piVar1;
}



/* ===== FUN_000327a8 @ 000327a8 size=24 ===== */

ushort FUN_000327a8(ushort param_1)

{
  ushort uVar1;
  
  uVar1 = param_1 & 1;
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 4;
  }
  return uVar1;
}



/* ===== FUN_000327c0 @ 000327c0 size=104 ===== */

void FUN_000327c0(int param_1,int param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int extraout_r1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = *(int *)(param_1 + 4);
  while( true ) {
    if (*(int *)(param_1 + 8) <= iVar2) {
      *(int *)(iVar3 + *(int *)(param_1 + 8) * 8) = param_2;
      uVar1 = FUN_000327a8(param_3,*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 8);
      *(undefined2 *)(extraout_r1 + 4) = uVar1;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      return;
    }
    if (*(int *)(iVar3 + iVar2 * 8) == param_2) break;
    iVar2 = iVar2 + 1;
  }
  uVar1 = FUN_000327a8(param_3);
  *(undefined2 *)(iVar3 + iVar2 * 8 + 4) = uVar1;
  return;
}



/* ===== FUN_00032828 @ 00032828 size=124 ===== */

void FUN_00032828(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = 0;
  if (iVar1 < 1) {
    return;
  }
  do {
    iVar3 = *(int *)(param_1 + 4);
    if (*(int *)(iVar3 + iVar2 * 8) == param_2) {
      if (iVar1 + -1 != iVar2) {
        *(undefined4 *)(iVar3 + iVar2 * 8) = *(undefined4 *)(iVar3 + (iVar1 + 0x1fffffff) * 8);
        *(undefined2 *)(*(int *)(param_1 + 4) + iVar2 * 8 + 4) =
             *(undefined2 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 8 + -4);
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      return;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < iVar1);
  return;
}



/* ===== FUN_000328a4 @ 000328a4 size=28 ===== */

void FUN_000328a4(int param_1)

{
  dbus_free(*(undefined4 *)(param_1 + 4));
  dbus_free(param_1);
  return;
}



/* ===== FUN_000328c0 @ 000328c0 size=76 ===== */

void FUN_000328c0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00032828();
  iVar2 = *(int *)(iVar1 + 0xc) + 7;
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -1;
  if (iVar2 < *(int *)(iVar1 + 0x10) / 2) {
    iVar2 = dbus_realloc(*(undefined4 *)(iVar1 + 4),iVar2 * 8);
    if (iVar2 != 0) {
      *(int *)(iVar1 + 4) = iVar2;
      *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar1 + 0xc);
    }
    return;
  }
  return;
}



/* ===== FUN_000329d4 @ 000329d4 size=148 ===== */

undefined4 FUN_000329d4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined2 uVar1;
  int iVar2;
  int extraout_r1;
  
  if (*(int *)(param_1 + 0x10) <= *(int *)(param_1 + 0xc)) {
    iVar2 = dbus_realloc(*(undefined4 *)(param_1 + 4),(*(int *)(param_1 + 0x10) + 8) * 8);
    if (iVar2 == 0) {
      return 0;
    }
    *(int *)(param_1 + 4) = iVar2;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 8;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (param_4 != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 8) = param_2;
    uVar1 = FUN_000327a8(param_3,*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 8);
    *(undefined2 *)(extraout_r1 + 4) = uVar1;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return 1;
}



/* ===== FUN_00032acc @ 00032acc size=92 ===== */

undefined4 FUN_00032acc(int *param_1,char *param_2)

{
  char cVar1;
  size_t sVar2;
  uint uVar3;
  char *pcVar4;
  
  sVar2 = strlen(param_2);
  uVar3 = param_1[1];
  if (sVar2 <= uVar3) {
    param_2 = param_2 + -1;
    pcVar4 = (char *)(*param_1 + (uVar3 - sVar2));
    do {
      if (pcVar4 == (char *)(*param_1 + uVar3)) {
        return 1;
      }
      cVar1 = *pcVar4;
      param_2 = param_2 + 1;
      pcVar4 = pcVar4 + 1;
    } while (*param_2 == cVar1);
  }
  return 0;
}



/* ===== FUN_00032b28 @ 00032b28 size=48 ===== */

uint FUN_00032b28(int *param_1,uint param_2,uint param_3,uint *param_4)

{
  do {
    param_2 = param_2 - 1;
    if ((int)param_2 < 0) break;
  } while (*(byte *)(*param_1 + param_2) != param_3);
  if (param_4 != (uint *)0x0) {
    *param_4 = param_2;
  }
  return ~param_2 >> 0x1f;
}



/* ===== FUN_00032b58 @ 00032b58 size=144 ===== */

int FUN_00032b58(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar2 = 0;
  piVar5 = *(int **)(DAT_00032be8 + 0x32b6c + DAT_00032bec);
  do {
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + 1;
  } while (*(int *)(*piVar5 + iVar1) != 0);
  iVar2 = dbus_malloc0(iVar2 * 4);
  iVar1 = 0;
  if (iVar2 != 0) {
    do {
      iVar4 = iVar1;
      if (*(int *)(*piVar5 + iVar4) == 0) {
        return iVar2;
      }
      iVar3 = _dbus_strdup();
      *(int *)(iVar2 + iVar4) = iVar3;
      iVar1 = iVar4 + 4;
    } while (iVar3 != 0);
    if (*(int *)(*piVar5 + iVar4) != 0) {
      dbus_free_string_array(iVar2);
      iVar2 = 0;
    }
  }
  return iVar2;
}



/* ===== FUN_00032bf0 @ 00032bf0 size=40 ===== */

void FUN_00032bf0(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 4) != -1) {
    close(*(int *)(param_1 + 4));
  }
  dbus_free(param_1);
  return;
}



/* ===== FUN_00032c18 @ 00032c18 size=180 ===== */

void FUN_00032c18(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  epoll_event *peVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  epoll_event local_418 [64];
  int local_14;
  
  piVar5 = *(int **)(DAT_00032ccc + 0x32c38 + DAT_00032cd0);
  if (0x3f < param_3) {
    param_3 = 0x40;
  }
  local_14 = *piVar5;
  iVar1 = epoll_wait(*(int *)(param_1 + 4),local_418,param_3,param_4);
  if (0 < iVar1) {
    iVar3 = 0;
    peVar2 = local_418;
    do {
      uVar6 = peVar2->events;
      *(uint *)(param_2 + iVar3 * 8) = *(uint *)((int)peVar2 + 8);
      uVar4 = uVar6 & 1;
      if ((uVar6 & 4) != 0) {
        uVar4 = (uint)(short)((ushort)uVar4 | 2);
      }
      if ((uVar6 & 0x10) != 0) {
        uVar4 = uVar4 | 8;
      }
      if ((uVar6 & 8) != 0) {
        uVar4 = uVar4 | 4;
      }
      *(uint *)(param_2 + 4 + iVar3 * 8) = uVar4;
      iVar3 = iVar3 + 1;
      peVar2 = (epoll_event *)((int)peVar2 + 0x10);
    } while (iVar1 != iVar3);
  }
  if (local_14 == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== FUN_00032e04 @ 00032e04 size=252 ===== */

void FUN_00032e04(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  int *piVar5;
  bool bVar6;
  epoll_event local_28;
  int local_14;
  
  bVar6 = param_4 == 0;
  if (bVar6) {
    param_4 = 0x80000000;
  }
  local_28._4_4_ = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_28.data.u64._4_4_ = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piVar5 = *(int **)(DAT_00032f00 + 0x32e24 + DAT_00032f04);
  local_14 = *piVar5;
  if ((!bVar6) && (param_4 = param_3 & 1, (param_3 & 2) != 0)) {
    param_4 = param_4 | 4;
  }
  local_28.events = param_4;
  local_28.data.fd = param_2;
  iVar1 = epoll_ctl(*(int *)(param_1 + 4),1,param_2,&local_28);
  if (iVar1 == 0) {
    uVar2 = 1;
    goto LAB_00032ec0;
  }
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  if (iVar1 != 0xc) {
    if (iVar1 < 0xd) {
      if (iVar1 == 9) {
        iVar1 = DAT_00032f0c + 0x32ee4;
LAB_00032ee0:
        _dbus_warn(iVar1,param_2);
      }
      else {
LAB_00032e90:
        pcVar4 = strerror(iVar1);
        _dbus_warn(DAT_00032f08 + 0x32ea8,param_2,pcVar4);
      }
    }
    else {
      if (iVar1 == 0x11) {
        iVar1 = DAT_00032f10 + 0x32ef8;
        goto LAB_00032ee0;
      }
      if (iVar1 != 0x1c) goto LAB_00032e90;
    }
  }
  uVar2 = 0;
LAB_00032ec0:
  if (local_14 == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



/* ===== FUN_00033014 @ 00033014 size=132 ===== */

int * FUN_00033014(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  piVar1 = (int *)dbus_malloc0(8);
  piVar4 = piVar1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = DAT_00033098 + 0x33038;
    iVar2 = epoll_create1(0x80000);
    piVar1[1] = iVar2;
    if (iVar2 == -1) {
      iVar2 = epoll_create(0x2a);
      piVar1[1] = iVar2;
      uVar3 = fcntl64(iVar2,1,0);
      if (uVar3 != 0xffffffff) {
        fcntl64(piVar1[1],2,uVar3 | 1);
      }
      if (piVar1[1] == -1) {
        piVar4 = (int *)0x0;
        FUN_00032bf0(piVar1);
      }
    }
  }
  return piVar4;
}



/* ===== _fini @ 0003309c size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::printf @ 0004a000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_hash_iter_get_string_key @ 0004a004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_hash_iter_get_string_key(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_server_set_data @ 0004a008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_server_set_data(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setsid @ 0004a00c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t setsid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 0004a010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_string_free @ 0004a014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_string_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_server_unref @ 0004a018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_server_unref(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_hash_iter_remove_entry @ 0004a01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_hash_iter_remove_entry(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_iter_get_basic @ 0004a020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_iter_get_basic(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_list_find_last @ 0004a024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_list_find_last(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_get_unix_user @ 0004a028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_get_unix_user(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_unref @ 0004a02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_unref(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_set_error_valist @ 0004a030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_set_error_valist(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_iter_init_append @ 0004a034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_iter_init_append(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 0004a038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_is_method_call @ 0004a03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_is_method_call(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pipe2 @ 0004a040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pipe2(int *__pipedes,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_type_reader_get_signature @ 0004a044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_type_reader_get_signature(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_delete_file @ 0004a048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_delete_file(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pwrite64 @ 0004a04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t pwrite64(int __fd,void *__buf,size_t __n,__off64_t __offset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::XML_GetErrorCode @ 0004a050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void XML_GetErrorCode(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_move_error @ 0004a054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_move_error(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_get_dispatch_status @ 0004a058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_get_dispatch_status(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_generate_uuid @ 0004a05c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_generate_uuid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 0004a060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_get_adt_audit_session_data @ 0004a064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_get_adt_audit_session_data(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_write_socket @ 0004a068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_write_socket(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_hash_table_free_preallocated_entry @ 0004a06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_hash_table_free_preallocated_entry(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 0004a070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_mem_pool_free @ 0004a074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_mem_pool_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_get_sender @ 0004a078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_get_sender(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_set_error_const @ 0004a07c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_set_error_const(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fcntl64 @ 0004a080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void fcntl64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_iter_append_basic @ 0004a084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_iter_append_basic(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_set_timeout_functions @ 0004a088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_set_timeout_functions(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_hash_iter_get_int_key @ 0004a08c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_hash_iter_get_int_key(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_timeout_restarted @ 0004a090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_timeout_restarted(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_get_path @ 0004a094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_get_path(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_server_set_timeout_functions @ 0004a098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_server_set_timeout_functions(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0004a09c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::epoll_wait @ 0004a0a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_wait(int __epfd,epoll_event *__events,int __maxevents,int __timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_type_reader_next @ 0004a0a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_type_reader_next(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 0004a0a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_get_is_connected @ 0004a0ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_get_is_connected(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_list_get_first @ 0004a0b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_list_get_first(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_string_append_int @ 0004a0b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_string_append_int(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_watch_list_new @ 0004a0b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_watch_list_new(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_hash_iter_get_value @ 0004a0bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_hash_iter_get_value(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_watch_get_socket @ 0004a0c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_watch_get_socket(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::umask @ 0004a0c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__mode_t umask(__mode_t __mask)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_watch_get_flags @ 0004a0c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_watch_get_flags(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_hash_iter_get_uintptr_key @ 0004a0cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_hash_iter_get_uintptr_key(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_list_get_last @ 0004a0d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_list_get_last(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_watch_unref @ 0004a0d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_watch_unref(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0004a0d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::epoll_create1 @ 0004a0dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_create1(int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_get_destination @ 0004a0e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_get_destination(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::XML_GetCurrentLineNumber @ 0004a0e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void XML_GetCurrentLineNumber(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_realloc @ 0004a0e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_realloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0004a0ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_server_disconnect @ 0004a0f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_server_disconnect(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_ref @ 0004a0f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_ref(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_get_args @ 0004a0f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_get_args(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_credentials_new_from_current_process @ 0004a0fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_credentials_new_from_current_process(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_list_clear @ 0004a100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_list_clear(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_string_append @ 0004a104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_string_append(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_type_to_string @ 0004a108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_type_to_string(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_strdup @ 0004a10c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_strdup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 0004a110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_watch_set_oom_last_time @ 0004a114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_watch_set_oom_last_time(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_uuid_encode @ 0004a118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_uuid_encode(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_set_unix_user_function @ 0004a11c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_set_unix_user_function(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_register_shutdown_func @ 0004a120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_register_shutdown_func(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_read @ 0004a124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_read(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0004a128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_list_insert_before_link @ 0004a12c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_list_insert_before_link(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_watch_new @ 0004a130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_watch_new(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_getenv @ 0004a134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_getenv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_string_find_eol @ 0004a138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_string_find_eol(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_get_reply_serial @ 0004a13c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_get_reply_serial(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getgrnam_r @ 0004a140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getgrnam_r(char *__name,group *__resultbuf,char *__buffer,size_t __buflen,group **__result)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_watch_list_set_functions @ 0004a144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_watch_list_set_functions(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_timeout_restart @ 0004a148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_timeout_restart(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sysconf @ 0004a14c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long sysconf(int __name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_set_error_name @ 0004a150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_set_error_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_list_get_stats @ 0004a154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_list_get_stats(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_string_copy @ 0004a158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_string_copy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_exit @ 0004a15c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0004a160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_concat_dir_and_file @ 0004a164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_concat_dir_and_file(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::waitpid @ 0004a168 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_user_database_lookup @ 0004a16c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_user_database_lookup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_get_signature @ 0004a170 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_get_signature(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_list_prepend_link @ 0004a174 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_list_prepend_link(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_credentials_unref @ 0004a178 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_credentials_unref(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_get_serial @ 0004a17c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_get_serial(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_unref @ 0004a180 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_unref(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_set_sender @ 0004a184 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_set_sender(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0004a188 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_string_validate_utf8 @ 0004a18c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_string_validate_utf8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_get_outgoing_size @ 0004a190 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_get_outgoing_size(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_watch_list_remove_watch @ 0004a194 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_watch_list_remove_watch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_set_max_received_size @ 0004a198 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_set_max_received_size(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_iter_close_container @ 0004a19c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_iter_close_container(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_geteuid @ 0004a1a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_geteuid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_poll @ 0004a1a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_poll(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_pipe_is_stdout_or_stderr @ 0004a1a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_pipe_is_stdout_or_stderr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_error_free @ 0004a1ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_error_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_hash_table_insert_string @ 0004a1b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_hash_table_insert_string(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_warn @ 0004a1b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_warn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat64 @ 0004a1b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fork @ 0004a1bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setuid @ 0004a1c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setuid(__uid_t __uid)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 0004a1c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_new_method_return @ 0004a1c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_new_method_return(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_connection_get_linux_security_label @ 0004a1cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_connection_get_linux_security_label(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_close @ 0004a1d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_close(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_string_starts_with_c_str @ 0004a1d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_string_starts_with_c_str(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::XML_GetCurrentColumnNumber @ 0004a1d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void XML_GetCurrentColumnNumber(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_get_monotonic_time @ 0004a1dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_get_monotonic_time(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::XML_SetCharacterDataHandler @ 0004a1e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void XML_SetCharacterDataHandler(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open64 @ 0004a1e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_list_alloc_link @ 0004a1e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_list_alloc_link(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_set_no_reply @ 0004a1ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_set_no_reply(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_string_append_printf_valist @ 0004a1f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_string_append_printf_valist(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_get_error_name @ 0004a1f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_get_error_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::XML_ParserFree @ 0004a1f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void XML_ParserFree(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_connection_set_pending_fds_function @ 0004a1fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_connection_set_pending_fds_function(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_server_allocate_data_slot @ 0004a200 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_server_allocate_data_slot(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_validate_interface @ 0004a204 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_validate_interface(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_malloc0 @ 0004a208 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_malloc0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_set_max_message_unix_fds @ 0004a20c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_set_max_message_unix_fds(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getrlimit64 @ 0004a210 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */

int getrlimit64(__rlimit_resource_t __resource,rlimit64 *__rlimits)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::XML_SetUserData @ 0004a214 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void XML_SetUserData(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::closedir @ 0004a218 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_hash_table_lookup_uintptr @ 0004a21c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_hash_table_lookup_uintptr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_user_database_get_uid @ 0004a224 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_user_database_get_uid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_iter_append_fixed_array @ 0004a228 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_iter_append_fixed_array(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_watch_get_enabled @ 0004a22c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_watch_get_enabled(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_string_equal_c_str @ 0004a230 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_string_equal_c_str(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_set_max_received_unix_fds @ 0004a234 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_set_max_received_unix_fds(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_string_skip_white @ 0004a238 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_string_skip_white(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_fd_set_close_on_exec @ 0004a23c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_fd_set_close_on_exec(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_set_allow_anonymous @ 0004a240 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_set_allow_anonymous(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_hash_table_insert_int @ 0004a244 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_hash_table_insert_int(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0004a248 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sigaction @ 0004a24c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_hash_iter_next @ 0004a250 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_hash_iter_next(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_malloc @ 0004a254 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_malloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::XML_SetHashSalt @ 0004a258 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void XML_SetHashSalt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_hash_table_remove_string @ 0004a25c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_hash_table_remove_string(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_user_database_get_username @ 0004a260 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_user_database_get_username(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::inotify_init1 @ 0004a264 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int inotify_init1(int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_pipe_init_stdout @ 0004a268 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_pipe_init_stdout(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_timeout_get_interval @ 0004a26c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_timeout_get_interval(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::XML_Parse @ 0004a274 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void XML_Parse(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_list_get_last_link @ 0004a278 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_list_get_last_link(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_server_get_data @ 0004a27c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_server_get_data(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_get_unix_process_id @ 0004a284 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_get_unix_process_id(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_list_pop_first @ 0004a288 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_list_pop_first(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_hash_table_remove_int @ 0004a28c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_hash_table_remove_int(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_string_set_length @ 0004a294 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_string_set_length(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_hash_table_insert_string_preallocated @ 0004a298 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_hash_table_insert_string_preallocated(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_server_get_address @ 0004a29c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_server_get_address(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_get_outgoing_unix_fds @ 0004a2a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_get_outgoing_unix_fds(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_watch_invalidate @ 0004a2a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_watch_invalidate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_hash_table_to_array @ 0004a2a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_hash_table_to_array(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_has_signature @ 0004a2ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_has_signature(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_type_reader_init_types_only @ 0004a2b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_type_reader_init_types_only(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_list_remove_link @ 0004a2b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_list_remove_link(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_string_copy_data @ 0004a2b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_string_copy_data(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_mem_pool_dealloc @ 0004a2bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_mem_pool_dealloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_validate_path @ 0004a2c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_validate_path(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_iter_abandon_container @ 0004a2c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_iter_abandon_container(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::epoll_ctl @ 0004a2c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_ctl(int __epfd,int __op,int __fd,epoll_event *__event)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_hash_table_new @ 0004a2cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_hash_table_new(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_watch_ref @ 0004a2d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_watch_ref(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_pipe_write @ 0004a2d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_pipe_write(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_list_unlink @ 0004a2d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_list_unlink(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_type_reader_get_current_type @ 0004a2dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_type_reader_get_current_type(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_has_path @ 0004a2e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_has_path(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_list_remove @ 0004a2e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_list_remove(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_list_length_is_one @ 0004a2e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_list_length_is_one(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::epoll_create @ 0004a2ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_create(int __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::XML_ParserCreate_MM @ 0004a2f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void XML_ParserCreate_MM(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_watch_get_pollable @ 0004a2f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_watch_get_pollable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 0004a2f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_new_signal @ 0004a2fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_new_signal(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_list_free_link @ 0004a300 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_list_free_link(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_timeout_unref @ 0004a304 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_timeout_unref(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_user_database_get_system @ 0004a308 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_user_database_get_system(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_user_database_unlock_system @ 0004a30c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_user_database_unlock_system(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_new_method_call @ 0004a310 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_new_method_call(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_timeout_new @ 0004a314 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_timeout_new(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_credentials_to_string_append @ 0004a318 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_credentials_to_string_append(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_server_set_auth_mechanisms @ 0004a31c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_server_set_auth_mechanisms(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_iter_next @ 0004a320 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_iter_next(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_iter_open_container @ 0004a324 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_iter_open_container(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::geteuid @ 0004a328 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t geteuid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_list_get_length @ 0004a32c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_list_get_length(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_server_set_new_connection_function @ 0004a330 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_server_set_new_connection_function(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_timeout_get_enabled @ 0004a334 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_timeout_get_enabled(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_mem_pool_alloc @ 0004a338 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_mem_pool_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_timeout_disable @ 0004a33c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_timeout_disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_list_insert_after_link @ 0004a340 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_list_insert_after_link(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_set_max_message_size @ 0004a344 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_set_max_message_size(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::inotify_init @ 0004a348 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int inotify_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_ensure_standard_fds @ 0004a34c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_ensure_standard_fds(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_hash_table_from_array @ 0004a350 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_hash_table_from_array(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_has_destination @ 0004a354 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_has_destination(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_group_info_unref @ 0004a358 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_group_info_unref(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::opendir @ 0004a35c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_list_append_link @ 0004a360 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_list_append_link(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_set_windows_user_function @ 0004a364 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_set_windows_user_function(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_string_parse_int @ 0004a368 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_string_parse_int(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_getpid @ 0004a36c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_getpid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 0004a370 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_hash_table_insert_uintptr @ 0004a374 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_hash_table_insert_uintptr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_type_from_string @ 0004a378 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_type_from_string(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_string_equal @ 0004a37c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_string_equal(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_set_reply_serial @ 0004a380 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_set_reply_serial(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::chdir @ 0004a384 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int chdir(char *__path)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_hash_table_unref @ 0004a388 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_hash_table_unref(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0004a38c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_hash_table_lookup_string @ 0004a390 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_hash_table_lookup_string(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_watch_handle @ 0004a394 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_watch_handle(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_watch_get_oom_last_time @ 0004a398 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_watch_get_oom_last_time(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_connection_get_pending_fds_count @ 0004a39c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_connection_get_pending_fds_count(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_flush_caches @ 0004a3a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_flush_caches(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0004a3a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_remove_filter @ 0004a3a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_remove_filter(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::access @ 0004a3ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_allocate_data_slot @ 0004a3b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_allocate_data_slot(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_string_parse_uint @ 0004a3b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_string_parse_uint(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_pipe_is_valid @ 0004a3b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_pipe_is_valid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_get_member @ 0004a3bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_get_member(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_validate_member @ 0004a3c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_validate_member(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_strerror @ 0004a3c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_strerror(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_server_set_watch_functions @ 0004a3c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_server_set_watch_functions(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_homedir_from_current_process @ 0004a3cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_homedir_from_current_process(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_ref @ 0004a3d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_ref(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_send_preallocated @ 0004a3d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_send_preallocated(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_hash_iter_init @ 0004a3d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_hash_iter_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_socketpair @ 0004a3dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_socketpair(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_error_init @ 0004a3e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_error_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_contains_unix_fds @ 0004a3e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_contains_unix_fds(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_string_copy_len @ 0004a3e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_string_copy_len(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_pipe_init @ 0004a3ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_pipe_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::XML_ErrorString @ 0004a3f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void XML_ErrorString(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_set_destination @ 0004a3f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_set_destination(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_user_database_lock_system @ 0004a3f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_user_database_lock_system(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 0004a3fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setgroups @ 0004a400 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setgroups(size_t __n,__gid_t *__groups)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_free_preallocated_send @ 0004a404 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_free_preallocated_send(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_server_toggle_all_watches @ 0004a408 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_server_toggle_all_watches(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_close @ 0004a40c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_close(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_timeout_handle @ 0004a410 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_timeout_handle(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_iter_get_arg_type @ 0004a414 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_iter_get_arg_type(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_validate_bus_namespace @ 0004a418 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_validate_bus_namespace(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_list_get_first_link @ 0004a41c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_list_get_first_link(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_getuid @ 0004a420 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_getuid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pipe @ 0004a424 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pipe(int *__pipedes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_init_system_log @ 0004a428 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_init_system_log(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_logv @ 0004a42c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_logv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_set_error @ 0004a430 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_set_error(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_list_remove_last @ 0004a434 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_list_remove_last(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_get_no_reply @ 0004a438 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_get_no_reply(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_hash_table_lookup_int @ 0004a43c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_hash_table_lookup_int(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_string_steal_data @ 0004a440 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_string_steal_data(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_get_data @ 0004a444 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_get_data(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::inotify_add_watch @ 0004a448 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int inotify_add_watch(int __fd,char *__name,uint32_t __mask)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_error_is_set @ 0004a44c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_error_is_set(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_sleep_milliseconds @ 0004a450 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_sleep_milliseconds(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 0004a454 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 0004a458 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_free_data_slot @ 0004a45c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_free_data_slot(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_preallocate_send @ 0004a460 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_preallocate_send(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_server_free_data_slot @ 0004a464 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_server_free_data_slot(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::XML_SetElementHandler @ 0004a468 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void XML_SetElementHandler(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_log @ 0004a46c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_log(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_get_windows_user @ 0004a470 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_get_windows_user(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_auth_dump_supported_mechanisms @ 0004a474 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_auth_dump_supported_mechanisms(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_list_prepend @ 0004a478 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_list_prepend(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_iter_recurse @ 0004a47c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_iter_recurse(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_free_string_array @ 0004a480 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_free_string_array(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_hash_table_get_n_entries @ 0004a484 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_hash_table_get_n_entries(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sigemptyset @ 0004a488 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigemptyset(sigset_t *__set)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_pipe_invalidate @ 0004a48c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_pipe_invalidate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_mem_pool_new @ 0004a490 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_mem_pool_new(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getgrgid_r @ 0004a494 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getgrgid_r(__gid_t __gid,group *__resultbuf,char *__buffer,size_t __buflen,group **__result)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_new_error @ 0004a498 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_new_error(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_ensure_directory @ 0004a49c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_ensure_directory(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_set_data @ 0004a4a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_set_data(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_get_interface @ 0004a4a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_get_interface(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_has_sender @ 0004a4a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_has_sender(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_timeout_needs_restart @ 0004a4ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_timeout_needs_restart(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_iter_init @ 0004a4b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_iter_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kill @ 0004a4b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int kill(__pid_t __pid,int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0004a4b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_split_paths_and_append @ 0004a4bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_split_paths_and_append(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_set_route_peer_messages @ 0004a4c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_set_route_peer_messages(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_auth_is_supported_mechanism @ 0004a4c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_auth_is_supported_mechanism(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_hash_table_remove_uintptr @ 0004a4c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_hash_table_remove_uintptr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_list_foreach @ 0004a4cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_list_foreach(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_can_send_type @ 0004a4d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_can_send_type(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_list_pop_first_link @ 0004a4d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_list_pop_first_link(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_set_dispatch_status_function @ 0004a4d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_set_dispatch_status_function(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_add_filter @ 0004a4dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_add_filter(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_get_auto_start @ 0004a4e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_get_auto_start(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 0004a4e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_watch_list_free @ 0004a4e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_watch_list_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_new @ 0004a4ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_new(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getuid @ 0004a4f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t getuid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_server_get_is_connected @ 0004a4f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_server_get_is_connected(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_list_insert_after @ 0004a4f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_list_insert_after(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::execve @ 0004a4fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execve(char *__path,char **__argv,char **__envp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_append_args @ 0004a500 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_append_args(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0004a504 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setgid @ 0004a508 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setgid(__gid_t __gid)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_file_get_contents @ 0004a50c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_file_get_contents(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 0004a510 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_error_has_name @ 0004a514 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_error_has_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_pipe_close @ 0004a518 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_pipe_close(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_is_signal @ 0004a51c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_is_signal(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_list_append @ 0004a520 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_list_append(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readdir64 @ 0004a524 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent64 * readdir64(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setrlimit64 @ 0004a528 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */

int setrlimit64(__rlimit_resource_t __resource,rlimit64 *__rlimits)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_free @ 0004a52c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_string_append_printf @ 0004a530 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_string_append_printf(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_get_type @ 0004a534 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_get_type(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_connection_get_stats @ 0004a538 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_connection_get_stats(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_list_pop_last @ 0004a53c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_list_pop_last(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_set_watch_functions @ 0004a540 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_set_watch_functions(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_close_socket @ 0004a544 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_close_socket(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_list_copy @ 0004a548 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_list_copy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_read_socket @ 0004a54c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_read_socket(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fdopen @ 0004a550 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fdopen(int __fd,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_dispatch @ 0004a554 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_dispatch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_string_init_const @ 0004a558 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_string_init_const(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_string_init @ 0004a560 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_string_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_error_from_errno @ 0004a564 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_error_from_errno(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_watch_list_add_watch @ 0004a568 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_watch_list_add_watch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0004a56c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_validate_bus_name @ 0004a570 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_validate_bus_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_get_local_machine_uuid_encoded @ 0004a574 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_get_local_machine_uuid_encoded(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0004a578 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_string_append_len @ 0004a57c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_string_append_len(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::inotify_rm_watch @ 0004a580 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int inotify_rm_watch(int __fd,int __wd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_string_append_byte @ 0004a584 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_string_append_byte(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_hash_table_preallocate_entry @ 0004a588 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_hash_table_preallocate_entry(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_is_a_number @ 0004a58c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_is_a_number(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_server_listen @ 0004a590 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_server_listen(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


