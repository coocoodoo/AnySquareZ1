// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/controller/sys   functions: 6
/* printerApi/controller/sys.MaintainController.Notice @ 00668860 (size 64) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_sys_MaintainController_Notice(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x66889c;
    FUN_00096bb8();
  }
  printerApi_cloud___printerHandler__ReportNotice();
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x00668890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/sys.MaintainController.GetUrl @ 006688a8 (size 272) */

void printerApi_controller_sys_MaintainController_GetUrl(void)

{
  undefined4 *puVar1;
  undefined *extraout_r2;
  undefined *puVar2;
  int extraout_r3;
  int iVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 uStack_1c;
  undefined4 *puStack_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x6689b4;
    FUN_00096bb8();
  }
  FUN_0008b6b8();
  FUN_0008a578();
  puVar2 = PTR_DAT_006689c8;
  FUN_0008e7bc();
  *puStack_14 = PTR_SUB_006689cc;
  puVar1 = puStack_14;
  if (*(int *)PTR_DAT_006689d0 != 0) {
    puVar1 = (undefined4 *)FUN_00098688();
    *unaff_r8 = uStack_1c;
    unaff_r8[1] = puVar1[1];
  }
  puVar1[1] = uStack_1c;
  FUN_001707f4();
  *(undefined4 *)(in_stack_0000001c + 0x14) = 0xc;
  *(undefined4 **)(in_stack_0000001c + 0x18) = puStack_14;
  iVar3 = in_stack_0000001c;
  if (*(int *)PTR_DAT_006689d0 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r2;
    unaff_r8[1] = *(undefined4 *)(extraout_r3 + 0x10);
    puVar2 = extraout_r2;
    iVar3 = extraout_r3;
  }
  *(undefined **)(iVar3 + 0x10) = puVar2;
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x006689a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/sys.SystemController.SetDebug @ 006689d4 (size 224) */

void printerApi_controller_sys_SystemController_SetDebug(void)

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
    UNRECOVERED_JUMPTABLE_00 = (code *)0x668ab0;
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
                    /* WARNING: Could not recover jumptable at 0x00668aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00668a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/sys.(*MaintainController).GetUrl @ 00668ac8 (size 332) */

void printerApi_controller_sys___MaintainController__GetUrl(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 extraout_r2;
  int iVar5;
  int extraout_r3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar6;
  undefined4 unaff_lr;
  bool bVar7;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar6 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)((int)register0x00000054 + -0x24);
      }
      bVar7 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar7) {
        FUN_0008b6b8();
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x24);
        uVar4 = *(undefined4 *)PTR_DAT_00668c1c;
        *(undefined4 *)((int)register0x00000054 + -0x24) = *(undefined4 *)PTR_DAT_00668c18;
        *(undefined4 *)((int)register0x00000054 + -0x20) = uVar4;
        FUN_0008a578();
        *(undefined4 *)((int)register0x00000054 + -8) =
             *(undefined4 *)((int)register0x00000054 + -0x1c);
        *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_00668c20;
        *(undefined4 *)((int)register0x00000054 + -0x20) =
             *(undefined4 *)((int)register0x00000054 + -4);
        *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_00668c24;
        *(undefined4 *)((int)register0x00000054 + -0x18) = 0xc;
        FUN_0008e7bc();
        puVar1 = *(undefined4 **)((int)register0x00000054 + -0x14);
        *puVar1 = PTR_SUB_00668c28;
        if (*(int *)PTR_DAT_00668c2c == 0) {
          uVar4 = *(undefined4 *)((int)register0x00000054 + -8);
        }
        else {
          puVar1 = (undefined4 *)FUN_00098688();
          uVar4 = *(undefined4 *)((int)register0x00000054 + -8);
          *unaff_r8 = uVar4;
          unaff_r8[1] = puVar1[1];
        }
        puVar1[1] = uVar4;
        *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_00668c20;
        *(undefined4 *)((int)register0x00000054 + -0x20) =
             *(undefined4 *)((int)register0x00000054 + -4);
        FUN_001707f4();
        uVar3 = *(undefined4 *)((int)register0x00000054 + -0x14);
        uVar4 = *(undefined4 *)((int)register0x00000054 + -0x1c);
        iVar5 = *(int *)((int)register0x00000054 + 0x20);
        *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)((int)register0x00000054 + -0x18);
        *(undefined4 *)(iVar5 + 0x18) = uVar3;
        if (*(int *)PTR_DAT_00668c2c != 0) {
          FUN_00098688();
          *unaff_r8 = extraout_r2;
          unaff_r8[1] = *(undefined4 *)(extraout_r3 + 0x10);
          uVar4 = extraout_r2;
          iVar5 = extraout_r3;
        }
        *(undefined4 *)(iVar5 + 0x10) = uVar4;
        *(undefined4 *)((int)register0x00000054 + 0x24) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00668be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar7) {
        register0x00000054 = (BADSPACEBASE *)puVar6;
      }
    }
    unaff_lr = 0x668bf4;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/sys.(*MaintainController).Notice @ 00668c30 (size 124) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_sys___MaintainController__Notice(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -8);
      *(undefined4 *)((int)register0x00000054 + -8) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -4);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        *(undefined4 *)((int)register0x00000054 + -4) = *_UNK_00668cb0;
        printerApi_cloud___printerHandler__ReportNotice();
        *(undefined4 *)((int)register0x00000054 + 0x24) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00668c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -8))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -8);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x668c8c;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/sys.(*SystemController).SetDebug @ 00668cb4 (size 132) */

void printerApi_controller_sys___SystemController__SetDebug(undefined4 param_1)

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
        printerApi_controller_sys_SystemController_SetDebug();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00668d04. Too many branches */
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
    unaff_lr = 0x668d18;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



