// gklib — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gklib   package: k3c/common/utils/collections   functions: 2
/* k3c/common/utils/collections.ContainsKind @ 004713d0 (size 172) */

void k3c_common_utils_collections_ContainsKind(void)

{
  int iVar1;
  uint uVar2;
  int unaff_r10;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined1 in_stack_00000018;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  iVar1 = 0;
  while( true ) {
    if (in_stack_00000008 <= iVar1) {
      return;
    }
    if (in_stack_00000010 == 0) {
      uVar2 = 0;
    }
    else if (in_stack_00000010 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(byte *)(in_stack_00000010 + 0xf) & 0x1f;
    }
    if (*(uint *)(in_stack_00000004 + iVar1 * 4) == uVar2) break;
    iVar1 = iVar1 + 1;
  }
  return;
}



/* k3c/common/utils/collections.JoinInts @ 0047147c (size 656) */

void k3c_common_utils_collections_JoinInts(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  undefined1 uVar8;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0x50);
      *(undefined4 *)((int)register0x00000054 + -0x50) = unaff_lr;
      iVar1 = *(int *)((int)register0x00000054 + 8);
      if (iVar1 == 0) {
        *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
                    /* WARNING: Could not recover jumptable at 0x004714cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x50))();
        return;
      }
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
      *(undefined4 *)((int)register0x00000054 + -8) = 0;
      for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
        *(int *)((int)register0x00000054 + -0x28) = iVar3;
        uVar4 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + iVar3 * 8 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x4c) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + iVar3 * 8);
        *(undefined4 *)((int)register0x00000054 + -0x48) = uVar4;
        *(undefined4 *)((int)register0x00000054 + -0x44) = 10;
        FUN_000bcf0c();
        uVar4 = *(undefined4 *)((int)register0x00000054 + -0x40);
        iVar1 = *(int *)((int)register0x00000054 + -0x3c);
        if (*(undefined1 **)((int)register0x00000054 + -0x14) == (undefined1 *)0x0) {
          *(undefined1 **)((int)register0x00000054 + -0x14) =
               (undefined1 *)((int)register0x00000054 + -0x14);
        }
        else {
          uVar8 = *(undefined1 **)((int)register0x00000054 + -0x14) ==
                  (undefined1 *)((int)register0x00000054 + -0x14);
          if (!(bool)uVar8) goto LAB_004716e8;
        }
        uVar2 = *(uint *)((int)register0x00000054 + -8);
        iVar3 = *(int *)((int)register0x00000054 + -0xc);
        uVar5 = iVar1 + iVar3;
        iVar6 = *(int *)((int)register0x00000054 + -0x10);
        if (uVar2 < uVar5) {
          *(int *)((int)register0x00000054 + -0x1c) = iVar3;
          *(int *)((int)register0x00000054 + -0x2c) = iVar1;
          *(undefined4 *)((int)register0x00000054 + -0x18) = uVar4;
          *(int *)((int)register0x00000054 + -0x4c) = iVar6;
          *(uint *)((int)register0x00000054 + -0x48) = uVar5;
          *(uint *)((int)register0x00000054 + -0x44) = uVar2;
          *(int *)((int)register0x00000054 + -0x40) = iVar1;
          *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_00471710;
          FUN_000987f4();
          iVar6 = *(int *)((int)register0x00000054 + -0x38);
          uVar5 = *(uint *)((int)register0x00000054 + -0x34);
          uVar2 = *(uint *)((int)register0x00000054 + -0x30);
          uVar4 = *(undefined4 *)((int)register0x00000054 + -0x18);
          iVar1 = *(int *)((int)register0x00000054 + -0x2c);
          iVar3 = *(int *)((int)register0x00000054 + -0x1c);
        }
        *(uint *)((int)register0x00000054 + -0x1c) = uVar2;
        *(uint *)((int)register0x00000054 + -0x20) = uVar5;
        *(int *)((int)register0x00000054 + -4) = iVar6;
        *(int *)((int)register0x00000054 + -0x24) = *(int *)((int)register0x00000054 + 8) + -1;
        *(int *)((int)register0x00000054 + -0x4c) = iVar6 + iVar3;
        *(undefined4 *)((int)register0x00000054 + -0x48) = uVar4;
        *(int *)((int)register0x00000054 + -0x44) = iVar1;
        FUN_0009e3a4();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x20);
        *(undefined4 *)((int)register0x00000054 + -8) =
             *(undefined4 *)((int)register0x00000054 + -0x1c);
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + -4);
        iVar3 = *(int *)((int)register0x00000054 + -0x28);
        if (iVar3 < *(int *)((int)register0x00000054 + -0x24)) {
          if (*(undefined1 **)((int)register0x00000054 + -0x14) == (undefined1 *)0x0) {
            *(undefined1 **)((int)register0x00000054 + -0x14) =
                 (undefined1 *)((int)register0x00000054 + -0x14);
          }
          else {
            uVar8 = *(undefined1 **)((int)register0x00000054 + -0x14) ==
                    (undefined1 *)((int)register0x00000054 + -0x14);
            if (!(bool)uVar8) goto LAB_004716d4;
          }
          uVar2 = *(uint *)((int)register0x00000054 + -8);
          iVar1 = *(int *)((int)register0x00000054 + -0xc);
          iVar3 = *(int *)((int)register0x00000054 + 0x14);
          uVar5 = iVar3 + iVar1;
          iVar6 = *(int *)((int)register0x00000054 + -0x10);
          if (uVar2 < uVar5) {
            *(int *)((int)register0x00000054 + -0x1c) = iVar1;
            *(int *)((int)register0x00000054 + -0x4c) = iVar6;
            *(uint *)((int)register0x00000054 + -0x48) = uVar5;
            *(uint *)((int)register0x00000054 + -0x44) = uVar2;
            *(int *)((int)register0x00000054 + -0x40) = iVar3;
            *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_00471710;
            FUN_000987f4();
            iVar6 = *(int *)((int)register0x00000054 + -0x38);
            uVar5 = *(uint *)((int)register0x00000054 + -0x34);
            uVar2 = *(uint *)((int)register0x00000054 + -0x30);
            iVar1 = *(int *)((int)register0x00000054 + -0x1c);
            iVar3 = *(int *)((int)register0x00000054 + 0x14);
          }
          *(uint *)((int)register0x00000054 + -0x1c) = uVar5;
          *(int *)((int)register0x00000054 + -4) = iVar6;
          *(uint *)((int)register0x00000054 + -0x20) = uVar2;
          *(int *)((int)register0x00000054 + -0x4c) = iVar6 + iVar1;
          *(undefined4 *)((int)register0x00000054 + -0x48) =
               *(undefined4 *)((int)register0x00000054 + 0x10);
          *(int *)((int)register0x00000054 + -0x44) = iVar3;
          FUN_0009e3a4();
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + -0x1c);
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x20);
          *(undefined4 *)((int)register0x00000054 + -0x10) =
               *(undefined4 *)((int)register0x00000054 + -4);
          iVar3 = *(int *)((int)register0x00000054 + -0x28);
        }
        iVar1 = *(int *)((int)register0x00000054 + 8);
      }
      iVar1 = *(int *)((int)register0x00000054 + -0x10);
      if (*(uint *)((int)register0x00000054 + -0xc) <= (uint)-iVar1) {
        *(int *)((int)register0x00000054 + 0x18) = iVar1;
        *(uint *)((int)register0x00000054 + 0x1c) = *(uint *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x004716c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x50))();
        return;
      }
      uVar8 = iVar1 == 0;
      if (!(bool)uVar8) {
        FUN_0008a908();
      }
      FUN_0008a948();
LAB_004716d4:
      *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_00471714;
      *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_00471718;
      FUN_00095b00();
LAB_004716e8:
      *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_00471714;
      *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_0047171c;
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x50);
      if ((bool)uVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x471708;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



