// dbus-send — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00011268 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::dbus_message_iter_init_append @ 0001128c size=12 ===== */

void dbus_message_iter_init_append(void)

{
  (*(code *)PTR_dbus_message_iter_init_append_00024eac)();
  return;
}



/* ===== <EXTERNAL>::dbus_error_init @ 00011298 size=12 ===== */

void dbus_error_init(void)

{
  (*(code *)PTR_dbus_error_init_00024eb0)();
  return;
}



/* ===== <EXTERNAL>::abort @ 000112a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00024eb4)();
  return;
}



/* ===== <EXTERNAL>::write @ 000112bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_00024ebc)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::dbus_connection_flush @ 000112c8 size=12 ===== */

void dbus_connection_flush(void)

{
  (*(code *)PTR_dbus_connection_flush_00024ec0)();
  return;
}



/* ===== <EXTERNAL>::dbus_error_is_set @ 000112d4 size=12 ===== */

void dbus_error_is_set(void)

{
  (*(code *)PTR_dbus_error_is_set_00024ec4)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_iter_open_container @ 000112e0 size=12 ===== */

void dbus_message_iter_open_container(void)

{
  (*(code *)PTR_dbus_message_iter_open_container_00024ec8)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_get_destination @ 000112ec size=12 ===== */

void dbus_message_get_destination(void)

{
  (*(code *)PTR_dbus_message_get_destination_00024ecc)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_iter_append_basic @ 000112f8 size=12 ===== */

void dbus_message_iter_append_basic(void)

{
  (*(code *)PTR_dbus_message_iter_append_basic_00024ed0)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011304 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00024ed4)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_get_serial @ 00011310 size=12 ===== */

void dbus_message_get_serial(void)

{
  (*(code *)PTR_dbus_message_get_serial_00024ed8)();
  return;
}



/* ===== <EXTERNAL>::strcmp @ 0001131c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00024edc)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00011328 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00024ee0)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fflush @ 00011334 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00024ee4)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00011340 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00024ee8)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::dbus_connection_unref @ 0001134c size=12 ===== */

void dbus_connection_unref(void)

{
  (*(code *)PTR_dbus_connection_unref_00024eec)();
  return;
}



/* ===== <EXTERNAL>::strrchr @ 00011358 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_00024ef0)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::dbus_message_set_destination @ 00011364 size=12 ===== */

void dbus_message_set_destination(void)

{
  (*(code *)PTR_dbus_message_set_destination_00024ef4)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_iter_next @ 00011370 size=12 ===== */

void dbus_message_iter_next(void)

{
  (*(code *)PTR_dbus_message_iter_next_00024ef8)();
  return;
}



/* ===== <EXTERNAL>::strdup @ 0001137c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strdup_00024efc)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::dbus_message_iter_get_basic @ 00011388 size=12 ===== */

void dbus_message_iter_get_basic(void)

{
  (*(code *)PTR_dbus_message_iter_get_basic_00024f00)();
  return;
}



/* ===== <EXTERNAL>::strtoll @ 00011394 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

longlong strtoll(char *__nptr,char **__endptr,int __base)

{
  longlong lVar1;
  
  lVar1 = (*(code *)PTR_strtoll_00024f04)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::strstr @ 000113a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_00024f08)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::dbus_connection_send_with_reply_and_block @ 000113ac size=12 ===== */

void dbus_connection_send_with_reply_and_block(void)

{
  (*(code *)PTR_dbus_connection_send_with_reply_and_block_00024f0c)();
  return;
}



/* ===== <EXTERNAL>::dbus_bus_register @ 000113b8 size=12 ===== */

void dbus_bus_register(void)

{
  (*(code *)PTR_dbus_bus_register_00024f10)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_new_method_call @ 000113c4 size=12 ===== */

void dbus_message_new_method_call(void)

{
  (*(code *)PTR_dbus_message_new_method_call_00024f14)();
  return;
}



/* ===== <EXTERNAL>::dbus_error_free @ 000113d0 size=12 ===== */

void dbus_error_free(void)

{
  (*(code *)PTR_dbus_error_free_00024f18)();
  return;
}



/* ===== <EXTERNAL>::_dbus_get_real_time @ 000113dc size=12 ===== */

void _dbus_get_real_time(void)

{
  (*(code *)PTR__dbus_get_real_time_00024f1c)();
  return;
}



/* ===== <EXTERNAL>::getsockname @ 000113e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getsockname(int __fd,sockaddr *__addr,socklen_t *__len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getsockname_00024f20)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::strchr @ 000113f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_00024f24)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::dbus_connection_open @ 00011400 size=12 ===== */

void dbus_connection_open(void)

{
  (*(code *)PTR_dbus_connection_open_00024f28)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_iter_init @ 0001140c size=12 ===== */

void dbus_message_iter_init(void)

{
  (*(code *)PTR_dbus_message_iter_init_00024f2c)();
  return;
}



/* ===== <EXTERNAL>::dbus_malloc @ 00011418 size=12 ===== */

void dbus_malloc(void)

{
  (*(code *)PTR_dbus_malloc_00024f30)();
  return;
}



/* ===== <EXTERNAL>::printf @ 00011424 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00024f34)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::dbus_message_iter_get_fixed_array @ 00011430 size=12 ===== */

void dbus_message_iter_get_fixed_array(void)

{
  (*(code *)PTR_dbus_message_iter_get_fixed_array_00024f38)();
  return;
}



/* ===== <EXTERNAL>::putchar @ 0001143c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_00024f3c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00011448 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00024f40)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00011454 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00024f44)();
  return;
}



/* ===== <EXTERNAL>::exit @ 00011460 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00024f48)(__status);
  return;
}



/* ===== <EXTERNAL>::fprintf @ 0001146c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00024f4c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::dbus_bus_get @ 00011478 size=12 ===== */

void dbus_bus_get(void)

{
  (*(code *)PTR_dbus_bus_get_00024f50)();
  return;
}



/* ===== <EXTERNAL>::strtoul @ 00011484 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_00024f54)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::close @ 00011490 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00024f58)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::dbus_message_unref @ 0001149c size=12 ===== */

void dbus_message_unref(void)

{
  (*(code *)PTR_dbus_message_unref_00024f5c)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_get_type @ 000114a8 size=12 ===== */

void dbus_message_get_type(void)

{
  (*(code *)PTR_dbus_message_get_type_00024f60)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_get_path @ 000114b4 size=12 ===== */

void dbus_message_get_path(void)

{
  (*(code *)PTR_dbus_message_get_path_00024f64)();
  return;
}



/* ===== <EXTERNAL>::strtoull @ 000114c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong strtoull(char *__nptr,char **__endptr,int __base)

{
  ulonglong uVar1;
  
  uVar1 = (*(code *)PTR_strtoull_00024f68)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 000114cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00024f6c)();
  return piVar1;
}



/* ===== <EXTERNAL>::dbus_message_new_signal @ 000114d8 size=12 ===== */

void dbus_message_new_signal(void)

{
  (*(code *)PTR_dbus_message_new_signal_00024f70)();
  return;
}



/* ===== <EXTERNAL>::fputs @ 000114e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_00024f74)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::getpeername @ 000114f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getpeername(int __fd,sockaddr *__addr,socklen_t *__len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getpeername_00024f78)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::dbus_connection_send @ 000114fc size=12 ===== */

void dbus_connection_send(void)

{
  (*(code *)PTR_dbus_connection_send_00024f7c)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_get_reply_serial @ 00011508 size=12 ===== */

void dbus_message_get_reply_serial(void)

{
  (*(code *)PTR_dbus_message_get_reply_serial_00024f80)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_set_auto_start @ 00011514 size=12 ===== */

void dbus_message_set_auto_start(void)

{
  (*(code *)PTR_dbus_message_set_auto_start_00024f84)();
  return;
}



/* ===== <EXTERNAL>::dbus_validate_bus_name @ 00011520 size=12 ===== */

void dbus_validate_bus_name(void)

{
  (*(code *)PTR_dbus_validate_bus_name_00024f88)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_get_interface @ 0001152c size=12 ===== */

void dbus_message_get_interface(void)

{
  (*(code *)PTR_dbus_message_get_interface_00024f8c)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_get_member @ 00011538 size=12 ===== */

void dbus_message_get_member(void)

{
  (*(code *)PTR_dbus_message_get_member_00024f90)();
  return;
}



/* ===== <EXTERNAL>::free @ 00011544 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00024f94)(__ptr);
  return;
}



/* ===== <EXTERNAL>::dbus_message_iter_get_arg_type @ 00011550 size=12 ===== */

void dbus_message_iter_get_arg_type(void)

{
  (*(code *)PTR_dbus_message_iter_get_arg_type_00024f98)();
  return;
}



/* ===== <EXTERNAL>::dbus_free @ 0001155c size=12 ===== */

void dbus_free(void)

{
  (*(code *)PTR_dbus_free_00024f9c)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_iter_recurse @ 00011568 size=12 ===== */

void dbus_message_iter_recurse(void)

{
  (*(code *)PTR_dbus_message_iter_recurse_00024fa0)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_get_error_name @ 00011574 size=12 ===== */

void dbus_message_get_error_name(void)

{
  (*(code *)PTR_dbus_message_get_error_name_00024fa4)();
  return;
}



/* ===== <EXTERNAL>::puts @ 00011580 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00024fa8)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::fstat64 @ 0001158c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat64(int __fd,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fstat64_00024fac)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::dbus_message_get_sender @ 00011598 size=12 ===== */

void dbus_message_get_sender(void)

{
  (*(code *)PTR_dbus_message_get_sender_00024fb0)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_type_from_string @ 000115a4 size=12 ===== */

void dbus_message_type_from_string(void)

{
  (*(code *)PTR_dbus_message_type_from_string_00024fb4)();
  return;
}



/* ===== <EXTERNAL>::strtok @ 000115b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strtok(char *__s,char *__delim)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strtok_00024fb8)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::inet_ntop @ 000115bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * inet_ntop(int __af,void *__cp,char *__buf,socklen_t __len)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_inet_ntop_00024fbc)(__af);
  return pcVar1;
}



/* ===== <EXTERNAL>::memcpy @ 000115c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00024fc0)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::strtod @ 000115d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double strtod(char *__nptr,char **__endptr)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_strtod_00024fc4)(__nptr);
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== <EXTERNAL>::strtol @ 000115e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_00024fc8)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 000115ec size=12 ===== */

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00024fcc)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_iter_close_container @ 000115f8 size=12 ===== */

void dbus_message_iter_close_container(void)

{
  (*(code *)PTR_dbus_message_iter_close_container_00024fd0)();
  return;
}



/* ===== FUN_00011604 @ 00011604 size=2584 ===== */

void FUN_00011604(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  FILE *pFVar9;
  char *pcVar10;
  undefined4 *puVar11;
  int iVar12;
  char *pcVar13;
  char *unaff_r6;
  char *pcVar14;
  char *unaff_r7;
  char *unaff_r8;
  char *unaff_r9;
  int unaff_r10;
  char *unaff_r11;
  char *local_114;
  int local_110;
  int local_10c;
  undefined4 local_104;
  long local_100;
  byte local_fc;
  char *local_f8;
  undefined4 local_ec;
  char *local_e8;
  undefined4 auStack_dc [14];
  undefined4 local_a4 [14];
  undefined4 local_6c [14];
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined4 local_2c;
  
  iVar12 = DAT_0001201c + 0x11620;
  local_2c = **(undefined4 **)(iVar12 + DAT_00012020);
  *(undefined4 *)(DAT_00012024 + 0x11640) = *param_2;
  if (2 < param_1) {
    pcVar3 = (char *)0x0;
    local_100 = -1;
    local_fc = 0;
    unaff_r7 = (char *)0x4;
    local_f8 = (char *)(DAT_0001206c + 0x1196c);
    local_114 = (char *)0x0;
    local_10c = 0;
    unaff_r10 = 1;
    local_104 = 0;
    local_110 = 0;
    unaff_r6 = pcVar3;
    pcVar10 = pcVar3;
    unaff_r9 = pcVar3;
    unaff_r11 = pcVar3;
    goto LAB_000118c4;
  }
LAB_00011644:
  uVar1 = 1;
LAB_00011648:
  FUN_00013030(uVar1);
  do {
    pcVar13 = (char *)param_2[unaff_r10];
    iVar2 = strcmp(pcVar13,local_f8);
    if (iVar2 != 0) {
      iVar2 = strcmp(pcVar13,(char *)(DAT_00012028 + 0x11678));
      if (iVar2 == 0) {
        unaff_r6 = (char *)0x1;
        local_10c = 0;
        pcVar3 = (char *)0x0;
        goto LAB_000118c0;
      }
      pcVar3 = strstr(pcVar13,(char *)(DAT_0001202c + 0x11690));
      if (((pcVar13 == pcVar3) ||
          (pcVar3 = strstr(pcVar13,(char *)(DAT_00012030 + 0x116a8)), pcVar13 == pcVar3)) ||
         (pcVar3 = strstr(pcVar13,(char *)(DAT_00012034 + 0x116c0)), pcVar13 == pcVar3)) {
        local_fc = pcVar13[2] == 'b';
        pcVar3 = strchr(pcVar13,0x3d);
        unaff_r9 = pcVar3 + 1;
        if (pcVar3[1] != '\0') goto LAB_00011844;
        pcVar3 = (char *)(DAT_0001203c + 0x1170c);
        pFVar9 = (FILE *)**(undefined4 **)(iVar12 + DAT_00012038);
        goto LAB_0001170c;
      }
      iVar2 = strncmp(pcVar13,(char *)(DAT_00012040 + 0x11728),0xd);
      if (iVar2 == 0) {
        pcVar10 = pcVar13 + 0xd;
        iVar2 = strcmp(pcVar10,(char *)(DAT_00012044 + 0x11744));
        if (iVar2 == 0) {
          local_104 = 1;
LAB_00011934:
          unaff_r7 = (char *)0x1;
          local_110 = 1;
          pcVar3 = (char *)0x0;
          goto LAB_000118c0;
        }
        if (pcVar13[0xd] == '\0') goto LAB_00011934;
        puVar11 = *(undefined4 **)(iVar12 + DAT_00012038);
        pcVar3 = (char *)(DAT_00012048 + 0x11770);
        unaff_r7 = pcVar10;
        goto LAB_0001176c;
      }
      pcVar3 = strstr(pcVar13,(char *)(DAT_0001204c + 0x11788));
      if (pcVar13 == pcVar3) {
        pcVar3 = strchr(pcVar3,0x3d);
        if (pcVar3[1] == '\0') {
          pcVar3 = (char *)(DAT_00012050 + 0x117b8);
          pFVar9 = (FILE *)**(undefined4 **)(iVar12 + DAT_00012038);
          goto LAB_0001170c;
        }
        local_100 = strtol(pcVar3 + 1,(char **)0x0,10);
        if (local_100 < 1) {
          pcVar10 = strchr(pcVar13,0x3d);
          pcVar10 = pcVar10 + 1;
          puVar11 = *(undefined4 **)(iVar12 + DAT_00012038);
          pcVar3 = (char *)(DAT_00012054 + 0x117fc);
          goto LAB_0001176c;
        }
      }
      else {
        pcVar3 = strstr(pcVar13,(char *)(DAT_00012058 + 0x1180c));
        if (pcVar13 == pcVar3) {
          pcVar3 = strchr(pcVar3,0x3d);
          if (pcVar3[1] == '\0') {
            pcVar3 = (char *)(DAT_0001205c + 0x1183c);
            pFVar9 = (FILE *)**(undefined4 **)(iVar12 + DAT_00012038);
            goto LAB_0001170c;
          }
          unaff_r8 = pcVar3 + 1;
        }
        else {
          pcVar3 = strstr(pcVar13,(char *)(DAT_00012060 + 0x1185c));
          if (pcVar13 != pcVar3) {
            iVar2 = strcmp(pcVar13,(char *)(DAT_00012064 + 0x11888));
            uVar1 = 0;
            if (iVar2 != 0) {
              if (*pcVar13 != '-') {
                pcVar3 = pcVar13;
                if (local_114 == (char *)0x0) {
                  pcVar3 = (char *)0x0;
                  local_114 = pcVar13;
                }
                goto LAB_000118c0;
              }
              goto LAB_00011644;
            }
            goto LAB_00011648;
          }
          pcVar3 = strchr(pcVar13,0x3d);
          unaff_r11 = pcVar3 + 1;
        }
      }
LAB_00011844:
      pcVar3 = (char *)0x0;
      goto LAB_000118c0;
    }
    unaff_r6 = (char *)0x1;
    local_10c = 1;
    pcVar3 = (char *)0x0;
LAB_000118c0:
    unaff_r10 = unaff_r10 + 1;
    pcVar10 = unaff_r8;
LAB_000118c4:
    unaff_r8 = pcVar10;
  } while (pcVar3 == (char *)0x0 && unaff_r10 < param_1);
  if (pcVar3 == (char *)0x0) goto LAB_00011644;
  local_f8 = (char *)(uint)(unaff_r9 != (char *)0x0);
  if (((uint)local_f8 & (uint)unaff_r6) != 0) {
    pcVar3 = (char *)(DAT_00012068 + 0x11914);
    pFVar9 = (FILE *)**(undefined4 **)(iVar12 + DAT_00012038);
LAB_0001170c:
    fputs(pcVar3,pFVar9);
    goto LAB_00011644;
  }
  if ((unaff_r11 != (char *)0x0) &&
     (unaff_r7 = (char *)dbus_message_type_from_string(unaff_r11),
     unaff_r7 != (char *)0x1 && unaff_r7 != (char *)0x4)) {
    puVar11 = *(undefined4 **)(iVar12 + DAT_00012038);
    pcVar10 = (char *)(DAT_00012070 + 0x119c4);
    pcVar3 = unaff_r11;
    goto LAB_000119c0;
  }
  unaff_r6 = (char *)&local_ec;
  dbus_error_init(unaff_r6);
  if ((pcVar10 != (char *)0x0) && (iVar2 = dbus_validate_bus_name(pcVar10,unaff_r6), iVar2 == 0)) {
    puVar11 = *(undefined4 **)(iVar12 + DAT_00012038);
    pcVar3 = (char *)(DAT_00012074 + 0x11a0c);
LAB_0001176c:
    fprintf((FILE *)*puVar11,pcVar3,pcVar10);
    goto LAB_00011644;
  }
  if (unaff_r9 == (char *)0x0) {
    iVar2 = dbus_bus_get(local_10c,&local_ec);
    if (iVar2 != 0) goto LAB_00011a88;
  }
  else {
    iVar2 = dbus_connection_open(unaff_r9);
    if (iVar2 != 0) {
      if (((unaff_r9 != (char *)0x0 & local_fc) != 0) &&
         (iVar4 = dbus_bus_register(iVar2,&local_ec), iVar4 == 0)) {
        pcVar3 = (char *)(DAT_00012088 + 0x11b04);
        pFVar9 = (FILE *)**(undefined4 **)(iVar12 + DAT_00012038);
        goto LAB_00011a64;
      }
LAB_00011a88:
      if (unaff_r7 == (char *)0x1) {
        pcVar13 = strrchr(pcVar3,0x2e);
        if (pcVar13 == (char *)0x0) {
          puVar11 = *(undefined4 **)(iVar12 + DAT_00012038);
          pcVar10 = (char *)(DAT_00012080 + 0x11abc);
          goto LAB_000119c0;
        }
        *pcVar13 = '\0';
        iVar4 = dbus_message_new_method_call(0,local_114,pcVar3,pcVar13 + 1);
        FUN_00013254(iVar4 != 0);
        dbus_message_set_auto_start(iVar4,1);
      }
      else {
        if (unaff_r7 != (char *)0x4) {
          pcVar3 = (char *)(DAT_00012094 + 0x11bcc);
          pFVar9 = (FILE *)**(undefined4 **)(iVar12 + DAT_00012038);
          goto LAB_00011bcc;
        }
        pcVar13 = strrchr(pcVar3,0x2e);
        if (pcVar13 == (char *)0x0) {
          puVar11 = *(undefined4 **)(iVar12 + DAT_00012038);
          pcVar10 = (char *)(DAT_00012090 + 0x11b90);
          goto LAB_000119c0;
        }
        *pcVar13 = '\0';
        iVar4 = dbus_message_new_signal(local_114,pcVar3,pcVar13 + 1);
        FUN_00013254(iVar4 != 0);
      }
      if (iVar4 == 0) {
        pcVar3 = (char *)(DAT_0001208c + 0x11b58);
        pFVar9 = (FILE *)**(undefined4 **)(iVar12 + DAT_00012038);
      }
      else {
        if ((pcVar10 == (char *)0x0) ||
           (iVar5 = dbus_message_set_destination(iVar4,pcVar10), iVar5 != 0)) {
          dbus_message_iter_init_append(iVar4,auStack_dc);
          pcVar3 = (char *)(DAT_0001209c + 0x11c20);
          pcVar10 = (char *)(DAT_000120a0 + 0x11c2c);
          goto LAB_00011c2c;
        }
        pcVar3 = (char *)(DAT_00012098 + 0x11c04);
        pFVar9 = (FILE *)**(undefined4 **)(iVar12 + DAT_00012038);
      }
LAB_00011bcc:
      fputs(pcVar3,pFVar9);
      goto LAB_00011a70;
    }
  }
  pFVar9 = (FILE *)**(undefined4 **)(iVar12 + DAT_00012038);
  if (unaff_r9 == (char *)0x0) {
    if (local_10c == 1) {
      unaff_r9 = (char *)(DAT_00012084 + 0x11ac8);
    }
    else {
      unaff_r9 = (char *)(DAT_00012078 + 0x11a58);
    }
  }
  pcVar3 = (char *)(DAT_0001207c + 0x11a68);
LAB_00011a64:
  fprintf(pFVar9,pcVar3,unaff_r9,local_e8);
  dbus_error_free(&local_ec);
  goto LAB_00011a70;
LAB_00011c2c:
  if (param_1 <= unaff_r10) goto code_r0x00011c38;
  pcVar14 = (char *)param_2[unaff_r10];
  pcVar7 = strchr(pcVar14,0x3a);
  if (pcVar7 == (char *)0x0) {
    puVar11 = *(undefined4 **)(iVar12 + DAT_00012038);
    local_ec = *param_2;
    pcVar3 = (char *)(DAT_000120a8 + 0x11ccc);
    pcVar13 = pcVar14;
    goto LAB_00011cc8;
  }
  iVar6 = 0;
  pcVar13 = pcVar7 + 1;
  *pcVar7 = '\0';
  iVar5 = strcmp(pcVar14,pcVar3);
  if (iVar5 == 0) {
    iVar6 = 0x76;
LAB_00011d80:
    pcVar7 = strchr(pcVar13,0x3a);
    if (pcVar7 == (char *)0x0) {
      puVar11 = *(undefined4 **)(iVar12 + DAT_00012038);
      local_ec = *param_2;
      pcVar3 = (char *)(DAT_000120b8 + 0x11db4);
      goto LAB_00011cc8;
    }
    *pcVar7 = '\0';
    pcVar14 = pcVar13;
    pcVar13 = pcVar7 + 1;
  }
  else {
    iVar5 = strcmp(pcVar14,(char *)(DAT_000120ac + 0x11d00));
    if (iVar5 == 0) {
      iVar6 = 0x61;
      goto LAB_00011d80;
    }
    iVar5 = strcmp(pcVar14,(char *)(DAT_000120b0 + 0x11d18));
    if (iVar5 == 0) {
      iVar6 = 0x65;
      goto LAB_00011d80;
    }
  }
  if (*pcVar14 == '\0') {
    uVar1 = 0x73;
  }
  else {
    uVar1 = FUN_0001307c(pcVar14);
  }
  if (iVar6 == 0x65) {
    pcVar14 = strchr(pcVar13,0x3a);
    if (pcVar14 != (char *)0x0) {
      *pcVar14 = '\0';
      uVar8 = FUN_0001307c(pcVar13);
      local_34 = 0x7b;
      local_32 = (undefined1)uVar8;
      local_31 = 0x7d;
      local_30 = 0;
      local_33 = (char)uVar1;
      dbus_message_iter_open_container(auStack_dc,0x61,&local_34,local_a4);
      FUN_00013254();
      pcVar14 = strdup(pcVar14 + 1);
      FUN_00013254(pcVar14 != (char *)0x0);
      pcVar13 = strtok(pcVar14,(char *)(DAT_000120bc + 0x11e48));
      pcVar7 = (char *)(DAT_000120c0 + 0x11e58);
LAB_00011e58:
      if (pcVar13 != (char *)0x0) {
        dbus_message_iter_open_container(local_a4,0x65,0,local_6c);
        FUN_00013254();
        FUN_000132a4(local_6c,uVar1,pcVar13);
        pcVar13 = strtok((char *)0x0,pcVar7);
        if (pcVar13 != (char *)0x0) goto LAB_00011f68;
        puVar11 = *(undefined4 **)(iVar12 + DAT_00012038);
        pcVar3 = *(char **)(DAT_000120c8 + 0x11f58);
        pcVar10 = (char *)(DAT_000120cc + 0x11f68);
LAB_000119c0:
        fprintf((FILE *)*puVar11,pcVar10,pcVar3);
        goto LAB_00011a70;
      }
      goto LAB_00011ed8;
    }
    puVar11 = *(undefined4 **)(iVar12 + DAT_00012038);
    local_ec = *param_2;
    pcVar3 = (char *)(DAT_000120b4 + 0x11d7c);
    goto LAB_00011cc8;
  }
  if (iVar6 == 0) {
    puVar11 = auStack_dc;
LAB_00011f9c:
    FUN_000132a4(puVar11,uVar1,pcVar13);
    if (iVar6 != 0) goto LAB_00011edc;
  }
  else {
    local_33 = 0;
    puVar11 = local_a4;
    local_34 = (char)uVar1;
    dbus_message_iter_open_container(auStack_dc,iVar6,&local_34,puVar11);
    FUN_00013254();
    if (iVar6 != 0x61) goto LAB_00011f9c;
    pcVar14 = strdup(pcVar13);
    FUN_00013254(pcVar14 != (char *)0x0);
    pcVar13 = pcVar14;
    pcVar7 = (char *)(DAT_000120c4 + 0x11ecc);
    while (pcVar13 = strtok(pcVar13,pcVar7), pcVar13 != (char *)0x0) {
      FUN_000132a4(puVar11,uVar1,pcVar13);
      pcVar13 = (char *)0x0;
      pcVar7 = pcVar10;
    }
LAB_00011ed8:
    free(pcVar14);
LAB_00011edc:
    dbus_message_iter_close_container(auStack_dc,local_a4);
    FUN_00013254();
  }
  unaff_r10 = unaff_r10 + 1;
  goto LAB_00011c2c;
LAB_00011f68:
  FUN_000132a4(local_6c,uVar8);
  dbus_message_iter_close_container(local_a4,local_6c);
  FUN_00013254();
  pcVar13 = strtok((char *)0x0,pcVar7);
  goto LAB_00011e58;
code_r0x00011c38:
  if (local_110 == 0) {
    dbus_connection_send(iVar2,iVar4,0);
    dbus_connection_flush(iVar2);
  }
  else {
    dbus_error_init(&local_ec);
    iVar5 = dbus_connection_send_with_reply_and_block(iVar2,iVar4,local_100,&local_ec);
    iVar6 = dbus_error_is_set(&local_ec);
    if (iVar6 != 0) {
      puVar11 = *(undefined4 **)(iVar12 + DAT_00012038);
      pcVar3 = (char *)(DAT_000120a4 + 0x11c8c);
      pcVar13 = local_e8;
LAB_00011cc8:
      fprintf((FILE *)*puVar11,pcVar3,local_ec,pcVar13);
LAB_00011a70:
      iVar12 = 1;
      goto LAB_00011a74;
    }
    if (iVar5 != 0) {
      _dbus_get_real_time(local_a4,local_6c);
      FUN_00012e1c(iVar5,local_104,local_a4[0],local_6c[0]);
      dbus_message_unref(iVar5);
    }
  }
  dbus_message_unref(iVar4);
  dbus_connection_unref(iVar2);
  iVar12 = 0;
LAB_00011a74:
                    /* WARNING: Subroutine does not return */
  exit(iVar12);
}



/* ===== entry @ 000120d0 size=80 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00024eb8)
            (*(undefined4 *)((int)&DAT_00012118 + DAT_00012124 + DAT_00012118),param_2,
             &stack0x00000004,*(undefined4 *)((int)&DAT_00012118 + DAT_00012120 + DAT_00012118),
             *(undefined4 *)((int)&DAT_00012118 + DAT_0001211c + DAT_00012118),param_1);
  return;
}



/* ===== FUN_00012128 @ 00012128 size=72 ===== */

void FUN_00012128(void)

{
  code *pcVar1;
  
  if (DAT_00012174 + 0x12140 == DAT_00012170 + 0x12138) {
    return;
  }
  pcVar1 = *(code **)(DAT_00012178 + 0x12148 + DAT_0001217c);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 000121e4 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00012258 + 0x12200;
  if (*(char *)(DAT_00012254 + 0x121f4) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_0001225c) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_00012260 + 0x12220));
  }
  FUN_00012128();
  if (*(int *)(iVar1 + DAT_00012264) != 0) {
    __deregister_frame_info(DAT_00012268 + 0x12240);
  }
  *(undefined1 *)(DAT_0001226c + 0x12250) = 1;
  return;
}



/* ===== _INIT_0 @ 00012270 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_000122a8 + 0x12280 + DAT_000122ac) != 0) {
    __register_frame_info(DAT_000122b4 + 0x122a0,DAT_000122b0 + 0x1229c);
  }
  if (((DAT_000121d8 + 0x12198) - (DAT_000121d4 + 0x12190) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_000121dc + 0x121a0 + DAT_000121e0);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== FUN_000122b8 @ 000122b8 size=92 ===== */

int FUN_000122b8(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    return DAT_00012314 + 0x122e4;
  case 2:
    return DAT_00012318 + 0x122f0;
  case 3:
    return DAT_0001231c + 0x122fc;
  case 4:
    return (int)&DAT_00012314 + DAT_00012324;
  default:
    return DAT_00012320 + 0x12308;
  }
}



/* ===== FUN_00012328 @ 00012328 size=40 ===== */

void FUN_00012328(int param_1)

{
  char *__format;
  
  __format = (char *)(DAT_00012350 + 0x1233c);
  for (; 0 < param_1; param_1 = param_1 + -1) {
    printf(__format);
  }
  return;
}



/* ===== FUN_00012354 @ 00012354 size=2520 ===== */

void FUN_00012354(undefined4 param_1,int param_2,int param_3)

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
  piVar10 = *(int **)(DAT_00012d2c + 0x12368 + DAT_00012d30);
  local_2c = *piVar10;
  uVar11 = (iVar13 * -3 + 0x50) / 3;
  if (uVar11 < 8) {
    uVar11 = 8;
  }
LAB_000123a4:
  pvVar3 = (void *)dbus_message_iter_get_arg_type(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00012328(param_3);
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
              pcVar8 = (char *)(DAT_00012d8c + 0x12730);
              goto LAB_00012540;
            }
            __dest = (void *)dbus_malloc(uVar12 + 1);
            sVar2 = local_1cc;
            if (__dest != (void *)0x0) {
              memcpy(__dest,local_1d0,local_1cc);
              iVar4 = DAT_00012d90;
              *(undefined1 *)((int)__dest + sVar2) = 0;
              printf((char *)(iVar4 + 0x12758),__dest);
              dbus_free(__dest);
              goto LAB_00012474;
            }
            FUN_0001353c(DAT_00012d88 + 0x126f0);
            uVar12 = 0;
            iVar4 = extraout_r2;
            iVar5 = extraout_r3;
          }
          if (0x5e < *(byte *)((int)pvVar3 + iVar5) - 0x20) {
            bVar15 = iVar5 == iVar4;
            if (iVar4 <= iVar5) {
              bVar15 = *(byte *)((int)pvVar3 + iVar5) == 0;
            }
            if (!bVar15) goto LAB_00012ca0;
          }
          iVar5 = iVar5 + 1;
        } while( true );
      }
      puts((char *)(DAT_00012d94 + 0x1277c));
      while (iVar4 != 0) {
        FUN_00012354(&local_1c8,param_2,iVar13);
        dbus_message_iter_next(&local_1c8);
        iVar4 = dbus_message_iter_get_arg_type(&local_1c8);
        if (iVar4 == 0) break;
        putchar(0x2c);
      }
      FUN_00012328(param_3);
      pcVar8 = (char *)(DAT_00012d98 + 0x12798);
      goto LAB_00012470;
    case (void *)0x62:
      dbus_message_iter_get_basic(param_1,&local_1c8);
      if ((void *)local_1c8.st_dev == (void *)0x0) {
        pvVar3 = (void *)(DAT_00012d78 + 0x1263c);
      }
      else {
        pvVar3 = (void *)(DAT_00012d80 + 0x12650);
      }
      pcVar8 = (char *)(DAT_00012d7c + 0x12644);
      goto LAB_00012540;
    case (void *)0x63:
      break;
    case (void *)0x64:
      dbus_message_iter_get_basic(param_1,&local_1c8);
      printf((char *)(DAT_00012d70 + 0x125f8),extraout_r1_01,(void *)local_1c8.st_dev,
             local_1c8.st_dev._4_4_);
      goto LAB_00012474;
    case (void *)0x65:
      dbus_message_iter_recurse(param_1,&local_1c8);
      puts((char *)(DAT_00012d9c + 0x127e8));
      FUN_00012354(&local_1c8,param_2,iVar13);
      dbus_message_iter_next(&local_1c8);
      FUN_00012354(&local_1c8,param_2,iVar13);
      FUN_00012328(param_3);
      pcVar8 = (char *)(DAT_00012da0 + 0x12824);
      goto LAB_00012470;
    case (void *)0x66:
      break;
    case (void *)0x67:
      dbus_message_iter_get_basic(param_1,&local_1c8);
      if (param_2 == 0) {
        printf((char *)(DAT_00012d40 + 0x124bc));
      }
      printf((char *)(DAT_00012d44 + 0x124cc),(void *)local_1c8.st_dev);
      if (param_2 == 0) {
        pcVar8 = (char *)(DAT_00012d48 + 0x124e0);
        goto LAB_00012470;
      }
      goto LAB_00012474;
    case (void *)0x68:
      dbus_message_iter_get_basic(param_1,&local_1d4);
      iVar4 = local_1d4;
      memset(&local_1c8,0,0x68);
      local_1d0 = (void *)0x80;
      local_1cc = 0x80;
      puts((char *)(DAT_00012dac + 0x128d0));
      if ((iVar4 != -1) && (iVar5 = fstat64(iVar4,&local_1c8), iVar5 != -1)) {
        iVar5 = param_3 + 2;
        FUN_00012328(iVar5);
        printf((char *)(DAT_00012db0 + 0x1290c),(undefined4)local_1c8.st_ino);
        FUN_00012328(iVar5);
        printf((char *)(DAT_00012db4 + 0x12920));
        if ((local_1c8.st_mode & 0xf000) == 0x8000) {
          puts((char *)(DAT_00012db8 + 0x1293c));
        }
        if ((local_1c8.st_mode & 0xf000) == 0x4000) {
          puts((char *)(DAT_00012dbc + 0x12958));
        }
        if ((local_1c8.st_mode & 0xf000) == 0x2000) {
          puts((char *)(DAT_00012dc0 + 0x12974));
        }
        if ((local_1c8.st_mode & 0xf000) == 0x6000) {
          puts((char *)(DAT_00012dc4 + 0x12990));
        }
        if ((local_1c8.st_mode & 0xf000) == 0x1000) {
          puts((char *)(DAT_00012dc8 + 0x129ac));
        }
        if ((local_1c8.st_mode & 0xf000) == 0xa000) {
          puts((char *)(DAT_00012dcc + 0x129c8));
        }
        if ((local_1c8.st_mode & 0xf000) == 0xc000) {
          puts((char *)(DAT_00012dd0 + 0x129e4));
        }
        memset(local_15c,0,0x80);
        memset(asStack_dc,0,0x80);
        iVar6 = getsockname(iVar4,local_15c,(socklen_t *)&local_1d0);
        if (iVar6 == 0) {
          iVar4 = getpeername(iVar4,asStack_dc,&local_1cc);
          FUN_00012328(iVar5);
          printf((char *)(DAT_00012dd4 + 0x12a4c));
          pcVar8 = (char *)(uint)local_15c[0].sa_family;
          if (pcVar8 == (char *)0x2) {
            pcVar7 = acStack_5c;
            puts((char *)(DAT_00012df4 + 0x12b58));
            pcVar8 = inet_ntop(2,local_15c[0].sa_data + 2,pcVar7,0x2e);
            if (pcVar8 != (char *)0x0) {
              FUN_00012328(iVar5);
              printf((char *)(DAT_00012df8 + 0x12b94),pcVar7,
                     ((ushort)local_15c[0].sa_data._0_2_ & 0xff) << 8 |
                     (uint)((ushort)local_15c[0].sa_data._0_2_ >> 8));
            }
            if ((iVar4 == 0) &&
               (pcVar8 = inet_ntop(2,asStack_dc[0].sa_data + 2,pcVar7,0x2e), pcVar8 != (char *)0x0))
            {
              FUN_00012328(iVar5);
              __format = (char *)(DAT_00012dfc + 0x12be4);
              pcVar8 = (char *)(((ushort)asStack_dc[0].sa_data._0_2_ & 0xff) << 8 |
                               (uint)((ushort)asStack_dc[0].sa_data._0_2_ >> 8));
LAB_00012af8:
              printf(__format,pcVar7,pcVar8);
            }
          }
          else if (pcVar8 < (char *)0x3) {
            if (pcVar8 == (char *)0x1) {
              puts((char *)(DAT_00012de0 + 0x12aa0));
              if (local_15c[0].sa_data[0] == '\0') {
                pcVar8 = local_15c[0].sa_data + 1;
                FUN_00012328(iVar5);
                printf((char *)(DAT_00012de4 + 0x12ad0),(int)local_1d0 - 3,pcVar8);
                if (iVar4 == 0) {
                  FUN_00012328(iVar5);
                  pcVar7 = (char *)((int)local_1d0 - 3);
                  __format = (char *)(DAT_00012de8 + 0x12afc);
                  goto LAB_00012af8;
                }
              }
              else {
                FUN_00012328(iVar5);
                printf((char *)(DAT_00012dec + 0x12b1c),local_15c[0].sa_data);
                if (iVar4 == 0) {
                  FUN_00012328(iVar5);
                  pcVar8 = asStack_dc[0].sa_data;
                  pcVar7 = (char *)(DAT_00012df0 + 0x12b44);
                  goto LAB_00012b40;
                }
              }
            }
            else {
LAB_00012a64:
              pcVar7 = (char *)(DAT_00012dd8 + 0x12a74);
LAB_00012b40:
              printf(pcVar7,pcVar8);
            }
          }
          else if (pcVar8 == (char *)0xa) {
            pcVar7 = acStack_5c;
            puts((char *)(DAT_00012e00 + 0x12bfc));
            pcVar8 = inet_ntop(10,local_15c[0].sa_data + 6,pcVar7,0x2e);
            if (pcVar8 != (char *)0x0) {
              FUN_00012328(iVar5);
              printf((char *)(DAT_00012e04 + 0x12c38),pcVar7,
                     ((ushort)local_15c[0].sa_data._0_2_ & 0xff) << 8 |
                     (uint)((ushort)local_15c[0].sa_data._0_2_ >> 8));
            }
            if ((iVar4 == 0) &&
               (pcVar8 = inet_ntop(10,asStack_dc[0].sa_data + 6,pcVar7,0x2e), pcVar8 != (char *)0x0)
               ) {
              FUN_00012328(iVar5);
              __format = (char *)(DAT_00012e08 + 0x12c88);
              pcVar8 = (char *)(((ushort)asStack_dc[0].sa_data._0_2_ & 0xff) << 8 |
                               (uint)((ushort)asStack_dc[0].sa_data._0_2_ >> 8));
              goto LAB_00012af8;
            }
          }
          else {
            if (pcVar8 != (char *)0x1f) goto LAB_00012a64;
            puts((char *)(DAT_00012ddc + 0x12a90));
          }
        }
      }
      close(local_1d4);
      goto LAB_00012474;
    case (void *)0x69:
      dbus_message_iter_get_basic(param_1,&local_1c8);
      pcVar8 = (char *)(DAT_00012d60 + 0x12584);
      pvVar3 = (void *)local_1c8.st_dev;
      goto LAB_00012540;
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
      pcVar8 = (char *)(DAT_00012d58 + 0x12544);
      pvVar3 = (void *)(int)(short)local_1c8.st_dev;
      goto LAB_00012540;
    case (void *)0x6f:
      dbus_message_iter_get_basic(param_1,&local_1c8);
      if (param_2 == 0) {
        printf((char *)(DAT_00012d4c + 0x12500));
      }
      printf((char *)(DAT_00012d50 + 0x12510),(void *)local_1c8.st_dev);
      if (param_2 == 0) {
        pcVar8 = (char *)(DAT_00012d54 + 0x12524);
        goto LAB_00012470;
      }
      goto LAB_00012474;
    case (void *)0x70:
      break;
    case (void *)0x71:
      dbus_message_iter_get_basic(param_1,&local_1c8);
      pcVar8 = (char *)(DAT_00012d5c + 0x12568);
      pvVar3 = (void *)((uint)(void *)local_1c8.st_dev & 0xffff);
      goto LAB_00012540;
    case (void *)0x72:
      dbus_message_iter_recurse(param_1,&local_1c8);
      puts((char *)(DAT_00012da4 + 0x12840));
      while (iVar4 = dbus_message_iter_get_arg_type(&local_1c8), iVar4 != 0) {
        FUN_00012354(&local_1c8,param_2,iVar13);
        dbus_message_iter_next(&local_1c8);
        iVar4 = dbus_message_iter_get_arg_type(&local_1c8);
        if (iVar4 != 0) {
          putchar(0x2c);
        }
      }
      FUN_00012328(param_3);
      pcVar8 = (char *)(DAT_00012da8 + 0x12864);
      goto LAB_00012470;
    case (void *)0x73:
      dbus_message_iter_get_basic(param_1,&local_1c8);
      if (param_2 == 0) {
        printf((char *)(DAT_00012d34 + 0x12450));
      }
      printf((char *)(DAT_00012d38 + 0x12460),(void *)local_1c8.st_dev);
      if (param_2 == 0) {
        pcVar8 = (char *)(DAT_00012d3c + 0x12474);
        goto LAB_00012470;
      }
      goto LAB_00012474;
    case (void *)0x74:
      dbus_message_iter_get_basic(param_1,&local_1c8);
      pcVar8 = (char *)(DAT_00012d6c + 0x125dc);
      uVar9 = extraout_r1_00;
      goto LAB_000125b8;
    case (void *)0x75:
      dbus_message_iter_get_basic(param_1,&local_1c8);
      pcVar8 = (char *)(DAT_00012d64 + 0x125a0);
      pvVar3 = (void *)local_1c8.st_dev;
      goto LAB_00012540;
    case (void *)0x76:
      dbus_message_iter_recurse(param_1,&local_1c8);
      printf((char *)(DAT_00012d84 + 0x1266c));
      FUN_00012354(&local_1c8,param_2,iVar13);
      goto LAB_00012474;
    case (void *)0x77:
      break;
    case (void *)0x78:
      dbus_message_iter_get_basic(param_1,&local_1c8);
      pcVar8 = (char *)(DAT_00012d68 + 0x125bc);
      uVar9 = extraout_r1;
LAB_000125b8:
      printf(pcVar8,uVar9,(void *)local_1c8.st_dev,local_1c8.st_dev._4_4_);
      goto LAB_00012474;
    case (void *)0x79:
      dbus_message_iter_get_basic(param_1,&local_1c8);
      pcVar8 = (char *)(DAT_00012d74 + 0x12618);
      pvVar3 = (void *)((uint)(void *)local_1c8.st_dev & 0xff);
      goto LAB_00012540;
    }
    pcVar8 = (char *)(DAT_00012e0c + 0x12ca0);
LAB_00012540:
    printf(pcVar8,pvVar3);
    goto LAB_00012474;
  }
  goto LAB_00012484;
LAB_00012ca0:
  uVar14 = 0;
  pcVar8 = (char *)(DAT_00012e14 + 0x12cb8);
  puts((char *)(DAT_00012e10 + 0x12cb4));
  FUN_00012328(iVar13);
  do {
    pbVar1 = (byte *)((int)pvVar3 + uVar14);
    uVar14 = uVar14 + 1;
    printf(pcVar8,(uint)*pbVar1);
    if (uVar14 == uVar12) break;
    if (uVar14 == uVar11 * (uVar14 / uVar11)) {
      putchar(10);
      FUN_00012328(iVar13);
    }
    else {
      putchar(0x20);
    }
  } while (uVar14 < uVar12);
  putchar(10);
  FUN_00012328(param_3);
  pcVar8 = (char *)(DAT_00012e18 + 0x12d24);
LAB_00012470:
  puts(pcVar8);
LAB_00012474:
  iVar4 = dbus_message_iter_next(param_1);
  if (iVar4 == 0) {
LAB_00012484:
    if (local_2c == *piVar10) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  goto LAB_000123a4;
}



/* ===== FUN_00012e1c @ 00012e1c size=484 ===== */

void FUN_00012e1c(undefined4 param_1,int param_2,uint param_3,uint param_4)

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
  
  iVar7 = DAT_00013000 + 0x12e3c;
  piVar8 = *(int **)(iVar7 + DAT_00013004);
  local_2c = *piVar8;
  uVar1 = dbus_message_get_type();
  iVar2 = dbus_message_get_sender(param_1);
  uVar9 = dbus_message_get_destination(param_1);
  if (param_2 != 0) goto LAB_00012f54;
  uVar3 = FUN_000122b8(uVar1,(int)((ulonglong)uVar9 >> 0x20),param_3 | param_4,(int)uVar9);
  if (extraout_r2 == 0) {
    if (iVar2 == 0) {
      iVar2 = DAT_00013014 + 0x12ef0;
    }
    printf((char *)(DAT_0001301c + 0x12f08),uVar3,iVar2);
  }
  else {
    if (iVar2 == 0) {
      iVar2 = DAT_00013008 + 0x12e9c;
    }
    iVar6 = extraout_r3;
    if (extraout_r3 == 0) {
      iVar6 = DAT_0001300c + 0x12ea8;
    }
    printf((char *)(DAT_00013010 + 0x12ec0),uVar3,param_3,param_4,iVar2,iVar6);
  }
  switch(uVar1) {
  case 1:
    break;
  case 2:
    uVar1 = dbus_message_get_serial(param_1);
    uVar3 = dbus_message_get_reply_serial(param_1);
    __format = (char *)(DAT_00013028 + 0x12fc0);
    goto LAB_00012fbc;
  case 3:
    uVar1 = dbus_message_get_error_name(param_1);
    uVar3 = dbus_message_get_reply_serial(param_1);
    __format = (char *)(DAT_0001302c + 0x12fec);
LAB_00012fbc:
    printf(__format,uVar1,uVar3);
    goto LAB_00012f54;
  case 4:
    break;
  default:
    putchar(10);
    goto LAB_00012f54;
  }
  uVar1 = dbus_message_get_serial(param_1);
  uVar3 = dbus_message_get_path(param_1);
  uVar4 = dbus_message_get_interface(param_1);
  uVar5 = dbus_message_get_member(param_1);
  printf((char *)(DAT_00013020 + 0x12f54),uVar1,uVar3,uVar4,uVar5);
LAB_00012f54:
  dbus_message_iter_init(param_1,auStack_64);
  FUN_00012354(auStack_64,param_2,1);
  fflush((FILE *)**(undefined4 **)(iVar7 + DAT_00013024));
  if (local_2c != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00013030 @ 00013030 size=60 ===== */

void FUN_00013030(int param_1)

{
  fprintf((FILE *)**(undefined4 **)(DAT_0001306c + 0x13040 + DAT_00013070),
          (char *)(DAT_00013078 + 0x1305c),*(undefined4 *)(DAT_00013074 + 0x13058));
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* ===== FUN_0001307c @ 0001307c size=412 ===== */

undefined4 FUN_0001307c(char *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0001321c;
  iVar2 = strcmp(param_1,(char *)(DAT_00013218 + 0x13090));
  if (iVar2 == 0) {
    return 0x73;
  }
  iVar2 = strcmp(param_1,(char *)(DAT_00013220 + 78000));
  if (iVar2 == 0) {
    return 0x6e;
  }
  iVar2 = strcmp(param_1,(char *)(DAT_00013224 + 0x130c8));
  if (iVar2 == 0) {
    return 0x71;
  }
  iVar2 = strcmp(param_1,(char *)(DAT_00013228 + 0x130e0));
  if (iVar2 == 0) {
    return 0x69;
  }
  iVar2 = strcmp(param_1,(char *)(DAT_0001322c + 0x130f8));
  if (iVar2 == 0) {
    return 0x75;
  }
  iVar2 = strcmp(param_1,(char *)(DAT_00013230 + 0x13110));
  if (iVar2 == 0) {
    return 0x78;
  }
  iVar2 = strcmp(param_1,(char *)(DAT_00013234 + 0x13128));
  if (iVar2 == 0) {
    return 0x74;
  }
  iVar2 = strcmp(param_1,(char *)(DAT_00013238 + 0x13140));
  if (iVar2 != 0) {
    iVar2 = strcmp(param_1,(char *)(DAT_0001323c + 0x13158));
    if (iVar2 == 0) {
      return 0x79;
    }
    iVar2 = strcmp(param_1,(char *)(DAT_00013240 + 0x13170));
    if (iVar2 != 0) {
      iVar2 = strcmp(param_1,(char *)(DAT_00013244 + 0x13188));
      if (iVar2 != 0) {
        fprintf((FILE *)**(undefined4 **)(iVar1 + 0x130a0 + DAT_00013248),
                (char *)(DAT_00013250 + 0x131b4),*(undefined4 *)(DAT_0001324c + 0x131a8),param_1);
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      return 0x6f;
    }
    return 0x62;
  }
  return 100;
}



/* ===== FUN_00013254 @ 00013254 size=64 ===== */

void FUN_00013254(int param_1)

{
  if (param_1 != 0) {
    return;
  }
  fprintf((FILE *)**(undefined4 **)(DAT_00013294 + 0x13264 + DAT_00013298),
          (char *)(DAT_000132a0 + 0x13284),*(undefined4 *)(DAT_0001329c + 0x13280));
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_000132a4 @ 000132a4 size=628 ===== */

void FUN_000132a4(undefined4 param_1,uint param_2,char *param_3)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  char *__format;
  char **ppcVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  char *local_54 [2];
  undefined1 local_49;
  undefined2 local_48;
  undefined2 local_46;
  char *local_44;
  char *local_40;
  char *local_3c;
  ulonglong local_38;
  longlong local_30;
  double local_28;
  int local_1c;
  
  iVar7 = DAT_00013518 + 0x132c0;
  piVar8 = *(int **)(iVar7 + DAT_0001351c);
  local_1c = *piVar8;
  local_54[0] = param_3;
  switch(param_2) {
  case 0x62:
    ppcVar5 = &local_3c;
    iVar3 = strcmp(param_3,(char *)(DAT_00013520 + 0x13484));
    if (iVar3 == 0) {
      local_3c = (char *)0x1;
    }
    else {
      iVar3 = strcmp(param_3,(char *)(DAT_00013524 + 0x134b0));
      if (iVar3 != 0) {
        puVar4 = *(undefined4 **)(iVar7 + DAT_0001352c);
        uVar6 = *(undefined4 *)(DAT_00013528 + 0x134cc);
        __format = (char *)(DAT_00013530 + 0x134e0);
        goto LAB_000134dc;
      }
      local_3c = (char *)0x0;
    }
    uVar6 = 0x62;
    goto LAB_00013358;
  case 99:
    break;
  case 100:
    local_28 = strtod(param_3,(char **)0x0);
    ppcVar5 = (char **)&local_28;
    uVar6 = 100;
    goto LAB_00013358;
  case 0x65:
    break;
  case 0x66:
    break;
  case 0x67:
    break;
  case 0x68:
    break;
  case 0x69:
    local_40 = (char *)strtol(param_3,(char **)0x0,0);
    ppcVar5 = &local_40;
    uVar6 = 0x69;
    goto LAB_00013358;
  case 0x6a:
    break;
  case 0x6b:
    break;
  case 0x6c:
    break;
  case 0x6d:
    break;
  case 0x6e:
    lVar2 = strtol(param_3,(char **)0x0,0);
    local_46 = (undefined2)lVar2;
    ppcVar5 = (char **)&local_46;
    uVar6 = 0x6e;
    goto LAB_00013358;
  case 0x6f:
    ppcVar5 = local_54;
    uVar6 = 0x6f;
    goto LAB_00013358;
  case 0x70:
    break;
  case 0x71:
    uVar1 = strtoul(param_3,(char **)0x0,0);
    local_48 = (undefined2)uVar1;
    ppcVar5 = (char **)&local_48;
    uVar6 = 0x71;
    goto LAB_00013358;
  case 0x72:
    break;
  case 0x73:
    ppcVar5 = local_54;
    uVar6 = 0x73;
    goto LAB_00013358;
  case 0x74:
    local_38 = strtoull(param_3,(char **)0x0,0);
    ppcVar5 = (char **)&local_38;
    uVar6 = 0x74;
    goto LAB_00013358;
  case 0x75:
    local_44 = (char *)strtoul(param_3,(char **)0x0,0);
    ppcVar5 = &local_44;
    uVar6 = 0x75;
    goto LAB_00013358;
  case 0x76:
    break;
  case 0x77:
    break;
  case 0x78:
    local_30 = strtoll(param_3,(char **)0x0,0);
    ppcVar5 = (char **)&local_30;
    uVar6 = 0x78;
    goto LAB_00013358;
  case 0x79:
    uVar1 = strtoul(param_3,(char **)0x0,0);
    local_49 = (undefined1)uVar1;
    ppcVar5 = (char **)&local_49;
    uVar6 = 0x79;
LAB_00013358:
    dbus_message_iter_append_basic(param_1,uVar6,ppcVar5);
    FUN_00013254();
    if (local_1c != *piVar8) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  puVar4 = *(undefined4 **)(iVar7 + DAT_0001352c);
  uVar6 = *(undefined4 *)(DAT_00013534 + 0x13504);
  __format = (char *)(DAT_00013538 + 0x13510);
  param_3 = (char *)(param_2 & 0xff);
LAB_000134dc:
  fprintf((FILE *)*puVar4,__format,uVar6,param_3);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_0001353c @ 0001353c size=48 ===== */

void FUN_0001353c(undefined4 param_1)

{
  fprintf((FILE *)**(undefined4 **)(DAT_0001356c + 0x1354c + DAT_00013570),
          (char *)(DAT_00013574 + 0x13560),param_1);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00013578 @ 00013578 size=92 ===== */

undefined4 FUN_00013578(int param_1,void *param_2,uint param_3)

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



/* ===== _DT_FINI @ 000135d4 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::dbus_message_iter_init_append @ 00026004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_iter_init_append(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_error_init @ 00026008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_error_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0002600c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00026010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 00026014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_flush @ 00026018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_flush(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_error_is_set @ 0002601c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_error_is_set(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_iter_open_container @ 00026020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_iter_open_container(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_get_destination @ 00026024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_get_destination(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_iter_append_basic @ 00026028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_iter_append_basic(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0002602c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_get_serial @ 00026030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_get_serial(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00026034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00026038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 0002603c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00026040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_unref @ 00026044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_unref(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 00026048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_set_destination @ 0002604c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_set_destination(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_iter_next @ 00026050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_iter_next(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 00026054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strdup @ 00026058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_iter_get_basic @ 0002605c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_iter_get_basic(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoll @ 00026060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

longlong strtoll(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 00026064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_send_with_reply_and_block @ 00026068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_send_with_reply_and_block(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_bus_register @ 0002606c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_bus_register(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_new_method_call @ 00026070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_new_method_call(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_error_free @ 00026074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_error_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_get_real_time @ 00026078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_get_real_time(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getsockname @ 0002607c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getsockname(int __fd,sockaddr *__addr,socklen_t *__len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 00026080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_open @ 00026084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_open(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_iter_init @ 00026088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_iter_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_malloc @ 0002608c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_malloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00026090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_iter_get_fixed_array @ 00026098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_iter_get_fixed_array(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 0002609c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 000260a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 000260a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 000260a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 000260ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_bus_get @ 000260b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_bus_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 000260b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 000260b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 000260bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_unref @ 000260c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_unref(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_get_type @ 000260c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_get_type(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_get_path @ 000260cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_get_path(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoull @ 000260d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong strtoull(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 000260d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_new_signal @ 000260d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_new_signal(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 000260dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpeername @ 000260e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getpeername(int __fd,sockaddr *__addr,socklen_t *__len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_send @ 000260e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_send(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_get_reply_serial @ 000260e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_get_reply_serial(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_set_auto_start @ 000260ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_set_auto_start(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_validate_bus_name @ 000260f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_validate_bus_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_get_interface @ 000260f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_get_interface(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_get_member @ 000260f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_get_member(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 000260fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_iter_get_arg_type @ 00026100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_iter_get_arg_type(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_free @ 00026104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_iter_recurse @ 00026108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_iter_recurse(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_get_error_name @ 0002610c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_get_error_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00026110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fstat64 @ 00026114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat64(int __fd,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_get_sender @ 00026118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_get_sender(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_type_from_string @ 0002611c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_type_from_string(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtok @ 00026120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strtok(char *__s,char *__delim)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::inet_ntop @ 00026124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * inet_ntop(int __af,void *__cp,char *__buf,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00026128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtod @ 0002612c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double strtod(char *__nptr,char **__endptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 00026130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 00026134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_iter_close_container @ 00026138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_iter_close_container(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


