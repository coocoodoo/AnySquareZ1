// gklib — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gklib   package: k3c/common/jinja2   functions: 2
/* k3c/common/jinja2.(*Environment).From_string @ 006d4464 (size 184) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_common_jinja2___Environment__From_string(void)

{
  undefined4 *extraout_r1;
  undefined4 *puVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 *in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 uStack_10;
  int iStack_c;
  
  while (puVar1 = in_stack_00000008, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x6d4518;
    FUN_0009bf64();
  }
  github_com_flosch_pongo2_v6___TemplateSet__FromString();
  if (iStack_c != 0) {
    in_stack_00000010 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x006d450c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_00022cf8();
  if (*_UNK_006d4524 != 0) {
    FUN_0009db54();
    *unaff_r8 = uStack_10;
    puVar1 = extraout_r1;
  }
  *puVar1 = uStack_10;
  in_stack_00000014 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x006d44f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/common/jinja2.(*Template).Render @ 006d4528 (size 88) */

void k3c_common_jinja2___Template__Render(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x6d457c;
    FUN_0009bf64();
  }
  github_com_flosch_pongo2_v6___Template__Execute();
                    /* WARNING: Could not recover jumptable at 0x006d4570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



