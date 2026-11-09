// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/common/config   functions: 34
/* printerApi/common/config.init @ 0043ba04 (size 412) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_common_config_init(void)

{
  undefined4 *puVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  undefined4 *puStack_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x43bb9c;
    FUN_00096bb8();
  }
  FUN_0008b6b8();
  FUN_0001eed8();
  puStack_18[1] = 0xe;
  *puStack_18 = PTR_DAT_0043bba8;
  puStack_18[3] = 0x10;
  puStack_18[2] = PTR_DAT_0043bbac;
  puStack_18[5] = 0x13;
  puStack_18[4] = PTR_DAT_0043bbb0;
  FUN_0008e7bc();
  puStack_c[1] = 3;
  puStack_c[2] = 3;
  puVar1 = puStack_c;
  if (*_UNK_0043bbbc != 0) {
    puVar1 = (undefined4 *)FUN_00098688();
    *puStack_1c = puStack_18;
    puStack_1c[1] = *puVar1;
  }
  *puVar1 = puStack_18;
  FUN_0001eed8();
  puStack_1c[1] = 0x13;
  *puStack_1c = PTR_DAT_0043bbb0;
  puStack_1c[3] = 0x10;
  puStack_1c[2] = PTR_DAT_0043bbac;
  puStack_1c[5] = 0xe;
  puStack_1c[4] = PTR_DAT_0043bba8;
  FUN_0008e7bc();
  puStack_c[1] = 3;
  puStack_c[2] = 3;
  if (*_UNK_0043bbbc != 0) {
    puStack_c = (undefined4 *)FUN_000986a8();
    *puStack_1c = puStack_1c;
    puStack_1c[1] = *puStack_c;
    puStack_1c[2] = puStack_1c;
    puStack_1c[3] = *_UNK_0043bbc4;
  }
  *puStack_c = puStack_1c;
  *_UNK_0043bbc4 = puStack_1c;
                    /* WARNING: Could not recover jumptable at 0x0043bb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/common/config.GetCreateDeviceParam @ 0043bbc8 (size 284) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_common_config_GetCreateDeviceParam(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  int iStack_20;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x43bce0;
    FUN_00096bb8();
  }
  FUN_00098a20(0,&stack0x00000004);
  printerApi_common_config_CloudSectionName();
  printerApi_common_config_GetCreateDeviceURL();
  printerApi_common_ini___File__Section();
  printerApi_common_ini___Section__Key();
  uVar2 = *(undefined4 *)(iStack_20 + 0xc);
  uVar1 = *(undefined4 *)(iStack_20 + 0x10);
  printerApi_common_ini___File__Section();
  printerApi_common_ini___Section__Key();
  in_stack_00000014 = *(undefined4 *)(iStack_20 + 0xc);
  in_stack_00000018 = *(undefined4 *)(iStack_20 + 0x10);
  in_stack_0000000c = uVar2;
  in_stack_00000010 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0043bcd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/common/config.DeviceEnv @ 0043bcf4 (size 132) */

void printerApi_common_config_DeviceEnv(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  printerApi_common_ini___File__Section();
  printerApi_common_ini___Section__Key();
  return;
}



/* printerApi/common/config.SetDeviceEnv @ 0043bd8c (size 156) */

void printerApi_common_config_SetDeviceEnv(void)

{
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  int iStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  printerApi_common_ini___File__Section();
  printerApi_common_ini___Section__Key();
  *(undefined4 *)(iStack_4 + 0x10) = in_stack_00000008;
  if (*(int *)PTR_DAT_0043be38 != 0) {
    iStack_4 = FUN_00098688();
    *unaff_r8 = in_stack_00000004;
    unaff_r8[1] = *(undefined4 *)(iStack_4 + 0xc);
  }
  *(undefined4 *)(iStack_4 + 0xc) = in_stack_00000004;
  return;
}



/* printerApi/common/config.MqttBroker @ 0043be3c (size 120) */

void printerApi_common_config_MqttBroker(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  printerApi_common_config_CloudSectionName();
  printerApi_common_ini___File__Section();
  printerApi_common_ini___Section__Key();
  return;
}



/* printerApi/common/config.GetMachineId @ 0043bec0 (size 328) */

void printerApi_common_config_GetMachineId(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  char local_40;
  int local_3c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  printerApi_common_file_FileExist();
  if ((local_40 != '\0') && (FUN_00125de4(), local_3c != 0)) {
    FUN_00093e34();
    return;
  }
  printerApi_common_os_MachineId();
  internal_filepathlite_Dir();
  printerApi_common_file_CreateDirIfNoexist();
  FUN_00071920();
  FUN_00126134();
  FUN_000f65f0();
  return;
}



/* printerApi/common/config.GetMachineMac @ 0043c010 (size 52) */

void printerApi_common_config_GetMachineMac(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  printerApi_common_os_NetworkMac();
  return;
}



/* printerApi/common/config.GetMachineCode @ 0043c044 (size 120) */

void printerApi_common_config_GetMachineCode(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  printerApi_common_config_CloudSectionName();
  printerApi_common_ini___File__Section();
  printerApi_common_ini___Section__Key();
  return;
}



/* printerApi/common/config.GetDeviceUnionid @ 0043c0c8 (size 160) */

void printerApi_common_config_GetDeviceUnionid(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  printerApi_common_config_LanPrintIsOpen();
  if (local_10 != '\0') {
    printerApi_common_config_GetDeviceId();
    return;
  }
  printerApi_common_config_CloudSectionName();
  printerApi_common_ini___File__Section();
  printerApi_common_ini___Section__Key();
  return;
}



/* printerApi/common/config.GetDeviceKey @ 0043c174 (size 120) */

void printerApi_common_config_GetDeviceKey(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  printerApi_common_config_CloudSectionName();
  printerApi_common_ini___File__Section();
  printerApi_common_ini___Section__Key();
  return;
}



/* printerApi/common/config.GetCertPath @ 0043c1f8 (size 120) */

void printerApi_common_config_GetCertPath(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  printerApi_common_config_CloudSectionName();
  printerApi_common_ini___File__Section();
  printerApi_common_ini___Section__Key();
  return;
}



/* printerApi/common/config.SetCloudUnionid @ 0043c27c (size 416) */

void printerApi_common_config_SetCloudUnionid(void)

{
  int iVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  int iStack_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x43c418;
    FUN_00096bb8();
  }
  printerApi_common_config_CloudSectionName();
  printerApi_common_ini___File__Section();
  printerApi_common_ini___Section__Key();
  *(undefined4 *)(iStack_c + 0x10) = in_stack_00000008;
  iVar1 = iStack_c;
  if (*(int *)PTR_DAT_0043c428 != 0) {
    iVar1 = FUN_00098688();
    *unaff_r8 = in_stack_00000004;
    unaff_r8[1] = *(undefined4 *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0xc) = in_stack_00000004;
  printerApi_common_ini___File__Section();
  printerApi_common_ini___Section__Key();
  *(undefined4 *)(iStack_c + 0x10) = in_stack_00000010;
  iVar1 = iStack_c;
  if (*(int *)PTR_DAT_0043c428 != 0) {
    iVar1 = FUN_00098688();
    *unaff_r8 = in_stack_0000000c;
    unaff_r8[1] = *(undefined4 *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0xc) = in_stack_0000000c;
  printerApi_common_ini___File__Section();
  printerApi_common_ini___Section__Key();
  *(undefined4 *)(iStack_c + 0x10) = in_stack_00000018;
  if (*(int *)PTR_DAT_0043c428 != 0) {
    iStack_c = FUN_00098688();
    *unaff_r8 = in_stack_00000014;
    unaff_r8[1] = *(undefined4 *)(iStack_c + 0xc);
  }
  *(undefined4 *)(iStack_c + 0xc) = in_stack_00000014;
                    /* WARNING: Could not recover jumptable at 0x0043c40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/common/config.DeviceZone @ 0043c434 (size 132) */

void printerApi_common_config_DeviceZone(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  printerApi_common_ini___File__Section();
  printerApi_common_ini___Section__Key();
  return;
}



/* printerApi/common/config.SetDeviceZone @ 0043c4cc (size 156) */

void printerApi_common_config_SetDeviceZone(void)

{
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  int iStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x43c564;
    FUN_00096bb8();
  }
  printerApi_common_ini___File__Section();
  printerApi_common_ini___Section__Key();
  *(undefined4 *)(iStack_4 + 0x10) = in_stack_00000008;
  if (*(int *)PTR_DAT_0043c578 != 0) {
    iStack_4 = FUN_00098688();
    *unaff_r8 = in_stack_00000004;
    unaff_r8[1] = *(undefined4 *)(iStack_4 + 0xc);
  }
  *(undefined4 *)(iStack_4 + 0xc) = in_stack_00000004;
                    /* WARNING: Could not recover jumptable at 0x0043c558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/common/config.CloudSectionName @ 0043c57c (size 296) */

void printerApi_common_config_CloudSectionName(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  char *local_24;
  int local_20;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  printerApi_common_config_DeviceZone();
  if (((local_20 == 2) && (*local_24 == 'c')) && (local_24[1] == 'n')) {
    printerApi_common_config_DeviceEnv();
    FUN_0008a578();
    FUN_001331ac();
    return;
  }
  printerApi_common_config_DeviceEnv();
  FUN_0008a578();
  FUN_001331ac();
  return;
}



/* printerApi/common/config.SaveDeviceCfg @ 0043c6b4 (size 480) */

/* WARNING: Removing unreachable block (ram,0x0043c844) */
/* WARNING: Removing unreachable block (ram,0x0043c848) */

void printerApi_common_config_SaveDeviceCfg(void)

{
  undefined *puVar1;
  int iVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_10 [16];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x43c890;
    FUN_00096bb8();
  }
  iVar2 = *(int *)(*(int *)(*(int *)PTR_DAT_0043c898 + 8) + 0x8c);
  puVar1 = *(undefined **)(*(int *)(*(int *)PTR_DAT_0043c898 + 8) + 0x88);
  if (iVar2 == 0) {
    iVar2 = 0x22;
    puVar1 = PTR_DAT_0043c89c;
  }
  internal_filepathlite_Dir();
  internal_filepathlite_Base(uStack_48);
  FUN_00098a28(0,auStack_10,uStack_44,uStack_48,UNRECOVERED_JUMPTABLE_00,puVar1,iVar2);
  FUN_00159184();
  puVar1 = PTR_DAT_0043c8a0;
  FUN_000715a4();
  printerApi_common_ini___File__DeleteSection();
  printerApi_common_ini___File__SaveTo();
  if (puVar1 != (undefined *)0x0) {
    in_stack_00000004 = puVar1;
    in_stack_00000008 = 4;
                    /* WARNING: Could not recover jumptable at 0x0043c884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_00126cb0();
  in_stack_00000004 = (undefined *)0x4;
                    /* WARNING: Could not recover jumptable at 0x0043c840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/common/config.getCreateDeviceURLByEnvZone @ 0043c8a8 (size 780) */

/* WARNING: Removing unreachable block (ram,0x0043ca50) */
/* WARNING: Removing unreachable block (ram,0x0043cad4) */
/* WARNING: Removing unreachable block (ram,0x0043ca5c) */
/* WARNING: Removing unreachable block (ram,0x0043cacc) */
/* WARNING: Removing unreachable block (ram,0x0043ca68) */
/* WARNING: Removing unreachable block (ram,0x0043cac4) */
/* WARNING: Removing unreachable block (ram,0x0043ca74) */
/* WARNING: Removing unreachable block (ram,0x0043cabc) */
/* WARNING: Removing unreachable block (ram,0x0043ca80) */
/* WARNING: Removing unreachable block (ram,0x0043cab4) */
/* WARNING: Removing unreachable block (ram,0x0043ca8c) */
/* WARNING: Removing unreachable block (ram,0x0043caa0) */
/* WARNING: Removing unreachable block (ram,0x0043ca98) */
/* WARNING: Removing unreachable block (ram,0x0043c920) */
/* WARNING: Removing unreachable block (ram,0x0043c954) */
/* WARNING: Removing unreachable block (ram,0x0043c92c) */
/* WARNING: Removing unreachable block (ram,0x0043c940) */
/* WARNING: Removing unreachable block (ram,0x0043c938) */
/* WARNING: Removing unreachable block (ram,0x0043c9b8) */
/* WARNING: Removing unreachable block (ram,0x0043c9ec) */
/* WARNING: Removing unreachable block (ram,0x0043c9c4) */
/* WARNING: Removing unreachable block (ram,0x0043c9d8) */
/* WARNING: Removing unreachable block (ram,0x0043c9d0) */
/* WARNING: Removing unreachable block (ram,0x0043cb38) */
/* WARNING: Removing unreachable block (ram,0x0043cb44) */
/* WARNING: Removing unreachable block (ram,0x0043cb50) */
/* WARNING: Removing unreachable block (ram,0x0043cb5c) */
/* WARNING: Removing unreachable block (ram,0x0043cb68) */
/* WARNING: Removing unreachable block (ram,0x0043cb74) */
/* WARNING: Removing unreachable block (ram,0x0043cb80) */

void printerApi_common_config_getCreateDeviceURLByEnvZone(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x43cbb0;
    FUN_00096bb8();
  }
  printerApi_common_config_DeviceEnv();
  printerApi_common_config_DeviceZone();
  in_stack_00000024 = 0;
  in_stack_00000028 = 0;
                    /* WARNING: Could not recover jumptable at 0x0043cba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/common/config.GetCreateDeviceURL @ 0043cbb4 (size 664) */

void printerApi_common_config_GetCreateDeviceURL(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined **ppuStack_a0;
  undefined4 *puStack_9c;
  undefined4 *puStack_98;
  undefined4 *puStack_94;
  undefined4 *puStack_90;
  int iStack_8c;
  undefined4 uStack_80;
  int iStack_7c;
  undefined4 *puStack_78;
  int iStack_74;
  int iStack_70;
  undefined4 *puStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 auStack_20 [2];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined *puStack_8;
  undefined4 *puStack_4;
  
  while( true ) {
    if (*(undefined4 **)(unaff_r10 + 8) < &uStack_24) break;
    UNRECOVERED_JUMPTABLE = (code *)0x43ce48;
    FUN_00096bb8();
  }
  iVar3 = *(int *)(*(int *)(*(int *)PTR_DAT_0043ce50 + 8) + 0x174);
  puVar2 = *(undefined **)(*(int *)(*(int *)PTR_DAT_0043ce50 + 8) + 0x170);
  if (iVar3 == 0) {
    iVar3 = 10;
    puVar2 = PTR_s__mnt_udisktest_model_gcode_3mfus_007765bd_0x2b6_0043ce54;
  }
  FUN_00098a28(0,auStack_20,puVar2,iVar3);
  uStack_18 = *(undefined4 *)PTR_DAT_0043ce58;
  uStack_14 = *(undefined4 *)PTR_DAT_0043ce5c;
  ppuStack_a0 = (undefined **)auStack_20;
  puStack_9c = (undefined4 *)0x2;
  puStack_98 = (undefined **)0x2;
  FUN_00159184();
  puStack_6c = puStack_94;
  puStack_78 = puStack_90;
  ppuStack_a0 = (undefined **)puStack_94;
  puStack_9c = puStack_90;
  printerApi_common_file_FileExist();
  if (((uint)puStack_98 & 0xff) != 0) {
    ppuStack_a0 = (undefined **)puStack_6c;
    puStack_9c = puStack_78;
    FUN_00125de4();
    if (iStack_8c == 0) {
      ppuStack_a0 = (undefined **)puStack_98;
      puStack_9c = puStack_94;
      puStack_98 = puStack_90;
      puStack_94 = (undefined4 *)PTR_DAT_0043ce60;
      puStack_90 = (undefined4 *)PTR_DAT_0043ce64;
      iStack_8c = FUN_0016a168();
    }
    FUN_00098dfc(iStack_8c,PTR_DAT_0043ce64,&ppuStack_a0);
    printerApi_common_config_getCreateDeviceURLByEnvZone();
    if (iStack_7c != 0) {
      iStack_70 = iStack_7c;
      uStack_64 = uStack_80;
      FUN_00098a28(0,&puStack_10,uStack_80,iStack_7c);
      puStack_10 = PTR_SUB_0043ce68;
      puStack_c = PTR_DAT_0043ce70;
      FUN_0008a578();
      puStack_8 = PTR_SUB_0043ce68;
      puStack_4 = puStack_98;
      ppuStack_a0 = &puStack_10;
      puStack_9c = (undefined4 *)0x2;
      puStack_98 = (undefined4 *)0x2;
      printerApi_common_logger_RedDebug();
                    /* WARNING: Could not recover jumptable at 0x0043ce3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  FUN_00098dfc(*(int *)(*(int *)PTR_DAT_0043ce50 + 8),*(int *)(*(int *)PTR_DAT_0043ce50 + 8) + 0xa8,
               &uStack_60);
  uVar1 = FUN_00098a18(0,&uStack_40);
  uStack_40 = uStack_60;
  uStack_3c = uStack_5c;
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_28 = uStack_48;
  uStack_24 = uStack_44;
  FUN_00098dfc(uVar1,&uStack_40,&ppuStack_a0);
  printerApi_common_config_getCreateDeviceURLByEnvZone();
  if (iStack_7c != 0) {
    iStack_74 = iStack_7c;
    uStack_68 = uStack_80;
    FUN_00098a28(0,&puStack_10,uStack_80,iStack_7c);
    puStack_10 = PTR_SUB_0043ce68;
    puStack_c = PTR_DAT_0043ce6c;
    FUN_0008a578();
    puStack_8 = PTR_SUB_0043ce68;
    puStack_4 = puStack_98;
    ppuStack_a0 = &puStack_10;
    puStack_9c = (undefined4 *)0x2;
    puStack_98 = (undefined4 *)0x2;
    printerApi_common_logger_RedDebug();
                    /* WARNING: Could not recover jumptable at 0x0043cdb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0043cdc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/common/config.BleName @ 0043ce74 (size 144) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_common_config_BleName(undefined4 param_1)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x43cf00;
    param_1 = FUN_00096bb8();
  }
  printerApi_common_os_NetworkMac(param_1);
  FUN_0014913c();
  FUN_000715a4();
  in_stack_00000004 = 0;
  in_stack_00000008 = 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x0043cef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/common/config.NTPSync @ 0043cf10 (size 1032) */

void printerApi_common_config_NTPSync(void)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined *extraout_r2;
  undefined *puVar4;
  undefined *extraout_r3;
  undefined *puVar5;
  int iVar6;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined **local_d4;
  undefined **local_d0;
  undefined **local_cc;
  undefined4 local_c8;
  undefined **local_c4;
  undefined **local_c0;
  undefined **local_bc;
  undefined **local_b8;
  undefined *local_ac;
  undefined4 local_a8;
  int local_a4;
  undefined **local_a0;
  undefined **local_9c;
  int local_98;
  undefined *local_94 [2];
  undefined4 local_8c;
  undefined4 local_88;
  undefined *local_84;
  undefined4 local_80;
  undefined *local_7c;
  undefined **local_78;
  undefined **local_74;
  undefined **local_70;
  undefined *local_6c;
  undefined4 local_68;
  undefined *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined *local_54;
  undefined4 local_50;
  undefined *local_4c;
  undefined4 local_48;
  undefined *local_44;
  undefined4 local_40;
  undefined *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined **local_2c;
  undefined4 local_28;
  undefined *local_24;
  undefined *local_20;
  undefined *local_1c;
  undefined **local_18;
  undefined1 auStack_14 [20];
  
  while (&local_58 <= *(undefined4 **)(unaff_r10 + 8)) {
    unaff_lr = 0x43d314;
    FUN_00096bb8();
  }
  printerApi_common_config_DeviceZone();
  local_cc = local_d4;
  local_d4 = DAT_0043d320;
  local_c8 = local_d0;
  local_d0 = (undefined **)*DAT_0043d31c;
  FUN_0008e314();
  if ((char)local_c0 == '\0') {
    local_d0 = (undefined **)*DAT_0043d31c;
    local_d4 = DAT_0043d320;
    local_cc = DAT_0043d324;
    local_c8 = 6;
    FUN_00021c74();
    local_7c = *local_c4;
    local_ac = local_c4[1];
  }
  else {
    local_7c = *local_c4;
    local_ac = local_c4[1];
  }
  uVar2 = FUN_00098a20(0,local_94,local_ac,local_7c,unaff_lr);
  local_94[0] = DAT_0043d328;
  local_8c = DAT_0043d32c;
  local_88 = 3;
  local_84 = DAT_0043d328;
  local_80 = 0;
  iVar3 = 0;
  puVar4 = extraout_r2;
  puVar5 = extraout_r3;
  do {
    if (2 < iVar3) {
      FUN_0004fb3c(uVar2);
      return;
    }
    iVar6 = 0;
    local_a4 = iVar3;
    while (iVar6 < (int)puVar4) {
      local_78 = *(undefined ***)(puVar5 + iVar6 * 8);
      local_a8 = *(undefined4 *)(puVar5 + iVar6 * 8 + 4);
      local_98 = iVar6;
      uVar2 = FUN_0010cf30();
      uVar2 = FUN_00098e14(uVar2,&local_d4,auStack_14);
      FUN_00098e14(uVar2,auStack_14,&local_d4);
      local_c0 = (undefined **)((uint)local_c0 & 0xffffff00);
      FUN_00103648();
      if (0x7b2 < (int)local_bc) {
        local_d4 = DAT_0043d368;
        local_d0 = (undefined **)0x1b;
        local_cc = (undefined **)0x0;
        local_c8 = 0;
        local_c4 = (undefined **)0x0;
        printerApi_common_logger_Debugf();
        FUN_0004fb3c();
        return;
      }
      FUN_00098a28(0,&local_24);
      local_24 = PTR_SUB_0043d330;
      local_20 = PTR_DAT_0043d334;
      local_d4 = local_78;
      local_d0 = (undefined **)local_a8;
      FUN_0008a578();
      local_1c = PTR_SUB_0043d330;
      local_18 = local_cc;
      local_d4 = &local_24;
      local_d0 = (undefined **)0x2;
      local_cc = (undefined **)0x2;
      printerApi_common_logger_Debug();
      local_d4 = (undefined **)PTR_DAT_0043d338;
      local_d0 = (undefined **)PTR_DAT_0043d33c;
      local_cc = (undefined **)DAT_0043d340;
      local_c8 = 1;
      FUN_00155144();
      local_9c = local_c4;
      local_70 = local_c0;
      local_d4 = local_bc;
      iVar3 = FUN_0004f204();
      if (iVar3 != 0) {
        FUN_0004fb3c();
        return;
      }
      FUN_000989f8(0,&local_64);
      local_60 = 2;
      local_64 = DAT_0043d344;
      local_58 = 2;
      local_5c = DAT_0043d348;
      local_50 = 2;
      local_54 = PTR_DAT_00772eb6_3_0043d34c;
      local_48 = 1;
      local_4c = PTR_DAT_0043d350;
      local_40 = 2;
      local_44 = PTR_DAT_0043d354;
      local_38 = 1;
      local_3c = PTR_DAT_0043d358;
      local_30 = 2;
      local_34 = DAT_0043d35c;
      local_28 = local_a8;
      local_2c = local_78;
      local_d4 = local_9c;
      local_d0 = local_70;
      local_cc = DAT_0043d360;
      local_c8 = 9;
      local_c4 = &local_64;
      local_c0 = (undefined **)0x8;
      local_bc = (undefined **)0x8;
      FUN_0015bb08();
      local_d4 = local_b8;
      FUN_0015cd18();
      local_a0 = local_d0;
      local_74 = local_cc;
      if (local_d0 == (undefined **)0x0) {
        uVar2 = FUN_0010cf30();
        uVar2 = FUN_00098e14(uVar2,&local_d4,auStack_14);
        FUN_00098e14(uVar2,auStack_14,&local_d4);
        local_c0 = (undefined **)((uint)local_c0 & 0xffffff00);
        FUN_00103648();
        bVar1 = 0x7b2 < (int)local_bc;
        uVar2 = extraout_r1_00;
      }
      else {
        bVar1 = false;
        uVar2 = extraout_r1;
      }
      if (bVar1) {
        local_6c = PTR_SUB_0043d330;
        local_68 = DAT_0043d364;
        local_d4 = &local_6c;
        local_d0 = (undefined **)0x1;
        local_cc = (undefined **)0x1;
        printerApi_common_logger_Debug();
        FUN_0004fb3c();
        return;
      }
      local_d4 = local_94;
      printerApi_common_backoff___Backoff__Next(local_d4,uVar2,local_a0,local_74);
      local_d4 = local_d0;
      local_d0 = local_cc;
      FUN_000953d0();
      uVar2 = 0;
      puVar4 = local_ac;
      puVar5 = local_7c;
      iVar6 = local_98 + 1;
    }
    iVar3 = local_a4 + 1;
  } while( true );
}



/* printerApi/common/config.GetVersion @ 0043d36c (size 144) */

void printerApi_common_config_GetVersion(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_00125de4();
  if (local_10 == 0) {
    return;
  }
  FUN_00093e34();
  FUN_00148fb4();
  return;
}



/* printerApi/common/config.VersionLessThan @ 0043d408 (size 200) */

/* WARNING: Removing unreachable block (ram,0x0043d480) */

void printerApi_common_config_VersionLessThan(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined1 in_stack_00000014;
  int local_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  github_com_hashicorp_go_version_newVersion();
  if (local_c == 0) {
    github_com_hashicorp_go_version_newVersion();
    github_com_hashicorp_go_version___Version__Compare();
    return;
  }
  return;
}



/* printerApi/common/config.GetAIDetectConfig @ 0043d4d8 (size 568) */

/* WARNING: Removing unreachable block (ram,0x0043d5e8) */
/* WARNING: Removing unreachable block (ram,0x0043d5f4) */
/* WARNING: Removing unreachable block (ram,0x0043d600) */
/* WARNING: Removing unreachable block (ram,0x0043d60c) */
/* WARNING: Removing unreachable block (ram,0x0043d618) */
/* WARNING: Removing unreachable block (ram,0x0043d544) */
/* WARNING: Removing unreachable block (ram,0x0043d5ac) */
/* WARNING: Removing unreachable block (ram,0x0043d550) */
/* WARNING: Removing unreachable block (ram,0x0043d5a4) */
/* WARNING: Removing unreachable block (ram,0x0043d55c) */
/* WARNING: Removing unreachable block (ram,0x0043d59c) */
/* WARNING: Removing unreachable block (ram,0x0043d568) */
/* WARNING: Removing unreachable block (ram,0x0043d57c) */
/* WARNING: Removing unreachable block (ram,0x0043d574) */
/* WARNING: Removing unreachable block (ram,0x0043d694) */
/* WARNING: Removing unreachable block (ram,0x0043d6a0) */
/* WARNING: Removing unreachable block (ram,0x0043d6ac) */
/* WARNING: Removing unreachable block (ram,0x0043d6b8) */
/* WARNING: Removing unreachable block (ram,0x0043d6c4) */

void printerApi_common_config_GetAIDetectConfig(void)

{
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 local_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x43d70c;
    FUN_00096bb8();
  }
  FUN_00098a20(0,&stack0x00000004);
  printerApi_common_config_DeviceZone();
  printerApi_common_config_DeviceEnv();
  FUN_00098e0c(*(int *)(*DAT_0043d714 + 8),*(int *)(*DAT_0043d714 + 8) + 0x110,&stack0x00000004,
               local_c,unaff_lr);
  return;
}



/* printerApi/common/config.OpLanPrint @ 0043d718 (size 320) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_common_config_OpLanPrint(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  char cStack_44;
  int iStack_40;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 *puStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x43d85c;
    FUN_00096bb8();
  }
  puStack_4 = (undefined4 *)0x0;
  FUN_000b3994();
  uStack_c = _UNK_0043d868;
  uStack_8 = _UNK_0043d864;
  puStack_4 = &uStack_c;
  printerApi_common_file_FileExist();
  if ((cStack_44 != '\0') && (FUN_00125de4(), in_stack_00000008 == iStack_40)) {
    FUN_000150d4();
    if ((char)iStack_40 != '\0') {
      (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0043d848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  FUN_00071920();
  printerApi_common_file_WriteFileWithSync();
  (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0043d830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/common/config.OpLanPrint.deferwrap1 @ 0043d870 (size 84) */

void printerApi_common_config_OpLanPrint_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x43d8a4;
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_4;
  }
  uStack_4 = *(undefined4 *)(unaff_r7 + 4);
  FUN_000b3de4();
                    /* WARNING: Could not recover jumptable at 0x0043d898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/common/config.LanPrintIsOpen @ 0043d8c4 (size 272) */

void printerApi_common_config_LanPrintIsOpen(void)

{
  int unaff_r10;
  undefined1 in_stack_00000004;
  char *local_24;
  int local_20;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  local_4 = (undefined4 *)0x0;
  in_stack_00000004 = 0;
  FUN_000b3994();
  local_c = DAT_0043d9e4;
  local_8 = DAT_0043d9e0;
  local_4 = &local_c;
  printerApi_common_file_FileExist();
  if ((char)local_24 != '\0') {
    FUN_00125de4();
    if (((local_20 == 3) && (*local_24 == 'l')) && (local_24[1] == 'a')) {
      in_stack_00000004 = local_24[2] == 'n';
    }
    else {
      in_stack_00000004 = false;
    }
    (*(code *)*local_4)();
    return;
  }
  in_stack_00000004 = 0;
  (*(code *)*local_4)();
  return;
}



/* printerApi/common/config.LanPrintIsOpen.deferwrap1 @ 0043d9ec (size 84) */

void printerApi_common_config_LanPrintIsOpen_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&local_4;
  }
  local_4 = *(undefined4 *)(unaff_r7 + 4);
  FUN_000b3de4();
  return;
}



/* printerApi/common/config.GetDeviceId @ 0043da40 (size 332) */

void printerApi_common_config_GetDeviceId(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined1 local_3c;
  undefined4 local_38;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  printerApi_common_file_FileExist();
  if (local_3c != '\0') {
    FUN_00125de4();
    if (local_38 != 0) {
      FUN_00093e34();
      return;
    }
  }
  printerApi_common_utils_str_RandomStringWithCharset();
  printerApi_common_crypto_Md5();
  internal_filepathlite_Dir();
  printerApi_common_file_CreateDirIfNoexist();
  FUN_00071920();
  printerApi_common_file_WriteFileWithSync();
  return;
}



/* printerApi/common/config.GetDeviceName @ 0043db98 (size 656) */

void printerApi_common_config_GetDeviceName(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  undefined4 unaff_lr;
  char cVar3;
  undefined4 in_stack_ffffff14;
  undefined4 uVar4;
  int local_e8;
  int local_e4;
  undefined4 local_e0;
  undefined4 *local_dc;
  int local_bc;
  undefined1 local_b1;
  undefined1 auStack_78 [8];
  int local_70;
  undefined4 local_68;
  undefined1 auStack_64 [16];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 auStack_30 [44];
  undefined4 *local_4;
  
  while( true ) {
    cVar3 = (char)in_stack_ffffff14;
    if (*(undefined1 **)(unaff_r10 + 8) < auStack_78) break;
    unaff_lr = 0x43de2c;
    FUN_00096bb8();
  }
  local_4 = (undefined4 *)0x0;
  local_b1 = 0;
  printerApi_common_file_FileExist();
  if (cVar3 != '\0') {
    FUN_00125de4();
    if (local_e8 != 0) {
      FUN_00093e34();
      return;
    }
  }
  local_e8 = 1;
  uVar1 = DAT_0043de38;
  uVar2 = DAT_0043de3c;
  uVar4 = DAT_0043de40;
  FUN_00155144();
  local_4 = local_dc;
  local_b1 = 1;
  FUN_00098a0c(0,auStack_30,local_e0,local_e4,unaff_lr,uVar1,uVar2,uVar4);
  uVar1 = *DAT_0043de44;
  printerApi_service_k3c_wrapper___K3cwrapper__Info();
  local_70 = local_bc;
  uVar2 = FUN_00098de4(local_bc,&local_e8,auStack_30);
  FUN_00098de4(uVar2,auStack_30,auStack_64);
  if (local_70 != 0) {
    printerApi_common_config_GetMachineId();
    local_38 = uVar1;
    internal_filepathlite_Dir();
    printerApi_common_file_CreateDirIfNoexist();
    FUN_00071920();
    local_e8 = local_e4;
    local_e4 = local_e0;
    printerApi_common_file_WriteFileWithSync();
    local_b1 = 0;
    (*(code *)*local_4)();
    return;
  }
  local_34 = local_54;
  local_68 = local_50;
  internal_filepathlite_Dir();
  printerApi_common_file_CreateDirIfNoexist();
  FUN_00071920();
  local_e8 = local_e4;
  local_e4 = local_e0;
  printerApi_common_file_WriteFileWithSync();
  local_b1 = 0;
  (*(code *)*local_4)();
  return;
}



/* printerApi/common/config.SetDeviceName @ 0043de48 (size 144) */

void printerApi_common_config_SetDeviceName(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  internal_filepathlite_Dir();
  printerApi_common_file_CreateDirIfNoexist();
  FUN_00071920();
  printerApi_common_file_WriteFileWithSync();
  return;
}



/* printerApi/common/config.GetPPWW @ 0043dee0 (size 636) */

/* WARNING: Removing unreachable block (ram,0x0043e01c) */

void printerApi_common_config_GetPPWW(void)

{
  uint uVar1;
  uint uVar2;
  uint extraout_r2;
  int extraout_r3;
  int unaff_r10;
  undefined4 unaff_lr;
  bool bVar3;
  undefined4 in_stack_00000004;
  uint in_stack_00000008;
  char cVar4;
  undefined4 uVar5;
  uint local_7c;
  int local_78;
  undefined4 local_74;
  undefined *local_5c [2];
  undefined *local_54;
  undefined4 local_50;
  undefined *local_1c [2];
  undefined *local_14;
  undefined *local_10;
  int local_c;
  undefined **local_4;
  
  while (&local_10 <= *(undefined ***)(unaff_r10 + 8)) {
    unaff_lr = 0x43e158;
    FUN_00096bb8();
  }
  local_4 = (undefined **)0x0;
  uVar5 = 0;
  FUN_0012576c(0);
  bVar3 = local_78 == 0;
  if (!bVar3) {
    FUN_00098a28(0,&local_14,local_74,local_78);
    local_14 = PTR_SUB_0043e160;
    local_10 = PTR_DAT_0043e164;
    local_c = extraout_r3;
    if (!bVar3) {
      local_c = *(int *)(extraout_r3 + 4);
    }
    printerApi_common_logger_Error();
    return;
  }
  local_1c[0] = PTR_printerApi_common_config_GetPPWW_deferwrap1_0043e168;
  local_4 = local_1c;
  FUN_000989f8(0,local_5c,local_7c,1,unaff_lr,in_stack_00000004,in_stack_00000008,uVar5);
  local_5c[0] = PTR_DAT_0043e16c;
  local_54 = PTR_DAT_0043e170;
  local_50 = 0x10000;
  do {
    do {
      cVar4 = (char)in_stack_00000008;
      FUN_00189540();
      if (cVar4 == '\0') goto LAB_0043e110;
      FUN_00093e34();
      in_stack_00000008 = local_7c;
      internal_stringslite_Index();
    } while (local_7c == 0xffffffff);
    uVar2 = local_7c + 9;
    if (local_7c < uVar2) goto LAB_0043e13c;
    in_stack_00000008 = 0xfffffff7;
    internal_stringslite_Index();
  } while (local_7c == 0xffffffff);
  uVar1 = local_7c * 2 + 9;
  if (uVar1 <= local_7c) {
    if (uVar2 <= uVar1) {
LAB_0043e110:
      (*(code *)*local_4)();
      return;
    }
    FUN_00098758(uVar2);
  }
  FUN_00098718();
  uVar2 = extraout_r2;
LAB_0043e13c:
  uVar5 = FUN_00098758(uVar2);
  FUN_0004fb3c(uVar5);
  return;
}



/* printerApi/common/config.GetPPWW.deferwrap1 @ 0043e17c (size 96) */

void printerApi_common_config_GetPPWW_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_c [3];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)local_c;
  }
  if (*(undefined4 **)(unaff_r7 + 4) != (undefined4 *)0x0) {
    local_c[0] = **(undefined4 **)(unaff_r7 + 4);
    FUN_00127938();
  }
  return;
}



/* printerApi/common/config.Unzippd @ 0043e1dc (size 720) */

void printerApi_common_config_Unzippd(void)

{
  char cVar1;
  char *pcVar2;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  if (*(int *)(*(int *)(*DAT_0043e4b0 + 8) + 0x7c) == 5) {
    pcVar2 = *(char **)(*(int *)(*DAT_0043e4b0 + 8) + 0x78);
    cVar1 = *pcVar2;
    if ((((cVar1 == '2') && (pcVar2[1] == '0')) && (pcVar2[2] == '0')) &&
       ((pcVar2[3] == '2' && (pcVar2[4] == '5')))) {
      printerApi_common_config_GetPPWW();
      return;
    }
    if (((cVar1 == '2') && (pcVar2[1] == '0')) &&
       ((pcVar2[2] == '0' && ((pcVar2[3] == '2' && (pcVar2[4] == '6')))))) {
      printerApi_common_config_GetPPWW();
      return;
    }
    if ((((cVar1 == '2') && (pcVar2[1] == '0')) && (pcVar2[2] == '0')) &&
       ((pcVar2[3] == '2' && (pcVar2[4] == '9')))) {
      printerApi_common_config_GetPPWW();
      return;
    }
    if (((cVar1 == '2') && (pcVar2[1] == '0')) &&
       ((pcVar2[2] == '0' && ((pcVar2[3] == '3' && (pcVar2[4] == '1')))))) {
      printerApi_common_config_GetPPWW();
      return;
    }
    if ((((cVar1 == '2') && (pcVar2[1] == '0')) && (pcVar2[2] == '0')) &&
       ((pcVar2[3] == '3' && (pcVar2[4] == '2')))) {
      printerApi_common_config_GetPPWW();
      return;
    }
  }
  return;
}



/* printerApi/common/config.FilamentDetectEnable @ 0043e4bc (size 252) */

/* WARNING: Removing unreachable block (ram,0x0043e594) */

void printerApi_common_config_FilamentDetectEnable(void)

{
  int unaff_r10;
  undefined1 in_stack_00000004;
  int local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_00125de4();
  if (local_18 != 0) {
    return;
  }
  FUN_0001eed8();
  FUN_0016a168();
  return;
}



