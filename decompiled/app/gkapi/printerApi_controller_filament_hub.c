// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/controller/filament_hub   functions: 39
/* printerApi/controller/filament_hub.FilamentHubController.StartDrying @ 0064ed3c (size 660) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_filament_hub_FilamentHubController_StartDrying(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000030;
  undefined4 *puStack_68;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [28];
  undefined *puStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined *puStack_8;
  undefined4 *puStack_4;
  
  while (&puStack_4 <= *(undefined4 ***)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x64efd4;
    FUN_00096bb8();
  }
  puStack_4 = (undefined4 *)0x0;
  FUN_0008e314();
  FUN_00155144();
  puStack_4 = puStack_68;
  FUN_0001cd7c();
  puVar1 = PTR_DAT_0064eff0;
  printerApi_service_k3c_CallContext();
  if (puStack_68 == (undefined4 *)0x0) {
    if (*(int *)(in_stack_00000030 + 0x1c) != 0) {
      uVar2 = FUN_00098e0c(in_stack_00000030,*(int *)(in_stack_00000030 + 0x1c),auStack_30);
      FUN_00098e0c(uVar2,auStack_30,auStack_48);
      FUN_00098a28(0,&puStack_14);
      FUN_0008a578();
      puStack_14 = PTR_SUB_0064eff8;
      puStack_10 = puVar1;
      FUN_0008a578();
      puStack_c = PTR_SUB_0064eff8;
      puStack_8 = puVar1;
      FUN_001331ac();
      FUN_0001eed8();
      piVar3 = (int *)&DAT_00000007;
      _DAT_0000000b = puStack_68;
      if (*(int *)PTR_DAT_0064f004 != 0) {
        piVar3 = (int *)FUN_00098678();
        *unaff_r8 = in_stack_00000030;
      }
      *piVar3 = in_stack_00000030;
      (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0064ef74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0064ef9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0064efc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/filament_hub.FilamentHubController.StartDryingFirst @ 0064f00c (size 660) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_filament_hub_FilamentHubController_StartDryingFirst(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000030;
  undefined4 *puStack_68;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [28];
  undefined *puStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined *puStack_8;
  undefined4 *puStack_4;
  
  while (&puStack_4 <= *(undefined4 ***)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x64f2a4;
    FUN_00096bb8();
  }
  puStack_4 = (undefined4 *)0x0;
  FUN_0008e314();
  FUN_00155144();
  puStack_4 = puStack_68;
  FUN_0001cd7c();
  puVar1 = PTR_DAT_0064f2c0;
  printerApi_service_k3c_CallContext();
  if (puStack_68 == (undefined4 *)0x0) {
    if (*(int *)(in_stack_00000030 + 0x1c) != 0) {
      uVar2 = FUN_00098e0c(in_stack_00000030,*(int *)(in_stack_00000030 + 0x1c),auStack_30);
      FUN_00098e0c(uVar2,auStack_30,auStack_48);
      FUN_00098a28(0,&puStack_14);
      FUN_0008a578();
      puStack_14 = PTR_SUB_0064f2c8;
      puStack_10 = puVar1;
      FUN_0008a578();
      puStack_c = PTR_SUB_0064f2c8;
      puStack_8 = puVar1;
      FUN_001331ac();
      FUN_0001eed8();
      piVar3 = (int *)&DAT_00000007;
      _DAT_0000000b = puStack_68;
      if (*(int *)PTR_DAT_0064f2d4 != 0) {
        piVar3 = (int *)FUN_00098678();
        *unaff_r8 = in_stack_00000030;
      }
      *piVar3 = in_stack_00000030;
      (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0064f244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0064f26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0064f290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/filament_hub.FilamentHubController.StopDrying @ 0064f2dc (size 660) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_filament_hub_FilamentHubController_StopDrying(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000018;
  undefined4 *puStack_68;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [28];
  undefined *puStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined *puStack_8;
  undefined4 *puStack_4;
  
  while (&puStack_4 <= *(undefined4 ***)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x64f574;
    FUN_00096bb8();
  }
  puStack_4 = (undefined4 *)0x0;
  FUN_0008e314();
  FUN_00155144();
  puStack_4 = puStack_68;
  FUN_0001cd7c();
  puVar1 = PTR_DAT_0064f590;
  printerApi_service_k3c_CallContext();
  if (puStack_68 == (undefined4 *)0x0) {
    if (*(int *)(in_stack_00000018 + 0x1c) != 0) {
      uVar2 = FUN_00098e0c(in_stack_00000018,*(int *)(in_stack_00000018 + 0x1c),auStack_30);
      FUN_00098e0c(uVar2,auStack_30,auStack_48);
      FUN_00098a28(0,&puStack_14);
      FUN_0008a578();
      puStack_14 = PTR_SUB_0064f598;
      puStack_10 = puVar1;
      FUN_0008a578();
      puStack_c = PTR_SUB_0064f598;
      puStack_8 = puVar1;
      FUN_001331ac();
      FUN_0001eed8();
      piVar3 = (int *)&DAT_00000007;
      _DAT_0000000b = puStack_68;
      if (*(int *)PTR_DAT_0064f5a4 != 0) {
        piVar3 = (int *)FUN_00098678();
        *unaff_r8 = in_stack_00000018;
      }
      *piVar3 = in_stack_00000018;
      (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0064f514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0064f53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0064f560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/filament_hub.FilamentHubController.FeedFilament @ 0064f5ac (size 936) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_filament_hub_FilamentHubController_FeedFilament(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  int in_stack_0000001c;
  undefined4 *puStack_94;
  uint uStack_90;
  undefined4 *puStack_8c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined *puStack_60;
  undefined *puStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [12];
  uint uStack_1c;
  undefined *puStack_18;
  undefined *puStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined *puStack_8;
  undefined4 *puStack_4;
  
  while (auStack_28 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x64f958;
    FUN_00096bb8();
  }
  puStack_4 = (undefined4 *)0x0;
  FUN_00098a20(0,&uStack_68);
  puVar1 = PTR_DAT_0064f964;
  uVar5 = *(undefined4 *)PTR_DAT_0064f960;
  FUN_0008e314();
  if ((uStack_90 & 0xff) != 0) {
    in_stack_0000000c = *puStack_94;
    in_stack_00000010 = puStack_94[1];
  }
  uStack_58 = in_stack_00000004;
  uStack_54 = in_stack_00000008;
  uStack_68 = in_stack_0000000c;
  uStack_64 = in_stack_00000010;
  FUN_0008b6b8();
  puStack_18 = puVar1;
  FUN_00098a28(0,&puStack_14);
  FUN_0001cec0();
  puStack_14 = PTR_DAT_0064f968;
  puStack_10 = (undefined *)uVar5;
  FUN_0001cec0();
  puStack_c = PTR_DAT_0064f968;
  puStack_8 = (undefined *)uVar5;
  FUN_001331ac();
  uStack_1c = uStack_90;
  FUN_0008e7bc();
  puVar3 = (uint *)0x2;
  _DAT_00000006 = puStack_8c;
  if (*(int *)PTR_DAT_0064f974 != 0) {
    puVar3 = (uint *)FUN_00098688();
    *(uint *)puVar1 = uStack_1c;
    *(uint *)(puVar1 + 4) = *puVar3;
  }
  *puVar3 = uStack_1c;
  puStack_60 = PTR_DAT_0064f964;
  puStack_5c = puStack_18;
  FUN_00155144();
  puStack_4 = puStack_8c;
  FUN_0001cd7c();
  puVar2 = PTR_DAT_0064f984;
  printerApi_service_k3c_CallContext();
  if (puStack_8c != (undefined4 *)0x0) {
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0064f944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (*(int *)(in_stack_0000001c + 0x1c) == 0) {
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0064f920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  uVar5 = FUN_00098e0c(in_stack_0000001c,*(int *)(in_stack_0000001c + 0x1c),auStack_38);
  FUN_00098e0c(uVar5,auStack_38,auStack_50);
  FUN_00098a28(0,&puStack_14);
  FUN_0008a578();
  puStack_14 = PTR_SUB_0064f98c;
  puStack_10 = puVar2;
  FUN_0008a578();
  puStack_c = PTR_SUB_0064f98c;
  puStack_8 = puVar2;
  FUN_001331ac();
  FUN_0001eed8();
  piVar4 = (int *)&DAT_00000007;
  _DAT_0000000b = puStack_8c;
  if (*(int *)PTR_DAT_0064f974 != 0) {
    piVar4 = (int *)FUN_00098678();
    *(int *)puVar1 = in_stack_0000001c;
  }
  *piVar4 = in_stack_0000001c;
  (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0064f8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/filament_hub.FilamentHubController.UnwindFilament @ 0064f99c (size 936) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_filament_hub_FilamentHubController_UnwindFilament(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  int in_stack_0000001c;
  undefined4 *puStack_94;
  uint uStack_90;
  undefined4 *puStack_8c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined *puStack_60;
  undefined *puStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [12];
  uint uStack_1c;
  undefined *puStack_18;
  undefined *puStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined *puStack_8;
  undefined4 *puStack_4;
  
  while (auStack_28 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x64fd48;
    FUN_00096bb8();
  }
  puStack_4 = (undefined4 *)0x0;
  FUN_00098a20(0,&uStack_68);
  puVar1 = PTR_DAT_0064fd54;
  uVar5 = *(undefined4 *)PTR_DAT_0064fd50;
  FUN_0008e314();
  if ((uStack_90 & 0xff) != 0) {
    in_stack_0000000c = *puStack_94;
    in_stack_00000010 = puStack_94[1];
  }
  uStack_58 = in_stack_00000004;
  uStack_54 = in_stack_00000008;
  uStack_68 = in_stack_0000000c;
  uStack_64 = in_stack_00000010;
  FUN_0008b6b8();
  puStack_18 = puVar1;
  FUN_00098a28(0,&puStack_14);
  FUN_0001cec0();
  puStack_14 = PTR_DAT_0064fd58;
  puStack_10 = (undefined *)uVar5;
  FUN_0001cec0();
  puStack_c = PTR_DAT_0064fd58;
  puStack_8 = (undefined *)uVar5;
  FUN_001331ac();
  uStack_1c = uStack_90;
  FUN_0008e7bc();
  puVar3 = (uint *)0x2;
  _DAT_00000006 = puStack_8c;
  if (*(int *)PTR_DAT_0064fd64 != 0) {
    puVar3 = (uint *)FUN_00098688();
    *(uint *)puVar1 = uStack_1c;
    *(uint *)(puVar1 + 4) = *puVar3;
  }
  *puVar3 = uStack_1c;
  puStack_60 = PTR_DAT_0064fd54;
  puStack_5c = puStack_18;
  FUN_00155144();
  puStack_4 = puStack_8c;
  FUN_0001cd7c();
  puVar2 = PTR_DAT_0064fd74;
  printerApi_service_k3c_CallContext();
  if (puStack_8c != (undefined4 *)0x0) {
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0064fd34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (*(int *)(in_stack_0000001c + 0x1c) == 0) {
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0064fd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  uVar5 = FUN_00098e0c(in_stack_0000001c,*(int *)(in_stack_0000001c + 0x1c),auStack_38);
  FUN_00098e0c(uVar5,auStack_38,auStack_50);
  FUN_00098a28(0,&puStack_14);
  FUN_0008a578();
  puStack_14 = PTR_SUB_0064fd7c;
  puStack_10 = puVar2;
  FUN_0008a578();
  puStack_c = PTR_SUB_0064fd7c;
  puStack_8 = puVar2;
  FUN_001331ac();
  FUN_0001eed8();
  piVar4 = (int *)&DAT_00000007;
  _DAT_0000000b = puStack_8c;
  if (*(int *)PTR_DAT_0064fd64 != 0) {
    piVar4 = (int *)FUN_00098678();
    *(int *)puVar1 = in_stack_0000001c;
  }
  *piVar4 = in_stack_0000001c;
  (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0064fce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/filament_hub.FilamentHubController.Info @ 0064fd8c (size 660) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_filament_hub_FilamentHubController_Info(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_0000001c;
  undefined4 *puStack_68;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [28];
  undefined *puStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined *puStack_8;
  undefined4 *puStack_4;
  
  while (&puStack_4 <= *(undefined4 ***)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x650024;
    FUN_00096bb8();
  }
  puStack_4 = (undefined4 *)0x0;
  FUN_00155144();
  puStack_4 = puStack_68;
  FUN_0008e314();
  FUN_0001cd7c();
  puVar1 = PTR_DAT_00650040;
  printerApi_service_k3c_CallContext();
  if (puStack_68 == (undefined4 *)0x0) {
    if (*(int *)(in_stack_0000001c + 0x1c) != 0) {
      uVar2 = FUN_00098e0c(in_stack_0000001c,*(int *)(in_stack_0000001c + 0x1c),auStack_30);
      FUN_00098e0c(uVar2,auStack_30,auStack_48);
      FUN_00098a28(0,&puStack_14);
      FUN_0008a578();
      puStack_14 = PTR_SUB_00650048;
      puStack_10 = puVar1;
      FUN_0008a578();
      puStack_c = PTR_SUB_00650048;
      puStack_8 = puVar1;
      FUN_001331ac();
      FUN_0001eed8();
      piVar3 = (int *)&DAT_00000007;
      _DAT_0000000b = puStack_68;
      if (*(int *)PTR_DAT_00650054 != 0) {
        piVar3 = (int *)FUN_00098678();
        *unaff_r8 = in_stack_0000001c;
      }
      *piVar3 = in_stack_0000001c;
      (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0064ffc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0064ffec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00650010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/filament_hub.FilamentHubController.FilamentInfo @ 0065005c (size 660) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_filament_hub_FilamentHubController_FilamentInfo(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_0000001c;
  undefined4 *puStack_68;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [28];
  undefined *puStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined *puStack_8;
  undefined4 *puStack_4;
  
  while (&puStack_4 <= *(undefined4 ***)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x6502f4;
    FUN_00096bb8();
  }
  puStack_4 = (undefined4 *)0x0;
  FUN_00155144();
  puStack_4 = puStack_68;
  FUN_0008e314();
  FUN_0001cd7c();
  puVar1 = PTR_DAT_00650310;
  printerApi_service_k3c_CallContext();
  if (puStack_68 == (undefined4 *)0x0) {
    if (*(int *)(in_stack_0000001c + 0x1c) != 0) {
      uVar2 = FUN_00098e0c(in_stack_0000001c,*(int *)(in_stack_0000001c + 0x1c),auStack_30);
      FUN_00098e0c(uVar2,auStack_30,auStack_48);
      FUN_00098a28(0,&puStack_14);
      FUN_0008a578();
      puStack_14 = PTR_SUB_00650318;
      puStack_10 = puVar1;
      FUN_0008a578();
      puStack_c = PTR_SUB_00650318;
      puStack_8 = puVar1;
      FUN_001331ac();
      FUN_0001eed8();
      piVar3 = (int *)&DAT_00000007;
      _DAT_0000000b = puStack_68;
      if (*(int *)PTR_DAT_00650324 != 0) {
        piVar3 = (int *)FUN_00098678();
        *unaff_r8 = in_stack_0000001c;
      }
      *piVar3 = in_stack_0000001c;
      (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00650294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x006502bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x006502e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/filament_hub.FilamentHubController.QueryVersion @ 0065032c (size 660) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_filament_hub_FilamentHubController_QueryVersion(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000018;
  undefined4 *puStack_68;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [28];
  undefined *puStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined *puStack_8;
  undefined4 *puStack_4;
  
  while (&puStack_4 <= *(undefined4 ***)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x6505c4;
    FUN_00096bb8();
  }
  puStack_4 = (undefined4 *)0x0;
  FUN_00155144();
  puStack_4 = puStack_68;
  FUN_0008e314();
  FUN_0001cd7c();
  puVar1 = PTR_DAT_006505e0;
  printerApi_service_k3c_CallContext();
  if (puStack_68 == (undefined4 *)0x0) {
    if (*(int *)(in_stack_00000018 + 0x1c) != 0) {
      uVar2 = FUN_00098e0c(in_stack_00000018,*(int *)(in_stack_00000018 + 0x1c),auStack_30);
      FUN_00098e0c(uVar2,auStack_30,auStack_48);
      FUN_00098a28(0,&puStack_14);
      FUN_0008a578();
      puStack_14 = PTR_SUB_006505e8;
      puStack_10 = puVar1;
      FUN_0008a578();
      puStack_c = PTR_SUB_006505e8;
      puStack_8 = puVar1;
      FUN_001331ac();
      FUN_0001eed8();
      piVar3 = (int *)&DAT_00000007;
      _DAT_0000000b = puStack_68;
      if (*(int *)PTR_DAT_006505f4 != 0) {
        piVar3 = (int *)FUN_00098678();
        *unaff_r8 = in_stack_00000018;
      }
      *piVar3 = in_stack_00000018;
      (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00650564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0065058c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x006505b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/filament_hub.FilamentHubController.UpgradeVersion @ 006505fc (size 944) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_filament_hub_FilamentHubController_UpgradeVersion(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  int in_stack_00000020;
  undefined4 *puStack_94;
  uint uStack_90;
  undefined4 *puStack_8c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined *puStack_60;
  undefined *puStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [12];
  uint uStack_1c;
  undefined *puStack_18;
  undefined *puStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined *puStack_8;
  undefined4 *puStack_4;
  
  while (auStack_28 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x6509b0;
    FUN_00096bb8();
  }
  puStack_4 = (undefined4 *)0x0;
  FUN_00098a20(0,&uStack_68);
  puVar1 = PTR_DAT_006509bc;
  uVar5 = *(undefined4 *)PTR_DAT_006509b8;
  FUN_0008e314();
  uStack_68 = in_stack_0000000c;
  if ((uStack_90 & 0xff) != 0) {
    in_stack_00000010 = puStack_94[1];
    uStack_68 = *puStack_94;
  }
  uStack_58 = in_stack_00000004;
  uStack_54 = in_stack_00000008;
  uStack_64 = in_stack_00000010;
  FUN_0008b6b8();
  puStack_18 = puVar1;
  FUN_00098a28(0,&puStack_14);
  FUN_0001cec0();
  puStack_14 = PTR_DAT_006509c0;
  puStack_10 = (undefined *)uVar5;
  FUN_0008a578();
  puStack_c = PTR_SUB_006509c4;
  puStack_8 = (undefined *)in_stack_0000000c;
  FUN_001331ac();
  uStack_1c = uStack_90;
  FUN_0008e7bc();
  puVar3 = (uint *)0x2;
  _DAT_00000006 = puStack_8c;
  if (*(int *)PTR_DAT_006509d0 != 0) {
    puVar3 = (uint *)FUN_00098688();
    *(uint *)puVar1 = uStack_1c;
    *(uint *)(puVar1 + 4) = *puVar3;
  }
  *puVar3 = uStack_1c;
  puStack_60 = PTR_DAT_006509bc;
  puStack_5c = puStack_18;
  FUN_00155144();
  puStack_4 = puStack_8c;
  FUN_0001cd7c();
  puVar2 = PTR_DAT_006509e0;
  printerApi_service_k3c_CallContext();
  if (puStack_8c != (undefined4 *)0x0) {
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0065099c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (*(int *)(in_stack_00000020 + 0x1c) == 0) {
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00650978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  uVar5 = FUN_00098e0c(in_stack_00000020,*(int *)(in_stack_00000020 + 0x1c),auStack_38);
  FUN_00098e0c(uVar5,auStack_38,auStack_50);
  FUN_00098a28(0,&puStack_14);
  FUN_0008a578();
  puStack_14 = PTR_SUB_006509c4;
  puStack_10 = puVar2;
  FUN_0008a578();
  puStack_c = PTR_SUB_006509c4;
  puStack_8 = puVar2;
  FUN_001331ac();
  FUN_0001eed8();
  piVar4 = (int *)&DAT_00000007;
  _DAT_0000000b = puStack_8c;
  if (*(int *)PTR_DAT_006509d0 != 0) {
    piVar4 = (int *)FUN_00098678();
    *(int *)puVar1 = in_stack_00000020;
  }
  *piVar4 = in_stack_00000020;
  (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00650950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/filament_hub.FilamentHubController.AllInfo @ 006509f4 (size 1468) */

/* WARNING: Removing unreachable block (ram,0x00650dc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_filament_hub_FilamentHubController_AllInfo(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *extraout_r1;
  uint *extraout_r2;
  uint extraout_r2_00;
  uint *extraout_r2_01;
  uint uVar7;
  uint extraout_r3;
  int extraout_r3_00;
  uint extraout_r3_01;
  int extraout_r3_02;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  uint *unaff_r8;
  uint *puVar13;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  uint *puVar14;
  uint *puVar15;
  uint *puStack_e0;
  undefined *puStack_dc;
  uint *puStack_d8;
  uint *puStack_d4;
  undefined4 *puStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined1 auStack_8c [24];
  uint *puStack_74;
  uint *puStack_70;
  int iStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint auStack_5c [17];
  undefined *puStack_18;
  undefined *puStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  uint *puStack_8;
  undefined4 *puStack_4;
  
  while (&iStack_6c <= *(int **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x650fac;
    FUN_00096bb8();
  }
  puStack_4 = (undefined4 *)0x0;
  FUN_00098a20(0,&uStack_a4);
  uStack_a4 = _UNK_00650fb4;
  uStack_a0 = 0x11;
  uStack_94 = in_stack_00000014;
  uStack_90 = in_stack_00000018;
  FUN_00155144();
  puStack_74 = puStack_d4;
  puStack_4 = puStack_d0;
  FUN_0001cd7c();
  puVar1 = PTR_DAT_00650fc4;
  printerApi_service_k3c_CallContext();
  if (puStack_d0 != (undefined4 *)0x0) {
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00650cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  if (*(int *)(in_stack_0000001c + 0x1c) != 0) {
    uVar2 = FUN_00098e0c(in_stack_0000001c,*(int *)(in_stack_0000001c + 0x1c),auStack_5c);
    FUN_00098e0c(uVar2,auStack_5c,auStack_8c);
    FUN_00098a28(0,&puStack_18);
    FUN_0008a578();
    puStack_18 = PTR_SUB_00650fcc;
    puStack_14 = puVar1;
    FUN_0008a578();
    puStack_10 = PTR_SUB_00650fcc;
    puStack_c = puVar1;
    puVar14 = (uint *)&DAT_00000007;
    FUN_001331ac();
    FUN_0001eed8();
    puVar14[1] = 0;
    if (*(int *)PTR_DAT_00650fd8 != 0) {
      puVar14 = (uint *)FUN_00098678();
      *unaff_r8 = in_stack_0000001c;
    }
    *puVar14 = in_stack_0000001c;
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00650bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  puStack_d8 = puStack_74;
  FUN_0001eed8();
  *puStack_d8 = 0;
  puStack_e0 = *(uint **)(in_stack_0000001c + 0x18);
  puStack_dc = PTR_DAT_00650fe4;
  puStack_8 = puStack_d8;
  FUN_0016a168();
  if (in_stack_0000001c != 0) {
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00650c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uVar7 = puStack_8[1];
  uVar3 = 0;
  puVar14 = puStack_8;
  uVar11 = uVar7;
LAB_00650cb4:
  if ((int)uVar11 <= (int)uVar3) {
    uStack_64 = puVar14[1];
    uVar11 = puVar14[2];
    uStack_68 = *puVar14;
    uStack_60 = uVar11;
    FUN_0008a61c();
    FUN_001707f4();
    _DAT_00000014 = puStack_dc;
    _DAT_00000018 = puStack_d8;
    iVar8 = 0;
    if (*(int *)PTR_DAT_00650fd8 != 0) {
      FUN_00098688();
      *unaff_r8 = extraout_r2_00;
      unaff_r8[1] = *(uint *)(extraout_r3_00 + 0x10);
      uVar11 = extraout_r2_00;
      iVar8 = extraout_r3_00;
    }
    *(uint *)(iVar8 + 0x10) = uVar11;
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00650dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  if (puVar14[1] <= uVar3) {
LAB_00650f94:
    uVar2 = FUN_000986f8();
    FUN_0004fb3c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00650fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  iVar8 = *puVar14 + uVar3 * 0x24;
  *(undefined4 *)(iVar8 + 0xc) = 0;
  *(undefined4 *)(iVar8 + 0x10) = 0;
  uVar4 = uVar3;
  if (*(int *)PTR_DAT_00650fd8 != 0) {
    uVar11 = *(uint *)(iVar8 + 8);
    uVar4 = FUN_00098678();
    *unaff_r8 = uVar11;
    puVar14 = extraout_r2;
    uVar11 = extraout_r3;
  }
  *(undefined4 *)(iVar8 + 8) = _UNK_00650fbc;
  puVar6 = (uint *)0x0;
  uVar5 = uVar4;
  do {
    uVar9 = puVar14[1];
    if (uVar9 <= uVar5) {
LAB_00650f8c:
      FUN_000986f8(uVar5,uVar9);
      goto LAB_00650f94;
    }
    uVar9 = *puVar14;
    if (*(int *)(uVar9 + uVar3 * 0x24 + 4) <= (int)puVar6) break;
    puVar14 = *(uint **)(uVar9 + uVar3 * 0x24);
    puVar15 = puVar6;
    printerApi_controller_filament_hub_queryFilamentInfo();
    if (puStack_dc != (undefined *)0x0) {
      (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00650f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    FUN_00098db4(0,puStack_e0,auStack_5c);
    if (puStack_8[1] <= uVar4) {
      uVar5 = FUN_000986f8(uVar4);
      goto LAB_00650f8c;
    }
    iVar8 = *puStack_8 + uVar3 * 0x24;
    puVar10 = *(uint **)(iVar8 + 0x10);
    puVar12 = (uint *)(*(int *)(iVar8 + 0xc) + 1);
    puVar13 = *(uint **)(iVar8 + 8);
    unaff_r8 = puVar13;
    if (puVar10 < puVar12) {
      puStack_dc = (undefined *)0x1;
      puStack_d8 = (uint *)PTR_DAT_00650fe8;
      puVar14 = puVar13;
      puVar15 = puVar12;
      iStack_6c = iVar8;
      FUN_00093524();
      *(undefined4 *)(iStack_6c + 0x10) = uStack_cc;
      puVar12 = (uint *)0x0;
      unaff_r8 = (uint *)0x0;
      iVar8 = iStack_6c;
      if (*(int *)PTR_DAT_00650fd8 != 0) {
        FUN_00098688();
        *puVar13 = (uint)extraout_r1;
        puVar13[1] = *(uint *)(extraout_r3_02 + 8);
        unaff_r8 = extraout_r1;
        puVar12 = extraout_r2_01;
        iVar8 = extraout_r3_02;
      }
      *(uint **)(iVar8 + 8) = unaff_r8;
      puStack_e0 = puVar10;
    }
    *(uint **)(iVar8 + 0xc) = puVar12;
    puVar10 = unaff_r8 + (int)puVar12 * 0x11 + -0x11;
    puVar12 = puVar10;
    if (*(int *)PTR_DAT_00650fd8 != 0) {
      puStack_e0 = auStack_5c;
      puVar14 = (uint *)PTR_DAT_00650fe8;
      puStack_70 = puVar10;
      FUN_00022914();
      puVar12 = puStack_70;
      puVar15 = puVar10;
    }
    FUN_00098db4(puStack_8,auStack_5c,puVar12,uVar4,UNRECOVERED_JUMPTABLE_00,puVar14,puVar15);
    puVar6 = (uint *)((int)puVar6 + 1);
    uVar5 = extraout_r3_01;
    puVar14 = puStack_8;
    uVar11 = uVar7;
  } while( true );
  uVar3 = uVar5 + 1;
  goto LAB_00650cb4;
}



/* printerApi/controller/filament_hub.queryFilamentInfo @ 00650fec (size 888) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_filament_hub_queryFilamentInfo(void)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 *puStack_8c;
  undefined4 uStack_88;
  undefined4 *puStack_84;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined1 auStack_54 [24];
  undefined1 auStack_3c [24];
  undefined4 uStack_24;
  int iStack_20;
  undefined *puStack_1c;
  undefined *puStack_18;
  undefined *puStack_14;
  undefined *puStack_10;
  undefined4 uStack_c;
  int iStack_8;
  undefined4 *puStack_4;
  
  while (&iStack_20 <= *(int **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x651368;
    FUN_00096bb8();
  }
  puStack_4 = (undefined4 *)0x0;
  FUN_00098a20(0,&uStack_6c);
  iVar1 = _UNK_00651370;
  FUN_00155144();
  uStack_24 = uStack_88;
  puStack_4 = puStack_84;
  uStack_6c = _UNK_0065137c;
  uStack_68 = 0x1a;
  FUN_0008b6b8();
  iStack_20 = iVar1;
  FUN_0008e7bc();
  iVar1 = iStack_20;
  *puStack_8c = in_stack_00000004;
  FUN_0008e7bc();
  *puStack_8c = in_stack_00000008;
  uStack_64 = _UNK_00651380;
  iStack_60 = iStack_20;
  FUN_0001eed8();
  iStack_8 = iVar1;
  FUN_0001cd7c();
  iVar1 = iStack_8;
  puVar2 = PTR_DAT_00651390;
  printerApi_service_k3c_CallContext();
  if (puStack_84 != (undefined4 *)0x0) {
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00651354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  if (*(int *)(iStack_8 + 0x1c) != 0) {
    uVar3 = FUN_00098e0c(iStack_8,*(int *)(iStack_8 + 0x1c),auStack_3c);
    FUN_00098e0c(uVar3,auStack_3c,auStack_54);
    FUN_00098a28(0,&puStack_1c);
    FUN_0008a578();
    puStack_1c = PTR_SUB_00651398;
    puStack_18 = puVar2;
    FUN_0008a578();
    puStack_14 = PTR_SUB_00651398;
    puStack_10 = puVar2;
    FUN_001331ac();
    FUN_0001eed8();
    piVar4 = (int *)&DAT_00000007;
    _DAT_0000000b = puStack_84;
    if (*(int *)PTR_DAT_006513a4 != 0) {
      piVar4 = (int *)FUN_00098678();
      *unaff_r8 = iVar1;
    }
    *piVar4 = iVar1;
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00651280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_0001eed8();
  uStack_c = uStack_24;
  FUN_0016a168();
  if (iVar1 == 0) {
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00651328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x006512f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/filament_hub.FilamentHubController.SetFilamentInfo @ 006513b4 (size 660) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_filament_hub_FilamentHubController_SetFilamentInfo(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000030;
  undefined4 *puStack_68;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [28];
  undefined *puStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined *puStack_8;
  undefined4 *puStack_4;
  
  while (&puStack_4 <= *(undefined4 ***)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x65164c;
    FUN_00096bb8();
  }
  puStack_4 = (undefined4 *)0x0;
  FUN_00155144();
  puStack_4 = puStack_68;
  FUN_0008e314();
  FUN_0001cd7c();
  puVar1 = PTR_DAT_00651668;
  printerApi_service_k3c_CallContext();
  if (puStack_68 == (undefined4 *)0x0) {
    if (*(int *)(in_stack_00000030 + 0x1c) != 0) {
      uVar2 = FUN_00098e0c(in_stack_00000030,*(int *)(in_stack_00000030 + 0x1c),auStack_30);
      FUN_00098e0c(uVar2,auStack_30,auStack_48);
      FUN_00098a28(0,&puStack_14);
      FUN_0008a578();
      puStack_14 = PTR_SUB_00651670;
      puStack_10 = puVar1;
      FUN_0008a578();
      puStack_c = PTR_SUB_00651670;
      puStack_8 = puVar1;
      FUN_001331ac();
      FUN_0001eed8();
      piVar3 = (int *)&DAT_00000007;
      _DAT_0000000b = puStack_68;
      if (*(int *)PTR_DAT_0065167c != 0) {
        piVar3 = (int *)FUN_00098678();
        *unaff_r8 = in_stack_00000030;
      }
      *piVar3 = in_stack_00000030;
      (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x006515ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00651614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00651638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/filament_hub.FilamentHubController.FilamentRecognition @ 00651684 (size 660) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_filament_hub_FilamentHubController_FilamentRecognition(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_0000001c;
  undefined4 *puStack_68;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [28];
  undefined *puStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined *puStack_8;
  undefined4 *puStack_4;
  
  while (&puStack_4 <= *(undefined4 ***)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x65191c;
    FUN_00096bb8();
  }
  puStack_4 = (undefined4 *)0x0;
  FUN_00155144();
  puStack_4 = puStack_68;
  FUN_0008e314();
  FUN_0001cd7c();
  puVar1 = PTR_DAT_00651938;
  printerApi_service_k3c_CallContext();
  if (puStack_68 == (undefined4 *)0x0) {
    if (*(int *)(in_stack_0000001c + 0x1c) != 0) {
      uVar2 = FUN_00098e0c(in_stack_0000001c,*(int *)(in_stack_0000001c + 0x1c),auStack_30);
      FUN_00098e0c(uVar2,auStack_30,auStack_48);
      FUN_00098a28(0,&puStack_14);
      FUN_0008a578();
      puStack_14 = PTR_SUB_00651940;
      puStack_10 = puVar1;
      FUN_0008a578();
      puStack_c = PTR_SUB_00651940;
      puStack_8 = puVar1;
      FUN_001331ac();
      FUN_0001eed8();
      piVar3 = (int *)&DAT_00000007;
      _DAT_0000000b = puStack_68;
      if (*(int *)PTR_DAT_0065194c != 0) {
        piVar3 = (int *)FUN_00098678();
        *unaff_r8 = in_stack_0000001c;
      }
      *piVar3 = in_stack_0000001c;
      (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x006518bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x006518e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00651908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/filament_hub.FilamentHubController.GetConfig @ 00651954 (size 660) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_filament_hub_FilamentHubController_GetConfig(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_0000001c;
  undefined4 *puStack_68;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [28];
  undefined *puStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined *puStack_8;
  undefined4 *puStack_4;
  
  while (&puStack_4 <= *(undefined4 ***)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x651bec;
    FUN_00096bb8();
  }
  puStack_4 = (undefined4 *)0x0;
  FUN_00155144();
  puStack_4 = puStack_68;
  FUN_0008e314();
  FUN_0001cd7c();
  puVar1 = PTR_DAT_00651c08;
  printerApi_service_k3c_CallContext();
  if (puStack_68 == (undefined4 *)0x0) {
    if (*(int *)(in_stack_0000001c + 0x1c) != 0) {
      uVar2 = FUN_00098e0c(in_stack_0000001c,*(int *)(in_stack_0000001c + 0x1c),auStack_30);
      FUN_00098e0c(uVar2,auStack_30,auStack_48);
      FUN_00098a28(0,&puStack_14);
      FUN_0008a578();
      puStack_14 = PTR_SUB_00651c10;
      puStack_10 = puVar1;
      FUN_0008a578();
      puStack_c = PTR_SUB_00651c10;
      puStack_8 = puVar1;
      FUN_001331ac();
      FUN_0001eed8();
      piVar3 = (int *)&DAT_00000007;
      _DAT_0000000b = puStack_68;
      if (*(int *)PTR_DAT_00651c1c != 0) {
        piVar3 = (int *)FUN_00098678();
        *unaff_r8 = in_stack_0000001c;
      }
      *piVar3 = in_stack_0000001c;
      (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00651b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00651bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00651bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/filament_hub.FilamentHubController.SetConfig @ 00651c24 (size 660) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_filament_hub_FilamentHubController_SetConfig(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000028;
  undefined4 *puStack_68;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [28];
  undefined *puStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined *puStack_8;
  undefined4 *puStack_4;
  
  while (&puStack_4 <= *(undefined4 ***)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x651ebc;
    FUN_00096bb8();
  }
  puStack_4 = (undefined4 *)0x0;
  FUN_00155144();
  puStack_4 = puStack_68;
  FUN_0008e314();
  FUN_0001cd7c();
  puVar1 = PTR_DAT_00651ed8;
  printerApi_service_k3c_CallContext();
  if (puStack_68 == (undefined4 *)0x0) {
    if (*(int *)(in_stack_00000028 + 0x1c) != 0) {
      uVar2 = FUN_00098e0c(in_stack_00000028,*(int *)(in_stack_00000028 + 0x1c),auStack_30);
      FUN_00098e0c(uVar2,auStack_30,auStack_48);
      FUN_00098a28(0,&puStack_14);
      FUN_0008a578();
      puStack_14 = PTR_SUB_00651ee0;
      puStack_10 = puVar1;
      FUN_0008a578();
      puStack_c = PTR_SUB_00651ee0;
      puStack_8 = puVar1;
      FUN_001331ac();
      FUN_0001eed8();
      piVar3 = (int *)&DAT_00000007;
      _DAT_0000000b = puStack_68;
      if (*(int *)PTR_DAT_00651eec != 0) {
        piVar3 = (int *)FUN_00098678();
        *unaff_r8 = in_stack_00000028;
      }
      *piVar3 = in_stack_00000028;
      (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00651e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00651e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00651ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/filament_hub.FilamentHubController.FeedNotify @ 00651ef4 (size 236) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_filament_hub_FilamentHubController_FeedNotify(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -100);
      *(undefined4 *)((int)register0x00000054 + -100) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x60) = *_UNK_00651fe4;
      FUN_0009bf4c();
      bVar3 = *(int *)((int)register0x00000054 + -0x5c) == _UNK_00651fe8;
      if (bVar3) {
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x58);
        uVar1 = FUN_00098a10(0,(undefined1 *)((int)register0x00000054 + -0x2c));
        *(undefined4 *)((int)register0x00000054 + -0x2c) =
             *(undefined4 *)((int)register0x00000054 + 0x14);
        *(undefined4 *)((int)register0x00000054 + -0x28) =
             *(undefined4 *)((int)register0x00000054 + 0x18);
        *(undefined4 *)((int)register0x00000054 + -0x24) =
             *(undefined4 *)((int)register0x00000054 + 0x1c);
        *(undefined4 *)((int)register0x00000054 + -0x20) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + 0x24);
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)((int)register0x00000054 + 0x28);
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + 0x2c);
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + 0x30);
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x34);
        *(undefined4 *)((int)register0x00000054 + -8) =
             *(undefined4 *)((int)register0x00000054 + 0x38);
        *(undefined1 **)((int)register0x00000054 + -0x60) =
             (undefined1 *)((int)register0x00000054 + -4);
        FUN_00098dec(uVar1,(undefined1 *)((int)register0x00000054 + -0x2c),
                     (undefined1 *)((int)register0x00000054 + -0x5c));
        printerApi_service_k3c_wrapper___K3cwrapper__PublishFilamentHubFeed();
        *(undefined4 *)((int)register0x00000054 + 0x40) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x44) = 0;
                    /* WARNING: Could not recover jumptable at 0x00651fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -100))();
        return;
      }
      *(int *)((int)register0x00000054 + -0x60) = *(int *)((int)register0x00000054 + -0x5c);
      *(int *)((int)register0x00000054 + -0x5c) = _UNK_00651fe8;
      *(undefined4 *)((int)register0x00000054 + -0x58) = _UNK_00651fec;
      param_1 = FUN_0001cb94();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -100);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x651fdc;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/filament_hub.FilamentHubController.UnwindNotify @ 00651ff0 (size 236) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_filament_hub_FilamentHubController_UnwindNotify(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -100);
      *(undefined4 *)((int)register0x00000054 + -100) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x60) = *_UNK_006520e0;
      FUN_0009bf4c();
      bVar3 = *(int *)((int)register0x00000054 + -0x5c) == _UNK_006520e4;
      if (bVar3) {
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x58);
        uVar1 = FUN_00098a10(0,(undefined1 *)((int)register0x00000054 + -0x2c));
        *(undefined4 *)((int)register0x00000054 + -0x2c) =
             *(undefined4 *)((int)register0x00000054 + 0x14);
        *(undefined4 *)((int)register0x00000054 + -0x28) =
             *(undefined4 *)((int)register0x00000054 + 0x18);
        *(undefined4 *)((int)register0x00000054 + -0x24) =
             *(undefined4 *)((int)register0x00000054 + 0x1c);
        *(undefined4 *)((int)register0x00000054 + -0x20) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + 0x24);
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)((int)register0x00000054 + 0x28);
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + 0x2c);
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + 0x30);
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x34);
        *(undefined4 *)((int)register0x00000054 + -8) =
             *(undefined4 *)((int)register0x00000054 + 0x38);
        *(undefined1 **)((int)register0x00000054 + -0x60) =
             (undefined1 *)((int)register0x00000054 + -4);
        FUN_00098dec(uVar1,(undefined1 *)((int)register0x00000054 + -0x2c),
                     (undefined1 *)((int)register0x00000054 + -0x5c));
        printerApi_service_k3c_wrapper___K3cwrapper__PublishFilamentHubUnwind();
        *(undefined4 *)((int)register0x00000054 + 0x40) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x44) = 0;
                    /* WARNING: Could not recover jumptable at 0x006520b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -100))();
        return;
      }
      *(int *)((int)register0x00000054 + -0x60) = *(int *)((int)register0x00000054 + -0x5c);
      *(int *)((int)register0x00000054 + -0x5c) = _UNK_006520e4;
      *(undefined4 *)((int)register0x00000054 + -0x58) = _UNK_006520e8;
      param_1 = FUN_0001cb94();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -100);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x6520d8;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/filament_hub.FilamentHubController.GetACMInfo @ 006520ec (size 652) */

void printerApi_controller_filament_hub_FilamentHubController_GetACMInfo(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined *extraout_r2;
  undefined *puVar4;
  int extraout_r3;
  int iVar5;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 *in_stack_00000024;
  int in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  int iStack_34;
  undefined *puStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  while (puVar2 = in_stack_00000024, uVar1 = in_stack_0000001c,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x652374;
    FUN_00096bb8();
  }
  printerApi_service_filament_hub_GetACMInfo();
  if (iStack_34 == 0) {
    FUN_0008b6b8();
    internal_filepathlite_Base();
    FUN_0008a578();
    FUN_0008e7bc();
    *puVar2 = PTR_SUB_0065237c;
    puVar3 = puVar2;
    if (*(int *)PTR_DAT_0065238c != 0) {
      puVar3 = (undefined4 *)FUN_00098688();
      *unaff_r8 = uVar1;
      unaff_r8[1] = puVar3[1];
    }
    puVar3[1] = uVar1;
    FUN_0008a61c();
    puVar4 = PTR_DAT_00652390;
    FUN_0008e7bc();
    *puVar2 = PTR_DAT_00652394;
    puVar3 = puVar2;
    if (*(int *)PTR_DAT_0065238c != 0) {
      puVar3 = (undefined4 *)FUN_00098688();
      *unaff_r8 = 0xf;
      unaff_r8[1] = puVar3[1];
    }
    puVar3[1] = 0xf;
    FUN_001707f4();
    *(undefined4 *)(in_stack_00000028 + 0x14) = 4;
    *(undefined4 **)(in_stack_00000028 + 0x18) = puVar2;
    iVar5 = in_stack_00000028;
    if (*(int *)PTR_DAT_0065238c != 0) {
      FUN_00098688();
      *unaff_r8 = extraout_r2;
      unaff_r8[1] = *(undefined4 *)(extraout_r3 + 0x10);
      puVar4 = extraout_r2;
      iVar5 = extraout_r3;
    }
    *(undefined **)(iVar5 + 0x10) = puVar4;
    in_stack_0000002c = 0;
    in_stack_00000030 = 0;
                    /* WARNING: Could not recover jumptable at 0x00652368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_00098a28(0,&puStack_10);
  FUN_0008a578();
  puStack_10 = PTR_SUB_0065237c;
  uStack_c = uVar1;
  if (iStack_34 == 0) {
    uStack_8 = 0;
  }
  else {
    uStack_8 = *(undefined4 *)(iStack_34 + 4);
  }
  printerApi_common_logger_Errorf();
                    /* WARNING: Could not recover jumptable at 0x006521d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/filament_hub.FilamentHubController.SetACMInfo @ 00652398 (size 264) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_filament_hub_FilamentHubController_SetACMInfo(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  int in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 *puStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 *puStack_14;
  undefined4 uStack_10;
  undefined4 *puStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x65249c;
    FUN_00096bb8();
  }
  FUN_00098dec(in_stack_00000014,&stack0x0000001c,&puStack_50,in_stack_00000018,
               UNRECOVERED_JUMPTABLE,in_stack_00000014,in_stack_00000018);
  printerApi_service_filament_hub_SetACMInfo();
  if (iStack_28 != 0) {
    uStack_1c = uStack_24;
    iStack_20 = iStack_28;
    FUN_00098a20(0,&uStack_18);
    FUN_0008a578();
    uStack_18 = _UNK_006524a4;
    puStack_14 = puStack_50;
    FUN_0001cd7c();
    uStack_10 = _UNK_006524a8;
    puStack_c = puStack_50;
    if (iStack_20 == 0) {
      uStack_8 = 0;
    }
    else {
      uStack_8 = *(undefined4 *)(iStack_20 + 4);
    }
    uStack_4 = uStack_1c;
    puStack_50 = &uStack_18;
    uStack_4c = 3;
    uStack_48 = 3;
    printerApi_common_logger_Errorf();
    iStack_28 = iStack_20;
    uStack_24 = uStack_1c;
  }
  in_stack_00000048 = iStack_28;
  in_stack_0000004c = uStack_24;
                    /* WARNING: Could not recover jumptable at 0x00652490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/filament_hub.FilamentHubController.SetAllACMInfo @ 006524b0 (size 284) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_filament_hub_FilamentHubController_SetAllACMInfo(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  int iStack_28;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  while (uVar2 = in_stack_00000020, uVar1 = in_stack_0000001c,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x6525c8;
    FUN_00096bb8();
  }
  printerApi_service_filament_hub_SetAllACMInfo();
  if (iStack_28 != 0) {
    FUN_00098a20(0,&uStack_18);
    FUN_0008a578();
    uStack_18 = _UNK_006525d0;
    uStack_14 = uVar1;
    FUN_0008a61c();
    uStack_10 = _UNK_006525d4;
    uStack_c = uVar2;
    if (iStack_28 == 0) {
      uStack_8 = 0;
    }
    else {
      uStack_8 = *(undefined4 *)(iStack_28 + 4);
    }
    printerApi_common_logger_Errorf();
  }
                    /* WARNING: Could not recover jumptable at 0x006525bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/filament_hub.(*FilamentHubController).AllInfo @ 006525dc (size 132) */

void printerApi_controller_filament_hub___FilamentHubController__AllInfo(undefined4 param_1)

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
        printerApi_controller_filament_hub_FilamentHubController_AllInfo();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0065262c. Too many branches */
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
    unaff_lr = 0x652640;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/filament_hub.(*FilamentHubController).FeedFilament @ 00652660 (size 132) */

void printerApi_controller_filament_hub___FilamentHubController__FeedFilament(undefined4 param_1)

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
        printerApi_controller_filament_hub_FilamentHubController_FeedFilament();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x006526b0. Too many branches */
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
    unaff_lr = 0x6526c4;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/filament_hub.(*FilamentHubController).FeedNotify @ 006526e4 (size 132) */

void printerApi_controller_filament_hub___FilamentHubController__FeedNotify(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x48);
      *(undefined4 *)((int)register0x00000054 + -0x48) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x44);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098dcc(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x44));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x40);
        printerApi_controller_filament_hub_FilamentHubController_FeedNotify();
        *(undefined4 *)((int)register0x00000054 + 0x44) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x48) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00652734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x48))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x48);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x652748;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/filament_hub.(*FilamentHubController).FilamentInfo @ 00652768 (size 132) */

void printerApi_controller_filament_hub___FilamentHubController__FilamentInfo(undefined4 param_1)

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
        printerApi_controller_filament_hub_FilamentHubController_FilamentInfo();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x006527b8. Too many branches */
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
    unaff_lr = 0x6527cc;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/filament_hub.(*FilamentHubController).FilamentRecognition @ 006527ec (size 132) */

void printerApi_controller_filament_hub___FilamentHubController__FilamentRecognition
               (undefined4 param_1)

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
        printerApi_controller_filament_hub_FilamentHubController_FilamentRecognition();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0065283c. Too many branches */
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
    unaff_lr = 0x652850;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/filament_hub.(*FilamentHubController).GetACMInfo @ 00652870 (size 132) */

void printerApi_controller_filament_hub___FilamentHubController__GetACMInfo(undefined4 param_1)

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
        printerApi_controller_filament_hub_FilamentHubController_GetACMInfo();
        *(undefined4 *)((int)register0x00000054 + 0x30) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x34) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x006528c0. Too many branches */
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
    unaff_lr = 0x6528d4;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/filament_hub.(*FilamentHubController).GetConfig @ 006528f4 (size 132) */

void printerApi_controller_filament_hub___FilamentHubController__GetConfig(undefined4 param_1)

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
        printerApi_controller_filament_hub_FilamentHubController_GetConfig();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00652944. Too many branches */
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
    unaff_lr = 0x652958;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/filament_hub.(*FilamentHubController).Info @ 00652978 (size 132) */

void printerApi_controller_filament_hub___FilamentHubController__Info(undefined4 param_1)

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
        printerApi_controller_filament_hub_FilamentHubController_Info();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x006529c8. Too many branches */
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
    unaff_lr = 0x6529dc;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/filament_hub.(*FilamentHubController).QueryVersion @ 006529fc (size 132) */

void printerApi_controller_filament_hub___FilamentHubController__QueryVersion(undefined4 param_1)

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
        printerApi_controller_filament_hub_FilamentHubController_QueryVersion();
        *(undefined4 *)((int)register0x00000054 + 0x20) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00652a4c. Too many branches */
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
    unaff_lr = 0x652a60;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/filament_hub.(*FilamentHubController).SetACMInfo @ 00652a80 (size 132) */

void printerApi_controller_filament_hub___FilamentHubController__SetACMInfo(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x50);
      *(undefined4 *)((int)register0x00000054 + -0x50) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x4c);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098dbc(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x4c));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x48);
        printerApi_controller_filament_hub_FilamentHubController_SetACMInfo();
        *(undefined4 *)((int)register0x00000054 + 0x4c) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x50) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00652ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x50))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x50);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x652ae4;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/filament_hub.(*FilamentHubController).SetAllACMInfo @ 00652b04 (size 132) */

void printerApi_controller_filament_hub___FilamentHubController__SetAllACMInfo(undefined4 param_1)

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
        printerApi_controller_filament_hub_FilamentHubController_SetAllACMInfo();
        *(undefined4 *)((int)register0x00000054 + 0x30) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x34) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00652b54. Too many branches */
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
    unaff_lr = 0x652b68;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/filament_hub.(*FilamentHubController).SetConfig @ 00652b88 (size 132) */

void printerApi_controller_filament_hub___FilamentHubController__SetConfig(undefined4 param_1)

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
        printerApi_controller_filament_hub_FilamentHubController_SetConfig();
        *(undefined4 *)((int)register0x00000054 + 0x30) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x34) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00652bd8. Too many branches */
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
    unaff_lr = 0x652bec;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/filament_hub.(*FilamentHubController).SetFilamentInfo @ 00652c0c (size 132) */

void printerApi_controller_filament_hub___FilamentHubController__SetFilamentInfo(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x3c);
      *(undefined4 *)((int)register0x00000054 + -0x3c) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x38);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098de4(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x38));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x34);
        printerApi_controller_filament_hub_FilamentHubController_SetFilamentInfo();
        *(undefined4 *)((int)register0x00000054 + 0x38) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x3c) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00652c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x3c))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x3c);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x652c70;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/filament_hub.(*FilamentHubController).StartDrying @ 00652c90 (size 132) */

void printerApi_controller_filament_hub___FilamentHubController__StartDrying(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x3c);
      *(undefined4 *)((int)register0x00000054 + -0x3c) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x38);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098de4(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x38));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x34);
        printerApi_controller_filament_hub_FilamentHubController_StartDrying();
        *(undefined4 *)((int)register0x00000054 + 0x38) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x3c) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00652ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x3c))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x3c);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x652cf4;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/filament_hub.(*FilamentHubController).StartDryingFirst @ 00652d14 (size 132) */

void printerApi_controller_filament_hub___FilamentHubController__StartDryingFirst
               (undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x3c);
      *(undefined4 *)((int)register0x00000054 + -0x3c) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x38);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098de4(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x38));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x34);
        printerApi_controller_filament_hub_FilamentHubController_StartDryingFirst();
        *(undefined4 *)((int)register0x00000054 + 0x38) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x3c) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00652d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x3c))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x3c);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x652d78;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/filament_hub.(*FilamentHubController).StopDrying @ 00652d98 (size 132) */

void printerApi_controller_filament_hub___FilamentHubController__StopDrying(undefined4 param_1)

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
        printerApi_controller_filament_hub_FilamentHubController_StopDrying();
        *(undefined4 *)((int)register0x00000054 + 0x20) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00652de8. Too many branches */
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
    unaff_lr = 0x652dfc;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/filament_hub.(*FilamentHubController).UnwindFilament @ 00652e1c (size 132) */

void printerApi_controller_filament_hub___FilamentHubController__UnwindFilament(undefined4 param_1)

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
        printerApi_controller_filament_hub_FilamentHubController_UnwindFilament();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00652e6c. Too many branches */
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
    unaff_lr = 0x652e80;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/filament_hub.(*FilamentHubController).UnwindNotify @ 00652ea0 (size 132) */

void printerApi_controller_filament_hub___FilamentHubController__UnwindNotify(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x48);
      *(undefined4 *)((int)register0x00000054 + -0x48) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x44);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098dcc(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x44));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x40);
        printerApi_controller_filament_hub_FilamentHubController_UnwindNotify();
        *(undefined4 *)((int)register0x00000054 + 0x44) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x48) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00652ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x48))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x48);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x652f04;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/filament_hub.(*FilamentHubController).UpgradeVersion @ 00652f24 (size 132) */

void printerApi_controller_filament_hub___FilamentHubController__UpgradeVersion(undefined4 param_1)

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
        printerApi_controller_filament_hub_FilamentHubController_UpgradeVersion();
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x2c) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00652f74. Too many branches */
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
    unaff_lr = 0x652f88;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



