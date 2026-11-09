// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/controller/network   functions: 11
/* printerApi/controller/network.(*NetworkController).BleReStart @ 00657694 (size 704) */

/* WARNING: Removing unreachable block (ram,0x00657830) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_network___NetworkController__BleReStart(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined *extraout_r2;
  undefined *puVar5;
  int extraout_r3;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar6;
  undefined4 in_stack_00000004;
  int in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  int iStack_2c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x657950;
    FUN_00096bb8();
  }
  printerApi_common_logger_Debug();
  printerApi_service_store_setPrinterState();
  printerApi_cloud_Stop();
  printerApi_cloud_ReportCloudConnectState();
  puVar1 = PTR_DAT_00657968;
  uVar2 = *(undefined4 *)PTR_DAT_00657964;
  FUN_0001eed8();
  iVar3 = 10;
  _DAT_0000000a = PTR_printerApi_controller_network___NetworkController__connectCloud_fm_0065796c;
  if (*(int *)PTR_DAT_00657970 != 0) {
    iVar3 = FUN_00098678();
    *unaff_r8 = in_stack_00000004;
  }
  uVar6 = CONCAT44(uVar2,iVar3);
  *(undefined4 *)(iVar3 + 4) = in_stack_00000004;
  if (*(int *)PTR_DAT_00657970 != 0) {
    uVar6 = FUN_00098688();
    *unaff_r8 = (int)uVar6;
    unaff_r8[1] = *(undefined4 *)((int)((ulonglong)uVar6 >> 0x20) + 0x38);
  }
  *(int *)((int)((ulonglong)uVar6 >> 0x20) + 0x38) = (int)uVar6;
  iVar3 = *(int *)PTR_DAT_00657964;
  if (*(int *)PTR_DAT_00657970 != 0) {
    uVar6 = FUN_00098678(iVar3,*(undefined4 *)(iVar3 + 0x3c));
    iVar3 = (int)uVar6;
    *unaff_r8 = (int)((ulonglong)uVar6 >> 0x20);
  }
  *(undefined **)(iVar3 + 0x3c) = PTR_DAT_00657974;
  iVar3 = *(int *)PTR_DAT_00657964;
  if (*(int *)PTR_DAT_00657970 != 0) {
    uVar6 = FUN_00098678(iVar3,*(undefined4 *)(iVar3 + 0x40));
    iVar3 = (int)uVar6;
    *unaff_r8 = (int)((ulonglong)uVar6 >> 0x20);
  }
  *(undefined **)(iVar3 + 0x40) = PTR_DAT_00657978;
  printerApi_common_config_BleName();
  printerApi_service_ble_wifi___blewifi__Start();
  if (iStack_2c == 0) {
    FUN_0008b6b8();
    puVar5 = PTR_s_ble_nameTest100MTest300MPrintIng_0077568d_0x400_00657984;
    FUN_0008e7bc();
    _DAT_00000004 = 10;
    if (*(int *)PTR_DAT_00657970 == 0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)FUN_00098688();
      *unaff_r8 = puVar1;
      unaff_r8[1] = *puVar4;
    }
    *puVar4 = puVar1;
    FUN_001707f4();
    *(undefined4 *)(in_stack_00000020 + 0x14) = 8;
    *(undefined4 *)(in_stack_00000020 + 0x18) = 0;
    iVar3 = in_stack_00000020;
    if (*(int *)PTR_DAT_00657970 != 0) {
      FUN_00098688();
      *unaff_r8 = extraout_r2;
      unaff_r8[1] = *(undefined4 *)(extraout_r3 + 0x10);
      puVar5 = extraout_r2;
      iVar3 = extraout_r3;
    }
    *(undefined **)(iVar3 + 0x10) = puVar5;
    in_stack_00000024 = 0;
    in_stack_00000028 = 0;
                    /* WARNING: Could not recover jumptable at 0x00657944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  printerApi_common_logger_Errorf();
                    /* WARNING: Could not recover jumptable at 0x00657878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/network.(*NetworkController).connectCloud @ 00657988 (size 596) */

/* WARNING: Removing unreachable block (ram,0x00657ae0) */
/* WARNING: Removing unreachable block (ram,0x00657ab0) */
/* WARNING: Removing unreachable block (ram,0x00657b2c) */
/* WARNING: Removing unreachable block (ram,0x00657b68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void printerApi_controller_network___NetworkController__connectCloud(void)

{
  int unaff_r10;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  printerApi_common_logger_Debug();
  printerApi_common_config_GetDeviceUnionid();
  printerApi_common_logger_Debug();
  printerApi_common_config_NTPSync();
  if (&stack0x00000000 == &DAT_00000008) {
    printerApi_cloud___Cloud__Connect();
    printerApi_common_logger_Errorf();
    return;
  }
  printerApi_common_logger_Errorf();
  FUN_0001eed8();
  _SUB_0000002a = 0xd;
  _DAT_00000026 = DAT_00657bf4;
  return;
}



/* printerApi/controller/network.SpeedTestPublishMessage @ 00657c18 (size 464) */

void printerApi_controller_network_SpeedTestPublishMessage(void)

{
  undefined4 uVar1;
  undefined8 *extraout_r3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined8 uVar2;
  undefined8 *in_stack_00000004;
  undefined8 *in_stack_00000008;
  undefined4 *in_stack_0000000c;
  undefined4 *in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined8 *local_44;
  undefined *local_2c;
  undefined4 local_28;
  undefined8 *local_24;
  undefined8 *local_14;
  undefined8 *local_10;
  undefined8 *local_c;
  undefined8 *local_8;
  undefined8 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0001eed8();
  local_4 = local_44;
  *local_44 = *in_stack_00000004;
  FUN_0001eed8();
  local_8 = local_44;
  *local_44 = *in_stack_00000008;
  FUN_0001eed8();
  local_c = local_44;
  uVar1 = in_stack_0000000c[1];
  *(undefined4 *)local_44 = *in_stack_0000000c;
  *(undefined4 *)((int)local_44 + 4) = uVar1;
  FUN_0001eed8();
  uVar1 = *in_stack_00000010;
  *(undefined4 *)((int)local_44 + 4) = in_stack_00000010[1];
  local_10 = local_44;
  if (*(int *)PTR_DAT_00657df8 != 0) {
    uVar2 = FUN_00098678();
    uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
    local_10 = (undefined8 *)uVar2;
    *unaff_r8 = uVar1;
  }
  *(undefined4 *)local_10 = uVar1;
  FUN_00098a20(0,&local_2c);
  local_2c = PTR_DAT_00657dfc;
  local_28 = 0x15;
  FUN_0001eed8();
  local_14 = local_44;
  FUN_0001eed8();
  if (*(int *)PTR_DAT_00657df8 != 0) {
    FUN_000986c8();
    *unaff_r8 = local_4;
    unaff_r8[1] = local_8;
    unaff_r8[2] = local_c;
    unaff_r8[3] = local_10;
    unaff_r8[4] = extraout_r3;
    unaff_r8[5] = *(undefined4 *)((int)local_14 + 0x14);
    local_44 = extraout_r3;
  }
  *(undefined8 **)local_44 = local_4;
  *(undefined8 **)((int)local_44 + 4) = local_8;
  *(undefined8 **)(local_44 + 1) = local_c;
  *(undefined8 **)((int)local_44 + 0xc) = local_10;
  *(undefined8 **)((int)local_14 + 0x14) = local_44;
  local_24 = local_14;
  FUN_0001cd7c();
  FUN_001707f4();
  printerApi_service_k3c_Publish();
  return;
}



/* printerApi/controller/network.(*NetworkController).Speedtest @ 00657e0c (size 1268) */

/* WARNING: Removing unreachable block (ram,0x00657e80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_network___NetworkController__Speedtest(void)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *extraout_r2;
  undefined4 *puVar4;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 *in_stack_00000004;
  undefined8 *in_stack_00000018;
  int in_stack_0000001c;
  undefined8 *puStack_90;
  undefined8 *puStack_8c;
  undefined4 *puStack_88;
  undefined **ppuStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  undefined8 *puStack_54;
  undefined *puStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [20];
  uint uStack_34;
  undefined8 *puStack_30;
  undefined4 uStack_2c;
  undefined8 *puStack_28;
  undefined4 *puStack_24;
  undefined8 *puStack_20;
  undefined8 *puStack_1c;
  undefined8 *puStack_18;
  undefined8 *puStack_14;
  undefined4 uStack_10;
  undefined8 *puStack_c;
  undefined8 *puStack_8;
  undefined8 *puStack_4;
  
  while (&puStack_14 <= *(undefined8 ***)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x6582fc;
    FUN_00096bb8();
  }
  puStack_90 = in_stack_00000004;
  puStack_8c = (undefined8 *)0x0;
  puStack_88 = (undefined4 *)0x1;
  internal_runtime_atomic_Cas();
  if (((uint)ppuStack_84 & 0xff) == 0) {
    puStack_90 = (undefined8 *)PTR_DAT_00658368;
    FUN_0001eed8();
    *(undefined4 *)((int)puStack_8c + 4) = 0x14;
    *(undefined **)puStack_8c = PTR_DAT_0065836c;
                    /* WARNING: Could not recover jumptable at 0x006582f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  printerApi_common_config_NTPSync();
  if (puStack_90 != (undefined8 *)0x0) {
    puStack_54 = puStack_90;
    uStack_10 = *(undefined4 *)((int)puStack_90 + 4);
    puStack_28 = puStack_8c;
    puStack_c = puStack_8c;
    puStack_90 = (undefined8 *)PTR_DAT_00658304;
    puStack_8c = (undefined8 *)0x23;
    puStack_88 = &uStack_10;
    ppuStack_84 = (undefined **)0x1;
    iStack_80 = 1;
    printerApi_common_logger_Errorf();
                    /* WARNING: Could not recover jumptable at 0x00657ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  if (in_stack_0000001c == 8) {
    puStack_14 = in_stack_00000018;
    puStack_90 = in_stack_00000018;
    puStack_8c = (undefined8 *)PTR_s_Test100MTest300MPrintIngnotagain_0077568d_0x408_00658308;
    puStack_88 = (undefined4 *)0x8;
    FUN_000150d4();
    puStack_30 = (undefined8 *)PTR_DAT_0065830c;
    if ((char)ppuStack_84 != '\0') goto LAB_00657f40;
    puStack_90 = puStack_14;
    puStack_8c = (undefined8 *)PTR_s_Test300MPrintIngnotagainpassword_0077568d_0x410_00658310;
    puStack_88 = (undefined4 *)0x8;
    FUN_000150d4();
    puStack_30 = (undefined8 *)PTR_DAT_00658314;
    if ((char)ppuStack_84 != '\0') goto LAB_00657f40;
  }
  puStack_30 = (undefined8 *)PTR_DAT_0065830c;
LAB_00657f40:
  puStack_90 = (undefined8 *)PTR_DAT_00658318;
  FUN_0001eed8();
  puStack_18 = puStack_8c;
  puStack_90 = (undefined8 *)PTR_DAT_0065831c;
  FUN_0001eed8();
  *(undefined1 *)(puStack_8c + 10) = 1;
  puVar1 = puStack_8c;
  if (*(int *)PTR_DAT_00658320 != 0) {
    puVar1 = (undefined8 *)FUN_00098688();
    *unaff_r8 = (int)puVar1;
    unaff_r8[1] = *(int *)((int)puStack_18 + 0x7c);
  }
  *(undefined8 **)((int)puStack_18 + 0x7c) = puVar1;
  *(undefined4 *)(puStack_18 + 0x10) = _UNK_00658324;
  *(undefined4 *)((int)puStack_18 + 0x84) = 2;
  *(undefined4 *)(puStack_18 + 0x13) = _UNK_00658328;
  *(undefined4 *)((int)puStack_18 + 0x9c) = 6;
  *(undefined4 *)(puStack_18 + 0x14) = _UNK_0065832c;
  *(undefined4 *)((int)puStack_18 + 0xa4) = 1;
  *(undefined4 *)(puStack_18 + 0x15) = _UNK_00658330;
  *(undefined4 *)((int)puStack_18 + 0xac) = 0;
  puStack_90 = _UNK_00658334;
  FUN_0001eed8();
  puStack_1c = puStack_8c;
  *(undefined4 *)puStack_8c = _UNK_00658338;
  puStack_90 = _UNK_0065833c;
  FUN_0001eed8();
  *(undefined4 *)puStack_8c = _UNK_00658324;
  *(undefined4 *)((int)puStack_8c + 4) = 2;
  *(undefined1 *)(puStack_8c + 7) = 1;
  *(undefined4 *)((int)puStack_8c + 0x3c) = _UNK_0065832c;
  *(undefined4 *)(puStack_8c + 8) = 1;
  *(undefined4 *)((int)puStack_8c + 0x44) = _UNK_00658340;
  *(undefined4 *)(puStack_8c + 9) = 0;
  *(undefined4 *)((int)puStack_8c + 0x4c) = 3;
  puVar1 = puStack_8c;
  if (*(int *)PTR_DAT_00658320 != 0) {
    puVar1 = (undefined8 *)FUN_000986a8();
    *unaff_r8 = (int)puVar1;
    unaff_r8[1] = *(int *)((int)puStack_1c + 4);
    unaff_r8[2] = (int)puStack_1c;
    unaff_r8[3] = *(int *)((int)puStack_18 + 0x6c);
  }
  *(undefined8 **)((int)puStack_1c + 4) = puVar1;
  *(undefined8 **)((int)puStack_18 + 0x6c) = puStack_1c;
  puStack_90 = _UNK_00658344;
  FUN_0001eed8();
  *(undefined4 *)((int)puStack_8c + 0x14) = _UNK_00658348;
  *(undefined4 *)(puStack_8c + 3) = 0xd1;
  *(undefined **)puStack_8c = PTR_DAT_0065834c;
  puVar1 = puStack_8c;
  if (*(int *)PTR_DAT_00658320 != 0) {
    puVar1 = (undefined8 *)FUN_00098678();
    *unaff_r8 = (int)puStack_18;
  }
  *(undefined8 **)((int)puVar1 + 4) = puStack_18;
  puStack_8c = puStack_30;
  puStack_88 = (undefined4 *)&DAT_00000039;
  puStack_90 = puVar1;
  func_0x00343160();
  if (iStack_80 == 0) {
    uStack_34 = (uint)ppuStack_84;
    uStack_60 = *(undefined4 *)((int)ppuStack_84 + 0x28);
    uStack_5c = *(undefined4 *)((int)ppuStack_84 + 0x2c);
    puStack_90 = (undefined8 *)PTR_DAT_00658350;
    FUN_0001eed8();
    puStack_4 = puStack_8c;
    uVar2 = FUN_0010cf30();
    FUN_00098e14(uVar2,&puStack_90,auStack_48);
    puStack_90 = (undefined8 *)PTR_DAT_00658354;
    FUN_0001eed8();
    puStack_8 = puStack_8c;
    puStack_90 = (undefined8 *)PTR_DAT_00658358;
    FUN_0001eed8();
    *(undefined **)puStack_8c =
         PTR_printerApi_controller_network___NetworkController__Speedtest_func1_0065835c;
    puStack_20 = puStack_8c;
    if (*(int *)PTR_DAT_00658320 != 0) {
      puStack_20 = (undefined8 *)FUN_00098698();
      *unaff_r8 = (int)in_stack_00000004;
      unaff_r8[1] = uStack_34;
      unaff_r8[2] = (int)puStack_4;
    }
    *(undefined8 **)((int)puStack_20 + 4) = in_stack_00000004;
    *(uint *)(puStack_20 + 1) = uStack_34;
    *(undefined4 *)((int)puStack_20 + 0xc) = 0x2000;
    *(undefined8 **)(puStack_20 + 2) = puStack_4;
    *(undefined4 *)((int)puStack_20 + 0x14) = uStack_60;
    *(undefined4 *)(puStack_20 + 3) = uStack_5c;
    puVar4 = (undefined4 *)((int)puStack_20 + 0x1c);
    if (*(int *)PTR_DAT_00658320 != 0) {
      puStack_24 = (undefined4 *)((int)puStack_20 + 0x1c);
      iVar3 = FUN_00098688();
      *unaff_r8 = (int)puStack_8;
      unaff_r8[1] = *(int *)(iVar3 + 0x30);
      puStack_90 = (undefined8 *)PTR_DAT_00658360;
      puStack_88 = (undefined4 *)auStack_48;
      puStack_8c = extraout_r2;
      FUN_00022914();
      puVar4 = puStack_24;
    }
    FUN_00098e14(puStack_20,auStack_48,puVar4);
    *(undefined8 **)(puStack_20 + 6) = puStack_8;
    puStack_90 = puStack_20;
    FUN_0005e168();
                    /* WARNING: Could not recover jumptable at 0x0065824c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  iStack_58 = iStack_80;
  uStack_2c = uStack_7c;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  puStack_50 = PTR_DAT_00658364;
  uStack_4c = 0x13;
  puStack_90 = &uStack_68;
  puStack_8c = &uStack_70;
  puStack_88 = &uStack_78;
  ppuStack_84 = &puStack_50;
  printerApi_controller_network_SpeedTestPublishMessage();
                    /* WARNING: Could not recover jumptable at 0x006582c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/network.(*NetworkController).Speedtest.func1 @ 00658374 (size 1916) */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void printerApi_controller_network___NetworkController__Speedtest_func1(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  int unaff_r7;
  double *pdVar4;
  int unaff_r10;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_188;
  double *pdStack_180;
  double *pdStack_17c;
  uint uStack_178;
  int iStack_174;
  double *pdStack_170;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 uStack_155;
  double dStack_154;
  uint uStack_14c;
  uint uStack_148;
  undefined8 uStack_144;
  undefined8 uStack_13c;
  uint uStack_134;
  uint uStack_130;
  undefined8 uStack_12c;
  undefined8 uStack_124;
  uint uStack_11c;
  uint uStack_118;
  double dStack_114;
  double dStack_10c;
  undefined4 uStack_104;
  undefined4 uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  int iStack_f4;
  int iStack_f0;
  double dStack_ec;
  double dStack_e4;
  uint uStack_dc;
  uint uStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  double *pdStack_b8;
  undefined8 uStack_b4;
  double dStack_ac;
  undefined8 uStack_a4;
  double dStack_9c;
  double dStack_94;
  double dStack_8c;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  double *pdStack_64;
  code *pcStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  double *pdStack_50;
  undefined4 uStack_4c;
  double *pdStack_48;
  undefined4 uStack_44;
  double *pdStack_40;
  undefined4 uStack_3c;
  double *pdStack_38;
  undefined4 uStack_34;
  double *pdStack_30;
  undefined1 auStack_2c [20];
  double *pdStack_18;
  
  while (&dStack_10c <= *(double **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  uStack_188._4_4_ = *(double **)(unaff_r7 + 0xc);
  uStack_68 = *(undefined4 *)(unaff_r7 + 4);
  iStack_6c = *(int *)(unaff_r7 + 8);
  puVar3 = *(uint **)(unaff_r7 + 0x10);
  uStack_104 = *(undefined4 *)(unaff_r7 + 0x14);
  uStack_100 = *(undefined4 *)(unaff_r7 + 0x18);
  pdVar4 = *(double **)(unaff_r7 + 0x30);
  pcStack_60 = DAT_00658afc;
  uStack_155 = 1;
  uStack_188._0_4_ = (double *)DAT_00658b00;
  pdStack_180 = uStack_188._4_4_;
  pdStack_b8 = uStack_188._4_4_;
  uStack_5c = uStack_68;
  iStack_58 = iStack_6c;
  FUN_000933e8();
  pdStack_18 = pdStack_17c;
  while( true ) {
    uStack_188._0_4_ = (double *)uStack_68;
    internal_runtime_atomic_Load();
    if (uStack_188._4_4_ == (double *)0x0) {
      uStack_188._0_4_ = (double *)DAT_00658b30;
      uStack_188._4_4_ = (double *)0xf;
      pdStack_180 = (double *)0x0;
      pdStack_17c = (double *)0x0;
      uStack_178 = 0;
      printerApi_common_logger_Errorf();
      goto LAB_00658880;
    }
    uStack_188._0_4_ = *(double **)(iStack_6c + 0x24);
    uStack_188._4_4_ = pdStack_18;
    pdStack_180 = pdStack_b8;
    pdStack_17c = pdStack_b8;
    (**(code **)(*(int *)(iStack_6c + 0x20) + 0x10))();
    iStack_cc = iStack_174;
    pdStack_64 = pdStack_170;
    if (0 < (int)uStack_178) {
      uVar2 = *puVar3;
      uStack_188._0_4_ = (double *)(uVar2 + uStack_178);
      *puVar3 = (uint)(double *)uStack_188;
      uStack_188._4_4_ =
           (double *)(puVar3[1] + ((int)uStack_178 >> 0x1f) + (uint)CARRY4(uVar2,uStack_178));
      puVar3[1] = (uint)uStack_188._4_4_;
      FUN_0008695c();
      dStack_8c = (double)CONCAT44(pdStack_17c,pdStack_180);
      uStack_188._0_4_ = (double *)uStack_104;
      uStack_188._4_4_ = (double *)uStack_100;
      FUN_0008695c();
      dStack_94 = (double)CONCAT44(pdStack_17c,pdStack_180);
      uVar1 = FUN_0010cf30();
      uVar1 = FUN_00098e14(uVar1,&uStack_188,auStack_2c);
      uVar1 = FUN_00098e14(uVar1,auStack_2c,&uStack_188);
      FUN_00098e14(uVar1,unaff_r7 + 0x1c,&iStack_174);
      FUN_00103018();
      uStack_c4 = uStack_160;
      uStack_bc = uStack_15c;
      dStack_e4 = dStack_8c / dStack_94;
      uStack_188._0_4_ = (double *)uStack_160;
      uStack_188._4_4_ = (double *)uStack_15c;
      pdStack_180 = DAT_00658b04;
      pdStack_17c = (double *)0x0;
      FUN_00086d18();
      uStack_f8 = uStack_178;
      iStack_f0 = iStack_174;
      uStack_188._0_4_ = (double *)uStack_c4;
      uStack_188._4_4_ = (double *)uStack_bc;
      pdStack_180 = DAT_00658b04;
      pdStack_17c = (double *)0x0;
      FUN_00086ea4();
      uStack_d8 = uStack_178;
      iStack_d0 = iStack_174;
      uStack_188._0_4_ = (double *)uStack_f8;
      uStack_188._4_4_ = (double *)iStack_f0;
      FUN_0008695c();
      dStack_8c = (double)CONCAT44(pdStack_17c,pdStack_180);
      uStack_188._0_4_ = (double *)uStack_d8;
      uStack_188._4_4_ = (double *)iStack_d0;
      FUN_0008695c();
      uStack_188._0_4_ = (double *)*puVar3;
      uStack_188._4_4_ = (double *)puVar3[1];
      dStack_94 = (double)CONCAT44(pdStack_17c,pdStack_180);
      FUN_0008695c();
      dVar8 = (double)CONCAT44(pdStack_17c,pdStack_180);
      dVar5 = *pdVar4;
      dVar6 = dStack_8c + dStack_94 / *DAT_00658b08;
      dVar7 = *DAT_00658b0c;
      if (((dVar5 == 0.0) || (1.0 <= dVar6 - dVar5)) || (*DAT_00658b10 < dStack_e4)) {
        *pdVar4 = dVar6;
        dStack_10c = dStack_e4;
        uStack_11c = *puVar3;
        uStack_118 = puVar3[1];
        uStack_74 = DAT_00658b14;
        uStack_70 = 0x10;
        uStack_188._0_4_ = &dStack_10c;
        uStack_188._4_4_ = &dStack_114;
        pdStack_180 = (double *)&uStack_11c;
        pdStack_17c = (double *)&uStack_74;
        dStack_114 = dVar7 * (dVar8 / dVar6);
        printerApi_controller_network_SpeedTestPublishMessage();
        dVar8 = *DAT_00658b0c;
        dVar8 = *DAT_00658b10;
      }
    }
    if (iStack_cc == 0) {
      uVar2 = 0;
    }
    else if (*DAT_00658b18 == iStack_cc) {
      pdStack_180 = (double *)*DAT_00658b1c;
      uStack_188._0_4_ = (double *)iStack_cc;
      uStack_188._4_4_ = pdStack_64;
      FUN_000169b8();
      uVar2 = (uint)pdStack_17c & 0xff ^ 1;
    }
    else {
      uVar2 = 1;
    }
    if (uVar2 != 0) break;
    if (*DAT_00658b18 == iStack_cc) {
      pdStack_180 = (double *)*DAT_00658b1c;
      uStack_188._0_4_ = (double *)iStack_cc;
      uStack_188._4_4_ = pdStack_64;
      FUN_000169b8();
      if ((char)pdStack_17c != '\0') {
        uStack_13c = *DAT_00658b20;
        uStack_144 = 0;
        uStack_14c = *puVar3;
        uStack_148 = puVar3[1];
        uStack_84 = DAT_00658b24;
        uStack_80 = 0x15;
        uStack_188._0_4_ = (double *)&uStack_13c;
        uStack_188._4_4_ = (double *)&uStack_144;
        pdStack_180 = (double *)&uStack_14c;
        pdStack_17c = (double *)&uStack_84;
        printerApi_controller_network_SpeedTestPublishMessage();
LAB_00658880:
        uStack_188._0_4_ = (double *)*puVar3;
        uStack_188._4_4_ = (double *)puVar3[1];
        FUN_0008695c();
        dStack_8c = (double)CONCAT44(pdStack_17c,pdStack_180);
        uStack_188._0_4_ = (double *)uStack_104;
        uStack_188._4_4_ = (double *)uStack_100;
        FUN_0008695c();
        dStack_94 = (double)CONCAT44(pdStack_17c,pdStack_180);
        uVar1 = FUN_0010cf30();
        dStack_ec = dStack_8c / dStack_94;
        uVar1 = FUN_00098e14(uVar1,&uStack_188,auStack_2c);
        uVar1 = FUN_00098e14(uVar1,auStack_2c,&uStack_188);
        FUN_00098e14(uVar1,unaff_r7 + 0x1c,&iStack_174);
        FUN_00103018();
        uStack_c8 = uStack_160;
        uStack_c0 = uStack_15c;
        uStack_188._0_4_ = (double *)uStack_160;
        uStack_188._4_4_ = (double *)uStack_15c;
        pdStack_180 = DAT_00658b04;
        pdStack_17c = (double *)0x0;
        FUN_00086d18();
        uStack_fc = uStack_178;
        iStack_f4 = iStack_174;
        uStack_188._0_4_ = (double *)uStack_c8;
        uStack_188._4_4_ = (double *)uStack_c0;
        pdStack_180 = DAT_00658b04;
        pdStack_17c = (double *)0x0;
        FUN_00086ea4();
        uStack_dc = uStack_178;
        iStack_d4 = iStack_174;
        uStack_188._0_4_ = (double *)uStack_fc;
        uStack_188._4_4_ = (double *)iStack_f4;
        FUN_0008695c();
        dStack_8c = (double)CONCAT44(pdStack_17c,pdStack_180);
        uStack_188._0_4_ = (double *)uStack_dc;
        uStack_188._4_4_ = (double *)iStack_d4;
        FUN_0008695c();
        uStack_188._0_4_ = (double *)*puVar3;
        uStack_188._4_4_ = (double *)puVar3[1];
        dStack_94 = (double)CONCAT44(pdStack_17c,pdStack_180);
        FUN_0008695c();
        dStack_9c = (double)CONCAT44(pdStack_17c,pdStack_180);
        FUN_00098a18(0,&uStack_54);
        uStack_a4 = dStack_ec;
        dVar8 = uStack_a4;
        uStack_a4._0_4_ = SUB84(dStack_ec,0);
        uStack_a4._4_4_ = (undefined4)((ulonglong)dStack_ec >> 0x20);
        uStack_188._0_4_ = (double *)(undefined4)uStack_a4;
        uStack_188._4_4_ = (double *)uStack_a4._4_4_;
        uStack_a4 = dVar8;
        FUN_0008a4bc();
        uStack_54 = DAT_00658b34;
        pdStack_50 = pdStack_180;
        dStack_154 = dStack_8c + dStack_94 / *DAT_00658b08;
        dStack_ac = *DAT_00658b0c * (dStack_9c / dStack_154);
        uStack_188 = dStack_ac;
        FUN_0008a4bc();
        uStack_4c = DAT_00658b34;
        pdStack_48 = pdStack_180;
        uStack_188._0_4_ = (double *)*puVar3;
        uStack_188._4_4_ = (double *)puVar3[1];
        FUN_0008a4bc();
        uStack_44 = DAT_00658b38;
        pdStack_40 = pdStack_180;
        uStack_b4 = dStack_154;
        dVar8 = uStack_b4;
        uStack_b4._0_4_ = SUB84(dStack_154,0);
        uStack_b4._4_4_ = (undefined4)((ulonglong)dStack_154 >> 0x20);
        uStack_188._0_4_ = (double *)(undefined4)uStack_b4;
        uStack_188._4_4_ = (double *)uStack_b4._4_4_;
        uStack_b4 = dVar8;
        FUN_0008a4bc();
        uStack_3c = DAT_00658b34;
        pdStack_38 = pdStack_180;
        uStack_188._0_4_ = (double *)DAT_00658b3c;
        uStack_188._4_4_ = (double *)0x44;
        pdStack_180 = (double *)&uStack_54;
        pdStack_17c = (double *)0x4;
        uStack_178 = 4;
        printerApi_common_logger_Debugf();
        uStack_155 = 0;
        (*pcStack_60)();
        return;
      }
    }
  }
  uStack_34 = 0;
  if (iStack_cc != 0) {
    uStack_34 = *(undefined4 *)(iStack_cc + 4);
  }
  uStack_188._0_4_ = (double *)DAT_00658b28;
  uStack_188._4_4_ = (double *)0x21;
  pdStack_180 = (double *)&uStack_34;
  pdStack_17c = (double *)0x1;
  uStack_178 = 1;
  pdStack_30 = pdStack_64;
  printerApi_common_logger_Errorf();
  uStack_124 = 0;
  uStack_12c = 0;
  uStack_134 = *puVar3;
  uStack_130 = puVar3[1];
  uStack_7c = DAT_00658b2c;
  uStack_78 = 0x13;
  uStack_188._0_4_ = (double *)&uStack_124;
  uStack_188._4_4_ = (double *)&uStack_12c;
  pdStack_180 = (double *)&uStack_134;
  pdStack_17c = (double *)&uStack_7c;
  printerApi_controller_network_SpeedTestPublishMessage();
  goto LAB_00658880;
}



/* printerApi/controller/network.(*NetworkController).Speedtest.func1.1 @ 00658b40 (size 96) */

void printerApi_controller_network___NetworkController__Speedtest_func1_1(void)

{
  int iVar1;
  int unaff_r7;
  int unaff_r10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  iVar1 = *(int *)(unaff_r7 + 8);
  internal_runtime_atomic_Cas();
  (**(code **)(*(int *)(iVar1 + 0x20) + 0xc))();
  return;
}



/* printerApi/controller/network.(*NetworkController).SpeedtestStop @ 00658ba0 (size 140) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_network___NetworkController__SpeedtestStop(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined1 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x658c28;
    FUN_00096bb8();
  }
  internal_runtime_atomic_Cas();
  if (uStack_4 != '\0') {
    in_stack_00000024 = 0;
    in_stack_00000028 = 0;
                    /* WARNING: Could not recover jumptable at 0x00658bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_0001eed8();
  _DAT_00000005 = 0x14;
  uRam00000001 = _UNK_00658c34;
  in_stack_00000024 = _UNK_00658c38;
  in_stack_00000028 = 1;
                    /* WARNING: Could not recover jumptable at 0x00658c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/network.(*NetworkController).BleReStart.func1 @ 00658c3c (size 88) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_network___NetworkController__BleReStart_func1(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x658c90;
    FUN_00096bb8();
  }
  printerApi_common_logger_Debug();
  in_stack_00000004 = 0;
  in_stack_00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00658c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/network.(*NetworkController).BleReStart.func2 @ 00658ca0 (size 468) */

void printerApi_controller_network___NetworkController__BleReStart_func2(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x38);
      *(undefined4 *)((int)register0x00000054 + -0x38) = unaff_lr;
      if (*(char *)((int)register0x00000054 + 4) == '\0') goto LAB_00658e3c;
      *(undefined **)((int)register0x00000054 + -0x14) = PTR_SUB_00658e78;
      *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_00658e7c;
      *(undefined1 **)((int)register0x00000054 + -0x34) =
           (undefined1 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x30) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x2c) = 1;
      printerApi_common_logger_Debug();
      *(undefined4 *)((int)register0x00000054 + -0x34) = *(undefined4 *)PTR_DAT_00658e80;
      FUN_0009bf4c();
      bVar4 = *(undefined **)((int)register0x00000054 + -0x30) == PTR_DAT_00658e84;
      if (bVar4) {
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)((int)register0x00000054 + -0x2c);
        *(undefined **)((int)register0x00000054 + -0x34) = PTR_SUB_00658e78;
        FUN_0001eed8();
        puVar1 = *(undefined4 **)((int)register0x00000054 + -0x30);
        *(undefined4 **)((int)register0x00000054 + -4) = puVar1;
        puVar1[1] = 7;
        *puVar1 = PTR_s_successsetInforefreshgetInfoheat_00774847_0x171_00658e88;
        *(undefined **)((int)register0x00000054 + -0x34) = PTR_SUB_00658e78;
        FUN_0001eed8();
        puVar1 = *(undefined4 **)((int)register0x00000054 + -0x30);
        uVar2 = *(undefined4 *)((int)register0x00000054 + 0x10);
        puVar1[1] = *(undefined4 *)((int)register0x00000054 + 0x14);
        if (*(int *)PTR_DAT_00658e8c != 0) {
          puVar1 = (undefined4 *)FUN_00098678();
          *unaff_r8 = extraout_r2;
          uVar2 = extraout_r2;
        }
        *(undefined4 **)((int)register0x00000054 + -8) = puVar1;
        *puVar1 = uVar2;
        *(undefined **)((int)register0x00000054 + -0x34) = PTR_SUB_00658e78;
        FUN_0001eed8();
        puVar1 = *(undefined4 **)((int)register0x00000054 + -0x30);
        uVar2 = *(undefined4 *)((int)register0x00000054 + 8);
        puVar1[1] = *(undefined4 *)((int)register0x00000054 + 0xc);
        if (*(int *)PTR_DAT_00658e8c != 0) {
          puVar1 = (undefined4 *)FUN_00098678();
          *unaff_r8 = extraout_r2_00;
          uVar2 = extraout_r2_00;
        }
        *(undefined4 **)((int)register0x00000054 + -0xc) = puVar1;
        *puVar1 = uVar2;
        *(undefined **)((int)register0x00000054 + -0x34) = PTR_SUB_00658e78;
        FUN_0001eed8();
        puVar1 = *(undefined4 **)((int)register0x00000054 + -0x30);
        uVar2 = *(undefined4 *)((int)register0x00000054 + 0x28);
        puVar1[1] = *(undefined4 *)((int)register0x00000054 + 0x2c);
        if (*(int *)PTR_DAT_00658e8c != 0) {
          puVar1 = (undefined4 *)FUN_00098678();
          *unaff_r8 = extraout_r2_01;
          uVar2 = extraout_r2_01;
        }
        *puVar1 = uVar2;
        *(undefined1 **)((int)register0x00000054 + -0x34) =
             (undefined1 *)((int)register0x00000054 + -0x18);
        *(undefined4 *)((int)register0x00000054 + -0x30) =
             *(undefined4 *)((int)register0x00000054 + -4);
        *(undefined4 *)((int)register0x00000054 + -0x2c) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -0x28) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        *(undefined4 **)((int)register0x00000054 + -0x24) = puVar1;
        printerApi_service_k3c_wrapper___K3cwrapper__PublishWifiSetStatus();
        *(undefined **)((int)register0x00000054 + -0x14) = PTR_SUB_00658e78;
        *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_00658e90;
        *(undefined1 **)((int)register0x00000054 + -0x34) =
             (undefined1 *)((int)register0x00000054 + -0x14);
        *(undefined4 *)((int)register0x00000054 + -0x30) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x2c) = 1;
        printerApi_common_logger_Debug();
        *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_00658e94;
        FUN_0005e168();
LAB_00658e3c:
        *(undefined4 *)((int)register0x00000054 + 0x30) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x34) = 0;
                    /* WARNING: Could not recover jumptable at 0x00658e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x38))();
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x34) =
           *(undefined **)((int)register0x00000054 + -0x30);
      *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_00658e84;
      *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_00658e98;
      param_1 = FUN_0001cb94();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x38);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x658e70;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/network.(*NetworkController).BleReStart.func2.1 @ 00658e9c (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_network___NetworkController__BleReStart_func2_1(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x658edc;
    FUN_00096bb8();
  }
  FUN_000953d0();
  printerApi_service_ble_wifi___blewifi__Stop();
                    /* WARNING: Could not recover jumptable at 0x00658ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/network.(*NetworkController).connectCloud-fm @ 00658eec (size 100) */

void printerApi_controller_network___NetworkController__connectCloud_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 auStack_c [3];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)auStack_c;
  }
  auStack_c[0] = *(undefined4 *)(unaff_r7 + 4);
  printerApi_controller_network___NetworkController__connectCloud();
  return;
}



