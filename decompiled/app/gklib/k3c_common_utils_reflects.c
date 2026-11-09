// gklib — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gklib   package: k3c/common/utils/reflects   functions: 3
/* k3c/common/utils/reflects.GetPrivateFieldValue @ 00426b00 (size 568) */

/* WARNING: Removing unreachable block (ram,0x00426b1c) */
/* WARNING: Removing unreachable block (ram,0x00426c20) */

void k3c_common_utils_reflects_GetPrivateFieldValue(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int extraout_r1;
  uint uVar4;
  undefined4 extraout_r2;
  int iVar5;
  undefined *puVar6;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  undefined1 uVar8;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0x38);
      *(undefined4 *)((int)register0x00000054 + -0x38) = unaff_lr;
      if (*(int *)((int)register0x00000054 + 4) == 0) {
        *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00426cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x38))();
        return;
      }
      *(int *)((int)register0x00000054 + -0x10) = *(int *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0xc) = *(undefined4 *)((int)register0x00000054 + 8)
      ;
      iVar1 = *(int *)((int)register0x00000054 + -0x10);
      if (iVar1 == 0) {
        uVar4 = 0;
        iVar1 = 0;
        uVar3 = 0;
      }
      else {
        uVar4 = *(byte *)(iVar1 + 0xf) & 0x1f;
        if ((*(byte *)(iVar1 + 0xf) & 0x20) == 0) {
          uVar4 = uVar4 | 0x80;
        }
        uVar3 = *(undefined4 *)((int)register0x00000054 + -0xc);
      }
      if ((uVar4 & 0x1f) == 0x16) {
        *(int *)((int)register0x00000054 + -0x34) = iVar1;
        *(undefined4 *)((int)register0x00000054 + -0x30) = uVar3;
        *(uint *)((int)register0x00000054 + -0x2c) = uVar4;
        FUN_000d9b7c();
        iVar1 = *(int *)((int)register0x00000054 + -0x28);
        uVar3 = *(undefined4 *)((int)register0x00000054 + -0x24);
        uVar4 = *(uint *)((int)register0x00000054 + -0x20);
      }
      *(int *)((int)register0x00000054 + -0x34) = iVar1;
      *(undefined4 *)((int)register0x00000054 + -0x30) = uVar3;
      *(uint *)((int)register0x00000054 + -0x2c) = uVar4;
      *(undefined4 *)((int)register0x00000054 + -0x28) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x24) =
           *(undefined4 *)((int)register0x00000054 + 0x10);
      FUN_000da46c();
      uVar4 = *(uint *)((int)register0x00000054 + -0x18);
      iVar1 = *(int *)((int)register0x00000054 + -0x20);
      uVar3 = *(undefined4 *)((int)register0x00000054 + -0x1c);
      if ((uVar4 == 0) || (iVar5 = iVar1, puVar6 = PTR_DAT_00426d3c, (uVar4 & 0x200) != 0)) {
        *(int *)((int)register0x00000054 + -4) = iVar1;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar3;
        *(uint *)((int)register0x00000054 + -0x14) = uVar4;
        *(int *)((int)register0x00000054 + -0x34) = iVar1;
        *(undefined4 *)((int)register0x00000054 + -0x30) = uVar3;
        *(uint *)((int)register0x00000054 + -0x2c) = uVar4;
        FUN_000dfcf0();
        iVar1 = *(int *)((int)register0x00000054 + -0x24);
        uVar3 = *(undefined4 *)((int)register0x00000054 + -8);
        uVar4 = *(uint *)((int)register0x00000054 + -0x14);
        iVar5 = *(int *)((int)register0x00000054 + -4);
        puVar6 = *(undefined **)((int)register0x00000054 + -0x28);
      }
      uVar8 = iVar5 == 0;
      if (!(bool)uVar8) {
        uVar8 = (uVar4 & 0x100) == 0;
        if (!(bool)uVar8) {
          if (*PTR_DAT_00426d40 != '\0') {
            *(undefined **)PTR_DAT_00426d48 = PTR_DAT_00426d44;
            if (*(int *)PTR_DAT_00426d4c != 0) {
              FUN_0009db64();
              *unaff_r8 = extraout_r2;
              unaff_r8[1] = *(undefined4 *)PTR_DAT_00426d50;
              iVar1 = extraout_r1;
              uVar3 = extraout_r2;
            }
            *(undefined4 *)PTR_DAT_00426d50 = uVar3;
          }
          *(undefined **)((int)register0x00000054 + -0x34) = puVar6;
          *(int *)((int)register0x00000054 + -0x30) = iVar1;
          *(undefined4 *)((int)register0x00000054 + -0x2c) = uVar3;
          FUN_000e145c();
          *(undefined4 *)((int)register0x00000054 + -0x34) =
               *(undefined4 *)((int)register0x00000054 + -0x28);
          *(undefined4 *)((int)register0x00000054 + -0x30) =
               *(undefined4 *)((int)register0x00000054 + -0x24);
          *(undefined4 *)((int)register0x00000054 + -0x2c) =
               *(undefined4 *)((int)register0x00000054 + -0x20);
          FUN_000d9b7c();
          *(undefined4 *)((int)register0x00000054 + -0x34) =
               *(undefined4 *)((int)register0x00000054 + -0x28);
          *(undefined4 *)((int)register0x00000054 + -0x30) =
               *(undefined4 *)((int)register0x00000054 + -0x24);
          *(undefined4 *)((int)register0x00000054 + -0x2c) =
               *(undefined4 *)((int)register0x00000054 + -0x20);
          *(undefined1 *)((int)register0x00000054 + -0x28) = 1;
          FUN_000e70e8();
          *(undefined4 *)((int)register0x00000054 + 0x14) =
               *(undefined4 *)((int)register0x00000054 + -0x24);
          *(undefined4 *)((int)register0x00000054 + 0x18) =
               *(undefined4 *)((int)register0x00000054 + -0x20);
          return;
        }
        *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_00426d54;
        *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_00426d58;
        FUN_00095b00();
      }
      *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_00426d5c;
      FUN_00022cf8();
      puVar2 = *(undefined4 **)((int)register0x00000054 + -0x30);
      puVar2[1] = 0x18;
      *puVar2 = PTR_DAT_00426d60;
      puVar2[2] = 0;
      *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_00426d64;
      *(undefined4 **)((int)register0x00000054 + -0x30) = puVar2;
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x38);
      if ((bool)uVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x426d34;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/common/utils/reflects.ReflectFieldValue @ 00426d68 (size 468) */

/* WARNING: Removing unreachable block (ram,0x00426e38) */

void k3c_common_utils_reflects_ReflectFieldValue(void)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_r3;
  int unaff_r10;
  undefined4 unaff_lr;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  int local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  char local_54;
  char local_4d;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined1 auStack_34 [28];
  undefined1 auStack_18 [24];
  
  while (auStack_18 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x426f38;
    FUN_0009bf64();
  }
  local_3c = in_stack_00000004;
  local_38 = in_stack_00000008;
  iVar3 = in_stack_00000004;
  local_4c = DAT_00426f40;
  if (in_stack_00000004 == 0) {
    iVar3 = 0;
    local_4c = 0;
  }
  local_48 = iVar3;
  (**(code **)(local_4c + 0x54))();
  iVar4 = local_48;
  iVar5 = local_4c;
  if (local_90 == 0x16) {
    iVar3 = local_48;
    (**(code **)(local_4c + 0x2c))();
    iVar4 = local_8c;
    iVar5 = 0x16;
  }
  FUN_0009dee0(0,auStack_34,iVar4,iVar5,unaff_lr,iVar3);
  uVar1 = (**(code **)(extraout_r3 + 0x3c))();
  local_4d = local_54;
  FUN_0009e2b0(uVar1,&local_88,auStack_34);
  if (local_4d == '\0') {
    return;
  }
  if (in_stack_00000004 == 0) {
    bVar2 = 0;
  }
  else {
    local_44 = in_stack_00000004;
    local_40 = in_stack_00000008;
    if (in_stack_00000004 == 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = *(byte *)(in_stack_00000004 + 0xf) & 0x1f;
    }
  }
  if (bVar2 == 0x16) {
    FUN_000d9b7c();
  }
  local_88 = in_stack_0000000c;
  local_84 = in_stack_00000010;
  FUN_000da46c();
  local_88 = CONCAT31(local_88._1_3_,1);
  FUN_000e70e8();
  return;
}



/* k3c/common/utils/reflects.GetMethod @ 00426f44 (size 588) */

void k3c_common_utils_reflects_GetMethod(void)

{
  int iVar1;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  int local_4c;
  uint local_34;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  iVar1 = DAT_00427194;
  if (in_stack_00000004 == 0) {
    iVar1 = 0;
  }
  (**(code **)(iVar1 + 0x54))();
  if (local_4c == 0x16) {
    (**(code **)(iVar1 + 0x2c))();
    iVar1 = 0x16;
  }
  (**(code **)(iVar1 + 0x54))();
  if (local_4c != 0x19) {
    return;
  }
  FUN_000dd3c0();
  if ((local_34 & 0x1f) == 0x13) {
    FUN_00020b9c();
    return;
  }
  FUN_000d9b7c();
  FUN_000da46c();
  if ((local_34 & 0x1f) != 0x13) {
    return;
  }
  FUN_00020b9c();
  return;
}



