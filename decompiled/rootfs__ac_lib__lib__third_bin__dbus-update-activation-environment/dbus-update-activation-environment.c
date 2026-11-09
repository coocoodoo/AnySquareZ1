// dbus-update-activation-environment — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00010a40 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::dbus_message_iter_init_append @ 00010a64 size=12 ===== */

void dbus_message_iter_init_append(void)

{
  (*(code *)PTR_dbus_message_iter_init_append_00021f50)();
  return;
}



/* ===== <EXTERNAL>::abort @ 00010a70 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00021f54)();
  return;
}



/* ===== <EXTERNAL>::write @ 00010a88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_00021f5c)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::dbus_message_get_args @ 00010a94 size=12 ===== */

void dbus_message_get_args(void)

{
  (*(code *)PTR_dbus_message_get_args_00021f60)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_iter_open_container @ 00010aa0 size=12 ===== */

void dbus_message_iter_open_container(void)

{
  (*(code *)PTR_dbus_message_iter_open_container_00021f64)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_iter_append_basic @ 00010aac size=12 ===== */

void dbus_message_iter_append_basic(void)

{
  (*(code *)PTR_dbus_message_iter_append_basic_00021f68)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010ab8 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00021f6c)();
  return;
}



/* ===== <EXTERNAL>::strcmp @ 00010ac4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00021f70)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::stat64 @ 00010ad0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat64_00021f74)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::dbus_validate_utf8 @ 00010adc size=12 ===== */

void dbus_validate_utf8(void)

{
  (*(code *)PTR_dbus_validate_utf8_00021f78)();
  return;
}



/* ===== <EXTERNAL>::dbus_connection_unref @ 00010ae8 size=12 ===== */

void dbus_connection_unref(void)

{
  (*(code *)PTR_dbus_connection_unref_00021f7c)();
  return;
}



/* ===== <EXTERNAL>::strdup @ 00010af4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strdup_00021f80)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::vfprintf @ 00010b00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vfprintf_00021f84)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::dbus_connection_send_with_reply_and_block @ 00010b0c size=12 ===== */

void dbus_connection_send_with_reply_and_block(void)

{
  (*(code *)PTR_dbus_connection_send_with_reply_and_block_00021f88)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_new_method_call @ 00010b18 size=12 ===== */

void dbus_message_new_method_call(void)

{
  (*(code *)PTR_dbus_message_new_method_call_00021f8c)();
  return;
}



/* ===== <EXTERNAL>::dbus_error_free @ 00010b24 size=12 ===== */

void dbus_error_free(void)

{
  (*(code *)PTR_dbus_error_free_00021f90)();
  return;
}



/* ===== <EXTERNAL>::strchr @ 00010b30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_00021f94)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::asprintf @ 00010b3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int asprintf(char **__ptr,char *__fmt,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_asprintf_00021f98)(__ptr);
  return iVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00010b48 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00021f9c)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010b54 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00021fa0)();
  return;
}



/* ===== <EXTERNAL>::exit @ 00010b60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00021fa4)(__status);
  return;
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00010b6c size=12 ===== */

void __fputc_unlocked(void)

{
  (*(code *)PTR___fputc_unlocked_00021fa8)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00010b78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00021fac)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::dbus_bus_get @ 00010b84 size=12 ===== */

void dbus_bus_get(void)

{
  (*(code *)PTR_dbus_bus_get_00021fb0)();
  return;
}



/* ===== <EXTERNAL>::dbus_set_error_from_message @ 00010b90 size=12 ===== */

void dbus_set_error_from_message(void)

{
  (*(code *)PTR_dbus_set_error_from_message_00021fb4)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_unref @ 00010b9c size=12 ===== */

void dbus_message_unref(void)

{
  (*(code *)PTR_dbus_message_unref_00021fb8)();
  return;
}



/* ===== <EXTERNAL>::fputc @ 00010ba8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_00021fbc)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00010bb4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00021fc0)();
  return piVar1;
}



/* ===== <EXTERNAL>::free @ 00010bc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00021fc4)(__ptr);
  return;
}



/* ===== <EXTERNAL>::getenv @ 00010bcc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_00021fc8)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 00010bd8 size=12 ===== */

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00021fcc)();
  return;
}



/* ===== <EXTERNAL>::dbus_message_iter_close_container @ 00010be4 size=12 ===== */

void dbus_message_iter_close_container(void)

{
  (*(code *)PTR_dbus_message_iter_close_container_00021fd0)();
  return;
}



/* ===== FUN_00010bf0 @ 00010bf0 size=1720 ===== */

void FUN_00010bf0(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  char *__s1;
  char *__s2;
  undefined4 *puVar16;
  char *local_198;
  char *local_194;
  char *local_190;
  char *local_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  uint local_180;
  undefined4 uStack_17c;
  undefined1 auStack_178 [56];
  undefined1 auStack_140 [56];
  undefined1 auStack_108 [56];
  undefined1 auStack_d0 [56];
  stat64 sStack_98;
  int local_2c;
  
  uStack_184 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_17c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar14 = DAT_000112a8 + 0x10c0c;
  iVar15 = 0;
  bVar2 = false;
  piVar6 = *(int **)(iVar14 + DAT_000112ac);
  iVar12 = 1;
  local_188 = 0;
  local_2c = *piVar6;
  __s2 = (char *)(DAT_000112b0 + 0x10c44);
  local_180 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8) | 1;
  puVar16 = (undefined4 *)(DAT_000112b4 + 0x10c54);
  pcVar7 = (char *)(DAT_000112b8 + 0x10c58);
  pcVar8 = (char *)(DAT_000112bc + 0x10c64);
  pcVar9 = (char *)(DAT_000112c0 + 0x10c70);
  while ((iVar13 = param_1, iVar12 < param_1 &&
         (__s1 = *(char **)(param_2 + iVar12 * 4), iVar13 = iVar12, *__s1 == '-'))) {
    iVar12 = iVar12 + 1;
    iVar4 = strcmp(__s1,pcVar7);
    iVar13 = iVar12;
    if (iVar4 == 0) break;
    iVar13 = strcmp(__s1,pcVar8);
    if (iVar13 == 0) {
      bVar2 = true;
    }
    else {
      iVar13 = strcmp(__s1,__s2);
      if (iVar13 == 0) {
        iVar15 = 1;
      }
      else {
        iVar13 = strcmp(__s1,pcVar9);
        if (iVar13 != 0) {
          puVar16 = *(undefined4 **)(iVar14 + DAT_000112c4);
          iVar12 = DAT_000112d0 + 0x10d3c;
          pcVar7 = (char *)(DAT_000112d4 + 0x10d40);
          goto LAB_00010d3c;
        }
        *puVar16 = 1;
      }
    }
  }
  bVar1 = bVar2;
  if (param_1 <= iVar13) {
    bVar1 = false;
  }
  if (bVar1) {
    puVar16 = *(undefined4 **)(iVar14 + DAT_000112c4);
    iVar12 = DAT_000112c8 + 0x10cb0;
    pcVar7 = (char *)(DAT_000112cc + 0x10cb4);
LAB_00010d3c:
    fprintf((FILE *)*puVar16,pcVar7,iVar12);
    iVar12 = 0x40;
  }
  else {
    iVar12 = dbus_bus_get(0,&local_188);
    if (iVar12 != 0) {
      iVar3 = dbus_message_new_method_call
                        (DAT_000112e0 + 0x10dac,DAT_000112e8 + 0x10db8,DAT_000112e0 + 0x10dac,
                         DAT_000112e4 + 0x10db0);
      iVar4 = iVar3;
      if (iVar3 != 0) goto LAB_00010dcc;
LAB_00010dc0:
      do {
        iVar4 = FUN_00011630(DAT_000112ec + 0x10dcc);
LAB_00010dcc:
        dbus_message_iter_init_append(iVar4,auStack_178);
        iVar4 = dbus_message_iter_open_container
                          (auStack_178,0x61,DAT_000112f0 + 0x10df0,auStack_140);
      } while (iVar4 == 0);
      iVar4 = 0;
      if (iVar15 != 0) {
        pcVar7 = getenv((char *)(DAT_000112f4 + 0x10e0c));
        if (pcVar7 != (char *)0x0) {
          iVar4 = asprintf(&local_18c,(char *)(DAT_000112f8 + 0x10e24));
          if (iVar4 < 0) goto LAB_00010dc0;
          iVar4 = stat64(local_18c,&sStack_98);
          free(local_18c);
          if (iVar4 == 0) {
            iVar4 = dbus_message_new_method_call
                              (DAT_00011338 + 0x1119c,DAT_00011334 + 0x11198,DAT_00011330 + 0x11194,
                               DAT_0001132c + 0x11190);
            if (iVar4 != 0) {
              dbus_message_iter_init_append(iVar4,auStack_108);
              iVar10 = dbus_message_iter_open_container
                                 (auStack_108,0x61,DAT_0001133c + 0x111c8,auStack_d0);
              if (iVar10 != 0) goto LAB_000111d0;
            }
            goto LAB_00010dc0;
          }
        }
        iVar15 = 0;
        FUN_00011540(DAT_000112fc + 0x10e5c);
        iVar4 = iVar15;
      }
LAB_000111d0:
      if (bVar2) {
        iVar13 = 0;
      }
      iVar10 = DAT_00011340 + 0x111e4;
      pcVar7 = (char *)(DAT_00011344 + 0x111f0);
      iVar11 = DAT_00011348 + 0x111fc;
      do {
        if (bVar2) {
          pcVar8 = *(char **)(**(int **)(iVar14 + DAT_0001134c) + iVar13 * 4);
          if (pcVar8 == (char *)0x0) {
LAB_0001121c:
            iVar10 = dbus_message_iter_close_container(auStack_178,auStack_140);
            if ((iVar10 != 0) &&
               ((iVar15 == 0 ||
                (iVar10 = dbus_message_iter_close_container(auStack_108,auStack_d0), iVar10 != 0))))
            {
              iVar13 = dbus_connection_send_with_reply_and_block(iVar12,iVar3,0xffffffff,&local_188)
              ;
              if (iVar13 == 0) {
                puVar16 = *(undefined4 **)(iVar14 + DAT_000112c4);
                iVar12 = DAT_00011350 + 0x11288;
                pcVar7 = (char *)(DAT_00011354 + 0x11290);
              }
              else {
                iVar10 = dbus_set_error_from_message(&local_188,iVar3);
                if ((iVar10 == 0) && (iVar10 = dbus_message_get_args(iVar3,&local_188), iVar10 != 0)
                   ) {
                  dbus_message_unref(iVar13);
                  if (iVar15 != 0) {
                    iVar15 = dbus_connection_send_with_reply_and_block
                                       (iVar12,iVar4,0xffffffff,&local_188);
                    if (iVar15 == 0) {
                      fprintf((FILE *)**(undefined4 **)(iVar14 + DAT_000112c4),
                              (char *)(DAT_00011320 + 0x110d0),DAT_0001131c + 0x110c8,local_188,
                              uStack_184);
                    }
                    else {
                      iVar13 = dbus_set_error_from_message(&local_188,iVar3);
                      if ((iVar13 != 0) ||
                         (iVar13 = dbus_message_get_args(iVar3,&local_188), iVar13 == 0)) {
                        fprintf((FILE *)**(undefined4 **)(iVar14 + DAT_000112c4),
                                (char *)(DAT_00011328 + 0x1114c),DAT_00011324 + 0x11144,local_188,
                                uStack_184);
                      }
                      dbus_message_unref(iVar15);
                    }
                    dbus_message_unref(iVar4);
                    dbus_error_free(&local_188);
                  }
                  dbus_message_unref(iVar3);
                  dbus_connection_unref(iVar12);
                  if (local_2c != *piVar6) {
                    /* WARNING: Subroutine does not return */
                    __stack_chk_fail(0);
                  }
                  return;
                }
                puVar16 = *(undefined4 **)(iVar14 + DAT_000112c4);
                iVar12 = DAT_00011314 + 0x11060;
                pcVar7 = (char *)(DAT_00011318 + 0x11068);
              }
              fprintf((FILE *)*puVar16,pcVar7,iVar12,local_188,uStack_184);
              iVar12 = 0x45;
              goto LAB_00010d48;
            }
            goto LAB_00010dc0;
          }
        }
        else {
          if (param_1 <= iVar13) goto LAB_0001121c;
          pcVar8 = *(char **)(param_2 + iVar13 * 4);
        }
        local_198 = strdup(pcVar8);
        if (local_198 == (char *)0x0) goto LAB_00010dc0;
        iVar5 = dbus_validate_utf8(pcVar8,0);
        if (iVar5 == 0) {
          puVar16 = *(undefined4 **)(iVar14 + DAT_000112c4);
          iVar5 = DAT_0001130c + 0x11018;
          pcVar9 = (char *)(DAT_00011310 + 0x1101c);
LAB_00011018:
          fprintf((FILE *)*puVar16,pcVar9,iVar5,pcVar8);
        }
        else {
          pcVar9 = strchr(local_198,0x3d);
          if (pcVar9 == (char *)0x0) {
            if (bVar2) {
              puVar16 = *(undefined4 **)(iVar14 + DAT_000112c4);
              iVar5 = DAT_00011300 + 0x10ea8;
              pcVar9 = (char *)(DAT_00011304 + 0x10eac);
              goto LAB_00011018;
            }
            local_194 = getenv(pcVar8);
            if (local_194 != (char *)0x0) {
              iVar5 = dbus_validate_utf8(local_194,0);
              if (iVar5 != 0) goto LAB_00010efc;
              fprintf((FILE *)**(undefined4 **)(iVar14 + DAT_000112c4),
                      (char *)(DAT_00011308 + 0x10ef4),iVar11,pcVar8,local_194);
            }
          }
          else {
            local_194 = pcVar9 + 1;
            *pcVar9 = '\0';
LAB_00010efc:
            if (iVar15 != 0) {
              iVar5 = asprintf(&local_190,pcVar7,local_198,local_194);
              if ((iVar5 < 0) ||
                 (iVar5 = dbus_message_iter_append_basic(auStack_d0,0x73,&local_190), iVar5 == 0))
              goto LAB_00010dc0;
              free(local_190);
            }
            iVar5 = dbus_message_iter_open_container(auStack_140,0x65,0,&sStack_98);
            if (iVar5 == 0) goto LAB_00010dc0;
            FUN_00011540(iVar10,local_198,local_194);
            iVar5 = dbus_message_iter_append_basic(&sStack_98,0x73,&local_198);
            if (((iVar5 == 0) ||
                (iVar5 = dbus_message_iter_append_basic(&sStack_98,0x73,&local_194), iVar5 == 0)) ||
               (iVar5 = dbus_message_iter_close_container(auStack_140,&sStack_98), iVar5 == 0))
            goto LAB_00010dc0;
          }
        }
        iVar13 = iVar13 + 1;
        free(local_198);
      } while( true );
    }
    fprintf((FILE *)**(undefined4 **)(iVar14 + DAT_000112c4),(char *)(DAT_000112dc + 0x10d8c),
            DAT_000112d8 + 69000,uStack_184);
    iVar12 = 0x47;
  }
LAB_00010d48:
                    /* WARNING: Subroutine does not return */
  exit(iVar12);
}



/* ===== entry @ 00011358 size=80 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00021f58)
            (*(undefined4 *)((int)&DAT_000113a0 + DAT_000113ac + DAT_000113a0),param_2,
             &stack0x00000004,*(undefined4 *)((int)&DAT_000113a0 + DAT_000113a8 + DAT_000113a0),
             *(undefined4 *)((int)&DAT_000113a0 + DAT_000113a4 + DAT_000113a0),param_1);
  return;
}



/* ===== FUN_000113b0 @ 000113b0 size=72 ===== */

void FUN_000113b0(void)

{
  code *pcVar1;
  
  if (DAT_000113fc + 0x113c8 == DAT_000113f8 + 0x113c0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00011400 + 0x113d0 + DAT_00011404);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 0001146c size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_000114e0 + 0x11488;
  if (*(char *)(DAT_000114dc + 0x1147c) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_000114e4) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_000114e8 + 0x114a8));
  }
  FUN_000113b0();
  if (*(int *)(iVar1 + DAT_000114ec) != 0) {
    __deregister_frame_info(DAT_000114f0 + 0x114c8);
  }
  *(undefined1 *)(DAT_000114f4 + 0x114d8) = 1;
  return;
}



/* ===== _INIT_0 @ 000114f8 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00011530 + 0x11508 + DAT_00011534) != 0) {
    __register_frame_info(DAT_0001153c + 0x11528,DAT_00011538 + 0x11524);
  }
  if (((DAT_00011460 + 0x11420) - (DAT_0001145c + 0x11418) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00011464 + 0x11428 + DAT_00011468);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== FUN_00011540 @ 00011540 size=216 ===== */

void FUN_00011540(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FILE *__stream;
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar2 = DAT_00011618 + 0x11554;
  piVar5 = *(int **)(iVar2 + DAT_0001161c);
  iVar1 = *piVar5;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  if (*(int *)(DAT_00011620 + 0x11570) != 0) {
    puVar4 = *(undefined4 **)(iVar2 + DAT_00011624);
    fprintf((FILE *)*puVar4,(char *)(DAT_00011628 + 0x11590),DAT_0001162c + 0x11594,iVar2,param_1);
    vfprintf((FILE *)*puVar4,param_1,&uStack_c);
    __stream = (FILE *)*puVar4;
    if (__stream->_chain == (_IO_FILE *)0x0) {
      fputc(10,__stream);
    }
    else {
      pcVar3 = __stream->_IO_write_base;
      if (pcVar3 < __stream->_IO_buf_base) {
        __stream->_IO_write_base = pcVar3 + 1;
        *pcVar3 = '\n';
      }
      else {
        __fputc_unlocked(10);
      }
    }
  }
  if (iVar1 != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00011630 @ 00011630 size=48 ===== */

void FUN_00011630(undefined4 param_1)

{
  fprintf((FILE *)**(undefined4 **)(DAT_00011660 + 0x11640 + DAT_00011664),
          (char *)(DAT_00011668 + 0x11654),param_1);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_0001166c @ 0001166c size=92 ===== */

undefined4 FUN_0001166c(int param_1,void *param_2,uint param_3)

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



/* ===== _DT_FINI @ 000116c8 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::dbus_message_iter_init_append @ 00023004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_iter_init_append(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00023008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0002300c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 00023010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_get_args @ 00023014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_get_args(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_iter_open_container @ 00023018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_iter_open_container(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_iter_append_basic @ 0002301c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_iter_append_basic(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00023020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00023024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat64 @ 00023028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_validate_utf8 @ 0002302c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_validate_utf8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_unref @ 00023030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_unref(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 00023034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strdup @ 00023038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vfprintf @ 0002303c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_connection_send_with_reply_and_block @ 00023040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_connection_send_with_reply_and_block(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_new_method_call @ 00023044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_new_method_call(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_error_free @ 00023048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_error_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 0002304c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::asprintf @ 00023054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int asprintf(char **__ptr,char *__fmt,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00023060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00023064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 00023068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 0002306c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fputc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00023070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_bus_get @ 00023074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_bus_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_set_error_from_message @ 00023078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_set_error_from_message(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 0002307c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_unref @ 00023080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_unref(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 00023084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00023088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0002308c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 00023090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 00023094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_message_iter_close_container @ 00023098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_message_iter_close_container(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


