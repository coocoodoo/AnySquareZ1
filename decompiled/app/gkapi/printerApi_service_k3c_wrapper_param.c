// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/service/k3c_wrapper/param   functions: 6
/* printerApi/service/k3c_wrapper/param.ResponseError.String @ 0042f9e0 (size 172) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper_param_ResponseError_String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 auStack_10 [2];
  undefined4 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x42fa88;
    FUN_00096bb8();
  }
  FUN_00098a28(0,auStack_10);
  FUN_0008a578();
  auStack_10[0] = _UNK_0042fa90;
  FUN_0008a578();
  uStack_8 = _UNK_0042fa90;
  FUN_001331ac();
                    /* WARNING: Could not recover jumptable at 0x0042fa7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/k3c_wrapper/param.ResponseError.ToError @ 0042fa98 (size 260) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper_param_ResponseError_ToError(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined *in_stack_0000001c;
  undefined4 *in_stack_00000020;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_28 [24];
  undefined *apuStack_10 [2];
  undefined *puStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x42fb98;
    param_1 = FUN_00096bb8();
  }
  FUN_00098e0c(param_1,&stack0x00000004,auStack_28);
  FUN_00098a28(0,apuStack_10);
  FUN_0008a578();
  apuStack_10[0] = PTR_SUB_0042fba0;
  FUN_0008a578();
  puStack_8 = PTR_SUB_0042fba0;
  FUN_001331ac();
  FUN_0001eed8();
  puVar1 = (undefined4 *)&DAT_00000007;
  _DAT_0000000b = uStack_34;
  if (*(int *)PTR_DAT_0042fbac != 0) {
    puVar1 = (undefined4 *)FUN_00098678();
    *unaff_r8 = uStack_38;
  }
  *puVar1 = uStack_38;
  in_stack_0000001c = PTR_DAT_0042fbb0;
  in_stack_00000020 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x0042fb8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/k3c_wrapper/param.ResponseError.Error @ 0042fbb4 (size 184) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper_param_ResponseError_Error(undefined4 param_1)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined1 auStack_28 [24];
  undefined4 auStack_10 [2];
  undefined4 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x42fc68;
    param_1 = FUN_00096bb8();
  }
  FUN_00098e0c(param_1,&stack0x00000004,auStack_28);
  FUN_00098a28(0,auStack_10);
  FUN_0008a578();
  auStack_10[0] = _UNK_0042fc70;
  FUN_0008a578();
  uStack_8 = _UNK_0042fc70;
  FUN_001331ac();
                    /* WARNING: Could not recover jumptable at 0x0042fc5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/k3c_wrapper/param.(*ResponseError).Error @ 0042fc78 (size 252) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper_param___ResponseError__Error(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x60);
      *(undefined4 *)((int)register0x00000054 + -0x60) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)((int)register0x00000054 + -0x5c);
      }
      bVar4 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar4) {
        uVar1 = FUN_00098e0c(param_1,*(int *)((int)register0x00000054 + 4),
                             (undefined1 *)((int)register0x00000054 + -0x28));
        FUN_00098e0c(uVar1,(undefined1 *)((int)register0x00000054 + -0x28),
                     (undefined1 *)((int)register0x00000054 + -0x40));
        FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x10));
        *(undefined4 *)((int)register0x00000054 + -0x5c) =
             *(undefined4 *)((int)register0x00000054 + -0x40);
        *(undefined4 *)((int)register0x00000054 + -0x58) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        FUN_0008a578();
        *(undefined4 *)((int)register0x00000054 + -0x10) = _UNK_0042fd78;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x54);
        *(undefined4 *)((int)register0x00000054 + -0x5c) =
             *(undefined4 *)((int)register0x00000054 + -0x30);
        *(undefined4 *)((int)register0x00000054 + -0x58) =
             *(undefined4 *)((int)register0x00000054 + -0x2c);
        FUN_0008a578();
        *(undefined4 *)((int)register0x00000054 + -8) = _UNK_0042fd78;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x54);
        *(undefined4 *)((int)register0x00000054 + -0x5c) = _UNK_0042fd7c;
        *(undefined4 *)((int)register0x00000054 + -0x58) = 7;
        *(undefined1 **)((int)register0x00000054 + -0x54) =
             (undefined1 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + -0x50) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x4c) = 2;
        FUN_001331ac();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x48);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x44);
                    /* WARNING: Could not recover jumptable at 0x0042fd40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x60))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x60);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x42fd54;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/service/k3c_wrapper/param.(*ResponseError).String @ 0042fd80 (size 240) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper_param___ResponseError__String(undefined4 param_1)

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
        FUN_00098e0c(param_1,*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + -0x28));
        FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x10));
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + -0x28);
        *(undefined4 *)((int)register0x00000054 + -0x40) =
             *(undefined4 *)((int)register0x00000054 + -0x24);
        FUN_0008a578();
        *(undefined4 *)((int)register0x00000054 + -0x10) = _UNK_0042fe74;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        *(undefined4 *)((int)register0x00000054 + -0x40) =
             *(undefined4 *)((int)register0x00000054 + -0x14);
        FUN_0008a578();
        *(undefined4 *)((int)register0x00000054 + -8) = _UNK_0042fe74;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        *(undefined4 *)((int)register0x00000054 + -0x44) = _UNK_0042fe78;
        *(undefined4 *)((int)register0x00000054 + -0x40) = 7;
        *(undefined1 **)((int)register0x00000054 + -0x3c) =
             (undefined1 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + -0x38) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x34) = 2;
        FUN_001331ac();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x30);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x2c);
                    /* WARNING: Could not recover jumptable at 0x0042fe3c. Too many branches */
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
    unaff_lr = 0x42fe50;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/service/k3c_wrapper/param.(*ResponseError).ToError @ 0042fe7c (size 328) */

void printerApi_service_k3c_wrapper_param___ResponseError__ToError(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  bool bVar5;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0x68);
      *(undefined4 *)((int)register0x00000054 + -0x68) = unaff_lr;
      piVar3 = *(int **)(unaff_r10 + 0x10);
      if ((piVar3 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar3)) {
        *piVar3 = (int)((int)register0x00000054 + -100);
      }
      bVar5 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar5) {
        uVar1 = FUN_00098e0c(param_1,*(int *)((int)register0x00000054 + 4),
                             (undefined1 *)((int)register0x00000054 + -0x28));
        FUN_00098e0c(uVar1,(undefined1 *)((int)register0x00000054 + -0x28),
                     (undefined1 *)((int)register0x00000054 + -0x40));
        FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x10));
        *(undefined4 *)((int)register0x00000054 + -100) =
             *(undefined4 *)((int)register0x00000054 + -0x40);
        *(undefined4 *)((int)register0x00000054 + -0x60) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        FUN_0008a578();
        *(undefined **)((int)register0x00000054 + -0x10) = PTR_SUB_0042ffc8;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x5c);
        *(undefined4 *)((int)register0x00000054 + -100) =
             *(undefined4 *)((int)register0x00000054 + -0x30);
        *(undefined4 *)((int)register0x00000054 + -0x60) =
             *(undefined4 *)((int)register0x00000054 + -0x2c);
        FUN_0008a578();
        *(undefined **)((int)register0x00000054 + -8) = PTR_SUB_0042ffc8;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x5c);
        *(undefined **)((int)register0x00000054 + -100) =
             PTR_s___s___sonErrorapp_uidoffline_top_00774847_0x1e8_0042ffcc;
        *(undefined4 *)((int)register0x00000054 + -0x60) = 7;
        *(undefined1 **)((int)register0x00000054 + -0x5c) =
             (undefined1 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + -0x58) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x54) = 2;
        FUN_001331ac();
        *(undefined4 *)((int)register0x00000054 + -0x48) =
             *(undefined4 *)((int)register0x00000054 + -0x4c);
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + -0x50);
        *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_0042ffd0;
        FUN_0001eed8();
        puVar2 = *(undefined4 **)((int)register0x00000054 + -0x60);
        puVar2[1] = *(undefined4 *)((int)register0x00000054 + -0x48);
        if (*(int *)PTR_DAT_0042ffd4 == 0) {
          uVar1 = *(undefined4 *)((int)register0x00000054 + -0x44);
        }
        else {
          puVar2 = (undefined4 *)FUN_00098678();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -0x44);
          *unaff_r8 = uVar1;
        }
        *puVar2 = uVar1;
        *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_0042ffd8;
        *(undefined4 **)((int)register0x00000054 + 0xc) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0042ff90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x68))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x68);
      if (bVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x42ffa4;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



