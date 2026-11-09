// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/common/rpc/socket/pool   functions: 4
/* printerApi/common/rpc/socket/pool.(*SocketClientPool).Get @ 00648074 (size 296) */

/* WARNING: Removing unreachable block (ram,0x006480bc) */

void printerApi_common_rpc_socket_pool___SocketClientPool__Get(void)

{
  int iVar1;
  int unaff_r10;
  int *in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined1 local_1c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  iVar1 = *in_stack_00000004;
  FUN_00018ad8();
  if (local_1c == '\0') {
    return;
  }
  (**(code **)(in_stack_00000008 + 0x18))();
  (**(code **)(iVar1 + 0x10))();
  printerApi_common_rpc_socket_pool_client_NewSocketClient();
  return;
}



/* printerApi/common/rpc/socket/pool.(*SocketClientPool).Put @ 006481a4 (size 168) */

void printerApi_common_rpc_socket_pool___SocketClientPool__Put(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  char cStack_2c;
  undefined *puStack_1c;
  undefined *puStack_18;
  undefined *puStack_14;
  undefined **ppuStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x648248;
    FUN_00096bb8();
  }
  uStack_4 = in_stack_00000008;
  FUN_00018a8c();
  if (cStack_2c == '\0') {
    puStack_1c = PTR_SUB_00648250;
    puStack_18 = PTR_DAT_00648254;
    puStack_14 = PTR_printerApi_common_rpc_socket_pool___SocketClientPool__Put_Print_func1_00648258;
    uStack_c = 1;
    uStack_8 = 1;
    ppuStack_10 = &puStack_1c;
    FUN_001e1190();
  }
                    /* WARNING: Could not recover jumptable at 0x0064823c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/common/rpc/socket/pool.(*SocketClientPool).Put.Print.func1 @ 00648260 (size 108) */

void printerApi_common_rpc_socket_pool___SocketClientPool__Put_Print_func1(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  FUN_001334ac();
  return;
}



/* printerApi/common/rpc/socket/pool.(*SocketClientPool).Finish @ 006482cc (size 12) */

void printerApi_common_rpc_socket_pool___SocketClientPool__Finish(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uStack00000008;
  
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x006482d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



