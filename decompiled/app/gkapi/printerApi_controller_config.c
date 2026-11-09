// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/controller/config   functions: 6
/* printerApi/controller/config.ConfigController.GetPrinterConfInfo @ 0064bd6c (size 224) */

void printerApi_controller_config_ConfigController_GetPrinterConfInfo(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *puStack_10;
  char cStack_c;
  
  while (uVar2 = in_stack_00000008, uVar1 = in_stack_00000004,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x64be48;
    FUN_00096bb8();
  }
  FUN_0008e314();
  if (cStack_c != '\0') {
    uVar1 = *puStack_10;
    uVar2 = puStack_10[1];
  }
  in_stack_00000004 = uVar1;
  in_stack_00000008 = uVar2;
  FUN_0001cd7c();
  printerApi_service_k3c_Call();
  if (puStack_10 == (undefined4 *)0x0) {
    in_stack_00000020 = 0;
    in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x0064be3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0064be28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/config.ConfigController.PrinterConfSave @ 0064be60 (size 224) */

void printerApi_controller_config_ConfigController_PrinterConfSave(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *puStack_10;
  char cStack_c;
  
  while (uVar2 = in_stack_00000008, uVar1 = in_stack_00000004,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x64bf3c;
    FUN_00096bb8();
  }
  FUN_0008e314();
  if (cStack_c != '\0') {
    uVar1 = *puStack_10;
    uVar2 = puStack_10[1];
  }
  in_stack_00000004 = uVar1;
  in_stack_00000008 = uVar2;
  FUN_0001cd7c();
  printerApi_service_k3c_Call();
  if (puStack_10 == (undefined4 *)0x0) {
    in_stack_00000020 = 0;
    in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x0064bf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0064bf1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/config.ConfigController.SaveConfig @ 0064bf54 (size 224) */

void printerApi_controller_config_ConfigController_SaveConfig(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *puStack_10;
  char cStack_c;
  
  while (uVar2 = in_stack_00000008, uVar1 = in_stack_00000004,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x64c030;
    FUN_00096bb8();
  }
  FUN_0008e314();
  if (cStack_c != '\0') {
    uVar1 = *puStack_10;
    uVar2 = puStack_10[1];
  }
  in_stack_00000004 = uVar1;
  in_stack_00000008 = uVar2;
  FUN_0001cd7c();
  printerApi_service_k3c_Call();
  if (puStack_10 == (undefined4 *)0x0) {
    in_stack_00000020 = 0;
    in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x0064c024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0064c010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/config.(*ConfigController).GetPrinterConfInfo @ 0064c048 (size 132) */

void printerApi_controller_config___ConfigController__GetPrinterConfInfo(undefined4 param_1)

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
        printerApi_controller_config_ConfigController_GetPrinterConfInfo();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0064c098. Too many branches */
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
    unaff_lr = 0x64c0ac;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/config.(*ConfigController).PrinterConfSave @ 0064c0cc (size 132) */

void printerApi_controller_config___ConfigController__PrinterConfSave(undefined4 param_1)

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
        printerApi_controller_config_ConfigController_PrinterConfSave();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0064c11c. Too many branches */
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
    unaff_lr = 0x64c130;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/config.(*ConfigController).SaveConfig @ 0064c150 (size 132) */

void printerApi_controller_config___ConfigController__SaveConfig(undefined4 param_1)

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
        printerApi_controller_config_ConfigController_SaveConfig();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0064c1a0. Too many branches */
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
    unaff_lr = 0x64c1b4;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



