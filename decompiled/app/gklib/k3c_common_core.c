// gklib — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gklib   package: k3c/common/core   functions: 4
/* k3c/common/core.(*Queue).Put_nowait @ 004393bc (size 488) */

void k3c_common_core___Queue__Put_nowait(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int extraout_r3;
  int *unaff_r8;
  int unaff_r10;
  undefined8 uVar4;
  undefined4 *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int local_24;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  local_4 = (undefined4 *)0x0;
  if (in_stack_00000008 == 0) {
    return;
  }
  (**(code **)(in_stack_00000004[1] + 0xc))();
  local_c = in_stack_00000004[1];
  local_8 = in_stack_00000004[2];
  local_10 = DAT_004395b0;
  local_4 = &local_10;
  piVar1 = (int *)*in_stack_00000004;
  if (*piVar1 == 0) {
    if (*DAT_004395b4 != 0) {
      piVar1 = (int *)FUN_0009db84();
      *unaff_r8 = (int)piVar1;
      unaff_r8[1] = *piVar1;
      unaff_r8[2] = (int)piVar1;
      unaff_r8[3] = piVar1[1];
    }
    *piVar1 = (int)piVar1;
    piVar1[1] = (int)piVar1;
    piVar1[5] = 0;
  }
  piVar2 = (int *)piVar1[1];
  FUN_00022cf8();
  *(int *)(local_24 + 0xc) = in_stack_00000008;
  if (*DAT_004395b4 != 0) {
    local_24 = FUN_0009db54();
    *unaff_r8 = in_stack_0000000c;
  }
  *(int *)(local_24 + 0x10) = in_stack_0000000c;
  if (*DAT_004395b4 != 0) {
    local_24 = FUN_0009db54();
    *unaff_r8 = (int)piVar2;
  }
  uVar4 = CONCAT44(piVar2,local_24);
  *(int **)(local_24 + 4) = piVar2;
  iVar3 = *piVar2;
  if (*DAT_004395b4 != 0) {
    uVar4 = FUN_0009db74();
    *unaff_r8 = extraout_r3;
    unaff_r8[1] = (int)uVar4;
    unaff_r8[2] = *(int *)((ulonglong)uVar4 >> 0x20);
    iVar3 = extraout_r3;
  }
  piVar2 = (int *)uVar4;
  *piVar2 = iVar3;
  *(undefined4 *)((ulonglong)uVar4 >> 0x20) = piVar2;
  uVar4 = CONCAT44(*piVar2,piVar2);
  if (*DAT_004395b4 != 0) {
    uVar4 = FUN_0009db84();
    *unaff_r8 = (int)uVar4;
    unaff_r8[1] = *(int *)((int)((ulonglong)uVar4 >> 0x20) + 4);
    unaff_r8[2] = (int)piVar1;
    unaff_r8[3] = *(int *)((int)uVar4 + 8);
  }
  *(int *)((int)((ulonglong)uVar4 >> 0x20) + 4) = (int)uVar4;
  *(int **)((int)uVar4 + 8) = piVar1;
  piVar1[5] = piVar1[5] + 1;
  (*(code *)*local_4)();
  return;
}



/* k3c/common/core.(*Queue).Put_nowait.deferwrap1 @ 004395bc (size 92) */

void k3c_common_core___Queue__Put_nowait_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&local_4;
  }
  local_4 = *(undefined4 *)(unaff_r7 + 8);
  (**(code **)(*(int *)(unaff_r7 + 4) + 0x10))();
  return;
}



/* k3c/common/core.(*Queue).Get_nowait @ 00439618 (size 420) */

/* WARNING: Removing unreachable block (ram,0x004396c0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void k3c_common_core___Queue__Get_nowait(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *extraout_r2;
  int extraout_r2_00;
  int iVar4;
  int extraout_r3;
  int extraout_r3_00;
  int iVar5;
  int iVar6;
  int iVar7;
  int *unaff_r8;
  int unaff_r10;
  undefined8 uVar8;
  int *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  code *local_10;
  int local_c;
  int local_8;
  code **local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  local_4 = (code **)0x0;
  in_stack_00000008 = 0;
  in_stack_0000000c = 0;
  (**(code **)(in_stack_00000004[1] + 0xc))();
  local_c = in_stack_00000004[1];
  local_8 = in_stack_00000004[2];
  local_10 = DAT_004397c8;
  local_4 = &local_10;
  piVar1 = (int *)*in_stack_00000004;
  if (piVar1[5] == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)*piVar1;
  }
  uVar8 = CONCAT44(piVar2,piVar1);
  if (piVar2 == (int *)0x0) {
    in_stack_00000008 = 0;
    in_stack_0000000c = 0;
    (*DAT_004397c8)();
    return;
  }
  iVar4 = piVar2[3];
  iVar5 = piVar2[4];
  if ((int *)piVar2[2] == piVar1) {
    piVar1 = (int *)piVar2[1];
    iVar6 = *piVar2;
    if (*DAT_004397cc != 0) {
      uVar8 = FUN_0009db64();
      *unaff_r8 = iVar6;
      unaff_r8[1] = *extraout_r2;
      piVar1 = extraout_r2;
      iVar4 = extraout_r3;
    }
    piVar2 = (int *)((ulonglong)uVar8 >> 0x20);
    *piVar1 = iVar6;
    iVar6 = *piVar2;
    iVar7 = piVar2[1];
    if (*DAT_004397cc != 0) {
      uVar8 = FUN_0009db94();
      piVar1 = (int *)((ulonglong)uVar8 >> 0x20);
      *unaff_r8 = iVar7;
      unaff_r8[1] = *(int *)(extraout_r2_00 + 4);
      unaff_r8[2] = *piVar1;
      unaff_r8[3] = piVar1[1];
      unaff_r8[4] = piVar1[2];
      iVar6 = extraout_r2_00;
      iVar4 = extraout_r3_00;
    }
    puVar3 = (undefined4 *)((ulonglong)uVar8 >> 0x20);
    *(int *)(iVar6 + 4) = iVar7;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(int *)((int)uVar8 + 0x14) = *(int *)((int)uVar8 + 0x14) + -1;
  }
  in_stack_00000008 = iVar4;
  in_stack_0000000c = iVar5;
  (**local_4)();
  return;
}



/* k3c/common/core.(*Queue).Get_nowait.deferwrap1 @ 004397d0 (size 92) */

void k3c_common_core___Queue__Get_nowait_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&local_4;
  }
  local_4 = *(undefined4 *)(unaff_r7 + 8);
  (**(code **)(*(int *)(unaff_r7 + 4) + 0x10))();
  return;
}



