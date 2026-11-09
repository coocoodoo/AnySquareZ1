// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/common/json/model   functions: 2
/* printerApi/common/json/model.AIDetectConfig.Validate @ 0041542c (size 60) */

void printerApi_common_json_model_AIDetectConfig_Validate(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000008;
  int in_stack_00000010;
  int in_stack_00000018;
  undefined1 uStack0000001c;
  
  if (((in_stack_00000008 != 0) && (in_stack_00000010 != 0)) && (in_stack_00000018 != 0)) {
    uStack0000001c = 1;
                    /* WARNING: Could not recover jumptable at 0x00415464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack0000001c = 0;
                    /* WARNING: Could not recover jumptable at 0x00415458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/common/json/model.(*AIDetectConfig).Validate @ 00415468 (size 152) */

void printerApi_common_json_model___AIDetectConfig__Validate(undefined4 param_1)

{
  undefined1 uVar1;
  int *piVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)((int)register0x00000054 + -0x18);
      }
      bVar4 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar4) {
        FUN_00098e0c(param_1,*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + -0x18));
        if (((*(int *)((int)register0x00000054 + -0x14) == 0) ||
            (*(int *)((int)register0x00000054 + -0xc) == 0)) ||
           (*(int *)((int)register0x00000054 + -4) == 0)) {
          uVar1 = 0;
        }
        else {
          uVar1 = 1;
        }
        *(undefined1 *)((int)register0x00000054 + 8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x004154cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x1c))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x4154e0;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



