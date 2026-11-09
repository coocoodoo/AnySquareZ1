// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/common/share   functions: 3
/* printerApi/common/share.init @ 003ec064 (size 40) */

void printerApi_common_share_init(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x3ec088;
    FUN_00096bb8();
  }
  printerApi_common_share_map_init_0();
  printerApi_common_share_map_init_1();
                    /* WARNING: Could not recover jumptable at 0x003ec07c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/common/share.map.init.0 @ 003ec08c (size 272) */

void printerApi_common_share_map_init_0(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_18;
  undefined4 *puStack_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x3ec198;
    FUN_00096bb8();
  }
  FUN_0008b708();
  for (iVar3 = 0; puVar1 = PTR_DAT_003ec1a0, iVar3 < 0x60; iVar3 = iVar3 + 1) {
    uVar4 = *(undefined4 *)(PTR_DAT_003ec1a8 + iVar3 * 8 + 4);
    uVar5 = *(undefined4 *)(PTR_DAT_003ec1a8 + iVar3 * 8);
    FUN_0008e7bc();
    puStack_14[1] = uVar4;
    puVar2 = puStack_14;
    if (*(int *)PTR_DAT_003ec1ac != 0) {
      puVar2 = (undefined4 *)FUN_00098688();
      *(undefined4 *)puVar1 = uVar5;
      *(undefined4 *)(puVar1 + 4) = *puVar2;
    }
    *puVar2 = uVar5;
    unaff_r8 = (undefined4 *)puVar1;
  }
  if (*(int *)PTR_DAT_003ec1ac != 0) {
    uStack_18 = FUN_00098688();
    *unaff_r8 = uStack_18;
    unaff_r8[1] = *(undefined4 *)PTR_DAT_003ec1b0;
  }
  *(undefined4 *)PTR_DAT_003ec1b0 = uStack_18;
                    /* WARNING: Could not recover jumptable at 0x003ec18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/common/share.map.init.1 @ 003ec1b4 (size 744) */

void printerApi_common_share_map_init_1(void)

{
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_c;
  undefined1 *puStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x3ec498;
    FUN_00096bb8();
  }
  FUN_0008b708();
  FUN_0008e7bc();
  *puStack_8 = 1;
  FUN_0008e7bc();
  *puStack_8 = 1;
  FUN_0008e7bc();
  *puStack_8 = 1;
  FUN_0008e7bc();
  *puStack_8 = 1;
  FUN_0008e7bc();
  *puStack_8 = 1;
  FUN_0008e7bc();
  *puStack_8 = 1;
  FUN_0008e7bc();
  *puStack_8 = 1;
  FUN_0008e7bc();
  *puStack_8 = 1;
  FUN_0008e7bc();
  *puStack_8 = 1;
  FUN_0008e7bc();
  *puStack_8 = 1;
  FUN_0008e7bc();
  *puStack_8 = 1;
  FUN_0008e7bc();
  *puStack_8 = 1;
  FUN_0008e7bc();
  *puStack_8 = 1;
  if (*(int *)PTR_DAT_003ec4d8 != 0) {
    FUN_00098688();
    *unaff_r8 = uStack_c;
    unaff_r8[1] = *(undefined4 *)PTR_DAT_003ec4dc;
  }
  *(undefined4 *)PTR_DAT_003ec4dc = uStack_c;
                    /* WARNING: Could not recover jumptable at 0x003ec48c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



