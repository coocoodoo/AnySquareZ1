// dbus-test-tool — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00010e6c size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::dbus_malloc0 @ 00010e90 size=12 ===== */

void dbus_malloc0(void)

{
  (*(code *)PTR_dbus_malloc0_00023efc)();
  return;
}



/* ===== <EXTERNAL>::dbus_error_init @ 00010e9c size=12 ===== */

void dbus_error_init(void)

{
  (*(code *)PTR_dbus_error_init_00023f00)();
  return;
}



/* ===== <EXTERNAL>::write @ 00010ec0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_00023f0c)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::dbus_message_new_method_return @ 00010ecc size=12 ===== */

void dbus_message_new_method_return(void)

{
  (*(code *)PTR_dbus_message_new_method_return_00023f10)();
  return;
}



/* ===== <EXTERNAL>::dbus_connection_flush @ 00010ed8 size=12 ===== */

void dbus_connection_flush(void)

{
  (*(code *)PTR_dbus_connection_flush_00023f14)();
  return;
}



/* ===== <EXTERNAL>::sscanf @ 00010ee4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_00023f18)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::srand @ 00010ef0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_00023f1c)(__seed);
  return;
}



/* ===== <EXTERNAL>::dbus_pending_call_unref @ 00010efc size=12 ===== */

void dbus_pending_call_unref(void)

{
  (*(code *)PTR_dbus_pending_call_unref_00023f20)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010f08 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00023f24)();
  return;
}



/* ===== <EXTERNAL>::strcmp @ 00010f14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00023f28)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::time @ 00010f20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_00023f2c)(__timer);
  return tVar1;
}



/* ===== <EXTERNAL>::_dbus_sleep_milliseconds @ 00010f2c size=12 ===== */

void _dbus_sleep_milliseconds(void)

{
  (*(code *)PTR__dbus_sleep_milliseconds_00023f30)();
  return;
}



/* ===== <EXTERNAL>::memset @ 00010f38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00023f34)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::rand @ 00010f44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_00023f38)();
  return iVar1;
}



/* ===== <EXTERNAL>::dbus_connection_add_filter @ 00010f50 size=12 ===== */

void dbus_connection_add_filter(void)

{
  (*(code *)PTR_dbus_connection_add_filter_00023f3c)();
  return;
}



/* ===== <EXTERNAL>::dbus_connection_unref @ 00010f5c size=12 ===== */

void dbus_connection_unref(void)

{
  (*(code *)PTR_dbus_connection_unref_00023f40)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_demarshal @ 00010f68 size=12 ===== */

void dbus_message_demarshal(void)

{
  (*(code *)PTR_dbus_message_demarshal_00023f44)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_append_args @ 00010f74 size=12 ===== */

void dbus_message_append_args(void)

{
  (*(code *)PTR_dbus_message_append_args_00023f48)();
  return;
}



/* ===== <EXTERNAL>::strstr @ 00010f80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_00023f4c)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::dbus_message_new_method_call @ 00010f8c size=12 ===== */

void dbus_message_new_method_call(void)

{
  (*(code *)PTR_dbus_message_new_method_call_00023f50)();
  return;
}



/* ===== <EXTERNAL>::dbus_error_free @ 00010f98 size=12 ===== */

void dbus_error_free(void)

{
  (*(code *)PTR_dbus_error_free_00023f54)();
  return;
}



/* ===== <EXTERNAL>::dbus_connection_close @ 00010fa4 size=12 ===== */

void dbus_connection_close(void)

{
  (*(code *)PTR_dbus_connection_close_00023f58)();
  return;
}



/* ===== <EXTERNAL>::dbus_shutdown @ 00010fb0 size=12 ===== */

void dbus_shutdown(void)

{
  (*(code *)PTR_dbus_shutdown_00023f5c)();
  return;
}



/* ===== <EXTERNAL>::dbus_malloc @ 00010fbc size=12 ===== */

void dbus_malloc(void)

{
  (*(code *)PTR_dbus_malloc_00023f60)();
  return;
}



/* ===== <EXTERNAL>::dbus_pending_call_set_notify @ 00010fc8 size=12 ===== */

void dbus_pending_call_set_notify(void)

{
  (*(code *)PTR_dbus_pending_call_set_notify_00023f64)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_set_no_reply @ 00010fd4 size=12 ===== */

void dbus_message_set_no_reply(void)

{
  (*(code *)PTR_dbus_message_set_no_reply_00023f68)();
  return;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00010fe0 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00023f6c)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010fec size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00023f70)();
  return;
}



/* ===== <EXTERNAL>::exit @ 00010ff8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00023f74)(__status);
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00011004 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00023f78)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::dbus_bus_get @ 00011010 size=12 ===== */

void dbus_bus_get(void)

{
  (*(code *)PTR_dbus_bus_get_00023f7c)();
  return;
}



/* ===== <EXTERNAL>::dbus_set_error_from_message @ 0001101c size=12 ===== */

void dbus_set_error_from_message(void)

{
  (*(code *)PTR_dbus_set_error_from_message_00023f80)();
  return;
}



/* ===== <EXTERNAL>::strtoul @ 00011028 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_00023f84)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::fread @ 00011034 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_00023f88)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::dbus_realloc @ 00011040 size=12 ===== */

void dbus_realloc(void)

{
  (*(code *)PTR_dbus_realloc_00023f8c)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_unref @ 0001104c size=12 ===== */

void dbus_message_unref(void)

{
  (*(code *)PTR_dbus_message_unref_00023f90)();
  return;
}



/* ===== <EXTERNAL>::dbus_connection_read_write_dispatch @ 00011058 size=12 ===== */

void dbus_connection_read_write_dispatch(void)

{
  (*(code *)PTR_dbus_connection_read_write_dispatch_00023f94)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_get_type @ 00011064 size=12 ===== */

void dbus_message_get_type(void)

{
  (*(code *)PTR_dbus_message_get_type_00023f98)();
  return;
}



/* ===== <EXTERNAL>::fputs @ 0001107c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_00023fa0)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::dbus_connection_send @ 00011088 size=12 ===== */

void dbus_connection_send(void)

{
  (*(code *)PTR_dbus_connection_send_00023fa4)();
  return;
}



/* ===== <EXTERNAL>::dbus_bus_request_name @ 00011094 size=12 ===== */

void dbus_bus_request_name(void)

{
  (*(code *)PTR_dbus_bus_request_name_00023fa8)();
  return;
}



/* ===== <EXTERNAL>::dbus_free @ 000110a0 size=12 ===== */

void dbus_free(void)

{
  (*(code *)PTR_dbus_free_00023fac)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_copy @ 000110ac size=12 ===== */

void dbus_message_copy(void)

{
  (*(code *)PTR_dbus_message_copy_00023fb0)();
  return;
}



/* ===== <EXTERNAL>::atoi @ 000110b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_00023fb4)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::dbus_bus_get_private @ 000110c4 size=12 ===== */

void dbus_bus_get_private(void)

{
  (*(code *)PTR_dbus_bus_get_private_00023fb8)();
  return;
}



/* ===== <EXTERNAL>::dbus_connection_send_with_reply @ 000110d0 size=12 ===== */

void dbus_connection_send_with_reply(void)

{
  (*(code *)PTR_dbus_connection_send_with_reply_00023fbc)();
  return;
}



/* ===== <EXTERNAL>::puts @ 000110dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00023fc0)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::dbus_bus_get_unique_name @ 000110e8 size=12 ===== */

void dbus_bus_get_unique_name(void)

{
  (*(code *)PTR_dbus_bus_get_unique_name_00023fc4)();
  return;
}



/* ===== <EXTERNAL>::dbus_pending_call_steal_reply @ 000110f4 size=12 ===== */

void dbus_pending_call_steal_reply(void)

{
  (*(code *)PTR_dbus_pending_call_steal_reply_00023fc8)();
  return;
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 00011100 size=12 ===== */

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00023fcc)();
  return;
}



/* ===== <EXTERNAL>::dbus_pending_call_get_completed @ 0001110c size=12 ===== */

void dbus_pending_call_get_completed(void)

{
  (*(code *)PTR_dbus_pending_call_get_completed_00023fd0)();
  return;
}



/* ===== entry @ 0001117c size=80 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00023f08)
            (*(undefined4 *)((int)&DAT_000111c4 + DAT_000111d0 + DAT_000111c4),param_2,
             &stack0x00000004,*(undefined4 *)((int)&DAT_000111c4 + DAT_000111cc + DAT_000111c4),
             *(undefined4 *)((int)&DAT_000111c4 + DAT_000111c8 + DAT_000111c4),param_1);
  return;
}



/* ===== FUN_000111d4 @ 000111d4 size=72 ===== */

void FUN_000111d4(void)

{
  code *pcVar1;
  
  if (DAT_00011220 + 0x111ec == DAT_0001121c + 0x111e4) {
    return;
  }
  pcVar1 = *(code **)(DAT_00011224 + 0x111f4 + DAT_00011228);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 00011290 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00011304 + 0x112ac;
  if (*(char *)(DAT_00011300 + 0x112a0) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_00011308) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_0001130c + 0x112cc));
  }
  FUN_000111d4();
  if (*(int *)(iVar1 + DAT_00011310) != 0) {
    __deregister_frame_info(DAT_00011314 + 0x112ec);
  }
  *(undefined1 *)(DAT_00011318 + 0x112fc) = 1;
  return;
}



/* ===== _INIT_0 @ 0001131c size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00011354 + 0x1132c + DAT_00011358) != 0) {
    __register_frame_info(DAT_00011360 + 0x1134c,DAT_0001135c + 0x11348);
  }
  if (((DAT_00011284 + 0x11244) - (DAT_00011280 + 0x1123c) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00011288 + 0x1124c + DAT_0001128c);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== FUN_00011364 @ 00011364 size=268 ===== */

void FUN_00011364(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *__s;
  int iVar3;
  int *piVar4;
  undefined4 local_2c;
  undefined4 uStack_28;
  uint local_24;
  undefined4 uStack_20;
  int local_1c;
  
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar3 = DAT_00011470 + 0x11388;
  piVar4 = *(int **)(iVar3 + DAT_00011474);
  local_2c = 0;
  local_1c = *piVar4;
  local_24 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8) | 1;
  iVar1 = dbus_bus_get(param_1,&local_2c);
  if (iVar1 == 0) {
    fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00011478),(char *)(DAT_0001147c + 0x113c4),
            local_2c,uStack_28);
    dbus_error_free(&local_2c);
LAB_000113d4:
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (param_2 == 0) {
    __s = (char *)dbus_bus_get_unique_name();
    puts(__s);
  }
  else {
    iVar2 = dbus_bus_request_name(iVar1,param_2,4,0);
    if (iVar2 != 1) {
      fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00011478),(char *)(DAT_00011480 + 0x11414),
              param_2);
      goto LAB_000113d4;
    }
  }
  iVar3 = dbus_connection_add_filter(iVar1,DAT_00011484 + 0x1143c,0);
  if (iVar3 == 0) {
    FUN_00012468(DAT_00011488 + 0x11450);
  }
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1);
  }
  return;
}



/* ===== FUN_0001148c @ 0001148c size=152 ===== */

undefined4 FUN_0001148c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = dbus_message_get_type(param_2);
  if (iVar1 == 1) {
    if (0 < *(int *)(DAT_00011524 + 0x114b4)) {
      _dbus_sleep_milliseconds();
    }
    if (*(int *)(DAT_00011528 + 0x114c8) == 0) {
      iVar1 = dbus_message_new_method_return(param_2);
      if (iVar1 != 0) goto LAB_000114ec;
      iVar2 = DAT_0001152c + 0x114ec;
      while( true ) {
        FUN_00012468(iVar2);
LAB_000114ec:
        iVar2 = dbus_connection_send(param_1,iVar1,0);
        if (iVar2 != 0) break;
        iVar2 = DAT_00011530 + 0x1150c;
      }
      dbus_message_unref(iVar1);
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* ===== FUN_0001180c @ 0001180c size=152 ===== */

void FUN_0001180c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  int unaff_r4;
  int unaff_r5;
  undefined4 *puVar4;
  
  iVar1 = DAT_000118a4;
  iVar2 = dbus_malloc(0x1000);
  puVar4 = (undefined4 *)(iVar1 + 0x1182c);
  if (iVar2 != 0) {
    unaff_r4 = 0;
    unaff_r5 = 0x1000;
    puVar4 = *(undefined4 **)((int)puVar4 + DAT_000118ac);
    goto LAB_00011854;
  }
  do {
    FUN_00012468(DAT_000118a8 + 0x1183c);
    while( true ) {
      unaff_r5 = unaff_r5 + 0x1000;
      iVar2 = dbus_realloc(iVar2,unaff_r5);
      if (iVar2 == 0) break;
LAB_00011854:
      do {
        sVar3 = fread((void *)(iVar2 + unaff_r4),1,unaff_r5 - unaff_r4,(FILE *)*puVar4);
        if (sVar3 == 0) {
          *param_2 = unaff_r4;
          *param_1 = iVar2;
          return;
        }
        unaff_r4 = unaff_r4 + sVar3;
      } while (0xfff < (uint)(unaff_r5 - unaff_r4));
    }
  } while( true );
}



/* ===== FUN_000118b0 @ 000118b0 size=188 ===== */

void FUN_000118b0(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_2c;
  undefined4 local_28;
  int local_1c;
  
  iVar3 = DAT_0001196c + 0x118d0;
  piVar4 = *(int **)(iVar3 + DAT_00011970);
  local_1c = *piVar4;
  dbus_error_init(&local_2c);
  uVar1 = dbus_pending_call_steal_reply(param_1);
  if ((*(int *)(DAT_00011974 + 0x118f8) == 0) && (iVar2 = dbus_message_get_type(), iVar2 == 3)) {
    dbus_set_error_from_message(&local_2c,uVar1);
    fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00011978),(char *)(DAT_0001197c + 0x1193c),
            *param_2,local_2c,local_28);
  }
  *param_2 = *param_2 + 1;
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00011980 @ 00011980 size=44 ===== */

void FUN_00011980(void)

{
  fputs((char *)(DAT_000119b4 + 0x119a0),
        (FILE *)**(undefined4 **)(DAT_000119ac + 0x11990 + DAT_000119b0));
                    /* WARNING: Subroutine does not return */
  exit(2);
}



/* ===== FUN_000119b8 @ 000119b8 size=2556 ===== */

void FUN_000119b8(int param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  FILE *__stream;
  int *piVar6;
  char *__needle;
  char *__format;
  size_t sVar7;
  char *pcVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint *local_9c;
  int local_98;
  int local_94;
  int local_90;
  uint local_8c;
  int local_88;
  int local_84;
  undefined4 local_80;
  char *local_7c;
  uint local_78;
  int local_70;
  int local_6c;
  int local_54;
  char *local_50;
  char *local_4c;
  size_t local_48;
  uint local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  uint local_34;
  undefined4 uStack_30;
  int local_2c;
  
  pcVar8 = (char *)0x0;
  uVar15 = 0;
  iVar11 = DAT_000123b4 + 0x119d8;
  iVar14 = 1;
  piVar6 = *(int **)(iVar11 + DAT_000123b8);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_2c = *piVar6;
  local_54 = 0;
  local_50 = (char *)0x0;
  local_3c = 0;
  local_4c = (char *)0x0;
  local_34 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8) | 1;
  local_78 = time((time_t *)0x0);
  local_90 = 0x73;
  local_98 = 0;
  local_7c = (char *)(DAT_000123bc + 0x11a3c);
  local_9c = (uint *)0x0;
  __needle = (char *)(DAT_000123c0 + 0x11a4c);
  local_8c = 0;
  __format = (char *)(DAT_000123c4 + 0x11a5c);
  local_94 = 0;
  local_84 = 1;
  local_80 = 0;
  local_70 = param_1;
  local_6c = param_2;
  for (local_88 = 2; local_88 < local_70; local_88 = local_88 + 1) {
    pcVar4 = *(char **)(local_6c + local_88 * 4);
    if (local_50 == (char *)0x0) goto LAB_00011bc8;
    pcVar3 = strstr(pcVar4,__needle);
    if ((((pcVar4 != pcVar3) &&
         (iVar13 = strcmp(pcVar4,(char *)(DAT_000123d4 + 0x11b74)), iVar13 != 0)) &&
        (iVar13 = strcmp(pcVar4,(char *)(DAT_000123d8 + 0x11b8c)), iVar13 != 0)) &&
       (iVar13 = strcmp(pcVar4,(char *)(DAT_000123dc + 0x11ba4)), iVar13 != 0)) goto LAB_00011bc8;
    fputs((char *)(DAT_000123e4 + 0x11bc0),(FILE *)**(undefined4 **)(iVar11 + DAT_000123e0));
    do {
      while( true ) {
        while( true ) {
          while( true ) {
            FUN_00011980();
LAB_00011bc8:
            iVar13 = strcmp(pcVar4,(char *)(DAT_000123e8 + 0x11bd8));
            if (iVar13 == 0) {
              local_80 = 1;
              goto LAB_00011c24;
            }
            iVar13 = strcmp(pcVar4,(char *)(DAT_000123ec + 0x11bf0));
            if (iVar13 == 0) {
              local_80 = 0;
              goto LAB_00011c24;
            }
            pcVar3 = strstr(pcVar4,(char *)(DAT_000123f0 + 0x11c08));
            if (pcVar4 != pcVar3) break;
            local_84 = atoi(pcVar4 + 8);
            if (0 < local_84) goto LAB_00011c24;
          }
          iVar13 = strcmp(pcVar4,(char *)(DAT_000123f4 + 0x11c44));
          if (iVar13 == 0) {
            *(undefined4 *)(DAT_000123f8 + 0x11c5c) = 1;
            goto LAB_00011c24;
          }
          pcVar3 = strstr(pcVar4,(char *)(DAT_000123fc + 0x11c70));
          if (pcVar4 == pcVar3) {
            local_7c = pcVar4 + 7;
            goto LAB_00011c24;
          }
          pcVar3 = strstr(pcVar4,(char *)(DAT_00012400 + 0x11c90));
          if (pcVar4 == pcVar3) {
            local_50 = pcVar4 + 10;
            goto LAB_00011c24;
          }
          iVar13 = strcmp(pcVar4,(char *)(DAT_00012404 + 0x11cb0));
          if (iVar13 == 0) {
            FUN_0001180c(&local_4c,&local_48);
            local_50 = local_4c;
            goto LAB_00011c24;
          }
          iVar13 = strcmp(pcVar4,(char *)(DAT_00012408 + 0x11ce0));
          if (iVar13 == 0) {
            FUN_0001180c(&local_4c,&local_48);
            local_50 = local_4c;
            local_94 = dbus_message_demarshal(local_4c,local_48,&local_3c);
            if (local_94 == 0) {
              fprintf((FILE *)**(undefined4 **)(iVar11 + DAT_000123e0),
                      (char *)(DAT_0001240c + 73000),local_3c,uStack_38);
              goto LAB_00011d30;
            }
            iVar13 = dbus_message_get_type();
            if (iVar13 == 1) goto LAB_00011c24;
            pcVar8 = (char *)(DAT_00012410 + 0x11d58);
            __stream = (FILE *)**(undefined4 **)(iVar11 + DAT_000123e0);
            goto LAB_00011d58;
          }
          iVar13 = strcmp(pcVar4,(char *)(DAT_00012414 + 0x11d70));
          if (iVar13 == 0) {
            pcVar4 = (char *)(DAT_00012418 + 0x11d90);
            local_40 = iVar13;
            FUN_0001180c(&local_4c,&local_48);
            piVar9 = &local_40;
            puVar12 = &local_44;
            iVar13 = 0;
            pcVar8 = local_4c;
            goto LAB_00011d9c;
          }
          iVar13 = strcmp(pcVar4,(char *)(DAT_00012424 + 0x11ed8));
          if (iVar13 == 0) {
            local_90 = 0;
            goto LAB_00011c24;
          }
          iVar13 = strcmp(pcVar4,(char *)(DAT_00012428 + 0x11ef0));
          if (iVar13 == 0) {
            local_90 = 0x73;
            goto LAB_00011c24;
          }
          iVar13 = strcmp(pcVar4,(char *)(DAT_0001242c + 0x11f08));
          if (iVar13 == 0) {
            local_90 = 0x61;
            goto LAB_00011c24;
          }
          iVar13 = strcmp(pcVar4,(char *)(DAT_00012430 + 0x11f20));
          if (iVar13 != 0) break;
          if ((iVar14 < 2) && (local_9c == (uint *)0x0)) {
            local_8c = 1;
            goto LAB_00011f44;
          }
        }
        iVar13 = strcmp(pcVar4,(char *)(DAT_00012434 + 0x11f5c));
        if (iVar13 == 0) break;
        pcVar3 = strstr(pcVar4,(char *)(DAT_00012438 + 0x11f84));
        if (pcVar4 == pcVar3) {
          local_8c = local_8c | uVar15;
          if ((local_8c == 0) && (iVar14 = atoi(pcVar4 + 8), 0 < iVar14)) {
            uVar15 = 0;
            goto LAB_00011c24;
          }
        }
        else {
          pcVar3 = strstr(pcVar4,(char *)(DAT_0001243c + 0x11fc4));
          if (pcVar4 == pcVar3) {
            local_78 = strtoul(pcVar4 + 7,(char **)0x0,10);
            goto LAB_00011c24;
          }
          pcVar3 = strstr(pcVar4,(char *)(DAT_00012440 + 0x11ff4));
          if (pcVar4 == pcVar3) {
            local_9c = (uint *)atoi(pcVar4 + 0x14);
            if (local_9c == (uint *)0x0) {
              uVar10 = 0;
            }
            else {
              uVar10 = local_8c & 1;
            }
            if (uVar10 == 0) goto LAB_00011c24;
          }
        }
      }
    } while (1 < iVar14);
    uVar15 = 1;
LAB_00011f44:
    iVar14 = -1;
LAB_00011c24:
  }
  srand(local_78);
  if (local_50 == (char *)0x0) {
    local_50 = (char *)(DAT_000123c8 + 0x11a98);
    local_48 = 0xd;
  }
  iVar13 = 0;
  puVar12 = (uint *)0x0;
  local_8c = 0;
  local_70 = DAT_000123cc + 0x11ab8;
  piVar9 = (int *)0x0;
  local_6c = DAT_000123d0 + 0x11ac8;
LAB_00011ac8:
  if (uVar15 == 0) {
    bVar1 = local_54 < local_84;
  }
  else if ((int)local_8c < local_84) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    if (piVar9 != (int *)0x0) {
      dbus_connection_flush(piVar9);
      dbus_connection_close(piVar9);
      dbus_connection_unref(piVar9);
    }
    dbus_free(local_4c);
    dbus_free(pcVar8);
    if (local_94 != 0) {
      dbus_message_unref(local_94);
    }
    dbus_shutdown();
    uVar2 = 0;
    goto LAB_00012104;
  }
  if (piVar9 == (int *)0x0) {
LAB_000120b4:
    piVar9 = (int *)dbus_bus_get_private(local_80,&local_3c);
    if (piVar9 == (int *)0x0) {
      fprintf((FILE *)**(undefined4 **)(iVar11 + DAT_000123e0),(char *)(DAT_00012444 + 0x120e0),
              local_3c,uStack_38);
      dbus_error_free(&local_3c);
      dbus_free(pcVar8);
      dbus_free(local_4c);
      uVar2 = 1;
LAB_00012104:
      if (local_2c == *piVar6) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar2);
    }
    puVar12 = (uint *)0x0;
    iVar13 = local_54;
  }
  else if ((local_9c != (uint *)0x0 && puVar12 == local_9c) &&
          ((uVar15 != 0 || ((uint *)(local_54 - iVar13) == local_9c)))) {
    dbus_connection_flush(piVar9);
    dbus_connection_close(piVar9);
    dbus_connection_unref(piVar9);
    goto LAB_000120b4;
  }
  local_78 = DAT_00012448 + 0x12134;
LAB_000122f0:
  if (((local_84 <= (int)local_8c) || (local_9c != (uint *)0x0 && local_9c <= puVar12)) ||
     ((iVar14 != -1 && ((uint *)((iVar14 + local_54) - iVar13) <= puVar12)))) goto LAB_00012340;
  if (local_94 == 0) {
    pcVar4 = (char *)dbus_message_new_method_call(local_7c,local_78,local_6c,local_70);
    if (pcVar4 == (char *)0x0) {
      iVar5 = DAT_00012454 + 0x121b0;
      goto LAB_00011de4;
    }
    dbus_message_set_no_reply(pcVar4,uVar15);
    if (local_90 == 0x61) {
      sVar7 = local_48;
      if (pcVar8 != (char *)0x0) {
        iVar5 = rand();
        sVar7 = *(size_t *)(pcVar8 + (iVar5 - (iVar5 / local_98) * local_98) * 4);
      }
      iVar5 = dbus_message_append_args(pcVar4,0x61,0x79,&local_50,sVar7,0);
    }
    else {
      if (local_90 != 0x73) goto LAB_00012164;
      if (pcVar8 == (char *)0x0) {
        local_88 = 0;
      }
      else {
        iVar5 = rand();
        local_88 = *(int *)(pcVar8 + (iVar5 - (iVar5 / local_98) * local_98) * 4);
        local_4c[local_88] = '\0';
      }
      iVar5 = dbus_message_append_args(pcVar4,0x73,&local_50,0);
      if (pcVar8 != (char *)0x0) {
        local_4c[local_88] = 'X';
      }
    }
    if (iVar5 == 0) {
      iVar5 = DAT_00012458 + 0x12244;
      goto LAB_00011de4;
    }
  }
  else {
    pcVar4 = (char *)dbus_message_copy(local_94);
    if (pcVar4 == (char *)0x0) {
      iVar5 = DAT_0001244c + 0x1215c;
      goto LAB_00011de4;
    }
    dbus_message_set_no_reply(pcVar4,uVar15);
  }
LAB_00012164:
  if (uVar15 == 0) {
    iVar5 = dbus_connection_send_with_reply(piVar9,pcVar4,&local_40,0x7fffffff);
    if ((iVar5 == 0) || (local_40 == 0)) goto LAB_00012184;
    iVar5 = dbus_pending_call_get_completed();
    if (iVar5 == 0) {
      iVar5 = dbus_pending_call_set_notify(local_40,DAT_00012460 + 0x12380,&local_54,0);
      if (iVar5 == 0) {
        iVar5 = DAT_00012464 + 0x12394;
        goto LAB_00011de4;
      }
    }
    else {
      FUN_000118b0(local_40,&local_54);
    }
    dbus_pending_call_unref(local_40);
LAB_000122d8:
    puVar12 = (uint *)((int)puVar12 + 1);
    dbus_message_unref(pcVar4);
    local_8c = local_8c + 1;
    goto LAB_000122f0;
  }
  iVar5 = dbus_connection_send(piVar9,pcVar4,0);
  if (iVar5 != 0) goto LAB_000122d8;
LAB_00012184:
  iVar5 = DAT_00012450 + 0x12190;
LAB_00011de4:
  while( true ) {
    while( true ) {
      FUN_00012468(iVar5);
      do {
        local_98 = local_98 + 1;
        pcVar8 = pcVar8 + local_40;
LAB_00011d9c:
      } while ((pcVar8 < local_4c + local_48) &&
              (iVar5 = sscanf(pcVar8,pcVar4,puVar12,piVar9), iVar5 != 0));
      pcVar8 = (char *)dbus_malloc0(local_98 << 2);
      if (pcVar8 != (char *)0x0) break;
      iVar5 = DAT_0001241c + 0x11de8;
    }
    uVar10 = 0;
    pcVar4 = local_4c;
    for (; iVar13 < local_98 && pcVar4 < local_4c + local_48; iVar13 = iVar13 + 1) {
      sscanf(pcVar4,__format,&local_44,&local_40);
      *(uint *)(pcVar8 + iVar13 * 4) = local_44;
      if (uVar10 < local_44) {
        uVar10 = local_44;
      }
      pcVar4 = pcVar4 + local_40;
    }
    dbus_free();
    local_48 = uVar10 + 1;
    pcVar3 = (char *)dbus_malloc();
    sVar7 = local_48;
    local_50 = pcVar3;
    local_4c = pcVar3;
    if (pcVar3 != (char *)0x0) break;
    iVar5 = DAT_00012420 + 0x11e78;
    puVar12 = (uint *)0x0;
    piVar9 = (int *)0x0;
  }
  memset(pcVar3,0x58,local_48);
  pcVar3[sVar7 - 1] = '\0';
  goto LAB_00011c24;
LAB_00012340:
  iVar5 = dbus_connection_read_write_dispatch(piVar9,0xffffffff);
  if (iVar5 == 0) {
    pcVar8 = (char *)(DAT_0001245c + 0x12368);
    __stream = (FILE *)**(undefined4 **)(iVar11 + DAT_000123e0);
LAB_00011d58:
    fputs(pcVar8,__stream);
LAB_00011d30:
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  goto LAB_00011ac8;
}



/* ===== FUN_00012468 @ 00012468 size=48 ===== */

void FUN_00012468(undefined4 param_1)

{
  fprintf((FILE *)**(undefined4 **)(DAT_00012498 + 0x12478 + DAT_0001249c),
          (char *)(DAT_000124a0 + 0x1248c),param_1);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00012500 @ 00012500 size=104 ===== */

void FUN_00012500(void)

{
  int iVar1;
  FILE *__stream;
  undefined4 *puVar2;
  int *piVar3;
  
  iVar1 = DAT_00012578;
  puVar2 = *(undefined4 **)(DAT_00012568 + 0x12510 + DAT_0001256c);
  piVar3 = (int *)(DAT_00012574 + 0x12530);
  fputs((char *)(DAT_00012570 + 0x1252c),(FILE *)*puVar2);
  while( true ) {
    __stream = (FILE *)*puVar2;
    if (*piVar3 == 0) break;
    fprintf(__stream,(char *)(iVar1 + 0x12538));
    piVar3 = piVar3 + 2;
  }
  fputs((char *)(DAT_0001257c + 0x12554),__stream);
                    /* WARNING: Subroutine does not return */
  exit(2);
}



/* ===== _DT_FINI @ 00012580 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::dbus_malloc0 @ 00025000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_malloc0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_error_init @ 00025008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_error_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0002500c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00025010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 00025014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_new_method_return @ 00025018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_new_method_return(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_flush @ 0002501c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_flush(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 00025020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::srand @ 00025024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void srand(uint __seed)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_pending_call_unref @ 00025028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_pending_call_unref(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0002502c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00025030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::time @ 00025034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_sleep_milliseconds @ 00025038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_sleep_milliseconds(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002503c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rand @ 00025040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rand(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_add_filter @ 00025044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_add_filter(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_unref @ 00025048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_unref(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_demarshal @ 0002504c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_demarshal(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 00025050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_append_args @ 00025054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_append_args(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 00025058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_new_method_call @ 0002505c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_new_method_call(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_error_free @ 00025060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_error_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_close @ 00025064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_close(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_shutdown @ 00025068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_shutdown(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_malloc @ 0002506c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_malloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_pending_call_set_notify @ 00025070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_pending_call_set_notify(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_set_no_reply @ 00025078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_set_no_reply(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 0002507c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00025080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 00025084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00025088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_bus_get @ 0002508c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_bus_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_set_error_from_message @ 00025090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_set_error_from_message(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 00025094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 00025098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 0002509c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_realloc @ 000250a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_realloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_unref @ 000250a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_unref(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_read_write_dispatch @ 000250a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_read_write_dispatch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_get_type @ 000250ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_get_type(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 000250b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 000250b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_send @ 000250b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_send(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_bus_request_name @ 000250bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_bus_request_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_free @ 000250c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_copy @ 000250c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_copy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 000250c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_bus_get_private @ 000250cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_bus_get_private(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_send_with_reply @ 000250d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_send_with_reply(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 000250d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_bus_get_unique_name @ 000250dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_bus_get_unique_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_pending_call_steal_reply @ 000250e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_pending_call_steal_reply(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 000250e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_pending_call_get_completed @ 000250e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_pending_call_get_completed(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


