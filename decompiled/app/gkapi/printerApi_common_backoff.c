// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/common/backoff   functions: 2
/* printerApi/common/backoff.(*Backoff).Next @ 0042f1d0 (size 380) */

void printerApi_common_backoff___Backoff__Next(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined8 local_3c;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  undefined1 auStack_14 [20];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  uVar1 = FUN_0010cf30();
  uVar1 = FUN_00098e14(uVar1,&local_3c,auStack_14);
  FUN_00098e14(uVar1,auStack_14,&local_28);
  if ((local_24 & 0x80000000) != 0) {
    uVar2 = (local_28 & 0x7fffffff) >> 0x1e | (local_28 >> 0x1f | local_24 << 1) << 1;
    local_20 = uVar2 + DAT_0042f350;
    local_1c = ((local_24 & 0x7fffffff) >> 0x1e) + 0xd + (uint)CARRY4(uVar2,DAT_0042f350);
  }
  local_3c = (ulonglong)DAT_0042f354 * (ulonglong)local_20 +
             (CONCAT44(local_1c * DAT_0042f354,local_28) & 0xffffffff3fffffff) +
             CONCAT44(DAT_0042f35c,DAT_0042f358);
  FUN_00239538();
  local_3c._0_4_ = *(undefined4 *)(in_stack_00000004 + 0x10);
  local_3c._4_4_ = *(undefined4 *)(in_stack_00000004 + 0x14);
  FUN_00239734();
  uVar2 = *(uint *)(in_stack_00000004 + 0x10);
  *(uint *)(in_stack_00000004 + 0x10) = uVar2 << 1;
  uVar3 = uVar2 >> 0x1f | *(int *)(in_stack_00000004 + 0x14) << 1;
  *(uint *)(in_stack_00000004 + 0x14) = uVar3;
  uVar4 = *(uint *)(in_stack_00000004 + 0xc);
  if (*(uint *)(in_stack_00000004 + 8) < uVar2 << 1 && uVar4 == uVar3 || (int)uVar4 < (int)uVar3) {
    *(uint *)(in_stack_00000004 + 0x10) = *(uint *)(in_stack_00000004 + 8);
    *(uint *)(in_stack_00000004 + 0x14) = uVar4;
  }
  return;
}



/* printerApi/common/backoff.RetryWithBackoff @ 0042f360 (size 164) */

void printerApi_common_backoff_RetryWithBackoff(void)

{
  int iVar1;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 *in_stack_00000018;
  int local_28;
  int local_24;
  int local_20;
  
  while (iVar1 = in_stack_00000004, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  while( true ) {
    if (iVar1 < 1) {
      return;
    }
    (*(code *)*in_stack_00000018)();
    if (local_28 == 0) break;
    printerApi_common_backoff___Backoff__Next();
    local_28 = local_24;
    local_24 = local_20;
    FUN_000953d0();
    iVar1 = iVar1 + -1;
  }
  return;
}



