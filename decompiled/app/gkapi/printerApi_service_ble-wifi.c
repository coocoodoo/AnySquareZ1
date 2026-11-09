// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/service/ble-wifi   functions: 24
/* printerApi/service/ble-wifi.init @ 004f23d0 (size 1064) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_ble_wifi_init(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined *extraout_r1;
  undefined *extraout_r1_00;
  undefined *extraout_r1_01;
  undefined *puVar3;
  uint uVar4;
  uint extraout_r2;
  uint *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar5;
  undefined *puStack_78;
  undefined *puStack_74;
  undefined *puStack_70;
  undefined4 uStack_6c;
  undefined4 *puStack_68;
  int iStack_64;
  int iStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  int iStack_4c;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  int iStack_38;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  int iStack_24;
  uint uStack_1c;
  undefined *puStack_18;
  undefined1 auStack_14 [20];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4f27f4;
    FUN_00096bb8();
  }
  github_com_google_uuid_NewString();
  *_UNK_004f27fc = puStack_74;
  if (*_UNK_004f2800 != 0) {
    FUN_00098688();
    *unaff_r8 = (uint)extraout_r1;
    unaff_r8[1] = *_UNK_004f2804;
    puStack_78 = extraout_r1;
  }
  *_UNK_004f2804 = (uint)puStack_78;
  uVar1 = FUN_0010cf30();
  uVar1 = FUN_00098e14(uVar1,&puStack_78,auStack_14);
  FUN_00098e14(uVar1,auStack_14,&uStack_30);
  if ((uStack_2c & 0x80000000) != 0) {
    uVar4 = (uStack_30 & 0x7fffffff) >> 0x1e | (uStack_30 >> 0x1f | uStack_2c << 1) << 1;
    uStack_28 = uVar4 + _UNK_004f2808;
    iStack_24 = ((uStack_2c & 0x7fffffff) >> 0x1e) + 0xd + (uint)CARRY4(uVar4,_UNK_004f2808);
  }
  uStack_5c = (uint)((ulonglong)uStack_28 * 1000);
  iStack_60 = iStack_24 * 1000 + (int)((ulonglong)uStack_28 * 1000 >> 0x20);
  puStack_78 = (undefined *)(uStack_30 & 0x3fffffff);
  puStack_74 = (undefined *)0x0;
  puStack_70 = (undefined *)_UNK_004f280c;
  uStack_6c = 0;
  FUN_00086d18();
  bVar5 = CARRY4(uStack_5c + (int)puStack_68,_UNK_004f2810);
  *_UNK_004f2814 = uStack_5c + (int)puStack_68 + _UNK_004f2810;
  *(uint *)PTR_DAT_004f281c =
       iStack_60 + iStack_64 + (uint)CARRY4(uStack_5c,(uint)puStack_68) + _UNK_004f2818 +
       (uint)bVar5;
  FUN_0008b6b8();
  puStack_18 = puStack_78;
  github_com_google_uuid_NewString();
  FUN_0008a578();
  uStack_1c = (uint)puStack_70;
  puStack_78 = PTR_DAT_004f2820;
  puStack_74 = puStack_18;
  puStack_70 = PTR_s_config_id_payload_accessKeydevic_0077568d_0x759_004f2824;
  uStack_6c = 9;
  FUN_0008e7bc();
  *puStack_68 = PTR_SUB_004f2828;
  puVar2 = puStack_68;
  if (*_UNK_004f2800 != 0) {
    puVar2 = (undefined4 *)FUN_000986a8();
    *unaff_r8 = uStack_1c;
    unaff_r8[1] = puVar2[1];
    unaff_r8[2] = (uint)puStack_18;
    unaff_r8[3] = *(uint *)PTR_DAT_004f282c;
  }
  puVar2[1] = uStack_1c;
  *(undefined **)PTR_DAT_004f282c = puStack_18;
  github_com_google_uuid_NewString();
  *(undefined **)PTR_DAT_004f2830 = puStack_74;
  puVar3 = puStack_78;
  if (*_UNK_004f2800 != 0) {
    FUN_00098688();
    *unaff_r8 = (uint)extraout_r1_00;
    unaff_r8[1] = *(uint *)PTR_DAT_004f2834;
    puVar3 = extraout_r1_00;
  }
  *(undefined **)PTR_DAT_004f2834 = puVar3;
  uVar1 = FUN_0010cf30();
  uVar1 = FUN_00098e14(uVar1,&puStack_78,auStack_14);
  FUN_00098e14(uVar1,auStack_14,&uStack_44);
  if ((uStack_40 & 0x80000000) != 0) {
    uVar4 = (uStack_44 & 0x7fffffff) >> 0x1e | (uStack_44 >> 0x1f | uStack_40 << 1) << 1;
    uStack_3c = uVar4 + _UNK_004f2808;
    iStack_38 = ((uStack_40 & 0x7fffffff) >> 0x1e) + 0xd + (uint)CARRY4(uVar4,_UNK_004f2808);
  }
  uStack_5c = (uint)((ulonglong)uStack_3c * 1000);
  iStack_60 = iStack_38 * 1000 + (int)((ulonglong)uStack_3c * 1000 >> 0x20);
  puStack_78 = (undefined *)(uStack_44 & 0x3fffffff);
  puStack_74 = (undefined *)0x0;
  puStack_70 = (undefined *)_UNK_004f280c;
  uStack_6c = 0;
  FUN_00086d18();
  bVar5 = CARRY4(uStack_5c + (int)puStack_68,_UNK_004f2810);
  *(uint *)PTR_DAT_004f2838 = uStack_5c + (int)puStack_68 + _UNK_004f2810;
  *(uint *)PTR_DAT_004f283c =
       iStack_60 + iStack_64 + (uint)CARRY4(uStack_5c,(uint)puStack_68) + _UNK_004f2818 +
       (uint)bVar5;
  github_com_google_uuid_NewString();
  *(undefined **)PTR_DAT_004f2840 = puStack_74;
  puVar3 = puStack_78;
  if (*_UNK_004f2800 != 0) {
    FUN_00098688();
    *unaff_r8 = (uint)extraout_r1_01;
    unaff_r8[1] = *(uint *)PTR_DAT_004f2844;
    puVar3 = extraout_r1_01;
  }
  *(undefined **)PTR_DAT_004f2844 = puVar3;
  uVar1 = FUN_0010cf30();
  uVar1 = FUN_00098e14(uVar1,&puStack_78,auStack_14);
  FUN_00098e14(uVar1,auStack_14,&uStack_58);
  if ((uStack_54 & 0x80000000) != 0) {
    uVar4 = (uStack_58 & 0x7fffffff) >> 0x1e | (uStack_58 >> 0x1f | uStack_54 << 1) << 1;
    uStack_50 = uVar4 + _UNK_004f2808;
    iStack_4c = ((uStack_54 & 0x7fffffff) >> 0x1e) + 0xd + (uint)CARRY4(uVar4,_UNK_004f2808);
  }
  uStack_5c = (uint)((ulonglong)uStack_50 * 1000);
  iStack_60 = iStack_4c * 1000 + (int)((ulonglong)uStack_50 * 1000 >> 0x20);
  puStack_78 = (undefined *)(uStack_58 & 0x3fffffff);
  puStack_74 = (undefined *)0x0;
  puStack_70 = (undefined *)_UNK_004f280c;
  uStack_6c = 0;
  FUN_00086d18();
  bVar5 = CARRY4(uStack_5c + (int)puStack_68,_UNK_004f2810);
  *(uint *)PTR_DAT_004f2848 = uStack_5c + (int)puStack_68 + _UNK_004f2810;
  *(uint *)PTR_DAT_004f284c =
       iStack_60 + iStack_64 + (uint)CARRY4(uStack_5c,(uint)puStack_68) + _UNK_004f2818 +
       (uint)bVar5;
  uVar1 = *(undefined4 *)PTR_DAT_004f2854;
  uVar4 = *(uint *)PTR_DAT_004f2858;
  *(undefined4 *)PTR_DAT_004f285c = *(undefined4 *)PTR_DAT_004f2850;
  *(undefined4 *)PTR_DAT_004f2860 = uVar1;
  if (*_UNK_004f2800 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r2;
    unaff_r8[1] = *(uint *)PTR_DAT_004f2864;
    uVar4 = extraout_r2;
  }
  *(uint *)PTR_DAT_004f2864 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x004f27e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/ble-wifi.init.0 @ 004f2868 (size 92) */

void printerApi_service_ble_wifi_init_0(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4f28c0;
    FUN_00096bb8();
  }
  FUN_0001cd7c();
  printerApi_service_event___Dispatcher__RegisterEvent();
                    /* WARNING: Could not recover jumptable at 0x004f28b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/ble-wifi.(*blewifi).Start @ 004f28e0 (size 1380) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_ble_wifi___blewifi__Start(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int extraout_r1;
  int *extraout_r1_00;
  int *extraout_r1_01;
  int iVar4;
  int extraout_r2;
  int *extraout_r2_00;
  int extraout_r2_01;
  int extraout_r2_02;
  int extraout_r2_03;
  undefined4 extraout_r3;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar5;
  int *in_stack_00000004;
  undefined4 *in_stack_00000008;
  int *in_stack_0000000c;
  int *piStack_fc;
  int iStack_f8;
  int iStack_f4;
  undefined4 uStack_f0;
  int iStack_b4;
  undefined4 uStack_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  int aiStack_a0 [6];
  undefined1 auStack_88 [48];
  undefined *puStack_58;
  undefined4 uStack_54;
  undefined *puStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined *puStack_40;
  int *piStack_3c;
  int iStack_38;
  undefined4 *puStack_34;
  undefined *puStack_8;
  undefined *puStack_4;
  
  while (auStack_88 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x4f2e40;
    FUN_00096bb8();
  }
  piVar3 = in_stack_00000004;
  if ((char)in_stack_00000004[0x12] != '\0') {
    puStack_8 = PTR_SUB_004f2e48;
    puStack_4 = PTR_DAT_004f2e4c;
    piStack_fc = (int *)0x1;
    printerApi_common_logger_Debug();
    *(undefined1 *)(in_stack_00000004 + 0x12) = 0;
    (**(code **)in_stack_00000004[3])();
    FUN_00098a08(0,&iStack_38,*(undefined4 *)(*in_stack_00000004 + 0x48));
    piStack_fc = &iStack_38;
    FUN_0008c560();
    while (iStack_38 != 0) {
      uStack_b0 = *puStack_34;
      puStack_8 = PTR_SUB_004f2e48;
      puStack_4 = PTR_DAT_004f2e84;
      piStack_fc = (int *)0x1;
      printerApi_common_logger_Debug();
      github_com_muka_go_bluetooth_api_service___App__RemoveService();
      FUN_0008c7c4();
    }
    github_com_muka_go_bluetooth_api_service___App__Close();
    iVar4 = *(int *)in_stack_00000004[5];
    *(undefined4 *)(iVar4 + 4) = 0;
    *(undefined4 *)(iVar4 + 0xc) = 0;
    *(undefined1 *)(iVar4 + 0x10) = 0;
    in_stack_00000004[6] = 0;
    in_stack_00000004[8] = 0;
    in_stack_00000004[9] = 0;
    if (*(int *)PTR_DAT_004f2e54 != 0) {
      uVar5 = FUN_00098678(in_stack_00000004,in_stack_00000004[7]);
      piVar3 = (int *)uVar5;
      *unaff_r8 = (int)((ulonglong)uVar5 >> 0x20);
    }
    piVar3[7] = 0;
  }
  piStack_fc = in_stack_0000000c;
  printerApi_service_ble_wifi___blewifi__createService();
  iVar4 = iStack_f8;
  if (*(int *)PTR_DAT_004f2e54 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r2;
    unaff_r8[1] = *in_stack_00000004;
    iStack_f4 = extraout_r1;
    iVar4 = extraout_r2;
    uStack_f0 = extraout_r3;
  }
  *in_stack_00000004 = iVar4;
  if (iStack_f4 != 0) {
    iStack_b4 = iStack_f4;
    uStack_a4 = uStack_f0;
    FUN_00161944();
    FUN_00098a28(0,&iStack_48,in_stack_00000008,piVar3);
    if (iStack_b4 == 0) {
      iStack_48 = 0;
    }
    else {
      iStack_48 = *(int *)(iStack_b4 + 4);
    }
    uStack_44 = uStack_a4;
    piStack_fc = extraout_r2_00;
    FUN_00093e34();
    FUN_0008a578();
    puStack_40 = PTR_SUB_004f2e48;
    piStack_3c = piStack_fc;
    piStack_fc = &iStack_48;
    iStack_f8 = 2;
    iStack_f4 = 2;
    printerApi_common_logger_Errorf();
                    /* WARNING: Could not recover jumptable at 0x004f2a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  iStack_a8 = in_stack_00000004[1];
  FUN_0001eed8();
  *in_stack_00000008 = PTR_printerApi_service_ble_wifi___blewifi__onChar1Read_fm_004f2e60;
  puVar1 = in_stack_00000008;
  if (*(int *)PTR_DAT_004f2e54 != 0) {
    puVar1 = (undefined4 *)FUN_00098678();
    *unaff_r8 = (int)in_stack_00000004;
  }
  puVar1[1] = in_stack_00000004;
  piVar3 = in_stack_00000004;
  iVar4 = iStack_a8;
  if (*(int *)PTR_DAT_004f2e54 != 0) {
    uVar5 = FUN_00098688();
    piVar3 = (int *)((ulonglong)uVar5 >> 0x20);
    puVar1 = (undefined4 *)uVar5;
    *unaff_r8 = (int)puVar1;
    unaff_r8[1] = *(int *)(extraout_r2_01 + 0x24);
    iVar4 = extraout_r2_01;
  }
  *(undefined4 **)(iVar4 + 0x24) = puVar1;
  iStack_ac = piVar3[1];
  FUN_0001eed8();
  *in_stack_00000008 = PTR_printerApi_service_ble_wifi___blewifi__onChar1Write_fm_004f2e64;
  puVar1 = in_stack_00000008;
  if (*(int *)PTR_DAT_004f2e54 != 0) {
    puVar1 = (undefined4 *)FUN_00098678();
    *unaff_r8 = (int)in_stack_00000004;
  }
  puVar1[1] = in_stack_00000004;
  iVar4 = iStack_ac;
  if (*(int *)PTR_DAT_004f2e54 != 0) {
    puVar1 = (undefined4 *)FUN_00098688();
    *unaff_r8 = (int)puVar1;
    unaff_r8[1] = *(int *)(extraout_r2_02 + 0x28);
    iVar4 = extraout_r2_02;
  }
  *(undefined4 **)(iVar4 + 0x28) = puVar1;
  github_com_muka_go_bluetooth_api_service___App__Run();
  if (in_stack_00000008 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004f2d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  github_com_muka_go_bluetooth_api_service___App__Advertise();
  piVar3 = piStack_fc;
  if (*(int *)PTR_DAT_004f2e54 != 0) {
    FUN_00098688();
    *unaff_r8 = (int)extraout_r1_00;
    unaff_r8[1] = in_stack_00000004[3];
    piVar3 = extraout_r1_00;
    iStack_f8 = extraout_r2_03;
  }
  in_stack_00000004[3] = (int)piVar3;
  if (iStack_f8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004f2d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(undefined1 *)(in_stack_00000004 + 0x12) = 1;
  FUN_00017058();
  piVar3 = piStack_fc;
  if (*(int *)PTR_DAT_004f2e54 != 0) {
    FUN_00098688();
    *unaff_r8 = (int)extraout_r1_01;
    unaff_r8[1] = in_stack_00000004[4];
    piVar3 = extraout_r1_01;
  }
  in_stack_00000004[4] = (int)piVar3;
  uStack_54 = 4;
  puStack_58 = PTR_s_hci0noopsignwarnINFOWARNGET_IMAG_0077367d_0x28b_004f2e6c;
  uStack_4c = 6;
  puStack_50 = PTR_DAT_004f2e70;
  github_com_muka_go_bluetooth_hw_linux_btmgmt___BtMgmt__SetPairable(in_stack_00000004);
  uVar2 = printerApi_service_ble_wifi_queryWifiLists();
  FUN_00098dac(uVar2,&piStack_fc,aiStack_a0);
  uVar2 = 0;
  if (*(int *)PTR_DAT_004f2e54 != 0) {
    piStack_fc = aiStack_a0;
    uVar2 = FUN_00022914();
  }
  FUN_00098dac(uVar2,aiStack_a0,PTR_DAT_004f2e7c);
  if (*(int *)PTR_DAT_004f2e54 != 0) {
    FUN_00098688();
    *unaff_r8 = (int)in_stack_00000004;
    unaff_r8[1] = *(int *)PTR_DAT_004f2e80;
  }
  *(int **)PTR_DAT_004f2e80 = in_stack_00000004;
                    /* WARNING: Could not recover jumptable at 0x004f2d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/service/ble-wifi.(*blewifi).Stop @ 004f2e88 (size 508) */

void printerApi_service_ble_wifi___blewifi__Stop(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined8 uVar3;
  int *in_stack_00000004;
  char local_54;
  int local_38 [12];
  undefined *local_8;
  undefined *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_00018ad8();
  if (local_54 == '\0') {
    local_8 = PTR_SUB_004f3088;
    local_4 = PTR_DAT_004f308c;
    printerApi_common_logger_Debug();
    FUN_00017cc4();
    *(undefined1 *)(in_stack_00000004 + 0x12) = 0;
    (**(code **)in_stack_00000004[3])();
    FUN_00098a08(0,local_38,*(undefined4 *)(*in_stack_00000004 + 0x48));
    FUN_0008c560();
    while (local_38[0] != 0) {
      local_8 = PTR_SUB_004f3088;
      local_4 = PTR_DAT_004f3098;
      printerApi_common_logger_Debug();
      github_com_muka_go_bluetooth_api_service___App__RemoveService();
      FUN_0008c7c4();
    }
    github_com_muka_go_bluetooth_api_service___App__Close();
    iVar2 = *(int *)in_stack_00000004[5];
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined1 *)(iVar2 + 0x10) = 0;
    in_stack_00000004[6] = 0;
    in_stack_00000004[8] = 0;
    in_stack_00000004[9] = 0;
    piVar1 = in_stack_00000004;
    if (*(int *)PTR_DAT_004f309c != 0) {
      uVar3 = FUN_00098678(in_stack_00000004,in_stack_00000004[7]);
      piVar1 = (int *)uVar3;
      *unaff_r8 = (int)((ulonglong)uVar3 >> 0x20);
    }
    piVar1[7] = 0;
    github_com_muka_go_bluetooth_hw_linux_btmgmt___BtMgmt__SetPowered();
  }
  else {
    local_8 = PTR_SUB_004f3088;
    local_4 = PTR_DAT_004f3094;
    printerApi_common_logger_Debug();
  }
  return;
}



/* printerApi/service/ble-wifi.(*blewifi).onChar1Read @ 004f30a8 (size 252) */

/* WARNING: Removing unreachable block (ram,0x004f312c) */

void printerApi_service_ble_wifi___blewifi__onChar1Read(void)

{
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  printerApi_common_logger_Debug();
  if (*(int *)(in_stack_00000004 + 0x18) < *(int *)(in_stack_00000004 + 0x20)) {
    printerApi_service_ble_wifi___blewifi__chunkSend();
    return;
  }
  printerApi_service_ble_wifi___blewifi__buildMessage();
  return;
}



/* printerApi/service/ble-wifi.(*blewifi).buildMessage @ 004f31b0 (size 1232) */

void printerApi_service_ble_wifi___blewifi__buildMessage(void)

{
  undefined4 uVar1;
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r3;
  int extraout_r3_00;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  bool bVar2;
  int in_stack_00000004;
  int iVar3;
  int local_b4;
  int *local_b0;
  undefined4 local_ac;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined1 auStack_70 [8];
  undefined4 local_68;
  int local_5c;
  int local_58;
  int local_54;
  int local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c [2];
  undefined4 local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  while (local_3c <= *(int **)(unaff_r10 + 8)) {
    unaff_lr = 0x4f367c;
    FUN_00096bb8();
  }
  uVar1 = *(undefined4 *)(in_stack_00000004 + 0x14);
  printerApi_service_ble_wifi___MessageBuff__Pick();
  local_74 = local_b4;
  local_80 = local_b0;
  uVar1 = FUN_00098a18(0,auStack_70,local_ac,local_b0,unaff_lr,uVar1);
  FUN_00098a18(uVar1,&local_24);
  uVar1 = *(undefined4 *)(in_stack_00000004 + 0x28);
  printerApi_service_ble_wifi_codec___DeEncoder__Decode();
  local_78 = local_88;
  uVar1 = FUN_00098dfc(local_88,&local_a8,&local_24,local_84,unaff_lr,uVar1);
  FUN_00098dfc(uVar1,&local_24,auStack_70);
  bVar2 = local_78 == 0;
  if (!bVar2) {
    FUN_00098a20(0,local_3c,local_78);
    local_3c[0] = extraout_r2;
    if (!bVar2) {
      local_3c[0] = *(int *)(extraout_r2 + 4);
    }
    FUN_0001cec0();
    local_34 = DAT_004f3684;
    local_30 = local_b4;
    local_b4 = local_74;
    local_b0 = (int *)local_80;
    FUN_00093e34();
    local_b4 = local_a8;
    FUN_0008a578();
    local_2c = DAT_004f3688;
    local_28 = local_b0;
    local_b4 = 0x26;
    local_b0 = local_3c;
    local_ac = 3;
    local_a8 = 3;
    printerApi_common_logger_Debugf();
    return;
  }
  printerApi_service_ble_wifi___MessageBuff__Get();
  FUN_0001eed8();
  local_a8 = local_b4;
  local_4 = local_b4;
  local_b4 = local_58;
  local_b0 = (int *)local_54;
  local_ac = DAT_004f3694;
  iVar3 = local_5c;
  FUN_0016a168();
  bVar2 = local_a4 == 0;
  if (!bVar2) {
    local_7c = local_a4;
    FUN_00098a28(0,&local_4c,local_a0,local_a4,unaff_lr,iVar3);
    local_4c = extraout_r3;
    if (!bVar2) {
      local_4c = *(int *)(extraout_r3 + 4);
    }
    local_b4 = local_5c;
    local_b0 = (int *)local_58;
    FUN_00093e34();
    local_b4 = local_a8;
    FUN_0008a578();
    local_44 = DAT_004f3688;
    local_40 = (int)local_b0;
    local_b4 = 0x31;
    local_b0 = &local_4c;
    local_ac = 2;
    local_a8 = 2;
    printerApi_common_logger_Debugf();
    return;
  }
  if (*(int *)(local_4 + 0xc) == 7) {
    local_b4 = DAT_004f36a0;
    local_b0 = (int *)0x7;
    FUN_000150d4();
    if ((char)local_ac != '\0') {
      if (*(undefined4 **)(in_stack_00000004 + 0x30) == (undefined4 *)0x0) {
        return;
      }
      (*(code *)**(undefined4 **)(in_stack_00000004 + 0x30))();
      if (local_b0 != (int *)0x0) {
        return;
      }
LAB_004f3510:
      iVar3 = local_b4;
      FUN_00098a18(0,&local_24);
      local_20 = 1;
      local_24 = 4;
      local_1c = local_68;
      local_18 = iVar3;
      local_10 = extraout_r3_00;
      if (extraout_r3_00 == 0) {
        local_10 = DAT_004f36a4;
      }
      local_c = iVar3;
      local_8 = iVar3;
      FUN_00098dfc(in_stack_00000004,&local_24,&local_b4,*(undefined4 *)(in_stack_00000004 + 0x28),
                   unaff_lr,*(undefined4 *)(in_stack_00000004 + 0x28));
      printerApi_service_ble_wifi_codec___DeEncoder__Encode();
      *(undefined4 *)(in_stack_00000004 + 0x20) = local_90;
      *(undefined4 *)(in_stack_00000004 + 0x24) = local_8c;
      if (*DAT_004f36a8 != 0) {
        FUN_00098688();
        *unaff_r8 = local_94;
        unaff_r8[1] = *(undefined4 *)(in_stack_00000004 + 0x1c);
      }
      *(undefined4 *)(in_stack_00000004 + 0x1c) = local_94;
      if (local_88 == 0) {
        *(undefined4 *)(in_stack_00000004 + 0x18) = 0;
        return;
      }
      return;
    }
  }
  else if (*(int *)(local_4 + 0xc) == 0xb) {
    local_b4 = DAT_004f369c;
    local_b0 = (int *)0xb;
    FUN_000150d4();
    if ((char)local_ac != '\0') {
      if (*(undefined4 **)(in_stack_00000004 + 0x2c) == (undefined4 *)0x0) {
        return;
      }
      (*(code *)**(undefined4 **)(in_stack_00000004 + 0x2c))();
      if (local_b0 != (int *)0x0) {
        return;
      }
      goto LAB_004f3510;
    }
  }
  FUN_00098a28(0,&local_4c,local_4);
  local_4c = DAT_004f3688;
  local_48 = DAT_004f36ac;
  local_b4 = *(int *)(extraout_r2_00 + 0xc);
  FUN_0008a578();
  local_44 = DAT_004f3688;
  local_40 = (int)local_b0;
  local_b4 = 2;
  local_b0 = (int *)0x2;
  printerApi_common_logger_Debug();
  return;
}



/* printerApi/service/ble-wifi.(*blewifi).chunkSend @ 004f36b0 (size 664) */

void printerApi_service_ble_wifi___blewifi__chunkSend(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 extraout_r3;
  uint extraout_r3_00;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  undefined1 uVar8;
  undefined8 uVar9;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0x6c);
      *(undefined4 *)((int)register0x00000054 + -0x6c) = unaff_lr;
      iVar1 = *(int *)((int)register0x00000054 + 4);
      iVar2 = *(int *)(iVar1 + 0x18);
      iVar4 = *(int *)(iVar1 + 0x20);
      if (iVar2 + 0x14 <= *(int *)(iVar1 + 0x20)) {
        iVar4 = iVar2 + 0x14;
      }
      *(int *)((int)register0x00000054 + -0x54) = iVar2;
      *(int *)((int)register0x00000054 + -0x4c) = iVar4;
      *(int *)(iVar1 + 0x18) = iVar4;
      *(undefined4 *)((int)register0x00000054 + -0x68) = DAT_004f394c;
      iVar4 = iVar4 - iVar2;
      *(int *)((int)register0x00000054 + -0x50) = iVar4;
      *(int *)((int)register0x00000054 + -100) = iVar4;
      *(int *)((int)register0x00000054 + -0x60) = iVar4;
      FUN_000933e8();
      iVar4 = *(int *)((int)register0x00000054 + 4);
      uVar5 = *(uint *)(iVar4 + 0x24);
      uVar3 = *(uint *)((int)register0x00000054 + -0x4c);
      uVar8 = uVar3 == uVar5;
      if (uVar3 <= uVar5) {
        uVar6 = *(uint *)((int)register0x00000054 + -0x54);
        uVar8 = uVar3 == uVar6;
        if (uVar6 <= uVar3) {
          iVar1 = *(int *)((int)register0x00000054 + -0x5c);
          *(int *)((int)register0x00000054 + -0xc) = iVar1;
          iVar2 = *(int *)(iVar4 + 0x1c) + (uVar6 & (int)-(uVar5 - uVar6) >> 0x1f);
          if (iVar1 != iVar2) {
            *(int *)((int)register0x00000054 + -0x68) = iVar1;
            *(int *)((int)register0x00000054 + -100) = iVar2;
            *(undefined4 *)((int)register0x00000054 + -0x60) =
                 *(undefined4 *)((int)register0x00000054 + -0x50);
            FUN_00098ec8();
            iVar4 = *(int *)((int)register0x00000054 + 4);
            uVar3 = *(uint *)((int)register0x00000054 + -0x4c);
          }
          uVar5 = *(uint *)(iVar4 + 0x24);
          uVar8 = uVar3 == uVar5;
          if (uVar3 <= uVar5) {
            *(uint *)((int)register0x00000054 + -0x44) = uVar5;
            *(undefined4 *)((int)register0x00000054 + -0x10) = *(undefined4 *)(iVar4 + 0x1c);
            *(undefined4 *)((int)register0x00000054 + -0x48) = *(undefined4 *)(iVar4 + 0x20);
            FUN_00098a08(0,(undefined1 *)((int)register0x00000054 + -0x40));
            *(undefined4 *)((int)register0x00000054 + -0x68) = extraout_r3;
            FUN_0001cec0();
            *(undefined4 *)((int)register0x00000054 + -0x40) = DAT_004f3950;
            *(undefined4 *)((int)register0x00000054 + -0x3c) =
                 *(undefined4 *)((int)register0x00000054 + -100);
            *(undefined4 *)((int)register0x00000054 + -0x68) =
                 *(undefined4 *)((int)register0x00000054 + -0x4c);
            FUN_0001cec0();
            *(undefined4 *)((int)register0x00000054 + -0x38) = DAT_004f3950;
            *(undefined4 *)((int)register0x00000054 + -0x34) =
                 *(undefined4 *)((int)register0x00000054 + -100);
            *(undefined4 *)((int)register0x00000054 + -0x68) =
                 *(undefined4 *)((int)register0x00000054 + -0x48);
            FUN_0001cec0();
            *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_004f3950;
            *(undefined4 *)((int)register0x00000054 + -0x2c) =
                 *(undefined4 *)((int)register0x00000054 + -100);
            *(undefined4 *)((int)register0x00000054 + -0x68) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x18);
            FUN_0001cec0();
            *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_004f3950;
            *(undefined4 *)((int)register0x00000054 + -0x24) =
                 *(undefined4 *)((int)register0x00000054 + -100);
            *(undefined4 *)((int)register0x00000054 + -0x68) =
                 *(undefined4 *)((int)register0x00000054 + -0x50);
            FUN_0001cec0();
            *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_004f3950;
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -100);
            iVar4 = *(int *)((int)register0x00000054 + -0x44) -
                    *(uint *)((int)register0x00000054 + -0x54);
            *(uint *)((int)register0x00000054 + -0x68) =
                 *(int *)((int)register0x00000054 + -0x10) +
                 (*(uint *)((int)register0x00000054 + -0x54) & -iVar4 >> 0x1f);
            *(undefined4 *)((int)register0x00000054 + -100) =
                 *(undefined4 *)((int)register0x00000054 + -0x50);
            *(int *)((int)register0x00000054 + -0x60) = iVar4;
            FUN_0008a61c();
            *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_004f3954;
            *(undefined4 *)((int)register0x00000054 + -0x14) =
                 *(undefined4 *)((int)register0x00000054 + -0x5c);
            *(undefined4 *)((int)register0x00000054 + -0x68) = DAT_004f3958;
            *(undefined4 *)((int)register0x00000054 + -100) = 0x3d;
            *(undefined1 **)((int)register0x00000054 + -0x60) =
                 (undefined1 *)((int)register0x00000054 + -0x40);
            *(undefined4 *)((int)register0x00000054 + -0x5c) = 6;
            *(undefined4 *)((int)register0x00000054 + -0x58) = 6;
            printerApi_common_logger_Debugf();
            if (*(int *)(*(int *)((int)register0x00000054 + 4) + 0x18) ==
                *(int *)(*(int *)((int)register0x00000054 + 4) + 0x20)) {
              *(undefined4 *)((int)register0x00000054 + -8) = DAT_004f395c;
              *(undefined4 *)((int)register0x00000054 + -4) = DAT_004f3960;
              *(undefined1 **)((int)register0x00000054 + -0x68) =
                   (undefined1 *)((int)register0x00000054 + -8);
              *(undefined4 *)((int)register0x00000054 + -100) = 1;
              *(undefined4 *)((int)register0x00000054 + -0x60) = 1;
              printerApi_common_logger_Debug();
              iVar4 = *(int *)((int)register0x00000054 + 4);
              *(undefined4 *)(iVar4 + 0x18) = 0;
              *(undefined4 *)(iVar4 + 0x20) = 0;
              *(undefined4 *)(iVar4 + 0x24) = 0;
              if (*DAT_004f3964 != 0) {
                uVar9 = FUN_00098678(*(undefined4 *)(iVar4 + 0x1c));
                iVar4 = (int)((ulonglong)uVar9 >> 0x20);
                *unaff_r8 = (int)uVar9;
              }
              *(undefined4 *)(iVar4 + 0x1c) = 0;
            }
            *(undefined4 *)((int)register0x00000054 + 8) =
                 *(undefined4 *)((int)register0x00000054 + -0xc);
            *(undefined4 *)((int)register0x00000054 + 0xc) =
                 *(undefined4 *)((int)register0x00000054 + -0x50);
            *(undefined4 *)((int)register0x00000054 + 0x10) =
                 *(undefined4 *)((int)register0x00000054 + -0x50);
            *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
            return;
          }
          FUN_00098738();
          uVar6 = extraout_r3_00;
        }
        FUN_00098758(uVar6);
      }
      param_1 = FUN_00098738();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x6c);
      if ((bool)uVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x4f3944;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/service/ble-wifi.(*blewifi).onChar1Write @ 004f3968 (size 412) */

void printerApi_service_ble_wifi___blewifi__onChar1Write(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 *extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 uVar3;
  int *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  int in_stack_00000004;
  undefined4 *in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_7c [32];
  int local_5c;
  int local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  while (auStack_10 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x4f3b00;
    FUN_00096bb8();
  }
  local_28 = DAT_004f3b08;
  local_24 = DAT_004f3b0c;
  printerApi_common_logger_Debug();
  printerApi_service_ble_wifi___MessageBuff__Put();
  uVar1 = *(undefined4 *)(in_stack_00000004 + 0x14);
  printerApi_service_ble_wifi___MessageBuff__Pick();
  FUN_00098a18(0,auStack_48,in_stack_00000014,in_stack_00000010,unaff_lr,uVar1);
  puVar6 = extraout_r3;
  printerApi_service_ble_wifi_codec___DeEncoder__Decode();
  local_54 = local_5c;
  FUN_00098dfc(local_5c,auStack_7c,auStack_48);
  if (local_54 == 0) {
    FUN_00098dfc(0,auStack_48,auStack_20);
    uVar1 = DAT_004f3b10;
    FUN_0001eed8();
    *in_stack_0000000c = DAT_004f3b14;
    puVar4 = in_stack_0000000c;
    if (*DAT_004f3b18 != 0) {
      in_stack_0000000c = (undefined4 *)FUN_00098678();
      *unaff_r8 = in_stack_00000004;
    }
    in_stack_0000000c[1] = in_stack_00000004;
    puVar5 = in_stack_0000000c + 2;
    uVar3 = 0;
    puVar2 = puVar5;
    local_4c = in_stack_0000000c;
    if (*DAT_004f3b18 != 0) {
      puVar6 = auStack_20;
      uVar1 = DAT_004f3b1c;
      local_50 = puVar5;
      FUN_00022914();
      puVar2 = local_50;
      uVar3 = extraout_r3_00;
      puVar4 = puVar5;
    }
    FUN_00098dfc(local_4c,auStack_20,puVar2,uVar3,unaff_lr,uVar1,puVar4,puVar6);
    FUN_0005e168();
  }
  return;
}



/* printerApi/service/ble-wifi.(*blewifi).onChar1Write.gowrap1 @ 004f3b20 (size 96) */

void printerApi_service_ble_wifi___blewifi__onChar1Write_gowrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 uStack_38;
  undefined1 auStack_34 [52];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_38;
  }
  uStack_38 = *(undefined4 *)(unaff_r7 + 4);
  FUN_00098dfc(uStack_38,unaff_r7 + 8,auStack_34);
  printerApi_service_ble_wifi___blewifi__doConfigureNetwork();
  return;
}



/* printerApi/service/ble-wifi.(*blewifi).doConfigureNetwork @ 004f3b80 (size 2036) */

void printerApi_service_ble_wifi___blewifi__doConfigureNetwork(void)

{
  char *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  int extraout_r3;
  int extraout_r3_00;
  int extraout_r3_01;
  int extraout_r3_02;
  code *extraout_r3_03;
  int unaff_r10;
  undefined4 unaff_lr;
  bool bVar4;
  int *in_stack_00000004;
  int *in_stack_00000010;
  int *in_stack_0000001c;
  int *in_stack_00000020;
  undefined4 in_stack_00000024;
  int *local_154;
  int *local_150;
  int *local_14c;
  int *local_148;
  int *local_144;
  int local_140;
  int local_13c;
  int local_138;
  undefined4 local_134;
  int local_120;
  int *local_11c;
  int local_118;
  uint local_114;
  int *local_110;
  int aiStack_10c [4];
  int local_fc;
  int local_f8;
  int *local_f4;
  int *local_f0;
  undefined1 auStack_d8 [4];
  undefined4 local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  int local_c4;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  int local_b0;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  int local_9c;
  int aiStack_94 [4];
  int local_84;
  int local_80;
  int *local_7c;
  int *local_78;
  undefined4 local_5c;
  undefined4 local_58;
  int *local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 auStack_30 [20];
  int local_1c;
  undefined4 local_18;
  int local_14;
  int *local_10;
  int local_c;
  undefined4 local_8;
  int *local_4;
  
  while (auStack_d8 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x4f43ac;
    FUN_00096bb8();
  }
  local_c = DAT_004f4368;
  local_8 = DAT_004f436c;
  local_154 = &local_c;
  local_150 = (int *)0x1;
  local_14c = (int *)0x1;
  printerApi_common_logger_Debug();
  local_154 = DAT_004f4370;
  FUN_0001eed8();
  local_144 = local_150;
  local_4 = local_150;
  local_154 = in_stack_0000001c;
  local_150 = in_stack_00000020;
  local_14c = (int *)in_stack_00000024;
  local_148 = DAT_004f4374;
  FUN_0016a168();
  bVar4 = local_140 == 0;
  if (!bVar4) {
    FUN_00098a28(0,&local_1c,local_13c,local_140,unaff_lr);
    local_1c = extraout_r3;
    if (!bVar4) {
      local_1c = *(int *)(extraout_r3 + 4);
    }
    local_154 = (int *)0x0;
    local_150 = in_stack_0000001c;
    local_14c = in_stack_00000020;
    FUN_00093e34();
    local_154 = local_148;
    local_150 = local_144;
    FUN_0008a578();
    local_14 = DAT_004f4368;
    local_10 = local_14c;
    local_154 = DAT_004f4378;
    local_150 = (int *)0x28;
    local_14c = &local_1c;
    local_148 = (int *)0x2;
    local_144 = (int *)0x2;
    printerApi_common_logger_Debugf();
    return;
  }
  FUN_00098a28(0,&local_1c);
  local_1c = DAT_004f4368;
  local_18 = DAT_004f437c;
  local_154 = (int *)0x0;
  local_150 = in_stack_0000001c;
  local_14c = in_stack_00000020;
  FUN_00093e34();
  local_154 = local_148;
  local_150 = local_144;
  FUN_0008a578();
  local_14 = DAT_004f4368;
  local_10 = local_14c;
  local_154 = &local_1c;
  local_150 = (int *)0x2;
  local_14c = (int *)0x2;
  printerApi_common_logger_Debug();
  if (((((local_4[3] == 6) && (pcVar1 = (char *)local_4[2], *pcVar1 == 'c')) && (pcVar1[1] == 'o'))
      && ((pcVar1[2] == 'n' && (pcVar1[3] == 'f')))) && ((pcVar1[4] == 'i' && (pcVar1[5] == 'g'))))
  {
    local_154 = (int *)in_stack_00000004[5];
    printerApi_service_ble_wifi___MessageBuff__Get();
    github_com_google_uuid_NewString();
    local_54 = local_154;
    local_110 = local_150;
    uVar2 = FUN_0010cf30();
    uVar2 = FUN_00098e14(uVar2,&local_154,auStack_30);
    FUN_00098e14(uVar2,auStack_30,&local_a8);
    if ((local_a4 & 0x80000000) != 0) {
      uVar3 = (local_a8 & 0x7fffffff) >> 0x1e | (local_a8 >> 0x1f | local_a4 << 1) << 1;
      local_a0 = uVar3 + DAT_004f4380;
      local_9c = ((local_a4 & 0x7fffffff) >> 0x1e) + 0xd + (uint)CARRY4(uVar3,DAT_004f4380);
    }
    local_114 = (uint)((ulonglong)local_a0 * 1000);
    local_118 = local_9c * 1000 + (int)((ulonglong)local_a0 * 1000 >> 0x20);
    local_154 = (int *)(local_a8 & 0x3fffffff);
    local_150 = (int *)0x0;
    local_14c = (int *)DAT_004f4384;
    local_148 = (int *)0x0;
    FUN_00086d18();
    local_11c = local_144;
    FUN_00098dc4(local_144,DAT_004f4388,aiStack_94,local_140);
    local_7c = local_54;
    local_78 = local_110;
    local_84 = (int)local_11c + local_114 + DAT_004f438c;
    local_80 = local_118 + extraout_r3_00 + (uint)CARRY4((uint)local_11c,local_114) + DAT_004f4390 +
               (uint)CARRY4((int)local_11c + local_114,DAT_004f438c);
    local_5c = 0;
    local_154 = DAT_004f4394;
    local_150 = aiStack_94;
    FUN_0001cd7c();
    local_148 = local_14c;
    local_154 = in_stack_00000004;
    local_150 = in_stack_00000010;
    local_14c = DAT_004f4394;
    local_144 = (int *)CONCAT31(local_144._1_3_,1);
    printerApi_service_ble_wifi___blewifi__sendAckMessage();
    FUN_000989fc(0,aiStack_10c);
    local_140 = local_4[0x13];
    local_13c = local_4[0x14];
    if (((local_4[0x16] == 4) && (pcVar1 = (char *)local_4[0x15], *pcVar1 == 'N')) &&
       ((pcVar1[1] == 'O' && ((pcVar1[2] == 'N' && (pcVar1[3] == 'E')))))) {
      local_13c = 0;
      local_140 = 0;
    }
    local_150 = (int *)local_4[0xf];
    local_14c = (int *)local_4[0x10];
    local_148 = (int *)local_4[0x11];
    local_144 = (int *)local_4[0x12];
    local_154 = &local_120;
    printerApi_service_wifi___WifiManager__Connect();
    local_120 = local_138;
    if (local_138 == 0) {
      if ((undefined4 *)in_stack_00000004[0xe] != (undefined4 *)0x0) {
        (**(code **)in_stack_00000004[0xe])();
      }
      github_com_google_uuid_NewString();
      local_54 = local_154;
      local_110 = local_150;
      uVar2 = FUN_0010cf30();
      uVar2 = FUN_00098e14(uVar2,&local_154,auStack_30);
      FUN_00098e14(uVar2,auStack_30,&local_bc);
      if ((local_b8 & 0x80000000) != 0) {
        uVar3 = (local_bc & 0x7fffffff) >> 0x1e | (local_bc >> 0x1f | local_b8 << 1) << 1;
        local_b4 = uVar3 + DAT_004f4380;
        local_b0 = ((local_b8 & 0x7fffffff) >> 0x1e) + 0xd + (uint)CARRY4(uVar3,DAT_004f4380);
      }
      local_114 = (uint)((ulonglong)local_b4 * 1000);
      local_118 = local_b0 * 1000 + (int)((ulonglong)local_b4 * 1000 >> 0x20);
      local_154 = (int *)(local_bc & 0x3fffffff);
      local_150 = (int *)0x0;
      local_14c = (int *)DAT_004f4384;
      local_148 = (int *)0x0;
      FUN_00086d18();
      local_11c = local_144;
      FUN_00098dc4(local_144,DAT_004f4398,aiStack_10c,local_140);
      local_fc = local_114 + (int)local_11c + DAT_004f438c;
      local_f8 = local_118 + extraout_r3_01 + (uint)CARRY4(local_114,(uint)local_11c) + DAT_004f4390
                 + (uint)CARRY4(local_114 + (int)local_11c,DAT_004f438c);
    }
    else {
      local_58 = local_134;
      FUN_00098a18(0,&local_50);
      local_154 = (int *)local_4[0xf];
      local_150 = (int *)local_4[0x10];
      FUN_0008a578();
      local_50 = DAT_004f4368;
      local_4c = (int)local_14c;
      local_154 = (int *)local_4[0x11];
      local_150 = (int *)local_4[0x12];
      FUN_0008a578();
      local_48 = DAT_004f4368;
      local_44 = (int)local_14c;
      local_154 = (int *)local_4[0x13];
      local_150 = (int *)local_4[0x14];
      FUN_0008a578();
      local_40 = DAT_004f4368;
      local_3c = (int)local_14c;
      if (local_120 == 0) {
        local_38 = 0;
      }
      else {
        local_38 = *(undefined4 *)(local_120 + 4);
      }
      local_34 = local_58;
      local_154 = DAT_004f439c;
      local_150 = (int *)0x35;
      local_14c = &local_50;
      local_148 = (int *)0x4;
      local_144 = (int *)0x4;
      printerApi_common_logger_Errorf();
      if ((undefined4 *)in_stack_00000004[0xf] != (undefined4 *)0x0) {
        (**(code **)in_stack_00000004[0xf])();
      }
      github_com_google_uuid_NewString();
      local_54 = local_154;
      local_110 = local_150;
      uVar2 = FUN_0010cf30();
      uVar2 = FUN_00098e14(uVar2,&local_154,auStack_30);
      FUN_00098e14(uVar2,auStack_30,&local_d0);
      if ((local_cc & 0x80000000) != 0) {
        uVar3 = (local_d0 & 0x7fffffff) >> 0x1e | (local_d0 >> 0x1f | local_cc << 1) << 1;
        local_c8 = uVar3 + DAT_004f4380;
        local_c4 = ((local_cc & 0x7fffffff) >> 0x1e) + 0xd + (uint)CARRY4(uVar3,DAT_004f4380);
      }
      local_114 = (uint)((ulonglong)local_c8 * 1000);
      local_118 = local_c4 * 1000 + (int)((ulonglong)local_c8 * 1000 >> 0x20);
      local_154 = (int *)(local_d0 & 0x3fffffff);
      local_150 = (int *)0x0;
      local_14c = (int *)DAT_004f4384;
      local_148 = (int *)0x0;
      FUN_00086d18();
      local_11c = local_144;
      FUN_00098dc4(local_144,DAT_004f43a0,aiStack_10c,local_140);
      local_fc = local_114 + (int)local_11c + DAT_004f438c;
      local_f8 = local_118 + extraout_r3_02 + (uint)CARRY4(local_114,(uint)local_11c) + DAT_004f4390
                 + (uint)CARRY4(local_114 + (int)local_11c,DAT_004f438c);
    }
    local_d4 = 0;
    local_154 = DAT_004f4394;
    local_150 = aiStack_10c;
    local_f4 = local_54;
    local_f0 = local_110;
    FUN_0001cd7c();
    local_148 = local_14c;
    local_154 = in_stack_00000004;
    local_150 = in_stack_00000010;
    local_14c = DAT_004f4394;
    local_144 = (int *)((uint)local_144 & 0xffffff00);
    printerApi_service_ble_wifi___blewifi__sendAckMessage();
    if ((undefined4 *)in_stack_00000004[0x10] != (undefined4 *)0x0) {
      local_154 = (int *)CONCAT31(local_154._1_3_,local_120 == 0);
      FUN_00098dec(local_4,local_4 + 0xf,&local_150,*(undefined4 *)in_stack_00000004[0x10]);
      (*extraout_r3_03)();
    }
    return;
  }
  return;
}



/* printerApi/service/ble-wifi.(*blewifi).sendAckMessage @ 004f43b0 (size 680) */

void printerApi_service_ble_wifi___blewifi__sendAckMessage(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_r2;
  uint uVar5;
  int iVar6;
  undefined4 extraout_r3;
  uint uVar7;
  int extraout_r3_00;
  undefined4 extraout_r3_01;
  uint uVar8;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar9;
  undefined4 unaff_lr;
  undefined1 uVar10;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x24)) {
      puVar9 = (undefined1 *)((int)register0x00000054 + -0xa4);
      *(undefined4 *)((int)register0x00000054 + -0xa4) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0xa0) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x9c) =
           *(undefined4 *)((int)register0x00000054 + 0x10);
      FUN_001707f4();
      uVar1 = *(undefined4 *)((int)register0x00000054 + -0x98);
      uVar2 = FUN_00098a18(0,(undefined1 *)((int)register0x00000054 + -0x4c),
                           *(undefined4 *)((int)register0x00000054 + -0x90),
                           *(undefined4 *)((int)register0x00000054 + -0x94));
      *(undefined4 *)((int)register0x00000054 + -0x48) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x4c) = 2;
      *(undefined4 *)((int)register0x00000054 + -0x40) = extraout_r3;
      *(undefined4 *)((int)register0x00000054 + -0x38) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x34) = extraout_r3;
      *(undefined4 *)((int)register0x00000054 + -0x30) = extraout_r2;
      *(undefined4 *)((int)register0x00000054 + -0xa0) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x28);
      FUN_00098dfc(uVar2,(undefined1 *)((int)register0x00000054 + -0x4c),
                   (undefined1 *)((int)register0x00000054 + -0x9c));
      printerApi_service_ble_wifi_codec___DeEncoder__Encode();
      uVar1 = *(undefined4 *)((int)register0x00000054 + -0x7c);
      uVar3 = *(uint *)((int)register0x00000054 + -0x78);
      uVar5 = *(uint *)((int)register0x00000054 + -0x74);
      if (*(char *)((int)register0x00000054 + 0x14) != '\0') {
        iVar6 = *(int *)((int)register0x00000054 + 4);
        *(uint *)(iVar6 + 0x20) = uVar3;
        *(uint *)(iVar6 + 0x24) = uVar5;
        if (*DAT_004f465c != 0) {
          uVar1 = FUN_00098688();
          *unaff_r8 = uVar1;
          unaff_r8[1] = *(undefined4 *)(extraout_r3_00 + 0x1c);
          iVar6 = extraout_r3_00;
        }
        *(undefined4 *)(iVar6 + 0x1c) = uVar1;
        *(undefined4 *)(iVar6 + 0x18) = 0;
        return;
      }
      *(undefined4 *)((int)register0x00000054 + -0x50) = uVar1;
      *(uint *)((int)register0x00000054 + -100) = uVar5;
      *(uint *)((int)register0x00000054 + -0x68) = uVar3;
      uVar7 = 0;
      while( true ) {
        if ((int)uVar3 <= (int)uVar7) {
          return;
        }
        uVar8 = uVar7 + 0x14;
        uVar4 = uVar8;
        if ((int)uVar3 < (int)uVar8) {
          uVar4 = uVar3;
        }
        uVar10 = uVar4 == uVar5;
        if (uVar5 <= uVar4 && !(bool)uVar10) goto LAB_004f4644;
        uVar10 = uVar4 == uVar7;
        if (uVar4 < uVar7) break;
        *(uint *)((int)register0x00000054 + -0x60) = uVar7;
        *(uint *)((int)register0x00000054 + -0x5c) = uVar8;
        *(uint *)((int)register0x00000054 + -0x54) = uVar4;
        FUN_00098a10(0,(undefined1 *)((int)register0x00000054 + -0x28));
        *(undefined4 *)((int)register0x00000054 + -0xa0) = extraout_r3_01;
        FUN_0001cec0();
        *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_004f4660;
        *(undefined4 *)((int)register0x00000054 + -0x24) =
             *(undefined4 *)((int)register0x00000054 + -0x9c);
        *(undefined4 *)((int)register0x00000054 + -0xa0) =
             *(undefined4 *)((int)register0x00000054 + -0x54);
        FUN_0001cec0();
        *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_004f4660;
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + -0x9c);
        *(undefined4 *)((int)register0x00000054 + -0xa0) =
             *(undefined4 *)((int)register0x00000054 + -0x68);
        FUN_0001cec0();
        *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_004f4660;
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x9c);
        iVar6 = *(int *)((int)register0x00000054 + -0x54);
        *(int *)((int)register0x00000054 + -0x54) =
             iVar6 - *(int *)((int)register0x00000054 + -0x60);
        *(int *)((int)register0x00000054 + -0xa0) =
             iVar6 - *(int *)((int)register0x00000054 + -0x60);
        FUN_0001cec0();
        *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_004f4660;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x9c);
        *(undefined4 *)((int)register0x00000054 + -0xa0) = 0;
        iVar6 = *(int *)((int)register0x00000054 + -100) -
                *(uint *)((int)register0x00000054 + -0x60);
        *(int *)((int)register0x00000054 + -0x58) = iVar6;
        iVar6 = *(int *)((int)register0x00000054 + -0x50) +
                (*(uint *)((int)register0x00000054 + -0x60) & -iVar6 >> 0x1f);
        *(int *)((int)register0x00000054 + -0x2c) = iVar6;
        *(int *)((int)register0x00000054 + -0x9c) = iVar6;
        unaff_r8 = *(undefined4 **)((int)register0x00000054 + -0x54);
        *(undefined4 **)((int)register0x00000054 + -0x98) = unaff_r8;
        FUN_00093e34();
        *(undefined4 *)((int)register0x00000054 + -0xa0) =
             *(undefined4 *)((int)register0x00000054 + -0x94);
        *(undefined4 *)((int)register0x00000054 + -0x9c) =
             *(undefined4 *)((int)register0x00000054 + -0x90);
        FUN_0008a578();
        *(undefined4 *)((int)register0x00000054 + -8) = DAT_004f4664;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x98);
        *(undefined4 *)((int)register0x00000054 + -0xa0) = DAT_004f4668;
        *(undefined4 *)((int)register0x00000054 + -0x9c) = 0x3e;
        *(undefined1 **)((int)register0x00000054 + -0x98) =
             (undefined1 *)((int)register0x00000054 + -0x28);
        *(undefined4 *)((int)register0x00000054 + -0x94) = 5;
        *(undefined4 *)((int)register0x00000054 + -0x90) = 5;
        printerApi_common_logger_Debugf();
        *(undefined4 *)((int)register0x00000054 + -0xa0) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
        *(undefined4 *)((int)register0x00000054 + -0x9c) =
             *(undefined4 *)((int)register0x00000054 + -0x2c);
        *(undefined4 *)((int)register0x00000054 + -0x98) =
             *(undefined4 *)((int)register0x00000054 + -0x54);
        *(undefined4 *)((int)register0x00000054 + -0x94) =
             *(undefined4 *)((int)register0x00000054 + -0x58);
        *(undefined4 *)((int)register0x00000054 + -0x90) = 0;
        github_com_muka_go_bluetooth_api_service___Char__WriteValueDirect();
        uVar3 = *(uint *)((int)register0x00000054 + -0x68);
        uVar5 = *(uint *)((int)register0x00000054 + -100);
        uVar7 = *(uint *)((int)register0x00000054 + -0x5c);
        uVar1 = *(undefined4 *)((int)register0x00000054 + -0x50);
      }
      uVar1 = FUN_00098758(uVar7);
LAB_004f4644:
      param_1 = FUN_00098738(uVar1);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xa4);
      if ((bool)uVar10) {
        register0x00000054 = (BADSPACEBASE *)puVar9;
      }
    }
    unaff_lr = 0x4f4654;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/service/ble-wifi.(*blewifi).createService @ 004f466c (size 1100) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_ble_wifi___blewifi__createService(void)

{
  int iVar1;
  undefined **extraout_r1;
  undefined **ppuVar2;
  undefined **extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  int extraout_r2_02;
  int extraout_r3;
  int iVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined **in_stack_00000010;
  int in_stack_00000014;
  undefined **in_stack_00000018;
  undefined **ppuStack_6c;
  undefined **ppuStack_68;
  int iStack_64;
  undefined **ppuStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined **ppuStack_3c;
  undefined *puStack_38;
  undefined4 uStack_34;
  undefined *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined **ppuStack_14;
  undefined *puStack_10;
  undefined4 uStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4f4ab4;
    FUN_00096bb8();
  }
  uStack_c = 4;
  puStack_10 = PTR_s_hci0noopsignwarnINFOWARNGET_IMAG_0077367d_0x28b_004f4abc;
  uStack_4 = 6;
  puStack_8 = PTR_DAT_004f4ac0;
  ppuStack_6c = &puStack_10;
  ppuStack_68 = (undefined **)((uint)ppuStack_68 & 0xffffff00);
  github_com_muka_go_bluetooth_hw_linux_btmgmt___BtMgmt__SetPowered();
  ppuStack_6c = &puStack_10;
  ppuStack_68._0_1_ = 1;
  github_com_muka_go_bluetooth_hw_linux_btmgmt___BtMgmt__SetLe();
  ppuStack_6c = &puStack_10;
  ppuStack_68._0_1_ = 0;
  github_com_muka_go_bluetooth_hw_linux_btmgmt___BtMgmt__SetBredr();
  ppuStack_6c = &puStack_10;
  ppuStack_68 = (undefined **)CONCAT31(ppuStack_68._1_3_,1);
  github_com_muka_go_bluetooth_hw_linux_btmgmt___BtMgmt__SetPowered();
  FUN_00098a14(0,&puStack_38);
  puStack_38 = PTR_s_hci0noopsignwarnINFOWARNGET_IMAG_0077367d_0x28b_004f4abc;
  uStack_34 = 4;
  puStack_30 = PTR_DAT_004f4ac4;
  uStack_2c = 0xf;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  FUN_00098df4(4,&puStack_38,&ppuStack_6c);
  github_com_muka_go_bluetooth_api_service_NewApp();
  if (iStack_44 != 0) {
    in_stack_00000010 = (undefined **)0x0;
    in_stack_00000014 = iStack_44;
    in_stack_00000018 = (undefined **)uStack_40;
                    /* WARNING: Could not recover jumptable at 0x004f4aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  uVar4 = CONCAT44(*(int *)(iStack_48 + 0x4c),iStack_48);
  *(undefined4 *)(*(int *)(iStack_48 + 0x4c) + 0x38) = in_stack_0000000c;
  if (*(int *)PTR_DAT_004f4ac8 != 0) {
    uVar4 = FUN_00098688();
    *unaff_r8 = in_stack_00000008;
    unaff_r8[1] = *(undefined4 *)((int)((ulonglong)uVar4 >> 0x20) + 0x34);
  }
  ppuStack_14 = (undefined **)uVar4;
  *(undefined4 *)((int)((ulonglong)uVar4 >> 0x20) + 0x34) = in_stack_00000008;
  ppuStack_6c = (undefined **)ppuStack_14[0xd];
  if (ppuStack_6c[4][100] == '\0') {
    ppuStack_68 = (undefined **)CONCAT31(ppuStack_68._1_3_,1);
    github_com_muka_go_bluetooth_bluez_profile_adapter___Adapter1__SetPowered();
    in_stack_00000010 = (undefined **)0x0;
    in_stack_00000014 = iStack_64;
    in_stack_00000018 = ppuStack_60;
                    /* WARNING: Could not recover jumptable at 0x004f4a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  ppuStack_68 = (undefined **)PTR_DAT_004f4acc;
  iStack_64 = 0x24;
  ppuStack_6c = ppuStack_14;
  github_com_muka_go_bluetooth_api_service___App__NewServiceWithFullUUID();
  if (iStack_5c != 0) {
    in_stack_00000010 = (undefined **)0x0;
    in_stack_00000014 = iStack_5c;
    in_stack_00000018 = (undefined **)uStack_58;
                    /* WARNING: Could not recover jumptable at 0x004f4a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  ppuStack_3c = ppuStack_60;
  ppuStack_6c = ppuStack_14;
  ppuStack_68 = ppuStack_60;
  github_com_muka_go_bluetooth_api_service___App__AddService();
  if (iStack_64 != 0) {
    in_stack_00000010 = (undefined **)0x0;
    in_stack_00000014 = iStack_64;
    in_stack_00000018 = ppuStack_60;
                    /* WARNING: Could not recover jumptable at 0x004f4a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  ppuStack_6c = ppuStack_3c;
  ppuStack_68 = (undefined **)PTR_DAT_004f4ad0;
  iStack_64 = 0x24;
  github_com_muka_go_bluetooth_api_service___Service__NewCharWithFullUUID();
  iVar1 = in_stack_00000004;
  ppuVar2 = ppuStack_60;
  iVar3 = iStack_5c;
  if (*(int *)PTR_DAT_004f4ac8 != 0) {
    iVar1 = FUN_00098688();
    *unaff_r8 = extraout_r2;
    unaff_r8[1] = *(undefined4 *)(iVar1 + 4);
    ppuVar2 = extraout_r2;
    iVar3 = extraout_r3;
  }
  *(undefined ***)(iVar1 + 4) = ppuVar2;
  if (iVar3 != 0) {
    in_stack_00000010 = (undefined **)0x0;
    in_stack_00000018 = (undefined **)uStack_58;
                    /* WARNING: Could not recover jumptable at 0x004f4a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  ppuStack_6c = (undefined **)PTR_DAT_004f4ad4;
  FUN_0001eed8();
  uVar4 = CONCAT44(in_stack_00000004,ppuStack_68);
  ppuStack_68[1] = (undefined *)0x4;
  *ppuStack_68 = PTR_DAT_004f4ad8;
  ppuStack_68[3] = (undefined *)0x5;
  ppuStack_68[2] = (undefined *)_UNK_004f4adc;
  iVar1 = *(int *)(*(int *)(in_stack_00000004 + 4) + 0x1c);
  *(undefined4 *)(iVar1 + 0x28) = 2;
  *(undefined4 *)(iVar1 + 0x2c) = 2;
  if (*(int *)PTR_DAT_004f4ac8 != 0) {
    uVar4 = FUN_00098688();
    *unaff_r8 = (int)uVar4;
    unaff_r8[1] = *(undefined4 *)(extraout_r2_00 + 0x24);
    iVar1 = extraout_r2_00;
  }
  *(int *)(iVar1 + 0x24) = (int)uVar4;
  ppuStack_68 = *(undefined ***)((int)((ulonglong)uVar4 >> 0x20) + 4);
  ppuStack_6c = ppuStack_3c;
  github_com_muka_go_bluetooth_api_service___Service__AddChar();
  if (iStack_64 != 0) {
    in_stack_00000010 = (undefined **)0x0;
    in_stack_00000014 = iStack_64;
    in_stack_00000018 = ppuStack_60;
                    /* WARNING: Could not recover jumptable at 0x004f4a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  ppuStack_6c = ppuStack_3c;
  ppuStack_68 = (undefined **)_UNK_004f4ae0;
  iStack_64 = 0x24;
  github_com_muka_go_bluetooth_api_service___Service__NewCharWithFullUUID();
  ppuVar2 = ppuStack_60;
  if (*(int *)PTR_DAT_004f4ac8 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r1;
    unaff_r8[1] = *(undefined4 *)(in_stack_00000004 + 8);
    ppuVar2 = extraout_r1;
    iStack_5c = extraout_r2_01;
  }
  *(undefined ***)(in_stack_00000004 + 8) = ppuVar2;
  if (iStack_5c != 0) {
    in_stack_00000010 = (undefined **)0x0;
                    /* WARNING: Could not recover jumptable at 0x004f4a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  ppuStack_6c = _UNK_004f4ae4;
  FUN_0001eed8();
  uVar4 = CONCAT44(in_stack_00000004,ppuStack_68);
  ppuStack_68[1] = (undefined *)0x8;
  *ppuStack_68 = (undefined *)_UNK_004f4ae8;
  iVar1 = *(int *)(*(int *)(in_stack_00000004 + 8) + 0x1c);
  *(undefined4 *)(iVar1 + 0x28) = 1;
  *(undefined4 *)(iVar1 + 0x2c) = 1;
  if (*(int *)PTR_DAT_004f4ac8 != 0) {
    uVar4 = FUN_00098688();
    *unaff_r8 = (int)uVar4;
    unaff_r8[1] = *(undefined4 *)(extraout_r2_02 + 0x24);
    iVar1 = extraout_r2_02;
  }
  *(int *)(iVar1 + 0x24) = (int)uVar4;
  ppuStack_68 = *(undefined ***)((int)((ulonglong)uVar4 >> 0x20) + 8);
  ppuStack_6c = ppuStack_3c;
  github_com_muka_go_bluetooth_api_service___Service__AddChar();
  if (iStack_64 != 0) {
    in_stack_00000010 = (undefined **)0x0;
    in_stack_00000014 = iStack_64;
    in_stack_00000018 = ppuStack_60;
                    /* WARNING: Could not recover jumptable at 0x004f49d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  in_stack_00000010 = ppuStack_14;
  in_stack_00000014 = 0;
  in_stack_00000018 = (undefined **)0x0;
                    /* WARNING: Could not recover jumptable at 0x004f49f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/ble-wifi.defaultGetConfigIDHandler @ 004f4aec (size 808) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_ble_wifi_defaultGetConfigIDHandler(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint extraout_r2;
  int iVar4;
  int extraout_r3;
  int iVar5;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  bool bVar6;
  undefined1 *puStack_d8;
  undefined1 *puStack_d4;
  undefined4 *puStack_d0;
  undefined4 uStack_cc;
  undefined4 *puStack_c8;
  undefined4 *puStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined1 auStack_b8 [32];
  int iStack_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 *puStack_8c;
  int iStack_88;
  uint uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  int iStack_70;
  undefined1 *puStack_68;
  undefined1 auStack_64 [8];
  undefined1 auStack_5c [8];
  int iStack_54;
  int iStack_50;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 auStack_1c [20];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (auStack_5c <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x4f4e10;
    FUN_00096bb8();
  }
  github_com_google_uuid_NewString();
  puStack_d0 = (undefined4 *)puStack_d4;
  puStack_68 = puStack_d8;
  uStack_94 = puStack_d4;
  puStack_d4 = puStack_d8;
  puStack_d8 = auStack_b8;
  FUN_00071920();
  puStack_d8 = _UNK_004f4e18;
  puStack_d4 = (undefined1 *)0x12;
  puStack_d0 = (undefined4 *)uStack_cc;
  uStack_cc = puStack_c8;
  puStack_c8 = puStack_c4;
  puStack_c4 = (undefined4 *)0x1ed;
  FUN_00126134();
  if (iStack_c0 == 0) {
    puStack_d8 = (undefined1 *)0x24;
    puStack_d4 = (undefined1 *)0x0;
    puStack_d0 = (undefined4 *)0x0;
    uStack_cc = 0;
    FUN_000f65f0();
    github_com_google_uuid_NewString();
    puStack_20 = puStack_d8;
    uStack_80 = puStack_d4;
    uVar1 = FUN_0010cf30();
    uVar1 = FUN_00098e14(uVar1,&puStack_d8,auStack_1c);
    FUN_00098e14(uVar1,auStack_1c,&uStack_7c);
    if ((uStack_78 & 0x80000000) != 0) {
      uVar3 = (uStack_7c & 0x7fffffff) >> 0x1e | (uStack_7c >> 0x1f | uStack_78 << 1) << 1;
      uStack_74 = uVar3 + _UNK_004f4e20;
      iStack_70 = ((uStack_78 & 0x7fffffff) >> 0x1e) + 0xd + (uint)CARRY4(uVar3,_UNK_004f4e20);
    }
    uStack_84 = (uint)((ulonglong)uStack_74 * 1000);
    iStack_88 = iStack_70 * 1000 + (int)((ulonglong)uStack_74 * 1000 >> 0x20);
    puStack_d8 = (undefined1 *)(uStack_7c & 0x3fffffff);
    puStack_d4 = (undefined1 *)0x0;
    puStack_d0 = (undefined4 *)_UNK_004f4e24;
    uStack_cc = 0;
    FUN_00086d18();
    puStack_8c = puStack_c8;
    iStack_90 = (int)puStack_c4;
    FUN_0008b6b8();
    puStack_24 = puStack_d8;
    puStack_d8 = puStack_68;
    puStack_d4 = (undefined1 *)uStack_94;
    FUN_0008a578();
    uStack_28 = puStack_d0;
    puStack_d8 = PTR_DAT_004f4e28;
    puStack_d4 = puStack_24;
    puStack_d0 = (undefined4 *)PTR_s_config_id_payload_accessKeydevic_0077568d_0x759_004f4e2c;
    uStack_cc = 9;
    FUN_0008e7bc();
    *puStack_c8 = PTR_SUB_004f4e30;
    iVar4 = iStack_88 + iStack_90 + (uint)CARRY4(uStack_84,(uint)puStack_8c);
    iVar5 = uStack_84 + (int)puStack_8c + _UNK_004f4e38;
    if (*(int *)PTR_DAT_004f4e34 == 0) {
      bVar6 = CARRY4(uStack_84 + (int)puStack_8c,_UNK_004f4e38);
      puVar2 = puStack_c8;
    }
    else {
      puVar2 = (undefined4 *)FUN_00098688();
      *unaff_r8 = uStack_28;
      unaff_r8[1] = puVar2[1];
      bVar6 = CARRY4(extraout_r2,_UNK_004f4e38);
      iVar4 = extraout_r3;
    }
    puVar2[1] = uStack_28;
    iStack_98 = iVar4 + _UNK_004f4e3c + (uint)bVar6;
    FUN_00098dc4(iStack_98,_UNK_004f4e40,auStack_64);
    puStack_4c = puStack_20;
    uStack_48 = uStack_80;
    iStack_50 = iStack_98;
    puStack_2c = puStack_24;
    puStack_d8 = _UNK_004f4e44;
    puStack_d4 = auStack_64;
    iStack_54 = iVar5;
    FUN_0001cd7c();
    puStack_d8 = _UNK_004f4e44;
    puStack_d4 = (undefined1 *)puStack_d0;
    FUN_001707f4();
    puStack_d8 = (undefined1 *)0x0;
    puStack_d4 = (undefined1 *)puStack_d0;
    puStack_d0 = (undefined4 *)uStack_cc;
    FUN_00093e34();
                    /* WARNING: Could not recover jumptable at 0x004f4e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack_8 = *(undefined4 *)(iStack_c0 + 4);
  uStack_4 = uStack_bc;
  puStack_d8 = _UNK_004f4e1c;
  puStack_d4 = (undefined1 *)0x1e;
  puStack_d0 = &uStack_8;
  uStack_cc = 1;
  puStack_c8 = (undefined4 *)0x1;
  FUN_00130144();
                    /* WARNING: Could not recover jumptable at 0x004f4bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/service/ble-wifi.defaultGetListHandler @ 004f4e48 (size 268) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_ble_wifi_defaultGetListHandler(void)

{
  undefined4 uVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *puStack_90;
  undefined1 *puStack_8c;
  undefined1 auStack_48 [44];
  undefined1 auStack_1c [28];
  
  while( true ) {
    if (*(undefined1 **)(unaff_r10 + 8) < auStack_1c) break;
    UNRECOVERED_JUMPTABLE = (code *)0x4f4f50;
    FUN_00096bb8();
  }
  uVar1 = FUN_000989f0(0,auStack_48);
  if (*_UNK_004f4f58 == 0) {
    uVar1 = printerApi_service_ble_wifi_queryWifiLists();
    FUN_00098dac(uVar1,&puStack_90,auStack_48);
    uVar1 = 0;
    if (*_UNK_004f4f64 != 0) {
      puStack_90 = auStack_48;
      uVar1 = FUN_00022914();
    }
    FUN_00098dac(uVar1,auStack_48,_UNK_004f4f5c);
  }
  else {
    FUN_00098dac(uVar1,_UNK_004f4f5c,auStack_48);
  }
  FUN_0001cd7c();
  FUN_001707f4();
  puStack_90 = puStack_8c;
  FUN_00093e34();
                    /* WARNING: Could not recover jumptable at 0x004f4f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/ble-wifi.queryWifiLists @ 004f4f6c (size 800) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_ble_wifi_queryWifiLists(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int extraout_r2;
  undefined4 **ppuVar4;
  uint extraout_r3;
  undefined4 **ppuVar5;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 **in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 **ppuStack_fc;
  uint *puStack_f8;
  uint *puStack_f4;
  int iStack_f0;
  uint *puStack_ec;
  uint *puStack_e8;
  uint *puStack_e4;
  uint *puStack_e0;
  uint *puStack_d8;
  int iStack_d4;
  uint uStack_d0;
  uint *puStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  int iStack_b4;
  undefined4 **ppuStack_b0;
  uint *puStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint *puStack_8c;
  uint *puStack_88;
  uint *puStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  int iStack_74;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint *puStack_5c;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint *puStack_38;
  int iStack_34;
  undefined4 **ppuStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&uStack_80 <= *(uint **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4f5288;
    FUN_00096bb8();
  }
  uVar1 = FUN_000989f0(0,&stack0x0000000c);
  ppuStack_fc = &puStack_d8;
  puStack_f8 = (uint *)in_stack_00000004;
  puStack_f4 = (uint *)in_stack_00000008;
  printerApi_service_wifi___WifiManager__WifiLists(uVar1);
  iStack_6c = iStack_f0;
  puStack_d8 = puStack_ec;
  github_com_google_uuid_NewString();
  ppuStack_30 = ppuStack_fc;
  puStack_cc = puStack_f8;
  uVar1 = FUN_0010cf30();
  uVar1 = FUN_00098e14(uVar1,&ppuStack_fc,&uStack_c8);
  FUN_00098e14(uVar1,&uStack_c8,&uStack_80);
  if ((uStack_7c & 0x80000000) != 0) {
    uVar2 = (uStack_80 & 0x7fffffff) >> 0x1e | (uStack_80 >> 0x1f | uStack_7c << 1) << 1;
    uStack_78 = uVar2 + _UNK_004f5290;
    iStack_74 = ((uStack_7c & 0x7fffffff) >> 0x1e) + 0xd + (uint)CARRY4(uVar2,_UNK_004f5290);
  }
  uStack_d0 = (uint)((ulonglong)uStack_78 * 1000);
  iStack_d4 = iStack_74 * 1000 + (int)((ulonglong)uStack_78 * 1000 >> 0x20);
  ppuStack_fc = (undefined4 **)(uStack_80 & 0x3fffffff);
  puStack_f8 = (uint *)0x0;
  puStack_f4 = (uint *)_UNK_004f5294;
  iStack_f0 = 0;
  FUN_00086d18();
  uVar1 = FUN_000989f0(0,&uStack_c8,puStack_e8,puStack_ec);
  uStack_c8 = _UNK_004f5298;
  uStack_c4 = 7;
  uStack_c0 = _UNK_004f529c;
  uStack_bc = 7;
  ppuStack_b0 = ppuStack_30;
  puStack_ac = puStack_cc;
  uStack_a8 = _UNK_004f52a0;
  uStack_a4 = 4;
  iStack_b8 = uStack_d0 + extraout_r3 + _UNK_004f52a4;
  iStack_b4 = iStack_d4 + extraout_r2 + (uint)CARRY4(uStack_d0,extraout_r3) + _UNK_004f52a8 +
              (uint)CARRY4(uStack_d0 + extraout_r3,_UNK_004f52a4);
  uStack_a0 = 200;
  uStack_98 = 0;
  uStack_94 = 0;
  puStack_8c = (uint *)_UNK_004f52ac;
  puStack_88 = (uint *)0x0;
  puStack_84 = (uint *)0x0;
  iVar3 = iStack_6c;
  ppuVar5 = (undefined4 **)puStack_d8;
  uStack_9c = uVar1;
  while (0 < (int)ppuVar5) {
    puStack_cc = (uint *)ppuVar5;
    iStack_34 = iVar3;
    FUN_00098ddc(uVar1,iVar3,&uStack_68);
    puStack_f8 = (uint *)((int)puStack_5c >> 0x1f);
    ppuStack_fc = (undefined4 **)puStack_5c;
    puStack_f4 = (uint *)&DAT_0000000a;
    FUN_000af250();
    uVar1 = FUN_00098a0c(0,&uStack_2c,iStack_f0,puStack_ec);
    uStack_2c = uStack_50;
    uStack_28 = uStack_4c;
    uStack_24 = uStack_68;
    uStack_20 = uStack_64;
    uStack_14 = uStack_60;
    uStack_10 = uStack_48;
    uStack_c = uStack_44;
    uStack_8 = uStack_40;
    uStack_4 = uStack_3c;
    ppuVar5 = (undefined4 **)((int)puStack_88 + 1);
    if (puStack_84 < ppuVar5) {
      ppuStack_fc = (undefined4 **)puStack_8c;
      puStack_f4 = puStack_84;
      iStack_f0 = 1;
      puStack_ec = (uint *)_UNK_004f52b0;
      puStack_f8 = (uint *)ppuVar5;
      FUN_00093524();
      puStack_84 = puStack_e0;
      puStack_8c = puStack_e8;
      uVar1 = 0;
      ppuVar5 = (undefined4 **)puStack_e4;
    }
    ppuVar4 = (undefined4 **)(puStack_8c + (int)ppuVar5 * 0xb + -0xb);
    puStack_88 = (uint *)ppuVar5;
    if (*_UNK_004f52b4 != 0) {
      ppuStack_fc = _UNK_004f52b0;
      puStack_f4 = &uStack_2c;
      puStack_f8 = (uint *)ppuVar4;
      puStack_38 = (uint *)ppuVar4;
      FUN_00022914();
      uVar1 = 0;
      ppuVar4 = (undefined4 **)puStack_38;
    }
    FUN_00098de4(uVar1,&uStack_2c,ppuVar4);
    iVar3 = iStack_34 + 0x30;
    uVar1 = 0;
    ppuVar5 = (undefined4 **)((int)puStack_cc - 1);
  }
  FUN_00098dac(uVar1,&uStack_c8,&stack0x0000000c);
                    /* WARNING: Could not recover jumptable at 0x004f527c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/ble-wifi.(*MessageBuff).Put @ 004f52b8 (size 164) */

void printerApi_service_ble_wifi___MessageBuff__Put(void)

{
  int iVar1;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 local_c;
  int local_8;
  undefined4 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  local_4 = (undefined4 *)0x0;
  iVar1 = in_stack_00000004 + 4;
  FUN_000b5240();
  local_c = DAT_004f5368;
  local_4 = &local_c;
  local_8 = iVar1;
  FUN_0014ea28();
  (*(code *)*local_4)();
  return;
}



/* printerApi/service/ble-wifi.(*MessageBuff).Put.deferwrap1 @ 004f536c (size 84) */

void printerApi_service_ble_wifi___MessageBuff__Put_deferwrap1(void)

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
  FUN_000b536c();
  return;
}



/* printerApi/service/ble-wifi.(*MessageBuff).Pick @ 004f53c0 (size 228) */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void printerApi_service_ble_wifi___MessageBuff__Pick(void)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int unaff_r10;
  int *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  code *local_10;
  int *local_c;
  int *local_8;
  code **local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  local_4 = (code **)0x0;
  in_stack_00000008 = 0;
  in_stack_0000000c = 0;
  in_stack_00000010 = 0;
  local_8 = in_stack_00000004 + 1;
  FUN_000b5240();
  local_10 = DAT_004f54a8;
  local_c = local_8;
  local_4 = &local_10;
  piVar1 = (int *)*in_stack_00000004;
  uVar3 = piVar1[3];
  if (uVar3 <= (uint)piVar1[1]) {
    in_stack_00000010 = piVar1[2] - uVar3;
    in_stack_0000000c = piVar1[1] - uVar3;
    in_stack_00000008 = *piVar1 + (uVar3 & -in_stack_00000010 >> 0x1f);
    (*DAT_004f54a8)();
    return;
  }
  uVar2 = FUN_00098758(uVar3);
  FUN_0004fb3c(uVar2);
  return;
}



/* printerApi/service/ble-wifi.(*MessageBuff).Pick.deferwrap1 @ 004f54ac (size 84) */

void printerApi_service_ble_wifi___MessageBuff__Pick_deferwrap1(void)

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
  FUN_000b536c();
  return;
}



/* printerApi/service/ble-wifi.(*MessageBuff).Get @ 004f5500 (size 348) */

void printerApi_service_ble_wifi___MessageBuff__Get(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int unaff_r10;
  undefined4 unaff_lr;
  int *in_stack_00000004;
  undefined4 in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int *piVar6;
  undefined4 local_c;
  int *local_8;
  undefined4 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x4f5658;
    FUN_00096bb8();
  }
  local_4 = (undefined4 *)0x0;
  in_stack_00000008 = 0;
  in_stack_0000000c = 0;
  in_stack_00000010 = 0;
  piVar5 = in_stack_00000004 + 1;
  piVar6 = piVar5;
  FUN_000b5240();
  local_c = DAT_004f5660;
  local_4 = &local_c;
  uVar3 = *(uint *)(*in_stack_00000004 + 4);
  uVar4 = *(uint *)(*in_stack_00000004 + 0xc);
  local_8 = piVar5;
  if (uVar4 <= uVar3) {
    FUN_0008a8b0();
    FUN_00098ec8();
    iVar1 = *in_stack_00000004;
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined1 *)(iVar1 + 0x10) = 0;
    in_stack_0000000c = uVar3 - uVar4;
    in_stack_00000010 = uVar3 - uVar4;
    (*(code *)*local_4)();
    return;
  }
  uVar2 = FUN_00098758(uVar4,uVar3,uVar3,uVar4,unaff_lr,piVar6);
  FUN_0004fb3c(uVar2);
  return;
}



/* printerApi/service/ble-wifi.(*MessageBuff).Get.deferwrap1 @ 004f5664 (size 84) */

void printerApi_service_ble_wifi___MessageBuff__Get_deferwrap1(void)

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
  FUN_000b536c();
  return;
}



/* printerApi/service/ble-wifi.init.0.func1 @ 004f56b8 (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_ble_wifi_init_0_func1(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4f56f8;
    FUN_00096bb8();
  }
  if (*_UNK_004f5700 != 0) {
    printerApi_service_ble_wifi___blewifi__Stop();
  }
  in_stack_0000000c = 0;
                    /* WARNING: Could not recover jumptable at 0x004f56ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/ble-wifi.(*blewifi).onChar1Read-fm @ 004f5704 (size 140) */

void printerApi_service_ble_wifi___blewifi__onChar1Read_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_20;
  }
  uStack_20 = *(undefined4 *)(unaff_r7 + 4);
  uStack_1c = in_stack_00000004;
  uStack_18 = in_stack_00000008;
  printerApi_service_ble_wifi___blewifi__onChar1Read();
  return;
}



/* printerApi/service/ble-wifi.(*blewifi).onChar1Write-fm @ 004f5790 (size 156) */

void printerApi_service_ble_wifi___blewifi__onChar1Write_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_28;
  }
  uStack_28 = *(undefined4 *)(unaff_r7 + 4);
  uStack_24 = in_stack_00000004;
  uStack_20 = in_stack_00000008;
  uStack_1c = in_stack_0000000c;
  uStack_18 = in_stack_00000010;
  printerApi_service_ble_wifi___blewifi__onChar1Write();
  return;
}



