// gklib — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gklib   package: k3c/common/utils/str   functions: 4
/* k3c/common/utils/str.init @ 0042644c (size 100) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_common_utils_str_init(void)

{
  undefined4 extraout_r1;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4264ac;
    FUN_0009bf64();
  }
  FUN_003edf64();
  if (*_UNK_004264b8 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1;
    unaff_r8[1] = *_UNK_004264bc;
    uStack_4 = extraout_r1;
  }
  *_UNK_004264bc = uStack_4;
                    /* WARNING: Could not recover jumptable at 0x004264a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/common/utils/str.LastName @ 004264c0 (size 152) */

void k3c_common_utils_str_LastName(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  bool bVar5;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x24) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x20) =
           *(undefined4 *)((int)register0x00000054 + 8);
      FUN_00151ce4();
      *(undefined4 *)((int)register0x00000054 + -0x24) =
           *(undefined4 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x20) =
           *(undefined4 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = DAT_0042655c;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x10) = 0xffffffff;
      FUN_0014f168();
      uVar3 = *(uint *)((int)register0x00000054 + -8);
      uVar1 = uVar3 - 1;
      bVar5 = uVar3 == uVar1;
      if (uVar1 < uVar3) {
        uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0xc) + uVar1 * 8 + 4);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + -0xc) + uVar1 * 8);
        *(undefined4 *)((int)register0x00000054 + 0x10) = uVar2;
        return;
      }
      param_1 = FUN_0009dbd4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x426554;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/common/utils/str.MapStringKeys @ 00426560 (size 496) */

/* WARNING: Removing unreachable block (ram,0x0042657c) */

void k3c_common_utils_str_MapStringKeys(void)

{
  uint uVar1;
  uint extraout_r2;
  int iVar2;
  int extraout_r3;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int unaff_r10;
  undefined8 uVar8;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  int local_40;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  if (in_stack_00000004 != 0) {
    iVar2 = DAT_00426754;
    if (in_stack_00000004 == 0) {
      iVar2 = 0;
    }
    (**(code **)(iVar2 + 0x54))();
    if (local_40 != 0x15) {
      return;
    }
    FUN_000dc5f8();
    uVar1 = 0;
    iVar2 = 0;
    uVar3 = 0;
    while( true ) {
      uVar8 = CONCAT44(local_34,local_38);
      if (local_34 < 1) {
        return;
      }
      if ((*(uint *)(local_38 + 8) & 0x1f) != 0x18) break;
      uVar3 = uVar3 + 1;
      uVar5 = **(undefined4 **)(local_38 + 4);
      uVar4 = (*(undefined4 **)(local_38 + 4))[1];
      if (uVar1 < uVar3) {
        FUN_000987f4();
        uVar1 = local_28;
        iVar2 = local_30;
        uVar3 = local_2c;
      }
      iVar6 = uVar3 - 1;
      puVar7 = (undefined4 *)(iVar2 + iVar6 * 8);
      puVar7[1] = uVar4;
      if (*DAT_0042675c != 0) {
        uVar8 = FUN_0009db64();
        *puVar7 = uVar5;
        puVar7[1] = *(undefined4 *)(extraout_r3 + iVar6 * 8);
        uVar1 = extraout_r2;
        iVar2 = extraout_r3;
      }
      *(undefined4 *)(iVar2 + iVar6 * 8) = uVar5;
      local_38 = (int)uVar8 + 0xc;
      local_34 = (int)((ulonglong)uVar8 >> 0x20) + -1;
    }
    return;
  }
  return;
}



/* k3c/common/utils/str.JoinSliceWithFormat @ 00426760 (size 920) */

/* WARNING: Removing unreachable block (ram,0x0042677c) */

void k3c_common_utils_str_JoinSliceWithFormat(void)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int unaff_r10;
  undefined4 unaff_lr;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  int in_stack_ffffffac;
  int in_stack_ffffffb4;
  int iVar6;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x426af4;
    FUN_0009bf64();
  }
  if (in_stack_00000004 == 0) {
    return;
  }
  iVar1 = DAT_00426afc;
  if (in_stack_00000004 == 0) {
    iVar1 = 0;
  }
  (**(code **)(iVar1 + 0x54))();
  if (in_stack_ffffffac != 0x17) {
    return;
  }
  if (in_stack_00000004 == 0) {
    bVar3 = 0;
    iVar1 = 0;
    iVar2 = 0;
  }
  else {
    bVar3 = *(byte *)(in_stack_00000004 + 0xf) & 0x1f;
    iVar1 = in_stack_00000004;
    iVar2 = in_stack_00000008;
    if ((*(byte *)(in_stack_00000004 + 0xf) & 0x20) == 0) {
      bVar3 = bVar3 | 0x80;
    }
  }
  bVar4 = bVar3 & 0x1f;
  if (bVar4 == 0x17) {
    in_stack_ffffffb4 = *(int *)(iVar2 + 4);
  }
  else {
    FUN_000dc0ac();
  }
  if (in_stack_ffffffb4 != 0) {
    if (in_stack_ffffffb4 != 1) {
      FUN_000da798();
      FUN_000e70e8();
      iVar6 = 1;
      FUN_0013b72c();
      iVar5 = 1;
      while( true ) {
        if (bVar4 == 0x17) {
          iVar6 = *(int *)(iVar2 + 4);
        }
        else {
          FUN_000dc0ac();
        }
        if (iVar6 <= iVar5) break;
        FUN_000da798(local_44,local_40,bVar4,iVar1,unaff_lr,iVar1,iVar2,bVar3,iVar5);
        iVar5 = iVar5 + 1;
        FUN_000e70e8();
        FUN_0013b72c();
        iVar6 = in_stack_0000000c;
        FUN_000763e8();
        local_44 = local_3c;
        local_40 = local_38;
      }
      return;
    }
    FUN_000da798();
    FUN_000e70e8();
    FUN_0013b72c();
    return;
  }
  return;
}



