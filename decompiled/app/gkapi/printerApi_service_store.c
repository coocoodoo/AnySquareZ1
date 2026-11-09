// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/service/store   functions: 1
/* printerApi/service/store.setPrinterState @ 0044f658 (size 136) */

void printerApi_service_store_setPrinterState(void)

{
  int unaff_r10;
  int in_stack_00000004;
  char in_stack_00000008;
  int local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  internal_runtime_atomic_Load();
  if ((((in_stack_00000008 == '\0') && (local_4 == 0xf)) && (in_stack_00000004 != 0xf)) &&
     (in_stack_00000004 != 0x10)) {
    return;
  }
  internal_runtime_atomic_Store();
  return;
}



