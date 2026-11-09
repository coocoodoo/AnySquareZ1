// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/controller/led   functions: 6
/* printerApi/controller/led.LedController.SetLed @ 00653ba4 (size 344) */

void printerApi_controller_led_LedController_SetLed(void)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  undefined4 *extraout_r2;
  undefined4 *puVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 *in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *puStack_10;
  char cStack_c;
  
  while (uVar2 = in_stack_00000008, uVar1 = in_stack_00000004,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x653cf8;
    FUN_00096bb8();
  }
  if ((*(int *)(*(int *)PTR_DAT_00653d00 + 0x3ac) != 0) &&
     (*(char *)(*(int *)PTR_DAT_00653d00 + 0x404) != '\0')) {
    in_stack_0000001c[2] = in_stack_00000014;
    in_stack_0000001c[3] = in_stack_00000018;
    in_stack_0000001c[1] = in_stack_00000008;
    puVar3 = in_stack_0000001c;
    if (*(int *)PTR_DAT_00653d04 != 0) {
      FUN_00098688();
      *unaff_r8 = extraout_r1;
      unaff_r8[1] = *extraout_r2;
      uVar1 = extraout_r1;
      puVar3 = extraout_r2;
    }
    *puVar3 = uVar1;
    in_stack_00000020 = 0;
    in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x00653c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
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
                    /* WARNING: Could not recover jumptable at 0x00653cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00653cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/led.LedController.SetCameraLed @ 00653d18 (size 292) */

void printerApi_controller_led_LedController_SetCameraLed(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  bool bVar5;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_lr;
      if ((*(int *)(*(int *)PTR_DAT_00653e40 + 0x3ac) != 0) &&
         (*(char *)(*(int *)PTR_DAT_00653e40 + 0x404) != '\0')) {
        uVar1 = *(undefined4 *)((int)register0x00000054 + 0x18);
        puVar3 = *(undefined4 **)((int)register0x00000054 + 0x1c);
        puVar3[2] = *(undefined4 *)((int)register0x00000054 + 0x14);
        puVar3[3] = uVar1;
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
        puVar3[1] = *(undefined4 *)((int)register0x00000054 + 8);
        if (*(int *)PTR_DAT_00653e44 != 0) {
          FUN_00098688();
          *unaff_r8 = extraout_r1;
          unaff_r8[1] = *extraout_r2;
          uVar1 = extraout_r1;
          puVar3 = extraout_r2;
        }
        *puVar3 = uVar1;
        *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x24) = 0;
                    /* WARNING: Could not recover jumptable at 0x00653d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x18))();
        return;
      }
      if (*(undefined **)((int)register0x00000054 + 0xc) == PTR_DAT_00653e48) {
        uVar1 = *(undefined4 *)((int)register0x00000054 + 0x10);
      }
      else {
        uVar1 = 0;
      }
      *(undefined **)((int)register0x00000054 + -0x14) = PTR_DAT_00653e48;
      *(undefined4 *)((int)register0x00000054 + -0x10) = uVar1;
      *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_00653e4c;
      *(undefined4 *)((int)register0x00000054 + -8) = 6;
      FUN_00021c74();
      puVar2 = (undefined *)**(undefined4 **)((int)register0x00000054 + -4);
      bVar5 = puVar2 == PTR_DAT_00653e50;
      if (bVar5) {
        *(int *)((int)register0x00000054 + -0x14) =
             (int)(longlong)*(double *)(*(undefined4 **)((int)register0x00000054 + -4))[1];
        printerApi_service_video_SetCameraLed();
        *(undefined4 *)((int)register0x00000054 + 0x20) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x00653e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x18))();
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x14) = puVar2;
      *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_00653e50;
      *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_00653e54;
      param_1 = FUN_0001cb94();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x18);
      if (bVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x653e38;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/led.LedController.GetCameraLed @ 00653e58 (size 40) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_led_LedController_GetCameraLed(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack00000020;
  
  if (*_UNK_00653e84 == 0) {
    uStack00000020 = 0;
  }
  else {
    uStack00000020 = *(undefined4 *)(*_UNK_00653e84 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00653e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/led.(*LedController).GetCameraLed @ 00653e88 (size 124) */

void printerApi_controller_led___LedController__GetCameraLed(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -4);
      *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)register0x00000054;
      }
      bVar4 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar4) {
        if (*DAT_00653f08 == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = *(undefined4 *)(*DAT_00653f08 + 0x20);
        }
        *(undefined4 *)((int)register0x00000054 + 0x24) = uVar1;
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -4);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x653ee4;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/led.(*LedController).SetCameraLed @ 00653f0c (size 132) */

void printerApi_controller_led___LedController__SetCameraLed(undefined4 param_1)

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
        printerApi_controller_led_LedController_SetCameraLed();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00653f5c. Too many branches */
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
    unaff_lr = 0x653f70;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/led.(*LedController).SetLed @ 00653f90 (size 132) */

void printerApi_controller_led___LedController__SetLed(undefined4 param_1)

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
        printerApi_controller_led_LedController_SetLed();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00653fe0. Too many branches */
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
    unaff_lr = 0x653ff4;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



