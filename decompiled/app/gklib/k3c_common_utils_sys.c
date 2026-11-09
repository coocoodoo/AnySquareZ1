// gklib — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gklib   package: k3c/common/utils/sys   functions: 3
/* k3c/common/utils/sys.GetMcuType @ 0042df88 (size 404) */

void k3c_common_utils_sys_GetMcuType(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_r2;
  int iVar4;
  int unaff_r10;
  undefined1 *puVar5;
  undefined4 unaff_lr;
  undefined1 uVar6;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar5 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x1c) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x18) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x14) = DAT_0042e120;
      *(undefined4 *)((int)register0x00000054 + -0x10) = 1;
      internal_stringslite_Index();
      iVar1 = *(int *)((int)register0x00000054 + -0xc);
      if (iVar1 == -1) {
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
        return;
      }
      uVar3 = iVar1 + 1;
      uVar2 = *(uint *)((int)register0x00000054 + 8);
      uVar6 = uVar2 == uVar3;
      if (uVar3 <= uVar2) {
        *(int *)((int)register0x00000054 + -8) = iVar1;
        *(uint *)((int)register0x00000054 + -4) = uVar3;
        *(uint *)((int)register0x00000054 + -0x1c) =
             *(int *)((int)register0x00000054 + 4) + (uVar3 & (int)(1 - (uVar2 - iVar1)) >> 0x1f);
        *(uint *)((int)register0x00000054 + -0x18) = (uVar2 - iVar1) + -1;
        *(undefined4 *)((int)register0x00000054 + -0x14) = DAT_0042e120;
        *(undefined4 *)((int)register0x00000054 + -0x10) = 1;
        internal_stringslite_Index();
        iVar1 = *(int *)((int)register0x00000054 + -0xc);
        if (iVar1 == -1) {
          *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
          return;
        }
        uVar3 = *(int *)((int)register0x00000054 + -8) + iVar1 + 1;
        uVar6 = *(uint *)((int)register0x00000054 + 8) == uVar3;
        if (uVar3 <= *(uint *)((int)register0x00000054 + 8)) {
          uVar2 = *(uint *)((int)register0x00000054 + -4);
          uVar6 = uVar3 == uVar2;
          if (uVar2 <= uVar3) {
            uVar2 = uVar2 & -iVar1 >> 0x1f;
            iVar4 = *(int *)((int)register0x00000054 + 4) + uVar2;
            if (iVar1 == 3) {
              if (((*(char *)(*(int *)((int)register0x00000054 + 4) + uVar2) == 'm') &&
                  (*(char *)(iVar4 + 1) == 'c')) && (*(char *)(iVar4 + 2) == 'u')) {
                *(undefined4 *)((int)register0x00000054 + 0xc) = 1;
                return;
              }
            }
            else if (iVar1 == 10) {
              *(int *)((int)register0x00000054 + -0x1c) = iVar4;
              *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_0042e124;
              *(undefined4 *)((int)register0x00000054 + -0x14) = 10;
              FUN_00018250();
              if (*(char *)((int)register0x00000054 + -0x10) != '\0') {
                *(undefined4 *)((int)register0x00000054 + 0xc) = 2;
                return;
              }
            }
            *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
            return;
          }
          FUN_0009dc34(uVar2);
        }
        FUN_0009dbf4();
        uVar3 = extraout_r2;
      }
      param_1 = FUN_0009dc34(uVar3);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      if ((bool)uVar6) {
        register0x00000054 = (BADSPACEBASE *)puVar5;
      }
    }
    unaff_lr = 0x42e118;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/common/utils/sys.WriteInfoToTmpFile @ 0042e128 (size 520) */

/* WARNING: Removing unreachable block (ram,0x0042e258) */

void k3c_common_utils_sys_WriteInfoToTmpFile(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined *in_stack_00000018;
  undefined4 uStack_54;
  int iStack_50;
  int iStack_48;
  undefined1 auStack_2c [12];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined *puStack_14;
  undefined *apuStack_c [2];
  undefined **ppuStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x42e334;
    FUN_0009bf64();
  }
  ppuStack_4 = (undefined **)0x0;
  in_stack_00000014 = 0;
  in_stack_00000018 = (undefined *)0x0;
  FUN_0012dc78();
  if (iStack_50 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0042e254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  apuStack_c[0] = PTR_k3c_common_utils_sys_WriteInfoToTmpFile_deferwrap1_0042e33c;
  ppuStack_4 = apuStack_c;
  FUN_000986b8(uStack_54);
  FUN_0009def4(0,auStack_2c,0x1a4);
  uVar2 = in_stack_00000010;
  puVar1 = PTR_DAT_0042e348;
  uStack_20 = 0x1000;
  uStack_1c = 0x1000;
  puStack_14 = PTR_DAT_0042e344;
  FUN_0014f168();
  if (0 < iStack_48) {
    FUN_0007636c();
    FUN_002fabc4();
    in_stack_00000014 = 1;
    in_stack_00000018 = (undefined *)0xffffffff;
    (*(code *)*ppuStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0042e2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_002fa4bc();
  in_stack_00000014 = uVar2;
  in_stack_00000018 = puVar1;
  (*(code *)*ppuStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0042e320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/common/utils/sys.WriteInfoToTmpFile.deferwrap1 @ 0042e34c (size 96) */

void k3c_common_utils_sys_WriteInfoToTmpFile_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 auStack_c [3];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)auStack_c;
  }
  if (*(undefined4 **)(unaff_r7 + 4) != (undefined4 *)0x0) {
    auStack_c[0] = **(undefined4 **)(unaff_r7 + 4);
    FUN_0012fb5c();
  }
  return;
}



