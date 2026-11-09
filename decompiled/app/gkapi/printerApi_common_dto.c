// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/common/dto   functions: 12
/* printerApi/common/dto.ResponseDto.Error @ 00185b70 (size 116) */

void printerApi_common_dto_ResponseDto_Error(void)

{
  int unaff_r10;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0001cd7c();
  FUN_001707f4();
  FUN_00093e34();
  return;
}



/* printerApi/common/dto.ErrorDto.Error @ 00185bec (size 116) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_common_dto_ErrorDto_Error(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x185c5c;
    FUN_00096bb8();
  }
  FUN_0001cd7c();
  FUN_001707f4();
  FUN_00093e34();
                    /* WARNING: Could not recover jumptable at 0x00185c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/common/dto.ErrorDto.Data @ 00185c68 (size 96) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_common_dto_ErrorDto_Data(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x185cc4;
    FUN_00096bb8();
  }
  FUN_0001cd7c();
  FUN_001707f4();
                    /* WARNING: Could not recover jumptable at 0x00185cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/common/dto.ResponseError.String @ 00185cd0 (size 172) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_common_dto_ResponseError_String(void)

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
    UNRECOVERED_JUMPTABLE = (code *)0x185d78;
    FUN_00096bb8();
  }
  FUN_00098a28(0,auStack_10);
  FUN_0008a578();
  auStack_10[0] = _UNK_00185d80;
  FUN_0008a578();
  uStack_8 = _UNK_00185d80;
  FUN_001331ac();
                    /* WARNING: Could not recover jumptable at 0x00185d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/common/dto.ResponseError.ToError @ 00185d88 (size 260) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_common_dto_ResponseError_ToError(undefined4 param_1)

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
    UNRECOVERED_JUMPTABLE = (code *)0x185e88;
    param_1 = FUN_00096bb8();
  }
  FUN_00098e0c(param_1,&stack0x00000004,auStack_28);
  FUN_00098a28(0,apuStack_10);
  FUN_0008a578();
  apuStack_10[0] = PTR_SUB_00185e90;
  FUN_0008a578();
  puStack_8 = PTR_SUB_00185e90;
  FUN_001331ac();
  FUN_0001eed8();
  puVar1 = (undefined4 *)&DAT_00000007;
  _DAT_0000000b = uStack_34;
  if (*(int *)PTR_DAT_00185e9c != 0) {
    puVar1 = (undefined4 *)FUN_00098678();
    *unaff_r8 = uStack_38;
  }
  *puVar1 = uStack_38;
  in_stack_0000001c = PTR_DAT_00185ea0;
  in_stack_00000020 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00185e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/common/dto.ResponseError.Error @ 00185ea4 (size 172) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_common_dto_ResponseError_Error(void)

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
    UNRECOVERED_JUMPTABLE = (code *)0x185f4c;
    FUN_00096bb8();
  }
  FUN_00098a28(0,auStack_10);
  FUN_0008a578();
  auStack_10[0] = _UNK_00185f54;
  FUN_0008a578();
  uStack_8 = _UNK_00185f54;
  FUN_001331ac();
                    /* WARNING: Could not recover jumptable at 0x00185f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/common/dto.(*ErrorDto).Data @ 00185f5c (size 188) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_common_dto___ErrorDto__Data(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int unaff_r10;
  undefined1 *puVar6;
  undefined4 unaff_lr;
  bool bVar7;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar6 = (undefined1 *)((int)register0x00000054 + -0x30);
      *(undefined4 *)((int)register0x00000054 + -0x30) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)((int)register0x00000054 + -0x2c);
      }
      puVar1 = *(undefined4 **)((int)register0x00000054 + 4);
      bVar7 = puVar1 == (undefined4 *)0x0;
      if (!bVar7) {
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(undefined4 *)((int)register0x00000054 + -0x10) = *puVar1;
        *(undefined4 *)((int)register0x00000054 + -0xc) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar4;
        *(undefined4 *)((int)register0x00000054 + -4) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0x2c) = _UNK_0018601c;
        *(undefined1 **)((int)register0x00000054 + -0x28) =
             (undefined1 *)((int)register0x00000054 + -0x10);
        FUN_0001cd7c();
        *(undefined4 *)((int)register0x00000054 + -0x2c) = _UNK_0018601c;
        *(undefined4 *)((int)register0x00000054 + -0x28) =
             *(undefined4 *)((int)register0x00000054 + -0x24);
        FUN_001707f4();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x24);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x20);
        *(undefined4 *)((int)register0x00000054 + 0x10) =
             *(undefined4 *)((int)register0x00000054 + -0x1c);
                    /* WARNING: Could not recover jumptable at 0x00185fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x30))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x30);
      if (bVar7) {
        register0x00000054 = (BADSPACEBASE *)puVar6;
      }
    }
    unaff_lr = 0x185ff8;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/common/dto.(*ErrorDto).Error @ 00186020 (size 208) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_common_dto___ErrorDto__Error(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int unaff_r10;
  undefined1 *puVar6;
  undefined4 unaff_lr;
  bool bVar7;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar6 = (undefined1 *)((int)register0x00000054 + -0x30);
      *(undefined4 *)((int)register0x00000054 + -0x30) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)((int)register0x00000054 + -0x2c);
      }
      puVar1 = *(undefined4 **)((int)register0x00000054 + 4);
      bVar7 = puVar1 == (undefined4 *)0x0;
      if (!bVar7) {
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(undefined4 *)((int)register0x00000054 + -0x10) = *puVar1;
        *(undefined4 *)((int)register0x00000054 + -0xc) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar4;
        *(undefined4 *)((int)register0x00000054 + -4) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0x2c) = _UNK_001860f4;
        *(undefined1 **)((int)register0x00000054 + -0x28) =
             (undefined1 *)((int)register0x00000054 + -0x10);
        FUN_0001cd7c();
        *(undefined4 *)((int)register0x00000054 + -0x2c) = _UNK_001860f4;
        *(undefined4 *)((int)register0x00000054 + -0x28) =
             *(undefined4 *)((int)register0x00000054 + -0x24);
        FUN_001707f4();
        *(undefined4 *)((int)register0x00000054 + -0x2c) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x28) =
             *(undefined4 *)((int)register0x00000054 + -0x24);
        *(undefined4 *)((int)register0x00000054 + -0x24) =
             *(undefined4 *)((int)register0x00000054 + -0x20);
        FUN_00093e34();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x20);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x1c);
                    /* WARNING: Could not recover jumptable at 0x001860bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x30))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x30);
      if (bVar7) {
        register0x00000054 = (BADSPACEBASE *)puVar6;
      }
    }
    unaff_lr = 0x1860d0;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/common/dto.(*ResponseDto).Error @ 001860f8 (size 184) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_common_dto___ResponseDto__Error(undefined4 param_1)

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
        FUN_00098dfc(param_1,*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + -0x20));
        *(undefined4 *)((int)register0x00000054 + -0x3c) = _UNK_001861b4;
        *(undefined1 **)((int)register0x00000054 + -0x38) =
             (undefined1 *)((int)register0x00000054 + -0x20);
        FUN_0001cd7c();
        *(undefined4 *)((int)register0x00000054 + -0x3c) = _UNK_001861b4;
        *(undefined4 *)((int)register0x00000054 + -0x38) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        FUN_001707f4();
        *(undefined4 *)((int)register0x00000054 + -0x3c) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x38) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        *(undefined4 *)((int)register0x00000054 + -0x34) =
             *(undefined4 *)((int)register0x00000054 + -0x30);
        FUN_00093e34();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x30);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x2c);
                    /* WARNING: Could not recover jumptable at 0x0018617c. Too many branches */
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
    unaff_lr = 0x186190;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/common/dto.(*ResponseError).Error @ 001861b8 (size 240) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_common_dto___ResponseError__Error(undefined4 param_1)

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
        *(undefined4 *)((int)register0x00000054 + -0x10) = _UNK_001862ac;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        *(undefined4 *)((int)register0x00000054 + -0x40) =
             *(undefined4 *)((int)register0x00000054 + -0x14);
        FUN_0008a578();
        *(undefined4 *)((int)register0x00000054 + -8) = _UNK_001862ac;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        *(undefined4 *)((int)register0x00000054 + -0x44) = _UNK_001862b0;
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
                    /* WARNING: Could not recover jumptable at 0x00186274. Too many branches */
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
    unaff_lr = 0x186288;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/common/dto.(*ResponseError).String @ 001862b4 (size 240) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_common_dto___ResponseError__String(undefined4 param_1)

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
        *(undefined4 *)((int)register0x00000054 + -0x10) = _UNK_001863a8;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        *(undefined4 *)((int)register0x00000054 + -0x40) =
             *(undefined4 *)((int)register0x00000054 + -0x14);
        FUN_0008a578();
        *(undefined4 *)((int)register0x00000054 + -8) = _UNK_001863a8;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        *(undefined4 *)((int)register0x00000054 + -0x44) = _UNK_001863ac;
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
                    /* WARNING: Could not recover jumptable at 0x00186370. Too many branches */
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
    unaff_lr = 0x186384;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/common/dto.(*ResponseError).ToError @ 001863b0 (size 328) */

void printerApi_common_dto___ResponseError__ToError(undefined4 param_1)

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
        *(undefined **)((int)register0x00000054 + -0x10) = PTR_SUB_001864fc;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x5c);
        *(undefined4 *)((int)register0x00000054 + -100) =
             *(undefined4 *)((int)register0x00000054 + -0x30);
        *(undefined4 *)((int)register0x00000054 + -0x60) =
             *(undefined4 *)((int)register0x00000054 + -0x2c);
        FUN_0008a578();
        *(undefined **)((int)register0x00000054 + -8) = PTR_SUB_001864fc;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x5c);
        *(undefined **)((int)register0x00000054 + -100) =
             PTR_s___s___sonErrorapp_uidoffline_top_00774847_0x1e8_00186500;
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
        *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_00186504;
        FUN_0001eed8();
        puVar2 = *(undefined4 **)((int)register0x00000054 + -0x60);
        puVar2[1] = *(undefined4 *)((int)register0x00000054 + -0x48);
        if (*(int *)PTR_DAT_00186508 == 0) {
          uVar1 = *(undefined4 *)((int)register0x00000054 + -0x44);
        }
        else {
          puVar2 = (undefined4 *)FUN_00098678();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -0x44);
          *unaff_r8 = uVar1;
        }
        *puVar2 = uVar1;
        *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_0018650c;
        *(undefined4 **)((int)register0x00000054 + 0xc) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x001864c4. Too many branches */
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
    unaff_lr = 0x1864d8;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



