// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/controller/filament   functions: 16
/* printerApi/controller/filament.FilamentController.QuerySensor @ 0064d49c (size 640) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_filament_FilamentController_QuerySensor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *puStack_54;
  uint uStack_50;
  undefined4 *puStack_4c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined *puStack_28;
  undefined *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  undefined4 *puStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x64d720;
    FUN_00096bb8();
  }
  puStack_4 = (undefined4 *)0x0;
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
  FUN_00098a20(0,&uStack_30);
  uVar4 = in_stack_00000010;
  uVar2 = in_stack_0000000c;
  puVar1 = PTR_DAT_0064d72c;
  FUN_0008e314();
  uStack_30 = uVar2;
  if ((uStack_50 & 0xff) != 0) {
    uVar4 = puStack_54[1];
    uStack_30 = *puStack_54;
  }
  uStack_20 = in_stack_00000004;
  uStack_1c = in_stack_00000008;
  uStack_2c = uVar4;
  FUN_0008b6b8();
  puStack_10 = puVar1;
  puStack_c = (undefined *)0x0;
  uStack_8 = 0;
  FUN_0008a578();
  puStack_c = PTR_SUB_0064d730;
  uStack_8 = uVar2;
  FUN_001331ac();
  uStack_14 = uStack_50;
  FUN_0008e7bc();
  puVar3 = (uint *)0x1;
  _DAT_00000005 = puStack_4c;
  if (*(int *)PTR_DAT_0064d73c != 0) {
    puVar3 = (uint *)FUN_00098688();
    *(uint *)puVar1 = uStack_14;
    *(uint *)(puVar1 + 4) = *puVar3;
  }
  *puVar3 = uStack_14;
  puStack_28 = PTR_DAT_0064d72c;
  puStack_24 = puStack_10;
  FUN_00155144();
  puStack_4 = puStack_4c;
  FUN_0001cd7c();
  printerApi_service_k3c_CallContext();
  if (puStack_4c == (undefined4 *)0x0) {
    in_stack_00000020 = 0;
    in_stack_00000024 = 0;
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0064d70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0064d6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/filament.FilamentController.SetSensor @ 0064d754 (size 664) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_filament_FilamentController_SetSensor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
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
  undefined4 *puStack_5c;
  uint uStack_58;
  undefined4 *puStack_54;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined *puStack_30;
  undefined *puStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_1c;
  undefined *puStack_18;
  undefined *puStack_14;
  undefined4 uStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  undefined4 *puStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x64d9f0;
    FUN_00096bb8();
  }
  puStack_4 = (undefined4 *)0x0;
  in_stack_00000024 = 0;
  in_stack_00000028 = 0;
  FUN_00098a20(0,&uStack_38);
  uVar4 = in_stack_00000010;
  uVar2 = in_stack_0000000c;
  puVar1 = PTR_DAT_0064d9fc;
  FUN_0008e314();
  uStack_38 = uVar2;
  if ((uStack_58 & 0xff) != 0) {
    uVar4 = puStack_5c[1];
    uStack_38 = *puStack_5c;
  }
  uStack_28 = in_stack_00000004;
  uStack_24 = in_stack_00000008;
  uStack_34 = uVar4;
  FUN_0008b6b8();
  puStack_18 = puVar1;
  FUN_00098a28(0,&puStack_14);
  uVar4 = in_stack_00000018;
  FUN_0008a578();
  puStack_14 = PTR_SUB_0064da00;
  uStack_10 = uVar2;
  FUN_0001cec0();
  puStack_c = PTR_DAT_0064da04;
  uStack_8 = uVar4;
  FUN_001331ac();
  uStack_1c = uStack_58;
  FUN_0008e7bc();
  puVar3 = (uint *)0x2;
  _DAT_00000006 = puStack_54;
  if (*(int *)PTR_DAT_0064da10 != 0) {
    puVar3 = (uint *)FUN_00098688();
    *(uint *)puVar1 = uStack_1c;
    *(uint *)(puVar1 + 4) = *puVar3;
  }
  *puVar3 = uStack_1c;
  puStack_30 = PTR_DAT_0064d9fc;
  puStack_2c = puStack_18;
  FUN_00155144();
  puStack_4 = puStack_54;
  FUN_0001cd7c();
  printerApi_service_k3c_CallContext();
  if (puStack_54 == (undefined4 *)0x0) {
    in_stack_00000024 = 0;
    in_stack_00000028 = 0;
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0064d9dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0064d9b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/filament.FilamentController.Query @ 0064da28 (size 1072) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_filament_FilamentController_Query(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *extraout_r1;
  undefined4 *extraout_r1_00;
  int iVar4;
  int extraout_r1_01;
  undefined4 extraout_r2;
  undefined *extraout_r2_00;
  undefined *puVar5;
  int extraout_r3;
  int iVar6;
  int extraout_r3_00;
  undefined4 uVar7;
  undefined4 uVar8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar9;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  int in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 *puStack_5c;
  char cStack_58;
  undefined4 *puStack_54;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined *puStack_34;
  undefined *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined *puStack_20;
  undefined *puStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined *puStack_8;
  undefined4 *puStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x64de5c;
    FUN_00096bb8();
  }
  puStack_4 = (undefined4 *)0x0;
  in_stack_00000024 = 0;
  in_stack_00000028 = 0;
  FUN_00098a20(0,&uStack_3c);
  uVar8 = in_stack_00000010;
  uVar7 = in_stack_0000000c;
  puVar1 = PTR_DAT_0064de68;
  FUN_0008e314();
  if (cStack_58 != '\0') {
    uVar7 = *puStack_5c;
    uVar8 = puStack_5c[1];
  }
  uStack_2c = in_stack_00000004;
  uStack_28 = in_stack_00000008;
  uStack_3c = uVar7;
  uStack_38 = uVar8;
  FUN_0008b6b8();
  puStack_1c = puVar1;
  FUN_0008b6b8();
  puStack_20 = puVar1;
  FUN_0008e7bc();
  *puStack_5c = 0;
  puVar3 = puStack_5c;
  if (*(int *)PTR_DAT_0064de74 != 0) {
    puVar3 = (undefined4 *)FUN_00098678(puStack_5c,0,puStack_5c[1]);
    *(undefined4 *)puVar1 = extraout_r2;
  }
  puVar3[1] = 0;
  puVar2 = PTR_DAT_0064de78;
  FUN_0008e7bc();
  puVar3 = puStack_5c;
  if (*(int *)PTR_DAT_0064de74 != 0) {
    FUN_00098688();
    *(undefined **)puVar1 = puStack_20;
    *(undefined4 *)(puVar1 + 4) = *extraout_r1;
    puVar3 = extraout_r1;
  }
  *puVar3 = puStack_20;
  FUN_0008b6b8();
  puStack_20 = puVar2;
  FUN_0008e7bc();
  *puStack_5c = PTR_SUB_0064de84;
  puVar3 = puStack_5c;
  if (*(int *)PTR_DAT_0064de74 != 0) {
    uVar9 = FUN_00098678(puStack_5c,puStack_5c[1]);
    puVar3 = (undefined4 *)uVar9;
    *(int *)puVar1 = (int)((ulonglong)uVar9 >> 0x20);
  }
  puVar2 = puStack_1c;
  puVar3[1] = PTR_DAT_0064de88;
  FUN_0008e7bc();
  if (*(int *)PTR_DAT_0064de74 != 0) {
    FUN_00098688();
    *(undefined **)puVar1 = puStack_20;
    *(undefined4 *)(puVar1 + 4) = *extraout_r1_00;
    puStack_5c = extraout_r1_00;
  }
  *puStack_5c = puStack_20;
  puStack_34 = PTR_DAT_0064de78;
  puStack_30 = puStack_1c;
  FUN_0001eed8();
  puStack_8 = puVar2;
  FUN_00155144();
  puStack_4 = puStack_54;
  FUN_0001cd7c();
  puVar2 = PTR_DAT_0064dea4;
  printerApi_service_k3c_CallContext();
  if (puStack_54 != (undefined4 *)0x0) {
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0064de48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uVar7 = *(undefined4 *)(puStack_8 + 0xc);
  *(undefined4 *)(in_stack_00000020 + 8) = *(undefined4 *)(puStack_8 + 8);
  *(undefined4 *)(in_stack_00000020 + 0xc) = uVar7;
  puVar5 = PTR_DAT_0064de70;
  iVar4 = *(int *)(puStack_8 + 0x1c);
  if (iVar4 == 0) {
    FUN_00021c74();
    uStack_18 = *(undefined4 *)puVar2;
    uStack_14 = *(undefined4 *)(puVar2 + 4);
    uStack_10 = *(undefined4 *)(puVar2 + 8);
    uStack_c = *(undefined4 *)(puVar2 + 0xc);
    FUN_0001cd7c();
    FUN_001707f4();
    *(undefined4 *)(in_stack_00000020 + 0x14) = 0x26;
    *(undefined **)(in_stack_00000020 + 0x18) = puVar2;
    iVar4 = in_stack_00000020;
    if (*(int *)PTR_DAT_0064de74 != 0) {
      FUN_00098688();
      *(undefined **)puVar1 = extraout_r2_00;
      *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(extraout_r3_00 + 0x10);
      puVar5 = extraout_r2_00;
      iVar4 = extraout_r3_00;
    }
    *(undefined **)(iVar4 + 0x10) = puVar5;
  }
  else {
    iVar6 = in_stack_00000020;
    if (*(int *)PTR_DAT_0064de74 != 0) {
      FUN_00098688();
      *(int *)puVar1 = extraout_r1_01;
      *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(extraout_r3 + 0x1c);
      iVar4 = extraout_r1_01;
      iVar6 = extraout_r3;
    }
    *(int *)(iVar6 + 0x1c) = iVar4;
  }
  in_stack_00000024 = 0;
  in_stack_00000028 = 0;
  (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0064de24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/filament.FilamentController.SetSensorStatus @ 0064deb0 (size 380) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_filament_FilamentController_SetSensorStatus(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 *puStack_28;
  char cStack_24;
  undefined4 *puStack_20;
  
  while (uVar2 = in_stack_00000010, uVar1 = in_stack_0000000c,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x64e030;
    FUN_00096bb8();
  }
  in_stack_00000024 = 0;
  in_stack_00000028 = 0;
  FUN_0008e314();
  if (cStack_24 != '\0') {
    uVar1 = *puStack_28;
    uVar2 = puStack_28[1];
  }
  in_stack_0000000c = uVar1;
  in_stack_00000010 = uVar2;
  FUN_00155144();
  FUN_0001cd7c();
  printerApi_service_k3c_CallContext();
  if (puStack_20 == (undefined4 *)0x0) {
    in_stack_00000024 = 0;
    in_stack_00000028 = 0;
    (*pcRam00000000)();
                    /* WARNING: Could not recover jumptable at 0x0064e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  (*(code *)*puStack_20)();
                    /* WARNING: Could not recover jumptable at 0x0064dff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/filament.FilamentController.SetInfo @ 0064e054 (size 228) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_filament_FilamentController_SetInfo(void)

{
  undefined4 uVar1;
  int extraout_r3;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 uStack_68;
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [20];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x64e134;
    FUN_00096bb8();
  }
  uVar1 = FUN_00098a24(0,&uStack_20);
  FUN_00098e14(uVar1,&stack0x00000014,&uStack_68);
  uVar1 = printerApi_service_filament_SetInfo();
  FUN_00098e14(uVar1,auStack_54,&uStack_20,uStack_40);
  if (extraout_r3 != 0) {
    in_stack_00000030 = uStack_3c;
                    /* WARNING: Could not recover jumptable at 0x0064e0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  iStack_24 = *_UNK_0064e13c;
  FUN_00098e14(iStack_24,&uStack_20,&uStack_38);
  FUN_00098a18(0,&uStack_20);
  uStack_20 = uStack_38;
  uStack_1c = uStack_34;
  uStack_18 = uStack_30;
  uStack_14 = uStack_2c;
  uStack_10 = uStack_28;
  uStack_68 = *(undefined4 *)(iStack_24 + 8);
  FUN_00098dfc(uStack_68,&uStack_20,auStack_64);
  printerApi_cloud___filamentHandler__ReportFilamentInfoReply();
  in_stack_0000002c = 0;
  in_stack_00000030 = 0;
                    /* WARNING: Could not recover jumptable at 0x0064e128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/filament.FilamentController.GetInfo @ 0064e140 (size 164) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_filament_FilamentController_GetInfo(void)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  int extraout_r3;
  int iVar2;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_14 [20];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x64e1e0;
    FUN_00096bb8();
  }
  uVar1 = printerApi_service_filament_GetInfo();
  FUN_00098e14(uVar1,&uStack_30,auStack_14);
  uStack_30 = _UNK_0064e1e8;
  puStack_2c = auStack_14;
  FUN_0001cd7c();
  uStack_30 = _UNK_0064e1e8;
  puStack_2c = (undefined1 *)uStack_28;
  FUN_001707f4();
  *(undefined4 *)(in_stack_0000001c + 0x14) = uStack_24;
  *(undefined4 *)(in_stack_0000001c + 0x18) = uStack_20;
  iVar2 = in_stack_0000001c;
  if (*_UNK_0064e1ec != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r2;
    unaff_r8[1] = *(undefined4 *)(extraout_r3 + 0x10);
    uStack_28 = extraout_r2;
    iVar2 = extraout_r3;
  }
  *(undefined4 *)(iVar2 + 0x10) = uStack_28;
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x0064e1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/filament.FilamentController.FeedNotify @ 0064e1f0 (size 204) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_filament_FilamentController_FeedNotify(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x44);
      *(undefined4 *)((int)register0x00000054 + -0x44) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x40) = *_UNK_0064e2c0;
      FUN_0009bf4c();
      bVar3 = *(int *)((int)register0x00000054 + -0x3c) == _UNK_0064e2c4;
      if (bVar3) {
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x38);
        uVar1 = FUN_00098a20(0,(undefined1 *)((int)register0x00000054 + -0x1c));
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + 0x14);
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)((int)register0x00000054 + 0x18);
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + 0x1c);
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x24);
        *(undefined4 *)((int)register0x00000054 + -8) =
             *(undefined4 *)((int)register0x00000054 + 0x28);
        *(undefined1 **)((int)register0x00000054 + -0x40) =
             (undefined1 *)((int)register0x00000054 + -4);
        FUN_00098e0c(uVar1,(undefined1 *)((int)register0x00000054 + -0x1c),
                     (undefined1 *)((int)register0x00000054 + -0x3c));
        printerApi_service_k3c_wrapper___K3cwrapper__PublishFilamentFeed();
        *(undefined4 *)((int)register0x00000054 + 0x30) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x34) = 0;
                    /* WARNING: Could not recover jumptable at 0x0064e294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x44))();
        return;
      }
      *(int *)((int)register0x00000054 + -0x40) = *(int *)((int)register0x00000054 + -0x3c);
      *(int *)((int)register0x00000054 + -0x3c) = _UNK_0064e2c4;
      *(undefined4 *)((int)register0x00000054 + -0x38) = _UNK_0064e2c8;
      param_1 = FUN_0001cb94();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x44);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x64e2b8;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/filament.FilamentController.UnwindNotify @ 0064e2cc (size 204) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_filament_FilamentController_UnwindNotify(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x44);
      *(undefined4 *)((int)register0x00000054 + -0x44) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x40) = *_UNK_0064e39c;
      FUN_0009bf4c();
      bVar3 = *(int *)((int)register0x00000054 + -0x3c) == _UNK_0064e3a0;
      if (bVar3) {
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x38);
        uVar1 = FUN_00098a20(0,(undefined1 *)((int)register0x00000054 + -0x1c));
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + 0x14);
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)((int)register0x00000054 + 0x18);
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + 0x1c);
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x24);
        *(undefined4 *)((int)register0x00000054 + -8) =
             *(undefined4 *)((int)register0x00000054 + 0x28);
        *(undefined1 **)((int)register0x00000054 + -0x40) =
             (undefined1 *)((int)register0x00000054 + -4);
        FUN_00098e0c(uVar1,(undefined1 *)((int)register0x00000054 + -0x1c),
                     (undefined1 *)((int)register0x00000054 + -0x3c));
        printerApi_service_k3c_wrapper___K3cwrapper__PublishFilamentUnwind();
        *(undefined4 *)((int)register0x00000054 + 0x30) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x34) = 0;
                    /* WARNING: Could not recover jumptable at 0x0064e370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x44))();
        return;
      }
      *(int *)((int)register0x00000054 + -0x40) = *(int *)((int)register0x00000054 + -0x3c);
      *(int *)((int)register0x00000054 + -0x3c) = _UNK_0064e3a0;
      *(undefined4 *)((int)register0x00000054 + -0x38) = _UNK_0064e3a4;
      param_1 = FUN_0001cb94();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x44);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x64e394;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/filament.(*FilamentController).FeedNotify @ 0064e3a8 (size 132) */

void printerApi_controller_filament___FilamentController__FeedNotify(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x38);
      *(undefined4 *)((int)register0x00000054 + -0x38) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x34);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098dec(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x34));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x30);
        printerApi_controller_filament_FilamentController_FeedNotify();
        *(undefined4 *)((int)register0x00000054 + 0x34) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x38) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0064e3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x38))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x38);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x64e40c;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/filament.(*FilamentController).GetInfo @ 0064e42c (size 132) */

void printerApi_controller_filament___FilamentController__GetInfo(undefined4 param_1)

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
        printerApi_controller_filament_FilamentController_GetInfo();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0064e47c. Too many branches */
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
    unaff_lr = 0x64e490;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/filament.(*FilamentController).Query @ 0064e4b0 (size 132) */

void printerApi_controller_filament___FilamentController__Query(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x2c);
      *(undefined4 *)((int)register0x00000054 + -0x2c) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x28);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e04(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x28));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x24);
        printerApi_controller_filament_FilamentController_Query();
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x2c) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0064e500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x2c))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x2c);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x64e514;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/filament.(*FilamentController).QuerySensor @ 0064e534 (size 132) */

void printerApi_controller_filament___FilamentController__QuerySensor(undefined4 param_1)

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
        printerApi_controller_filament_FilamentController_QuerySensor();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0064e584. Too many branches */
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
    unaff_lr = 0x64e598;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/filament.(*FilamentController).SetInfo @ 0064e5b8 (size 132) */

void printerApi_controller_filament___FilamentController__SetInfo(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x34);
      *(undefined4 *)((int)register0x00000054 + -0x34) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x30);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098df4(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x30));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x2c);
        printerApi_controller_filament_FilamentController_SetInfo();
        *(undefined4 *)((int)register0x00000054 + 0x30) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x34) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0064e608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x34))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x34);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x64e61c;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/filament.(*FilamentController).SetSensor @ 0064e63c (size 132) */

void printerApi_controller_filament___FilamentController__SetSensor(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x2c);
      *(undefined4 *)((int)register0x00000054 + -0x2c) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x28);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e04(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x28));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x24);
        printerApi_controller_filament_FilamentController_SetSensor();
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x2c) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0064e68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x2c))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x2c);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x64e6a0;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/filament.(*FilamentController).SetSensorStatus @ 0064e6c0 (size 132) */

void printerApi_controller_filament___FilamentController__SetSensorStatus(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x2c);
      *(undefined4 *)((int)register0x00000054 + -0x2c) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x28);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e04(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x28));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x24);
        printerApi_controller_filament_FilamentController_SetSensorStatus();
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x2c) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0064e710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x2c))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x2c);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x64e724;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/filament.(*FilamentController).UnwindNotify @ 0064e744 (size 132) */

void printerApi_controller_filament___FilamentController__UnwindNotify(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x38);
      *(undefined4 *)((int)register0x00000054 + -0x38) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x34);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098dec(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x34));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x30);
        printerApi_controller_filament_FilamentController_UnwindNotify();
        *(undefined4 *)((int)register0x00000054 + 0x34) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x38) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0064e794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x38))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x38);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x64e7a8;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



