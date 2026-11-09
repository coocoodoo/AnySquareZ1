// gklib — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gklib   package: k3c/common/value   functions: 1
/* k3c/common/value.init @ 0042de74 (size 60) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_common_value_init(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x42deac;
    FUN_0009bf64();
  }
  *_UNK_0042deb8 = CONCAT44(_UNK_0042deb4,1);
                    /* WARNING: Could not recover jumptable at 0x0042dea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



