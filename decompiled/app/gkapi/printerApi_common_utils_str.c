// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/common/utils/str   functions: 3
/* printerApi/common/utils/str.init.0 @ 003eb7e0 (size 172) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_common_utils_str_init_0(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  longlong alStack_3c [2];
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  int iStack_1c;
  undefined1 auStack_14 [20];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x3eb888;
    FUN_00096bb8();
  }
  uVar1 = FUN_0010cf30();
  uVar1 = FUN_00098e14(uVar1,alStack_3c,auStack_14);
  FUN_00098e14(uVar1,auStack_14,&uStack_28);
  if ((uStack_24 & 0x80000000) != 0) {
    uVar2 = (uStack_28 & 0x7fffffff) >> 0x1e | (uStack_28 >> 0x1f | uStack_24 << 1) << 1;
    uStack_20 = uVar2 + _UNK_003eb890;
    iStack_1c = ((uStack_24 & 0x7fffffff) >> 0x1e) + 0xd + (uint)CARRY4(uVar2,_UNK_003eb890);
  }
  alStack_3c[0] =
       (ulonglong)_UNK_003eb894 * (ulonglong)uStack_20 +
       (CONCAT44(iStack_1c * _UNK_003eb894,uStack_28) & 0xffffffff3fffffff) +
       CONCAT44(_UNK_003eb89c,_UNK_003eb898);
  FUN_00239538();
                    /* WARNING: Could not recover jumptable at 0x003eb87c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/common/utils/str.RandomStringWithCharset @ 003eb8a0 (size 192) */

void printerApi_common_utils_str_RandomStringWithCharset(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  bool bVar5;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x1c) = DAT_003eb964;
      *(undefined4 *)((int)register0x00000054 + -0x18) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x14) =
           *(undefined4 *)((int)register0x00000054 + 4);
      FUN_000933e8();
      iVar1 = *(int *)((int)register0x00000054 + -0x10);
      *(int *)((int)register0x00000054 + -4) = iVar1;
      iVar3 = 0;
      while( true ) {
        if (*(int *)((int)register0x00000054 + 4) <= iVar3) {
          *(undefined4 *)((int)register0x00000054 + -0x1c) = 0;
          *(int *)((int)register0x00000054 + -0x18) = iVar1;
          *(int *)((int)register0x00000054 + -0x14) = *(int *)((int)register0x00000054 + 4);
          FUN_00093e34();
          *(undefined4 *)((int)register0x00000054 + 0x10) =
               *(undefined4 *)((int)register0x00000054 + -0x10);
          *(undefined4 *)((int)register0x00000054 + 0x14) =
               *(undefined4 *)((int)register0x00000054 + -0xc);
          return;
        }
        *(int *)((int)register0x00000054 + -8) = iVar3;
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_0023977c();
        uVar2 = *(uint *)((int)register0x00000054 + -0x18);
        bVar5 = *(uint *)((int)register0x00000054 + 0xc) == uVar2;
        if (*(uint *)((int)register0x00000054 + 0xc) <= uVar2) break;
        iVar3 = *(int *)((int)register0x00000054 + -8);
        iVar1 = *(int *)((int)register0x00000054 + -4);
        *(undefined1 *)(iVar1 + iVar3) =
             *(undefined1 *)(*(int *)((int)register0x00000054 + 8) + uVar2);
        iVar3 = iVar3 + 1;
      }
      param_1 = FUN_000986f8();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      if (bVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x3eb95c;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/common/utils/str.RandomString @ 003eb968 (size 76) */

void printerApi_common_utils_str_RandomString(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  printerApi_common_utils_str_RandomStringWithCharset();
  return;
}



