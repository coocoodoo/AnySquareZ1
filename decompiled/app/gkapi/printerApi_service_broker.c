// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/service/broker   functions: 11
/* printerApi/service/broker.init @ 00582e6c (size 76) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_broker_init(void)

{
  undefined4 uVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x582eb4;
    FUN_00096bb8();
  }
  if (*_UNK_00582ebc != 0) {
    uVar1 = FUN_00098678(*_UNK_00582ec0);
    *unaff_r8 = uVar1;
  }
  *_UNK_00582ec0 = _UNK_00582ec4;
                    /* WARNING: Could not recover jumptable at 0x00582ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/broker.(*AccountManagement).CreateDeviceAccount @ 00582ec8 (size 600) */

void printerApi_service_broker___AccountManagement__CreateDeviceAccount(void)

{
  undefined *puVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar2;
  undefined4 extraout_r1_01;
  undefined *extraout_r2;
  undefined *extraout_r2_00;
  undefined *puVar3;
  undefined *extraout_r2_01;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 local_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  
  while (uVar2 = in_stack_00000004, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  printerApi_service_broker___AccountManagement__GenerateClientCert();
  if (local_34 != 0) {
    return;
  }
  printerApi_common_config_GetDeviceUnionid();
  printerApi_common_utils_str_RandomStringWithCharset();
  puVar1 = PTR_DAT_00583124;
  printerApi_common_utils_str_RandomStringWithCharset();
  FUN_0001eed8();
  *(undefined4 *)(puVar1 + 0xc) = local_4c;
  if (*(int *)PTR_DAT_0058312c != 0) {
    puVar1 = (undefined *)FUN_00098678();
    *unaff_r8 = uVar2;
  }
  *(undefined4 *)(puVar1 + 8) = uVar2;
  FUN_000715a4();
  *(undefined4 *)(puVar1 + 0x14) = local_38;
  puVar3 = puVar1;
  if (*(int *)PTR_DAT_0058312c != 0) {
    FUN_000986a8();
    *unaff_r8 = extraout_r1;
    unaff_r8[1] = *(undefined4 *)(extraout_r2 + 0x10);
    unaff_r8[2] = local_44;
    unaff_r8[3] = *(undefined4 *)(extraout_r2 + 0x18);
    local_3c = extraout_r1;
    puVar3 = extraout_r2;
  }
  *(undefined4 *)(puVar3 + 0x10) = local_3c;
  *(undefined4 *)(puVar3 + 0x1c) = local_40;
  *(undefined4 *)(puVar3 + 0x18) = local_44;
  FUN_00093e34();
  *(undefined4 *)(puVar1 + 0x24) = local_40;
  uVar2 = local_44;
  puVar3 = puVar1;
  if (*(int *)PTR_DAT_0058312c != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r1_00;
    unaff_r8[1] = *(undefined4 *)(extraout_r2_00 + 0x20);
    uVar2 = extraout_r1_00;
    puVar3 = extraout_r2_00;
  }
  *(undefined4 *)(puVar3 + 0x20) = uVar2;
  FUN_00093e34();
  *(undefined4 *)(puVar1 + 0x2c) = local_40;
  if (*(int *)PTR_DAT_0058312c != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r1_01;
    unaff_r8[1] = *(undefined4 *)(extraout_r2_01 + 0x28);
    local_44 = extraout_r1_01;
    puVar1 = extraout_r2_01;
  }
  *(undefined4 *)(puVar1 + 0x28) = local_44;
  return;
}



/* printerApi/service/broker.(*AccountManagement).GetDeviceAccount @ 00583134 (size 400) */

/* WARNING: Removing unreachable block (ram,0x005831f4) */

void printerApi_service_broker___AccountManagement__GetDeviceAccount(void)

{
  char cVar1;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 local_38;
  char local_34;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0001eed8();
  printerApi_common_file_FileExist(local_38);
  if (local_34 == '\0') {
    cVar1 = '\x17';
  }
  else {
    cVar1 = '\b';
  }
  FUN_000715a4();
  printerApi_common_file_FileExist();
  if (cVar1 != '\0') {
    FUN_00125de4();
    FUN_0016a168();
    return;
  }
  printerApi_service_broker___AccountManagement__CreateDeviceAccount();
  FUN_00170a5c();
  printerApi_common_file_WriteFileWithSync();
  return;
}



/* printerApi/service/broker.(*AccountManagement).GenerateClientCert @ 005832e0 (size 1088) */

void printerApi_service_broker___AccountManagement__GenerateClientCert(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 **ppuVar4;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 local_624;
  undefined **local_620;
  undefined4 *local_61c;
  undefined4 *local_618;
  undefined4 *local_614;
  undefined **local_610;
  undefined **local_60c;
  undefined *local_608;
  undefined **local_604;
  undefined4 local_600;
  undefined4 local_5fc;
  undefined4 local_5f8;
  int local_5f4;
  undefined4 local_5f0;
  undefined4 local_5ec;
  undefined4 local_5e8;
  undefined4 *local_5e4;
  undefined4 *local_5e0;
  undefined4 *local_5dc;
  undefined **local_5d8;
  undefined4 auStack_5d4 [173];
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 *local_318;
  undefined *local_314;
  undefined4 local_310;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined *local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f0;
  undefined4 *apuStack_2e4 [172];
  undefined1 auStack_34 [44];
  undefined4 local_8;
  undefined4 local_4;
  undefined4 *puVar3;
  undefined4 **ppuVar5;
  
  while (&stack0x00000000 + DAT_00583724 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x58371c;
    FUN_00096bb8();
  }
  local_620 = (undefined **)*DAT_00583728;
  local_61c = (undefined4 *)*DAT_0058372c;
  local_618 = (undefined4 *)0x2;
  local_614 = (undefined4 *)0x800;
  local_624 = unaff_lr;
  FUN_00282638();
  if (local_60c != (undefined **)0x0) {
    local_8 = *(undefined4 *)((int)local_60c + 4);
    local_4 = local_608;
    local_620 = DAT_00583730;
    local_61c = (undefined4 *)0x22;
    local_618 = (undefined4 *)((int)&local_624 + DAT_00583734);
    local_614 = (undefined4 *)0x1;
    local_610 = (undefined **)0x1;
    FUN_00130144();
    return;
  }
  local_5d8 = local_610;
  local_620 = DAT_00583738;
  FUN_0001eed8();
  *local_61c = 1;
  local_318 = local_61c;
  local_620 = DAT_0058373c;
  FUN_0001eed8();
  local_61c[2] = 1;
  local_61c[3] = 1;
  local_5dc = local_61c;
  if (*DAT_00583740 != 0) {
    local_5dc = (undefined4 *)FUN_00098678();
    *unaff_r8 = local_318;
  }
  local_5dc[1] = local_318;
  uVar1 = FUN_0010cf30();
  FUN_00098e14(uVar1,&local_620,(int)&local_624 + DAT_00583744);
  uVar1 = FUN_0010cf30();
  uVar1 = FUN_00098e14(uVar1,&local_620,apuStack_2e4);
  FUN_00098e14(uVar1,apuStack_2e4,&local_620);
  local_60c = (undefined **)DAT_00583748;
  local_608 = (undefined *)DAT_0058374c;
  uVar1 = FUN_00102dac();
  FUN_00098e14(uVar1,&local_604,(int)&local_624 + DAT_00583750);
  puVar2 = (undefined4 *)PTR_DAT_00583754;
  ppuVar4 = apuStack_2e4;
  do {
    puVar3 = puVar2 + 1;
    *ppuVar4 = (undefined4 *)*puVar2;
    puVar2 = puVar3;
    ppuVar4 = ppuVar4 + 1;
  } while ((int)puVar3 <= (int)PTR_DAT_00583758);
  apuStack_2e4[0x17] = local_5dc;
  local_620 = (undefined **)PTR_DAT_0058375c;
  FUN_0001eed8();
  local_61c[1] = 8;
  *local_61c = PTR_s_AnyCubicboundaryConflictrollback_00774847_0xb3e_00583760;
  apuStack_2e4[0x3a] = local_61c;
  apuStack_2e4[0x3b] = (undefined4 *)0x1;
  apuStack_2e4[0x3c] = (undefined4 *)0x1;
  uVar1 = FUN_00098e14(1,(int)&local_624 + DAT_00583744,(int)&local_624 + DAT_00583764);
  FUN_00098e14(uVar1,(int)&local_624 + DAT_00583750,(int)&local_624 + DAT_00583768);
  local_620 = (undefined **)PTR_DAT_0058376c;
  FUN_0001eed8();
  *local_61c = 2;
  apuStack_2e4[0x6a] = local_61c;
  apuStack_2e4[0x6b] = (undefined4 *)0x1;
  apuStack_2e4[0x6c] = (undefined4 *)0x1;
  ppuVar4 = apuStack_2e4;
  puVar2 = auStack_5d4;
  do {
    ppuVar5 = ppuVar4 + 1;
    *puVar2 = *ppuVar4;
    ppuVar4 = ppuVar5;
    puVar2 = puVar2 + 1;
  } while ((int)ppuVar5 <= (int)auStack_34);
  local_620 = (undefined **)*DAT_00583728;
  local_61c = (undefined4 *)*DAT_0058372c;
  local_618 = auStack_5d4;
  local_610 = (undefined **)PTR_DAT_00583770;
  local_60c = local_5d8;
  local_608 = PTR_DAT_00583774;
  local_604 = local_5d8;
  local_614 = local_618;
  FUN_002ae78c();
  if (local_5f4 == 0) {
    local_320 = local_600;
    local_5ec = local_5fc;
    local_5e8 = local_5f8;
    local_620 = local_5d8;
    FUN_002a0148();
    puVar2 = local_61c;
    FUN_00098a20(0,&local_2fc,local_614,local_618);
    local_2f8 = 0xf;
    local_2fc = PTR_DAT_0058377c;
    local_2f0 = puVar2;
    local_620 = &local_2fc;
    FUN_00287790();
    local_31c = local_61c;
    local_5e0 = local_618;
    local_5e4 = local_614;
    FUN_00098a20(0,&local_314);
    local_310 = 0xb;
    local_314 = PTR_DAT_00583780;
    local_304 = local_5ec;
    local_300 = local_5e8;
    local_308 = local_320;
    local_620 = &local_314;
    FUN_00287790();
    return;
  }
  local_8 = *(undefined4 *)(local_5f4 + 4);
  local_4 = local_5f0;
  local_620 = (undefined **)PTR_DAT_00583778;
  local_61c = (undefined4 *)0x20;
  local_618 = (undefined4 *)((int)&local_624 + DAT_00583734);
  local_614 = (undefined4 *)0x1;
  local_610 = (undefined **)0x1;
  FUN_00130144();
  return;
}



/* printerApi/service/broker.(*MqttServer).StartMqttBroker @ 00583784 (size 1888) */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void printerApi_service_broker___MqttServer__StartMqttBroker(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 extraout_r1;
  int iVar6;
  int extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 *extraout_r2_01;
  undefined4 *extraout_r2_02;
  undefined4 *extraout_r2_03;
  undefined4 *extraout_r2_04;
  undefined4 *extraout_r2_05;
  undefined *extraout_r2_06;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 *extraout_r3_01;
  undefined4 *extraout_r3_02;
  undefined4 *extraout_r3_03;
  undefined4 *extraout_r3_04;
  undefined4 *puVar7;
  undefined4 extraout_r3_05;
  undefined4 extraout_r3_06;
  undefined4 uVar8;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  bool bVar9;
  undefined8 uVar10;
  int in_stack_00000004;
  undefined4 **ppuVar11;
  undefined4 in_stack_fffffe9c;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined *puVar14;
  undefined4 in_stack_fffffea4;
  undefined *puVar15;
  undefined4 *in_stack_fffffea8;
  int local_154;
  undefined4 *local_150 [15];
  int local_114;
  undefined4 local_110;
  undefined1 local_109;
  undefined4 *local_108;
  undefined4 local_104;
  undefined1 auStack_ec [36];
  int local_c8;
  int local_c4;
  undefined4 *local_c0;
  undefined4 *local_bc;
  undefined4 *local_b8;
  undefined4 *local_b4;
  undefined1 auStack_b0 [60];
  undefined4 *local_74;
  undefined4 *local_70;
  undefined4 *local_6c;
  undefined4 *local_68;
  undefined4 local_64;
  undefined *local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 *local_54;
  undefined4 auStack_50 [2];
  undefined4 *local_48;
  undefined4 local_44;
  undefined4 *local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined *local_14;
  undefined *local_10;
  undefined *local_c;
  undefined4 local_8;
  undefined **local_4;
  
  while (auStack_ec <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x583ee8;
    FUN_00096bb8();
  }
  local_4 = (undefined **)0x0;
  local_109 = 0;
  FUN_000b3994();
  local_60 = PTR_printerApi_service_broker___MqttServer__StartMqttBroker_deferwrap1_00583ef0;
  local_5c = in_stack_00000004;
  local_4 = &local_60;
  local_109 = 1;
  if (*(int *)(in_stack_00000004 + 8) == 0) {
    uVar5 = *(undefined4 *)(in_stack_00000004 + 0xc);
    printerApi_service_broker___AccountManagement__GetDeviceAccount();
    uVar8 = extraout_r3;
    if (*(int *)PTR_DAT_00583ef4 != 0) {
      FUN_00098688();
      *unaff_r8 = extraout_r1;
      uVar8 = *(undefined4 *)(in_stack_00000004 + 0x10);
      unaff_r8[1] = uVar8;
      in_stack_fffffe9c = extraout_r1;
    }
    *(undefined4 *)(in_stack_00000004 + 0x10) = in_stack_fffffe9c;
    FUN_00098a28(0,&local_14,in_stack_00000004,uVar8,unaff_lr,uVar5);
    local_14 = PTR_SUB_00583ef8;
    local_10 = PTR_DAT_00583efc;
    local_8 = *(undefined4 *)(extraout_r2 + 0x10);
    local_c = PTR_DAT_00583f00;
    printerApi_common_logger_Debug();
    FUN_00071920();
    local_c4 = local_154;
    uVar5 = *(undefined4 *)(*(int *)(in_stack_00000004 + 0x10) + 0x28);
    uVar8 = *(undefined4 *)(*(int *)(in_stack_00000004 + 0x10) + 0x2c);
    ppuVar11 = &local_108;
    local_c0 = in_stack_fffffea8;
    local_64 = in_stack_fffffea4;
    FUN_00071920();
    FUN_000989fc(0,auStack_50,in_stack_fffffea4,in_stack_fffffea8,unaff_lr,ppuVar11,uVar5,uVar8);
    uVar8 = extraout_r2_00;
    uVar5 = extraout_r3_00;
    uVar1 = FUN_0030ecec();
    local_c8 = local_114;
    uVar8 = FUN_00098dc4(uVar1,local_150,auStack_50,local_110,unaff_lr,local_64,local_c0,local_c4,
                         uVar8,uVar5);
    FUN_00098dc4(uVar8,auStack_50,auStack_b0);
    puVar12 = local_c0;
    if (local_c8 != 0) {
      local_58 = *(undefined4 *)(local_c8 + 4);
      puVar12 = (undefined4 *)0x1;
      local_54 = extraout_r3_01;
      printerApi_common_logger_Debug();
    }
    FUN_0001eed8();
    local_b8 = puVar12;
    FUN_0001eed8();
    uVar8 = 0;
    local_68 = puVar12;
    if (*(int *)PTR_DAT_00583ef4 != 0) {
      FUN_00098688();
      local_104 = local_b8[3];
      puVar12 = extraout_r2_01;
      local_108 = extraout_r2_01;
      uVar8 = FUN_00022914();
    }
    FUN_00098dc4(uVar8,auStack_b0,local_68);
    local_b8[4] = 1;
    local_b8[5] = 1;
    local_b8[3] = local_68;
    github_com_mochi_mqtt_server_v2_New();
    puVar2 = puVar12;
    if (*(int *)PTR_DAT_00583ef4 != 0) {
      FUN_00098688();
      local_104 = *(undefined4 *)(in_stack_00000004 + 8);
      puVar12 = extraout_r3_02;
      local_108 = extraout_r3_02;
    }
    *(undefined4 **)(in_stack_00000004 + 8) = puVar12;
    FUN_0001eed8();
    local_74 = puVar2;
    FUN_0001eed8();
    puVar12 = *(undefined4 **)(*(int *)(in_stack_00000004 + 0x10) + 0x10);
    puVar2[3] = *(undefined4 *)(*(int *)(in_stack_00000004 + 0x10) + 0x14);
    iVar6 = in_stack_00000004;
    puVar3 = puVar2;
    if (*(int *)PTR_DAT_00583ef4 != 0) {
      uVar10 = FUN_00098678();
      iVar6 = (int)((ulonglong)uVar10 >> 0x20);
      puVar2 = (undefined4 *)uVar10;
      puVar12 = extraout_r2_02;
      local_108 = extraout_r2_02;
    }
    puVar2[2] = puVar12;
    puVar12 = *(undefined4 **)(*(int *)(iVar6 + 0x10) + 0x18);
    puVar2[7] = *(undefined4 *)(*(int *)(iVar6 + 0x10) + 0x1c);
    if (*(int *)PTR_DAT_00583ef4 != 0) {
      puVar2 = (undefined4 *)FUN_00098678();
      puVar12 = extraout_r2_03;
      local_108 = extraout_r2_03;
    }
    puVar2[6] = puVar12;
    *(undefined1 *)(puVar2 + 8) = 1;
    local_74[4] = 1;
    local_74[5] = 1;
    puVar12 = local_74;
    if (*(int *)PTR_DAT_00583ef4 != 0) {
      puVar2 = (undefined4 *)FUN_00098688();
      local_104 = extraout_r3_03[3];
      puVar12 = extraout_r3_03;
      local_108 = puVar2;
    }
    puVar12[3] = puVar2;
    FUN_0001eed8();
    local_6c = puVar3;
    FUN_0001eed8();
    *puVar3 = 0;
    if (*(int *)PTR_DAT_00583ef4 != 0) {
      puVar3 = (undefined4 *)FUN_00098688();
      local_108 = local_74;
      local_104 = puVar3[3];
    }
    puVar3[3] = local_74;
    puVar12 = (undefined4 *)PTR_DAT_00583f20;
    puVar2 = local_6c;
    puVar15 = PTR_DAT_00583f24;
    github_com_mochi_mqtt_server_v2___Server__AddHook();
    if (local_154 != 0) {
      local_58 = *(undefined4 *)(local_154 + 4);
      local_54 = local_150[0];
      puVar12 = (undefined4 *)0x1;
      puVar2 = (undefined4 *)0x1;
      printerApi_common_logger_Debug();
    }
    FUN_00098a1c(0,auStack_50);
    local_48 = (undefined4 *)PTR_DAT_00583f28;
    local_44 = 2;
    local_40 = (undefined4 *)PTR_DAT_00583f2c;
    local_3c = 0xc;
    local_38 = local_b8;
    puVar14 = PTR_DAT_00583f30;
    FUN_0001eed8();
    puVar7 = local_48;
    puVar12[7] = local_44;
    puVar4 = puVar12;
    if (*(int *)PTR_DAT_00583ef4 != 0) {
      FUN_00098678();
      local_108 = puVar7;
      puVar12 = extraout_r2_04;
    }
    puVar12[6] = puVar7;
    puVar12[9] = local_3c;
    puVar7 = local_40;
    if (*(int *)PTR_DAT_00583ef4 != 0) {
      FUN_00098678();
      puVar12 = extraout_r2_05;
      puVar7 = extraout_r3_04;
      local_108 = extraout_r3_04;
    }
    puVar12[8] = puVar7;
    puVar13 = puVar12 + 0xc;
    uVar8 = 0;
    puVar7 = puVar13;
    local_bc = puVar12;
    if (*(int *)PTR_DAT_00583ef4 != 0) {
      puVar2 = auStack_50;
      puVar14 = PTR_DAT_00583f34;
      local_70 = puVar13;
      uVar8 = FUN_00022914();
      puVar7 = local_70;
      puVar4 = puVar13;
    }
    FUN_00098e04(uVar8,auStack_50,puVar7,puVar7,unaff_lr,puVar14,puVar4,puVar2);
    FUN_00098a1c(0,auStack_50);
    local_48 = (undefined4 *)PTR_DAT_00583f38;
    local_44 = 2;
    local_40 = (undefined4 *)PTR_DAT_00583f3c;
    local_3c = 0xe;
    puVar14 = PTR_DAT_00583f30;
    FUN_0001eed8();
    puVar12 = local_48;
    puVar4[7] = local_44;
    puVar7 = puVar4;
    if (*(int *)PTR_DAT_00583ef4 != 0) {
      puVar4 = (undefined4 *)FUN_00098678();
      local_108 = puVar12;
    }
    puVar13 = local_40;
    puVar4[6] = puVar12;
    puVar4[9] = local_3c;
    if (*(int *)PTR_DAT_00583ef4 != 0) {
      puVar4 = (undefined4 *)FUN_00098678();
      local_108 = puVar13;
    }
    puVar4[8] = puVar13;
    puVar13 = puVar4 + 0xc;
    uVar8 = 0;
    puVar12 = puVar13;
    local_b4 = puVar4;
    if (*(int *)PTR_DAT_00583ef4 != 0) {
      puVar2 = auStack_50;
      puVar14 = PTR_DAT_00583f34;
      local_70 = puVar13;
      puVar4 = (undefined4 *)FUN_00022914();
      puVar12 = local_70;
      uVar8 = extraout_r3_05;
      puVar7 = puVar13;
    }
    FUN_00098e04(puVar4,auStack_50,puVar12,uVar8,unaff_lr,puVar14,puVar7,puVar2);
    uVar8 = *(undefined4 *)(in_stack_00000004 + 8);
    puVar14 = PTR_DAT_00583f40;
    puVar12 = local_bc;
    github_com_mochi_mqtt_server_v2___Server__AddListener();
    bVar9 = puVar15 == (undefined *)0x0;
    if (!bVar9) {
      FUN_00098a28(0,&local_14,puVar15,puVar3,unaff_lr,uVar8,puVar14,puVar12);
      local_14 = PTR_SUB_00583ef8;
      local_10 = PTR_DAT_00583f44;
      local_c = extraout_r2_06;
      if (!bVar9) {
        local_c = *(undefined **)(extraout_r2_06 + 4);
      }
      local_8 = extraout_r3_06;
      printerApi_common_logger_Debug();
    }
    puVar14 = PTR_DAT_00583f40;
    puVar12 = local_b4;
    github_com_mochi_mqtt_server_v2___Server__AddListener();
    if (puVar15 != (undefined *)0x0) {
      local_58 = *(undefined4 *)(puVar15 + 4);
      puVar14 = (undefined *)0x1;
      puVar12 = (undefined4 *)0x1;
      local_54 = puVar3;
      printerApi_common_logger_Debug();
    }
    github_com_mochi_mqtt_server_v2___Server__Serve();
    if (puVar14 != (undefined *)0x0) {
      local_58 = *(undefined4 *)(puVar14 + 4);
      local_54 = puVar12;
      printerApi_common_logger_Debug();
    }
    local_109 = 0;
    (*(code *)*local_4)();
    return;
  }
  local_109 = 0;
  (*(code *)PTR_printerApi_service_broker___MqttServer__StartMqttBroker_deferwrap1_00583ef0)();
  return;
}



/* printerApi/service/broker.(*MqttServer).StartMqttBroker.deferwrap1 @ 00583f48 (size 84) */

void printerApi_service_broker___MqttServer__StartMqttBroker_deferwrap1(void)

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



/* printerApi/service/broker.(*MqttServer).StopMqttBroker @ 00583f9c (size 272) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_broker___MqttServer__StopMqttBroker(void)

{
  int iVar1;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  int in_stack_00000004;
  undefined4 *puStack_1c;
  undefined *puStack_c;
  int iStack_8;
  undefined **ppuStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x5840b0;
    FUN_00096bb8();
  }
  ppuStack_4 = (undefined **)0x0;
  FUN_000b3994();
  puStack_c = PTR_printerApi_service_broker___MqttServer__StopMqttBroker_deferwrap1_005840b8;
  iStack_8 = in_stack_00000004;
  ppuStack_4 = &puStack_c;
  iVar1 = *(int *)(in_stack_00000004 + 8);
  if (iVar1 != 0) {
    FUN_0001eed8();
    *puStack_1c = PTR_printerApi_service_broker___MqttServer__StopMqttBroker_gowrap2_005840c0;
    if (*(int *)PTR_DAT_005840c4 != 0) {
      puStack_1c = (undefined4 *)FUN_00098678();
      *unaff_r8 = iVar1;
    }
    puStack_1c[1] = iVar1;
    FUN_0005e168();
    FUN_000953d0();
    iVar1 = in_stack_00000004;
    if (*(int *)PTR_DAT_005840c4 != 0) {
      uVar2 = FUN_00098678(in_stack_00000004,*(undefined4 *)(in_stack_00000004 + 8));
      *unaff_r8 = (int)((ulonglong)uVar2 >> 0x20);
      iVar1 = (int)uVar2;
    }
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  (*(code *)*ppuStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0058409c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/broker.(*MqttServer).StopMqttBroker.gowrap2 @ 005840cc (size 84) */

void printerApi_service_broker___MqttServer__StopMqttBroker_gowrap2(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 auStack_c [3];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)auStack_c;
  }
  auStack_c[0] = *(undefined4 *)(unaff_r7 + 4);
  github_com_mochi_mqtt_server_v2___Server__Close();
  return;
}



/* printerApi/service/broker.(*MqttServer).StopMqttBroker.deferwrap1 @ 00584120 (size 84) */

void printerApi_service_broker___MqttServer__StopMqttBroker_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_4;
  }
  uStack_4 = *(undefined4 *)(unaff_r7 + 4);
  FUN_000b3de4();
  return;
}



/* printerApi/service/broker.(*MqttServer).GetDeviceAccount @ 00584174 (size 120) */

void printerApi_service_broker___MqttServer__GetDeviceAccount(void)

{
  undefined4 extraout_r1;
  undefined4 *unaff_r8;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  if (*(int *)(in_stack_00000004 + 0x10) == 0) {
    printerApi_service_broker___AccountManagement__GetDeviceAccount();
    if (*DAT_005841f0 != 0) {
      FUN_00098688();
      *unaff_r8 = extraout_r1;
      unaff_r8[1] = *(undefined4 *)(in_stack_00000004 + 0x10);
      local_4 = extraout_r1;
    }
    *(undefined4 *)(in_stack_00000004 + 0x10) = local_4;
  }
  return;
}



/* printerApi/service/broker.GetMqttServerInstance @ 005841f4 (size 156) */

void printerApi_service_broker_GetMqttServerInstance(void)

{
  int extraout_r1;
  int *unaff_r8;
  int unaff_r10;
  undefined8 uVar1;
  undefined4 in_stack_00000004;
  int local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  if (*(int *)PTR_DAT_00584294 == 0) {
    FUN_0001eed8();
    if (*(int *)PTR_DAT_0058429c != 0) {
      FUN_00098688();
      *unaff_r8 = extraout_r1;
      unaff_r8[1] = *(int *)PTR_DAT_00584294;
      local_8 = extraout_r1;
    }
    *(int *)PTR_DAT_00584294 = local_8;
    if (*(int *)PTR_DAT_0058429c != 0) {
      uVar1 = FUN_00098678(*(undefined4 *)(local_8 + 0xc));
      local_8 = (int)((ulonglong)uVar1 >> 0x20);
      *unaff_r8 = (int)uVar1;
    }
    *(undefined **)(local_8 + 0xc) = PTR_DAT_005842a0;
  }
  return;
}



