// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/service/store/printer   functions: 6
/* printerApi/service/store/printer.init @ 0044ab24 (size 84) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_store_printer_init(void)

{
  undefined4 extraout_r1;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x44ab74;
    FUN_00096bb8();
  }
  printerApi_service_store_printer_NewPrinter();
  if (*_UNK_0044ab7c != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r1;
    unaff_r8[1] = *_UNK_0044ab80;
    uStack_4 = extraout_r1;
  }
  *_UNK_0044ab80 = uStack_4;
                    /* WARNING: Could not recover jumptable at 0x0044ab68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/store/printer.ResetPrintTask @ 0044ab84 (size 276) */

void printerApi_service_store_printer_ResetPrintTask(void)

{
  int iVar1;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  iVar1 = *(int *)(*DAT_0044ac9c + 0x18);
  uVar5 = CONCAT44(iVar1,*DAT_0044ac9c);
  if (iVar1 != 0) {
    if (*(int **)(iVar1 + 0x2c) == (int *)0x0) {
      bVar2 = false;
    }
    else {
      bVar2 = **(int **)(iVar1 + 0x2c) != 0;
    }
    if (*(int *)(iVar1 + 0x30) == 0) {
      bVar3 = false;
    }
    else {
      bVar3 = *(int *)(*(int *)(iVar1 + 0x30) + 4) != 0;
    }
    if (*(int *)(iVar1 + 0x20) == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = *(int *)(*(int *)(iVar1 + 0x20) + 4) != 0;
    }
    if (((bVar2) || (bVar3)) || (bVar4)) {
      if (*DAT_0044aca0 != 0) {
        uVar5 = FUN_00098688();
        *unaff_r8 = (int)((ulonglong)uVar5 >> 0x20);
        unaff_r8[1] = *(undefined4 *)((int)uVar5 + 0x1c);
      }
      *(int *)((int)uVar5 + 0x1c) = (int)((ulonglong)uVar5 >> 0x20);
    }
  }
  printerApi_service_store_printer_NewPrintTaskInfo();
  iVar1 = *DAT_0044ac9c;
  if (*DAT_0044aca0 != 0) {
    iVar1 = FUN_00098688();
    *unaff_r8 = extraout_r2;
    unaff_r8[1] = *(undefined4 *)(iVar1 + 0x18);
    local_4 = extraout_r2;
  }
  *(undefined4 *)(iVar1 + 0x18) = local_4;
  return;
}



/* printerApi/service/store/printer.NewPrinter @ 0044aca4 (size 336) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_store_printer_NewPrinter(void)

{
  int extraout_r1;
  int *piVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int *in_stack_00000004;
  undefined4 uStack_28;
  int iStack_24;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x44adf0;
    FUN_00096bb8();
  }
  printerApi_service_store_printer_NewPrintTaskInfo();
  FUN_0001eed8();
  FUN_0001eed8();
  FUN_0001eed8();
  FUN_0001eed8();
  FUN_0001eed8();
  FUN_0001eed8();
  FUN_0001eed8();
  piVar1 = (int *)iStack_24;
  if (*_UNK_0044ae00 != 0) {
    FUN_000986d8();
    *unaff_r8 = uStack_28;
    unaff_r8[1] = iStack_24;
    unaff_r8[2] = iStack_24;
    unaff_r8[3] = iStack_24;
    unaff_r8[4] = iStack_24;
    unaff_r8[5] = iStack_24;
    unaff_r8[6] = iStack_24;
    piVar1 = (int *)extraout_r1;
  }
  piVar1[6] = uStack_28;
  *piVar1 = iStack_24;
  piVar1[1] = iStack_24;
  piVar1[2] = iStack_24;
  piVar1[3] = iStack_24;
  piVar1[4] = iStack_24;
  piVar1[5] = iStack_24;
  piVar1[8] = 0;
  piVar1[9] = 0;
  piVar1[10] = 0;
  in_stack_00000004 = piVar1;
                    /* WARNING: Could not recover jumptable at 0x0044ade4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/store/printer.(*Printer).CurrentPrintTask @ 0044ae04 (size 452) */

void printerApi_service_store_printer___Printer__CurrentPrintTask(void)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  char local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  iVar2 = *(int *)(in_stack_00000004 + 0x18);
  if (iVar2 == 0) {
    return;
  }
  puVar3 = *(undefined4 **)(iVar2 + 0x18);
  if (puVar3 != (undefined4 *)0x0) {
    pcVar4 = (char *)*puVar3;
    if (puVar3[1] == 6) {
      if (((*pcVar4 == 'f') &&
          ((((pcVar4[1] == 'a' && (pcVar4[2] == 'i')) && (pcVar4[3] == 'l')) &&
           ((pcVar4[4] == 'e' && (pcVar4[5] == 'd')))))) ||
         ((*pcVar4 == 's' &&
          (((pcVar4[1] == 't' && (pcVar4[2] == 'o')) &&
           ((pcVar4[3] == 'p' && ((pcVar4[4] == 'e' && (pcVar4[5] == 'd')))))))))) {
LAB_0044af04:
        bVar1 = true;
        goto LAB_0044af3c;
      }
    }
    else if ((puVar3[1] == 8) && (FUN_000150d4(), local_8 != '\0')) goto LAB_0044af04;
  }
  if ((*(int **)(iVar2 + 0x1c) == (int *)0x0) ||
     ((iVar5 = **(int **)(iVar2 + 0x1c), iVar5 != 2 && (iVar5 != 3)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
LAB_0044af3c:
  if (bVar1) {
    return;
  }
  if (((*(int **)(iVar2 + 0x2c) == (int *)0x0) || (**(int **)(iVar2 + 0x2c) == 0)) &&
     (((*(int *)(iVar2 + 0x30) == 0 || (*(int *)(*(int *)(iVar2 + 0x30) + 4) == 0)) &&
      ((*(int *)(iVar2 + 0x20) == 0 || (*(int *)(*(int *)(iVar2 + 0x20) + 4) == 0)))))) {
    return;
  }
  return;
}



/* printerApi/service/store/printer.NewPrintTaskInfo @ 0044afd0 (size 648) */

void printerApi_service_store_printer_NewPrintTaskInfo(void)

{
  undefined4 *puVar1;
  undefined4 *extraout_r1;
  undefined4 *puVar2;
  undefined4 *extraout_r2;
  undefined4 *extraout_r3;
  undefined4 *puVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined8 uVar4;
  undefined4 in_stack_00000004;
  undefined4 *local_40;
  
  uVar4 = CONCAT44(local_40,local_40);
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0001eed8();
  FUN_0001eed8();
  FUN_0001eed8();
  FUN_0001eed8();
  FUN_0001eed8();
  FUN_0001eed8();
  FUN_0001eed8();
  FUN_0001eed8();
  local_40[1] = 0;
  *local_40 = 0;
  FUN_0001eed8();
  FUN_0001eed8();
  FUN_0001eed8();
  FUN_0001eed8();
  local_40[1] = 0;
  *local_40 = 0;
  FUN_0001eed8();
  FUN_0001eed8();
  puVar2 = local_40;
  puVar3 = local_40;
  if (*(int *)PTR_DAT_0044b26c != 0) {
    FUN_000986e8();
    *unaff_r8 = local_40;
    unaff_r8[1] = local_40;
    unaff_r8[2] = local_40;
    unaff_r8[3] = local_40;
    unaff_r8[4] = local_40;
    unaff_r8[5] = local_40;
    unaff_r8[6] = local_40;
    unaff_r8[7] = local_40;
    uVar4 = FUN_000986a8();
    *unaff_r8 = local_40;
    unaff_r8[1] = local_40;
    unaff_r8[2] = local_40;
    unaff_r8[3] = local_40;
    puVar2 = extraout_r2;
    puVar3 = extraout_r3;
  }
  puVar1 = (undefined4 *)((ulonglong)uVar4 >> 0x20);
  *puVar1 = (int)uVar4;
  puVar1[1] = puVar2;
  puVar1[2] = puVar3;
  puVar1[3] = local_40;
  puVar1[4] = local_40;
  puVar1[5] = local_40;
  puVar1[7] = local_40;
  puVar1[8] = local_40;
  puVar1[9] = local_40;
  puVar1[10] = local_40;
  puVar1[0xb] = local_40;
  puVar1[0xc] = local_40;
  FUN_0001eed8();
  puVar2 = local_40;
  if (*(int *)PTR_DAT_0044b26c != 0) {
    FUN_00098698();
    *unaff_r8 = local_40;
    unaff_r8[1] = extraout_r1;
    unaff_r8[2] = puVar1[0xd];
    puVar2 = extraout_r1;
  }
  *puVar2 = local_40;
  puVar1[0xd] = puVar2;
  return;
}



/* printerApi/service/store/printer.(*PrintTaskInfo).Update @ 0044b274 (size 928) */

void printerApi_service_store_printer___PrintTaskInfo__Update(void)

{
  int *piVar1;
  int extraout_r1;
  undefined4 *puVar2;
  int iVar3;
  int extraout_r2;
  int *unaff_r8;
  int unaff_r10;
  undefined8 uVar4;
  undefined4 *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  int in_stack_00000038;
  int *in_stack_0000003c;
  int in_stack_00000040;
  int local_8;
  
  while (uVar4 = CONCAT44(in_stack_00000004,in_stack_00000008),
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  puVar2 = in_stack_00000004;
  if (in_stack_00000008 != 0) {
    if (*DAT_0044b618 != 0) {
      uVar4 = FUN_00098688();
      *unaff_r8 = (int)uVar4;
      unaff_r8[1] = *(int *)((ulonglong)uVar4 >> 0x20);
    }
    puVar2 = (undefined4 *)((ulonglong)uVar4 >> 0x20);
    *puVar2 = (int)uVar4;
  }
  uVar4 = CONCAT44(puVar2,in_stack_0000000c);
  if (in_stack_0000000c != 0) {
    if (*DAT_0044b618 != 0) {
      uVar4 = FUN_00098688();
      *unaff_r8 = (int)uVar4;
      unaff_r8[1] = *(int *)((int)((ulonglong)uVar4 >> 0x20) + 4);
    }
    puVar2 = (undefined4 *)((ulonglong)uVar4 >> 0x20);
    puVar2[1] = (int)uVar4;
  }
  uVar4 = CONCAT44(puVar2,in_stack_00000010);
  if (in_stack_00000010 != 0) {
    if (*DAT_0044b618 != 0) {
      uVar4 = FUN_00098688();
      *unaff_r8 = (int)uVar4;
      unaff_r8[1] = *(int *)((int)((ulonglong)uVar4 >> 0x20) + 8);
    }
    puVar2 = (undefined4 *)((ulonglong)uVar4 >> 0x20);
    puVar2[2] = (int)uVar4;
  }
  uVar4 = CONCAT44(puVar2,in_stack_00000014);
  if (in_stack_00000014 != 0) {
    if (*DAT_0044b618 != 0) {
      uVar4 = FUN_00098688();
      *unaff_r8 = (int)uVar4;
      unaff_r8[1] = *(int *)((int)((ulonglong)uVar4 >> 0x20) + 0xc);
    }
    puVar2 = (undefined4 *)((ulonglong)uVar4 >> 0x20);
    puVar2[3] = (int)uVar4;
  }
  uVar4 = CONCAT44(puVar2,in_stack_00000018);
  if (in_stack_00000018 != 0) {
    if (*DAT_0044b618 != 0) {
      uVar4 = FUN_00098688();
      *unaff_r8 = (int)uVar4;
      unaff_r8[1] = *(int *)((int)((ulonglong)uVar4 >> 0x20) + 0x10);
    }
    puVar2 = (undefined4 *)((ulonglong)uVar4 >> 0x20);
    puVar2[4] = (int)uVar4;
  }
  uVar4 = CONCAT44(puVar2,in_stack_0000001c);
  if (in_stack_0000001c != 0) {
    if (*DAT_0044b618 != 0) {
      uVar4 = FUN_00098688();
      *unaff_r8 = (int)uVar4;
      unaff_r8[1] = *(int *)((int)((ulonglong)uVar4 >> 0x20) + 0x14);
    }
    puVar2 = (undefined4 *)((ulonglong)uVar4 >> 0x20);
    puVar2[5] = (int)uVar4;
  }
  uVar4 = CONCAT44(puVar2,in_stack_00000020);
  if (in_stack_00000020 != 0) {
    if (*DAT_0044b618 != 0) {
      uVar4 = FUN_00098688();
      *unaff_r8 = (int)uVar4;
      unaff_r8[1] = *(int *)((int)((ulonglong)uVar4 >> 0x20) + 0x18);
    }
    puVar2 = (undefined4 *)((ulonglong)uVar4 >> 0x20);
    puVar2[6] = (int)uVar4;
  }
  uVar4 = CONCAT44(puVar2,in_stack_00000024);
  if (in_stack_00000024 != 0) {
    if (*DAT_0044b618 != 0) {
      uVar4 = FUN_00098688();
      *unaff_r8 = (int)uVar4;
      unaff_r8[1] = *(int *)((int)((ulonglong)uVar4 >> 0x20) + 0x1c);
    }
    puVar2 = (undefined4 *)((ulonglong)uVar4 >> 0x20);
    puVar2[7] = (int)uVar4;
  }
  uVar4 = CONCAT44(puVar2,in_stack_00000028);
  if (in_stack_00000028 != 0) {
    if (*DAT_0044b618 != 0) {
      uVar4 = FUN_00098688();
      *unaff_r8 = (int)uVar4;
      unaff_r8[1] = *(int *)((int)((ulonglong)uVar4 >> 0x20) + 0x20);
    }
    puVar2 = (undefined4 *)((ulonglong)uVar4 >> 0x20);
    puVar2[8] = (int)uVar4;
  }
  uVar4 = CONCAT44(puVar2,in_stack_0000002c);
  if (in_stack_0000002c != 0) {
    if (*DAT_0044b618 != 0) {
      uVar4 = FUN_00098688();
      *unaff_r8 = (int)uVar4;
      unaff_r8[1] = *(int *)((int)((ulonglong)uVar4 >> 0x20) + 0x24);
    }
    puVar2 = (undefined4 *)((ulonglong)uVar4 >> 0x20);
    puVar2[9] = (int)uVar4;
  }
  uVar4 = CONCAT44(puVar2,in_stack_00000030);
  if (in_stack_00000030 != 0) {
    if (*DAT_0044b618 != 0) {
      uVar4 = FUN_00098688();
      *unaff_r8 = (int)uVar4;
      unaff_r8[1] = *(int *)((int)((ulonglong)uVar4 >> 0x20) + 0x28);
    }
    puVar2 = (undefined4 *)((ulonglong)uVar4 >> 0x20);
    puVar2[10] = (int)uVar4;
  }
  uVar4 = CONCAT44(puVar2,in_stack_00000034);
  if (in_stack_00000034 != 0) {
    if (*DAT_0044b618 != 0) {
      uVar4 = FUN_00098688();
      *unaff_r8 = (int)uVar4;
      unaff_r8[1] = *(int *)((int)((ulonglong)uVar4 >> 0x20) + 0x2c);
    }
    puVar2 = (undefined4 *)((ulonglong)uVar4 >> 0x20);
    puVar2[0xb] = (int)uVar4;
  }
  uVar4 = CONCAT44(puVar2,in_stack_00000038);
  if (in_stack_00000038 != 0) {
    if (*DAT_0044b618 != 0) {
      uVar4 = FUN_00098688();
      *unaff_r8 = (int)uVar4;
      unaff_r8[1] = *(int *)((int)((ulonglong)uVar4 >> 0x20) + 0x30);
    }
    puVar2 = (undefined4 *)((ulonglong)uVar4 >> 0x20);
    puVar2[0xc] = (int)uVar4;
  }
  uVar4 = CONCAT44(puVar2,in_stack_00000040);
  if (in_stack_00000040 != 0) {
    if (*DAT_0044b618 != 0) {
      uVar4 = FUN_00098688();
      *unaff_r8 = (int)uVar4;
      unaff_r8[1] = *(int *)((int)((ulonglong)uVar4 >> 0x20) + 0x38);
    }
    puVar2 = (undefined4 *)((ulonglong)uVar4 >> 0x20);
    puVar2[0xe] = (int)uVar4;
  }
  if ((in_stack_0000003c != (int *)0x0) && (*in_stack_0000003c != 0)) {
    if (puVar2[0xd] == 0) {
      FUN_0001eed8();
      if (*DAT_0044b618 != 0) {
        FUN_00098688();
        *unaff_r8 = extraout_r1;
        unaff_r8[1] = in_stack_00000004[0xd];
        local_8 = extraout_r1;
      }
      in_stack_00000004[0xd] = local_8;
      puVar2 = in_stack_00000004;
    }
    piVar1 = (int *)puVar2[0xd];
    iVar3 = *in_stack_0000003c;
    if (*DAT_0044b618 != 0) {
      piVar1 = (int *)FUN_00098688();
      *unaff_r8 = extraout_r2;
      unaff_r8[1] = *piVar1;
      iVar3 = extraout_r2;
    }
    *piVar1 = iVar3;
  }
  return;
}



