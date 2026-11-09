// gklib — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gklib   package: k3c/internal/pkg/util   functions: 3
/* k3c/internal/pkg/util.init.0 @ 004721fc (size 108) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_util_init_0(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x472264;
    FUN_0009bf64();
  }
  func_0x00471720();
                    /* WARNING: Could not recover jumptable at 0x00472258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/util.Fileno @ 00472278 (size 388) */

void k3c_internal_pkg_util_Fileno(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar5;
  undefined4 unaff_lr;
  undefined1 uVar6;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar5 = (undefined1 *)((int)register0x00000054 + -0x24);
      *(undefined4 *)((int)register0x00000054 + -0x24) = unaff_lr;
      iVar2 = 0;
      if (*(int *)((int)register0x00000054 + 4) != 0) {
        uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
        *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_00472400;
        *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar1;
        FUN_00020dac();
        iVar2 = *(int *)((int)register0x00000054 + -0x18);
      }
      uVar6 = iVar2 == 0;
      if (!(bool)uVar6) {
        pcVar3 = *(code **)(iVar2 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x20) =
             *(undefined4 *)((int)register0x00000054 + 8);
        (*pcVar3)();
        iVar2 = *(int *)((int)register0x00000054 + -0x14);
        uVar6 = 0;
        if (iVar2 == 0) {
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + -0x1c);
          *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_00472404;
          FUN_00022cf8();
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x1c);
          *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_00472408;
          FUN_00022cf8();
          puVar4 = *(undefined4 **)((int)register0x00000054 + -0x1c);
          *puVar4 = PTR_k3c_internal_pkg_util_Fileno_func1_0047240c;
          if (*(int *)PTR_DAT_00472410 == 0) {
            uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          }
          else {
            puVar4 = (undefined4 *)FUN_0009db54();
            uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
            *unaff_r8 = uVar1;
          }
          puVar4[1] = uVar1;
          pcVar3 = *(code **)(*(int *)((int)register0x00000054 + -0xc) + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x20) =
               *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 **)((int)register0x00000054 + -0x1c) = puVar4;
          (*pcVar3)();
          uVar6 = *(int *)((int)register0x00000054 + -0x18) == 0;
          if ((bool)uVar6) {
            *(undefined4 *)((int)register0x00000054 + 0xc) =
                 **(undefined4 **)((int)register0x00000054 + -4);
            return;
          }
          pcVar3 = *(code **)(*(int *)((int)register0x00000054 + -0x18) + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x20) =
               *(undefined4 *)((int)register0x00000054 + -0x14);
          (*pcVar3)();
          *(undefined4 *)((int)register0x00000054 + -0x20) =
               *(undefined4 *)((int)register0x00000054 + -0x1c);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          FUN_0008f77c();
          *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_00472414;
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          iVar2 = FUN_00095b00();
        }
        pcVar3 = *(code **)(iVar2 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x20) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        (*pcVar3)();
        *(undefined4 *)((int)register0x00000054 + -0x20) =
             *(undefined4 *)((int)register0x00000054 + -0x1c);
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_00472414;
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        FUN_00095b00();
      }
      *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_00472414;
      *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_00472418;
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x24);
      if ((bool)uVar6) {
        register0x00000054 = (BADSPACEBASE *)puVar5;
      }
    }
    unaff_lr = 0x4723f8;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/util.Fileno.func1 @ 0047241c (size 16) */

void k3c_internal_pkg_util_Fileno_func1(void)

{
  int unaff_r7;
  undefined4 in_stack_00000004;
  
  **(undefined4 **)(unaff_r7 + 4) = in_stack_00000004;
  return;
}



