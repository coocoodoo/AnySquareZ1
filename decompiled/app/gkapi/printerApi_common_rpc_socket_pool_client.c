// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/common/rpc/socket/pool/client   functions: 15
/* printerApi/common/rpc/socket/pool/client.NewSocketClient @ 00646f24 (size 468) */

void printerApi_common_rpc_socket_pool_client_NewSocketClient(void)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int unaff_r10;
  undefined8 uVar6;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 *local_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  local_5c = DAT_006470fc;
  FUN_0001eed8();
  local_4 = (int)local_58;
  uVar3 = FUN_0010cf30();
  uVar3 = FUN_00098e14(uVar3,&local_5c,&local_34);
  FUN_00098e14(uVar3,&local_34,&local_5c);
  FUN_00101384();
  local_3c = local_48;
  local_40 = local_44;
  local_5c = DAT_00647100;
  local_58 = (undefined4 *)0x10;
  FUN_00017058();
  local_38 = local_54;
  local_5c = DAT_00647104;
  local_58 = (undefined4 *)0x0;
  FUN_00017058();
  FUN_00098a08(0,&local_34,local_54);
  local_34 = in_stack_00000004;
  local_30 = in_stack_00000008;
  local_2c = in_stack_0000000c;
  local_28 = in_stack_00000010;
  uVar1 = (uint)((ulonglong)DAT_00647108 * (ulonglong)local_3c >> 0x25);
  iVar5 = local_40 + (uint)((ulonglong)DAT_00647108 * (ulonglong)local_40 >> 0x25) * -0x3c;
  piVar2 = (int *)(DAT_0064710c * iVar5);
  local_24 = local_3c +
             ((int)piVar2 +
             (uint)((ulonglong)DAT_00647108 * (ulonglong)(local_3c + uVar1 * -0x3c + iVar5 * 0x10)
                   >> 0x25) + uVar1) * -0x3c;
  local_14 = in_stack_00000014;
  local_10 = in_stack_00000018;
  local_18 = local_38;
  uVar3 = 0;
  if (*(int *)PTR_DAT_00647110 != 0) {
    uVar6 = FUN_00098678(local_4,*(undefined4 *)(local_4 + 0x18));
    local_58 = (undefined4 *)uVar6;
    *piVar2 = (int)((ulonglong)uVar6 >> 0x20);
    local_5c = DAT_006470fc;
    local_54 = &local_34;
    uVar3 = FUN_00022914();
  }
  FUN_00098ddc(uVar3,&local_34,local_4);
  *(undefined **)(local_4 + 0x18) = PTR_DAT_00647114;
  local_5c = (undefined4 *)PTR_DAT_00647118;
  FUN_0001eed8();
  *local_58 = PTR_printerApi_common_rpc_socket_pool_client_NewSocketClient_gowrap1_0064711c;
  puVar4 = local_58;
  if (*(int *)PTR_DAT_00647110 != 0) {
    puVar4 = (undefined4 *)FUN_00098678();
    *piVar2 = local_4;
  }
  puVar4[1] = local_4;
  local_5c = puVar4;
  FUN_0005e168();
  return;
}



/* printerApi/common/rpc/socket/pool/client.NewSocketClient.gowrap1 @ 00647120 (size 84) */

void printerApi_common_rpc_socket_pool_client_NewSocketClient_gowrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_4;
  }
  uStack_4 = *(undefined4 *)(unaff_r7 + 4);
  printerApi_common_rpc_socket_pool_client___SocketClient__writeLoop();
  return;
}



/* printerApi/common/rpc/socket/pool/client.(*SocketClient).Init @ 00647174 (size 544) */

void printerApi_common_rpc_socket_pool_client___SocketClient__Init(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *extraout_r1;
  int iVar4;
  undefined4 *extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  uint local_1c;
  uint local_18;
  undefined1 auStack_14 [20];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  in_stack_00000004[1] = in_stack_0000000c;
  puVar3 = in_stack_00000004;
  if (*DAT_00647398 != 0) {
    FUN_000986a8();
    *unaff_r8 = in_stack_00000008;
    unaff_r8[1] = *extraout_r1;
    unaff_r8[2] = in_stack_00000014;
    unaff_r8[3] = extraout_r1[3];
    puVar3 = extraout_r1;
  }
  *puVar3 = in_stack_00000008;
  puVar3[2] = in_stack_00000010;
  puVar3[3] = in_stack_00000014;
  uVar2 = FUN_0010cf30();
  uVar2 = FUN_00098e14(uVar2,&local_30,auStack_14);
  FUN_00098e14(uVar2,auStack_14,&local_30);
  FUN_00101384();
  uVar1 = (uint)((ulonglong)DAT_0064739c * (ulonglong)local_1c >> 0x25);
  iVar4 = local_18 + (uint)((ulonglong)DAT_0064739c * (ulonglong)local_18 >> 0x25) * -0x3c;
  in_stack_00000004[4] =
       local_1c +
       (uVar1 + DAT_006473a0 * iVar4 +
       (uint)((ulonglong)DAT_0064739c * (ulonglong)(local_1c + uVar1 * -0x3c + iVar4 * 0x10) >> 0x25
             )) * -0x3c;
  *(undefined1 *)(in_stack_00000004 + 5) = 0;
  in_stack_00000004[8] = in_stack_00000018;
  puVar3 = in_stack_00000004;
  if (*DAT_00647398 != 0) {
    FUN_00098698();
    *unaff_r8 = in_stack_0000001c;
    unaff_r8[1] = extraout_r1_00[9];
    unaff_r8[2] = extraout_r1_00[6];
    puVar3 = extraout_r1_00;
  }
  puVar3[9] = in_stack_0000001c;
  puVar3[6] = PTR_DAT_006473a4;
  local_30 = (undefined4 *)PTR_DAT_006473a8;
  local_2c = (undefined4 *)0x10;
  FUN_00017058();
  uVar2 = local_28;
  if (*DAT_00647398 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r1_01;
    unaff_r8[1] = in_stack_00000004[7];
    uVar2 = extraout_r1_01;
  }
  in_stack_00000004[7] = uVar2;
  in_stack_00000004[10] = 0;
  local_30 = (undefined4 *)PTR_DAT_006473ac;
  local_2c = (undefined4 *)0x0;
  FUN_00017058();
  if (*DAT_00647398 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r1_02;
    unaff_r8[1] = in_stack_00000004[0xb];
    local_28 = extraout_r1_02;
  }
  in_stack_00000004[0xb] = local_28;
  local_30 = (undefined4 *)PTR_DAT_006473b0;
  FUN_0001eed8();
  *local_2c = PTR_printerApi_common_rpc_socket_pool_client___SocketClient__Init_gowrap1_006473b4;
  puVar3 = local_2c;
  if (*DAT_00647398 != 0) {
    puVar3 = (undefined4 *)FUN_00098678();
    *unaff_r8 = in_stack_00000004;
  }
  puVar3[1] = in_stack_00000004;
  local_30 = puVar3;
  FUN_0005e168();
  return;
}



/* printerApi/common/rpc/socket/pool/client.(*SocketClient).Init.gowrap1 @ 006473b8 (size 84) */

void printerApi_common_rpc_socket_pool_client___SocketClient__Init_gowrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_4;
  }
  uStack_4 = *(undefined4 *)(unaff_r7 + 4);
  printerApi_common_rpc_socket_pool_client___SocketClient__writeLoop();
  return;
}



/* printerApi/common/rpc/socket/pool/client.(*SocketClient).DoConn @ 0064740c (size 476) */

void printerApi_common_rpc_socket_pool_client___SocketClient__DoConn(void)

{
  bool bVar1;
  char *pcVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char cStack_30;
  undefined *puStack_28;
  undefined4 uStack_24;
  undefined *puStack_20;
  undefined *puStack_1c;
  undefined *puStack_18;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined **ppuStack_8;
  undefined *puStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x6475ec;
    FUN_00096bb8();
  }
  puStack_28 = PTR_printerApi_common_rpc_socket_pool_client___SocketClient__DoConn_func1_006475f4;
  uStack_24 = in_stack_00000004;
  ppuStack_8 = &puStack_28;
  puStack_4 = PTR_PTR_006475f8;
  printerApi_common_utils_sys_GetGID();
  FUN_00098a20(0,&puStack_20,uStack_38,uStack_3c);
  puStack_20 = PTR_SUB_006475fc;
  puStack_1c = PTR_DAT_00647600;
  FUN_0008a4bc();
  puStack_18 = PTR_DAT_00647604;
  puStack_10 = PTR_SUB_006475fc;
  puStack_c = PTR_DAT_00647608;
  printerApi_common_logger_Debug();
  if ((*(int *)(*(int *)PTR_DAT_0064760c + 0x14) == 8) && (FUN_000150d4(), cStack_30 != '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    if ((((*(int *)(*(int *)PTR_DAT_0064760c + 0x14) == 4) &&
         (pcVar2 = *(char **)(*(int *)PTR_DAT_0064760c + 0x10), *pcVar2 == 's')) &&
        (pcVar2[1] == 't')) && ((pcVar2[2] == 'o' && (pcVar2[3] == 'p')))) {
      printerApi_common_rpc_socket_pool_client___SocketClient__DoConn_func2();
      (*(code *)*ppuStack_8)();
                    /* WARNING: Could not recover jumptable at 0x00647590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    printerApi_common_rpc_socket_pool_client___SocketClient__DoConn_func2();
    (*(code *)*ppuStack_8)();
                    /* WARNING: Could not recover jumptable at 0x006475b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  printerApi_common_rpc_socket_pool_client___SocketClient__DoConn_func2();
  (*(code *)*ppuStack_8)();
                    /* WARNING: Could not recover jumptable at 0x006475d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/common/rpc/socket/pool/client.(*SocketClient).DoConn.func1 @ 00647614 (size 64) */

void printerApi_common_rpc_socket_pool_client___SocketClient__DoConn_func1(void)

{
  int iVar1;
  int unaff_r7;
  int unaff_r10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  iVar1 = *(int *)(unaff_r7 + 4);
  *(undefined1 *)(iVar1 + 0x14) = 1;
  (**(code **)(*(int *)(iVar1 + 8) + 0xc))();
  return;
}



/* printerApi/common/rpc/socket/pool/client.(*SocketClient).IsKill @ 00647654 (size 16) */

void printerApi_common_rpc_socket_pool_client___SocketClient__IsKill(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined1 uStack00000008;
  
  uStack00000008 = *(undefined1 *)(in_stack_00000004 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x00647660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/common/rpc/socket/pool/client.(*SocketClient).Close @ 00647664 (size 160) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_common_rpc_socket_pool_client___SocketClient__Close(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined1 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  internal_runtime_atomic_Cas();
  if (local_4 != '\0') {
    FUN_00017cc4();
    return;
  }
  FUN_0001eed8();
  _DAT_00000004 = 0x1a;
  uRam00000000 = DAT_0064770c;
  return;
}



/* printerApi/common/rpc/socket/pool/client.(*SocketClient).Closed @ 00647714 (size 72) */

void printerApi_common_rpc_socket_pool_client___SocketClient__Closed(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined1 in_stack_00000008;
  int iStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x647758;
    FUN_00096bb8();
  }
  internal_runtime_atomic_Load();
  in_stack_00000008 = iStack_4 == 1;
                    /* WARNING: Could not recover jumptable at 0x0064774c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/common/rpc/socket/pool/client.(*SocketClient).Send @ 0064775c (size 360) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_common_rpc_socket_pool_client___SocketClient__Send(void)

{
  undefined4 uVar1;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  int local_3c;
  undefined4 *local_38;
  int local_28;
  undefined4 local_14;
  undefined4 *local_10;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  internal_runtime_atomic_Load();
  if (local_3c != 1) {
    uVar1 = *(undefined4 *)(in_stack_00000004 + 0x1c);
    local_4 = in_stack_00000008;
    FUN_001000a4();
    FUN_00098a28(0,&local_14,*local_38);
    local_10 = &local_4;
    local_14 = uVar1;
    FUN_00067f3c();
    if (local_28 == 0) {
      return;
    }
    printerApi_common_logger_Errorf();
    FUN_0001eed8();
    _DAT_0000001d = 0x13;
    _DAT_00000019 = PTR_DAT_006478d4;
    return;
  }
  FUN_0001eed8();
  _DAT_00000005 = 0x1a;
  puRam00000001 = PTR_DAT_006478dc;
  return;
}



/* printerApi/common/rpc/socket/pool/client.(*SocketClient).SendRaw @ 006478e0 (size 236) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_common_rpc_socket_pool_client___SocketClient__SendRaw(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 local_1c;
  undefined4 local_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  internal_runtime_atomic_Load();
  if (local_1c != 1) {
    FUN_0001eed8();
    FUN_0016a168();
    if (local_c != 0) {
      return;
    }
    printerApi_common_rpc_socket_pool_client___SocketClient__Send();
    return;
  }
  FUN_0001eed8();
  _DAT_00000005 = 0x1a;
  puRam00000001 = PTR_DAT_006479dc;
  return;
}



/* printerApi/common/rpc/socket/pool/client.(*SocketClient).SendAny @ 006479e4 (size 212) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_common_rpc_socket_pool_client___SocketClient__SendAny(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 local_18;
  undefined4 local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  internal_runtime_atomic_Load();
  if (local_18 != 1) {
    FUN_001707f4();
    if (local_8 != 0) {
      return;
    }
    printerApi_common_rpc_socket_pool_client___SocketClient__SendRaw();
    return;
  }
  FUN_0001eed8();
  _DAT_00000005 = 0x1a;
  uRam00000001 = DAT_00647ac0;
  return;
}



/* printerApi/common/rpc/socket/pool/client.(*SocketClient).Name @ 00647ac8 (size 24) */

void printerApi_common_rpc_socket_pool_client___SocketClient__Name(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  uStack00000008 = *in_stack_00000004;
  uStack0000000c = in_stack_00000004[1];
                    /* WARNING: Could not recover jumptable at 0x00647adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/common/rpc/socket/pool/client.(*SocketClient).writeLoop @ 00647ae0 (size 748) */

void printerApi_common_rpc_socket_pool_client___SocketClient__writeLoop(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  code *extraout_r3;
  undefined4 uVar4;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 *in_stack_00000004;
  undefined4 *local_74;
  undefined4 *local_70;
  undefined4 *local_6c;
  undefined4 *local_68;
  undefined4 *local_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  undefined4 *local_58 [5];
  undefined4 auStack_44 [2];
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 local_2c [3];
  undefined4 **local_20;
  undefined1 auStack_1c [20];
  undefined4 local_8;
  undefined4 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x647dc8;
    FUN_00096bb8();
  }
  while( true ) {
    local_30 = (undefined4 *)0x0;
    uVar4 = in_stack_00000004[0xb];
    FUN_00098a28(0,local_2c,in_stack_00000004,in_stack_00000004[7],unaff_lr);
    local_20 = &local_30;
    local_74 = local_2c;
    local_70 = auStack_44;
    local_6c = (undefined4 *)0x0;
    local_68 = (undefined4 *)0x0;
    local_64 = (undefined4 *)0x2;
    local_60 = (undefined4 *)CONCAT31(local_60._1_3_,1);
    local_2c[0] = uVar4;
    FUN_00067f3c();
    if (local_5c == (undefined4 *)0x0) break;
    local_74 = DAT_00647dd0;
    local_70 = local_30;
    FUN_001707f4();
    if (local_60 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)((int)local_68 + 1);
      puVar1 = local_64;
      puVar3 = local_6c;
      if (local_64 < puVar2) {
        local_74 = local_6c;
        local_6c = local_64;
        local_68 = (undefined4 *)0x1;
        local_64 = DAT_00647dd8;
        local_70 = puVar2;
        FUN_00093524();
        puVar1 = local_58[0];
        puVar2 = local_5c;
        puVar3 = local_60;
      }
      *(undefined1 *)((int)puVar3 + (int)((int)puVar2 + -1)) = 3;
      local_3c = puVar2;
      local_38 = puVar1;
      local_34 = puVar3;
      uVar4 = FUN_0010cf30();
      uVar4 = FUN_00098e14(uVar4,&local_74,auStack_1c);
      FUN_00098e14(uVar4,auStack_1c,&local_74);
      local_60 = DAT_00647ddc;
      local_5c = (undefined4 *)0x1;
      uVar4 = FUN_00102dac();
      FUN_00098e14(uVar4,local_58,auStack_1c);
      local_74 = (undefined4 *)in_stack_00000004[3];
      FUN_00098e14(in_stack_00000004,auStack_1c,&local_70,
                   *(undefined4 *)(in_stack_00000004[2] + 0x24));
      (*extraout_r3)();
      local_74 = (undefined4 *)in_stack_00000004[3];
      local_70 = local_34;
      local_6c = local_3c;
      local_68 = local_38;
      (**(code **)(in_stack_00000004[2] + 0x28))();
      if (local_60 != (undefined4 *)0x0) {
        local_8 = local_60[1];
        local_4 = local_5c;
        local_74 = DAT_00647de0;
        local_70 = (undefined4 *)&DAT_00000015;
        local_6c = &local_8;
        local_68 = (undefined4 *)0x1;
        local_64 = (undefined4 *)0x1;
        printerApi_common_logger_Errorf();
        local_74 = in_stack_00000004;
        printerApi_common_rpc_socket_pool_client___SocketClient__Close();
      }
    }
    else {
      local_8 = local_60[1];
      local_4 = local_5c;
      local_74 = DAT_00647dd4;
      local_70 = (undefined4 *)&DAT_0000001d;
      local_6c = &local_8;
      local_68 = (undefined4 *)0x1;
      local_64 = (undefined4 *)0x1;
      printerApi_common_logger_Errorf();
    }
  }
  local_8 = 0;
  local_4 = (undefined4 *)0x0;
  local_74 = (undefined4 *)*in_stack_00000004;
  local_70 = (undefined4 *)in_stack_00000004[1];
  FUN_0008a578();
  local_8 = DAT_00647de4;
  local_4 = local_6c;
  local_74 = DAT_00647de8;
  local_70 = (undefined4 *)0x16;
  local_6c = &local_8;
  local_68 = (undefined4 *)0x1;
  local_64 = (undefined4 *)0x1;
  printerApi_common_logger_Errorf();
  local_74 = (undefined4 *)in_stack_00000004[3];
  (**(code **)(in_stack_00000004[2] + 0xc))();
  local_74 = (undefined4 *)in_stack_00000004[9];
  local_70 = in_stack_00000004;
  (**(code **)(in_stack_00000004[8] + 0xc))();
  return;
}



/* printerApi/common/rpc/socket/pool/client.(*SocketClient).DoConn.func2 @ 00647dec (size 296) */

void printerApi_common_rpc_socket_pool_client___SocketClient__DoConn_func2(void)

{
  int unaff_r10;
  undefined4 unaff_lr;
  int iStack_38;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x647f10;
    FUN_00096bb8();
  }
  FUN_000506d8();
  if (iStack_38 != 0) {
    printerApi_common_utils_sys_GetGID();
    FUN_00098a20(0,&uStack_18,iStack_38,&stack0x00000004,unaff_lr);
    uStack_18 = DAT_00647f18;
    uStack_14 = DAT_00647f1c;
    FUN_0008a4bc();
    uStack_10 = DAT_00647f20;
    printerApi_common_logger_Error();
    FUN_00161944();
    FUN_00093e34();
    FUN_0008a578();
    printerApi_common_logger_Error();
  }
  return;
}



