// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/service/event   functions: 17
/* printerApi/service/event.init @ 0049b188 (size 84) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_event_init(void)

{
  undefined4 extraout_r1;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x49b1d8;
    FUN_00096bb8();
  }
  FUN_0008b6b8();
  if (*_UNK_0049b1e0 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r1;
    unaff_r8[1] = *_UNK_0049b1e4;
    uStack_4 = extraout_r1;
  }
  *_UNK_0049b1e4 = uStack_4;
                    /* WARNING: Could not recover jumptable at 0x0049b1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/event.(*Dispatcher).RegisterEvent @ 0049b1e8 (size 440) */

void printerApi_service_event___Dispatcher__RegisterEvent(void)

{
  int *piVar1;
  int iVar2;
  int extraout_r1;
  uint extraout_r2;
  uint uVar3;
  int *extraout_r3;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  int in_stack_00000014;
  int *piStack_20;
  int iStack_1c;
  uint uStack_18;
  int iStack_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x49b39c;
    FUN_00096bb8();
  }
  (**(code **)(in_stack_00000008 + 0xc))();
  FUN_0008e314();
  if ((char)iStack_1c == '\0') {
    FUN_0008e7bc();
    piStack_20[1] = 0;
    piStack_20[2] = 0;
    piVar1 = piStack_20;
    if (*(int *)PTR_DAT_0049b3a8 != 0) {
      uVar4 = FUN_00098678(piStack_20,*piStack_20);
      piVar1 = (int *)uVar4;
      *unaff_r8 = (int)((ulonglong)uVar4 >> 0x20);
    }
    *piVar1 = (int)PTR_DAT_0049b3ac;
  }
  FUN_0008e7bc();
  uVar3 = piStack_20[1] + 1U;
  iVar2 = *piStack_20;
  if ((uint)piStack_20[2] < piStack_20[1] + 1U) {
    FUN_00093524();
    piStack_20[2] = iStack_14;
    if (*(int *)PTR_DAT_0049b3a8 != 0) {
      FUN_00098688();
      *unaff_r8 = extraout_r1;
      unaff_r8[1] = *extraout_r3;
      iStack_1c = extraout_r1;
      uStack_18 = extraout_r2;
      piStack_20 = extraout_r3;
    }
    *piStack_20 = iStack_1c;
    uVar3 = uStack_18;
    iVar2 = iStack_1c;
  }
  piStack_20[1] = uVar3;
  *(undefined4 *)(iVar2 + (uVar3 - 1) * 8) = in_stack_00000010;
  iVar2 = iVar2 + (uVar3 - 1) * 8;
  if (*(int *)PTR_DAT_0049b3a8 != 0) {
    iVar2 = FUN_00098688();
    *unaff_r8 = in_stack_00000014;
    unaff_r8[1] = *(int *)(iVar2 + 4);
  }
  *(int *)(iVar2 + 4) = in_stack_00000014;
                    /* WARNING: Could not recover jumptable at 0x0049b390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/event.(*Dispatcher).Dispatch @ 0049b3b4 (size 220) */

void printerApi_service_event___Dispatcher__Dispatch(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_r10;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  char local_1c;
  int *local_14;
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  (**(code **)(in_stack_00000008 + 0xc))();
  FUN_0008e314();
  if (local_10 != '\0') {
    iVar2 = *local_14;
    iVar1 = local_14[1];
    iVar3 = 0;
    while( true ) {
      if (iVar1 <= iVar3) {
        return;
      }
      (**(code **)(*(int *)(iVar2 + iVar3 * 8) + 0xc))();
      if (local_1c != '\0') break;
      iVar3 = iVar3 + 1;
    }
    return;
  }
  return;
}



/* printerApi/service/event.HandleFunc.Handle @ 0049b498 (size 68) */

void printerApi_service_event_HandleFunc_Handle(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined1 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x49b4d8;
    FUN_00096bb8();
  }
  (*(code *)*in_stack_00000004)();
                    /* WARNING: Could not recover jumptable at 0x0049b4cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/event.BaseEvent.GetName @ 0049b4dc (size 20) */

void printerApi_service_event_BaseEvent_GetName(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 uStack0000000c;
  undefined4 uStack00000010;
  
  uStack0000000c = in_stack_00000004;
  uStack00000010 = in_stack_00000008;
                    /* WARNING: Could not recover jumptable at 0x0049b4ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/event.UILanuchPrintEvt.GetName @ 0049b4f0 (size 20) */

void printerApi_service_event_UILanuchPrintEvt_GetName(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 uStack00000034;
  undefined4 uStack00000038;
  
  uStack00000034 = in_stack_00000004;
  uStack00000038 = in_stack_00000008;
                    /* WARNING: Could not recover jumptable at 0x0049b500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/event.UILanuchPrintEvt.WithGcode @ 0049b504 (size 72) */

void printerApi_service_event_UILanuchPrintEvt_WithGcode(void)

{
  undefined4 uVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x49b548;
    FUN_00096bb8();
  }
  uVar1 = FUN_00098a08(0,&stack0x0000003c);
  in_stack_0000000c = in_stack_00000034;
  in_stack_00000010 = in_stack_00000038;
  FUN_00098ddc(uVar1,&stack0x00000004,&stack0x0000003c);
                    /* WARNING: Could not recover jumptable at 0x0049b53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/event.UILanuchPrintEvt.WithLocal3MF @ 0049b54c (size 120) */

void printerApi_service_event_UILanuchPrintEvt_WithLocal3MF(void)

{
  undefined4 uVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x49b5c0;
    FUN_00096bb8();
  }
  uVar1 = FUN_00098a08(0,&stack0x00000054);
  in_stack_00000014 = in_stack_00000034;
  in_stack_00000018 = in_stack_00000038;
  in_stack_0000001c = in_stack_0000003c;
  in_stack_00000020 = in_stack_00000040;
  in_stack_00000024 = in_stack_00000044;
  in_stack_00000028 = in_stack_00000048;
  in_stack_00000030 = in_stack_0000004c;
  in_stack_0000002c = in_stack_00000050;
  FUN_00098ddc(uVar1,&stack0x00000004,&stack0x00000054);
                    /* WARNING: Could not recover jumptable at 0x0049b5b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/event.StatusEvt.WithStatus @ 0049b5c4 (size 36) */

void printerApi_service_event_StatusEvt_WithStatus(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 uStack0000001c;
  undefined4 uStack00000020;
  undefined4 uStack00000024;
  undefined4 uStack00000028;
  
  uStack0000001c = in_stack_00000004;
  uStack00000020 = in_stack_00000008;
  uStack00000024 = in_stack_00000014;
  uStack00000028 = in_stack_00000018;
                    /* WARNING: Could not recover jumptable at 0x0049b5e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/event.(*UILanuchPrintEvt).GetName @ 0049b5e8 (size 116) */

void printerApi_service_event___UILanuchPrintEvt__GetName(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x34);
      *(undefined4 *)((int)register0x00000054 + -0x34) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x30);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098ddc(param_1,*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + -0x30));
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x30);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x2c);
                    /* WARNING: Could not recover jumptable at 0x0049b628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x34))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x34);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x49b63c;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/service/event.(*UILanuchPrintEvt).WithGcode @ 0049b65c (size 140) */

void printerApi_service_event___UILanuchPrintEvt__WithGcode(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x34);
      *(undefined4 *)((int)register0x00000054 + -0x34) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)((int)register0x00000054 + -0x30);
      }
      uVar1 = FUN_00098a08(0,(undefined1 *)((int)register0x00000054 + 0x10));
      bVar4 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar4) {
        FUN_00098ddc(uVar1,*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + -0x30));
        *(undefined4 *)((int)register0x00000054 + -0x28) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x24) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_00098ddc(*(undefined4 *)((int)register0x00000054 + 0xc),
                     (undefined1 *)((int)register0x00000054 + -0x30),
                     (undefined1 *)((int)register0x00000054 + 0x10));
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x34);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x49b6c8;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/service/event.(*UILanuchPrintEvt).WithLocal3MF @ 0049b6e8 (size 188) */

void printerApi_service_event___UILanuchPrintEvt__WithLocal3MF(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x34);
      *(undefined4 *)((int)register0x00000054 + -0x34) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)((int)register0x00000054 + -0x30);
      }
      uVar1 = FUN_00098a08(0,(undefined1 *)((int)register0x00000054 + 0x28));
      bVar4 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar4) {
        FUN_00098ddc(uVar1,*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + -0x30));
        *(undefined4 *)((int)register0x00000054 + -0x20) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)((int)register0x00000054 + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + 0x14);
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + 0x18);
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x1c);
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        *(undefined4 *)((int)register0x00000054 + -8) =
             *(undefined4 *)((int)register0x00000054 + 0x24);
        FUN_00098ddc(*(undefined4 *)((int)register0x00000054 + 0x24),
                     (undefined1 *)((int)register0x00000054 + -0x30),
                     (undefined1 *)((int)register0x00000054 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x0049b770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x34))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x34);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x49b784;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/service/event.(*BaseEvent).GetName @ 0049b7a4 (size 108) */

void printerApi_service_event___BaseEvent__GetName(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  bool bVar5;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -4);
      *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)register0x00000054;
      }
      puVar1 = *(undefined4 **)((int)register0x00000054 + 4);
      bVar5 = puVar1 == (undefined4 *)0x0;
      if (!bVar5) {
        uVar3 = puVar1[1];
        *(undefined4 *)((int)register0x00000054 + 8) = *puVar1;
        *(undefined4 *)((int)register0x00000054 + 0xc) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0049b7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -4))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -4);
      if (bVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x49b7f0;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/service/event.StatusEvt.GetName @ 0049b810 (size 20) */

void printerApi_service_event_StatusEvt_GetName(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 uStack00000014;
  undefined4 uStack00000018;
  
  uStack00000014 = in_stack_00000004;
  uStack00000018 = in_stack_00000008;
                    /* WARNING: Could not recover jumptable at 0x0049b820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/event.(*StatusEvt).GetName @ 0049b824 (size 24) */

void printerApi_service_event___StatusEvt__GetName(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  uStack0000000c = in_stack_00000004[1];
  uStack00000008 = *in_stack_00000004;
                    /* WARNING: Could not recover jumptable at 0x0049b838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/event.(*StatusEvt).WithStatus @ 0049b83c (size 124) */

void printerApi_service_event___StatusEvt__WithStatus(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  bool bVar5;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -4);
      *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)register0x00000054;
      }
      puVar1 = *(undefined4 **)((int)register0x00000054 + 4);
      bVar5 = puVar1 == (undefined4 *)0x0;
      if (!bVar5) {
        uVar3 = puVar1[1];
        *(undefined4 *)((int)register0x00000054 + 0x10) = *puVar1;
        *(undefined4 *)((int)register0x00000054 + 0x14) = uVar3;
        *(undefined4 *)((int)register0x00000054 + 0x18) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + 0x1c) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
                    /* WARNING: Could not recover jumptable at 0x0049b884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -4))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -4);
      if (bVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x49b898;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/service/event.(*HandleFunc).Handle @ 0049b8b8 (size 128) */

void printerApi_service_event___HandleFunc__Handle(undefined4 param_1)

{
  code *pcVar1;
  int *piVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)((int)register0x00000054 + -0xc);
      }
      bVar4 = *(undefined4 **)((int)register0x00000054 + 4) == (undefined4 *)0x0;
      if (!bVar4) {
        pcVar1 = *(code **)**(undefined4 **)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -8) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        (*pcVar1)();
        *(undefined1 *)((int)register0x00000054 + 0x10) =
             *(undefined1 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0049b904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x49b918;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



