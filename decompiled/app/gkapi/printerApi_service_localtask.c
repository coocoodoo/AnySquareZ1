// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/service/localtask   functions: 10
/* printerApi/service/localtask.(*UILocalTaskContext).Set @ 0065f1b4 (size 364) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_localtask___UILocalTaskContext__Set(void)

{
  undefined4 *extraout_r1;
  undefined4 *puVar1;
  undefined4 extraout_r1_00;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 uStack_18;
  undefined4 uStack_10;
  undefined4 *puStack_c;
  undefined4 *puStack_8;
  undefined4 *puStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x65f324;
    FUN_00096bb8();
  }
  puStack_4 = (undefined4 *)0x0;
  puStack_8 = in_stack_00000004 + 9;
  FUN_000b3994();
  uStack_10 = _UNK_0065f32c;
  puStack_c = puStack_8;
  puStack_4 = &uStack_10;
  in_stack_00000004[1] = in_stack_0000000c;
  puVar1 = in_stack_00000004;
  if (*_UNK_0065f330 != 0) {
    FUN_000986e8();
    *unaff_r8 = in_stack_00000008;
    unaff_r8[1] = *extraout_r1;
    unaff_r8[2] = in_stack_00000010;
    unaff_r8[3] = extraout_r1[2];
    unaff_r8[4] = in_stack_00000018;
    unaff_r8[5] = extraout_r1[4];
    unaff_r8[6] = in_stack_00000020;
    unaff_r8[7] = extraout_r1[6];
    puVar1 = extraout_r1;
  }
  *puVar1 = in_stack_00000008;
  puVar1[3] = in_stack_00000014;
  puVar1[2] = in_stack_00000010;
  puVar1[5] = in_stack_0000001c;
  puVar1[4] = in_stack_00000018;
  puVar1[6] = in_stack_00000020;
  puVar1[7] = 0;
  if (puVar1[8] == 0) {
    FUN_00017058();
    if (*_UNK_0065f330 != 0) {
      FUN_00098688();
      *unaff_r8 = extraout_r1_00;
      unaff_r8[1] = in_stack_00000004[8];
      uStack_18 = extraout_r1_00;
    }
    in_stack_00000004[8] = uStack_18;
  }
  (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0065f310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/localtask.(*UILocalTaskContext).Set.deferwrap1 @ 0065f338 (size 84) */

void printerApi_service_localtask___UILocalTaskContext__Set_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x65f36c;
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_4;
  }
  uStack_4 = *(undefined4 *)(unaff_r7 + 4);
  FUN_000b3de4();
                    /* WARNING: Could not recover jumptable at 0x0065f360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/localtask.(*UILocalTaskContext).Reset @ 0065f38c (size 344) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_localtask___UILocalTaskContext__Reset(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 *in_stack_00000004;
  undefined4 uStack_c;
  undefined4 *puStack_8;
  undefined4 *puStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x65f4e8;
    FUN_00096bb8();
  }
  puStack_4 = (undefined4 *)0x0;
  puVar3 = in_stack_00000004 + 9;
  FUN_000b3994();
  uStack_c = _UNK_0065f4f0;
  puStack_4 = &uStack_c;
  puVar1 = in_stack_00000004;
  puStack_8 = puVar3;
  if ((undefined4 *)in_stack_00000004[6] != (undefined4 *)0x0) {
    (**(code **)in_stack_00000004[6])();
    puVar1 = in_stack_00000004;
    if (*_UNK_0065f4f4 != 0) {
      uVar4 = FUN_00098678(in_stack_00000004,in_stack_00000004[6]);
      *unaff_r8 = (int)((ulonglong)uVar4 >> 0x20);
      puVar1 = (undefined4 *)uVar4;
    }
    puVar1[6] = 0;
  }
  if (puVar1[8] != 0) {
    FUN_00017cc4();
    puVar1 = in_stack_00000004;
    if (*_UNK_0065f4f4 != 0) {
      uVar4 = FUN_00098678(in_stack_00000004,in_stack_00000004[8]);
      *unaff_r8 = (int)((ulonglong)uVar4 >> 0x20);
      puVar1 = (undefined4 *)uVar4;
    }
    puVar1[8] = 0;
  }
  uVar5 = ZEXT48(puVar1);
  puVar1[1] = 0;
  if (*_UNK_0065f4f4 != 0) {
    uVar5 = FUN_00098698(puVar1,0,*puVar1);
    *unaff_r8 = extraout_r2;
    unaff_r8[1] = *(undefined4 *)((int)uVar5 + 8);
    unaff_r8[2] = *(undefined4 *)((int)uVar5 + 0x10);
  }
  uVar2 = (undefined4)(uVar5 >> 0x20);
  puVar1 = (undefined4 *)uVar5;
  *puVar1 = 0;
  puVar1[3] = uVar2;
  puVar1[2] = 0;
  puVar1[5] = uVar2;
  puVar1[4] = 0;
  puVar1[7] = uVar2;
  (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0065f4d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/localtask.(*UILocalTaskContext).Reset.deferwrap1 @ 0065f4f8 (size 84) */

void printerApi_service_localtask___UILocalTaskContext__Reset_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x65f52c;
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_4;
  }
  uStack_4 = *(undefined4 *)(unaff_r7 + 4);
  FUN_000b3de4();
                    /* WARNING: Could not recover jumptable at 0x0065f520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/localtask.(*UILocalTaskContext).WithLock @ 0065f54c (size 248) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_localtask___UILocalTaskContext__WithLock(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 uStack_10;
  int iStack_c;
  int iStack_8;
  undefined4 *puStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x65f648;
    FUN_00096bb8();
  }
  puStack_4 = (undefined4 *)0x0;
  in_stack_0000000c = 0;
  in_stack_00000010 = 0;
  if (in_stack_00000008 != (undefined4 *)0x0) {
    iStack_8 = in_stack_00000004 + 0x24;
    FUN_000b3994();
    uStack_10 = _UNK_0065f650;
    iStack_c = iStack_8;
    puStack_4 = &uStack_10;
    (*(code *)*in_stack_00000008)();
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0065f5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_00130144();
                    /* WARNING: Could not recover jumptable at 0x0065f634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/service/localtask.(*UILocalTaskContext).WithLock.deferwrap1 @ 0065f658 (size 84) */

void printerApi_service_localtask___UILocalTaskContext__WithLock_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x65f68c;
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_4;
  }
  uStack_4 = *(undefined4 *)(unaff_r7 + 4);
  FUN_000b3de4();
                    /* WARNING: Could not recover jumptable at 0x0065f680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/localtask.(*UILocalTaskContext).UpdateProgress @ 0065f6ac (size 196) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_localtask___UILocalTaskContext__UpdateProgress(void)

{
  int iVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined4 uStack_10;
  int iStack_c;
  int iStack_8;
  undefined4 *puStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x65f774;
    FUN_00096bb8();
  }
  puStack_4 = (undefined4 *)0x0;
  iStack_8 = in_stack_00000004 + 0x24;
  FUN_000b3994();
  uStack_10 = _UNK_0065f77c;
  iStack_c = iStack_8;
  puStack_4 = &uStack_10;
  if (in_stack_00000008 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = in_stack_00000008;
    if (100 < in_stack_00000008) {
      iVar1 = 100;
    }
  }
  *(int *)(in_stack_00000004 + 0x1c) = iVar1;
  if (*(int *)(in_stack_00000004 + 0x20) != 0) {
    FUN_00018a8c();
  }
  (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0065f760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/localtask.(*UILocalTaskContext).UpdateProgress.deferwrap1 @ 0065f780 (size 84) */

void printerApi_service_localtask___UILocalTaskContext__UpdateProgress_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x65f7b4;
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_4;
  }
  uStack_4 = *(undefined4 *)(unaff_r7 + 4);
  FUN_000b3de4();
                    /* WARNING: Could not recover jumptable at 0x0065f7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/localtask.(*UILocalTaskContext).GetInfo @ 0065f7d4 (size 252) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void printerApi_service_localtask___UILocalTaskContext__GetInfo(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  int in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined1 in_stack_00000020;
  code *pcStack_10;
  undefined4 *puStack_c;
  undefined4 *puStack_8;
  code **ppcStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x65f8d4;
    FUN_00096bb8();
  }
  ppcStack_4 = (code **)0x0;
  in_stack_00000008 = 0;
  in_stack_0000000c = 0;
  in_stack_00000010 = 0;
  in_stack_00000014 = 0;
  in_stack_00000018 = 0;
  in_stack_0000001c = 0;
  in_stack_00000020 = 0;
  puStack_8 = in_stack_00000004 + 9;
  FUN_000b3994();
  pcStack_10 = _UNK_0065f8dc;
  puStack_c = puStack_8;
  ppcStack_4 = &pcStack_10;
  in_stack_0000000c = in_stack_00000004[1];
  if (in_stack_0000000c == 0) {
    in_stack_00000020 = false;
  }
  else {
    in_stack_00000020 = in_stack_00000004[3] != 0;
  }
  in_stack_00000010 = in_stack_00000004[2];
  in_stack_00000014 = in_stack_00000004[3];
  in_stack_00000018 = in_stack_00000004[4];
  in_stack_0000001c = in_stack_00000004[5];
  in_stack_00000008 = *in_stack_00000004;
  (*_UNK_0065f8dc)();
                    /* WARNING: Could not recover jumptable at 0x0065f8c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/localtask.(*UILocalTaskContext).GetInfo.deferwrap1 @ 0065f8e0 (size 84) */

void printerApi_service_localtask___UILocalTaskContext__GetInfo_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x65f914;
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_4;
  }
  uStack_4 = *(undefined4 *)(unaff_r7 + 4);
  FUN_000b3de4();
                    /* WARNING: Could not recover jumptable at 0x0065f908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



