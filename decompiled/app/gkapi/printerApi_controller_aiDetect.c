// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/controller/aiDetect   functions: 4
/* printerApi/controller/aiDetect.AiDetectController.SetParam @ 006482dc (size 472) */

/* WARNING: Removing unreachable block (ram,0x00648488) */

void printerApi_controller_aiDetect_AiDetectController_SetParam(void)

{
  undefined4 uVar1;
  int extraout_r3;
  int extraout_r3_00;
  int iVar2;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined *in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  int iStack_40;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x6484b0;
    FUN_00096bb8();
  }
  uVar1 = in_stack_00000010;
  if (in_stack_0000000c != PTR_DAT_006484b8) {
    uVar1 = 0;
  }
  FUN_001707f4();
  if (iStack_40 == 0) {
    FUN_0001eed8();
    uStack_4 = uVar1;
    FUN_0016a168();
    iStack_c = *(int *)PTR_DAT_006484c4;
    FUN_00098df4(iStack_c,uStack_4,&uStack_30);
    *(undefined4 *)(iStack_c + 0x3ac) = uStack_30;
    iVar2 = iStack_c;
    if (iStack_24 != 0) {
      *(undefined4 *)(iStack_c + 0x3bc) = uStack_20;
      *(undefined4 *)(iStack_c + 0x3c0) = uStack_1c;
      if (*(int *)PTR_DAT_006484c8 != 0) {
        iStack_24 = FUN_00098688();
        *unaff_r8 = iStack_24;
        unaff_r8[1] = *(int *)(extraout_r3 + 0x3b8);
        iVar2 = extraout_r3;
      }
      *(int *)(iVar2 + 0x3b8) = iStack_24;
    }
    if (iStack_18 != 0) {
      *(undefined4 *)(iVar2 + 0x3c8) = uStack_14;
      *(undefined4 *)(iVar2 + 0x3cc) = uStack_10;
      if (*(int *)PTR_DAT_006484c8 != 0) {
        iStack_18 = FUN_00098688();
        *unaff_r8 = iStack_18;
        unaff_r8[1] = *(int *)(extraout_r3_00 + 0x3c4);
        iVar2 = extraout_r3_00;
      }
      *(int *)(iVar2 + 0x3c4) = iStack_18;
    }
    if ((*(int *)(iVar2 + 0x3b0) == 0) && (iStack_2c == 0)) {
      *(undefined4 *)(iVar2 + 0x3b0) = 2;
    }
    if ((*(int *)(iVar2 + 0x3b4) == 0) && (iStack_28 == 0)) {
      *(undefined4 *)(iVar2 + 0x3b4) = 0x3c;
    }
    printerApi_cloud___printerHandler__ReportAiSettings();
    in_stack_00000020 = 0;
    in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x00648484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006484a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/aiDetect.AiDetectController.GetParam @ 006484cc (size 172) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_aiDetect_AiDetectController_GetParam(void)

{
  int iVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_24 [36];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x648574;
    FUN_00096bb8();
  }
  FUN_00098df4(*_UNK_0064857c,*_UNK_0064857c + 0x3ac,auStack_24);
  FUN_0001cd7c();
  FUN_001707f4();
  iVar1 = in_stack_0000001c;
  *(undefined4 *)(in_stack_0000001c + 0x14) = uStack_34;
  *(undefined4 *)(in_stack_0000001c + 0x18) = uStack_30;
  if (*_UNK_00648584 != 0) {
    FUN_00098688();
    *unaff_r8 = uStack_38;
    unaff_r8[1] = *(undefined4 *)(iVar1 + 0x10);
  }
  *(undefined4 *)(iVar1 + 0x10) = uStack_38;
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x00648568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/aiDetect.(*AiDetectController).GetParam @ 00648588 (size 232) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_aiDetect___AiDetectController__GetParam(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar5;
  undefined4 unaff_lr;
  bool bVar6;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar5 = (undefined1 *)((int)register0x00000054 + -0x44);
      *(undefined4 *)((int)register0x00000054 + -0x44) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x40);
      }
      bVar6 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar6) {
        FUN_00098df4(*_UNK_00648674,*_UNK_00648674 + 0x3ac,
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0x40) = _UNK_00648678;
        *(undefined1 **)((int)register0x00000054 + -0x3c) =
             (undefined1 *)((int)register0x00000054 + -0x24);
        FUN_0001cd7c();
        *(undefined4 *)((int)register0x00000054 + -0x40) = _UNK_00648678;
        *(undefined4 *)((int)register0x00000054 + -0x3c) =
             *(undefined4 *)((int)register0x00000054 + -0x38);
        FUN_001707f4();
        uVar2 = *(undefined4 *)((int)register0x00000054 + -0x30);
        uVar3 = *(undefined4 *)((int)register0x00000054 + -0x38);
        iVar4 = *(int *)((int)register0x00000054 + 0x20);
        *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)((int)register0x00000054 + -0x34);
        *(undefined4 *)(iVar4 + 0x18) = uVar2;
        if (*_UNK_0064867c != 0) {
          FUN_00098688();
          *unaff_r8 = uVar3;
          unaff_r8[1] = *(undefined4 *)(iVar4 + 0x10);
        }
        *(undefined4 *)(iVar4 + 0x10) = uVar3;
        *(undefined4 *)((int)register0x00000054 + 0x24) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x0064863c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x44))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x44);
      if (bVar6) {
        register0x00000054 = (BADSPACEBASE *)puVar5;
      }
    }
    unaff_lr = 0x648650;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/aiDetect.(*AiDetectController).SetParam @ 00648680 (size 132) */

void printerApi_controller_aiDetect___AiDetectController__SetParam(undefined4 param_1)

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
        printerApi_controller_aiDetect_AiDetectController_SetParam();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x006486d0. Too many branches */
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
    unaff_lr = 0x6486e4;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



