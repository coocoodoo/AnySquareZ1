// gklib — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gklib   package: k3c/common/logger   functions: 4
/* k3c/common/logger.init @ 003d2a10 (size 84) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_common_logger_init(void)

{
  undefined4 extraout_r1;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x3d2a60;
    FUN_0009bf64();
  }
  k3c_common_logger_loadBeijingLocation();
  if (*_UNK_003d2a68 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1;
    unaff_r8[1] = *_UNK_003d2a6c;
    uStack_4 = extraout_r1;
  }
  *_UNK_003d2a6c = uStack_4;
                    /* WARNING: Could not recover jumptable at 0x003d2a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/common/logger.loadBeijingLocation @ 003d2a70 (size 112) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_common_logger_loadBeijingLocation(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x3d2adc;
    FUN_0009bf64();
  }
  func_0x00111424();
  if (uStack_8 != 0) {
    FUN_0010ed2c();
                    /* WARNING: Could not recover jumptable at 0x003d2ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003d2ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/common/logger.Debugf @ 003d2aec (size 168) */

/* WARNING: Removing unreachable block (ram,0x003d2b0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_common_logger_Debugf(undefined4 param_1)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined1 auStack_44 [52];
  int iStack_10;
  undefined1 *puStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x3d2b90;
    param_1 = FUN_0009bf64();
  }
  if (*_UNK_003d2b98 != 0) {
    FUN_0009e298(param_1,*_UNK_003d2b98,auStack_44);
    iStack_10 = iStack_10 + 2;
    puStack_4 = auStack_44;
    go_uber_org_zap___SugaredLogger__log();
  }
                    /* WARNING: Could not recover jumptable at 0x003d2b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/common/logger.Errorf @ 003d2b9c (size 168) */

/* WARNING: Removing unreachable block (ram,0x003d2bbc) */

void k3c_common_logger_Errorf(undefined4 param_1)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined1 auStack_44 [52];
  int local_10;
  undefined1 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    param_1 = FUN_0009bf64();
  }
  if (*DAT_003d2c48 != 0) {
    FUN_0009e298(param_1,*DAT_003d2c48,auStack_44);
    local_10 = local_10 + 2;
    local_4 = auStack_44;
    go_uber_org_zap___SugaredLogger__log();
  }
  return;
}



