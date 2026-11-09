// dbus-uuidgen — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00010704 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::dbus_error_init @ 00010728 size=12 ===== */

void dbus_error_init(void)

{
  (*(code *)PTR_dbus_error_init_00020f8c)();
  return;
}



/* ===== <EXTERNAL>::abort @ 00010734 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00020f90)();
  return;
}



/* ===== <EXTERNAL>::dbus_internal_do_not_use_get_uuid @ 0001074c size=12 ===== */

void dbus_internal_do_not_use_get_uuid(void)

{
  (*(code *)PTR_dbus_internal_do_not_use_get_uuid_00020f98)();
  return;
}



/* ===== <EXTERNAL>::dbus_error_is_set @ 00010758 size=12 ===== */

void dbus_error_is_set(void)

{
  (*(code *)PTR_dbus_error_is_set_00020f9c)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010764 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00020fa0)();
  return;
}



/* ===== <EXTERNAL>::strcmp @ 00010770 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00020fa4)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::strncmp @ 0001077c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00020fa8)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::dbus_error_free @ 00010788 size=12 ===== */

void dbus_error_free(void)

{
  (*(code *)PTR_dbus_error_free_00020fac)();
  return;
}



/* ===== <EXTERNAL>::printf @ 00010794 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00020fb0)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 000107a0 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00020fb4)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000107ac size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00020fb8)();
  return;
}



/* ===== <EXTERNAL>::exit @ 000107b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00020fbc)(__status);
  return;
}



/* ===== <EXTERNAL>::fprintf @ 000107c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00020fc0)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::fputs @ 000107d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_00020fc4)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::dbus_free @ 000107dc size=12 ===== */

void dbus_free(void)

{
  (*(code *)PTR_dbus_free_00020fc8)();
  return;
}



/* ===== <EXTERNAL>::puts @ 000107e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00020fcc)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::_dbus_create_uuid @ 000107f4 size=12 ===== */

void _dbus_create_uuid(void)

{
  (*(code *)PTR__dbus_create_uuid_00020fd0)();
  return;
}



/* ===== <EXTERNAL>::strlen @ 00010800 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00020fd4)(__s);
  return sVar1;
}



/* ===== FUN_0001080c @ 0001080c size=484 ===== */

void FUN_0001080c(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char *__s1;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *__s2;
  char *__s2_00;
  undefined4 local_44;
  char *local_40;
  undefined1 auStack_3c [4];
  undefined4 local_38;
  undefined4 local_2c;
  
  uVar3 = 0;
  iVar4 = DAT_000109f0 + 0x1082c;
  uVar5 = 0;
  local_2c = **(undefined4 **)(iVar4 + DAT_000109f4);
  __s2 = (char *)(DAT_000109f8 + 0x1084c);
  __s2_00 = (char *)(DAT_000109fc + 0x10850);
  local_44 = 0;
  for (iVar6 = 1; iVar6 < param_1; iVar6 = iVar6 + 1) {
    __s1 = (char *)param_2[iVar6];
    iVar1 = strncmp(__s1,__s2,8);
    if (iVar1 == 0) {
      uVar5 = 1;
      FUN_00010c50(__s1,__s2,&local_44);
    }
    else {
      iVar1 = strncmp(__s1,__s2_00,5);
      if (iVar1 != 0) {
        iVar4 = strcmp(__s1,(char *)(DAT_00010a08 + 0x1090c));
        uVar2 = 0;
        if (iVar4 != 0) goto LAB_0001091c;
        while( true ) {
          FUN_00010c04(*param_2,uVar2);
LAB_0001091c:
          iVar4 = strcmp(__s1,(char *)(DAT_00010a0c + 0x1092c));
          if (iVar4 == 0) break;
          uVar2 = 1;
        }
        printf((char *)(DAT_00010a14 + 0x10948),DAT_00010a10 + 0x10944);
        iVar6 = 0;
        goto LAB_0001094c;
      }
      uVar3 = 1;
      FUN_00010c50(__s1,__s2_00,&local_44);
    }
  }
  if ((uVar5 & uVar3) == 0) {
    dbus_error_init(auStack_3c);
    if (uVar5 == 0 && uVar3 == 0) {
      iVar6 = _dbus_create_uuid(&local_40,auStack_3c);
      if (iVar6 != 0) {
LAB_00010994:
        puts(local_40);
        goto LAB_0001099c;
      }
    }
    else {
      iVar6 = dbus_internal_do_not_use_get_uuid(local_44,&local_40,uVar5,auStack_3c);
      if (iVar6 != 0) {
        if (uVar3 != 0) goto LAB_00010994;
LAB_0001099c:
        dbus_free(local_40);
      }
    }
    iVar1 = dbus_error_is_set(auStack_3c);
    iVar6 = 0;
    if (iVar1 == 0) goto LAB_0001094c;
    fprintf((FILE *)**(undefined4 **)(iVar4 + DAT_00010a00),(char *)(DAT_00010a18 + 0x109e0),
            local_38);
    dbus_error_free(auStack_3c);
  }
  else {
    fputs((char *)(DAT_00010a04 + 0x1087c),(FILE *)**(undefined4 **)(iVar4 + DAT_00010a00));
  }
  iVar6 = 1;
LAB_0001094c:
                    /* WARNING: Subroutine does not return */
  exit(iVar6);
}



/* ===== entry @ 00010a1c size=80 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00020f94)
            (*(undefined4 *)((int)&DAT_00010a64 + DAT_00010a70 + DAT_00010a64),param_2,
             &stack0x00000004,*(undefined4 *)((int)&DAT_00010a64 + DAT_00010a6c + DAT_00010a64),
             *(undefined4 *)((int)&DAT_00010a64 + DAT_00010a68 + DAT_00010a64),param_1);
  return;
}



/* ===== FUN_00010a74 @ 00010a74 size=72 ===== */

void FUN_00010a74(void)

{
  code *pcVar1;
  
  if (DAT_00010ac0 + 0x10a8c == DAT_00010abc + 0x10a84) {
    return;
  }
  pcVar1 = *(code **)(DAT_00010ac4 + 0x10a94 + DAT_00010ac8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 00010b30 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00010ba4 + 0x10b4c;
  if (*(char *)(DAT_00010ba0 + 0x10b40) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_00010ba8) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_00010bac + 0x10b6c));
  }
  FUN_00010a74();
  if (*(int *)(iVar1 + DAT_00010bb0) != 0) {
    __deregister_frame_info(DAT_00010bb4 + 0x10b8c);
  }
  *(undefined1 *)(DAT_00010bb8 + 0x10b9c) = 1;
  return;
}



/* ===== _INIT_0 @ 00010bbc size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00010bf4 + 0x10bcc + DAT_00010bf8) != 0) {
    __register_frame_info(DAT_00010c00 + 0x10bec,DAT_00010bfc + 0x10be8);
  }
  if (((DAT_00010b24 + 0x10ae4) - (DAT_00010b20 + 0x10adc) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00010b28 + 0x10aec + DAT_00010b2c);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== FUN_00010c04 @ 00010c04 size=60 ===== */

void FUN_00010c04(int param_1,int param_2)

{
  if (param_1 == 0) {
    param_1 = DAT_00010c44 + 0x10c24;
  }
  fprintf((FILE *)**(undefined4 **)(DAT_00010c40 + 0x10c1c + DAT_00010c48),
          (char *)(DAT_00010c4c + 0x10c38),param_1);
                    /* WARNING: Subroutine does not return */
  exit(param_2);
}



/* ===== FUN_00010c50 @ 00010c50 size=128 ===== */

bool FUN_00010c50(char *param_1,char *param_2,undefined4 *param_3)

{
  char cVar1;
  size_t sVar2;
  size_t sVar3;
  uint uVar4;
  uint extraout_r1;
  char *extraout_r3;
  char *pcVar5;
  
  sVar2 = strlen(param_1);
  sVar3 = strlen(param_2);
  if (sVar2 < sVar3) {
    return false;
  }
  uVar4 = (uint)(byte)param_1[sVar3];
  param_1 = param_1 + sVar3;
  if (uVar4 != 0x3d && uVar4 != 0x20) {
    if (uVar4 == 0) goto LAB_00010ca8;
    FUN_00010c04(0,1);
    uVar4 = extraout_r1;
    param_1 = extraout_r3;
  }
  if (uVar4 == 0x3d) {
    param_1 = param_1 + 1;
  }
LAB_00010ca8:
  do {
    pcVar5 = param_1;
    cVar1 = *pcVar5;
    param_1 = pcVar5 + 1;
  } while (cVar1 == ' ');
  if (cVar1 != '\0') {
    *param_3 = pcVar5;
  }
  return cVar1 != '\0';
}



/* ===== _DT_FINI @ 00010cd0 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::dbus_error_init @ 00022004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_error_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00022008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0002200c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_internal_do_not_use_get_uuid @ 00022010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_internal_do_not_use_get_uuid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_error_is_set @ 00022014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_error_is_set(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00022018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0002201c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00022020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 00022024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_error_free @ 00022028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_error_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0002202c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00022034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00022038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 0002203c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00022040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 00022044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 00022048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_free @ 0002204c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00022050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_create_uuid @ 00022054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_create_uuid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 00022058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


