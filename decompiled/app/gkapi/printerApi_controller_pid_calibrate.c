// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/controller/pid_calibrate   functions: 4
/* printerApi/controller/pid_calibrate.PidCalibrateController.Heaterbed @ 0065e8ec (size 656) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_pid_calibrate_PidCalibrateController_Heaterbed(void)

{
  undefined *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
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
    UNRECOVERED_JUMPTABLE_00 = (code *)0x65eb80;
    FUN_00096bb8();
  }
  puStack_4 = (undefined4 *)0x0;
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
  FUN_00098a20(0,&uStack_38);
  uVar4 = in_stack_00000010;
  uVar3 = in_stack_0000000c;
  puVar1 = PTR_DAT_0065eb8c;
  uVar5 = *(undefined4 *)PTR_DAT_0065eb88;
  FUN_0008e314();
  if ((uStack_58 & 0xff) != 0) {
    uVar3 = *puStack_5c;
    uVar4 = puStack_5c[1];
  }
  uStack_28 = in_stack_00000004;
  uStack_24 = in_stack_00000008;
  uStack_38 = uVar3;
  uStack_34 = uVar4;
  FUN_0008b6b8();
  puStack_18 = puVar1;
  FUN_00098a28(0,&puStack_14);
  FUN_0001cec0();
  puStack_14 = PTR_DAT_0065eb90;
  uStack_10 = uVar5;
  FUN_0001cec0();
  puStack_c = PTR_DAT_0065eb90;
  uStack_8 = uVar5;
  FUN_001331ac();
  uStack_1c = uStack_58;
  FUN_0008e7bc();
  puVar2 = (uint *)0x2;
  _DAT_00000006 = puStack_54;
  if (*(int *)PTR_DAT_0065eb9c != 0) {
    puVar2 = (uint *)FUN_00098688();
    *(uint *)puVar1 = uStack_1c;
    *(uint *)(puVar1 + 4) = *puVar2;
  }
  *puVar2 = uStack_1c;
  puStack_30 = PTR_DAT_0065eb8c;
  puStack_2c = puStack_18;
  FUN_00155144();
  puStack_4 = puStack_54;
  FUN_0001cd7c();
  printerApi_service_k3c_CallContext();
  if (puStack_54 == (undefined4 *)0x0) {
    in_stack_00000020 = 0;
    in_stack_00000024 = 0;
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0065eb6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0065eb44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/pid_calibrate.PidCalibrateController.Extruder @ 0065ebb4 (size 656) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_pid_calibrate_PidCalibrateController_Extruder(void)

{
  undefined *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
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
    UNRECOVERED_JUMPTABLE_00 = (code *)0x65ee48;
    FUN_00096bb8();
  }
  puStack_4 = (undefined4 *)0x0;
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
  FUN_00098a20(0,&uStack_38);
  uVar4 = in_stack_00000010;
  uVar3 = in_stack_0000000c;
  puVar1 = PTR_DAT_0065ee54;
  uStack_28 = in_stack_00000004;
  uStack_24 = in_stack_00000008;
  uVar5 = *(undefined4 *)PTR_DAT_0065ee50;
  FUN_0008e314();
  if ((uStack_58 & 0xff) != 0) {
    uVar3 = *puStack_5c;
    uVar4 = puStack_5c[1];
  }
  uStack_38 = uVar3;
  uStack_34 = uVar4;
  FUN_0008b6b8();
  puStack_18 = puVar1;
  FUN_00098a28(0,&puStack_14);
  FUN_0001cec0();
  puStack_14 = PTR_DAT_0065ee58;
  uStack_10 = uVar5;
  FUN_0001cec0();
  puStack_c = PTR_DAT_0065ee58;
  uStack_8 = uVar5;
  FUN_001331ac();
  uStack_1c = uStack_58;
  FUN_0008e7bc();
  puVar2 = (uint *)0x2;
  _DAT_00000006 = puStack_54;
  if (*(int *)PTR_DAT_0065ee64 != 0) {
    puVar2 = (uint *)FUN_00098688();
    *(uint *)puVar1 = uStack_1c;
    *(uint *)(puVar1 + 4) = *puVar2;
  }
  *puVar2 = uStack_1c;
  puStack_30 = PTR_DAT_0065ee54;
  puStack_2c = puStack_18;
  FUN_00155144();
  puStack_4 = puStack_54;
  FUN_0001cd7c();
  printerApi_service_k3c_CallContext();
  if (puStack_54 == (undefined4 *)0x0) {
    in_stack_00000020 = 0;
    in_stack_00000024 = 0;
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0065ee34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0065ee0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/pid_calibrate.(*PidCalibrateController).Extruder @ 0065ee7c (size 132) */

void printerApi_controller_pid_calibrate___PidCalibrateController__Extruder(undefined4 param_1)

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
        printerApi_controller_pid_calibrate_PidCalibrateController_Extruder();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0065eecc. Too many branches */
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
    unaff_lr = 0x65eee0;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/pid_calibrate.(*PidCalibrateController).Heaterbed @ 0065ef00 (size 132) */

void printerApi_controller_pid_calibrate___PidCalibrateController__Heaterbed(undefined4 param_1)

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
        printerApi_controller_pid_calibrate_PidCalibrateController_Heaterbed();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0065ef50. Too many branches */
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
    unaff_lr = 0x65ef64;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



