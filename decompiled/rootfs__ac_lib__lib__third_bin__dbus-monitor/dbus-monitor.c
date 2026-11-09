// dbus-monitor — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 0001117c size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::setvbuf @ 000111a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setvbuf(FILE *__stream,char *__buf,int __modes,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setvbuf_00023ec4)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::dbus_message_iter_init_append @ 000111ac size=12 ===== */

void dbus_message_iter_init_append(void)

{
  (*(code *)PTR_dbus_message_iter_init_append_00023ec8)();
  return;
}



/* ===== <EXTERNAL>::dbus_error_init @ 000111b8 size=12 ===== */

void dbus_error_init(void)

{
  (*(code *)PTR_dbus_error_init_00023ecc)();
  return;
}



/* ===== <EXTERNAL>::abort @ 000111c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00023ed0)();
  return;
}



/* ===== <EXTERNAL>::realloc @ 000111d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_00023ed4)(__ptr);
  return pvVar1;
}



/* ===== <EXTERNAL>::write @ 000111e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_00023edc)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::dbus_error_is_set @ 000111f4 size=12 ===== */

void dbus_error_is_set(void)

{
  (*(code *)PTR_dbus_error_is_set_00023ee0)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_is_signal @ 00011200 size=12 ===== */

void dbus_message_is_signal(void)

{
  (*(code *)PTR_dbus_message_is_signal_00023ee4)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_iter_open_container @ 0001120c size=12 ===== */

void dbus_message_iter_open_container(void)

{
  (*(code *)PTR_dbus_message_iter_open_container_00023ee8)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_get_destination @ 00011218 size=12 ===== */

void dbus_message_get_destination(void)

{
  (*(code *)PTR_dbus_message_get_destination_00023eec)();
  return;
}



/* ===== <EXTERNAL>::snprintf @ 00011224 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00023ef0)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::dbus_message_iter_append_basic @ 00011230 size=12 ===== */

void dbus_message_iter_append_basic(void)

{
  (*(code *)PTR_dbus_message_iter_append_basic_00023ef4)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0001123c size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00023ef8)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_get_serial @ 00011248 size=12 ===== */

void dbus_message_get_serial(void)

{
  (*(code *)PTR_dbus_message_get_serial_00023efc)();
  return;
}



/* ===== <EXTERNAL>::strcmp @ 00011254 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00023f00)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00011260 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00023f04)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::malloc @ 0001126c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00023f08)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::fflush @ 00011278 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00023f0c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::dbus_connection_add_filter @ 00011284 size=12 ===== */

void dbus_connection_add_filter(void)

{
  (*(code *)PTR_dbus_connection_add_filter_00023f10)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_iter_next @ 00011290 size=12 ===== */

void dbus_message_iter_next(void)

{
  (*(code *)PTR_dbus_message_iter_next_00023f14)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_iter_get_basic @ 0001129c size=12 ===== */

void dbus_message_iter_get_basic(void)

{
  (*(code *)PTR_dbus_message_iter_get_basic_00023f18)();
  return;
}



/* ===== <EXTERNAL>::dbus_connection_send_with_reply_and_block @ 000112a8 size=12 ===== */

void dbus_connection_send_with_reply_and_block(void)

{
  (*(code *)PTR_dbus_connection_send_with_reply_and_block_00023f1c)();
  return;
}



/* ===== <EXTERNAL>::dbus_bus_register @ 000112b4 size=12 ===== */

void dbus_bus_register(void)

{
  (*(code *)PTR_dbus_bus_register_00023f20)();
  return;
}



/* ===== <EXTERNAL>::dbus_connection_set_route_peer_messages @ 000112c0 size=12 ===== */

void dbus_connection_set_route_peer_messages(void)

{
  (*(code *)PTR_dbus_connection_set_route_peer_messages_00023f24)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_new_method_call @ 000112cc size=12 ===== */

void dbus_message_new_method_call(void)

{
  (*(code *)PTR_dbus_message_new_method_call_00023f28)();
  return;
}



/* ===== <EXTERNAL>::dbus_error_free @ 000112d8 size=12 ===== */

void dbus_error_free(void)

{
  (*(code *)PTR_dbus_error_free_00023f2c)();
  return;
}



/* ===== <EXTERNAL>::_dbus_get_real_time @ 000112e4 size=12 ===== */

void _dbus_get_real_time(void)

{
  (*(code *)PTR__dbus_get_real_time_00023f30)();
  return;
}



/* ===== <EXTERNAL>::getsockname @ 000112f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getsockname(int __fd,sockaddr *__addr,socklen_t *__len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getsockname_00023f34)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::perror @ 000112fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_00023f38)(__s);
  return;
}



/* ===== <EXTERNAL>::dbus_connection_open @ 00011308 size=12 ===== */

void dbus_connection_open(void)

{
  (*(code *)PTR_dbus_connection_open_00023f3c)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_iter_init @ 00011314 size=12 ===== */

void dbus_message_iter_init(void)

{
  (*(code *)PTR_dbus_message_iter_init_00023f40)();
  return;
}



/* ===== <EXTERNAL>::dbus_malloc @ 00011320 size=12 ===== */

void dbus_malloc(void)

{
  (*(code *)PTR_dbus_malloc_00023f44)();
  return;
}



/* ===== <EXTERNAL>::printf @ 0001132c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00023f48)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::dbus_message_marshal @ 00011338 size=12 ===== */

void dbus_message_marshal(void)

{
  (*(code *)PTR_dbus_message_marshal_00023f4c)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_iter_get_fixed_array @ 00011344 size=12 ===== */

void dbus_message_iter_get_fixed_array(void)

{
  (*(code *)PTR_dbus_message_iter_get_fixed_array_00023f50)();
  return;
}



/* ===== <EXTERNAL>::putchar @ 00011350 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_00023f54)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 0001135c size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00023f58)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00011368 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00023f5c)();
  return;
}



/* ===== <EXTERNAL>::exit @ 00011374 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00023f60)(__status);
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00011380 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00023f64)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::dbus_bus_get @ 0001138c size=12 ===== */

void dbus_bus_get(void)

{
  (*(code *)PTR_dbus_bus_get_00023f68)();
  return;
}



/* ===== <EXTERNAL>::dbus_error_has_name @ 00011398 size=12 ===== */

void dbus_error_has_name(void)

{
  (*(code *)PTR_dbus_error_has_name_00023f6c)();
  return;
}



/* ===== <EXTERNAL>::close @ 000113a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00023f70)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::dbus_message_unref @ 000113b0 size=12 ===== */

void dbus_message_unref(void)

{
  (*(code *)PTR_dbus_message_unref_00023f74)();
  return;
}



/* ===== <EXTERNAL>::dbus_connection_read_write_dispatch @ 000113bc size=12 ===== */

void dbus_connection_read_write_dispatch(void)

{
  (*(code *)PTR_dbus_connection_read_write_dispatch_00023f78)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_get_type @ 000113c8 size=12 ===== */

void dbus_message_get_type(void)

{
  (*(code *)PTR_dbus_message_get_type_00023f7c)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_get_path @ 000113d4 size=12 ===== */

void dbus_message_get_path(void)

{
  (*(code *)PTR_dbus_message_get_path_00023f80)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 000113e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00023f84)();
  return piVar1;
}



/* ===== <EXTERNAL>::fputs @ 000113ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_00023f88)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::getpeername @ 000113f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getpeername(int __fd,sockaddr *__addr,socklen_t *__len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getpeername_00023f8c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::dbus_message_get_reply_serial @ 00011404 size=12 ===== */

void dbus_message_get_reply_serial(void)

{
  (*(code *)PTR_dbus_message_get_reply_serial_00023f90)();
  return;
}



/* ===== <EXTERNAL>::dbus_bus_add_match @ 00011410 size=12 ===== */

void dbus_bus_add_match(void)

{
  (*(code *)PTR_dbus_bus_add_match_00023f94)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_get_interface @ 0001141c size=12 ===== */

void dbus_message_get_interface(void)

{
  (*(code *)PTR_dbus_message_get_interface_00023f98)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_get_member @ 00011428 size=12 ===== */

void dbus_message_get_member(void)

{
  (*(code *)PTR_dbus_message_get_member_00023f9c)();
  return;
}



/* ===== <EXTERNAL>::free @ 00011434 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00023fa0)(__ptr);
  return;
}



/* ===== <EXTERNAL>::dbus_message_iter_get_arg_type @ 00011440 size=12 ===== */

void dbus_message_iter_get_arg_type(void)

{
  (*(code *)PTR_dbus_message_iter_get_arg_type_00023fa4)();
  return;
}



/* ===== <EXTERNAL>::dbus_free @ 0001144c size=12 ===== */

void dbus_free(void)

{
  (*(code *)PTR_dbus_free_00023fa8)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_iter_recurse @ 00011458 size=12 ===== */

void dbus_message_iter_recurse(void)

{
  (*(code *)PTR_dbus_message_iter_recurse_00023fac)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_get_error_name @ 00011464 size=12 ===== */

void dbus_message_get_error_name(void)

{
  (*(code *)PTR_dbus_message_get_error_name_00023fb0)();
  return;
}



/* ===== <EXTERNAL>::puts @ 00011470 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00023fb4)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::fstat64 @ 0001147c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat64(int __fd,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fstat64_00023fb8)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::dbus_message_get_sender @ 00011488 size=12 ===== */

void dbus_message_get_sender(void)

{
  (*(code *)PTR_dbus_message_get_sender_00023fbc)();
  return;
}



/* ===== <EXTERNAL>::inet_ntop @ 00011494 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * inet_ntop(int __af,void *__cp,char *__buf,socklen_t __len)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_inet_ntop_00023fc0)(__af);
  return pcVar1;
}



/* ===== <EXTERNAL>::memcpy @ 000114a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00023fc4)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::strlen @ 000114ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00023fc8)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 000114b8 size=12 ===== */

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00023fcc)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_iter_close_container @ 000114c4 size=12 ===== */

void dbus_message_iter_close_container(void)

{
  (*(code *)PTR_dbus_message_iter_close_container_00023fd0)();
  return;
}



/* ===== FUN_000114d0 @ 000114d0 size=1720 ===== */

void FUN_000114d0(int param_1,undefined4 *param_2)

{
  char *__s1;
  undefined4 *puVar1;
  undefined4 uVar2;
  char *__s;
  size_t sVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *__s2;
  char *__s2_00;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  int local_e4;
  int local_e0;
  int *local_dc;
  int local_d8;
  size_t local_d4;
  undefined4 local_c0;
  undefined1 auStack_bc [4];
  undefined4 local_b8;
  undefined4 local_ac;
  undefined4 uStack_a8;
  uint local_a4;
  undefined4 uStack_a0;
  undefined1 auStack_9c [56];
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_2c;
  
  iVar8 = DAT_00011b88 + 0x114f0;
  puVar7 = (undefined1 *)0x0;
  iVar9 = 1;
  puVar11 = (undefined4 *)0x0;
  local_2c = **(undefined4 **)(iVar8 + DAT_00011b8c);
  puVar12 = (undefined1 *)(DAT_00011b90 + 0x11510);
  setvbuf((FILE *)**(undefined4 **)(iVar8 + DAT_00011b94),(char *)0x0,1,0);
  local_dc = (int *)0x0;
  pcVar6 = (char *)(DAT_00011b98 + 0x11538);
  local_e0 = 0;
  __s2 = (char *)(DAT_00011b9c + 0x11548);
  local_e4 = 0;
  __s2_00 = (char *)(DAT_00011ba0 + 71000);
  local_d8 = 0;
LAB_0001155c:
  if (iVar9 < param_1) {
    __s1 = (char *)param_2[iVar9];
    iVar10 = strcmp(__s1,pcVar6);
    if (iVar10 != 0) goto LAB_000115fc;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = (undefined1 *)0x1;
      local_d8 = 1;
    }
    else {
      do {
        uVar2 = *param_2;
        while( true ) {
          FUN_00012384(uVar2);
LAB_000115fc:
          iVar4 = strcmp(__s1,__s2);
          iVar10 = iVar9;
          if (iVar4 == 0) break;
          iVar4 = strcmp(__s1,__s2_00);
          if (iVar4 != 0) goto LAB_00011668;
          uVar2 = *param_2;
          if (puVar7 == (undefined1 *)0x0) {
            iVar10 = iVar9 + 1;
            if (param_1 <= iVar10) {
              uVar5 = 1;
              goto LAB_00011664;
            }
            puVar11 = (undefined4 *)param_2[iVar9 + 1];
            goto LAB_00011658;
          }
        }
      } while (puVar7 != (undefined1 *)0x0);
      local_d8 = 0;
LAB_00011658:
      puVar7 = (undefined1 *)0x1;
      iVar9 = iVar10;
    }
    goto LAB_00011798;
  }
  puVar7 = auStack_bc;
  dbus_error_init(puVar7);
  if (puVar11 == (undefined4 *)0x0) {
    __s1 = (char *)dbus_bus_get(local_d8,puVar7);
    if (__s1 == (char *)0x0) {
      if (local_d8 == 1) {
        puVar11 = (undefined4 *)(DAT_00011bec + 0x11840);
      }
      else {
        puVar11 = (undefined4 *)(DAT_00011be4 + 0x1181c);
      }
      goto LAB_00011818;
    }
  }
  else {
    __s1 = (char *)dbus_connection_open(puVar11);
    if (__s1 == (char *)0x0) {
LAB_00011818:
      puVar1 = *(undefined4 **)(iVar8 + DAT_00011ba4);
      pcVar6 = (char *)(DAT_00011be8 + 0x11830);
      goto LAB_000115b8;
    }
    iVar9 = dbus_bus_register(__s1,puVar7);
    if (iVar9 == 0) {
      puVar1 = *(undefined4 **)(iVar8 + DAT_00011ba4);
      pcVar6 = (char *)(DAT_00011ba8 + 0x115b8);
      goto LAB_000115b8;
    }
  }
  dbus_connection_set_route_peer_messages(__s1,1);
  iVar9 = dbus_connection_add_filter(__s1,puVar12,local_e4,0);
  if (iVar9 == 0) {
    fputs((char *)(DAT_00011bf0 + 0x1187c),(FILE *)**(undefined4 **)(iVar8 + DAT_00011ba4));
    goto LAB_000115c8;
  }
  uStack_a8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_a0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_2 = &local_ac;
  iVar10 = 0;
  local_ac = 0;
  local_a4 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8) | 1;
  local_c0 = 0;
  sVar3 = dbus_message_new_method_call
                    (DAT_00011bfc + 0x118b4,DAT_00011bf8 + 0x118b0,DAT_00011bf4 + 0x118a8,
                     DAT_00011c00 + 0x118c8);
  if (sVar3 == 0) {
    iVar9 = DAT_00011c04 + 0x118d8;
    goto LAB_00011754;
  }
  puVar12 = auStack_9c;
  puVar11 = &local_64;
  dbus_message_iter_init_append(sVar3,puVar12);
  iVar9 = dbus_message_iter_open_container(puVar12,0x61,DAT_00011c08 + 0x11900,puVar11);
  if (iVar9 == 0) {
    iVar9 = DAT_00011c0c + 0x11914;
    goto LAB_00011754;
  }
  for (; local_e0 != iVar10; iVar10 = iVar10 + 1) {
    iVar9 = dbus_message_iter_append_basic(puVar11,0x73,local_dc + iVar10);
    if (iVar9 == 0) {
      iVar9 = DAT_00011c10 + 0x11938;
      goto LAB_00011754;
    }
  }
  iVar9 = dbus_message_iter_close_container(puVar12,puVar11);
  if ((iVar9 == 0) || (iVar9 = dbus_message_iter_append_basic(puVar12,0x75,&local_c0), iVar9 == 0))
  {
    iVar9 = DAT_00011c14 + 0x11968;
    goto LAB_00011754;
  }
  iVar9 = dbus_connection_send_with_reply_and_block(__s1,sVar3,0xffffffff,param_2);
  if (iVar9 == 0) {
    iVar10 = dbus_error_has_name(param_2,DAT_00011c1c + 0x11a54);
    if (iVar10 == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar8 + DAT_00011ba4),(char *)(DAT_00011c24 + 0x11a90),
              local_ac,uStack_a8);
    }
    else {
      fputs((char *)(DAT_00011c20 + 0x11a74),(FILE *)**(undefined4 **)(iVar8 + DAT_00011ba4));
    }
    dbus_error_free(param_2);
  }
  else {
    dbus_message_unref();
  }
  dbus_message_unref(sVar3);
  if (iVar9 == 0) {
    if (local_e0 != 0) {
      iVar9 = 0;
      iVar10 = 0;
LAB_000119c4:
      dbus_bus_add_match(__s1,*local_dc + iVar9,puVar7);
      iVar4 = dbus_error_is_set(puVar7);
      if ((iVar4 != 0) && (iVar9 == 0 && iVar10 == 0)) {
        iVar9 = 0xf;
        dbus_error_free(puVar7);
        dbus_bus_add_match(__s1,*local_dc + 0xf,puVar7);
      }
      iVar4 = dbus_error_is_set(puVar7);
      if (iVar4 == 0) goto LAB_00011a98;
      puVar1 = *(undefined4 **)(iVar8 + DAT_00011ba4);
      puVar11 = (undefined4 *)*local_dc;
      pcVar6 = (char *)(DAT_00011c18 + 0x11a44);
LAB_000115b8:
      fprintf((FILE *)*puVar1,pcVar6,puVar11,local_b8);
      dbus_error_free(puVar7);
      goto LAB_000115c8;
    }
    dbus_bus_add_match(__s1,DAT_00011c30 + 0x11b14,puVar7);
    iVar9 = dbus_error_is_set(puVar7);
    if (iVar9 == 0) goto LAB_00011ab0;
    dbus_error_free(puVar7);
    dbus_bus_add_match(__s1,DAT_00011c34 + 0x11b40,puVar7);
    iVar9 = dbus_error_is_set(puVar7);
    if (iVar9 == 0) goto LAB_00011ab0;
    fprintf((FILE *)**(undefined4 **)(iVar8 + DAT_00011ba4),(char *)(DAT_00011c38 + 0x11b68),
            local_b8);
LAB_000115c8:
    iVar9 = 1;
  }
  else {
LAB_00011ab0:
    if (local_e4 == 2) {
      local_64 = *(undefined4 *)(DAT_00011c28 + 0x11acc);
      uStack_60 = *(undefined4 *)(DAT_00011c28 + 0x11ad0);
      uStack_5c = *(undefined4 *)(DAT_00011c28 + 0x11ad4);
      uStack_58 = *(undefined4 *)(DAT_00011c28 + 0x11ad8);
      local_54 = *(undefined4 *)(DAT_00011c28 + 0x11adc);
      uStack_50 = *(undefined4 *)(DAT_00011c28 + 0x11ae0);
      iVar9 = FUN_00013178(1,puVar11,0x18);
      if (iVar9 == 0) {
        perror((char *)(DAT_00011c2c + 0x11afc));
        goto LAB_000115c8;
      }
    }
    do {
      iVar9 = dbus_connection_read_write_dispatch(__s1,0xffffffff);
    } while (iVar9 != 0);
    iVar9 = 0;
  }
                    /* WARNING: Subroutine does not return */
  exit(iVar9);
LAB_00011664:
  FUN_00011e24(uVar2,uVar5);
LAB_00011668:
  iVar9 = strcmp(__s1,(char *)(DAT_00011bac + 0x11678));
  uVar5 = 0;
  if (iVar9 != 0) {
    iVar4 = strcmp(__s1,(char *)(DAT_00011bb0 + 0x11698));
    iVar9 = iVar10;
    if (iVar4 == 0) {
      puVar12 = (undefined1 *)(DAT_00011bd4 + 0x117bc);
      local_e4 = 0;
      goto LAB_00011798;
    }
    iVar4 = strcmp(__s1,(char *)(DAT_00011bb4 + 0x116b0));
    if (iVar4 == 0) {
      puVar12 = (undefined1 *)(DAT_00011bd8 + 0x117cc);
      local_e4 = 0;
      goto LAB_00011798;
    }
    iVar4 = strcmp(__s1,(char *)(DAT_00011bb8 + 0x116c8));
    if (iVar4 == 0) {
      local_e4 = 1;
      puVar12 = (undefined1 *)(DAT_00011bdc + 0x117e0);
      goto LAB_00011798;
    }
    iVar4 = strcmp(__s1,(char *)(DAT_00011bbc + 0x116e0));
    if (iVar4 == 0) {
      local_e4 = 2;
      puVar12 = (undefined1 *)(DAT_00011be0 + 0x117f4);
      goto LAB_00011798;
    }
    iVar4 = strcmp(__s1,(char *)(DAT_00011bc0 + 0x116f8));
    if (iVar4 == 0) goto LAB_00011798;
    if (*__s1 != '-') goto code_r0x00011710;
    uVar5 = 1;
  }
  uVar2 = *param_2;
  goto LAB_00011664;
code_r0x00011710:
  local_e0 = local_e0 + 1;
  sVar3 = strlen(__s1);
  local_d4 = sVar3 + 0x10;
  sVar3 = local_e0 * 4;
  local_dc = realloc(local_dc,sVar3);
  if (local_dc != (int *)0x0) goto LAB_00011758;
  iVar9 = DAT_00011bc4 + 0x11758;
LAB_00011754:
  while( true ) {
    FUN_0001313c(iVar9);
LAB_00011758:
    __s = malloc(local_d4);
    sVar3 = (int)local_dc + sVar3;
    *(char **)(sVar3 - 4) = __s;
    if (__s != (char *)0x0) break;
    iVar9 = DAT_00011bc8 + 0x1177c;
  }
  snprintf(__s,local_d4,(char *)(DAT_00011bd0 + 0x11794),DAT_00011bcc + 0x11790,__s1);
  iVar9 = iVar10;
LAB_00011798:
  iVar9 = iVar9 + 1;
  goto LAB_0001155c;
LAB_00011a98:
  iVar10 = iVar10 + 1;
  free((void *)*local_dc);
  local_dc = local_dc + 1;
  if (local_e0 == iVar10) goto LAB_00011ab0;
  goto LAB_000119c4;
}



/* ===== entry @ 00011c3c size=80 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00023ed8)
            (*(undefined4 *)((int)&DAT_00011c84 + DAT_00011c90 + DAT_00011c84),param_2,
             &stack0x00000004,*(undefined4 *)((int)&DAT_00011c84 + DAT_00011c8c + DAT_00011c84),
             *(undefined4 *)((int)&DAT_00011c84 + DAT_00011c88 + DAT_00011c84),param_1);
  return;
}



/* ===== FUN_00011c94 @ 00011c94 size=72 ===== */

void FUN_00011c94(void)

{
  code *pcVar1;
  
  if (DAT_00011ce0 + 0x11cac == DAT_00011cdc + 0x11ca4) {
    return;
  }
  pcVar1 = *(code **)(DAT_00011ce4 + 0x11cb4 + DAT_00011ce8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 00011d50 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00011dc4 + 0x11d6c;
  if (*(char *)(DAT_00011dc0 + 0x11d60) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_00011dc8) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_00011dcc + 0x11d8c));
  }
  FUN_00011c94();
  if (*(int *)(iVar1 + DAT_00011dd0) != 0) {
    __deregister_frame_info(DAT_00011dd4 + 0x11dac);
  }
  *(undefined1 *)(DAT_00011dd8 + 0x11dbc) = 1;
  return;
}



/* ===== _INIT_0 @ 00011ddc size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00011e14 + 0x11dec + DAT_00011e18) != 0) {
    __register_frame_info(DAT_00011e20 + 0x11e0c,DAT_00011e1c + 0x11e08);
  }
  if (((DAT_00011d44 + 0x11d04) - (DAT_00011d40 + 0x11cfc) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00011d48 + 0x11d0c + DAT_00011d4c);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== FUN_00011e24 @ 00011e24 size=52 ===== */

void FUN_00011e24(undefined4 param_1,int param_2)

{
  fprintf((FILE *)**(undefined4 **)(DAT_00011e58 + 0x11e34 + DAT_00011e5c),
          (char *)(DAT_00011e60 + 0x11e50),param_1);
                    /* WARNING: Subroutine does not return */
  exit(param_2);
}



/* ===== FUN_00011f88 @ 00011f88 size=404 ===== */

void FUN_00011f88(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  printf((char *)(DAT_0001211c + 0x11fa4),param_1);
  if ((param_5 & 1) != 0) {
    uVar1 = dbus_message_get_serial(param_2);
    printf((char *)(DAT_00012120 + 0x11fc4),uVar1);
  }
  if ((param_5 & 4) != 0) {
    iVar2 = dbus_message_get_sender(param_2);
    if (iVar2 == 0) {
      iVar2 = DAT_0001213c + 0x120ec;
    }
    else {
      iVar2 = dbus_message_get_sender(param_2);
    }
    printf((char *)(DAT_00012124 + 0x11ff4),iVar2);
  }
  if ((param_5 & 8) != 0) {
    iVar2 = dbus_message_get_destination(param_2);
    if (iVar2 == 0) {
      iVar2 = DAT_00012140 + 0x120f8;
    }
    else {
      iVar2 = dbus_message_get_destination(param_2);
    }
    printf((char *)(DAT_00012128 + 0x12024),iVar2);
  }
  if ((param_5 & 2) != 0) {
    uVar1 = dbus_message_get_reply_serial(param_2);
    printf((char *)(DAT_0001212c + 0x12044),uVar1);
  }
  if ((param_5 & 0x10) != 0) {
    iVar2 = dbus_message_get_path(param_2);
    if (iVar2 == 0) {
      iVar2 = DAT_00012144 + 0x12104;
    }
    else {
      iVar2 = dbus_message_get_path(param_2);
    }
    printf((char *)(DAT_00012130 + 0x12074),iVar2);
  }
  if ((param_5 & 0x20) != 0) {
    iVar2 = dbus_message_get_interface(param_2);
    if (iVar2 == 0) {
      iVar2 = DAT_00012148 + 74000;
    }
    else {
      iVar2 = dbus_message_get_interface(param_2);
    }
    printf((char *)(DAT_00012134 + 0x120a4),iVar2);
  }
  if ((param_5 & 0x40) != 0) {
    iVar2 = dbus_message_get_member(param_2);
    if (iVar2 == 0) {
      iVar2 = (int)&DAT_0001211c + DAT_0001214c;
    }
    else {
      iVar2 = dbus_message_get_member(param_2);
    }
    printf((char *)(DAT_00012138 + 0x120d4),iVar2);
  }
  putchar(10);
  return;
}



/* ===== FUN_000122e8 @ 000122e8 size=140 ===== */

void FUN_000122e8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  
  piVar2 = *(int **)(DAT_00012374 + 0x12308 + DAT_00012378);
  local_1c = 0;
  local_14 = *piVar2;
  local_18 = 0;
  _dbus_get_real_time(&local_1c,&local_18,DAT_00012378,local_14,param_1);
  FUN_00012f28(param_2,0,local_1c,local_18);
  iVar1 = dbus_message_is_signal(param_2,DAT_00012380 + 0x12348,DAT_0001237c + 0x12344);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  if (local_14 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00012384 @ 00012384 size=64 ===== */

void FUN_00012384(undefined4 param_1)

{
  int iVar1;
  int unaff_r6;
  undefined1 in_ZR;
  
  fputs((char *)(iRam000123c0 + 0x123ac),
        (FILE *)**(undefined4 **)(iRam000123b8 + 0x12394 + iRam000123bc));
  iVar1 = FUN_00011e24(param_1,1);
  do {
    if ((bool)in_ZR) {
      iVar1 = unaff_r6 * 0x123c8;
    }
    in_ZR = iVar1 + -1 == 3;
    switch(iVar1 + -1) {
    case 0:
      iVar1 = DAT_00012420 + 0x123f0;
      break;
    case 1:
      iVar1 = DAT_00012424 + 0x123fc;
      break;
    case 2:
      iVar1 = DAT_00012428 + 0x12408;
      break;
    case 3:
      iVar1 = (int)&DAT_00012420 + DAT_00012430;
      break;
    default:
      iVar1 = DAT_0001242c + 0x12414;
    }
  } while( true );
}



/* ===== FUN_000123c4 @ 000123c4 size=92 ===== */

void FUN_000123c4(undefined4 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  switch(param_1) {
  case 1:
                    /* WARNING: Could not recover jumptable at 0x000123ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(DAT_00012420 + 0x123f0);
    return;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x000123f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(DAT_00012424 + 0x123fc);
    return;
  case 3:
                    /* WARNING: Could not recover jumptable at 0x00012404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(DAT_00012428 + 0x12408);
    return;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x0001241c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((int)&DAT_00012420 + DAT_00012430);
    return;
  default:
                    /* WARNING: Could not recover jumptable at 0x00012410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(DAT_0001242c + 0x12414);
    return;
  }
}



/* ===== FUN_00012434 @ 00012434 size=40 ===== */

void FUN_00012434(int param_1)

{
  char *__format;
  
  __format = (char *)(DAT_0001245c + 0x12448);
  for (; 0 < param_1; param_1 = param_1 + -1) {
    printf(__format);
  }
  return;
}



/* ===== FUN_00012460 @ 00012460 size=2520 ===== */

void FUN_00012460(undefined4 param_1,int param_2,int param_3)

{
  byte *pbVar1;
  socklen_t sVar2;
  void *pvVar3;
  int iVar4;
  void *__dest;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *__format;
  char *pcVar8;
  undefined4 extraout_r1;
  undefined4 uVar9;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  int extraout_r2;
  int *piVar10;
  uint uVar11;
  int extraout_r3;
  uint uVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  int local_1d4;
  void *local_1d0;
  socklen_t local_1cc;
  stat64 local_1c8;
  sockaddr local_15c [8];
  sockaddr asStack_dc [8];
  char acStack_5c [48];
  int local_2c;
  
  iVar13 = param_3 + 1;
  piVar10 = *(int **)(DAT_00012e38 + 0x12474 + DAT_00012e3c);
  local_2c = *piVar10;
  uVar11 = (iVar13 * -3 + 0x50) / 3;
  if (uVar11 < 8) {
    uVar11 = 8;
  }
LAB_000124b0:
  pvVar3 = (void *)dbus_message_iter_get_arg_type(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00012434(param_3);
    switch(pvVar3) {
    case (void *)0x61:
      dbus_message_iter_recurse(param_1,&local_1c8);
      iVar4 = dbus_message_iter_get_arg_type(&local_1c8);
      if (iVar4 == 0x79) {
        dbus_message_iter_get_fixed_array(&local_1c8,&local_1d0,&local_1cc);
        pvVar3 = local_1d0;
        iVar5 = 0;
        iVar4 = local_1cc - 1;
        uVar12 = local_1cc;
        do {
          if ((int)uVar12 <= iVar5) {
            if ((0 < (int)uVar12) && (*(char *)((int)pvVar3 + iVar4) == '\0')) {
              pcVar8 = (char *)(DAT_00012e98 + 0x1283c);
              goto LAB_0001264c;
            }
            __dest = (void *)dbus_malloc(uVar12 + 1);
            sVar2 = local_1cc;
            if (__dest != (void *)0x0) {
              memcpy(__dest,local_1d0,local_1cc);
              iVar4 = DAT_00012e9c;
              *(undefined1 *)((int)__dest + sVar2) = 0;
              printf((char *)(iVar4 + 0x12864),__dest);
              dbus_free(__dest);
              goto LAB_00012580;
            }
            FUN_0001313c(DAT_00012e94 + 0x127fc);
            uVar12 = 0;
            iVar4 = extraout_r2;
            iVar5 = extraout_r3;
          }
          if (0x5e < *(byte *)((int)pvVar3 + iVar5) - 0x20) {
            bVar15 = iVar5 == iVar4;
            if (iVar4 <= iVar5) {
              bVar15 = *(byte *)((int)pvVar3 + iVar5) == 0;
            }
            if (!bVar15) goto LAB_00012dac;
          }
          iVar5 = iVar5 + 1;
        } while( true );
      }
      puts((char *)(DAT_00012ea0 + 0x12888));
      while (iVar4 != 0) {
        FUN_00012460(&local_1c8,param_2,iVar13);
        dbus_message_iter_next(&local_1c8);
        iVar4 = dbus_message_iter_get_arg_type(&local_1c8);
        if (iVar4 == 0) break;
        putchar(0x2c);
      }
      FUN_00012434(param_3);
      pcVar8 = (char *)(DAT_00012ea4 + 0x128a4);
      goto LAB_0001257c;
    case (void *)0x62:
      dbus_message_iter_get_basic(param_1,&local_1c8);
      if ((void *)local_1c8.st_dev == (void *)0x0) {
        pvVar3 = (void *)(DAT_00012e84 + 0x12748);
      }
      else {
        pvVar3 = (void *)(DAT_00012e8c + 0x1275c);
      }
      pcVar8 = (char *)(DAT_00012e88 + 0x12750);
      goto LAB_0001264c;
    case (void *)0x63:
      break;
    case (void *)0x64:
      dbus_message_iter_get_basic(param_1,&local_1c8);
      printf((char *)(DAT_00012e7c + 0x12704),extraout_r1_01,(void *)local_1c8.st_dev,
             local_1c8.st_dev._4_4_);
      goto LAB_00012580;
    case (void *)0x65:
      dbus_message_iter_recurse(param_1,&local_1c8);
      puts((char *)(DAT_00012ea8 + 0x128f4));
      FUN_00012460(&local_1c8,param_2,iVar13);
      dbus_message_iter_next(&local_1c8);
      FUN_00012460(&local_1c8,param_2,iVar13);
      FUN_00012434(param_3);
      pcVar8 = (char *)(DAT_00012eac + 0x12930);
      goto LAB_0001257c;
    case (void *)0x66:
      break;
    case (void *)0x67:
      dbus_message_iter_get_basic(param_1,&local_1c8);
      if (param_2 == 0) {
        printf((char *)(DAT_00012e4c + 0x125c8));
      }
      printf((char *)(DAT_00012e50 + 0x125d8),(void *)local_1c8.st_dev);
      if (param_2 == 0) {
        pcVar8 = (char *)(DAT_00012e54 + 0x125ec);
        goto LAB_0001257c;
      }
      goto LAB_00012580;
    case (void *)0x68:
      dbus_message_iter_get_basic(param_1,&local_1d4);
      iVar4 = local_1d4;
      memset(&local_1c8,0,0x68);
      local_1d0 = (void *)0x80;
      local_1cc = 0x80;
      puts((char *)(DAT_00012eb8 + 0x129dc));
      if ((iVar4 != -1) && (iVar5 = fstat64(iVar4,&local_1c8), iVar5 != -1)) {
        iVar5 = param_3 + 2;
        FUN_00012434(iVar5);
        printf((char *)(DAT_00012ebc + 0x12a18),(undefined4)local_1c8.st_ino);
        FUN_00012434(iVar5);
        printf((char *)(DAT_00012ec0 + 0x12a2c));
        if ((local_1c8.st_mode & 0xf000) == 0x8000) {
          puts((char *)(DAT_00012ec4 + 0x12a48));
        }
        if ((local_1c8.st_mode & 0xf000) == 0x4000) {
          puts((char *)(DAT_00012ec8 + 0x12a64));
        }
        if ((local_1c8.st_mode & 0xf000) == 0x2000) {
          puts((char *)(DAT_00012ecc + 0x12a80));
        }
        if ((local_1c8.st_mode & 0xf000) == 0x6000) {
          puts((char *)(DAT_00012ed0 + 0x12a9c));
        }
        if ((local_1c8.st_mode & 0xf000) == 0x1000) {
          puts((char *)(DAT_00012ed4 + 0x12ab8));
        }
        if ((local_1c8.st_mode & 0xf000) == 0xa000) {
          puts((char *)(DAT_00012ed8 + 0x12ad4));
        }
        if ((local_1c8.st_mode & 0xf000) == 0xc000) {
          puts((char *)(DAT_00012edc + 0x12af0));
        }
        memset(local_15c,0,0x80);
        memset(asStack_dc,0,0x80);
        iVar6 = getsockname(iVar4,local_15c,(socklen_t *)&local_1d0);
        if (iVar6 == 0) {
          iVar4 = getpeername(iVar4,asStack_dc,&local_1cc);
          FUN_00012434(iVar5);
          printf((char *)(DAT_00012ee0 + 0x12b58));
          pcVar8 = (char *)(uint)local_15c[0].sa_family;
          if (pcVar8 == (char *)0x2) {
            pcVar7 = acStack_5c;
            puts((char *)(DAT_00012f00 + 0x12c64));
            pcVar8 = inet_ntop(2,local_15c[0].sa_data + 2,pcVar7,0x2e);
            if (pcVar8 != (char *)0x0) {
              FUN_00012434(iVar5);
              printf((char *)(DAT_00012f04 + 0x12ca0),pcVar7,
                     ((ushort)local_15c[0].sa_data._0_2_ & 0xff) << 8 |
                     (uint)((ushort)local_15c[0].sa_data._0_2_ >> 8));
            }
            if ((iVar4 == 0) &&
               (pcVar8 = inet_ntop(2,asStack_dc[0].sa_data + 2,pcVar7,0x2e), pcVar8 != (char *)0x0))
            {
              FUN_00012434(iVar5);
              __format = (char *)(DAT_00012f08 + 0x12cf0);
              pcVar8 = (char *)(((ushort)asStack_dc[0].sa_data._0_2_ & 0xff) << 8 |
                               (uint)((ushort)asStack_dc[0].sa_data._0_2_ >> 8));
LAB_00012c04:
              printf(__format,pcVar7,pcVar8);
            }
          }
          else if (pcVar8 < (char *)0x3) {
            if (pcVar8 == (char *)0x1) {
              puts((char *)(DAT_00012eec + 0x12bac));
              if (local_15c[0].sa_data[0] == '\0') {
                pcVar8 = local_15c[0].sa_data + 1;
                FUN_00012434(iVar5);
                printf((char *)(DAT_00012ef0 + 0x12bdc),(int)local_1d0 - 3,pcVar8);
                if (iVar4 == 0) {
                  FUN_00012434(iVar5);
                  pcVar7 = (char *)((int)local_1d0 - 3);
                  __format = (char *)(DAT_00012ef4 + 0x12c08);
                  goto LAB_00012c04;
                }
              }
              else {
                FUN_00012434(iVar5);
                printf((char *)(DAT_00012ef8 + 0x12c28),local_15c[0].sa_data);
                if (iVar4 == 0) {
                  FUN_00012434(iVar5);
                  pcVar8 = asStack_dc[0].sa_data;
                  pcVar7 = (char *)(DAT_00012efc + 0x12c50);
                  goto LAB_00012c4c;
                }
              }
            }
            else {
LAB_00012b70:
              pcVar7 = (char *)(DAT_00012ee4 + 0x12b80);
LAB_00012c4c:
              printf(pcVar7,pcVar8);
            }
          }
          else if (pcVar8 == (char *)0xa) {
            pcVar7 = acStack_5c;
            puts((char *)(DAT_00012f0c + 0x12d08));
            pcVar8 = inet_ntop(10,local_15c[0].sa_data + 6,pcVar7,0x2e);
            if (pcVar8 != (char *)0x0) {
              FUN_00012434(iVar5);
              printf((char *)(DAT_00012f10 + 0x12d44),pcVar7,
                     ((ushort)local_15c[0].sa_data._0_2_ & 0xff) << 8 |
                     (uint)((ushort)local_15c[0].sa_data._0_2_ >> 8));
            }
            if ((iVar4 == 0) &&
               (pcVar8 = inet_ntop(10,asStack_dc[0].sa_data + 6,pcVar7,0x2e), pcVar8 != (char *)0x0)
               ) {
              FUN_00012434(iVar5);
              __format = (char *)(DAT_00012f14 + 0x12d94);
              pcVar8 = (char *)(((ushort)asStack_dc[0].sa_data._0_2_ & 0xff) << 8 |
                               (uint)((ushort)asStack_dc[0].sa_data._0_2_ >> 8));
              goto LAB_00012c04;
            }
          }
          else {
            if (pcVar8 != (char *)0x1f) goto LAB_00012b70;
            puts((char *)(DAT_00012ee8 + 0x12b9c));
          }
        }
      }
      close(local_1d4);
      goto LAB_00012580;
    case (void *)0x69:
      dbus_message_iter_get_basic(param_1,&local_1c8);
      pcVar8 = (char *)(DAT_00012e6c + 0x12690);
      pvVar3 = (void *)local_1c8.st_dev;
      goto LAB_0001264c;
    case (void *)0x6a:
      break;
    case (void *)0x6b:
      break;
    case (void *)0x6c:
      break;
    case (void *)0x6d:
      break;
    case (void *)0x6e:
      dbus_message_iter_get_basic(param_1,&local_1c8);
      pcVar8 = (char *)(DAT_00012e64 + 0x12650);
      pvVar3 = (void *)(int)(short)local_1c8.st_dev;
      goto LAB_0001264c;
    case (void *)0x6f:
      dbus_message_iter_get_basic(param_1,&local_1c8);
      if (param_2 == 0) {
        printf((char *)(DAT_00012e58 + 0x1260c));
      }
      printf((char *)(DAT_00012e5c + 0x1261c),(void *)local_1c8.st_dev);
      if (param_2 == 0) {
        pcVar8 = (char *)(DAT_00012e60 + 0x12630);
        goto LAB_0001257c;
      }
      goto LAB_00012580;
    case (void *)0x70:
      break;
    case (void *)0x71:
      dbus_message_iter_get_basic(param_1,&local_1c8);
      pcVar8 = (char *)(DAT_00012e68 + 0x12674);
      pvVar3 = (void *)((uint)(void *)local_1c8.st_dev & 0xffff);
      goto LAB_0001264c;
    case (void *)0x72:
      dbus_message_iter_recurse(param_1,&local_1c8);
      puts((char *)(DAT_00012eb0 + 0x1294c));
      while (iVar4 = dbus_message_iter_get_arg_type(&local_1c8), iVar4 != 0) {
        FUN_00012460(&local_1c8,param_2,iVar13);
        dbus_message_iter_next(&local_1c8);
        iVar4 = dbus_message_iter_get_arg_type(&local_1c8);
        if (iVar4 != 0) {
          putchar(0x2c);
        }
      }
      FUN_00012434(param_3);
      pcVar8 = (char *)(DAT_00012eb4 + 0x12970);
      goto LAB_0001257c;
    case (void *)0x73:
      dbus_message_iter_get_basic(param_1,&local_1c8);
      if (param_2 == 0) {
        printf((char *)(DAT_00012e40 + 0x1255c));
      }
      printf((char *)(DAT_00012e44 + 0x1256c),(void *)local_1c8.st_dev);
      if (param_2 == 0) {
        pcVar8 = (char *)(DAT_00012e48 + 0x12580);
        goto LAB_0001257c;
      }
      goto LAB_00012580;
    case (void *)0x74:
      dbus_message_iter_get_basic(param_1,&local_1c8);
      pcVar8 = (char *)(DAT_00012e78 + 0x126e8);
      uVar9 = extraout_r1_00;
      goto LAB_000126c4;
    case (void *)0x75:
      dbus_message_iter_get_basic(param_1,&local_1c8);
      pcVar8 = (char *)(DAT_00012e70 + 0x126ac);
      pvVar3 = (void *)local_1c8.st_dev;
      goto LAB_0001264c;
    case (void *)0x76:
      dbus_message_iter_recurse(param_1,&local_1c8);
      printf((char *)(DAT_00012e90 + 0x12778));
      FUN_00012460(&local_1c8,param_2,iVar13);
      goto LAB_00012580;
    case (void *)0x77:
      break;
    case (void *)0x78:
      dbus_message_iter_get_basic(param_1,&local_1c8);
      pcVar8 = (char *)(DAT_00012e74 + 0x126c8);
      uVar9 = extraout_r1;
LAB_000126c4:
      printf(pcVar8,uVar9,(void *)local_1c8.st_dev,local_1c8.st_dev._4_4_);
      goto LAB_00012580;
    case (void *)0x79:
      dbus_message_iter_get_basic(param_1,&local_1c8);
      pcVar8 = (char *)(DAT_00012e80 + 0x12724);
      pvVar3 = (void *)((uint)(void *)local_1c8.st_dev & 0xff);
      goto LAB_0001264c;
    }
    pcVar8 = (char *)(DAT_00012f18 + 0x12dac);
LAB_0001264c:
    printf(pcVar8,pvVar3);
    goto LAB_00012580;
  }
  goto LAB_00012590;
LAB_00012dac:
  uVar14 = 0;
  pcVar8 = (char *)(DAT_00012f20 + 0x12dc4);
  puts((char *)(DAT_00012f1c + 0x12dc0));
  FUN_00012434(iVar13);
  do {
    pbVar1 = (byte *)((int)pvVar3 + uVar14);
    uVar14 = uVar14 + 1;
    printf(pcVar8,(uint)*pbVar1);
    if (uVar14 == uVar12) break;
    if (uVar14 == uVar11 * (uVar14 / uVar11)) {
      putchar(10);
      FUN_00012434(iVar13);
    }
    else {
      putchar(0x20);
    }
  } while (uVar14 < uVar12);
  putchar(10);
  FUN_00012434(param_3);
  pcVar8 = (char *)(DAT_00012f24 + 0x12e30);
LAB_0001257c:
  puts(pcVar8);
LAB_00012580:
  iVar4 = dbus_message_iter_next(param_1);
  if (iVar4 == 0) {
LAB_00012590:
    if (local_2c == *piVar10) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  goto LAB_000124b0;
}



/* ===== FUN_00012f28 @ 00012f28 size=484 ===== */

void FUN_00012f28(undefined4 param_1,int param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *__format;
  int extraout_r2;
  int extraout_r3;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined1 auStack_64 [56];
  int local_2c;
  
  iVar7 = DAT_0001310c + 0x12f48;
  piVar8 = *(int **)(iVar7 + DAT_00013110);
  local_2c = *piVar8;
  uVar1 = dbus_message_get_type();
  iVar2 = dbus_message_get_sender(param_1);
  uVar9 = dbus_message_get_destination(param_1);
  if (param_2 != 0) goto LAB_00013060;
  uVar3 = FUN_000123c4(uVar1,(int)((ulonglong)uVar9 >> 0x20),param_3 | param_4,(int)uVar9);
  if (extraout_r2 == 0) {
    if (iVar2 == 0) {
      iVar2 = DAT_00013120 + 0x12ffc;
    }
    printf((char *)(DAT_00013128 + 0x13014),uVar3,iVar2);
  }
  else {
    if (iVar2 == 0) {
      iVar2 = DAT_00013114 + 0x12fa8;
    }
    iVar6 = extraout_r3;
    if (extraout_r3 == 0) {
      iVar6 = DAT_00013118 + 0x12fb4;
    }
    printf((char *)(DAT_0001311c + 0x12fcc),uVar3,param_3,param_4,iVar2,iVar6);
  }
  switch(uVar1) {
  case 1:
    break;
  case 2:
    uVar1 = dbus_message_get_serial(param_1);
    uVar3 = dbus_message_get_reply_serial(param_1);
    __format = (char *)(DAT_00013134 + 0x130cc);
    goto LAB_000130c8;
  case 3:
    uVar1 = dbus_message_get_error_name(param_1);
    uVar3 = dbus_message_get_reply_serial(param_1);
    __format = (char *)(DAT_00013138 + 0x130f8);
LAB_000130c8:
    printf(__format,uVar1,uVar3);
    goto LAB_00013060;
  case 4:
    break;
  default:
    putchar(10);
    goto LAB_00013060;
  }
  uVar1 = dbus_message_get_serial(param_1);
  uVar3 = dbus_message_get_path(param_1);
  uVar4 = dbus_message_get_interface(param_1);
  uVar5 = dbus_message_get_member(param_1);
  printf((char *)(DAT_0001312c + 0x13060),uVar1,uVar3,uVar4,uVar5);
LAB_00013060:
  dbus_message_iter_init(param_1,auStack_64);
  FUN_00012460(auStack_64,param_2,1);
  fflush((FILE *)**(undefined4 **)(iVar7 + DAT_00013130));
  if (local_2c != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_0001313c @ 0001313c size=48 ===== */

void FUN_0001313c(undefined4 param_1)

{
  fprintf((FILE *)**(undefined4 **)(DAT_0001316c + 0x1314c + DAT_00013170),
          (char *)(DAT_00013174 + 0x13160),param_1);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00013178 @ 00013178 size=92 ===== */

undefined4 FUN_00013178(int param_1,void *param_2,uint param_3)

{
  ssize_t sVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    while( true ) {
      if (param_3 <= uVar3) {
        return 1;
      }
      sVar1 = write(param_1,param_2,param_3 - uVar3);
      if (sVar1 < 0) break;
      param_2 = (void *)((int)param_2 + sVar1);
      uVar3 = uVar3 + sVar1;
    }
    piVar2 = __errno_location();
  } while (*piVar2 == 4);
  return 0;
}



/* ===== _DT_FINI @ 000131d4 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::setvbuf @ 00025000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setvbuf(FILE *__stream,char *__buf,int __modes,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_iter_init_append @ 00025008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_iter_init_append(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_error_init @ 0002500c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_error_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00025010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 00025014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00025018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 0002501c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_error_is_set @ 00025020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_error_is_set(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_is_signal @ 00025024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_is_signal(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_iter_open_container @ 00025028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_iter_open_container(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_get_destination @ 0002502c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_get_destination(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 00025030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_iter_append_basic @ 00025034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_iter_append_basic(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00025038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_get_serial @ 0002503c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_get_serial(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00025040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00025044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00025048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 0002504c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_add_filter @ 00025050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_add_filter(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_iter_next @ 00025054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_iter_next(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 00025058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_iter_get_basic @ 0002505c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_iter_get_basic(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_send_with_reply_and_block @ 00025060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_send_with_reply_and_block(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_bus_register @ 00025064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_bus_register(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_set_route_peer_messages @ 00025068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_set_route_peer_messages(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_new_method_call @ 0002506c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_new_method_call(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_error_free @ 00025070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_error_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_get_real_time @ 00025074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_get_real_time(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getsockname @ 00025078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getsockname(int __fd,sockaddr *__addr,socklen_t *__len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 0002507c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_open @ 00025080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_open(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_iter_init @ 00025084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_iter_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_malloc @ 00025088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_malloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0002508c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_marshal @ 00025090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_marshal(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_iter_get_fixed_array @ 00025098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_iter_get_fixed_array(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 0002509c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 000250a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 000250a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 000250a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 000250ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_bus_get @ 000250b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_bus_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_error_has_name @ 000250b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_error_has_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 000250b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 000250bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_unref @ 000250c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_unref(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_read_write_dispatch @ 000250c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_read_write_dispatch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_get_type @ 000250cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_get_type(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_get_path @ 000250d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_get_path(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 000250d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 000250d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpeername @ 000250dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getpeername(int __fd,sockaddr *__addr,socklen_t *__len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_get_reply_serial @ 000250e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_get_reply_serial(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_bus_add_match @ 000250e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_bus_add_match(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_get_interface @ 000250e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_get_interface(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_get_member @ 000250ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_get_member(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 000250f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_iter_get_arg_type @ 000250f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_iter_get_arg_type(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_free @ 000250f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_iter_recurse @ 000250fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_iter_recurse(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_get_error_name @ 00025100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_get_error_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00025104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fstat64 @ 00025108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat64(int __fd,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_get_sender @ 0002510c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_get_sender(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::inet_ntop @ 00025110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * inet_ntop(int __af,void *__cp,char *__buf,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00025114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 00025118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 0002511c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_iter_close_container @ 00025120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_iter_close_container(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


