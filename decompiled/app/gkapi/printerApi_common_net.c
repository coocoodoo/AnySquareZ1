// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/common/net   functions: 2
/* printerApi/common/net.GetLocalIp @ 00501228 (size 396) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_common_net_GetLocalIp(void)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  int local_1c;
  undefined *local_10;
  undefined4 local_c;
  undefined **local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  local_4 = (undefined **)0x0;
  in_stack_0000000c = 0;
  in_stack_00000010 = 0;
  in_stack_00000014 = 0;
  in_stack_00000018 = 0;
  FUN_000715a4();
  FUN_001a93ec();
  if (local_1c == 0) {
    local_10 = PTR_printerApi_common_net_GetLocalIp_deferwrap1_005013c0;
    local_c = 3;
    local_4 = &local_10;
    (*_DAT_00000013)();
    if (PTR_DAT_005013c4 == (undefined *)0x3) {
      FUN_001bae18();
      in_stack_00000010 = 3;
      in_stack_00000014 = 0;
      in_stack_00000018 = 0;
      (*(code *)*local_4)();
      return;
    }
    uVar1 = FUN_0001cc38();
    FUN_0004fb3c(uVar1);
    return;
  }
  return;
}



/* printerApi/common/net.GetLocalIp.deferwrap1 @ 005013d0 (size 92) */

void printerApi_common_net_GetLocalIp_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_c [3];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)local_c;
  }
  local_c[0] = *(undefined4 *)(unaff_r7 + 8);
  (**(code **)(*(int *)(unaff_r7 + 4) + 0xc))();
  return;
}



