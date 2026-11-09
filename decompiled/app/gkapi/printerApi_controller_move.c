// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/controller/move   functions: 55
/* printerApi/controller/move.MoveController.SetMoveAllZero @ 006548e4 (size 312) */

void printerApi_controller_move_MoveController_SetMoveAllZero(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *local_18;
  char local_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
  printerApi_cloud_ReportWorkBusyStatus(0);
  uVar2 = in_stack_00000008;
  uVar1 = in_stack_00000004;
  FUN_0008e314();
  if (local_14 != '\0') {
    uVar1 = *local_18;
    uVar2 = local_18[1];
  }
  in_stack_00000004 = uVar1;
  in_stack_00000008 = uVar2;
  FUN_0001cd7c();
  printerApi_service_k3c_Call();
  if (local_18 != (undefined4 *)0x0) {
    printerApi_controller_move_MoveController_SetMoveAllZero_deferwrap1();
    return;
  }
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
  printerApi_controller_move_MoveController_SetMoveAllZero_deferwrap1();
  return;
}



/* printerApi/controller/move.ReportWorkFreeStatus @ 00654a3c (size 44) */

void printerApi_controller_move_ReportWorkFreeStatus(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x654a64;
    FUN_00096bb8();
  }
  printerApi_cloud_ReportWorkFreeStatus();
                    /* WARNING: Could not recover jumptable at 0x00654a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/move.MoveController.SetMoveXAxis @ 00654a68 (size 440) */

void printerApi_controller_move_MoveController_SetMoveXAxis(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *local_2c;
  char local_28;
  undefined4 *local_24;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
  printerApi_cloud_ReportWorkBusyStatus(0);
  uVar2 = in_stack_00000008;
  uVar1 = in_stack_00000004;
  FUN_0008e314();
  if (local_28 != '\0') {
    uVar1 = *local_2c;
    uVar2 = local_2c[1];
  }
  in_stack_00000004 = uVar1;
  in_stack_00000008 = uVar2;
  FUN_00155144();
  FUN_0001cd7c();
  printerApi_service_k3c_CallContext();
  if (local_24 != (undefined4 *)0x0) {
    (*(code *)*local_24)();
    printerApi_controller_move_MoveController_SetMoveXAxis_deferwrap1();
    return;
  }
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
  (*pcRam00000000)();
  printerApi_controller_move_MoveController_SetMoveXAxis_deferwrap1();
  return;
}



/* printerApi/controller/move.MoveController.SetMoveYAxis @ 00654c4c (size 440) */

void printerApi_controller_move_MoveController_SetMoveYAxis(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *puStack_2c;
  char cStack_28;
  undefined4 *puStack_24;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x654e08;
    FUN_00096bb8();
  }
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
  printerApi_cloud_ReportWorkBusyStatus(0);
  uVar2 = in_stack_00000008;
  uVar1 = in_stack_00000004;
  FUN_0008e314();
  if (cStack_28 != '\0') {
    uVar1 = *puStack_2c;
    uVar2 = puStack_2c[1];
  }
  in_stack_00000004 = uVar1;
  in_stack_00000008 = uVar2;
  FUN_00155144();
  FUN_0001cd7c();
  printerApi_service_k3c_CallContext();
  if (puStack_24 != (undefined4 *)0x0) {
    (*(code *)*puStack_24)();
    printerApi_controller_move_MoveController_SetMoveYAxis_deferwrap1();
                    /* WARNING: Could not recover jumptable at 0x00654dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
  (*pcRam00000000)();
  printerApi_controller_move_MoveController_SetMoveYAxis_deferwrap1();
                    /* WARNING: Could not recover jumptable at 0x00654df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/move.MoveController.SetMoveZAxis @ 00654e30 (size 440) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_move_MoveController_SetMoveZAxis(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *puStack_2c;
  char cStack_28;
  undefined4 *puStack_24;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x654fec;
    FUN_00096bb8();
  }
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
  printerApi_cloud_ReportWorkBusyStatus(0);
  uVar2 = in_stack_00000008;
  uVar1 = in_stack_00000004;
  FUN_0008e314();
  if (cStack_28 != '\0') {
    uVar1 = *puStack_2c;
    uVar2 = puStack_2c[1];
  }
  in_stack_00000004 = uVar1;
  in_stack_00000008 = uVar2;
  FUN_00155144();
  FUN_0001cd7c();
  printerApi_service_k3c_CallContext();
  if (puStack_24 != (undefined4 *)0x0) {
    (*(code *)*puStack_24)();
    printerApi_controller_move_MoveController_SetMoveZAxis_deferwrap1();
                    /* WARNING: Could not recover jumptable at 0x00654fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
  (*pcRam00000000)();
  printerApi_controller_move_MoveController_SetMoveZAxis_deferwrap1();
                    /* WARNING: Could not recover jumptable at 0x00654fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/move.MoveController.SetMoveXZero @ 00655014 (size 312) */

void printerApi_controller_move_MoveController_SetMoveXZero(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *puStack_18;
  char cStack_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x655150;
    FUN_00096bb8();
  }
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
  printerApi_cloud_ReportWorkBusyStatus(0);
  uVar2 = in_stack_00000008;
  uVar1 = in_stack_00000004;
  FUN_0008e314();
  if (cStack_14 != '\0') {
    uVar1 = *puStack_18;
    uVar2 = puStack_18[1];
  }
  in_stack_00000004 = uVar1;
  in_stack_00000008 = uVar2;
  FUN_0001cd7c();
  printerApi_service_k3c_Call();
  if (puStack_18 != (undefined4 *)0x0) {
    printerApi_controller_move_MoveController_SetMoveXZero_deferwrap1();
                    /* WARNING: Could not recover jumptable at 0x0065511c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
  printerApi_controller_move_MoveController_SetMoveXZero_deferwrap1();
                    /* WARNING: Could not recover jumptable at 0x0065513c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/move.MoveController.SetMoveYZero @ 0065516c (size 312) */

void printerApi_controller_move_MoveController_SetMoveYZero(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *puStack_18;
  char cStack_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x6552a8;
    FUN_00096bb8();
  }
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
  printerApi_cloud_ReportWorkBusyStatus(0);
  uVar2 = in_stack_00000008;
  uVar1 = in_stack_00000004;
  FUN_0008e314();
  if (cStack_14 != '\0') {
    uVar1 = *puStack_18;
    uVar2 = puStack_18[1];
  }
  in_stack_00000004 = uVar1;
  in_stack_00000008 = uVar2;
  FUN_0001cd7c();
  printerApi_service_k3c_Call();
  if (puStack_18 != (undefined4 *)0x0) {
    printerApi_controller_move_MoveController_SetMoveYZero_deferwrap1();
                    /* WARNING: Could not recover jumptable at 0x00655274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
  printerApi_controller_move_MoveController_SetMoveYZero_deferwrap1();
                    /* WARNING: Could not recover jumptable at 0x00655294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/move.MoveController.SetMoveZZero @ 006552c4 (size 312) */

void printerApi_controller_move_MoveController_SetMoveZZero(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *puStack_18;
  char cStack_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x655400;
    FUN_00096bb8();
  }
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
  printerApi_cloud_ReportWorkBusyStatus(0);
  uVar2 = in_stack_00000008;
  uVar1 = in_stack_00000004;
  FUN_0008e314();
  if (cStack_14 != '\0') {
    uVar1 = *puStack_18;
    uVar2 = puStack_18[1];
  }
  in_stack_00000004 = uVar1;
  in_stack_00000008 = uVar2;
  FUN_0001cd7c();
  printerApi_service_k3c_Call();
  if (puStack_18 != (undefined4 *)0x0) {
    printerApi_controller_move_MoveController_SetMoveZZero_deferwrap1();
                    /* WARNING: Could not recover jumptable at 0x006553cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
  printerApi_controller_move_MoveController_SetMoveZZero_deferwrap1();
                    /* WARNING: Could not recover jumptable at 0x006553ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/move.MoveController.SetMoveXYZero @ 0065541c (size 312) */

void printerApi_controller_move_MoveController_SetMoveXYZero(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *local_18;
  char local_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
  printerApi_cloud_ReportWorkBusyStatus(0);
  uVar2 = in_stack_00000008;
  uVar1 = in_stack_00000004;
  FUN_0008e314();
  if (local_14 != '\0') {
    uVar1 = *local_18;
    uVar2 = local_18[1];
  }
  in_stack_00000004 = uVar1;
  in_stack_00000008 = uVar2;
  FUN_0001cd7c();
  printerApi_service_k3c_Call();
  if (local_18 != (undefined4 *)0x0) {
    printerApi_controller_move_MoveController_SetMoveXYZero_deferwrap1();
    return;
  }
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
  printerApi_controller_move_MoveController_SetMoveXYZero_deferwrap1();
  return;
}



/* printerApi/controller/move.MoveController.SetPrintSpeed @ 00655574 (size 224) */

void printerApi_controller_move_MoveController_SetPrintSpeed(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *local_10;
  char local_c;
  
  while (uVar2 = in_stack_00000008, uVar1 = in_stack_00000004,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0008e314();
  if (local_c != '\0') {
    uVar1 = *local_10;
    uVar2 = local_10[1];
  }
  in_stack_00000004 = uVar1;
  in_stack_00000008 = uVar2;
  FUN_0001cd7c();
  printerApi_service_k3c_Call();
  if (local_10 == (undefined4 *)0x0) {
    return;
  }
  return;
}



/* printerApi/controller/move.MoveController.SetMaxPrintSpeed @ 00655668 (size 224) */

void printerApi_controller_move_MoveController_SetMaxPrintSpeed(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *puStack_10;
  char cStack_c;
  
  while (uVar2 = in_stack_00000008, uVar1 = in_stack_00000004,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x655744;
    FUN_00096bb8();
  }
  FUN_0008e314();
  if (cStack_c != '\0') {
    uVar1 = *puStack_10;
    uVar2 = puStack_10[1];
  }
  in_stack_00000004 = uVar1;
  in_stack_00000008 = uVar2;
  FUN_0001cd7c();
  printerApi_service_k3c_Call();
  if (puStack_10 == (undefined4 *)0x0) {
    in_stack_00000020 = 0;
    in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x00655738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00655724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/move.MoveController.SetMaxTurnSpeed @ 0065575c (size 224) */

void printerApi_controller_move_MoveController_SetMaxTurnSpeed(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *local_10;
  char local_c;
  
  while (uVar2 = in_stack_00000008, uVar1 = in_stack_00000004,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0008e314();
  if (local_c != '\0') {
    uVar1 = *local_10;
    uVar2 = local_10[1];
  }
  in_stack_00000004 = uVar1;
  in_stack_00000008 = uVar2;
  FUN_0001cd7c();
  printerApi_service_k3c_Call();
  if (local_10 == (undefined4 *)0x0) {
    return;
  }
  return;
}



/* printerApi/controller/move.MoveController.SetMaxAccSpeed @ 00655850 (size 224) */

void printerApi_controller_move_MoveController_SetMaxAccSpeed(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *puStack_10;
  char cStack_c;
  
  while (uVar2 = in_stack_00000008, uVar1 = in_stack_00000004,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x65592c;
    FUN_00096bb8();
  }
  FUN_0008e314();
  if (cStack_c != '\0') {
    uVar1 = *puStack_10;
    uVar2 = puStack_10[1];
  }
  in_stack_00000004 = uVar1;
  in_stack_00000008 = uVar2;
  FUN_0001cd7c();
  printerApi_service_k3c_Call();
  if (puStack_10 == (undefined4 *)0x0) {
    in_stack_00000020 = 0;
    in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x00655920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0065590c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/move.MoveController.SetAcc2DecelLimit @ 00655944 (size 224) */

void printerApi_controller_move_MoveController_SetAcc2DecelLimit(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *puStack_10;
  char cStack_c;
  
  while (uVar2 = in_stack_00000008, uVar1 = in_stack_00000004,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x655a20;
    FUN_00096bb8();
  }
  FUN_0008e314();
  if (cStack_c != '\0') {
    uVar1 = *puStack_10;
    uVar2 = puStack_10[1];
  }
  in_stack_00000004 = uVar1;
  in_stack_00000008 = uVar2;
  FUN_0001cd7c();
  printerApi_service_k3c_Call();
  if (puStack_10 == (undefined4 *)0x0) {
    in_stack_00000020 = 0;
    in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x00655a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00655a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/move.MoveController.SetExtruFlow @ 00655a38 (size 224) */

void printerApi_controller_move_MoveController_SetExtruFlow(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *puStack_10;
  char cStack_c;
  
  while (uVar2 = in_stack_00000008, uVar1 = in_stack_00000004,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x655b14;
    FUN_00096bb8();
  }
  FUN_0008e314();
  if (cStack_c != '\0') {
    uVar1 = *puStack_10;
    uVar2 = puStack_10[1];
  }
  in_stack_00000004 = uVar1;
  in_stack_00000008 = uVar2;
  FUN_0001cd7c();
  printerApi_service_k3c_Call();
  if (puStack_10 == (undefined4 *)0x0) {
    in_stack_00000020 = 0;
    in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x00655b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00655af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/move.MoveController.SetPreValue @ 00655b2c (size 224) */

void printerApi_controller_move_MoveController_SetPreValue(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *local_10;
  char local_c;
  
  while (uVar2 = in_stack_00000008, uVar1 = in_stack_00000004,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0008e314();
  if (local_c != '\0') {
    uVar1 = *local_10;
    uVar2 = local_10[1];
  }
  in_stack_00000004 = uVar1;
  in_stack_00000008 = uVar2;
  FUN_0001cd7c();
  printerApi_service_k3c_Call();
  if (local_10 == (undefined4 *)0x0) {
    return;
  }
  return;
}



/* printerApi/controller/move.MoveController.SetPreSmoothTime @ 00655c20 (size 224) */

void printerApi_controller_move_MoveController_SetPreSmoothTime(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *puStack_10;
  char cStack_c;
  
  while (uVar2 = in_stack_00000008, uVar1 = in_stack_00000004,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x655cfc;
    FUN_00096bb8();
  }
  FUN_0008e314();
  if (cStack_c != '\0') {
    uVar1 = *puStack_10;
    uVar2 = puStack_10[1];
  }
  in_stack_00000004 = uVar1;
  in_stack_00000008 = uVar2;
  FUN_0001cd7c();
  printerApi_service_k3c_Call();
  if (puStack_10 == (undefined4 *)0x0) {
    in_stack_00000020 = 0;
    in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x00655cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00655cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/move.MoveController.SetMoveCloseMotor @ 00655d14 (size 224) */

void printerApi_controller_move_MoveController_SetMoveCloseMotor(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *puStack_10;
  char cStack_c;
  
  while (uVar2 = in_stack_00000008, uVar1 = in_stack_00000004,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x655df0;
    FUN_00096bb8();
  }
  FUN_0008e314();
  if (cStack_c != '\0') {
    uVar1 = *puStack_10;
    uVar2 = puStack_10[1];
  }
  in_stack_00000004 = uVar1;
  in_stack_00000008 = uVar2;
  FUN_0001cd7c();
  printerApi_service_k3c_Call();
  if (puStack_10 == (undefined4 *)0x0) {
    in_stack_00000020 = 0;
    in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x00655de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00655dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/move.MoveController.SetMoveZoffset @ 00655e08 (size 224) */

void printerApi_controller_move_MoveController_SetMoveZoffset(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *puStack_10;
  char cStack_c;
  
  while (uVar2 = in_stack_00000008, uVar1 = in_stack_00000004,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x655ee4;
    FUN_00096bb8();
  }
  FUN_0008e314();
  if (cStack_c != '\0') {
    uVar1 = *puStack_10;
    uVar2 = puStack_10[1];
  }
  in_stack_00000004 = uVar1;
  in_stack_00000008 = uVar2;
  FUN_0001cd7c();
  printerApi_service_k3c_Call();
  if (puStack_10 == (undefined4 *)0x0) {
    in_stack_00000020 = 0;
    in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x00655ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00655ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/move.MoveController.SetGcodeOffset @ 00655efc (size 900) */

void printerApi_controller_move_MoveController_SetGcodeOffset(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *extraout_r2;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined *in_stack_0000000c;
  undefined4 in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined *puStack_5c;
  undefined4 *puStack_50;
  char cStack_4c;
  undefined4 *puStack_48;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined *puStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined *puStack_8;
  undefined4 *puStack_4;
  
  while (uVar5 = in_stack_00000010, puVar2 = in_stack_0000000c, puVar1 = PTR_DAT_00656290,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x656284;
    FUN_00096bb8();
  }
  puStack_4 = (undefined4 *)0x0;
  in_stack_00000028 = 0;
  in_stack_0000002c = 0;
  puStack_5c = *(undefined **)PTR_DAT_0065628c;
  FUN_0008e314();
  puVar3 = extraout_r2;
  puVar4 = puVar2;
  if (cStack_4c != '\0') {
    uVar5 = puStack_50[1];
    puVar3 = puStack_50;
    puVar4 = (undefined *)*puStack_50;
  }
  FUN_00098a20(0,auStack_24,puVar3,puVar4);
  uStack_14 = in_stack_00000004;
  uStack_10 = in_stack_00000008;
  uStack_20 = uVar5;
  FUN_0008b6b8();
  if (in_stack_00000014 != 0) {
    FUN_0008a4bc();
    puStack_8 = puVar2;
    puStack_5c = puVar1;
    FUN_0008e7bc();
    *puStack_50 = PTR_DAT_0065629c;
    puVar3 = puStack_50;
    if (*(int *)PTR_DAT_006562a0 != 0) {
      puVar3 = (undefined4 *)FUN_00098688();
      *unaff_r8 = puStack_8;
      unaff_r8[1] = puVar3[1];
    }
    puVar3[1] = puStack_8;
  }
  if (in_stack_00000018 != 0) {
    FUN_0001cec0();
    puStack_8 = puStack_5c;
    puStack_5c = puVar1;
    FUN_0008e7bc();
    *puStack_50 = PTR_DAT_006562a8;
    puVar3 = puStack_50;
    if (*(int *)PTR_DAT_006562a0 != 0) {
      puVar3 = (undefined4 *)FUN_00098688();
      *unaff_r8 = puStack_8;
      unaff_r8[1] = puVar3[1];
    }
    puVar3[1] = puStack_8;
  }
  if (in_stack_0000001c != 0) {
    FUN_0001cec0();
    puStack_8 = puStack_5c;
    FUN_0008e7bc();
    *puStack_50 = PTR_DAT_006562a8;
    if (*(int *)PTR_DAT_006562a0 != 0) {
      puStack_50 = (undefined4 *)FUN_00098688();
      *unaff_r8 = puStack_8;
      unaff_r8[1] = puStack_50[1];
    }
    puStack_50[1] = puStack_8;
  }
  puStack_1c = PTR_DAT_00656294;
  puStack_18 = puVar1;
  FUN_00155144();
  puStack_4 = puStack_48;
  FUN_0001cd7c();
  printerApi_service_k3c_CallContext();
  if (puStack_48 == (undefined4 *)0x0) {
    in_stack_00000028 = 0;
    in_stack_0000002c = 0;
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00656270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00656248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/move.MoveController.SetVelocity @ 006562c8 (size 224) */

void printerApi_controller_move_MoveController_SetVelocity(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *local_10;
  char local_c;
  
  while (uVar2 = in_stack_00000008, uVar1 = in_stack_00000004,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0008e314();
  if (local_c != '\0') {
    uVar1 = *local_10;
    uVar2 = local_10[1];
  }
  in_stack_00000004 = uVar1;
  in_stack_00000008 = uVar2;
  FUN_0001cd7c();
  printerApi_service_k3c_Call();
  if (local_10 == (undefined4 *)0x0) {
    return;
  }
  return;
}



/* printerApi/controller/move.MoveController.ZOffsetApply @ 006563bc (size 224) */

void printerApi_controller_move_MoveController_ZOffsetApply(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *local_10;
  char local_c;
  
  while (uVar2 = in_stack_00000008, uVar1 = in_stack_00000004,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0008e314();
  if (local_c != '\0') {
    uVar1 = *local_10;
    uVar2 = local_10[1];
  }
  in_stack_00000004 = uVar1;
  in_stack_00000008 = uVar2;
  FUN_0001cd7c();
  printerApi_service_k3c_Call();
  if (local_10 == (undefined4 *)0x0) {
    return;
  }
  return;
}



/* printerApi/controller/move.MoveController.ZOffsetApplyAbsolute @ 006564b0 (size 224) */

void printerApi_controller_move_MoveController_ZOffsetApplyAbsolute(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *puStack_10;
  char cStack_c;
  
  while (uVar2 = in_stack_00000008, uVar1 = in_stack_00000004,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x65658c;
    FUN_00096bb8();
  }
  FUN_0008e314();
  if (cStack_c != '\0') {
    uVar1 = *puStack_10;
    uVar2 = puStack_10[1];
  }
  in_stack_00000004 = uVar1;
  in_stack_00000008 = uVar2;
  FUN_0001cd7c();
  printerApi_service_k3c_Call();
  if (puStack_10 == (undefined4 *)0x0) {
    in_stack_00000020 = 0;
    in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x00656580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0065656c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/move.MoveController.SetScurvePlan @ 006565a4 (size 224) */

void printerApi_controller_move_MoveController_SetScurvePlan(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *local_10;
  char local_c;
  
  while (uVar2 = in_stack_00000008, uVar1 = in_stack_00000004,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0008e314();
  if (local_c != '\0') {
    uVar1 = *local_10;
    uVar2 = local_10[1];
  }
  in_stack_00000004 = uVar1;
  in_stack_00000008 = uVar2;
  FUN_0001cd7c();
  printerApi_service_k3c_Call();
  if (local_10 == (undefined4 *)0x0) {
    return;
  }
  return;
}



/* printerApi/controller/move.MoveController.SetMoveXYZero.deferwrap1 @ 00656698 (size 84) */

void printerApi_controller_move_MoveController_SetMoveXYZero_deferwrap1(void)

{
  int *piVar1;
  int unaff_r10;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&local_4;
  }
  local_4 = 0x16;
  printerApi_cloud_ReportWorkFreeStatus();
  return;
}



/* printerApi/controller/move.MoveController.SetMoveZZero.deferwrap1 @ 006566ec (size 84) */

void printerApi_controller_move_MoveController_SetMoveZZero_deferwrap1(void)

{
  int *piVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x656720;
    FUN_00096bb8();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_4;
  }
  uStack_4 = 0x18;
  printerApi_cloud_ReportWorkFreeStatus();
                    /* WARNING: Could not recover jumptable at 0x00656714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/move.MoveController.SetMoveYZero.deferwrap1 @ 00656740 (size 84) */

void printerApi_controller_move_MoveController_SetMoveYZero_deferwrap1(void)

{
  int *piVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x656774;
    FUN_00096bb8();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_4;
  }
  uStack_4 = 0x14;
  printerApi_cloud_ReportWorkFreeStatus();
                    /* WARNING: Could not recover jumptable at 0x00656768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/move.MoveController.SetMoveXZero.deferwrap1 @ 00656794 (size 84) */

void printerApi_controller_move_MoveController_SetMoveXZero_deferwrap1(void)

{
  int *piVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x6567c8;
    FUN_00096bb8();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_4;
  }
  uStack_4 = 0x12;
  printerApi_cloud_ReportWorkFreeStatus();
                    /* WARNING: Could not recover jumptable at 0x006567bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/move.MoveController.SetMoveZAxis.deferwrap1 @ 006567e8 (size 84) */

void printerApi_controller_move_MoveController_SetMoveZAxis_deferwrap1(void)

{
  int *piVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x65681c;
    FUN_00096bb8();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_4;
  }
  uStack_4 = 0x18;
  printerApi_cloud_ReportWorkFreeStatus();
                    /* WARNING: Could not recover jumptable at 0x00656810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/move.MoveController.SetMoveYAxis.deferwrap1 @ 0065683c (size 84) */

void printerApi_controller_move_MoveController_SetMoveYAxis_deferwrap1(void)

{
  int *piVar1;
  int unaff_r10;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&local_4;
  }
  local_4 = 0x14;
  printerApi_cloud_ReportWorkFreeStatus();
  return;
}



/* printerApi/controller/move.MoveController.SetMoveXAxis.deferwrap1 @ 00656890 (size 84) */

void printerApi_controller_move_MoveController_SetMoveXAxis_deferwrap1(void)

{
  int *piVar1;
  int unaff_r10;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&local_4;
  }
  local_4 = 0x12;
  printerApi_cloud_ReportWorkFreeStatus();
  return;
}



/* printerApi/controller/move.MoveController.SetMoveAllZero.deferwrap1 @ 006568e4 (size 84) */

void printerApi_controller_move_MoveController_SetMoveAllZero_deferwrap1(void)

{
  int *piVar1;
  int unaff_r10;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&local_4;
  }
  local_4 = 0x1a;
  printerApi_cloud_ReportWorkFreeStatus();
  return;
}



/* printerApi/controller/move.(*MoveController).SetAcc2DecelLimit @ 00656938 (size 132) */

void printerApi_controller_move___MoveController__SetAcc2DecelLimit(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_move_MoveController_SetAcc2DecelLimit();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00656988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x65699c;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/move.(*MoveController).SetExtruFlow @ 006569bc (size 132) */

void printerApi_controller_move___MoveController__SetExtruFlow(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_move_MoveController_SetExtruFlow();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00656a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x656a20;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/move.(*MoveController).SetGcodeOffset @ 00656a40 (size 132) */

void printerApi_controller_move___MoveController__SetGcodeOffset(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x30);
      *(undefined4 *)((int)register0x00000054 + -0x30) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x2c);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098dfc(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x2c));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x28);
        printerApi_controller_move_MoveController_SetGcodeOffset();
        *(undefined4 *)((int)register0x00000054 + 0x2c) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x30) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00656a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x30))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x30);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x656aa4;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/move.(*MoveController).SetMaxAccSpeed @ 00656ac4 (size 132) */

void printerApi_controller_move___MoveController__SetMaxAccSpeed(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_move_MoveController_SetMaxAccSpeed();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00656b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x656b28;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/move.(*MoveController).SetMaxPrintSpeed @ 00656b48 (size 132) */

void printerApi_controller_move___MoveController__SetMaxPrintSpeed(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_move_MoveController_SetMaxPrintSpeed();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00656b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x656bac;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/move.(*MoveController).SetMaxTurnSpeed @ 00656bcc (size 132) */

void printerApi_controller_move___MoveController__SetMaxTurnSpeed(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_move_MoveController_SetMaxTurnSpeed();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x656c30;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/move.(*MoveController).SetMoveAllZero @ 00656c50 (size 132) */

void printerApi_controller_move___MoveController__SetMoveAllZero(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_move_MoveController_SetMoveAllZero();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x656cb4;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/move.(*MoveController).SetMoveCloseMotor @ 00656cd4 (size 132) */

void printerApi_controller_move___MoveController__SetMoveCloseMotor(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_move_MoveController_SetMoveCloseMotor();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00656d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x656d38;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/move.(*MoveController).SetMoveXAxis @ 00656d58 (size 132) */

void printerApi_controller_move___MoveController__SetMoveXAxis(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_move_MoveController_SetMoveXAxis();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x656dbc;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/move.(*MoveController).SetMoveXYZero @ 00656ddc (size 132) */

void printerApi_controller_move___MoveController__SetMoveXYZero(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_move_MoveController_SetMoveXYZero();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x656e40;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/move.(*MoveController).SetMoveXZero @ 00656e60 (size 132) */

void printerApi_controller_move___MoveController__SetMoveXZero(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_move_MoveController_SetMoveXZero();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00656eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x656ec4;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/move.(*MoveController).SetMoveYAxis @ 00656ee4 (size 132) */

void printerApi_controller_move___MoveController__SetMoveYAxis(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_move_MoveController_SetMoveYAxis();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00656f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x656f48;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/move.(*MoveController).SetMoveYZero @ 00656f68 (size 132) */

void printerApi_controller_move___MoveController__SetMoveYZero(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_move_MoveController_SetMoveYZero();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00656fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x656fcc;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/move.(*MoveController).SetMoveZAxis @ 00656fec (size 132) */

void printerApi_controller_move___MoveController__SetMoveZAxis(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_move_MoveController_SetMoveZAxis();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0065703c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x657050;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/move.(*MoveController).SetMoveZZero @ 00657070 (size 132) */

void printerApi_controller_move___MoveController__SetMoveZZero(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_move_MoveController_SetMoveZZero();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x006570c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x6570d4;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/move.(*MoveController).SetMoveZoffset @ 006570f4 (size 132) */

void printerApi_controller_move___MoveController__SetMoveZoffset(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_move_MoveController_SetMoveZoffset();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00657144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x657158;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/move.(*MoveController).SetPreSmoothTime @ 00657178 (size 132) */

void printerApi_controller_move___MoveController__SetPreSmoothTime(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_move_MoveController_SetPreSmoothTime();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x006571c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x6571dc;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/move.(*MoveController).SetPreValue @ 006571fc (size 132) */

void printerApi_controller_move___MoveController__SetPreValue(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_move_MoveController_SetPreValue();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x657260;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/move.(*MoveController).SetPrintSpeed @ 00657280 (size 132) */

void printerApi_controller_move___MoveController__SetPrintSpeed(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_move_MoveController_SetPrintSpeed();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x6572e4;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/move.(*MoveController).SetScurvePlan @ 00657304 (size 132) */

void printerApi_controller_move___MoveController__SetScurvePlan(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_move_MoveController_SetScurvePlan();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x657368;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/move.(*MoveController).SetVelocity @ 00657388 (size 132) */

void printerApi_controller_move___MoveController__SetVelocity(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_move_MoveController_SetVelocity();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x6573ec;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/move.(*MoveController).ZOffsetApply @ 0065740c (size 132) */

void printerApi_controller_move___MoveController__ZOffsetApply(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_move_MoveController_ZOffsetApply();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x657470;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/move.(*MoveController).ZOffsetApplyAbsolute @ 00657490 (size 132) */

void printerApi_controller_move___MoveController__ZOffsetApplyAbsolute(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_move_MoveController_ZOffsetApplyAbsolute();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x006574e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x6574f4;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



