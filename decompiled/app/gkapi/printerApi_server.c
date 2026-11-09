// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/server   functions: 19
/* printerApi/server.init @ 0066a2ac (size 148) */

void printerApi_server_init(void)

{
  undefined *puVar1;
  undefined4 extraout_r1;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x66a33c;
    FUN_00096bb8();
  }
  puVar1 = PTR_DAT_0066a348;
  if (PTR_DAT_0066a344 == (undefined *)0x0) {
    puVar1 = (undefined *)0x0;
  }
  (**(code **)(puVar1 + 0x2c))();
  *(undefined4 *)PTR_DAT_0066a34c = uStack_10;
  if (*(int *)PTR_DAT_0066a350 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r1;
    unaff_r8[1] = *(undefined4 *)PTR_DAT_0066a354;
    uStack_c = extraout_r1;
  }
  *(undefined4 *)PTR_DAT_0066a354 = uStack_c;
                    /* WARNING: Could not recover jumptable at 0x0066a330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/server.NewSocketServerRpc @ 0066a358 (size 552) */

void printerApi_server_NewSocketServerRpc(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  int iVar4;
  undefined1 extraout_r2;
  char *pcVar5;
  undefined *extraout_r2_00;
  undefined *puVar6;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  undefined1 uVar8;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0x2c);
      *(undefined4 *)((int)register0x00000054 + -0x2c) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_0066a584;
      FUN_0001eed8();
      *(undefined4 *)((int)register0x00000054 + -8) =
           *(undefined4 *)((int)register0x00000054 + -0x24);
      *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_0066a588;
      FUN_0001eed8(*(undefined4 *)((int)register0x00000054 + -0x24));
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x24);
      *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_0066a58c;
      *(undefined4 *)((int)register0x00000054 + -0x24) = 100;
      FUN_00017058();
      uVar3 = *(undefined4 *)((int)register0x00000054 + -0x20);
      if (*(int *)PTR_DAT_0066a590 == 0) {
        puVar1 = *(undefined4 **)((int)register0x00000054 + -4);
      }
      else {
        FUN_00098688();
        *unaff_r8 = extraout_r1;
        puVar1 = *(undefined4 **)((int)register0x00000054 + -4);
        unaff_r8[1] = *puVar1;
        uVar3 = extraout_r1;
      }
      *puVar1 = uVar3;
      iVar4 = 0;
      while (iVar4 < 100) {
        *(int *)((int)register0x00000054 + -0x10) = iVar4;
        *(undefined4 *)((int)register0x00000054 + -0x28) = *puVar1;
        *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_0066a594;
        FUN_000172bc();
        puVar1 = *(undefined4 **)((int)register0x00000054 + -4);
        iVar4 = *(int *)((int)register0x00000054 + -0x10) + 1;
      }
      *(undefined4 *)((int)register0x00000054 + -0x28) = *(undefined4 *)PTR_DAT_0066a598;
      FUN_0009bf4c();
      puVar2 = *(undefined **)((int)register0x00000054 + -0x24);
      uVar8 = 0;
      puVar6 = PTR_DAT_0066a59c;
      if (puVar2 == PTR_DAT_0066a59c) {
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x20);
        *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_0066a5a0;
        *(undefined4 *)((int)register0x00000054 + -0x24) = 0x11;
        FUN_001228a0();
        if (*(char *)((int)register0x00000054 + -0x18) == '\0') {
          iVar4 = 3;
          pcVar5 = PTR_DAT_0066a5a4;
        }
        else {
          iVar4 = *(int *)((int)register0x00000054 + -0x1c);
          pcVar5 = *(char **)((int)register0x00000054 + -0x20);
        }
        if ((iVar4 == 2) && (*pcVar5 == 'o')) {
          uVar8 = pcVar5[1] == 'n';
        }
        else {
          uVar8 = false;
        }
        if (*(int *)PTR_DAT_0066a590 != 0) {
          *(undefined1 *)((int)register0x00000054 + -0x11) = uVar8;
          FUN_000986a8();
          *unaff_r8 = *(undefined4 *)((int)register0x00000054 + -4);
          puVar1 = *(undefined4 **)((int)register0x00000054 + -8);
          unaff_r8[1] = *puVar1;
          unaff_r8[2] = *(undefined4 *)((int)register0x00000054 + -0xc);
          unaff_r8[3] = puVar1[5];
          *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_0066a584;
          *(undefined4 **)((int)register0x00000054 + -0x24) = puVar1;
          FUN_000228e8();
          uVar8 = *(undefined1 *)((int)register0x00000054 + -0x11);
        }
        FUN_00098a08(0,*(undefined4 *)((int)register0x00000054 + -8),uVar8);
        puVar1 = *(undefined4 **)((int)register0x00000054 + -8);
        *puVar1 = *(undefined4 *)((int)register0x00000054 + -4);
        puVar1[5] = *(undefined4 *)((int)register0x00000054 + -0xc);
        *(undefined1 *)(puVar1 + 0xb) = extraout_r2;
        uVar3 = *(undefined4 *)PTR_DAT_0066a5a8;
        *(undefined4 **)((int)register0x00000054 + -0x28) = puVar1;
        *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_0066a5ac;
        *(undefined4 *)((int)register0x00000054 + -0x20) = uVar3;
        printerApi_server___SocketServerRpc__Register();
        uVar8 = *(int *)((int)register0x00000054 + -0x1c) == 0;
        if ((bool)uVar8) {
          *(undefined4 *)((int)register0x00000054 + 4) =
               *(undefined4 *)((int)register0x00000054 + -8);
          return;
        }
        *(undefined4 *)((int)register0x00000054 + -0x28) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + -0x1c) + 4);
        *(undefined4 *)((int)register0x00000054 + -0x24) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        puVar2 = (undefined *)FUN_00090814();
        puVar6 = extraout_r2_00;
      }
      *(undefined **)((int)register0x00000054 + -0x28) = puVar2;
      *(undefined **)((int)register0x00000054 + -0x24) = puVar6;
      *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_0066a5b0;
      param_1 = FUN_0001cb94();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x2c);
      if ((bool)uVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x66a57c;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/server.(*SocketServerRpc).Listen @ 0066a5b4 (size 784) */

void printerApi_server___SocketServerRpc__Listen(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 extraout_r3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined8 uVar3;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined *local_10;
  undefined *local_c;
  undefined *local_8;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x66a8c0;
    FUN_00096bb8();
  }
  puVar5 = (undefined4 *)0x3;
  uVar6 = in_stack_00000008;
  uVar7 = in_stack_0000000c;
  FUN_001abdb0();
  if (local_34 != 0) {
    uVar4 = local_30;
    (**(code **)(local_34 + 0xc))();
    FUN_00098a28(0,&local_10,uVar6,puVar5,unaff_lr,uVar4,puVar5,uVar6,uVar7);
    local_10 = PTR_SUB_0066a8cc;
    local_c = PTR_DAT_0066a8d0;
    FUN_0008a578();
    local_8 = PTR_SUB_0066a8cc;
    puVar5 = (undefined4 *)0x2;
    local_4 = uVar6;
    printerApi_common_logger_Error();
    for (iVar1 = 0; iVar1 < 100; iVar1 = iVar1 + 1) {
      puVar5 = (undefined4 *)0x3;
      uVar6 = in_stack_00000008;
      uVar7 = in_stack_0000000c;
      FUN_001abdb0();
      if (local_34 == 0) break;
      uVar4 = local_30;
      (**(code **)(local_34 + 0xc))();
      FUN_00098a28(0,&local_10,uVar6,puVar5,unaff_lr,uVar4,puVar5,uVar6,uVar7);
      local_10 = PTR_SUB_0066a8cc;
      local_c = DAT_0066a8f8;
      FUN_0008a578();
      local_8 = PTR_SUB_0066a8cc;
      local_4 = uVar6;
      printerApi_common_logger_Error();
      puVar5 = (undefined4 *)0x0;
      FUN_000953d0();
    }
  }
  if (local_3c == 0) {
    printerApi_common_logger_Debug();
    iVar1 = *(int *)PTR_DAT_0066a8d4;
    *(undefined4 *)(iVar1 + 0x14) = 5;
    if (*(int *)PTR_DAT_0066a8d8 != 0) {
      uVar3 = FUN_00098678(iVar1,*(undefined4 *)(iVar1 + 0x10));
      iVar1 = (int)uVar3;
      *unaff_r8 = (int)((ulonglong)uVar3 >> 0x20);
    }
    *(undefined4 *)(iVar1 + 0x10) = DAT_0066a8f4;
    return;
  }
  iVar1 = *(int *)PTR_DAT_0066a8d4;
  *(undefined4 *)(iVar1 + 0x14) = 3;
  if (*(int *)PTR_DAT_0066a8d8 != 0) {
    iVar1 = FUN_00098678();
    *unaff_r8 = extraout_r3;
  }
  *(undefined **)(iVar1 + 0x10) = PTR_DAT_0066a8dc;
  FUN_0001eed8();
  *puVar5 = PTR_printerApi_server___SocketServerRpc__Listen_gowrap1_0066a8e4;
  puVar2 = puVar5;
  if (*(int *)PTR_DAT_0066a8d8 != 0) {
    puVar5 = (undefined4 *)FUN_00098678();
    *unaff_r8 = in_stack_00000004;
  }
  puVar5[1] = in_stack_00000004;
  FUN_0005e168();
  FUN_0001eed8();
  *puVar2 = PTR_printerApi_server___SocketServerRpc__Listen_gowrap2_0066a8ec;
  if (*(int *)PTR_DAT_0066a8d8 != 0) {
    puVar2 = (undefined4 *)FUN_00098688();
    *unaff_r8 = in_stack_00000004;
    unaff_r8[1] = local_38;
  }
  puVar2[1] = in_stack_00000004;
  puVar2[2] = local_3c;
  puVar2[3] = local_38;
  FUN_0005e168();
  return;
}



/* printerApi/server.(*SocketServerRpc).Listen.gowrap2 @ 0066a900 (size 100) */

void printerApi_server___SocketServerRpc__Listen_gowrap2(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_c;
  }
  uStack_8 = *(undefined4 *)(unaff_r7 + 8);
  uStack_4 = *(undefined4 *)(unaff_r7 + 0xc);
  uStack_c = *(undefined4 *)(unaff_r7 + 4);
  printerApi_server___SocketServerRpc__accept();
  return;
}



/* printerApi/server.(*SocketServerRpc).Listen.gowrap1 @ 0066a964 (size 84) */

void printerApi_server___SocketServerRpc__Listen_gowrap1(void)

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
  printerApi_server___SocketServerRpc__connectK3c();
  return;
}



/* printerApi/server.(*SocketServerRpc).accept @ 0066a9b8 (size 1088) */

/* WARNING: Removing unreachable block (ram,0x0066ac54) */
/* WARNING: Removing unreachable block (ram,0x0066ac8c) */
/* WARNING: Removing unreachable block (ram,0x0066ac80) */
/* WARNING: Removing unreachable block (ram,0x0066aca0) */

void printerApi_server___SocketServerRpc__accept(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int extraout_r3;
  char *pcVar4;
  int iVar5;
  int unaff_r10;
  undefined4 unaff_lr;
  bool bVar6;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x66adf4;
    FUN_00096bb8();
  }
  printerApi_common_utils_sys_GetGID();
  FUN_00098a20(0,&local_18,local_64,local_68,unaff_lr);
  local_18 = DAT_0066adfc;
  local_14 = DAT_0066ae00;
  FUN_0008a4bc();
  local_10 = DAT_0066ae04;
  local_8 = DAT_0066adfc;
  local_4 = DAT_0066ae08;
  local_64 = 3;
  local_60 = 3;
  printerApi_common_logger_Debug();
  do {
    iVar3 = local_60;
    iVar2 = local_64;
    (**(code **)(in_stack_00000008 + 0xc))();
    if (*(int *)(*DAT_0066ae0c + 0x14) == 8) {
      local_60 = 8;
      FUN_000150d4();
      if ((char)local_5c == '\0') goto LAB_0066aad4;
      bVar6 = true;
    }
    else {
LAB_0066aad4:
      bVar6 = false;
    }
    if (bVar6) {
LAB_0066addc:
      printerApi_server___SocketServerRpc__closeListener();
      return;
    }
    iVar5 = *(int *)(*DAT_0066ae0c + 0x14);
    pcVar4 = *(char **)(*DAT_0066ae0c + 0x10);
    if ((((iVar5 == 4) && (*pcVar4 == 's')) && (pcVar4[1] == 't')) &&
       ((pcVar4[2] == 'o' && (pcVar4[3] == 'p')))) goto LAB_0066addc;
    bVar6 = local_5c == 0;
    if (bVar6) {
      if (((iVar5 == 5) && (*pcVar4 == 's')) &&
         ((pcVar4[1] == 't' && (((pcVar4[2] == 'a' && (pcVar4[3] == 'r')) && (pcVar4[4] == 't'))))))
      {
        FUN_000953d0();
      }
      if (((*(int *)(*DAT_0066ae0c + 0x14) == 3) &&
          (pcVar4 = *(char **)(*DAT_0066ae0c + 0x10), *pcVar4 == 'r')) &&
         ((pcVar4[1] == 'u' && (pcVar4[2] == 'n')))) {
        printerApi_common_rpc_socket_pool___SocketClientPool__Get();
        FUN_0001cd7c();
        FUN_001707f4();
        puVar1 = (undefined4 *)(local_64 + 0x28);
        local_64 = iVar3;
        local_60 = local_5c;
        local_5c = local_58;
        (*(code *)*puVar1)();
        (**(code **)(iVar2 + 0xc))();
      }
      else {
        FUN_0001cd7c();
        FUN_001707f4();
        puVar1 = (undefined4 *)(local_64 + 0x28);
        local_64 = local_60;
        local_60 = local_5c;
        local_5c = local_58;
        (*(code *)*puVar1)();
        (**(code **)(iVar2 + 0xc))();
      }
    }
    else {
      FUN_00098a28(0,&local_28);
      local_28 = DAT_0066adfc;
      local_24 = DAT_0066ae14;
      local_20 = extraout_r3;
      if (!bVar6) {
        local_20 = *(int *)(extraout_r3 + 4);
      }
      local_60 = 2;
      printerApi_common_logger_Error();
      local_64 = 0;
      FUN_000953d0();
    }
  } while( true );
}



/* printerApi/server.(*SocketServerRpc).accept.gowrap1 @ 0066ae34 (size 92) */

void printerApi_server___SocketServerRpc__accept_gowrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_8;
  }
  uStack_4 = *(undefined4 *)(unaff_r7 + 8);
  uStack_8 = *(undefined4 *)(unaff_r7 + 4);
  printerApi_server___SocketServerRpc__ServeClient();
  return;
}



/* printerApi/server.(*SocketServerRpc).ServeClient @ 0066ae90 (size 4892) */

/* WARNING: Removing unreachable block (ram,0x0066b058) */

void printerApi_server___SocketServerRpc__ServeClient(undefined4 param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int extraout_r1;
  int extraout_r1_00;
  int iVar8;
  int extraout_r1_01;
  int iVar9;
  int iVar10;
  undefined4 extraout_r2;
  uint uVar11;
  int *extraout_r2_00;
  uint extraout_r2_01;
  int iVar12;
  int iVar13;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  int iVar14;
  undefined4 extraout_r3_01;
  undefined1 *puVar15;
  int *piVar16;
  undefined4 uVar17;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar18;
  undefined4 unaff_lr;
  undefined1 uVar19;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x150)) {
      puVar18 = (undefined1 *)((int)register0x00000054 + -0x1d0);
      *(undefined4 *)((int)register0x00000054 + -0x1d0) = unaff_lr;
      iVar10 = *(int *)((int)register0x00000054 + 8);
      iVar12 = *(int *)(iVar10 + 8);
      puVar15 = *(undefined1 **)(iVar10 + 0xc);
      *(undefined1 **)((int)register0x00000054 + -0xd4) = puVar15;
      iVar13 = 0;
      if (iVar12 != 0) {
        uVar3 = *(undefined4 *)(iVar12 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x1cc) = DAT_0066b690;
        *(undefined4 *)((int)register0x00000054 + -0x1c8) = uVar3;
        FUN_0001cf8c();
        iVar13 = *(int *)((int)register0x00000054 + -0x1c4);
        iVar10 = *(int *)((int)register0x00000054 + 8);
        puVar15 = *(undefined1 **)((int)register0x00000054 + -0xd4);
      }
      if (iVar13 != DAT_0066b694) {
        puVar15 = (undefined1 *)0x0;
      }
      *(int *)((int)register0x00000054 + -0x98) = iVar13;
      if ((iVar13 != DAT_0066b694) || (*(int *)(puVar15 + 4) < 0x1000)) {
        FUN_00098a0c(0,(undefined1 *)((int)register0x00000054 + -0x60));
        *(undefined4 *)((int)register0x00000054 + -0x1cc) = DAT_0066b698;
        *(undefined4 *)((int)register0x00000054 + -0x1c8) = 0x1000;
        *(undefined4 *)((int)register0x00000054 + -0x1c4) = 0x1000;
        FUN_000933e8();
        uVar3 = FUN_00098a0c(0,(undefined1 *)((int)register0x00000054 + -0x8c),
                             *(undefined4 *)((int)register0x00000054 + -0x1c0));
        *(undefined4 *)((int)register0x00000054 + -0x8c) = extraout_r2;
        *(undefined4 *)((int)register0x00000054 + -0x88) = 0x1000;
        *(undefined4 *)((int)register0x00000054 + -0x84) = 0x1000;
        *(undefined4 *)((int)register0x00000054 + -0x80) =
             *(undefined4 *)((int)register0x00000054 + -0x98);
        *(undefined4 *)((int)register0x00000054 + -0x7c) =
             *(undefined4 *)((int)register0x00000054 + -0xd4);
        *(undefined4 *)((int)register0x00000054 + -0x68) = 0xffffffff;
        *(undefined4 *)((int)register0x00000054 + -100) = 0xffffffff;
        FUN_00098de4(uVar3,(undefined1 *)((int)register0x00000054 + -0x8c),
                     (undefined1 *)((int)register0x00000054 + -0x60));
        iVar10 = *(int *)((int)register0x00000054 + 8);
        puVar15 = (undefined1 *)((int)register0x00000054 + -0x60);
      }
      *(undefined1 **)((int)register0x00000054 + -0xe4) = puVar15;
      *(undefined4 *)((int)register0x00000054 + -0x1cc) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x14);
      *(undefined4 *)((int)register0x00000054 + -0x1c8) = DAT_0066b69c;
      *(int *)((int)register0x00000054 + -0x1c4) = iVar10;
      printerApi_service_k3c___K3c__Subscribe();
LAB_0066afa4:
      while( true ) {
        while( true ) {
          *(undefined4 *)((int)register0x00000054 + -0x1cc) =
               *(undefined4 *)((int)register0x00000054 + -0xe4);
          *(undefined1 *)((int)register0x00000054 + -0x1c8) = 3;
          FUN_00187dac();
          iVar13 = *(int *)((int)register0x00000054 + -0x1b8);
          if (iVar13 != 0) {
            if (*DAT_0066c268 == iVar13) {
              uVar3 = *DAT_0066c26c;
              *(int *)((int)register0x00000054 + -0x1cc) = iVar13;
              *(undefined4 *)((int)register0x00000054 + -0x1c8) =
                   *(undefined4 *)((int)register0x00000054 + -0x1b4);
              *(undefined4 *)((int)register0x00000054 + -0x1c4) = uVar3;
              FUN_000169b8();
              if (*(char *)((int)register0x00000054 + -0x1c0) != '\0') {
                uVar3 = **(undefined4 **)((int)register0x00000054 + 8);
                uVar17 = (*(undefined4 **)((int)register0x00000054 + 8))[1];
                *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
                *(undefined4 *)((int)register0x00000054 + -8) = 0;
                *(undefined4 *)((int)register0x00000054 + -0x1cc) = uVar3;
                *(undefined4 *)((int)register0x00000054 + -0x1c8) = uVar17;
                FUN_0008a578();
                *(undefined4 *)((int)register0x00000054 + -0xc) = DAT_0066c270;
                *(undefined4 *)((int)register0x00000054 + -8) =
                     *(undefined4 *)((int)register0x00000054 + -0x1c4);
                *(undefined4 *)((int)register0x00000054 + -0x1cc) = DAT_0066c27c;
                *(undefined4 *)((int)register0x00000054 + -0x1c8) = 0x25;
                *(undefined1 **)((int)register0x00000054 + -0x1c4) =
                     (undefined1 *)((int)register0x00000054 + -0xc);
                *(undefined4 *)((int)register0x00000054 + -0x1c0) = 1;
                *(undefined4 *)((int)register0x00000054 + -0x1bc) = 1;
                printerApi_common_logger_Errorf();
                *(undefined4 *)((int)register0x00000054 + -0x1cc) =
                     *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x14);
                *(undefined4 *)((int)register0x00000054 + -0x1c8) = DAT_0066c278;
                *(undefined4 *)((int)register0x00000054 + -0x1c4) =
                     *(undefined4 *)((int)register0x00000054 + 8);
                printerApi_service_k3c___K3c__UnSubscribe();
                *(undefined4 *)((int)register0x00000054 + -0x1cc) =
                     *(undefined4 *)((int)register0x00000054 + 8);
                printerApi_common_rpc_socket_pool_client___SocketClient__Close();
                return;
              }
            }
            pcVar4 = *(code **)(*(int *)(*(int *)((int)register0x00000054 + 8) + 8) + 0x18);
            *(undefined4 *)((int)register0x00000054 + -0x1cc) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + 8) + 0xc);
            (*pcVar4)();
            pcVar4 = *(code **)(*(int *)((int)register0x00000054 + -0x1c8) + 0x10);
            *(undefined4 *)((int)register0x00000054 + -0x1cc) =
                 *(undefined4 *)((int)register0x00000054 + -0x1c4);
            (*pcVar4)();
            *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
            *(undefined4 *)((int)register0x00000054 + -8) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x1cc) =
                 *(undefined4 *)((int)register0x00000054 + -0x1c8);
            *(undefined4 *)((int)register0x00000054 + -0x1c8) =
                 *(undefined4 *)((int)register0x00000054 + -0x1c4);
            FUN_0008a578();
            *(undefined4 *)((int)register0x00000054 + -0xc) = DAT_0066c270;
            *(undefined4 *)((int)register0x00000054 + -8) =
                 *(undefined4 *)((int)register0x00000054 + -0x1c4);
            *(undefined4 *)((int)register0x00000054 + -0x1cc) = DAT_0066c274;
            *(undefined4 *)((int)register0x00000054 + -0x1c8) = 0x1e;
            *(undefined1 **)((int)register0x00000054 + -0x1c4) =
                 (undefined1 *)((int)register0x00000054 + -0xc);
            *(undefined4 *)((int)register0x00000054 + -0x1c0) = 1;
            *(undefined4 *)((int)register0x00000054 + -0x1bc) = 1;
            printerApi_common_logger_Errorf();
            *(undefined4 *)((int)register0x00000054 + -0x1cc) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x14);
            *(undefined4 *)((int)register0x00000054 + -0x1c8) = DAT_0066c278;
            *(undefined4 *)((int)register0x00000054 + -0x1c4) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            printerApi_service_k3c___K3c__UnSubscribe();
            *(undefined4 *)((int)register0x00000054 + -0x1cc) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            printerApi_common_rpc_socket_pool_client___SocketClient__Close();
            return;
          }
          *(undefined4 *)((int)register0x00000054 + -0xb4) =
               *(undefined4 *)((int)register0x00000054 + -0x1c4);
          *(undefined4 *)((int)register0x00000054 + -0x158) =
               *(undefined4 *)((int)register0x00000054 + -0x1bc);
          *(undefined4 *)((int)register0x00000054 + -0x15c) =
               *(undefined4 *)((int)register0x00000054 + -0x1c0);
          *(undefined4 *)((int)register0x00000054 + -0x1cc) = DAT_0066b6a0;
          FUN_0001eed8();
          uVar7 = *(int *)((int)register0x00000054 + -0x15c) - 1;
          uVar11 = *(uint *)((int)register0x00000054 + -0x158);
          uVar19 = uVar11 == uVar7;
          if (uVar11 < uVar7) goto LAB_0066c240;
          *(uint *)((int)register0x00000054 + -0x15c) = uVar7;
          uVar3 = *(undefined4 *)((int)register0x00000054 + -0x1c8);
          *(undefined4 *)((int)register0x00000054 + -4) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0x1cc) =
               *(undefined4 *)((int)register0x00000054 + -0xb4);
          *(uint *)((int)register0x00000054 + -0x1c8) = uVar7;
          *(uint *)((int)register0x00000054 + -0x1c4) = uVar11;
          *(undefined4 *)((int)register0x00000054 + -0x1c0) = DAT_0066b6a4;
          *(undefined4 *)((int)register0x00000054 + -0x1bc) = uVar3;
          FUN_0016a168();
          iVar13 = *(int *)((int)register0x00000054 + -0x1b8);
          if (iVar13 != 0) {
            *(int *)((int)register0x00000054 + -0x108) = iVar13;
            *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
            *(undefined4 *)((int)register0x00000054 + -8) = 0;
            uVar3 = *(undefined4 *)(iVar13 + 4);
            *(undefined4 *)((int)register0x00000054 + -0xa4) =
                 *(undefined4 *)((int)register0x00000054 + -0x1b4);
            *(undefined4 *)((int)register0x00000054 + -0xc) = uVar3;
            *(undefined4 *)((int)register0x00000054 + -8) =
                 *(undefined4 *)((int)register0x00000054 + -0x1b4);
            *(undefined4 *)((int)register0x00000054 + -0x1cc) = DAT_0066b6a8;
            *(undefined4 *)((int)register0x00000054 + -0x1c8) = 0x26;
            *(undefined1 **)((int)register0x00000054 + -0x1c4) =
                 (undefined1 *)((int)register0x00000054 + -0xc);
            *(undefined4 *)((int)register0x00000054 + -0x1c0) = 1;
            *(undefined4 *)((int)register0x00000054 + -0x1bc) = 1;
            printerApi_common_logger_Errorf();
            pcVar4 = *(code **)(*(int *)((int)register0x00000054 + -0x108) + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x1cc) =
                 *(undefined4 *)((int)register0x00000054 + -0xa4);
            (*pcVar4)();
            *(undefined4 *)((int)register0x00000054 + -0x160) =
                 *(undefined4 *)((int)register0x00000054 + -0x1c4);
            *(undefined4 *)((int)register0x00000054 + -0x130) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x10);
            *(undefined4 *)((int)register0x00000054 + -0x10c) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x14);
            *(undefined4 *)((int)register0x00000054 + -0xb8) =
                 *(undefined4 *)((int)register0x00000054 + -0x1c8);
            *(undefined4 *)((int)register0x00000054 + -0x1cc) = DAT_0066b6ac;
            FUN_0001eed8();
            puVar5 = *(undefined4 **)((int)register0x00000054 + -0x1c8);
            puVar5[1] = 3;
            *puVar5 = DAT_0066b6b0;
            puVar5[3] = *(undefined4 *)((int)register0x00000054 + -0x160);
            if (*DAT_0066b6b4 == 0) {
              iVar13 = *(int *)((int)register0x00000054 + -0xb8);
            }
            else {
              puVar5 = (undefined4 *)FUN_00098678();
              iVar13 = *(int *)((int)register0x00000054 + -0xb8);
              *unaff_r8 = iVar13;
            }
            *(undefined4 **)((int)register0x00000054 + -0xe8) = puVar5;
            puVar5[2] = iVar13;
            *(undefined4 *)((int)register0x00000054 + -0x1cc) = DAT_0066b6b8;
            FUN_0001eed8();
            puVar5 = *(undefined4 **)((int)register0x00000054 + -0x1c8);
            *puVar5 = *(undefined4 *)((int)register0x00000054 + -0x130);
            puVar5[1] = *(undefined4 *)((int)register0x00000054 + -0x10c);
            if (*DAT_0066b6b4 == 0) {
              iVar13 = *(int *)((int)register0x00000054 + -0xe8);
            }
            else {
              puVar5 = (undefined4 *)FUN_00098678();
              iVar13 = *(int *)((int)register0x00000054 + -0xe8);
              *unaff_r8 = iVar13;
            }
            puVar5[4] = iVar13;
            *(undefined4 *)((int)register0x00000054 + -0x1cc) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 **)((int)register0x00000054 + -0x1c8) = puVar5;
            printerApi_common_rpc_socket_pool_client___SocketClient__Send();
            *(undefined4 *)((int)register0x00000054 + -0x1cc) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            printerApi_common_rpc_socket_pool_client___SocketClient__Close();
          }
          FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x1c));
          *(undefined4 *)((int)register0x00000054 + -0x1c) = DAT_0066b6bc;
          *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_0066b6c0;
          uVar3 = (*(undefined4 **)((int)register0x00000054 + -4))[1];
          *(undefined4 *)((int)register0x00000054 + -0x1cc) =
               **(undefined4 **)((int)register0x00000054 + -4);
          *(undefined4 *)((int)register0x00000054 + -0x1c8) = uVar3;
          FUN_0008a578();
          *(undefined4 *)((int)register0x00000054 + -0x14) = DAT_0066b6bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) =
               *(undefined4 *)((int)register0x00000054 + -0x1c4);
          *(undefined1 **)((int)register0x00000054 + -0x1cc) =
               (undefined1 *)((int)register0x00000054 + -0x1c);
          *(undefined4 *)((int)register0x00000054 + -0x1c8) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x1c4) = 2;
          printerApi_common_logger_Debug();
          uVar3 = (*(undefined4 **)((int)register0x00000054 + -4))[1];
          *(undefined4 *)((int)register0x00000054 + -0x1cc) =
               **(undefined4 **)((int)register0x00000054 + -4);
          *(undefined4 *)((int)register0x00000054 + -0x1c8) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0x1c4) = DAT_0066b6c4;
          *(undefined4 *)((int)register0x00000054 + -0x1c0) = 1;
          internal_stringslite_Index();
          uVar7 = *(uint *)((int)register0x00000054 + -0x1bc);
          if (uVar7 != 0xffffffff) break;
          iVar13 = *(int *)((int)register0x00000054 + 8);
          uVar3 = 0;
          if (*(int *)(iVar13 + 8) != 0) {
            uVar3 = *(undefined4 *)(*(int *)(iVar13 + 8) + 4);
          }
          uVar17 = *(undefined4 *)(iVar13 + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x1cc) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x14);
          FUN_00098e0c(iVar13,*(undefined4 *)((int)register0x00000054 + -4),
                       (undefined1 *)((int)register0x00000054 + -0x1c8),uVar3);
          *(undefined4 *)((int)register0x00000054 + -0x1b0) = extraout_r3;
          *(undefined4 *)((int)register0x00000054 + -0x1ac) = uVar17;
          printerApi_service_k3c___K3c__Async();
          iVar13 = *(int *)((int)register0x00000054 + -0x1a8);
          if (iVar13 != 0) {
            if (iVar13 == DAT_0066b6c8) {
              *(undefined4 *)((int)register0x00000054 + -0xa8) =
                   *(undefined4 *)((int)register0x00000054 + -0x1a4);
              *(undefined4 *)((int)register0x00000054 + -0x134) =
                   *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x10);
              *(undefined4 *)((int)register0x00000054 + -0x110) =
                   *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x14);
              *(undefined4 *)((int)register0x00000054 + -0x1cc) = DAT_0066b6b8;
              FUN_0001eed8();
              puVar5 = *(undefined4 **)((int)register0x00000054 + -0x1c8);
              *puVar5 = *(undefined4 *)((int)register0x00000054 + -0x134);
              puVar5[1] = *(undefined4 *)((int)register0x00000054 + -0x110);
              if (*DAT_0066b6b4 == 0) {
                iVar13 = *(int *)((int)register0x00000054 + -0xa8);
              }
              else {
                puVar5 = (undefined4 *)FUN_00098678();
                iVar13 = *(int *)((int)register0x00000054 + -0xa8);
                *unaff_r8 = iVar13;
              }
              puVar5[4] = iVar13;
              *(undefined4 *)((int)register0x00000054 + -0x1cc) =
                   *(undefined4 *)((int)register0x00000054 + 8);
              *(undefined4 **)((int)register0x00000054 + -0x1c8) = puVar5;
              printerApi_common_rpc_socket_pool_client___SocketClient__Send();
            }
            else {
              pcVar4 = *(code **)(iVar13 + 0xc);
              *(undefined4 *)((int)register0x00000054 + -0x1cc) =
                   *(undefined4 *)((int)register0x00000054 + -0x1a4);
              (*pcVar4)();
              *(undefined4 *)((int)register0x00000054 + -0x164) =
                   *(undefined4 *)((int)register0x00000054 + -0x1c4);
              *(undefined4 *)((int)register0x00000054 + -0x138) =
                   *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x10);
              *(undefined4 *)((int)register0x00000054 + -0x114) =
                   *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x14);
              *(undefined4 *)((int)register0x00000054 + -0xbc) =
                   *(undefined4 *)((int)register0x00000054 + -0x1c8);
              *(undefined4 *)((int)register0x00000054 + -0x1cc) = DAT_0066b6ac;
              FUN_0001eed8();
              puVar5 = *(undefined4 **)((int)register0x00000054 + -0x1c8);
              puVar5[1] = 3;
              *puVar5 = DAT_0066b6cc;
              puVar5[3] = *(undefined4 *)((int)register0x00000054 + -0x164);
              if (*DAT_0066b6b4 == 0) {
                iVar13 = *(int *)((int)register0x00000054 + -0xbc);
              }
              else {
                puVar5 = (undefined4 *)FUN_00098678();
                iVar13 = *(int *)((int)register0x00000054 + -0xbc);
                *unaff_r8 = iVar13;
              }
              *(undefined4 **)((int)register0x00000054 + -0xec) = puVar5;
              puVar5[2] = iVar13;
              *(undefined4 *)((int)register0x00000054 + -0x1cc) = DAT_0066b6b8;
              FUN_0001eed8();
              puVar5 = *(undefined4 **)((int)register0x00000054 + -0x1c8);
              *puVar5 = *(undefined4 *)((int)register0x00000054 + -0x138);
              puVar5[1] = *(undefined4 *)((int)register0x00000054 + -0x114);
              if (*DAT_0066b6b4 == 0) {
                iVar13 = *(int *)((int)register0x00000054 + -0xec);
              }
              else {
                puVar5 = (undefined4 *)FUN_00098678();
                iVar13 = *(int *)((int)register0x00000054 + -0xec);
                *unaff_r8 = iVar13;
              }
              puVar5[4] = iVar13;
              *(undefined4 *)((int)register0x00000054 + -0x1cc) =
                   *(undefined4 *)((int)register0x00000054 + 8);
              *(undefined4 **)((int)register0x00000054 + -0x1c8) = puVar5;
              printerApi_common_rpc_socket_pool_client___SocketClient__Send();
            }
          }
        }
        uVar11 = (*(int **)((int)register0x00000054 + -4))[1];
        uVar19 = uVar7 == uVar11;
        if (uVar11 <= uVar7 && !(bool)uVar19) goto LAB_0066c23c;
        uVar6 = uVar7 + 1;
        uVar19 = uVar11 == uVar6;
        if (uVar11 < uVar6) goto LAB_0066c234;
        *(uint *)((int)register0x00000054 + -0x17c) = uVar7;
        iVar13 = **(int **)((int)register0x00000054 + -4);
        *(int *)((int)register0x00000054 + -0xe0) = iVar13;
        *(uint *)((int)register0x00000054 + -0x174) = (uVar11 - uVar7) + -1;
        *(uint *)((int)register0x00000054 + -0xcc) =
             iVar13 + (uVar6 & (int)(1 - (uVar11 - uVar7)) >> 0x1f);
        FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x1c));
        *(int *)((int)register0x00000054 + -0x1cc) = iVar13;
        *(uint *)((int)register0x00000054 + -0x1c8) = uVar7;
        FUN_0008a578();
        *(undefined4 *)((int)register0x00000054 + -0x1c) = DAT_0066b6bc;
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)((int)register0x00000054 + -0x1c4);
        *(undefined4 *)((int)register0x00000054 + -0x1cc) =
             *(undefined4 *)((int)register0x00000054 + -0xcc);
        *(undefined4 *)((int)register0x00000054 + -0x1c8) =
             *(undefined4 *)((int)register0x00000054 + -0x174);
        FUN_0008a578();
        *(undefined4 *)((int)register0x00000054 + -0x14) = DAT_0066b6bc;
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + -0x1c4);
        *(undefined4 *)((int)register0x00000054 + -0x1cc) = DAT_0066b6d0;
        *(undefined4 *)((int)register0x00000054 + -0x1c8) = 0x20;
        *(undefined1 **)((int)register0x00000054 + -0x1c4) =
             (undefined1 *)((int)register0x00000054 + -0x1c);
        *(undefined4 *)((int)register0x00000054 + -0x1c0) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x1bc) = 2;
        printerApi_common_logger_Debugf();
        *(undefined4 *)((int)register0x00000054 + -0x94) =
             *(undefined4 *)((int)register0x00000054 + -0xe0);
        *(undefined4 *)((int)register0x00000054 + -0x90) =
             *(undefined4 *)((int)register0x00000054 + -0x17c);
        *(int *)((int)register0x00000054 + -0x1cc) = *(int *)((int)register0x00000054 + 4) + 0x18;
        *(undefined4 *)((int)register0x00000054 + -0x1c8) = DAT_0066b6bc;
        *(undefined1 **)((int)register0x00000054 + -0x1c4) =
             (undefined1 *)((int)register0x00000054 + -0x94);
        FUN_000b253c();
        if (*(char *)((int)register0x00000054 + -0x1b8) != '\0') break;
        iVar13 = *(int *)((int)register0x00000054 + 8);
        uVar3 = 0;
        if (*(int *)(iVar13 + 8) != 0) {
          uVar3 = *(undefined4 *)(*(int *)(iVar13 + 8) + 4);
        }
        uVar17 = *(undefined4 *)(iVar13 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x1cc) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x14);
        FUN_00098e0c(iVar13,*(undefined4 *)((int)register0x00000054 + -4),
                     (undefined1 *)((int)register0x00000054 + -0x1c8),uVar3);
        *(undefined4 *)((int)register0x00000054 + -0x1b0) = extraout_r3_01;
        *(undefined4 *)((int)register0x00000054 + -0x1ac) = uVar17;
        printerApi_service_k3c___K3c__Async();
        iVar13 = *(int *)((int)register0x00000054 + -0x1a8);
        if (iVar13 != 0) {
          if (iVar13 == DAT_0066bf58) {
            *(undefined4 *)((int)register0x00000054 + -0xac) =
                 *(undefined4 *)((int)register0x00000054 + -0x1a4);
            *(undefined4 *)((int)register0x00000054 + -0x13c) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x10);
            *(undefined4 *)((int)register0x00000054 + -0x118) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x14);
            *(undefined4 *)((int)register0x00000054 + -0x1cc) = DAT_0066bf5c;
            FUN_0001eed8();
            puVar5 = *(undefined4 **)((int)register0x00000054 + -0x1c8);
            *puVar5 = *(undefined4 *)((int)register0x00000054 + -0x13c);
            puVar5[1] = *(undefined4 *)((int)register0x00000054 + -0x118);
            if (*DAT_0066bf60 == 0) {
              iVar13 = *(int *)((int)register0x00000054 + -0xac);
            }
            else {
              puVar5 = (undefined4 *)FUN_00098678();
              iVar13 = *(int *)((int)register0x00000054 + -0xac);
              *unaff_r8 = iVar13;
            }
            puVar5[4] = iVar13;
            *(undefined4 *)((int)register0x00000054 + -0x1cc) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 **)((int)register0x00000054 + -0x1c8) = puVar5;
            printerApi_common_rpc_socket_pool_client___SocketClient__Send();
          }
          else {
            pcVar4 = *(code **)(iVar13 + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x1cc) =
                 *(undefined4 *)((int)register0x00000054 + -0x1a4);
            (*pcVar4)();
            *(undefined4 *)((int)register0x00000054 + -0x168) =
                 *(undefined4 *)((int)register0x00000054 + -0x1c4);
            *(undefined4 *)((int)register0x00000054 + -0x140) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x10);
            *(undefined4 *)((int)register0x00000054 + -0x11c) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x14);
            *(undefined4 *)((int)register0x00000054 + -0xc0) =
                 *(undefined4 *)((int)register0x00000054 + -0x1c8);
            *(undefined4 *)((int)register0x00000054 + -0x1cc) = DAT_0066c258;
            FUN_0001eed8();
            puVar5 = *(undefined4 **)((int)register0x00000054 + -0x1c8);
            puVar5[1] = 3;
            *puVar5 = DAT_0066c25c;
            puVar5[3] = *(undefined4 *)((int)register0x00000054 + -0x168);
            if (*DAT_0066c260 == 0) {
              iVar13 = *(int *)((int)register0x00000054 + -0xc0);
            }
            else {
              puVar5 = (undefined4 *)FUN_00098678();
              iVar13 = *(int *)((int)register0x00000054 + -0xc0);
              *unaff_r8 = iVar13;
            }
            *(undefined4 **)((int)register0x00000054 + -0xf0) = puVar5;
            puVar5[2] = iVar13;
            *(undefined4 *)((int)register0x00000054 + -0x1cc) = DAT_0066c264;
            FUN_0001eed8();
            puVar5 = *(undefined4 **)((int)register0x00000054 + -0x1c8);
            *puVar5 = *(undefined4 *)((int)register0x00000054 + -0x140);
            puVar5[1] = *(undefined4 *)((int)register0x00000054 + -0x11c);
            if (*DAT_0066c260 == 0) {
              iVar13 = *(int *)((int)register0x00000054 + -0xf0);
            }
            else {
              puVar5 = (undefined4 *)FUN_00098678();
              iVar13 = *(int *)((int)register0x00000054 + -0xf0);
              *unaff_r8 = iVar13;
            }
            puVar5[4] = iVar13;
            *(undefined4 *)((int)register0x00000054 + -0x1cc) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 **)((int)register0x00000054 + -0x1c8) = puVar5;
            printerApi_common_rpc_socket_pool_client___SocketClient__Send();
          }
        }
      }
      uVar19 = *(int *)((int)register0x00000054 + -0x1c0) == DAT_0066b6d4;
      if ((bool)uVar19) {
        *(int *)((int)register0x00000054 + -0xdc) = *(int *)((int)register0x00000054 + -0x1bc);
        uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x1bc) + 0x1c);
        *(undefined4 *)((int)register0x00000054 + -0x1cc) = DAT_0066b6d8;
        *(undefined4 *)((int)register0x00000054 + -0x1c8) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x1c4) =
             *(undefined4 *)((int)register0x00000054 + -0xcc);
        *(undefined4 *)((int)register0x00000054 + -0x1c0) =
             *(undefined4 *)((int)register0x00000054 + -0x174);
        FUN_0008e314();
        if (*(char *)((int)register0x00000054 + -0x1b8) == '\0') {
          iVar13 = *(int *)((int)register0x00000054 + 8);
          uVar3 = 0;
          if (*(int *)(iVar13 + 8) != 0) {
            uVar3 = *(undefined4 *)(*(int *)(iVar13 + 8) + 4);
          }
          uVar17 = *(undefined4 *)(iVar13 + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x1cc) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x14);
          FUN_00098e0c(iVar13,*(undefined4 *)((int)register0x00000054 + -4),
                       (undefined1 *)((int)register0x00000054 + -0x1c8),uVar3);
          *(undefined4 *)((int)register0x00000054 + -0x1b0) = extraout_r3_00;
          *(undefined4 *)((int)register0x00000054 + -0x1ac) = uVar17;
          printerApi_service_k3c___K3c__Async();
          iVar13 = *(int *)((int)register0x00000054 + -0x1a8);
          if (iVar13 != 0) {
            if (iVar13 == DAT_0066b6c8) {
              *(undefined4 *)((int)register0x00000054 + -0xb0) =
                   *(undefined4 *)((int)register0x00000054 + -0x1a4);
              *(undefined4 *)((int)register0x00000054 + -0x144) =
                   *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x10);
              *(undefined4 *)((int)register0x00000054 + -0x100) =
                   *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x14);
              *(undefined4 *)((int)register0x00000054 + -0x1cc) = DAT_0066b6b8;
              FUN_0001eed8();
              puVar5 = *(undefined4 **)((int)register0x00000054 + -0x1c8);
              *puVar5 = *(undefined4 *)((int)register0x00000054 + -0x144);
              puVar5[1] = *(undefined4 *)((int)register0x00000054 + -0x100);
              if (*DAT_0066b6b4 == 0) {
                iVar13 = *(int *)((int)register0x00000054 + -0xb0);
              }
              else {
                puVar5 = (undefined4 *)FUN_00098678();
                iVar13 = *(int *)((int)register0x00000054 + -0xb0);
                *unaff_r8 = iVar13;
              }
              puVar5[4] = iVar13;
              *(undefined4 *)((int)register0x00000054 + -0x1cc) =
                   *(undefined4 *)((int)register0x00000054 + 8);
              *(undefined4 **)((int)register0x00000054 + -0x1c8) = puVar5;
              printerApi_common_rpc_socket_pool_client___SocketClient__Send();
            }
            else {
              pcVar4 = *(code **)(iVar13 + 0xc);
              *(undefined4 *)((int)register0x00000054 + -0x1cc) =
                   *(undefined4 *)((int)register0x00000054 + -0x1a4);
              (*pcVar4)();
              *(undefined4 *)((int)register0x00000054 + -0x16c) =
                   *(undefined4 *)((int)register0x00000054 + -0x1c4);
              *(undefined4 *)((int)register0x00000054 + -0x148) =
                   *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x10);
              *(undefined4 *)((int)register0x00000054 + -0x120) =
                   *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x14);
              *(undefined4 *)((int)register0x00000054 + -0xc4) =
                   *(undefined4 *)((int)register0x00000054 + -0x1c8);
              *(undefined4 *)((int)register0x00000054 + -0x1cc) = DAT_0066b6ac;
              FUN_0001eed8();
              puVar5 = *(undefined4 **)((int)register0x00000054 + -0x1c8);
              puVar5[1] = 3;
              *puVar5 = DAT_0066b6cc;
              puVar5[3] = *(undefined4 *)((int)register0x00000054 + -0x16c);
              if (*DAT_0066b6b4 == 0) {
                iVar13 = *(int *)((int)register0x00000054 + -0xc4);
              }
              else {
                puVar5 = (undefined4 *)FUN_00098678();
                iVar13 = *(int *)((int)register0x00000054 + -0xc4);
                *unaff_r8 = iVar13;
              }
              *(undefined4 **)((int)register0x00000054 + -0xf4) = puVar5;
              puVar5[2] = iVar13;
              *(undefined4 *)((int)register0x00000054 + -0x1cc) = DAT_0066b6b8;
              FUN_0001eed8();
              puVar5 = *(undefined4 **)((int)register0x00000054 + -0x1c8);
              *puVar5 = *(undefined4 *)((int)register0x00000054 + -0x148);
              puVar5[1] = *(undefined4 *)((int)register0x00000054 + -0x120);
              if (*DAT_0066b6b4 == 0) {
                iVar13 = *(int *)((int)register0x00000054 + -0xf4);
              }
              else {
                puVar5 = (undefined4 *)FUN_00098678();
                iVar13 = *(int *)((int)register0x00000054 + -0xf4);
                *unaff_r8 = iVar13;
              }
              puVar5[4] = iVar13;
              *(undefined4 *)((int)register0x00000054 + -0x1cc) =
                   *(undefined4 *)((int)register0x00000054 + 8);
              *(undefined4 **)((int)register0x00000054 + -0x1c8) = puVar5;
              printerApi_common_rpc_socket_pool_client___SocketClient__Send();
            }
          }
        }
        else {
          *(undefined4 *)((int)register0x00000054 + -0xd0) =
               **(undefined4 **)((int)register0x00000054 + -0x1bc);
          *(undefined1 **)((int)register0x00000054 + -0x1cc) =
               (undefined1 *)((int)register0x00000054 + -0x1a0);
          *(undefined4 *)((int)register0x00000054 + -0x1c8) =
               *(undefined4 *)((int)register0x00000054 + -0xe0);
          *(undefined4 *)((int)register0x00000054 + -0x1c4) =
               *(undefined4 *)((int)register0x00000054 + -0x17c);
          *(undefined4 *)((int)register0x00000054 + -0x1c0) = DAT_0066bf40;
          *(undefined4 *)((int)register0x00000054 + -0x1bc) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x1b8) =
               *(undefined4 *)((int)register0x00000054 + -0xcc);
          *(undefined4 *)((int)register0x00000054 + -0x1b4) =
               *(undefined4 *)((int)register0x00000054 + -0x174);
          FUN_00071620();
          uVar3 = *DAT_0066bf44;
          *(undefined4 *)((int)register0x00000054 + -0x1cc) = DAT_0066bf48;
          *(undefined4 *)((int)register0x00000054 + -0x1c8) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0x1c4) =
               *(undefined4 *)((int)register0x00000054 + -0x1b0);
          *(undefined4 *)((int)register0x00000054 + -0x1c0) =
               *(undefined4 *)((int)register0x00000054 + -0x1ac);
          FUN_00021c74();
          if (**(char **)((int)register0x00000054 + -0x1bc) == '\0') {
            *(undefined4 *)((int)register0x00000054 + -0x1cc) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x14);
            internal_runtime_atomic_Load();
            bVar1 = 1 < *(int *)((int)register0x00000054 + -0x1c8) - 2U;
          }
          else {
            bVar1 = false;
          }
          if (bVar1) {
            *(undefined4 *)((int)register0x00000054 + -0xc) = DAT_0066bf4c;
            *(undefined4 *)((int)register0x00000054 + -8) = DAT_0066bf94;
            *(undefined1 **)((int)register0x00000054 + -0x1cc) =
                 (undefined1 *)((int)register0x00000054 + -0xc);
            *(undefined4 *)((int)register0x00000054 + -0x1c8) = 1;
            *(undefined4 *)((int)register0x00000054 + -0x1c4) = 1;
            printerApi_common_logger_Debug();
            *(undefined4 *)((int)register0x00000054 + -0x14c) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x10);
            *(undefined4 *)((int)register0x00000054 + -0x124) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x14);
            *(undefined4 *)((int)register0x00000054 + -0x9c) = *DAT_0066bf98;
            *(undefined4 *)((int)register0x00000054 + -0x1cc) = DAT_0066bf5c;
            FUN_0001eed8();
            puVar5 = *(undefined4 **)((int)register0x00000054 + -0x1c8);
            *puVar5 = *(undefined4 *)((int)register0x00000054 + -0x14c);
            puVar5[1] = *(undefined4 *)((int)register0x00000054 + -0x124);
            if (*DAT_0066bf60 == 0) {
              iVar13 = *(int *)((int)register0x00000054 + -0x9c);
            }
            else {
              puVar5 = (undefined4 *)FUN_00098678();
              iVar13 = *(int *)((int)register0x00000054 + -0x9c);
              *unaff_r8 = iVar13;
            }
            puVar5[4] = iVar13;
            *(undefined4 *)((int)register0x00000054 + -0x1cc) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 **)((int)register0x00000054 + -0x1c8) = puVar5;
            printerApi_common_rpc_socket_pool_client___SocketClient__Send();
            goto LAB_0066afa4;
          }
          iVar13 = *(int *)((int)register0x00000054 + 4);
          if (*(char *)(iVar13 + 0x2c) != '\0') {
            *(undefined4 *)((int)register0x00000054 + -0xfc) =
                 **(undefined4 **)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0x180) =
                 (*(undefined4 **)((int)register0x00000054 + 8))[1];
            FUN_00098a20(0,(undefined1 *)((int)register0x00000054 + -0x34));
            uVar3 = (*(undefined4 **)((int)register0x00000054 + -4))[1];
            *(undefined4 *)((int)register0x00000054 + -0x1cc) =
                 **(undefined4 **)((int)register0x00000054 + -4);
            *(undefined4 *)((int)register0x00000054 + -0x1c8) = uVar3;
            FUN_0008a578();
            *(undefined4 *)((int)register0x00000054 + -0x34) = DAT_0066bf4c;
            *(undefined4 *)((int)register0x00000054 + -0x30) =
                 *(undefined4 *)((int)register0x00000054 + -0x1c4);
            *(undefined4 *)((int)register0x00000054 + -0x1cc) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x1c8) =
                 *(undefined4 *)((int)register0x00000054 + -0xb4);
            *(undefined4 *)((int)register0x00000054 + -0x1c4) =
                 *(undefined4 *)((int)register0x00000054 + -0x15c);
            FUN_00093e34();
            *(undefined4 *)((int)register0x00000054 + -0x1cc) =
                 *(undefined4 *)((int)register0x00000054 + -0x1c0);
            *(undefined4 *)((int)register0x00000054 + -0x1c8) =
                 *(undefined4 *)((int)register0x00000054 + -0x1bc);
            FUN_0008a578();
            *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_0066bf4c;
            *(undefined4 *)((int)register0x00000054 + -0x28) =
                 *(undefined4 *)((int)register0x00000054 + -0x1c4);
            *(undefined4 *)((int)register0x00000054 + -0x1cc) =
                 *(undefined4 *)((int)register0x00000054 + -0xfc);
            *(undefined4 *)((int)register0x00000054 + -0x1c8) =
                 *(undefined4 *)((int)register0x00000054 + -0x180);
            FUN_0008a578();
            *(undefined4 *)((int)register0x00000054 + -0x24) = DAT_0066bf4c;
            *(undefined4 *)((int)register0x00000054 + -0x20) =
                 *(undefined4 *)((int)register0x00000054 + -0x1c4);
            *(undefined4 *)((int)register0x00000054 + -0x1cc) = DAT_0066bf50;
            *(undefined4 *)((int)register0x00000054 + -0x1c8) = 0x27;
            *(undefined1 **)((int)register0x00000054 + -0x1c4) =
                 (undefined1 *)((int)register0x00000054 + -0x34);
            *(undefined4 *)((int)register0x00000054 + -0x1c0) = 3;
            *(undefined4 *)((int)register0x00000054 + -0x1bc) = 3;
            printerApi_common_logger_Debugf();
            iVar13 = *(int *)((int)register0x00000054 + 4);
          }
          *(int *)((int)register0x00000054 + -0x1cc) = iVar13;
          *(undefined4 *)((int)register0x00000054 + -0x1c8) =
               *(undefined4 *)((int)register0x00000054 + -0xb4);
          *(undefined4 *)((int)register0x00000054 + -0x1c4) =
               *(undefined4 *)((int)register0x00000054 + -0x15c);
          *(undefined4 *)((int)register0x00000054 + -0x1c0) =
               *(undefined4 *)((int)register0x00000054 + -0x158);
          *(undefined4 *)((int)register0x00000054 + -0x1bc) =
               *(undefined4 *)((int)register0x00000054 + -0xdc);
          *(undefined4 *)((int)register0x00000054 + -0x1b8) =
               *(undefined4 *)((int)register0x00000054 + -0xd0);
          printerApi_server___SocketServerRpc__call();
          iVar10 = *(int *)((int)register0x00000054 + 4);
          cVar2 = *(char *)(iVar10 + 0x2c);
          iVar12 = *(int *)((int)register0x00000054 + -0x1ac);
          iVar14 = *(int *)((int)register0x00000054 + -0x1b4);
          *(int *)((int)register0x00000054 + -0x178) = iVar14;
          piVar16 = *(int **)((int)register0x00000054 + -0x1b0);
          *(int **)((int)register0x00000054 + -0xd8) = piVar16;
          uVar3 = *(undefined4 *)((int)register0x00000054 + -0x1a8);
          *(undefined4 *)((int)register0x00000054 + -0xa0) = uVar3;
          iVar13 = 0;
          if (cVar2 != '\0') {
            *(int *)((int)register0x00000054 + -0x104) = iVar12;
            FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x1c));
            uVar3 = (*(undefined4 **)((int)register0x00000054 + -4))[1];
            *(undefined4 *)((int)register0x00000054 + -0x1cc) =
                 **(undefined4 **)((int)register0x00000054 + -4);
            *(undefined4 *)((int)register0x00000054 + -0x1c8) = uVar3;
            FUN_0008a578();
            *(undefined4 *)((int)register0x00000054 + -0x1c) = DAT_0066bf4c;
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -0x1c4);
            if (*(int *)((int)register0x00000054 + -0x104) == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x104) + 4);
            }
            *(undefined4 *)((int)register0x00000054 + -0x14) = uVar3;
            *(undefined4 *)((int)register0x00000054 + -0x10) =
                 *(undefined4 *)((int)register0x00000054 + -0xa0);
            *(undefined4 *)((int)register0x00000054 + -0x1cc) = DAT_0066bf54;
            *(undefined4 *)((int)register0x00000054 + -0x1c8) = 0x1a;
            *(undefined1 **)((int)register0x00000054 + -0x1c4) =
                 (undefined1 *)((int)register0x00000054 + -0x1c);
            *(undefined4 *)((int)register0x00000054 + -0x1c0) = 2;
            *(undefined4 *)((int)register0x00000054 + -0x1bc) = 2;
            printerApi_common_logger_Debugf();
            iVar10 = *(int *)((int)register0x00000054 + 4);
            iVar12 = *(int *)((int)register0x00000054 + -0x104);
            iVar14 = *(int *)((int)register0x00000054 + -0x178);
            piVar16 = *(int **)((int)register0x00000054 + -0xd8);
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0xa0);
            iVar13 = extraout_r1;
          }
          iVar9 = DAT_0066bf88;
          iVar8 = DAT_0066bf70;
          if (iVar12 == 0) {
            if (iVar14 != 0) {
              iVar12 = *(int *)(iVar14 + 8);
              iVar13 = DAT_0066bf80;
              if (iVar12 == DAT_0066bf6c) {
                if (iVar14 == DAT_0066bf70) {
                  if (piVar16[2] == 0 && piVar16[3] == 0) {
                    iVar13 = *(int *)(*(int *)((int)register0x00000054 + -4) + 0x14);
                    piVar16[2] = *(int *)(*(int *)((int)register0x00000054 + -4) + 0x10);
                    piVar16[3] = iVar13;
                  }
                  if ((piVar16[7] == 0) && (piVar16[4] == 0)) {
                    iVar13 = *DAT_0066bf78;
                    iVar12 = *DAT_0066bf7c;
                    piVar16[5] = *DAT_0066bf74;
                    piVar16[6] = iVar13;
                    if (*DAT_0066bf60 != 0) {
                      FUN_00098688(iVar10);
                      *unaff_r8 = iVar12;
                      unaff_r8[1] = piVar16[4];
                      iVar8 = extraout_r1_00;
                    }
                    piVar16[4] = iVar12;
                  }
                  *(undefined4 *)((int)register0x00000054 + -0x1cc) =
                       *(undefined4 *)((int)register0x00000054 + 8);
                  *(int *)((int)register0x00000054 + -0x1c8) = iVar8;
                  *(int **)((int)register0x00000054 + -0x1c4) = piVar16;
                  printerApi_common_rpc_socket_pool_client___SocketClient__SendAny();
                  goto LAB_0066afa4;
                }
              }
              else if (iVar12 == DAT_0066bf84) {
                if (iVar14 == DAT_0066bf88) {
                  if (piVar16[3] == 0 && piVar16[2] == 0) {
                    iVar13 = *(int *)(*(int *)((int)register0x00000054 + -4) + 0x14);
                    piVar16[2] = *(int *)(*(int *)((int)register0x00000054 + -4) + 0x10);
                    piVar16[3] = iVar13;
                  }
                  if ((piVar16[7] == 0) && (piVar16[4] == 0)) {
                    iVar13 = *DAT_0066bf78;
                    iVar12 = *DAT_0066bf7c;
                    piVar16[5] = *DAT_0066bf74;
                    piVar16[6] = iVar13;
                    if (*DAT_0066bf60 != 0) {
                      FUN_00098688(iVar10);
                      *unaff_r8 = iVar12;
                      unaff_r8[1] = piVar16[4];
                      iVar9 = extraout_r1_01;
                    }
                    piVar16[4] = iVar12;
                  }
                  *(undefined4 *)((int)register0x00000054 + -0x1cc) =
                       *(undefined4 *)((int)register0x00000054 + 8);
                  *(int *)((int)register0x00000054 + -0x1c8) = iVar9;
                  *(int **)((int)register0x00000054 + -0x1c4) = piVar16;
                  printerApi_common_rpc_socket_pool_client___SocketClient__SendAny();
                  goto LAB_0066afa4;
                }
              }
              else if ((iVar12 == DAT_0066bf8c) && (iVar14 == DAT_0066bf80)) {
                if (*piVar16 == 0 && piVar16[1] == 0) {
                  iVar13 = *(int *)(*(int *)((int)register0x00000054 + -4) + 0x14);
                  *piVar16 = *(int *)(*(int *)((int)register0x00000054 + -4) + 0x10);
                  piVar16[1] = iVar13;
                }
                if ((piVar16[4] == 0) && (piVar16[2] == 0)) {
                  iVar13 = *DAT_0066bf74;
                  iVar10 = *DAT_0066bf78;
                  *(int *)((int)register0x00000054 + -0x1cc) = *DAT_0066bf7c;
                  *(int *)((int)register0x00000054 + -0x1c8) = iVar13;
                  *(int *)((int)register0x00000054 + -0x1c4) = iVar10;
                  FUN_0008a61c();
                  iVar13 = *(int *)((int)register0x00000054 + -0x1c0);
                  piVar16 = *(int **)((int)register0x00000054 + -0xd8);
                  piVar16[2] = DAT_0066bf90;
                  if (*DAT_0066bf60 != 0) {
                    iVar13 = FUN_00098688();
                    *unaff_r8 = iVar13;
                    unaff_r8[1] = extraout_r2_00[3];
                    piVar16 = extraout_r2_00;
                  }
                  piVar16[3] = iVar13;
                }
                *(undefined4 *)((int)register0x00000054 + -0x1cc) =
                     *(undefined4 *)((int)register0x00000054 + 8);
                *(int **)((int)register0x00000054 + -0x1c8) = piVar16;
                printerApi_common_rpc_socket_pool_client___SocketClient__Send();
                goto LAB_0066afa4;
              }
            }
            *(undefined4 *)((int)register0x00000054 + -0x1cc) = DAT_0066bf5c;
            FUN_0001eed8(DAT_0066bf5c,iVar13);
            puVar5 = *(undefined4 **)((int)register0x00000054 + -0x1c8);
            uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x14);
            *puVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x10);
            puVar5[1] = uVar3;
            puVar5[2] = *(undefined4 *)((int)register0x00000054 + -0x178);
            if (*DAT_0066bf60 == 0) {
              iVar13 = *(int *)((int)register0x00000054 + -0xd8);
            }
            else {
              puVar5 = (undefined4 *)FUN_00098678();
              iVar13 = *(int *)((int)register0x00000054 + -0xd8);
              *unaff_r8 = iVar13;
            }
            puVar5[3] = iVar13;
            *(undefined4 *)((int)register0x00000054 + -0x1cc) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 **)((int)register0x00000054 + -0x1c8) = puVar5;
            printerApi_common_rpc_socket_pool_client___SocketClient__Send();
            goto LAB_0066afa4;
          }
          if (iVar12 == DAT_0066bf58) {
            *(undefined4 *)((int)register0x00000054 + -0x150) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x10);
            *(undefined4 *)((int)register0x00000054 + -0x128) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x14);
            *(undefined4 *)((int)register0x00000054 + -0x1cc) = DAT_0066bf5c;
            FUN_0001eed8();
            puVar5 = *(undefined4 **)((int)register0x00000054 + -0x1c8);
            *puVar5 = *(undefined4 *)((int)register0x00000054 + -0x150);
            puVar5[1] = *(undefined4 *)((int)register0x00000054 + -0x128);
            if (*DAT_0066bf60 == 0) {
              iVar13 = *(int *)((int)register0x00000054 + -0xa0);
            }
            else {
              puVar5 = (undefined4 *)FUN_00098678();
              iVar13 = *(int *)((int)register0x00000054 + -0xa0);
              *unaff_r8 = iVar13;
            }
            puVar5[4] = iVar13;
            *(undefined4 *)((int)register0x00000054 + -0x1cc) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 **)((int)register0x00000054 + -0x1c8) = puVar5;
            printerApi_common_rpc_socket_pool_client___SocketClient__Send();
          }
          else {
            pcVar4 = *(code **)(iVar12 + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x1cc) = uVar3;
            (*pcVar4)();
            *(undefined4 *)((int)register0x00000054 + -0x170) =
                 *(undefined4 *)((int)register0x00000054 + -0x1c4);
            *(undefined4 *)((int)register0x00000054 + -0x154) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x10);
            *(undefined4 *)((int)register0x00000054 + -300) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x14);
            *(undefined4 *)((int)register0x00000054 + -200) =
                 *(undefined4 *)((int)register0x00000054 + -0x1c8);
            *(undefined4 *)((int)register0x00000054 + -0x1cc) = DAT_0066bf64;
            FUN_0001eed8();
            puVar5 = *(undefined4 **)((int)register0x00000054 + -0x1c8);
            puVar5[1] = 3;
            *puVar5 = DAT_0066bf68;
            puVar5[3] = *(undefined4 *)((int)register0x00000054 + -0x170);
            if (*DAT_0066bf60 == 0) {
              iVar13 = *(int *)((int)register0x00000054 + -200);
            }
            else {
              puVar5 = (undefined4 *)FUN_00098678();
              iVar13 = *(int *)((int)register0x00000054 + -200);
              *unaff_r8 = iVar13;
            }
            *(undefined4 **)((int)register0x00000054 + -0xf8) = puVar5;
            puVar5[2] = iVar13;
            *(undefined4 *)((int)register0x00000054 + -0x1cc) = DAT_0066bf5c;
            FUN_0001eed8();
            puVar5 = *(undefined4 **)((int)register0x00000054 + -0x1c8);
            *puVar5 = *(undefined4 *)((int)register0x00000054 + -0x154);
            puVar5[1] = *(undefined4 *)((int)register0x00000054 + -300);
            if (*DAT_0066bf60 == 0) {
              iVar13 = *(int *)((int)register0x00000054 + -0xf8);
            }
            else {
              puVar5 = (undefined4 *)FUN_00098678();
              iVar13 = *(int *)((int)register0x00000054 + -0xf8);
              *unaff_r8 = iVar13;
            }
            puVar5[4] = iVar13;
            *(undefined4 *)((int)register0x00000054 + -0x1cc) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 **)((int)register0x00000054 + -0x1c8) = puVar5;
            printerApi_common_rpc_socket_pool_client___SocketClient__Send();
          }
        }
        goto LAB_0066afa4;
      }
      *(int *)((int)register0x00000054 + -0x1cc) = *(int *)((int)register0x00000054 + -0x1c0);
      *(int *)((int)register0x00000054 + -0x1c8) = DAT_0066b6d4;
      *(undefined4 *)((int)register0x00000054 + -0x1c4) = DAT_0066c280;
      uVar6 = FUN_0001cb94();
      uVar11 = extraout_r2_01;
LAB_0066c234:
      FUN_00098758(uVar6,uVar11);
LAB_0066c23c:
      FUN_00098718();
LAB_0066c240:
      param_1 = FUN_00098738();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1d0);
      if ((bool)uVar19) {
        register0x00000054 = (BADSPACEBASE *)puVar18;
      }
    }
    unaff_lr = 0x66c250;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/server.(*SocketServerRpc).call @ 0066c284 (size 844) */

void printerApi_server___SocketServerRpc__call(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 extraout_r2;
  int iVar6;
  undefined4 extraout_r3;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int unaff_r10;
  undefined1 *puVar10;
  undefined4 unaff_lr;
  undefined1 uVar11;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar10 = (undefined1 *)((int)register0x00000054 + -0x7c);
      *(undefined4 *)((int)register0x00000054 + -0x7c) = unaff_lr;
      pcVar3 = *(code **)(*(int *)(*(int *)((int)register0x00000054 + 0x18) + 0x30) + 0x54);
      *(undefined4 *)((int)register0x00000054 + -0x78) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + 0x18) + 0x34);
      (*pcVar3)();
      *(int *)((int)register0x00000054 + -0x44) = *(int *)((int)register0x00000054 + -0x74);
      if (*(int *)((int)register0x00000054 + -0x74) == 0x16) {
        pcVar3 = *(code **)(*(int *)(*(int *)((int)register0x00000054 + 0x18) + 0x30) + 0x2c);
        *(undefined4 *)((int)register0x00000054 + -0x78) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + 0x18) + 0x34);
        (*pcVar3)();
        *(undefined4 *)((int)register0x00000054 + -0x78) =
             *(undefined4 *)((int)register0x00000054 + -0x74);
        *(undefined4 *)((int)register0x00000054 + -0x74) =
             *(undefined4 *)((int)register0x00000054 + -0x70);
        FUN_000d75b8();
        uVar1 = *(undefined4 *)((int)register0x00000054 + -0x70);
        uVar4 = *(undefined4 *)((int)register0x00000054 + -0x6c);
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x68);
      }
      else {
        uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + 0x18) + 0x34);
        *(undefined4 *)((int)register0x00000054 + -0x78) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + 0x18) + 0x30);
        *(undefined4 *)((int)register0x00000054 + -0x74) = uVar1;
        FUN_000d75b8();
        uVar1 = *(undefined4 *)((int)register0x00000054 + -0x70);
        uVar4 = *(undefined4 *)((int)register0x00000054 + -0x6c);
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x68);
      }
      *(undefined4 *)((int)register0x00000054 + -0x54) = uVar5;
      *(undefined4 *)((int)register0x00000054 + -0x40) = uVar4;
      *(undefined4 *)((int)register0x00000054 + -0x34) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x78) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x74) = uVar4;
      *(undefined4 *)((int)register0x00000054 + -0x70) = uVar5;
      *(undefined1 *)((int)register0x00000054 + -0x6c) = 1;
      FUN_000dd2a8();
      *(undefined4 *)((int)register0x00000054 + -0x78) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x74) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x70) =
           *(undefined4 *)((int)register0x00000054 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x6c) =
           *(undefined4 *)((int)register0x00000054 + -0x68);
      *(undefined4 *)((int)register0x00000054 + -0x68) =
           *(undefined4 *)((int)register0x00000054 + -100);
      FUN_0016a168();
      if (*(int *)((int)register0x00000054 + -100) != 0) {
        *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
        *(int *)((int)register0x00000054 + 0x24) = *(int *)((int)register0x00000054 + -100);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -0x60);
        return;
      }
      if (*(int *)((int)register0x00000054 + -0x44) == 0x16) {
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x54);
        uVar1 = *(undefined4 *)((int)register0x00000054 + -0x34);
        uVar4 = *(undefined4 *)((int)register0x00000054 + -0x40);
      }
      else {
        *(undefined4 *)((int)register0x00000054 + -0x78) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        *(undefined4 *)((int)register0x00000054 + -0x74) =
             *(undefined4 *)((int)register0x00000054 + -0x40);
        *(undefined4 *)((int)register0x00000054 + -0x70) =
             *(undefined4 *)((int)register0x00000054 + -0x54);
        FUN_000cfe58();
        uVar1 = *(undefined4 *)((int)register0x00000054 + -0x6c);
        uVar4 = *(undefined4 *)((int)register0x00000054 + -0x68);
        uVar5 = *(undefined4 *)((int)register0x00000054 + -100);
      }
      *(undefined4 *)((int)register0x00000054 + -0x30) = uVar4;
      *(undefined4 *)((int)register0x00000054 + -0x34) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x4c) = uVar5;
      pcVar3 = *(code **)(*(int *)(*(int *)((int)register0x00000054 + 0x18) + 0x38) + 0x2c);
      *(undefined4 *)((int)register0x00000054 + -0x78) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + 0x18) + 0x3c);
      (*pcVar3)();
      *(undefined4 *)((int)register0x00000054 + -0x78) =
           *(undefined4 *)((int)register0x00000054 + -0x74);
      *(undefined4 *)((int)register0x00000054 + -0x74) =
           *(undefined4 *)((int)register0x00000054 + -0x70);
      FUN_000d75b8();
      uVar1 = *(undefined4 *)((int)register0x00000054 + -0x70);
      *(undefined4 *)((int)register0x00000054 + -0x28) = uVar1;
      uVar4 = *(undefined4 *)((int)register0x00000054 + -0x6c);
      *(undefined4 *)((int)register0x00000054 + -0x2c) = uVar4;
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + -0x68);
      iVar6 = *(int *)((int)register0x00000054 + 0x18);
      uVar7 = *(undefined4 *)(iVar6 + 0x28);
      uVar8 = *(undefined4 *)(iVar6 + 0x20);
      FUN_00098a14(0,(undefined1 *)((int)register0x00000054 + -0x24),
                   *(undefined4 *)((int)register0x00000054 + -0x68),*(undefined4 *)(iVar6 + 0x24));
      iVar6 = *(int *)((int)register0x00000054 + 0x14);
      uVar5 = *(undefined4 *)(iVar6 + 8);
      uVar9 = *(undefined4 *)(iVar6 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = *(undefined4 *)(iVar6 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x24) = uVar5;
      *(undefined4 *)((int)register0x00000054 + -0x20) = uVar9;
      *(undefined4 *)((int)register0x00000054 + -0x10) =
           *(undefined4 *)((int)register0x00000054 + -0x4c);
      *(undefined4 *)((int)register0x00000054 + -0x18) =
           *(undefined4 *)((int)register0x00000054 + -0x34);
      *(undefined4 *)((int)register0x00000054 + -0x14) =
           *(undefined4 *)((int)register0x00000054 + -0x30);
      *(undefined4 *)((int)register0x00000054 + -4) = extraout_r2;
      *(undefined4 *)((int)register0x00000054 + -0xc) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -8) = uVar4;
      *(undefined4 *)((int)register0x00000054 + -0x78) = uVar8;
      *(undefined4 *)((int)register0x00000054 + -0x74) = extraout_r3;
      *(undefined4 *)((int)register0x00000054 + -0x70) = uVar7;
      *(undefined1 **)((int)register0x00000054 + -0x6c) =
           (undefined1 *)((int)register0x00000054 + -0x24);
      *(undefined4 *)((int)register0x00000054 + -0x68) = 3;
      *(undefined4 *)((int)register0x00000054 + -100) = 3;
      FUN_000cc878();
      uVar11 = *(int *)((int)register0x00000054 + -0x5c) == 0;
      if (!(bool)uVar11) {
        puVar2 = *(undefined4 **)((int)register0x00000054 + -0x60);
        *(undefined4 **)((int)register0x00000054 + -0x3c) = puVar2;
        uVar1 = puVar2[1];
        uVar4 = puVar2[2];
        *(undefined4 *)((int)register0x00000054 + -0x78) = *puVar2;
        *(undefined4 *)((int)register0x00000054 + -0x74) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -0x70) = uVar4;
        *(undefined1 *)((int)register0x00000054 + -0x6c) = 1;
        FUN_000dd2a8();
        if (*(int *)((int)register0x00000054 + -0x68) == 0) {
          uVar1 = 0;
          uVar4 = 0;
          goto LAB_0066c538;
        }
        puVar2 = *(undefined4 **)((int)register0x00000054 + -0x3c);
        uVar1 = puVar2[1];
        uVar4 = puVar2[2];
        *(undefined4 *)((int)register0x00000054 + -0x78) = *puVar2;
        *(undefined4 *)((int)register0x00000054 + -0x74) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -0x70) = uVar4;
        *(undefined1 *)((int)register0x00000054 + -0x6c) = 1;
        FUN_000dd2a8();
        uVar11 = *(int *)((int)register0x00000054 + -0x68) == 0;
        if (!(bool)uVar11) {
          *(undefined4 *)((int)register0x00000054 + -0x38) =
               *(undefined4 *)((int)register0x00000054 + -100);
          *(undefined4 *)((int)register0x00000054 + -0x78) = DAT_0066c5d4;
          *(int *)((int)register0x00000054 + -0x74) = *(int *)((int)register0x00000054 + -0x68);
          FUN_0001cf8c();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -0x70);
          uVar4 = *(undefined4 *)((int)register0x00000054 + -0x38);
LAB_0066c538:
          *(undefined4 *)((int)register0x00000054 + -0x50) = uVar1;
          *(undefined4 *)((int)register0x00000054 + -0x38) = uVar4;
          *(undefined4 *)((int)register0x00000054 + -0x78) =
               *(undefined4 *)((int)register0x00000054 + -0x28);
          *(undefined4 *)((int)register0x00000054 + -0x74) =
               *(undefined4 *)((int)register0x00000054 + -0x2c);
          *(undefined4 *)((int)register0x00000054 + -0x70) =
               *(undefined4 *)((int)register0x00000054 + -0x48);
          *(undefined1 *)((int)register0x00000054 + -0x6c) = 1;
          FUN_000dd2a8();
          *(undefined4 *)((int)register0x00000054 + 0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x68);
          *(undefined4 *)((int)register0x00000054 + 0x20) =
               *(undefined4 *)((int)register0x00000054 + -100);
          *(undefined4 *)((int)register0x00000054 + 0x24) =
               *(undefined4 *)((int)register0x00000054 + -0x50);
          *(undefined4 *)((int)register0x00000054 + 0x28) =
               *(undefined4 *)((int)register0x00000054 + -0x38);
          return;
        }
        *(undefined4 *)((int)register0x00000054 + -0x78) = DAT_0066c5d8;
        FUN_0001ccf8();
      }
      param_1 = FUN_000986f8(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x7c);
      if ((bool)uVar11) {
        register0x00000054 = (BADSPACEBASE *)puVar10;
      }
    }
    unaff_lr = 0x66c5cc;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/server.(*SocketServerRpc).closeListener @ 0066c5dc (size 204) */

void printerApi_server___SocketServerRpc__closeListener(void)

{
  int iVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined8 uVar2;
  int in_stack_00000004;
  undefined4 local_c;
  int local_8;
  undefined4 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  local_4 = (undefined4 *)0x0;
  iVar1 = in_stack_00000004 + 0xc;
  FUN_000b3994();
  local_c = DAT_0066c6b4;
  local_4 = &local_c;
  local_8 = iVar1;
  if (*(int *)(in_stack_00000004 + 4) != 0) {
    (**(code **)(*(int *)(in_stack_00000004 + 4) + 0x14))();
    *(undefined4 *)(in_stack_00000004 + 4) = 0;
    iVar1 = in_stack_00000004;
    if (*DAT_0066c6b8 != 0) {
      uVar2 = FUN_00098678(*(undefined4 *)(in_stack_00000004 + 8));
      iVar1 = (int)((ulonglong)uVar2 >> 0x20);
      *unaff_r8 = (int)uVar2;
    }
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  (*(code *)*local_4)();
  return;
}



/* printerApi/server.(*SocketServerRpc).closeListener.deferwrap1 @ 0066c6bc (size 84) */

void printerApi_server___SocketServerRpc__closeListener_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&local_4;
  }
  local_4 = *(undefined4 *)(unaff_r7 + 4);
  FUN_000b3de4();
  return;
}



/* printerApi/server.(*SocketServerRpc).Close @ 0066c710 (size 128) */

void printerApi_server___SocketServerRpc__Close(void)

{
  int iVar1;
  int unaff_r10;
  int in_stack_00000004;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  printerApi_server___SocketServerRpc__closeListener();
  iVar1 = *(int *)(*(int *)(in_stack_00000004 + 0x14) + 0xc);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 0xc))();
  }
  for (iVar1 = 0; iVar1 < 0x28; iVar1 = iVar1 + 1) {
    FUN_000953d0();
  }
  return;
}



/* printerApi/server.(*SocketServerRpc).connectK3c @ 0066c798 (size 248) */

void printerApi_server___SocketServerRpc__connectK3c(void)

{
  char *pcVar1;
  int unaff_r10;
  undefined4 in_stack_00000004;
  int local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  while ((((*(int *)(*DAT_0066c89c + 0x14) == 3 &&
           (pcVar1 = *(char **)(*DAT_0066c89c + 0x10), *pcVar1 == 'r')) && (pcVar1[1] == 'u')) &&
         ((pcVar1[2] == 'n' && (printerApi_service_k3c___K3c__Connect(), local_10 != 0))))) {
    local_10 = 1;
    printerApi_common_logger_Errorf();
    FUN_000953d0();
  }
  return;
}



/* printerApi/server.(*SocketServerRpc).Register @ 0066c8a0 (size 1316) */

/* WARNING: Removing unreachable block (ram,0x0066cab4) */

void printerApi_server___SocketServerRpc__Register(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int *extraout_r1;
  int *piVar4;
  undefined4 *extraout_r3;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined8 uVar8;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 *puVar9;
  undefined4 *local_c4;
  int *local_c0;
  undefined4 *local_bc;
  undefined4 *local_b8;
  undefined4 *local_b4;
  char local_b0;
  undefined4 *local_90;
  undefined4 *local_8c;
  undefined4 *local_88;
  int *local_84;
  int local_80;
  undefined4 *local_7c;
  undefined4 *local_78;
  uint local_74;
  uint *local_70;
  int local_6c;
  undefined4 *local_68;
  int local_64;
  undefined4 local_60;
  undefined *local_5c;
  undefined *local_58;
  undefined *local_54;
  undefined4 *local_50;
  undefined *local_4c;
  undefined *local_48;
  uint local_44;
  undefined4 *local_40;
  undefined *local_10;
  undefined *local_c;
  undefined4 *local_8;
  undefined4 *local_4;
  
  while (&local_50 <= *(undefined4 ***)(unaff_r10 + 8)) {
    unaff_lr = 0x66cdc0;
    FUN_00096bb8();
  }
  if (in_stack_00000008 == 0) {
    local_10 = PTR_SUB_0066cdc8;
    local_c = PTR_DAT_0066cdcc;
    puVar9 = (undefined4 *)0x1;
    local_c4 = (undefined4 *)0x1;
    printerApi_common_logger_Debug();
    FUN_0001eed8();
    puVar9[1] = 0x14;
    *puVar9 = PTR_DAT_0066cdd4;
    return;
  }
  local_64 = in_stack_00000008;
  local_60 = in_stack_0000000c;
  if (in_stack_00000008 == 0) {
    local_c4 = (undefined4 *)0x0;
  }
  else {
    local_c4 = (undefined4 *)(*(byte *)(in_stack_00000008 + 0xf) & 0x1f);
    if ((*(byte *)(in_stack_00000008 + 0xf) & 0x20) == 0) {
      local_c4 = (undefined4 *)((uint)local_c4 | 0x80);
    }
  }
  FUN_000cfe58();
  if (((uint)local_b8 & 0x1f) == 0x16) {
    local_c4 = local_b8;
    FUN_000cfe58();
  }
  local_90 = local_b8;
  local_68 = local_bc;
  local_6c = (int)local_c0;
  local_c4 = local_b8;
  FUN_000d37e8();
  local_80 = (int)local_c0;
  local_c0 = (int *)0x0;
  do {
    if (local_80 <= (int)local_c0) {
      return;
    }
    local_c4 = local_90;
    local_84 = local_c0;
    FUN_000d0048();
    local_4 = local_bc;
    local_7c = local_b4;
    local_8 = local_b8;
    if ((local_90 == (undefined4 *)0x0) ||
       (piVar4 = (int *)PTR_DAT_0066cddc, ((uint)local_90 & 0x200) != 0)) {
      local_c4 = local_90;
      FUN_000d5fcc();
      piVar4 = local_c0;
    }
    uVar1 = (*(code *)piVar4[0xc])();
    FUN_00098dd4(uVar1,&local_c4,&local_44);
    local_74 = local_44;
    local_88 = local_40;
    puVar9 = local_40;
    FUN_00646ab4();
    if ((char)local_c4 != '\0') {
      puVar2 = local_7c;
      if (((uint)local_7c & 0x1f) == 0x16) {
        local_c4 = local_7c;
        puVar9 = local_8;
        FUN_000cfe58();
        puVar2 = local_b8;
      }
      if (((uint)puVar2 & 0x1f) == 0x19) {
        puVar2 = (undefined4 *)PTR_DAT_0066cde0;
        FUN_0001eed8(PTR_DAT_0066cde0,local_7c);
        uVar8 = CONCAT44(local_88,puVar9);
        puVar9[1] = local_88;
        if (*(int *)PTR_DAT_0066cde4 != 0) {
          uVar8 = FUN_00098678();
          *unaff_r8 = local_74;
        }
        local_70 = (uint *)uVar8;
        *local_70 = local_74;
        if ((local_7c == (undefined4 *)0x0) ||
           (piVar4 = (int *)PTR_DAT_0066cddc, puVar7 = local_4, ((uint)local_7c & 0x200) != 0)) {
          local_c4 = local_7c;
          puVar2 = local_4;
          puVar9 = local_8;
          FUN_000d5fcc();
          uVar8 = CONCAT44(local_88,local_70);
          piVar4 = local_c0;
          puVar7 = local_bc;
        }
        local_70 = (uint *)uVar8;
        local_70[5] = (uint)piVar4;
        puVar3 = local_70;
        puVar5 = local_7c;
        if (*(int *)PTR_DAT_0066cde4 != 0) {
          puVar3 = (uint *)FUN_000986c8(local_70,(int)((ulonglong)uVar8 >> 0x20),local_74,local_7c,
                                        unaff_lr,puVar2,puVar9);
          *unaff_r8 = (uint)puVar7;
          unaff_r8[1] = puVar3[6];
          unaff_r8[2] = (uint)local_4;
          unaff_r8[3] = puVar3[2];
          unaff_r8[4] = (uint)local_8;
          unaff_r8[5] = puVar3[3];
          puVar5 = extraout_r3;
        }
        puVar3[6] = (uint)puVar7;
        puVar3[4] = (uint)puVar5;
        puVar3[2] = (uint)local_4;
        puVar3[3] = (uint)local_8;
        local_c4 = (undefined4 *)((uint)local_c4 & 0xffffff00);
        printerApi_server_suitableMethods();
        piVar4 = local_c0;
        if (*(int *)PTR_DAT_0066cde4 != 0) {
          FUN_00098688();
          *unaff_r8 = (uint)extraout_r1;
          unaff_r8[1] = local_70[7];
          piVar4 = extraout_r1;
        }
        local_70[7] = (uint)piVar4;
        if (piVar4 == (int *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *piVar4;
        }
        if (iVar6 == 0) {
          FUN_00098a20(0,&local_5c);
          local_5c = PTR_SUB_0066cdc8;
          local_58 = PTR_DAT_0066cde8;
          FUN_0008a578();
          local_54 = PTR_SUB_0066cdc8;
          local_50 = local_c4;
          local_4c = PTR_SUB_0066cdc8;
          local_48 = PTR_DAT_0066cdec;
          local_c4 = (undefined4 *)0x3;
          printerApi_common_logger_Debug();
        }
        else {
          FUN_0008a578();
          local_c0 = (int *)PTR_DAT_0066cdf0;
          local_bc = local_70;
          FUN_000b277c();
          if (local_b0 != '\0') {
            local_c0 = (int *)*local_70;
            local_bc = (undefined4 *)local_70[1];
            local_c4 = (undefined4 *)0x1e;
            puVar3 = (uint *)PTR_DAT_0066cdf4;
            FUN_000715a4();
            local_8c = local_b4;
            local_78 = local_b8;
            FUN_0001eed8();
            puVar3[1] = (uint)local_8c;
            if (*(int *)PTR_DAT_0066cde4 != 0) {
              puVar3 = (uint *)FUN_00098678();
              *unaff_r8 = (uint)local_78;
            }
            *puVar3 = (uint)local_78;
            return;
          }
        }
      }
    }
    local_c0 = (int *)((int)local_84 + 1);
  } while( true );
}



/* printerApi/server.suitableMethods @ 0066cdf8 (size 1728) */

/* WARNING: Removing unreachable block (ram,0x0066d12c) */
/* WARNING: Removing unreachable block (ram,0x0066d1e0) */
/* WARNING: Removing unreachable block (ram,0x0066d2a4) */
/* WARNING: Removing unreachable block (ram,0x0066d2e0) */
/* WARNING: Removing unreachable block (ram,0x0066d3a0) */
/* WARNING: Removing unreachable block (ram,0x0066d3c8) */
/* WARNING: Removing unreachable block (ram,0x0066d410) */
/* WARNING: Removing unreachable block (ram,0x0066d480) */
/* WARNING: Removing unreachable block (ram,0x0066d478) */
/* WARNING: Removing unreachable block (ram,0x0066d494) */
/* WARNING: Removing unreachable block (ram,0x0066d304) */
/* WARNING: Removing unreachable block (ram,0x0066d30c) */
/* WARNING: Removing unreachable block (ram,0x0066d318) */
/* WARNING: Removing unreachable block (ram,0x0066d35c) */
/* WARNING: Removing unreachable block (ram,0x0066d354) */
/* WARNING: Removing unreachable block (ram,0x0066d360) */
/* WARNING: Removing unreachable block (ram,0x0066d398) */
/* WARNING: Removing unreachable block (ram,0x0066d200) */
/* WARNING: Removing unreachable block (ram,0x0066d20c) */
/* WARNING: Removing unreachable block (ram,0x0066d14c) */
/* WARNING: Removing unreachable block (ram,0x0066d158) */
/* WARNING: Removing unreachable block (ram,0x0066d19c) */
/* WARNING: Removing unreachable block (ram,0x0066d194) */
/* WARNING: Removing unreachable block (ram,0x0066d1a0) */
/* WARNING: Removing unreachable block (ram,0x0066d1d8) */

void printerApi_server_suitableMethods(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int extraout_r3;
  int unaff_r10;
  undefined4 unaff_lr;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  char in_stack_0000000c;
  undefined4 uVar4;
  int local_c8;
  undefined **local_c4;
  int local_c0;
  undefined4 local_bc;
  undefined **local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined **local_88;
  int local_84;
  int local_7c;
  undefined4 local_74;
  undefined4 local_70;
  int local_64;
  undefined4 local_60;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [12];
  int local_40;
  int local_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined *local_10;
  undefined **local_c;
  undefined *local_8;
  int local_4;
  
  while (auStack_50 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x66d4b4;
    FUN_00096bb8();
  }
  FUN_0008b6b8();
  local_8c = 0;
  while ((**(code **)(in_stack_00000004 + 0x70))(), iVar1 = local_8c, local_8c < local_c8) {
    local_c8 = local_8c;
    uVar4 = in_stack_00000008;
    uVar3 = (**(code **)(in_stack_00000004 + 0x5c))();
    FUN_00098dec(uVar3,&local_c4,&local_74);
    uVar2 = local_60;
    uVar3 = local_74;
    local_94 = local_64;
    FUN_00098dec(local_64,&local_74,auStack_4c,local_70,unaff_lr,uVar4);
    if (local_40 == 0) {
      local_14 = uVar3;
      local_18 = uVar2;
      local_90 = extraout_r3;
      (**(code **)(local_94 + 0x6c))();
      if (iVar1 == 3) {
        (**(code **)(local_94 + 0x48))();
        local_88 = local_c4;
        local_24 = local_c0;
        local_c8 = local_c0;
        printerApi_server_isExportedOrBuiltinType();
        if ((char)local_c4 == '\0') {
          if (in_stack_0000000c != '\0') {
            FUN_00098a28(0,&local_10);
            FUN_0008a578();
            local_10 = PTR_SUB_0066d4bc;
            local_c = local_c4;
            if (local_88 == (undefined **)0x0) {
              local_8 = (undefined *)0x0;
            }
            else {
              local_8 = local_88[1];
            }
            local_4 = local_24;
            local_c8 = 0x3d;
            local_c4 = &local_10;
            local_c0 = 2;
            local_bc = 2;
            printerApi_common_logger_Errorf();
          }
        }
        else {
          local_c8 = 2;
          (**(code **)(local_94 + 0x48))();
          local_98 = local_c4;
          local_7c = local_c0;
          (*(code *)local_c4[0x15])();
          if (in_stack_0000000c != '\0') {
            FUN_00098a28(0,&local_10);
            FUN_0008a578();
            local_10 = PTR_SUB_0066d4bc;
            local_c = local_c4;
            if (local_98 == (undefined **)0x0) {
              local_8 = (undefined *)0x0;
            }
            else {
              local_8 = local_98[1];
            }
            local_4 = local_7c;
            local_c8 = 0x3b;
            local_c4 = &local_10;
            local_c0 = 2;
            local_bc = 2;
            printerApi_common_logger_Errorf();
          }
        }
      }
      else if (in_stack_0000000c != '\0') {
        (**(code **)(local_94 + 0x6c))();
        local_84 = iVar1;
        FUN_00098a28(0,&local_10);
        FUN_0008a578();
        local_10 = PTR_SUB_0066d4bc;
        local_c = local_c4;
        FUN_0001cec0();
        local_8 = PTR_DAT_0066d4c0;
        local_4 = local_90;
        local_c8 = 0x45;
        local_c4 = &local_10;
        local_c0 = 2;
        local_bc = 2;
        printerApi_common_logger_Errorf();
      }
    }
    local_8c = local_8c + 1;
  }
  return;
}



/* printerApi/server.isExportedOrBuiltinType @ 0066d4f4 (size 204) */

void printerApi_server_isExportedOrBuiltinType(void)

{
  int iVar1;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined1 in_stack_0000000c;
  int local_10;
  char local_c;
  
  while (iVar1 = in_stack_00000004, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  while ((**(code **)(iVar1 + 0x54))(), local_10 == 0x16) {
    (**(code **)(iVar1 + 0x2c))();
    iVar1 = 0x16;
  }
  (**(code **)(iVar1 + 100))();
  FUN_00646ab4();
  if (local_c == '\0') {
    (**(code **)(iVar1 + 0x8c))();
  }
  return;
}



/* printerApi/server.(*methodType).Lock @ 0066d5c0 (size 88) */

void printerApi_server___methodType__Lock(void)

{
  int *piVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x66d5f8;
    FUN_00096bb8();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_4;
  }
  uStack_4 = in_stack_00000004;
  FUN_000b3994();
                    /* WARNING: Could not recover jumptable at 0x0066d5ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/server.(*methodType).TryLock @ 0066d618 (size 96) */

void printerApi_server___methodType__TryLock(void)

{
  int *piVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined1 in_stack_00000008;
  undefined4 uStack_8;
  undefined1 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x66d658;
    FUN_00096bb8();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_8;
  }
  uStack_8 = in_stack_00000004;
  FUN_000b39f0();
  in_stack_00000008 = uStack_4;
                    /* WARNING: Could not recover jumptable at 0x0066d64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/server.(*methodType).Unlock @ 0066d678 (size 88) */

void printerApi_server___methodType__Unlock(void)

{
  int *piVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x66d6b0;
    FUN_00096bb8();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_4;
  }
  uStack_4 = in_stack_00000004;
  FUN_000b3de4();
                    /* WARNING: Could not recover jumptable at 0x0066d6a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



