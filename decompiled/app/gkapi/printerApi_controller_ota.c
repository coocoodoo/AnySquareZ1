// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/controller/ota   functions: 33
/* printerApi/controller/ota.init.func1 @ 006590b8 (size 84) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_ota_init_func1(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x659108;
    FUN_00096bb8();
  }
  printerApi_cloud___filamentHubHandler__GetFilamentHubDeviceModelID();
                    /* WARNING: Could not recover jumptable at 0x006590fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/ota.validateFilamentHubUpgradeModel @ 00659114 (size 856) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_ota_validateFilamentHubUpgradeModel(void)

{
  int iVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  int iStack_5c;
  undefined **ppuStack_58;
  undefined4 uStack_48;
  undefined *puStack_30;
  int iStack_2c;
  undefined *puStack_28;
  int iStack_24;
  undefined *puStack_20;
  undefined **ppuStack_1c;
  undefined *puStack_18;
  undefined **ppuStack_14;
  undefined *puStack_10;
  undefined **ppuStack_c;
  undefined *puStack_8;
  int iStack_4;
  
  iVar1 = iStack_5c;
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x659468;
    FUN_00096bb8();
  }
  if (in_stack_0000000c < 0 || in_stack_0000000c == 0 && in_stack_00000008 == 0) {
    puStack_8 = (undefined *)0x0;
    iStack_4 = 0;
    FUN_0008a4bc();
    puStack_8 = PTR_DAT_00659488;
    FUN_00130144();
                    /* WARNING: Could not recover jumptable at 0x0065945c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  (**(code **)*_UNK_00659470)();
  if (ppuStack_58 != (undefined **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006593f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  if (in_stack_0000000c != iStack_5c >> 0x1f || in_stack_00000008 != iStack_5c) {
    if (iStack_5c == 0x9c41) {
      uStack_48 = 2;
    }
    else if (iStack_5c == 0x9c42) {
      uStack_48 = 2;
    }
    else {
      puStack_8 = (undefined *)0x0;
      iStack_4 = 0;
      FUN_0001cec0();
      puStack_8 = PTR_DAT_0065947c;
      iStack_4 = iStack_5c;
      iStack_5c = 0xb;
      ppuStack_58 = &puStack_8;
      FUN_001331ac();
    }
    if ((in_stack_00000008 != 0x9c41) && (in_stack_00000008 != 0x9c42)) {
      puStack_8 = (undefined *)0x0;
      iStack_4 = 0;
      FUN_0001cec0(0,uStack_48,iVar1,in_stack_00000008,UNRECOVERED_JUMPTABLE_00,in_stack_00000008);
      puStack_8 = PTR_DAT_0065947c;
      iStack_4 = iStack_5c;
      iStack_5c = 0xb;
      ppuStack_58 = &puStack_8;
      FUN_001331ac();
    }
    FUN_00098a10(0,&puStack_30);
    FUN_0001cec0();
    puStack_30 = PTR_DAT_0065947c;
    iStack_2c = iStack_5c;
    FUN_0001cec0();
    puStack_28 = PTR_DAT_0065947c;
    iStack_24 = iStack_5c;
    FUN_0008a578();
    puStack_20 = PTR_SUB_00659484;
    ppuStack_1c = ppuStack_58;
    FUN_0008a4bc();
    puStack_18 = PTR_DAT_00659488;
    ppuStack_14 = ppuStack_58;
    FUN_0008a578();
    puStack_10 = PTR_SUB_00659484;
    ppuStack_c = ppuStack_58;
    FUN_00130144();
                    /* WARNING: Could not recover jumptable at 0x006593d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  in_stack_00000010 = 0;
  in_stack_00000014 = 0;
                    /* WARNING: Could not recover jumptable at 0x006593e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/ota.OtaController.UpgradeAmsVersionQuery @ 00659494 (size 756) */

/* WARNING: Removing unreachable block (ram,0x00659514) */

void printerApi_controller_ota_OtaController_UpgradeAmsVersionQuery(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int extraout_r1;
  int extraout_r2;
  int iVar3;
  undefined4 *puVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000014;
  int in_stack_00000018;
  char cVar5;
  undefined4 in_stack_ffffff7c;
  undefined *puVar6;
  int iStack_74;
  int iStack_70;
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
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined *puStack_c;
  undefined *puStack_8;
  undefined *puStack_4;
  
  while (cVar5 = (char)in_stack_ffffff7c, &puStack_8 <= *(undefined ***)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x659784;
    FUN_00096bb8();
  }
  printerApi_common_config_LanPrintIsOpen();
  puVar1 = PTR_DAT_00659794;
  if (cVar5 != '\0') {
    puStack_8 = PTR_SUB_006597b0;
    puStack_4 = PTR_DAT_006597b4;
    puVar4 = (undefined4 *)0x1;
    printerApi_common_logger_Error();
    FUN_0001eed8();
    puVar4[1] = 0x16;
    *puVar4 = PTR_DAT_006597bc;
                    /* WARNING: Could not recover jumptable at 0x00659778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uVar2 = *(undefined4 *)(*(int *)PTR_DAT_0065978c + 0x20);
  puVar6 = PTR_DAT_00659790;
  printerApi_cloud___filamentHubHandler__QueryOtaVersionFromCloud();
  if (iStack_70 != 0) {
    puStack_8 = *(undefined **)(iStack_70 + 4);
    printerApi_common_logger_Errorf();
                    /* WARNING: Could not recover jumptable at 0x0065955c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_000989f8(0,&uStack_4c,iStack_74,*(undefined1 *)(iStack_74 + 0x70),UNRECOVERED_JUMPTABLE_00,
               uVar2,puVar6);
  uStack_4c = in_stack_00000014;
  uStack_48 = *(undefined4 *)(extraout_r2 + 0x28);
  uStack_44 = *(undefined4 *)(extraout_r2 + 0x2c);
  uStack_40 = *(undefined4 *)(extraout_r2 + 0x60);
  uStack_3c = *(undefined4 *)(extraout_r2 + 100);
  uStack_38 = *(undefined4 *)(extraout_r2 + 0x48);
  uStack_34 = *(undefined4 *)(extraout_r2 + 0x4c);
  uStack_30 = *(undefined4 *)(extraout_r2 + 0x50);
  uStack_2c = *(undefined4 *)(extraout_r2 + 0x54);
  uStack_20 = *(undefined4 *)(extraout_r2 + 0x58);
  uStack_1c = *(undefined4 *)(extraout_r2 + 0x5c);
  uStack_28 = *(undefined4 *)(extraout_r2 + 0x40);
  uStack_24 = *(undefined4 *)(extraout_r2 + 0x44);
  uStack_18 = *(undefined4 *)(extraout_r2 + 0x7c);
  uStack_14 = *(undefined4 *)(extraout_r2 + 0x80);
  FUN_0001cd7c();
  FUN_001707f4();
  puStack_c = puVar1;
  puVar4 = *(undefined4 **)(iStack_74 + 0x60);
  iVar3 = *(int *)(iStack_74 + 100);
  FUN_00071620();
  FUN_00126134();
  if (iVar3 == 0) {
    *(undefined4 *)(in_stack_00000018 + 0x14) = in_stack_00000014;
    *(int *)(in_stack_00000018 + 0x18) = iStack_74;
    if (*(int *)PTR_DAT_006597ac != 0) {
      FUN_00098688();
      *puVar4 = puStack_c;
      puVar4[1] = *(undefined4 *)(extraout_r1 + 0x10);
      in_stack_00000018 = extraout_r1;
    }
    *(undefined **)(in_stack_00000018 + 0x10) = puStack_c;
                    /* WARNING: Could not recover jumptable at 0x00659710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00659720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/ota.OtaController.DownloadOtaAmsPackage @ 006597c4 (size 3208) */

/* WARNING: Removing unreachable block (ram,0x00659a58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_ota_OtaController_DownloadOtaAmsPackage(undefined4 param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *extraout_r2;
  undefined4 extraout_r2_00;
  int iVar7;
  uint uVar8;
  int extraout_r3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar9;
  undefined4 unaff_lr;
  bool bVar10;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -300)) {
      puVar9 = (undefined1 *)((int)register0x00000054 + -0x1ac);
      *(undefined4 *)((int)register0x00000054 + -0x1ac) = unaff_lr;
      uVar3 = *(undefined4 *)PTR_DAT_00659f84;
      uVar6 = *(undefined4 *)PTR_DAT_00659f88;
      *(undefined4 *)((int)register0x00000054 + -0x1a8) = 0;
      *(undefined **)((int)register0x00000054 + -0x1a4) = PTR_DAT_00659f8c;
      *(undefined4 *)((int)register0x00000054 + -0x1a0) = 5;
      *(undefined4 *)((int)register0x00000054 + -0x19c) = uVar3;
      *(undefined4 *)((int)register0x00000054 + -0x198) = uVar6;
      *(undefined4 *)((int)register0x00000054 + -0x194) =
           *(undefined4 *)((int)register0x00000054 + 0x2c);
      *(undefined4 *)((int)register0x00000054 + -400) =
           *(undefined4 *)((int)register0x00000054 + 0x30);
      FUN_00071620();
      *(undefined4 *)((int)register0x00000054 + -0x1a8) =
           *(undefined4 *)((int)register0x00000054 + -0x18c);
      *(undefined4 *)((int)register0x00000054 + -0x1a4) =
           *(undefined4 *)((int)register0x00000054 + -0x188);
      FUN_00125de4();
      if (*(int *)((int)register0x00000054 + -0x194) != 0) {
        *(int *)((int)register0x00000054 + 0x38) = *(int *)((int)register0x00000054 + -0x194);
        *(undefined4 *)((int)register0x00000054 + 0x3c) =
             *(undefined4 *)((int)register0x00000054 + -400);
                    /* WARNING: Could not recover jumptable at 0x0065a484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x1ac))();
        return;
      }
      *(undefined4 *)((int)register0x00000054 + -0xa8) =
           *(undefined4 *)((int)register0x00000054 + -0x1a0);
      *(undefined4 *)((int)register0x00000054 + -0x140) =
           *(undefined4 *)((int)register0x00000054 + -0x19c);
      *(undefined4 *)((int)register0x00000054 + -0x13c) =
           *(undefined4 *)((int)register0x00000054 + -0x198);
      *(undefined **)((int)register0x00000054 + -0x1a8) = PTR_DAT_00659f90;
      FUN_0001eed8();
      uVar3 = *(undefined4 *)((int)register0x00000054 + -0x1a4);
      *(undefined4 *)((int)register0x00000054 + -4) = uVar3;
      *(undefined4 *)((int)register0x00000054 + -0x1a8) =
           *(undefined4 *)((int)register0x00000054 + -0xa8);
      *(undefined4 *)((int)register0x00000054 + -0x1a4) =
           *(undefined4 *)((int)register0x00000054 + -0x140);
      *(undefined4 *)((int)register0x00000054 + -0x1a0) =
           *(undefined4 *)((int)register0x00000054 + -0x13c);
      *(undefined **)((int)register0x00000054 + -0x19c) = PTR_DAT_00659f94;
      *(undefined4 *)((int)register0x00000054 + -0x198) = uVar3;
      FUN_0016a168();
      if (*(int *)((int)register0x00000054 + -0x194) != 0) {
        *(int *)((int)register0x00000054 + 0x38) = *(int *)((int)register0x00000054 + -0x194);
        *(undefined4 *)((int)register0x00000054 + 0x3c) =
             *(undefined4 *)((int)register0x00000054 + -400);
                    /* WARNING: Could not recover jumptable at 0x0065a474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x1ac))();
        return;
      }
      iVar7 = *(int *)((int)register0x00000054 + -4);
      if (*(int *)(iVar7 + 0x18) == *(int *)((int)register0x00000054 + 0x18)) {
        uVar3 = *(undefined4 *)(iVar7 + 0x14);
        *(undefined4 *)((int)register0x00000054 + -0x1a8) =
             *(undefined4 *)((int)register0x00000054 + 0x14);
        *(undefined4 *)((int)register0x00000054 + -0x1a4) = uVar3;
        *(int *)((int)register0x00000054 + -0x1a0) = *(int *)((int)register0x00000054 + 0x18);
        FUN_000150d4();
        bVar2 = *(byte *)((int)register0x00000054 + -0x19c) ^ 1;
        iVar7 = *(int *)((int)register0x00000054 + -4);
      }
      else {
        bVar2 = 1;
      }
      if (bVar2 == 0) {
        if (*(int *)(iVar7 + 0x20) == *(int *)((int)register0x00000054 + 0x28)) {
          uVar3 = *(undefined4 *)(iVar7 + 0x1c);
          *(undefined4 *)((int)register0x00000054 + -0x1a8) =
               *(undefined4 *)((int)register0x00000054 + 0x24);
          *(undefined4 *)((int)register0x00000054 + -0x1a4) = uVar3;
          *(int *)((int)register0x00000054 + -0x1a0) = *(int *)((int)register0x00000054 + 0x28);
          FUN_000150d4();
          bVar2 = *(byte *)((int)register0x00000054 + -0x19c) ^ 1;
          iVar7 = *(int *)((int)register0x00000054 + -4);
        }
        else {
          bVar2 = 1;
        }
      }
      else {
        bVar2 = 1;
      }
      if (bVar2 == 0) {
        if (*(int *)(iVar7 + 0x28) == *(int *)((int)register0x00000054 + 0x20)) {
          uVar3 = *(undefined4 *)(iVar7 + 0x24);
          *(undefined4 *)((int)register0x00000054 + -0x1a8) =
               *(undefined4 *)((int)register0x00000054 + 0x1c);
          *(undefined4 *)((int)register0x00000054 + -0x1a4) = uVar3;
          *(int *)((int)register0x00000054 + -0x1a0) = *(int *)((int)register0x00000054 + 0x20);
          FUN_000150d4();
          bVar2 = *(byte *)((int)register0x00000054 + -0x19c) ^ 1;
          iVar7 = *(int *)((int)register0x00000054 + -4);
        }
        else {
          bVar2 = 1;
        }
      }
      else {
        bVar2 = 1;
      }
      if (bVar2 == 0) {
        if (*(int *)(iVar7 + 0x10) == *(int *)((int)register0x00000054 + 0x30)) {
          uVar3 = *(undefined4 *)(iVar7 + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x1a8) =
               *(undefined4 *)((int)register0x00000054 + 0x2c);
          *(undefined4 *)((int)register0x00000054 + -0x1a4) = uVar3;
          *(int *)((int)register0x00000054 + -0x1a0) = *(int *)((int)register0x00000054 + 0x30);
          FUN_000150d4();
          bVar2 = *(byte *)((int)register0x00000054 + -0x19c) ^ 1;
        }
        else {
          bVar2 = 1;
        }
      }
      else {
        bVar2 = 1;
      }
      if (bVar2 != 0) {
        FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x20));
        *(undefined **)((int)register0x00000054 + -0x1a8) = PTR_DAT_0065a4ec;
        *(undefined1 **)((int)register0x00000054 + -0x1a4) =
             (undefined1 *)((int)register0x00000054 + 4);
        FUN_0001cd7c();
        *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_0065a4ec;
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + -0x1a0);
        *(undefined **)((int)register0x00000054 + -0x1a8) = PTR_DAT_0065a4f0;
        *(undefined4 *)((int)register0x00000054 + -0x1a4) =
             *(undefined4 *)((int)register0x00000054 + -4);
        FUN_0001cd7c();
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0065a4f0;
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x1a0);
        *(undefined **)((int)register0x00000054 + -0x1a8) = PTR_DAT_0065a4f4;
        *(undefined4 *)((int)register0x00000054 + -0x1a4) = 0x30;
        *(undefined1 **)((int)register0x00000054 + -0x1a0) =
             (undefined1 *)((int)register0x00000054 + -0x20);
        *(undefined4 *)((int)register0x00000054 + -0x19c) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x198) = 2;
        printerApi_common_logger_Errorf();
        *(undefined **)((int)register0x00000054 + -0x1a8) = PTR_DAT_0065a4f8;
        FUN_0001eed8();
        puVar5 = *(undefined4 **)((int)register0x00000054 + -0x1a4);
        puVar5[1] = 0x1d;
        *puVar5 = PTR_DAT_0065a4fc;
        *(undefined **)((int)register0x00000054 + 0x38) = PTR_DAT_0065a500;
        *(undefined4 **)((int)register0x00000054 + 0x3c) = puVar5;
                    /* WARNING: Could not recover jumptable at 0x0065a464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x1ac))();
        return;
      }
      FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x84));
      *(undefined4 *)((int)register0x00000054 + -0x80) = 10;
      *(undefined **)((int)register0x00000054 + -0x84) =
           PTR_s__useremaintotal_stepace_drying_m_007765bd_0x298_00659f98;
      *(undefined4 *)((int)register0x00000054 + -0x78) = 0x13;
      *(undefined **)((int)register0x00000054 + -0x7c) = PTR_DAT_00659f9c;
      *(undefined1 **)((int)register0x00000054 + -0x1a8) =
           (undefined1 *)((int)register0x00000054 + -0x84);
      *(undefined4 *)((int)register0x00000054 + -0x1a4) = 2;
      *(undefined4 *)((int)register0x00000054 + -0x1a0) = 2;
      FUN_00159184();
      *(undefined4 *)((int)register0x00000054 + -0x10c) =
           *(undefined4 *)((int)register0x00000054 + -0x19c);
      *(undefined4 *)((int)register0x00000054 + -0x17c) =
           *(undefined4 *)((int)register0x00000054 + -0x198);
      *(undefined4 *)((int)register0x00000054 + -0x1a8) =
           *(undefined4 *)((int)register0x00000054 + -0x19c);
      *(undefined4 *)((int)register0x00000054 + -0x1a4) =
           *(undefined4 *)((int)register0x00000054 + -0x198);
      printerApi_common_file_CreateDirIfNoexist();
      iVar7 = *(int *)((int)register0x00000054 + -0x1a0);
      if (iVar7 != 0) {
        *(int *)((int)register0x00000054 + -0x164) = iVar7;
        *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x24) = 0;
        uVar3 = *(undefined4 *)(iVar7 + 4);
        *(undefined4 *)((int)register0x00000054 + -0xb0) =
             *(undefined4 *)((int)register0x00000054 + -0x19c);
        *(undefined4 *)((int)register0x00000054 + -0x28) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x24) =
             *(undefined4 *)((int)register0x00000054 + -0x19c);
        *(undefined **)((int)register0x00000054 + -0x1a8) = PTR_DAT_00659fa0;
        *(undefined4 *)((int)register0x00000054 + -0x1a4) = 0x41;
        *(undefined1 **)((int)register0x00000054 + -0x1a0) =
             (undefined1 *)((int)register0x00000054 + -0x28);
        *(undefined4 *)((int)register0x00000054 + -0x19c) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x198) = 1;
        printerApi_common_logger_Errorf();
        pcVar4 = *(code **)(*(int *)((int)register0x00000054 + -0x164) + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x1a8) =
             *(undefined4 *)((int)register0x00000054 + -0xb0);
        (*pcVar4)();
        uVar3 = *(undefined4 *)((int)register0x00000054 + -0x1a4);
        uVar6 = *(undefined4 *)((int)register0x00000054 + -0x1a0);
        *(undefined4 *)((int)register0x00000054 + -0x1a8) = 0;
        *(undefined **)((int)register0x00000054 + -0x1a4) = PTR_DAT_00659fa4;
        *(undefined4 *)((int)register0x00000054 + -0x1a0) = 0x26;
        *(undefined4 *)((int)register0x00000054 + -0x19c) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x198) = uVar6;
        FUN_000715a4();
        *(undefined4 *)((int)register0x00000054 + -0x178) =
             *(undefined4 *)((int)register0x00000054 + -400);
        *(undefined4 *)((int)register0x00000054 + -0x108) =
             *(undefined4 *)((int)register0x00000054 + -0x194);
        *(undefined **)((int)register0x00000054 + -0x1a8) = PTR_DAT_00659fa8;
        FUN_0001eed8();
        puVar5 = *(undefined4 **)((int)register0x00000054 + -0x1a4);
        puVar5[1] = *(undefined4 *)((int)register0x00000054 + -0x178);
        if (*(int *)PTR_DAT_00659fac == 0) {
          uVar3 = *(undefined4 *)((int)register0x00000054 + -0x108);
        }
        else {
          puVar5 = (undefined4 *)FUN_00098678();
          uVar3 = *(undefined4 *)((int)register0x00000054 + -0x108);
          *unaff_r8 = uVar3;
        }
        *puVar5 = uVar3;
        *(undefined **)((int)register0x00000054 + 0x38) = PTR_DAT_00659fb0;
        *(undefined4 **)((int)register0x00000054 + 0x3c) = puVar5;
                    /* WARNING: Could not recover jumptable at 0x00659b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x1ac))();
        return;
      }
      *(undefined4 *)((int)register0x00000054 + -0x1a8) =
           *(undefined4 *)((int)register0x00000054 + -0x10c);
      *(undefined4 *)((int)register0x00000054 + -0x1a4) =
           *(undefined4 *)((int)register0x00000054 + -0x17c);
      uVar3 = printerApi_common_file_DiskUsage();
      uVar3 = FUN_00098e0c(uVar3,(undefined1 *)((int)register0x00000054 + -0x1a0),
                           (undefined1 *)((int)register0x00000054 + -0x138));
      FUN_00098e0c(uVar3,(undefined1 *)((int)register0x00000054 + -0x138),
                   (undefined1 *)((int)register0x00000054 + -0x160));
      lVar1 = (ulonglong)*(uint *)(*(int *)((int)register0x00000054 + -4) + 0x2c) * 10;
      uVar8 = (int)((ulonglong)lVar1 >> 0x20) +
              *(int *)(*(int *)((int)register0x00000054 + -4) + 0x30) * 10;
      if (*(uint *)((int)register0x00000054 + -0x14c) < uVar8 ||
          *(uint *)((int)register0x00000054 + -0x14c) == uVar8 &&
          *(uint *)((int)register0x00000054 + -0x150) < (uint)lVar1) {
        FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x20));
        *(undefined4 *)((int)register0x00000054 + -0x1a8) =
             *(undefined4 *)((int)register0x00000054 + -0x150);
        *(undefined4 *)((int)register0x00000054 + -0x1a4) =
             *(undefined4 *)((int)register0x00000054 + -0x14c);
        FUN_0008a4bc();
        *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_0065a4d8;
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + -0x1a0);
        uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x30);
        *(undefined4 *)((int)register0x00000054 + -0x1a8) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x2c);
        *(undefined4 *)((int)register0x00000054 + -0x1a4) = uVar3;
        FUN_0008a4bc();
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0065a4dc;
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x1a0);
        *(undefined **)((int)register0x00000054 + -0x1a8) =
             PTR_s_ota_download_ota_package_fail_er_007a83c6_0x120_0065a4e0;
        *(undefined4 *)((int)register0x00000054 + -0x1a4) = 0x60;
        *(undefined1 **)((int)register0x00000054 + -0x1a0) =
             (undefined1 *)((int)register0x00000054 + -0x20);
        *(undefined4 *)((int)register0x00000054 + -0x19c) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x198) = 2;
        printerApi_common_logger_Errorf();
        uVar3 = *(undefined4 *)PTR_DAT_0065a4e4;
        *(undefined **)((int)register0x00000054 + 0x38) = PTR_DAT_0065a4e8;
        *(undefined4 *)((int)register0x00000054 + 0x3c) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0065a3b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x1ac))();
        return;
      }
      FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x94));
      *(undefined4 *)((int)register0x00000054 + -0x90) =
           *(undefined4 *)((int)register0x00000054 + -0x17c);
      *(undefined4 *)((int)register0x00000054 + -0x94) =
           *(undefined4 *)((int)register0x00000054 + -0x10c);
      *(undefined4 *)((int)register0x00000054 + -0x88) =
           *(undefined4 *)((int)register0x00000054 + 0x18);
      *(undefined4 *)((int)register0x00000054 + -0x8c) =
           *(undefined4 *)((int)register0x00000054 + 0x14);
      *(undefined1 **)((int)register0x00000054 + -0x1a8) =
           (undefined1 *)((int)register0x00000054 + -0x94);
      *(undefined4 *)((int)register0x00000054 + -0x1a4) = 2;
      *(undefined4 *)((int)register0x00000054 + -0x1a0) = 2;
      FUN_00159184();
      *(undefined4 *)((int)register0x00000054 + -0x110) =
           *(undefined4 *)((int)register0x00000054 + -0x19c);
      *(undefined4 *)((int)register0x00000054 + -0x180) =
           *(undefined4 *)((int)register0x00000054 + -0x198);
      uVar3 = FUN_0010cf30();
      FUN_00098e14(uVar3,(undefined1 *)((int)register0x00000054 + -0x1a8),
                   (undefined1 *)((int)register0x00000054 + -0xf8));
      FUN_00098a04(0,(undefined1 *)((int)register0x00000054 + -0xe4));
      iVar7 = *(int *)((int)register0x00000054 + -4);
      uVar3 = *(undefined4 *)(iVar7 + 0x30);
      *(undefined4 *)((int)register0x00000054 + -0xe4) = *(undefined4 *)(iVar7 + 0x2c);
      *(undefined4 *)((int)register0x00000054 + -0xe0) = uVar3;
      uVar3 = *(undefined4 *)(iVar7 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0xd0) = *(undefined4 *)(iVar7 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0xcc) = uVar3;
      *(undefined1 *)((int)register0x00000054 + -0xdc) = 1;
      *(undefined **)((int)register0x00000054 + -0x1a8) = PTR_SUB_00659fb4;
      FUN_0001eed8();
      puVar5 = *(undefined4 **)((int)register0x00000054 + -0x1a4);
      *(undefined4 **)((int)register0x00000054 + -8) = puVar5;
      puVar5[1] = 0xf;
      *puVar5 = PTR_DAT_00659fb8;
      *(undefined **)((int)register0x00000054 + -0x1a8) = PTR_SUB_00659fb4;
      FUN_0001eed8();
      puVar5 = *(undefined4 **)((int)register0x00000054 + -0x1a4);
      uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x14);
      puVar5[1] = *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x18);
      if (*(int *)PTR_DAT_00659fac != 0) {
        FUN_00098678();
        *unaff_r8 = uVar3;
        puVar5 = extraout_r2;
      }
      *(undefined4 **)((int)register0x00000054 + -0xc) = puVar5;
      *puVar5 = uVar3;
      *(undefined **)((int)register0x00000054 + -0x1a8) = PTR_DAT_00659fbc;
      FUN_0001eed8();
      *(undefined4 *)((int)register0x00000054 + -0x104) =
           *(undefined4 *)((int)register0x00000054 + -8);
      *(undefined4 *)((int)register0x00000054 + -0x100) =
           *(undefined4 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0xfc) =
           *(undefined4 *)((int)register0x00000054 + -0x1a4);
      *(undefined4 *)((int)register0x00000054 + -0x1a8) = *(undefined4 *)PTR_DAT_00659fc0;
      FUN_0009bf4c();
      bVar10 = *(undefined **)((int)register0x00000054 + -0x1a4) == PTR_DAT_00659fc4;
      if (bVar10) {
        *(undefined4 *)((int)register0x00000054 + -0x98) =
             *(undefined4 *)((int)register0x00000054 + -0x1a0);
        *(undefined4 *)((int)register0x00000054 + -0xa0) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x9c) = 0;
        *(undefined **)((int)register0x00000054 + -0xa4) =
             PTR_printerApi_controller_ota_OtaController_DownloadOtaAmsPackage_func1_00659fc8;
        *(undefined1 **)((int)register0x00000054 + -0xa0) =
             (undefined1 *)((int)register0x00000054 + -0x104);
        *(undefined1 **)((int)register0x00000054 + -0x9c) =
             (undefined1 *)((int)register0x00000054 + -0x98);
        *(undefined1 **)((int)register0x00000054 + -200) =
             (undefined1 *)((int)register0x00000054 + -0xa4);
        uVar3 = FUN_00098a04(0,(undefined1 *)((int)register0x00000054 + -0x5c));
        FUN_00098dd4(uVar3,(undefined1 *)((int)register0x00000054 + -0xe4),
                     (undefined1 *)((int)register0x00000054 + -0x5c));
        uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x1c);
        uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x20);
        *(undefined4 *)((int)register0x00000054 + -0x1a8) =
             *(undefined4 *)((int)register0x00000054 + -0x110);
        *(undefined4 *)((int)register0x00000054 + -0x1a4) =
             *(undefined4 *)((int)register0x00000054 + -0x180);
        *(undefined4 *)((int)register0x00000054 + -0x1a0) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x19c) = uVar6;
        *(undefined1 **)((int)register0x00000054 + -0x198) =
             (undefined1 *)((int)register0x00000054 + -0x5c);
        *(undefined4 *)((int)register0x00000054 + -0x194) = 1;
        *(undefined4 *)((int)register0x00000054 + -400) = 1;
        printerApi_common_file_DownloadFile();
        if (*(int *)((int)register0x00000054 + -0x18c) == 0) {
          FUN_0008b6b8();
          *(undefined4 *)((int)register0x00000054 + -0xac) =
               *(undefined4 *)((int)register0x00000054 + -0x1a8);
          uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1a8) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x14);
          *(undefined4 *)((int)register0x00000054 + -0x1a4) = uVar3;
          FUN_0008a578();
          *(undefined4 *)((int)register0x00000054 + -0x10) =
               *(undefined4 *)((int)register0x00000054 + -0x1a0);
          *(undefined **)((int)register0x00000054 + -0x1a8) = PTR_DAT_00659fd8;
          *(undefined4 *)((int)register0x00000054 + -0x1a4) =
               *(undefined4 *)((int)register0x00000054 + -0xac);
          *(undefined **)((int)register0x00000054 + -0x1a0) =
               PTR_s_namepathsizedatetypetext_gco_acm_0077367d_0xf_00659fdc;
          *(undefined4 *)((int)register0x00000054 + -0x19c) = 4;
          FUN_0008e7bc();
          puVar5 = *(undefined4 **)((int)register0x00000054 + -0x198);
          *puVar5 = PTR_SUB_00659fb4;
          if (*(int *)PTR_DAT_00659fac == 0) {
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x10);
          }
          else {
            puVar5 = (undefined4 *)FUN_00098688();
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x10);
            *unaff_r8 = uVar3;
            unaff_r8[1] = puVar5[1];
          }
          puVar5[1] = uVar3;
          uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x28);
          *(undefined4 *)((int)register0x00000054 + -0x1a8) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x24);
          *(undefined4 *)((int)register0x00000054 + -0x1a4) = uVar3;
          FUN_0008a578();
          *(undefined4 *)((int)register0x00000054 + -0x10) =
               *(undefined4 *)((int)register0x00000054 + -0x1a0);
          *(undefined **)((int)register0x00000054 + -0x1a8) = PTR_DAT_00659fd8;
          *(undefined4 *)((int)register0x00000054 + -0x1a4) =
               *(undefined4 *)((int)register0x00000054 + -0xac);
          *(undefined **)((int)register0x00000054 + -0x1a0) =
               PTR_s_version__d__M_<_g>_WPA2PSKgetLis_00774847_0x609_00659fe0;
          *(undefined4 *)((int)register0x00000054 + -0x19c) = 7;
          FUN_0008e7bc();
          puVar5 = *(undefined4 **)((int)register0x00000054 + -0x198);
          *puVar5 = PTR_SUB_00659fb4;
          if (*(int *)PTR_DAT_00659fac == 0) {
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x10);
          }
          else {
            puVar5 = (undefined4 *)FUN_00098688();
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x10);
            *unaff_r8 = uVar3;
            unaff_r8[1] = puVar5[1];
          }
          puVar5[1] = uVar3;
          uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x20);
          *(undefined4 *)((int)register0x00000054 + -0x1a8) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x1c);
          *(undefined4 *)((int)register0x00000054 + -0x1a4) = uVar3;
          FUN_0008a578();
          *(undefined4 *)((int)register0x00000054 + -0x10) =
               *(undefined4 *)((int)register0x00000054 + -0x1a0);
          *(undefined **)((int)register0x00000054 + -0x1a8) = PTR_DAT_0065a4b0;
          *(undefined4 *)((int)register0x00000054 + -0x1a4) =
               *(undefined4 *)((int)register0x00000054 + -0xac);
          *(undefined **)((int)register0x00000054 + -0x1a0) = PTR_DAT_0065a4b4;
          *(undefined4 *)((int)register0x00000054 + -0x19c) = 3;
          FUN_0008e7bc();
          puVar5 = *(undefined4 **)((int)register0x00000054 + -0x198);
          *puVar5 = PTR_SUB_0065a4b8;
          if (*(int *)PTR_DAT_0065a4bc == 0) {
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x10);
          }
          else {
            puVar5 = (undefined4 *)FUN_00098688();
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x10);
            *unaff_r8 = uVar3;
            unaff_r8[1] = puVar5[1];
          }
          puVar5[1] = uVar3;
          uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x1a8) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x1a4) = uVar3;
          FUN_0008a578();
          *(undefined4 *)((int)register0x00000054 + -0x10) =
               *(undefined4 *)((int)register0x00000054 + -0x1a0);
          *(undefined **)((int)register0x00000054 + -0x1a8) = PTR_DAT_0065a4b0;
          *(undefined4 *)((int)register0x00000054 + -0x1a4) =
               *(undefined4 *)((int)register0x00000054 + -0xac);
          *(undefined **)((int)register0x00000054 + -0x1a0) = PTR_DAT_0065a4c0;
          *(undefined4 *)((int)register0x00000054 + -0x19c) = 3;
          FUN_0008e7bc();
          puVar5 = *(undefined4 **)((int)register0x00000054 + -0x198);
          *puVar5 = PTR_SUB_0065a4b8;
          if (*(int *)PTR_DAT_0065a4bc == 0) {
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x10);
          }
          else {
            puVar5 = (undefined4 *)FUN_00098688();
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x10);
            *unaff_r8 = uVar3;
            unaff_r8[1] = puVar5[1];
          }
          puVar5[1] = uVar3;
          FUN_00098e14(puVar5,(undefined1 *)((int)register0x00000054 + -0xf8),
                       (undefined1 *)((int)register0x00000054 + -0x1a8));
          FUN_0010327c();
          *(undefined4 *)((int)register0x00000054 + -0x148) =
               *(undefined4 *)((int)register0x00000054 + -0x194);
          *(undefined4 *)((int)register0x00000054 + -0x144) =
               *(undefined4 *)((int)register0x00000054 + -400);
          *(undefined4 *)((int)register0x00000054 + -0x1a8) =
               *(undefined4 *)((int)register0x00000054 + -0x194);
          *(undefined4 *)((int)register0x00000054 + -0x1a4) =
               *(undefined4 *)((int)register0x00000054 + -400);
          *(undefined4 *)((int)register0x00000054 + -0x1a0) = _UNK_0065a4c4;
          *(undefined4 *)((int)register0x00000054 + -0x19c) = 0;
          FUN_00086d18();
          *(undefined4 *)((int)register0x00000054 + -0x174) =
               *(undefined4 *)((int)register0x00000054 + -0x198);
          *(undefined4 *)((int)register0x00000054 + -0x170) =
               *(undefined4 *)((int)register0x00000054 + -0x194);
          *(undefined4 *)((int)register0x00000054 + -0x1a8) =
               *(undefined4 *)((int)register0x00000054 + -0x148);
          *(undefined4 *)((int)register0x00000054 + -0x1a4) =
               *(undefined4 *)((int)register0x00000054 + -0x144);
          *(undefined4 *)((int)register0x00000054 + -0x1a0) = _UNK_0065a4c4;
          *(undefined4 *)((int)register0x00000054 + -0x19c) = 0;
          FUN_00086ea4();
          *(undefined4 *)((int)register0x00000054 + -0x16c) =
               *(undefined4 *)((int)register0x00000054 + -0x198);
          *(undefined4 *)((int)register0x00000054 + -0x168) =
               *(undefined4 *)((int)register0x00000054 + -0x194);
          *(undefined4 *)((int)register0x00000054 + -0x1a8) =
               *(undefined4 *)((int)register0x00000054 + -0x174);
          *(undefined4 *)((int)register0x00000054 + -0x1a4) =
               *(undefined4 *)((int)register0x00000054 + -0x170);
          FUN_0008695c();
          *(undefined8 *)((int)register0x00000054 + -0x120) =
               *(undefined8 *)((int)register0x00000054 + -0x1a0);
          *(undefined4 *)((int)register0x00000054 + -0x1a8) =
               *(undefined4 *)((int)register0x00000054 + -0x16c);
          *(undefined4 *)((int)register0x00000054 + -0x1a4) =
               *(undefined4 *)((int)register0x00000054 + -0x168);
          FUN_0008695c();
          *(double *)((int)register0x00000054 + -0x118) =
               *(double *)((int)register0x00000054 + -0x120) +
               *(double *)((int)register0x00000054 + -0x1a0) / *(double *)PTR_DAT_0065a4c8;
          *(undefined4 *)((int)register0x00000054 + -0x1a8) =
               *(undefined4 *)((int)register0x00000054 + -0x118);
          *(undefined4 *)((int)register0x00000054 + -0x1a4) =
               *(undefined4 *)((int)register0x00000054 + -0x114);
          FUN_0008a4bc();
          *(undefined4 *)((int)register0x00000054 + -0x10) =
               *(undefined4 *)((int)register0x00000054 + -0x1a0);
          *(undefined **)((int)register0x00000054 + -0x1a8) = PTR_DAT_0065a4b0;
          *(undefined4 *)((int)register0x00000054 + -0x1a4) =
               *(undefined4 *)((int)register0x00000054 + -0xac);
          *(undefined **)((int)register0x00000054 + -0x1a0) =
               PTR_s_cost_swucodeInitkey2a_b_manyauth_0077367d_0x353_0065a4cc;
          *(undefined4 *)((int)register0x00000054 + -0x19c) = 4;
          FUN_0008e7bc();
          puVar5 = *(undefined4 **)((int)register0x00000054 + -0x198);
          *puVar5 = PTR_DAT_0065a4d0;
          if (*(int *)PTR_DAT_0065a4bc == 0) {
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x10);
          }
          else {
            puVar5 = (undefined4 *)FUN_00098688();
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x10);
            *unaff_r8 = uVar3;
            unaff_r8[1] = puVar5[1];
          }
          puVar5[1] = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0x1a8) =
               *(undefined4 *)((int)register0x00000054 + -0x110);
          *(undefined4 *)((int)register0x00000054 + -0x1a4) =
               *(undefined4 *)((int)register0x00000054 + -0x180);
          FUN_0008a578();
          *(undefined4 *)((int)register0x00000054 + -0x10) =
               *(undefined4 *)((int)register0x00000054 + -0x1a0);
          *(undefined **)((int)register0x00000054 + -0x1a8) = PTR_DAT_0065a4b0;
          *(undefined4 *)((int)register0x00000054 + -0x1a4) =
               *(undefined4 *)((int)register0x00000054 + -0xac);
          *(undefined **)((int)register0x00000054 + -0x1a0) = PTR_DAT_0065a4d4;
          *(undefined4 *)((int)register0x00000054 + -0x19c) = 4;
          FUN_0008e7bc();
          puVar5 = *(undefined4 **)((int)register0x00000054 + -0x198);
          *puVar5 = PTR_SUB_0065a4b8;
          if (*(int *)PTR_DAT_0065a4bc == 0) {
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x10);
          }
          else {
            puVar5 = (undefined4 *)FUN_00098688();
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x10);
            *unaff_r8 = uVar3;
            unaff_r8[1] = puVar5[1];
          }
          puVar5[1] = uVar3;
          *(undefined **)((int)register0x00000054 + -0x1a8) = PTR_DAT_0065a4b0;
          *(undefined4 *)((int)register0x00000054 + -0x1a4) =
               *(undefined4 *)((int)register0x00000054 + -0xac);
          FUN_001707f4();
          uVar6 = *(undefined4 *)((int)register0x00000054 + -0x198);
          uVar3 = *(undefined4 *)((int)register0x00000054 + -0x1a0);
          iVar7 = *(int *)((int)register0x00000054 + 0x34);
          *(undefined4 *)(iVar7 + 0x14) = *(undefined4 *)((int)register0x00000054 + -0x19c);
          *(undefined4 *)(iVar7 + 0x18) = uVar6;
          if (*(int *)PTR_DAT_0065a4bc != 0) {
            FUN_00098688();
            *unaff_r8 = extraout_r2_00;
            unaff_r8[1] = *(undefined4 *)(extraout_r3 + 0x10);
            uVar3 = extraout_r2_00;
            iVar7 = extraout_r3;
          }
          *(undefined4 *)(iVar7 + 0x10) = uVar3;
          *(undefined4 *)((int)register0x00000054 + 0x38) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x3c) = 0;
                    /* WARNING: Could not recover jumptable at 0x0065a320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1ac))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x164) = *(int *)((int)register0x00000054 + -0x18c);
        *(undefined4 *)((int)register0x00000054 + -0xb0) =
             *(undefined4 *)((int)register0x00000054 + -0x188);
        FUN_00098a20(0,(undefined1 *)((int)register0x00000054 + -0x74));
        *(undefined4 *)((int)register0x00000054 + -0x1a8) =
             *(undefined4 *)((int)register0x00000054 + -0x110);
        *(undefined4 *)((int)register0x00000054 + -0x1a4) =
             *(undefined4 *)((int)register0x00000054 + -0x180);
        FUN_0008a578();
        *(undefined **)((int)register0x00000054 + -0x74) = PTR_SUB_00659fb4;
        *(undefined4 *)((int)register0x00000054 + -0x70) =
             *(undefined4 *)((int)register0x00000054 + -0x1a0);
        uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x20);
        *(undefined4 *)((int)register0x00000054 + -0x1a8) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x1c);
        *(undefined4 *)((int)register0x00000054 + -0x1a4) = uVar3;
        FUN_0008a578();
        *(undefined **)((int)register0x00000054 + -0x6c) = PTR_SUB_00659fb4;
        *(undefined4 *)((int)register0x00000054 + -0x68) =
             *(undefined4 *)((int)register0x00000054 + -0x1a0);
        if (*(int *)((int)register0x00000054 + -0x164) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x164) + 4);
        }
        *(undefined4 *)((int)register0x00000054 + -100) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x60) =
             *(undefined4 *)((int)register0x00000054 + -0xb0);
        *(undefined **)((int)register0x00000054 + -0x1a8) = PTR_DAT_00659fcc;
        *(undefined4 *)((int)register0x00000054 + -0x1a4) = 0x43;
        *(undefined1 **)((int)register0x00000054 + -0x1a0) =
             (undefined1 *)((int)register0x00000054 + -0x74);
        *(undefined4 *)((int)register0x00000054 + -0x19c) = 3;
        *(undefined4 *)((int)register0x00000054 + -0x198) = 3;
        printerApi_common_logger_Errorf();
        *(undefined4 *)((int)register0x00000054 + -0x1a8) =
             *(undefined4 *)((int)register0x00000054 + -0x164);
        *(undefined4 *)((int)register0x00000054 + -0x1a4) =
             *(undefined4 *)((int)register0x00000054 + -0xb0);
        func_0x00122b08();
        if (*(char *)((int)register0x00000054 + -0x1a0) != '\0') {
          uVar3 = *(undefined4 *)PTR_DAT_00659fd0;
          *(undefined **)((int)register0x00000054 + 0x38) = PTR_DAT_00659fd4;
          *(undefined4 *)((int)register0x00000054 + 0x3c) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00659e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1ac))();
          return;
        }
        *(undefined4 *)((int)register0x00000054 + 0x38) =
             *(undefined4 *)((int)register0x00000054 + -0x164);
        *(undefined4 *)((int)register0x00000054 + 0x3c) =
             *(undefined4 *)((int)register0x00000054 + -0xb0);
                    /* WARNING: Could not recover jumptable at 0x00659e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x1ac))();
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x1a8) =
           *(undefined **)((int)register0x00000054 + -0x1a4);
      *(undefined **)((int)register0x00000054 + -0x1a4) = PTR_DAT_00659fc4;
      *(undefined **)((int)register0x00000054 + -0x1a0) = PTR_DAT_0065a504;
      param_1 = FUN_0001cb94();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1ac);
      if (bVar10) {
        register0x00000054 = (BADSPACEBASE *)puVar9;
      }
    }
    unaff_lr = 0x65a4a8;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/ota.OtaController.DownloadOtaAmsPackage.func1 @ 0065a508 (size 268) */

void printerApi_controller_ota_OtaController_DownloadOtaAmsPackage_func1(void)

{
  undefined4 extraout_r3;
  undefined4 uVar1;
  int unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined8 in_stack_00000004;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 uVar2;
  undefined8 *puStack_34;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int iStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x65a610;
    FUN_00096b54();
  }
  iStack_4 = *(int *)(unaff_r7 + 4);
  uVar2 = DAT_0065a618;
  FUN_0001eed8();
  *puStack_34 = in_stack_00000004;
  uVar1 = extraout_r3;
  if (*DAT_0065a61c != 0) {
    puStack_34 = (undefined8 *)FUN_00098688();
    *unaff_r8 = puStack_34;
    uVar1 = *(undefined4 *)(iStack_4 + 8);
    unaff_r8[1] = uVar1;
  }
  *(undefined8 **)(iStack_4 + 8) = puStack_34;
  FUN_00098a28((int)in_stack_00000004,0,&uStack_14,iStack_4,uVar1,unaff_lr,uVar2);
  uStack_14 = DAT_0065a620;
  uStack_10 = DAT_0065a624;
  FUN_0008a4bc();
  uStack_c = DAT_0065a618;
  printerApi_common_logger_Debug();
  printerApi_service_k3c_wrapper___K3cwrapper__PublishDeviceOtaDownloadStatus();
  return;
}



/* printerApi/controller/ota.OtaController.UpgradeAms @ 0065a628 (size 1920) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_ota_OtaController_UpgradeAms(void)

{
  undefined *puVar1;
  uint *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  int *extraout_r1;
  int *piVar9;
  uint extraout_r2;
  uint *extraout_r2_00;
  uint *extraout_r2_01;
  int *extraout_r2_02;
  int *extraout_r2_03;
  uint *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar10;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  undefined *in_stack_00000020;
  uint *in_stack_00000024;
  int *piStack_9c;
  undefined1 *puStack_98;
  uint uStack_94;
  uint uStack_84;
  uint uStack_80;
  undefined *apuStack_40 [3];
  undefined4 uStack_34;
  int iStack_30;
  undefined *puStack_2c;
  undefined1 *puStack_28;
  undefined *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  uint *puStack_c;
  undefined *puStack_8;
  undefined **ppuStack_4;
  
  uVar10 = CONCAT44(uStack_94,puStack_98);
  while (&puStack_24 <= *(undefined ***)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x65ada4;
    FUN_00096bb8();
  }
  puStack_8 = (undefined *)0x0;
  ppuStack_4 = (undefined **)0x0;
  in_stack_00000020 = (undefined *)0x0;
  in_stack_00000024 = (uint *)0x0;
  printerApi_cloud_ReportWorkBusyStatus();
  puStack_8 = PTR_DAT_0065adac;
  if (in_stack_00000018 == 0) {
    uVar8 = 1;
  }
  else {
    printerApi_common_file_FileExist();
    uVar8 = (uint)puStack_98 & 0xff ^ 1;
  }
  puVar2 = (uint *)PTR_DAT_0065adb0;
  if (uVar8 != 0) {
    FUN_00071620();
    FUN_0001eed8();
    *(uint *)((int)puVar2 + 4) = uStack_80;
    if (*(int *)PTR_DAT_0065adbc != 0) {
      puVar2 = (uint *)FUN_00098678();
      *unaff_r8 = uStack_84;
    }
    *puVar2 = uStack_84;
    in_stack_00000020 = PTR_DAT_0065adc0;
    in_stack_00000024 = puVar2;
    printerApi_controller_ota_OtaController_UpgradeAms_func1();
                    /* WARNING: Could not recover jumptable at 0x0065a75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  printerApi_common_file_FileMD5();
  puVar1 = PTR_DAT_0065adcc;
  FUN_00071620();
  FUN_0001eed8();
  puStack_c = (uint *)puVar1;
  FUN_00125de4();
  puVar2 = puStack_c;
  *puStack_c = (uint)puStack_98;
  puVar3 = puStack_98;
  if (*(int *)PTR_DAT_0065adbc != 0) {
    puVar3 = (undefined1 *)FUN_00098688();
    *unaff_r8 = extraout_r2;
    unaff_r8[1] = puVar2[1];
    uStack_94 = extraout_r2;
  }
  puVar2[1] = uStack_94;
  if (puVar3 != (undefined1 *)0x0) {
    in_stack_00000020 = puVar3;
    printerApi_controller_ota_OtaController_UpgradeAms_func1();
                    /* WARNING: Could not recover jumptable at 0x0065ad78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  apuStack_40[0] = PTR_printerApi_controller_ota_OtaController_UpgradeAms_deferwrap1_0065add4;
  ppuStack_4 = apuStack_40;
  FUN_0001eed8();
  puVar1 = PTR_DAT_0065addc;
  uStack_10 = uStack_80;
  FUN_0016a168();
  *puStack_c = (uint)puStack_98;
  puVar2 = puStack_c;
  if (*(int *)PTR_DAT_0065adbc != 0) {
    uVar10 = FUN_00098688();
    *unaff_r8 = (uint)((ulonglong)uVar10 >> 0x20);
    unaff_r8[1] = extraout_r2_00[1];
    puVar2 = extraout_r2_00;
  }
  puVar2[1] = (uint)((ulonglong)uVar10 >> 0x20);
  if ((int)uVar10 == 0) {
    puVar3 = *(undefined1 **)(uStack_10 + 8);
    printerApi_controller_ota_validateFilamentHubUpgradeModel();
    *puStack_c = (uint)puVar1;
    puVar4 = puVar1;
    puVar2 = puStack_c;
    if (*(int *)PTR_DAT_0065adbc != 0) {
      uVar10 = FUN_00098688();
      uStack_80 = (uint)((ulonglong)uVar10 >> 0x20);
      puVar4 = (undefined *)uVar10;
      *unaff_r8 = uStack_80;
      unaff_r8[1] = extraout_r2_01[1];
      puVar2 = extraout_r2_01;
    }
    uVar8 = in_stack_00000018;
    puVar2[1] = uStack_80;
    if (puVar4 != (undefined *)0x0) {
      uStack_1c = 0;
      if (*puVar2 != 0) {
        uStack_1c = *(undefined4 *)(*puVar2 + 4);
      }
      uStack_18 = puVar2[1];
      printerApi_common_logger_Errorf();
      in_stack_00000020 = (undefined *)*puStack_c;
      in_stack_00000024 = (uint *)puStack_c[1];
      (*(code *)*ppuStack_4)();
      printerApi_controller_ota_OtaController_UpgradeAms_func1();
                    /* WARNING: Could not recover jumptable at 0x0065a9c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    internal_filepathlite_Dir();
    FUN_0001eed8();
    uStack_14 = uVar8;
    FUN_00017058();
    piStack_9c = (int *)0x2;
    FUN_000b5490();
    puVar4 = PTR_DAT_0065adec;
    FUN_0001eed8();
    puRam00000002 = PTR_printerApi_controller_ota_OtaController_UpgradeAms_func2_0065adf0;
    puStack_98 = puVar3;
    if (*(int *)PTR_DAT_0065adbc != 0) {
      iVar5 = FUN_000986e8();
      *unaff_r8 = uStack_14;
      unaff_r8[1] = (uint)puStack_c;
      unaff_r8[2] = (uint)puVar3;
      unaff_r8[3] = *(uint *)(iVar5 + 0x24);
      unaff_r8[4] = uStack_10;
      unaff_r8[5] = *(uint *)(iVar5 + 0x2c);
      unaff_r8[6] = (uint)puVar3;
      unaff_r8[7] = *(uint *)(iVar5 + 0x30);
      puStack_98 = &stack0x00000004;
      puVar4 = PTR_DAT_0065adf4;
      FUN_00022914();
      piStack_9c = extraout_r2_02;
    }
    _DAT_00000006 = uStack_14;
    _DAT_0000000a = puStack_c;
    FUN_00098e0c(2,&stack0x00000004,0xe,uStack_14,UNRECOVERED_JUMPTABLE,puVar4);
    _SUB_0000002a = puVar1;
    _SUB_0000002e = uStack_10;
    _DAT_00000026 = puVar3;
    _DAT_00000032 = puVar3;
    FUN_0005e168();
    FUN_0009bf4c();
    if (piStack_9c != (int *)PTR_DAT_0065adfc) {
      uVar7 = FUN_0001cb94();
      FUN_0004fb3c(uVar7);
                    /* WARNING: Could not recover jumptable at 0x0065ad98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    FUN_0001eed8();
    piVar9 = piStack_9c;
    if (*(int *)PTR_DAT_0065adbc != 0) {
      FUN_00098678();
      *unaff_r8 = (uint)puStack_98;
      piVar9 = extraout_r1;
    }
    *piVar9 = (int)puStack_98;
    FUN_0001eed8();
    *piStack_9c = (int)PTR_printerApi_controller_ota_OtaController_UpgradeAms_func3_0065ae08;
    piVar6 = piStack_9c;
    if (*(int *)PTR_DAT_0065adbc != 0) {
      piVar6 = (int *)FUN_00098698();
      *unaff_r8 = uStack_14;
      unaff_r8[1] = (uint)puVar3;
      unaff_r8[2] = (uint)piVar9;
    }
    piVar6[1] = uStack_14;
    piVar6[2] = (int)puVar3;
    piVar6[3] = (int)piVar9;
    FUN_0005e168();
    FUN_000b5644();
    if (*puStack_c == 0) {
      FUN_0001eed8();
      piStack_9c[0] = 0;
      piStack_9c[1] = 0x3ff00000;
      printerApi_service_k3c_wrapper___K3cwrapper__PublishDeviceOtaUpgradeStatus();
      in_stack_00000020 = (undefined *)0x0;
      in_stack_00000024 = (uint *)0x0;
      (*(code *)*ppuStack_4)();
      printerApi_controller_ota_OtaController_UpgradeAms_func1();
                    /* WARNING: Could not recover jumptable at 0x0065ad34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    FUN_00098a20(0,&uStack_34,puStack_c);
    uStack_34 = 0;
    if (*extraout_r2_03 != 0) {
      uStack_34 = *(undefined4 *)(*extraout_r2_03 + 4);
    }
    iStack_30 = extraout_r2_03[1];
    FUN_0008a578();
    puStack_2c = PTR_SUB_0065ae0c;
    puStack_28 = puStack_98;
    FUN_0008a578();
    puStack_24 = PTR_SUB_0065ae0c;
    puStack_20 = puStack_98;
    printerApi_common_logger_Errorf();
    in_stack_00000020 = (undefined *)*puStack_c;
    in_stack_00000024 = (uint *)puStack_c[1];
    (*(code *)*ppuStack_4)();
    printerApi_controller_ota_OtaController_UpgradeAms_func1();
                    /* WARNING: Could not recover jumptable at 0x0065acd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _in_stack_00000020 = uVar10;
  (*(code *)*ppuStack_4)();
  printerApi_controller_ota_OtaController_UpgradeAms_func1();
                    /* WARNING: Could not recover jumptable at 0x0065ad60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/ota.OtaController.UpgradeAms.func3 @ 0065ae1c (size 364) */

void printerApi_controller_ota_OtaController_UpgradeAms_func3(void)

{
  double *pdVar1;
  int unaff_r7;
  int unaff_r10;
  double dVar2;
  double *pdStack_30;
  undefined4 uStack_10;
  undefined4 uStack_c;
  double *pdStack_8;
  undefined4 *puStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  uStack_c = *(undefined4 *)(unaff_r7 + 4);
  pdVar1 = *(double **)(unaff_r7 + 8);
  uStack_10 = DAT_0065af94;
  puStack_4 = &uStack_10;
  dVar2 = *DAT_0065af98;
  while( true ) {
    if (*DAT_0065afac <= dVar2) {
      (*(code *)*puStack_4)();
      return;
    }
    FUN_00018ad8();
    if ((char)pdStack_30 != '\0') break;
    FUN_0001eed8();
    *(undefined4 *)((int)pdVar1 + 4) = 0xf;
    *(undefined4 *)pdVar1 = DAT_0065afa0;
    pdStack_8 = pdVar1;
    FUN_0001eed8();
    *pdVar1 = dVar2;
    printerApi_service_k3c_wrapper___K3cwrapper__PublishDeviceOtaUpgradeStatus();
    FUN_000868dc();
    FUN_000953d0();
    dVar2 = dVar2 + *DAT_0065af98;
    pdStack_30 = pdVar1;
  }
  (*(code *)*puStack_4)();
  return;
}



/* printerApi/controller/ota.OtaController.UpgradeAms.func3.deferwrap1 @ 0065afb0 (size 92) */

void printerApi_controller_ota_OtaController_UpgradeAms_func3_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_8;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&local_8;
  }
  local_8 = *(undefined4 *)(unaff_r7 + 4);
  local_4 = 0xffffffff;
  FUN_000b5490();
  return;
}



/* printerApi/controller/ota.OtaController.UpgradeAms.func2 @ 0065b00c (size 252) */

void printerApi_controller_ota_OtaController_UpgradeAms_func2(void)

{
  undefined4 *puVar1;
  undefined4 extraout_r1;
  undefined4 *extraout_r2;
  undefined4 *puVar2;
  int unaff_r7;
  int unaff_r10;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_10;
  undefined4 uStack_c;
  undefined4 *puStack_8;
  undefined4 **ppuStack_4;
  
  while (puVar1 = DAT_0065b114, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  puStack_8 = *(undefined4 **)(unaff_r7 + 8);
  uStack_c = *(undefined4 *)(unaff_r7 + 4);
  puStack_10 = DAT_0065b114;
  ppuStack_4 = &puStack_10;
  printerApi_service_ota_Upgrade();
  *puStack_8 = uStack_20;
  puVar2 = puStack_8;
  if (*DAT_0065b11c != 0) {
    FUN_00098688();
    *puVar1 = extraout_r1;
    puVar1[1] = extraout_r2[1];
    uStack_1c = extraout_r1;
    puVar2 = extraout_r2;
  }
  puVar2[1] = uStack_1c;
  FUN_000172bc();
  (*(code *)*ppuStack_4)();
  return;
}



/* printerApi/controller/ota.OtaController.UpgradeAms.deferwrap1 @ 0065b180 (size 92) */

void printerApi_controller_ota_OtaController_UpgradeAms_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_10;
  }
  uStack_10 = *(undefined4 *)(unaff_r7 + 4);
  uStack_c = *(undefined4 *)(unaff_r7 + 8);
  FUN_00127c60();
  return;
}



/* printerApi/controller/ota.OtaController.FirmwareUpgrade @ 0065b1dc (size 284) */

/* WARNING: Removing unreachable block (ram,0x0065b20c) */

void printerApi_controller_ota_OtaController_FirmwareUpgrade(undefined4 param_1)

{
  undefined4 *puVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x24);
      *(undefined4 *)((int)register0x00000054 + -0x24) = unaff_lr;
      if (*(int *)((int)register0x00000054 + 0x18) == 0) {
        *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_0065b304;
        FUN_0001eed8();
        puVar1 = *(undefined4 **)((int)register0x00000054 + -0x1c);
        puVar1[1] = 0x1c;
        *puVar1 = PTR_DAT_0065b310;
        *(undefined **)((int)register0x00000054 + 0x28) = PTR_DAT_0065b30c;
        *(undefined4 **)((int)register0x00000054 + 0x2c) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x0065b2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x24))();
        return;
      }
      if (*(int *)((int)register0x00000054 + 0x20) == 0) {
        *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_0065b304;
        FUN_0001eed8();
        puVar1 = *(undefined4 **)((int)register0x00000054 + -0x1c);
        puVar1[1] = 0x16;
        *puVar1 = PTR_DAT_0065b308;
        *(undefined **)((int)register0x00000054 + 0x28) = PTR_DAT_0065b30c;
        *(undefined4 **)((int)register0x00000054 + 0x2c) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x0065b2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x24))();
        return;
      }
      *(undefined4 *)((int)register0x00000054 + -0x20) = *(undefined4 *)PTR_DAT_0065b2fc;
      FUN_0009bf4c();
      bVar3 = *(undefined **)((int)register0x00000054 + -0x1c) == PTR_DAT_0065b300;
      if (bVar3) {
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        *(undefined1 **)((int)register0x00000054 + -0x20) =
             (undefined1 *)((int)register0x00000054 + -4);
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + 0x14);
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)((int)register0x00000054 + 0x18);
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + 0x1c);
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_service_k3c_wrapper___K3cwrapper__FirmwareOtaStart();
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        *(undefined4 *)((int)register0x00000054 + 0x2c) =
             *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x0065b270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x24))();
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x20) =
           *(undefined **)((int)register0x00000054 + -0x1c);
      *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_0065b300;
      *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0065b314;
      param_1 = FUN_0001cb94();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x24);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x65b2f4;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/ota.OtaController.McuVersionQuery @ 0065b318 (size 936) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_ota_OtaController_McuVersionQuery(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined *extraout_r2;
  undefined *puVar3;
  int extraout_r3;
  int iVar4;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined *in_stack_ffffffb4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 *puStack_38;
  int iStack_34;
  undefined *puStack_14;
  undefined4 uStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  undefined4 *puStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x65b6bc;
    FUN_00096bb8();
  }
  puStack_4 = (undefined4 *)0x0;
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
  FUN_0009bf4c(0);
  if (in_stack_ffffffb4 != PTR_DAT_0065b6c8) {
    uVar2 = FUN_0001cb94();
    FUN_0004fb3c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0065b6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  uVar6 = 1;
  puVar3 = PTR_DAT_0065b6cc;
  puVar5 = PTR_DAT_0065b6d0;
  uVar2 = _UNK_0065b6d4;
  FUN_00155144();
  puStack_4 = puStack_38;
  FUN_00098a28(0,&puStack_14,uStack_3c,uStack_40,UNRECOVERED_JUMPTABLE,puVar3,puVar5,uVar2,uVar6);
  uStack_10 = 3;
  puStack_14 = PTR_DAT_0065b6d8;
  uStack_8 = 0xe;
  puStack_c = PTR_DAT_0065b6dc;
  printerApi_service_k3c_wrapper___K3cwrapper__QueryObjectsStatusWithContext();
  if (iStack_34 != 0) {
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0065b690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_0008b6b8();
  uVar2 = puStack_38[0x8b];
  uVar6 = puStack_38[0x8a];
  FUN_0008e7bc();
  puVar1 = (undefined4 *)0x2;
  _DAT_00000006 = uVar2;
  if (*(int *)PTR_DAT_0065b6e8 != 0) {
    puVar1 = (undefined4 *)FUN_00098688();
    *unaff_r8 = uVar6;
    unaff_r8[1] = *puVar1;
  }
  *puVar1 = uVar6;
  uVar2 = puStack_38[0x8d];
  uVar6 = puStack_38[0x8c];
  FUN_0008e7bc();
  puVar1 = (undefined4 *)0x2;
  _DAT_00000006 = uVar2;
  if (*(int *)PTR_DAT_0065b6e8 != 0) {
    puVar1 = (undefined4 *)FUN_00098688();
    *unaff_r8 = uVar6;
    unaff_r8[1] = *puVar1;
  }
  *puVar1 = uVar6;
  uVar2 = puStack_38[0x8f];
  uVar6 = puStack_38[0x8e];
  FUN_0008e7bc();
  puVar1 = (undefined4 *)0x2;
  _DAT_00000006 = uVar2;
  if (*(int *)PTR_DAT_0065b6e8 != 0) {
    puVar1 = (undefined4 *)FUN_00098688();
    *unaff_r8 = uVar6;
    unaff_r8[1] = *puVar1;
  }
  *puVar1 = uVar6;
  uVar6 = puStack_38[0x91];
  uVar2 = puStack_38[0x90];
  uVar7 = 0x19;
  puVar3 = PTR_DAT_0065b6f4;
  FUN_0008e7bc();
  puVar1 = (undefined4 *)0x2;
  _DAT_00000006 = uVar6;
  if (*(int *)PTR_DAT_0065b6e8 != 0) {
    puVar1 = (undefined4 *)FUN_00098688();
    *unaff_r8 = uVar2;
    unaff_r8[1] = *puVar1;
  }
  *puVar1 = uVar2;
  FUN_001707f4();
  *(undefined4 *)(in_stack_0000001c + 0x14) = uVar7;
  *(undefined4 *)(in_stack_0000001c + 0x18) = 2;
  iVar4 = in_stack_0000001c;
  if (*(int *)PTR_DAT_0065b6e8 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r2;
    unaff_r8[1] = *(undefined4 *)(extraout_r3 + 0x10);
    puVar3 = extraout_r2;
    iVar4 = extraout_r3;
  }
  *(undefined **)(iVar4 + 0x10) = puVar3;
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
  (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0065b66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/ota.OtaController.UpgradeVersionQuery @ 0065b6fc (size 1748) */

void printerApi_controller_ota_OtaController_UpgradeVersionQuery(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 extraout_r2;
  undefined *extraout_r2_00;
  undefined *extraout_r2_01;
  undefined *puVar4;
  undefined4 uVar5;
  undefined *extraout_r2_02;
  undefined *puVar6;
  undefined4 extraout_r2_03;
  int extraout_r3;
  int extraout_r3_00;
  int extraout_r3_01;
  int iVar7;
  int extraout_r3_02;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  int iStack_58;
  undefined4 *puStack_48;
  undefined *puStack_28;
  undefined4 uStack_24;
  undefined *puStack_20;
  undefined4 uStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  undefined *puStack_10;
  undefined4 uStack_c;
  undefined *puStack_8;
  undefined *puStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x65bdcc;
    FUN_00096bb8();
  }
  FUN_0008b6b8();
  puVar6 = PTR_s_version__d__M_<_g>_WPA2PSKgetLis_00774847_0x609_0065bdd8;
  puVar4 = PTR_DAT_0065bdd4;
  FUN_0008e7bc();
  puVar1 = PTR_SUB_0065bddc;
  *puStack_48 = PTR_SUB_0065bddc;
  puVar2 = puStack_48;
  if (*(int *)PTR_DAT_0065bde0 != 0) {
    puVar2 = (undefined4 *)FUN_00098678(puStack_48,puVar1,puStack_48[1]);
    *unaff_r8 = extraout_r2;
  }
  puVar2[1] = PTR_DAT_0065bde4;
  printerApi_common_config_LanPrintIsOpen();
  if (((uint)puVar4 & 0xff) != 0) {
    FUN_001707f4();
    *(undefined4 *)(in_stack_0000001c + 0x14) = 7;
    *(undefined4 **)(in_stack_0000001c + 0x18) = puStack_48;
    iVar7 = in_stack_0000001c;
    if (*(int *)PTR_DAT_0065bde0 != 0) {
      FUN_00098688();
      *unaff_r8 = extraout_r2_00;
      unaff_r8[1] = *(undefined4 *)(extraout_r3 + 0x10);
      puVar6 = extraout_r2_00;
      iVar7 = extraout_r3;
    }
    *(undefined **)(iVar7 + 0x10) = puVar6;
    puStack_8 = PTR_SUB_0065bddc;
    puStack_4 = PTR_DAT_0065bde8;
    printerApi_common_logger_Error();
    in_stack_00000020 = 0;
    in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x0065b800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  printerApi_controller_ota_OtaController_updateParam();
  if (iStack_58 != 0) {
    FUN_001707f4();
    *(undefined4 *)(in_stack_0000001c + 0x14) = 7;
    *(undefined4 **)(in_stack_0000001c + 0x18) = puStack_48;
    puVar4 = puVar6;
    iVar7 = in_stack_0000001c;
    if (*(int *)PTR_DAT_0065bde0 != 0) {
      FUN_00098688();
      *unaff_r8 = extraout_r2_01;
      unaff_r8[1] = *(undefined4 *)(extraout_r3_00 + 0x10);
      puVar4 = extraout_r2_01;
      iVar7 = extraout_r3_00;
    }
    *(undefined **)(iVar7 + 0x10) = puVar4;
    puStack_8 = (undefined *)0x0;
    if (iStack_58 != 0) {
      puStack_8 = *(undefined **)(iStack_58 + 4);
    }
    puStack_4 = puVar6;
    printerApi_common_logger_Errorf();
    in_stack_00000020 = 0;
    in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x0065b8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  printerApi_common_config_GetVersion();
  uVar3 = *(undefined4 *)(puVar4 + 0x44);
  uVar5 = *(undefined4 *)(puVar4 + 0x40);
  printerApi_common_config_VersionLessThan();
  puVar6 = PTR_DAT_0065bdd4;
  if (((uint)puStack_48 & 0xff) == 0) {
    FUN_001707f4();
    *(undefined4 *)(in_stack_0000001c + 0x14) = uVar3;
    *(undefined4 **)(in_stack_0000001c + 0x18) = puStack_48;
    uVar3 = uVar5;
    iVar7 = in_stack_0000001c;
    if (*(int *)PTR_DAT_0065bde0 != 0) {
      FUN_00098688();
      *unaff_r8 = extraout_r2_03;
      unaff_r8[1] = *(undefined4 *)(extraout_r3_02 + 0x10);
      uVar3 = extraout_r2_03;
      iVar7 = extraout_r3_02;
    }
    *(undefined4 *)(iVar7 + 0x10) = uVar3;
    printerApi_common_config_GetVersion();
    FUN_00098a28(0,&puStack_18,0,puVar6);
    FUN_0008a578();
    puStack_18 = PTR_SUB_0065bddc;
    uStack_14 = uVar5;
    FUN_0008a578();
    puStack_10 = PTR_SUB_0065bddc;
    uStack_c = uVar5;
    printerApi_common_logger_Errorf();
    FUN_00098a28(0,&puStack_28);
    uStack_24 = 10;
    puStack_28 = PTR_s__useremaintotal_stepace_drying_m_007765bd_0x298_0065be0c;
    uStack_1c = 9;
    puStack_20 = PTR_s__updatingorigin3mfunzippingcance_0077568d_0x6b7_0065be10;
    FUN_00159184();
    FUN_00127c60();
    in_stack_00000020 = 0;
    in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x0065bdc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_0008b6b8();
  FUN_0008a578();
  puVar6 = PTR_s_namepathsizedatetypetext_gco_acm_0077367d_0xf_0065bdf0;
  FUN_0008e7bc();
  *puStack_48 = PTR_SUB_0065bddc;
  puVar2 = puStack_48;
  if (*(int *)PTR_DAT_0065bde0 != 0) {
    puVar2 = (undefined4 *)FUN_00098688();
    *unaff_r8 = uVar5;
    unaff_r8[1] = puVar2[1];
  }
  puVar2[1] = uVar5;
  FUN_0008a578();
  puVar1 = PTR_s_version__d__M_<_g>_WPA2PSKgetLis_00774847_0x609_0065bdd8;
  FUN_0008e7bc();
  *puStack_48 = PTR_SUB_0065bddc;
  puVar2 = puStack_48;
  if (*(int *)PTR_DAT_0065bde0 != 0) {
    puVar2 = (undefined4 *)FUN_00098688();
    *unaff_r8 = puVar6;
    unaff_r8[1] = puVar2[1];
  }
  puVar2[1] = puVar6;
  FUN_0008a578();
  puVar6 = PTR_DAT_0065bdf4;
  FUN_0008e7bc();
  *puStack_48 = PTR_SUB_0065bddc;
  puVar2 = puStack_48;
  if (*(int *)PTR_DAT_0065bde0 != 0) {
    puVar2 = (undefined4 *)FUN_00098688();
    *unaff_r8 = puVar1;
    unaff_r8[1] = puVar2[1];
  }
  puVar2[1] = puVar1;
  FUN_0008a578();
  puVar1 = PTR_DAT_0065bdf8;
  FUN_0008e7bc();
  *puStack_48 = PTR_SUB_0065bddc;
  puVar2 = puStack_48;
  if (*(int *)PTR_DAT_0065bde0 != 0) {
    puVar2 = (undefined4 *)FUN_00098688();
    *unaff_r8 = puVar6;
    unaff_r8[1] = puVar2[1];
  }
  puVar2[1] = puVar6;
  FUN_0008a578();
  FUN_0008e7bc();
  *puStack_48 = PTR_SUB_0065bddc;
  puVar2 = puStack_48;
  if (*(int *)PTR_DAT_0065bde0 != 0) {
    puVar2 = (undefined4 *)FUN_00098688();
    *unaff_r8 = puVar1;
    unaff_r8[1] = puVar2[1];
  }
  puVar2[1] = puVar1;
  FUN_0001cec0();
  puVar6 = PTR_DAT_0065be00;
  FUN_0008e7bc();
  *puStack_48 = PTR_DAT_0065be04;
  puVar2 = puStack_48;
  if (*(int *)PTR_DAT_0065bde0 != 0) {
    puVar2 = (undefined4 *)FUN_00098688();
    *unaff_r8 = puVar4;
    unaff_r8[1] = puVar2[1];
  }
  puVar2[1] = puVar4;
  FUN_001707f4();
  *(undefined4 *)(in_stack_0000001c + 0x14) = 0xc;
  *(undefined4 **)(in_stack_0000001c + 0x18) = puStack_48;
  iVar7 = in_stack_0000001c;
  if (*(int *)PTR_DAT_0065bde0 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r2_02;
    unaff_r8[1] = *(undefined4 *)(extraout_r3_01 + 0x10);
    puVar6 = extraout_r2_02;
    iVar7 = extraout_r3_01;
  }
  *(undefined **)(iVar7 + 0x10) = puVar6;
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x0065bc78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/ota.OtaController.DownloadOtaPackage @ 0065be14 (size 3928) */

/* WARNING: Removing unreachable block (ram,0x0065c0f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_ota_OtaController_DownloadOtaPackage(void)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined **ppuVar3;
  uint uVar4;
  int extraout_r2;
  uint *extraout_r2_00;
  undefined **extraout_r2_01;
  undefined **extraout_r2_02;
  int extraout_r3;
  int iVar5;
  int extraout_r3_00;
  uint *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar6;
  uint *in_stack_00000014;
  undefined **in_stack_00000018;
  uint *in_stack_0000001c;
  undefined **in_stack_00000020;
  uint *in_stack_00000024;
  undefined **in_stack_00000028;
  uint *in_stack_0000002c;
  undefined **in_stack_00000030;
  int in_stack_00000034;
  undefined *in_stack_00000038;
  uint *in_stack_0000003c;
  undefined8 uStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_18c;
  undefined **ppuStack_188;
  uint uStack_184;
  uint uStack_180;
  int iStack_17c;
  undefined4 uStack_178;
  undefined1 uStack_16d;
  undefined4 *puStack_16c;
  uint uStack_168;
  undefined4 *puStack_164;
  undefined4 uStack_160;
  undefined4 *puStack_15c;
  undefined4 uStack_158;
  undefined **ppuStack_154;
  undefined **ppuStack_150;
  undefined1 auStack_14c [16];
  uint uStack_13c;
  uint uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined1 auStack_12c [16];
  undefined1 auStack_11c [8];
  double dStack_114;
  double dStack_10c;
  uint uStack_104;
  undefined4 *puStack_100;
  uint *puStack_fc;
  uint uStack_f8;
  uint *puStack_f4;
  uint *puStack_f0;
  uint *puStack_ec;
  undefined1 auStack_e8 [20];
  uint uStack_d4;
  uint uStack_d0;
  undefined1 uStack_cc;
  uint uStack_c0;
  uint uStack_bc;
  undefined **ppuStack_b8;
  undefined **ppuStack_a0;
  undefined **ppuStack_9c;
  undefined **ppuStack_98;
  undefined *puStack_94;
  undefined **ppuStack_90;
  undefined *puStack_8c;
  undefined **ppuStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 auStack_7c [13];
  undefined *puStack_48;
  undefined **ppuStack_44;
  undefined *puStack_40;
  undefined **ppuStack_3c;
  undefined *puStack_38;
  undefined **ppuStack_34;
  undefined **ppuStack_30;
  undefined *puStack_2c;
  uint **ppuStack_28;
  undefined ***pppuStack_24;
  undefined **ppuStack_20;
  undefined *puStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint *puStack_c;
  uint *puStack_8;
  undefined *puStack_4;
  
  while (auStack_11c <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x65cdc0;
    FUN_00096bb8();
  }
  puStack_4 = (undefined *)0x0;
  uStack_16d = 0;
  in_stack_00000038 = (undefined *)0x0;
  in_stack_0000003c = (uint *)0x0;
  uStack_198._0_4_ = (undefined **)&DAT_0000000b;
  printerApi_cloud_ReportWorkBusyStatus();
  puStack_4 = PTR_DAT_0065c684;
  uStack_16d = 1;
  FUN_0008b6b8();
  uStack_198._4_4_ = (undefined **)uStack_198;
  puStack_100 = (undefined **)uStack_198;
  uStack_198._0_4_ = (undefined **)PTR_DAT_0065c688;
  ppuStack_190 = (undefined **)PTR_s_version__d__M_<_g>_WPA2PSKgetLis_00774847_0x609_0065c68c;
  ppuStack_18c = (undefined **)0x7;
  FUN_0008e7bc();
  ppuStack_188[1] = (undefined *)0x0;
  ppuVar3 = ppuStack_188;
  if (*(int *)PTR_DAT_0065c690 != 0) {
    uVar6 = FUN_00098678(ppuStack_188,*ppuStack_188);
    ppuVar3 = (undefined **)uVar6;
    *unaff_r8 = (uint)((ulonglong)uVar6 >> 0x20);
  }
  *ppuVar3 = (undefined *)0x0;
  printerApi_controller_ota_OtaController_updateParam();
  if (uStack_198._4_4_ != (undefined **)0x0) {
    ppuStack_9c = ppuStack_190;
    ppuStack_150 = uStack_198._4_4_;
    uStack_198._0_4_ = (undefined **)PTR_DAT_0065ce28;
    uStack_198._4_4_ = (undefined **)puStack_100;
    FUN_001707f4();
    *(undefined ***)(in_stack_00000034 + 0x14) = ppuStack_18c;
    *(undefined ***)(in_stack_00000034 + 0x18) = ppuStack_188;
    iVar5 = in_stack_00000034;
    if (*(int *)PTR_DAT_0065cdd4 != 0) {
      FUN_00098688();
      *unaff_r8 = (uint)extraout_r2_02;
      unaff_r8[1] = *(uint *)(extraout_r3_00 + 0x10);
      ppuStack_190 = extraout_r2_02;
      iVar5 = extraout_r3_00;
    }
    *(undefined ***)(iVar5 + 0x10) = ppuStack_190;
    puStack_38 = (undefined *)0x0;
    if (ppuStack_150 != (undefined **)0x0) {
      puStack_38 = ppuStack_150[1];
    }
    ppuStack_34 = ppuStack_9c;
    uStack_198._0_4_ = (undefined **)PTR_DAT_0065ce2c;
    uStack_198._4_4_ = (undefined **)0x27;
    ppuStack_190 = &puStack_38;
    ppuStack_18c = (undefined **)0x1;
    ppuStack_188 = (undefined **)0x1;
    printerApi_common_logger_Errorf();
    in_stack_00000038 = (undefined *)0x0;
    in_stack_0000003c = (uint *)0x0;
    uStack_16d = 0;
    printerApi_controller_ota_OtaController_DownloadOtaPackage_deferwrap1();
                    /* WARNING: Could not recover jumptable at 0x0065cd8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  puStack_fc = (uint *)(undefined **)uStack_198;
  uVar4 = (uint)((undefined **)uStack_198)[0x15];
  if ((int)uVar4 < 4) {
    uVar4 = 0;
  }
  else {
    if (uVar4 < uVar4 - 4) goto LAB_0065cda8;
    uStack_198._0_4_ = (undefined **)((int)((undefined **)uStack_198)[0x14] + (uVar4 - 4));
    uStack_198._4_4_ = (undefined **)PTR_DAT_0065c694;
    ppuStack_190 = (undefined **)&DAT_00000004;
    FUN_000150d4();
    uVar4 = (uint)ppuStack_18c & 0xff;
  }
  if (uVar4 == 0) {
    uVar4 = puStack_fc[0x15];
    if ((int)uVar4 < 4) {
      uVar4 = 0;
LAB_0065bf80:
      uVar4 = uVar4 ^ 1;
      goto LAB_0065bf84;
    }
    if (uVar4 - 4 <= uVar4) {
      uStack_198._0_4_ = (undefined **)(puStack_fc[0x14] + (uVar4 - 4));
      uStack_198._4_4_ =
           (undefined **)PTR_s__swucodeInitkey2a_b_manyauthTime_0077367d_0x357_0065c698;
      ppuStack_190 = (undefined **)&DAT_00000004;
      FUN_000150d4();
      uVar4 = (uint)ppuStack_18c & 0xff;
      goto LAB_0065bf80;
    }
  }
  else {
    uVar4 = 0;
LAB_0065bf84:
    if (uVar4 != 0) {
      uStack_198._0_4_ = (undefined **)PTR_DAT_0065ce18;
      FUN_0001eed8();
      uStack_198._4_4_[1] = (undefined *)0x1f;
      *uStack_198._4_4_ = PTR_DAT_0065ce24;
      in_stack_00000038 = PTR_DAT_0065ce20;
      in_stack_0000003c = (uint *)uStack_198._4_4_;
      uStack_16d = 0;
      printerApi_controller_ota_OtaController_DownloadOtaPackage_deferwrap1();
                    /* WARNING: Could not recover jumptable at 0x0065ccb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    if ((undefined **)puStack_fc[0x13] == in_stack_00000018) {
      uStack_198._4_4_ = (undefined **)puStack_fc[0x12];
      uStack_198._0_4_ = (undefined **)in_stack_00000014;
      ppuStack_190 = in_stack_00000018;
      FUN_000150d4();
      uVar4 = (uint)ppuStack_18c & 0xff ^ 1;
    }
    else {
      uVar4 = 1;
    }
    if (uVar4 == 0) {
      if (in_stack_00000028 == (undefined **)puStack_fc[0x15]) {
        uStack_198._4_4_ = (undefined **)puStack_fc[0x14];
        uStack_198._0_4_ = (undefined **)in_stack_00000024;
        ppuStack_190 = in_stack_00000028;
        FUN_000150d4();
        uVar4 = (uint)ppuStack_18c & 0xff ^ 1;
      }
      else {
        uVar4 = 1;
      }
    }
    else {
      uVar4 = 1;
    }
    if (uVar4 == 0) {
      if ((undefined **)puStack_fc[0x11] == in_stack_00000020) {
        uStack_198._4_4_ = (undefined **)puStack_fc[0x10];
        uStack_198._0_4_ = (undefined **)in_stack_0000001c;
        ppuStack_190 = in_stack_00000020;
        FUN_000150d4();
        uVar4 = (uint)ppuStack_18c & 0xff ^ 1;
      }
      else {
        uVar4 = 1;
      }
    }
    else {
      uVar4 = 1;
    }
    if (uVar4 == 0) {
      if ((undefined **)puStack_fc[0x19] == in_stack_00000030) {
        uStack_198._4_4_ = (undefined **)puStack_fc[0x18];
        uStack_198._0_4_ = (undefined **)in_stack_0000002c;
        ppuStack_190 = in_stack_00000030;
        FUN_000150d4();
        uVar4 = (uint)ppuStack_18c & 0xff ^ 1;
      }
      else {
        uVar4 = 1;
      }
    }
    else {
      uVar4 = 1;
    }
    if (uVar4 != 0) {
      FUN_00098a28(0,&puStack_48,puStack_fc);
      uStack_198._0_4_ = (undefined **)PTR_DAT_0065ce0c;
      uStack_198._4_4_ = (undefined **)&stack0x00000004;
      FUN_0001cd7c();
      puStack_48 = PTR_DAT_0065ce0c;
      ppuStack_44 = ppuStack_190;
      uStack_198._0_4_ = (undefined **)PTR_DAT_0065ce10;
      uStack_198._4_4_ = (undefined **)(puStack_fc + 8);
      FUN_0001cd7c();
      puStack_40 = PTR_DAT_0065ce10;
      ppuStack_3c = ppuStack_190;
      uStack_198._0_4_ = (undefined **)PTR_DAT_0065ce14;
      uStack_198._4_4_ = (undefined **)&DAT_00000030;
      ppuStack_190 = &puStack_48;
      ppuStack_18c = (undefined **)0x2;
      ppuStack_188 = (undefined **)0x2;
      printerApi_common_logger_Errorf();
      uStack_198._0_4_ = (undefined **)PTR_DAT_0065ce18;
      FUN_0001eed8();
      uStack_198._4_4_[1] = (undefined *)0x1d;
      *uStack_198._4_4_ = PTR_DAT_0065ce1c;
      in_stack_00000038 = PTR_DAT_0065ce20;
      in_stack_0000003c = (uint *)uStack_198._4_4_;
      uStack_16d = 0;
      printerApi_controller_ota_OtaController_DownloadOtaPackage_deferwrap1();
                    /* WARNING: Could not recover jumptable at 0x0065cc78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    uStack_198._0_4_ = (undefined **)PTR_s__useremaintotal_stepace_drying_m_007765bd_0x298_0065c69c;
    uStack_198._4_4_ = (undefined **)0xa;
    printerApi_common_file_CreateDirIfNoexist();
    if (ppuStack_190 != (undefined **)0x0) {
      ppuStack_150 = ppuStack_190;
      puStack_38 = ppuStack_190[1];
      ppuStack_9c = ppuStack_18c;
      ppuStack_34 = ppuStack_18c;
      uStack_198._0_4_ = (undefined **)PTR_DAT_0065c6a0;
      uStack_198._4_4_ = (undefined **)0x41;
      ppuStack_190 = &puStack_38;
      ppuStack_18c = (undefined **)0x1;
      ppuStack_188 = (undefined **)0x1;
      printerApi_common_logger_Errorf();
      uStack_198._0_4_ = ppuStack_9c;
      (*(code *)ppuStack_150[3])();
      ppuStack_188 = ppuStack_190;
      ppuStack_18c = uStack_198._4_4_;
      uStack_198._0_4_ = (undefined **)0x0;
      uStack_198._4_4_ = (undefined **)PTR_DAT_0065c6a4;
      ppuStack_190 = (undefined **)0x26;
      FUN_000715a4();
      uStack_168 = uStack_180;
      uStack_f8 = uStack_184;
      uStack_198._0_4_ = (undefined **)PTR_DAT_0065c6a8;
      FUN_0001eed8();
      uStack_198._4_4_[1] = (undefined *)uStack_168;
      puVar1 = (uint *)uStack_198._4_4_;
      if (*(int *)PTR_DAT_0065c690 != 0) {
        puVar1 = (uint *)FUN_00098678();
        *unaff_r8 = uStack_f8;
      }
      *puVar1 = uStack_f8;
      in_stack_00000038 = PTR_DAT_0065c6ac;
      uStack_16d = 0;
      in_stack_0000003c = puVar1;
      printerApi_controller_ota_OtaController_DownloadOtaPackage_deferwrap1();
                    /* WARNING: Could not recover jumptable at 0x0065c1d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    uStack_198._0_4_ = (undefined **)PTR_s__useremaintotal_stepace_drying_m_007765bd_0x298_0065c69c;
    uStack_198._4_4_ = (undefined **)0xa;
    uVar2 = printerApi_common_file_DiskUsage();
    uVar2 = FUN_00098e0c(uVar2,&ppuStack_190,auStack_12c);
    FUN_00098e0c(uVar2,auStack_12c,auStack_14c);
    uVar4 = (int)((ulonglong)puStack_fc[0x16] * 10 >> 0x20) + puStack_fc[0x17] * 10;
    if (uStack_138 < uVar4 ||
        uStack_138 == uVar4 && uStack_13c < (uint)((ulonglong)puStack_fc[0x16] * 10)) {
      FUN_00098a28(0,&puStack_48);
      uStack_198._0_4_ = (undefined **)uStack_13c;
      uStack_198._4_4_ = (undefined **)uStack_138;
      FUN_0008a4bc();
      puStack_48 = PTR_DAT_0065cdf8;
      ppuStack_44 = ppuStack_190;
      uStack_198._0_4_ = (undefined **)puStack_fc[0x16];
      uStack_198._4_4_ = (undefined **)puStack_fc[0x17];
      FUN_0008a4bc();
      puStack_40 = PTR_DAT_0065cdfc;
      ppuStack_3c = ppuStack_190;
      uStack_198._0_4_ =
           (undefined **)PTR_s_ota_download_ota_package_fail_er_007a83c6_0x120_0065ce00;
      uStack_198._4_4_ = (undefined **)0x60;
      ppuStack_190 = &puStack_48;
      ppuStack_18c = (undefined **)0x2;
      ppuStack_188 = (undefined **)0x2;
      printerApi_common_logger_Errorf();
      in_stack_0000003c = *(uint **)PTR_DAT_0065ce04;
      in_stack_00000038 = PTR_DAT_0065ce08;
      uStack_16d = 0;
      printerApi_controller_ota_OtaController_DownloadOtaPackage_deferwrap1();
                    /* WARNING: Could not recover jumptable at 0x0065cbbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    FUN_00098a28(0,&puStack_1c);
    uStack_18 = 10;
    puStack_1c = PTR_s__useremaintotal_stepace_drying_m_007765bd_0x298_0065c69c;
    uStack_14 = *(undefined4 *)(extraout_r2 + 0x48);
    uStack_10 = *(undefined4 *)(extraout_r2 + 0x4c);
    uStack_198._0_4_ = &puStack_1c;
    uStack_198._4_4_ = (undefined **)0x2;
    ppuStack_190 = (undefined **)0x2;
    FUN_00159184();
    uStack_104 = (uint)ppuStack_18c;
    puStack_16c = ppuStack_188;
    uVar2 = FUN_0010cf30();
    FUN_00098e14(uVar2,&uStack_198,auStack_e8);
    FUN_00098a04(0,&uStack_d4);
    uStack_d4 = puStack_fc[0x16];
    uStack_d0 = puStack_fc[0x17];
    uStack_c0 = puStack_fc[0x18];
    uStack_bc = puStack_fc[0x19];
    uStack_cc = 1;
    uStack_198._0_4_ = (undefined **)PTR_SUB_0065c6b0;
    FUN_0001eed8();
    puStack_8 = (uint *)uStack_198._4_4_;
    uStack_198._4_4_[1] = (undefined *)0xa;
    *uStack_198._4_4_ = PTR_DAT_0065c6b4;
    uStack_198._0_4_ = (undefined **)PTR_SUB_0065c6b0;
    FUN_0001eed8();
    uVar4 = puStack_fc[0x12];
    uStack_198._4_4_[1] = (undefined *)puStack_fc[0x13];
    puStack_c = (uint *)uStack_198._4_4_;
    if (*(int *)PTR_DAT_0065c690 != 0) {
      FUN_00098678();
      *unaff_r8 = uVar4;
      puStack_c = extraout_r2_00;
    }
    *puStack_c = uVar4;
    uStack_198._0_4_ = (undefined **)PTR_DAT_0065c6b8;
    FUN_0001eed8();
    puStack_f4 = puStack_8;
    puStack_f0 = puStack_c;
    puStack_ec = (uint *)uStack_198._4_4_;
    uStack_198._0_4_ = *(undefined ***)PTR_DAT_0065c6bc;
    FUN_0009bf4c();
    if (uStack_198._4_4_ == (undefined **)PTR_DAT_0065c6c0) {
      ppuStack_20 = ppuStack_190;
      puStack_2c = PTR_printerApi_controller_ota_OtaController_DownloadOtaPackage_func1_0065c6c4;
      ppuStack_28 = &puStack_f4;
      pppuStack_24 = &ppuStack_20;
      ppuStack_b8 = &puStack_2c;
      uVar2 = FUN_00098a04(0,auStack_7c);
      FUN_00098dd4(uVar2,&uStack_d4,auStack_7c);
      ppuStack_190 = (undefined **)puStack_fc[0x14];
      ppuStack_18c = (undefined **)puStack_fc[0x15];
      uStack_198._0_4_ = (undefined **)uStack_104;
      uStack_198._4_4_ = (undefined **)puStack_16c;
      ppuStack_188 = (undefined **)auStack_7c;
      uStack_184 = 1;
      uStack_180 = 1;
      printerApi_common_file_DownloadFile();
      if (iStack_17c == 0) {
        uStack_198._0_4_ = (undefined **)uStack_104;
        uStack_198._4_4_ = (undefined **)puStack_16c;
        printerApi_common_file_FileMD5();
        ppuStack_154 = ppuStack_18c;
        uStack_198._0_4_ = (undefined **)puStack_fc[0x18];
        uStack_198._4_4_ = (undefined **)puStack_fc[0x19];
        ppuStack_a0 = ppuStack_190;
        FUN_00148180();
        if (ppuStack_18c == ppuStack_154) {
          uStack_198._0_4_ = ppuStack_a0;
          uStack_198._4_4_ = ppuStack_190;
          ppuStack_190 = ppuStack_154;
          FUN_000150d4();
          if (((uint)ppuStack_18c & 0xff) != 0) {
            FUN_0008b6b8();
            ppuStack_98 = (undefined **)uStack_198;
            uStack_198._0_4_ = (undefined **)puStack_fc[0x12];
            uStack_198._4_4_ = (undefined **)puStack_fc[0x13];
            FUN_0008a578();
            ppuStack_30 = ppuStack_190;
            uStack_198._0_4_ = (undefined **)PTR_DAT_0065cdc8;
            uStack_198._4_4_ = ppuStack_98;
            ppuStack_190 = (undefined **)
                           PTR_s_namepathsizedatetypetext_gco_acm_0077367d_0xf_0065cdcc;
            ppuStack_18c = (undefined **)0x4;
            FUN_0008e7bc();
            ppuVar3 = ppuStack_188;
            *ppuStack_188 = PTR_SUB_0065cdd0;
            if (*(int *)PTR_DAT_0065cdd4 != 0) {
              ppuVar3 = (undefined **)FUN_00098688();
              *unaff_r8 = (uint)ppuStack_30;
              unaff_r8[1] = (uint)ppuVar3[1];
            }
            ppuVar3[1] = (undefined *)ppuStack_30;
            uStack_198._0_4_ = (undefined **)puStack_fc[0x10];
            uStack_198._4_4_ = (undefined **)puStack_fc[0x11];
            FUN_0008a578();
            ppuStack_30 = ppuStack_190;
            uStack_198._0_4_ = (undefined **)PTR_DAT_0065cdc8;
            uStack_198._4_4_ = ppuStack_98;
            ppuStack_190 = (undefined **)
                           PTR_s_version__d__M_<_g>_WPA2PSKgetLis_00774847_0x609_0065cdd8;
            ppuStack_18c = (undefined **)0x7;
            FUN_0008e7bc();
            *ppuStack_188 = PTR_SUB_0065cdd0;
            ppuVar3 = ppuStack_188;
            if (*(int *)PTR_DAT_0065cdd4 != 0) {
              ppuVar3 = (undefined **)FUN_00098688();
              *unaff_r8 = (uint)ppuStack_30;
              unaff_r8[1] = (uint)ppuVar3[1];
            }
            ppuVar3[1] = (undefined *)ppuStack_30;
            uStack_198._0_4_ = (undefined **)puStack_fc[0x14];
            uStack_198._4_4_ = (undefined **)puStack_fc[0x15];
            FUN_0008a578();
            ppuStack_30 = ppuStack_190;
            uStack_198._0_4_ = (undefined **)PTR_DAT_0065cdc8;
            uStack_198._4_4_ = ppuStack_98;
            ppuStack_190 = (undefined **)PTR_DAT_0065cddc;
            ppuStack_18c = (undefined **)0x3;
            FUN_0008e7bc();
            *ppuStack_188 = PTR_SUB_0065cdd0;
            ppuVar3 = ppuStack_188;
            if (*(int *)PTR_DAT_0065cdd4 != 0) {
              ppuVar3 = (undefined **)FUN_00098688();
              *unaff_r8 = (uint)ppuStack_30;
              unaff_r8[1] = (uint)ppuVar3[1];
            }
            ppuVar3[1] = (undefined *)ppuStack_30;
            uStack_198._0_4_ = (undefined **)puStack_fc[0x18];
            uStack_198._4_4_ = (undefined **)puStack_fc[0x19];
            FUN_0008a578();
            ppuStack_30 = ppuStack_190;
            uStack_198._0_4_ = (undefined **)PTR_DAT_0065cdc8;
            uStack_198._4_4_ = ppuStack_98;
            ppuStack_190 = (undefined **)PTR_DAT_0065cde0;
            ppuStack_18c = (undefined **)0x3;
            FUN_0008e7bc();
            *ppuStack_188 = PTR_SUB_0065cdd0;
            ppuVar3 = ppuStack_188;
            if (*(int *)PTR_DAT_0065cdd4 != 0) {
              ppuVar3 = (undefined **)FUN_00098688();
              *unaff_r8 = (uint)ppuStack_30;
              unaff_r8[1] = (uint)ppuVar3[1];
            }
            ppuVar3[1] = (undefined *)ppuStack_30;
            FUN_00098e14(ppuVar3,auStack_e8,&uStack_198);
            FUN_0010327c();
            uStack_134 = uStack_184;
            uStack_130 = uStack_180;
            uStack_198._0_4_ = (undefined **)uStack_184;
            uStack_198._4_4_ = (undefined **)uStack_180;
            ppuStack_190 = _UNK_0065cde4;
            ppuStack_18c = (undefined **)0x0;
            FUN_00086d18();
            puStack_164 = ppuStack_188;
            uStack_160 = uStack_184;
            uStack_198._0_4_ = (undefined **)uStack_134;
            uStack_198._4_4_ = (undefined **)uStack_130;
            ppuStack_190 = _UNK_0065cde4;
            ppuStack_18c = (undefined **)0x0;
            FUN_00086ea4();
            puStack_15c = ppuStack_188;
            uStack_158 = uStack_184;
            uStack_198._0_4_ = (undefined **)puStack_164;
            uStack_198._4_4_ = (undefined **)uStack_160;
            FUN_0008695c();
            dStack_114 = (double)CONCAT44(ppuStack_18c,ppuStack_190);
            uStack_198._0_4_ = (undefined **)puStack_15c;
            uStack_198._4_4_ = (undefined **)uStack_158;
            FUN_0008695c();
            dStack_10c = dStack_114 +
                         (double)CONCAT44(ppuStack_18c,ppuStack_190) / *(double *)PTR_DAT_0065cde8;
            uStack_198 = dStack_10c;
            FUN_0008a4bc();
            ppuStack_30 = ppuStack_190;
            uStack_198._0_4_ = (undefined **)PTR_DAT_0065cdc8;
            uStack_198._4_4_ = ppuStack_98;
            ppuStack_190 = (undefined **)
                           PTR_s_cost_swucodeInitkey2a_b_manyauth_0077367d_0x353_0065cdec;
            ppuStack_18c = (undefined **)0x4;
            FUN_0008e7bc();
            *ppuStack_188 = PTR_DAT_0065cdf0;
            ppuVar3 = ppuStack_188;
            if (*(int *)PTR_DAT_0065cdd4 != 0) {
              ppuVar3 = (undefined **)FUN_00098688();
              *unaff_r8 = (uint)ppuStack_30;
              unaff_r8[1] = (uint)ppuVar3[1];
            }
            ppuVar3[1] = (undefined *)ppuStack_30;
            uStack_198._0_4_ = (undefined **)uStack_104;
            uStack_198._4_4_ = (undefined **)puStack_16c;
            FUN_0008a578();
            ppuStack_30 = ppuStack_190;
            uStack_198._0_4_ = (undefined **)PTR_DAT_0065cdc8;
            uStack_198._4_4_ = ppuStack_98;
            ppuStack_190 = (undefined **)PTR_DAT_0065cdf4;
            ppuStack_18c = (undefined **)0x4;
            FUN_0008e7bc();
            *ppuStack_188 = PTR_SUB_0065cdd0;
            ppuVar3 = ppuStack_188;
            if (*(int *)PTR_DAT_0065cdd4 != 0) {
              ppuVar3 = (undefined **)FUN_00098688();
              *unaff_r8 = (uint)ppuStack_30;
              unaff_r8[1] = (uint)ppuVar3[1];
            }
            ppuVar3[1] = (undefined *)ppuStack_30;
            uStack_198._0_4_ = (undefined **)PTR_DAT_0065cdc8;
            uStack_198._4_4_ = ppuStack_98;
            FUN_001707f4();
            *(undefined ***)(in_stack_00000034 + 0x14) = ppuStack_18c;
            *(undefined ***)(in_stack_00000034 + 0x18) = ppuStack_188;
            ppuVar3 = ppuStack_190;
            iVar5 = in_stack_00000034;
            if (*(int *)PTR_DAT_0065cdd4 != 0) {
              FUN_00098688();
              *unaff_r8 = (uint)extraout_r2_01;
              unaff_r8[1] = *(uint *)(extraout_r3 + 0x10);
              ppuVar3 = extraout_r2_01;
              iVar5 = extraout_r3;
            }
            *(undefined ***)(iVar5 + 0x10) = ppuVar3;
            in_stack_00000038 = (undefined *)0x0;
            in_stack_0000003c = (uint *)0x0;
            uStack_16d = 0;
            printerApi_controller_ota_OtaController_DownloadOtaPackage_deferwrap1();
                    /* WARNING: Could not recover jumptable at 0x0065cb18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE_00)();
            return;
          }
        }
        FUN_00098a28(0,&puStack_48,ppuStack_154);
        uStack_198._0_4_ = ppuStack_a0;
        FUN_0008a578();
        puStack_48 = PTR_SUB_0065c6b0;
        ppuStack_44 = ppuStack_190;
        uStack_198._0_4_ = (undefined **)puStack_fc[0x18];
        uStack_198._4_4_ = (undefined **)puStack_fc[0x19];
        FUN_0008a578();
        puStack_40 = PTR_SUB_0065c6b0;
        ppuStack_3c = ppuStack_190;
        uStack_198._0_4_ = (undefined **)PTR_DAT_0065c6d4;
        uStack_198._4_4_ = (undefined **)&DAT_0000002f;
        ppuStack_190 = &puStack_48;
        ppuStack_18c = (undefined **)0x2;
        ppuStack_188 = (undefined **)0x2;
        printerApi_common_logger_Errorf();
        uStack_198._0_4_ = (undefined **)PTR_DAT_0065c6a8;
        FUN_0001eed8();
        uStack_198._4_4_[1] = (undefined *)0x15;
        *uStack_198._4_4_ = PTR_DAT_0065c6d8;
        in_stack_00000038 = PTR_DAT_0065c6ac;
        in_stack_0000003c = (uint *)uStack_198._4_4_;
        uStack_16d = 0;
        printerApi_controller_ota_OtaController_DownloadOtaPackage_deferwrap1();
                    /* WARNING: Could not recover jumptable at 0x0065c680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
      ppuStack_9c = (undefined **)uStack_178;
      ppuStack_150 = (undefined **)iStack_17c;
      FUN_00098a20(0,&puStack_94);
      uStack_198._0_4_ = (undefined **)uStack_104;
      uStack_198._4_4_ = (undefined **)puStack_16c;
      FUN_0008a578();
      puStack_94 = PTR_SUB_0065c6b0;
      ppuStack_90 = ppuStack_190;
      uStack_198._0_4_ = (undefined **)puStack_fc[0x14];
      uStack_198._4_4_ = (undefined **)puStack_fc[0x15];
      FUN_0008a578();
      puStack_8c = PTR_SUB_0065c6b0;
      ppuStack_88 = ppuStack_190;
      if (ppuStack_150 == (undefined **)0x0) {
        uStack_84 = 0;
      }
      else {
        uStack_84 = *(undefined4 *)((int)ppuStack_150 + 4);
      }
      uStack_80 = ppuStack_9c;
      uStack_198._0_4_ = (undefined **)PTR_DAT_0065c6c8;
      uStack_198._4_4_ = (undefined **)0x37;
      ppuStack_190 = &puStack_94;
      ppuStack_18c = (undefined **)0x3;
      ppuStack_188 = (undefined **)0x3;
      printerApi_common_logger_Errorf();
      uStack_198._0_4_ = ppuStack_150;
      uStack_198._4_4_ = ppuStack_9c;
      func_0x00122b08();
      if ((char)ppuStack_190 != '\0') {
        in_stack_0000003c = *(uint **)PTR_DAT_0065c6cc;
        in_stack_00000038 = PTR_DAT_0065c6d0;
        uStack_16d = 0;
        printerApi_controller_ota_OtaController_DownloadOtaPackage_deferwrap1();
                    /* WARNING: Could not recover jumptable at 0x0065c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
      in_stack_00000038 = (undefined *)ppuStack_150;
      in_stack_0000003c = (uint *)ppuStack_9c;
      uStack_16d = 0;
      printerApi_controller_ota_OtaController_DownloadOtaPackage_deferwrap1();
                    /* WARNING: Could not recover jumptable at 0x0065c550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    uStack_198._0_4_ = uStack_198._4_4_;
    uStack_198._4_4_ = (undefined **)PTR_DAT_0065c6c0;
    ppuStack_190 = (undefined **)PTR_DAT_0065ce30;
    FUN_0001cb94();
  }
  FUN_00098758();
LAB_0065cda8:
  uVar2 = FUN_00098758();
  FUN_0004fb3c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0065cdb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/ota.OtaController.DownloadOtaPackage.func1 @ 0065ce34 (size 168) */

void printerApi_controller_ota_OtaController_DownloadOtaPackage_func1(void)

{
  int iVar1;
  int unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined8 in_stack_00000004;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined8 *puStack_1c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  iVar1 = *(int *)(unaff_r7 + 4);
  FUN_0001eed8();
  *puStack_1c = in_stack_00000004;
  if (*DAT_0065cee4 != 0) {
    puStack_1c = (undefined8 *)FUN_00098688();
    *unaff_r8 = puStack_1c;
    unaff_r8[1] = *(undefined4 *)(iVar1 + 8);
  }
  *(undefined8 **)(iVar1 + 8) = puStack_1c;
  printerApi_service_k3c_wrapper___K3cwrapper__PublishDeviceOtaDownloadStatus();
  return;
}



/* printerApi/controller/ota.OtaController.Upgrade @ 0065cee8 (size 1956) */

/* WARNING: Removing unreachable block (ram,0x0065d4cc) */
/* WARNING: Removing unreachable block (ram,0x0065d47c) */
/* WARNING: Removing unreachable block (ram,0x0065d59c) */
/* WARNING: Removing unreachable block (ram,0x0065d608) */
/* WARNING: Removing unreachable block (ram,0x0065d600) */
/* WARNING: Removing unreachable block (ram,0x0065d614) */
/* WARNING: Removing unreachable block (ram,0x0065d4b0) */
/* WARNING: Removing unreachable block (ram,0x0065d4f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_ota_OtaController_Upgrade(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *extraout_r1;
  int *piVar4;
  int extraout_r2;
  int *extraout_r2_00;
  int *extraout_r2_01;
  int *extraout_r3;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000014;
  int in_stack_00000018;
  int *in_stack_00000020;
  int in_stack_00000024;
  undefined *puVar5;
  int *piStack_b0;
  undefined1 *puStack_ac;
  undefined1 *puStack_a8;
  undefined *apuStack_58 [3];
  undefined *puStack_4c;
  undefined4 uStack_48;
  undefined *puStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined *puStack_34;
  undefined1 *puStack_30;
  undefined *puStack_2c;
  undefined1 *puStack_28;
  undefined *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  int *piStack_c;
  undefined *puStack_8;
  undefined **ppuStack_4;
  
  while (&iStack_38 <= *(int **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x65d688;
    FUN_00096bb8();
  }
  puStack_8 = (undefined *)0x0;
  ppuStack_4 = (undefined **)0x0;
  in_stack_00000020 = (int *)0x0;
  in_stack_00000024 = 0;
  printerApi_cloud_ReportWorkBusyStatus();
  puStack_8 = PTR_DAT_0065d690;
  FUN_0001eed8();
  piStack_c = piStack_b0;
  printerApi_controller_ota_OtaController_updateParam();
  *piStack_c = (int)piStack_b0;
  piVar4 = piStack_c;
  if (*(int *)PTR_DAT_0065d698 != 0) {
    piStack_b0 = (int *)FUN_00098688();
    *unaff_r8 = extraout_r2;
    unaff_r8[1] = extraout_r3[1];
    puStack_ac = (undefined1 *)extraout_r2;
    piVar4 = extraout_r3;
  }
  piVar4[1] = (int)puStack_ac;
  if (piStack_b0 != (int *)0x0) {
    in_stack_00000020 = piStack_b0;
    printerApi_controller_ota_OtaController_Upgrade_deferwrap1();
                    /* WARNING: Could not recover jumptable at 0x0065d65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_00098a28(0,&puStack_4c);
  uStack_48 = 10;
  puStack_4c = PTR_s__useremaintotal_stepace_drying_m_007765bd_0x298_0065d69c;
  uStack_40 = 9;
  puStack_44 = PTR_s__updatingorigin3mfunzippingcance_0077568d_0x6b7_0065d6a0;
  FUN_00159184();
  apuStack_58[0] = PTR_printerApi_controller_ota_OtaController_Upgrade_deferwrap2_0065d6a4;
  ppuStack_4 = apuStack_58;
  printerApi_common_file_FileExist();
  printerApi_common_file_FileMD5();
  FUN_00148180();
  puStack_ac = puStack_a8;
  FUN_000150d4();
  iVar1 = in_stack_00000018;
  if ((char)puStack_a8 == '\0') {
    puStack_24 = (undefined *)0x0;
    uStack_20 = 0;
    FUN_0008a578();
    puStack_24 = PTR_SUB_0065d6a8;
    printerApi_common_logger_Errorf();
    FUN_0001eed8();
    _DAT_00000023 = 0x1d;
    _DAT_0000001f = PTR_DAT_0065d6b4;
    in_stack_00000020 = (int *)PTR_DAT_0065d6b8;
    in_stack_00000024 = 0x1f;
    (*(code *)*ppuStack_4)();
    printerApi_controller_ota_OtaController_Upgrade_deferwrap1();
                    /* WARNING: Could not recover jumptable at 0x0065d13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  internal_filepathlite_Dir();
  FUN_0001eed8();
  iStack_10 = iVar1;
  FUN_00017058();
  piStack_b0 = (int *)0x2;
  FUN_000b5490();
  puVar5 = PTR_DAT_0065d6c4;
  FUN_0001eed8();
  iStack_14 = 2;
  puRam00000002 = PTR_printerApi_controller_ota_OtaController_Upgrade_func1_0065d6c8;
  uVar3 = 0xe;
  if (*(int *)PTR_DAT_0065d698 != 0) {
    uStack_18 = 0xe;
    iVar1 = FUN_000986c8();
    *unaff_r8 = iStack_10;
    unaff_r8[1] = (int)piStack_c;
    unaff_r8[2] = (int)puStack_a8;
    unaff_r8[3] = *(int *)(iVar1 + 0x24);
    unaff_r8[4] = (int)puStack_a8;
    unaff_r8[5] = *(int *)(iVar1 + 0x2c);
    puStack_ac = &stack0x00000004;
    puVar5 = PTR_DAT_0065d6cc;
    FUN_00022914();
    uVar3 = uStack_18;
    piStack_b0 = extraout_r2_00;
  }
  *(int *)(iStack_14 + 4) = iStack_10;
  *(int **)(iStack_14 + 8) = piStack_c;
  FUN_00098e0c(iStack_14,&stack0x00000004,uVar3,iStack_10,UNRECOVERED_JUMPTABLE,puVar5);
  *(undefined1 **)(iStack_14 + 0x28) = puStack_a8;
  *(undefined1 **)(iStack_14 + 0x24) = puStack_a8;
  *(undefined1 **)(iStack_14 + 0x2c) = puStack_a8;
  FUN_0005e168();
  FUN_0009bf4c();
  if (piStack_b0 != (int *)PTR_DAT_0065d6d4) {
    uVar3 = FUN_0001cb94();
    FUN_0004fb3c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0065d67c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  puStack_1c = puStack_ac;
  FUN_0001eed8();
  piVar4 = piStack_b0;
  if (*(int *)PTR_DAT_0065d698 != 0) {
    FUN_00098678();
    *unaff_r8 = (int)puStack_1c;
    piVar4 = extraout_r1;
  }
  *piVar4 = (int)puStack_1c;
  FUN_0001eed8();
  *piStack_b0 = (int)PTR_printerApi_controller_ota_OtaController_Upgrade_func2_0065d6e0;
  piVar2 = piStack_b0;
  if (*(int *)PTR_DAT_0065d698 != 0) {
    piVar2 = (int *)FUN_00098698();
    *unaff_r8 = iStack_10;
    unaff_r8[1] = (int)puStack_a8;
    unaff_r8[2] = (int)piVar4;
  }
  piVar2[1] = iStack_10;
  piVar2[2] = (int)puStack_a8;
  piVar2[3] = (int)piVar4;
  FUN_0005e168();
  FUN_000b5644();
  if (*piStack_c != 0) {
    FUN_00098a20(0,&uStack_3c,piStack_c);
    uStack_3c = 0;
    if (*extraout_r2_01 != 0) {
      uStack_3c = *(undefined4 *)(*extraout_r2_01 + 4);
    }
    iStack_38 = extraout_r2_01[1];
    FUN_0008a578();
    puStack_34 = PTR_SUB_0065d6a8;
    puStack_30 = puStack_ac;
    FUN_0008a578();
    puStack_2c = PTR_SUB_0065d6a8;
    puStack_28 = puStack_ac;
    printerApi_common_logger_Errorf();
    in_stack_00000020 = (int *)*piStack_c;
    in_stack_00000024 = piStack_c[1];
    (*(code *)*ppuStack_4)();
    printerApi_controller_ota_OtaController_Upgrade_deferwrap1();
                    /* WARNING: Could not recover jumptable at 0x0065d42c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_0001eed8();
  piStack_b0[0] = 0;
  piStack_b0[1] = 0x3ff00000;
  printerApi_service_k3c_wrapper___K3cwrapper__PublishDeviceOtaUpgradeStatus();
  FUN_001283bc();
  in_stack_00000020 = (int *)0x0;
  in_stack_00000024 = 0;
  (*(code *)*ppuStack_4)();
  printerApi_controller_ota_OtaController_Upgrade_deferwrap1();
                    /* WARNING: Could not recover jumptable at 0x0065d598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/ota.OtaController.Upgrade.func2 @ 0065d700 (size 328) */

void printerApi_controller_ota_OtaController_Upgrade_func2(void)

{
  double *pdVar1;
  int unaff_r7;
  int unaff_r10;
  double dVar2;
  double *pdStack_2c;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 *puStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  uStack_8 = *(undefined4 *)(unaff_r7 + 4);
  pdVar1 = *(double **)(unaff_r7 + 8);
  uStack_c = DAT_0065d854;
  puStack_4 = &uStack_c;
  dVar2 = *DAT_0065d858;
  while( true ) {
    if (*DAT_0065d864 <= dVar2) {
      (*(code *)*puStack_4)();
      return;
    }
    FUN_00018ad8();
    if ((char)pdStack_2c != '\0') break;
    FUN_0001eed8();
    *pdVar1 = dVar2;
    printerApi_service_k3c_wrapper___K3cwrapper__PublishDeviceOtaUpgradeStatus();
    FUN_000868dc();
    FUN_000953d0();
    dVar2 = dVar2 + *DAT_0065d858;
    pdStack_2c = pdVar1;
  }
  (*(code *)*puStack_4)();
  return;
}



/* printerApi/controller/ota.OtaController.Upgrade.func2.deferwrap1 @ 0065d868 (size 92) */

void printerApi_controller_ota_OtaController_Upgrade_func2_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_8;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&local_8;
  }
  local_8 = *(undefined4 *)(unaff_r7 + 4);
  local_4 = 0xffffffff;
  FUN_000b5490();
  return;
}



/* printerApi/controller/ota.OtaController.Upgrade.func1 @ 0065d8c4 (size 276) */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void printerApi_controller_ota_OtaController_Upgrade_func1(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 extraout_r1;
  undefined4 *extraout_r2;
  int unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  while (pcVar1 = DAT_0065d9e4, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  puVar2 = *(undefined4 **)(unaff_r7 + 8);
  printerApi_common_config_Unzippd();
  printerApi_service_ota_Upgrade();
  *puVar2 = uStack_2c;
  if (*DAT_0065d9e8 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r1;
    unaff_r8[1] = extraout_r2[1];
    uStack_28 = extraout_r1;
    puVar2 = extraout_r2;
  }
  puVar2[1] = uStack_28;
  FUN_000172bc();
  (*pcVar1)();
  return;
}



/* printerApi/controller/ota.OtaController.Upgrade.func1.deferwrap1 @ 0065d9f0 (size 92) */

void printerApi_controller_ota_OtaController_Upgrade_func1_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_8;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&local_8;
  }
  local_8 = *(undefined4 *)(unaff_r7 + 4);
  local_4 = 0xffffffff;
  FUN_000b5490();
  return;
}



/* printerApi/controller/ota.OtaController.Upgrade.deferwrap2 @ 0065da4c (size 92) */

void printerApi_controller_ota_OtaController_Upgrade_deferwrap2(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_10;
  }
  uStack_10 = *(undefined4 *)(unaff_r7 + 4);
  uStack_c = *(undefined4 *)(unaff_r7 + 8);
  FUN_00127c60();
  return;
}



/* printerApi/controller/ota.OtaController.updateParam @ 0065daa8 (size 300) */

/* WARNING: Removing unreachable block (ram,0x0065db7c) */

void printerApi_controller_ota_OtaController_updateParam(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 uStack_2c;
  int iStack_28;
  undefined *puStack_14;
  undefined4 uStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x65dbd0;
    FUN_00096bb8();
  }
  FUN_00098a28(0,&puStack_14);
  uStack_10 = 10;
  puStack_14 = PTR_s__useremaintotal_stepace_drying_m_007765bd_0x298_0065dbd8;
  uStack_8 = 9;
  puStack_c = PTR_s__updatingorigin3mfunzippingcance_0077568d_0x6b7_0065dbdc;
  FUN_00159184();
  FUN_00125de4();
  if (iStack_28 != 0) {
    in_stack_00000004 = 0;
                    /* WARNING: Could not recover jumptable at 0x0065dbc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_0001eed8();
  uStack_4 = uStack_2c;
  FUN_0016a168();
  in_stack_00000004 = uStack_4;
  in_stack_00000008 = 0;
  in_stack_0000000c = 0;
                    /* WARNING: Could not recover jumptable at 0x0065dbac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/ota.OtaController.Upgrade.deferwrap1 @ 0065dbe8 (size 84) */

void printerApi_controller_ota_OtaController_Upgrade_deferwrap1(void)

{
  int *piVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x65dc1c;
    FUN_00096bb8();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_4;
  }
  uStack_4 = 0xc;
  printerApi_cloud_ReportWorkFreeStatus();
                    /* WARNING: Could not recover jumptable at 0x0065dc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/ota.OtaController.DownloadOtaPackage.deferwrap1 @ 0065dc3c (size 84) */

void printerApi_controller_ota_OtaController_DownloadOtaPackage_deferwrap1(void)

{
  int *piVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x65dc70;
    FUN_00096bb8();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_4;
  }
  uStack_4 = 0xc;
  printerApi_cloud_ReportWorkFreeStatus();
                    /* WARNING: Could not recover jumptable at 0x0065dc64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/ota.OtaController.UpgradeAms.func1 @ 0065dc90 (size 140) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_ota_OtaController_UpgradeAms_func1(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int iStack_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x65dd18;
    FUN_00096bb8();
  }
  internal_runtime_atomic_Load();
  if (iStack_10 == 0xf) {
    printerApi_common_logger_RedDebugf();
    printerApi_service_store_setPrinterState();
  }
  printerApi_cloud_ReportWorkFreeStatus();
                    /* WARNING: Could not recover jumptable at 0x0065dd0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/ota.(*OtaController).DownloadOtaAmsPackage @ 0065dd28 (size 132) */

void printerApi_controller_ota___OtaController__DownloadOtaAmsPackage(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x40) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x3c);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098ddc(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x3c));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x38);
        printerApi_controller_ota_OtaController_DownloadOtaAmsPackage();
        *(undefined4 *)((int)register0x00000054 + 0x3c) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x40) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0065dd78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x40))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x40);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x65dd8c;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/ota.(*OtaController).DownloadOtaPackage @ 0065ddac (size 132) */

void printerApi_controller_ota___OtaController__DownloadOtaPackage(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x40) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x3c);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098ddc(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x3c));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x38);
        printerApi_controller_ota_OtaController_DownloadOtaPackage();
        *(undefined4 *)((int)register0x00000054 + 0x3c) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x40) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0065ddfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x40))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x40);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x65de10;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/ota.(*OtaController).FirmwareUpgrade @ 0065de30 (size 132) */

void printerApi_controller_ota___OtaController__FirmwareUpgrade(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x30);
      *(undefined4 *)((int)register0x00000054 + -0x30) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x2c);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098dfc(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x2c));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x28);
        printerApi_controller_ota_OtaController_FirmwareUpgrade();
        *(undefined4 *)((int)register0x00000054 + 0x2c) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x30) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0065de80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x30))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x30);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x65de94;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/ota.(*OtaController).McuVersionQuery @ 0065deb4 (size 132) */

void printerApi_controller_ota___OtaController__McuVersionQuery(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_ota_OtaController_McuVersionQuery();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0065df04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x65df18;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/ota.(*OtaController).Upgrade @ 0065df38 (size 132) */

void printerApi_controller_ota___OtaController__Upgrade(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_ota_OtaController_Upgrade();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0065df88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x65df9c;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/ota.(*OtaController).UpgradeAms @ 0065dfbc (size 132) */

void printerApi_controller_ota___OtaController__UpgradeAms(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_ota_OtaController_UpgradeAms();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0065e00c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x65e020;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/ota.(*OtaController).UpgradeAmsVersionQuery @ 0065e040 (size 132) */

void printerApi_controller_ota___OtaController__UpgradeAmsVersionQuery(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x24);
      *(undefined4 *)((int)register0x00000054 + -0x24) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x20);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e14(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x20));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x1c);
        printerApi_controller_ota_OtaController_UpgradeAmsVersionQuery();
        *(undefined4 *)((int)register0x00000054 + 0x20) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0065e090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x24))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x24);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x65e0a4;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/ota.(*OtaController).UpgradeVersionQuery @ 0065e0c4 (size 132) */

void printerApi_controller_ota___OtaController__UpgradeVersionQuery(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_ota_OtaController_UpgradeVersionQuery();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0065e114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x65e128;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



