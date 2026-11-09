// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/service/k3c   functions: 58
/* printerApi/service/k3c.(*ID).Generate @ 004172d8 (size 524) */

void printerApi_service_k3c___ID__Generate(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 *local_50;
  int local_3c;
  undefined4 *local_38;
  undefined4 local_c;
  undefined4 *local_8;
  undefined4 *local_4;
  
  while (puVar1 = in_stack_00000004, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x4174e8;
    FUN_00096bb8();
  }
  local_4 = (undefined4 *)0x0;
  in_stack_00000010 = 0;
  in_stack_00000014 = 0;
  FUN_000b3994();
  local_c = DAT_004174f0;
  local_8 = in_stack_00000004;
  local_4 = &local_c;
  if ((int *)in_stack_00000004[5] == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)in_stack_00000004[5];
  }
  if (500 < in_stack_00000004[4] - iVar3) {
    FUN_0008b6b8();
    FUN_00098a08(0,&local_3c,puVar1,in_stack_00000004[5],unaff_lr);
    FUN_0008c560();
    while (local_3c != 0) {
      uVar5 = *local_38;
      uVar2 = local_38[1];
      FUN_0008df7c();
      *local_50 = uVar5;
      local_50[1] = uVar2;
      FUN_0008c7c4();
    }
    if (*DAT_004174f8 != 0) {
      FUN_00098688();
      *unaff_r8 = puVar1;
      unaff_r8[1] = in_stack_00000004[5];
    }
    in_stack_00000004[5] = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *puVar1;
    }
    in_stack_00000004[4] = uVar2;
  }
  uVar4 = in_stack_00000004[2];
  in_stack_00000004[2] = uVar4 + 1;
  in_stack_00000004[3] = in_stack_00000004[3] + (uint)(0xfffffffe < uVar4);
  FUN_0008df7c();
  *local_50 = in_stack_00000008;
  local_50[1] = in_stack_0000000c;
  in_stack_00000004[4] = in_stack_00000004[4] + 1;
  in_stack_00000010 = in_stack_00000004[2];
  in_stack_00000014 = in_stack_00000004[3];
  (*(code *)*local_4)();
  return;
}



/* printerApi/service/k3c.(*ID).Generate.deferwrap1 @ 004174fc (size 84) */

void printerApi_service_k3c___ID__Generate_deferwrap1(void)

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



/* printerApi/service/k3c.(*ID).Find @ 00417550 (size 248) */

void printerApi_service_k3c___ID__Find(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined1 in_stack_00000018;
  undefined4 *local_18;
  char local_14;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  local_4 = (undefined4 *)0x0;
  in_stack_00000010 = 0;
  in_stack_00000014 = 0;
  in_stack_00000018 = 0;
  FUN_000b3994();
  local_c = DAT_00417654;
  local_8 = in_stack_00000004;
  local_4 = &local_c;
  FUN_0008ddb0();
  in_stack_00000010 = *local_18;
  in_stack_00000014 = local_18[1];
  if (local_14 != '\0') {
    FUN_0002149c();
  }
  (*(code *)*local_4)();
  return;
}



/* printerApi/service/k3c.(*ID).Find.deferwrap1 @ 0041765c (size 84) */

void printerApi_service_k3c___ID__Find_deferwrap1(void)

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



/* printerApi/service/k3c.newSubscriberWorker @ 004176b0 (size 340) */

void printerApi_service_k3c_newSubscriberWorker(void)

{
  int iVar1;
  int iVar2;
  int *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined1 in_stack_00000018;
  int in_stack_0000001c;
  undefined4 in_stack_00000020;
  int local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_00017058();
  FUN_00017058();
  FUN_0001eed8();
  iVar1 = 0;
  puRam00000000 = (undefined *)in_stack_00000004;
  if (*(int *)PTR_DAT_00417814 != 0) {
    iVar1 = FUN_00098698();
    *unaff_r8 = in_stack_00000008;
    unaff_r8[1] = local_10;
    unaff_r8[2] = local_10;
  }
  *(int *)(iVar1 + 4) = in_stack_00000008;
  *(int *)(iVar1 + 8) = local_10;
  *(int *)(iVar1 + 0xc) = local_10;
  *(undefined4 *)(iVar1 + 0x20) = in_stack_00000010;
  *(undefined4 *)(iVar1 + 0x24) = in_stack_00000014;
  *(undefined4 *)(iVar1 + 0x28) = in_stack_0000000c;
  *(undefined1 *)(iVar1 + 0x2c) = in_stack_00000018;
  if (*(int *)PTR_DAT_00417814 != 0) {
    iVar1 = FUN_00098678();
    *unaff_r8 = in_stack_0000001c;
  }
  *(int *)(iVar1 + 0x1c) = in_stack_0000001c;
  FUN_0001eed8();
  iVar2 = 0;
  puRam00000000 = PTR_printerApi_service_k3c_newSubscriberWorker_gowrap1_0041781c;
  if (*(int *)PTR_DAT_00417814 != 0) {
    iVar2 = FUN_00098678();
    *unaff_r8 = iVar1;
  }
  *(int *)(iVar2 + 4) = iVar1;
  FUN_0005e168();
  return;
}



/* printerApi/service/k3c.newSubscriberWorker.gowrap1 @ 00417820 (size 84) */

void printerApi_service_k3c_newSubscriberWorker_gowrap1(void)

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
  printerApi_service_k3c___subscriberWorker__run();
  return;
}



/* printerApi/service/k3c.(*subscriberWorker).run @ 00417874 (size 616) */

/* WARNING: Removing unreachable block (ram,0x0041793c) */
/* WARNING: Removing unreachable block (ram,0x004179b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c___subscriberWorker__run(void)

{
  int iVar1;
  int unaff_r10;
  undefined4 unaff_lr;
  int *in_stack_00000004;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_50;
  int local_4c;
  char local_48;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 *local_24;
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x417ad8;
    FUN_00096bb8();
  }
  while( true ) {
    iVar1 = in_stack_00000004[2];
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    FUN_00098a28(0,&local_28,in_stack_00000004,in_stack_00000004[3],unaff_lr);
    local_24 = &local_34;
    local_50 = CONCAT31(local_50._1_3_,1);
    local_28 = iVar1;
    FUN_00067f3c();
    if (local_4c != 0) {
      return;
    }
    if (local_48 == '\0') break;
    uVar3 = local_34;
    uVar4 = local_30;
    uVar6 = local_2c;
    printerApi_service_k3c___subscriberWorker__send();
    iVar1 = in_stack_00000004[1];
    (**(code **)(*in_stack_00000004 + 0x10))();
    FUN_00098a28(0,&local_10,uVar4,uVar3,unaff_lr,iVar1,uVar3,uVar4,uVar6);
    FUN_0008a578();
    local_10 = DAT_00417ae0;
    local_8 = _DAT_00000006;
    local_4 = local_50;
    cVar2 = ' ';
    puVar5 = &local_10;
    local_c = uVar4;
    printerApi_common_logger_Errorf();
    (**(code **)(*in_stack_00000004 + 0xc))();
    if (cVar2 == '\0') {
      (**(code **)(*in_stack_00000004 + 0x10))();
      local_18 = 0;
      local_14 = (undefined4 *)0x0;
      FUN_0008a578();
      local_18 = DAT_00417ae0;
      local_14 = puVar5;
      printerApi_common_logger_Warnf();
    }
    else if ((undefined4 *)in_stack_00000004[7] != (undefined4 *)0x0) {
      (**(code **)in_stack_00000004[7])();
    }
  }
  return;
}



/* printerApi/service/k3c.(*subscriberWorker).send @ 00417aec (size 680) */

void printerApi_service_k3c___subscriberWorker__send(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_r10;
  undefined4 unaff_lr;
  int *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  uint local_60;
  int local_5c;
  undefined4 *local_58;
  uint local_54;
  int local_50;
  uint local_4c;
  int local_48;
  uint local_44;
  int local_40;
  undefined1 auStack_3c [20];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x417d90;
    FUN_00096bb8();
  }
  if ((char)in_stack_00000004[0xb] != '\0') {
    local_60 = in_stack_00000004[1];
    (**(code **)(*in_stack_00000004 + 0x10))();
    FUN_00098a28(0,&local_10,local_58,local_5c);
    FUN_0008a578();
    local_10 = DAT_00417d98;
    local_c = local_58;
    local_60 = 0;
    local_5c = in_stack_00000008;
    local_58 = (undefined4 *)in_stack_0000000c;
    FUN_00093e34();
    local_60 = local_54;
    local_5c = local_50;
    FUN_0008a578();
    local_8 = DAT_00417d98;
    local_4 = local_58;
    local_60 = DAT_00417d9c;
    local_5c = 0x1d;
    local_58 = &local_10;
    local_54 = 2;
    local_50 = 2;
    printerApi_common_logger_Debugf();
  }
  uVar1 = FUN_0010cf30();
  FUN_00098e14(uVar1,&local_60,auStack_3c);
  local_60 = in_stack_00000004[1];
  local_5c = in_stack_00000008;
  local_58 = (undefined4 *)in_stack_0000000c;
  local_54 = in_stack_00000010;
  (**(code **)(*in_stack_00000004 + 0x14))();
  if (local_50 == 0) {
    iVar2 = in_stack_00000004[9];
    if (0 < iVar2 || in_stack_00000004[8] != 0 && iVar2 == 0) {
      FUN_00098e14(in_stack_00000004,auStack_3c,&local_60,
                   0 < iVar2 || in_stack_00000004[8] != 0 && iVar2 == 0,unaff_lr);
      FUN_0010327c();
      if (in_stack_00000004[9] < local_48 ||
          (uint)in_stack_00000004[8] < local_4c && in_stack_00000004[9] == local_48) {
        local_40 = local_48;
        local_44 = local_4c;
        local_60 = in_stack_00000004[1];
        (**(code **)(*in_stack_00000004 + 0x10))();
        FUN_00098a20(0,&local_28,local_58,local_5c);
        FUN_0008a578();
        local_28 = DAT_00417d98;
        local_24 = local_58;
        local_60 = local_44;
        local_5c = local_40;
        FUN_0008a4bc();
        local_20 = DAT_00417da0;
        local_1c = local_58;
        local_60 = in_stack_00000004[8];
        local_5c = in_stack_00000004[9];
        FUN_0008a4bc();
        local_18 = DAT_00417da0;
        local_14 = local_58;
        local_60 = DAT_00417da4;
        local_5c = 0x24;
        local_58 = &local_28;
        local_54 = 3;
        local_50 = 3;
        printerApi_common_logger_Warnf();
      }
    }
    return;
  }
  return;
}



/* printerApi/service/k3c.(*subscriberWorker).publish @ 00417da8 (size 456) */

/* WARNING: Removing unreachable block (ram,0x00417ec0) */
/* WARNING: Removing unreachable block (ram,0x00417ee8) */
/* WARNING: Removing unreachable block (ram,0x00417f58) */
/* WARNING: Removing unreachable block (ram,0x00417f5c) */

void printerApi_service_k3c___subscriberWorker__publish(void)

{
  int unaff_r10;
  int *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  char local_20;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_00018ad8();
  if (local_20 == '\0') {
    FUN_00018a8c();
    FUN_00018ad8();
    if ((char)in_stack_00000004[0xb] != '\0') {
      (**(code **)(*in_stack_00000004 + 0x10))();
      FUN_0008a578();
      printerApi_common_logger_Warnf();
    }
    return;
  }
  return;
}



/* printerApi/service/k3c.NewK3C @ 00417f80 (size 516) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_NewK3C(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int extraout_r1;
  int iVar5;
  int iVar6;
  int extraout_r1_00;
  int extraout_r1_01;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar7;
  int in_stack_00000004;
  int iStack_2c;
  int iStack_28;
  char cStack_24;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x418180;
    FUN_00096bb8();
  }
  FUN_00017058();
  puVar1 = PTR_DAT_0041818c;
  FUN_0008b708();
  FUN_0008b6b8();
  FUN_0008b6b8();
  FUN_0001eed8();
  iVar4 = 0x10;
  if (*(int *)PTR_DAT_00418194 != 0) {
    FUN_00098678();
    *unaff_r8 = (int)puVar1;
    iVar4 = extraout_r1;
  }
  *(undefined **)(iVar4 + 0x14) = puVar1;
  FUN_00017058();
  FUN_001228a0();
  if (cStack_24 == '\0') {
    iVar5 = 3;
    pcVar3 = PTR_DAT_004181a0;
  }
  else {
    pcVar3 = (char *)0x0;
    iVar5 = iStack_28;
  }
  FUN_0001eed8();
  iVar6 = 0x11;
  if (*(int *)PTR_DAT_00418194 != 0) {
    FUN_00098698();
    *unaff_r8 = iStack_2c;
    unaff_r8[1] = iStack_28;
    unaff_r8[2] = (int)puVar1;
    iVar6 = extraout_r1_00;
  }
  *(int *)(iVar6 + 0x1c) = iStack_2c;
  *(int *)(iVar6 + 0x28) = iStack_28;
  *(undefined **)(iVar6 + 0x54) = puVar1;
  *(undefined4 *)(iVar6 + 0x58) = 100;
  *(undefined4 *)(iVar6 + 0x5c) = _UNK_004181a8;
  *(undefined4 *)(iVar6 + 0x60) = 0;
  uVar2 = _UNK_004181ac;
  *(undefined4 *)(iVar6 + 0x2c) = _UNK_004181ac;
  *(undefined4 *)(iVar6 + 0x30) = 0;
  *(undefined4 *)(iVar6 + 0x34) = uVar2;
  *(undefined4 *)(iVar6 + 0x38) = 0;
  if (*(int *)PTR_DAT_00418194 != 0) {
    FUN_00098688();
    *unaff_r8 = iVar4;
    unaff_r8[1] = 0;
    iVar6 = extraout_r1_01;
  }
  *(int *)(iVar6 + 100) = iVar4;
  *(undefined4 *)(iVar6 + 0x78) = 0;
  if ((iVar5 == 2) && (*pcVar3 == 'o')) {
    bVar7 = pcVar3[1] == 'n';
  }
  else {
    bVar7 = false;
  }
  *(bool *)(iVar6 + 0xa4) = bVar7;
  in_stack_00000004 = iVar6;
                    /* WARNING: Could not recover jumptable at 0x00418174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/k3c.(*K3c).Connect @ 004181b0 (size 1028) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c___K3c__Connect(void)

{
  undefined *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int extraout_r1;
  int extraout_r1_00;
  int iVar4;
  int extraout_r2;
  int iVar5;
  int extraout_r2_00;
  int *unaff_r8;
  int unaff_r10;
  undefined8 uVar6;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  int local_5c;
  undefined1 *local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined *local_20;
  undefined4 local_8;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  printerApi_service_k3c___K3c__dial();
  if (local_4c != 0) {
    return;
  }
  local_5c = 0;
  local_58 = (undefined1 *)0x1;
  internal_runtime_atomic_Cas();
  if ((char)local_54 == '\0') {
    FUN_0001eed8();
    _DAT_00000004 = 0x19;
    _DAT_00000006 = 0;
    uRam00000000 = SUB42(PTR_DAT_004185e8,0);
    uRam00000002 = (undefined2)((uint)PTR_DAT_004185e8 >> 0x10);
    return;
  }
  *(int *)(in_stack_00000004 + 0xc) = local_54;
  iVar5 = local_54;
  iVar4 = in_stack_00000004;
  if (*(int *)PTR_DAT_004185b8 != 0) {
    uVar6 = FUN_00098688();
    iVar4 = (int)((ulonglong)uVar6 >> 0x20);
    *unaff_r8 = local_50;
    unaff_r8[1] = *(int *)(iVar4 + 0x10);
    iVar5 = (int)uVar6;
  }
  *(int *)(iVar4 + 0x10) = local_50;
  if (iVar5 != 0) {
    local_5c = *(int *)(iVar5 + 4);
    FUN_0001cf8c();
    iVar4 = in_stack_00000004;
  }
  puVar1 = (undefined *)(uint)(iVar5 != 0);
  if ((puVar1 != PTR_DAT_004185c0) || (*(int *)(local_50 + 4) < 0x1000)) {
    FUN_0001eed8();
    local_58 = &SUB_00001000;
    FUN_000933e8();
    FUN_00098a0c(0,local_2c,local_54);
    local_28 = 0x1000;
    local_24 = 0x1000;
    local_8 = 0xffffffff;
    local_4 = 0xffffffff;
    local_20 = puVar1;
    if (*(int *)PTR_DAT_004185b8 != 0) {
      local_58 = local_2c;
      FUN_00022914();
    }
    FUN_00098de4(0x1000,local_2c,local_5c);
    iVar4 = in_stack_00000004;
    local_50 = local_5c;
  }
  if (*(int *)PTR_DAT_004185b8 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r2;
    unaff_r8[1] = *(int *)(extraout_r1 + 0x14);
    iVar4 = extraout_r1;
    local_50 = extraout_r2;
  }
  *(int *)(iVar4 + 0x14) = local_50;
  iVar5 = *(int *)(iVar4 + 0x10);
  puVar2 = (undefined1 *)0x0;
  if (*(int *)(iVar4 + 0xc) != 0) {
    FUN_0001cf8c();
    puVar2 = local_58;
    iVar4 = in_stack_00000004;
  }
  if ((puVar2 != PTR_DAT_004185d0) || (iVar3 = iVar5, *(int *)(iVar5 + 0xc) < 0x1000)) {
    FUN_000933e8();
    FUN_0001eed8();
    iVar3 = 0x1000;
    _DAT_0000100c = 0x1000;
    _DAT_00001010 = 0x1000;
    if (*(int *)PTR_DAT_004185b8 != 0) {
      iVar3 = FUN_00098688();
      *unaff_r8 = local_54;
      unaff_r8[1] = iVar5;
    }
    *(int *)(iVar3 + 8) = local_54;
    *(undefined1 **)(iVar3 + 0x18) = puVar2;
    *(int *)(iVar3 + 0x1c) = iVar5;
    iVar4 = in_stack_00000004;
  }
  if (*(int *)PTR_DAT_004185b8 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r2_00;
    unaff_r8[1] = *(int *)(extraout_r1_00 + 0x18);
    iVar4 = extraout_r1_00;
    iVar3 = extraout_r2_00;
  }
  *(int *)(iVar4 + 0x18) = iVar3;
  FUN_000b5490();
  FUN_0001eed8();
  iVar5 = 2;
  uRam00000002 = SUB42(PTR_printerApi_service_k3c___K3c__Connect_gowrap1_004185dc,0);
  _DAT_00000004 =
       (undefined2)((uint)PTR_printerApi_service_k3c___K3c__Connect_gowrap1_004185dc >> 0x10);
  if (*(int *)PTR_DAT_004185b8 != 0) {
    iVar5 = FUN_00098678();
    *unaff_r8 = in_stack_00000004;
  }
  *(int *)(iVar5 + 4) = in_stack_00000004;
  FUN_0005e168();
  FUN_0001eed8();
  iVar5 = 2;
  uRam00000002 = SUB42(PTR_printerApi_service_k3c___K3c__Connect_gowrap2_004185e0,0);
  _DAT_00000004 =
       (undefined2)((uint)PTR_printerApi_service_k3c___K3c__Connect_gowrap2_004185e0 >> 0x10);
  if (*(int *)PTR_DAT_004185b8 != 0) {
    iVar5 = FUN_00098678();
    *unaff_r8 = in_stack_00000004;
  }
  *(int *)(iVar5 + 4) = in_stack_00000004;
  FUN_0005e168();
  printerApi_service_k3c___K3c__waitForReady();
  return;
}



/* printerApi/service/k3c.(*K3c).Connect.gowrap2 @ 004185f0 (size 84) */

void printerApi_service_k3c___K3c__Connect_gowrap2(void)

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
  printerApi_service_k3c___K3c__readLoop();
  return;
}



/* printerApi/service/k3c.(*K3c).Connect.gowrap1 @ 00418644 (size 84) */

void printerApi_service_k3c___K3c__Connect_gowrap1(void)

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
  printerApi_service_k3c___K3c__router();
  return;
}



/* printerApi/service/k3c.(*K3c).dial @ 00418698 (size 328) */

void printerApi_service_k3c___K3c__dial(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar5;
  undefined4 unaff_lr;
  bool bVar6;
  undefined8 uVar7;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar5 = (undefined1 *)((int)register0x00000054 + -0x24);
      *(undefined4 *)((int)register0x00000054 + -0x24) = unaff_lr;
      uVar7 = CONCAT44(*(int *)((int)register0x00000054 + 4),
                       *(undefined4 *)((int)register0x00000054 + 0xc));
      *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      if (*(int *)PTR_DAT_004187e4 == 0) {
        uVar4 = *(undefined4 *)((int)register0x00000054 + 8);
      }
      else {
        uVar7 = FUN_00098688();
        uVar4 = *(undefined4 *)((int)register0x00000054 + 8);
        *unaff_r8 = uVar4;
        unaff_r8[1] = *(undefined4 *)((int)((ulonglong)uVar7 >> 0x20) + 4);
      }
      iVar1 = (int)((ulonglong)uVar7 >> 0x20);
      *(undefined4 *)(iVar1 + 4) = uVar4;
      if ((int)uVar7 < 4) {
LAB_00418780:
        uVar4 = *(undefined4 *)(iVar1 + 4);
        uVar3 = *(undefined4 *)(iVar1 + 8);
        *(undefined **)((int)register0x00000054 + -0x20) =
             PTR_s_unixnamepathsizedatetypetext_gco_0077367d_0xb_004187f0;
        *(undefined4 *)((int)register0x00000054 + -0x1c) = 4;
        *(undefined4 *)((int)register0x00000054 + -0x18) = uVar4;
        *(undefined4 *)((int)register0x00000054 + -0x14) = uVar3;
        FUN_001a93ec();
        *(undefined4 *)((int)register0x00000054 + 0x10) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        *(undefined4 *)((int)register0x00000054 + 0x18) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x1c) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x004187c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x24))();
        return;
      }
      *(undefined4 *)((int)register0x00000054 + -0x20) = uVar4;
      *(undefined **)((int)register0x00000054 + -0x1c) =
           PTR_s_tcp_unixnamepathsizedatetypetext_0077367d_7_004187e8;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 4;
      FUN_000150d4();
      if (*(char *)((int)register0x00000054 + -0x14) == '\0') {
        iVar1 = *(int *)((int)register0x00000054 + 4);
        goto LAB_00418780;
      }
      uVar2 = *(uint *)(*(int *)((int)register0x00000054 + 4) + 8);
      bVar6 = uVar2 == 4;
      if (3 < uVar2) {
        iVar1 = *(int *)(*(int *)((int)register0x00000054 + 4) + 4);
        *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_004187ec;
        *(undefined4 *)((int)register0x00000054 + -0x1c) = 3;
        *(uint *)((int)register0x00000054 + -0x18) = iVar1 + ((int)(4 - uVar2) >> 0x1f & 4U);
        *(uint *)((int)register0x00000054 + -0x14) = uVar2 - 4;
        FUN_001a93ec();
        *(undefined4 *)((int)register0x00000054 + 0x10) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        *(undefined4 *)((int)register0x00000054 + 0x18) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x1c) =
             *(undefined4 *)((int)register0x00000054 + -4);
        return;
      }
      param_1 = FUN_00098758(4);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x24);
      if (bVar6) {
        register0x00000054 = (BADSPACEBASE *)puVar5;
      }
    }
    unaff_lr = 0x4187dc;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/service/k3c.(*K3c).waitForReady @ 004187f4 (size 444) */

void printerApi_service_k3c___K3c__waitForReady(void)

{
  char *pcVar1;
  uint uVar2;
  int unaff_r10;
  undefined4 in_stack_00000004;
  int local_28;
  uint local_1c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  internal_runtime_atomic_Load();
  if (local_28 != 1) {
    return;
  }
  while( true ) {
    printerApi_service_k3c___K3c__Info();
    if (local_1c == 0) {
      uVar2 = 0;
    }
    else {
      FUN_000a2c04();
      uVar2 = local_1c & 0xff ^ 1;
    }
    pcVar1 = DAT_004189c0;
    if (uVar2 != 0) break;
    FUN_00021c74();
    printerApi_common_utils_cast_ToStringE();
    if ((((*pcVar1 == 'r') && (pcVar1[1] == 'e')) && (pcVar1[2] == 'a')) &&
       ((pcVar1[3] == 'd' && (pcVar1[4] == 'y')))) {
      internal_runtime_atomic_Store();
      return;
    }
    FUN_000953d0();
  }
  printerApi_common_logger_Errorf();
  return;
}



/* printerApi/service/k3c.(*K3c).Info @ 004189c8 (size 380) */

void printerApi_service_k3c___K3c__Info(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_4;
  
  while (uVar1 = DAT_00418b48, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  local_4 = 0;
  in_stack_00000014 = 0;
  in_stack_00000018 = 0;
  FUN_0001eed8();
  FUN_0008b6b8();
  FUN_00098a20(0,&local_20,uVar1);
  local_10 = DAT_00418b4c;
  local_20 = DAT_00418b50;
  local_1c = 4;
  local_18 = DAT_00418b54;
  FUN_00155144();
  iVar2 = FUN_0004f500();
  if (iVar2 == 0) {
    FUN_0001cd7c();
    printerApi_service_k3c___K3c__CallContext();
    FUN_0004fb3c();
    return;
  }
  FUN_0004fb3c();
  return;
}



/* printerApi/service/k3c.(*K3c).directSubscribe @ 00418b6c (size 388) */

/* WARNING: Removing unreachable block (ram,0x00418c98) */

void printerApi_service_k3c___K3c__directSubscribe(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0008a578();
  printerApi_service_k3c___K3c__CallContext();
  if (local_10 == 0) {
    FUN_0008a578();
    printerApi_service_k3c___K3c__CallContext();
    return;
  }
  printerApi_common_logger_Errorf();
  return;
}



/* printerApi/service/k3c.(*K3c).IsReady @ 00418d14 (size 84) */

void printerApi_service_k3c___K3c__IsReady(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined1 in_stack_00000008;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x418d64;
    FUN_00096bb8();
  }
  internal_runtime_atomic_Load();
  if (uStack_4 - 2U < 2) {
    in_stack_00000008 = 1;
                    /* WARNING: Could not recover jumptable at 0x00418d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  in_stack_00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00418d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/service/k3c.(*K3c).IsConnected @ 00418d68 (size 84) */

void printerApi_service_k3c___K3c__IsConnected(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined1 in_stack_00000008;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x418db8;
    FUN_00096bb8();
  }
  internal_runtime_atomic_Load();
  if (uStack_4 - 1U < 3) {
    in_stack_00000008 = 1;
                    /* WARNING: Could not recover jumptable at 0x00418da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  in_stack_00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00418dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/service/k3c.IsReady @ 00418dbc (size 136) */

void printerApi_service_k3c_IsReady(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0xc) = *DAT_00418e48;
      FUN_0009bf4c();
      bVar2 = *(int *)((int)register0x00000054 + -8) == DAT_00418e4c;
      if (bVar2) {
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -4);
        internal_runtime_atomic_Load();
        *(bool *)((int)register0x00000054 + 4) = *(int *)((int)register0x00000054 + -8) - 2U < 2;
        return;
      }
      *(int *)((int)register0x00000054 + -0xc) = *(int *)((int)register0x00000054 + -8);
      *(int *)((int)register0x00000054 + -8) = DAT_00418e4c;
      *(undefined4 *)((int)register0x00000054 + -4) = DAT_00418e50;
      unaff_lr = 0x418e34;
      uVar3 = FUN_0001cb94();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_00096bb8((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x418e40;
    param_3 = extraout_r2_00;
  } while( true );
}



/* printerApi/service/k3c.(*K3c).IsRunning @ 00418e54 (size 68) */

void printerApi_service_k3c___K3c__IsRunning(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined1 in_stack_00000008;
  int iStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x418e94;
    FUN_00096bb8();
  }
  internal_runtime_atomic_Load();
  in_stack_00000008 = iStack_4 == 3;
                    /* WARNING: Could not recover jumptable at 0x00418e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/k3c.(*K3c).Call @ 00418e98 (size 108) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c___K3c__Call(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x418f00;
    FUN_00096bb8();
  }
  printerApi_service_k3c___K3c__CallContext();
                    /* WARNING: Could not recover jumptable at 0x00418ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/k3c.(*K3c).Async @ 00418f10 (size 1540) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c___K3c__Async(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r2;
  undefined *puVar4;
  undefined4 *unaff_r8;
  int unaff_r10;
  bool bVar5;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  uint in_stack_0000000c;
  undefined *in_stack_00000010;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  undefined4 in_stack_0000001c;
  int in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined *in_stack_00000028;
  undefined4 in_stack_0000002c;
  int local_78;
  uint local_70;
  undefined4 *local_6c;
  char local_68;
  undefined1 auStack_44 [24];
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined *local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  undefined **local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  local_4 = (undefined **)0x0;
  in_stack_00000028 = (undefined *)0x0;
  in_stack_0000002c = 0;
  if (in_stack_00000020 != 0) {
    local_24 = in_stack_00000020;
    local_20 = in_stack_00000024;
    iVar2 = in_stack_00000020;
    puVar4 = PTR_DAT_00419520;
    if (in_stack_00000020 == 0) {
      iVar2 = 0;
      puVar4 = (undefined *)0x0;
    }
    (**(code **)(puVar4 + 0x54))();
    if (local_78 != 0x16) {
      if (puVar4 == (undefined *)0x0) {
        local_10 = 0;
      }
      else {
        local_10 = *(undefined4 *)(puVar4 + 4);
      }
      local_c = iVar2;
      FUN_00130144();
      return;
    }
  }
  internal_runtime_atomic_Load();
  if ((local_78 == 0) || (internal_runtime_atomic_Load(), uVar1 = in_stack_0000000c, local_78 == 4))
  {
    return;
  }
  local_28 = in_stack_00000008;
  local_70 = in_stack_0000000c;
  FUN_0008e314();
  in_stack_00000008 = local_28;
  in_stack_0000000c = uVar1;
  if (local_68 != '\0') {
    in_stack_00000008 = *local_6c;
    in_stack_0000000c = local_6c[1];
  }
  if (in_stack_0000000c == 0xc) {
    FUN_000150d4();
    uVar1 = uVar1 & 0xff ^ 1;
  }
  else {
    uVar1 = 1;
  }
  if (uVar1 == 0) {
    if (in_stack_00000010 == PTR_SUB_0041953c) {
      local_70 = 7;
      internal_stringslite_Index();
      bVar5 = -1 < (int)local_6c;
    }
    else {
      bVar5 = false;
    }
  }
  else {
    bVar5 = true;
  }
  if (bVar5) {
    bVar5 = false;
  }
  else {
    internal_runtime_atomic_Cas();
    if ((char)local_70 == '\0') {
      return;
    }
    local_1c = PTR_printerApi_service_k3c___K3c__Async_deferwrap1_00419544;
    local_18 = in_stack_00000004;
    local_4 = &local_1c;
    bVar5 = true;
  }
  if ((in_stack_0000000c == 0xc) && (FUN_000150d4(), (char)local_70 != '\0')) {
    local_70 = 6;
    FUN_00021c74();
    if ((undefined *)*local_6c == PTR_SUB_0041953c) {
      iVar2 = *(int *)(local_6c[1] + 4);
    }
    else {
      iVar2 = 0;
    }
    if (iVar2 < 0x11) {
      iVar2 = 0;
    }
    else {
      FUN_000150d4();
      iVar2 = 6;
    }
    if (iVar2 != 0) {
      if (*(int *)(in_stack_00000004 + 0x6c) == 8) {
        FUN_000150d4();
        iVar2 = 6;
      }
      else {
        iVar2 = 0;
      }
      if (iVar2 == 0) {
        if (*(int *)(in_stack_00000004 + 0x6c) == 7) {
          FUN_000150d4();
          iVar2 = 6;
        }
        else {
          iVar2 = 0;
        }
      }
      else {
        iVar2 = 1;
      }
      if (iVar2 != 0) {
        in_stack_0000002c = *(undefined4 *)PTR_DAT_0041955c;
        in_stack_00000028 = PTR_DAT_0041952c;
        if (bVar5) {
          (*(code *)*local_4)();
        }
        return;
      }
    }
  }
  uVar3 = in_stack_0000001c;
  printerApi_service_k3c___ID__Generate();
  in_stack_00000018 = local_70;
  FUN_0001cd7c();
  FUN_001707f4();
  local_2c = uVar3;
  FUN_00098e0c(uVar3,&stack0x00000008,auStack_44);
  FUN_00017058();
  local_8 = uVar3;
  FUN_0001eed8();
  uVar3 = 0;
  if (*(int *)PTR_DAT_0041956c != 0) {
    FUN_000986c8();
    *unaff_r8 = in_stack_00000024;
    unaff_r8[1] = *(undefined4 *)(extraout_r2 + 0x1c);
    unaff_r8[2] = local_2c;
    unaff_r8[3] = *(undefined4 *)(extraout_r2 + 0x20);
    unaff_r8[4] = local_8;
    unaff_r8[5] = *(undefined4 *)(extraout_r2 + 0x2c);
    uVar3 = FUN_00022914();
  }
  FUN_00098e0c(uVar3,auStack_44,1);
  _DAT_00000019 = in_stack_00000020;
  _DAT_0000001d = in_stack_00000024;
  _DAT_00000025 = local_70;
  _DAT_00000029 = local_6c;
  _DAT_00000021 = local_2c;
  _DAT_0000002d = local_8;
  local_14 = 1;
  FUN_000172bc();
  in_stack_00000028 = (undefined *)0x0;
  in_stack_0000002c = 0;
  if (bVar5) {
    (*(code *)*local_4)();
  }
  return;
}



/* printerApi/service/k3c.(*K3c).Async.deferwrap1 @ 00419574 (size 100) */

void printerApi_service_k3c___K3c__Async_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_10;
  }
  uStack_10 = *(undefined4 *)(unaff_r7 + 4);
  uStack_c = 3;
  uStack_8 = 2;
  internal_runtime_atomic_Cas();
  return;
}



/* printerApi/service/k3c.(*K3c).CallContext @ 004195d8 (size 2568) */

void printerApi_service_k3c___K3c__CallContext(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int extraout_r2_01;
  int extraout_r3;
  int extraout_r3_00;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  bool bVar5;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  int in_stack_00000010;
  int *in_stack_00000014;
  int in_stack_00000018;
  undefined4 in_stack_0000001c;
  int in_stack_ffffff50;
  int iVar6;
  undefined1 *puVar7;
  uint in_stack_ffffff54;
  uint local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  undefined1 auStack_90 [8];
  int local_88;
  uint local_84;
  int *local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined1 auStack_70 [24];
  int local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  int local_48;
  int local_44 [2];
  int local_3c;
  int *local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined1 local_20 [4];
  int *local_1c;
  undefined4 local_10;
  int local_c;
  int *local_8;
  undefined4 *local_4;
  
  while (&local_38 <= *(int ***)(unaff_r10 + 8)) {
    unaff_lr = 0x41a040;
    FUN_00096bb8();
  }
  local_4 = (undefined4 *)0x0;
  if (in_stack_00000018 != 0) {
    local_50 = in_stack_00000018;
    local_4c = in_stack_0000001c;
    local_74 = in_stack_00000018;
    local_88 = DAT_00419ec0;
    if (in_stack_00000018 == 0) {
      local_74 = 0;
      local_88 = 0;
    }
    (**(code **)(local_88 + 0x54))();
    if (in_stack_ffffff50 != 0x16) {
      if (local_88 == 0) {
        local_34 = 0;
      }
      else {
        local_34 = *(undefined4 *)(local_88 + 4);
      }
      local_30 = local_74;
      FUN_00130144();
      return;
    }
  }
  if (in_stack_00000010 == DAT_00419ec8) {
    piVar3 = (int *)*in_stack_00000014;
    FUN_00071920();
    in_stack_ffffff54 = local_a8;
    local_84 = local_a4;
    local_80 = (int *)local_a0;
  }
  else {
    piVar3 = in_stack_00000014;
    FUN_001707f4(in_stack_00000014,0,in_stack_00000018,in_stack_00000010,unaff_lr,in_stack_00000010)
    ;
    bVar5 = local_a0 == 0;
    local_84 = local_a8;
    local_80 = (int *)local_a4;
    if (!bVar5) {
      local_78 = local_a0;
      FUN_00098a28(0,local_44,local_9c,local_a0);
      local_44[0] = extraout_r3;
      if (!bVar5) {
        local_44[0] = *(int *)(extraout_r3 + 4);
      }
      local_3c = in_stack_00000010;
      local_38 = in_stack_00000014;
      local_24 = extraout_r2;
      printerApi_common_logger_Debugf();
      local_34 = 0;
      if (local_78 != 0) {
        local_34 = *(undefined4 *)(local_78 + 4);
      }
      local_30 = local_24;
      FUN_00130144();
      return;
    }
  }
  local_58 = in_stack_ffffff54;
  FUN_0001eed8();
  uVar4 = DAT_00419ed8;
  local_a8 = DAT_00419ed8;
  local_8 = piVar3;
  FUN_0016a168();
  bVar5 = local_a0 == 0;
  if (!bVar5) {
    local_7c = local_a0;
    FUN_00098a28(0,local_44,local_9c,local_a0,unaff_lr,local_58,local_84,local_80);
    local_44[0] = extraout_r3_00;
    if (!bVar5) {
      local_44[0] = *(int *)(extraout_r3_00 + 4);
    }
    local_24 = extraout_r2_00;
    FUN_00093e34();
    FUN_0008a578();
    local_3c = DAT_00419ec8;
    printerApi_common_logger_Debugf();
    local_34 = 0;
    if (local_7c != 0) {
      local_34 = *(undefined4 *)(local_7c + 4);
    }
    local_30 = local_24;
    FUN_00130144();
    return;
  }
  internal_runtime_atomic_Load();
  if ((local_84 == 0) || (internal_runtime_atomic_Load(), local_84 == 4)) {
    return;
  }
  if (local_8[1] == 0xc) {
    FUN_000150d4();
    uVar4 = uVar4 & 0xff ^ 1;
  }
  else {
    uVar4 = 1;
  }
  if (uVar4 == 0) {
    if (local_8[2] == DAT_00419ec8) {
      local_a8 = 7;
      internal_stringslite_Index();
      bVar5 = -1 < (int)piVar3;
    }
    else {
      bVar5 = false;
    }
  }
  else {
    bVar5 = true;
  }
  if (bVar5) {
    bVar5 = false;
  }
  else {
    internal_runtime_atomic_Cas(in_stack_00000004,3,DAT_00419ec8);
    if ((char)local_a8 == '\0') {
      return;
    }
    local_10 = DAT_00419ef4;
    local_c = in_stack_00000004;
    local_4 = &local_10;
    bVar5 = true;
  }
  if ((local_8[1] == 0xc) &&
     (FUN_000150d4(local_8,0xc,DAT_00419ec8,0xc,unaff_lr,*local_8,DAT_00419eec,0xc),
     (char)local_a8 != '\0')) {
    local_a8 = 6;
    FUN_00021c74();
    if (*piVar3 == DAT_00419ec8) {
      iVar1 = *(int *)(piVar3[1] + 4);
    }
    else {
      iVar1 = 0;
    }
    if (iVar1 < 0x11) {
      iVar1 = 0;
    }
    else {
      FUN_000150d4();
      iVar1 = 6;
    }
    if (iVar1 != 0) {
      if (*(int *)(in_stack_00000004 + 0x6c) == 8) {
        FUN_000150d4();
        iVar1 = 6;
      }
      else {
        iVar1 = 0;
      }
      if (iVar1 == 0) {
        if (*(int *)(in_stack_00000004 + 0x6c) == 7) {
          FUN_000150d4();
          iVar1 = 6;
        }
        else {
          iVar1 = 0;
        }
      }
      else {
        iVar1 = 1;
      }
      if (iVar1 != 0) {
        if (bVar5) {
          (*(code *)*local_4)();
        }
        return;
      }
    }
  }
  iVar1 = local_8[5];
  printerApi_service_k3c___ID__Generate();
  local_8[4] = local_a8;
  local_8[5] = (int)piVar3;
  FUN_0001cd7c();
  FUN_001707f4();
  local_84 = local_a8;
  local_80 = piVar3;
  local_58 = iVar1;
  FUN_00098e0c(iVar1,local_8,auStack_70);
  iVar6 = 1;
  FUN_00017058();
  local_28 = iVar1;
  FUN_0001eed8();
  uVar2 = 0;
  local_54 = iVar6;
  if (*DAT_00419f18 != 0) {
    FUN_000986c8();
    *unaff_r8 = in_stack_0000001c;
    unaff_r8[1] = *(undefined4 *)(extraout_r2_01 + 0x1c);
    unaff_r8[2] = local_58;
    unaff_r8[3] = *(undefined4 *)(extraout_r2_01 + 0x20);
    unaff_r8[4] = local_28;
    unaff_r8[5] = *(undefined4 *)(extraout_r2_01 + 0x2c);
    uVar2 = FUN_00022914();
  }
  FUN_00098e0c(uVar2,auStack_70,local_54);
  *(int *)(local_54 + 0x18) = in_stack_00000018;
  *(undefined4 *)(local_54 + 0x1c) = in_stack_0000001c;
  *(uint *)(local_54 + 0x24) = local_84;
  *(int **)(local_54 + 0x28) = local_80;
  *(int *)(local_54 + 0x20) = local_58;
  *(int *)(local_54 + 0x2c) = local_28;
  local_48 = local_54;
  piVar3 = &local_48;
  FUN_000172bc();
  (**(code **)(in_stack_00000008 + 0x10))();
  local_48 = 0;
  FUN_00098a28(0,local_20,piVar3,*(undefined4 *)(local_54 + 0x2c),unaff_lr,in_stack_0000000c);
  local_1c = &local_48;
  puVar7 = auStack_90;
  uVar2 = 0;
  FUN_00067f3c();
  if (local_9c == 0) {
    if (bVar5) {
      (*(code *)*local_4)();
    }
    return;
  }
  (**(code **)(in_stack_00000008 + 0x14))();
  local_34 = 0;
  if (puVar7 != (undefined1 *)0x0) {
    local_34 = *(undefined4 *)(puVar7 + 4);
  }
  local_30 = uVar2;
  printerApi_common_logger_Errorf();
  local_2c = in_stack_00000004 + 0x20;
  FUN_000b3994();
  FUN_0002149c();
  FUN_000b3de4();
  (**(code **)(in_stack_00000008 + 0x14))();
  if (bVar5) {
    (*(code *)*local_4)();
  }
  return;
}



/* printerApi/service/k3c.(*K3c).CallContext.deferwrap1 @ 0041a058 (size 100) */

void printerApi_service_k3c___K3c__CallContext_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_10;
  }
  uStack_10 = *(undefined4 *)(unaff_r7 + 4);
  uStack_c = 3;
  uStack_8 = 2;
  internal_runtime_atomic_Cas();
  return;
}



/* printerApi/service/k3c.Call @ 0041a0bc (size 164) */

void printerApi_service_k3c_Call(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x24) = *(undefined4 *)PTR_DAT_0041a164;
      FUN_0009bf4c();
      bVar2 = *(undefined **)((int)register0x00000054 + -0x20) == PTR_DAT_0041a168;
      if (bVar2) {
        *(undefined4 *)((int)register0x00000054 + -0x24) =
             *(undefined4 *)((int)register0x00000054 + -0x1c);
        *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_0041a16c;
        *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_0041a170;
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x10);
        printerApi_service_k3c___K3c__CallContext();
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x18) =
             *(undefined4 *)((int)register0x00000054 + -4);
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x24) =
           *(undefined **)((int)register0x00000054 + -0x20);
      *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_0041a168;
      *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_0041a174;
      unaff_lr = 0x41a150;
      uVar3 = FUN_0001cb94();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_00096bb8((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x41a15c;
    param_3 = extraout_r2_00;
  } while( true );
}



/* printerApi/service/k3c.CallContext @ 0041a178 (size 164) */

void printerApi_service_k3c_CallContext(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x24) = *DAT_0041a220;
      FUN_0009bf4c();
      bVar2 = *(int *)((int)register0x00000054 + -0x20) == DAT_0041a224;
      if (bVar2) {
        *(undefined4 *)((int)register0x00000054 + -0x24) =
             *(undefined4 *)((int)register0x00000054 + -0x1c);
        *(undefined4 *)((int)register0x00000054 + -0x20) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + 0x14);
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x18);
        printerApi_service_k3c___K3c__CallContext();
        *(undefined4 *)((int)register0x00000054 + 0x1c) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x20) =
             *(undefined4 *)((int)register0x00000054 + -4);
        return;
      }
      *(int *)((int)register0x00000054 + -0x24) = *(int *)((int)register0x00000054 + -0x20);
      *(int *)((int)register0x00000054 + -0x20) = DAT_0041a224;
      *(undefined4 *)((int)register0x00000054 + -0x1c) = DAT_0041a228;
      unaff_lr = 0x41a20c;
      uVar3 = FUN_0001cb94();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_00096bb8((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x41a218;
    param_3 = extraout_r2_00;
  } while( true );
}



/* printerApi/service/k3c.(*K3c).Subscribe @ 0041a22c (size 668) */

void printerApi_service_k3c___K3c__Subscribe(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 uVar5;
  char local_38;
  int local_2c;
  undefined *local_1c;
  int local_18;
  undefined *local_14;
  undefined4 *local_10;
  undefined *local_c;
  undefined *local_8;
  undefined **local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x41a4cc;
    FUN_00096bb8();
  }
  local_4 = (undefined **)0x0;
  iVar3 = in_stack_00000004 + 0x3c;
  FUN_000b5240();
  local_1c = PTR_printerApi_service_k3c___K3c__Subscribe_deferwrap1_0041a4d4;
  local_4 = &local_1c;
  puVar1 = *(undefined4 **)(in_stack_00000004 + 0x54);
  local_18 = iVar3;
  FUN_0008b8f4();
  if (local_38 != '\0') {
    uVar2 = in_stack_0000000c;
    (**(code **)(in_stack_00000008 + 0x10))();
    FUN_00098a28(0,&local_14,&stack0x00000008,puVar1,unaff_lr,uVar2);
    FUN_0008a578();
    local_14 = PTR_SUB_0041a4e8;
    local_c = PTR_SUB_0041a4e8;
    local_8 = PTR_DAT_0041a4f4;
    local_10 = &stack0x00000008;
    printerApi_common_logger_Info();
    (*(code *)*local_4)();
    return;
  }
  FUN_0001eed8();
  *puVar1 = PTR_printerApi_service_k3c___K3c__handleSubscriberError_fm_0041a4e0;
  if (*(int *)PTR_DAT_0041a4e4 != 0) {
    puVar1 = (undefined4 *)FUN_00098678();
    *unaff_r8 = in_stack_00000004;
  }
  puVar1[1] = in_stack_00000004;
  piVar4 = *(int **)(in_stack_00000004 + 0x5c);
  printerApi_service_k3c_newSubscriberWorker();
  uVar2 = *(undefined4 *)(in_stack_00000004 + 0x54);
  FUN_0008bb6c();
  if (*(int *)PTR_DAT_0041a4e4 != 0) {
    piVar4 = (int *)FUN_00098688();
    *unaff_r8 = local_2c;
    unaff_r8[1] = *piVar4;
  }
  *piVar4 = local_2c;
  uVar5 = in_stack_0000000c;
  (**(code **)(in_stack_00000008 + 0x10))();
  FUN_00098a28(0,&local_14,&stack0x00000008,uVar2,unaff_lr,uVar5);
  FUN_0008a578();
  local_14 = PTR_SUB_0041a4e8;
  local_10 = &stack0x00000008;
  FUN_0001cec0();
  local_c = PTR_DAT_0041a4ec;
  printerApi_common_logger_Infof();
  (*(code *)*local_4)();
  return;
}



/* printerApi/service/k3c.(*K3c).Subscribe.deferwrap1 @ 0041a4f8 (size 84) */

void printerApi_service_k3c___K3c__Subscribe_deferwrap1(void)

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
  FUN_000b536c();
  return;
}



/* printerApi/service/k3c.(*K3c).UnSubscribe @ 0041a54c (size 440) */

void printerApi_service_k3c___K3c__UnSubscribe(void)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined4 unaff_lr;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 uVar2;
  char local_2c;
  undefined *local_10;
  undefined4 *local_c;
  undefined *local_8;
  undefined *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x41a700;
    FUN_00096bb8();
  }
  FUN_000b5240();
  uVar1 = *(undefined4 *)(in_stack_00000004 + 0x54);
  FUN_0008b8f4();
  if (local_2c != '\0') {
    FUN_0008c0d0();
    FUN_000b536c();
    FUN_000b3f28();
    (**(code **)(in_stack_00000008 + 0x10))();
    FUN_0008a578();
    printerApi_common_logger_Infof();
    return;
  }
  FUN_000b536c();
  uVar2 = in_stack_0000000c;
  (**(code **)(in_stack_00000008 + 0x10))();
  FUN_00098a28(0,&local_10,&stack0x00000008,uVar1,unaff_lr,uVar2);
  FUN_0008a578();
  local_10 = PTR_SUB_0041a710;
  local_8 = PTR_SUB_0041a710;
  local_4 = PTR_DAT_0041a718;
  local_c = &stack0x00000008;
  printerApi_common_logger_Info();
  return;
}



/* printerApi/service/k3c.(*K3c).UnSubscribe.(*subscriberWorker).close.func1 @ 0041a71c (size 68) */

void printerApi_service_k3c___K3c__UnSubscribe___subscriberWorker__close_func1(void)

{
  int unaff_r10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  FUN_00017cc4();
  FUN_00017cc4();
  return;
}



/* printerApi/service/k3c.(*K3c).handleSubscriberError @ 0041a760 (size 376) */

void printerApi_service_k3c___K3c__handleSubscriberError(void)

{
  int unaff_r10;
  undefined4 unaff_lr;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  int in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 uVar1;
  undefined4 local_34;
  undefined4 *local_30;
  char local_28;
  undefined4 local_10;
  undefined4 *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x41a8d4;
    FUN_00096bb8();
  }
  if (in_stack_00000008 != 0) {
    FUN_000b5240();
    local_34 = *(undefined4 *)(in_stack_00000004 + 0x54);
    FUN_0008b8f4();
    if (local_28 != '\0') {
      local_34 = *(undefined4 *)(in_stack_00000004 + 0x54);
      FUN_0008c0d0();
    }
    local_30 = &stack0x00000008;
    FUN_000b536c();
    if (local_28 != '\0') {
      uVar1 = in_stack_0000000c;
      (**(code **)(in_stack_00000008 + 0x10))();
      FUN_00098a28(0,&local_10,local_30,local_34,unaff_lr,uVar1);
      FUN_0008a578();
      local_10 = DAT_0041a8e0;
      local_c = local_30;
      local_8 = 0;
      if (in_stack_00000010 != 0) {
        local_8 = *(undefined4 *)(in_stack_00000010 + 4);
      }
      local_4 = in_stack_00000014;
      printerApi_common_logger_Warnf();
      FUN_000b3f28();
    }
    return;
  }
  return;
}



/* printerApi/service/k3c.(*K3c).handleSubscriberError.(*subscriberWorker).close.func1 @ 0041a8ec (size 68) */

void printerApi_service_k3c___K3c__handleSubscriberError___subscriberWorker__close_func1(void)

{
  int unaff_r10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  FUN_00017cc4();
  FUN_00017cc4();
  return;
}



/* printerApi/service/k3c.(*K3c).Close @ 0041a930 (size 132) */

void printerApi_service_k3c___K3c__Close(void)

{
  int iVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  printerApi_service_k3c___K3c__close();
  if (local_8 == 0) {
    FUN_0001eed8();
    uRam00000000 = DAT_0041a9bc;
    if (*DAT_0041a9c0 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00098678();
      *unaff_r8 = in_stack_00000004;
    }
    *(undefined4 *)(iVar1 + 4) = in_stack_00000004;
    FUN_0005e168();
    return;
  }
  return;
}



/* printerApi/service/k3c.(*K3c).Close.func1 @ 0041a9c4 (size 160) */

void printerApi_service_k3c___K3c__Close_func1(void)

{
  int iVar1;
  undefined4 extraout_r1;
  int unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  iVar1 = *(int *)(unaff_r7 + 4);
  FUN_000b5644();
  FUN_00017058();
  if (*DAT_0041aa6c != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r1;
    unaff_r8[1] = *(undefined4 *)(iVar1 + 0x78);
    uStack_8 = extraout_r1;
  }
  *(undefined4 *)(iVar1 + 0x78) = uStack_8;
  FUN_000953d0();
  printerApi_service_k3c___K3c__reconnect();
  return;
}



/* printerApi/service/k3c.(*K3c).close @ 0041aa74 (size 624) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c___K3c__close(void)

{
  undefined4 *puVar1;
  undefined4 extraout_r1;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined8 uVar2;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 *local_44;
  int local_40;
  undefined4 local_3c;
  int local_30;
  int *local_2c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  internal_runtime_atomic_Load();
  if ((local_44 == (undefined4 *)0x0) || (local_44 == (undefined4 *)&DAT_00000004)) {
    FUN_0001eed8();
    local_44[1] = 0x33;
    *local_44 = DAT_0041acec;
    return;
  }
  internal_runtime_atomic_Xchg();
  if (local_40 == 4) {
    FUN_0001eed8();
    _DAT_00000008 = 0x2f;
    _DAT_00000004 = DAT_0041acfc;
    return;
  }
  puVar1 = *(undefined4 **)(in_stack_00000004 + 0x78);
  FUN_00018ad8();
  if ((char)local_40 == '\0') {
    FUN_00017cc4();
    if (*(int *)(in_stack_00000004 + 0xc) != 0) {
      (**(code **)(*(int *)(in_stack_00000004 + 0xc) + 0xc))();
    }
    FUN_000b3994();
    FUN_00098a08(0,&local_30,*(undefined4 *)(in_stack_00000004 + 0x28));
    FUN_0008c560();
    while (local_30 != 0) {
      uVar2 = CONCAT44(*DAT_0041ad00,*local_2c);
      *(undefined4 *)(*local_2c + 0x30) = DAT_0041ad04;
      if (*DAT_0041ad08 != 0) {
        uVar2 = FUN_00098688();
        *unaff_r8 = (int)((ulonglong)uVar2 >> 0x20);
        unaff_r8[1] = *(undefined4 *)((int)uVar2 + 0x34);
      }
      *(int *)((int)uVar2 + 0x34) = (int)((ulonglong)uVar2 >> 0x20);
      FUN_00018a8c();
      FUN_0008c7c4();
    }
    FUN_0008b708();
    if (*DAT_0041ad08 != 0) {
      FUN_00098688();
      *unaff_r8 = extraout_r1;
      unaff_r8[1] = *(undefined4 *)(in_stack_00000004 + 0x28);
      local_3c = extraout_r1;
    }
    *(undefined4 *)(in_stack_00000004 + 0x28) = local_3c;
    FUN_000b3de4();
    return;
  }
  FUN_0001eed8();
  puVar1[1] = 0x11;
  *puVar1 = DAT_0041acf8;
  return;
}



/* printerApi/service/k3c.(*K3c).reconnect @ 0041ad0c (size 1180) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c___K3c__reconnect(void)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  int extraout_r1;
  int extraout_r1_00;
  int iVar4;
  int iVar5;
  int extraout_r2;
  int iVar6;
  int extraout_r2_00;
  int *unaff_r8;
  int unaff_r10;
  undefined8 uVar7;
  int in_stack_00000004;
  int local_6c;
  undefined1 *local_68;
  char local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined1 local_34 [4];
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  while( true ) {
    FUN_000953d0();
    iVar5 = *(int *)(in_stack_00000004 + 8);
    FUN_001a93ec();
    if (local_58 == 0) break;
    local_8 = *(undefined4 *)(local_58 + 4);
    local_60 = 1;
    printerApi_common_logger_Errorf();
  }
  local_6c = 4;
  local_68 = (undefined1 *)0x1;
  internal_runtime_atomic_Cas();
  uVar7 = CONCAT44(in_stack_00000004,local_60);
  local_64 = (char)iVar5;
  if (local_64 == '\0') {
    (**(code **)(local_60 + 0xc))();
    return;
  }
  *(int *)(in_stack_00000004 + 0xc) = local_60;
  if (*DAT_0041b1b4 != 0) {
    uVar7 = FUN_00098688();
    *unaff_r8 = local_5c;
    unaff_r8[1] = *(int *)((int)((ulonglong)uVar7 >> 0x20) + 0x10);
  }
  iVar4 = (int)((ulonglong)uVar7 >> 0x20);
  iVar6 = (int)uVar7;
  *(int *)(iVar4 + 0x10) = local_5c;
  if (iVar6 != 0) {
    local_6c = *(int *)(iVar6 + 4);
    FUN_0001cf8c();
    iVar4 = in_stack_00000004;
  }
  uVar1 = (uint)(iVar6 != 0);
  if ((uVar1 != DAT_0041b1bc) || (*(int *)(local_5c + 4) < 0x1000)) {
    FUN_0001eed8();
    local_68 = &SUB_00001000;
    FUN_000933e8();
    FUN_00098a0c(0,local_34,iVar5);
    local_30 = 0x1000;
    local_2c = 0x1000;
    local_10 = 0xffffffff;
    local_c = 0xffffffff;
    local_28 = uVar1;
    if (*DAT_0041b1b4 != 0) {
      local_68 = local_34;
      FUN_00022914();
    }
    FUN_00098de4(0x1000,local_34,local_6c);
    iVar4 = in_stack_00000004;
    local_5c = local_6c;
  }
  if (*DAT_0041b1b4 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r2;
    unaff_r8[1] = *(int *)(extraout_r1 + 0x14);
    iVar4 = extraout_r1;
    local_5c = extraout_r2;
  }
  *(int *)(iVar4 + 0x14) = local_5c;
  iVar6 = *(int *)(iVar4 + 0x10);
  puVar2 = (undefined1 *)0x0;
  if (*(int *)(iVar4 + 0xc) != 0) {
    FUN_0001cf8c();
    puVar2 = local_68;
    iVar4 = in_stack_00000004;
  }
  if ((puVar2 != DAT_0041b1cc) || (iVar3 = iVar6, *(int *)(iVar6 + 0xc) < 0x1000)) {
    FUN_000933e8();
    FUN_0001eed8();
    iVar3 = 0x1000;
    _DAT_0000100c = 0x1000;
    _DAT_00001010 = 0x1000;
    if (*DAT_0041b1b4 != 0) {
      iVar3 = FUN_00098688();
      *unaff_r8 = iVar5;
      unaff_r8[1] = iVar6;
    }
    *(int *)(iVar3 + 8) = iVar5;
    *(undefined1 **)(iVar3 + 0x18) = puVar2;
    *(int *)(iVar3 + 0x1c) = iVar6;
    iVar4 = in_stack_00000004;
  }
  if (*DAT_0041b1b4 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r2_00;
    unaff_r8[1] = *(int *)(extraout_r1_00 + 0x18);
    iVar4 = extraout_r1_00;
    iVar3 = extraout_r2_00;
  }
  *(int *)(iVar4 + 0x18) = iVar3;
  FUN_000b5490();
  FUN_0001eed8();
  iVar5 = 2;
  uRam00000002 = DAT_0041b1d8;
  if (*DAT_0041b1b4 != 0) {
    iVar5 = FUN_00098678();
    *unaff_r8 = in_stack_00000004;
  }
  *(int *)(iVar5 + 4) = in_stack_00000004;
  FUN_0005e168();
  FUN_0001eed8();
  iVar5 = 2;
  uRam00000002 = DAT_0041b1dc;
  if (*DAT_0041b1b4 != 0) {
    iVar5 = FUN_00098678();
    *unaff_r8 = in_stack_00000004;
  }
  *(int *)(iVar5 + 4) = in_stack_00000004;
  FUN_0005e168();
  printerApi_service_k3c___K3c__waitForReady();
  FUN_000b5240();
  if (*(int **)(in_stack_00000004 + 0x54) == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = **(int **)(in_stack_00000004 + 0x54);
  }
  if (iVar5 < 1) {
    FUN_000b536c();
    return;
  }
  FUN_000b536c();
  printerApi_service_k3c___K3c__directSubscribe();
  return;
}



/* printerApi/service/k3c.(*K3c).reconnect.gowrap2 @ 0041b1e0 (size 84) */

void printerApi_service_k3c___K3c__reconnect_gowrap2(void)

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
  printerApi_service_k3c___K3c__readLoop();
  return;
}



/* printerApi/service/k3c.(*K3c).reconnect.gowrap1 @ 0041b234 (size 84) */

void printerApi_service_k3c___K3c__reconnect_gowrap1(void)

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
  printerApi_service_k3c___K3c__router();
  return;
}



/* printerApi/service/k3c.(*K3c).router @ 0041b288 (size 1520) */

/* WARNING: Removing unreachable block (ram,0x0041b710) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c___K3c__router(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *extraout_r1;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint extraout_r1_00;
  uint uVar6;
  uint extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar7;
  int iVar8;
  uint *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  int in_stack_00000004;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int local_8c;
  undefined4 *local_88;
  undefined4 *local_84;
  undefined4 *local_80;
  undefined1 auStack_5c [16];
  undefined4 *local_4c;
  undefined4 *local_44;
  undefined4 *local_40;
  uint local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 local_30 [3];
  uint *local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  undefined4 *local_4;
  
  while (&local_20 <= *(undefined4 **)(unaff_r10 + 8)) {
    unaff_lr = 0x41b874;
    FUN_00096bb8();
  }
  local_8 = DAT_0041b87c;
  local_4 = DAT_0041b880;
  puVar4 = &local_8;
  uVar10 = 1;
  puVar11 = (undefined4 *)0x1;
  printerApi_common_logger_Debug();
LAB_0041b2c4:
  do {
    local_c = 0;
    uVar7 = *(undefined4 *)(in_stack_00000004 + 0x78);
    FUN_00098a28(0,local_30,in_stack_00000004,*(undefined4 *)(in_stack_00000004 + 0x1c),unaff_lr,
                 puVar4,uVar10,puVar11);
    local_24 = &local_c;
    local_8c = 2;
    local_88 = (undefined4 *)CONCAT31(local_88._1_3_,1);
    local_30[0] = uVar7;
    uVar10 = FUN_00067f3c();
    if (local_84 == (undefined4 *)0x0) {
      local_8 = DAT_0041b87c;
      local_4 = (undefined4 *)DAT_0041b8ac;
      printerApi_common_logger_Debug();
      FUN_000b5490();
      return;
    }
    local_3c = local_c;
    FUN_00098e0c(uVar10,local_c,auStack_5c);
    puVar11 = *(undefined4 **)(local_3c + 0x20);
    iVar8 = *(int *)(local_3c + 0x24);
    puVar4 = *(undefined4 **)(local_3c + 0x28);
    if (*(char *)(*(int *)(*DAT_0041b884 + 8) + 0x2e) != '\0') {
      printerApi_common_protocol_Encrypt();
      if (local_84 != (undefined4 *)0x0) {
        *(undefined4 **)(local_3c + 0x30) = local_84;
        puVar4 = local_80;
        uVar6 = local_3c;
        if (*DAT_0041b888 != 0) {
          FUN_00098688();
          *unaff_r8 = (uint)extraout_r1;
          unaff_r8[1] = *(uint *)(extraout_r2 + 0x34);
          puVar4 = extraout_r1;
          uVar6 = extraout_r2;
        }
        *(undefined4 **)(uVar6 + 0x34) = puVar4;
        local_44 = puVar4;
        local_10 = uVar6;
        FUN_00018a8c();
        local_8 = 0;
        if (local_84 != (undefined4 *)0x0) {
          local_8 = local_84[1];
        }
        local_4 = local_44;
        uVar10 = 0x1e;
        puVar11 = &local_8;
        puVar4 = DAT_0041b88c;
        printerApi_common_logger_Errorf();
        goto LAB_0041b2c4;
      }
      puVar11 = (undefined4 *)0x0;
      iVar8 = 2;
      puVar4 = local_88;
    }
    local_34 = (undefined4 *)(in_stack_00000004 + 0x20);
    local_40 = puVar11;
    FUN_000b3994();
    puVar11 = *(undefined4 **)(in_stack_00000004 + 0x28);
    puVar3 = local_4c;
    FUN_0008df7c();
    puVar1 = (uint *)0x2;
    if (*DAT_0041b888 != 0) {
      puVar1 = (uint *)FUN_00098688();
      *unaff_r8 = local_3c;
      unaff_r8[1] = *puVar1;
    }
    *puVar1 = local_3c;
    puVar9 = local_34;
    FUN_000b3de4();
    puVar2 = (undefined4 *)(iVar8 + 1);
    puVar5 = local_40;
    if (puVar4 < puVar2) {
      local_8c = DAT_0041b894;
      puVar11 = puVar2;
      FUN_00093524();
      puVar2 = local_84;
      puVar5 = local_88;
      puVar9 = local_40;
      puVar3 = puVar4;
    }
    *(undefined1 *)((int)puVar5 + ((int)puVar2 - 1U)) = 3;
    local_40 = puVar5;
    FUN_00098a28(0,&local_20,puVar2,3,unaff_lr,puVar9,puVar11,puVar3);
    local_20 = DAT_0041b87c;
    local_1c = DAT_0041b898;
    unaff_r8 = (uint *)0x0;
    puVar4 = extraout_r2_00;
    FUN_00093e34();
    FUN_0008a578();
    local_18 = DAT_0041b87c;
    local_14 = puVar4;
    printerApi_common_logger_Debug();
    puVar3 = local_40;
    puVar5 = puVar2;
    FUN_001889e4();
    if (local_88 == (undefined4 *)0x0) {
      puVar4 = *(undefined4 **)(in_stack_00000004 + 0x18);
      FUN_00188794();
      uVar10 = 0;
      puVar11 = puVar5;
      if (puVar3 != (undefined4 *)0x0) {
        local_8 = puVar3[1];
        uVar10 = 0x19;
        puVar11 = &local_8;
        puVar4 = DAT_0041b8a8;
        local_38 = puVar5;
        local_4 = puVar5;
        printerApi_common_logger_Errorf();
        puVar5 = local_38;
      }
    }
    else {
      local_44 = local_84;
      if (local_8c < (int)puVar2) {
        FUN_00098a28(0,&local_20);
        FUN_0001cec0();
        local_20 = DAT_0041b89c;
        local_1c = puVar3;
        FUN_0001cec0();
        local_18 = DAT_0041b89c;
        local_14 = puVar3;
        printerApi_common_logger_Errorf();
      }
      if (local_88 == (undefined4 *)0x0) {
        local_8 = 0;
      }
      else {
        local_8 = local_88[1];
      }
      uVar10 = 0x13;
      puVar11 = &local_8;
      puVar4 = DAT_0041b8a4;
      local_4 = local_44;
      printerApi_common_logger_Errorf();
      puVar3 = local_88;
      puVar5 = local_44;
    }
    if (puVar3 != (undefined4 *)0x0) {
      local_44 = puVar5;
      FUN_000b3994();
      FUN_0002149c();
      FUN_000b3de4();
      *(undefined4 **)(local_3c + 0x30) = puVar3;
      uVar6 = local_3c;
      if (*DAT_0041b888 != 0) {
        FUN_00098688();
        puRam00000000 = local_44;
        _DAT_00000004 = *(undefined4 *)(extraout_r1_00 + 0x34);
        uVar6 = extraout_r1_00;
      }
      *(undefined4 **)(uVar6 + 0x34) = local_44;
      local_10 = uVar6;
      FUN_00018a8c(in_stack_00000004);
      printerApi_service_k3c___K3c__Close();
      FUN_000b5490();
      return;
    }
  } while( true );
}



/* printerApi/service/k3c.(*K3c).readLoop @ 0041b8b0 (size 2148) */

void printerApi_service_k3c___K3c__readLoop(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 extraout_r1;
  uint uVar6;
  undefined4 extraout_r2;
  int extraout_r2_00;
  code *pcVar7;
  int extraout_r3;
  undefined4 uVar8;
  undefined4 uVar9;
  int unaff_r10;
  undefined1 *puVar10;
  undefined4 unaff_lr;
  bool bVar11;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0xc)) {
      puVar10 = (undefined1 *)((int)register0x00000054 + -0x8c);
      *(undefined4 *)((int)register0x00000054 + -0x8c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_0041c0bc;
      *(undefined4 *)((int)register0x00000054 + -0x14) = DAT_0041c0c0;
      *(undefined1 **)((int)register0x00000054 + -0x88) =
           (undefined1 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x84) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x80) = 1;
      printerApi_common_logger_Debug();
      while( true ) {
        uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x78);
        *(undefined4 *)((int)register0x00000054 + -0x88) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x84) = uVar3;
        FUN_00018ad8();
        if (*(char *)((int)register0x00000054 + -0x80) != '\0') {
          *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_0041c158;
          *(undefined4 *)((int)register0x00000054 + -0x14) = DAT_0041c15c;
          *(undefined1 **)((int)register0x00000054 + -0x88) =
               (undefined1 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x84) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x80) = 1;
          printerApi_common_logger_Debug();
          *(int *)((int)register0x00000054 + -0x88) = *(int *)((int)register0x00000054 + 4) + 0x80;
          *(undefined4 *)((int)register0x00000054 + -0x84) = 0xffffffff;
          FUN_000b5490();
          return;
        }
        *(undefined4 *)((int)register0x00000054 + -0x88) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x14);
        *(undefined1 *)((int)register0x00000054 + -0x84) = 3;
        FUN_00187dac();
        if (*(int *)((int)register0x00000054 + -0x74) != 0) {
          *(undefined4 *)((int)register0x00000054 + -0x18) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x18) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + -0x74) + 4);
          *(undefined4 *)((int)register0x00000054 + -0x14) =
               *(undefined4 *)((int)register0x00000054 + -0x70);
          *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_0041c0f8;
          *(undefined4 *)((int)register0x00000054 + -0x84) = 0x1a;
          *(undefined1 **)((int)register0x00000054 + -0x80) =
               (undefined1 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x7c) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x78) = 1;
          printerApi_common_logger_Errorf();
          *(undefined4 *)((int)register0x00000054 + -0x88) =
               *(undefined4 *)((int)register0x00000054 + 4);
          printerApi_service_k3c___K3c__Close();
          *(int *)((int)register0x00000054 + -0x88) = *(int *)((int)register0x00000054 + 4) + 0x80;
          *(undefined4 *)((int)register0x00000054 + -0x84) = 0xffffffff;
          FUN_000b5490();
          return;
        }
        uVar6 = *(uint *)((int)register0x00000054 + -0x78);
        uVar4 = *(int *)((int)register0x00000054 + -0x7c) - 1;
        bVar11 = uVar6 == uVar4;
        if (uVar6 < uVar4) break;
        *(uint *)((int)register0x00000054 + -0x5c) = uVar4;
        *(uint *)((int)register0x00000054 + -0x58) = uVar6;
        *(undefined4 *)((int)register0x00000054 + -0x34) =
             *(undefined4 *)((int)register0x00000054 + -0x80);
        *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_0041c0c4;
        FUN_0001eed8();
        uVar3 = *(undefined4 *)((int)register0x00000054 + -0x84);
        *(undefined4 *)((int)register0x00000054 + -4) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x88) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        *(undefined4 *)((int)register0x00000054 + -0x84) =
             *(undefined4 *)((int)register0x00000054 + -0x5c);
        *(undefined4 *)((int)register0x00000054 + -0x80) =
             *(undefined4 *)((int)register0x00000054 + -0x58);
        *(undefined4 *)((int)register0x00000054 + -0x7c) = DAT_0041c0c8;
        *(undefined4 *)((int)register0x00000054 + -0x78) = uVar3;
        FUN_0016a168();
        if (*(int *)((int)register0x00000054 + -0x74) != 0) {
          *(undefined4 *)((int)register0x00000054 + -0x18) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x18) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + -0x74) + 4);
          *(undefined4 *)((int)register0x00000054 + -0x14) =
               *(undefined4 *)((int)register0x00000054 + -0x70);
          *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_0041c0f4;
          *(undefined4 *)((int)register0x00000054 + -0x84) = 0x1f;
          *(undefined1 **)((int)register0x00000054 + -0x80) =
               (undefined1 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x7c) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x78) = 1;
          printerApi_common_logger_Errorf();
          *(undefined4 *)((int)register0x00000054 + -0x88) =
               *(undefined4 *)((int)register0x00000054 + 4);
          printerApi_service_k3c___K3c__Close();
          *(int *)((int)register0x00000054 + -0x88) = *(int *)((int)register0x00000054 + 4) + 0x80;
          *(undefined4 *)((int)register0x00000054 + -0x84) = 0xffffffff;
          FUN_000b5490();
          return;
        }
        if (*(int *)(*(int *)((int)register0x00000054 + -4) + 0xc) == 0 &&
            *(int *)(*(int *)((int)register0x00000054 + -4) + 8) == 0) {
          FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x28));
          *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_0041c0bc;
          *(undefined4 *)((int)register0x00000054 + -0x24) = DAT_0041c0cc;
          *(undefined4 *)((int)register0x00000054 + -0x88) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x84) =
               *(undefined4 *)((int)register0x00000054 + -0x34);
          *(undefined4 *)((int)register0x00000054 + -0x80) =
               *(undefined4 *)((int)register0x00000054 + -0x5c);
          FUN_00093e34();
          *(undefined4 *)((int)register0x00000054 + -0x88) =
               *(undefined4 *)((int)register0x00000054 + -0x7c);
          *(undefined4 *)((int)register0x00000054 + -0x84) =
               *(undefined4 *)((int)register0x00000054 + -0x78);
          FUN_0008a578();
          *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_0041c0bc;
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x80);
          *(undefined1 **)((int)register0x00000054 + -0x88) =
               (undefined1 *)((int)register0x00000054 + -0x28);
          *(undefined4 *)((int)register0x00000054 + -0x84) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x80) = 2;
          printerApi_common_logger_Debug();
          *(undefined4 *)((int)register0x00000054 + -0x88) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x84) =
               *(undefined4 *)((int)register0x00000054 + -0x34);
          *(undefined4 *)((int)register0x00000054 + -0x80) =
               *(undefined4 *)((int)register0x00000054 + -0x5c);
          *(undefined4 *)((int)register0x00000054 + -0x7c) =
               *(undefined4 *)((int)register0x00000054 + -0x58);
          printerApi_service_k3c___K3c__handleSubscribeMessage();
          *(undefined4 *)((int)register0x00000054 + -0x88) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x84) =
               *(undefined4 *)((int)register0x00000054 + -0x34);
          *(undefined4 *)((int)register0x00000054 + -0x80) =
               *(undefined4 *)((int)register0x00000054 + -0x5c);
          *(undefined4 *)((int)register0x00000054 + -0x7c) =
               *(undefined4 *)((int)register0x00000054 + -0x58);
          printerApi_service_k3c___K3c__Publish();
        }
        else {
          FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x28));
          *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_0041c0bc;
          *(undefined4 *)((int)register0x00000054 + -0x24) = DAT_0041c0d0;
          *(undefined4 *)((int)register0x00000054 + -0x88) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x84) =
               *(undefined4 *)((int)register0x00000054 + -0x34);
          *(undefined4 *)((int)register0x00000054 + -0x80) =
               *(undefined4 *)((int)register0x00000054 + -0x5c);
          FUN_00093e34();
          *(undefined4 *)((int)register0x00000054 + -0x88) =
               *(undefined4 *)((int)register0x00000054 + -0x7c);
          *(undefined4 *)((int)register0x00000054 + -0x84) =
               *(undefined4 *)((int)register0x00000054 + -0x78);
          FUN_0008a578();
          *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_0041c0bc;
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x80);
          *(undefined1 **)((int)register0x00000054 + -0x88) =
               (undefined1 *)((int)register0x00000054 + -0x28);
          *(undefined4 *)((int)register0x00000054 + -0x84) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x80) = 2;
          printerApi_common_logger_Debug();
          *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + 4) + 0x20;
          *(int *)((int)register0x00000054 + -0x88) = *(int *)((int)register0x00000054 + 4) + 0x20;
          FUN_000b3994();
          puVar1 = DAT_0041c0d4;
          *(undefined4 *)((int)register0x00000054 + -0x2c) = 0;
          uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x28);
          uVar8 = *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 8);
          uVar9 = *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0xc);
          *(undefined4 **)((int)register0x00000054 + -0x88) = DAT_0041c0d4;
          *(undefined4 *)((int)register0x00000054 + -0x84) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0x80) = uVar8;
          *(undefined4 *)((int)register0x00000054 + -0x7c) = uVar9;
          FUN_0008ddb0();
          uVar3 = **(undefined4 **)((int)register0x00000054 + -0x78);
          *(undefined4 *)((int)register0x00000054 + -0xc) = uVar3;
          *(undefined1 *)((int)register0x00000054 + -0x61) =
               *(undefined1 *)((int)register0x00000054 + -0x74);
          *(undefined4 *)((int)register0x00000054 + -0x2c) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0x88) =
               *(undefined4 *)((int)register0x00000054 + -8);
          FUN_000b3de4();
          if (*(char *)((int)register0x00000054 + -0x61) == '\0') {
            *(undefined4 *)((int)register0x00000054 + -0x18) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
            uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x88) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 8);
            *(undefined4 *)((int)register0x00000054 + -0x84) = uVar3;
            FUN_0008a4bc();
            *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_0041c0ec;
            *(undefined4 *)((int)register0x00000054 + -0x14) =
                 *(undefined4 *)((int)register0x00000054 + -0x80);
            *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_0041c0f0;
            *(undefined4 *)((int)register0x00000054 + -0x84) = 0x28;
            *(undefined1 **)((int)register0x00000054 + -0x80) =
                 (undefined1 *)((int)register0x00000054 + -0x18);
            *(undefined4 *)((int)register0x00000054 + -0x7c) = 1;
            *(undefined4 *)((int)register0x00000054 + -0x78) = 1;
            printerApi_common_logger_Errorf();
          }
          else {
            if ((*(undefined4 **)((int)register0x00000054 + -0xc))[1] == 0x11) {
              *(undefined4 *)((int)register0x00000054 + -0x88) =
                   **(undefined4 **)((int)register0x00000054 + -0xc);
              *(undefined4 *)((int)register0x00000054 + -0x84) = DAT_0041c0d8;
              *(undefined4 *)((int)register0x00000054 + -0x80) = 0x11;
              FUN_000150d4();
              if (*(char *)((int)register0x00000054 + -0x7c) != '\0') {
                *(undefined4 *)((int)register0x00000054 + -0x88) =
                     *(undefined4 *)((int)register0x00000054 + 4);
                *(undefined4 *)((int)register0x00000054 + -0x84) =
                     *(undefined4 *)((int)register0x00000054 + -0x34);
                *(undefined4 *)((int)register0x00000054 + -0x80) =
                     *(undefined4 *)((int)register0x00000054 + -0x5c);
                *(undefined4 *)((int)register0x00000054 + -0x7c) =
                     *(undefined4 *)((int)register0x00000054 + -0x58);
                uVar3 = printerApi_service_k3c___K3c__handleSubscribeMessage();
                FUN_00098dfc(uVar3,*(undefined4 *)((int)register0x00000054 + -4),
                             (undefined1 *)((int)register0x00000054 + -0x54));
                *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
                *(undefined4 *)((int)register0x00000054 + -0x48) = 0;
                *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_0041c0c4;
                *(undefined1 **)((int)register0x00000054 + -0x84) =
                     (undefined1 *)((int)register0x00000054 + -0x54);
                FUN_0001cd7c();
                *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_0041c0c4;
                *(undefined4 *)((int)register0x00000054 + -0x84) =
                     *(undefined4 *)((int)register0x00000054 + -0x80);
                FUN_001707f4();
                *(undefined4 *)((int)register0x00000054 + -0x88) =
                     *(undefined4 *)((int)register0x00000054 + 4);
                *(undefined4 *)((int)register0x00000054 + -0x84) =
                     *(undefined4 *)((int)register0x00000054 + -0x80);
                *(undefined4 *)((int)register0x00000054 + -0x80) =
                     *(undefined4 *)((int)register0x00000054 + -0x7c);
                *(undefined4 *)((int)register0x00000054 + -0x7c) =
                     *(undefined4 *)((int)register0x00000054 + -0x78);
                printerApi_service_k3c___K3c__Publish();
              }
            }
            *(undefined4 *)((int)register0x00000054 + -0x88) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            FUN_000b3994();
            uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x28);
            uVar8 = *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 8);
            uVar9 = *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0xc);
            *(undefined4 **)((int)register0x00000054 + -0x88) = DAT_0041c0d4;
            *(undefined4 *)((int)register0x00000054 + -0x84) = uVar3;
            *(undefined4 *)((int)register0x00000054 + -0x80) = uVar8;
            *(undefined4 *)((int)register0x00000054 + -0x7c) = uVar9;
            FUN_0002149c();
            *(undefined4 *)((int)register0x00000054 + -0x88) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            FUN_000b3de4();
            iVar2 = *(int *)((int)register0x00000054 + -0xc);
            iVar5 = *(int *)(iVar2 + 0x18);
            if (iVar5 == 0) {
              uVar3 = *(undefined4 *)(iVar2 + 0x2c);
              *(int *)((int)register0x00000054 + -0x2c) = iVar2;
              *(undefined4 *)((int)register0x00000054 + -0x88) = uVar3;
              *(undefined1 **)((int)register0x00000054 + -0x84) =
                   (undefined1 *)((int)register0x00000054 + -0x2c);
              FUN_00018a8c();
            }
            else {
              *(undefined4 *)((int)register0x00000054 + -0x30) = *(undefined4 *)(iVar2 + 0x1c);
              *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_0041c0dc;
              *(int *)((int)register0x00000054 + -0x84) = iVar5;
              FUN_0001cf8c();
              if (*(int *)((int)register0x00000054 + -0x80) == 0) {
                uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 8);
                uVar8 = *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0xc);
                *(undefined4 *)((int)register0x00000054 + -0x88) =
                     *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 100);
                *(undefined4 *)((int)register0x00000054 + -0x84) = uVar3;
                *(undefined4 *)((int)register0x00000054 + -0x80) = uVar8;
                printerApi_service_k3c___ID__Find();
                uVar3 = *(undefined4 *)((int)register0x00000054 + -0x78);
                iVar2 = *(int *)((int)register0x00000054 + -4);
                *(undefined4 *)(iVar2 + 8) = *(undefined4 *)((int)register0x00000054 + -0x7c);
                *(undefined4 *)(iVar2 + 0xc) = uVar3;
                *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_0041c0c4;
                *(int *)((int)register0x00000054 + -0x84) = iVar2;
                FUN_0001cd7c();
                *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_0041c0c4;
                *(undefined4 *)((int)register0x00000054 + -0x84) =
                     *(undefined4 *)((int)register0x00000054 + -0x80);
                FUN_001707f4();
                *(undefined4 *)((int)register0x00000054 + -0x34) =
                     *(undefined4 *)((int)register0x00000054 + -0x80);
                *(undefined4 *)((int)register0x00000054 + -0x5c) =
                     *(undefined4 *)((int)register0x00000054 + -0x7c);
                uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0xc) + 0x18);
                uVar8 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0xc) + 0x1c);
                *(undefined4 *)((int)register0x00000054 + -0x88) =
                     *(undefined4 *)((int)register0x00000054 + -0x80);
                *(undefined4 *)((int)register0x00000054 + -0x84) =
                     *(undefined4 *)((int)register0x00000054 + -0x7c);
                *(undefined4 *)((int)register0x00000054 + -0x80) =
                     *(undefined4 *)((int)register0x00000054 + -0x78);
                *(undefined4 *)((int)register0x00000054 + -0x7c) = uVar3;
                *(undefined4 *)((int)register0x00000054 + -0x78) = uVar8;
                FUN_0016a168();
                iVar2 = *(int *)((int)register0x00000054 + -0x74);
                uVar8 = *(undefined4 *)((int)register0x00000054 + -0x70);
                bVar11 = iVar2 == 0;
                uVar3 = 0;
                if (!bVar11) {
                  *(int *)((int)register0x00000054 + -0x60) = iVar2;
                  FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x28),uVar8,iVar2);
                  iVar2 = extraout_r3;
                  if (!bVar11) {
                    iVar2 = *(int *)(extraout_r3 + 4);
                  }
                  *(undefined4 *)((int)register0x00000054 + -0x10) = extraout_r2;
                  *(int *)((int)register0x00000054 + -0x28) = iVar2;
                  *(undefined4 *)((int)register0x00000054 + -0x24) = extraout_r2;
                  *(undefined4 *)((int)register0x00000054 + -0x88) = 0;
                  *(undefined4 *)((int)register0x00000054 + -0x84) =
                       *(undefined4 *)((int)register0x00000054 + -0x34);
                  *(undefined4 *)((int)register0x00000054 + -0x80) =
                       *(undefined4 *)((int)register0x00000054 + -0x5c);
                  FUN_00093e34();
                  *(undefined4 *)((int)register0x00000054 + -0x88) =
                       *(undefined4 *)((int)register0x00000054 + -0x7c);
                  *(undefined4 *)((int)register0x00000054 + -0x84) =
                       *(undefined4 *)((int)register0x00000054 + -0x78);
                  FUN_0008a578();
                  *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_0041c0bc;
                  *(undefined4 *)((int)register0x00000054 + -0x1c) =
                       *(undefined4 *)((int)register0x00000054 + -0x80);
                  *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_0041c0e4;
                  *(undefined4 *)((int)register0x00000054 + -0x84) = 0x2e;
                  *(undefined1 **)((int)register0x00000054 + -0x80) =
                       (undefined1 *)((int)register0x00000054 + -0x28);
                  *(undefined4 *)((int)register0x00000054 + -0x7c) = 2;
                  *(undefined4 *)((int)register0x00000054 + -0x78) = 2;
                  printerApi_common_logger_Errorf();
                  uVar3 = *(undefined4 *)((int)register0x00000054 + -0x60);
                  uVar8 = *(undefined4 *)((int)register0x00000054 + -0x10);
                }
                iVar2 = *(int *)((int)register0x00000054 + -0xc);
                *(undefined4 *)(iVar2 + 0x30) = uVar3;
                if (*DAT_0041c0e8 != 0) {
                  FUN_00098688();
                  *puVar1 = extraout_r1;
                  puVar1[1] = *(undefined4 *)(extraout_r2_00 + 0x34);
                  uVar8 = extraout_r1;
                  iVar2 = extraout_r2_00;
                }
                *(undefined4 *)(iVar2 + 0x34) = uVar8;
                uVar3 = *(undefined4 *)(iVar2 + 0x2c);
                *(int *)((int)register0x00000054 + -0x2c) = iVar2;
                *(undefined4 *)((int)register0x00000054 + -0x88) = uVar3;
                *(undefined1 **)((int)register0x00000054 + -0x84) =
                     (undefined1 *)((int)register0x00000054 + -0x2c);
                FUN_00018a8c();
              }
              else {
                *(int *)((int)register0x00000054 + -0x10) =
                     *(int *)((int)register0x00000054 + -0x80);
                uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 8);
                uVar8 = *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0xc);
                *(undefined4 *)((int)register0x00000054 + -0x88) =
                     *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 100);
                *(undefined4 *)((int)register0x00000054 + -0x84) = uVar3;
                *(undefined4 *)((int)register0x00000054 + -0x80) = uVar8;
                printerApi_service_k3c___ID__Find();
                uVar3 = *(undefined4 *)((int)register0x00000054 + -0x78);
                iVar2 = *(int *)((int)register0x00000054 + -4);
                *(undefined4 *)(iVar2 + 8) = *(undefined4 *)((int)register0x00000054 + -0x7c);
                *(undefined4 *)(iVar2 + 0xc) = uVar3;
                *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_0041c0c4;
                *(int *)((int)register0x00000054 + -0x84) = iVar2;
                FUN_0001cd7c();
                *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_0041c0c4;
                *(undefined4 *)((int)register0x00000054 + -0x84) =
                     *(undefined4 *)((int)register0x00000054 + -0x80);
                FUN_001707f4();
                if (*(int *)((int)register0x00000054 + -0x74) == 0) {
                  uVar4 = *(uint *)((int)register0x00000054 + -0x78);
                  uVar6 = *(int *)((int)register0x00000054 + -0x7c) + 1;
                  iVar2 = *(int *)((int)register0x00000054 + -0x80);
                  if (uVar4 < uVar6) {
                    *(int *)((int)register0x00000054 + -0x88) = iVar2;
                    *(uint *)((int)register0x00000054 + -0x84) = uVar6;
                    *(uint *)((int)register0x00000054 + -0x80) = uVar4;
                    *(undefined4 *)((int)register0x00000054 + -0x7c) = 1;
                    *(undefined4 *)((int)register0x00000054 + -0x78) = DAT_0041c0e0;
                    FUN_00093524();
                    iVar2 = *(int *)((int)register0x00000054 + -0x74);
                    uVar6 = *(uint *)((int)register0x00000054 + -0x70);
                    uVar4 = *(uint *)((int)register0x00000054 + -0x6c);
                  }
                  *(undefined1 *)(iVar2 + (uVar6 - 1)) = 3;
                  pcVar7 = *(code **)(*(int *)((int)register0x00000054 + -0x10) + 0x28);
                  *(undefined4 *)((int)register0x00000054 + -0x88) =
                       *(undefined4 *)((int)register0x00000054 + -0x30);
                  *(int *)((int)register0x00000054 + -0x84) = iVar2;
                  *(uint *)((int)register0x00000054 + -0x80) = uVar6;
                  *(uint *)((int)register0x00000054 + -0x7c) = uVar4;
                  (*pcVar7)();
                }
                uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0xc) + 0x2c);
                *(int *)((int)register0x00000054 + -0x2c) = *(int *)((int)register0x00000054 + -0xc)
                ;
                *(undefined4 *)((int)register0x00000054 + -0x88) = uVar3;
                *(undefined1 **)((int)register0x00000054 + -0x84) =
                     (undefined1 *)((int)register0x00000054 + -0x2c);
                FUN_00018a8c();
              }
            }
          }
        }
      }
      param_1 = FUN_00098738();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x8c);
      if (bVar11) {
        register0x00000054 = (BADSPACEBASE *)puVar10;
      }
    }
    unaff_lr = 0x41c150;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/service/k3c.(*K3c).handleSubscribeMessage @ 0041c160 (size 556) */

void printerApi_service_k3c___K3c__handleSubscribeMessage(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int extraout_r1;
  int iVar4;
  int extraout_r1_00;
  uint uVar5;
  uint extraout_r2;
  int iVar6;
  int extraout_r3;
  int extraout_r3_00;
  int extraout_r3_01;
  int extraout_r3_02;
  int iVar7;
  undefined4 uVar8;
  int *unaff_r8;
  int unaff_r10;
  undefined8 uVar9;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  int local_34;
  int local_24;
  uint local_20;
  undefined4 local_1c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0001eed8();
  FUN_0016a168();
  if (local_24 == 0) {
    iVar3 = *(int *)(local_34 + 8);
    if (iVar3 == 0) {
      iVar3 = *(int *)(local_34 + 0xc);
    }
    if (iVar3 == 0) {
      return;
    }
    if (*(int *)(iVar3 + 0x78) != 0) {
      FUN_000b3994();
      uVar5 = *(int *)(in_stack_00000004 + 0x9c) + 1;
      iVar6 = *(int *)(in_stack_00000004 + 0x98);
      iVar7 = *(int *)(iVar3 + 0x74);
      uVar8 = *(undefined4 *)(iVar3 + 0x78);
      iVar4 = in_stack_00000004;
      if (*(uint *)(in_stack_00000004 + 0xa0) < uVar5) {
        FUN_00093524();
        *(undefined4 *)(in_stack_00000004 + 0xa0) = local_1c;
        iVar6 = 0;
        iVar4 = in_stack_00000004;
        if (*DAT_0041c39c != 0) {
          FUN_00098688();
          *unaff_r8 = extraout_r1;
          unaff_r8[1] = *(int *)(extraout_r3 + 0x98);
          iVar6 = extraout_r1;
          local_20 = extraout_r2;
          iVar4 = extraout_r3;
        }
        *(int *)(iVar4 + 0x98) = iVar6;
        uVar5 = local_20;
      }
      *(uint *)(iVar4 + 0x9c) = uVar5;
      iVar4 = uVar5 - 1;
      *(undefined4 *)(iVar6 + iVar4 * 8 + 4) = uVar8;
      if (*DAT_0041c39c != 0) {
        FUN_00098688();
        *unaff_r8 = iVar7;
        unaff_r8[1] = *(int *)(extraout_r3_00 + extraout_r1_00 * 8);
        iVar4 = extraout_r1_00;
        iVar6 = extraout_r3_00;
      }
      *(int *)(iVar6 + iVar4 * 8) = iVar7;
      FUN_000b3de4();
    }
    iVar6 = in_stack_00000004;
    if ((*(int **)(iVar3 + 8) != (int *)0x0) &&
       (puVar1 = (undefined4 *)**(int **)(iVar3 + 8), puVar1 != (undefined4 *)0x0)) {
      uVar9 = CONCAT44(iVar3,*puVar1);
      *(undefined4 *)(in_stack_00000004 + 0x6c) = puVar1[1];
      if (*DAT_0041c39c != 0) {
        uVar9 = FUN_00098688();
        *unaff_r8 = (int)uVar9;
        unaff_r8[1] = *(int *)(extraout_r3_01 + 0x68);
        iVar6 = extraout_r3_01;
      }
      iVar3 = (int)((ulonglong)uVar9 >> 0x20);
      *(int *)(iVar6 + 0x68) = (int)uVar9;
    }
    if ((*(int **)(iVar3 + 0xc) != (int *)0x0) &&
       (piVar2 = (int *)**(int **)(iVar3 + 0xc), piVar2 != (int *)0x0)) {
      iVar3 = *piVar2;
      *(int *)(iVar6 + 0x74) = piVar2[1];
      if (*DAT_0041c39c != 0) {
        iVar3 = FUN_00098688();
        *unaff_r8 = iVar3;
        unaff_r8[1] = *(int *)(extraout_r3_02 + 0x70);
        iVar6 = extraout_r3_02;
      }
      *(int *)(iVar6 + 0x70) = iVar3;
    }
  }
  return;
}



/* printerApi/service/k3c.(*K3c).Publish @ 0041c3a0 (size 728) */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void printerApi_service_k3c___K3c__Publish(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *extraout_r2;
  undefined4 uVar3;
  int unaff_r10;
  undefined4 unaff_lr;
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  int **in_stack_0000000c;
  undefined4 *local_88;
  int **local_84;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  int **local_5c;
  int local_58;
  code *local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int *local_44;
  int local_40;
  undefined4 local_3c;
  int **local_38;
  int *local_34;
  undefined4 *local_30;
  undefined1 auStack_10 [12];
  code **local_4;
  
  while (auStack_10 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x41c67c;
    FUN_00096bb8();
  }
  local_4 = (code **)0x0;
  if (*(char *)(in_stack_00000004 + 0xa4) != '\0') {
    FUN_00098a28(0,&local_68,0,0,unaff_lr);
    local_68 = DAT_0041c684;
    local_64 = DAT_0041c688;
    FUN_00093e34();
    FUN_0008a578();
    local_60 = DAT_0041c684;
    local_5c = in_stack_0000000c;
    printerApi_common_logger_Debug();
  }
  local_58 = in_stack_00000004 + 0x3c;
  FUN_000b5240();
  local_54 = DAT_0041c68c;
  local_50 = local_58;
  local_4 = &local_54;
  piVar1 = *(int **)(in_stack_00000004 + 0x54);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  if (iVar2 != 0) {
    FUN_00098a08(0,&local_34,piVar1);
    local_84 = &local_34;
    FUN_0008c560();
    local_88 = extraout_r2;
    while (local_34 != (int *)0x0) {
      piVar1 = (int *)*local_34;
      iVar2 = local_34[1];
      uVar3 = *local_30;
      (*(code *)piVar1[3])();
      if ((char)local_88 == '\0') {
        local_88 = in_stack_00000008;
        local_84 = in_stack_0000000c;
        printerApi_service_k3c___subscriberWorker__publish();
      }
      else {
        (*(code *)piVar1[4])();
        local_3c = 0;
        local_38 = (int **)0x0;
        FUN_0008a578();
        local_3c = DAT_0041c684;
        local_38 = local_84;
        printerApi_common_logger_Infof();
        local_84 = &local_44;
        local_44 = piVar1;
        local_40 = iVar2;
        FUN_0008c0d0();
        local_4c = DAT_0041c698;
        local_88 = &local_4c;
        local_48 = uVar3;
        FUN_000b3f28();
      }
      FUN_0008c7c4();
    }
    (**local_4)();
    return;
  }
  (*DAT_0041c68c)();
  return;
}



/* printerApi/service/k3c.(*K3c).Publish.(*subscriberWorker).close.func1 @ 0041c69c (size 68) */

void printerApi_service_k3c___K3c__Publish___subscriberWorker__close_func1(void)

{
  int unaff_r10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  FUN_00017cc4();
  FUN_00017cc4();
  return;
}



/* printerApi/service/k3c.(*K3c).Publish.deferwrap1 @ 0041c6e0 (size 84) */

void printerApi_service_k3c___K3c__Publish_deferwrap1(void)

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
  FUN_000b536c();
  return;
}



/* printerApi/service/k3c.Publish @ 0041c734 (size 132) */

void printerApi_service_k3c_Publish(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x14) = *DAT_0041c7bc;
      FUN_0009bf4c();
      bVar2 = *(int *)((int)register0x00000054 + -0x10) == DAT_0041c7c0;
      if (bVar2) {
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -8) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        printerApi_service_k3c___K3c__Publish();
        *(undefined1 *)((int)register0x00000054 + 0x10) =
             *(undefined1 *)((int)register0x00000054 + -4);
        return;
      }
      *(int *)((int)register0x00000054 + -0x14) = *(int *)((int)register0x00000054 + -0x10);
      *(int *)((int)register0x00000054 + -0x10) = DAT_0041c7c0;
      *(undefined4 *)((int)register0x00000054 + -0xc) = DAT_0041c7c4;
      unaff_lr = 0x41c7a8;
      uVar3 = FUN_0001cb94();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x18);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_00096bb8((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x41c7b4;
    param_3 = extraout_r2_00;
  } while( true );
}



/* printerApi/service/k3c.(*K3c).IsWorking @ 0041c7c8 (size 144) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c___K3c__IsWorking(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined1 in_stack_00000008;
  int iStack_c;
  char cStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x41c854;
    FUN_00096bb8();
  }
  if (*(int *)(in_stack_00000004 + 0x6c) == 8) {
    iStack_c = _UNK_0041c85c;
    FUN_000150d4();
    if (cStack_4 != '\0') {
      in_stack_00000008 = 1;
                    /* WARNING: Could not recover jumptable at 0x0041c848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  internal_runtime_atomic_Load();
  if (iStack_c != 3) {
    in_stack_00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0041c83c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  in_stack_00000008 = 1;
                    /* WARNING: Could not recover jumptable at 0x0041c830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/k3c.IsWorking @ 0041c860 (size 196) */

void printerApi_service_k3c_IsWorking(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  undefined8 uVar5;
  
  do {
    uVar5 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x14) = *(undefined4 *)PTR_DAT_0041c928;
      FUN_0009bf4c();
      bVar4 = *(undefined **)((int)register0x00000054 + -0x10) == PTR_DAT_0041c92c;
      if (bVar4) break;
      *(undefined **)((int)register0x00000054 + -0x14) =
           *(undefined **)((int)register0x00000054 + -0x10);
      *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_0041c92c;
      *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0041c934;
      unaff_lr = 0x41c914;
      uVar5 = FUN_0001cb94();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x18);
      param_3 = extraout_r2;
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    param_1 = FUN_00096bb8((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x41c920;
    param_3 = extraout_r2_00;
  } while( true );
  iVar2 = *(int *)((int)register0x00000054 + -0xc);
  if (*(int *)(iVar2 + 0x6c) == 8) {
    *(int *)((int)register0x00000054 + -4) = iVar2;
    *(undefined4 *)((int)register0x00000054 + -0x14) = *(undefined4 *)(iVar2 + 0x68);
    *(undefined **)((int)register0x00000054 + -0x10) =
         PTR_s_printingresumingstoppingfinished_00774847_0xa1e_0041c930;
    *(undefined4 *)((int)register0x00000054 + -0xc) = 8;
    FUN_000150d4();
    if (*(char *)((int)register0x00000054 + -8) != '\0') {
      uVar1 = 1;
      goto LAB_0041c8f8;
    }
    iVar2 = *(int *)((int)register0x00000054 + -4);
  }
  *(int *)((int)register0x00000054 + -0x14) = iVar2;
  internal_runtime_atomic_Load();
  if (*(int *)((int)register0x00000054 + -0x10) == 3) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
LAB_0041c8f8:
  *(undefined1 *)((int)register0x00000054 + 4) = uVar1;
  return;
}



/* printerApi/service/k3c.IsBusy @ 0041c938 (size 976) */

void printerApi_service_k3c_IsBusy(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  bool bVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x10) = *(undefined4 *)PTR_DAT_0041cd0c;
      FUN_0009bf4c();
      uVar7 = CONCAT44(PTR_DAT_0041cd10,*(undefined **)((int)register0x00000054 + -0xc));
      uVar6 = 0;
      if (*(undefined **)((int)register0x00000054 + -0xc) == PTR_DAT_0041cd10) {
        if (*(int *)(*(int *)((int)register0x00000054 + -8) + 0x6c) == 8) {
          *(undefined4 *)((int)register0x00000054 + -0x10) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + -8) + 0x68);
          *(undefined **)((int)register0x00000054 + -0xc) =
               PTR_s_printingresumingstoppingfinished_00774847_0xa1e_0041cd14;
          *(undefined4 *)((int)register0x00000054 + -8) = 8;
          FUN_000150d4();
          cVar1 = *(char *)((int)register0x00000054 + -4);
        }
        else {
          cVar1 = '\0';
        }
        if (cVar1 == '\0') {
          uVar3 = *(undefined4 *)PTR_DAT_0041cd0c;
          *(undefined4 *)((int)register0x00000054 + -0x10) = uVar3;
          FUN_0009bf4c(uVar3,PTR_DAT_0041cd10);
          uVar7 = CONCAT44(PTR_DAT_0041cd10,*(undefined **)((int)register0x00000054 + -0xc));
          uVar6 = 0;
          if (*(undefined **)((int)register0x00000054 + -0xc) == PTR_DAT_0041cd10) {
            if (*(int *)(*(int *)((int)register0x00000054 + -8) + 0x6c) == 7) {
              *(undefined4 *)((int)register0x00000054 + -0x10) =
                   *(undefined4 *)(*(int *)((int)register0x00000054 + -8) + 0x68);
              *(undefined **)((int)register0x00000054 + -0xc) =
                   PTR_s_OnPause_secondobjectschannellice_00774847_0x1c5_0041cd18;
              *(undefined4 *)((int)register0x00000054 + -8) = 7;
              FUN_000150d4();
              cVar1 = *(char *)((int)register0x00000054 + -4);
            }
            else {
              cVar1 = '\0';
            }
            goto LAB_0041ca10;
          }
        }
        else {
          cVar1 = '\x01';
LAB_0041ca10:
          if (cVar1 == '\0') {
            uVar3 = *(undefined4 *)PTR_DAT_0041cd0c;
            *(undefined4 *)((int)register0x00000054 + -0x10) = uVar3;
            FUN_0009bf4c(uVar3,PTR_DAT_0041cd10);
            uVar7 = CONCAT44(PTR_DAT_0041cd10,*(undefined **)((int)register0x00000054 + -0xc));
            uVar6 = 0;
            if (*(undefined **)((int)register0x00000054 + -0xc) == PTR_DAT_0041cd10) {
              if ((((*(int *)(*(int *)((int)register0x00000054 + -8) + 0x6c) == 6) &&
                   (pcVar2 = *(char **)(*(int *)((int)register0x00000054 + -8) + 0x68),
                   *pcVar2 == 'p')) && (pcVar2[1] == 'a')) &&
                 (((pcVar2[2] == 'u' && (pcVar2[3] == 's')) && (pcVar2[4] == 'e')))) {
                bVar5 = pcVar2[5] == 'd';
              }
              else {
                bVar5 = false;
              }
              goto LAB_0041caa8;
            }
          }
          else {
            bVar5 = true;
LAB_0041caa8:
            if (bVar5) {
              cVar1 = '\x01';
LAB_0041cb14:
              if (cVar1 == '\0') {
                uVar3 = *(undefined4 *)PTR_DAT_0041cd0c;
                *(undefined4 *)((int)register0x00000054 + -0x10) = uVar3;
                FUN_0009bf4c(uVar3,PTR_DAT_0041cd10);
                uVar7 = CONCAT44(PTR_DAT_0041cd10,*(undefined **)((int)register0x00000054 + -0xc));
                uVar6 = 0;
                if (*(undefined **)((int)register0x00000054 + -0xc) == PTR_DAT_0041cd10) {
                  if (*(int *)(*(int *)((int)register0x00000054 + -8) + 0x6c) == 8) {
                    *(undefined4 *)((int)register0x00000054 + -0x10) =
                         *(undefined4 *)(*(int *)((int)register0x00000054 + -8) + 0x68);
                    *(undefined **)((int)register0x00000054 + -0xc) =
                         PTR_s_levelingOpenLoadextruderai_image_00774847_0xabe_0041cd20;
                    *(undefined4 *)((int)register0x00000054 + -8) = 8;
                    FUN_000150d4();
                    cVar1 = *(char *)((int)register0x00000054 + -4);
                  }
                  else {
                    cVar1 = '\0';
                  }
                  goto LAB_0041cb80;
                }
              }
              else {
                cVar1 = '\x01';
LAB_0041cb80:
                if (cVar1 == '\0') {
                  uVar3 = *(undefined4 *)PTR_DAT_0041cd0c;
                  *(undefined4 *)((int)register0x00000054 + -0x10) = uVar3;
                  FUN_0009bf4c(uVar3,PTR_DAT_0041cd10);
                  uVar7 = CONCAT44(PTR_DAT_0041cd10,*(undefined **)((int)register0x00000054 + -0xc))
                  ;
                  uVar6 = 0;
                  if (*(undefined **)((int)register0x00000054 + -0xc) == PTR_DAT_0041cd10) {
                    if (*(int *)(*(int *)((int)register0x00000054 + -8) + 0x6c) == 9) {
                      *(undefined4 *)((int)register0x00000054 + -0x10) =
                           *(undefined4 *)(*(int *)((int)register0x00000054 + -8) + 0x68);
                      *(undefined **)((int)register0x00000054 + -0xc) =
                           PTR_s_resonanceflow_calistepper_xstepp_0077568d_0x6f6_0041cd24;
                      *(undefined4 *)((int)register0x00000054 + -8) = 9;
                      FUN_000150d4();
                      cVar1 = *(char *)((int)register0x00000054 + -4);
                    }
                    else {
                      cVar1 = '\0';
                    }
                    goto LAB_0041cbec;
                  }
                }
                else {
                  cVar1 = '\x01';
LAB_0041cbec:
                  if (cVar1 != '\0') goto LAB_0041cc54;
                  uVar3 = *(undefined4 *)PTR_DAT_0041cd0c;
                  *(undefined4 *)((int)register0x00000054 + -0x10) = uVar3;
                  FUN_0009bf4c(uVar3,PTR_DAT_0041cd10);
                  uVar6 = *(undefined **)((int)register0x00000054 + -0xc) == PTR_DAT_0041cd10;
                  if ((bool)uVar6) {
                    if (*(int *)(*(int *)((int)register0x00000054 + -8) + 0x6c) == 9) {
                      *(undefined4 *)((int)register0x00000054 + -0x10) =
                           *(undefined4 *)(*(int *)((int)register0x00000054 + -8) + 0x68);
                      *(undefined **)((int)register0x00000054 + -0xc) =
                           PTR_s_flow_calistepper_xstepper_ystepp_0077568d_0x6ff_0041cd28;
                      *(undefined4 *)((int)register0x00000054 + -8) = 9;
                      FUN_000150d4();
                      cVar1 = *(char *)((int)register0x00000054 + -4);
                    }
                    else {
                      cVar1 = '\0';
                    }
                    if (cVar1 == '\0') {
                      *(undefined1 *)((int)register0x00000054 + 4) = 0;
                      return;
                    }
LAB_0041cc54:
                    *(undefined1 *)((int)register0x00000054 + 4) = 1;
                    return;
                  }
                  *(undefined **)((int)register0x00000054 + -0x10) =
                       *(undefined **)((int)register0x00000054 + -0xc);
                  *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0041cd10;
                  *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_0041cd2c;
                  uVar7 = FUN_0001cb94();
                }
                *(undefined8 *)((int)register0x00000054 + -0x10) = uVar7;
                *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_0041cd2c;
                uVar7 = FUN_0001cb94();
              }
              *(undefined8 *)((int)register0x00000054 + -0x10) = uVar7;
              *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_0041cd2c;
              uVar7 = FUN_0001cb94();
            }
            else {
              uVar3 = *(undefined4 *)PTR_DAT_0041cd0c;
              *(undefined4 *)((int)register0x00000054 + -0x10) = uVar3;
              FUN_0009bf4c(uVar3,PTR_DAT_0041cd10);
              uVar7 = CONCAT44(PTR_DAT_0041cd10,*(undefined **)((int)register0x00000054 + -0xc));
              uVar6 = 0;
              if (*(undefined **)((int)register0x00000054 + -0xc) == PTR_DAT_0041cd10) {
                if (*(int *)(*(int *)((int)register0x00000054 + -8) + 0x6c) == 7) {
                  *(undefined4 *)((int)register0x00000054 + -0x10) =
                       *(undefined4 *)(*(int *)((int)register0x00000054 + -8) + 0x68);
                  *(undefined **)((int)register0x00000054 + -0xc) =
                       PTR_s_heatingcontrolled_pin_ac_appunzi_00774847_0x18d_0041cd1c;
                  *(undefined4 *)((int)register0x00000054 + -8) = 7;
                  FUN_000150d4();
                  cVar1 = *(char *)((int)register0x00000054 + -4);
                }
                else {
                  cVar1 = '\0';
                }
                goto LAB_0041cb14;
              }
            }
            *(undefined8 *)((int)register0x00000054 + -0x10) = uVar7;
            *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_0041cd2c;
            uVar7 = FUN_0001cb94();
          }
          *(undefined8 *)((int)register0x00000054 + -0x10) = uVar7;
          *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_0041cd2c;
          uVar7 = FUN_0001cb94();
        }
        *(undefined8 *)((int)register0x00000054 + -0x10) = uVar7;
        *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_0041cd2c;
        uVar7 = FUN_0001cb94();
      }
      *(undefined8 *)((int)register0x00000054 + -0x10) = uVar7;
      *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_0041cd2c;
      param_1 = FUN_0001cb94();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x14);
      if ((bool)uVar6) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x41cd04;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/service/k3c.init.0 @ 0041cd30 (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_init_0(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x41cd70;
    FUN_00096bb8();
  }
  printerApi_service_k3c_NewK3C();
  FUN_0009bfe4();
                    /* WARNING: Could not recover jumptable at 0x0041cd64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/k3c.(*K3c).GetResponses @ 0041cd80 (size 184) */

void printerApi_service_k3c___K3c__GetResponses(void)

{
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_000b3994();
  FUN_000933e8();
  FUN_0008ed10();
  *(undefined4 *)(in_stack_00000004 + 0x9c) = 0;
  FUN_000b3de4();
  return;
}



/* printerApi/service/k3c.GetResponses @ 0041ce40 (size 124) */

void printerApi_service_k3c_GetResponses(undefined4 param_1)

{
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x10) = *DAT_0041cec0;
      FUN_0009bf4c();
      bVar2 = *(int *)((int)register0x00000054 + -0xc) == DAT_0041cec4;
      if (bVar2) {
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + -8);
        printerApi_service_k3c___K3c__GetResponses();
        *(undefined4 *)((int)register0x00000054 + 4) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        *(undefined4 *)((int)register0x00000054 + 8) = *(undefined4 *)((int)register0x00000054 + -8)
        ;
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -4);
        return;
      }
      *(int *)((int)register0x00000054 + -0x10) = *(int *)((int)register0x00000054 + -0xc);
      *(int *)((int)register0x00000054 + -0xc) = DAT_0041cec4;
      *(undefined4 *)((int)register0x00000054 + -8) = DAT_0041cec8;
      param_1 = FUN_0001cb94();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x14);
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    unaff_lr = 0x41ceb8;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/service/k3c.PublishLocalPrintStatus @ 0041cecc (size 1056) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_PublishLocalPrintStatus(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar5;
  undefined **in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined **ppuStack_78;
  undefined **ppuStack_74;
  undefined **ppuStack_70;
  uint uStack_6c;
  undefined4 *puStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  int iStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_3c;
  undefined **ppuStack_38;
  undefined **ppuStack_34;
  undefined **ppuStack_30;
  undefined *puStack_2c;
  undefined *puStack_28;
  undefined *puStack_24;
  undefined4 *puStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 auStack_14 [20];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x41d2e8;
    FUN_00096bb8();
  }
  FUN_0008b6b8();
  ppuStack_74 = ppuStack_78;
  ppuStack_40 = ppuStack_78;
  ppuStack_78 = (undefined **)PTR_DAT_0041d2f0;
  ppuStack_70 = (undefined **)PTR_DAT_0041d2f4;
  uStack_6c = 6;
  FUN_0008e7bc();
  puVar1 = PTR_SUB_0041d2f8;
  *puStack_68 = PTR_SUB_0041d2f8;
  puVar2 = puStack_68;
  if (*(int *)PTR_DAT_0041d2fc != 0) {
    puVar2 = (undefined4 *)FUN_00098678(puStack_68,puVar1,puStack_68[1]);
    *unaff_r8 = extraout_r2;
  }
  puVar2[1] = PTR_DAT_0041d300;
  FUN_0008b6b8();
  ppuStack_30 = ppuStack_78;
  uVar3 = FUN_0010cf30();
  uVar3 = FUN_00098e14(uVar3,&ppuStack_78,auStack_14);
  FUN_00098e14(uVar3,auStack_14,&uStack_54);
  if ((uStack_50 & 0x80000000) != 0) {
    uVar4 = (uStack_54 & 0x7fffffff) >> 0x1e | (uStack_54 >> 0x1f | uStack_50 << 1) << 1;
    uStack_4c = uVar4 + _UNK_0041d304;
    iStack_48 = ((uStack_50 & 0x7fffffff) >> 0x1e) + 0xd + (uint)CARRY4(uVar4,_UNK_0041d304);
  }
  ppuStack_78 = (undefined **)(uStack_4c + _UNK_0041d308);
  ppuStack_74 = (undefined **)(iStack_48 + -0xf + (uint)CARRY4(uStack_4c,_UNK_0041d308));
  FUN_0008695c();
  uStack_5c = CONCAT44(uStack_6c,ppuStack_70);
  ppuStack_78 = ppuStack_70;
  ppuStack_74 = (undefined **)uStack_6c;
  FUN_0008a4bc();
  ppuStack_34 = ppuStack_70;
  ppuStack_78 = (undefined **)PTR_DAT_0041d2f0;
  ppuStack_74 = ppuStack_30;
  ppuStack_70 = (undefined **)PTR_s_eventtimeNot_Foundform_dataassis_0077568d_0x7b3_0041d30c;
  uStack_6c = 9;
  FUN_0008e7bc();
  *puStack_68 = PTR_DAT_0041d310;
  puVar2 = puStack_68;
  if (*(int *)PTR_DAT_0041d2fc != 0) {
    puVar2 = (undefined4 *)FUN_00098688();
    *unaff_r8 = ppuStack_34;
    unaff_r8[1] = puVar2[1];
  }
  puVar2[1] = ppuStack_34;
  FUN_0008b6b8();
  ppuStack_38 = ppuStack_78;
  FUN_0008b6b8();
  ppuStack_3c = ppuStack_78;
  ppuStack_78 = in_stack_00000004;
  ppuStack_74 = (undefined **)in_stack_00000008;
  FUN_0008a578();
  ppuStack_34 = ppuStack_70;
  ppuStack_78 = (undefined **)PTR_DAT_0041d2f0;
  ppuStack_74 = ppuStack_3c;
  ppuStack_70 = (undefined **)PTR_DAT_0041d314;
  uStack_6c = 5;
  FUN_0008e7bc();
  *puStack_68 = PTR_SUB_0041d2f8;
  puVar2 = puStack_68;
  if (*(int *)PTR_DAT_0041d2fc != 0) {
    puVar2 = (undefined4 *)FUN_00098688();
    *unaff_r8 = ppuStack_34;
    unaff_r8[1] = puVar2[1];
  }
  puVar2[1] = ppuStack_34;
  ppuStack_78 = (undefined **)PTR_DAT_0041d2f0;
  ppuStack_74 = ppuStack_38;
  ppuStack_70 = (undefined **)PTR_DAT_0041d318;
  uStack_6c = 0xb;
  FUN_0008e7bc();
  uVar5 = CONCAT44(PTR_DAT_0041d2f0,puStack_68);
  *puStack_68 = PTR_DAT_0041d2f0;
  if (*(int *)PTR_DAT_0041d2fc != 0) {
    uVar5 = FUN_00098688();
    *unaff_r8 = ppuStack_3c;
    unaff_r8[1] = *(undefined4 *)((int)uVar5 + 4);
  }
  ppuStack_78 = (undefined **)((ulonglong)uVar5 >> 0x20);
  *(undefined ***)((int)uVar5 + 4) = ppuStack_3c;
  ppuStack_74 = ppuStack_30;
  ppuStack_70 = (undefined **)PTR_DAT_0041d31c;
  uStack_6c = 6;
  FUN_0008e7bc();
  uVar5 = CONCAT44(PTR_DAT_0041d2f0,puStack_68);
  *puStack_68 = PTR_DAT_0041d2f0;
  if (*(int *)PTR_DAT_0041d2fc != 0) {
    uVar5 = FUN_00098688();
    *unaff_r8 = ppuStack_38;
    unaff_r8[1] = *(undefined4 *)((int)uVar5 + 4);
  }
  ppuStack_78 = (undefined **)((ulonglong)uVar5 >> 0x20);
  *(undefined ***)((int)uVar5 + 4) = ppuStack_38;
  ppuStack_74 = ppuStack_40;
  ppuStack_70 = (undefined **)PTR_DAT_0041d320;
  uStack_6c = 6;
  FUN_0008e7bc();
  uVar5 = CONCAT44(PTR_DAT_0041d2f0,puStack_68);
  *puStack_68 = PTR_DAT_0041d2f0;
  if (*(int *)PTR_DAT_0041d2fc != 0) {
    uVar5 = FUN_00098688();
    *unaff_r8 = ppuStack_30;
    unaff_r8[1] = *(undefined4 *)((int)uVar5 + 4);
  }
  ppuStack_78 = (undefined **)((ulonglong)uVar5 >> 0x20);
  *(undefined ***)((int)uVar5 + 4) = ppuStack_30;
  ppuStack_74 = ppuStack_40;
  FUN_001707f4();
  if (iStack_64 == 0) {
    ppuStack_78 = ppuStack_70;
    ppuStack_74 = (undefined **)uStack_6c;
    ppuStack_70 = (undefined **)puStack_68;
    printerApi_service_k3c_Publish();
    if ((uStack_6c & 0xff) == 0) {
      FUN_00098a28(0,&puStack_2c);
      puStack_2c = PTR_SUB_0041d2f8;
      puStack_28 = PTR_DAT_0041d328;
      ppuStack_78 = in_stack_00000004;
      ppuStack_74 = (undefined **)in_stack_00000008;
      FUN_0008a578();
      puStack_24 = PTR_SUB_0041d2f8;
      puStack_20 = ppuStack_70;
      ppuStack_78 = &puStack_2c;
      ppuStack_74 = (undefined **)0x2;
      ppuStack_70 = (undefined **)0x2;
      printerApi_common_logger_Debug();
                    /* WARNING: Could not recover jumptable at 0x0041d2dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0041d280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  uStack_1c = *(undefined4 *)(iStack_64 + 4);
  uStack_18 = uStack_60;
  ppuStack_78 = (undefined **)PTR_DAT_0041d324;
  ppuStack_74 = (undefined **)0x29;
  ppuStack_70 = (undefined **)&uStack_1c;
  uStack_6c = 1;
  puStack_68 = (undefined4 *)0x1;
  printerApi_common_logger_Errorf();
                    /* WARNING: Could not recover jumptable at 0x0041d254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/k3c.(*ID).Lock @ 0041d32c (size 88) */

void printerApi_service_k3c___ID__Lock(void)

{
  int *piVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x41d364;
    FUN_00096bb8();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_4;
  }
  uStack_4 = in_stack_00000004;
  FUN_000b3994();
                    /* WARNING: Could not recover jumptable at 0x0041d358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/k3c.(*ID).TryLock @ 0041d384 (size 96) */

void printerApi_service_k3c___ID__TryLock(void)

{
  int *piVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined1 in_stack_00000008;
  undefined4 uStack_8;
  undefined1 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x41d3c4;
    FUN_00096bb8();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_8;
  }
  uStack_8 = in_stack_00000004;
  FUN_000b39f0();
  in_stack_00000008 = uStack_4;
                    /* WARNING: Could not recover jumptable at 0x0041d3b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/k3c.(*ID).Unlock @ 0041d3e4 (size 88) */

void printerApi_service_k3c___ID__Unlock(void)

{
  int *piVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x41d41c;
    FUN_00096bb8();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_4;
  }
  uStack_4 = in_stack_00000004;
  FUN_000b3de4();
                    /* WARNING: Could not recover jumptable at 0x0041d410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/k3c.(*K3c).handleSubscriberError-fm @ 0041d43c (size 116) */

void printerApi_service_k3c___K3c__handleSubscriberError_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_14;
  }
  uStack_14 = *(undefined4 *)(unaff_r7 + 4);
  uStack_10 = in_stack_00000004;
  uStack_c = in_stack_00000008;
  uStack_8 = in_stack_0000000c;
  uStack_4 = in_stack_00000010;
  printerApi_service_k3c___K3c__handleSubscriberError();
  return;
}



